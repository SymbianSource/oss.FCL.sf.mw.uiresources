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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000087a8 };

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
0x876f,	// (0x00010f17) Screen

0x8781,	// (0x00010f29) application_window_ParamLimits

0x8781,	// (0x00010f29) application_window

0x8799,	// (0x00010f41) screen_g1

0x87a3,	// (0x00010f4b) area_bottom_pane_ParamLimits

0x87a3,	// (0x00010f4b) area_bottom_pane

0x8808,	// (0x00010fb0) area_top_pane_ParamLimits

0x8808,	// (0x00010fb0) area_top_pane

0x661c,	// (0x0000edc4) main_pane_ParamLimits

0x661c,	// (0x0000edc4) main_pane

0x8880,	// (0x00011028) misc_graphics

0xa81c,	// (0x00012fc4) battery_pane_ParamLimits

0xa81c,	// (0x00012fc4) battery_pane

0xb541,	// (0x00013ce9) bg_status_flat_pane_g8

0xb549,	// (0x00013cf1) bg_status_flat_pane_g9

0xa8d7,	// (0x0001307f) context_pane_ParamLimits

0xa8d7,	// (0x0001307f) context_pane

0xa9ee,	// (0x00013196) navi_pane_ParamLimits

0xa9ee,	// (0x00013196) navi_pane

0xaa6b,	// (0x00013213) signal_pane_ParamLimits

0xaa6b,	// (0x00013213) signal_pane

0x0008,

0xf845,	// (0x00017fed) bg_status_flat_pane_g

0xaad4,	// (0x0001327c) status_pane_g1_ParamLimits

0xaad4,	// (0x0001327c) status_pane_g1

0xaae0,	// (0x00013288) status_pane_g2_ParamLimits

0xaae0,	// (0x00013288) status_pane_g2

0xaaec,	// (0x00013294) status_pane_g3_ParamLimits

0xaaec,	// (0x00013294) status_pane_g3

0x0004,

0xf76c,	// (0x00017f14) status_pane_g_ParamLimits

0xf76c,	// (0x00017f14) status_pane_g

0xab1e,	// (0x000132c6) title_pane_ParamLimits

0xab1e,	// (0x000132c6) title_pane

0xab5b,	// (0x00013303) uni_indicator_pane_ParamLimits

0xab5b,	// (0x00013303) uni_indicator_pane

0xa732,	// (0x00012eda) bg_list_pane_ParamLimits

0xa732,	// (0x00012eda) bg_list_pane

0xa752,	// (0x00012efa) find_pane

0xa75a,	// (0x00012f02) listscroll_app_pane_ParamLimits

0xa75a,	// (0x00012f02) listscroll_app_pane

0xa766,	// (0x00012f0e) listscroll_form_pane

0xa76e,	// (0x00012f16) listscroll_gen_pane_ParamLimits

0xa76e,	// (0x00012f16) listscroll_gen_pane

0x6e1b,	// (0x0000f5c3) listscroll_set_pane

0x99a5,	// (0x0001214d) main_idle_act_pane

0xa446,	// (0x00012bee) main_idle_trad_pane

0xa446,	// (0x00012bee) main_list_empty_pane

0xa795,	// (0x00012f3d) main_midp_pane

0xa7a1,	// (0x00012f49) main_pane_g1_ParamLimits

0xa7a1,	// (0x00012f49) main_pane_g1

0x6e31,	// (0x0000f5d9) popup_ai_message_window_ParamLimits

0x6e31,	// (0x0000f5d9) popup_ai_message_window

0x6ec7,	// (0x0000f66f) popup_fep_china_uni_window_ParamLimits

0x6ec7,	// (0x0000f66f) popup_fep_china_uni_window

0x6f05,	// (0x0000f6ad) popup_fep_japan_candidate_window_ParamLimits

0x6f05,	// (0x0000f6ad) popup_fep_japan_candidate_window

0x6f23,	// (0x0000f6cb) popup_fep_japan_predictive_window_ParamLimits

0x6f23,	// (0x0000f6cb) popup_fep_japan_predictive_window

0x6f4f,	// (0x0000f6f7) popup_find_window

0x6f5c,	// (0x0000f704) popup_grid_graphic_window_ParamLimits

0x6f5c,	// (0x0000f704) popup_grid_graphic_window

0x6f7a,	// (0x0000f722) popup_large_graphic_colour_window

0x6f99,	// (0x0000f741) popup_menu_window_ParamLimits

0x6f99,	// (0x0000f741) popup_menu_window

0x70d1,	// (0x0000f879) popup_note_image_window

0x70bf,	// (0x0000f867) popup_note_wait_window_ParamLimits

0x70bf,	// (0x0000f867) popup_note_wait_window

0x70bf,	// (0x0000f867) popup_note_window_ParamLimits

0x70bf,	// (0x0000f867) popup_note_window

0x7125,	// (0x0000f8cd) popup_query_code_window_ParamLimits

0x7125,	// (0x0000f8cd) popup_query_code_window

0x7137,	// (0x0000f8df) popup_query_data_code_window_ParamLimits

0x7137,	// (0x0000f8df) popup_query_data_code_window

0x714c,	// (0x0000f8f4) popup_query_data_window_ParamLimits

0x714c,	// (0x0000f8f4) popup_query_data_window

0x7162,	// (0x0000f90a) popup_query_sat_info_window_ParamLimits

0x7162,	// (0x0000f90a) popup_query_sat_info_window

0x7193,	// (0x0000f93b) popup_snote_single_graphic_window_ParamLimits

0x7193,	// (0x0000f93b) popup_snote_single_graphic_window

0x7193,	// (0x0000f93b) popup_snote_single_text_window_ParamLimits

0x7193,	// (0x0000f93b) popup_snote_single_text_window

0x71a6,	// (0x0000f94e) popup_sub_window_general

0x72aa,	// (0x0000fa52) popup_window_general_ParamLimits

0x72aa,	// (0x0000fa52) popup_window_general

0xa7b7,	// (0x00012f5f) power_save_pane

0x6caf,	// (0x0000f457) control_pane_g1_ParamLimits

0x6caf,	// (0x0000f457) control_pane_g1

0x6cd0,	// (0x0000f478) control_pane_g2_ParamLimits

0x6cd0,	// (0x0000f478) control_pane_g2

0xa6fd,	// (0x00012ea5) control_pane_g3_ParamLimits

0xa6fd,	// (0x00012ea5) control_pane_g3

0x0007,

0xf754,	// (0x00017efc) control_pane_g_ParamLimits

0xf754,	// (0x00017efc) control_pane_g

0x6d12,	// (0x0000f4ba) control_pane_t1_ParamLimits

0x6d12,	// (0x0000f4ba) control_pane_t1

0x6d64,	// (0x0000f50c) control_pane_t2_ParamLimits

0x6d64,	// (0x0000f50c) control_pane_t2

0x0002,

0xf765,	// (0x00017f0d) control_pane_t_ParamLimits

0xf765,	// (0x00017f0d) control_pane_t

0xa624,	// (0x00012dcc) navi_navi_volume_pane_cp1

0xa62c,	// (0x00012dd4) status_small_icon_pane

0xa634,	// (0x00012ddc) status_small_pane_g1_ParamLimits

0xa634,	// (0x00012ddc) status_small_pane_g1

0xa668,	// (0x00012e10) status_small_pane_g2_ParamLimits

0xa668,	// (0x00012e10) status_small_pane_g2

0xa674,	// (0x00012e1c) status_small_pane_g3_ParamLimits

0xa674,	// (0x00012e1c) status_small_pane_g3

0xa680,	// (0x00012e28) status_small_pane_g4_ParamLimits

0xa680,	// (0x00012e28) status_small_pane_g4

0xa68c,	// (0x00012e34) status_small_pane_g5_ParamLimits

0xa68c,	// (0x00012e34) status_small_pane_g5

0xa698,	// (0x00012e40) status_small_pane_g6_ParamLimits

0xa698,	// (0x00012e40) status_small_pane_g6

0x0007,

0xf743,	// (0x00017eeb) status_small_pane_g_ParamLimits

0xf743,	// (0x00017eeb) status_small_pane_g

0xa6c7,	// (0x00012e6f) status_small_pane_t1

0xa6e9,	// (0x00012e91) status_small_wait_pane_ParamLimits

0xa6e9,	// (0x00012e91) status_small_wait_pane

0x9e97,	// (0x0001263f) aid_levels_signal_ParamLimits

0x9e97,	// (0x0001263f) aid_levels_signal

0x9ea8,	// (0x00012650) signal_pane_g1_ParamLimits

0x9ea8,	// (0x00012650) signal_pane_g1

0x9ebe,	// (0x00012666) signal_pane_g2_ParamLimits

0x9ebe,	// (0x00012666) signal_pane_g2

0x0003,

0xf6d4,	// (0x00017e7c) signal_pane_g_ParamLimits

0xf6d4,	// (0x00017e7c) signal_pane_g

0x9ef9,	// (0x000126a1) context_pane_g1

0x888a,	// (0x00011032) title_pane_g1

0x88c0,	// (0x00011068) title_pane_t1

0x8928,	// (0x000110d0) title_pane_t2

0x894e,	// (0x000110f6) title_pane_t3

0x0002,

0xf532,	// (0x00017cda) title_pane_t

0xab71,	// (0x00013319) aid_levels_battery_ParamLimits

0xab71,	// (0x00013319) aid_levels_battery

0xab84,	// (0x0001332c) battery_pane_g1_ParamLimits

0xab84,	// (0x0001332c) battery_pane_g1

0xab99,	// (0x00013341) battery_pane_g2_ParamLimits

0xab99,	// (0x00013341) battery_pane_g2

0x0001,

0xf777,	// (0x00017f1f) battery_pane_g_ParamLimits

0xf777,	// (0x00017f1f) battery_pane_g

0xbe2a,	// (0x000145d2) uni_indicator_pane_g1

0xbe3e,	// (0x000145e6) uni_indicator_pane_g2

0xbe53,	// (0x000145fb) uni_indicator_pane_g3

0x0005,

0xf8ed,	// (0x00018095) uni_indicator_pane_g

0x98d2,	// (0x0001207a) navi_icon_pane_ParamLimits

0x98d2,	// (0x0001207a) navi_icon_pane

0x8880,	// (0x00011028) navi_midp_pane

0x8880,	// (0x00011028) navi_navi_pane

0x98d2,	// (0x0001207a) navi_text_pane_ParamLimits

0x98d2,	// (0x0001207a) navi_text_pane

0x8799,	// (0x00010f41) status_small_wait_pane_g1

0x8dc2,	// (0x0001156a) status_small_wait_pane_g2

0x0001,

0xf8e8,	// (0x00018090) status_small_wait_pane_g

0xbb5d,	// (0x00014305) navi_navi_icon_text_pane

0xbb65,	// (0x0001430d) navi_navi_pane_g1_ParamLimits

0xbb65,	// (0x0001430d) navi_navi_pane_g1

0xbb77,	// (0x0001431f) navi_navi_pane_g2_ParamLimits

0xbb77,	// (0x0001431f) navi_navi_pane_g2

0x0001,

0xf8b6,	// (0x0001805e) navi_navi_pane_g_ParamLimits

0xf8b6,	// (0x0001805e) navi_navi_pane_g

0xbb89,	// (0x00014331) navi_navi_tabs_pane

0xbb5d,	// (0x00014305) navi_navi_text_pane

0xbb5d,	// (0x00014305) navi_navi_volume_pane

0xbb39,	// (0x000142e1) navi_text_pane_t1

0xbb2d,	// (0x000142d5) navi_icon_pane_g1

0xba81,	// (0x00014229) navi_navi_text_pane_t1

0x758f,	// (0x0000fd37) navi_navi_volume_pane_g1

0x7597,	// (0x0000fd3f) volume_small_pane

0xb9e7,	// (0x0001418f) navi_navi_icon_text_pane_g1

0xb9ef,	// (0x00014197) navi_navi_icon_text_pane_t1

0xb5b9,	// (0x00013d61) navi_tabs_2_long_pane

0xb5b9,	// (0x00013d61) navi_tabs_2_pane

0xb5b9,	// (0x00013d61) navi_tabs_3_long_pane

0xb5b9,	// (0x00013d61) navi_tabs_3_pane

0xb5b9,	// (0x00013d61) navi_tabs_4_pane

0x756f,	// (0x0000fd17) tabs_2_active_pane_ParamLimits

0x756f,	// (0x0000fd17) tabs_2_active_pane

0x757f,	// (0x0000fd27) tabs_2_passive_pane_ParamLimits

0x757f,	// (0x0000fd27) tabs_2_passive_pane

0x753d,	// (0x0000fce5) tabs_3_active_pane_ParamLimits

0x753d,	// (0x0000fce5) tabs_3_active_pane

0x754d,	// (0x0000fcf5) tabs_3_passive_pane_ParamLimits

0x754d,	// (0x0000fcf5) tabs_3_passive_pane

0x755e,	// (0x0000fd06) tabs_3_passive_pane_cp_ParamLimits

0x755e,	// (0x0000fd06) tabs_3_passive_pane_cp

0x74f9,	// (0x0000fca1) tabs_4_active_pane_ParamLimits

0x74f9,	// (0x0000fca1) tabs_4_active_pane

0x750a,	// (0x0000fcb2) tabs_4_passive_pane_ParamLimits

0x750a,	// (0x0000fcb2) tabs_4_passive_pane

0x751b,	// (0x0000fcc3) tabs_4_passive_pane_cp_ParamLimits

0x751b,	// (0x0000fcc3) tabs_4_passive_pane_cp

0x752c,	// (0x0000fcd4) tabs_4_passive_pane_cp2_ParamLimits

0x752c,	// (0x0000fcd4) tabs_4_passive_pane_cp2

0x74d9,	// (0x0000fc81) tabs_2_long_active_pane_ParamLimits

0x74d9,	// (0x0000fc81) tabs_2_long_active_pane

0x74e9,	// (0x0000fc91) tabs_2_long_passive_pane_ParamLimits

0x74e9,	// (0x0000fc91) tabs_2_long_passive_pane

0x74a4,	// (0x0000fc4c) tabs_3_long_active_pane_ParamLimits

0x74a4,	// (0x0000fc4c) tabs_3_long_active_pane

0x74b5,	// (0x0000fc5d) tabs_3_long_passive_pane_ParamLimits

0x74b5,	// (0x0000fc5d) tabs_3_long_passive_pane

0x74c8,	// (0x0000fc70) tabs_3_long_passive_pane_cp_ParamLimits

0x74c8,	// (0x0000fc70) tabs_3_long_passive_pane_cp

0x744a,	// (0x0000fbf2) volume_small_pane_g1

0x7453,	// (0x0000fbfb) volume_small_pane_g2

0x745c,	// (0x0000fc04) volume_small_pane_g3

0x7465,	// (0x0000fc0d) volume_small_pane_g4

0x746e,	// (0x0000fc16) volume_small_pane_g5

0x7477,	// (0x0000fc1f) volume_small_pane_g6

0x7480,	// (0x0000fc28) volume_small_pane_g7

0x7489,	// (0x0000fc31) volume_small_pane_g8

0x7492,	// (0x0000fc3a) volume_small_pane_g9

0x749b,	// (0x0000fc43) volume_small_pane_g10

0x0009,

0xf882,	// (0x0001802a) volume_small_pane_g

0x8960,	// (0x00011108) bg_active_tab_pane_cp2_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp2

0x896e,	// (0x00011116) tabs_3_active_pane_g1

0x8976,	// (0x0001111e) tabs_3_active_pane_t1

0x8960,	// (0x00011108) bg_passive_tab_pane_cp2_ParamLimits

0x8960,	// (0x00011108) bg_passive_tab_pane_cp2

0x896e,	// (0x00011116) tabs_3_passive_pane_g1

0x8976,	// (0x0001111e) tabs_3_passive_pane_t1

0x8960,	// (0x00011108) bg_active_tab_pane_cp3_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp3

0x8988,	// (0x00011130) tabs_4_active_pane_g1

0x8990,	// (0x00011138) tabs_4_active_pane_t1

0x8960,	// (0x00011108) bg_passive_tab_pane_cp3_ParamLimits

0x8960,	// (0x00011108) bg_passive_tab_pane_cp3

0x8988,	// (0x00011130) tabs_4_1_passive_pane_g1

0x8990,	// (0x00011138) tabs_4_1_passive_pane_t1

0xa795,	// (0x00012f3d) list_highlight_pane_cp2

0xc079,	// (0x00014821) list_set_pane_ParamLimits

0xc079,	// (0x00014821) list_set_pane

0xc107,	// (0x000148af) main_pane_set_t1_ParamLimits

0xc107,	// (0x000148af) main_pane_set_t1

0xc127,	// (0x000148cf) main_pane_set_t2_ParamLimits

0xc127,	// (0x000148cf) main_pane_set_t2

0xc139,	// (0x000148e1) main_pane_set_t3_ParamLimits

0xc139,	// (0x000148e1) main_pane_set_t3

0xc14b,	// (0x000148f3) main_pane_set_t4_ParamLimits

0xc14b,	// (0x000148f3) main_pane_set_t4

0x0003,

0xf952,	// (0x000180fa) main_pane_set_t_ParamLimits

0xf952,	// (0x000180fa) main_pane_set_t

0xc15d,	// (0x00014905) setting_code_pane

0xc165,	// (0x0001490d) setting_slider_graphic_pane

0xc165,	// (0x0001490d) setting_slider_pane

0xc165,	// (0x0001490d) setting_text_pane

0xc165,	// (0x0001490d) setting_volume_pane

0x681b,	// (0x0000efc3) volume_set_pane

0x8960,	// (0x00011108) bg_set_opt_pane_cp

0x6823,	// (0x0000efcb) setting_slider_pane_t1

0x6839,	// (0x0000efe1) setting_slider_pane_t2

0x6852,	// (0x0000effa) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00017ce1) setting_slider_pane_t

0x6869,	// (0x0000f011) slider_set_pane

0x8880,	// (0x00011028) bg_set_opt_pane_cp2

0x89a2,	// (0x0001114a) setting_slider_graphic_pane_g1

0x687f,	// (0x0000f027) setting_slider_graphic_pane_t1

0x688e,	// (0x0000f036) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00017ce8) setting_slider_graphic_pane_t

0x689d,	// (0x0000f045) slider_set_pane_cp

0x8880,	// (0x00011028) input_focus_pane_cp1

0xc03f,	// (0x000147e7) list_set_text_pane

0x8799,	// (0x00010f41) setting_text_pane_g1

0x8880,	// (0x00011028) input_focus_pane_cp2

0x8799,	// (0x00010f41) setting_code_pane_g1

0x89ab,	// (0x00011153) setting_code_pane_t1

0x89b9,	// (0x00011161) set_text_pane_t1_ParamLimits

0x89b9,	// (0x00011161) set_text_pane_t1

0x977f,	// (0x00011f27) set_opt_bg_pane_g1

0x9787,	// (0x00011f2f) set_opt_bg_pane_g2

0xc01f,	// (0x000147c7) set_opt_bg_pane_g3

0x9797,	// (0x00011f3f) set_opt_bg_pane_g4

0x979f,	// (0x00011f47) set_opt_bg_pane_g5

0x97a7,	// (0x00011f4f) set_opt_bg_pane_g6

0xc027,	// (0x000147cf) set_opt_bg_pane_g7

0xc02f,	// (0x000147d7) set_opt_bg_pane_g8

0xc037,	// (0x000147df) set_opt_bg_pane_g9

0x0008,

0xf93f,	// (0x000180e7) set_opt_bg_pane_g

0xc012,	// (0x000147ba) slider_set_pane_g1

0x7604,	// (0x0000fdac) slider_set_pane_g2

0x0006,

0xf930,	// (0x000180d8) slider_set_pane_g

0x75a0,	// (0x0000fd48) volume_set_pane_g1

0x75a8,	// (0x0000fd50) volume_set_pane_g2

0x75b0,	// (0x0000fd58) volume_set_pane_g3

0x75b8,	// (0x0000fd60) volume_set_pane_g4

0x75c0,	// (0x0000fd68) volume_set_pane_g5

0x75c8,	// (0x0000fd70) volume_set_pane_g6

0x75d0,	// (0x0000fd78) volume_set_pane_g7

0x75d8,	// (0x0000fd80) volume_set_pane_g8

0x75e0,	// (0x0000fd88) volume_set_pane_g9

0x75e8,	// (0x0000fd90) volume_set_pane_g10

0x0009,

0xf908,	// (0x000180b0) volume_set_pane_g

0x89d5,	// (0x0001117d) indicator_pane_ParamLimits

0x89d5,	// (0x0001117d) indicator_pane

0x89e1,	// (0x00011189) main_idle_pane_g2_ParamLimits

0x89e1,	// (0x00011189) main_idle_pane_g2

0x8a05,	// (0x000111ad) main_pane_idle_g1_ParamLimits

0x8a05,	// (0x000111ad) main_pane_idle_g1

0x8a12,	// (0x000111ba) popup_clock_digital_analogue_window_ParamLimits

0x8a12,	// (0x000111ba) popup_clock_digital_analogue_window

0x8a29,	// (0x000111d1) soft_indicator_pane_ParamLimits

0x8a29,	// (0x000111d1) soft_indicator_pane

0x8a35,	// (0x000111dd) wallpaper_pane_ParamLimits

0x8a35,	// (0x000111dd) wallpaper_pane

0x8799,	// (0x00010f41) wallpaper_pane_g1

0x8a49,	// (0x000111f1) indicator_pane_g1_ParamLimits

0x8a49,	// (0x000111f1) indicator_pane_g1

0xc451,	// (0x00014bf9) navi_navi_icon_text_pane_srt_g1

0x8a64,	// (0x0001120c) soft_indicator_pane_t1

0x8a7e,	// (0x00011226) aid_ps_area_pane

0x8a8f,	// (0x00011237) aid_ps_clock_pane

0x8a9b,	// (0x00011243) aid_ps_indicator_pane

0x8aa7,	// (0x0001124f) indicator_ps_pane_ParamLimits

0x8aa7,	// (0x0001124f) indicator_ps_pane

0x8ab6,	// (0x0001125e) power_save_pane_g1_ParamLimits

0x8ab6,	// (0x0001125e) power_save_pane_g1

0x8ac2,	// (0x0001126a) power_save_pane_g2_ParamLimits

0x8ac2,	// (0x0001126a) power_save_pane_g2

0x658e,	// (0x0000ed36) aid_navinavi_width_pane

0x8a7e,	// (0x00011226) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00017ced) power_save_pane_g_ParamLimits

0xf545,	// (0x00017ced) power_save_pane_g

0x8ad0,	// (0x00011278) power_save_pane_t1_ParamLimits

0x8ad0,	// (0x00011278) power_save_pane_t1

0x8a8f,	// (0x00011237) aid_ps_clock_pane_ParamLimits

0x8a9b,	// (0x00011243) aid_ps_indicator_pane_ParamLimits

0x8ae2,	// (0x0001128a) power_save_pane_t4_ParamLimits

0x8ae2,	// (0x0001128a) power_save_pane_t4

0x0001,

0xf54a,	// (0x00017cf2) power_save_pane_t_ParamLimits

0xf54a,	// (0x00017cf2) power_save_pane_t

0x8b0c,	// (0x000112b4) power_save_t3_ParamLimits

0x8b0c,	// (0x000112b4) power_save_t3

0x8af7,	// (0x0001129f) power_save_t2_ParamLimits

0x8af7,	// (0x0001129f) power_save_t2

0x8b21,	// (0x000112c9) indicator_ps_pane_g1

0x8b2a,	// (0x000112d2) ai_gene_pane_ParamLimits

0x8b2a,	// (0x000112d2) ai_gene_pane

0x8b36,	// (0x000112de) ai_links_pane_ParamLimits

0x8b36,	// (0x000112de) ai_links_pane

0x8b42,	// (0x000112ea) indicator_pane_cp1_ParamLimits

0x8b42,	// (0x000112ea) indicator_pane_cp1

0x8b4e,	// (0x000112f6) main_pane_idle_g1_cp_ParamLimits

0x8b4e,	// (0x000112f6) main_pane_idle_g1_cp

0x8b5a,	// (0x00011302) popup_ai_links_title_window

0x8b63,	// (0x0001130b) soft_indicator_pane_cp1_ParamLimits

0x8b63,	// (0x0001130b) soft_indicator_pane_cp1

0xbe18,	// (0x000145c0) ai_links_pane_g1

0xbe21,	// (0x000145c9) grid_ai_links_pane

0xbdfd,	// (0x000145a5) ai_gene_pane_1

0xbe06,	// (0x000145ae) ai_gene_pane_2

0xbe0f,	// (0x000145b7) list_highlight_pane_cp4

0xbde1,	// (0x00014589) cell_ai_link_pane_ParamLimits

0xbde1,	// (0x00014589) cell_ai_link_pane

0xbdd9,	// (0x00014581) cell_ai_link_pane_g1

0x8dc2,	// (0x0001156a) cell_ai_link_pane_g2

0x0001,

0xf8e3,	// (0x0001808b) cell_ai_link_pane_g

0x8880,	// (0x00011028) grid_highlight_cp2

0x8880,	// (0x00011028) bg_popup_sub_pane_cp1

0x8b7d,	// (0x00011325) popup_ai_links_title_window_t1

0xbd2b,	// (0x000144d3) ai_gene_pane_1_g1_ParamLimits

0xbd2b,	// (0x000144d3) ai_gene_pane_1_g1

0xbd37,	// (0x000144df) ai_gene_pane_1_g2_ParamLimits

0xbd37,	// (0x000144df) ai_gene_pane_1_g2

0x0001,

0xf8d9,	// (0x00018081) ai_gene_pane_1_g_ParamLimits

0xf8d9,	// (0x00018081) ai_gene_pane_1_g

0xbd44,	// (0x000144ec) ai_gene_pane_1_t1_ParamLimits

0xbd44,	// (0x000144ec) ai_gene_pane_1_t1

0xbd78,	// (0x00014520) grid_ai_soft_ind_pane

0xbd16,	// (0x000144be) ai_gene_pane_2_t1_ParamLimits

0xbd16,	// (0x000144be) ai_gene_pane_2_t1

0x8b8c,	// (0x00011334) main_pane_empty_t1_ParamLimits

0x8b8c,	// (0x00011334) main_pane_empty_t1

0x8ba9,	// (0x00011351) main_pane_empty_t2_ParamLimits

0x8ba9,	// (0x00011351) main_pane_empty_t2

0x8bc1,	// (0x00011369) main_pane_empty_t3_ParamLimits

0x8bc1,	// (0x00011369) main_pane_empty_t3

0x8bd4,	// (0x0001137c) main_pane_empty_t4_ParamLimits

0x8bd4,	// (0x0001137c) main_pane_empty_t4

0x8be7,	// (0x0001138f) main_pane_empty_t5_ParamLimits

0x8be7,	// (0x0001138f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00017cf7) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00017cf7) main_pane_empty_t

0x98d2,	// (0x0001207a) bg_popup_window_pane_ParamLimits

0x98d2,	// (0x0001207a) bg_popup_window_pane

0xba90,	// (0x00014238) find_popup_pane_cp2_ParamLimits

0xba90,	// (0x00014238) find_popup_pane_cp2

0xba9c,	// (0x00014244) heading_pane_ParamLimits

0xba9c,	// (0x00014244) heading_pane

0x8880,	// (0x00011028) bg_popup_sub_pane

0xba09,	// (0x000141b1) bg_popup_window_pane_g1_ParamLimits

0xba09,	// (0x000141b1) bg_popup_window_pane_g1

0xba15,	// (0x000141bd) bg_popup_window_pane_g2_ParamLimits

0xba15,	// (0x000141bd) bg_popup_window_pane_g2

0xba21,	// (0x000141c9) bg_popup_window_pane_g3_ParamLimits

0xba21,	// (0x000141c9) bg_popup_window_pane_g3

0xba2d,	// (0x000141d5) bg_popup_window_pane_g4_ParamLimits

0xba2d,	// (0x000141d5) bg_popup_window_pane_g4

0xba39,	// (0x000141e1) bg_popup_window_pane_g5_ParamLimits

0xba39,	// (0x000141e1) bg_popup_window_pane_g5

0xba45,	// (0x000141ed) bg_popup_window_pane_g6_ParamLimits

0xba45,	// (0x000141ed) bg_popup_window_pane_g6

0xba51,	// (0x000141f9) bg_popup_window_pane_g7_ParamLimits

0xba51,	// (0x000141f9) bg_popup_window_pane_g7

0xba5d,	// (0x00014205) bg_popup_window_pane_g8_ParamLimits

0xba5d,	// (0x00014205) bg_popup_window_pane_g8

0xba69,	// (0x00014211) bg_popup_window_pane_g9_ParamLimits

0xba69,	// (0x00014211) bg_popup_window_pane_g9

0xba75,	// (0x0001421d) bg_popup_window_pane_g10_ParamLimits

0xba75,	// (0x0001421d) bg_popup_window_pane_g10

0x0009,

0xf8a1,	// (0x00018049) bg_popup_window_pane_g_ParamLimits

0xf8a1,	// (0x00018049) bg_popup_window_pane_g

0xb99e,	// (0x00014146) bg_popup_heading_pane_ParamLimits

0xb99e,	// (0x00014146) bg_popup_heading_pane

0x768c,	// (0x0000fe34) tabs_4_passive_pane_cp_srt_ParamLimits

0x768c,	// (0x0000fe34) tabs_4_passive_pane_cp_srt

0x769e,	// (0x0000fe46) tabs_4_passive_pane_srt_ParamLimits

0xb9b2,	// (0x0001415a) heading_pane_g2

0x769e,	// (0x0000fe46) tabs_4_passive_pane_srt

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp3_srt_ParamLimits

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp3_srt

0xb9ba,	// (0x00014162) heading_pane_t1_ParamLimits

0xb9ba,	// (0x00014162) heading_pane_t1

0xb9d1,	// (0x00014179) heading_pane_t2_ParamLimits

0xb9d1,	// (0x00014179) heading_pane_t2

0x0001,

0xf89c,	// (0x00018044) heading_pane_t_ParamLimits

0xf89c,	// (0x00018044) heading_pane_t

0xb509,	// (0x00013cb1) bg_popup_heading_pane_g1

0xb5ca,	// (0x00013d72) bg_popup_heading_pane_g2

0xb5d2,	// (0x00013d7a) bg_popup_heading_pane_g3

0xb5da,	// (0x00013d82) bg_popup_heading_pane_g4

0xb5e2,	// (0x00013d8a) bg_popup_heading_pane_g5

0xb5ea,	// (0x00013d92) bg_popup_heading_pane_g6

0xb5f2,	// (0x00013d9a) bg_popup_heading_pane_g7

0xb5fa,	// (0x00013da2) bg_popup_heading_pane_g8

0xb602,	// (0x00013daa) bg_popup_heading_pane_g9

0x0008,

0xf858,	// (0x00018000) bg_popup_heading_pane_g

0xac92,	// (0x0001343a) bg_popup_sub_pane_g1

0xaca2,	// (0x0001344a) bg_popup_sub_pane_g2

0xac9a,	// (0x00013442) bg_popup_sub_pane_g3

0xacb2,	// (0x0001345a) bg_popup_sub_pane_g4

0xacaa,	// (0x00013452) bg_popup_sub_pane_g5

0xacba,	// (0x00013462) bg_popup_sub_pane_g6

0xacc2,	// (0x0001346a) bg_popup_sub_pane_g7

0xacd2,	// (0x0001347a) bg_popup_sub_pane_g8

0xacca,	// (0x00013472) bg_popup_sub_pane_g9

0x0008,

0xf832,	// (0x00017fda) bg_popup_sub_pane_g

0x8bfa,	// (0x000113a2) bg_popup_window_pane_cp5_ParamLimits

0x8bfa,	// (0x000113a2) bg_popup_window_pane_cp5

0x8c16,	// (0x000113be) popup_note_window_g1_ParamLimits

0x8c16,	// (0x000113be) popup_note_window_g1

0x8c22,	// (0x000113ca) popup_note_window_t1_ParamLimits

0x8c22,	// (0x000113ca) popup_note_window_t1

0x8c38,	// (0x000113e0) popup_note_window_t2_ParamLimits

0x8c38,	// (0x000113e0) popup_note_window_t2

0x8c4e,	// (0x000113f6) popup_note_window_t3_ParamLimits

0x8c4e,	// (0x000113f6) popup_note_window_t3

0x8c64,	// (0x0001140c) popup_note_window_t4_ParamLimits

0x8c64,	// (0x0001140c) popup_note_window_t4

0x8c8c,	// (0x00011434) popup_note_window_t5_ParamLimits

0x8c8c,	// (0x00011434) popup_note_window_t5

0x0004,

0xf55a,	// (0x00017d02) popup_note_window_t_ParamLimits

0xf55a,	// (0x00017d02) popup_note_window_t

0x8cd6,	// (0x0001147e) bg_popup_window_pane_cp6_ParamLimits

0x8cd6,	// (0x0001147e) bg_popup_window_pane_cp6

0xb485,	// (0x00013c2d) popup_note_image_window_g1_ParamLimits

0xb485,	// (0x00013c2d) popup_note_image_window_g1

0xb491,	// (0x00013c39) popup_note_image_window_g2_ParamLimits

0xb491,	// (0x00013c39) popup_note_image_window_g2

0x0001,

0xf826,	// (0x00017fce) popup_note_image_window_g_ParamLimits

0xf826,	// (0x00017fce) popup_note_image_window_g

0xb4aa,	// (0x00013c52) popup_note_image_window_t1_ParamLimits

0xb4aa,	// (0x00013c52) popup_note_image_window_t1

0xb4c3,	// (0x00013c6b) popup_note_image_window_t2_ParamLimits

0xb4c3,	// (0x00013c6b) popup_note_image_window_t2

0xb4dc,	// (0x00013c84) popup_note_image_window_t3_ParamLimits

0xb4dc,	// (0x00013c84) popup_note_image_window_t3

0x0002,

0xf82b,	// (0x00017fd3) popup_note_image_window_t_ParamLimits

0xf82b,	// (0x00017fd3) popup_note_image_window_t

0xb354,	// (0x00013afc) bg_popup_window_pane_cp7_ParamLimits

0xb354,	// (0x00013afc) bg_popup_window_pane_cp7

0xb384,	// (0x00013b2c) popup_note_wait_window_g1_ParamLimits

0xb384,	// (0x00013b2c) popup_note_wait_window_g1

0xb390,	// (0x00013b38) popup_note_wait_window_g2_ParamLimits

0xb390,	// (0x00013b38) popup_note_wait_window_g2

0x0002,

0xf814,	// (0x00017fbc) popup_note_wait_window_g_ParamLimits

0xf814,	// (0x00017fbc) popup_note_wait_window_g

0xb3a8,	// (0x00013b50) popup_note_wait_window_t1_ParamLimits

0xb3a8,	// (0x00013b50) popup_note_wait_window_t1

0xb3cf,	// (0x00013b77) popup_note_wait_window_t2_ParamLimits

0xb3cf,	// (0x00013b77) popup_note_wait_window_t2

0xb3ec,	// (0x00013b94) popup_note_wait_window_t3_ParamLimits

0xb3ec,	// (0x00013b94) popup_note_wait_window_t3

0xb3ff,	// (0x00013ba7) popup_note_wait_window_t4_ParamLimits

0xb3ff,	// (0x00013ba7) popup_note_wait_window_t4

0x0004,

0xf81b,	// (0x00017fc3) popup_note_wait_window_t_ParamLimits

0xf81b,	// (0x00017fc3) popup_note_wait_window_t

0xb424,	// (0x00013bcc) wait_bar_pane_ParamLimits

0xb424,	// (0x00013bcc) wait_bar_pane

0x8880,	// (0x00011028) wait_anim_pane

0x8880,	// (0x00011028) wait_border_pane

0x8799,	// (0x00010f41) wait_anim_pane_g1

0x8799,	// (0x00010f41) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00017e77) wait_anim_pane_g

0xb304,	// (0x00013aac) wait_border_pane_g1

0xb30d,	// (0x00013ab5) wait_border_pane_g2

0xb316,	// (0x00013abe) wait_border_pane_g3

0x0002,

0xf80d,	// (0x00017fb5) wait_border_pane_g

0xb174,	// (0x0001391c) bg_popup_window_pane_cp16_ParamLimits

0xb174,	// (0x0001391c) bg_popup_window_pane_cp16

0xb274,	// (0x00013a1c) indicator_popup_pane_cp4_ParamLimits

0xb274,	// (0x00013a1c) indicator_popup_pane_cp4

0xb288,	// (0x00013a30) popup_query_data_window_t1_ParamLimits

0xb288,	// (0x00013a30) popup_query_data_window_t1

0xb29a,	// (0x00013a42) popup_query_data_window_t2_ParamLimits

0xb29a,	// (0x00013a42) popup_query_data_window_t2

0xb2b3,	// (0x00013a5b) popup_query_data_window_t3_ParamLimits

0xb2b3,	// (0x00013a5b) popup_query_data_window_t3

0x0002,

0xf806,	// (0x00017fae) popup_query_data_window_t_ParamLimits

0xf806,	// (0x00017fae) popup_query_data_window_t

0xb2cd,	// (0x00013a75) query_popup_data_pane_ParamLimits

0xb2cd,	// (0x00013a75) query_popup_data_pane

0xb2e1,	// (0x00013a89) query_popup_data_pane_cp1_ParamLimits

0xb2e1,	// (0x00013a89) query_popup_data_pane_cp1

0xb174,	// (0x0001391c) bg_popup_window_pane_cp10_ParamLimits

0xb174,	// (0x0001391c) bg_popup_window_pane_cp10

0xb1a6,	// (0x0001394e) indicator_popup_pane_ParamLimits

0xb1a6,	// (0x0001394e) indicator_popup_pane

0xb1c8,	// (0x00013970) popup_query_code_window_t1_ParamLimits

0xb1c8,	// (0x00013970) popup_query_code_window_t1

0xb1e2,	// (0x0001398a) popup_query_code_window_t2_ParamLimits

0xb1e2,	// (0x0001398a) popup_query_code_window_t2

0xb22b,	// (0x000139d3) popup_query_code_window_t3_ParamLimits

0xb22b,	// (0x000139d3) popup_query_code_window_t3

0x0002,

0xf7ff,	// (0x00017fa7) popup_query_code_window_t_ParamLimits

0xf7ff,	// (0x00017fa7) popup_query_code_window_t

0xb25a,	// (0x00013a02) query_popup_pane_ParamLimits

0xb25a,	// (0x00013a02) query_popup_pane

0x8cd6,	// (0x0001147e) bg_popup_window_pane_cp15_ParamLimits

0x8cd6,	// (0x0001147e) bg_popup_window_pane_cp15

0x8cf4,	// (0x0001149c) indicator_popup_pane_cp1_ParamLimits

0x8cf4,	// (0x0001149c) indicator_popup_pane_cp1

0x8d07,	// (0x000114af) indicator_popup_pane_cp2_ParamLimits

0x8d07,	// (0x000114af) indicator_popup_pane_cp2

0x8d1a,	// (0x000114c2) popup_query_data_code_window_g1_ParamLimits

0x8d1a,	// (0x000114c2) popup_query_data_code_window_g1

0x8d2d,	// (0x000114d5) popup_query_data_code_window_t1_ParamLimits

0x8d2d,	// (0x000114d5) popup_query_data_code_window_t1

0x8d3f,	// (0x000114e7) popup_query_data_code_window_t2_ParamLimits

0x8d3f,	// (0x000114e7) popup_query_data_code_window_t2

0x8d51,	// (0x000114f9) popup_query_data_code_window_t3_ParamLimits

0x8d51,	// (0x000114f9) popup_query_data_code_window_t3

0x8d67,	// (0x0001150f) popup_query_data_code_window_t4_ParamLimits

0x8d67,	// (0x0001150f) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00017d0d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00017d0d) popup_query_data_code_window_t

0x7371,	// (0x0000fb19) list_single_midp_graphic_pane_g3

0x8d7f,	// (0x00011527) query_popup_data_pane_cp2_ParamLimits

0x8d92,	// (0x0001153a) query_popup_pane_cp2_ParamLimits

0x8d92,	// (0x0001153a) query_popup_pane_cp2

0x8880,	// (0x00011028) bg_popup_window_pane_cp11

0xb158,	// (0x00013900) heading_pane_cp5

0xb160,	// (0x00013908) listscroll_popup_info_pane

0x8880,	// (0x00011028) input_focus_pane_cp3

0x8da5,	// (0x0001154d) query_popup_pane_t1

0x8db3,	// (0x0001155b) list_popup_info_pane_ParamLimits

0x8db3,	// (0x0001155b) list_popup_info_pane

0x8dc2,	// (0x0001156a) listscroll_popup_info_pane_g1

0x8dca,	// (0x00011572) scroll_pane_cp7

0x8dd2,	// (0x0001157a) popup_info_list_pane_t1_ParamLimits

0x8dd2,	// (0x0001157a) popup_info_list_pane_t1

0x8dec,	// (0x00011594) popup_info_list_pane_t2_ParamLimits

0x8dec,	// (0x00011594) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00017d16) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00017d16) popup_info_list_pane_t

0x8880,	// (0x00011028) bg_popup_window_pane_cp12

0xc46b,	// (0x00014c13) find_popup_pane

0x8960,	// (0x00011108) bg_popup_window_pane_cp3

0x8e06,	// (0x000115ae) heading_pane_cp3

0x8e15,	// (0x000115bd) listscroll_popup_graphic_pane

0x8880,	// (0x00011028) bg_popup_window_pane_cp4

0x8e74,	// (0x0001161c) heading_pane_cp4

0x8e7c,	// (0x00011624) listscroll_popup_colour_pane

0x8e84,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8e84,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane

0x8e94,	// (0x0001163c) grid_large_graphic_colour_popup_pane_ParamLimits

0x8e94,	// (0x0001163c) grid_large_graphic_colour_popup_pane

0x8eb0,	// (0x00011658) listscroll_popup_colour_pane_g1_ParamLimits

0x8eb0,	// (0x00011658) listscroll_popup_colour_pane_g1

0x8ec7,	// (0x0001166f) listscroll_popup_colour_pane_g2_ParamLimits

0x8ec7,	// (0x0001166f) listscroll_popup_colour_pane_g2

0x8edb,	// (0x00011683) listscroll_popup_colour_pane_g3_ParamLimits

0x8edb,	// (0x00011683) listscroll_popup_colour_pane_g3

0x8eeb,	// (0x00011693) listscroll_popup_colour_pane_g4_ParamLimits

0x8eeb,	// (0x00011693) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00017d1b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00017d1b) listscroll_popup_colour_pane_g

0x8efa,	// (0x000116a2) scroll_pane_cp6_ParamLimits

0x8efa,	// (0x000116a2) scroll_pane_cp6

0x8f0c,	// (0x000116b4) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f0c,	// (0x000116b4) cell_large_graphic_colour_popup_pane

0x8f2b,	// (0x000116d3) cell_large_graphic_colour_none_popup_pane_t1

0x8880,	// (0x00011028) grid_highlight_pane_cp5

0x8f3a,	// (0x000116e2) cell_large_graphic_colour_popup_pane_g1

0x8f42,	// (0x000116ea) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00017d24) cell_large_graphic_colour_popup_pane_g

0x8f4a,	// (0x000116f2) cell_large_graphic_colour_popup_pane_g2_copy1

0x8f53,	// (0x000116fb) grid_highlight_pane_cp4

0x8f5b,	// (0x00011703) bg_popup_window_pane_cp8_ParamLimits

0x8f5b,	// (0x00011703) bg_popup_window_pane_cp8

0x8f76,	// (0x0001171e) popup_snote_single_text_window_g1_ParamLimits

0x8f76,	// (0x0001171e) popup_snote_single_text_window_g1

0x8f88,	// (0x00011730) popup_snote_single_text_window_t1_ParamLimits

0x8f88,	// (0x00011730) popup_snote_single_text_window_t1

0x8f9b,	// (0x00011743) popup_snote_single_text_window_t2_ParamLimits

0x8f9b,	// (0x00011743) popup_snote_single_text_window_t2

0x8fae,	// (0x00011756) popup_snote_single_text_window_t3_ParamLimits

0x8fae,	// (0x00011756) popup_snote_single_text_window_t3

0x8fe7,	// (0x0001178f) popup_snote_single_text_window_t4_ParamLimits

0x8fe7,	// (0x0001178f) popup_snote_single_text_window_t4

0x901b,	// (0x000117c3) popup_snote_single_text_window_t5_ParamLimits

0x901b,	// (0x000117c3) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00017d29) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00017d29) popup_snote_single_text_window_t

0x904a,	// (0x000117f2) bg_popup_window_pane_cp9_ParamLimits

0x904a,	// (0x000117f2) bg_popup_window_pane_cp9

0x8f76,	// (0x0001171e) popup_snote_single_graphic_window_g1_ParamLimits

0x8f76,	// (0x0001171e) popup_snote_single_graphic_window_g1

0x9058,	// (0x00011800) popup_snote_single_graphic_window_g2_ParamLimits

0x9058,	// (0x00011800) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00017d34) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00017d34) popup_snote_single_graphic_window_g

0x9064,	// (0x0001180c) popup_snote_single_graphic_window_t1_ParamLimits

0x9064,	// (0x0001180c) popup_snote_single_graphic_window_t1

0x9077,	// (0x0001181f) popup_snote_single_graphic_window_t2_ParamLimits

0x9077,	// (0x0001181f) popup_snote_single_graphic_window_t2

0x8fae,	// (0x00011756) popup_snote_single_graphic_window_t3_ParamLimits

0x8fae,	// (0x00011756) popup_snote_single_graphic_window_t3

0x8fe7,	// (0x0001178f) popup_snote_single_graphic_window_t4_ParamLimits

0x8fe7,	// (0x0001178f) popup_snote_single_graphic_window_t4

0x901b,	// (0x000117c3) popup_snote_single_graphic_window_t5_ParamLimits

0x901b,	// (0x000117c3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00017d39) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00017d39) popup_snote_single_graphic_window_t

0xc3d8,	// (0x00014b80) grid_graphic_popup_pane_ParamLimits

0xc3d8,	// (0x00014b80) grid_graphic_popup_pane

0xc3fb,	// (0x00014ba3) listscroll_popup_graphic_pane_g1_ParamLimits

0xc3fb,	// (0x00014ba3) listscroll_popup_graphic_pane_g1

0xc40f,	// (0x00014bb7) listscroll_popup_graphic_pane_g2_ParamLimits

0xc40f,	// (0x00014bb7) listscroll_popup_graphic_pane_g2

0x0001,

0xf97c,	// (0x00018124) listscroll_popup_graphic_pane_g_ParamLimits

0xf97c,	// (0x00018124) listscroll_popup_graphic_pane_g

0xc423,	// (0x00014bcb) scroll_pane_cp5

0xc37c,	// (0x00014b24) cell_graphic_popup_pane_ParamLimits

0xc37c,	// (0x00014b24) cell_graphic_popup_pane

0xc35d,	// (0x00014b05) cell_graphic_popup_pane_g1

0xc365,	// (0x00014b0d) cell_graphic_popup_pane_g2

0x8f4a,	// (0x000116f2) cell_graphic_popup_pane_g3

0x0002,

0xf975,	// (0x0001811d) cell_graphic_popup_pane_g

0xc36e,	// (0x00014b16) cell_graphic_popup_pane_t2

0x8f53,	// (0x000116fb) grid_highlight_pane_cp3

0x909c,	// (0x00011844) list_gen_pane_ParamLimits

0x909c,	// (0x00011844) list_gen_pane

0x90cd,	// (0x00011875) scroll_pane

0xc2dd,	// (0x00014a85) bg_list_pane_g1_ParamLimits

0xc2dd,	// (0x00014a85) bg_list_pane_g1

0xc2f4,	// (0x00014a9c) bg_list_pane_g2_ParamLimits

0xc2f4,	// (0x00014a9c) bg_list_pane_g2

0xc307,	// (0x00014aaf) bg_list_pane_g3_ParamLimits

0xc307,	// (0x00014aaf) bg_list_pane_g3

0xc319,	// (0x00014ac1) bg_list_pane_g4_ParamLimits

0xc319,	// (0x00014ac1) bg_list_pane_g4

0xc32b,	// (0x00014ad3) bg_list_pane_g5_ParamLimits

0xc32b,	// (0x00014ad3) bg_list_pane_g5

0x0004,

0xf96a,	// (0x00018112) bg_list_pane_g_ParamLimits

0xf96a,	// (0x00018112) bg_list_pane_g

0xc20b,	// (0x000149b3) list_double2_graphic_large_graphic_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double2_graphic_large_graphic_pane

0xc20b,	// (0x000149b3) list_double2_graphic_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double2_graphic_pane

0xc20b,	// (0x000149b3) list_double2_large_graphic_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double2_large_graphic_pane

0xc20b,	// (0x000149b3) list_double2_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double2_pane

0xc20b,	// (0x000149b3) list_double_graphic_heading_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_graphic_heading_pane

0xc20b,	// (0x000149b3) list_double_graphic_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_graphic_pane

0xc20b,	// (0x000149b3) list_double_heading_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_heading_pane

0xc20b,	// (0x000149b3) list_double_large_graphic_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_large_graphic_pane

0xc20b,	// (0x000149b3) list_double_number_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_number_pane

0xc20b,	// (0x000149b3) list_double_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_pane

0xc20b,	// (0x000149b3) list_double_time_pane_ParamLimits

0xc20b,	// (0x000149b3) list_double_time_pane

0xc20b,	// (0x000149b3) list_setting_number_pane_ParamLimits

0xc20b,	// (0x000149b3) list_setting_number_pane

0xc20b,	// (0x000149b3) list_setting_pane_ParamLimits

0xc20b,	// (0x000149b3) list_setting_pane

0xc273,	// (0x00014a1b) list_single_2graphic_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_2graphic_pane

0xc273,	// (0x00014a1b) list_single_graphic_heading_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_graphic_heading_pane

0xc273,	// (0x00014a1b) list_single_graphic_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_graphic_pane

0xc273,	// (0x00014a1b) list_single_heading_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_heading_pane

0xc2c7,	// (0x00014a6f) list_single_large_graphic_pane_ParamLimits

0xc2c7,	// (0x00014a6f) list_single_large_graphic_pane

0xc273,	// (0x00014a1b) list_single_number_heading_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_number_heading_pane

0xc273,	// (0x00014a1b) list_single_number_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_number_pane

0xc273,	// (0x00014a1b) list_single_pane_ParamLimits

0xc273,	// (0x00014a1b) list_single_pane

0x8880,	// (0x00011028) list_highlight_pane_cp1

0x910e,	// (0x000118b6) list_single_pane_g1_ParamLimits

0x910e,	// (0x000118b6) list_single_pane_g1

0x911a,	// (0x000118c2) list_single_pane_g2_ParamLimits

0x911a,	// (0x000118c2) list_single_pane_g2

0x0001,

0xf59e,	// (0x00017d46) list_single_pane_g_ParamLimits

0xf59e,	// (0x00017d46) list_single_pane_g

0xc1d6,	// (0x0001497e) list_single_pane_t1_ParamLimits

0xc1d6,	// (0x0001497e) list_single_pane_t1

0x910e,	// (0x000118b6) list_single_number_pane_g1_ParamLimits

0x910e,	// (0x000118b6) list_single_number_pane_g1

0x911a,	// (0x000118c2) list_single_number_pane_g2_ParamLimits

0x911a,	// (0x000118c2) list_single_number_pane_g2

0x0001,

0xf59e,	// (0x00017d46) list_single_number_pane_g_ParamLimits

0xf59e,	// (0x00017d46) list_single_number_pane_g

0x9126,	// (0x000118ce) list_single_number_pane_t1_ParamLimits

0x9126,	// (0x000118ce) list_single_number_pane_t1

0xbfc9,	// (0x00014771) list_single_number_pane_t2_ParamLimits

0xbfc9,	// (0x00014771) list_single_number_pane_t2

0x0001,

0xf92b,	// (0x000180d3) list_single_number_pane_t_ParamLimits

0xf92b,	// (0x000180d3) list_single_number_pane_t

0x9102,	// (0x000118aa) list_single_graphic_pane_g1_ParamLimits

0x9102,	// (0x000118aa) list_single_graphic_pane_g1

0x910e,	// (0x000118b6) list_single_graphic_pane_g2_ParamLimits

0x910e,	// (0x000118b6) list_single_graphic_pane_g2

0x911a,	// (0x000118c2) list_single_graphic_pane_g3_ParamLimits

0x911a,	// (0x000118c2) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00017d44) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00017d44) list_single_graphic_pane_g

0x9126,	// (0x000118ce) list_single_graphic_pane_t1_ParamLimits

0x9126,	// (0x000118ce) list_single_graphic_pane_t1

0x910e,	// (0x000118b6) list_single_heading_pane_g1_ParamLimits

0x910e,	// (0x000118b6) list_single_heading_pane_g1

0x911a,	// (0x000118c2) list_single_heading_pane_g2_ParamLimits

0x911a,	// (0x000118c2) list_single_heading_pane_g2

0x0001,

0xf59e,	// (0x00017d46) list_single_heading_pane_g_ParamLimits

0xf59e,	// (0x00017d46) list_single_heading_pane_g

0x913c,	// (0x000118e4) list_single_heading_pane_t1_ParamLimits

0x913c,	// (0x000118e4) list_single_heading_pane_t1

0x9152,	// (0x000118fa) list_single_heading_pane_t2_ParamLimits

0x9152,	// (0x000118fa) list_single_heading_pane_t2

0x0001,

0xf5a3,	// (0x00017d4b) list_single_heading_pane_t_ParamLimits

0xf5a3,	// (0x00017d4b) list_single_heading_pane_t

0x910e,	// (0x000118b6) list_single_number_heading_pane_g1_ParamLimits

0x910e,	// (0x000118b6) list_single_number_heading_pane_g1

0x911a,	// (0x000118c2) list_single_number_heading_pane_g2_ParamLimits

0x911a,	// (0x000118c2) list_single_number_heading_pane_g2

0x0001,

0xf59e,	// (0x00017d46) list_single_number_heading_pane_g_ParamLimits

0xf59e,	// (0x00017d46) list_single_number_heading_pane_g

0x913c,	// (0x000118e4) list_single_number_heading_pane_t1_ParamLimits

0x913c,	// (0x000118e4) list_single_number_heading_pane_t1

0x9164,	// (0x0001190c) list_single_number_heading_pane_t2_ParamLimits

0x9164,	// (0x0001190c) list_single_number_heading_pane_t2

0x9176,	// (0x0001191e) list_single_number_heading_pane_t3_ParamLimits

0x9176,	// (0x0001191e) list_single_number_heading_pane_t3

0x0002,

0xf5a8,	// (0x00017d50) list_single_number_heading_pane_t_ParamLimits

0xf5a8,	// (0x00017d50) list_single_number_heading_pane_t

0x9102,	// (0x000118aa) list_single_graphic_heading_pane_g1_ParamLimits

0x9102,	// (0x000118aa) list_single_graphic_heading_pane_g1

0x9188,	// (0x00011930) list_single_graphic_heading_pane_g4_ParamLimits

0x9188,	// (0x00011930) list_single_graphic_heading_pane_g4

0x911a,	// (0x000118c2) list_single_graphic_heading_pane_g5_ParamLimits

0x911a,	// (0x000118c2) list_single_graphic_heading_pane_g5

0x0002,

0xf5af,	// (0x00017d57) list_single_graphic_heading_pane_g_ParamLimits

0xf5af,	// (0x00017d57) list_single_graphic_heading_pane_g

0x913c,	// (0x000118e4) list_single_graphic_heading_pane_t1_ParamLimits

0x913c,	// (0x000118e4) list_single_graphic_heading_pane_t1

0x9197,	// (0x0001193f) list_single_graphic_heading_pane_t2_ParamLimits

0x9197,	// (0x0001193f) list_single_graphic_heading_pane_t2

0x0001,

0xf5b6,	// (0x00017d5e) list_single_graphic_heading_pane_t_ParamLimits

0xf5b6,	// (0x00017d5e) list_single_graphic_heading_pane_t

0x91a9,	// (0x00011951) list_single_large_graphic_pane_g1_ParamLimits

0x91a9,	// (0x00011951) list_single_large_graphic_pane_g1

0x91b5,	// (0x0001195d) list_single_large_graphic_pane_g2_ParamLimits

0x91b5,	// (0x0001195d) list_single_large_graphic_pane_g2

0x91c1,	// (0x00011969) list_single_large_graphic_pane_g3_ParamLimits

0x91c1,	// (0x00011969) list_single_large_graphic_pane_g3

0x0002,

0xf5bb,	// (0x00017d63) list_single_large_graphic_pane_g_ParamLimits

0xf5bb,	// (0x00017d63) list_single_large_graphic_pane_g

0xb30d,	// (0x00013ab5) wait_border_pane_g2_copy1

0x91cd,	// (0x00011975) list_single_large_graphic_pane_g4_cp2

0x91d5,	// (0x0001197d) list_single_large_graphic_pane_t1_ParamLimits

0x91d5,	// (0x0001197d) list_single_large_graphic_pane_t1

0x91eb,	// (0x00011993) list_double_pane_g1_ParamLimits

0x91eb,	// (0x00011993) list_double_pane_g1

0x91f7,	// (0x0001199f) list_double_pane_g2_ParamLimits

0x91f7,	// (0x0001199f) list_double_pane_g2

0x0001,

0xf5c2,	// (0x00017d6a) list_double_pane_g_ParamLimits

0xf5c2,	// (0x00017d6a) list_double_pane_g

0x9203,	// (0x000119ab) list_double_pane_t1_ParamLimits

0x9203,	// (0x000119ab) list_double_pane_t1

0x9219,	// (0x000119c1) list_double_pane_t2_ParamLimits

0x9219,	// (0x000119c1) list_double_pane_t2

0x0001,

0xf5c7,	// (0x00017d6f) list_double_pane_t_ParamLimits

0xf5c7,	// (0x00017d6f) list_double_pane_t

0x922b,	// (0x000119d3) list_double2_pane_g1_ParamLimits

0x922b,	// (0x000119d3) list_double2_pane_g1

0x923a,	// (0x000119e2) list_double2_pane_g2_ParamLimits

0x923a,	// (0x000119e2) list_double2_pane_g2

0x0001,

0xf5cc,	// (0x00017d74) list_double2_pane_g_ParamLimits

0xf5cc,	// (0x00017d74) list_double2_pane_g

0x9246,	// (0x000119ee) list_double2_pane_t1_ParamLimits

0x9246,	// (0x000119ee) list_double2_pane_t1

0x925c,	// (0x00011a04) list_double2_pane_t2_ParamLimits

0x925c,	// (0x00011a04) list_double2_pane_t2

0x0001,

0xf5d1,	// (0x00017d79) list_double2_pane_t_ParamLimits

0xf5d1,	// (0x00017d79) list_double2_pane_t

0x91eb,	// (0x00011993) list_double_number_pane_g1_ParamLimits

0x91eb,	// (0x00011993) list_double_number_pane_g1

0x91f7,	// (0x0001199f) list_double_number_pane_g2_ParamLimits

0x91f7,	// (0x0001199f) list_double_number_pane_g2

0x0001,

0xf5c2,	// (0x00017d6a) list_double_number_pane_g_ParamLimits

0xf5c2,	// (0x00017d6a) list_double_number_pane_g

0x926e,	// (0x00011a16) list_double_number_pane_t1_ParamLimits

0x926e,	// (0x00011a16) list_double_number_pane_t1

0x9280,	// (0x00011a28) list_double_number_pane_t2_ParamLimits

0x9280,	// (0x00011a28) list_double_number_pane_t2

0x9296,	// (0x00011a3e) list_double_number_pane_t3_ParamLimits

0x9296,	// (0x00011a3e) list_double_number_pane_t3

0x0002,

0xf5d6,	// (0x00017d7e) list_double_number_pane_t_ParamLimits

0xf5d6,	// (0x00017d7e) list_double_number_pane_t

0x92a8,	// (0x00011a50) list_double_graphic_pane_g1_ParamLimits

0x92a8,	// (0x00011a50) list_double_graphic_pane_g1

0x92b4,	// (0x00011a5c) list_double_graphic_pane_g2_ParamLimits

0x92b4,	// (0x00011a5c) list_double_graphic_pane_g2

0x92c3,	// (0x00011a6b) list_double_graphic_pane_g3_ParamLimits

0x92c3,	// (0x00011a6b) list_double_graphic_pane_g3

0x0003,

0xf5dd,	// (0x00017d85) list_double_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00017d85) list_double_graphic_pane_g

0x92db,	// (0x00011a83) list_double_graphic_pane_t1_ParamLimits

0x92db,	// (0x00011a83) list_double_graphic_pane_t1

0x92f1,	// (0x00011a99) list_double_graphic_pane_t2_ParamLimits

0x92f1,	// (0x00011a99) list_double_graphic_pane_t2

0x0001,

0xf5e6,	// (0x00017d8e) list_double_graphic_pane_t_ParamLimits

0xf5e6,	// (0x00017d8e) list_double_graphic_pane_t

0x9303,	// (0x00011aab) list_double2_graphic_pane_g1_ParamLimits

0x9303,	// (0x00011aab) list_double2_graphic_pane_g1

0x930f,	// (0x00011ab7) list_double2_graphic_pane_g2_ParamLimits

0x930f,	// (0x00011ab7) list_double2_graphic_pane_g2

0x923a,	// (0x000119e2) list_double2_graphic_pane_g3_ParamLimits

0x923a,	// (0x000119e2) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00017d93) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00017d93) list_double2_graphic_pane_g

0x931b,	// (0x00011ac3) list_double2_graphic_pane_t1_ParamLimits

0x931b,	// (0x00011ac3) list_double2_graphic_pane_t1

0x9331,	// (0x00011ad9) list_double2_graphic_pane_t2_ParamLimits

0x9331,	// (0x00011ad9) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00017d9a) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00017d9a) list_double2_graphic_pane_t

0x9343,	// (0x00011aeb) list_double_large_graphic_pane_g1_ParamLimits

0x9343,	// (0x00011aeb) list_double_large_graphic_pane_g1

0x936c,	// (0x00011b14) list_double_large_graphic_pane_g2_ParamLimits

0x936c,	// (0x00011b14) list_double_large_graphic_pane_g2

0x91f7,	// (0x0001199f) list_double_large_graphic_pane_g3_ParamLimits

0x91f7,	// (0x0001199f) list_double_large_graphic_pane_g3

0x937b,	// (0x00011b23) list_double_large_graphic_pane_g4_ParamLimits

0x937b,	// (0x00011b23) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00017d9f) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00017d9f) list_double_large_graphic_pane_g

0x93a1,	// (0x00011b49) list_double_large_graphic_pane_t1_ParamLimits

0x93a1,	// (0x00011b49) list_double_large_graphic_pane_t1

0x93ba,	// (0x00011b62) list_double_large_graphic_pane_t2_ParamLimits

0x93ba,	// (0x00011b62) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x00017daa) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x00017daa) list_double_large_graphic_pane_t

0x93cc,	// (0x00011b74) list_double2_large_graphic_pane_g1_ParamLimits

0x93cc,	// (0x00011b74) list_double2_large_graphic_pane_g1

0x922b,	// (0x000119d3) list_double2_large_graphic_pane_g2_ParamLimits

0x922b,	// (0x000119d3) list_double2_large_graphic_pane_g2

0x923a,	// (0x000119e2) list_double2_large_graphic_pane_g3_ParamLimits

0x923a,	// (0x000119e2) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x00017daf) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x00017daf) list_double2_large_graphic_pane_g

0x93d8,	// (0x00011b80) list_double2_large_graphic_pane_t1_ParamLimits

0x93d8,	// (0x00011b80) list_double2_large_graphic_pane_t1

0x93ee,	// (0x00011b96) list_double2_large_graphic_pane_t2_ParamLimits

0x93ee,	// (0x00011b96) list_double2_large_graphic_pane_t2

0x0001,

0xf60e,	// (0x00017db6) list_double2_large_graphic_pane_t_ParamLimits

0xf60e,	// (0x00017db6) list_double2_large_graphic_pane_t

0x9188,	// (0x00011930) list_double_heading_pane_g1_ParamLimits

0x9188,	// (0x00011930) list_double_heading_pane_g1

0x911a,	// (0x000118c2) list_double_heading_pane_g2_ParamLimits

0x911a,	// (0x000118c2) list_double_heading_pane_g2

0x0001,

0xf5b1,	// (0x00017d59) list_double_heading_pane_g_ParamLimits

0xf5b1,	// (0x00017d59) list_double_heading_pane_g

0x9400,	// (0x00011ba8) list_double_heading_pane_t1_ParamLimits

0x9400,	// (0x00011ba8) list_double_heading_pane_t1

0x925c,	// (0x00011a04) list_double_heading_pane_t2_ParamLimits

0x925c,	// (0x00011a04) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00017dbb) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00017dbb) list_double_heading_pane_t

0x9303,	// (0x00011aab) list_double_graphic_heading_pane_g1_ParamLimits

0x9303,	// (0x00011aab) list_double_graphic_heading_pane_g1

0x9188,	// (0x00011930) list_double_graphic_heading_pane_g2_ParamLimits

0x9188,	// (0x00011930) list_double_graphic_heading_pane_g2

0x911a,	// (0x000118c2) list_double_graphic_heading_pane_g3_ParamLimits

0x911a,	// (0x000118c2) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x00017dc0) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x00017dc0) list_double_graphic_heading_pane_g

0x9416,	// (0x00011bbe) list_double_graphic_heading_pane_t1_ParamLimits

0x9416,	// (0x00011bbe) list_double_graphic_heading_pane_t1

0x9331,	// (0x00011ad9) list_double_graphic_heading_pane_t2_ParamLimits

0x9331,	// (0x00011ad9) list_double_graphic_heading_pane_t2

0x0001,

0xf61f,	// (0x00017dc7) list_double_graphic_heading_pane_t_ParamLimits

0xf61f,	// (0x00017dc7) list_double_graphic_heading_pane_t

0x936c,	// (0x00011b14) list_double_time_pane_g1_ParamLimits

0x936c,	// (0x00011b14) list_double_time_pane_g1

0x91f7,	// (0x0001199f) list_double_time_pane_g2_ParamLimits

0x91f7,	// (0x0001199f) list_double_time_pane_g2

0x0001,

0xf624,	// (0x00017dcc) list_double_time_pane_g_ParamLimits

0xf624,	// (0x00017dcc) list_double_time_pane_g

0x942c,	// (0x00011bd4) list_double_time_pane_t1_ParamLimits

0x942c,	// (0x00011bd4) list_double_time_pane_t1

0x9442,	// (0x00011bea) list_double_time_pane_t2_ParamLimits

0x9442,	// (0x00011bea) list_double_time_pane_t2

0x9454,	// (0x00011bfc) list_double_time_pane_t3_ParamLimits

0x9454,	// (0x00011bfc) list_double_time_pane_t3

0x9466,	// (0x00011c0e) list_double_time_pane_t4_ParamLimits

0x9466,	// (0x00011c0e) list_double_time_pane_t4

0x0003,

0xf629,	// (0x00017dd1) list_double_time_pane_t_ParamLimits

0xf629,	// (0x00017dd1) list_double_time_pane_t

0x930f,	// (0x00011ab7) list_setting_pane_g1_ParamLimits

0x930f,	// (0x00011ab7) list_setting_pane_g1

0x923a,	// (0x000119e2) list_setting_pane_g2_ParamLimits

0x923a,	// (0x000119e2) list_setting_pane_g2

0x0001,

0xf632,	// (0x00017dda) list_setting_pane_g_ParamLimits

0xf632,	// (0x00017dda) list_setting_pane_g

0x9478,	// (0x00011c20) list_setting_pane_t1_ParamLimits

0x9478,	// (0x00011c20) list_setting_pane_t1

0x948f,	// (0x00011c37) list_setting_pane_t2_ParamLimits

0x948f,	// (0x00011c37) list_setting_pane_t2

0x0002,

0xf637,	// (0x00017ddf) list_setting_pane_t_ParamLimits

0xf637,	// (0x00017ddf) list_setting_pane_t

0x94cc,	// (0x00011c74) set_value_pane_cp_ParamLimits

0x94cc,	// (0x00011c74) set_value_pane_cp

0x930f,	// (0x00011ab7) list_setting_number_pane_g1_ParamLimits

0x930f,	// (0x00011ab7) list_setting_number_pane_g1

0x923a,	// (0x000119e2) list_setting_number_pane_g2_ParamLimits

0x923a,	// (0x000119e2) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x00017dda) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x00017dda) list_setting_number_pane_g

0x94d8,	// (0x00011c80) list_setting_number_pane_t1_ParamLimits

0x94d8,	// (0x00011c80) list_setting_number_pane_t1

0x94ea,	// (0x00011c92) list_setting_number_pane_t2_ParamLimits

0x94ea,	// (0x00011c92) list_setting_number_pane_t2

0x9501,	// (0x00011ca9) list_setting_number_pane_t3_ParamLimits

0x9501,	// (0x00011ca9) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00017de6) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00017de6) list_setting_number_pane_t

0x94cc,	// (0x00011c74) set_value_pane_ParamLimits

0x94cc,	// (0x00011c74) set_value_pane

0x9542,	// (0x00011cea) bg_set_opt_pane_ParamLimits

0x9542,	// (0x00011cea) bg_set_opt_pane

0x9563,	// (0x00011d0b) set_value_pane_t1

0x9571,	// (0x00011d19) slider_set_pane_cp3

0x957a,	// (0x00011d22) volume_small_pane_cp

0x9583,	// (0x00011d2b) list_form_gen_pane

0x90f1,	// (0x00011899) scroll_pane_cp8

0x959c,	// (0x00011d44) form_field_data_pane_ParamLimits

0x959c,	// (0x00011d44) form_field_data_pane

0x95bc,	// (0x00011d64) form_field_data_wide_pane_ParamLimits

0x95bc,	// (0x00011d64) form_field_data_wide_pane

0x95db,	// (0x00011d83) form_field_popup_pane_ParamLimits

0x95db,	// (0x00011d83) form_field_popup_pane

0x95f3,	// (0x00011d9b) form_field_popup_wide_pane_ParamLimits

0x95f3,	// (0x00011d9b) form_field_popup_wide_pane

0x960a,	// (0x00011db2) form_field_slider_pane_ParamLimits

0x960a,	// (0x00011db2) form_field_slider_pane

0x961d,	// (0x00011dc5) form_field_slider_wide_pane_ParamLimits

0x961d,	// (0x00011dc5) form_field_slider_wide_pane

0x9630,	// (0x00011dd8) data_form_pane

0x9644,	// (0x00011dec) form_field_data_pane_t1

0x965c,	// (0x00011e04) input_focus_pane

0x966a,	// (0x00011e12) data_form_wide_pane

0x9696,	// (0x00011e3e) form_field_data_wide_pane_t1

0x8f68,	// (0x00011710) input_focus_pane_cp6

0x96b5,	// (0x00011e5d) form_field_popup_pane_t1

0x965c,	// (0x00011e04) input_focus_pane_cp7

0x9630,	// (0x00011dd8) list_form_pane

0x96d5,	// (0x00011e7d) form_field_popup_wide_pane_t1

0x965c,	// (0x00011e04) input_focus_pane_cp8

0x96ea,	// (0x00011e92) list_form_wide_pane

0x9701,	// (0x00011ea9) form_field_slider_pane_t1_ParamLimits

0x9701,	// (0x00011ea9) form_field_slider_pane_t1

0x9717,	// (0x00011ebf) form_field_slider_pane_t2_ParamLimits

0x9717,	// (0x00011ebf) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00017df6) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00017df6) form_field_slider_pane_t

0x8bfa,	// (0x000113a2) input_focus_pane_cp9_ParamLimits

0x8bfa,	// (0x000113a2) input_focus_pane_cp9

0x9729,	// (0x00011ed1) slider_cont_pane_ParamLimits

0x9729,	// (0x00011ed1) slider_cont_pane

0x973d,	// (0x00011ee5) form_field_slider_wide_pane_t1_ParamLimits

0x973d,	// (0x00011ee5) form_field_slider_wide_pane_t1

0x974f,	// (0x00011ef7) form_field_slider_wide_pane_t2_ParamLimits

0x974f,	// (0x00011ef7) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00017dfb) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00017dfb) form_field_slider_wide_pane_t

0x8bfa,	// (0x000113a2) input_focus_pane_cp10_ParamLimits

0x8bfa,	// (0x000113a2) input_focus_pane_cp10

0x9761,	// (0x00011f09) slider_cont_pane_cp1_ParamLimits

0x9761,	// (0x00011f09) slider_cont_pane_cp1

0x9777,	// (0x00011f1f) slider_form_pane_cp

0x977f,	// (0x00011f27) input_focus_pane_g1

0x9787,	// (0x00011f2f) input_focus_pane_g2

0x978f,	// (0x00011f37) input_focus_pane_g3

0x9797,	// (0x00011f3f) input_focus_pane_g4

0x979f,	// (0x00011f47) input_focus_pane_g5

0x97a7,	// (0x00011f4f) input_focus_pane_g6

0x97af,	// (0x00011f57) input_focus_pane_g7

0x97b7,	// (0x00011f5f) input_focus_pane_g8

0x97bf,	// (0x00011f67) input_focus_pane_g9

0x8799,	// (0x00010f41) input_focus_pane_g10

0x0009,

0xf658,	// (0x00017e00) input_focus_pane_g

0xb316,	// (0x00013abe) wait_border_pane_g3_copy1

0x97c7,	// (0x00011f6f) data_form_pane_t1

0x8799,	// (0x00010f41) wait_anim_pane_g1_copy1

0xc1bc,	// (0x00014964) data_form_wide_pane_t1

0x97e1,	// (0x00011f89) list_form_graphic_pane_cp_ParamLimits

0x97e1,	// (0x00011f89) list_form_graphic_pane_cp

0xc189,	// (0x00014931) slider_form_pane_g1

0xc192,	// (0x0001493a) slider_form_pane_g2

0x0006,

0xf95b,	// (0x00018103) slider_form_pane_g

0x97f6,	// (0x00011f9e) list_form_graphic_pane_ParamLimits

0x97f6,	// (0x00011f9e) list_form_graphic_pane

0x980c,	// (0x00011fb4) list_form_graphic_pane_g1

0x9814,	// (0x00011fbc) list_form_graphic_pane_t1_ParamLimits

0x9814,	// (0x00011fbc) list_form_graphic_pane_t1

0x8960,	// (0x00011108) list_highlight_pane_cp5_ParamLimits

0x8960,	// (0x00011108) list_highlight_pane_cp5

0x9829,	// (0x00011fd1) find_pane_g1

0x9832,	// (0x00011fda) input_find_pane

0x983b,	// (0x00011fe3) input_find_pane_g1_ParamLimits

0x983b,	// (0x00011fe3) input_find_pane_g1

0x9847,	// (0x00011fef) input_find_pane_t1_ParamLimits

0x9847,	// (0x00011fef) input_find_pane_t1

0x985c,	// (0x00012004) input_find_pane_t2_ParamLimits

0x985c,	// (0x00012004) input_find_pane_t2

0x0001,

0xf66d,	// (0x00017e15) input_find_pane_t_ParamLimits

0xf66d,	// (0x00017e15) input_find_pane_t

0x9871,	// (0x00012019) input_focus_pane_cp5_ParamLimits

0x9871,	// (0x00012019) input_focus_pane_cp5

0x8bfa,	// (0x000113a2) bg_popup_window_pane_cp2_ParamLimits

0x8bfa,	// (0x000113a2) bg_popup_window_pane_cp2

0x9890,	// (0x00012038) listscroll_menu_pane_ParamLimits

0x9890,	// (0x00012038) listscroll_menu_pane

0x989c,	// (0x00012044) popup_submenu_window_ParamLimits

0x989c,	// (0x00012044) popup_submenu_window

0x98c0,	// (0x00012068) find_popup_pane_g1

0x98c8,	// (0x00012070) input_popup_find_pane_cp

0x98d2,	// (0x0001207a) input_focus_pane_cp4_ParamLimits

0x98d2,	// (0x0001207a) input_focus_pane_cp4

0x98ec,	// (0x00012094) input_popup_find_pane_t1_ParamLimits

0x98ec,	// (0x00012094) input_popup_find_pane_t1

0x8880,	// (0x00011028) bg_popup_sub_pane_cp

0x991a,	// (0x000120c2) listscroll_popup_sub_pane

0x9922,	// (0x000120ca) list_submenu_pane_ParamLimits

0x9922,	// (0x000120ca) list_submenu_pane

0x9933,	// (0x000120db) scroll_pane_cp4

0x993b,	// (0x000120e3) list_single_popup_submenu_pane_ParamLimits

0x993b,	// (0x000120e3) list_single_popup_submenu_pane

0x994d,	// (0x000120f5) list_single_popup_submenu_pane_g1

0x9955,	// (0x000120fd) list_single_popup_submenu_pane_t1_ParamLimits

0x9955,	// (0x000120fd) list_single_popup_submenu_pane_t1

0x8960,	// (0x00011108) bg_active_tab_pane_cp1_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp1

0x996a,	// (0x00012112) tabs_2_active_pane_g1

0x9972,	// (0x0001211a) tabs_2_active_pane_t1

0x8960,	// (0x00011108) bg_passive_tab_pane_cp1_ParamLimits

0x8960,	// (0x00011108) bg_passive_tab_pane_cp1

0x996a,	// (0x00012112) tabs_2_passive_pane_g1

0x9972,	// (0x0001211a) tabs_2_passive_pane_t1

0x9984,	// (0x0001212c) bg_active_tab_pane_cp4

0x9992,	// (0x0001213a) tabs_2_long_active_pane_t1

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp4

0x7379,	// (0x0000fb21) list_single_midp_graphic_pane_g4_ParamLimits

0x9984,	// (0x0001212c) bg_active_tab_pane_cp5

0x99b1,	// (0x00012159) tabs_3_long_active_pane_t1

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp5

0x7379,	// (0x0000fb21) list_single_midp_graphic_pane_g4

0x8960,	// (0x00011108) bg_popup_window_pane_cp13_ParamLimits

0x8960,	// (0x00011108) bg_popup_window_pane_cp13

0x99cc,	// (0x00012174) listscroll_popup_fast_pane_ParamLimits

0x99cc,	// (0x00012174) listscroll_popup_fast_pane

0x99db,	// (0x00012183) grid_popup_fast_pane_ParamLimits

0x99db,	// (0x00012183) grid_popup_fast_pane

0x99ed,	// (0x00012195) scroll_pane_cp9_ParamLimits

0x99ed,	// (0x00012195) scroll_pane_cp9

0xdde1,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xdde1,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2

0x9a11,	// (0x000121b9) input_focus_pane_cp20_ParamLimits

0x9a11,	// (0x000121b9) input_focus_pane_cp20

0x9a1f,	// (0x000121c7) query_popup_data_pane_t1_ParamLimits

0x9a1f,	// (0x000121c7) query_popup_data_pane_t1

0x9a32,	// (0x000121da) query_popup_data_pane_t2_ParamLimits

0x9a32,	// (0x000121da) query_popup_data_pane_t2

0x9a78,	// (0x00012220) query_popup_data_pane_t3_ParamLimits

0x9a78,	// (0x00012220) query_popup_data_pane_t3

0x9ab9,	// (0x00012261) query_popup_data_pane_t4_ParamLimits

0x9ab9,	// (0x00012261) query_popup_data_pane_t4

0x9af5,	// (0x0001229d) query_popup_data_pane_t5_ParamLimits

0x9af5,	// (0x0001229d) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00017e1a) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00017e1a) query_popup_data_pane_t

0x977f,	// (0x00011f27) bg_set_opt_pane_g1

0x9787,	// (0x00011f2f) bg_set_opt_pane_g2

0x978f,	// (0x00011f37) bg_set_opt_pane_g3

0x9797,	// (0x00011f3f) bg_set_opt_pane_g4

0x979f,	// (0x00011f47) bg_set_opt_pane_g5

0x97a7,	// (0x00011f4f) bg_set_opt_pane_g6

0x97af,	// (0x00011f57) bg_set_opt_pane_g7

0x97b7,	// (0x00011f5f) bg_set_opt_pane_g8

0x97bf,	// (0x00011f67) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00017e25) bg_set_opt_pane_g

0x6ad9,	// (0x0000f281) control_top_pane_stacon_ParamLimits

0x6ad9,	// (0x0000f281) control_top_pane_stacon

0x6b2c,	// (0x0000f2d4) signal_pane_stacon_ParamLimits

0x6b2c,	// (0x0000f2d4) signal_pane_stacon

0xa139,	// (0x000128e1) stacon_top_pane_g1_ParamLimits

0xa139,	// (0x000128e1) stacon_top_pane_g1

0x6b51,	// (0x0000f2f9) title_pane_stacon_ParamLimits

0x6b51,	// (0x0000f2f9) title_pane_stacon

0x6b73,	// (0x0000f31b) uni_indicator_pane_stacon_ParamLimits

0x6b73,	// (0x0000f31b) uni_indicator_pane_stacon

0x6b88,	// (0x0000f330) battery_pane_stacon_ParamLimits

0x6b88,	// (0x0000f330) battery_pane_stacon

0x6bc8,	// (0x0000f370) control_bottom_pane_stacon_ParamLimits

0x6bc8,	// (0x0000f370) control_bottom_pane_stacon

0x6be7,	// (0x0000f38f) navi_pane_stacon_ParamLimits

0x6be7,	// (0x0000f38f) navi_pane_stacon

0xa15b,	// (0x00012903) stacon_bottom_pane_g1_ParamLimits

0xa15b,	// (0x00012903) stacon_bottom_pane_g1

0x9b2c,	// (0x000122d4) aid_levels_signal_lsc_ParamLimits

0x9b2c,	// (0x000122d4) aid_levels_signal_lsc

0x68a5,	// (0x0000f04d) signal_pane_stacon_g1_ParamLimits

0x68a5,	// (0x0000f04d) signal_pane_stacon_g1

0x68b1,	// (0x0000f059) signal_pane_stacon_g2_ParamLimits

0x68b1,	// (0x0000f059) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00017e38) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00017e38) signal_pane_stacon_g

0x68e5,	// (0x0000f08d) title_pane_stacon_t1_ParamLimits

0x68e5,	// (0x0000f08d) title_pane_stacon_t1

0x9b46,	// (0x000122ee) uni_indicator_pane_stacon_g1

0x9b50,	// (0x000122f8) uni_indicator_pane_stacon_g2

0x9b5a,	// (0x00012302) uni_indicator_pane_stacon_g3

0x9b64,	// (0x0001230c) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00017e44) uni_indicator_pane_stacon_g

0x690a,	// (0x0000f0b2) control_top_pane_stacon_g1

0x6912,	// (0x0000f0ba) control_top_pane_stacon_t1_ParamLimits

0x6912,	// (0x0000f0ba) control_top_pane_stacon_t1

0x9b6e,	// (0x00012316) aid_levels_battery_lsc_ParamLimits

0x9b6e,	// (0x00012316) aid_levels_battery_lsc

0x6943,	// (0x0000f0eb) battery_pane_stacon_g1_ParamLimits

0x6943,	// (0x0000f0eb) battery_pane_stacon_g1

0x694f,	// (0x0000f0f7) battery_pane_stacon_g2_ParamLimits

0x694f,	// (0x0000f0f7) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00017e4d) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00017e4d) battery_pane_stacon_g

0x697e,	// (0x0000f126) navi_icon_pane_stacon

0x698e,	// (0x0000f136) navi_navi_pane_stacon

0x697e,	// (0x0000f126) navi_text_pane_stacon

0x690a,	// (0x0000f0b2) control_bottom_pane_stacon_g1

0x699e,	// (0x0000f146) control_bottom_pane_stacon_t1_ParamLimits

0x699e,	// (0x0000f146) control_bottom_pane_stacon_t1

0x9b96,	// (0x0001233e) grid_app_pane_ParamLimits

0x9b96,	// (0x0001233e) grid_app_pane

0x9bb2,	// (0x0001235a) scroll_pane_cp15_ParamLimits

0x9bb2,	// (0x0001235a) scroll_pane_cp15

0x9bc3,	// (0x0001236b) cell_app_pane_ParamLimits

0x9bc3,	// (0x0001236b) cell_app_pane

0x9be7,	// (0x0001238f) cell_app_pane_g1_ParamLimits

0x9be7,	// (0x0001238f) cell_app_pane_g1

0x9c0b,	// (0x000123b3) cell_app_pane_g2_ParamLimits

0x9c0b,	// (0x000123b3) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00017e52) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00017e52) cell_app_pane_g

0x9c17,	// (0x000123bf) cell_app_pane_t1_ParamLimits

0x9c17,	// (0x000123bf) cell_app_pane_t1

0x9c2e,	// (0x000123d6) grid_highlight_pane_ParamLimits

0x9c2e,	// (0x000123d6) grid_highlight_pane

0x977f,	// (0x00011f27) cell_highlight_pane_g1

0x9787,	// (0x00011f2f) cell_highlight_pane_g2

0x978f,	// (0x00011f37) cell_highlight_pane_g3

0x9797,	// (0x00011f3f) cell_highlight_pane_g4

0x979f,	// (0x00011f47) cell_highlight_pane_g5

0x97a7,	// (0x00011f4f) cell_highlight_pane_g6

0x97af,	// (0x00011f57) cell_highlight_pane_g7

0x97b7,	// (0x00011f5f) cell_highlight_pane_g8

0x97bf,	// (0x00011f67) cell_highlight_pane_g9

0x8799,	// (0x00010f41) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00017e00) cell_highlight_pane_g

0x9c3f,	// (0x000123e7) bg_scroll_pane

0x69e2,	// (0x0000f18a) scroll_handle_pane

0x9c86,	// (0x0001242e) scroll_bg_pane_g1

0x9c9b,	// (0x00012443) scroll_bg_pane_g2

0x9cb3,	// (0x0001245b) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00017e57) scroll_bg_pane_g

0x9cc8,	// (0x00012470) scroll_handle_focus_pane_ParamLimits

0x9cc8,	// (0x00012470) scroll_handle_focus_pane

0x9c86,	// (0x0001242e) scroll_handle_pane_g1

0x9cd5,	// (0x0001247d) scroll_handle_pane_g2

0x9cb3,	// (0x0001245b) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00017e5e) scroll_handle_pane_g

0x98d2,	// (0x0001207a) bg_popup_sub_pane_cp21_ParamLimits

0x98d2,	// (0x0001207a) bg_popup_sub_pane_cp21

0x9ce9,	// (0x00012491) popup_fep_japan_predictive_window_t1_ParamLimits

0x9ce9,	// (0x00012491) popup_fep_japan_predictive_window_t1

0x9d00,	// (0x000124a8) popup_fep_japan_predictive_window_t2_ParamLimits

0x9d00,	// (0x000124a8) popup_fep_japan_predictive_window_t2

0x9d33,	// (0x000124db) popup_fep_japan_predictive_window_t3_ParamLimits

0x9d33,	// (0x000124db) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00017e65) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00017e65) popup_fep_japan_predictive_window_t

0x8880,	// (0x00011028) bg_popup_sub_pane_cp23

0x9d6a,	// (0x00012512) listscroll_japin_cand_pane

0x9d72,	// (0x0001251a) popup_fep_japan_candidate_window_t1

0x9d80,	// (0x00012528) candidate_pane_ParamLimits

0x9d80,	// (0x00012528) candidate_pane

0x9d93,	// (0x0001253b) scroll_pane_cp30

0x9d9b,	// (0x00012543) list_single_popup_jap_candidate_pane_ParamLimits

0x9d9b,	// (0x00012543) list_single_popup_jap_candidate_pane

0x8880,	// (0x00011028) list_highlight_pane_cp30

0x9db0,	// (0x00012558) list_single_popup_jap_candidate_pane_t1

0x9dbf,	// (0x00012567) level_1_signal

0x9dcc,	// (0x00012574) level_2_signal

0x9dd9,	// (0x00012581) level_3_signal

0x9de6,	// (0x0001258e) level_4_signal

0x9df3,	// (0x0001259b) level_5_signal

0x9e00,	// (0x000125a8) level_6_signal

0x9e0d,	// (0x000125b5) level_7_signal

0x9dbf,	// (0x00012567) level_1_battery

0x9dcc,	// (0x00012574) level_2_battery

0x9dd9,	// (0x00012581) level_3_battery

0x9de6,	// (0x0001258e) level_4_battery

0x9df3,	// (0x0001259b) level_5_battery

0x9e00,	// (0x000125a8) level_6_battery

0x9e0d,	// (0x000125b5) level_7_battery

0x9e32,	// (0x000125da) list_menu_pane_ParamLimits

0x9e32,	// (0x000125da) list_menu_pane

0x9e48,	// (0x000125f0) scroll_pane_cp25_ParamLimits

0x9e48,	// (0x000125f0) scroll_pane_cp25

0x9e61,	// (0x00012609) list_double2_graphic_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double2_graphic_pane_cp2

0x9e61,	// (0x00012609) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double2_large_graphic_pane_cp2

0x9e61,	// (0x00012609) list_double2_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double2_pane_cp2

0x9e61,	// (0x00012609) list_double_graphic_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double_graphic_pane_cp2

0x9e61,	// (0x00012609) list_double_large_graphic_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double_large_graphic_pane_cp2

0x9e61,	// (0x00012609) list_double_number_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double_number_pane_cp2

0x9e61,	// (0x00012609) list_double_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double_pane_cp2

0x9e71,	// (0x00012619) list_single_2graphic_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_2graphic_pane_cp2

0x9e71,	// (0x00012619) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_graphic_heading_pane_cp2

0x9e71,	// (0x00012619) list_single_graphic_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_graphic_pane_cp2

0x9e71,	// (0x00012619) list_single_heading_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_heading_pane_cp2

0x9e86,	// (0x0001262e) list_single_large_graphic_pane_cp2_ParamLimits

0x9e86,	// (0x0001262e) list_single_large_graphic_pane_cp2

0x9e71,	// (0x00012619) list_single_number_heading_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_number_heading_pane_cp2

0x9e71,	// (0x00012619) list_single_number_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_number_pane_cp2

0x9e71,	// (0x00012619) list_single_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_pane_cp2

0x9f02,	// (0x000126aa) bg_popup_sub_pane_cp22

0x6a91,	// (0x0000f239) popup_side_volume_key_window_g1

0x6ab5,	// (0x0000f25d) popup_side_volume_key_window_t1

0x6ad1,	// (0x0000f279) volume_small_pane_cp1

0x8bfa,	// (0x000113a2) bg_popup_sub_pane_cp24_ParamLimits

0x8bfa,	// (0x000113a2) bg_popup_sub_pane_cp24

0x9f18,	// (0x000126c0) fep_china_uni_candidate_pane_ParamLimits

0x9f18,	// (0x000126c0) fep_china_uni_candidate_pane

0x9f2c,	// (0x000126d4) fep_china_uni_entry_pane

0x9f3c,	// (0x000126e4) popup_fep_china_uni_window_g1

0x9f58,	// (0x00012700) fep_china_uni_entry_pane_g1

0x9f60,	// (0x00012708) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00017e96) fep_china_uni_entry_pane_g

0x9f68,	// (0x00012710) fep_entry_item_pane

0x9f72,	// (0x0001271a) fep_candidate_item_pane

0x9f7a,	// (0x00012722) fep_china_uni_candidate_pane_g1

0x9f82,	// (0x0001272a) fep_china_uni_candidate_pane_g2

0x9f8a,	// (0x00012732) fep_china_uni_candidate_pane_g3

0x9f92,	// (0x0001273a) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00017e9b) fep_china_uni_candidate_pane_g

0x8799,	// (0x00010f41) fep_entry_item_pane_g1

0x9f9a,	// (0x00012742) fep_entry_item_pane_t1_ParamLimits

0x9f9a,	// (0x00012742) fep_entry_item_pane_t1

0x9fb0,	// (0x00012758) fep_candidate_item_pane_t1_ParamLimits

0x9fb0,	// (0x00012758) fep_candidate_item_pane_t1

0x9fc5,	// (0x0001276d) fep_candidate_item_pane_t2_ParamLimits

0x9fc5,	// (0x0001276d) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00017ea4) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00017ea4) fep_candidate_item_pane_t

0x8960,	// (0x00011108) list_highlight_pane_cp31_ParamLimits

0x8960,	// (0x00011108) list_highlight_pane_cp31

0x9fd7,	// (0x0001277f) level_1_signal_lsc

0x9fe0,	// (0x00012788) level_2_signal_lsc

0x9fe9,	// (0x00012791) level_3_signal_lsc

0x9ff2,	// (0x0001279a) level_4_signal_lsc

0x9ffb,	// (0x000127a3) level_5_signal_lsc

0xa004,	// (0x000127ac) level_6_signal_lsc

0xa00d,	// (0x000127b5) level_7_signal_lsc

0xa00d,	// (0x000127b5) level_1_battery_lsc

0xa016,	// (0x000127be) level_2_battery_lsc

0xa01f,	// (0x000127c7) level_3_battery_lsc

0xa028,	// (0x000127d0) level_4_battery_lsc

0xa031,	// (0x000127d9) level_5_battery_lsc

0xa03a,	// (0x000127e2) level_6_battery_lsc

0x9fd7,	// (0x0001277f) level_7_battery_lsc

0xa043,	// (0x000127eb) scroll_handle_focus_pane_g1

0xa04c,	// (0x000127f4) scroll_handle_focus_pane_g2

0xa055,	// (0x000127fd) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00017ea9) scroll_handle_focus_pane_g

0xa05e,	// (0x00012806) list_single_2graphic_pane_g1_ParamLimits

0xa05e,	// (0x00012806) list_single_2graphic_pane_g1

0x9188,	// (0x00011930) list_single_2graphic_pane_g2_ParamLimits

0x9188,	// (0x00011930) list_single_2graphic_pane_g2

0x911a,	// (0x000118c2) list_single_2graphic_pane_g3_ParamLimits

0x911a,	// (0x000118c2) list_single_2graphic_pane_g3

0xa06a,	// (0x00012812) list_single_2graphic_pane_g4_ParamLimits

0xa06a,	// (0x00012812) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00017eb0) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00017eb0) list_single_2graphic_pane_g

0xa076,	// (0x0001281e) list_single_2graphic_pane_t1_ParamLimits

0xa076,	// (0x0001281e) list_single_2graphic_pane_t1

0xa0a4,	// (0x0001284c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa0a4,	// (0x0001284c) list_double2_graphic_large_graphic_pane_g1

0x922b,	// (0x000119d3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x922b,	// (0x000119d3) list_double2_graphic_large_graphic_pane_g2

0x923a,	// (0x000119e2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x923a,	// (0x000119e2) list_double2_graphic_large_graphic_pane_g3

0xa0b4,	// (0x0001285c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa0b4,	// (0x0001285c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00017eb9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00017eb9) list_double2_graphic_large_graphic_pane_g

0xa0c0,	// (0x00012868) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa0c0,	// (0x00012868) list_double2_graphic_large_graphic_pane_t1

0xa0d6,	// (0x0001287e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa0d6,	// (0x0001287e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00017ec2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00017ec2) list_double2_graphic_large_graphic_pane_t

0xa219,	// (0x000129c1) popup_fast_swap_window_ParamLimits

0xa219,	// (0x000129c1) popup_fast_swap_window

0xa235,	// (0x000129dd) popup_side_volume_key_window

0xa24f,	// (0x000129f7) stacon_top_pane

0xa259,	// (0x00012a01) status_pane_ParamLimits

0xa259,	// (0x00012a01) status_pane

0xa267,	// (0x00012a0f) status_small_pane

0x8880,	// (0x00011028) control_pane

0x8880,	// (0x00011028) stacon_bottom_pane

0x90f1,	// (0x00011899) scroll_pane_cp121

0x9583,	// (0x00011d2b) set_content_pane

0xa0e8,	// (0x00012890) bg_active_tab_pane_g1_cp1

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp1

0xa0fa,	// (0x000128a2) bg_active_tab_pane_g3_cp1

0xa0e8,	// (0x00012890) bg_passive_tab_pane_g1_cp1

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp1

0xa0fa,	// (0x000128a2) bg_passive_tab_pane_g3_cp1

0xa103,	// (0x000128ab) bg_active_tab_pane_g1_cp2

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp2

0xa10c,	// (0x000128b4) bg_active_tab_pane_g3_cp2

0xa103,	// (0x000128ab) bg_passive_tab_pane_g1_cp2

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp2

0xa10c,	// (0x000128b4) bg_passive_tab_pane_g3_cp2

0xa115,	// (0x000128bd) bg_active_tab_pane_g1_cp3

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp3

0xa11e,	// (0x000128c6) bg_active_tab_pane_g3_cp3

0xa115,	// (0x000128bd) bg_passive_tab_pane_g1_cp3

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp3

0xa11e,	// (0x000128c6) bg_passive_tab_pane_g3_cp3

0xa127,	// (0x000128cf) bg_active_tab_pane_g1_cp4

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp4

0xa130,	// (0x000128d8) bg_active_tab_pane_g3_cp4

0xa127,	// (0x000128cf) bg_passive_tab_pane_g1_cp4

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp4

0xa130,	// (0x000128d8) bg_passive_tab_pane_g3_cp4

0xa177,	// (0x0001291f) bg_active_tab_pane_g1_cp5

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp5

0xa180,	// (0x00012928) bg_active_tab_pane_g3_cp5

0xa177,	// (0x0001291f) bg_passive_tab_pane_g1_cp5

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp5

0xa180,	// (0x00012928) bg_passive_tab_pane_g3_cp5

0xa189,	// (0x00012931) list_set_graphic_pane_ParamLimits

0xa189,	// (0x00012931) list_set_graphic_pane

0x8880,	// (0x00011028) bg_set_opt_pane_cp4

0xa1a0,	// (0x00012948) list_set_graphic_pane_g1_ParamLimits

0xa1a0,	// (0x00012948) list_set_graphic_pane_g1

0xa1ac,	// (0x00012954) list_set_graphic_pane_g2_ParamLimits

0xa1ac,	// (0x00012954) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00017ec7) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00017ec7) list_set_graphic_pane_g

0x0009,

0xfa9d,	// (0x00018245) volume_small_pane_cp_g

0xa1ce,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa1ce,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2

0xa1da,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa1da,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2

0xa1e9,	// (0x00012991) list_double2_large_graphic_pane_g3_cp2

0xa1f1,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xa1f1,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2

0xa207,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xa207,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2

0xbd88,	// (0x00014530) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd88,	// (0x00014530) list_double_large_graphic_pane_g1_cp2

0xbd99,	// (0x00014541) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbd99,	// (0x00014541) list_double_large_graphic_pane_g2_cp2

0xa33d,	// (0x00012ae5) list_double_large_graphic_pane_g3_cp2

0xbda8,	// (0x00014550) list_double_large_graphic_pane_g4_cp

0xbdb0,	// (0x00014558) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbdb0,	// (0x00014558) list_double_large_graphic_pane_t1_cp2

0xbdc7,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbdc7,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2

0xa270,	// (0x00012a18) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa270,	// (0x00012a18) list_double2_graphic_pane_g1_cp2

0xa27c,	// (0x00012a24) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa27c,	// (0x00012a24) list_double2_graphic_pane_g2_cp2

0xa28b,	// (0x00012a33) list_double2_graphic_pane_g3_cp2

0xa293,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xa293,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2

0xa2a9,	// (0x00012a51) list_double2_graphic_pane_t2_cp2_ParamLimits

0xa2a9,	// (0x00012a51) list_double2_graphic_pane_t2_cp2

0xa2bb,	// (0x00012a63) list_single_number_heading_pane_g1_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_number_heading_pane_g1_cp2

0xa2c7,	// (0x00012a6f) list_single_number_heading_pane_g2_cp2

0xa2cf,	// (0x00012a77) list_single_number_heading_pane_t1_cp2_ParamLimits

0xa2cf,	// (0x00012a77) list_single_number_heading_pane_t1_cp2

0xa2e5,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa2e5,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2

0xa2f7,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xa2f7,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2

0xa2bb,	// (0x00012a63) list_single_heading_pane_g1_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_heading_pane_g1_cp2

0xa2c7,	// (0x00012a6f) list_single_heading_pane_g2_cp2

0xa2cf,	// (0x00012a77) list_single_heading_pane_t1_cp2_ParamLimits

0xa2cf,	// (0x00012a77) list_single_heading_pane_t1_cp2

0xbb92,	// (0x0001433a) list_single_heading_pane_t2_cp2_ParamLimits

0xbb92,	// (0x0001433a) list_single_heading_pane_t2_cp2

0xbae2,	// (0x0001428a) list_double_graphic_pane_g1_cp2_ParamLimits

0xbae2,	// (0x0001428a) list_double_graphic_pane_g1_cp2

0xbaee,	// (0x00014296) list_double_graphic_pane_g2_cp2_ParamLimits

0xbaee,	// (0x00014296) list_double_graphic_pane_g2_cp2

0xbafd,	// (0x000142a5) list_double_graphic_pane_g3_cp2

0xbb05,	// (0x000142ad) list_double_graphic_pane_t1_cp2_ParamLimits

0xbb05,	// (0x000142ad) list_double_graphic_pane_t1_cp2

0xbb1b,	// (0x000142c3) list_double_graphic_pane_t2_cp2_ParamLimits

0xbb1b,	// (0x000142c3) list_double_graphic_pane_t2_cp2

0xa331,	// (0x00012ad9) list_double_number_pane_g1_cp2_ParamLimits

0xa331,	// (0x00012ad9) list_double_number_pane_g1_cp2

0xa33d,	// (0x00012ae5) list_double_number_pane_g2_cp2

0xbaa8,	// (0x00014250) list_double_number_pane_t1_cp2_ParamLimits

0xbaa8,	// (0x00014250) list_double_number_pane_t1_cp2

0xbaba,	// (0x00014262) list_double_number_pane_t2_cp2_ParamLimits

0xbaba,	// (0x00014262) list_double_number_pane_t2_cp2

0xbad0,	// (0x00014278) list_double_number_pane_t3_cp2_ParamLimits

0xbad0,	// (0x00014278) list_double_number_pane_t3_cp2

0xb992,	// (0x0001413a) list_single_graphic_pane_g1_cp2_ParamLimits

0xb992,	// (0x0001413a) list_single_graphic_pane_g1_cp2

0xa2bb,	// (0x00012a63) list_single_graphic_pane_g2_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_graphic_pane_g2_cp2

0xa2c7,	// (0x00012a6f) list_single_graphic_pane_g3_cp2

0xb96a,	// (0x00014112) list_single_graphic_pane_t1_cp2_ParamLimits

0xb96a,	// (0x00014112) list_single_graphic_pane_t1_cp2

0xa2bb,	// (0x00012a63) list_single_number_pane_g1_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_number_pane_g1_cp2

0xa2c7,	// (0x00012a6f) list_single_number_pane_g2_cp2

0xb96a,	// (0x00014112) list_single_number_pane_t1_cp2_ParamLimits

0xb96a,	// (0x00014112) list_single_number_pane_t1_cp2

0xb980,	// (0x00014128) list_single_number_pane_t2_cp2_ParamLimits

0xb980,	// (0x00014128) list_single_number_pane_t2_cp2

0xa1da,	// (0x00012982) list_double2_pane_g1_cp2_ParamLimits

0xa1da,	// (0x00012982) list_double2_pane_g1_cp2

0xa1e9,	// (0x00012991) list_double2_pane_g2_cp2

0xa309,	// (0x00012ab1) list_double2_pane_t1_cp2_ParamLimits

0xa309,	// (0x00012ab1) list_double2_pane_t1_cp2

0xa31f,	// (0x00012ac7) list_double2_pane_t2_cp2_ParamLimits

0xa31f,	// (0x00012ac7) list_double2_pane_t2_cp2

0xa331,	// (0x00012ad9) list_double_pane_g1_cp2_ParamLimits

0xa331,	// (0x00012ad9) list_double_pane_g1_cp2

0xa33d,	// (0x00012ae5) list_double_pane_g2_cp2

0xa345,	// (0x00012aed) list_double_pane_t1_cp2_ParamLimits

0xa345,	// (0x00012aed) list_double_pane_t1_cp2

0xa35b,	// (0x00012b03) list_double_pane_t2_cp2_ParamLimits

0xa35b,	// (0x00012b03) list_double_pane_t2_cp2

0xa383,	// (0x00012b2b) list_single_pane_cp2_g3

0xa2bb,	// (0x00012a63) list_single_pane_g1_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_pane_g1_cp2

0xa2c7,	// (0x00012a6f) list_single_pane_g2_cp2

0xa393,	// (0x00012b3b) list_single_pane_t1_cp2_ParamLimits

0xa393,	// (0x00012b3b) list_single_pane_t1_cp2

0xa3ab,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa3ab,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2

0xa3b7,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa3b7,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2

0xa3c3,	// (0x00012b6b) list_single_large_graphic_pane_g3_cp2

0xa3cb,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa3cb,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1

0xa3e5,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xa3e5,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2

0xb56b,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb56b,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2

0xb933,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb933,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2

0xa2c7,	// (0x00012a6f) list_single_graphic_heading_pane_g5_cp2

0xa2cf,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa2cf,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2

0xb958,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb958,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2

0xb927,	// (0x000140cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb927,	// (0x000140cf) list_single_2graphic_pane_g1_cp2

0xb933,	// (0x000140db) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb933,	// (0x000140db) list_single_2graphic_pane_g2_cp2

0xa2c7,	// (0x00012a6f) list_single_2graphic_pane_g3_cp2

0xb55f,	// (0x00013d07) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb55f,	// (0x00013d07) list_single_2graphic_pane_g4_cp2

0xb942,	// (0x000140ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb942,	// (0x000140ea) list_single_2graphic_pane_t1_cp2

0x8799,	// (0x00010f41) list_highlight_pane_g10_cp1

0xb509,	// (0x00013cb1) list_highlight_pane_g1_cp1

0xb511,	// (0x00013cb9) list_highlight_pane_g2_cp1

0xb519,	// (0x00013cc1) list_highlight_pane_g3_cp1

0xb521,	// (0x00013cc9) list_highlight_pane_g4_cp1

0xb529,	// (0x00013cd1) list_highlight_pane_g5_cp1

0xb531,	// (0x00013cd9) list_highlight_pane_g6_cp1

0xb539,	// (0x00013ce1) list_highlight_pane_g7_cp1

0xb541,	// (0x00013ce9) list_highlight_pane_g8_cp1

0xb549,	// (0x00013cf1) list_highlight_pane_g9_cp1

0xb437,	// (0x00013bdf) form_field_slider_pane_t3

0xb445,	// (0x00013bed) form_field_slider_pane_t4

0xb453,	// (0x00013bfb) slider_form_pane_ParamLimits

0xb453,	// (0x00013bfb) slider_form_pane

0x8880,	// (0x00011028) control_abbreviations

0x8880,	// (0x00011028) control_conventions

0x8880,	// (0x00011028) control_definitions

0x8880,	// (0x00011028) format_table_attribute

0xbbdc,	// (0x00014384) bg_popup_preview_window_pane_g9

0x8880,	// (0x00011028) format_table_data2

0x8880,	// (0x00011028) format_table_data3

0x8880,	// (0x00011028) format_table_data_example

0x0008,

0x8880,	// (0x00011028) intro_purpose

0xf8bb,	// (0x00018063) bg_popup_preview_window_pane_g

0x8880,	// (0x00011028) texts_category

0x8880,	// (0x00011028) texts_graphics

0xa3fb,	// (0x00012ba3) text_digital

0xa40a,	// (0x00012bb2) text_primary

0xa419,	// (0x00012bc1) text_primary_small

0xa428,	// (0x00012bd0) text_secondary

0xa437,	// (0x00012bdf) text_title

0xc343,	// (0x00014aeb) bg_passive_tab_pane_g1_cp3_srt

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp3_srt

0xc34c,	// (0x00014af4) bg_passive_tab_pane_g3_cp3_srt

0x8960,	// (0x00011108) bg_active_tab_pane_cp3_srt_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp3_srt

0xc355,	// (0x00014afd) tabs_4_active_pane_srt_g1

0x8990,	// (0x00011138) tabs_4_active_pane_srt_t1_ParamLimits

0x8990,	// (0x00011138) tabs_4_active_pane_srt_t1

0xc343,	// (0x00014aeb) bg_active_tab_pane_g1_cp3_copy1

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp3_copy1

0xc34c,	// (0x00014af4) bg_active_tab_pane_g3_cp3_copy1

0x8960,	// (0x00011108) tabs_2_long_active_pane_srt_ParamLimits

0x8960,	// (0x00011108) tabs_2_long_active_pane_srt

0x8960,	// (0x00011108) tabs_2_long_passive_pane_srt_ParamLimits

0x8960,	// (0x00011108) tabs_2_long_passive_pane_srt

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp4_srt

0xc000,	// (0x000147a8) bg_passive_tab_pane_g1_cp4_srt

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp4_srt

0xc009,	// (0x000147b1) bg_passive_tab_pane_g3_cp4_srt

0x9984,	// (0x0001212c) bg_active_tab_pane_cp4_srt_ParamLimits

0x9984,	// (0x0001212c) bg_active_tab_pane_cp4_srt

0x9992,	// (0x0001213a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9992,	// (0x0001213a) tabs_2_long_active_pane_srt_t1

0xc000,	// (0x000147a8) bg_active_tab_pane_g1_cp4_srt

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp4_srt

0xc009,	// (0x000147b1) bg_active_tab_pane_g3_cp4_srt

0x8bfa,	// (0x000113a2) tabs_3_long_active_pane_srt_ParamLimits

0x8bfa,	// (0x000113a2) tabs_3_long_active_pane_srt

0x8bfa,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8bfa,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt

0x8bfa,	// (0x000113a2) tabs_3_long_passive_pane_srt_ParamLimits

0x8bfa,	// (0x000113a2) tabs_3_long_passive_pane_srt

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp5_srt

0xa177,	// (0x0001291f) bg_passive_tab_pane_g1_cp5_srt

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp5_srt

0xa180,	// (0x00012928) bg_passive_tab_pane_g3_cp5_srt

0x9984,	// (0x0001212c) bg_active_tab_pane_cp5_srt_ParamLimits

0x9984,	// (0x0001212c) bg_active_tab_pane_cp5_srt

0x99b1,	// (0x00012159) tabs_3_long_active_pane_srt_t1_ParamLimits

0x99b1,	// (0x00012159) tabs_3_long_active_pane_srt_t1

0xa177,	// (0x0001291f) bg_active_tab_pane_g1_cp5_srt

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp5_srt

0xa180,	// (0x00012928) bg_active_tab_pane_g3_cp5_srt

0xbff2,	// (0x0001479a) navi_text_pane_srt_t1

0xbfea,	// (0x00014792) navi_icon_pane_srt_g1

0xa5fe,	// (0x00012da6) midp_editing_number_pane_srt

0xa446,	// (0x00012bee) midp_ticker_pane_srt

0xa606,	// (0x00012dae) midp_ticker_pane_srt_g1

0xa60e,	// (0x00012db6) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00017ee6) midp_ticker_pane_srt_g

0xa616,	// (0x00012dbe) midp_ticker_pane_srt_t1

0xbfdb,	// (0x00014783) midp_editing_number_pane_t1_copy1

0xa44e,	// (0x00012bf6) listscroll_midp_pane

0xa44e,	// (0x00012bf6) midp_form_pane

0xa4b6,	// (0x00012c5e) midp_info_popup_window_ParamLimits

0xa4b6,	// (0x00012c5e) midp_info_popup_window

0x98d2,	// (0x0001207a) bg_popup_sub_pane_cp50_ParamLimits

0x98d2,	// (0x0001207a) bg_popup_sub_pane_cp50

0xb14c,	// (0x000138f4) listscroll_midp_info_pane_ParamLimits

0xb14c,	// (0x000138f4) listscroll_midp_info_pane

0xb134,	// (0x000138dc) listscroll_form_midp_pane_ParamLimits

0xb134,	// (0x000138dc) listscroll_form_midp_pane

0xb140,	// (0x000138e8) scroll_bar_cp050

0xb114,	// (0x000138bc) list_midp_pane

0xcf60,	// (0x00015708) signal_pane_g2_cp

0xb04e,	// (0x000137f6) listscroll_midp_info_pane_t1_ParamLimits

0xb04e,	// (0x000137f6) listscroll_midp_info_pane_t1

0xb066,	// (0x0001380e) listscroll_midp_info_pane_t2_ParamLimits

0xb066,	// (0x0001380e) listscroll_midp_info_pane_t2

0xb0a4,	// (0x0001384c) listscroll_midp_info_pane_t3_ParamLimits

0xb0a4,	// (0x0001384c) listscroll_midp_info_pane_t3

0xb0de,	// (0x00013886) listscroll_midp_info_pane_t4_ParamLimits

0xb0de,	// (0x00013886) listscroll_midp_info_pane_t4

0x0003,

0xf7f6,	// (0x00017f9e) listscroll_midp_info_pane_t_ParamLimits

0xf7f6,	// (0x00017f9e) listscroll_midp_info_pane_t

0x9933,	// (0x000120db) scroll_pane_cp21

0xaff2,	// (0x0001379a) form_midp_field_choice_group_pane

0xaffb,	// (0x000137a3) form_midp_field_text_pane

0xb034,	// (0x000137dc) form_midp_field_time_pane

0xb03c,	// (0x000137e4) form_midp_gauge_slider_pane

0xb045,	// (0x000137ed) form_midp_gauge_wait_pane

0x8880,	// (0x00011028) form_midp_image_pane

0xafdd,	// (0x00013785) list_single_midp_pane_ParamLimits

0xafdd,	// (0x00013785) list_single_midp_pane

0xafab,	// (0x00013753) form_midp_field_text_pane_t1

0xadaa,	// (0x00013552) input_focus_pane_cp050

0xafcc,	// (0x00013774) list_midp_form_text_pane

0xaf7a,	// (0x00013722) form_midp_field_choice_group_pane_t1

0xaf88,	// (0x00013730) input_focus_pane_cp051

0xaf9c,	// (0x00013744) list_midp_choice_pane

0x8880,	// (0x00011028) status_idle_pane

0xaf5e,	// (0x00013706) form_midp_field_time_pane_t1

0x8799,	// (0x00010f41) wait_anim_pane_g2_copy1

0xaf6c,	// (0x00013714) form_midp_field_time_pane_t2

0x0001,

0xa560,	// (0x00012d08) aid_navinavi_width_2_pane

0xf7f1,	// (0x00017f99) form_midp_field_time_pane_t

0x8880,	// (0x00011028) input_focus_pane_cp052

0x8880,	// (0x00011028) bg_input_focus_pane_cp040

0xaf1e,	// (0x000136c6) form_midp_gauge_slider_pane_t1

0xaf2c,	// (0x000136d4) form_midp_gauge_slider_pane_t2

0xaf3a,	// (0x000136e2) form_midp_gauge_slider_pane_t3

0xaf48,	// (0x000136f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e8,	// (0x00017f90) form_midp_gauge_slider_pane_t

0xaf56,	// (0x000136fe) form_midp_slider_pane

0x8960,	// (0x00011108) bg_input_focus_pane_cp041_ParamLimits

0x8960,	// (0x00011108) bg_input_focus_pane_cp041

0xaeee,	// (0x00013696) form_midp_gauge_wait_pane_t1_ParamLimits

0xaeee,	// (0x00013696) form_midp_gauge_wait_pane_t1

0xaf00,	// (0x000136a8) form_midp_gauge_wait_pane_t2_ParamLimits

0xaf00,	// (0x000136a8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e3,	// (0x00017f8b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e3,	// (0x00017f8b) form_midp_gauge_wait_pane_t

0xaf12,	// (0x000136ba) form_midp_wait_pane_ParamLimits

0xaf12,	// (0x000136ba) form_midp_wait_pane

0xaeb8,	// (0x00013660) form_midp_image_pane_g1

0xaec1,	// (0x00013669) form_midp_image_pane_t1

0xaed0,	// (0x00013678) form_midp_image_pane_t2

0xaedf,	// (0x00013687) form_midp_image_pane_t3

0x0002,

0xf7dc,	// (0x00017f84) form_midp_image_pane_t

0xaea0,	// (0x00013648) list_single_midp_pane_g1

0xaea9,	// (0x00013651) list_single_midp_pane_t1

0xae8c,	// (0x00013634) list_midp_form_item_pane_ParamLimits

0xae8c,	// (0x00013634) list_midp_form_item_pane

0xa508,	// (0x00012cb0) list_midp_form_item_pane_t1

0xa517,	// (0x00012cbf) midp_ticker_pane_g1

0xa523,	// (0x00012ccb) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00017ecc) midp_ticker_pane_g

0xa52f,	// (0x00012cd7) midp_ticker_pane_t1

0xbfdb,	// (0x00014783) midp_editing_number_pane_t1

0xc1ec,	// (0x00014994) midp_editing_number_pane

0xc1f8,	// (0x000149a0) midp_ticker_pane

0xbfb9,	// (0x00014761) ai_message_heading_pane

0x8880,	// (0x00011028) bg_popup_window_pane_cp14

0xbfc1,	// (0x00014769) listscroll_ai_message_pane

0xbf43,	// (0x000146eb) ai_message_heading_pane_g1_ParamLimits

0xbf43,	// (0x000146eb) ai_message_heading_pane_g1

0xbf4f,	// (0x000146f7) ai_message_heading_pane_g2_ParamLimits

0xbf4f,	// (0x000146f7) ai_message_heading_pane_g2

0xbf5b,	// (0x00014703) ai_message_heading_pane_g3_ParamLimits

0xbf5b,	// (0x00014703) ai_message_heading_pane_g3

0xbf67,	// (0x0001470f) ai_message_heading_pane_g4_ParamLimits

0xbf67,	// (0x0001470f) ai_message_heading_pane_g4

0x0003,

0xf91d,	// (0x000180c5) ai_message_heading_pane_g_ParamLimits

0xf91d,	// (0x000180c5) ai_message_heading_pane_g

0xbf73,	// (0x0001471b) ai_message_heading_pane_t1_ParamLimits

0xbf73,	// (0x0001471b) ai_message_heading_pane_t1

0xbf8d,	// (0x00014735) ai_message_heading_pane_t2_ParamLimits

0xbf8d,	// (0x00014735) ai_message_heading_pane_t2

0x0001,

0xf926,	// (0x000180ce) ai_message_heading_pane_t_ParamLimits

0xf926,	// (0x000180ce) ai_message_heading_pane_t

0xbf9f,	// (0x00014747) bg_popup_heading_pane_cp1_ParamLimits

0xbf9f,	// (0x00014747) bg_popup_heading_pane_cp1

0xbf31,	// (0x000146d9) list_ai_message_pane_ParamLimits

0xbf31,	// (0x000146d9) list_ai_message_pane

0x9933,	// (0x000120db) scroll_pane_cp10

0xbecd,	// (0x00014675) list_ai_message_pane_g1

0xbed5,	// (0x0001467d) list_ai_message_pane_g2

0x0001,

0xf8fa,	// (0x000180a2) list_ai_message_pane_g

0xbedd,	// (0x00014685) list_ai_message_pane_t1_ParamLimits

0xbedd,	// (0x00014685) list_ai_message_pane_t1

0xbef2,	// (0x0001469a) list_ai_message_pane_t2_ParamLimits

0xbef2,	// (0x0001469a) list_ai_message_pane_t2

0xbf07,	// (0x000146af) list_ai_message_pane_t3_ParamLimits

0xbf07,	// (0x000146af) list_ai_message_pane_t3

0xbf1c,	// (0x000146c4) list_ai_message_pane_t4_ParamLimits

0xbf1c,	// (0x000146c4) list_ai_message_pane_t4

0x0003,

0xf8ff,	// (0x000180a7) list_ai_message_pane_t_ParamLimits

0xf8ff,	// (0x000180a7) list_ai_message_pane_t

0xbebb,	// (0x00014663) cell_ai_soft_ind_pane_ParamLimits

0xbebb,	// (0x00014663) cell_ai_soft_ind_pane

0xa541,	// (0x00012ce9) cell_ai_soft_ind_pane_g1_ParamLimits

0xa541,	// (0x00012ce9) cell_ai_soft_ind_pane_g1

0x8880,	// (0x00011028) grid_highlight_cp1

0xa54e,	// (0x00012cf6) text_secondary_cp56_ParamLimits

0xa54e,	// (0x00012cf6) text_secondary_cp56

0xbe90,	// (0x00014638) example_general_pane_ParamLimits

0xbe90,	// (0x00014638) example_general_pane

0xbe9c,	// (0x00014644) example_parent_pane_g1_ParamLimits

0xbe9c,	// (0x00014644) example_parent_pane_g1

0xbea8,	// (0x00014650) example_parent_pane_t1_ParamLimits

0xbea8,	// (0x00014650) example_parent_pane_t1

0x70dd,	// (0x0000f885) popup_preview_text_window_ParamLimits

0x70dd,	// (0x0000f885) popup_preview_text_window

0xa38b,	// (0x00012b33) list_single_pane_cp2_g4

0x8cd6,	// (0x0001147e) bg_popup_preview_window_pane_ParamLimits

0x8cd6,	// (0x0001147e) bg_popup_preview_window_pane

0xbbe4,	// (0x0001438c) popup_preview_text_window_t1_ParamLimits

0xbbe4,	// (0x0001438c) popup_preview_text_window_t1

0xbc02,	// (0x000143aa) popup_preview_text_window_t2_ParamLimits

0xbc02,	// (0x000143aa) popup_preview_text_window_t2

0xbc4b,	// (0x000143f3) popup_preview_text_window_t3_ParamLimits

0xbc4b,	// (0x000143f3) popup_preview_text_window_t3

0xbc90,	// (0x00014438) popup_preview_text_window_t4_ParamLimits

0xbc90,	// (0x00014438) popup_preview_text_window_t4

0x0004,

0xf8ce,	// (0x00018076) popup_preview_text_window_t_ParamLimits

0xf8ce,	// (0x00018076) popup_preview_text_window_t

0xbd0e,	// (0x000144b6) scroll_pane_cp11

0xac92,	// (0x0001343a) bg_popup_preview_window_pane_g1

0xbba4,	// (0x0001434c) bg_popup_preview_window_pane_g2

0xbbac,	// (0x00014354) bg_popup_preview_window_pane_g3

0xbbb4,	// (0x0001435c) bg_popup_preview_window_pane_g4

0xbbbc,	// (0x00014364) bg_popup_preview_window_pane_g5

0xbbc4,	// (0x0001436c) bg_popup_preview_window_pane_g6

0xbbcc,	// (0x00014374) bg_popup_preview_window_pane_g7

0xbbd4,	// (0x0001437c) bg_popup_preview_window_pane_g8

0x6596,	// (0x0000ed3e) aid_popup_width_pane

0x70bf,	// (0x0000f867) popup_midp_note_alarm_window_ParamLimits

0x70bf,	// (0x0000f867) popup_midp_note_alarm_window

0x9630,	// (0x00011dd8) data_form_pane_ParamLimits

0x963c,	// (0x00011de4) form_field_data_pane_g1

0x9644,	// (0x00011dec) form_field_data_pane_t1_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_ParamLimits

0x966a,	// (0x00011e12) data_form_wide_pane_ParamLimits

0x9676,	// (0x00011e1e) form_field_data_wide_pane_g1

0x9696,	// (0x00011e3e) form_field_data_wide_pane_t1_ParamLimits

0x8f68,	// (0x00011710) input_focus_pane_cp6_ParamLimits

0x98e0,	// (0x00012088) input_popup_find_pane_g1_ParamLimits

0x98e0,	// (0x00012088) input_popup_find_pane_g1

0x695f,	// (0x0000f107) aid_navi_side_left_pane

0x696f,	// (0x0000f117) aid_navi_side_right_pane

0xb60a,	// (0x00013db2) bg_popup_window_pane_cp30_ParamLimits

0xb60a,	// (0x00013db2) bg_popup_window_pane_cp30

0xb684,	// (0x00013e2c) popup_midp_note_alarm_window_g1_ParamLimits

0xb684,	// (0x00013e2c) popup_midp_note_alarm_window_g1

0xb6b4,	// (0x00013e5c) popup_midp_note_alarm_window_t1_ParamLimits

0xb6b4,	// (0x00013e5c) popup_midp_note_alarm_window_t1

0xb755,	// (0x00013efd) popup_midp_note_alarm_window_t2_ParamLimits

0xb755,	// (0x00013efd) popup_midp_note_alarm_window_t2

0xb803,	// (0x00013fab) popup_midp_note_alarm_window_t3_ParamLimits

0xb803,	// (0x00013fab) popup_midp_note_alarm_window_t3

0xb82b,	// (0x00013fd3) popup_midp_note_alarm_window_t4_ParamLimits

0xb82b,	// (0x00013fd3) popup_midp_note_alarm_window_t4

0xb84b,	// (0x00013ff3) popup_midp_note_alarm_window_t5_ParamLimits

0xb84b,	// (0x00013ff3) popup_midp_note_alarm_window_t5

0x000a,

0xf86b,	// (0x00018013) popup_midp_note_alarm_window_t_ParamLimits

0xf86b,	// (0x00018013) popup_midp_note_alarm_window_t

0xb8f7,	// (0x0001409f) wait_bar_pane_cp1_ParamLimits

0xb8f7,	// (0x0001409f) wait_bar_pane_cp1

0x8880,	// (0x00011028) wait_anim_pane_copy1

0x8880,	// (0x00011028) wait_border_pane_copy1

0xb304,	// (0x00013aac) wait_border_pane_g1_copy1

0x96ad,	// (0x00011e55) form_field_popup_pane_g1

0x96b5,	// (0x00011e5d) form_field_popup_pane_t1_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_cp7_ParamLimits

0x9630,	// (0x00011dd8) list_form_pane_ParamLimits

0x96cd,	// (0x00011e75) form_field_popup_wide_pane_g1

0x96d5,	// (0x00011e7d) form_field_popup_wide_pane_t1_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_cp8_ParamLimits

0x96ea,	// (0x00011e92) list_form_wide_pane_ParamLimits

0xc3c2,	// (0x00014b6a) aid_size_cell_graphic_pane

0x97c7,	// (0x00011f6f) data_form_pane_t1_ParamLimits

0xc1bc,	// (0x00014964) data_form_wide_pane_t1_ParamLimits

0xa85b,	// (0x00013003) bg_status_flat_pane

0x88c0,	// (0x00011068) title_pane_t1_ParamLimits

0x8928,	// (0x000110d0) title_pane_t2_ParamLimits

0x894e,	// (0x000110f6) title_pane_t3_ParamLimits

0xf532,	// (0x00017cda) title_pane_t_ParamLimits

0x9dbf,	// (0x00012567) level_1_signal_ParamLimits

0x9dcc,	// (0x00012574) level_2_signal_ParamLimits

0x9dd9,	// (0x00012581) level_3_signal_ParamLimits

0x9de6,	// (0x0001258e) level_4_signal_ParamLimits

0x9df3,	// (0x0001259b) level_5_signal_ParamLimits

0x9e00,	// (0x000125a8) level_6_signal_ParamLimits

0x9e0d,	// (0x000125b5) level_7_signal_ParamLimits

0x9dbf,	// (0x00012567) level_1_battery_ParamLimits

0x9dcc,	// (0x00012574) level_2_battery_ParamLimits

0x9dd9,	// (0x00012581) level_3_battery_ParamLimits

0x9de6,	// (0x0001258e) level_4_battery_ParamLimits

0x9df3,	// (0x0001259b) level_5_battery_ParamLimits

0x9e00,	// (0x000125a8) level_6_battery_ParamLimits

0x9e0d,	// (0x000125b5) level_7_battery_ParamLimits

0xb509,	// (0x00013cb1) bg_status_flat_pane_g1

0xb511,	// (0x00013cb9) bg_status_flat_pane_g2

0xb519,	// (0x00013cc1) bg_status_flat_pane_g3

0xb521,	// (0x00013cc9) bg_status_flat_pane_g4

0xb529,	// (0x00013cd1) bg_status_flat_pane_g5

0xb531,	// (0x00013cd9) bg_status_flat_pane_g6

0xb539,	// (0x00013ce1) bg_status_flat_pane_g7

0x8976,	// (0x0001111e) tabs_3_active_pane_t1_ParamLimits

0x8976,	// (0x0001111e) tabs_3_passive_pane_t1_ParamLimits

0x8990,	// (0x00011138) tabs_4_active_pane_t1_ParamLimits

0x8990,	// (0x00011138) tabs_4_1_passive_pane_t1_ParamLimits

0x9972,	// (0x0001211a) tabs_2_active_pane_t1_ParamLimits

0x9972,	// (0x0001211a) tabs_2_passive_pane_t1_ParamLimits

0x9984,	// (0x0001212c) bg_active_tab_pane_cp4_ParamLimits

0x9992,	// (0x0001213a) tabs_2_long_active_pane_t1_ParamLimits

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp4_ParamLimits

0x739f,	// (0x0000fb47) list_single_midp_graphic_pane_t1_ParamLimits

0x9984,	// (0x0001212c) bg_active_tab_pane_cp5_ParamLimits

0x99b1,	// (0x00012159) tabs_3_long_active_pane_t1_ParamLimits

0x99a5,	// (0x0001214d) bg_passive_tab_pane_cp5_ParamLimits

0x739f,	// (0x0000fb47) list_single_midp_graphic_pane_t1

0xa85b,	// (0x00013003) bg_status_flat_pane_ParamLimits

0xa91a,	// (0x000130c2) indicator_pane_cp2_ParamLimits

0xa91a,	// (0x000130c2) indicator_pane_cp2

0xaa3e,	// (0x000131e6) navi_pane_srt_ParamLimits

0xaa3e,	// (0x000131e6) navi_pane_srt

0xaa62,	// (0x0001320a) popup_clock_digital_analogue_window_cp1

0x8a55,	// (0x000111fd) indicator_pane_t1

0xa446,	// (0x00012bee) copy_highlight_pane

0xa446,	// (0x00012bee) cursor_graphics_pane

0xa446,	// (0x00012bee) graphic_within_text_pane

0xa446,	// (0x00012bee) link_highlight_pane

0xbcd1,	// (0x00014479) popup_preview_text_window_t5_ParamLimits

0xbcd1,	// (0x00014479) popup_preview_text_window_t5

0xa568,	// (0x00012d10) cursor_digital_pane

0xa568,	// (0x00012d10) cursor_primary_pane

0xa579,	// (0x00012d21) cursor_primary_small_pane

0xa581,	// (0x00012d29) cursor_secondary_pane

0xa589,	// (0x00012d31) cursor_title_pane

0xa568,	// (0x00012d10) link_highlight_digital_pane

0xa570,	// (0x00012d18) link_highlight_primary_pane

0xa579,	// (0x00012d21) link_highlight_primary_small_pane

0xa581,	// (0x00012d29) link_highlight_secondary_pane

0xa589,	// (0x00012d31) link_highlight_title_pane

0xa568,	// (0x00012d10) copy_highlight_digital_pane

0xa568,	// (0x00012d10) copy_highlight_primary_pane

0xa579,	// (0x00012d21) copy_highlight_primary_small_pane

0xa581,	// (0x00012d29) copy_highlight_secondary_pane

0xa589,	// (0x00012d31) copy_highlight_title_pane

0xa581,	// (0x00012d29) graphic_text_digital_pane

0xb5b9,	// (0x00013d61) graphic_text_primary_pane

0xb5c2,	// (0x00013d6a) graphic_text_primary_small_pane

0xa579,	// (0x00012d21) graphic_text_secondary_pane

0xa568,	// (0x00012d10) graphic_text_title_pane

0xa591,	// (0x00012d39) cursor_primary_pane_g1

0xb5ab,	// (0x00013d53) cursor_text_primary_t1

0xb595,	// (0x00013d3d) cursor_primary_small_pane_g1

0xb59d,	// (0x00013d45) cursor_text_primary_small_t1

0xb57f,	// (0x00013d27) cursor_primary_small_pane_g1_copy1

0xb587,	// (0x00013d2f) cursor_text_primary_small_t1_copy1

0xb551,	// (0x00013cf9) cursor_text_title_t1

0xb577,	// (0x00013d1f) cursor_title_pane_g1

0xa591,	// (0x00012d39) cursor_digital_pane_g1

0xa599,	// (0x00012d41) cursor_text_digital_t1

0xa5a7,	// (0x00012d4f) link_highlight_primary_pane_g1

0xb4fa,	// (0x00013ca2) link_highlight_primary_pane_t1

0xa5a7,	// (0x00012d4f) link_highlight_primary_small_pane_g1

0xa5af,	// (0x00012d57) link_highlight_primary_small_pane_t1

0xa5be,	// (0x00012d66) link_highlight_secondary_pane_g1

0xa5c6,	// (0x00012d6e) link_highlight_secondary_pane_t1

0xb45f,	// (0x00013c07) link_highlight_title_pane_g1

0xb476,	// (0x00013c1e) link_highlight_title_pane_t1

0xb45f,	// (0x00013c07) link_highlight_digital_pane_g1

0xb467,	// (0x00013c0f) link_highlight_digital_pane_t1

0xb31f,	// (0x00013ac7) copy_highlight_primary_pane_g1

0xb345,	// (0x00013aed) copy_highlight_primary_pane_t1

0xb31f,	// (0x00013ac7) copy_highlight_primary_small_pane_g1

0xb336,	// (0x00013ade) copy_highlight_primary_small_pane_t1

0xa5d5,	// (0x00012d7d) copy_highlight_secondary_pane_g1

0xa5dd,	// (0x00012d85) copy_highlight_secondary_pane_t1

0xb31f,	// (0x00013ac7) copy_highlight_title_pane_g1

0xb327,	// (0x00013acf) copy_highlight_title_pane_t1

0xb31f,	// (0x00013ac7) copy_highlight_digital_pane_g1

0xc52e,	// (0x00014cd6) copy_highlight_digital_pane_t1

0xc482,	// (0x00014c2a) graphic_text_primary_pane_g1

0xc512,	// (0x00014cba) graphic_text_primary_pane_t1

0xc520,	// (0x00014cc8) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0001813d) graphic_text_primary_pane_t

0xc4ee,	// (0x00014c96) graphic_text_primary_small_pane_g1

0xc4f6,	// (0x00014c9e) graphic_text_primary_small_pane_t1

0xc504,	// (0x00014cac) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00018138) graphic_text_primary_small_pane_t

0xc4ca,	// (0x00014c72) graphic_text_secondary_pane_g1

0xc4d2,	// (0x00014c7a) graphic_text_secondary_pane_t1

0xc4e0,	// (0x00014c88) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00018133) graphic_text_secondary_pane_t

0xc4a6,	// (0x00014c4e) graphic_text_title_pane_g1

0xc4ae,	// (0x00014c56) graphic_text_title_pane_t1

0xc4bc,	// (0x00014c64) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0001812e) graphic_text_title_pane_t

0xc482,	// (0x00014c2a) graphic_text_digital_pane_g1

0xc48a,	// (0x00014c32) graphic_text_digital_pane_t1

0xc498,	// (0x00014c40) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00018129) graphic_text_digital_pane_t

0x8960,	// (0x00011108) navi_icon_pane_srt_ParamLimits

0x8960,	// (0x00011108) navi_icon_pane_srt

0x8880,	// (0x00011028) navi_midp_pane_srt

0x8880,	// (0x00011028) navi_navi_pane_srt

0x8960,	// (0x00011108) navi_text_pane_srt_ParamLimits

0x8960,	// (0x00011108) navi_text_pane_srt

0xbb5d,	// (0x00014305) navi_navi_icon_text_pane_srt

0xbb65,	// (0x0001430d) navi_navi_pane_srt_g1_ParamLimits

0xbb65,	// (0x0001430d) navi_navi_pane_srt_g1

0xbb77,	// (0x0001431f) navi_navi_pane_srt_g2_ParamLimits

0xbb77,	// (0x0001431f) navi_navi_pane_srt_g2

0x0001,

0xf8b6,	// (0x0001805e) navi_navi_pane_srt_g_ParamLimits

0xf8b6,	// (0x0001805e) navi_navi_pane_srt_g

0xbb89,	// (0x00014331) navi_navi_tabs_pane_srt

0xbb5d,	// (0x00014305) navi_navi_text_pane_srt

0xbb5d,	// (0x00014305) navi_navi_volume_pane_srt

0xc473,	// (0x00014c1b) navi_navi_text_pane_srt_t1

0x7703,	// (0x0000feab) navi_navi_volume_pane_srt_g1

0x770b,	// (0x0000feb3) volume_small_pane_srt_ParamLimits

0x770b,	// (0x0000feb3) volume_small_pane_srt

0x6c06,	// (0x0000f3ae) volume_small_pane_srt_g1_ParamLimits

0x6c06,	// (0x0000f3ae) volume_small_pane_srt_g1

0x6c16,	// (0x0000f3be) volume_small_pane_srt_g2_ParamLimits

0x6c16,	// (0x0000f3be) volume_small_pane_srt_g2

0x6c27,	// (0x0000f3cf) volume_small_pane_srt_g3_ParamLimits

0x6c27,	// (0x0000f3cf) volume_small_pane_srt_g3

0x6c38,	// (0x0000f3e0) volume_small_pane_srt_g4_ParamLimits

0x6c38,	// (0x0000f3e0) volume_small_pane_srt_g4

0x6c49,	// (0x0000f3f1) volume_small_pane_srt_g5_ParamLimits

0x6c49,	// (0x0000f3f1) volume_small_pane_srt_g5

0x6c5a,	// (0x0000f402) volume_small_pane_srt_g6_ParamLimits

0x6c5a,	// (0x0000f402) volume_small_pane_srt_g6

0x6c6b,	// (0x0000f413) volume_small_pane_srt_g7_ParamLimits

0x6c6b,	// (0x0000f413) volume_small_pane_srt_g7

0x6c7c,	// (0x0000f424) volume_small_pane_srt_g8_ParamLimits

0x6c7c,	// (0x0000f424) volume_small_pane_srt_g8

0x6c8d,	// (0x0000f435) volume_small_pane_srt_g9_ParamLimits

0x6c8d,	// (0x0000f435) volume_small_pane_srt_g9

0x6c9e,	// (0x0000f446) volume_small_pane_srt_g10_ParamLimits

0x6c9e,	// (0x0000f446) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00017ed1) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00017ed1) volume_small_pane_srt_g

0x8d7f,	// (0x00011527) query_popup_data_pane_cp2

0xc459,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc459,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1

0xb5b9,	// (0x00013d61) navi_tabs_2_long_pane_srt

0xb5b9,	// (0x00013d61) navi_tabs_2_pane_srt

0xb5b9,	// (0x00013d61) navi_tabs_3_long_pane_srt

0xb5b9,	// (0x00013d61) navi_tabs_3_pane_srt

0xb5b9,	// (0x00013d61) navi_tabs_4_pane_srt

0x76e3,	// (0x0000fe8b) tabs_2_active_pane_srt_ParamLimits

0x76e3,	// (0x0000fe8b) tabs_2_active_pane_srt

0x76f3,	// (0x0000fe9b) tabs_2_passive_pane_srt_ParamLimits

0x76f3,	// (0x0000fe9b) tabs_2_passive_pane_srt

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp1_srt_ParamLimits

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp1_srt

0xc437,	// (0x00014bdf) bg_passive_tab_pane_g1_cp1_srt

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp1_srt

0xc440,	// (0x00014be8) bg_passive_tab_pane_g3_cp1_srt

0x8960,	// (0x00011108) bg_active_tab_pane_cp1_srt_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp1_srt

0xc449,	// (0x00014bf1) tabs_2_active_pane_srt_g1

0x9972,	// (0x0001211a) tabs_2_active_pane_srt_t1_ParamLimits

0x9972,	// (0x0001211a) tabs_2_active_pane_srt_t1

0xc437,	// (0x00014bdf) bg_active_tab_pane_g1_cp1_srt

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp1_srt

0xc440,	// (0x00014be8) bg_active_tab_pane_g3_cp1_srt

0x76b0,	// (0x0000fe58) tabs_3_active_pane_srt_ParamLimits

0x76b0,	// (0x0000fe58) tabs_3_active_pane_srt

0x76c1,	// (0x0000fe69) tabs_3_passive_pane_cp_srt_ParamLimits

0x76c1,	// (0x0000fe69) tabs_3_passive_pane_cp_srt

0x76d2,	// (0x0000fe7a) tabs_3_passive_pane_srt_ParamLimits

0x76d2,	// (0x0000fe7a) tabs_3_passive_pane_srt

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp2_srt_ParamLimits

0xa795,	// (0x00012f3d) bg_passive_tab_pane_cp2_srt

0xa5ec,	// (0x00012d94) bg_passive_tab_pane_g1_cp2_srt

0xa0f1,	// (0x00012899) bg_passive_tab_pane_g2_cp2_srt

0xa5f5,	// (0x00012d9d) bg_passive_tab_pane_g3_cp2_srt

0x8960,	// (0x00011108) bg_active_tab_pane_cp2_srt_ParamLimits

0x8960,	// (0x00011108) bg_active_tab_pane_cp2_srt

0xc42f,	// (0x00014bd7) tabs_3_active_pane_srt_g1

0x8976,	// (0x0001111e) tabs_3_active_pane_srt_t1_ParamLimits

0x8976,	// (0x0001111e) tabs_3_active_pane_srt_t1

0xa5ec,	// (0x00012d94) bg_active_tab_pane_g1_cp2_srt

0xa0f1,	// (0x00012899) bg_active_tab_pane_g2_cp2_srt

0xa5f5,	// (0x00012d9d) bg_active_tab_pane_g3_cp2_srt

0x7668,	// (0x0000fe10) tabs_4_active_pane_srt_ParamLimits

0x7668,	// (0x0000fe10) tabs_4_active_pane_srt

0x767a,	// (0x0000fe22) tabs_4_passive_pane_cp2_srt_ParamLimits

0x767a,	// (0x0000fe22) tabs_4_passive_pane_cp2_srt

0x6e03,	// (0x0000f5ab) aid_size_cell_toolbar

0x99a5,	// (0x0001214d) main_idle_act_pane_ParamLimits

0x6f7a,	// (0x0000f722) popup_large_graphic_colour_window_ParamLimits

0x722e,	// (0x0000f9d6) popup_toolbar_window_ParamLimits

0x722e,	// (0x0000f9d6) popup_toolbar_window

0xc21d,	// (0x000149c5) list_single_graphic_2heading_pane_ParamLimits

0xc21d,	// (0x000149c5) list_single_graphic_2heading_pane

0x9b7c,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane

0x9b8e,	// (0x00012336) aid_size_cell_apps_grid_prt_pane

0xa795,	// (0x00012f3d) bg_wml_button_pane_cp1_ParamLimits

0xa795,	// (0x00012f3d) bg_wml_button_pane_cp1

0xafab,	// (0x00013753) form_midp_field_text_pane_t1_ParamLimits

0xadaa,	// (0x00013552) input_focus_pane_cp050_ParamLimits

0xafcc,	// (0x00013774) list_midp_form_text_pane_ParamLimits

0xaf88,	// (0x00013730) input_focus_pane_cp051_ParamLimits

0xaf9c,	// (0x00013744) list_midp_choice_pane_ParamLimits

0xae5a,	// (0x00013602) list_single_2graphic_pane_cp3_ParamLimits

0xae5a,	// (0x00013602) list_single_2graphic_pane_cp3

0xae6d,	// (0x00013615) list_single_midp_graphic_pane_ParamLimits

0xae6d,	// (0x00013615) list_single_midp_graphic_pane

0x72bd,	// (0x0000fa65) list_single_graphic_2heading_pane_g1_ParamLimits

0x72bd,	// (0x0000fa65) list_single_graphic_2heading_pane_g1

0x72c9,	// (0x0000fa71) list_single_graphic_2heading_pane_g4_ParamLimits

0x72c9,	// (0x0000fa71) list_single_graphic_2heading_pane_g4

0x72d5,	// (0x0000fa7d) list_single_graphic_2heading_pane_g5_ParamLimits

0x72d5,	// (0x0000fa7d) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00017f24) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00017f24) list_single_graphic_2heading_pane_g

0x72e1,	// (0x0000fa89) list_single_graphic_2heading_pane_t1_ParamLimits

0x72e1,	// (0x0000fa89) list_single_graphic_2heading_pane_t1

0x72f5,	// (0x0000fa9d) list_single_graphic_2heading_pane_t2_ParamLimits

0x72f5,	// (0x0000fa9d) list_single_graphic_2heading_pane_t2

0x730f,	// (0x0000fab7) list_single_graphic_2heading_pane_t3_ParamLimits

0x730f,	// (0x0000fab7) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00017f2b) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00017f2b) list_single_graphic_2heading_pane_t

0xabae,	// (0x00013356) bg_popup_sub_pane_cp2

0xabd4,	// (0x0001337c) grid_toobar_pane

0x7327,	// (0x0000facf) cell_toolbar_pane_ParamLimits

0x7327,	// (0x0000facf) cell_toolbar_pane

0xac38,	// (0x000133e0) cell_toolbar_pane_g1_ParamLimits

0xac38,	// (0x000133e0) cell_toolbar_pane_g1

0xac4a,	// (0x000133f2) cell_toolbar_pane_g2_ParamLimits

0xac4a,	// (0x000133f2) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00017f39) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00017f39) cell_toolbar_pane_g

0xac6c,	// (0x00013414) grid_highlight_pane_cp2_ParamLimits

0xac6c,	// (0x00013414) grid_highlight_pane_cp2

0xac86,	// (0x0001342e) toolbar_button_pane

0xac92,	// (0x0001343a) toolbar_button_pane_g1

0xac9a,	// (0x00013442) toolbar_button_pane_g2

0xaca2,	// (0x0001344a) toolbar_button_pane_g3

0xacaa,	// (0x00013452) toolbar_button_pane_g4

0xacb2,	// (0x0001345a) toolbar_button_pane_g5

0xacba,	// (0x00013462) toolbar_button_pane_g6

0xacc2,	// (0x0001346a) toolbar_button_pane_g7

0xacca,	// (0x00013472) toolbar_button_pane_g8

0xacd2,	// (0x0001347a) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00017f3e) toolbar_button_pane_g

0x7356,	// (0x0000fafe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7356,	// (0x0000fafe) list_single_2graphic_pane_g1_cp3

0x7362,	// (0x0000fb0a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7362,	// (0x0000fb0a) list_single_2graphic_pane_g2_cp3

0x7371,	// (0x0000fb19) list_single_2graphic_pane_g3_cp3

0x7379,	// (0x0000fb21) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7379,	// (0x0000fb21) list_single_2graphic_pane_g4_cp3

0x7385,	// (0x0000fb2d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7385,	// (0x0000fb2d) list_single_2graphic_pane_t1_cp3

0x72c9,	// (0x0000fa71) list_single_midp_graphic_pane_g2_ParamLimits

0x72c9,	// (0x0000fa71) list_single_midp_graphic_pane_g2

0x6e0b,	// (0x0000f5b3) aid_zoom_text_primary

0x6e13,	// (0x0000f5bb) aid_zoom_text_secondary

0xa6a4,	// (0x00012e4c) status_small_pane_g7_ParamLimits

0xa6a4,	// (0x00012e4c) status_small_pane_g7

0xa6c7,	// (0x00012e6f) status_small_pane_t1_ParamLimits

0x8897,	// (0x0001103f) title_pane_g2

0x0003,

0xf529,	// (0x00017cd1) title_pane_g

0x8e24,	// (0x000115cc) aid_size_cell_colour_1_pane_ParamLimits

0x8e24,	// (0x000115cc) aid_size_cell_colour_1_pane

0x8e38,	// (0x000115e0) aid_size_cell_colour_2_pane_ParamLimits

0x8e38,	// (0x000115e0) aid_size_cell_colour_2_pane

0x8e4c,	// (0x000115f4) aid_size_cell_colour_3_pane_ParamLimits

0x8e4c,	// (0x000115f4) aid_size_cell_colour_3_pane

0x8e60,	// (0x00011608) aid_size_cell_colour_4_pane_ParamLimits

0x8e60,	// (0x00011608) aid_size_cell_colour_4_pane

0x68c1,	// (0x0000f069) title_pane_stacon_g1_ParamLimits

0x68c1,	// (0x0000f069) title_pane_stacon_g1

0xb39c,	// (0x00013b44) popup_note_wait_window_g3_ParamLimits

0xb39c,	// (0x00013b44) popup_note_wait_window_g3

0xb412,	// (0x00013bba) popup_note_wait_window_t5_ParamLimits

0xb412,	// (0x00013bba) popup_note_wait_window_t5

0x8880,	// (0x00011028) main_feb_china_hwr_fs_writing_pane

0x6e8f,	// (0x0000f637) popup_feb_china_hwr_fs_window_ParamLimits

0x6e8f,	// (0x0000f637) popup_feb_china_hwr_fs_window

0x73b5,	// (0x0000fb5d) aid_size_cell_hwr_fs_ParamLimits

0x73b5,	// (0x0000fb5d) aid_size_cell_hwr_fs

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp3_ParamLimits

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp3

0x73ca,	// (0x0000fb72) grid_hwr_fs_pane_ParamLimits

0x73ca,	// (0x0000fb72) grid_hwr_fs_pane

0x73de,	// (0x0000fb86) linegrid_hwr_fs_pane_ParamLimits

0x73de,	// (0x0000fb86) linegrid_hwr_fs_pane

0x73ee,	// (0x0000fb96) cell_hwr_fs_pane_ParamLimits

0x73ee,	// (0x0000fb96) cell_hwr_fs_pane

0xadb6,	// (0x0001355e) linegrid_hwr_fs_pane_g1_ParamLimits

0xadb6,	// (0x0001355e) linegrid_hwr_fs_pane_g1

0xadc2,	// (0x0001356a) linegrid_hwr_fs_pane_g2_ParamLimits

0xadc2,	// (0x0001356a) linegrid_hwr_fs_pane_g2

0xadd4,	// (0x0001357c) linegrid_hwr_fs_pane_g3_ParamLimits

0xadd4,	// (0x0001357c) linegrid_hwr_fs_pane_g3

0x740c,	// (0x0000fbb4) linegrid_hwr_fs_pane_g4_ParamLimits

0x740c,	// (0x0000fbb4) linegrid_hwr_fs_pane_g4

0x7426,	// (0x0000fbce) linegrid_hwr_fs_pane_g5_ParamLimits

0x7426,	// (0x0000fbce) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c1,	// (0x00017f69) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c1,	// (0x00017f69) linegrid_hwr_fs_pane_g

0xade0,	// (0x00013588) cell_hwr_fs_pane_g1_ParamLimits

0xade0,	// (0x00013588) cell_hwr_fs_pane_g1

0xaaec,	// (0x00013294) cell_hwr_fs_pane_g2_ParamLimits

0xaaec,	// (0x00013294) cell_hwr_fs_pane_g2

0xadf6,	// (0x0001359e) cell_hwr_fs_pane_g3_ParamLimits

0xadf6,	// (0x0001359e) cell_hwr_fs_pane_g3

0xae03,	// (0x000135ab) cell_hwr_fs_pane_g4_ParamLimits

0xae03,	// (0x000135ab) cell_hwr_fs_pane_g4

0x0003,

0xf7cc,	// (0x00017f74) cell_hwr_fs_pane_g_ParamLimits

0xf7cc,	// (0x00017f74) cell_hwr_fs_pane_g

0x743c,	// (0x0000fbe4) cell_hwr_fs_pane_t1

0x8880,	// (0x00011028) grid_highlight_pane_cp6

0x8880,	// (0x00011028) main_idle_act2_pane

0x991a,	// (0x000120c2) aid_inside_area_popup_secondary

0xb9fd,	// (0x000141a5) aid_inside_area_window_primary_ParamLimits

0xb9fd,	// (0x000141a5) aid_inside_area_window_primary

0xc53d,	// (0x00014ce5) ai2_news_ticker_pane

0xc545,	// (0x00014ced) aid_size_cell_ai1_link_ParamLimits

0xc545,	// (0x00014ced) aid_size_cell_ai1_link

0xc55f,	// (0x00014d07) popup_ai2_data_window_ParamLimits

0xc55f,	// (0x00014d07) popup_ai2_data_window

0xc573,	// (0x00014d1b) popup_ai2_link_window_ParamLimits

0xc573,	// (0x00014d1b) popup_ai2_link_window

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp4_ParamLimits

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp4

0xc587,	// (0x00014d2f) grid_ai2_link_pane_ParamLimits

0xc587,	// (0x00014d2f) grid_ai2_link_pane

0xc59e,	// (0x00014d46) popup_ai2_link_window_g1_ParamLimits

0xc59e,	// (0x00014d46) popup_ai2_link_window_g1

0xc5aa,	// (0x00014d52) popup_ai2_link_window_g2_ParamLimits

0xc5aa,	// (0x00014d52) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00018142) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00018142) popup_ai2_link_window_g

0xc5b9,	// (0x00014d61) ai2_mp_button_pane

0xc5c1,	// (0x00014d69) ai2_mp_volume_pane

0xaf88,	// (0x00013730) bg_popup_sub_pane_cp5_ParamLimits

0xaf88,	// (0x00013730) bg_popup_sub_pane_cp5

0xc5c9,	// (0x00014d71) heading_ai2_gene_pane_ParamLimits

0xc5c9,	// (0x00014d71) heading_ai2_gene_pane

0xc5d5,	// (0x00014d7d) list_ai2_gene_pane_ParamLimits

0xc5d5,	// (0x00014d7d) list_ai2_gene_pane

0xc61d,	// (0x00014dc5) cell_ai2_link_pane_ParamLimits

0xc61d,	// (0x00014dc5) cell_ai2_link_pane

0xc633,	// (0x00014ddb) cell_ai2_link_pane_g1

0x8880,	// (0x00011028) grid_highlight_pane_cp7

0x7720,	// (0x0000fec8) ai2_mp_volume_pane_g1

0xc703,	// (0x00014eab) ai2_mp_volume_pane_g2

0xc678,	// (0x00014e20) list_ai2_gene_pane_t1

0xc70b,	// (0x00014eb3) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0001815b) ai2_mp_volume_pane_g

0x7728,	// (0x0000fed0) volume_small_pane_cp3

0xc713,	// (0x00014ebb) aid_size_cell_ai2_button

0xc71b,	// (0x00014ec3) grid_ai2_button_pane

0xc724,	// (0x00014ecc) cell_ai2_button_pane_ParamLimits

0xc724,	// (0x00014ecc) cell_ai2_button_pane

0x8799,	// (0x00010f41) cell_ai2_button_pane_g1

0x8880,	// (0x00011028) grid_highlight_pane_cp8

0xc6c3,	// (0x00014e6b) ai2_gene_pane_t1_ParamLimits

0xc6c3,	// (0x00014e6b) ai2_gene_pane_t1

0x6df9,	// (0x0000f5a1) aid_height_parent_landscape

0xc047,	// (0x000147ef) aid_height_set_list

0xc053,	// (0x000147fb) aid_size_parent

0xc3c2,	// (0x00014b6a) aid_size_cell_graphic_pane_ParamLimits

0xc5e5,	// (0x00014d8d) popup_ai2_data_window_g1_ParamLimits

0xc5e5,	// (0x00014d8d) popup_ai2_data_window_g1

0xc5f1,	// (0x00014d99) ai2_news_ticker_pane_g1

0xc5f9,	// (0x00014da1) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00018147) ai2_news_ticker_pane_g

0xc601,	// (0x00014da9) ai2_news_ticker_pane_t1

0xc60f,	// (0x00014db7) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0001814c) ai2_news_ticker_pane_t

0xc63c,	// (0x00014de4) heading_ai2_gene_pane_g1

0xc644,	// (0x00014dec) heading_ai2_gene_pane_t1_ParamLimits

0xc644,	// (0x00014dec) heading_ai2_gene_pane_t1

0xc659,	// (0x00014e01) list_highlight_pane_cp6

0xc661,	// (0x00014e09) ai2_gene_pane_ParamLimits

0xc661,	// (0x00014e09) ai2_gene_pane

0xc686,	// (0x00014e2e) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00018151) list_ai2_gene_pane_t

0xc694,	// (0x00014e3c) list_highlight_pane_cp8_ParamLimits

0xc694,	// (0x00014e3c) list_highlight_pane_cp8

0xc6a5,	// (0x00014e4d) ai2_gene_pane_g1_ParamLimits

0xc6a5,	// (0x00014e4d) ai2_gene_pane_g1

0xc6b7,	// (0x00014e5f) ai2_gene_pane_g2_ParamLimits

0xc6b7,	// (0x00014e5f) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00018156) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00018156) ai2_gene_pane_g

0x90f1,	// (0x00011899) scroll_pane_cp12

0x6db0,	// (0x0000f558) control_pane_t3_ParamLimits

0x6db0,	// (0x0000f558) control_pane_t3

0xa6b8,	// (0x00012e60) status_small_pane_g8_ParamLimits

0xa6b8,	// (0x00012e60) status_small_pane_g8

0x6f4f,	// (0x0000f6f7) popup_find_window_ParamLimits

0x70d1,	// (0x0000f879) popup_note_image_window_ParamLimits

0xac0a,	// (0x000133b2) list_double2_graphic_pane_vc_g1_ParamLimits

0xac0a,	// (0x000133b2) list_double2_graphic_pane_vc_g1

0xa2bb,	// (0x00012a63) list_double2_graphic_pane_vc_g2_ParamLimits

0xa2bb,	// (0x00012a63) list_double2_graphic_pane_vc_g2

0xac16,	// (0x000133be) list_double2_graphic_pane_vc_g3_ParamLimits

0xac16,	// (0x000133be) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00017f32) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00017f32) list_double2_graphic_pane_vc_g

0xac22,	// (0x000133ca) list_double2_graphic_pane_vc_t1_ParamLimits

0xac22,	// (0x000133ca) list_double2_graphic_pane_vc_t1

0xa2bb,	// (0x00012a63) list_single_heading_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_single_heading_pane_vc_g1

0xac16,	// (0x000133be) list_single_heading_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_single_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_single_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_single_heading_pane_vc_g

0xacda,	// (0x00013482) list_single_heading_pane_vc_t1_ParamLimits

0xacda,	// (0x00013482) list_single_heading_pane_vc_t1

0xacf0,	// (0x00013498) list_single_heading_pane_vc_t2_ParamLimits

0xacf0,	// (0x00013498) list_single_heading_pane_vc_t2

0x0001,

0xf7b0,	// (0x00017f58) list_single_heading_pane_vc_t_ParamLimits

0xf7b0,	// (0x00017f58) list_single_heading_pane_vc_t

0xad02,	// (0x000134aa) list_setting_number_pane_vc_g1_ParamLimits

0xad02,	// (0x000134aa) list_setting_number_pane_vc_g1

0xad0e,	// (0x000134b6) list_setting_number_pane_vc_g2_ParamLimits

0xad0e,	// (0x000134b6) list_setting_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00017f5d) list_setting_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00017f5d) list_setting_number_pane_vc_g

0xad1a,	// (0x000134c2) list_setting_number_pane_vc_t1_ParamLimits

0xad1a,	// (0x000134c2) list_setting_number_pane_vc_t1

0xad2e,	// (0x000134d6) list_setting_number_pane_vc_t2_ParamLimits

0xad2e,	// (0x000134d6) list_setting_number_pane_vc_t2

0xad4a,	// (0x000134f2) list_setting_number_pane_vc_t3_ParamLimits

0xad4a,	// (0x000134f2) list_setting_number_pane_vc_t3

0x0002,

0xf7ba,	// (0x00017f62) list_setting_number_pane_vc_t_ParamLimits

0xf7ba,	// (0x00017f62) list_setting_number_pane_vc_t

0xad72,	// (0x0001351a) set_value_pane_vc_ParamLimits

0xad72,	// (0x0001351a) set_value_pane_vc

0xc21d,	// (0x000149c5) list_double2_graphic_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double2_graphic_pane_vc

0xc231,	// (0x000149d9) list_double2_large_graphic_pane_vc_ParamLimits

0xc231,	// (0x000149d9) list_double2_large_graphic_pane_vc

0xc21d,	// (0x000149c5) list_double2_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double2_pane_vc

0xc21d,	// (0x000149c5) list_double_graphic_heading_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_graphic_heading_pane_vc

0xc21d,	// (0x000149c5) list_double_graphic_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_graphic_pane_vc

0xc21d,	// (0x000149c5) list_double_heading_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_heading_pane_vc

0xc242,	// (0x000149ea) list_double_large_graphic_pane_vc_ParamLimits

0xc242,	// (0x000149ea) list_double_large_graphic_pane_vc

0xc21d,	// (0x000149c5) list_double_number_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_number_pane_vc

0xc21d,	// (0x000149c5) list_double_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_pane_vc

0xc21d,	// (0x000149c5) list_double_time_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_double_time_pane_vc

0xc21d,	// (0x000149c5) list_setting_number_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_setting_number_pane_vc

0xc21d,	// (0x000149c5) list_setting_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_setting_pane_vc

0xc21d,	// (0x000149c5) list_single_graphic_heading_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_single_graphic_heading_pane_vc

0xc21d,	// (0x000149c5) list_single_heading_pane_vc_ParamLimits

0xc21d,	// (0x000149c5) list_single_heading_pane_vc

0xc25e,	// (0x00014a06) list_single_number_heading_pane_vc_ParamLimits

0xc25e,	// (0x00014a06) list_single_number_heading_pane_vc

0xac0a,	// (0x000133b2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xac0a,	// (0x000133b2) list_double_graphic_heading_pane_vc_g1

0xa2bb,	// (0x00012a63) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa2bb,	// (0x00012a63) list_double_graphic_heading_pane_vc_g2

0xac16,	// (0x000133be) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xac16,	// (0x000133be) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf78a,	// (0x00017f32) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf78a,	// (0x00017f32) list_double_graphic_heading_pane_vc_g

0xc758,	// (0x00014f00) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc758,	// (0x00014f00) list_double_graphic_heading_pane_vc_t1

0xc76e,	// (0x00014f16) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc76e,	// (0x00014f16) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x00018162) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x00018162) list_double_graphic_heading_pane_vc_t

0xad02,	// (0x000134aa) list_setting_pane_vc_g1_ParamLimits

0xad02,	// (0x000134aa) list_setting_pane_vc_g1

0xad0e,	// (0x000134b6) list_setting_pane_vc_g2_ParamLimits

0xad0e,	// (0x000134b6) list_setting_pane_vc_g2

0x0001,

0xf7b5,	// (0x00017f5d) list_setting_pane_vc_g_ParamLimits

0xf7b5,	// (0x00017f5d) list_setting_pane_vc_g

0xc963,	// (0x0001510b) list_setting_pane_vc_t1_ParamLimits

0xc963,	// (0x0001510b) list_setting_pane_vc_t1

0xc977,	// (0x0001511f) list_setting_pane_vc_t2_ParamLimits

0xc977,	// (0x0001511f) list_setting_pane_vc_t2

0x0001,

0xf9fd,	// (0x000181a5) list_setting_pane_vc_t_ParamLimits

0xf9fd,	// (0x000181a5) list_setting_pane_vc_t

0xad72,	// (0x0001351a) set_value_pane_cp_vc_ParamLimits

0xad72,	// (0x0001351a) set_value_pane_cp_vc

0xa2bb,	// (0x00012a63) list_single_number_heading_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_single_number_heading_pane_vc_g1

0xac16,	// (0x000133be) list_single_number_heading_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_single_number_heading_pane_vc_g

0xacda,	// (0x00013482) list_single_number_heading_pane_vc_t1_ParamLimits

0xacda,	// (0x00013482) list_single_number_heading_pane_vc_t1

0xc999,	// (0x00015141) list_single_number_heading_pane_vc_t2_ParamLimits

0xc999,	// (0x00015141) list_single_number_heading_pane_vc_t2

0xa2f7,	// (0x00012a9f) list_single_number_heading_pane_vc_t3_ParamLimits

0xa2f7,	// (0x00012a9f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa02,	// (0x000181aa) list_single_number_heading_pane_vc_t_ParamLimits

0xfa02,	// (0x000181aa) list_single_number_heading_pane_vc_t

0xac0a,	// (0x000133b2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xac0a,	// (0x000133b2) list_single_graphic_heading_pane_vc_g1

0xa2bb,	// (0x00012a63) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa2bb,	// (0x00012a63) list_single_graphic_heading_pane_vc_g4

0xac16,	// (0x000133be) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xac16,	// (0x000133be) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78a,	// (0x00017f32) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78a,	// (0x00017f32) list_single_graphic_heading_pane_vc_g

0xacda,	// (0x00013482) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xacda,	// (0x00013482) list_single_graphic_heading_pane_vc_t1

0xc9ab,	// (0x00015153) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc9ab,	// (0x00015153) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x000181b1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000181b1) list_single_graphic_heading_pane_vc_t

0xa2bb,	// (0x00012a63) list_double2_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_double2_pane_vc_g1

0xac16,	// (0x000133be) list_double2_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_double2_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_double2_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_double2_pane_vc_g

0xc9bd,	// (0x00015165) list_double2_pane_vc_t1_ParamLimits

0xc9bd,	// (0x00015165) list_double2_pane_vc_t1

0x91a9,	// (0x00011951) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x91a9,	// (0x00011951) list_double2_large_graphic_pane_vc_g1

0x91b5,	// (0x0001195d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x91b5,	// (0x0001195d) list_double2_large_graphic_pane_vc_g2

0x91c1,	// (0x00011969) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x91c1,	// (0x00011969) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5bb,	// (0x00017d63) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5bb,	// (0x00017d63) list_double2_large_graphic_pane_vc_g

0x91d5,	// (0x0001197d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x91d5,	// (0x0001197d) list_double2_large_graphic_pane_vc_t1

0xc9d3,	// (0x0001517b) list_double_time_pane_vc_g1_ParamLimits

0xc9d3,	// (0x0001517b) list_double_time_pane_vc_g1

0xc9df,	// (0x00015187) list_double_time_pane_vc_g2_ParamLimits

0xc9df,	// (0x00015187) list_double_time_pane_vc_g2

0x0001,

0xfa0e,	// (0x000181b6) list_double_time_pane_vc_g_ParamLimits

0xfa0e,	// (0x000181b6) list_double_time_pane_vc_g

0xc9eb,	// (0x00015193) list_double_time_pane_vc_t1_ParamLimits

0xc9eb,	// (0x00015193) list_double_time_pane_vc_t1

0xca09,	// (0x000151b1) list_double_time_pane_vc_t2_ParamLimits

0xca09,	// (0x000151b1) list_double_time_pane_vc_t2

0xca2d,	// (0x000151d5) list_double_time_pane_vc_t3_ParamLimits

0xca2d,	// (0x000151d5) list_double_time_pane_vc_t3

0xca3f,	// (0x000151e7) list_double_time_pane_vc_t4_ParamLimits

0xca3f,	// (0x000151e7) list_double_time_pane_vc_t4

0x0003,

0xfa13,	// (0x000181bb) list_double_time_pane_vc_t_ParamLimits

0xfa13,	// (0x000181bb) list_double_time_pane_vc_t

0xa2bb,	// (0x00012a63) list_double_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_double_pane_vc_g1

0xac16,	// (0x000133be) list_double_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_double_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_double_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_double_pane_vc_g

0xca51,	// (0x000151f9) list_double_pane_vc_t1_ParamLimits

0xca51,	// (0x000151f9) list_double_pane_vc_t1

0xca63,	// (0x0001520b) list_double_pane_vc_t2_ParamLimits

0xca63,	// (0x0001520b) list_double_pane_vc_t2

0x0001,

0xfa1c,	// (0x000181c4) list_double_pane_vc_t_ParamLimits

0xfa1c,	// (0x000181c4) list_double_pane_vc_t

0xa2bb,	// (0x00012a63) list_double_number_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_double_number_pane_vc_g1

0xac16,	// (0x000133be) list_double_number_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_double_number_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_double_number_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_double_number_pane_vc_g

0xca79,	// (0x00015221) list_double_number_pane_vc_t1_ParamLimits

0xca79,	// (0x00015221) list_double_number_pane_vc_t1

0xca8d,	// (0x00015235) list_double_number_pane_vc_t2_ParamLimits

0xca8d,	// (0x00015235) list_double_number_pane_vc_t2

0xca9f,	// (0x00015247) list_double_number_pane_vc_t3_ParamLimits

0xca9f,	// (0x00015247) list_double_number_pane_vc_t3

0x0002,

0xfa21,	// (0x000181c9) list_double_number_pane_vc_t_ParamLimits

0xfa21,	// (0x000181c9) list_double_number_pane_vc_t

0xcab5,	// (0x0001525d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcab5,	// (0x0001525d) list_double_large_graphic_pane_vc_g1

0xcadd,	// (0x00015285) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcadd,	// (0x00015285) list_double_large_graphic_pane_vc_g2

0xcaf1,	// (0x00015299) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcaf1,	// (0x00015299) list_double_large_graphic_pane_vc_g3

0xcb00,	// (0x000152a8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcb00,	// (0x000152a8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa28,	// (0x000181d0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa28,	// (0x000181d0) list_double_large_graphic_pane_vc_g

0xcb10,	// (0x000152b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcb10,	// (0x000152b8) list_double_large_graphic_pane_vc_t1

0xcb2a,	// (0x000152d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcb2a,	// (0x000152d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x000181d9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa31,	// (0x000181d9) list_double_large_graphic_pane_vc_t

0xa2bb,	// (0x00012a63) list_double_heading_pane_vc_g1_ParamLimits

0xa2bb,	// (0x00012a63) list_double_heading_pane_vc_g1

0xac16,	// (0x000133be) list_double_heading_pane_vc_g2_ParamLimits

0xac16,	// (0x000133be) list_double_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x00017f53) list_double_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00017f53) list_double_heading_pane_vc_g

0xcb4a,	// (0x000152f2) list_double_heading_pane_vc_t1_ParamLimits

0xcb4a,	// (0x000152f2) list_double_heading_pane_vc_t1

0xacda,	// (0x00013482) list_double_heading_pane_vc_t2_ParamLimits

0xacda,	// (0x00013482) list_double_heading_pane_vc_t2

0x0001,

0xfa36,	// (0x000181de) list_double_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x000181de) list_double_heading_pane_vc_t

0xcb5c,	// (0x00015304) list_double_graphic_pane_vc_g1_ParamLimits

0xcb5c,	// (0x00015304) list_double_graphic_pane_vc_g1

0xcb68,	// (0x00015310) list_double_graphic_pane_vc_g2_ParamLimits

0xcb68,	// (0x00015310) list_double_graphic_pane_vc_g2

0xa2bb,	// (0x00012a63) list_double_graphic_pane_vc_g3_ParamLimits

0xa2bb,	// (0x00012a63) list_double_graphic_pane_vc_g3

0x0003,

0xfa3b,	// (0x000181e3) list_double_graphic_pane_vc_g_ParamLimits

0xfa3b,	// (0x000181e3) list_double_graphic_pane_vc_g

0xcb85,	// (0x0001532d) list_double_graphic_pane_vc_t1_ParamLimits

0xcb85,	// (0x0001532d) list_double_graphic_pane_vc_t1

0xcba3,	// (0x0001534b) list_double_graphic_pane_vc_t2_ParamLimits

0xcba3,	// (0x0001534b) list_double_graphic_pane_vc_t2

0x0001,

0xfa44,	// (0x000181ec) list_double_graphic_pane_vc_t_ParamLimits

0xfa44,	// (0x000181ec) list_double_graphic_pane_vc_t

0x659e,	// (0x0000ed46) aid_size_cell_fastswap

0x65a6,	// (0x0000ed4e) aid_size_cell_touch_ParamLimits

0x65a6,	// (0x0000ed4e) aid_size_cell_touch

0x66f5,	// (0x0000ee9d) popup_fast_swap_wide_window_ParamLimits

0x66f5,	// (0x0000ee9d) popup_fast_swap_wide_window

0x67bb,	// (0x0000ef63) touch_pane_ParamLimits

0x67bb,	// (0x0000ef63) touch_pane

0x958c,	// (0x00011d34) button_value_adjust_pane_cp2

0x9594,	// (0x00011d3c) button_value_adjust_pane_cp4

0x95b4,	// (0x00011d5c) form_field_data_pane_cp2

0x95d3,	// (0x00011d7b) form_field_data_wide_pane_cp2

0x9c3f,	// (0x000123e7) bg_scroll_pane_ParamLimits

0x69e2,	// (0x0000f18a) scroll_handle_pane_ParamLimits

0x69f6,	// (0x0000f19e) scroll_sc2_down_pane_ParamLimits

0x69f6,	// (0x0000f19e) scroll_sc2_down_pane

0x9c70,	// (0x00012418) scroll_sc2_up_pane_ParamLimits

0x9c70,	// (0x00012418) scroll_sc2_up_pane

0xd022,	// (0x000157ca) grid_wheel_folder_pane_g1_ParamLimits

0xd022,	// (0x000157ca) grid_wheel_folder_pane_g1

0x6baa,	// (0x0000f352) clock_nsta_pane_cp2_ParamLimits

0x6baa,	// (0x0000f352) clock_nsta_pane_cp2

0xa44e,	// (0x00012bf6) listscroll_midp_pane_ParamLimits

0xa45a,	// (0x00012c02) midp_canvas_pane

0x6df1,	// (0x0000f599) nsta_clock_indic_pane

0xa766,	// (0x00012f0e) listscroll_form_pane_vc

0xa783,	// (0x00012f2b) listscroll_set_pane_vc_ParamLimits

0xa783,	// (0x00012f2b) listscroll_set_pane_vc

0xa877,	// (0x0001301f) clock_nsta_pane

0xa8e7,	// (0x0001308f) indicator_nsta_pane

0xabae,	// (0x00013356) bg_popup_sub_pane_cp2_ParamLimits

0xabc2,	// (0x0001336a) find_pane_cp2_ParamLimits

0xabc2,	// (0x0001336a) find_pane_cp2

0xabd4,	// (0x0001337c) grid_toobar_pane_ParamLimits

0xad7e,	// (0x00013526) list_form_gen_pane_vc_ParamLimits

0xad7e,	// (0x00013526) list_form_gen_pane_vc

0xad94,	// (0x0001353c) scroll_pane_cp8_vc_ParamLimits

0xad94,	// (0x0001353c) scroll_pane_cp8_vc

0xae10,	// (0x000135b8) data_form_wide_pane_vc_ParamLimits

0xae10,	// (0x000135b8) data_form_wide_pane_vc

0xae1c,	// (0x000135c4) form_field_data_wide_pane_vc_g1

0xae24,	// (0x000135cc) form_field_data_wide_pane_vc_t1_ParamLimits

0xae24,	// (0x000135cc) form_field_data_wide_pane_vc_t1

0x965c,	// (0x00011e04) input_focus_pane_cp6_vc_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_cp6_vc

0xb114,	// (0x000138bc) list_midp_pane_ParamLimits

0xb120,	// (0x000138c8) scroll_pane_cp16_ParamLimits

0xb120,	// (0x000138c8) scroll_pane_cp16

0xb182,	// (0x0001392a) button_value_adjust_pane_ParamLimits

0xb182,	// (0x0001392a) button_value_adjust_pane

0xc065,	// (0x0001480d) button_value_adjust_pane_cp6_ParamLimits

0xc065,	// (0x0001480d) button_value_adjust_pane_cp6

0xc16d,	// (0x00014915) settings_code_pane_cp_ParamLimits

0xc16d,	// (0x00014915) settings_code_pane_cp

0x8799,	// (0x00010f41) cell_touch_pane_g1

0x8799,	// (0x00010f41) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00017e77) cell_touch_pane_g

0xc736,	// (0x00014ede) cell_touch_pane_cp_ParamLimits

0xc736,	// (0x00014ede) cell_touch_pane_cp

0xc746,	// (0x00014eee) cell_touch_pane_ParamLimits

0xc746,	// (0x00014eee) cell_touch_pane

0x8799,	// (0x00010f41) scroll_sc2_down_pane_g1

0x8799,	// (0x00010f41) scroll_sc2_up_pane_g1

0x8880,	// (0x00011028) bg_set_opt_pane_cp4_vc

0xc786,	// (0x00014f2e) list_set_graphic_pane_vc_g1_ParamLimits

0xc786,	// (0x00014f2e) list_set_graphic_pane_vc_g1

0xc792,	// (0x00014f3a) list_set_graphic_pane_vc_g2_ParamLimits

0xc792,	// (0x00014f3a) list_set_graphic_pane_vc_g2

0x0001,

0xf9bf,	// (0x00018167) list_set_graphic_pane_vc_g_ParamLimits

0xf9bf,	// (0x00018167) list_set_graphic_pane_vc_g

0xc79e,	// (0x00014f46) text_primary_small_cp13_vc_ParamLimits

0xc79e,	// (0x00014f46) text_primary_small_cp13_vc

0xc7b6,	// (0x00014f5e) list_set_graphic_pane_vc_ParamLimits

0xc7b6,	// (0x00014f5e) list_set_graphic_pane_vc

0x8880,	// (0x00011028) input_focus_pane_cp2_vc

0x8799,	// (0x00010f41) setting_code_pane_vc_g1

0xc7c9,	// (0x00014f71) setting_code_pane_vc_t1

0xc7d7,	// (0x00014f7f) set_text_pane_vc_t1_ParamLimits

0xc7d7,	// (0x00014f7f) set_text_pane_vc_t1

0x8880,	// (0x00011028) input_focus_pane_cp1_vc

0xc7f2,	// (0x00014f9a) list_set_text_pane_vc

0x8799,	// (0x00010f41) setting_text_pane_vc_g1

0x8880,	// (0x00011028) bg_set_opt_pane_cp2_vc

0xc7fc,	// (0x00014fa4) setting_slider_graphic_pane_vc_g1

0xc804,	// (0x00014fac) setting_slider_graphic_pane_vc_t1

0xc812,	// (0x00014fba) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x0001816c) setting_slider_graphic_pane_vc_t

0xc820,	// (0x00014fc8) slider_set_pane_cp_vc

0xc828,	// (0x00014fd0) slider_set_pane_vc_g1

0xc831,	// (0x00014fd9) slider_set_pane_vc_g2

0x0006,

0xf9c9,	// (0x00018171) slider_set_pane_vc_g

0x977f,	// (0x00011f27) set_opt_bg_pane_g1_copy1

0x9787,	// (0x00011f2f) set_opt_bg_pane_g2_copy1

0xc85d,	// (0x00015005) set_opt_bg_pane_g3_copy1

0x9797,	// (0x00011f3f) set_opt_bg_pane_g4_copy1

0x979f,	// (0x00011f47) set_opt_bg_pane_g5_copy1

0x97a7,	// (0x00011f4f) set_opt_bg_pane_g6_copy1

0xc865,	// (0x0001500d) set_opt_bg_pane_g7_copy1

0xc86d,	// (0x00015015) set_opt_bg_pane_g8_copy1

0xc875,	// (0x0001501d) set_opt_bg_pane_g9_copy1

0x8880,	// (0x00011028) bg_set_opt_pane_cp_vc

0xc87d,	// (0x00015025) setting_slider_pane_vc_t1

0xc804,	// (0x00014fac) setting_slider_pane_vc_t2

0xc812,	// (0x00014fba) setting_slider_pane_vc_t3

0x0002,

0xf9d8,	// (0x00018180) setting_slider_pane_vc_t

0xc820,	// (0x00014fc8) slider_set_pane_vc

0x744a,	// (0x0000fbf2) volume_set_pane_vc_g1

0x7731,	// (0x0000fed9) volume_set_pane_vc_g2

0x773a,	// (0x0000fee2) volume_set_pane_vc_g3

0x7743,	// (0x0000feeb) volume_set_pane_vc_g4

0x774c,	// (0x0000fef4) volume_set_pane_vc_g5

0x7755,	// (0x0000fefd) volume_set_pane_vc_g6

0x775e,	// (0x0000ff06) volume_set_pane_vc_g7

0x7767,	// (0x0000ff0f) volume_set_pane_vc_g8

0x7770,	// (0x0000ff18) volume_set_pane_vc_g9

0x7779,	// (0x0000ff21) volume_set_pane_vc_g10

0x0009,

0xf9df,	// (0x00018187) volume_set_pane_vc_g

0xc88c,	// (0x00015034) volume_set_pane_vc

0xc894,	// (0x0001503c) button_value_adjust_pane_cp1_vc

0xc89e,	// (0x00015046) list_highlight_pane_cp2_vc

0xc8a7,	// (0x0001504f) list_set_pane_vc_ParamLimits

0xc8a7,	// (0x0001504f) list_set_pane_vc

0xc8f9,	// (0x000150a1) main_pane_set_vc_t1_ParamLimits

0xc8f9,	// (0x000150a1) main_pane_set_vc_t1

0xc90e,	// (0x000150b6) main_pane_set_vc_t2_ParamLimits

0xc90e,	// (0x000150b6) main_pane_set_vc_t2

0xc920,	// (0x000150c8) main_pane_set_vc_t3_ParamLimits

0xc920,	// (0x000150c8) main_pane_set_vc_t3

0xc932,	// (0x000150da) main_pane_set_vc_t4_ParamLimits

0xc932,	// (0x000150da) main_pane_set_vc_t4

0x0003,

0xf9f4,	// (0x0001819c) main_pane_set_vc_t_ParamLimits

0xf9f4,	// (0x0001819c) main_pane_set_vc_t

0xc944,	// (0x000150ec) setting_code_pane_vc_ParamLimits

0xc944,	// (0x000150ec) setting_code_pane_vc

0xc953,	// (0x000150fb) setting_slider_graphic_pane_vc

0xc953,	// (0x000150fb) setting_slider_pane_vc

0xc953,	// (0x000150fb) setting_text_pane_vc

0xc953,	// (0x000150fb) setting_volume_pane_vc

0xc95b,	// (0x00015103) scroll_pane_cp121_vc

0x9583,	// (0x00011d2b) set_content_pane_vc

0xcbc1,	// (0x00015369) button_value_adjust_pane_g1

0xcbca,	// (0x00015372) button_value_adjust_pane_g2

0x0001,

0xfa49,	// (0x000181f1) button_value_adjust_pane_g

0xcbd3,	// (0x0001537b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcbd3,	// (0x0001537b) form_field_slider_wide_pane_vc_t1

0xcbe9,	// (0x00015391) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcbe9,	// (0x00015391) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4e,	// (0x000181f6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4e,	// (0x000181f6) form_field_slider_wide_pane_vc_t

0x8bfa,	// (0x000113a2) input_focus_pane_cp10_vc_ParamLimits

0x8bfa,	// (0x000113a2) input_focus_pane_cp10_vc

0xcc14,	// (0x000153bc) slider_cont_pane_cp1_vc_ParamLimits

0xcc14,	// (0x000153bc) slider_cont_pane_cp1_vc

0xc828,	// (0x00014fd0) slider_form_pane_g1_cp2

0xc831,	// (0x00014fd9) slider_form_pane_g2_cp2

0xcc2f,	// (0x000153d7) form_field_slider_pane_vc_t3

0xcc3d,	// (0x000153e5) form_field_slider_pane_vc_t4

0xcc4b,	// (0x000153f3) slider_form_pane_vc_ParamLimits

0xcc4b,	// (0x000153f3) slider_form_pane_vc

0xcc58,	// (0x00015400) form_field_slider_pane_vc_t1_ParamLimits

0xcc58,	// (0x00015400) form_field_slider_pane_vc_t1

0xcc6e,	// (0x00015416) form_field_slider_pane_vc_t2_ParamLimits

0xcc6e,	// (0x00015416) form_field_slider_pane_vc_t2

0x0001,

0xfa60,	// (0x00018208) form_field_slider_pane_vc_t_ParamLimits

0xfa60,	// (0x00018208) form_field_slider_pane_vc_t

0x8bfa,	// (0x000113a2) input_focus_pane_cp9_vc_ParamLimits

0x8bfa,	// (0x000113a2) input_focus_pane_cp9_vc

0xcc80,	// (0x00015428) slider_cont_pane_vc_ParamLimits

0xcc80,	// (0x00015428) slider_cont_pane_vc

0xcc92,	// (0x0001543a) list_form_graphic_pane_cp_vc_ParamLimits

0xcc92,	// (0x0001543a) list_form_graphic_pane_cp_vc

0xae1c,	// (0x000135c4) form_field_popup_wide_pane_vc_g1

0xcca7,	// (0x0001544f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcca7,	// (0x0001544f) form_field_popup_wide_pane_vc_t1

0x965c,	// (0x00011e04) input_focus_pane_cp8_vc_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_cp8_vc

0xcce6,	// (0x0001548e) list_form_wide_pane_vc_ParamLimits

0xcce6,	// (0x0001548e) list_form_wide_pane_vc

0xccf2,	// (0x0001549a) list_form_graphic_pane_vc_g1

0xccfa,	// (0x000154a2) list_form_graphic_pane_vc_t1_ParamLimits

0xccfa,	// (0x000154a2) list_form_graphic_pane_vc_t1

0x8960,	// (0x00011108) list_highlight_pane_cp5_vc_ParamLimits

0x8960,	// (0x00011108) list_highlight_pane_cp5_vc

0xcd16,	// (0x000154be) list_form_graphic_pane_vc_ParamLimits

0xcd16,	// (0x000154be) list_form_graphic_pane_vc

0xae1c,	// (0x000135c4) form_field_popup_pane_vc_g1

0xcd2c,	// (0x000154d4) form_field_popup_pane_vc_t1_ParamLimits

0xcd2c,	// (0x000154d4) form_field_popup_pane_vc_t1

0x965c,	// (0x00011e04) input_focus_pane_cp7_vc_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_cp7_vc

0xcd41,	// (0x000154e9) list_form_pane_vc_ParamLimits

0xcd41,	// (0x000154e9) list_form_pane_vc

0xcd4d,	// (0x000154f5) data_form_pane_vc_t1_ParamLimits

0xcd4d,	// (0x000154f5) data_form_pane_vc_t1

0x977f,	// (0x00011f27) input_focus_pane_vc_g1

0x9787,	// (0x00011f2f) input_focus_pane_vc_g2

0x978f,	// (0x00011f37) input_focus_pane_vc_g3

0x9797,	// (0x00011f3f) input_focus_pane_vc_g4

0x979f,	// (0x00011f47) input_focus_pane_vc_g5

0x97a7,	// (0x00011f4f) input_focus_pane_vc_g6

0x97af,	// (0x00011f57) input_focus_pane_vc_g7

0x97b7,	// (0x00011f5f) input_focus_pane_vc_g8

0x97bf,	// (0x00011f67) input_focus_pane_vc_g9

0x8799,	// (0x00010f41) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00017e00) input_focus_pane_vc_g

0xae10,	// (0x000135b8) data_form_pane_vc_ParamLimits

0xae10,	// (0x000135b8) data_form_pane_vc

0xae1c,	// (0x000135c4) form_field_data_pane_vc_g1

0xcd68,	// (0x00015510) form_field_data_pane_vc_t1_ParamLimits

0xcd68,	// (0x00015510) form_field_data_pane_vc_t1

0x965c,	// (0x00011e04) input_focus_pane_vc_ParamLimits

0x965c,	// (0x00011e04) input_focus_pane_vc

0x958c,	// (0x00011d34) button_value_adjust_pane_cp3_vc

0xcd7e,	// (0x00015526) button_value_adjust_pane_cp5_vc

0xcd86,	// (0x0001552e) form_field_data_pane_vc_ParamLimits

0xcd86,	// (0x0001552e) form_field_data_pane_vc

0x95b4,	// (0x00011d5c) form_field_data_pane_vc_cp2

0xcd9d,	// (0x00015545) form_field_data_wide_pane_vc_ParamLimits

0xcd9d,	// (0x00015545) form_field_data_wide_pane_vc

0xcdb3,	// (0x0001555b) form_field_data_wide_pane_vc_cp2

0xcdbb,	// (0x00015563) form_field_popup_pane_vc_ParamLimits

0xcdbb,	// (0x00015563) form_field_popup_pane_vc

0xcdd2,	// (0x0001557a) form_field_popup_wide_pane_vc_ParamLimits

0xcdd2,	// (0x0001557a) form_field_popup_wide_pane_vc

0xcde8,	// (0x00015590) form_field_slider_pane_vc_ParamLimits

0xcde8,	// (0x00015590) form_field_slider_pane_vc

0xcdfb,	// (0x000155a3) form_field_slider_wide_pane_vc_ParamLimits

0xcdfb,	// (0x000155a3) form_field_slider_wide_pane_vc

0xce0e,	// (0x000155b6) grid_touch_1_pane_ParamLimits

0xce0e,	// (0x000155b6) grid_touch_1_pane

0xce1a,	// (0x000155c2) grid_touch_2_pane_ParamLimits

0xce1a,	// (0x000155c2) grid_touch_2_pane

0xa6fd,	// (0x00012ea5) touch_pane_g1_ParamLimits

0xa6fd,	// (0x00012ea5) touch_pane_g1

0xce32,	// (0x000155da) cell_app_pane_cp_wide_ParamLimits

0xce32,	// (0x000155da) cell_app_pane_cp_wide

0xce42,	// (0x000155ea) grid_popup_fast_wide_pane_ParamLimits

0xce42,	// (0x000155ea) grid_popup_fast_wide_pane

0xce56,	// (0x000155fe) scroll_pane_cp19_ParamLimits

0xce56,	// (0x000155fe) scroll_pane_cp19

0x8880,	// (0x00011028) bg_popup_window_pane_cp20

0xce6a,	// (0x00015612) listscroll_popup_fast_wide_pane

0xce72,	// (0x0001561a) grid_indicator_nsta_pane

0xce84,	// (0x0001562c) clock_nsta_pane_g1

0xce8d,	// (0x00015635) clock_nsta_pane_t1

0xcea9,	// (0x00015651) cell_indicator_nsta_pane_ParamLimits

0xcea9,	// (0x00015651) cell_indicator_nsta_pane

0xceda,	// (0x00015682) cell_indicator_nsta_pane_g1

0xcee8,	// (0x00015690) cell_indicator_nsta_pane_g2

0x0001,

0xfa71,	// (0x00018219) cell_indicator_nsta_pane_g

0xcef8,	// (0x000156a0) clock_nsta_pane_cp

0xcf00,	// (0x000156a8) indicator_nsta_pane_cp

0xcf09,	// (0x000156b1) nsta_clock_indic_pane_g1

0x8a41,	// (0x000111e9) grid_indicator_pane

0x9d62,	// (0x0001250a) scroll_pane_cp29

0x6b01,	// (0x0000f2a9) indicator_nsta_pane_cp2_ParamLimits

0x6b01,	// (0x0000f2a9) indicator_nsta_pane_cp2

0x8960,	// (0x00011108) main_apps_wheel_pane

0xaffb,	// (0x000137a3) form_midp_field_text_pane_ParamLimits

0xb140,	// (0x000138e8) scroll_bar_cp050_ParamLimits

0xcf72,	// (0x0001571a) cell_indicator_pane_ParamLimits

0xcf72,	// (0x0001571a) cell_indicator_pane

0xcf88,	// (0x00015730) cell_indicator_pane_g1

0xcf92,	// (0x0001573a) grid_wheel_folder_pane_ParamLimits

0xcf92,	// (0x0001573a) grid_wheel_folder_pane

0xcfa4,	// (0x0001574c) list_wheel_apps_pane_ParamLimits

0xcfa4,	// (0x0001574c) list_wheel_apps_pane

0xcfb3,	// (0x0001575b) main_apps_wheel_pane_g1_ParamLimits

0xcfb3,	// (0x0001575b) main_apps_wheel_pane_g1

0xcfc7,	// (0x0001576f) main_apps_wheel_pane_g2_ParamLimits

0xcfc7,	// (0x0001576f) main_apps_wheel_pane_g2

0x0001,

0xfa8d,	// (0x00018235) main_apps_wheel_pane_g_ParamLimits

0xfa8d,	// (0x00018235) main_apps_wheel_pane_g

0xcfdb,	// (0x00015783) main_apps_wheel_pane_t1_ParamLimits

0xcfdb,	// (0x00015783) main_apps_wheel_pane_t1

0xcffa,	// (0x000157a2) list_wheel_apps_pane_g1

0xd002,	// (0x000157aa) list_wheel_apps_pane_g2

0xd00a,	// (0x000157b2) list_wheel_apps_pane_g3

0xd012,	// (0x000157ba) list_wheel_apps_pane_g4

0xd01a,	// (0x000157c2) list_wheel_apps_pane_g5

0x0004,

0xfa92,	// (0x0001823a) list_wheel_apps_pane_g

0x8960,	// (0x00011108) navi_icon_text_pane

0xa7bf,	// (0x00012f67) aid_fill_nsta

0xd039,	// (0x000157e1) navi_icon_text_pane_g1

0xd045,	// (0x000157ed) navi_icon_text_pane_t1

0xa1b8,	// (0x00012960) list_set_graphic_pane_t1_ParamLimits

0xa1b8,	// (0x00012960) list_set_graphic_pane_t1

0xb87a,	// (0x00014022) popup_midp_note_alarm_window_t6_ParamLimits

0xb87a,	// (0x00014022) popup_midp_note_alarm_window_t6

0xb88c,	// (0x00014034) popup_midp_note_alarm_window_t7_ParamLimits

0xb88c,	// (0x00014034) popup_midp_note_alarm_window_t7

0xb89e,	// (0x00014046) popup_midp_note_alarm_window_t8_ParamLimits

0xb89e,	// (0x00014046) popup_midp_note_alarm_window_t8

0xb8b0,	// (0x00014058) popup_midp_note_alarm_window_t9_ParamLimits

0xb8b0,	// (0x00014058) popup_midp_note_alarm_window_t9

0xb8c2,	// (0x0001406a) popup_midp_note_alarm_window_t10_ParamLimits

0xb8c2,	// (0x0001406a) popup_midp_note_alarm_window_t10

0xb8d4,	// (0x0001407c) popup_midp_note_alarm_window_t11_ParamLimits

0xb8d4,	// (0x0001407c) popup_midp_note_alarm_window_t11

0xb8e6,	// (0x0001408e) scroll_pane_cp17_ParamLimits

0xb8e6,	// (0x0001408e) scroll_pane_cp17

0x744a,	// (0x0000fbf2) volume_small_pane_cp_g1

0x7782,	// (0x0000ff2a) volume_small_pane_cp_g2

0x778b,	// (0x0000ff33) volume_small_pane_cp_g3

0x7794,	// (0x0000ff3c) volume_small_pane_cp_g4

0x7477,	// (0x0000fc1f) volume_small_pane_cp_g5

0x779d,	// (0x0000ff45) volume_small_pane_cp_g6

0x77a6,	// (0x0000ff4e) volume_small_pane_cp_g7

0x77af,	// (0x0000ff57) volume_small_pane_cp_g8

0x77b8,	// (0x0000ff60) volume_small_pane_cp_g9

0x77c1,	// (0x0000ff69) volume_small_pane_cp_g10

0xa517,	// (0x00012cbf) midp_ticker_pane_g1_ParamLimits

0xa523,	// (0x00012ccb) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00017ecc) midp_ticker_pane_g_ParamLimits

0xa52f,	// (0x00012cd7) midp_ticker_pane_t1_ParamLimits

0xa7cf,	// (0x00012f77) aid_fill_nsta_2

0xb12c,	// (0x000138d4) list_form2_midp_pane

0xc1ec,	// (0x00014994) midp_editing_number_pane_ParamLimits

0xc1f8,	// (0x000149a0) midp_ticker_pane_ParamLimits

0xd057,	// (0x000157ff) form2_midp_field_pane

0xd07b,	// (0x00015823) scroll_pane_cp51

0xd09b,	// (0x00015843) form2_midp_button_pane_ParamLimits

0xd09b,	// (0x00015843) form2_midp_button_pane

0xd0ad,	// (0x00015855) form2_midp_content_pane_ParamLimits

0xd0ad,	// (0x00015855) form2_midp_content_pane

0xd0c7,	// (0x0001586f) form2_midp_field_choice_group_pane

0xd0cf,	// (0x00015877) form2_midp_field_pane_g1

0xd0d7,	// (0x0001587f) form2_midp_field_pane_g2

0xd0df,	// (0x00015887) form2_midp_field_pane_g3

0xd0e7,	// (0x0001588f) form2_midp_field_pane_g4

0x0003,

0xfab7,	// (0x0001825f) form2_midp_field_pane_g

0xd0ef,	// (0x00015897) form2_midp_gauge_slider_pane

0xd0f7,	// (0x0001589f) form2_midp_gauge_wait_pane

0xd0ff,	// (0x000158a7) form2_midp_image_pane_ParamLimits

0xd0ff,	// (0x000158a7) form2_midp_image_pane

0xd11a,	// (0x000158c2) form2_midp_label_pane_ParamLimits

0xd11a,	// (0x000158c2) form2_midp_label_pane

0xd133,	// (0x000158db) form2_midp_label_pane_cp_ParamLimits

0xd133,	// (0x000158db) form2_midp_label_pane_cp

0xd152,	// (0x000158fa) form2_midp_string_pane_ParamLimits

0xd152,	// (0x000158fa) form2_midp_string_pane

0xd164,	// (0x0001590c) form2_midp_text_pane_ParamLimits

0xd164,	// (0x0001590c) form2_midp_text_pane

0xd17d,	// (0x00015925) form2_midp_time_pane

0xd18d,	// (0x00015935) input_focus_pane_cp51_ParamLimits

0xd18d,	// (0x00015935) input_focus_pane_cp51

0xd1a5,	// (0x0001594d) form2_midp_label_pane_t1_ParamLimits

0xd1a5,	// (0x0001594d) form2_midp_label_pane_t1

0x97c7,	// (0x00011f6f) form2_mdip_text_pane_t1_ParamLimits

0x97c7,	// (0x00011f6f) form2_mdip_text_pane_t1

0xd1e5,	// (0x0001598d) form2_midp_time_pane_t1

0xd200,	// (0x000159a8) form2_midp_gauge_slider_pane_t1

0xd212,	// (0x000159ba) form2_midp_gauge_slider_pane_t2

0xd224,	// (0x000159cc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac0,	// (0x00018268) form2_midp_gauge_slider_pane_t

0xd236,	// (0x000159de) form2_midp_slider_pane

0xd242,	// (0x000159ea) form2_midp_gauge_wait_pane_t1

0xd250,	// (0x000159f8) form2_midp_wait_pane_ParamLimits

0xd250,	// (0x000159f8) form2_midp_wait_pane

0xae5a,	// (0x00013602) list_single_2graphic_pane_cp4_ParamLimits

0xae5a,	// (0x00013602) list_single_2graphic_pane_cp4

0xd27b,	// (0x00015a23) list_single_midp_graphic_pane_cp_ParamLimits

0xd27b,	// (0x00015a23) list_single_midp_graphic_pane_cp

0x8880,	// (0x00011028) list_highlight_pane_cp20

0xd299,	// (0x00015a41) list_single_2graphic_pane_g1_cp4

0xc63c,	// (0x00014de4) list_single_2graphic_pane_g2_cp4

0xd2a1,	// (0x00015a49) list_single_2graphic_pane_t1_cp4

0x8960,	// (0x00011108) list_highlight_pane_cp21

0xd2b0,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp

0xd2bf,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp

0xd2d4,	// (0x00015a7c) form2_mdip_string_pane_t1_ParamLimits

0xd2d4,	// (0x00015a7c) form2_mdip_string_pane_t1

0x8880,	// (0x00011028) bg_wml_button_pane_cp2

0x8799,	// (0x00010f41) form2_midp_image_pane_g1

0x938c,	// (0x00011b34) list_double_large_graphic_pane_g5_ParamLimits

0x938c,	// (0x00011b34) list_double_large_graphic_pane_g5

0xa44e,	// (0x00012bf6) midp_form_pane_ParamLimits

0x8960,	// (0x00011108) main_apps_wheel_pane_ParamLimits

0x70f5,	// (0x0000f89d) popup_preview_window_ParamLimits

0x70f5,	// (0x0000f89d) popup_preview_window

0x7270,	// (0x0000fa18) popup_touch_info_window_ParamLimits

0x7270,	// (0x0000fa18) popup_touch_info_window

0x728e,	// (0x0000fa36) popup_touch_menu_window_ParamLimits

0x728e,	// (0x0000fa36) popup_touch_menu_window

0x878f,	// (0x00010f37) bg_popup_sub_pane_cp6

0xd33e,	// (0x00015ae6) list_touch_menu_pane

0xd346,	// (0x00015aee) list_single_touch_menu_pane_ParamLimits

0xd346,	// (0x00015aee) list_single_touch_menu_pane

0xd35d,	// (0x00015b05) list_single_touch_menu_pane_t1

0x8960,	// (0x00011108) bg_popup_sub_pane_cp7_ParamLimits

0x8960,	// (0x00011108) bg_popup_sub_pane_cp7

0xd36b,	// (0x00015b13) heading_sub_pane

0xd373,	// (0x00015b1b) list_touch_info_pane_ParamLimits

0xd373,	// (0x00015b1b) list_touch_info_pane

0xd382,	// (0x00015b2a) list_single_touch_info_pane_ParamLimits

0xd382,	// (0x00015b2a) list_single_touch_info_pane

0xd393,	// (0x00015b3b) list_single_touch_info_pane_t1

0xd3a1,	// (0x00015b49) list_single_touch_info_pane_t2

0x0001,

0xface,	// (0x00018276) list_single_touch_info_pane_t

0xa446,	// (0x00012bee) bg_popup_heading_pane_cp

0xd3af,	// (0x00015b57) heading_sub_pane_t1

0xadaa,	// (0x00013552) bg_popup_preview_window_pane_cp_ParamLimits

0xadaa,	// (0x00013552) bg_popup_preview_window_pane_cp

0xd36b,	// (0x00015b13) heading_preview_pane

0xd373,	// (0x00015b1b) list_preview_pane_ParamLimits

0xd373,	// (0x00015b1b) list_preview_pane

0xd3bd,	// (0x00015b65) popup_preview_window_g1

0xd382,	// (0x00015b2a) list_single_preview_pane_ParamLimits

0xd382,	// (0x00015b2a) list_single_preview_pane

0xd3c5,	// (0x00015b6d) list_single_preview_pane_g1

0xd3cd,	// (0x00015b75) list_single_preview_pane_t1

0xd393,	// (0x00015b3b) list_single_preview_pane_t2

0x0001,

0xfad3,	// (0x0001827b) list_single_preview_pane_t

0xd3db,	// (0x00015b83) bg_popup_heading_pane_cp2_ParamLimits

0xd3db,	// (0x00015b83) bg_popup_heading_pane_cp2

0xd3f1,	// (0x00015b99) heading_preview_pane_g1

0xd3f9,	// (0x00015ba1) heading_preview_pane_t1_ParamLimits

0xd3f9,	// (0x00015ba1) heading_preview_pane_t1

0x8a64,	// (0x0001120c) soft_indicator_pane_t1_ParamLimits

0x90cd,	// (0x00011875) scroll_pane_ParamLimits

0x9c5e,	// (0x00012406) scroll_sc2_left_pane

0x9c67,	// (0x0001240f) scroll_sc2_right_pane

0x9c86,	// (0x0001242e) scroll_bg_pane_g1_ParamLimits

0x9c9b,	// (0x00012443) scroll_bg_pane_g2_ParamLimits

0x9cb3,	// (0x0001245b) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00017e57) scroll_bg_pane_g_ParamLimits

0x9c86,	// (0x0001242e) scroll_handle_pane_g1_ParamLimits

0x9cd5,	// (0x0001247d) scroll_handle_pane_g2_ParamLimits

0x9cb3,	// (0x0001245b) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00017e5e) scroll_handle_pane_g_ParamLimits

0x6e3d,	// (0x0000f5e5) popup_choice_list_window_ParamLimits

0x6e3d,	// (0x0000f5e5) popup_choice_list_window

0xabba,	// (0x00013362) choice_list_pane

0xac5e,	// (0x00013406) cell_toolbar_pane_t1

0xac86,	// (0x0001342e) toolbar_button_pane_ParamLimits

0xbd63,	// (0x0001450b) ai_gene_pane_1_t2_ParamLimits

0xbd63,	// (0x0001450b) ai_gene_pane_1_t2

0x0001,

0xf8de,	// (0x00018086) ai_gene_pane_1_t_ParamLimits

0xf8de,	// (0x00018086) ai_gene_pane_1_t

0xd416,	// (0x00015bbe) scroll_sc2_left_pane_g1

0xd416,	// (0x00015bbe) scroll_sc2_right_pane_g1

0xa795,	// (0x00012f3d) bg_popup_sub_pane_cp10

0xd420,	// (0x00015bc8) list_choice_list_pane

0xd437,	// (0x00015bdf) list_single_choice_list_pane_ParamLimits

0xd437,	// (0x00015bdf) list_single_choice_list_pane

0xd449,	// (0x00015bf1) list_single_choice_list_pane_g1

0x9955,	// (0x000120fd) list_single_choice_list_pane_t1_ParamLimits

0x9955,	// (0x000120fd) list_single_choice_list_pane_t1

0xd451,	// (0x00015bf9) choice_list_pane_g1

0xd459,	// (0x00015c01) choice_list_pane_t1

0x878f,	// (0x00010f37) input_focus_pane_cp11

0x9b39,	// (0x000122e1) title_pane_stacon_g2_ParamLimits

0x9b39,	// (0x000122e1) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00017e3d) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00017e3d) title_pane_stacon_g

0xa446,	// (0x00012bee) cursor_press_pane

0x6ed9,	// (0x0000f681) popup_fep_hwr_window_ParamLimits

0x6ed9,	// (0x0000f681) popup_fep_hwr_window

0x6f35,	// (0x0000f6dd) popup_fep_vkb_window_ParamLimits

0x6f35,	// (0x0000f6dd) popup_fep_vkb_window

0xd467,	// (0x00015c0f) cursor_press_pane_g1

0x0002,

0xfafc,	// (0x000182a4) fep_vkb_side_pane_g_ParamLimits

0x77ff,	// (0x0000ffa7) fep_hwr_candidate_pane_ParamLimits

0x77ff,	// (0x0000ffa7) fep_hwr_candidate_pane

0x7827,	// (0x0000ffcf) fep_hwr_side_pane_ParamLimits

0x7827,	// (0x0000ffcf) fep_hwr_side_pane

0x7847,	// (0x0000ffef) fep_hwr_top_pane_ParamLimits

0x7847,	// (0x0000ffef) fep_hwr_top_pane

0x785f,	// (0x00010007) fep_hwr_write_pane_ParamLimits

0x785f,	// (0x00010007) fep_hwr_write_pane

0xfafc,	// (0x000182a4) fep_vkb_side_pane_g

0xd46f,	// (0x00015c17) fep_hwr_top_pane_g1

0xd481,	// (0x00015c29) fep_hwr_top_pane_g2

0x7899,	// (0x00010041) fep_hwr_top_pane_g3

0x0002,

0xfad8,	// (0x00018280) fep_hwr_top_pane_g

0x78ae,	// (0x00010056) fep_hwr_top_text_pane

0x9e2a,	// (0x000125d2) fep_hwr_top_text_pane_g1

0xd4b7,	// (0x00015c5f) fep_hwr_top_text_pane_t1

0x799c,	// (0x00010144) fep_hwr_candidate_pane_g1

0xd6c7,	// (0x00015e6f) fep_vkb_keypad_pane_g3_ParamLimits

0xd6c7,	// (0x00015e6f) fep_vkb_keypad_pane_g3

0xd6e9,	// (0x00015e91) fep_vkb_keypad_pane_g4_ParamLimits

0xd6e9,	// (0x00015e91) fep_vkb_keypad_pane_g4

0xd758,	// (0x00015f00) fep_vkb_bottom_pane_g2_ParamLimits

0xd758,	// (0x00015f00) fep_vkb_bottom_pane_g2

0x0001,

0xfb03,	// (0x000182ab) fep_vkb_bottom_pane_g_ParamLimits

0xfb03,	// (0x000182ab) fep_vkb_bottom_pane_g

0xd416,	// (0x00015bbe) cell_vkb_side_pane_g2

0x0001,

0xfb0d,	// (0x000182b5) cell_vkb_side_pane_g

0xd7e3,	// (0x00015f8b) cell_vkb_side_pane_t1

0xd7f1,	// (0x00015f99) cell_vkb_side_pane_t1_copy1

0xd416,	// (0x00015bbe) bg_fep_vkb_candidate_pane_g2

0xd915,	// (0x000160bd) cell_vkb_candidate_pane_ParamLimits

0xd4c5,	// (0x00015c6d) aid_size_cell_vkb_ParamLimits

0xd4c5,	// (0x00015c6d) aid_size_cell_vkb

0xd915,	// (0x000160bd) cell_vkb_candidate_pane

0x79c3,	// (0x0001016b) bg_popup_fep_shadow_pane_g1

0xd53b,	// (0x00015ce3) fep_vkb_bottom_pane_ParamLimits

0xd53b,	// (0x00015ce3) fep_vkb_bottom_pane

0xd578,	// (0x00015d20) fep_vkb_candidate_pane_ParamLimits

0xd578,	// (0x00015d20) fep_vkb_candidate_pane

0xd594,	// (0x00015d3c) fep_vkb_keypad_pane_ParamLimits

0xd594,	// (0x00015d3c) fep_vkb_keypad_pane

0xd5c8,	// (0x00015d70) fep_vkb_side_pane_ParamLimits

0xd5c8,	// (0x00015d70) fep_vkb_side_pane

0xd5f4,	// (0x00015d9c) fep_vkb_top_pane_ParamLimits

0xd5f4,	// (0x00015d9c) fep_vkb_top_pane

0xd620,	// (0x00015dc8) fep_vkb_top_pane_g1_ParamLimits

0xd620,	// (0x00015dc8) fep_vkb_top_pane_g1

0xd62f,	// (0x00015dd7) fep_vkb_top_pane_g2_ParamLimits

0xd62f,	// (0x00015dd7) fep_vkb_top_pane_g2

0xd63e,	// (0x00015de6) fep_vkb_top_pane_g3_ParamLimits

0xd63e,	// (0x00015de6) fep_vkb_top_pane_g3

0x0003,

0xfaf3,	// (0x0001829b) fep_vkb_top_pane_g_ParamLimits

0xfaf3,	// (0x0001829b) fep_vkb_top_pane_g

0xd65c,	// (0x00015e04) fep_vkb_top_text_pane_ParamLimits

0xd65c,	// (0x00015e04) fep_vkb_top_text_pane

0xd66d,	// (0x00015e15) fep_vkb_side_pane_g1_ParamLimits

0xd66d,	// (0x00015e15) fep_vkb_side_pane_g1

0xd6b6,	// (0x00015e5e) grid_vkb_side_pane_ParamLimits

0xd6b6,	// (0x00015e5e) grid_vkb_side_pane

0x79cb,	// (0x00010173) bg_popup_fep_shadow_pane_g2

0x79d4,	// (0x0001017c) bg_popup_fep_shadow_pane_g3

0x79dc,	// (0x00010184) bg_popup_fep_shadow_pane_g4

0x79e5,	// (0x0001018d) bg_popup_fep_shadow_pane_g5

0x79ed,	// (0x00010195) bg_popup_fep_shadow_pane_g6

0x79f5,	// (0x0001019d) bg_popup_fep_shadow_pane_g7

0x9797,	// (0x00011f3f) bg_popup_fep_shadow_pane_g8

0xd707,	// (0x00015eaf) grid_vkb_keypad_number_pane_ParamLimits

0xd707,	// (0x00015eaf) grid_vkb_keypad_number_pane

0xd717,	// (0x00015ebf) grid_vkb_keypad_pane_ParamLimits

0xd717,	// (0x00015ebf) grid_vkb_keypad_pane

0xd73d,	// (0x00015ee5) fep_vkb_bottom_pane_g1_ParamLimits

0xd73d,	// (0x00015ee5) fep_vkb_bottom_pane_g1

0xd766,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd766,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane

0xd77b,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd77b,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane

0xd790,	// (0x00015f38) fep_vkb_top_text_pane_g1

0xd7ab,	// (0x00015f53) fep_vkb_top_text_pane_t1

0xd7c0,	// (0x00015f68) cell_vkb_side_pane_ParamLimits

0xd7c0,	// (0x00015f68) cell_vkb_side_pane

0xd416,	// (0x00015bbe) cell_vkb_side_pane_g1

0xd7ff,	// (0x00015fa7) cell_vkb_keypad_pane_ParamLimits

0xd7ff,	// (0x00015fa7) cell_vkb_keypad_pane

0xd86c,	// (0x00016014) cell_vkb_keypad_pane_g1

0x0008,

0xfb20,	// (0x000182c8) bg_popup_fep_shadow_pane_g

0x7a05,	// (0x000101ad) cell_hwr_side_pane_g1

0x7a05,	// (0x000101ad) cell_hwr_side_pane_g2

0xd876,	// (0x0001601e) cell_vkb_keypad_pane_t1

0xd884,	// (0x0001602c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd884,	// (0x0001602c) cell_vkb_keypad_bottom_left_pane

0xd8a1,	// (0x00016049) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8a1,	// (0x00016049) cell_vkb_keypad_bottom_right_pane

0xd416,	// (0x00015bbe) cell_vkb_keypad_bottom_left_pane_g1

0xd416,	// (0x00015bbe) cell_vkb_keypad_bottom_right_pane_g1

0xd8da,	// (0x00016082) cell_vkb_keypad_number_pane_ParamLimits

0xd8da,	// (0x00016082) cell_vkb_keypad_number_pane

0xd8f9,	// (0x000160a1) cell_vkb_keypad_number_pane_g1

0xd903,	// (0x000160ab) cell_vkb_keypad_number_pane_g2

0xd90c,	// (0x000160b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb12,	// (0x000182ba) cell_vkb_keypad_number_pane_g

0xd876,	// (0x0001601e) cell_vkb_keypad_number_pane_t1

0xd92e,	// (0x000160d6) fep_vkb_candidate_pane_g1

0x0001,

0xfb33,	// (0x000182db) cell_hwr_side_pane_g

0xd947,	// (0x000160ef) cell_hwr_side_pane_t1

0x7a0f,	// (0x000101b7) cell_hwr_side_pane_t1_copy1

0x7a1d,	// (0x000101c5) cell_hwr_candidate_pane_g1

0x7a4c,	// (0x000101f4) cell_hwr_candidate_pane_t1

0xd416,	// (0x00015bbe) cell_vkb_candidate_pane_g2

0xd98b,	// (0x00016133) cell_vkb_candidate_pane_t1

0x77ca,	// (0x0000ff72) bg_popup_fep_shadow_pane_ParamLimits

0x77ca,	// (0x0000ff72) bg_popup_fep_shadow_pane

0x7879,	// (0x00010021) bg_fep_hwr_top_pane_g4

0xd493,	// (0x00015c3b) bg_hwr_side_pane_g1_ParamLimits

0xd493,	// (0x00015c3b) bg_hwr_side_pane_g1

0x78ea,	// (0x00010092) cell_hwr_side_pane_ParamLimits

0x78ea,	// (0x00010092) cell_hwr_side_pane

0x7925,	// (0x000100cd) fep_hwr_write_pane_g1_ParamLimits

0x7925,	// (0x000100cd) fep_hwr_write_pane_g1

0x7932,	// (0x000100da) fep_hwr_write_pane_g2_ParamLimits

0x7932,	// (0x000100da) fep_hwr_write_pane_g2

0x793f,	// (0x000100e7) fep_hwr_write_pane_g3_ParamLimits

0x793f,	// (0x000100e7) fep_hwr_write_pane_g3

0x794d,	// (0x000100f5) fep_hwr_write_pane_g4_ParamLimits

0x794d,	// (0x000100f5) fep_hwr_write_pane_g4

0x0005,

0xfadf,	// (0x00018287) fep_hwr_write_pane_g_ParamLimits

0xfadf,	// (0x00018287) fep_hwr_write_pane_g

0x7879,	// (0x00010021) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7879,	// (0x00010021) bg_fep_hwr_candidate_pane_g2

0x7962,	// (0x0001010a) cell_hwr_candidate_pane_ParamLimits

0x7962,	// (0x0001010a) cell_hwr_candidate_pane

0x799c,	// (0x00010144) fep_hwr_candidate_pane_g1_ParamLimits

0xd4f3,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd4f3,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2

0xd64e,	// (0x00015df6) fep_vkb_top_pane_g4_ParamLimits

0xd64e,	// (0x00015df6) fep_vkb_top_pane_g4

0xd694,	// (0x00015e3c) fep_vkb_side_pane_g2_ParamLimits

0xd694,	// (0x00015e3c) fep_vkb_side_pane_g2

0x94a1,	// (0x00011c49) list_setting_pane_t4_ParamLimits

0x94a1,	// (0x00011c49) list_setting_pane_t4

0x9517,	// (0x00011cbf) list_setting_number_pane_t5_ParamLimits

0x9517,	// (0x00011cbf) list_setting_number_pane_t5

0x9e61,	// (0x00012609) list_double_heading_pane_cp2_ParamLimits

0x9e61,	// (0x00012609) list_double_heading_pane_cp2

0xa2bb,	// (0x00012a63) list_double_heading_pane_g1_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_double_heading_pane_g1_cp2

0xd999,	// (0x00016141) list_double_heading_pane_g2_cp2_ParamLimits

0xd999,	// (0x00016141) list_double_heading_pane_g2_cp2

0xd9ad,	// (0x00016155) list_double_heading_pane_t1_cp2_ParamLimits

0xd9ad,	// (0x00016155) list_double_heading_pane_t1_cp2

0xd9c3,	// (0x0001616b) list_double_heading_pane_t2_cp2_ParamLimits

0xd9c3,	// (0x0001616b) list_double_heading_pane_t2_cp2

0x8779,	// (0x00010f21) aid_value_unit2

0x6731,	// (0x0000eed9) popup_preview_fixed_window

0x8c08,	// (0x000113b0) bg_popup_preview_window_pane_cp02

0xd9d5,	// (0x0001617d) list_preview_fixed_pane

0xda1b,	// (0x000161c3) list_empty_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_empty_pane_fp

0xda1b,	// (0x000161c3) list_single_cale_day_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_cale_day_pane_fp

0xda1b,	// (0x000161c3) list_single_graphic_heading_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_graphic_heading_pane_fp

0xda1b,	// (0x000161c3) list_single_graphic_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_graphic_pane_fp

0xda1b,	// (0x000161c3) list_single_heading_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_heading_pane_fp

0xda1b,	// (0x000161c3) list_single_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_pane_fp

0xda2f,	// (0x000161d7) list_single_pane_fp_g1_ParamLimits

0xda2f,	// (0x000161d7) list_single_pane_fp_g1

0xda3b,	// (0x000161e3) list_single_pane_fp_g2_ParamLimits

0xda3b,	// (0x000161e3) list_single_pane_fp_g2

0xda47,	// (0x000161ef) list_single_pane_fp_g3_ParamLimits

0xda47,	// (0x000161ef) list_single_pane_fp_g3

0xda5b,	// (0x00016203) list_single_pane_fp_g4_ParamLimits

0xda5b,	// (0x00016203) list_single_pane_fp_g4

0x0003,

0xfb46,	// (0x000182ee) list_single_pane_fp_g_ParamLimits

0xfb46,	// (0x000182ee) list_single_pane_fp_g

0xda67,	// (0x0001620f) list_single_pane_fp_t1_ParamLimits

0xda67,	// (0x0001620f) list_single_pane_fp_t1

0xda7e,	// (0x00016226) list_single_graphic_pane_fp_g1_ParamLimits

0xda7e,	// (0x00016226) list_single_graphic_pane_fp_g1

0xda2f,	// (0x000161d7) list_single_graphic_pane_fp_g2_ParamLimits

0xda2f,	// (0x000161d7) list_single_graphic_pane_fp_g2

0xda3b,	// (0x000161e3) list_single_graphic_pane_fp_g3_ParamLimits

0xda3b,	// (0x000161e3) list_single_graphic_pane_fp_g3

0xda47,	// (0x000161ef) list_single_graphic_pane_fp_g4_ParamLimits

0xda47,	// (0x000161ef) list_single_graphic_pane_fp_g4

0xda5b,	// (0x00016203) list_single_graphic_pane_fp_g5_ParamLimits

0xda5b,	// (0x00016203) list_single_graphic_pane_fp_g5

0x0004,

0xfb4f,	// (0x000182f7) list_single_graphic_pane_fp_g_ParamLimits

0xfb4f,	// (0x000182f7) list_single_graphic_pane_fp_g

0xda8a,	// (0x00016232) list_single_graphic_pane_fp_t1_ParamLimits

0xda8a,	// (0x00016232) list_single_graphic_pane_fp_t1

0xda7e,	// (0x00016226) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xda7e,	// (0x00016226) list_single_graphic_heading_pane_fp_g1

0xda2f,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xda2f,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2

0xda3b,	// (0x000161e3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xda3b,	// (0x000161e3) list_single_graphic_heading_pane_fp_g3

0xda47,	// (0x000161ef) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xda47,	// (0x000161ef) list_single_graphic_heading_pane_fp_g4

0xda5b,	// (0x00016203) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xda5b,	// (0x00016203) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4f,	// (0x000182f7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4f,	// (0x000182f7) list_single_graphic_heading_pane_fp_g

0xdaa0,	// (0x00016248) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdaa0,	// (0x00016248) list_single_graphic_heading_pane_fp_t1

0xdab6,	// (0x0001625e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdab6,	// (0x0001625e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5a,	// (0x00018302) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5a,	// (0x00018302) list_single_graphic_heading_pane_fp_t

0xdac8,	// (0x00016270) list_single_cale_day_pane_fp_g1_ParamLimits

0xdac8,	// (0x00016270) list_single_cale_day_pane_fp_g1

0xdb00,	// (0x000162a8) list_single_cale_day_pane_fp_g2_ParamLimits

0xdb00,	// (0x000162a8) list_single_cale_day_pane_fp_g2

0xdb0c,	// (0x000162b4) list_single_cale_day_pane_fp_g3_ParamLimits

0xdb0c,	// (0x000162b4) list_single_cale_day_pane_fp_g3

0xdb34,	// (0x000162dc) list_single_cale_day_pane_fp_g4_ParamLimits

0xdb34,	// (0x000162dc) list_single_cale_day_pane_fp_g4

0xdb58,	// (0x00016300) list_single_cale_day_pane_fp_g5_ParamLimits

0xdb58,	// (0x00016300) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5f,	// (0x00018307) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5f,	// (0x00018307) list_single_cale_day_pane_fp_g

0xdb7c,	// (0x00016324) list_single_cale_day_pane_fp_t1_ParamLimits

0xdb7c,	// (0x00016324) list_single_cale_day_pane_fp_t1

0xdba2,	// (0x0001634a) list_single_cale_day_pane_fp_t2_ParamLimits

0xdba2,	// (0x0001634a) list_single_cale_day_pane_fp_t2

0xdbfd,	// (0x000163a5) list_single_cale_day_pane_fp_t3_ParamLimits

0xdbfd,	// (0x000163a5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6a,	// (0x00018312) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6a,	// (0x00018312) list_single_cale_day_pane_fp_t

0xda2f,	// (0x000161d7) list_empty_pane_fp_g1_ParamLimits

0xda2f,	// (0x000161d7) list_empty_pane_fp_g1

0xdc16,	// (0x000163be) list_empty_pane_fp_t1

0xdc24,	// (0x000163cc) list_empty_pane_fp_t2

0x0001,

0xfb71,	// (0x00018319) list_empty_pane_fp_t

0xda2f,	// (0x000161d7) list_single_heading_pane_fp_g1_ParamLimits

0xda2f,	// (0x000161d7) list_single_heading_pane_fp_g1

0xda3b,	// (0x000161e3) list_single_heading_pane_fp_g2_ParamLimits

0xda3b,	// (0x000161e3) list_single_heading_pane_fp_g2

0xda47,	// (0x000161ef) list_single_heading_pane_fp_g3_ParamLimits

0xda47,	// (0x000161ef) list_single_heading_pane_fp_g3

0x0002,

0xfb76,	// (0x0001831e) list_single_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x0001831e) list_single_heading_pane_fp_g

0xdc32,	// (0x000163da) list_single_heading_pane_fp_t1_ParamLimits

0xdc32,	// (0x000163da) list_single_heading_pane_fp_t1

0xdc44,	// (0x000163ec) list_single_heading_pane_fp_t2_ParamLimits

0xdc44,	// (0x000163ec) list_single_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x00018325) list_single_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x00018325) list_single_heading_pane_fp_t

0x99c3,	// (0x0001216b) aid_size_cell_fast

0x8b6f,	// (0x00011317) soft_indicator_pane_cp1_t1

0x9a00,	// (0x000121a8) cell_app_pane_cp2_ParamLimits

0x9a00,	// (0x000121a8) cell_app_pane_cp2

0x77ec,	// (0x0000ff94) fep_hwr_candidate_drop_down_list_pane

0x79b6,	// (0x0001015e) fep_hwr_candidate_pane_g3_ParamLimits

0x79b6,	// (0x0001015e) fep_hwr_candidate_pane_g3

0x5983,	// (0x0000e12b) fep_hwr_candidate_pane_g4_ParamLimits

0x5983,	// (0x0000e12b) fep_hwr_candidate_pane_g4

0x0002,

0xfaec,	// (0x00018294) fep_hwr_candidate_pane_g_ParamLimits

0xfaec,	// (0x00018294) fep_hwr_candidate_pane_g

0xd567,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd567,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane

0xd936,	// (0x000160de) fep_vkb_candidate_pane_g3

0xd93e,	// (0x000160e6) fep_vkb_candidate_pane_g4

0x0002,

0xfb19,	// (0x000182c1) fep_vkb_candidate_pane_g

0x7a1d,	// (0x000101c5) cell_hwr_candidate_pane_g1_ParamLimits

0x7a2b,	// (0x000101d3) cell_hwr_candidate_pane_g3_ParamLimits

0x7a2b,	// (0x000101d3) cell_hwr_candidate_pane_g3

0x064b,	// (0x00008df3) cell_hwr_candidate_pane_g4_ParamLimits

0x064b,	// (0x00008df3) cell_hwr_candidate_pane_g4

0x0002,

0xfb38,	// (0x000182e0) cell_hwr_candidate_pane_g_ParamLimits

0xfb38,	// (0x000182e0) cell_hwr_candidate_pane_g

0xd955,	// (0x000160fd) cell_vkb_candidate_pane_g3_ParamLimits

0xd955,	// (0x000160fd) cell_vkb_candidate_pane_g3

0xd970,	// (0x00016118) cell_vkb_candidate_pane_g4_ParamLimits

0xd970,	// (0x00016118) cell_vkb_candidate_pane_g4

0xdc5a,	// (0x00016402) cell_app_pane_cp2_g1_ParamLimits

0xdc5a,	// (0x00016402) cell_app_pane_cp2_g1

0xdc78,	// (0x00016420) cell_app_pane_cp2_g2_ParamLimits

0xdc78,	// (0x00016420) cell_app_pane_cp2_g2

0x0001,

0xfb82,	// (0x0001832a) cell_app_pane_cp2_g_ParamLimits

0xfb82,	// (0x0001832a) cell_app_pane_cp2_g

0xdc84,	// (0x0001642c) cell_app_pane_cp2_t1_ParamLimits

0xdc84,	// (0x0001642c) cell_app_pane_cp2_t1

0x965c,	// (0x00011e04) grid_highlight_pane_cp1_ParamLimits

0x965c,	// (0x00011e04) grid_highlight_pane_cp1

0x7a69,	// (0x00010211) cell_hwr_candidate_pane_cp1_ParamLimits

0x7a69,	// (0x00010211) cell_hwr_candidate_pane_cp1

0x7a1d,	// (0x000101c5) fep_hwr_candidate_drop_down_list_pane_g1

0x7a87,	// (0x0001022f) fep_hwr_candidate_drop_down_list_pane_g2

0x7a94,	// (0x0001023c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb87,	// (0x0001832f) fep_hwr_candidate_drop_down_list_pane_g

0x7aa1,	// (0x00010249) fep_hwr_candidate_drop_down_list_scroll_pane

0x7aaa,	// (0x00010252) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7aaa,	// (0x00010252) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7ab7,	// (0x0001025f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ab7,	// (0x0001025f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7ac4,	// (0x0001026c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ac4,	// (0x0001026c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ad1,	// (0x00010279) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ad1,	// (0x00010279) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7aec,	// (0x00010294) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7aec,	// (0x00010294) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7b07,	// (0x000102af) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b07,	// (0x000102af) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7b22,	// (0x000102ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b22,	// (0x000102ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7b3d,	// (0x000102e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b3d,	// (0x000102e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8e,	// (0x00018336) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8e,	// (0x00018336) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdc96,	// (0x0001643e) cell_vkb_candidate_pane_cp1_ParamLimits

0xdc96,	// (0x0001643e) cell_vkb_candidate_pane_cp1

0xd64e,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd64e,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1

0xdcb9,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdcb9,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2

0xdcc6,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdcc6,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9f,	// (0x00018347) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9f,	// (0x00018347) fep_vkb_candidate_drop_down_list_pane_g

0xdcd3,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdcd3,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane

0xdce0,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdce0,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdced,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdced,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdcf9,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdcf9,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdbbb,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdbbb,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdbdc,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdbdc,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdd05,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdd05,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdd26,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdd26,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdd47,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdd47,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0001834e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0001834e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x888a,	// (0x00011032) title_pane_g1_ParamLimits

0x8897,	// (0x0001103f) title_pane_g2_ParamLimits

0xf529,	// (0x00017cd1) title_pane_g_ParamLimits

0x9e1a,	// (0x000125c2) aid_call2_pane

0x9e22,	// (0x000125ca) aid_call_pane

0x9e2a,	// (0x000125d2) popup_clock_analogue_window_g1

0x9e2a,	// (0x000125d2) popup_clock_analogue_window_g2

0x6a0b,	// (0x0000f1b3) popup_clock_analogue_window_g3

0x6a14,	// (0x0000f1bc) popup_clock_analogue_window_g4

0x8799,	// (0x00010f41) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00017e6c) popup_clock_analogue_window_g

0x6a1c,	// (0x0000f1c4) popup_clock_analogue_window_t1

0x6a2a,	// (0x0000f1d2) clock_digital_number_pane_ParamLimits

0x6a2a,	// (0x0000f1d2) clock_digital_number_pane

0x6a36,	// (0x0000f1de) clock_digital_number_pane_cp02_ParamLimits

0x6a36,	// (0x0000f1de) clock_digital_number_pane_cp02

0x6a42,	// (0x0000f1ea) clock_digital_number_pane_cp03_ParamLimits

0x6a42,	// (0x0000f1ea) clock_digital_number_pane_cp03

0x6a4e,	// (0x0000f1f6) clock_digital_number_pane_cp04_ParamLimits

0x6a4e,	// (0x0000f1f6) clock_digital_number_pane_cp04

0x6a5a,	// (0x0000f202) clock_digital_separator_pane_ParamLimits

0x6a5a,	// (0x0000f202) clock_digital_separator_pane

0x6a66,	// (0x0000f20e) popup_clock_digital_window_t1_ParamLimits

0x6a66,	// (0x0000f20e) popup_clock_digital_window_t1

0x8799,	// (0x00010f41) clock_digital_number_pane_g1

0x8799,	// (0x00010f41) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00017e77) clock_digital_number_pane_g

0x8799,	// (0x00010f41) clock_digital_separator_pane_g1

0x8799,	// (0x00010f41) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00017e77) clock_digital_separator_pane_g

0xa7bf,	// (0x00012f67) aid_fill_nsta_ParamLimits

0xa8e7,	// (0x0001308f) indicator_nsta_pane_ParamLimits

0xaa5a,	// (0x00013202) popup_clock_analogue_window

0xaa5a,	// (0x00013202) popup_clock_digital_window

0xce72,	// (0x0001561a) grid_indicator_nsta_pane_ParamLimits

0xce9b,	// (0x00015643) clock_nsta_pane_t2

0x0001,

0xfa6c,	// (0x00018214) clock_nsta_pane_t

0x69cf,	// (0x0000f177) aid_size_max_handle

0x69d9,	// (0x0000f181) aid_size_min_handle

0xa446,	// (0x00012bee) editor_scroll_pane

0xdd62,	// (0x0001650a) ex_editor_pane

0x9933,	// (0x000120db) scroll_pane_cp13

0x90fa,	// (0x000118a2) scroll_pane_cp14

0x9e59,	// (0x00012601) scroll_pane_cp36

0x9e71,	// (0x00012619) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e71,	// (0x00012619) list_single_graphic_hl_pane_cp2

0xc2a0,	// (0x00014a48) list_single_graphic_hl_pane_ParamLimits

0xc2a0,	// (0x00014a48) list_single_graphic_hl_pane

0xdd6a,	// (0x00016512) aid_size_min_hl_cp1

0xdd73,	// (0x0001651b) list_highlight_pane_cp34_ParamLimits

0xdd73,	// (0x0001651b) list_highlight_pane_cp34

0xdd84,	// (0x0001652c) list_single_graphic_hl_pane_g1_ParamLimits

0xdd84,	// (0x0001652c) list_single_graphic_hl_pane_g1

0xdd91,	// (0x00016539) list_single_graphic_hl_pane_g2_ParamLimits

0xdd91,	// (0x00016539) list_single_graphic_hl_pane_g2

0xdd91,	// (0x00016539) list_single_graphic_hl_pane_g3_ParamLimits

0xdd91,	// (0x00016539) list_single_graphic_hl_pane_g3

0xa2bb,	// (0x00012a63) list_single_graphic_hl_pane_g4_ParamLimits

0xa2bb,	// (0x00012a63) list_single_graphic_hl_pane_g4

0xd999,	// (0x00016141) list_single_graphic_hl_pane_g5_ParamLimits

0xd999,	// (0x00016141) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x0001835f) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x0001835f) list_single_graphic_hl_pane_g

0xdd9d,	// (0x00016545) list_single_graphic_hl_pane_t1_ParamLimits

0xdd9d,	// (0x00016545) list_single_graphic_hl_pane_t1

0xddb3,	// (0x0001655b) aid_size_min_hl_cp2

0xddbc,	// (0x00016564) list_highlight_pane_cp34_cp2_ParamLimits

0xddbc,	// (0x00016564) list_highlight_pane_cp34_cp2

0xdd84,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdd84,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2

0xddc9,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xddc9,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2

0xddd5,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xddd5,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2

0xa2bb,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa2bb,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2

0xd999,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd999,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2

0x6cf1,	// (0x0000f499) control_pane_g4_ParamLimits

0x6cf1,	// (0x0000f499) control_pane_g4

0xa795,	// (0x00012f3d) bg_popup_sub_pane_cp10_ParamLimits

0xd420,	// (0x00015bc8) list_choice_list_pane_ParamLimits

0xd42f,	// (0x00015bd7) scroll_pane_cp23

0x8c08,	// (0x000113b0) bg_popup_preview_window_pane_cp02_ParamLimits

0xd9d5,	// (0x0001617d) list_preview_fixed_pane_ParamLimits

0xd9eb,	// (0x00016193) list_preview_fixed_pane_cp_ParamLimits

0xd9eb,	// (0x00016193) list_preview_fixed_pane_cp

0xd9f7,	// (0x0001619f) popup_preview_fixed_window_g1_ParamLimits

0xd9f7,	// (0x0001619f) popup_preview_fixed_window_g1

0xda03,	// (0x000161ab) popup_preview_fixed_window_g2_ParamLimits

0xda03,	// (0x000161ab) popup_preview_fixed_window_g2

0x0002,

0xfb3f,	// (0x000182e7) popup_preview_fixed_window_g_ParamLimits

0xfb3f,	// (0x000182e7) popup_preview_fixed_window_g

0x695f,	// (0x0000f107) aid_navi_side_left_pane_ParamLimits

0x696f,	// (0x0000f117) aid_navi_side_right_pane_ParamLimits

0x697e,	// (0x0000f126) navi_icon_pane_stacon_ParamLimits

0x698e,	// (0x0000f136) navi_navi_pane_stacon_ParamLimits

0x697e,	// (0x0000f126) navi_text_pane_stacon_ParamLimits

0x6612,	// (0x0000edba) main_text_info_pane

0xddf7,	// (0x0001659f) listscroll_text_info_pane

0xddff,	// (0x000165a7) list_text_info_pane_ParamLimits

0xddff,	// (0x000165a7) list_text_info_pane

0xde0e,	// (0x000165b6) scroll_pane_cp24_ParamLimits

0xde0e,	// (0x000165b6) scroll_pane_cp24

0xde2c,	// (0x000165d4) list_text_info_pane_t1_ParamLimits

0xde2c,	// (0x000165d4) list_text_info_pane_t1

0x6e57,	// (0x0000f5ff) popup_fast_swap2_window_ParamLimits

0x6e57,	// (0x0000f5ff) popup_fast_swap2_window

0xde49,	// (0x000165f1) aid_size_cell_fast2

0x878f,	// (0x00010f37) bg_popup_window_pane_cp17

0xb158,	// (0x00013900) heading_pane_cp2

0xb160,	// (0x00013908) listscroll_fast2_pane

0xde53,	// (0x000165fb) grid_fast2_pane

0xde5b,	// (0x00016603) listscroll_fast2_pane_g1

0xde63,	// (0x0001660b) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x0001836a) listscroll_fast2_pane_g

0x9933,	// (0x000120db) scroll_pane_cp26

0xde6b,	// (0x00016613) cell_fast2_pane_ParamLimits

0xde6b,	// (0x00016613) cell_fast2_pane

0xde81,	// (0x00016629) cell_fast2_pane_g1

0xde8a,	// (0x00016632) cell_fast2_pane_g2

0xde93,	// (0x0001663b) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x0001836f) cell_fast2_pane_g

0x8f53,	// (0x000116fb) grid_highlight_pane_cp9

0x6e23,	// (0x0000f5cb) main_eswt_pane_ParamLimits

0x6e23,	// (0x0000f5cb) main_eswt_pane

0xde23,	// (0x000165cb) list_single_text_info_pane

0xde9b,	// (0x00016643) eswt_ctrl_button_pane

0xde9b,	// (0x00016643) eswt_ctrl_canvas_pane

0xdea3,	// (0x0001664b) eswt_ctrl_combo_pane

0xde9b,	// (0x00016643) eswt_ctrl_default_pane

0xde9b,	// (0x00016643) eswt_ctrl_label_pane

0xdeab,	// (0x00016653) eswt_ctrl_wait_pane

0xdeb3,	// (0x0001665b) eswt_shell_pane

0x878f,	// (0x00010f37) listscroll_eswt_app_pane

0xdecf,	// (0x00016677) popup_eswt_tasktip_window_ParamLimits

0xdecf,	// (0x00016677) popup_eswt_tasktip_window

0xadaa,	// (0x00013552) bg_popup_window_pane_cp18

0xdee0,	// (0x00016688) eswt_control_pane_g1_ParamLimits

0xdee0,	// (0x00016688) eswt_control_pane_g1

0xdeed,	// (0x00016695) eswt_control_pane_g2_ParamLimits

0xdeed,	// (0x00016695) eswt_control_pane_g2

0xdefa,	// (0x000166a2) eswt_control_pane_g3_ParamLimits

0xdefa,	// (0x000166a2) eswt_control_pane_g3

0xdf07,	// (0x000166af) eswt_control_pane_g4_ParamLimits

0xdf07,	// (0x000166af) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x00018376) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x00018376) eswt_control_pane_g

0x965c,	// (0x00011e04) bg_button_pane_ParamLimits

0x965c,	// (0x00011e04) bg_button_pane

0x8f68,	// (0x00011710) common_borders_pane_copy2_ParamLimits

0x8f68,	// (0x00011710) common_borders_pane_copy2

0xdf14,	// (0x000166bc) control_button_pane_g1_ParamLimits

0xdf14,	// (0x000166bc) control_button_pane_g1

0xdf20,	// (0x000166c8) control_button_pane_g2_ParamLimits

0xdf20,	// (0x000166c8) control_button_pane_g2

0xdf2c,	// (0x000166d4) control_button_pane_g3_ParamLimits

0xdf2c,	// (0x000166d4) control_button_pane_g3

0x0002,

0xfbd7,	// (0x0001837f) control_button_pane_g_ParamLimits

0xfbd7,	// (0x0001837f) control_button_pane_g

0xdf40,	// (0x000166e8) control_button_pane_t1

0xdf4e,	// (0x000166f6) control_button_pane_t2

0x0001,

0xfbde,	// (0x00018386) control_button_pane_t

0xac92,	// (0x0001343a) bg_button_pane_g1

0xaca2,	// (0x0001344a) bg_button_pane_g2

0xac9a,	// (0x00013442) bg_button_pane_g3

0xacb2,	// (0x0001345a) bg_button_pane_g4

0xacaa,	// (0x00013452) bg_button_pane_g5

0xacba,	// (0x00013462) bg_button_pane_g6

0xacc2,	// (0x0001346a) bg_button_pane_g7

0xacd2,	// (0x0001347a) bg_button_pane_g8

0xacca,	// (0x00013472) bg_button_pane_g9

0x0008,

0xf832,	// (0x00017fda) bg_button_pane_g

0xd3db,	// (0x00015b83) common_borders_pane_ParamLimits

0xd3db,	// (0x00015b83) common_borders_pane

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy1_ParamLimits

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy1

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy1_ParamLimits

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy1

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy1_ParamLimits

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy1

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy1_ParamLimits

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy1

0xd416,	// (0x00015bbe) bg_eswt_ctrl_canvas_pane_g1

0xd3db,	// (0x00015b83) common_borders_pane_cp2_ParamLimits

0xd3db,	// (0x00015b83) common_borders_pane_cp2

0xd3db,	// (0x00015b83) common_borders_pane_cp3_ParamLimits

0xd3db,	// (0x00015b83) common_borders_pane_cp3

0xdf5c,	// (0x00016704) separator_horizontal_pane

0x9c67,	// (0x0001240f) separator_vertical_pane

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy2_ParamLimits

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy2

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy2_ParamLimits

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy2

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy2_ParamLimits

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy2

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy2_ParamLimits

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy2

0x878f,	// (0x00010f37) common_borders_pane_cp4

0xdf64,	// (0x0001670c) separator_horizontal_pane_g1

0xdf6d,	// (0x00016715) separator_horizontal_pane_g2

0xdf76,	// (0x0001671e) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x0001838b) separator_horizontal_pane_g

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy3_ParamLimits

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy3

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy3_ParamLimits

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy3

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy3_ParamLimits

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy3

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy3_ParamLimits

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy3

0x878f,	// (0x00010f37) common_borders_pane_cp5

0xdf7f,	// (0x00016727) separator_vertical_pane_g1

0xdf88,	// (0x00016730) separator_vertical_pane_g2

0xdf91,	// (0x00016739) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x00018392) separator_vertical_pane_g

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy4_ParamLimits

0xdee0,	// (0x00016688) eswt_control_pane_g1_copy4

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy4_ParamLimits

0xdeed,	// (0x00016695) eswt_control_pane_g2_copy4

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy4_ParamLimits

0xdefa,	// (0x000166a2) eswt_control_pane_g3_copy4

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy4_ParamLimits

0xdf07,	// (0x000166af) eswt_control_pane_g4_copy4

0xdf9a,	// (0x00016742) eswt_ctrl_combo_button_pane

0xdfa2,	// (0x0001674a) eswt_ctrl_input_pane

0xdfaa,	// (0x00016752) popup_choice_list_window_cp70

0xdfb2,	// (0x0001675a) eswt_ctrl_input_pane_t1

0x878f,	// (0x00010f37) input_focus_pane_cp70

0xd3db,	// (0x00015b83) bg_button_pane_cp70_ParamLimits

0xd3db,	// (0x00015b83) bg_button_pane_cp70

0xdfc0,	// (0x00016768) eswt_ctrl_combo_button_pane_g1

0xdfc8,	// (0x00016770) wait_bar_pane_cp70

0xadaa,	// (0x00013552) bg_popup_window_pane_cp70_ParamLimits

0xadaa,	// (0x00013552) bg_popup_window_pane_cp70

0xdfd0,	// (0x00016778) popup_eswt_tasktip_window_t1

0xdfe6,	// (0x0001678e) wait_bar_pane_cp71_ParamLimits

0xdfe6,	// (0x0001678e) wait_bar_pane_cp71

0xdff2,	// (0x0001679a) grid_eswt_app_pane

0x9c5e,	// (0x00012406) scroll_pane_cp70

0xdffb,	// (0x000167a3) cell_eswt_app_pane_ParamLimits

0xdffb,	// (0x000167a3) cell_eswt_app_pane

0xe023,	// (0x000167cb) cell_eswt_app_pane_g1_ParamLimits

0xe023,	// (0x000167cb) cell_eswt_app_pane_g1

0xe052,	// (0x000167fa) cell_eswt_app_pane_g2_ParamLimits

0xe052,	// (0x000167fa) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x00018399) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x00018399) cell_eswt_app_pane_g

0xe07b,	// (0x00016823) cell_eswt_app_pane_t1_ParamLimits

0xe07b,	// (0x00016823) cell_eswt_app_pane_t1

0xe0ad,	// (0x00016855) grid_highlight_pane_cp70_ParamLimits

0xe0ad,	// (0x00016855) grid_highlight_pane_cp70

0x910e,	// (0x000118b6) set_content_pane_g1

0xa6e1,	// (0x00012e89) status_small_volume_pane

0x7b58,	// (0x00010300) status_small_volume_pane_g1

0x7b60,	// (0x00010308) volume_small2_pane

0x7b69,	// (0x00010311) volume_small2_pane_g1

0x7b72,	// (0x0001031a) volume_small2_pane_g2

0x7b7b,	// (0x00010323) volume_small2_pane_g3

0x7b84,	// (0x0001032c) volume_small2_pane_g4

0x7b8d,	// (0x00010335) volume_small2_pane_g5

0x7b96,	// (0x0001033e) volume_small2_pane_g6

0x7b9f,	// (0x00010347) volume_small2_pane_g7

0x7ba8,	// (0x00010350) volume_small2_pane_g8

0x7bb1,	// (0x00010359) volume_small2_pane_g9

0x7bba,	// (0x00010362) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x0001839e) volume_small2_pane_g

0xd790,	// (0x00015f38) fep_vkb_top_text_pane_g1_ParamLimits

0xd7ab,	// (0x00015f53) fep_vkb_top_text_pane_t1_ParamLimits

0xda0f,	// (0x000161b7) popup_preview_fixed_window_g3_ParamLimits

0xda0f,	// (0x000161b7) popup_preview_fixed_window_g3

0x7219,	// (0x0000f9c1) popup_toolbar_trans_pane

0xc047,	// (0x000147ef) aid_height_set_list_ParamLimits

0xc053,	// (0x000147fb) aid_size_parent_ParamLimits

0xa795,	// (0x00012f3d) list_highlight_pane_cp2_ParamLimits

0x910e,	// (0x000118b6) set_content_pane_g1_ParamLimits

0xc2b5,	// (0x00014a5d) list_single_image_pane_ParamLimits

0xc2b5,	// (0x00014a5d) list_single_image_pane

0xe0b9,	// (0x00016861) aid_size_cell_image_ParamLimits

0xe0b9,	// (0x00016861) aid_size_cell_image

0xe0c6,	// (0x0001686e) grid_single_image_pane_ParamLimits

0xe0c6,	// (0x0001686e) grid_single_image_pane

0x910e,	// (0x000118b6) list_single_image_pane_g1_ParamLimits

0x910e,	// (0x000118b6) list_single_image_pane_g1

0x9682,	// (0x00011e2a) list_single_image_pane_g2_ParamLimits

0x9682,	// (0x00011e2a) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x000183b3) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x000183b3) list_single_image_pane_g

0xc1d6,	// (0x0001497e) list_single_image_pane_t1_ParamLimits

0xc1d6,	// (0x0001497e) list_single_image_pane_t1

0xe0d2,	// (0x0001687a) cell_image_list_pane_ParamLimits

0xe0d2,	// (0x0001687a) cell_image_list_pane

0xe0e5,	// (0x0001688d) cell_image_list_pane_g1

0xe0ee,	// (0x00016896) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x000183b8) cell_image_list_pane_g

0xe0f7,	// (0x0001689f) aid_size_cell_tb_trans_pane

0x965c,	// (0x00011e04) bg_tb_trans_pane

0xe109,	// (0x000168b1) grid_tb_trans_pane

0xac92,	// (0x0001343a) bg_tb_trans_pane_g1

0xaca2,	// (0x0001344a) bg_tb_trans_pane_g2

0xac9a,	// (0x00013442) bg_tb_trans_pane_g3

0xacb2,	// (0x0001345a) bg_tb_trans_pane_g4

0xacaa,	// (0x00013452) bg_tb_trans_pane_g5

0xacd2,	// (0x0001347a) bg_tb_trans_pane_g6

0xacca,	// (0x00013472) bg_tb_trans_pane_g7

0xacba,	// (0x00013462) bg_tb_trans_pane_g8

0xacc2,	// (0x0001346a) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x000183bd) bg_tb_trans_pane_g

0xe11d,	// (0x000168c5) cell_toolbar_trans_pane_ParamLimits

0xe11d,	// (0x000168c5) cell_toolbar_trans_pane

0xd416,	// (0x00015bbe) cell_toolbar_trans_pane_g1

0xd05f,	// (0x00015807) list_form2_midp_pane_t1

0xd06d,	// (0x00015815) list_form2_midp_pane_t2

0x0001,

0xfab2,	// (0x0001825a) list_form2_midp_pane_t

0xd07b,	// (0x00015823) scroll_pane_cp51_ParamLimits

0xd260,	// (0x00015a08) form2_midp_wait_pane_g1

0xd269,	// (0x00015a11) form2_midp_wait_pane_g2

0xd272,	// (0x00015a1a) form2_midp_wait_pane_g3

0x0002,

0xfac7,	// (0x0001826f) form2_midp_wait_pane_g

0x8960,	// (0x00011108) list_highlight_pane_cp21_ParamLimits

0xd2b0,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd2bf,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc25e,	// (0x00014a06) list_single_2graphic_im_pane_ParamLimits

0xc25e,	// (0x00014a06) list_single_2graphic_im_pane

0xe143,	// (0x000168eb) list_single_2graphic_im_pane_g1_ParamLimits

0xe143,	// (0x000168eb) list_single_2graphic_im_pane_g1

0xe154,	// (0x000168fc) list_single_2graphic_im_pane_g2_ParamLimits

0xe154,	// (0x000168fc) list_single_2graphic_im_pane_g2

0xe160,	// (0x00016908) list_single_2graphic_im_pane_g3_ParamLimits

0xe160,	// (0x00016908) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x000183d0) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x000183d0) list_single_2graphic_im_pane_g

0xe180,	// (0x00016928) list_single_2graphic_im_pane_t1_ParamLimits

0xe180,	// (0x00016928) list_single_2graphic_im_pane_t1

0xda1b,	// (0x000161c3) list_single_graphic_2heading_pane_fp_ParamLimits

0xda1b,	// (0x000161c3) list_single_graphic_2heading_pane_fp

0xda7e,	// (0x00016226) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xda7e,	// (0x00016226) list_single_graphic_2heading_pane_fp_g1

0xda2f,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xda2f,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2

0xda3b,	// (0x000161e3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xda3b,	// (0x000161e3) list_single_graphic_2heading_pane_fp_g3

0xda47,	// (0x000161ef) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xda47,	// (0x000161ef) list_single_graphic_2heading_pane_fp_g4

0xda5b,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xda5b,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4f,	// (0x000182f7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4f,	// (0x000182f7) list_single_graphic_2heading_pane_fp_g

0xe1b1,	// (0x00016959) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe1b1,	// (0x00016959) list_single_graphic_2heading_pane_fp_t1

0xdab6,	// (0x0001625e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdab6,	// (0x0001625e) list_single_graphic_2heading_pane_fp_t2

0xe1c7,	// (0x0001696f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe1c7,	// (0x0001696f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x000183d9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x000183d9) list_single_graphic_2heading_pane_fp_t

0xd49f,	// (0x00015c47) fep_hwr_write_pane_g5_ParamLimits

0xd49f,	// (0x00015c47) fep_hwr_write_pane_g5

0xd4ab,	// (0x00015c53) fep_hwr_write_pane_g6_ParamLimits

0xd4ab,	// (0x00015c53) fep_hwr_write_pane_g6

0xdeb3,	// (0x0001665b) eswt_shell_pane_ParamLimits

0xadaa,	// (0x00013552) bg_popup_window_pane_cp18_ParamLimits

0xbfb9,	// (0x00014761) heading_pane_cp70

0xdfd0,	// (0x00016778) popup_eswt_tasktip_window_t1_ParamLimits

0xa801,	// (0x00012fa9) aid_touch_tab_arrow_left

0xa80d,	// (0x00012fb5) aid_touch_tab_arrow_right

0x88a8,	// (0x00011050) title_pane_g3_ParamLimits

0x88a8,	// (0x00011050) title_pane_g3

0x955a,	// (0x00011d02) set_value_pane_g1

0x7219,	// (0x0000f9c1) popup_toolbar_trans_pane_ParamLimits

0xe0f7,	// (0x0001689f) aid_size_cell_tb_trans_pane_ParamLimits

0x965c,	// (0x00011e04) bg_tb_trans_pane_ParamLimits

0xe109,	// (0x000168b1) grid_tb_trans_pane_ParamLimits

0x8c08,	// (0x000113b0) cont_note_pane_ParamLimits

0x8c08,	// (0x000113b0) cont_note_pane

0x8f68,	// (0x00011710) cont_snote2_single_text_pane_ParamLimits

0x8f68,	// (0x00011710) cont_snote2_single_text_pane

0x8f68,	// (0x00011710) cont_snote2_single_graphic_pane_ParamLimits

0x8f68,	// (0x00011710) cont_snote2_single_graphic_pane

0xb376,	// (0x00013b1e) cont_note_wait_pane_ParamLimits

0xb376,	// (0x00013b1e) cont_note_wait_pane

0xb376,	// (0x00013b1e) cont_note_image_pane_ParamLimits

0xb376,	// (0x00013b1e) cont_note_image_pane

0xe1dd,	// (0x00016985) popup_note2_window_g1_ParamLimits

0xe1dd,	// (0x00016985) popup_note2_window_g1

0xe20e,	// (0x000169b6) popup_note2_window_t1_ParamLimits

0xe20e,	// (0x000169b6) popup_note2_window_t1

0xe253,	// (0x000169fb) popup_note2_window_t2_ParamLimits

0xe253,	// (0x000169fb) popup_note2_window_t2

0xe298,	// (0x00016a40) popup_note2_window_t3_ParamLimits

0xe298,	// (0x00016a40) popup_note2_window_t3

0xe2dd,	// (0x00016a85) popup_note2_window_t4_ParamLimits

0xe2dd,	// (0x00016a85) popup_note2_window_t4

0x8c8c,	// (0x00011434) popup_note2_window_t5_ParamLimits

0x8c8c,	// (0x00011434) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x000183e5) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x000183e5) popup_note2_window_t

0xe30c,	// (0x00016ab4) popup_note2_image_window_g1_ParamLimits

0xe30c,	// (0x00016ab4) popup_note2_image_window_g1

0xe318,	// (0x00016ac0) popup_note2_image_window_g2_ParamLimits

0xe318,	// (0x00016ac0) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x000183f0) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x000183f0) popup_note2_image_window_g

0xe32a,	// (0x00016ad2) popup_note2_image_window_t1_ParamLimits

0xe32a,	// (0x00016ad2) popup_note2_image_window_t1

0xe342,	// (0x00016aea) popup_note2_image_window_t2_ParamLimits

0xe342,	// (0x00016aea) popup_note2_image_window_t2

0xe35a,	// (0x00016b02) popup_note2_image_window_t3_ParamLimits

0xe35a,	// (0x00016b02) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x000183f5) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x000183f5) popup_note2_image_window_t

0xb384,	// (0x00013b2c) popup_note2_wait_window_g1_ParamLimits

0xb384,	// (0x00013b2c) popup_note2_wait_window_g1

0xb390,	// (0x00013b38) popup_note2_wait_window_g2_ParamLimits

0xb390,	// (0x00013b38) popup_note2_wait_window_g2

0xb39c,	// (0x00013b44) popup_note2_wait_window_g3_ParamLimits

0xb39c,	// (0x00013b44) popup_note2_wait_window_g3

0x0002,

0xf814,	// (0x00017fbc) popup_note2_wait_window_g_ParamLimits

0xf814,	// (0x00017fbc) popup_note2_wait_window_g

0xe376,	// (0x00016b1e) popup_note2_wait_window_t1_ParamLimits

0xe376,	// (0x00016b1e) popup_note2_wait_window_t1

0xe394,	// (0x00016b3c) popup_note2_wait_window_t2_ParamLimits

0xe394,	// (0x00016b3c) popup_note2_wait_window_t2

0xe3b2,	// (0x00016b5a) popup_note2_wait_window_t3_ParamLimits

0xe3b2,	// (0x00016b5a) popup_note2_wait_window_t3

0xe3c4,	// (0x00016b6c) popup_note2_wait_window_t4_ParamLimits

0xe3c4,	// (0x00016b6c) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x000183fc) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x000183fc) popup_note2_wait_window_t

0xe3d6,	// (0x00016b7e) wait_bar2_pane_ParamLimits

0xe3d6,	// (0x00016b7e) wait_bar2_pane

0xe3ee,	// (0x00016b96) popup_snote2_single_text_window_g1_ParamLimits

0xe3ee,	// (0x00016b96) popup_snote2_single_text_window_g1

0xe416,	// (0x00016bbe) popup_snote2_single_text_window_t1_ParamLimits

0xe416,	// (0x00016bbe) popup_snote2_single_text_window_t1

0xe462,	// (0x00016c0a) popup_snote2_single_text_window_t2_ParamLimits

0xe462,	// (0x00016c0a) popup_snote2_single_text_window_t2

0xe4ae,	// (0x00016c56) popup_snote2_single_text_window_t3_ParamLimits

0xe4ae,	// (0x00016c56) popup_snote2_single_text_window_t3

0xe4ef,	// (0x00016c97) popup_snote2_single_text_window_t4_ParamLimits

0xe4ef,	// (0x00016c97) popup_snote2_single_text_window_t4

0xe525,	// (0x00016ccd) popup_snote2_single_text_window_t5_ParamLimits

0xe525,	// (0x00016ccd) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x00018405) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x00018405) popup_snote2_single_text_window_t

0xe550,	// (0x00016cf8) popup_snote2_single_graphic_window_g1_ParamLimits

0xe550,	// (0x00016cf8) popup_snote2_single_graphic_window_g1

0xe578,	// (0x00016d20) popup_snote2_single_graphic_window_g2_ParamLimits

0xe578,	// (0x00016d20) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x00018410) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x00018410) popup_snote2_single_graphic_window_g

0xe5a0,	// (0x00016d48) popup_snote2_single_graphic_window_t1_ParamLimits

0xe5a0,	// (0x00016d48) popup_snote2_single_graphic_window_t1

0xe5ec,	// (0x00016d94) popup_snote2_single_graphic_window_t2_ParamLimits

0xe5ec,	// (0x00016d94) popup_snote2_single_graphic_window_t2

0xe4ae,	// (0x00016c56) popup_snote2_single_graphic_window_t3_ParamLimits

0xe4ae,	// (0x00016c56) popup_snote2_single_graphic_window_t3

0xe4ef,	// (0x00016c97) popup_snote2_single_graphic_window_t4_ParamLimits

0xe4ef,	// (0x00016c97) popup_snote2_single_graphic_window_t4

0xe525,	// (0x00016ccd) popup_snote2_single_graphic_window_t5_ParamLimits

0xe525,	// (0x00016ccd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x00018415) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x00018415) popup_snote2_single_graphic_window_t

0xcf51,	// (0x000156f9) clock_nsta_pane_cp2_t1

0xcf51,	// (0x000156f9) clock_nsta_pane_cp2_t2

0x0001,

0xfa88,	// (0x00018230) clock_nsta_pane_cp2_t

0x9676,	// (0x00011e1e) form_field_data_wide_pane_g1_ParamLimits

0x910e,	// (0x000118b6) form_field_data_wide_pane_g2_ParamLimits

0x910e,	// (0x000118b6) form_field_data_wide_pane_g2

0x9682,	// (0x00011e2a) form_field_data_wide_pane_g3_ParamLimits

0x9682,	// (0x00011e2a) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00017def) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00017def) form_field_data_wide_pane_g

0xce26,	// (0x000155ce) grid_touch_3_pane_ParamLimits

0xce26,	// (0x000155ce) grid_touch_3_pane

0xe638,	// (0x00016de0) cell_touch_3_pane_ParamLimits

0xe638,	// (0x00016de0) cell_touch_3_pane

0xd416,	// (0x00015bbe) cell_touch_3_pane_g1

0xd416,	// (0x00015bbe) cell_touch_3_pane_g2

0x0001,

0xfb0d,	// (0x000182b5) cell_touch_3_pane_g

0x8ce4,	// (0x0001148c) cont_query_data_pane

0x8cec,	// (0x00011494) cont_query_data_pane_cp1

0xe665,	// (0x00016e0d) button_value_adjust_pane_cp7

0xe66d,	// (0x00016e15) query_popup_pane_cp3

0x9f02,	// (0x000126aa) bg_popup_sub_pane_cp22_ParamLimits

0x6a85,	// (0x0000f22d) navi_navi_volume_pane_cp2

0x6a9d,	// (0x0000f245) popup_side_volume_key_window_g2

0x6aa9,	// (0x0000f251) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00017e85) popup_side_volume_key_window_g

0x6ac3,	// (0x0000f26b) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00017e8c) popup_side_volume_key_window_t

0xa235,	// (0x000129dd) popup_side_volume_key_window_ParamLimits

0x92cf,	// (0x00011a77) list_double_graphic_pane_g4_ParamLimits

0x92cf,	// (0x00011a77) list_double_graphic_pane_g4

0xc289,	// (0x00014a31) list_single_2heading_msg_pane_ParamLimits

0xc289,	// (0x00014a31) list_single_2heading_msg_pane

0xe69a,	// (0x00016e42) list_single_2heading_msg_pane_g1_ParamLimits

0xe69a,	// (0x00016e42) list_single_2heading_msg_pane_g1

0xe6a6,	// (0x00016e4e) list_single_2heading_msg_pane_g2_ParamLimits

0xe6a6,	// (0x00016e4e) list_single_2heading_msg_pane_g2

0xe6b2,	// (0x00016e5a) list_single_2heading_msg_pane_g3_ParamLimits

0xe6b2,	// (0x00016e5a) list_single_2heading_msg_pane_g3

0xe6be,	// (0x00016e66) list_single_2heading_msg_pane_g4_ParamLimits

0xe6be,	// (0x00016e66) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x00018420) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x00018420) list_single_2heading_msg_pane_g

0xe6d6,	// (0x00016e7e) list_single_2heading_msg_pane_t1_ParamLimits

0xe6d6,	// (0x00016e7e) list_single_2heading_msg_pane_t1

0xe6fe,	// (0x00016ea6) list_single_2heading_msg_pane_t2_ParamLimits

0xe6fe,	// (0x00016ea6) list_single_2heading_msg_pane_t2

0xe72d,	// (0x00016ed5) list_single_2heading_msg_pane_t3_ParamLimits

0xe72d,	// (0x00016ed5) list_single_2heading_msg_pane_t3

0xe766,	// (0x00016f0e) list_single_2heading_msg_pane_t4_ParamLimits

0xe766,	// (0x00016f0e) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x00018429) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x00018429) list_single_2heading_msg_pane_t

0x88b4,	// (0x0001105c) title_pane_g4_ParamLimits

0x88b4,	// (0x0001105c) title_pane_g4

0x68d5,	// (0x0000f07d) title_pane_stacon_g3_ParamLimits

0x68d5,	// (0x0000f07d) title_pane_stacon_g3

0xe174,	// (0x0001691c) list_single_2graphic_im_pane_g4_ParamLimits

0xe174,	// (0x0001691c) list_single_2graphic_im_pane_g4

0xbd80,	// (0x00014528) popup_side_volume_key_window_cp

0xc551,	// (0x00014cf9) main_idle_act2_pane_t1

0x734e,	// (0x0000faf6) toolbar_button_pane_g10

0x90c5,	// (0x0001186d) popup_toolbar_window_cp1

0xcf42,	// (0x000156ea) clock_nsta_pane_cp_t1

0xcf42,	// (0x000156ea) clock_nsta_pane_cp_t2

0x0001,

0xfa83,	// (0x0001822b) clock_nsta_pane_cp_t

0x6a85,	// (0x0000f22d) navi_navi_volume_pane_cp2_ParamLimits

0x6a91,	// (0x0000f239) popup_side_volume_key_window_g1_ParamLimits

0x6a9d,	// (0x0000f245) popup_side_volume_key_window_g2_ParamLimits

0x6aa9,	// (0x0000f251) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00017e85) popup_side_volume_key_window_g_ParamLimits

0x77d8,	// (0x0000ff80) fep_hwr_aid_pane

0x7879,	// (0x00010021) bg_fep_hwr_top_pane_g4_ParamLimits

0xd46f,	// (0x00015c17) fep_hwr_top_pane_g1_ParamLimits

0xd481,	// (0x00015c29) fep_hwr_top_pane_g2_ParamLimits

0x7899,	// (0x00010041) fep_hwr_top_pane_g3_ParamLimits

0xfad8,	// (0x00018280) fep_hwr_top_pane_g_ParamLimits

0x78ae,	// (0x00010056) fep_hwr_top_text_pane_ParamLimits

0xbb4b,	// (0x000142f3) aid_touch_tab_arrow_arrow_2

0xbb54,	// (0x000142fc) aid_touch_tab_arrow_left_2

0x77ec,	// (0x0000ff94) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x781f,	// (0x0000ffc7) fep_hwr_prediction_pane

0xd5c0,	// (0x00015d68) fep_vkb_prediction_pane

0xd6a2,	// (0x00015e4a) fep_vkb_side_pane_g3_ParamLimits

0xd6a2,	// (0x00015e4a) fep_vkb_side_pane_g3

0x7a1d,	// (0x000101c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7a87,	// (0x0001022f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7a94,	// (0x0001023c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb87,	// (0x0001832f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7bc3,	// (0x0001036b) fep_hwr_prediction_pane_g1

0x7bcd,	// (0x00010375) fep_hwr_prediction_pane_g2

0x7bd5,	// (0x0001037d) fep_hwr_prediction_pane_g3

0x7bdd,	// (0x00010385) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x00018432) fep_hwr_prediction_pane_g

0xe78b,	// (0x00016f33) fep_vkb_prediction_pane_g1

0xe795,	// (0x00016f3d) fep_vkb_prediction_pane_g2

0xe79d,	// (0x00016f45) fep_vkb_prediction_pane_g3

0xe7a5,	// (0x00016f4d) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x0001843b) fep_vkb_prediction_pane_g

0x7610,	// (0x0000fdb8) slider_set_pane_g3

0x7624,	// (0x0000fdcc) slider_set_pane_g4

0x763c,	// (0x0000fde4) slider_set_pane_g5

0x7610,	// (0x0000fdb8) slider_set_pane_g6

0x7652,	// (0x0000fdfa) slider_set_pane_g7

0xc19a,	// (0x00014942) slider_form_pane_g3

0xc1a3,	// (0x0001494b) slider_form_pane_g4

0xc1ab,	// (0x00014953) slider_form_pane_g5

0xc19a,	// (0x00014942) slider_form_pane_g6

0xc1b3,	// (0x0001495b) slider_form_pane_g7

0xc839,	// (0x00014fe1) slider_set_pane_vc_g3

0xc842,	// (0x00014fea) slider_set_pane_vc_g4

0xc84b,	// (0x00014ff3) slider_set_pane_vc_g5

0xc839,	// (0x00014fe1) slider_set_pane_vc_g6

0xc854,	// (0x00014ffc) slider_set_pane_vc_g7

0xc839,	// (0x00014fe1) slider_form_pane_vc_g1

0xc842,	// (0x00014fea) slider_form_pane_vc_g2

0xc84b,	// (0x00014ff3) slider_form_pane_vc_g3

0xc839,	// (0x00014fe1) slider_form_pane_vc_g4

0xcc26,	// (0x000153ce) slider_form_pane_vc_g5

0x0004,

0xfa55,	// (0x000181fd) slider_form_pane_vc_g

0x6612,	// (0x0000edba) main_idle_act3_pane

0xe7ad,	// (0x00016f55) ai3_links_pane

0xe7b6,	// (0x00016f5e) popup_ai3_data_window_ParamLimits

0xe7b6,	// (0x00016f5e) popup_ai3_data_window

0x878f,	// (0x00010f37) grid_ai3_links_pane

0xe7ce,	// (0x00016f76) cell_ai3_links_pane_ParamLimits

0xe7ce,	// (0x00016f76) cell_ai3_links_pane

0xe7e2,	// (0x00016f8a) bg_popup_sub_pane_cp11

0xe7ef,	// (0x00016f97) cell_ai3_links_pane_g1

0x878f,	// (0x00010f37) bg_popup_sub_pane_cp12

0xe814,	// (0x00016fbc) heading_ai3_data_pane

0xe81c,	// (0x00016fc4) list_ai3_gene_pane

0xe828,	// (0x00016fd0) popup_ai3_data_window_g1

0xe830,	// (0x00016fd8) heading_ai3_data_pane_g1

0xe838,	// (0x00016fe0) heading_ai3_data_pane_t1

0xe846,	// (0x00016fee) list_double_ai3_gene_pane_ParamLimits

0xe846,	// (0x00016fee) list_double_ai3_gene_pane

0xe853,	// (0x00016ffb) list_single_ai3_gene_pane_ParamLimits

0xe853,	// (0x00016ffb) list_single_ai3_gene_pane

0xd3db,	// (0x00015b83) list_highlight_pane_cp7_ParamLimits

0xd3db,	// (0x00015b83) list_highlight_pane_cp7

0xe860,	// (0x00017008) list_single_a13_gene_pane_t1_ParamLimits

0xe860,	// (0x00017008) list_single_a13_gene_pane_t1

0xe877,	// (0x0001701f) list_single_ai3_gene_pane_g1

0xe880,	// (0x00017028) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x00018444) list_single_ai3_gene_pane_g

0xe888,	// (0x00017030) list_double_ai3_gene_pane_g1_ParamLimits

0xe888,	// (0x00017030) list_double_ai3_gene_pane_g1

0xe894,	// (0x0001703c) list_double_ai3_gene_pane_t1_ParamLimits

0xe894,	// (0x0001703c) list_double_ai3_gene_pane_t1

0xe8b0,	// (0x00017058) list_double_ai3_gene_pane_t2_ParamLimits

0xe8b0,	// (0x00017058) list_double_ai3_gene_pane_t2

0xe8c5,	// (0x0001706d) list_double_ai3_gene_pane_t3_ParamLimits

0xe8c5,	// (0x0001706d) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x00018449) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x00018449) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe67e,	// (0x00016e26) aid_size_min_col_2

0xe686,	// (0x00016e2e) aid_size_min_msg_ParamLimits

0xe686,	// (0x00016e2e) aid_size_min_msg

0xd79c,	// (0x00015f44) fep_vkb_top_text_pane_g2_ParamLimits

0xd79c,	// (0x00015f44) fep_vkb_top_text_pane_g2

0x0001,

0xfb08,	// (0x000182b0) fep_vkb_top_text_pane_g_ParamLimits

0xfb08,	// (0x000182b0) fep_vkb_top_text_pane_g

0x6612,	// (0x0000edba) main_hc_apps_shell_pane

0xe8e2,	// (0x0001708a) grid_hc_apps_pane_ParamLimits

0xe8e2,	// (0x0001708a) grid_hc_apps_pane

0xe8f4,	// (0x0001709c) list_hc_apps_pane

0xe8fc,	// (0x000170a4) scroll_pane_cp37_ParamLimits

0xe8fc,	// (0x000170a4) scroll_pane_cp37

0xe908,	// (0x000170b0) cell_hc_apps_pane_ParamLimits

0xe908,	// (0x000170b0) cell_hc_apps_pane

0xe996,	// (0x0001713e) cell_hc_apps_pane_g1_ParamLimits

0xe996,	// (0x0001713e) cell_hc_apps_pane_g1

0xe9c2,	// (0x0001716a) cell_hc_apps_pane_g2_ParamLimits

0xe9c2,	// (0x0001716a) cell_hc_apps_pane_g2

0xe9de,	// (0x00017186) cell_hc_apps_pane_g3_ParamLimits

0xe9de,	// (0x00017186) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x00018450) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x00018450) cell_hc_apps_pane_g

0xea00,	// (0x000171a8) cell_hc_apps_pane_t1_ParamLimits

0xea00,	// (0x000171a8) cell_hc_apps_pane_t1

0x8c08,	// (0x000113b0) grid_highlight_pane_cp10_ParamLimits

0x8c08,	// (0x000113b0) grid_highlight_pane_cp10

0xea3e,	// (0x000171e6) list_single_hc_apps_pane_ParamLimits

0xea3e,	// (0x000171e6) list_single_hc_apps_pane

0xea6e,	// (0x00017216) list_single_hc_apps_pane_g1

0xea87,	// (0x0001722f) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x00018457) list_single_hc_apps_pane_g

0xeaa0,	// (0x00017248) list_single_hc_apps_pane_g2_copy1

0xeabc,	// (0x00017264) list_single_hc_apps_pane_t1

0x8960,	// (0x00011108) bg_set_opt_pane_cp_ParamLimits

0x6823,	// (0x0000efcb) setting_slider_pane_t1_ParamLimits

0x6839,	// (0x0000efe1) setting_slider_pane_t2_ParamLimits

0x6852,	// (0x0000effa) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00017ce1) setting_slider_pane_t_ParamLimits

0x6869,	// (0x0000f011) slider_set_pane_ParamLimits

0x6d05,	// (0x0000f4ad) control_pane_g5_ParamLimits

0x6d05,	// (0x0000f4ad) control_pane_g5

0xc012,	// (0x000147ba) slider_set_pane_g1_ParamLimits

0x7604,	// (0x0000fdac) slider_set_pane_g2_ParamLimits

0x7610,	// (0x0000fdb8) slider_set_pane_g3_ParamLimits

0x7624,	// (0x0000fdcc) slider_set_pane_g4_ParamLimits

0x763c,	// (0x0000fde4) slider_set_pane_g5_ParamLimits

0x7610,	// (0x0000fdb8) slider_set_pane_g6_ParamLimits

0x7652,	// (0x0000fdfa) slider_set_pane_g7_ParamLimits

0xf930,	// (0x000180d8) slider_set_pane_g_ParamLimits

0x8960,	// (0x00011108) navi_icon_text_pane_ParamLimits

0xa7cf,	// (0x00012f77) aid_fill_nsta_2_ParamLimits

0xa801,	// (0x00012fa9) aid_touch_tab_arrow_left_ParamLimits

0xa80d,	// (0x00012fb5) aid_touch_tab_arrow_right_ParamLimits

0xa877,	// (0x0001301f) clock_nsta_pane_ParamLimits

0xbb2d,	// (0x000142d5) navi_icon_pane_g1_ParamLimits

0xbb39,	// (0x000142e1) navi_text_pane_t1_ParamLimits

0xd039,	// (0x000157e1) navi_icon_text_pane_g1_ParamLimits

0xd045,	// (0x000157ed) navi_icon_text_pane_t1_ParamLimits

0xea6e,	// (0x00017216) list_single_hc_apps_pane_g1_ParamLimits

0xea87,	// (0x0001722f) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x00018457) list_single_hc_apps_pane_g_ParamLimits

0xeaa0,	// (0x00017248) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeabc,	// (0x00017264) list_single_hc_apps_pane_t1_ParamLimits

0x6755,	// (0x0000eefd) popup_toolbar2_fixed_window_ParamLimits

0x6755,	// (0x0000eefd) popup_toolbar2_fixed_window

0x7211,	// (0x0000f9b9) popup_toolbar2_float_window

0x878f,	// (0x00010f37) bg_popup_sub_pane_cp27

0xeaea,	// (0x00017292) grid_toolbar2_float_pane

0x878f,	// (0x00010f37) bg_popup_sub_pane_cp26

0xeaea,	// (0x00017292) grid_toolbar2_fixed_pane

0xeaf2,	// (0x0001729a) cell_toolbar2_fixed_pane_ParamLimits

0xeaf2,	// (0x0001729a) cell_toolbar2_fixed_pane

0xeb03,	// (0x000172ab) cell_toolbar2_fixed_pane_g1

0xeb0c,	// (0x000172b4) toolbar2_fixed_button_pane

0xac92,	// (0x0001343a) toolbar2_fixed_button_pane_g1

0xaca2,	// (0x0001344a) toolbar2_fixed_button_pane_g2

0xac9a,	// (0x00013442) toolbar2_fixed_button_pane_g3

0xacb2,	// (0x0001345a) toolbar2_fixed_button_pane_g4

0xacaa,	// (0x00013452) toolbar2_fixed_button_pane_g5

0xacba,	// (0x00013462) toolbar2_fixed_button_pane_g6

0xacc2,	// (0x0001346a) toolbar2_fixed_button_pane_g7

0xacd2,	// (0x0001347a) toolbar2_fixed_button_pane_g8

0xacca,	// (0x00013472) toolbar2_fixed_button_pane_g9

0x0008,

0xf832,	// (0x00017fda) toolbar2_fixed_button_pane_g

0xeb14,	// (0x000172bc) cell_toolbar2_float_pane_ParamLimits

0xeb14,	// (0x000172bc) cell_toolbar2_float_pane

0xeb25,	// (0x000172cd) cell_toolbar2_float_pane_g1

0xeb0c,	// (0x000172b4) toolbar2_fixed_button_pane_cp

0xd52f,	// (0x00015cd7) fep_vkb_accented_list_pane_ParamLimits

0xd52f,	// (0x00015cd7) fep_vkb_accented_list_pane

0x79fd,	// (0x000101a5) bg_popup_fep_shadow_pane_g9

0xa446,	// (0x00012bee) bg_popup_fep_shadow_pane_cp3

0x991a,	// (0x000120c2) list_accented_list_pane

0xeb2e,	// (0x000172d6) list_single_accented_list_pane_ParamLimits

0xeb2e,	// (0x000172d6) list_single_accented_list_pane

0xa446,	// (0x00012bee) list_highlight_pane_cp10

0xeb3f,	// (0x000172e7) list_single_accented_list_pane_t1

0x7177,	// (0x0000f91f) popup_slider_window_ParamLimits

0x7177,	// (0x0000f91f) popup_slider_window

0xe675,	// (0x00016e1d) aid_indentation_list_msg

0xebdf,	// (0x00017387) bg_popup_window_pane_cp19

0xec43,	// (0x000173eb) popup_slider_window_g1

0xec5f,	// (0x00017407) popup_slider_window_g2

0xec7b,	// (0x00017423) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x0001845c) popup_slider_window_g

0xecd7,	// (0x0001747f) popup_slider_window_t1

0xed49,	// (0x000174f1) small_volume_slider_vertical_pane

0xd416,	// (0x00015bbe) small_volume_slider_vertical_pane_g1

0xd416,	// (0x00015bbe) small_volume_slider_vertical_pane_g2

0xed65,	// (0x0001750d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x0001846e) small_volume_slider_vertical_pane_g

0x65c9,	// (0x0000ed71) area_side_right_pane_ParamLimits

0x65c9,	// (0x0000ed71) area_side_right_pane

0x7be5,	// (0x0001038d) aid_size_side_button_ParamLimits

0x7be5,	// (0x0001038d) aid_size_side_button

0x7bf9,	// (0x000103a1) grid_sctrl_middle_pane_ParamLimits

0x7bf9,	// (0x000103a1) grid_sctrl_middle_pane

0x7c15,	// (0x000103bd) sctrl_sk_bottom_pane

0x7c26,	// (0x000103ce) sctrl_sk_top_pane

0x7c38,	// (0x000103e0) aid_touch_sctrl_top

0x7c45,	// (0x000103ed) bg_sctrl_sk_pane_ParamLimits

0x7c45,	// (0x000103ed) bg_sctrl_sk_pane

0x7c53,	// (0x000103fb) sctrl_sk_top_pane_g1

0x7c60,	// (0x00010408) sctrl_sk_top_pane_t1

0x7c38,	// (0x000103e0) aid_touch_sctrl_bottom

0x7c45,	// (0x000103ed) bg_sctrl_sk_pane_cp_ParamLimits

0x7c45,	// (0x000103ed) bg_sctrl_sk_pane_cp

0x7c7b,	// (0x00010423) sctrl_sk_bottom_pane_g1

0x7c60,	// (0x00010408) sctrl_sk_bottom_pane_t1

0x7c84,	// (0x0001042c) cell_sctrl_middle_pane_ParamLimits

0x7c84,	// (0x0001042c) cell_sctrl_middle_pane

0x7c9f,	// (0x00010447) aid_touch_sctrl_middle_ParamLimits

0x7c9f,	// (0x00010447) aid_touch_sctrl_middle

0x7cb0,	// (0x00010458) bg_sctrl_middle_pane_ParamLimits

0x7cb0,	// (0x00010458) bg_sctrl_middle_pane

0x7a1d,	// (0x000101c5) cell_sctrl_middle_pane_g1_ParamLimits

0x7a1d,	// (0x000101c5) cell_sctrl_middle_pane_g1

0x7cbe,	// (0x00010466) cell_sctrl_middle_pane_g2_ParamLimits

0x7cbe,	// (0x00010466) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x0001847a) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x0001847a) cell_sctrl_middle_pane_g

0xac92,	// (0x0001343a) bg_sctrl_middle_pane_g1

0xac9a,	// (0x00013442) bg_sctrl_middle_pane_g2

0xaca2,	// (0x0001344a) bg_sctrl_middle_pane_g3

0xacaa,	// (0x00013452) bg_sctrl_middle_pane_g4

0xacb2,	// (0x0001345a) bg_sctrl_middle_pane_g5

0xacba,	// (0x00013462) bg_sctrl_middle_pane_g6

0xacc2,	// (0x0001346a) bg_sctrl_middle_pane_g7

0xacca,	// (0x00013472) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x0001847f) bg_sctrl_middle_pane_g

0xacd2,	// (0x0001347a) bg_sctrl_middle_pane_g8_copy1

0xac92,	// (0x0001343a) bg_sctrl_sk_pane_g1

0xaca2,	// (0x0001344a) bg_sctrl_sk_pane_g2

0xac9a,	// (0x00013442) bg_sctrl_sk_pane_g3

0x0008,

0xf832,	// (0x00017fda) bg_sctrl_sk_pane_g

0x908a,	// (0x00011832) aid_size_touch_scroll_bar

0xacb2,	// (0x0001345a) bg_sctrl_sk_pane_g4

0xacaa,	// (0x00013452) bg_sctrl_sk_pane_g5

0xacba,	// (0x00013462) bg_sctrl_sk_pane_g6

0xacc2,	// (0x0001346a) bg_sctrl_sk_pane_g7

0xacd2,	// (0x0001347a) bg_sctrl_sk_pane_g8

0xacca,	// (0x00013472) bg_sctrl_sk_pane_g9

0x6ead,	// (0x0000f655) popup_fep_china_hwr2_fs_candidate_window

0x6eb5,	// (0x0000f65d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6eb5,	// (0x0000f65d) popup_fep_china_hwr2_fs_control_window

0x7a1d,	// (0x000101c5) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x00018475) sctrl_sk_top_pane_g

0xed6e,	// (0x00017516) aid_fep_china_hwr2_fs_cell_ParamLimits

0xed6e,	// (0x00017516) aid_fep_china_hwr2_fs_cell

0xed7f,	// (0x00017527) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xed7f,	// (0x00017527) bg_popup_fep_shadow_pane_cp4

0xed96,	// (0x0001753e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xed96,	// (0x0001753e) bg_popup_fep_shadow_pane_cp5

0xeda8,	// (0x00017550) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xeda8,	// (0x00017550) popup_fep_china_hwr2_fs_control_bar_grid

0xedb8,	// (0x00017560) popup_fep_china_hwr2_fs_control_funtion_grid

0xedc0,	// (0x00017568) aid_fep_china_hwr2_fs_candi_cell

0x878f,	// (0x00010f37) bg_popup_fep_shadow_pane_cp6

0xedca,	// (0x00017572) popup_fep_china_hwr2_fs_candidate_grid

0xedd2,	// (0x0001757a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xedd2,	// (0x0001757a) cell_fep_china_hwr2_fs_funtion_grid

0xd416,	// (0x00015bbe) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xedea,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xedea,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1

0xedf8,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xedf8,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x00018490) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x00018490) cell_fep_china_hwr2_fs_funtion_grid_g

0xee0e,	// (0x000175b6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xee0e,	// (0x000175b6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xee23,	// (0x000175cb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xee23,	// (0x000175cb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x00018495) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x00018495) cell_fep_china_hwr2_fs_funtion_grid_t

0xee3f,	// (0x000175e7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xee47,	// (0x000175ef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xee4f,	// (0x000175f7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x0001849a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xee57,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xee57,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid

0xee70,	// (0x00017618) popup_fep_china_hwr2_fs_candidate_grid_g20

0xee78,	// (0x00017620) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd416,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd416,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0d,	// (0x000182b5) cell_fep_china_hwr2_fs_candidate_grid_g

0xee80,	// (0x00017628) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa88a,	// (0x00013032) clock_nsta_pane_cp_24_ParamLimits

0xa88a,	// (0x00013032) clock_nsta_pane_cp_24

0xa8fd,	// (0x000130a5) indicator_nsta_pane_cp_24_ParamLimits

0xa8fd,	// (0x000130a5) indicator_nsta_pane_cp_24

0xb9aa,	// (0x00014152) heading_pane_g1

0x0001,

0xf897,	// (0x0001803f) heading_pane_g

0xc3f3,	// (0x00014b9b) grid_sct_catagory_button_pane

0xc423,	// (0x00014bcb) scroll_pane_cp5_ParamLimits

0xd087,	// (0x0001582f) button_value_adjust_pane_cp5_ParamLimits

0xd087,	// (0x0001582f) button_value_adjust_pane_cp5

0xd17d,	// (0x00015925) form2_midp_time_pane_ParamLimits

0xee8e,	// (0x00017636) cell_sct_catagory_button_pane_ParamLimits

0xee8e,	// (0x00017636) cell_sct_catagory_button_pane

0xd3db,	// (0x00015b83) bg_button_pane_cp01_ParamLimits

0xd3db,	// (0x00015b83) bg_button_pane_cp01

0xd416,	// (0x00015bbe) cell_sct_catagory_button_pane_g1

0x71ae,	// (0x0000f956) popup_tb_extension_window

0xeea0,	// (0x00017648) aid_size_cell_ext_ParamLimits

0xeea0,	// (0x00017648) aid_size_cell_ext

0x8c08,	// (0x000113b0) bg_tb_trans_pane_cp1_ParamLimits

0x8c08,	// (0x000113b0) bg_tb_trans_pane_cp1

0xeec0,	// (0x00017668) grid_tb_ext_pane_ParamLimits

0xeec0,	// (0x00017668) grid_tb_ext_pane

0xeee6,	// (0x0001768e) cell_tb_ext_pane_ParamLimits

0xeee6,	// (0x0001768e) cell_tb_ext_pane

0xeefb,	// (0x000176a3) cell_tb_ext_pane_g1_ParamLimits

0xeefb,	// (0x000176a3) cell_tb_ext_pane_g1

0xef18,	// (0x000176c0) cell_tb_ext_pane_t1

0x8c08,	// (0x000113b0) list_highlight_pane_cp11_ParamLimits

0x8c08,	// (0x000113b0) list_highlight_pane_cp11

0x6774,	// (0x0000ef1c) popup_uni_indicator_window_ParamLimits

0x6774,	// (0x0000ef1c) popup_uni_indicator_window

0x965c,	// (0x00011e04) bg_popup_sub_pane_cp14

0xef33,	// (0x000176db) list_uniindi_pane

0xef3f,	// (0x000176e7) uniindi_top_pane

0x8c08,	// (0x000113b0) bg_uniindi_top_pane

0xef5e,	// (0x00017706) uniindi_top_pane_g1

0xef74,	// (0x0001771c) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x000184a1) uniindi_top_pane_g

0xef9e,	// (0x00017746) uniindi_top_pane_t1

0xefc8,	// (0x00017770) list_single_uniindi_pane_ParamLimits

0xefc8,	// (0x00017770) list_single_uniindi_pane

0xd416,	// (0x00015bbe) bg_uniindi_top_pane_g1

0xefda,	// (0x00017782) list_single_uniindi_pane_g1

0xefed,	// (0x00017795) list_single_uniindi_pane_t1

0x6612,	// (0x0000edba) control_bg_pane

0xf012,	// (0x000177ba) bg_sctrl_sk_pane_cp1

0xf01b,	// (0x000177c3) bg_sctrl_sk_pane_cp2

0xf024,	// (0x000177cc) control_bg_pane_g1

0xf02d,	// (0x000177d5) control_bg_pane_g2

0x0001,

0xfd02,	// (0x000184aa) control_bg_pane_g

0xceda,	// (0x00015682) cell_indicator_nsta_pane_g1_ParamLimits

0xcee8,	// (0x00015690) cell_indicator_nsta_pane_g2_ParamLimits

0xfa71,	// (0x00018219) cell_indicator_nsta_pane_g_ParamLimits

0xd1e5,	// (0x0001598d) form2_midp_time_pane_t1_ParamLimits

0x6e23,	// (0x0000f5cb) main_idle_act4_pane_ParamLimits

0x6e23,	// (0x0000f5cb) main_idle_act4_pane

0x71ae,	// (0x0000f956) popup_tb_extension_window_ParamLimits

0xeeda,	// (0x00017682) tb_ext_find_pane_ParamLimits

0xeeda,	// (0x00017682) tb_ext_find_pane

0xf036,	// (0x000177de) ai_gene_pane_1_cp1

0xa581,	// (0x00012d29) ai_gene_pane_2_cp1

0xf03e,	// (0x000177e6) list_single_idle_plugin_calendar_pane

0xf047,	// (0x000177ef) list_single_idle_plugin_notification_pane

0xf050,	// (0x000177f8) list_single_idle_plugin_player_pane

0xf059,	// (0x00017801) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf059,	// (0x00017801) list_single_idle_plugin_shortcut_pane

0xf07b,	// (0x00017823) main_idle_act4_pane_t1

0xf08d,	// (0x00017835) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x000184af) main_idle_act4_pane_t

0xf09f,	// (0x00017847) middle_sk_idle_act4_pane_ParamLimits

0xf09f,	// (0x00017847) middle_sk_idle_act4_pane

0xf0b5,	// (0x0001785d) popup_clock_digital_analogue_window_cp2

0xf0cf,	// (0x00017877) shortcut_wheel_idle_act4_pane_ParamLimits

0xf0cf,	// (0x00017877) shortcut_wheel_idle_act4_pane

0xd416,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g1

0xd416,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g2

0xd416,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g3

0xd416,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g4

0xd416,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g5

0xf0e3,	// (0x0001788b) shortcut_wheel_idle_act4_pane_g6

0xf0eb,	// (0x00017893) shortcut_wheel_idle_act4_pane_g7

0xf0f3,	// (0x0001789b) shortcut_wheel_idle_act4_pane_g8

0xf0fb,	// (0x000178a3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x000184b4) shortcut_wheel_idle_act4_pane_g

0xd64e,	// (0x00015df6) middle_sk_idle_act4_pane_g1_ParamLimits

0xd64e,	// (0x00015df6) middle_sk_idle_act4_pane_g1

0xf15f,	// (0x00017907) middle_sk_idle_act4_pane_g2_ParamLimits

0xf15f,	// (0x00017907) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x000184d7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x000184d7) middle_sk_idle_act4_pane_g

0xf16b,	// (0x00017913) middle_sk_idle_act4_pane_t1_ParamLimits

0xf16b,	// (0x00017913) middle_sk_idle_act4_pane_t1

0xf188,	// (0x00017930) grid_ai_shortcut_pane_ParamLimits

0xf188,	// (0x00017930) grid_ai_shortcut_pane

0xf1a1,	// (0x00017949) list_highlight_pane_cp16_ParamLimits

0xf1a1,	// (0x00017949) list_highlight_pane_cp16

0xf1ae,	// (0x00017956) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf1ae,	// (0x00017956) list_single_idle_plugin_shortcut_pane_g1

0xf1ba,	// (0x00017962) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf1ba,	// (0x00017962) list_single_idle_plugin_shortcut_pane_g2

0xf1d2,	// (0x0001797a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf1d2,	// (0x0001797a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x000184dc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x000184dc) list_single_idle_plugin_shortcut_pane_g

0xf1e5,	// (0x0001798d) cell_ai_shortcut_pane_ParamLimits

0xf1e5,	// (0x0001798d) cell_ai_shortcut_pane

0xf206,	// (0x000179ae) cell_ai_shortcut_pane_g1_ParamLimits

0xf206,	// (0x000179ae) cell_ai_shortcut_pane_g1

0xf036,	// (0x000177de) ai_gene_pane_1_cp2

0xf228,	// (0x000179d0) ai_gene_pane_2_cp2

0xf230,	// (0x000179d8) list_highlight_pane_cp15

0xf239,	// (0x000179e1) list_single_idle_plugin_calendar_pane_g1

0xf230,	// (0x000179d8) list_highlight_pane_cp17

0xf241,	// (0x000179e9) list_single_idle_plugin_calendar_pane_g1_copy1

0xf249,	// (0x000179f1) list_single_idle_plugin_player_pane_g1

0xc5f1,	// (0x00014d99) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x000184e3) list_single_idle_plugin_player_pane_g

0xf251,	// (0x000179f9) list_single_idle_plugin_player_pane_t1

0xf25f,	// (0x00017a07) list_single_idle_plugin_player_pane_t2

0xf26d,	// (0x00017a15) list_single_idle_plugin_player_pane_t3

0xf27b,	// (0x00017a23) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x000184e8) list_single_idle_plugin_player_pane_t

0xf289,	// (0x00017a31) wait_bar_pane_cp15

0xf291,	// (0x00017a39) grid_ai_notification_pane

0xc5f1,	// (0x00014d99) list_single_idle_plugin_notification_pane_g1

0xf29a,	// (0x00017a42) cell_ai_notification_pane_ParamLimits

0xf29a,	// (0x00017a42) cell_ai_notification_pane

0xf2a7,	// (0x00017a4f) cell_ai_notification_pane_g1

0xf2af,	// (0x00017a57) cell_ai_notification_pane_t1

0xf2bd,	// (0x00017a65) tb_ext_find_button_pane

0xf2c5,	// (0x00017a6d) tb_ext_find_pane_g1

0xf2cd,	// (0x00017a75) tb_ext_find_pane_t1

0x9e2a,	// (0x000125d2) tb_ext_find_button_pane_g1

0xf2db,	// (0x00017a83) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x000184f1) tb_ext_find_button_pane_g

0xf07b,	// (0x00017823) main_idle_act4_pane_t1_ParamLimits

0xf08d,	// (0x00017835) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x000184af) main_idle_act4_pane_t_ParamLimits

0xf0b5,	// (0x0001785d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf0c3,	// (0x0001786b) sat_plugin_idle_act4_pane_ParamLimits

0xf0c3,	// (0x0001786b) sat_plugin_idle_act4_pane

0xf2e4,	// (0x00017a8c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf2e4,	// (0x00017a8c) sat_plugin_idle_act4_pane_t1

0xf2f7,	// (0x00017a9f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf2f7,	// (0x00017a9f) sat_plugin_idle_act4_pane_t2

0xf30a,	// (0x00017ab2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf30a,	// (0x00017ab2) sat_plugin_idle_act4_pane_t3

0xf31d,	// (0x00017ac5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf31d,	// (0x00017ac5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x000184f6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x000184f6) sat_plugin_idle_act4_pane_t

0x66d5,	// (0x0000ee7d) popup_battery_window_ParamLimits

0x66d5,	// (0x0000ee7d) popup_battery_window

0x8c08,	// (0x000113b0) bg_popup_sub_pane_cp25_ParamLimits

0x8c08,	// (0x000113b0) bg_popup_sub_pane_cp25

0xf330,	// (0x00017ad8) popup_battery_window_g1_ParamLimits

0xf330,	// (0x00017ad8) popup_battery_window_g1

0xf33c,	// (0x00017ae4) popup_battery_window_t1_ParamLimits

0xf33c,	// (0x00017ae4) popup_battery_window_t1

0xf34e,	// (0x00017af6) popup_battery_window_t2_ParamLimits

0xf34e,	// (0x00017af6) popup_battery_window_t2

0x0001,

0xfd57,	// (0x000184ff) popup_battery_window_t_ParamLimits

0xfd57,	// (0x000184ff) popup_battery_window_t

0xa45a,	// (0x00012c02) midp_canvas_pane_ParamLimits

0xa4c9,	// (0x00012c71) midp_keypad_pane_ParamLimits

0xa4c9,	// (0x00012c71) midp_keypad_pane

0xa795,	// (0x00012f3d) main_midp_pane_ParamLimits

0xcf60,	// (0x00015708) signal_pane_g2_cp_ParamLimits

0xf36b,	// (0x00017b13) aid_size_cell_midp_keypad_ParamLimits

0xf36b,	// (0x00017b13) aid_size_cell_midp_keypad

0xf385,	// (0x00017b2d) midp_keyp_game_grid_pane_ParamLimits

0xf385,	// (0x00017b2d) midp_keyp_game_grid_pane

0xf39f,	// (0x00017b47) midp_keyp_rocker_pane_ParamLimits

0xf39f,	// (0x00017b47) midp_keyp_rocker_pane

0xf3cc,	// (0x00017b74) midp_keyp_sk_left_pane_ParamLimits

0xf3cc,	// (0x00017b74) midp_keyp_sk_left_pane

0xf424,	// (0x00017bcc) midp_keyp_sk_right_pane_ParamLimits

0xf424,	// (0x00017bcc) midp_keyp_sk_right_pane

0x878f,	// (0x00010f37) bg_button_pane_cp03

0xf476,	// (0x00017c1e) midp_keyp_sk_left_pane_g1

0x878f,	// (0x00010f37) bg_button_pane_cp04

0xf476,	// (0x00017c1e) midp_keyp_sk_right_pane_g1

0xd416,	// (0x00015bbe) midp_keyp_rocker_pane_g1

0xf47f,	// (0x00017c27) keyp_game_cell_pane_ParamLimits

0xf47f,	// (0x00017c27) keyp_game_cell_pane

0x878f,	// (0x00010f37) bg_button_pane_cp02

0xf490,	// (0x00017c38) keyp_game_cell_pane_g1

0x670b,	// (0x0000eeb3) popup_fep_vkb2_window_ParamLimits

0x670b,	// (0x0000eeb3) popup_fep_vkb2_window

0x7ce2,	// (0x0001048a) aid_size_cell_vkb2_ParamLimits

0x7ce2,	// (0x0001048a) aid_size_cell_vkb2

0x7d36,	// (0x000104de) popup_fep_vkb2_window_g1_ParamLimits

0x7d36,	// (0x000104de) popup_fep_vkb2_window_g1

0x7d7e,	// (0x00010526) vkb2_area_bottom_pane_ParamLimits

0x7d7e,	// (0x00010526) vkb2_area_bottom_pane

0x7db6,	// (0x0001055e) vkb2_area_keypad_pane_ParamLimits

0x7db6,	// (0x0001055e) vkb2_area_keypad_pane

0x7dee,	// (0x00010596) vkb2_area_top_pane_ParamLimits

0x7dee,	// (0x00010596) vkb2_area_top_pane

0x7e5e,	// (0x00010606) vkb2_top_entry_pane_ParamLimits

0x7e5e,	// (0x00010606) vkb2_top_entry_pane

0x7e88,	// (0x00010630) vkb2_top_grid_left_pane_ParamLimits

0x7e88,	// (0x00010630) vkb2_top_grid_left_pane

0x7ea6,	// (0x0001064e) vkb2_top_grid_right_pane_ParamLimits

0x7ea6,	// (0x0001064e) vkb2_top_grid_right_pane

0x7ec4,	// (0x0001066c) vkb2_cell_keypad_pane_ParamLimits

0x7ec4,	// (0x0001066c) vkb2_cell_keypad_pane

0x7f75,	// (0x0001071d) vkb2_area_bottom_grid_pane_ParamLimits

0x7f75,	// (0x0001071d) vkb2_area_bottom_grid_pane

0x7f99,	// (0x00010741) vkb2_area_bottom_pane_g1_ParamLimits

0x7f99,	// (0x00010741) vkb2_area_bottom_pane_g1

0x7fbd,	// (0x00010765) vkb2_area_bottom_pane_g2_ParamLimits

0x7fbd,	// (0x00010765) vkb2_area_bottom_pane_g2

0x7feb,	// (0x00010793) vkb2_area_bottom_pane_g3_ParamLimits

0x7feb,	// (0x00010793) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x00018504) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x00018504) vkb2_area_bottom_pane_g

0x803c,	// (0x000107e4) vkb2_top_cell_left_pane_ParamLimits

0x803c,	// (0x000107e4) vkb2_top_cell_left_pane

0xf4a1,	// (0x00017c49) vkb2_top_entry_pane_g1_ParamLimits

0xf4a1,	// (0x00017c49) vkb2_top_entry_pane_g1

0xf4af,	// (0x00017c57) vkb2_top_entry_pane_t1_ParamLimits

0xf4af,	// (0x00017c57) vkb2_top_entry_pane_t1

0xf4e1,	// (0x00017c89) vkb2_top_entry_pane_t2_ParamLimits

0xf4e1,	// (0x00017c89) vkb2_top_entry_pane_t2

0xf513,	// (0x00017cbb) vkb2_top_entry_pane_t3_ParamLimits

0xf513,	// (0x00017cbb) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x0001850b) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x0001850b) vkb2_top_entry_pane_t

0x8089,	// (0x00010831) vkb2_top_grid_right_pane_g1_ParamLimits

0x8089,	// (0x00010831) vkb2_top_grid_right_pane_g1

0x809f,	// (0x00010847) vkb2_top_grid_right_pane_g2_ParamLimits

0x809f,	// (0x00010847) vkb2_top_grid_right_pane_g2

0x80b7,	// (0x0001085f) vkb2_top_grid_right_pane_g3_ParamLimits

0x80b7,	// (0x0001085f) vkb2_top_grid_right_pane_g3

0x80cf,	// (0x00010877) vkb2_top_grid_right_pane_g4_ParamLimits

0x80cf,	// (0x00010877) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x00018512) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x00018512) vkb2_top_grid_right_pane_g

0x80e5,	// (0x0001088d) vkb2_top_cell_left_pane_g1

0x80fc,	// (0x000108a4) vkb2_cell_keypad_pane_g1_ParamLimits

0x80fc,	// (0x000108a4) vkb2_cell_keypad_pane_g1

0x009c,	// (0x00008844) vkb2_cell_keypad_pane_t1_ParamLimits

0x009c,	// (0x00008844) vkb2_cell_keypad_pane_t1

0x810a,	// (0x000108b2) vkb2_cell_bottom_grid_pane_ParamLimits

0x810a,	// (0x000108b2) vkb2_cell_bottom_grid_pane

0x8143,	// (0x000108eb) vkb2_cell_bottom_grid_pane_g1

0xf103,	// (0x000178ab) aid_call2_pane_cp02

0xf10b,	// (0x000178b3) aid_call_pane_cp02

0xf113,	// (0x000178bb) clock_digital_number_pane_cp10

0xf11b,	// (0x000178c3) clock_digital_number_pane_cp11

0xf123,	// (0x000178cb) clock_digital_number_pane_cp12

0xf12b,	// (0x000178d3) clock_digital_number_pane_cp13

0xf133,	// (0x000178db) clock_digital_separator_pane_cp10

0x9e2a,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g1

0x9e2a,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g2

0xf13b,	// (0x000178e3) popup_clock_digital_analogue_window_cp2_g3

0x9e2a,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g4

0xf13b,	// (0x000178e3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x000184c7) popup_clock_digital_analogue_window_cp2_g

0xf143,	// (0x000178eb) popup_clock_digital_analogue_window_cp2_t1

0xf151,	// (0x000178f9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x000184d2) popup_clock_digital_analogue_window_cp2_t

0xd416,	// (0x00015bbe) clock_digital_number_pane_cp10_g1

0xd416,	// (0x00015bbe) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0d,	// (0x000182b5) clock_digital_number_pane_cp10_g

0xd416,	// (0x00015bbe) clock_digital_separator_pane_cp10_g1

0xd416,	// (0x00015bbe) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0d,	// (0x000182b5) clock_digital_separator_pane_cp10_g

0xef80,	// (0x00017728) uniindi_top_pane_g3

0xef91,	// (0x00017739) uniindi_top_pane_g4

0x7f2f,	// (0x000106d7) vkb2_row_keypad_pane_ParamLimits

0x7f2f,	// (0x000106d7) vkb2_row_keypad_pane

0x815f,	// (0x00010907) vkb2_cell_t_keypad_pane_ParamLimits

0x815f,	// (0x00010907) vkb2_cell_t_keypad_pane

0x816c,	// (0x00010914) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x816c,	// (0x00010914) vkb2_cell_t_keypad_pane_cp08

0x817c,	// (0x00010924) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x817c,	// (0x00010924) vkb2_cell_t_keypad_pane_cp09

0x818d,	// (0x00010935) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x818d,	// (0x00010935) vkb2_cell_t_keypad_pane_cp01

0x819d,	// (0x00010945) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x819d,	// (0x00010945) vkb2_cell_t_keypad_pane_cp02

0x81ad,	// (0x00010955) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x81ad,	// (0x00010955) vkb2_cell_t_keypad_pane_cp03

0x81bd,	// (0x00010965) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x81bd,	// (0x00010965) vkb2_cell_t_keypad_pane_cp04

0x81cd,	// (0x00010975) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x81cd,	// (0x00010975) vkb2_cell_t_keypad_pane_cp05

0x81dd,	// (0x00010985) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x81dd,	// (0x00010985) vkb2_cell_t_keypad_pane_cp06

0x81ed,	// (0x00010995) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x81ed,	// (0x00010995) vkb2_cell_t_keypad_pane_cp07

0x81fd,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x81fd,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp10

0x7a1d,	// (0x000101c5) vkb2_cell_t_keypad_pane_g1

0x01bb,	// (0x00008963) vkb2_cell_t_keypad_pane_t1

0x6612,	// (0x0000edba) popup_grid_graphic2_window

0x01cd,	// (0x00008975) aid_size_cell_graphic2_ParamLimits

0x01cd,	// (0x00008975) aid_size_cell_graphic2

0x0205,	// (0x000089ad) bg_popup_window_pane_cp21_ParamLimits

0x0205,	// (0x000089ad) bg_popup_window_pane_cp21

0x0213,	// (0x000089bb) graphic2_pages_pane_ParamLimits

0x0213,	// (0x000089bb) graphic2_pages_pane

0x024d,	// (0x000089f5) grid_graphic2_control_pane_ParamLimits

0x024d,	// (0x000089f5) grid_graphic2_control_pane

0x0283,	// (0x00008a2b) grid_graphic2_pane_ParamLimits

0x0283,	// (0x00008a2b) grid_graphic2_pane

0x02e3,	// (0x00008a8b) cell_graphic2_pane

0x6612,	// (0x0000edba) main_comp_mode_pane

0xe81c,	// (0x00016fc4) list_ai3_gene_pane_ParamLimits

0xebdf,	// (0x00017387) bg_popup_window_pane_cp19_ParamLimits

0xebeb,	// (0x00017393) bg_touch_area_indi_pane_ParamLimits

0xebeb,	// (0x00017393) bg_touch_area_indi_pane

0xec01,	// (0x000173a9) bg_touch_area_indi_pane_cp01_ParamLimits

0xec01,	// (0x000173a9) bg_touch_area_indi_pane_cp01

0xec17,	// (0x000173bf) bg_touch_area_indi_pane_cp02_ParamLimits

0xec17,	// (0x000173bf) bg_touch_area_indi_pane_cp02

0xec2d,	// (0x000173d5) bg_touch_area_indi_pane_cp03_ParamLimits

0xec2d,	// (0x000173d5) bg_touch_area_indi_pane_cp03

0xec43,	// (0x000173eb) popup_slider_window_g1_ParamLimits

0xec5f,	// (0x00017407) popup_slider_window_g2_ParamLimits

0xec7b,	// (0x00017423) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x0001845c) popup_slider_window_g_ParamLimits

0xecd7,	// (0x0001747f) popup_slider_window_t1_ParamLimits

0xed49,	// (0x000174f1) small_volume_slider_vertical_pane_ParamLimits

0x02e3,	// (0x00008a8b) cell_graphic2_pane_ParamLimits

0x031f,	// (0x00008ac7) bg_button_pane_cp10_ParamLimits

0x031f,	// (0x00008ac7) bg_button_pane_cp10

0x0330,	// (0x00008ad8) bg_button_pane_cp11_ParamLimits

0x0330,	// (0x00008ad8) bg_button_pane_cp11

0x0341,	// (0x00008ae9) graphic2_pages_pane_g1_ParamLimits

0x0341,	// (0x00008ae9) graphic2_pages_pane_g1

0x0354,	// (0x00008afc) graphic2_pages_pane_g2_ParamLimits

0x0354,	// (0x00008afc) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x00018520) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x00018520) graphic2_pages_pane_g

0x036a,	// (0x00008b12) graphic2_pages_pane_t1_ParamLimits

0x036a,	// (0x00008b12) graphic2_pages_pane_t1

0x0380,	// (0x00008b28) cell_graphic2_control_pane_ParamLimits

0x0380,	// (0x00008b28) cell_graphic2_control_pane

0x039f,	// (0x00008b47) cell_graphic2_pane_g1_ParamLimits

0x039f,	// (0x00008b47) cell_graphic2_pane_g1

0x03ac,	// (0x00008b54) cell_graphic2_pane_g2_ParamLimits

0x03ac,	// (0x00008b54) cell_graphic2_pane_g2

0x03b9,	// (0x00008b61) cell_graphic2_pane_g3_ParamLimits

0x03b9,	// (0x00008b61) cell_graphic2_pane_g3

0x03c6,	// (0x00008b6e) cell_graphic2_pane_g4_ParamLimits

0x03c6,	// (0x00008b6e) cell_graphic2_pane_g4

0x03d3,	// (0x00008b7b) cell_graphic2_pane_g5_ParamLimits

0x03d3,	// (0x00008b7b) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x00018525) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x00018525) cell_graphic2_pane_g

0x03ec,	// (0x00008b94) cell_graphic2_pane_t1_ParamLimits

0x03ec,	// (0x00008b94) cell_graphic2_pane_t1

0xadaa,	// (0x00013552) grid_highlight_pane_cp11_ParamLimits

0xadaa,	// (0x00013552) grid_highlight_pane_cp11

0x8c08,	// (0x000113b0) bg_button_pane_cp05

0x0414,	// (0x00008bbc) cell_graphic2_control_pane_g1

0xd416,	// (0x00015bbe) bg_touch_area_indi_pane_g1

0x043c,	// (0x00008be4) aid_cmod_rocker_key_size

0x0446,	// (0x00008bee) aid_cmode_itu_key_size

0x0450,	// (0x00008bf8) main_cmode_video_pane

0x0458,	// (0x00008c00) main_comp_mode_itu_pane

0x0462,	// (0x00008c0a) main_comp_mode_rocker_pane

0x046a,	// (0x00008c12) cell_cmode_rocker_pane_ParamLimits

0x046a,	// (0x00008c12) cell_cmode_rocker_pane

0x047c,	// (0x00008c24) cell_cmode_itu_pane_ParamLimits

0x047c,	// (0x00008c24) cell_cmode_itu_pane

0x965c,	// (0x00011e04) bg_button_pane_cp06_ParamLimits

0x965c,	// (0x00011e04) bg_button_pane_cp06

0xd64e,	// (0x00015df6) cell_cmode_rocker_pane_g1_ParamLimits

0xd64e,	// (0x00015df6) cell_cmode_rocker_pane_g1

0xedea,	// (0x00017592) cell_cmode_rocker_pane_g2_ParamLimits

0xedea,	// (0x00017592) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x00018535) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x00018535) cell_cmode_rocker_pane_g

0x878f,	// (0x00010f37) bg_button_pane_cp07

0x0491,	// (0x00008c39) cell_cmode_itu_pane_g1

0x049a,	// (0x00008c42) cell_cmode_itu_pane_t1

0x04a8,	// (0x00008c50) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0001853a) cell_cmode_itu_pane_t

0xf002,	// (0x000177aa) aid_touch_ctrl_left

0xf00a,	// (0x000177b2) aid_touch_ctrl_right

0x878f,	// (0x00010f37) compa_mode_pane

0x04b6,	// (0x00008c5e) aid_cmod_rocker_key_size_cp

0x04c0,	// (0x00008c68) aid_cmode_itu_key_size_cp

0x04ca,	// (0x00008c72) compa_mode_pane_g1

0x04d2,	// (0x00008c7a) compa_mode_pane_g2

0x04da,	// (0x00008c82) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0001853f) compa_mode_pane_g

0x04e2,	// (0x00008c8a) main_comp_mode_itu_pane_cp

0x04ea,	// (0x00008c92) main_comp_mode_rocker_pane_cp

0x04f2,	// (0x00008c9a) cell_cmode_itu_pane_cp_ParamLimits

0x04f2,	// (0x00008c9a) cell_cmode_itu_pane_cp

0x0507,	// (0x00008caf) cell_cmode_rocker_pane_cp_ParamLimits

0x0507,	// (0x00008caf) cell_cmode_rocker_pane_cp

0x965c,	// (0x00011e04) bg_button_pane_cp06_cp_ParamLimits

0x965c,	// (0x00011e04) bg_button_pane_cp06_cp

0xd64e,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd64e,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp

0xd416,	// (0x00015bbe) cell_cmode_rocker_pane_g2_cp

0x878f,	// (0x00010f37) bg_button_pane_cp07_cp

0x0519,	// (0x00008cc1) cell_cmode_itu_pane_g1_cp

0x0522,	// (0x00008cca) cell_cmode_itu_pane_t1_cp

0x0530,	// (0x00008cd8) cell_cmode_itu_pane_t2_cp

0xc181,	// (0x00014929) settings_code_pane_cp2

0x8960,	// (0x00011108) bg_popup_window_pane_cp3_ParamLimits

0x8e06,	// (0x000115ae) heading_pane_cp3_ParamLimits

0x8e15,	// (0x000115bd) listscroll_popup_graphic_pane_ParamLimits

0x77d8,	// (0x0000ff80) fep_hwr_aid_pane_ParamLimits

0x7c38,	// (0x000103e0) aid_touch_sctrl_top_ParamLimits

0x7c53,	// (0x000103fb) sctrl_sk_top_pane_g1_ParamLimits

0x7a1d,	// (0x000101c5) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x00018475) sctrl_sk_top_pane_g_ParamLimits

0x7c60,	// (0x00010408) sctrl_sk_top_pane_t1_ParamLimits

0x7c38,	// (0x000103e0) aid_touch_sctrl_bottom_ParamLimits

0x7c60,	// (0x00010408) sctrl_sk_bottom_pane_t1_ParamLimits

0xef4c,	// (0x000176f4) aid_area_touch_clock

0x7e26,	// (0x000105ce) aid_vkb2_area_top_pane_cell_ParamLimits

0x7e26,	// (0x000105ce) aid_vkb2_area_top_pane_cell

0x7f51,	// (0x000106f9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7f51,	// (0x000106f9) aid_vkb2_area_bottom_pane_cell

0xf499,	// (0x00017c41) popup_char_count_window

0x053e,	// (0x00008ce6) popup_char_count_window_g1

0x0547,	// (0x00008cef) popup_char_count_window_g2

0x0550,	// (0x00008cf8) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x00018546) popup_char_count_window_g

0x0559,	// (0x00008d01) popup_char_count_window_t1

0x7d14,	// (0x000104bc) popup_fep_char_preview_window_ParamLimits

0x7d14,	// (0x000104bc) popup_fep_char_preview_window

0x7e44,	// (0x000105ec) vkb2_top_candi_pane_ParamLimits

0x7e44,	// (0x000105ec) vkb2_top_candi_pane

0x0567,	// (0x00008d0f) cell_vkb2_top_candi_pane_ParamLimits

0x0567,	// (0x00008d0f) cell_vkb2_top_candi_pane

0x8212,	// (0x000109ba) bg_popup_fep_char_preview_window_ParamLimits

0x8212,	// (0x000109ba) bg_popup_fep_char_preview_window

0x8220,	// (0x000109c8) popup_fep_char_preview_window_t1_ParamLimits

0x8220,	// (0x000109c8) popup_fep_char_preview_window_t1

0x05ea,	// (0x00008d92) bg_popup_fep_char_preview_window_g1

0x05e2,	// (0x00008d8a) bg_popup_fep_char_preview_window_g2

0x05da,	// (0x00008d82) bg_popup_fep_char_preview_window_g3

0x0612,	// (0x00008dba) bg_popup_fep_char_preview_window_g4

0x060a,	// (0x00008db2) bg_popup_fep_char_preview_window_g5

0x0602,	// (0x00008daa) bg_popup_fep_char_preview_window_g6

0x05fa,	// (0x00008da2) bg_popup_fep_char_preview_window_g7

0x05f2,	// (0x00008d9a) bg_popup_fep_char_preview_window_g8

0x061a,	// (0x00008dc2) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x0001854d) bg_popup_fep_char_preview_window_g

0x7a1d,	// (0x000101c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a1d,	// (0x000101c5) cell_vkb2_top_candi_pane_g1

0x7a2b,	// (0x000101d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a2b,	// (0x000101d3) cell_vkb2_top_candi_pane_g2

0x064b,	// (0x00008df3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x064b,	// (0x00008df3) cell_vkb2_top_candi_pane_g3

0x8262,	// (0x00010a0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8262,	// (0x00010a0a) cell_vkb2_top_candi_pane_g4

0xdbdc,	// (0x00016384) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdbdc,	// (0x00016384) cell_vkb2_top_candi_pane_g5

0x8283,	// (0x00010a2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8283,	// (0x00010a2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x00018562) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x00018562) cell_vkb2_top_candi_pane_g

0x8291,	// (0x00010a39) cell_vkb2_top_candi_pane_t1

0x75f0,	// (0x0000fd98) aid_size_touch_slider_mark_ParamLimits

0x75f0,	// (0x0000fd98) aid_size_touch_slider_mark

0x0241,	// (0x000089e9) grid_graphic2_catg_pane_ParamLimits

0x0241,	// (0x000089e9) grid_graphic2_catg_pane

0x02bf,	// (0x00008a67) popup_grid_graphic2_window_t1_ParamLimits

0x02bf,	// (0x00008a67) popup_grid_graphic2_window_t1

0x02d1,	// (0x00008a79) popup_grid_graphic2_window_t2_ParamLimits

0x02d1,	// (0x00008a79) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x0001851b) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x0001851b) popup_grid_graphic2_window_t

0x8c08,	// (0x000113b0) bg_button_pane_cp05_ParamLimits

0x0414,	// (0x00008bbc) cell_graphic2_control_pane_g1_ParamLimits

0x0682,	// (0x00008e2a) cell_graphic2_catg_pane_ParamLimits

0x0682,	// (0x00008e2a) cell_graphic2_catg_pane

0x878f,	// (0x00010f37) bg_button_pane_cp12

0x0694,	// (0x00008e3c) cell_graphic2_catg_pane_g1

0xef18,	// (0x000176c0) cell_tb_ext_pane_t1_ParamLimits

0x805c,	// (0x00010804) vkb2_top_cell_right_narrow_pane_ParamLimits

0x805c,	// (0x00010804) vkb2_top_cell_right_narrow_pane

0x8074,	// (0x0001081c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8074,	// (0x0001081c) vkb2_top_cell_right_wide_pane

0x77ca,	// (0x0000ff72) bg_vkb2_func_pane_ParamLimits

0x77ca,	// (0x0000ff72) bg_vkb2_func_pane

0x80e5,	// (0x0001088d) vkb2_top_cell_left_pane_g1_ParamLimits

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp03_ParamLimits

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp03

0x8143,	// (0x000108eb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xac9a,	// (0x00013442) bg_vkb2_func_pane_g1

0xaca2,	// (0x0001344a) bg_vkb2_func_pane_g2

0xacb2,	// (0x0001345a) bg_vkb2_func_pane_g3

0xacaa,	// (0x00013452) bg_vkb2_func_pane_g4

0xacba,	// (0x00013462) bg_vkb2_func_pane_g5

0xacc2,	// (0x0001346a) bg_vkb2_func_pane_g6

0xacca,	// (0x00013472) bg_vkb2_func_pane_g7

0xacd2,	// (0x0001347a) bg_vkb2_func_pane_g8

0xac92,	// (0x0001343a) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x0001856f) bg_vkb2_func_pane_g

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp01_ParamLimits

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp01

0x80e5,	// (0x0001088d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x80e5,	// (0x0001088d) vkb2_top_cell_right_wide_pane_g1

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp02_ParamLimits

0x77ca,	// (0x0000ff72) bg_vkb2_fuc_pane_cp02

0x8143,	// (0x000108eb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8143,	// (0x000108eb) vkb2_top_cell_right_narrow_pane_g1

0xeb71,	// (0x00017319) aid_touch_area_decrease_ParamLimits

0xeb71,	// (0x00017319) aid_touch_area_decrease

0xeb89,	// (0x00017331) aid_touch_area_increase_ParamLimits

0xeb89,	// (0x00017331) aid_touch_area_increase

0xeb95,	// (0x0001733d) aid_touch_area_mute_ParamLimits

0xeb95,	// (0x0001733d) aid_touch_area_mute

0xebb1,	// (0x00017359) aid_touch_area_slider_ParamLimits

0xebb1,	// (0x00017359) aid_touch_area_slider

0xec97,	// (0x0001743f) popup_slider_window_g4_ParamLimits

0xec97,	// (0x0001743f) popup_slider_window_g4

0xeca3,	// (0x0001744b) popup_slider_window_g5_ParamLimits

0xeca3,	// (0x0001744b) popup_slider_window_g5

0xecc5,	// (0x0001746d) popup_slider_window_g6_ParamLimits

0xecc5,	// (0x0001746d) popup_slider_window_g6

0xed03,	// (0x000174ab) popup_slider_window_t2_ParamLimits

0xed03,	// (0x000174ab) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x00018469) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x00018469) popup_slider_window_t

0xed1b,	// (0x000174c3) slider_pane_ParamLimits

0xed1b,	// (0x000174c3) slider_pane

0x069d,	// (0x00008e45) slider_pane_g1_ParamLimits

0x069d,	// (0x00008e45) slider_pane_g1

0x06b1,	// (0x00008e59) slider_pane_g2_ParamLimits

0x06b1,	// (0x00008e59) slider_pane_g2

0x06c7,	// (0x00008e6f) slider_pane_g3_ParamLimits

0x06c7,	// (0x00008e6f) slider_pane_g3

0x0003,

0xfdda,	// (0x00018582) slider_pane_g_ParamLimits

0xfdda,	// (0x00018582) slider_pane_g

0x71fe,	// (0x0000f9a6) popup_tb_float_extension_window_ParamLimits

0x71fe,	// (0x0000f9a6) popup_tb_float_extension_window

0x06f3,	// (0x00008e9b) aid_size_cell_tb_float_ext

0x878f,	// (0x00010f37) bg_popup_sub_window_cp28

0x06fe,	// (0x00008ea6) grid_tb_float_ext_pane

0x0706,	// (0x00008eae) cell_tb_float_ext_pane_ParamLimits

0x0706,	// (0x00008eae) cell_tb_float_ext_pane

0x071e,	// (0x00008ec6) cell_tb_float_ext_pane_g1

0x0727,	// (0x00008ecf) grid_highlight_pane_cp12

0x7913,	// (0x000100bb) cell_last_hwr_side_pane_ParamLimits

0x7913,	// (0x000100bb) cell_last_hwr_side_pane

0xd416,	// (0x00015bbe) cell_last_hwr_side_pane_g1

0x0730,	// (0x00008ed8) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x0001858b) cell_last_hwr_side_pane_g

0x8019,	// (0x000107c1) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8019,	// (0x000107c1) vkb2_area_bottom_space_btn_pane

0x7a1d,	// (0x000101c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x01bb,	// (0x00008963) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8291,	// (0x00010a39) cell_vkb2_top_candi_pane_t1_ParamLimits

0x82a7,	// (0x00010a4f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x82a7,	// (0x00010a4f) vkb2_area_bottom_space_btn_pane_g1

0x82dd,	// (0x00010a85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x82dd,	// (0x00010a85) vkb2_area_bottom_space_btn_pane_g2

0x8313,	// (0x00010abb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8313,	// (0x00010abb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x00018590) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x00018590) vkb2_area_bottom_space_btn_pane_g

0x7887,	// (0x0001002f) cel_fep_hwr_func_pane_ParamLimits

0x7887,	// (0x0001002f) cel_fep_hwr_func_pane

0x78c3,	// (0x0001006b) cell_hwr_side_button_pane_ParamLimits

0x78c3,	// (0x0001006b) cell_hwr_side_button_pane

0xef4c,	// (0x000176f4) aid_area_touch_clock_ParamLimits

0x8c08,	// (0x000113b0) bg_uniindi_top_pane_ParamLimits

0xef5e,	// (0x00017706) uniindi_top_pane_g1_ParamLimits

0xef74,	// (0x0001771c) uniindi_top_pane_g2_ParamLimits

0xef80,	// (0x00017728) uniindi_top_pane_g3_ParamLimits

0xef91,	// (0x00017739) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x000184a1) uniindi_top_pane_g_ParamLimits

0xef9e,	// (0x00017746) uniindi_top_pane_t1_ParamLimits

0x8c08,	// (0x000113b0) bg_vkb2_func_pane_cp01_ParamLimits

0x8c08,	// (0x000113b0) bg_vkb2_func_pane_cp01

0x07eb,	// (0x00008f93) cel_fep_hwr_func_pane_g1_ParamLimits

0x07eb,	// (0x00008f93) cel_fep_hwr_func_pane_g1

0x8c08,	// (0x000113b0) bg_vkb2_func_pane_cp02_ParamLimits

0x8c08,	// (0x000113b0) bg_vkb2_func_pane_cp02

0x07eb,	// (0x00008f93) cell_hwr_side_button_pane_g1_ParamLimits

0x07eb,	// (0x00008f93) cell_hwr_side_button_pane_g1

0xaaf8,	// (0x000132a0) status_pane_g4_ParamLimits

0xaaf8,	// (0x000132a0) status_pane_g4

0xab10,	// (0x000132b8) status_pane_t1

0xd1f8,	// (0x000159a0) form2_midp_gauge_slider_cont_pane

0xd200,	// (0x000159a8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd212,	// (0x000159ba) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd224,	// (0x000159cc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac0,	// (0x00018268) form2_midp_gauge_slider_pane_t_ParamLimits

0xd236,	// (0x000159de) form2_midp_slider_pane_ParamLimits

0x7cd4,	// (0x0001047c) aid_size_cell_func_vkb2_ParamLimits

0x7cd4,	// (0x0001047c) aid_size_cell_func_vkb2

0x06df,	// (0x00008e87) slider_pane_g4_ParamLimits

0x06df,	// (0x00008e87) slider_pane_g4

0x8359,	// (0x00010b01) form2_midp_gauge_slider_pane_t2_cp01

0x8367,	// (0x00010b0f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8367,	// (0x00010b0f) form2_midp_gauge_slider_pane_t3_cp01

0x8384,	// (0x00010b2c) form2_midp_slider_pane_cp01

0x878f,	// (0x00010f37) navi_smil_pane

0x0858,	// (0x00009000) navi_smil_pane_g1

0x0860,	// (0x00009008) navi_smil_pane_t1

0x082d,	// (0x00008fd5) form2_midp_slider_pane_g1

0x0836,	// (0x00008fde) form2_midp_slider_pane_g2

0x083e,	// (0x00008fe6) form2_midp_slider_pane_g3

0x082d,	// (0x00008fd5) form2_midp_slider_pane_g4

0x0846,	// (0x00008fee) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x00018599) form2_midp_slider_pane_g

0x8349,	// (0x00010af1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8349,	// (0x00010af1) vkb2_area_bottom_space_btn_pane_g4

0xa93a,	// (0x000130e2) lc0_navi_pane_ParamLimits

0xa93a,	// (0x000130e2) lc0_navi_pane

0xa9b0,	// (0x00013158) lc0_stat_indi_pane_ParamLimits

0xa9b0,	// (0x00013158) lc0_stat_indi_pane

0xa9c7,	// (0x0001316f) ls0_title_pane_ParamLimits

0xa9c7,	// (0x0001316f) ls0_title_pane

0x965c,	// (0x00011e04) bg_popup_sub_pane_cp14_ParamLimits

0xef33,	// (0x000176db) list_uniindi_pane_ParamLimits

0xef3f,	// (0x000176e7) uniindi_top_pane_ParamLimits

0xefda,	// (0x00017782) list_single_uniindi_pane_g1_ParamLimits

0xefed,	// (0x00017795) list_single_uniindi_pane_t1_ParamLimits

0x838d,	// (0x00010b35) lc0_stat_clock_pane_ParamLimits

0x838d,	// (0x00010b35) lc0_stat_clock_pane

0x0888,	// (0x00009030) lc0_stat_indi_pane_g1_ParamLimits

0x0888,	// (0x00009030) lc0_stat_indi_pane_g1

0x087b,	// (0x00009023) lc0_stat_indi_pane_g2_ParamLimits

0x087b,	// (0x00009023) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x000185a4) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x000185a4) lc0_stat_indi_pane_g

0x839a,	// (0x00010b42) lc0_uni_indicator_pane_ParamLimits

0x839a,	// (0x00010b42) lc0_uni_indicator_pane

0x08a2,	// (0x0000904a) ls0_title_pane_g1_ParamLimits

0x08a2,	// (0x0000904a) ls0_title_pane_g1

0x08b6,	// (0x0000905e) ls0_title_pane_t1_ParamLimits

0x08b6,	// (0x0000905e) ls0_title_pane_t1

0x83a7,	// (0x00010b4f) lc0_uni_indicator_pane_g1_ParamLimits

0x83a7,	// (0x00010b4f) lc0_uni_indicator_pane_g1

0x08fe,	// (0x000090a6) lc0_stat_clock_pane_t1

0x6612,	// (0x0000edba) main_ai5_pane

0x090c,	// (0x000090b4) ai5_sk_pane_ParamLimits

0x090c,	// (0x000090b4) ai5_sk_pane

0x0919,	// (0x000090c1) cell_ai5_widget_pane_ParamLimits

0x0919,	// (0x000090c1) cell_ai5_widget_pane

0x098f,	// (0x00009137) aid_size_cell_widget_grid

0x099c,	// (0x00009144) bg_ai5_widget_pane_ParamLimits

0x099c,	// (0x00009144) bg_ai5_widget_pane

0x09f3,	// (0x0000919b) cell_ai5_widget_pane_g2

0x0a07,	// (0x000091af) cell_ai5_widget_pane_g3

0x0a21,	// (0x000091c9) cell_ai5_widget_pane_g4

0x0a31,	// (0x000091d9) cell_ai5_widget_pane_g5

0x0a41,	// (0x000091e9) cell_ai5_widget_pane_g6

0x0a4d,	// (0x000091f5) cell_ai5_widget_pane_g7

0x0ab9,	// (0x00009261) cell_ai5_widget_pane_t1_ParamLimits

0x0ab9,	// (0x00009261) cell_ai5_widget_pane_t1

0x0ad6,	// (0x0000927e) cell_ai5_widget_pane_t2_ParamLimits

0x0ad6,	// (0x0000927e) cell_ai5_widget_pane_t2

0x0aee,	// (0x00009296) cell_ai5_widget_pane_t3_ParamLimits

0x0aee,	// (0x00009296) cell_ai5_widget_pane_t3

0x0b06,	// (0x000092ae) cell_ai5_widget_pane_t4_ParamLimits

0x0b06,	// (0x000092ae) cell_ai5_widget_pane_t4

0x0b2c,	// (0x000092d4) cell_ai5_widget_pane_t5_ParamLimits

0x0b2c,	// (0x000092d4) cell_ai5_widget_pane_t5

0x0b4b,	// (0x000092f3) cell_ai5_widget_pane_t6_ParamLimits

0x0b4b,	// (0x000092f3) cell_ai5_widget_pane_t6

0x0b5d,	// (0x00009305) cell_ai5_widget_pane_t7_ParamLimits

0x0b5d,	// (0x00009305) cell_ai5_widget_pane_t7

0x0b7c,	// (0x00009324) cell_ai5_widget_pane_t8_ParamLimits

0x0b7c,	// (0x00009324) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x000185c4) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x000185c4) cell_ai5_widget_pane_t

0x0bff,	// (0x000093a7) grid_ai5_widget_pane

0x965c,	// (0x00011e04) highlight_cell_ai5_widget_pane_ParamLimits

0x965c,	// (0x00011e04) highlight_cell_ai5_widget_pane

0x0c0b,	// (0x000093b3) ai5_sk_left_pane

0x0c15,	// (0x000093bd) ai5_sk_middle_pane

0x0c1f,	// (0x000093c7) ai5_sk_right_pane

0x0c29,	// (0x000093d1) bg_ai5_widget_pane_g1_ParamLimits

0x0c29,	// (0x000093d1) bg_ai5_widget_pane_g1

0x0c35,	// (0x000093dd) bg_ai5_widget_pane_g2_ParamLimits

0x0c35,	// (0x000093dd) bg_ai5_widget_pane_g2

0x0c41,	// (0x000093e9) bg_ai5_widget_pane_g3_ParamLimits

0x0c41,	// (0x000093e9) bg_ai5_widget_pane_g3

0x0c4d,	// (0x000093f5) bg_ai5_widget_pane_g4_ParamLimits

0x0c4d,	// (0x000093f5) bg_ai5_widget_pane_g4

0x0c59,	// (0x00009401) bg_ai5_widget_pane_g5_ParamLimits

0x0c59,	// (0x00009401) bg_ai5_widget_pane_g5

0x0c65,	// (0x0000940d) bg_ai5_widget_pane_g6_ParamLimits

0x0c65,	// (0x0000940d) bg_ai5_widget_pane_g6

0x0c71,	// (0x00009419) bg_ai5_widget_pane_g7_ParamLimits

0x0c71,	// (0x00009419) bg_ai5_widget_pane_g7

0x0c7d,	// (0x00009425) bg_ai5_widget_pane_g8_ParamLimits

0x0c7d,	// (0x00009425) bg_ai5_widget_pane_g8

0x0c89,	// (0x00009431) bg_ai5_widget_pane_g9_ParamLimits

0x0c89,	// (0x00009431) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x000185dd) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x000185dd) bg_ai5_widget_pane_g

0x0cb9,	// (0x00009461) cell_shortcut_ai5_widget_pane_ParamLimits

0x0cb9,	// (0x00009461) cell_shortcut_ai5_widget_pane

0x0cca,	// (0x00009472) bg_cell_shortcut_ai5_widget_pane

0x8dc2,	// (0x0001156a) cell_grid_ai5_widget_pane_g1

0xa446,	// (0x00012bee) highlight_cell_shortcut_ai5_widget_pane

0xac9a,	// (0x00013442) ai5_sk_left_pane_g1

0x0cd2,	// (0x0000947a) ai5_sk_left_pane_g2

0x0cda,	// (0x00009482) ai5_sk_left_pane_g3

0x0ce2,	// (0x0000948a) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x000185f0) ai5_sk_left_pane_g

0x0cea,	// (0x00009492) ai5_sk_left_pane_t1

0xaca2,	// (0x0001344a) ai5_sk_right_pane_g1

0x0cf8,	// (0x000094a0) ai5_sk_right_pane_g2

0x0d00,	// (0x000094a8) ai5_sk_right_pane_g3

0x0d08,	// (0x000094b0) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x000185f9) ai5_sk_right_pane_g

0x0d10,	// (0x000094b8) ai5_sk_right_pane_t1

0xaca2,	// (0x0001344a) ai5_sk_middle_pane_g1

0xac9a,	// (0x00013442) ai5_sk_middle_pane_g2

0xacba,	// (0x00013462) ai5_sk_middle_pane_g3

0x0d00,	// (0x000094a8) ai5_sk_middle_pane_g4

0x0cda,	// (0x00009482) ai5_sk_middle_pane_g5

0x0d1e,	// (0x000094c6) ai5_sk_middle_pane_g6

0x0d26,	// (0x000094ce) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x00018602) ai5_sk_middle_pane_g

0xa7db,	// (0x00012f83) aid_touch_area_size_lc0_ParamLimits

0xa7db,	// (0x00012f83) aid_touch_area_size_lc0

0x7a4c,	// (0x000101f4) cell_hwr_candidate_pane_t1_ParamLimits

0xa7f5,	// (0x00012f9d) aid_touch_navi_pane

0xaaaa,	// (0x00013252) status_dt_navi_pane_ParamLimits

0xaaaa,	// (0x00013252) status_dt_navi_pane

0xaab7,	// (0x0001325f) status_dt_sta_pane_ParamLimits

0xaab7,	// (0x0001325f) status_dt_sta_pane

0x0d2e,	// (0x000094d6) dt_sta_controll_pane

0x0d3b,	// (0x000094e3) dt_sta_indi_pane

0x0d4c,	// (0x000094f4) dt_sta_title_pane

0x8c08,	// (0x000113b0) bg_dt_sta_indi_pane_ParamLimits

0x8c08,	// (0x000113b0) bg_dt_sta_indi_pane

0x0d5f,	// (0x00009507) dt_sta_battery_pane

0x0d67,	// (0x0000950f) dt_sta_indi_pane_g1

0x0d70,	// (0x00009518) dt_sta_indi_pane_g2

0x0d79,	// (0x00009521) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x00018611) dt_sta_indi_pane_g

0x0d82,	// (0x0000952a) dt_sta_signal_pane

0x965c,	// (0x00011e04) bg_dt_sta_title_pane_ParamLimits

0x965c,	// (0x00011e04) bg_dt_sta_title_pane

0x0d8b,	// (0x00009533) dt_sta_title_pane_g1

0x0d93,	// (0x0000953b) dt_sta_title_pane_t1_ParamLimits

0x0d93,	// (0x0000953b) dt_sta_title_pane_t1

0x878f,	// (0x00010f37) bg_dt_sta_control_pane

0x0da8,	// (0x00009550) dt_sta_controll_pane_g1

0x0db1,	// (0x00009559) bg_dt_sta_title_pane_g1

0x0dba,	// (0x00009562) bg_dt_sta_title_pane_g2

0x0dc3,	// (0x0000956b) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x00018618) bg_dt_sta_title_pane_g

0xd416,	// (0x00015bbe) bg_dt_sta_indi_pane_g1

0x0dcc,	// (0x00009574) dt_sta_signal_pane_g1

0x0dd4,	// (0x0000957c) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x0001861f) dt_sta_signal_pane_g

0x0ddc,	// (0x00009584) dt_sta_battery_pane_g1

0x0de5,	// (0x0000958d) dt_sta_battery_pane_t1

0xd416,	// (0x00015bbe) bg_dt_sta_control_pane_g1

0x9f24,	// (0x000126cc) fep_china_uni_eep_pane

0x9f2c,	// (0x000126d4) fep_china_uni_entry_pane_ParamLimits

0x9f3c,	// (0x000126e4) popup_fep_china_uni_window_g1_ParamLimits

0x9f4c,	// (0x000126f4) popup_fep_china_uni_window_g2_ParamLimits

0x9f4c,	// (0x000126f4) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00017e91) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00017e91) popup_fep_china_uni_window_g

0x0df4,	// (0x0000959c) fep_china_uni_eep_pane_g1

0x0dfc,	// (0x000095a4) fep_china_uni_eep_pane_t1

0x084f,	// (0x00008ff7) aid_touch_area_size_smil_player

0xa932,	// (0x000130da) lc0_clock_pane

0xab04,	// (0x000132ac) status_pane_g5_ParamLimits

0xab04,	// (0x000132ac) status_pane_g5

0x6f72,	// (0x0000f71a) popup_keymap_window

0xaacc,	// (0x00013274) status_icon_pane

0x0a07,	// (0x000091af) cell_ai5_widget_pane_g3_ParamLimits

0x0a21,	// (0x000091c9) cell_ai5_widget_pane_g4_ParamLimits

0x0a31,	// (0x000091d9) cell_ai5_widget_pane_g5_ParamLimits

0x0a59,	// (0x00009201) cell_ai5_widget_pane_g8_ParamLimits

0x0a59,	// (0x00009201) cell_ai5_widget_pane_g8

0x0a6d,	// (0x00009215) cell_ai5_widget_pane_g9_ParamLimits

0x0a6d,	// (0x00009215) cell_ai5_widget_pane_g9

0x0a81,	// (0x00009229) cell_ai5_widget_pane_g10_ParamLimits

0x0a81,	// (0x00009229) cell_ai5_widget_pane_g10

0x0e0b,	// (0x000095b3) status_icon_pane_g1

0x878f,	// (0x00010f37) bg_popup_sub_pane_cp13

0x0e13,	// (0x000095bb) popup_keymap_window_t1

0xa70b,	// (0x00012eb3) control_pane_g6_ParamLimits

0xa70b,	// (0x00012eb3) control_pane_g6

0xa718,	// (0x00012ec0) control_pane_g7_ParamLimits

0xa718,	// (0x00012ec0) control_pane_g7

0xa725,	// (0x00012ecd) control_pane_g8_ParamLimits

0xa725,	// (0x00012ecd) control_pane_g8

0x0d2e,	// (0x000094d6) dt_sta_controll_pane_ParamLimits

0x0d3b,	// (0x000094e3) dt_sta_indi_pane_ParamLimits

0x0d4c,	// (0x000094f4) dt_sta_title_pane_ParamLimits

0x9093,	// (0x0001183b) aid_size_touch_scroll_bar_cale

0x66e9,	// (0x0000ee91) popup_discreet_window_ParamLimits

0x66e9,	// (0x0000ee91) popup_discreet_window

0x674d,	// (0x0000eef5) popup_sk_window

0xb376,	// (0x00013b1e) bg_popup_sub_pane_cp28_ParamLimits

0xb376,	// (0x00013b1e) bg_popup_sub_pane_cp28

0x0e21,	// (0x000095c9) popup_discreet_window_g1_ParamLimits

0x0e21,	// (0x000095c9) popup_discreet_window_g1

0x0e41,	// (0x000095e9) popup_discreet_window_t1_ParamLimits

0x0e41,	// (0x000095e9) popup_discreet_window_t1

0x0e5f,	// (0x00009607) popup_discreet_window_t2_ParamLimits

0x0e5f,	// (0x00009607) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x00018624) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x00018624) popup_discreet_window_t

0x83b9,	// (0x00010b61) popup_sk_window_g1

0x83c2,	// (0x00010b6a) popup_sk_window_g2

0x0001,

0xfe83,	// (0x0001862b) popup_sk_window_g

0x83cb,	// (0x00010b73) popup_sk_window_t1

0x83d9,	// (0x00010b81) popup_sk_window_t1_copy1

0x09f3,	// (0x0000919b) cell_ai5_widget_pane_g2_ParamLimits

0x0b8e,	// (0x00009336) cell_ai5_widget_pane_t9_ParamLimits

0x0b8e,	// (0x00009336) cell_ai5_widget_pane_t9

0x878f,	// (0x00010f37) main_fep_fshwr2_pane

0x83e7,	// (0x00010b8f) aid_fshwr2_btn_pane

0x83f3,	// (0x00010b9b) aid_fshwr2_syb_pane

0x8405,	// (0x00010bad) aid_fshwr2_txt_pane

0x8411,	// (0x00010bb9) fshwr2_func_candi_pane

0x8425,	// (0x00010bcd) fshwr2_hwr_syb_pane

0x8437,	// (0x00010bdf) fshwr2_icf_pane

0x6612,	// (0x0000edba) fshwr2_icf_bg_pane

0x845f,	// (0x00010c07) fshwr2_icf_pane_t1_ParamLimits

0x845f,	// (0x00010c07) fshwr2_icf_pane_t1

0x9e2a,	// (0x000125d2) fshwr2_func_candi_pane_g1

0x0f6f,	// (0x00009717) fshwr2_func_candi_row_pane_ParamLimits

0x0f6f,	// (0x00009717) fshwr2_func_candi_row_pane

0x8477,	// (0x00010c1f) cell_fshwr2_syb_pane_ParamLimits

0x8477,	// (0x00010c1f) cell_fshwr2_syb_pane

0x8496,	// (0x00010c3e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8496,	// (0x00010c3e) fshwr2_hwr_syb_pane_g1

0x6612,	// (0x0000edba) bg_popup_call_pane_cp01

0x84a4,	// (0x00010c4c) fshwr2_func_candi_cell_pane_ParamLimits

0x84a4,	// (0x00010c4c) fshwr2_func_candi_cell_pane

0xb99e,	// (0x00014146) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb99e,	// (0x00014146) fshwr2_func_candi_cell_bg_pane

0x84e3,	// (0x00010c8b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x84e3,	// (0x00010c8b) fshwr2_func_candi_cell_pane_g1

0x8503,	// (0x00010cab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8503,	// (0x00010cab) fshwr2_func_candi_cell_pane_t1

0x6612,	// (0x0000edba) bg_button_pane_cp08

0xa795,	// (0x00012f3d) cell_fshwr2_syb_bg_pane

0x8516,	// (0x00010cbe) cell_fshwr2_syb_bg_pane_g1

0x852a,	// (0x00010cd2) cell_fshwr2_syb_bg_pane_t1

0x965c,	// (0x00011e04) main_tmo_pane

0xbe2a,	// (0x000145d2) uni_indicator_pane_g1_ParamLimits

0xbe3e,	// (0x000145e6) uni_indicator_pane_g2_ParamLimits

0xbe53,	// (0x000145fb) uni_indicator_pane_g3_ParamLimits

0xbe68,	// (0x00014610) uni_indicator_pane_g4_ParamLimits

0xbe68,	// (0x00014610) uni_indicator_pane_g4

0xbe7c,	// (0x00014624) uni_indicator_pane_g5_ParamLimits

0xbe7c,	// (0x00014624) uni_indicator_pane_g5

0xbe7c,	// (0x00014624) uni_indicator_pane_g6_ParamLimits

0xbe7c,	// (0x00014624) uni_indicator_pane_g6

0xf8ed,	// (0x00018095) uni_indicator_pane_g_ParamLimits

0xeb55,	// (0x000172fd) popup_tmo_note_window_ParamLimits

0xeb55,	// (0x000172fd) popup_tmo_note_window

0x7cb0,	// (0x00010458) fshwr2_bg_pane

0x84f4,	// (0x00010c9c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x84f4,	// (0x00010c9c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x00018630) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x00018630) fshwr2_func_candi_cell_pane_g

0x7a05,	// (0x000101ad) bg_popup_window_pane_cp01

0x8540,	// (0x00010ce8) bg_popup_window_pane_g1_cp01

0x1056,	// (0x000097fe) bg_popup_window_pane_cp22_ParamLimits

0x1056,	// (0x000097fe) bg_popup_window_pane_cp22

0x1064,	// (0x0000980c) listscroll_tmo_link_pane_ParamLimits

0x1064,	// (0x0000980c) listscroll_tmo_link_pane

0x10a4,	// (0x0000984c) popup_tmo_note_window_g1_ParamLimits

0x10a4,	// (0x0000984c) popup_tmo_note_window_g1

0x10b1,	// (0x00009859) tmo_note_info_pane_ParamLimits

0x10b1,	// (0x00009859) tmo_note_info_pane

0x10cb,	// (0x00009873) list_tmo_note_info_pane_g1_ParamLimits

0x10cb,	// (0x00009873) list_tmo_note_info_pane_g1

0x10e2,	// (0x0000988a) list_tmo_note_info_pane_g2_ParamLimits

0x10e2,	// (0x0000988a) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x00018635) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x00018635) list_tmo_note_info_pane_g

0x10fe,	// (0x000098a6) list_tmo_note_info_text_pane_ParamLimits

0x10fe,	// (0x000098a6) list_tmo_note_info_text_pane

0x117f,	// (0x00009927) list_tmo_link_pane

0x118c,	// (0x00009934) scroll_pane_cp20

0x1199,	// (0x00009941) list_single_tmo_link_pane_ParamLimits

0x1199,	// (0x00009941) list_single_tmo_link_pane

0x11a9,	// (0x00009951) list_single_tmo_link_pane_t1

0x11b7,	// (0x0000995f) list_tmo_note_info_text_pane_t1_ParamLimits

0x11b7,	// (0x0000995f) list_tmo_note_info_text_pane_t1

0x9884,	// (0x0001202c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9884,	// (0x0001202c) aid_size_touch_scroll_bar_cp01

0x96f9,	// (0x00011ea1) aid_size_touch_slider_marker

0x6739,	// (0x0000eee1) popup_settings_window_ParamLimits

0x6739,	// (0x0000eee1) popup_settings_window

0xa7af,	// (0x00012f57) popup_candi_list_indi_window

0xa7f5,	// (0x00012f9d) aid_touch_navi_pane_ParamLimits

0x7c0c,	// (0x000103b4) rs_clock_indi_pane

0x7c15,	// (0x000103bd) sctrl_sk_bottom_pane_ParamLimits

0x7c26,	// (0x000103ce) sctrl_sk_top_pane_ParamLimits

0x7d2e,	// (0x000104d6) popup_fep_tooltip_window

0x098f,	// (0x00009137) aid_size_cell_widget_grid_ParamLimits

0x09df,	// (0x00009187) cell_ai5_widget_pane_g1_ParamLimits

0x09df,	// (0x00009187) cell_ai5_widget_pane_g1

0x0a41,	// (0x000091e9) cell_ai5_widget_pane_g6_ParamLimits

0x0a4d,	// (0x000091f5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x000185a9) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x000185a9) cell_ai5_widget_pane_g

0x0bbd,	// (0x00009365) cell_ai5_widget_pane_t10_ParamLimits

0x0bbd,	// (0x00009365) cell_ai5_widget_pane_t10

0x0bff,	// (0x000093a7) grid_ai5_widget_pane_ParamLimits

0x0c95,	// (0x0000943d) cell_contacts_ai5_widget_pane_ParamLimits

0x0c95,	// (0x0000943d) cell_contacts_ai5_widget_pane

0x0e74,	// (0x0000961c) popup_discreet_window_t3_ParamLimits

0x0e74,	// (0x0000961c) popup_discreet_window_t3

0x844d,	// (0x00010bf5) popup_fshwr2_char_preview_window_ParamLimits

0x844d,	// (0x00010bf5) popup_fshwr2_char_preview_window

0x111c,	// (0x000098c4) tmo_note_info_pane_t1

0x1131,	// (0x000098d9) tmo_note_info_pane_t2

0x1146,	// (0x000098ee) tmo_note_info_pane_t3

0x115b,	// (0x00009903) tmo_note_info_pane_t4

0x116d,	// (0x00009915) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x0001863a) tmo_note_info_pane_t

0x117f,	// (0x00009927) list_tmo_link_pane_ParamLimits

0x118c,	// (0x00009934) scroll_pane_cp20_ParamLimits

0x6612,	// (0x0000edba) bg_popup_fep_char_preview_window_cp01

0x11d0,	// (0x00009978) popup_fshwr2_char_preview_window_t1

0x11de,	// (0x00009986) popup_candi_list_indi_window_g1

0x11e7,	// (0x0000998f) bg_cell_contacts_ai5_widget_pane

0x11f3,	// (0x0000999b) cell_contacts_ai5_widget_pane_g1

0x1208,	// (0x000099b0) cell_contacts_ai5_widget_pane_g2

0x1214,	// (0x000099bc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x00018645) cell_contacts_ai5_widget_pane_g

0x1220,	// (0x000099c8) cell_contacts_ai5_widget_pane_t1

0x965c,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1295,	// (0x00009a3d) settings_container_pane

0xa446,	// (0x00012bee) listscroll_set_pane_copy1

0xc95b,	// (0x00015103) scroll_pane_cp121_copy1

0x12a1,	// (0x00009a49) set_content_pane_copy1

0x12a9,	// (0x00009a51) aid_height_set_list_copy1_ParamLimits

0x12a9,	// (0x00009a51) aid_height_set_list_copy1

0xc053,	// (0x000147fb) aid_size_parent_copy1_ParamLimits

0xc053,	// (0x000147fb) aid_size_parent_copy1

0x12b5,	// (0x00009a5d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x12b5,	// (0x00009a5d) button_value_adjust_pane_cp6_copy1

0xa795,	// (0x00012f3d) list_highlight_pane_cp2_copy1_ParamLimits

0xa795,	// (0x00012f3d) list_highlight_pane_cp2_copy1

0x12c9,	// (0x00009a71) list_set_pane_copy1_ParamLimits

0x12c9,	// (0x00009a71) list_set_pane_copy1

0x1232,	// (0x000099da) main_pane_set_t1_copy1_ParamLimits

0x1232,	// (0x000099da) main_pane_set_t1_copy1

0x126c,	// (0x00009a14) main_pane_set_t2_copy1_ParamLimits

0x126c,	// (0x00009a14) main_pane_set_t2_copy1

0x1357,	// (0x00009aff) main_pane_set_t3_copy1

0x1365,	// (0x00009b0d) main_pane_set_t4_copy1

0x1289,	// (0x00009a31) set_content_pane_g1_copy1_ParamLimits

0x1289,	// (0x00009a31) set_content_pane_g1_copy1

0x1373,	// (0x00009b1b) setting_code_pane_copy1

0x137b,	// (0x00009b23) setting_slider_graphic_pane_copy1

0x137b,	// (0x00009b23) setting_slider_pane_copy1

0x137b,	// (0x00009b23) setting_text_pane_copy1

0x137b,	// (0x00009b23) setting_volume_pane_copy1

0x1383,	// (0x00009b2b) settings_code_pane_cp2_copy1

0x138b,	// (0x00009b33) settings_code_pane_cp_copy1_ParamLimits

0x138b,	// (0x00009b33) settings_code_pane_cp_copy1

0x8549,	// (0x00010cf1) volume_set_pane_copy1

0x13a7,	// (0x00009b4f) volume_set_pane_g10_copy1

0x13af,	// (0x00009b57) volume_set_pane_g1_copy1

0x13b7,	// (0x00009b5f) volume_set_pane_g2_copy1

0x13bf,	// (0x00009b67) volume_set_pane_g3_copy1

0x13c7,	// (0x00009b6f) volume_set_pane_g4_copy1

0x13cf,	// (0x00009b77) volume_set_pane_g5_copy1

0x13d7,	// (0x00009b7f) volume_set_pane_g6_copy1

0x13df,	// (0x00009b87) volume_set_pane_g7_copy1

0x13e7,	// (0x00009b8f) volume_set_pane_g8_copy1

0x13ef,	// (0x00009b97) volume_set_pane_g9_copy1

0x8960,	// (0x00011108) bg_set_opt_pane_cp_copy1_ParamLimits

0x8960,	// (0x00011108) bg_set_opt_pane_cp_copy1

0x8551,	// (0x00010cf9) setting_slider_pane_t1_copy1_ParamLimits

0x8551,	// (0x00010cf9) setting_slider_pane_t1_copy1

0x8568,	// (0x00010d10) setting_slider_pane_t2_copy1_ParamLimits

0x8568,	// (0x00010d10) setting_slider_pane_t2_copy1

0x8581,	// (0x00010d29) setting_slider_pane_t3_copy1_ParamLimits

0x8581,	// (0x00010d29) setting_slider_pane_t3_copy1

0x6869,	// (0x0000f011) slider_set_pane_copy1_ParamLimits

0x6869,	// (0x0000f011) slider_set_pane_copy1

0x977f,	// (0x00011f27) set_opt_bg_pane_g1_copy2

0x9787,	// (0x00011f2f) set_opt_bg_pane_g2_copy2

0x143e,	// (0x00009be6) set_opt_bg_pane_g3_copy2

0x9797,	// (0x00011f3f) set_opt_bg_pane_g4_copy2

0x979f,	// (0x00011f47) set_opt_bg_pane_g5_copy2

0x97a7,	// (0x00011f4f) set_opt_bg_pane_g6_copy2

0x1446,	// (0x00009bee) set_opt_bg_pane_g7_copy2

0x144e,	// (0x00009bf6) set_opt_bg_pane_g8_copy2

0x1456,	// (0x00009bfe) set_opt_bg_pane_g9_copy2

0x75f0,	// (0x0000fd98) aid_size_touch_slider_mark_copy1_ParamLimits

0x75f0,	// (0x0000fd98) aid_size_touch_slider_mark_copy1

0xc189,	// (0x00014931) slider_set_pane_g1_copy1

0xc1ab,	// (0x00014953) slider_set_pane_g2_copy1

0x7610,	// (0x0000fdb8) slider_set_pane_g3_copy1_ParamLimits

0x7610,	// (0x0000fdb8) slider_set_pane_g3_copy1

0x7624,	// (0x0000fdcc) slider_set_pane_g4_copy1_ParamLimits

0x7624,	// (0x0000fdcc) slider_set_pane_g4_copy1

0x763c,	// (0x0000fde4) slider_set_pane_g5_copy1_ParamLimits

0x763c,	// (0x0000fde4) slider_set_pane_g5_copy1

0x7610,	// (0x0000fdb8) slider_set_pane_g6_copy1_ParamLimits

0x7610,	// (0x0000fdb8) slider_set_pane_g6_copy1

0x8598,	// (0x00010d40) slider_set_pane_g7_copy1_ParamLimits

0x8598,	// (0x00010d40) slider_set_pane_g7_copy1

0x8880,	// (0x00011028) bg_set_opt_pane_cp2_copy1

0x89a2,	// (0x0001114a) setting_slider_graphic_pane_g1_copy1

0x85ae,	// (0x00010d56) setting_slider_graphic_pane_t1_copy1

0x85bd,	// (0x00010d65) setting_slider_graphic_pane_t2_copy1

0x85cc,	// (0x00010d74) slider_set_pane_cp_copy1

0x14a2,	// (0x00009c4a) input_focus_pane_cp1_copy1

0x14ab,	// (0x00009c53) list_set_text_pane_copy1

0x14b3,	// (0x00009c5b) setting_text_pane_g1_copy1

0x14bc,	// (0x00009c64) set_text_pane_t1_copy1

0x14a2,	// (0x00009c4a) input_focus_pane_cp2_copy1

0x14b3,	// (0x00009c5b) setting_code_pane_g1_copy1

0x14d5,	// (0x00009c7d) setting_code_pane_t1_copy1

0x14e3,	// (0x00009c8b) list_set_graphic_pane_copy1

0x8880,	// (0x00011028) bg_set_opt_pane_cp4_copy1

0xa1a0,	// (0x00012948) list_set_graphic_pane_g1_copy1_ParamLimits

0xa1a0,	// (0x00012948) list_set_graphic_pane_g1_copy1

0x14f8,	// (0x00009ca0) list_set_graphic_pane_g2_copy1

0xa1b8,	// (0x00012960) list_set_graphic_pane_t1_copy1_ParamLimits

0xa1b8,	// (0x00012960) list_set_graphic_pane_t1_copy1

0xd416,	// (0x00015bbe) rs_clock_indi_pane_g1

0x1500,	// (0x00009ca8) rs_clock_indi_pane_t1

0x150e,	// (0x00009cb6) rs_indi_pane

0x1516,	// (0x00009cbe) rs_indi_pane_g1

0x151f,	// (0x00009cc7) rs_indi_pane_g2

0x11de,	// (0x00009986) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x0001864c) rs_indi_pane_g

0xa446,	// (0x00012bee) bg_popup_preview_window_pane_cp03

0x1528,	// (0x00009cd0) popup_fep_tooltip_window_t1

0xe201,	// (0x000169a9) popup_note2_window_g2_ParamLimits

0xe201,	// (0x000169a9) popup_note2_window_g2

0x0001,

0xfc38,	// (0x000183e0) popup_note2_window_g_ParamLimits

0xfc38,	// (0x000183e0) popup_note2_window_g

0xe7e2,	// (0x00016f8a) bg_popup_sub_pane_cp11_ParamLimits

0xe7ef,	// (0x00016f97) cell_ai3_links_pane_g1_ParamLimits

0xe806,	// (0x00016fae) cell_ai3_links_pane_t1

0x14bc,	// (0x00009c64) set_text_pane_t1_copy1_ParamLimits

0xa36d,	// (0x00012b15) cell_graphic_popup_pane_cp2_ParamLimits

0xa36d,	// (0x00012b15) cell_graphic_popup_pane_cp2

0x1536,	// (0x00009cde) cell_graphic_popup_pane_g1_cp2

0x8f42,	// (0x000116ea) cell_graphic_popup_pane_g2_cp2

0x153e,	// (0x00009ce6) cell_graphic_popup_pane_g3_cp2

0x1546,	// (0x00009cee) cell_graphic_popup_pane_t2_cp2

0x8f53,	// (0x000116fb) grid_highlight_pane_cp3_cp2

0x9b7c,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x965c,	// (0x00011e04) main_tmo_pane_ParamLimits

0xeb4d,	// (0x000172f5) popup_tmo_big_image_note_window

0x09ce,	// (0x00009176) cell_ai5_widget_list_pane

0x09d6,	// (0x0000917e) cell_ai5_widget_lrg_icon_pane

0x111c,	// (0x000098c4) tmo_note_info_pane_t1_ParamLimits

0x1131,	// (0x000098d9) tmo_note_info_pane_t2_ParamLimits

0x1146,	// (0x000098ee) tmo_note_info_pane_t3_ParamLimits

0x115b,	// (0x00009903) tmo_note_info_pane_t4_ParamLimits

0x116d,	// (0x00009915) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x0001863a) tmo_note_info_pane_t_ParamLimits

0x1295,	// (0x00009a3d) settings_container_pane_ParamLimits

0x149a,	// (0x00009c42) indicator_popup_pane_cp5

0x149a,	// (0x00009c42) indicator_popup_pane_cp6

0x14e3,	// (0x00009c8b) list_set_graphic_pane_copy1_ParamLimits

0x878f,	// (0x00010f37) bg_popup_window_pane_cp23

0x1554,	// (0x00009cfc) popup_tmo_big_image_note_window_g1

0x155d,	// (0x00009d05) popup_tmo_big_image_note_window_t1

0x156b,	// (0x00009d13) popup_tmo_big_image_note_window_t2

0x1579,	// (0x00009d21) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x00018653) popup_tmo_big_image_note_window_t

0xd416,	// (0x00015bbe) cell_ai5_widget_lrg_icon_pane_g1

0x1587,	// (0x00009d2f) cell_ai5_widget_lrg_icon_pane_t1

0x1595,	// (0x00009d3d) cell_ai5_widget_list_row_pane_ParamLimits

0x1595,	// (0x00009d3d) cell_ai5_widget_list_row_pane

0x15ac,	// (0x00009d54) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x15ac,	// (0x00009d54) cell_ai5_widget_list_row_pane_g1

0x15b9,	// (0x00009d61) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x15b9,	// (0x00009d61) cell_ai5_widget_list_row_pane_t1

0x15e7,	// (0x00009d8f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x15e7,	// (0x00009d8f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x0001865a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x0001865a) cell_ai5_widget_list_row_pane_t

0x6612,	// (0x0000edba) main_fep_vtchi_ss_pane

0x1636,	// (0x00009dde) popup_fep_char_pre_window

0x163e,	// (0x00009de6) popup_fep_ituss_window

0x1666,	// (0x00009e0e) popup_fep_vkbss_window

0x16a2,	// (0x00009e4a) grid_vkbss_keypad_pane_ParamLimits

0x16a2,	// (0x00009e4a) grid_vkbss_keypad_pane

0x16b2,	// (0x00009e5a) ituss_keypad_pane

0x85de,	// (0x00010d86) aid_vkbss_key_offset_ParamLimits

0x85de,	// (0x00010d86) aid_vkbss_key_offset

0x85ea,	// (0x00010d92) cell_vkbss_key_pane_ParamLimits

0x85ea,	// (0x00010d92) cell_vkbss_key_pane

0x170b,	// (0x00009eb3) bg_cell_vkbss_key_g1_ParamLimits

0x170b,	// (0x00009eb3) bg_cell_vkbss_key_g1

0x1717,	// (0x00009ebf) cell_vkbss_key_3p_pane_ParamLimits

0x1717,	// (0x00009ebf) cell_vkbss_key_3p_pane

0x174d,	// (0x00009ef5) cell_vkbss_key_g1_ParamLimits

0x174d,	// (0x00009ef5) cell_vkbss_key_g1

0x1783,	// (0x00009f2b) cell_vkbss_key_t1_ParamLimits

0x1783,	// (0x00009f2b) cell_vkbss_key_t1

0x861e,	// (0x00010dc6) cell_ituss_key_pane_ParamLimits

0x861e,	// (0x00010dc6) cell_ituss_key_pane

0x1804,	// (0x00009fac) bg_cell_ituss_key_g1_ParamLimits

0x1804,	// (0x00009fac) bg_cell_ituss_key_g1

0x1810,	// (0x00009fb8) cell_ituss_key_pane_g1_ParamLimits

0x1810,	// (0x00009fb8) cell_ituss_key_pane_g1

0x862f,	// (0x00010dd7) cell_ituss_key_pane_g2_ParamLimits

0x862f,	// (0x00010dd7) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x00018661) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x00018661) cell_ituss_key_pane_g

0x86b3,	// (0x00010e5b) cell_ituss_key_t1_ParamLimits

0x86b3,	// (0x00010e5b) cell_ituss_key_t1

0x86e9,	// (0x00010e91) cell_ituss_key_t2_ParamLimits

0x86e9,	// (0x00010e91) cell_ituss_key_t2

0x871a,	// (0x00010ec2) cell_ituss_key_t3_ParamLimits

0x871a,	// (0x00010ec2) cell_ituss_key_t3

0x86e9,	// (0x00010e91) cell_ituss_key_t4_ParamLimits

0x86e9,	// (0x00010e91) cell_ituss_key_t4

0x0004,

0xfec6,	// (0x0001866e) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x0001866e) cell_ituss_key_t

0x1974,	// (0x0000a11c) cell_vkbss_key_3p_pane_g1

0x196c,	// (0x0000a114) cell_vkbss_key_3p_pane_g2

0x1964,	// (0x0000a10c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed1,	// (0x00018679) cell_vkbss_key_3p_pane_g

0xa446,	// (0x00012bee) bg_popup_fep_char_preview_window_cp02

0x197c,	// (0x0000a124) popup_fep_char_pre_window_t1

0x097c,	// (0x00009124) main_ai5_sk_pane

0x11e7,	// (0x0000998f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x11f3,	// (0x0000999b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1208,	// (0x000099b0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1214,	// (0x000099bc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x00018645) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1220,	// (0x000099c8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x965c,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x198a,	// (0x0000a132) main_ai5_sk_pane_g1

0xb1c0,	// (0x00013968) popup_query_code_window_g1

0x1650,	// (0x00009df8) popup_fep_vkb_icf_pane

0x1679,	// (0x00009e21) popup_fep_vtchi_icf_pane

0xa795,	// (0x00012f3d) bg_icf_pane

0xa795,	// (0x00012f3d) list_vkb_icf_pane

0x1993,	// (0x0000a13b) bg_icf_pane_cp01

0x19a6,	// (0x0000a14e) vtchi_icf_list_pane

0x19f6,	// (0x0000a19e) list_vkb_icf_pane_t1_ParamLimits

0x19f6,	// (0x0000a19e) list_vkb_icf_pane_t1

0x1a0f,	// (0x0000a1b7) vtchi_icf_list_pane_t1_ParamLimits

0x1a0f,	// (0x0000a1b7) vtchi_icf_list_pane_t1

0x163e,	// (0x00009de6) popup_fep_ituss_window_ParamLimits

0x1679,	// (0x00009e21) popup_fep_vtchi_icf_pane_ParamLimits

0x16b2,	// (0x00009e5a) ituss_keypad_pane_ParamLimits

0x85d4,	// (0x00010d7c) ituss_sks_pane

0xa795,	// (0x00012f3d) bg_icf_pane_ParamLimits

0x160f,	// (0x00009db7) icf_edit_indi_pane_ParamLimits

0x160f,	// (0x00009db7) icf_edit_indi_pane

0xa795,	// (0x00012f3d) list_vkb_icf_pane_ParamLimits

0x1993,	// (0x0000a13b) bg_icf_pane_cp01_ParamLimits

0x1629,	// (0x00009dd1) icf_edit_indi_pane_cp01_ParamLimits

0x1629,	// (0x00009dd1) icf_edit_indi_pane_cp01

0x19ae,	// (0x0000a156) vtchi_query_pane

0x07eb,	// (0x00008f93) icf_edit_indi_pane_g1_ParamLimits

0x07eb,	// (0x00008f93) icf_edit_indi_pane_g1

0x1a99,	// (0x0000a241) icf_edit_indi_pane_g2_ParamLimits

0x1a99,	// (0x0000a241) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x000186a4) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x000186a4) icf_edit_indi_pane_g

0x1aad,	// (0x0000a255) icf_edit_indi_pane_t1

0x1a27,	// (0x0000a1cf) bg_input_focus_pane_cp042

0x1a30,	// (0x0000a1d8) vtchi_button_pane

0x1a39,	// (0x0000a1e1) vtchi_query_pane_t1

0x1a47,	// (0x0000a1ef) vtchi_query_pane_t2

0x1a55,	// (0x0000a1fd) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x00018693) vtchi_query_pane_t

0x6612,	// (0x0000edba) bg_button_pane_cp13

0x1a63,	// (0x0000a20b) vtchi_button_pane_g1

0x875d,	// (0x00010f05) ituss_sks_pane_g1

0x8766,	// (0x00010f0e) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x0001869a) ituss_sks_pane_g

0x1a8b,	// (0x0000a233) ituss_sks_pane_t1

0x1a7d,	// (0x0000a225) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0001869f) ituss_sks_pane_t

0xcf11,	// (0x000156b9) indicator_nsta_pane_cp_g1

0xcf1a,	// (0x000156c2) indicator_nsta_pane_cp_g2

0xcf22,	// (0x000156ca) indicator_nsta_pane_cp_g3

0xcf2a,	// (0x000156d2) indicator_nsta_pane_cp_g4

0xcf32,	// (0x000156da) indicator_nsta_pane_cp_g5

0xcf3a,	// (0x000156e2) indicator_nsta_pane_cp_g6

0x0005,

0xfa76,	// (0x0001821e) indicator_nsta_pane_cp_g

0x0402,	// (0x00008baa) cell_graphic2_pane_t2_ParamLimits

0x0402,	// (0x00008baa) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x00018530) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x00018530) cell_graphic2_pane_t

0x042e,	// (0x00008bd6) cell_graphic2_control_pane_t1

0x9ed4,	// (0x0001267c) signal_pane_g3_ParamLimits

0x9ed4,	// (0x0001267c) signal_pane_g3

0x9ee5,	// (0x0001268d) signal_pane_g4_ParamLimits

0x9ee5,	// (0x0001268d) signal_pane_g4

0x15f9,	// (0x00009da1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x15f9,	// (0x00009da1) cell_ai5_widget_list_row_pane_t3

0x18a8,	// (0x0000a050) cell_ituss_key_pane_t1_ParamLimits

0x18a8,	// (0x0000a050) cell_ituss_key_pane_t1

0xae36,	// (0x000135de) form_field_data_wide_pane_vc_t2_ParamLimits

0xae36,	// (0x000135de) form_field_data_wide_pane_vc_t2

0xae48,	// (0x000135f0) form_field_data_wide_pane_vc_t3_ParamLimits

0xae48,	// (0x000135f0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d5,	// (0x00017f7d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d5,	// (0x00017f7d) form_field_data_wide_pane_vc_t

0xcbfe,	// (0x000153a6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xcbfe,	// (0x000153a6) form_field_slider_wide_pane_vc_t3

0xccbc,	// (0x00015464) form_field_popup_wide_pane_vc_t2_ParamLimits

0xccbc,	// (0x00015464) form_field_popup_wide_pane_vc_t2

0xccd1,	// (0x00015479) form_field_popup_wide_pane_vc_t3_ParamLimits

0xccd1,	// (0x00015479) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa65,	// (0x0001820d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x0001820d) form_field_popup_wide_pane_vc_t

0x83e7,	// (0x00010b8f) aid_fshwr2_btn_pane_ParamLimits

0x83f3,	// (0x00010b9b) aid_fshwr2_syb_pane_ParamLimits

0x8405,	// (0x00010bad) aid_fshwr2_txt_pane_ParamLimits

0x7cb0,	// (0x00010458) fshwr2_bg_pane_ParamLimits

0x8411,	// (0x00010bb9) fshwr2_func_candi_pane_ParamLimits

0x8425,	// (0x00010bcd) fshwr2_hwr_syb_pane_ParamLimits

0x8437,	// (0x00010bdf) fshwr2_icf_pane_ParamLimits

0xcb79,	// (0x00015321) list_double_graphic_pane_vc_g4_ParamLimits

0xcb79,	// (0x00015321) list_double_graphic_pane_vc_g4

0x864f,	// (0x00010df7) cell_ituss_key_pane_g3_ParamLimits

0x864f,	// (0x00010df7) cell_ituss_key_pane_g3

0x874b,	// (0x00010ef3) cell_ituss_key_t5_ParamLimits

0x874b,	// (0x00010ef3) cell_ituss_key_t5

0x1666,	// (0x00009e0e) popup_fep_vkbss_window_ParamLimits

0x0986,	// (0x0000912e) aid_cell_ai5_quarter

0x1aad,	// (0x0000a255) icf_edit_indi_pane_t1_ParamLimits

0x8cb0,	// (0x00011458) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8cb0,	// (0x00011458) aid_tch_indicator_popup_pane_cp2

0x8cc3,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8cc3,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2

0xb168,	// (0x00013910) aid_tch_query_popup_pane_ParamLimits

0xb168,	// (0x00013910) aid_tch_query_popup_pane

0xb168,	// (0x00013910) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb168,	// (0x00013910) aid_tch_query_popup_data_pane_cp1

0xa795,	// (0x00012f3d) cell_fshwr2_syb_bg_pane_ParamLimits

0x8516,	// (0x00010cbe) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x852a,	// (0x00010cd2) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x1650,	// (0x00009df8) popup_fep_vkb_icf_pane_ParamLimits

0x825a,	// (0x00010a02) bg_popup_fep_char_preview_window_g10

0x0a95,	// (0x0000923d) cell_ai5_widget_pane_g11_ParamLimits

0x0a95,	// (0x0000923d) cell_ai5_widget_pane_g11

0x0aa1,	// (0x00009249) cell_ai5_widget_pane_g12_ParamLimits

0x0aa1,	// (0x00009249) cell_ai5_widget_pane_g12

0x0aad,	// (0x00009255) cell_ai5_widget_pane_g13_ParamLimits

0x0aad,	// (0x00009255) cell_ai5_widget_pane_g13

0x0bdb,	// (0x00009383) cell_ai5_widget_pane_t11_ParamLimits

0x0bdb,	// (0x00009383) cell_ai5_widget_pane_t11

0x0bed,	// (0x00009395) cell_ai5_widget_pane_t12_ParamLimits

0x0bed,	// (0x00009395) cell_ai5_widget_pane_t12

0x865b,	// (0x00010e03) cell_ituss_key_pane_g4_ParamLimits

0x865b,	// (0x00010e03) cell_ituss_key_pane_g4

0x8677,	// (0x00010e1f) cell_ituss_key_pane_g5_ParamLimits

0x8677,	// (0x00010e1f) cell_ituss_key_pane_g5

0x8693,	// (0x00010e3b) cell_ituss_key_pane_g6_ParamLimits

0x8693,	// (0x00010e3b) cell_ituss_key_pane_g6

0xac92,	// (0x0001343a) bg_icf_pane_g1

0x19b6,	// (0x0000a15e) bg_icf_pane_g2

0x19be,	// (0x0000a166) bg_icf_pane_g3

0x19c6,	// (0x0000a16e) bg_icf_pane_g4

0x19ce,	// (0x0000a176) bg_icf_pane_g5

0x19d6,	// (0x0000a17e) bg_icf_pane_g6

0x19de,	// (0x0000a186) bg_icf_pane_g7

0x19e6,	// (0x0000a18e) bg_icf_pane_g8

0x19ee,	// (0x0000a196) bg_icf_pane_g9

0x0008,

0xfed8,	// (0x00018680) bg_icf_pane_g

0x168f,	// (0x00009e37) popup_hyb_candi_window_ParamLimits

0x168f,	// (0x00009e37) popup_hyb_candi_window

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp01_ParamLimits

0xadaa,	// (0x00013552) bg_popup_sub_pane_cp01

0x1acb,	// (0x0000a273) entry_hyb_candi_pane_ParamLimits

0x1acb,	// (0x0000a273) entry_hyb_candi_pane

0x1ada,	// (0x0000a282) grid_hyb_candi_pane_ParamLimits

0x1ada,	// (0x0000a282) grid_hyb_candi_pane

0x1aef,	// (0x0000a297) grid_hyb_phrase_pane_ParamLimits

0x1aef,	// (0x0000a297) grid_hyb_phrase_pane

0x1afe,	// (0x0000a2a6) cell_hyb_candi_pane_ParamLimits

0x1afe,	// (0x0000a2a6) cell_hyb_candi_pane

0x1b16,	// (0x0000a2be) cell_hyb_candi_scroll_pane

0x9e2a,	// (0x000125d2) cell_hyb_candi_pane_g1

0x1b1f,	// (0x0000a2c7) cell_hyb_candi_pane_t1

0x1b2d,	// (0x0000a2d5) cell_hyb_phrase_pane

0x9e2a,	// (0x000125d2) cell_hyb_phrase_pane_g1

0x1b36,	// (0x0000a2de) cell_hyb_phrase_pane_t1

0x1b44,	// (0x0000a2ec) entry_hyb_candi_pane_t1

0xa446,	// (0x00012bee) input_focus_pane_cp06

0x1b52,	// (0x0000a2fa) cell_hyb_candi_scroll_pane_g1

0x1b5a,	// (0x0000a302) cell_hyb_candi_scroll_pane_g1_aid

0x1b62,	// (0x0000a30a) cell_hyb_candi_scroll_pane_g2

0x1b6a,	// (0x0000a312) cell_hyb_candi_scroll_pane_g2_aid

0x1b72,	// (0x0000a31a) cell_hyb_candi_scroll_pane_g3

0x1b7a,	// (0x0000a322) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal

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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001096e };

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
0xc234,	// (0x0001cba2) Screen

0xc240,	// (0x0001cbae) application_window_ParamLimits

0xc240,	// (0x0001cbae) application_window

0xe690,	// (0x0001effe) screen_g1

0xb13d,	// (0x0001baab) area_bottom_pane_ParamLimits

0xb13d,	// (0x0001baab) area_bottom_pane

0xee6a,	// (0x0001f7d8) area_top_pane_ParamLimits

0xee6a,	// (0x0001f7d8) area_top_pane

0xef08,	// (0x0001f876) main_pane_ParamLimits

0xef08,	// (0x0001f876) main_pane

0x1d3c,	// (0x000126aa) misc_graphics

0xce73,	// (0x0001d7e1) battery_pane_ParamLimits

0xce73,	// (0x0001d7e1) battery_pane

0x4cb4,	// (0x00015622) bg_status_flat_pane_g8

0x4cbc,	// (0x0001562a) bg_status_flat_pane_g9

0x3f99,	// (0x00014907) context_pane_ParamLimits

0x3f99,	// (0x00014907) context_pane

0xcfde,	// (0x0001d94c) navi_pane_ParamLimits

0xcfde,	// (0x0001d94c) navi_pane

0xd05c,	// (0x0001d9ca) signal_pane_ParamLimits

0xd05c,	// (0x0001d9ca) signal_pane

0x0008,

0xf84a,	// (0x000201b8) bg_status_flat_pane_g

0xd0ec,	// (0x0001da5a) status_pane_g1_ParamLimits

0xd0ec,	// (0x0001da5a) status_pane_g1

0xd102,	// (0x0001da70) status_pane_g2_ParamLimits

0xd102,	// (0x0001da70) status_pane_g2

0x41c0,	// (0x00014b2e) status_pane_g3_ParamLimits

0x41c0,	// (0x00014b2e) status_pane_g3

0x0004,

0xf776,	// (0x000200e4) status_pane_g_ParamLimits

0xf776,	// (0x000200e4) status_pane_g

0xd10e,	// (0x0001da7c) title_pane_ParamLimits

0xd10e,	// (0x0001da7c) title_pane

0xd171,	// (0x0001dadf) uni_indicator_pane_ParamLimits

0xd171,	// (0x0001dadf) uni_indicator_pane

0x3df1,	// (0x0001475f) bg_list_pane_ParamLimits

0x3df1,	// (0x0001475f) bg_list_pane

0x3e11,	// (0x0001477f) find_pane

0x4483,	// (0x00014df1) listscroll_app_pane_ParamLimits

0x4483,	// (0x00014df1) listscroll_app_pane

0x3e25,	// (0x00014793) listscroll_form_pane

0x0156,	// (0x00010ac4) listscroll_gen_pane_ParamLimits

0x0156,	// (0x00010ac4) listscroll_gen_pane

0x016a,	// (0x00010ad8) listscroll_set_pane

0x5847,	// (0x000161b5) main_idle_act_pane

0x3aed,	// (0x0001445b) main_idle_trad_pane

0x3aed,	// (0x0001445b) main_list_empty_pane

0x3e19,	// (0x00014787) main_midp_pane

0x3e3f,	// (0x000147ad) main_pane_g1_ParamLimits

0x3e3f,	// (0x000147ad) main_pane_g1

0xb49a,	// (0x0001be08) popup_ai_message_window_ParamLimits

0xb49a,	// (0x0001be08) popup_ai_message_window

0xb52b,	// (0x0001be99) popup_fep_china_uni_window_ParamLimits

0xb52b,	// (0x0001be99) popup_fep_china_uni_window

0x0282,	// (0x00010bf0) popup_fep_japan_candidate_window_ParamLimits

0x0282,	// (0x00010bf0) popup_fep_japan_candidate_window

0x02a2,	// (0x00010c10) popup_fep_japan_predictive_window_ParamLimits

0x02a2,	// (0x00010c10) popup_fep_japan_predictive_window

0xb587,	// (0x0001bef5) popup_find_window

0xb5a4,	// (0x0001bf12) popup_grid_graphic_window_ParamLimits

0xb5a4,	// (0x0001bf12) popup_grid_graphic_window

0x030b,	// (0x00010c79) popup_large_graphic_colour_window

0xb648,	// (0x0001bfb6) popup_menu_window_ParamLimits

0xb648,	// (0x0001bfb6) popup_menu_window

0xb81a,	// (0x0001c188) popup_note_image_window

0xb7e0,	// (0x0001c14e) popup_note_wait_window_ParamLimits

0xb7e0,	// (0x0001c14e) popup_note_wait_window

0xb832,	// (0x0001c1a0) popup_note_window_ParamLimits

0xb832,	// (0x0001c1a0) popup_note_window

0xb8d8,	// (0x0001c246) popup_query_code_window_ParamLimits

0xb8d8,	// (0x0001c246) popup_query_code_window

0x0553,	// (0x00010ec1) popup_query_data_code_window_ParamLimits

0x0553,	// (0x00010ec1) popup_query_data_code_window

0xb912,	// (0x0001c280) popup_query_data_window_ParamLimits

0xb912,	// (0x0001c280) popup_query_data_window

0xb994,	// (0x0001c302) popup_query_sat_info_window_ParamLimits

0xb994,	// (0x0001c302) popup_query_sat_info_window

0xba2b,	// (0x0001c399) popup_snote_single_graphic_window_ParamLimits

0xba2b,	// (0x0001c399) popup_snote_single_graphic_window

0xba2b,	// (0x0001c399) popup_snote_single_text_window_ParamLimits

0xba2b,	// (0x0001c399) popup_snote_single_text_window

0x05da,	// (0x00010f48) popup_sub_window_general

0x070a,	// (0x00011078) popup_window_general_ParamLimits

0x070a,	// (0x00011078) popup_window_general

0x3e55,	// (0x000147c3) power_save_pane

0xb31b,	// (0x0001bc89) control_pane_g1_ParamLimits

0xb31b,	// (0x0001bc89) control_pane_g1

0xb344,	// (0x0001bcb2) control_pane_g2_ParamLimits

0xb344,	// (0x0001bcb2) control_pane_g2

0x3db4,	// (0x00014722) control_pane_g3_ParamLimits

0x3db4,	// (0x00014722) control_pane_g3

0x0007,

0xf75e,	// (0x000200cc) control_pane_g_ParamLimits

0xf75e,	// (0x000200cc) control_pane_g

0xb385,	// (0x0001bcf3) control_pane_t1_ParamLimits

0xb385,	// (0x0001bcf3) control_pane_t1

0xb3ed,	// (0x0001bd5b) control_pane_t2_ParamLimits

0xb3ed,	// (0x0001bd5b) control_pane_t2

0x0002,

0xf76f,	// (0x000200dd) control_pane_t_ParamLimits

0xf76f,	// (0x000200dd) control_pane_t

0xcd20,	// (0x0001d68e) navi_navi_volume_pane_cp1

0xcd28,	// (0x0001d696) status_small_icon_pane

0x3ce9,	// (0x00014657) status_small_pane_g1_ParamLimits

0x3ce9,	// (0x00014657) status_small_pane_g1

0xcd30,	// (0x0001d69e) status_small_pane_g2_ParamLimits

0xcd30,	// (0x0001d69e) status_small_pane_g2

0xcd3c,	// (0x0001d6aa) status_small_pane_g3_ParamLimits

0xcd3c,	// (0x0001d6aa) status_small_pane_g3

0xcd48,	// (0x0001d6b6) status_small_pane_g4_ParamLimits

0xcd48,	// (0x0001d6b6) status_small_pane_g4

0xcd54,	// (0x0001d6c2) status_small_pane_g5_ParamLimits

0xcd54,	// (0x0001d6c2) status_small_pane_g5

0xcd62,	// (0x0001d6d0) status_small_pane_g6_ParamLimits

0xcd62,	// (0x0001d6d0) status_small_pane_g6

0x0007,

0xf74d,	// (0x000200bb) status_small_pane_g_ParamLimits

0xf74d,	// (0x000200bb) status_small_pane_g

0xcd91,	// (0x0001d6ff) status_small_pane_t1

0xcdb3,	// (0x0001d721) status_small_wait_pane_ParamLimits

0xcdb3,	// (0x0001d721) status_small_wait_pane

0xcba5,	// (0x0001d513) aid_levels_signal_ParamLimits

0xcba5,	// (0x0001d513) aid_levels_signal

0xcbbd,	// (0x0001d52b) signal_pane_g1_ParamLimits

0xcbbd,	// (0x0001d52b) signal_pane_g1

0xcbd8,	// (0x0001d546) signal_pane_g2_ParamLimits

0xcbd8,	// (0x0001d546) signal_pane_g2

0x0003,

0xf6de,	// (0x0002004c) signal_pane_g_ParamLimits

0xf6de,	// (0x0002004c) signal_pane_g

0x3532,	// (0x00013ea0) context_pane_g1

0xc250,	// (0x0001cbbe) title_pane_g1

0xc287,	// (0x0001cbf5) title_pane_t1

0x1de4,	// (0x00012752) title_pane_t2

0x1e0a,	// (0x00012778) title_pane_t3

0x0002,

0xf532,	// (0x0001fea0) title_pane_t

0xd199,	// (0x0001db07) aid_levels_battery_ParamLimits

0xd199,	// (0x0001db07) aid_levels_battery

0xd1b5,	// (0x0001db23) battery_pane_g1_ParamLimits

0xd1b5,	// (0x0001db23) battery_pane_g1

0xd1d2,	// (0x0001db40) battery_pane_g2_ParamLimits

0xd1d2,	// (0x0001db40) battery_pane_g2

0x0001,

0xf781,	// (0x000200ef) battery_pane_g_ParamLimits

0xf781,	// (0x000200ef) battery_pane_g

0xd3a9,	// (0x0001dd17) uni_indicator_pane_g1

0xd3bf,	// (0x0001dd2d) uni_indicator_pane_g2

0xd3d5,	// (0x0001dd43) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x00020260) uni_indicator_pane_g

0x3962,	// (0x000142d0) navi_icon_pane_ParamLimits

0x3962,	// (0x000142d0) navi_icon_pane

0x38a0,	// (0x0001420e) navi_midp_pane

0x397e,	// (0x000142ec) navi_navi_pane

0x3988,	// (0x000142f6) navi_text_pane_ParamLimits

0x3988,	// (0x000142f6) navi_text_pane

0xe690,	// (0x0001effe) status_small_wait_pane_g1

0x2279,	// (0x00012be7) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0002025b) status_small_wait_pane_g

0x530f,	// (0x00015c7d) navi_navi_icon_text_pane

0x5317,	// (0x00015c85) navi_navi_pane_g1_ParamLimits

0x5317,	// (0x00015c85) navi_navi_pane_g1

0x5329,	// (0x00015c97) navi_navi_pane_g2_ParamLimits

0x5329,	// (0x00015c97) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x00020229) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x00020229) navi_navi_pane_g

0x533b,	// (0x00015ca9) navi_navi_tabs_pane

0x5344,	// (0x00015cb2) navi_navi_text_pane

0x530f,	// (0x00015c7d) navi_navi_volume_pane

0x52eb,	// (0x00015c59) navi_text_pane_t1

0x52df,	// (0x00015c4d) navi_icon_pane_g1

0x5232,	// (0x00015ba0) navi_navi_text_pane_t1

0x0a22,	// (0x00011390) navi_navi_volume_pane_g1

0x0a2a,	// (0x00011398) volume_small_pane

0x5198,	// (0x00015b06) navi_navi_icon_text_pane_g1

0x51a0,	// (0x00015b0e) navi_navi_icon_text_pane_t1

0x397e,	// (0x000142ec) navi_tabs_2_long_pane

0x397e,	// (0x000142ec) navi_tabs_2_pane

0x397e,	// (0x000142ec) navi_tabs_3_long_pane

0x397e,	// (0x000142ec) navi_tabs_3_pane

0x397e,	// (0x000142ec) navi_tabs_4_pane

0x0a02,	// (0x00011370) tabs_2_active_pane_ParamLimits

0x0a02,	// (0x00011370) tabs_2_active_pane

0x0a12,	// (0x00011380) tabs_2_passive_pane_ParamLimits

0x0a12,	// (0x00011380) tabs_2_passive_pane

0x09d0,	// (0x0001133e) tabs_3_active_pane_ParamLimits

0x09d0,	// (0x0001133e) tabs_3_active_pane

0x09e0,	// (0x0001134e) tabs_3_passive_pane_ParamLimits

0x09e0,	// (0x0001134e) tabs_3_passive_pane

0x09f1,	// (0x0001135f) tabs_3_passive_pane_cp_ParamLimits

0x09f1,	// (0x0001135f) tabs_3_passive_pane_cp

0x098c,	// (0x000112fa) tabs_4_active_pane_ParamLimits

0x098c,	// (0x000112fa) tabs_4_active_pane

0x099d,	// (0x0001130b) tabs_4_passive_pane_ParamLimits

0x099d,	// (0x0001130b) tabs_4_passive_pane

0x09ae,	// (0x0001131c) tabs_4_passive_pane_cp_ParamLimits

0x09ae,	// (0x0001131c) tabs_4_passive_pane_cp

0x09bf,	// (0x0001132d) tabs_4_passive_pane_cp2_ParamLimits

0x09bf,	// (0x0001132d) tabs_4_passive_pane_cp2

0x0968,	// (0x000112d6) tabs_2_long_active_pane_ParamLimits

0x0968,	// (0x000112d6) tabs_2_long_active_pane

0x097a,	// (0x000112e8) tabs_2_long_passive_pane_ParamLimits

0x097a,	// (0x000112e8) tabs_2_long_passive_pane

0x0929,	// (0x00011297) tabs_3_long_active_pane_ParamLimits

0x0929,	// (0x00011297) tabs_3_long_active_pane

0x093c,	// (0x000112aa) tabs_3_long_passive_pane_ParamLimits

0x093c,	// (0x000112aa) tabs_3_long_passive_pane

0x0955,	// (0x000112c3) tabs_3_long_passive_pane_cp_ParamLimits

0x0955,	// (0x000112c3) tabs_3_long_passive_pane_cp

0x08cf,	// (0x0001123d) volume_small_pane_g1

0x08d8,	// (0x00011246) volume_small_pane_g2

0x08e1,	// (0x0001124f) volume_small_pane_g3

0x08ea,	// (0x00011258) volume_small_pane_g4

0x08f3,	// (0x00011261) volume_small_pane_g5

0x08fc,	// (0x0001126a) volume_small_pane_g6

0x0905,	// (0x00011273) volume_small_pane_g7

0x090e,	// (0x0001127c) volume_small_pane_g8

0x0917,	// (0x00011285) volume_small_pane_g9

0x0920,	// (0x0001128e) volume_small_pane_g10

0x0009,

0xf887,	// (0x000201f5) volume_small_pane_g

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp2_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp2

0x1e2a,	// (0x00012798) tabs_3_active_pane_g1

0xc313,	// (0x0001cc81) tabs_3_active_pane_t1

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp2_ParamLimits

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp2

0x1e2a,	// (0x00012798) tabs_3_passive_pane_g1

0xc313,	// (0x0001cc81) tabs_3_passive_pane_t1

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp3_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp3

0x1e44,	// (0x000127b2) tabs_4_active_pane_g1

0xc325,	// (0x0001cc93) tabs_4_active_pane_t1

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp3_ParamLimits

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp3

0x1e44,	// (0x000127b2) tabs_4_1_passive_pane_g1

0xc325,	// (0x0001cc93) tabs_4_1_passive_pane_t1

0x3e19,	// (0x00014787) list_highlight_pane_cp2

0xd45b,	// (0x0001ddc9) list_set_pane_ParamLimits

0xd45b,	// (0x0001ddc9) list_set_pane

0xd51d,	// (0x0001de8b) main_pane_set_t1_ParamLimits

0xd51d,	// (0x0001de8b) main_pane_set_t1

0xd53d,	// (0x0001deab) main_pane_set_t2_ParamLimits

0xd53d,	// (0x0001deab) main_pane_set_t2

0xd551,	// (0x0001debf) main_pane_set_t3_ParamLimits

0xd551,	// (0x0001debf) main_pane_set_t3

0xd563,	// (0x0001ded1) main_pane_set_t4_ParamLimits

0xd563,	// (0x0001ded1) main_pane_set_t4

0x0003,

0xf957,	// (0x000202c5) main_pane_set_t_ParamLimits

0xf957,	// (0x000202c5) main_pane_set_t

0xd575,	// (0x0001dee3) setting_code_pane

0xd57f,	// (0x0001deed) setting_slider_graphic_pane

0xd57f,	// (0x0001deed) setting_slider_pane

0xd57f,	// (0x0001deed) setting_text_pane

0xd57f,	// (0x0001deed) setting_volume_pane

0xf011,	// (0x0001f97f) volume_set_pane

0x1e1c,	// (0x0001278a) bg_set_opt_pane_cp

0xf019,	// (0x0001f987) setting_slider_pane_t1

0xf032,	// (0x0001f9a0) setting_slider_pane_t2

0xf04c,	// (0x0001f9ba) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001fea7) setting_slider_pane_t

0xf064,	// (0x0001f9d2) slider_set_pane

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp2

0x1e5e,	// (0x000127cc) setting_slider_graphic_pane_g1

0xf07a,	// (0x0001f9e8) setting_slider_graphic_pane_t1

0xf08a,	// (0x0001f9f8) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001feae) setting_slider_graphic_pane_t

0xf09a,	// (0x0001fa08) slider_set_pane_cp

0x1d3c,	// (0x000126aa) input_focus_pane_cp1

0x582e,	// (0x0001619c) list_set_text_pane

0xe690,	// (0x0001effe) setting_text_pane_g1

0x1d3c,	// (0x000126aa) input_focus_pane_cp2

0xe690,	// (0x0001effe) setting_code_pane_g1

0x1e67,	// (0x000127d5) setting_code_pane_t1

0x1e75,	// (0x000127e3) set_text_pane_t1_ParamLimits

0x1e75,	// (0x000127e3) set_text_pane_t1

0x2d49,	// (0x000136b7) set_opt_bg_pane_g1

0x2d51,	// (0x000136bf) set_opt_bg_pane_g2

0x5808,	// (0x00016176) set_opt_bg_pane_g3

0x2d61,	// (0x000136cf) set_opt_bg_pane_g4

0x2d69,	// (0x000136d7) set_opt_bg_pane_g5

0x2d71,	// (0x000136df) set_opt_bg_pane_g6

0x5812,	// (0x00016180) set_opt_bg_pane_g7

0x581a,	// (0x00016188) set_opt_bg_pane_g8

0x5824,	// (0x00016192) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x000202b2) set_opt_bg_pane_g

0x57fb,	// (0x00016169) slider_set_pane_g1

0x0a97,	// (0x00011405) slider_set_pane_g2

0x0006,

0xf935,	// (0x000202a3) slider_set_pane_g

0x0a33,	// (0x000113a1) volume_set_pane_g1

0x0a3b,	// (0x000113a9) volume_set_pane_g2

0x0a43,	// (0x000113b1) volume_set_pane_g3

0x0a4b,	// (0x000113b9) volume_set_pane_g4

0x0a53,	// (0x000113c1) volume_set_pane_g5

0x0a5b,	// (0x000113c9) volume_set_pane_g6

0x0a63,	// (0x000113d1) volume_set_pane_g7

0x0a6b,	// (0x000113d9) volume_set_pane_g8

0x0a73,	// (0x000113e1) volume_set_pane_g9

0x0a7b,	// (0x000113e9) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0002027b) volume_set_pane_g

0xc337,	// (0x0001cca5) indicator_pane_ParamLimits

0xc337,	// (0x0001cca5) indicator_pane

0xc35f,	// (0x0001cccd) main_idle_pane_g2_ParamLimits

0xc35f,	// (0x0001cccd) main_idle_pane_g2

0xc397,	// (0x0001cd05) main_pane_idle_g1_ParamLimits

0xc397,	// (0x0001cd05) main_pane_idle_g1

0x1ed0,	// (0x0001283e) popup_clock_digital_analogue_window_ParamLimits

0x1ed0,	// (0x0001283e) popup_clock_digital_analogue_window

0xc3be,	// (0x0001cd2c) soft_indicator_pane_ParamLimits

0xc3be,	// (0x0001cd2c) soft_indicator_pane

0xc3d8,	// (0x0001cd46) wallpaper_pane_ParamLimits

0xc3d8,	// (0x0001cd46) wallpaper_pane

0xe690,	// (0x0001effe) wallpaper_pane_g1

0xc3ea,	// (0x0001cd58) indicator_pane_g1_ParamLimits

0xc3ea,	// (0x0001cd58) indicator_pane_g1

0x5d1a,	// (0x00016688) navi_navi_icon_text_pane_srt_g1

0x1f22,	// (0x00012890) soft_indicator_pane_t1

0x1f3c,	// (0x000128aa) aid_ps_area_pane

0xc400,	// (0x0001cd6e) aid_ps_clock_pane

0x1f5b,	// (0x000128c9) aid_ps_indicator_pane

0x1f67,	// (0x000128d5) indicator_ps_pane_ParamLimits

0x1f67,	// (0x000128d5) indicator_ps_pane

0x1f76,	// (0x000128e4) power_save_pane_g1_ParamLimits

0x1f76,	// (0x000128e4) power_save_pane_g1

0x1f82,	// (0x000128f0) power_save_pane_g2_ParamLimits

0x1f82,	// (0x000128f0) power_save_pane_g2

0xee4a,	// (0x0001f7b8) aid_navinavi_width_pane

0x1f3c,	// (0x000128aa) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001feb3) power_save_pane_g_ParamLimits

0xf545,	// (0x0001feb3) power_save_pane_g

0x1f90,	// (0x000128fe) power_save_pane_t1_ParamLimits

0x1f90,	// (0x000128fe) power_save_pane_t1

0xc400,	// (0x0001cd6e) aid_ps_clock_pane_ParamLimits

0x1f5b,	// (0x000128c9) aid_ps_indicator_pane_ParamLimits

0x1fa2,	// (0x00012910) power_save_pane_t4_ParamLimits

0x1fa2,	// (0x00012910) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001feb8) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001feb8) power_save_pane_t

0x1fcc,	// (0x0001293a) power_save_t3_ParamLimits

0x1fcc,	// (0x0001293a) power_save_t3

0x1fb7,	// (0x00012925) power_save_t2_ParamLimits

0x1fb7,	// (0x00012925) power_save_t2

0x1fe1,	// (0x0001294f) indicator_ps_pane_g1

0xc40e,	// (0x0001cd7c) ai_gene_pane_ParamLimits

0xc40e,	// (0x0001cd7c) ai_gene_pane

0xc425,	// (0x0001cd93) ai_links_pane_ParamLimits

0xc425,	// (0x0001cd93) ai_links_pane

0xc43d,	// (0x0001cdab) indicator_pane_cp1_ParamLimits

0xc43d,	// (0x0001cdab) indicator_pane_cp1

0xc44c,	// (0x0001cdba) main_pane_idle_g1_cp_ParamLimits

0xc44c,	// (0x0001cdba) main_pane_idle_g1_cp

0x201a,	// (0x00012988) popup_ai_links_title_window

0xc464,	// (0x0001cdd2) soft_indicator_pane_cp1_ParamLimits

0xc464,	// (0x0001cdd2) soft_indicator_pane_cp1

0x55d8,	// (0x00015f46) ai_links_pane_g1

0x55e1,	// (0x00015f4f) grid_ai_links_pane

0xd3a0,	// (0x0001dd0e) ai_gene_pane_1

0x55c6,	// (0x00015f34) ai_gene_pane_2

0x55cf,	// (0x00015f3d) list_highlight_pane_cp4

0xd37c,	// (0x0001dcea) cell_ai_link_pane_ParamLimits

0xd37c,	// (0x0001dcea) cell_ai_link_pane

0x5597,	// (0x00015f05) cell_ai_link_pane_g1

0x2279,	// (0x00012be7) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x00020256) cell_ai_link_pane_g

0x1d3c,	// (0x000126aa) grid_highlight_cp2

0x1d3c,	// (0x000126aa) bg_popup_sub_pane_cp1

0x203d,	// (0x000129ab) popup_ai_links_title_window_t1

0x54e5,	// (0x00015e53) ai_gene_pane_1_g1_ParamLimits

0x54e5,	// (0x00015e53) ai_gene_pane_1_g1

0x54f1,	// (0x00015e5f) ai_gene_pane_1_g2_ParamLimits

0x54f1,	// (0x00015e5f) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0002024c) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0002024c) ai_gene_pane_1_g

0x54fe,	// (0x00015e6c) ai_gene_pane_1_t1_ParamLimits

0x54fe,	// (0x00015e6c) ai_gene_pane_1_t1

0x5532,	// (0x00015ea0) grid_ai_soft_ind_pane

0x54d0,	// (0x00015e3e) ai_gene_pane_2_t1_ParamLimits

0x54d0,	// (0x00015e3e) ai_gene_pane_2_t1

0xc478,	// (0x0001cde6) main_pane_empty_t1_ParamLimits

0xc478,	// (0x0001cde6) main_pane_empty_t1

0xc490,	// (0x0001cdfe) main_pane_empty_t2_ParamLimits

0xc490,	// (0x0001cdfe) main_pane_empty_t2

0xc4a5,	// (0x0001ce13) main_pane_empty_t3_ParamLimits

0xc4a5,	// (0x0001ce13) main_pane_empty_t3

0xc4b7,	// (0x0001ce25) main_pane_empty_t4_ParamLimits

0xc4b7,	// (0x0001ce25) main_pane_empty_t4

0xc4c9,	// (0x0001ce37) main_pane_empty_t5_ParamLimits

0xc4c9,	// (0x0001ce37) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001febd) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001febd) main_pane_empty_t

0x2ebc,	// (0x0001382a) bg_popup_window_pane_ParamLimits

0x2ebc,	// (0x0001382a) bg_popup_window_pane

0x5240,	// (0x00015bae) find_popup_pane_cp2_ParamLimits

0x5240,	// (0x00015bae) find_popup_pane_cp2

0x524c,	// (0x00015bba) heading_pane_ParamLimits

0x524c,	// (0x00015bba) heading_pane

0x1d3c,	// (0x000126aa) bg_popup_sub_pane

0xd2fd,	// (0x0001dc6b) bg_popup_window_pane_g1_ParamLimits

0xd2fd,	// (0x0001dc6b) bg_popup_window_pane_g1

0xd30c,	// (0x0001dc7a) bg_popup_window_pane_g2_ParamLimits

0xd30c,	// (0x0001dc7a) bg_popup_window_pane_g2

0xd318,	// (0x0001dc86) bg_popup_window_pane_g3_ParamLimits

0xd318,	// (0x0001dc86) bg_popup_window_pane_g3

0xd324,	// (0x0001dc92) bg_popup_window_pane_g4_ParamLimits

0xd324,	// (0x0001dc92) bg_popup_window_pane_g4

0xd333,	// (0x0001dca1) bg_popup_window_pane_g5_ParamLimits

0xd333,	// (0x0001dca1) bg_popup_window_pane_g5

0xd343,	// (0x0001dcb1) bg_popup_window_pane_g6_ParamLimits

0xd343,	// (0x0001dcb1) bg_popup_window_pane_g6

0xd34f,	// (0x0001dcbd) bg_popup_window_pane_g7_ParamLimits

0xd34f,	// (0x0001dcbd) bg_popup_window_pane_g7

0xd35e,	// (0x0001dccc) bg_popup_window_pane_g8_ParamLimits

0xd35e,	// (0x0001dccc) bg_popup_window_pane_g8

0xd36d,	// (0x0001dcdb) bg_popup_window_pane_g9_ParamLimits

0xd36d,	// (0x0001dcdb) bg_popup_window_pane_g9

0x5226,	// (0x00015b94) bg_popup_window_pane_g10_ParamLimits

0x5226,	// (0x00015b94) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x00020214) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x00020214) bg_popup_window_pane_g

0x514f,	// (0x00015abd) bg_popup_heading_pane_ParamLimits

0x514f,	// (0x00015abd) bg_popup_heading_pane

0x0b1f,	// (0x0001148d) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b1f,	// (0x0001148d) tabs_4_passive_pane_cp_srt

0x0b31,	// (0x0001149f) tabs_4_passive_pane_srt_ParamLimits

0x5163,	// (0x00015ad1) heading_pane_g2

0x0b31,	// (0x0001149f) tabs_4_passive_pane_srt

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp3_srt

0x516b,	// (0x00015ad9) heading_pane_t1_ParamLimits

0x516b,	// (0x00015ad9) heading_pane_t1

0x5182,	// (0x00015af0) heading_pane_t2_ParamLimits

0x5182,	// (0x00015af0) heading_pane_t2

0x0001,

0xf8a1,	// (0x0002020f) heading_pane_t_ParamLimits

0xf8a1,	// (0x0002020f) heading_pane_t

0x4c7c,	// (0x000155ea) bg_popup_heading_pane_g1

0x4d2b,	// (0x00015699) bg_popup_heading_pane_g2

0x4d35,	// (0x000156a3) bg_popup_heading_pane_g3

0x4d3f,	// (0x000156ad) bg_popup_heading_pane_g4

0x4d49,	// (0x000156b7) bg_popup_heading_pane_g5

0x4d53,	// (0x000156c1) bg_popup_heading_pane_g6

0x4d5b,	// (0x000156c9) bg_popup_heading_pane_g7

0x4d63,	// (0x000156d1) bg_popup_heading_pane_g8

0x4d6d,	// (0x000156db) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x000201cb) bg_popup_heading_pane_g

0x4361,	// (0x00014ccf) bg_popup_sub_pane_g1

0x4371,	// (0x00014cdf) bg_popup_sub_pane_g2

0x4369,	// (0x00014cd7) bg_popup_sub_pane_g3

0x4381,	// (0x00014cef) bg_popup_sub_pane_g4

0x4379,	// (0x00014ce7) bg_popup_sub_pane_g5

0x4389,	// (0x00014cf7) bg_popup_sub_pane_g6

0x4391,	// (0x00014cff) bg_popup_sub_pane_g7

0x43a1,	// (0x00014d0f) bg_popup_sub_pane_g8

0x4399,	// (0x00014d07) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x000201a5) bg_popup_sub_pane_g

0x20b1,	// (0x00012a1f) bg_popup_window_pane_cp5_ParamLimits

0x20b1,	// (0x00012a1f) bg_popup_window_pane_cp5

0x20cd,	// (0x00012a3b) popup_note_window_g1_ParamLimits

0x20cd,	// (0x00012a3b) popup_note_window_g1

0x20d9,	// (0x00012a47) popup_note_window_t1_ParamLimits

0x20d9,	// (0x00012a47) popup_note_window_t1

0x20ef,	// (0x00012a5d) popup_note_window_t2_ParamLimits

0x20ef,	// (0x00012a5d) popup_note_window_t2

0x2105,	// (0x00012a73) popup_note_window_t3_ParamLimits

0x2105,	// (0x00012a73) popup_note_window_t3

0x211b,	// (0x00012a89) popup_note_window_t4_ParamLimits

0x211b,	// (0x00012a89) popup_note_window_t4

0x2143,	// (0x00012ab1) popup_note_window_t5_ParamLimits

0x2143,	// (0x00012ab1) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001fec8) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001fec8) popup_note_window_t

0x218d,	// (0x00012afb) bg_popup_window_pane_cp6_ParamLimits

0x218d,	// (0x00012afb) bg_popup_window_pane_cp6

0x4bf8,	// (0x00015566) popup_note_image_window_g1_ParamLimits

0x4bf8,	// (0x00015566) popup_note_image_window_g1

0x4c04,	// (0x00015572) popup_note_image_window_g2_ParamLimits

0x4c04,	// (0x00015572) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x00020199) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x00020199) popup_note_image_window_g

0x4c1d,	// (0x0001558b) popup_note_image_window_t1_ParamLimits

0x4c1d,	// (0x0001558b) popup_note_image_window_t1

0x4c36,	// (0x000155a4) popup_note_image_window_t2_ParamLimits

0x4c36,	// (0x000155a4) popup_note_image_window_t2

0x4c4f,	// (0x000155bd) popup_note_image_window_t3_ParamLimits

0x4c4f,	// (0x000155bd) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0002019e) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0002019e) popup_note_image_window_t

0x4ab9,	// (0x00015427) bg_popup_window_pane_cp7_ParamLimits

0x4ab9,	// (0x00015427) bg_popup_window_pane_cp7

0x4ae9,	// (0x00015457) popup_note_wait_window_g1_ParamLimits

0x4ae9,	// (0x00015457) popup_note_wait_window_g1

0x4af5,	// (0x00015463) popup_note_wait_window_g2_ParamLimits

0x4af5,	// (0x00015463) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x00020187) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x00020187) popup_note_wait_window_g

0x4b0d,	// (0x0001547b) popup_note_wait_window_t1_ParamLimits

0x4b0d,	// (0x0001547b) popup_note_wait_window_t1

0x4b34,	// (0x000154a2) popup_note_wait_window_t2_ParamLimits

0x4b34,	// (0x000154a2) popup_note_wait_window_t2

0x4b51,	// (0x000154bf) popup_note_wait_window_t3_ParamLimits

0x4b51,	// (0x000154bf) popup_note_wait_window_t3

0x4b64,	// (0x000154d2) popup_note_wait_window_t4_ParamLimits

0x4b64,	// (0x000154d2) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0002018e) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0002018e) popup_note_wait_window_t

0x4b89,	// (0x000154f7) wait_bar_pane_ParamLimits

0x4b89,	// (0x000154f7) wait_bar_pane

0x1d3c,	// (0x000126aa) wait_anim_pane

0x1d3c,	// (0x000126aa) wait_border_pane

0xe690,	// (0x0001effe) wait_anim_pane_g1

0xe690,	// (0x0001effe) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00020047) wait_anim_pane_g

0x4a5d,	// (0x000153cb) wait_border_pane_g1

0x4a68,	// (0x000153d6) wait_border_pane_g2

0x4a71,	// (0x000153df) wait_border_pane_g3

0x0002,

0xf812,	// (0x00020180) wait_border_pane_g

0x48c8,	// (0x00015236) bg_popup_window_pane_cp16_ParamLimits

0x48c8,	// (0x00015236) bg_popup_window_pane_cp16

0x49c8,	// (0x00015336) indicator_popup_pane_cp4_ParamLimits

0x49c8,	// (0x00015336) indicator_popup_pane_cp4

0x49dc,	// (0x0001534a) popup_query_data_window_t1_ParamLimits

0x49dc,	// (0x0001534a) popup_query_data_window_t1

0x49ee,	// (0x0001535c) popup_query_data_window_t2_ParamLimits

0x49ee,	// (0x0001535c) popup_query_data_window_t2

0x4a07,	// (0x00015375) popup_query_data_window_t3_ParamLimits

0x4a07,	// (0x00015375) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x00020179) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x00020179) popup_query_data_window_t

0x4a21,	// (0x0001538f) query_popup_data_pane_ParamLimits

0x4a21,	// (0x0001538f) query_popup_data_pane

0x4a35,	// (0x000153a3) query_popup_data_pane_cp1_ParamLimits

0x4a35,	// (0x000153a3) query_popup_data_pane_cp1

0x48c8,	// (0x00015236) bg_popup_window_pane_cp10_ParamLimits

0x48c8,	// (0x00015236) bg_popup_window_pane_cp10

0x48fa,	// (0x00015268) indicator_popup_pane_ParamLimits

0x48fa,	// (0x00015268) indicator_popup_pane

0x491c,	// (0x0001528a) popup_query_code_window_t1_ParamLimits

0x491c,	// (0x0001528a) popup_query_code_window_t1

0x4936,	// (0x000152a4) popup_query_code_window_t2_ParamLimits

0x4936,	// (0x000152a4) popup_query_code_window_t2

0x497f,	// (0x000152ed) popup_query_code_window_t3_ParamLimits

0x497f,	// (0x000152ed) popup_query_code_window_t3

0x0002,

0xf804,	// (0x00020172) popup_query_code_window_t_ParamLimits

0xf804,	// (0x00020172) popup_query_code_window_t

0x49ae,	// (0x0001531c) query_popup_pane_ParamLimits

0x49ae,	// (0x0001531c) query_popup_pane

0x218d,	// (0x00012afb) bg_popup_window_pane_cp15_ParamLimits

0x218d,	// (0x00012afb) bg_popup_window_pane_cp15

0x21ab,	// (0x00012b19) indicator_popup_pane_cp1_ParamLimits

0x21ab,	// (0x00012b19) indicator_popup_pane_cp1

0x21be,	// (0x00012b2c) indicator_popup_pane_cp2_ParamLimits

0x21be,	// (0x00012b2c) indicator_popup_pane_cp2

0x21d1,	// (0x00012b3f) popup_query_data_code_window_g1_ParamLimits

0x21d1,	// (0x00012b3f) popup_query_data_code_window_g1

0x21e4,	// (0x00012b52) popup_query_data_code_window_t1_ParamLimits

0x21e4,	// (0x00012b52) popup_query_data_code_window_t1

0x21f6,	// (0x00012b64) popup_query_data_code_window_t2_ParamLimits

0x21f6,	// (0x00012b64) popup_query_data_code_window_t2

0x2208,	// (0x00012b76) popup_query_data_code_window_t3_ParamLimits

0x2208,	// (0x00012b76) popup_query_data_code_window_t3

0x221e,	// (0x00012b8c) popup_query_data_code_window_t4_ParamLimits

0x221e,	// (0x00012b8c) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001fed3) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001fed3) popup_query_data_code_window_t

0x07e0,	// (0x0001114e) list_single_midp_graphic_pane_g3

0x2236,	// (0x00012ba4) query_popup_data_pane_cp2_ParamLimits

0x2249,	// (0x00012bb7) query_popup_pane_cp2_ParamLimits

0x2249,	// (0x00012bb7) query_popup_pane_cp2

0x1d3c,	// (0x000126aa) bg_popup_window_pane_cp11

0x48ac,	// (0x0001521a) heading_pane_cp5

0x48b4,	// (0x00015222) listscroll_popup_info_pane

0x1d3c,	// (0x000126aa) input_focus_pane_cp3

0x225c,	// (0x00012bca) query_popup_pane_t1

0x226a,	// (0x00012bd8) list_popup_info_pane_ParamLimits

0x226a,	// (0x00012bd8) list_popup_info_pane

0x2279,	// (0x00012be7) listscroll_popup_info_pane_g1

0x2281,	// (0x00012bef) scroll_pane_cp7

0x228b,	// (0x00012bf9) popup_info_list_pane_t1_ParamLimits

0x228b,	// (0x00012bf9) popup_info_list_pane_t1

0x22a5,	// (0x00012c13) popup_info_list_pane_t2_ParamLimits

0x22a5,	// (0x00012c13) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001fedc) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001fedc) popup_info_list_pane_t

0x1d3c,	// (0x000126aa) bg_popup_window_pane_cp12

0x5d34,	// (0x000166a2) find_popup_pane

0x1e1c,	// (0x0001278a) bg_popup_window_pane_cp3

0x22bf,	// (0x00012c2d) heading_pane_cp3

0x22ce,	// (0x00012c3c) listscroll_popup_graphic_pane

0x1d3c,	// (0x000126aa) bg_popup_window_pane_cp4

0xc52b,	// (0x0001ce99) heading_pane_cp4

0x2338,	// (0x00012ca6) listscroll_popup_colour_pane

0xc535,	// (0x0001cea3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc535,	// (0x0001cea3) cell_large_graphic_colour_none_popup_pane

0xc549,	// (0x0001ceb7) grid_large_graphic_colour_popup_pane_ParamLimits

0xc549,	// (0x0001ceb7) grid_large_graphic_colour_popup_pane

0xc56d,	// (0x0001cedb) listscroll_popup_colour_pane_g1_ParamLimits

0xc56d,	// (0x0001cedb) listscroll_popup_colour_pane_g1

0xc584,	// (0x0001cef2) listscroll_popup_colour_pane_g2_ParamLimits

0xc584,	// (0x0001cef2) listscroll_popup_colour_pane_g2

0xc59b,	// (0x0001cf09) listscroll_popup_colour_pane_g3_ParamLimits

0xc59b,	// (0x0001cf09) listscroll_popup_colour_pane_g3

0xc5ab,	// (0x0001cf19) listscroll_popup_colour_pane_g4_ParamLimits

0xc5ab,	// (0x0001cf19) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001fee1) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001fee1) listscroll_popup_colour_pane_g

0x23c6,	// (0x00012d34) scroll_pane_cp6_ParamLimits

0x23c6,	// (0x00012d34) scroll_pane_cp6

0xc5bb,	// (0x0001cf29) cell_large_graphic_colour_popup_pane_ParamLimits

0xc5bb,	// (0x0001cf29) cell_large_graphic_colour_popup_pane

0x23f7,	// (0x00012d65) cell_large_graphic_colour_none_popup_pane_t1

0x1d3c,	// (0x000126aa) grid_highlight_pane_cp5

0x2406,	// (0x00012d74) cell_large_graphic_colour_popup_pane_g1

0x240e,	// (0x00012d7c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001feea) cell_large_graphic_colour_popup_pane_g

0x2416,	// (0x00012d84) cell_large_graphic_colour_popup_pane_g2_copy1

0x241f,	// (0x00012d8d) grid_highlight_pane_cp4

0x2427,	// (0x00012d95) bg_popup_window_pane_cp8_ParamLimits

0x2427,	// (0x00012d95) bg_popup_window_pane_cp8

0x2442,	// (0x00012db0) popup_snote_single_text_window_g1_ParamLimits

0x2442,	// (0x00012db0) popup_snote_single_text_window_g1

0x2454,	// (0x00012dc2) popup_snote_single_text_window_t1_ParamLimits

0x2454,	// (0x00012dc2) popup_snote_single_text_window_t1

0x2467,	// (0x00012dd5) popup_snote_single_text_window_t2_ParamLimits

0x2467,	// (0x00012dd5) popup_snote_single_text_window_t2

0x247a,	// (0x00012de8) popup_snote_single_text_window_t3_ParamLimits

0x247a,	// (0x00012de8) popup_snote_single_text_window_t3

0x24b3,	// (0x00012e21) popup_snote_single_text_window_t4_ParamLimits

0x24b3,	// (0x00012e21) popup_snote_single_text_window_t4

0x24e7,	// (0x00012e55) popup_snote_single_text_window_t5_ParamLimits

0x24e7,	// (0x00012e55) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001feef) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001feef) popup_snote_single_text_window_t

0x2516,	// (0x00012e84) bg_popup_window_pane_cp9_ParamLimits

0x2516,	// (0x00012e84) bg_popup_window_pane_cp9

0x2442,	// (0x00012db0) popup_snote_single_graphic_window_g1_ParamLimits

0x2442,	// (0x00012db0) popup_snote_single_graphic_window_g1

0x2524,	// (0x00012e92) popup_snote_single_graphic_window_g2_ParamLimits

0x2524,	// (0x00012e92) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001fefa) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001fefa) popup_snote_single_graphic_window_g

0x2530,	// (0x00012e9e) popup_snote_single_graphic_window_t1_ParamLimits

0x2530,	// (0x00012e9e) popup_snote_single_graphic_window_t1

0x2543,	// (0x00012eb1) popup_snote_single_graphic_window_t2_ParamLimits

0x2543,	// (0x00012eb1) popup_snote_single_graphic_window_t2

0x2556,	// (0x00012ec4) popup_snote_single_graphic_window_t3_ParamLimits

0x2556,	// (0x00012ec4) popup_snote_single_graphic_window_t3

0x258f,	// (0x00012efd) popup_snote_single_graphic_window_t4_ParamLimits

0x258f,	// (0x00012efd) popup_snote_single_graphic_window_t4

0x25c3,	// (0x00012f31) popup_snote_single_graphic_window_t5_ParamLimits

0x25c3,	// (0x00012f31) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001feff) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001feff) popup_snote_single_graphic_window_t

0x5c76,	// (0x000165e4) grid_graphic_popup_pane_ParamLimits

0x5c76,	// (0x000165e4) grid_graphic_popup_pane

0x5ca0,	// (0x0001660e) listscroll_popup_graphic_pane_g1_ParamLimits

0x5ca0,	// (0x0001660e) listscroll_popup_graphic_pane_g1

0xd6b6,	// (0x0001e024) listscroll_popup_graphic_pane_g2_ParamLimits

0xd6b6,	// (0x0001e024) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x000202ef) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x000202ef) listscroll_popup_graphic_pane_g

0x5cc8,	// (0x00016636) scroll_pane_cp5

0xd673,	// (0x0001dfe1) cell_graphic_popup_pane_ParamLimits

0xd673,	// (0x0001dfe1) cell_graphic_popup_pane

0x5be8,	// (0x00016556) cell_graphic_popup_pane_g1

0x5bf0,	// (0x0001655e) cell_graphic_popup_pane_g2

0x2416,	// (0x00012d84) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x000202e8) cell_graphic_popup_pane_g

0x5bf9,	// (0x00016567) cell_graphic_popup_pane_t2

0x241f,	// (0x00012d8d) grid_highlight_pane_cp3

0x2604,	// (0x00012f72) list_gen_pane_ParamLimits

0x2604,	// (0x00012f72) list_gen_pane

0x2636,	// (0x00012fa4) scroll_pane

0xd62a,	// (0x0001df98) bg_list_pane_g1_ParamLimits

0xd62a,	// (0x0001df98) bg_list_pane_g1

0x5b51,	// (0x000164bf) bg_list_pane_g2_ParamLimits

0x5b51,	// (0x000164bf) bg_list_pane_g2

0x5b66,	// (0x000164d4) bg_list_pane_g3_ParamLimits

0x5b66,	// (0x000164d4) bg_list_pane_g3

0x5b7a,	// (0x000164e8) bg_list_pane_g4_ParamLimits

0x5b7a,	// (0x000164e8) bg_list_pane_g4

0xd647,	// (0x0001dfb5) bg_list_pane_g5_ParamLimits

0xd647,	// (0x0001dfb5) bg_list_pane_g5

0x0004,

0xf96f,	// (0x000202dd) bg_list_pane_g_ParamLimits

0xf96f,	// (0x000202dd) bg_list_pane_g

0xd5ce,	// (0x0001df3c) list_double2_graphic_large_graphic_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double2_graphic_large_graphic_pane

0xd5ce,	// (0x0001df3c) list_double2_graphic_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double2_graphic_pane

0xd5ce,	// (0x0001df3c) list_double2_large_graphic_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double2_large_graphic_pane

0xd5ce,	// (0x0001df3c) list_double2_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double2_pane

0xd5ce,	// (0x0001df3c) list_double_graphic_heading_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_graphic_heading_pane

0xd5ce,	// (0x0001df3c) list_double_graphic_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_graphic_pane

0xd5ce,	// (0x0001df3c) list_double_heading_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_heading_pane

0xd5ce,	// (0x0001df3c) list_double_large_graphic_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_large_graphic_pane

0xd5ce,	// (0x0001df3c) list_double_number_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_number_pane

0xd5ce,	// (0x0001df3c) list_double_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_pane

0xd5ce,	// (0x0001df3c) list_double_time_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_double_time_pane

0xd5ce,	// (0x0001df3c) list_setting_number_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_setting_number_pane

0xd5ce,	// (0x0001df3c) list_setting_pane_ParamLimits

0xd5ce,	// (0x0001df3c) list_setting_pane

0xd5e0,	// (0x0001df4e) list_single_2graphic_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_2graphic_pane

0xd5e0,	// (0x0001df4e) list_single_graphic_heading_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_graphic_heading_pane

0xd5e0,	// (0x0001df4e) list_single_graphic_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_graphic_pane

0xd5e0,	// (0x0001df4e) list_single_heading_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_heading_pane

0xd5e0,	// (0x0001df4e) list_single_large_graphic_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_large_graphic_pane

0xd5e0,	// (0x0001df4e) list_single_number_heading_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_number_heading_pane

0xd5e0,	// (0x0001df4e) list_single_number_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_number_pane

0xd5e0,	// (0x0001df4e) list_single_pane_ParamLimits

0xd5e0,	// (0x0001df4e) list_single_pane

0x1d3c,	// (0x000126aa) list_highlight_pane_cp1

0x2676,	// (0x00012fe4) list_single_pane_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_pane_g1

0x2682,	// (0x00012ff0) list_single_pane_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_pane_g

0x59eb,	// (0x00016359) list_single_pane_t1_ParamLimits

0x59eb,	// (0x00016359) list_single_pane_t1

0x2676,	// (0x00012fe4) list_single_number_pane_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_number_pane_g1

0x2682,	// (0x00012ff0) list_single_number_pane_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_number_pane_g

0x42ef,	// (0x00014c5d) list_single_number_pane_t1_ParamLimits

0x42ef,	// (0x00014c5d) list_single_number_pane_t1

0x578d,	// (0x000160fb) list_single_number_pane_t2_ParamLimits

0x578d,	// (0x000160fb) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0002029e) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0002029e) list_single_number_pane_t

0x266a,	// (0x00012fd8) list_single_graphic_pane_g1_ParamLimits

0x266a,	// (0x00012fd8) list_single_graphic_pane_g1

0x2676,	// (0x00012fe4) list_single_graphic_pane_g2_ParamLimits

0x2676,	// (0x00012fe4) list_single_graphic_pane_g2

0x2682,	// (0x00012ff0) list_single_graphic_pane_g3_ParamLimits

0x2682,	// (0x00012ff0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001ff0a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001ff0a) list_single_graphic_pane_g

0x268e,	// (0x00012ffc) list_single_graphic_pane_t1_ParamLimits

0x268e,	// (0x00012ffc) list_single_graphic_pane_t1

0x2676,	// (0x00012fe4) list_single_heading_pane_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_heading_pane_g1

0x2682,	// (0x00012ff0) list_single_heading_pane_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_heading_pane_g

0x26a4,	// (0x00013012) list_single_heading_pane_t1_ParamLimits

0x26a4,	// (0x00013012) list_single_heading_pane_t1

0x26ba,	// (0x00013028) list_single_heading_pane_t2_ParamLimits

0x26ba,	// (0x00013028) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001ff16) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001ff16) list_single_heading_pane_t

0x2676,	// (0x00012fe4) list_single_number_heading_pane_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_number_heading_pane_g1

0x2682,	// (0x00012ff0) list_single_number_heading_pane_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_number_heading_pane_g

0x26a4,	// (0x00013012) list_single_number_heading_pane_t1_ParamLimits

0x26a4,	// (0x00013012) list_single_number_heading_pane_t1

0x26cc,	// (0x0001303a) list_single_number_heading_pane_t2_ParamLimits

0x26cc,	// (0x0001303a) list_single_number_heading_pane_t2

0x26de,	// (0x0001304c) list_single_number_heading_pane_t3_ParamLimits

0x26de,	// (0x0001304c) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001ff1b) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001ff1b) list_single_number_heading_pane_t

0x26f0,	// (0x0001305e) list_single_graphic_heading_pane_g1_ParamLimits

0x26f0,	// (0x0001305e) list_single_graphic_heading_pane_g1

0xc5e4,	// (0x0001cf52) list_single_graphic_heading_pane_g4_ParamLimits

0xc5e4,	// (0x0001cf52) list_single_graphic_heading_pane_g4

0x2682,	// (0x00012ff0) list_single_graphic_heading_pane_g5_ParamLimits

0x2682,	// (0x00012ff0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001ff22) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001ff22) list_single_graphic_heading_pane_g

0x26a4,	// (0x00013012) list_single_graphic_heading_pane_t1_ParamLimits

0x26a4,	// (0x00013012) list_single_graphic_heading_pane_t1

0x270d,	// (0x0001307b) list_single_graphic_heading_pane_t2_ParamLimits

0x270d,	// (0x0001307b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001ff29) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001ff29) list_single_graphic_heading_pane_t

0x6330,	// (0x00016c9e) list_single_large_graphic_pane_g1_ParamLimits

0x6330,	// (0x00016c9e) list_single_large_graphic_pane_g1

0x2676,	// (0x00012fe4) list_single_large_graphic_pane_g2_ParamLimits

0x2676,	// (0x00012fe4) list_single_large_graphic_pane_g2

0x2682,	// (0x00012ff0) list_single_large_graphic_pane_g3_ParamLimits

0x2682,	// (0x00012ff0) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001ff2e) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001ff2e) list_single_large_graphic_pane_g

0x4a68,	// (0x000153d6) wait_border_pane_g2_copy1

0xc5f5,	// (0x0001cf63) list_single_large_graphic_pane_g4_cp2

0x633c,	// (0x00016caa) list_single_large_graphic_pane_t1_ParamLimits

0x633c,	// (0x00016caa) list_single_large_graphic_pane_t1

0x286f,	// (0x000131dd) list_double_pane_g1_ParamLimits

0x286f,	// (0x000131dd) list_double_pane_g1

0x279a,	// (0x00013108) list_double_pane_g2_ParamLimits

0x279a,	// (0x00013108) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001ff35) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001ff35) list_double_pane_g

0x27a6,	// (0x00013114) list_double_pane_t1_ParamLimits

0x27a6,	// (0x00013114) list_double_pane_t1

0xc5fd,	// (0x0001cf6b) list_double_pane_t2_ParamLimits

0xc5fd,	// (0x0001cf6b) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001ff3a) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001ff3a) list_double_pane_t

0xc60f,	// (0x0001cf7d) list_double2_pane_g1_ParamLimits

0xc60f,	// (0x0001cf7d) list_double2_pane_g1

0xc620,	// (0x0001cf8e) list_double2_pane_g2_ParamLimits

0xc620,	// (0x0001cf8e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001ff3f) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001ff3f) list_double2_pane_g

0xc62c,	// (0x0001cf9a) list_double2_pane_t1_ParamLimits

0xc62c,	// (0x0001cf9a) list_double2_pane_t1

0x298b,	// (0x000132f9) list_double2_pane_t2_ParamLimits

0x298b,	// (0x000132f9) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001ff44) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001ff44) list_double2_pane_t

0x286f,	// (0x000131dd) list_double_number_pane_g1_ParamLimits

0x286f,	// (0x000131dd) list_double_number_pane_g1

0x279a,	// (0x00013108) list_double_number_pane_g2_ParamLimits

0x279a,	// (0x00013108) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001ff35) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001ff35) list_double_number_pane_g

0xc642,	// (0x0001cfb0) list_double_number_pane_t1_ParamLimits

0xc642,	// (0x0001cfb0) list_double_number_pane_t1

0x287b,	// (0x000131e9) list_double_number_pane_t2_ParamLimits

0x287b,	// (0x000131e9) list_double_number_pane_t2

0xc654,	// (0x0001cfc2) list_double_number_pane_t3_ParamLimits

0xc654,	// (0x0001cfc2) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001ff49) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001ff49) list_double_number_pane_t

0x2863,	// (0x000131d1) list_double_graphic_pane_g1_ParamLimits

0x2863,	// (0x000131d1) list_double_graphic_pane_g1

0xc666,	// (0x0001cfd4) list_double_graphic_pane_g2_ParamLimits

0xc666,	// (0x0001cfd4) list_double_graphic_pane_g2

0xc675,	// (0x0001cfe3) list_double_graphic_pane_g3_ParamLimits

0xc675,	// (0x0001cfe3) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001ff50) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001ff50) list_double_graphic_pane_g

0xc68d,	// (0x0001cffb) list_double_graphic_pane_t1_ParamLimits

0xc68d,	// (0x0001cffb) list_double_graphic_pane_t1

0xc6a3,	// (0x0001d011) list_double_graphic_pane_t2_ParamLimits

0xc6a3,	// (0x0001d011) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001ff59) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001ff59) list_double_graphic_pane_t

0xc6b5,	// (0x0001d023) list_double2_graphic_pane_g1_ParamLimits

0xc6b5,	// (0x0001d023) list_double2_graphic_pane_g1

0x2c40,	// (0x000135ae) list_double2_graphic_pane_g2_ParamLimits

0x2c40,	// (0x000135ae) list_double2_graphic_pane_g2

0xc620,	// (0x0001cf8e) list_double2_graphic_pane_g3_ParamLimits

0xc620,	// (0x0001cf8e) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001ff5e) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001ff5e) list_double2_graphic_pane_g

0xc6c1,	// (0x0001d02f) list_double2_graphic_pane_t1_ParamLimits

0xc6c1,	// (0x0001d02f) list_double2_graphic_pane_t1

0x29b3,	// (0x00013321) list_double2_graphic_pane_t2_ParamLimits

0x29b3,	// (0x00013321) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001ff65) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001ff65) list_double2_graphic_pane_t

0xc6d7,	// (0x0001d045) list_double_large_graphic_pane_g1_ParamLimits

0xc6d7,	// (0x0001d045) list_double_large_graphic_pane_g1

0xc6f6,	// (0x0001d064) list_double_large_graphic_pane_g2_ParamLimits

0xc6f6,	// (0x0001d064) list_double_large_graphic_pane_g2

0x279a,	// (0x00013108) list_double_large_graphic_pane_g3_ParamLimits

0x279a,	// (0x00013108) list_double_large_graphic_pane_g3

0xc707,	// (0x0001d075) list_double_large_graphic_pane_g4_ParamLimits

0xc707,	// (0x0001d075) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001ff6a) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001ff6a) list_double_large_graphic_pane_g

0xc71a,	// (0x0001d088) list_double_large_graphic_pane_t1_ParamLimits

0xc71a,	// (0x0001d088) list_double_large_graphic_pane_t1

0xc733,	// (0x0001d0a1) list_double_large_graphic_pane_t2_ParamLimits

0xc733,	// (0x0001d0a1) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001ff75) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001ff75) list_double_large_graphic_pane_t

0xc745,	// (0x0001d0b3) list_double2_large_graphic_pane_g1_ParamLimits

0xc745,	// (0x0001d0b3) list_double2_large_graphic_pane_g1

0xc60f,	// (0x0001cf7d) list_double2_large_graphic_pane_g2_ParamLimits

0xc60f,	// (0x0001cf7d) list_double2_large_graphic_pane_g2

0xc620,	// (0x0001cf8e) list_double2_large_graphic_pane_g3_ParamLimits

0xc620,	// (0x0001cf8e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001ff7a) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001ff7a) list_double2_large_graphic_pane_g

0xc751,	// (0x0001d0bf) list_double2_large_graphic_pane_t1_ParamLimits

0xc751,	// (0x0001d0bf) list_double2_large_graphic_pane_t1

0xc767,	// (0x0001d0d5) list_double2_large_graphic_pane_t2_ParamLimits

0xc767,	// (0x0001d0d5) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001ff81) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001ff81) list_double2_large_graphic_pane_t

0xc779,	// (0x0001d0e7) list_double_heading_pane_g1_ParamLimits

0xc779,	// (0x0001d0e7) list_double_heading_pane_g1

0xc78a,	// (0x0001d0f8) list_double_heading_pane_g2_ParamLimits

0xc78a,	// (0x0001d0f8) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001ff86) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001ff86) list_double_heading_pane_g

0xc796,	// (0x0001d104) list_double_heading_pane_t1_ParamLimits

0xc796,	// (0x0001d104) list_double_heading_pane_t1

0xc7ac,	// (0x0001d11a) list_double_heading_pane_t2_ParamLimits

0xc7ac,	// (0x0001d11a) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001ff8b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001ff8b) list_double_heading_pane_t

0x2808,	// (0x00013176) list_double_graphic_heading_pane_g1_ParamLimits

0x2808,	// (0x00013176) list_double_graphic_heading_pane_g1

0xc779,	// (0x0001d0e7) list_double_graphic_heading_pane_g2_ParamLimits

0xc779,	// (0x0001d0e7) list_double_graphic_heading_pane_g2

0xc78a,	// (0x0001d0f8) list_double_graphic_heading_pane_g3_ParamLimits

0xc78a,	// (0x0001d0f8) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001ff90) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001ff90) list_double_graphic_heading_pane_g

0xc7be,	// (0x0001d12c) list_double_graphic_heading_pane_t1_ParamLimits

0xc7be,	// (0x0001d12c) list_double_graphic_heading_pane_t1

0xc7d4,	// (0x0001d142) list_double_graphic_heading_pane_t2_ParamLimits

0xc7d4,	// (0x0001d142) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001ff97) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001ff97) list_double_graphic_heading_pane_t

0xc6f6,	// (0x0001d064) list_double_time_pane_g1_ParamLimits

0xc6f6,	// (0x0001d064) list_double_time_pane_g1

0x279a,	// (0x00013108) list_double_time_pane_g2_ParamLimits

0x279a,	// (0x00013108) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001ff9c) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001ff9c) list_double_time_pane_g

0xc7e6,	// (0x0001d154) list_double_time_pane_t1_ParamLimits

0xc7e6,	// (0x0001d154) list_double_time_pane_t1

0xc7fc,	// (0x0001d16a) list_double_time_pane_t2_ParamLimits

0xc7fc,	// (0x0001d16a) list_double_time_pane_t2

0xc80e,	// (0x0001d17c) list_double_time_pane_t3_ParamLimits

0xc80e,	// (0x0001d17c) list_double_time_pane_t3

0xc820,	// (0x0001d18e) list_double_time_pane_t4_ParamLimits

0xc820,	// (0x0001d18e) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001ffa1) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001ffa1) list_double_time_pane_t

0x2c40,	// (0x000135ae) list_setting_pane_g1_ParamLimits

0x2c40,	// (0x000135ae) list_setting_pane_g1

0xc620,	// (0x0001cf8e) list_setting_pane_g2_ParamLimits

0xc620,	// (0x0001cf8e) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001ffaa) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001ffaa) list_setting_pane_g

0xc832,	// (0x0001d1a0) list_setting_pane_t1_ParamLimits

0xc832,	// (0x0001d1a0) list_setting_pane_t1

0xc849,	// (0x0001d1b7) list_setting_pane_t2_ParamLimits

0xc849,	// (0x0001d1b7) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001ffaf) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001ffaf) list_setting_pane_t

0xc888,	// (0x0001d1f6) set_value_pane_cp_ParamLimits

0xc888,	// (0x0001d1f6) set_value_pane_cp

0x2c40,	// (0x000135ae) list_setting_number_pane_g1_ParamLimits

0x2c40,	// (0x000135ae) list_setting_number_pane_g1

0xc620,	// (0x0001cf8e) list_setting_number_pane_g2_ParamLimits

0xc620,	// (0x0001cf8e) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001ffaa) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001ffaa) list_setting_number_pane_g

0xc894,	// (0x0001d202) list_setting_number_pane_t1_ParamLimits

0xc894,	// (0x0001d202) list_setting_number_pane_t1

0xc8a8,	// (0x0001d216) list_setting_number_pane_t2_ParamLimits

0xc8a8,	// (0x0001d216) list_setting_number_pane_t2

0xc8bf,	// (0x0001d22d) list_setting_number_pane_t3_ParamLimits

0xc8bf,	// (0x0001d22d) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001ffb6) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001ffb6) list_setting_number_pane_t

0xc888,	// (0x0001d1f6) set_value_pane_ParamLimits

0xc888,	// (0x0001d1f6) set_value_pane

0x2ae1,	// (0x0001344f) bg_set_opt_pane_ParamLimits

0x2ae1,	// (0x0001344f) bg_set_opt_pane

0x2b02,	// (0x00013470) set_value_pane_t1

0x2b10,	// (0x0001347e) slider_set_pane_cp3

0x2b19,	// (0x00013487) volume_small_pane_cp

0x2b22,	// (0x00013490) list_form_gen_pane

0x2b2b,	// (0x00013499) scroll_pane_cp8

0xc902,	// (0x0001d270) form_field_data_pane_ParamLimits

0xc902,	// (0x0001d270) form_field_data_pane

0xc919,	// (0x0001d287) form_field_data_wide_pane_ParamLimits

0xc919,	// (0x0001d287) form_field_data_wide_pane

0xc939,	// (0x0001d2a7) form_field_popup_pane_ParamLimits

0xc939,	// (0x0001d2a7) form_field_popup_pane

0xc951,	// (0x0001d2bf) form_field_popup_wide_pane_ParamLimits

0xc951,	// (0x0001d2bf) form_field_popup_wide_pane

0x2bc6,	// (0x00013534) form_field_slider_pane_ParamLimits

0x2bc6,	// (0x00013534) form_field_slider_pane

0x2bd9,	// (0x00013547) form_field_slider_wide_pane_ParamLimits

0x2bd9,	// (0x00013547) form_field_slider_wide_pane

0x2bec,	// (0x0001355a) data_form_pane

0xc972,	// (0x0001d2e0) form_field_data_pane_t1

0x2c1a,	// (0x00013588) input_focus_pane

0x2c28,	// (0x00013596) data_form_wide_pane

0x2c60,	// (0x000135ce) form_field_data_wide_pane_t1

0x2434,	// (0x00012da2) input_focus_pane_cp6

0xc98c,	// (0x0001d2fa) form_field_popup_pane_t1

0x2c1a,	// (0x00013588) input_focus_pane_cp7

0x2c97,	// (0x00013605) list_form_pane

0x2cab,	// (0x00013619) form_field_popup_wide_pane_t1

0x2c1a,	// (0x00013588) input_focus_pane_cp8

0x2cbd,	// (0x0001362b) list_form_wide_pane

0xc9ae,	// (0x0001d31c) form_field_slider_pane_t1_ParamLimits

0xc9ae,	// (0x0001d31c) form_field_slider_pane_t1

0xc9c6,	// (0x0001d334) form_field_slider_pane_t2_ParamLimits

0xc9c6,	// (0x0001d334) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001ffc6) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001ffc6) form_field_slider_pane_t

0x20b1,	// (0x00012a1f) input_focus_pane_cp9_ParamLimits

0x20b1,	// (0x00012a1f) input_focus_pane_cp9

0xc9db,	// (0x0001d349) slider_cont_pane_ParamLimits

0xc9db,	// (0x0001d349) slider_cont_pane

0x2d09,	// (0x00013677) form_field_slider_wide_pane_t1_ParamLimits

0x2d09,	// (0x00013677) form_field_slider_wide_pane_t1

0x2d1b,	// (0x00013689) form_field_slider_wide_pane_t2_ParamLimits

0x2d1b,	// (0x00013689) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001ffcb) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001ffcb) form_field_slider_wide_pane_t

0x20b1,	// (0x00012a1f) input_focus_pane_cp10_ParamLimits

0x20b1,	// (0x00012a1f) input_focus_pane_cp10

0xc9ef,	// (0x0001d35d) slider_cont_pane_cp1_ParamLimits

0xc9ef,	// (0x0001d35d) slider_cont_pane_cp1

0xca03,	// (0x0001d371) slider_form_pane_cp

0x2d49,	// (0x000136b7) input_focus_pane_g1

0x2d51,	// (0x000136bf) input_focus_pane_g2

0x2d59,	// (0x000136c7) input_focus_pane_g3

0x2d61,	// (0x000136cf) input_focus_pane_g4

0x2d69,	// (0x000136d7) input_focus_pane_g5

0x2d71,	// (0x000136df) input_focus_pane_g6

0x2d79,	// (0x000136e7) input_focus_pane_g7

0x2d81,	// (0x000136ef) input_focus_pane_g8

0x2d89,	// (0x000136f7) input_focus_pane_g9

0xe690,	// (0x0001effe) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001ffd0) input_focus_pane_g

0x4a71,	// (0x000153df) wait_border_pane_g3_copy1

0xca0b,	// (0x0001d379) data_form_pane_t1

0xe690,	// (0x0001effe) wait_anim_pane_g1_copy1

0xd5b2,	// (0x0001df20) data_form_wide_pane_t1

0xca25,	// (0x0001d393) list_form_graphic_pane_cp_ParamLimits

0xca25,	// (0x0001d393) list_form_graphic_pane_cp

0x59a3,	// (0x00016311) slider_form_pane_g1

0x59ac,	// (0x0001631a) slider_form_pane_g2

0x0006,

0xf960,	// (0x000202ce) slider_form_pane_g

0xca25,	// (0x0001d393) list_form_graphic_pane_ParamLimits

0xca25,	// (0x0001d393) list_form_graphic_pane

0x2de1,	// (0x0001374f) list_form_graphic_pane_g1

0x2de9,	// (0x00013757) list_form_graphic_pane_t1_ParamLimits

0x2de9,	// (0x00013757) list_form_graphic_pane_t1

0x1e1c,	// (0x0001278a) list_highlight_pane_cp5_ParamLimits

0x1e1c,	// (0x0001278a) list_highlight_pane_cp5

0x2dfe,	// (0x0001376c) find_pane_g1

0x2e07,	// (0x00013775) input_find_pane

0x2e10,	// (0x0001377e) input_find_pane_g1_ParamLimits

0x2e10,	// (0x0001377e) input_find_pane_g1

0x2e1c,	// (0x0001378a) input_find_pane_t1_ParamLimits

0x2e1c,	// (0x0001378a) input_find_pane_t1

0x2e31,	// (0x0001379f) input_find_pane_t2_ParamLimits

0x2e31,	// (0x0001379f) input_find_pane_t2

0x0001,

0xf677,	// (0x0001ffe5) input_find_pane_t_ParamLimits

0xf677,	// (0x0001ffe5) input_find_pane_t

0x2e46,	// (0x000137b4) input_focus_pane_cp5_ParamLimits

0x2e46,	// (0x000137b4) input_focus_pane_cp5

0x2e65,	// (0x000137d3) bg_popup_window_pane_cp2_ParamLimits

0x2e65,	// (0x000137d3) bg_popup_window_pane_cp2

0x2e72,	// (0x000137e0) listscroll_menu_pane_ParamLimits

0x2e72,	// (0x000137e0) listscroll_menu_pane

0xca43,	// (0x0001d3b1) popup_submenu_window_ParamLimits

0xca43,	// (0x0001d3b1) popup_submenu_window

0x2eaa,	// (0x00013818) find_popup_pane_g1

0x2eb2,	// (0x00013820) input_popup_find_pane_cp

0x2ebc,	// (0x0001382a) input_focus_pane_cp4_ParamLimits

0x2ebc,	// (0x0001382a) input_focus_pane_cp4

0x2ed6,	// (0x00013844) input_popup_find_pane_t1_ParamLimits

0x2ed6,	// (0x00013844) input_popup_find_pane_t1

0x1d3c,	// (0x000126aa) bg_popup_sub_pane_cp

0x2f04,	// (0x00013872) listscroll_popup_sub_pane

0x2f0c,	// (0x0001387a) list_submenu_pane_ParamLimits

0x2f0c,	// (0x0001387a) list_submenu_pane

0x2f1d,	// (0x0001388b) scroll_pane_cp4

0x2f25,	// (0x00013893) list_single_popup_submenu_pane_ParamLimits

0x2f25,	// (0x00013893) list_single_popup_submenu_pane

0x2f39,	// (0x000138a7) list_single_popup_submenu_pane_g1

0x2f41,	// (0x000138af) list_single_popup_submenu_pane_t1_ParamLimits

0x2f41,	// (0x000138af) list_single_popup_submenu_pane_t1

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp1_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp1

0x2f56,	// (0x000138c4) tabs_2_active_pane_g1

0xca7d,	// (0x0001d3eb) tabs_2_active_pane_t1

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp1_ParamLimits

0x20b1,	// (0x00012a1f) bg_passive_tab_pane_cp1

0x2f56,	// (0x000138c4) tabs_2_passive_pane_g1

0xca7d,	// (0x0001d3eb) tabs_2_passive_pane_t1

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp4

0xca8f,	// (0x0001d3fd) tabs_2_long_active_pane_t1

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp4

0x07e8,	// (0x00011156) list_single_midp_graphic_pane_g4_ParamLimits

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp5

0xcaa2,	// (0x0001d410) tabs_3_long_active_pane_t1

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp5

0x07e8,	// (0x00011156) list_single_midp_graphic_pane_g4

0x1e1c,	// (0x0001278a) bg_popup_window_pane_cp13_ParamLimits

0x1e1c,	// (0x0001278a) bg_popup_window_pane_cp13

0x2fb8,	// (0x00013926) listscroll_popup_fast_pane_ParamLimits

0x2fb8,	// (0x00013926) listscroll_popup_fast_pane

0x2fc7,	// (0x00013935) grid_popup_fast_pane_ParamLimits

0x2fc7,	// (0x00013935) grid_popup_fast_pane

0x2fd9,	// (0x00013947) scroll_pane_cp9_ParamLimits

0x2fd9,	// (0x00013947) scroll_pane_cp9

0x78ea,	// (0x00018258) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x78ea,	// (0x00018258) list_single_graphic_hl_pane_t1_cp2

0x2ffd,	// (0x0001396b) input_focus_pane_cp20_ParamLimits

0x2ffd,	// (0x0001396b) input_focus_pane_cp20

0x300b,	// (0x00013979) query_popup_data_pane_t1_ParamLimits

0x300b,	// (0x00013979) query_popup_data_pane_t1

0x301e,	// (0x0001398c) query_popup_data_pane_t2_ParamLimits

0x301e,	// (0x0001398c) query_popup_data_pane_t2

0x3064,	// (0x000139d2) query_popup_data_pane_t3_ParamLimits

0x3064,	// (0x000139d2) query_popup_data_pane_t3

0x30a5,	// (0x00013a13) query_popup_data_pane_t4_ParamLimits

0x30a5,	// (0x00013a13) query_popup_data_pane_t4

0x30e1,	// (0x00013a4f) query_popup_data_pane_t5_ParamLimits

0x30e1,	// (0x00013a4f) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001ffea) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001ffea) query_popup_data_pane_t

0x2d49,	// (0x000136b7) bg_set_opt_pane_g1

0x2d51,	// (0x000136bf) bg_set_opt_pane_g2

0x2d59,	// (0x000136c7) bg_set_opt_pane_g3

0x2d61,	// (0x000136cf) bg_set_opt_pane_g4

0x2d69,	// (0x000136d7) bg_set_opt_pane_g5

0x2d71,	// (0x000136df) bg_set_opt_pane_g6

0x2d79,	// (0x000136e7) bg_set_opt_pane_g7

0x2d81,	// (0x000136ef) bg_set_opt_pane_g8

0x2d89,	// (0x000136f7) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001fff5) bg_set_opt_pane_g

0xf33f,	// (0x0001fcad) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x0001fcad) control_top_pane_stacon

0xf392,	// (0x0001fd00) signal_pane_stacon_ParamLimits

0xf392,	// (0x0001fd00) signal_pane_stacon

0x377b,	// (0x000140e9) stacon_top_pane_g1_ParamLimits

0x377b,	// (0x000140e9) stacon_top_pane_g1

0xf3b7,	// (0x0001fd25) title_pane_stacon_ParamLimits

0xf3b7,	// (0x0001fd25) title_pane_stacon

0xf3e1,	// (0x0001fd4f) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x0001fd4f) uni_indicator_pane_stacon

0xf3f6,	// (0x0001fd64) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x0001fd64) battery_pane_stacon

0xf43a,	// (0x0001fda8) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x0001fda8) control_bottom_pane_stacon

0xf45d,	// (0x0001fdcb) navi_pane_stacon_ParamLimits

0xf45d,	// (0x0001fdcb) navi_pane_stacon

0x379d,	// (0x0001410b) stacon_bottom_pane_g1_ParamLimits

0x379d,	// (0x0001410b) stacon_bottom_pane_g1

0xf0a2,	// (0x0001fa10) aid_levels_signal_lsc_ParamLimits

0xf0a2,	// (0x0001fa10) aid_levels_signal_lsc

0xf0b8,	// (0x0001fa26) signal_pane_stacon_g1_ParamLimits

0xf0b8,	// (0x0001fa26) signal_pane_stacon_g1

0xf0cc,	// (0x0001fa3a) signal_pane_stacon_g2_ParamLimits

0xf0cc,	// (0x0001fa3a) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00020008) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00020008) signal_pane_stacon_g

0xf101,	// (0x0001fa6f) title_pane_stacon_t1_ParamLimits

0xf101,	// (0x0001fa6f) title_pane_stacon_t1

0x3125,	// (0x00013a93) uni_indicator_pane_stacon_g1

0x312f,	// (0x00013a9d) uni_indicator_pane_stacon_g2

0x3139,	// (0x00013aa7) uni_indicator_pane_stacon_g3

0x3143,	// (0x00013ab1) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00020014) uni_indicator_pane_stacon_g

0xf126,	// (0x0001fa94) control_top_pane_stacon_g1

0xf12e,	// (0x0001fa9c) control_top_pane_stacon_t1_ParamLimits

0xf12e,	// (0x0001fa9c) control_top_pane_stacon_t1

0xf165,	// (0x0001fad3) aid_levels_battery_lsc_ParamLimits

0xf165,	// (0x0001fad3) aid_levels_battery_lsc

0xf17c,	// (0x0001faea) battery_pane_stacon_g1_ParamLimits

0xf17c,	// (0x0001faea) battery_pane_stacon_g1

0xf18f,	// (0x0001fafd) battery_pane_stacon_g2_ParamLimits

0xf18f,	// (0x0001fafd) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0002001d) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0002001d) battery_pane_stacon_g

0xf1cd,	// (0x0001fb3b) navi_icon_pane_stacon

0xf1e1,	// (0x0001fb4f) navi_navi_pane_stacon

0xf1cd,	// (0x0001fb3b) navi_text_pane_stacon

0xf126,	// (0x0001fa94) control_bottom_pane_stacon_g1

0xf1f5,	// (0x0001fb63) control_bottom_pane_stacon_t1_ParamLimits

0xf1f5,	// (0x0001fb63) control_bottom_pane_stacon_t1

0xcab4,	// (0x0001d422) grid_app_pane_ParamLimits

0xcab4,	// (0x0001d422) grid_app_pane

0xcaec,	// (0x0001d45a) scroll_pane_cp15_ParamLimits

0xcaec,	// (0x0001d45a) scroll_pane_cp15

0xcb01,	// (0x0001d46f) cell_app_pane_ParamLimits

0xcb01,	// (0x0001d46f) cell_app_pane

0xcb46,	// (0x0001d4b4) cell_app_pane_g1_ParamLimits

0xcb46,	// (0x0001d4b4) cell_app_pane_g1

0x31e8,	// (0x00013b56) cell_app_pane_g2_ParamLimits

0x31e8,	// (0x00013b56) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00020022) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00020022) cell_app_pane_g

0xcb6a,	// (0x0001d4d8) cell_app_pane_t1_ParamLimits

0xcb6a,	// (0x0001d4d8) cell_app_pane_t1

0x320b,	// (0x00013b79) grid_highlight_pane_ParamLimits

0x320b,	// (0x00013b79) grid_highlight_pane

0x2d49,	// (0x000136b7) cell_highlight_pane_g1

0x2d51,	// (0x000136bf) cell_highlight_pane_g2

0x2d59,	// (0x000136c7) cell_highlight_pane_g3

0x2d61,	// (0x000136cf) cell_highlight_pane_g4

0x2d69,	// (0x000136d7) cell_highlight_pane_g5

0x2d71,	// (0x000136df) cell_highlight_pane_g6

0x2d79,	// (0x000136e7) cell_highlight_pane_g7

0x2d81,	// (0x000136ef) cell_highlight_pane_g8

0x2d89,	// (0x000136f7) cell_highlight_pane_g9

0xe690,	// (0x0001effe) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001ffd0) cell_highlight_pane_g

0x321c,	// (0x00013b8a) bg_scroll_pane

0xf23f,	// (0x0001fbad) scroll_handle_pane

0x3263,	// (0x00013bd1) scroll_bg_pane_g1

0x3278,	// (0x00013be6) scroll_bg_pane_g2

0x3290,	// (0x00013bfe) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00020027) scroll_bg_pane_g

0x32a5,	// (0x00013c13) scroll_handle_focus_pane_ParamLimits

0x32a5,	// (0x00013c13) scroll_handle_focus_pane

0x3263,	// (0x00013bd1) scroll_handle_pane_g1

0x32b2,	// (0x00013c20) scroll_handle_pane_g2

0x3290,	// (0x00013bfe) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0002002e) scroll_handle_pane_g

0x2ebc,	// (0x0001382a) bg_popup_sub_pane_cp21_ParamLimits

0x2ebc,	// (0x0001382a) bg_popup_sub_pane_cp21

0x32c6,	// (0x00013c34) popup_fep_japan_predictive_window_t1_ParamLimits

0x32c6,	// (0x00013c34) popup_fep_japan_predictive_window_t1

0x32e0,	// (0x00013c4e) popup_fep_japan_predictive_window_t2_ParamLimits

0x32e0,	// (0x00013c4e) popup_fep_japan_predictive_window_t2

0x3313,	// (0x00013c81) popup_fep_japan_predictive_window_t3_ParamLimits

0x3313,	// (0x00013c81) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00020035) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00020035) popup_fep_japan_predictive_window_t

0x1d3c,	// (0x000126aa) bg_popup_sub_pane_cp23

0x334a,	// (0x00013cb8) listscroll_japin_cand_pane

0x3352,	// (0x00013cc0) popup_fep_japan_candidate_window_t1

0x3360,	// (0x00013cce) candidate_pane_ParamLimits

0x3360,	// (0x00013cce) candidate_pane

0x3372,	// (0x00013ce0) scroll_pane_cp30

0x337a,	// (0x00013ce8) list_single_popup_jap_candidate_pane_ParamLimits

0x337a,	// (0x00013ce8) list_single_popup_jap_candidate_pane

0x1d3c,	// (0x000126aa) list_highlight_pane_cp30

0x338f,	// (0x00013cfd) list_single_popup_jap_candidate_pane_t1

0x339e,	// (0x00013d0c) level_1_signal

0x33b0,	// (0x00013d1e) level_2_signal

0x33c3,	// (0x00013d31) level_3_signal

0x33d6,	// (0x00013d44) level_4_signal

0x33e9,	// (0x00013d57) level_5_signal

0x33fc,	// (0x00013d6a) level_6_signal

0x340f,	// (0x00013d7d) level_7_signal

0x339e,	// (0x00013d0c) level_1_battery

0x33b0,	// (0x00013d1e) level_2_battery

0x33c3,	// (0x00013d31) level_3_battery

0x33d6,	// (0x00013d44) level_4_battery

0x33e9,	// (0x00013d57) level_5_battery

0x33fc,	// (0x00013d6a) level_6_battery

0x340f,	// (0x00013d7d) level_7_battery

0x343a,	// (0x00013da8) list_menu_pane_ParamLimits

0x343a,	// (0x00013da8) list_menu_pane

0x3450,	// (0x00013dbe) scroll_pane_cp25_ParamLimits

0x3450,	// (0x00013dbe) scroll_pane_cp25

0x3469,	// (0x00013dd7) list_double2_graphic_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double2_graphic_pane_cp2

0x3469,	// (0x00013dd7) list_double2_large_graphic_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double2_large_graphic_pane_cp2

0x3469,	// (0x00013dd7) list_double2_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double2_pane_cp2

0x3469,	// (0x00013dd7) list_double_graphic_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double_graphic_pane_cp2

0x3469,	// (0x00013dd7) list_double_large_graphic_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double_large_graphic_pane_cp2

0x3469,	// (0x00013dd7) list_double_number_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double_number_pane_cp2

0x3469,	// (0x00013dd7) list_double_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_2graphic_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_2graphic_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_graphic_heading_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_graphic_heading_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_graphic_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_graphic_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_heading_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_heading_pane_cp2

0x34a6,	// (0x00013e14) list_single_large_graphic_pane_cp2_ParamLimits

0x34a6,	// (0x00013e14) list_single_large_graphic_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_number_heading_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_number_heading_pane_cp2

0xcb81,	// (0x0001d4ef) list_single_number_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_number_pane_cp2

0xcb93,	// (0x0001d501) list_single_pane_cp2_ParamLimits

0xcb93,	// (0x0001d501) list_single_pane_cp2

0x353b,	// (0x00013ea9) bg_popup_sub_pane_cp22

0xf2f1,	// (0x0001fc5f) popup_side_volume_key_window_g1

0xf31b,	// (0x0001fc89) popup_side_volume_key_window_t1

0xf337,	// (0x0001fca5) volume_small_pane_cp1

0x20b1,	// (0x00012a1f) bg_popup_sub_pane_cp24_ParamLimits

0x20b1,	// (0x00012a1f) bg_popup_sub_pane_cp24

0x3551,	// (0x00013ebf) fep_china_uni_candidate_pane_ParamLimits

0x3551,	// (0x00013ebf) fep_china_uni_candidate_pane

0x3565,	// (0x00013ed3) fep_china_uni_entry_pane

0x3575,	// (0x00013ee3) popup_fep_china_uni_window_g1

0x3591,	// (0x00013eff) fep_china_uni_entry_pane_g1

0x3599,	// (0x00013f07) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00020066) fep_china_uni_entry_pane_g

0x35a1,	// (0x00013f0f) fep_entry_item_pane

0x35ab,	// (0x00013f19) fep_candidate_item_pane

0x35b3,	// (0x00013f21) fep_china_uni_candidate_pane_g1

0x35bb,	// (0x00013f29) fep_china_uni_candidate_pane_g2

0x35c3,	// (0x00013f31) fep_china_uni_candidate_pane_g3

0x35cb,	// (0x00013f39) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0002006b) fep_china_uni_candidate_pane_g

0xe690,	// (0x0001effe) fep_entry_item_pane_g1

0x35d3,	// (0x00013f41) fep_entry_item_pane_t1_ParamLimits

0x35d3,	// (0x00013f41) fep_entry_item_pane_t1

0x35e9,	// (0x00013f57) fep_candidate_item_pane_t1_ParamLimits

0x35e9,	// (0x00013f57) fep_candidate_item_pane_t1

0x35fe,	// (0x00013f6c) fep_candidate_item_pane_t2_ParamLimits

0x35fe,	// (0x00013f6c) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00020074) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00020074) fep_candidate_item_pane_t

0x1e1c,	// (0x0001278a) list_highlight_pane_cp31_ParamLimits

0x1e1c,	// (0x0001278a) list_highlight_pane_cp31

0x3610,	// (0x00013f7e) level_1_signal_lsc

0x3619,	// (0x00013f87) level_2_signal_lsc

0x3622,	// (0x00013f90) level_3_signal_lsc

0x362b,	// (0x00013f99) level_4_signal_lsc

0x3634,	// (0x00013fa2) level_5_signal_lsc

0x363d,	// (0x00013fab) level_6_signal_lsc

0x3646,	// (0x00013fb4) level_7_signal_lsc

0x3646,	// (0x00013fb4) level_1_battery_lsc

0x364f,	// (0x00013fbd) level_2_battery_lsc

0x3658,	// (0x00013fc6) level_3_battery_lsc

0x3661,	// (0x00013fcf) level_4_battery_lsc

0x366a,	// (0x00013fd8) level_5_battery_lsc

0x3673,	// (0x00013fe1) level_6_battery_lsc

0x3610,	// (0x00013f7e) level_7_battery_lsc

0x367c,	// (0x00013fea) scroll_handle_focus_pane_g1

0x3685,	// (0x00013ff3) scroll_handle_focus_pane_g2

0x368e,	// (0x00013ffc) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00020079) scroll_handle_focus_pane_g

0x3697,	// (0x00014005) list_single_2graphic_pane_g1_ParamLimits

0x3697,	// (0x00014005) list_single_2graphic_pane_g1

0xc5e4,	// (0x0001cf52) list_single_2graphic_pane_g2_ParamLimits

0xc5e4,	// (0x0001cf52) list_single_2graphic_pane_g2

0x2682,	// (0x00012ff0) list_single_2graphic_pane_g3_ParamLimits

0x2682,	// (0x00012ff0) list_single_2graphic_pane_g3

0x36a3,	// (0x00014011) list_single_2graphic_pane_g4_ParamLimits

0x36a3,	// (0x00014011) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00020080) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00020080) list_single_2graphic_pane_g

0x36b4,	// (0x00014022) list_single_2graphic_pane_t1_ParamLimits

0x36b4,	// (0x00014022) list_single_2graphic_pane_t1

0xcc20,	// (0x0001d58e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcc20,	// (0x0001d58e) list_double2_graphic_large_graphic_pane_g1

0xc60f,	// (0x0001cf7d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc60f,	// (0x0001cf7d) list_double2_graphic_large_graphic_pane_g2

0xc620,	// (0x0001cf8e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc620,	// (0x0001cf8e) list_double2_graphic_large_graphic_pane_g3

0xcc32,	// (0x0001d5a0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcc32,	// (0x0001d5a0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00020089) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00020089) list_double2_graphic_large_graphic_pane_g

0xcc3e,	// (0x0001d5ac) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcc3e,	// (0x0001d5ac) list_double2_graphic_large_graphic_pane_t1

0xcc54,	// (0x0001d5c2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcc54,	// (0x0001d5c2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00020092) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00020092) list_double2_graphic_large_graphic_pane_t

0x3868,	// (0x000141d6) popup_fast_swap_window_ParamLimits

0x3868,	// (0x000141d6) popup_fast_swap_window

0x3884,	// (0x000141f2) popup_side_volume_key_window

0x38a0,	// (0x0001420e) stacon_top_pane

0x38aa,	// (0x00014218) status_pane_ParamLimits

0x38aa,	// (0x00014218) status_pane

0xcc66,	// (0x0001d5d4) status_small_pane

0x1d3c,	// (0x000126aa) control_pane

0x1d3c,	// (0x000126aa) stacon_bottom_pane

0x2b2b,	// (0x00013499) scroll_pane_cp121

0x2b22,	// (0x00013490) set_content_pane

0x3726,	// (0x00014094) bg_active_tab_pane_g1_cp1

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp1

0x3738,	// (0x000140a6) bg_active_tab_pane_g3_cp1

0x3726,	// (0x00014094) bg_passive_tab_pane_g1_cp1

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp1

0x3738,	// (0x000140a6) bg_passive_tab_pane_g3_cp1

0x3741,	// (0x000140af) bg_active_tab_pane_g1_cp2

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp2

0x374a,	// (0x000140b8) bg_active_tab_pane_g3_cp2

0x3741,	// (0x000140af) bg_passive_tab_pane_g1_cp2

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp2

0x374a,	// (0x000140b8) bg_passive_tab_pane_g3_cp2

0x3753,	// (0x000140c1) bg_active_tab_pane_g1_cp3

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp3

0x375c,	// (0x000140ca) bg_active_tab_pane_g3_cp3

0x3753,	// (0x000140c1) bg_passive_tab_pane_g1_cp3

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp3

0x375c,	// (0x000140ca) bg_passive_tab_pane_g3_cp3

0x3765,	// (0x000140d3) bg_active_tab_pane_g1_cp4

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp4

0x3770,	// (0x000140de) bg_active_tab_pane_g3_cp4

0x3765,	// (0x000140d3) bg_passive_tab_pane_g1_cp4

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp4

0x3770,	// (0x000140de) bg_passive_tab_pane_g3_cp4

0x37b9,	// (0x00014127) bg_active_tab_pane_g1_cp5

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp5

0x37c2,	// (0x00014130) bg_active_tab_pane_g3_cp5

0x37b9,	// (0x00014127) bg_passive_tab_pane_g1_cp5

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp5

0x37c2,	// (0x00014130) bg_passive_tab_pane_g3_cp5

0x60da,	// (0x00016a48) list_set_graphic_pane_ParamLimits

0x60da,	// (0x00016a48) list_set_graphic_pane

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp4

0x37eb,	// (0x00014159) list_set_graphic_pane_g1_ParamLimits

0x37eb,	// (0x00014159) list_set_graphic_pane_g1

0x37f7,	// (0x00014165) list_set_graphic_pane_g2_ParamLimits

0x37f7,	// (0x00014165) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00020097) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00020097) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x0002040c) volume_small_pane_cp_g

0x381b,	// (0x00014189) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x381b,	// (0x00014189) list_double2_large_graphic_pane_g1_cp2

0x3827,	// (0x00014195) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3827,	// (0x00014195) list_double2_large_graphic_pane_g2_cp2

0x3838,	// (0x000141a6) list_double2_large_graphic_pane_g3_cp2

0x3840,	// (0x000141ae) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3840,	// (0x000141ae) list_double2_large_graphic_pane_t1_cp2

0x3856,	// (0x000141c4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3856,	// (0x000141c4) list_double2_large_graphic_pane_t2_cp2

0x5544,	// (0x00015eb2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5544,	// (0x00015eb2) list_double_large_graphic_pane_g1_cp2

0x5555,	// (0x00015ec3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5555,	// (0x00015ec3) list_double_large_graphic_pane_g2_cp2

0x39d1,	// (0x0001433f) list_double_large_graphic_pane_g3_cp2

0x5566,	// (0x00015ed4) list_double_large_graphic_pane_g4_cp

0x556e,	// (0x00015edc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x556e,	// (0x00015edc) list_double_large_graphic_pane_t1_cp2

0x5585,	// (0x00015ef3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5585,	// (0x00015ef3) list_double_large_graphic_pane_t2_cp2

0x38c3,	// (0x00014231) list_double2_graphic_pane_g1_cp2_ParamLimits

0x38c3,	// (0x00014231) list_double2_graphic_pane_g1_cp2

0x38d1,	// (0x0001423f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x38d1,	// (0x0001423f) list_double2_graphic_pane_g2_cp2

0x38e2,	// (0x00014250) list_double2_graphic_pane_g3_cp2

0x38ec,	// (0x0001425a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x38ec,	// (0x0001425a) list_double2_graphic_pane_t1_cp2

0x3902,	// (0x00014270) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3902,	// (0x00014270) list_double2_graphic_pane_t2_cp2

0x3914,	// (0x00014282) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3914,	// (0x00014282) list_single_number_heading_pane_g1_cp2

0x3920,	// (0x0001428e) list_single_number_heading_pane_g2_cp2

0x3928,	// (0x00014296) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3928,	// (0x00014296) list_single_number_heading_pane_t1_cp2

0x393e,	// (0x000142ac) list_single_number_heading_pane_t2_cp2_ParamLimits

0x393e,	// (0x000142ac) list_single_number_heading_pane_t2_cp2

0x3950,	// (0x000142be) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3950,	// (0x000142be) list_single_number_heading_pane_t3_cp2

0x3914,	// (0x00014282) list_single_heading_pane_g1_cp2_ParamLimits

0x3914,	// (0x00014282) list_single_heading_pane_g1_cp2

0x3920,	// (0x0001428e) list_single_heading_pane_g2_cp2

0x3928,	// (0x00014296) list_single_heading_pane_t1_cp2_ParamLimits

0x3928,	// (0x00014296) list_single_heading_pane_t1_cp2

0x534c,	// (0x00015cba) list_single_heading_pane_t2_cp2_ParamLimits

0x534c,	// (0x00015cba) list_single_heading_pane_t2_cp2

0x5294,	// (0x00015c02) list_double_graphic_pane_g1_cp2_ParamLimits

0x5294,	// (0x00015c02) list_double_graphic_pane_g1_cp2

0x52a0,	// (0x00015c0e) list_double_graphic_pane_g2_cp2_ParamLimits

0x52a0,	// (0x00015c0e) list_double_graphic_pane_g2_cp2

0x52af,	// (0x00015c1d) list_double_graphic_pane_g3_cp2

0x52b7,	// (0x00015c25) list_double_graphic_pane_t1_cp2_ParamLimits

0x52b7,	// (0x00015c25) list_double_graphic_pane_t1_cp2

0x52cd,	// (0x00015c3b) list_double_graphic_pane_t2_cp2_ParamLimits

0x52cd,	// (0x00015c3b) list_double_graphic_pane_t2_cp2

0x39c5,	// (0x00014333) list_double_number_pane_g1_cp2_ParamLimits

0x39c5,	// (0x00014333) list_double_number_pane_g1_cp2

0x39d1,	// (0x0001433f) list_double_number_pane_g2_cp2

0x5258,	// (0x00015bc6) list_double_number_pane_t1_cp2_ParamLimits

0x5258,	// (0x00015bc6) list_double_number_pane_t1_cp2

0x526c,	// (0x00015bda) list_double_number_pane_t2_cp2_ParamLimits

0x526c,	// (0x00015bda) list_double_number_pane_t2_cp2

0x5282,	// (0x00015bf0) list_double_number_pane_t3_cp2_ParamLimits

0x5282,	// (0x00015bf0) list_double_number_pane_t3_cp2

0x5141,	// (0x00015aaf) list_single_graphic_pane_g1_cp2_ParamLimits

0x5141,	// (0x00015aaf) list_single_graphic_pane_g1_cp2

0x3a32,	// (0x000143a0) list_single_graphic_pane_g2_cp2_ParamLimits

0x3a32,	// (0x000143a0) list_single_graphic_pane_g2_cp2

0x3a3e,	// (0x000143ac) list_single_graphic_pane_g3_cp2

0x5117,	// (0x00015a85) list_single_graphic_pane_t1_cp2_ParamLimits

0x5117,	// (0x00015a85) list_single_graphic_pane_t1_cp2

0x3a32,	// (0x000143a0) list_single_number_pane_g1_cp2_ParamLimits

0x3a32,	// (0x000143a0) list_single_number_pane_g1_cp2

0x3a3e,	// (0x000143ac) list_single_number_pane_g2_cp2

0x5117,	// (0x00015a85) list_single_number_pane_t1_cp2_ParamLimits

0x5117,	// (0x00015a85) list_single_number_pane_t1_cp2

0x512d,	// (0x00015a9b) list_single_number_pane_t2_cp2_ParamLimits

0x512d,	// (0x00015a9b) list_single_number_pane_t2_cp2

0x3827,	// (0x00014195) list_double2_pane_g1_cp2_ParamLimits

0x3827,	// (0x00014195) list_double2_pane_g1_cp2

0x3838,	// (0x000141a6) list_double2_pane_g2_cp2

0x399d,	// (0x0001430b) list_double2_pane_t1_cp2_ParamLimits

0x399d,	// (0x0001430b) list_double2_pane_t1_cp2

0x39b3,	// (0x00014321) list_double2_pane_t2_cp2_ParamLimits

0x39b3,	// (0x00014321) list_double2_pane_t2_cp2

0x39c5,	// (0x00014333) list_double_pane_g1_cp2_ParamLimits

0x39c5,	// (0x00014333) list_double_pane_g1_cp2

0x39d1,	// (0x0001433f) list_double_pane_g2_cp2

0x39d9,	// (0x00014347) list_double_pane_t1_cp2_ParamLimits

0x39d9,	// (0x00014347) list_double_pane_t1_cp2

0x39ef,	// (0x0001435d) list_double_pane_t2_cp2_ParamLimits

0x39ef,	// (0x0001435d) list_double_pane_t2_cp2

0x3a22,	// (0x00014390) list_single_pane_cp2_g3

0x3a32,	// (0x000143a0) list_single_pane_g1_cp2_ParamLimits

0x3a32,	// (0x000143a0) list_single_pane_g1_cp2

0x3a3e,	// (0x000143ac) list_single_pane_g2_cp2

0x3a46,	// (0x000143b4) list_single_pane_t1_cp2_ParamLimits

0x3a46,	// (0x000143b4) list_single_pane_t1_cp2

0x3a5e,	// (0x000143cc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3a5e,	// (0x000143cc) list_single_large_graphic_pane_g1_cp2

0x2676,	// (0x00012fe4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2676,	// (0x00012fe4) list_single_large_graphic_pane_g2_cp2

0x3a6a,	// (0x000143d8) list_single_large_graphic_pane_g3_cp2

0x3a72,	// (0x000143e0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3a72,	// (0x000143e0) list_single_large_graphic_pane_g4_cp1

0x3a8c,	// (0x000143fa) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3a8c,	// (0x000143fa) list_single_large_graphic_pane_t1_cp2

0x50e3,	// (0x00015a51) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x50e3,	// (0x00015a51) list_single_graphic_heading_pane_g1_cp2

0x50b0,	// (0x00015a1e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x50b0,	// (0x00015a1e) list_single_graphic_heading_pane_g4_cp2

0x3a3e,	// (0x000143ac) list_single_graphic_heading_pane_g5_cp2

0x50ef,	// (0x00015a5d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x50ef,	// (0x00015a5d) list_single_graphic_heading_pane_t1_cp2

0x5105,	// (0x00015a73) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5105,	// (0x00015a73) list_single_graphic_heading_pane_t2_cp2

0x50a4,	// (0x00015a12) list_single_2graphic_pane_g1_cp2_ParamLimits

0x50a4,	// (0x00015a12) list_single_2graphic_pane_g1_cp2

0x50b0,	// (0x00015a1e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x50b0,	// (0x00015a1e) list_single_2graphic_pane_g2_cp2

0x3a3e,	// (0x000143ac) list_single_2graphic_pane_g3_cp2

0x50c1,	// (0x00015a2f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x50c1,	// (0x00015a2f) list_single_2graphic_pane_g4_cp2

0x50cd,	// (0x00015a3b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x50cd,	// (0x00015a3b) list_single_2graphic_pane_t1_cp2

0xe690,	// (0x0001effe) list_highlight_pane_g10_cp1

0x4c7c,	// (0x000155ea) list_highlight_pane_g1_cp1

0x4c84,	// (0x000155f2) list_highlight_pane_g2_cp1

0x4c8c,	// (0x000155fa) list_highlight_pane_g3_cp1

0x4c94,	// (0x00015602) list_highlight_pane_g4_cp1

0x4c9c,	// (0x0001560a) list_highlight_pane_g5_cp1

0x4ca4,	// (0x00015612) list_highlight_pane_g6_cp1

0x4cac,	// (0x0001561a) list_highlight_pane_g7_cp1

0x4cb4,	// (0x00015622) list_highlight_pane_g8_cp1

0x4cbc,	// (0x0001562a) list_highlight_pane_g9_cp1

0xd2b4,	// (0x0001dc22) form_field_slider_pane_t3

0xd2c2,	// (0x0001dc30) form_field_slider_pane_t4

0x4bb8,	// (0x00015526) slider_form_pane_ParamLimits

0x4bb8,	// (0x00015526) slider_form_pane

0x1d3c,	// (0x000126aa) control_abbreviations

0x1d3c,	// (0x000126aa) control_conventions

0x1d3c,	// (0x000126aa) control_definitions

0x1d3c,	// (0x000126aa) format_table_attribute

0x5396,	// (0x00015d04) bg_popup_preview_window_pane_g9

0x1d3c,	// (0x000126aa) format_table_data2

0x1d3c,	// (0x000126aa) format_table_data3

0x1d3c,	// (0x000126aa) format_table_data_example

0x0008,

0x1d3c,	// (0x000126aa) intro_purpose

0xf8c0,	// (0x0002022e) bg_popup_preview_window_pane_g

0x1d3c,	// (0x000126aa) texts_category

0x1d3c,	// (0x000126aa) texts_graphics

0x3aa2,	// (0x00014410) text_digital

0x3ab1,	// (0x0001441f) text_primary

0x3ac0,	// (0x0001442e) text_primary_small

0x3acf,	// (0x0001443d) text_secondary

0x3ade,	// (0x0001444c) text_title

0x5bbc,	// (0x0001652a) bg_passive_tab_pane_g1_cp3_srt

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp3_srt

0x5bc5,	// (0x00016533) bg_passive_tab_pane_g3_cp3_srt

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp3_srt_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp3_srt

0x5bce,	// (0x0001653c) tabs_4_active_pane_srt_g1

0xd65d,	// (0x0001dfcb) tabs_4_active_pane_srt_t1_ParamLimits

0xd65d,	// (0x0001dfcb) tabs_4_active_pane_srt_t1

0x5bbc,	// (0x0001652a) bg_active_tab_pane_g1_cp3_copy1

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp3_copy1

0x5bc5,	// (0x00016533) bg_active_tab_pane_g3_cp3_copy1

0x1e1c,	// (0x0001278a) tabs_2_long_active_pane_srt_ParamLimits

0x1e1c,	// (0x0001278a) tabs_2_long_active_pane_srt

0x1e1c,	// (0x0001278a) tabs_2_long_passive_pane_srt_ParamLimits

0x1e1c,	// (0x0001278a) tabs_2_long_passive_pane_srt

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp4_srt

0x57d6,	// (0x00016144) bg_passive_tab_pane_g1_cp4_srt

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp4_srt

0x57df,	// (0x0001614d) bg_passive_tab_pane_g3_cp4_srt

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp4_srt_ParamLimits

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp4_srt

0xd41f,	// (0x0001dd8d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd41f,	// (0x0001dd8d) tabs_2_long_active_pane_srt_t1

0x57d6,	// (0x00016144) bg_active_tab_pane_g1_cp4_srt

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp4_srt

0x57df,	// (0x0001614d) bg_active_tab_pane_g3_cp4_srt

0x20b1,	// (0x00012a1f) tabs_3_long_active_pane_srt_ParamLimits

0x20b1,	// (0x00012a1f) tabs_3_long_active_pane_srt

0x20b1,	// (0x00012a1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x20b1,	// (0x00012a1f) tabs_3_long_passive_pane_cp_srt

0x20b1,	// (0x00012a1f) tabs_3_long_passive_pane_srt_ParamLimits

0x20b1,	// (0x00012a1f) tabs_3_long_passive_pane_srt

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp5_srt

0x37b9,	// (0x00014127) bg_passive_tab_pane_g1_cp5_srt

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp5_srt

0x37c2,	// (0x00014130) bg_passive_tab_pane_g3_cp5_srt

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp5_srt_ParamLimits

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp5_srt

0xd409,	// (0x0001dd77) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd409,	// (0x0001dd77) tabs_3_long_active_pane_srt_t1

0x37b9,	// (0x00014127) bg_active_tab_pane_g1_cp5_srt

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp5_srt

0x37c2,	// (0x00014130) bg_active_tab_pane_g3_cp5_srt

0x57b6,	// (0x00016124) navi_text_pane_srt_t1

0x57ae,	// (0x0001611c) navi_icon_pane_srt_g1

0x3cb3,	// (0x00014621) midp_editing_number_pane_srt

0x3aed,	// (0x0001445b) midp_ticker_pane_srt

0x3cbb,	// (0x00014629) midp_ticker_pane_srt_g1

0x3cc3,	// (0x00014631) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x000200b6) midp_ticker_pane_srt_g

0x3ccb,	// (0x00014639) midp_ticker_pane_srt_t1

0x579f,	// (0x0001610d) midp_editing_number_pane_t1_copy1

0xcc71,	// (0x0001d5df) listscroll_midp_pane

0xcc71,	// (0x0001d5df) midp_form_pane

0x3b65,	// (0x000144d3) midp_info_popup_window_ParamLimits

0x3b65,	// (0x000144d3) midp_info_popup_window

0x2ebc,	// (0x0001382a) bg_popup_sub_pane_cp50_ParamLimits

0x2ebc,	// (0x0001382a) bg_popup_sub_pane_cp50

0x48a0,	// (0x0001520e) listscroll_midp_info_pane_ParamLimits

0x48a0,	// (0x0001520e) listscroll_midp_info_pane

0x4880,	// (0x000151ee) listscroll_form_midp_pane_ParamLimits

0x4880,	// (0x000151ee) listscroll_form_midp_pane

0x488c,	// (0x000151fa) scroll_bar_cp050

0x4880,	// (0x000151ee) list_midp_pane

0x6951,	// (0x000172bf) signal_pane_g2_cp

0x479a,	// (0x00015108) listscroll_midp_info_pane_t1_ParamLimits

0x479a,	// (0x00015108) listscroll_midp_info_pane_t1

0x47b2,	// (0x00015120) listscroll_midp_info_pane_t2_ParamLimits

0x47b2,	// (0x00015120) listscroll_midp_info_pane_t2

0x47f0,	// (0x0001515e) listscroll_midp_info_pane_t3_ParamLimits

0x47f0,	// (0x0001515e) listscroll_midp_info_pane_t3

0x482a,	// (0x00015198) listscroll_midp_info_pane_t4_ParamLimits

0x482a,	// (0x00015198) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x00020169) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x00020169) listscroll_midp_info_pane_t

0x2f1d,	// (0x0001388b) scroll_pane_cp21

0x4738,	// (0x000150a6) form_midp_field_choice_group_pane

0x4741,	// (0x000150af) form_midp_field_text_pane

0x4780,	// (0x000150ee) form_midp_field_time_pane

0x4788,	// (0x000150f6) form_midp_gauge_slider_pane

0x4791,	// (0x000150ff) form_midp_gauge_wait_pane

0x1d3c,	// (0x000126aa) form_midp_image_pane

0xd29e,	// (0x0001dc0c) list_single_midp_pane_ParamLimits

0xd29e,	// (0x0001dc0c) list_single_midp_pane

0xd27d,	// (0x0001dbeb) form_midp_field_text_pane_t1

0x4483,	// (0x00014df1) input_focus_pane_cp050

0x46f9,	// (0x00015067) list_midp_form_text_pane

0x4691,	// (0x00014fff) form_midp_field_choice_group_pane_t1

0x469f,	// (0x0001500d) input_focus_pane_cp051

0x46b3,	// (0x00015021) list_midp_choice_pane

0x1d3c,	// (0x000126aa) status_idle_pane

0x4675,	// (0x00014fe3) form_midp_field_time_pane_t1

0xe690,	// (0x0001effe) wait_anim_pane_g2_copy1

0x4683,	// (0x00014ff1) form_midp_field_time_pane_t2

0x0001,

0x3c13,	// (0x00014581) aid_navinavi_width_2_pane

0xf7f6,	// (0x00020164) form_midp_field_time_pane_t

0x1d3c,	// (0x000126aa) input_focus_pane_cp052

0x1d3c,	// (0x000126aa) bg_input_focus_pane_cp040

0x4635,	// (0x00014fa3) form_midp_gauge_slider_pane_t1

0x4643,	// (0x00014fb1) form_midp_gauge_slider_pane_t2

0xd261,	// (0x0001dbcf) form_midp_gauge_slider_pane_t3

0xd26f,	// (0x0001dbdd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0002015b) form_midp_gauge_slider_pane_t

0x466d,	// (0x00014fdb) form_midp_slider_pane

0x1e1c,	// (0x0001278a) bg_input_focus_pane_cp041_ParamLimits

0x1e1c,	// (0x0001278a) bg_input_focus_pane_cp041

0x4602,	// (0x00014f70) form_midp_gauge_wait_pane_t1_ParamLimits

0x4602,	// (0x00014f70) form_midp_gauge_wait_pane_t1

0x4614,	// (0x00014f82) form_midp_gauge_wait_pane_t2_ParamLimits

0x4614,	// (0x00014f82) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x00020156) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x00020156) form_midp_gauge_wait_pane_t

0x4626,	// (0x00014f94) form_midp_wait_pane_ParamLimits

0x4626,	// (0x00014f94) form_midp_wait_pane

0x45cc,	// (0x00014f3a) form_midp_image_pane_g1

0x45d5,	// (0x00014f43) form_midp_image_pane_t1

0x45e4,	// (0x00014f52) form_midp_image_pane_t2

0x45f3,	// (0x00014f61) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0002014f) form_midp_image_pane_t

0x45b4,	// (0x00014f22) list_single_midp_pane_g1

0x45bd,	// (0x00014f2b) list_single_midp_pane_t1

0xd24d,	// (0x0001dbbb) list_midp_form_item_pane_ParamLimits

0xd24d,	// (0x0001dbbb) list_midp_form_item_pane

0x3bbb,	// (0x00014529) list_midp_form_item_pane_t1

0x3bca,	// (0x00014538) midp_ticker_pane_g1

0x3bd6,	// (0x00014544) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0002009c) midp_ticker_pane_g

0x3be2,	// (0x00014550) midp_ticker_pane_t1

0x5a23,	// (0x00016391) midp_editing_number_pane_t1

0x5a01,	// (0x0001636f) midp_editing_number_pane

0x5a10,	// (0x0001637e) midp_ticker_pane

0x577d,	// (0x000160eb) ai_message_heading_pane

0x1d3c,	// (0x000126aa) bg_popup_window_pane_cp14

0x5785,	// (0x000160f3) listscroll_ai_message_pane

0x5707,	// (0x00016075) ai_message_heading_pane_g1_ParamLimits

0x5707,	// (0x00016075) ai_message_heading_pane_g1

0x5713,	// (0x00016081) ai_message_heading_pane_g2_ParamLimits

0x5713,	// (0x00016081) ai_message_heading_pane_g2

0x571f,	// (0x0001608d) ai_message_heading_pane_g3_ParamLimits

0x571f,	// (0x0001608d) ai_message_heading_pane_g3

0x572b,	// (0x00016099) ai_message_heading_pane_g4_ParamLimits

0x572b,	// (0x00016099) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x00020290) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x00020290) ai_message_heading_pane_g

0x5737,	// (0x000160a5) ai_message_heading_pane_t1_ParamLimits

0x5737,	// (0x000160a5) ai_message_heading_pane_t1

0x5751,	// (0x000160bf) ai_message_heading_pane_t2_ParamLimits

0x5751,	// (0x000160bf) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x00020299) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x00020299) ai_message_heading_pane_t

0x5763,	// (0x000160d1) bg_popup_heading_pane_cp1_ParamLimits

0x5763,	// (0x000160d1) bg_popup_heading_pane_cp1

0x56f5,	// (0x00016063) list_ai_message_pane_ParamLimits

0x56f5,	// (0x00016063) list_ai_message_pane

0x2f1d,	// (0x0001388b) scroll_pane_cp10

0x5691,	// (0x00015fff) list_ai_message_pane_g1

0x5699,	// (0x00016007) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0002026d) list_ai_message_pane_g

0x56a1,	// (0x0001600f) list_ai_message_pane_t1_ParamLimits

0x56a1,	// (0x0001600f) list_ai_message_pane_t1

0x56b6,	// (0x00016024) list_ai_message_pane_t2_ParamLimits

0x56b6,	// (0x00016024) list_ai_message_pane_t2

0x56cb,	// (0x00016039) list_ai_message_pane_t3_ParamLimits

0x56cb,	// (0x00016039) list_ai_message_pane_t3

0x56e0,	// (0x0001604e) list_ai_message_pane_t4_ParamLimits

0x56e0,	// (0x0001604e) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x00020272) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x00020272) list_ai_message_pane_t

0xd3e8,	// (0x0001dd56) cell_ai_soft_ind_pane_ParamLimits

0xd3e8,	// (0x0001dd56) cell_ai_soft_ind_pane

0x3bf4,	// (0x00014562) cell_ai_soft_ind_pane_g1_ParamLimits

0x3bf4,	// (0x00014562) cell_ai_soft_ind_pane_g1

0x1d3c,	// (0x000126aa) grid_highlight_cp1

0x3c01,	// (0x0001456f) text_secondary_cp56_ParamLimits

0x3c01,	// (0x0001456f) text_secondary_cp56

0x5651,	// (0x00015fbf) example_general_pane_ParamLimits

0x5651,	// (0x00015fbf) example_general_pane

0x565d,	// (0x00015fcb) example_parent_pane_g1_ParamLimits

0x565d,	// (0x00015fcb) example_parent_pane_g1

0x5669,	// (0x00015fd7) example_parent_pane_t1_ParamLimits

0x5669,	// (0x00015fd7) example_parent_pane_t1

0xb864,	// (0x0001c1d2) popup_preview_text_window_ParamLimits

0xb864,	// (0x0001c1d2) popup_preview_text_window

0x3a2a,	// (0x00014398) list_single_pane_cp2_g4

0x218d,	// (0x00012afb) bg_popup_preview_window_pane_ParamLimits

0x218d,	// (0x00012afb) bg_popup_preview_window_pane

0x539e,	// (0x00015d0c) popup_preview_text_window_t1_ParamLimits

0x539e,	// (0x00015d0c) popup_preview_text_window_t1

0x53bc,	// (0x00015d2a) popup_preview_text_window_t2_ParamLimits

0x53bc,	// (0x00015d2a) popup_preview_text_window_t2

0x5405,	// (0x00015d73) popup_preview_text_window_t3_ParamLimits

0x5405,	// (0x00015d73) popup_preview_text_window_t3

0x544a,	// (0x00015db8) popup_preview_text_window_t4_ParamLimits

0x544a,	// (0x00015db8) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x00020241) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x00020241) popup_preview_text_window_t

0x54c8,	// (0x00015e36) scroll_pane_cp11

0x4361,	// (0x00014ccf) bg_popup_preview_window_pane_g1

0x535e,	// (0x00015ccc) bg_popup_preview_window_pane_g2

0x5366,	// (0x00015cd4) bg_popup_preview_window_pane_g3

0x536e,	// (0x00015cdc) bg_popup_preview_window_pane_g4

0x5376,	// (0x00015ce4) bg_popup_preview_window_pane_g5

0x537e,	// (0x00015cec) bg_popup_preview_window_pane_g6

0x5386,	// (0x00015cf4) bg_popup_preview_window_pane_g7

0x538e,	// (0x00015cfc) bg_popup_preview_window_pane_g8

0xee56,	// (0x0001f7c4) aid_popup_width_pane

0xb7e0,	// (0x0001c14e) popup_midp_note_alarm_window_ParamLimits

0xb7e0,	// (0x0001c14e) popup_midp_note_alarm_window

0x2bec,	// (0x0001355a) data_form_pane_ParamLimits

0xc968,	// (0x0001d2d6) form_field_data_pane_g1

0xc972,	// (0x0001d2e0) form_field_data_pane_t1_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_ParamLimits

0x2c28,	// (0x00013596) data_form_wide_pane_ParamLimits

0x2c34,	// (0x000135a2) form_field_data_wide_pane_g1

0x2c60,	// (0x000135ce) form_field_data_wide_pane_t1_ParamLimits

0x2434,	// (0x00012da2) input_focus_pane_cp6_ParamLimits

0xca6f,	// (0x0001d3dd) input_popup_find_pane_g1_ParamLimits

0xca6f,	// (0x0001d3dd) input_popup_find_pane_g1

0xf1a0,	// (0x0001fb0e) aid_navi_side_left_pane

0xf1b5,	// (0x0001fb23) aid_navi_side_right_pane

0x4d77,	// (0x000156e5) bg_popup_window_pane_cp30_ParamLimits

0x4d77,	// (0x000156e5) bg_popup_window_pane_cp30

0x4df1,	// (0x0001575f) popup_midp_note_alarm_window_g1_ParamLimits

0x4df1,	// (0x0001575f) popup_midp_note_alarm_window_g1

0x4e21,	// (0x0001578f) popup_midp_note_alarm_window_t1_ParamLimits

0x4e21,	// (0x0001578f) popup_midp_note_alarm_window_t1

0x4ec2,	// (0x00015830) popup_midp_note_alarm_window_t2_ParamLimits

0x4ec2,	// (0x00015830) popup_midp_note_alarm_window_t2

0x4f70,	// (0x000158de) popup_midp_note_alarm_window_t3_ParamLimits

0x4f70,	// (0x000158de) popup_midp_note_alarm_window_t3

0x4fa2,	// (0x00015910) popup_midp_note_alarm_window_t4_ParamLimits

0x4fa2,	// (0x00015910) popup_midp_note_alarm_window_t4

0x4fc8,	// (0x00015936) popup_midp_note_alarm_window_t5_ParamLimits

0x4fc8,	// (0x00015936) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x000201de) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x000201de) popup_midp_note_alarm_window_t

0x5074,	// (0x000159e2) wait_bar_pane_cp1_ParamLimits

0x5074,	// (0x000159e2) wait_bar_pane_cp1

0x1d3c,	// (0x000126aa) wait_anim_pane_copy1

0x1d3c,	// (0x000126aa) wait_border_pane_copy1

0x4a5d,	// (0x000153cb) wait_border_pane_g1_copy1

0x2c77,	// (0x000135e5) form_field_popup_pane_g1

0xc98c,	// (0x0001d2fa) form_field_popup_pane_t1_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_cp7_ParamLimits

0x2c97,	// (0x00013605) list_form_pane_ParamLimits

0x2ca3,	// (0x00013611) form_field_popup_wide_pane_g1

0x2cab,	// (0x00013619) form_field_popup_wide_pane_t1_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_cp8_ParamLimits

0x2cbd,	// (0x0001362b) list_form_wide_pane_ParamLimits

0x5c5e,	// (0x000165cc) aid_size_cell_graphic_pane

0xca0b,	// (0x0001d379) data_form_pane_t1_ParamLimits

0xd5b2,	// (0x0001df20) data_form_wide_pane_t1_ParamLimits

0xced2,	// (0x0001d840) bg_status_flat_pane

0xc287,	// (0x0001cbf5) title_pane_t1_ParamLimits

0x1de4,	// (0x00012752) title_pane_t2_ParamLimits

0x1e0a,	// (0x00012778) title_pane_t3_ParamLimits

0xf532,	// (0x0001fea0) title_pane_t_ParamLimits

0x339e,	// (0x00013d0c) level_1_signal_ParamLimits

0x33b0,	// (0x00013d1e) level_2_signal_ParamLimits

0x33c3,	// (0x00013d31) level_3_signal_ParamLimits

0x33d6,	// (0x00013d44) level_4_signal_ParamLimits

0x33e9,	// (0x00013d57) level_5_signal_ParamLimits

0x33fc,	// (0x00013d6a) level_6_signal_ParamLimits

0x340f,	// (0x00013d7d) level_7_signal_ParamLimits

0x339e,	// (0x00013d0c) level_1_battery_ParamLimits

0x33b0,	// (0x00013d1e) level_2_battery_ParamLimits

0x33c3,	// (0x00013d31) level_3_battery_ParamLimits

0x33d6,	// (0x00013d44) level_4_battery_ParamLimits

0x33e9,	// (0x00013d57) level_5_battery_ParamLimits

0x33fc,	// (0x00013d6a) level_6_battery_ParamLimits

0x340f,	// (0x00013d7d) level_7_battery_ParamLimits

0x4c7c,	// (0x000155ea) bg_status_flat_pane_g1

0x4c84,	// (0x000155f2) bg_status_flat_pane_g2

0x4c8c,	// (0x000155fa) bg_status_flat_pane_g3

0x4c94,	// (0x00015602) bg_status_flat_pane_g4

0x4c9c,	// (0x0001560a) bg_status_flat_pane_g5

0x4ca4,	// (0x00015612) bg_status_flat_pane_g6

0x4cac,	// (0x0001561a) bg_status_flat_pane_g7

0xc313,	// (0x0001cc81) tabs_3_active_pane_t1_ParamLimits

0xc313,	// (0x0001cc81) tabs_3_passive_pane_t1_ParamLimits

0xc325,	// (0x0001cc93) tabs_4_active_pane_t1_ParamLimits

0xc325,	// (0x0001cc93) tabs_4_1_passive_pane_t1_ParamLimits

0xca7d,	// (0x0001d3eb) tabs_2_active_pane_t1_ParamLimits

0xca7d,	// (0x0001d3eb) tabs_2_passive_pane_t1_ParamLimits

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp4_ParamLimits

0xca8f,	// (0x0001d3fd) tabs_2_long_active_pane_t1_ParamLimits

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp4_ParamLimits

0x081c,	// (0x0001118a) list_single_midp_graphic_pane_t1_ParamLimits

0x1e1c,	// (0x0001278a) bg_active_tab_pane_cp5_ParamLimits

0xcaa2,	// (0x0001d410) tabs_3_long_active_pane_t1_ParamLimits

0x3e19,	// (0x00014787) bg_passive_tab_pane_cp5_ParamLimits

0x081c,	// (0x0001118a) list_single_midp_graphic_pane_t1

0xced2,	// (0x0001d840) bg_status_flat_pane_ParamLimits

0x3fdb,	// (0x00014949) indicator_pane_cp2_ParamLimits

0x3fdb,	// (0x00014949) indicator_pane_cp2

0xd050,	// (0x0001d9be) navi_pane_srt_ParamLimits

0xd050,	// (0x0001d9be) navi_pane_srt

0x412a,	// (0x00014a98) popup_clock_digital_analogue_window_cp1

0x1f13,	// (0x00012881) indicator_pane_t1

0x3aed,	// (0x0001445b) copy_highlight_pane

0x3aed,	// (0x0001445b) cursor_graphics_pane

0x3aed,	// (0x0001445b) graphic_within_text_pane

0x3aed,	// (0x0001445b) link_highlight_pane

0x548b,	// (0x00015df9) popup_preview_text_window_t5_ParamLimits

0x548b,	// (0x00015df9) popup_preview_text_window_t5

0x3c1b,	// (0x00014589) cursor_digital_pane

0x3c1b,	// (0x00014589) cursor_primary_pane

0x3c2c,	// (0x0001459a) cursor_primary_small_pane

0x3c34,	// (0x000145a2) cursor_secondary_pane

0x3c3c,	// (0x000145aa) cursor_title_pane

0x3c1b,	// (0x00014589) link_highlight_digital_pane

0x3c23,	// (0x00014591) link_highlight_primary_pane

0x3c2c,	// (0x0001459a) link_highlight_primary_small_pane

0x3c34,	// (0x000145a2) link_highlight_secondary_pane

0x3c3c,	// (0x000145aa) link_highlight_title_pane

0x3c1b,	// (0x00014589) copy_highlight_digital_pane

0x3c1b,	// (0x00014589) copy_highlight_primary_pane

0x3c2c,	// (0x0001459a) copy_highlight_primary_small_pane

0x3c34,	// (0x000145a2) copy_highlight_secondary_pane

0x3c3c,	// (0x000145aa) copy_highlight_title_pane

0x3c34,	// (0x000145a2) graphic_text_digital_pane

0x4d1a,	// (0x00015688) graphic_text_primary_pane

0x4d23,	// (0x00015691) graphic_text_primary_small_pane

0x3c2c,	// (0x0001459a) graphic_text_secondary_pane

0x3c1b,	// (0x00014589) graphic_text_title_pane

0xcd16,	// (0x0001d684) cursor_primary_pane_g1

0x4d0c,	// (0x0001567a) cursor_text_primary_t1

0xd2e4,	// (0x0001dc52) cursor_primary_small_pane_g1

0x4cfe,	// (0x0001566c) cursor_text_primary_small_t1

0xd2da,	// (0x0001dc48) cursor_primary_small_pane_g1_copy1

0x4ce6,	// (0x00015654) cursor_text_primary_small_t1_copy1

0x4cc4,	// (0x00015632) cursor_text_title_t1

0xd2d0,	// (0x0001dc3e) cursor_title_pane_g1

0xcd16,	// (0x0001d684) cursor_digital_pane_g1

0x3c4e,	// (0x000145bc) cursor_text_digital_t1

0x3c73,	// (0x000145e1) link_highlight_primary_pane_g1

0x4c6d,	// (0x000155db) link_highlight_primary_pane_t1

0x3c5c,	// (0x000145ca) link_highlight_primary_small_pane_g1

0x3c64,	// (0x000145d2) link_highlight_primary_small_pane_t1

0x3c73,	// (0x000145e1) link_highlight_secondary_pane_g1

0x3c7b,	// (0x000145e9) link_highlight_secondary_pane_t1

0x4be1,	// (0x0001554f) link_highlight_title_pane_g1

0x4be9,	// (0x00015557) link_highlight_title_pane_t1

0x4bca,	// (0x00015538) link_highlight_digital_pane_g1

0x4bd2,	// (0x00015540) link_highlight_digital_pane_t1

0x4aa2,	// (0x00015410) copy_highlight_primary_pane_g1

0x4aaa,	// (0x00015418) copy_highlight_primary_pane_t1

0x4a7c,	// (0x000153ea) copy_highlight_primary_small_pane_g1

0x4a93,	// (0x00015401) copy_highlight_primary_small_pane_t1

0x3c8a,	// (0x000145f8) copy_highlight_secondary_pane_g1

0x3c92,	// (0x00014600) copy_highlight_secondary_pane_t1

0x4a7c,	// (0x000153ea) copy_highlight_title_pane_g1

0x4a84,	// (0x000153f2) copy_highlight_title_pane_t1

0x4aa2,	// (0x00015410) copy_highlight_digital_pane_g1

0x5e2c,	// (0x0001679a) copy_highlight_digital_pane_t1

0x5d80,	// (0x000166ee) graphic_text_primary_pane_g1

0x5e10,	// (0x0001677e) graphic_text_primary_pane_t1

0x5e1e,	// (0x0001678c) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0002030d) graphic_text_primary_pane_t

0x5dec,	// (0x0001675a) graphic_text_primary_small_pane_g1

0x5df4,	// (0x00016762) graphic_text_primary_small_pane_t1

0x5e02,	// (0x00016770) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x00020308) graphic_text_primary_small_pane_t

0x5dc8,	// (0x00016736) graphic_text_secondary_pane_g1

0x5dd0,	// (0x0001673e) graphic_text_secondary_pane_t1

0x5dde,	// (0x0001674c) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x00020303) graphic_text_secondary_pane_t

0x5da4,	// (0x00016712) graphic_text_title_pane_g1

0x5dac,	// (0x0001671a) graphic_text_title_pane_t1

0x5dba,	// (0x00016728) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x000202fe) graphic_text_title_pane_t

0x5d80,	// (0x000166ee) graphic_text_digital_pane_g1

0x5d88,	// (0x000166f6) graphic_text_digital_pane_t1

0x5d96,	// (0x00016704) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x000202f9) graphic_text_digital_pane_t

0x1e1c,	// (0x0001278a) navi_icon_pane_srt_ParamLimits

0x1e1c,	// (0x0001278a) navi_icon_pane_srt

0x1d3c,	// (0x000126aa) navi_midp_pane_srt

0x1d3c,	// (0x000126aa) navi_navi_pane_srt

0x1e1c,	// (0x0001278a) navi_text_pane_srt_ParamLimits

0x1e1c,	// (0x0001278a) navi_text_pane_srt

0x5d4b,	// (0x000166b9) navi_navi_icon_text_pane_srt

0x5d53,	// (0x000166c1) navi_navi_pane_srt_g1_ParamLimits

0x5d53,	// (0x000166c1) navi_navi_pane_srt_g1

0x5d65,	// (0x000166d3) navi_navi_pane_srt_g2_ParamLimits

0x5d65,	// (0x000166d3) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x000202f4) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x000202f4) navi_navi_pane_srt_g

0x5d77,	// (0x000166e5) navi_navi_tabs_pane_srt

0x5d4b,	// (0x000166b9) navi_navi_text_pane_srt

0x5d4b,	// (0x000166b9) navi_navi_volume_pane_srt

0x5d3c,	// (0x000166aa) navi_navi_text_pane_srt_t1

0x0b96,	// (0x00011504) navi_navi_volume_pane_srt_g1

0x0b9e,	// (0x0001150c) volume_small_pane_srt_ParamLimits

0x0b9e,	// (0x0001150c) volume_small_pane_srt

0xf480,	// (0x0001fdee) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x0001fdee) volume_small_pane_srt_g1

0xf490,	// (0x0001fdfe) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x0001fdfe) volume_small_pane_srt_g2

0xf4a1,	// (0x0001fe0f) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x0001fe0f) volume_small_pane_srt_g3

0xf4b2,	// (0x0001fe20) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x0001fe20) volume_small_pane_srt_g4

0xf4c3,	// (0x0001fe31) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x0001fe31) volume_small_pane_srt_g5

0xf4d4,	// (0x0001fe42) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x0001fe42) volume_small_pane_srt_g6

0xf4e5,	// (0x0001fe53) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x0001fe53) volume_small_pane_srt_g7

0xf4f6,	// (0x0001fe64) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x0001fe64) volume_small_pane_srt_g8

0xf507,	// (0x0001fe75) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x0001fe75) volume_small_pane_srt_g9

0xf518,	// (0x0001fe86) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x0001fe86) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x000200a1) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x000200a1) volume_small_pane_srt_g

0x2236,	// (0x00012ba4) query_popup_data_pane_cp2

0x5d22,	// (0x00016690) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5d22,	// (0x00016690) navi_navi_icon_text_pane_srt_t1

0x4d1a,	// (0x00015688) navi_tabs_2_long_pane_srt

0x4d1a,	// (0x00015688) navi_tabs_2_pane_srt

0x4d1a,	// (0x00015688) navi_tabs_3_long_pane_srt

0x4d1a,	// (0x00015688) navi_tabs_3_pane_srt

0x4d1a,	// (0x00015688) navi_tabs_4_pane_srt

0x0b76,	// (0x000114e4) tabs_2_active_pane_srt_ParamLimits

0x0b76,	// (0x000114e4) tabs_2_active_pane_srt

0x0b86,	// (0x000114f4) tabs_2_passive_pane_srt_ParamLimits

0x0b86,	// (0x000114f4) tabs_2_passive_pane_srt

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp1_srt

0x5cee,	// (0x0001665c) bg_passive_tab_pane_g1_cp1_srt

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp1_srt

0x5cf7,	// (0x00016665) bg_passive_tab_pane_g3_cp1_srt

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp1_srt_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp1_srt

0x5d00,	// (0x0001666e) tabs_2_active_pane_srt_g1

0xd6e0,	// (0x0001e04e) tabs_2_active_pane_srt_t1_ParamLimits

0xd6e0,	// (0x0001e04e) tabs_2_active_pane_srt_t1

0x5cee,	// (0x0001665c) bg_active_tab_pane_g1_cp1_srt

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp1_srt

0x5cf7,	// (0x00016665) bg_active_tab_pane_g3_cp1_srt

0x0b43,	// (0x000114b1) tabs_3_active_pane_srt_ParamLimits

0x0b43,	// (0x000114b1) tabs_3_active_pane_srt

0x0b54,	// (0x000114c2) tabs_3_passive_pane_cp_srt_ParamLimits

0x0b54,	// (0x000114c2) tabs_3_passive_pane_cp_srt

0x0b65,	// (0x000114d3) tabs_3_passive_pane_srt_ParamLimits

0x0b65,	// (0x000114d3) tabs_3_passive_pane_srt

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4483,	// (0x00014df1) bg_passive_tab_pane_cp2_srt

0x3ca1,	// (0x0001460f) bg_passive_tab_pane_g1_cp2_srt

0x372f,	// (0x0001409d) bg_passive_tab_pane_g2_cp2_srt

0x3caa,	// (0x00014618) bg_passive_tab_pane_g3_cp2_srt

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp2_srt_ParamLimits

0x20b1,	// (0x00012a1f) bg_active_tab_pane_cp2_srt

0x5cd4,	// (0x00016642) tabs_3_active_pane_srt_g1

0xd6ca,	// (0x0001e038) tabs_3_active_pane_srt_t1_ParamLimits

0xd6ca,	// (0x0001e038) tabs_3_active_pane_srt_t1

0x3ca1,	// (0x0001460f) bg_active_tab_pane_g1_cp2_srt

0x372f,	// (0x0001409d) bg_active_tab_pane_g2_cp2_srt

0x3caa,	// (0x00014618) bg_active_tab_pane_g3_cp2_srt

0x0afb,	// (0x00011469) tabs_4_active_pane_srt_ParamLimits

0x0afb,	// (0x00011469) tabs_4_active_pane_srt

0x0b0d,	// (0x0001147b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b0d,	// (0x0001147b) tabs_4_passive_pane_cp2_srt

0x013e,	// (0x00010aac) aid_size_cell_toolbar

0x5847,	// (0x000161b5) main_idle_act_pane_ParamLimits

0x030b,	// (0x00010c79) popup_large_graphic_colour_window_ParamLimits

0xbaf0,	// (0x0001c45e) popup_toolbar_window_ParamLimits

0xbaf0,	// (0x0001c45e) popup_toolbar_window

0x5a4d,	// (0x000163bb) list_single_graphic_2heading_pane_ParamLimits

0x5a4d,	// (0x000163bb) list_single_graphic_2heading_pane

0x314d,	// (0x00013abb) aid_size_cell_apps_grid_lsc_pane

0x315f,	// (0x00013acd) aid_size_cell_apps_grid_prt_pane

0x3e19,	// (0x00014787) bg_wml_button_pane_cp1_ParamLimits

0x3e19,	// (0x00014787) bg_wml_button_pane_cp1

0xd27d,	// (0x0001dbeb) form_midp_field_text_pane_t1_ParamLimits

0x4483,	// (0x00014df1) input_focus_pane_cp050_ParamLimits

0x46f9,	// (0x00015067) list_midp_form_text_pane_ParamLimits

0x469f,	// (0x0001500d) input_focus_pane_cp051_ParamLimits

0x46b3,	// (0x00015021) list_midp_choice_pane_ParamLimits

0xd21b,	// (0x0001db89) list_single_2graphic_pane_cp3_ParamLimits

0xd21b,	// (0x0001db89) list_single_2graphic_pane_cp3

0xd22e,	// (0x0001db9c) list_single_midp_graphic_pane_ParamLimits

0xd22e,	// (0x0001db9c) list_single_midp_graphic_pane

0x071f,	// (0x0001108d) list_single_graphic_2heading_pane_g1_ParamLimits

0x071f,	// (0x0001108d) list_single_graphic_2heading_pane_g1

0x072b,	// (0x00011099) list_single_graphic_2heading_pane_g4_ParamLimits

0x072b,	// (0x00011099) list_single_graphic_2heading_pane_g4

0x0737,	// (0x000110a5) list_single_graphic_2heading_pane_g5_ParamLimits

0x0737,	// (0x000110a5) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x000200f4) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x000200f4) list_single_graphic_2heading_pane_g

0x0743,	// (0x000110b1) list_single_graphic_2heading_pane_t1_ParamLimits

0x0743,	// (0x000110b1) list_single_graphic_2heading_pane_t1

0x0757,	// (0x000110c5) list_single_graphic_2heading_pane_t2_ParamLimits

0x0757,	// (0x000110c5) list_single_graphic_2heading_pane_t2

0x0773,	// (0x000110e1) list_single_graphic_2heading_pane_t3_ParamLimits

0x0773,	// (0x000110e1) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x000200fb) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x000200fb) list_single_graphic_2heading_pane_t

0x4289,	// (0x00014bf7) bg_popup_sub_pane_cp2

0x42b3,	// (0x00014c21) grid_toobar_pane

0x078b,	// (0x000110f9) cell_toolbar_pane_ParamLimits

0x078b,	// (0x000110f9) cell_toolbar_pane

0x4305,	// (0x00014c73) cell_toolbar_pane_g1_ParamLimits

0x4305,	// (0x00014c73) cell_toolbar_pane_g1

0x4319,	// (0x00014c87) cell_toolbar_pane_g2_ParamLimits

0x4319,	// (0x00014c87) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00020109) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00020109) cell_toolbar_pane_g

0x433b,	// (0x00014ca9) grid_highlight_pane_cp2_ParamLimits

0x433b,	// (0x00014ca9) grid_highlight_pane_cp2

0x4355,	// (0x00014cc3) toolbar_button_pane

0x4361,	// (0x00014ccf) toolbar_button_pane_g1

0x4369,	// (0x00014cd7) toolbar_button_pane_g2

0x4371,	// (0x00014cdf) toolbar_button_pane_g3

0x4379,	// (0x00014ce7) toolbar_button_pane_g4

0x4381,	// (0x00014cef) toolbar_button_pane_g5

0x4389,	// (0x00014cf7) toolbar_button_pane_g6

0x4391,	// (0x00014cff) toolbar_button_pane_g7

0x4399,	// (0x00014d07) toolbar_button_pane_g8

0x43a1,	// (0x00014d0f) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0002010e) toolbar_button_pane_g

0x07c3,	// (0x00011131) list_single_2graphic_pane_g1_cp3_ParamLimits

0x07c3,	// (0x00011131) list_single_2graphic_pane_g1_cp3

0xbb48,	// (0x0001c4b6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb48,	// (0x0001c4b6) list_single_2graphic_pane_g2_cp3

0x07e0,	// (0x0001114e) list_single_2graphic_pane_g3_cp3

0x07e8,	// (0x00011156) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07e8,	// (0x00011156) list_single_2graphic_pane_g4_cp3

0x07f4,	// (0x00011162) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07f4,	// (0x00011162) list_single_2graphic_pane_t1_cp3

0x0810,	// (0x0001117e) list_single_midp_graphic_pane_g2_ParamLimits

0x0810,	// (0x0001117e) list_single_midp_graphic_pane_g2

0x0146,	// (0x00010ab4) aid_zoom_text_primary

0x014e,	// (0x00010abc) aid_zoom_text_secondary

0xcd6e,	// (0x0001d6dc) status_small_pane_g7_ParamLimits

0xcd6e,	// (0x0001d6dc) status_small_pane_g7

0xcd91,	// (0x0001d6ff) status_small_pane_t1_ParamLimits

0xc263,	// (0x0001cbd1) title_pane_g2

0x0003,

0xf529,	// (0x0001fe97) title_pane_g

0xc4db,	// (0x0001ce49) aid_size_cell_colour_1_pane_ParamLimits

0xc4db,	// (0x0001ce49) aid_size_cell_colour_1_pane

0xc4ef,	// (0x0001ce5d) aid_size_cell_colour_2_pane_ParamLimits

0xc4ef,	// (0x0001ce5d) aid_size_cell_colour_2_pane

0xc503,	// (0x0001ce71) aid_size_cell_colour_3_pane_ParamLimits

0xc503,	// (0x0001ce71) aid_size_cell_colour_3_pane

0xc517,	// (0x0001ce85) aid_size_cell_colour_4_pane_ParamLimits

0xc517,	// (0x0001ce85) aid_size_cell_colour_4_pane

0xf0dd,	// (0x0001fa4b) title_pane_stacon_g1_ParamLimits

0xf0dd,	// (0x0001fa4b) title_pane_stacon_g1

0x4b01,	// (0x0001546f) popup_note_wait_window_g3_ParamLimits

0x4b01,	// (0x0001546f) popup_note_wait_window_g3

0x4b77,	// (0x000154e5) popup_note_wait_window_t5_ParamLimits

0x4b77,	// (0x000154e5) popup_note_wait_window_t5

0x1d3c,	// (0x000126aa) main_feb_china_hwr_fs_writing_pane

0xb4f2,	// (0x0001be60) popup_feb_china_hwr_fs_window_ParamLimits

0xb4f2,	// (0x0001be60) popup_feb_china_hwr_fs_window

0xbb59,	// (0x0001c4c7) aid_size_cell_hwr_fs_ParamLimits

0xbb59,	// (0x0001c4c7) aid_size_cell_hwr_fs

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp3_ParamLimits

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp3

0xbb6e,	// (0x0001c4dc) grid_hwr_fs_pane_ParamLimits

0xbb6e,	// (0x0001c4dc) grid_hwr_fs_pane

0x085f,	// (0x000111cd) linegrid_hwr_fs_pane_ParamLimits

0x085f,	// (0x000111cd) linegrid_hwr_fs_pane

0xbb86,	// (0x0001c4f4) cell_hwr_fs_pane_ParamLimits

0xbb86,	// (0x0001c4f4) cell_hwr_fs_pane

0x448f,	// (0x00014dfd) linegrid_hwr_fs_pane_g1_ParamLimits

0x448f,	// (0x00014dfd) linegrid_hwr_fs_pane_g1

0xd1ef,	// (0x0001db5d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd1ef,	// (0x0001db5d) linegrid_hwr_fs_pane_g2

0x44ad,	// (0x00014e1b) linegrid_hwr_fs_pane_g3_ParamLimits

0x44ad,	// (0x00014e1b) linegrid_hwr_fs_pane_g3

0x0891,	// (0x000111ff) linegrid_hwr_fs_pane_g4_ParamLimits

0x0891,	// (0x000111ff) linegrid_hwr_fs_pane_g4

0x08ab,	// (0x00011219) linegrid_hwr_fs_pane_g5_ParamLimits

0x08ab,	// (0x00011219) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x00020134) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x00020134) linegrid_hwr_fs_pane_g

0x44b9,	// (0x00014e27) cell_hwr_fs_pane_g1_ParamLimits

0x44b9,	// (0x00014e27) cell_hwr_fs_pane_g1

0x41c0,	// (0x00014b2e) cell_hwr_fs_pane_g2_ParamLimits

0x41c0,	// (0x00014b2e) cell_hwr_fs_pane_g2

0xd201,	// (0x0001db6f) cell_hwr_fs_pane_g3_ParamLimits

0xd201,	// (0x0001db6f) cell_hwr_fs_pane_g3

0xd20e,	// (0x0001db7c) cell_hwr_fs_pane_g4_ParamLimits

0xd20e,	// (0x0001db7c) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0002013f) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0002013f) cell_hwr_fs_pane_g

0xbbac,	// (0x0001c51a) cell_hwr_fs_pane_t1

0x1d3c,	// (0x000126aa) grid_highlight_pane_cp6

0x1d3c,	// (0x000126aa) main_idle_act2_pane

0x2f04,	// (0x00013872) aid_inside_area_popup_secondary

0xd2ee,	// (0x0001dc5c) aid_inside_area_window_primary_ParamLimits

0xd2ee,	// (0x0001dc5c) aid_inside_area_window_primary

0x5e3b,	// (0x000167a9) ai2_news_ticker_pane

0x5e43,	// (0x000167b1) aid_size_cell_ai1_link_ParamLimits

0x5e43,	// (0x000167b1) aid_size_cell_ai1_link

0xd6f6,	// (0x0001e064) popup_ai2_data_window_ParamLimits

0xd6f6,	// (0x0001e064) popup_ai2_data_window

0x5e73,	// (0x000167e1) popup_ai2_link_window_ParamLimits

0x5e73,	// (0x000167e1) popup_ai2_link_window

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp4_ParamLimits

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp4

0x5e87,	// (0x000167f5) grid_ai2_link_pane_ParamLimits

0x5e87,	// (0x000167f5) grid_ai2_link_pane

0x5e9e,	// (0x0001680c) popup_ai2_link_window_g1_ParamLimits

0x5e9e,	// (0x0001680c) popup_ai2_link_window_g1

0x5eaa,	// (0x00016818) popup_ai2_link_window_g2_ParamLimits

0x5eaa,	// (0x00016818) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x00020312) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x00020312) popup_ai2_link_window_g

0x5eb9,	// (0x00016827) ai2_mp_button_pane

0x5ec1,	// (0x0001682f) ai2_mp_volume_pane

0x469f,	// (0x0001500d) bg_popup_sub_pane_cp5_ParamLimits

0x469f,	// (0x0001500d) bg_popup_sub_pane_cp5

0x5ec9,	// (0x00016837) heading_ai2_gene_pane_ParamLimits

0x5ec9,	// (0x00016837) heading_ai2_gene_pane

0x5ed5,	// (0x00016843) list_ai2_gene_pane_ParamLimits

0x5ed5,	// (0x00016843) list_ai2_gene_pane

0x5f1d,	// (0x0001688b) cell_ai2_link_pane_ParamLimits

0x5f1d,	// (0x0001688b) cell_ai2_link_pane

0x5f33,	// (0x000168a1) cell_ai2_link_pane_g1

0x1d3c,	// (0x000126aa) grid_highlight_pane_cp7

0x0bb3,	// (0x00011521) ai2_mp_volume_pane_g1

0x6003,	// (0x00016971) ai2_mp_volume_pane_g2

0xd720,	// (0x0001e08e) list_ai2_gene_pane_t1

0x600b,	// (0x00016979) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0002032b) ai2_mp_volume_pane_g

0x0bbb,	// (0x00011529) volume_small_pane_cp3

0x6013,	// (0x00016981) aid_size_cell_ai2_button

0x601b,	// (0x00016989) grid_ai2_button_pane

0x6024,	// (0x00016992) cell_ai2_button_pane_ParamLimits

0x6024,	// (0x00016992) cell_ai2_button_pane

0xe690,	// (0x0001effe) cell_ai2_button_pane_g1

0x1d3c,	// (0x000126aa) grid_highlight_pane_cp8

0x5fc3,	// (0x00016931) ai2_gene_pane_t1_ParamLimits

0x5fc3,	// (0x00016931) ai2_gene_pane_t1

0xb490,	// (0x0001bdfe) aid_height_parent_landscape

0xd436,	// (0x0001dda4) aid_height_set_list

0x5847,	// (0x000161b5) aid_size_parent

0x5c5e,	// (0x000165cc) aid_size_cell_graphic_pane_ParamLimits

0x5ee5,	// (0x00016853) popup_ai2_data_window_g1_ParamLimits

0x5ee5,	// (0x00016853) popup_ai2_data_window_g1

0x5ef1,	// (0x0001685f) ai2_news_ticker_pane_g1

0x5ef9,	// (0x00016867) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x00020317) ai2_news_ticker_pane_g

0x5f01,	// (0x0001686f) ai2_news_ticker_pane_t1

0x5f0f,	// (0x0001687d) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0002031c) ai2_news_ticker_pane_t

0x5f3c,	// (0x000168aa) heading_ai2_gene_pane_g1

0x5f44,	// (0x000168b2) heading_ai2_gene_pane_t1_ParamLimits

0x5f44,	// (0x000168b2) heading_ai2_gene_pane_t1

0x5f59,	// (0x000168c7) list_highlight_pane_cp6

0xd70a,	// (0x0001e078) ai2_gene_pane_ParamLimits

0xd70a,	// (0x0001e078) ai2_gene_pane

0xd72e,	// (0x0001e09c) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x00020321) list_ai2_gene_pane_t

0x5f94,	// (0x00016902) list_highlight_pane_cp8_ParamLimits

0x5f94,	// (0x00016902) list_highlight_pane_cp8

0x5fa5,	// (0x00016913) ai2_gene_pane_g1_ParamLimits

0x5fa5,	// (0x00016913) ai2_gene_pane_g1

0x5fb7,	// (0x00016925) ai2_gene_pane_g2_ParamLimits

0x5fb7,	// (0x00016925) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x00020326) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x00020326) ai2_gene_pane_g

0x2659,	// (0x00012fc7) scroll_pane_cp12

0xb44d,	// (0x0001bdbb) control_pane_t3_ParamLimits

0xb44d,	// (0x0001bdbb) control_pane_t3

0xcd82,	// (0x0001d6f0) status_small_pane_g8_ParamLimits

0xcd82,	// (0x0001d6f0) status_small_pane_g8

0xb587,	// (0x0001bef5) popup_find_window_ParamLimits

0xb81a,	// (0x0001c188) popup_note_image_window_ParamLimits

0x26f0,	// (0x0001305e) list_double2_graphic_pane_vc_g1_ParamLimits

0x26f0,	// (0x0001305e) list_double2_graphic_pane_vc_g1

0x2676,	// (0x00012fe4) list_double2_graphic_pane_vc_g2_ParamLimits

0x2676,	// (0x00012fe4) list_double2_graphic_pane_vc_g2

0x2682,	// (0x00012ff0) list_double2_graphic_pane_vc_g3_ParamLimits

0x2682,	// (0x00012ff0) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00020102) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00020102) list_double2_graphic_pane_vc_g

0x42ef,	// (0x00014c5d) list_double2_graphic_pane_vc_t1_ParamLimits

0x42ef,	// (0x00014c5d) list_double2_graphic_pane_vc_t1

0x2676,	// (0x00012fe4) list_single_heading_pane_vc_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_heading_pane_vc_g1

0x2682,	// (0x00012ff0) list_single_heading_pane_vc_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_heading_pane_vc_g

0x43a9,	// (0x00014d17) list_single_heading_pane_vc_t1_ParamLimits

0x43a9,	// (0x00014d17) list_single_heading_pane_vc_t1

0x43bf,	// (0x00014d2d) list_single_heading_pane_vc_t2_ParamLimits

0x43bf,	// (0x00014d2d) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x00020123) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x00020123) list_single_heading_pane_vc_t

0x43d1,	// (0x00014d3f) list_setting_number_pane_vc_g1_ParamLimits

0x43d1,	// (0x00014d3f) list_setting_number_pane_vc_g1

0x43dd,	// (0x00014d4b) list_setting_number_pane_vc_g2_ParamLimits

0x43dd,	// (0x00014d4b) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x00020128) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x00020128) list_setting_number_pane_vc_g

0x43e9,	// (0x00014d57) list_setting_number_pane_vc_t1_ParamLimits

0x43e9,	// (0x00014d57) list_setting_number_pane_vc_t1

0x43fd,	// (0x00014d6b) list_setting_number_pane_vc_t2_ParamLimits

0x43fd,	// (0x00014d6b) list_setting_number_pane_vc_t2

0x4419,	// (0x00014d87) list_setting_number_pane_vc_t3_ParamLimits

0x4419,	// (0x00014d87) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0002012d) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002012d) list_setting_number_pane_vc_t

0x4447,	// (0x00014db5) set_value_pane_vc_ParamLimits

0x4447,	// (0x00014db5) set_value_pane_vc

0x5a4d,	// (0x000163bb) list_double2_graphic_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double2_graphic_pane_vc

0x5a4d,	// (0x000163bb) list_double2_large_graphic_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double2_large_graphic_pane_vc

0x5a4d,	// (0x000163bb) list_double2_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double2_pane_vc

0x5a4d,	// (0x000163bb) list_double_graphic_heading_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_graphic_heading_pane_vc

0x5a4d,	// (0x000163bb) list_double_graphic_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_graphic_pane_vc

0x5a4d,	// (0x000163bb) list_double_heading_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_heading_pane_vc

0x5a5f,	// (0x000163cd) list_double_large_graphic_pane_vc_ParamLimits

0x5a5f,	// (0x000163cd) list_double_large_graphic_pane_vc

0x5a4d,	// (0x000163bb) list_double_number_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_number_pane_vc

0x5a4d,	// (0x000163bb) list_double_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_pane_vc

0x5a4d,	// (0x000163bb) list_double_time_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_double_time_pane_vc

0x5a4d,	// (0x000163bb) list_setting_number_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_setting_number_pane_vc

0x5a4d,	// (0x000163bb) list_setting_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_setting_pane_vc

0x5a4d,	// (0x000163bb) list_single_graphic_heading_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_single_graphic_heading_pane_vc

0x5a4d,	// (0x000163bb) list_single_heading_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_single_heading_pane_vc

0x5a4d,	// (0x000163bb) list_single_number_heading_pane_vc_ParamLimits

0x5a4d,	// (0x000163bb) list_single_number_heading_pane_vc

0x26f0,	// (0x0001305e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x26f0,	// (0x0001305e) list_double_graphic_heading_pane_vc_g1

0x6058,	// (0x000169c6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6058,	// (0x000169c6) list_double_graphic_heading_pane_vc_g2

0x6064,	// (0x000169d2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6064,	// (0x000169d2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x00020332) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x00020332) list_double_graphic_heading_pane_vc_g

0x6070,	// (0x000169de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6070,	// (0x000169de) list_double_graphic_heading_pane_vc_t1

0x608c,	// (0x000169fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x608c,	// (0x000169fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x00020339) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x00020339) list_double_graphic_heading_pane_vc_t

0x43d1,	// (0x00014d3f) list_setting_pane_vc_g1_ParamLimits

0x43d1,	// (0x00014d3f) list_setting_pane_vc_g1

0x43dd,	// (0x00014d4b) list_setting_pane_vc_g2_ParamLimits

0x43dd,	// (0x00014d4b) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x00020128) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x00020128) list_setting_pane_vc_g

0x62ba,	// (0x00016c28) list_setting_pane_vc_t1_ParamLimits

0x62ba,	// (0x00016c28) list_setting_pane_vc_t1

0x62d6,	// (0x00016c44) list_setting_pane_vc_t2_ParamLimits

0x62d6,	// (0x00016c44) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x00020367) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x00020367) list_setting_pane_vc_t

0x4447,	// (0x00014db5) set_value_pane_cp_vc_ParamLimits

0x4447,	// (0x00014db5) set_value_pane_cp_vc

0x2676,	// (0x00012fe4) list_single_number_heading_pane_vc_g1_ParamLimits

0x2676,	// (0x00012fe4) list_single_number_heading_pane_vc_g1

0x2682,	// (0x00012ff0) list_single_number_heading_pane_vc_g2_ParamLimits

0x2682,	// (0x00012ff0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_single_number_heading_pane_vc_g

0x62f2,	// (0x00016c60) list_single_number_heading_pane_vc_t1_ParamLimits

0x62f2,	// (0x00016c60) list_single_number_heading_pane_vc_t1

0x26cc,	// (0x0001303a) list_single_number_heading_pane_vc_t2_ParamLimits

0x26cc,	// (0x0001303a) list_single_number_heading_pane_vc_t2

0x26de,	// (0x0001304c) list_single_number_heading_pane_vc_t3_ParamLimits

0x26de,	// (0x0001304c) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0002036c) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0002036c) list_single_number_heading_pane_vc_t

0x26f0,	// (0x0001305e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x26f0,	// (0x0001305e) list_single_graphic_heading_pane_vc_g1

0x2676,	// (0x00012fe4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2676,	// (0x00012fe4) list_single_graphic_heading_pane_vc_g4

0x2682,	// (0x00012ff0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2682,	// (0x00012ff0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00020102) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00020102) list_single_graphic_heading_pane_vc_g

0x6308,	// (0x00016c76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6308,	// (0x00016c76) list_single_graphic_heading_pane_vc_t1

0x631e,	// (0x00016c8c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x631e,	// (0x00016c8c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x00020373) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x00020373) list_single_graphic_heading_pane_vc_t

0x2676,	// (0x00012fe4) list_double2_pane_vc_g1_ParamLimits

0x2676,	// (0x00012fe4) list_double2_pane_vc_g1

0x2682,	// (0x00012ff0) list_double2_pane_vc_g2_ParamLimits

0x2682,	// (0x00012ff0) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_double2_pane_vc_g

0x59eb,	// (0x00016359) list_double2_pane_vc_t1_ParamLimits

0x59eb,	// (0x00016359) list_double2_pane_vc_t1

0x6330,	// (0x00016c9e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6330,	// (0x00016c9e) list_double2_large_graphic_pane_vc_g1

0x2676,	// (0x00012fe4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2676,	// (0x00012fe4) list_double2_large_graphic_pane_vc_g2

0x2682,	// (0x00012ff0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2682,	// (0x00012ff0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001ff2e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001ff2e) list_double2_large_graphic_pane_vc_g

0x633c,	// (0x00016caa) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x633c,	// (0x00016caa) list_double2_large_graphic_pane_vc_t1

0x6352,	// (0x00016cc0) list_double_time_pane_vc_g1_ParamLimits

0x6352,	// (0x00016cc0) list_double_time_pane_vc_g1

0x635e,	// (0x00016ccc) list_double_time_pane_vc_g2_ParamLimits

0x635e,	// (0x00016ccc) list_double_time_pane_vc_g2

0x0001,

0xfa0a,	// (0x00020378) list_double_time_pane_vc_g_ParamLimits

0xfa0a,	// (0x00020378) list_double_time_pane_vc_g

0x636a,	// (0x00016cd8) list_double_time_pane_vc_t1_ParamLimits

0x636a,	// (0x00016cd8) list_double_time_pane_vc_t1

0x638e,	// (0x00016cfc) list_double_time_pane_vc_t2_ParamLimits

0x638e,	// (0x00016cfc) list_double_time_pane_vc_t2

0x63bd,	// (0x00016d2b) list_double_time_pane_vc_t3_ParamLimits

0x63bd,	// (0x00016d2b) list_double_time_pane_vc_t3

0x63cf,	// (0x00016d3d) list_double_time_pane_vc_t4_ParamLimits

0x63cf,	// (0x00016d3d) list_double_time_pane_vc_t4

0x0003,

0xfa0f,	// (0x0002037d) list_double_time_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002037d) list_double_time_pane_vc_t

0x2676,	// (0x00012fe4) list_double_pane_vc_g1_ParamLimits

0x2676,	// (0x00012fe4) list_double_pane_vc_g1

0x2682,	// (0x00012ff0) list_double_pane_vc_g2_ParamLimits

0x2682,	// (0x00012ff0) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_double_pane_vc_g

0x63e3,	// (0x00016d51) list_double_pane_vc_t1_ParamLimits

0x63e3,	// (0x00016d51) list_double_pane_vc_t1

0x63f7,	// (0x00016d65) list_double_pane_vc_t2_ParamLimits

0x63f7,	// (0x00016d65) list_double_pane_vc_t2

0x0001,

0xfa18,	// (0x00020386) list_double_pane_vc_t_ParamLimits

0xfa18,	// (0x00020386) list_double_pane_vc_t

0x2676,	// (0x00012fe4) list_double_number_pane_vc_g1_ParamLimits

0x2676,	// (0x00012fe4) list_double_number_pane_vc_g1

0x2682,	// (0x00012ff0) list_double_number_pane_vc_g2_ParamLimits

0x2682,	// (0x00012ff0) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ff11) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ff11) list_double_number_pane_vc_g

0x640f,	// (0x00016d7d) list_double_number_pane_vc_t1_ParamLimits

0x640f,	// (0x00016d7d) list_double_number_pane_vc_t1

0x6421,	// (0x00016d8f) list_double_number_pane_vc_t2_ParamLimits

0x6421,	// (0x00016d8f) list_double_number_pane_vc_t2

0x6435,	// (0x00016da3) list_double_number_pane_vc_t3_ParamLimits

0x6435,	// (0x00016da3) list_double_number_pane_vc_t3

0x0002,

0xfa1d,	// (0x0002038b) list_double_number_pane_vc_t_ParamLimits

0xfa1d,	// (0x0002038b) list_double_number_pane_vc_t

0x644d,	// (0x00016dbb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x644d,	// (0x00016dbb) list_double_large_graphic_pane_vc_g1

0x6469,	// (0x00016dd7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6469,	// (0x00016dd7) list_double_large_graphic_pane_vc_g2

0x647d,	// (0x00016deb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x647d,	// (0x00016deb) list_double_large_graphic_pane_vc_g3

0x648c,	// (0x00016dfa) list_double_large_graphic_pane_vc_g4_ParamLimits

0x648c,	// (0x00016dfa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa24,	// (0x00020392) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa24,	// (0x00020392) list_double_large_graphic_pane_vc_g

0x649b,	// (0x00016e09) list_double_large_graphic_pane_vc_t1_ParamLimits

0x649b,	// (0x00016e09) list_double_large_graphic_pane_vc_t1

0x64b7,	// (0x00016e25) list_double_large_graphic_pane_vc_t2_ParamLimits

0x64b7,	// (0x00016e25) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa2d,	// (0x0002039b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa2d,	// (0x0002039b) list_double_large_graphic_pane_vc_t

0x6058,	// (0x000169c6) list_double_heading_pane_vc_g1_ParamLimits

0x6058,	// (0x000169c6) list_double_heading_pane_vc_g1

0x6064,	// (0x000169d2) list_double_heading_pane_vc_g2_ParamLimits

0x6064,	// (0x000169d2) list_double_heading_pane_vc_g2

0x0001,

0xfa32,	// (0x000203a0) list_double_heading_pane_vc_g_ParamLimits

0xfa32,	// (0x000203a0) list_double_heading_pane_vc_g

0x64d9,	// (0x00016e47) list_double_heading_pane_vc_t1_ParamLimits

0x64d9,	// (0x00016e47) list_double_heading_pane_vc_t1

0x64ed,	// (0x00016e5b) list_double_heading_pane_vc_t2_ParamLimits

0x64ed,	// (0x00016e5b) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x000203a5) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x000203a5) list_double_heading_pane_vc_t

0x6505,	// (0x00016e73) list_double_graphic_pane_vc_g1_ParamLimits

0x6505,	// (0x00016e73) list_double_graphic_pane_vc_g1

0x6511,	// (0x00016e7f) list_double_graphic_pane_vc_g2_ParamLimits

0x6511,	// (0x00016e7f) list_double_graphic_pane_vc_g2

0x2676,	// (0x00012fe4) list_double_graphic_pane_vc_g3_ParamLimits

0x2676,	// (0x00012fe4) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x000203aa) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x000203aa) list_double_graphic_pane_vc_g

0x652e,	// (0x00016e9c) list_double_graphic_pane_vc_t1_ParamLimits

0x652e,	// (0x00016e9c) list_double_graphic_pane_vc_t1

0x6558,	// (0x00016ec6) list_double_graphic_pane_vc_t2_ParamLimits

0x6558,	// (0x00016ec6) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x000203b3) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x000203b3) list_double_graphic_pane_vc_t

0xee62,	// (0x0001f7d0) aid_size_cell_fastswap

0xb115,	// (0x0001ba83) aid_size_cell_touch_ParamLimits

0xb115,	// (0x0001ba83) aid_size_cell_touch

0xefe3,	// (0x0001f951) popup_fast_swap_wide_window_ParamLimits

0xefe3,	// (0x0001f951) popup_fast_swap_wide_window

0xb2c5,	// (0x0001bc33) touch_pane_ParamLimits

0xb2c5,	// (0x0001bc33) touch_pane

0x2b34,	// (0x000134a2) button_value_adjust_pane_cp2

0x2b3c,	// (0x000134aa) button_value_adjust_pane_cp4

0x2b5e,	// (0x000134cc) form_field_data_pane_cp2

0xc92f,	// (0x0001d29d) form_field_data_wide_pane_cp2

0x321c,	// (0x00013b8a) bg_scroll_pane_ParamLimits

0xf23f,	// (0x0001fbad) scroll_handle_pane_ParamLimits

0xf253,	// (0x0001fbc1) scroll_sc2_down_pane_ParamLimits

0xf253,	// (0x0001fbc1) scroll_sc2_down_pane

0x324d,	// (0x00013bbb) scroll_sc2_up_pane_ParamLimits

0x324d,	// (0x00013bbb) scroll_sc2_up_pane

0xd85e,	// (0x0001e1cc) grid_wheel_folder_pane_g1_ParamLimits

0xd85e,	// (0x0001e1cc) grid_wheel_folder_pane_g1

0xf418,	// (0x0001fd86) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x0001fd86) clock_nsta_pane_cp2

0xcc71,	// (0x0001d5df) listscroll_midp_pane_ParamLimits

0xcc7d,	// (0x0001d5eb) midp_canvas_pane

0x3de9,	// (0x00014757) nsta_clock_indic_pane

0x3e25,	// (0x00014793) listscroll_form_pane_vc

0x3e2d,	// (0x0001479b) listscroll_set_pane_vc_ParamLimits

0x3e2d,	// (0x0001479b) listscroll_set_pane_vc

0xcefa,	// (0x0001d868) clock_nsta_pane

0xcf24,	// (0x0001d892) indicator_nsta_pane

0x4289,	// (0x00014bf7) bg_popup_sub_pane_cp2_ParamLimits

0x429d,	// (0x00014c0b) find_pane_cp2_ParamLimits

0x429d,	// (0x00014c0b) find_pane_cp2

0x42b3,	// (0x00014c21) grid_toobar_pane_ParamLimits

0x4457,	// (0x00014dc5) list_form_gen_pane_vc_ParamLimits

0x4457,	// (0x00014dc5) list_form_gen_pane_vc

0x446d,	// (0x00014ddb) scroll_pane_cp8_vc_ParamLimits

0x446d,	// (0x00014ddb) scroll_pane_cp8_vc

0x44e9,	// (0x00014e57) data_form_wide_pane_vc_ParamLimits

0x44e9,	// (0x00014e57) data_form_wide_pane_vc

0x44f5,	// (0x00014e63) form_field_data_wide_pane_vc_g1

0x44fd,	// (0x00014e6b) form_field_data_wide_pane_vc_t1_ParamLimits

0x44fd,	// (0x00014e6b) form_field_data_wide_pane_vc_t1

0x2c1a,	// (0x00013588) input_focus_pane_cp6_vc_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_cp6_vc

0x4880,	// (0x000151ee) list_midp_pane_ParamLimits

0x5cc8,	// (0x00016636) scroll_pane_cp16_ParamLimits

0x5cc8,	// (0x00016636) scroll_pane_cp16

0x48d6,	// (0x00015244) button_value_adjust_pane_ParamLimits

0x48d6,	// (0x00015244) button_value_adjust_pane

0xd447,	// (0x0001ddb5) button_value_adjust_pane_cp6_ParamLimits

0xd447,	// (0x0001ddb5) button_value_adjust_pane_cp6

0xd589,	// (0x0001def7) settings_code_pane_cp_ParamLimits

0xd589,	// (0x0001def7) settings_code_pane_cp

0xe690,	// (0x0001effe) cell_touch_pane_g1

0xe690,	// (0x0001effe) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00020047) cell_touch_pane_g

0xd73c,	// (0x0001e0aa) cell_touch_pane_cp_ParamLimits

0xd73c,	// (0x0001e0aa) cell_touch_pane_cp

0xd758,	// (0x0001e0c6) cell_touch_pane_ParamLimits

0xd758,	// (0x0001e0c6) cell_touch_pane

0xe690,	// (0x0001effe) scroll_sc2_down_pane_g1

0xe690,	// (0x0001effe) scroll_sc2_up_pane_g1

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp4_vc

0x60aa,	// (0x00016a18) list_set_graphic_pane_vc_g1_ParamLimits

0x60aa,	// (0x00016a18) list_set_graphic_pane_vc_g1

0x60b6,	// (0x00016a24) list_set_graphic_pane_vc_g2_ParamLimits

0x60b6,	// (0x00016a24) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0002033e) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0002033e) list_set_graphic_pane_vc_g

0x60c2,	// (0x00016a30) text_primary_small_cp13_vc_ParamLimits

0x60c2,	// (0x00016a30) text_primary_small_cp13_vc

0x60da,	// (0x00016a48) list_set_graphic_pane_vc_ParamLimits

0x60da,	// (0x00016a48) list_set_graphic_pane_vc

0x1d3c,	// (0x000126aa) input_focus_pane_cp2_vc

0xe690,	// (0x0001effe) setting_code_pane_vc_g1

0x1e67,	// (0x000127d5) setting_code_pane_vc_t1

0x60ed,	// (0x00016a5b) set_text_pane_vc_t1_ParamLimits

0x60ed,	// (0x00016a5b) set_text_pane_vc_t1

0x1d3c,	// (0x000126aa) input_focus_pane_cp1_vc

0x6109,	// (0x00016a77) list_set_text_pane_vc

0xe690,	// (0x0001effe) setting_text_pane_vc_g1

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp2_vc

0x1e5e,	// (0x000127cc) setting_slider_graphic_pane_vc_g1

0x6113,	// (0x00016a81) setting_slider_graphic_pane_vc_t1

0x6123,	// (0x00016a91) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x00020343) setting_slider_graphic_pane_vc_t

0x6133,	// (0x00016aa1) slider_set_pane_cp_vc

0x613b,	// (0x00016aa9) slider_set_pane_vc_g1

0x6144,	// (0x00016ab2) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x00020348) slider_set_pane_vc_g

0x2d49,	// (0x000136b7) set_opt_bg_pane_g1_copy1

0x2d51,	// (0x000136bf) set_opt_bg_pane_g2_copy1

0x6170,	// (0x00016ade) set_opt_bg_pane_g3_copy1

0x2d61,	// (0x000136cf) set_opt_bg_pane_g4_copy1

0x2d69,	// (0x000136d7) set_opt_bg_pane_g5_copy1

0x2d71,	// (0x000136df) set_opt_bg_pane_g6_copy1

0x617a,	// (0x00016ae8) set_opt_bg_pane_g7_copy1

0x6184,	// (0x00016af2) set_opt_bg_pane_g8_copy1

0x618e,	// (0x00016afc) set_opt_bg_pane_g9_copy1

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp_vc

0x6198,	// (0x00016b06) setting_slider_pane_vc_t1

0x61a7,	// (0x00016b15) setting_slider_pane_vc_t2

0x61b7,	// (0x00016b25) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x00020357) setting_slider_pane_vc_t

0x61c7,	// (0x00016b35) slider_set_pane_vc

0x08cf,	// (0x0001123d) volume_set_pane_vc_g1

0x08d8,	// (0x00011246) volume_set_pane_vc_g2

0x08e1,	// (0x0001124f) volume_set_pane_vc_g3

0x08ea,	// (0x00011258) volume_set_pane_vc_g4

0x08f3,	// (0x00011261) volume_set_pane_vc_g5

0x08fc,	// (0x0001126a) volume_set_pane_vc_g6

0x0905,	// (0x00011273) volume_set_pane_vc_g7

0x090e,	// (0x0001127c) volume_set_pane_vc_g8

0x0917,	// (0x00011285) volume_set_pane_vc_g9

0x0920,	// (0x0001128e) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x000201f5) volume_set_pane_vc_g

0x61cf,	// (0x00016b3d) volume_set_pane_vc

0x61d7,	// (0x00016b45) button_value_adjust_pane_cp1_vc

0x61e1,	// (0x00016b4f) list_highlight_pane_cp2_vc

0x61ea,	// (0x00016b58) list_set_pane_vc_ParamLimits

0x61ea,	// (0x00016b58) list_set_pane_vc

0x6248,	// (0x00016bb6) main_pane_set_vc_t1_ParamLimits

0x6248,	// (0x00016bb6) main_pane_set_vc_t1

0x625d,	// (0x00016bcb) main_pane_set_vc_t2_ParamLimits

0x625d,	// (0x00016bcb) main_pane_set_vc_t2

0x626f,	// (0x00016bdd) main_pane_set_vc_t3_ParamLimits

0x626f,	// (0x00016bdd) main_pane_set_vc_t3

0x6283,	// (0x00016bf1) main_pane_set_vc_t4_ParamLimits

0x6283,	// (0x00016bf1) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0002035e) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0002035e) main_pane_set_vc_t

0x6297,	// (0x00016c05) setting_code_pane_vc_ParamLimits

0x6297,	// (0x00016c05) setting_code_pane_vc

0x62a8,	// (0x00016c16) setting_slider_graphic_pane_vc

0x62a8,	// (0x00016c16) setting_slider_pane_vc

0x62a8,	// (0x00016c16) setting_text_pane_vc

0x62a8,	// (0x00016c16) setting_volume_pane_vc

0x62b2,	// (0x00016c20) scroll_pane_cp121_vc

0x2b22,	// (0x00013490) set_content_pane_vc

0x6582,	// (0x00016ef0) button_value_adjust_pane_g1

0x658b,	// (0x00016ef9) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x000203b8) button_value_adjust_pane_g

0x6594,	// (0x00016f02) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6594,	// (0x00016f02) form_field_slider_wide_pane_vc_t1

0x65a8,	// (0x00016f16) form_field_slider_wide_pane_vc_t2_ParamLimits

0x65a8,	// (0x00016f16) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x000203bd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x000203bd) form_field_slider_wide_pane_vc_t

0x20b1,	// (0x00012a1f) input_focus_pane_cp10_vc_ParamLimits

0x20b1,	// (0x00012a1f) input_focus_pane_cp10_vc

0x65d6,	// (0x00016f44) slider_cont_pane_cp1_vc_ParamLimits

0x65d6,	// (0x00016f44) slider_cont_pane_cp1_vc

0x65e8,	// (0x00016f56) slider_form_pane_g1_cp2

0x6144,	// (0x00016ab2) slider_form_pane_g2_cp2

0x6615,	// (0x00016f83) form_field_slider_pane_vc_t3

0x6623,	// (0x00016f91) form_field_slider_pane_vc_t4

0x6631,	// (0x00016f9f) slider_form_pane_vc_ParamLimits

0x6631,	// (0x00016f9f) slider_form_pane_vc

0x663e,	// (0x00016fac) form_field_slider_pane_vc_t1_ParamLimits

0x663e,	// (0x00016fac) form_field_slider_pane_vc_t1

0x65a8,	// (0x00016f16) form_field_slider_pane_vc_t2_ParamLimits

0x65a8,	// (0x00016f16) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x000203cf) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x000203cf) form_field_slider_pane_vc_t

0x20b1,	// (0x00012a1f) input_focus_pane_cp9_vc_ParamLimits

0x20b1,	// (0x00012a1f) input_focus_pane_cp9_vc

0x665a,	// (0x00016fc8) slider_cont_pane_vc_ParamLimits

0x665a,	// (0x00016fc8) slider_cont_pane_vc

0x666e,	// (0x00016fdc) list_form_graphic_pane_cp_vc_ParamLimits

0x666e,	// (0x00016fdc) list_form_graphic_pane_cp_vc

0x44f5,	// (0x00014e63) form_field_popup_wide_pane_vc_g1

0x6683,	// (0x00016ff1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6683,	// (0x00016ff1) form_field_popup_wide_pane_vc_t1

0x2c1a,	// (0x00013588) input_focus_pane_cp8_vc_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_cp8_vc

0x66c8,	// (0x00017036) list_form_wide_pane_vc_ParamLimits

0x66c8,	// (0x00017036) list_form_wide_pane_vc

0x66d4,	// (0x00017042) list_form_graphic_pane_vc_g1

0x66dc,	// (0x0001704a) list_form_graphic_pane_vc_t1_ParamLimits

0x66dc,	// (0x0001704a) list_form_graphic_pane_vc_t1

0x1e1c,	// (0x0001278a) list_highlight_pane_cp5_vc_ParamLimits

0x1e1c,	// (0x0001278a) list_highlight_pane_cp5_vc

0x66f8,	// (0x00017066) list_form_graphic_pane_vc_ParamLimits

0x66f8,	// (0x00017066) list_form_graphic_pane_vc

0x44f5,	// (0x00014e63) form_field_popup_pane_vc_g1

0x670e,	// (0x0001707c) form_field_popup_pane_vc_t1_ParamLimits

0x670e,	// (0x0001707c) form_field_popup_pane_vc_t1

0x2c1a,	// (0x00013588) input_focus_pane_cp7_vc_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_cp7_vc

0x6725,	// (0x00017093) list_form_pane_vc_ParamLimits

0x6725,	// (0x00017093) list_form_pane_vc

0x6731,	// (0x0001709f) data_form_pane_vc_t1_ParamLimits

0x6731,	// (0x0001709f) data_form_pane_vc_t1

0x2d49,	// (0x000136b7) input_focus_pane_vc_g1

0x2d51,	// (0x000136bf) input_focus_pane_vc_g2

0x2d59,	// (0x000136c7) input_focus_pane_vc_g3

0x2d61,	// (0x000136cf) input_focus_pane_vc_g4

0x2d69,	// (0x000136d7) input_focus_pane_vc_g5

0x2d71,	// (0x000136df) input_focus_pane_vc_g6

0x2d79,	// (0x000136e7) input_focus_pane_vc_g7

0x2d81,	// (0x000136ef) input_focus_pane_vc_g8

0x2d89,	// (0x000136f7) input_focus_pane_vc_g9

0xe690,	// (0x0001effe) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001ffd0) input_focus_pane_vc_g

0x44e9,	// (0x00014e57) data_form_pane_vc_ParamLimits

0x44e9,	// (0x00014e57) data_form_pane_vc

0x44f5,	// (0x00014e63) form_field_data_pane_vc_g1

0x674c,	// (0x000170ba) form_field_data_pane_vc_t1_ParamLimits

0x674c,	// (0x000170ba) form_field_data_pane_vc_t1

0x2c1a,	// (0x00013588) input_focus_pane_vc_ParamLimits

0x2c1a,	// (0x00013588) input_focus_pane_vc

0x6766,	// (0x000170d4) button_value_adjust_pane_cp3_vc

0x676e,	// (0x000170dc) button_value_adjust_pane_cp5_vc

0x6776,	// (0x000170e4) form_field_data_pane_vc_ParamLimits

0x6776,	// (0x000170e4) form_field_data_pane_vc

0x678d,	// (0x000170fb) form_field_data_pane_vc_cp2

0x6795,	// (0x00017103) form_field_data_wide_pane_vc_ParamLimits

0x6795,	// (0x00017103) form_field_data_wide_pane_vc

0x67ab,	// (0x00017119) form_field_data_wide_pane_vc_cp2

0x67b3,	// (0x00017121) form_field_popup_pane_vc_ParamLimits

0x67b3,	// (0x00017121) form_field_popup_pane_vc

0x67ca,	// (0x00017138) form_field_popup_wide_pane_vc_ParamLimits

0x67ca,	// (0x00017138) form_field_popup_wide_pane_vc

0x67e0,	// (0x0001714e) form_field_slider_pane_vc_ParamLimits

0x67e0,	// (0x0001714e) form_field_slider_pane_vc

0x67f3,	// (0x00017161) form_field_slider_wide_pane_vc_ParamLimits

0x67f3,	// (0x00017161) form_field_slider_wide_pane_vc

0xd776,	// (0x0001e0e4) grid_touch_1_pane_ParamLimits

0xd776,	// (0x0001e0e4) grid_touch_1_pane

0xd78a,	// (0x0001e0f8) grid_touch_2_pane_ParamLimits

0xd78a,	// (0x0001e0f8) grid_touch_2_pane

0x68d7,	// (0x00017245) touch_pane_g1_ParamLimits

0x68d7,	// (0x00017245) touch_pane_g1

0x682a,	// (0x00017198) cell_app_pane_cp_wide_ParamLimits

0x682a,	// (0x00017198) cell_app_pane_cp_wide

0x683b,	// (0x000171a9) grid_popup_fast_wide_pane_ParamLimits

0x683b,	// (0x000171a9) grid_popup_fast_wide_pane

0x684f,	// (0x000171bd) scroll_pane_cp19_ParamLimits

0x684f,	// (0x000171bd) scroll_pane_cp19

0x1d3c,	// (0x000126aa) bg_popup_window_pane_cp20

0x6863,	// (0x000171d1) listscroll_popup_fast_wide_pane

0xd7b4,	// (0x0001e122) grid_indicator_nsta_pane

0x687d,	// (0x000171eb) clock_nsta_pane_g1

0x6886,	// (0x000171f4) clock_nsta_pane_t1

0xd7c0,	// (0x0001e12e) cell_indicator_nsta_pane_ParamLimits

0xd7c0,	// (0x0001e12e) cell_indicator_nsta_pane

0x68d7,	// (0x00017245) cell_indicator_nsta_pane_g1

0xd7db,	// (0x0001e149) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x000203e0) cell_indicator_nsta_pane_g

0x68f7,	// (0x00017265) clock_nsta_pane_cp

0x6900,	// (0x0001726e) indicator_nsta_pane_cp

0x690a,	// (0x00017278) nsta_clock_indic_pane_g1

0x1eff,	// (0x0001286d) grid_indicator_pane

0x3342,	// (0x00013cb0) scroll_pane_cp29

0xf367,	// (0x0001fcd5) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x0001fcd5) indicator_nsta_pane_cp2

0x1e1c,	// (0x0001278a) main_apps_wheel_pane

0x4741,	// (0x000150af) form_midp_field_text_pane_ParamLimits

0x488c,	// (0x000151fa) scroll_bar_cp050_ParamLimits

0x6963,	// (0x000172d1) cell_indicator_pane_ParamLimits

0x6963,	// (0x000172d1) cell_indicator_pane

0x697a,	// (0x000172e8) cell_indicator_pane_g1

0xd7e8,	// (0x0001e156) grid_wheel_folder_pane_ParamLimits

0xd7e8,	// (0x0001e156) grid_wheel_folder_pane

0xd7f6,	// (0x0001e164) list_wheel_apps_pane_ParamLimits

0xd7f6,	// (0x0001e164) list_wheel_apps_pane

0xd804,	// (0x0001e172) main_apps_wheel_pane_g1_ParamLimits

0xd804,	// (0x0001e172) main_apps_wheel_pane_g1

0xd810,	// (0x0001e17e) main_apps_wheel_pane_g2_ParamLimits

0xd810,	// (0x0001e17e) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x000203fc) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x000203fc) main_apps_wheel_pane_g

0xd81e,	// (0x0001e18c) main_apps_wheel_pane_t1_ParamLimits

0xd81e,	// (0x0001e18c) main_apps_wheel_pane_t1

0xd832,	// (0x0001e1a0) list_wheel_apps_pane_g1

0xd83a,	// (0x0001e1a8) list_wheel_apps_pane_g2

0xd842,	// (0x0001e1b0) list_wheel_apps_pane_g3

0xd84a,	// (0x0001e1b8) list_wheel_apps_pane_g4

0xd854,	// (0x0001e1c2) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x00020401) list_wheel_apps_pane_g

0x3970,	// (0x000142de) navi_icon_text_pane

0xcdee,	// (0x0001d75c) aid_fill_nsta

0x6a3f,	// (0x000173ad) navi_icon_text_pane_g1

0x6a4b,	// (0x000173b9) navi_icon_text_pane_t1

0x3803,	// (0x00014171) list_set_graphic_pane_t1_ParamLimits

0x3803,	// (0x00014171) list_set_graphic_pane_t1

0x4ff7,	// (0x00015965) popup_midp_note_alarm_window_t6_ParamLimits

0x4ff7,	// (0x00015965) popup_midp_note_alarm_window_t6

0x5009,	// (0x00015977) popup_midp_note_alarm_window_t7_ParamLimits

0x5009,	// (0x00015977) popup_midp_note_alarm_window_t7

0x501b,	// (0x00015989) popup_midp_note_alarm_window_t8_ParamLimits

0x501b,	// (0x00015989) popup_midp_note_alarm_window_t8

0x502d,	// (0x0001599b) popup_midp_note_alarm_window_t9_ParamLimits

0x502d,	// (0x0001599b) popup_midp_note_alarm_window_t9

0x503f,	// (0x000159ad) popup_midp_note_alarm_window_t10_ParamLimits

0x503f,	// (0x000159ad) popup_midp_note_alarm_window_t10

0x5051,	// (0x000159bf) popup_midp_note_alarm_window_t11_ParamLimits

0x5051,	// (0x000159bf) popup_midp_note_alarm_window_t11

0x5063,	// (0x000159d1) scroll_pane_cp17_ParamLimits

0x5063,	// (0x000159d1) scroll_pane_cp17

0x08cf,	// (0x0001123d) volume_small_pane_cp_g1

0x0bc4,	// (0x00011532) volume_small_pane_cp_g2

0x0bcd,	// (0x0001153b) volume_small_pane_cp_g3

0x0bd6,	// (0x00011544) volume_small_pane_cp_g4

0x0bdf,	// (0x0001154d) volume_small_pane_cp_g5

0x0be8,	// (0x00011556) volume_small_pane_cp_g6

0x0bf1,	// (0x0001155f) volume_small_pane_cp_g7

0x0bfa,	// (0x00011568) volume_small_pane_cp_g8

0x0c03,	// (0x00011571) volume_small_pane_cp_g9

0x0c0c,	// (0x0001157a) volume_small_pane_cp_g10

0x3bca,	// (0x00014538) midp_ticker_pane_g1_ParamLimits

0x3bd6,	// (0x00014544) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0002009c) midp_ticker_pane_g_ParamLimits

0x3be2,	// (0x00014550) midp_ticker_pane_t1_ParamLimits

0xce12,	// (0x0001d780) aid_fill_nsta_2

0x4878,	// (0x000151e6) list_form2_midp_pane

0x5a01,	// (0x0001636f) midp_editing_number_pane_ParamLimits

0x5a10,	// (0x0001637e) midp_ticker_pane_ParamLimits

0x6a5d,	// (0x000173cb) form2_midp_field_pane

0x6a81,	// (0x000173ef) scroll_pane_cp51

0x6aa1,	// (0x0001740f) form2_midp_button_pane_ParamLimits

0x6aa1,	// (0x0001740f) form2_midp_button_pane

0x6ab3,	// (0x00017421) form2_midp_content_pane_ParamLimits

0x6ab3,	// (0x00017421) form2_midp_content_pane

0x6acd,	// (0x0001743b) form2_midp_field_choice_group_pane

0x6ad5,	// (0x00017443) form2_midp_field_pane_g1

0x6add,	// (0x0001744b) form2_midp_field_pane_g2

0x6ae5,	// (0x00017453) form2_midp_field_pane_g3

0x6aed,	// (0x0001745b) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x00020426) form2_midp_field_pane_g

0x6af5,	// (0x00017463) form2_midp_gauge_slider_pane

0x6afd,	// (0x0001746b) form2_midp_gauge_wait_pane

0x6b05,	// (0x00017473) form2_midp_image_pane_ParamLimits

0x6b05,	// (0x00017473) form2_midp_image_pane

0x6b20,	// (0x0001748e) form2_midp_label_pane_ParamLimits

0x6b20,	// (0x0001748e) form2_midp_label_pane

0xd887,	// (0x0001e1f5) form2_midp_label_pane_cp_ParamLimits

0xd887,	// (0x0001e1f5) form2_midp_label_pane_cp

0x6b5a,	// (0x000174c8) form2_midp_string_pane_ParamLimits

0x6b5a,	// (0x000174c8) form2_midp_string_pane

0xd8a6,	// (0x0001e214) form2_midp_text_pane_ParamLimits

0xd8a6,	// (0x0001e214) form2_midp_text_pane

0x6b89,	// (0x000174f7) form2_midp_time_pane

0x6b99,	// (0x00017507) input_focus_pane_cp51_ParamLimits

0x6b99,	// (0x00017507) input_focus_pane_cp51

0x6bb1,	// (0x0001751f) form2_midp_label_pane_t1_ParamLimits

0x6bb1,	// (0x0001751f) form2_midp_label_pane_t1

0xd8bf,	// (0x0001e22d) form2_mdip_text_pane_t1_ParamLimits

0xd8bf,	// (0x0001e22d) form2_mdip_text_pane_t1

0x6c11,	// (0x0001757f) form2_midp_time_pane_t1

0x6c2c,	// (0x0001759a) form2_midp_gauge_slider_pane_t1

0xd8da,	// (0x0001e248) form2_midp_gauge_slider_pane_t2

0xd8ec,	// (0x0001e25a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x0002042f) form2_midp_gauge_slider_pane_t

0x6c62,	// (0x000175d0) form2_midp_slider_pane

0x6c6e,	// (0x000175dc) form2_midp_gauge_wait_pane_t1

0x6c7c,	// (0x000175ea) form2_midp_wait_pane_ParamLimits

0x6c7c,	// (0x000175ea) form2_midp_wait_pane

0xd8fe,	// (0x0001e26c) list_single_2graphic_pane_cp4_ParamLimits

0xd8fe,	// (0x0001e26c) list_single_2graphic_pane_cp4

0xd22e,	// (0x0001db9c) list_single_midp_graphic_pane_cp_ParamLimits

0xd22e,	// (0x0001db9c) list_single_midp_graphic_pane_cp

0x1d3c,	// (0x000126aa) list_highlight_pane_cp20

0x6ccb,	// (0x00017639) list_single_2graphic_pane_g1_cp4

0x6cd3,	// (0x00017641) list_single_2graphic_pane_g2_cp4

0x6cdb,	// (0x00017649) list_single_2graphic_pane_t1_cp4

0x1e1c,	// (0x0001278a) list_highlight_pane_cp21

0x6cea,	// (0x00017658) list_single_midp_graphic_pane_g4_cp

0x6cf9,	// (0x00017667) list_single_midp_graphic_pane_t1_cp

0xd912,	// (0x0001e280) form2_mdip_string_pane_t1_ParamLimits

0xd912,	// (0x0001e280) form2_mdip_string_pane_t1

0x1d3c,	// (0x000126aa) bg_wml_button_pane_cp2

0xe690,	// (0x0001effe) form2_midp_image_pane_g1

0x28e4,	// (0x00013252) list_double_large_graphic_pane_g5_ParamLimits

0x28e4,	// (0x00013252) list_double_large_graphic_pane_g5

0xcc71,	// (0x0001d5df) midp_form_pane_ParamLimits

0x1e1c,	// (0x0001278a) main_apps_wheel_pane_ParamLimits

0xb898,	// (0x0001c206) popup_preview_window_ParamLimits

0xb898,	// (0x0001c206) popup_preview_window

0x06ca,	// (0x00011038) popup_touch_info_window_ParamLimits

0x06ca,	// (0x00011038) popup_touch_info_window

0x06e8,	// (0x00011056) popup_touch_menu_window_ParamLimits

0x06e8,	// (0x00011056) popup_touch_menu_window

0xe686,	// (0x0001eff4) bg_popup_sub_pane_cp6

0x6e07,	// (0x00017775) list_touch_menu_pane

0x6e0f,	// (0x0001777d) list_single_touch_menu_pane_ParamLimits

0x6e0f,	// (0x0001777d) list_single_touch_menu_pane

0x6e25,	// (0x00017793) list_single_touch_menu_pane_t1

0x1e1c,	// (0x0001278a) bg_popup_sub_pane_cp7_ParamLimits

0x1e1c,	// (0x0001278a) bg_popup_sub_pane_cp7

0x6e33,	// (0x000177a1) heading_sub_pane

0x6e3b,	// (0x000177a9) list_touch_info_pane_ParamLimits

0x6e3b,	// (0x000177a9) list_touch_info_pane

0x6e4a,	// (0x000177b8) list_single_touch_info_pane_ParamLimits

0x6e4a,	// (0x000177b8) list_single_touch_info_pane

0x6e5c,	// (0x000177ca) list_single_touch_info_pane_t1

0x6e6a,	// (0x000177d8) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x0002043d) list_single_touch_info_pane_t

0x3aed,	// (0x0001445b) bg_popup_heading_pane_cp

0x6e78,	// (0x000177e6) heading_sub_pane_t1

0x4483,	// (0x00014df1) bg_popup_preview_window_pane_cp_ParamLimits

0x4483,	// (0x00014df1) bg_popup_preview_window_pane_cp

0x6e33,	// (0x000177a1) heading_preview_pane

0x6e3b,	// (0x000177a9) list_preview_pane_ParamLimits

0x6e3b,	// (0x000177a9) list_preview_pane

0x6e86,	// (0x000177f4) popup_preview_window_g1

0x6e4a,	// (0x000177b8) list_single_preview_pane_ParamLimits

0x6e4a,	// (0x000177b8) list_single_preview_pane

0x6e8e,	// (0x000177fc) list_single_preview_pane_g1

0x6e96,	// (0x00017804) list_single_preview_pane_t1

0x6e5c,	// (0x000177ca) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x00020442) list_single_preview_pane_t

0x6ea4,	// (0x00017812) bg_popup_heading_pane_cp2_ParamLimits

0x6ea4,	// (0x00017812) bg_popup_heading_pane_cp2

0x6eba,	// (0x00017828) heading_preview_pane_g1

0x6ec2,	// (0x00017830) heading_preview_pane_t1_ParamLimits

0x6ec2,	// (0x00017830) heading_preview_pane_t1

0x1f22,	// (0x00012890) soft_indicator_pane_t1_ParamLimits

0x2636,	// (0x00012fa4) scroll_pane_ParamLimits

0x323b,	// (0x00013ba9) scroll_sc2_left_pane

0x3244,	// (0x00013bb2) scroll_sc2_right_pane

0x3263,	// (0x00013bd1) scroll_bg_pane_g1_ParamLimits

0x3278,	// (0x00013be6) scroll_bg_pane_g2_ParamLimits

0x3290,	// (0x00013bfe) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00020027) scroll_bg_pane_g_ParamLimits

0x3263,	// (0x00013bd1) scroll_handle_pane_g1_ParamLimits

0x32b2,	// (0x00013c20) scroll_handle_pane_g2_ParamLimits

0x3290,	// (0x00013bfe) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0002002e) scroll_handle_pane_g_ParamLimits

0x018e,	// (0x00010afc) popup_choice_list_window_ParamLimits

0x018e,	// (0x00010afc) popup_choice_list_window

0x4295,	// (0x00014c03) choice_list_pane

0x432d,	// (0x00014c9b) cell_toolbar_pane_t1

0x4355,	// (0x00014cc3) toolbar_button_pane_ParamLimits

0x551d,	// (0x00015e8b) ai_gene_pane_1_t2_ParamLimits

0x551d,	// (0x00015e8b) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x00020251) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x00020251) ai_gene_pane_1_t

0x6edf,	// (0x0001784d) scroll_sc2_left_pane_g1

0x6edf,	// (0x0001784d) scroll_sc2_right_pane_g1

0x3e19,	// (0x00014787) bg_popup_sub_pane_cp10

0x6ee9,	// (0x00017857) list_choice_list_pane

0x6f02,	// (0x00017870) list_single_choice_list_pane_ParamLimits

0x6f02,	// (0x00017870) list_single_choice_list_pane

0x6f15,	// (0x00017883) list_single_choice_list_pane_g1

0x2f41,	// (0x000138af) list_single_choice_list_pane_t1_ParamLimits

0x2f41,	// (0x000138af) list_single_choice_list_pane_t1

0x6f1d,	// (0x0001788b) choice_list_pane_g1

0x6f25,	// (0x00017893) choice_list_pane_t1

0xe686,	// (0x0001eff4) input_focus_pane_cp11

0x3118,	// (0x00013a86) title_pane_stacon_g2_ParamLimits

0x3118,	// (0x00013a86) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0002000d) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002000d) title_pane_stacon_g

0x3aed,	// (0x0001445b) cursor_press_pane

0xb53f,	// (0x0001bead) popup_fep_hwr_window_ParamLimits

0xb53f,	// (0x0001bead) popup_fep_hwr_window

0x02b4,	// (0x00010c22) popup_fep_vkb_window_ParamLimits

0x02b4,	// (0x00010c22) popup_fep_vkb_window

0x6f33,	// (0x000178a1) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x0002046b) fep_vkb_side_pane_g_ParamLimits

0x0c4e,	// (0x000115bc) fep_hwr_candidate_pane_ParamLimits

0x0c4e,	// (0x000115bc) fep_hwr_candidate_pane

0x0c78,	// (0x000115e6) fep_hwr_side_pane_ParamLimits

0x0c78,	// (0x000115e6) fep_hwr_side_pane

0x0c98,	// (0x00011606) fep_hwr_top_pane_ParamLimits

0x0c98,	// (0x00011606) fep_hwr_top_pane

0x0cb0,	// (0x0001161e) fep_hwr_write_pane_ParamLimits

0x0cb0,	// (0x0001161e) fep_hwr_write_pane

0xfafd,	// (0x0002046b) fep_vkb_side_pane_g

0x6f3b,	// (0x000178a9) fep_hwr_top_pane_g1

0x6f4d,	// (0x000178bb) fep_hwr_top_pane_g2

0x0cea,	// (0x00011658) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x00020447) fep_hwr_top_pane_g

0x0cff,	// (0x0001166d) fep_hwr_top_text_pane

0x3432,	// (0x00013da0) fep_hwr_top_text_pane_g1

0x6f83,	// (0x000178f1) fep_hwr_top_text_pane_t1

0x0df5,	// (0x00011763) fep_hwr_candidate_pane_g1

0x71d6,	// (0x00017b44) fep_vkb_keypad_pane_g3_ParamLimits

0x71d6,	// (0x00017b44) fep_vkb_keypad_pane_g3

0x71fe,	// (0x00017b6c) fep_vkb_keypad_pane_g4_ParamLimits

0x71fe,	// (0x00017b6c) fep_vkb_keypad_pane_g4

0x726d,	// (0x00017bdb) fep_vkb_bottom_pane_g2_ParamLimits

0x726d,	// (0x00017bdb) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x00020472) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x00020472) fep_vkb_bottom_pane_g

0x6edf,	// (0x0001784d) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x0002047c) cell_vkb_side_pane_g

0x72f8,	// (0x00017c66) cell_vkb_side_pane_t1

0x7306,	// (0x00017c74) cell_vkb_side_pane_t1_copy1

0x6edf,	// (0x0001784d) bg_fep_vkb_candidate_pane_g2

0x7432,	// (0x00017da0) cell_vkb_candidate_pane_ParamLimits

0x6f91,	// (0x000178ff) aid_size_cell_vkb_ParamLimits

0x6f91,	// (0x000178ff) aid_size_cell_vkb

0x7432,	// (0x00017da0) cell_vkb_candidate_pane

0x0e1c,	// (0x0001178a) bg_popup_fep_shadow_pane_g1

0xd994,	// (0x0001e302) fep_vkb_bottom_pane_ParamLimits

0xd994,	// (0x0001e302) fep_vkb_bottom_pane

0x7055,	// (0x000179c3) fep_vkb_candidate_pane_ParamLimits

0x7055,	// (0x000179c3) fep_vkb_candidate_pane

0xd9b9,	// (0x0001e327) fep_vkb_keypad_pane_ParamLimits

0xd9b9,	// (0x0001e327) fep_vkb_keypad_pane

0xd9f5,	// (0x0001e363) fep_vkb_side_pane_ParamLimits

0xd9f5,	// (0x0001e363) fep_vkb_side_pane

0xda31,	// (0x0001e39f) fep_vkb_top_pane_ParamLimits

0xda31,	// (0x0001e39f) fep_vkb_top_pane

0x712f,	// (0x00017a9d) fep_vkb_top_pane_g1_ParamLimits

0x712f,	// (0x00017a9d) fep_vkb_top_pane_g1

0x713e,	// (0x00017aac) fep_vkb_top_pane_g2_ParamLimits

0x713e,	// (0x00017aac) fep_vkb_top_pane_g2

0x714d,	// (0x00017abb) fep_vkb_top_pane_g3_ParamLimits

0x714d,	// (0x00017abb) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x00020462) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x00020462) fep_vkb_top_pane_g

0x716b,	// (0x00017ad9) fep_vkb_top_text_pane_ParamLimits

0x716b,	// (0x00017ad9) fep_vkb_top_text_pane

0xda6d,	// (0x0001e3db) fep_vkb_side_pane_g1_ParamLimits

0xda6d,	// (0x0001e3db) fep_vkb_side_pane_g1

0x71c5,	// (0x00017b33) grid_vkb_side_pane_ParamLimits

0x71c5,	// (0x00017b33) grid_vkb_side_pane

0x0e24,	// (0x00011792) bg_popup_fep_shadow_pane_g2

0x0e2d,	// (0x0001179b) bg_popup_fep_shadow_pane_g3

0x0e35,	// (0x000117a3) bg_popup_fep_shadow_pane_g4

0x0e3e,	// (0x000117ac) bg_popup_fep_shadow_pane_g5

0x0e48,	// (0x000117b6) bg_popup_fep_shadow_pane_g6

0x0e50,	// (0x000117be) bg_popup_fep_shadow_pane_g7

0x2d61,	// (0x000136cf) bg_popup_fep_shadow_pane_g8

0x721c,	// (0x00017b8a) grid_vkb_keypad_number_pane_ParamLimits

0x721c,	// (0x00017b8a) grid_vkb_keypad_number_pane

0x722c,	// (0x00017b9a) grid_vkb_keypad_pane_ParamLimits

0x722c,	// (0x00017b9a) grid_vkb_keypad_pane

0x7252,	// (0x00017bc0) fep_vkb_bottom_pane_g1_ParamLimits

0x7252,	// (0x00017bc0) fep_vkb_bottom_pane_g1

0x727b,	// (0x00017be9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x727b,	// (0x00017be9) grid_vkb_keypad_bottom_left_pane

0x7290,	// (0x00017bfe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7290,	// (0x00017bfe) grid_vkb_keypad_bottom_right_pane

0x72a5,	// (0x00017c13) fep_vkb_top_text_pane_g1

0xdab4,	// (0x0001e422) fep_vkb_top_text_pane_t1

0xdac6,	// (0x0001e434) cell_vkb_side_pane_ParamLimits

0xdac6,	// (0x0001e434) cell_vkb_side_pane

0x6edf,	// (0x0001784d) cell_vkb_side_pane_g1

0x7314,	// (0x00017c82) cell_vkb_keypad_pane_ParamLimits

0x7314,	// (0x00017c82) cell_vkb_keypad_pane

0x7389,	// (0x00017cf7) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x0002048f) bg_popup_fep_shadow_pane_g

0x0e62,	// (0x000117d0) cell_hwr_side_pane_g1

0x0e62,	// (0x000117d0) cell_hwr_side_pane_g2

0x7393,	// (0x00017d01) cell_vkb_keypad_pane_t1

0xdadc,	// (0x0001e44a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdadc,	// (0x0001e44a) cell_vkb_keypad_bottom_left_pane

0xdaf1,	// (0x0001e45f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdaf1,	// (0x0001e45f) cell_vkb_keypad_bottom_right_pane

0x6edf,	// (0x0001784d) cell_vkb_keypad_bottom_left_pane_g1

0x6edf,	// (0x0001784d) cell_vkb_keypad_bottom_right_pane_g1

0x73f7,	// (0x00017d65) cell_vkb_keypad_number_pane_ParamLimits

0x73f7,	// (0x00017d65) cell_vkb_keypad_number_pane

0x7416,	// (0x00017d84) cell_vkb_keypad_number_pane_g1

0x7420,	// (0x00017d8e) cell_vkb_keypad_number_pane_g2

0x7429,	// (0x00017d97) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x00020481) cell_vkb_keypad_number_pane_g

0x7393,	// (0x00017d01) cell_vkb_keypad_number_pane_t1

0x744d,	// (0x00017dbb) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x000204a2) cell_hwr_side_pane_g

0x7466,	// (0x00017dd4) cell_hwr_side_pane_t1

0x0e6c,	// (0x000117da) cell_hwr_side_pane_t1_copy1

0x0e7a,	// (0x000117e8) cell_hwr_candidate_pane_g1

0x0ea9,	// (0x00011817) cell_hwr_candidate_pane_t1

0x6edf,	// (0x0001784d) cell_vkb_candidate_pane_g2

0x74aa,	// (0x00017e18) cell_vkb_candidate_pane_t1

0x0c15,	// (0x00011583) bg_popup_fep_shadow_pane_ParamLimits

0x0c15,	// (0x00011583) bg_popup_fep_shadow_pane

0x0cca,	// (0x00011638) bg_fep_hwr_top_pane_g4

0x6f5f,	// (0x000178cd) bg_hwr_side_pane_g1_ParamLimits

0x6f5f,	// (0x000178cd) bg_hwr_side_pane_g1

0xbbd2,	// (0x0001c540) cell_hwr_side_pane_ParamLimits

0xbbd2,	// (0x0001c540) cell_hwr_side_pane

0x0d76,	// (0x000116e4) fep_hwr_write_pane_g1_ParamLimits

0x0d76,	// (0x000116e4) fep_hwr_write_pane_g1

0x0d83,	// (0x000116f1) fep_hwr_write_pane_g2_ParamLimits

0x0d83,	// (0x000116f1) fep_hwr_write_pane_g2

0x0d90,	// (0x000116fe) fep_hwr_write_pane_g3_ParamLimits

0x0d90,	// (0x000116fe) fep_hwr_write_pane_g3

0xbbf2,	// (0x0001c560) fep_hwr_write_pane_g4_ParamLimits

0xbbf2,	// (0x0001c560) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x0002044e) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x0002044e) fep_hwr_write_pane_g

0x0cca,	// (0x00011638) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0cca,	// (0x00011638) bg_fep_hwr_candidate_pane_g2

0x0db3,	// (0x00011721) cell_hwr_candidate_pane_ParamLimits

0x0db3,	// (0x00011721) cell_hwr_candidate_pane

0x0df5,	// (0x00011763) fep_hwr_candidate_pane_g1_ParamLimits

0x6fbf,	// (0x0001792d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6fbf,	// (0x0001792d) bg_popup_fep_shadow_pane_cp2

0x715d,	// (0x00017acb) fep_vkb_top_pane_g4_ParamLimits

0x715d,	// (0x00017acb) fep_vkb_top_pane_g4

0x71a3,	// (0x00017b11) fep_vkb_side_pane_g2_ParamLimits

0x71a3,	// (0x00017b11) fep_vkb_side_pane_g2

0xc85d,	// (0x0001d1cb) list_setting_pane_t4_ParamLimits

0xc85d,	// (0x0001d1cb) list_setting_pane_t4

0xc8d7,	// (0x0001d245) list_setting_number_pane_t5_ParamLimits

0xc8d7,	// (0x0001d245) list_setting_number_pane_t5

0x3469,	// (0x00013dd7) list_double_heading_pane_cp2_ParamLimits

0x3469,	// (0x00013dd7) list_double_heading_pane_cp2

0x2c40,	// (0x000135ae) list_double_heading_pane_g1_cp2_ParamLimits

0x2c40,	// (0x000135ae) list_double_heading_pane_g1_cp2

0x2c4c,	// (0x000135ba) list_double_heading_pane_g2_cp2_ParamLimits

0x2c4c,	// (0x000135ba) list_double_heading_pane_g2_cp2

0x74b8,	// (0x00017e26) list_double_heading_pane_t1_cp2_ParamLimits

0x74b8,	// (0x00017e26) list_double_heading_pane_t1_cp2

0x74ce,	// (0x00017e3c) list_double_heading_pane_t2_cp2_ParamLimits

0x74ce,	// (0x00017e3c) list_double_heading_pane_t2_cp2

0xe67e,	// (0x0001efec) aid_value_unit2

0xf007,	// (0x0001f975) popup_preview_fixed_window

0x20bf,	// (0x00012a2d) bg_popup_preview_window_pane_cp02

0x74e0,	// (0x00017e4e) list_preview_fixed_pane

0x7526,	// (0x00017e94) list_empty_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_empty_pane_fp

0x7526,	// (0x00017e94) list_single_cale_day_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_cale_day_pane_fp

0x7526,	// (0x00017e94) list_single_graphic_heading_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_graphic_heading_pane_fp

0x7526,	// (0x00017e94) list_single_graphic_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_graphic_pane_fp

0x7526,	// (0x00017e94) list_single_heading_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_heading_pane_fp

0x7526,	// (0x00017e94) list_single_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_pane_fp

0x757d,	// (0x00017eeb) list_single_pane_fp_g1_ParamLimits

0x757d,	// (0x00017eeb) list_single_pane_fp_g1

0x2c40,	// (0x000135ae) list_single_pane_fp_g2_ParamLimits

0x2c40,	// (0x000135ae) list_single_pane_fp_g2

0x2c4c,	// (0x000135ba) list_single_pane_fp_g3_ParamLimits

0x2c4c,	// (0x000135ba) list_single_pane_fp_g3

0x7589,	// (0x00017ef7) list_single_pane_fp_g4_ParamLimits

0x7589,	// (0x00017ef7) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x000204b5) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x000204b5) list_single_pane_fp_g

0x7595,	// (0x00017f03) list_single_pane_fp_t1_ParamLimits

0x7595,	// (0x00017f03) list_single_pane_fp_t1

0x75ac,	// (0x00017f1a) list_single_graphic_pane_fp_g1_ParamLimits

0x75ac,	// (0x00017f1a) list_single_graphic_pane_fp_g1

0x757d,	// (0x00017eeb) list_single_graphic_pane_fp_g2_ParamLimits

0x757d,	// (0x00017eeb) list_single_graphic_pane_fp_g2

0x2c40,	// (0x000135ae) list_single_graphic_pane_fp_g3_ParamLimits

0x2c40,	// (0x000135ae) list_single_graphic_pane_fp_g3

0x2c4c,	// (0x000135ba) list_single_graphic_pane_fp_g4_ParamLimits

0x2c4c,	// (0x000135ba) list_single_graphic_pane_fp_g4

0x7589,	// (0x00017ef7) list_single_graphic_pane_fp_g5_ParamLimits

0x7589,	// (0x00017ef7) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x000204be) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x000204be) list_single_graphic_pane_fp_g

0x75b8,	// (0x00017f26) list_single_graphic_pane_fp_t1_ParamLimits

0x75b8,	// (0x00017f26) list_single_graphic_pane_fp_t1

0x75ac,	// (0x00017f1a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x75ac,	// (0x00017f1a) list_single_graphic_heading_pane_fp_g1

0x757d,	// (0x00017eeb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x757d,	// (0x00017eeb) list_single_graphic_heading_pane_fp_g2

0x2c40,	// (0x000135ae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2c40,	// (0x000135ae) list_single_graphic_heading_pane_fp_g3

0x2c4c,	// (0x000135ba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2c4c,	// (0x000135ba) list_single_graphic_heading_pane_fp_g4

0x7589,	// (0x00017ef7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7589,	// (0x00017ef7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x000204be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x000204be) list_single_graphic_heading_pane_fp_g

0x75ce,	// (0x00017f3c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x75ce,	// (0x00017f3c) list_single_graphic_heading_pane_fp_t1

0x75e4,	// (0x00017f52) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x75e4,	// (0x00017f52) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x000204c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x000204c9) list_single_graphic_heading_pane_fp_t

0x75f6,	// (0x00017f64) list_single_cale_day_pane_fp_g1_ParamLimits

0x75f6,	// (0x00017f64) list_single_cale_day_pane_fp_g1

0x762e,	// (0x00017f9c) list_single_cale_day_pane_fp_g2_ParamLimits

0x762e,	// (0x00017f9c) list_single_cale_day_pane_fp_g2

0x763a,	// (0x00017fa8) list_single_cale_day_pane_fp_g3_ParamLimits

0x763a,	// (0x00017fa8) list_single_cale_day_pane_fp_g3

0x7662,	// (0x00017fd0) list_single_cale_day_pane_fp_g4_ParamLimits

0x7662,	// (0x00017fd0) list_single_cale_day_pane_fp_g4

0x7686,	// (0x00017ff4) list_single_cale_day_pane_fp_g5_ParamLimits

0x7686,	// (0x00017ff4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x000204ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x000204ce) list_single_cale_day_pane_fp_g

0x76aa,	// (0x00018018) list_single_cale_day_pane_fp_t1_ParamLimits

0x76aa,	// (0x00018018) list_single_cale_day_pane_fp_t1

0x76d0,	// (0x0001803e) list_single_cale_day_pane_fp_t2_ParamLimits

0x76d0,	// (0x0001803e) list_single_cale_day_pane_fp_t2

0x76e9,	// (0x00018057) list_single_cale_day_pane_fp_t3_ParamLimits

0x76e9,	// (0x00018057) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x000204d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x000204d9) list_single_cale_day_pane_fp_t

0x757d,	// (0x00017eeb) list_empty_pane_fp_g1_ParamLimits

0x757d,	// (0x00017eeb) list_empty_pane_fp_g1

0x7702,	// (0x00018070) list_empty_pane_fp_t1

0x7710,	// (0x0001807e) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x000204e0) list_empty_pane_fp_t

0x757d,	// (0x00017eeb) list_single_heading_pane_fp_g1_ParamLimits

0x757d,	// (0x00017eeb) list_single_heading_pane_fp_g1

0x2c40,	// (0x000135ae) list_single_heading_pane_fp_g2_ParamLimits

0x2c40,	// (0x000135ae) list_single_heading_pane_fp_g2

0x2c4c,	// (0x000135ba) list_single_heading_pane_fp_g3_ParamLimits

0x2c4c,	// (0x000135ba) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x000204e5) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x000204e5) list_single_heading_pane_fp_g

0x771e,	// (0x0001808c) list_single_heading_pane_fp_t1_ParamLimits

0x771e,	// (0x0001808c) list_single_heading_pane_fp_t1

0x7730,	// (0x0001809e) list_single_heading_pane_fp_t2_ParamLimits

0x7730,	// (0x0001809e) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x000204ec) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x000204ec) list_single_heading_pane_fp_t

0x2faf,	// (0x0001391d) aid_size_cell_fast

0x202f,	// (0x0001299d) soft_indicator_pane_cp1_t1

0x2fec,	// (0x0001395a) cell_app_pane_cp2_ParamLimits

0x2fec,	// (0x0001395a) cell_app_pane_cp2

0x0c37,	// (0x000115a5) fep_hwr_candidate_drop_down_list_pane

0x0e0f,	// (0x0001177d) fep_hwr_candidate_pane_g3_ParamLimits

0x0e0f,	// (0x0001177d) fep_hwr_candidate_pane_g3

0xe69a,	// (0x0001f008) fep_hwr_candidate_pane_g4_ParamLimits

0xe69a,	// (0x0001f008) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x0002045b) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x0002045b) fep_hwr_candidate_pane_g

0x7044,	// (0x000179b2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7044,	// (0x000179b2) fep_vkb_candidate_drop_down_list_pane

0x7455,	// (0x00017dc3) fep_vkb_candidate_pane_g3

0x745d,	// (0x00017dcb) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x00020488) fep_vkb_candidate_pane_g

0x0e7a,	// (0x000117e8) cell_hwr_candidate_pane_g1_ParamLimits

0x0e88,	// (0x000117f6) cell_hwr_candidate_pane_g3_ParamLimits

0x0e88,	// (0x000117f6) cell_hwr_candidate_pane_g3

0x8d4e,	// (0x000196bc) cell_hwr_candidate_pane_g4_ParamLimits

0x8d4e,	// (0x000196bc) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x000204a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x000204a7) cell_hwr_candidate_pane_g

0x7474,	// (0x00017de2) cell_vkb_candidate_pane_g3_ParamLimits

0x7474,	// (0x00017de2) cell_vkb_candidate_pane_g3

0x748f,	// (0x00017dfd) cell_vkb_candidate_pane_g4_ParamLimits

0x748f,	// (0x00017dfd) cell_vkb_candidate_pane_g4

0x7746,	// (0x000180b4) cell_app_pane_cp2_g1_ParamLimits

0x7746,	// (0x000180b4) cell_app_pane_cp2_g1

0x7764,	// (0x000180d2) cell_app_pane_cp2_g2_ParamLimits

0x7764,	// (0x000180d2) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x000204f1) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x000204f1) cell_app_pane_cp2_g

0x7770,	// (0x000180de) cell_app_pane_cp2_t1_ParamLimits

0x7770,	// (0x000180de) cell_app_pane_cp2_t1

0x2c1a,	// (0x00013588) grid_highlight_pane_cp1_ParamLimits

0x2c1a,	// (0x00013588) grid_highlight_pane_cp1

0x0ec7,	// (0x00011835) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ec7,	// (0x00011835) cell_hwr_candidate_pane_cp1

0x0e7a,	// (0x000117e8) fep_hwr_candidate_drop_down_list_pane_g1

0x0ee6,	// (0x00011854) fep_hwr_candidate_drop_down_list_pane_g2

0x0ef3,	// (0x00011861) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x000204f6) fep_hwr_candidate_drop_down_list_pane_g

0x0f00,	// (0x0001186e) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f09,	// (0x00011877) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f09,	// (0x00011877) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f16,	// (0x00011884) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f16,	// (0x00011884) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f23,	// (0x00011891) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f23,	// (0x00011891) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f30,	// (0x0001189e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f30,	// (0x0001189e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f4b,	// (0x000118b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f4b,	// (0x000118b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0f66,	// (0x000118d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0f66,	// (0x000118d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0f81,	// (0x000118ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0f81,	// (0x000118ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0f9c,	// (0x0001190a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0f9c,	// (0x0001190a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x000204fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x000204fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7782,	// (0x000180f0) cell_vkb_candidate_pane_cp1_ParamLimits

0x7782,	// (0x000180f0) cell_vkb_candidate_pane_cp1

0x715d,	// (0x00017acb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x715d,	// (0x00017acb) fep_vkb_candidate_drop_down_list_pane_g1

0x77a2,	// (0x00018110) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x77a2,	// (0x00018110) fep_vkb_candidate_drop_down_list_pane_g2

0x77af,	// (0x0001811d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x77af,	// (0x0001811d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba0,	// (0x0002050e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba0,	// (0x0002050e) fep_vkb_candidate_drop_down_list_pane_g

0x77bc,	// (0x0001812a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x77bc,	// (0x0001812a) fep_vkb_candidate_drop_down_list_scroll_pane

0x77c9,	// (0x00018137) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x77c9,	// (0x00018137) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x77d6,	// (0x00018144) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x77d6,	// (0x00018144) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x77e2,	// (0x00018150) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x77e2,	// (0x00018150) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x753b,	// (0x00017ea9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x753b,	// (0x00017ea9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x755c,	// (0x00017eca) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x755c,	// (0x00017eca) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x77ee,	// (0x0001815c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x77ee,	// (0x0001815c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x780f,	// (0x0001817d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x780f,	// (0x0001817d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7830,	// (0x0001819e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7830,	// (0x0001819e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x00020515) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x00020515) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc250,	// (0x0001cbbe) title_pane_g1_ParamLimits

0xc263,	// (0x0001cbd1) title_pane_g2_ParamLimits

0xf529,	// (0x0001fe97) title_pane_g_ParamLimits

0x3422,	// (0x00013d90) aid_call2_pane

0x342a,	// (0x00013d98) aid_call_pane

0x3432,	// (0x00013da0) popup_clock_analogue_window_g1

0x3432,	// (0x00013da0) popup_clock_analogue_window_g2

0xf268,	// (0x0001fbd6) popup_clock_analogue_window_g3

0xf271,	// (0x0001fbdf) popup_clock_analogue_window_g4

0xe690,	// (0x0001effe) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0002003c) popup_clock_analogue_window_g

0xf279,	// (0x0001fbe7) popup_clock_analogue_window_t1

0xf287,	// (0x0001fbf5) clock_digital_number_pane_ParamLimits

0xf287,	// (0x0001fbf5) clock_digital_number_pane

0xf293,	// (0x0001fc01) clock_digital_number_pane_cp02_ParamLimits

0xf293,	// (0x0001fc01) clock_digital_number_pane_cp02

0xf29f,	// (0x0001fc0d) clock_digital_number_pane_cp03_ParamLimits

0xf29f,	// (0x0001fc0d) clock_digital_number_pane_cp03

0xf2ab,	// (0x0001fc19) clock_digital_number_pane_cp04_ParamLimits

0xf2ab,	// (0x0001fc19) clock_digital_number_pane_cp04

0xf2b7,	// (0x0001fc25) clock_digital_separator_pane_ParamLimits

0xf2b7,	// (0x0001fc25) clock_digital_separator_pane

0xf2c3,	// (0x0001fc31) popup_clock_digital_window_t1_ParamLimits

0xf2c3,	// (0x0001fc31) popup_clock_digital_window_t1

0xe690,	// (0x0001effe) clock_digital_number_pane_g1

0xe690,	// (0x0001effe) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00020047) clock_digital_number_pane_g

0xe690,	// (0x0001effe) clock_digital_separator_pane_g1

0xe690,	// (0x0001effe) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00020047) clock_digital_separator_pane_g

0xcdee,	// (0x0001d75c) aid_fill_nsta_ParamLimits

0xcf24,	// (0x0001d892) indicator_nsta_pane_ParamLimits

0x4122,	// (0x00014a90) popup_clock_analogue_window

0x4122,	// (0x00014a90) popup_clock_digital_window

0xd7b4,	// (0x0001e122) grid_indicator_nsta_pane_ParamLimits

0x6894,	// (0x00017202) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x000203db) clock_nsta_pane_t

0xf22c,	// (0x0001fb9a) aid_size_max_handle

0xf236,	// (0x0001fba4) aid_size_min_handle

0x3aed,	// (0x0001445b) editor_scroll_pane

0x784b,	// (0x000181b9) ex_editor_pane

0x2f1d,	// (0x0001388b) scroll_pane_cp13

0x2662,	// (0x00012fd0) scroll_pane_cp14

0x3461,	// (0x00013dcf) scroll_pane_cp36

0xcb81,	// (0x0001d4ef) list_single_graphic_hl_pane_cp2_ParamLimits

0xcb81,	// (0x0001d4ef) list_single_graphic_hl_pane_cp2

0xd606,	// (0x0001df74) list_single_graphic_hl_pane_ParamLimits

0xd606,	// (0x0001df74) list_single_graphic_hl_pane

0x7853,	// (0x000181c1) aid_size_min_hl_cp1

0x785c,	// (0x000181ca) list_highlight_pane_cp34_ParamLimits

0x785c,	// (0x000181ca) list_highlight_pane_cp34

0x786d,	// (0x000181db) list_single_graphic_hl_pane_g1_ParamLimits

0x786d,	// (0x000181db) list_single_graphic_hl_pane_g1

0xdb0c,	// (0x0001e47a) list_single_graphic_hl_pane_g2_ParamLimits

0xdb0c,	// (0x0001e47a) list_single_graphic_hl_pane_g2

0xdb0c,	// (0x0001e47a) list_single_graphic_hl_pane_g3_ParamLimits

0xdb0c,	// (0x0001e47a) list_single_graphic_hl_pane_g3

0x39c5,	// (0x00014333) list_single_graphic_hl_pane_g4_ParamLimits

0x39c5,	// (0x00014333) list_single_graphic_hl_pane_g4

0xdb18,	// (0x0001e486) list_single_graphic_hl_pane_g5_ParamLimits

0xdb18,	// (0x0001e486) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x00020526) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x00020526) list_single_graphic_hl_pane_g

0xdb2c,	// (0x0001e49a) list_single_graphic_hl_pane_t1_ParamLimits

0xdb2c,	// (0x0001e49a) list_single_graphic_hl_pane_t1

0x789a,	// (0x00018208) aid_size_min_hl_cp2

0x78a3,	// (0x00018211) list_highlight_pane_cp34_cp2_ParamLimits

0x78a3,	// (0x00018211) list_highlight_pane_cp34_cp2

0x786d,	// (0x000181db) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x786d,	// (0x000181db) list_single_graphic_hl_pane_g1_cp2

0x78b0,	// (0x0001821e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x78b0,	// (0x0001821e) list_single_graphic_hl_pane_g2_cp2

0x78bc,	// (0x0001822a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x78bc,	// (0x0001822a) list_single_graphic_hl_pane_g3_cp2

0x78ca,	// (0x00018238) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x78ca,	// (0x00018238) list_single_graphic_hl_pane_g4_cp2

0x78d6,	// (0x00018244) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x78d6,	// (0x00018244) list_single_graphic_hl_pane_g5_cp2

0xb36d,	// (0x0001bcdb) control_pane_g4_ParamLimits

0xb36d,	// (0x0001bcdb) control_pane_g4

0x3e19,	// (0x00014787) bg_popup_sub_pane_cp10_ParamLimits

0x6ee9,	// (0x00017857) list_choice_list_pane_ParamLimits

0x6ef8,	// (0x00017866) scroll_pane_cp23

0x20bf,	// (0x00012a2d) bg_popup_preview_window_pane_cp02_ParamLimits

0x74e0,	// (0x00017e4e) list_preview_fixed_pane_ParamLimits

0x74f6,	// (0x00017e64) list_preview_fixed_pane_cp_ParamLimits

0x74f6,	// (0x00017e64) list_preview_fixed_pane_cp

0x7502,	// (0x00017e70) popup_preview_fixed_window_g1_ParamLimits

0x7502,	// (0x00017e70) popup_preview_fixed_window_g1

0x750e,	// (0x00017e7c) popup_preview_fixed_window_g2_ParamLimits

0x750e,	// (0x00017e7c) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x000204ae) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x000204ae) popup_preview_fixed_window_g

0xf1a0,	// (0x0001fb0e) aid_navi_side_left_pane_ParamLimits

0xf1b5,	// (0x0001fb23) aid_navi_side_right_pane_ParamLimits

0xf1cd,	// (0x0001fb3b) navi_icon_pane_stacon_ParamLimits

0xf1e1,	// (0x0001fb4f) navi_navi_pane_stacon_ParamLimits

0xf1cd,	// (0x0001fb3b) navi_text_pane_stacon_ParamLimits

0xeefe,	// (0x0001f86c) main_text_info_pane

0x7900,	// (0x0001826e) listscroll_text_info_pane

0x7908,	// (0x00018276) list_text_info_pane_ParamLimits

0x7908,	// (0x00018276) list_text_info_pane

0x7917,	// (0x00018285) scroll_pane_cp24_ParamLimits

0x7917,	// (0x00018285) scroll_pane_cp24

0xdb42,	// (0x0001e4b0) list_text_info_pane_t1_ParamLimits

0xdb42,	// (0x0001e4b0) list_text_info_pane_t1

0xb4b2,	// (0x0001be20) popup_fast_swap2_window_ParamLimits

0xb4b2,	// (0x0001be20) popup_fast_swap2_window

0x7966,	// (0x000182d4) aid_size_cell_fast2

0xe686,	// (0x0001eff4) bg_popup_window_pane_cp17

0x48ac,	// (0x0001521a) heading_pane_cp2

0x48b4,	// (0x00015222) listscroll_fast2_pane

0x7970,	// (0x000182de) grid_fast2_pane

0x797a,	// (0x000182e8) listscroll_fast2_pane_g1

0x7982,	// (0x000182f0) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x00020531) listscroll_fast2_pane_g

0x2f1d,	// (0x0001388b) scroll_pane_cp26

0x798c,	// (0x000182fa) cell_fast2_pane_ParamLimits

0x798c,	// (0x000182fa) cell_fast2_pane

0x79a1,	// (0x0001830f) cell_fast2_pane_g1

0x79aa,	// (0x00018318) cell_fast2_pane_g2

0x79b3,	// (0x00018321) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x00020536) cell_fast2_pane_g

0x241f,	// (0x00012d8d) grid_highlight_pane_cp9

0x0172,	// (0x00010ae0) main_eswt_pane_ParamLimits

0x0172,	// (0x00010ae0) main_eswt_pane

0x792c,	// (0x0001829a) list_single_text_info_pane

0x79bb,	// (0x00018329) eswt_ctrl_button_pane

0x79bb,	// (0x00018329) eswt_ctrl_canvas_pane

0x79c3,	// (0x00018331) eswt_ctrl_combo_pane

0x79bb,	// (0x00018329) eswt_ctrl_default_pane

0x79bb,	// (0x00018329) eswt_ctrl_label_pane

0x79cb,	// (0x00018339) eswt_ctrl_wait_pane

0x79d3,	// (0x00018341) eswt_shell_pane

0xe686,	// (0x0001eff4) listscroll_eswt_app_pane

0x79f3,	// (0x00018361) popup_eswt_tasktip_window_ParamLimits

0x79f3,	// (0x00018361) popup_eswt_tasktip_window

0x4483,	// (0x00014df1) bg_popup_window_pane_cp18

0x7a04,	// (0x00018372) eswt_control_pane_g1_ParamLimits

0x7a04,	// (0x00018372) eswt_control_pane_g1

0x7a11,	// (0x0001837f) eswt_control_pane_g2_ParamLimits

0x7a11,	// (0x0001837f) eswt_control_pane_g2

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_ParamLimits

0x7a1e,	// (0x0001838c) eswt_control_pane_g3

0x7a2b,	// (0x00018399) eswt_control_pane_g4_ParamLimits

0x7a2b,	// (0x00018399) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002053d) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002053d) eswt_control_pane_g

0x2c1a,	// (0x00013588) bg_button_pane_ParamLimits

0x2c1a,	// (0x00013588) bg_button_pane

0x2434,	// (0x00012da2) common_borders_pane_copy2_ParamLimits

0x2434,	// (0x00012da2) common_borders_pane_copy2

0x7a38,	// (0x000183a6) control_button_pane_g1_ParamLimits

0x7a38,	// (0x000183a6) control_button_pane_g1

0x7a44,	// (0x000183b2) control_button_pane_g2_ParamLimits

0x7a44,	// (0x000183b2) control_button_pane_g2

0x7a50,	// (0x000183be) control_button_pane_g3_ParamLimits

0x7a50,	// (0x000183be) control_button_pane_g3

0x0002,

0xfbd8,	// (0x00020546) control_button_pane_g_ParamLimits

0xfbd8,	// (0x00020546) control_button_pane_g

0x7a64,	// (0x000183d2) control_button_pane_t1

0x7a72,	// (0x000183e0) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002054d) control_button_pane_t

0x4361,	// (0x00014ccf) bg_button_pane_g1

0x4371,	// (0x00014cdf) bg_button_pane_g2

0x4369,	// (0x00014cd7) bg_button_pane_g3

0x4381,	// (0x00014cef) bg_button_pane_g4

0x4379,	// (0x00014ce7) bg_button_pane_g5

0x4389,	// (0x00014cf7) bg_button_pane_g6

0x4391,	// (0x00014cff) bg_button_pane_g7

0x43a1,	// (0x00014d0f) bg_button_pane_g8

0x4399,	// (0x00014d07) bg_button_pane_g9

0x0008,

0xf837,	// (0x000201a5) bg_button_pane_g

0x6ea4,	// (0x00017812) common_borders_pane_ParamLimits

0x6ea4,	// (0x00017812) common_borders_pane

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy1_ParamLimits

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy1

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy1_ParamLimits

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy1

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy1_ParamLimits

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy1

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy1_ParamLimits

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy1

0x6edf,	// (0x0001784d) bg_eswt_ctrl_canvas_pane_g1

0x6ea4,	// (0x00017812) common_borders_pane_cp2_ParamLimits

0x6ea4,	// (0x00017812) common_borders_pane_cp2

0x6ea4,	// (0x00017812) common_borders_pane_cp3_ParamLimits

0x6ea4,	// (0x00017812) common_borders_pane_cp3

0x7a80,	// (0x000183ee) separator_horizontal_pane

0x7a88,	// (0x000183f6) separator_vertical_pane

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy2_ParamLimits

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy2

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy2_ParamLimits

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy2

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy2_ParamLimits

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy2

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy2_ParamLimits

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy2

0xe686,	// (0x0001eff4) common_borders_pane_cp4

0x7a91,	// (0x000183ff) separator_horizontal_pane_g1

0x7a9a,	// (0x00018408) separator_horizontal_pane_g2

0x7aa3,	// (0x00018411) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x00020552) separator_horizontal_pane_g

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy3_ParamLimits

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy3

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy3_ParamLimits

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy3

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy3_ParamLimits

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy3

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy3_ParamLimits

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy3

0xe686,	// (0x0001eff4) common_borders_pane_cp5

0x7aac,	// (0x0001841a) separator_vertical_pane_g1

0x7ab5,	// (0x00018423) separator_vertical_pane_g2

0x7abe,	// (0x0001842c) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x00020559) separator_vertical_pane_g

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy4_ParamLimits

0x7a04,	// (0x00018372) eswt_control_pane_g1_copy4

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy4_ParamLimits

0x7a11,	// (0x0001837f) eswt_control_pane_g2_copy4

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy4_ParamLimits

0x7a1e,	// (0x0001838c) eswt_control_pane_g3_copy4

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy4_ParamLimits

0x7a2b,	// (0x00018399) eswt_control_pane_g4_copy4

0x7ac7,	// (0x00018435) eswt_ctrl_combo_button_pane

0x7acf,	// (0x0001843d) eswt_ctrl_input_pane

0x7ad7,	// (0x00018445) popup_choice_list_window_cp70

0x7adf,	// (0x0001844d) eswt_ctrl_input_pane_t1

0xe686,	// (0x0001eff4) input_focus_pane_cp70

0x6ea4,	// (0x00017812) bg_button_pane_cp70_ParamLimits

0x6ea4,	// (0x00017812) bg_button_pane_cp70

0x7aed,	// (0x0001845b) eswt_ctrl_combo_button_pane_g1

0x7af5,	// (0x00018463) wait_bar_pane_cp70

0x4483,	// (0x00014df1) bg_popup_window_pane_cp70_ParamLimits

0x4483,	// (0x00014df1) bg_popup_window_pane_cp70

0x7afd,	// (0x0001846b) popup_eswt_tasktip_window_t1

0x7b13,	// (0x00018481) wait_bar_pane_cp71_ParamLimits

0x7b13,	// (0x00018481) wait_bar_pane_cp71

0x7b1f,	// (0x0001848d) grid_eswt_app_pane

0x323b,	// (0x00013ba9) scroll_pane_cp70

0xdb5d,	// (0x0001e4cb) cell_eswt_app_pane_ParamLimits

0xdb5d,	// (0x0001e4cb) cell_eswt_app_pane

0xdb87,	// (0x0001e4f5) cell_eswt_app_pane_g1_ParamLimits

0xdb87,	// (0x0001e4f5) cell_eswt_app_pane_g1

0xdbb6,	// (0x0001e524) cell_eswt_app_pane_g2_ParamLimits

0xdbb6,	// (0x0001e524) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x00020560) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x00020560) cell_eswt_app_pane_g

0xdbdf,	// (0x0001e54d) cell_eswt_app_pane_t1_ParamLimits

0xdbdf,	// (0x0001e54d) cell_eswt_app_pane_t1

0x7be2,	// (0x00018550) grid_highlight_pane_cp70_ParamLimits

0x7be2,	// (0x00018550) grid_highlight_pane_cp70

0x39c5,	// (0x00014333) set_content_pane_g1

0xcdab,	// (0x0001d719) status_small_volume_pane

0x0fb7,	// (0x00011925) status_small_volume_pane_g1

0x0fbf,	// (0x0001192d) volume_small2_pane

0x0fc8,	// (0x00011936) volume_small2_pane_g1

0x0fd1,	// (0x0001193f) volume_small2_pane_g2

0x0fda,	// (0x00011948) volume_small2_pane_g3

0x0fe3,	// (0x00011951) volume_small2_pane_g4

0x0fec,	// (0x0001195a) volume_small2_pane_g5

0x0ff5,	// (0x00011963) volume_small2_pane_g6

0x0ffe,	// (0x0001196c) volume_small2_pane_g7

0x1007,	// (0x00011975) volume_small2_pane_g8

0x1010,	// (0x0001197e) volume_small2_pane_g9

0x1019,	// (0x00011987) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x00020565) volume_small2_pane_g

0x72a5,	// (0x00017c13) fep_vkb_top_text_pane_g1_ParamLimits

0xdab4,	// (0x0001e422) fep_vkb_top_text_pane_t1_ParamLimits

0x751a,	// (0x00017e88) popup_preview_fixed_window_g3_ParamLimits

0x751a,	// (0x00017e88) popup_preview_fixed_window_g3

0xbadb,	// (0x0001c449) popup_toolbar_trans_pane

0xd436,	// (0x0001dda4) aid_height_set_list_ParamLimits

0x5847,	// (0x000161b5) aid_size_parent_ParamLimits

0x3e19,	// (0x00014787) list_highlight_pane_cp2_ParamLimits

0x39c5,	// (0x00014333) set_content_pane_g1_ParamLimits

0xd618,	// (0x0001df86) list_single_image_pane_ParamLimits

0xd618,	// (0x0001df86) list_single_image_pane

0xdc11,	// (0x0001e57f) aid_size_cell_image_ParamLimits

0xdc11,	// (0x0001e57f) aid_size_cell_image

0xdc1e,	// (0x0001e58c) grid_single_image_pane_ParamLimits

0xdc1e,	// (0x0001e58c) grid_single_image_pane

0x5bb0,	// (0x0001651e) list_single_image_pane_g1_ParamLimits

0x5bb0,	// (0x0001651e) list_single_image_pane_g1

0x7c07,	// (0x00018575) list_single_image_pane_g2_ParamLimits

0x7c07,	// (0x00018575) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002057a) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002057a) list_single_image_pane_g

0x7c1b,	// (0x00018589) list_single_image_pane_t1_ParamLimits

0x7c1b,	// (0x00018589) list_single_image_pane_t1

0xdc2a,	// (0x0001e598) cell_image_list_pane_ParamLimits

0xdc2a,	// (0x0001e598) cell_image_list_pane

0xdc3e,	// (0x0001e5ac) cell_image_list_pane_g1

0xdc47,	// (0x0001e5b5) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002057f) cell_image_list_pane_g

0x7c57,	// (0x000185c5) aid_size_cell_tb_trans_pane

0x2c1a,	// (0x00013588) bg_tb_trans_pane

0x7c69,	// (0x000185d7) grid_tb_trans_pane

0x4361,	// (0x00014ccf) bg_tb_trans_pane_g1

0x4371,	// (0x00014cdf) bg_tb_trans_pane_g2

0x4369,	// (0x00014cd7) bg_tb_trans_pane_g3

0x4381,	// (0x00014cef) bg_tb_trans_pane_g4

0x4379,	// (0x00014ce7) bg_tb_trans_pane_g5

0x43a1,	// (0x00014d0f) bg_tb_trans_pane_g6

0x4399,	// (0x00014d07) bg_tb_trans_pane_g7

0x4389,	// (0x00014cf7) bg_tb_trans_pane_g8

0x4391,	// (0x00014cff) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x00020584) bg_tb_trans_pane_g

0x7c7d,	// (0x000185eb) cell_toolbar_trans_pane_ParamLimits

0x7c7d,	// (0x000185eb) cell_toolbar_trans_pane

0x6edf,	// (0x0001784d) cell_toolbar_trans_pane_g1

0xd86b,	// (0x0001e1d9) list_form2_midp_pane_t1

0xd879,	// (0x0001e1e7) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x00020421) list_form2_midp_pane_t

0x6a81,	// (0x000173ef) scroll_pane_cp51_ParamLimits

0x6c8c,	// (0x000175fa) form2_midp_wait_pane_g1

0x6c95,	// (0x00017603) form2_midp_wait_pane_g2

0x6c9e,	// (0x0001760c) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x00020436) form2_midp_wait_pane_g

0x1e1c,	// (0x0001278a) list_highlight_pane_cp21_ParamLimits

0x6cea,	// (0x00017658) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6cf9,	// (0x00017667) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5a4d,	// (0x000163bb) list_single_2graphic_im_pane_ParamLimits

0x5a4d,	// (0x000163bb) list_single_2graphic_im_pane

0x7ca3,	// (0x00018611) list_single_2graphic_im_pane_g1_ParamLimits

0x7ca3,	// (0x00018611) list_single_2graphic_im_pane_g1

0x7cb4,	// (0x00018622) list_single_2graphic_im_pane_g2_ParamLimits

0x7cb4,	// (0x00018622) list_single_2graphic_im_pane_g2

0x7cc0,	// (0x0001862e) list_single_2graphic_im_pane_g3_ParamLimits

0x7cc0,	// (0x0001862e) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x00020597) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x00020597) list_single_2graphic_im_pane_g

0x7ce0,	// (0x0001864e) list_single_2graphic_im_pane_t1_ParamLimits

0x7ce0,	// (0x0001864e) list_single_2graphic_im_pane_t1

0x7526,	// (0x00017e94) list_single_graphic_2heading_pane_fp_ParamLimits

0x7526,	// (0x00017e94) list_single_graphic_2heading_pane_fp

0x75ac,	// (0x00017f1a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x75ac,	// (0x00017f1a) list_single_graphic_2heading_pane_fp_g1

0x757d,	// (0x00017eeb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x757d,	// (0x00017eeb) list_single_graphic_2heading_pane_fp_g2

0x2c40,	// (0x000135ae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2c40,	// (0x000135ae) list_single_graphic_2heading_pane_fp_g3

0x2c4c,	// (0x000135ba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2c4c,	// (0x000135ba) list_single_graphic_2heading_pane_fp_g4

0x7589,	// (0x00017ef7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7589,	// (0x00017ef7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x000204be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x000204be) list_single_graphic_2heading_pane_fp_g

0x7d11,	// (0x0001867f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7d11,	// (0x0001867f) list_single_graphic_2heading_pane_fp_t1

0x75e4,	// (0x00017f52) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x75e4,	// (0x00017f52) list_single_graphic_2heading_pane_fp_t2

0x7d27,	// (0x00018695) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d27,	// (0x00018695) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x000205a0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x000205a0) list_single_graphic_2heading_pane_fp_t

0x6f6b,	// (0x000178d9) fep_hwr_write_pane_g5_ParamLimits

0x6f6b,	// (0x000178d9) fep_hwr_write_pane_g5

0x6f77,	// (0x000178e5) fep_hwr_write_pane_g6_ParamLimits

0x6f77,	// (0x000178e5) fep_hwr_write_pane_g6

0x79d3,	// (0x00018341) eswt_shell_pane_ParamLimits

0x4483,	// (0x00014df1) bg_popup_window_pane_cp18_ParamLimits

0x577d,	// (0x000160eb) heading_pane_cp70

0x7afd,	// (0x0001846b) popup_eswt_tasktip_window_t1_ParamLimits

0xce49,	// (0x0001d7b7) aid_touch_tab_arrow_left

0xce5f,	// (0x0001d7cd) aid_touch_tab_arrow_right

0xc27b,	// (0x0001cbe9) title_pane_g3_ParamLimits

0xc27b,	// (0x0001cbe9) title_pane_g3

0x2af9,	// (0x00013467) set_value_pane_g1

0xbadb,	// (0x0001c449) popup_toolbar_trans_pane_ParamLimits

0x7c57,	// (0x000185c5) aid_size_cell_tb_trans_pane_ParamLimits

0x2c1a,	// (0x00013588) bg_tb_trans_pane_ParamLimits

0x7c69,	// (0x000185d7) grid_tb_trans_pane_ParamLimits

0x20bf,	// (0x00012a2d) cont_note_pane_ParamLimits

0x20bf,	// (0x00012a2d) cont_note_pane

0x2434,	// (0x00012da2) cont_snote2_single_text_pane_ParamLimits

0x2434,	// (0x00012da2) cont_snote2_single_text_pane

0x2434,	// (0x00012da2) cont_snote2_single_graphic_pane_ParamLimits

0x2434,	// (0x00012da2) cont_snote2_single_graphic_pane

0x4adb,	// (0x00015449) cont_note_wait_pane_ParamLimits

0x4adb,	// (0x00015449) cont_note_wait_pane

0x4adb,	// (0x00015449) cont_note_image_pane_ParamLimits

0x4adb,	// (0x00015449) cont_note_image_pane

0x7d3d,	// (0x000186ab) popup_note2_window_g1_ParamLimits

0x7d3d,	// (0x000186ab) popup_note2_window_g1

0x7d6e,	// (0x000186dc) popup_note2_window_t1_ParamLimits

0x7d6e,	// (0x000186dc) popup_note2_window_t1

0x7db3,	// (0x00018721) popup_note2_window_t2_ParamLimits

0x7db3,	// (0x00018721) popup_note2_window_t2

0x7df8,	// (0x00018766) popup_note2_window_t3_ParamLimits

0x7df8,	// (0x00018766) popup_note2_window_t3

0x7e3d,	// (0x000187ab) popup_note2_window_t4_ParamLimits

0x7e3d,	// (0x000187ab) popup_note2_window_t4

0x2143,	// (0x00012ab1) popup_note2_window_t5_ParamLimits

0x2143,	// (0x00012ab1) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x000205ac) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x000205ac) popup_note2_window_t

0x7e6c,	// (0x000187da) popup_note2_image_window_g1_ParamLimits

0x7e6c,	// (0x000187da) popup_note2_image_window_g1

0x7e78,	// (0x000187e6) popup_note2_image_window_g2_ParamLimits

0x7e78,	// (0x000187e6) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x000205b7) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x000205b7) popup_note2_image_window_g

0x7e8a,	// (0x000187f8) popup_note2_image_window_t1_ParamLimits

0x7e8a,	// (0x000187f8) popup_note2_image_window_t1

0x7ea2,	// (0x00018810) popup_note2_image_window_t2_ParamLimits

0x7ea2,	// (0x00018810) popup_note2_image_window_t2

0x7eba,	// (0x00018828) popup_note2_image_window_t3_ParamLimits

0x7eba,	// (0x00018828) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x000205bc) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x000205bc) popup_note2_image_window_t

0x4ae9,	// (0x00015457) popup_note2_wait_window_g1_ParamLimits

0x4ae9,	// (0x00015457) popup_note2_wait_window_g1

0x7ed6,	// (0x00018844) popup_note2_wait_window_g2_ParamLimits

0x7ed6,	// (0x00018844) popup_note2_wait_window_g2

0x4b01,	// (0x0001546f) popup_note2_wait_window_g3_ParamLimits

0x4b01,	// (0x0001546f) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x000205c3) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x000205c3) popup_note2_wait_window_g

0x7ee2,	// (0x00018850) popup_note2_wait_window_t1_ParamLimits

0x7ee2,	// (0x00018850) popup_note2_wait_window_t1

0x7f00,	// (0x0001886e) popup_note2_wait_window_t2_ParamLimits

0x7f00,	// (0x0001886e) popup_note2_wait_window_t2

0x7f1e,	// (0x0001888c) popup_note2_wait_window_t3_ParamLimits

0x7f1e,	// (0x0001888c) popup_note2_wait_window_t3

0x7f30,	// (0x0001889e) popup_note2_wait_window_t4_ParamLimits

0x7f30,	// (0x0001889e) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x000205ca) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x000205ca) popup_note2_wait_window_t

0x7f42,	// (0x000188b0) wait_bar2_pane_ParamLimits

0x7f42,	// (0x000188b0) wait_bar2_pane

0x7f5a,	// (0x000188c8) popup_snote2_single_text_window_g1_ParamLimits

0x7f5a,	// (0x000188c8) popup_snote2_single_text_window_g1

0x7f82,	// (0x000188f0) popup_snote2_single_text_window_t1_ParamLimits

0x7f82,	// (0x000188f0) popup_snote2_single_text_window_t1

0x7fce,	// (0x0001893c) popup_snote2_single_text_window_t2_ParamLimits

0x7fce,	// (0x0001893c) popup_snote2_single_text_window_t2

0x801a,	// (0x00018988) popup_snote2_single_text_window_t3_ParamLimits

0x801a,	// (0x00018988) popup_snote2_single_text_window_t3

0x805b,	// (0x000189c9) popup_snote2_single_text_window_t4_ParamLimits

0x805b,	// (0x000189c9) popup_snote2_single_text_window_t4

0x8091,	// (0x000189ff) popup_snote2_single_text_window_t5_ParamLimits

0x8091,	// (0x000189ff) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x000205d3) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x000205d3) popup_snote2_single_text_window_t

0x80bc,	// (0x00018a2a) popup_snote2_single_graphic_window_g1_ParamLimits

0x80bc,	// (0x00018a2a) popup_snote2_single_graphic_window_g1

0x80e4,	// (0x00018a52) popup_snote2_single_graphic_window_g2_ParamLimits

0x80e4,	// (0x00018a52) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x000205de) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x000205de) popup_snote2_single_graphic_window_g

0x810c,	// (0x00018a7a) popup_snote2_single_graphic_window_t1_ParamLimits

0x810c,	// (0x00018a7a) popup_snote2_single_graphic_window_t1

0x8158,	// (0x00018ac6) popup_snote2_single_graphic_window_t2_ParamLimits

0x8158,	// (0x00018ac6) popup_snote2_single_graphic_window_t2

0x801a,	// (0x00018988) popup_snote2_single_graphic_window_t3_ParamLimits

0x801a,	// (0x00018988) popup_snote2_single_graphic_window_t3

0x805b,	// (0x000189c9) popup_snote2_single_graphic_window_t4_ParamLimits

0x805b,	// (0x000189c9) popup_snote2_single_graphic_window_t4

0x8091,	// (0x000189ff) popup_snote2_single_graphic_window_t5_ParamLimits

0x8091,	// (0x000189ff) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x000205e3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x000205e3) popup_snote2_single_graphic_window_t

0x6942,	// (0x000172b0) clock_nsta_pane_cp2_t1

0x6942,	// (0x000172b0) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x000203f7) clock_nsta_pane_cp2_t

0x2c34,	// (0x000135a2) form_field_data_wide_pane_g1_ParamLimits

0x2c40,	// (0x000135ae) form_field_data_wide_pane_g2_ParamLimits

0x2c40,	// (0x000135ae) form_field_data_wide_pane_g2

0x2c4c,	// (0x000135ba) form_field_data_wide_pane_g3_ParamLimits

0x2c4c,	// (0x000135ba) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001ffbf) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001ffbf) form_field_data_wide_pane_g

0xd79e,	// (0x0001e10c) grid_touch_3_pane_ParamLimits

0xd79e,	// (0x0001e10c) grid_touch_3_pane

0xdc50,	// (0x0001e5be) cell_touch_3_pane_ParamLimits

0xdc50,	// (0x0001e5be) cell_touch_3_pane

0x6edf,	// (0x0001784d) cell_touch_3_pane_g1

0x6edf,	// (0x0001784d) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x0002047c) cell_touch_3_pane_g

0x219b,	// (0x00012b09) cont_query_data_pane

0x21a3,	// (0x00012b11) cont_query_data_pane_cp1

0x81d2,	// (0x00018b40) button_value_adjust_pane_cp7

0x81da,	// (0x00018b48) query_popup_pane_cp3

0x353b,	// (0x00013ea9) bg_popup_sub_pane_cp22_ParamLimits

0xf2e2,	// (0x0001fc50) navi_navi_volume_pane_cp2

0xf2fd,	// (0x0001fc6b) popup_side_volume_key_window_g2

0xf30c,	// (0x0001fc7a) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00020055) popup_side_volume_key_window_g

0xf329,	// (0x0001fc97) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0002005c) popup_side_volume_key_window_t

0x3884,	// (0x000141f2) popup_side_volume_key_window_ParamLimits

0xc681,	// (0x0001cfef) list_double_graphic_pane_g4_ParamLimits

0xc681,	// (0x0001cfef) list_double_graphic_pane_g4

0xd5f3,	// (0x0001df61) list_single_2heading_msg_pane_ParamLimits

0xd5f3,	// (0x0001df61) list_single_2heading_msg_pane

0xdc98,	// (0x0001e606) list_single_2heading_msg_pane_g1_ParamLimits

0xdc98,	// (0x0001e606) list_single_2heading_msg_pane_g1

0xdca4,	// (0x0001e612) list_single_2heading_msg_pane_g2_ParamLimits

0xdca4,	// (0x0001e612) list_single_2heading_msg_pane_g2

0xdcb7,	// (0x0001e625) list_single_2heading_msg_pane_g3_ParamLimits

0xdcb7,	// (0x0001e625) list_single_2heading_msg_pane_g3

0x8221,	// (0x00018b8f) list_single_2heading_msg_pane_g4_ParamLimits

0x8221,	// (0x00018b8f) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x000205ee) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x000205ee) list_single_2heading_msg_pane_g

0x8239,	// (0x00018ba7) list_single_2heading_msg_pane_t1_ParamLimits

0x8239,	// (0x00018ba7) list_single_2heading_msg_pane_t1

0xdcc3,	// (0x0001e631) list_single_2heading_msg_pane_t2_ParamLimits

0xdcc3,	// (0x0001e631) list_single_2heading_msg_pane_t2

0xdd2e,	// (0x0001e69c) list_single_2heading_msg_pane_t3_ParamLimits

0xdd2e,	// (0x0001e69c) list_single_2heading_msg_pane_t3

0x82c9,	// (0x00018c37) list_single_2heading_msg_pane_t4_ParamLimits

0x82c9,	// (0x00018c37) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x000205f7) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x000205f7) list_single_2heading_msg_pane_t

0x1d70,	// (0x000126de) title_pane_g4_ParamLimits

0x1d70,	// (0x000126de) title_pane_g4

0xf0f1,	// (0x0001fa5f) title_pane_stacon_g3_ParamLimits

0xf0f1,	// (0x0001fa5f) title_pane_stacon_g3

0x7cd4,	// (0x00018642) list_single_2graphic_im_pane_g4_ParamLimits

0x7cd4,	// (0x00018642) list_single_2graphic_im_pane_g4

0x553a,	// (0x00015ea8) popup_side_volume_key_window_cp

0x5e4f,	// (0x000167bd) main_idle_act2_pane_t1

0x07bb,	// (0x00011129) toolbar_button_pane_g10

0xc5da,	// (0x0001cf48) popup_toolbar_window_cp1

0x6933,	// (0x000172a1) clock_nsta_pane_cp_t1

0x6933,	// (0x000172a1) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x000203f2) clock_nsta_pane_cp_t

0xf2e2,	// (0x0001fc50) navi_navi_volume_pane_cp2_ParamLimits

0xf2f1,	// (0x0001fc5f) popup_side_volume_key_window_g1_ParamLimits

0xf2fd,	// (0x0001fc6b) popup_side_volume_key_window_g2_ParamLimits

0xf30c,	// (0x0001fc7a) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00020055) popup_side_volume_key_window_g_ParamLimits

0x0c23,	// (0x00011591) fep_hwr_aid_pane

0x0cca,	// (0x00011638) bg_fep_hwr_top_pane_g4_ParamLimits

0x6f3b,	// (0x000178a9) fep_hwr_top_pane_g1_ParamLimits

0x6f4d,	// (0x000178bb) fep_hwr_top_pane_g2_ParamLimits

0x0cea,	// (0x00011658) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x00020447) fep_hwr_top_pane_g_ParamLimits

0x0cff,	// (0x0001166d) fep_hwr_top_text_pane_ParamLimits

0x52fd,	// (0x00015c6b) aid_touch_tab_arrow_arrow_2

0x5306,	// (0x00015c74) aid_touch_tab_arrow_left_2

0x0c37,	// (0x000115a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0c6e,	// (0x000115dc) fep_hwr_prediction_pane

0x70ad,	// (0x00017a1b) fep_vkb_prediction_pane

0xda94,	// (0x0001e402) fep_vkb_side_pane_g3_ParamLimits

0xda94,	// (0x0001e402) fep_vkb_side_pane_g3

0x0e7a,	// (0x000117e8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0ee6,	// (0x00011854) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0ef3,	// (0x00011861) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x000204f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1022,	// (0x00011990) fep_hwr_prediction_pane_g1

0x102c,	// (0x0001199a) fep_hwr_prediction_pane_g2

0x1034,	// (0x000119a2) fep_hwr_prediction_pane_g3

0x103c,	// (0x000119aa) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x00020600) fep_hwr_prediction_pane_g

0x82ee,	// (0x00018c5c) fep_vkb_prediction_pane_g1

0x82f8,	// (0x00018c66) fep_vkb_prediction_pane_g2

0x8300,	// (0x00018c6e) fep_vkb_prediction_pane_g3

0x8308,	// (0x00018c76) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x00020609) fep_vkb_prediction_pane_g

0x0aa3,	// (0x00011411) slider_set_pane_g3

0x0ab7,	// (0x00011425) slider_set_pane_g4

0x0acf,	// (0x0001143d) slider_set_pane_g5

0x0aa3,	// (0x00011411) slider_set_pane_g6

0x0ae5,	// (0x00011453) slider_set_pane_g7

0x59ac,	// (0x0001631a) slider_form_pane_g3

0x59b5,	// (0x00016323) slider_form_pane_g4

0x59bd,	// (0x0001632b) slider_form_pane_g5

0x59ac,	// (0x0001631a) slider_form_pane_g6

0xd5a9,	// (0x0001df17) slider_form_pane_g7

0x614c,	// (0x00016aba) slider_set_pane_vc_g3

0x6155,	// (0x00016ac3) slider_set_pane_vc_g4

0x615e,	// (0x00016acc) slider_set_pane_vc_g5

0x614c,	// (0x00016aba) slider_set_pane_vc_g6

0x6167,	// (0x00016ad5) slider_set_pane_vc_g7

0x65f1,	// (0x00016f5f) slider_form_pane_vc_g1

0x65fa,	// (0x00016f68) slider_form_pane_vc_g2

0x6603,	// (0x00016f71) slider_form_pane_vc_g3

0x65f1,	// (0x00016f5f) slider_form_pane_vc_g4

0x660c,	// (0x00016f7a) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x000203c4) slider_form_pane_vc_g

0xeefe,	// (0x0001f86c) main_idle_act3_pane

0x8310,	// (0x00018c7e) ai3_links_pane

0xdd9c,	// (0x0001e70a) popup_ai3_data_window_ParamLimits

0xdd9c,	// (0x0001e70a) popup_ai3_data_window

0xe686,	// (0x0001eff4) grid_ai3_links_pane

0xddb6,	// (0x0001e724) cell_ai3_links_pane_ParamLimits

0xddb6,	// (0x0001e724) cell_ai3_links_pane

0x834b,	// (0x00018cb9) bg_popup_sub_pane_cp11

0x8358,	// (0x00018cc6) cell_ai3_links_pane_g1

0xe686,	// (0x0001eff4) bg_popup_sub_pane_cp12

0x837d,	// (0x00018ceb) heading_ai3_data_pane

0x8385,	// (0x00018cf3) list_ai3_gene_pane

0x8391,	// (0x00018cff) popup_ai3_data_window_g1

0x8399,	// (0x00018d07) heading_ai3_data_pane_g1

0x83a1,	// (0x00018d0f) heading_ai3_data_pane_t1

0x83af,	// (0x00018d1d) list_double_ai3_gene_pane_ParamLimits

0x83af,	// (0x00018d1d) list_double_ai3_gene_pane

0x83bc,	// (0x00018d2a) list_single_ai3_gene_pane_ParamLimits

0x83bc,	// (0x00018d2a) list_single_ai3_gene_pane

0x6ea4,	// (0x00017812) list_highlight_pane_cp7_ParamLimits

0x6ea4,	// (0x00017812) list_highlight_pane_cp7

0x83c9,	// (0x00018d37) list_single_a13_gene_pane_t1_ParamLimits

0x83c9,	// (0x00018d37) list_single_a13_gene_pane_t1

0x83e0,	// (0x00018d4e) list_single_ai3_gene_pane_g1

0x83e9,	// (0x00018d57) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x00020612) list_single_ai3_gene_pane_g

0x83f1,	// (0x00018d5f) list_double_ai3_gene_pane_g1_ParamLimits

0x83f1,	// (0x00018d5f) list_double_ai3_gene_pane_g1

0x83fd,	// (0x00018d6b) list_double_ai3_gene_pane_t1_ParamLimits

0x83fd,	// (0x00018d6b) list_double_ai3_gene_pane_t1

0x8419,	// (0x00018d87) list_double_ai3_gene_pane_t2_ParamLimits

0x8419,	// (0x00018d87) list_double_ai3_gene_pane_t2

0x842f,	// (0x00018d9d) list_double_ai3_gene_pane_t3_ParamLimits

0x842f,	// (0x00018d9d) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x00020617) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x00020617) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x81eb,	// (0x00018b59) aid_size_min_col_2

0xdc82,	// (0x0001e5f0) aid_size_min_msg_ParamLimits

0xdc82,	// (0x0001e5f0) aid_size_min_msg

0xdaa8,	// (0x0001e416) fep_vkb_top_text_pane_g2_ParamLimits

0xdaa8,	// (0x0001e416) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x00020477) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x00020477) fep_vkb_top_text_pane_g

0xeefe,	// (0x0001f86c) main_hc_apps_shell_pane

0x844c,	// (0x00018dba) grid_hc_apps_pane_ParamLimits

0x844c,	// (0x00018dba) grid_hc_apps_pane

0x845e,	// (0x00018dcc) list_hc_apps_pane

0x8466,	// (0x00018dd4) scroll_pane_cp37_ParamLimits

0x8466,	// (0x00018dd4) scroll_pane_cp37

0xddd0,	// (0x0001e73e) cell_hc_apps_pane_ParamLimits

0xddd0,	// (0x0001e73e) cell_hc_apps_pane

0xde8e,	// (0x0001e7fc) cell_hc_apps_pane_g1_ParamLimits

0xde8e,	// (0x0001e7fc) cell_hc_apps_pane_g1

0x8550,	// (0x00018ebe) cell_hc_apps_pane_g2_ParamLimits

0x8550,	// (0x00018ebe) cell_hc_apps_pane_g2

0x856c,	// (0x00018eda) cell_hc_apps_pane_g3_ParamLimits

0x856c,	// (0x00018eda) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002061e) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002061e) cell_hc_apps_pane_g

0xdeba,	// (0x0001e828) cell_hc_apps_pane_t1_ParamLimits

0xdeba,	// (0x0001e828) cell_hc_apps_pane_t1

0x20bf,	// (0x00012a2d) grid_highlight_pane_cp10_ParamLimits

0x20bf,	// (0x00012a2d) grid_highlight_pane_cp10

0xdef8,	// (0x0001e866) list_single_hc_apps_pane_ParamLimits

0xdef8,	// (0x0001e866) list_single_hc_apps_pane

0xdf25,	// (0x0001e893) list_single_hc_apps_pane_g1

0xdf3e,	// (0x0001e8ac) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x00020625) list_single_hc_apps_pane_g

0xdf57,	// (0x0001e8c5) list_single_hc_apps_pane_g2_copy1

0x8678,	// (0x00018fe6) list_single_hc_apps_pane_t1

0x1e1c,	// (0x0001278a) bg_set_opt_pane_cp_ParamLimits

0xf019,	// (0x0001f987) setting_slider_pane_t1_ParamLimits

0xf032,	// (0x0001f9a0) setting_slider_pane_t2_ParamLimits

0xf04c,	// (0x0001f9ba) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001fea7) setting_slider_pane_t_ParamLimits

0xf064,	// (0x0001f9d2) slider_set_pane_ParamLimits

0x003e,	// (0x000109ac) control_pane_g5_ParamLimits

0x003e,	// (0x000109ac) control_pane_g5

0x57fb,	// (0x00016169) slider_set_pane_g1_ParamLimits

0x0a97,	// (0x00011405) slider_set_pane_g2_ParamLimits

0x0aa3,	// (0x00011411) slider_set_pane_g3_ParamLimits

0x0ab7,	// (0x00011425) slider_set_pane_g4_ParamLimits

0x0acf,	// (0x0001143d) slider_set_pane_g5_ParamLimits

0x0aa3,	// (0x00011411) slider_set_pane_g6_ParamLimits

0x0ae5,	// (0x00011453) slider_set_pane_g7_ParamLimits

0xf935,	// (0x000202a3) slider_set_pane_g_ParamLimits

0x3970,	// (0x000142de) navi_icon_text_pane_ParamLimits

0xce12,	// (0x0001d780) aid_fill_nsta_2_ParamLimits

0xce49,	// (0x0001d7b7) aid_touch_tab_arrow_left_ParamLimits

0xce5f,	// (0x0001d7cd) aid_touch_tab_arrow_right_ParamLimits

0xcefa,	// (0x0001d868) clock_nsta_pane_ParamLimits

0x52df,	// (0x00015c4d) navi_icon_pane_g1_ParamLimits

0x52eb,	// (0x00015c59) navi_text_pane_t1_ParamLimits

0x6a3f,	// (0x000173ad) navi_icon_text_pane_g1_ParamLimits

0x6a4b,	// (0x000173b9) navi_icon_text_pane_t1_ParamLimits

0xdf25,	// (0x0001e893) list_single_hc_apps_pane_g1_ParamLimits

0xdf3e,	// (0x0001e8ac) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x00020625) list_single_hc_apps_pane_g_ParamLimits

0xdf57,	// (0x0001e8c5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8678,	// (0x00018fe6) list_single_hc_apps_pane_t1_ParamLimits

0xb24b,	// (0x0001bbb9) popup_toolbar2_fixed_window_ParamLimits

0xb24b,	// (0x0001bbb9) popup_toolbar2_fixed_window

0xbad1,	// (0x0001c43f) popup_toolbar2_float_window

0xe686,	// (0x0001eff4) bg_popup_sub_pane_cp27

0x86a6,	// (0x00019014) grid_toolbar2_float_pane

0xe686,	// (0x0001eff4) bg_popup_sub_pane_cp26

0x86a6,	// (0x00019014) grid_toolbar2_fixed_pane

0xdf73,	// (0x0001e8e1) cell_toolbar2_fixed_pane_ParamLimits

0xdf73,	// (0x0001e8e1) cell_toolbar2_fixed_pane

0xdf8d,	// (0x0001e8fb) cell_toolbar2_fixed_pane_g1

0x86c7,	// (0x00019035) toolbar2_fixed_button_pane

0x4361,	// (0x00014ccf) toolbar2_fixed_button_pane_g1

0x4371,	// (0x00014cdf) toolbar2_fixed_button_pane_g2

0x4369,	// (0x00014cd7) toolbar2_fixed_button_pane_g3

0x4381,	// (0x00014cef) toolbar2_fixed_button_pane_g4

0x4379,	// (0x00014ce7) toolbar2_fixed_button_pane_g5

0x4389,	// (0x00014cf7) toolbar2_fixed_button_pane_g6

0x4391,	// (0x00014cff) toolbar2_fixed_button_pane_g7

0x43a1,	// (0x00014d0f) toolbar2_fixed_button_pane_g8

0x4399,	// (0x00014d07) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x000201a5) toolbar2_fixed_button_pane_g

0x86cf,	// (0x0001903d) cell_toolbar2_float_pane_ParamLimits

0x86cf,	// (0x0001903d) cell_toolbar2_float_pane

0x86e0,	// (0x0001904e) cell_toolbar2_float_pane_g1

0x86c7,	// (0x00019035) toolbar2_fixed_button_pane_cp

0xd982,	// (0x0001e2f0) fep_vkb_accented_list_pane_ParamLimits

0xd982,	// (0x0001e2f0) fep_vkb_accented_list_pane

0x0e5a,	// (0x000117c8) bg_popup_fep_shadow_pane_g9

0x3aed,	// (0x0001445b) bg_popup_fep_shadow_pane_cp3

0x2f04,	// (0x00013872) list_accented_list_pane

0x86e9,	// (0x00019057) list_single_accented_list_pane_ParamLimits

0x86e9,	// (0x00019057) list_single_accented_list_pane

0x3aed,	// (0x0001445b) list_highlight_pane_cp10

0x86fa,	// (0x00019068) list_single_accented_list_pane_t1

0xb9fb,	// (0x0001c369) popup_slider_window_ParamLimits

0xb9fb,	// (0x0001c369) popup_slider_window

0x81e2,	// (0x00018b50) aid_indentation_list_msg

0xe084,	// (0x0001e9f2) bg_popup_window_pane_cp19

0x8826,	// (0x00019194) popup_slider_window_g1

0x8842,	// (0x000191b0) popup_slider_window_g2

0x885e,	// (0x000191cc) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002062a) popup_slider_window_g

0x88c4,	// (0x00019232) popup_slider_window_t1

0x8938,	// (0x000192a6) small_volume_slider_vertical_pane

0x6edf,	// (0x0001784d) small_volume_slider_vertical_pane_g1

0x6edf,	// (0x0001784d) small_volume_slider_vertical_pane_g2

0x8954,	// (0x000192c2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002063c) small_volume_slider_vertical_pane_g

0xb1b9,	// (0x0001bb27) area_side_right_pane_ParamLimits

0xb1b9,	// (0x0001bb27) area_side_right_pane

0xbc07,	// (0x0001c575) aid_size_side_button_ParamLimits

0xbc07,	// (0x0001c575) aid_size_side_button

0xbc20,	// (0x0001c58e) grid_sctrl_middle_pane_ParamLimits

0xbc20,	// (0x0001c58e) grid_sctrl_middle_pane

0x1077,	// (0x000119e5) sctrl_sk_bottom_pane

0x1088,	// (0x000119f6) sctrl_sk_top_pane

0x109a,	// (0x00011a08) aid_touch_sctrl_top

0x10a7,	// (0x00011a15) bg_sctrl_sk_pane_ParamLimits

0x10a7,	// (0x00011a15) bg_sctrl_sk_pane

0x10b5,	// (0x00011a23) sctrl_sk_top_pane_g1

0x10c2,	// (0x00011a30) sctrl_sk_top_pane_t1

0x109a,	// (0x00011a08) aid_touch_sctrl_bottom

0x10a7,	// (0x00011a15) bg_sctrl_sk_pane_cp_ParamLimits

0x10a7,	// (0x00011a15) bg_sctrl_sk_pane_cp

0x10dd,	// (0x00011a4b) sctrl_sk_bottom_pane_g1

0x10c2,	// (0x00011a30) sctrl_sk_bottom_pane_t1

0xbc3a,	// (0x0001c5a8) cell_sctrl_middle_pane_ParamLimits

0xbc3a,	// (0x0001c5a8) cell_sctrl_middle_pane

0xbc4b,	// (0x0001c5b9) aid_touch_sctrl_middle_ParamLimits

0xbc4b,	// (0x0001c5b9) aid_touch_sctrl_middle

0xbc58,	// (0x0001c5c6) bg_sctrl_middle_pane_ParamLimits

0xbc58,	// (0x0001c5c6) bg_sctrl_middle_pane

0x174d,	// (0x000120bb) cell_sctrl_middle_pane_g1_ParamLimits

0x174d,	// (0x000120bb) cell_sctrl_middle_pane_g1

0xbc66,	// (0x0001c5d4) cell_sctrl_middle_pane_g2_ParamLimits

0xbc66,	// (0x0001c5d4) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x00020648) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x00020648) cell_sctrl_middle_pane_g

0x4361,	// (0x00014ccf) bg_sctrl_middle_pane_g1

0x4369,	// (0x00014cd7) bg_sctrl_middle_pane_g2

0x4371,	// (0x00014cdf) bg_sctrl_middle_pane_g3

0x4379,	// (0x00014ce7) bg_sctrl_middle_pane_g4

0x4381,	// (0x00014cef) bg_sctrl_middle_pane_g5

0x4389,	// (0x00014cf7) bg_sctrl_middle_pane_g6

0x4391,	// (0x00014cff) bg_sctrl_middle_pane_g7

0x4399,	// (0x00014d07) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002064d) bg_sctrl_middle_pane_g

0x43a1,	// (0x00014d0f) bg_sctrl_middle_pane_g8_copy1

0x4361,	// (0x00014ccf) bg_sctrl_sk_pane_g1

0x4371,	// (0x00014cdf) bg_sctrl_sk_pane_g2

0x4369,	// (0x00014cd7) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x000201a5) bg_sctrl_sk_pane_g

0x25f2,	// (0x00012f60) aid_size_touch_scroll_bar

0x4381,	// (0x00014cef) bg_sctrl_sk_pane_g4

0x4379,	// (0x00014ce7) bg_sctrl_sk_pane_g5

0x4389,	// (0x00014cf7) bg_sctrl_sk_pane_g6

0x4391,	// (0x00014cff) bg_sctrl_sk_pane_g7

0x43a1,	// (0x00014d0f) bg_sctrl_sk_pane_g8

0x4399,	// (0x00014d07) bg_sctrl_sk_pane_g9

0x020a,	// (0x00010b78) popup_fep_china_hwr2_fs_candidate_window

0xb50f,	// (0x0001be7d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb50f,	// (0x0001be7d) popup_fep_china_hwr2_fs_control_window

0x0e7a,	// (0x000117e8) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x00020643) sctrl_sk_top_pane_g

0xe13c,	// (0x0001eaaa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe13c,	// (0x0001eaaa) aid_fep_china_hwr2_fs_cell

0xe150,	// (0x0001eabe) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe150,	// (0x0001eabe) bg_popup_fep_shadow_pane_cp4

0xe167,	// (0x0001ead5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe167,	// (0x0001ead5) bg_popup_fep_shadow_pane_cp5

0xe179,	// (0x0001eae7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe179,	// (0x0001eae7) popup_fep_china_hwr2_fs_control_bar_grid

0xe18d,	// (0x0001eafb) popup_fep_china_hwr2_fs_control_funtion_grid

0x89b0,	// (0x0001931e) aid_fep_china_hwr2_fs_candi_cell

0xe686,	// (0x0001eff4) bg_popup_fep_shadow_pane_cp6

0x89ba,	// (0x00019328) popup_fep_china_hwr2_fs_candidate_grid

0xe195,	// (0x0001eb03) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe195,	// (0x0001eb03) cell_fep_china_hwr2_fs_funtion_grid

0x6edf,	// (0x0001784d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x89dc,	// (0x0001934a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x89dc,	// (0x0001934a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x89ea,	// (0x00019358) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x89ea,	// (0x00019358) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002065e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002065e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1ad,	// (0x0001eb1b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1ad,	// (0x0001eb1b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1c2,	// (0x0001eb30) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1c2,	// (0x0001eb30) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x00020663) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x00020663) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a31,	// (0x0001939f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8a39,	// (0x000193a7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8a41,	// (0x000193af) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x00020668) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8a49,	// (0x000193b7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8a49,	// (0x000193b7) cell_fep_china_hwr2_fs_candidate_grid

0x8a62,	// (0x000193d0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8a6a,	// (0x000193d8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6edf,	// (0x0001784d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6edf,	// (0x0001784d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x0002047c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8a72,	// (0x000193e0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3f41,	// (0x000148af) clock_nsta_pane_cp_24_ParamLimits

0x3f41,	// (0x000148af) clock_nsta_pane_cp_24

0x3fbf,	// (0x0001492d) indicator_nsta_pane_cp_24_ParamLimits

0x3fbf,	// (0x0001492d) indicator_nsta_pane_cp_24

0x515b,	// (0x00015ac9) heading_pane_g1

0x0001,

0xf89c,	// (0x0002020a) heading_pane_g

0x5c98,	// (0x00016606) grid_sct_catagory_button_pane

0x5cc8,	// (0x00016636) scroll_pane_cp5_ParamLimits

0x6a8d,	// (0x000173fb) button_value_adjust_pane_cp5_ParamLimits

0x6a8d,	// (0x000173fb) button_value_adjust_pane_cp5

0x6b89,	// (0x000174f7) form2_midp_time_pane_ParamLimits

0x8a80,	// (0x000193ee) cell_sct_catagory_button_pane_ParamLimits

0x8a80,	// (0x000193ee) cell_sct_catagory_button_pane

0x6ea4,	// (0x00017812) bg_button_pane_cp01_ParamLimits

0x6ea4,	// (0x00017812) bg_button_pane_cp01

0x6edf,	// (0x0001784d) cell_sct_catagory_button_pane_g1

0xba74,	// (0x0001c3e2) popup_tb_extension_window

0xe1de,	// (0x0001eb4c) aid_size_cell_ext_ParamLimits

0xe1de,	// (0x0001eb4c) aid_size_cell_ext

0x2434,	// (0x00012da2) bg_tb_trans_pane_cp1_ParamLimits

0x2434,	// (0x00012da2) bg_tb_trans_pane_cp1

0xe204,	// (0x0001eb72) grid_tb_ext_pane_ParamLimits

0xe204,	// (0x0001eb72) grid_tb_ext_pane

0xe23f,	// (0x0001ebad) cell_tb_ext_pane_ParamLimits

0xe23f,	// (0x0001ebad) cell_tb_ext_pane

0xe267,	// (0x0001ebd5) cell_tb_ext_pane_g1_ParamLimits

0xe267,	// (0x0001ebd5) cell_tb_ext_pane_g1

0x8b14,	// (0x00019482) cell_tb_ext_pane_t1

0x20bf,	// (0x00012a2d) list_highlight_pane_cp11_ParamLimits

0x20bf,	// (0x00012a2d) list_highlight_pane_cp11

0xb260,	// (0x0001bbce) popup_uni_indicator_window_ParamLimits

0xb260,	// (0x0001bbce) popup_uni_indicator_window

0x2c1a,	// (0x00013588) bg_popup_sub_pane_cp14

0x8b2f,	// (0x0001949d) list_uniindi_pane

0x8b3b,	// (0x000194a9) uniindi_top_pane

0x20bf,	// (0x00012a2d) bg_uniindi_top_pane

0x8b5a,	// (0x000194c8) uniindi_top_pane_g1

0x8b70,	// (0x000194de) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002066f) uniindi_top_pane_g

0x8b9a,	// (0x00019508) uniindi_top_pane_t1

0x8bc4,	// (0x00019532) list_single_uniindi_pane_ParamLimits

0x8bc4,	// (0x00019532) list_single_uniindi_pane

0x6edf,	// (0x0001784d) bg_uniindi_top_pane_g1

0x8bd7,	// (0x00019545) list_single_uniindi_pane_g1

0x8bea,	// (0x00019558) list_single_uniindi_pane_t1

0xeefe,	// (0x0001f86c) control_bg_pane

0x8c0f,	// (0x0001957d) bg_sctrl_sk_pane_cp1

0x8c18,	// (0x00019586) bg_sctrl_sk_pane_cp2

0x8c21,	// (0x0001958f) control_bg_pane_g1

0x8c2a,	// (0x00019598) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x00020678) control_bg_pane_g

0x68d7,	// (0x00017245) cell_indicator_nsta_pane_g1_ParamLimits

0xd7db,	// (0x0001e149) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x000203e0) cell_indicator_nsta_pane_g_ParamLimits

0x6c11,	// (0x0001757f) form2_midp_time_pane_t1_ParamLimits

0x0c15,	// (0x00011583) main_idle_act4_pane_ParamLimits

0x0c15,	// (0x00011583) main_idle_act4_pane

0xba74,	// (0x0001c3e2) popup_tb_extension_window_ParamLimits

0xe226,	// (0x0001eb94) tb_ext_find_pane_ParamLimits

0xe226,	// (0x0001eb94) tb_ext_find_pane

0x8c33,	// (0x000195a1) ai_gene_pane_1_cp1

0x3c34,	// (0x000145a2) ai_gene_pane_2_cp1

0x8c3b,	// (0x000195a9) list_single_idle_plugin_calendar_pane

0x8c44,	// (0x000195b2) list_single_idle_plugin_notification_pane

0x8c4d,	// (0x000195bb) list_single_idle_plugin_player_pane

0xe284,	// (0x0001ebf2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe284,	// (0x0001ebf2) list_single_idle_plugin_shortcut_pane

0xe2ac,	// (0x0001ec1a) main_idle_act4_pane_t1

0xe2c2,	// (0x0001ec30) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002067d) main_idle_act4_pane_t

0xe2d8,	// (0x0001ec46) middle_sk_idle_act4_pane_ParamLimits

0xe2d8,	// (0x0001ec46) middle_sk_idle_act4_pane

0xe2f4,	// (0x0001ec62) popup_clock_digital_analogue_window_cp2

0xe31c,	// (0x0001ec8a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe31c,	// (0x0001ec8a) shortcut_wheel_idle_act4_pane

0x6edf,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g1

0x6edf,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g2

0x6edf,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g3

0x6edf,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g4

0x6edf,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g5

0x8ce0,	// (0x0001964e) shortcut_wheel_idle_act4_pane_g6

0x8ce8,	// (0x00019656) shortcut_wheel_idle_act4_pane_g7

0x8cf0,	// (0x0001965e) shortcut_wheel_idle_act4_pane_g8

0x8cf8,	// (0x00019666) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x00020682) shortcut_wheel_idle_act4_pane_g

0xd4f5,	// (0x0001de63) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4f5,	// (0x0001de63) middle_sk_idle_act4_pane_g1

0xe399,	// (0x0001ed07) middle_sk_idle_act4_pane_g2_ParamLimits

0xe399,	// (0x0001ed07) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x000206a5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x000206a5) middle_sk_idle_act4_pane_g

0xe3b1,	// (0x0001ed1f) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3b1,	// (0x0001ed1f) middle_sk_idle_act4_pane_t1

0xe3e0,	// (0x0001ed4e) grid_ai_shortcut_pane_ParamLimits

0xe3e0,	// (0x0001ed4e) grid_ai_shortcut_pane

0xe3fd,	// (0x0001ed6b) list_highlight_pane_cp16_ParamLimits

0xe3fd,	// (0x0001ed6b) list_highlight_pane_cp16

0xe40a,	// (0x0001ed78) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe40a,	// (0x0001ed78) list_single_idle_plugin_shortcut_pane_g1

0xe416,	// (0x0001ed84) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe416,	// (0x0001ed84) list_single_idle_plugin_shortcut_pane_g2

0xe432,	// (0x0001eda0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe432,	// (0x0001eda0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x000206aa) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x000206aa) list_single_idle_plugin_shortcut_pane_g

0xe447,	// (0x0001edb5) cell_ai_shortcut_pane_ParamLimits

0xe447,	// (0x0001edb5) cell_ai_shortcut_pane

0xe45d,	// (0x0001edcb) cell_ai_shortcut_pane_g1_ParamLimits

0xe45d,	// (0x0001edcb) cell_ai_shortcut_pane_g1

0x8c33,	// (0x000195a1) ai_gene_pane_1_cp2

0x8e49,	// (0x000197b7) ai_gene_pane_2_cp2

0x8e51,	// (0x000197bf) list_highlight_pane_cp15

0x8e5a,	// (0x000197c8) list_single_idle_plugin_calendar_pane_g1

0x8e51,	// (0x000197bf) list_highlight_pane_cp17

0x8e62,	// (0x000197d0) list_single_idle_plugin_calendar_pane_g1_copy1

0x8e6a,	// (0x000197d8) list_single_idle_plugin_player_pane_g1

0x5ef1,	// (0x0001685f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x000206b1) list_single_idle_plugin_player_pane_g

0x8e72,	// (0x000197e0) list_single_idle_plugin_player_pane_t1

0x8e80,	// (0x000197ee) list_single_idle_plugin_player_pane_t2

0x8e8e,	// (0x000197fc) list_single_idle_plugin_player_pane_t3

0x8e9c,	// (0x0001980a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x000206b6) list_single_idle_plugin_player_pane_t

0x8eaa,	// (0x00019818) wait_bar_pane_cp15

0x8eb2,	// (0x00019820) grid_ai_notification_pane

0x5ef1,	// (0x0001685f) list_single_idle_plugin_notification_pane_g1

0xe47f,	// (0x0001eded) cell_ai_notification_pane_ParamLimits

0xe47f,	// (0x0001eded) cell_ai_notification_pane

0x8ec8,	// (0x00019836) cell_ai_notification_pane_g1

0x8ed0,	// (0x0001983e) cell_ai_notification_pane_t1

0xe48c,	// (0x0001edfa) tb_ext_find_button_pane

0xe494,	// (0x0001ee02) tb_ext_find_pane_g1

0xe49c,	// (0x0001ee0a) tb_ext_find_pane_t1

0x3432,	// (0x00013da0) tb_ext_find_button_pane_g1

0x8efc,	// (0x0001986a) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x000206bf) tb_ext_find_button_pane_g

0xe2ac,	// (0x0001ec1a) main_idle_act4_pane_t1_ParamLimits

0xe2c2,	// (0x0001ec30) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002067d) main_idle_act4_pane_t_ParamLimits

0xe2f4,	// (0x0001ec62) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe30c,	// (0x0001ec7a) sat_plugin_idle_act4_pane_ParamLimits

0xe30c,	// (0x0001ec7a) sat_plugin_idle_act4_pane

0xe4aa,	// (0x0001ee18) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4aa,	// (0x0001ee18) sat_plugin_idle_act4_pane_t1

0xe4c2,	// (0x0001ee30) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe4c2,	// (0x0001ee30) sat_plugin_idle_act4_pane_t2

0xe4da,	// (0x0001ee48) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe4da,	// (0x0001ee48) sat_plugin_idle_act4_pane_t3

0xe4f2,	// (0x0001ee60) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe4f2,	// (0x0001ee60) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x000206c4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x000206c4) sat_plugin_idle_act4_pane_t

0xefc3,	// (0x0001f931) popup_battery_window_ParamLimits

0xefc3,	// (0x0001f931) popup_battery_window

0x20bf,	// (0x00012a2d) bg_popup_sub_pane_cp25_ParamLimits

0x20bf,	// (0x00012a2d) bg_popup_sub_pane_cp25

0x8f51,	// (0x000198bf) popup_battery_window_g1_ParamLimits

0x8f51,	// (0x000198bf) popup_battery_window_g1

0x8f5d,	// (0x000198cb) popup_battery_window_t1_ParamLimits

0x8f5d,	// (0x000198cb) popup_battery_window_t1

0x8f6f,	// (0x000198dd) popup_battery_window_t2_ParamLimits

0x8f6f,	// (0x000198dd) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x000206cd) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x000206cd) popup_battery_window_t

0xcc7d,	// (0x0001d5eb) midp_canvas_pane_ParamLimits

0xccda,	// (0x0001d648) midp_keypad_pane_ParamLimits

0xccda,	// (0x0001d648) midp_keypad_pane

0x3e19,	// (0x00014787) main_midp_pane_ParamLimits

0x6951,	// (0x000172bf) signal_pane_g2_cp_ParamLimits

0xe50a,	// (0x0001ee78) aid_size_cell_midp_keypad_ParamLimits

0xe50a,	// (0x0001ee78) aid_size_cell_midp_keypad

0xe528,	// (0x0001ee96) midp_keyp_game_grid_pane_ParamLimits

0xe528,	// (0x0001ee96) midp_keyp_game_grid_pane

0xe54f,	// (0x0001eebd) midp_keyp_rocker_pane_ParamLimits

0xe54f,	// (0x0001eebd) midp_keyp_rocker_pane

0xe5a0,	// (0x0001ef0e) midp_keyp_sk_left_pane_ParamLimits

0xe5a0,	// (0x0001ef0e) midp_keyp_sk_left_pane

0xe5f4,	// (0x0001ef62) midp_keyp_sk_right_pane_ParamLimits

0xe5f4,	// (0x0001ef62) midp_keyp_sk_right_pane

0xe686,	// (0x0001eff4) bg_button_pane_cp03

0xe648,	// (0x0001efb6) midp_keyp_sk_left_pane_g1

0xe686,	// (0x0001eff4) bg_button_pane_cp04

0xe648,	// (0x0001efb6) midp_keyp_sk_right_pane_g1

0x6edf,	// (0x0001784d) midp_keyp_rocker_pane_g1

0xe651,	// (0x0001efbf) keyp_game_cell_pane_ParamLimits

0xe651,	// (0x0001efbf) keyp_game_cell_pane

0xe686,	// (0x0001eff4) bg_button_pane_cp02

0xe675,	// (0x0001efe3) keyp_game_cell_pane_g1

0xb1fb,	// (0x0001bb69) popup_fep_vkb2_window_ParamLimits

0xb1fb,	// (0x0001bb69) popup_fep_vkb2_window

0xbc72,	// (0x0001c5e0) aid_size_cell_vkb2_ParamLimits

0xbc72,	// (0x0001c5e0) aid_size_cell_vkb2

0xbc9e,	// (0x0001c60c) popup_fep_vkb2_window_g1_ParamLimits

0xbc9e,	// (0x0001c60c) popup_fep_vkb2_window_g1

0xbcee,	// (0x0001c65c) vkb2_area_bottom_pane_ParamLimits

0xbcee,	// (0x0001c65c) vkb2_area_bottom_pane

0xbd42,	// (0x0001c6b0) vkb2_area_keypad_pane_ParamLimits

0xbd42,	// (0x0001c6b0) vkb2_area_keypad_pane

0xbd8a,	// (0x0001c6f8) vkb2_area_top_pane_ParamLimits

0xbd8a,	// (0x0001c6f8) vkb2_area_top_pane

0xbe16,	// (0x0001c784) vkb2_top_entry_pane_ParamLimits

0xbe16,	// (0x0001c784) vkb2_top_entry_pane

0xbe43,	// (0x0001c7b1) vkb2_top_grid_left_pane_ParamLimits

0xbe43,	// (0x0001c7b1) vkb2_top_grid_left_pane

0xbe64,	// (0x0001c7d2) vkb2_top_grid_right_pane_ParamLimits

0xbe64,	// (0x0001c7d2) vkb2_top_grid_right_pane

0x1348,	// (0x00011cb6) vkb2_cell_keypad_pane_ParamLimits

0x1348,	// (0x00011cb6) vkb2_cell_keypad_pane

0xbeac,	// (0x0001c81a) vkb2_area_bottom_grid_pane_ParamLimits

0xbeac,	// (0x0001c81a) vkb2_area_bottom_grid_pane

0xbed6,	// (0x0001c844) vkb2_area_bottom_pane_g1_ParamLimits

0xbed6,	// (0x0001c844) vkb2_area_bottom_pane_g1

0xbefc,	// (0x0001c86a) vkb2_area_bottom_pane_g2_ParamLimits

0xbefc,	// (0x0001c86a) vkb2_area_bottom_pane_g2

0xbf2d,	// (0x0001c89b) vkb2_area_bottom_pane_g3_ParamLimits

0xbf2d,	// (0x0001c89b) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x000206d2) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x000206d2) vkb2_area_bottom_pane_g

0x14f2,	// (0x00011e60) vkb2_top_cell_left_pane_ParamLimits

0x14f2,	// (0x00011e60) vkb2_top_cell_left_pane

0xe6a7,	// (0x0001f015) vkb2_top_entry_pane_g1_ParamLimits

0xe6a7,	// (0x0001f015) vkb2_top_entry_pane_g1

0xe6b5,	// (0x0001f023) vkb2_top_entry_pane_t1_ParamLimits

0xe6b5,	// (0x0001f023) vkb2_top_entry_pane_t1

0x9120,	// (0x00019a8e) vkb2_top_entry_pane_t2_ParamLimits

0x9120,	// (0x00019a8e) vkb2_top_entry_pane_t2

0x9152,	// (0x00019ac0) vkb2_top_entry_pane_t3_ParamLimits

0x9152,	// (0x00019ac0) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x000206d9) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x000206d9) vkb2_top_entry_pane_t

0xbf97,	// (0x0001c905) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf97,	// (0x0001c905) vkb2_top_grid_right_pane_g1

0x1555,	// (0x00011ec3) vkb2_top_grid_right_pane_g2_ParamLimits

0x1555,	// (0x00011ec3) vkb2_top_grid_right_pane_g2

0x156d,	// (0x00011edb) vkb2_top_grid_right_pane_g3_ParamLimits

0x156d,	// (0x00011edb) vkb2_top_grid_right_pane_g3

0xbfad,	// (0x0001c91b) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfad,	// (0x0001c91b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x000206e0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x000206e0) vkb2_top_grid_right_pane_g

0x159b,	// (0x00011f09) vkb2_top_cell_left_pane_g1

0x15b2,	// (0x00011f20) vkb2_cell_keypad_pane_g1_ParamLimits

0x15b2,	// (0x00011f20) vkb2_cell_keypad_pane_g1

0x9176,	// (0x00019ae4) vkb2_cell_keypad_pane_t1_ParamLimits

0x9176,	// (0x00019ae4) vkb2_cell_keypad_pane_t1

0x15c0,	// (0x00011f2e) vkb2_cell_bottom_grid_pane_ParamLimits

0x15c0,	// (0x00011f2e) vkb2_cell_bottom_grid_pane

0x15f9,	// (0x00011f67) vkb2_cell_bottom_grid_pane_g1

0xe33d,	// (0x0001ecab) aid_call2_pane_cp02

0xe345,	// (0x0001ecb3) aid_call_pane_cp02

0xe34d,	// (0x0001ecbb) clock_digital_number_pane_cp10

0xe355,	// (0x0001ecc3) clock_digital_number_pane_cp11

0xe35d,	// (0x0001eccb) clock_digital_number_pane_cp12

0xe365,	// (0x0001ecd3) clock_digital_number_pane_cp13

0xe36d,	// (0x0001ecdb) clock_digital_separator_pane_cp10

0x3432,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g1

0x3432,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g2

0xe375,	// (0x0001ece3) popup_clock_digital_analogue_window_cp2_g3

0x3432,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g4

0xe375,	// (0x0001ece3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x00020695) popup_clock_digital_analogue_window_cp2_g

0xe37d,	// (0x0001eceb) popup_clock_digital_analogue_window_cp2_t1

0xe38b,	// (0x0001ecf9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x000206a0) popup_clock_digital_analogue_window_cp2_t

0x6edf,	// (0x0001784d) clock_digital_number_pane_cp10_g1

0x6edf,	// (0x0001784d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0002047c) clock_digital_number_pane_cp10_g

0x6edf,	// (0x0001784d) clock_digital_separator_pane_cp10_g1

0x6edf,	// (0x0001784d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0002047c) clock_digital_separator_pane_cp10_g

0x8b7c,	// (0x000194ea) uniindi_top_pane_g3

0x8b8d,	// (0x000194fb) uniindi_top_pane_g4

0x13d3,	// (0x00011d41) vkb2_row_keypad_pane_ParamLimits

0x13d3,	// (0x00011d41) vkb2_row_keypad_pane

0x1619,	// (0x00011f87) vkb2_cell_t_keypad_pane_ParamLimits

0x1619,	// (0x00011f87) vkb2_cell_t_keypad_pane

0x1629,	// (0x00011f97) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1629,	// (0x00011f97) vkb2_cell_t_keypad_pane_cp08

0x163c,	// (0x00011faa) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x163c,	// (0x00011faa) vkb2_cell_t_keypad_pane_cp09

0x1650,	// (0x00011fbe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1650,	// (0x00011fbe) vkb2_cell_t_keypad_pane_cp01

0x1661,	// (0x00011fcf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1661,	// (0x00011fcf) vkb2_cell_t_keypad_pane_cp02

0x1672,	// (0x00011fe0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1672,	// (0x00011fe0) vkb2_cell_t_keypad_pane_cp03

0x1683,	// (0x00011ff1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1683,	// (0x00011ff1) vkb2_cell_t_keypad_pane_cp04

0x1694,	// (0x00012002) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1694,	// (0x00012002) vkb2_cell_t_keypad_pane_cp05

0x16a5,	// (0x00012013) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x16a5,	// (0x00012013) vkb2_cell_t_keypad_pane_cp06

0x16b6,	// (0x00012024) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x16b6,	// (0x00012024) vkb2_cell_t_keypad_pane_cp07

0x16c7,	// (0x00012035) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x16c7,	// (0x00012035) vkb2_cell_t_keypad_pane_cp10

0x0e7a,	// (0x000117e8) vkb2_cell_t_keypad_pane_g1

0x918d,	// (0x00019afb) vkb2_cell_t_keypad_pane_t1

0xeefe,	// (0x0001f86c) popup_grid_graphic2_window

0xe6ee,	// (0x0001f05c) aid_size_cell_graphic2_ParamLimits

0xe6ee,	// (0x0001f05c) aid_size_cell_graphic2

0xe72c,	// (0x0001f09a) bg_popup_window_pane_cp21_ParamLimits

0xe72c,	// (0x0001f09a) bg_popup_window_pane_cp21

0xe73a,	// (0x0001f0a8) graphic2_pages_pane_ParamLimits

0xe73a,	// (0x0001f0a8) graphic2_pages_pane

0xe790,	// (0x0001f0fe) grid_graphic2_control_pane_ParamLimits

0xe790,	// (0x0001f0fe) grid_graphic2_control_pane

0xe7d8,	// (0x0001f146) grid_graphic2_pane_ParamLimits

0xe7d8,	// (0x0001f146) grid_graphic2_pane

0xe85f,	// (0x0001f1cd) cell_graphic2_pane

0xeefe,	// (0x0001f86c) main_comp_mode_pane

0x8385,	// (0x00018cf3) list_ai3_gene_pane_ParamLimits

0xe084,	// (0x0001e9f2) bg_popup_window_pane_cp19_ParamLimits

0x87ca,	// (0x00019138) bg_touch_area_indi_pane_ParamLimits

0x87ca,	// (0x00019138) bg_touch_area_indi_pane

0x87e0,	// (0x0001914e) bg_touch_area_indi_pane_cp01_ParamLimits

0x87e0,	// (0x0001914e) bg_touch_area_indi_pane_cp01

0x87f6,	// (0x00019164) bg_touch_area_indi_pane_cp02_ParamLimits

0x87f6,	// (0x00019164) bg_touch_area_indi_pane_cp02

0x880c,	// (0x0001917a) bg_touch_area_indi_pane_cp03_ParamLimits

0x880c,	// (0x0001917a) bg_touch_area_indi_pane_cp03

0x8826,	// (0x00019194) popup_slider_window_g1_ParamLimits

0x8842,	// (0x000191b0) popup_slider_window_g2_ParamLimits

0x885e,	// (0x000191cc) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002062a) popup_slider_window_g_ParamLimits

0x88c4,	// (0x00019232) popup_slider_window_t1_ParamLimits

0x8938,	// (0x000192a6) small_volume_slider_vertical_pane_ParamLimits

0xe85f,	// (0x0001f1cd) cell_graphic2_pane_ParamLimits

0xe8ba,	// (0x0001f228) bg_button_pane_cp10_ParamLimits

0xe8ba,	// (0x0001f228) bg_button_pane_cp10

0xe8cd,	// (0x0001f23b) bg_button_pane_cp11_ParamLimits

0xe8cd,	// (0x0001f23b) bg_button_pane_cp11

0xe8e0,	// (0x0001f24e) graphic2_pages_pane_g1_ParamLimits

0xe8e0,	// (0x0001f24e) graphic2_pages_pane_g1

0xe8fb,	// (0x0001f269) graphic2_pages_pane_g2_ParamLimits

0xe8fb,	// (0x0001f269) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x000206ee) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x000206ee) graphic2_pages_pane_g

0xe913,	// (0x0001f281) graphic2_pages_pane_t1_ParamLimits

0xe913,	// (0x0001f281) graphic2_pages_pane_t1

0xe92b,	// (0x0001f299) cell_graphic2_control_pane_ParamLimits

0xe92b,	// (0x0001f299) cell_graphic2_control_pane

0xe95d,	// (0x0001f2cb) cell_graphic2_pane_g1_ParamLimits

0xe95d,	// (0x0001f2cb) cell_graphic2_pane_g1

0xd503,	// (0x0001de71) cell_graphic2_pane_g2_ParamLimits

0xd503,	// (0x0001de71) cell_graphic2_pane_g2

0xe69a,	// (0x0001f008) cell_graphic2_pane_g3_ParamLimits

0xe69a,	// (0x0001f008) cell_graphic2_pane_g3

0xd510,	// (0x0001de7e) cell_graphic2_pane_g4_ParamLimits

0xd510,	// (0x0001de7e) cell_graphic2_pane_g4

0xe96a,	// (0x0001f2d8) cell_graphic2_pane_g5_ParamLimits

0xe96a,	// (0x0001f2d8) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x000206f3) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x000206f3) cell_graphic2_pane_g

0xe987,	// (0x0001f2f5) cell_graphic2_pane_t1_ParamLimits

0xe987,	// (0x0001f2f5) cell_graphic2_pane_t1

0x514f,	// (0x00015abd) grid_highlight_pane_cp11_ParamLimits

0x514f,	// (0x00015abd) grid_highlight_pane_cp11

0x20bf,	// (0x00012a2d) bg_button_pane_cp05

0xe9d1,	// (0x0001f33f) cell_graphic2_control_pane_g1

0x6edf,	// (0x0001784d) bg_touch_area_indi_pane_g1

0x9466,	// (0x00019dd4) aid_cmod_rocker_key_size

0x9470,	// (0x00019dde) aid_cmode_itu_key_size

0x947a,	// (0x00019de8) main_cmode_video_pane

0x9484,	// (0x00019df2) main_comp_mode_itu_pane

0x9490,	// (0x00019dfe) main_comp_mode_rocker_pane

0x949c,	// (0x00019e0a) cell_cmode_rocker_pane_ParamLimits

0x949c,	// (0x00019e0a) cell_cmode_rocker_pane

0x94ae,	// (0x00019e1c) cell_cmode_itu_pane_ParamLimits

0x94ae,	// (0x00019e1c) cell_cmode_itu_pane

0x2c1a,	// (0x00013588) bg_button_pane_cp06_ParamLimits

0x2c1a,	// (0x00013588) bg_button_pane_cp06

0x715d,	// (0x00017acb) cell_cmode_rocker_pane_g1_ParamLimits

0x715d,	// (0x00017acb) cell_cmode_rocker_pane_g1

0x89dc,	// (0x0001934a) cell_cmode_rocker_pane_g2_ParamLimits

0x89dc,	// (0x0001934a) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x00020703) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x00020703) cell_cmode_rocker_pane_g

0xe686,	// (0x0001eff4) bg_button_pane_cp07

0x94c3,	// (0x00019e31) cell_cmode_itu_pane_g1

0x94cc,	// (0x00019e3a) cell_cmode_itu_pane_t1

0x94da,	// (0x00019e48) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x00020708) cell_cmode_itu_pane_t

0x8bff,	// (0x0001956d) aid_touch_ctrl_left

0x8c07,	// (0x00019575) aid_touch_ctrl_right

0xe686,	// (0x0001eff4) compa_mode_pane

0xe9f5,	// (0x0001f363) aid_cmod_rocker_key_size_cp

0xe9ff,	// (0x0001f36d) aid_cmode_itu_key_size_cp

0x94fc,	// (0x00019e6a) compa_mode_pane_g1

0x9504,	// (0x00019e72) compa_mode_pane_g2

0x950c,	// (0x00019e7a) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002070d) compa_mode_pane_g

0xea09,	// (0x0001f377) main_comp_mode_itu_pane_cp

0xea11,	// (0x0001f37f) main_comp_mode_rocker_pane_cp

0xea19,	// (0x0001f387) cell_cmode_itu_pane_cp_ParamLimits

0xea19,	// (0x0001f387) cell_cmode_itu_pane_cp

0xea2e,	// (0x0001f39c) cell_cmode_rocker_pane_cp_ParamLimits

0xea2e,	// (0x0001f39c) cell_cmode_rocker_pane_cp

0x2c1a,	// (0x00013588) bg_button_pane_cp06_cp_ParamLimits

0x2c1a,	// (0x00013588) bg_button_pane_cp06_cp

0x715d,	// (0x00017acb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x715d,	// (0x00017acb) cell_cmode_rocker_pane_g1_cp

0x6edf,	// (0x0001784d) cell_cmode_rocker_pane_g2_cp

0xe686,	// (0x0001eff4) bg_button_pane_cp07_cp

0xea40,	// (0x0001f3ae) cell_cmode_itu_pane_g1_cp

0xea49,	// (0x0001f3b7) cell_cmode_itu_pane_t1_cp

0xea49,	// (0x0001f3b7) cell_cmode_itu_pane_t2_cp

0xd59f,	// (0x0001df0d) settings_code_pane_cp2

0x1e1c,	// (0x0001278a) bg_popup_window_pane_cp3_ParamLimits

0x22bf,	// (0x00012c2d) heading_pane_cp3_ParamLimits

0x22ce,	// (0x00012c3c) listscroll_popup_graphic_pane_ParamLimits

0x0c23,	// (0x00011591) fep_hwr_aid_pane_ParamLimits

0x109a,	// (0x00011a08) aid_touch_sctrl_top_ParamLimits

0x10b5,	// (0x00011a23) sctrl_sk_top_pane_g1_ParamLimits

0x0e7a,	// (0x000117e8) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x00020643) sctrl_sk_top_pane_g_ParamLimits

0x10c2,	// (0x00011a30) sctrl_sk_top_pane_t1_ParamLimits

0x109a,	// (0x00011a08) aid_touch_sctrl_bottom_ParamLimits

0x10c2,	// (0x00011a30) sctrl_sk_bottom_pane_t1_ParamLimits

0x8b48,	// (0x000194b6) aid_area_touch_clock

0xbdd6,	// (0x0001c744) aid_vkb2_area_top_pane_cell_ParamLimits

0xbdd6,	// (0x0001c744) aid_vkb2_area_top_pane_cell

0xbe85,	// (0x0001c7f3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe85,	// (0x0001c7f3) aid_vkb2_area_bottom_pane_cell

0x90d8,	// (0x00019a46) popup_char_count_window

0x9559,	// (0x00019ec7) popup_char_count_window_g1

0x9562,	// (0x00019ed0) popup_char_count_window_g2

0x956b,	// (0x00019ed9) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x00020714) popup_char_count_window_g

0x9574,	// (0x00019ee2) popup_char_count_window_t1

0x1169,	// (0x00011ad7) popup_fep_char_preview_window_ParamLimits

0x1169,	// (0x00011ad7) popup_fep_char_preview_window

0xbdf6,	// (0x0001c764) vkb2_top_candi_pane_ParamLimits

0xbdf6,	// (0x0001c764) vkb2_top_candi_pane

0xea57,	// (0x0001f3c5) cell_vkb2_top_candi_pane_ParamLimits

0xea57,	// (0x0001f3c5) cell_vkb2_top_candi_pane

0x16dc,	// (0x0001204a) bg_popup_fep_char_preview_window_ParamLimits

0x16dc,	// (0x0001204a) bg_popup_fep_char_preview_window

0x16ea,	// (0x00012058) popup_fep_char_preview_window_t1_ParamLimits

0x16ea,	// (0x00012058) popup_fep_char_preview_window_t1

0x95cc,	// (0x00019f3a) bg_popup_fep_char_preview_window_g1

0x95d4,	// (0x00019f42) bg_popup_fep_char_preview_window_g2

0x95dc,	// (0x00019f4a) bg_popup_fep_char_preview_window_g3

0x95e4,	// (0x00019f52) bg_popup_fep_char_preview_window_g4

0x95ec,	// (0x00019f5a) bg_popup_fep_char_preview_window_g5

0x95f4,	// (0x00019f62) bg_popup_fep_char_preview_window_g6

0x95fc,	// (0x00019f6a) bg_popup_fep_char_preview_window_g7

0x9604,	// (0x00019f72) bg_popup_fep_char_preview_window_g8

0x960c,	// (0x00019f7a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002071b) bg_popup_fep_char_preview_window_g

0x0e7a,	// (0x000117e8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0e7a,	// (0x000117e8) cell_vkb2_top_candi_pane_g1

0x0e88,	// (0x000117f6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0e88,	// (0x000117f6) cell_vkb2_top_candi_pane_g2

0x8d4e,	// (0x000196bc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8d4e,	// (0x000196bc) cell_vkb2_top_candi_pane_g3

0x172c,	// (0x0001209a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x172c,	// (0x0001209a) cell_vkb2_top_candi_pane_g4

0x755c,	// (0x00017eca) cell_vkb2_top_candi_pane_g5_ParamLimits

0x755c,	// (0x00017eca) cell_vkb2_top_candi_pane_g5

0x174d,	// (0x000120bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x174d,	// (0x000120bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x00020730) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x00020730) cell_vkb2_top_candi_pane_g

0x175b,	// (0x000120c9) cell_vkb2_top_candi_pane_t1

0x0a83,	// (0x000113f1) aid_size_touch_slider_mark_ParamLimits

0x0a83,	// (0x000113f1) aid_size_touch_slider_mark

0xe776,	// (0x0001f0e4) grid_graphic2_catg_pane_ParamLimits

0xe776,	// (0x0001f0e4) grid_graphic2_catg_pane

0xe832,	// (0x0001f1a0) popup_grid_graphic2_window_t1_ParamLimits

0xe832,	// (0x0001f1a0) popup_grid_graphic2_window_t1

0xe848,	// (0x0001f1b6) popup_grid_graphic2_window_t2_ParamLimits

0xe848,	// (0x0001f1b6) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x000206e9) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x000206e9) popup_grid_graphic2_window_t

0x20bf,	// (0x00012a2d) bg_button_pane_cp05_ParamLimits

0xe9d1,	// (0x0001f33f) cell_graphic2_control_pane_g1_ParamLimits

0xeab7,	// (0x0001f425) cell_graphic2_catg_pane_ParamLimits

0xeab7,	// (0x0001f425) cell_graphic2_catg_pane

0xe686,	// (0x0001eff4) bg_button_pane_cp12

0xeac9,	// (0x0001f437) cell_graphic2_catg_pane_g1

0x8b14,	// (0x00019482) cell_tb_ext_pane_t1_ParamLimits

0x1512,	// (0x00011e80) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1512,	// (0x00011e80) vkb2_top_cell_right_narrow_pane

0x152a,	// (0x00011e98) vkb2_top_cell_right_wide_pane_ParamLimits

0x152a,	// (0x00011e98) vkb2_top_cell_right_wide_pane

0x0c15,	// (0x00011583) bg_vkb2_func_pane_ParamLimits

0x0c15,	// (0x00011583) bg_vkb2_func_pane

0x159b,	// (0x00011f09) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp03

0x15f9,	// (0x00011f67) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4369,	// (0x00014cd7) bg_vkb2_func_pane_g1

0x4371,	// (0x00014cdf) bg_vkb2_func_pane_g2

0x4381,	// (0x00014cef) bg_vkb2_func_pane_g3

0x4379,	// (0x00014ce7) bg_vkb2_func_pane_g4

0x4389,	// (0x00014cf7) bg_vkb2_func_pane_g5

0x4391,	// (0x00014cff) bg_vkb2_func_pane_g6

0x4399,	// (0x00014d07) bg_vkb2_func_pane_g7

0x43a1,	// (0x00014d0f) bg_vkb2_func_pane_g8

0x4361,	// (0x00014ccf) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002073d) bg_vkb2_func_pane_g

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp01

0x159b,	// (0x00011f09) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x159b,	// (0x00011f09) vkb2_top_cell_right_wide_pane_g1

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c15,	// (0x00011583) bg_vkb2_fuc_pane_cp02

0x177a,	// (0x000120e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x177a,	// (0x000120e8) vkb2_top_cell_right_narrow_pane_g1

0xdfc6,	// (0x0001e934) aid_touch_area_decrease_ParamLimits

0xdfc6,	// (0x0001e934) aid_touch_area_decrease

0xe000,	// (0x0001e96e) aid_touch_area_increase_ParamLimits

0xe000,	// (0x0001e96e) aid_touch_area_increase

0xe028,	// (0x0001e996) aid_touch_area_mute_ParamLimits

0xe028,	// (0x0001e996) aid_touch_area_mute

0xe050,	// (0x0001e9be) aid_touch_area_slider_ParamLimits

0xe050,	// (0x0001e9be) aid_touch_area_slider

0xe090,	// (0x0001e9fe) popup_slider_window_g4_ParamLimits

0xe090,	// (0x0001e9fe) popup_slider_window_g4

0xe0b8,	// (0x0001ea26) popup_slider_window_g5_ParamLimits

0xe0b8,	// (0x0001ea26) popup_slider_window_g5

0xe0ec,	// (0x0001ea5a) popup_slider_window_g6_ParamLimits

0xe0ec,	// (0x0001ea5a) popup_slider_window_g6

0x88f2,	// (0x00019260) popup_slider_window_t2_ParamLimits

0x88f2,	// (0x00019260) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x00020637) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x00020637) popup_slider_window_t

0xe108,	// (0x0001ea76) slider_pane_ParamLimits

0xe108,	// (0x0001ea76) slider_pane

0x962f,	// (0x00019f9d) slider_pane_g1_ParamLimits

0x962f,	// (0x00019f9d) slider_pane_g1

0x9643,	// (0x00019fb1) slider_pane_g2_ParamLimits

0x9643,	// (0x00019fb1) slider_pane_g2

0x9659,	// (0x00019fc7) slider_pane_g3_ParamLimits

0x9659,	// (0x00019fc7) slider_pane_g3

0x0003,

0xfde2,	// (0x00020750) slider_pane_g_ParamLimits

0xfde2,	// (0x00020750) slider_pane_g

0xbabc,	// (0x0001c42a) popup_tb_float_extension_window_ParamLimits

0xbabc,	// (0x0001c42a) popup_tb_float_extension_window

0x9685,	// (0x00019ff3) aid_size_cell_tb_float_ext

0xe686,	// (0x0001eff4) bg_popup_sub_window_cp28

0x9691,	// (0x00019fff) grid_tb_float_ext_pane

0x969b,	// (0x0001a009) cell_tb_float_ext_pane_ParamLimits

0x969b,	// (0x0001a009) cell_tb_float_ext_pane

0x96b5,	// (0x0001a023) cell_tb_float_ext_pane_g1

0x96be,	// (0x0001a02c) grid_highlight_pane_cp12

0xbbe5,	// (0x0001c553) cell_last_hwr_side_pane_ParamLimits

0xbbe5,	// (0x0001c553) cell_last_hwr_side_pane

0x6edf,	// (0x0001784d) cell_last_hwr_side_pane_g1

0x96c7,	// (0x0001a035) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x00020759) cell_last_hwr_side_pane_g

0xbf62,	// (0x0001c8d0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf62,	// (0x0001c8d0) vkb2_area_bottom_space_btn_pane

0x0e7a,	// (0x000117e8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x918d,	// (0x00019afb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x175b,	// (0x000120c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x179a,	// (0x00012108) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x179a,	// (0x00012108) vkb2_area_bottom_space_btn_pane_g1

0x17d4,	// (0x00012142) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x17d4,	// (0x00012142) vkb2_area_bottom_space_btn_pane_g2

0x180a,	// (0x00012178) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x180a,	// (0x00012178) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002075e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002075e) vkb2_area_bottom_space_btn_pane_g

0x0cd8,	// (0x00011646) cel_fep_hwr_func_pane_ParamLimits

0x0cd8,	// (0x00011646) cel_fep_hwr_func_pane

0xbbba,	// (0x0001c528) cell_hwr_side_button_pane_ParamLimits

0xbbba,	// (0x0001c528) cell_hwr_side_button_pane

0x8b48,	// (0x000194b6) aid_area_touch_clock_ParamLimits

0x20bf,	// (0x00012a2d) bg_uniindi_top_pane_ParamLimits

0x8b5a,	// (0x000194c8) uniindi_top_pane_g1_ParamLimits

0x8b70,	// (0x000194de) uniindi_top_pane_g2_ParamLimits

0x8b7c,	// (0x000194ea) uniindi_top_pane_g3_ParamLimits

0x8b8d,	// (0x000194fb) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002066f) uniindi_top_pane_g_ParamLimits

0x8b9a,	// (0x00019508) uniindi_top_pane_t1_ParamLimits

0x20bf,	// (0x00012a2d) bg_vkb2_func_pane_cp01_ParamLimits

0x20bf,	// (0x00012a2d) bg_vkb2_func_pane_cp01

0x96d0,	// (0x0001a03e) cel_fep_hwr_func_pane_g1_ParamLimits

0x96d0,	// (0x0001a03e) cel_fep_hwr_func_pane_g1

0x20bf,	// (0x00012a2d) bg_vkb2_func_pane_cp02_ParamLimits

0x20bf,	// (0x00012a2d) bg_vkb2_func_pane_cp02

0x96d0,	// (0x0001a03e) cell_hwr_side_button_pane_g1_ParamLimits

0x96d0,	// (0x0001a03e) cell_hwr_side_button_pane_g1

0x41cc,	// (0x00014b3a) status_pane_g4_ParamLimits

0x41cc,	// (0x00014b3a) status_pane_g4

0x41e6,	// (0x00014b54) status_pane_t1

0x6c24,	// (0x00017592) form2_midp_gauge_slider_cont_pane

0x6c2c,	// (0x0001759a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd8da,	// (0x0001e248) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd8ec,	// (0x0001e25a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x0002042f) form2_midp_gauge_slider_pane_t_ParamLimits

0x6c62,	// (0x000175d0) form2_midp_slider_pane_ParamLimits

0x1131,	// (0x00011a9f) aid_size_cell_func_vkb2_ParamLimits

0x1131,	// (0x00011a9f) aid_size_cell_func_vkb2

0x9671,	// (0x00019fdf) slider_pane_g4_ParamLimits

0x9671,	// (0x00019fdf) slider_pane_g4

0xbfcb,	// (0x0001c939) form2_midp_gauge_slider_pane_t2_cp01

0xbfd9,	// (0x0001c947) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbfd9,	// (0x0001c947) form2_midp_gauge_slider_pane_t3_cp01

0x187f,	// (0x000121ed) form2_midp_slider_pane_cp01

0xe686,	// (0x0001eff4) navi_smil_pane

0x9709,	// (0x0001a077) navi_smil_pane_g1

0x9711,	// (0x0001a07f) navi_smil_pane_t1

0x96de,	// (0x0001a04c) form2_midp_slider_pane_g1

0x96e7,	// (0x0001a055) form2_midp_slider_pane_g2

0x96ef,	// (0x0001a05d) form2_midp_slider_pane_g3

0x96de,	// (0x0001a04c) form2_midp_slider_pane_g4

0xead2,	// (0x0001f440) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x00020767) form2_midp_slider_pane_g

0x1844,	// (0x000121b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1844,	// (0x000121b2) vkb2_area_bottom_space_btn_pane_g4

0xcf45,	// (0x0001d8b3) lc0_navi_pane_ParamLimits

0xcf45,	// (0x0001d8b3) lc0_navi_pane

0xcfaf,	// (0x0001d91d) lc0_stat_indi_pane_ParamLimits

0xcfaf,	// (0x0001d91d) lc0_stat_indi_pane

0xcfc4,	// (0x0001d932) ls0_title_pane_ParamLimits

0xcfc4,	// (0x0001d932) ls0_title_pane

0x2c1a,	// (0x00013588) bg_popup_sub_pane_cp14_ParamLimits

0x8b2f,	// (0x0001949d) list_uniindi_pane_ParamLimits

0x8b3b,	// (0x000194a9) uniindi_top_pane_ParamLimits

0x8bd7,	// (0x00019545) list_single_uniindi_pane_g1_ParamLimits

0x8bea,	// (0x00019558) list_single_uniindi_pane_t1_ParamLimits

0xbff6,	// (0x0001c964) lc0_stat_clock_pane_ParamLimits

0xbff6,	// (0x0001c964) lc0_stat_clock_pane

0xeadd,	// (0x0001f44b) lc0_stat_indi_pane_g1_ParamLimits

0xeadd,	// (0x0001f44b) lc0_stat_indi_pane_g1

0xeaea,	// (0x0001f458) lc0_stat_indi_pane_g2_ParamLimits

0xeaea,	// (0x0001f458) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x00020772) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x00020772) lc0_stat_indi_pane_g

0xc003,	// (0x0001c971) lc0_uni_indicator_pane_ParamLimits

0xc003,	// (0x0001c971) lc0_uni_indicator_pane

0xeaf7,	// (0x0001f465) ls0_title_pane_g1_ParamLimits

0xeaf7,	// (0x0001f465) ls0_title_pane_g1

0xeb0b,	// (0x0001f479) ls0_title_pane_t1_ParamLimits

0xeb0b,	// (0x0001f479) ls0_title_pane_t1

0xc010,	// (0x0001c97e) lc0_uni_indicator_pane_g1_ParamLimits

0xc010,	// (0x0001c97e) lc0_uni_indicator_pane_g1

0x9783,	// (0x0001a0f1) lc0_stat_clock_pane_t1

0xeefe,	// (0x0001f86c) main_ai5_pane

0x9791,	// (0x0001a0ff) ai5_sk_pane_ParamLimits

0x9791,	// (0x0001a0ff) ai5_sk_pane

0xeb39,	// (0x0001f4a7) cell_ai5_widget_pane_ParamLimits

0xeb39,	// (0x0001f4a7) cell_ai5_widget_pane

0x9867,	// (0x0001a1d5) aid_size_cell_widget_grid

0x987d,	// (0x0001a1eb) bg_ai5_widget_pane_ParamLimits

0x987d,	// (0x0001a1eb) bg_ai5_widget_pane

0x98f9,	// (0x0001a267) cell_ai5_widget_pane_g2

0x990d,	// (0x0001a27b) cell_ai5_widget_pane_g3

0x9927,	// (0x0001a295) cell_ai5_widget_pane_g4

0x9937,	// (0x0001a2a5) cell_ai5_widget_pane_g5

0x9947,	// (0x0001a2b5) cell_ai5_widget_pane_g6

0x9953,	// (0x0001a2c1) cell_ai5_widget_pane_g7

0x99bf,	// (0x0001a32d) cell_ai5_widget_pane_t1_ParamLimits

0x99bf,	// (0x0001a32d) cell_ai5_widget_pane_t1

0x99dc,	// (0x0001a34a) cell_ai5_widget_pane_t2_ParamLimits

0x99dc,	// (0x0001a34a) cell_ai5_widget_pane_t2

0x99f4,	// (0x0001a362) cell_ai5_widget_pane_t3_ParamLimits

0x99f4,	// (0x0001a362) cell_ai5_widget_pane_t3

0x9a0c,	// (0x0001a37a) cell_ai5_widget_pane_t4_ParamLimits

0x9a0c,	// (0x0001a37a) cell_ai5_widget_pane_t4

0x9a32,	// (0x0001a3a0) cell_ai5_widget_pane_t5_ParamLimits

0x9a32,	// (0x0001a3a0) cell_ai5_widget_pane_t5

0x9a51,	// (0x0001a3bf) cell_ai5_widget_pane_t6_ParamLimits

0x9a51,	// (0x0001a3bf) cell_ai5_widget_pane_t6

0x9a63,	// (0x0001a3d1) cell_ai5_widget_pane_t7_ParamLimits

0x9a63,	// (0x0001a3d1) cell_ai5_widget_pane_t7

0x9a82,	// (0x0001a3f0) cell_ai5_widget_pane_t8_ParamLimits

0x9a82,	// (0x0001a3f0) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x00020792) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x00020792) cell_ai5_widget_pane_t

0x9b06,	// (0x0001a474) grid_ai5_widget_pane

0x2c1a,	// (0x00013588) highlight_cell_ai5_widget_pane_ParamLimits

0x2c1a,	// (0x00013588) highlight_cell_ai5_widget_pane

0xeba5,	// (0x0001f513) ai5_sk_left_pane

0xebaf,	// (0x0001f51d) ai5_sk_middle_pane

0xebb9,	// (0x0001f527) ai5_sk_right_pane

0x9b3b,	// (0x0001a4a9) bg_ai5_widget_pane_g1_ParamLimits

0x9b3b,	// (0x0001a4a9) bg_ai5_widget_pane_g1

0x9b47,	// (0x0001a4b5) bg_ai5_widget_pane_g2_ParamLimits

0x9b47,	// (0x0001a4b5) bg_ai5_widget_pane_g2

0x9b53,	// (0x0001a4c1) bg_ai5_widget_pane_g3_ParamLimits

0x9b53,	// (0x0001a4c1) bg_ai5_widget_pane_g3

0x9b5f,	// (0x0001a4cd) bg_ai5_widget_pane_g4_ParamLimits

0x9b5f,	// (0x0001a4cd) bg_ai5_widget_pane_g4

0x9b6b,	// (0x0001a4d9) bg_ai5_widget_pane_g5_ParamLimits

0x9b6b,	// (0x0001a4d9) bg_ai5_widget_pane_g5

0x9b77,	// (0x0001a4e5) bg_ai5_widget_pane_g6_ParamLimits

0x9b77,	// (0x0001a4e5) bg_ai5_widget_pane_g6

0x9b83,	// (0x0001a4f1) bg_ai5_widget_pane_g7_ParamLimits

0x9b83,	// (0x0001a4f1) bg_ai5_widget_pane_g7

0x9b8f,	// (0x0001a4fd) bg_ai5_widget_pane_g8_ParamLimits

0x9b8f,	// (0x0001a4fd) bg_ai5_widget_pane_g8

0x9b9b,	// (0x0001a509) bg_ai5_widget_pane_g9_ParamLimits

0x9b9b,	// (0x0001a509) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x000207ab) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x000207ab) bg_ai5_widget_pane_g

0x9bcd,	// (0x0001a53b) cell_shortcut_ai5_widget_pane_ParamLimits

0x9bcd,	// (0x0001a53b) cell_shortcut_ai5_widget_pane

0x3aed,	// (0x0001445b) bg_cell_shortcut_ai5_widget_pane

0x9bde,	// (0x0001a54c) cell_grid_ai5_widget_pane_g1

0x3aed,	// (0x0001445b) highlight_cell_shortcut_ai5_widget_pane

0x4369,	// (0x00014cd7) ai5_sk_left_pane_g1

0x9be7,	// (0x0001a555) ai5_sk_left_pane_g2

0x9bef,	// (0x0001a55d) ai5_sk_left_pane_g3

0x9bf7,	// (0x0001a565) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x000207be) ai5_sk_left_pane_g

0x9bff,	// (0x0001a56d) ai5_sk_left_pane_t1

0x4371,	// (0x00014cdf) ai5_sk_right_pane_g1

0x9c0d,	// (0x0001a57b) ai5_sk_right_pane_g2

0x9c15,	// (0x0001a583) ai5_sk_right_pane_g3

0x9c1d,	// (0x0001a58b) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x000207c7) ai5_sk_right_pane_g

0x9c25,	// (0x0001a593) ai5_sk_right_pane_t1

0x4371,	// (0x00014cdf) ai5_sk_middle_pane_g1

0x4369,	// (0x00014cd7) ai5_sk_middle_pane_g2

0x4389,	// (0x00014cf7) ai5_sk_middle_pane_g3

0x9c15,	// (0x0001a583) ai5_sk_middle_pane_g4

0x9bef,	// (0x0001a55d) ai5_sk_middle_pane_g5

0x9c33,	// (0x0001a5a1) ai5_sk_middle_pane_g6

0xebc3,	// (0x0001f531) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x000207d0) ai5_sk_middle_pane_g

0xce31,	// (0x0001d79f) aid_touch_area_size_lc0_ParamLimits

0xce31,	// (0x0001d79f) aid_touch_area_size_lc0

0x0ea9,	// (0x00011817) cell_hwr_candidate_pane_t1_ParamLimits

0x3e9d,	// (0x0001480b) aid_touch_navi_pane

0xd0bd,	// (0x0001da2b) status_dt_navi_pane_ParamLimits

0xd0bd,	// (0x0001da2b) status_dt_navi_pane

0xd0d5,	// (0x0001da43) status_dt_sta_pane_ParamLimits

0xd0d5,	// (0x0001da43) status_dt_sta_pane

0xebcb,	// (0x0001f539) dt_sta_controll_pane

0xebd8,	// (0x0001f546) dt_sta_indi_pane

0xebe5,	// (0x0001f553) dt_sta_title_pane

0x20bf,	// (0x00012a2d) bg_dt_sta_indi_pane_ParamLimits

0x20bf,	// (0x00012a2d) bg_dt_sta_indi_pane

0xebf7,	// (0x0001f565) dt_sta_battery_pane

0xebff,	// (0x0001f56d) dt_sta_indi_pane_g1

0x9c85,	// (0x0001a5f3) dt_sta_indi_pane_g2

0x9c8e,	// (0x0001a5fc) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x000207df) dt_sta_indi_pane_g

0x9c97,	// (0x0001a605) dt_sta_signal_pane

0x2c1a,	// (0x00013588) bg_dt_sta_title_pane_ParamLimits

0x2c1a,	// (0x00013588) bg_dt_sta_title_pane

0x9ca0,	// (0x0001a60e) dt_sta_title_pane_g1

0x9ca8,	// (0x0001a616) dt_sta_title_pane_t1_ParamLimits

0x9ca8,	// (0x0001a616) dt_sta_title_pane_t1

0xe686,	// (0x0001eff4) bg_dt_sta_control_pane

0xec08,	// (0x0001f576) dt_sta_controll_pane_g1

0x9cc6,	// (0x0001a634) bg_dt_sta_title_pane_g1

0x9ccf,	// (0x0001a63d) bg_dt_sta_title_pane_g2

0x9cd8,	// (0x0001a646) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x000207e6) bg_dt_sta_title_pane_g

0x6edf,	// (0x0001784d) bg_dt_sta_indi_pane_g1

0x9ce1,	// (0x0001a64f) dt_sta_signal_pane_g1

0x9ce9,	// (0x0001a657) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x000207ed) dt_sta_signal_pane_g

0x9cf1,	// (0x0001a65f) dt_sta_battery_pane_g1

0x9cfa,	// (0x0001a668) dt_sta_battery_pane_t1

0x6edf,	// (0x0001784d) bg_dt_sta_control_pane_g1

0x355d,	// (0x00013ecb) fep_china_uni_eep_pane

0x3565,	// (0x00013ed3) fep_china_uni_entry_pane_ParamLimits

0x3575,	// (0x00013ee3) popup_fep_china_uni_window_g1_ParamLimits

0x3585,	// (0x00013ef3) popup_fep_china_uni_window_g2_ParamLimits

0x3585,	// (0x00013ef3) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00020061) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00020061) popup_fep_china_uni_window_g

0x9d09,	// (0x0001a677) fep_china_uni_eep_pane_g1

0x9d11,	// (0x0001a67f) fep_china_uni_eep_pane_t1

0x9700,	// (0x0001a06e) aid_touch_area_size_smil_player

0x3ff3,	// (0x00014961) lc0_clock_pane

0x41da,	// (0x00014b48) status_pane_g5_ParamLimits

0x41da,	// (0x00014b48) status_pane_g5

0xb63e,	// (0x0001bfac) popup_keymap_window

0x4198,	// (0x00014b06) status_icon_pane

0x990d,	// (0x0001a27b) cell_ai5_widget_pane_g3_ParamLimits

0x9927,	// (0x0001a295) cell_ai5_widget_pane_g4_ParamLimits

0x9937,	// (0x0001a2a5) cell_ai5_widget_pane_g5_ParamLimits

0x995f,	// (0x0001a2cd) cell_ai5_widget_pane_g8_ParamLimits

0x995f,	// (0x0001a2cd) cell_ai5_widget_pane_g8

0x9973,	// (0x0001a2e1) cell_ai5_widget_pane_g9_ParamLimits

0x9973,	// (0x0001a2e1) cell_ai5_widget_pane_g9

0x9987,	// (0x0001a2f5) cell_ai5_widget_pane_g10_ParamLimits

0x9987,	// (0x0001a2f5) cell_ai5_widget_pane_g10

0x9d20,	// (0x0001a68e) status_icon_pane_g1

0xe686,	// (0x0001eff4) bg_popup_sub_pane_cp13

0x9d28,	// (0x0001a696) popup_keymap_window_t1

0xcdc7,	// (0x0001d735) control_pane_g6_ParamLimits

0xcdc7,	// (0x0001d735) control_pane_g6

0xcdd4,	// (0x0001d742) control_pane_g7_ParamLimits

0xcdd4,	// (0x0001d742) control_pane_g7

0xcde1,	// (0x0001d74f) control_pane_g8_ParamLimits

0xcde1,	// (0x0001d74f) control_pane_g8

0xebcb,	// (0x0001f539) dt_sta_controll_pane_ParamLimits

0xebd8,	// (0x0001f546) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x0001f553) dt_sta_title_pane_ParamLimits

0x25fb,	// (0x00012f69) aid_size_touch_scroll_bar_cale

0xefd7,	// (0x0001f945) popup_discreet_window_ParamLimits

0xefd7,	// (0x0001f945) popup_discreet_window

0xb241,	// (0x0001bbaf) popup_sk_window

0x4adb,	// (0x00015449) bg_popup_sub_pane_cp28_ParamLimits

0x4adb,	// (0x00015449) bg_popup_sub_pane_cp28

0x9d36,	// (0x0001a6a4) popup_discreet_window_g1_ParamLimits

0x9d36,	// (0x0001a6a4) popup_discreet_window_g1

0x9d56,	// (0x0001a6c4) popup_discreet_window_t1_ParamLimits

0x9d56,	// (0x0001a6c4) popup_discreet_window_t1

0x9d74,	// (0x0001a6e2) popup_discreet_window_t2_ParamLimits

0x9d74,	// (0x0001a6e2) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x000207f2) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x000207f2) popup_discreet_window_t

0x18b6,	// (0x00012224) popup_sk_window_g1

0x18c0,	// (0x0001222e) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x000207f9) popup_sk_window_g

0x18c8,	// (0x00012236) popup_sk_window_t1

0x18d6,	// (0x00012244) popup_sk_window_t1_copy1

0x98f9,	// (0x0001a267) cell_ai5_widget_pane_g2_ParamLimits

0x9a94,	// (0x0001a402) cell_ai5_widget_pane_t9_ParamLimits

0x9a94,	// (0x0001a402) cell_ai5_widget_pane_t9

0xe686,	// (0x0001eff4) main_fep_fshwr2_pane

0xc037,	// (0x0001c9a5) aid_fshwr2_btn_pane

0xc047,	// (0x0001c9b5) aid_fshwr2_syb_pane

0xc05b,	// (0x0001c9c9) aid_fshwr2_txt_pane

0xc06b,	// (0x0001c9d9) fshwr2_func_candi_pane

0xc08b,	// (0x0001c9f9) fshwr2_hwr_syb_pane

0xc0ad,	// (0x0001ca1b) fshwr2_icf_pane

0xeefe,	// (0x0001f86c) fshwr2_icf_bg_pane

0xc0dd,	// (0x0001ca4b) fshwr2_icf_pane_t1_ParamLimits

0xc0dd,	// (0x0001ca4b) fshwr2_icf_pane_t1

0x3432,	// (0x00013da0) fshwr2_func_candi_pane_g1

0xec11,	// (0x0001f57f) fshwr2_func_candi_row_pane_ParamLimits

0xec11,	// (0x0001f57f) fshwr2_func_candi_row_pane

0xc0f6,	// (0x0001ca64) cell_fshwr2_syb_pane_ParamLimits

0xc0f6,	// (0x0001ca64) cell_fshwr2_syb_pane

0x19bf,	// (0x0001232d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x19bf,	// (0x0001232d) fshwr2_hwr_syb_pane_g1

0xeefe,	// (0x0001f86c) bg_popup_call_pane_cp01

0xc11c,	// (0x0001ca8a) fshwr2_func_candi_cell_pane_ParamLimits

0xc11c,	// (0x0001ca8a) fshwr2_func_candi_cell_pane

0x48bc,	// (0x0001522a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x48bc,	// (0x0001522a) fshwr2_func_candi_cell_bg_pane

0xc167,	// (0x0001cad5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc167,	// (0x0001cad5) fshwr2_func_candi_cell_pane_g1

0xc19e,	// (0x0001cb0c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc19e,	// (0x0001cb0c) fshwr2_func_candi_cell_pane_t1

0xeefe,	// (0x0001f86c) bg_button_pane_cp08

0x3e19,	// (0x00014787) cell_fshwr2_syb_bg_pane

0xc1b9,	// (0x0001cb27) cell_fshwr2_syb_bg_pane_g1

0xc1cc,	// (0x0001cb3a) cell_fshwr2_syb_bg_pane_t1

0x2c1a,	// (0x00013588) main_tmo_pane

0xd3a9,	// (0x0001dd17) uni_indicator_pane_g1_ParamLimits

0xd3bf,	// (0x0001dd2d) uni_indicator_pane_g2_ParamLimits

0xd3d5,	// (0x0001dd43) uni_indicator_pane_g3_ParamLimits

0x5629,	// (0x00015f97) uni_indicator_pane_g4_ParamLimits

0x5629,	// (0x00015f97) uni_indicator_pane_g4

0x563d,	// (0x00015fab) uni_indicator_pane_g5_ParamLimits

0x563d,	// (0x00015fab) uni_indicator_pane_g5

0x563d,	// (0x00015fab) uni_indicator_pane_g6_ParamLimits

0x563d,	// (0x00015fab) uni_indicator_pane_g6

0xf8f2,	// (0x00020260) uni_indicator_pane_g_ParamLimits

0xdfa2,	// (0x0001e910) popup_tmo_note_window_ParamLimits

0xdfa2,	// (0x0001e910) popup_tmo_note_window

0x1113,	// (0x00011a81) fshwr2_bg_pane

0xc18f,	// (0x0001cafd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc18f,	// (0x0001cafd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x000207fe) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x000207fe) fshwr2_func_candi_cell_pane_g

0x0e62,	// (0x000117d0) bg_popup_window_pane_cp01

0x1a80,	// (0x000123ee) bg_popup_window_pane_g1_cp01

0x9ded,	// (0x0001a75b) bg_popup_window_pane_cp22_ParamLimits

0x9ded,	// (0x0001a75b) bg_popup_window_pane_cp22

0x9dfb,	// (0x0001a769) listscroll_tmo_link_pane_ParamLimits

0x9dfb,	// (0x0001a769) listscroll_tmo_link_pane

0x9e3b,	// (0x0001a7a9) popup_tmo_note_window_g1_ParamLimits

0x9e3b,	// (0x0001a7a9) popup_tmo_note_window_g1

0x9e48,	// (0x0001a7b6) tmo_note_info_pane_ParamLimits

0x9e48,	// (0x0001a7b6) tmo_note_info_pane

0xec34,	// (0x0001f5a2) list_tmo_note_info_pane_g1_ParamLimits

0xec34,	// (0x0001f5a2) list_tmo_note_info_pane_g1

0x9e79,	// (0x0001a7e7) list_tmo_note_info_pane_g2_ParamLimits

0x9e79,	// (0x0001a7e7) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x00020803) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x00020803) list_tmo_note_info_pane_g

0x9e95,	// (0x0001a803) list_tmo_note_info_text_pane_ParamLimits

0x9e95,	// (0x0001a803) list_tmo_note_info_text_pane

0x9f16,	// (0x0001a884) list_tmo_link_pane

0x9f23,	// (0x0001a891) scroll_pane_cp20

0x9f30,	// (0x0001a89e) list_single_tmo_link_pane_ParamLimits

0x9f30,	// (0x0001a89e) list_single_tmo_link_pane

0x9f40,	// (0x0001a8ae) list_single_tmo_link_pane_t1

0x9f4e,	// (0x0001a8bc) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f4e,	// (0x0001a8bc) list_tmo_note_info_text_pane_t1

0xca37,	// (0x0001d3a5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xca37,	// (0x0001d3a5) aid_size_touch_scroll_bar_cp01

0xc9a6,	// (0x0001d314) aid_size_touch_slider_marker

0xb231,	// (0x0001bb9f) popup_settings_window_ParamLimits

0xb231,	// (0x0001bb9f) popup_settings_window

0x3e4d,	// (0x000147bb) popup_candi_list_indi_window

0x3e9d,	// (0x0001480b) aid_touch_navi_pane_ParamLimits

0x106e,	// (0x000119dc) rs_clock_indi_pane

0x1077,	// (0x000119e5) sctrl_sk_bottom_pane_ParamLimits

0x1088,	// (0x000119f6) sctrl_sk_top_pane_ParamLimits

0x1183,	// (0x00011af1) popup_fep_tooltip_window

0x9867,	// (0x0001a1d5) aid_size_cell_widget_grid_ParamLimits

0x98e4,	// (0x0001a252) cell_ai5_widget_pane_g1_ParamLimits

0x98e4,	// (0x0001a252) cell_ai5_widget_pane_g1

0x9947,	// (0x0001a2b5) cell_ai5_widget_pane_g6_ParamLimits

0x9953,	// (0x0001a2c1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x00020777) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x00020777) cell_ai5_widget_pane_g

0x9ac3,	// (0x0001a431) cell_ai5_widget_pane_t10_ParamLimits

0x9ac3,	// (0x0001a431) cell_ai5_widget_pane_t10

0x9b06,	// (0x0001a474) grid_ai5_widget_pane_ParamLimits

0x9ba7,	// (0x0001a515) cell_contacts_ai5_widget_pane_ParamLimits

0x9ba7,	// (0x0001a515) cell_contacts_ai5_widget_pane

0x9d89,	// (0x0001a6f7) popup_discreet_window_t3_ParamLimits

0x9d89,	// (0x0001a6f7) popup_discreet_window_t3

0xc0c9,	// (0x0001ca37) popup_fshwr2_char_preview_window_ParamLimits

0xc0c9,	// (0x0001ca37) popup_fshwr2_char_preview_window

0xec4b,	// (0x0001f5b9) tmo_note_info_pane_t1

0xec60,	// (0x0001f5ce) tmo_note_info_pane_t2

0xec77,	// (0x0001f5e5) tmo_note_info_pane_t3

0x9ef2,	// (0x0001a860) tmo_note_info_pane_t4

0x9f04,	// (0x0001a872) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x00020808) tmo_note_info_pane_t

0x9f16,	// (0x0001a884) list_tmo_link_pane_ParamLimits

0x9f23,	// (0x0001a891) scroll_pane_cp20_ParamLimits

0xeefe,	// (0x0001f86c) bg_popup_fep_char_preview_window_cp01

0xec8c,	// (0x0001f5fa) popup_fshwr2_char_preview_window_t1

0x9f75,	// (0x0001a8e3) popup_candi_list_indi_window_g1

0x9f7e,	// (0x0001a8ec) bg_cell_contacts_ai5_widget_pane

0x9f8a,	// (0x0001a8f8) cell_contacts_ai5_widget_pane_g1

0x7764,	// (0x000180d2) cell_contacts_ai5_widget_pane_g2

0x9f9f,	// (0x0001a90d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x00020813) cell_contacts_ai5_widget_pane_g

0x9fab,	// (0x0001a919) cell_contacts_ai5_widget_pane_t1

0x2c1a,	// (0x00013588) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa022,	// (0x0001a990) settings_container_pane

0x3aed,	// (0x0001445b) listscroll_set_pane_copy1

0x62b2,	// (0x00016c20) scroll_pane_cp121_copy1

0x4878,	// (0x000151e6) set_content_pane_copy1

0xa02e,	// (0x0001a99c) aid_height_set_list_copy1_ParamLimits

0xa02e,	// (0x0001a99c) aid_height_set_list_copy1

0x5847,	// (0x000161b5) aid_size_parent_copy1_ParamLimits

0x5847,	// (0x000161b5) aid_size_parent_copy1

0xa03a,	// (0x0001a9a8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa03a,	// (0x0001a9a8) button_value_adjust_pane_cp6_copy1

0x3e19,	// (0x00014787) list_highlight_pane_cp2_copy1_ParamLimits

0x3e19,	// (0x00014787) list_highlight_pane_cp2_copy1

0xa04e,	// (0x0001a9bc) list_set_pane_copy1_ParamLimits

0xa04e,	// (0x0001a9bc) list_set_pane_copy1

0x9fbd,	// (0x0001a92b) main_pane_set_t1_copy1_ParamLimits

0x9fbd,	// (0x0001a92b) main_pane_set_t1_copy1

0x9ff7,	// (0x0001a965) main_pane_set_t2_copy1_ParamLimits

0x9ff7,	// (0x0001a965) main_pane_set_t2_copy1

0xa0fb,	// (0x0001aa69) main_pane_set_t3_copy1

0xa109,	// (0x0001aa77) main_pane_set_t4_copy1

0xa016,	// (0x0001a984) set_content_pane_g1_copy1_ParamLimits

0xa016,	// (0x0001a984) set_content_pane_g1_copy1

0xa117,	// (0x0001aa85) setting_code_pane_copy1

0xa11f,	// (0x0001aa8d) setting_slider_graphic_pane_copy1

0xa11f,	// (0x0001aa8d) setting_slider_pane_copy1

0xa127,	// (0x0001aa95) setting_text_pane_copy1

0xa127,	// (0x0001aa95) setting_volume_pane_copy1

0xa117,	// (0x0001aa85) settings_code_pane_cp2_copy1

0xa12f,	// (0x0001aa9d) settings_code_pane_cp_copy1_ParamLimits

0xa12f,	// (0x0001aa9d) settings_code_pane_cp_copy1

0x1a89,	// (0x000123f7) volume_set_pane_copy1

0xa143,	// (0x0001aab1) volume_set_pane_g10_copy1

0xa14b,	// (0x0001aab9) volume_set_pane_g1_copy1

0xa153,	// (0x0001aac1) volume_set_pane_g2_copy1

0xa15b,	// (0x0001aac9) volume_set_pane_g3_copy1

0xa163,	// (0x0001aad1) volume_set_pane_g4_copy1

0xa16b,	// (0x0001aad9) volume_set_pane_g5_copy1

0xa173,	// (0x0001aae1) volume_set_pane_g6_copy1

0xa17b,	// (0x0001aae9) volume_set_pane_g7_copy1

0xa183,	// (0x0001aaf1) volume_set_pane_g8_copy1

0xa18b,	// (0x0001aaf9) volume_set_pane_g9_copy1

0x1e1c,	// (0x0001278a) bg_set_opt_pane_cp_copy1_ParamLimits

0x1e1c,	// (0x0001278a) bg_set_opt_pane_cp_copy1

0x1a91,	// (0x000123ff) setting_slider_pane_t1_copy1_ParamLimits

0x1a91,	// (0x000123ff) setting_slider_pane_t1_copy1

0x1ab0,	// (0x0001241e) setting_slider_pane_t2_copy1_ParamLimits

0x1ab0,	// (0x0001241e) setting_slider_pane_t2_copy1

0x1aca,	// (0x00012438) setting_slider_pane_t3_copy1_ParamLimits

0x1aca,	// (0x00012438) setting_slider_pane_t3_copy1

0x1ae2,	// (0x00012450) slider_set_pane_copy1_ParamLimits

0x1ae2,	// (0x00012450) slider_set_pane_copy1

0x2d49,	// (0x000136b7) set_opt_bg_pane_g1_copy2

0x2d51,	// (0x000136bf) set_opt_bg_pane_g2_copy2

0xa193,	// (0x0001ab01) set_opt_bg_pane_g3_copy2

0x2d61,	// (0x000136cf) set_opt_bg_pane_g4_copy2

0x2d69,	// (0x000136d7) set_opt_bg_pane_g5_copy2

0x2d71,	// (0x000136df) set_opt_bg_pane_g6_copy2

0xa19d,	// (0x0001ab0b) set_opt_bg_pane_g7_copy2

0xa1a5,	// (0x0001ab13) set_opt_bg_pane_g8_copy2

0xa1af,	// (0x0001ab1d) set_opt_bg_pane_g9_copy2

0x1af8,	// (0x00012466) aid_size_touch_slider_mark_copy1_ParamLimits

0x1af8,	// (0x00012466) aid_size_touch_slider_mark_copy1

0xa1b9,	// (0x0001ab27) slider_set_pane_g1_copy1

0x1b0c,	// (0x0001247a) slider_set_pane_g2_copy1

0x0aa3,	// (0x00011411) slider_set_pane_g3_copy1_ParamLimits

0x0aa3,	// (0x00011411) slider_set_pane_g3_copy1

0x0ab7,	// (0x00011425) slider_set_pane_g4_copy1_ParamLimits

0x0ab7,	// (0x00011425) slider_set_pane_g4_copy1

0x0acf,	// (0x0001143d) slider_set_pane_g5_copy1_ParamLimits

0x0acf,	// (0x0001143d) slider_set_pane_g5_copy1

0x0aa3,	// (0x00011411) slider_set_pane_g6_copy1_ParamLimits

0x0aa3,	// (0x00011411) slider_set_pane_g6_copy1

0x1b14,	// (0x00012482) slider_set_pane_g7_copy1_ParamLimits

0x1b14,	// (0x00012482) slider_set_pane_g7_copy1

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp2_copy1

0xa1c2,	// (0x0001ab30) setting_slider_graphic_pane_g1_copy1

0xa1cb,	// (0x0001ab39) setting_slider_graphic_pane_t1_copy1

0xa1db,	// (0x0001ab49) setting_slider_graphic_pane_t2_copy1

0xa1eb,	// (0x0001ab59) slider_set_pane_cp_copy1

0xa1fb,	// (0x0001ab69) input_focus_pane_cp1_copy1

0xa204,	// (0x0001ab72) list_set_text_pane_copy1

0xa20c,	// (0x0001ab7a) setting_text_pane_g1_copy1

0x1e75,	// (0x000127e3) set_text_pane_t1_copy1

0xa1fb,	// (0x0001ab69) input_focus_pane_cp2_copy1

0xa20c,	// (0x0001ab7a) setting_code_pane_g1_copy1

0xa215,	// (0x0001ab83) setting_code_pane_t1_copy1

0x60da,	// (0x00016a48) list_set_graphic_pane_copy1

0x1d3c,	// (0x000126aa) bg_set_opt_pane_cp4_copy1

0x37eb,	// (0x00014159) list_set_graphic_pane_g1_copy1_ParamLimits

0x37eb,	// (0x00014159) list_set_graphic_pane_g1_copy1

0xa223,	// (0x0001ab91) list_set_graphic_pane_g2_copy1

0x3803,	// (0x00014171) list_set_graphic_pane_t1_copy1_ParamLimits

0x3803,	// (0x00014171) list_set_graphic_pane_t1_copy1

0x6edf,	// (0x0001784d) rs_clock_indi_pane_g1

0xa22b,	// (0x0001ab99) rs_clock_indi_pane_t1

0xa239,	// (0x0001aba7) rs_indi_pane

0xa241,	// (0x0001abaf) rs_indi_pane_g1

0xa24a,	// (0x0001abb8) rs_indi_pane_g2

0xa253,	// (0x0001abc1) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002081a) rs_indi_pane_g

0x3aed,	// (0x0001445b) bg_popup_preview_window_pane_cp03

0xa25c,	// (0x0001abca) popup_fep_tooltip_window_t1

0x7d61,	// (0x000186cf) popup_note2_window_g2_ParamLimits

0x7d61,	// (0x000186cf) popup_note2_window_g2

0x0001,

0xfc39,	// (0x000205a7) popup_note2_window_g_ParamLimits

0xfc39,	// (0x000205a7) popup_note2_window_g

0x834b,	// (0x00018cb9) bg_popup_sub_pane_cp11_ParamLimits

0x8358,	// (0x00018cc6) cell_ai3_links_pane_g1_ParamLimits

0x836f,	// (0x00018cdd) cell_ai3_links_pane_t1

0x1e75,	// (0x000127e3) set_text_pane_t1_copy1_ParamLimits

0x3a01,	// (0x0001436f) cell_graphic_popup_pane_cp2_ParamLimits

0x3a01,	// (0x0001436f) cell_graphic_popup_pane_cp2

0xa26a,	// (0x0001abd8) cell_graphic_popup_pane_g1_cp2

0x240e,	// (0x00012d7c) cell_graphic_popup_pane_g2_cp2

0xa272,	// (0x0001abe0) cell_graphic_popup_pane_g3_cp2

0xa27a,	// (0x0001abe8) cell_graphic_popup_pane_t2_cp2

0x241f,	// (0x00012d8d) grid_highlight_pane_cp3_cp2

0x314d,	// (0x00013abb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c1a,	// (0x00013588) main_tmo_pane_ParamLimits

0xdf96,	// (0x0001e904) popup_tmo_big_image_note_window

0x98d3,	// (0x0001a241) cell_ai5_widget_list_pane

0x98db,	// (0x0001a249) cell_ai5_widget_lrg_icon_pane

0xec4b,	// (0x0001f5b9) tmo_note_info_pane_t1_ParamLimits

0xec60,	// (0x0001f5ce) tmo_note_info_pane_t2_ParamLimits

0xec77,	// (0x0001f5e5) tmo_note_info_pane_t3_ParamLimits

0x9ef2,	// (0x0001a860) tmo_note_info_pane_t4_ParamLimits

0x9f04,	// (0x0001a872) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x00020808) tmo_note_info_pane_t_ParamLimits

0xa022,	// (0x0001a990) settings_container_pane_ParamLimits

0xa1f3,	// (0x0001ab61) indicator_popup_pane_cp5

0xa1f3,	// (0x0001ab61) indicator_popup_pane_cp6

0x60da,	// (0x00016a48) list_set_graphic_pane_copy1_ParamLimits

0xe686,	// (0x0001eff4) bg_popup_window_pane_cp23

0xa288,	// (0x0001abf6) popup_tmo_big_image_note_window_g1

0xa292,	// (0x0001ac00) popup_tmo_big_image_note_window_t1

0xa2a2,	// (0x0001ac10) popup_tmo_big_image_note_window_t2

0xa2b2,	// (0x0001ac20) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x00020821) popup_tmo_big_image_note_window_t

0x6edf,	// (0x0001784d) cell_ai5_widget_lrg_icon_pane_g1

0xa2c2,	// (0x0001ac30) cell_ai5_widget_lrg_icon_pane_t1

0xa2d0,	// (0x0001ac3e) cell_ai5_widget_list_row_pane_ParamLimits

0xa2d0,	// (0x0001ac3e) cell_ai5_widget_list_row_pane

0xa2e7,	// (0x0001ac55) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa2e7,	// (0x0001ac55) cell_ai5_widget_list_row_pane_g1

0xa2f4,	// (0x0001ac62) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa2f4,	// (0x0001ac62) cell_ai5_widget_list_row_pane_t1

0xa325,	// (0x0001ac93) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa325,	// (0x0001ac93) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x00020828) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x00020828) cell_ai5_widget_list_row_pane_t

0xeefe,	// (0x0001f86c) main_fep_vtchi_ss_pane

0xa375,	// (0x0001ace3) popup_fep_char_pre_window

0xa37d,	// (0x0001aceb) popup_fep_ituss_window

0xecc4,	// (0x0001f632) popup_fep_vkbss_window

0x3e19,	// (0x00014787) grid_vkbss_keypad_pane_ParamLimits

0x3e19,	// (0x00014787) grid_vkbss_keypad_pane

0xa3e9,	// (0x0001ad57) ituss_keypad_pane

0x1b34,	// (0x000124a2) aid_vkbss_key_offset_ParamLimits

0x1b34,	// (0x000124a2) aid_vkbss_key_offset

0xc1e2,	// (0x0001cb50) cell_vkbss_key_pane_ParamLimits

0xc1e2,	// (0x0001cb50) cell_vkbss_key_pane

0xa3f5,	// (0x0001ad63) bg_cell_vkbss_key_g1_ParamLimits

0xa3f5,	// (0x0001ad63) bg_cell_vkbss_key_g1

0xecd1,	// (0x0001f63f) cell_vkbss_key_3p_pane_ParamLimits

0xecd1,	// (0x0001f63f) cell_vkbss_key_3p_pane

0xed07,	// (0x0001f675) cell_vkbss_key_g1_ParamLimits

0xed07,	// (0x0001f675) cell_vkbss_key_g1

0xed3d,	// (0x0001f6ab) cell_vkbss_key_t1_ParamLimits

0xed3d,	// (0x0001f6ab) cell_vkbss_key_t1

0x1b98,	// (0x00012506) cell_ituss_key_pane_ParamLimits

0x1b98,	// (0x00012506) cell_ituss_key_pane

0xa4c9,	// (0x0001ae37) bg_cell_ituss_key_g1_ParamLimits

0xa4c9,	// (0x0001ae37) bg_cell_ituss_key_g1

0xa4d5,	// (0x0001ae43) cell_ituss_key_pane_g1_ParamLimits

0xa4d5,	// (0x0001ae43) cell_ituss_key_pane_g1

0x1ba9,	// (0x00012517) cell_ituss_key_pane_g2_ParamLimits

0x1ba9,	// (0x00012517) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002082f) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002082f) cell_ituss_key_pane_g

0x1c2d,	// (0x0001259b) cell_ituss_key_t1_ParamLimits

0x1c2d,	// (0x0001259b) cell_ituss_key_t1

0x1c67,	// (0x000125d5) cell_ituss_key_t2_ParamLimits

0x1c67,	// (0x000125d5) cell_ituss_key_t2

0x1c99,	// (0x00012607) cell_ituss_key_t3_ParamLimits

0x1c99,	// (0x00012607) cell_ituss_key_t3

0x1cca,	// (0x00012638) cell_ituss_key_t4_ParamLimits

0x1cca,	// (0x00012638) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002083c) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002083c) cell_ituss_key_t

0xed99,	// (0x0001f707) cell_vkbss_key_3p_pane_g1

0xeda1,	// (0x0001f70f) cell_vkbss_key_3p_pane_g2

0xeda9,	// (0x0001f717) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x00020847) cell_vkbss_key_3p_pane_g

0x3aed,	// (0x0001445b) bg_popup_fep_char_preview_window_cp02

0xa513,	// (0x0001ae81) popup_fep_char_pre_window_t1

0xeb9b,	// (0x0001f509) main_ai5_sk_pane

0x9f7e,	// (0x0001a8ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f8a,	// (0x0001a8f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7764,	// (0x000180d2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f9f,	// (0x0001a90d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x00020813) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9fab,	// (0x0001a919) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c1a,	// (0x00013588) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedb1,	// (0x0001f71f) main_ai5_sk_pane_g1

0x4914,	// (0x00015282) popup_query_code_window_g1

0xecb5,	// (0x0001f623) popup_fep_vkb_icf_pane

0xa3c0,	// (0x0001ad2e) popup_fep_vtchi_icf_pane

0xa52a,	// (0x0001ae98) bg_icf_pane

0xa52a,	// (0x0001ae98) list_vkb_icf_pane

0xa536,	// (0x0001aea4) bg_icf_pane_cp01

0xa549,	// (0x0001aeb7) vtchi_icf_list_pane

0xee06,	// (0x0001f774) list_vkb_icf_pane_t1_ParamLimits

0xee06,	// (0x0001f774) list_vkb_icf_pane_t1

0xa5ca,	// (0x0001af38) vtchi_icf_list_pane_t1_ParamLimits

0xa5ca,	// (0x0001af38) vtchi_icf_list_pane_t1

0xa37d,	// (0x0001aceb) popup_fep_ituss_window_ParamLimits

0xa3c0,	// (0x0001ad2e) popup_fep_vtchi_icf_pane_ParamLimits

0xa3e9,	// (0x0001ad57) ituss_keypad_pane_ParamLimits

0x1b2a,	// (0x00012498) ituss_sks_pane

0xa52a,	// (0x0001ae98) bg_icf_pane_ParamLimits

0xec9a,	// (0x0001f608) icf_edit_indi_pane_ParamLimits

0xec9a,	// (0x0001f608) icf_edit_indi_pane

0xa52a,	// (0x0001ae98) list_vkb_icf_pane_ParamLimits

0xa536,	// (0x0001aea4) bg_icf_pane_cp01_ParamLimits

0xa368,	// (0x0001acd6) icf_edit_indi_pane_cp01_ParamLimits

0xa368,	// (0x0001acd6) icf_edit_indi_pane_cp01

0xa549,	// (0x0001aeb7) vtchi_query_pane

0x96d0,	// (0x0001a03e) icf_edit_indi_pane_g1_ParamLimits

0x96d0,	// (0x0001a03e) icf_edit_indi_pane_g1

0xee1d,	// (0x0001f78b) icf_edit_indi_pane_g2_ParamLimits

0xee1d,	// (0x0001f78b) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x00020872) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x00020872) icf_edit_indi_pane_g

0xee31,	// (0x0001f79f) icf_edit_indi_pane_t1

0xa5e8,	// (0x0001af56) bg_input_focus_pane_cp042

0x25f2,	// (0x00012f60) vtchi_button_pane

0xa5f1,	// (0x0001af5f) vtchi_query_pane_t1

0xa5ff,	// (0x0001af6d) vtchi_query_pane_t2

0xa60d,	// (0x0001af7b) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x00020861) vtchi_query_pane_t

0xeefe,	// (0x0001f86c) bg_button_pane_cp13

0xa61b,	// (0x0001af89) vtchi_button_pane_g1

0x1d0d,	// (0x0001267b) ituss_sks_pane_g1

0x1d18,	// (0x00012686) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x00020868) ituss_sks_pane_g

0xa623,	// (0x0001af91) ituss_sks_pane_t1

0xa631,	// (0x0001af9f) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002086d) ituss_sks_pane_t

0x6912,	// (0x00017280) indicator_nsta_pane_cp_g1

0x691b,	// (0x00017289) indicator_nsta_pane_cp_g2

0x6923,	// (0x00017291) indicator_nsta_pane_cp_g3

0x692b,	// (0x00017299) indicator_nsta_pane_cp_g4

0x691b,	// (0x00017289) indicator_nsta_pane_cp_g5

0x6923,	// (0x00017291) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x000203e5) indicator_nsta_pane_cp_g

0xe9b2,	// (0x0001f320) cell_graphic2_pane_t2_ParamLimits

0xe9b2,	// (0x0001f320) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x000206fe) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x000206fe) cell_graphic2_pane_t

0xe9e7,	// (0x0001f355) cell_graphic2_control_pane_t1

0xcbf4,	// (0x0001d562) signal_pane_g3_ParamLimits

0xcbf4,	// (0x0001d562) signal_pane_g3

0xcc08,	// (0x0001d576) signal_pane_g4_ParamLimits

0xcc08,	// (0x0001d576) signal_pane_g4

0xa337,	// (0x0001aca5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa337,	// (0x0001aca5) cell_ai5_widget_list_row_pane_t3

0xa4e9,	// (0x0001ae57) cell_ituss_key_pane_t1_ParamLimits

0xa4e9,	// (0x0001ae57) cell_ituss_key_pane_t1

0x4514,	// (0x00014e82) form_field_data_wide_pane_vc_t2_ParamLimits

0x4514,	// (0x00014e82) form_field_data_wide_pane_vc_t2

0x4528,	// (0x00014e96) form_field_data_wide_pane_vc_t3_ParamLimits

0x4528,	// (0x00014e96) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x00020148) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x00020148) form_field_data_wide_pane_vc_t

0x65bc,	// (0x00016f2a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x65bc,	// (0x00016f2a) form_field_slider_wide_pane_vc_t3

0x669a,	// (0x00017008) form_field_popup_wide_pane_vc_t2_ParamLimits

0x669a,	// (0x00017008) form_field_popup_wide_pane_vc_t2

0x66b1,	// (0x0001701f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x66b1,	// (0x0001701f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x000203d4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x000203d4) form_field_popup_wide_pane_vc_t

0xc037,	// (0x0001c9a5) aid_fshwr2_btn_pane_ParamLimits

0xc047,	// (0x0001c9b5) aid_fshwr2_syb_pane_ParamLimits

0xc05b,	// (0x0001c9c9) aid_fshwr2_txt_pane_ParamLimits

0x1113,	// (0x00011a81) fshwr2_bg_pane_ParamLimits

0xc06b,	// (0x0001c9d9) fshwr2_func_candi_pane_ParamLimits

0xc08b,	// (0x0001c9f9) fshwr2_hwr_syb_pane_ParamLimits

0xc0ad,	// (0x0001ca1b) fshwr2_icf_pane_ParamLimits

0x6522,	// (0x00016e90) list_double_graphic_pane_vc_g4_ParamLimits

0x6522,	// (0x00016e90) list_double_graphic_pane_vc_g4

0x1bc9,	// (0x00012537) cell_ituss_key_pane_g3_ParamLimits

0x1bc9,	// (0x00012537) cell_ituss_key_pane_g3

0x1cfb,	// (0x00012669) cell_ituss_key_t5_ParamLimits

0x1cfb,	// (0x00012669) cell_ituss_key_t5

0xecc4,	// (0x0001f632) popup_fep_vkbss_window_ParamLimits

0x985e,	// (0x0001a1cc) aid_cell_ai5_quarter

0xee31,	// (0x0001f79f) icf_edit_indi_pane_t1_ParamLimits

0x2167,	// (0x00012ad5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2167,	// (0x00012ad5) aid_tch_indicator_popup_pane_cp2

0x217a,	// (0x00012ae8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x217a,	// (0x00012ae8) aid_tch_query_popup_data_pane_cp2

0x48bc,	// (0x0001522a) aid_tch_query_popup_pane_ParamLimits

0x48bc,	// (0x0001522a) aid_tch_query_popup_pane

0x48bc,	// (0x0001522a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x48bc,	// (0x0001522a) aid_tch_query_popup_data_pane_cp1

0x3e19,	// (0x00014787) cell_fshwr2_syb_bg_pane_ParamLimits

0xc1b9,	// (0x0001cb27) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc1cc,	// (0x0001cb3a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xecb5,	// (0x0001f623) popup_fep_vkb_icf_pane_ParamLimits

0xbfc3,	// (0x0001c931) bg_popup_fep_char_preview_window_g10

0x999b,	// (0x0001a309) cell_ai5_widget_pane_g11_ParamLimits

0x999b,	// (0x0001a309) cell_ai5_widget_pane_g11

0x99a7,	// (0x0001a315) cell_ai5_widget_pane_g12_ParamLimits

0x99a7,	// (0x0001a315) cell_ai5_widget_pane_g12

0x99b3,	// (0x0001a321) cell_ai5_widget_pane_g13_ParamLimits

0x99b3,	// (0x0001a321) cell_ai5_widget_pane_g13

0x9ae2,	// (0x0001a450) cell_ai5_widget_pane_t11_ParamLimits

0x9ae2,	// (0x0001a450) cell_ai5_widget_pane_t11

0x9af4,	// (0x0001a462) cell_ai5_widget_pane_t12_ParamLimits

0x9af4,	// (0x0001a462) cell_ai5_widget_pane_t12

0x1bd5,	// (0x00012543) cell_ituss_key_pane_g4_ParamLimits

0x1bd5,	// (0x00012543) cell_ituss_key_pane_g4

0x1bf1,	// (0x0001255f) cell_ituss_key_pane_g5_ParamLimits

0x1bf1,	// (0x0001255f) cell_ituss_key_pane_g5

0x1c0d,	// (0x0001257b) cell_ituss_key_pane_g6_ParamLimits

0x1c0d,	// (0x0001257b) cell_ituss_key_pane_g6

0x4361,	// (0x00014ccf) bg_icf_pane_g1

0xedba,	// (0x0001f728) bg_icf_pane_g2

0xedc4,	// (0x0001f732) bg_icf_pane_g3

0xedcc,	// (0x0001f73a) bg_icf_pane_g4

0xedd6,	// (0x0001f744) bg_icf_pane_g5

0xede0,	// (0x0001f74e) bg_icf_pane_g6

0xedea,	// (0x0001f758) bg_icf_pane_g7

0xedf2,	// (0x0001f760) bg_icf_pane_g8

0xedfc,	// (0x0001f76a) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002084e) bg_icf_pane_g

0xa3d6,	// (0x0001ad44) popup_hyb_candi_window_ParamLimits

0xa3d6,	// (0x0001ad44) popup_hyb_candi_window

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp01_ParamLimits

0x4483,	// (0x00014df1) bg_popup_sub_pane_cp01

0xa66c,	// (0x0001afda) entry_hyb_candi_pane_ParamLimits

0xa66c,	// (0x0001afda) entry_hyb_candi_pane

0xa67b,	// (0x0001afe9) grid_hyb_candi_pane_ParamLimits

0xa67b,	// (0x0001afe9) grid_hyb_candi_pane

0xa690,	// (0x0001affe) grid_hyb_phrase_pane_ParamLimits

0xa690,	// (0x0001affe) grid_hyb_phrase_pane

0xa69f,	// (0x0001b00d) cell_hyb_candi_pane_ParamLimits

0xa69f,	// (0x0001b00d) cell_hyb_candi_pane

0xa6c2,	// (0x0001b030) cell_hyb_candi_scroll_pane

0x3432,	// (0x00013da0) cell_hyb_candi_pane_g1

0xa6cb,	// (0x0001b039) cell_hyb_candi_pane_t1

0xa6d9,	// (0x0001b047) cell_hyb_phrase_pane

0x3432,	// (0x00013da0) cell_hyb_phrase_pane_g1

0xa6e2,	// (0x0001b050) cell_hyb_phrase_pane_t1

0xa6f0,	// (0x0001b05e) entry_hyb_candi_pane_t1

0x3aed,	// (0x0001445b) input_focus_pane_cp06

0xa6fe,	// (0x0001b06c) cell_hyb_candi_scroll_pane_g1

0xa706,	// (0x0001b074) cell_hyb_candi_scroll_pane_g1_aid

0xa70e,	// (0x0001b07c) cell_hyb_candi_scroll_pane_g2

0xa716,	// (0x0001b084) cell_hyb_candi_scroll_pane_g2_aid

0xa71e,	// (0x0001b08c) cell_hyb_candi_scroll_pane_g3

0xa726,	// (0x0001b094) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

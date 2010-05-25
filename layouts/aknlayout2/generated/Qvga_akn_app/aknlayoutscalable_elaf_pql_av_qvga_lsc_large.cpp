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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002d0e8 };

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
0x14c7,	// (0x0002e5af) Screen

0x14d1,	// (0x0002e5b9) application_window_ParamLimits

0x14d1,	// (0x0002e5b9) application_window

0x61eb,	// (0x000332d3) screen_g1

0xafd3,	// (0x000380bb) area_bottom_pane_ParamLimits

0xafd3,	// (0x000380bb) area_bottom_pane

0x3aa9,	// (0x00030b91) area_top_pane_ParamLimits

0x3aa9,	// (0x00030b91) area_top_pane

0x3b33,	// (0x00030c1b) main_pane_ParamLimits

0x3b33,	// (0x00030c1b) main_pane

0x61f5,	// (0x000332dd) misc_graphics

0xb9de,	// (0x00038ac6) battery_pane_ParamLimits

0xb9de,	// (0x00038ac6) battery_pane

0x7d4b,	// (0x00034e33) bg_status_flat_pane_g8

0x7d53,	// (0x00034e3b) bg_status_flat_pane_g9

0x74de,	// (0x000345c6) context_pane_ParamLimits

0x74de,	// (0x000345c6) context_pane

0xbb47,	// (0x00038c2f) navi_pane_ParamLimits

0xbb47,	// (0x00038c2f) navi_pane

0xbbbd,	// (0x00038ca5) signal_pane_ParamLimits

0xbbbd,	// (0x00038ca5) signal_pane

0x0008,

0xf879,	// (0x0003c961) bg_status_flat_pane_g

0xbc49,	// (0x00038d31) status_pane_g1_ParamLimits

0xbc49,	// (0x00038d31) status_pane_g1

0xbc5f,	// (0x00038d47) status_pane_g2_ParamLimits

0xbc5f,	// (0x00038d47) status_pane_g2

0x7543,	// (0x0003462b) status_pane_g3_ParamLimits

0x7543,	// (0x0003462b) status_pane_g3

0x0004,

0xf7a5,	// (0x0003c88d) status_pane_g_ParamLimits

0xf7a5,	// (0x0003c88d) status_pane_g

0xbc6b,	// (0x00038d53) title_pane_ParamLimits

0xbc6b,	// (0x00038d53) title_pane

0xbcc6,	// (0x00038dae) uni_indicator_pane_ParamLimits

0xbcc6,	// (0x00038dae) uni_indicator_pane

0x7417,	// (0x000344ff) bg_list_pane_ParamLimits

0x7417,	// (0x000344ff) bg_list_pane

0x20cd,	// (0x0002f1b5) find_pane

0xb3b3,	// (0x0003849b) listscroll_app_pane_ParamLimits

0xb3b3,	// (0x0003849b) listscroll_app_pane

0x7437,	// (0x0003451f) listscroll_form_pane

0xb3c3,	// (0x000384ab) listscroll_gen_pane_ParamLimits

0xb3c3,	// (0x000384ab) listscroll_gen_pane

0x43f8,	// (0x000314e0) listscroll_set_pane

0x875d,	// (0x00035845) main_idle_act_pane

0x729e,	// (0x00034386) main_idle_trad_pane

0x729e,	// (0x00034386) main_list_empty_pane

0x7451,	// (0x00034539) main_midp_pane

0x745d,	// (0x00034545) main_pane_g1_ParamLimits

0x745d,	// (0x00034545) main_pane_g1

0xb3d7,	// (0x000384bf) popup_ai_message_window_ParamLimits

0xb3d7,	// (0x000384bf) popup_ai_message_window

0xb45c,	// (0x00038544) popup_fep_china_uni_window_ParamLimits

0xb45c,	// (0x00038544) popup_fep_china_uni_window

0x44d4,	// (0x000315bc) popup_fep_japan_candidate_window_ParamLimits

0x44d4,	// (0x000315bc) popup_fep_japan_candidate_window

0x44f2,	// (0x000315da) popup_fep_japan_predictive_window_ParamLimits

0x44f2,	// (0x000315da) popup_fep_japan_predictive_window

0xb49a,	// (0x00038582) popup_find_window

0xb4b3,	// (0x0003859b) popup_grid_graphic_window_ParamLimits

0xb4b3,	// (0x0003859b) popup_grid_graphic_window

0x4551,	// (0x00031639) popup_large_graphic_colour_window

0xb52f,	// (0x00038617) popup_menu_window_ParamLimits

0xb52f,	// (0x00038617) popup_menu_window

0xb68d,	// (0x00038775) popup_note_image_window

0xb655,	// (0x0003873d) popup_note_wait_window_ParamLimits

0xb655,	// (0x0003873d) popup_note_wait_window

0xb6a3,	// (0x0003878b) popup_note_window_ParamLimits

0xb6a3,	// (0x0003878b) popup_note_window

0xb737,	// (0x0003881f) popup_query_code_window_ParamLimits

0xb737,	// (0x0003881f) popup_query_code_window

0x4723,	// (0x0003180b) popup_query_data_code_window_ParamLimits

0x4723,	// (0x0003180b) popup_query_data_code_window

0xb76f,	// (0x00038857) popup_query_data_window_ParamLimits

0xb76f,	// (0x00038857) popup_query_data_window

0xb7e3,	// (0x000388cb) popup_query_sat_info_window_ParamLimits

0xb7e3,	// (0x000388cb) popup_query_sat_info_window

0xb870,	// (0x00038958) popup_snote_single_graphic_window_ParamLimits

0xb870,	// (0x00038958) popup_snote_single_graphic_window

0xb870,	// (0x00038958) popup_snote_single_text_window_ParamLimits

0xb870,	// (0x00038958) popup_snote_single_text_window

0x4792,	// (0x0003187a) popup_sub_window_general

0x48a0,	// (0x00031988) popup_window_general_ParamLimits

0x48a0,	// (0x00031988) popup_window_general

0x746b,	// (0x00034553) power_save_pane

0xb247,	// (0x0003832f) control_pane_g1_ParamLimits

0xb247,	// (0x0003832f) control_pane_g1

0xb26e,	// (0x00038356) control_pane_g2_ParamLimits

0xb26e,	// (0x00038356) control_pane_g2

0x7401,	// (0x000344e9) control_pane_g3_ParamLimits

0x7401,	// (0x000344e9) control_pane_g3

0x0007,

0xf78d,	// (0x0003c875) control_pane_g_ParamLimits

0xf78d,	// (0x0003c875) control_pane_g

0xb2a9,	// (0x00038391) control_pane_t1_ParamLimits

0xb2a9,	// (0x00038391) control_pane_t1

0xb30c,	// (0x000383f4) control_pane_t2_ParamLimits

0xb30c,	// (0x000383f4) control_pane_t2

0x0002,

0xf79e,	// (0x0003c886) control_pane_t_ParamLimits

0xf79e,	// (0x0003c886) control_pane_t

0x2001,	// (0x0002f0e9) navi_navi_volume_pane_cp1

0x2009,	// (0x0002f0f1) status_small_icon_pane

0x73cd,	// (0x000344b5) status_small_pane_g1_ParamLimits

0x73cd,	// (0x000344b5) status_small_pane_g1

0x2011,	// (0x0002f0f9) status_small_pane_g2_ParamLimits

0x2011,	// (0x0002f0f9) status_small_pane_g2

0x201d,	// (0x0002f105) status_small_pane_g3_ParamLimits

0x201d,	// (0x0002f105) status_small_pane_g3

0x2029,	// (0x0002f111) status_small_pane_g4_ParamLimits

0x2029,	// (0x0002f111) status_small_pane_g4

0x2035,	// (0x0002f11d) status_small_pane_g5_ParamLimits

0x2035,	// (0x0002f11d) status_small_pane_g5

0x2041,	// (0x0002f129) status_small_pane_g6_ParamLimits

0x2041,	// (0x0002f129) status_small_pane_g6

0x0007,

0xf77c,	// (0x0003c864) status_small_pane_g_ParamLimits

0xf77c,	// (0x0003c864) status_small_pane_g

0x2070,	// (0x0002f158) status_small_pane_t1

0x2092,	// (0x0002f17a) status_small_wait_pane_ParamLimits

0x2092,	// (0x0002f17a) status_small_wait_pane

0x1eda,	// (0x0002efc2) aid_levels_signal_ParamLimits

0x1eda,	// (0x0002efc2) aid_levels_signal

0x1ef2,	// (0x0002efda) signal_pane_g1_ParamLimits

0x1ef2,	// (0x0002efda) signal_pane_g1

0x1f0d,	// (0x0002eff5) signal_pane_g2_ParamLimits

0x1f0d,	// (0x0002eff5) signal_pane_g2

0x0003,

0xf70d,	// (0x0003c7f5) signal_pane_g_ParamLimits

0xf70d,	// (0x0003c7f5) signal_pane_g

0x6da6,	// (0x00033e8e) context_pane_g1

0x1a60,	// (0x0002eb48) title_pane_g1

0x1a97,	// (0x0002eb7f) title_pane_t1

0x620b,	// (0x000332f3) title_pane_t2

0x6231,	// (0x00033319) title_pane_t3

0x0002,

0xf557,	// (0x0003c63f) title_pane_t

0xbcec,	// (0x00038dd4) aid_levels_battery_ParamLimits

0xbcec,	// (0x00038dd4) aid_levels_battery

0xbd08,	// (0x00038df0) battery_pane_g1_ParamLimits

0xbd08,	// (0x00038df0) battery_pane_g1

0xbd25,	// (0x00038e0d) battery_pane_g2_ParamLimits

0xbd25,	// (0x00038e0d) battery_pane_g2

0x0001,

0xf7b0,	// (0x0003c898) battery_pane_g_ParamLimits

0xf7b0,	// (0x0003c898) battery_pane_g

0xbf40,	// (0x00039028) uni_indicator_pane_g1

0xbf56,	// (0x0003903e) uni_indicator_pane_g2

0xbf6c,	// (0x00039054) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003ca09) uni_indicator_pane_g

0x711e,	// (0x00034206) navi_icon_pane_ParamLimits

0x711e,	// (0x00034206) navi_icon_pane

0x706d,	// (0x00034155) navi_midp_pane

0x713a,	// (0x00034222) navi_navi_pane

0x7144,	// (0x0003422c) navi_text_pane_ParamLimits

0x7144,	// (0x0003422c) navi_text_pane

0x61eb,	// (0x000332d3) status_small_wait_pane_g1

0x6528,	// (0x00033610) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003ca04) status_small_wait_pane_g

0x830a,	// (0x000353f2) navi_navi_icon_text_pane

0x8312,	// (0x000353fa) navi_navi_pane_g1_ParamLimits

0x8312,	// (0x000353fa) navi_navi_pane_g1

0x8324,	// (0x0003540c) navi_navi_pane_g2_ParamLimits

0x8324,	// (0x0003540c) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003c9d2) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003c9d2) navi_navi_pane_g

0x8336,	// (0x0003541e) navi_navi_tabs_pane

0x833f,	// (0x00035427) navi_navi_text_pane

0x830a,	// (0x000353f2) navi_navi_volume_pane

0x82e6,	// (0x000353ce) navi_text_pane_t1

0x82da,	// (0x000353c2) navi_icon_pane_g1

0x823e,	// (0x00035326) navi_navi_text_pane_t1

0x4b20,	// (0x00031c08) navi_navi_volume_pane_g1

0x4b28,	// (0x00031c10) volume_small_pane

0x821c,	// (0x00035304) navi_navi_icon_text_pane_g1

0x8224,	// (0x0003530c) navi_navi_icon_text_pane_t1

0x713a,	// (0x00034222) navi_tabs_2_long_pane

0x713a,	// (0x00034222) navi_tabs_2_pane

0x713a,	// (0x00034222) navi_tabs_3_long_pane

0x713a,	// (0x00034222) navi_tabs_3_pane

0x713a,	// (0x00034222) navi_tabs_4_pane

0x4b00,	// (0x00031be8) tabs_2_active_pane_ParamLimits

0x4b00,	// (0x00031be8) tabs_2_active_pane

0x4b10,	// (0x00031bf8) tabs_2_passive_pane_ParamLimits

0x4b10,	// (0x00031bf8) tabs_2_passive_pane

0x4ace,	// (0x00031bb6) tabs_3_active_pane_ParamLimits

0x4ace,	// (0x00031bb6) tabs_3_active_pane

0x4ade,	// (0x00031bc6) tabs_3_passive_pane_ParamLimits

0x4ade,	// (0x00031bc6) tabs_3_passive_pane

0x4aef,	// (0x00031bd7) tabs_3_passive_pane_cp_ParamLimits

0x4aef,	// (0x00031bd7) tabs_3_passive_pane_cp

0x4a8a,	// (0x00031b72) tabs_4_active_pane_ParamLimits

0x4a8a,	// (0x00031b72) tabs_4_active_pane

0x4a9b,	// (0x00031b83) tabs_4_passive_pane_ParamLimits

0x4a9b,	// (0x00031b83) tabs_4_passive_pane

0x4aac,	// (0x00031b94) tabs_4_passive_pane_cp_ParamLimits

0x4aac,	// (0x00031b94) tabs_4_passive_pane_cp

0x4abd,	// (0x00031ba5) tabs_4_passive_pane_cp2_ParamLimits

0x4abd,	// (0x00031ba5) tabs_4_passive_pane_cp2

0x4a6a,	// (0x00031b52) tabs_2_long_active_pane_ParamLimits

0x4a6a,	// (0x00031b52) tabs_2_long_active_pane

0x4a7a,	// (0x00031b62) tabs_2_long_passive_pane_ParamLimits

0x4a7a,	// (0x00031b62) tabs_2_long_passive_pane

0x4a37,	// (0x00031b1f) tabs_3_long_active_pane_ParamLimits

0x4a37,	// (0x00031b1f) tabs_3_long_active_pane

0x4a48,	// (0x00031b30) tabs_3_long_passive_pane_ParamLimits

0x4a48,	// (0x00031b30) tabs_3_long_passive_pane

0x4a59,	// (0x00031b41) tabs_3_long_passive_pane_cp_ParamLimits

0x4a59,	// (0x00031b41) tabs_3_long_passive_pane_cp

0x49dd,	// (0x00031ac5) volume_small_pane_g1

0x49e6,	// (0x00031ace) volume_small_pane_g2

0x49ef,	// (0x00031ad7) volume_small_pane_g3

0x49f8,	// (0x00031ae0) volume_small_pane_g4

0x4a01,	// (0x00031ae9) volume_small_pane_g5

0x4a0a,	// (0x00031af2) volume_small_pane_g6

0x4a13,	// (0x00031afb) volume_small_pane_g7

0x4a1c,	// (0x00031b04) volume_small_pane_g8

0x4a25,	// (0x00031b0d) volume_small_pane_g9

0x4a2e,	// (0x00031b16) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003c99e) volume_small_pane_g

0x6386,	// (0x0003346e) bg_active_tab_pane_cp2_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp2

0x6251,	// (0x00033339) tabs_3_active_pane_g1

0x1b23,	// (0x0002ec0b) tabs_3_active_pane_t1

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp2_ParamLimits

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp2

0x6251,	// (0x00033339) tabs_3_passive_pane_g1

0x1b23,	// (0x0002ec0b) tabs_3_passive_pane_t1

0x6386,	// (0x0003346e) bg_active_tab_pane_cp3_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp3

0x6259,	// (0x00033341) tabs_4_active_pane_g1

0x1b35,	// (0x0002ec1d) tabs_4_active_pane_t1

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp3_ParamLimits

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp3

0x6259,	// (0x00033341) tabs_4_1_passive_pane_g1

0x1b35,	// (0x0002ec1d) tabs_4_1_passive_pane_t1

0x7451,	// (0x00034539) list_highlight_pane_cp2

0xc05a,	// (0x00039142) list_set_pane_ParamLimits

0xc05a,	// (0x00039142) list_set_pane

0xc0e8,	// (0x000391d0) main_pane_set_t1_ParamLimits

0xc0e8,	// (0x000391d0) main_pane_set_t1

0xc108,	// (0x000391f0) main_pane_set_t2_ParamLimits

0xc108,	// (0x000391f0) main_pane_set_t2

0xc11c,	// (0x00039204) main_pane_set_t3_ParamLimits

0xc11c,	// (0x00039204) main_pane_set_t3

0xc12e,	// (0x00039216) main_pane_set_t4_ParamLimits

0xc12e,	// (0x00039216) main_pane_set_t4

0x0003,

0xf986,	// (0x0003ca6e) main_pane_set_t_ParamLimits

0xf986,	// (0x0003ca6e) main_pane_set_t

0xc140,	// (0x00039228) setting_code_pane

0xc148,	// (0x00039230) setting_slider_graphic_pane

0xc148,	// (0x00039230) setting_slider_pane

0xc148,	// (0x00039230) setting_text_pane

0xc148,	// (0x00039230) setting_volume_pane

0xb17d,	// (0x00038265) volume_set_pane

0x6243,	// (0x0003332b) bg_set_opt_pane_cp

0x3d3c,	// (0x00030e24) setting_slider_pane_t1

0xb185,	// (0x0003826d) setting_slider_pane_t2

0xb19e,	// (0x00038286) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003c646) setting_slider_pane_t

0x3d85,	// (0x00030e6d) slider_set_pane

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp2

0x6261,	// (0x00033349) setting_slider_graphic_pane_g1

0xb1b5,	// (0x0003829d) setting_slider_graphic_pane_t1

0xb1c4,	// (0x000382ac) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003c64d) setting_slider_graphic_pane_t

0x3db9,	// (0x00030ea1) slider_set_pane_cp

0x61f5,	// (0x000332dd) input_focus_pane_cp1

0x8755,	// (0x0003583d) list_set_text_pane

0x61eb,	// (0x000332d3) setting_text_pane_g1

0x61f5,	// (0x000332dd) input_focus_pane_cp2

0x61eb,	// (0x000332d3) setting_code_pane_g1

0x626a,	// (0x00033352) setting_code_pane_t1

0x2a9e,	// (0x0002fb86) set_text_pane_t1_ParamLimits

0x2a9e,	// (0x0002fb86) set_text_pane_t1

0x6870,	// (0x00033958) set_opt_bg_pane_g1

0x6878,	// (0x00033960) set_opt_bg_pane_g2

0xc01d,	// (0x00039105) set_opt_bg_pane_g3

0x6888,	// (0x00033970) set_opt_bg_pane_g4

0x6890,	// (0x00033978) set_opt_bg_pane_g5

0x6898,	// (0x00033980) set_opt_bg_pane_g6

0x874d,	// (0x00035835) set_opt_bg_pane_g7

0xc025,	// (0x0003910d) set_opt_bg_pane_g8

0xc02d,	// (0x00039115) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003ca5b) set_opt_bg_pane_g

0x8740,	// (0x00035828) slider_set_pane_g1

0x4b95,	// (0x00031c7d) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003ca4c) slider_set_pane_g

0x4b31,	// (0x00031c19) volume_set_pane_g1

0xbf92,	// (0x0003907a) volume_set_pane_g2

0xbf9a,	// (0x00039082) volume_set_pane_g3

0xbfa2,	// (0x0003908a) volume_set_pane_g4

0xbfaa,	// (0x00039092) volume_set_pane_g5

0xbfb2,	// (0x0003909a) volume_set_pane_g6

0xbfba,	// (0x000390a2) volume_set_pane_g7

0xbfc2,	// (0x000390aa) volume_set_pane_g8

0xbfca,	// (0x000390b2) volume_set_pane_g9

0xbfd2,	// (0x000390ba) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003ca24) volume_set_pane_g

0x1b47,	// (0x0002ec2f) indicator_pane_ParamLimits

0x1b47,	// (0x0002ec2f) indicator_pane

0x1b6f,	// (0x0002ec57) main_idle_pane_g2_ParamLimits

0x1b6f,	// (0x0002ec57) main_idle_pane_g2

0x1b9d,	// (0x0002ec85) main_pane_idle_g1_ParamLimits

0x1b9d,	// (0x0002ec85) main_pane_idle_g1

0x6278,	// (0x00033360) popup_clock_digital_analogue_window_ParamLimits

0x6278,	// (0x00033360) popup_clock_digital_analogue_window

0x1bc2,	// (0x0002ecaa) soft_indicator_pane_ParamLimits

0x1bc2,	// (0x0002ecaa) soft_indicator_pane

0x1bdc,	// (0x0002ecc4) wallpaper_pane_ParamLimits

0x1bdc,	// (0x0002ecc4) wallpaper_pane

0x61eb,	// (0x000332d3) wallpaper_pane_g1

0x1bee,	// (0x0002ecd6) indicator_pane_g1_ParamLimits

0x1bee,	// (0x0002ecd6) indicator_pane_g1

0x88bf,	// (0x000359a7) navi_navi_icon_text_pane_srt_g1

0x62a6,	// (0x0003338e) soft_indicator_pane_t1

0x62c0,	// (0x000333a8) aid_ps_area_pane

0x1c07,	// (0x0002ecef) aid_ps_clock_pane

0x62d1,	// (0x000333b9) aid_ps_indicator_pane

0x62dd,	// (0x000333c5) indicator_ps_pane_ParamLimits

0x62dd,	// (0x000333c5) indicator_ps_pane

0x62ec,	// (0x000333d4) power_save_pane_g1_ParamLimits

0x62ec,	// (0x000333d4) power_save_pane_g1

0x62f8,	// (0x000333e0) power_save_pane_g2_ParamLimits

0x62f8,	// (0x000333e0) power_save_pane_g2

0x39a5,	// (0x00030a8d) aid_navinavi_width_pane

0x62c0,	// (0x000333a8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003c652) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003c652) power_save_pane_g

0x6306,	// (0x000333ee) power_save_pane_t1_ParamLimits

0x6306,	// (0x000333ee) power_save_pane_t1

0x1c07,	// (0x0002ecef) aid_ps_clock_pane_ParamLimits

0x62d1,	// (0x000333b9) aid_ps_indicator_pane_ParamLimits

0x6318,	// (0x00033400) power_save_pane_t4_ParamLimits

0x6318,	// (0x00033400) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003c657) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003c657) power_save_pane_t

0x6342,	// (0x0003342a) power_save_t3_ParamLimits

0x6342,	// (0x0003342a) power_save_t3

0x632d,	// (0x00033415) power_save_t2_ParamLimits

0x632d,	// (0x00033415) power_save_t2

0x6357,	// (0x0003343f) indicator_ps_pane_g1

0x1c13,	// (0x0002ecfb) ai_gene_pane_ParamLimits

0x1c13,	// (0x0002ecfb) ai_gene_pane

0x1c2a,	// (0x0002ed12) ai_links_pane_ParamLimits

0x1c2a,	// (0x0002ed12) ai_links_pane

0x1c42,	// (0x0002ed2a) indicator_pane_cp1_ParamLimits

0x1c42,	// (0x0002ed2a) indicator_pane_cp1

0x1c51,	// (0x0002ed39) main_pane_idle_g1_cp_ParamLimits

0x1c51,	// (0x0002ed39) main_pane_idle_g1_cp

0x6360,	// (0x00033448) popup_ai_links_title_window

0x1c69,	// (0x0002ed51) soft_indicator_pane_cp1_ParamLimits

0x1c69,	// (0x0002ed51) soft_indicator_pane_cp1

0x85a8,	// (0x00035690) ai_links_pane_g1

0x85b1,	// (0x00035699) grid_ai_links_pane

0xbf37,	// (0x0003901f) ai_gene_pane_1

0x8596,	// (0x0003567e) ai_gene_pane_2

0x859f,	// (0x00035687) list_highlight_pane_cp4

0xbf1d,	// (0x00039005) cell_ai_link_pane_ParamLimits

0xbf1d,	// (0x00039005) cell_ai_link_pane

0x858e,	// (0x00035676) cell_ai_link_pane_g1

0x6528,	// (0x00033610) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003c9ff) cell_ai_link_pane_g

0x61f5,	// (0x000332dd) grid_highlight_cp2

0x61f5,	// (0x000332dd) bg_popup_sub_pane_cp1

0x6377,	// (0x0003345f) popup_ai_links_title_window_t1

0x84e0,	// (0x000355c8) ai_gene_pane_1_g1_ParamLimits

0x84e0,	// (0x000355c8) ai_gene_pane_1_g1

0x84ec,	// (0x000355d4) ai_gene_pane_1_g2_ParamLimits

0x84ec,	// (0x000355d4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003c9f5) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003c9f5) ai_gene_pane_1_g

0x84f9,	// (0x000355e1) ai_gene_pane_1_t1_ParamLimits

0x84f9,	// (0x000355e1) ai_gene_pane_1_t1

0x852d,	// (0x00035615) grid_ai_soft_ind_pane

0x84cb,	// (0x000355b3) ai_gene_pane_2_t1_ParamLimits

0x84cb,	// (0x000355b3) ai_gene_pane_2_t1

0x1c7d,	// (0x0002ed65) main_pane_empty_t1_ParamLimits

0x1c7d,	// (0x0002ed65) main_pane_empty_t1

0x1c95,	// (0x0002ed7d) main_pane_empty_t2_ParamLimits

0x1c95,	// (0x0002ed7d) main_pane_empty_t2

0x1caa,	// (0x0002ed92) main_pane_empty_t3_ParamLimits

0x1caa,	// (0x0002ed92) main_pane_empty_t3

0x1cbc,	// (0x0002eda4) main_pane_empty_t4_ParamLimits

0x1cbc,	// (0x0002eda4) main_pane_empty_t4

0x1cce,	// (0x0002edb6) main_pane_empty_t5_ParamLimits

0x1cce,	// (0x0002edb6) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003c65c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003c65c) main_pane_empty_t

0x68c1,	// (0x000339a9) bg_popup_window_pane_ParamLimits

0x68c1,	// (0x000339a9) bg_popup_window_pane

0x824c,	// (0x00035334) find_popup_pane_cp2_ParamLimits

0x824c,	// (0x00035334) find_popup_pane_cp2

0x8258,	// (0x00035340) heading_pane_ParamLimits

0x8258,	// (0x00035340) heading_pane

0x61f5,	// (0x000332dd) bg_popup_sub_pane

0xbe9e,	// (0x00038f86) bg_popup_window_pane_g1_ParamLimits

0xbe9e,	// (0x00038f86) bg_popup_window_pane_g1

0xbead,	// (0x00038f95) bg_popup_window_pane_g2_ParamLimits

0xbead,	// (0x00038f95) bg_popup_window_pane_g2

0xbeb9,	// (0x00038fa1) bg_popup_window_pane_g3_ParamLimits

0xbeb9,	// (0x00038fa1) bg_popup_window_pane_g3

0xbec5,	// (0x00038fad) bg_popup_window_pane_g4_ParamLimits

0xbec5,	// (0x00038fad) bg_popup_window_pane_g4

0xbed4,	// (0x00038fbc) bg_popup_window_pane_g5_ParamLimits

0xbed4,	// (0x00038fbc) bg_popup_window_pane_g5

0xbee4,	// (0x00038fcc) bg_popup_window_pane_g6_ParamLimits

0xbee4,	// (0x00038fcc) bg_popup_window_pane_g6

0xbef0,	// (0x00038fd8) bg_popup_window_pane_g7_ParamLimits

0xbef0,	// (0x00038fd8) bg_popup_window_pane_g7

0xbeff,	// (0x00038fe7) bg_popup_window_pane_g8_ParamLimits

0xbeff,	// (0x00038fe7) bg_popup_window_pane_g8

0xbf0e,	// (0x00038ff6) bg_popup_window_pane_g9_ParamLimits

0xbf0e,	// (0x00038ff6) bg_popup_window_pane_g9

0x8232,	// (0x0003531a) bg_popup_window_pane_g10_ParamLimits

0x8232,	// (0x0003531a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003c9bd) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003c9bd) bg_popup_window_pane_g

0x81d3,	// (0x000352bb) bg_popup_heading_pane_ParamLimits

0x81d3,	// (0x000352bb) bg_popup_heading_pane

0x4c1d,	// (0x00031d05) tabs_4_passive_pane_cp_srt_ParamLimits

0x4c1d,	// (0x00031d05) tabs_4_passive_pane_cp_srt

0x4c2f,	// (0x00031d17) tabs_4_passive_pane_srt_ParamLimits

0x81e7,	// (0x000352cf) heading_pane_g2

0x4c2f,	// (0x00031d17) tabs_4_passive_pane_srt

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp3_srt

0x81ef,	// (0x000352d7) heading_pane_t1_ParamLimits

0x81ef,	// (0x000352d7) heading_pane_t1

0x8206,	// (0x000352ee) heading_pane_t2_ParamLimits

0x8206,	// (0x000352ee) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003c9b8) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003c9b8) heading_pane_t

0x7d13,	// (0x00034dfb) bg_popup_heading_pane_g1

0x7da4,	// (0x00034e8c) bg_popup_heading_pane_g2

0x7dac,	// (0x00034e94) bg_popup_heading_pane_g3

0x7db4,	// (0x00034e9c) bg_popup_heading_pane_g4

0x7dbc,	// (0x00034ea4) bg_popup_heading_pane_g5

0x7dc4,	// (0x00034eac) bg_popup_heading_pane_g6

0x7df9,	// (0x00034ee1) bg_popup_heading_pane_g7

0x7e01,	// (0x00034ee9) bg_popup_heading_pane_g8

0x7e09,	// (0x00034ef1) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003c974) bg_popup_heading_pane_g

0x7635,	// (0x0003471d) bg_popup_sub_pane_g1

0x763d,	// (0x00034725) bg_popup_sub_pane_g2

0x7645,	// (0x0003472d) bg_popup_sub_pane_g3

0x764d,	// (0x00034735) bg_popup_sub_pane_g4

0x7655,	// (0x0003473d) bg_popup_sub_pane_g5

0x765d,	// (0x00034745) bg_popup_sub_pane_g6

0x7665,	// (0x0003474d) bg_popup_sub_pane_g7

0x766d,	// (0x00034755) bg_popup_sub_pane_g8

0x7675,	// (0x0003475d) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003c94e) bg_popup_sub_pane_g

0x6386,	// (0x0003346e) bg_popup_window_pane_cp5_ParamLimits

0x6386,	// (0x0003346e) bg_popup_window_pane_cp5

0x63a2,	// (0x0003348a) popup_note_window_g1_ParamLimits

0x63a2,	// (0x0003348a) popup_note_window_g1

0x63ae,	// (0x00033496) popup_note_window_t1_ParamLimits

0x63ae,	// (0x00033496) popup_note_window_t1

0x63c4,	// (0x000334ac) popup_note_window_t2_ParamLimits

0x63c4,	// (0x000334ac) popup_note_window_t2

0x63da,	// (0x000334c2) popup_note_window_t3_ParamLimits

0x63da,	// (0x000334c2) popup_note_window_t3

0x63f0,	// (0x000334d8) popup_note_window_t4_ParamLimits

0x63f0,	// (0x000334d8) popup_note_window_t4

0x6418,	// (0x00033500) popup_note_window_t5_ParamLimits

0x6418,	// (0x00033500) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003c667) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003c667) popup_note_window_t

0x643c,	// (0x00033524) bg_popup_window_pane_cp6_ParamLimits

0x643c,	// (0x00033524) bg_popup_window_pane_cp6

0x7c8f,	// (0x00034d77) popup_note_image_window_g1_ParamLimits

0x7c8f,	// (0x00034d77) popup_note_image_window_g1

0x7c9b,	// (0x00034d83) popup_note_image_window_g2_ParamLimits

0x7c9b,	// (0x00034d83) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003c942) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003c942) popup_note_image_window_g

0x7cb4,	// (0x00034d9c) popup_note_image_window_t1_ParamLimits

0x7cb4,	// (0x00034d9c) popup_note_image_window_t1

0x7ccd,	// (0x00034db5) popup_note_image_window_t2_ParamLimits

0x7ccd,	// (0x00034db5) popup_note_image_window_t2

0x7ce6,	// (0x00034dce) popup_note_image_window_t3_ParamLimits

0x7ce6,	// (0x00034dce) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003c947) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003c947) popup_note_image_window_t

0x7b74,	// (0x00034c5c) bg_popup_window_pane_cp7_ParamLimits

0x7b74,	// (0x00034c5c) bg_popup_window_pane_cp7

0x7ba4,	// (0x00034c8c) popup_note_wait_window_g1_ParamLimits

0x7ba4,	// (0x00034c8c) popup_note_wait_window_g1

0x7bb0,	// (0x00034c98) popup_note_wait_window_g2_ParamLimits

0x7bb0,	// (0x00034c98) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003c930) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003c930) popup_note_wait_window_g

0x7bc8,	// (0x00034cb0) popup_note_wait_window_t1_ParamLimits

0x7bc8,	// (0x00034cb0) popup_note_wait_window_t1

0x7bef,	// (0x00034cd7) popup_note_wait_window_t2_ParamLimits

0x7bef,	// (0x00034cd7) popup_note_wait_window_t2

0x7c0c,	// (0x00034cf4) popup_note_wait_window_t3_ParamLimits

0x7c0c,	// (0x00034cf4) popup_note_wait_window_t3

0x7c1f,	// (0x00034d07) popup_note_wait_window_t4_ParamLimits

0x7c1f,	// (0x00034d07) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003c937) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003c937) popup_note_wait_window_t

0x7c44,	// (0x00034d2c) wait_bar_pane_ParamLimits

0x7c44,	// (0x00034d2c) wait_bar_pane

0x61f5,	// (0x000332dd) wait_anim_pane

0x61f5,	// (0x000332dd) wait_border_pane

0x61eb,	// (0x000332d3) wait_anim_pane_g1

0x61eb,	// (0x000332d3) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0003c7f0) wait_anim_pane_g

0x7b24,	// (0x00034c0c) wait_border_pane_g1

0x7b2d,	// (0x00034c15) wait_border_pane_g2

0x7b36,	// (0x00034c1e) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003c929) wait_border_pane_g

0x7994,	// (0x00034a7c) bg_popup_window_pane_cp16_ParamLimits

0x7994,	// (0x00034a7c) bg_popup_window_pane_cp16

0x7a94,	// (0x00034b7c) indicator_popup_pane_cp4_ParamLimits

0x7a94,	// (0x00034b7c) indicator_popup_pane_cp4

0x7aa8,	// (0x00034b90) popup_query_data_window_t1_ParamLimits

0x7aa8,	// (0x00034b90) popup_query_data_window_t1

0x7aba,	// (0x00034ba2) popup_query_data_window_t2_ParamLimits

0x7aba,	// (0x00034ba2) popup_query_data_window_t2

0x7ad3,	// (0x00034bbb) popup_query_data_window_t3_ParamLimits

0x7ad3,	// (0x00034bbb) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003c922) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003c922) popup_query_data_window_t

0x7aed,	// (0x00034bd5) query_popup_data_pane_ParamLimits

0x7aed,	// (0x00034bd5) query_popup_data_pane

0x7b01,	// (0x00034be9) query_popup_data_pane_cp1_ParamLimits

0x7b01,	// (0x00034be9) query_popup_data_pane_cp1

0x7994,	// (0x00034a7c) bg_popup_window_pane_cp10_ParamLimits

0x7994,	// (0x00034a7c) bg_popup_window_pane_cp10

0x79c6,	// (0x00034aae) indicator_popup_pane_ParamLimits

0x79c6,	// (0x00034aae) indicator_popup_pane

0x79e8,	// (0x00034ad0) popup_query_code_window_t1_ParamLimits

0x79e8,	// (0x00034ad0) popup_query_code_window_t1

0x7a02,	// (0x00034aea) popup_query_code_window_t2_ParamLimits

0x7a02,	// (0x00034aea) popup_query_code_window_t2

0x7a4b,	// (0x00034b33) popup_query_code_window_t3_ParamLimits

0x7a4b,	// (0x00034b33) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003c91b) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003c91b) popup_query_code_window_t

0x7a7a,	// (0x00034b62) query_popup_pane_ParamLimits

0x7a7a,	// (0x00034b62) query_popup_pane

0x643c,	// (0x00033524) bg_popup_window_pane_cp15_ParamLimits

0x643c,	// (0x00033524) bg_popup_window_pane_cp15

0x645a,	// (0x00033542) indicator_popup_pane_cp1_ParamLimits

0x645a,	// (0x00033542) indicator_popup_pane_cp1

0x646d,	// (0x00033555) indicator_popup_pane_cp2_ParamLimits

0x646d,	// (0x00033555) indicator_popup_pane_cp2

0x6480,	// (0x00033568) popup_query_data_code_window_g1_ParamLimits

0x6480,	// (0x00033568) popup_query_data_code_window_g1

0x6493,	// (0x0003357b) popup_query_data_code_window_t1_ParamLimits

0x6493,	// (0x0003357b) popup_query_data_code_window_t1

0x64a5,	// (0x0003358d) popup_query_data_code_window_t2_ParamLimits

0x64a5,	// (0x0003358d) popup_query_data_code_window_t2

0x64b7,	// (0x0003359f) popup_query_data_code_window_t3_ParamLimits

0x64b7,	// (0x0003359f) popup_query_data_code_window_t3

0x64cd,	// (0x000335b5) popup_query_data_code_window_t4_ParamLimits

0x64cd,	// (0x000335b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003c672) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003c672) popup_query_data_code_window_t

0x70dc,	// (0x000341c4) list_single_midp_graphic_pane_g3

0x64e5,	// (0x000335cd) query_popup_data_pane_cp2_ParamLimits

0x64f8,	// (0x000335e0) query_popup_pane_cp2_ParamLimits

0x64f8,	// (0x000335e0) query_popup_pane_cp2

0x61f5,	// (0x000332dd) bg_popup_window_pane_cp11

0x798c,	// (0x00034a74) heading_pane_cp5

0x6587,	// (0x0003366f) listscroll_popup_info_pane

0x61f5,	// (0x000332dd) input_focus_pane_cp3

0x650b,	// (0x000335f3) query_popup_pane_t1

0x6519,	// (0x00033601) list_popup_info_pane_ParamLimits

0x6519,	// (0x00033601) list_popup_info_pane

0x6528,	// (0x00033610) listscroll_popup_info_pane_g1

0x6530,	// (0x00033618) scroll_pane_cp7

0x6538,	// (0x00033620) popup_info_list_pane_t1_ParamLimits

0x6538,	// (0x00033620) popup_info_list_pane_t1

0x6552,	// (0x0003363a) popup_info_list_pane_t2_ParamLimits

0x6552,	// (0x0003363a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003c67b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003c67b) popup_info_list_pane_t

0x61f5,	// (0x000332dd) bg_popup_window_pane_cp12

0x88d9,	// (0x000359c1) find_popup_pane

0x6243,	// (0x0003332b) bg_popup_window_pane_cp3

0x656c,	// (0x00033654) heading_pane_cp3

0x6578,	// (0x00033660) listscroll_popup_graphic_pane

0x61f5,	// (0x000332dd) bg_popup_window_pane_cp4

0x1d30,	// (0x0002ee18) heading_pane_cp4

0x6587,	// (0x0003366f) listscroll_popup_colour_pane

0x658f,	// (0x00033677) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x658f,	// (0x00033677) cell_large_graphic_colour_none_popup_pane

0x1d38,	// (0x0002ee20) grid_large_graphic_colour_popup_pane_ParamLimits

0x1d38,	// (0x0002ee20) grid_large_graphic_colour_popup_pane

0x659f,	// (0x00033687) listscroll_popup_colour_pane_g1_ParamLimits

0x659f,	// (0x00033687) listscroll_popup_colour_pane_g1

0x65b6,	// (0x0003369e) listscroll_popup_colour_pane_g2_ParamLimits

0x65b6,	// (0x0003369e) listscroll_popup_colour_pane_g2

0x65cd,	// (0x000336b5) listscroll_popup_colour_pane_g3_ParamLimits

0x65cd,	// (0x000336b5) listscroll_popup_colour_pane_g3

0x1d54,	// (0x0002ee3c) listscroll_popup_colour_pane_g4_ParamLimits

0x1d54,	// (0x0002ee3c) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003c680) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003c680) listscroll_popup_colour_pane_g

0x65dd,	// (0x000336c5) scroll_pane_cp6_ParamLimits

0x65dd,	// (0x000336c5) scroll_pane_cp6

0x1d63,	// (0x0002ee4b) cell_large_graphic_colour_popup_pane_ParamLimits

0x1d63,	// (0x0002ee4b) cell_large_graphic_colour_popup_pane

0x65ef,	// (0x000336d7) cell_large_graphic_colour_none_popup_pane_t1

0x61f5,	// (0x000332dd) grid_highlight_pane_cp5

0x65fe,	// (0x000336e6) cell_large_graphic_colour_popup_pane_g1

0x6606,	// (0x000336ee) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003c689) cell_large_graphic_colour_popup_pane_g

0x660e,	// (0x000336f6) cell_large_graphic_colour_popup_pane_g2_copy1

0x6617,	// (0x000336ff) grid_highlight_pane_cp4

0x661f,	// (0x00033707) bg_popup_window_pane_cp8_ParamLimits

0x661f,	// (0x00033707) bg_popup_window_pane_cp8

0x663a,	// (0x00033722) popup_snote_single_text_window_g1_ParamLimits

0x663a,	// (0x00033722) popup_snote_single_text_window_g1

0x664c,	// (0x00033734) popup_snote_single_text_window_t1_ParamLimits

0x664c,	// (0x00033734) popup_snote_single_text_window_t1

0x665f,	// (0x00033747) popup_snote_single_text_window_t2_ParamLimits

0x665f,	// (0x00033747) popup_snote_single_text_window_t2

0x6672,	// (0x0003375a) popup_snote_single_text_window_t3_ParamLimits

0x6672,	// (0x0003375a) popup_snote_single_text_window_t3

0x66ab,	// (0x00033793) popup_snote_single_text_window_t4_ParamLimits

0x66ab,	// (0x00033793) popup_snote_single_text_window_t4

0x66df,	// (0x000337c7) popup_snote_single_text_window_t5_ParamLimits

0x66df,	// (0x000337c7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003c68e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003c68e) popup_snote_single_text_window_t

0x670e,	// (0x000337f6) bg_popup_window_pane_cp9_ParamLimits

0x670e,	// (0x000337f6) bg_popup_window_pane_cp9

0x663a,	// (0x00033722) popup_snote_single_graphic_window_g1_ParamLimits

0x663a,	// (0x00033722) popup_snote_single_graphic_window_g1

0x671c,	// (0x00033804) popup_snote_single_graphic_window_g2_ParamLimits

0x671c,	// (0x00033804) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003c699) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003c699) popup_snote_single_graphic_window_g

0x6728,	// (0x00033810) popup_snote_single_graphic_window_t1_ParamLimits

0x6728,	// (0x00033810) popup_snote_single_graphic_window_t1

0x673b,	// (0x00033823) popup_snote_single_graphic_window_t2_ParamLimits

0x673b,	// (0x00033823) popup_snote_single_graphic_window_t2

0x6672,	// (0x0003375a) popup_snote_single_graphic_window_t3_ParamLimits

0x6672,	// (0x0003375a) popup_snote_single_graphic_window_t3

0x66ab,	// (0x00033793) popup_snote_single_graphic_window_t4_ParamLimits

0x66ab,	// (0x00033793) popup_snote_single_graphic_window_t4

0x66df,	// (0x000337c7) popup_snote_single_graphic_window_t5_ParamLimits

0x66df,	// (0x000337c7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003c69e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003c69e) popup_snote_single_graphic_window_t

0x8859,	// (0x00035941) grid_graphic_popup_pane_ParamLimits

0x8859,	// (0x00035941) grid_graphic_popup_pane

0x887d,	// (0x00035965) listscroll_popup_graphic_pane_g1_ParamLimits

0x887d,	// (0x00035965) listscroll_popup_graphic_pane_g1

0xc23a,	// (0x00039322) listscroll_popup_graphic_pane_g2_ParamLimits

0xc23a,	// (0x00039322) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003ca98) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003ca98) listscroll_popup_graphic_pane_g

0x8891,	// (0x00035979) scroll_pane_cp5

0xc1fd,	// (0x000392e5) cell_graphic_popup_pane_ParamLimits

0xc1fd,	// (0x000392e5) cell_graphic_popup_pane

0x8824,	// (0x0003590c) cell_graphic_popup_pane_g1

0x882c,	// (0x00035914) cell_graphic_popup_pane_g2

0x660e,	// (0x000336f6) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003ca91) cell_graphic_popup_pane_g

0x8835,	// (0x0003591d) cell_graphic_popup_pane_t2

0x6617,	// (0x000336ff) grid_highlight_pane_cp3

0x6760,	// (0x00033848) list_gen_pane_ParamLimits

0x6760,	// (0x00033848) list_gen_pane

0x6788,	// (0x00033870) scroll_pane

0xc1ba,	// (0x000392a2) bg_list_pane_g1_ParamLimits

0xc1ba,	// (0x000392a2) bg_list_pane_g1

0x87d3,	// (0x000358bb) bg_list_pane_g2_ParamLimits

0x87d3,	// (0x000358bb) bg_list_pane_g2

0x87e6,	// (0x000358ce) bg_list_pane_g3_ParamLimits

0x87e6,	// (0x000358ce) bg_list_pane_g3

0x87f8,	// (0x000358e0) bg_list_pane_g4_ParamLimits

0x87f8,	// (0x000358e0) bg_list_pane_g4

0xc1d5,	// (0x000392bd) bg_list_pane_g5_ParamLimits

0xc1d5,	// (0x000392bd) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003ca86) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003ca86) bg_list_pane_g

0xc175,	// (0x0003925d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_double2_graphic_large_graphic_pane

0xc175,	// (0x0003925d) list_double2_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_double2_graphic_pane

0xc175,	// (0x0003925d) list_double2_large_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_double2_large_graphic_pane

0xc175,	// (0x0003925d) list_double2_pane_ParamLimits

0xc175,	// (0x0003925d) list_double2_pane

0xc175,	// (0x0003925d) list_double_graphic_heading_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_graphic_heading_pane

0xc175,	// (0x0003925d) list_double_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_graphic_pane

0xc175,	// (0x0003925d) list_double_heading_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_heading_pane

0xc175,	// (0x0003925d) list_double_large_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_large_graphic_pane

0xc175,	// (0x0003925d) list_double_number_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_number_pane

0xc175,	// (0x0003925d) list_double_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_pane

0xc175,	// (0x0003925d) list_double_time_pane_ParamLimits

0xc175,	// (0x0003925d) list_double_time_pane

0xc175,	// (0x0003925d) list_setting_number_pane_ParamLimits

0xc175,	// (0x0003925d) list_setting_number_pane

0xc175,	// (0x0003925d) list_setting_pane_ParamLimits

0xc175,	// (0x0003925d) list_setting_pane

0xc186,	// (0x0003926e) list_single_2graphic_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_2graphic_pane

0xc186,	// (0x0003926e) list_single_graphic_heading_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_graphic_heading_pane

0xc186,	// (0x0003926e) list_single_graphic_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_graphic_pane

0xc186,	// (0x0003926e) list_single_heading_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_heading_pane

0xc175,	// (0x0003925d) list_single_large_graphic_pane_ParamLimits

0xc175,	// (0x0003925d) list_single_large_graphic_pane

0xc186,	// (0x0003926e) list_single_number_heading_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_number_heading_pane

0xc186,	// (0x0003926e) list_single_number_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_number_pane

0xc186,	// (0x0003926e) list_single_pane_ParamLimits

0xc186,	// (0x0003926e) list_single_pane

0x61f5,	// (0x000332dd) list_highlight_pane_cp1

0x71d7,	// (0x000342bf) list_single_pane_g1_ParamLimits

0x71d7,	// (0x000342bf) list_single_pane_g1

0x48dd,	// (0x000319c5) list_single_pane_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_single_pane_g

0x348f,	// (0x00030577) list_single_pane_t1_ParamLimits

0x348f,	// (0x00030577) list_single_pane_t1

0x71d7,	// (0x000342bf) list_single_number_pane_g1_ParamLimits

0x71d7,	// (0x000342bf) list_single_number_pane_g1

0x48dd,	// (0x000319c5) list_single_number_pane_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_single_number_pane_g

0x3268,	// (0x00030350) list_single_number_pane_t1_ParamLimits

0x3268,	// (0x00030350) list_single_number_pane_t1

0xade0,	// (0x00037ec8) list_single_number_pane_t2_ParamLimits

0xade0,	// (0x00037ec8) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003ca47) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003ca47) list_single_number_pane_t

0xa813,	// (0x000378fb) list_single_graphic_pane_g1_ParamLimits

0xa813,	// (0x000378fb) list_single_graphic_pane_g1

0x71d7,	// (0x000342bf) list_single_graphic_pane_g2_ParamLimits

0x71d7,	// (0x000342bf) list_single_graphic_pane_g2

0x48dd,	// (0x000319c5) list_single_graphic_pane_g3_ParamLimits

0x48dd,	// (0x000319c5) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003c6a9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003c6a9) list_single_graphic_pane_g

0xa81f,	// (0x00037907) list_single_graphic_pane_t1_ParamLimits

0xa81f,	// (0x00037907) list_single_graphic_pane_t1

0xa835,	// (0x0003791d) list_single_heading_pane_g1_ParamLimits

0xa835,	// (0x0003791d) list_single_heading_pane_g1

0x48dd,	// (0x000319c5) list_single_heading_pane_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003c6b0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003c6b0) list_single_heading_pane_g

0xa848,	// (0x00037930) list_single_heading_pane_t1_ParamLimits

0xa848,	// (0x00037930) list_single_heading_pane_t1

0xb1d3,	// (0x000382bb) list_single_heading_pane_t2_ParamLimits

0xb1d3,	// (0x000382bb) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003c6b5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003c6b5) list_single_heading_pane_t

0x71d7,	// (0x000342bf) list_single_number_heading_pane_g1_ParamLimits

0x71d7,	// (0x000342bf) list_single_number_heading_pane_g1

0x48dd,	// (0x000319c5) list_single_number_heading_pane_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_single_number_heading_pane_g

0xa85e,	// (0x00037946) list_single_number_heading_pane_t1_ParamLimits

0xa85e,	// (0x00037946) list_single_number_heading_pane_t1

0x3459,	// (0x00030541) list_single_number_heading_pane_t2_ParamLimits

0x3459,	// (0x00030541) list_single_number_heading_pane_t2

0x346b,	// (0x00030553) list_single_number_heading_pane_t3_ParamLimits

0x346b,	// (0x00030553) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0003c6bf) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0003c6bf) list_single_number_heading_pane_t

0xa874,	// (0x0003795c) list_single_graphic_heading_pane_g1_ParamLimits

0xa874,	// (0x0003795c) list_single_graphic_heading_pane_g1

0xb1e5,	// (0x000382cd) list_single_graphic_heading_pane_g4_ParamLimits

0xb1e5,	// (0x000382cd) list_single_graphic_heading_pane_g4

0x48dd,	// (0x000319c5) list_single_graphic_heading_pane_g5_ParamLimits

0x48dd,	// (0x000319c5) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0003c6c6) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0003c6c6) list_single_graphic_heading_pane_g

0xa85e,	// (0x00037946) list_single_graphic_heading_pane_t1_ParamLimits

0xa85e,	// (0x00037946) list_single_graphic_heading_pane_t1

0xa88a,	// (0x00037972) list_single_graphic_heading_pane_t2_ParamLimits

0xa88a,	// (0x00037972) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003c6cd) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003c6cd) list_single_graphic_heading_pane_t

0x34a5,	// (0x0003058d) list_single_large_graphic_pane_g1_ParamLimits

0x34a5,	// (0x0003058d) list_single_large_graphic_pane_g1

0x34b1,	// (0x00030599) list_single_large_graphic_pane_g2_ParamLimits

0x34b1,	// (0x00030599) list_single_large_graphic_pane_g2

0x34bd,	// (0x000305a5) list_single_large_graphic_pane_g3_ParamLimits

0x34bd,	// (0x000305a5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0003c6d2) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0003c6d2) list_single_large_graphic_pane_g

0x7b2d,	// (0x00034c15) wait_border_pane_g2_copy1

0xa8a2,	// (0x0003798a) list_single_large_graphic_pane_g4_cp2

0x34c9,	// (0x000305b1) list_single_large_graphic_pane_t1_ParamLimits

0x34c9,	// (0x000305b1) list_single_large_graphic_pane_t1

0x6826,	// (0x0003390e) list_double_pane_g1_ParamLimits

0x6826,	// (0x0003390e) list_double_pane_g1

0x3e1d,	// (0x00030f05) list_double_pane_g2_ParamLimits

0x3e1d,	// (0x00030f05) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0003c6d9) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0003c6d9) list_double_pane_g

0xa8aa,	// (0x00037992) list_double_pane_t1_ParamLimits

0xa8aa,	// (0x00037992) list_double_pane_t1

0xa8c0,	// (0x000379a8) list_double_pane_t2_ParamLimits

0xa8c0,	// (0x000379a8) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0003c6de) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0003c6de) list_double_pane_t

0xa8d2,	// (0x000379ba) list_double2_pane_g1_ParamLimits

0xa8d2,	// (0x000379ba) list_double2_pane_g1

0xa8e3,	// (0x000379cb) list_double2_pane_g2_ParamLimits

0xa8e3,	// (0x000379cb) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0003c6e3) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0003c6e3) list_double2_pane_g

0xa8ef,	// (0x000379d7) list_double2_pane_t1_ParamLimits

0xa8ef,	// (0x000379d7) list_double2_pane_t1

0xa905,	// (0x000379ed) list_double2_pane_t2_ParamLimits

0xa905,	// (0x000379ed) list_double2_pane_t2

0x0001,

0xf600,	// (0x0003c6e8) list_double2_pane_t_ParamLimits

0xf600,	// (0x0003c6e8) list_double2_pane_t

0x6826,	// (0x0003390e) list_double_number_pane_g1_ParamLimits

0x6826,	// (0x0003390e) list_double_number_pane_g1

0x3e1d,	// (0x00030f05) list_double_number_pane_g2_ParamLimits

0x3e1d,	// (0x00030f05) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0003c6d9) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0003c6d9) list_double_number_pane_g

0xa917,	// (0x000379ff) list_double_number_pane_t1_ParamLimits

0xa917,	// (0x000379ff) list_double_number_pane_t1

0xa929,	// (0x00037a11) list_double_number_pane_t2_ParamLimits

0xa929,	// (0x00037a11) list_double_number_pane_t2

0xa93f,	// (0x00037a27) list_double_number_pane_t3_ParamLimits

0xa93f,	// (0x00037a27) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0003c6ed) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0003c6ed) list_double_number_pane_t

0xa951,	// (0x00037a39) list_double_graphic_pane_g1_ParamLimits

0xa951,	// (0x00037a39) list_double_graphic_pane_g1

0xb1f6,	// (0x000382de) list_double_graphic_pane_g2_ParamLimits

0xb1f6,	// (0x000382de) list_double_graphic_pane_g2

0xb205,	// (0x000382ed) list_double_graphic_pane_g3_ParamLimits

0xb205,	// (0x000382ed) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0003c6f4) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003c6f4) list_double_graphic_pane_g

0xa969,	// (0x00037a51) list_double_graphic_pane_t1_ParamLimits

0xa969,	// (0x00037a51) list_double_graphic_pane_t1

0xa97f,	// (0x00037a67) list_double_graphic_pane_t2_ParamLimits

0xa97f,	// (0x00037a67) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0003c6fd) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0003c6fd) list_double_graphic_pane_t

0xa991,	// (0x00037a79) list_double2_graphic_pane_g1_ParamLimits

0xa991,	// (0x00037a79) list_double2_graphic_pane_g1

0x70d0,	// (0x000341b8) list_double2_graphic_pane_g2_ParamLimits

0x70d0,	// (0x000341b8) list_double2_graphic_pane_g2

0xb211,	// (0x000382f9) list_double2_graphic_pane_g3_ParamLimits

0xb211,	// (0x000382f9) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0003c702) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0003c702) list_double2_graphic_pane_g

0xa99d,	// (0x00037a85) list_double2_graphic_pane_t1_ParamLimits

0xa99d,	// (0x00037a85) list_double2_graphic_pane_t1

0xa9b3,	// (0x00037a9b) list_double2_graphic_pane_t2_ParamLimits

0xa9b3,	// (0x00037a9b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003c709) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003c709) list_double2_graphic_pane_t

0xa9c5,	// (0x00037aad) list_double_large_graphic_pane_g1_ParamLimits

0xa9c5,	// (0x00037aad) list_double_large_graphic_pane_g1

0xa9e4,	// (0x00037acc) list_double_large_graphic_pane_g2_ParamLimits

0xa9e4,	// (0x00037acc) list_double_large_graphic_pane_g2

0x3e1d,	// (0x00030f05) list_double_large_graphic_pane_g3_ParamLimits

0x3e1d,	// (0x00030f05) list_double_large_graphic_pane_g3

0xa9fa,	// (0x00037ae2) list_double_large_graphic_pane_g4_ParamLimits

0xa9fa,	// (0x00037ae2) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0003c70e) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0003c70e) list_double_large_graphic_pane_g

0xaa0b,	// (0x00037af3) list_double_large_graphic_pane_t1_ParamLimits

0xaa0b,	// (0x00037af3) list_double_large_graphic_pane_t1

0xaa24,	// (0x00037b0c) list_double_large_graphic_pane_t2_ParamLimits

0xaa24,	// (0x00037b0c) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003c719) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003c719) list_double_large_graphic_pane_t

0xaa36,	// (0x00037b1e) list_double2_large_graphic_pane_g1_ParamLimits

0xaa36,	// (0x00037b1e) list_double2_large_graphic_pane_g1

0xb21d,	// (0x00038305) list_double2_large_graphic_pane_g2_ParamLimits

0xb21d,	// (0x00038305) list_double2_large_graphic_pane_g2

0xb211,	// (0x000382f9) list_double2_large_graphic_pane_g3_ParamLimits

0xb211,	// (0x000382f9) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0003c71e) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0003c71e) list_double2_large_graphic_pane_g

0xaa42,	// (0x00037b2a) list_double2_large_graphic_pane_t1_ParamLimits

0xaa42,	// (0x00037b2a) list_double2_large_graphic_pane_t1

0xaa58,	// (0x00037b40) list_double2_large_graphic_pane_t2_ParamLimits

0xaa58,	// (0x00037b40) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003c725) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003c725) list_double2_large_graphic_pane_t

0xaa6a,	// (0x00037b52) list_double_heading_pane_g1_ParamLimits

0xaa6a,	// (0x00037b52) list_double_heading_pane_g1

0xaa7b,	// (0x00037b63) list_double_heading_pane_g2_ParamLimits

0xaa7b,	// (0x00037b63) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003c72a) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003c72a) list_double_heading_pane_g

0xaa87,	// (0x00037b6f) list_double_heading_pane_t1_ParamLimits

0xaa87,	// (0x00037b6f) list_double_heading_pane_t1

0xa905,	// (0x000379ed) list_double_heading_pane_t2_ParamLimits

0xa905,	// (0x000379ed) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0003c72f) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0003c72f) list_double_heading_pane_t

0xaa9d,	// (0x00037b85) list_double_graphic_heading_pane_g1_ParamLimits

0xaa9d,	// (0x00037b85) list_double_graphic_heading_pane_g1

0xaa6a,	// (0x00037b52) list_double_graphic_heading_pane_g2_ParamLimits

0xaa6a,	// (0x00037b52) list_double_graphic_heading_pane_g2

0xaa7b,	// (0x00037b63) list_double_graphic_heading_pane_g3_ParamLimits

0xaa7b,	// (0x00037b63) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0003c734) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0003c734) list_double_graphic_heading_pane_g

0xaaa9,	// (0x00037b91) list_double_graphic_heading_pane_t1_ParamLimits

0xaaa9,	// (0x00037b91) list_double_graphic_heading_pane_t1

0xa9b3,	// (0x00037a9b) list_double_graphic_heading_pane_t2_ParamLimits

0xa9b3,	// (0x00037a9b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003c73b) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003c73b) list_double_graphic_heading_pane_t

0xaabf,	// (0x00037ba7) list_double_time_pane_g1_ParamLimits

0xaabf,	// (0x00037ba7) list_double_time_pane_g1

0xaad0,	// (0x00037bb8) list_double_time_pane_g2_ParamLimits

0xaad0,	// (0x00037bb8) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0003c740) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0003c740) list_double_time_pane_g

0xaadc,	// (0x00037bc4) list_double_time_pane_t1_ParamLimits

0xaadc,	// (0x00037bc4) list_double_time_pane_t1

0xaaf2,	// (0x00037bda) list_double_time_pane_t2_ParamLimits

0xaaf2,	// (0x00037bda) list_double_time_pane_t2

0xab04,	// (0x00037bec) list_double_time_pane_t3_ParamLimits

0xab04,	// (0x00037bec) list_double_time_pane_t3

0xab16,	// (0x00037bfe) list_double_time_pane_t4_ParamLimits

0xab16,	// (0x00037bfe) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0003c745) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0003c745) list_double_time_pane_t

0xab28,	// (0x00037c10) list_setting_pane_g1_ParamLimits

0xab28,	// (0x00037c10) list_setting_pane_g1

0xab34,	// (0x00037c1c) list_setting_pane_g2_ParamLimits

0xab34,	// (0x00037c1c) list_setting_pane_g2

0x0001,

0xf666,	// (0x0003c74e) list_setting_pane_g_ParamLimits

0xf666,	// (0x0003c74e) list_setting_pane_g

0xab40,	// (0x00037c28) list_setting_pane_t1_ParamLimits

0xab40,	// (0x00037c28) list_setting_pane_t1

0xab5a,	// (0x00037c42) list_setting_pane_t2_ParamLimits

0xab5a,	// (0x00037c42) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0003c753) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0003c753) list_setting_pane_t

0xab97,	// (0x00037c7f) set_value_pane_cp_ParamLimits

0xab97,	// (0x00037c7f) set_value_pane_cp

0xaba3,	// (0x00037c8b) list_setting_number_pane_g1_ParamLimits

0xaba3,	// (0x00037c8b) list_setting_number_pane_g1

0xabaf,	// (0x00037c97) list_setting_number_pane_g2_ParamLimits

0xabaf,	// (0x00037c97) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0003c75a) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0003c75a) list_setting_number_pane_g

0xabbb,	// (0x00037ca3) list_setting_number_pane_t1_ParamLimits

0xabbb,	// (0x00037ca3) list_setting_number_pane_t1

0xabd4,	// (0x00037cbc) list_setting_number_pane_t2_ParamLimits

0xabd4,	// (0x00037cbc) list_setting_number_pane_t2

0xabee,	// (0x00037cd6) list_setting_number_pane_t3_ParamLimits

0xabee,	// (0x00037cd6) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0003c75f) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0003c75f) list_setting_number_pane_t

0xab97,	// (0x00037c7f) set_value_pane_ParamLimits

0xab97,	// (0x00037c7f) set_value_pane

0x67c8,	// (0x000338b0) bg_set_opt_pane_ParamLimits

0x67c8,	// (0x000338b0) bg_set_opt_pane

0x2efe,	// (0x0002ffe6) set_value_pane_t1

0x67e9,	// (0x000338d1) slider_set_pane_cp3

0x1d8c,	// (0x0002ee74) volume_small_pane_cp

0x67f2,	// (0x000338da) list_form_gen_pane

0x67fb,	// (0x000338e3) scroll_pane_cp8

0xac31,	// (0x00037d19) form_field_data_pane_ParamLimits

0xac31,	// (0x00037d19) form_field_data_pane

0xac48,	// (0x00037d30) form_field_data_wide_pane_ParamLimits

0xac48,	// (0x00037d30) form_field_data_wide_pane

0x2f53,	// (0x0003003b) form_field_popup_pane_ParamLimits

0x2f53,	// (0x0003003b) form_field_popup_pane

0x2f6b,	// (0x00030053) form_field_popup_wide_pane_ParamLimits

0x2f6b,	// (0x00030053) form_field_popup_wide_pane

0x2f82,	// (0x0003006a) form_field_slider_pane_ParamLimits

0x2f82,	// (0x0003006a) form_field_slider_pane

0x2f95,	// (0x0003007d) form_field_slider_wide_pane_ParamLimits

0x2f95,	// (0x0003007d) form_field_slider_wide_pane

0x680c,	// (0x000338f4) data_form_pane

0xac70,	// (0x00037d58) form_field_data_pane_t1

0x6818,	// (0x00033900) input_focus_pane

0x2fc8,	// (0x000300b0) data_form_wide_pane

0x2fe5,	// (0x000300cd) form_field_data_wide_pane_t1

0x662c,	// (0x00033714) input_focus_pane_cp6

0xac88,	// (0x00037d70) form_field_popup_pane_t1

0x6818,	// (0x00033900) input_focus_pane_cp7

0x6846,	// (0x0003392e) list_form_pane

0x3027,	// (0x0003010f) form_field_popup_wide_pane_t1

0x6818,	// (0x00033900) input_focus_pane_cp8

0x6852,	// (0x0003393a) list_form_wide_pane

0xaca8,	// (0x00037d90) form_field_slider_pane_t1_ParamLimits

0xaca8,	// (0x00037d90) form_field_slider_pane_t1

0xacbe,	// (0x00037da6) form_field_slider_pane_t2_ParamLimits

0xacbe,	// (0x00037da6) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0003c76f) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0003c76f) form_field_slider_pane_t

0x6386,	// (0x0003346e) input_focus_pane_cp9_ParamLimits

0x6386,	// (0x0003346e) input_focus_pane_cp9

0xacd3,	// (0x00037dbb) slider_cont_pane_ParamLimits

0xacd3,	// (0x00037dbb) slider_cont_pane

0x685e,	// (0x00033946) form_field_slider_wide_pane_t1_ParamLimits

0x685e,	// (0x00033946) form_field_slider_wide_pane_t1

0x3083,	// (0x0003016b) form_field_slider_wide_pane_t2_ParamLimits

0x3083,	// (0x0003016b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0003c774) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0003c774) form_field_slider_wide_pane_t

0x6386,	// (0x0003346e) input_focus_pane_cp10_ParamLimits

0x6386,	// (0x0003346e) input_focus_pane_cp10

0xace7,	// (0x00037dcf) slider_cont_pane_cp1_ParamLimits

0xace7,	// (0x00037dcf) slider_cont_pane_cp1

0xacfb,	// (0x00037de3) slider_form_pane_cp

0x6870,	// (0x00033958) input_focus_pane_g1

0x6878,	// (0x00033960) input_focus_pane_g2

0x6880,	// (0x00033968) input_focus_pane_g3

0x6888,	// (0x00033970) input_focus_pane_g4

0x6890,	// (0x00033978) input_focus_pane_g5

0x6898,	// (0x00033980) input_focus_pane_g6

0x68a0,	// (0x00033988) input_focus_pane_g7

0x68a8,	// (0x00033990) input_focus_pane_g8

0x68b0,	// (0x00033998) input_focus_pane_g9

0x61eb,	// (0x000332d3) input_focus_pane_g10

0x0009,

0xf691,	// (0x0003c779) input_focus_pane_g

0x7b36,	// (0x00034c1e) wait_border_pane_g3_copy1

0xad03,	// (0x00037deb) data_form_pane_t1

0x61eb,	// (0x000332d3) wait_anim_pane_g1_copy1

0xadf2,	// (0x00037eda) data_form_wide_pane_t1

0x30ca,	// (0x000301b2) list_form_graphic_pane_cp_ParamLimits

0x30ca,	// (0x000301b2) list_form_graphic_pane_cp

0x876f,	// (0x00035857) slider_form_pane_g1

0x8778,	// (0x00035860) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003ca77) slider_form_pane_g

0x30ca,	// (0x000301b2) list_form_graphic_pane_ParamLimits

0x30ca,	// (0x000301b2) list_form_graphic_pane

0x30db,	// (0x000301c3) list_form_graphic_pane_g1

0x30e3,	// (0x000301cb) list_form_graphic_pane_t1_ParamLimits

0x30e3,	// (0x000301cb) list_form_graphic_pane_t1

0x6243,	// (0x0003332b) list_highlight_pane_cp5_ParamLimits

0x6243,	// (0x0003332b) list_highlight_pane_cp5

0xad1b,	// (0x00037e03) find_pane_g1

0x68b8,	// (0x000339a0) input_find_pane

0xad24,	// (0x00037e0c) input_find_pane_g1_ParamLimits

0xad24,	// (0x00037e0c) input_find_pane_g1

0xad30,	// (0x00037e18) input_find_pane_t1_ParamLimits

0xad30,	// (0x00037e18) input_find_pane_t1

0xad45,	// (0x00037e2d) input_find_pane_t2_ParamLimits

0xad45,	// (0x00037e2d) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0003c78e) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0003c78e) input_find_pane_t

0x68c1,	// (0x000339a9) input_focus_pane_cp5_ParamLimits

0x68c1,	// (0x000339a9) input_focus_pane_cp5

0x68cf,	// (0x000339b7) bg_popup_window_pane_cp2_ParamLimits

0x68cf,	// (0x000339b7) bg_popup_window_pane_cp2

0x68dc,	// (0x000339c4) listscroll_menu_pane_ParamLimits

0x68dc,	// (0x000339c4) listscroll_menu_pane

0x1da1,	// (0x0002ee89) popup_submenu_window_ParamLimits

0x1da1,	// (0x0002ee89) popup_submenu_window

0x68e8,	// (0x000339d0) find_popup_pane_g1

0x68f0,	// (0x000339d8) input_popup_find_pane_cp

0x68c1,	// (0x000339a9) input_focus_pane_cp4_ParamLimits

0x68c1,	// (0x000339a9) input_focus_pane_cp4

0x68fa,	// (0x000339e2) input_popup_find_pane_t1_ParamLimits

0x68fa,	// (0x000339e2) input_popup_find_pane_t1

0x61f5,	// (0x000332dd) bg_popup_sub_pane_cp

0x6928,	// (0x00033a10) listscroll_popup_sub_pane

0x6930,	// (0x00033a18) list_submenu_pane_ParamLimits

0x6930,	// (0x00033a18) list_submenu_pane

0x6941,	// (0x00033a29) scroll_pane_cp4

0x6949,	// (0x00033a31) list_single_popup_submenu_pane_ParamLimits

0x6949,	// (0x00033a31) list_single_popup_submenu_pane

0x695c,	// (0x00033a44) list_single_popup_submenu_pane_g1

0x6964,	// (0x00033a4c) list_single_popup_submenu_pane_t1_ParamLimits

0x6964,	// (0x00033a4c) list_single_popup_submenu_pane_t1

0x6386,	// (0x0003346e) bg_active_tab_pane_cp1_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp1

0x6979,	// (0x00033a61) tabs_2_active_pane_g1

0x1dd1,	// (0x0002eeb9) tabs_2_active_pane_t1

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp1_ParamLimits

0x6386,	// (0x0003346e) bg_passive_tab_pane_cp1

0x6979,	// (0x00033a61) tabs_2_passive_pane_g1

0x1dd1,	// (0x0002eeb9) tabs_2_passive_pane_t1

0x6243,	// (0x0003332b) bg_active_tab_pane_cp4

0x1de3,	// (0x0002eecb) tabs_2_long_active_pane_t1

0x7451,	// (0x00034539) bg_passive_tab_pane_cp4

0x490c,	// (0x000319f4) list_single_midp_graphic_pane_g4_ParamLimits

0x6243,	// (0x0003332b) bg_active_tab_pane_cp5

0x1df6,	// (0x0002eede) tabs_3_long_active_pane_t1

0x7451,	// (0x00034539) bg_passive_tab_pane_cp5

0x490c,	// (0x000319f4) list_single_midp_graphic_pane_g4

0x6243,	// (0x0003332b) bg_popup_window_pane_cp13_ParamLimits

0x6243,	// (0x0003332b) bg_popup_window_pane_cp13

0x6998,	// (0x00033a80) listscroll_popup_fast_pane_ParamLimits

0x6998,	// (0x00033a80) listscroll_popup_fast_pane

0x69a7,	// (0x00033a8f) grid_popup_fast_pane_ParamLimits

0x69a7,	// (0x00033a8f) grid_popup_fast_pane

0x69b9,	// (0x00033aa1) scroll_pane_cp9_ParamLimits

0x69b9,	// (0x00033aa1) scroll_pane_cp9

0xe1ab,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe1ab,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2

0x69dd,	// (0x00033ac5) input_focus_pane_cp20_ParamLimits

0x69dd,	// (0x00033ac5) input_focus_pane_cp20

0x69eb,	// (0x00033ad3) query_popup_data_pane_t1_ParamLimits

0x69eb,	// (0x00033ad3) query_popup_data_pane_t1

0x69fe,	// (0x00033ae6) query_popup_data_pane_t2_ParamLimits

0x69fe,	// (0x00033ae6) query_popup_data_pane_t2

0x6a44,	// (0x00033b2c) query_popup_data_pane_t3_ParamLimits

0x6a44,	// (0x00033b2c) query_popup_data_pane_t3

0x6a85,	// (0x00033b6d) query_popup_data_pane_t4_ParamLimits

0x6a85,	// (0x00033b6d) query_popup_data_pane_t4

0x6ac1,	// (0x00033ba9) query_popup_data_pane_t5_ParamLimits

0x6ac1,	// (0x00033ba9) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0003c793) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0003c793) query_popup_data_pane_t

0x6870,	// (0x00033958) bg_set_opt_pane_g1

0x6878,	// (0x00033960) bg_set_opt_pane_g2

0x6880,	// (0x00033968) bg_set_opt_pane_g3

0x6888,	// (0x00033970) bg_set_opt_pane_g4

0x6890,	// (0x00033978) bg_set_opt_pane_g5

0x6898,	// (0x00033980) bg_set_opt_pane_g6

0x68a0,	// (0x00033988) bg_set_opt_pane_g7

0x68a8,	// (0x00033990) bg_set_opt_pane_g8

0x68b0,	// (0x00033998) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0003c79e) bg_set_opt_pane_g

0x40b7,	// (0x0003119f) control_top_pane_stacon_ParamLimits

0x40b7,	// (0x0003119f) control_top_pane_stacon

0x410a,	// (0x000311f2) signal_pane_stacon_ParamLimits

0x410a,	// (0x000311f2) signal_pane_stacon

0x6f5c,	// (0x00034044) stacon_top_pane_g1_ParamLimits

0x6f5c,	// (0x00034044) stacon_top_pane_g1

0x412f,	// (0x00031217) title_pane_stacon_ParamLimits

0x412f,	// (0x00031217) title_pane_stacon

0x4151,	// (0x00031239) uni_indicator_pane_stacon_ParamLimits

0x4151,	// (0x00031239) uni_indicator_pane_stacon

0x4166,	// (0x0003124e) battery_pane_stacon_ParamLimits

0x4166,	// (0x0003124e) battery_pane_stacon

0x41a6,	// (0x0003128e) control_bottom_pane_stacon_ParamLimits

0x41a6,	// (0x0003128e) control_bottom_pane_stacon

0x41c5,	// (0x000312ad) navi_pane_stacon_ParamLimits

0x41c5,	// (0x000312ad) navi_pane_stacon

0x6f7e,	// (0x00034066) stacon_bottom_pane_g1_ParamLimits

0x6f7e,	// (0x00034066) stacon_bottom_pane_g1

0x3e29,	// (0x00030f11) aid_levels_signal_lsc_ParamLimits

0x3e29,	// (0x00030f11) aid_levels_signal_lsc

0x3e40,	// (0x00030f28) signal_pane_stacon_g1_ParamLimits

0x3e40,	// (0x00030f28) signal_pane_stacon_g1

0x3e54,	// (0x00030f3c) signal_pane_stacon_g2_ParamLimits

0x3e54,	// (0x00030f3c) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0003c7b1) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003c7b1) signal_pane_stacon_g

0x3e89,	// (0x00030f71) title_pane_stacon_t1_ParamLimits

0x3e89,	// (0x00030f71) title_pane_stacon_t1

0x6b05,	// (0x00033bed) uni_indicator_pane_stacon_g1

0x6b0f,	// (0x00033bf7) uni_indicator_pane_stacon_g2

0x6b19,	// (0x00033c01) uni_indicator_pane_stacon_g3

0x6b23,	// (0x00033c0b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0003c7bd) uni_indicator_pane_stacon_g

0x3eae,	// (0x00030f96) control_top_pane_stacon_g1

0x3eb6,	// (0x00030f9e) control_top_pane_stacon_t1_ParamLimits

0x3eb6,	// (0x00030f9e) control_top_pane_stacon_t1

0x3eed,	// (0x00030fd5) aid_levels_battery_lsc_ParamLimits

0x3eed,	// (0x00030fd5) aid_levels_battery_lsc

0x3f05,	// (0x00030fed) battery_pane_stacon_g1_ParamLimits

0x3f05,	// (0x00030fed) battery_pane_stacon_g1

0x3f18,	// (0x00031000) battery_pane_stacon_g2_ParamLimits

0x3f18,	// (0x00031000) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0003c7c6) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0003c7c6) battery_pane_stacon_g

0x3f4e,	// (0x00031036) navi_icon_pane_stacon

0x3f62,	// (0x0003104a) navi_navi_pane_stacon

0x3f4e,	// (0x00031036) navi_text_pane_stacon

0x3eae,	// (0x00030f96) control_bottom_pane_stacon_g1

0x3f76,	// (0x0003105e) control_bottom_pane_stacon_t1_ParamLimits

0x3f76,	// (0x0003105e) control_bottom_pane_stacon_t1

0x1e08,	// (0x0002eef0) grid_app_pane_ParamLimits

0x1e08,	// (0x0002eef0) grid_app_pane

0x1e36,	// (0x0002ef1e) scroll_pane_cp15_ParamLimits

0x1e36,	// (0x0002ef1e) scroll_pane_cp15

0x1e49,	// (0x0002ef31) cell_app_pane_ParamLimits

0x1e49,	// (0x0002ef31) cell_app_pane

0x1e84,	// (0x0002ef6c) cell_app_pane_g1_ParamLimits

0x1e84,	// (0x0002ef6c) cell_app_pane_g1

0x6b47,	// (0x00033c2f) cell_app_pane_g2_ParamLimits

0x6b47,	// (0x00033c2f) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0003c7cb) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0003c7cb) cell_app_pane_g

0x1ea8,	// (0x0002ef90) cell_app_pane_t1_ParamLimits

0x1ea8,	// (0x0002ef90) cell_app_pane_t1

0x6b53,	// (0x00033c3b) grid_highlight_pane_ParamLimits

0x6b53,	// (0x00033c3b) grid_highlight_pane

0x6870,	// (0x00033958) cell_highlight_pane_g1

0x6878,	// (0x00033960) cell_highlight_pane_g2

0x6880,	// (0x00033968) cell_highlight_pane_g3

0x6888,	// (0x00033970) cell_highlight_pane_g4

0x6890,	// (0x00033978) cell_highlight_pane_g5

0x6898,	// (0x00033980) cell_highlight_pane_g6

0x68a0,	// (0x00033988) cell_highlight_pane_g7

0x68a8,	// (0x00033990) cell_highlight_pane_g8

0x68b0,	// (0x00033998) cell_highlight_pane_g9

0x61eb,	// (0x000332d3) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0003c779) cell_highlight_pane_g

0x6b64,	// (0x00033c4c) bg_scroll_pane

0x3fc0,	// (0x000310a8) scroll_handle_pane

0x6bab,	// (0x00033c93) scroll_bg_pane_g1

0x6bc0,	// (0x00033ca8) scroll_bg_pane_g2

0x6bd8,	// (0x00033cc0) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0003c7d0) scroll_bg_pane_g

0x6bed,	// (0x00033cd5) scroll_handle_focus_pane_ParamLimits

0x6bed,	// (0x00033cd5) scroll_handle_focus_pane

0x6bab,	// (0x00033c93) scroll_handle_pane_g1

0x6bfa,	// (0x00033ce2) scroll_handle_pane_g2

0x6bd8,	// (0x00033cc0) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0003c7d7) scroll_handle_pane_g

0x68c1,	// (0x000339a9) bg_popup_sub_pane_cp21_ParamLimits

0x68c1,	// (0x000339a9) bg_popup_sub_pane_cp21

0x6c0e,	// (0x00033cf6) popup_fep_japan_predictive_window_t1_ParamLimits

0x6c0e,	// (0x00033cf6) popup_fep_japan_predictive_window_t1

0x6c25,	// (0x00033d0d) popup_fep_japan_predictive_window_t2_ParamLimits

0x6c25,	// (0x00033d0d) popup_fep_japan_predictive_window_t2

0x6c58,	// (0x00033d40) popup_fep_japan_predictive_window_t3_ParamLimits

0x6c58,	// (0x00033d40) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0003c7de) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0003c7de) popup_fep_japan_predictive_window_t

0x61f5,	// (0x000332dd) bg_popup_sub_pane_cp23

0x6c8f,	// (0x00033d77) listscroll_japin_cand_pane

0x6c97,	// (0x00033d7f) popup_fep_japan_candidate_window_t1

0x6ca5,	// (0x00033d8d) candidate_pane_ParamLimits

0x6ca5,	// (0x00033d8d) candidate_pane

0x6cb7,	// (0x00033d9f) scroll_pane_cp30

0x6cbf,	// (0x00033da7) list_single_popup_jap_candidate_pane_ParamLimits

0x6cbf,	// (0x00033da7) list_single_popup_jap_candidate_pane

0x61f5,	// (0x000332dd) list_highlight_pane_cp30

0x6cd4,	// (0x00033dbc) list_single_popup_jap_candidate_pane_t1

0x6ce3,	// (0x00033dcb) level_1_signal

0x6cf0,	// (0x00033dd8) level_2_signal

0x6cfd,	// (0x00033de5) level_3_signal

0x6d0a,	// (0x00033df2) level_4_signal

0x6d17,	// (0x00033dff) level_5_signal

0x6d24,	// (0x00033e0c) level_6_signal

0x6d31,	// (0x00033e19) level_7_signal

0x6ce3,	// (0x00033dcb) level_1_battery

0x6cf0,	// (0x00033dd8) level_2_battery

0x6cfd,	// (0x00033de5) level_3_battery

0x6d0a,	// (0x00033df2) level_4_battery

0x6d17,	// (0x00033dff) level_5_battery

0x6d24,	// (0x00033e0c) level_6_battery

0x6d31,	// (0x00033e19) level_7_battery

0x6d56,	// (0x00033e3e) list_menu_pane_ParamLimits

0x6d56,	// (0x00033e3e) list_menu_pane

0x6d6c,	// (0x00033e54) scroll_pane_cp25_ParamLimits

0x6d6c,	// (0x00033e54) scroll_pane_cp25

0x6d85,	// (0x00033e6d) list_double2_graphic_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double2_graphic_pane_cp2

0x6d85,	// (0x00033e6d) list_double2_large_graphic_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double2_large_graphic_pane_cp2

0x6d85,	// (0x00033e6d) list_double2_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double2_pane_cp2

0x6d85,	// (0x00033e6d) list_double_graphic_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double_graphic_pane_cp2

0x6d85,	// (0x00033e6d) list_double_large_graphic_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double_large_graphic_pane_cp2

0x6d85,	// (0x00033e6d) list_double_number_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double_number_pane_cp2

0x6d85,	// (0x00033e6d) list_double_pane_cp2_ParamLimits

0x6d85,	// (0x00033e6d) list_double_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_2graphic_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_2graphic_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_graphic_heading_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_graphic_heading_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_graphic_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_graphic_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_heading_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_heading_pane_cp2

0x6d95,	// (0x00033e7d) list_single_large_graphic_pane_cp2_ParamLimits

0x6d95,	// (0x00033e7d) list_single_large_graphic_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_number_heading_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_number_heading_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_number_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_number_pane_cp2

0x1ec9,	// (0x0002efb1) list_single_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_pane_cp2

0x6daf,	// (0x00033e97) bg_popup_sub_pane_cp22

0x406f,	// (0x00031157) popup_side_volume_key_window_g1

0x4093,	// (0x0003117b) popup_side_volume_key_window_t1

0x40af,	// (0x00031197) volume_small_pane_cp1

0x6386,	// (0x0003346e) bg_popup_sub_pane_cp24_ParamLimits

0x6386,	// (0x0003346e) bg_popup_sub_pane_cp24

0x6dc5,	// (0x00033ead) fep_china_uni_candidate_pane_ParamLimits

0x6dc5,	// (0x00033ead) fep_china_uni_candidate_pane

0x6dd9,	// (0x00033ec1) fep_china_uni_entry_pane

0x6de9,	// (0x00033ed1) popup_fep_china_uni_window_g1

0x6e05,	// (0x00033eed) fep_china_uni_entry_pane_g1

0x6e0d,	// (0x00033ef5) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0003c80f) fep_china_uni_entry_pane_g

0x6e15,	// (0x00033efd) fep_entry_item_pane

0x6e1f,	// (0x00033f07) fep_candidate_item_pane

0x6e27,	// (0x00033f0f) fep_china_uni_candidate_pane_g1

0x6e2f,	// (0x00033f17) fep_china_uni_candidate_pane_g2

0x6e37,	// (0x00033f1f) fep_china_uni_candidate_pane_g3

0x6e3f,	// (0x00033f27) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0003c814) fep_china_uni_candidate_pane_g

0x61eb,	// (0x000332d3) fep_entry_item_pane_g1

0x6e47,	// (0x00033f2f) fep_entry_item_pane_t1_ParamLimits

0x6e47,	// (0x00033f2f) fep_entry_item_pane_t1

0x6e5d,	// (0x00033f45) fep_candidate_item_pane_t1_ParamLimits

0x6e5d,	// (0x00033f45) fep_candidate_item_pane_t1

0x6e72,	// (0x00033f5a) fep_candidate_item_pane_t2_ParamLimits

0x6e72,	// (0x00033f5a) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0003c81d) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0003c81d) fep_candidate_item_pane_t

0x6243,	// (0x0003332b) list_highlight_pane_cp31_ParamLimits

0x6243,	// (0x0003332b) list_highlight_pane_cp31

0x6e84,	// (0x00033f6c) level_1_signal_lsc

0x6e8d,	// (0x00033f75) level_2_signal_lsc

0x6e96,	// (0x00033f7e) level_3_signal_lsc

0x6e9f,	// (0x00033f87) level_4_signal_lsc

0x6ea8,	// (0x00033f90) level_5_signal_lsc

0x6eb1,	// (0x00033f99) level_6_signal_lsc

0x6eba,	// (0x00033fa2) level_7_signal_lsc

0x6eba,	// (0x00033fa2) level_1_battery_lsc

0x6ec3,	// (0x00033fab) level_2_battery_lsc

0x6ecc,	// (0x00033fb4) level_3_battery_lsc

0x6ed5,	// (0x00033fbd) level_4_battery_lsc

0x6ede,	// (0x00033fc6) level_5_battery_lsc

0x6ee7,	// (0x00033fcf) level_6_battery_lsc

0x6e84,	// (0x00033f6c) level_7_battery_lsc

0x6ef0,	// (0x00033fd8) scroll_handle_focus_pane_g1

0x6ef9,	// (0x00033fe1) scroll_handle_focus_pane_g2

0x6f02,	// (0x00033fea) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0003c822) scroll_handle_focus_pane_g

0xad5a,	// (0x00037e42) list_single_2graphic_pane_g1_ParamLimits

0xad5a,	// (0x00037e42) list_single_2graphic_pane_g1

0xb1e5,	// (0x000382cd) list_single_2graphic_pane_g2_ParamLimits

0xb1e5,	// (0x000382cd) list_single_2graphic_pane_g2

0x48dd,	// (0x000319c5) list_single_2graphic_pane_g3_ParamLimits

0x48dd,	// (0x000319c5) list_single_2graphic_pane_g3

0xad66,	// (0x00037e4e) list_single_2graphic_pane_g4_ParamLimits

0xad66,	// (0x00037e4e) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0003c829) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0003c829) list_single_2graphic_pane_g

0xad77,	// (0x00037e5f) list_single_2graphic_pane_t1_ParamLimits

0xad77,	// (0x00037e5f) list_single_2graphic_pane_t1

0xb237,	// (0x0003831f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb237,	// (0x0003831f) list_double2_graphic_large_graphic_pane_g1

0xb21d,	// (0x00038305) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb21d,	// (0x00038305) list_double2_graphic_large_graphic_pane_g2

0xb211,	// (0x000382f9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb211,	// (0x000382f9) list_double2_graphic_large_graphic_pane_g3

0x490c,	// (0x000319f4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x490c,	// (0x000319f4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0003c832) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0003c832) list_double2_graphic_large_graphic_pane_g

0xada5,	// (0x00037e8d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xada5,	// (0x00037e8d) list_double2_graphic_large_graphic_pane_t1

0xadbb,	// (0x00037ea3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xadbb,	// (0x00037ea3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0003c83b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0003c83b) list_double2_graphic_large_graphic_pane_t

0x7037,	// (0x0003411f) popup_fast_swap_window_ParamLimits

0x7037,	// (0x0003411f) popup_fast_swap_window

0x7053,	// (0x0003413b) popup_side_volume_key_window

0x706d,	// (0x00034155) stacon_top_pane

0x7077,	// (0x0003415f) status_pane_ParamLimits

0x7077,	// (0x0003415f) status_pane

0x1f55,	// (0x0002f03d) status_small_pane

0x61f5,	// (0x000332dd) control_pane

0x61f5,	// (0x000332dd) stacon_bottom_pane

0x67fb,	// (0x000338e3) scroll_pane_cp121

0x67f2,	// (0x000338da) set_content_pane

0x6f0b,	// (0x00033ff3) bg_active_tab_pane_g1_cp1

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp1

0x6f1d,	// (0x00034005) bg_active_tab_pane_g3_cp1

0x6f0b,	// (0x00033ff3) bg_passive_tab_pane_g1_cp1

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1

0x6f1d,	// (0x00034005) bg_passive_tab_pane_g3_cp1

0x6f26,	// (0x0003400e) bg_active_tab_pane_g1_cp2

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp2

0x6f2f,	// (0x00034017) bg_active_tab_pane_g3_cp2

0x6f26,	// (0x0003400e) bg_passive_tab_pane_g1_cp2

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2

0x6f2f,	// (0x00034017) bg_passive_tab_pane_g3_cp2

0x6f38,	// (0x00034020) bg_active_tab_pane_g1_cp3

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp3

0x6f41,	// (0x00034029) bg_active_tab_pane_g3_cp3

0x6f38,	// (0x00034020) bg_passive_tab_pane_g1_cp3

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3

0x6f41,	// (0x00034029) bg_passive_tab_pane_g3_cp3

0x6f4a,	// (0x00034032) bg_active_tab_pane_g1_cp4

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp4

0x6f53,	// (0x0003403b) bg_active_tab_pane_g3_cp4

0x6f4a,	// (0x00034032) bg_passive_tab_pane_g1_cp4

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4

0x6f53,	// (0x0003403b) bg_passive_tab_pane_g3_cp4

0x6f9a,	// (0x00034082) bg_active_tab_pane_g1_cp5

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp5

0x6fa3,	// (0x0003408b) bg_active_tab_pane_g3_cp5

0x6f9a,	// (0x00034082) bg_passive_tab_pane_g1_cp5

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5

0x6fa3,	// (0x0003408b) bg_passive_tab_pane_g3_cp5

0x8bc2,	// (0x00035caa) list_set_graphic_pane_ParamLimits

0x8bc2,	// (0x00035caa) list_set_graphic_pane

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp4

0x6fbe,	// (0x000340a6) list_set_graphic_pane_g1_ParamLimits

0x6fbe,	// (0x000340a6) list_set_graphic_pane_g1

0x6fca,	// (0x000340b2) list_set_graphic_pane_g2_ParamLimits

0x6fca,	// (0x000340b2) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0003c840) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0003c840) list_set_graphic_pane_g

0x0009,

0xfad6,	// (0x0003cbbe) volume_small_pane_cp_g

0x6fec,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6fec,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2

0x6ff8,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6ff8,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2

0x7007,	// (0x000340ef) list_double2_large_graphic_pane_g3_cp2

0x700f,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x700f,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2

0x7025,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7025,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2

0x853d,	// (0x00035625) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x853d,	// (0x00035625) list_double_large_graphic_pane_g1_cp2

0x854e,	// (0x00035636) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x854e,	// (0x00035636) list_double_large_graphic_pane_g2_cp2

0x7181,	// (0x00034269) list_double_large_graphic_pane_g3_cp2

0x855d,	// (0x00035645) list_double_large_graphic_pane_g4_cp

0x8565,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8565,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2

0x857c,	// (0x00035664) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x857c,	// (0x00035664) list_double_large_graphic_pane_t2_cp2

0x7085,	// (0x0003416d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7085,	// (0x0003416d) list_double2_graphic_pane_g1_cp2

0x7091,	// (0x00034179) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7091,	// (0x00034179) list_double2_graphic_pane_g2_cp2

0x70a0,	// (0x00034188) list_double2_graphic_pane_g3_cp2

0x70a8,	// (0x00034190) list_double2_graphic_pane_t1_cp2_ParamLimits

0x70a8,	// (0x00034190) list_double2_graphic_pane_t1_cp2

0x70be,	// (0x000341a6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x70be,	// (0x000341a6) list_double2_graphic_pane_t2_cp2

0x70d0,	// (0x000341b8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x70d0,	// (0x000341b8) list_single_number_heading_pane_g1_cp2

0x70dc,	// (0x000341c4) list_single_number_heading_pane_g2_cp2

0x70e4,	// (0x000341cc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x70e4,	// (0x000341cc) list_single_number_heading_pane_t1_cp2

0x70fa,	// (0x000341e2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x70fa,	// (0x000341e2) list_single_number_heading_pane_t2_cp2

0x710c,	// (0x000341f4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x710c,	// (0x000341f4) list_single_number_heading_pane_t3_cp2

0x70d0,	// (0x000341b8) list_single_heading_pane_g1_cp2_ParamLimits

0x70d0,	// (0x000341b8) list_single_heading_pane_g1_cp2

0x70dc,	// (0x000341c4) list_single_heading_pane_g2_cp2

0x70e4,	// (0x000341cc) list_single_heading_pane_t1_cp2_ParamLimits

0x70e4,	// (0x000341cc) list_single_heading_pane_t1_cp2

0x8347,	// (0x0003542f) list_single_heading_pane_t2_cp2_ParamLimits

0x8347,	// (0x0003542f) list_single_heading_pane_t2_cp2

0x829e,	// (0x00035386) list_double_graphic_pane_g1_cp2_ParamLimits

0x829e,	// (0x00035386) list_double_graphic_pane_g1_cp2

0x7dcc,	// (0x00034eb4) list_double_graphic_pane_g2_cp2_ParamLimits

0x7dcc,	// (0x00034eb4) list_double_graphic_pane_g2_cp2

0x82aa,	// (0x00035392) list_double_graphic_pane_g3_cp2

0x82b2,	// (0x0003539a) list_double_graphic_pane_t1_cp2_ParamLimits

0x82b2,	// (0x0003539a) list_double_graphic_pane_t1_cp2

0x82c8,	// (0x000353b0) list_double_graphic_pane_t2_cp2_ParamLimits

0x82c8,	// (0x000353b0) list_double_graphic_pane_t2_cp2

0x67bc,	// (0x000338a4) list_double_number_pane_g1_cp2_ParamLimits

0x67bc,	// (0x000338a4) list_double_number_pane_g1_cp2

0x7181,	// (0x00034269) list_double_number_pane_g2_cp2

0x8264,	// (0x0003534c) list_double_number_pane_t1_cp2_ParamLimits

0x8264,	// (0x0003534c) list_double_number_pane_t1_cp2

0x8276,	// (0x0003535e) list_double_number_pane_t2_cp2_ParamLimits

0x8276,	// (0x0003535e) list_double_number_pane_t2_cp2

0x828c,	// (0x00035374) list_double_number_pane_t3_cp2_ParamLimits

0x828c,	// (0x00035374) list_double_number_pane_t3_cp2

0x81c7,	// (0x000352af) list_single_graphic_pane_g1_cp2_ParamLimits

0x81c7,	// (0x000352af) list_single_graphic_pane_g1_cp2

0x71d7,	// (0x000342bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x71d7,	// (0x000342bf) list_single_graphic_pane_g2_cp2

0x71e3,	// (0x000342cb) list_single_graphic_pane_g3_cp2

0x819f,	// (0x00035287) list_single_graphic_pane_t1_cp2_ParamLimits

0x819f,	// (0x00035287) list_single_graphic_pane_t1_cp2

0x71d7,	// (0x000342bf) list_single_number_pane_g1_cp2_ParamLimits

0x71d7,	// (0x000342bf) list_single_number_pane_g1_cp2

0x71e3,	// (0x000342cb) list_single_number_pane_g2_cp2

0x819f,	// (0x00035287) list_single_number_pane_t1_cp2_ParamLimits

0x819f,	// (0x00035287) list_single_number_pane_t1_cp2

0x81b5,	// (0x0003529d) list_single_number_pane_t2_cp2_ParamLimits

0x81b5,	// (0x0003529d) list_single_number_pane_t2_cp2

0x6ff8,	// (0x000340e0) list_double2_pane_g1_cp2_ParamLimits

0x6ff8,	// (0x000340e0) list_double2_pane_g1_cp2

0x7007,	// (0x000340ef) list_double2_pane_g2_cp2

0x7159,	// (0x00034241) list_double2_pane_t1_cp2_ParamLimits

0x7159,	// (0x00034241) list_double2_pane_t1_cp2

0x716f,	// (0x00034257) list_double2_pane_t2_cp2_ParamLimits

0x716f,	// (0x00034257) list_double2_pane_t2_cp2

0x67bc,	// (0x000338a4) list_double_pane_g1_cp2_ParamLimits

0x67bc,	// (0x000338a4) list_double_pane_g1_cp2

0x7181,	// (0x00034269) list_double_pane_g2_cp2

0x7189,	// (0x00034271) list_double_pane_t1_cp2_ParamLimits

0x7189,	// (0x00034271) list_double_pane_t1_cp2

0x719f,	// (0x00034287) list_double_pane_t2_cp2_ParamLimits

0x719f,	// (0x00034287) list_double_pane_t2_cp2

0x71c7,	// (0x000342af) list_single_pane_cp2_g3

0x71d7,	// (0x000342bf) list_single_pane_g1_cp2_ParamLimits

0x71d7,	// (0x000342bf) list_single_pane_g1_cp2

0x71e3,	// (0x000342cb) list_single_pane_g2_cp2

0x71eb,	// (0x000342d3) list_single_pane_t1_cp2_ParamLimits

0x71eb,	// (0x000342d3) list_single_pane_t1_cp2

0x7203,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7203,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2

0x720f,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x720f,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2

0x721b,	// (0x00034303) list_single_large_graphic_pane_g3_cp2

0x7223,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7223,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1

0x723d,	// (0x00034325) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x723d,	// (0x00034325) list_single_large_graphic_pane_t1_cp2

0x816b,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x816b,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2

0x813a,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x813a,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2

0x71e3,	// (0x000342cb) list_single_graphic_heading_pane_g5_cp2

0x8177,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8177,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2

0x818d,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x818d,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2

0x812e,	// (0x00035216) list_single_2graphic_pane_g1_cp2_ParamLimits

0x812e,	// (0x00035216) list_single_2graphic_pane_g1_cp2

0x813a,	// (0x00035222) list_single_2graphic_pane_g2_cp2_ParamLimits

0x813a,	// (0x00035222) list_single_2graphic_pane_g2_cp2

0x71e3,	// (0x000342cb) list_single_2graphic_pane_g3_cp2

0x8149,	// (0x00035231) list_single_2graphic_pane_g4_cp2_ParamLimits

0x8149,	// (0x00035231) list_single_2graphic_pane_g4_cp2

0x8155,	// (0x0003523d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x8155,	// (0x0003523d) list_single_2graphic_pane_t1_cp2

0x61eb,	// (0x000332d3) list_highlight_pane_g10_cp1

0x7d13,	// (0x00034dfb) list_highlight_pane_g1_cp1

0x7d1b,	// (0x00034e03) list_highlight_pane_g2_cp1

0x7d23,	// (0x00034e0b) list_highlight_pane_g3_cp1

0x7d2b,	// (0x00034e13) list_highlight_pane_g4_cp1

0x7d33,	// (0x00034e1b) list_highlight_pane_g5_cp1

0x7d3b,	// (0x00034e23) list_highlight_pane_g6_cp1

0x7d43,	// (0x00034e2b) list_highlight_pane_g7_cp1

0x7d4b,	// (0x00034e33) list_highlight_pane_g8_cp1

0x7d53,	// (0x00034e3b) list_highlight_pane_g9_cp1

0xbe55,	// (0x00038f3d) form_field_slider_pane_t3

0xbe63,	// (0x00038f4b) form_field_slider_pane_t4

0x7c57,	// (0x00034d3f) slider_form_pane_ParamLimits

0x7c57,	// (0x00034d3f) slider_form_pane

0x61f5,	// (0x000332dd) control_abbreviations

0x61f5,	// (0x000332dd) control_conventions

0x61f5,	// (0x000332dd) control_definitions

0x61f5,	// (0x000332dd) format_table_attribute

0x8391,	// (0x00035479) bg_popup_preview_window_pane_g9

0x61f5,	// (0x000332dd) format_table_data2

0x61f5,	// (0x000332dd) format_table_data3

0x61f5,	// (0x000332dd) format_table_data_example

0x0008,

0x61f5,	// (0x000332dd) intro_purpose

0xf8ef,	// (0x0003c9d7) bg_popup_preview_window_pane_g

0x61f5,	// (0x000332dd) texts_category

0x61f5,	// (0x000332dd) texts_graphics

0x7253,	// (0x0003433b) text_digital

0x7262,	// (0x0003434a) text_primary

0x7271,	// (0x00034359) text_primary_small

0x7280,	// (0x00034368) text_secondary

0x728f,	// (0x00034377) text_title

0x880a,	// (0x000358f2) bg_passive_tab_pane_g1_cp3_srt

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3_srt

0x8813,	// (0x000358fb) bg_passive_tab_pane_g3_cp3_srt

0x6386,	// (0x0003346e) bg_active_tab_pane_cp3_srt_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp3_srt

0x881c,	// (0x00035904) tabs_4_active_pane_srt_g1

0xc1e7,	// (0x000392cf) tabs_4_active_pane_srt_t1_ParamLimits

0xc1e7,	// (0x000392cf) tabs_4_active_pane_srt_t1

0x880a,	// (0x000358f2) bg_active_tab_pane_g1_cp3_copy1

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp3_copy1

0x8813,	// (0x000358fb) bg_active_tab_pane_g3_cp3_copy1

0x6243,	// (0x0003332b) tabs_2_long_active_pane_srt_ParamLimits

0x6243,	// (0x0003332b) tabs_2_long_active_pane_srt

0x6243,	// (0x0003332b) tabs_2_long_passive_pane_srt_ParamLimits

0x6243,	// (0x0003332b) tabs_2_long_passive_pane_srt

0x7451,	// (0x00034539) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7451,	// (0x00034539) bg_passive_tab_pane_cp4_srt

0x872e,	// (0x00035816) bg_passive_tab_pane_g1_cp4_srt

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4_srt

0x8737,	// (0x0003581f) bg_passive_tab_pane_g3_cp4_srt

0x6243,	// (0x0003332b) bg_active_tab_pane_cp4_srt_ParamLimits

0x6243,	// (0x0003332b) bg_active_tab_pane_cp4_srt

0xbff0,	// (0x000390d8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbff0,	// (0x000390d8) tabs_2_long_active_pane_srt_t1

0x872e,	// (0x00035816) bg_active_tab_pane_g1_cp4_srt

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp4_srt

0x8737,	// (0x0003581f) bg_active_tab_pane_g3_cp4_srt

0x6386,	// (0x0003346e) tabs_3_long_active_pane_srt_ParamLimits

0x6386,	// (0x0003346e) tabs_3_long_active_pane_srt

0x6386,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6386,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt

0x6386,	// (0x0003346e) tabs_3_long_passive_pane_srt_ParamLimits

0x6386,	// (0x0003346e) tabs_3_long_passive_pane_srt

0x7451,	// (0x00034539) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7451,	// (0x00034539) bg_passive_tab_pane_cp5_srt

0x6f9a,	// (0x00034082) bg_passive_tab_pane_g1_cp5_srt

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5_srt

0x6fa3,	// (0x0003408b) bg_passive_tab_pane_g3_cp5_srt

0x6243,	// (0x0003332b) bg_active_tab_pane_cp5_srt_ParamLimits

0x6243,	// (0x0003332b) bg_active_tab_pane_cp5_srt

0xbfda,	// (0x000390c2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbfda,	// (0x000390c2) tabs_3_long_active_pane_srt_t1

0x6f9a,	// (0x00034082) bg_active_tab_pane_g1_cp5_srt

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp5_srt

0x6fa3,	// (0x0003408b) bg_active_tab_pane_g3_cp5_srt

0x8720,	// (0x00035808) navi_text_pane_srt_t1

0x8718,	// (0x00035800) navi_icon_pane_srt_g1

0x73a7,	// (0x0003448f) midp_editing_number_pane_srt

0x729e,	// (0x00034386) midp_ticker_pane_srt

0x73af,	// (0x00034497) midp_ticker_pane_srt_g1

0x73b7,	// (0x0003449f) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0003c85f) midp_ticker_pane_srt_g

0x73bf,	// (0x000344a7) midp_ticker_pane_srt_t1

0x8709,	// (0x000357f1) midp_editing_number_pane_t1_copy1

0x1f5e,	// (0x0002f046) listscroll_midp_pane

0x1f5e,	// (0x0002f046) midp_form_pane

0x72a6,	// (0x0003438e) midp_info_popup_window_ParamLimits

0x72a6,	// (0x0003438e) midp_info_popup_window

0x68c1,	// (0x000339a9) bg_popup_sub_pane_cp50_ParamLimits

0x68c1,	// (0x000339a9) bg_popup_sub_pane_cp50

0x7980,	// (0x00034a68) listscroll_midp_info_pane_ParamLimits

0x7980,	// (0x00034a68) listscroll_midp_info_pane

0x7960,	// (0x00034a48) listscroll_form_midp_pane_ParamLimits

0x7960,	// (0x00034a48) listscroll_form_midp_pane

0x796c,	// (0x00034a54) scroll_bar_cp050

0x7960,	// (0x00034a48) list_midp_pane

0x90a4,	// (0x0003618c) signal_pane_g2_cp

0x7892,	// (0x0003497a) listscroll_midp_info_pane_t1_ParamLimits

0x7892,	// (0x0003497a) listscroll_midp_info_pane_t1

0x78aa,	// (0x00034992) listscroll_midp_info_pane_t2_ParamLimits

0x78aa,	// (0x00034992) listscroll_midp_info_pane_t2

0x78e8,	// (0x000349d0) listscroll_midp_info_pane_t3_ParamLimits

0x78e8,	// (0x000349d0) listscroll_midp_info_pane_t3

0x7922,	// (0x00034a0a) listscroll_midp_info_pane_t4_ParamLimits

0x7922,	// (0x00034a0a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003c912) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003c912) listscroll_midp_info_pane_t

0x6941,	// (0x00033a29) scroll_pane_cp21

0x7836,	// (0x0003491e) form_midp_field_choice_group_pane

0x783f,	// (0x00034927) form_midp_field_text_pane

0x7878,	// (0x00034960) form_midp_field_time_pane

0x7880,	// (0x00034968) form_midp_gauge_slider_pane

0x7889,	// (0x00034971) form_midp_gauge_wait_pane

0x61f5,	// (0x000332dd) form_midp_image_pane

0xadcd,	// (0x00037eb5) list_single_midp_pane_ParamLimits

0xadcd,	// (0x00037eb5) list_single_midp_pane

0xbe36,	// (0x00038f1e) form_midp_field_text_pane_t1

0x76c1,	// (0x000347a9) input_focus_pane_cp050

0x7825,	// (0x0003490d) list_midp_form_text_pane

0x77f4,	// (0x000348dc) form_midp_field_choice_group_pane_t1

0x7802,	// (0x000348ea) input_focus_pane_cp051

0x7816,	// (0x000348fe) list_midp_choice_pane

0x61f5,	// (0x000332dd) status_idle_pane

0x77d8,	// (0x000348c0) form_midp_field_time_pane_t1

0x61eb,	// (0x000332d3) wait_anim_pane_g2_copy1

0x77e6,	// (0x000348ce) form_midp_field_time_pane_t2

0x0001,

0x7311,	// (0x000343f9) aid_navinavi_width_2_pane

0xf825,	// (0x0003c90d) form_midp_field_time_pane_t

0x61f5,	// (0x000332dd) input_focus_pane_cp052

0x61f5,	// (0x000332dd) bg_input_focus_pane_cp040

0x77b4,	// (0x0003489c) form_midp_gauge_slider_pane_t1

0x77c2,	// (0x000348aa) form_midp_gauge_slider_pane_t2

0xbe1a,	// (0x00038f02) form_midp_gauge_slider_pane_t3

0xbe28,	// (0x00038f10) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003c904) form_midp_gauge_slider_pane_t

0x77d0,	// (0x000348b8) form_midp_slider_pane

0x6243,	// (0x0003332b) bg_input_focus_pane_cp041_ParamLimits

0x6243,	// (0x0003332b) bg_input_focus_pane_cp041

0x7784,	// (0x0003486c) form_midp_gauge_wait_pane_t1_ParamLimits

0x7784,	// (0x0003486c) form_midp_gauge_wait_pane_t1

0x7796,	// (0x0003487e) form_midp_gauge_wait_pane_t2_ParamLimits

0x7796,	// (0x0003487e) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003c8ff) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003c8ff) form_midp_gauge_wait_pane_t

0x77a8,	// (0x00034890) form_midp_wait_pane_ParamLimits

0x77a8,	// (0x00034890) form_midp_wait_pane

0x774e,	// (0x00034836) form_midp_image_pane_g1

0x7757,	// (0x0003483f) form_midp_image_pane_t1

0x7766,	// (0x0003484e) form_midp_image_pane_t2

0x7775,	// (0x0003485d) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003c8f8) form_midp_image_pane_t

0x7745,	// (0x0003482d) list_single_midp_pane_g1

0x3308,	// (0x000303f0) list_single_midp_pane_t1

0xbe08,	// (0x00038ef0) list_midp_form_item_pane_ParamLimits

0xbe08,	// (0x00038ef0) list_midp_form_item_pane

0x72b9,	// (0x000343a1) list_midp_form_item_pane_t1

0x72c8,	// (0x000343b0) midp_ticker_pane_g1

0x72d4,	// (0x000343bc) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0003c845) midp_ticker_pane_g

0x72e0,	// (0x000343c8) midp_ticker_pane_t1

0x87b3,	// (0x0003589b) midp_editing_number_pane_t1

0x8791,	// (0x00035879) midp_editing_number_pane

0x87a0,	// (0x00035888) midp_ticker_pane

0x86f9,	// (0x000357e1) ai_message_heading_pane

0x61f5,	// (0x000332dd) bg_popup_window_pane_cp14

0x8701,	// (0x000357e9) listscroll_ai_message_pane

0x8683,	// (0x0003576b) ai_message_heading_pane_g1_ParamLimits

0x8683,	// (0x0003576b) ai_message_heading_pane_g1

0x868f,	// (0x00035777) ai_message_heading_pane_g2_ParamLimits

0x868f,	// (0x00035777) ai_message_heading_pane_g2

0x869b,	// (0x00035783) ai_message_heading_pane_g3_ParamLimits

0x869b,	// (0x00035783) ai_message_heading_pane_g3

0x86a7,	// (0x0003578f) ai_message_heading_pane_g4_ParamLimits

0x86a7,	// (0x0003578f) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003ca39) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003ca39) ai_message_heading_pane_g

0x86b3,	// (0x0003579b) ai_message_heading_pane_t1_ParamLimits

0x86b3,	// (0x0003579b) ai_message_heading_pane_t1

0x86cd,	// (0x000357b5) ai_message_heading_pane_t2_ParamLimits

0x86cd,	// (0x000357b5) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003ca42) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003ca42) ai_message_heading_pane_t

0x86df,	// (0x000357c7) bg_popup_heading_pane_cp1_ParamLimits

0x86df,	// (0x000357c7) bg_popup_heading_pane_cp1

0x8671,	// (0x00035759) list_ai_message_pane_ParamLimits

0x8671,	// (0x00035759) list_ai_message_pane

0x6941,	// (0x00033a29) scroll_pane_cp10

0x860d,	// (0x000356f5) list_ai_message_pane_g1

0x8615,	// (0x000356fd) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003ca16) list_ai_message_pane_g

0x861d,	// (0x00035705) list_ai_message_pane_t1_ParamLimits

0x861d,	// (0x00035705) list_ai_message_pane_t1

0x8632,	// (0x0003571a) list_ai_message_pane_t2_ParamLimits

0x8632,	// (0x0003571a) list_ai_message_pane_t2

0x8647,	// (0x0003572f) list_ai_message_pane_t3_ParamLimits

0x8647,	// (0x0003572f) list_ai_message_pane_t3

0x865c,	// (0x00035744) list_ai_message_pane_t4_ParamLimits

0x865c,	// (0x00035744) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003ca1b) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003ca1b) list_ai_message_pane_t

0xbf7f,	// (0x00039067) cell_ai_soft_ind_pane_ParamLimits

0xbf7f,	// (0x00039067) cell_ai_soft_ind_pane

0x72f2,	// (0x000343da) cell_ai_soft_ind_pane_g1_ParamLimits

0x72f2,	// (0x000343da) cell_ai_soft_ind_pane_g1

0x61f5,	// (0x000332dd) grid_highlight_cp1

0x72ff,	// (0x000343e7) text_secondary_cp56_ParamLimits

0x72ff,	// (0x000343e7) text_secondary_cp56

0x85e2,	// (0x000356ca) example_general_pane_ParamLimits

0x85e2,	// (0x000356ca) example_general_pane

0x85ee,	// (0x000356d6) example_parent_pane_g1_ParamLimits

0x85ee,	// (0x000356d6) example_parent_pane_g1

0x85fa,	// (0x000356e2) example_parent_pane_t1_ParamLimits

0x85fa,	// (0x000356e2) example_parent_pane_t1

0xb6d3,	// (0x000387bb) popup_preview_text_window_ParamLimits

0xb6d3,	// (0x000387bb) popup_preview_text_window

0x71cf,	// (0x000342b7) list_single_pane_cp2_g4

0x643c,	// (0x00033524) bg_popup_preview_window_pane_ParamLimits

0x643c,	// (0x00033524) bg_popup_preview_window_pane

0x8399,	// (0x00035481) popup_preview_text_window_t1_ParamLimits

0x8399,	// (0x00035481) popup_preview_text_window_t1

0x83b7,	// (0x0003549f) popup_preview_text_window_t2_ParamLimits

0x83b7,	// (0x0003549f) popup_preview_text_window_t2

0x8400,	// (0x000354e8) popup_preview_text_window_t3_ParamLimits

0x8400,	// (0x000354e8) popup_preview_text_window_t3

0x8445,	// (0x0003552d) popup_preview_text_window_t4_ParamLimits

0x8445,	// (0x0003552d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003c9ea) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003c9ea) popup_preview_text_window_t

0x84c3,	// (0x000355ab) scroll_pane_cp11

0x7635,	// (0x0003471d) bg_popup_preview_window_pane_g1

0x8359,	// (0x00035441) bg_popup_preview_window_pane_g2

0x8361,	// (0x00035449) bg_popup_preview_window_pane_g3

0x8369,	// (0x00035451) bg_popup_preview_window_pane_g4

0x8371,	// (0x00035459) bg_popup_preview_window_pane_g5

0x8379,	// (0x00035461) bg_popup_preview_window_pane_g6

0x8381,	// (0x00035469) bg_popup_preview_window_pane_g7

0x8389,	// (0x00035471) bg_popup_preview_window_pane_g8

0x39ad,	// (0x00030a95) aid_popup_width_pane

0xb655,	// (0x0003873d) popup_midp_note_alarm_window_ParamLimits

0xb655,	// (0x0003873d) popup_midp_note_alarm_window

0x680c,	// (0x000338f4) data_form_pane_ParamLimits

0xac66,	// (0x00037d4e) form_field_data_pane_g1

0xac70,	// (0x00037d58) form_field_data_pane_t1_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_ParamLimits

0x2fc8,	// (0x000300b0) data_form_wide_pane_ParamLimits

0x2fd9,	// (0x000300c1) form_field_data_wide_pane_g1

0x2fe5,	// (0x000300cd) form_field_data_wide_pane_t1_ParamLimits

0x662c,	// (0x00033714) input_focus_pane_cp6_ParamLimits

0x1dc5,	// (0x0002eead) input_popup_find_pane_g1_ParamLimits

0x1dc5,	// (0x0002eead) input_popup_find_pane_g1

0x3f29,	// (0x00031011) aid_navi_side_left_pane

0x3f3a,	// (0x00031022) aid_navi_side_right_pane

0x7e11,	// (0x00034ef9) bg_popup_window_pane_cp30_ParamLimits

0x7e11,	// (0x00034ef9) bg_popup_window_pane_cp30

0x7e8b,	// (0x00034f73) popup_midp_note_alarm_window_g1_ParamLimits

0x7e8b,	// (0x00034f73) popup_midp_note_alarm_window_g1

0x7ebb,	// (0x00034fa3) popup_midp_note_alarm_window_t1_ParamLimits

0x7ebb,	// (0x00034fa3) popup_midp_note_alarm_window_t1

0x7f5c,	// (0x00035044) popup_midp_note_alarm_window_t2_ParamLimits

0x7f5c,	// (0x00035044) popup_midp_note_alarm_window_t2

0x800a,	// (0x000350f2) popup_midp_note_alarm_window_t3_ParamLimits

0x800a,	// (0x000350f2) popup_midp_note_alarm_window_t3

0x8032,	// (0x0003511a) popup_midp_note_alarm_window_t4_ParamLimits

0x8032,	// (0x0003511a) popup_midp_note_alarm_window_t4

0x8052,	// (0x0003513a) popup_midp_note_alarm_window_t5_ParamLimits

0x8052,	// (0x0003513a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003c987) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003c987) popup_midp_note_alarm_window_t

0x80fe,	// (0x000351e6) wait_bar_pane_cp1_ParamLimits

0x80fe,	// (0x000351e6) wait_bar_pane_cp1

0x61f5,	// (0x000332dd) wait_anim_pane_copy1

0x61f5,	// (0x000332dd) wait_border_pane_copy1

0x7b24,	// (0x00034c0c) wait_border_pane_g1_copy1

0x2fff,	// (0x000300e7) form_field_popup_pane_g1

0xac88,	// (0x00037d70) form_field_popup_pane_t1_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_cp7_ParamLimits

0x6846,	// (0x0003392e) list_form_pane_ParamLimits

0x301f,	// (0x00030107) form_field_popup_wide_pane_g1

0x3027,	// (0x0003010f) form_field_popup_wide_pane_t1_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_cp8_ParamLimits

0x6852,	// (0x0003393a) list_form_wide_pane_ParamLimits

0x8843,	// (0x0003592b) aid_size_cell_graphic_pane

0xad03,	// (0x00037deb) data_form_pane_t1_ParamLimits

0xadf2,	// (0x00037eda) data_form_wide_pane_t1_ParamLimits

0xba3b,	// (0x00038b23) bg_status_flat_pane

0x1a97,	// (0x0002eb7f) title_pane_t1_ParamLimits

0x620b,	// (0x000332f3) title_pane_t2_ParamLimits

0x6231,	// (0x00033319) title_pane_t3_ParamLimits

0xf557,	// (0x0003c63f) title_pane_t_ParamLimits

0x6ce3,	// (0x00033dcb) level_1_signal_ParamLimits

0x6cf0,	// (0x00033dd8) level_2_signal_ParamLimits

0x6cfd,	// (0x00033de5) level_3_signal_ParamLimits

0x6d0a,	// (0x00033df2) level_4_signal_ParamLimits

0x6d17,	// (0x00033dff) level_5_signal_ParamLimits

0x6d24,	// (0x00033e0c) level_6_signal_ParamLimits

0x6d31,	// (0x00033e19) level_7_signal_ParamLimits

0x6ce3,	// (0x00033dcb) level_1_battery_ParamLimits

0x6cf0,	// (0x00033dd8) level_2_battery_ParamLimits

0x6cfd,	// (0x00033de5) level_3_battery_ParamLimits

0x6d0a,	// (0x00033df2) level_4_battery_ParamLimits

0x6d17,	// (0x00033dff) level_5_battery_ParamLimits

0x6d24,	// (0x00033e0c) level_6_battery_ParamLimits

0x6d31,	// (0x00033e19) level_7_battery_ParamLimits

0x7d13,	// (0x00034dfb) bg_status_flat_pane_g1

0x7d1b,	// (0x00034e03) bg_status_flat_pane_g2

0x7d23,	// (0x00034e0b) bg_status_flat_pane_g3

0x7d2b,	// (0x00034e13) bg_status_flat_pane_g4

0x7d33,	// (0x00034e1b) bg_status_flat_pane_g5

0x7d3b,	// (0x00034e23) bg_status_flat_pane_g6

0x7d43,	// (0x00034e2b) bg_status_flat_pane_g7

0x1b23,	// (0x0002ec0b) tabs_3_active_pane_t1_ParamLimits

0x1b23,	// (0x0002ec0b) tabs_3_passive_pane_t1_ParamLimits

0x1b35,	// (0x0002ec1d) tabs_4_active_pane_t1_ParamLimits

0x1b35,	// (0x0002ec1d) tabs_4_1_passive_pane_t1_ParamLimits

0x1dd1,	// (0x0002eeb9) tabs_2_active_pane_t1_ParamLimits

0x1dd1,	// (0x0002eeb9) tabs_2_passive_pane_t1_ParamLimits

0x6243,	// (0x0003332b) bg_active_tab_pane_cp4_ParamLimits

0x1de3,	// (0x0002eecb) tabs_2_long_active_pane_t1_ParamLimits

0x7451,	// (0x00034539) bg_passive_tab_pane_cp4_ParamLimits

0x4932,	// (0x00031a1a) list_single_midp_graphic_pane_t1_ParamLimits

0x6243,	// (0x0003332b) bg_active_tab_pane_cp5_ParamLimits

0x1df6,	// (0x0002eede) tabs_3_long_active_pane_t1_ParamLimits

0x7451,	// (0x00034539) bg_passive_tab_pane_cp5_ParamLimits

0x4932,	// (0x00031a1a) list_single_midp_graphic_pane_t1

0xba3b,	// (0x00038b23) bg_status_flat_pane_ParamLimits

0x750a,	// (0x000345f2) indicator_pane_cp2_ParamLimits

0x750a,	// (0x000345f2) indicator_pane_cp2

0xbbb1,	// (0x00038c99) navi_pane_srt_ParamLimits

0xbbb1,	// (0x00038c99) navi_pane_srt

0x7532,	// (0x0003461a) popup_clock_digital_analogue_window_cp1

0x6297,	// (0x0003337f) indicator_pane_t1

0x729e,	// (0x00034386) copy_highlight_pane

0x729e,	// (0x00034386) cursor_graphics_pane

0x729e,	// (0x00034386) graphic_within_text_pane

0x729e,	// (0x00034386) link_highlight_pane

0x8486,	// (0x0003556e) popup_preview_text_window_t5_ParamLimits

0x8486,	// (0x0003556e) popup_preview_text_window_t5

0x7319,	// (0x00034401) cursor_digital_pane

0x7319,	// (0x00034401) cursor_primary_pane

0x732a,	// (0x00034412) cursor_primary_small_pane

0x7332,	// (0x0003441a) cursor_secondary_pane

0x733a,	// (0x00034422) cursor_title_pane

0x7319,	// (0x00034401) link_highlight_digital_pane

0x7321,	// (0x00034409) link_highlight_primary_pane

0x732a,	// (0x00034412) link_highlight_primary_small_pane

0x7332,	// (0x0003441a) link_highlight_secondary_pane

0x733a,	// (0x00034422) link_highlight_title_pane

0x7319,	// (0x00034401) copy_highlight_digital_pane

0x7319,	// (0x00034401) copy_highlight_primary_pane

0x732a,	// (0x00034412) copy_highlight_primary_small_pane

0x7332,	// (0x0003441a) copy_highlight_secondary_pane

0x733a,	// (0x00034422) copy_highlight_title_pane

0x7332,	// (0x0003441a) graphic_text_digital_pane

0x7d93,	// (0x00034e7b) graphic_text_primary_pane

0x7d9c,	// (0x00034e84) graphic_text_primary_small_pane

0x732a,	// (0x00034412) graphic_text_secondary_pane

0x7319,	// (0x00034401) graphic_text_title_pane

0x1ff7,	// (0x0002f0df) cursor_primary_pane_g1

0x7d85,	// (0x00034e6d) cursor_text_primary_t1

0xbe85,	// (0x00038f6d) cursor_primary_small_pane_g1

0x7d77,	// (0x00034e5f) cursor_text_primary_small_t1

0xbe7b,	// (0x00038f63) cursor_primary_small_pane_g1_copy1

0x7d69,	// (0x00034e51) cursor_text_primary_small_t1_copy1

0x7d5b,	// (0x00034e43) cursor_text_title_t1

0xbe71,	// (0x00038f59) cursor_title_pane_g1

0x1ff7,	// (0x0002f0df) cursor_digital_pane_g1

0x7342,	// (0x0003442a) cursor_text_digital_t1

0x7350,	// (0x00034438) link_highlight_primary_pane_g1

0x7d04,	// (0x00034dec) link_highlight_primary_pane_t1

0x7350,	// (0x00034438) link_highlight_primary_small_pane_g1

0x7358,	// (0x00034440) link_highlight_primary_small_pane_t1

0x7367,	// (0x0003444f) link_highlight_secondary_pane_g1

0x736f,	// (0x00034457) link_highlight_secondary_pane_t1

0x7c69,	// (0x00034d51) link_highlight_title_pane_g1

0x7c80,	// (0x00034d68) link_highlight_title_pane_t1

0x7c69,	// (0x00034d51) link_highlight_digital_pane_g1

0x7c71,	// (0x00034d59) link_highlight_digital_pane_t1

0x7b3f,	// (0x00034c27) copy_highlight_primary_pane_g1

0x7b65,	// (0x00034c4d) copy_highlight_primary_pane_t1

0x7b3f,	// (0x00034c27) copy_highlight_primary_small_pane_g1

0x7b56,	// (0x00034c3e) copy_highlight_primary_small_pane_t1

0x737e,	// (0x00034466) copy_highlight_secondary_pane_g1

0x7386,	// (0x0003446e) copy_highlight_secondary_pane_t1

0x7b3f,	// (0x00034c27) copy_highlight_title_pane_g1

0x7b47,	// (0x00034c2f) copy_highlight_title_pane_t1

0x7b3f,	// (0x00034c27) copy_highlight_digital_pane_g1

0x89d1,	// (0x00035ab9) copy_highlight_digital_pane_t1

0x8925,	// (0x00035a0d) graphic_text_primary_pane_g1

0x89b5,	// (0x00035a9d) graphic_text_primary_pane_t1

0x89c3,	// (0x00035aab) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003cab6) graphic_text_primary_pane_t

0x8991,	// (0x00035a79) graphic_text_primary_small_pane_g1

0x8999,	// (0x00035a81) graphic_text_primary_small_pane_t1

0x89a7,	// (0x00035a8f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003cab1) graphic_text_primary_small_pane_t

0x896d,	// (0x00035a55) graphic_text_secondary_pane_g1

0x8975,	// (0x00035a5d) graphic_text_secondary_pane_t1

0x8983,	// (0x00035a6b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003caac) graphic_text_secondary_pane_t

0x8949,	// (0x00035a31) graphic_text_title_pane_g1

0x8951,	// (0x00035a39) graphic_text_title_pane_t1

0x895f,	// (0x00035a47) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003caa7) graphic_text_title_pane_t

0x8925,	// (0x00035a0d) graphic_text_digital_pane_g1

0x892d,	// (0x00035a15) graphic_text_digital_pane_t1

0x893b,	// (0x00035a23) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003caa2) graphic_text_digital_pane_t

0x6243,	// (0x0003332b) navi_icon_pane_srt_ParamLimits

0x6243,	// (0x0003332b) navi_icon_pane_srt

0x61f5,	// (0x000332dd) navi_midp_pane_srt

0x61f5,	// (0x000332dd) navi_navi_pane_srt

0x6243,	// (0x0003332b) navi_text_pane_srt_ParamLimits

0x6243,	// (0x0003332b) navi_text_pane_srt

0x88f0,	// (0x000359d8) navi_navi_icon_text_pane_srt

0x88f8,	// (0x000359e0) navi_navi_pane_srt_g1_ParamLimits

0x88f8,	// (0x000359e0) navi_navi_pane_srt_g1

0x890a,	// (0x000359f2) navi_navi_pane_srt_g2_ParamLimits

0x890a,	// (0x000359f2) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003ca9d) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003ca9d) navi_navi_pane_srt_g

0x891c,	// (0x00035a04) navi_navi_tabs_pane_srt

0x88f0,	// (0x000359d8) navi_navi_text_pane_srt

0x88f0,	// (0x000359d8) navi_navi_volume_pane_srt

0x88e1,	// (0x000359c9) navi_navi_text_pane_srt_t1

0x4c94,	// (0x00031d7c) navi_navi_volume_pane_srt_g1

0x4c9c,	// (0x00031d84) volume_small_pane_srt_ParamLimits

0x4c9c,	// (0x00031d84) volume_small_pane_srt

0x41e4,	// (0x000312cc) volume_small_pane_srt_g1_ParamLimits

0x41e4,	// (0x000312cc) volume_small_pane_srt_g1

0x41f4,	// (0x000312dc) volume_small_pane_srt_g2_ParamLimits

0x41f4,	// (0x000312dc) volume_small_pane_srt_g2

0x4205,	// (0x000312ed) volume_small_pane_srt_g3_ParamLimits

0x4205,	// (0x000312ed) volume_small_pane_srt_g3

0x4216,	// (0x000312fe) volume_small_pane_srt_g4_ParamLimits

0x4216,	// (0x000312fe) volume_small_pane_srt_g4

0x4227,	// (0x0003130f) volume_small_pane_srt_g5_ParamLimits

0x4227,	// (0x0003130f) volume_small_pane_srt_g5

0x4238,	// (0x00031320) volume_small_pane_srt_g6_ParamLimits

0x4238,	// (0x00031320) volume_small_pane_srt_g6

0x4249,	// (0x00031331) volume_small_pane_srt_g7_ParamLimits

0x4249,	// (0x00031331) volume_small_pane_srt_g7

0x425a,	// (0x00031342) volume_small_pane_srt_g8_ParamLimits

0x425a,	// (0x00031342) volume_small_pane_srt_g8

0x426b,	// (0x00031353) volume_small_pane_srt_g9_ParamLimits

0x426b,	// (0x00031353) volume_small_pane_srt_g9

0x427c,	// (0x00031364) volume_small_pane_srt_g10_ParamLimits

0x427c,	// (0x00031364) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0003c84a) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0003c84a) volume_small_pane_srt_g

0x64e5,	// (0x000335cd) query_popup_data_pane_cp2

0x88c7,	// (0x000359af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x88c7,	// (0x000359af) navi_navi_icon_text_pane_srt_t1

0x7d93,	// (0x00034e7b) navi_tabs_2_long_pane_srt

0x7d93,	// (0x00034e7b) navi_tabs_2_pane_srt

0x7d93,	// (0x00034e7b) navi_tabs_3_long_pane_srt

0x7d93,	// (0x00034e7b) navi_tabs_3_pane_srt

0x7d93,	// (0x00034e7b) navi_tabs_4_pane_srt

0x4c74,	// (0x00031d5c) tabs_2_active_pane_srt_ParamLimits

0x4c74,	// (0x00031d5c) tabs_2_active_pane_srt

0x4c84,	// (0x00031d6c) tabs_2_passive_pane_srt_ParamLimits

0x4c84,	// (0x00031d6c) tabs_2_passive_pane_srt

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp1_srt

0x88a5,	// (0x0003598d) bg_passive_tab_pane_g1_cp1_srt

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1_srt

0x88ae,	// (0x00035996) bg_passive_tab_pane_g3_cp1_srt

0x6386,	// (0x0003346e) bg_active_tab_pane_cp1_srt_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp1_srt

0x88b7,	// (0x0003599f) tabs_2_active_pane_srt_g1

0xc264,	// (0x0003934c) tabs_2_active_pane_srt_t1_ParamLimits

0xc264,	// (0x0003934c) tabs_2_active_pane_srt_t1

0x88a5,	// (0x0003598d) bg_active_tab_pane_g1_cp1_srt

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp1_srt

0x88ae,	// (0x00035996) bg_active_tab_pane_g3_cp1_srt

0x4c41,	// (0x00031d29) tabs_3_active_pane_srt_ParamLimits

0x4c41,	// (0x00031d29) tabs_3_active_pane_srt

0x4c52,	// (0x00031d3a) tabs_3_passive_pane_cp_srt_ParamLimits

0x4c52,	// (0x00031d3a) tabs_3_passive_pane_cp_srt

0x4c63,	// (0x00031d4b) tabs_3_passive_pane_srt_ParamLimits

0x4c63,	// (0x00031d4b) tabs_3_passive_pane_srt

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x76c1,	// (0x000347a9) bg_passive_tab_pane_cp2_srt

0x7395,	// (0x0003447d) bg_passive_tab_pane_g1_cp2_srt

0x6f14,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2_srt

0x739e,	// (0x00034486) bg_passive_tab_pane_g3_cp2_srt

0x6386,	// (0x0003346e) bg_active_tab_pane_cp2_srt_ParamLimits

0x6386,	// (0x0003346e) bg_active_tab_pane_cp2_srt

0x889d,	// (0x00035985) tabs_3_active_pane_srt_g1

0xc24e,	// (0x00039336) tabs_3_active_pane_srt_t1_ParamLimits

0xc24e,	// (0x00039336) tabs_3_active_pane_srt_t1

0x7395,	// (0x0003447d) bg_active_tab_pane_g1_cp2_srt

0x6f14,	// (0x00033ffc) bg_active_tab_pane_g2_cp2_srt

0x739e,	// (0x00034486) bg_active_tab_pane_g3_cp2_srt

0x4bf9,	// (0x00031ce1) tabs_4_active_pane_srt_ParamLimits

0x4bf9,	// (0x00031ce1) tabs_4_active_pane_srt

0x4c0b,	// (0x00031cf3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4c0b,	// (0x00031cf3) tabs_4_passive_pane_cp2_srt

0x43e8,	// (0x000314d0) aid_size_cell_toolbar

0x875d,	// (0x00035845) main_idle_act_pane_ParamLimits

0x4551,	// (0x00031639) popup_large_graphic_colour_window_ParamLimits

0xb91f,	// (0x00038a07) popup_toolbar_window_ParamLimits

0xb91f,	// (0x00038a07) popup_toolbar_window

0x87c2,	// (0x000358aa) list_single_graphic_2heading_pane_ParamLimits

0x87c2,	// (0x000358aa) list_single_graphic_2heading_pane

0x6b2d,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane

0x6b3f,	// (0x00033c27) aid_size_cell_apps_grid_prt_pane

0x7451,	// (0x00034539) bg_wml_button_pane_cp1_ParamLimits

0x7451,	// (0x00034539) bg_wml_button_pane_cp1

0xbe36,	// (0x00038f1e) form_midp_field_text_pane_t1_ParamLimits

0x76c1,	// (0x000347a9) input_focus_pane_cp050_ParamLimits

0x7825,	// (0x0003490d) list_midp_form_text_pane_ParamLimits

0x7802,	// (0x000348ea) input_focus_pane_cp051_ParamLimits

0x7816,	// (0x000348fe) list_midp_choice_pane_ParamLimits

0xbdda,	// (0x00038ec2) list_single_2graphic_pane_cp3_ParamLimits

0xbdda,	// (0x00038ec2) list_single_2graphic_pane_cp3

0xbdeb,	// (0x00038ed3) list_single_midp_graphic_pane_ParamLimits

0xbdeb,	// (0x00038ed3) list_single_midp_graphic_pane

0x31f2,	// (0x000302da) list_single_graphic_2heading_pane_g1_ParamLimits

0x31f2,	// (0x000302da) list_single_graphic_2heading_pane_g1

0x31fe,	// (0x000302e6) list_single_graphic_2heading_pane_g4_ParamLimits

0x31fe,	// (0x000302e6) list_single_graphic_2heading_pane_g4

0x320a,	// (0x000302f2) list_single_graphic_2heading_pane_g5_ParamLimits

0x320a,	// (0x000302f2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0003c89d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0003c89d) list_single_graphic_2heading_pane_g

0x3216,	// (0x000302fe) list_single_graphic_2heading_pane_t1_ParamLimits

0x3216,	// (0x000302fe) list_single_graphic_2heading_pane_t1

0x322a,	// (0x00030312) list_single_graphic_2heading_pane_t2_ParamLimits

0x322a,	// (0x00030312) list_single_graphic_2heading_pane_t2

0x3244,	// (0x0003032c) list_single_graphic_2heading_pane_t3_ParamLimits

0x3244,	// (0x0003032c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0003c8a4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0003c8a4) list_single_graphic_2heading_pane_t

0x7575,	// (0x0003465d) bg_popup_sub_pane_cp2

0x759f,	// (0x00034687) grid_toobar_pane

0x48b3,	// (0x0003199b) cell_toolbar_pane_ParamLimits

0x48b3,	// (0x0003199b) cell_toolbar_pane

0x75d9,	// (0x000346c1) cell_toolbar_pane_g1_ParamLimits

0x75d9,	// (0x000346c1) cell_toolbar_pane_g1

0x75ed,	// (0x000346d5) cell_toolbar_pane_g2_ParamLimits

0x75ed,	// (0x000346d5) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0003c8b2) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0003c8b2) cell_toolbar_pane_g

0x760f,	// (0x000346f7) grid_highlight_pane_cp2_ParamLimits

0x760f,	// (0x000346f7) grid_highlight_pane_cp2

0x7629,	// (0x00034711) toolbar_button_pane

0x7635,	// (0x0003471d) toolbar_button_pane_g1

0x763d,	// (0x00034725) toolbar_button_pane_g2

0x7645,	// (0x0003472d) toolbar_button_pane_g3

0x764d,	// (0x00034735) toolbar_button_pane_g4

0x7655,	// (0x0003473d) toolbar_button_pane_g5

0x765d,	// (0x00034745) toolbar_button_pane_g6

0x7665,	// (0x0003474d) toolbar_button_pane_g7

0x766d,	// (0x00034755) toolbar_button_pane_g8

0x7675,	// (0x0003475d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0003c8b7) toolbar_button_pane_g

0x48f1,	// (0x000319d9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x48f1,	// (0x000319d9) list_single_2graphic_pane_g1_cp3

0xbd42,	// (0x00038e2a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd42,	// (0x00038e2a) list_single_2graphic_pane_g2_cp3

0x70dc,	// (0x000341c4) list_single_2graphic_pane_g3_cp3

0x490c,	// (0x000319f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x490c,	// (0x000319f4) list_single_2graphic_pane_g4_cp3

0x4918,	// (0x00031a00) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4918,	// (0x00031a00) list_single_2graphic_pane_t1_cp3

0x70d0,	// (0x000341b8) list_single_midp_graphic_pane_g2_ParamLimits

0x70d0,	// (0x000341b8) list_single_midp_graphic_pane_g2

0x31c6,	// (0x000302ae) aid_zoom_text_primary

0x43f0,	// (0x000314d8) aid_zoom_text_secondary

0x204d,	// (0x0002f135) status_small_pane_g7_ParamLimits

0x204d,	// (0x0002f135) status_small_pane_g7

0x2070,	// (0x0002f158) status_small_pane_t1_ParamLimits

0x1a73,	// (0x0002eb5b) title_pane_g2

0x0003,

0xf54e,	// (0x0003c636) title_pane_g

0x1ce0,	// (0x0002edc8) aid_size_cell_colour_1_pane_ParamLimits

0x1ce0,	// (0x0002edc8) aid_size_cell_colour_1_pane

0x1cf4,	// (0x0002eddc) aid_size_cell_colour_2_pane_ParamLimits

0x1cf4,	// (0x0002eddc) aid_size_cell_colour_2_pane

0x1d08,	// (0x0002edf0) aid_size_cell_colour_3_pane_ParamLimits

0x1d08,	// (0x0002edf0) aid_size_cell_colour_3_pane

0x1d1c,	// (0x0002ee04) aid_size_cell_colour_4_pane_ParamLimits

0x1d1c,	// (0x0002ee04) aid_size_cell_colour_4_pane

0x3e65,	// (0x00030f4d) title_pane_stacon_g1_ParamLimits

0x3e65,	// (0x00030f4d) title_pane_stacon_g1

0x7bbc,	// (0x00034ca4) popup_note_wait_window_g3_ParamLimits

0x7bbc,	// (0x00034ca4) popup_note_wait_window_g3

0x7c32,	// (0x00034d1a) popup_note_wait_window_t5_ParamLimits

0x7c32,	// (0x00034d1a) popup_note_wait_window_t5

0x61f5,	// (0x000332dd) main_feb_china_hwr_fs_writing_pane

0xb425,	// (0x0003850d) popup_feb_china_hwr_fs_window_ParamLimits

0xb425,	// (0x0003850d) popup_feb_china_hwr_fs_window

0xbd53,	// (0x00038e3b) aid_size_cell_hwr_fs_ParamLimits

0xbd53,	// (0x00038e3b) aid_size_cell_hwr_fs

0x76c1,	// (0x000347a9) bg_popup_sub_pane_cp3_ParamLimits

0x76c1,	// (0x000347a9) bg_popup_sub_pane_cp3

0xbd68,	// (0x00038e50) grid_hwr_fs_pane_ParamLimits

0xbd68,	// (0x00038e50) grid_hwr_fs_pane

0x4971,	// (0x00031a59) linegrid_hwr_fs_pane_ParamLimits

0x4971,	// (0x00031a59) linegrid_hwr_fs_pane

0xbd80,	// (0x00038e68) cell_hwr_fs_pane_ParamLimits

0xbd80,	// (0x00038e68) cell_hwr_fs_pane

0x76cd,	// (0x000347b5) linegrid_hwr_fs_pane_g1_ParamLimits

0x76cd,	// (0x000347b5) linegrid_hwr_fs_pane_g1

0xbda0,	// (0x00038e88) linegrid_hwr_fs_pane_g2_ParamLimits

0xbda0,	// (0x00038e88) linegrid_hwr_fs_pane_g2

0x76d9,	// (0x000347c1) linegrid_hwr_fs_pane_g3_ParamLimits

0x76d9,	// (0x000347c1) linegrid_hwr_fs_pane_g3

0x499f,	// (0x00031a87) linegrid_hwr_fs_pane_g4_ParamLimits

0x499f,	// (0x00031a87) linegrid_hwr_fs_pane_g4

0x49b9,	// (0x00031aa1) linegrid_hwr_fs_pane_g5_ParamLimits

0x49b9,	// (0x00031aa1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003c8dd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003c8dd) linegrid_hwr_fs_pane_g

0x76e5,	// (0x000347cd) cell_hwr_fs_pane_g1_ParamLimits

0x76e5,	// (0x000347cd) cell_hwr_fs_pane_g1

0x7543,	// (0x0003462b) cell_hwr_fs_pane_g2_ParamLimits

0x7543,	// (0x0003462b) cell_hwr_fs_pane_g2

0xbdb2,	// (0x00038e9a) cell_hwr_fs_pane_g3_ParamLimits

0xbdb2,	// (0x00038e9a) cell_hwr_fs_pane_g3

0xbdbf,	// (0x00038ea7) cell_hwr_fs_pane_g4_ParamLimits

0xbdbf,	// (0x00038ea7) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003c8e8) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003c8e8) cell_hwr_fs_pane_g

0xbdcc,	// (0x00038eb4) cell_hwr_fs_pane_t1

0x61f5,	// (0x000332dd) grid_highlight_pane_cp6

0x61f5,	// (0x000332dd) main_idle_act2_pane

0x6928,	// (0x00033a10) aid_inside_area_popup_secondary

0xbe8f,	// (0x00038f77) aid_inside_area_window_primary_ParamLimits

0xbe8f,	// (0x00038f77) aid_inside_area_window_primary

0x89e0,	// (0x00035ac8) ai2_news_ticker_pane

0x89e8,	// (0x00035ad0) aid_size_cell_ai1_link_ParamLimits

0x89e8,	// (0x00035ad0) aid_size_cell_ai1_link

0xc27a,	// (0x00039362) popup_ai2_data_window_ParamLimits

0xc27a,	// (0x00039362) popup_ai2_data_window

0x8a02,	// (0x00035aea) popup_ai2_link_window_ParamLimits

0x8a02,	// (0x00035aea) popup_ai2_link_window

0x76c1,	// (0x000347a9) bg_popup_sub_pane_cp4_ParamLimits

0x76c1,	// (0x000347a9) bg_popup_sub_pane_cp4

0x8a16,	// (0x00035afe) grid_ai2_link_pane_ParamLimits

0x8a16,	// (0x00035afe) grid_ai2_link_pane

0x8a2d,	// (0x00035b15) popup_ai2_link_window_g1_ParamLimits

0x8a2d,	// (0x00035b15) popup_ai2_link_window_g1

0x8a39,	// (0x00035b21) popup_ai2_link_window_g2_ParamLimits

0x8a39,	// (0x00035b21) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003cabb) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003cabb) popup_ai2_link_window_g

0x8a48,	// (0x00035b30) ai2_mp_button_pane

0x8a50,	// (0x00035b38) ai2_mp_volume_pane

0x7802,	// (0x000348ea) bg_popup_sub_pane_cp5_ParamLimits

0x7802,	// (0x000348ea) bg_popup_sub_pane_cp5

0x8a58,	// (0x00035b40) heading_ai2_gene_pane_ParamLimits

0x8a58,	// (0x00035b40) heading_ai2_gene_pane

0x8a64,	// (0x00035b4c) list_ai2_gene_pane_ParamLimits

0x8a64,	// (0x00035b4c) list_ai2_gene_pane

0x8aac,	// (0x00035b94) cell_ai2_link_pane_ParamLimits

0x8aac,	// (0x00035b94) cell_ai2_link_pane

0x8ac2,	// (0x00035baa) cell_ai2_link_pane_g1

0x61f5,	// (0x000332dd) grid_highlight_pane_cp7

0x4cb1,	// (0x00031d99) ai2_mp_volume_pane_g1

0x8b5f,	// (0x00035c47) ai2_mp_volume_pane_g2

0xc29b,	// (0x00039383) list_ai2_gene_pane_t1

0x8b67,	// (0x00035c4f) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003cad4) ai2_mp_volume_pane_g

0x4cb9,	// (0x00031da1) volume_small_pane_cp3

0x8b6f,	// (0x00035c57) aid_size_cell_ai2_button

0x8b77,	// (0x00035c5f) grid_ai2_button_pane

0x8b80,	// (0x00035c68) cell_ai2_button_pane_ParamLimits

0x8b80,	// (0x00035c68) cell_ai2_button_pane

0x61eb,	// (0x000332d3) cell_ai2_button_pane_g1

0x61f5,	// (0x000332dd) grid_highlight_pane_cp8

0x8b1f,	// (0x00035c07) ai2_gene_pane_t1_ParamLimits

0x8b1f,	// (0x00035c07) ai2_gene_pane_t1

0xb3ab,	// (0x00038493) aid_height_parent_landscape

0xc035,	// (0x0003911d) aid_height_set_list

0x875d,	// (0x00035845) aid_size_parent

0x8843,	// (0x0003592b) aid_size_cell_graphic_pane_ParamLimits

0x8a74,	// (0x00035b5c) popup_ai2_data_window_g1_ParamLimits

0x8a74,	// (0x00035b5c) popup_ai2_data_window_g1

0x8a80,	// (0x00035b68) ai2_news_ticker_pane_g1

0x8a88,	// (0x00035b70) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003cac0) ai2_news_ticker_pane_g

0x8a90,	// (0x00035b78) ai2_news_ticker_pane_t1

0x8a9e,	// (0x00035b86) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003cac5) ai2_news_ticker_pane_t

0x8acb,	// (0x00035bb3) heading_ai2_gene_pane_g1

0x8ad3,	// (0x00035bbb) heading_ai2_gene_pane_t1_ParamLimits

0x8ad3,	// (0x00035bbb) heading_ai2_gene_pane_t1

0x8ae8,	// (0x00035bd0) list_highlight_pane_cp6

0xc286,	// (0x0003936e) ai2_gene_pane_ParamLimits

0xc286,	// (0x0003936e) ai2_gene_pane

0xc2a9,	// (0x00039391) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003caca) list_ai2_gene_pane_t

0x8af0,	// (0x00035bd8) list_highlight_pane_cp8_ParamLimits

0x8af0,	// (0x00035bd8) list_highlight_pane_cp8

0x8b01,	// (0x00035be9) ai2_gene_pane_g1_ParamLimits

0x8b01,	// (0x00035be9) ai2_gene_pane_g1

0x8b13,	// (0x00035bfb) ai2_gene_pane_g2_ParamLimits

0x8b13,	// (0x00035bfb) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003cacf) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003cacf) ai2_gene_pane_g

0x67ab,	// (0x00033893) scroll_pane_cp12

0xb368,	// (0x00038450) control_pane_t3_ParamLimits

0xb368,	// (0x00038450) control_pane_t3

0x2061,	// (0x0002f149) status_small_pane_g8_ParamLimits

0x2061,	// (0x0002f149) status_small_pane_g8

0xb49a,	// (0x00038582) popup_find_window_ParamLimits

0xb68d,	// (0x00038775) popup_note_image_window_ParamLimits

0x325c,	// (0x00030344) list_double2_graphic_pane_vc_g1_ParamLimits

0x325c,	// (0x00030344) list_double2_graphic_pane_vc_g1

0x71d7,	// (0x000342bf) list_double2_graphic_pane_vc_g2_ParamLimits

0x71d7,	// (0x000342bf) list_double2_graphic_pane_vc_g2

0x48dd,	// (0x000319c5) list_double2_graphic_pane_vc_g3_ParamLimits

0x48dd,	// (0x000319c5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003c8ab) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003c8ab) list_double2_graphic_pane_vc_g

0x3268,	// (0x00030350) list_double2_graphic_pane_vc_t1_ParamLimits

0x3268,	// (0x00030350) list_double2_graphic_pane_vc_t1

0x71d7,	// (0x000342bf) list_single_heading_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_single_heading_pane_vc_g1

0x48dd,	// (0x000319c5) list_single_heading_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_single_heading_pane_vc_g

0x327e,	// (0x00030366) list_single_heading_pane_vc_t1_ParamLimits

0x327e,	// (0x00030366) list_single_heading_pane_vc_t1

0x3294,	// (0x0003037c) list_single_heading_pane_vc_t2_ParamLimits

0x3294,	// (0x0003037c) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003c8cc) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003c8cc) list_single_heading_pane_vc_t

0x767d,	// (0x00034765) list_setting_number_pane_vc_g1_ParamLimits

0x767d,	// (0x00034765) list_setting_number_pane_vc_g1

0x7689,	// (0x00034771) list_setting_number_pane_vc_g2_ParamLimits

0x7689,	// (0x00034771) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003c8d1) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003c8d1) list_setting_number_pane_vc_g

0x32a6,	// (0x0003038e) list_setting_number_pane_vc_t1_ParamLimits

0x32a6,	// (0x0003038e) list_setting_number_pane_vc_t1

0x32ba,	// (0x000303a2) list_setting_number_pane_vc_t2_ParamLimits

0x32ba,	// (0x000303a2) list_setting_number_pane_vc_t2

0x32d2,	// (0x000303ba) list_setting_number_pane_vc_t3_ParamLimits

0x32d2,	// (0x000303ba) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003c8d6) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003c8d6) list_setting_number_pane_vc_t

0x32f8,	// (0x000303e0) set_value_pane_vc_ParamLimits

0x32f8,	// (0x000303e0) set_value_pane_vc

0x87c2,	// (0x000358aa) list_double2_graphic_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double2_graphic_pane_vc

0x33a4,	// (0x0003048c) list_double2_large_graphic_pane_vc_ParamLimits

0x33a4,	// (0x0003048c) list_double2_large_graphic_pane_vc

0x87c2,	// (0x000358aa) list_double2_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double2_pane_vc

0x87c2,	// (0x000358aa) list_double_graphic_heading_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_graphic_heading_pane_vc

0x87c2,	// (0x000358aa) list_double_graphic_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_graphic_pane_vc

0x87c2,	// (0x000358aa) list_double_heading_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_heading_pane_vc

0x33b4,	// (0x0003049c) list_double_large_graphic_pane_vc_ParamLimits

0x33b4,	// (0x0003049c) list_double_large_graphic_pane_vc

0x87c2,	// (0x000358aa) list_double_number_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_number_pane_vc

0x87c2,	// (0x000358aa) list_double_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_pane_vc

0x87c2,	// (0x000358aa) list_double_time_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_double_time_pane_vc

0x87c2,	// (0x000358aa) list_setting_number_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_setting_number_pane_vc

0x87c2,	// (0x000358aa) list_setting_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_setting_pane_vc

0x87c2,	// (0x000358aa) list_single_graphic_heading_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_single_graphic_heading_pane_vc

0x87c2,	// (0x000358aa) list_single_heading_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_single_heading_pane_vc

0x87c2,	// (0x000358aa) list_single_number_heading_pane_vc_ParamLimits

0x87c2,	// (0x000358aa) list_single_number_heading_pane_vc

0x325c,	// (0x00030344) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x325c,	// (0x00030344) list_double_graphic_heading_pane_vc_g1

0x71d7,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x71d7,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2

0x48dd,	// (0x000319c5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x48dd,	// (0x000319c5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003c8ab) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003c8ab) list_double_graphic_heading_pane_vc_g

0x33e7,	// (0x000304cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x33e7,	// (0x000304cf) list_double_graphic_heading_pane_vc_t1

0x33fd,	// (0x000304e5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x33fd,	// (0x000304e5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003cadb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003cadb) list_double_graphic_heading_pane_vc_t

0x767d,	// (0x00034765) list_setting_pane_vc_g1_ParamLimits

0x767d,	// (0x00034765) list_setting_pane_vc_g1

0x7689,	// (0x00034771) list_setting_pane_vc_g2_ParamLimits

0x7689,	// (0x00034771) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003c8d1) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003c8d1) list_setting_pane_vc_g

0x3415,	// (0x000304fd) list_setting_pane_vc_t1_ParamLimits

0x3415,	// (0x000304fd) list_setting_pane_vc_t1

0x342d,	// (0x00030515) list_setting_pane_vc_t2_ParamLimits

0x342d,	// (0x00030515) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0003cb1e) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0003cb1e) list_setting_pane_vc_t

0x32f8,	// (0x000303e0) set_value_pane_cp_vc_ParamLimits

0x32f8,	// (0x000303e0) set_value_pane_cp_vc

0x71d7,	// (0x000342bf) list_single_number_heading_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_single_number_heading_pane_vc_g1

0x48dd,	// (0x000319c5) list_single_number_heading_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_single_number_heading_pane_vc_g

0x3443,	// (0x0003052b) list_single_number_heading_pane_vc_t1_ParamLimits

0x3443,	// (0x0003052b) list_single_number_heading_pane_vc_t1

0x3459,	// (0x00030541) list_single_number_heading_pane_vc_t2_ParamLimits

0x3459,	// (0x00030541) list_single_number_heading_pane_vc_t2

0x346b,	// (0x00030553) list_single_number_heading_pane_vc_t3_ParamLimits

0x346b,	// (0x00030553) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0003cb23) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003cb23) list_single_number_heading_pane_vc_t

0x325c,	// (0x00030344) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x325c,	// (0x00030344) list_single_graphic_heading_pane_vc_g1

0x71d7,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x71d7,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4

0x48dd,	// (0x000319c5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x48dd,	// (0x000319c5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0003c8ab) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003c8ab) list_single_graphic_heading_pane_vc_g

0x327e,	// (0x00030366) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x327e,	// (0x00030366) list_single_graphic_heading_pane_vc_t1

0x347d,	// (0x00030565) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x347d,	// (0x00030565) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0003cb2a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0003cb2a) list_single_graphic_heading_pane_vc_t

0x71d7,	// (0x000342bf) list_double2_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_double2_pane_vc_g1

0x48dd,	// (0x000319c5) list_double2_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_double2_pane_vc_g

0x348f,	// (0x00030577) list_double2_pane_vc_t1_ParamLimits

0x348f,	// (0x00030577) list_double2_pane_vc_t1

0x34a5,	// (0x0003058d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x34a5,	// (0x0003058d) list_double2_large_graphic_pane_vc_g1

0x34b1,	// (0x00030599) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x34b1,	// (0x00030599) list_double2_large_graphic_pane_vc_g2

0x34bd,	// (0x000305a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x34bd,	// (0x000305a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0003c6d2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0003c6d2) list_double2_large_graphic_pane_vc_g

0x34c9,	// (0x000305b1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x34c9,	// (0x000305b1) list_double2_large_graphic_pane_vc_t1

0x4d13,	// (0x00031dfb) list_double_time_pane_vc_g1_ParamLimits

0x4d13,	// (0x00031dfb) list_double_time_pane_vc_g1

0x4d1f,	// (0x00031e07) list_double_time_pane_vc_g2_ParamLimits

0x4d1f,	// (0x00031e07) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0003cb2f) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0003cb2f) list_double_time_pane_vc_g

0x34df,	// (0x000305c7) list_double_time_pane_vc_t1_ParamLimits

0x34df,	// (0x000305c7) list_double_time_pane_vc_t1

0x34fd,	// (0x000305e5) list_double_time_pane_vc_t2_ParamLimits

0x34fd,	// (0x000305e5) list_double_time_pane_vc_t2

0x353b,	// (0x00030623) list_double_time_pane_vc_t3_ParamLimits

0x353b,	// (0x00030623) list_double_time_pane_vc_t3

0x354d,	// (0x00030635) list_double_time_pane_vc_t4_ParamLimits

0x354d,	// (0x00030635) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0003cb34) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003cb34) list_double_time_pane_vc_t

0x71d7,	// (0x000342bf) list_double_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_double_pane_vc_g1

0x48dd,	// (0x000319c5) list_double_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_double_pane_vc_g

0x355f,	// (0x00030647) list_double_pane_vc_t1_ParamLimits

0x355f,	// (0x00030647) list_double_pane_vc_t1

0x3571,	// (0x00030659) list_double_pane_vc_t2_ParamLimits

0x3571,	// (0x00030659) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0003cb3d) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0003cb3d) list_double_pane_vc_t

0x71d7,	// (0x000342bf) list_double_number_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_double_number_pane_vc_g1

0x48dd,	// (0x000319c5) list_double_number_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_double_number_pane_vc_g

0x3587,	// (0x0003066f) list_double_number_pane_vc_t1_ParamLimits

0x3587,	// (0x0003066f) list_double_number_pane_vc_t1

0x3599,	// (0x00030681) list_double_number_pane_vc_t2_ParamLimits

0x3599,	// (0x00030681) list_double_number_pane_vc_t2

0x3571,	// (0x00030659) list_double_number_pane_vc_t3_ParamLimits

0x3571,	// (0x00030659) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0003cb42) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0003cb42) list_double_number_pane_vc_t

0x35ab,	// (0x00030693) list_double_large_graphic_pane_vc_g1_ParamLimits

0x35ab,	// (0x00030693) list_double_large_graphic_pane_vc_g1

0x35cd,	// (0x000306b5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x35cd,	// (0x000306b5) list_double_large_graphic_pane_vc_g2

0x35de,	// (0x000306c6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x35de,	// (0x000306c6) list_double_large_graphic_pane_vc_g3

0x35ea,	// (0x000306d2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x35ea,	// (0x000306d2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0003cb49) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0003cb49) list_double_large_graphic_pane_vc_g

0x35f9,	// (0x000306e1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x35f9,	// (0x000306e1) list_double_large_graphic_pane_vc_t1

0x360b,	// (0x000306f3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x360b,	// (0x000306f3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0003cb52) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0003cb52) list_double_large_graphic_pane_vc_t

0x71d7,	// (0x000342bf) list_double_heading_pane_vc_g1_ParamLimits

0x71d7,	// (0x000342bf) list_double_heading_pane_vc_g1

0x48dd,	// (0x000319c5) list_double_heading_pane_vc_g2_ParamLimits

0x48dd,	// (0x000319c5) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003c6ba) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003c6ba) list_double_heading_pane_vc_g

0x3625,	// (0x0003070d) list_double_heading_pane_vc_t1_ParamLimits

0x3625,	// (0x0003070d) list_double_heading_pane_vc_t1

0x3637,	// (0x0003071f) list_double_heading_pane_vc_t2_ParamLimits

0x3637,	// (0x0003071f) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003cb57) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003cb57) list_double_heading_pane_vc_t

0x364d,	// (0x00030735) list_double_graphic_pane_vc_g1_ParamLimits

0x364d,	// (0x00030735) list_double_graphic_pane_vc_g1

0x4d2b,	// (0x00031e13) list_double_graphic_pane_vc_g2_ParamLimits

0x4d2b,	// (0x00031e13) list_double_graphic_pane_vc_g2

0x71d7,	// (0x000342bf) list_double_graphic_pane_vc_g3_ParamLimits

0x71d7,	// (0x000342bf) list_double_graphic_pane_vc_g3

0x0003,

0xfa74,	// (0x0003cb5c) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0003cb5c) list_double_graphic_pane_vc_g

0x3659,	// (0x00030741) list_double_graphic_pane_vc_t1_ParamLimits

0x3659,	// (0x00030741) list_double_graphic_pane_vc_t1

0x3677,	// (0x0003075f) list_double_graphic_pane_vc_t2_ParamLimits

0x3677,	// (0x0003075f) list_double_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x0003cb65) list_double_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x0003cb65) list_double_graphic_pane_vc_t

0x39b5,	// (0x00030a9d) aid_size_cell_fastswap

0xafab,	// (0x00038093) aid_size_cell_touch_ParamLimits

0xafab,	// (0x00038093) aid_size_cell_touch

0x3c0e,	// (0x00030cf6) popup_fast_swap_wide_window_ParamLimits

0x3c0e,	// (0x00030cf6) popup_fast_swap_wide_window

0xb127,	// (0x0003820f) touch_pane_ParamLimits

0xb127,	// (0x0003820f) touch_pane

0x6804,	// (0x000338ec) button_value_adjust_pane_cp2

0x2f0c,	// (0x0002fff4) button_value_adjust_pane_cp4

0x2f2c,	// (0x00030014) form_field_data_pane_cp2

0xac5e,	// (0x00037d46) form_field_data_wide_pane_cp2

0x6b64,	// (0x00033c4c) bg_scroll_pane_ParamLimits

0x3fc0,	// (0x000310a8) scroll_handle_pane_ParamLimits

0x3fd4,	// (0x000310bc) scroll_sc2_down_pane_ParamLimits

0x3fd4,	// (0x000310bc) scroll_sc2_down_pane

0x6b95,	// (0x00033c7d) scroll_sc2_up_pane_ParamLimits

0x6b95,	// (0x00033c7d) scroll_sc2_up_pane

0xc3bf,	// (0x000394a7) grid_wheel_folder_pane_g1_ParamLimits

0xc3bf,	// (0x000394a7) grid_wheel_folder_pane_g1

0x4188,	// (0x00031270) clock_nsta_pane_cp2_ParamLimits

0x4188,	// (0x00031270) clock_nsta_pane_cp2

0x1f5e,	// (0x0002f046) listscroll_midp_pane_ParamLimits

0x1f6a,	// (0x0002f052) midp_canvas_pane

0x740f,	// (0x000344f7) nsta_clock_indic_pane

0x7437,	// (0x0003451f) listscroll_form_pane_vc

0x743f,	// (0x00034527) listscroll_set_pane_vc_ParamLimits

0x743f,	// (0x00034527) listscroll_set_pane_vc

0xba63,	// (0x00038b4b) clock_nsta_pane

0xba8d,	// (0x00038b75) indicator_nsta_pane

0x7575,	// (0x0003465d) bg_popup_sub_pane_cp2_ParamLimits

0x7589,	// (0x00034671) find_pane_cp2_ParamLimits

0x7589,	// (0x00034671) find_pane_cp2

0x759f,	// (0x00034687) grid_toobar_pane_ParamLimits

0x7695,	// (0x0003477d) list_form_gen_pane_vc_ParamLimits

0x7695,	// (0x0003477d) list_form_gen_pane_vc

0x76ab,	// (0x00034793) scroll_pane_cp8_vc_ParamLimits

0x76ab,	// (0x00034793) scroll_pane_cp8_vc

0x76fb,	// (0x000347e3) data_form_wide_pane_vc_ParamLimits

0x76fb,	// (0x000347e3) data_form_wide_pane_vc

0x7707,	// (0x000347ef) form_field_data_wide_pane_vc_g1

0x770f,	// (0x000347f7) form_field_data_wide_pane_vc_t1_ParamLimits

0x770f,	// (0x000347f7) form_field_data_wide_pane_vc_t1

0x6818,	// (0x00033900) input_focus_pane_cp6_vc_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_cp6_vc

0x7960,	// (0x00034a48) list_midp_pane_ParamLimits

0x8891,	// (0x00035979) scroll_pane_cp16_ParamLimits

0x8891,	// (0x00035979) scroll_pane_cp16

0x79a2,	// (0x00034a8a) button_value_adjust_pane_ParamLimits

0x79a2,	// (0x00034a8a) button_value_adjust_pane

0xc046,	// (0x0003912e) button_value_adjust_pane_cp6_ParamLimits

0xc046,	// (0x0003912e) button_value_adjust_pane_cp6

0xc150,	// (0x00039238) settings_code_pane_cp_ParamLimits

0xc150,	// (0x00039238) settings_code_pane_cp

0x61eb,	// (0x000332d3) cell_touch_pane_g1

0x61eb,	// (0x000332d3) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0003c7f0) cell_touch_pane_g

0xc2b7,	// (0x0003939f) cell_touch_pane_cp_ParamLimits

0xc2b7,	// (0x0003939f) cell_touch_pane_cp

0xc2d3,	// (0x000393bb) cell_touch_pane_ParamLimits

0xc2d3,	// (0x000393bb) cell_touch_pane

0x61eb,	// (0x000332d3) scroll_sc2_down_pane_g1

0x61eb,	// (0x000332d3) scroll_sc2_up_pane_g1

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp4_vc

0x8b92,	// (0x00035c7a) list_set_graphic_pane_vc_g1_ParamLimits

0x8b92,	// (0x00035c7a) list_set_graphic_pane_vc_g1

0x8b9e,	// (0x00035c86) list_set_graphic_pane_vc_g2_ParamLimits

0x8b9e,	// (0x00035c86) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003cae0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003cae0) list_set_graphic_pane_vc_g

0x8baa,	// (0x00035c92) text_primary_small_cp13_vc_ParamLimits

0x8baa,	// (0x00035c92) text_primary_small_cp13_vc

0x8bc2,	// (0x00035caa) list_set_graphic_pane_vc_ParamLimits

0x8bc2,	// (0x00035caa) list_set_graphic_pane_vc

0x61f5,	// (0x000332dd) input_focus_pane_cp2_vc

0x61eb,	// (0x000332d3) setting_code_pane_vc_g1

0x626a,	// (0x00033352) setting_code_pane_vc_t1

0x8bd3,	// (0x00035cbb) set_text_pane_vc_t1_ParamLimits

0x8bd3,	// (0x00035cbb) set_text_pane_vc_t1

0x61f5,	// (0x000332dd) input_focus_pane_cp1_vc

0x8bed,	// (0x00035cd5) list_set_text_pane_vc

0x61eb,	// (0x000332d3) setting_text_pane_vc_g1

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp2_vc

0x6261,	// (0x00033349) setting_slider_graphic_pane_vc_g1

0x8bf7,	// (0x00035cdf) setting_slider_graphic_pane_vc_t1

0x8c06,	// (0x00035cee) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003cae5) setting_slider_graphic_pane_vc_t

0x8c15,	// (0x00035cfd) slider_set_pane_cp_vc

0x8c1d,	// (0x00035d05) slider_set_pane_vc_g1

0x8c26,	// (0x00035d0e) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003caea) slider_set_pane_vc_g

0x6870,	// (0x00033958) set_opt_bg_pane_g1_copy1

0x6878,	// (0x00033960) set_opt_bg_pane_g2_copy1

0x8c52,	// (0x00035d3a) set_opt_bg_pane_g3_copy1

0x6888,	// (0x00033970) set_opt_bg_pane_g4_copy1

0x6890,	// (0x00033978) set_opt_bg_pane_g5_copy1

0x6898,	// (0x00033980) set_opt_bg_pane_g6_copy1

0x8c5a,	// (0x00035d42) set_opt_bg_pane_g7_copy1

0x8c62,	// (0x00035d4a) set_opt_bg_pane_g8_copy1

0x8c6a,	// (0x00035d52) set_opt_bg_pane_g9_copy1

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp_vc

0x8c72,	// (0x00035d5a) setting_slider_pane_vc_t1

0x8c81,	// (0x00035d69) setting_slider_pane_vc_t2

0x8c90,	// (0x00035d78) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003caf9) setting_slider_pane_vc_t

0x8c9f,	// (0x00035d87) slider_set_pane_vc

0x49dd,	// (0x00031ac5) volume_set_pane_vc_g1

0x4cc2,	// (0x00031daa) volume_set_pane_vc_g2

0x4ccb,	// (0x00031db3) volume_set_pane_vc_g3

0x4cd4,	// (0x00031dbc) volume_set_pane_vc_g4

0x4cdd,	// (0x00031dc5) volume_set_pane_vc_g5

0x4ce6,	// (0x00031dce) volume_set_pane_vc_g6

0x4cef,	// (0x00031dd7) volume_set_pane_vc_g7

0x4cf8,	// (0x00031de0) volume_set_pane_vc_g8

0x4d01,	// (0x00031de9) volume_set_pane_vc_g9

0x4d0a,	// (0x00031df2) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0003cb00) volume_set_pane_vc_g

0x8ca7,	// (0x00035d8f) volume_set_pane_vc

0x8caf,	// (0x00035d97) button_value_adjust_pane_cp1_vc

0x8cb7,	// (0x00035d9f) list_highlight_pane_cp2_vc

0x8cc0,	// (0x00035da8) list_set_pane_vc_ParamLimits

0x8cc0,	// (0x00035da8) list_set_pane_vc

0x8d12,	// (0x00035dfa) main_pane_set_vc_t1_ParamLimits

0x8d12,	// (0x00035dfa) main_pane_set_vc_t1

0x8d27,	// (0x00035e0f) main_pane_set_vc_t2_ParamLimits

0x8d27,	// (0x00035e0f) main_pane_set_vc_t2

0x8d39,	// (0x00035e21) main_pane_set_vc_t3_ParamLimits

0x8d39,	// (0x00035e21) main_pane_set_vc_t3

0x8d4b,	// (0x00035e33) main_pane_set_vc_t4_ParamLimits

0x8d4b,	// (0x00035e33) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0003cb15) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0003cb15) main_pane_set_vc_t

0x8d5d,	// (0x00035e45) setting_code_pane_vc_ParamLimits

0x8d5d,	// (0x00035e45) setting_code_pane_vc

0x8d6c,	// (0x00035e54) setting_slider_graphic_pane_vc

0x8d6c,	// (0x00035e54) setting_slider_pane_vc

0x8d6c,	// (0x00035e54) setting_text_pane_vc

0x8d6c,	// (0x00035e54) setting_volume_pane_vc

0x8d74,	// (0x00035e5c) scroll_pane_cp121_vc

0x67f2,	// (0x000338da) set_content_pane_vc

0x8d7c,	// (0x00035e64) button_value_adjust_pane_g1

0x8d85,	// (0x00035e6d) button_value_adjust_pane_g2

0x0001,

0xfa82,	// (0x0003cb6a) button_value_adjust_pane_g

0x8d8e,	// (0x00035e76) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8d8e,	// (0x00035e76) form_field_slider_wide_pane_vc_t1

0x8da0,	// (0x00035e88) form_field_slider_wide_pane_vc_t2_ParamLimits

0x8da0,	// (0x00035e88) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa87,	// (0x0003cb6f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x0003cb6f) form_field_slider_wide_pane_vc_t

0x6386,	// (0x0003346e) input_focus_pane_cp10_vc_ParamLimits

0x6386,	// (0x0003346e) input_focus_pane_cp10_vc

0x8dc8,	// (0x00035eb0) slider_cont_pane_cp1_vc_ParamLimits

0x8dc8,	// (0x00035eb0) slider_cont_pane_cp1_vc

0x8dd8,	// (0x00035ec0) slider_form_pane_g1_cp2

0x8c26,	// (0x00035d0e) slider_form_pane_g2_cp2

0x8e05,	// (0x00035eed) form_field_slider_pane_vc_t3

0x8e13,	// (0x00035efb) form_field_slider_pane_vc_t4

0x8e21,	// (0x00035f09) slider_form_pane_vc_ParamLimits

0x8e21,	// (0x00035f09) slider_form_pane_vc

0x8e2e,	// (0x00035f16) form_field_slider_pane_vc_t1_ParamLimits

0x8e2e,	// (0x00035f16) form_field_slider_pane_vc_t1

0x8da0,	// (0x00035e88) form_field_slider_pane_vc_t2_ParamLimits

0x8da0,	// (0x00035e88) form_field_slider_pane_vc_t2

0x0001,

0xfa99,	// (0x0003cb81) form_field_slider_pane_vc_t_ParamLimits

0xfa99,	// (0x0003cb81) form_field_slider_pane_vc_t

0x6386,	// (0x0003346e) input_focus_pane_cp9_vc_ParamLimits

0x6386,	// (0x0003346e) input_focus_pane_cp9_vc

0x8e44,	// (0x00035f2c) slider_cont_pane_vc_ParamLimits

0x8e44,	// (0x00035f2c) slider_cont_pane_vc

0x8e56,	// (0x00035f3e) list_form_graphic_pane_cp_vc_ParamLimits

0x8e56,	// (0x00035f3e) list_form_graphic_pane_cp_vc

0x7707,	// (0x000347ef) form_field_popup_wide_pane_vc_g1

0x8e6b,	// (0x00035f53) form_field_popup_wide_pane_vc_t1_ParamLimits

0x8e6b,	// (0x00035f53) form_field_popup_wide_pane_vc_t1

0x6818,	// (0x00033900) input_focus_pane_cp8_vc_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_cp8_vc

0x8eaa,	// (0x00035f92) list_form_wide_pane_vc_ParamLimits

0x8eaa,	// (0x00035f92) list_form_wide_pane_vc

0x8eb6,	// (0x00035f9e) list_form_graphic_pane_vc_g1

0x8ebe,	// (0x00035fa6) list_form_graphic_pane_vc_t1_ParamLimits

0x8ebe,	// (0x00035fa6) list_form_graphic_pane_vc_t1

0x6243,	// (0x0003332b) list_highlight_pane_cp5_vc_ParamLimits

0x6243,	// (0x0003332b) list_highlight_pane_cp5_vc

0x8eda,	// (0x00035fc2) list_form_graphic_pane_vc_ParamLimits

0x8eda,	// (0x00035fc2) list_form_graphic_pane_vc

0x7707,	// (0x000347ef) form_field_popup_pane_vc_g1

0x8ef0,	// (0x00035fd8) form_field_popup_pane_vc_t1_ParamLimits

0x8ef0,	// (0x00035fd8) form_field_popup_pane_vc_t1

0x6818,	// (0x00033900) input_focus_pane_cp7_vc_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_cp7_vc

0x8f05,	// (0x00035fed) list_form_pane_vc_ParamLimits

0x8f05,	// (0x00035fed) list_form_pane_vc

0x8f11,	// (0x00035ff9) data_form_pane_vc_t1_ParamLimits

0x8f11,	// (0x00035ff9) data_form_pane_vc_t1

0x6870,	// (0x00033958) input_focus_pane_vc_g1

0x6878,	// (0x00033960) input_focus_pane_vc_g2

0x6880,	// (0x00033968) input_focus_pane_vc_g3

0x6888,	// (0x00033970) input_focus_pane_vc_g4

0x6890,	// (0x00033978) input_focus_pane_vc_g5

0x6898,	// (0x00033980) input_focus_pane_vc_g6

0x68a0,	// (0x00033988) input_focus_pane_vc_g7

0x68a8,	// (0x00033990) input_focus_pane_vc_g8

0x68b0,	// (0x00033998) input_focus_pane_vc_g9

0x61eb,	// (0x000332d3) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0003c779) input_focus_pane_vc_g

0x76fb,	// (0x000347e3) data_form_pane_vc_ParamLimits

0x76fb,	// (0x000347e3) data_form_pane_vc

0x7707,	// (0x000347ef) form_field_data_pane_vc_g1

0x8f2c,	// (0x00036014) form_field_data_pane_vc_t1_ParamLimits

0x8f2c,	// (0x00036014) form_field_data_pane_vc_t1

0x6818,	// (0x00033900) input_focus_pane_vc_ParamLimits

0x6818,	// (0x00033900) input_focus_pane_vc

0x8f42,	// (0x0003602a) button_value_adjust_pane_cp3_vc

0x8f4a,	// (0x00036032) button_value_adjust_pane_cp5_vc

0x8f52,	// (0x0003603a) form_field_data_pane_vc_ParamLimits

0x8f52,	// (0x0003603a) form_field_data_pane_vc

0x8f69,	// (0x00036051) form_field_data_pane_vc_cp2

0x8f71,	// (0x00036059) form_field_data_wide_pane_vc_ParamLimits

0x8f71,	// (0x00036059) form_field_data_wide_pane_vc

0x8f87,	// (0x0003606f) form_field_data_wide_pane_vc_cp2

0x8f8f,	// (0x00036077) form_field_popup_pane_vc_ParamLimits

0x8f8f,	// (0x00036077) form_field_popup_pane_vc

0x8fa6,	// (0x0003608e) form_field_popup_wide_pane_vc_ParamLimits

0x8fa6,	// (0x0003608e) form_field_popup_wide_pane_vc

0x8fbc,	// (0x000360a4) form_field_slider_pane_vc_ParamLimits

0x8fbc,	// (0x000360a4) form_field_slider_pane_vc

0x8fcf,	// (0x000360b7) form_field_slider_wide_pane_vc_ParamLimits

0x8fcf,	// (0x000360b7) form_field_slider_wide_pane_vc

0xc2f1,	// (0x000393d9) grid_touch_1_pane_ParamLimits

0xc2f1,	// (0x000393d9) grid_touch_1_pane

0xc305,	// (0x000393ed) grid_touch_2_pane_ParamLimits

0xc305,	// (0x000393ed) grid_touch_2_pane

0x9048,	// (0x00036130) touch_pane_g1_ParamLimits

0x9048,	// (0x00036130) touch_pane_g1

0x8fe2,	// (0x000360ca) cell_app_pane_cp_wide_ParamLimits

0x8fe2,	// (0x000360ca) cell_app_pane_cp_wide

0x8ff3,	// (0x000360db) grid_popup_fast_wide_pane_ParamLimits

0x8ff3,	// (0x000360db) grid_popup_fast_wide_pane

0x9007,	// (0x000360ef) scroll_pane_cp19_ParamLimits

0x9007,	// (0x000360ef) scroll_pane_cp19

0x61f5,	// (0x000332dd) bg_popup_window_pane_cp20

0x901b,	// (0x00036103) listscroll_popup_fast_wide_pane

0x6981,	// (0x00033a69) grid_indicator_nsta_pane

0x9023,	// (0x0003610b) clock_nsta_pane_g1

0x902c,	// (0x00036114) clock_nsta_pane_t1

0xc32f,	// (0x00039417) cell_indicator_nsta_pane_ParamLimits

0xc32f,	// (0x00039417) cell_indicator_nsta_pane

0x9048,	// (0x00036130) cell_indicator_nsta_pane_g1

0xc346,	// (0x0003942e) cell_indicator_nsta_pane_g2

0x0001,

0xfaaa,	// (0x0003cb92) cell_indicator_nsta_pane_g

0x9056,	// (0x0003613e) clock_nsta_pane_cp

0x905e,	// (0x00036146) indicator_nsta_pane_cp

0x9066,	// (0x0003614e) nsta_clock_indic_pane_g1

0x628f,	// (0x00033377) grid_indicator_pane

0x6c87,	// (0x00033d6f) scroll_pane_cp29

0x40df,	// (0x000311c7) indicator_nsta_pane_cp2_ParamLimits

0x40df,	// (0x000311c7) indicator_nsta_pane_cp2

0x6243,	// (0x0003332b) main_apps_wheel_pane

0x783f,	// (0x00034927) form_midp_field_text_pane_ParamLimits

0x796c,	// (0x00034a54) scroll_bar_cp050_ParamLimits

0x90b6,	// (0x0003619e) cell_indicator_pane_ParamLimits

0x90b6,	// (0x0003619e) cell_indicator_pane

0x90ca,	// (0x000361b2) cell_indicator_pane_g1

0xc353,	// (0x0003943b) grid_wheel_folder_pane_ParamLimits

0xc353,	// (0x0003943b) grid_wheel_folder_pane

0xc361,	// (0x00039449) list_wheel_apps_pane_ParamLimits

0xc361,	// (0x00039449) list_wheel_apps_pane

0xc36d,	// (0x00039455) main_apps_wheel_pane_g1_ParamLimits

0xc36d,	// (0x00039455) main_apps_wheel_pane_g1

0xc379,	// (0x00039461) main_apps_wheel_pane_g2_ParamLimits

0xc379,	// (0x00039461) main_apps_wheel_pane_g2

0x0001,

0xfac6,	// (0x0003cbae) main_apps_wheel_pane_g_ParamLimits

0xfac6,	// (0x0003cbae) main_apps_wheel_pane_g

0xc385,	// (0x0003946d) main_apps_wheel_pane_t1_ParamLimits

0xc385,	// (0x0003946d) main_apps_wheel_pane_t1

0xc397,	// (0x0003947f) list_wheel_apps_pane_g1

0xc39f,	// (0x00039487) list_wheel_apps_pane_g2

0xc3a7,	// (0x0003948f) list_wheel_apps_pane_g3

0xc3af,	// (0x00039497) list_wheel_apps_pane_g4

0xc3b7,	// (0x0003949f) list_wheel_apps_pane_g5

0x0004,

0xfacb,	// (0x0003cbb3) list_wheel_apps_pane_g

0x712c,	// (0x00034214) navi_icon_text_pane

0xb96b,	// (0x00038a53) aid_fill_nsta

0x90d4,	// (0x000361bc) navi_icon_text_pane_g1

0x90e0,	// (0x000361c8) navi_icon_text_pane_t1

0x6fd6,	// (0x000340be) list_set_graphic_pane_t1_ParamLimits

0x6fd6,	// (0x000340be) list_set_graphic_pane_t1

0x8081,	// (0x00035169) popup_midp_note_alarm_window_t6_ParamLimits

0x8081,	// (0x00035169) popup_midp_note_alarm_window_t6

0x8093,	// (0x0003517b) popup_midp_note_alarm_window_t7_ParamLimits

0x8093,	// (0x0003517b) popup_midp_note_alarm_window_t7

0x80a5,	// (0x0003518d) popup_midp_note_alarm_window_t8_ParamLimits

0x80a5,	// (0x0003518d) popup_midp_note_alarm_window_t8

0x80b7,	// (0x0003519f) popup_midp_note_alarm_window_t9_ParamLimits

0x80b7,	// (0x0003519f) popup_midp_note_alarm_window_t9

0x80c9,	// (0x000351b1) popup_midp_note_alarm_window_t10_ParamLimits

0x80c9,	// (0x000351b1) popup_midp_note_alarm_window_t10

0x80db,	// (0x000351c3) popup_midp_note_alarm_window_t11_ParamLimits

0x80db,	// (0x000351c3) popup_midp_note_alarm_window_t11

0x80ed,	// (0x000351d5) scroll_pane_cp17_ParamLimits

0x80ed,	// (0x000351d5) scroll_pane_cp17

0x49dd,	// (0x00031ac5) volume_small_pane_cp_g1

0x4d48,	// (0x00031e30) volume_small_pane_cp_g2

0x4d51,	// (0x00031e39) volume_small_pane_cp_g3

0x4d5a,	// (0x00031e42) volume_small_pane_cp_g4

0x4d63,	// (0x00031e4b) volume_small_pane_cp_g5

0x4d6c,	// (0x00031e54) volume_small_pane_cp_g6

0x4d75,	// (0x00031e5d) volume_small_pane_cp_g7

0x4d7e,	// (0x00031e66) volume_small_pane_cp_g8

0x4d87,	// (0x00031e6f) volume_small_pane_cp_g9

0x4d90,	// (0x00031e78) volume_small_pane_cp_g10

0x72c8,	// (0x000343b0) midp_ticker_pane_g1_ParamLimits

0x72d4,	// (0x000343bc) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0003c845) midp_ticker_pane_g_ParamLimits

0x72e0,	// (0x000343c8) midp_ticker_pane_t1_ParamLimits

0xb987,	// (0x00038a6f) aid_fill_nsta_2

0x7958,	// (0x00034a40) list_form2_midp_pane

0x8791,	// (0x00035879) midp_editing_number_pane_ParamLimits

0x87a0,	// (0x00035888) midp_ticker_pane_ParamLimits

0x90f2,	// (0x000361da) form2_midp_field_pane

0x90fa,	// (0x000361e2) scroll_pane_cp51

0x911a,	// (0x00036202) form2_midp_button_pane_ParamLimits

0x911a,	// (0x00036202) form2_midp_button_pane

0x912c,	// (0x00036214) form2_midp_content_pane_ParamLimits

0x912c,	// (0x00036214) form2_midp_content_pane

0x9146,	// (0x0003622e) form2_midp_field_choice_group_pane

0x914e,	// (0x00036236) form2_midp_field_pane_g1

0x9156,	// (0x0003623e) form2_midp_field_pane_g2

0x915e,	// (0x00036246) form2_midp_field_pane_g3

0x9166,	// (0x0003624e) form2_midp_field_pane_g4

0x0003,

0xfaf0,	// (0x0003cbd8) form2_midp_field_pane_g

0x916e,	// (0x00036256) form2_midp_gauge_slider_pane

0x9176,	// (0x0003625e) form2_midp_gauge_wait_pane

0x917e,	// (0x00036266) form2_midp_image_pane_ParamLimits

0x917e,	// (0x00036266) form2_midp_image_pane

0xc3ec,	// (0x000394d4) form2_midp_label_pane_ParamLimits

0xc3ec,	// (0x000394d4) form2_midp_label_pane

0xc405,	// (0x000394ed) form2_midp_label_pane_cp_ParamLimits

0xc405,	// (0x000394ed) form2_midp_label_pane_cp

0x9199,	// (0x00036281) form2_midp_string_pane_ParamLimits

0x9199,	// (0x00036281) form2_midp_string_pane

0xae2a,	// (0x00037f12) form2_midp_text_pane_ParamLimits

0xae2a,	// (0x00037f12) form2_midp_text_pane

0x91ab,	// (0x00036293) form2_midp_time_pane

0x91bb,	// (0x000362a3) input_focus_pane_cp51_ParamLimits

0x91bb,	// (0x000362a3) input_focus_pane_cp51

0xc424,	// (0x0003950c) form2_midp_label_pane_t1_ParamLimits

0xc424,	// (0x0003950c) form2_midp_label_pane_t1

0xae43,	// (0x00037f2b) form2_mdip_text_pane_t1_ParamLimits

0xae43,	// (0x00037f2b) form2_mdip_text_pane_t1

0x36c7,	// (0x000307af) form2_midp_time_pane_t1

0x91db,	// (0x000362c3) form2_midp_gauge_slider_pane_t1

0xc45f,	// (0x00039547) form2_midp_gauge_slider_pane_t2

0xc471,	// (0x00039559) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf9,	// (0x0003cbe1) form2_midp_gauge_slider_pane_t

0x91ed,	// (0x000362d5) form2_midp_slider_pane

0x91f9,	// (0x000362e1) form2_midp_gauge_wait_pane_t1

0x9207,	// (0x000362ef) form2_midp_wait_pane_ParamLimits

0x9207,	// (0x000362ef) form2_midp_wait_pane

0x7de7,	// (0x00034ecf) list_single_2graphic_pane_cp4_ParamLimits

0x7de7,	// (0x00034ecf) list_single_2graphic_pane_cp4

0xbdeb,	// (0x00038ed3) list_single_midp_graphic_pane_cp_ParamLimits

0xbdeb,	// (0x00038ed3) list_single_midp_graphic_pane_cp

0x61f5,	// (0x000332dd) list_highlight_pane_cp20

0x9232,	// (0x0003631a) list_single_2graphic_pane_g1_cp4

0x8acb,	// (0x00035bb3) list_single_2graphic_pane_g2_cp4

0x923a,	// (0x00036322) list_single_2graphic_pane_t1_cp4

0x6243,	// (0x0003332b) list_highlight_pane_cp21

0x9249,	// (0x00036331) list_single_midp_graphic_pane_g4_cp

0x9258,	// (0x00036340) list_single_midp_graphic_pane_t1_cp

0xc483,	// (0x0003956b) form2_mdip_string_pane_t1_ParamLimits

0xc483,	// (0x0003956b) form2_mdip_string_pane_t1

0x61f5,	// (0x000332dd) bg_wml_button_pane_cp2

0x61eb,	// (0x000332d3) form2_midp_image_pane_g1

0x3df9,	// (0x00030ee1) list_double_large_graphic_pane_g5_ParamLimits

0x3df9,	// (0x00030ee1) list_double_large_graphic_pane_g5

0x1f5e,	// (0x0002f046) midp_form_pane_ParamLimits

0x6243,	// (0x0003332b) main_apps_wheel_pane_ParamLimits

0xb707,	// (0x000387ef) popup_preview_window_ParamLimits

0xb707,	// (0x000387ef) popup_preview_window

0x4862,	// (0x0003194a) popup_touch_info_window_ParamLimits

0x4862,	// (0x0003194a) popup_touch_info_window

0x4880,	// (0x00031968) popup_touch_menu_window_ParamLimits

0x4880,	// (0x00031968) popup_touch_menu_window

0x61e1,	// (0x000332c9) bg_popup_sub_pane_cp6

0x926d,	// (0x00036355) list_touch_menu_pane

0x9275,	// (0x0003635d) list_single_touch_menu_pane_ParamLimits

0x9275,	// (0x0003635d) list_single_touch_menu_pane

0x9289,	// (0x00036371) list_single_touch_menu_pane_t1

0x6243,	// (0x0003332b) bg_popup_sub_pane_cp7_ParamLimits

0x6243,	// (0x0003332b) bg_popup_sub_pane_cp7

0x9297,	// (0x0003637f) heading_sub_pane

0x929f,	// (0x00036387) list_touch_info_pane_ParamLimits

0x929f,	// (0x00036387) list_touch_info_pane

0x92ae,	// (0x00036396) list_single_touch_info_pane_ParamLimits

0x92ae,	// (0x00036396) list_single_touch_info_pane

0x92bf,	// (0x000363a7) list_single_touch_info_pane_t1

0x92cd,	// (0x000363b5) list_single_touch_info_pane_t2

0x0001,

0xfb07,	// (0x0003cbef) list_single_touch_info_pane_t

0x729e,	// (0x00034386) bg_popup_heading_pane_cp

0x92db,	// (0x000363c3) heading_sub_pane_t1

0x76c1,	// (0x000347a9) bg_popup_preview_window_pane_cp_ParamLimits

0x76c1,	// (0x000347a9) bg_popup_preview_window_pane_cp

0x9297,	// (0x0003637f) heading_preview_pane

0x929f,	// (0x00036387) list_preview_pane_ParamLimits

0x929f,	// (0x00036387) list_preview_pane

0x92e9,	// (0x000363d1) popup_preview_window_g1

0x92ae,	// (0x00036396) list_single_preview_pane_ParamLimits

0x92ae,	// (0x00036396) list_single_preview_pane

0x92f1,	// (0x000363d9) list_single_preview_pane_g1

0x92f9,	// (0x000363e1) list_single_preview_pane_t1

0x92bf,	// (0x000363a7) list_single_preview_pane_t2

0x0001,

0xfb0c,	// (0x0003cbf4) list_single_preview_pane_t

0x9307,	// (0x000363ef) bg_popup_heading_pane_cp2_ParamLimits

0x9307,	// (0x000363ef) bg_popup_heading_pane_cp2

0x931d,	// (0x00036405) heading_preview_pane_g1

0x9325,	// (0x0003640d) heading_preview_pane_t1_ParamLimits

0x9325,	// (0x0003640d) heading_preview_pane_t1

0x62a6,	// (0x0003338e) soft_indicator_pane_t1_ParamLimits

0x6788,	// (0x00033870) scroll_pane_ParamLimits

0x6b83,	// (0x00033c6b) scroll_sc2_left_pane

0x6b8c,	// (0x00033c74) scroll_sc2_right_pane

0x6bab,	// (0x00033c93) scroll_bg_pane_g1_ParamLimits

0x6bc0,	// (0x00033ca8) scroll_bg_pane_g2_ParamLimits

0x6bd8,	// (0x00033cc0) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0003c7d0) scroll_bg_pane_g_ParamLimits

0x6bab,	// (0x00033c93) scroll_handle_pane_g1_ParamLimits

0x6bfa,	// (0x00033ce2) scroll_handle_pane_g2_ParamLimits

0x6bd8,	// (0x00033cc0) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0003c7d7) scroll_handle_pane_g_ParamLimits

0x440c,	// (0x000314f4) popup_choice_list_window_ParamLimits

0x440c,	// (0x000314f4) popup_choice_list_window

0x7581,	// (0x00034669) choice_list_pane

0x7601,	// (0x000346e9) cell_toolbar_pane_t1

0x7629,	// (0x00034711) toolbar_button_pane_ParamLimits

0x8518,	// (0x00035600) ai_gene_pane_1_t2_ParamLimits

0x8518,	// (0x00035600) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003c9fa) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003c9fa) ai_gene_pane_1_t

0x9342,	// (0x0003642a) scroll_sc2_left_pane_g1

0x9342,	// (0x0003642a) scroll_sc2_right_pane_g1

0x7451,	// (0x00034539) bg_popup_sub_pane_cp10

0x934c,	// (0x00036434) list_choice_list_pane

0x9363,	// (0x0003644b) list_single_choice_list_pane_ParamLimits

0x9363,	// (0x0003644b) list_single_choice_list_pane

0x9377,	// (0x0003645f) list_single_choice_list_pane_g1

0x6964,	// (0x00033a4c) list_single_choice_list_pane_t1_ParamLimits

0x6964,	// (0x00033a4c) list_single_choice_list_pane_t1

0x937f,	// (0x00036467) choice_list_pane_g1

0x9387,	// (0x0003646f) choice_list_pane_t1

0x61e1,	// (0x000332c9) input_focus_pane_cp11

0x6af8,	// (0x00033be0) title_pane_stacon_g2_ParamLimits

0x6af8,	// (0x00033be0) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0003c7b6) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0003c7b6) title_pane_stacon_g

0x729e,	// (0x00034386) cursor_press_pane

0xb46e,	// (0x00038556) popup_fep_hwr_window_ParamLimits

0xb46e,	// (0x00038556) popup_fep_hwr_window

0x4504,	// (0x000315ec) popup_fep_vkb_window_ParamLimits

0x4504,	// (0x000315ec) popup_fep_vkb_window

0x9395,	// (0x0003647d) cursor_press_pane_g1

0x0002,

0xfb35,	// (0x0003cc1d) fep_vkb_side_pane_g_ParamLimits

0x4dce,	// (0x00031eb6) fep_hwr_candidate_pane_ParamLimits

0x4dce,	// (0x00031eb6) fep_hwr_candidate_pane

0x4df6,	// (0x00031ede) fep_hwr_side_pane_ParamLimits

0x4df6,	// (0x00031ede) fep_hwr_side_pane

0x4e16,	// (0x00031efe) fep_hwr_top_pane_ParamLimits

0x4e16,	// (0x00031efe) fep_hwr_top_pane

0x4e2e,	// (0x00031f16) fep_hwr_write_pane_ParamLimits

0x4e2e,	// (0x00031f16) fep_hwr_write_pane

0xfb35,	// (0x0003cc1d) fep_vkb_side_pane_g

0x939d,	// (0x00036485) fep_hwr_top_pane_g1

0x93af,	// (0x00036497) fep_hwr_top_pane_g2

0x4e5a,	// (0x00031f42) fep_hwr_top_pane_g3

0x0002,

0xfb11,	// (0x0003cbf9) fep_hwr_top_pane_g

0x4e6f,	// (0x00031f57) fep_hwr_top_text_pane

0x6d4e,	// (0x00033e36) fep_hwr_top_text_pane_g1

0x93e5,	// (0x000364cd) fep_hwr_top_text_pane_t1

0x4f5d,	// (0x00032045) fep_hwr_candidate_pane_g1

0xdd42,	// (0x0003ae2a) fep_vkb_keypad_pane_g3_ParamLimits

0xdd42,	// (0x0003ae2a) fep_vkb_keypad_pane_g3

0xdd64,	// (0x0003ae4c) fep_vkb_keypad_pane_g4_ParamLimits

0xdd64,	// (0x0003ae4c) fep_vkb_keypad_pane_g4

0xddd3,	// (0x0003aebb) fep_vkb_bottom_pane_g2_ParamLimits

0xddd3,	// (0x0003aebb) fep_vkb_bottom_pane_g2

0x0001,

0xfb3c,	// (0x0003cc24) fep_vkb_bottom_pane_g_ParamLimits

0xfb3c,	// (0x0003cc24) fep_vkb_bottom_pane_g

0x9342,	// (0x0003642a) cell_vkb_side_pane_g2

0x0001,

0xfb46,	// (0x0003cc2e) cell_vkb_side_pane_g

0xde17,	// (0x0003aeff) cell_vkb_side_pane_t1

0xde25,	// (0x0003af0d) cell_vkb_side_pane_t1_copy1

0x9342,	// (0x0003642a) bg_fep_vkb_candidate_pane_g2

0xdef3,	// (0x0003afdb) cell_vkb_candidate_pane_ParamLimits

0xdb87,	// (0x0003ac6f) aid_size_cell_vkb_ParamLimits

0xdb87,	// (0x0003ac6f) aid_size_cell_vkb

0xdef3,	// (0x0003afdb) cell_vkb_candidate_pane

0x4f77,	// (0x0003205f) bg_popup_fep_shadow_pane_g1

0xdbf1,	// (0x0003acd9) fep_vkb_bottom_pane_ParamLimits

0xdbf1,	// (0x0003acd9) fep_vkb_bottom_pane

0xdc2e,	// (0x0003ad16) fep_vkb_candidate_pane_ParamLimits

0xdc2e,	// (0x0003ad16) fep_vkb_candidate_pane

0xdc4a,	// (0x0003ad32) fep_vkb_keypad_pane_ParamLimits

0xdc4a,	// (0x0003ad32) fep_vkb_keypad_pane

0xdc7e,	// (0x0003ad66) fep_vkb_side_pane_ParamLimits

0xdc7e,	// (0x0003ad66) fep_vkb_side_pane

0xdcaa,	// (0x0003ad92) fep_vkb_top_pane_ParamLimits

0xdcaa,	// (0x0003ad92) fep_vkb_top_pane

0xdcd6,	// (0x0003adbe) fep_vkb_top_pane_g1_ParamLimits

0xdcd6,	// (0x0003adbe) fep_vkb_top_pane_g1

0xdce5,	// (0x0003adcd) fep_vkb_top_pane_g2_ParamLimits

0xdce5,	// (0x0003adcd) fep_vkb_top_pane_g2

0xdcf4,	// (0x0003addc) fep_vkb_top_pane_g3_ParamLimits

0xdcf4,	// (0x0003addc) fep_vkb_top_pane_g3

0x0003,

0xfb2c,	// (0x0003cc14) fep_vkb_top_pane_g_ParamLimits

0xfb2c,	// (0x0003cc14) fep_vkb_top_pane_g

0xdd12,	// (0x0003adfa) fep_vkb_top_text_pane_ParamLimits

0xdd12,	// (0x0003adfa) fep_vkb_top_text_pane

0xc541,	// (0x00039629) fep_vkb_side_pane_g1_ParamLimits

0xc541,	// (0x00039629) fep_vkb_side_pane_g1

0xdd31,	// (0x0003ae19) grid_vkb_side_pane_ParamLimits

0xdd31,	// (0x0003ae19) grid_vkb_side_pane

0x4f7f,	// (0x00032067) bg_popup_fep_shadow_pane_g2

0x4f88,	// (0x00032070) bg_popup_fep_shadow_pane_g3

0x4f90,	// (0x00032078) bg_popup_fep_shadow_pane_g4

0x4f99,	// (0x00032081) bg_popup_fep_shadow_pane_g5

0x4fa1,	// (0x00032089) bg_popup_fep_shadow_pane_g6

0x4fa9,	// (0x00032091) bg_popup_fep_shadow_pane_g7

0x6890,	// (0x00033978) bg_popup_fep_shadow_pane_g8

0xdd82,	// (0x0003ae6a) grid_vkb_keypad_number_pane_ParamLimits

0xdd82,	// (0x0003ae6a) grid_vkb_keypad_number_pane

0xdd92,	// (0x0003ae7a) grid_vkb_keypad_pane_ParamLimits

0xdd92,	// (0x0003ae7a) grid_vkb_keypad_pane

0xddb8,	// (0x0003aea0) fep_vkb_bottom_pane_g1_ParamLimits

0xddb8,	// (0x0003aea0) fep_vkb_bottom_pane_g1

0xdde1,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xdde1,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane

0xddf6,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xddf6,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane

0xde0b,	// (0x0003aef3) fep_vkb_top_text_pane_g1

0xc588,	// (0x00039670) fep_vkb_top_text_pane_t1

0xc59a,	// (0x00039682) cell_vkb_side_pane_ParamLimits

0xc59a,	// (0x00039682) cell_vkb_side_pane

0x9342,	// (0x0003642a) cell_vkb_side_pane_g1

0xde33,	// (0x0003af1b) cell_vkb_keypad_pane_ParamLimits

0xde33,	// (0x0003af1b) cell_vkb_keypad_pane

0xdea0,	// (0x0003af88) cell_vkb_keypad_pane_g1

0x0008,

0xfb59,	// (0x0003cc41) bg_popup_fep_shadow_pane_g

0x9342,	// (0x0003642a) cell_hwr_side_pane_g1

0x9342,	// (0x0003642a) cell_hwr_side_pane_g2

0xdeaa,	// (0x0003af92) cell_vkb_keypad_pane_t1

0xc5b0,	// (0x00039698) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5b0,	// (0x00039698) cell_vkb_keypad_bottom_left_pane

0xc5c5,	// (0x000396ad) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5c5,	// (0x000396ad) cell_vkb_keypad_bottom_right_pane

0x9342,	// (0x0003642a) cell_vkb_keypad_bottom_left_pane_g1

0x9342,	// (0x0003642a) cell_vkb_keypad_bottom_right_pane_g1

0xdeb8,	// (0x0003afa0) cell_vkb_keypad_number_pane_ParamLimits

0xdeb8,	// (0x0003afa0) cell_vkb_keypad_number_pane

0xded7,	// (0x0003afbf) cell_vkb_keypad_number_pane_g1

0xdee1,	// (0x0003afc9) cell_vkb_keypad_number_pane_g2

0xdeea,	// (0x0003afd2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4b,	// (0x0003cc33) cell_vkb_keypad_number_pane_g

0xdeaa,	// (0x0003af92) cell_vkb_keypad_number_pane_t1

0xdf0c,	// (0x0003aff4) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x0003cc2e) cell_hwr_side_pane_g

0xdf25,	// (0x0003b00d) cell_hwr_side_pane_t1

0x4fb9,	// (0x000320a1) cell_hwr_side_pane_t1_copy1

0xdd04,	// (0x0003adec) cell_hwr_candidate_pane_g1

0x4fc7,	// (0x000320af) cell_hwr_candidate_pane_t1

0x9342,	// (0x0003642a) cell_vkb_candidate_pane_g2

0xdfab,	// (0x0003b093) cell_vkb_candidate_pane_t1

0x4d99,	// (0x00031e81) bg_popup_fep_shadow_pane_ParamLimits

0x4d99,	// (0x00031e81) bg_popup_fep_shadow_pane

0x0732,	// (0x0002d81a) bg_fep_hwr_top_pane_g4

0x93c1,	// (0x000364a9) bg_hwr_side_pane_g1_ParamLimits

0x93c1,	// (0x000364a9) bg_hwr_side_pane_g1

0xc4fc,	// (0x000395e4) cell_hwr_side_pane_ParamLimits

0xc4fc,	// (0x000395e4) cell_hwr_side_pane

0x4ee6,	// (0x00031fce) fep_hwr_write_pane_g1_ParamLimits

0x4ee6,	// (0x00031fce) fep_hwr_write_pane_g1

0x4ef3,	// (0x00031fdb) fep_hwr_write_pane_g2_ParamLimits

0x4ef3,	// (0x00031fdb) fep_hwr_write_pane_g2

0x4f00,	// (0x00031fe8) fep_hwr_write_pane_g3_ParamLimits

0x4f00,	// (0x00031fe8) fep_hwr_write_pane_g3

0xc51c,	// (0x00039604) fep_hwr_write_pane_g4_ParamLimits

0xc51c,	// (0x00039604) fep_hwr_write_pane_g4

0x0005,

0xfb18,	// (0x0003cc00) fep_hwr_write_pane_g_ParamLimits

0xfb18,	// (0x0003cc00) fep_hwr_write_pane_g

0x0732,	// (0x0002d81a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0732,	// (0x0002d81a) bg_fep_hwr_candidate_pane_g2

0x4f23,	// (0x0003200b) cell_hwr_candidate_pane_ParamLimits

0x4f23,	// (0x0003200b) cell_hwr_candidate_pane

0x4f5d,	// (0x00032045) fep_hwr_candidate_pane_g1_ParamLimits

0xdbb5,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xdbb5,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2

0xdd04,	// (0x0003adec) fep_vkb_top_pane_g4_ParamLimits

0xdd04,	// (0x0003adec) fep_vkb_top_pane_g4

0xdd23,	// (0x0003ae0b) fep_vkb_side_pane_g2_ParamLimits

0xdd23,	// (0x0003ae0b) fep_vkb_side_pane_g2

0xab6c,	// (0x00037c54) list_setting_pane_t4_ParamLimits

0xab6c,	// (0x00037c54) list_setting_pane_t4

0xac06,	// (0x00037cee) list_setting_number_pane_t5_ParamLimits

0xac06,	// (0x00037cee) list_setting_number_pane_t5

0x1eba,	// (0x0002efa2) list_double_heading_pane_cp2_ParamLimits

0x1eba,	// (0x0002efa2) list_double_heading_pane_cp2

0x6826,	// (0x0003390e) list_double_heading_pane_g1_cp2_ParamLimits

0x6826,	// (0x0003390e) list_double_heading_pane_g1_cp2

0x6832,	// (0x0003391a) list_double_heading_pane_g2_cp2_ParamLimits

0x6832,	// (0x0003391a) list_double_heading_pane_g2_cp2

0xdfb9,	// (0x0003b0a1) list_double_heading_pane_t1_cp2_ParamLimits

0xdfb9,	// (0x0003b0a1) list_double_heading_pane_t1_cp2

0xdfcf,	// (0x0003b0b7) list_double_heading_pane_t2_cp2_ParamLimits

0xdfcf,	// (0x0003b0b7) list_double_heading_pane_t2_cp2

0x61d9,	// (0x000332c1) aid_value_unit2

0x3c4a,	// (0x00030d32) popup_preview_fixed_window

0x6394,	// (0x0003347c) bg_popup_preview_window_pane_cp02

0xdfe1,	// (0x0003b0c9) list_preview_fixed_pane

0xe027,	// (0x0003b10f) list_empty_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_empty_pane_fp

0xe027,	// (0x0003b10f) list_single_cale_day_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_cale_day_pane_fp

0xe027,	// (0x0003b10f) list_single_graphic_heading_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_graphic_heading_pane_fp

0xe027,	// (0x0003b10f) list_single_graphic_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_graphic_pane_fp

0xe027,	// (0x0003b10f) list_single_heading_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_heading_pane_fp

0xe027,	// (0x0003b10f) list_single_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_pane_fp

0xe03a,	// (0x0003b122) list_single_pane_fp_g1_ParamLimits

0xe03a,	// (0x0003b122) list_single_pane_fp_g1

0x4fe4,	// (0x000320cc) list_single_pane_fp_g2_ParamLimits

0x4fe4,	// (0x000320cc) list_single_pane_fp_g2

0x4ff0,	// (0x000320d8) list_single_pane_fp_g3_ParamLimits

0x4ff0,	// (0x000320d8) list_single_pane_fp_g3

0xe046,	// (0x0003b12e) list_single_pane_fp_g4_ParamLimits

0xe046,	// (0x0003b12e) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0003cc62) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003cc62) list_single_pane_fp_g

0x36da,	// (0x000307c2) list_single_pane_fp_t1_ParamLimits

0x36da,	// (0x000307c2) list_single_pane_fp_t1

0x36f1,	// (0x000307d9) list_single_graphic_pane_fp_g1_ParamLimits

0x36f1,	// (0x000307d9) list_single_graphic_pane_fp_g1

0xe03a,	// (0x0003b122) list_single_graphic_pane_fp_g2_ParamLimits

0xe03a,	// (0x0003b122) list_single_graphic_pane_fp_g2

0x4fe4,	// (0x000320cc) list_single_graphic_pane_fp_g3_ParamLimits

0x4fe4,	// (0x000320cc) list_single_graphic_pane_fp_g3

0x4ff0,	// (0x000320d8) list_single_graphic_pane_fp_g4_ParamLimits

0x4ff0,	// (0x000320d8) list_single_graphic_pane_fp_g4

0xe046,	// (0x0003b12e) list_single_graphic_pane_fp_g5_ParamLimits

0xe046,	// (0x0003b12e) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0003cc6b) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0003cc6b) list_single_graphic_pane_fp_g

0x36fd,	// (0x000307e5) list_single_graphic_pane_fp_t1_ParamLimits

0x36fd,	// (0x000307e5) list_single_graphic_pane_fp_t1

0x36f1,	// (0x000307d9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x36f1,	// (0x000307d9) list_single_graphic_heading_pane_fp_g1

0xe03a,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe03a,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2

0x4fe4,	// (0x000320cc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4fe4,	// (0x000320cc) list_single_graphic_heading_pane_fp_g3

0x4ff0,	// (0x000320d8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ff0,	// (0x000320d8) list_single_graphic_heading_pane_fp_g4

0xe046,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe046,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0003cc6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003cc6b) list_single_graphic_heading_pane_fp_g

0x3713,	// (0x000307fb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3713,	// (0x000307fb) list_single_graphic_heading_pane_fp_t1

0x3729,	// (0x00030811) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3729,	// (0x00030811) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0003cc76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0003cc76) list_single_graphic_heading_pane_fp_t

0x373b,	// (0x00030823) list_single_cale_day_pane_fp_g1_ParamLimits

0x373b,	// (0x00030823) list_single_cale_day_pane_fp_g1

0xe052,	// (0x0003b13a) list_single_cale_day_pane_fp_g2_ParamLimits

0xe052,	// (0x0003b13a) list_single_cale_day_pane_fp_g2

0x5004,	// (0x000320ec) list_single_cale_day_pane_fp_g3_ParamLimits

0x5004,	// (0x000320ec) list_single_cale_day_pane_fp_g3

0x502c,	// (0x00032114) list_single_cale_day_pane_fp_g4_ParamLimits

0x502c,	// (0x00032114) list_single_cale_day_pane_fp_g4

0x5050,	// (0x00032138) list_single_cale_day_pane_fp_g5_ParamLimits

0x5050,	// (0x00032138) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0003cc7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0003cc7b) list_single_cale_day_pane_fp_g

0x3773,	// (0x0003085b) list_single_cale_day_pane_fp_t1_ParamLimits

0x3773,	// (0x0003085b) list_single_cale_day_pane_fp_t1

0x3799,	// (0x00030881) list_single_cale_day_pane_fp_t2_ParamLimits

0x3799,	// (0x00030881) list_single_cale_day_pane_fp_t2

0x37b2,	// (0x0003089a) list_single_cale_day_pane_fp_t3_ParamLimits

0x37b2,	// (0x0003089a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0003cc86) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0003cc86) list_single_cale_day_pane_fp_t

0xe03a,	// (0x0003b122) list_empty_pane_fp_g1_ParamLimits

0xe03a,	// (0x0003b122) list_empty_pane_fp_g1

0x37cb,	// (0x000308b3) list_empty_pane_fp_t1

0x37d9,	// (0x000308c1) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0003cc8d) list_empty_pane_fp_t

0xe03a,	// (0x0003b122) list_single_heading_pane_fp_g1_ParamLimits

0xe03a,	// (0x0003b122) list_single_heading_pane_fp_g1

0x4fe4,	// (0x000320cc) list_single_heading_pane_fp_g2_ParamLimits

0x4fe4,	// (0x000320cc) list_single_heading_pane_fp_g2

0x4ff0,	// (0x000320d8) list_single_heading_pane_fp_g3_ParamLimits

0x4ff0,	// (0x000320d8) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0003cc92) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0003cc92) list_single_heading_pane_fp_g

0x37e7,	// (0x000308cf) list_single_heading_pane_fp_t1_ParamLimits

0x37e7,	// (0x000308cf) list_single_heading_pane_fp_t1

0x37f9,	// (0x000308e1) list_single_heading_pane_fp_t2_ParamLimits

0x37f9,	// (0x000308e1) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0003cc99) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0003cc99) list_single_heading_pane_fp_t

0x698f,	// (0x00033a77) aid_size_cell_fast

0x6369,	// (0x00033451) soft_indicator_pane_cp1_t1

0x69cc,	// (0x00033ab4) cell_app_pane_cp2_ParamLimits

0x69cc,	// (0x00033ab4) cell_app_pane_cp2

0x4dbb,	// (0x00031ea3) fep_hwr_candidate_drop_down_list_pane

0x0a50,	// (0x0002db38) fep_hwr_candidate_pane_g3_ParamLimits

0x0a50,	// (0x0002db38) fep_hwr_candidate_pane_g3

0x0a5d,	// (0x0002db45) fep_hwr_candidate_pane_g4_ParamLimits

0x0a5d,	// (0x0002db45) fep_hwr_candidate_pane_g4

0x0002,

0xfb25,	// (0x0003cc0d) fep_hwr_candidate_pane_g_ParamLimits

0xfb25,	// (0x0003cc0d) fep_hwr_candidate_pane_g

0xdc1d,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xdc1d,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane

0xdf14,	// (0x0003affc) fep_vkb_candidate_pane_g3

0xdf1c,	// (0x0003b004) fep_vkb_candidate_pane_g4

0x0002,

0xfb52,	// (0x0003cc3a) fep_vkb_candidate_pane_g

0xdd04,	// (0x0003adec) cell_hwr_candidate_pane_g1_ParamLimits

0xdf33,	// (0x0003b01b) cell_hwr_candidate_pane_g3_ParamLimits

0xdf33,	// (0x0003b01b) cell_hwr_candidate_pane_g3

0xdf54,	// (0x0003b03c) cell_hwr_candidate_pane_g4_ParamLimits

0xdf54,	// (0x0003b03c) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0003cc54) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x0003cc54) cell_hwr_candidate_pane_g

0xdf75,	// (0x0003b05d) cell_vkb_candidate_pane_g3_ParamLimits

0xdf75,	// (0x0003b05d) cell_vkb_candidate_pane_g3

0xdf90,	// (0x0003b078) cell_vkb_candidate_pane_g4_ParamLimits

0xdf90,	// (0x0003b078) cell_vkb_candidate_pane_g4

0xe05e,	// (0x0003b146) cell_app_pane_cp2_g1_ParamLimits

0xe05e,	// (0x0003b146) cell_app_pane_cp2_g1

0xe07c,	// (0x0003b164) cell_app_pane_cp2_g2_ParamLimits

0xe07c,	// (0x0003b164) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0003cc9e) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0003cc9e) cell_app_pane_cp2_g

0xe088,	// (0x0003b170) cell_app_pane_cp2_t1_ParamLimits

0xe088,	// (0x0003b170) cell_app_pane_cp2_t1

0x6818,	// (0x00033900) grid_highlight_pane_cp1_ParamLimits

0x6818,	// (0x00033900) grid_highlight_pane_cp1

0x5074,	// (0x0003215c) cell_hwr_candidate_pane_cp1_ParamLimits

0x5074,	// (0x0003215c) cell_hwr_candidate_pane_cp1

0xdd04,	// (0x0003adec) fep_hwr_candidate_drop_down_list_pane_g1

0xe09a,	// (0x0003b182) fep_hwr_candidate_drop_down_list_pane_g2

0xe0a7,	// (0x0003b18f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0003cca3) fep_hwr_candidate_drop_down_list_pane_g

0x5092,	// (0x0003217a) fep_hwr_candidate_drop_down_list_scroll_pane

0x509b,	// (0x00032183) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x509b,	// (0x00032183) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x50a8,	// (0x00032190) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x50a8,	// (0x00032190) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x50b5,	// (0x0003219d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x50b5,	// (0x0003219d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xdf75,	// (0x0003b05d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdf75,	// (0x0003b05d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xdf90,	// (0x0003b078) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdf90,	// (0x0003b078) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x50c2,	// (0x000321aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x50c2,	// (0x000321aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x50dd,	// (0x000321c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x50dd,	// (0x000321c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x50f8,	// (0x000321e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x50f8,	// (0x000321e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0003ccaa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0003ccaa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc5e0,	// (0x000396c8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc5e0,	// (0x000396c8) cell_vkb_candidate_pane_cp1

0xdd04,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1

0xe09a,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe09a,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2

0xe0a7,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe0a7,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0003cca3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbb,	// (0x0003cca3) fep_vkb_candidate_drop_down_list_pane_g

0xe0b4,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe0b4,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane

0xe0c1,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe0c1,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe0ce,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe0ce,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe0da,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe0da,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdf33,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdf33,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdf54,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdf54,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe0e6,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe0e6,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe107,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe107,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe128,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe128,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x0003ccbb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x0003ccbb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x1a60,	// (0x0002eb48) title_pane_g1_ParamLimits

0x1a73,	// (0x0002eb5b) title_pane_g2_ParamLimits

0xf54e,	// (0x0003c636) title_pane_g_ParamLimits

0x6d3e,	// (0x00033e26) aid_call2_pane

0x6d46,	// (0x00033e2e) aid_call_pane

0x6d4e,	// (0x00033e36) popup_clock_analogue_window_g1

0x6d4e,	// (0x00033e36) popup_clock_analogue_window_g2

0x3fe9,	// (0x000310d1) popup_clock_analogue_window_g3

0x3ff2,	// (0x000310da) popup_clock_analogue_window_g4

0x61eb,	// (0x000332d3) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0003c7e5) popup_clock_analogue_window_g

0x3ffa,	// (0x000310e2) popup_clock_analogue_window_t1

0x4008,	// (0x000310f0) clock_digital_number_pane_ParamLimits

0x4008,	// (0x000310f0) clock_digital_number_pane

0x4014,	// (0x000310fc) clock_digital_number_pane_cp02_ParamLimits

0x4014,	// (0x000310fc) clock_digital_number_pane_cp02

0x4020,	// (0x00031108) clock_digital_number_pane_cp03_ParamLimits

0x4020,	// (0x00031108) clock_digital_number_pane_cp03

0x402c,	// (0x00031114) clock_digital_number_pane_cp04_ParamLimits

0x402c,	// (0x00031114) clock_digital_number_pane_cp04

0x4038,	// (0x00031120) clock_digital_separator_pane_ParamLimits

0x4038,	// (0x00031120) clock_digital_separator_pane

0x4044,	// (0x0003112c) popup_clock_digital_window_t1_ParamLimits

0x4044,	// (0x0003112c) popup_clock_digital_window_t1

0x61eb,	// (0x000332d3) clock_digital_number_pane_g1

0x61eb,	// (0x000332d3) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0003c7f0) clock_digital_number_pane_g

0x61eb,	// (0x000332d3) clock_digital_separator_pane_g1

0x61eb,	// (0x000332d3) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0003c7f0) clock_digital_separator_pane_g

0xb96b,	// (0x00038a53) aid_fill_nsta_ParamLimits

0xba8d,	// (0x00038b75) indicator_nsta_pane_ParamLimits

0x752a,	// (0x00034612) popup_clock_analogue_window

0x752a,	// (0x00034612) popup_clock_digital_window

0x6981,	// (0x00033a69) grid_indicator_nsta_pane_ParamLimits

0x903a,	// (0x00036122) clock_nsta_pane_t2

0x0001,

0xfaa5,	// (0x0003cb8d) clock_nsta_pane_t

0x3fad,	// (0x00031095) aid_size_max_handle

0xb22e,	// (0x00038316) aid_size_min_handle

0x729e,	// (0x00034386) editor_scroll_pane

0xe143,	// (0x0003b22b) ex_editor_pane

0x6941,	// (0x00033a29) scroll_pane_cp13

0x67b4,	// (0x0003389c) scroll_pane_cp14

0x6d7d,	// (0x00033e65) scroll_pane_cp36

0x1ec9,	// (0x0002efb1) list_single_graphic_hl_pane_cp2_ParamLimits

0x1ec9,	// (0x0002efb1) list_single_graphic_hl_pane_cp2

0xc1aa,	// (0x00039292) list_single_graphic_hl_pane_ParamLimits

0xc1aa,	// (0x00039292) list_single_graphic_hl_pane

0x380f,	// (0x000308f7) aid_size_min_hl_cp1

0xe14b,	// (0x0003b233) list_highlight_pane_cp34_ParamLimits

0xe14b,	// (0x0003b233) list_highlight_pane_cp34

0xe15c,	// (0x0003b244) list_single_graphic_hl_pane_g1_ParamLimits

0xe15c,	// (0x0003b244) list_single_graphic_hl_pane_g1

0xae5a,	// (0x00037f42) list_single_graphic_hl_pane_g2_ParamLimits

0xae5a,	// (0x00037f42) list_single_graphic_hl_pane_g2

0xae5a,	// (0x00037f42) list_single_graphic_hl_pane_g3_ParamLimits

0xae5a,	// (0x00037f42) list_single_graphic_hl_pane_g3

0x720f,	// (0x000342f7) list_single_graphic_hl_pane_g4_ParamLimits

0x720f,	// (0x000342f7) list_single_graphic_hl_pane_g4

0xc600,	// (0x000396e8) list_single_graphic_hl_pane_g5_ParamLimits

0xc600,	// (0x000396e8) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x0003cccc) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x0003cccc) list_single_graphic_hl_pane_g

0xae66,	// (0x00037f4e) list_single_graphic_hl_pane_t1_ParamLimits

0xae66,	// (0x00037f4e) list_single_graphic_hl_pane_t1

0xe169,	// (0x0003b251) aid_size_min_hl_cp2

0xe172,	// (0x0003b25a) list_highlight_pane_cp34_cp2_ParamLimits

0xe172,	// (0x0003b25a) list_highlight_pane_cp34_cp2

0xe15c,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe15c,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2

0xe17f,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe17f,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2

0xe18b,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe18b,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2

0x71d7,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x71d7,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2

0xe197,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe197,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2

0xb295,	// (0x0003837d) control_pane_g4_ParamLimits

0xb295,	// (0x0003837d) control_pane_g4

0x7451,	// (0x00034539) bg_popup_sub_pane_cp10_ParamLimits

0x934c,	// (0x00036434) list_choice_list_pane_ParamLimits

0x935b,	// (0x00036443) scroll_pane_cp23

0x6394,	// (0x0003347c) bg_popup_preview_window_pane_cp02_ParamLimits

0xdfe1,	// (0x0003b0c9) list_preview_fixed_pane_ParamLimits

0xdff7,	// (0x0003b0df) list_preview_fixed_pane_cp_ParamLimits

0xdff7,	// (0x0003b0df) list_preview_fixed_pane_cp

0xe003,	// (0x0003b0eb) popup_preview_fixed_window_g1_ParamLimits

0xe003,	// (0x0003b0eb) popup_preview_fixed_window_g1

0xe00f,	// (0x0003b0f7) popup_preview_fixed_window_g2_ParamLimits

0xe00f,	// (0x0003b0f7) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0003cc5b) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0003cc5b) popup_preview_fixed_window_g

0x3f29,	// (0x00031011) aid_navi_side_left_pane_ParamLimits

0x3f3a,	// (0x00031022) aid_navi_side_right_pane_ParamLimits

0x3f4e,	// (0x00031036) navi_icon_pane_stacon_ParamLimits

0x3f62,	// (0x0003104a) navi_navi_pane_stacon_ParamLimits

0x3f4e,	// (0x00031036) navi_text_pane_stacon_ParamLimits

0x61e1,	// (0x000332c9) main_text_info_pane

0xe1c1,	// (0x0003b2a9) listscroll_text_info_pane

0xe1c9,	// (0x0003b2b1) list_text_info_pane_ParamLimits

0xe1c9,	// (0x0003b2b1) list_text_info_pane

0xe1d8,	// (0x0003b2c0) scroll_pane_cp24_ParamLimits

0xe1d8,	// (0x0003b2c0) scroll_pane_cp24

0xc614,	// (0x000396fc) list_text_info_pane_t1_ParamLimits

0xc614,	// (0x000396fc) list_text_info_pane_t1

0xb3ed,	// (0x000384d5) popup_fast_swap2_window_ParamLimits

0xb3ed,	// (0x000384d5) popup_fast_swap2_window

0xe1f6,	// (0x0003b2de) aid_size_cell_fast2

0x61e1,	// (0x000332c9) bg_popup_window_pane_cp17

0x798c,	// (0x00034a74) heading_pane_cp2

0x6587,	// (0x0003366f) listscroll_fast2_pane

0xe200,	// (0x0003b2e8) grid_fast2_pane

0xe208,	// (0x0003b2f0) listscroll_fast2_pane_g1

0xe210,	// (0x0003b2f8) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x0003ccd7) listscroll_fast2_pane_g

0x6941,	// (0x00033a29) scroll_pane_cp26

0xe218,	// (0x0003b300) cell_fast2_pane_ParamLimits

0xe218,	// (0x0003b300) cell_fast2_pane

0xe22d,	// (0x0003b315) cell_fast2_pane_g1

0xe236,	// (0x0003b31e) cell_fast2_pane_g2

0xe23f,	// (0x0003b327) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x0003ccdc) cell_fast2_pane_g

0x6617,	// (0x000336ff) grid_highlight_pane_cp9

0x662c,	// (0x00033714) main_eswt_pane_ParamLimits

0x662c,	// (0x00033714) main_eswt_pane

0xe1ed,	// (0x0003b2d5) list_single_text_info_pane

0xe247,	// (0x0003b32f) eswt_ctrl_button_pane

0xe247,	// (0x0003b32f) eswt_ctrl_canvas_pane

0xe24f,	// (0x0003b337) eswt_ctrl_combo_pane

0xe247,	// (0x0003b32f) eswt_ctrl_default_pane

0xe247,	// (0x0003b32f) eswt_ctrl_label_pane

0xe257,	// (0x0003b33f) eswt_ctrl_wait_pane

0xe25f,	// (0x0003b347) eswt_shell_pane

0x61e1,	// (0x000332c9) listscroll_eswt_app_pane

0xe27b,	// (0x0003b363) popup_eswt_tasktip_window_ParamLimits

0xe27b,	// (0x0003b363) popup_eswt_tasktip_window

0x76c1,	// (0x000347a9) bg_popup_window_pane_cp18

0xe28c,	// (0x0003b374) eswt_control_pane_g1_ParamLimits

0xe28c,	// (0x0003b374) eswt_control_pane_g1

0xe299,	// (0x0003b381) eswt_control_pane_g2_ParamLimits

0xe299,	// (0x0003b381) eswt_control_pane_g2

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_ParamLimits

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_ParamLimits

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x0003cce3) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x0003cce3) eswt_control_pane_g

0x6818,	// (0x00033900) bg_button_pane_ParamLimits

0x6818,	// (0x00033900) bg_button_pane

0x662c,	// (0x00033714) common_borders_pane_copy2_ParamLimits

0x662c,	// (0x00033714) common_borders_pane_copy2

0xe2c0,	// (0x0003b3a8) control_button_pane_g1_ParamLimits

0xe2c0,	// (0x0003b3a8) control_button_pane_g1

0xe2cc,	// (0x0003b3b4) control_button_pane_g2_ParamLimits

0xe2cc,	// (0x0003b3b4) control_button_pane_g2

0xe2d8,	// (0x0003b3c0) control_button_pane_g3_ParamLimits

0xe2d8,	// (0x0003b3c0) control_button_pane_g3

0x0002,

0xfc04,	// (0x0003ccec) control_button_pane_g_ParamLimits

0xfc04,	// (0x0003ccec) control_button_pane_g

0xe2ec,	// (0x0003b3d4) control_button_pane_t1

0xe2fa,	// (0x0003b3e2) control_button_pane_t2

0x0001,

0xfc0b,	// (0x0003ccf3) control_button_pane_t

0x7635,	// (0x0003471d) bg_button_pane_g1

0x763d,	// (0x00034725) bg_button_pane_g2

0x7645,	// (0x0003472d) bg_button_pane_g3

0x764d,	// (0x00034735) bg_button_pane_g4

0x7655,	// (0x0003473d) bg_button_pane_g5

0x765d,	// (0x00034745) bg_button_pane_g6

0x7665,	// (0x0003474d) bg_button_pane_g7

0x766d,	// (0x00034755) bg_button_pane_g8

0x7675,	// (0x0003475d) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003c94e) bg_button_pane_g

0x9307,	// (0x000363ef) common_borders_pane_ParamLimits

0x9307,	// (0x000363ef) common_borders_pane

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy1_ParamLimits

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy1

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy1_ParamLimits

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy1

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy1_ParamLimits

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy1

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy1_ParamLimits

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy1

0x9342,	// (0x0003642a) bg_eswt_ctrl_canvas_pane_g1

0x9307,	// (0x000363ef) common_borders_pane_cp2_ParamLimits

0x9307,	// (0x000363ef) common_borders_pane_cp2

0x9307,	// (0x000363ef) common_borders_pane_cp3_ParamLimits

0x9307,	// (0x000363ef) common_borders_pane_cp3

0xe308,	// (0x0003b3f0) separator_horizontal_pane

0xe310,	// (0x0003b3f8) separator_vertical_pane

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy2_ParamLimits

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy2

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy2_ParamLimits

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy2

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy2_ParamLimits

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy2

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy2_ParamLimits

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy2

0x61e1,	// (0x000332c9) common_borders_pane_cp4

0xe319,	// (0x0003b401) separator_horizontal_pane_g1

0xe322,	// (0x0003b40a) separator_horizontal_pane_g2

0xe32b,	// (0x0003b413) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x0003ccf8) separator_horizontal_pane_g

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy3_ParamLimits

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy3

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy3_ParamLimits

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy3

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy3_ParamLimits

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy3

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy3_ParamLimits

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy3

0x61e1,	// (0x000332c9) common_borders_pane_cp5

0xe334,	// (0x0003b41c) separator_vertical_pane_g1

0xe33d,	// (0x0003b425) separator_vertical_pane_g2

0xe346,	// (0x0003b42e) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x0003ccff) separator_vertical_pane_g

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy4_ParamLimits

0xe28c,	// (0x0003b374) eswt_control_pane_g1_copy4

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy4_ParamLimits

0xe299,	// (0x0003b381) eswt_control_pane_g2_copy4

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy4_ParamLimits

0xe2a6,	// (0x0003b38e) eswt_control_pane_g3_copy4

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy4_ParamLimits

0xe2b3,	// (0x0003b39b) eswt_control_pane_g4_copy4

0xc62d,	// (0x00039715) eswt_ctrl_combo_button_pane

0xc635,	// (0x0003971d) eswt_ctrl_input_pane

0xc63d,	// (0x00039725) popup_choice_list_window_cp70

0xc645,	// (0x0003972d) eswt_ctrl_input_pane_t1

0x61e1,	// (0x000332c9) input_focus_pane_cp70

0x9307,	// (0x000363ef) bg_button_pane_cp70_ParamLimits

0x9307,	// (0x000363ef) bg_button_pane_cp70

0xc653,	// (0x0003973b) eswt_ctrl_combo_button_pane_g1

0xe34f,	// (0x0003b437) wait_bar_pane_cp70

0x76c1,	// (0x000347a9) bg_popup_window_pane_cp70_ParamLimits

0x76c1,	// (0x000347a9) bg_popup_window_pane_cp70

0xe357,	// (0x0003b43f) popup_eswt_tasktip_window_t1

0xe36d,	// (0x0003b455) wait_bar_pane_cp71_ParamLimits

0xe36d,	// (0x0003b455) wait_bar_pane_cp71

0xe379,	// (0x0003b461) grid_eswt_app_pane

0x6b8c,	// (0x00033c74) scroll_pane_cp70

0xc65b,	// (0x00039743) cell_eswt_app_pane_ParamLimits

0xc65b,	// (0x00039743) cell_eswt_app_pane

0xc683,	// (0x0003976b) cell_eswt_app_pane_g1_ParamLimits

0xc683,	// (0x0003976b) cell_eswt_app_pane_g1

0xc6b2,	// (0x0003979a) cell_eswt_app_pane_g2_ParamLimits

0xc6b2,	// (0x0003979a) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x0003cd06) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x0003cd06) cell_eswt_app_pane_g

0xc6db,	// (0x000397c3) cell_eswt_app_pane_t1_ParamLimits

0xc6db,	// (0x000397c3) cell_eswt_app_pane_t1

0xe382,	// (0x0003b46a) grid_highlight_pane_cp70_ParamLimits

0xe382,	// (0x0003b46a) grid_highlight_pane_cp70

0x67bc,	// (0x000338a4) set_content_pane_g1

0x208a,	// (0x0002f172) status_small_volume_pane

0x5133,	// (0x0003221b) status_small_volume_pane_g1

0x513b,	// (0x00032223) volume_small2_pane

0x5144,	// (0x0003222c) volume_small2_pane_g1

0x514d,	// (0x00032235) volume_small2_pane_g2

0x5156,	// (0x0003223e) volume_small2_pane_g3

0x515f,	// (0x00032247) volume_small2_pane_g4

0x5168,	// (0x00032250) volume_small2_pane_g5

0x5171,	// (0x00032259) volume_small2_pane_g6

0x517a,	// (0x00032262) volume_small2_pane_g7

0x5183,	// (0x0003226b) volume_small2_pane_g8

0x518c,	// (0x00032274) volume_small2_pane_g9

0x5195,	// (0x0003227d) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x0003cd0b) volume_small2_pane_g

0xde0b,	// (0x0003aef3) fep_vkb_top_text_pane_g1_ParamLimits

0xc588,	// (0x00039670) fep_vkb_top_text_pane_t1_ParamLimits

0xe01b,	// (0x0003b103) popup_preview_fixed_window_g3_ParamLimits

0xe01b,	// (0x0003b103) popup_preview_fixed_window_g3

0xb90a,	// (0x000389f2) popup_toolbar_trans_pane

0xc035,	// (0x0003911d) aid_height_set_list_ParamLimits

0x875d,	// (0x00035845) aid_size_parent_ParamLimits

0x7451,	// (0x00034539) list_highlight_pane_cp2_ParamLimits

0x67bc,	// (0x000338a4) set_content_pane_g1_ParamLimits

0xae1a,	// (0x00037f02) list_single_image_pane_ParamLimits

0xae1a,	// (0x00037f02) list_single_image_pane

0xc70d,	// (0x000397f5) aid_size_cell_image_ParamLimits

0xc70d,	// (0x000397f5) aid_size_cell_image

0xc71a,	// (0x00039802) grid_single_image_pane_ParamLimits

0xc71a,	// (0x00039802) grid_single_image_pane

0x6826,	// (0x0003390e) list_single_image_pane_g1_ParamLimits

0x6826,	// (0x0003390e) list_single_image_pane_g1

0x6832,	// (0x0003391a) list_single_image_pane_g2_ParamLimits

0x6832,	// (0x0003391a) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x0003cd20) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x0003cd20) list_single_image_pane_g

0xe38e,	// (0x0003b476) list_single_image_pane_t1_ParamLimits

0xe38e,	// (0x0003b476) list_single_image_pane_t1

0xc726,	// (0x0003980e) cell_image_list_pane_ParamLimits

0xc726,	// (0x0003980e) cell_image_list_pane

0xc73a,	// (0x00039822) cell_image_list_pane_g1

0xc743,	// (0x0003982b) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x0003cd25) cell_image_list_pane_g

0xe3a4,	// (0x0003b48c) aid_size_cell_tb_trans_pane

0x6818,	// (0x00033900) bg_tb_trans_pane

0xe3b6,	// (0x0003b49e) grid_tb_trans_pane

0x7635,	// (0x0003471d) bg_tb_trans_pane_g1

0x763d,	// (0x00034725) bg_tb_trans_pane_g2

0x7645,	// (0x0003472d) bg_tb_trans_pane_g3

0x764d,	// (0x00034735) bg_tb_trans_pane_g4

0x7655,	// (0x0003473d) bg_tb_trans_pane_g5

0x766d,	// (0x00034755) bg_tb_trans_pane_g6

0x7675,	// (0x0003475d) bg_tb_trans_pane_g7

0x765d,	// (0x00034745) bg_tb_trans_pane_g8

0x7665,	// (0x0003474d) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x0003cd2a) bg_tb_trans_pane_g

0xe3ca,	// (0x0003b4b2) cell_toolbar_trans_pane_ParamLimits

0xe3ca,	// (0x0003b4b2) cell_toolbar_trans_pane

0x9342,	// (0x0003642a) cell_toolbar_trans_pane_g1

0xc3d0,	// (0x000394b8) list_form2_midp_pane_t1

0xc3de,	// (0x000394c6) list_form2_midp_pane_t2

0x0001,

0xfaeb,	// (0x0003cbd3) list_form2_midp_pane_t

0x90fa,	// (0x000361e2) scroll_pane_cp51_ParamLimits

0x9217,	// (0x000362ff) form2_midp_wait_pane_g1

0x9220,	// (0x00036308) form2_midp_wait_pane_g2

0x9229,	// (0x00036311) form2_midp_wait_pane_g3

0x0002,

0xfb00,	// (0x0003cbe8) form2_midp_wait_pane_g

0x6243,	// (0x0003332b) list_highlight_pane_cp21_ParamLimits

0x9249,	// (0x00036331) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x9258,	// (0x00036340) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x87c2,	// (0x000358aa) list_single_2graphic_im_pane_ParamLimits

0x87c2,	// (0x000358aa) list_single_2graphic_im_pane

0xc74c,	// (0x00039834) list_single_2graphic_im_pane_g1_ParamLimits

0xc74c,	// (0x00039834) list_single_2graphic_im_pane_g1

0xe3f0,	// (0x0003b4d8) list_single_2graphic_im_pane_g2_ParamLimits

0xe3f0,	// (0x0003b4d8) list_single_2graphic_im_pane_g2

0xe3fc,	// (0x0003b4e4) list_single_2graphic_im_pane_g3_ParamLimits

0xe3fc,	// (0x0003b4e4) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x0003cd3d) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x0003cd3d) list_single_2graphic_im_pane_g

0xc75d,	// (0x00039845) list_single_2graphic_im_pane_t1_ParamLimits

0xc75d,	// (0x00039845) list_single_2graphic_im_pane_t1

0xe027,	// (0x0003b10f) list_single_graphic_2heading_pane_fp_ParamLimits

0xe027,	// (0x0003b10f) list_single_graphic_2heading_pane_fp

0x36f1,	// (0x000307d9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x36f1,	// (0x000307d9) list_single_graphic_2heading_pane_fp_g1

0xe03a,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe03a,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2

0x4fe4,	// (0x000320cc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4fe4,	// (0x000320cc) list_single_graphic_2heading_pane_fp_g3

0x4ff0,	// (0x000320d8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ff0,	// (0x000320d8) list_single_graphic_2heading_pane_fp_g4

0xe046,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe046,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0003cc6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003cc6b) list_single_graphic_2heading_pane_fp_g

0x383a,	// (0x00030922) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x383a,	// (0x00030922) list_single_graphic_2heading_pane_fp_t1

0x3729,	// (0x00030811) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3729,	// (0x00030811) list_single_graphic_2heading_pane_fp_t2

0x3850,	// (0x00030938) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3850,	// (0x00030938) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x0003cd46) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x0003cd46) list_single_graphic_2heading_pane_fp_t

0x93cd,	// (0x000364b5) fep_hwr_write_pane_g5_ParamLimits

0x93cd,	// (0x000364b5) fep_hwr_write_pane_g5

0x93d9,	// (0x000364c1) fep_hwr_write_pane_g6_ParamLimits

0x93d9,	// (0x000364c1) fep_hwr_write_pane_g6

0xe25f,	// (0x0003b347) eswt_shell_pane_ParamLimits

0x76c1,	// (0x000347a9) bg_popup_window_pane_cp18_ParamLimits

0x86f9,	// (0x000357e1) heading_pane_cp70

0xe357,	// (0x0003b43f) popup_eswt_tasktip_window_t1_ParamLimits

0xb9b6,	// (0x00038a9e) aid_touch_tab_arrow_left

0xb9ca,	// (0x00038ab2) aid_touch_tab_arrow_right

0x1a8b,	// (0x0002eb73) title_pane_g3_ParamLimits

0x1a8b,	// (0x0002eb73) title_pane_g3

0x67e0,	// (0x000338c8) set_value_pane_g1

0xb90a,	// (0x000389f2) popup_toolbar_trans_pane_ParamLimits

0xe3a4,	// (0x0003b48c) aid_size_cell_tb_trans_pane_ParamLimits

0x6818,	// (0x00033900) bg_tb_trans_pane_ParamLimits

0xe3b6,	// (0x0003b49e) grid_tb_trans_pane_ParamLimits

0x6394,	// (0x0003347c) cont_note_pane_ParamLimits

0x6394,	// (0x0003347c) cont_note_pane

0x662c,	// (0x00033714) cont_snote2_single_text_pane_ParamLimits

0x662c,	// (0x00033714) cont_snote2_single_text_pane

0x662c,	// (0x00033714) cont_snote2_single_graphic_pane_ParamLimits

0x662c,	// (0x00033714) cont_snote2_single_graphic_pane

0x7b96,	// (0x00034c7e) cont_note_wait_pane_ParamLimits

0x7b96,	// (0x00034c7e) cont_note_wait_pane

0x7b96,	// (0x00034c7e) cont_note_image_pane_ParamLimits

0x7b96,	// (0x00034c7e) cont_note_image_pane

0xe41c,	// (0x0003b504) popup_note2_window_g1_ParamLimits

0xe41c,	// (0x0003b504) popup_note2_window_g1

0xe44d,	// (0x0003b535) popup_note2_window_t1_ParamLimits

0xe44d,	// (0x0003b535) popup_note2_window_t1

0xe492,	// (0x0003b57a) popup_note2_window_t2_ParamLimits

0xe492,	// (0x0003b57a) popup_note2_window_t2

0xe4d7,	// (0x0003b5bf) popup_note2_window_t3_ParamLimits

0xe4d7,	// (0x0003b5bf) popup_note2_window_t3

0xe51c,	// (0x0003b604) popup_note2_window_t4_ParamLimits

0xe51c,	// (0x0003b604) popup_note2_window_t4

0x6418,	// (0x00033500) popup_note2_window_t5_ParamLimits

0x6418,	// (0x00033500) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x0003cd52) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x0003cd52) popup_note2_window_t

0xe54b,	// (0x0003b633) popup_note2_image_window_g1_ParamLimits

0xe54b,	// (0x0003b633) popup_note2_image_window_g1

0xe557,	// (0x0003b63f) popup_note2_image_window_g2_ParamLimits

0xe557,	// (0x0003b63f) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x0003cd5d) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x0003cd5d) popup_note2_image_window_g

0xe569,	// (0x0003b651) popup_note2_image_window_t1_ParamLimits

0xe569,	// (0x0003b651) popup_note2_image_window_t1

0xe581,	// (0x0003b669) popup_note2_image_window_t2_ParamLimits

0xe581,	// (0x0003b669) popup_note2_image_window_t2

0xe599,	// (0x0003b681) popup_note2_image_window_t3_ParamLimits

0xe599,	// (0x0003b681) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x0003cd62) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x0003cd62) popup_note2_image_window_t

0x7ba4,	// (0x00034c8c) popup_note2_wait_window_g1_ParamLimits

0x7ba4,	// (0x00034c8c) popup_note2_wait_window_g1

0x7bb0,	// (0x00034c98) popup_note2_wait_window_g2_ParamLimits

0x7bb0,	// (0x00034c98) popup_note2_wait_window_g2

0x7bbc,	// (0x00034ca4) popup_note2_wait_window_g3_ParamLimits

0x7bbc,	// (0x00034ca4) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0003c930) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0003c930) popup_note2_wait_window_g

0xe5b5,	// (0x0003b69d) popup_note2_wait_window_t1_ParamLimits

0xe5b5,	// (0x0003b69d) popup_note2_wait_window_t1

0xe5d3,	// (0x0003b6bb) popup_note2_wait_window_t2_ParamLimits

0xe5d3,	// (0x0003b6bb) popup_note2_wait_window_t2

0xe5f1,	// (0x0003b6d9) popup_note2_wait_window_t3_ParamLimits

0xe5f1,	// (0x0003b6d9) popup_note2_wait_window_t3

0xe603,	// (0x0003b6eb) popup_note2_wait_window_t4_ParamLimits

0xe603,	// (0x0003b6eb) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0003cd69) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0003cd69) popup_note2_wait_window_t

0xe615,	// (0x0003b6fd) wait_bar2_pane_ParamLimits

0xe615,	// (0x0003b6fd) wait_bar2_pane

0xe62d,	// (0x0003b715) popup_snote2_single_text_window_g1_ParamLimits

0xe62d,	// (0x0003b715) popup_snote2_single_text_window_g1

0xe655,	// (0x0003b73d) popup_snote2_single_text_window_t1_ParamLimits

0xe655,	// (0x0003b73d) popup_snote2_single_text_window_t1

0xe6a1,	// (0x0003b789) popup_snote2_single_text_window_t2_ParamLimits

0xe6a1,	// (0x0003b789) popup_snote2_single_text_window_t2

0xe6ed,	// (0x0003b7d5) popup_snote2_single_text_window_t3_ParamLimits

0xe6ed,	// (0x0003b7d5) popup_snote2_single_text_window_t3

0xe72e,	// (0x0003b816) popup_snote2_single_text_window_t4_ParamLimits

0xe72e,	// (0x0003b816) popup_snote2_single_text_window_t4

0xe764,	// (0x0003b84c) popup_snote2_single_text_window_t5_ParamLimits

0xe764,	// (0x0003b84c) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0003cd72) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0003cd72) popup_snote2_single_text_window_t

0xe78f,	// (0x0003b877) popup_snote2_single_graphic_window_g1_ParamLimits

0xe78f,	// (0x0003b877) popup_snote2_single_graphic_window_g1

0xe7b7,	// (0x0003b89f) popup_snote2_single_graphic_window_g2_ParamLimits

0xe7b7,	// (0x0003b89f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0003cd7d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0003cd7d) popup_snote2_single_graphic_window_g

0xe7df,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1_ParamLimits

0xe7df,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1

0xe82b,	// (0x0003b913) popup_snote2_single_graphic_window_t2_ParamLimits

0xe82b,	// (0x0003b913) popup_snote2_single_graphic_window_t2

0xe6ed,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3_ParamLimits

0xe6ed,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3

0xe72e,	// (0x0003b816) popup_snote2_single_graphic_window_t4_ParamLimits

0xe72e,	// (0x0003b816) popup_snote2_single_graphic_window_t4

0xe764,	// (0x0003b84c) popup_snote2_single_graphic_window_t5_ParamLimits

0xe764,	// (0x0003b84c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0003cd82) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0003cd82) popup_snote2_single_graphic_window_t

0x9095,	// (0x0003617d) clock_nsta_pane_cp2_t1

0x9095,	// (0x0003617d) clock_nsta_pane_cp2_t2

0x0001,

0xfac1,	// (0x0003cba9) clock_nsta_pane_cp2_t

0x2fd9,	// (0x000300c1) form_field_data_wide_pane_g1_ParamLimits

0x6826,	// (0x0003390e) form_field_data_wide_pane_g2_ParamLimits

0x6826,	// (0x0003390e) form_field_data_wide_pane_g2

0x6832,	// (0x0003391a) form_field_data_wide_pane_g3_ParamLimits

0x6832,	// (0x0003391a) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0003c768) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0003c768) form_field_data_wide_pane_g

0xc319,	// (0x00039401) grid_touch_3_pane_ParamLimits

0xc319,	// (0x00039401) grid_touch_3_pane

0xc78e,	// (0x00039876) cell_touch_3_pane_ParamLimits

0xc78e,	// (0x00039876) cell_touch_3_pane

0x9342,	// (0x0003642a) cell_touch_3_pane_g1

0x9342,	// (0x0003642a) cell_touch_3_pane_g2

0x0001,

0xfb46,	// (0x0003cc2e) cell_touch_3_pane_g

0x644a,	// (0x00033532) cont_query_data_pane

0x6452,	// (0x0003353a) cont_query_data_pane_cp1

0xe877,	// (0x0003b95f) button_value_adjust_pane_cp7

0xe87f,	// (0x0003b967) query_popup_pane_cp3

0x6daf,	// (0x00033e97) bg_popup_sub_pane_cp22_ParamLimits

0x4063,	// (0x0003114b) navi_navi_volume_pane_cp2

0x407b,	// (0x00031163) popup_side_volume_key_window_g2

0x4087,	// (0x0003116f) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0003c7fe) popup_side_volume_key_window_g

0x40a1,	// (0x00031189) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0003c805) popup_side_volume_key_window_t

0x7053,	// (0x0003413b) popup_side_volume_key_window_ParamLimits

0xa95d,	// (0x00037a45) list_double_graphic_pane_g4_ParamLimits

0xa95d,	// (0x00037a45) list_double_graphic_pane_g4

0xc198,	// (0x00039280) list_single_2heading_msg_pane_ParamLimits

0xc198,	// (0x00039280) list_single_2heading_msg_pane

0xc7d4,	// (0x000398bc) list_single_2heading_msg_pane_g1_ParamLimits

0xc7d4,	// (0x000398bc) list_single_2heading_msg_pane_g1

0xc7e0,	// (0x000398c8) list_single_2heading_msg_pane_g2_ParamLimits

0xc7e0,	// (0x000398c8) list_single_2heading_msg_pane_g2

0xc7f3,	// (0x000398db) list_single_2heading_msg_pane_g3_ParamLimits

0xc7f3,	// (0x000398db) list_single_2heading_msg_pane_g3

0xc7ff,	// (0x000398e7) list_single_2heading_msg_pane_g4_ParamLimits

0xc7ff,	// (0x000398e7) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0003cd8d) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0003cd8d) list_single_2heading_msg_pane_g

0xae7c,	// (0x00037f64) list_single_2heading_msg_pane_t1_ParamLimits

0xae7c,	// (0x00037f64) list_single_2heading_msg_pane_t1

0xaea4,	// (0x00037f8c) list_single_2heading_msg_pane_t2_ParamLimits

0xaea4,	// (0x00037f8c) list_single_2heading_msg_pane_t2

0xaf0f,	// (0x00037ff7) list_single_2heading_msg_pane_t3_ParamLimits

0xaf0f,	// (0x00037ff7) list_single_2heading_msg_pane_t3

0x393a,	// (0x00030a22) list_single_2heading_msg_pane_t4_ParamLimits

0x393a,	// (0x00030a22) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0003cd96) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0003cd96) list_single_2heading_msg_pane_t

0x61ff,	// (0x000332e7) title_pane_g4_ParamLimits

0x61ff,	// (0x000332e7) title_pane_g4

0x3e79,	// (0x00030f61) title_pane_stacon_g3_ParamLimits

0x3e79,	// (0x00030f61) title_pane_stacon_g3

0xe410,	// (0x0003b4f8) list_single_2graphic_im_pane_g4_ParamLimits

0xe410,	// (0x0003b4f8) list_single_2graphic_im_pane_g4

0x8535,	// (0x0003561d) popup_side_volume_key_window_cp

0x89f4,	// (0x00035adc) main_idle_act2_pane_t1

0x48e9,	// (0x000319d1) toolbar_button_pane_g10

0x1d82,	// (0x0002ee6a) popup_toolbar_window_cp1

0x9086,	// (0x0003616e) clock_nsta_pane_cp_t1

0x9086,	// (0x0003616e) clock_nsta_pane_cp_t2

0x0001,

0xfabc,	// (0x0003cba4) clock_nsta_pane_cp_t

0x4063,	// (0x0003114b) navi_navi_volume_pane_cp2_ParamLimits

0x406f,	// (0x00031157) popup_side_volume_key_window_g1_ParamLimits

0x407b,	// (0x00031163) popup_side_volume_key_window_g2_ParamLimits

0x4087,	// (0x0003116f) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0003c7fe) popup_side_volume_key_window_g_ParamLimits

0x4da7,	// (0x00031e8f) fep_hwr_aid_pane

0x0732,	// (0x0002d81a) bg_fep_hwr_top_pane_g4_ParamLimits

0x939d,	// (0x00036485) fep_hwr_top_pane_g1_ParamLimits

0x93af,	// (0x00036497) fep_hwr_top_pane_g2_ParamLimits

0x4e5a,	// (0x00031f42) fep_hwr_top_pane_g3_ParamLimits

0xfb11,	// (0x0003cbf9) fep_hwr_top_pane_g_ParamLimits

0x4e6f,	// (0x00031f57) fep_hwr_top_text_pane_ParamLimits

0x82f8,	// (0x000353e0) aid_touch_tab_arrow_arrow_2

0x8301,	// (0x000353e9) aid_touch_tab_arrow_left_2

0x4dbb,	// (0x00031ea3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4dee,	// (0x00031ed6) fep_hwr_prediction_pane

0xdc76,	// (0x0003ad5e) fep_vkb_prediction_pane

0xc568,	// (0x00039650) fep_vkb_side_pane_g3_ParamLimits

0xc568,	// (0x00039650) fep_vkb_side_pane_g3

0xdd04,	// (0x0003adec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe09a,	// (0x0003b182) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe0a7,	// (0x0003b18f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x0003cca3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe890,	// (0x0003b978) fep_hwr_prediction_pane_g1

0x519e,	// (0x00032286) fep_hwr_prediction_pane_g2

0x8789,	// (0x00035871) fep_hwr_prediction_pane_g3

0x51a6,	// (0x0003228e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0003cd9f) fep_hwr_prediction_pane_g

0xe890,	// (0x0003b978) fep_vkb_prediction_pane_g1

0xe89a,	// (0x0003b982) fep_vkb_prediction_pane_g2

0xe8a2,	// (0x0003b98a) fep_vkb_prediction_pane_g3

0xe8aa,	// (0x0003b992) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0003cda8) fep_vkb_prediction_pane_g

0x4ba1,	// (0x00031c89) slider_set_pane_g3

0x4bb5,	// (0x00031c9d) slider_set_pane_g4

0x4bcd,	// (0x00031cb5) slider_set_pane_g5

0x4ba1,	// (0x00031c89) slider_set_pane_g6

0xc007,	// (0x000390ef) slider_set_pane_g7

0x8778,	// (0x00035860) slider_form_pane_g3

0x8781,	// (0x00035869) slider_form_pane_g4

0x8789,	// (0x00035871) slider_form_pane_g5

0x8778,	// (0x00035860) slider_form_pane_g6

0xc16c,	// (0x00039254) slider_form_pane_g7

0x8c2e,	// (0x00035d16) slider_set_pane_vc_g3

0x8c37,	// (0x00035d1f) slider_set_pane_vc_g4

0x8c40,	// (0x00035d28) slider_set_pane_vc_g5

0x8c2e,	// (0x00035d16) slider_set_pane_vc_g6

0x8c49,	// (0x00035d31) slider_set_pane_vc_g7

0x8de1,	// (0x00035ec9) slider_form_pane_vc_g1

0x8dea,	// (0x00035ed2) slider_form_pane_vc_g2

0x8df3,	// (0x00035edb) slider_form_pane_vc_g3

0x8de1,	// (0x00035ec9) slider_form_pane_vc_g4

0x8dfc,	// (0x00035ee4) slider_form_pane_vc_g5

0x0004,

0xfa8e,	// (0x0003cb76) slider_form_pane_vc_g

0x61e1,	// (0x000332c9) main_idle_act3_pane

0xe8b2,	// (0x0003b99a) ai3_links_pane

0xc817,	// (0x000398ff) popup_ai3_data_window_ParamLimits

0xc817,	// (0x000398ff) popup_ai3_data_window

0x61e1,	// (0x000332c9) grid_ai3_links_pane

0xc82f,	// (0x00039917) cell_ai3_links_pane_ParamLimits

0xc82f,	// (0x00039917) cell_ai3_links_pane

0xe8bb,	// (0x0003b9a3) bg_popup_sub_pane_cp11

0xe8c8,	// (0x0003b9b0) cell_ai3_links_pane_g1

0x61e1,	// (0x000332c9) bg_popup_sub_pane_cp12

0xe8ed,	// (0x0003b9d5) heading_ai3_data_pane

0xe8f5,	// (0x0003b9dd) list_ai3_gene_pane

0xe901,	// (0x0003b9e9) popup_ai3_data_window_g1

0xe909,	// (0x0003b9f1) heading_ai3_data_pane_g1

0xe911,	// (0x0003b9f9) heading_ai3_data_pane_t1

0xe91f,	// (0x0003ba07) list_double_ai3_gene_pane_ParamLimits

0xe91f,	// (0x0003ba07) list_double_ai3_gene_pane

0xe92c,	// (0x0003ba14) list_single_ai3_gene_pane_ParamLimits

0xe92c,	// (0x0003ba14) list_single_ai3_gene_pane

0x9307,	// (0x000363ef) list_highlight_pane_cp7_ParamLimits

0x9307,	// (0x000363ef) list_highlight_pane_cp7

0xe939,	// (0x0003ba21) list_single_a13_gene_pane_t1_ParamLimits

0xe939,	// (0x0003ba21) list_single_a13_gene_pane_t1

0xe950,	// (0x0003ba38) list_single_ai3_gene_pane_g1

0xe959,	// (0x0003ba41) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0003cdb1) list_single_ai3_gene_pane_g

0xe961,	// (0x0003ba49) list_double_ai3_gene_pane_g1_ParamLimits

0xe961,	// (0x0003ba49) list_double_ai3_gene_pane_g1

0xe96d,	// (0x0003ba55) list_double_ai3_gene_pane_t1_ParamLimits

0xe96d,	// (0x0003ba55) list_double_ai3_gene_pane_t1

0xe989,	// (0x0003ba71) list_double_ai3_gene_pane_t2_ParamLimits

0xe989,	// (0x0003ba71) list_double_ai3_gene_pane_t2

0xe99f,	// (0x0003ba87) list_double_ai3_gene_pane_t3_ParamLimits

0xe99f,	// (0x0003ba87) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0003cdb6) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0003cdb6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3866,	// (0x0003094e) aid_size_min_col_2

0xc7c0,	// (0x000398a8) aid_size_min_msg_ParamLimits

0xc7c0,	// (0x000398a8) aid_size_min_msg

0xc57c,	// (0x00039664) fep_vkb_top_text_pane_g2_ParamLimits

0xc57c,	// (0x00039664) fep_vkb_top_text_pane_g2

0x0001,

0xfb41,	// (0x0003cc29) fep_vkb_top_text_pane_g_ParamLimits

0xfb41,	// (0x0003cc29) fep_vkb_top_text_pane_g

0x61e1,	// (0x000332c9) main_hc_apps_shell_pane

0xe9bc,	// (0x0003baa4) grid_hc_apps_pane_ParamLimits

0xe9bc,	// (0x0003baa4) grid_hc_apps_pane

0xe9cb,	// (0x0003bab3) list_hc_apps_pane

0xe9d3,	// (0x0003babb) scroll_pane_cp37_ParamLimits

0xe9d3,	// (0x0003babb) scroll_pane_cp37

0xc845,	// (0x0003992d) cell_hc_apps_pane_ParamLimits

0xc845,	// (0x0003992d) cell_hc_apps_pane

0xc8df,	// (0x000399c7) cell_hc_apps_pane_g1_ParamLimits

0xc8df,	// (0x000399c7) cell_hc_apps_pane_g1

0xe9df,	// (0x0003bac7) cell_hc_apps_pane_g2_ParamLimits

0xe9df,	// (0x0003bac7) cell_hc_apps_pane_g2

0xe9fb,	// (0x0003bae3) cell_hc_apps_pane_g3_ParamLimits

0xe9fb,	// (0x0003bae3) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0003cdbd) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0003cdbd) cell_hc_apps_pane_g

0xc90c,	// (0x000399f4) cell_hc_apps_pane_t1_ParamLimits

0xc90c,	// (0x000399f4) cell_hc_apps_pane_t1

0x6394,	// (0x0003347c) grid_highlight_pane_cp10_ParamLimits

0x6394,	// (0x0003347c) grid_highlight_pane_cp10

0xc94a,	// (0x00039a32) list_single_hc_apps_pane_ParamLimits

0xc94a,	// (0x00039a32) list_single_hc_apps_pane

0xc975,	// (0x00039a5d) list_single_hc_apps_pane_g1

0xc98e,	// (0x00039a76) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0003cdc4) list_single_hc_apps_pane_g

0xc9a7,	// (0x00039a8f) list_single_hc_apps_pane_g2_copy1

0xaf7d,	// (0x00038065) list_single_hc_apps_pane_t1

0x6243,	// (0x0003332b) bg_set_opt_pane_cp_ParamLimits

0x3d3c,	// (0x00030e24) setting_slider_pane_t1_ParamLimits

0xb185,	// (0x0003826d) setting_slider_pane_t2_ParamLimits

0xb19e,	// (0x00038286) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003c646) setting_slider_pane_t_ParamLimits

0x3d85,	// (0x00030e6d) slider_set_pane_ParamLimits

0x42ef,	// (0x000313d7) control_pane_g5_ParamLimits

0x42ef,	// (0x000313d7) control_pane_g5

0x8740,	// (0x00035828) slider_set_pane_g1_ParamLimits

0x4b95,	// (0x00031c7d) slider_set_pane_g2_ParamLimits

0x4ba1,	// (0x00031c89) slider_set_pane_g3_ParamLimits

0x4bb5,	// (0x00031c9d) slider_set_pane_g4_ParamLimits

0x4bcd,	// (0x00031cb5) slider_set_pane_g5_ParamLimits

0x4ba1,	// (0x00031c89) slider_set_pane_g6_ParamLimits

0xc007,	// (0x000390ef) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003ca4c) slider_set_pane_g_ParamLimits

0x712c,	// (0x00034214) navi_icon_text_pane_ParamLimits

0xb987,	// (0x00038a6f) aid_fill_nsta_2_ParamLimits

0xb9b6,	// (0x00038a9e) aid_touch_tab_arrow_left_ParamLimits

0xb9ca,	// (0x00038ab2) aid_touch_tab_arrow_right_ParamLimits

0xba63,	// (0x00038b4b) clock_nsta_pane_ParamLimits

0x82da,	// (0x000353c2) navi_icon_pane_g1_ParamLimits

0x82e6,	// (0x000353ce) navi_text_pane_t1_ParamLimits

0x90d4,	// (0x000361bc) navi_icon_text_pane_g1_ParamLimits

0x90e0,	// (0x000361c8) navi_icon_text_pane_t1_ParamLimits

0xc975,	// (0x00039a5d) list_single_hc_apps_pane_g1_ParamLimits

0xc98e,	// (0x00039a76) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0003cdc4) list_single_hc_apps_pane_g_ParamLimits

0xc9a7,	// (0x00039a8f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xaf7d,	// (0x00038065) list_single_hc_apps_pane_t1_ParamLimits

0xb0cb,	// (0x000381b3) popup_toolbar2_fixed_window_ParamLimits

0xb0cb,	// (0x000381b3) popup_toolbar2_fixed_window

0xb902,	// (0x000389ea) popup_toolbar2_float_window

0x61e1,	// (0x000332c9) bg_popup_sub_pane_cp27

0xea1d,	// (0x0003bb05) grid_toolbar2_float_pane

0x61e1,	// (0x000332c9) bg_popup_sub_pane_cp26

0xea1d,	// (0x0003bb05) grid_toolbar2_fixed_pane

0xc9c3,	// (0x00039aab) cell_toolbar2_fixed_pane_ParamLimits

0xc9c3,	// (0x00039aab) cell_toolbar2_fixed_pane

0xc9de,	// (0x00039ac6) cell_toolbar2_fixed_pane_g1

0xea25,	// (0x0003bb0d) toolbar2_fixed_button_pane

0x7635,	// (0x0003471d) toolbar2_fixed_button_pane_g1

0x763d,	// (0x00034725) toolbar2_fixed_button_pane_g2

0x7645,	// (0x0003472d) toolbar2_fixed_button_pane_g3

0x764d,	// (0x00034735) toolbar2_fixed_button_pane_g4

0x7655,	// (0x0003473d) toolbar2_fixed_button_pane_g5

0x765d,	// (0x00034745) toolbar2_fixed_button_pane_g6

0x7665,	// (0x0003474d) toolbar2_fixed_button_pane_g7

0x766d,	// (0x00034755) toolbar2_fixed_button_pane_g8

0x7675,	// (0x0003475d) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003c94e) toolbar2_fixed_button_pane_g

0xea2d,	// (0x0003bb15) cell_toolbar2_float_pane_ParamLimits

0xea2d,	// (0x0003bb15) cell_toolbar2_float_pane

0xea3e,	// (0x0003bb26) cell_toolbar2_float_pane_g1

0xea25,	// (0x0003bb0d) toolbar2_fixed_button_pane_cp

0xc531,	// (0x00039619) fep_vkb_accented_list_pane_ParamLimits

0xc531,	// (0x00039619) fep_vkb_accented_list_pane

0x4fb1,	// (0x00032099) bg_popup_fep_shadow_pane_g9

0x729e,	// (0x00034386) bg_popup_fep_shadow_pane_cp3

0x6928,	// (0x00033a10) list_accented_list_pane

0xea47,	// (0x0003bb2f) list_single_accented_list_pane_ParamLimits

0xea47,	// (0x0003bb2f) list_single_accented_list_pane

0x729e,	// (0x00034386) list_highlight_pane_cp10

0xea58,	// (0x0003bb40) list_single_accented_list_pane_t1

0xb848,	// (0x00038930) popup_slider_window_ParamLimits

0xb848,	// (0x00038930) popup_slider_window

0xe887,	// (0x0003b96f) aid_indentation_list_msg

0xcabd,	// (0x00039ba5) bg_popup_window_pane_cp19

0xeabe,	// (0x0003bba6) popup_slider_window_g1

0xeada,	// (0x0003bbc2) popup_slider_window_g2

0xeaf6,	// (0x0003bbde) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0003cdc9) popup_slider_window_g

0xeb12,	// (0x0003bbfa) popup_slider_window_t1

0xeb56,	// (0x0003bc3e) small_volume_slider_vertical_pane

0x9342,	// (0x0003642a) small_volume_slider_vertical_pane_g1

0x9342,	// (0x0003642a) small_volume_slider_vertical_pane_g2

0xeb72,	// (0x0003bc5a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0003cddb) small_volume_slider_vertical_pane_g

0xb04f,	// (0x00038137) area_side_right_pane_ParamLimits

0xb04f,	// (0x00038137) area_side_right_pane

0xcb75,	// (0x00039c5d) aid_size_side_button_ParamLimits

0xcb75,	// (0x00039c5d) aid_size_side_button

0xcb8e,	// (0x00039c76) grid_sctrl_middle_pane_ParamLimits

0xcb8e,	// (0x00039c76) grid_sctrl_middle_pane

0x5212,	// (0x000322fa) sctrl_sk_bottom_pane

0x5223,	// (0x0003230b) sctrl_sk_top_pane

0x5235,	// (0x0003231d) aid_touch_sctrl_top

0x6394,	// (0x0003347c) bg_sctrl_sk_pane_ParamLimits

0x6394,	// (0x0003347c) bg_sctrl_sk_pane

0x5242,	// (0x0003232a) sctrl_sk_top_pane_g1

0x524f,	// (0x00032337) sctrl_sk_top_pane_t1

0x5235,	// (0x0003231d) aid_touch_sctrl_bottom

0x6394,	// (0x0003347c) bg_sctrl_sk_pane_cp_ParamLimits

0x6394,	// (0x0003347c) bg_sctrl_sk_pane_cp

0x526a,	// (0x00032352) sctrl_sk_bottom_pane_g1

0x524f,	// (0x00032337) sctrl_sk_bottom_pane_t1

0xcba4,	// (0x00039c8c) cell_sctrl_middle_pane_ParamLimits

0xcba4,	// (0x00039c8c) cell_sctrl_middle_pane

0xcbb5,	// (0x00039c9d) aid_touch_sctrl_middle_ParamLimits

0xcbb5,	// (0x00039c9d) aid_touch_sctrl_middle

0xcbc2,	// (0x00039caa) bg_sctrl_middle_pane_ParamLimits

0xcbc2,	// (0x00039caa) bg_sctrl_middle_pane

0xeb7b,	// (0x0003bc63) cell_sctrl_middle_pane_g1_ParamLimits

0xeb7b,	// (0x0003bc63) cell_sctrl_middle_pane_g1

0xcbd0,	// (0x00039cb8) cell_sctrl_middle_pane_g2_ParamLimits

0xcbd0,	// (0x00039cb8) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0003cde7) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0003cde7) cell_sctrl_middle_pane_g

0x7635,	// (0x0003471d) bg_sctrl_middle_pane_g1

0x763d,	// (0x00034725) bg_sctrl_middle_pane_g2

0x7645,	// (0x0003472d) bg_sctrl_middle_pane_g3

0x764d,	// (0x00034735) bg_sctrl_middle_pane_g4

0x7655,	// (0x0003473d) bg_sctrl_middle_pane_g5

0x765d,	// (0x00034745) bg_sctrl_middle_pane_g6

0x7665,	// (0x0003474d) bg_sctrl_middle_pane_g7

0x766d,	// (0x00034755) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0003cdec) bg_sctrl_middle_pane_g

0x7675,	// (0x0003475d) bg_sctrl_middle_pane_g8_copy1

0x7635,	// (0x0003471d) bg_sctrl_sk_pane_g1

0x763d,	// (0x00034725) bg_sctrl_sk_pane_g2

0x7645,	// (0x0003472d) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003c94e) bg_sctrl_sk_pane_g

0x674e,	// (0x00033836) aid_size_touch_scroll_bar

0x764d,	// (0x00034735) bg_sctrl_sk_pane_g4

0x7655,	// (0x0003473d) bg_sctrl_sk_pane_g5

0x765d,	// (0x00034745) bg_sctrl_sk_pane_g6

0x7665,	// (0x0003474d) bg_sctrl_sk_pane_g7

0x766d,	// (0x00034755) bg_sctrl_sk_pane_g8

0x7675,	// (0x0003475d) bg_sctrl_sk_pane_g9

0x447c,	// (0x00031564) popup_fep_china_hwr2_fs_candidate_window

0xb440,	// (0x00038528) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb440,	// (0x00038528) popup_fep_china_hwr2_fs_control_window

0xdd04,	// (0x0003adec) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0003cde2) sctrl_sk_top_pane_g

0xcbdc,	// (0x00039cc4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcbdc,	// (0x00039cc4) aid_fep_china_hwr2_fs_cell

0xcbf0,	// (0x00039cd8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcbf0,	// (0x00039cd8) bg_popup_fep_shadow_pane_cp4

0xcc07,	// (0x00039cef) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcc07,	// (0x00039cef) bg_popup_fep_shadow_pane_cp5

0xcc19,	// (0x00039d01) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcc19,	// (0x00039d01) popup_fep_china_hwr2_fs_control_bar_grid

0xcc2d,	// (0x00039d15) popup_fep_china_hwr2_fs_control_funtion_grid

0xeb89,	// (0x0003bc71) aid_fep_china_hwr2_fs_candi_cell

0x61e1,	// (0x000332c9) bg_popup_fep_shadow_pane_cp6

0xeb93,	// (0x0003bc7b) popup_fep_china_hwr2_fs_candidate_grid

0xcc35,	// (0x00039d1d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcc35,	// (0x00039d1d) cell_fep_china_hwr2_fs_funtion_grid

0x9342,	// (0x0003642a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xeb7b,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xeb7b,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeb9b,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeb9b,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g

0xcc4d,	// (0x00039d35) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcc4d,	// (0x00039d35) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcc62,	// (0x00039d4a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcc62,	// (0x00039d4a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0003ce02) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0003ce02) cell_fep_china_hwr2_fs_funtion_grid_t

0xebb1,	// (0x0003bc99) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xebb9,	// (0x0003bca1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xebc1,	// (0x0003bca9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0003ce07) popup_fep_china_hwr2_fs_control_bar_grid_g

0xebc9,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xebc9,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid

0xebe2,	// (0x0003bcca) popup_fep_china_hwr2_fs_candidate_grid_g20

0xebea,	// (0x0003bcd2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x9342,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x9342,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb46,	// (0x0003cc2e) cell_fep_china_hwr2_fs_candidate_grid_g

0xebf2,	// (0x0003bcda) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7486,	// (0x0003456e) clock_nsta_pane_cp_24_ParamLimits

0x7486,	// (0x0003456e) clock_nsta_pane_cp_24

0x74ee,	// (0x000345d6) indicator_nsta_pane_cp_24_ParamLimits

0x74ee,	// (0x000345d6) indicator_nsta_pane_cp_24

0x81df,	// (0x000352c7) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003c9b3) heading_pane_g

0x8875,	// (0x0003595d) grid_sct_catagory_button_pane

0x8891,	// (0x00035979) scroll_pane_cp5_ParamLimits

0x9106,	// (0x000361ee) button_value_adjust_pane_cp5_ParamLimits

0x9106,	// (0x000361ee) button_value_adjust_pane_cp5

0x91ab,	// (0x00036293) form2_midp_time_pane_ParamLimits

0xec00,	// (0x0003bce8) cell_sct_catagory_button_pane_ParamLimits

0xec00,	// (0x0003bce8) cell_sct_catagory_button_pane

0x9307,	// (0x000363ef) bg_button_pane_cp01_ParamLimits

0x9307,	// (0x000363ef) bg_button_pane_cp01

0x9342,	// (0x0003642a) cell_sct_catagory_button_pane_g1

0xb8b7,	// (0x0003899f) popup_tb_extension_window

0xcc7e,	// (0x00039d66) aid_size_cell_ext_ParamLimits

0xcc7e,	// (0x00039d66) aid_size_cell_ext

0x662c,	// (0x00033714) bg_tb_trans_pane_cp1_ParamLimits

0x662c,	// (0x00033714) bg_tb_trans_pane_cp1

0xcca0,	// (0x00039d88) grid_tb_ext_pane_ParamLimits

0xcca0,	// (0x00039d88) grid_tb_ext_pane

0xccd0,	// (0x00039db8) cell_tb_ext_pane_ParamLimits

0xccd0,	// (0x00039db8) cell_tb_ext_pane

0xccf4,	// (0x00039ddc) cell_tb_ext_pane_g1_ParamLimits

0xccf4,	// (0x00039ddc) cell_tb_ext_pane_g1

0xec12,	// (0x0003bcfa) cell_tb_ext_pane_t1

0x6394,	// (0x0003347c) list_highlight_pane_cp11_ParamLimits

0x6394,	// (0x0003347c) list_highlight_pane_cp11

0xb0e0,	// (0x000381c8) popup_uni_indicator_window_ParamLimits

0xb0e0,	// (0x000381c8) popup_uni_indicator_window

0x6818,	// (0x00033900) bg_popup_sub_pane_cp14

0xec2d,	// (0x0003bd15) list_uniindi_pane

0xec39,	// (0x0003bd21) uniindi_top_pane

0x6394,	// (0x0003347c) bg_uniindi_top_pane

0xec58,	// (0x0003bd40) uniindi_top_pane_g1

0xec6e,	// (0x0003bd56) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0003ce0e) uniindi_top_pane_g

0xec98,	// (0x0003bd80) uniindi_top_pane_t1

0xecc2,	// (0x0003bdaa) list_single_uniindi_pane_ParamLimits

0xecc2,	// (0x0003bdaa) list_single_uniindi_pane

0x9342,	// (0x0003642a) bg_uniindi_top_pane_g1

0xecd4,	// (0x0003bdbc) list_single_uniindi_pane_g1

0xece7,	// (0x0003bdcf) list_single_uniindi_pane_t1

0x61e1,	// (0x000332c9) control_bg_pane

0xed0c,	// (0x0003bdf4) bg_sctrl_sk_pane_cp1

0xed15,	// (0x0003bdfd) bg_sctrl_sk_pane_cp2

0xed1e,	// (0x0003be06) control_bg_pane_g1

0xed27,	// (0x0003be0f) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0003ce17) control_bg_pane_g

0x9048,	// (0x00036130) cell_indicator_nsta_pane_g1_ParamLimits

0xc346,	// (0x0003942e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaaa,	// (0x0003cb92) cell_indicator_nsta_pane_g_ParamLimits

0x36c7,	// (0x000307af) form2_midp_time_pane_t1_ParamLimits

0x4d99,	// (0x00031e81) main_idle_act4_pane_ParamLimits

0x4d99,	// (0x00031e81) main_idle_act4_pane

0xb8b7,	// (0x0003899f) popup_tb_extension_window_ParamLimits

0xccbc,	// (0x00039da4) tb_ext_find_pane_ParamLimits

0xccbc,	// (0x00039da4) tb_ext_find_pane

0xed30,	// (0x0003be18) ai_gene_pane_1_cp1

0x7332,	// (0x0003441a) ai_gene_pane_2_cp1

0xed38,	// (0x0003be20) list_single_idle_plugin_calendar_pane

0xed41,	// (0x0003be29) list_single_idle_plugin_notification_pane

0xed4a,	// (0x0003be32) list_single_idle_plugin_player_pane

0xcd11,	// (0x00039df9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcd11,	// (0x00039df9) list_single_idle_plugin_shortcut_pane

0xcd31,	// (0x00039e19) main_idle_act4_pane_t1

0xcd47,	// (0x00039e2f) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0003ce1c) main_idle_act4_pane_t

0xcd5d,	// (0x00039e45) middle_sk_idle_act4_pane_ParamLimits

0xcd5d,	// (0x00039e45) middle_sk_idle_act4_pane

0xcd79,	// (0x00039e61) popup_clock_digital_analogue_window_cp2

0xcd9f,	// (0x00039e87) shortcut_wheel_idle_act4_pane_ParamLimits

0xcd9f,	// (0x00039e87) shortcut_wheel_idle_act4_pane

0x9342,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g1

0x9342,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g2

0x9342,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g3

0x9342,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g4

0x9342,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g5

0xed53,	// (0x0003be3b) shortcut_wheel_idle_act4_pane_g6

0xed5b,	// (0x0003be43) shortcut_wheel_idle_act4_pane_g7

0xed63,	// (0x0003be4b) shortcut_wheel_idle_act4_pane_g8

0xed6b,	// (0x0003be53) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0003ce21) shortcut_wheel_idle_act4_pane_g

0x0732,	// (0x0002d81a) middle_sk_idle_act4_pane_g1_ParamLimits

0x0732,	// (0x0002d81a) middle_sk_idle_act4_pane_g1

0xce1a,	// (0x00039f02) middle_sk_idle_act4_pane_g2_ParamLimits

0xce1a,	// (0x00039f02) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0003ce44) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0003ce44) middle_sk_idle_act4_pane_g

0xce32,	// (0x00039f1a) middle_sk_idle_act4_pane_t1_ParamLimits

0xce32,	// (0x00039f1a) middle_sk_idle_act4_pane_t1

0xce61,	// (0x00039f49) grid_ai_shortcut_pane_ParamLimits

0xce61,	// (0x00039f49) grid_ai_shortcut_pane

0xce7e,	// (0x00039f66) list_highlight_pane_cp16_ParamLimits

0xce7e,	// (0x00039f66) list_highlight_pane_cp16

0xce8b,	// (0x00039f73) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xce8b,	// (0x00039f73) list_single_idle_plugin_shortcut_pane_g1

0xce97,	// (0x00039f7f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xce97,	// (0x00039f7f) list_single_idle_plugin_shortcut_pane_g2

0xceb3,	// (0x00039f9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xceb3,	// (0x00039f9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0003ce49) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0003ce49) list_single_idle_plugin_shortcut_pane_g

0xcec8,	// (0x00039fb0) cell_ai_shortcut_pane_ParamLimits

0xcec8,	// (0x00039fb0) cell_ai_shortcut_pane

0xcede,	// (0x00039fc6) cell_ai_shortcut_pane_g1_ParamLimits

0xcede,	// (0x00039fc6) cell_ai_shortcut_pane_g1

0xed30,	// (0x0003be18) ai_gene_pane_1_cp2

0xed73,	// (0x0003be5b) ai_gene_pane_2_cp2

0xed7b,	// (0x0003be63) list_highlight_pane_cp15

0xed84,	// (0x0003be6c) list_single_idle_plugin_calendar_pane_g1

0xed7b,	// (0x0003be63) list_highlight_pane_cp17

0xed8c,	// (0x0003be74) list_single_idle_plugin_calendar_pane_g1_copy1

0xed94,	// (0x0003be7c) list_single_idle_plugin_player_pane_g1

0x8a80,	// (0x00035b68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0003ce50) list_single_idle_plugin_player_pane_g

0xed9c,	// (0x0003be84) list_single_idle_plugin_player_pane_t1

0xedaa,	// (0x0003be92) list_single_idle_plugin_player_pane_t2

0xedb8,	// (0x0003bea0) list_single_idle_plugin_player_pane_t3

0xedc6,	// (0x0003beae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0003ce55) list_single_idle_plugin_player_pane_t

0xedd4,	// (0x0003bebc) wait_bar_pane_cp15

0xeddc,	// (0x0003bec4) grid_ai_notification_pane

0x8a80,	// (0x00035b68) list_single_idle_plugin_notification_pane_g1

0xcf00,	// (0x00039fe8) cell_ai_notification_pane_ParamLimits

0xcf00,	// (0x00039fe8) cell_ai_notification_pane

0xede5,	// (0x0003becd) cell_ai_notification_pane_g1

0xeded,	// (0x0003bed5) cell_ai_notification_pane_t1

0xcf0d,	// (0x00039ff5) tb_ext_find_button_pane

0xcf15,	// (0x00039ffd) tb_ext_find_pane_g1

0xcf1d,	// (0x0003a005) tb_ext_find_pane_t1

0x6d4e,	// (0x00033e36) tb_ext_find_button_pane_g1

0xedfb,	// (0x0003bee3) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0003ce5e) tb_ext_find_button_pane_g

0xcd31,	// (0x00039e19) main_idle_act4_pane_t1_ParamLimits

0xcd47,	// (0x00039e2f) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0003ce1c) main_idle_act4_pane_t_ParamLimits

0xcd79,	// (0x00039e61) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcd8f,	// (0x00039e77) sat_plugin_idle_act4_pane_ParamLimits

0xcd8f,	// (0x00039e77) sat_plugin_idle_act4_pane

0xcf2b,	// (0x0003a013) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcf2b,	// (0x0003a013) sat_plugin_idle_act4_pane_t1

0xcf43,	// (0x0003a02b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcf43,	// (0x0003a02b) sat_plugin_idle_act4_pane_t2

0xcf5b,	// (0x0003a043) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcf5b,	// (0x0003a043) sat_plugin_idle_act4_pane_t3

0xcf73,	// (0x0003a05b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcf73,	// (0x0003a05b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0003ce63) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0003ce63) sat_plugin_idle_act4_pane_t

0x3bee,	// (0x00030cd6) popup_battery_window_ParamLimits

0x3bee,	// (0x00030cd6) popup_battery_window

0x6394,	// (0x0003347c) bg_popup_sub_pane_cp25_ParamLimits

0x6394,	// (0x0003347c) bg_popup_sub_pane_cp25

0xee04,	// (0x0003beec) popup_battery_window_g1_ParamLimits

0xee04,	// (0x0003beec) popup_battery_window_g1

0xee10,	// (0x0003bef8) popup_battery_window_t1_ParamLimits

0xee10,	// (0x0003bef8) popup_battery_window_t1

0xee22,	// (0x0003bf0a) popup_battery_window_t2_ParamLimits

0xee22,	// (0x0003bf0a) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0003ce6c) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0003ce6c) popup_battery_window_t

0x1f6a,	// (0x0002f052) midp_canvas_pane_ParamLimits

0x1fbf,	// (0x0002f0a7) midp_keypad_pane_ParamLimits

0x1fbf,	// (0x0002f0a7) midp_keypad_pane

0x7451,	// (0x00034539) main_midp_pane_ParamLimits

0x90a4,	// (0x0003618c) signal_pane_g2_cp_ParamLimits

0xcf8b,	// (0x0003a073) aid_size_cell_midp_keypad_ParamLimits

0xcf8b,	// (0x0003a073) aid_size_cell_midp_keypad

0xcfa8,	// (0x0003a090) midp_keyp_game_grid_pane_ParamLimits

0xcfa8,	// (0x0003a090) midp_keyp_game_grid_pane

0xcfc7,	// (0x0003a0af) midp_keyp_rocker_pane_ParamLimits

0xcfc7,	// (0x0003a0af) midp_keyp_rocker_pane

0xd008,	// (0x0003a0f0) midp_keyp_sk_left_pane_ParamLimits

0xd008,	// (0x0003a0f0) midp_keyp_sk_left_pane

0xd05a,	// (0x0003a142) midp_keyp_sk_right_pane_ParamLimits

0xd05a,	// (0x0003a142) midp_keyp_sk_right_pane

0x61e1,	// (0x000332c9) bg_button_pane_cp03

0xd0a6,	// (0x0003a18e) midp_keyp_sk_left_pane_g1

0x61e1,	// (0x000332c9) bg_button_pane_cp04

0xd0a6,	// (0x0003a18e) midp_keyp_sk_right_pane_g1

0x9342,	// (0x0003642a) midp_keyp_rocker_pane_g1

0xd0af,	// (0x0003a197) keyp_game_cell_pane_ParamLimits

0xd0af,	// (0x0003a197) keyp_game_cell_pane

0x61e1,	// (0x000332c9) bg_button_pane_cp02

0xd0d1,	// (0x0003a1b9) keyp_game_cell_pane_g1

0xb091,	// (0x00038179) popup_fep_vkb2_window_ParamLimits

0xb091,	// (0x00038179) popup_fep_vkb2_window

0xd0da,	// (0x0003a1c2) aid_size_cell_vkb2_ParamLimits

0xd0da,	// (0x0003a1c2) aid_size_cell_vkb2

0xd110,	// (0x0003a1f8) popup_fep_vkb2_window_g1_ParamLimits

0xd110,	// (0x0003a1f8) popup_fep_vkb2_window_g1

0xd160,	// (0x0003a248) vkb2_area_bottom_pane_ParamLimits

0xd160,	// (0x0003a248) vkb2_area_bottom_pane

0xd19e,	// (0x0003a286) vkb2_area_keypad_pane_ParamLimits

0xd19e,	// (0x0003a286) vkb2_area_keypad_pane

0xd1dc,	// (0x0003a2c4) vkb2_area_top_pane_ParamLimits

0xd1dc,	// (0x0003a2c4) vkb2_area_top_pane

0xd258,	// (0x0003a340) vkb2_top_entry_pane_ParamLimits

0xd258,	// (0x0003a340) vkb2_top_entry_pane

0xd285,	// (0x0003a36d) vkb2_top_grid_left_pane_ParamLimits

0xd285,	// (0x0003a36d) vkb2_top_grid_left_pane

0xd2a5,	// (0x0003a38d) vkb2_top_grid_right_pane_ParamLimits

0xd2a5,	// (0x0003a38d) vkb2_top_grid_right_pane

0x54a0,	// (0x00032588) vkb2_cell_keypad_pane_ParamLimits

0x54a0,	// (0x00032588) vkb2_cell_keypad_pane

0xd2eb,	// (0x0003a3d3) vkb2_area_bottom_grid_pane_ParamLimits

0xd2eb,	// (0x0003a3d3) vkb2_area_bottom_grid_pane

0xd311,	// (0x0003a3f9) vkb2_area_bottom_pane_g1_ParamLimits

0xd311,	// (0x0003a3f9) vkb2_area_bottom_pane_g1

0xd337,	// (0x0003a41f) vkb2_area_bottom_pane_g2_ParamLimits

0xd337,	// (0x0003a41f) vkb2_area_bottom_pane_g2

0xd368,	// (0x0003a450) vkb2_area_bottom_pane_g3_ParamLimits

0xd368,	// (0x0003a450) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0003ce71) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0003ce71) vkb2_area_bottom_pane_g

0x5618,	// (0x00032700) vkb2_top_cell_left_pane_ParamLimits

0x5618,	// (0x00032700) vkb2_top_cell_left_pane

0xd3be,	// (0x0003a4a6) vkb2_top_entry_pane_g1_ParamLimits

0xd3be,	// (0x0003a4a6) vkb2_top_entry_pane_g1

0xd3cc,	// (0x0003a4b4) vkb2_top_entry_pane_t1_ParamLimits

0xd3cc,	// (0x0003a4b4) vkb2_top_entry_pane_t1

0xee47,	// (0x0003bf2f) vkb2_top_entry_pane_t2_ParamLimits

0xee47,	// (0x0003bf2f) vkb2_top_entry_pane_t2

0xee79,	// (0x0003bf61) vkb2_top_entry_pane_t3_ParamLimits

0xee79,	// (0x0003bf61) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0003ce78) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0003ce78) vkb2_top_entry_pane_t

0xd405,	// (0x0003a4ed) vkb2_top_grid_right_pane_g1_ParamLimits

0xd405,	// (0x0003a4ed) vkb2_top_grid_right_pane_g1

0x567b,	// (0x00032763) vkb2_top_grid_right_pane_g2_ParamLimits

0x567b,	// (0x00032763) vkb2_top_grid_right_pane_g2

0x5693,	// (0x0003277b) vkb2_top_grid_right_pane_g3_ParamLimits

0x5693,	// (0x0003277b) vkb2_top_grid_right_pane_g3

0xd41b,	// (0x0003a503) vkb2_top_grid_right_pane_g4_ParamLimits

0xd41b,	// (0x0003a503) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0003ce7f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0003ce7f) vkb2_top_grid_right_pane_g

0x56c1,	// (0x000327a9) vkb2_top_cell_left_pane_g1

0x56d8,	// (0x000327c0) vkb2_cell_keypad_pane_g1_ParamLimits

0x56d8,	// (0x000327c0) vkb2_cell_keypad_pane_g1

0xee9d,	// (0x0003bf85) vkb2_cell_keypad_pane_t1_ParamLimits

0xee9d,	// (0x0003bf85) vkb2_cell_keypad_pane_t1

0x56e6,	// (0x000327ce) vkb2_cell_bottom_grid_pane_ParamLimits

0x56e6,	// (0x000327ce) vkb2_cell_bottom_grid_pane

0x571f,	// (0x00032807) vkb2_cell_bottom_grid_pane_g1

0xcdbe,	// (0x00039ea6) aid_call2_pane_cp02

0xcdc6,	// (0x00039eae) aid_call_pane_cp02

0xcdce,	// (0x00039eb6) clock_digital_number_pane_cp10

0xcdd6,	// (0x00039ebe) clock_digital_number_pane_cp11

0xcdde,	// (0x00039ec6) clock_digital_number_pane_cp12

0xcde6,	// (0x00039ece) clock_digital_number_pane_cp13

0xcdee,	// (0x00039ed6) clock_digital_separator_pane_cp10

0x6d4e,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g1

0x6d4e,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g2

0xcdf6,	// (0x00039ede) popup_clock_digital_analogue_window_cp2_g3

0x6d4e,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g4

0xcdf6,	// (0x00039ede) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0003ce34) popup_clock_digital_analogue_window_cp2_g

0xcdfe,	// (0x00039ee6) popup_clock_digital_analogue_window_cp2_t1

0xce0c,	// (0x00039ef4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0003ce3f) popup_clock_digital_analogue_window_cp2_t

0x9342,	// (0x0003642a) clock_digital_number_pane_cp10_g1

0x9342,	// (0x0003642a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb46,	// (0x0003cc2e) clock_digital_number_pane_cp10_g

0x9342,	// (0x0003642a) clock_digital_separator_pane_cp10_g1

0x9342,	// (0x0003642a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb46,	// (0x0003cc2e) clock_digital_separator_pane_cp10_g

0xec7a,	// (0x0003bd62) uniindi_top_pane_g3

0xec8b,	// (0x0003bd73) uniindi_top_pane_g4

0x550b,	// (0x000325f3) vkb2_row_keypad_pane_ParamLimits

0x550b,	// (0x000325f3) vkb2_row_keypad_pane

0x573b,	// (0x00032823) vkb2_cell_t_keypad_pane_ParamLimits

0x573b,	// (0x00032823) vkb2_cell_t_keypad_pane

0x5748,	// (0x00032830) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5748,	// (0x00032830) vkb2_cell_t_keypad_pane_cp08

0x5758,	// (0x00032840) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5758,	// (0x00032840) vkb2_cell_t_keypad_pane_cp09

0x5769,	// (0x00032851) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5769,	// (0x00032851) vkb2_cell_t_keypad_pane_cp01

0x5779,	// (0x00032861) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5779,	// (0x00032861) vkb2_cell_t_keypad_pane_cp02

0x5789,	// (0x00032871) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5789,	// (0x00032871) vkb2_cell_t_keypad_pane_cp03

0x5799,	// (0x00032881) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5799,	// (0x00032881) vkb2_cell_t_keypad_pane_cp04

0x57a9,	// (0x00032891) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x57a9,	// (0x00032891) vkb2_cell_t_keypad_pane_cp05

0x57b9,	// (0x000328a1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x57b9,	// (0x000328a1) vkb2_cell_t_keypad_pane_cp06

0x57c9,	// (0x000328b1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x57c9,	// (0x000328b1) vkb2_cell_t_keypad_pane_cp07

0x57d9,	// (0x000328c1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x57d9,	// (0x000328c1) vkb2_cell_t_keypad_pane_cp10

0xdd04,	// (0x0003adec) vkb2_cell_t_keypad_pane_g1

0xeeb4,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1

0x61e1,	// (0x000332c9) popup_grid_graphic2_window

0xd431,	// (0x0003a519) aid_size_cell_graphic2_ParamLimits

0xd431,	// (0x0003a519) aid_size_cell_graphic2

0xd46f,	// (0x0003a557) bg_popup_window_pane_cp21_ParamLimits

0xd46f,	// (0x0003a557) bg_popup_window_pane_cp21

0xd47d,	// (0x0003a565) graphic2_pages_pane_ParamLimits

0xd47d,	// (0x0003a565) graphic2_pages_pane

0xd4c6,	// (0x0003a5ae) grid_graphic2_control_pane_ParamLimits

0xd4c6,	// (0x0003a5ae) grid_graphic2_control_pane

0xd504,	// (0x0003a5ec) grid_graphic2_pane_ParamLimits

0xd504,	// (0x0003a5ec) grid_graphic2_pane

0xd573,	// (0x0003a65b) cell_graphic2_pane

0x61e1,	// (0x000332c9) main_comp_mode_pane

0xe8f5,	// (0x0003b9dd) list_ai3_gene_pane_ParamLimits

0xcabd,	// (0x00039ba5) bg_popup_window_pane_cp19_ParamLimits

0xea66,	// (0x0003bb4e) bg_touch_area_indi_pane_ParamLimits

0xea66,	// (0x0003bb4e) bg_touch_area_indi_pane

0xea7c,	// (0x0003bb64) bg_touch_area_indi_pane_cp01_ParamLimits

0xea7c,	// (0x0003bb64) bg_touch_area_indi_pane_cp01

0xea92,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02_ParamLimits

0xea92,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02

0xeaa8,	// (0x0003bb90) bg_touch_area_indi_pane_cp03_ParamLimits

0xeaa8,	// (0x0003bb90) bg_touch_area_indi_pane_cp03

0xeabe,	// (0x0003bba6) popup_slider_window_g1_ParamLimits

0xeada,	// (0x0003bbc2) popup_slider_window_g2_ParamLimits

0xeaf6,	// (0x0003bbde) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0003cdc9) popup_slider_window_g_ParamLimits

0xeb12,	// (0x0003bbfa) popup_slider_window_t1_ParamLimits

0xeb56,	// (0x0003bc3e) small_volume_slider_vertical_pane_ParamLimits

0xd573,	// (0x0003a65b) cell_graphic2_pane_ParamLimits

0xd5bc,	// (0x0003a6a4) bg_button_pane_cp10_ParamLimits

0xd5bc,	// (0x0003a6a4) bg_button_pane_cp10

0xd5cf,	// (0x0003a6b7) bg_button_pane_cp11_ParamLimits

0xd5cf,	// (0x0003a6b7) bg_button_pane_cp11

0xd5e2,	// (0x0003a6ca) graphic2_pages_pane_g1_ParamLimits

0xd5e2,	// (0x0003a6ca) graphic2_pages_pane_g1

0xd5fd,	// (0x0003a6e5) graphic2_pages_pane_g2_ParamLimits

0xd5fd,	// (0x0003a6e5) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0003ce8d) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0003ce8d) graphic2_pages_pane_g

0xd615,	// (0x0003a6fd) graphic2_pages_pane_t1_ParamLimits

0xd615,	// (0x0003a6fd) graphic2_pages_pane_t1

0xd62d,	// (0x0003a715) cell_graphic2_control_pane_ParamLimits

0xd62d,	// (0x0003a715) cell_graphic2_control_pane

0xd657,	// (0x0003a73f) cell_graphic2_pane_g1_ParamLimits

0xd657,	// (0x0003a73f) cell_graphic2_pane_g1

0x0a50,	// (0x0002db38) cell_graphic2_pane_g2_ParamLimits

0x0a50,	// (0x0002db38) cell_graphic2_pane_g2

0xd664,	// (0x0003a74c) cell_graphic2_pane_g3_ParamLimits

0xd664,	// (0x0003a74c) cell_graphic2_pane_g3

0x0a5d,	// (0x0002db45) cell_graphic2_pane_g4_ParamLimits

0x0a5d,	// (0x0002db45) cell_graphic2_pane_g4

0xd671,	// (0x0003a759) cell_graphic2_pane_g5_ParamLimits

0xd671,	// (0x0003a759) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0003ce92) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0003ce92) cell_graphic2_pane_g

0xd691,	// (0x0003a779) cell_graphic2_pane_t1_ParamLimits

0xd691,	// (0x0003a779) cell_graphic2_pane_t1

0x81d3,	// (0x000352bb) grid_highlight_pane_cp11_ParamLimits

0x81d3,	// (0x000352bb) grid_highlight_pane_cp11

0x6394,	// (0x0003347c) bg_button_pane_cp05

0xd6d9,	// (0x0003a7c1) cell_graphic2_control_pane_g1

0x9342,	// (0x0003642a) bg_touch_area_indi_pane_g1

0xeec6,	// (0x0003bfae) aid_cmod_rocker_key_size

0xeed0,	// (0x0003bfb8) aid_cmode_itu_key_size

0xeeda,	// (0x0003bfc2) main_cmode_video_pane

0xeee2,	// (0x0003bfca) main_comp_mode_itu_pane

0xeeec,	// (0x0003bfd4) main_comp_mode_rocker_pane

0xeef4,	// (0x0003bfdc) cell_cmode_rocker_pane_ParamLimits

0xeef4,	// (0x0003bfdc) cell_cmode_rocker_pane

0xef06,	// (0x0003bfee) cell_cmode_itu_pane_ParamLimits

0xef06,	// (0x0003bfee) cell_cmode_itu_pane

0x6818,	// (0x00033900) bg_button_pane_cp06_ParamLimits

0x6818,	// (0x00033900) bg_button_pane_cp06

0xdd04,	// (0x0003adec) cell_cmode_rocker_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) cell_cmode_rocker_pane_g1

0xeb7b,	// (0x0003bc63) cell_cmode_rocker_pane_g2_ParamLimits

0xeb7b,	// (0x0003bc63) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0003cea2) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0003cea2) cell_cmode_rocker_pane_g

0x61e1,	// (0x000332c9) bg_button_pane_cp07

0xef1b,	// (0x0003c003) cell_cmode_itu_pane_g1

0xef24,	// (0x0003c00c) cell_cmode_itu_pane_t1

0xef32,	// (0x0003c01a) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0003cea7) cell_cmode_itu_pane_t

0xecfc,	// (0x0003bde4) aid_touch_ctrl_left

0xed04,	// (0x0003bdec) aid_touch_ctrl_right

0x61e1,	// (0x000332c9) compa_mode_pane

0xd701,	// (0x0003a7e9) aid_cmod_rocker_key_size_cp

0xd70b,	// (0x0003a7f3) aid_cmode_itu_key_size_cp

0xef40,	// (0x0003c028) compa_mode_pane_g1

0xef48,	// (0x0003c030) compa_mode_pane_g2

0xef50,	// (0x0003c038) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0003ceac) compa_mode_pane_g

0xd715,	// (0x0003a7fd) main_comp_mode_itu_pane_cp

0xd71d,	// (0x0003a805) main_comp_mode_rocker_pane_cp

0xd725,	// (0x0003a80d) cell_cmode_itu_pane_cp_ParamLimits

0xd725,	// (0x0003a80d) cell_cmode_itu_pane_cp

0xd73a,	// (0x0003a822) cell_cmode_rocker_pane_cp_ParamLimits

0xd73a,	// (0x0003a822) cell_cmode_rocker_pane_cp

0x6818,	// (0x00033900) bg_button_pane_cp06_cp_ParamLimits

0x6818,	// (0x00033900) bg_button_pane_cp06_cp

0xdd04,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xdd04,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp

0x9342,	// (0x0003642a) cell_cmode_rocker_pane_g2_cp

0x61e1,	// (0x000332c9) bg_button_pane_cp07_cp

0xd74c,	// (0x0003a834) cell_cmode_itu_pane_g1_cp

0xd755,	// (0x0003a83d) cell_cmode_itu_pane_t1_cp

0xd755,	// (0x0003a83d) cell_cmode_itu_pane_t2_cp

0xc164,	// (0x0003924c) settings_code_pane_cp2

0x6243,	// (0x0003332b) bg_popup_window_pane_cp3_ParamLimits

0x656c,	// (0x00033654) heading_pane_cp3_ParamLimits

0x6578,	// (0x00033660) listscroll_popup_graphic_pane_ParamLimits

0x4da7,	// (0x00031e8f) fep_hwr_aid_pane_ParamLimits

0x5235,	// (0x0003231d) aid_touch_sctrl_top_ParamLimits

0x5242,	// (0x0003232a) sctrl_sk_top_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0003cde2) sctrl_sk_top_pane_g_ParamLimits

0x524f,	// (0x00032337) sctrl_sk_top_pane_t1_ParamLimits

0x5235,	// (0x0003231d) aid_touch_sctrl_bottom_ParamLimits

0x524f,	// (0x00032337) sctrl_sk_bottom_pane_t1_ParamLimits

0xec46,	// (0x0003bd2e) aid_area_touch_clock

0xd21a,	// (0x0003a302) aid_vkb2_area_top_pane_cell_ParamLimits

0xd21a,	// (0x0003a302) aid_vkb2_area_top_pane_cell

0xd2c5,	// (0x0003a3ad) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd2c5,	// (0x0003a3ad) aid_vkb2_area_bottom_pane_cell

0xee3f,	// (0x0003bf27) popup_char_count_window

0xef58,	// (0x0003c040) popup_char_count_window_g1

0xef61,	// (0x0003c049) popup_char_count_window_g2

0xef6a,	// (0x0003c052) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0003ceb3) popup_char_count_window_g

0xef73,	// (0x0003c05b) popup_char_count_window_t1

0x52f0,	// (0x000323d8) popup_fep_char_preview_window_ParamLimits

0x52f0,	// (0x000323d8) popup_fep_char_preview_window

0xd23a,	// (0x0003a322) vkb2_top_candi_pane_ParamLimits

0xd23a,	// (0x0003a322) vkb2_top_candi_pane

0xd763,	// (0x0003a84b) cell_vkb2_top_candi_pane_ParamLimits

0xd763,	// (0x0003a84b) cell_vkb2_top_candi_pane

0x7b96,	// (0x00034c7e) bg_popup_fep_char_preview_window_ParamLimits

0x7b96,	// (0x00034c7e) bg_popup_fep_char_preview_window

0x5b15,	// (0x00032bfd) popup_fep_char_preview_window_t1_ParamLimits

0x5b15,	// (0x00032bfd) popup_fep_char_preview_window_t1

0xef81,	// (0x0003c069) bg_popup_fep_char_preview_window_g1

0xef89,	// (0x0003c071) bg_popup_fep_char_preview_window_g2

0xef91,	// (0x0003c079) bg_popup_fep_char_preview_window_g3

0xef99,	// (0x0003c081) bg_popup_fep_char_preview_window_g4

0xefa1,	// (0x0003c089) bg_popup_fep_char_preview_window_g5

0x5b4f,	// (0x00032c37) bg_popup_fep_char_preview_window_g6

0xefa9,	// (0x0003c091) bg_popup_fep_char_preview_window_g7

0xefb1,	// (0x0003c099) bg_popup_fep_char_preview_window_g8

0xefb9,	// (0x0003c0a1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0003ceba) bg_popup_fep_char_preview_window_g

0xdd04,	// (0x0003adec) cell_vkb2_top_candi_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) cell_vkb2_top_candi_pane_g1

0xdf33,	// (0x0003b01b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xdf33,	// (0x0003b01b) cell_vkb2_top_candi_pane_g2

0xdf54,	// (0x0003b03c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf54,	// (0x0003b03c) cell_vkb2_top_candi_pane_g3

0x5b57,	// (0x00032c3f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5b57,	// (0x00032c3f) cell_vkb2_top_candi_pane_g4

0xefc1,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xefc1,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g5

0xeb7b,	// (0x0003bc63) cell_vkb2_top_candi_pane_g6_ParamLimits

0xeb7b,	// (0x0003bc63) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0003cecd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0003cecd) cell_vkb2_top_candi_pane_g

0x5b78,	// (0x00032c60) cell_vkb2_top_candi_pane_t1

0x4b81,	// (0x00031c69) aid_size_touch_slider_mark_ParamLimits

0x4b81,	// (0x00031c69) aid_size_touch_slider_mark

0xd4b1,	// (0x0003a599) grid_graphic2_catg_pane_ParamLimits

0xd4b1,	// (0x0003a599) grid_graphic2_catg_pane

0xd548,	// (0x0003a630) popup_grid_graphic2_window_t1_ParamLimits

0xd548,	// (0x0003a630) popup_grid_graphic2_window_t1

0xd55d,	// (0x0003a645) popup_grid_graphic2_window_t2_ParamLimits

0xd55d,	// (0x0003a645) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0003ce88) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0003ce88) popup_grid_graphic2_window_t

0x6394,	// (0x0003347c) bg_button_pane_cp05_ParamLimits

0xd6d9,	// (0x0003a7c1) cell_graphic2_control_pane_g1_ParamLimits

0xecc2,	// (0x0003bdaa) cell_graphic2_catg_pane_ParamLimits

0xecc2,	// (0x0003bdaa) cell_graphic2_catg_pane

0x61e1,	// (0x000332c9) bg_button_pane_cp12

0xd7ad,	// (0x0003a895) cell_graphic2_catg_pane_g1

0xec12,	// (0x0003bcfa) cell_tb_ext_pane_t1_ParamLimits

0x5638,	// (0x00032720) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5638,	// (0x00032720) vkb2_top_cell_right_narrow_pane

0x5650,	// (0x00032738) vkb2_top_cell_right_wide_pane_ParamLimits

0x5650,	// (0x00032738) vkb2_top_cell_right_wide_pane

0x4d99,	// (0x00031e81) bg_vkb2_func_pane_ParamLimits

0x4d99,	// (0x00031e81) bg_vkb2_func_pane

0x56c1,	// (0x000327a9) vkb2_top_cell_left_pane_g1_ParamLimits

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp03

0x571f,	// (0x00032807) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x763d,	// (0x00034725) bg_vkb2_func_pane_g1

0x7645,	// (0x0003472d) bg_vkb2_func_pane_g2

0x7655,	// (0x0003473d) bg_vkb2_func_pane_g3

0x764d,	// (0x00034735) bg_vkb2_func_pane_g4

0x765d,	// (0x00034745) bg_vkb2_func_pane_g5

0x7665,	// (0x0003474d) bg_vkb2_func_pane_g6

0x766d,	// (0x00034755) bg_vkb2_func_pane_g7

0x7675,	// (0x0003475d) bg_vkb2_func_pane_g8

0x7635,	// (0x0003471d) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0003ceda) bg_vkb2_func_pane_g

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp01

0x56c1,	// (0x000327a9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x56c1,	// (0x000327a9) vkb2_top_cell_right_wide_pane_g1

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4d99,	// (0x00031e81) bg_vkb2_fuc_pane_cp02

0x571f,	// (0x00032807) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x571f,	// (0x00032807) vkb2_top_cell_right_narrow_pane_g1

0xca0b,	// (0x00039af3) aid_touch_area_decrease_ParamLimits

0xca0b,	// (0x00039af3) aid_touch_area_decrease

0xca39,	// (0x00039b21) aid_touch_area_increase_ParamLimits

0xca39,	// (0x00039b21) aid_touch_area_increase

0xca61,	// (0x00039b49) aid_touch_area_mute_ParamLimits

0xca61,	// (0x00039b49) aid_touch_area_mute

0xca89,	// (0x00039b71) aid_touch_area_slider_ParamLimits

0xca89,	// (0x00039b71) aid_touch_area_slider

0xcac9,	// (0x00039bb1) popup_slider_window_g4_ParamLimits

0xcac9,	// (0x00039bb1) popup_slider_window_g4

0xcaf1,	// (0x00039bd9) popup_slider_window_g5_ParamLimits

0xcaf1,	// (0x00039bd9) popup_slider_window_g5

0xcb25,	// (0x00039c0d) popup_slider_window_g6_ParamLimits

0xcb25,	// (0x00039c0d) popup_slider_window_g6

0xeb3e,	// (0x0003bc26) popup_slider_window_t2_ParamLimits

0xeb3e,	// (0x0003bc26) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0003cdd6) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0003cdd6) popup_slider_window_t

0xcb41,	// (0x00039c29) slider_pane_ParamLimits

0xcb41,	// (0x00039c29) slider_pane

0xefe2,	// (0x0003c0ca) slider_pane_g1_ParamLimits

0xefe2,	// (0x0003c0ca) slider_pane_g1

0xeff6,	// (0x0003c0de) slider_pane_g2_ParamLimits

0xeff6,	// (0x0003c0de) slider_pane_g2

0xf00c,	// (0x0003c0f4) slider_pane_g3_ParamLimits

0xf00c,	// (0x0003c0f4) slider_pane_g3

0x0003,

0xfe05,	// (0x0003ceed) slider_pane_g_ParamLimits

0xfe05,	// (0x0003ceed) slider_pane_g

0xb8ef,	// (0x000389d7) popup_tb_float_extension_window_ParamLimits

0xb8ef,	// (0x000389d7) popup_tb_float_extension_window

0xf038,	// (0x0003c120) aid_size_cell_tb_float_ext

0x61e1,	// (0x000332c9) bg_popup_sub_window_cp28

0xf043,	// (0x0003c12b) grid_tb_float_ext_pane

0xf04b,	// (0x0003c133) cell_tb_float_ext_pane_ParamLimits

0xf04b,	// (0x0003c133) cell_tb_float_ext_pane

0xf063,	// (0x0003c14b) cell_tb_float_ext_pane_g1

0xf06c,	// (0x0003c154) grid_highlight_pane_cp12

0xc50f,	// (0x000395f7) cell_last_hwr_side_pane_ParamLimits

0xc50f,	// (0x000395f7) cell_last_hwr_side_pane

0x9342,	// (0x0003642a) cell_last_hwr_side_pane_g1

0xf075,	// (0x0003c15d) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0003cef6) cell_last_hwr_side_pane_g

0xd399,	// (0x0003a481) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd399,	// (0x0003a481) vkb2_area_bottom_space_btn_pane

0xdd04,	// (0x0003adec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xeeb4,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5b78,	// (0x00032c60) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5bb1,	// (0x00032c99) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5bb1,	// (0x00032c99) vkb2_area_bottom_space_btn_pane_g1

0x5be7,	// (0x00032ccf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5be7,	// (0x00032ccf) vkb2_area_bottom_space_btn_pane_g2

0x5c1d,	// (0x00032d05) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5c1d,	// (0x00032d05) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0003cefb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0003cefb) vkb2_area_bottom_space_btn_pane_g

0x4e48,	// (0x00031f30) cel_fep_hwr_func_pane_ParamLimits

0x4e48,	// (0x00031f30) cel_fep_hwr_func_pane

0xc4e4,	// (0x000395cc) cell_hwr_side_button_pane_ParamLimits

0xc4e4,	// (0x000395cc) cell_hwr_side_button_pane

0xec46,	// (0x0003bd2e) aid_area_touch_clock_ParamLimits

0x6394,	// (0x0003347c) bg_uniindi_top_pane_ParamLimits

0xec58,	// (0x0003bd40) uniindi_top_pane_g1_ParamLimits

0xec6e,	// (0x0003bd56) uniindi_top_pane_g2_ParamLimits

0xec7a,	// (0x0003bd62) uniindi_top_pane_g3_ParamLimits

0xec8b,	// (0x0003bd73) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0003ce0e) uniindi_top_pane_g_ParamLimits

0xec98,	// (0x0003bd80) uniindi_top_pane_t1_ParamLimits

0x6394,	// (0x0003347c) bg_vkb2_func_pane_cp01_ParamLimits

0x6394,	// (0x0003347c) bg_vkb2_func_pane_cp01

0xf07e,	// (0x0003c166) cel_fep_hwr_func_pane_g1_ParamLimits

0xf07e,	// (0x0003c166) cel_fep_hwr_func_pane_g1

0x6394,	// (0x0003347c) bg_vkb2_func_pane_cp02_ParamLimits

0x6394,	// (0x0003347c) bg_vkb2_func_pane_cp02

0xf07e,	// (0x0003c166) cell_hwr_side_button_pane_g1_ParamLimits

0xf07e,	// (0x0003c166) cell_hwr_side_button_pane_g1

0x754f,	// (0x00034637) status_pane_g4_ParamLimits

0x754f,	// (0x00034637) status_pane_g4

0x7567,	// (0x0003464f) status_pane_t1

0x91d3,	// (0x000362bb) form2_midp_gauge_slider_cont_pane

0x91db,	// (0x000362c3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc45f,	// (0x00039547) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc471,	// (0x00039559) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf9,	// (0x0003cbe1) form2_midp_gauge_slider_pane_t_ParamLimits

0x91ed,	// (0x000362d5) form2_midp_slider_pane_ParamLimits

0x52b0,	// (0x00032398) aid_size_cell_func_vkb2_ParamLimits

0x52b0,	// (0x00032398) aid_size_cell_func_vkb2

0xf024,	// (0x0003c10c) slider_pane_g4_ParamLimits

0xf024,	// (0x0003c10c) slider_pane_g4

0xd7b6,	// (0x0003a89e) form2_midp_gauge_slider_pane_t2_cp01

0xd7c4,	// (0x0003a8ac) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd7c4,	// (0x0003a8ac) form2_midp_gauge_slider_pane_t3_cp01

0x5c8e,	// (0x00032d76) form2_midp_slider_pane_cp01

0x61e1,	// (0x000332c9) navi_smil_pane

0xf0ae,	// (0x0003c196) navi_smil_pane_g1

0xf0b6,	// (0x0003c19e) navi_smil_pane_t1

0xf08c,	// (0x0003c174) form2_midp_slider_pane_g1

0xf095,	// (0x0003c17d) form2_midp_slider_pane_g2

0xf09d,	// (0x0003c185) form2_midp_slider_pane_g3

0xf08c,	// (0x0003c174) form2_midp_slider_pane_g4

0xd7e1,	// (0x0003a8c9) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0003cf04) form2_midp_slider_pane_g

0x5c53,	// (0x00032d3b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5c53,	// (0x00032d3b) vkb2_area_bottom_space_btn_pane_g4

0xbaae,	// (0x00038b96) lc0_navi_pane_ParamLimits

0xbaae,	// (0x00038b96) lc0_navi_pane

0xbb18,	// (0x00038c00) lc0_stat_indi_pane_ParamLimits

0xbb18,	// (0x00038c00) lc0_stat_indi_pane

0xbb2d,	// (0x00038c15) ls0_title_pane_ParamLimits

0xbb2d,	// (0x00038c15) ls0_title_pane

0x6818,	// (0x00033900) bg_popup_sub_pane_cp14_ParamLimits

0xec2d,	// (0x0003bd15) list_uniindi_pane_ParamLimits

0xec39,	// (0x0003bd21) uniindi_top_pane_ParamLimits

0xecd4,	// (0x0003bdbc) list_single_uniindi_pane_g1_ParamLimits

0xece7,	// (0x0003bdcf) list_single_uniindi_pane_t1_ParamLimits

0xd7ea,	// (0x0003a8d2) lc0_stat_clock_pane_ParamLimits

0xd7ea,	// (0x0003a8d2) lc0_stat_clock_pane

0xd7f7,	// (0x0003a8df) lc0_stat_indi_pane_g1_ParamLimits

0xd7f7,	// (0x0003a8df) lc0_stat_indi_pane_g1

0xd804,	// (0x0003a8ec) lc0_stat_indi_pane_g2_ParamLimits

0xd804,	// (0x0003a8ec) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0003cf0f) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0003cf0f) lc0_stat_indi_pane_g

0xd811,	// (0x0003a8f9) lc0_uni_indicator_pane_ParamLimits

0xd811,	// (0x0003a8f9) lc0_uni_indicator_pane

0xf0c4,	// (0x0003c1ac) ls0_title_pane_g1_ParamLimits

0xf0c4,	// (0x0003c1ac) ls0_title_pane_g1

0xd81e,	// (0x0003a906) ls0_title_pane_t1_ParamLimits

0xd81e,	// (0x0003a906) ls0_title_pane_t1

0xd84c,	// (0x0003a934) lc0_uni_indicator_pane_g1_ParamLimits

0xd84c,	// (0x0003a934) lc0_uni_indicator_pane_g1

0xf0d8,	// (0x0003c1c0) lc0_stat_clock_pane_t1

0x61e1,	// (0x000332c9) main_ai5_pane

0xf0e6,	// (0x0003c1ce) ai5_sk_pane_ParamLimits

0xf0e6,	// (0x0003c1ce) ai5_sk_pane

0xd861,	// (0x0003a949) cell_ai5_widget_pane_ParamLimits

0xd861,	// (0x0003a949) cell_ai5_widget_pane

0xf0f3,	// (0x0003c1db) aid_size_cell_widget_grid

0xf101,	// (0x0003c1e9) bg_ai5_widget_pane_ParamLimits

0xf101,	// (0x0003c1e9) bg_ai5_widget_pane

0xf155,	// (0x0003c23d) cell_ai5_widget_pane_g2

0xf165,	// (0x0003c24d) cell_ai5_widget_pane_g3

0xf17c,	// (0x0003c264) cell_ai5_widget_pane_g4

0xf188,	// (0x0003c270) cell_ai5_widget_pane_g5

0xf194,	// (0x0003c27c) cell_ai5_widget_pane_g6

0xf1a0,	// (0x0003c288) cell_ai5_widget_pane_g7

0xf1e8,	// (0x0003c2d0) cell_ai5_widget_pane_t1_ParamLimits

0xf1e8,	// (0x0003c2d0) cell_ai5_widget_pane_t1

0xf205,	// (0x0003c2ed) cell_ai5_widget_pane_t2_ParamLimits

0xf205,	// (0x0003c2ed) cell_ai5_widget_pane_t2

0xf21d,	// (0x0003c305) cell_ai5_widget_pane_t3_ParamLimits

0xf21d,	// (0x0003c305) cell_ai5_widget_pane_t3

0xf235,	// (0x0003c31d) cell_ai5_widget_pane_t4_ParamLimits

0xf235,	// (0x0003c31d) cell_ai5_widget_pane_t4

0xf252,	// (0x0003c33a) cell_ai5_widget_pane_t5_ParamLimits

0xf252,	// (0x0003c33a) cell_ai5_widget_pane_t5

0xf271,	// (0x0003c359) cell_ai5_widget_pane_t6_ParamLimits

0xf271,	// (0x0003c359) cell_ai5_widget_pane_t6

0xf283,	// (0x0003c36b) cell_ai5_widget_pane_t7_ParamLimits

0xf283,	// (0x0003c36b) cell_ai5_widget_pane_t7

0xf29c,	// (0x0003c384) cell_ai5_widget_pane_t8_ParamLimits

0xf29c,	// (0x0003c384) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0003cf29) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0003cf29) cell_ai5_widget_pane_t

0xf2f0,	// (0x0003c3d8) grid_ai5_widget_pane

0x6818,	// (0x00033900) highlight_cell_ai5_widget_pane_ParamLimits

0x6818,	// (0x00033900) highlight_cell_ai5_widget_pane

0xd8bf,	// (0x0003a9a7) ai5_sk_left_pane

0xd8c9,	// (0x0003a9b1) ai5_sk_middle_pane

0xd8d3,	// (0x0003a9bb) ai5_sk_right_pane

0xf2fc,	// (0x0003c3e4) bg_ai5_widget_pane_g1_ParamLimits

0xf2fc,	// (0x0003c3e4) bg_ai5_widget_pane_g1

0xf308,	// (0x0003c3f0) bg_ai5_widget_pane_g2_ParamLimits

0xf308,	// (0x0003c3f0) bg_ai5_widget_pane_g2

0xf314,	// (0x0003c3fc) bg_ai5_widget_pane_g3_ParamLimits

0xf314,	// (0x0003c3fc) bg_ai5_widget_pane_g3

0xf320,	// (0x0003c408) bg_ai5_widget_pane_g4_ParamLimits

0xf320,	// (0x0003c408) bg_ai5_widget_pane_g4

0xf32c,	// (0x0003c414) bg_ai5_widget_pane_g5_ParamLimits

0xf32c,	// (0x0003c414) bg_ai5_widget_pane_g5

0xf338,	// (0x0003c420) bg_ai5_widget_pane_g6_ParamLimits

0xf338,	// (0x0003c420) bg_ai5_widget_pane_g6

0xf344,	// (0x0003c42c) bg_ai5_widget_pane_g7_ParamLimits

0xf344,	// (0x0003c42c) bg_ai5_widget_pane_g7

0xf350,	// (0x0003c438) bg_ai5_widget_pane_g8_ParamLimits

0xf350,	// (0x0003c438) bg_ai5_widget_pane_g8

0xf35c,	// (0x0003c444) bg_ai5_widget_pane_g9_ParamLimits

0xf35c,	// (0x0003c444) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0003cf3e) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0003cf3e) bg_ai5_widget_pane_g

0xf38e,	// (0x0003c476) cell_shortcut_ai5_widget_pane_ParamLimits

0xf38e,	// (0x0003c476) cell_shortcut_ai5_widget_pane

0x729e,	// (0x00034386) bg_cell_shortcut_ai5_widget_pane

0xf39f,	// (0x0003c487) cell_grid_ai5_widget_pane_g1

0x729e,	// (0x00034386) highlight_cell_shortcut_ai5_widget_pane

0x7645,	// (0x0003472d) ai5_sk_left_pane_g1

0xf3a8,	// (0x0003c490) ai5_sk_left_pane_g2

0xf3b0,	// (0x0003c498) ai5_sk_left_pane_g3

0xf3b8,	// (0x0003c4a0) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0003cf51) ai5_sk_left_pane_g

0xf3c0,	// (0x0003c4a8) ai5_sk_left_pane_t1

0x763d,	// (0x00034725) ai5_sk_right_pane_g1

0xf3ce,	// (0x0003c4b6) ai5_sk_right_pane_g2

0xf3d6,	// (0x0003c4be) ai5_sk_right_pane_g3

0xf3de,	// (0x0003c4c6) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0003cf5a) ai5_sk_right_pane_g

0xf3e6,	// (0x0003c4ce) ai5_sk_right_pane_t1

0x763d,	// (0x00034725) ai5_sk_middle_pane_g1

0x7645,	// (0x0003472d) ai5_sk_middle_pane_g2

0x765d,	// (0x00034745) ai5_sk_middle_pane_g3

0xf3d6,	// (0x0003c4be) ai5_sk_middle_pane_g4

0xf3b0,	// (0x0003c498) ai5_sk_middle_pane_g5

0xf3f4,	// (0x0003c4dc) ai5_sk_middle_pane_g6

0xd8dd,	// (0x0003a9c5) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0003cf63) ai5_sk_middle_pane_g

0xb9a0,	// (0x00038a88) aid_touch_area_size_lc0_ParamLimits

0xb9a0,	// (0x00038a88) aid_touch_area_size_lc0

0x4fc7,	// (0x000320af) cell_hwr_candidate_pane_t1_ParamLimits

0x7473,	// (0x0003455b) aid_touch_navi_pane

0xbc1a,	// (0x00038d02) status_dt_navi_pane_ParamLimits

0xbc1a,	// (0x00038d02) status_dt_navi_pane

0xbc32,	// (0x00038d1a) status_dt_sta_pane_ParamLimits

0xbc32,	// (0x00038d1a) status_dt_sta_pane

0xd8e5,	// (0x0003a9cd) dt_sta_controll_pane

0xd8f2,	// (0x0003a9da) dt_sta_indi_pane

0xd8ff,	// (0x0003a9e7) dt_sta_title_pane

0x6394,	// (0x0003347c) bg_dt_sta_indi_pane_ParamLimits

0x6394,	// (0x0003347c) bg_dt_sta_indi_pane

0xf3fc,	// (0x0003c4e4) dt_sta_battery_pane

0xf404,	// (0x0003c4ec) dt_sta_indi_pane_g1

0xf40d,	// (0x0003c4f5) dt_sta_indi_pane_g2

0xf416,	// (0x0003c4fe) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0003cf72) dt_sta_indi_pane_g

0xf41f,	// (0x0003c507) dt_sta_signal_pane

0x6818,	// (0x00033900) bg_dt_sta_title_pane_ParamLimits

0x6818,	// (0x00033900) bg_dt_sta_title_pane

0xf428,	// (0x0003c510) dt_sta_title_pane_g1

0xf430,	// (0x0003c518) dt_sta_title_pane_t1_ParamLimits

0xf430,	// (0x0003c518) dt_sta_title_pane_t1

0x61e1,	// (0x000332c9) bg_dt_sta_control_pane

0xf445,	// (0x0003c52d) dt_sta_controll_pane_g1

0xf44e,	// (0x0003c536) bg_dt_sta_title_pane_g1

0xf457,	// (0x0003c53f) bg_dt_sta_title_pane_g2

0xf460,	// (0x0003c548) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0003cf79) bg_dt_sta_title_pane_g

0x9342,	// (0x0003642a) bg_dt_sta_indi_pane_g1

0xf469,	// (0x0003c551) dt_sta_signal_pane_g1

0xf471,	// (0x0003c559) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0003cf80) dt_sta_signal_pane_g

0xf479,	// (0x0003c561) dt_sta_battery_pane_g1

0xf482,	// (0x0003c56a) dt_sta_battery_pane_t1

0x9342,	// (0x0003642a) bg_dt_sta_control_pane_g1

0x6dd1,	// (0x00033eb9) fep_china_uni_eep_pane

0x6dd9,	// (0x00033ec1) fep_china_uni_entry_pane_ParamLimits

0x6de9,	// (0x00033ed1) popup_fep_china_uni_window_g1_ParamLimits

0x6df9,	// (0x00033ee1) popup_fep_china_uni_window_g2_ParamLimits

0x6df9,	// (0x00033ee1) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0003c80a) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0003c80a) popup_fep_china_uni_window_g

0xf491,	// (0x0003c579) fep_china_uni_eep_pane_g1

0xf499,	// (0x0003c581) fep_china_uni_eep_pane_t1

0xf0a5,	// (0x0003c18d) aid_touch_area_size_smil_player

0x7522,	// (0x0003460a) lc0_clock_pane

0x755b,	// (0x00034643) status_pane_g5_ParamLimits

0x755b,	// (0x00034643) status_pane_g5

0xb527,	// (0x0003860f) popup_keymap_window

0x753b,	// (0x00034623) status_icon_pane

0xf165,	// (0x0003c24d) cell_ai5_widget_pane_g3_ParamLimits

0xf17c,	// (0x0003c264) cell_ai5_widget_pane_g4_ParamLimits

0xf188,	// (0x0003c270) cell_ai5_widget_pane_g5_ParamLimits

0xf1ac,	// (0x0003c294) cell_ai5_widget_pane_g8_ParamLimits

0xf1ac,	// (0x0003c294) cell_ai5_widget_pane_g8

0xf1c0,	// (0x0003c2a8) cell_ai5_widget_pane_g9_ParamLimits

0xf1c0,	// (0x0003c2a8) cell_ai5_widget_pane_g9

0xf1d4,	// (0x0003c2bc) cell_ai5_widget_pane_g10_ParamLimits

0xf1d4,	// (0x0003c2bc) cell_ai5_widget_pane_g10

0xf4a8,	// (0x0003c590) status_icon_pane_g1

0x61e1,	// (0x000332c9) bg_popup_sub_pane_cp13

0xf4b0,	// (0x0003c598) popup_keymap_window_t1

0x20c0,	// (0x0002f1a8) control_pane_g6_ParamLimits

0x20c0,	// (0x0002f1a8) control_pane_g6

0x20b3,	// (0x0002f19b) control_pane_g7_ParamLimits

0x20b3,	// (0x0002f19b) control_pane_g7

0x20a6,	// (0x0002f18e) control_pane_g8_ParamLimits

0x20a6,	// (0x0002f18e) control_pane_g8

0xd8e5,	// (0x0003a9cd) dt_sta_controll_pane_ParamLimits

0xd8f2,	// (0x0003a9da) dt_sta_indi_pane_ParamLimits

0xd8ff,	// (0x0003a9e7) dt_sta_title_pane_ParamLimits

0x6757,	// (0x0003383f) aid_size_touch_scroll_bar_cale

0x3c02,	// (0x00030cea) popup_discreet_window_ParamLimits

0x3c02,	// (0x00030cea) popup_discreet_window

0xb0c3,	// (0x000381ab) popup_sk_window

0x7b96,	// (0x00034c7e) bg_popup_sub_pane_cp28_ParamLimits

0x7b96,	// (0x00034c7e) bg_popup_sub_pane_cp28

0xf4be,	// (0x0003c5a6) popup_discreet_window_g1_ParamLimits

0xf4be,	// (0x0003c5a6) popup_discreet_window_g1

0xf4de,	// (0x0003c5c6) popup_discreet_window_t1_ParamLimits

0xf4de,	// (0x0003c5c6) popup_discreet_window_t1

0xf4fc,	// (0x0003c5e4) popup_discreet_window_t2_ParamLimits

0xf4fc,	// (0x0003c5e4) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0003cf85) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0003cf85) popup_discreet_window_t

0x5dd5,	// (0x00032ebd) popup_sk_window_g1

0x5ddf,	// (0x00032ec7) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0003cf8c) popup_sk_window_g

0x5de7,	// (0x00032ecf) popup_sk_window_t1

0x5df5,	// (0x00032edd) popup_sk_window_t1_copy1

0xf155,	// (0x0003c23d) cell_ai5_widget_pane_g2_ParamLimits

0xf2ae,	// (0x0003c396) cell_ai5_widget_pane_t9_ParamLimits

0xf2ae,	// (0x0003c396) cell_ai5_widget_pane_t9

0x61e1,	// (0x000332c9) main_fep_fshwr2_pane

0xd911,	// (0x0003a9f9) aid_fshwr2_btn_pane

0xd922,	// (0x0003aa0a) aid_fshwr2_syb_pane

0xd933,	// (0x0003aa1b) aid_fshwr2_txt_pane

0xd93f,	// (0x0003aa27) fshwr2_func_candi_pane

0xd959,	// (0x0003aa41) fshwr2_hwr_syb_pane

0xd96e,	// (0x0003aa56) fshwr2_icf_pane

0x61e1,	// (0x000332c9) fshwr2_icf_bg_pane

0xd994,	// (0x0003aa7c) fshwr2_icf_pane_t1_ParamLimits

0xd994,	// (0x0003aa7c) fshwr2_icf_pane_t1

0x6d4e,	// (0x00033e36) fshwr2_func_candi_pane_g1

0xd9ab,	// (0x0003aa93) fshwr2_func_candi_row_pane_ParamLimits

0xd9ab,	// (0x0003aa93) fshwr2_func_candi_row_pane

0xd9ce,	// (0x0003aab6) cell_fshwr2_syb_pane_ParamLimits

0xd9ce,	// (0x0003aab6) cell_fshwr2_syb_pane

0xdd04,	// (0x0003adec) fshwr2_hwr_syb_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) fshwr2_hwr_syb_pane_g1

0x61e1,	// (0x000332c9) bg_popup_call_pane_cp01

0xd9e2,	// (0x0003aaca) fshwr2_func_candi_cell_pane_ParamLimits

0xd9e2,	// (0x0003aaca) fshwr2_func_candi_cell_pane

0xda21,	// (0x0003ab09) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xda21,	// (0x0003ab09) fshwr2_func_candi_cell_bg_pane

0xda2d,	// (0x0003ab15) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xda2d,	// (0x0003ab15) fshwr2_func_candi_cell_pane_g1

0xda64,	// (0x0003ab4c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xda64,	// (0x0003ab4c) fshwr2_func_candi_cell_pane_t1

0x61e1,	// (0x000332c9) bg_button_pane_cp08

0x729e,	// (0x00034386) cell_fshwr2_syb_bg_pane

0xda7f,	// (0x0003ab67) cell_fshwr2_syb_bg_pane_g1

0xda87,	// (0x0003ab6f) cell_fshwr2_syb_bg_pane_t1

0x6818,	// (0x00033900) main_tmo_pane

0xbf40,	// (0x00039028) uni_indicator_pane_g1_ParamLimits

0xbf56,	// (0x0003903e) uni_indicator_pane_g2_ParamLimits

0xbf6c,	// (0x00039054) uni_indicator_pane_g3_ParamLimits

0x85ba,	// (0x000356a2) uni_indicator_pane_g4_ParamLimits

0x85ba,	// (0x000356a2) uni_indicator_pane_g4

0x85ce,	// (0x000356b6) uni_indicator_pane_g5_ParamLimits

0x85ce,	// (0x000356b6) uni_indicator_pane_g5

0x85ce,	// (0x000356b6) uni_indicator_pane_g6_ParamLimits

0x85ce,	// (0x000356b6) uni_indicator_pane_g6

0xf921,	// (0x0003ca09) uni_indicator_pane_g_ParamLimits

0xc9ef,	// (0x00039ad7) popup_tmo_note_window_ParamLimits

0xc9ef,	// (0x00039ad7) popup_tmo_note_window

0x6818,	// (0x00033900) fshwr2_bg_pane

0xda55,	// (0x0003ab3d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xda55,	// (0x0003ab3d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0003cf91) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0003cf91) fshwr2_func_candi_cell_pane_g

0x9342,	// (0x0003642a) bg_popup_window_pane_cp01

0x5f2e,	// (0x00033016) bg_popup_window_pane_g1_cp01

0x0c1a,	// (0x0002dd02) bg_popup_window_pane_cp22_ParamLimits

0x0c1a,	// (0x0002dd02) bg_popup_window_pane_cp22

0x0c28,	// (0x0002dd10) listscroll_tmo_link_pane_ParamLimits

0x0c28,	// (0x0002dd10) listscroll_tmo_link_pane

0x0c68,	// (0x0002dd50) popup_tmo_note_window_g1_ParamLimits

0x0c68,	// (0x0002dd50) popup_tmo_note_window_g1

0x0c75,	// (0x0002dd5d) tmo_note_info_pane_ParamLimits

0x0c75,	// (0x0002dd5d) tmo_note_info_pane

0xda96,	// (0x0003ab7e) list_tmo_note_info_pane_g1_ParamLimits

0xda96,	// (0x0003ab7e) list_tmo_note_info_pane_g1

0x0c8f,	// (0x0002dd77) list_tmo_note_info_pane_g2_ParamLimits

0x0c8f,	// (0x0002dd77) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0003cf96) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0003cf96) list_tmo_note_info_pane_g

0x0cab,	// (0x0002dd93) list_tmo_note_info_text_pane_ParamLimits

0x0cab,	// (0x0002dd93) list_tmo_note_info_text_pane

0x0ced,	// (0x0002ddd5) list_tmo_link_pane

0x0cfa,	// (0x0002dde2) scroll_pane_cp20

0x0d07,	// (0x0002ddef) list_single_tmo_link_pane_ParamLimits

0x0d07,	// (0x0002ddef) list_single_tmo_link_pane

0x0d17,	// (0x0002ddff) list_single_tmo_link_pane_t1

0x0d25,	// (0x0002de0d) list_tmo_note_info_text_pane_t1_ParamLimits

0x0d25,	// (0x0002de0d) list_tmo_note_info_text_pane_t1

0x1d95,	// (0x0002ee7d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1d95,	// (0x0002ee7d) aid_size_touch_scroll_bar_cp01

0xaca0,	// (0x00037d88) aid_size_touch_slider_marker

0xb0b7,	// (0x0003819f) popup_settings_window_ParamLimits

0xb0b7,	// (0x0003819f) popup_settings_window

0x31ea,	// (0x000302d2) popup_candi_list_indi_window

0x7473,	// (0x0003455b) aid_touch_navi_pane_ParamLimits

0x5209,	// (0x000322f1) rs_clock_indi_pane

0x5212,	// (0x000322fa) sctrl_sk_bottom_pane_ParamLimits

0x5223,	// (0x0003230b) sctrl_sk_top_pane_ParamLimits

0x530a,	// (0x000323f2) popup_fep_tooltip_window

0xf0f3,	// (0x0003c1db) aid_size_cell_widget_grid_ParamLimits

0xf140,	// (0x0003c228) cell_ai5_widget_pane_g1_ParamLimits

0xf140,	// (0x0003c228) cell_ai5_widget_pane_g1

0xf194,	// (0x0003c27c) cell_ai5_widget_pane_g6_ParamLimits

0xf1a0,	// (0x0003c288) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0003cf14) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0003cf14) cell_ai5_widget_pane_g

0xf2d2,	// (0x0003c3ba) cell_ai5_widget_pane_t10_ParamLimits

0xf2d2,	// (0x0003c3ba) cell_ai5_widget_pane_t10

0xf2f0,	// (0x0003c3d8) grid_ai5_widget_pane_ParamLimits

0xf368,	// (0x0003c450) cell_contacts_ai5_widget_pane_ParamLimits

0xf368,	// (0x0003c450) cell_contacts_ai5_widget_pane

0xf511,	// (0x0003c5f9) popup_discreet_window_t3_ParamLimits

0xf511,	// (0x0003c5f9) popup_discreet_window_t3

0xd982,	// (0x0003aa6a) popup_fshwr2_char_preview_window_ParamLimits

0xd982,	// (0x0003aa6a) popup_fshwr2_char_preview_window

0xdaad,	// (0x0003ab95) tmo_note_info_pane_t1

0xdac2,	// (0x0003abaa) tmo_note_info_pane_t2

0xdad7,	// (0x0003abbf) tmo_note_info_pane_t3

0x0cc9,	// (0x0002ddb1) tmo_note_info_pane_t4

0x0cdb,	// (0x0002ddc3) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0003cf9b) tmo_note_info_pane_t

0x0ced,	// (0x0002ddd5) list_tmo_link_pane_ParamLimits

0x0cfa,	// (0x0002dde2) scroll_pane_cp20_ParamLimits

0x61e1,	// (0x000332c9) bg_popup_fep_char_preview_window_cp01

0x0d3e,	// (0x0002de26) popup_fshwr2_char_preview_window_t1

0x0d4c,	// (0x0002de34) popup_candi_list_indi_window_g1

0x0d55,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane

0x0d61,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1

0x0d76,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2

0x0d82,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0003cfa6) cell_contacts_ai5_widget_pane_g

0x0d8e,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1

0x6818,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0e03,	// (0x0002deeb) settings_container_pane

0x729e,	// (0x00034386) listscroll_set_pane_copy1

0x8d74,	// (0x00035e5c) scroll_pane_cp121_copy1

0x7958,	// (0x00034a40) set_content_pane_copy1

0x0e0f,	// (0x0002def7) aid_height_set_list_copy1_ParamLimits

0x0e0f,	// (0x0002def7) aid_height_set_list_copy1

0x875d,	// (0x00035845) aid_size_parent_copy1_ParamLimits

0x875d,	// (0x00035845) aid_size_parent_copy1

0x0e1b,	// (0x0002df03) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0e1b,	// (0x0002df03) button_value_adjust_pane_cp6_copy1

0x7451,	// (0x00034539) list_highlight_pane_cp2_copy1_ParamLimits

0x7451,	// (0x00034539) list_highlight_pane_cp2_copy1

0x0e2f,	// (0x0002df17) list_set_pane_copy1_ParamLimits

0x0e2f,	// (0x0002df17) list_set_pane_copy1

0x0da0,	// (0x0002de88) main_pane_set_t1_copy1_ParamLimits

0x0da0,	// (0x0002de88) main_pane_set_t1_copy1

0x0dda,	// (0x0002dec2) main_pane_set_t2_copy1_ParamLimits

0x0dda,	// (0x0002dec2) main_pane_set_t2_copy1

0x1101,	// (0x0002e1e9) main_pane_set_t3_copy1

0x110f,	// (0x0002e1f7) main_pane_set_t4_copy1

0x0df7,	// (0x0002dedf) set_content_pane_g1_copy1_ParamLimits

0x0df7,	// (0x0002dedf) set_content_pane_g1_copy1

0x111d,	// (0x0002e205) setting_code_pane_copy1

0x1125,	// (0x0002e20d) setting_slider_graphic_pane_copy1

0x1125,	// (0x0002e20d) setting_slider_pane_copy1

0x1125,	// (0x0002e20d) setting_text_pane_copy1

0x1125,	// (0x0002e20d) setting_volume_pane_copy1

0x111d,	// (0x0002e205) settings_code_pane_cp2_copy1

0x112d,	// (0x0002e215) settings_code_pane_cp_copy1_ParamLimits

0x112d,	// (0x0002e215) settings_code_pane_cp_copy1

0x5f8d,	// (0x00033075) volume_set_pane_copy1

0x1141,	// (0x0002e229) volume_set_pane_g10_copy1

0x1149,	// (0x0002e231) volume_set_pane_g1_copy1

0x1151,	// (0x0002e239) volume_set_pane_g2_copy1

0x1159,	// (0x0002e241) volume_set_pane_g3_copy1

0x1161,	// (0x0002e249) volume_set_pane_g4_copy1

0x1169,	// (0x0002e251) volume_set_pane_g5_copy1

0x1171,	// (0x0002e259) volume_set_pane_g6_copy1

0x1179,	// (0x0002e261) volume_set_pane_g7_copy1

0x1181,	// (0x0002e269) volume_set_pane_g8_copy1

0x1189,	// (0x0002e271) volume_set_pane_g9_copy1

0x6243,	// (0x0003332b) bg_set_opt_pane_cp_copy1_ParamLimits

0x6243,	// (0x0003332b) bg_set_opt_pane_cp_copy1

0x5f95,	// (0x0003307d) setting_slider_pane_t1_copy1_ParamLimits

0x5f95,	// (0x0003307d) setting_slider_pane_t1_copy1

0x5fb3,	// (0x0003309b) setting_slider_pane_t2_copy1_ParamLimits

0x5fb3,	// (0x0003309b) setting_slider_pane_t2_copy1

0x5fcc,	// (0x000330b4) setting_slider_pane_t3_copy1_ParamLimits

0x5fcc,	// (0x000330b4) setting_slider_pane_t3_copy1

0x5fe3,	// (0x000330cb) slider_set_pane_copy1_ParamLimits

0x5fe3,	// (0x000330cb) slider_set_pane_copy1

0x6870,	// (0x00033958) set_opt_bg_pane_g1_copy2

0x6878,	// (0x00033960) set_opt_bg_pane_g2_copy2

0x1191,	// (0x0002e279) set_opt_bg_pane_g3_copy2

0x6888,	// (0x00033970) set_opt_bg_pane_g4_copy2

0x6890,	// (0x00033978) set_opt_bg_pane_g5_copy2

0x6898,	// (0x00033980) set_opt_bg_pane_g6_copy2

0x1199,	// (0x0002e281) set_opt_bg_pane_g7_copy2

0x11a1,	// (0x0002e289) set_opt_bg_pane_g8_copy2

0x11a9,	// (0x0002e291) set_opt_bg_pane_g9_copy2

0x5ff9,	// (0x000330e1) aid_size_touch_slider_mark_copy1_ParamLimits

0x5ff9,	// (0x000330e1) aid_size_touch_slider_mark_copy1

0x11b1,	// (0x0002e299) slider_set_pane_g1_copy1

0x600d,	// (0x000330f5) slider_set_pane_g2_copy1

0x4ba1,	// (0x00031c89) slider_set_pane_g3_copy1_ParamLimits

0x4ba1,	// (0x00031c89) slider_set_pane_g3_copy1

0x4bb5,	// (0x00031c9d) slider_set_pane_g4_copy1_ParamLimits

0x4bb5,	// (0x00031c9d) slider_set_pane_g4_copy1

0x4bcd,	// (0x00031cb5) slider_set_pane_g5_copy1_ParamLimits

0x4bcd,	// (0x00031cb5) slider_set_pane_g5_copy1

0x4ba1,	// (0x00031c89) slider_set_pane_g6_copy1_ParamLimits

0x4ba1,	// (0x00031c89) slider_set_pane_g6_copy1

0x6015,	// (0x000330fd) slider_set_pane_g7_copy1_ParamLimits

0x6015,	// (0x000330fd) slider_set_pane_g7_copy1

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp2_copy1

0x11ba,	// (0x0002e2a2) setting_slider_graphic_pane_g1_copy1

0x11d2,	// (0x0002e2ba) setting_slider_graphic_pane_t1_copy1

0x11c3,	// (0x0002e2ab) setting_slider_graphic_pane_t2_copy1

0x11e1,	// (0x0002e2c9) slider_set_pane_cp_copy1

0x11f1,	// (0x0002e2d9) input_focus_pane_cp1_copy1

0x11fa,	// (0x0002e2e2) list_set_text_pane_copy1

0x1202,	// (0x0002e2ea) setting_text_pane_g1_copy1

0x398d,	// (0x00030a75) set_text_pane_t1_copy1

0x11f1,	// (0x0002e2d9) input_focus_pane_cp2_copy1

0x1202,	// (0x0002e2ea) setting_code_pane_g1_copy1

0x120b,	// (0x0002e2f3) setting_code_pane_t1_copy1

0x6fac,	// (0x00034094) list_set_graphic_pane_copy1

0x61f5,	// (0x000332dd) bg_set_opt_pane_cp4_copy1

0x6fbe,	// (0x000340a6) list_set_graphic_pane_g1_copy1_ParamLimits

0x6fbe,	// (0x000340a6) list_set_graphic_pane_g1_copy1

0x1219,	// (0x0002e301) list_set_graphic_pane_g2_copy1

0x6fd6,	// (0x000340be) list_set_graphic_pane_t1_copy1_ParamLimits

0x6fd6,	// (0x000340be) list_set_graphic_pane_t1_copy1

0x9342,	// (0x0003642a) rs_clock_indi_pane_g1

0x1221,	// (0x0002e309) rs_clock_indi_pane_t1

0x122f,	// (0x0002e317) rs_indi_pane

0x1237,	// (0x0002e31f) rs_indi_pane_g1

0x1240,	// (0x0002e328) rs_indi_pane_g2

0x1249,	// (0x0002e331) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0003cfad) rs_indi_pane_g

0x729e,	// (0x00034386) bg_popup_preview_window_pane_cp03

0x1252,	// (0x0002e33a) popup_fep_tooltip_window_t1

0xe440,	// (0x0003b528) popup_note2_window_g2_ParamLimits

0xe440,	// (0x0003b528) popup_note2_window_g2

0x0001,

0xfc65,	// (0x0003cd4d) popup_note2_window_g_ParamLimits

0xfc65,	// (0x0003cd4d) popup_note2_window_g

0xe8bb,	// (0x0003b9a3) bg_popup_sub_pane_cp11_ParamLimits

0xe8c8,	// (0x0003b9b0) cell_ai3_links_pane_g1_ParamLimits

0xe8df,	// (0x0003b9c7) cell_ai3_links_pane_t1

0x398d,	// (0x00030a75) set_text_pane_t1_copy1_ParamLimits

0x71b1,	// (0x00034299) cell_graphic_popup_pane_cp2_ParamLimits

0x71b1,	// (0x00034299) cell_graphic_popup_pane_cp2

0x1260,	// (0x0002e348) cell_graphic_popup_pane_g1_cp2

0x6606,	// (0x000336ee) cell_graphic_popup_pane_g2_cp2

0x1268,	// (0x0002e350) cell_graphic_popup_pane_g3_cp2

0x1270,	// (0x0002e358) cell_graphic_popup_pane_t2_cp2

0x6617,	// (0x000336ff) grid_highlight_pane_cp3_cp2

0x6b2d,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6818,	// (0x00033900) main_tmo_pane_ParamLimits

0xc9e7,	// (0x00039acf) popup_tmo_big_image_note_window

0xf12f,	// (0x0003c217) cell_ai5_widget_list_pane

0xf137,	// (0x0003c21f) cell_ai5_widget_lrg_icon_pane

0xdaad,	// (0x0003ab95) tmo_note_info_pane_t1_ParamLimits

0xdac2,	// (0x0003abaa) tmo_note_info_pane_t2_ParamLimits

0xdad7,	// (0x0003abbf) tmo_note_info_pane_t3_ParamLimits

0x0cc9,	// (0x0002ddb1) tmo_note_info_pane_t4_ParamLimits

0x0cdb,	// (0x0002ddc3) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0003cf9b) tmo_note_info_pane_t_ParamLimits

0x0e03,	// (0x0002deeb) settings_container_pane_ParamLimits

0x11e9,	// (0x0002e2d1) indicator_popup_pane_cp5

0x11e9,	// (0x0002e2d1) indicator_popup_pane_cp6

0x6fac,	// (0x00034094) list_set_graphic_pane_copy1_ParamLimits

0x61e1,	// (0x000332c9) bg_popup_window_pane_cp23

0x127e,	// (0x0002e366) popup_tmo_big_image_note_window_g1

0x1287,	// (0x0002e36f) popup_tmo_big_image_note_window_t1

0x1295,	// (0x0002e37d) popup_tmo_big_image_note_window_t2

0x12a3,	// (0x0002e38b) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0003cfb4) popup_tmo_big_image_note_window_t

0x9342,	// (0x0003642a) cell_ai5_widget_lrg_icon_pane_g1

0x12b1,	// (0x0002e399) cell_ai5_widget_lrg_icon_pane_t1

0x12bf,	// (0x0002e3a7) cell_ai5_widget_list_row_pane_ParamLimits

0x12bf,	// (0x0002e3a7) cell_ai5_widget_list_row_pane

0x12d6,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x12d6,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1

0x12e3,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x12e3,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1

0x1311,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1311,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0003cfbb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0003cfbb) cell_ai5_widget_list_row_pane_t

0x61e1,	// (0x000332c9) main_fep_vtchi_ss_pane

0x1355,	// (0x0002e43d) popup_fep_char_pre_window

0x135d,	// (0x0002e445) popup_fep_ituss_window

0xdaec,	// (0x0003abd4) popup_fep_vkbss_window

0xdaf9,	// (0x0003abe1) grid_vkbss_keypad_pane_ParamLimits

0xdaf9,	// (0x0003abe1) grid_vkbss_keypad_pane

0x1390,	// (0x0002e478) ituss_keypad_pane

0x6053,	// (0x0003313b) aid_vkbss_key_offset_ParamLimits

0x6053,	// (0x0003313b) aid_vkbss_key_offset

0xdb09,	// (0x0003abf1) cell_vkbss_key_pane_ParamLimits

0xdb09,	// (0x0003abf1) cell_vkbss_key_pane

0x7ddb,	// (0x00034ec3) bg_cell_vkbss_key_g1_ParamLimits

0x7ddb,	// (0x00034ec3) bg_cell_vkbss_key_g1

0xdb1f,	// (0x0003ac07) cell_vkbss_key_3p_pane_ParamLimits

0xdb1f,	// (0x0003ac07) cell_vkbss_key_3p_pane

0xdb39,	// (0x0003ac21) cell_vkbss_key_g1_ParamLimits

0xdb39,	// (0x0003ac21) cell_vkbss_key_g1

0xdb53,	// (0x0003ac3b) cell_vkbss_key_t1_ParamLimits

0xdb53,	// (0x0003ac3b) cell_vkbss_key_t1

0x60c8,	// (0x000331b0) cell_ituss_key_pane_ParamLimits

0x60c8,	// (0x000331b0) cell_ituss_key_pane

0x139f,	// (0x0002e487) bg_cell_ituss_key_g1_ParamLimits

0x139f,	// (0x0002e487) bg_cell_ituss_key_g1

0x13ab,	// (0x0002e493) cell_ituss_key_pane_g1_ParamLimits

0x13ab,	// (0x0002e493) cell_ituss_key_pane_g1

0x60d9,	// (0x000331c1) cell_ituss_key_pane_g2_ParamLimits

0x60d9,	// (0x000331c1) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0003cfc2) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0003cfc2) cell_ituss_key_pane_g

0x6101,	// (0x000331e9) cell_ituss_key_t1_ParamLimits

0x6101,	// (0x000331e9) cell_ituss_key_t1

0x613b,	// (0x00033223) cell_ituss_key_t2_ParamLimits

0x613b,	// (0x00033223) cell_ituss_key_t2

0x616c,	// (0x00033254) cell_ituss_key_t3_ParamLimits

0x616c,	// (0x00033254) cell_ituss_key_t3

0x613b,	// (0x00033223) cell_ituss_key_t4_ParamLimits

0x613b,	// (0x00033223) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0003cfc9) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0003cfc9) cell_ituss_key_t

0x13e1,	// (0x0002e4c9) cell_vkbss_key_3p_pane_g1

0x13d9,	// (0x0002e4c1) cell_vkbss_key_3p_pane_g2

0x13d1,	// (0x0002e4b9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0003cfd4) cell_vkbss_key_3p_pane_g

0x61e1,	// (0x000332c9) bg_popup_fep_char_preview_window_cp02

0x61af,	// (0x00033297) popup_fep_char_pre_window_t1

0xd8b5,	// (0x0003a99d) main_ai5_sk_pane

0x0d55,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0d61,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0d76,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0d82,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0003cfa6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0d8e,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6818,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdb7e,	// (0x0003ac66) main_ai5_sk_pane_g1

0x79e0,	// (0x00034ac8) popup_query_code_window_g1

0x136f,	// (0x0002e457) popup_fep_vkb_icf_pane

0x137a,	// (0x0002e462) popup_fep_vtchi_icf_pane

0x13e9,	// (0x0002e4d1) bg_icf_pane

0x13f5,	// (0x0002e4dd) list_vkb_icf_pane

0x1404,	// (0x0002e4ec) bg_icf_pane_cp01

0x1417,	// (0x0002e4ff) vtchi_icf_list_pane

0x1427,	// (0x0002e50f) list_vkb_icf_pane_t1_ParamLimits

0x1427,	// (0x0002e50f) list_vkb_icf_pane_t1

0x143c,	// (0x0002e524) vtchi_icf_list_pane_t1_ParamLimits

0x143c,	// (0x0002e524) vtchi_icf_list_pane_t1

0x135d,	// (0x0002e445) popup_fep_ituss_window_ParamLimits

0x137a,	// (0x0002e462) popup_fep_vtchi_icf_pane_ParamLimits

0x1390,	// (0x0002e478) ituss_keypad_pane_ParamLimits

0x6049,	// (0x00033131) ituss_sks_pane

0x13e9,	// (0x0002e4d1) bg_icf_pane_ParamLimits

0x1339,	// (0x0002e421) icf_edit_indi_pane_ParamLimits

0x1339,	// (0x0002e421) icf_edit_indi_pane

0x13f5,	// (0x0002e4dd) list_vkb_icf_pane_ParamLimits

0x1404,	// (0x0002e4ec) bg_icf_pane_cp01_ParamLimits

0x1348,	// (0x0002e430) icf_edit_indi_pane_cp01_ParamLimits

0x1348,	// (0x0002e430) icf_edit_indi_pane_cp01

0x141f,	// (0x0002e507) vtchi_query_pane

0xdd04,	// (0x0003adec) icf_edit_indi_pane_g1_ParamLimits

0xdd04,	// (0x0003adec) icf_edit_indi_pane_g1

0x14aa,	// (0x0002e592) icf_edit_indi_pane_g2_ParamLimits

0x14aa,	// (0x0002e592) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0003cfec) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0003cfec) icf_edit_indi_pane_g

0x14b9,	// (0x0002e5a1) icf_edit_indi_pane_t1

0x1453,	// (0x0002e53b) bg_input_focus_pane_cp042

0x674e,	// (0x00033836) vtchi_button_pane

0x145c,	// (0x0002e544) vtchi_query_pane_t1

0x146a,	// (0x0002e552) vtchi_query_pane_t2

0x1478,	// (0x0002e560) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0003cfdb) vtchi_query_pane_t

0x61e1,	// (0x000332c9) bg_button_pane_cp13

0x1486,	// (0x0002e56e) vtchi_button_pane_g1

0x61c7,	// (0x000332af) ituss_sks_pane_g1

0x61d1,	// (0x000332b9) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0003cfe2) ituss_sks_pane_g

0x149c,	// (0x0002e584) ituss_sks_pane_t1

0x148e,	// (0x0002e576) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0003cfe7) ituss_sks_pane_t

0x906e,	// (0x00036156) indicator_nsta_pane_cp_g1

0x9076,	// (0x0003615e) indicator_nsta_pane_cp_g2

0x907e,	// (0x00036166) indicator_nsta_pane_cp_g3

0x906e,	// (0x00036156) indicator_nsta_pane_cp_g4

0x9076,	// (0x0003615e) indicator_nsta_pane_cp_g5

0x907e,	// (0x00036166) indicator_nsta_pane_cp_g6

0x0005,

0xfaaf,	// (0x0003cb97) indicator_nsta_pane_cp_g

0xd6bc,	// (0x0003a7a4) cell_graphic2_pane_t2_ParamLimits

0xd6bc,	// (0x0003a7a4) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0003ce9d) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0003ce9d) cell_graphic2_pane_t

0xd6f3,	// (0x0003a7db) cell_graphic2_control_pane_t1

0x1f29,	// (0x0002f011) signal_pane_g3_ParamLimits

0x1f29,	// (0x0002f011) signal_pane_g3

0x1f3d,	// (0x0002f025) signal_pane_g4_ParamLimits

0x1f3d,	// (0x0002f025) signal_pane_g4

0x1323,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x1323,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3

0x13bf,	// (0x0002e4a7) cell_ituss_key_pane_t1_ParamLimits

0x13bf,	// (0x0002e4a7) cell_ituss_key_pane_t1

0x7721,	// (0x00034809) form_field_data_wide_pane_vc_t2_ParamLimits

0x7721,	// (0x00034809) form_field_data_wide_pane_vc_t2

0x7733,	// (0x0003481b) form_field_data_wide_pane_vc_t3_ParamLimits

0x7733,	// (0x0003481b) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003c8f1) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003c8f1) form_field_data_wide_pane_vc_t

0x8db2,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x8db2,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3

0x8e80,	// (0x00035f68) form_field_popup_wide_pane_vc_t2_ParamLimits

0x8e80,	// (0x00035f68) form_field_popup_wide_pane_vc_t2

0x8e95,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x8e95,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9e,	// (0x0003cb86) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9e,	// (0x0003cb86) form_field_popup_wide_pane_vc_t

0xd911,	// (0x0003a9f9) aid_fshwr2_btn_pane_ParamLimits

0xd922,	// (0x0003aa0a) aid_fshwr2_syb_pane_ParamLimits

0xd933,	// (0x0003aa1b) aid_fshwr2_txt_pane_ParamLimits

0x6818,	// (0x00033900) fshwr2_bg_pane_ParamLimits

0xd93f,	// (0x0003aa27) fshwr2_func_candi_pane_ParamLimits

0xd959,	// (0x0003aa41) fshwr2_hwr_syb_pane_ParamLimits

0xd96e,	// (0x0003aa56) fshwr2_icf_pane_ParamLimits

0x4d3c,	// (0x00031e24) list_double_graphic_pane_vc_g4_ParamLimits

0x4d3c,	// (0x00031e24) list_double_graphic_pane_vc_g4

0x60f5,	// (0x000331dd) cell_ituss_key_pane_g3_ParamLimits

0x60f5,	// (0x000331dd) cell_ituss_key_pane_g3

0x619d,	// (0x00033285) cell_ituss_key_t5_ParamLimits

0x619d,	// (0x00033285) cell_ituss_key_t5

0xdaec,	// (0x0003abd4) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003233a };

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
0x41a1,	// (0x000364db) Screen

0x41ab,	// (0x000364e5) application_window_ParamLimits

0x41ab,	// (0x000364e5) application_window

0x0f99,	// (0x000332d3) screen_g1

0xad81,	// (0x0003d0bb) area_bottom_pane_ParamLimits

0xad81,	// (0x0003d0bb) area_bottom_pane

0xae41,	// (0x0003d17b) area_top_pane_ParamLimits

0xae41,	// (0x0003d17b) area_top_pane

0xaed5,	// (0x0003d20f) main_pane_ParamLimits

0xaed5,	// (0x0003d20f) main_pane

0x0fa3,	// (0x000332dd) misc_graphics

0x479a,	// (0x00036ad4) battery_pane_ParamLimits

0x479a,	// (0x00036ad4) battery_pane

0x2af9,	// (0x00034e33) bg_status_flat_pane_g8

0x2b01,	// (0x00034e3b) bg_status_flat_pane_g9

0x228c,	// (0x000345c6) context_pane_ParamLimits

0x228c,	// (0x000345c6) context_pane

0x48cc,	// (0x00036c06) navi_pane_ParamLimits

0x48cc,	// (0x00036c06) navi_pane

0x4939,	// (0x00036c73) signal_pane_ParamLimits

0x4939,	// (0x00036c73) signal_pane

0x0008,

0xf879,	// (0x00041bb3) bg_status_flat_pane_g

0x499a,	// (0x00036cd4) status_pane_g1_ParamLimits

0x499a,	// (0x00036cd4) status_pane_g1

0x2b89,	// (0x00034ec3) status_pane_g2_ParamLimits

0x2b89,	// (0x00034ec3) status_pane_g2

0x22f1,	// (0x0003462b) status_pane_g3_ParamLimits

0x22f1,	// (0x0003462b) status_pane_g3

0x0004,

0xf7a0,	// (0x00041ada) status_pane_g_ParamLimits

0xf7a0,	// (0x00041ada) status_pane_g

0x49ae,	// (0x00036ce8) title_pane_ParamLimits

0x49ae,	// (0x00036ce8) title_pane

0x49eb,	// (0x00036d25) uni_indicator_pane_ParamLimits

0x49eb,	// (0x00036d25) uni_indicator_pane

0x21c5,	// (0x000344ff) bg_list_pane_ParamLimits

0x21c5,	// (0x000344ff) bg_list_pane

0xe5fd,	// (0x00040937) find_pane

0x4739,	// (0x00036a73) listscroll_app_pane_ParamLimits

0x4739,	// (0x00036a73) listscroll_app_pane

0x21e5,	// (0x0003451f) listscroll_form_pane

0xacbf,	// (0x0003cff9) listscroll_gen_pane_ParamLimits

0xacbf,	// (0x0003cff9) listscroll_gen_pane

0xb732,	// (0x0003da6c) listscroll_set_pane

0x448f,	// (0x000367c9) main_idle_act_pane

0x204c,	// (0x00034386) main_idle_trad_pane

0x204c,	// (0x00034386) main_list_empty_pane

0x21ff,	// (0x00034539) main_midp_pane

0x220b,	// (0x00034545) main_pane_g1_ParamLimits

0x220b,	// (0x00034545) main_pane_g1

0xb748,	// (0x0003da82) popup_ai_message_window_ParamLimits

0xb748,	// (0x0003da82) popup_ai_message_window

0xb7de,	// (0x0003db18) popup_fep_china_uni_window_ParamLimits

0xb7de,	// (0x0003db18) popup_fep_china_uni_window

0xb81c,	// (0x0003db56) popup_fep_japan_candidate_window_ParamLimits

0xb81c,	// (0x0003db56) popup_fep_japan_candidate_window

0xb83a,	// (0x0003db74) popup_fep_japan_predictive_window_ParamLimits

0xb83a,	// (0x0003db74) popup_fep_japan_predictive_window

0xb866,	// (0x0003dba0) popup_find_window

0xb873,	// (0x0003dbad) popup_grid_graphic_window_ParamLimits

0xb873,	// (0x0003dbad) popup_grid_graphic_window

0xb899,	// (0x0003dbd3) popup_large_graphic_colour_window

0xb8bd,	// (0x0003dbf7) popup_menu_window_ParamLimits

0xb8bd,	// (0x0003dbf7) popup_menu_window

0xba05,	// (0x0003dd3f) popup_note_image_window

0xb9f3,	// (0x0003dd2d) popup_note_wait_window_ParamLimits

0xb9f3,	// (0x0003dd2d) popup_note_wait_window

0xb9f3,	// (0x0003dd2d) popup_note_window_ParamLimits

0xb9f3,	// (0x0003dd2d) popup_note_window

0xba59,	// (0x0003dd93) popup_query_code_window_ParamLimits

0xba59,	// (0x0003dd93) popup_query_code_window

0xba6b,	// (0x0003dda5) popup_query_data_code_window_ParamLimits

0xba6b,	// (0x0003dda5) popup_query_data_code_window

0xba80,	// (0x0003ddba) popup_query_data_window_ParamLimits

0xba80,	// (0x0003ddba) popup_query_data_window

0xba96,	// (0x0003ddd0) popup_query_sat_info_window_ParamLimits

0xba96,	// (0x0003ddd0) popup_query_sat_info_window

0xbac7,	// (0x0003de01) popup_snote_single_graphic_window_ParamLimits

0xbac7,	// (0x0003de01) popup_snote_single_graphic_window

0xbac7,	// (0x0003de01) popup_snote_single_text_window_ParamLimits

0xbac7,	// (0x0003de01) popup_snote_single_text_window

0xbada,	// (0x0003de14) popup_sub_window_general

0xbbe8,	// (0x0003df22) popup_window_general_ParamLimits

0xbbe8,	// (0x0003df22) popup_window_general

0x2219,	// (0x00034553) power_save_pane

0xb5c7,	// (0x0003d901) control_pane_g1_ParamLimits

0xb5c7,	// (0x0003d901) control_pane_g1

0xb5ee,	// (0x0003d928) control_pane_g2_ParamLimits

0xb5ee,	// (0x0003d928) control_pane_g2

0x21af,	// (0x000344e9) control_pane_g3_ParamLimits

0x21af,	// (0x000344e9) control_pane_g3

0x0007,

0xf788,	// (0x00041ac2) control_pane_g_ParamLimits

0xf788,	// (0x00041ac2) control_pane_g

0xb636,	// (0x0003d970) control_pane_t1_ParamLimits

0xb636,	// (0x0003d970) control_pane_t1

0xb689,	// (0x0003d9c3) control_pane_t2_ParamLimits

0xb689,	// (0x0003d9c3) control_pane_t2

0x0002,

0xf799,	// (0x00041ad3) control_pane_t_ParamLimits

0xf799,	// (0x00041ad3) control_pane_t

0x466d,	// (0x000369a7) navi_navi_volume_pane_cp1

0x4675,	// (0x000369af) status_small_icon_pane

0x217b,	// (0x000344b5) status_small_pane_g1_ParamLimits

0x217b,	// (0x000344b5) status_small_pane_g1

0x467d,	// (0x000369b7) status_small_pane_g2_ParamLimits

0x467d,	// (0x000369b7) status_small_pane_g2

0x4689,	// (0x000369c3) status_small_pane_g3_ParamLimits

0x4689,	// (0x000369c3) status_small_pane_g3

0x4695,	// (0x000369cf) status_small_pane_g4_ParamLimits

0x4695,	// (0x000369cf) status_small_pane_g4

0x46a1,	// (0x000369db) status_small_pane_g5_ParamLimits

0x46a1,	// (0x000369db) status_small_pane_g5

0x46ad,	// (0x000369e7) status_small_pane_g6_ParamLimits

0x46ad,	// (0x000369e7) status_small_pane_g6

0x0007,

0xf777,	// (0x00041ab1) status_small_pane_g_ParamLimits

0xf777,	// (0x00041ab1) status_small_pane_g

0x46dc,	// (0x00036a16) status_small_pane_t1

0x46fe,	// (0x00036a38) status_small_wait_pane_ParamLimits

0x46fe,	// (0x00036a38) status_small_wait_pane

0x4560,	// (0x0003689a) aid_levels_signal_ParamLimits

0x4560,	// (0x0003689a) aid_levels_signal

0x456f,	// (0x000368a9) signal_pane_g1_ParamLimits

0x456f,	// (0x000368a9) signal_pane_g1

0x4584,	// (0x000368be) signal_pane_g2_ParamLimits

0x4584,	// (0x000368be) signal_pane_g2

0x0003,

0xf708,	// (0x00041a42) signal_pane_g_ParamLimits

0xf708,	// (0x00041a42) signal_pane_g

0x1b54,	// (0x00033e8e) context_pane_g1

0x41b9,	// (0x000364f3) title_pane_g1

0x41e3,	// (0x0003651d) title_pane_t1

0x0fb9,	// (0x000332f3) title_pane_t2

0x0fdf,	// (0x00033319) title_pane_t3

0x0002,

0xf557,	// (0x00041891) title_pane_t

0x4a01,	// (0x00036d3b) aid_levels_battery_ParamLimits

0x4a01,	// (0x00036d3b) aid_levels_battery

0x4a12,	// (0x00036d4c) battery_pane_g1_ParamLimits

0x4a12,	// (0x00036d4c) battery_pane_g1

0x4a28,	// (0x00036d62) battery_pane_g2_ParamLimits

0x4a28,	// (0x00036d62) battery_pane_g2

0x0001,

0xf7ab,	// (0x00041ae5) battery_pane_g_ParamLimits

0xf7ab,	// (0x00041ae5) battery_pane_g

0x4bb9,	// (0x00036ef3) uni_indicator_pane_g1

0x4bcc,	// (0x00036f06) uni_indicator_pane_g2

0x4bde,	// (0x00036f18) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00041c5b) uni_indicator_pane_g

0x1ecc,	// (0x00034206) navi_icon_pane_ParamLimits

0x1ecc,	// (0x00034206) navi_icon_pane

0x1e1b,	// (0x00034155) navi_midp_pane

0x1ee8,	// (0x00034222) navi_navi_pane

0x1ef2,	// (0x0003422c) navi_text_pane_ParamLimits

0x1ef2,	// (0x0003422c) navi_text_pane

0x0f99,	// (0x000332d3) status_small_wait_pane_g1

0x12d6,	// (0x00033610) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00041c56) status_small_wait_pane_g

0x30b8,	// (0x000353f2) navi_navi_icon_text_pane

0x30d2,	// (0x0003540c) navi_navi_pane_g1_ParamLimits

0x30d2,	// (0x0003540c) navi_navi_pane_g1

0x30c0,	// (0x000353fa) navi_navi_pane_g2_ParamLimits

0x30c0,	// (0x000353fa) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00041c24) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00041c24) navi_navi_pane_g

0x30e4,	// (0x0003541e) navi_navi_tabs_pane

0x30ed,	// (0x00035427) navi_navi_text_pane

0x30b8,	// (0x000353f2) navi_navi_volume_pane

0x3094,	// (0x000353ce) navi_text_pane_t1

0x3088,	// (0x000353c2) navi_icon_pane_g1

0x2fec,	// (0x00035326) navi_navi_text_pane_t1

0xbe70,	// (0x0003e1aa) navi_navi_volume_pane_g1

0xbe78,	// (0x0003e1b2) volume_small_pane

0x2fca,	// (0x00035304) navi_navi_icon_text_pane_g1

0x2fd2,	// (0x0003530c) navi_navi_icon_text_pane_t1

0x1ee8,	// (0x00034222) navi_tabs_2_long_pane

0x1ee8,	// (0x00034222) navi_tabs_2_pane

0x1ee8,	// (0x00034222) navi_tabs_3_long_pane

0x1ee8,	// (0x00034222) navi_tabs_3_pane

0x1ee8,	// (0x00034222) navi_tabs_4_pane

0xbe50,	// (0x0003e18a) tabs_2_active_pane_ParamLimits

0xbe50,	// (0x0003e18a) tabs_2_active_pane

0xbe60,	// (0x0003e19a) tabs_2_passive_pane_ParamLimits

0xbe60,	// (0x0003e19a) tabs_2_passive_pane

0xbe1e,	// (0x0003e158) tabs_3_active_pane_ParamLimits

0xbe1e,	// (0x0003e158) tabs_3_active_pane

0xbe2e,	// (0x0003e168) tabs_3_passive_pane_ParamLimits

0xbe2e,	// (0x0003e168) tabs_3_passive_pane

0xbe3f,	// (0x0003e179) tabs_3_passive_pane_cp_ParamLimits

0xbe3f,	// (0x0003e179) tabs_3_passive_pane_cp

0xbdda,	// (0x0003e114) tabs_4_active_pane_ParamLimits

0xbdda,	// (0x0003e114) tabs_4_active_pane

0xbdeb,	// (0x0003e125) tabs_4_passive_pane_ParamLimits

0xbdeb,	// (0x0003e125) tabs_4_passive_pane

0xbdfc,	// (0x0003e136) tabs_4_passive_pane_cp_ParamLimits

0xbdfc,	// (0x0003e136) tabs_4_passive_pane_cp

0xbe0d,	// (0x0003e147) tabs_4_passive_pane_cp2_ParamLimits

0xbe0d,	// (0x0003e147) tabs_4_passive_pane_cp2

0xbdba,	// (0x0003e0f4) tabs_2_long_active_pane_ParamLimits

0xbdba,	// (0x0003e0f4) tabs_2_long_active_pane

0xbdca,	// (0x0003e104) tabs_2_long_passive_pane_ParamLimits

0xbdca,	// (0x0003e104) tabs_2_long_passive_pane

0xbd87,	// (0x0003e0c1) tabs_3_long_active_pane_ParamLimits

0xbd87,	// (0x0003e0c1) tabs_3_long_active_pane

0xbd98,	// (0x0003e0d2) tabs_3_long_passive_pane_ParamLimits

0xbd98,	// (0x0003e0d2) tabs_3_long_passive_pane

0xbda9,	// (0x0003e0e3) tabs_3_long_passive_pane_cp_ParamLimits

0xbda9,	// (0x0003e0e3) tabs_3_long_passive_pane_cp

0xbd2d,	// (0x0003e067) volume_small_pane_g1

0xbd36,	// (0x0003e070) volume_small_pane_g2

0xbd3f,	// (0x0003e079) volume_small_pane_g3

0xbd48,	// (0x0003e082) volume_small_pane_g4

0xbd51,	// (0x0003e08b) volume_small_pane_g5

0xbd5a,	// (0x0003e094) volume_small_pane_g6

0xbd63,	// (0x0003e09d) volume_small_pane_g7

0xbd6c,	// (0x0003e0a6) volume_small_pane_g8

0xbd75,	// (0x0003e0af) volume_small_pane_g9

0xbd7e,	// (0x0003e0b8) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00041bf0) volume_small_pane_g

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp2_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp2

0x0fff,	// (0x00033339) tabs_3_active_pane_g1

0x424b,	// (0x00036585) tabs_3_active_pane_t1

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp2_ParamLimits

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp2

0x0fff,	// (0x00033339) tabs_3_passive_pane_g1

0x424b,	// (0x00036585) tabs_3_passive_pane_t1

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp3_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp3

0x1007,	// (0x00033341) tabs_4_active_pane_g1

0x425d,	// (0x00036597) tabs_4_active_pane_t1

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp3_ParamLimits

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp3

0x1007,	// (0x00033341) tabs_4_1_passive_pane_g1

0x425d,	// (0x00036597) tabs_4_1_passive_pane_t1

0x21ff,	// (0x00034539) list_highlight_pane_cp2

0xbfab,	// (0x0003e2e5) list_set_pane_ParamLimits

0xbfab,	// (0x0003e2e5) list_set_pane

0xc039,	// (0x0003e373) main_pane_set_t1_ParamLimits

0xc039,	// (0x0003e373) main_pane_set_t1

0xc059,	// (0x0003e393) main_pane_set_t2_ParamLimits

0xc059,	// (0x0003e393) main_pane_set_t2

0xc06b,	// (0x0003e3a5) main_pane_set_t3_ParamLimits

0xc06b,	// (0x0003e3a5) main_pane_set_t3

0xc07d,	// (0x0003e3b7) main_pane_set_t4_ParamLimits

0xc07d,	// (0x0003e3b7) main_pane_set_t4

0x0003,

0xf986,	// (0x00041cc0) main_pane_set_t_ParamLimits

0xf986,	// (0x00041cc0) main_pane_set_t

0xc08f,	// (0x0003e3c9) setting_code_pane

0xc097,	// (0x0003e3d1) setting_slider_graphic_pane

0xc097,	// (0x0003e3d1) setting_slider_pane

0xc097,	// (0x0003e3d1) setting_text_pane

0xc097,	// (0x0003e3d1) setting_volume_pane

0xb0d6,	// (0x0003d410) volume_set_pane

0x0ff1,	// (0x0003332b) bg_set_opt_pane_cp

0xb0de,	// (0x0003d418) setting_slider_pane_t1

0xb0f7,	// (0x0003d431) setting_slider_pane_t2

0xb110,	// (0x0003d44a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00041898) setting_slider_pane_t

0xb127,	// (0x0003d461) slider_set_pane

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp2

0x100f,	// (0x00033349) setting_slider_graphic_pane_g1

0xb13d,	// (0x0003d477) setting_slider_graphic_pane_t1

0xb14c,	// (0x0003d486) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004189f) setting_slider_graphic_pane_t

0xb15b,	// (0x0003d495) slider_set_pane_cp

0x0fa3,	// (0x000332dd) input_focus_pane_cp1

0x3503,	// (0x0003583d) list_set_text_pane

0x0f99,	// (0x000332d3) setting_text_pane_g1

0x0fa3,	// (0x000332dd) input_focus_pane_cp2

0x0f99,	// (0x000332d3) setting_code_pane_g1

0x1018,	// (0x00033352) setting_code_pane_t1

0xded5,	// (0x0004020f) set_text_pane_t1_ParamLimits

0xded5,	// (0x0004020f) set_text_pane_t1

0x161e,	// (0x00033958) set_opt_bg_pane_g1

0x1626,	// (0x00033960) set_opt_bg_pane_g2

0xbf6e,	// (0x0003e2a8) set_opt_bg_pane_g3

0x1636,	// (0x00033970) set_opt_bg_pane_g4

0x163e,	// (0x00033978) set_opt_bg_pane_g5

0x1646,	// (0x00033980) set_opt_bg_pane_g6

0x34fb,	// (0x00035835) set_opt_bg_pane_g7

0xbf76,	// (0x0003e2b0) set_opt_bg_pane_g8

0xbf7e,	// (0x0003e2b8) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00041cad) set_opt_bg_pane_g

0x34ee,	// (0x00035828) slider_set_pane_g1

0xbf0a,	// (0x0003e244) slider_set_pane_g2

0x0006,

0xf964,	// (0x00041c9e) slider_set_pane_g

0xbe81,	// (0x0003e1bb) volume_set_pane_g1

0xbe89,	// (0x0003e1c3) volume_set_pane_g2

0xbe91,	// (0x0003e1cb) volume_set_pane_g3

0xbe99,	// (0x0003e1d3) volume_set_pane_g4

0xbea1,	// (0x0003e1db) volume_set_pane_g5

0xbea9,	// (0x0003e1e3) volume_set_pane_g6

0xbeb1,	// (0x0003e1eb) volume_set_pane_g7

0xbeb9,	// (0x0003e1f3) volume_set_pane_g8

0xbec1,	// (0x0003e1fb) volume_set_pane_g9

0xbec9,	// (0x0003e203) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00041c76) volume_set_pane_g

0x426f,	// (0x000365a9) indicator_pane_ParamLimits

0x426f,	// (0x000365a9) indicator_pane

0x427b,	// (0x000365b5) main_idle_pane_g2_ParamLimits

0x427b,	// (0x000365b5) main_idle_pane_g2

0x429d,	// (0x000365d7) main_pane_idle_g1_ParamLimits

0x429d,	// (0x000365d7) main_pane_idle_g1

0x1026,	// (0x00033360) popup_clock_digital_analogue_window_ParamLimits

0x1026,	// (0x00033360) popup_clock_digital_analogue_window

0x42aa,	// (0x000365e4) soft_indicator_pane_ParamLimits

0x42aa,	// (0x000365e4) soft_indicator_pane

0x42b6,	// (0x000365f0) wallpaper_pane_ParamLimits

0x42b6,	// (0x000365f0) wallpaper_pane

0x0f99,	// (0x000332d3) wallpaper_pane_g1

0x42c2,	// (0x000365fc) indicator_pane_g1_ParamLimits

0x42c2,	// (0x000365fc) indicator_pane_g1

0x366d,	// (0x000359a7) navi_navi_icon_text_pane_srt_g1

0x1054,	// (0x0003338e) soft_indicator_pane_t1

0x106e,	// (0x000333a8) aid_ps_area_pane

0x42ce,	// (0x00036608) aid_ps_clock_pane

0x107f,	// (0x000333b9) aid_ps_indicator_pane

0x108b,	// (0x000333c5) indicator_ps_pane_ParamLimits

0x108b,	// (0x000333c5) indicator_ps_pane

0x109a,	// (0x000333d4) power_save_pane_g1_ParamLimits

0x109a,	// (0x000333d4) power_save_pane_g1

0x10a6,	// (0x000333e0) power_save_pane_g2_ParamLimits

0x10a6,	// (0x000333e0) power_save_pane_g2

0xad3d,	// (0x0003d077) aid_navinavi_width_pane

0x106e,	// (0x000333a8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000418a4) power_save_pane_g_ParamLimits

0xf56a,	// (0x000418a4) power_save_pane_g

0x10b4,	// (0x000333ee) power_save_pane_t1_ParamLimits

0x10b4,	// (0x000333ee) power_save_pane_t1

0x42ce,	// (0x00036608) aid_ps_clock_pane_ParamLimits

0x107f,	// (0x000333b9) aid_ps_indicator_pane_ParamLimits

0x10c6,	// (0x00033400) power_save_pane_t4_ParamLimits

0x10c6,	// (0x00033400) power_save_pane_t4

0x0001,

0xf56f,	// (0x000418a9) power_save_pane_t_ParamLimits

0xf56f,	// (0x000418a9) power_save_pane_t

0x10f0,	// (0x0003342a) power_save_t3_ParamLimits

0x10f0,	// (0x0003342a) power_save_t3

0x10db,	// (0x00033415) power_save_t2_ParamLimits

0x10db,	// (0x00033415) power_save_t2

0x1105,	// (0x0003343f) indicator_ps_pane_g1

0x42da,	// (0x00036614) ai_gene_pane_ParamLimits

0x42da,	// (0x00036614) ai_gene_pane

0x42e6,	// (0x00036620) ai_links_pane_ParamLimits

0x42e6,	// (0x00036620) ai_links_pane

0x42f2,	// (0x0003662c) indicator_pane_cp1_ParamLimits

0x42f2,	// (0x0003662c) indicator_pane_cp1

0x42fe,	// (0x00036638) main_pane_idle_g1_cp_ParamLimits

0x42fe,	// (0x00036638) main_pane_idle_g1_cp

0x110e,	// (0x00033448) popup_ai_links_title_window

0x430a,	// (0x00036644) soft_indicator_pane_cp1_ParamLimits

0x430a,	// (0x00036644) soft_indicator_pane_cp1

0x3356,	// (0x00035690) ai_links_pane_g1

0x335f,	// (0x00035699) grid_ai_links_pane

0x4bb0,	// (0x00036eea) ai_gene_pane_1

0x3344,	// (0x0003567e) ai_gene_pane_2

0x334d,	// (0x00035687) list_highlight_pane_cp4

0x4b98,	// (0x00036ed2) cell_ai_link_pane_ParamLimits

0x4b98,	// (0x00036ed2) cell_ai_link_pane

0x333c,	// (0x00035676) cell_ai_link_pane_g1

0x12d6,	// (0x00033610) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00041c51) cell_ai_link_pane_g

0x0fa3,	// (0x000332dd) grid_highlight_cp2

0x0fa3,	// (0x000332dd) bg_popup_sub_pane_cp1

0x1125,	// (0x0003345f) popup_ai_links_title_window_t1

0x328e,	// (0x000355c8) ai_gene_pane_1_g1_ParamLimits

0x328e,	// (0x000355c8) ai_gene_pane_1_g1

0x329a,	// (0x000355d4) ai_gene_pane_1_g2_ParamLimits

0x329a,	// (0x000355d4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00041c47) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00041c47) ai_gene_pane_1_g

0x32a7,	// (0x000355e1) ai_gene_pane_1_t1_ParamLimits

0x32a7,	// (0x000355e1) ai_gene_pane_1_t1

0x32db,	// (0x00035615) grid_ai_soft_ind_pane

0x3279,	// (0x000355b3) ai_gene_pane_2_t1_ParamLimits

0x3279,	// (0x000355b3) ai_gene_pane_2_t1

0x4316,	// (0x00036650) main_pane_empty_t1_ParamLimits

0x4316,	// (0x00036650) main_pane_empty_t1

0x432e,	// (0x00036668) main_pane_empty_t2_ParamLimits

0x432e,	// (0x00036668) main_pane_empty_t2

0x4343,	// (0x0003667d) main_pane_empty_t3_ParamLimits

0x4343,	// (0x0003667d) main_pane_empty_t3

0x4355,	// (0x0003668f) main_pane_empty_t4_ParamLimits

0x4355,	// (0x0003668f) main_pane_empty_t4

0x4367,	// (0x000366a1) main_pane_empty_t5_ParamLimits

0x4367,	// (0x000366a1) main_pane_empty_t5

0x0004,

0xf574,	// (0x000418ae) main_pane_empty_t_ParamLimits

0xf574,	// (0x000418ae) main_pane_empty_t

0x166f,	// (0x000339a9) bg_popup_window_pane_ParamLimits

0x166f,	// (0x000339a9) bg_popup_window_pane

0x2ffa,	// (0x00035334) find_popup_pane_cp2_ParamLimits

0x2ffa,	// (0x00035334) find_popup_pane_cp2

0x3006,	// (0x00035340) heading_pane_ParamLimits

0x3006,	// (0x00035340) heading_pane

0x0fa3,	// (0x000332dd) bg_popup_sub_pane

0x4b2c,	// (0x00036e66) bg_popup_window_pane_g1_ParamLimits

0x4b2c,	// (0x00036e66) bg_popup_window_pane_g1

0x4b38,	// (0x00036e72) bg_popup_window_pane_g2_ParamLimits

0x4b38,	// (0x00036e72) bg_popup_window_pane_g2

0x4b44,	// (0x00036e7e) bg_popup_window_pane_g3_ParamLimits

0x4b44,	// (0x00036e7e) bg_popup_window_pane_g3

0x4b50,	// (0x00036e8a) bg_popup_window_pane_g4_ParamLimits

0x4b50,	// (0x00036e8a) bg_popup_window_pane_g4

0x4b5c,	// (0x00036e96) bg_popup_window_pane_g5_ParamLimits

0x4b5c,	// (0x00036e96) bg_popup_window_pane_g5

0x4b68,	// (0x00036ea2) bg_popup_window_pane_g6_ParamLimits

0x4b68,	// (0x00036ea2) bg_popup_window_pane_g6

0x4b74,	// (0x00036eae) bg_popup_window_pane_g7_ParamLimits

0x4b74,	// (0x00036eae) bg_popup_window_pane_g7

0x4b80,	// (0x00036eba) bg_popup_window_pane_g8_ParamLimits

0x4b80,	// (0x00036eba) bg_popup_window_pane_g8

0x4b8c,	// (0x00036ec6) bg_popup_window_pane_g9_ParamLimits

0x4b8c,	// (0x00036ec6) bg_popup_window_pane_g9

0x2fe0,	// (0x0003531a) bg_popup_window_pane_g10_ParamLimits

0x2fe0,	// (0x0003531a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00041c0f) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00041c0f) bg_popup_window_pane_g

0x2f81,	// (0x000352bb) bg_popup_heading_pane_ParamLimits

0x2f81,	// (0x000352bb) bg_popup_heading_pane

0xc1c5,	// (0x0003e4ff) tabs_4_passive_pane_cp_srt_ParamLimits

0xc1c5,	// (0x0003e4ff) tabs_4_passive_pane_cp_srt

0xc1d7,	// (0x0003e511) tabs_4_passive_pane_srt_ParamLimits

0x2f95,	// (0x000352cf) heading_pane_g2

0xc1d7,	// (0x0003e511) tabs_4_passive_pane_srt

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp3_srt_ParamLimits

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp3_srt

0x2f9d,	// (0x000352d7) heading_pane_t1_ParamLimits

0x2f9d,	// (0x000352d7) heading_pane_t1

0x2fb4,	// (0x000352ee) heading_pane_t2_ParamLimits

0x2fb4,	// (0x000352ee) heading_pane_t2

0x0001,

0xf8d0,	// (0x00041c0a) heading_pane_t_ParamLimits

0xf8d0,	// (0x00041c0a) heading_pane_t

0x2ac1,	// (0x00034dfb) bg_popup_heading_pane_g1

0x2b52,	// (0x00034e8c) bg_popup_heading_pane_g2

0x2b5a,	// (0x00034e94) bg_popup_heading_pane_g3

0x2b62,	// (0x00034e9c) bg_popup_heading_pane_g4

0x2b6a,	// (0x00034ea4) bg_popup_heading_pane_g5

0x2b72,	// (0x00034eac) bg_popup_heading_pane_g6

0x2ba7,	// (0x00034ee1) bg_popup_heading_pane_g7

0x2baf,	// (0x00034ee9) bg_popup_heading_pane_g8

0x2bb7,	// (0x00034ef1) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00041bc6) bg_popup_heading_pane_g

0x23e3,	// (0x0003471d) bg_popup_sub_pane_g1

0x23eb,	// (0x00034725) bg_popup_sub_pane_g2

0x23f3,	// (0x0003472d) bg_popup_sub_pane_g3

0x23fb,	// (0x00034735) bg_popup_sub_pane_g4

0x2403,	// (0x0003473d) bg_popup_sub_pane_g5

0x240b,	// (0x00034745) bg_popup_sub_pane_g6

0x2413,	// (0x0003474d) bg_popup_sub_pane_g7

0x241b,	// (0x00034755) bg_popup_sub_pane_g8

0x2423,	// (0x0003475d) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00041ba0) bg_popup_sub_pane_g

0x1134,	// (0x0003346e) bg_popup_window_pane_cp5_ParamLimits

0x1134,	// (0x0003346e) bg_popup_window_pane_cp5

0x1150,	// (0x0003348a) popup_note_window_g1_ParamLimits

0x1150,	// (0x0003348a) popup_note_window_g1

0x115c,	// (0x00033496) popup_note_window_t1_ParamLimits

0x115c,	// (0x00033496) popup_note_window_t1

0x1172,	// (0x000334ac) popup_note_window_t2_ParamLimits

0x1172,	// (0x000334ac) popup_note_window_t2

0x1188,	// (0x000334c2) popup_note_window_t3_ParamLimits

0x1188,	// (0x000334c2) popup_note_window_t3

0x119e,	// (0x000334d8) popup_note_window_t4_ParamLimits

0x119e,	// (0x000334d8) popup_note_window_t4

0x11c6,	// (0x00033500) popup_note_window_t5_ParamLimits

0x11c6,	// (0x00033500) popup_note_window_t5

0x0004,

0xf57f,	// (0x000418b9) popup_note_window_t_ParamLimits

0xf57f,	// (0x000418b9) popup_note_window_t

0x11ea,	// (0x00033524) bg_popup_window_pane_cp6_ParamLimits

0x11ea,	// (0x00033524) bg_popup_window_pane_cp6

0x2a3d,	// (0x00034d77) popup_note_image_window_g1_ParamLimits

0x2a3d,	// (0x00034d77) popup_note_image_window_g1

0x2a49,	// (0x00034d83) popup_note_image_window_g2_ParamLimits

0x2a49,	// (0x00034d83) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00041b94) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00041b94) popup_note_image_window_g

0x2a62,	// (0x00034d9c) popup_note_image_window_t1_ParamLimits

0x2a62,	// (0x00034d9c) popup_note_image_window_t1

0x2a7b,	// (0x00034db5) popup_note_image_window_t2_ParamLimits

0x2a7b,	// (0x00034db5) popup_note_image_window_t2

0x2a94,	// (0x00034dce) popup_note_image_window_t3_ParamLimits

0x2a94,	// (0x00034dce) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00041b99) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00041b99) popup_note_image_window_t

0x2922,	// (0x00034c5c) bg_popup_window_pane_cp7_ParamLimits

0x2922,	// (0x00034c5c) bg_popup_window_pane_cp7

0x2952,	// (0x00034c8c) popup_note_wait_window_g1_ParamLimits

0x2952,	// (0x00034c8c) popup_note_wait_window_g1

0x295e,	// (0x00034c98) popup_note_wait_window_g2_ParamLimits

0x295e,	// (0x00034c98) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00041b82) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00041b82) popup_note_wait_window_g

0x2976,	// (0x00034cb0) popup_note_wait_window_t1_ParamLimits

0x2976,	// (0x00034cb0) popup_note_wait_window_t1

0x299d,	// (0x00034cd7) popup_note_wait_window_t2_ParamLimits

0x299d,	// (0x00034cd7) popup_note_wait_window_t2

0x29ba,	// (0x00034cf4) popup_note_wait_window_t3_ParamLimits

0x29ba,	// (0x00034cf4) popup_note_wait_window_t3

0x29cd,	// (0x00034d07) popup_note_wait_window_t4_ParamLimits

0x29cd,	// (0x00034d07) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00041b89) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00041b89) popup_note_wait_window_t

0x29f2,	// (0x00034d2c) wait_bar_pane_ParamLimits

0x29f2,	// (0x00034d2c) wait_bar_pane

0x0fa3,	// (0x000332dd) wait_anim_pane

0x0fa3,	// (0x000332dd) wait_border_pane

0x0f99,	// (0x000332d3) wait_anim_pane_g1

0x0f99,	// (0x000332d3) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00041a3d) wait_anim_pane_g

0x28d2,	// (0x00034c0c) wait_border_pane_g1

0x28db,	// (0x00034c15) wait_border_pane_g2

0x28e4,	// (0x00034c1e) wait_border_pane_g3

0x0002,

0xf841,	// (0x00041b7b) wait_border_pane_g

0x2742,	// (0x00034a7c) bg_popup_window_pane_cp16_ParamLimits

0x2742,	// (0x00034a7c) bg_popup_window_pane_cp16

0x2842,	// (0x00034b7c) indicator_popup_pane_cp4_ParamLimits

0x2842,	// (0x00034b7c) indicator_popup_pane_cp4

0x2856,	// (0x00034b90) popup_query_data_window_t1_ParamLimits

0x2856,	// (0x00034b90) popup_query_data_window_t1

0x2868,	// (0x00034ba2) popup_query_data_window_t2_ParamLimits

0x2868,	// (0x00034ba2) popup_query_data_window_t2

0x2881,	// (0x00034bbb) popup_query_data_window_t3_ParamLimits

0x2881,	// (0x00034bbb) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00041b74) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00041b74) popup_query_data_window_t

0x289b,	// (0x00034bd5) query_popup_data_pane_ParamLimits

0x289b,	// (0x00034bd5) query_popup_data_pane

0x28af,	// (0x00034be9) query_popup_data_pane_cp1_ParamLimits

0x28af,	// (0x00034be9) query_popup_data_pane_cp1

0x2742,	// (0x00034a7c) bg_popup_window_pane_cp10_ParamLimits

0x2742,	// (0x00034a7c) bg_popup_window_pane_cp10

0x2774,	// (0x00034aae) indicator_popup_pane_ParamLimits

0x2774,	// (0x00034aae) indicator_popup_pane

0x2796,	// (0x00034ad0) popup_query_code_window_t1_ParamLimits

0x2796,	// (0x00034ad0) popup_query_code_window_t1

0x27b0,	// (0x00034aea) popup_query_code_window_t2_ParamLimits

0x27b0,	// (0x00034aea) popup_query_code_window_t2

0x27f9,	// (0x00034b33) popup_query_code_window_t3_ParamLimits

0x27f9,	// (0x00034b33) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00041b6d) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00041b6d) popup_query_code_window_t

0x2828,	// (0x00034b62) query_popup_pane_ParamLimits

0x2828,	// (0x00034b62) query_popup_pane

0x11ea,	// (0x00033524) bg_popup_window_pane_cp15_ParamLimits

0x11ea,	// (0x00033524) bg_popup_window_pane_cp15

0x1208,	// (0x00033542) indicator_popup_pane_cp1_ParamLimits

0x1208,	// (0x00033542) indicator_popup_pane_cp1

0x121b,	// (0x00033555) indicator_popup_pane_cp2_ParamLimits

0x121b,	// (0x00033555) indicator_popup_pane_cp2

0x122e,	// (0x00033568) popup_query_data_code_window_g1_ParamLimits

0x122e,	// (0x00033568) popup_query_data_code_window_g1

0x1241,	// (0x0003357b) popup_query_data_code_window_t1_ParamLimits

0x1241,	// (0x0003357b) popup_query_data_code_window_t1

0x1253,	// (0x0003358d) popup_query_data_code_window_t2_ParamLimits

0x1253,	// (0x0003358d) popup_query_data_code_window_t2

0x1265,	// (0x0003359f) popup_query_data_code_window_t3_ParamLimits

0x1265,	// (0x0003359f) popup_query_data_code_window_t3

0x127b,	// (0x000335b5) popup_query_data_code_window_t4_ParamLimits

0x127b,	// (0x000335b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000418c4) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000418c4) popup_query_data_code_window_t

0xbc48,	// (0x0003df82) list_single_midp_graphic_pane_g3

0x1293,	// (0x000335cd) query_popup_data_pane_cp2_ParamLimits

0x12a6,	// (0x000335e0) query_popup_pane_cp2_ParamLimits

0x12a6,	// (0x000335e0) query_popup_pane_cp2

0x0fa3,	// (0x000332dd) bg_popup_window_pane_cp11

0x273a,	// (0x00034a74) heading_pane_cp5

0x1335,	// (0x0003366f) listscroll_popup_info_pane

0x0fa3,	// (0x000332dd) input_focus_pane_cp3

0x12b9,	// (0x000335f3) query_popup_pane_t1

0x12c7,	// (0x00033601) list_popup_info_pane_ParamLimits

0x12c7,	// (0x00033601) list_popup_info_pane

0x12d6,	// (0x00033610) listscroll_popup_info_pane_g1

0x12de,	// (0x00033618) scroll_pane_cp7

0x12e6,	// (0x00033620) popup_info_list_pane_t1_ParamLimits

0x12e6,	// (0x00033620) popup_info_list_pane_t1

0x1300,	// (0x0003363a) popup_info_list_pane_t2_ParamLimits

0x1300,	// (0x0003363a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000418cd) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000418cd) popup_info_list_pane_t

0x0fa3,	// (0x000332dd) bg_popup_window_pane_cp12

0x3687,	// (0x000359c1) find_popup_pane

0x0ff1,	// (0x0003332b) bg_popup_window_pane_cp3

0x131a,	// (0x00033654) heading_pane_cp3

0x1326,	// (0x00033660) listscroll_popup_graphic_pane

0x0fa3,	// (0x000332dd) bg_popup_window_pane_cp4

0x43c9,	// (0x00036703) heading_pane_cp4

0x1335,	// (0x0003366f) listscroll_popup_colour_pane

0x133d,	// (0x00033677) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x133d,	// (0x00033677) cell_large_graphic_colour_none_popup_pane

0x43d1,	// (0x0003670b) grid_large_graphic_colour_popup_pane_ParamLimits

0x43d1,	// (0x0003670b) grid_large_graphic_colour_popup_pane

0x134d,	// (0x00033687) listscroll_popup_colour_pane_g1_ParamLimits

0x134d,	// (0x00033687) listscroll_popup_colour_pane_g1

0x1364,	// (0x0003369e) listscroll_popup_colour_pane_g2_ParamLimits

0x1364,	// (0x0003369e) listscroll_popup_colour_pane_g2

0x137b,	// (0x000336b5) listscroll_popup_colour_pane_g3_ParamLimits

0x137b,	// (0x000336b5) listscroll_popup_colour_pane_g3

0x43ed,	// (0x00036727) listscroll_popup_colour_pane_g4_ParamLimits

0x43ed,	// (0x00036727) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000418d2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000418d2) listscroll_popup_colour_pane_g

0x138b,	// (0x000336c5) scroll_pane_cp6_ParamLimits

0x138b,	// (0x000336c5) scroll_pane_cp6

0x43fc,	// (0x00036736) cell_large_graphic_colour_popup_pane_ParamLimits

0x43fc,	// (0x00036736) cell_large_graphic_colour_popup_pane

0x139d,	// (0x000336d7) cell_large_graphic_colour_none_popup_pane_t1

0x0fa3,	// (0x000332dd) grid_highlight_pane_cp5

0x13ac,	// (0x000336e6) cell_large_graphic_colour_popup_pane_g1

0x13b4,	// (0x000336ee) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000418db) cell_large_graphic_colour_popup_pane_g

0x13bc,	// (0x000336f6) cell_large_graphic_colour_popup_pane_g2_copy1

0x13c5,	// (0x000336ff) grid_highlight_pane_cp4

0x13cd,	// (0x00033707) bg_popup_window_pane_cp8_ParamLimits

0x13cd,	// (0x00033707) bg_popup_window_pane_cp8

0x13e8,	// (0x00033722) popup_snote_single_text_window_g1_ParamLimits

0x13e8,	// (0x00033722) popup_snote_single_text_window_g1

0x13fa,	// (0x00033734) popup_snote_single_text_window_t1_ParamLimits

0x13fa,	// (0x00033734) popup_snote_single_text_window_t1

0x140d,	// (0x00033747) popup_snote_single_text_window_t2_ParamLimits

0x140d,	// (0x00033747) popup_snote_single_text_window_t2

0x1420,	// (0x0003375a) popup_snote_single_text_window_t3_ParamLimits

0x1420,	// (0x0003375a) popup_snote_single_text_window_t3

0x1459,	// (0x00033793) popup_snote_single_text_window_t4_ParamLimits

0x1459,	// (0x00033793) popup_snote_single_text_window_t4

0x148d,	// (0x000337c7) popup_snote_single_text_window_t5_ParamLimits

0x148d,	// (0x000337c7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000418e0) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000418e0) popup_snote_single_text_window_t

0x14bc,	// (0x000337f6) bg_popup_window_pane_cp9_ParamLimits

0x14bc,	// (0x000337f6) bg_popup_window_pane_cp9

0x13e8,	// (0x00033722) popup_snote_single_graphic_window_g1_ParamLimits

0x13e8,	// (0x00033722) popup_snote_single_graphic_window_g1

0x14ca,	// (0x00033804) popup_snote_single_graphic_window_g2_ParamLimits

0x14ca,	// (0x00033804) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000418eb) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000418eb) popup_snote_single_graphic_window_g

0x14d6,	// (0x00033810) popup_snote_single_graphic_window_t1_ParamLimits

0x14d6,	// (0x00033810) popup_snote_single_graphic_window_t1

0x14e9,	// (0x00033823) popup_snote_single_graphic_window_t2_ParamLimits

0x14e9,	// (0x00033823) popup_snote_single_graphic_window_t2

0x1420,	// (0x0003375a) popup_snote_single_graphic_window_t3_ParamLimits

0x1420,	// (0x0003375a) popup_snote_single_graphic_window_t3

0x1459,	// (0x00033793) popup_snote_single_graphic_window_t4_ParamLimits

0x1459,	// (0x00033793) popup_snote_single_graphic_window_t4

0x148d,	// (0x000337c7) popup_snote_single_graphic_window_t5_ParamLimits

0x148d,	// (0x000337c7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000418f0) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000418f0) popup_snote_single_graphic_window_t

0x3607,	// (0x00035941) grid_graphic_popup_pane_ParamLimits

0x3607,	// (0x00035941) grid_graphic_popup_pane

0x362b,	// (0x00035965) listscroll_popup_graphic_pane_g1_ParamLimits

0x362b,	// (0x00035965) listscroll_popup_graphic_pane_g1

0xc18d,	// (0x0003e4c7) listscroll_popup_graphic_pane_g2_ParamLimits

0xc18d,	// (0x0003e4c7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00041cea) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00041cea) listscroll_popup_graphic_pane_g

0x363f,	// (0x00035979) scroll_pane_cp5

0xc14c,	// (0x0003e486) cell_graphic_popup_pane_ParamLimits

0xc14c,	// (0x0003e486) cell_graphic_popup_pane

0x35d2,	// (0x0003590c) cell_graphic_popup_pane_g1

0x35da,	// (0x00035914) cell_graphic_popup_pane_g2

0x13bc,	// (0x000336f6) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00041ce3) cell_graphic_popup_pane_g

0x35e3,	// (0x0003591d) cell_graphic_popup_pane_t2

0x13c5,	// (0x000336ff) grid_highlight_pane_cp3

0x150e,	// (0x00033848) list_gen_pane_ParamLimits

0x150e,	// (0x00033848) list_gen_pane

0x1536,	// (0x00033870) scroll_pane

0xc10d,	// (0x0003e447) bg_list_pane_g1_ParamLimits

0xc10d,	// (0x0003e447) bg_list_pane_g1

0x3581,	// (0x000358bb) bg_list_pane_g2_ParamLimits

0x3581,	// (0x000358bb) bg_list_pane_g2

0x3594,	// (0x000358ce) bg_list_pane_g3_ParamLimits

0x3594,	// (0x000358ce) bg_list_pane_g3

0x35a6,	// (0x000358e0) bg_list_pane_g4_ParamLimits

0x35a6,	// (0x000358e0) bg_list_pane_g4

0xc124,	// (0x0003e45e) bg_list_pane_g5_ParamLimits

0xc124,	// (0x0003e45e) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00041cd8) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00041cd8) bg_list_pane_g

0xe744,	// (0x00040a7e) list_double2_graphic_large_graphic_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double2_graphic_large_graphic_pane

0xe744,	// (0x00040a7e) list_double2_graphic_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double2_graphic_pane

0xe744,	// (0x00040a7e) list_double2_large_graphic_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double2_large_graphic_pane

0xe744,	// (0x00040a7e) list_double2_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double2_pane

0xe744,	// (0x00040a7e) list_double_graphic_heading_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_graphic_heading_pane

0xe744,	// (0x00040a7e) list_double_graphic_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_graphic_pane

0xe744,	// (0x00040a7e) list_double_heading_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_heading_pane

0xe744,	// (0x00040a7e) list_double_large_graphic_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_large_graphic_pane

0xe744,	// (0x00040a7e) list_double_number_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_number_pane

0xe744,	// (0x00040a7e) list_double_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_pane

0xe744,	// (0x00040a7e) list_double_time_pane_ParamLimits

0xe744,	// (0x00040a7e) list_double_time_pane

0xe744,	// (0x00040a7e) list_setting_number_pane_ParamLimits

0xe744,	// (0x00040a7e) list_setting_number_pane

0xe744,	// (0x00040a7e) list_setting_pane_ParamLimits

0xe744,	// (0x00040a7e) list_setting_pane

0xc0c4,	// (0x0003e3fe) list_single_2graphic_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_2graphic_pane

0xc0c4,	// (0x0003e3fe) list_single_graphic_heading_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_graphic_heading_pane

0xc0c4,	// (0x0003e3fe) list_single_graphic_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_graphic_pane

0xc0c4,	// (0x0003e3fe) list_single_heading_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_heading_pane

0xc0f8,	// (0x0003e432) list_single_large_graphic_pane_ParamLimits

0xc0f8,	// (0x0003e432) list_single_large_graphic_pane

0xc0c4,	// (0x0003e3fe) list_single_number_heading_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_number_heading_pane

0xc0c4,	// (0x0003e3fe) list_single_number_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_number_pane

0xc0c4,	// (0x0003e3fe) list_single_pane_ParamLimits

0xc0c4,	// (0x0003e3fe) list_single_pane

0x0fa3,	// (0x000332dd) list_highlight_pane_cp1

0xf3c0,	// (0x000416fa) list_single_pane_g1_ParamLimits

0xf3c0,	// (0x000416fa) list_single_pane_g1

0xf3cc,	// (0x00041706) list_single_pane_g2_ParamLimits

0xf3cc,	// (0x00041706) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004190c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004190c) list_single_pane_g

0xe72e,	// (0x00040a68) list_single_pane_t1_ParamLimits

0xe72e,	// (0x00040a68) list_single_pane_t1

0xf3c0,	// (0x000416fa) list_single_number_pane_g1_ParamLimits

0xf3c0,	// (0x000416fa) list_single_number_pane_g1

0xf3cc,	// (0x00041706) list_single_number_pane_g2_ParamLimits

0xf3cc,	// (0x00041706) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004190c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004190c) list_single_number_pane_g

0xe6dc,	// (0x00040a16) list_single_number_pane_t1_ParamLimits

0xe6dc,	// (0x00040a16) list_single_number_pane_t1

0xe6f2,	// (0x00040a2c) list_single_number_pane_t2_ParamLimits

0xe6f2,	// (0x00040a2c) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00041c99) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00041c99) list_single_number_pane_t

0xdeee,	// (0x00040228) list_single_graphic_pane_g1_ParamLimits

0xdeee,	// (0x00040228) list_single_graphic_pane_g1

0xf3c0,	// (0x000416fa) list_single_graphic_pane_g2_ParamLimits

0xf3c0,	// (0x000416fa) list_single_graphic_pane_g2

0xf3cc,	// (0x00041706) list_single_graphic_pane_g3_ParamLimits

0xf3cc,	// (0x00041706) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000418fb) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000418fb) list_single_graphic_pane_g

0xdefa,	// (0x00040234) list_single_graphic_pane_t1_ParamLimits

0xdefa,	// (0x00040234) list_single_graphic_pane_t1

0xdf10,	// (0x0004024a) list_single_heading_pane_g1_ParamLimits

0xdf10,	// (0x0004024a) list_single_heading_pane_g1

0xf3cc,	// (0x00041706) list_single_heading_pane_g2_ParamLimits

0xf3cc,	// (0x00041706) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00041902) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00041902) list_single_heading_pane_g

0xdf23,	// (0x0004025d) list_single_heading_pane_t1_ParamLimits

0xdf23,	// (0x0004025d) list_single_heading_pane_t1

0xdf39,	// (0x00040273) list_single_heading_pane_t2_ParamLimits

0xdf39,	// (0x00040273) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00041907) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00041907) list_single_heading_pane_t

0xf3c0,	// (0x000416fa) list_single_number_heading_pane_g1_ParamLimits

0xf3c0,	// (0x000416fa) list_single_number_heading_pane_g1

0xf3cc,	// (0x00041706) list_single_number_heading_pane_g2_ParamLimits

0xf3cc,	// (0x00041706) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004190c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004190c) list_single_number_heading_pane_g

0xdf4b,	// (0x00040285) list_single_number_heading_pane_t1_ParamLimits

0xdf4b,	// (0x00040285) list_single_number_heading_pane_t1

0xdf61,	// (0x0004029b) list_single_number_heading_pane_t2_ParamLimits

0xdf61,	// (0x0004029b) list_single_number_heading_pane_t2

0xdf73,	// (0x000402ad) list_single_number_heading_pane_t3_ParamLimits

0xdf73,	// (0x000402ad) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00041911) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00041911) list_single_number_heading_pane_t

0xdf85,	// (0x000402bf) list_single_graphic_heading_pane_g1_ParamLimits

0xdf85,	// (0x000402bf) list_single_graphic_heading_pane_g1

0xdf9b,	// (0x000402d5) list_single_graphic_heading_pane_g4_ParamLimits

0xdf9b,	// (0x000402d5) list_single_graphic_heading_pane_g4

0xf3cc,	// (0x00041706) list_single_graphic_heading_pane_g5_ParamLimits

0xf3cc,	// (0x00041706) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00041918) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00041918) list_single_graphic_heading_pane_g

0xdf4b,	// (0x00040285) list_single_graphic_heading_pane_t1_ParamLimits

0xdf4b,	// (0x00040285) list_single_graphic_heading_pane_t1

0xdfaa,	// (0x000402e4) list_single_graphic_heading_pane_t2_ParamLimits

0xdfaa,	// (0x000402e4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004191f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004191f) list_single_graphic_heading_pane_t

0xf3d8,	// (0x00041712) list_single_large_graphic_pane_g1_ParamLimits

0xf3d8,	// (0x00041712) list_single_large_graphic_pane_g1

0xf3c0,	// (0x000416fa) list_single_large_graphic_pane_g2_ParamLimits

0xf3c0,	// (0x000416fa) list_single_large_graphic_pane_g2

0xf3cc,	// (0x00041706) list_single_large_graphic_pane_g3_ParamLimits

0xf3cc,	// (0x00041706) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00041924) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00041924) list_single_large_graphic_pane_g

0x28db,	// (0x00034c15) wait_border_pane_g2_copy1

0xf3e4,	// (0x0004171e) list_single_large_graphic_pane_g4_cp2

0xdfc2,	// (0x000402fc) list_single_large_graphic_pane_t1_ParamLimits

0xdfc2,	// (0x000402fc) list_single_large_graphic_pane_t1

0x156a,	// (0x000338a4) list_double_pane_g1_ParamLimits

0x156a,	// (0x000338a4) list_double_pane_g1

0xf3ec,	// (0x00041726) list_double_pane_g2_ParamLimits

0xf3ec,	// (0x00041726) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004192b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004192b) list_double_pane_g

0xdfd8,	// (0x00040312) list_double_pane_t1_ParamLimits

0xdfd8,	// (0x00040312) list_double_pane_t1

0xdfee,	// (0x00040328) list_double_pane_t2_ParamLimits

0xdfee,	// (0x00040328) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00041930) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00041930) list_double_pane_t

0xe000,	// (0x0004033a) list_double2_pane_g1_ParamLimits

0xe000,	// (0x0004033a) list_double2_pane_g1

0xe00f,	// (0x00040349) list_double2_pane_g2_ParamLimits

0xe00f,	// (0x00040349) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00041935) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00041935) list_double2_pane_g

0xe01b,	// (0x00040355) list_double2_pane_t1_ParamLimits

0xe01b,	// (0x00040355) list_double2_pane_t1

0xe031,	// (0x0004036b) list_double2_pane_t2_ParamLimits

0xe031,	// (0x0004036b) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004193a) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004193a) list_double2_pane_t

0x156a,	// (0x000338a4) list_double_number_pane_g1_ParamLimits

0x156a,	// (0x000338a4) list_double_number_pane_g1

0xf3ec,	// (0x00041726) list_double_number_pane_g2_ParamLimits

0xf3ec,	// (0x00041726) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004192b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004192b) list_double_number_pane_g

0xe043,	// (0x0004037d) list_double_number_pane_t1_ParamLimits

0xe043,	// (0x0004037d) list_double_number_pane_t1

0xe055,	// (0x0004038f) list_double_number_pane_t2_ParamLimits

0xe055,	// (0x0004038f) list_double_number_pane_t2

0xe06b,	// (0x000403a5) list_double_number_pane_t3_ParamLimits

0xe06b,	// (0x000403a5) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004193f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004193f) list_double_number_pane_t

0xe07d,	// (0x000403b7) list_double_graphic_pane_g1_ParamLimits

0xe07d,	// (0x000403b7) list_double_graphic_pane_g1

0x2b7a,	// (0x00034eb4) list_double_graphic_pane_g2_ParamLimits

0x2b7a,	// (0x00034eb4) list_double_graphic_pane_g2

0xe089,	// (0x000403c3) list_double_graphic_pane_g3_ParamLimits

0xe089,	// (0x000403c3) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00041946) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00041946) list_double_graphic_pane_g

0xe0a1,	// (0x000403db) list_double_graphic_pane_t1_ParamLimits

0xe0a1,	// (0x000403db) list_double_graphic_pane_t1

0xe0b7,	// (0x000403f1) list_double_graphic_pane_t2_ParamLimits

0xe0b7,	// (0x000403f1) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004194f) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004194f) list_double_graphic_pane_t

0xe07d,	// (0x000403b7) list_double2_graphic_pane_g1_ParamLimits

0xe07d,	// (0x000403b7) list_double2_graphic_pane_g1

0x156a,	// (0x000338a4) list_double2_graphic_pane_g2_ParamLimits

0x156a,	// (0x000338a4) list_double2_graphic_pane_g2

0xf3ec,	// (0x00041726) list_double2_graphic_pane_g3_ParamLimits

0xf3ec,	// (0x00041726) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00041954) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00041954) list_double2_graphic_pane_g

0xe055,	// (0x0004038f) list_double2_graphic_pane_t1_ParamLimits

0xe055,	// (0x0004038f) list_double2_graphic_pane_t1

0xe0c9,	// (0x00040403) list_double2_graphic_pane_t2_ParamLimits

0xe0c9,	// (0x00040403) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004195b) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004195b) list_double2_graphic_pane_t

0xe0db,	// (0x00040415) list_double_large_graphic_pane_g1_ParamLimits

0xe0db,	// (0x00040415) list_double_large_graphic_pane_g1

0xe0f5,	// (0x0004042f) list_double_large_graphic_pane_g2_ParamLimits

0xe0f5,	// (0x0004042f) list_double_large_graphic_pane_g2

0xf3ec,	// (0x00041726) list_double_large_graphic_pane_g3_ParamLimits

0xf3ec,	// (0x00041726) list_double_large_graphic_pane_g3

0xe109,	// (0x00040443) list_double_large_graphic_pane_g4_ParamLimits

0xe109,	// (0x00040443) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00041960) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00041960) list_double_large_graphic_pane_g

0xe11a,	// (0x00040454) list_double_large_graphic_pane_t1_ParamLimits

0xe11a,	// (0x00040454) list_double_large_graphic_pane_t1

0xe133,	// (0x0004046d) list_double_large_graphic_pane_t2_ParamLimits

0xe133,	// (0x0004046d) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004196b) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004196b) list_double_large_graphic_pane_t

0xe145,	// (0x0004047f) list_double2_large_graphic_pane_g1_ParamLimits

0xe145,	// (0x0004047f) list_double2_large_graphic_pane_g1

0xf40d,	// (0x00041747) list_double2_large_graphic_pane_g2_ParamLimits

0xf40d,	// (0x00041747) list_double2_large_graphic_pane_g2

0xf3ec,	// (0x00041726) list_double2_large_graphic_pane_g3_ParamLimits

0xf3ec,	// (0x00041726) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00041970) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00041970) list_double2_large_graphic_pane_g

0xe151,	// (0x0004048b) list_double2_large_graphic_pane_t1_ParamLimits

0xe151,	// (0x0004048b) list_double2_large_graphic_pane_t1

0xe167,	// (0x000404a1) list_double2_large_graphic_pane_t2_ParamLimits

0xe167,	// (0x000404a1) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00041977) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00041977) list_double2_large_graphic_pane_t

0xe179,	// (0x000404b3) list_double_heading_pane_g1_ParamLimits

0xe179,	// (0x000404b3) list_double_heading_pane_g1

0xf41c,	// (0x00041756) list_double_heading_pane_g2_ParamLimits

0xf41c,	// (0x00041756) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004197c) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004197c) list_double_heading_pane_g

0xe188,	// (0x000404c2) list_double_heading_pane_t1_ParamLimits

0xe188,	// (0x000404c2) list_double_heading_pane_t1

0xe19e,	// (0x000404d8) list_double_heading_pane_t2_ParamLimits

0xe19e,	// (0x000404d8) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00041981) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00041981) list_double_heading_pane_t

0xe1b0,	// (0x000404ea) list_double_graphic_heading_pane_g1_ParamLimits

0xe1b0,	// (0x000404ea) list_double_graphic_heading_pane_g1

0xe179,	// (0x000404b3) list_double_graphic_heading_pane_g2_ParamLimits

0xe179,	// (0x000404b3) list_double_graphic_heading_pane_g2

0xf41c,	// (0x00041756) list_double_graphic_heading_pane_g3_ParamLimits

0xf41c,	// (0x00041756) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00041986) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00041986) list_double_graphic_heading_pane_g

0xe1bc,	// (0x000404f6) list_double_graphic_heading_pane_t1_ParamLimits

0xe1bc,	// (0x000404f6) list_double_graphic_heading_pane_t1

0xe1d2,	// (0x0004050c) list_double_graphic_heading_pane_t2_ParamLimits

0xe1d2,	// (0x0004050c) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004198d) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004198d) list_double_graphic_heading_pane_t

0xe000,	// (0x0004033a) list_double_time_pane_g1_ParamLimits

0xe000,	// (0x0004033a) list_double_time_pane_g1

0xe00f,	// (0x00040349) list_double_time_pane_g2_ParamLimits

0xe00f,	// (0x00040349) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x00041935) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x00041935) list_double_time_pane_g

0xe1e4,	// (0x0004051e) list_double_time_pane_t1_ParamLimits

0xe1e4,	// (0x0004051e) list_double_time_pane_t1

0xe1fa,	// (0x00040534) list_double_time_pane_t2_ParamLimits

0xe1fa,	// (0x00040534) list_double_time_pane_t2

0xe20c,	// (0x00040546) list_double_time_pane_t3_ParamLimits

0xe20c,	// (0x00040546) list_double_time_pane_t3

0xe21e,	// (0x00040558) list_double_time_pane_t4_ParamLimits

0xe21e,	// (0x00040558) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00041992) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00041992) list_double_time_pane_t

0xe230,	// (0x0004056a) list_setting_pane_g1_ParamLimits

0xe230,	// (0x0004056a) list_setting_pane_g1

0xe23c,	// (0x00040576) list_setting_pane_g2_ParamLimits

0xe23c,	// (0x00040576) list_setting_pane_g2

0x0001,

0xf661,	// (0x0004199b) list_setting_pane_g_ParamLimits

0xf661,	// (0x0004199b) list_setting_pane_g

0xe248,	// (0x00040582) list_setting_pane_t1_ParamLimits

0xe248,	// (0x00040582) list_setting_pane_t1

0xe262,	// (0x0004059c) list_setting_pane_t2_ParamLimits

0xe262,	// (0x0004059c) list_setting_pane_t2

0x0002,

0xf666,	// (0x000419a0) list_setting_pane_t_ParamLimits

0xf666,	// (0x000419a0) list_setting_pane_t

0xe29f,	// (0x000405d9) set_value_pane_cp_ParamLimits

0xe29f,	// (0x000405d9) set_value_pane_cp

0xe2ab,	// (0x000405e5) list_setting_number_pane_g1_ParamLimits

0xe2ab,	// (0x000405e5) list_setting_number_pane_g1

0xe2b7,	// (0x000405f1) list_setting_number_pane_g2_ParamLimits

0xe2b7,	// (0x000405f1) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x000419a7) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x000419a7) list_setting_number_pane_g

0xe2c3,	// (0x000405fd) list_setting_number_pane_t1_ParamLimits

0xe2c3,	// (0x000405fd) list_setting_number_pane_t1

0xe2da,	// (0x00040614) list_setting_number_pane_t2_ParamLimits

0xe2da,	// (0x00040614) list_setting_number_pane_t2

0xe2f4,	// (0x0004062e) list_setting_number_pane_t3_ParamLimits

0xe2f4,	// (0x0004062e) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x000419ac) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x000419ac) list_setting_number_pane_t

0xe29f,	// (0x000405d9) set_value_pane_ParamLimits

0xe29f,	// (0x000405d9) set_value_pane

0x1576,	// (0x000338b0) bg_set_opt_pane_ParamLimits

0x1576,	// (0x000338b0) bg_set_opt_pane

0xe335,	// (0x0004066f) set_value_pane_t1

0x1597,	// (0x000338d1) slider_set_pane_cp3

0x4425,	// (0x0003675f) volume_small_pane_cp

0x15a0,	// (0x000338da) list_form_gen_pane

0x15a9,	// (0x000338e3) scroll_pane_cp8

0xe34b,	// (0x00040685) form_field_data_pane_ParamLimits

0xe34b,	// (0x00040685) form_field_data_pane

0xe36b,	// (0x000406a5) form_field_data_wide_pane_ParamLimits

0xe36b,	// (0x000406a5) form_field_data_wide_pane

0xe38a,	// (0x000406c4) form_field_popup_pane_ParamLimits

0xe38a,	// (0x000406c4) form_field_popup_pane

0xe3a2,	// (0x000406dc) form_field_popup_wide_pane_ParamLimits

0xe3a2,	// (0x000406dc) form_field_popup_wide_pane

0xe3b9,	// (0x000406f3) form_field_slider_pane_ParamLimits

0xe3b9,	// (0x000406f3) form_field_slider_pane

0xe3cc,	// (0x00040706) form_field_slider_wide_pane_ParamLimits

0xe3cc,	// (0x00040706) form_field_slider_wide_pane

0x15ba,	// (0x000338f4) data_form_pane

0xe3e7,	// (0x00040721) form_field_data_pane_t1

0x15c6,	// (0x00033900) input_focus_pane

0xe3ff,	// (0x00040739) data_form_wide_pane

0xe41c,	// (0x00040756) form_field_data_wide_pane_t1

0x13da,	// (0x00033714) input_focus_pane_cp6

0xe43e,	// (0x00040778) form_field_popup_pane_t1

0x15c6,	// (0x00033900) input_focus_pane_cp7

0x15f4,	// (0x0003392e) list_form_pane

0xe45e,	// (0x00040798) form_field_popup_wide_pane_t1

0x15c6,	// (0x00033900) input_focus_pane_cp8

0x1600,	// (0x0003393a) list_form_wide_pane

0xe47b,	// (0x000407b5) form_field_slider_pane_t1_ParamLimits

0xe47b,	// (0x000407b5) form_field_slider_pane_t1

0xe491,	// (0x000407cb) form_field_slider_pane_t2_ParamLimits

0xe491,	// (0x000407cb) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x000419bc) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x000419bc) form_field_slider_pane_t

0x1134,	// (0x0003346e) input_focus_pane_cp9_ParamLimits

0x1134,	// (0x0003346e) input_focus_pane_cp9

0xe4a6,	// (0x000407e0) slider_cont_pane_ParamLimits

0xe4a6,	// (0x000407e0) slider_cont_pane

0x160c,	// (0x00033946) form_field_slider_wide_pane_t1_ParamLimits

0x160c,	// (0x00033946) form_field_slider_wide_pane_t1

0xe4ba,	// (0x000407f4) form_field_slider_wide_pane_t2_ParamLimits

0xe4ba,	// (0x000407f4) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x000419c1) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x000419c1) form_field_slider_wide_pane_t

0x1134,	// (0x0003346e) input_focus_pane_cp10_ParamLimits

0x1134,	// (0x0003346e) input_focus_pane_cp10

0xe4cc,	// (0x00040806) slider_cont_pane_cp1_ParamLimits

0xe4cc,	// (0x00040806) slider_cont_pane_cp1

0xe4e0,	// (0x0004081a) slider_form_pane_cp

0x161e,	// (0x00033958) input_focus_pane_g1

0x1626,	// (0x00033960) input_focus_pane_g2

0x162e,	// (0x00033968) input_focus_pane_g3

0x1636,	// (0x00033970) input_focus_pane_g4

0x163e,	// (0x00033978) input_focus_pane_g5

0x1646,	// (0x00033980) input_focus_pane_g6

0x164e,	// (0x00033988) input_focus_pane_g7

0x1656,	// (0x00033990) input_focus_pane_g8

0x165e,	// (0x00033998) input_focus_pane_g9

0x0f99,	// (0x000332d3) input_focus_pane_g10

0x0009,

0xf68c,	// (0x000419c6) input_focus_pane_g

0x28e4,	// (0x00034c1e) wait_border_pane_g3_copy1

0xe4e8,	// (0x00040822) data_form_pane_t1

0x0f99,	// (0x000332d3) wait_anim_pane_g1_copy1

0xe704,	// (0x00040a3e) data_form_wide_pane_t1

0xe501,	// (0x0004083b) list_form_graphic_pane_cp_ParamLimits

0xe501,	// (0x0004083b) list_form_graphic_pane_cp

0x351d,	// (0x00035857) slider_form_pane_g1

0x3526,	// (0x00035860) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00041cc9) slider_form_pane_g

0xe501,	// (0x0004083b) list_form_graphic_pane_ParamLimits

0xe501,	// (0x0004083b) list_form_graphic_pane

0xe512,	// (0x0004084c) list_form_graphic_pane_g1

0xe51a,	// (0x00040854) list_form_graphic_pane_t1_ParamLimits

0xe51a,	// (0x00040854) list_form_graphic_pane_t1

0x0ff1,	// (0x0003332b) list_highlight_pane_cp5_ParamLimits

0x0ff1,	// (0x0003332b) list_highlight_pane_cp5

0xe52f,	// (0x00040869) find_pane_g1

0x1666,	// (0x000339a0) input_find_pane

0xe538,	// (0x00040872) input_find_pane_g1_ParamLimits

0xe538,	// (0x00040872) input_find_pane_g1

0xe544,	// (0x0004087e) input_find_pane_t1_ParamLimits

0xe544,	// (0x0004087e) input_find_pane_t1

0xe559,	// (0x00040893) input_find_pane_t2_ParamLimits

0xe559,	// (0x00040893) input_find_pane_t2

0x0001,

0xf6a1,	// (0x000419db) input_find_pane_t_ParamLimits

0xf6a1,	// (0x000419db) input_find_pane_t

0x166f,	// (0x000339a9) input_focus_pane_cp5_ParamLimits

0x166f,	// (0x000339a9) input_focus_pane_cp5

0x167d,	// (0x000339b7) bg_popup_window_pane_cp2_ParamLimits

0x167d,	// (0x000339b7) bg_popup_window_pane_cp2

0x168a,	// (0x000339c4) listscroll_menu_pane_ParamLimits

0x168a,	// (0x000339c4) listscroll_menu_pane

0x443a,	// (0x00036774) popup_submenu_window_ParamLimits

0x443a,	// (0x00036774) popup_submenu_window

0x1696,	// (0x000339d0) find_popup_pane_g1

0x169e,	// (0x000339d8) input_popup_find_pane_cp

0x166f,	// (0x000339a9) input_focus_pane_cp4_ParamLimits

0x166f,	// (0x000339a9) input_focus_pane_cp4

0x16a8,	// (0x000339e2) input_popup_find_pane_t1_ParamLimits

0x16a8,	// (0x000339e2) input_popup_find_pane_t1

0x0fa3,	// (0x000332dd) bg_popup_sub_pane_cp

0x16d6,	// (0x00033a10) listscroll_popup_sub_pane

0x16de,	// (0x00033a18) list_submenu_pane_ParamLimits

0x16de,	// (0x00033a18) list_submenu_pane

0x16ef,	// (0x00033a29) scroll_pane_cp4

0x16f7,	// (0x00033a31) list_single_popup_submenu_pane_ParamLimits

0x16f7,	// (0x00033a31) list_single_popup_submenu_pane

0x170a,	// (0x00033a44) list_single_popup_submenu_pane_g1

0x1712,	// (0x00033a4c) list_single_popup_submenu_pane_t1_ParamLimits

0x1712,	// (0x00033a4c) list_single_popup_submenu_pane_t1

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp1_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp1

0x1727,	// (0x00033a61) tabs_2_active_pane_g1

0x446a,	// (0x000367a4) tabs_2_active_pane_t1

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp1_ParamLimits

0x0ff1,	// (0x0003332b) bg_passive_tab_pane_cp1

0x1727,	// (0x00033a61) tabs_2_passive_pane_g1

0x446a,	// (0x000367a4) tabs_2_passive_pane_t1

0x172f,	// (0x00033a69) bg_active_tab_pane_cp4

0x447c,	// (0x000367b6) tabs_2_long_active_pane_t1

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp4

0xbc50,	// (0x0003df8a) list_single_midp_graphic_pane_g4_ParamLimits

0x172f,	// (0x00033a69) bg_active_tab_pane_cp5

0x449b,	// (0x000367d5) tabs_3_long_active_pane_t1

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp5

0xbc50,	// (0x0003df8a) list_single_midp_graphic_pane_g4

0x0ff1,	// (0x0003332b) bg_popup_window_pane_cp13_ParamLimits

0x0ff1,	// (0x0003332b) bg_popup_window_pane_cp13

0x1746,	// (0x00033a80) listscroll_popup_fast_pane_ParamLimits

0x1746,	// (0x00033a80) listscroll_popup_fast_pane

0x1755,	// (0x00033a8f) grid_popup_fast_pane_ParamLimits

0x1755,	// (0x00033a8f) grid_popup_fast_pane

0x1767,	// (0x00033aa1) scroll_pane_cp9_ParamLimits

0x1767,	// (0x00033aa1) scroll_pane_cp9

0x8f59,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8f59,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2

0x178b,	// (0x00033ac5) input_focus_pane_cp20_ParamLimits

0x178b,	// (0x00033ac5) input_focus_pane_cp20

0x1799,	// (0x00033ad3) query_popup_data_pane_t1_ParamLimits

0x1799,	// (0x00033ad3) query_popup_data_pane_t1

0x17ac,	// (0x00033ae6) query_popup_data_pane_t2_ParamLimits

0x17ac,	// (0x00033ae6) query_popup_data_pane_t2

0x17f2,	// (0x00033b2c) query_popup_data_pane_t3_ParamLimits

0x17f2,	// (0x00033b2c) query_popup_data_pane_t3

0x1833,	// (0x00033b6d) query_popup_data_pane_t4_ParamLimits

0x1833,	// (0x00033b6d) query_popup_data_pane_t4

0x186f,	// (0x00033ba9) query_popup_data_pane_t5_ParamLimits

0x186f,	// (0x00033ba9) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x000419e0) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x000419e0) query_popup_data_pane_t

0x161e,	// (0x00033958) bg_set_opt_pane_g1

0x1626,	// (0x00033960) bg_set_opt_pane_g2

0x162e,	// (0x00033968) bg_set_opt_pane_g3

0x1636,	// (0x00033970) bg_set_opt_pane_g4

0x163e,	// (0x00033978) bg_set_opt_pane_g5

0x1646,	// (0x00033980) bg_set_opt_pane_g6

0x164e,	// (0x00033988) bg_set_opt_pane_g7

0x1656,	// (0x00033990) bg_set_opt_pane_g8

0x165e,	// (0x00033998) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x000419eb) bg_set_opt_pane_g

0xb3f1,	// (0x0003d72b) control_top_pane_stacon_ParamLimits

0xb3f1,	// (0x0003d72b) control_top_pane_stacon

0xb444,	// (0x0003d77e) signal_pane_stacon_ParamLimits

0xb444,	// (0x0003d77e) signal_pane_stacon

0x1d0a,	// (0x00034044) stacon_top_pane_g1_ParamLimits

0x1d0a,	// (0x00034044) stacon_top_pane_g1

0xb469,	// (0x0003d7a3) title_pane_stacon_ParamLimits

0xb469,	// (0x0003d7a3) title_pane_stacon

0xb48b,	// (0x0003d7c5) uni_indicator_pane_stacon_ParamLimits

0xb48b,	// (0x0003d7c5) uni_indicator_pane_stacon

0xb4a0,	// (0x0003d7da) battery_pane_stacon_ParamLimits

0xb4a0,	// (0x0003d7da) battery_pane_stacon

0xb4e0,	// (0x0003d81a) control_bottom_pane_stacon_ParamLimits

0xb4e0,	// (0x0003d81a) control_bottom_pane_stacon

0xb4ff,	// (0x0003d839) navi_pane_stacon_ParamLimits

0xb4ff,	// (0x0003d839) navi_pane_stacon

0x1d2c,	// (0x00034066) stacon_bottom_pane_g1_ParamLimits

0x1d2c,	// (0x00034066) stacon_bottom_pane_g1

0xb163,	// (0x0003d49d) aid_levels_signal_lsc_ParamLimits

0xb163,	// (0x0003d49d) aid_levels_signal_lsc

0xb17a,	// (0x0003d4b4) signal_pane_stacon_g1_ParamLimits

0xb17a,	// (0x0003d4b4) signal_pane_stacon_g1

0xb18e,	// (0x0003d4c8) signal_pane_stacon_g2_ParamLimits

0xb18e,	// (0x0003d4c8) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000419fe) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000419fe) signal_pane_stacon_g

0xb1c3,	// (0x0003d4fd) title_pane_stacon_t1_ParamLimits

0xb1c3,	// (0x0003d4fd) title_pane_stacon_t1

0x18c7,	// (0x00033c01) uni_indicator_pane_stacon_g1

0x18d1,	// (0x00033c0b) uni_indicator_pane_stacon_g2

0x18b3,	// (0x00033bed) uni_indicator_pane_stacon_g3

0x18bd,	// (0x00033bf7) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00041a0a) uni_indicator_pane_stacon_g

0xb1e8,	// (0x0003d522) control_top_pane_stacon_g1

0xb1f0,	// (0x0003d52a) control_top_pane_stacon_t1_ParamLimits

0xb1f0,	// (0x0003d52a) control_top_pane_stacon_t1

0xb227,	// (0x0003d561) aid_levels_battery_lsc_ParamLimits

0xb227,	// (0x0003d561) aid_levels_battery_lsc

0xb23f,	// (0x0003d579) battery_pane_stacon_g1_ParamLimits

0xb23f,	// (0x0003d579) battery_pane_stacon_g1

0xb252,	// (0x0003d58c) battery_pane_stacon_g2_ParamLimits

0xb252,	// (0x0003d58c) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00041a13) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00041a13) battery_pane_stacon_g

0xb288,	// (0x0003d5c2) navi_icon_pane_stacon

0xb29c,	// (0x0003d5d6) navi_navi_pane_stacon

0xb288,	// (0x0003d5c2) navi_text_pane_stacon

0xb1e8,	// (0x0003d522) control_bottom_pane_stacon_g1

0xb2b0,	// (0x0003d5ea) control_bottom_pane_stacon_t1_ParamLimits

0xb2b0,	// (0x0003d5ea) control_bottom_pane_stacon_t1

0x44ad,	// (0x000367e7) grid_app_pane_ParamLimits

0x44ad,	// (0x000367e7) grid_app_pane

0x44cb,	// (0x00036805) scroll_pane_cp15_ParamLimits

0x44cb,	// (0x00036805) scroll_pane_cp15

0x44dc,	// (0x00036816) cell_app_pane_ParamLimits

0x44dc,	// (0x00036816) cell_app_pane

0x4500,	// (0x0003683a) cell_app_pane_g1_ParamLimits

0x4500,	// (0x0003683a) cell_app_pane_g1

0x18f5,	// (0x00033c2f) cell_app_pane_g2_ParamLimits

0x18f5,	// (0x00033c2f) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00041a18) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00041a18) cell_app_pane_g

0x4524,	// (0x0003685e) cell_app_pane_t1_ParamLimits

0x4524,	// (0x0003685e) cell_app_pane_t1

0x1901,	// (0x00033c3b) grid_highlight_pane_ParamLimits

0x1901,	// (0x00033c3b) grid_highlight_pane

0x161e,	// (0x00033958) cell_highlight_pane_g1

0x1626,	// (0x00033960) cell_highlight_pane_g2

0x162e,	// (0x00033968) cell_highlight_pane_g3

0x1636,	// (0x00033970) cell_highlight_pane_g4

0x163e,	// (0x00033978) cell_highlight_pane_g5

0x1646,	// (0x00033980) cell_highlight_pane_g6

0x164e,	// (0x00033988) cell_highlight_pane_g7

0x1656,	// (0x00033990) cell_highlight_pane_g8

0x165e,	// (0x00033998) cell_highlight_pane_g9

0x0f99,	// (0x000332d3) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x000419c6) cell_highlight_pane_g

0x1912,	// (0x00033c4c) bg_scroll_pane

0xb2fa,	// (0x0003d634) scroll_handle_pane

0x1959,	// (0x00033c93) scroll_bg_pane_g1

0x196e,	// (0x00033ca8) scroll_bg_pane_g2

0x1986,	// (0x00033cc0) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00041a1d) scroll_bg_pane_g

0x199b,	// (0x00033cd5) scroll_handle_focus_pane_ParamLimits

0x199b,	// (0x00033cd5) scroll_handle_focus_pane

0x1959,	// (0x00033c93) scroll_handle_pane_g1

0x19a8,	// (0x00033ce2) scroll_handle_pane_g2

0x1986,	// (0x00033cc0) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00041a24) scroll_handle_pane_g

0x166f,	// (0x000339a9) bg_popup_sub_pane_cp21_ParamLimits

0x166f,	// (0x000339a9) bg_popup_sub_pane_cp21

0x19bc,	// (0x00033cf6) popup_fep_japan_predictive_window_t1_ParamLimits

0x19bc,	// (0x00033cf6) popup_fep_japan_predictive_window_t1

0x19d3,	// (0x00033d0d) popup_fep_japan_predictive_window_t2_ParamLimits

0x19d3,	// (0x00033d0d) popup_fep_japan_predictive_window_t2

0x1a06,	// (0x00033d40) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a06,	// (0x00033d40) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00041a2b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00041a2b) popup_fep_japan_predictive_window_t

0x0fa3,	// (0x000332dd) bg_popup_sub_pane_cp23

0x1a3d,	// (0x00033d77) listscroll_japin_cand_pane

0x1a45,	// (0x00033d7f) popup_fep_japan_candidate_window_t1

0x1a53,	// (0x00033d8d) candidate_pane_ParamLimits

0x1a53,	// (0x00033d8d) candidate_pane

0x1a65,	// (0x00033d9f) scroll_pane_cp30

0x1a6d,	// (0x00033da7) list_single_popup_jap_candidate_pane_ParamLimits

0x1a6d,	// (0x00033da7) list_single_popup_jap_candidate_pane

0x0fa3,	// (0x000332dd) list_highlight_pane_cp30

0x1a82,	// (0x00033dbc) list_single_popup_jap_candidate_pane_t1

0x1a91,	// (0x00033dcb) level_1_signal

0x1a9e,	// (0x00033dd8) level_2_signal

0x1aab,	// (0x00033de5) level_3_signal

0x1ab8,	// (0x00033df2) level_4_signal

0x1ac5,	// (0x00033dff) level_5_signal

0x1ad2,	// (0x00033e0c) level_6_signal

0x1adf,	// (0x00033e19) level_7_signal

0x1a91,	// (0x00033dcb) level_1_battery

0x1a9e,	// (0x00033dd8) level_2_battery

0x1aab,	// (0x00033de5) level_3_battery

0x1ab8,	// (0x00033df2) level_4_battery

0x1ac5,	// (0x00033dff) level_5_battery

0x1ad2,	// (0x00033e0c) level_6_battery

0x1adf,	// (0x00033e19) level_7_battery

0x1b04,	// (0x00033e3e) list_menu_pane_ParamLimits

0x1b04,	// (0x00033e3e) list_menu_pane

0x1b1a,	// (0x00033e54) scroll_pane_cp25_ParamLimits

0x1b1a,	// (0x00033e54) scroll_pane_cp25

0x1b33,	// (0x00033e6d) list_double2_graphic_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double2_graphic_pane_cp2

0x1b33,	// (0x00033e6d) list_double2_large_graphic_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double2_large_graphic_pane_cp2

0x1b33,	// (0x00033e6d) list_double2_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double2_pane_cp2

0x1b33,	// (0x00033e6d) list_double_graphic_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double_graphic_pane_cp2

0x1b33,	// (0x00033e6d) list_double_large_graphic_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double_large_graphic_pane_cp2

0x1b33,	// (0x00033e6d) list_double_number_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double_number_pane_cp2

0x1b33,	// (0x00033e6d) list_double_pane_cp2_ParamLimits

0x1b33,	// (0x00033e6d) list_double_pane_cp2

0x454c,	// (0x00036886) list_single_2graphic_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_2graphic_pane_cp2

0x454c,	// (0x00036886) list_single_graphic_heading_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_graphic_heading_pane_cp2

0x454c,	// (0x00036886) list_single_graphic_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_graphic_pane_cp2

0x454c,	// (0x00036886) list_single_heading_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_heading_pane_cp2

0x1b43,	// (0x00033e7d) list_single_large_graphic_pane_cp2_ParamLimits

0x1b43,	// (0x00033e7d) list_single_large_graphic_pane_cp2

0x454c,	// (0x00036886) list_single_number_heading_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_number_heading_pane_cp2

0x454c,	// (0x00036886) list_single_number_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_number_pane_cp2

0x454c,	// (0x00036886) list_single_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_pane_cp2

0x1b5d,	// (0x00033e97) bg_popup_sub_pane_cp22

0xb3a9,	// (0x0003d6e3) popup_side_volume_key_window_g1

0xb3cd,	// (0x0003d707) popup_side_volume_key_window_t1

0xb3e9,	// (0x0003d723) volume_small_pane_cp1

0x1134,	// (0x0003346e) bg_popup_sub_pane_cp24_ParamLimits

0x1134,	// (0x0003346e) bg_popup_sub_pane_cp24

0x1b73,	// (0x00033ead) fep_china_uni_candidate_pane_ParamLimits

0x1b73,	// (0x00033ead) fep_china_uni_candidate_pane

0x1b87,	// (0x00033ec1) fep_china_uni_entry_pane

0x1b97,	// (0x00033ed1) popup_fep_china_uni_window_g1

0x1bb3,	// (0x00033eed) fep_china_uni_entry_pane_g1

0x1bbb,	// (0x00033ef5) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00041a5c) fep_china_uni_entry_pane_g

0x1bc3,	// (0x00033efd) fep_entry_item_pane

0x1bcd,	// (0x00033f07) fep_candidate_item_pane

0x1bd5,	// (0x00033f0f) fep_china_uni_candidate_pane_g1

0x1bdd,	// (0x00033f17) fep_china_uni_candidate_pane_g2

0x1be5,	// (0x00033f1f) fep_china_uni_candidate_pane_g3

0x1bed,	// (0x00033f27) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00041a61) fep_china_uni_candidate_pane_g

0x0f99,	// (0x000332d3) fep_entry_item_pane_g1

0x1bf5,	// (0x00033f2f) fep_entry_item_pane_t1_ParamLimits

0x1bf5,	// (0x00033f2f) fep_entry_item_pane_t1

0x1c0b,	// (0x00033f45) fep_candidate_item_pane_t1_ParamLimits

0x1c0b,	// (0x00033f45) fep_candidate_item_pane_t1

0x1c20,	// (0x00033f5a) fep_candidate_item_pane_t2_ParamLimits

0x1c20,	// (0x00033f5a) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00041a6a) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00041a6a) fep_candidate_item_pane_t

0x0ff1,	// (0x0003332b) list_highlight_pane_cp31_ParamLimits

0x0ff1,	// (0x0003332b) list_highlight_pane_cp31

0x1c32,	// (0x00033f6c) level_1_signal_lsc

0x1c3b,	// (0x00033f75) level_2_signal_lsc

0x1c44,	// (0x00033f7e) level_3_signal_lsc

0x1c4d,	// (0x00033f87) level_4_signal_lsc

0x1c56,	// (0x00033f90) level_5_signal_lsc

0x1c5f,	// (0x00033f99) level_6_signal_lsc

0x1c68,	// (0x00033fa2) level_7_signal_lsc

0x1c68,	// (0x00033fa2) level_1_battery_lsc

0x1c71,	// (0x00033fab) level_2_battery_lsc

0x1c7a,	// (0x00033fb4) level_3_battery_lsc

0x1c83,	// (0x00033fbd) level_4_battery_lsc

0x1c8c,	// (0x00033fc6) level_5_battery_lsc

0x1c95,	// (0x00033fcf) level_6_battery_lsc

0x1c32,	// (0x00033f6c) level_7_battery_lsc

0x1c9e,	// (0x00033fd8) scroll_handle_focus_pane_g1

0x1ca7,	// (0x00033fe1) scroll_handle_focus_pane_g2

0x1cb0,	// (0x00033fea) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00041a6f) scroll_handle_focus_pane_g

0xe56e,	// (0x000408a8) list_single_2graphic_pane_g1_ParamLimits

0xe56e,	// (0x000408a8) list_single_2graphic_pane_g1

0xdf9b,	// (0x000402d5) list_single_2graphic_pane_g2_ParamLimits

0xdf9b,	// (0x000402d5) list_single_2graphic_pane_g2

0xf3cc,	// (0x00041706) list_single_2graphic_pane_g3_ParamLimits

0xf3cc,	// (0x00041706) list_single_2graphic_pane_g3

0xe57a,	// (0x000408b4) list_single_2graphic_pane_g4_ParamLimits

0xe57a,	// (0x000408b4) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00041a76) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00041a76) list_single_2graphic_pane_g

0xe58b,	// (0x000408c5) list_single_2graphic_pane_t1_ParamLimits

0xe58b,	// (0x000408c5) list_single_2graphic_pane_t1

0xe5b9,	// (0x000408f3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe5b9,	// (0x000408f3) list_double2_graphic_large_graphic_pane_g1

0xf40d,	// (0x00041747) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xf40d,	// (0x00041747) list_double2_graphic_large_graphic_pane_g2

0xf3ec,	// (0x00041726) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xf3ec,	// (0x00041726) list_double2_graphic_large_graphic_pane_g3

0xe5c9,	// (0x00040903) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe5c9,	// (0x00040903) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00041a7f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00041a7f) list_double2_graphic_large_graphic_pane_g

0xe5d5,	// (0x0004090f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe5d5,	// (0x0004090f) list_double2_graphic_large_graphic_pane_t1

0xe5eb,	// (0x00040925) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe5eb,	// (0x00040925) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00041a88) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00041a88) list_double2_graphic_large_graphic_pane_t

0x1de5,	// (0x0003411f) popup_fast_swap_window_ParamLimits

0x1de5,	// (0x0003411f) popup_fast_swap_window

0x1e01,	// (0x0003413b) popup_side_volume_key_window

0x1e1b,	// (0x00034155) stacon_top_pane

0x1e25,	// (0x0003415f) status_pane_ParamLimits

0x1e25,	// (0x0003415f) status_pane

0x45b5,	// (0x000368ef) status_small_pane

0x0fa3,	// (0x000332dd) control_pane

0x0fa3,	// (0x000332dd) stacon_bottom_pane

0x15a9,	// (0x000338e3) scroll_pane_cp121

0x15a0,	// (0x000338da) set_content_pane

0x1ccb,	// (0x00034005) bg_active_tab_pane_g1_cp1

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp1

0x1cb9,	// (0x00033ff3) bg_active_tab_pane_g3_cp1

0x1ccb,	// (0x00034005) bg_passive_tab_pane_g1_cp1

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1

0x1cb9,	// (0x00033ff3) bg_passive_tab_pane_g3_cp1

0x1cdd,	// (0x00034017) bg_active_tab_pane_g1_cp2

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp2

0x1cd4,	// (0x0003400e) bg_active_tab_pane_g3_cp2

0x1cdd,	// (0x00034017) bg_passive_tab_pane_g1_cp2

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2

0x1cd4,	// (0x0003400e) bg_passive_tab_pane_g3_cp2

0x1cef,	// (0x00034029) bg_active_tab_pane_g1_cp3

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp3

0x1ce6,	// (0x00034020) bg_active_tab_pane_g3_cp3

0x1cef,	// (0x00034029) bg_passive_tab_pane_g1_cp3

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3

0x1ce6,	// (0x00034020) bg_passive_tab_pane_g3_cp3

0x1d01,	// (0x0003403b) bg_active_tab_pane_g1_cp4

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp4

0x1cf8,	// (0x00034032) bg_active_tab_pane_g3_cp4

0x1d01,	// (0x0003403b) bg_passive_tab_pane_g1_cp4

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4

0x1cf8,	// (0x00034032) bg_passive_tab_pane_g3_cp4

0x1d51,	// (0x0003408b) bg_active_tab_pane_g1_cp5

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp5

0x1d48,	// (0x00034082) bg_active_tab_pane_g3_cp5

0x1d51,	// (0x0003408b) bg_passive_tab_pane_g1_cp5

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5

0x1d48,	// (0x00034082) bg_passive_tab_pane_g3_cp5

0x1d5a,	// (0x00034094) list_set_graphic_pane_ParamLimits

0x1d5a,	// (0x00034094) list_set_graphic_pane

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp4

0x1d6c,	// (0x000340a6) list_set_graphic_pane_g1_ParamLimits

0x1d6c,	// (0x000340a6) list_set_graphic_pane_g1

0x1d78,	// (0x000340b2) list_set_graphic_pane_g2_ParamLimits

0x1d78,	// (0x000340b2) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00041a8d) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00041a8d) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00041e17) volume_small_pane_cp_g

0x1d9a,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1d9a,	// (0x000340d4) list_double2_large_graphic_pane_g1_cp2

0x1da6,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1da6,	// (0x000340e0) list_double2_large_graphic_pane_g2_cp2

0x1db5,	// (0x000340ef) list_double2_large_graphic_pane_g3_cp2

0x1dbd,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1dbd,	// (0x000340f7) list_double2_large_graphic_pane_t1_cp2

0x1dd3,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1dd3,	// (0x0003410d) list_double2_large_graphic_pane_t2_cp2

0x32eb,	// (0x00035625) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x32eb,	// (0x00035625) list_double_large_graphic_pane_g1_cp2

0x32fc,	// (0x00035636) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32fc,	// (0x00035636) list_double_large_graphic_pane_g2_cp2

0x1f2f,	// (0x00034269) list_double_large_graphic_pane_g3_cp2

0x330b,	// (0x00035645) list_double_large_graphic_pane_g4_cp

0x3313,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3313,	// (0x0003564d) list_double_large_graphic_pane_t1_cp2

0x332a,	// (0x00035664) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x332a,	// (0x00035664) list_double_large_graphic_pane_t2_cp2

0x1e33,	// (0x0003416d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1e33,	// (0x0003416d) list_double2_graphic_pane_g1_cp2

0x1e3f,	// (0x00034179) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1e3f,	// (0x00034179) list_double2_graphic_pane_g2_cp2

0x1e4e,	// (0x00034188) list_double2_graphic_pane_g3_cp2

0x1e56,	// (0x00034190) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1e56,	// (0x00034190) list_double2_graphic_pane_t1_cp2

0x1e6c,	// (0x000341a6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1e6c,	// (0x000341a6) list_double2_graphic_pane_t2_cp2

0x1e7e,	// (0x000341b8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1e7e,	// (0x000341b8) list_single_number_heading_pane_g1_cp2

0x1e8a,	// (0x000341c4) list_single_number_heading_pane_g2_cp2

0x1e92,	// (0x000341cc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1e92,	// (0x000341cc) list_single_number_heading_pane_t1_cp2

0x1ea8,	// (0x000341e2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1ea8,	// (0x000341e2) list_single_number_heading_pane_t2_cp2

0x1eba,	// (0x000341f4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1eba,	// (0x000341f4) list_single_number_heading_pane_t3_cp2

0x1e7e,	// (0x000341b8) list_single_heading_pane_g1_cp2_ParamLimits

0x1e7e,	// (0x000341b8) list_single_heading_pane_g1_cp2

0x1e8a,	// (0x000341c4) list_single_heading_pane_g2_cp2

0x1e92,	// (0x000341cc) list_single_heading_pane_t1_cp2_ParamLimits

0x1e92,	// (0x000341cc) list_single_heading_pane_t1_cp2

0x30f5,	// (0x0003542f) list_single_heading_pane_t2_cp2_ParamLimits

0x30f5,	// (0x0003542f) list_single_heading_pane_t2_cp2

0x304c,	// (0x00035386) list_double_graphic_pane_g1_cp2_ParamLimits

0x304c,	// (0x00035386) list_double_graphic_pane_g1_cp2

0x2b7a,	// (0x00034eb4) list_double_graphic_pane_g2_cp2_ParamLimits

0x2b7a,	// (0x00034eb4) list_double_graphic_pane_g2_cp2

0x3058,	// (0x00035392) list_double_graphic_pane_g3_cp2

0x3060,	// (0x0003539a) list_double_graphic_pane_t1_cp2_ParamLimits

0x3060,	// (0x0003539a) list_double_graphic_pane_t1_cp2

0x3076,	// (0x000353b0) list_double_graphic_pane_t2_cp2_ParamLimits

0x3076,	// (0x000353b0) list_double_graphic_pane_t2_cp2

0x156a,	// (0x000338a4) list_double_number_pane_g1_cp2_ParamLimits

0x156a,	// (0x000338a4) list_double_number_pane_g1_cp2

0x1f2f,	// (0x00034269) list_double_number_pane_g2_cp2

0x3012,	// (0x0003534c) list_double_number_pane_t1_cp2_ParamLimits

0x3012,	// (0x0003534c) list_double_number_pane_t1_cp2

0x3024,	// (0x0003535e) list_double_number_pane_t2_cp2_ParamLimits

0x3024,	// (0x0003535e) list_double_number_pane_t2_cp2

0x303a,	// (0x00035374) list_double_number_pane_t3_cp2_ParamLimits

0x303a,	// (0x00035374) list_double_number_pane_t3_cp2

0x2f75,	// (0x000352af) list_single_graphic_pane_g1_cp2_ParamLimits

0x2f75,	// (0x000352af) list_single_graphic_pane_g1_cp2

0x1f85,	// (0x000342bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x1f85,	// (0x000342bf) list_single_graphic_pane_g2_cp2

0x1f91,	// (0x000342cb) list_single_graphic_pane_g3_cp2

0x2f4d,	// (0x00035287) list_single_graphic_pane_t1_cp2_ParamLimits

0x2f4d,	// (0x00035287) list_single_graphic_pane_t1_cp2

0x1f85,	// (0x000342bf) list_single_number_pane_g1_cp2_ParamLimits

0x1f85,	// (0x000342bf) list_single_number_pane_g1_cp2

0x1f91,	// (0x000342cb) list_single_number_pane_g2_cp2

0x2f4d,	// (0x00035287) list_single_number_pane_t1_cp2_ParamLimits

0x2f4d,	// (0x00035287) list_single_number_pane_t1_cp2

0x2f63,	// (0x0003529d) list_single_number_pane_t2_cp2_ParamLimits

0x2f63,	// (0x0003529d) list_single_number_pane_t2_cp2

0x1da6,	// (0x000340e0) list_double2_pane_g1_cp2_ParamLimits

0x1da6,	// (0x000340e0) list_double2_pane_g1_cp2

0x1db5,	// (0x000340ef) list_double2_pane_g2_cp2

0x1f07,	// (0x00034241) list_double2_pane_t1_cp2_ParamLimits

0x1f07,	// (0x00034241) list_double2_pane_t1_cp2

0x1f1d,	// (0x00034257) list_double2_pane_t2_cp2_ParamLimits

0x1f1d,	// (0x00034257) list_double2_pane_t2_cp2

0x156a,	// (0x000338a4) list_double_pane_g1_cp2_ParamLimits

0x156a,	// (0x000338a4) list_double_pane_g1_cp2

0x1f2f,	// (0x00034269) list_double_pane_g2_cp2

0x1f37,	// (0x00034271) list_double_pane_t1_cp2_ParamLimits

0x1f37,	// (0x00034271) list_double_pane_t1_cp2

0x1f4d,	// (0x00034287) list_double_pane_t2_cp2_ParamLimits

0x1f4d,	// (0x00034287) list_double_pane_t2_cp2

0x1f75,	// (0x000342af) list_single_pane_cp2_g3

0x1f85,	// (0x000342bf) list_single_pane_g1_cp2_ParamLimits

0x1f85,	// (0x000342bf) list_single_pane_g1_cp2

0x1f91,	// (0x000342cb) list_single_pane_g2_cp2

0x1f99,	// (0x000342d3) list_single_pane_t1_cp2_ParamLimits

0x1f99,	// (0x000342d3) list_single_pane_t1_cp2

0x1fb1,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1fb1,	// (0x000342eb) list_single_large_graphic_pane_g1_cp2

0x1fbd,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1fbd,	// (0x000342f7) list_single_large_graphic_pane_g2_cp2

0x1fc9,	// (0x00034303) list_single_large_graphic_pane_g3_cp2

0x1fd1,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1fd1,	// (0x0003430b) list_single_large_graphic_pane_g4_cp1

0x1feb,	// (0x00034325) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1feb,	// (0x00034325) list_single_large_graphic_pane_t1_cp2

0x2f19,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2f19,	// (0x00035253) list_single_graphic_heading_pane_g1_cp2

0x2ee8,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ee8,	// (0x00035222) list_single_graphic_heading_pane_g4_cp2

0x1f91,	// (0x000342cb) list_single_graphic_heading_pane_g5_cp2

0x2f25,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f25,	// (0x0003525f) list_single_graphic_heading_pane_t1_cp2

0x2f3b,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2f3b,	// (0x00035275) list_single_graphic_heading_pane_t2_cp2

0x2edc,	// (0x00035216) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2edc,	// (0x00035216) list_single_2graphic_pane_g1_cp2

0x2ee8,	// (0x00035222) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ee8,	// (0x00035222) list_single_2graphic_pane_g2_cp2

0x1f91,	// (0x000342cb) list_single_2graphic_pane_g3_cp2

0x2ef7,	// (0x00035231) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2ef7,	// (0x00035231) list_single_2graphic_pane_g4_cp2

0x2f03,	// (0x0003523d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2f03,	// (0x0003523d) list_single_2graphic_pane_t1_cp2

0x0f99,	// (0x000332d3) list_highlight_pane_g10_cp1

0x2ac1,	// (0x00034dfb) list_highlight_pane_g1_cp1

0x2ac9,	// (0x00034e03) list_highlight_pane_g2_cp1

0x2ad1,	// (0x00034e0b) list_highlight_pane_g3_cp1

0x2ad9,	// (0x00034e13) list_highlight_pane_g4_cp1

0x2ae1,	// (0x00034e1b) list_highlight_pane_g5_cp1

0x2ae9,	// (0x00034e23) list_highlight_pane_g6_cp1

0x2af1,	// (0x00034e2b) list_highlight_pane_g7_cp1

0x2af9,	// (0x00034e33) list_highlight_pane_g8_cp1

0x2b01,	// (0x00034e3b) list_highlight_pane_g9_cp1

0x4aec,	// (0x00036e26) form_field_slider_pane_t3

0x4afa,	// (0x00036e34) form_field_slider_pane_t4

0x2a05,	// (0x00034d3f) slider_form_pane_ParamLimits

0x2a05,	// (0x00034d3f) slider_form_pane

0x0fa3,	// (0x000332dd) control_abbreviations

0x0fa3,	// (0x000332dd) control_conventions

0x0fa3,	// (0x000332dd) control_definitions

0x0fa3,	// (0x000332dd) format_table_attribute

0x313f,	// (0x00035479) bg_popup_preview_window_pane_g9

0x0fa3,	// (0x000332dd) format_table_data2

0x0fa3,	// (0x000332dd) format_table_data3

0x0fa3,	// (0x000332dd) format_table_data_example

0x0008,

0x0fa3,	// (0x000332dd) intro_purpose

0xf8ef,	// (0x00041c29) bg_popup_preview_window_pane_g

0x0fa3,	// (0x000332dd) texts_category

0x0fa3,	// (0x000332dd) texts_graphics

0x2001,	// (0x0003433b) text_digital

0x2010,	// (0x0003434a) text_primary

0x201f,	// (0x00034359) text_primary_small

0x202e,	// (0x00034368) text_secondary

0x203d,	// (0x00034377) text_title

0x35c1,	// (0x000358fb) bg_passive_tab_pane_g1_cp3_srt

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp3_srt

0x35b8,	// (0x000358f2) bg_passive_tab_pane_g3_cp3_srt

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp3_srt_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp3_srt

0x35ca,	// (0x00035904) tabs_4_active_pane_srt_g1

0xc13a,	// (0x0003e474) tabs_4_active_pane_srt_t1_ParamLimits

0xc13a,	// (0x0003e474) tabs_4_active_pane_srt_t1

0x35c1,	// (0x000358fb) bg_active_tab_pane_g1_cp3_copy1

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp3_copy1

0x35b8,	// (0x000358f2) bg_active_tab_pane_g3_cp3_copy1

0x0ff1,	// (0x0003332b) tabs_2_long_active_pane_srt_ParamLimits

0x0ff1,	// (0x0003332b) tabs_2_long_active_pane_srt

0x0ff1,	// (0x0003332b) tabs_2_long_passive_pane_srt_ParamLimits

0x0ff1,	// (0x0003332b) tabs_2_long_passive_pane_srt

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp4_srt

0x34e5,	// (0x0003581f) bg_passive_tab_pane_g1_cp4_srt

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp4_srt

0x34dc,	// (0x00035816) bg_passive_tab_pane_g3_cp4_srt

0x172f,	// (0x00033a69) bg_active_tab_pane_cp4_srt_ParamLimits

0x172f,	// (0x00033a69) bg_active_tab_pane_cp4_srt

0xbee3,	// (0x0003e21d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbee3,	// (0x0003e21d) tabs_2_long_active_pane_srt_t1

0x34e5,	// (0x0003581f) bg_active_tab_pane_g1_cp4_srt

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp4_srt

0x34dc,	// (0x00035816) bg_active_tab_pane_g3_cp4_srt

0x1134,	// (0x0003346e) tabs_3_long_active_pane_srt_ParamLimits

0x1134,	// (0x0003346e) tabs_3_long_active_pane_srt

0x1134,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1134,	// (0x0003346e) tabs_3_long_passive_pane_cp_srt

0x1134,	// (0x0003346e) tabs_3_long_passive_pane_srt_ParamLimits

0x1134,	// (0x0003346e) tabs_3_long_passive_pane_srt

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp5_srt

0x1d51,	// (0x0003408b) bg_passive_tab_pane_g1_cp5_srt

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp5_srt

0x1d48,	// (0x00034082) bg_passive_tab_pane_g3_cp5_srt

0x172f,	// (0x00033a69) bg_active_tab_pane_cp5_srt_ParamLimits

0x172f,	// (0x00033a69) bg_active_tab_pane_cp5_srt

0xbed1,	// (0x0003e20b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbed1,	// (0x0003e20b) tabs_3_long_active_pane_srt_t1

0x1d51,	// (0x0003408b) bg_active_tab_pane_g1_cp5_srt

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp5_srt

0x1d48,	// (0x00034082) bg_active_tab_pane_g3_cp5_srt

0x34ce,	// (0x00035808) navi_text_pane_srt_t1

0x34c6,	// (0x00035800) navi_icon_pane_srt_g1

0x2155,	// (0x0003448f) midp_editing_number_pane_srt

0x204c,	// (0x00034386) midp_ticker_pane_srt

0x215d,	// (0x00034497) midp_ticker_pane_srt_g1

0x2165,	// (0x0003449f) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00041aac) midp_ticker_pane_srt_g

0x216d,	// (0x000344a7) midp_ticker_pane_srt_t1

0x34b7,	// (0x000357f1) midp_editing_number_pane_t1_copy1

0x45be,	// (0x000368f8) listscroll_midp_pane

0x45be,	// (0x000368f8) midp_form_pane

0x2054,	// (0x0003438e) midp_info_popup_window_ParamLimits

0x2054,	// (0x0003438e) midp_info_popup_window

0x166f,	// (0x000339a9) bg_popup_sub_pane_cp50_ParamLimits

0x166f,	// (0x000339a9) bg_popup_sub_pane_cp50

0x272e,	// (0x00034a68) listscroll_midp_info_pane_ParamLimits

0x272e,	// (0x00034a68) listscroll_midp_info_pane

0x270e,	// (0x00034a48) listscroll_form_midp_pane_ParamLimits

0x270e,	// (0x00034a48) listscroll_form_midp_pane

0x271a,	// (0x00034a54) scroll_bar_cp050

0x4ad4,	// (0x00036e0e) list_midp_pane

0x3e52,	// (0x0003618c) signal_pane_g2_cp

0x2640,	// (0x0003497a) listscroll_midp_info_pane_t1_ParamLimits

0x2640,	// (0x0003497a) listscroll_midp_info_pane_t1

0x2658,	// (0x00034992) listscroll_midp_info_pane_t2_ParamLimits

0x2658,	// (0x00034992) listscroll_midp_info_pane_t2

0x2696,	// (0x000349d0) listscroll_midp_info_pane_t3_ParamLimits

0x2696,	// (0x000349d0) listscroll_midp_info_pane_t3

0x26d0,	// (0x00034a0a) listscroll_midp_info_pane_t4_ParamLimits

0x26d0,	// (0x00034a0a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00041b64) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00041b64) listscroll_midp_info_pane_t

0x16ef,	// (0x00033a29) scroll_pane_cp21

0x25e4,	// (0x0003491e) form_midp_field_choice_group_pane

0x25ed,	// (0x00034927) form_midp_field_text_pane

0x2626,	// (0x00034960) form_midp_field_time_pane

0x262e,	// (0x00034968) form_midp_gauge_slider_pane

0x2637,	// (0x00034971) form_midp_gauge_wait_pane

0x0fa3,	// (0x000332dd) form_midp_image_pane

0xe6c8,	// (0x00040a02) list_single_midp_pane_ParamLimits

0xe6c8,	// (0x00040a02) list_single_midp_pane

0x4ab4,	// (0x00036dee) form_midp_field_text_pane_t1

0x246f,	// (0x000347a9) input_focus_pane_cp050

0x25d3,	// (0x0003490d) list_midp_form_text_pane

0x25a2,	// (0x000348dc) form_midp_field_choice_group_pane_t1

0x25b0,	// (0x000348ea) input_focus_pane_cp051

0x25c4,	// (0x000348fe) list_midp_choice_pane

0x0fa3,	// (0x000332dd) status_idle_pane

0x2586,	// (0x000348c0) form_midp_field_time_pane_t1

0x0f99,	// (0x000332d3) wait_anim_pane_g2_copy1

0x2594,	// (0x000348ce) form_midp_field_time_pane_t2

0x0001,

0x20bf,	// (0x000343f9) aid_navinavi_width_2_pane

0xf825,	// (0x00041b5f) form_midp_field_time_pane_t

0x0fa3,	// (0x000332dd) input_focus_pane_cp052

0x0fa3,	// (0x000332dd) bg_input_focus_pane_cp040

0x2562,	// (0x0003489c) form_midp_gauge_slider_pane_t1

0x2570,	// (0x000348aa) form_midp_gauge_slider_pane_t2

0x4a98,	// (0x00036dd2) form_midp_gauge_slider_pane_t3

0x4aa6,	// (0x00036de0) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00041b56) form_midp_gauge_slider_pane_t

0x257e,	// (0x000348b8) form_midp_slider_pane

0x0ff1,	// (0x0003332b) bg_input_focus_pane_cp041_ParamLimits

0x0ff1,	// (0x0003332b) bg_input_focus_pane_cp041

0x2532,	// (0x0003486c) form_midp_gauge_wait_pane_t1_ParamLimits

0x2532,	// (0x0003486c) form_midp_gauge_wait_pane_t1

0x2544,	// (0x0003487e) form_midp_gauge_wait_pane_t2_ParamLimits

0x2544,	// (0x0003487e) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00041b51) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00041b51) form_midp_gauge_wait_pane_t

0x2556,	// (0x00034890) form_midp_wait_pane_ParamLimits

0x2556,	// (0x00034890) form_midp_wait_pane

0x24fc,	// (0x00034836) form_midp_image_pane_g1

0x2505,	// (0x0003483f) form_midp_image_pane_t1

0x2514,	// (0x0003484e) form_midp_image_pane_t2

0x2523,	// (0x0003485d) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00041b4a) form_midp_image_pane_t

0x24f3,	// (0x0003482d) list_single_midp_pane_g1

0xe6b9,	// (0x000409f3) list_single_midp_pane_t1

0x4a85,	// (0x00036dbf) list_midp_form_item_pane_ParamLimits

0x4a85,	// (0x00036dbf) list_midp_form_item_pane

0x2067,	// (0x000343a1) list_midp_form_item_pane_t1

0x2076,	// (0x000343b0) midp_ticker_pane_g1

0x2082,	// (0x000343bc) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00041a92) midp_ticker_pane_g

0x208e,	// (0x000343c8) midp_ticker_pane_t1

0x3561,	// (0x0003589b) midp_editing_number_pane_t1

0x353f,	// (0x00035879) midp_editing_number_pane

0x354e,	// (0x00035888) midp_ticker_pane

0x34a7,	// (0x000357e1) ai_message_heading_pane

0x0fa3,	// (0x000332dd) bg_popup_window_pane_cp14

0x34af,	// (0x000357e9) listscroll_ai_message_pane

0x3431,	// (0x0003576b) ai_message_heading_pane_g1_ParamLimits

0x3431,	// (0x0003576b) ai_message_heading_pane_g1

0x343d,	// (0x00035777) ai_message_heading_pane_g2_ParamLimits

0x343d,	// (0x00035777) ai_message_heading_pane_g2

0x3449,	// (0x00035783) ai_message_heading_pane_g3_ParamLimits

0x3449,	// (0x00035783) ai_message_heading_pane_g3

0x3455,	// (0x0003578f) ai_message_heading_pane_g4_ParamLimits

0x3455,	// (0x0003578f) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00041c8b) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00041c8b) ai_message_heading_pane_g

0x3461,	// (0x0003579b) ai_message_heading_pane_t1_ParamLimits

0x3461,	// (0x0003579b) ai_message_heading_pane_t1

0x347b,	// (0x000357b5) ai_message_heading_pane_t2_ParamLimits

0x347b,	// (0x000357b5) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00041c94) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00041c94) ai_message_heading_pane_t

0x348d,	// (0x000357c7) bg_popup_heading_pane_cp1_ParamLimits

0x348d,	// (0x000357c7) bg_popup_heading_pane_cp1

0x341f,	// (0x00035759) list_ai_message_pane_ParamLimits

0x341f,	// (0x00035759) list_ai_message_pane

0x16ef,	// (0x00033a29) scroll_pane_cp10

0x33bb,	// (0x000356f5) list_ai_message_pane_g1

0x33c3,	// (0x000356fd) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00041c68) list_ai_message_pane_g

0x33cb,	// (0x00035705) list_ai_message_pane_t1_ParamLimits

0x33cb,	// (0x00035705) list_ai_message_pane_t1

0x33e0,	// (0x0003571a) list_ai_message_pane_t2_ParamLimits

0x33e0,	// (0x0003571a) list_ai_message_pane_t2

0x33f5,	// (0x0003572f) list_ai_message_pane_t3_ParamLimits

0x33f5,	// (0x0003572f) list_ai_message_pane_t3

0x340a,	// (0x00035744) list_ai_message_pane_t4_ParamLimits

0x340a,	// (0x00035744) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00041c6d) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00041c6d) list_ai_message_pane_t

0x4bed,	// (0x00036f27) cell_ai_soft_ind_pane_ParamLimits

0x4bed,	// (0x00036f27) cell_ai_soft_ind_pane

0x20a0,	// (0x000343da) cell_ai_soft_ind_pane_g1_ParamLimits

0x20a0,	// (0x000343da) cell_ai_soft_ind_pane_g1

0x0fa3,	// (0x000332dd) grid_highlight_cp1

0x20ad,	// (0x000343e7) text_secondary_cp56_ParamLimits

0x20ad,	// (0x000343e7) text_secondary_cp56

0x3390,	// (0x000356ca) example_general_pane_ParamLimits

0x3390,	// (0x000356ca) example_general_pane

0x339c,	// (0x000356d6) example_parent_pane_g1_ParamLimits

0x339c,	// (0x000356d6) example_parent_pane_g1

0x33a8,	// (0x000356e2) example_parent_pane_t1_ParamLimits

0x33a8,	// (0x000356e2) example_parent_pane_t1

0xba11,	// (0x0003dd4b) popup_preview_text_window_ParamLimits

0xba11,	// (0x0003dd4b) popup_preview_text_window

0x1f7d,	// (0x000342b7) list_single_pane_cp2_g4

0x11ea,	// (0x00033524) bg_popup_preview_window_pane_ParamLimits

0x11ea,	// (0x00033524) bg_popup_preview_window_pane

0x3147,	// (0x00035481) popup_preview_text_window_t1_ParamLimits

0x3147,	// (0x00035481) popup_preview_text_window_t1

0x3165,	// (0x0003549f) popup_preview_text_window_t2_ParamLimits

0x3165,	// (0x0003549f) popup_preview_text_window_t2

0x31ae,	// (0x000354e8) popup_preview_text_window_t3_ParamLimits

0x31ae,	// (0x000354e8) popup_preview_text_window_t3

0x31f3,	// (0x0003552d) popup_preview_text_window_t4_ParamLimits

0x31f3,	// (0x0003552d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00041c3c) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00041c3c) popup_preview_text_window_t

0x3271,	// (0x000355ab) scroll_pane_cp11

0x23e3,	// (0x0003471d) bg_popup_preview_window_pane_g1

0x3107,	// (0x00035441) bg_popup_preview_window_pane_g2

0x310f,	// (0x00035449) bg_popup_preview_window_pane_g3

0x3117,	// (0x00035451) bg_popup_preview_window_pane_g4

0x311f,	// (0x00035459) bg_popup_preview_window_pane_g5

0x3127,	// (0x00035461) bg_popup_preview_window_pane_g6

0x312f,	// (0x00035469) bg_popup_preview_window_pane_g7

0x3137,	// (0x00035471) bg_popup_preview_window_pane_g8

0xad45,	// (0x0003d07f) aid_popup_width_pane

0xb9f3,	// (0x0003dd2d) popup_midp_note_alarm_window_ParamLimits

0xb9f3,	// (0x0003dd2d) popup_midp_note_alarm_window

0x15ba,	// (0x000338f4) data_form_pane_ParamLimits

0xe3df,	// (0x00040719) form_field_data_pane_g1

0xe3e7,	// (0x00040721) form_field_data_pane_t1_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_ParamLimits

0xe3ff,	// (0x00040739) data_form_wide_pane_ParamLimits

0xe410,	// (0x0004074a) form_field_data_wide_pane_g1

0xe41c,	// (0x00040756) form_field_data_wide_pane_t1_ParamLimits

0x13da,	// (0x00033714) input_focus_pane_cp6_ParamLimits

0x445e,	// (0x00036798) input_popup_find_pane_g1_ParamLimits

0x445e,	// (0x00036798) input_popup_find_pane_g1

0xb263,	// (0x0003d59d) aid_navi_side_left_pane

0xb274,	// (0x0003d5ae) aid_navi_side_right_pane

0x2bbf,	// (0x00034ef9) bg_popup_window_pane_cp30_ParamLimits

0x2bbf,	// (0x00034ef9) bg_popup_window_pane_cp30

0x2c39,	// (0x00034f73) popup_midp_note_alarm_window_g1_ParamLimits

0x2c39,	// (0x00034f73) popup_midp_note_alarm_window_g1

0x2c69,	// (0x00034fa3) popup_midp_note_alarm_window_t1_ParamLimits

0x2c69,	// (0x00034fa3) popup_midp_note_alarm_window_t1

0x2d0a,	// (0x00035044) popup_midp_note_alarm_window_t2_ParamLimits

0x2d0a,	// (0x00035044) popup_midp_note_alarm_window_t2

0x2db8,	// (0x000350f2) popup_midp_note_alarm_window_t3_ParamLimits

0x2db8,	// (0x000350f2) popup_midp_note_alarm_window_t3

0x2de0,	// (0x0003511a) popup_midp_note_alarm_window_t4_ParamLimits

0x2de0,	// (0x0003511a) popup_midp_note_alarm_window_t4

0x2e00,	// (0x0003513a) popup_midp_note_alarm_window_t5_ParamLimits

0x2e00,	// (0x0003513a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00041bd9) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00041bd9) popup_midp_note_alarm_window_t

0x2eac,	// (0x000351e6) wait_bar_pane_cp1_ParamLimits

0x2eac,	// (0x000351e6) wait_bar_pane_cp1

0x0fa3,	// (0x000332dd) wait_anim_pane_copy1

0x0fa3,	// (0x000332dd) wait_border_pane_copy1

0x28d2,	// (0x00034c0c) wait_border_pane_g1_copy1

0xe436,	// (0x00040770) form_field_popup_pane_g1

0xe43e,	// (0x00040778) form_field_popup_pane_t1_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_cp7_ParamLimits

0x15f4,	// (0x0003392e) list_form_pane_ParamLimits

0xe456,	// (0x00040790) form_field_popup_wide_pane_g1

0xe45e,	// (0x00040798) form_field_popup_wide_pane_t1_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_cp8_ParamLimits

0x1600,	// (0x0003393a) list_form_wide_pane_ParamLimits

0x35f1,	// (0x0003592b) aid_size_cell_graphic_pane

0xe4e8,	// (0x00040822) data_form_pane_t1_ParamLimits

0xe704,	// (0x00040a3e) data_form_wide_pane_t1_ParamLimits

0x47d9,	// (0x00036b13) bg_status_flat_pane

0x41e3,	// (0x0003651d) title_pane_t1_ParamLimits

0x0fb9,	// (0x000332f3) title_pane_t2_ParamLimits

0x0fdf,	// (0x00033319) title_pane_t3_ParamLimits

0xf557,	// (0x00041891) title_pane_t_ParamLimits

0x1a91,	// (0x00033dcb) level_1_signal_ParamLimits

0x1a9e,	// (0x00033dd8) level_2_signal_ParamLimits

0x1aab,	// (0x00033de5) level_3_signal_ParamLimits

0x1ab8,	// (0x00033df2) level_4_signal_ParamLimits

0x1ac5,	// (0x00033dff) level_5_signal_ParamLimits

0x1ad2,	// (0x00033e0c) level_6_signal_ParamLimits

0x1adf,	// (0x00033e19) level_7_signal_ParamLimits

0x1a91,	// (0x00033dcb) level_1_battery_ParamLimits

0x1a9e,	// (0x00033dd8) level_2_battery_ParamLimits

0x1aab,	// (0x00033de5) level_3_battery_ParamLimits

0x1ab8,	// (0x00033df2) level_4_battery_ParamLimits

0x1ac5,	// (0x00033dff) level_5_battery_ParamLimits

0x1ad2,	// (0x00033e0c) level_6_battery_ParamLimits

0x1adf,	// (0x00033e19) level_7_battery_ParamLimits

0x2ac1,	// (0x00034dfb) bg_status_flat_pane_g1

0x2ac9,	// (0x00034e03) bg_status_flat_pane_g2

0x2ad1,	// (0x00034e0b) bg_status_flat_pane_g3

0x2ad9,	// (0x00034e13) bg_status_flat_pane_g4

0x2ae1,	// (0x00034e1b) bg_status_flat_pane_g5

0x2ae9,	// (0x00034e23) bg_status_flat_pane_g6

0x2af1,	// (0x00034e2b) bg_status_flat_pane_g7

0x424b,	// (0x00036585) tabs_3_active_pane_t1_ParamLimits

0x424b,	// (0x00036585) tabs_3_passive_pane_t1_ParamLimits

0x425d,	// (0x00036597) tabs_4_active_pane_t1_ParamLimits

0x425d,	// (0x00036597) tabs_4_1_passive_pane_t1_ParamLimits

0x446a,	// (0x000367a4) tabs_2_active_pane_t1_ParamLimits

0x446a,	// (0x000367a4) tabs_2_passive_pane_t1_ParamLimits

0x172f,	// (0x00033a69) bg_active_tab_pane_cp4_ParamLimits

0x447c,	// (0x000367b6) tabs_2_long_active_pane_t1_ParamLimits

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp4_ParamLimits

0xbc82,	// (0x0003dfbc) list_single_midp_graphic_pane_t1_ParamLimits

0x172f,	// (0x00033a69) bg_active_tab_pane_cp5_ParamLimits

0x449b,	// (0x000367d5) tabs_3_long_active_pane_t1_ParamLimits

0x448f,	// (0x000367c9) bg_passive_tab_pane_cp5_ParamLimits

0xbc82,	// (0x0003dfbc) list_single_midp_graphic_pane_t1

0x47d9,	// (0x00036b13) bg_status_flat_pane_ParamLimits

0x22b8,	// (0x000345f2) indicator_pane_cp2_ParamLimits

0x22b8,	// (0x000345f2) indicator_pane_cp2

0x491d,	// (0x00036c57) navi_pane_srt_ParamLimits

0x491d,	// (0x00036c57) navi_pane_srt

0x22e0,	// (0x0003461a) popup_clock_digital_analogue_window_cp1

0x1045,	// (0x0003337f) indicator_pane_t1

0x204c,	// (0x00034386) copy_highlight_pane

0x204c,	// (0x00034386) cursor_graphics_pane

0x204c,	// (0x00034386) graphic_within_text_pane

0x204c,	// (0x00034386) link_highlight_pane

0x3234,	// (0x0003556e) popup_preview_text_window_t5_ParamLimits

0x3234,	// (0x0003556e) popup_preview_text_window_t5

0x20c7,	// (0x00034401) cursor_digital_pane

0x20c7,	// (0x00034401) cursor_primary_pane

0x20d8,	// (0x00034412) cursor_primary_small_pane

0x20e0,	// (0x0003441a) cursor_secondary_pane

0x20e8,	// (0x00034422) cursor_title_pane

0x20c7,	// (0x00034401) link_highlight_digital_pane

0x20cf,	// (0x00034409) link_highlight_primary_pane

0x20d8,	// (0x00034412) link_highlight_primary_small_pane

0x20e0,	// (0x0003441a) link_highlight_secondary_pane

0x20e8,	// (0x00034422) link_highlight_title_pane

0x20c7,	// (0x00034401) copy_highlight_digital_pane

0x20c7,	// (0x00034401) copy_highlight_primary_pane

0x20d8,	// (0x00034412) copy_highlight_primary_small_pane

0x20e0,	// (0x0003441a) copy_highlight_secondary_pane

0x20e8,	// (0x00034422) copy_highlight_title_pane

0x20e0,	// (0x0003441a) graphic_text_digital_pane

0x2b41,	// (0x00034e7b) graphic_text_primary_pane

0x2b4a,	// (0x00034e84) graphic_text_primary_small_pane

0x20d8,	// (0x00034412) graphic_text_secondary_pane

0x20c7,	// (0x00034401) graphic_text_title_pane

0x4665,	// (0x0003699f) cursor_primary_pane_g1

0x2b33,	// (0x00034e6d) cursor_text_primary_t1

0x4b18,	// (0x00036e52) cursor_primary_small_pane_g1

0x2b25,	// (0x00034e5f) cursor_text_primary_small_t1

0x4b10,	// (0x00036e4a) cursor_primary_small_pane_g1_copy1

0x2b17,	// (0x00034e51) cursor_text_primary_small_t1_copy1

0x2b09,	// (0x00034e43) cursor_text_title_t1

0x4b08,	// (0x00036e42) cursor_title_pane_g1

0x4665,	// (0x0003699f) cursor_digital_pane_g1

0x20f0,	// (0x0003442a) cursor_text_digital_t1

0x20fe,	// (0x00034438) link_highlight_primary_pane_g1

0x2ab2,	// (0x00034dec) link_highlight_primary_pane_t1

0x20fe,	// (0x00034438) link_highlight_primary_small_pane_g1

0x2106,	// (0x00034440) link_highlight_primary_small_pane_t1

0x2115,	// (0x0003444f) link_highlight_secondary_pane_g1

0x211d,	// (0x00034457) link_highlight_secondary_pane_t1

0x2a17,	// (0x00034d51) link_highlight_title_pane_g1

0x2a2e,	// (0x00034d68) link_highlight_title_pane_t1

0x2a17,	// (0x00034d51) link_highlight_digital_pane_g1

0x2a1f,	// (0x00034d59) link_highlight_digital_pane_t1

0x28ed,	// (0x00034c27) copy_highlight_primary_pane_g1

0x2913,	// (0x00034c4d) copy_highlight_primary_pane_t1

0x28ed,	// (0x00034c27) copy_highlight_primary_small_pane_g1

0x2904,	// (0x00034c3e) copy_highlight_primary_small_pane_t1

0x212c,	// (0x00034466) copy_highlight_secondary_pane_g1

0x2134,	// (0x0003446e) copy_highlight_secondary_pane_t1

0x28ed,	// (0x00034c27) copy_highlight_title_pane_g1

0x28f5,	// (0x00034c2f) copy_highlight_title_pane_t1

0x28ed,	// (0x00034c27) copy_highlight_digital_pane_g1

0x377f,	// (0x00035ab9) copy_highlight_digital_pane_t1

0x36d3,	// (0x00035a0d) graphic_text_primary_pane_g1

0x3763,	// (0x00035a9d) graphic_text_primary_pane_t1

0x3771,	// (0x00035aab) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00041d08) graphic_text_primary_pane_t

0x373f,	// (0x00035a79) graphic_text_primary_small_pane_g1

0x3747,	// (0x00035a81) graphic_text_primary_small_pane_t1

0x3755,	// (0x00035a8f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00041d03) graphic_text_primary_small_pane_t

0x371b,	// (0x00035a55) graphic_text_secondary_pane_g1

0x3723,	// (0x00035a5d) graphic_text_secondary_pane_t1

0x3731,	// (0x00035a6b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00041cfe) graphic_text_secondary_pane_t

0x36f7,	// (0x00035a31) graphic_text_title_pane_g1

0x36ff,	// (0x00035a39) graphic_text_title_pane_t1

0x370d,	// (0x00035a47) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00041cf9) graphic_text_title_pane_t

0x36d3,	// (0x00035a0d) graphic_text_digital_pane_g1

0x36db,	// (0x00035a15) graphic_text_digital_pane_t1

0x36e9,	// (0x00035a23) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00041cf4) graphic_text_digital_pane_t

0x0ff1,	// (0x0003332b) navi_icon_pane_srt_ParamLimits

0x0ff1,	// (0x0003332b) navi_icon_pane_srt

0x0fa3,	// (0x000332dd) navi_midp_pane_srt

0x0fa3,	// (0x000332dd) navi_navi_pane_srt

0x0ff1,	// (0x0003332b) navi_text_pane_srt_ParamLimits

0x0ff1,	// (0x0003332b) navi_text_pane_srt

0x369e,	// (0x000359d8) navi_navi_icon_text_pane_srt

0x36b8,	// (0x000359f2) navi_navi_pane_srt_g1_ParamLimits

0x36b8,	// (0x000359f2) navi_navi_pane_srt_g1

0x36a6,	// (0x000359e0) navi_navi_pane_srt_g2_ParamLimits

0x36a6,	// (0x000359e0) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00041cef) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00041cef) navi_navi_pane_srt_g

0x36ca,	// (0x00035a04) navi_navi_tabs_pane_srt

0x369e,	// (0x000359d8) navi_navi_text_pane_srt

0x369e,	// (0x000359d8) navi_navi_volume_pane_srt

0x368f,	// (0x000359c9) navi_navi_text_pane_srt_t1

0xc260,	// (0x0003e59a) navi_navi_volume_pane_srt_g1

0xc268,	// (0x0003e5a2) volume_small_pane_srt_ParamLimits

0xc268,	// (0x0003e5a2) volume_small_pane_srt

0xb51e,	// (0x0003d858) volume_small_pane_srt_g1_ParamLimits

0xb51e,	// (0x0003d858) volume_small_pane_srt_g1

0xb52e,	// (0x0003d868) volume_small_pane_srt_g2_ParamLimits

0xb52e,	// (0x0003d868) volume_small_pane_srt_g2

0xb53f,	// (0x0003d879) volume_small_pane_srt_g3_ParamLimits

0xb53f,	// (0x0003d879) volume_small_pane_srt_g3

0xb550,	// (0x0003d88a) volume_small_pane_srt_g4_ParamLimits

0xb550,	// (0x0003d88a) volume_small_pane_srt_g4

0xb561,	// (0x0003d89b) volume_small_pane_srt_g5_ParamLimits

0xb561,	// (0x0003d89b) volume_small_pane_srt_g5

0xb572,	// (0x0003d8ac) volume_small_pane_srt_g6_ParamLimits

0xb572,	// (0x0003d8ac) volume_small_pane_srt_g6

0xb583,	// (0x0003d8bd) volume_small_pane_srt_g7_ParamLimits

0xb583,	// (0x0003d8bd) volume_small_pane_srt_g7

0xb594,	// (0x0003d8ce) volume_small_pane_srt_g8_ParamLimits

0xb594,	// (0x0003d8ce) volume_small_pane_srt_g8

0xb5a5,	// (0x0003d8df) volume_small_pane_srt_g9_ParamLimits

0xb5a5,	// (0x0003d8df) volume_small_pane_srt_g9

0xb5b6,	// (0x0003d8f0) volume_small_pane_srt_g10_ParamLimits

0xb5b6,	// (0x0003d8f0) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00041a97) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00041a97) volume_small_pane_srt_g

0x1293,	// (0x000335cd) query_popup_data_pane_cp2

0x3675,	// (0x000359af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3675,	// (0x000359af) navi_navi_icon_text_pane_srt_t1

0x2b41,	// (0x00034e7b) navi_tabs_2_long_pane_srt

0x2b41,	// (0x00034e7b) navi_tabs_2_pane_srt

0x2b41,	// (0x00034e7b) navi_tabs_3_long_pane_srt

0x2b41,	// (0x00034e7b) navi_tabs_3_pane_srt

0x2b41,	// (0x00034e7b) navi_tabs_4_pane_srt

0xc240,	// (0x0003e57a) tabs_2_active_pane_srt_ParamLimits

0xc240,	// (0x0003e57a) tabs_2_active_pane_srt

0xc250,	// (0x0003e58a) tabs_2_passive_pane_srt_ParamLimits

0xc250,	// (0x0003e58a) tabs_2_passive_pane_srt

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp1_srt_ParamLimits

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp1_srt

0x365c,	// (0x00035996) bg_passive_tab_pane_g1_cp1_srt

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp1_srt

0x3653,	// (0x0003598d) bg_passive_tab_pane_g3_cp1_srt

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp1_srt_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp1_srt

0x3665,	// (0x0003599f) tabs_2_active_pane_srt_g1

0xc22e,	// (0x0003e568) tabs_2_active_pane_srt_t1_ParamLimits

0xc22e,	// (0x0003e568) tabs_2_active_pane_srt_t1

0x365c,	// (0x00035996) bg_active_tab_pane_g1_cp1_srt

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp1_srt

0x3653,	// (0x0003598d) bg_active_tab_pane_g3_cp1_srt

0xc1fb,	// (0x0003e535) tabs_3_active_pane_srt_ParamLimits

0xc1fb,	// (0x0003e535) tabs_3_active_pane_srt

0xc20c,	// (0x0003e546) tabs_3_passive_pane_cp_srt_ParamLimits

0xc20c,	// (0x0003e546) tabs_3_passive_pane_cp_srt

0xc21d,	// (0x0003e557) tabs_3_passive_pane_srt_ParamLimits

0xc21d,	// (0x0003e557) tabs_3_passive_pane_srt

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp2_srt_ParamLimits

0x21ff,	// (0x00034539) bg_passive_tab_pane_cp2_srt

0x214c,	// (0x00034486) bg_passive_tab_pane_g1_cp2_srt

0x1cc2,	// (0x00033ffc) bg_passive_tab_pane_g2_cp2_srt

0x2143,	// (0x0003447d) bg_passive_tab_pane_g3_cp2_srt

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp2_srt_ParamLimits

0x0ff1,	// (0x0003332b) bg_active_tab_pane_cp2_srt

0x364b,	// (0x00035985) tabs_3_active_pane_srt_g1

0xc1e9,	// (0x0003e523) tabs_3_active_pane_srt_t1_ParamLimits

0xc1e9,	// (0x0003e523) tabs_3_active_pane_srt_t1

0x214c,	// (0x00034486) bg_active_tab_pane_g1_cp2_srt

0x1cc2,	// (0x00033ffc) bg_active_tab_pane_g2_cp2_srt

0x2143,	// (0x0003447d) bg_active_tab_pane_g3_cp2_srt

0xc1a1,	// (0x0003e4db) tabs_4_active_pane_srt_ParamLimits

0xc1a1,	// (0x0003e4db) tabs_4_active_pane_srt

0xc1b3,	// (0x0003e4ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc1b3,	// (0x0003e4ed) tabs_4_passive_pane_cp2_srt

0xb722,	// (0x0003da5c) aid_size_cell_toolbar

0x448f,	// (0x000367c9) main_idle_act_pane_ParamLimits

0xb899,	// (0x0003dbd3) popup_large_graphic_colour_window_ParamLimits

0xbb5e,	// (0x0003de98) popup_toolbar_window_ParamLimits

0xbb5e,	// (0x0003de98) popup_toolbar_window

0x3570,	// (0x000358aa) list_single_graphic_2heading_pane_ParamLimits

0x3570,	// (0x000358aa) list_single_graphic_2heading_pane

0x18db,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane

0x18ed,	// (0x00033c27) aid_size_cell_apps_grid_prt_pane

0x21ff,	// (0x00034539) bg_wml_button_pane_cp1_ParamLimits

0x21ff,	// (0x00034539) bg_wml_button_pane_cp1

0x4ab4,	// (0x00036dee) form_midp_field_text_pane_t1_ParamLimits

0x246f,	// (0x000347a9) input_focus_pane_cp050_ParamLimits

0x25d3,	// (0x0003490d) list_midp_form_text_pane_ParamLimits

0x25b0,	// (0x000348ea) input_focus_pane_cp051_ParamLimits

0x25c4,	// (0x000348fe) list_midp_choice_pane_ParamLimits

0x2b95,	// (0x00034ecf) list_single_2graphic_pane_cp3_ParamLimits

0x2b95,	// (0x00034ecf) list_single_2graphic_pane_cp3

0x4a67,	// (0x00036da1) list_single_midp_graphic_pane_ParamLimits

0x4a67,	// (0x00036da1) list_single_midp_graphic_pane

0xacd3,	// (0x0003d00d) list_single_graphic_2heading_pane_g1_ParamLimits

0xacd3,	// (0x0003d00d) list_single_graphic_2heading_pane_g1

0xacdf,	// (0x0003d019) list_single_graphic_2heading_pane_g4_ParamLimits

0xacdf,	// (0x0003d019) list_single_graphic_2heading_pane_g4

0xaceb,	// (0x0003d025) list_single_graphic_2heading_pane_g5_ParamLimits

0xaceb,	// (0x0003d025) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00041aea) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00041aea) list_single_graphic_2heading_pane_g

0xacf7,	// (0x0003d031) list_single_graphic_2heading_pane_t1_ParamLimits

0xacf7,	// (0x0003d031) list_single_graphic_2heading_pane_t1

0xad0b,	// (0x0003d045) list_single_graphic_2heading_pane_t2_ParamLimits

0xad0b,	// (0x0003d045) list_single_graphic_2heading_pane_t2

0xad25,	// (0x0003d05f) list_single_graphic_2heading_pane_t3_ParamLimits

0xad25,	// (0x0003d05f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00041af1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00041af1) list_single_graphic_2heading_pane_t

0x2323,	// (0x0003465d) bg_popup_sub_pane_cp2

0x234d,	// (0x00034687) grid_toobar_pane

0xbbfb,	// (0x0003df35) cell_toolbar_pane_ParamLimits

0xbbfb,	// (0x0003df35) cell_toolbar_pane

0x2387,	// (0x000346c1) cell_toolbar_pane_g1_ParamLimits

0x2387,	// (0x000346c1) cell_toolbar_pane_g1

0x239b,	// (0x000346d5) cell_toolbar_pane_g2_ParamLimits

0x239b,	// (0x000346d5) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00041aff) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00041aff) cell_toolbar_pane_g

0x23bd,	// (0x000346f7) grid_highlight_pane_cp2_ParamLimits

0x23bd,	// (0x000346f7) grid_highlight_pane_cp2

0x23d7,	// (0x00034711) toolbar_button_pane

0x23e3,	// (0x0003471d) toolbar_button_pane_g1

0x23f3,	// (0x0003472d) toolbar_button_pane_g2

0x23eb,	// (0x00034725) toolbar_button_pane_g3

0x2403,	// (0x0003473d) toolbar_button_pane_g4

0x23fb,	// (0x00034735) toolbar_button_pane_g5

0x240b,	// (0x00034745) toolbar_button_pane_g6

0x2413,	// (0x0003474d) toolbar_button_pane_g7

0x2423,	// (0x0003475d) toolbar_button_pane_g8

0x241b,	// (0x00034755) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00041b04) toolbar_button_pane_g

0xbc2d,	// (0x0003df67) list_single_2graphic_pane_g1_cp3_ParamLimits

0xbc2d,	// (0x0003df67) list_single_2graphic_pane_g1_cp3

0xbc39,	// (0x0003df73) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc39,	// (0x0003df73) list_single_2graphic_pane_g2_cp3

0xbc48,	// (0x0003df82) list_single_2graphic_pane_g3_cp3

0xbc50,	// (0x0003df8a) list_single_2graphic_pane_g4_cp3_ParamLimits

0xbc50,	// (0x0003df8a) list_single_2graphic_pane_g4_cp3

0xbc5c,	// (0x0003df96) list_single_2graphic_pane_t1_cp3_ParamLimits

0xbc5c,	// (0x0003df96) list_single_2graphic_pane_t1_cp3

0xbc76,	// (0x0003dfb0) list_single_midp_graphic_pane_g2_ParamLimits

0xbc76,	// (0x0003dfb0) list_single_midp_graphic_pane_g2

0xacb7,	// (0x0003cff1) aid_zoom_text_primary

0xb72a,	// (0x0003da64) aid_zoom_text_secondary

0x46b9,	// (0x000369f3) status_small_pane_g7_ParamLimits

0x46b9,	// (0x000369f3) status_small_pane_g7

0x46dc,	// (0x00036a16) status_small_pane_t1_ParamLimits

0x41c6,	// (0x00036500) title_pane_g2

0x0003,

0xf54e,	// (0x00041888) title_pane_g

0x4379,	// (0x000366b3) aid_size_cell_colour_1_pane_ParamLimits

0x4379,	// (0x000366b3) aid_size_cell_colour_1_pane

0x438d,	// (0x000366c7) aid_size_cell_colour_2_pane_ParamLimits

0x438d,	// (0x000366c7) aid_size_cell_colour_2_pane

0x43a1,	// (0x000366db) aid_size_cell_colour_3_pane_ParamLimits

0x43a1,	// (0x000366db) aid_size_cell_colour_3_pane

0x43b5,	// (0x000366ef) aid_size_cell_colour_4_pane_ParamLimits

0x43b5,	// (0x000366ef) aid_size_cell_colour_4_pane

0xb19f,	// (0x0003d4d9) title_pane_stacon_g1_ParamLimits

0xb19f,	// (0x0003d4d9) title_pane_stacon_g1

0x296a,	// (0x00034ca4) popup_note_wait_window_g3_ParamLimits

0x296a,	// (0x00034ca4) popup_note_wait_window_g3

0x29e0,	// (0x00034d1a) popup_note_wait_window_t5_ParamLimits

0x29e0,	// (0x00034d1a) popup_note_wait_window_t5

0x0fa3,	// (0x000332dd) main_feb_china_hwr_fs_writing_pane

0xb7a6,	// (0x0003dae0) popup_feb_china_hwr_fs_window_ParamLimits

0xb7a6,	// (0x0003dae0) popup_feb_china_hwr_fs_window

0xbc98,	// (0x0003dfd2) aid_size_cell_hwr_fs_ParamLimits

0xbc98,	// (0x0003dfd2) aid_size_cell_hwr_fs

0x246f,	// (0x000347a9) bg_popup_sub_pane_cp3_ParamLimits

0x246f,	// (0x000347a9) bg_popup_sub_pane_cp3

0xbcad,	// (0x0003dfe7) grid_hwr_fs_pane_ParamLimits

0xbcad,	// (0x0003dfe7) grid_hwr_fs_pane

0xbcc1,	// (0x0003dffb) linegrid_hwr_fs_pane_ParamLimits

0xbcc1,	// (0x0003dffb) linegrid_hwr_fs_pane

0xbcd1,	// (0x0003e00b) cell_hwr_fs_pane_ParamLimits

0xbcd1,	// (0x0003e00b) cell_hwr_fs_pane

0x247b,	// (0x000347b5) linegrid_hwr_fs_pane_g1_ParamLimits

0x247b,	// (0x000347b5) linegrid_hwr_fs_pane_g1

0x4a3b,	// (0x00036d75) linegrid_hwr_fs_pane_g2_ParamLimits

0x4a3b,	// (0x00036d75) linegrid_hwr_fs_pane_g2

0x2487,	// (0x000347c1) linegrid_hwr_fs_pane_g3_ParamLimits

0x2487,	// (0x000347c1) linegrid_hwr_fs_pane_g3

0xbcef,	// (0x0003e029) linegrid_hwr_fs_pane_g4_ParamLimits

0xbcef,	// (0x0003e029) linegrid_hwr_fs_pane_g4

0xbd09,	// (0x0003e043) linegrid_hwr_fs_pane_g5_ParamLimits

0xbd09,	// (0x0003e043) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00041b2f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00041b2f) linegrid_hwr_fs_pane_g

0x2493,	// (0x000347cd) cell_hwr_fs_pane_g1_ParamLimits

0x2493,	// (0x000347cd) cell_hwr_fs_pane_g1

0x22f1,	// (0x0003462b) cell_hwr_fs_pane_g2_ParamLimits

0x22f1,	// (0x0003462b) cell_hwr_fs_pane_g2

0x4a4d,	// (0x00036d87) cell_hwr_fs_pane_g3_ParamLimits

0x4a4d,	// (0x00036d87) cell_hwr_fs_pane_g3

0x4a5a,	// (0x00036d94) cell_hwr_fs_pane_g4_ParamLimits

0x4a5a,	// (0x00036d94) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00041b3a) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00041b3a) cell_hwr_fs_pane_g

0xbd1f,	// (0x0003e059) cell_hwr_fs_pane_t1

0x0fa3,	// (0x000332dd) grid_highlight_pane_cp6

0x0fa3,	// (0x000332dd) main_idle_act2_pane

0x16d6,	// (0x00033a10) aid_inside_area_popup_secondary

0x4b20,	// (0x00036e5a) aid_inside_area_window_primary_ParamLimits

0x4b20,	// (0x00036e5a) aid_inside_area_window_primary

0x378e,	// (0x00035ac8) ai2_news_ticker_pane

0x3796,	// (0x00035ad0) aid_size_cell_ai1_link_ParamLimits

0x3796,	// (0x00035ad0) aid_size_cell_ai1_link

0xc27d,	// (0x0003e5b7) popup_ai2_data_window_ParamLimits

0xc27d,	// (0x0003e5b7) popup_ai2_data_window

0x37b0,	// (0x00035aea) popup_ai2_link_window_ParamLimits

0x37b0,	// (0x00035aea) popup_ai2_link_window

0x246f,	// (0x000347a9) bg_popup_sub_pane_cp4_ParamLimits

0x246f,	// (0x000347a9) bg_popup_sub_pane_cp4

0x37c4,	// (0x00035afe) grid_ai2_link_pane_ParamLimits

0x37c4,	// (0x00035afe) grid_ai2_link_pane

0x37db,	// (0x00035b15) popup_ai2_link_window_g1_ParamLimits

0x37db,	// (0x00035b15) popup_ai2_link_window_g1

0x37e7,	// (0x00035b21) popup_ai2_link_window_g2_ParamLimits

0x37e7,	// (0x00035b21) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00041d0d) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00041d0d) popup_ai2_link_window_g

0x37f6,	// (0x00035b30) ai2_mp_button_pane

0x37fe,	// (0x00035b38) ai2_mp_volume_pane

0x25b0,	// (0x000348ea) bg_popup_sub_pane_cp5_ParamLimits

0x25b0,	// (0x000348ea) bg_popup_sub_pane_cp5

0x3806,	// (0x00035b40) heading_ai2_gene_pane_ParamLimits

0x3806,	// (0x00035b40) heading_ai2_gene_pane

0x3812,	// (0x00035b4c) list_ai2_gene_pane_ParamLimits

0x3812,	// (0x00035b4c) list_ai2_gene_pane

0x385a,	// (0x00035b94) cell_ai2_link_pane_ParamLimits

0x385a,	// (0x00035b94) cell_ai2_link_pane

0x3870,	// (0x00035baa) cell_ai2_link_pane_g1

0x0fa3,	// (0x000332dd) grid_highlight_pane_cp7

0xc2c3,	// (0x0003e5fd) ai2_mp_volume_pane_g1

0x3915,	// (0x00035c4f) ai2_mp_volume_pane_g2

0xc2a7,	// (0x0003e5e1) list_ai2_gene_pane_t1

0x390d,	// (0x00035c47) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00041d26) ai2_mp_volume_pane_g

0xc2cb,	// (0x0003e605) volume_small_pane_cp3

0x391d,	// (0x00035c57) aid_size_cell_ai2_button

0x3925,	// (0x00035c5f) grid_ai2_button_pane

0x392e,	// (0x00035c68) cell_ai2_button_pane_ParamLimits

0x392e,	// (0x00035c68) cell_ai2_button_pane

0x0f99,	// (0x000332d3) cell_ai2_button_pane_g1

0x0fa3,	// (0x000332dd) grid_highlight_pane_cp8

0x38cd,	// (0x00035c07) ai2_gene_pane_t1_ParamLimits

0x38cd,	// (0x00035c07) ai2_gene_pane_t1

0xb718,	// (0x0003da52) aid_height_parent_landscape

0xbf86,	// (0x0003e2c0) aid_height_set_list

0x350b,	// (0x00035845) aid_size_parent

0x35f1,	// (0x0003592b) aid_size_cell_graphic_pane_ParamLimits

0x3822,	// (0x00035b5c) popup_ai2_data_window_g1_ParamLimits

0x3822,	// (0x00035b5c) popup_ai2_data_window_g1

0x382e,	// (0x00035b68) ai2_news_ticker_pane_g1

0x3836,	// (0x00035b70) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00041d12) ai2_news_ticker_pane_g

0x383e,	// (0x00035b78) ai2_news_ticker_pane_t1

0x384c,	// (0x00035b86) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00041d17) ai2_news_ticker_pane_t

0x3879,	// (0x00035bb3) heading_ai2_gene_pane_g1

0x3881,	// (0x00035bbb) heading_ai2_gene_pane_t1_ParamLimits

0x3881,	// (0x00035bbb) heading_ai2_gene_pane_t1

0x3896,	// (0x00035bd0) list_highlight_pane_cp6

0xc291,	// (0x0003e5cb) ai2_gene_pane_ParamLimits

0xc291,	// (0x0003e5cb) ai2_gene_pane

0xc2b5,	// (0x0003e5ef) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00041d1c) list_ai2_gene_pane_t

0x389e,	// (0x00035bd8) list_highlight_pane_cp8_ParamLimits

0x389e,	// (0x00035bd8) list_highlight_pane_cp8

0x38af,	// (0x00035be9) ai2_gene_pane_g1_ParamLimits

0x38af,	// (0x00035be9) ai2_gene_pane_g1

0x38c1,	// (0x00035bfb) ai2_gene_pane_g2_ParamLimits

0x38c1,	// (0x00035bfb) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00041d21) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00041d21) ai2_gene_pane_g

0x1559,	// (0x00033893) scroll_pane_cp12

0xb6d5,	// (0x0003da0f) control_pane_t3_ParamLimits

0xb6d5,	// (0x0003da0f) control_pane_t3

0x46cd,	// (0x00036a07) status_small_pane_g8_ParamLimits

0x46cd,	// (0x00036a07) status_small_pane_g8

0xb866,	// (0x0003dba0) popup_find_window_ParamLimits

0xba05,	// (0x0003dd3f) popup_note_image_window_ParamLimits

0xe60d,	// (0x00040947) list_double2_graphic_pane_vc_g1_ParamLimits

0xe60d,	// (0x00040947) list_double2_graphic_pane_vc_g1

0x1f85,	// (0x000342bf) list_double2_graphic_pane_vc_g2_ParamLimits

0x1f85,	// (0x000342bf) list_double2_graphic_pane_vc_g2

0xf428,	// (0x00041762) list_double2_graphic_pane_vc_g3_ParamLimits

0xf428,	// (0x00041762) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00041af8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00041af8) list_double2_graphic_pane_vc_g

0xe619,	// (0x00040953) list_double2_graphic_pane_vc_t1_ParamLimits

0xe619,	// (0x00040953) list_double2_graphic_pane_vc_t1

0x1f85,	// (0x000342bf) list_single_heading_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_single_heading_pane_vc_g1

0xf428,	// (0x00041762) list_single_heading_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_single_heading_pane_vc_g

0xe62f,	// (0x00040969) list_single_heading_pane_vc_t1_ParamLimits

0xe62f,	// (0x00040969) list_single_heading_pane_vc_t1

0xe645,	// (0x0004097f) list_single_heading_pane_vc_t2_ParamLimits

0xe645,	// (0x0004097f) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00041b1e) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00041b1e) list_single_heading_pane_vc_t

0x242b,	// (0x00034765) list_setting_number_pane_vc_g1_ParamLimits

0x242b,	// (0x00034765) list_setting_number_pane_vc_g1

0x2437,	// (0x00034771) list_setting_number_pane_vc_g2_ParamLimits

0x2437,	// (0x00034771) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00041b23) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00041b23) list_setting_number_pane_vc_g

0xe657,	// (0x00040991) list_setting_number_pane_vc_t1_ParamLimits

0xe657,	// (0x00040991) list_setting_number_pane_vc_t1

0xe66b,	// (0x000409a5) list_setting_number_pane_vc_t2_ParamLimits

0xe66b,	// (0x000409a5) list_setting_number_pane_vc_t2

0xe683,	// (0x000409bd) list_setting_number_pane_vc_t3_ParamLimits

0xe683,	// (0x000409bd) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00041b28) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00041b28) list_setting_number_pane_vc_t

0xe6a9,	// (0x000409e3) set_value_pane_vc_ParamLimits

0xe6a9,	// (0x000409e3) set_value_pane_vc

0x3570,	// (0x000358aa) list_double2_graphic_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double2_graphic_pane_vc

0xe755,	// (0x00040a8f) list_double2_large_graphic_pane_vc_ParamLimits

0xe755,	// (0x00040a8f) list_double2_large_graphic_pane_vc

0x3570,	// (0x000358aa) list_double2_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double2_pane_vc

0x3570,	// (0x000358aa) list_double_graphic_heading_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_graphic_heading_pane_vc

0x3570,	// (0x000358aa) list_double_graphic_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_graphic_pane_vc

0x3570,	// (0x000358aa) list_double_heading_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_heading_pane_vc

0xe765,	// (0x00040a9f) list_double_large_graphic_pane_vc_ParamLimits

0xe765,	// (0x00040a9f) list_double_large_graphic_pane_vc

0x3570,	// (0x000358aa) list_double_number_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_number_pane_vc

0x3570,	// (0x000358aa) list_double_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_pane_vc

0x3570,	// (0x000358aa) list_double_time_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_double_time_pane_vc

0x3570,	// (0x000358aa) list_setting_number_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_setting_number_pane_vc

0x3570,	// (0x000358aa) list_setting_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_setting_pane_vc

0x3570,	// (0x000358aa) list_single_graphic_heading_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_single_graphic_heading_pane_vc

0x3570,	// (0x000358aa) list_single_heading_pane_vc_ParamLimits

0x3570,	// (0x000358aa) list_single_heading_pane_vc

0xe775,	// (0x00040aaf) list_single_number_heading_pane_vc_ParamLimits

0xe775,	// (0x00040aaf) list_single_number_heading_pane_vc

0xe60d,	// (0x00040947) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe60d,	// (0x00040947) list_double_graphic_heading_pane_vc_g1

0x1f85,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1f85,	// (0x000342bf) list_double_graphic_heading_pane_vc_g2

0xf428,	// (0x00041762) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf428,	// (0x00041762) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x00041af8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00041af8) list_double_graphic_heading_pane_vc_g

0xe798,	// (0x00040ad2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe798,	// (0x00040ad2) list_double_graphic_heading_pane_vc_t1

0xe7ae,	// (0x00040ae8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe7ae,	// (0x00040ae8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00041d2d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00041d2d) list_double_graphic_heading_pane_vc_t

0x242b,	// (0x00034765) list_setting_pane_vc_g1_ParamLimits

0x242b,	// (0x00034765) list_setting_pane_vc_g1

0x2437,	// (0x00034771) list_setting_pane_vc_g2_ParamLimits

0x2437,	// (0x00034771) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00041b23) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00041b23) list_setting_pane_vc_g

0xe7c6,	// (0x00040b00) list_setting_pane_vc_t1_ParamLimits

0xe7c6,	// (0x00040b00) list_setting_pane_vc_t1

0xe7de,	// (0x00040b18) list_setting_pane_vc_t2_ParamLimits

0xe7de,	// (0x00040b18) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00041d70) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00041d70) list_setting_pane_vc_t

0xe6a9,	// (0x000409e3) set_value_pane_cp_vc_ParamLimits

0xe6a9,	// (0x000409e3) set_value_pane_cp_vc

0x1f85,	// (0x000342bf) list_single_number_heading_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_single_number_heading_pane_vc_g1

0xf428,	// (0x00041762) list_single_number_heading_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_single_number_heading_pane_vc_g

0xe7f4,	// (0x00040b2e) list_single_number_heading_pane_vc_t1_ParamLimits

0xe7f4,	// (0x00040b2e) list_single_number_heading_pane_vc_t1

0xe80a,	// (0x00040b44) list_single_number_heading_pane_vc_t2_ParamLimits

0xe80a,	// (0x00040b44) list_single_number_heading_pane_vc_t2

0xe81c,	// (0x00040b56) list_single_number_heading_pane_vc_t3_ParamLimits

0xe81c,	// (0x00040b56) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00041d75) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00041d75) list_single_number_heading_pane_vc_t

0xe60d,	// (0x00040947) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe60d,	// (0x00040947) list_single_graphic_heading_pane_vc_g1

0x1f85,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1f85,	// (0x000342bf) list_single_graphic_heading_pane_vc_g4

0xf428,	// (0x00041762) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf428,	// (0x00041762) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x00041af8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00041af8) list_single_graphic_heading_pane_vc_g

0xe62f,	// (0x00040969) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe62f,	// (0x00040969) list_single_graphic_heading_pane_vc_t1

0xe82e,	// (0x00040b68) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe82e,	// (0x00040b68) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00041d7c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00041d7c) list_single_graphic_heading_pane_vc_t

0x1f85,	// (0x000342bf) list_double2_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_double2_pane_vc_g1

0xf428,	// (0x00041762) list_double2_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_double2_pane_vc_g

0xe840,	// (0x00040b7a) list_double2_pane_vc_t1_ParamLimits

0xe840,	// (0x00040b7a) list_double2_pane_vc_t1

0xe856,	// (0x00040b90) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe856,	// (0x00040b90) list_double2_large_graphic_pane_vc_g1

0xe862,	// (0x00040b9c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe862,	// (0x00040b9c) list_double2_large_graphic_pane_vc_g2

0xe86e,	// (0x00040ba8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe86e,	// (0x00040ba8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00041d81) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00041d81) list_double2_large_graphic_pane_vc_g

0xe87a,	// (0x00040bb4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe87a,	// (0x00040bb4) list_double2_large_graphic_pane_vc_t1

0xf434,	// (0x0004176e) list_double_time_pane_vc_g1_ParamLimits

0xf434,	// (0x0004176e) list_double_time_pane_vc_g1

0xf440,	// (0x0004177a) list_double_time_pane_vc_g2_ParamLimits

0xf440,	// (0x0004177a) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00041d88) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00041d88) list_double_time_pane_vc_g

0xe890,	// (0x00040bca) list_double_time_pane_vc_t1_ParamLimits

0xe890,	// (0x00040bca) list_double_time_pane_vc_t1

0xe8ae,	// (0x00040be8) list_double_time_pane_vc_t2_ParamLimits

0xe8ae,	// (0x00040be8) list_double_time_pane_vc_t2

0xe8ec,	// (0x00040c26) list_double_time_pane_vc_t3_ParamLimits

0xe8ec,	// (0x00040c26) list_double_time_pane_vc_t3

0xe8fe,	// (0x00040c38) list_double_time_pane_vc_t4_ParamLimits

0xe8fe,	// (0x00040c38) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00041d8d) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00041d8d) list_double_time_pane_vc_t

0x1f85,	// (0x000342bf) list_double_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_double_pane_vc_g1

0xf428,	// (0x00041762) list_double_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_double_pane_vc_g

0xe910,	// (0x00040c4a) list_double_pane_vc_t1_ParamLimits

0xe910,	// (0x00040c4a) list_double_pane_vc_t1

0xe922,	// (0x00040c5c) list_double_pane_vc_t2_ParamLimits

0xe922,	// (0x00040c5c) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00041d96) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00041d96) list_double_pane_vc_t

0x1f85,	// (0x000342bf) list_double_number_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_double_number_pane_vc_g1

0xf428,	// (0x00041762) list_double_number_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_double_number_pane_vc_g

0xe938,	// (0x00040c72) list_double_number_pane_vc_t1_ParamLimits

0xe938,	// (0x00040c72) list_double_number_pane_vc_t1

0xe94a,	// (0x00040c84) list_double_number_pane_vc_t2_ParamLimits

0xe94a,	// (0x00040c84) list_double_number_pane_vc_t2

0xe922,	// (0x00040c5c) list_double_number_pane_vc_t3_ParamLimits

0xe922,	// (0x00040c5c) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00041d9b) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00041d9b) list_double_number_pane_vc_t

0xe95c,	// (0x00040c96) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe95c,	// (0x00040c96) list_double_large_graphic_pane_vc_g1

0xe97e,	// (0x00040cb8) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe97e,	// (0x00040cb8) list_double_large_graphic_pane_vc_g2

0xe98f,	// (0x00040cc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe98f,	// (0x00040cc9) list_double_large_graphic_pane_vc_g3

0xe99b,	// (0x00040cd5) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe99b,	// (0x00040cd5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00041da2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00041da2) list_double_large_graphic_pane_vc_g

0xe9aa,	// (0x00040ce4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe9aa,	// (0x00040ce4) list_double_large_graphic_pane_vc_t1

0xe9bc,	// (0x00040cf6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe9bc,	// (0x00040cf6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00041dab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00041dab) list_double_large_graphic_pane_vc_t

0x1f85,	// (0x000342bf) list_double_heading_pane_vc_g1_ParamLimits

0x1f85,	// (0x000342bf) list_double_heading_pane_vc_g1

0xf428,	// (0x00041762) list_double_heading_pane_vc_g2_ParamLimits

0xf428,	// (0x00041762) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00041b19) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00041b19) list_double_heading_pane_vc_g

0xe9d6,	// (0x00040d10) list_double_heading_pane_vc_t1_ParamLimits

0xe9d6,	// (0x00040d10) list_double_heading_pane_vc_t1

0xe9e8,	// (0x00040d22) list_double_heading_pane_vc_t2_ParamLimits

0xe9e8,	// (0x00040d22) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00041db0) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00041db0) list_double_heading_pane_vc_t

0xe9fe,	// (0x00040d38) list_double_graphic_pane_vc_g1_ParamLimits

0xe9fe,	// (0x00040d38) list_double_graphic_pane_vc_g1

0xf44c,	// (0x00041786) list_double_graphic_pane_vc_g2_ParamLimits

0xf44c,	// (0x00041786) list_double_graphic_pane_vc_g2

0x1f85,	// (0x000342bf) list_double_graphic_pane_vc_g3_ParamLimits

0x1f85,	// (0x000342bf) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00041db5) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00041db5) list_double_graphic_pane_vc_g

0xea0a,	// (0x00040d44) list_double_graphic_pane_vc_t1_ParamLimits

0xea0a,	// (0x00040d44) list_double_graphic_pane_vc_t1

0xea28,	// (0x00040d62) list_double_graphic_pane_vc_t2_ParamLimits

0xea28,	// (0x00040d62) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00041dbe) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00041dbe) list_double_graphic_pane_vc_t

0xad4d,	// (0x0003d087) aid_size_cell_fastswap

0xad55,	// (0x0003d08f) aid_size_cell_touch_ParamLimits

0xad55,	// (0x0003d08f) aid_size_cell_touch

0xafb0,	// (0x0003d2ea) popup_fast_swap_wide_window_ParamLimits

0xafb0,	// (0x0003d2ea) popup_fast_swap_wide_window

0xb076,	// (0x0003d3b0) touch_pane_ParamLimits

0xb076,	// (0x0003d3b0) touch_pane

0x15b2,	// (0x000338ec) button_value_adjust_pane_cp2

0xe343,	// (0x0004067d) button_value_adjust_pane_cp4

0xe363,	// (0x0004069d) form_field_data_pane_cp2

0xe382,	// (0x000406bc) form_field_data_wide_pane_cp2

0x1912,	// (0x00033c4c) bg_scroll_pane_ParamLimits

0xb2fa,	// (0x0003d634) scroll_handle_pane_ParamLimits

0xb30e,	// (0x0003d648) scroll_sc2_down_pane_ParamLimits

0xb30e,	// (0x0003d648) scroll_sc2_down_pane

0x1943,	// (0x00033c7d) scroll_sc2_up_pane_ParamLimits

0x1943,	// (0x00033c7d) scroll_sc2_up_pane

0xc439,	// (0x0003e773) grid_wheel_folder_pane_g1_ParamLimits

0xc439,	// (0x0003e773) grid_wheel_folder_pane_g1

0xb4c2,	// (0x0003d7fc) clock_nsta_pane_cp2_ParamLimits

0xb4c2,	// (0x0003d7fc) clock_nsta_pane_cp2

0x45be,	// (0x000368f8) listscroll_midp_pane_ParamLimits

0x45ca,	// (0x00036904) midp_canvas_pane

0x21bd,	// (0x000344f7) nsta_clock_indic_pane

0x21e5,	// (0x0003451f) listscroll_form_pane_vc

0x21ed,	// (0x00034527) listscroll_set_pane_vc_ParamLimits

0x21ed,	// (0x00034527) listscroll_set_pane_vc

0x47f5,	// (0x00036b2f) clock_nsta_pane

0x4802,	// (0x00036b3c) indicator_nsta_pane

0x2323,	// (0x0003465d) bg_popup_sub_pane_cp2_ParamLimits

0x2337,	// (0x00034671) find_pane_cp2_ParamLimits

0x2337,	// (0x00034671) find_pane_cp2

0x234d,	// (0x00034687) grid_toobar_pane_ParamLimits

0x2443,	// (0x0003477d) list_form_gen_pane_vc_ParamLimits

0x2443,	// (0x0003477d) list_form_gen_pane_vc

0x2459,	// (0x00034793) scroll_pane_cp8_vc_ParamLimits

0x2459,	// (0x00034793) scroll_pane_cp8_vc

0x24a9,	// (0x000347e3) data_form_wide_pane_vc_ParamLimits

0x24a9,	// (0x000347e3) data_form_wide_pane_vc

0x24b5,	// (0x000347ef) form_field_data_wide_pane_vc_g1

0x24bd,	// (0x000347f7) form_field_data_wide_pane_vc_t1_ParamLimits

0x24bd,	// (0x000347f7) form_field_data_wide_pane_vc_t1

0x15c6,	// (0x00033900) input_focus_pane_cp6_vc_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_cp6_vc

0x4ad4,	// (0x00036e0e) list_midp_pane_ParamLimits

0x4ae0,	// (0x00036e1a) scroll_pane_cp16_ParamLimits

0x4ae0,	// (0x00036e1a) scroll_pane_cp16

0x2750,	// (0x00034a8a) button_value_adjust_pane_ParamLimits

0x2750,	// (0x00034a8a) button_value_adjust_pane

0xbf97,	// (0x0003e2d1) button_value_adjust_pane_cp6_ParamLimits

0xbf97,	// (0x0003e2d1) button_value_adjust_pane_cp6

0xc09f,	// (0x0003e3d9) settings_code_pane_cp_ParamLimits

0xc09f,	// (0x0003e3d9) settings_code_pane_cp

0x0f99,	// (0x000332d3) cell_touch_pane_g1

0x0f99,	// (0x000332d3) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00041a3d) cell_touch_pane_g

0xc2d4,	// (0x0003e60e) cell_touch_pane_cp_ParamLimits

0xc2d4,	// (0x0003e60e) cell_touch_pane_cp

0xc2e4,	// (0x0003e61e) cell_touch_pane_ParamLimits

0xc2e4,	// (0x0003e61e) cell_touch_pane

0x0f99,	// (0x000332d3) scroll_sc2_down_pane_g1

0x0f99,	// (0x000332d3) scroll_sc2_up_pane_g1

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp4_vc

0x3940,	// (0x00035c7a) list_set_graphic_pane_vc_g1_ParamLimits

0x3940,	// (0x00035c7a) list_set_graphic_pane_vc_g1

0x394c,	// (0x00035c86) list_set_graphic_pane_vc_g2_ParamLimits

0x394c,	// (0x00035c86) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00041d32) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00041d32) list_set_graphic_pane_vc_g

0x3958,	// (0x00035c92) text_primary_small_cp13_vc_ParamLimits

0x3958,	// (0x00035c92) text_primary_small_cp13_vc

0x3970,	// (0x00035caa) list_set_graphic_pane_vc_ParamLimits

0x3970,	// (0x00035caa) list_set_graphic_pane_vc

0x0fa3,	// (0x000332dd) input_focus_pane_cp2_vc

0x0f99,	// (0x000332d3) setting_code_pane_vc_g1

0x1018,	// (0x00033352) setting_code_pane_vc_t1

0x3981,	// (0x00035cbb) set_text_pane_vc_t1_ParamLimits

0x3981,	// (0x00035cbb) set_text_pane_vc_t1

0x0fa3,	// (0x000332dd) input_focus_pane_cp1_vc

0x399b,	// (0x00035cd5) list_set_text_pane_vc

0x0f99,	// (0x000332d3) setting_text_pane_vc_g1

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp2_vc

0x100f,	// (0x00033349) setting_slider_graphic_pane_vc_g1

0x39a5,	// (0x00035cdf) setting_slider_graphic_pane_vc_t1

0x39b4,	// (0x00035cee) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00041d37) setting_slider_graphic_pane_vc_t

0x39c3,	// (0x00035cfd) slider_set_pane_cp_vc

0x39cb,	// (0x00035d05) slider_set_pane_vc_g1

0x39d4,	// (0x00035d0e) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00041d3c) slider_set_pane_vc_g

0x161e,	// (0x00033958) set_opt_bg_pane_g1_copy1

0x1626,	// (0x00033960) set_opt_bg_pane_g2_copy1

0x3a00,	// (0x00035d3a) set_opt_bg_pane_g3_copy1

0x1636,	// (0x00033970) set_opt_bg_pane_g4_copy1

0x163e,	// (0x00033978) set_opt_bg_pane_g5_copy1

0x1646,	// (0x00033980) set_opt_bg_pane_g6_copy1

0x3a08,	// (0x00035d42) set_opt_bg_pane_g7_copy1

0x3a10,	// (0x00035d4a) set_opt_bg_pane_g8_copy1

0x3a18,	// (0x00035d52) set_opt_bg_pane_g9_copy1

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp_vc

0x3a20,	// (0x00035d5a) setting_slider_pane_vc_t1

0x3a2f,	// (0x00035d69) setting_slider_pane_vc_t2

0x3a3e,	// (0x00035d78) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00041d4b) setting_slider_pane_vc_t

0x3a4d,	// (0x00035d87) slider_set_pane_vc

0xbd2d,	// (0x0003e067) volume_set_pane_vc_g1

0xc2f6,	// (0x0003e630) volume_set_pane_vc_g2

0xc2ff,	// (0x0003e639) volume_set_pane_vc_g3

0xc308,	// (0x0003e642) volume_set_pane_vc_g4

0xc311,	// (0x0003e64b) volume_set_pane_vc_g5

0xc31a,	// (0x0003e654) volume_set_pane_vc_g6

0xc323,	// (0x0003e65d) volume_set_pane_vc_g7

0xc32c,	// (0x0003e666) volume_set_pane_vc_g8

0xc335,	// (0x0003e66f) volume_set_pane_vc_g9

0xc33e,	// (0x0003e678) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00041d52) volume_set_pane_vc_g

0x3a55,	// (0x00035d8f) volume_set_pane_vc

0x3a5d,	// (0x00035d97) button_value_adjust_pane_cp1_vc

0x3a65,	// (0x00035d9f) list_highlight_pane_cp2_vc

0x3a6e,	// (0x00035da8) list_set_pane_vc_ParamLimits

0x3a6e,	// (0x00035da8) list_set_pane_vc

0x3ac0,	// (0x00035dfa) main_pane_set_vc_t1_ParamLimits

0x3ac0,	// (0x00035dfa) main_pane_set_vc_t1

0x3ad5,	// (0x00035e0f) main_pane_set_vc_t2_ParamLimits

0x3ad5,	// (0x00035e0f) main_pane_set_vc_t2

0x3ae7,	// (0x00035e21) main_pane_set_vc_t3_ParamLimits

0x3ae7,	// (0x00035e21) main_pane_set_vc_t3

0x3af9,	// (0x00035e33) main_pane_set_vc_t4_ParamLimits

0x3af9,	// (0x00035e33) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00041d67) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00041d67) main_pane_set_vc_t

0x3b0b,	// (0x00035e45) setting_code_pane_vc_ParamLimits

0x3b0b,	// (0x00035e45) setting_code_pane_vc

0x3b1a,	// (0x00035e54) setting_slider_graphic_pane_vc

0x3b1a,	// (0x00035e54) setting_slider_pane_vc

0x3b1a,	// (0x00035e54) setting_text_pane_vc

0x3b1a,	// (0x00035e54) setting_volume_pane_vc

0x3b22,	// (0x00035e5c) scroll_pane_cp121_vc

0x15a0,	// (0x000338da) set_content_pane_vc

0x3b2a,	// (0x00035e64) button_value_adjust_pane_g1

0x3b33,	// (0x00035e6d) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00041dc3) button_value_adjust_pane_g

0x3b3c,	// (0x00035e76) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3b3c,	// (0x00035e76) form_field_slider_wide_pane_vc_t1

0x3b4e,	// (0x00035e88) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3b4e,	// (0x00035e88) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00041dc8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00041dc8) form_field_slider_wide_pane_vc_t

0x1134,	// (0x0003346e) input_focus_pane_cp10_vc_ParamLimits

0x1134,	// (0x0003346e) input_focus_pane_cp10_vc

0x3b76,	// (0x00035eb0) slider_cont_pane_cp1_vc_ParamLimits

0x3b76,	// (0x00035eb0) slider_cont_pane_cp1_vc

0x3b86,	// (0x00035ec0) slider_form_pane_g1_cp2

0x39d4,	// (0x00035d0e) slider_form_pane_g2_cp2

0x3bb3,	// (0x00035eed) form_field_slider_pane_vc_t3

0x3bc1,	// (0x00035efb) form_field_slider_pane_vc_t4

0x3bcf,	// (0x00035f09) slider_form_pane_vc_ParamLimits

0x3bcf,	// (0x00035f09) slider_form_pane_vc

0x3bdc,	// (0x00035f16) form_field_slider_pane_vc_t1_ParamLimits

0x3bdc,	// (0x00035f16) form_field_slider_pane_vc_t1

0x3b4e,	// (0x00035e88) form_field_slider_pane_vc_t2_ParamLimits

0x3b4e,	// (0x00035e88) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00041dda) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00041dda) form_field_slider_pane_vc_t

0x1134,	// (0x0003346e) input_focus_pane_cp9_vc_ParamLimits

0x1134,	// (0x0003346e) input_focus_pane_cp9_vc

0x3bf2,	// (0x00035f2c) slider_cont_pane_vc_ParamLimits

0x3bf2,	// (0x00035f2c) slider_cont_pane_vc

0x3c04,	// (0x00035f3e) list_form_graphic_pane_cp_vc_ParamLimits

0x3c04,	// (0x00035f3e) list_form_graphic_pane_cp_vc

0x24b5,	// (0x000347ef) form_field_popup_wide_pane_vc_g1

0x3c19,	// (0x00035f53) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3c19,	// (0x00035f53) form_field_popup_wide_pane_vc_t1

0x15c6,	// (0x00033900) input_focus_pane_cp8_vc_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_cp8_vc

0x3c58,	// (0x00035f92) list_form_wide_pane_vc_ParamLimits

0x3c58,	// (0x00035f92) list_form_wide_pane_vc

0x3c64,	// (0x00035f9e) list_form_graphic_pane_vc_g1

0x3c6c,	// (0x00035fa6) list_form_graphic_pane_vc_t1_ParamLimits

0x3c6c,	// (0x00035fa6) list_form_graphic_pane_vc_t1

0x0ff1,	// (0x0003332b) list_highlight_pane_cp5_vc_ParamLimits

0x0ff1,	// (0x0003332b) list_highlight_pane_cp5_vc

0x3c88,	// (0x00035fc2) list_form_graphic_pane_vc_ParamLimits

0x3c88,	// (0x00035fc2) list_form_graphic_pane_vc

0x24b5,	// (0x000347ef) form_field_popup_pane_vc_g1

0x3c9e,	// (0x00035fd8) form_field_popup_pane_vc_t1_ParamLimits

0x3c9e,	// (0x00035fd8) form_field_popup_pane_vc_t1

0x15c6,	// (0x00033900) input_focus_pane_cp7_vc_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_cp7_vc

0x3cb3,	// (0x00035fed) list_form_pane_vc_ParamLimits

0x3cb3,	// (0x00035fed) list_form_pane_vc

0x3cbf,	// (0x00035ff9) data_form_pane_vc_t1_ParamLimits

0x3cbf,	// (0x00035ff9) data_form_pane_vc_t1

0x161e,	// (0x00033958) input_focus_pane_vc_g1

0x1626,	// (0x00033960) input_focus_pane_vc_g2

0x162e,	// (0x00033968) input_focus_pane_vc_g3

0x1636,	// (0x00033970) input_focus_pane_vc_g4

0x163e,	// (0x00033978) input_focus_pane_vc_g5

0x1646,	// (0x00033980) input_focus_pane_vc_g6

0x164e,	// (0x00033988) input_focus_pane_vc_g7

0x1656,	// (0x00033990) input_focus_pane_vc_g8

0x165e,	// (0x00033998) input_focus_pane_vc_g9

0x0f99,	// (0x000332d3) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x000419c6) input_focus_pane_vc_g

0x24a9,	// (0x000347e3) data_form_pane_vc_ParamLimits

0x24a9,	// (0x000347e3) data_form_pane_vc

0x24b5,	// (0x000347ef) form_field_data_pane_vc_g1

0x3cda,	// (0x00036014) form_field_data_pane_vc_t1_ParamLimits

0x3cda,	// (0x00036014) form_field_data_pane_vc_t1

0x15c6,	// (0x00033900) input_focus_pane_vc_ParamLimits

0x15c6,	// (0x00033900) input_focus_pane_vc

0x3cf0,	// (0x0003602a) button_value_adjust_pane_cp3_vc

0x3cf8,	// (0x00036032) button_value_adjust_pane_cp5_vc

0x3d00,	// (0x0003603a) form_field_data_pane_vc_ParamLimits

0x3d00,	// (0x0003603a) form_field_data_pane_vc

0x3d17,	// (0x00036051) form_field_data_pane_vc_cp2

0x3d1f,	// (0x00036059) form_field_data_wide_pane_vc_ParamLimits

0x3d1f,	// (0x00036059) form_field_data_wide_pane_vc

0x3d35,	// (0x0003606f) form_field_data_wide_pane_vc_cp2

0x3d3d,	// (0x00036077) form_field_popup_pane_vc_ParamLimits

0x3d3d,	// (0x00036077) form_field_popup_pane_vc

0x3d54,	// (0x0003608e) form_field_popup_wide_pane_vc_ParamLimits

0x3d54,	// (0x0003608e) form_field_popup_wide_pane_vc

0x3d6a,	// (0x000360a4) form_field_slider_pane_vc_ParamLimits

0x3d6a,	// (0x000360a4) form_field_slider_pane_vc

0x3d7d,	// (0x000360b7) form_field_slider_wide_pane_vc_ParamLimits

0x3d7d,	// (0x000360b7) form_field_slider_wide_pane_vc

0xc347,	// (0x0003e681) grid_touch_1_pane_ParamLimits

0xc347,	// (0x0003e681) grid_touch_1_pane

0xc353,	// (0x0003e68d) grid_touch_2_pane_ParamLimits

0xc353,	// (0x0003e68d) grid_touch_2_pane

0x21af,	// (0x000344e9) touch_pane_g1_ParamLimits

0x21af,	// (0x000344e9) touch_pane_g1

0x3d90,	// (0x000360ca) cell_app_pane_cp_wide_ParamLimits

0x3d90,	// (0x000360ca) cell_app_pane_cp_wide

0x3da1,	// (0x000360db) grid_popup_fast_wide_pane_ParamLimits

0x3da1,	// (0x000360db) grid_popup_fast_wide_pane

0x3db5,	// (0x000360ef) scroll_pane_cp19_ParamLimits

0x3db5,	// (0x000360ef) scroll_pane_cp19

0x0fa3,	// (0x000332dd) bg_popup_window_pane_cp20

0x3dc9,	// (0x00036103) listscroll_popup_fast_wide_pane

0x0ff1,	// (0x0003332b) grid_indicator_nsta_pane

0x3dd1,	// (0x0003610b) clock_nsta_pane_g1

0x3dda,	// (0x00036114) clock_nsta_pane_t1

0xc36b,	// (0x0003e6a5) cell_indicator_nsta_pane_ParamLimits

0xc36b,	// (0x0003e6a5) cell_indicator_nsta_pane

0x3df6,	// (0x00036130) cell_indicator_nsta_pane_g1

0xc39c,	// (0x0003e6d6) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00041deb) cell_indicator_nsta_pane_g

0x3e04,	// (0x0003613e) clock_nsta_pane_cp

0x3e0c,	// (0x00036146) indicator_nsta_pane_cp

0x3e14,	// (0x0003614e) nsta_clock_indic_pane_g1

0x103d,	// (0x00033377) grid_indicator_pane

0x1a35,	// (0x00033d6f) scroll_pane_cp29

0xb419,	// (0x0003d753) indicator_nsta_pane_cp2_ParamLimits

0xb419,	// (0x0003d753) indicator_nsta_pane_cp2

0x0ff1,	// (0x0003332b) main_apps_wheel_pane

0x25ed,	// (0x00034927) form_midp_field_text_pane_ParamLimits

0x271a,	// (0x00034a54) scroll_bar_cp050_ParamLimits

0x3e64,	// (0x0003619e) cell_indicator_pane_ParamLimits

0x3e64,	// (0x0003619e) cell_indicator_pane

0x3e78,	// (0x000361b2) cell_indicator_pane_g1

0xc3a9,	// (0x0003e6e3) grid_wheel_folder_pane_ParamLimits

0xc3a9,	// (0x0003e6e3) grid_wheel_folder_pane

0xc3bb,	// (0x0003e6f5) list_wheel_apps_pane_ParamLimits

0xc3bb,	// (0x0003e6f5) list_wheel_apps_pane

0xc3ca,	// (0x0003e704) main_apps_wheel_pane_g1_ParamLimits

0xc3ca,	// (0x0003e704) main_apps_wheel_pane_g1

0xc3de,	// (0x0003e718) main_apps_wheel_pane_g2_ParamLimits

0xc3de,	// (0x0003e718) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00041e07) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00041e07) main_apps_wheel_pane_g

0xc3f2,	// (0x0003e72c) main_apps_wheel_pane_t1_ParamLimits

0xc3f2,	// (0x0003e72c) main_apps_wheel_pane_t1

0xc411,	// (0x0003e74b) list_wheel_apps_pane_g1

0xc419,	// (0x0003e753) list_wheel_apps_pane_g2

0xc421,	// (0x0003e75b) list_wheel_apps_pane_g3

0xc429,	// (0x0003e763) list_wheel_apps_pane_g4

0xc431,	// (0x0003e76b) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00041e0c) list_wheel_apps_pane_g

0x1eda,	// (0x00034214) navi_icon_text_pane

0x4745,	// (0x00036a7f) aid_fill_nsta

0x3e82,	// (0x000361bc) navi_icon_text_pane_g1

0x3e8e,	// (0x000361c8) navi_icon_text_pane_t1

0x1d84,	// (0x000340be) list_set_graphic_pane_t1_ParamLimits

0x1d84,	// (0x000340be) list_set_graphic_pane_t1

0x2e2f,	// (0x00035169) popup_midp_note_alarm_window_t6_ParamLimits

0x2e2f,	// (0x00035169) popup_midp_note_alarm_window_t6

0x2e41,	// (0x0003517b) popup_midp_note_alarm_window_t7_ParamLimits

0x2e41,	// (0x0003517b) popup_midp_note_alarm_window_t7

0x2e53,	// (0x0003518d) popup_midp_note_alarm_window_t8_ParamLimits

0x2e53,	// (0x0003518d) popup_midp_note_alarm_window_t8

0x2e65,	// (0x0003519f) popup_midp_note_alarm_window_t9_ParamLimits

0x2e65,	// (0x0003519f) popup_midp_note_alarm_window_t9

0x2e77,	// (0x000351b1) popup_midp_note_alarm_window_t10_ParamLimits

0x2e77,	// (0x000351b1) popup_midp_note_alarm_window_t10

0x2e89,	// (0x000351c3) popup_midp_note_alarm_window_t11_ParamLimits

0x2e89,	// (0x000351c3) popup_midp_note_alarm_window_t11

0x2e9b,	// (0x000351d5) scroll_pane_cp17_ParamLimits

0x2e9b,	// (0x000351d5) scroll_pane_cp17

0xbd2d,	// (0x0003e067) volume_small_pane_cp_g1

0xc44e,	// (0x0003e788) volume_small_pane_cp_g2

0xc457,	// (0x0003e791) volume_small_pane_cp_g3

0xc460,	// (0x0003e79a) volume_small_pane_cp_g4

0xc469,	// (0x0003e7a3) volume_small_pane_cp_g5

0xc472,	// (0x0003e7ac) volume_small_pane_cp_g6

0xc47b,	// (0x0003e7b5) volume_small_pane_cp_g7

0xc484,	// (0x0003e7be) volume_small_pane_cp_g8

0xc48d,	// (0x0003e7c7) volume_small_pane_cp_g9

0xc496,	// (0x0003e7d0) volume_small_pane_cp_g10

0x2076,	// (0x000343b0) midp_ticker_pane_g1_ParamLimits

0x2082,	// (0x000343bc) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00041a92) midp_ticker_pane_g_ParamLimits

0x208e,	// (0x000343c8) midp_ticker_pane_t1_ParamLimits

0x4755,	// (0x00036a8f) aid_fill_nsta_2

0x2706,	// (0x00034a40) list_form2_midp_pane

0x353f,	// (0x00035879) midp_editing_number_pane_ParamLimits

0x354e,	// (0x00035888) midp_ticker_pane_ParamLimits

0x3ea0,	// (0x000361da) form2_midp_field_pane

0x3ea8,	// (0x000361e2) scroll_pane_cp51

0x3ec8,	// (0x00036202) form2_midp_button_pane_ParamLimits

0x3ec8,	// (0x00036202) form2_midp_button_pane

0x3eda,	// (0x00036214) form2_midp_content_pane_ParamLimits

0x3eda,	// (0x00036214) form2_midp_content_pane

0x3ef4,	// (0x0003622e) form2_midp_field_choice_group_pane

0x3efc,	// (0x00036236) form2_midp_field_pane_g1

0x3f04,	// (0x0003623e) form2_midp_field_pane_g2

0x3f0c,	// (0x00036246) form2_midp_field_pane_g3

0x3f14,	// (0x0003624e) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00041e31) form2_midp_field_pane_g

0x3f1c,	// (0x00036256) form2_midp_gauge_slider_pane

0x3f24,	// (0x0003625e) form2_midp_gauge_wait_pane

0x3f2c,	// (0x00036266) form2_midp_image_pane_ParamLimits

0x3f2c,	// (0x00036266) form2_midp_image_pane

0xc4bb,	// (0x0003e7f5) form2_midp_label_pane_ParamLimits

0xc4bb,	// (0x0003e7f5) form2_midp_label_pane

0xc4d4,	// (0x0003e80e) form2_midp_label_pane_cp_ParamLimits

0xc4d4,	// (0x0003e80e) form2_midp_label_pane_cp

0x3f47,	// (0x00036281) form2_midp_string_pane_ParamLimits

0x3f47,	// (0x00036281) form2_midp_string_pane

0xea46,	// (0x00040d80) form2_midp_text_pane_ParamLimits

0xea46,	// (0x00040d80) form2_midp_text_pane

0x3f59,	// (0x00036293) form2_midp_time_pane

0x3f69,	// (0x000362a3) input_focus_pane_cp51_ParamLimits

0x3f69,	// (0x000362a3) input_focus_pane_cp51

0xc4f3,	// (0x0003e82d) form2_midp_label_pane_t1_ParamLimits

0xc4f3,	// (0x0003e82d) form2_midp_label_pane_t1

0xea5f,	// (0x00040d99) form2_mdip_text_pane_t1_ParamLimits

0xea5f,	// (0x00040d99) form2_mdip_text_pane_t1

0xea78,	// (0x00040db2) form2_midp_time_pane_t1

0x3f89,	// (0x000362c3) form2_midp_gauge_slider_pane_t1

0xc530,	// (0x0003e86a) form2_midp_gauge_slider_pane_t2

0xc542,	// (0x0003e87c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00041e3a) form2_midp_gauge_slider_pane_t

0x3f9b,	// (0x000362d5) form2_midp_slider_pane

0x3fa7,	// (0x000362e1) form2_midp_gauge_wait_pane_t1

0x3fb5,	// (0x000362ef) form2_midp_wait_pane_ParamLimits

0x3fb5,	// (0x000362ef) form2_midp_wait_pane

0xc554,	// (0x0003e88e) list_single_2graphic_pane_cp4_ParamLimits

0xc554,	// (0x0003e88e) list_single_2graphic_pane_cp4

0x4a67,	// (0x00036da1) list_single_midp_graphic_pane_cp_ParamLimits

0x4a67,	// (0x00036da1) list_single_midp_graphic_pane_cp

0x0fa3,	// (0x000332dd) list_highlight_pane_cp20

0x3fe0,	// (0x0003631a) list_single_2graphic_pane_g1_cp4

0x3879,	// (0x00035bb3) list_single_2graphic_pane_g2_cp4

0x3fe8,	// (0x00036322) list_single_2graphic_pane_t1_cp4

0x0ff1,	// (0x0003332b) list_highlight_pane_cp21

0x3ff7,	// (0x00036331) list_single_midp_graphic_pane_g4_cp

0x4006,	// (0x00036340) list_single_midp_graphic_pane_t1_cp

0xc567,	// (0x0003e8a1) form2_mdip_string_pane_t1_ParamLimits

0xc567,	// (0x0003e8a1) form2_mdip_string_pane_t1

0x0fa3,	// (0x000332dd) bg_wml_button_pane_cp2

0x0f99,	// (0x000332d3) form2_midp_image_pane_g1

0xf3f8,	// (0x00041732) list_double_large_graphic_pane_g5_ParamLimits

0xf3f8,	// (0x00041732) list_double_large_graphic_pane_g5

0x45be,	// (0x000368f8) midp_form_pane_ParamLimits

0x0ff1,	// (0x0003332b) main_apps_wheel_pane_ParamLimits

0xba29,	// (0x0003dd63) popup_preview_window_ParamLimits

0xba29,	// (0x0003dd63) popup_preview_window

0xbbaa,	// (0x0003dee4) popup_touch_info_window_ParamLimits

0xbbaa,	// (0x0003dee4) popup_touch_info_window

0xbbc8,	// (0x0003df02) popup_touch_menu_window_ParamLimits

0xbbc8,	// (0x0003df02) popup_touch_menu_window

0x0f8f,	// (0x000332c9) bg_popup_sub_pane_cp6

0x401b,	// (0x00036355) list_touch_menu_pane

0x4023,	// (0x0003635d) list_single_touch_menu_pane_ParamLimits

0x4023,	// (0x0003635d) list_single_touch_menu_pane

0x4037,	// (0x00036371) list_single_touch_menu_pane_t1

0x0ff1,	// (0x0003332b) bg_popup_sub_pane_cp7_ParamLimits

0x0ff1,	// (0x0003332b) bg_popup_sub_pane_cp7

0x4045,	// (0x0003637f) heading_sub_pane

0x404d,	// (0x00036387) list_touch_info_pane_ParamLimits

0x404d,	// (0x00036387) list_touch_info_pane

0x405c,	// (0x00036396) list_single_touch_info_pane_ParamLimits

0x405c,	// (0x00036396) list_single_touch_info_pane

0x406d,	// (0x000363a7) list_single_touch_info_pane_t1

0x407b,	// (0x000363b5) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00041e48) list_single_touch_info_pane_t

0x204c,	// (0x00034386) bg_popup_heading_pane_cp

0x4089,	// (0x000363c3) heading_sub_pane_t1

0x246f,	// (0x000347a9) bg_popup_preview_window_pane_cp_ParamLimits

0x246f,	// (0x000347a9) bg_popup_preview_window_pane_cp

0x4045,	// (0x0003637f) heading_preview_pane

0x404d,	// (0x00036387) list_preview_pane_ParamLimits

0x404d,	// (0x00036387) list_preview_pane

0x4097,	// (0x000363d1) popup_preview_window_g1

0x405c,	// (0x00036396) list_single_preview_pane_ParamLimits

0x405c,	// (0x00036396) list_single_preview_pane

0x409f,	// (0x000363d9) list_single_preview_pane_g1

0x40a7,	// (0x000363e1) list_single_preview_pane_t1

0x406d,	// (0x000363a7) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00041e4d) list_single_preview_pane_t

0x40b5,	// (0x000363ef) bg_popup_heading_pane_cp2_ParamLimits

0x40b5,	// (0x000363ef) bg_popup_heading_pane_cp2

0x40cb,	// (0x00036405) heading_preview_pane_g1

0x40d3,	// (0x0003640d) heading_preview_pane_t1_ParamLimits

0x40d3,	// (0x0003640d) heading_preview_pane_t1

0x1054,	// (0x0003338e) soft_indicator_pane_t1_ParamLimits

0x1536,	// (0x00033870) scroll_pane_ParamLimits

0x193a,	// (0x00033c74) scroll_sc2_left_pane

0x1931,	// (0x00033c6b) scroll_sc2_right_pane

0x1959,	// (0x00033c93) scroll_bg_pane_g1_ParamLimits

0x196e,	// (0x00033ca8) scroll_bg_pane_g2_ParamLimits

0x1986,	// (0x00033cc0) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00041a1d) scroll_bg_pane_g_ParamLimits

0x1959,	// (0x00033c93) scroll_handle_pane_g1_ParamLimits

0x19a8,	// (0x00033ce2) scroll_handle_pane_g2_ParamLimits

0x1986,	// (0x00033cc0) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00041a24) scroll_handle_pane_g_ParamLimits

0xb754,	// (0x0003da8e) popup_choice_list_window_ParamLimits

0xb754,	// (0x0003da8e) popup_choice_list_window

0x232f,	// (0x00034669) choice_list_pane

0x23af,	// (0x000346e9) cell_toolbar_pane_t1

0x23d7,	// (0x00034711) toolbar_button_pane_ParamLimits

0x32c6,	// (0x00035600) ai_gene_pane_1_t2_ParamLimits

0x32c6,	// (0x00035600) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00041c4c) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00041c4c) ai_gene_pane_1_t

0x40f0,	// (0x0003642a) scroll_sc2_left_pane_g1

0x40f0,	// (0x0003642a) scroll_sc2_right_pane_g1

0x21ff,	// (0x00034539) bg_popup_sub_pane_cp10

0x40fa,	// (0x00036434) list_choice_list_pane

0x4111,	// (0x0003644b) list_single_choice_list_pane_ParamLimits

0x4111,	// (0x0003644b) list_single_choice_list_pane

0x4125,	// (0x0003645f) list_single_choice_list_pane_g1

0x1712,	// (0x00033a4c) list_single_choice_list_pane_t1_ParamLimits

0x1712,	// (0x00033a4c) list_single_choice_list_pane_t1

0x412d,	// (0x00036467) choice_list_pane_g1

0x4135,	// (0x0003646f) choice_list_pane_t1

0x0f8f,	// (0x000332c9) input_focus_pane_cp11

0x18a6,	// (0x00033be0) title_pane_stacon_g2_ParamLimits

0x18a6,	// (0x00033be0) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00041a03) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00041a03) title_pane_stacon_g

0x204c,	// (0x00034386) cursor_press_pane

0xb7f0,	// (0x0003db2a) popup_fep_hwr_window_ParamLimits

0xb7f0,	// (0x0003db2a) popup_fep_hwr_window

0xb84c,	// (0x0003db86) popup_fep_vkb_window_ParamLimits

0xb84c,	// (0x0003db86) popup_fep_vkb_window

0x4143,	// (0x0003647d) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00041e76) fep_vkb_side_pane_g_ParamLimits

0xc606,	// (0x0003e940) fep_hwr_candidate_pane_ParamLimits

0xc606,	// (0x0003e940) fep_hwr_candidate_pane

0xc62e,	// (0x0003e968) fep_hwr_side_pane_ParamLimits

0xc62e,	// (0x0003e968) fep_hwr_side_pane

0xc64e,	// (0x0003e988) fep_hwr_top_pane_ParamLimits

0xc64e,	// (0x0003e988) fep_hwr_top_pane

0xc666,	// (0x0003e9a0) fep_hwr_write_pane_ParamLimits

0xc666,	// (0x0003e9a0) fep_hwr_write_pane

0xfb3c,	// (0x00041e76) fep_vkb_side_pane_g

0x415d,	// (0x00036497) fep_hwr_top_pane_g1

0x414b,	// (0x00036485) fep_hwr_top_pane_g2

0xc6a0,	// (0x0003e9da) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00041e52) fep_hwr_top_pane_g

0xc6b5,	// (0x0003e9ef) fep_hwr_top_text_pane

0x1afc,	// (0x00033e36) fep_hwr_top_text_pane_g1

0x4193,	// (0x000364cd) fep_hwr_top_text_pane_t1

0xc7a3,	// (0x0003eadd) fep_hwr_candidate_pane_g1

0x8af0,	// (0x0003ae2a) fep_vkb_keypad_pane_g3_ParamLimits

0x8af0,	// (0x0003ae2a) fep_vkb_keypad_pane_g3

0x8b12,	// (0x0003ae4c) fep_vkb_keypad_pane_g4_ParamLimits

0x8b12,	// (0x0003ae4c) fep_vkb_keypad_pane_g4

0x8b81,	// (0x0003aebb) fep_vkb_bottom_pane_g2_ParamLimits

0x8b81,	// (0x0003aebb) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00041e7d) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00041e7d) fep_vkb_bottom_pane_g

0x40f0,	// (0x0003642a) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00041e87) cell_vkb_side_pane_g

0x8bc5,	// (0x0003aeff) cell_vkb_side_pane_t1

0x8bd3,	// (0x0003af0d) cell_vkb_side_pane_t1_copy1

0x40f0,	// (0x0003642a) bg_fep_vkb_candidate_pane_g2

0x8ca1,	// (0x0003afdb) cell_vkb_candidate_pane_ParamLimits

0x8935,	// (0x0003ac6f) aid_size_cell_vkb_ParamLimits

0x8935,	// (0x0003ac6f) aid_size_cell_vkb

0x8ca1,	// (0x0003afdb) cell_vkb_candidate_pane

0xc8ae,	// (0x0003ebe8) bg_popup_fep_shadow_pane_g1

0x899f,	// (0x0003acd9) fep_vkb_bottom_pane_ParamLimits

0x899f,	// (0x0003acd9) fep_vkb_bottom_pane

0x89dc,	// (0x0003ad16) fep_vkb_candidate_pane_ParamLimits

0x89dc,	// (0x0003ad16) fep_vkb_candidate_pane

0x89f8,	// (0x0003ad32) fep_vkb_keypad_pane_ParamLimits

0x89f8,	// (0x0003ad32) fep_vkb_keypad_pane

0x8a2c,	// (0x0003ad66) fep_vkb_side_pane_ParamLimits

0x8a2c,	// (0x0003ad66) fep_vkb_side_pane

0x8a58,	// (0x0003ad92) fep_vkb_top_pane_ParamLimits

0x8a58,	// (0x0003ad92) fep_vkb_top_pane

0x8a84,	// (0x0003adbe) fep_vkb_top_pane_g1_ParamLimits

0x8a84,	// (0x0003adbe) fep_vkb_top_pane_g1

0x8a93,	// (0x0003adcd) fep_vkb_top_pane_g2_ParamLimits

0x8a93,	// (0x0003adcd) fep_vkb_top_pane_g2

0x8aa2,	// (0x0003addc) fep_vkb_top_pane_g3_ParamLimits

0x8aa2,	// (0x0003addc) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00041e6d) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00041e6d) fep_vkb_top_pane_g

0x8ac0,	// (0x0003adfa) fep_vkb_top_text_pane_ParamLimits

0x8ac0,	// (0x0003adfa) fep_vkb_top_text_pane

0xc7d6,	// (0x0003eb10) fep_vkb_side_pane_g1_ParamLimits

0xc7d6,	// (0x0003eb10) fep_vkb_side_pane_g1

0x8adf,	// (0x0003ae19) grid_vkb_side_pane_ParamLimits

0x8adf,	// (0x0003ae19) grid_vkb_side_pane

0xc8b6,	// (0x0003ebf0) bg_popup_fep_shadow_pane_g2

0xc8bf,	// (0x0003ebf9) bg_popup_fep_shadow_pane_g3

0xc8c7,	// (0x0003ec01) bg_popup_fep_shadow_pane_g4

0xc8d0,	// (0x0003ec0a) bg_popup_fep_shadow_pane_g5

0xc8d8,	// (0x0003ec12) bg_popup_fep_shadow_pane_g6

0xc8e0,	// (0x0003ec1a) bg_popup_fep_shadow_pane_g7

0x1636,	// (0x00033970) bg_popup_fep_shadow_pane_g8

0x8b30,	// (0x0003ae6a) grid_vkb_keypad_number_pane_ParamLimits

0x8b30,	// (0x0003ae6a) grid_vkb_keypad_number_pane

0x8b40,	// (0x0003ae7a) grid_vkb_keypad_pane_ParamLimits

0x8b40,	// (0x0003ae7a) grid_vkb_keypad_pane

0x8b66,	// (0x0003aea0) fep_vkb_bottom_pane_g1_ParamLimits

0x8b66,	// (0x0003aea0) fep_vkb_bottom_pane_g1

0x8b8f,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8b8f,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane

0x8ba4,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8ba4,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane

0x8bb9,	// (0x0003aef3) fep_vkb_top_text_pane_g1

0xc820,	// (0x0003eb5a) fep_vkb_top_text_pane_t1

0xc835,	// (0x0003eb6f) cell_vkb_side_pane_ParamLimits

0xc835,	// (0x0003eb6f) cell_vkb_side_pane

0x40f0,	// (0x0003642a) cell_vkb_side_pane_g1

0x8be1,	// (0x0003af1b) cell_vkb_keypad_pane_ParamLimits

0x8be1,	// (0x0003af1b) cell_vkb_keypad_pane

0x8c4e,	// (0x0003af88) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x00041e9a) bg_popup_fep_shadow_pane_g

0xc8f0,	// (0x0003ec2a) cell_hwr_side_pane_g1

0xc8f0,	// (0x0003ec2a) cell_hwr_side_pane_g2

0x8c58,	// (0x0003af92) cell_vkb_keypad_pane_t1

0xc858,	// (0x0003eb92) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc858,	// (0x0003eb92) cell_vkb_keypad_bottom_left_pane

0xc875,	// (0x0003ebaf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc875,	// (0x0003ebaf) cell_vkb_keypad_bottom_right_pane

0x40f0,	// (0x0003642a) cell_vkb_keypad_bottom_left_pane_g1

0x40f0,	// (0x0003642a) cell_vkb_keypad_bottom_right_pane_g1

0x8c66,	// (0x0003afa0) cell_vkb_keypad_number_pane_ParamLimits

0x8c66,	// (0x0003afa0) cell_vkb_keypad_number_pane

0x8c85,	// (0x0003afbf) cell_vkb_keypad_number_pane_g1

0x8c8f,	// (0x0003afc9) cell_vkb_keypad_number_pane_g2

0x8c98,	// (0x0003afd2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00041e8c) cell_vkb_keypad_number_pane_g

0x8c58,	// (0x0003af92) cell_vkb_keypad_number_pane_t1

0x8cba,	// (0x0003aff4) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x00041ead) cell_hwr_side_pane_g

0x8cd3,	// (0x0003b00d) cell_hwr_side_pane_t1

0xc8fa,	// (0x0003ec34) cell_hwr_side_pane_t1_copy1

0xc908,	// (0x0003ec42) cell_hwr_candidate_pane_g1

0xc937,	// (0x0003ec71) cell_hwr_candidate_pane_t1

0x40f0,	// (0x0003642a) cell_vkb_candidate_pane_g2

0x8d59,	// (0x0003b093) cell_vkb_candidate_pane_t1

0xc5d1,	// (0x0003e90b) bg_popup_fep_shadow_pane_ParamLimits

0xc5d1,	// (0x0003e90b) bg_popup_fep_shadow_pane

0xc680,	// (0x0003e9ba) bg_fep_hwr_top_pane_g4

0x416f,	// (0x000364a9) bg_hwr_side_pane_g1_ParamLimits

0x416f,	// (0x000364a9) bg_hwr_side_pane_g1

0xc6f1,	// (0x0003ea2b) cell_hwr_side_pane_ParamLimits

0xc6f1,	// (0x0003ea2b) cell_hwr_side_pane

0xc72c,	// (0x0003ea66) fep_hwr_write_pane_g1_ParamLimits

0xc72c,	// (0x0003ea66) fep_hwr_write_pane_g1

0xc739,	// (0x0003ea73) fep_hwr_write_pane_g2_ParamLimits

0xc739,	// (0x0003ea73) fep_hwr_write_pane_g2

0xc746,	// (0x0003ea80) fep_hwr_write_pane_g3_ParamLimits

0xc746,	// (0x0003ea80) fep_hwr_write_pane_g3

0xc754,	// (0x0003ea8e) fep_hwr_write_pane_g4_ParamLimits

0xc754,	// (0x0003ea8e) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00041e59) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00041e59) fep_hwr_write_pane_g

0xc680,	// (0x0003e9ba) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc680,	// (0x0003e9ba) bg_fep_hwr_candidate_pane_g2

0xc769,	// (0x0003eaa3) cell_hwr_candidate_pane_ParamLimits

0xc769,	// (0x0003eaa3) cell_hwr_candidate_pane

0xc7a3,	// (0x0003eadd) fep_hwr_candidate_pane_g1_ParamLimits

0x8963,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x8963,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2

0x8ab2,	// (0x0003adec) fep_vkb_top_pane_g4_ParamLimits

0x8ab2,	// (0x0003adec) fep_vkb_top_pane_g4

0x8ad1,	// (0x0003ae0b) fep_vkb_side_pane_g2_ParamLimits

0x8ad1,	// (0x0003ae0b) fep_vkb_side_pane_g2

0xe274,	// (0x000405ae) list_setting_pane_t4_ParamLimits

0xe274,	// (0x000405ae) list_setting_pane_t4

0xe30a,	// (0x00040644) list_setting_number_pane_t5_ParamLimits

0xe30a,	// (0x00040644) list_setting_number_pane_t5

0x453b,	// (0x00036875) list_double_heading_pane_cp2_ParamLimits

0x453b,	// (0x00036875) list_double_heading_pane_cp2

0x15d4,	// (0x0003390e) list_double_heading_pane_g1_cp2_ParamLimits

0x15d4,	// (0x0003390e) list_double_heading_pane_g1_cp2

0x15e0,	// (0x0003391a) list_double_heading_pane_g2_cp2_ParamLimits

0x15e0,	// (0x0003391a) list_double_heading_pane_g2_cp2

0x8d67,	// (0x0003b0a1) list_double_heading_pane_t1_cp2_ParamLimits

0x8d67,	// (0x0003b0a1) list_double_heading_pane_t1_cp2

0x8d7d,	// (0x0003b0b7) list_double_heading_pane_t2_cp2_ParamLimits

0x8d7d,	// (0x0003b0b7) list_double_heading_pane_t2_cp2

0x0f87,	// (0x000332c1) aid_value_unit2

0xafec,	// (0x0003d326) popup_preview_fixed_window

0x1142,	// (0x0003347c) bg_popup_preview_window_pane_cp02

0x8d8f,	// (0x0003b0c9) list_preview_fixed_pane

0x8dd5,	// (0x0003b10f) list_empty_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_empty_pane_fp

0x8dd5,	// (0x0003b10f) list_single_cale_day_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_cale_day_pane_fp

0x8dd5,	// (0x0003b10f) list_single_graphic_heading_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_graphic_heading_pane_fp

0x8dd5,	// (0x0003b10f) list_single_graphic_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_graphic_pane_fp

0x8dd5,	// (0x0003b10f) list_single_heading_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_heading_pane_fp

0x8dd5,	// (0x0003b10f) list_single_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_pane_fp

0x8de8,	// (0x0003b122) list_single_pane_fp_g1_ParamLimits

0x8de8,	// (0x0003b122) list_single_pane_fp_g1

0xf469,	// (0x000417a3) list_single_pane_fp_g2_ParamLimits

0xf469,	// (0x000417a3) list_single_pane_fp_g2

0xf475,	// (0x000417af) list_single_pane_fp_g3_ParamLimits

0xf475,	// (0x000417af) list_single_pane_fp_g3

0x8df4,	// (0x0003b12e) list_single_pane_fp_g4_ParamLimits

0x8df4,	// (0x0003b12e) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00041ec0) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00041ec0) list_single_pane_fp_g

0xea8b,	// (0x00040dc5) list_single_pane_fp_t1_ParamLimits

0xea8b,	// (0x00040dc5) list_single_pane_fp_t1

0xeaa2,	// (0x00040ddc) list_single_graphic_pane_fp_g1_ParamLimits

0xeaa2,	// (0x00040ddc) list_single_graphic_pane_fp_g1

0x8de8,	// (0x0003b122) list_single_graphic_pane_fp_g2_ParamLimits

0x8de8,	// (0x0003b122) list_single_graphic_pane_fp_g2

0xf469,	// (0x000417a3) list_single_graphic_pane_fp_g3_ParamLimits

0xf469,	// (0x000417a3) list_single_graphic_pane_fp_g3

0xf475,	// (0x000417af) list_single_graphic_pane_fp_g4_ParamLimits

0xf475,	// (0x000417af) list_single_graphic_pane_fp_g4

0x8df4,	// (0x0003b12e) list_single_graphic_pane_fp_g5_ParamLimits

0x8df4,	// (0x0003b12e) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00041ec9) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00041ec9) list_single_graphic_pane_fp_g

0xeaae,	// (0x00040de8) list_single_graphic_pane_fp_t1_ParamLimits

0xeaae,	// (0x00040de8) list_single_graphic_pane_fp_t1

0xeaa2,	// (0x00040ddc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeaa2,	// (0x00040ddc) list_single_graphic_heading_pane_fp_g1

0x8de8,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8de8,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2

0xf469,	// (0x000417a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf469,	// (0x000417a3) list_single_graphic_heading_pane_fp_g3

0xf475,	// (0x000417af) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf475,	// (0x000417af) list_single_graphic_heading_pane_fp_g4

0x8df4,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8df4,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00041ec9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00041ec9) list_single_graphic_heading_pane_fp_g

0xeac4,	// (0x00040dfe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeac4,	// (0x00040dfe) list_single_graphic_heading_pane_fp_t1

0xeada,	// (0x00040e14) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeada,	// (0x00040e14) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00041ed4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00041ed4) list_single_graphic_heading_pane_fp_t

0xeaec,	// (0x00040e26) list_single_cale_day_pane_fp_g1_ParamLimits

0xeaec,	// (0x00040e26) list_single_cale_day_pane_fp_g1

0x8e00,	// (0x0003b13a) list_single_cale_day_pane_fp_g2_ParamLimits

0x8e00,	// (0x0003b13a) list_single_cale_day_pane_fp_g2

0xf489,	// (0x000417c3) list_single_cale_day_pane_fp_g3_ParamLimits

0xf489,	// (0x000417c3) list_single_cale_day_pane_fp_g3

0xf4b1,	// (0x000417eb) list_single_cale_day_pane_fp_g4_ParamLimits

0xf4b1,	// (0x000417eb) list_single_cale_day_pane_fp_g4

0xf4d5,	// (0x0004180f) list_single_cale_day_pane_fp_g5_ParamLimits

0xf4d5,	// (0x0004180f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00041ed9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00041ed9) list_single_cale_day_pane_fp_g

0xeb24,	// (0x00040e5e) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb24,	// (0x00040e5e) list_single_cale_day_pane_fp_t1

0xeb4a,	// (0x00040e84) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb4a,	// (0x00040e84) list_single_cale_day_pane_fp_t2

0xeb63,	// (0x00040e9d) list_single_cale_day_pane_fp_t3_ParamLimits

0xeb63,	// (0x00040e9d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00041ee4) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00041ee4) list_single_cale_day_pane_fp_t

0x8de8,	// (0x0003b122) list_empty_pane_fp_g1_ParamLimits

0x8de8,	// (0x0003b122) list_empty_pane_fp_g1

0xeb7c,	// (0x00040eb6) list_empty_pane_fp_t1

0xeb8a,	// (0x00040ec4) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00041eeb) list_empty_pane_fp_t

0x8de8,	// (0x0003b122) list_single_heading_pane_fp_g1_ParamLimits

0x8de8,	// (0x0003b122) list_single_heading_pane_fp_g1

0xf469,	// (0x000417a3) list_single_heading_pane_fp_g2_ParamLimits

0xf469,	// (0x000417a3) list_single_heading_pane_fp_g2

0xf475,	// (0x000417af) list_single_heading_pane_fp_g3_ParamLimits

0xf475,	// (0x000417af) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00041ef0) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00041ef0) list_single_heading_pane_fp_g

0xeb98,	// (0x00040ed2) list_single_heading_pane_fp_t1_ParamLimits

0xeb98,	// (0x00040ed2) list_single_heading_pane_fp_t1

0xebaa,	// (0x00040ee4) list_single_heading_pane_fp_t2_ParamLimits

0xebaa,	// (0x00040ee4) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00041ef7) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00041ef7) list_single_heading_pane_fp_t

0x173d,	// (0x00033a77) aid_size_cell_fast

0x1117,	// (0x00033451) soft_indicator_pane_cp1_t1

0x177a,	// (0x00033ab4) cell_app_pane_cp2_ParamLimits

0x177a,	// (0x00033ab4) cell_app_pane_cp2

0xc5f3,	// (0x0003e92d) fep_hwr_candidate_drop_down_list_pane

0xc7bd,	// (0x0003eaf7) fep_hwr_candidate_pane_g3_ParamLimits

0xc7bd,	// (0x0003eaf7) fep_hwr_candidate_pane_g3

0x8412,	// (0x0003a74c) fep_hwr_candidate_pane_g4_ParamLimits

0x8412,	// (0x0003a74c) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00041e66) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00041e66) fep_hwr_candidate_pane_g

0x89cb,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x89cb,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane

0x8cc2,	// (0x0003affc) fep_vkb_candidate_pane_g3

0x8cca,	// (0x0003b004) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00041e93) fep_vkb_candidate_pane_g

0xc908,	// (0x0003ec42) cell_hwr_candidate_pane_g1_ParamLimits

0xc916,	// (0x0003ec50) cell_hwr_candidate_pane_g3_ParamLimits

0xc916,	// (0x0003ec50) cell_hwr_candidate_pane_g3

0x9d6f,	// (0x0003c0a9) cell_hwr_candidate_pane_g4_ParamLimits

0x9d6f,	// (0x0003c0a9) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00041eb2) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00041eb2) cell_hwr_candidate_pane_g

0x8d23,	// (0x0003b05d) cell_vkb_candidate_pane_g3_ParamLimits

0x8d23,	// (0x0003b05d) cell_vkb_candidate_pane_g3

0x8d3e,	// (0x0003b078) cell_vkb_candidate_pane_g4_ParamLimits

0x8d3e,	// (0x0003b078) cell_vkb_candidate_pane_g4

0x8e0c,	// (0x0003b146) cell_app_pane_cp2_g1_ParamLimits

0x8e0c,	// (0x0003b146) cell_app_pane_cp2_g1

0x8e2a,	// (0x0003b164) cell_app_pane_cp2_g2_ParamLimits

0x8e2a,	// (0x0003b164) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00041efc) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00041efc) cell_app_pane_cp2_g

0x8e36,	// (0x0003b170) cell_app_pane_cp2_t1_ParamLimits

0x8e36,	// (0x0003b170) cell_app_pane_cp2_t1

0x15c6,	// (0x00033900) grid_highlight_pane_cp1_ParamLimits

0x15c6,	// (0x00033900) grid_highlight_pane_cp1

0xc954,	// (0x0003ec8e) cell_hwr_candidate_pane_cp1_ParamLimits

0xc954,	// (0x0003ec8e) cell_hwr_candidate_pane_cp1

0xc908,	// (0x0003ec42) fep_hwr_candidate_drop_down_list_pane_g1

0xc972,	// (0x0003ecac) fep_hwr_candidate_drop_down_list_pane_g2

0xc97f,	// (0x0003ecb9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00041f01) fep_hwr_candidate_drop_down_list_pane_g

0xc98c,	// (0x0003ecc6) fep_hwr_candidate_drop_down_list_scroll_pane

0xc995,	// (0x0003eccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc995,	// (0x0003eccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc9a2,	// (0x0003ecdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9a2,	// (0x0003ecdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc9af,	// (0x0003ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9af,	// (0x0003ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc9bc,	// (0x0003ecf6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9bc,	// (0x0003ecf6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc9d7,	// (0x0003ed11) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9d7,	// (0x0003ed11) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc9f2,	// (0x0003ed2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f2,	// (0x0003ed2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xca0d,	// (0x0003ed47) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca0d,	// (0x0003ed47) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xca28,	// (0x0003ed62) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca28,	// (0x0003ed62) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00041f08) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00041f08) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca43,	// (0x0003ed7d) cell_vkb_candidate_pane_cp1_ParamLimits

0xca43,	// (0x0003ed7d) cell_vkb_candidate_pane_cp1

0x8ab2,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8ab2,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1

0x8e48,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8e48,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2

0x8e55,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8e55,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x00041f19) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x00041f19) fep_vkb_candidate_drop_down_list_pane_g

0x8e62,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8e62,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane

0x8e6f,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8e6f,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8e7c,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8e7c,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8e88,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8e88,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8ce1,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8ce1,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8d02,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8d02,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8e94,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8e94,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8eb5,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8eb5,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8ed6,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8ed6,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00041f20) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00041f20) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x41b9,	// (0x000364f3) title_pane_g1_ParamLimits

0x41c6,	// (0x00036500) title_pane_g2_ParamLimits

0xf54e,	// (0x00041888) title_pane_g_ParamLimits

0x1af4,	// (0x00033e2e) aid_call2_pane

0x1aec,	// (0x00033e26) aid_call_pane

0x1afc,	// (0x00033e36) popup_clock_analogue_window_g1

0x1afc,	// (0x00033e36) popup_clock_analogue_window_g2

0xb323,	// (0x0003d65d) popup_clock_analogue_window_g3

0xb32c,	// (0x0003d666) popup_clock_analogue_window_g4

0x0f99,	// (0x000332d3) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00041a32) popup_clock_analogue_window_g

0xb334,	// (0x0003d66e) popup_clock_analogue_window_t1

0xb342,	// (0x0003d67c) clock_digital_number_pane_ParamLimits

0xb342,	// (0x0003d67c) clock_digital_number_pane

0xb34e,	// (0x0003d688) clock_digital_number_pane_cp02_ParamLimits

0xb34e,	// (0x0003d688) clock_digital_number_pane_cp02

0xb35a,	// (0x0003d694) clock_digital_number_pane_cp03_ParamLimits

0xb35a,	// (0x0003d694) clock_digital_number_pane_cp03

0xb366,	// (0x0003d6a0) clock_digital_number_pane_cp04_ParamLimits

0xb366,	// (0x0003d6a0) clock_digital_number_pane_cp04

0xb372,	// (0x0003d6ac) clock_digital_separator_pane_ParamLimits

0xb372,	// (0x0003d6ac) clock_digital_separator_pane

0xb37e,	// (0x0003d6b8) popup_clock_digital_window_t1_ParamLimits

0xb37e,	// (0x0003d6b8) popup_clock_digital_window_t1

0x0f99,	// (0x000332d3) clock_digital_number_pane_g1

0x0f99,	// (0x000332d3) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00041a3d) clock_digital_number_pane_g

0x0f99,	// (0x000332d3) clock_digital_separator_pane_g1

0x0f99,	// (0x000332d3) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00041a3d) clock_digital_separator_pane_g

0x4745,	// (0x00036a7f) aid_fill_nsta_ParamLimits

0x4802,	// (0x00036b3c) indicator_nsta_pane_ParamLimits

0x22d8,	// (0x00034612) popup_clock_analogue_window

0x22d8,	// (0x00034612) popup_clock_digital_window

0x0ff1,	// (0x0003332b) grid_indicator_nsta_pane_ParamLimits

0x3de8,	// (0x00036122) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00041de6) clock_nsta_pane_t

0xb2e7,	// (0x0003d621) aid_size_max_handle

0xb2f1,	// (0x0003d62b) aid_size_min_handle

0x204c,	// (0x00034386) editor_scroll_pane

0x8ef1,	// (0x0003b22b) ex_editor_pane

0x16ef,	// (0x00033a29) scroll_pane_cp13

0x1562,	// (0x0003389c) scroll_pane_cp14

0x1b2b,	// (0x00033e65) scroll_pane_cp36

0x454c,	// (0x00036886) list_single_graphic_hl_pane_cp2_ParamLimits

0x454c,	// (0x00036886) list_single_graphic_hl_pane_cp2

0xc0d6,	// (0x0003e410) list_single_graphic_hl_pane_ParamLimits

0xc0d6,	// (0x0003e410) list_single_graphic_hl_pane

0xebc0,	// (0x00040efa) aid_size_min_hl_cp1

0x8ef9,	// (0x0003b233) list_highlight_pane_cp34_ParamLimits

0x8ef9,	// (0x0003b233) list_highlight_pane_cp34

0x8f0a,	// (0x0003b244) list_single_graphic_hl_pane_g1_ParamLimits

0x8f0a,	// (0x0003b244) list_single_graphic_hl_pane_g1

0xebc9,	// (0x00040f03) list_single_graphic_hl_pane_g2_ParamLimits

0xebc9,	// (0x00040f03) list_single_graphic_hl_pane_g2

0xebc9,	// (0x00040f03) list_single_graphic_hl_pane_g3_ParamLimits

0xebc9,	// (0x00040f03) list_single_graphic_hl_pane_g3

0xf4f9,	// (0x00041833) list_single_graphic_hl_pane_g4_ParamLimits

0xf4f9,	// (0x00041833) list_single_graphic_hl_pane_g4

0xf505,	// (0x0004183f) list_single_graphic_hl_pane_g5_ParamLimits

0xf505,	// (0x0004183f) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00041f31) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00041f31) list_single_graphic_hl_pane_g

0xebd5,	// (0x00040f0f) list_single_graphic_hl_pane_t1_ParamLimits

0xebd5,	// (0x00040f0f) list_single_graphic_hl_pane_t1

0x8f17,	// (0x0003b251) aid_size_min_hl_cp2

0x8f20,	// (0x0003b25a) list_highlight_pane_cp34_cp2_ParamLimits

0x8f20,	// (0x0003b25a) list_highlight_pane_cp34_cp2

0x8f0a,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8f0a,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2

0x8f2d,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8f2d,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2

0x8f39,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8f39,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2

0x1f85,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1f85,	// (0x000342bf) list_single_graphic_hl_pane_g4_cp2

0x8f45,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8f45,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2

0xb615,	// (0x0003d94f) control_pane_g4_ParamLimits

0xb615,	// (0x0003d94f) control_pane_g4

0x21ff,	// (0x00034539) bg_popup_sub_pane_cp10_ParamLimits

0x40fa,	// (0x00036434) list_choice_list_pane_ParamLimits

0x4109,	// (0x00036443) scroll_pane_cp23

0x1142,	// (0x0003347c) bg_popup_preview_window_pane_cp02_ParamLimits

0x8d8f,	// (0x0003b0c9) list_preview_fixed_pane_ParamLimits

0x8da5,	// (0x0003b0df) list_preview_fixed_pane_cp_ParamLimits

0x8da5,	// (0x0003b0df) list_preview_fixed_pane_cp

0x8db1,	// (0x0003b0eb) popup_preview_fixed_window_g1_ParamLimits

0x8db1,	// (0x0003b0eb) popup_preview_fixed_window_g1

0x8dbd,	// (0x0003b0f7) popup_preview_fixed_window_g2_ParamLimits

0x8dbd,	// (0x0003b0f7) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00041eb9) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00041eb9) popup_preview_fixed_window_g

0xb263,	// (0x0003d59d) aid_navi_side_left_pane_ParamLimits

0xb274,	// (0x0003d5ae) aid_navi_side_right_pane_ParamLimits

0xb288,	// (0x0003d5c2) navi_icon_pane_stacon_ParamLimits

0xb29c,	// (0x0003d5d6) navi_navi_pane_stacon_ParamLimits

0xb288,	// (0x0003d5c2) navi_text_pane_stacon_ParamLimits

0xaecb,	// (0x0003d205) main_text_info_pane

0x8f6f,	// (0x0003b2a9) listscroll_text_info_pane

0x8f77,	// (0x0003b2b1) list_text_info_pane_ParamLimits

0x8f77,	// (0x0003b2b1) list_text_info_pane

0x8f86,	// (0x0003b2c0) scroll_pane_cp24_ParamLimits

0x8f86,	// (0x0003b2c0) scroll_pane_cp24

0xca66,	// (0x0003eda0) list_text_info_pane_t1_ParamLimits

0xca66,	// (0x0003eda0) list_text_info_pane_t1

0xb76e,	// (0x0003daa8) popup_fast_swap2_window_ParamLimits

0xb76e,	// (0x0003daa8) popup_fast_swap2_window

0x8fa4,	// (0x0003b2de) aid_size_cell_fast2

0x0f8f,	// (0x000332c9) bg_popup_window_pane_cp17

0x273a,	// (0x00034a74) heading_pane_cp2

0x1335,	// (0x0003366f) listscroll_fast2_pane

0x8fae,	// (0x0003b2e8) grid_fast2_pane

0x8fb6,	// (0x0003b2f0) listscroll_fast2_pane_g1

0x8fbe,	// (0x0003b2f8) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x00041f3c) listscroll_fast2_pane_g

0x16ef,	// (0x00033a29) scroll_pane_cp26

0x8fc6,	// (0x0003b300) cell_fast2_pane_ParamLimits

0x8fc6,	// (0x0003b300) cell_fast2_pane

0x8fdb,	// (0x0003b315) cell_fast2_pane_g1

0x8fe4,	// (0x0003b31e) cell_fast2_pane_g2

0x8fed,	// (0x0003b327) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00041f41) cell_fast2_pane_g

0x13c5,	// (0x000336ff) grid_highlight_pane_cp9

0xb73a,	// (0x0003da74) main_eswt_pane_ParamLimits

0xb73a,	// (0x0003da74) main_eswt_pane

0x8f9b,	// (0x0003b2d5) list_single_text_info_pane

0x8ff5,	// (0x0003b32f) eswt_ctrl_button_pane

0x8ff5,	// (0x0003b32f) eswt_ctrl_canvas_pane

0x8ffd,	// (0x0003b337) eswt_ctrl_combo_pane

0x8ff5,	// (0x0003b32f) eswt_ctrl_default_pane

0x8ff5,	// (0x0003b32f) eswt_ctrl_label_pane

0x9005,	// (0x0003b33f) eswt_ctrl_wait_pane

0x900d,	// (0x0003b347) eswt_shell_pane

0x0f8f,	// (0x000332c9) listscroll_eswt_app_pane

0x9029,	// (0x0003b363) popup_eswt_tasktip_window_ParamLimits

0x9029,	// (0x0003b363) popup_eswt_tasktip_window

0x246f,	// (0x000347a9) bg_popup_window_pane_cp18

0x903a,	// (0x0003b374) eswt_control_pane_g1_ParamLimits

0x903a,	// (0x0003b374) eswt_control_pane_g1

0x9047,	// (0x0003b381) eswt_control_pane_g2_ParamLimits

0x9047,	// (0x0003b381) eswt_control_pane_g2

0x9054,	// (0x0003b38e) eswt_control_pane_g3_ParamLimits

0x9054,	// (0x0003b38e) eswt_control_pane_g3

0x9061,	// (0x0003b39b) eswt_control_pane_g4_ParamLimits

0x9061,	// (0x0003b39b) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x00041f48) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x00041f48) eswt_control_pane_g

0x15c6,	// (0x00033900) bg_button_pane_ParamLimits

0x15c6,	// (0x00033900) bg_button_pane

0x13da,	// (0x00033714) common_borders_pane_copy2_ParamLimits

0x13da,	// (0x00033714) common_borders_pane_copy2

0x906e,	// (0x0003b3a8) control_button_pane_g1_ParamLimits

0x906e,	// (0x0003b3a8) control_button_pane_g1

0x907a,	// (0x0003b3b4) control_button_pane_g2_ParamLimits

0x907a,	// (0x0003b3b4) control_button_pane_g2

0x9086,	// (0x0003b3c0) control_button_pane_g3_ParamLimits

0x9086,	// (0x0003b3c0) control_button_pane_g3

0x0002,

0xfc17,	// (0x00041f51) control_button_pane_g_ParamLimits

0xfc17,	// (0x00041f51) control_button_pane_g

0x909a,	// (0x0003b3d4) control_button_pane_t1

0x90a8,	// (0x0003b3e2) control_button_pane_t2

0x0001,

0xfc1e,	// (0x00041f58) control_button_pane_t

0x23e3,	// (0x0003471d) bg_button_pane_g1

0x23eb,	// (0x00034725) bg_button_pane_g2

0x23f3,	// (0x0003472d) bg_button_pane_g3

0x23fb,	// (0x00034735) bg_button_pane_g4

0x2403,	// (0x0003473d) bg_button_pane_g5

0x240b,	// (0x00034745) bg_button_pane_g6

0x2413,	// (0x0003474d) bg_button_pane_g7

0x241b,	// (0x00034755) bg_button_pane_g8

0x2423,	// (0x0003475d) bg_button_pane_g9

0x0008,

0xf866,	// (0x00041ba0) bg_button_pane_g

0x40b5,	// (0x000363ef) common_borders_pane_ParamLimits

0x40b5,	// (0x000363ef) common_borders_pane

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy1_ParamLimits

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy1

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy1_ParamLimits

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy1

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy1_ParamLimits

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy1

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy1_ParamLimits

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy1

0x40f0,	// (0x0003642a) bg_eswt_ctrl_canvas_pane_g1

0x40b5,	// (0x000363ef) common_borders_pane_cp2_ParamLimits

0x40b5,	// (0x000363ef) common_borders_pane_cp2

0x40b5,	// (0x000363ef) common_borders_pane_cp3_ParamLimits

0x40b5,	// (0x000363ef) common_borders_pane_cp3

0x90b6,	// (0x0003b3f0) separator_horizontal_pane

0x90be,	// (0x0003b3f8) separator_vertical_pane

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy2_ParamLimits

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy2

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy2_ParamLimits

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy2

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy2_ParamLimits

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy2

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy2_ParamLimits

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy2

0x0f8f,	// (0x000332c9) common_borders_pane_cp4

0x90c7,	// (0x0003b401) separator_horizontal_pane_g1

0x90d0,	// (0x0003b40a) separator_horizontal_pane_g2

0x90d9,	// (0x0003b413) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x00041f5d) separator_horizontal_pane_g

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy3_ParamLimits

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy3

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy3_ParamLimits

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy3

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy3_ParamLimits

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy3

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy3_ParamLimits

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy3

0x0f8f,	// (0x000332c9) common_borders_pane_cp5

0x90e2,	// (0x0003b41c) separator_vertical_pane_g1

0x90eb,	// (0x0003b425) separator_vertical_pane_g2

0x90f4,	// (0x0003b42e) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00041f64) separator_vertical_pane_g

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy4_ParamLimits

0x903a,	// (0x0003b374) eswt_control_pane_g1_copy4

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy4_ParamLimits

0x9047,	// (0x0003b381) eswt_control_pane_g2_copy4

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy4_ParamLimits

0x9054,	// (0x0003b38e) eswt_control_pane_g3_copy4

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy4_ParamLimits

0x9061,	// (0x0003b39b) eswt_control_pane_g4_copy4

0xca81,	// (0x0003edbb) eswt_ctrl_combo_button_pane

0xca89,	// (0x0003edc3) eswt_ctrl_input_pane

0xca91,	// (0x0003edcb) popup_choice_list_window_cp70

0xca99,	// (0x0003edd3) eswt_ctrl_input_pane_t1

0x0f8f,	// (0x000332c9) input_focus_pane_cp70

0x40b5,	// (0x000363ef) bg_button_pane_cp70_ParamLimits

0x40b5,	// (0x000363ef) bg_button_pane_cp70

0xcaa7,	// (0x0003ede1) eswt_ctrl_combo_button_pane_g1

0x90fd,	// (0x0003b437) wait_bar_pane_cp70

0x246f,	// (0x000347a9) bg_popup_window_pane_cp70_ParamLimits

0x246f,	// (0x000347a9) bg_popup_window_pane_cp70

0x9105,	// (0x0003b43f) popup_eswt_tasktip_window_t1

0x911b,	// (0x0003b455) wait_bar_pane_cp71_ParamLimits

0x911b,	// (0x0003b455) wait_bar_pane_cp71

0x9127,	// (0x0003b461) grid_eswt_app_pane

0x193a,	// (0x00033c74) scroll_pane_cp70

0xcaaf,	// (0x0003ede9) cell_eswt_app_pane_ParamLimits

0xcaaf,	// (0x0003ede9) cell_eswt_app_pane

0xcad7,	// (0x0003ee11) cell_eswt_app_pane_g1_ParamLimits

0xcad7,	// (0x0003ee11) cell_eswt_app_pane_g1

0xcb06,	// (0x0003ee40) cell_eswt_app_pane_g2_ParamLimits

0xcb06,	// (0x0003ee40) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x00041f6b) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x00041f6b) cell_eswt_app_pane_g

0xcb2f,	// (0x0003ee69) cell_eswt_app_pane_t1_ParamLimits

0xcb2f,	// (0x0003ee69) cell_eswt_app_pane_t1

0x9130,	// (0x0003b46a) grid_highlight_pane_cp70_ParamLimits

0x9130,	// (0x0003b46a) grid_highlight_pane_cp70

0x156a,	// (0x000338a4) set_content_pane_g1

0x46f6,	// (0x00036a30) status_small_volume_pane

0xcb61,	// (0x0003ee9b) status_small_volume_pane_g1

0xcb69,	// (0x0003eea3) volume_small2_pane

0xcb72,	// (0x0003eeac) volume_small2_pane_g1

0xcb7b,	// (0x0003eeb5) volume_small2_pane_g2

0xcb84,	// (0x0003eebe) volume_small2_pane_g3

0xcb8d,	// (0x0003eec7) volume_small2_pane_g4

0xcb96,	// (0x0003eed0) volume_small2_pane_g5

0xcb9f,	// (0x0003eed9) volume_small2_pane_g6

0xcba8,	// (0x0003eee2) volume_small2_pane_g7

0xcbb1,	// (0x0003eeeb) volume_small2_pane_g8

0xcbba,	// (0x0003eef4) volume_small2_pane_g9

0xcbc3,	// (0x0003eefd) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00041f70) volume_small2_pane_g

0x8bb9,	// (0x0003aef3) fep_vkb_top_text_pane_g1_ParamLimits

0xc820,	// (0x0003eb5a) fep_vkb_top_text_pane_t1_ParamLimits

0x8dc9,	// (0x0003b103) popup_preview_fixed_window_g3_ParamLimits

0x8dc9,	// (0x0003b103) popup_preview_fixed_window_g3

0xbb49,	// (0x0003de83) popup_toolbar_trans_pane

0xbf86,	// (0x0003e2c0) aid_height_set_list_ParamLimits

0x350b,	// (0x00035845) aid_size_parent_ParamLimits

0x21ff,	// (0x00034539) list_highlight_pane_cp2_ParamLimits

0x156a,	// (0x000338a4) set_content_pane_g1_ParamLimits

0xc0e7,	// (0x0003e421) list_single_image_pane_ParamLimits

0xc0e7,	// (0x0003e421) list_single_image_pane

0xcbcc,	// (0x0003ef06) aid_size_cell_image_ParamLimits

0xcbcc,	// (0x0003ef06) aid_size_cell_image

0xcbd9,	// (0x0003ef13) grid_single_image_pane_ParamLimits

0xcbd9,	// (0x0003ef13) grid_single_image_pane

0x15d4,	// (0x0003390e) list_single_image_pane_g1_ParamLimits

0x15d4,	// (0x0003390e) list_single_image_pane_g1

0x15e0,	// (0x0003391a) list_single_image_pane_g2_ParamLimits

0x15e0,	// (0x0003391a) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00041f85) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00041f85) list_single_image_pane_g

0x913c,	// (0x0003b476) list_single_image_pane_t1_ParamLimits

0x913c,	// (0x0003b476) list_single_image_pane_t1

0xcbe5,	// (0x0003ef1f) cell_image_list_pane_ParamLimits

0xcbe5,	// (0x0003ef1f) cell_image_list_pane

0xcbf8,	// (0x0003ef32) cell_image_list_pane_g1

0xcc01,	// (0x0003ef3b) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x00041f8a) cell_image_list_pane_g

0x9152,	// (0x0003b48c) aid_size_cell_tb_trans_pane

0x15c6,	// (0x00033900) bg_tb_trans_pane

0x9164,	// (0x0003b49e) grid_tb_trans_pane

0x23e3,	// (0x0003471d) bg_tb_trans_pane_g1

0x23eb,	// (0x00034725) bg_tb_trans_pane_g2

0x23f3,	// (0x0003472d) bg_tb_trans_pane_g3

0x23fb,	// (0x00034735) bg_tb_trans_pane_g4

0x2403,	// (0x0003473d) bg_tb_trans_pane_g5

0x241b,	// (0x00034755) bg_tb_trans_pane_g6

0x2423,	// (0x0003475d) bg_tb_trans_pane_g7

0x240b,	// (0x00034745) bg_tb_trans_pane_g8

0x2413,	// (0x0003474d) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00041f8f) bg_tb_trans_pane_g

0x9178,	// (0x0003b4b2) cell_toolbar_trans_pane_ParamLimits

0x9178,	// (0x0003b4b2) cell_toolbar_trans_pane

0x40f0,	// (0x0003642a) cell_toolbar_trans_pane_g1

0xc49f,	// (0x0003e7d9) list_form2_midp_pane_t1

0xc4ad,	// (0x0003e7e7) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00041e2c) list_form2_midp_pane_t

0x3ea8,	// (0x000361e2) scroll_pane_cp51_ParamLimits

0x3fc5,	// (0x000362ff) form2_midp_wait_pane_g1

0x3fce,	// (0x00036308) form2_midp_wait_pane_g2

0x3fd7,	// (0x00036311) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00041e41) form2_midp_wait_pane_g

0x0ff1,	// (0x0003332b) list_highlight_pane_cp21_ParamLimits

0x3ff7,	// (0x00036331) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4006,	// (0x00036340) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe775,	// (0x00040aaf) list_single_2graphic_im_pane_ParamLimits

0xe775,	// (0x00040aaf) list_single_2graphic_im_pane

0xcc0a,	// (0x0003ef44) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0a,	// (0x0003ef44) list_single_2graphic_im_pane_g1

0x919e,	// (0x0003b4d8) list_single_2graphic_im_pane_g2_ParamLimits

0x919e,	// (0x0003b4d8) list_single_2graphic_im_pane_g2

0x91aa,	// (0x0003b4e4) list_single_2graphic_im_pane_g3_ParamLimits

0x91aa,	// (0x0003b4e4) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x00041fa2) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x00041fa2) list_single_2graphic_im_pane_g

0xcc1b,	// (0x0003ef55) list_single_2graphic_im_pane_t1_ParamLimits

0xcc1b,	// (0x0003ef55) list_single_2graphic_im_pane_t1

0x8dd5,	// (0x0003b10f) list_single_graphic_2heading_pane_fp_ParamLimits

0x8dd5,	// (0x0003b10f) list_single_graphic_2heading_pane_fp

0xeaa2,	// (0x00040ddc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeaa2,	// (0x00040ddc) list_single_graphic_2heading_pane_fp_g1

0x8de8,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8de8,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2

0xf469,	// (0x000417a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf469,	// (0x000417a3) list_single_graphic_2heading_pane_fp_g3

0xf475,	// (0x000417af) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf475,	// (0x000417af) list_single_graphic_2heading_pane_fp_g4

0x8df4,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8df4,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00041ec9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00041ec9) list_single_graphic_2heading_pane_fp_g

0xebeb,	// (0x00040f25) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xebeb,	// (0x00040f25) list_single_graphic_2heading_pane_fp_t1

0xeada,	// (0x00040e14) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeada,	// (0x00040e14) list_single_graphic_2heading_pane_fp_t2

0xec01,	// (0x00040f3b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec01,	// (0x00040f3b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x00041fab) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x00041fab) list_single_graphic_2heading_pane_fp_t

0x417b,	// (0x000364b5) fep_hwr_write_pane_g5_ParamLimits

0x417b,	// (0x000364b5) fep_hwr_write_pane_g5

0x4187,	// (0x000364c1) fep_hwr_write_pane_g6_ParamLimits

0x4187,	// (0x000364c1) fep_hwr_write_pane_g6

0x900d,	// (0x0003b347) eswt_shell_pane_ParamLimits

0x246f,	// (0x000347a9) bg_popup_window_pane_cp18_ParamLimits

0x34a7,	// (0x000357e1) heading_pane_cp70

0x9105,	// (0x0003b43f) popup_eswt_tasktip_window_t1_ParamLimits

0x477b,	// (0x00036ab5) aid_touch_tab_arrow_left

0x478a,	// (0x00036ac4) aid_touch_tab_arrow_right

0x41d7,	// (0x00036511) title_pane_g3_ParamLimits

0x41d7,	// (0x00036511) title_pane_g3

0x158e,	// (0x000338c8) set_value_pane_g1

0xbb49,	// (0x0003de83) popup_toolbar_trans_pane_ParamLimits

0x9152,	// (0x0003b48c) aid_size_cell_tb_trans_pane_ParamLimits

0x15c6,	// (0x00033900) bg_tb_trans_pane_ParamLimits

0x9164,	// (0x0003b49e) grid_tb_trans_pane_ParamLimits

0x1142,	// (0x0003347c) cont_note_pane_ParamLimits

0x1142,	// (0x0003347c) cont_note_pane

0x13da,	// (0x00033714) cont_snote2_single_text_pane_ParamLimits

0x13da,	// (0x00033714) cont_snote2_single_text_pane

0x13da,	// (0x00033714) cont_snote2_single_graphic_pane_ParamLimits

0x13da,	// (0x00033714) cont_snote2_single_graphic_pane

0x2944,	// (0x00034c7e) cont_note_wait_pane_ParamLimits

0x2944,	// (0x00034c7e) cont_note_wait_pane

0x2944,	// (0x00034c7e) cont_note_image_pane_ParamLimits

0x2944,	// (0x00034c7e) cont_note_image_pane

0x91ca,	// (0x0003b504) popup_note2_window_g1_ParamLimits

0x91ca,	// (0x0003b504) popup_note2_window_g1

0x91fb,	// (0x0003b535) popup_note2_window_t1_ParamLimits

0x91fb,	// (0x0003b535) popup_note2_window_t1

0x9240,	// (0x0003b57a) popup_note2_window_t2_ParamLimits

0x9240,	// (0x0003b57a) popup_note2_window_t2

0x9285,	// (0x0003b5bf) popup_note2_window_t3_ParamLimits

0x9285,	// (0x0003b5bf) popup_note2_window_t3

0x92ca,	// (0x0003b604) popup_note2_window_t4_ParamLimits

0x92ca,	// (0x0003b604) popup_note2_window_t4

0x11c6,	// (0x00033500) popup_note2_window_t5_ParamLimits

0x11c6,	// (0x00033500) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x00041fb7) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x00041fb7) popup_note2_window_t

0x92f9,	// (0x0003b633) popup_note2_image_window_g1_ParamLimits

0x92f9,	// (0x0003b633) popup_note2_image_window_g1

0x9305,	// (0x0003b63f) popup_note2_image_window_g2_ParamLimits

0x9305,	// (0x0003b63f) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x00041fc2) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x00041fc2) popup_note2_image_window_g

0x9317,	// (0x0003b651) popup_note2_image_window_t1_ParamLimits

0x9317,	// (0x0003b651) popup_note2_image_window_t1

0x932f,	// (0x0003b669) popup_note2_image_window_t2_ParamLimits

0x932f,	// (0x0003b669) popup_note2_image_window_t2

0x9347,	// (0x0003b681) popup_note2_image_window_t3_ParamLimits

0x9347,	// (0x0003b681) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x00041fc7) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x00041fc7) popup_note2_image_window_t

0x2952,	// (0x00034c8c) popup_note2_wait_window_g1_ParamLimits

0x2952,	// (0x00034c8c) popup_note2_wait_window_g1

0x295e,	// (0x00034c98) popup_note2_wait_window_g2_ParamLimits

0x295e,	// (0x00034c98) popup_note2_wait_window_g2

0x296a,	// (0x00034ca4) popup_note2_wait_window_g3_ParamLimits

0x296a,	// (0x00034ca4) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x00041b82) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x00041b82) popup_note2_wait_window_g

0x9363,	// (0x0003b69d) popup_note2_wait_window_t1_ParamLimits

0x9363,	// (0x0003b69d) popup_note2_wait_window_t1

0x9381,	// (0x0003b6bb) popup_note2_wait_window_t2_ParamLimits

0x9381,	// (0x0003b6bb) popup_note2_wait_window_t2

0x939f,	// (0x0003b6d9) popup_note2_wait_window_t3_ParamLimits

0x939f,	// (0x0003b6d9) popup_note2_wait_window_t3

0x93b1,	// (0x0003b6eb) popup_note2_wait_window_t4_ParamLimits

0x93b1,	// (0x0003b6eb) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x00041fce) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x00041fce) popup_note2_wait_window_t

0x93c3,	// (0x0003b6fd) wait_bar2_pane_ParamLimits

0x93c3,	// (0x0003b6fd) wait_bar2_pane

0x93db,	// (0x0003b715) popup_snote2_single_text_window_g1_ParamLimits

0x93db,	// (0x0003b715) popup_snote2_single_text_window_g1

0x9403,	// (0x0003b73d) popup_snote2_single_text_window_t1_ParamLimits

0x9403,	// (0x0003b73d) popup_snote2_single_text_window_t1

0x944f,	// (0x0003b789) popup_snote2_single_text_window_t2_ParamLimits

0x944f,	// (0x0003b789) popup_snote2_single_text_window_t2

0x949b,	// (0x0003b7d5) popup_snote2_single_text_window_t3_ParamLimits

0x949b,	// (0x0003b7d5) popup_snote2_single_text_window_t3

0x94dc,	// (0x0003b816) popup_snote2_single_text_window_t4_ParamLimits

0x94dc,	// (0x0003b816) popup_snote2_single_text_window_t4

0x9512,	// (0x0003b84c) popup_snote2_single_text_window_t5_ParamLimits

0x9512,	// (0x0003b84c) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x00041fd7) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x00041fd7) popup_snote2_single_text_window_t

0x953d,	// (0x0003b877) popup_snote2_single_graphic_window_g1_ParamLimits

0x953d,	// (0x0003b877) popup_snote2_single_graphic_window_g1

0x9565,	// (0x0003b89f) popup_snote2_single_graphic_window_g2_ParamLimits

0x9565,	// (0x0003b89f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x00041fe2) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x00041fe2) popup_snote2_single_graphic_window_g

0x958d,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1_ParamLimits

0x958d,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1

0x95d9,	// (0x0003b913) popup_snote2_single_graphic_window_t2_ParamLimits

0x95d9,	// (0x0003b913) popup_snote2_single_graphic_window_t2

0x949b,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3_ParamLimits

0x949b,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3

0x94dc,	// (0x0003b816) popup_snote2_single_graphic_window_t4_ParamLimits

0x94dc,	// (0x0003b816) popup_snote2_single_graphic_window_t4

0x9512,	// (0x0003b84c) popup_snote2_single_graphic_window_t5_ParamLimits

0x9512,	// (0x0003b84c) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x00041fe7) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x00041fe7) popup_snote2_single_graphic_window_t

0x3e43,	// (0x0003617d) clock_nsta_pane_cp2_t1

0x3e43,	// (0x0003617d) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x00041e02) clock_nsta_pane_cp2_t

0xe410,	// (0x0004074a) form_field_data_wide_pane_g1_ParamLimits

0x15d4,	// (0x0003390e) form_field_data_wide_pane_g2_ParamLimits

0x15d4,	// (0x0003390e) form_field_data_wide_pane_g2

0x15e0,	// (0x0003391a) form_field_data_wide_pane_g3_ParamLimits

0x15e0,	// (0x0003391a) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x000419b5) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x000419b5) form_field_data_wide_pane_g

0xc35f,	// (0x0003e699) grid_touch_3_pane_ParamLimits

0xc35f,	// (0x0003e699) grid_touch_3_pane

0xcc4c,	// (0x0003ef86) cell_touch_3_pane_ParamLimits

0xcc4c,	// (0x0003ef86) cell_touch_3_pane

0x40f0,	// (0x0003642a) cell_touch_3_pane_g1

0x40f0,	// (0x0003642a) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00041e87) cell_touch_3_pane_g

0x11f8,	// (0x00033532) cont_query_data_pane

0x1200,	// (0x0003353a) cont_query_data_pane_cp1

0x9625,	// (0x0003b95f) button_value_adjust_pane_cp7

0x962d,	// (0x0003b967) query_popup_pane_cp3

0x1b5d,	// (0x00033e97) bg_popup_sub_pane_cp22_ParamLimits

0xb39d,	// (0x0003d6d7) navi_navi_volume_pane_cp2

0xb3b5,	// (0x0003d6ef) popup_side_volume_key_window_g2

0xb3c1,	// (0x0003d6fb) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00041a4b) popup_side_volume_key_window_g

0xb3db,	// (0x0003d715) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00041a52) popup_side_volume_key_window_t

0x1e01,	// (0x0003413b) popup_side_volume_key_window_ParamLimits

0xe095,	// (0x000403cf) list_double_graphic_pane_g4_ParamLimits

0xe095,	// (0x000403cf) list_double_graphic_pane_g4

0xe786,	// (0x00040ac0) list_single_2heading_msg_pane_ParamLimits

0xe786,	// (0x00040ac0) list_single_2heading_msg_pane

0xec1f,	// (0x00040f59) list_single_2heading_msg_pane_g1_ParamLimits

0xec1f,	// (0x00040f59) list_single_2heading_msg_pane_g1

0xec2b,	// (0x00040f65) list_single_2heading_msg_pane_g2_ParamLimits

0xec2b,	// (0x00040f65) list_single_2heading_msg_pane_g2

0xec37,	// (0x00040f71) list_single_2heading_msg_pane_g3_ParamLimits

0xec37,	// (0x00040f71) list_single_2heading_msg_pane_g3

0xec43,	// (0x00040f7d) list_single_2heading_msg_pane_g4_ParamLimits

0xec43,	// (0x00040f7d) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x00041ff2) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x00041ff2) list_single_2heading_msg_pane_g

0xec5b,	// (0x00040f95) list_single_2heading_msg_pane_t1_ParamLimits

0xec5b,	// (0x00040f95) list_single_2heading_msg_pane_t1

0xec83,	// (0x00040fbd) list_single_2heading_msg_pane_t2_ParamLimits

0xec83,	// (0x00040fbd) list_single_2heading_msg_pane_t2

0xecb2,	// (0x00040fec) list_single_2heading_msg_pane_t3_ParamLimits

0xecb2,	// (0x00040fec) list_single_2heading_msg_pane_t3

0xeceb,	// (0x00041025) list_single_2heading_msg_pane_t4_ParamLimits

0xeceb,	// (0x00041025) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x00041ffb) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x00041ffb) list_single_2heading_msg_pane_t

0x0fad,	// (0x000332e7) title_pane_g4_ParamLimits

0x0fad,	// (0x000332e7) title_pane_g4

0xb1b3,	// (0x0003d4ed) title_pane_stacon_g3_ParamLimits

0xb1b3,	// (0x0003d4ed) title_pane_stacon_g3

0x91be,	// (0x0003b4f8) list_single_2graphic_im_pane_g4_ParamLimits

0x91be,	// (0x0003b4f8) list_single_2graphic_im_pane_g4

0x32e3,	// (0x0003561d) popup_side_volume_key_window_cp

0x37a2,	// (0x00035adc) main_idle_act2_pane_t1

0xbc25,	// (0x0003df5f) toolbar_button_pane_g10

0x441b,	// (0x00036755) popup_toolbar_window_cp1

0x3e34,	// (0x0003616e) clock_nsta_pane_cp_t1

0x3e34,	// (0x0003616e) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00041dfd) clock_nsta_pane_cp_t

0xb39d,	// (0x0003d6d7) navi_navi_volume_pane_cp2_ParamLimits

0xb3a9,	// (0x0003d6e3) popup_side_volume_key_window_g1_ParamLimits

0xb3b5,	// (0x0003d6ef) popup_side_volume_key_window_g2_ParamLimits

0xb3c1,	// (0x0003d6fb) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00041a4b) popup_side_volume_key_window_g_ParamLimits

0xc5df,	// (0x0003e919) fep_hwr_aid_pane

0xc680,	// (0x0003e9ba) bg_fep_hwr_top_pane_g4_ParamLimits

0x415d,	// (0x00036497) fep_hwr_top_pane_g1_ParamLimits

0x414b,	// (0x00036485) fep_hwr_top_pane_g2_ParamLimits

0xc6a0,	// (0x0003e9da) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00041e52) fep_hwr_top_pane_g_ParamLimits

0xc6b5,	// (0x0003e9ef) fep_hwr_top_text_pane_ParamLimits

0x30af,	// (0x000353e9) aid_touch_tab_arrow_arrow_2

0x30a6,	// (0x000353e0) aid_touch_tab_arrow_left_2

0xc5f3,	// (0x0003e92d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc626,	// (0x0003e960) fep_hwr_prediction_pane

0x8a24,	// (0x0003ad5e) fep_vkb_prediction_pane

0xc7fd,	// (0x0003eb37) fep_vkb_side_pane_g3_ParamLimits

0xc7fd,	// (0x0003eb37) fep_vkb_side_pane_g3

0xc908,	// (0x0003ec42) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc972,	// (0x0003ecac) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc97f,	// (0x0003ecb9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00041f01) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcc8d,	// (0x0003efc7) fep_hwr_prediction_pane_g1

0xcc97,	// (0x0003efd1) fep_hwr_prediction_pane_g2

0xcc9f,	// (0x0003efd9) fep_hwr_prediction_pane_g3

0xcca7,	// (0x0003efe1) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x00042004) fep_hwr_prediction_pane_g

0x963e,	// (0x0003b978) fep_vkb_prediction_pane_g1

0x9648,	// (0x0003b982) fep_vkb_prediction_pane_g2

0x9650,	// (0x0003b98a) fep_vkb_prediction_pane_g3

0x9658,	// (0x0003b992) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0004200d) fep_vkb_prediction_pane_g

0xbf16,	// (0x0003e250) slider_set_pane_g3

0xbf2a,	// (0x0003e264) slider_set_pane_g4

0xbf42,	// (0x0003e27c) slider_set_pane_g5

0xbf16,	// (0x0003e250) slider_set_pane_g6

0xbf58,	// (0x0003e292) slider_set_pane_g7

0x3526,	// (0x00035860) slider_form_pane_g3

0x352f,	// (0x00035869) slider_form_pane_g4

0x3537,	// (0x00035871) slider_form_pane_g5

0x3526,	// (0x00035860) slider_form_pane_g6

0xc0bb,	// (0x0003e3f5) slider_form_pane_g7

0x39dc,	// (0x00035d16) slider_set_pane_vc_g3

0x39e5,	// (0x00035d1f) slider_set_pane_vc_g4

0x39ee,	// (0x00035d28) slider_set_pane_vc_g5

0x39dc,	// (0x00035d16) slider_set_pane_vc_g6

0x39f7,	// (0x00035d31) slider_set_pane_vc_g7

0x3b8f,	// (0x00035ec9) slider_form_pane_vc_g1

0x3b98,	// (0x00035ed2) slider_form_pane_vc_g2

0x3ba1,	// (0x00035edb) slider_form_pane_vc_g3

0x3b8f,	// (0x00035ec9) slider_form_pane_vc_g4

0x3baa,	// (0x00035ee4) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00041dcf) slider_form_pane_vc_g

0xaecb,	// (0x0003d205) main_idle_act3_pane

0x9660,	// (0x0003b99a) ai3_links_pane

0xccaf,	// (0x0003efe9) popup_ai3_data_window_ParamLimits

0xccaf,	// (0x0003efe9) popup_ai3_data_window

0x0f8f,	// (0x000332c9) grid_ai3_links_pane

0xccc7,	// (0x0003f001) cell_ai3_links_pane_ParamLimits

0xccc7,	// (0x0003f001) cell_ai3_links_pane

0x9669,	// (0x0003b9a3) bg_popup_sub_pane_cp11

0x9676,	// (0x0003b9b0) cell_ai3_links_pane_g1

0x0f8f,	// (0x000332c9) bg_popup_sub_pane_cp12

0x969b,	// (0x0003b9d5) heading_ai3_data_pane

0x96a3,	// (0x0003b9dd) list_ai3_gene_pane

0x96af,	// (0x0003b9e9) popup_ai3_data_window_g1

0x96b7,	// (0x0003b9f1) heading_ai3_data_pane_g1

0x96bf,	// (0x0003b9f9) heading_ai3_data_pane_t1

0x96cd,	// (0x0003ba07) list_double_ai3_gene_pane_ParamLimits

0x96cd,	// (0x0003ba07) list_double_ai3_gene_pane

0x96da,	// (0x0003ba14) list_single_ai3_gene_pane_ParamLimits

0x96da,	// (0x0003ba14) list_single_ai3_gene_pane

0x40b5,	// (0x000363ef) list_highlight_pane_cp7_ParamLimits

0x40b5,	// (0x000363ef) list_highlight_pane_cp7

0x96e7,	// (0x0003ba21) list_single_a13_gene_pane_t1_ParamLimits

0x96e7,	// (0x0003ba21) list_single_a13_gene_pane_t1

0x96fe,	// (0x0003ba38) list_single_ai3_gene_pane_g1

0x9707,	// (0x0003ba41) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x00042016) list_single_ai3_gene_pane_g

0x970f,	// (0x0003ba49) list_double_ai3_gene_pane_g1_ParamLimits

0x970f,	// (0x0003ba49) list_double_ai3_gene_pane_g1

0x971b,	// (0x0003ba55) list_double_ai3_gene_pane_t1_ParamLimits

0x971b,	// (0x0003ba55) list_double_ai3_gene_pane_t1

0x9737,	// (0x0003ba71) list_double_ai3_gene_pane_t2_ParamLimits

0x9737,	// (0x0003ba71) list_double_ai3_gene_pane_t2

0x974d,	// (0x0003ba87) list_double_ai3_gene_pane_t3_ParamLimits

0x974d,	// (0x0003ba87) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x0004201b) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x0004201b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec17,	// (0x00040f51) aid_size_min_col_2

0xcc79,	// (0x0003efb3) aid_size_min_msg_ParamLimits

0xcc79,	// (0x0003efb3) aid_size_min_msg

0xc811,	// (0x0003eb4b) fep_vkb_top_text_pane_g2_ParamLimits

0xc811,	// (0x0003eb4b) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00041e82) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00041e82) fep_vkb_top_text_pane_g

0xaecb,	// (0x0003d205) main_hc_apps_shell_pane

0x976a,	// (0x0003baa4) grid_hc_apps_pane_ParamLimits

0x976a,	// (0x0003baa4) grid_hc_apps_pane

0x9779,	// (0x0003bab3) list_hc_apps_pane

0x9781,	// (0x0003babb) scroll_pane_cp37_ParamLimits

0x9781,	// (0x0003babb) scroll_pane_cp37

0xccdb,	// (0x0003f015) cell_hc_apps_pane_ParamLimits

0xccdb,	// (0x0003f015) cell_hc_apps_pane

0xcd69,	// (0x0003f0a3) cell_hc_apps_pane_g1_ParamLimits

0xcd69,	// (0x0003f0a3) cell_hc_apps_pane_g1

0x978d,	// (0x0003bac7) cell_hc_apps_pane_g2_ParamLimits

0x978d,	// (0x0003bac7) cell_hc_apps_pane_g2

0x97a9,	// (0x0003bae3) cell_hc_apps_pane_g3_ParamLimits

0x97a9,	// (0x0003bae3) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x00042022) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x00042022) cell_hc_apps_pane_g

0xcd96,	// (0x0003f0d0) cell_hc_apps_pane_t1_ParamLimits

0xcd96,	// (0x0003f0d0) cell_hc_apps_pane_t1

0x1142,	// (0x0003347c) grid_highlight_pane_cp10_ParamLimits

0x1142,	// (0x0003347c) grid_highlight_pane_cp10

0xcdd4,	// (0x0003f10e) list_single_hc_apps_pane_ParamLimits

0xcdd4,	// (0x0003f10e) list_single_hc_apps_pane

0xce00,	// (0x0003f13a) list_single_hc_apps_pane_g1

0xf519,	// (0x00041853) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x00042029) list_single_hc_apps_pane_g

0xf532,	// (0x0004186c) list_single_hc_apps_pane_g2_copy1

0xed10,	// (0x0004104a) list_single_hc_apps_pane_t1

0x0ff1,	// (0x0003332b) bg_set_opt_pane_cp_ParamLimits

0xb0de,	// (0x0003d418) setting_slider_pane_t1_ParamLimits

0xb0f7,	// (0x0003d431) setting_slider_pane_t2_ParamLimits

0xb110,	// (0x0003d44a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00041898) setting_slider_pane_t_ParamLimits

0xb127,	// (0x0003d461) slider_set_pane_ParamLimits

0xb629,	// (0x0003d963) control_pane_g5_ParamLimits

0xb629,	// (0x0003d963) control_pane_g5

0x34ee,	// (0x00035828) slider_set_pane_g1_ParamLimits

0xbf0a,	// (0x0003e244) slider_set_pane_g2_ParamLimits

0xbf16,	// (0x0003e250) slider_set_pane_g3_ParamLimits

0xbf2a,	// (0x0003e264) slider_set_pane_g4_ParamLimits

0xbf42,	// (0x0003e27c) slider_set_pane_g5_ParamLimits

0xbf16,	// (0x0003e250) slider_set_pane_g6_ParamLimits

0xbf58,	// (0x0003e292) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00041c9e) slider_set_pane_g_ParamLimits

0x1eda,	// (0x00034214) navi_icon_text_pane_ParamLimits

0x4755,	// (0x00036a8f) aid_fill_nsta_2_ParamLimits

0x477b,	// (0x00036ab5) aid_touch_tab_arrow_left_ParamLimits

0x478a,	// (0x00036ac4) aid_touch_tab_arrow_right_ParamLimits

0x47f5,	// (0x00036b2f) clock_nsta_pane_ParamLimits

0x3088,	// (0x000353c2) navi_icon_pane_g1_ParamLimits

0x3094,	// (0x000353ce) navi_text_pane_t1_ParamLimits

0x3e82,	// (0x000361bc) navi_icon_text_pane_g1_ParamLimits

0x3e8e,	// (0x000361c8) navi_icon_text_pane_t1_ParamLimits

0xce00,	// (0x0003f13a) list_single_hc_apps_pane_g1_ParamLimits

0xf519,	// (0x00041853) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x00042029) list_single_hc_apps_pane_g_ParamLimits

0xf532,	// (0x0004186c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xed10,	// (0x0004104a) list_single_hc_apps_pane_t1_ParamLimits

0xb010,	// (0x0003d34a) popup_toolbar2_fixed_window_ParamLimits

0xb010,	// (0x0003d34a) popup_toolbar2_fixed_window

0xbb41,	// (0x0003de7b) popup_toolbar2_float_window

0x0f8f,	// (0x000332c9) bg_popup_sub_pane_cp27

0x97cb,	// (0x0003bb05) grid_toolbar2_float_pane

0x0f8f,	// (0x000332c9) bg_popup_sub_pane_cp26

0x97cb,	// (0x0003bb05) grid_toolbar2_fixed_pane

0xce19,	// (0x0003f153) cell_toolbar2_fixed_pane_ParamLimits

0xce19,	// (0x0003f153) cell_toolbar2_fixed_pane

0xce2a,	// (0x0003f164) cell_toolbar2_fixed_pane_g1

0x97d3,	// (0x0003bb0d) toolbar2_fixed_button_pane

0x23e3,	// (0x0003471d) toolbar2_fixed_button_pane_g1

0x23eb,	// (0x00034725) toolbar2_fixed_button_pane_g2

0x23f3,	// (0x0003472d) toolbar2_fixed_button_pane_g3

0x23fb,	// (0x00034735) toolbar2_fixed_button_pane_g4

0x2403,	// (0x0003473d) toolbar2_fixed_button_pane_g5

0x240b,	// (0x00034745) toolbar2_fixed_button_pane_g6

0x2413,	// (0x0003474d) toolbar2_fixed_button_pane_g7

0x241b,	// (0x00034755) toolbar2_fixed_button_pane_g8

0x2423,	// (0x0003475d) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00041ba0) toolbar2_fixed_button_pane_g

0x97db,	// (0x0003bb15) cell_toolbar2_float_pane_ParamLimits

0x97db,	// (0x0003bb15) cell_toolbar2_float_pane

0x97ec,	// (0x0003bb26) cell_toolbar2_float_pane_g1

0x97d3,	// (0x0003bb0d) toolbar2_fixed_button_pane_cp

0xc7ca,	// (0x0003eb04) fep_vkb_accented_list_pane_ParamLimits

0xc7ca,	// (0x0003eb04) fep_vkb_accented_list_pane

0xc8e8,	// (0x0003ec22) bg_popup_fep_shadow_pane_g9

0x204c,	// (0x00034386) bg_popup_fep_shadow_pane_cp3

0x16d6,	// (0x00033a10) list_accented_list_pane

0x97f5,	// (0x0003bb2f) list_single_accented_list_pane_ParamLimits

0x97f5,	// (0x0003bb2f) list_single_accented_list_pane

0x204c,	// (0x00034386) list_highlight_pane_cp10

0x9806,	// (0x0003bb40) list_single_accented_list_pane_t1

0xbaab,	// (0x0003dde5) popup_slider_window_ParamLimits

0xbaab,	// (0x0003dde5) popup_slider_window

0x9635,	// (0x0003b96f) aid_indentation_list_msg

0xcec5,	// (0x0003f1ff) bg_popup_window_pane_cp19

0x986c,	// (0x0003bba6) popup_slider_window_g1

0x9888,	// (0x0003bbc2) popup_slider_window_g2

0x98a4,	// (0x0003bbde) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x0004202e) popup_slider_window_g

0x98c0,	// (0x0003bbfa) popup_slider_window_t1

0x9904,	// (0x0003bc3e) small_volume_slider_vertical_pane

0x40f0,	// (0x0003642a) small_volume_slider_vertical_pane_g1

0x40f0,	// (0x0003642a) small_volume_slider_vertical_pane_g2

0x9920,	// (0x0003bc5a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x00042040) small_volume_slider_vertical_pane_g

0xadf8,	// (0x0003d132) area_side_right_pane_ParamLimits

0xadf8,	// (0x0003d132) area_side_right_pane

0xcf3f,	// (0x0003f279) aid_size_side_button_ParamLimits

0xcf3f,	// (0x0003f279) aid_size_side_button

0xcf53,	// (0x0003f28d) grid_sctrl_middle_pane_ParamLimits

0xcf53,	// (0x0003f28d) grid_sctrl_middle_pane

0xcf6e,	// (0x0003f2a8) sctrl_sk_bottom_pane

0xcf7f,	// (0x0003f2b9) sctrl_sk_top_pane

0xcf91,	// (0x0003f2cb) aid_touch_sctrl_top

0xcf9e,	// (0x0003f2d8) bg_sctrl_sk_pane_ParamLimits

0xcf9e,	// (0x0003f2d8) bg_sctrl_sk_pane

0xcfac,	// (0x0003f2e6) sctrl_sk_top_pane_g1

0xcfb9,	// (0x0003f2f3) sctrl_sk_top_pane_t1

0xcf91,	// (0x0003f2cb) aid_touch_sctrl_bottom

0xcf9e,	// (0x0003f2d8) bg_sctrl_sk_pane_cp_ParamLimits

0xcf9e,	// (0x0003f2d8) bg_sctrl_sk_pane_cp

0xcfd4,	// (0x0003f30e) sctrl_sk_bottom_pane_g1

0xcfb9,	// (0x0003f2f3) sctrl_sk_bottom_pane_t1

0xcfdd,	// (0x0003f317) cell_sctrl_middle_pane_ParamLimits

0xcfdd,	// (0x0003f317) cell_sctrl_middle_pane

0xcff8,	// (0x0003f332) aid_touch_sctrl_middle_ParamLimits

0xcff8,	// (0x0003f332) aid_touch_sctrl_middle

0xd00a,	// (0x0003f344) bg_sctrl_middle_pane_ParamLimits

0xd00a,	// (0x0003f344) bg_sctrl_middle_pane

0xc908,	// (0x0003ec42) cell_sctrl_middle_pane_g1_ParamLimits

0xc908,	// (0x0003ec42) cell_sctrl_middle_pane_g1

0xd018,	// (0x0003f352) cell_sctrl_middle_pane_g2_ParamLimits

0xd018,	// (0x0003f352) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x0004204c) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x0004204c) cell_sctrl_middle_pane_g

0x23e3,	// (0x0003471d) bg_sctrl_middle_pane_g1

0x23f3,	// (0x0003472d) bg_sctrl_middle_pane_g2

0x23eb,	// (0x00034725) bg_sctrl_middle_pane_g3

0x2403,	// (0x0003473d) bg_sctrl_middle_pane_g4

0x23fb,	// (0x00034735) bg_sctrl_middle_pane_g5

0x240b,	// (0x00034745) bg_sctrl_middle_pane_g6

0x2413,	// (0x0003474d) bg_sctrl_middle_pane_g7

0x2423,	// (0x0003475d) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x00042051) bg_sctrl_middle_pane_g

0x241b,	// (0x00034755) bg_sctrl_middle_pane_g8_copy1

0x23e3,	// (0x0003471d) bg_sctrl_sk_pane_g1

0x23eb,	// (0x00034725) bg_sctrl_sk_pane_g2

0x23f3,	// (0x0003472d) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00041ba0) bg_sctrl_sk_pane_g

0x14fc,	// (0x00033836) aid_size_touch_scroll_bar

0x23fb,	// (0x00034735) bg_sctrl_sk_pane_g4

0x2403,	// (0x0003473d) bg_sctrl_sk_pane_g5

0x240b,	// (0x00034745) bg_sctrl_sk_pane_g6

0x2413,	// (0x0003474d) bg_sctrl_sk_pane_g7

0x241b,	// (0x00034755) bg_sctrl_sk_pane_g8

0x2423,	// (0x0003475d) bg_sctrl_sk_pane_g9

0xb7c4,	// (0x0003dafe) popup_fep_china_hwr2_fs_candidate_window

0xb7cc,	// (0x0003db06) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb7cc,	// (0x0003db06) popup_fep_china_hwr2_fs_control_window

0xc908,	// (0x0003ec42) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x00042047) sctrl_sk_top_pane_g

0xd028,	// (0x0003f362) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd028,	// (0x0003f362) aid_fep_china_hwr2_fs_cell

0xd039,	// (0x0003f373) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd039,	// (0x0003f373) bg_popup_fep_shadow_pane_cp4

0xd050,	// (0x0003f38a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd050,	// (0x0003f38a) bg_popup_fep_shadow_pane_cp5

0xd062,	// (0x0003f39c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd062,	// (0x0003f39c) popup_fep_china_hwr2_fs_control_bar_grid

0xd072,	// (0x0003f3ac) popup_fep_china_hwr2_fs_control_funtion_grid

0x9937,	// (0x0003bc71) aid_fep_china_hwr2_fs_candi_cell

0x0f8f,	// (0x000332c9) bg_popup_fep_shadow_pane_cp6

0x9941,	// (0x0003bc7b) popup_fep_china_hwr2_fs_candidate_grid

0xd07a,	// (0x0003f3b4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd07a,	// (0x0003f3b4) cell_fep_china_hwr2_fs_funtion_grid

0x40f0,	// (0x0003642a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9929,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9929,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9949,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9949,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x00042062) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x00042062) cell_fep_china_hwr2_fs_funtion_grid_g

0xd092,	// (0x0003f3cc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd092,	// (0x0003f3cc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd0a7,	// (0x0003f3e1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd0a7,	// (0x0003f3e1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x00042067) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x00042067) cell_fep_china_hwr2_fs_funtion_grid_t

0x995f,	// (0x0003bc99) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9967,	// (0x0003bca1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x996f,	// (0x0003bca9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x0004206c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9977,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9977,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid

0x9990,	// (0x0003bcca) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9998,	// (0x0003bcd2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x40f0,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x40f0,	// (0x0003642a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00041e87) cell_fep_china_hwr2_fs_candidate_grid_g

0x99a0,	// (0x0003bcda) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2234,	// (0x0003456e) clock_nsta_pane_cp_24_ParamLimits

0x2234,	// (0x0003456e) clock_nsta_pane_cp_24

0x229c,	// (0x000345d6) indicator_nsta_pane_cp_24_ParamLimits

0x229c,	// (0x000345d6) indicator_nsta_pane_cp_24

0x2f8d,	// (0x000352c7) heading_pane_g1

0x0001,

0xf8cb,	// (0x00041c05) heading_pane_g

0x3623,	// (0x0003595d) grid_sct_catagory_button_pane

0x363f,	// (0x00035979) scroll_pane_cp5_ParamLimits

0x3eb4,	// (0x000361ee) button_value_adjust_pane_cp5_ParamLimits

0x3eb4,	// (0x000361ee) button_value_adjust_pane_cp5

0x3f59,	// (0x00036293) form2_midp_time_pane_ParamLimits

0x99ae,	// (0x0003bce8) cell_sct_catagory_button_pane_ParamLimits

0x99ae,	// (0x0003bce8) cell_sct_catagory_button_pane

0x40b5,	// (0x000363ef) bg_button_pane_cp01_ParamLimits

0x40b5,	// (0x000363ef) bg_button_pane_cp01

0x40f0,	// (0x0003642a) cell_sct_catagory_button_pane_g1

0xbae2,	// (0x0003de1c) popup_tb_extension_window

0xd0c3,	// (0x0003f3fd) aid_size_cell_ext_ParamLimits

0xd0c3,	// (0x0003f3fd) aid_size_cell_ext

0x1142,	// (0x0003347c) bg_tb_trans_pane_cp1_ParamLimits

0x1142,	// (0x0003347c) bg_tb_trans_pane_cp1

0xd0e0,	// (0x0003f41a) grid_tb_ext_pane_ParamLimits

0xd0e0,	// (0x0003f41a) grid_tb_ext_pane

0xd104,	// (0x0003f43e) cell_tb_ext_pane_ParamLimits

0xd104,	// (0x0003f43e) cell_tb_ext_pane

0xd119,	// (0x0003f453) cell_tb_ext_pane_g1_ParamLimits

0xd119,	// (0x0003f453) cell_tb_ext_pane_g1

0x99c0,	// (0x0003bcfa) cell_tb_ext_pane_t1

0x1142,	// (0x0003347c) list_highlight_pane_cp11_ParamLimits

0x1142,	// (0x0003347c) list_highlight_pane_cp11

0xb02f,	// (0x0003d369) popup_uni_indicator_window_ParamLimits

0xb02f,	// (0x0003d369) popup_uni_indicator_window

0x15c6,	// (0x00033900) bg_popup_sub_pane_cp14

0x99db,	// (0x0003bd15) list_uniindi_pane

0x99e7,	// (0x0003bd21) uniindi_top_pane

0x1142,	// (0x0003347c) bg_uniindi_top_pane

0x9a06,	// (0x0003bd40) uniindi_top_pane_g1

0x9a1c,	// (0x0003bd56) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x00042073) uniindi_top_pane_g

0x9a46,	// (0x0003bd80) uniindi_top_pane_t1

0x9a70,	// (0x0003bdaa) list_single_uniindi_pane_ParamLimits

0x9a70,	// (0x0003bdaa) list_single_uniindi_pane

0x40f0,	// (0x0003642a) bg_uniindi_top_pane_g1

0x9a82,	// (0x0003bdbc) list_single_uniindi_pane_g1

0x9a95,	// (0x0003bdcf) list_single_uniindi_pane_t1

0xaecb,	// (0x0003d205) control_bg_pane

0x9aba,	// (0x0003bdf4) bg_sctrl_sk_pane_cp1

0x9ac3,	// (0x0003bdfd) bg_sctrl_sk_pane_cp2

0x9acc,	// (0x0003be06) control_bg_pane_g1

0x9ad5,	// (0x0003be0f) control_bg_pane_g2

0x0001,

0xfd42,	// (0x0004207c) control_bg_pane_g

0x3df6,	// (0x00036130) cell_indicator_nsta_pane_g1_ParamLimits

0xc39c,	// (0x0003e6d6) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00041deb) cell_indicator_nsta_pane_g_ParamLimits

0xea78,	// (0x00040db2) form2_midp_time_pane_t1_ParamLimits

0xb73a,	// (0x0003da74) main_idle_act4_pane_ParamLimits

0xb73a,	// (0x0003da74) main_idle_act4_pane

0xbae2,	// (0x0003de1c) popup_tb_extension_window_ParamLimits

0xd0f8,	// (0x0003f432) tb_ext_find_pane_ParamLimits

0xd0f8,	// (0x0003f432) tb_ext_find_pane

0x9ade,	// (0x0003be18) ai_gene_pane_1_cp1

0x20e0,	// (0x0003441a) ai_gene_pane_2_cp1

0x9ae6,	// (0x0003be20) list_single_idle_plugin_calendar_pane

0x9aef,	// (0x0003be29) list_single_idle_plugin_notification_pane

0x9af8,	// (0x0003be32) list_single_idle_plugin_player_pane

0xd136,	// (0x0003f470) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd136,	// (0x0003f470) list_single_idle_plugin_shortcut_pane

0xd152,	// (0x0003f48c) main_idle_act4_pane_t1

0xd164,	// (0x0003f49e) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x00042081) main_idle_act4_pane_t

0xd176,	// (0x0003f4b0) middle_sk_idle_act4_pane_ParamLimits

0xd176,	// (0x0003f4b0) middle_sk_idle_act4_pane

0xd18c,	// (0x0003f4c6) popup_clock_digital_analogue_window_cp2

0xd1a6,	// (0x0003f4e0) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1a6,	// (0x0003f4e0) shortcut_wheel_idle_act4_pane

0x40f0,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g1

0x40f0,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g2

0x40f0,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g3

0x40f0,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g4

0x40f0,	// (0x0003642a) shortcut_wheel_idle_act4_pane_g5

0x9b01,	// (0x0003be3b) shortcut_wheel_idle_act4_pane_g6

0x9b09,	// (0x0003be43) shortcut_wheel_idle_act4_pane_g7

0x9b11,	// (0x0003be4b) shortcut_wheel_idle_act4_pane_g8

0x9b19,	// (0x0003be53) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x00042086) shortcut_wheel_idle_act4_pane_g

0x8ab2,	// (0x0003adec) middle_sk_idle_act4_pane_g1_ParamLimits

0x8ab2,	// (0x0003adec) middle_sk_idle_act4_pane_g1

0xd216,	// (0x0003f550) middle_sk_idle_act4_pane_g2_ParamLimits

0xd216,	// (0x0003f550) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x000420a9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x000420a9) middle_sk_idle_act4_pane_g

0xd222,	// (0x0003f55c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd222,	// (0x0003f55c) middle_sk_idle_act4_pane_t1

0xd23f,	// (0x0003f579) grid_ai_shortcut_pane_ParamLimits

0xd23f,	// (0x0003f579) grid_ai_shortcut_pane

0xd258,	// (0x0003f592) list_highlight_pane_cp16_ParamLimits

0xd258,	// (0x0003f592) list_highlight_pane_cp16

0xd265,	// (0x0003f59f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd265,	// (0x0003f59f) list_single_idle_plugin_shortcut_pane_g1

0xd271,	// (0x0003f5ab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd271,	// (0x0003f5ab) list_single_idle_plugin_shortcut_pane_g2

0xd289,	// (0x0003f5c3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd289,	// (0x0003f5c3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x000420ae) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x000420ae) list_single_idle_plugin_shortcut_pane_g

0xd29c,	// (0x0003f5d6) cell_ai_shortcut_pane_ParamLimits

0xd29c,	// (0x0003f5d6) cell_ai_shortcut_pane

0xd2bd,	// (0x0003f5f7) cell_ai_shortcut_pane_g1_ParamLimits

0xd2bd,	// (0x0003f5f7) cell_ai_shortcut_pane_g1

0x9ade,	// (0x0003be18) ai_gene_pane_1_cp2

0x9b21,	// (0x0003be5b) ai_gene_pane_2_cp2

0x9b29,	// (0x0003be63) list_highlight_pane_cp15

0x9b32,	// (0x0003be6c) list_single_idle_plugin_calendar_pane_g1

0x9b29,	// (0x0003be63) list_highlight_pane_cp17

0x9b3a,	// (0x0003be74) list_single_idle_plugin_calendar_pane_g1_copy1

0x9b42,	// (0x0003be7c) list_single_idle_plugin_player_pane_g1

0x382e,	// (0x00035b68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x000420b5) list_single_idle_plugin_player_pane_g

0x9b4a,	// (0x0003be84) list_single_idle_plugin_player_pane_t1

0x9b58,	// (0x0003be92) list_single_idle_plugin_player_pane_t2

0x9b66,	// (0x0003bea0) list_single_idle_plugin_player_pane_t3

0x9b74,	// (0x0003beae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x000420ba) list_single_idle_plugin_player_pane_t

0x9b82,	// (0x0003bebc) wait_bar_pane_cp15

0x9b8a,	// (0x0003bec4) grid_ai_notification_pane

0x382e,	// (0x00035b68) list_single_idle_plugin_notification_pane_g1

0xd2df,	// (0x0003f619) cell_ai_notification_pane_ParamLimits

0xd2df,	// (0x0003f619) cell_ai_notification_pane

0x9b93,	// (0x0003becd) cell_ai_notification_pane_g1

0x9b9b,	// (0x0003bed5) cell_ai_notification_pane_t1

0xd2ec,	// (0x0003f626) tb_ext_find_button_pane

0xd2f4,	// (0x0003f62e) tb_ext_find_pane_g1

0xd2fc,	// (0x0003f636) tb_ext_find_pane_t1

0x1afc,	// (0x00033e36) tb_ext_find_button_pane_g1

0x9ba9,	// (0x0003bee3) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x000420c3) tb_ext_find_button_pane_g

0xd152,	// (0x0003f48c) main_idle_act4_pane_t1_ParamLimits

0xd164,	// (0x0003f49e) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x00042081) main_idle_act4_pane_t_ParamLimits

0xd18c,	// (0x0003f4c6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd19a,	// (0x0003f4d4) sat_plugin_idle_act4_pane_ParamLimits

0xd19a,	// (0x0003f4d4) sat_plugin_idle_act4_pane

0xd30a,	// (0x0003f644) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd30a,	// (0x0003f644) sat_plugin_idle_act4_pane_t1

0xd31d,	// (0x0003f657) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd31d,	// (0x0003f657) sat_plugin_idle_act4_pane_t2

0xd330,	// (0x0003f66a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd330,	// (0x0003f66a) sat_plugin_idle_act4_pane_t3

0xd343,	// (0x0003f67d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd343,	// (0x0003f67d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x000420c8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x000420c8) sat_plugin_idle_act4_pane_t

0xaf90,	// (0x0003d2ca) popup_battery_window_ParamLimits

0xaf90,	// (0x0003d2ca) popup_battery_window

0x1142,	// (0x0003347c) bg_popup_sub_pane_cp25_ParamLimits

0x1142,	// (0x0003347c) bg_popup_sub_pane_cp25

0x9bb2,	// (0x0003beec) popup_battery_window_g1_ParamLimits

0x9bb2,	// (0x0003beec) popup_battery_window_g1

0x9bbe,	// (0x0003bef8) popup_battery_window_t1_ParamLimits

0x9bbe,	// (0x0003bef8) popup_battery_window_t1

0x9bd0,	// (0x0003bf0a) popup_battery_window_t2_ParamLimits

0x9bd0,	// (0x0003bf0a) popup_battery_window_t2

0x0001,

0xfd97,	// (0x000420d1) popup_battery_window_t_ParamLimits

0xfd97,	// (0x000420d1) popup_battery_window_t

0x45ca,	// (0x00036904) midp_canvas_pane_ParamLimits

0x4626,	// (0x00036960) midp_keypad_pane_ParamLimits

0x4626,	// (0x00036960) midp_keypad_pane

0x21ff,	// (0x00034539) main_midp_pane_ParamLimits

0x3e52,	// (0x0003618c) signal_pane_g2_cp_ParamLimits

0xd356,	// (0x0003f690) aid_size_cell_midp_keypad_ParamLimits

0xd356,	// (0x0003f690) aid_size_cell_midp_keypad

0xd370,	// (0x0003f6aa) midp_keyp_game_grid_pane_ParamLimits

0xd370,	// (0x0003f6aa) midp_keyp_game_grid_pane

0xd38a,	// (0x0003f6c4) midp_keyp_rocker_pane_ParamLimits

0xd38a,	// (0x0003f6c4) midp_keyp_rocker_pane

0xd3b7,	// (0x0003f6f1) midp_keyp_sk_left_pane_ParamLimits

0xd3b7,	// (0x0003f6f1) midp_keyp_sk_left_pane

0xd40f,	// (0x0003f749) midp_keyp_sk_right_pane_ParamLimits

0xd40f,	// (0x0003f749) midp_keyp_sk_right_pane

0x0f8f,	// (0x000332c9) bg_button_pane_cp03

0xd461,	// (0x0003f79b) midp_keyp_sk_left_pane_g1

0x0f8f,	// (0x000332c9) bg_button_pane_cp04

0xd461,	// (0x0003f79b) midp_keyp_sk_right_pane_g1

0x40f0,	// (0x0003642a) midp_keyp_rocker_pane_g1

0xd46a,	// (0x0003f7a4) keyp_game_cell_pane_ParamLimits

0xd46a,	// (0x0003f7a4) keyp_game_cell_pane

0x0f8f,	// (0x000332c9) bg_button_pane_cp02

0xd47b,	// (0x0003f7b5) keyp_game_cell_pane_g1

0xafc6,	// (0x0003d300) popup_fep_vkb2_window_ParamLimits

0xafc6,	// (0x0003d300) popup_fep_vkb2_window

0xd492,	// (0x0003f7cc) aid_size_cell_vkb2_ParamLimits

0xd492,	// (0x0003f7cc) aid_size_cell_vkb2

0xd4e6,	// (0x0003f820) popup_fep_vkb2_window_g1_ParamLimits

0xd4e6,	// (0x0003f820) popup_fep_vkb2_window_g1

0xd52e,	// (0x0003f868) vkb2_area_bottom_pane_ParamLimits

0xd52e,	// (0x0003f868) vkb2_area_bottom_pane

0xd566,	// (0x0003f8a0) vkb2_area_keypad_pane_ParamLimits

0xd566,	// (0x0003f8a0) vkb2_area_keypad_pane

0xd59e,	// (0x0003f8d8) vkb2_area_top_pane_ParamLimits

0xd59e,	// (0x0003f8d8) vkb2_area_top_pane

0xd60e,	// (0x0003f948) vkb2_top_entry_pane_ParamLimits

0xd60e,	// (0x0003f948) vkb2_top_entry_pane

0xd638,	// (0x0003f972) vkb2_top_grid_left_pane_ParamLimits

0xd638,	// (0x0003f972) vkb2_top_grid_left_pane

0xd656,	// (0x0003f990) vkb2_top_grid_right_pane_ParamLimits

0xd656,	// (0x0003f990) vkb2_top_grid_right_pane

0xd674,	// (0x0003f9ae) vkb2_cell_keypad_pane_ParamLimits

0xd674,	// (0x0003f9ae) vkb2_cell_keypad_pane

0xd725,	// (0x0003fa5f) vkb2_area_bottom_grid_pane_ParamLimits

0xd725,	// (0x0003fa5f) vkb2_area_bottom_grid_pane

0xd749,	// (0x0003fa83) vkb2_area_bottom_pane_g1_ParamLimits

0xd749,	// (0x0003fa83) vkb2_area_bottom_pane_g1

0xd76d,	// (0x0003faa7) vkb2_area_bottom_pane_g2_ParamLimits

0xd76d,	// (0x0003faa7) vkb2_area_bottom_pane_g2

0xd79b,	// (0x0003fad5) vkb2_area_bottom_pane_g3_ParamLimits

0xd79b,	// (0x0003fad5) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x000420d6) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x000420d6) vkb2_area_bottom_pane_g

0xd7ec,	// (0x0003fb26) vkb2_top_cell_left_pane_ParamLimits

0xd7ec,	// (0x0003fb26) vkb2_top_cell_left_pane

0xd80c,	// (0x0003fb46) vkb2_top_entry_pane_g1_ParamLimits

0xd80c,	// (0x0003fb46) vkb2_top_entry_pane_g1

0xd81a,	// (0x0003fb54) vkb2_top_entry_pane_t1_ParamLimits

0xd81a,	// (0x0003fb54) vkb2_top_entry_pane_t1

0x9bf5,	// (0x0003bf2f) vkb2_top_entry_pane_t2_ParamLimits

0x9bf5,	// (0x0003bf2f) vkb2_top_entry_pane_t2

0x9c27,	// (0x0003bf61) vkb2_top_entry_pane_t3_ParamLimits

0x9c27,	// (0x0003bf61) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x000420dd) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x000420dd) vkb2_top_entry_pane_t

0xd879,	// (0x0003fbb3) vkb2_top_grid_right_pane_g1_ParamLimits

0xd879,	// (0x0003fbb3) vkb2_top_grid_right_pane_g1

0xd88f,	// (0x0003fbc9) vkb2_top_grid_right_pane_g2_ParamLimits

0xd88f,	// (0x0003fbc9) vkb2_top_grid_right_pane_g2

0xd8a7,	// (0x0003fbe1) vkb2_top_grid_right_pane_g3_ParamLimits

0xd8a7,	// (0x0003fbe1) vkb2_top_grid_right_pane_g3

0xd8bf,	// (0x0003fbf9) vkb2_top_grid_right_pane_g4_ParamLimits

0xd8bf,	// (0x0003fbf9) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x000420e4) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x000420e4) vkb2_top_grid_right_pane_g

0xd8d5,	// (0x0003fc0f) vkb2_top_cell_left_pane_g1

0xd8ec,	// (0x0003fc26) vkb2_cell_keypad_pane_g1_ParamLimits

0xd8ec,	// (0x0003fc26) vkb2_cell_keypad_pane_g1

0x9c4b,	// (0x0003bf85) vkb2_cell_keypad_pane_t1_ParamLimits

0x9c4b,	// (0x0003bf85) vkb2_cell_keypad_pane_t1

0xd8fa,	// (0x0003fc34) vkb2_cell_bottom_grid_pane_ParamLimits

0xd8fa,	// (0x0003fc34) vkb2_cell_bottom_grid_pane

0xd933,	// (0x0003fc6d) vkb2_cell_bottom_grid_pane_g1

0xd1ba,	// (0x0003f4f4) aid_call2_pane_cp02

0xd1c2,	// (0x0003f4fc) aid_call_pane_cp02

0xd1ca,	// (0x0003f504) clock_digital_number_pane_cp10

0xd1d2,	// (0x0003f50c) clock_digital_number_pane_cp11

0xd1da,	// (0x0003f514) clock_digital_number_pane_cp12

0xd1e2,	// (0x0003f51c) clock_digital_number_pane_cp13

0xd1ea,	// (0x0003f524) clock_digital_separator_pane_cp10

0x1afc,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g1

0x1afc,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g2

0xd1f2,	// (0x0003f52c) popup_clock_digital_analogue_window_cp2_g3

0x1afc,	// (0x00033e36) popup_clock_digital_analogue_window_cp2_g4

0xd1f2,	// (0x0003f52c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x00042099) popup_clock_digital_analogue_window_cp2_g

0xd1fa,	// (0x0003f534) popup_clock_digital_analogue_window_cp2_t1

0xd208,	// (0x0003f542) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x000420a4) popup_clock_digital_analogue_window_cp2_t

0x40f0,	// (0x0003642a) clock_digital_number_pane_cp10_g1

0x40f0,	// (0x0003642a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00041e87) clock_digital_number_pane_cp10_g

0x40f0,	// (0x0003642a) clock_digital_separator_pane_cp10_g1

0x40f0,	// (0x0003642a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00041e87) clock_digital_separator_pane_cp10_g

0x9a28,	// (0x0003bd62) uniindi_top_pane_g3

0x9a39,	// (0x0003bd73) uniindi_top_pane_g4

0xd6df,	// (0x0003fa19) vkb2_row_keypad_pane_ParamLimits

0xd6df,	// (0x0003fa19) vkb2_row_keypad_pane

0xd94f,	// (0x0003fc89) vkb2_cell_t_keypad_pane_ParamLimits

0xd94f,	// (0x0003fc89) vkb2_cell_t_keypad_pane

0xd95c,	// (0x0003fc96) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd95c,	// (0x0003fc96) vkb2_cell_t_keypad_pane_cp08

0xd96c,	// (0x0003fca6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd96c,	// (0x0003fca6) vkb2_cell_t_keypad_pane_cp09

0xd97d,	// (0x0003fcb7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd97d,	// (0x0003fcb7) vkb2_cell_t_keypad_pane_cp01

0xd98d,	// (0x0003fcc7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd98d,	// (0x0003fcc7) vkb2_cell_t_keypad_pane_cp02

0xd99d,	// (0x0003fcd7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd99d,	// (0x0003fcd7) vkb2_cell_t_keypad_pane_cp03

0xd9ad,	// (0x0003fce7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd9ad,	// (0x0003fce7) vkb2_cell_t_keypad_pane_cp04

0xd9bd,	// (0x0003fcf7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd9bd,	// (0x0003fcf7) vkb2_cell_t_keypad_pane_cp05

0xd9cd,	// (0x0003fd07) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd9cd,	// (0x0003fd07) vkb2_cell_t_keypad_pane_cp06

0xd9dd,	// (0x0003fd17) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd9dd,	// (0x0003fd17) vkb2_cell_t_keypad_pane_cp07

0xd9ed,	// (0x0003fd27) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd9ed,	// (0x0003fd27) vkb2_cell_t_keypad_pane_cp10

0xc908,	// (0x0003ec42) vkb2_cell_t_keypad_pane_g1

0x9c62,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1

0xaecb,	// (0x0003d205) popup_grid_graphic2_window

0x059c,	// (0x000328d6) aid_size_cell_graphic2_ParamLimits

0x059c,	// (0x000328d6) aid_size_cell_graphic2

0x05d4,	// (0x0003290e) bg_popup_window_pane_cp21_ParamLimits

0x05d4,	// (0x0003290e) bg_popup_window_pane_cp21

0x05e2,	// (0x0003291c) graphic2_pages_pane_ParamLimits

0x05e2,	// (0x0003291c) graphic2_pages_pane

0x061c,	// (0x00032956) grid_graphic2_control_pane_ParamLimits

0x061c,	// (0x00032956) grid_graphic2_control_pane

0x0652,	// (0x0003298c) grid_graphic2_pane_ParamLimits

0x0652,	// (0x0003298c) grid_graphic2_pane

0x06b2,	// (0x000329ec) cell_graphic2_pane

0xaecb,	// (0x0003d205) main_comp_mode_pane

0x96a3,	// (0x0003b9dd) list_ai3_gene_pane_ParamLimits

0xcec5,	// (0x0003f1ff) bg_popup_window_pane_cp19_ParamLimits

0x9814,	// (0x0003bb4e) bg_touch_area_indi_pane_ParamLimits

0x9814,	// (0x0003bb4e) bg_touch_area_indi_pane

0x982a,	// (0x0003bb64) bg_touch_area_indi_pane_cp01_ParamLimits

0x982a,	// (0x0003bb64) bg_touch_area_indi_pane_cp01

0x9840,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02_ParamLimits

0x9840,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02

0x9856,	// (0x0003bb90) bg_touch_area_indi_pane_cp03_ParamLimits

0x9856,	// (0x0003bb90) bg_touch_area_indi_pane_cp03

0x986c,	// (0x0003bba6) popup_slider_window_g1_ParamLimits

0x9888,	// (0x0003bbc2) popup_slider_window_g2_ParamLimits

0x98a4,	// (0x0003bbde) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x0004202e) popup_slider_window_g_ParamLimits

0x98c0,	// (0x0003bbfa) popup_slider_window_t1_ParamLimits

0x9904,	// (0x0003bc3e) small_volume_slider_vertical_pane_ParamLimits

0x06b2,	// (0x000329ec) cell_graphic2_pane_ParamLimits

0x06ef,	// (0x00032a29) bg_button_pane_cp10_ParamLimits

0x06ef,	// (0x00032a29) bg_button_pane_cp10

0x0702,	// (0x00032a3c) bg_button_pane_cp11_ParamLimits

0x0702,	// (0x00032a3c) bg_button_pane_cp11

0x0715,	// (0x00032a4f) graphic2_pages_pane_g1_ParamLimits

0x0715,	// (0x00032a4f) graphic2_pages_pane_g1

0x0730,	// (0x00032a6a) graphic2_pages_pane_g2_ParamLimits

0x0730,	// (0x00032a6a) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x000420f2) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x000420f2) graphic2_pages_pane_g

0x0748,	// (0x00032a82) graphic2_pages_pane_t1_ParamLimits

0x0748,	// (0x00032a82) graphic2_pages_pane_t1

0x075e,	// (0x00032a98) cell_graphic2_control_pane_ParamLimits

0x075e,	// (0x00032a98) cell_graphic2_control_pane

0x077a,	// (0x00032ab4) cell_graphic2_pane_g1_ParamLimits

0x077a,	// (0x00032ab4) cell_graphic2_pane_g1

0x0787,	// (0x00032ac1) cell_graphic2_pane_g2_ParamLimits

0x0787,	// (0x00032ac1) cell_graphic2_pane_g2

0x0794,	// (0x00032ace) cell_graphic2_pane_g3_ParamLimits

0x0794,	// (0x00032ace) cell_graphic2_pane_g3

0x07a1,	// (0x00032adb) cell_graphic2_pane_g4_ParamLimits

0x07a1,	// (0x00032adb) cell_graphic2_pane_g4

0x07ae,	// (0x00032ae8) cell_graphic2_pane_g5_ParamLimits

0x07ae,	// (0x00032ae8) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x000420f7) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x000420f7) cell_graphic2_pane_g

0x07c9,	// (0x00032b03) cell_graphic2_pane_t1_ParamLimits

0x07c9,	// (0x00032b03) cell_graphic2_pane_t1

0x246f,	// (0x000347a9) grid_highlight_pane_cp11_ParamLimits

0x246f,	// (0x000347a9) grid_highlight_pane_cp11

0x1142,	// (0x0003347c) bg_button_pane_cp05

0x0800,	// (0x00032b3a) cell_graphic2_control_pane_g1

0x40f0,	// (0x0003642a) bg_touch_area_indi_pane_g1

0x9c74,	// (0x0003bfae) aid_cmod_rocker_key_size

0x9c7e,	// (0x0003bfb8) aid_cmode_itu_key_size

0x9c88,	// (0x0003bfc2) main_cmode_video_pane

0x9c90,	// (0x0003bfca) main_comp_mode_itu_pane

0x9c9a,	// (0x0003bfd4) main_comp_mode_rocker_pane

0x9ca2,	// (0x0003bfdc) cell_cmode_rocker_pane_ParamLimits

0x9ca2,	// (0x0003bfdc) cell_cmode_rocker_pane

0x9cb4,	// (0x0003bfee) cell_cmode_itu_pane_ParamLimits

0x9cb4,	// (0x0003bfee) cell_cmode_itu_pane

0x15c6,	// (0x00033900) bg_button_pane_cp06_ParamLimits

0x15c6,	// (0x00033900) bg_button_pane_cp06

0x8ab2,	// (0x0003adec) cell_cmode_rocker_pane_g1_ParamLimits

0x8ab2,	// (0x0003adec) cell_cmode_rocker_pane_g1

0x9929,	// (0x0003bc63) cell_cmode_rocker_pane_g2_ParamLimits

0x9929,	// (0x0003bc63) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x00042107) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x00042107) cell_cmode_rocker_pane_g

0x0f8f,	// (0x000332c9) bg_button_pane_cp07

0x9cc9,	// (0x0003c003) cell_cmode_itu_pane_g1

0x9cd2,	// (0x0003c00c) cell_cmode_itu_pane_t1

0x9ce0,	// (0x0003c01a) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x0004210c) cell_cmode_itu_pane_t

0x9aaa,	// (0x0003bde4) aid_touch_ctrl_left

0x9ab2,	// (0x0003bdec) aid_touch_ctrl_right

0x0f8f,	// (0x000332c9) compa_mode_pane

0x0828,	// (0x00032b62) aid_cmod_rocker_key_size_cp

0x0832,	// (0x00032b6c) aid_cmode_itu_key_size_cp

0x9cee,	// (0x0003c028) compa_mode_pane_g1

0x9cf6,	// (0x0003c030) compa_mode_pane_g2

0x9cfe,	// (0x0003c038) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x00042111) compa_mode_pane_g

0x083c,	// (0x00032b76) main_comp_mode_itu_pane_cp

0x0844,	// (0x00032b7e) main_comp_mode_rocker_pane_cp

0x084c,	// (0x00032b86) cell_cmode_itu_pane_cp_ParamLimits

0x084c,	// (0x00032b86) cell_cmode_itu_pane_cp

0x0861,	// (0x00032b9b) cell_cmode_rocker_pane_cp_ParamLimits

0x0861,	// (0x00032b9b) cell_cmode_rocker_pane_cp

0x15c6,	// (0x00033900) bg_button_pane_cp06_cp_ParamLimits

0x15c6,	// (0x00033900) bg_button_pane_cp06_cp

0x8ab2,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8ab2,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp

0x40f0,	// (0x0003642a) cell_cmode_rocker_pane_g2_cp

0x0f8f,	// (0x000332c9) bg_button_pane_cp07_cp

0x0873,	// (0x00032bad) cell_cmode_itu_pane_g1_cp

0x087c,	// (0x00032bb6) cell_cmode_itu_pane_t1_cp

0x087c,	// (0x00032bb6) cell_cmode_itu_pane_t2_cp

0xc0b3,	// (0x0003e3ed) settings_code_pane_cp2

0x0ff1,	// (0x0003332b) bg_popup_window_pane_cp3_ParamLimits

0x131a,	// (0x00033654) heading_pane_cp3_ParamLimits

0x1326,	// (0x00033660) listscroll_popup_graphic_pane_ParamLimits

0xc5df,	// (0x0003e919) fep_hwr_aid_pane_ParamLimits

0xcf91,	// (0x0003f2cb) aid_touch_sctrl_top_ParamLimits

0xcfac,	// (0x0003f2e6) sctrl_sk_top_pane_g1_ParamLimits

0xc908,	// (0x0003ec42) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x00042047) sctrl_sk_top_pane_g_ParamLimits

0xcfb9,	// (0x0003f2f3) sctrl_sk_top_pane_t1_ParamLimits

0xcf91,	// (0x0003f2cb) aid_touch_sctrl_bottom_ParamLimits

0xcfb9,	// (0x0003f2f3) sctrl_sk_bottom_pane_t1_ParamLimits

0x99f4,	// (0x0003bd2e) aid_area_touch_clock

0xd5d6,	// (0x0003f910) aid_vkb2_area_top_pane_cell_ParamLimits

0xd5d6,	// (0x0003f910) aid_vkb2_area_top_pane_cell

0xd701,	// (0x0003fa3b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd701,	// (0x0003fa3b) aid_vkb2_area_bottom_pane_cell

0x9bed,	// (0x0003bf27) popup_char_count_window

0x9d06,	// (0x0003c040) popup_char_count_window_g1

0x9d0f,	// (0x0003c049) popup_char_count_window_g2

0x9d18,	// (0x0003c052) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x00042118) popup_char_count_window_g

0x9d21,	// (0x0003c05b) popup_char_count_window_t1

0xd4c4,	// (0x0003f7fe) popup_fep_char_preview_window_ParamLimits

0xd4c4,	// (0x0003f7fe) popup_fep_char_preview_window

0xd5f4,	// (0x0003f92e) vkb2_top_candi_pane_ParamLimits

0xd5f4,	// (0x0003f92e) vkb2_top_candi_pane

0x088a,	// (0x00032bc4) cell_vkb2_top_candi_pane_ParamLimits

0x088a,	// (0x00032bc4) cell_vkb2_top_candi_pane

0xda02,	// (0x0003fd3c) bg_popup_fep_char_preview_window_ParamLimits

0xda02,	// (0x0003fd3c) bg_popup_fep_char_preview_window

0xda10,	// (0x0003fd4a) popup_fep_char_preview_window_t1_ParamLimits

0xda10,	// (0x0003fd4a) popup_fep_char_preview_window_t1

0x9d3f,	// (0x0003c079) bg_popup_fep_char_preview_window_g1

0x9d37,	// (0x0003c071) bg_popup_fep_char_preview_window_g2

0x9d2f,	// (0x0003c069) bg_popup_fep_char_preview_window_g3

0x9d5f,	// (0x0003c099) bg_popup_fep_char_preview_window_g4

0x9d57,	// (0x0003c091) bg_popup_fep_char_preview_window_g5

0xda4a,	// (0x0003fd84) bg_popup_fep_char_preview_window_g6

0x9d4f,	// (0x0003c089) bg_popup_fep_char_preview_window_g7

0x9d47,	// (0x0003c081) bg_popup_fep_char_preview_window_g8

0x9d67,	// (0x0003c0a1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x0004211f) bg_popup_fep_char_preview_window_g

0xc908,	// (0x0003ec42) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc908,	// (0x0003ec42) cell_vkb2_top_candi_pane_g1

0xc916,	// (0x0003ec50) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc916,	// (0x0003ec50) cell_vkb2_top_candi_pane_g2

0x9d6f,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9d6f,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g3

0xda52,	// (0x0003fd8c) cell_vkb2_top_candi_pane_g4_ParamLimits

0xda52,	// (0x0003fd8c) cell_vkb2_top_candi_pane_g4

0x8d02,	// (0x0003b03c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8d02,	// (0x0003b03c) cell_vkb2_top_candi_pane_g5

0xda73,	// (0x0003fdad) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda73,	// (0x0003fdad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x00042132) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x00042132) cell_vkb2_top_candi_pane_g

0xda81,	// (0x0003fdbb) cell_vkb2_top_candi_pane_t1

0xbef6,	// (0x0003e230) aid_size_touch_slider_mark_ParamLimits

0xbef6,	// (0x0003e230) aid_size_touch_slider_mark

0x0610,	// (0x0003294a) grid_graphic2_catg_pane_ParamLimits

0x0610,	// (0x0003294a) grid_graphic2_catg_pane

0x068e,	// (0x000329c8) popup_grid_graphic2_window_t1_ParamLimits

0x068e,	// (0x000329c8) popup_grid_graphic2_window_t1

0x06a0,	// (0x000329da) popup_grid_graphic2_window_t2_ParamLimits

0x06a0,	// (0x000329da) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x000420ed) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x000420ed) popup_grid_graphic2_window_t

0x1142,	// (0x0003347c) bg_button_pane_cp05_ParamLimits

0x0800,	// (0x00032b3a) cell_graphic2_control_pane_g1_ParamLimits

0x0944,	// (0x00032c7e) cell_graphic2_catg_pane_ParamLimits

0x0944,	// (0x00032c7e) cell_graphic2_catg_pane

0x0f8f,	// (0x000332c9) bg_button_pane_cp12

0x0956,	// (0x00032c90) cell_graphic2_catg_pane_g1

0x99c0,	// (0x0003bcfa) cell_tb_ext_pane_t1_ParamLimits

0xd84c,	// (0x0003fb86) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd84c,	// (0x0003fb86) vkb2_top_cell_right_narrow_pane

0xd864,	// (0x0003fb9e) vkb2_top_cell_right_wide_pane_ParamLimits

0xd864,	// (0x0003fb9e) vkb2_top_cell_right_wide_pane

0xc5d1,	// (0x0003e90b) bg_vkb2_func_pane_ParamLimits

0xc5d1,	// (0x0003e90b) bg_vkb2_func_pane

0xd8d5,	// (0x0003fc0f) vkb2_top_cell_left_pane_g1_ParamLimits

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp03

0xd933,	// (0x0003fc6d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x23f3,	// (0x0003472d) bg_vkb2_func_pane_g1

0x23eb,	// (0x00034725) bg_vkb2_func_pane_g2

0x23fb,	// (0x00034735) bg_vkb2_func_pane_g3

0x2403,	// (0x0003473d) bg_vkb2_func_pane_g4

0x240b,	// (0x00034745) bg_vkb2_func_pane_g5

0x2413,	// (0x0003474d) bg_vkb2_func_pane_g6

0x2423,	// (0x0003475d) bg_vkb2_func_pane_g7

0x241b,	// (0x00034755) bg_vkb2_func_pane_g8

0x23e3,	// (0x0003471d) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x0004213f) bg_vkb2_func_pane_g

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp01

0xd8d5,	// (0x0003fc0f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd8d5,	// (0x0003fc0f) vkb2_top_cell_right_wide_pane_g1

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc5d1,	// (0x0003e90b) bg_vkb2_fuc_pane_cp02

0xd933,	// (0x0003fc6d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd933,	// (0x0003fc6d) vkb2_top_cell_right_narrow_pane_g1

0xce57,	// (0x0003f191) aid_touch_area_decrease_ParamLimits

0xce57,	// (0x0003f191) aid_touch_area_decrease

0xce6f,	// (0x0003f1a9) aid_touch_area_increase_ParamLimits

0xce6f,	// (0x0003f1a9) aid_touch_area_increase

0xce7b,	// (0x0003f1b5) aid_touch_area_mute_ParamLimits

0xce7b,	// (0x0003f1b5) aid_touch_area_mute

0xce97,	// (0x0003f1d1) aid_touch_area_slider_ParamLimits

0xce97,	// (0x0003f1d1) aid_touch_area_slider

0xced1,	// (0x0003f20b) popup_slider_window_g4_ParamLimits

0xced1,	// (0x0003f20b) popup_slider_window_g4

0xcedd,	// (0x0003f217) popup_slider_window_g5_ParamLimits

0xcedd,	// (0x0003f217) popup_slider_window_g5

0xceff,	// (0x0003f239) popup_slider_window_g6_ParamLimits

0xceff,	// (0x0003f239) popup_slider_window_g6

0x98ec,	// (0x0003bc26) popup_slider_window_t2_ParamLimits

0x98ec,	// (0x0003bc26) popup_slider_window_t2

0x0001,

0xfd01,	// (0x0004203b) popup_slider_window_t_ParamLimits

0xfd01,	// (0x0004203b) popup_slider_window_t

0xcf11,	// (0x0003f24b) slider_pane_ParamLimits

0xcf11,	// (0x0003f24b) slider_pane

0x9d90,	// (0x0003c0ca) slider_pane_g1_ParamLimits

0x9d90,	// (0x0003c0ca) slider_pane_g1

0x9da4,	// (0x0003c0de) slider_pane_g2_ParamLimits

0x9da4,	// (0x0003c0de) slider_pane_g2

0x9dba,	// (0x0003c0f4) slider_pane_g3_ParamLimits

0x9dba,	// (0x0003c0f4) slider_pane_g3

0x0003,

0xfe18,	// (0x00042152) slider_pane_g_ParamLimits

0xfe18,	// (0x00042152) slider_pane_g

0xbb2e,	// (0x0003de68) popup_tb_float_extension_window_ParamLimits

0xbb2e,	// (0x0003de68) popup_tb_float_extension_window

0x9de6,	// (0x0003c120) aid_size_cell_tb_float_ext

0x0f8f,	// (0x000332c9) bg_popup_sub_window_cp28

0x9df1,	// (0x0003c12b) grid_tb_float_ext_pane

0x9df9,	// (0x0003c133) cell_tb_float_ext_pane_ParamLimits

0x9df9,	// (0x0003c133) cell_tb_float_ext_pane

0x9e11,	// (0x0003c14b) cell_tb_float_ext_pane_g1

0x9e1a,	// (0x0003c154) grid_highlight_pane_cp12

0xc71a,	// (0x0003ea54) cell_last_hwr_side_pane_ParamLimits

0xc71a,	// (0x0003ea54) cell_last_hwr_side_pane

0x40f0,	// (0x0003642a) cell_last_hwr_side_pane_g1

0x9e23,	// (0x0003c15d) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x0004215b) cell_last_hwr_side_pane_g

0xd7c9,	// (0x0003fb03) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd7c9,	// (0x0003fb03) vkb2_area_bottom_space_btn_pane

0xc908,	// (0x0003ec42) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9c62,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xda81,	// (0x0003fdbb) cell_vkb2_top_candi_pane_t1_ParamLimits

0xda9f,	// (0x0003fdd9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xda9f,	// (0x0003fdd9) vkb2_area_bottom_space_btn_pane_g1

0xdad5,	// (0x0003fe0f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xdad5,	// (0x0003fe0f) vkb2_area_bottom_space_btn_pane_g2

0xdb0b,	// (0x0003fe45) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xdb0b,	// (0x0003fe45) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x00042160) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x00042160) vkb2_area_bottom_space_btn_pane_g

0xc68e,	// (0x0003e9c8) cel_fep_hwr_func_pane_ParamLimits

0xc68e,	// (0x0003e9c8) cel_fep_hwr_func_pane

0xc6ca,	// (0x0003ea04) cell_hwr_side_button_pane_ParamLimits

0xc6ca,	// (0x0003ea04) cell_hwr_side_button_pane

0x99f4,	// (0x0003bd2e) aid_area_touch_clock_ParamLimits

0x1142,	// (0x0003347c) bg_uniindi_top_pane_ParamLimits

0x9a06,	// (0x0003bd40) uniindi_top_pane_g1_ParamLimits

0x9a1c,	// (0x0003bd56) uniindi_top_pane_g2_ParamLimits

0x9a28,	// (0x0003bd62) uniindi_top_pane_g3_ParamLimits

0x9a39,	// (0x0003bd73) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x00042073) uniindi_top_pane_g_ParamLimits

0x9a46,	// (0x0003bd80) uniindi_top_pane_t1_ParamLimits

0x1142,	// (0x0003347c) bg_vkb2_func_pane_cp01_ParamLimits

0x1142,	// (0x0003347c) bg_vkb2_func_pane_cp01

0x9e2c,	// (0x0003c166) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e2c,	// (0x0003c166) cel_fep_hwr_func_pane_g1

0x1142,	// (0x0003347c) bg_vkb2_func_pane_cp02_ParamLimits

0x1142,	// (0x0003347c) bg_vkb2_func_pane_cp02

0x9e2c,	// (0x0003c166) cell_hwr_side_button_pane_g1_ParamLimits

0x9e2c,	// (0x0003c166) cell_hwr_side_button_pane_g1

0x22fd,	// (0x00034637) status_pane_g4_ParamLimits

0x22fd,	// (0x00034637) status_pane_g4

0x2315,	// (0x0003464f) status_pane_t1

0x3f81,	// (0x000362bb) form2_midp_gauge_slider_cont_pane

0x3f89,	// (0x000362c3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc530,	// (0x0003e86a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc542,	// (0x0003e87c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00041e3a) form2_midp_gauge_slider_pane_t_ParamLimits

0x3f9b,	// (0x000362d5) form2_midp_slider_pane_ParamLimits

0xd484,	// (0x0003f7be) aid_size_cell_func_vkb2_ParamLimits

0xd484,	// (0x0003f7be) aid_size_cell_func_vkb2

0x9dd2,	// (0x0003c10c) slider_pane_g4_ParamLimits

0x9dd2,	// (0x0003c10c) slider_pane_g4

0xdb51,	// (0x0003fe8b) form2_midp_gauge_slider_pane_t2_cp01

0xdb5f,	// (0x0003fe99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdb5f,	// (0x0003fe99) form2_midp_gauge_slider_pane_t3_cp01

0xdb7c,	// (0x0003feb6) form2_midp_slider_pane_cp01

0x0f8f,	// (0x000332c9) navi_smil_pane

0x9e5c,	// (0x0003c196) navi_smil_pane_g1

0x9e64,	// (0x0003c19e) navi_smil_pane_t1

0x9e3a,	// (0x0003c174) form2_midp_slider_pane_g1

0x9e43,	// (0x0003c17d) form2_midp_slider_pane_g2

0x9e4b,	// (0x0003c185) form2_midp_slider_pane_g3

0x9e3a,	// (0x0003c174) form2_midp_slider_pane_g4

0x0a45,	// (0x00032d7f) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x00042169) form2_midp_slider_pane_g

0xdb41,	// (0x0003fe7b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xdb41,	// (0x0003fe7b) vkb2_area_bottom_space_btn_pane_g4

0x4818,	// (0x00036b52) lc0_navi_pane_ParamLimits

0x4818,	// (0x00036b52) lc0_navi_pane

0x488e,	// (0x00036bc8) lc0_stat_indi_pane_ParamLimits

0x488e,	// (0x00036bc8) lc0_stat_indi_pane

0x48a5,	// (0x00036bdf) ls0_title_pane_ParamLimits

0x48a5,	// (0x00036bdf) ls0_title_pane

0x15c6,	// (0x00033900) bg_popup_sub_pane_cp14_ParamLimits

0x99db,	// (0x0003bd15) list_uniindi_pane_ParamLimits

0x99e7,	// (0x0003bd21) uniindi_top_pane_ParamLimits

0x9a82,	// (0x0003bdbc) list_single_uniindi_pane_g1_ParamLimits

0x9a95,	// (0x0003bdcf) list_single_uniindi_pane_t1_ParamLimits

0xdb85,	// (0x0003febf) lc0_stat_clock_pane_ParamLimits

0xdb85,	// (0x0003febf) lc0_stat_clock_pane

0x0a68,	// (0x00032da2) lc0_stat_indi_pane_g1_ParamLimits

0x0a68,	// (0x00032da2) lc0_stat_indi_pane_g1

0x0a5b,	// (0x00032d95) lc0_stat_indi_pane_g2_ParamLimits

0x0a5b,	// (0x00032d95) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x00042174) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x00042174) lc0_stat_indi_pane_g

0xdb92,	// (0x0003fecc) lc0_uni_indicator_pane_ParamLimits

0xdb92,	// (0x0003fecc) lc0_uni_indicator_pane

0x9e72,	// (0x0003c1ac) ls0_title_pane_g1_ParamLimits

0x9e72,	// (0x0003c1ac) ls0_title_pane_g1

0x0a82,	// (0x00032dbc) ls0_title_pane_t1_ParamLimits

0x0a82,	// (0x00032dbc) ls0_title_pane_t1

0xdb9f,	// (0x0003fed9) lc0_uni_indicator_pane_g1_ParamLimits

0xdb9f,	// (0x0003fed9) lc0_uni_indicator_pane_g1

0x9e86,	// (0x0003c1c0) lc0_stat_clock_pane_t1

0xaecb,	// (0x0003d205) main_ai5_pane

0x9e94,	// (0x0003c1ce) ai5_sk_pane_ParamLimits

0x9e94,	// (0x0003c1ce) ai5_sk_pane

0x0aca,	// (0x00032e04) cell_ai5_widget_pane_ParamLimits

0x0aca,	// (0x00032e04) cell_ai5_widget_pane

0x9ea1,	// (0x0003c1db) aid_size_cell_widget_grid

0x9eaf,	// (0x0003c1e9) bg_ai5_widget_pane_ParamLimits

0x9eaf,	// (0x0003c1e9) bg_ai5_widget_pane

0x9f03,	// (0x0003c23d) cell_ai5_widget_pane_g2

0x9f13,	// (0x0003c24d) cell_ai5_widget_pane_g3

0x9f2a,	// (0x0003c264) cell_ai5_widget_pane_g4

0x9f36,	// (0x0003c270) cell_ai5_widget_pane_g5

0x9f42,	// (0x0003c27c) cell_ai5_widget_pane_g6

0x9f4e,	// (0x0003c288) cell_ai5_widget_pane_g7

0x9f96,	// (0x0003c2d0) cell_ai5_widget_pane_t1_ParamLimits

0x9f96,	// (0x0003c2d0) cell_ai5_widget_pane_t1

0x9fb3,	// (0x0003c2ed) cell_ai5_widget_pane_t2_ParamLimits

0x9fb3,	// (0x0003c2ed) cell_ai5_widget_pane_t2

0x9fcb,	// (0x0003c305) cell_ai5_widget_pane_t3_ParamLimits

0x9fcb,	// (0x0003c305) cell_ai5_widget_pane_t3

0x9fe3,	// (0x0003c31d) cell_ai5_widget_pane_t4_ParamLimits

0x9fe3,	// (0x0003c31d) cell_ai5_widget_pane_t4

0xa000,	// (0x0003c33a) cell_ai5_widget_pane_t5_ParamLimits

0xa000,	// (0x0003c33a) cell_ai5_widget_pane_t5

0xa01f,	// (0x0003c359) cell_ai5_widget_pane_t6_ParamLimits

0xa01f,	// (0x0003c359) cell_ai5_widget_pane_t6

0xa031,	// (0x0003c36b) cell_ai5_widget_pane_t7_ParamLimits

0xa031,	// (0x0003c36b) cell_ai5_widget_pane_t7

0xa04a,	// (0x0003c384) cell_ai5_widget_pane_t8_ParamLimits

0xa04a,	// (0x0003c384) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x0004218e) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x0004218e) cell_ai5_widget_pane_t

0xa09e,	// (0x0003c3d8) grid_ai5_widget_pane

0x15c6,	// (0x00033900) highlight_cell_ai5_widget_pane_ParamLimits

0x15c6,	// (0x00033900) highlight_cell_ai5_widget_pane

0x0b32,	// (0x00032e6c) ai5_sk_left_pane

0x0b3c,	// (0x00032e76) ai5_sk_middle_pane

0x0b46,	// (0x00032e80) ai5_sk_right_pane

0xa0aa,	// (0x0003c3e4) bg_ai5_widget_pane_g1_ParamLimits

0xa0aa,	// (0x0003c3e4) bg_ai5_widget_pane_g1

0xa0b6,	// (0x0003c3f0) bg_ai5_widget_pane_g2_ParamLimits

0xa0b6,	// (0x0003c3f0) bg_ai5_widget_pane_g2

0xa0c2,	// (0x0003c3fc) bg_ai5_widget_pane_g3_ParamLimits

0xa0c2,	// (0x0003c3fc) bg_ai5_widget_pane_g3

0xa0ce,	// (0x0003c408) bg_ai5_widget_pane_g4_ParamLimits

0xa0ce,	// (0x0003c408) bg_ai5_widget_pane_g4

0xa0da,	// (0x0003c414) bg_ai5_widget_pane_g5_ParamLimits

0xa0da,	// (0x0003c414) bg_ai5_widget_pane_g5

0xa0e6,	// (0x0003c420) bg_ai5_widget_pane_g6_ParamLimits

0xa0e6,	// (0x0003c420) bg_ai5_widget_pane_g6

0xa0f2,	// (0x0003c42c) bg_ai5_widget_pane_g7_ParamLimits

0xa0f2,	// (0x0003c42c) bg_ai5_widget_pane_g7

0xa0fe,	// (0x0003c438) bg_ai5_widget_pane_g8_ParamLimits

0xa0fe,	// (0x0003c438) bg_ai5_widget_pane_g8

0xa10a,	// (0x0003c444) bg_ai5_widget_pane_g9_ParamLimits

0xa10a,	// (0x0003c444) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x000421a3) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x000421a3) bg_ai5_widget_pane_g

0xa13c,	// (0x0003c476) cell_shortcut_ai5_widget_pane_ParamLimits

0xa13c,	// (0x0003c476) cell_shortcut_ai5_widget_pane

0x204c,	// (0x00034386) bg_cell_shortcut_ai5_widget_pane

0xa14d,	// (0x0003c487) cell_grid_ai5_widget_pane_g1

0x204c,	// (0x00034386) highlight_cell_shortcut_ai5_widget_pane

0x23f3,	// (0x0003472d) ai5_sk_left_pane_g1

0xa156,	// (0x0003c490) ai5_sk_left_pane_g2

0xa15e,	// (0x0003c498) ai5_sk_left_pane_g3

0xa166,	// (0x0003c4a0) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x000421b6) ai5_sk_left_pane_g

0xa16e,	// (0x0003c4a8) ai5_sk_left_pane_t1

0x23eb,	// (0x00034725) ai5_sk_right_pane_g1

0xa17c,	// (0x0003c4b6) ai5_sk_right_pane_g2

0xa184,	// (0x0003c4be) ai5_sk_right_pane_g3

0xa18c,	// (0x0003c4c6) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x000421bf) ai5_sk_right_pane_g

0xa194,	// (0x0003c4ce) ai5_sk_right_pane_t1

0x23eb,	// (0x00034725) ai5_sk_middle_pane_g1

0x23f3,	// (0x0003472d) ai5_sk_middle_pane_g2

0x240b,	// (0x00034745) ai5_sk_middle_pane_g3

0xa184,	// (0x0003c4be) ai5_sk_middle_pane_g4

0xa15e,	// (0x0003c498) ai5_sk_middle_pane_g5

0xa1a2,	// (0x0003c4dc) ai5_sk_middle_pane_g6

0x0b50,	// (0x00032e8a) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x000421c8) ai5_sk_middle_pane_g

0x4761,	// (0x00036a9b) aid_touch_area_size_lc0_ParamLimits

0x4761,	// (0x00036a9b) aid_touch_area_size_lc0

0xc937,	// (0x0003ec71) cell_hwr_candidate_pane_t1_ParamLimits

0x2221,	// (0x0003455b) aid_touch_navi_pane

0x4978,	// (0x00036cb2) status_dt_navi_pane_ParamLimits

0x4978,	// (0x00036cb2) status_dt_navi_pane

0x4985,	// (0x00036cbf) status_dt_sta_pane_ParamLimits

0x4985,	// (0x00036cbf) status_dt_sta_pane

0x0b58,	// (0x00032e92) dt_sta_controll_pane

0x0b65,	// (0x00032e9f) dt_sta_indi_pane

0x0b72,	// (0x00032eac) dt_sta_title_pane

0x1142,	// (0x0003347c) bg_dt_sta_indi_pane_ParamLimits

0x1142,	// (0x0003347c) bg_dt_sta_indi_pane

0xa1aa,	// (0x0003c4e4) dt_sta_battery_pane

0xa1b2,	// (0x0003c4ec) dt_sta_indi_pane_g1

0xa1bb,	// (0x0003c4f5) dt_sta_indi_pane_g2

0xa1c4,	// (0x0003c4fe) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x000421d7) dt_sta_indi_pane_g

0xa1cd,	// (0x0003c507) dt_sta_signal_pane

0x15c6,	// (0x00033900) bg_dt_sta_title_pane_ParamLimits

0x15c6,	// (0x00033900) bg_dt_sta_title_pane

0xa1d6,	// (0x0003c510) dt_sta_title_pane_g1

0xa1de,	// (0x0003c518) dt_sta_title_pane_t1_ParamLimits

0xa1de,	// (0x0003c518) dt_sta_title_pane_t1

0x0f8f,	// (0x000332c9) bg_dt_sta_control_pane

0xa1f3,	// (0x0003c52d) dt_sta_controll_pane_g1

0xa1fc,	// (0x0003c536) bg_dt_sta_title_pane_g1

0xa205,	// (0x0003c53f) bg_dt_sta_title_pane_g2

0xa20e,	// (0x0003c548) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x000421de) bg_dt_sta_title_pane_g

0x40f0,	// (0x0003642a) bg_dt_sta_indi_pane_g1

0xa217,	// (0x0003c551) dt_sta_signal_pane_g1

0xa21f,	// (0x0003c559) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x000421e5) dt_sta_signal_pane_g

0xa227,	// (0x0003c561) dt_sta_battery_pane_g1

0xa230,	// (0x0003c56a) dt_sta_battery_pane_t1

0x40f0,	// (0x0003642a) bg_dt_sta_control_pane_g1

0x1b7f,	// (0x00033eb9) fep_china_uni_eep_pane

0x1b87,	// (0x00033ec1) fep_china_uni_entry_pane_ParamLimits

0x1b97,	// (0x00033ed1) popup_fep_china_uni_window_g1_ParamLimits

0x1ba7,	// (0x00033ee1) popup_fep_china_uni_window_g2_ParamLimits

0x1ba7,	// (0x00033ee1) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00041a57) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00041a57) popup_fep_china_uni_window_g

0xa23f,	// (0x0003c579) fep_china_uni_eep_pane_g1

0xa247,	// (0x0003c581) fep_china_uni_eep_pane_t1

0x9e53,	// (0x0003c18d) aid_touch_area_size_smil_player

0x22d0,	// (0x0003460a) lc0_clock_pane

0x2309,	// (0x00034643) status_pane_g5_ParamLimits

0x2309,	// (0x00034643) status_pane_g5

0xb891,	// (0x0003dbcb) popup_keymap_window

0x22e9,	// (0x00034623) status_icon_pane

0x9f13,	// (0x0003c24d) cell_ai5_widget_pane_g3_ParamLimits

0x9f2a,	// (0x0003c264) cell_ai5_widget_pane_g4_ParamLimits

0x9f36,	// (0x0003c270) cell_ai5_widget_pane_g5_ParamLimits

0x9f5a,	// (0x0003c294) cell_ai5_widget_pane_g8_ParamLimits

0x9f5a,	// (0x0003c294) cell_ai5_widget_pane_g8

0x9f6e,	// (0x0003c2a8) cell_ai5_widget_pane_g9_ParamLimits

0x9f6e,	// (0x0003c2a8) cell_ai5_widget_pane_g9

0x9f82,	// (0x0003c2bc) cell_ai5_widget_pane_g10_ParamLimits

0x9f82,	// (0x0003c2bc) cell_ai5_widget_pane_g10

0xa256,	// (0x0003c590) status_icon_pane_g1

0x0f8f,	// (0x000332c9) bg_popup_sub_pane_cp13

0xa25e,	// (0x0003c598) popup_keymap_window_t1

0x472c,	// (0x00036a66) control_pane_g6_ParamLimits

0x472c,	// (0x00036a66) control_pane_g6

0x471f,	// (0x00036a59) control_pane_g7_ParamLimits

0x471f,	// (0x00036a59) control_pane_g7

0x4712,	// (0x00036a4c) control_pane_g8_ParamLimits

0x4712,	// (0x00036a4c) control_pane_g8

0x0b58,	// (0x00032e92) dt_sta_controll_pane_ParamLimits

0x0b65,	// (0x00032e9f) dt_sta_indi_pane_ParamLimits

0x0b72,	// (0x00032eac) dt_sta_title_pane_ParamLimits

0x1505,	// (0x0003383f) aid_size_touch_scroll_bar_cale

0xafa4,	// (0x0003d2de) popup_discreet_window_ParamLimits

0xafa4,	// (0x0003d2de) popup_discreet_window

0xb008,	// (0x0003d342) popup_sk_window

0x2944,	// (0x00034c7e) bg_popup_sub_pane_cp28_ParamLimits

0x2944,	// (0x00034c7e) bg_popup_sub_pane_cp28

0xa26c,	// (0x0003c5a6) popup_discreet_window_g1_ParamLimits

0xa26c,	// (0x0003c5a6) popup_discreet_window_g1

0xa28c,	// (0x0003c5c6) popup_discreet_window_t1_ParamLimits

0xa28c,	// (0x0003c5c6) popup_discreet_window_t1

0xa2aa,	// (0x0003c5e4) popup_discreet_window_t2_ParamLimits

0xa2aa,	// (0x0003c5e4) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x000421ea) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x000421ea) popup_discreet_window_t

0xdbb1,	// (0x0003feeb) popup_sk_window_g1

0xdbbb,	// (0x0003fef5) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x000421f1) popup_sk_window_g

0xdbc3,	// (0x0003fefd) popup_sk_window_t1

0xdbd1,	// (0x0003ff0b) popup_sk_window_t1_copy1

0x9f03,	// (0x0003c23d) cell_ai5_widget_pane_g2_ParamLimits

0xa05c,	// (0x0003c396) cell_ai5_widget_pane_t9_ParamLimits

0xa05c,	// (0x0003c396) cell_ai5_widget_pane_t9

0x0f8f,	// (0x000332c9) main_fep_fshwr2_pane

0xdbdf,	// (0x0003ff19) aid_fshwr2_btn_pane

0xdbeb,	// (0x0003ff25) aid_fshwr2_syb_pane

0xdbf7,	// (0x0003ff31) aid_fshwr2_txt_pane

0xdc03,	// (0x0003ff3d) fshwr2_func_candi_pane

0xdc14,	// (0x0003ff4e) fshwr2_hwr_syb_pane

0xdc20,	// (0x0003ff5a) fshwr2_icf_pane

0xaecb,	// (0x0003d205) fshwr2_icf_bg_pane

0xdc45,	// (0x0003ff7f) fshwr2_icf_pane_t1_ParamLimits

0xdc45,	// (0x0003ff7f) fshwr2_icf_pane_t1

0x1afc,	// (0x00033e36) fshwr2_func_candi_pane_g1

0x0c2f,	// (0x00032f69) fshwr2_func_candi_row_pane_ParamLimits

0x0c2f,	// (0x00032f69) fshwr2_func_candi_row_pane

0xdc5d,	// (0x0003ff97) cell_fshwr2_syb_pane_ParamLimits

0xdc5d,	// (0x0003ff97) cell_fshwr2_syb_pane

0xc908,	// (0x0003ec42) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc908,	// (0x0003ec42) fshwr2_hwr_syb_pane_g1

0xaecb,	// (0x0003d205) bg_popup_call_pane_cp01

0xdc71,	// (0x0003ffab) fshwr2_func_candi_cell_pane_ParamLimits

0xdc71,	// (0x0003ffab) fshwr2_func_candi_cell_pane

0x2f81,	// (0x000352bb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2f81,	// (0x000352bb) fshwr2_func_candi_cell_bg_pane

0xdcb0,	// (0x0003ffea) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdcb0,	// (0x0003ffea) fshwr2_func_candi_cell_pane_g1

0xdcd0,	// (0x0004000a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdcd0,	// (0x0004000a) fshwr2_func_candi_cell_pane_t1

0xaecb,	// (0x0003d205) bg_button_pane_cp08

0x204c,	// (0x00034386) cell_fshwr2_syb_bg_pane

0xdce3,	// (0x0004001d) cell_fshwr2_syb_bg_pane_g1

0xdceb,	// (0x00040025) cell_fshwr2_syb_bg_pane_t1

0x15c6,	// (0x00033900) main_tmo_pane

0x4bb9,	// (0x00036ef3) uni_indicator_pane_g1_ParamLimits

0x4bcc,	// (0x00036f06) uni_indicator_pane_g2_ParamLimits

0x4bde,	// (0x00036f18) uni_indicator_pane_g3_ParamLimits

0x3368,	// (0x000356a2) uni_indicator_pane_g4_ParamLimits

0x3368,	// (0x000356a2) uni_indicator_pane_g4

0x337c,	// (0x000356b6) uni_indicator_pane_g5_ParamLimits

0x337c,	// (0x000356b6) uni_indicator_pane_g5

0x337c,	// (0x000356b6) uni_indicator_pane_g6_ParamLimits

0x337c,	// (0x000356b6) uni_indicator_pane_g6

0xf921,	// (0x00041c5b) uni_indicator_pane_g_ParamLimits

0xce3b,	// (0x0003f175) popup_tmo_note_window_ParamLimits

0xce3b,	// (0x0003f175) popup_tmo_note_window

0xd00a,	// (0x0003f344) fshwr2_bg_pane

0xdcc1,	// (0x0003fffb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdcc1,	// (0x0003fffb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x000421f6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x000421f6) fshwr2_func_candi_cell_pane_g

0xc8f0,	// (0x0003ec2a) bg_popup_window_pane_cp01

0xdcfa,	// (0x00040034) bg_popup_window_pane_g1_cp01

0xed3e,	// (0x00041078) bg_popup_window_pane_cp22_ParamLimits

0xed3e,	// (0x00041078) bg_popup_window_pane_cp22

0xed4c,	// (0x00041086) listscroll_tmo_link_pane_ParamLimits

0xed4c,	// (0x00041086) listscroll_tmo_link_pane

0xed8c,	// (0x000410c6) popup_tmo_note_window_g1_ParamLimits

0xed8c,	// (0x000410c6) popup_tmo_note_window_g1

0xed99,	// (0x000410d3) tmo_note_info_pane_ParamLimits

0xed99,	// (0x000410d3) tmo_note_info_pane

0x0ce5,	// (0x0003301f) list_tmo_note_info_pane_g1_ParamLimits

0x0ce5,	// (0x0003301f) list_tmo_note_info_pane_g1

0xedb3,	// (0x000410ed) list_tmo_note_info_pane_g2_ParamLimits

0xedb3,	// (0x000410ed) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x000421fb) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x000421fb) list_tmo_note_info_pane_g

0xedcf,	// (0x00041109) list_tmo_note_info_text_pane_ParamLimits

0xedcf,	// (0x00041109) list_tmo_note_info_text_pane

0xee11,	// (0x0004114b) list_tmo_link_pane

0xee1e,	// (0x00041158) scroll_pane_cp20

0xee2b,	// (0x00041165) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x00041165) list_single_tmo_link_pane

0xee3b,	// (0x00041175) list_single_tmo_link_pane_t1

0xee49,	// (0x00041183) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x00041183) list_tmo_note_info_text_pane_t1

0x442e,	// (0x00036768) aid_size_touch_scroll_bar_cp01_ParamLimits

0x442e,	// (0x00036768) aid_size_touch_scroll_bar_cp01

0xe473,	// (0x000407ad) aid_size_touch_slider_marker

0xaff4,	// (0x0003d32e) popup_settings_window_ParamLimits

0xaff4,	// (0x0003d32e) popup_settings_window

0xe605,	// (0x0004093f) popup_candi_list_indi_window

0x2221,	// (0x0003455b) aid_touch_navi_pane_ParamLimits

0xcf65,	// (0x0003f29f) rs_clock_indi_pane

0xcf6e,	// (0x0003f2a8) sctrl_sk_bottom_pane_ParamLimits

0xcf7f,	// (0x0003f2b9) sctrl_sk_top_pane_ParamLimits

0xd4de,	// (0x0003f818) popup_fep_tooltip_window

0x9ea1,	// (0x0003c1db) aid_size_cell_widget_grid_ParamLimits

0x9eee,	// (0x0003c228) cell_ai5_widget_pane_g1_ParamLimits

0x9eee,	// (0x0003c228) cell_ai5_widget_pane_g1

0x9f42,	// (0x0003c27c) cell_ai5_widget_pane_g6_ParamLimits

0x9f4e,	// (0x0003c288) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x00042179) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x00042179) cell_ai5_widget_pane_g

0xa080,	// (0x0003c3ba) cell_ai5_widget_pane_t10_ParamLimits

0xa080,	// (0x0003c3ba) cell_ai5_widget_pane_t10

0xa09e,	// (0x0003c3d8) grid_ai5_widget_pane_ParamLimits

0xa116,	// (0x0003c450) cell_contacts_ai5_widget_pane_ParamLimits

0xa116,	// (0x0003c450) cell_contacts_ai5_widget_pane

0xa2bf,	// (0x0003c5f9) popup_discreet_window_t3_ParamLimits

0xa2bf,	// (0x0003c5f9) popup_discreet_window_t3

0xdc33,	// (0x0003ff6d) popup_fshwr2_char_preview_window_ParamLimits

0xdc33,	// (0x0003ff6d) popup_fshwr2_char_preview_window

0x0cfc,	// (0x00033036) tmo_note_info_pane_t1

0x0d11,	// (0x0003304b) tmo_note_info_pane_t2

0x0d26,	// (0x00033060) tmo_note_info_pane_t3

0xeded,	// (0x00041127) tmo_note_info_pane_t4

0xedff,	// (0x00041139) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x00042200) tmo_note_info_pane_t

0xee11,	// (0x0004114b) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x00041158) scroll_pane_cp20_ParamLimits

0xaecb,	// (0x0003d205) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x0004119c) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x000411aa) popup_candi_list_indi_window_g1

0xee79,	// (0x000411b3) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x000411bf) cell_contacts_ai5_widget_pane_g1

0xee9a,	// (0x000411d4) cell_contacts_ai5_widget_pane_g2

0xeea6,	// (0x000411e0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x0004220b) cell_contacts_ai5_widget_pane_g

0xeeb2,	// (0x000411ec) cell_contacts_ai5_widget_pane_t1

0x15c6,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef27,	// (0x00041261) settings_container_pane

0x204c,	// (0x00034386) listscroll_set_pane_copy1

0x3b22,	// (0x00035e5c) scroll_pane_cp121_copy1

0x2706,	// (0x00034a40) set_content_pane_copy1

0xef33,	// (0x0004126d) aid_height_set_list_copy1_ParamLimits

0xef33,	// (0x0004126d) aid_height_set_list_copy1

0x350b,	// (0x00035845) aid_size_parent_copy1_ParamLimits

0x350b,	// (0x00035845) aid_size_parent_copy1

0xef3f,	// (0x00041279) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef3f,	// (0x00041279) button_value_adjust_pane_cp6_copy1

0x21ff,	// (0x00034539) list_highlight_pane_cp2_copy1_ParamLimits

0x21ff,	// (0x00034539) list_highlight_pane_cp2_copy1

0xef53,	// (0x0004128d) list_set_pane_copy1_ParamLimits

0xef53,	// (0x0004128d) list_set_pane_copy1

0xeec4,	// (0x000411fe) main_pane_set_t1_copy1_ParamLimits

0xeec4,	// (0x000411fe) main_pane_set_t1_copy1

0xeefe,	// (0x00041238) main_pane_set_t2_copy1_ParamLimits

0xeefe,	// (0x00041238) main_pane_set_t2_copy1

0xefe2,	// (0x0004131c) main_pane_set_t3_copy1

0xeff0,	// (0x0004132a) main_pane_set_t4_copy1

0xef1b,	// (0x00041255) set_content_pane_g1_copy1_ParamLimits

0xef1b,	// (0x00041255) set_content_pane_g1_copy1

0xeffe,	// (0x00041338) setting_code_pane_copy1

0xf006,	// (0x00041340) setting_slider_graphic_pane_copy1

0xf006,	// (0x00041340) setting_slider_pane_copy1

0xf006,	// (0x00041340) setting_text_pane_copy1

0xf006,	// (0x00041340) setting_volume_pane_copy1

0xeffe,	// (0x00041338) settings_code_pane_cp2_copy1

0xf00e,	// (0x00041348) settings_code_pane_cp_copy1_ParamLimits

0xf00e,	// (0x00041348) settings_code_pane_cp_copy1

0xdd03,	// (0x0004003d) volume_set_pane_copy1

0xf022,	// (0x0004135c) volume_set_pane_g10_copy1

0xf02a,	// (0x00041364) volume_set_pane_g1_copy1

0xf032,	// (0x0004136c) volume_set_pane_g2_copy1

0xf03a,	// (0x00041374) volume_set_pane_g3_copy1

0xf042,	// (0x0004137c) volume_set_pane_g4_copy1

0xf04a,	// (0x00041384) volume_set_pane_g5_copy1

0xf052,	// (0x0004138c) volume_set_pane_g6_copy1

0xf05a,	// (0x00041394) volume_set_pane_g7_copy1

0xf062,	// (0x0004139c) volume_set_pane_g8_copy1

0xf06a,	// (0x000413a4) volume_set_pane_g9_copy1

0x0ff1,	// (0x0003332b) bg_set_opt_pane_cp_copy1_ParamLimits

0x0ff1,	// (0x0003332b) bg_set_opt_pane_cp_copy1

0xdd0b,	// (0x00040045) setting_slider_pane_t1_copy1_ParamLimits

0xdd0b,	// (0x00040045) setting_slider_pane_t1_copy1

0xdd29,	// (0x00040063) setting_slider_pane_t2_copy1_ParamLimits

0xdd29,	// (0x00040063) setting_slider_pane_t2_copy1

0xdd42,	// (0x0004007c) setting_slider_pane_t3_copy1_ParamLimits

0xdd42,	// (0x0004007c) setting_slider_pane_t3_copy1

0xdd59,	// (0x00040093) slider_set_pane_copy1_ParamLimits

0xdd59,	// (0x00040093) slider_set_pane_copy1

0x161e,	// (0x00033958) set_opt_bg_pane_g1_copy2

0x1626,	// (0x00033960) set_opt_bg_pane_g2_copy2

0xf072,	// (0x000413ac) set_opt_bg_pane_g3_copy2

0x1636,	// (0x00033970) set_opt_bg_pane_g4_copy2

0x163e,	// (0x00033978) set_opt_bg_pane_g5_copy2

0x1646,	// (0x00033980) set_opt_bg_pane_g6_copy2

0xf07a,	// (0x000413b4) set_opt_bg_pane_g7_copy2

0xf082,	// (0x000413bc) set_opt_bg_pane_g8_copy2

0xf08a,	// (0x000413c4) set_opt_bg_pane_g9_copy2

0xdd6f,	// (0x000400a9) aid_size_touch_slider_mark_copy1_ParamLimits

0xdd6f,	// (0x000400a9) aid_size_touch_slider_mark_copy1

0xf092,	// (0x000413cc) slider_set_pane_g1_copy1

0xdd83,	// (0x000400bd) slider_set_pane_g2_copy1

0xbf16,	// (0x0003e250) slider_set_pane_g3_copy1_ParamLimits

0xbf16,	// (0x0003e250) slider_set_pane_g3_copy1

0xbf2a,	// (0x0003e264) slider_set_pane_g4_copy1_ParamLimits

0xbf2a,	// (0x0003e264) slider_set_pane_g4_copy1

0xbf42,	// (0x0003e27c) slider_set_pane_g5_copy1_ParamLimits

0xbf42,	// (0x0003e27c) slider_set_pane_g5_copy1

0xbf16,	// (0x0003e250) slider_set_pane_g6_copy1_ParamLimits

0xbf16,	// (0x0003e250) slider_set_pane_g6_copy1

0xdd8b,	// (0x000400c5) slider_set_pane_g7_copy1_ParamLimits

0xdd8b,	// (0x000400c5) slider_set_pane_g7_copy1

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp2_copy1

0xf09b,	// (0x000413d5) setting_slider_graphic_pane_g1_copy1

0xf0a4,	// (0x000413de) setting_slider_graphic_pane_t1_copy1

0xf0b3,	// (0x000413ed) setting_slider_graphic_pane_t2_copy1

0xf0c2,	// (0x000413fc) slider_set_pane_cp_copy1

0xf0d2,	// (0x0004140c) input_focus_pane_cp1_copy1

0xf0db,	// (0x00041415) list_set_text_pane_copy1

0xf0e3,	// (0x0004141d) setting_text_pane_g1_copy1

0xf0ec,	// (0x00041426) set_text_pane_t1_copy1

0xf0d2,	// (0x0004140c) input_focus_pane_cp2_copy1

0xf0e3,	// (0x0004141d) setting_code_pane_g1_copy1

0xf104,	// (0x0004143e) setting_code_pane_t1_copy1

0x1d5a,	// (0x00034094) list_set_graphic_pane_copy1

0x0fa3,	// (0x000332dd) bg_set_opt_pane_cp4_copy1

0x1d6c,	// (0x000340a6) list_set_graphic_pane_g1_copy1_ParamLimits

0x1d6c,	// (0x000340a6) list_set_graphic_pane_g1_copy1

0xf112,	// (0x0004144c) list_set_graphic_pane_g2_copy1

0x1d84,	// (0x000340be) list_set_graphic_pane_t1_copy1_ParamLimits

0x1d84,	// (0x000340be) list_set_graphic_pane_t1_copy1

0x40f0,	// (0x0003642a) rs_clock_indi_pane_g1

0xf11a,	// (0x00041454) rs_clock_indi_pane_t1

0xf128,	// (0x00041462) rs_indi_pane

0xf130,	// (0x0004146a) rs_indi_pane_g1

0xf139,	// (0x00041473) rs_indi_pane_g2

0xf142,	// (0x0004147c) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x00042212) rs_indi_pane_g

0x204c,	// (0x00034386) bg_popup_preview_window_pane_cp03

0xf14b,	// (0x00041485) popup_fep_tooltip_window_t1

0x91ee,	// (0x0003b528) popup_note2_window_g2_ParamLimits

0x91ee,	// (0x0003b528) popup_note2_window_g2

0x0001,

0xfc78,	// (0x00041fb2) popup_note2_window_g_ParamLimits

0xfc78,	// (0x00041fb2) popup_note2_window_g

0x9669,	// (0x0003b9a3) bg_popup_sub_pane_cp11_ParamLimits

0x9676,	// (0x0003b9b0) cell_ai3_links_pane_g1_ParamLimits

0x968d,	// (0x0003b9c7) cell_ai3_links_pane_t1

0xf0ec,	// (0x00041426) set_text_pane_t1_copy1_ParamLimits

0x1f5f,	// (0x00034299) cell_graphic_popup_pane_cp2_ParamLimits

0x1f5f,	// (0x00034299) cell_graphic_popup_pane_cp2

0xf159,	// (0x00041493) cell_graphic_popup_pane_g1_cp2

0x13b4,	// (0x000336ee) cell_graphic_popup_pane_g2_cp2

0xf161,	// (0x0004149b) cell_graphic_popup_pane_g3_cp2

0xf169,	// (0x000414a3) cell_graphic_popup_pane_t2_cp2

0x13c5,	// (0x000336ff) grid_highlight_pane_cp3_cp2

0x18db,	// (0x00033c15) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x15c6,	// (0x00033900) main_tmo_pane_ParamLimits

0xce33,	// (0x0003f16d) popup_tmo_big_image_note_window

0x9edd,	// (0x0003c217) cell_ai5_widget_list_pane

0x9ee5,	// (0x0003c21f) cell_ai5_widget_lrg_icon_pane

0x0cfc,	// (0x00033036) tmo_note_info_pane_t1_ParamLimits

0x0d11,	// (0x0003304b) tmo_note_info_pane_t2_ParamLimits

0x0d26,	// (0x00033060) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x00041127) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x00041139) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x00042200) tmo_note_info_pane_t_ParamLimits

0xef27,	// (0x00041261) settings_container_pane_ParamLimits

0xf0ca,	// (0x00041404) indicator_popup_pane_cp5

0xf0ca,	// (0x00041404) indicator_popup_pane_cp6

0x1d5a,	// (0x00034094) list_set_graphic_pane_copy1_ParamLimits

0x0f8f,	// (0x000332c9) bg_popup_window_pane_cp23

0xf177,	// (0x000414b1) popup_tmo_big_image_note_window_g1

0xf180,	// (0x000414ba) popup_tmo_big_image_note_window_t1

0xf18e,	// (0x000414c8) popup_tmo_big_image_note_window_t2

0xf19c,	// (0x000414d6) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x00042219) popup_tmo_big_image_note_window_t

0x40f0,	// (0x0003642a) cell_ai5_widget_lrg_icon_pane_g1

0xf1aa,	// (0x000414e4) cell_ai5_widget_lrg_icon_pane_t1

0xf1b8,	// (0x000414f2) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b8,	// (0x000414f2) cell_ai5_widget_list_row_pane

0xf1cf,	// (0x00041509) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cf,	// (0x00041509) cell_ai5_widget_list_row_pane_g1

0xf1dc,	// (0x00041516) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1dc,	// (0x00041516) cell_ai5_widget_list_row_pane_t1

0xf20a,	// (0x00041544) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf20a,	// (0x00041544) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x00042220) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x00042220) cell_ai5_widget_list_row_pane_t

0xaecb,	// (0x0003d205) main_fep_vtchi_ss_pane

0xf24e,	// (0x00041588) popup_fep_char_pre_window

0xf256,	// (0x00041590) popup_fep_ituss_window

0x0dd9,	// (0x00033113) popup_fep_vkbss_window

0x0deb,	// (0x00033125) grid_vkbss_keypad_pane_ParamLimits

0x0deb,	// (0x00033125) grid_vkbss_keypad_pane

0xf289,	// (0x000415c3) ituss_keypad_pane

0xddab,	// (0x000400e5) aid_vkbss_key_offset_ParamLimits

0xddab,	// (0x000400e5) aid_vkbss_key_offset

0xddb7,	// (0x000400f1) cell_vkbss_key_pane_ParamLimits

0xddb7,	// (0x000400f1) cell_vkbss_key_pane

0x2b89,	// (0x00034ec3) bg_cell_vkbss_key_g1_ParamLimits

0x2b89,	// (0x00034ec3) bg_cell_vkbss_key_g1

0x0e23,	// (0x0003315d) cell_vkbss_key_3p_pane_ParamLimits

0x0e23,	// (0x0003315d) cell_vkbss_key_3p_pane

0x0e37,	// (0x00033171) cell_vkbss_key_g1_ParamLimits

0x0e37,	// (0x00033171) cell_vkbss_key_g1

0x0e4b,	// (0x00033185) cell_vkbss_key_t1_ParamLimits

0x0e4b,	// (0x00033185) cell_vkbss_key_t1

0xddcd,	// (0x00040107) cell_ituss_key_pane_ParamLimits

0xddcd,	// (0x00040107) cell_ituss_key_pane

0xf298,	// (0x000415d2) bg_cell_ituss_key_g1_ParamLimits

0xf298,	// (0x000415d2) bg_cell_ituss_key_g1

0xf2a4,	// (0x000415de) cell_ituss_key_pane_g1_ParamLimits

0xf2a4,	// (0x000415de) cell_ituss_key_pane_g1

0xddde,	// (0x00040118) cell_ituss_key_pane_g2_ParamLimits

0xddde,	// (0x00040118) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x00042227) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00042227) cell_ituss_key_pane_g

0xde06,	// (0x00040140) cell_ituss_key_t1_ParamLimits

0xde06,	// (0x00040140) cell_ituss_key_t1

0xde40,	// (0x0004017a) cell_ituss_key_t2_ParamLimits

0xde40,	// (0x0004017a) cell_ituss_key_t2

0xde71,	// (0x000401ab) cell_ituss_key_t3_ParamLimits

0xde71,	// (0x000401ab) cell_ituss_key_t3

0xde40,	// (0x0004017a) cell_ituss_key_t4_ParamLimits

0xde40,	// (0x0004017a) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x0004222e) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x0004222e) cell_ituss_key_t

0xf2ca,	// (0x00041604) cell_vkbss_key_3p_pane_g1

0xf2d2,	// (0x0004160c) cell_vkbss_key_3p_pane_g2

0xf2da,	// (0x00041614) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00042239) cell_vkbss_key_3p_pane_g

0xaecb,	// (0x0003d205) bg_popup_fep_char_preview_window_cp02

0xdeb4,	// (0x000401ee) popup_fep_char_pre_window_t1

0x0b28,	// (0x00032e62) main_ai5_sk_pane

0xee79,	// (0x000411b3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x000411bf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee9a,	// (0x000411d4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeea6,	// (0x000411e0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x0004220b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeb2,	// (0x000411ec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x15c6,	// (0x00033900) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0f6c,	// (0x000332a6) main_ai5_sk_pane_g1

0x278e,	// (0x00034ac8) popup_query_code_window_g1

0xf268,	// (0x000415a2) popup_fep_vkb_icf_pane

0xf273,	// (0x000415ad) popup_fep_vtchi_icf_pane

0xf2e2,	// (0x0004161c) bg_icf_pane

0xf2ee,	// (0x00041628) list_vkb_icf_pane

0xf2fd,	// (0x00041637) bg_icf_pane_cp01

0xf310,	// (0x0004164a) vtchi_icf_list_pane

0xf320,	// (0x0004165a) list_vkb_icf_pane_t1_ParamLimits

0xf320,	// (0x0004165a) list_vkb_icf_pane_t1

0xf335,	// (0x0004166f) vtchi_icf_list_pane_t1_ParamLimits

0xf335,	// (0x0004166f) vtchi_icf_list_pane_t1

0xf256,	// (0x00041590) popup_fep_ituss_window_ParamLimits

0xf273,	// (0x000415ad) popup_fep_vtchi_icf_pane_ParamLimits

0xf289,	// (0x000415c3) ituss_keypad_pane_ParamLimits

0xdda1,	// (0x000400db) ituss_sks_pane

0xf2e2,	// (0x0004161c) bg_icf_pane_ParamLimits

0xf232,	// (0x0004156c) icf_edit_indi_pane_ParamLimits

0xf232,	// (0x0004156c) icf_edit_indi_pane

0xf2ee,	// (0x00041628) list_vkb_icf_pane_ParamLimits

0xf2fd,	// (0x00041637) bg_icf_pane_cp01_ParamLimits

0xf241,	// (0x0004157b) icf_edit_indi_pane_cp01_ParamLimits

0xf241,	// (0x0004157b) icf_edit_indi_pane_cp01

0xf318,	// (0x00041652) vtchi_query_pane

0x8ab2,	// (0x0003adec) icf_edit_indi_pane_g1_ParamLimits

0x8ab2,	// (0x0003adec) icf_edit_indi_pane_g1

0xf3a3,	// (0x000416dd) icf_edit_indi_pane_g2_ParamLimits

0xf3a3,	// (0x000416dd) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00042251) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00042251) icf_edit_indi_pane_g

0xf3b2,	// (0x000416ec) icf_edit_indi_pane_t1

0xf34c,	// (0x00041686) bg_input_focus_pane_cp042

0x14fc,	// (0x00033836) vtchi_button_pane

0xf355,	// (0x0004168f) vtchi_query_pane_t1

0xf363,	// (0x0004169d) vtchi_query_pane_t2

0xf371,	// (0x000416ab) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00042240) vtchi_query_pane_t

0xaecb,	// (0x0003d205) bg_button_pane_cp13

0xf37f,	// (0x000416b9) vtchi_button_pane_g1

0xdec3,	// (0x000401fd) ituss_sks_pane_g1

0xdecd,	// (0x00040207) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00042247) ituss_sks_pane_g

0xf387,	// (0x000416c1) ituss_sks_pane_t1

0xf395,	// (0x000416cf) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0004224c) ituss_sks_pane_t

0x3e1c,	// (0x00036156) indicator_nsta_pane_cp_g1

0x3e24,	// (0x0003615e) indicator_nsta_pane_cp_g2

0x3e2c,	// (0x00036166) indicator_nsta_pane_cp_g3

0x3e1c,	// (0x00036156) indicator_nsta_pane_cp_g4

0x3e24,	// (0x0003615e) indicator_nsta_pane_cp_g5

0x3e2c,	// (0x00036166) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00041df0) indicator_nsta_pane_cp_g

0x07ed,	// (0x00032b27) cell_graphic2_pane_t2_ParamLimits

0x07ed,	// (0x00032b27) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x00042102) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x00042102) cell_graphic2_pane_t

0x081a,	// (0x00032b54) cell_graphic2_control_pane_t1

0x4596,	// (0x000368d0) signal_pane_g3_ParamLimits

0x4596,	// (0x000368d0) signal_pane_g3

0x45a5,	// (0x000368df) signal_pane_g4_ParamLimits

0x45a5,	// (0x000368df) signal_pane_g4

0xf21c,	// (0x00041556) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf21c,	// (0x00041556) cell_ai5_widget_list_row_pane_t3

0xf2b8,	// (0x000415f2) cell_ituss_key_pane_t1_ParamLimits

0xf2b8,	// (0x000415f2) cell_ituss_key_pane_t1

0x24cf,	// (0x00034809) form_field_data_wide_pane_vc_t2_ParamLimits

0x24cf,	// (0x00034809) form_field_data_wide_pane_vc_t2

0x24e1,	// (0x0003481b) form_field_data_wide_pane_vc_t3_ParamLimits

0x24e1,	// (0x0003481b) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00041b43) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00041b43) form_field_data_wide_pane_vc_t

0x3b60,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3b60,	// (0x00035e9a) form_field_slider_wide_pane_vc_t3

0x3c2e,	// (0x00035f68) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3c2e,	// (0x00035f68) form_field_popup_wide_pane_vc_t2

0x3c43,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3c43,	// (0x00035f7d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00041ddf) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00041ddf) form_field_popup_wide_pane_vc_t

0xdbdf,	// (0x0003ff19) aid_fshwr2_btn_pane_ParamLimits

0xdbeb,	// (0x0003ff25) aid_fshwr2_syb_pane_ParamLimits

0xdbf7,	// (0x0003ff31) aid_fshwr2_txt_pane_ParamLimits

0xd00a,	// (0x0003f344) fshwr2_bg_pane_ParamLimits

0xdc03,	// (0x0003ff3d) fshwr2_func_candi_pane_ParamLimits

0xdc14,	// (0x0003ff4e) fshwr2_hwr_syb_pane_ParamLimits

0xdc20,	// (0x0003ff5a) fshwr2_icf_pane_ParamLimits

0xf45d,	// (0x00041797) list_double_graphic_pane_vc_g4_ParamLimits

0xf45d,	// (0x00041797) list_double_graphic_pane_vc_g4

0xddfa,	// (0x00040134) cell_ituss_key_pane_g3_ParamLimits

0xddfa,	// (0x00040134) cell_ituss_key_pane_g3

0xdea2,	// (0x000401dc) cell_ituss_key_t5_ParamLimits

0xdea2,	// (0x000401dc) cell_ituss_key_t5

0x0dd9,	// (0x00033113) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

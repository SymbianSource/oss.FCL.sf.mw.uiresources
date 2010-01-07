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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00008c93 };

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
0x7ea2,	// (0x00010b35) Screen

0x7eb6,	// (0x00010b49) application_window_ParamLimits

0x7eb6,	// (0x00010b49) application_window

0x7ed0,	// (0x00010b63) screen_g1

0x62a0,	// (0x0000ef33) area_bottom_pane_ParamLimits

0x62a0,	// (0x0000ef33) area_bottom_pane

0x6360,	// (0x0000eff3) area_top_pane_ParamLimits

0x6360,	// (0x0000eff3) area_top_pane

0x63fe,	// (0x0000f091) main_pane_ParamLimits

0x63fe,	// (0x0000f091) main_pane

0x7eda,	// (0x00010b6d) misc_graphics

0xa584,	// (0x00013217) battery_pane_ParamLimits

0xa584,	// (0x00013217) battery_pane

0xb318,	// (0x00013fab) bg_status_flat_pane_g8

0xb320,	// (0x00013fb3) bg_status_flat_pane_g9

0xa646,	// (0x000132d9) context_pane_ParamLimits

0xa646,	// (0x000132d9) context_pane

0xa75c,	// (0x000133ef) navi_pane_ParamLimits

0xa75c,	// (0x000133ef) navi_pane

0xa7d9,	// (0x0001346c) signal_pane_ParamLimits

0xa7d9,	// (0x0001346c) signal_pane

0x0008,

0xf8ad,	// (0x00018540) bg_status_flat_pane_g

0xa846,	// (0x000134d9) status_pane_g1_ParamLimits

0xa846,	// (0x000134d9) status_pane_g1

0xa85a,	// (0x000134ed) status_pane_g2_ParamLimits

0xa85a,	// (0x000134ed) status_pane_g2

0xa866,	// (0x000134f9) status_pane_g3_ParamLimits

0xa866,	// (0x000134f9) status_pane_g3

0x0004,

0xf7db,	// (0x0001846e) status_pane_g_ParamLimits

0xf7db,	// (0x0001846e) status_pane_g

0xa898,	// (0x0001352b) title_pane_ParamLimits

0xa898,	// (0x0001352b) title_pane

0xa8d5,	// (0x00013568) uni_indicator_pane_ParamLimits

0xa8d5,	// (0x00013568) uni_indicator_pane

0x9efd,	// (0x00012b90) bg_list_pane_ParamLimits

0x9efd,	// (0x00012b90) bg_list_pane

0x9f1d,	// (0x00012bb0) find_pane

0x9f25,	// (0x00012bb8) listscroll_app_pane_ParamLimits

0x9f25,	// (0x00012bb8) listscroll_app_pane

0x9f31,	// (0x00012bc4) listscroll_form_pane

0x9f39,	// (0x00012bcc) listscroll_gen_pane_ParamLimits

0x9f39,	// (0x00012bcc) listscroll_gen_pane

0x9f31,	// (0x00012bc4) listscroll_set_pane

0x90f9,	// (0x00011d8c) main_idle_act_pane

0x9bd9,	// (0x0001286c) main_idle_trad_pane

0x9bd9,	// (0x0001286c) main_list_empty_pane

0x9f5f,	// (0x00012bf2) main_midp_pane

0x9f6b,	// (0x00012bfe) main_pane_g1_ParamLimits

0x9f6b,	// (0x00012bfe) main_pane_g1

0x9f79,	// (0x00012c0c) popup_ai_message_window_ParamLimits

0x9f79,	// (0x00012c0c) popup_ai_message_window

0xa023,	// (0x00012cb6) popup_fep_china_uni_window_ParamLimits

0xa023,	// (0x00012cb6) popup_fep_china_uni_window

0xa07d,	// (0x00012d10) popup_fep_japan_candidate_window_ParamLimits

0xa07d,	// (0x00012d10) popup_fep_japan_candidate_window

0xa09b,	// (0x00012d2e) popup_fep_japan_predictive_window_ParamLimits

0xa09b,	// (0x00012d2e) popup_fep_japan_predictive_window

0xa0cb,	// (0x00012d5e) popup_find_window

0xa0d8,	// (0x00012d6b) popup_grid_graphic_window_ParamLimits

0xa0d8,	// (0x00012d6b) popup_grid_graphic_window

0xa0fe,	// (0x00012d91) popup_large_graphic_colour_window

0xa124,	// (0x00012db7) popup_menu_window_ParamLimits

0xa124,	// (0x00012db7) popup_menu_window

0xa2de,	// (0x00012f71) popup_note_image_window

0xa2ca,	// (0x00012f5d) popup_note_wait_window_ParamLimits

0xa2ca,	// (0x00012f5d) popup_note_wait_window

0xa2ca,	// (0x00012f5d) popup_note_window_ParamLimits

0xa2ca,	// (0x00012f5d) popup_note_window

0xa334,	// (0x00012fc7) popup_query_code_window_ParamLimits

0xa334,	// (0x00012fc7) popup_query_code_window

0xa348,	// (0x00012fdb) popup_query_data_code_window_ParamLimits

0xa348,	// (0x00012fdb) popup_query_data_code_window

0xa35f,	// (0x00012ff2) popup_query_data_window_ParamLimits

0xa35f,	// (0x00012ff2) popup_query_data_window

0xa377,	// (0x0001300a) popup_query_sat_info_window_ParamLimits

0xa377,	// (0x0001300a) popup_query_sat_info_window

0xa3b0,	// (0x00013043) popup_snote_single_graphic_window_ParamLimits

0xa3b0,	// (0x00013043) popup_snote_single_graphic_window

0xa3b0,	// (0x00013043) popup_snote_single_text_window_ParamLimits

0xa3b0,	// (0x00013043) popup_snote_single_text_window

0xa3c5,	// (0x00013058) popup_sub_window_general

0xa4f3,	// (0x00013186) popup_window_general_ParamLimits

0xa4f3,	// (0x00013186) popup_window_general

0xa508,	// (0x0001319b) power_save_pane

0x6b45,	// (0x0000f7d8) control_pane_g1_ParamLimits

0x6b45,	// (0x0000f7d8) control_pane_g1

0x6b6e,	// (0x0000f801) control_pane_g2_ParamLimits

0x6b6e,	// (0x0000f801) control_pane_g2

0x9e9e,	// (0x00012b31) control_pane_g3_ParamLimits

0x9e9e,	// (0x00012b31) control_pane_g3

0x0007,

0xf7c3,	// (0x00018456) control_pane_g_ParamLimits

0xf7c3,	// (0x00018456) control_pane_g

0x6bb3,	// (0x0000f846) control_pane_t1_ParamLimits

0x6bb3,	// (0x0000f846) control_pane_t1

0x6c05,	// (0x0000f898) control_pane_t2_ParamLimits

0x6c05,	// (0x0000f898) control_pane_t2

0x0002,

0xf7d4,	// (0x00018467) control_pane_t_ParamLimits

0xf7d4,	// (0x00018467) control_pane_t

0x9dbf,	// (0x00012a52) navi_navi_volume_pane_cp1

0x9dc8,	// (0x00012a5b) status_small_icon_pane

0x9dd0,	// (0x00012a63) status_small_pane_g1_ParamLimits

0x9dd0,	// (0x00012a63) status_small_pane_g1

0x9e04,	// (0x00012a97) status_small_pane_g2_ParamLimits

0x9e04,	// (0x00012a97) status_small_pane_g2

0x9e10,	// (0x00012aa3) status_small_pane_g3_ParamLimits

0x9e10,	// (0x00012aa3) status_small_pane_g3

0x9e1c,	// (0x00012aaf) status_small_pane_g4_ParamLimits

0x9e1c,	// (0x00012aaf) status_small_pane_g4

0x9e28,	// (0x00012abb) status_small_pane_g5_ParamLimits

0x9e28,	// (0x00012abb) status_small_pane_g5

0x9e37,	// (0x00012aca) status_small_pane_g6_ParamLimits

0x9e37,	// (0x00012aca) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00018445) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00018445) status_small_pane_g

0x9e67,	// (0x00012afa) status_small_pane_t1

0x9e8a,	// (0x00012b1d) status_small_wait_pane_ParamLimits

0x9e8a,	// (0x00012b1d) status_small_wait_pane

0x95e8,	// (0x0001227b) aid_levels_signal_ParamLimits

0x95e8,	// (0x0001227b) aid_levels_signal

0x95fa,	// (0x0001228d) signal_pane_g1_ParamLimits

0x95fa,	// (0x0001228d) signal_pane_g1

0x960f,	// (0x000122a2) signal_pane_g2_ParamLimits

0x960f,	// (0x000122a2) signal_pane_g2

0x0001,

0xf747,	// (0x000183da) signal_pane_g_ParamLimits

0xf747,	// (0x000183da) signal_pane_g

0x9624,	// (0x000122b7) context_pane_g1

0x7ee4,	// (0x00010b77) title_pane_g1

0x7f1a,	// (0x00010bad) title_pane_t1

0x7f82,	// (0x00010c15) title_pane_t2

0x7fa8,	// (0x00010c3b) title_pane_t3

0x0002,

0xf59b,	// (0x0001822e) title_pane_t

0xa8ed,	// (0x00013580) aid_levels_battery_ParamLimits

0xa8ed,	// (0x00013580) aid_levels_battery

0xa901,	// (0x00013594) battery_pane_g1_ParamLimits

0xa901,	// (0x00013594) battery_pane_g1

0xa917,	// (0x000135aa) battery_pane_g2_ParamLimits

0xa917,	// (0x000135aa) battery_pane_g2

0x0001,

0xf7e6,	// (0x00018479) battery_pane_g_ParamLimits

0xf7e6,	// (0x00018479) battery_pane_g

0xbc48,	// (0x000148db) uni_indicator_pane_g1

0xbc5d,	// (0x000148f0) uni_indicator_pane_g2

0xbc73,	// (0x00014906) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x000185e8) uni_indicator_pane_g

0x9a49,	// (0x000126dc) navi_icon_pane_ParamLimits

0x9a49,	// (0x000126dc) navi_icon_pane

0x9990,	// (0x00012623) navi_midp_pane

0x9a65,	// (0x000126f8) navi_navi_pane

0x9a6f,	// (0x00012702) navi_text_pane_ParamLimits

0x9a6f,	// (0x00012702) navi_text_pane

0x7ed0,	// (0x00010b63) status_small_wait_pane_g1

0x83e5,	// (0x00011078) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x000185e3) status_small_wait_pane_g

0xb96b,	// (0x000145fe) navi_navi_icon_text_pane

0xb973,	// (0x00014606) navi_navi_pane_g1_ParamLimits

0xb973,	// (0x00014606) navi_navi_pane_g1

0xb985,	// (0x00014618) navi_navi_pane_g2_ParamLimits

0xb985,	// (0x00014618) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x000185b1) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x000185b1) navi_navi_pane_g

0xb997,	// (0x0001462a) navi_navi_tabs_pane

0xb9a0,	// (0x00014633) navi_navi_text_pane

0xb96b,	// (0x000145fe) navi_navi_volume_pane

0xb944,	// (0x000145d7) navi_text_pane_t1

0xb935,	// (0x000145c8) navi_icon_pane_g1

0xb888,	// (0x0001451b) navi_navi_text_pane_t1

0x6f9f,	// (0x0000fc32) navi_navi_volume_pane_g1

0x6fa7,	// (0x0000fc3a) volume_small_pane

0xb7ee,	// (0x00014481) navi_navi_icon_text_pane_g1

0xb7f6,	// (0x00014489) navi_navi_icon_text_pane_t1

0x9a65,	// (0x000126f8) navi_tabs_2_long_pane

0x9a65,	// (0x000126f8) navi_tabs_2_pane

0x9a65,	// (0x000126f8) navi_tabs_3_long_pane

0x9a65,	// (0x000126f8) navi_tabs_3_pane

0x9a65,	// (0x000126f8) navi_tabs_4_pane

0x6f7f,	// (0x0000fc12) tabs_2_active_pane_ParamLimits

0x6f7f,	// (0x0000fc12) tabs_2_active_pane

0x6f8f,	// (0x0000fc22) tabs_2_passive_pane_ParamLimits

0x6f8f,	// (0x0000fc22) tabs_2_passive_pane

0x6f4d,	// (0x0000fbe0) tabs_3_active_pane_ParamLimits

0x6f4d,	// (0x0000fbe0) tabs_3_active_pane

0x6f5d,	// (0x0000fbf0) tabs_3_passive_pane_ParamLimits

0x6f5d,	// (0x0000fbf0) tabs_3_passive_pane

0x6f6e,	// (0x0000fc01) tabs_3_passive_pane_cp_ParamLimits

0x6f6e,	// (0x0000fc01) tabs_3_passive_pane_cp

0x6f09,	// (0x0000fb9c) tabs_4_active_pane_ParamLimits

0x6f09,	// (0x0000fb9c) tabs_4_active_pane

0x6f1a,	// (0x0000fbad) tabs_4_passive_pane_ParamLimits

0x6f1a,	// (0x0000fbad) tabs_4_passive_pane

0x6f2b,	// (0x0000fbbe) tabs_4_passive_pane_cp_ParamLimits

0x6f2b,	// (0x0000fbbe) tabs_4_passive_pane_cp

0x6f3c,	// (0x0000fbcf) tabs_4_passive_pane_cp2_ParamLimits

0x6f3c,	// (0x0000fbcf) tabs_4_passive_pane_cp2

0x6ee5,	// (0x0000fb78) tabs_2_long_active_pane_ParamLimits

0x6ee5,	// (0x0000fb78) tabs_2_long_active_pane

0x6ef7,	// (0x0000fb8a) tabs_2_long_passive_pane_ParamLimits

0x6ef7,	// (0x0000fb8a) tabs_2_long_passive_pane

0x6ea0,	// (0x0000fb33) tabs_3_long_active_pane_ParamLimits

0x6ea0,	// (0x0000fb33) tabs_3_long_active_pane

0x6eb9,	// (0x0000fb4c) tabs_3_long_passive_pane_ParamLimits

0x6eb9,	// (0x0000fb4c) tabs_3_long_passive_pane

0x6ecc,	// (0x0000fb5f) tabs_3_long_passive_pane_cp_ParamLimits

0x6ecc,	// (0x0000fb5f) tabs_3_long_passive_pane_cp

0x6e46,	// (0x0000fad9) volume_small_pane_g1

0x6e4f,	// (0x0000fae2) volume_small_pane_g2

0x6e58,	// (0x0000faeb) volume_small_pane_g3

0x6e61,	// (0x0000faf4) volume_small_pane_g4

0x6e6a,	// (0x0000fafd) volume_small_pane_g5

0x6e73,	// (0x0000fb06) volume_small_pane_g6

0x6e7c,	// (0x0000fb0f) volume_small_pane_g7

0x6e85,	// (0x0000fb18) volume_small_pane_g8

0x6e8e,	// (0x0000fb21) volume_small_pane_g9

0x6e97,	// (0x0000fb2a) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x0001857d) volume_small_pane_g

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp2_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp2

0x7fc8,	// (0x00010c5b) tabs_3_active_pane_g1

0x7fd0,	// (0x00010c63) tabs_3_active_pane_t1

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp2_ParamLimits

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp2

0x7fc8,	// (0x00010c5b) tabs_3_passive_pane_g1

0x7fd0,	// (0x00010c63) tabs_3_passive_pane_t1

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp3_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp3

0x7fe2,	// (0x00010c75) tabs_4_active_pane_g1

0x7fea,	// (0x00010c7d) tabs_4_active_pane_t1

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp3_ParamLimits

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp3

0x7fe2,	// (0x00010c75) tabs_4_1_passive_pane_g1

0x7fea,	// (0x00010c7d) tabs_4_1_passive_pane_t1

0x9f5f,	// (0x00012bf2) list_highlight_pane_cp2

0xbef4,	// (0x00014b87) list_set_pane_ParamLimits

0xbef4,	// (0x00014b87) list_set_pane

0xbf96,	// (0x00014c29) main_pane_set_t1_ParamLimits

0xbf96,	// (0x00014c29) main_pane_set_t1

0xbfb6,	// (0x00014c49) main_pane_set_t2_ParamLimits

0xbfb6,	// (0x00014c49) main_pane_set_t2

0xbfca,	// (0x00014c5d) main_pane_set_t3_ParamLimits

0xbfca,	// (0x00014c5d) main_pane_set_t3

0xbfdc,	// (0x00014c6f) main_pane_set_t4_ParamLimits

0xbfdc,	// (0x00014c6f) main_pane_set_t4

0x0003,

0xf9ba,	// (0x0001864d) main_pane_set_t_ParamLimits

0xf9ba,	// (0x0001864d) main_pane_set_t

0xbfee,	// (0x00014c81) setting_code_pane

0xbff8,	// (0x00014c8b) setting_slider_graphic_pane

0xbff8,	// (0x00014c8b) setting_slider_pane

0xbff8,	// (0x00014c8b) setting_text_pane

0xbff8,	// (0x00014c8b) setting_volume_pane

0x662f,	// (0x0000f2c2) volume_set_pane

0x7fba,	// (0x00010c4d) bg_set_opt_pane_cp

0x6637,	// (0x0000f2ca) setting_slider_pane_t1

0x6650,	// (0x0000f2e3) setting_slider_pane_t2

0x6669,	// (0x0000f2fc) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00018235) setting_slider_pane_t

0x6680,	// (0x0000f313) slider_set_pane

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp2

0x7ffc,	// (0x00010c8f) setting_slider_graphic_pane_g1

0x6696,	// (0x0000f329) setting_slider_graphic_pane_t1

0x66a5,	// (0x0000f338) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001823c) setting_slider_graphic_pane_t

0x66b4,	// (0x0000f347) slider_set_pane_cp

0x7eda,	// (0x00010b6d) input_focus_pane_cp1

0xbeb3,	// (0x00014b46) list_set_text_pane

0x7ed0,	// (0x00010b63) setting_text_pane_g1

0x7eda,	// (0x00010b6d) input_focus_pane_cp2

0x7ed0,	// (0x00010b63) setting_code_pane_g1

0x8005,	// (0x00010c98) setting_code_pane_t1

0x8013,	// (0x00010ca6) set_text_pane_t1_ParamLimits

0x8013,	// (0x00010ca6) set_text_pane_t1

0x8ecf,	// (0x00011b62) set_opt_bg_pane_g1

0x8ed7,	// (0x00011b6a) set_opt_bg_pane_g2

0xbe93,	// (0x00014b26) set_opt_bg_pane_g3

0x8ee7,	// (0x00011b7a) set_opt_bg_pane_g4

0x8eef,	// (0x00011b82) set_opt_bg_pane_g5

0x8ef7,	// (0x00011b8a) set_opt_bg_pane_g6

0xbe9b,	// (0x00014b2e) set_opt_bg_pane_g7

0xbea3,	// (0x00014b36) set_opt_bg_pane_g8

0xbeab,	// (0x00014b3e) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x0001863a) set_opt_bg_pane_g

0xbe86,	// (0x00014b19) slider_set_pane_g1

0x7014,	// (0x0000fca7) slider_set_pane_g2

0x0006,

0xf998,	// (0x0001862b) slider_set_pane_g

0x6fb0,	// (0x0000fc43) volume_set_pane_g1

0x6fb8,	// (0x0000fc4b) volume_set_pane_g2

0x6fc0,	// (0x0000fc53) volume_set_pane_g3

0x6fc8,	// (0x0000fc5b) volume_set_pane_g4

0x6fd0,	// (0x0000fc63) volume_set_pane_g5

0x6fd8,	// (0x0000fc6b) volume_set_pane_g6

0x6fe0,	// (0x0000fc73) volume_set_pane_g7

0x6fe8,	// (0x0000fc7b) volume_set_pane_g8

0x6ff0,	// (0x0000fc83) volume_set_pane_g9

0x6ff8,	// (0x0000fc8b) volume_set_pane_g10

0x0009,

0xf970,	// (0x00018603) volume_set_pane_g

0x802d,	// (0x00010cc0) indicator_pane_ParamLimits

0x802d,	// (0x00010cc0) indicator_pane

0x8039,	// (0x00010ccc) main_idle_pane_g2_ParamLimits

0x8039,	// (0x00010ccc) main_idle_pane_g2

0x8061,	// (0x00010cf4) main_pane_idle_g1_ParamLimits

0x8061,	// (0x00010cf4) main_pane_idle_g1

0x806e,	// (0x00010d01) popup_clock_digital_analogue_window_ParamLimits

0x806e,	// (0x00010d01) popup_clock_digital_analogue_window

0x8085,	// (0x00010d18) soft_indicator_pane_ParamLimits

0x8085,	// (0x00010d18) soft_indicator_pane

0x8091,	// (0x00010d24) wallpaper_pane_ParamLimits

0x8091,	// (0x00010d24) wallpaper_pane

0x7ed0,	// (0x00010b63) wallpaper_pane_g1

0x80a5,	// (0x00010d38) indicator_pane_g1_ParamLimits

0x80a5,	// (0x00010d38) indicator_pane_g1

0xc372,	// (0x00015005) navi_navi_icon_text_pane_srt_g1

0x80c0,	// (0x00010d53) soft_indicator_pane_t1

0x80da,	// (0x00010d6d) aid_ps_area_pane

0x80eb,	// (0x00010d7e) aid_ps_clock_pane

0x80f9,	// (0x00010d8c) aid_ps_indicator_pane

0x8105,	// (0x00010d98) indicator_ps_pane_ParamLimits

0x8105,	// (0x00010d98) indicator_ps_pane

0x8114,	// (0x00010da7) power_save_pane_g1_ParamLimits

0x8114,	// (0x00010da7) power_save_pane_g1

0x8120,	// (0x00010db3) power_save_pane_g2_ParamLimits

0x8120,	// (0x00010db3) power_save_pane_g2

0x6254,	// (0x0000eee7) aid_navinavi_width_pane

0x80da,	// (0x00010d6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00018241) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00018241) power_save_pane_g

0x812e,	// (0x00010dc1) power_save_pane_t1_ParamLimits

0x812e,	// (0x00010dc1) power_save_pane_t1

0x80eb,	// (0x00010d7e) aid_ps_clock_pane_ParamLimits

0x80f9,	// (0x00010d8c) aid_ps_indicator_pane_ParamLimits

0x8140,	// (0x00010dd3) power_save_pane_t4_ParamLimits

0x8140,	// (0x00010dd3) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00018246) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00018246) power_save_pane_t

0x816a,	// (0x00010dfd) power_save_t3_ParamLimits

0x816a,	// (0x00010dfd) power_save_t3

0x8155,	// (0x00010de8) power_save_t2_ParamLimits

0x8155,	// (0x00010de8) power_save_t2

0x817f,	// (0x00010e12) indicator_ps_pane_g1

0x8188,	// (0x00010e1b) ai_gene_pane_ParamLimits

0x8188,	// (0x00010e1b) ai_gene_pane

0x8194,	// (0x00010e27) ai_links_pane_ParamLimits

0x8194,	// (0x00010e27) ai_links_pane

0x81a0,	// (0x00010e33) indicator_pane_cp1_ParamLimits

0x81a0,	// (0x00010e33) indicator_pane_cp1

0x81ac,	// (0x00010e3f) main_pane_idle_g1_cp_ParamLimits

0x81ac,	// (0x00010e3f) main_pane_idle_g1_cp

0x81b8,	// (0x00010e4b) popup_ai_links_title_window

0x81c1,	// (0x00010e54) soft_indicator_pane_cp1_ParamLimits

0x81c1,	// (0x00010e54) soft_indicator_pane_cp1

0xbc36,	// (0x000148c9) ai_links_pane_g1

0xbc3f,	// (0x000148d2) grid_ai_links_pane

0xbc19,	// (0x000148ac) ai_gene_pane_1

0xbc24,	// (0x000148b7) ai_gene_pane_2

0xbc2d,	// (0x000148c0) list_highlight_pane_cp4

0xbbfd,	// (0x00014890) cell_ai_link_pane_ParamLimits

0xbbfd,	// (0x00014890) cell_ai_link_pane

0xbbf5,	// (0x00014888) cell_ai_link_pane_g1

0x83e5,	// (0x00011078) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x000185de) cell_ai_link_pane_g

0x7eda,	// (0x00010b6d) grid_highlight_cp2

0x7eda,	// (0x00010b6d) bg_popup_sub_pane_cp1

0x81db,	// (0x00010e6e) popup_ai_links_title_window_t1

0xbb43,	// (0x000147d6) ai_gene_pane_1_g1_ParamLimits

0xbb43,	// (0x000147d6) ai_gene_pane_1_g1

0xbb4f,	// (0x000147e2) ai_gene_pane_1_g2_ParamLimits

0xbb4f,	// (0x000147e2) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x000185d4) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x000185d4) ai_gene_pane_1_g

0xbb5c,	// (0x000147ef) ai_gene_pane_1_t1_ParamLimits

0xbb5c,	// (0x000147ef) ai_gene_pane_1_t1

0xbb90,	// (0x00014823) grid_ai_soft_ind_pane

0xbb2e,	// (0x000147c1) ai_gene_pane_2_t1_ParamLimits

0xbb2e,	// (0x000147c1) ai_gene_pane_2_t1

0x81ea,	// (0x00010e7d) main_pane_empty_t1_ParamLimits

0x81ea,	// (0x00010e7d) main_pane_empty_t1

0x8202,	// (0x00010e95) main_pane_empty_t2_ParamLimits

0x8202,	// (0x00010e95) main_pane_empty_t2

0x8217,	// (0x00010eaa) main_pane_empty_t3_ParamLimits

0x8217,	// (0x00010eaa) main_pane_empty_t3

0x8229,	// (0x00010ebc) main_pane_empty_t4_ParamLimits

0x8229,	// (0x00010ebc) main_pane_empty_t4

0x823b,	// (0x00010ece) main_pane_empty_t5_ParamLimits

0x823b,	// (0x00010ece) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001824b) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001824b) main_pane_empty_t

0x8fc8,	// (0x00011c5b) bg_popup_window_pane_ParamLimits

0x8fc8,	// (0x00011c5b) bg_popup_window_pane

0xb896,	// (0x00014529) find_popup_pane_cp2_ParamLimits

0xb896,	// (0x00014529) find_popup_pane_cp2

0xb8a2,	// (0x00014535) heading_pane_ParamLimits

0xb8a2,	// (0x00014535) heading_pane

0x7eda,	// (0x00010b6d) bg_popup_sub_pane

0xb810,	// (0x000144a3) bg_popup_window_pane_g1_ParamLimits

0xb810,	// (0x000144a3) bg_popup_window_pane_g1

0xb81c,	// (0x000144af) bg_popup_window_pane_g2_ParamLimits

0xb81c,	// (0x000144af) bg_popup_window_pane_g2

0xb828,	// (0x000144bb) bg_popup_window_pane_g3_ParamLimits

0xb828,	// (0x000144bb) bg_popup_window_pane_g3

0xb834,	// (0x000144c7) bg_popup_window_pane_g4_ParamLimits

0xb834,	// (0x000144c7) bg_popup_window_pane_g4

0xb840,	// (0x000144d3) bg_popup_window_pane_g5_ParamLimits

0xb840,	// (0x000144d3) bg_popup_window_pane_g5

0xb84c,	// (0x000144df) bg_popup_window_pane_g6_ParamLimits

0xb84c,	// (0x000144df) bg_popup_window_pane_g6

0xb858,	// (0x000144eb) bg_popup_window_pane_g7_ParamLimits

0xb858,	// (0x000144eb) bg_popup_window_pane_g7

0xb864,	// (0x000144f7) bg_popup_window_pane_g8_ParamLimits

0xb864,	// (0x000144f7) bg_popup_window_pane_g8

0xb870,	// (0x00014503) bg_popup_window_pane_g9_ParamLimits

0xb870,	// (0x00014503) bg_popup_window_pane_g9

0xb87c,	// (0x0001450f) bg_popup_window_pane_g10_ParamLimits

0xb87c,	// (0x0001450f) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x0001859c) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x0001859c) bg_popup_window_pane_g

0xb7a5,	// (0x00014438) bg_popup_heading_pane_ParamLimits

0xb7a5,	// (0x00014438) bg_popup_heading_pane

0x709c,	// (0x0000fd2f) tabs_4_passive_pane_cp_srt_ParamLimits

0x709c,	// (0x0000fd2f) tabs_4_passive_pane_cp_srt

0x70ae,	// (0x0000fd41) tabs_4_passive_pane_srt_ParamLimits

0xb7b9,	// (0x0001444c) heading_pane_g2

0x70ae,	// (0x0000fd41) tabs_4_passive_pane_srt

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp3_srt

0xb7c1,	// (0x00014454) heading_pane_t1_ParamLimits

0xb7c1,	// (0x00014454) heading_pane_t1

0xb7d8,	// (0x0001446b) heading_pane_t2_ParamLimits

0xb7d8,	// (0x0001446b) heading_pane_t2

0x0001,

0xf904,	// (0x00018597) heading_pane_t_ParamLimits

0xf904,	// (0x00018597) heading_pane_t

0xb2e0,	// (0x00013f73) bg_popup_heading_pane_g1

0xb38f,	// (0x00014022) bg_popup_heading_pane_g2

0xb399,	// (0x0001402c) bg_popup_heading_pane_g3

0xb3a3,	// (0x00014036) bg_popup_heading_pane_g4

0xb3ad,	// (0x00014040) bg_popup_heading_pane_g5

0xb3b7,	// (0x0001404a) bg_popup_heading_pane_g6

0xb3bf,	// (0x00014052) bg_popup_heading_pane_g7

0xb3c7,	// (0x0001405a) bg_popup_heading_pane_g8

0xb3d1,	// (0x00014064) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00018553) bg_popup_heading_pane_g

0xaa11,	// (0x000136a4) bg_popup_sub_pane_g1

0xaa21,	// (0x000136b4) bg_popup_sub_pane_g2

0xaa19,	// (0x000136ac) bg_popup_sub_pane_g3

0xaa31,	// (0x000136c4) bg_popup_sub_pane_g4

0xaa29,	// (0x000136bc) bg_popup_sub_pane_g5

0xaa39,	// (0x000136cc) bg_popup_sub_pane_g6

0xaa41,	// (0x000136d4) bg_popup_sub_pane_g7

0xaa51,	// (0x000136e4) bg_popup_sub_pane_g8

0xaa49,	// (0x000136dc) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x0001852d) bg_popup_sub_pane_g

0x824f,	// (0x00010ee2) bg_popup_window_pane_cp5_ParamLimits

0x824f,	// (0x00010ee2) bg_popup_window_pane_cp5

0x826b,	// (0x00010efe) popup_note_window_g1_ParamLimits

0x826b,	// (0x00010efe) popup_note_window_g1

0x8277,	// (0x00010f0a) popup_note_window_t1_ParamLimits

0x8277,	// (0x00010f0a) popup_note_window_t1

0x8289,	// (0x00010f1c) popup_note_window_t2_ParamLimits

0x8289,	// (0x00010f1c) popup_note_window_t2

0x829b,	// (0x00010f2e) popup_note_window_t3_ParamLimits

0x829b,	// (0x00010f2e) popup_note_window_t3

0x82ad,	// (0x00010f40) popup_note_window_t4_ParamLimits

0x82ad,	// (0x00010f40) popup_note_window_t4

0x82d5,	// (0x00010f68) popup_note_window_t5_ParamLimits

0x82d5,	// (0x00010f68) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00018256) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00018256) popup_note_window_t

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp6_ParamLimits

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp6

0xb254,	// (0x00013ee7) popup_note_image_window_g1_ParamLimits

0xb254,	// (0x00013ee7) popup_note_image_window_g1

0xb260,	// (0x00013ef3) popup_note_image_window_g2_ParamLimits

0xb260,	// (0x00013ef3) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x00018521) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x00018521) popup_note_image_window_g

0xb279,	// (0x00013f0c) popup_note_image_window_t1_ParamLimits

0xb279,	// (0x00013f0c) popup_note_image_window_t1

0xb292,	// (0x00013f25) popup_note_image_window_t2_ParamLimits

0xb292,	// (0x00013f25) popup_note_image_window_t2

0xb2ab,	// (0x00013f3e) popup_note_image_window_t3_ParamLimits

0xb2ab,	// (0x00013f3e) popup_note_image_window_t3

0x0002,

0xf893,	// (0x00018526) popup_note_image_window_t_ParamLimits

0xf893,	// (0x00018526) popup_note_image_window_t

0xb115,	// (0x00013da8) bg_popup_window_pane_cp7_ParamLimits

0xb115,	// (0x00013da8) bg_popup_window_pane_cp7

0xb145,	// (0x00013dd8) popup_note_wait_window_g1_ParamLimits

0xb145,	// (0x00013dd8) popup_note_wait_window_g1

0xb151,	// (0x00013de4) popup_note_wait_window_g2_ParamLimits

0xb151,	// (0x00013de4) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x0001850f) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x0001850f) popup_note_wait_window_g

0xb169,	// (0x00013dfc) popup_note_wait_window_t1_ParamLimits

0xb169,	// (0x00013dfc) popup_note_wait_window_t1

0xb190,	// (0x00013e23) popup_note_wait_window_t2_ParamLimits

0xb190,	// (0x00013e23) popup_note_wait_window_t2

0xb1ad,	// (0x00013e40) popup_note_wait_window_t3_ParamLimits

0xb1ad,	// (0x00013e40) popup_note_wait_window_t3

0xb1c0,	// (0x00013e53) popup_note_wait_window_t4_ParamLimits

0xb1c0,	// (0x00013e53) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00018516) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00018516) popup_note_wait_window_t

0xb1e5,	// (0x00013e78) wait_bar_pane_ParamLimits

0xb1e5,	// (0x00013e78) wait_bar_pane

0x7eda,	// (0x00010b6d) wait_anim_pane

0x7eda,	// (0x00010b6d) wait_border_pane

0x7ed0,	// (0x00010b63) wait_anim_pane_g1

0x7ed0,	// (0x00010b63) wait_anim_pane_g2

0x0001,

0xf742,	// (0x000183d5) wait_anim_pane_g

0xb0b9,	// (0x00013d4c) wait_border_pane_g1

0xb0c4,	// (0x00013d57) wait_border_pane_g2

0xb0cd,	// (0x00013d60) wait_border_pane_g3

0x0002,

0xf875,	// (0x00018508) wait_border_pane_g

0xb01b,	// (0x00013cae) bg_popup_window_pane_cp16_ParamLimits

0xb01b,	// (0x00013cae) bg_popup_window_pane_cp16

0xb029,	// (0x00013cbc) indicator_popup_pane_cp4_ParamLimits

0xb029,	// (0x00013cbc) indicator_popup_pane_cp4

0xb03d,	// (0x00013cd0) popup_query_data_window_t1_ParamLimits

0xb03d,	// (0x00013cd0) popup_query_data_window_t1

0xb04f,	// (0x00013ce2) popup_query_data_window_t2_ParamLimits

0xb04f,	// (0x00013ce2) popup_query_data_window_t2

0xb068,	// (0x00013cfb) popup_query_data_window_t3_ParamLimits

0xb068,	// (0x00013cfb) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00018501) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00018501) popup_query_data_window_t

0xb082,	// (0x00013d15) query_popup_data_pane_ParamLimits

0xb082,	// (0x00013d15) query_popup_data_pane

0xb096,	// (0x00013d29) query_popup_data_pane_cp1_ParamLimits

0xb096,	// (0x00013d29) query_popup_data_pane_cp1

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp10_ParamLimits

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp10

0xaf7e,	// (0x00013c11) indicator_popup_pane_ParamLimits

0xaf7e,	// (0x00013c11) indicator_popup_pane

0x8350,	// (0x00010fe3) popup_query_code_window_t1_ParamLimits

0x8350,	// (0x00010fe3) popup_query_code_window_t1

0xaf96,	// (0x00013c29) popup_query_code_window_t2_ParamLimits

0xaf96,	// (0x00013c29) popup_query_code_window_t2

0xafd4,	// (0x00013c67) popup_query_code_window_t3_ParamLimits

0xafd4,	// (0x00013c67) popup_query_code_window_t3

0x0002,

0xf867,	// (0x000184fa) popup_query_code_window_t_ParamLimits

0xf867,	// (0x000184fa) popup_query_code_window_t

0xb003,	// (0x00013c96) query_popup_pane_ParamLimits

0xb003,	// (0x00013c96) query_popup_pane

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp15_ParamLimits

0x82f9,	// (0x00010f8c) bg_popup_window_pane_cp15

0x8317,	// (0x00010faa) indicator_popup_pane_cp1_ParamLimits

0x8317,	// (0x00010faa) indicator_popup_pane_cp1

0x832a,	// (0x00010fbd) indicator_popup_pane_cp2_ParamLimits

0x832a,	// (0x00010fbd) indicator_popup_pane_cp2

0x833d,	// (0x00010fd0) popup_query_data_code_window_g1_ParamLimits

0x833d,	// (0x00010fd0) popup_query_data_code_window_g1

0x8350,	// (0x00010fe3) popup_query_data_code_window_t1_ParamLimits

0x8350,	// (0x00010fe3) popup_query_data_code_window_t1

0x8362,	// (0x00010ff5) popup_query_data_code_window_t2_ParamLimits

0x8362,	// (0x00010ff5) popup_query_data_code_window_t2

0x8374,	// (0x00011007) popup_query_data_code_window_t3_ParamLimits

0x8374,	// (0x00011007) popup_query_data_code_window_t3

0x838a,	// (0x0001101d) popup_query_data_code_window_t4_ParamLimits

0x838a,	// (0x0001101d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00018261) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00018261) popup_query_data_code_window_t

0x6d59,	// (0x0000f9ec) list_single_midp_graphic_pane_g3

0x83a2,	// (0x00011035) query_popup_data_pane_cp2_ParamLimits

0x83b5,	// (0x00011048) query_popup_pane_cp2_ParamLimits

0x83b5,	// (0x00011048) query_popup_pane_cp2

0x7eda,	// (0x00010b6d) bg_popup_window_pane_cp11

0xaf52,	// (0x00013be5) heading_pane_cp5

0x849d,	// (0x00011130) listscroll_popup_info_pane

0x7eda,	// (0x00010b6d) input_focus_pane_cp3

0x83c8,	// (0x0001105b) query_popup_pane_t1

0x83d6,	// (0x00011069) list_popup_info_pane_ParamLimits

0x83d6,	// (0x00011069) list_popup_info_pane

0x83e5,	// (0x00011078) listscroll_popup_info_pane_g1

0x83ed,	// (0x00011080) scroll_pane_cp7

0x83f7,	// (0x0001108a) popup_info_list_pane_t1_ParamLimits

0x83f7,	// (0x0001108a) popup_info_list_pane_t1

0x8411,	// (0x000110a4) popup_info_list_pane_t2_ParamLimits

0x8411,	// (0x000110a4) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001826a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001826a) popup_info_list_pane_t

0x7eda,	// (0x00010b6d) bg_popup_window_pane_cp12

0xc38c,	// (0x0001501f) find_popup_pane

0x7fba,	// (0x00010c4d) bg_popup_window_pane_cp3

0x842b,	// (0x000110be) heading_pane_cp3

0x8437,	// (0x000110ca) listscroll_popup_graphic_pane

0x7eda,	// (0x00010b6d) bg_popup_window_pane_cp4

0x8493,	// (0x00011126) heading_pane_cp4

0x849d,	// (0x00011130) listscroll_popup_colour_pane

0x84a5,	// (0x00011138) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a5,	// (0x00011138) cell_large_graphic_colour_none_popup_pane

0x84b9,	// (0x0001114c) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b9,	// (0x0001114c) grid_large_graphic_colour_popup_pane

0x84dd,	// (0x00011170) listscroll_popup_colour_pane_g1_ParamLimits

0x84dd,	// (0x00011170) listscroll_popup_colour_pane_g1

0x84f4,	// (0x00011187) listscroll_popup_colour_pane_g2_ParamLimits

0x84f4,	// (0x00011187) listscroll_popup_colour_pane_g2

0x850b,	// (0x0001119e) listscroll_popup_colour_pane_g3_ParamLimits

0x850b,	// (0x0001119e) listscroll_popup_colour_pane_g3

0x851b,	// (0x000111ae) listscroll_popup_colour_pane_g4_ParamLimits

0x851b,	// (0x000111ae) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001826f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001826f) listscroll_popup_colour_pane_g

0x852a,	// (0x000111bd) scroll_pane_cp6_ParamLimits

0x852a,	// (0x000111bd) scroll_pane_cp6

0x853c,	// (0x000111cf) cell_large_graphic_colour_popup_pane_ParamLimits

0x853c,	// (0x000111cf) cell_large_graphic_colour_popup_pane

0x855b,	// (0x000111ee) cell_large_graphic_colour_none_popup_pane_t1

0x7eda,	// (0x00010b6d) grid_highlight_pane_cp5

0x856a,	// (0x000111fd) cell_large_graphic_colour_popup_pane_g1

0x8572,	// (0x00011205) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00018278) cell_large_graphic_colour_popup_pane_g

0x857a,	// (0x0001120d) cell_large_graphic_colour_popup_pane_g2_copy1

0x8583,	// (0x00011216) grid_highlight_pane_cp4

0x858b,	// (0x0001121e) bg_popup_window_pane_cp8_ParamLimits

0x858b,	// (0x0001121e) bg_popup_window_pane_cp8

0x85a6,	// (0x00011239) popup_snote_single_text_window_g1_ParamLimits

0x85a6,	// (0x00011239) popup_snote_single_text_window_g1

0x85b8,	// (0x0001124b) popup_snote_single_text_window_t1_ParamLimits

0x85b8,	// (0x0001124b) popup_snote_single_text_window_t1

0x85cb,	// (0x0001125e) popup_snote_single_text_window_t2_ParamLimits

0x85cb,	// (0x0001125e) popup_snote_single_text_window_t2

0x85de,	// (0x00011271) popup_snote_single_text_window_t3_ParamLimits

0x85de,	// (0x00011271) popup_snote_single_text_window_t3

0x8617,	// (0x000112aa) popup_snote_single_text_window_t4_ParamLimits

0x8617,	// (0x000112aa) popup_snote_single_text_window_t4

0x864b,	// (0x000112de) popup_snote_single_text_window_t5_ParamLimits

0x864b,	// (0x000112de) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001827d) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001827d) popup_snote_single_text_window_t

0x867a,	// (0x0001130d) bg_popup_window_pane_cp9_ParamLimits

0x867a,	// (0x0001130d) bg_popup_window_pane_cp9

0x85a6,	// (0x00011239) popup_snote_single_graphic_window_g1_ParamLimits

0x85a6,	// (0x00011239) popup_snote_single_graphic_window_g1

0x8688,	// (0x0001131b) popup_snote_single_graphic_window_g2_ParamLimits

0x8688,	// (0x0001131b) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00018288) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00018288) popup_snote_single_graphic_window_g

0x8694,	// (0x00011327) popup_snote_single_graphic_window_t1_ParamLimits

0x8694,	// (0x00011327) popup_snote_single_graphic_window_t1

0x86a7,	// (0x0001133a) popup_snote_single_graphic_window_t2_ParamLimits

0x86a7,	// (0x0001133a) popup_snote_single_graphic_window_t2

0x86ba,	// (0x0001134d) popup_snote_single_graphic_window_t3_ParamLimits

0x86ba,	// (0x0001134d) popup_snote_single_graphic_window_t3

0x86f3,	// (0x00011386) popup_snote_single_graphic_window_t4_ParamLimits

0x86f3,	// (0x00011386) popup_snote_single_graphic_window_t4

0x8727,	// (0x000113ba) popup_snote_single_graphic_window_t5_ParamLimits

0x8727,	// (0x000113ba) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001828d) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001828d) popup_snote_single_graphic_window_t

0xc2cc,	// (0x00014f5f) grid_graphic_popup_pane_ParamLimits

0xc2cc,	// (0x00014f5f) grid_graphic_popup_pane

0xc2f8,	// (0x00014f8b) listscroll_popup_graphic_pane_g1_ParamLimits

0xc2f8,	// (0x00014f8b) listscroll_popup_graphic_pane_g1

0xc30c,	// (0x00014f9f) listscroll_popup_graphic_pane_g2_ParamLimits

0xc30c,	// (0x00014f9f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00018677) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00018677) listscroll_popup_graphic_pane_g

0xc320,	// (0x00014fb3) scroll_pane_cp5

0xc277,	// (0x00014f0a) cell_graphic_popup_pane_ParamLimits

0xc277,	// (0x00014f0a) cell_graphic_popup_pane

0xc258,	// (0x00014eeb) cell_graphic_popup_pane_g1

0xc260,	// (0x00014ef3) cell_graphic_popup_pane_g2

0x857a,	// (0x0001120d) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00018670) cell_graphic_popup_pane_g

0xc269,	// (0x00014efc) cell_graphic_popup_pane_t2

0x8583,	// (0x00011216) grid_highlight_pane_cp3

0x8768,	// (0x000113fb) list_gen_pane_ParamLimits

0x8768,	// (0x000113fb) list_gen_pane

0x879a,	// (0x0001142d) scroll_pane

0xc1ba,	// (0x00014e4d) bg_list_pane_g1_ParamLimits

0xc1ba,	// (0x00014e4d) bg_list_pane_g1

0xc1d5,	// (0x00014e68) bg_list_pane_g2_ParamLimits

0xc1d5,	// (0x00014e68) bg_list_pane_g2

0xc1e8,	// (0x00014e7b) bg_list_pane_g3_ParamLimits

0xc1e8,	// (0x00014e7b) bg_list_pane_g3

0xc1fa,	// (0x00014e8d) bg_list_pane_g4_ParamLimits

0xc1fa,	// (0x00014e8d) bg_list_pane_g4

0xc20c,	// (0x00014e9f) bg_list_pane_g5_ParamLimits

0xc20c,	// (0x00014e9f) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x00018665) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x00018665) bg_list_pane_g

0xc0af,	// (0x00014d42) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double2_graphic_large_graphic_pane

0xc0af,	// (0x00014d42) list_double2_graphic_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double2_graphic_pane

0xc0af,	// (0x00014d42) list_double2_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double2_large_graphic_pane

0xc0af,	// (0x00014d42) list_double2_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double2_pane

0xc0af,	// (0x00014d42) list_double_graphic_heading_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_graphic_heading_pane

0xc0af,	// (0x00014d42) list_double_graphic_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_graphic_pane

0xc0af,	// (0x00014d42) list_double_heading_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_heading_pane

0xc0af,	// (0x00014d42) list_double_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_large_graphic_pane

0xc0af,	// (0x00014d42) list_double_number_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_number_pane

0xc0af,	// (0x00014d42) list_double_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_pane

0xc0af,	// (0x00014d42) list_double_time_pane_ParamLimits

0xc0af,	// (0x00014d42) list_double_time_pane

0xc0af,	// (0x00014d42) list_setting_number_pane_ParamLimits

0xc0af,	// (0x00014d42) list_setting_number_pane

0xc0af,	// (0x00014d42) list_setting_pane_ParamLimits

0xc0af,	// (0x00014d42) list_setting_pane

0xc106,	// (0x00014d99) list_single_2graphic_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_2graphic_pane

0xc106,	// (0x00014d99) list_single_graphic_heading_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_graphic_heading_pane

0xc106,	// (0x00014d99) list_single_graphic_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_graphic_pane

0xc106,	// (0x00014d99) list_single_heading_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_heading_pane

0xc194,	// (0x00014e27) list_single_large_graphic_pane_ParamLimits

0xc194,	// (0x00014e27) list_single_large_graphic_pane

0xc106,	// (0x00014d99) list_single_number_heading_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_number_heading_pane

0xc106,	// (0x00014d99) list_single_number_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_number_pane

0xc106,	// (0x00014d99) list_single_pane_ParamLimits

0xc106,	// (0x00014d99) list_single_pane

0x7eda,	// (0x00010b6d) list_highlight_pane_cp1

0x87da,	// (0x0001146d) list_single_pane_g1_ParamLimits

0x87da,	// (0x0001146d) list_single_pane_g1

0x87e6,	// (0x00011479) list_single_pane_g2_ParamLimits

0x87e6,	// (0x00011479) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001829f) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001829f) list_single_pane_g

0xc068,	// (0x00014cfb) list_single_pane_t1_ParamLimits

0xc068,	// (0x00014cfb) list_single_pane_t1

0x87da,	// (0x0001146d) list_single_number_pane_g1_ParamLimits

0x87da,	// (0x0001146d) list_single_number_pane_g1

0x87e6,	// (0x00011479) list_single_number_pane_g2_ParamLimits

0x87e6,	// (0x00011479) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001829f) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001829f) list_single_number_pane_g

0xbe02,	// (0x00014a95) list_single_number_pane_t1_ParamLimits

0xbe02,	// (0x00014a95) list_single_number_pane_t1

0xbe18,	// (0x00014aab) list_single_number_pane_t2_ParamLimits

0xbe18,	// (0x00014aab) list_single_number_pane_t2

0x0001,

0xf993,	// (0x00018626) list_single_number_pane_t_ParamLimits

0xf993,	// (0x00018626) list_single_number_pane_t

0x87ce,	// (0x00011461) list_single_graphic_pane_g1_ParamLimits

0x87ce,	// (0x00011461) list_single_graphic_pane_g1

0x87da,	// (0x0001146d) list_single_graphic_pane_g2_ParamLimits

0x87da,	// (0x0001146d) list_single_graphic_pane_g2

0x87e6,	// (0x00011479) list_single_graphic_pane_g3_ParamLimits

0x87e6,	// (0x00011479) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00018298) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00018298) list_single_graphic_pane_g

0x87f2,	// (0x00011485) list_single_graphic_pane_t1_ParamLimits

0x87f2,	// (0x00011485) list_single_graphic_pane_t1

0x87da,	// (0x0001146d) list_single_heading_pane_g1_ParamLimits

0x87da,	// (0x0001146d) list_single_heading_pane_g1

0x87e6,	// (0x00011479) list_single_heading_pane_g2_ParamLimits

0x87e6,	// (0x00011479) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001829f) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001829f) list_single_heading_pane_g

0x8808,	// (0x0001149b) list_single_heading_pane_t1_ParamLimits

0x8808,	// (0x0001149b) list_single_heading_pane_t1

0x881e,	// (0x000114b1) list_single_heading_pane_t2_ParamLimits

0x881e,	// (0x000114b1) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000182a4) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000182a4) list_single_heading_pane_t

0x87da,	// (0x0001146d) list_single_number_heading_pane_g1_ParamLimits

0x87da,	// (0x0001146d) list_single_number_heading_pane_g1

0x87e6,	// (0x00011479) list_single_number_heading_pane_g2_ParamLimits

0x87e6,	// (0x00011479) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001829f) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001829f) list_single_number_heading_pane_g

0x8808,	// (0x0001149b) list_single_number_heading_pane_t1_ParamLimits

0x8808,	// (0x0001149b) list_single_number_heading_pane_t1

0x8830,	// (0x000114c3) list_single_number_heading_pane_t2_ParamLimits

0x8830,	// (0x000114c3) list_single_number_heading_pane_t2

0x8842,	// (0x000114d5) list_single_number_heading_pane_t3_ParamLimits

0x8842,	// (0x000114d5) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x000182a9) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x000182a9) list_single_number_heading_pane_t

0x8854,	// (0x000114e7) list_single_graphic_heading_pane_g1_ParamLimits

0x8854,	// (0x000114e7) list_single_graphic_heading_pane_g1

0x8860,	// (0x000114f3) list_single_graphic_heading_pane_g4_ParamLimits

0x8860,	// (0x000114f3) list_single_graphic_heading_pane_g4

0x87e6,	// (0x00011479) list_single_graphic_heading_pane_g5_ParamLimits

0x87e6,	// (0x00011479) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x000182b0) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x000182b0) list_single_graphic_heading_pane_g

0x8808,	// (0x0001149b) list_single_graphic_heading_pane_t1_ParamLimits

0x8808,	// (0x0001149b) list_single_graphic_heading_pane_t1

0x8871,	// (0x00011504) list_single_graphic_heading_pane_t2_ParamLimits

0x8871,	// (0x00011504) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x000182b7) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x000182b7) list_single_graphic_heading_pane_t

0x8883,	// (0x00011516) list_single_large_graphic_pane_g1_ParamLimits

0x8883,	// (0x00011516) list_single_large_graphic_pane_g1

0x888f,	// (0x00011522) list_single_large_graphic_pane_g2_ParamLimits

0x888f,	// (0x00011522) list_single_large_graphic_pane_g2

0x889b,	// (0x0001152e) list_single_large_graphic_pane_g3_ParamLimits

0x889b,	// (0x0001152e) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x000182bc) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x000182bc) list_single_large_graphic_pane_g

0xb0c4,	// (0x00013d57) wait_border_pane_g2_copy1

0x88a7,	// (0x0001153a) list_single_large_graphic_pane_g4_cp2

0x88af,	// (0x00011542) list_single_large_graphic_pane_t1_ParamLimits

0x88af,	// (0x00011542) list_single_large_graphic_pane_t1

0x88c5,	// (0x00011558) list_double_pane_g1_ParamLimits

0x88c5,	// (0x00011558) list_double_pane_g1

0x88d1,	// (0x00011564) list_double_pane_g2_ParamLimits

0x88d1,	// (0x00011564) list_double_pane_g2

0x0001,

0xf630,	// (0x000182c3) list_double_pane_g_ParamLimits

0xf630,	// (0x000182c3) list_double_pane_g

0x88dd,	// (0x00011570) list_double_pane_t1_ParamLimits

0x88dd,	// (0x00011570) list_double_pane_t1

0x88f3,	// (0x00011586) list_double_pane_t2_ParamLimits

0x88f3,	// (0x00011586) list_double_pane_t2

0x0001,

0xf635,	// (0x000182c8) list_double_pane_t_ParamLimits

0xf635,	// (0x000182c8) list_double_pane_t

0x8905,	// (0x00011598) list_double2_pane_g1_ParamLimits

0x8905,	// (0x00011598) list_double2_pane_g1

0x8916,	// (0x000115a9) list_double2_pane_g2_ParamLimits

0x8916,	// (0x000115a9) list_double2_pane_g2

0x0001,

0xf63a,	// (0x000182cd) list_double2_pane_g_ParamLimits

0xf63a,	// (0x000182cd) list_double2_pane_g

0x8922,	// (0x000115b5) list_double2_pane_t1_ParamLimits

0x8922,	// (0x000115b5) list_double2_pane_t1

0x8938,	// (0x000115cb) list_double2_pane_t2_ParamLimits

0x8938,	// (0x000115cb) list_double2_pane_t2

0x0001,

0xf63f,	// (0x000182d2) list_double2_pane_t_ParamLimits

0xf63f,	// (0x000182d2) list_double2_pane_t

0x88c5,	// (0x00011558) list_double_number_pane_g1_ParamLimits

0x88c5,	// (0x00011558) list_double_number_pane_g1

0x88d1,	// (0x00011564) list_double_number_pane_g2_ParamLimits

0x88d1,	// (0x00011564) list_double_number_pane_g2

0x0001,

0xf630,	// (0x000182c3) list_double_number_pane_g_ParamLimits

0xf630,	// (0x000182c3) list_double_number_pane_g

0x894a,	// (0x000115dd) list_double_number_pane_t1_ParamLimits

0x894a,	// (0x000115dd) list_double_number_pane_t1

0x895c,	// (0x000115ef) list_double_number_pane_t2_ParamLimits

0x895c,	// (0x000115ef) list_double_number_pane_t2

0x8972,	// (0x00011605) list_double_number_pane_t3_ParamLimits

0x8972,	// (0x00011605) list_double_number_pane_t3

0x0002,

0xf644,	// (0x000182d7) list_double_number_pane_t_ParamLimits

0xf644,	// (0x000182d7) list_double_number_pane_t

0x8984,	// (0x00011617) list_double_graphic_pane_g1_ParamLimits

0x8984,	// (0x00011617) list_double_graphic_pane_g1

0x8990,	// (0x00011623) list_double_graphic_pane_g2_ParamLimits

0x8990,	// (0x00011623) list_double_graphic_pane_g2

0x899f,	// (0x00011632) list_double_graphic_pane_g3_ParamLimits

0x899f,	// (0x00011632) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x000182de) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x000182de) list_double_graphic_pane_g

0x89b7,	// (0x0001164a) list_double_graphic_pane_t1_ParamLimits

0x89b7,	// (0x0001164a) list_double_graphic_pane_t1

0x89cd,	// (0x00011660) list_double_graphic_pane_t2_ParamLimits

0x89cd,	// (0x00011660) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x000182e7) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x000182e7) list_double_graphic_pane_t

0x89df,	// (0x00011672) list_double2_graphic_pane_g1_ParamLimits

0x89df,	// (0x00011672) list_double2_graphic_pane_g1

0x89eb,	// (0x0001167e) list_double2_graphic_pane_g2_ParamLimits

0x89eb,	// (0x0001167e) list_double2_graphic_pane_g2

0x8916,	// (0x000115a9) list_double2_graphic_pane_g3_ParamLimits

0x8916,	// (0x000115a9) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x000182ec) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x000182ec) list_double2_graphic_pane_g

0x89f7,	// (0x0001168a) list_double2_graphic_pane_t1_ParamLimits

0x89f7,	// (0x0001168a) list_double2_graphic_pane_t1

0x8a0d,	// (0x000116a0) list_double2_graphic_pane_t2_ParamLimits

0x8a0d,	// (0x000116a0) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x000182f3) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x000182f3) list_double2_graphic_pane_t

0x8a1f,	// (0x000116b2) list_double_large_graphic_pane_g1_ParamLimits

0x8a1f,	// (0x000116b2) list_double_large_graphic_pane_g1

0x8a4a,	// (0x000116dd) list_double_large_graphic_pane_g2_ParamLimits

0x8a4a,	// (0x000116dd) list_double_large_graphic_pane_g2

0x88d1,	// (0x00011564) list_double_large_graphic_pane_g3_ParamLimits

0x88d1,	// (0x00011564) list_double_large_graphic_pane_g3

0x8a5b,	// (0x000116ee) list_double_large_graphic_pane_g4_ParamLimits

0x8a5b,	// (0x000116ee) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000182f8) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000182f8) list_double_large_graphic_pane_g

0x8a82,	// (0x00011715) list_double_large_graphic_pane_t1_ParamLimits

0x8a82,	// (0x00011715) list_double_large_graphic_pane_t1

0x8a9b,	// (0x0001172e) list_double_large_graphic_pane_t2_ParamLimits

0x8a9b,	// (0x0001172e) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00018303) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00018303) list_double_large_graphic_pane_t

0x8aad,	// (0x00011740) list_double2_large_graphic_pane_g1_ParamLimits

0x8aad,	// (0x00011740) list_double2_large_graphic_pane_g1

0x8905,	// (0x00011598) list_double2_large_graphic_pane_g2_ParamLimits

0x8905,	// (0x00011598) list_double2_large_graphic_pane_g2

0x8916,	// (0x000115a9) list_double2_large_graphic_pane_g3_ParamLimits

0x8916,	// (0x000115a9) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00018308) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00018308) list_double2_large_graphic_pane_g

0x8ab9,	// (0x0001174c) list_double2_large_graphic_pane_t1_ParamLimits

0x8ab9,	// (0x0001174c) list_double2_large_graphic_pane_t1

0x8acf,	// (0x00011762) list_double2_large_graphic_pane_t2_ParamLimits

0x8acf,	// (0x00011762) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001830f) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001830f) list_double2_large_graphic_pane_t

0x8ae1,	// (0x00011774) list_double_heading_pane_g1_ParamLimits

0x8ae1,	// (0x00011774) list_double_heading_pane_g1

0x8af2,	// (0x00011785) list_double_heading_pane_g2_ParamLimits

0x8af2,	// (0x00011785) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00018314) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00018314) list_double_heading_pane_g

0x8afe,	// (0x00011791) list_double_heading_pane_t1_ParamLimits

0x8afe,	// (0x00011791) list_double_heading_pane_t1

0x8b14,	// (0x000117a7) list_double_heading_pane_t2_ParamLimits

0x8b14,	// (0x000117a7) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00018319) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00018319) list_double_heading_pane_t

0x8984,	// (0x00011617) list_double_graphic_heading_pane_g1_ParamLimits

0x8984,	// (0x00011617) list_double_graphic_heading_pane_g1

0x8ae1,	// (0x00011774) list_double_graphic_heading_pane_g2_ParamLimits

0x8ae1,	// (0x00011774) list_double_graphic_heading_pane_g2

0x8af2,	// (0x00011785) list_double_graphic_heading_pane_g3_ParamLimits

0x8af2,	// (0x00011785) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001831e) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001831e) list_double_graphic_heading_pane_g

0x8b26,	// (0x000117b9) list_double_graphic_heading_pane_t1_ParamLimits

0x8b26,	// (0x000117b9) list_double_graphic_heading_pane_t1

0x8b3c,	// (0x000117cf) list_double_graphic_heading_pane_t2_ParamLimits

0x8b3c,	// (0x000117cf) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00018325) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00018325) list_double_graphic_heading_pane_t

0x8a4a,	// (0x000116dd) list_double_time_pane_g1_ParamLimits

0x8a4a,	// (0x000116dd) list_double_time_pane_g1

0x88d1,	// (0x00011564) list_double_time_pane_g2_ParamLimits

0x88d1,	// (0x00011564) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001832a) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001832a) list_double_time_pane_g

0x8b4e,	// (0x000117e1) list_double_time_pane_t1_ParamLimits

0x8b4e,	// (0x000117e1) list_double_time_pane_t1

0x8b64,	// (0x000117f7) list_double_time_pane_t2_ParamLimits

0x8b64,	// (0x000117f7) list_double_time_pane_t2

0x8b76,	// (0x00011809) list_double_time_pane_t3_ParamLimits

0x8b76,	// (0x00011809) list_double_time_pane_t3

0x8b88,	// (0x0001181b) list_double_time_pane_t4_ParamLimits

0x8b88,	// (0x0001181b) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001832f) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001832f) list_double_time_pane_t

0x89eb,	// (0x0001167e) list_setting_pane_g1_ParamLimits

0x89eb,	// (0x0001167e) list_setting_pane_g1

0x8916,	// (0x000115a9) list_setting_pane_g2_ParamLimits

0x8916,	// (0x000115a9) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00018338) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00018338) list_setting_pane_g

0x8b9a,	// (0x0001182d) list_setting_pane_t1_ParamLimits

0x8b9a,	// (0x0001182d) list_setting_pane_t1

0x8bb1,	// (0x00011844) list_setting_pane_t2_ParamLimits

0x8bb1,	// (0x00011844) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001833d) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001833d) list_setting_pane_t

0x8bee,	// (0x00011881) set_value_pane_cp_ParamLimits

0x8bee,	// (0x00011881) set_value_pane_cp

0x89eb,	// (0x0001167e) list_setting_number_pane_g1_ParamLimits

0x89eb,	// (0x0001167e) list_setting_number_pane_g1

0x8916,	// (0x000115a9) list_setting_number_pane_g2_ParamLimits

0x8916,	// (0x000115a9) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00018338) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00018338) list_setting_number_pane_g

0x8bfa,	// (0x0001188d) list_setting_number_pane_t1_ParamLimits

0x8bfa,	// (0x0001188d) list_setting_number_pane_t1

0x8c0e,	// (0x000118a1) list_setting_number_pane_t2_ParamLimits

0x8c0e,	// (0x000118a1) list_setting_number_pane_t2

0x8c25,	// (0x000118b8) list_setting_number_pane_t3_ParamLimits

0x8c25,	// (0x000118b8) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00018344) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00018344) list_setting_number_pane_t

0x8bee,	// (0x00011881) set_value_pane_ParamLimits

0x8bee,	// (0x00011881) set_value_pane

0x8c68,	// (0x000118fb) bg_set_opt_pane_ParamLimits

0x8c68,	// (0x000118fb) bg_set_opt_pane

0x8c89,	// (0x0001191c) set_value_pane_t1

0x8c97,	// (0x0001192a) slider_set_pane_cp3

0x8ca0,	// (0x00011933) volume_small_pane_cp

0x8ca9,	// (0x0001193c) list_form_gen_pane

0x8cb2,	// (0x00011945) scroll_pane_cp8

0x8cc3,	// (0x00011956) form_field_data_pane_ParamLimits

0x8cc3,	// (0x00011956) form_field_data_pane

0x8ce3,	// (0x00011976) form_field_data_wide_pane_ParamLimits

0x8ce3,	// (0x00011976) form_field_data_wide_pane

0x8d04,	// (0x00011997) form_field_popup_pane_ParamLimits

0x8d04,	// (0x00011997) form_field_popup_pane

0x8d22,	// (0x000119b5) form_field_popup_wide_pane_ParamLimits

0x8d22,	// (0x000119b5) form_field_popup_wide_pane

0x8d3d,	// (0x000119d0) form_field_slider_pane_ParamLimits

0x8d3d,	// (0x000119d0) form_field_slider_pane

0x8d50,	// (0x000119e3) form_field_slider_wide_pane_ParamLimits

0x8d50,	// (0x000119e3) form_field_slider_wide_pane

0x8d63,	// (0x000119f6) data_form_pane

0x8d79,	// (0x00011a0c) form_field_data_pane_t1

0x8d93,	// (0x00011a26) input_focus_pane

0x8da1,	// (0x00011a34) data_form_wide_pane

0x8dd9,	// (0x00011a6c) form_field_data_wide_pane_t1

0x8598,	// (0x0001122b) input_focus_pane_cp6

0x8dfb,	// (0x00011a8e) form_field_popup_pane_t1

0x8d93,	// (0x00011a26) input_focus_pane_cp7

0x8e15,	// (0x00011aa8) list_form_pane

0x8e29,	// (0x00011abc) form_field_popup_wide_pane_t1

0x8d93,	// (0x00011a26) input_focus_pane_cp8

0x8e3e,	// (0x00011ad1) list_form_wide_pane

0x8e55,	// (0x00011ae8) form_field_slider_pane_t1_ParamLimits

0x8e55,	// (0x00011ae8) form_field_slider_pane_t1

0x8e69,	// (0x00011afc) form_field_slider_pane_t2_ParamLimits

0x8e69,	// (0x00011afc) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00018354) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00018354) form_field_slider_pane_t

0x824f,	// (0x00010ee2) input_focus_pane_cp9_ParamLimits

0x824f,	// (0x00010ee2) input_focus_pane_cp9

0x8e7b,	// (0x00011b0e) slider_cont_pane_ParamLimits

0x8e7b,	// (0x00011b0e) slider_cont_pane

0x8e8f,	// (0x00011b22) form_field_slider_wide_pane_t1_ParamLimits

0x8e8f,	// (0x00011b22) form_field_slider_wide_pane_t1

0x8ea1,	// (0x00011b34) form_field_slider_wide_pane_t2_ParamLimits

0x8ea1,	// (0x00011b34) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00018359) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00018359) form_field_slider_wide_pane_t

0x824f,	// (0x00010ee2) input_focus_pane_cp10_ParamLimits

0x824f,	// (0x00010ee2) input_focus_pane_cp10

0x8eb3,	// (0x00011b46) slider_cont_pane_cp1_ParamLimits

0x8eb3,	// (0x00011b46) slider_cont_pane_cp1

0x8ec7,	// (0x00011b5a) slider_form_pane_cp

0x8ecf,	// (0x00011b62) input_focus_pane_g1

0x8ed7,	// (0x00011b6a) input_focus_pane_g2

0x8edf,	// (0x00011b72) input_focus_pane_g3

0x8ee7,	// (0x00011b7a) input_focus_pane_g4

0x8eef,	// (0x00011b82) input_focus_pane_g5

0x8ef7,	// (0x00011b8a) input_focus_pane_g6

0x8eff,	// (0x00011b92) input_focus_pane_g7

0x8f07,	// (0x00011b9a) input_focus_pane_g8

0x8f0f,	// (0x00011ba2) input_focus_pane_g9

0x7ed0,	// (0x00010b63) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001835e) input_focus_pane_g

0xb0cd,	// (0x00013d60) wait_border_pane_g3_copy1

0x8f17,	// (0x00011baa) data_form_pane_t1

0x7ed0,	// (0x00010b63) wait_anim_pane_g1_copy1

0xc04b,	// (0x00014cde) data_form_wide_pane_t1

0x8f32,	// (0x00011bc5) list_form_graphic_pane_cp_ParamLimits

0x8f32,	// (0x00011bc5) list_form_graphic_pane_cp

0xc020,	// (0x00014cb3) slider_form_pane_g1

0xc029,	// (0x00014cbc) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00018656) slider_form_pane_g

0x8f49,	// (0x00011bdc) list_form_graphic_pane_ParamLimits

0x8f49,	// (0x00011bdc) list_form_graphic_pane

0x8f63,	// (0x00011bf6) list_form_graphic_pane_g1

0x8f6b,	// (0x00011bfe) list_form_graphic_pane_t1_ParamLimits

0x8f6b,	// (0x00011bfe) list_form_graphic_pane_t1

0x7fba,	// (0x00010c4d) list_highlight_pane_cp5_ParamLimits

0x7fba,	// (0x00010c4d) list_highlight_pane_cp5

0x8f80,	// (0x00011c13) find_pane_g1

0x8f89,	// (0x00011c1c) input_find_pane

0x8f92,	// (0x00011c25) input_find_pane_g1_ParamLimits

0x8f92,	// (0x00011c25) input_find_pane_g1

0x8f9e,	// (0x00011c31) input_find_pane_t1_ParamLimits

0x8f9e,	// (0x00011c31) input_find_pane_t1

0x8fb3,	// (0x00011c46) input_find_pane_t2_ParamLimits

0x8fb3,	// (0x00011c46) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00018373) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00018373) input_find_pane_t

0x8fc8,	// (0x00011c5b) input_focus_pane_cp5_ParamLimits

0x8fc8,	// (0x00011c5b) input_focus_pane_cp5

0x8fe2,	// (0x00011c75) bg_popup_window_pane_cp2_ParamLimits

0x8fe2,	// (0x00011c75) bg_popup_window_pane_cp2

0x8fef,	// (0x00011c82) listscroll_menu_pane_ParamLimits

0x8fef,	// (0x00011c82) listscroll_menu_pane

0x8ffb,	// (0x00011c8e) popup_submenu_window_ParamLimits

0x8ffb,	// (0x00011c8e) popup_submenu_window

0x901f,	// (0x00011cb2) find_popup_pane_g1

0x9027,	// (0x00011cba) input_popup_find_pane_cp

0x8fc8,	// (0x00011c5b) input_focus_pane_cp4_ParamLimits

0x8fc8,	// (0x00011c5b) input_focus_pane_cp4

0x903f,	// (0x00011cd2) input_popup_find_pane_t1_ParamLimits

0x903f,	// (0x00011cd2) input_popup_find_pane_t1

0x7eda,	// (0x00010b6d) bg_popup_sub_pane_cp

0x906d,	// (0x00011d00) listscroll_popup_sub_pane

0x9075,	// (0x00011d08) list_submenu_pane_ParamLimits

0x9075,	// (0x00011d08) list_submenu_pane

0x9086,	// (0x00011d19) scroll_pane_cp4

0x908e,	// (0x00011d21) list_single_popup_submenu_pane_ParamLimits

0x908e,	// (0x00011d21) list_single_popup_submenu_pane

0x90a1,	// (0x00011d34) list_single_popup_submenu_pane_g1

0x90a9,	// (0x00011d3c) list_single_popup_submenu_pane_t1_ParamLimits

0x90a9,	// (0x00011d3c) list_single_popup_submenu_pane_t1

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp1_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp1

0x90be,	// (0x00011d51) tabs_2_active_pane_g1

0x90c6,	// (0x00011d59) tabs_2_active_pane_t1

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp1_ParamLimits

0x7fba,	// (0x00010c4d) bg_passive_tab_pane_cp1

0x90be,	// (0x00011d51) tabs_2_passive_pane_g1

0x90c6,	// (0x00011d59) tabs_2_passive_pane_t1

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp4

0x90e6,	// (0x00011d79) tabs_2_long_active_pane_t1

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp4

0x6d61,	// (0x0000f9f4) list_single_midp_graphic_pane_g4_ParamLimits

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp5

0x9105,	// (0x00011d98) tabs_3_long_active_pane_t1

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp5

0x6d61,	// (0x0000f9f4) list_single_midp_graphic_pane_g4

0x7fba,	// (0x00010c4d) bg_popup_window_pane_cp13_ParamLimits

0x7fba,	// (0x00010c4d) bg_popup_window_pane_cp13

0x9120,	// (0x00011db3) listscroll_popup_fast_pane_ParamLimits

0x9120,	// (0x00011db3) listscroll_popup_fast_pane

0x912f,	// (0x00011dc2) grid_popup_fast_pane_ParamLimits

0x912f,	// (0x00011dc2) grid_popup_fast_pane

0x9141,	// (0x00011dd4) scroll_pane_cp9_ParamLimits

0x9141,	// (0x00011dd4) scroll_pane_cp9

0xddd0,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xddd0,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2

0x9165,	// (0x00011df8) input_focus_pane_cp20_ParamLimits

0x9165,	// (0x00011df8) input_focus_pane_cp20

0x9173,	// (0x00011e06) query_popup_data_pane_t1_ParamLimits

0x9173,	// (0x00011e06) query_popup_data_pane_t1

0x9186,	// (0x00011e19) query_popup_data_pane_t2_ParamLimits

0x9186,	// (0x00011e19) query_popup_data_pane_t2

0x91cc,	// (0x00011e5f) query_popup_data_pane_t3_ParamLimits

0x91cc,	// (0x00011e5f) query_popup_data_pane_t3

0x920d,	// (0x00011ea0) query_popup_data_pane_t4_ParamLimits

0x920d,	// (0x00011ea0) query_popup_data_pane_t4

0x9249,	// (0x00011edc) query_popup_data_pane_t5_ParamLimits

0x9249,	// (0x00011edc) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00018378) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00018378) query_popup_data_pane_t

0x8ecf,	// (0x00011b62) bg_set_opt_pane_g1

0x8ed7,	// (0x00011b6a) bg_set_opt_pane_g2

0x8edf,	// (0x00011b72) bg_set_opt_pane_g3

0x8ee7,	// (0x00011b7a) bg_set_opt_pane_g4

0x8eef,	// (0x00011b82) bg_set_opt_pane_g5

0x8ef7,	// (0x00011b8a) bg_set_opt_pane_g6

0x8eff,	// (0x00011b92) bg_set_opt_pane_g7

0x8f07,	// (0x00011b9a) bg_set_opt_pane_g8

0x8f0f,	// (0x00011ba2) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00018383) bg_set_opt_pane_g

0x695b,	// (0x0000f5ee) control_top_pane_stacon_ParamLimits

0x695b,	// (0x0000f5ee) control_top_pane_stacon

0x69ae,	// (0x0000f641) signal_pane_stacon_ParamLimits

0x69ae,	// (0x0000f641) signal_pane_stacon

0x986d,	// (0x00012500) stacon_top_pane_g1_ParamLimits

0x986d,	// (0x00012500) stacon_top_pane_g1

0x69d3,	// (0x0000f666) title_pane_stacon_ParamLimits

0x69d3,	// (0x0000f666) title_pane_stacon

0x69fd,	// (0x0000f690) uni_indicator_pane_stacon_ParamLimits

0x69fd,	// (0x0000f690) uni_indicator_pane_stacon

0x6a12,	// (0x0000f6a5) battery_pane_stacon_ParamLimits

0x6a12,	// (0x0000f6a5) battery_pane_stacon

0x6a56,	// (0x0000f6e9) control_bottom_pane_stacon_ParamLimits

0x6a56,	// (0x0000f6e9) control_bottom_pane_stacon

0x6a79,	// (0x0000f70c) navi_pane_stacon_ParamLimits

0x6a79,	// (0x0000f70c) navi_pane_stacon

0x988f,	// (0x00012522) stacon_bottom_pane_g1_ParamLimits

0x988f,	// (0x00012522) stacon_bottom_pane_g1

0x66bc,	// (0x0000f34f) aid_levels_signal_lsc_ParamLimits

0x66bc,	// (0x0000f34f) aid_levels_signal_lsc

0x66d3,	// (0x0000f366) signal_pane_stacon_g1_ParamLimits

0x66d3,	// (0x0000f366) signal_pane_stacon_g1

0x66e7,	// (0x0000f37a) signal_pane_stacon_g2_ParamLimits

0x66e7,	// (0x0000f37a) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00018396) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00018396) signal_pane_stacon_g

0x671c,	// (0x0000f3af) title_pane_stacon_t1_ParamLimits

0x671c,	// (0x0000f3af) title_pane_stacon_t1

0x928d,	// (0x00011f20) uni_indicator_pane_stacon_g1

0x9297,	// (0x00011f2a) uni_indicator_pane_stacon_g2

0x92a1,	// (0x00011f34) uni_indicator_pane_stacon_g3

0x92ab,	// (0x00011f3e) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x000183a2) uni_indicator_pane_stacon_g

0x6741,	// (0x0000f3d4) control_top_pane_stacon_g1

0x6749,	// (0x0000f3dc) control_top_pane_stacon_t1_ParamLimits

0x6749,	// (0x0000f3dc) control_top_pane_stacon_t1

0x6780,	// (0x0000f413) aid_levels_battery_lsc_ParamLimits

0x6780,	// (0x0000f413) aid_levels_battery_lsc

0x6798,	// (0x0000f42b) battery_pane_stacon_g1_ParamLimits

0x6798,	// (0x0000f42b) battery_pane_stacon_g1

0x67ab,	// (0x0000f43e) battery_pane_stacon_g2_ParamLimits

0x67ab,	// (0x0000f43e) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x000183ab) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x000183ab) battery_pane_stacon_g

0x67e9,	// (0x0000f47c) navi_icon_pane_stacon

0x67fd,	// (0x0000f490) navi_navi_pane_stacon

0x67e9,	// (0x0000f47c) navi_text_pane_stacon

0x6741,	// (0x0000f3d4) control_bottom_pane_stacon_g1

0x6811,	// (0x0000f4a4) control_bottom_pane_stacon_t1_ParamLimits

0x6811,	// (0x0000f4a4) control_bottom_pane_stacon_t1

0x92cf,	// (0x00011f62) grid_app_pane_ParamLimits

0x92cf,	// (0x00011f62) grid_app_pane

0x92f1,	// (0x00011f84) scroll_pane_cp15_ParamLimits

0x92f1,	// (0x00011f84) scroll_pane_cp15

0x9306,	// (0x00011f99) cell_app_pane_ParamLimits

0x9306,	// (0x00011f99) cell_app_pane

0x9330,	// (0x00011fc3) cell_app_pane_g1_ParamLimits

0x9330,	// (0x00011fc3) cell_app_pane_g1

0x9354,	// (0x00011fe7) cell_app_pane_g2_ParamLimits

0x9354,	// (0x00011fe7) cell_app_pane_g2

0x0001,

0xf71d,	// (0x000183b0) cell_app_pane_g_ParamLimits

0xf71d,	// (0x000183b0) cell_app_pane_g

0x9360,	// (0x00011ff3) cell_app_pane_t1_ParamLimits

0x9360,	// (0x00011ff3) cell_app_pane_t1

0x9372,	// (0x00012005) grid_highlight_pane_ParamLimits

0x9372,	// (0x00012005) grid_highlight_pane

0x8ecf,	// (0x00011b62) cell_highlight_pane_g1

0x8ed7,	// (0x00011b6a) cell_highlight_pane_g2

0x8edf,	// (0x00011b72) cell_highlight_pane_g3

0x8ee7,	// (0x00011b7a) cell_highlight_pane_g4

0x8eef,	// (0x00011b82) cell_highlight_pane_g5

0x8ef7,	// (0x00011b8a) cell_highlight_pane_g6

0x8eff,	// (0x00011b92) cell_highlight_pane_g7

0x8f07,	// (0x00011b9a) cell_highlight_pane_g8

0x8f0f,	// (0x00011ba2) cell_highlight_pane_g9

0x7ed0,	// (0x00010b63) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001835e) cell_highlight_pane_g

0x9383,	// (0x00012016) bg_scroll_pane

0x685b,	// (0x0000f4ee) scroll_handle_pane

0x93ca,	// (0x0001205d) scroll_bg_pane_g1

0x93df,	// (0x00012072) scroll_bg_pane_g2

0x93f7,	// (0x0001208a) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x000183b5) scroll_bg_pane_g

0x940c,	// (0x0001209f) scroll_handle_focus_pane_ParamLimits

0x940c,	// (0x0001209f) scroll_handle_focus_pane

0x93ca,	// (0x0001205d) scroll_handle_pane_g1

0x9419,	// (0x000120ac) scroll_handle_pane_g2

0x93f7,	// (0x0001208a) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x000183bc) scroll_handle_pane_g

0x8fc8,	// (0x00011c5b) bg_popup_sub_pane_cp21_ParamLimits

0x8fc8,	// (0x00011c5b) bg_popup_sub_pane_cp21

0x942d,	// (0x000120c0) popup_fep_japan_predictive_window_t1_ParamLimits

0x942d,	// (0x000120c0) popup_fep_japan_predictive_window_t1

0x9444,	// (0x000120d7) popup_fep_japan_predictive_window_t2_ParamLimits

0x9444,	// (0x000120d7) popup_fep_japan_predictive_window_t2

0x9477,	// (0x0001210a) popup_fep_japan_predictive_window_t3_ParamLimits

0x9477,	// (0x0001210a) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x000183c3) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x000183c3) popup_fep_japan_predictive_window_t

0x7eda,	// (0x00010b6d) bg_popup_sub_pane_cp23

0x94ae,	// (0x00012141) listscroll_japin_cand_pane

0x94b6,	// (0x00012149) popup_fep_japan_candidate_window_t1

0x94c4,	// (0x00012157) candidate_pane_ParamLimits

0x94c4,	// (0x00012157) candidate_pane

0x94d6,	// (0x00012169) scroll_pane_cp30

0x94de,	// (0x00012171) list_single_popup_jap_candidate_pane_ParamLimits

0x94de,	// (0x00012171) list_single_popup_jap_candidate_pane

0x7eda,	// (0x00010b6d) list_highlight_pane_cp30

0x94f2,	// (0x00012185) list_single_popup_jap_candidate_pane_t1

0x9501,	// (0x00012194) level_1_signal

0x950e,	// (0x000121a1) level_2_signal

0x951b,	// (0x000121ae) level_3_signal

0x9528,	// (0x000121bb) level_4_signal

0x9535,	// (0x000121c8) level_5_signal

0x9542,	// (0x000121d5) level_6_signal

0x954f,	// (0x000121e2) level_7_signal

0x9501,	// (0x00012194) level_1_battery

0x950e,	// (0x000121a1) level_2_battery

0x951b,	// (0x000121ae) level_3_battery

0x9528,	// (0x000121bb) level_4_battery

0x9535,	// (0x000121c8) level_5_battery

0x9542,	// (0x000121d5) level_6_battery

0x954f,	// (0x000121e2) level_7_battery

0x9574,	// (0x00012207) list_menu_pane_ParamLimits

0x9574,	// (0x00012207) list_menu_pane

0x9585,	// (0x00012218) scroll_pane_cp25_ParamLimits

0x9585,	// (0x00012218) scroll_pane_cp25

0x959e,	// (0x00012231) list_double2_graphic_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double2_graphic_pane_cp2

0x959e,	// (0x00012231) list_double2_large_graphic_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double2_large_graphic_pane_cp2

0x959e,	// (0x00012231) list_double2_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double2_pane_cp2

0x959e,	// (0x00012231) list_double_graphic_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double_graphic_pane_cp2

0x959e,	// (0x00012231) list_double_large_graphic_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double_large_graphic_pane_cp2

0x959e,	// (0x00012231) list_double_number_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double_number_pane_cp2

0x959e,	// (0x00012231) list_double_pane_cp2_ParamLimits

0x959e,	// (0x00012231) list_double_pane_cp2

0x95c0,	// (0x00012253) list_single_2graphic_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_2graphic_pane_cp2

0x95c0,	// (0x00012253) list_single_graphic_heading_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_graphic_heading_pane_cp2

0x95c0,	// (0x00012253) list_single_graphic_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_graphic_pane_cp2

0x95c0,	// (0x00012253) list_single_heading_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_heading_pane_cp2

0x95d7,	// (0x0001226a) list_single_large_graphic_pane_cp2_ParamLimits

0x95d7,	// (0x0001226a) list_single_large_graphic_pane_cp2

0x95c0,	// (0x00012253) list_single_number_heading_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_number_heading_pane_cp2

0x95c0,	// (0x00012253) list_single_number_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_number_pane_cp2

0x95c0,	// (0x00012253) list_single_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_pane_cp2

0x962d,	// (0x000122c0) bg_popup_sub_pane_cp22

0x690d,	// (0x0000f5a0) popup_side_volume_key_window_g1

0x6937,	// (0x0000f5ca) popup_side_volume_key_window_t1

0x6953,	// (0x0000f5e6) volume_small_pane_cp1

0x824f,	// (0x00010ee2) bg_popup_sub_pane_cp24_ParamLimits

0x824f,	// (0x00010ee2) bg_popup_sub_pane_cp24

0x9643,	// (0x000122d6) fep_china_uni_candidate_pane_ParamLimits

0x9643,	// (0x000122d6) fep_china_uni_candidate_pane

0x9657,	// (0x000122ea) fep_china_uni_entry_pane

0x9667,	// (0x000122fa) popup_fep_china_uni_window_g1

0x9683,	// (0x00012316) fep_china_uni_entry_pane_g1

0x968b,	// (0x0001231e) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x000183f0) fep_china_uni_entry_pane_g

0x9693,	// (0x00012326) fep_entry_item_pane

0x969d,	// (0x00012330) fep_candidate_item_pane

0x96a5,	// (0x00012338) fep_china_uni_candidate_pane_g1

0x96ad,	// (0x00012340) fep_china_uni_candidate_pane_g2

0x96b5,	// (0x00012348) fep_china_uni_candidate_pane_g3

0x96bd,	// (0x00012350) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x000183f5) fep_china_uni_candidate_pane_g

0x7ed0,	// (0x00010b63) fep_entry_item_pane_g1

0x96c5,	// (0x00012358) fep_entry_item_pane_t1_ParamLimits

0x96c5,	// (0x00012358) fep_entry_item_pane_t1

0x96db,	// (0x0001236e) fep_candidate_item_pane_t1_ParamLimits

0x96db,	// (0x0001236e) fep_candidate_item_pane_t1

0x96f0,	// (0x00012383) fep_candidate_item_pane_t2_ParamLimits

0x96f0,	// (0x00012383) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x000183fe) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x000183fe) fep_candidate_item_pane_t

0x7fba,	// (0x00010c4d) list_highlight_pane_cp31_ParamLimits

0x7fba,	// (0x00010c4d) list_highlight_pane_cp31

0x9702,	// (0x00012395) level_1_signal_lsc

0x970b,	// (0x0001239e) level_2_signal_lsc

0x9714,	// (0x000123a7) level_3_signal_lsc

0x971d,	// (0x000123b0) level_4_signal_lsc

0x9726,	// (0x000123b9) level_5_signal_lsc

0x972f,	// (0x000123c2) level_6_signal_lsc

0x9738,	// (0x000123cb) level_7_signal_lsc

0x9738,	// (0x000123cb) level_1_battery_lsc

0x9741,	// (0x000123d4) level_2_battery_lsc

0x974a,	// (0x000123dd) level_3_battery_lsc

0x9753,	// (0x000123e6) level_4_battery_lsc

0x975c,	// (0x000123ef) level_5_battery_lsc

0x9765,	// (0x000123f8) level_6_battery_lsc

0x9702,	// (0x00012395) level_7_battery_lsc

0x976e,	// (0x00012401) scroll_handle_focus_pane_g1

0x9777,	// (0x0001240a) scroll_handle_focus_pane_g2

0x9780,	// (0x00012413) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00018403) scroll_handle_focus_pane_g

0x9789,	// (0x0001241c) list_single_2graphic_pane_g1_ParamLimits

0x9789,	// (0x0001241c) list_single_2graphic_pane_g1

0x8860,	// (0x000114f3) list_single_2graphic_pane_g2_ParamLimits

0x8860,	// (0x000114f3) list_single_2graphic_pane_g2

0x87e6,	// (0x00011479) list_single_2graphic_pane_g3_ParamLimits

0x87e6,	// (0x00011479) list_single_2graphic_pane_g3

0x9795,	// (0x00012428) list_single_2graphic_pane_g4_ParamLimits

0x9795,	// (0x00012428) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001840a) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001840a) list_single_2graphic_pane_g

0x97a6,	// (0x00012439) list_single_2graphic_pane_t1_ParamLimits

0x97a6,	// (0x00012439) list_single_2graphic_pane_t1

0x97d4,	// (0x00012467) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x97d4,	// (0x00012467) list_double2_graphic_large_graphic_pane_g1

0x8905,	// (0x00011598) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8905,	// (0x00011598) list_double2_graphic_large_graphic_pane_g2

0x8916,	// (0x000115a9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8916,	// (0x000115a9) list_double2_graphic_large_graphic_pane_g3

0x97e4,	// (0x00012477) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x97e4,	// (0x00012477) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00018413) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00018413) list_double2_graphic_large_graphic_pane_g

0x97f0,	// (0x00012483) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x97f0,	// (0x00012483) list_double2_graphic_large_graphic_pane_t1

0x9806,	// (0x00012499) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9806,	// (0x00012499) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001841c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001841c) list_double2_graphic_large_graphic_pane_t

0x995a,	// (0x000125ed) popup_fast_swap_window_ParamLimits

0x995a,	// (0x000125ed) popup_fast_swap_window

0x9976,	// (0x00012609) popup_side_volume_key_window

0x9990,	// (0x00012623) stacon_top_pane

0x999a,	// (0x0001262d) status_pane_ParamLimits

0x999a,	// (0x0001262d) status_pane

0x9990,	// (0x00012623) status_small_pane

0x7eda,	// (0x00010b6d) control_pane

0x7eda,	// (0x00010b6d) stacon_bottom_pane

0x8cb2,	// (0x00011945) scroll_pane_cp121

0x8ca9,	// (0x0001193c) set_content_pane

0x9818,	// (0x000124ab) bg_active_tab_pane_g1_cp1

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp1

0x982a,	// (0x000124bd) bg_active_tab_pane_g3_cp1

0x9818,	// (0x000124ab) bg_passive_tab_pane_g1_cp1

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp1

0x982a,	// (0x000124bd) bg_passive_tab_pane_g3_cp1

0x9833,	// (0x000124c6) bg_active_tab_pane_g1_cp2

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp2

0x983c,	// (0x000124cf) bg_active_tab_pane_g3_cp2

0x9833,	// (0x000124c6) bg_passive_tab_pane_g1_cp2

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp2

0x983c,	// (0x000124cf) bg_passive_tab_pane_g3_cp2

0x9845,	// (0x000124d8) bg_active_tab_pane_g1_cp3

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp3

0x984e,	// (0x000124e1) bg_active_tab_pane_g3_cp3

0x9845,	// (0x000124d8) bg_passive_tab_pane_g1_cp3

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp3

0x984e,	// (0x000124e1) bg_passive_tab_pane_g3_cp3

0x9857,	// (0x000124ea) bg_active_tab_pane_g1_cp4

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp4

0x9862,	// (0x000124f5) bg_active_tab_pane_g3_cp4

0x9857,	// (0x000124ea) bg_passive_tab_pane_g1_cp4

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp4

0x9862,	// (0x000124f5) bg_passive_tab_pane_g3_cp4

0x98ab,	// (0x0001253e) bg_active_tab_pane_g1_cp5

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp5

0x98b4,	// (0x00012547) bg_active_tab_pane_g3_cp5

0x98ab,	// (0x0001253e) bg_passive_tab_pane_g1_cp5

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp5

0x98b4,	// (0x00012547) bg_passive_tab_pane_g3_cp5

0x98bd,	// (0x00012550) list_set_graphic_pane_ParamLimits

0x98bd,	// (0x00012550) list_set_graphic_pane

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp4

0x98db,	// (0x0001256e) list_set_graphic_pane_g1_ParamLimits

0x98db,	// (0x0001256e) list_set_graphic_pane_g1

0x98e7,	// (0x0001257a) list_set_graphic_pane_g2_ParamLimits

0x98e7,	// (0x0001257a) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00018421) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00018421) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x0001878c) volume_small_pane_cp_g

0x990b,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x990b,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2

0x9919,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9919,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2

0x992a,	// (0x000125bd) list_double2_large_graphic_pane_g3_cp2

0x9932,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9932,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2

0x9948,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9948,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2

0xbba0,	// (0x00014833) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbba0,	// (0x00014833) list_double_large_graphic_pane_g1_cp2

0xbbb3,	// (0x00014846) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbbb3,	// (0x00014846) list_double_large_graphic_pane_g2_cp2

0x9ab8,	// (0x0001274b) list_double_large_graphic_pane_g3_cp2

0xbbc4,	// (0x00014857) list_double_large_graphic_pane_g4_cp

0xbbcc,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbbcc,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2

0xbbe3,	// (0x00014876) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbbe3,	// (0x00014876) list_double_large_graphic_pane_t2_cp2

0x99a8,	// (0x0001263b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x99a8,	// (0x0001263b) list_double2_graphic_pane_g1_cp2

0x99b6,	// (0x00012649) list_double2_graphic_pane_g2_cp2_ParamLimits

0x99b6,	// (0x00012649) list_double2_graphic_pane_g2_cp2

0x99c7,	// (0x0001265a) list_double2_graphic_pane_g3_cp2

0x99d1,	// (0x00012664) list_double2_graphic_pane_t1_cp2_ParamLimits

0x99d1,	// (0x00012664) list_double2_graphic_pane_t1_cp2

0x99e7,	// (0x0001267a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x99e7,	// (0x0001267a) list_double2_graphic_pane_t2_cp2

0x99f9,	// (0x0001268c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x99f9,	// (0x0001268c) list_single_number_heading_pane_g1_cp2

0x9a05,	// (0x00012698) list_single_number_heading_pane_g2_cp2

0x9a0d,	// (0x000126a0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9a0d,	// (0x000126a0) list_single_number_heading_pane_t1_cp2

0x9a23,	// (0x000126b6) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9a23,	// (0x000126b6) list_single_number_heading_pane_t2_cp2

0x9a37,	// (0x000126ca) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9a37,	// (0x000126ca) list_single_number_heading_pane_t3_cp2

0x99f9,	// (0x0001268c) list_single_heading_pane_g1_cp2_ParamLimits

0x99f9,	// (0x0001268c) list_single_heading_pane_g1_cp2

0x9a05,	// (0x00012698) list_single_heading_pane_g2_cp2

0x9a0d,	// (0x000126a0) list_single_heading_pane_t1_cp2_ParamLimits

0x9a0d,	// (0x000126a0) list_single_heading_pane_t1_cp2

0xb9a8,	// (0x0001463b) list_single_heading_pane_t2_cp2_ParamLimits

0xb9a8,	// (0x0001463b) list_single_heading_pane_t2_cp2

0xb8ea,	// (0x0001457d) list_double_graphic_pane_g1_cp2_ParamLimits

0xb8ea,	// (0x0001457d) list_double_graphic_pane_g1_cp2

0xb8f6,	// (0x00014589) list_double_graphic_pane_g2_cp2_ParamLimits

0xb8f6,	// (0x00014589) list_double_graphic_pane_g2_cp2

0xb905,	// (0x00014598) list_double_graphic_pane_g3_cp2

0xb90d,	// (0x000145a0) list_double_graphic_pane_t1_cp2_ParamLimits

0xb90d,	// (0x000145a0) list_double_graphic_pane_t1_cp2

0xb923,	// (0x000145b6) list_double_graphic_pane_t2_cp2_ParamLimits

0xb923,	// (0x000145b6) list_double_graphic_pane_t2_cp2

0x9aac,	// (0x0001273f) list_double_number_pane_g1_cp2_ParamLimits

0x9aac,	// (0x0001273f) list_double_number_pane_g1_cp2

0x9ab8,	// (0x0001274b) list_double_number_pane_g2_cp2

0xb8ae,	// (0x00014541) list_double_number_pane_t1_cp2_ParamLimits

0xb8ae,	// (0x00014541) list_double_number_pane_t1_cp2

0xb8c2,	// (0x00014555) list_double_number_pane_t2_cp2_ParamLimits

0xb8c2,	// (0x00014555) list_double_number_pane_t2_cp2

0xb8d8,	// (0x0001456b) list_double_number_pane_t3_cp2_ParamLimits

0xb8d8,	// (0x0001456b) list_double_number_pane_t3_cp2

0xb797,	// (0x0001442a) list_single_graphic_pane_g1_cp2_ParamLimits

0xb797,	// (0x0001442a) list_single_graphic_pane_g1_cp2

0x9b10,	// (0x000127a3) list_single_graphic_pane_g2_cp2_ParamLimits

0x9b10,	// (0x000127a3) list_single_graphic_pane_g2_cp2

0x9b1c,	// (0x000127af) list_single_graphic_pane_g3_cp2

0xb76d,	// (0x00014400) list_single_graphic_pane_t1_cp2_ParamLimits

0xb76d,	// (0x00014400) list_single_graphic_pane_t1_cp2

0x9b10,	// (0x000127a3) list_single_number_pane_g1_cp2_ParamLimits

0x9b10,	// (0x000127a3) list_single_number_pane_g1_cp2

0x9b1c,	// (0x000127af) list_single_number_pane_g2_cp2

0xb76d,	// (0x00014400) list_single_number_pane_t1_cp2_ParamLimits

0xb76d,	// (0x00014400) list_single_number_pane_t1_cp2

0xb783,	// (0x00014416) list_single_number_pane_t2_cp2_ParamLimits

0xb783,	// (0x00014416) list_single_number_pane_t2_cp2

0x9919,	// (0x000125ac) list_double2_pane_g1_cp2_ParamLimits

0x9919,	// (0x000125ac) list_double2_pane_g1_cp2

0x992a,	// (0x000125bd) list_double2_pane_g2_cp2

0x9a84,	// (0x00012717) list_double2_pane_t1_cp2_ParamLimits

0x9a84,	// (0x00012717) list_double2_pane_t1_cp2

0x9a9a,	// (0x0001272d) list_double2_pane_t2_cp2_ParamLimits

0x9a9a,	// (0x0001272d) list_double2_pane_t2_cp2

0x9aac,	// (0x0001273f) list_double_pane_g1_cp2_ParamLimits

0x9aac,	// (0x0001273f) list_double_pane_g1_cp2

0x9ab8,	// (0x0001274b) list_double_pane_g2_cp2

0x9ac0,	// (0x00012753) list_double_pane_t1_cp2_ParamLimits

0x9ac0,	// (0x00012753) list_double_pane_t1_cp2

0x9ad6,	// (0x00012769) list_double_pane_t2_cp2_ParamLimits

0x9ad6,	// (0x00012769) list_double_pane_t2_cp2

0x9b00,	// (0x00012793) list_single_pane_cp2_g3

0x9b10,	// (0x000127a3) list_single_pane_g1_cp2_ParamLimits

0x9b10,	// (0x000127a3) list_single_pane_g1_cp2

0x9b1c,	// (0x000127af) list_single_pane_g2_cp2

0x9b24,	// (0x000127b7) list_single_pane_t1_cp2_ParamLimits

0x9b24,	// (0x000127b7) list_single_pane_t1_cp2

0x9b3c,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9b3c,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2

0x9b4a,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9b4a,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2

0x9b56,	// (0x000127e9) list_single_large_graphic_pane_g3_cp2

0x9b5e,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b5e,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1

0x9b78,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9b78,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2

0xb737,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb737,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2

0xb704,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb704,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2

0x9b1c,	// (0x000127af) list_single_graphic_heading_pane_g5_cp2

0xb743,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb743,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2

0xb759,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb759,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2

0xb6f8,	// (0x0001438b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb6f8,	// (0x0001438b) list_single_2graphic_pane_g1_cp2

0xb704,	// (0x00014397) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb704,	// (0x00014397) list_single_2graphic_pane_g2_cp2

0x9b1c,	// (0x000127af) list_single_2graphic_pane_g3_cp2

0xb715,	// (0x000143a8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb715,	// (0x000143a8) list_single_2graphic_pane_g4_cp2

0xb721,	// (0x000143b4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb721,	// (0x000143b4) list_single_2graphic_pane_t1_cp2

0x7ed0,	// (0x00010b63) list_highlight_pane_g10_cp1

0xb2e0,	// (0x00013f73) list_highlight_pane_g1_cp1

0xb2e8,	// (0x00013f7b) list_highlight_pane_g2_cp1

0xb2f0,	// (0x00013f83) list_highlight_pane_g3_cp1

0xb2f8,	// (0x00013f8b) list_highlight_pane_g4_cp1

0xb300,	// (0x00013f93) list_highlight_pane_g5_cp1

0xb308,	// (0x00013f9b) list_highlight_pane_g6_cp1

0xb310,	// (0x00013fa3) list_highlight_pane_g7_cp1

0xb318,	// (0x00013fab) list_highlight_pane_g8_cp1

0xb320,	// (0x00013fb3) list_highlight_pane_g9_cp1

0xb1f8,	// (0x00013e8b) form_field_slider_pane_t3

0xb206,	// (0x00013e99) form_field_slider_pane_t4

0xb214,	// (0x00013ea7) slider_form_pane_ParamLimits

0xb214,	// (0x00013ea7) slider_form_pane

0x7eda,	// (0x00010b6d) control_abbreviations

0x7eda,	// (0x00010b6d) control_conventions

0x7eda,	// (0x00010b6d) control_definitions

0x7eda,	// (0x00010b6d) format_table_attribute

0xb9f4,	// (0x00014687) bg_popup_preview_window_pane_g9

0x7eda,	// (0x00010b6d) format_table_data2

0x7eda,	// (0x00010b6d) format_table_data3

0x7eda,	// (0x00010b6d) format_table_data_example

0x0008,

0x7eda,	// (0x00010b6d) intro_purpose

0xf923,	// (0x000185b6) bg_popup_preview_window_pane_g

0x7eda,	// (0x00010b6d) texts_category

0x7eda,	// (0x00010b6d) texts_graphics

0x9b8e,	// (0x00012821) text_digital

0x9b9d,	// (0x00012830) text_primary

0x9bac,	// (0x0001283f) text_primary_small

0x9bbb,	// (0x0001284e) text_secondary

0x9bca,	// (0x0001285d) text_title

0xc22c,	// (0x00014ebf) bg_passive_tab_pane_g1_cp3_srt

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp3_srt

0xc235,	// (0x00014ec8) bg_passive_tab_pane_g3_cp3_srt

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp3_srt

0xc23e,	// (0x00014ed1) tabs_4_active_pane_srt_g1

0xc246,	// (0x00014ed9) tabs_4_active_pane_srt_t1_ParamLimits

0xc246,	// (0x00014ed9) tabs_4_active_pane_srt_t1

0xc22c,	// (0x00014ebf) bg_active_tab_pane_g1_cp3_copy1

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp3_copy1

0xc235,	// (0x00014ec8) bg_active_tab_pane_g3_cp3_copy1

0x7fba,	// (0x00010c4d) tabs_2_long_active_pane_srt_ParamLimits

0x7fba,	// (0x00010c4d) tabs_2_long_active_pane_srt

0x7fba,	// (0x00010c4d) tabs_2_long_passive_pane_srt_ParamLimits

0x7fba,	// (0x00010c4d) tabs_2_long_passive_pane_srt

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp4_srt

0xbe61,	// (0x00014af4) bg_passive_tab_pane_g1_cp4_srt

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp4_srt

0xbe6a,	// (0x00014afd) bg_passive_tab_pane_g3_cp4_srt

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp4_srt_ParamLimits

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp4_srt

0xbe73,	// (0x00014b06) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbe73,	// (0x00014b06) tabs_2_long_active_pane_srt_t1

0xbe61,	// (0x00014af4) bg_active_tab_pane_g1_cp4_srt

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp4_srt

0xbe6a,	// (0x00014afd) bg_active_tab_pane_g3_cp4_srt

0x824f,	// (0x00010ee2) tabs_3_long_active_pane_srt_ParamLimits

0x824f,	// (0x00010ee2) tabs_3_long_active_pane_srt

0x824f,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x824f,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt

0x824f,	// (0x00010ee2) tabs_3_long_passive_pane_srt_ParamLimits

0x824f,	// (0x00010ee2) tabs_3_long_passive_pane_srt

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp5_srt

0x98ab,	// (0x0001253e) bg_passive_tab_pane_g1_cp5_srt

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp5_srt

0x98b4,	// (0x00012547) bg_passive_tab_pane_g3_cp5_srt

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp5_srt_ParamLimits

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp5_srt

0xbe4f,	// (0x00014ae2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe4f,	// (0x00014ae2) tabs_3_long_active_pane_srt_t1

0x98ab,	// (0x0001253e) bg_active_tab_pane_g1_cp5_srt

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp5_srt

0x98b4,	// (0x00012547) bg_active_tab_pane_g3_cp5_srt

0xbe41,	// (0x00014ad4) navi_text_pane_srt_t1

0xbe39,	// (0x00014acc) navi_icon_pane_srt_g1

0x9d99,	// (0x00012a2c) midp_editing_number_pane_srt

0x9bd9,	// (0x0001286c) midp_ticker_pane_srt

0x9da1,	// (0x00012a34) midp_ticker_pane_srt_g1

0x9da9,	// (0x00012a3c) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00018440) midp_ticker_pane_srt_g

0x9db1,	// (0x00012a44) midp_ticker_pane_srt_t1

0xbe2a,	// (0x00014abd) midp_editing_number_pane_t1_copy1

0x9be1,	// (0x00012874) listscroll_midp_pane

0x9be1,	// (0x00012874) midp_form_pane

0x9c51,	// (0x000128e4) midp_info_popup_window_ParamLimits

0x9c51,	// (0x000128e4) midp_info_popup_window

0x8fc8,	// (0x00011c5b) bg_popup_sub_pane_cp50_ParamLimits

0x8fc8,	// (0x00011c5b) bg_popup_sub_pane_cp50

0xaf46,	// (0x00013bd9) listscroll_midp_info_pane_ParamLimits

0xaf46,	// (0x00013bd9) listscroll_midp_info_pane

0xaf2e,	// (0x00013bc1) listscroll_form_midp_pane_ParamLimits

0xaf2e,	// (0x00013bc1) listscroll_form_midp_pane

0xaf3a,	// (0x00013bcd) scroll_bar_cp050

0xaf0e,	// (0x00013ba1) list_midp_pane

0xcddd,	// (0x00015a70) signal_pane_g2_cp

0xae48,	// (0x00013adb) listscroll_midp_info_pane_t1_ParamLimits

0xae48,	// (0x00013adb) listscroll_midp_info_pane_t1

0xae60,	// (0x00013af3) listscroll_midp_info_pane_t2_ParamLimits

0xae60,	// (0x00013af3) listscroll_midp_info_pane_t2

0xae9e,	// (0x00013b31) listscroll_midp_info_pane_t3_ParamLimits

0xae9e,	// (0x00013b31) listscroll_midp_info_pane_t3

0xaed8,	// (0x00013b6b) listscroll_midp_info_pane_t4_ParamLimits

0xaed8,	// (0x00013b6b) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x000184f1) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x000184f1) listscroll_midp_info_pane_t

0x9086,	// (0x00011d19) scroll_pane_cp21

0xadec,	// (0x00013a7f) form_midp_field_choice_group_pane

0xadf5,	// (0x00013a88) form_midp_field_text_pane

0xae2e,	// (0x00013ac1) form_midp_field_time_pane

0xae36,	// (0x00013ac9) form_midp_gauge_slider_pane

0xae3f,	// (0x00013ad2) form_midp_gauge_wait_pane

0x7eda,	// (0x00010b6d) form_midp_image_pane

0xadb0,	// (0x00013a43) list_single_midp_pane_ParamLimits

0xadb0,	// (0x00013a43) list_single_midp_pane

0xad60,	// (0x000139f3) form_midp_field_text_pane_t1

0xab2b,	// (0x000137be) input_focus_pane_cp050

0xad9f,	// (0x00013a32) list_midp_form_text_pane

0xad2f,	// (0x000139c2) form_midp_field_choice_group_pane_t1

0xad3d,	// (0x000139d0) input_focus_pane_cp051

0xad51,	// (0x000139e4) list_midp_choice_pane

0x7eda,	// (0x00010b6d) status_idle_pane

0xad13,	// (0x000139a6) form_midp_field_time_pane_t1

0x7ed0,	// (0x00010b63) wait_anim_pane_g2_copy1

0xad21,	// (0x000139b4) form_midp_field_time_pane_t2

0x0001,

0x9d01,	// (0x00012994) aid_navinavi_width_2_pane

0xf859,	// (0x000184ec) form_midp_field_time_pane_t

0x7eda,	// (0x00010b6d) input_focus_pane_cp052

0x7eda,	// (0x00010b6d) bg_input_focus_pane_cp040

0xacd3,	// (0x00013966) form_midp_gauge_slider_pane_t1

0xace1,	// (0x00013974) form_midp_gauge_slider_pane_t2

0xacef,	// (0x00013982) form_midp_gauge_slider_pane_t3

0xacfd,	// (0x00013990) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x000184e3) form_midp_gauge_slider_pane_t

0xad0b,	// (0x0001399e) form_midp_slider_pane

0x7fba,	// (0x00010c4d) bg_input_focus_pane_cp041_ParamLimits

0x7fba,	// (0x00010c4d) bg_input_focus_pane_cp041

0xaca0,	// (0x00013933) form_midp_gauge_wait_pane_t1_ParamLimits

0xaca0,	// (0x00013933) form_midp_gauge_wait_pane_t1

0xacb2,	// (0x00013945) form_midp_gauge_wait_pane_t2_ParamLimits

0xacb2,	// (0x00013945) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x000184de) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x000184de) form_midp_gauge_wait_pane_t

0xacc4,	// (0x00013957) form_midp_wait_pane_ParamLimits

0xacc4,	// (0x00013957) form_midp_wait_pane

0xac6a,	// (0x000138fd) form_midp_image_pane_g1

0xac73,	// (0x00013906) form_midp_image_pane_t1

0xac82,	// (0x00013915) form_midp_image_pane_t2

0xac91,	// (0x00013924) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x000184d7) form_midp_image_pane_t

0xac52,	// (0x000138e5) list_single_midp_pane_g1

0xac5b,	// (0x000138ee) list_single_midp_pane_t1

0xac22,	// (0x000138b5) list_midp_form_item_pane_ParamLimits

0xac22,	// (0x000138b5) list_midp_form_item_pane

0x9ca9,	// (0x0001293c) list_midp_form_item_pane_t1

0x9cb8,	// (0x0001294b) midp_ticker_pane_g1

0x9cc4,	// (0x00012957) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00018426) midp_ticker_pane_g

0x9cd0,	// (0x00012963) midp_ticker_pane_t1

0xc0a0,	// (0x00014d33) midp_editing_number_pane_t1

0xc07e,	// (0x00014d11) midp_editing_number_pane

0xc08d,	// (0x00014d20) midp_ticker_pane

0xbdf2,	// (0x00014a85) ai_message_heading_pane

0x7eda,	// (0x00010b6d) bg_popup_window_pane_cp14

0xbdfa,	// (0x00014a8d) listscroll_ai_message_pane

0xbd7c,	// (0x00014a0f) ai_message_heading_pane_g1_ParamLimits

0xbd7c,	// (0x00014a0f) ai_message_heading_pane_g1

0xbd88,	// (0x00014a1b) ai_message_heading_pane_g2_ParamLimits

0xbd88,	// (0x00014a1b) ai_message_heading_pane_g2

0xbd94,	// (0x00014a27) ai_message_heading_pane_g3_ParamLimits

0xbd94,	// (0x00014a27) ai_message_heading_pane_g3

0xbda0,	// (0x00014a33) ai_message_heading_pane_g4_ParamLimits

0xbda0,	// (0x00014a33) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x00018618) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x00018618) ai_message_heading_pane_g

0xbdac,	// (0x00014a3f) ai_message_heading_pane_t1_ParamLimits

0xbdac,	// (0x00014a3f) ai_message_heading_pane_t1

0xbdc6,	// (0x00014a59) ai_message_heading_pane_t2_ParamLimits

0xbdc6,	// (0x00014a59) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x00018621) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x00018621) ai_message_heading_pane_t

0xbdd8,	// (0x00014a6b) bg_popup_heading_pane_cp1_ParamLimits

0xbdd8,	// (0x00014a6b) bg_popup_heading_pane_cp1

0xbd6a,	// (0x000149fd) list_ai_message_pane_ParamLimits

0xbd6a,	// (0x000149fd) list_ai_message_pane

0x9086,	// (0x00011d19) scroll_pane_cp10

0xbd06,	// (0x00014999) list_ai_message_pane_g1

0xbd0e,	// (0x000149a1) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x000185f5) list_ai_message_pane_g

0xbd16,	// (0x000149a9) list_ai_message_pane_t1_ParamLimits

0xbd16,	// (0x000149a9) list_ai_message_pane_t1

0xbd2b,	// (0x000149be) list_ai_message_pane_t2_ParamLimits

0xbd2b,	// (0x000149be) list_ai_message_pane_t2

0xbd40,	// (0x000149d3) list_ai_message_pane_t3_ParamLimits

0xbd40,	// (0x000149d3) list_ai_message_pane_t3

0xbd55,	// (0x000149e8) list_ai_message_pane_t4_ParamLimits

0xbd55,	// (0x000149e8) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x000185fa) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x000185fa) list_ai_message_pane_t

0xbcf0,	// (0x00014983) cell_ai_soft_ind_pane_ParamLimits

0xbcf0,	// (0x00014983) cell_ai_soft_ind_pane

0x9ce2,	// (0x00012975) cell_ai_soft_ind_pane_g1_ParamLimits

0x9ce2,	// (0x00012975) cell_ai_soft_ind_pane_g1

0x7eda,	// (0x00010b6d) grid_highlight_cp1

0x9cef,	// (0x00012982) text_secondary_cp56_ParamLimits

0x9cef,	// (0x00012982) text_secondary_cp56

0xbcc5,	// (0x00014958) example_general_pane_ParamLimits

0xbcc5,	// (0x00014958) example_general_pane

0xbcd1,	// (0x00014964) example_parent_pane_g1_ParamLimits

0xbcd1,	// (0x00014964) example_parent_pane_g1

0xbcdd,	// (0x00014970) example_parent_pane_t1_ParamLimits

0xbcdd,	// (0x00014970) example_parent_pane_t1

0xa2ec,	// (0x00012f7f) popup_preview_text_window_ParamLimits

0xa2ec,	// (0x00012f7f) popup_preview_text_window

0x9b08,	// (0x0001279b) list_single_pane_cp2_g4

0x82f9,	// (0x00010f8c) bg_popup_preview_window_pane_ParamLimits

0x82f9,	// (0x00010f8c) bg_popup_preview_window_pane

0xb9fc,	// (0x0001468f) popup_preview_text_window_t1_ParamLimits

0xb9fc,	// (0x0001468f) popup_preview_text_window_t1

0xba1a,	// (0x000146ad) popup_preview_text_window_t2_ParamLimits

0xba1a,	// (0x000146ad) popup_preview_text_window_t2

0xba63,	// (0x000146f6) popup_preview_text_window_t3_ParamLimits

0xba63,	// (0x000146f6) popup_preview_text_window_t3

0xbaa8,	// (0x0001473b) popup_preview_text_window_t4_ParamLimits

0xbaa8,	// (0x0001473b) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x000185c9) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x000185c9) popup_preview_text_window_t

0xbb26,	// (0x000147b9) scroll_pane_cp11

0xaa11,	// (0x000136a4) bg_popup_preview_window_pane_g1

0xb9bc,	// (0x0001464f) bg_popup_preview_window_pane_g2

0xb9c4,	// (0x00014657) bg_popup_preview_window_pane_g3

0xb9cc,	// (0x0001465f) bg_popup_preview_window_pane_g4

0xb9d4,	// (0x00014667) bg_popup_preview_window_pane_g5

0xb9dc,	// (0x0001466f) bg_popup_preview_window_pane_g6

0xb9e4,	// (0x00014677) bg_popup_preview_window_pane_g7

0xb9ec,	// (0x0001467f) bg_popup_preview_window_pane_g8

0x6260,	// (0x0000eef3) aid_popup_width_pane

0xa2ca,	// (0x00012f5d) popup_midp_note_alarm_window_ParamLimits

0xa2ca,	// (0x00012f5d) popup_midp_note_alarm_window

0x8d63,	// (0x000119f6) data_form_pane_ParamLimits

0x8d6f,	// (0x00011a02) form_field_data_pane_g1

0x8d79,	// (0x00011a0c) form_field_data_pane_t1_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_ParamLimits

0x8da1,	// (0x00011a34) data_form_wide_pane_ParamLimits

0x8dad,	// (0x00011a40) form_field_data_wide_pane_g1

0x8dd9,	// (0x00011a6c) form_field_data_wide_pane_t1_ParamLimits

0x8598,	// (0x0001122b) input_focus_pane_cp6_ParamLimits

0x9031,	// (0x00011cc4) input_popup_find_pane_g1_ParamLimits

0x9031,	// (0x00011cc4) input_popup_find_pane_g1

0x67bc,	// (0x0000f44f) aid_navi_side_left_pane

0x67d1,	// (0x0000f464) aid_navi_side_right_pane

0xb3db,	// (0x0001406e) bg_popup_window_pane_cp30_ParamLimits

0xb3db,	// (0x0001406e) bg_popup_window_pane_cp30

0xb455,	// (0x000140e8) popup_midp_note_alarm_window_g1_ParamLimits

0xb455,	// (0x000140e8) popup_midp_note_alarm_window_g1

0xb485,	// (0x00014118) popup_midp_note_alarm_window_t1_ParamLimits

0xb485,	// (0x00014118) popup_midp_note_alarm_window_t1

0xb526,	// (0x000141b9) popup_midp_note_alarm_window_t2_ParamLimits

0xb526,	// (0x000141b9) popup_midp_note_alarm_window_t2

0xb5d4,	// (0x00014267) popup_midp_note_alarm_window_t3_ParamLimits

0xb5d4,	// (0x00014267) popup_midp_note_alarm_window_t3

0xb5fc,	// (0x0001428f) popup_midp_note_alarm_window_t4_ParamLimits

0xb5fc,	// (0x0001428f) popup_midp_note_alarm_window_t4

0xb61c,	// (0x000142af) popup_midp_note_alarm_window_t5_ParamLimits

0xb61c,	// (0x000142af) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00018566) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00018566) popup_midp_note_alarm_window_t

0xb6c8,	// (0x0001435b) wait_bar_pane_cp1_ParamLimits

0xb6c8,	// (0x0001435b) wait_bar_pane_cp1

0x7eda,	// (0x00010b6d) wait_anim_pane_copy1

0x7eda,	// (0x00010b6d) wait_border_pane_copy1

0xb0b9,	// (0x00013d4c) wait_border_pane_g1_copy1

0x8df3,	// (0x00011a86) form_field_popup_pane_g1

0x8dfb,	// (0x00011a8e) form_field_popup_pane_t1_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_cp7_ParamLimits

0x8e15,	// (0x00011aa8) list_form_pane_ParamLimits

0x8e21,	// (0x00011ab4) form_field_popup_wide_pane_g1

0x8e29,	// (0x00011abc) form_field_popup_wide_pane_t1_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_cp8_ParamLimits

0x8e3e,	// (0x00011ad1) list_form_wide_pane_ParamLimits

0xc2b6,	// (0x00014f49) aid_size_cell_graphic_pane

0x8f17,	// (0x00011baa) data_form_pane_t1_ParamLimits

0xc04b,	// (0x00014cde) data_form_wide_pane_t1_ParamLimits

0xa5c5,	// (0x00013258) bg_status_flat_pane

0x7f1a,	// (0x00010bad) title_pane_t1_ParamLimits

0x7f82,	// (0x00010c15) title_pane_t2_ParamLimits

0x7fa8,	// (0x00010c3b) title_pane_t3_ParamLimits

0xf59b,	// (0x0001822e) title_pane_t_ParamLimits

0x9501,	// (0x00012194) level_1_signal_ParamLimits

0x950e,	// (0x000121a1) level_2_signal_ParamLimits

0x951b,	// (0x000121ae) level_3_signal_ParamLimits

0x9528,	// (0x000121bb) level_4_signal_ParamLimits

0x9535,	// (0x000121c8) level_5_signal_ParamLimits

0x9542,	// (0x000121d5) level_6_signal_ParamLimits

0x954f,	// (0x000121e2) level_7_signal_ParamLimits

0x9501,	// (0x00012194) level_1_battery_ParamLimits

0x950e,	// (0x000121a1) level_2_battery_ParamLimits

0x951b,	// (0x000121ae) level_3_battery_ParamLimits

0x9528,	// (0x000121bb) level_4_battery_ParamLimits

0x9535,	// (0x000121c8) level_5_battery_ParamLimits

0x9542,	// (0x000121d5) level_6_battery_ParamLimits

0x954f,	// (0x000121e2) level_7_battery_ParamLimits

0xb2e0,	// (0x00013f73) bg_status_flat_pane_g1

0xb2e8,	// (0x00013f7b) bg_status_flat_pane_g2

0xb2f0,	// (0x00013f83) bg_status_flat_pane_g3

0xb2f8,	// (0x00013f8b) bg_status_flat_pane_g4

0xb300,	// (0x00013f93) bg_status_flat_pane_g5

0xb308,	// (0x00013f9b) bg_status_flat_pane_g6

0xb310,	// (0x00013fa3) bg_status_flat_pane_g7

0x7fd0,	// (0x00010c63) tabs_3_active_pane_t1_ParamLimits

0x7fd0,	// (0x00010c63) tabs_3_passive_pane_t1_ParamLimits

0x7fea,	// (0x00010c7d) tabs_4_active_pane_t1_ParamLimits

0x7fea,	// (0x00010c7d) tabs_4_1_passive_pane_t1_ParamLimits

0x90c6,	// (0x00011d59) tabs_2_active_pane_t1_ParamLimits

0x90c6,	// (0x00011d59) tabs_2_passive_pane_t1_ParamLimits

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp4_ParamLimits

0x90e6,	// (0x00011d79) tabs_2_long_active_pane_t1_ParamLimits

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp4_ParamLimits

0x6d93,	// (0x0000fa26) list_single_midp_graphic_pane_t1_ParamLimits

0x90d8,	// (0x00011d6b) bg_active_tab_pane_cp5_ParamLimits

0x9105,	// (0x00011d98) tabs_3_long_active_pane_t1_ParamLimits

0x90f9,	// (0x00011d8c) bg_passive_tab_pane_cp5_ParamLimits

0x6d93,	// (0x0000fa26) list_single_midp_graphic_pane_t1

0xa5c5,	// (0x00013258) bg_status_flat_pane_ParamLimits

0xa688,	// (0x0001331b) indicator_pane_cp2_ParamLimits

0xa688,	// (0x0001331b) indicator_pane_cp2

0xa7ac,	// (0x0001343f) navi_pane_srt_ParamLimits

0xa7ac,	// (0x0001343f) navi_pane_srt

0xa7d0,	// (0x00013463) popup_clock_digital_analogue_window_cp1

0x80b1,	// (0x00010d44) indicator_pane_t1

0x9bd9,	// (0x0001286c) copy_highlight_pane

0x9bd9,	// (0x0001286c) cursor_graphics_pane

0x9bd9,	// (0x0001286c) graphic_within_text_pane

0x9bd9,	// (0x0001286c) link_highlight_pane

0xbae9,	// (0x0001477c) popup_preview_text_window_t5_ParamLimits

0xbae9,	// (0x0001477c) popup_preview_text_window_t5

0x9d09,	// (0x0001299c) cursor_digital_pane

0x9d09,	// (0x0001299c) cursor_primary_pane

0x9d1a,	// (0x000129ad) cursor_primary_small_pane

0x9d22,	// (0x000129b5) cursor_secondary_pane

0x9d2a,	// (0x000129bd) cursor_title_pane

0x9d09,	// (0x0001299c) link_highlight_digital_pane

0x9d11,	// (0x000129a4) link_highlight_primary_pane

0x9d1a,	// (0x000129ad) link_highlight_primary_small_pane

0x9d22,	// (0x000129b5) link_highlight_secondary_pane

0x9d2a,	// (0x000129bd) link_highlight_title_pane

0x9d09,	// (0x0001299c) copy_highlight_digital_pane

0x9d09,	// (0x0001299c) copy_highlight_primary_pane

0x9d1a,	// (0x000129ad) copy_highlight_primary_small_pane

0x9d22,	// (0x000129b5) copy_highlight_secondary_pane

0x9d2a,	// (0x000129bd) copy_highlight_title_pane

0x9d22,	// (0x000129b5) graphic_text_digital_pane

0xb37e,	// (0x00014011) graphic_text_primary_pane

0xb387,	// (0x0001401a) graphic_text_primary_small_pane

0x9d1a,	// (0x000129ad) graphic_text_secondary_pane

0x9d09,	// (0x0001299c) graphic_text_title_pane

0x9d32,	// (0x000129c5) cursor_primary_pane_g1

0xb370,	// (0x00014003) cursor_text_primary_t1

0xb358,	// (0x00013feb) cursor_primary_small_pane_g1

0xb362,	// (0x00013ff5) cursor_text_primary_small_t1

0xb340,	// (0x00013fd3) cursor_primary_small_pane_g1_copy1

0xb34a,	// (0x00013fdd) cursor_text_primary_small_t1_copy1

0xb328,	// (0x00013fbb) cursor_text_title_t1

0xb336,	// (0x00013fc9) cursor_title_pane_g1

0x9d32,	// (0x000129c5) cursor_digital_pane_g1

0x9d3c,	// (0x000129cf) cursor_text_digital_t1

0xb2c9,	// (0x00013f5c) link_highlight_primary_pane_g1

0xb2d1,	// (0x00013f64) link_highlight_primary_pane_t1

0x9d4a,	// (0x000129dd) link_highlight_primary_small_pane_g1

0x9d52,	// (0x000129e5) link_highlight_primary_small_pane_t1

0x9d4a,	// (0x000129dd) link_highlight_secondary_pane_g1

0x9d61,	// (0x000129f4) link_highlight_secondary_pane_t1

0xb23d,	// (0x00013ed0) link_highlight_title_pane_g1

0xb245,	// (0x00013ed8) link_highlight_title_pane_t1

0xb226,	// (0x00013eb9) link_highlight_digital_pane_g1

0xb22e,	// (0x00013ec1) link_highlight_digital_pane_t1

0xb0fe,	// (0x00013d91) copy_highlight_primary_pane_g1

0xb106,	// (0x00013d99) copy_highlight_primary_pane_t1

0xb0d8,	// (0x00013d6b) copy_highlight_primary_small_pane_g1

0xb0ef,	// (0x00013d82) copy_highlight_primary_small_pane_t1

0x9d70,	// (0x00012a03) copy_highlight_secondary_pane_g1

0x9d78,	// (0x00012a0b) copy_highlight_secondary_pane_t1

0xb0d8,	// (0x00013d6b) copy_highlight_title_pane_g1

0xb0e0,	// (0x00013d73) copy_highlight_title_pane_t1

0xb0fe,	// (0x00013d91) copy_highlight_digital_pane_g1

0xc484,	// (0x00015117) copy_highlight_digital_pane_t1

0xc3d8,	// (0x0001506b) graphic_text_primary_pane_g1

0xc468,	// (0x000150fb) graphic_text_primary_pane_t1

0xc476,	// (0x00015109) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x00018695) graphic_text_primary_pane_t

0xc444,	// (0x000150d7) graphic_text_primary_small_pane_g1

0xc44c,	// (0x000150df) graphic_text_primary_small_pane_t1

0xc45a,	// (0x000150ed) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x00018690) graphic_text_primary_small_pane_t

0xc420,	// (0x000150b3) graphic_text_secondary_pane_g1

0xc428,	// (0x000150bb) graphic_text_secondary_pane_t1

0xc436,	// (0x000150c9) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0001868b) graphic_text_secondary_pane_t

0xc3fc,	// (0x0001508f) graphic_text_title_pane_g1

0xc404,	// (0x00015097) graphic_text_title_pane_t1

0xc412,	// (0x000150a5) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x00018686) graphic_text_title_pane_t

0xc3d8,	// (0x0001506b) graphic_text_digital_pane_g1

0xc3e0,	// (0x00015073) graphic_text_digital_pane_t1

0xc3ee,	// (0x00015081) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x00018681) graphic_text_digital_pane_t

0x7fba,	// (0x00010c4d) navi_icon_pane_srt_ParamLimits

0x7fba,	// (0x00010c4d) navi_icon_pane_srt

0x7eda,	// (0x00010b6d) navi_midp_pane_srt

0x7eda,	// (0x00010b6d) navi_navi_pane_srt

0x7fba,	// (0x00010c4d) navi_text_pane_srt_ParamLimits

0x7fba,	// (0x00010c4d) navi_text_pane_srt

0xc3a3,	// (0x00015036) navi_navi_icon_text_pane_srt

0xc3ab,	// (0x0001503e) navi_navi_pane_srt_g1_ParamLimits

0xc3ab,	// (0x0001503e) navi_navi_pane_srt_g1

0xc3bd,	// (0x00015050) navi_navi_pane_srt_g2_ParamLimits

0xc3bd,	// (0x00015050) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x0001867c) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x0001867c) navi_navi_pane_srt_g

0xc3cf,	// (0x00015062) navi_navi_tabs_pane_srt

0xc3a3,	// (0x00015036) navi_navi_text_pane_srt

0xc3a3,	// (0x00015036) navi_navi_volume_pane_srt

0xc394,	// (0x00015027) navi_navi_text_pane_srt_t1

0x7113,	// (0x0000fda6) navi_navi_volume_pane_srt_g1

0x711b,	// (0x0000fdae) volume_small_pane_srt_ParamLimits

0x711b,	// (0x0000fdae) volume_small_pane_srt

0x6a9c,	// (0x0000f72f) volume_small_pane_srt_g1_ParamLimits

0x6a9c,	// (0x0000f72f) volume_small_pane_srt_g1

0x6aac,	// (0x0000f73f) volume_small_pane_srt_g2_ParamLimits

0x6aac,	// (0x0000f73f) volume_small_pane_srt_g2

0x6abd,	// (0x0000f750) volume_small_pane_srt_g3_ParamLimits

0x6abd,	// (0x0000f750) volume_small_pane_srt_g3

0x6ace,	// (0x0000f761) volume_small_pane_srt_g4_ParamLimits

0x6ace,	// (0x0000f761) volume_small_pane_srt_g4

0x6adf,	// (0x0000f772) volume_small_pane_srt_g5_ParamLimits

0x6adf,	// (0x0000f772) volume_small_pane_srt_g5

0x6af0,	// (0x0000f783) volume_small_pane_srt_g6_ParamLimits

0x6af0,	// (0x0000f783) volume_small_pane_srt_g6

0x6b01,	// (0x0000f794) volume_small_pane_srt_g7_ParamLimits

0x6b01,	// (0x0000f794) volume_small_pane_srt_g7

0x6b12,	// (0x0000f7a5) volume_small_pane_srt_g8_ParamLimits

0x6b12,	// (0x0000f7a5) volume_small_pane_srt_g8

0x6b23,	// (0x0000f7b6) volume_small_pane_srt_g9_ParamLimits

0x6b23,	// (0x0000f7b6) volume_small_pane_srt_g9

0x6b34,	// (0x0000f7c7) volume_small_pane_srt_g10_ParamLimits

0x6b34,	// (0x0000f7c7) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001842b) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001842b) volume_small_pane_srt_g

0x83a2,	// (0x00011035) query_popup_data_pane_cp2

0xc37a,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc37a,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1

0xb37e,	// (0x00014011) navi_tabs_2_long_pane_srt

0xb37e,	// (0x00014011) navi_tabs_2_pane_srt

0xb37e,	// (0x00014011) navi_tabs_3_long_pane_srt

0xb37e,	// (0x00014011) navi_tabs_3_pane_srt

0xb37e,	// (0x00014011) navi_tabs_4_pane_srt

0x70f3,	// (0x0000fd86) tabs_2_active_pane_srt_ParamLimits

0x70f3,	// (0x0000fd86) tabs_2_active_pane_srt

0x7103,	// (0x0000fd96) tabs_2_passive_pane_srt_ParamLimits

0x7103,	// (0x0000fd96) tabs_2_passive_pane_srt

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp1_srt

0xc346,	// (0x00014fd9) bg_passive_tab_pane_g1_cp1_srt

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp1_srt

0xc34f,	// (0x00014fe2) bg_passive_tab_pane_g3_cp1_srt

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp1_srt

0xc358,	// (0x00014feb) tabs_2_active_pane_srt_g1

0xc360,	// (0x00014ff3) tabs_2_active_pane_srt_t1_ParamLimits

0xc360,	// (0x00014ff3) tabs_2_active_pane_srt_t1

0xc346,	// (0x00014fd9) bg_active_tab_pane_g1_cp1_srt

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp1_srt

0xc34f,	// (0x00014fe2) bg_active_tab_pane_g3_cp1_srt

0x70c0,	// (0x0000fd53) tabs_3_active_pane_srt_ParamLimits

0x70c0,	// (0x0000fd53) tabs_3_active_pane_srt

0x70d1,	// (0x0000fd64) tabs_3_passive_pane_cp_srt_ParamLimits

0x70d1,	// (0x0000fd64) tabs_3_passive_pane_cp_srt

0x70e2,	// (0x0000fd75) tabs_3_passive_pane_srt_ParamLimits

0x70e2,	// (0x0000fd75) tabs_3_passive_pane_srt

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9f5f,	// (0x00012bf2) bg_passive_tab_pane_cp2_srt

0x9d87,	// (0x00012a1a) bg_passive_tab_pane_g1_cp2_srt

0x9821,	// (0x000124b4) bg_passive_tab_pane_g2_cp2_srt

0x9d90,	// (0x00012a23) bg_passive_tab_pane_g3_cp2_srt

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fba,	// (0x00010c4d) bg_active_tab_pane_cp2_srt

0xc32c,	// (0x00014fbf) tabs_3_active_pane_srt_g1

0xc334,	// (0x00014fc7) tabs_3_active_pane_srt_t1_ParamLimits

0xc334,	// (0x00014fc7) tabs_3_active_pane_srt_t1

0x9d87,	// (0x00012a1a) bg_active_tab_pane_g1_cp2_srt

0x9821,	// (0x000124b4) bg_active_tab_pane_g2_cp2_srt

0x9d90,	// (0x00012a23) bg_active_tab_pane_g3_cp2_srt

0x7078,	// (0x0000fd0b) tabs_4_active_pane_srt_ParamLimits

0x7078,	// (0x0000fd0b) tabs_4_active_pane_srt

0x708a,	// (0x0000fd1d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x708a,	// (0x0000fd1d) tabs_4_passive_pane_cp2_srt

0x9ee5,	// (0x00012b78) aid_size_cell_toolbar

0x90f9,	// (0x00011d8c) main_idle_act_pane_ParamLimits

0xa0fe,	// (0x00012d91) popup_large_graphic_colour_window_ParamLimits

0xa45d,	// (0x000130f0) popup_toolbar_window_ParamLimits

0xa45d,	// (0x000130f0) popup_toolbar_window

0xc0ce,	// (0x00014d61) list_single_graphic_2heading_pane_ParamLimits

0xc0ce,	// (0x00014d61) list_single_graphic_2heading_pane

0x92b5,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane

0x92c7,	// (0x00011f5a) aid_size_cell_apps_grid_prt_pane

0x9f5f,	// (0x00012bf2) bg_wml_button_pane_cp1_ParamLimits

0x9f5f,	// (0x00012bf2) bg_wml_button_pane_cp1

0xad60,	// (0x000139f3) form_midp_field_text_pane_t1_ParamLimits

0xab2b,	// (0x000137be) input_focus_pane_cp050_ParamLimits

0xad9f,	// (0x00013a32) list_midp_form_text_pane_ParamLimits

0xad3d,	// (0x000139d0) input_focus_pane_cp051_ParamLimits

0xad51,	// (0x000139e4) list_midp_choice_pane_ParamLimits

0xabbc,	// (0x0001384f) list_single_2graphic_pane_cp3_ParamLimits

0xabbc,	// (0x0001384f) list_single_2graphic_pane_cp3

0xabe8,	// (0x0001387b) list_single_midp_graphic_pane_ParamLimits

0xabe8,	// (0x0001387b) list_single_midp_graphic_pane

0x6c98,	// (0x0000f92b) list_single_graphic_2heading_pane_g1_ParamLimits

0x6c98,	// (0x0000f92b) list_single_graphic_2heading_pane_g1

0x6ca4,	// (0x0000f937) list_single_graphic_2heading_pane_g4_ParamLimits

0x6ca4,	// (0x0000f937) list_single_graphic_2heading_pane_g4

0x6cb0,	// (0x0000f943) list_single_graphic_2heading_pane_g5_ParamLimits

0x6cb0,	// (0x0000f943) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001847e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001847e) list_single_graphic_2heading_pane_g

0x6cbc,	// (0x0000f94f) list_single_graphic_2heading_pane_t1_ParamLimits

0x6cbc,	// (0x0000f94f) list_single_graphic_2heading_pane_t1

0x6cd0,	// (0x0000f963) list_single_graphic_2heading_pane_t2_ParamLimits

0x6cd0,	// (0x0000f963) list_single_graphic_2heading_pane_t2

0x6cec,	// (0x0000f97f) list_single_graphic_2heading_pane_t3_ParamLimits

0x6cec,	// (0x0000f97f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00018485) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00018485) list_single_graphic_2heading_pane_t

0xa92d,	// (0x000135c0) bg_popup_sub_pane_cp2

0xa957,	// (0x000135ea) grid_toobar_pane

0x6d04,	// (0x0000f997) cell_toolbar_pane_ParamLimits

0x6d04,	// (0x0000f997) cell_toolbar_pane

0xa9b5,	// (0x00013648) cell_toolbar_pane_g1_ParamLimits

0xa9b5,	// (0x00013648) cell_toolbar_pane_g1

0xa9c9,	// (0x0001365c) cell_toolbar_pane_g2_ParamLimits

0xa9c9,	// (0x0001365c) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x00018493) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x00018493) cell_toolbar_pane_g

0xa9eb,	// (0x0001367e) grid_highlight_pane_cp2_ParamLimits

0xa9eb,	// (0x0001367e) grid_highlight_pane_cp2

0xaa05,	// (0x00013698) toolbar_button_pane

0xaa11,	// (0x000136a4) toolbar_button_pane_g1

0xaa19,	// (0x000136ac) toolbar_button_pane_g2

0xaa21,	// (0x000136b4) toolbar_button_pane_g3

0xaa29,	// (0x000136bc) toolbar_button_pane_g4

0xaa31,	// (0x000136c4) toolbar_button_pane_g5

0xaa39,	// (0x000136cc) toolbar_button_pane_g6

0xaa41,	// (0x000136d4) toolbar_button_pane_g7

0xaa49,	// (0x000136dc) toolbar_button_pane_g8

0xaa51,	// (0x000136e4) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x00018498) toolbar_button_pane_g

0x6d3c,	// (0x0000f9cf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6d3c,	// (0x0000f9cf) list_single_2graphic_pane_g1_cp3

0x6d48,	// (0x0000f9db) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6d48,	// (0x0000f9db) list_single_2graphic_pane_g2_cp3

0x6d59,	// (0x0000f9ec) list_single_2graphic_pane_g3_cp3

0x6d61,	// (0x0000f9f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6d61,	// (0x0000f9f4) list_single_2graphic_pane_g4_cp3

0x6d6d,	// (0x0000fa00) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6d6d,	// (0x0000fa00) list_single_2graphic_pane_t1_cp3

0x6d87,	// (0x0000fa1a) list_single_midp_graphic_pane_g2_ParamLimits

0x6d87,	// (0x0000fa1a) list_single_midp_graphic_pane_g2

0x9eed,	// (0x00012b80) aid_zoom_text_primary

0x9ef5,	// (0x00012b88) aid_zoom_text_secondary

0x9e44,	// (0x00012ad7) status_small_pane_g7_ParamLimits

0x9e44,	// (0x00012ad7) status_small_pane_g7

0x9e67,	// (0x00012afa) status_small_pane_t1_ParamLimits

0x7ef1,	// (0x00010b84) title_pane_g2

0x0003,

0xf592,	// (0x00018225) title_pane_g

0x8443,	// (0x000110d6) aid_size_cell_colour_1_pane_ParamLimits

0x8443,	// (0x000110d6) aid_size_cell_colour_1_pane

0x8457,	// (0x000110ea) aid_size_cell_colour_2_pane_ParamLimits

0x8457,	// (0x000110ea) aid_size_cell_colour_2_pane

0x846b,	// (0x000110fe) aid_size_cell_colour_3_pane_ParamLimits

0x846b,	// (0x000110fe) aid_size_cell_colour_3_pane

0x847f,	// (0x00011112) aid_size_cell_colour_4_pane_ParamLimits

0x847f,	// (0x00011112) aid_size_cell_colour_4_pane

0x66f8,	// (0x0000f38b) title_pane_stacon_g1_ParamLimits

0x66f8,	// (0x0000f38b) title_pane_stacon_g1

0xb15d,	// (0x00013df0) popup_note_wait_window_g3_ParamLimits

0xb15d,	// (0x00013df0) popup_note_wait_window_g3

0xb1d3,	// (0x00013e66) popup_note_wait_window_t5_ParamLimits

0xb1d3,	// (0x00013e66) popup_note_wait_window_t5

0x7eda,	// (0x00010b6d) main_feb_china_hwr_fs_writing_pane

0x9fe9,	// (0x00012c7c) popup_feb_china_hwr_fs_window_ParamLimits

0x9fe9,	// (0x00012c7c) popup_feb_china_hwr_fs_window

0x6da9,	// (0x0000fa3c) aid_size_cell_hwr_fs_ParamLimits

0x6da9,	// (0x0000fa3c) aid_size_cell_hwr_fs

0xab2b,	// (0x000137be) bg_popup_sub_pane_cp3_ParamLimits

0xab2b,	// (0x000137be) bg_popup_sub_pane_cp3

0x6dbe,	// (0x0000fa51) grid_hwr_fs_pane_ParamLimits

0x6dbe,	// (0x0000fa51) grid_hwr_fs_pane

0x6dd6,	// (0x0000fa69) linegrid_hwr_fs_pane_ParamLimits

0x6dd6,	// (0x0000fa69) linegrid_hwr_fs_pane

0x6de6,	// (0x0000fa79) cell_hwr_fs_pane_ParamLimits

0x6de6,	// (0x0000fa79) cell_hwr_fs_pane

0xab37,	// (0x000137ca) linegrid_hwr_fs_pane_g1_ParamLimits

0xab37,	// (0x000137ca) linegrid_hwr_fs_pane_g1

0xab43,	// (0x000137d6) linegrid_hwr_fs_pane_g2_ParamLimits

0xab43,	// (0x000137d6) linegrid_hwr_fs_pane_g2

0xab55,	// (0x000137e8) linegrid_hwr_fs_pane_g3_ParamLimits

0xab55,	// (0x000137e8) linegrid_hwr_fs_pane_g3

0x6e08,	// (0x0000fa9b) linegrid_hwr_fs_pane_g4_ParamLimits

0x6e08,	// (0x0000fa9b) linegrid_hwr_fs_pane_g4

0x6e22,	// (0x0000fab5) linegrid_hwr_fs_pane_g5_ParamLimits

0x6e22,	// (0x0000fab5) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x000184c3) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x000184c3) linegrid_hwr_fs_pane_g

0xab61,	// (0x000137f4) cell_hwr_fs_pane_g1_ParamLimits

0xab61,	// (0x000137f4) cell_hwr_fs_pane_g1

0xa866,	// (0x000134f9) cell_hwr_fs_pane_g2_ParamLimits

0xa866,	// (0x000134f9) cell_hwr_fs_pane_g2

0xab77,	// (0x0001380a) cell_hwr_fs_pane_g3_ParamLimits

0xab77,	// (0x0001380a) cell_hwr_fs_pane_g3

0xab84,	// (0x00013817) cell_hwr_fs_pane_g4_ParamLimits

0xab84,	// (0x00013817) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x000184ce) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x000184ce) cell_hwr_fs_pane_g

0x6e38,	// (0x0000facb) cell_hwr_fs_pane_t1

0x7eda,	// (0x00010b6d) grid_highlight_pane_cp6

0x7eda,	// (0x00010b6d) main_idle_act2_pane

0x906d,	// (0x00011d00) aid_inside_area_popup_secondary

0xb804,	// (0x00014497) aid_inside_area_window_primary_ParamLimits

0xb804,	// (0x00014497) aid_inside_area_window_primary

0xc493,	// (0x00015126) ai2_news_ticker_pane

0xc49b,	// (0x0001512e) aid_size_cell_ai1_link_ParamLimits

0xc49b,	// (0x0001512e) aid_size_cell_ai1_link

0xc4b5,	// (0x00015148) popup_ai2_data_window_ParamLimits

0xc4b5,	// (0x00015148) popup_ai2_data_window

0xc4c9,	// (0x0001515c) popup_ai2_link_window_ParamLimits

0xc4c9,	// (0x0001515c) popup_ai2_link_window

0xab2b,	// (0x000137be) bg_popup_sub_pane_cp4_ParamLimits

0xab2b,	// (0x000137be) bg_popup_sub_pane_cp4

0xc4dd,	// (0x00015170) grid_ai2_link_pane_ParamLimits

0xc4dd,	// (0x00015170) grid_ai2_link_pane

0xc4f4,	// (0x00015187) popup_ai2_link_window_g1_ParamLimits

0xc4f4,	// (0x00015187) popup_ai2_link_window_g1

0xc500,	// (0x00015193) popup_ai2_link_window_g2_ParamLimits

0xc500,	// (0x00015193) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0001869a) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0001869a) popup_ai2_link_window_g

0xc50f,	// (0x000151a2) ai2_mp_button_pane

0xc517,	// (0x000151aa) ai2_mp_volume_pane

0xad3d,	// (0x000139d0) bg_popup_sub_pane_cp5_ParamLimits

0xad3d,	// (0x000139d0) bg_popup_sub_pane_cp5

0xc51f,	// (0x000151b2) heading_ai2_gene_pane_ParamLimits

0xc51f,	// (0x000151b2) heading_ai2_gene_pane

0xc52b,	// (0x000151be) list_ai2_gene_pane_ParamLimits

0xc52b,	// (0x000151be) list_ai2_gene_pane

0xc573,	// (0x00015206) cell_ai2_link_pane_ParamLimits

0xc573,	// (0x00015206) cell_ai2_link_pane

0xc589,	// (0x0001521c) cell_ai2_link_pane_g1

0x7eda,	// (0x00010b6d) grid_highlight_pane_cp7

0x7130,	// (0x0000fdc3) ai2_mp_volume_pane_g1

0xc65a,	// (0x000152ed) ai2_mp_volume_pane_g2

0xc5cf,	// (0x00015262) list_ai2_gene_pane_t1

0xc662,	// (0x000152f5) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x000186b3) ai2_mp_volume_pane_g

0x7138,	// (0x0000fdcb) volume_small_pane_cp3

0xc66a,	// (0x000152fd) aid_size_cell_ai2_button

0xc672,	// (0x00015305) grid_ai2_button_pane

0xc67b,	// (0x0001530e) cell_ai2_button_pane_ParamLimits

0xc67b,	// (0x0001530e) cell_ai2_button_pane

0x7ed0,	// (0x00010b63) cell_ai2_button_pane_g1

0x7eda,	// (0x00010b6d) grid_highlight_pane_cp8

0xc61a,	// (0x000152ad) ai2_gene_pane_t1_ParamLimits

0xc61a,	// (0x000152ad) ai2_gene_pane_t1

0x9edb,	// (0x00012b6e) aid_height_parent_landscape

0xbebb,	// (0x00014b4e) aid_height_set_list

0xbecc,	// (0x00014b5f) aid_size_parent

0xc2b6,	// (0x00014f49) aid_size_cell_graphic_pane_ParamLimits

0xc53b,	// (0x000151ce) popup_ai2_data_window_g1_ParamLimits

0xc53b,	// (0x000151ce) popup_ai2_data_window_g1

0xc547,	// (0x000151da) ai2_news_ticker_pane_g1

0xc54f,	// (0x000151e2) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0001869f) ai2_news_ticker_pane_g

0xc557,	// (0x000151ea) ai2_news_ticker_pane_t1

0xc565,	// (0x000151f8) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x000186a4) ai2_news_ticker_pane_t

0xc592,	// (0x00015225) heading_ai2_gene_pane_g1

0xc59a,	// (0x0001522d) heading_ai2_gene_pane_t1_ParamLimits

0xc59a,	// (0x0001522d) heading_ai2_gene_pane_t1

0xc5af,	// (0x00015242) list_highlight_pane_cp6

0xc5b7,	// (0x0001524a) ai2_gene_pane_ParamLimits

0xc5b7,	// (0x0001524a) ai2_gene_pane

0xc5dd,	// (0x00015270) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x000186a9) list_ai2_gene_pane_t

0xc5eb,	// (0x0001527e) list_highlight_pane_cp8_ParamLimits

0xc5eb,	// (0x0001527e) list_highlight_pane_cp8

0xc5fc,	// (0x0001528f) ai2_gene_pane_g1_ParamLimits

0xc5fc,	// (0x0001528f) ai2_gene_pane_g1

0xc60e,	// (0x000152a1) ai2_gene_pane_g2_ParamLimits

0xc60e,	// (0x000152a1) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x000186ae) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x000186ae) ai2_gene_pane_g

0x87bd,	// (0x00011450) scroll_pane_cp12

0x6c57,	// (0x0000f8ea) control_pane_t3_ParamLimits

0x6c57,	// (0x0000f8ea) control_pane_t3

0x9e58,	// (0x00012aeb) status_small_pane_g8_ParamLimits

0x9e58,	// (0x00012aeb) status_small_pane_g8

0xa0cb,	// (0x00012d5e) popup_find_window_ParamLimits

0xa2de,	// (0x00012f71) popup_note_image_window_ParamLimits

0xa993,	// (0x00013626) list_double2_graphic_pane_vc_g1_ParamLimits

0xa993,	// (0x00013626) list_double2_graphic_pane_vc_g1

0x888f,	// (0x00011522) list_double2_graphic_pane_vc_g2_ParamLimits

0x888f,	// (0x00011522) list_double2_graphic_pane_vc_g2

0x889b,	// (0x0001152e) list_double2_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x0001152e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001848c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001848c) list_double2_graphic_pane_vc_g

0xa99f,	// (0x00013632) list_double2_graphic_pane_vc_t1_ParamLimits

0xa99f,	// (0x00013632) list_double2_graphic_pane_vc_t1

0x888f,	// (0x00011522) list_single_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_single_heading_pane_vc_g1

0x889b,	// (0x0001152e) list_single_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_single_heading_pane_vc_g

0xaa59,	// (0x000136ec) list_single_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136ec) list_single_heading_pane_vc_t1

0xaa6f,	// (0x00013702) list_single_heading_pane_vc_t2_ParamLimits

0xaa6f,	// (0x00013702) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x000184b2) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x000184b2) list_single_heading_pane_vc_t

0xaa83,	// (0x00013716) list_setting_number_pane_vc_g1_ParamLimits

0xaa83,	// (0x00013716) list_setting_number_pane_vc_g1

0xaa8f,	// (0x00013722) list_setting_number_pane_vc_g2_ParamLimits

0xaa8f,	// (0x00013722) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x000184b7) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x000184b7) list_setting_number_pane_vc_g

0xaa9b,	// (0x0001372e) list_setting_number_pane_vc_t1_ParamLimits

0xaa9b,	// (0x0001372e) list_setting_number_pane_vc_t1

0xaaaf,	// (0x00013742) list_setting_number_pane_vc_t2_ParamLimits

0xaaaf,	// (0x00013742) list_setting_number_pane_vc_t2

0xaacb,	// (0x0001375e) list_setting_number_pane_vc_t3_ParamLimits

0xaacb,	// (0x0001375e) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x000184bc) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x000184bc) list_setting_number_pane_vc_t

0xaaf3,	// (0x00013786) set_value_pane_vc_ParamLimits

0xaaf3,	// (0x00013786) set_value_pane_vc

0xc0ce,	// (0x00014d61) list_double2_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double2_graphic_pane_vc

0xc0ce,	// (0x00014d61) list_double2_large_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double2_large_graphic_pane_vc

0xc0ce,	// (0x00014d61) list_double2_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double2_pane_vc

0xc0ce,	// (0x00014d61) list_double_graphic_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_graphic_heading_pane_vc

0xc0ce,	// (0x00014d61) list_double_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_graphic_pane_vc

0xc0ce,	// (0x00014d61) list_double_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_heading_pane_vc

0xc0ce,	// (0x00014d61) list_double_large_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_large_graphic_pane_vc

0xc0ce,	// (0x00014d61) list_double_number_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_number_pane_vc

0xc0ce,	// (0x00014d61) list_double_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_pane_vc

0xc0ce,	// (0x00014d61) list_double_time_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_double_time_pane_vc

0xc0ce,	// (0x00014d61) list_setting_number_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_setting_number_pane_vc

0xc0ce,	// (0x00014d61) list_setting_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_setting_pane_vc

0xc0ce,	// (0x00014d61) list_single_graphic_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_single_graphic_heading_pane_vc

0xc0ce,	// (0x00014d61) list_single_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d61) list_single_heading_pane_vc

0xc0e1,	// (0x00014d74) list_single_number_heading_pane_vc_ParamLimits

0xc0e1,	// (0x00014d74) list_single_number_heading_pane_vc

0xa993,	// (0x00013626) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa993,	// (0x00013626) list_double_graphic_heading_pane_vc_g1

0x888f,	// (0x00011522) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x888f,	// (0x00011522) list_double_graphic_heading_pane_vc_g2

0x889b,	// (0x0001152e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x889b,	// (0x0001152e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001848c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001848c) list_double_graphic_heading_pane_vc_g

0xc6af,	// (0x00015342) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc6af,	// (0x00015342) list_double_graphic_heading_pane_vc_t1

0xaa59,	// (0x000136ec) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaa59,	// (0x000136ec) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x000186ba) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x000186ba) list_double_graphic_heading_pane_vc_t

0xaa83,	// (0x00013716) list_setting_pane_vc_g1_ParamLimits

0xaa83,	// (0x00013716) list_setting_pane_vc_g1

0xaa8f,	// (0x00013722) list_setting_pane_vc_g2_ParamLimits

0xaa8f,	// (0x00013722) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x000184b7) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x000184b7) list_setting_pane_vc_g

0xc8a7,	// (0x0001553a) list_setting_pane_vc_t1_ParamLimits

0xc8a7,	// (0x0001553a) list_setting_pane_vc_t1

0xc8bb,	// (0x0001554e) list_setting_pane_vc_t2_ParamLimits

0xc8bb,	// (0x0001554e) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x000186fd) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x000186fd) list_setting_pane_vc_t

0xaaf3,	// (0x00013786) set_value_pane_cp_vc_ParamLimits

0xaaf3,	// (0x00013786) set_value_pane_cp_vc

0x888f,	// (0x00011522) list_single_number_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_single_number_heading_pane_vc_g1

0x889b,	// (0x0001152e) list_single_number_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_single_number_heading_pane_vc_g

0xaa59,	// (0x000136ec) list_single_number_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136ec) list_single_number_heading_pane_vc_t1

0xc8dd,	// (0x00015570) list_single_number_heading_pane_vc_t2_ParamLimits

0xc8dd,	// (0x00015570) list_single_number_heading_pane_vc_t2

0xc8f1,	// (0x00015584) list_single_number_heading_pane_vc_t3_ParamLimits

0xc8f1,	// (0x00015584) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x00018702) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00018702) list_single_number_heading_pane_vc_t

0xa993,	// (0x00013626) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa993,	// (0x00013626) list_single_graphic_heading_pane_vc_g1

0x888f,	// (0x00011522) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x888f,	// (0x00011522) list_single_graphic_heading_pane_vc_g4

0x889b,	// (0x0001152e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x889b,	// (0x0001152e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001848c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001848c) list_single_graphic_heading_pane_vc_g

0xaa59,	// (0x000136ec) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136ec) list_single_graphic_heading_pane_vc_t1

0xc903,	// (0x00015596) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc903,	// (0x00015596) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00018709) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00018709) list_single_graphic_heading_pane_vc_t

0x888f,	// (0x00011522) list_double2_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_double2_pane_vc_g1

0x889b,	// (0x0001152e) list_double2_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_double2_pane_vc_g

0xc917,	// (0x000155aa) list_double2_pane_vc_t1_ParamLimits

0xc917,	// (0x000155aa) list_double2_pane_vc_t1

0xc92d,	// (0x000155c0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc92d,	// (0x000155c0) list_double2_large_graphic_pane_vc_g1

0x888f,	// (0x00011522) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x888f,	// (0x00011522) list_double2_large_graphic_pane_vc_g2

0x889b,	// (0x0001152e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x0001152e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001870e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001870e) list_double2_large_graphic_pane_vc_g

0xc939,	// (0x000155cc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc939,	// (0x000155cc) list_double2_large_graphic_pane_vc_t1

0xc94f,	// (0x000155e2) list_double_time_pane_vc_g1_ParamLimits

0xc94f,	// (0x000155e2) list_double_time_pane_vc_g1

0xc95b,	// (0x000155ee) list_double_time_pane_vc_g2_ParamLimits

0xc95b,	// (0x000155ee) list_double_time_pane_vc_g2

0x0001,

0xfa82,	// (0x00018715) list_double_time_pane_vc_g_ParamLimits

0xfa82,	// (0x00018715) list_double_time_pane_vc_g

0xc967,	// (0x000155fa) list_double_time_pane_vc_t1_ParamLimits

0xc967,	// (0x000155fa) list_double_time_pane_vc_t1

0xc980,	// (0x00015613) list_double_time_pane_vc_t2_ParamLimits

0xc980,	// (0x00015613) list_double_time_pane_vc_t2

0xc9a0,	// (0x00015633) list_double_time_pane_vc_t3_ParamLimits

0xc9a0,	// (0x00015633) list_double_time_pane_vc_t3

0xc9b8,	// (0x0001564b) list_double_time_pane_vc_t4_ParamLimits

0xc9b8,	// (0x0001564b) list_double_time_pane_vc_t4

0x0003,

0xfa87,	// (0x0001871a) list_double_time_pane_vc_t_ParamLimits

0xfa87,	// (0x0001871a) list_double_time_pane_vc_t

0x888f,	// (0x00011522) list_double_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_double_pane_vc_g1

0x889b,	// (0x0001152e) list_double_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_double_pane_vc_g

0xc9cc,	// (0x0001565f) list_double_pane_vc_t1_ParamLimits

0xc9cc,	// (0x0001565f) list_double_pane_vc_t1

0xc9de,	// (0x00015671) list_double_pane_vc_t2_ParamLimits

0xc9de,	// (0x00015671) list_double_pane_vc_t2

0x0001,

0xfa90,	// (0x00018723) list_double_pane_vc_t_ParamLimits

0xfa90,	// (0x00018723) list_double_pane_vc_t

0x888f,	// (0x00011522) list_double_number_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_double_number_pane_vc_g1

0x889b,	// (0x0001152e) list_double_number_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_double_number_pane_vc_g

0xc9f6,	// (0x00015689) list_double_number_pane_vc_t1_ParamLimits

0xc9f6,	// (0x00015689) list_double_number_pane_vc_t1

0xca0a,	// (0x0001569d) list_double_number_pane_vc_t2_ParamLimits

0xca0a,	// (0x0001569d) list_double_number_pane_vc_t2

0xc9de,	// (0x00015671) list_double_number_pane_vc_t3_ParamLimits

0xc9de,	// (0x00015671) list_double_number_pane_vc_t3

0x0002,

0xfa95,	// (0x00018728) list_double_number_pane_vc_t_ParamLimits

0xfa95,	// (0x00018728) list_double_number_pane_vc_t

0xca1c,	// (0x000156af) list_double_large_graphic_pane_vc_g1_ParamLimits

0xca1c,	// (0x000156af) list_double_large_graphic_pane_vc_g1

0xca28,	// (0x000156bb) list_double_large_graphic_pane_vc_g2_ParamLimits

0xca28,	// (0x000156bb) list_double_large_graphic_pane_vc_g2

0x889b,	// (0x0001152e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x0001152e) list_double_large_graphic_pane_vc_g3

0xca37,	// (0x000156ca) list_double_large_graphic_pane_vc_g4_ParamLimits

0xca37,	// (0x000156ca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9c,	// (0x0001872f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x0001872f) list_double_large_graphic_pane_vc_g

0xca43,	// (0x000156d6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xca43,	// (0x000156d6) list_double_large_graphic_pane_vc_t1

0xca55,	// (0x000156e8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xca55,	// (0x000156e8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa5,	// (0x00018738) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa5,	// (0x00018738) list_double_large_graphic_pane_vc_t

0x888f,	// (0x00011522) list_double_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x00011522) list_double_heading_pane_vc_g1

0x889b,	// (0x0001152e) list_double_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x0001152e) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x000184ad) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x000184ad) list_double_heading_pane_vc_g

0xca6e,	// (0x00015701) list_double_heading_pane_vc_t1_ParamLimits

0xca6e,	// (0x00015701) list_double_heading_pane_vc_t1

0xaa59,	// (0x000136ec) list_double_heading_pane_vc_t2_ParamLimits

0xaa59,	// (0x000136ec) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001873d) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001873d) list_double_heading_pane_vc_t

0xa993,	// (0x00013626) list_double_graphic_pane_vc_g1_ParamLimits

0xa993,	// (0x00013626) list_double_graphic_pane_vc_g1

0xca82,	// (0x00015715) list_double_graphic_pane_vc_g2_ParamLimits

0xca82,	// (0x00015715) list_double_graphic_pane_vc_g2

0xca91,	// (0x00015724) list_double_graphic_pane_vc_g3_ParamLimits

0xca91,	// (0x00015724) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x00018742) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x00018742) list_double_graphic_pane_vc_g

0xca9d,	// (0x00015730) list_double_graphic_pane_vc_t1_ParamLimits

0xca9d,	// (0x00015730) list_double_graphic_pane_vc_t1

0xc9de,	// (0x00015671) list_double_graphic_pane_vc_t2_ParamLimits

0xc9de,	// (0x00015671) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x00018749) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x00018749) list_double_graphic_pane_vc_t

0x626c,	// (0x0000eeff) aid_size_cell_fastswap

0x6274,	// (0x0000ef07) aid_size_cell_touch_ParamLimits

0x6274,	// (0x0000ef07) aid_size_cell_touch

0x64d9,	// (0x0000f16c) popup_fast_swap_wide_window_ParamLimits

0x64d9,	// (0x0000f16c) popup_fast_swap_wide_window

0x65cf,	// (0x0000f262) touch_pane_ParamLimits

0x65cf,	// (0x0000f262) touch_pane

0x8cbb,	// (0x0001194e) button_value_adjust_pane_cp2

0x8cbb,	// (0x0001194e) button_value_adjust_pane_cp4

0x8cdb,	// (0x0001196e) form_field_data_pane_cp2

0x8cfa,	// (0x0001198d) form_field_data_wide_pane_cp2

0x9383,	// (0x00012016) bg_scroll_pane_ParamLimits

0x685b,	// (0x0000f4ee) scroll_handle_pane_ParamLimits

0x686f,	// (0x0000f502) scroll_sc2_down_pane_ParamLimits

0x686f,	// (0x0000f502) scroll_sc2_down_pane

0x93b4,	// (0x00012047) scroll_sc2_up_pane_ParamLimits

0x93b4,	// (0x00012047) scroll_sc2_up_pane

0xceb8,	// (0x00015b4b) grid_wheel_folder_pane_g1_ParamLimits

0xceb8,	// (0x00015b4b) grid_wheel_folder_pane_g1

0x6a34,	// (0x0000f6c7) clock_nsta_pane_cp2_ParamLimits

0x6a34,	// (0x0000f6c7) clock_nsta_pane_cp2

0x9be1,	// (0x00012874) listscroll_midp_pane_ParamLimits

0x9bed,	// (0x00012880) midp_canvas_pane

0x9ed3,	// (0x00012b66) nsta_clock_indic_pane

0x9f31,	// (0x00012bc4) listscroll_form_pane_vc

0x9f4d,	// (0x00012be0) listscroll_set_pane_vc_ParamLimits

0x9f4d,	// (0x00012be0) listscroll_set_pane_vc

0xa5e1,	// (0x00013274) clock_nsta_pane

0xa656,	// (0x000132e9) indicator_nsta_pane

0xa92d,	// (0x000135c0) bg_popup_sub_pane_cp2_ParamLimits

0xa941,	// (0x000135d4) find_pane_cp2_ParamLimits

0xa941,	// (0x000135d4) find_pane_cp2

0xa957,	// (0x000135ea) grid_toobar_pane_ParamLimits

0xaaff,	// (0x00013792) list_form_gen_pane_vc_ParamLimits

0xaaff,	// (0x00013792) list_form_gen_pane_vc

0xab15,	// (0x000137a8) scroll_pane_cp8_vc_ParamLimits

0xab15,	// (0x000137a8) scroll_pane_cp8_vc

0xab91,	// (0x00013824) data_form_wide_pane_vc_ParamLimits

0xab91,	// (0x00013824) data_form_wide_pane_vc

0xab9d,	// (0x00013830) form_field_data_wide_pane_vc_g1

0xaba5,	// (0x00013838) form_field_data_wide_pane_vc_t1_ParamLimits

0xaba5,	// (0x00013838) form_field_data_wide_pane_vc_t1

0x8d93,	// (0x00011a26) input_focus_pane_cp6_vc_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_cp6_vc

0xaf0e,	// (0x00013ba1) list_midp_pane_ParamLimits

0xaf1a,	// (0x00013bad) scroll_pane_cp16_ParamLimits

0xaf1a,	// (0x00013bad) scroll_pane_cp16

0xaf5a,	// (0x00013bed) button_value_adjust_pane_ParamLimits

0xaf5a,	// (0x00013bed) button_value_adjust_pane

0xbede,	// (0x00014b71) button_value_adjust_pane_cp6_ParamLimits

0xbede,	// (0x00014b71) button_value_adjust_pane_cp6

0xc000,	// (0x00014c93) settings_code_pane_cp_ParamLimits

0xc000,	// (0x00014c93) settings_code_pane_cp

0x7ed0,	// (0x00010b63) cell_touch_pane_g1

0x7ed0,	// (0x00010b63) cell_touch_pane_g2

0x0001,

0xf742,	// (0x000183d5) cell_touch_pane_g

0xc68d,	// (0x00015320) cell_touch_pane_cp_ParamLimits

0xc68d,	// (0x00015320) cell_touch_pane_cp

0xc69d,	// (0x00015330) cell_touch_pane_ParamLimits

0xc69d,	// (0x00015330) cell_touch_pane

0x7ed0,	// (0x00010b63) scroll_sc2_down_pane_g1

0x7ed0,	// (0x00010b63) scroll_sc2_up_pane_g1

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp4_vc

0xc6c3,	// (0x00015356) list_set_graphic_pane_vc_g1_ParamLimits

0xc6c3,	// (0x00015356) list_set_graphic_pane_vc_g1

0xc6cf,	// (0x00015362) list_set_graphic_pane_vc_g2_ParamLimits

0xc6cf,	// (0x00015362) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x000186bf) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x000186bf) list_set_graphic_pane_vc_g

0xc6db,	// (0x0001536e) text_primary_small_cp13_vc_ParamLimits

0xc6db,	// (0x0001536e) text_primary_small_cp13_vc

0xc6f3,	// (0x00015386) list_set_graphic_pane_vc_ParamLimits

0xc6f3,	// (0x00015386) list_set_graphic_pane_vc

0x7eda,	// (0x00010b6d) input_focus_pane_cp2_vc

0x7ed0,	// (0x00010b63) setting_code_pane_vc_g1

0xc707,	// (0x0001539a) setting_code_pane_vc_t1

0xc715,	// (0x000153a8) set_text_pane_vc_t1_ParamLimits

0xc715,	// (0x000153a8) set_text_pane_vc_t1

0x7eda,	// (0x00010b6d) input_focus_pane_cp1_vc

0xc734,	// (0x000153c7) list_set_text_pane_vc

0x7ed0,	// (0x00010b63) setting_text_pane_vc_g1

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp2_vc

0xc73e,	// (0x000153d1) setting_slider_graphic_pane_vc_g1

0xc746,	// (0x000153d9) setting_slider_graphic_pane_vc_t1

0xc754,	// (0x000153e7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x000186c4) setting_slider_graphic_pane_vc_t

0xc762,	// (0x000153f5) slider_set_pane_cp_vc

0xc76a,	// (0x000153fd) slider_set_pane_vc_g1

0xc773,	// (0x00015406) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x000186c9) slider_set_pane_vc_g

0x8ecf,	// (0x00011b62) set_opt_bg_pane_g1_copy1

0x8ed7,	// (0x00011b6a) set_opt_bg_pane_g2_copy1

0xc79f,	// (0x00015432) set_opt_bg_pane_g3_copy1

0x8ee7,	// (0x00011b7a) set_opt_bg_pane_g4_copy1

0x8eef,	// (0x00011b82) set_opt_bg_pane_g5_copy1

0x8ef7,	// (0x00011b8a) set_opt_bg_pane_g6_copy1

0xc7a7,	// (0x0001543a) set_opt_bg_pane_g7_copy1

0xc7b1,	// (0x00015444) set_opt_bg_pane_g8_copy1

0xc7b9,	// (0x0001544c) set_opt_bg_pane_g9_copy1

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp_vc

0xc7c1,	// (0x00015454) setting_slider_pane_vc_t1

0xc746,	// (0x000153d9) setting_slider_pane_vc_t2

0xc754,	// (0x000153e7) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x000186d8) setting_slider_pane_vc_t

0xc762,	// (0x000153f5) slider_set_pane_vc

0x6e46,	// (0x0000fad9) volume_set_pane_vc_g1

0x7141,	// (0x0000fdd4) volume_set_pane_vc_g2

0x714a,	// (0x0000fddd) volume_set_pane_vc_g3

0x7153,	// (0x0000fde6) volume_set_pane_vc_g4

0x715c,	// (0x0000fdef) volume_set_pane_vc_g5

0x7165,	// (0x0000fdf8) volume_set_pane_vc_g6

0x716e,	// (0x0000fe01) volume_set_pane_vc_g7

0x7177,	// (0x0000fe0a) volume_set_pane_vc_g8

0x7180,	// (0x0000fe13) volume_set_pane_vc_g9

0x7189,	// (0x0000fe1c) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x000186df) volume_set_pane_vc_g

0xc7d0,	// (0x00015463) volume_set_pane_vc

0xc7d8,	// (0x0001546b) button_value_adjust_pane_cp1_vc

0xc7e2,	// (0x00015475) list_highlight_pane_cp2_vc

0xc7eb,	// (0x0001547e) list_set_pane_vc_ParamLimits

0xc7eb,	// (0x0001547e) list_set_pane_vc

0xc83d,	// (0x000154d0) main_pane_set_vc_t1_ParamLimits

0xc83d,	// (0x000154d0) main_pane_set_vc_t1

0xc852,	// (0x000154e5) main_pane_set_vc_t2_ParamLimits

0xc852,	// (0x000154e5) main_pane_set_vc_t2

0xc864,	// (0x000154f7) main_pane_set_vc_t3_ParamLimits

0xc864,	// (0x000154f7) main_pane_set_vc_t3

0xc876,	// (0x00015509) main_pane_set_vc_t4_ParamLimits

0xc876,	// (0x00015509) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x000186f4) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x000186f4) main_pane_set_vc_t

0xc888,	// (0x0001551b) setting_code_pane_vc_ParamLimits

0xc888,	// (0x0001551b) setting_code_pane_vc

0xc897,	// (0x0001552a) setting_slider_graphic_pane_vc

0xc897,	// (0x0001552a) setting_slider_pane_vc

0xc897,	// (0x0001552a) setting_text_pane_vc

0xc897,	// (0x0001552a) setting_volume_pane_vc

0xc89f,	// (0x00015532) scroll_pane_cp121_vc

0x8ca9,	// (0x0001193c) set_content_pane_vc

0xcaaf,	// (0x00015742) button_value_adjust_pane_g1

0xcab8,	// (0x0001574b) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x0001874e) button_value_adjust_pane_g

0xcac1,	// (0x00015754) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcac1,	// (0x00015754) form_field_slider_wide_pane_vc_t1

0xcad5,	// (0x00015768) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcad5,	// (0x00015768) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x00018753) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x00018753) form_field_slider_wide_pane_vc_t

0x824f,	// (0x00010ee2) input_focus_pane_cp10_vc_ParamLimits

0x824f,	// (0x00010ee2) input_focus_pane_cp10_vc

0xcae7,	// (0x0001577a) slider_cont_pane_cp1_vc_ParamLimits

0xcae7,	// (0x0001577a) slider_cont_pane_cp1_vc

0xc76a,	// (0x000153fd) slider_form_pane_g1_cp2

0xc773,	// (0x00015406) slider_form_pane_g2_cp2

0xcb00,	// (0x00015793) form_field_slider_pane_vc_t3

0xcb0e,	// (0x000157a1) form_field_slider_pane_vc_t4

0xcb1c,	// (0x000157af) slider_form_pane_vc_ParamLimits

0xcb1c,	// (0x000157af) slider_form_pane_vc

0xcb29,	// (0x000157bc) form_field_slider_pane_vc_t1_ParamLimits

0xcb29,	// (0x000157bc) form_field_slider_pane_vc_t1

0xcad5,	// (0x00015768) form_field_slider_pane_vc_t2_ParamLimits

0xcad5,	// (0x00015768) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x00018763) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x00018763) form_field_slider_pane_vc_t

0x824f,	// (0x00010ee2) input_focus_pane_cp9_vc_ParamLimits

0x824f,	// (0x00010ee2) input_focus_pane_cp9_vc

0xcb45,	// (0x000157d8) slider_cont_pane_vc_ParamLimits

0xcb45,	// (0x000157d8) slider_cont_pane_vc

0xcb57,	// (0x000157ea) list_form_graphic_pane_cp_vc_ParamLimits

0xcb57,	// (0x000157ea) list_form_graphic_pane_cp_vc

0xab9d,	// (0x00013830) form_field_popup_wide_pane_vc_g1

0xcb6c,	// (0x000157ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcb6c,	// (0x000157ff) form_field_popup_wide_pane_vc_t1

0x8d93,	// (0x00011a26) input_focus_pane_cp8_vc_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_cp8_vc

0xcb83,	// (0x00015816) list_form_wide_pane_vc_ParamLimits

0xcb83,	// (0x00015816) list_form_wide_pane_vc

0xcb8f,	// (0x00015822) list_form_graphic_pane_vc_g1

0xcb97,	// (0x0001582a) list_form_graphic_pane_vc_t1_ParamLimits

0xcb97,	// (0x0001582a) list_form_graphic_pane_vc_t1

0x7fba,	// (0x00010c4d) list_highlight_pane_cp5_vc_ParamLimits

0x7fba,	// (0x00010c4d) list_highlight_pane_cp5_vc

0xcbb3,	// (0x00015846) list_form_graphic_pane_vc_ParamLimits

0xcbb3,	// (0x00015846) list_form_graphic_pane_vc

0xab9d,	// (0x00013830) form_field_popup_pane_vc_g1

0xcbc9,	// (0x0001585c) form_field_popup_pane_vc_t1_ParamLimits

0xcbc9,	// (0x0001585c) form_field_popup_pane_vc_t1

0x8d93,	// (0x00011a26) input_focus_pane_cp7_vc_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_cp7_vc

0xcbe0,	// (0x00015873) list_form_pane_vc_ParamLimits

0xcbe0,	// (0x00015873) list_form_pane_vc

0xcbec,	// (0x0001587f) data_form_pane_vc_t1_ParamLimits

0xcbec,	// (0x0001587f) data_form_pane_vc_t1

0x8ecf,	// (0x00011b62) input_focus_pane_vc_g1

0x8ed7,	// (0x00011b6a) input_focus_pane_vc_g2

0x8edf,	// (0x00011b72) input_focus_pane_vc_g3

0x8ee7,	// (0x00011b7a) input_focus_pane_vc_g4

0x8eef,	// (0x00011b82) input_focus_pane_vc_g5

0x8ef7,	// (0x00011b8a) input_focus_pane_vc_g6

0x8eff,	// (0x00011b92) input_focus_pane_vc_g7

0x8f07,	// (0x00011b9a) input_focus_pane_vc_g8

0x8f0f,	// (0x00011ba2) input_focus_pane_vc_g9

0x7ed0,	// (0x00010b63) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001835e) input_focus_pane_vc_g

0xab91,	// (0x00013824) data_form_pane_vc_ParamLimits

0xab91,	// (0x00013824) data_form_pane_vc

0xab9d,	// (0x00013830) form_field_data_pane_vc_g1

0xcc07,	// (0x0001589a) form_field_data_pane_vc_t1_ParamLimits

0xcc07,	// (0x0001589a) form_field_data_pane_vc_t1

0x8d93,	// (0x00011a26) input_focus_pane_vc_ParamLimits

0x8d93,	// (0x00011a26) input_focus_pane_vc

0xcc21,	// (0x000158b4) button_value_adjust_pane_cp3_vc

0xcc29,	// (0x000158bc) button_value_adjust_pane_cp5_vc

0xcc31,	// (0x000158c4) form_field_data_pane_vc_ParamLimits

0xcc31,	// (0x000158c4) form_field_data_pane_vc

0xcc48,	// (0x000158db) form_field_data_pane_vc_cp2

0xcc50,	// (0x000158e3) form_field_data_wide_pane_vc_ParamLimits

0xcc50,	// (0x000158e3) form_field_data_wide_pane_vc

0xcc66,	// (0x000158f9) form_field_data_wide_pane_vc_cp2

0xcc6e,	// (0x00015901) form_field_popup_pane_vc_ParamLimits

0xcc6e,	// (0x00015901) form_field_popup_pane_vc

0xcc85,	// (0x00015918) form_field_popup_wide_pane_vc_ParamLimits

0xcc85,	// (0x00015918) form_field_popup_wide_pane_vc

0xcc9b,	// (0x0001592e) form_field_slider_pane_vc_ParamLimits

0xcc9b,	// (0x0001592e) form_field_slider_pane_vc

0xccae,	// (0x00015941) form_field_slider_wide_pane_vc_ParamLimits

0xccae,	// (0x00015941) form_field_slider_wide_pane_vc

0xccc1,	// (0x00015954) grid_touch_1_pane_ParamLimits

0xccc1,	// (0x00015954) grid_touch_1_pane

0xcccd,	// (0x00015960) grid_touch_2_pane_ParamLimits

0xcccd,	// (0x00015960) grid_touch_2_pane

0x9e9e,	// (0x00012b31) touch_pane_g1_ParamLimits

0x9e9e,	// (0x00012b31) touch_pane_g1

0xcce5,	// (0x00015978) cell_app_pane_cp_wide_ParamLimits

0xcce5,	// (0x00015978) cell_app_pane_cp_wide

0xccf6,	// (0x00015989) grid_popup_fast_wide_pane_ParamLimits

0xccf6,	// (0x00015989) grid_popup_fast_wide_pane

0xcd0a,	// (0x0001599d) scroll_pane_cp19_ParamLimits

0xcd0a,	// (0x0001599d) scroll_pane_cp19

0x7eda,	// (0x00010b6d) bg_popup_window_pane_cp20

0xcd1e,	// (0x000159b1) listscroll_popup_fast_wide_pane

0x7fba,	// (0x00010c4d) grid_indicator_nsta_pane

0xcd26,	// (0x000159b9) clock_nsta_pane_g1

0xcd2f,	// (0x000159c2) clock_nsta_pane_t1

0xcd4b,	// (0x000159de) cell_indicator_nsta_pane_ParamLimits

0xcd4b,	// (0x000159de) cell_indicator_nsta_pane

0xcd83,	// (0x00015a16) cell_indicator_nsta_pane_g1

0xcd91,	// (0x00015a24) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x0001876d) cell_indicator_nsta_pane_g

0xcda7,	// (0x00015a3a) clock_nsta_pane_cp

0xcdaf,	// (0x00015a42) indicator_nsta_pane_cp

0xcdb7,	// (0x00015a4a) nsta_clock_indic_pane_g1

0x809d,	// (0x00010d30) grid_indicator_pane

0x94a6,	// (0x00012139) scroll_pane_cp29

0x6983,	// (0x0000f616) indicator_nsta_pane_cp2_ParamLimits

0x6983,	// (0x0000f616) indicator_nsta_pane_cp2

0x7fba,	// (0x00010c4d) main_apps_wheel_pane

0xadf5,	// (0x00013a88) form_midp_field_text_pane_ParamLimits

0xaf3a,	// (0x00013bcd) scroll_bar_cp050_ParamLimits

0xcdef,	// (0x00015a82) cell_indicator_pane_ParamLimits

0xcdef,	// (0x00015a82) cell_indicator_pane

0xce0c,	// (0x00015a9f) cell_indicator_pane_g1

0xce16,	// (0x00015aa9) grid_wheel_folder_pane_ParamLimits

0xce16,	// (0x00015aa9) grid_wheel_folder_pane

0xce2c,	// (0x00015abf) list_wheel_apps_pane_ParamLimits

0xce2c,	// (0x00015abf) list_wheel_apps_pane

0xce3d,	// (0x00015ad0) main_apps_wheel_pane_g1_ParamLimits

0xce3d,	// (0x00015ad0) main_apps_wheel_pane_g1

0xce51,	// (0x00015ae4) main_apps_wheel_pane_g2_ParamLimits

0xce51,	// (0x00015ae4) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x0001877c) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x0001877c) main_apps_wheel_pane_g

0xce69,	// (0x00015afc) main_apps_wheel_pane_t1_ParamLimits

0xce69,	// (0x00015afc) main_apps_wheel_pane_t1

0xce8c,	// (0x00015b1f) list_wheel_apps_pane_g1

0xce94,	// (0x00015b27) list_wheel_apps_pane_g2

0xce9c,	// (0x00015b2f) list_wheel_apps_pane_g3

0xcea4,	// (0x00015b37) list_wheel_apps_pane_g4

0xceae,	// (0x00015b41) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x00018781) list_wheel_apps_pane_g

0x9a57,	// (0x000126ea) navi_icon_text_pane

0xa510,	// (0x000131a3) aid_fill_nsta

0xced1,	// (0x00015b64) navi_icon_text_pane_g1

0xcee0,	// (0x00015b73) navi_icon_text_pane_t1

0x98f3,	// (0x00012586) list_set_graphic_pane_t1_ParamLimits

0x98f3,	// (0x00012586) list_set_graphic_pane_t1

0xb64b,	// (0x000142de) popup_midp_note_alarm_window_t6_ParamLimits

0xb64b,	// (0x000142de) popup_midp_note_alarm_window_t6

0xb65d,	// (0x000142f0) popup_midp_note_alarm_window_t7_ParamLimits

0xb65d,	// (0x000142f0) popup_midp_note_alarm_window_t7

0xb66f,	// (0x00014302) popup_midp_note_alarm_window_t8_ParamLimits

0xb66f,	// (0x00014302) popup_midp_note_alarm_window_t8

0xb681,	// (0x00014314) popup_midp_note_alarm_window_t9_ParamLimits

0xb681,	// (0x00014314) popup_midp_note_alarm_window_t9

0xb693,	// (0x00014326) popup_midp_note_alarm_window_t10_ParamLimits

0xb693,	// (0x00014326) popup_midp_note_alarm_window_t10

0xb6a5,	// (0x00014338) popup_midp_note_alarm_window_t11_ParamLimits

0xb6a5,	// (0x00014338) popup_midp_note_alarm_window_t11

0xb6b7,	// (0x0001434a) scroll_pane_cp17_ParamLimits

0xb6b7,	// (0x0001434a) scroll_pane_cp17

0x6e46,	// (0x0000fad9) volume_small_pane_cp_g1

0x7192,	// (0x0000fe25) volume_small_pane_cp_g2

0x719b,	// (0x0000fe2e) volume_small_pane_cp_g3

0x71a4,	// (0x0000fe37) volume_small_pane_cp_g4

0x71ad,	// (0x0000fe40) volume_small_pane_cp_g5

0x71b6,	// (0x0000fe49) volume_small_pane_cp_g6

0x71bf,	// (0x0000fe52) volume_small_pane_cp_g7

0x71c8,	// (0x0000fe5b) volume_small_pane_cp_g8

0x71d1,	// (0x0000fe64) volume_small_pane_cp_g9

0x71da,	// (0x0000fe6d) volume_small_pane_cp_g10

0x9cb8,	// (0x0001294b) midp_ticker_pane_g1_ParamLimits

0x9cc4,	// (0x00012957) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00018426) midp_ticker_pane_g_ParamLimits

0x9cd0,	// (0x00012963) midp_ticker_pane_t1_ParamLimits

0xa526,	// (0x000131b9) aid_fill_nsta_2

0xaf26,	// (0x00013bb9) list_form2_midp_pane

0xc07e,	// (0x00014d11) midp_editing_number_pane_ParamLimits

0xc08d,	// (0x00014d20) midp_ticker_pane_ParamLimits

0xcef5,	// (0x00015b88) form2_midp_field_pane

0xcf19,	// (0x00015bac) scroll_pane_cp51

0xcf39,	// (0x00015bcc) form2_midp_button_pane_ParamLimits

0xcf39,	// (0x00015bcc) form2_midp_button_pane

0xcf4b,	// (0x00015bde) form2_midp_content_pane_ParamLimits

0xcf4b,	// (0x00015bde) form2_midp_content_pane

0xcf65,	// (0x00015bf8) form2_midp_field_choice_group_pane

0xcf6d,	// (0x00015c00) form2_midp_field_pane_g1

0xcf75,	// (0x00015c08) form2_midp_field_pane_g2

0xcf7d,	// (0x00015c10) form2_midp_field_pane_g3

0xcf85,	// (0x00015c18) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x000187a6) form2_midp_field_pane_g

0xcf8d,	// (0x00015c20) form2_midp_gauge_slider_pane

0xcf95,	// (0x00015c28) form2_midp_gauge_wait_pane

0xcf9d,	// (0x00015c30) form2_midp_image_pane_ParamLimits

0xcf9d,	// (0x00015c30) form2_midp_image_pane

0xcfb8,	// (0x00015c4b) form2_midp_label_pane_ParamLimits

0xcfb8,	// (0x00015c4b) form2_midp_label_pane

0xcfd1,	// (0x00015c64) form2_midp_label_pane_cp_ParamLimits

0xcfd1,	// (0x00015c64) form2_midp_label_pane_cp

0xcff2,	// (0x00015c85) form2_midp_string_pane_ParamLimits

0xcff2,	// (0x00015c85) form2_midp_string_pane

0xd004,	// (0x00015c97) form2_midp_text_pane_ParamLimits

0xd004,	// (0x00015c97) form2_midp_text_pane

0xd01d,	// (0x00015cb0) form2_midp_time_pane

0xd02d,	// (0x00015cc0) input_focus_pane_cp51_ParamLimits

0xd02d,	// (0x00015cc0) input_focus_pane_cp51

0xd045,	// (0x00015cd8) form2_midp_label_pane_t1_ParamLimits

0xd045,	// (0x00015cd8) form2_midp_label_pane_t1

0xd085,	// (0x00015d18) form2_mdip_text_pane_t1_ParamLimits

0xd085,	// (0x00015d18) form2_mdip_text_pane_t1

0xd0a1,	// (0x00015d34) form2_midp_time_pane_t1

0xd0bc,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1

0xd0ce,	// (0x00015d61) form2_midp_gauge_slider_pane_t2

0xd0e0,	// (0x00015d73) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x000187af) form2_midp_gauge_slider_pane_t

0xd0f2,	// (0x00015d85) form2_midp_slider_pane

0xd0fe,	// (0x00015d91) form2_midp_gauge_wait_pane_t1

0xd10c,	// (0x00015d9f) form2_midp_wait_pane_ParamLimits

0xd10c,	// (0x00015d9f) form2_midp_wait_pane

0xd137,	// (0x00015dca) list_single_2graphic_pane_cp4_ParamLimits

0xd137,	// (0x00015dca) list_single_2graphic_pane_cp4

0xabe8,	// (0x0001387b) list_single_midp_graphic_pane_cp_ParamLimits

0xabe8,	// (0x0001387b) list_single_midp_graphic_pane_cp

0x7eda,	// (0x00010b6d) list_highlight_pane_cp20

0xd166,	// (0x00015df9) list_single_2graphic_pane_g1_cp4

0xc592,	// (0x00015225) list_single_2graphic_pane_g2_cp4

0xd16e,	// (0x00015e01) list_single_2graphic_pane_t1_cp4

0x7fba,	// (0x00010c4d) list_highlight_pane_cp21

0xd17d,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp

0xd18c,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp

0xd1a1,	// (0x00015e34) form2_mdip_string_pane_t1_ParamLimits

0xd1a1,	// (0x00015e34) form2_mdip_string_pane_t1

0x7eda,	// (0x00010b6d) bg_wml_button_pane_cp2

0x7ed0,	// (0x00010b63) form2_midp_image_pane_g1

0x8a6d,	// (0x00011700) list_double_large_graphic_pane_g5_ParamLimits

0x8a6d,	// (0x00011700) list_double_large_graphic_pane_g5

0x9be1,	// (0x00012874) midp_form_pane_ParamLimits

0x7fba,	// (0x00010c4d) main_apps_wheel_pane_ParamLimits

0xa304,	// (0x00012f97) popup_preview_window_ParamLimits

0xa304,	// (0x00012f97) popup_preview_window

0xa4b5,	// (0x00013148) popup_touch_info_window_ParamLimits

0xa4b5,	// (0x00013148) popup_touch_info_window

0xa4d3,	// (0x00013166) popup_touch_menu_window_ParamLimits

0xa4d3,	// (0x00013166) popup_touch_menu_window

0x7ec6,	// (0x00010b59) bg_popup_sub_pane_cp6

0xd2db,	// (0x00015f6e) list_touch_menu_pane

0xd2e3,	// (0x00015f76) list_single_touch_menu_pane_ParamLimits

0xd2e3,	// (0x00015f76) list_single_touch_menu_pane

0xd2f8,	// (0x00015f8b) list_single_touch_menu_pane_t1

0x7fba,	// (0x00010c4d) bg_popup_sub_pane_cp7_ParamLimits

0x7fba,	// (0x00010c4d) bg_popup_sub_pane_cp7

0xd306,	// (0x00015f99) heading_sub_pane

0xd30e,	// (0x00015fa1) list_touch_info_pane_ParamLimits

0xd30e,	// (0x00015fa1) list_touch_info_pane

0xd31d,	// (0x00015fb0) list_single_touch_info_pane_ParamLimits

0xd31d,	// (0x00015fb0) list_single_touch_info_pane

0xd32f,	// (0x00015fc2) list_single_touch_info_pane_t1

0xd33d,	// (0x00015fd0) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x000187bd) list_single_touch_info_pane_t

0x9bd9,	// (0x0001286c) bg_popup_heading_pane_cp

0xd34b,	// (0x00015fde) heading_sub_pane_t1

0xab2b,	// (0x000137be) bg_popup_preview_window_pane_cp_ParamLimits

0xab2b,	// (0x000137be) bg_popup_preview_window_pane_cp

0xd306,	// (0x00015f99) heading_preview_pane

0xd30e,	// (0x00015fa1) list_preview_pane_ParamLimits

0xd30e,	// (0x00015fa1) list_preview_pane

0xd359,	// (0x00015fec) popup_preview_window_g1

0xd31d,	// (0x00015fb0) list_single_preview_pane_ParamLimits

0xd31d,	// (0x00015fb0) list_single_preview_pane

0xd361,	// (0x00015ff4) list_single_preview_pane_g1

0xd369,	// (0x00015ffc) list_single_preview_pane_t1

0xd32f,	// (0x00015fc2) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x000187c2) list_single_preview_pane_t

0xd377,	// (0x0001600a) bg_popup_heading_pane_cp2_ParamLimits

0xd377,	// (0x0001600a) bg_popup_heading_pane_cp2

0xd38d,	// (0x00016020) heading_preview_pane_g1

0xd395,	// (0x00016028) heading_preview_pane_t1_ParamLimits

0xd395,	// (0x00016028) heading_preview_pane_t1

0x80c0,	// (0x00010d53) soft_indicator_pane_t1_ParamLimits

0x879a,	// (0x0001142d) scroll_pane_ParamLimits

0x93a2,	// (0x00012035) scroll_sc2_left_pane

0x93ab,	// (0x0001203e) scroll_sc2_right_pane

0x93ca,	// (0x0001205d) scroll_bg_pane_g1_ParamLimits

0x93df,	// (0x00012072) scroll_bg_pane_g2_ParamLimits

0x93f7,	// (0x0001208a) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x000183b5) scroll_bg_pane_g_ParamLimits

0x93ca,	// (0x0001205d) scroll_handle_pane_g1_ParamLimits

0x9419,	// (0x000120ac) scroll_handle_pane_g2_ParamLimits

0x93f7,	// (0x0001208a) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x000183bc) scroll_handle_pane_g_ParamLimits

0x9f8f,	// (0x00012c22) popup_choice_list_window_ParamLimits

0x9f8f,	// (0x00012c22) popup_choice_list_window

0xa939,	// (0x000135cc) choice_list_pane

0xa9dd,	// (0x00013670) cell_toolbar_pane_t1

0xaa05,	// (0x00013698) toolbar_button_pane_ParamLimits

0xbb7b,	// (0x0001480e) ai_gene_pane_1_t2_ParamLimits

0xbb7b,	// (0x0001480e) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x000185d9) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x000185d9) ai_gene_pane_1_t

0xd3b2,	// (0x00016045) scroll_sc2_left_pane_g1

0xd3b2,	// (0x00016045) scroll_sc2_right_pane_g1

0x9f5f,	// (0x00012bf2) bg_popup_sub_pane_cp10

0xd3bc,	// (0x0001604f) list_choice_list_pane

0xd3d3,	// (0x00016066) list_single_choice_list_pane_ParamLimits

0xd3d3,	// (0x00016066) list_single_choice_list_pane

0xd3e7,	// (0x0001607a) list_single_choice_list_pane_g1

0xd3ef,	// (0x00016082) list_single_choice_list_pane_t1_ParamLimits

0xd3ef,	// (0x00016082) list_single_choice_list_pane_t1

0xd404,	// (0x00016097) choice_list_pane_g1

0xd40c,	// (0x0001609f) choice_list_pane_t1

0x7ec6,	// (0x00010b59) input_focus_pane_cp11

0x9280,	// (0x00011f13) title_pane_stacon_g2_ParamLimits

0x9280,	// (0x00011f13) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001839b) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001839b) title_pane_stacon_g

0x9bd9,	// (0x0001286c) cursor_press_pane

0xa035,	// (0x00012cc8) popup_fep_hwr_window_ParamLimits

0xa035,	// (0x00012cc8) popup_fep_hwr_window

0xa0ad,	// (0x00012d40) popup_fep_vkb_window_ParamLimits

0xa0ad,	// (0x00012d40) popup_fep_vkb_window

0xd41a,	// (0x000160ad) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x000187eb) fep_vkb_side_pane_g_ParamLimits

0x721c,	// (0x0000feaf) fep_hwr_candidate_pane_ParamLimits

0x721c,	// (0x0000feaf) fep_hwr_candidate_pane

0x7246,	// (0x0000fed9) fep_hwr_side_pane_ParamLimits

0x7246,	// (0x0000fed9) fep_hwr_side_pane

0x7266,	// (0x0000fef9) fep_hwr_top_pane_ParamLimits

0x7266,	// (0x0000fef9) fep_hwr_top_pane

0x727e,	// (0x0000ff11) fep_hwr_write_pane_ParamLimits

0x727e,	// (0x0000ff11) fep_hwr_write_pane

0xfb58,	// (0x000187eb) fep_vkb_side_pane_g

0xd422,	// (0x000160b5) fep_hwr_top_pane_g1

0xd434,	// (0x000160c7) fep_hwr_top_pane_g2

0x72b8,	// (0x0000ff4b) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x000187c7) fep_hwr_top_pane_g

0x72cd,	// (0x0000ff60) fep_hwr_top_text_pane

0x956c,	// (0x000121ff) fep_hwr_top_text_pane_g1

0xd46a,	// (0x000160fd) fep_hwr_top_text_pane_t1

0x73c3,	// (0x00010056) fep_hwr_candidate_pane_g1

0xd6d2,	// (0x00016365) fep_vkb_keypad_pane_g3_ParamLimits

0xd6d2,	// (0x00016365) fep_vkb_keypad_pane_g3

0xd6fa,	// (0x0001638d) fep_vkb_keypad_pane_g4_ParamLimits

0xd6fa,	// (0x0001638d) fep_vkb_keypad_pane_g4

0xd769,	// (0x000163fc) fep_vkb_bottom_pane_g2_ParamLimits

0xd769,	// (0x000163fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x000187f2) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x000187f2) fep_vkb_bottom_pane_g

0xd3b2,	// (0x00016045) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x000187fc) cell_vkb_side_pane_g

0xd7f4,	// (0x00016487) cell_vkb_side_pane_t1

0xd802,	// (0x00016495) cell_vkb_side_pane_t1_copy1

0xd3b2,	// (0x00016045) bg_fep_vkb_candidate_pane_g2

0xd934,	// (0x000165c7) cell_vkb_candidate_pane_ParamLimits

0xd486,	// (0x00016119) aid_size_cell_vkb_ParamLimits

0xd486,	// (0x00016119) aid_size_cell_vkb

0xd934,	// (0x000165c7) cell_vkb_candidate_pane

0x73ea,	// (0x0001007d) bg_popup_fep_shadow_pane_g1

0xd514,	// (0x000161a7) fep_vkb_bottom_pane_ParamLimits

0xd514,	// (0x000161a7) fep_vkb_bottom_pane

0xd551,	// (0x000161e4) fep_vkb_candidate_pane_ParamLimits

0xd551,	// (0x000161e4) fep_vkb_candidate_pane

0xd56d,	// (0x00016200) fep_vkb_keypad_pane_ParamLimits

0xd56d,	// (0x00016200) fep_vkb_keypad_pane

0xd5b3,	// (0x00016246) fep_vkb_side_pane_ParamLimits

0xd5b3,	// (0x00016246) fep_vkb_side_pane

0xd5ef,	// (0x00016282) fep_vkb_top_pane_ParamLimits

0xd5ef,	// (0x00016282) fep_vkb_top_pane

0xd62b,	// (0x000162be) fep_vkb_top_pane_g1_ParamLimits

0xd62b,	// (0x000162be) fep_vkb_top_pane_g1

0xd63a,	// (0x000162cd) fep_vkb_top_pane_g2_ParamLimits

0xd63a,	// (0x000162cd) fep_vkb_top_pane_g2

0xd649,	// (0x000162dc) fep_vkb_top_pane_g3_ParamLimits

0xd649,	// (0x000162dc) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x000187e2) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x000187e2) fep_vkb_top_pane_g

0xd667,	// (0x000162fa) fep_vkb_top_text_pane_ParamLimits

0xd667,	// (0x000162fa) fep_vkb_top_text_pane

0xd678,	// (0x0001630b) fep_vkb_side_pane_g1_ParamLimits

0xd678,	// (0x0001630b) fep_vkb_side_pane_g1

0xd6c1,	// (0x00016354) grid_vkb_side_pane_ParamLimits

0xd6c1,	// (0x00016354) grid_vkb_side_pane

0x73f2,	// (0x00010085) bg_popup_fep_shadow_pane_g2

0x73fb,	// (0x0001008e) bg_popup_fep_shadow_pane_g3

0x7403,	// (0x00010096) bg_popup_fep_shadow_pane_g4

0x740c,	// (0x0001009f) bg_popup_fep_shadow_pane_g5

0x7416,	// (0x000100a9) bg_popup_fep_shadow_pane_g6

0x741e,	// (0x000100b1) bg_popup_fep_shadow_pane_g7

0x8ee7,	// (0x00011b7a) bg_popup_fep_shadow_pane_g8

0xd718,	// (0x000163ab) grid_vkb_keypad_number_pane_ParamLimits

0xd718,	// (0x000163ab) grid_vkb_keypad_number_pane

0xd728,	// (0x000163bb) grid_vkb_keypad_pane_ParamLimits

0xd728,	// (0x000163bb) grid_vkb_keypad_pane

0xd74e,	// (0x000163e1) fep_vkb_bottom_pane_g1_ParamLimits

0xd74e,	// (0x000163e1) fep_vkb_bottom_pane_g1

0xd777,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd777,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane

0xd78c,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd78c,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane

0xd7a1,	// (0x00016434) fep_vkb_top_text_pane_g1

0xd7bc,	// (0x0001644f) fep_vkb_top_text_pane_t1

0xd7d1,	// (0x00016464) cell_vkb_side_pane_ParamLimits

0xd7d1,	// (0x00016464) cell_vkb_side_pane

0xd3b2,	// (0x00016045) cell_vkb_side_pane_g1

0xd810,	// (0x000164a3) cell_vkb_keypad_pane_ParamLimits

0xd810,	// (0x000164a3) cell_vkb_keypad_pane

0xd88b,	// (0x0001651e) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x0001880f) bg_popup_fep_shadow_pane_g

0x7430,	// (0x000100c3) cell_hwr_side_pane_g1

0x7430,	// (0x000100c3) cell_hwr_side_pane_g2

0xd895,	// (0x00016528) cell_vkb_keypad_pane_t1

0xd8a3,	// (0x00016536) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8a3,	// (0x00016536) cell_vkb_keypad_bottom_left_pane

0xd8c0,	// (0x00016553) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8c0,	// (0x00016553) cell_vkb_keypad_bottom_right_pane

0xd3b2,	// (0x00016045) cell_vkb_keypad_bottom_left_pane_g1

0xd3b2,	// (0x00016045) cell_vkb_keypad_bottom_right_pane_g1

0xd8f9,	// (0x0001658c) cell_vkb_keypad_number_pane_ParamLimits

0xd8f9,	// (0x0001658c) cell_vkb_keypad_number_pane

0xd918,	// (0x000165ab) cell_vkb_keypad_number_pane_g1

0xd922,	// (0x000165b5) cell_vkb_keypad_number_pane_g2

0xd92b,	// (0x000165be) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x00018801) cell_vkb_keypad_number_pane_g

0xd895,	// (0x00016528) cell_vkb_keypad_number_pane_t1

0xd951,	// (0x000165e4) fep_vkb_candidate_pane_g1

0x0001,

0xfb8f,	// (0x00018822) cell_hwr_side_pane_g

0xd96a,	// (0x000165fd) cell_hwr_side_pane_t1

0x743a,	// (0x000100cd) cell_hwr_side_pane_t1_copy1

0x7448,	// (0x000100db) cell_hwr_candidate_pane_g1

0x7477,	// (0x0001010a) cell_hwr_candidate_pane_t1

0xd3b2,	// (0x00016045) cell_vkb_candidate_pane_g2

0xd9ae,	// (0x00016641) cell_vkb_candidate_pane_t1

0x71e3,	// (0x0000fe76) bg_popup_fep_shadow_pane_ParamLimits

0x71e3,	// (0x0000fe76) bg_popup_fep_shadow_pane

0x7298,	// (0x0000ff2b) bg_fep_hwr_top_pane_g4

0xd446,	// (0x000160d9) bg_hwr_side_pane_g1_ParamLimits

0xd446,	// (0x000160d9) bg_hwr_side_pane_g1

0x7309,	// (0x0000ff9c) cell_hwr_side_pane_ParamLimits

0x7309,	// (0x0000ff9c) cell_hwr_side_pane

0x7344,	// (0x0000ffd7) fep_hwr_write_pane_g1_ParamLimits

0x7344,	// (0x0000ffd7) fep_hwr_write_pane_g1

0x7351,	// (0x0000ffe4) fep_hwr_write_pane_g2_ParamLimits

0x7351,	// (0x0000ffe4) fep_hwr_write_pane_g2

0x735e,	// (0x0000fff1) fep_hwr_write_pane_g3_ParamLimits

0x735e,	// (0x0000fff1) fep_hwr_write_pane_g3

0x736c,	// (0x0000ffff) fep_hwr_write_pane_g4_ParamLimits

0x736c,	// (0x0000ffff) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x000187ce) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x000187ce) fep_hwr_write_pane_g

0x7298,	// (0x0000ff2b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7298,	// (0x0000ff2b) bg_fep_hwr_candidate_pane_g2

0x7381,	// (0x00010014) cell_hwr_candidate_pane_ParamLimits

0x7381,	// (0x00010014) cell_hwr_candidate_pane

0x73c3,	// (0x00010056) fep_hwr_candidate_pane_g1_ParamLimits

0xd4b4,	// (0x00016147) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd4b4,	// (0x00016147) bg_popup_fep_shadow_pane_cp2

0xd659,	// (0x000162ec) fep_vkb_top_pane_g4_ParamLimits

0xd659,	// (0x000162ec) fep_vkb_top_pane_g4

0xd69f,	// (0x00016332) fep_vkb_side_pane_g2_ParamLimits

0xd69f,	// (0x00016332) fep_vkb_side_pane_g2

0x8bc3,	// (0x00011856) list_setting_pane_t4_ParamLimits

0x8bc3,	// (0x00011856) list_setting_pane_t4

0x8c3d,	// (0x000118d0) list_setting_number_pane_t5_ParamLimits

0x8c3d,	// (0x000118d0) list_setting_number_pane_t5

0x95ae,	// (0x00012241) list_double_heading_pane_cp2_ParamLimits

0x95ae,	// (0x00012241) list_double_heading_pane_cp2

0x8db9,	// (0x00011a4c) list_double_heading_pane_g1_cp2_ParamLimits

0x8db9,	// (0x00011a4c) list_double_heading_pane_g1_cp2

0x8dc5,	// (0x00011a58) list_double_heading_pane_g2_cp2_ParamLimits

0x8dc5,	// (0x00011a58) list_double_heading_pane_g2_cp2

0xd9bc,	// (0x0001664f) list_double_heading_pane_t1_cp2_ParamLimits

0xd9bc,	// (0x0001664f) list_double_heading_pane_t1_cp2

0xd9d2,	// (0x00016665) list_double_heading_pane_t2_cp2_ParamLimits

0xd9d2,	// (0x00016665) list_double_heading_pane_t2_cp2

0x7eae,	// (0x00010b41) aid_value_unit2

0x6525,	// (0x0000f1b8) popup_preview_fixed_window

0x825d,	// (0x00010ef0) bg_popup_preview_window_pane_cp02

0xd9e4,	// (0x00016677) list_preview_fixed_pane

0xda2a,	// (0x000166bd) list_empty_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_empty_pane_fp

0xda2a,	// (0x000166bd) list_single_cale_day_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_cale_day_pane_fp

0xda2a,	// (0x000166bd) list_single_graphic_heading_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_graphic_heading_pane_fp

0xda2a,	// (0x000166bd) list_single_graphic_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_graphic_pane_fp

0xda2a,	// (0x000166bd) list_single_heading_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_heading_pane_fp

0xda2a,	// (0x000166bd) list_single_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_pane_fp

0xda41,	// (0x000166d4) list_single_pane_fp_g1_ParamLimits

0xda41,	// (0x000166d4) list_single_pane_fp_g1

0x8db9,	// (0x00011a4c) list_single_pane_fp_g2_ParamLimits

0x8db9,	// (0x00011a4c) list_single_pane_fp_g2

0x8dc5,	// (0x00011a58) list_single_pane_fp_g3_ParamLimits

0x8dc5,	// (0x00011a58) list_single_pane_fp_g3

0xda4d,	// (0x000166e0) list_single_pane_fp_g4_ParamLimits

0xda4d,	// (0x000166e0) list_single_pane_fp_g4

0x0003,

0xfba2,	// (0x00018835) list_single_pane_fp_g_ParamLimits

0xfba2,	// (0x00018835) list_single_pane_fp_g

0xda59,	// (0x000166ec) list_single_pane_fp_t1_ParamLimits

0xda59,	// (0x000166ec) list_single_pane_fp_t1

0xda70,	// (0x00016703) list_single_graphic_pane_fp_g1_ParamLimits

0xda70,	// (0x00016703) list_single_graphic_pane_fp_g1

0xda41,	// (0x000166d4) list_single_graphic_pane_fp_g2_ParamLimits

0xda41,	// (0x000166d4) list_single_graphic_pane_fp_g2

0x8db9,	// (0x00011a4c) list_single_graphic_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a4c) list_single_graphic_pane_fp_g3

0x8dc5,	// (0x00011a58) list_single_graphic_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a58) list_single_graphic_pane_fp_g4

0xda4d,	// (0x000166e0) list_single_graphic_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166e0) list_single_graphic_pane_fp_g5

0x0004,

0xfbab,	// (0x0001883e) list_single_graphic_pane_fp_g_ParamLimits

0xfbab,	// (0x0001883e) list_single_graphic_pane_fp_g

0xda7c,	// (0x0001670f) list_single_graphic_pane_fp_t1_ParamLimits

0xda7c,	// (0x0001670f) list_single_graphic_pane_fp_t1

0xda70,	// (0x00016703) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xda70,	// (0x00016703) list_single_graphic_heading_pane_fp_g1

0xda41,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xda41,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2

0x8db9,	// (0x00011a4c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a4c) list_single_graphic_heading_pane_fp_g3

0x8dc5,	// (0x00011a58) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a58) list_single_graphic_heading_pane_fp_g4

0xda4d,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001883e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001883e) list_single_graphic_heading_pane_fp_g

0xda92,	// (0x00016725) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xda92,	// (0x00016725) list_single_graphic_heading_pane_fp_t1

0xdaa8,	// (0x0001673b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdaa8,	// (0x0001673b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x00018849) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x00018849) list_single_graphic_heading_pane_fp_t

0xdaba,	// (0x0001674d) list_single_cale_day_pane_fp_g1_ParamLimits

0xdaba,	// (0x0001674d) list_single_cale_day_pane_fp_g1

0xdaf2,	// (0x00016785) list_single_cale_day_pane_fp_g2_ParamLimits

0xdaf2,	// (0x00016785) list_single_cale_day_pane_fp_g2

0xdafe,	// (0x00016791) list_single_cale_day_pane_fp_g3_ParamLimits

0xdafe,	// (0x00016791) list_single_cale_day_pane_fp_g3

0xdb26,	// (0x000167b9) list_single_cale_day_pane_fp_g4_ParamLimits

0xdb26,	// (0x000167b9) list_single_cale_day_pane_fp_g4

0xdb4a,	// (0x000167dd) list_single_cale_day_pane_fp_g5_ParamLimits

0xdb4a,	// (0x000167dd) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbb,	// (0x0001884e) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbb,	// (0x0001884e) list_single_cale_day_pane_fp_g

0xdb6e,	// (0x00016801) list_single_cale_day_pane_fp_t1_ParamLimits

0xdb6e,	// (0x00016801) list_single_cale_day_pane_fp_t1

0xdb94,	// (0x00016827) list_single_cale_day_pane_fp_t2_ParamLimits

0xdb94,	// (0x00016827) list_single_cale_day_pane_fp_t2

0xdbad,	// (0x00016840) list_single_cale_day_pane_fp_t3_ParamLimits

0xdbad,	// (0x00016840) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc6,	// (0x00018859) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc6,	// (0x00018859) list_single_cale_day_pane_fp_t

0xda41,	// (0x000166d4) list_empty_pane_fp_g1_ParamLimits

0xda41,	// (0x000166d4) list_empty_pane_fp_g1

0xdbc6,	// (0x00016859) list_empty_pane_fp_t1

0xdbd4,	// (0x00016867) list_empty_pane_fp_t2

0x0001,

0xfbcd,	// (0x00018860) list_empty_pane_fp_t

0xda41,	// (0x000166d4) list_single_heading_pane_fp_g1_ParamLimits

0xda41,	// (0x000166d4) list_single_heading_pane_fp_g1

0x8db9,	// (0x00011a4c) list_single_heading_pane_fp_g2_ParamLimits

0x8db9,	// (0x00011a4c) list_single_heading_pane_fp_g2

0x8dc5,	// (0x00011a58) list_single_heading_pane_fp_g3_ParamLimits

0x8dc5,	// (0x00011a58) list_single_heading_pane_fp_g3

0x0002,

0xfbd2,	// (0x00018865) list_single_heading_pane_fp_g_ParamLimits

0xfbd2,	// (0x00018865) list_single_heading_pane_fp_g

0xdbe2,	// (0x00016875) list_single_heading_pane_fp_t1_ParamLimits

0xdbe2,	// (0x00016875) list_single_heading_pane_fp_t1

0xdbf4,	// (0x00016887) list_single_heading_pane_fp_t2_ParamLimits

0xdbf4,	// (0x00016887) list_single_heading_pane_fp_t2

0x0001,

0xfbd9,	// (0x0001886c) list_single_heading_pane_fp_t_ParamLimits

0xfbd9,	// (0x0001886c) list_single_heading_pane_fp_t

0x9117,	// (0x00011daa) aid_size_cell_fast

0x81cd,	// (0x00010e60) soft_indicator_pane_cp1_t1

0x9154,	// (0x00011de7) cell_app_pane_cp2_ParamLimits

0x9154,	// (0x00011de7) cell_app_pane_cp2

0x7205,	// (0x0000fe98) fep_hwr_candidate_drop_down_list_pane

0x73dd,	// (0x00010070) fep_hwr_candidate_pane_g3_ParamLimits

0x73dd,	// (0x00010070) fep_hwr_candidate_pane_g3

0x59a6,	// (0x0000e639) fep_hwr_candidate_pane_g4_ParamLimits

0x59a6,	// (0x0000e639) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x000187db) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x000187db) fep_hwr_candidate_pane_g

0xd540,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd540,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane

0xd959,	// (0x000165ec) fep_vkb_candidate_pane_g3

0xd961,	// (0x000165f4) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x00018808) fep_vkb_candidate_pane_g

0x7448,	// (0x000100db) cell_hwr_candidate_pane_g1_ParamLimits

0x7456,	// (0x000100e9) cell_hwr_candidate_pane_g3_ParamLimits

0x7456,	// (0x000100e9) cell_hwr_candidate_pane_g3

0x08ca,	// (0x0000955d) cell_hwr_candidate_pane_g4_ParamLimits

0x08ca,	// (0x0000955d) cell_hwr_candidate_pane_g4

0x0002,

0xfb94,	// (0x00018827) cell_hwr_candidate_pane_g_ParamLimits

0xfb94,	// (0x00018827) cell_hwr_candidate_pane_g

0xd978,	// (0x0001660b) cell_vkb_candidate_pane_g3_ParamLimits

0xd978,	// (0x0001660b) cell_vkb_candidate_pane_g3

0xd993,	// (0x00016626) cell_vkb_candidate_pane_g4_ParamLimits

0xd993,	// (0x00016626) cell_vkb_candidate_pane_g4

0xdc0a,	// (0x0001689d) cell_app_pane_cp2_g1_ParamLimits

0xdc0a,	// (0x0001689d) cell_app_pane_cp2_g1

0xdc28,	// (0x000168bb) cell_app_pane_cp2_g2_ParamLimits

0xdc28,	// (0x000168bb) cell_app_pane_cp2_g2

0x0001,

0xfbde,	// (0x00018871) cell_app_pane_cp2_g_ParamLimits

0xfbde,	// (0x00018871) cell_app_pane_cp2_g

0xdc34,	// (0x000168c7) cell_app_pane_cp2_t1_ParamLimits

0xdc34,	// (0x000168c7) cell_app_pane_cp2_t1

0x8d93,	// (0x00011a26) grid_highlight_pane_cp1_ParamLimits

0x8d93,	// (0x00011a26) grid_highlight_pane_cp1

0x7495,	// (0x00010128) cell_hwr_candidate_pane_cp1_ParamLimits

0x7495,	// (0x00010128) cell_hwr_candidate_pane_cp1

0x7448,	// (0x000100db) fep_hwr_candidate_drop_down_list_pane_g1

0x74b4,	// (0x00010147) fep_hwr_candidate_drop_down_list_pane_g2

0x74c1,	// (0x00010154) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x00018876) fep_hwr_candidate_drop_down_list_pane_g

0x74ce,	// (0x00010161) fep_hwr_candidate_drop_down_list_scroll_pane

0x74d7,	// (0x0001016a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x74d7,	// (0x0001016a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x74e4,	// (0x00010177) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x74e4,	// (0x00010177) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x74f1,	// (0x00010184) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x74f1,	// (0x00010184) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x74fe,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x74fe,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7519,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7519,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7534,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7534,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x754f,	// (0x000101e2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x754f,	// (0x000101e2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x756a,	// (0x000101fd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x756a,	// (0x000101fd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0001887d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0001887d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdca2,	// (0x00016935) cell_vkb_candidate_pane_cp1_ParamLimits

0xdca2,	// (0x00016935) cell_vkb_candidate_pane_cp1

0xd659,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd659,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1

0xdc46,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdc46,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2

0xdc53,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdc53,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfb,	// (0x0001888e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfb,	// (0x0001888e) fep_vkb_candidate_drop_down_list_pane_g

0xdcc2,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdcc2,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane

0xdccf,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdccf,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdcdc,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdcdc,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdce8,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdce8,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdc60,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdc60,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdc81,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdc81,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdcf4,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdcf4,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdd15,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdd15,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdd36,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdd36,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc02,	// (0x00018895) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc02,	// (0x00018895) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ee4,	// (0x00010b77) title_pane_g1_ParamLimits

0x7ef1,	// (0x00010b84) title_pane_g2_ParamLimits

0xf592,	// (0x00018225) title_pane_g_ParamLimits

0x955c,	// (0x000121ef) aid_call2_pane

0x9564,	// (0x000121f7) aid_call_pane

0x956c,	// (0x000121ff) popup_clock_analogue_window_g1

0x956c,	// (0x000121ff) popup_clock_analogue_window_g2

0x6884,	// (0x0000f517) popup_clock_analogue_window_g3

0x688d,	// (0x0000f520) popup_clock_analogue_window_g4

0x7ed0,	// (0x00010b63) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x000183ca) popup_clock_analogue_window_g

0x6895,	// (0x0000f528) popup_clock_analogue_window_t1

0x68a3,	// (0x0000f536) clock_digital_number_pane_ParamLimits

0x68a3,	// (0x0000f536) clock_digital_number_pane

0x68af,	// (0x0000f542) clock_digital_number_pane_cp02_ParamLimits

0x68af,	// (0x0000f542) clock_digital_number_pane_cp02

0x68bb,	// (0x0000f54e) clock_digital_number_pane_cp03_ParamLimits

0x68bb,	// (0x0000f54e) clock_digital_number_pane_cp03

0x68c7,	// (0x0000f55a) clock_digital_number_pane_cp04_ParamLimits

0x68c7,	// (0x0000f55a) clock_digital_number_pane_cp04

0x68d3,	// (0x0000f566) clock_digital_separator_pane_ParamLimits

0x68d3,	// (0x0000f566) clock_digital_separator_pane

0x68df,	// (0x0000f572) popup_clock_digital_window_t1_ParamLimits

0x68df,	// (0x0000f572) popup_clock_digital_window_t1

0x7ed0,	// (0x00010b63) clock_digital_number_pane_g1

0x7ed0,	// (0x00010b63) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x000183d5) clock_digital_number_pane_g

0x7ed0,	// (0x00010b63) clock_digital_separator_pane_g1

0x7ed0,	// (0x00010b63) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x000183d5) clock_digital_separator_pane_g

0xa510,	// (0x000131a3) aid_fill_nsta_ParamLimits

0xa656,	// (0x000132e9) indicator_nsta_pane_ParamLimits

0xa7c8,	// (0x0001345b) popup_clock_analogue_window

0xa7c8,	// (0x0001345b) popup_clock_digital_window

0x7fba,	// (0x00010c4d) grid_indicator_nsta_pane_ParamLimits

0xcd3d,	// (0x000159d0) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x00018768) clock_nsta_pane_t

0x6848,	// (0x0000f4db) aid_size_max_handle

0x6852,	// (0x0000f4e5) aid_size_min_handle

0x9bd9,	// (0x0001286c) editor_scroll_pane

0xdd51,	// (0x000169e4) ex_editor_pane

0x9086,	// (0x00011d19) scroll_pane_cp13

0x87c6,	// (0x00011459) scroll_pane_cp14

0x9596,	// (0x00012229) scroll_pane_cp36

0x95c0,	// (0x00012253) list_single_graphic_hl_pane_cp2_ParamLimits

0x95c0,	// (0x00012253) list_single_graphic_hl_pane_cp2

0xc152,	// (0x00014de5) list_single_graphic_hl_pane_ParamLimits

0xc152,	// (0x00014de5) list_single_graphic_hl_pane

0xdd59,	// (0x000169ec) aid_size_min_hl_cp1

0xdd62,	// (0x000169f5) list_highlight_pane_cp34_ParamLimits

0xdd62,	// (0x000169f5) list_highlight_pane_cp34

0xdd73,	// (0x00016a06) list_single_graphic_hl_pane_g1_ParamLimits

0xdd73,	// (0x00016a06) list_single_graphic_hl_pane_g1

0xdd80,	// (0x00016a13) list_single_graphic_hl_pane_g2_ParamLimits

0xdd80,	// (0x00016a13) list_single_graphic_hl_pane_g2

0xdd80,	// (0x00016a13) list_single_graphic_hl_pane_g3_ParamLimits

0xdd80,	// (0x00016a13) list_single_graphic_hl_pane_g3

0x9b10,	// (0x000127a3) list_single_graphic_hl_pane_g4_ParamLimits

0x9b10,	// (0x000127a3) list_single_graphic_hl_pane_g4

0xdd8c,	// (0x00016a1f) list_single_graphic_hl_pane_g5_ParamLimits

0xdd8c,	// (0x00016a1f) list_single_graphic_hl_pane_g5

0x0004,

0xfc13,	// (0x000188a6) list_single_graphic_hl_pane_g_ParamLimits

0xfc13,	// (0x000188a6) list_single_graphic_hl_pane_g

0xb76d,	// (0x00014400) list_single_graphic_hl_pane_t1_ParamLimits

0xb76d,	// (0x00014400) list_single_graphic_hl_pane_t1

0xdda0,	// (0x00016a33) aid_size_min_hl_cp2

0xdda9,	// (0x00016a3c) list_highlight_pane_cp34_cp2_ParamLimits

0xdda9,	// (0x00016a3c) list_highlight_pane_cp34_cp2

0xdd73,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdd73,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2

0xddb6,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xddb6,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2

0xddc2,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xddc2,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2

0x9b10,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9b10,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2

0xdd8c,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xdd8c,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2

0x6b91,	// (0x0000f824) control_pane_g4_ParamLimits

0x6b91,	// (0x0000f824) control_pane_g4

0x9f5f,	// (0x00012bf2) bg_popup_sub_pane_cp10_ParamLimits

0xd3bc,	// (0x0001604f) list_choice_list_pane_ParamLimits

0xd3cb,	// (0x0001605e) scroll_pane_cp23

0x825d,	// (0x00010ef0) bg_popup_preview_window_pane_cp02_ParamLimits

0xd9e4,	// (0x00016677) list_preview_fixed_pane_ParamLimits

0xd9fa,	// (0x0001668d) list_preview_fixed_pane_cp_ParamLimits

0xd9fa,	// (0x0001668d) list_preview_fixed_pane_cp

0xda06,	// (0x00016699) popup_preview_fixed_window_g1_ParamLimits

0xda06,	// (0x00016699) popup_preview_fixed_window_g1

0xda12,	// (0x000166a5) popup_preview_fixed_window_g2_ParamLimits

0xda12,	// (0x000166a5) popup_preview_fixed_window_g2

0x0002,

0xfb9b,	// (0x0001882e) popup_preview_fixed_window_g_ParamLimits

0xfb9b,	// (0x0001882e) popup_preview_fixed_window_g

0x67bc,	// (0x0000f44f) aid_navi_side_left_pane_ParamLimits

0x67d1,	// (0x0000f464) aid_navi_side_right_pane_ParamLimits

0x67e9,	// (0x0000f47c) navi_icon_pane_stacon_ParamLimits

0x67fd,	// (0x0000f490) navi_navi_pane_stacon_ParamLimits

0x67e9,	// (0x0000f47c) navi_text_pane_stacon_ParamLimits

0x7ec6,	// (0x00010b59) main_text_info_pane

0xdde6,	// (0x00016a79) listscroll_text_info_pane

0xddee,	// (0x00016a81) list_text_info_pane_ParamLimits

0xddee,	// (0x00016a81) list_text_info_pane

0xddfd,	// (0x00016a90) scroll_pane_cp24_ParamLimits

0xddfd,	// (0x00016a90) scroll_pane_cp24

0xde1b,	// (0x00016aae) list_text_info_pane_t1_ParamLimits

0xde1b,	// (0x00016aae) list_text_info_pane_t1

0x9fa9,	// (0x00012c3c) popup_fast_swap2_window_ParamLimits

0x9fa9,	// (0x00012c3c) popup_fast_swap2_window

0xde54,	// (0x00016ae7) aid_size_cell_fast2

0x7ec6,	// (0x00010b59) bg_popup_window_pane_cp17

0xaf52,	// (0x00013be5) heading_pane_cp2

0x849d,	// (0x00011130) listscroll_fast2_pane

0xde5e,	// (0x00016af1) grid_fast2_pane

0xde68,	// (0x00016afb) listscroll_fast2_pane_g1

0xde70,	// (0x00016b03) listscroll_fast2_pane_g2

0x0001,

0xfc1e,	// (0x000188b1) listscroll_fast2_pane_g

0x9086,	// (0x00011d19) scroll_pane_cp26

0xde7a,	// (0x00016b0d) cell_fast2_pane_ParamLimits

0xde7a,	// (0x00016b0d) cell_fast2_pane

0xde8f,	// (0x00016b22) cell_fast2_pane_g1

0xde98,	// (0x00016b2b) cell_fast2_pane_g2

0xdea1,	// (0x00016b34) cell_fast2_pane_g3

0x0002,

0xfc23,	// (0x000188b6) cell_fast2_pane_g

0x8583,	// (0x00011216) grid_highlight_pane_cp9

0x8598,	// (0x0001122b) main_eswt_pane_ParamLimits

0x8598,	// (0x0001122b) main_eswt_pane

0xde12,	// (0x00016aa5) list_single_text_info_pane

0xdea9,	// (0x00016b3c) eswt_ctrl_button_pane

0xdea9,	// (0x00016b3c) eswt_ctrl_canvas_pane

0xdeb1,	// (0x00016b44) eswt_ctrl_combo_pane

0xdea9,	// (0x00016b3c) eswt_ctrl_default_pane

0xdea9,	// (0x00016b3c) eswt_ctrl_label_pane

0xdeb9,	// (0x00016b4c) eswt_ctrl_wait_pane

0xdec1,	// (0x00016b54) eswt_shell_pane

0x7ec6,	// (0x00010b59) listscroll_eswt_app_pane

0xdee1,	// (0x00016b74) popup_eswt_tasktip_window_ParamLimits

0xdee1,	// (0x00016b74) popup_eswt_tasktip_window

0xab2b,	// (0x000137be) bg_popup_window_pane_cp18

0xdef2,	// (0x00016b85) eswt_control_pane_g1_ParamLimits

0xdef2,	// (0x00016b85) eswt_control_pane_g1

0xdeff,	// (0x00016b92) eswt_control_pane_g2_ParamLimits

0xdeff,	// (0x00016b92) eswt_control_pane_g2

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_ParamLimits

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3

0xdf19,	// (0x00016bac) eswt_control_pane_g4_ParamLimits

0xdf19,	// (0x00016bac) eswt_control_pane_g4

0x0003,

0xfc2a,	// (0x000188bd) eswt_control_pane_g_ParamLimits

0xfc2a,	// (0x000188bd) eswt_control_pane_g

0x8d93,	// (0x00011a26) bg_button_pane_ParamLimits

0x8d93,	// (0x00011a26) bg_button_pane

0x8598,	// (0x0001122b) common_borders_pane_copy2_ParamLimits

0x8598,	// (0x0001122b) common_borders_pane_copy2

0xdf26,	// (0x00016bb9) control_button_pane_g1_ParamLimits

0xdf26,	// (0x00016bb9) control_button_pane_g1

0xdf32,	// (0x00016bc5) control_button_pane_g2_ParamLimits

0xdf32,	// (0x00016bc5) control_button_pane_g2

0xdf3e,	// (0x00016bd1) control_button_pane_g3_ParamLimits

0xdf3e,	// (0x00016bd1) control_button_pane_g3

0x0002,

0xfc33,	// (0x000188c6) control_button_pane_g_ParamLimits

0xfc33,	// (0x000188c6) control_button_pane_g

0xdf52,	// (0x00016be5) control_button_pane_t1

0xdf60,	// (0x00016bf3) control_button_pane_t2

0x0001,

0xfc3a,	// (0x000188cd) control_button_pane_t

0xaa11,	// (0x000136a4) bg_button_pane_g1

0xaa21,	// (0x000136b4) bg_button_pane_g2

0xaa19,	// (0x000136ac) bg_button_pane_g3

0xaa31,	// (0x000136c4) bg_button_pane_g4

0xaa29,	// (0x000136bc) bg_button_pane_g5

0xaa39,	// (0x000136cc) bg_button_pane_g6

0xaa41,	// (0x000136d4) bg_button_pane_g7

0xaa51,	// (0x000136e4) bg_button_pane_g8

0xaa49,	// (0x000136dc) bg_button_pane_g9

0x0008,

0xf89a,	// (0x0001852d) bg_button_pane_g

0xd377,	// (0x0001600a) common_borders_pane_ParamLimits

0xd377,	// (0x0001600a) common_borders_pane

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy1_ParamLimits

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy1

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy1_ParamLimits

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy1

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy1_ParamLimits

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy1

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy1_ParamLimits

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy1

0xd3b2,	// (0x00016045) bg_eswt_ctrl_canvas_pane_g1

0xd377,	// (0x0001600a) common_borders_pane_cp2_ParamLimits

0xd377,	// (0x0001600a) common_borders_pane_cp2

0xd377,	// (0x0001600a) common_borders_pane_cp3_ParamLimits

0xd377,	// (0x0001600a) common_borders_pane_cp3

0xdf6e,	// (0x00016c01) separator_horizontal_pane

0xdf76,	// (0x00016c09) separator_vertical_pane

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy2_ParamLimits

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy2

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy2_ParamLimits

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy2

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy2_ParamLimits

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy2

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy2_ParamLimits

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy2

0x7ec6,	// (0x00010b59) common_borders_pane_cp4

0xdf7f,	// (0x00016c12) separator_horizontal_pane_g1

0xdf88,	// (0x00016c1b) separator_horizontal_pane_g2

0xdf91,	// (0x00016c24) separator_horizontal_pane_g3

0x0002,

0xfc3f,	// (0x000188d2) separator_horizontal_pane_g

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy3_ParamLimits

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy3

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy3_ParamLimits

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy3

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy3_ParamLimits

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy3

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy3_ParamLimits

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy3

0x7ec6,	// (0x00010b59) common_borders_pane_cp5

0xdf9a,	// (0x00016c2d) separator_vertical_pane_g1

0xdfa3,	// (0x00016c36) separator_vertical_pane_g2

0xdfac,	// (0x00016c3f) separator_vertical_pane_g3

0x0002,

0xfc46,	// (0x000188d9) separator_vertical_pane_g

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy4_ParamLimits

0xdef2,	// (0x00016b85) eswt_control_pane_g1_copy4

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy4_ParamLimits

0xdeff,	// (0x00016b92) eswt_control_pane_g2_copy4

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy4_ParamLimits

0xdf0c,	// (0x00016b9f) eswt_control_pane_g3_copy4

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy4_ParamLimits

0xdf19,	// (0x00016bac) eswt_control_pane_g4_copy4

0xdfb5,	// (0x00016c48) eswt_ctrl_combo_button_pane

0xdfbd,	// (0x00016c50) eswt_ctrl_input_pane

0xdfc5,	// (0x00016c58) popup_choice_list_window_cp70

0xdfcd,	// (0x00016c60) eswt_ctrl_input_pane_t1

0x7ec6,	// (0x00010b59) input_focus_pane_cp70

0xd377,	// (0x0001600a) bg_button_pane_cp70_ParamLimits

0xd377,	// (0x0001600a) bg_button_pane_cp70

0xdfdb,	// (0x00016c6e) eswt_ctrl_combo_button_pane_g1

0xdfe3,	// (0x00016c76) wait_bar_pane_cp70

0xab2b,	// (0x000137be) bg_popup_window_pane_cp70_ParamLimits

0xab2b,	// (0x000137be) bg_popup_window_pane_cp70

0xdfeb,	// (0x00016c7e) popup_eswt_tasktip_window_t1

0xe001,	// (0x00016c94) wait_bar_pane_cp71_ParamLimits

0xe001,	// (0x00016c94) wait_bar_pane_cp71

0xe00d,	// (0x00016ca0) grid_eswt_app_pane

0x93a2,	// (0x00012035) scroll_pane_cp70

0xe016,	// (0x00016ca9) cell_eswt_app_pane_ParamLimits

0xe016,	// (0x00016ca9) cell_eswt_app_pane

0xe04a,	// (0x00016cdd) cell_eswt_app_pane_g1_ParamLimits

0xe04a,	// (0x00016cdd) cell_eswt_app_pane_g1

0xe079,	// (0x00016d0c) cell_eswt_app_pane_g2_ParamLimits

0xe079,	// (0x00016d0c) cell_eswt_app_pane_g2

0x0001,

0xfc4d,	// (0x000188e0) cell_eswt_app_pane_g_ParamLimits

0xfc4d,	// (0x000188e0) cell_eswt_app_pane_g

0xe0a2,	// (0x00016d35) cell_eswt_app_pane_t1_ParamLimits

0xe0a2,	// (0x00016d35) cell_eswt_app_pane_t1

0xe0d4,	// (0x00016d67) grid_highlight_pane_cp70_ParamLimits

0xe0d4,	// (0x00016d67) grid_highlight_pane_cp70

0x9aac,	// (0x0001273f) set_content_pane_g1

0x9e81,	// (0x00012b14) status_small_volume_pane

0x7585,	// (0x00010218) status_small_volume_pane_g1

0x758d,	// (0x00010220) volume_small2_pane

0x7596,	// (0x00010229) volume_small2_pane_g1

0x759f,	// (0x00010232) volume_small2_pane_g2

0x75a8,	// (0x0001023b) volume_small2_pane_g3

0x75b1,	// (0x00010244) volume_small2_pane_g4

0x75ba,	// (0x0001024d) volume_small2_pane_g5

0x75c3,	// (0x00010256) volume_small2_pane_g6

0x75cc,	// (0x0001025f) volume_small2_pane_g7

0x75d5,	// (0x00010268) volume_small2_pane_g8

0x75de,	// (0x00010271) volume_small2_pane_g9

0x75e7,	// (0x0001027a) volume_small2_pane_g10

0x0009,

0xfc52,	// (0x000188e5) volume_small2_pane_g

0xd7a1,	// (0x00016434) fep_vkb_top_text_pane_g1_ParamLimits

0xd7bc,	// (0x0001644f) fep_vkb_top_text_pane_t1_ParamLimits

0xda1e,	// (0x000166b1) popup_preview_fixed_window_g3_ParamLimits

0xda1e,	// (0x000166b1) popup_preview_fixed_window_g3

0xa448,	// (0x000130db) popup_toolbar_trans_pane

0xbebb,	// (0x00014b4e) aid_height_set_list_ParamLimits

0xbecc,	// (0x00014b5f) aid_size_parent_ParamLimits

0x9f5f,	// (0x00012bf2) list_highlight_pane_cp2_ParamLimits

0x9aac,	// (0x0001273f) set_content_pane_g1_ParamLimits

0xc175,	// (0x00014e08) list_single_image_pane_ParamLimits

0xc175,	// (0x00014e08) list_single_image_pane

0xe0e0,	// (0x00016d73) aid_size_cell_image_ParamLimits

0xe0e0,	// (0x00016d73) aid_size_cell_image

0xe0ed,	// (0x00016d80) grid_single_image_pane_ParamLimits

0xe0ed,	// (0x00016d80) grid_single_image_pane

0x8db9,	// (0x00011a4c) list_single_image_pane_g1_ParamLimits

0x8db9,	// (0x00011a4c) list_single_image_pane_g1

0x8dc5,	// (0x00011a58) list_single_image_pane_g2_ParamLimits

0x8dc5,	// (0x00011a58) list_single_image_pane_g2

0x0001,

0xfc67,	// (0x000188fa) list_single_image_pane_g_ParamLimits

0xfc67,	// (0x000188fa) list_single_image_pane_g

0xe0f9,	// (0x00016d8c) list_single_image_pane_t1_ParamLimits

0xe0f9,	// (0x00016d8c) list_single_image_pane_t1

0xe10f,	// (0x00016da2) cell_image_list_pane_ParamLimits

0xe10f,	// (0x00016da2) cell_image_list_pane

0xe123,	// (0x00016db6) cell_image_list_pane_g1

0xe12c,	// (0x00016dbf) cell_image_list_pane_g2

0x0001,

0xfc6c,	// (0x000188ff) cell_image_list_pane_g

0xe135,	// (0x00016dc8) aid_size_cell_tb_trans_pane

0x8d93,	// (0x00011a26) bg_tb_trans_pane

0xe147,	// (0x00016dda) grid_tb_trans_pane

0xaa11,	// (0x000136a4) bg_tb_trans_pane_g1

0xaa21,	// (0x000136b4) bg_tb_trans_pane_g2

0xaa19,	// (0x000136ac) bg_tb_trans_pane_g3

0xaa31,	// (0x000136c4) bg_tb_trans_pane_g4

0xaa29,	// (0x000136bc) bg_tb_trans_pane_g5

0xaa51,	// (0x000136e4) bg_tb_trans_pane_g6

0xaa49,	// (0x000136dc) bg_tb_trans_pane_g7

0xaa39,	// (0x000136cc) bg_tb_trans_pane_g8

0xaa41,	// (0x000136d4) bg_tb_trans_pane_g9

0x0008,

0xfc71,	// (0x00018904) bg_tb_trans_pane_g

0xe15b,	// (0x00016dee) cell_toolbar_trans_pane_ParamLimits

0xe15b,	// (0x00016dee) cell_toolbar_trans_pane

0xd3b2,	// (0x00016045) cell_toolbar_trans_pane_g1

0xcefd,	// (0x00015b90) list_form2_midp_pane_t1

0xcf0b,	// (0x00015b9e) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x000187a1) list_form2_midp_pane_t

0xcf19,	// (0x00015bac) scroll_pane_cp51_ParamLimits

0xd11c,	// (0x00015daf) form2_midp_wait_pane_g1

0xd125,	// (0x00015db8) form2_midp_wait_pane_g2

0xd12e,	// (0x00015dc1) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x000187b6) form2_midp_wait_pane_g

0x7fba,	// (0x00010c4d) list_highlight_pane_cp21_ParamLimits

0xd17d,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd18c,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc0e1,	// (0x00014d74) list_single_2graphic_im_pane_ParamLimits

0xc0e1,	// (0x00014d74) list_single_2graphic_im_pane

0xe181,	// (0x00016e14) list_single_2graphic_im_pane_g1_ParamLimits

0xe181,	// (0x00016e14) list_single_2graphic_im_pane_g1

0xe192,	// (0x00016e25) list_single_2graphic_im_pane_g2_ParamLimits

0xe192,	// (0x00016e25) list_single_2graphic_im_pane_g2

0xe19e,	// (0x00016e31) list_single_2graphic_im_pane_g3_ParamLimits

0xe19e,	// (0x00016e31) list_single_2graphic_im_pane_g3

0x0003,

0xfc84,	// (0x00018917) list_single_2graphic_im_pane_g_ParamLimits

0xfc84,	// (0x00018917) list_single_2graphic_im_pane_g

0xe1be,	// (0x00016e51) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x00016e51) list_single_2graphic_im_pane_t1

0xda2a,	// (0x000166bd) list_single_graphic_2heading_pane_fp_ParamLimits

0xda2a,	// (0x000166bd) list_single_graphic_2heading_pane_fp

0xda70,	// (0x00016703) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xda70,	// (0x00016703) list_single_graphic_2heading_pane_fp_g1

0xda41,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xda41,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2

0x8db9,	// (0x00011a4c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a4c) list_single_graphic_2heading_pane_fp_g3

0x8dc5,	// (0x00011a58) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a58) list_single_graphic_2heading_pane_fp_g4

0xda4d,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001883e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001883e) list_single_graphic_2heading_pane_fp_g

0xe1ef,	// (0x00016e82) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe1ef,	// (0x00016e82) list_single_graphic_2heading_pane_fp_t1

0xdaa8,	// (0x0001673b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdaa8,	// (0x0001673b) list_single_graphic_2heading_pane_fp_t2

0xe205,	// (0x00016e98) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe205,	// (0x00016e98) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8d,	// (0x00018920) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8d,	// (0x00018920) list_single_graphic_2heading_pane_fp_t

0xd452,	// (0x000160e5) fep_hwr_write_pane_g5_ParamLimits

0xd452,	// (0x000160e5) fep_hwr_write_pane_g5

0xd45e,	// (0x000160f1) fep_hwr_write_pane_g6_ParamLimits

0xd45e,	// (0x000160f1) fep_hwr_write_pane_g6

0xdec1,	// (0x00016b54) eswt_shell_pane_ParamLimits

0xab2b,	// (0x000137be) bg_popup_window_pane_cp18_ParamLimits

0xbdf2,	// (0x00014a85) heading_pane_cp70

0xdfeb,	// (0x00016c7e) popup_eswt_tasktip_window_t1_ParamLimits

0xa565,	// (0x000131f8) aid_touch_tab_arrow_left

0xa574,	// (0x00013207) aid_touch_tab_arrow_right

0x7f02,	// (0x00010b95) title_pane_g3_ParamLimits

0x7f02,	// (0x00010b95) title_pane_g3

0x8c80,	// (0x00011913) set_value_pane_g1

0xa448,	// (0x000130db) popup_toolbar_trans_pane_ParamLimits

0xe135,	// (0x00016dc8) aid_size_cell_tb_trans_pane_ParamLimits

0x8d93,	// (0x00011a26) bg_tb_trans_pane_ParamLimits

0xe147,	// (0x00016dda) grid_tb_trans_pane_ParamLimits

0x825d,	// (0x00010ef0) cont_note_pane_ParamLimits

0x825d,	// (0x00010ef0) cont_note_pane

0x8598,	// (0x0001122b) cont_snote2_single_text_pane_ParamLimits

0x8598,	// (0x0001122b) cont_snote2_single_text_pane

0x8598,	// (0x0001122b) cont_snote2_single_graphic_pane_ParamLimits

0x8598,	// (0x0001122b) cont_snote2_single_graphic_pane

0xb137,	// (0x00013dca) cont_note_wait_pane_ParamLimits

0xb137,	// (0x00013dca) cont_note_wait_pane

0xb137,	// (0x00013dca) cont_note_image_pane_ParamLimits

0xb137,	// (0x00013dca) cont_note_image_pane

0xe21b,	// (0x00016eae) popup_note2_window_g1_ParamLimits

0xe21b,	// (0x00016eae) popup_note2_window_g1

0xe24c,	// (0x00016edf) popup_note2_window_t1_ParamLimits

0xe24c,	// (0x00016edf) popup_note2_window_t1

0xe291,	// (0x00016f24) popup_note2_window_t2_ParamLimits

0xe291,	// (0x00016f24) popup_note2_window_t2

0xe2d6,	// (0x00016f69) popup_note2_window_t3_ParamLimits

0xe2d6,	// (0x00016f69) popup_note2_window_t3

0xe31b,	// (0x00016fae) popup_note2_window_t4_ParamLimits

0xe31b,	// (0x00016fae) popup_note2_window_t4

0x82d5,	// (0x00010f68) popup_note2_window_t5_ParamLimits

0x82d5,	// (0x00010f68) popup_note2_window_t5

0x0004,

0xfc99,	// (0x0001892c) popup_note2_window_t_ParamLimits

0xfc99,	// (0x0001892c) popup_note2_window_t

0xe34a,	// (0x00016fdd) popup_note2_image_window_g1_ParamLimits

0xe34a,	// (0x00016fdd) popup_note2_image_window_g1

0xe356,	// (0x00016fe9) popup_note2_image_window_g2_ParamLimits

0xe356,	// (0x00016fe9) popup_note2_image_window_g2

0x0001,

0xfca4,	// (0x00018937) popup_note2_image_window_g_ParamLimits

0xfca4,	// (0x00018937) popup_note2_image_window_g

0xe368,	// (0x00016ffb) popup_note2_image_window_t1_ParamLimits

0xe368,	// (0x00016ffb) popup_note2_image_window_t1

0xe380,	// (0x00017013) popup_note2_image_window_t2_ParamLimits

0xe380,	// (0x00017013) popup_note2_image_window_t2

0xe398,	// (0x0001702b) popup_note2_image_window_t3_ParamLimits

0xe398,	// (0x0001702b) popup_note2_image_window_t3

0x0002,

0xfca9,	// (0x0001893c) popup_note2_image_window_t_ParamLimits

0xfca9,	// (0x0001893c) popup_note2_image_window_t

0xb145,	// (0x00013dd8) popup_note2_wait_window_g1_ParamLimits

0xb145,	// (0x00013dd8) popup_note2_wait_window_g1

0xb151,	// (0x00013de4) popup_note2_wait_window_g2_ParamLimits

0xb151,	// (0x00013de4) popup_note2_wait_window_g2

0xb15d,	// (0x00013df0) popup_note2_wait_window_g3_ParamLimits

0xb15d,	// (0x00013df0) popup_note2_wait_window_g3

0x0002,

0xf87c,	// (0x0001850f) popup_note2_wait_window_g_ParamLimits

0xf87c,	// (0x0001850f) popup_note2_wait_window_g

0xe3b4,	// (0x00017047) popup_note2_wait_window_t1_ParamLimits

0xe3b4,	// (0x00017047) popup_note2_wait_window_t1

0xe3d2,	// (0x00017065) popup_note2_wait_window_t2_ParamLimits

0xe3d2,	// (0x00017065) popup_note2_wait_window_t2

0xe3f0,	// (0x00017083) popup_note2_wait_window_t3_ParamLimits

0xe3f0,	// (0x00017083) popup_note2_wait_window_t3

0xe402,	// (0x00017095) popup_note2_wait_window_t4_ParamLimits

0xe402,	// (0x00017095) popup_note2_wait_window_t4

0x0003,

0xfcb0,	// (0x00018943) popup_note2_wait_window_t_ParamLimits

0xfcb0,	// (0x00018943) popup_note2_wait_window_t

0xe414,	// (0x000170a7) wait_bar2_pane_ParamLimits

0xe414,	// (0x000170a7) wait_bar2_pane

0xe42c,	// (0x000170bf) popup_snote2_single_text_window_g1_ParamLimits

0xe42c,	// (0x000170bf) popup_snote2_single_text_window_g1

0xe454,	// (0x000170e7) popup_snote2_single_text_window_t1_ParamLimits

0xe454,	// (0x000170e7) popup_snote2_single_text_window_t1

0xe4a0,	// (0x00017133) popup_snote2_single_text_window_t2_ParamLimits

0xe4a0,	// (0x00017133) popup_snote2_single_text_window_t2

0xe4ec,	// (0x0001717f) popup_snote2_single_text_window_t3_ParamLimits

0xe4ec,	// (0x0001717f) popup_snote2_single_text_window_t3

0xe52d,	// (0x000171c0) popup_snote2_single_text_window_t4_ParamLimits

0xe52d,	// (0x000171c0) popup_snote2_single_text_window_t4

0xe563,	// (0x000171f6) popup_snote2_single_text_window_t5_ParamLimits

0xe563,	// (0x000171f6) popup_snote2_single_text_window_t5

0x0004,

0xfcb9,	// (0x0001894c) popup_snote2_single_text_window_t_ParamLimits

0xfcb9,	// (0x0001894c) popup_snote2_single_text_window_t

0xe58e,	// (0x00017221) popup_snote2_single_graphic_window_g1_ParamLimits

0xe58e,	// (0x00017221) popup_snote2_single_graphic_window_g1

0xe5b6,	// (0x00017249) popup_snote2_single_graphic_window_g2_ParamLimits

0xe5b6,	// (0x00017249) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc4,	// (0x00018957) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc4,	// (0x00018957) popup_snote2_single_graphic_window_g

0xe5de,	// (0x00017271) popup_snote2_single_graphic_window_t1_ParamLimits

0xe5de,	// (0x00017271) popup_snote2_single_graphic_window_t1

0xe62a,	// (0x000172bd) popup_snote2_single_graphic_window_t2_ParamLimits

0xe62a,	// (0x000172bd) popup_snote2_single_graphic_window_t2

0xe4ec,	// (0x0001717f) popup_snote2_single_graphic_window_t3_ParamLimits

0xe4ec,	// (0x0001717f) popup_snote2_single_graphic_window_t3

0xe52d,	// (0x000171c0) popup_snote2_single_graphic_window_t4_ParamLimits

0xe52d,	// (0x000171c0) popup_snote2_single_graphic_window_t4

0xe563,	// (0x000171f6) popup_snote2_single_graphic_window_t5_ParamLimits

0xe563,	// (0x000171f6) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc9,	// (0x0001895c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc9,	// (0x0001895c) popup_snote2_single_graphic_window_t

0xcdce,	// (0x00015a61) clock_nsta_pane_cp2_t1

0xcdce,	// (0x00015a61) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x00018777) clock_nsta_pane_cp2_t

0x8dad,	// (0x00011a40) form_field_data_wide_pane_g1_ParamLimits

0x8db9,	// (0x00011a4c) form_field_data_wide_pane_g2_ParamLimits

0x8db9,	// (0x00011a4c) form_field_data_wide_pane_g2

0x8dc5,	// (0x00011a58) form_field_data_wide_pane_g3_ParamLimits

0x8dc5,	// (0x00011a58) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001834d) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001834d) form_field_data_wide_pane_g

0xccd9,	// (0x0001596c) grid_touch_3_pane_ParamLimits

0xccd9,	// (0x0001596c) grid_touch_3_pane

0xe676,	// (0x00017309) cell_touch_3_pane_ParamLimits

0xe676,	// (0x00017309) cell_touch_3_pane

0xd3b2,	// (0x00016045) cell_touch_3_pane_g1

0xd3b2,	// (0x00016045) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x000187fc) cell_touch_3_pane_g

0x8307,	// (0x00010f9a) cont_query_data_pane

0x830f,	// (0x00010fa2) cont_query_data_pane_cp1

0xe6a5,	// (0x00017338) button_value_adjust_pane_cp7

0xe6ad,	// (0x00017340) query_popup_pane_cp3

0x962d,	// (0x000122c0) bg_popup_sub_pane_cp22_ParamLimits

0x68fe,	// (0x0000f591) navi_navi_volume_pane_cp2

0x6919,	// (0x0000f5ac) popup_side_volume_key_window_g2

0x6928,	// (0x0000f5bb) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x000183df) popup_side_volume_key_window_g

0x6945,	// (0x0000f5d8) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x000183e6) popup_side_volume_key_window_t

0x9976,	// (0x00012609) popup_side_volume_key_window_ParamLimits

0x89ab,	// (0x0001163e) list_double_graphic_pane_g4_ParamLimits

0x89ab,	// (0x0001163e) list_double_graphic_pane_g4

0xc12c,	// (0x00014dbf) list_single_2heading_msg_pane_ParamLimits

0xc12c,	// (0x00014dbf) list_single_2heading_msg_pane

0xe6dc,	// (0x0001736f) list_single_2heading_msg_pane_g1_ParamLimits

0xe6dc,	// (0x0001736f) list_single_2heading_msg_pane_g1

0x87da,	// (0x0001146d) list_single_2heading_msg_pane_g2_ParamLimits

0x87da,	// (0x0001146d) list_single_2heading_msg_pane_g2

0xe6e8,	// (0x0001737b) list_single_2heading_msg_pane_g3_ParamLimits

0xe6e8,	// (0x0001737b) list_single_2heading_msg_pane_g3

0xe6f4,	// (0x00017387) list_single_2heading_msg_pane_g4_ParamLimits

0xe6f4,	// (0x00017387) list_single_2heading_msg_pane_g4

0x0003,

0xfcd4,	// (0x00018967) list_single_2heading_msg_pane_g_ParamLimits

0xfcd4,	// (0x00018967) list_single_2heading_msg_pane_g

0xe70c,	// (0x0001739f) list_single_2heading_msg_pane_t1_ParamLimits

0xe70c,	// (0x0001739f) list_single_2heading_msg_pane_t1

0xe734,	// (0x000173c7) list_single_2heading_msg_pane_t2_ParamLimits

0xe734,	// (0x000173c7) list_single_2heading_msg_pane_t2

0xe768,	// (0x000173fb) list_single_2heading_msg_pane_t3_ParamLimits

0xe768,	// (0x000173fb) list_single_2heading_msg_pane_t3

0xe7a1,	// (0x00017434) list_single_2heading_msg_pane_t4_ParamLimits

0xe7a1,	// (0x00017434) list_single_2heading_msg_pane_t4

0x0003,

0xfcdd,	// (0x00018970) list_single_2heading_msg_pane_t_ParamLimits

0xfcdd,	// (0x00018970) list_single_2heading_msg_pane_t

0x7f0e,	// (0x00010ba1) title_pane_g4_ParamLimits

0x7f0e,	// (0x00010ba1) title_pane_g4

0x670c,	// (0x0000f39f) title_pane_stacon_g3_ParamLimits

0x670c,	// (0x0000f39f) title_pane_stacon_g3

0xe1b2,	// (0x00016e45) list_single_2graphic_im_pane_g4_ParamLimits

0xe1b2,	// (0x00016e45) list_single_2graphic_im_pane_g4

0xbb98,	// (0x0001482b) popup_side_volume_key_window_cp

0xc4a7,	// (0x0001513a) main_idle_act2_pane_t1

0x6d34,	// (0x0000f9c7) toolbar_button_pane_g10

0x8790,	// (0x00011423) popup_toolbar_window_cp1

0xcdbf,	// (0x00015a52) clock_nsta_pane_cp_t1

0xcdbf,	// (0x00015a52) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x00018772) clock_nsta_pane_cp_t

0x68fe,	// (0x0000f591) navi_navi_volume_pane_cp2_ParamLimits

0x690d,	// (0x0000f5a0) popup_side_volume_key_window_g1_ParamLimits

0x6919,	// (0x0000f5ac) popup_side_volume_key_window_g2_ParamLimits

0x6928,	// (0x0000f5bb) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x000183df) popup_side_volume_key_window_g_ParamLimits

0x71f1,	// (0x0000fe84) fep_hwr_aid_pane

0x7298,	// (0x0000ff2b) bg_fep_hwr_top_pane_g4_ParamLimits

0xd422,	// (0x000160b5) fep_hwr_top_pane_g1_ParamLimits

0xd434,	// (0x000160c7) fep_hwr_top_pane_g2_ParamLimits

0x72b8,	// (0x0000ff4b) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x000187c7) fep_hwr_top_pane_g_ParamLimits

0x72cd,	// (0x0000ff60) fep_hwr_top_text_pane_ParamLimits

0xb959,	// (0x000145ec) aid_touch_tab_arrow_arrow_2

0xb962,	// (0x000145f5) aid_touch_tab_arrow_left_2

0x7205,	// (0x0000fe98) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x723c,	// (0x0000fecf) fep_hwr_prediction_pane

0xd5a9,	// (0x0001623c) fep_vkb_prediction_pane

0xd6ad,	// (0x00016340) fep_vkb_side_pane_g3_ParamLimits

0xd6ad,	// (0x00016340) fep_vkb_side_pane_g3

0x7448,	// (0x000100db) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x74b4,	// (0x00010147) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x74c1,	// (0x00010154) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe3,	// (0x00018876) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x75f0,	// (0x00010283) fep_hwr_prediction_pane_g1

0x75fa,	// (0x0001028d) fep_hwr_prediction_pane_g2

0xd41a,	// (0x000160ad) fep_hwr_prediction_pane_g3

0x7602,	// (0x00010295) fep_hwr_prediction_pane_g4

0x0003,

0xfce6,	// (0x00018979) fep_hwr_prediction_pane_g

0xe7c6,	// (0x00017459) fep_vkb_prediction_pane_g1

0xe7d0,	// (0x00017463) fep_vkb_prediction_pane_g2

0xe7d8,	// (0x0001746b) fep_vkb_prediction_pane_g3

0xe7e0,	// (0x00017473) fep_vkb_prediction_pane_g4

0x0003,

0xfcef,	// (0x00018982) fep_vkb_prediction_pane_g

0x7020,	// (0x0000fcb3) slider_set_pane_g3

0x7034,	// (0x0000fcc7) slider_set_pane_g4

0x704c,	// (0x0000fcdf) slider_set_pane_g5

0x7020,	// (0x0000fcb3) slider_set_pane_g6

0x7062,	// (0x0000fcf5) slider_set_pane_g7

0xc029,	// (0x00014cbc) slider_form_pane_g3

0xc032,	// (0x00014cc5) slider_form_pane_g4

0xc03a,	// (0x00014ccd) slider_form_pane_g5

0xc029,	// (0x00014cbc) slider_form_pane_g6

0xc042,	// (0x00014cd5) slider_form_pane_g7

0xc77b,	// (0x0001540e) slider_set_pane_vc_g3

0xc784,	// (0x00015417) slider_set_pane_vc_g4

0xc78d,	// (0x00015420) slider_set_pane_vc_g5

0xc77b,	// (0x0001540e) slider_set_pane_vc_g6

0xc796,	// (0x00015429) slider_set_pane_vc_g7

0xc77b,	// (0x0001540e) slider_form_pane_vc_g1

0xc784,	// (0x00015417) slider_form_pane_vc_g2

0xc78d,	// (0x00015420) slider_form_pane_vc_g3

0xc77b,	// (0x0001540e) slider_form_pane_vc_g4

0xcaf7,	// (0x0001578a) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x00018758) slider_form_pane_vc_g

0x7ec6,	// (0x00010b59) main_idle_act3_pane

0xe7e8,	// (0x0001747b) ai3_links_pane

0xe7f1,	// (0x00017484) popup_ai3_data_window_ParamLimits

0xe7f1,	// (0x00017484) popup_ai3_data_window

0x7ec6,	// (0x00010b59) grid_ai3_links_pane

0xe809,	// (0x0001749c) cell_ai3_links_pane_ParamLimits

0xe809,	// (0x0001749c) cell_ai3_links_pane

0xe821,	// (0x000174b4) bg_popup_sub_pane_cp11

0xe82e,	// (0x000174c1) cell_ai3_links_pane_g1

0x7ec6,	// (0x00010b59) bg_popup_sub_pane_cp12

0xe853,	// (0x000174e6) heading_ai3_data_pane

0xe85b,	// (0x000174ee) list_ai3_gene_pane

0xe867,	// (0x000174fa) popup_ai3_data_window_g1

0xe86f,	// (0x00017502) heading_ai3_data_pane_g1

0xe877,	// (0x0001750a) heading_ai3_data_pane_t1

0xe885,	// (0x00017518) list_double_ai3_gene_pane_ParamLimits

0xe885,	// (0x00017518) list_double_ai3_gene_pane

0xe892,	// (0x00017525) list_single_ai3_gene_pane_ParamLimits

0xe892,	// (0x00017525) list_single_ai3_gene_pane

0xd377,	// (0x0001600a) list_highlight_pane_cp7_ParamLimits

0xd377,	// (0x0001600a) list_highlight_pane_cp7

0xe89f,	// (0x00017532) list_single_a13_gene_pane_t1_ParamLimits

0xe89f,	// (0x00017532) list_single_a13_gene_pane_t1

0xe8b6,	// (0x00017549) list_single_ai3_gene_pane_g1

0xe8bf,	// (0x00017552) list_single_ai3_gene_pane_g2

0x0001,

0xfcf8,	// (0x0001898b) list_single_ai3_gene_pane_g

0xe8c7,	// (0x0001755a) list_double_ai3_gene_pane_g1_ParamLimits

0xe8c7,	// (0x0001755a) list_double_ai3_gene_pane_g1

0xe8d3,	// (0x00017566) list_double_ai3_gene_pane_t1_ParamLimits

0xe8d3,	// (0x00017566) list_double_ai3_gene_pane_t1

0xe8ef,	// (0x00017582) list_double_ai3_gene_pane_t2_ParamLimits

0xe8ef,	// (0x00017582) list_double_ai3_gene_pane_t2

0xe904,	// (0x00017597) list_double_ai3_gene_pane_t3_ParamLimits

0xe904,	// (0x00017597) list_double_ai3_gene_pane_t3

0x0002,

0xfcfd,	// (0x00018990) list_double_ai3_gene_pane_t_ParamLimits

0xfcfd,	// (0x00018990) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe6be,	// (0x00017351) aid_size_min_col_2

0xe6c8,	// (0x0001735b) aid_size_min_msg_ParamLimits

0xe6c8,	// (0x0001735b) aid_size_min_msg

0xd7ad,	// (0x00016440) fep_vkb_top_text_pane_g2_ParamLimits

0xd7ad,	// (0x00016440) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x000187f7) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x000187f7) fep_vkb_top_text_pane_g

0x7ec6,	// (0x00010b59) main_hc_apps_shell_pane

0xe921,	// (0x000175b4) grid_hc_apps_pane_ParamLimits

0xe921,	// (0x000175b4) grid_hc_apps_pane

0xe930,	// (0x000175c3) list_hc_apps_pane

0xe938,	// (0x000175cb) scroll_pane_cp37_ParamLimits

0xe938,	// (0x000175cb) scroll_pane_cp37

0xe944,	// (0x000175d7) cell_hc_apps_pane_ParamLimits

0xe944,	// (0x000175d7) cell_hc_apps_pane

0xe9f4,	// (0x00017687) cell_hc_apps_pane_g1_ParamLimits

0xe9f4,	// (0x00017687) cell_hc_apps_pane_g1

0xea25,	// (0x000176b8) cell_hc_apps_pane_g2_ParamLimits

0xea25,	// (0x000176b8) cell_hc_apps_pane_g2

0xea41,	// (0x000176d4) cell_hc_apps_pane_g3_ParamLimits

0xea41,	// (0x000176d4) cell_hc_apps_pane_g3

0x0002,

0xfd04,	// (0x00018997) cell_hc_apps_pane_g_ParamLimits

0xfd04,	// (0x00018997) cell_hc_apps_pane_g

0xea63,	// (0x000176f6) cell_hc_apps_pane_t1_ParamLimits

0xea63,	// (0x000176f6) cell_hc_apps_pane_t1

0x825d,	// (0x00010ef0) grid_highlight_pane_cp10_ParamLimits

0x825d,	// (0x00010ef0) grid_highlight_pane_cp10

0xeaa3,	// (0x00017736) list_single_hc_apps_pane_ParamLimits

0xeaa3,	// (0x00017736) list_single_hc_apps_pane

0xeb16,	// (0x000177a9) list_single_hc_apps_pane_g1

0xeb2f,	// (0x000177c2) list_single_hc_apps_pane_g2

0x0001,

0xfd0b,	// (0x0001899e) list_single_hc_apps_pane_g

0xeb48,	// (0x000177db) list_single_hc_apps_pane_g2_copy1

0xeb64,	// (0x000177f7) list_single_hc_apps_pane_t1

0x7fba,	// (0x00010c4d) bg_set_opt_pane_cp_ParamLimits

0x6637,	// (0x0000f2ca) setting_slider_pane_t1_ParamLimits

0x6650,	// (0x0000f2e3) setting_slider_pane_t2_ParamLimits

0x6669,	// (0x0000f2fc) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00018235) setting_slider_pane_t_ParamLimits

0x6680,	// (0x0000f313) slider_set_pane_ParamLimits

0x6ba6,	// (0x0000f839) control_pane_g5_ParamLimits

0x6ba6,	// (0x0000f839) control_pane_g5

0xbe86,	// (0x00014b19) slider_set_pane_g1_ParamLimits

0x7014,	// (0x0000fca7) slider_set_pane_g2_ParamLimits

0x7020,	// (0x0000fcb3) slider_set_pane_g3_ParamLimits

0x7034,	// (0x0000fcc7) slider_set_pane_g4_ParamLimits

0x704c,	// (0x0000fcdf) slider_set_pane_g5_ParamLimits

0x7020,	// (0x0000fcb3) slider_set_pane_g6_ParamLimits

0x7062,	// (0x0000fcf5) slider_set_pane_g7_ParamLimits

0xf998,	// (0x0001862b) slider_set_pane_g_ParamLimits

0x9a57,	// (0x000126ea) navi_icon_text_pane_ParamLimits

0xa526,	// (0x000131b9) aid_fill_nsta_2_ParamLimits

0xa565,	// (0x000131f8) aid_touch_tab_arrow_left_ParamLimits

0xa574,	// (0x00013207) aid_touch_tab_arrow_right_ParamLimits

0xa5e1,	// (0x00013274) clock_nsta_pane_ParamLimits

0xb935,	// (0x000145c8) navi_icon_pane_g1_ParamLimits

0xb944,	// (0x000145d7) navi_text_pane_t1_ParamLimits

0xced1,	// (0x00015b64) navi_icon_text_pane_g1_ParamLimits

0xcee0,	// (0x00015b73) navi_icon_text_pane_t1_ParamLimits

0xeb16,	// (0x000177a9) list_single_hc_apps_pane_g1_ParamLimits

0xeb2f,	// (0x000177c2) list_single_hc_apps_pane_g2_ParamLimits

0xfd0b,	// (0x0001899e) list_single_hc_apps_pane_g_ParamLimits

0xeb48,	// (0x000177db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeb64,	// (0x000177f7) list_single_hc_apps_pane_t1_ParamLimits

0x6551,	// (0x0000f1e4) popup_toolbar2_fixed_window_ParamLimits

0x6551,	// (0x0000f1e4) popup_toolbar2_fixed_window

0xa43e,	// (0x000130d1) popup_toolbar2_float_window

0x7ec6,	// (0x00010b59) bg_popup_sub_pane_cp27

0xeb92,	// (0x00017825) grid_toolbar2_float_pane

0x7ec6,	// (0x00010b59) bg_popup_sub_pane_cp26

0xeb92,	// (0x00017825) grid_toolbar2_fixed_pane

0xeb9a,	// (0x0001782d) cell_toolbar2_fixed_pane_ParamLimits

0xeb9a,	// (0x0001782d) cell_toolbar2_fixed_pane

0xebab,	// (0x0001783e) cell_toolbar2_fixed_pane_g1

0xebb4,	// (0x00017847) toolbar2_fixed_button_pane

0xaa11,	// (0x000136a4) toolbar2_fixed_button_pane_g1

0xaa21,	// (0x000136b4) toolbar2_fixed_button_pane_g2

0xaa19,	// (0x000136ac) toolbar2_fixed_button_pane_g3

0xaa31,	// (0x000136c4) toolbar2_fixed_button_pane_g4

0xaa29,	// (0x000136bc) toolbar2_fixed_button_pane_g5

0xaa39,	// (0x000136cc) toolbar2_fixed_button_pane_g6

0xaa41,	// (0x000136d4) toolbar2_fixed_button_pane_g7

0xaa51,	// (0x000136e4) toolbar2_fixed_button_pane_g8

0xaa49,	// (0x000136dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x0001852d) toolbar2_fixed_button_pane_g

0xebbc,	// (0x0001784f) cell_toolbar2_float_pane_ParamLimits

0xebbc,	// (0x0001784f) cell_toolbar2_float_pane

0xebcd,	// (0x00017860) cell_toolbar2_float_pane_g1

0xebb4,	// (0x00017847) toolbar2_fixed_button_pane_cp

0xd502,	// (0x00016195) fep_vkb_accented_list_pane_ParamLimits

0xd502,	// (0x00016195) fep_vkb_accented_list_pane

0x7428,	// (0x000100bb) bg_popup_fep_shadow_pane_g9

0x9bd9,	// (0x0001286c) bg_popup_fep_shadow_pane_cp3

0x906d,	// (0x00011d00) list_accented_list_pane

0xebd6,	// (0x00017869) list_single_accented_list_pane_ParamLimits

0xebd6,	// (0x00017869) list_single_accented_list_pane

0x9bd9,	// (0x0001286c) list_highlight_pane_cp10

0xebe7,	// (0x0001787a) list_single_accented_list_pane_t1

0xa38e,	// (0x00013021) popup_slider_window_ParamLimits

0xa38e,	// (0x00013021) popup_slider_window

0xe6b5,	// (0x00017348) aid_indentation_list_msg

0xeca1,	// (0x00017934) bg_popup_window_pane_cp19

0xed0b,	// (0x0001799e) popup_slider_window_g1

0xed27,	// (0x000179ba) popup_slider_window_g2

0xed43,	// (0x000179d6) popup_slider_window_g3

0x0005,

0xfd10,	// (0x000189a3) popup_slider_window_g

0xed9f,	// (0x00017a32) popup_slider_window_t1

0xee13,	// (0x00017aa6) small_volume_slider_vertical_pane

0xd3b2,	// (0x00016045) small_volume_slider_vertical_pane_g1

0xd3b2,	// (0x00016045) small_volume_slider_vertical_pane_g2

0xee2f,	// (0x00017ac2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd22,	// (0x000189b5) small_volume_slider_vertical_pane_g

0x6317,	// (0x0000efaa) area_side_right_pane_ParamLimits

0x6317,	// (0x0000efaa) area_side_right_pane

0x760a,	// (0x0001029d) aid_size_side_button_ParamLimits

0x760a,	// (0x0001029d) aid_size_side_button

0x761e,	// (0x000102b1) grid_sctrl_middle_pane_ParamLimits

0x761e,	// (0x000102b1) grid_sctrl_middle_pane

0x763e,	// (0x000102d1) sctrl_sk_bottom_pane

0x764f,	// (0x000102e2) sctrl_sk_top_pane

0x7661,	// (0x000102f4) aid_touch_sctrl_top

0x766e,	// (0x00010301) bg_sctrl_sk_pane_ParamLimits

0x766e,	// (0x00010301) bg_sctrl_sk_pane

0x767c,	// (0x0001030f) sctrl_sk_top_pane_g1

0x7689,	// (0x0001031c) sctrl_sk_top_pane_t1

0x7661,	// (0x000102f4) aid_touch_sctrl_bottom

0x766e,	// (0x00010301) bg_sctrl_sk_pane_cp_ParamLimits

0x766e,	// (0x00010301) bg_sctrl_sk_pane_cp

0x76a4,	// (0x00010337) sctrl_sk_bottom_pane_g1

0x7689,	// (0x0001031c) sctrl_sk_bottom_pane_t1

0x76ad,	// (0x00010340) cell_sctrl_middle_pane_ParamLimits

0x76ad,	// (0x00010340) cell_sctrl_middle_pane

0x76c8,	// (0x0001035b) aid_touch_sctrl_middle_ParamLimits

0x76c8,	// (0x0001035b) aid_touch_sctrl_middle

0x76da,	// (0x0001036d) bg_sctrl_middle_pane_ParamLimits

0x76da,	// (0x0001036d) bg_sctrl_middle_pane

0x7448,	// (0x000100db) cell_sctrl_middle_pane_g1_ParamLimits

0x7448,	// (0x000100db) cell_sctrl_middle_pane_g1

0x76e8,	// (0x0001037b) cell_sctrl_middle_pane_g2_ParamLimits

0x76e8,	// (0x0001037b) cell_sctrl_middle_pane_g2

0x0001,

0xfd2e,	// (0x000189c1) cell_sctrl_middle_pane_g_ParamLimits

0xfd2e,	// (0x000189c1) cell_sctrl_middle_pane_g

0xaa11,	// (0x000136a4) bg_sctrl_middle_pane_g1

0xaa19,	// (0x000136ac) bg_sctrl_middle_pane_g2

0xaa21,	// (0x000136b4) bg_sctrl_middle_pane_g3

0xaa29,	// (0x000136bc) bg_sctrl_middle_pane_g4

0xaa31,	// (0x000136c4) bg_sctrl_middle_pane_g5

0xaa39,	// (0x000136cc) bg_sctrl_middle_pane_g6

0xaa41,	// (0x000136d4) bg_sctrl_middle_pane_g7

0xaa49,	// (0x000136dc) bg_sctrl_middle_pane_g8

0x0007,

0xfd33,	// (0x000189c6) bg_sctrl_middle_pane_g

0xaa51,	// (0x000136e4) bg_sctrl_middle_pane_g8_copy1

0xaa11,	// (0x000136a4) bg_sctrl_sk_pane_g1

0xaa21,	// (0x000136b4) bg_sctrl_sk_pane_g2

0xaa19,	// (0x000136ac) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x0001852d) bg_sctrl_sk_pane_g

0x8756,	// (0x000113e9) aid_size_touch_scroll_bar

0xaa31,	// (0x000136c4) bg_sctrl_sk_pane_g4

0xaa29,	// (0x000136bc) bg_sctrl_sk_pane_g5

0xaa39,	// (0x000136cc) bg_sctrl_sk_pane_g6

0xaa41,	// (0x000136d4) bg_sctrl_sk_pane_g7

0xaa51,	// (0x000136e4) bg_sctrl_sk_pane_g8

0xaa49,	// (0x000136dc) bg_sctrl_sk_pane_g9

0xa007,	// (0x00012c9a) popup_fep_china_hwr2_fs_candidate_window

0xa011,	// (0x00012ca4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa011,	// (0x00012ca4) popup_fep_china_hwr2_fs_control_window

0x7448,	// (0x000100db) sctrl_sk_top_pane_g2

0x0001,

0xfd29,	// (0x000189bc) sctrl_sk_top_pane_g

0xee38,	// (0x00017acb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xee38,	// (0x00017acb) aid_fep_china_hwr2_fs_cell

0xee4a,	// (0x00017add) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xee4a,	// (0x00017add) bg_popup_fep_shadow_pane_cp4

0xee61,	// (0x00017af4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xee61,	// (0x00017af4) bg_popup_fep_shadow_pane_cp5

0xee73,	// (0x00017b06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xee73,	// (0x00017b06) popup_fep_china_hwr2_fs_control_bar_grid

0xee83,	// (0x00017b16) popup_fep_china_hwr2_fs_control_funtion_grid

0xee8b,	// (0x00017b1e) aid_fep_china_hwr2_fs_candi_cell

0x7ec6,	// (0x00010b59) bg_popup_fep_shadow_pane_cp6

0xee95,	// (0x00017b28) popup_fep_china_hwr2_fs_candidate_grid

0xee9f,	// (0x00017b32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xee9f,	// (0x00017b32) cell_fep_china_hwr2_fs_funtion_grid

0xd3b2,	// (0x00016045) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xeeb7,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xeeb7,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeec5,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeec5,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd44,	// (0x000189d7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd44,	// (0x000189d7) cell_fep_china_hwr2_fs_funtion_grid_g

0xeedb,	// (0x00017b6e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xeedb,	// (0x00017b6e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xeef0,	// (0x00017b83) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xeef0,	// (0x00017b83) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd49,	// (0x000189dc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd49,	// (0x000189dc) cell_fep_china_hwr2_fs_funtion_grid_t

0xef0c,	// (0x00017b9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xef14,	// (0x00017ba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xef1c,	// (0x00017baf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4e,	// (0x000189e1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xef24,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xef24,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid

0xef3d,	// (0x00017bd0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xef45,	// (0x00017bd8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd3b2,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd3b2,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x000187fc) cell_fep_china_hwr2_fs_candidate_grid_g

0xef4d,	// (0x00017be0) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa5ee,	// (0x00013281) clock_nsta_pane_cp_24_ParamLimits

0xa5ee,	// (0x00013281) clock_nsta_pane_cp_24

0xa66c,	// (0x000132ff) indicator_nsta_pane_cp_24_ParamLimits

0xa66c,	// (0x000132ff) indicator_nsta_pane_cp_24

0xb7b1,	// (0x00014444) heading_pane_g1

0x0001,

0xf8ff,	// (0x00018592) heading_pane_g

0xc2ee,	// (0x00014f81) grid_sct_catagory_button_pane

0xc320,	// (0x00014fb3) scroll_pane_cp5_ParamLimits

0xcf25,	// (0x00015bb8) button_value_adjust_pane_cp5_ParamLimits

0xcf25,	// (0x00015bb8) button_value_adjust_pane_cp5

0xd01d,	// (0x00015cb0) form2_midp_time_pane_ParamLimits

0xef5b,	// (0x00017bee) cell_sct_catagory_button_pane_ParamLimits

0xef5b,	// (0x00017bee) cell_sct_catagory_button_pane

0xd377,	// (0x0001600a) bg_button_pane_cp01_ParamLimits

0xd377,	// (0x0001600a) bg_button_pane_cp01

0xd3b2,	// (0x00016045) cell_sct_catagory_button_pane_g1

0xa3cd,	// (0x00013060) popup_tb_extension_window

0xef6d,	// (0x00017c00) aid_size_cell_ext_ParamLimits

0xef6d,	// (0x00017c00) aid_size_cell_ext

0x825d,	// (0x00010ef0) bg_tb_trans_pane_cp1_ParamLimits

0x825d,	// (0x00010ef0) bg_tb_trans_pane_cp1

0xef8d,	// (0x00017c20) grid_tb_ext_pane_ParamLimits

0xef8d,	// (0x00017c20) grid_tb_ext_pane

0xefbf,	// (0x00017c52) cell_tb_ext_pane_ParamLimits

0xefbf,	// (0x00017c52) cell_tb_ext_pane

0xefd6,	// (0x00017c69) cell_tb_ext_pane_g1_ParamLimits

0xefd6,	// (0x00017c69) cell_tb_ext_pane_g1

0xeff3,	// (0x00017c86) cell_tb_ext_pane_t1

0x825d,	// (0x00010ef0) list_highlight_pane_cp11_ParamLimits

0x825d,	// (0x00010ef0) list_highlight_pane_cp11

0x6570,	// (0x0000f203) popup_uni_indicator_window_ParamLimits

0x6570,	// (0x0000f203) popup_uni_indicator_window

0x8d93,	// (0x00011a26) bg_popup_sub_pane_cp14

0xf00e,	// (0x00017ca1) list_uniindi_pane

0xf01a,	// (0x00017cad) uniindi_top_pane

0x825d,	// (0x00010ef0) bg_uniindi_top_pane

0xf039,	// (0x00017ccc) uniindi_top_pane_g1

0xf04f,	// (0x00017ce2) uniindi_top_pane_g2

0x0003,

0xfd55,	// (0x000189e8) uniindi_top_pane_g

0xf079,	// (0x00017d0c) uniindi_top_pane_t1

0xf0a3,	// (0x00017d36) list_single_uniindi_pane_ParamLimits

0xf0a3,	// (0x00017d36) list_single_uniindi_pane

0xd3b2,	// (0x00016045) bg_uniindi_top_pane_g1

0xf0b5,	// (0x00017d48) list_single_uniindi_pane_g1

0xf0c8,	// (0x00017d5b) list_single_uniindi_pane_t1

0x63f4,	// (0x0000f087) control_bg_pane

0xf0ed,	// (0x00017d80) bg_sctrl_sk_pane_cp1

0xf0f6,	// (0x00017d89) bg_sctrl_sk_pane_cp2

0xf0ff,	// (0x00017d92) control_bg_pane_g1

0xf108,	// (0x00017d9b) control_bg_pane_g2

0x0001,

0xfd5e,	// (0x000189f1) control_bg_pane_g

0xcd83,	// (0x00015a16) cell_indicator_nsta_pane_g1_ParamLimits

0xcd91,	// (0x00015a24) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x0001876d) cell_indicator_nsta_pane_g_ParamLimits

0xd0a1,	// (0x00015d34) form2_midp_time_pane_t1_ParamLimits

0x8598,	// (0x0001122b) main_idle_act4_pane_ParamLimits

0x8598,	// (0x0001122b) main_idle_act4_pane

0xa3cd,	// (0x00013060) popup_tb_extension_window_ParamLimits

0xefaf,	// (0x00017c42) tb_ext_find_pane_ParamLimits

0xefaf,	// (0x00017c42) tb_ext_find_pane

0xf111,	// (0x00017da4) ai_gene_pane_1_cp1

0x9d22,	// (0x000129b5) ai_gene_pane_2_cp1

0xf119,	// (0x00017dac) list_single_idle_plugin_calendar_pane

0xf122,	// (0x00017db5) list_single_idle_plugin_notification_pane

0xf12b,	// (0x00017dbe) list_single_idle_plugin_player_pane

0xf134,	// (0x00017dc7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf134,	// (0x00017dc7) list_single_idle_plugin_shortcut_pane

0xf156,	// (0x00017de9) main_idle_act4_pane_t1

0xf168,	// (0x00017dfb) main_idle_act4_pane_t2

0x0001,

0xfd63,	// (0x000189f6) main_idle_act4_pane_t

0xf17a,	// (0x00017e0d) middle_sk_idle_act4_pane_ParamLimits

0xf17a,	// (0x00017e0d) middle_sk_idle_act4_pane

0xf190,	// (0x00017e23) popup_clock_digital_analogue_window_cp2

0xf1aa,	// (0x00017e3d) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1aa,	// (0x00017e3d) shortcut_wheel_idle_act4_pane

0xd3b2,	// (0x00016045) shortcut_wheel_idle_act4_pane_g1

0xd3b2,	// (0x00016045) shortcut_wheel_idle_act4_pane_g2

0xd3b2,	// (0x00016045) shortcut_wheel_idle_act4_pane_g3

0xd3b2,	// (0x00016045) shortcut_wheel_idle_act4_pane_g4

0xd3b2,	// (0x00016045) shortcut_wheel_idle_act4_pane_g5

0xf1be,	// (0x00017e51) shortcut_wheel_idle_act4_pane_g6

0xf1c6,	// (0x00017e59) shortcut_wheel_idle_act4_pane_g7

0xf1ce,	// (0x00017e61) shortcut_wheel_idle_act4_pane_g8

0xf1d6,	// (0x00017e69) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd68,	// (0x000189fb) shortcut_wheel_idle_act4_pane_g

0xd659,	// (0x000162ec) middle_sk_idle_act4_pane_g1_ParamLimits

0xd659,	// (0x000162ec) middle_sk_idle_act4_pane_g1

0xf23a,	// (0x00017ecd) middle_sk_idle_act4_pane_g2_ParamLimits

0xf23a,	// (0x00017ecd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8b,	// (0x00018a1e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8b,	// (0x00018a1e) middle_sk_idle_act4_pane_g

0xf246,	// (0x00017ed9) middle_sk_idle_act4_pane_t1_ParamLimits

0xf246,	// (0x00017ed9) middle_sk_idle_act4_pane_t1

0xf263,	// (0x00017ef6) grid_ai_shortcut_pane_ParamLimits

0xf263,	// (0x00017ef6) grid_ai_shortcut_pane

0xf27c,	// (0x00017f0f) list_highlight_pane_cp16_ParamLimits

0xf27c,	// (0x00017f0f) list_highlight_pane_cp16

0xf289,	// (0x00017f1c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf289,	// (0x00017f1c) list_single_idle_plugin_shortcut_pane_g1

0xf295,	// (0x00017f28) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf295,	// (0x00017f28) list_single_idle_plugin_shortcut_pane_g2

0xf2ad,	// (0x00017f40) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf2ad,	// (0x00017f40) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd90,	// (0x00018a23) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd90,	// (0x00018a23) list_single_idle_plugin_shortcut_pane_g

0xf2c0,	// (0x00017f53) cell_ai_shortcut_pane_ParamLimits

0xf2c0,	// (0x00017f53) cell_ai_shortcut_pane

0xf2e1,	// (0x00017f74) cell_ai_shortcut_pane_g1_ParamLimits

0xf2e1,	// (0x00017f74) cell_ai_shortcut_pane_g1

0xf111,	// (0x00017da4) ai_gene_pane_1_cp2

0xf303,	// (0x00017f96) ai_gene_pane_2_cp2

0xf30b,	// (0x00017f9e) list_highlight_pane_cp15

0xf314,	// (0x00017fa7) list_single_idle_plugin_calendar_pane_g1

0xf30b,	// (0x00017f9e) list_highlight_pane_cp17

0xf31c,	// (0x00017faf) list_single_idle_plugin_calendar_pane_g1_copy1

0xf324,	// (0x00017fb7) list_single_idle_plugin_player_pane_g1

0xc547,	// (0x000151da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd97,	// (0x00018a2a) list_single_idle_plugin_player_pane_g

0xf32c,	// (0x00017fbf) list_single_idle_plugin_player_pane_t1

0xf33a,	// (0x00017fcd) list_single_idle_plugin_player_pane_t2

0xf348,	// (0x00017fdb) list_single_idle_plugin_player_pane_t3

0xf356,	// (0x00017fe9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9c,	// (0x00018a2f) list_single_idle_plugin_player_pane_t

0xf364,	// (0x00017ff7) wait_bar_pane_cp15

0xf36c,	// (0x00017fff) grid_ai_notification_pane

0xc547,	// (0x000151da) list_single_idle_plugin_notification_pane_g1

0xf375,	// (0x00018008) cell_ai_notification_pane_ParamLimits

0xf375,	// (0x00018008) cell_ai_notification_pane

0xf382,	// (0x00018015) cell_ai_notification_pane_g1

0xf38a,	// (0x0001801d) cell_ai_notification_pane_t1

0xf398,	// (0x0001802b) tb_ext_find_button_pane

0xf3a0,	// (0x00018033) tb_ext_find_pane_g1

0xf3a8,	// (0x0001803b) tb_ext_find_pane_t1

0x956c,	// (0x000121ff) tb_ext_find_button_pane_g1

0xf3b6,	// (0x00018049) tb_ext_find_button_pane_g2

0x0001,

0xfda5,	// (0x00018a38) tb_ext_find_button_pane_g

0xf156,	// (0x00017de9) main_idle_act4_pane_t1_ParamLimits

0xf168,	// (0x00017dfb) main_idle_act4_pane_t2_ParamLimits

0xfd63,	// (0x000189f6) main_idle_act4_pane_t_ParamLimits

0xf190,	// (0x00017e23) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf19e,	// (0x00017e31) sat_plugin_idle_act4_pane_ParamLimits

0xf19e,	// (0x00017e31) sat_plugin_idle_act4_pane

0xf3bf,	// (0x00018052) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf3bf,	// (0x00018052) sat_plugin_idle_act4_pane_t1

0xf3d2,	// (0x00018065) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3d2,	// (0x00018065) sat_plugin_idle_act4_pane_t2

0xf3e5,	// (0x00018078) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3e5,	// (0x00018078) sat_plugin_idle_act4_pane_t3

0xf3f8,	// (0x0001808b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3f8,	// (0x0001808b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaa,	// (0x00018a3d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaa,	// (0x00018a3d) sat_plugin_idle_act4_pane_t

0x64b9,	// (0x0000f14c) popup_battery_window_ParamLimits

0x64b9,	// (0x0000f14c) popup_battery_window

0x825d,	// (0x00010ef0) bg_popup_sub_pane_cp25_ParamLimits

0x825d,	// (0x00010ef0) bg_popup_sub_pane_cp25

0xf40b,	// (0x0001809e) popup_battery_window_g1_ParamLimits

0xf40b,	// (0x0001809e) popup_battery_window_g1

0xf417,	// (0x000180aa) popup_battery_window_t1_ParamLimits

0xf417,	// (0x000180aa) popup_battery_window_t1

0xf429,	// (0x000180bc) popup_battery_window_t2_ParamLimits

0xf429,	// (0x000180bc) popup_battery_window_t2

0x0001,

0xfdb3,	// (0x00018a46) popup_battery_window_t_ParamLimits

0xfdb3,	// (0x00018a46) popup_battery_window_t

0x9bed,	// (0x00012880) midp_canvas_pane_ParamLimits

0x9c64,	// (0x000128f7) midp_keypad_pane_ParamLimits

0x9c64,	// (0x000128f7) midp_keypad_pane

0x9f5f,	// (0x00012bf2) main_midp_pane_ParamLimits

0xcddd,	// (0x00015a70) signal_pane_g2_cp_ParamLimits

0xf446,	// (0x000180d9) aid_size_cell_midp_keypad_ParamLimits

0xf446,	// (0x000180d9) aid_size_cell_midp_keypad

0xf460,	// (0x000180f3) midp_keyp_game_grid_pane_ParamLimits

0xf460,	// (0x000180f3) midp_keyp_game_grid_pane

0xf480,	// (0x00018113) midp_keyp_rocker_pane_ParamLimits

0xf480,	// (0x00018113) midp_keyp_rocker_pane

0xf4b9,	// (0x0001814c) midp_keyp_sk_left_pane_ParamLimits

0xf4b9,	// (0x0001814c) midp_keyp_sk_left_pane

0xf513,	// (0x000181a6) midp_keyp_sk_right_pane_ParamLimits

0xf513,	// (0x000181a6) midp_keyp_sk_right_pane

0x7ec6,	// (0x00010b59) bg_button_pane_cp03

0xf56d,	// (0x00018200) midp_keyp_sk_left_pane_g1

0x7ec6,	// (0x00010b59) bg_button_pane_cp04

0xf56d,	// (0x00018200) midp_keyp_sk_right_pane_g1

0xd3b2,	// (0x00016045) midp_keyp_rocker_pane_g1

0xf576,	// (0x00018209) keyp_game_cell_pane_ParamLimits

0xf576,	// (0x00018209) keyp_game_cell_pane

0x7ec6,	// (0x00010b59) bg_button_pane_cp02

0xf589,	// (0x0001821c) keyp_game_cell_pane_g1

0x64ef,	// (0x0000f182) popup_fep_vkb2_window_ParamLimits

0x64ef,	// (0x0000f182) popup_fep_vkb2_window

0x770a,	// (0x0001039d) aid_size_cell_vkb2_ParamLimits

0x770a,	// (0x0001039d) aid_size_cell_vkb2

0x775e,	// (0x000103f1) popup_fep_vkb2_window_g1_ParamLimits

0x775e,	// (0x000103f1) popup_fep_vkb2_window_g1

0x779e,	// (0x00010431) vkb2_area_bottom_pane_ParamLimits

0x779e,	// (0x00010431) vkb2_area_bottom_pane

0x77ea,	// (0x0001047d) vkb2_area_keypad_pane_ParamLimits

0x77ea,	// (0x0001047d) vkb2_area_keypad_pane

0x782c,	// (0x000104bf) vkb2_area_top_pane_ParamLimits

0x782c,	// (0x000104bf) vkb2_area_top_pane

0x78a6,	// (0x00010539) vkb2_top_entry_pane_ParamLimits

0x78a6,	// (0x00010539) vkb2_top_entry_pane

0x78d0,	// (0x00010563) vkb2_top_grid_left_pane_ParamLimits

0x78d0,	// (0x00010563) vkb2_top_grid_left_pane

0x78ee,	// (0x00010581) vkb2_top_grid_right_pane_ParamLimits

0x78ee,	// (0x00010581) vkb2_top_grid_right_pane

0x790c,	// (0x0001059f) vkb2_cell_keypad_pane_ParamLimits

0x790c,	// (0x0001059f) vkb2_cell_keypad_pane

0x79dd,	// (0x00010670) vkb2_area_bottom_grid_pane_ParamLimits

0x79dd,	// (0x00010670) vkb2_area_bottom_grid_pane

0x7a03,	// (0x00010696) vkb2_area_bottom_pane_g1_ParamLimits

0x7a03,	// (0x00010696) vkb2_area_bottom_pane_g1

0x7a27,	// (0x000106ba) vkb2_area_bottom_pane_g2_ParamLimits

0x7a27,	// (0x000106ba) vkb2_area_bottom_pane_g2

0x7a55,	// (0x000106e8) vkb2_area_bottom_pane_g3_ParamLimits

0x7a55,	// (0x000106e8) vkb2_area_bottom_pane_g3

0x0002,

0xfdb8,	// (0x00018a4b) vkb2_area_bottom_pane_g_ParamLimits

0xfdb8,	// (0x00018a4b) vkb2_area_bottom_pane_g

0x7ab6,	// (0x00010749) vkb2_top_cell_left_pane_ParamLimits

0x7ab6,	// (0x00010749) vkb2_top_cell_left_pane

0x01e2,	// (0x00008e75) vkb2_top_entry_pane_g1_ParamLimits

0x01e2,	// (0x00008e75) vkb2_top_entry_pane_g1

0x01f0,	// (0x00008e83) vkb2_top_entry_pane_t1_ParamLimits

0x01f0,	// (0x00008e83) vkb2_top_entry_pane_t1

0x0222,	// (0x00008eb5) vkb2_top_entry_pane_t2_ParamLimits

0x0222,	// (0x00008eb5) vkb2_top_entry_pane_t2

0x0254,	// (0x00008ee7) vkb2_top_entry_pane_t3_ParamLimits

0x0254,	// (0x00008ee7) vkb2_top_entry_pane_t3

0x0002,

0xfdbf,	// (0x00018a52) vkb2_top_entry_pane_t_ParamLimits

0xfdbf,	// (0x00018a52) vkb2_top_entry_pane_t

0x7b03,	// (0x00010796) vkb2_top_grid_right_pane_g1_ParamLimits

0x7b03,	// (0x00010796) vkb2_top_grid_right_pane_g1

0x7b19,	// (0x000107ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x7b19,	// (0x000107ac) vkb2_top_grid_right_pane_g2

0x7b31,	// (0x000107c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x7b31,	// (0x000107c4) vkb2_top_grid_right_pane_g3

0x7b49,	// (0x000107dc) vkb2_top_grid_right_pane_g4_ParamLimits

0x7b49,	// (0x000107dc) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc6,	// (0x00018a59) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc6,	// (0x00018a59) vkb2_top_grid_right_pane_g

0x7b5f,	// (0x000107f2) vkb2_top_cell_left_pane_g1

0x7b76,	// (0x00010809) vkb2_cell_keypad_pane_g1_ParamLimits

0x7b76,	// (0x00010809) vkb2_cell_keypad_pane_g1

0x0326,	// (0x00008fb9) vkb2_cell_keypad_pane_t1_ParamLimits

0x0326,	// (0x00008fb9) vkb2_cell_keypad_pane_t1

0x7b84,	// (0x00010817) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b84,	// (0x00010817) vkb2_cell_bottom_grid_pane

0x7bbd,	// (0x00010850) vkb2_cell_bottom_grid_pane_g1

0xf1de,	// (0x00017e71) aid_call2_pane_cp02

0xf1e6,	// (0x00017e79) aid_call_pane_cp02

0xf1ee,	// (0x00017e81) clock_digital_number_pane_cp10

0xf1f6,	// (0x00017e89) clock_digital_number_pane_cp11

0xf1fe,	// (0x00017e91) clock_digital_number_pane_cp12

0xf206,	// (0x00017e99) clock_digital_number_pane_cp13

0xf20e,	// (0x00017ea1) clock_digital_separator_pane_cp10

0x956c,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g1

0x956c,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g2

0xf216,	// (0x00017ea9) popup_clock_digital_analogue_window_cp2_g3

0x956c,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g4

0xf216,	// (0x00017ea9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7b,	// (0x00018a0e) popup_clock_digital_analogue_window_cp2_g

0xf21e,	// (0x00017eb1) popup_clock_digital_analogue_window_cp2_t1

0xf22c,	// (0x00017ebf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd86,	// (0x00018a19) popup_clock_digital_analogue_window_cp2_t

0xd3b2,	// (0x00016045) clock_digital_number_pane_cp10_g1

0xd3b2,	// (0x00016045) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x000187fc) clock_digital_number_pane_cp10_g

0xd3b2,	// (0x00016045) clock_digital_separator_pane_cp10_g1

0xd3b2,	// (0x00016045) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x000187fc) clock_digital_separator_pane_cp10_g

0xf05b,	// (0x00017cee) uniindi_top_pane_g3

0xf06c,	// (0x00017cff) uniindi_top_pane_g4

0x7997,	// (0x0001062a) vkb2_row_keypad_pane_ParamLimits

0x7997,	// (0x0001062a) vkb2_row_keypad_pane

0x7bdd,	// (0x00010870) vkb2_cell_t_keypad_pane_ParamLimits

0x7bdd,	// (0x00010870) vkb2_cell_t_keypad_pane

0x7bed,	// (0x00010880) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7bed,	// (0x00010880) vkb2_cell_t_keypad_pane_cp08

0x7c00,	// (0x00010893) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7c00,	// (0x00010893) vkb2_cell_t_keypad_pane_cp09

0x7c14,	// (0x000108a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7c14,	// (0x000108a7) vkb2_cell_t_keypad_pane_cp01

0x7c25,	// (0x000108b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7c25,	// (0x000108b8) vkb2_cell_t_keypad_pane_cp02

0x7c36,	// (0x000108c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7c36,	// (0x000108c9) vkb2_cell_t_keypad_pane_cp03

0x7c47,	// (0x000108da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7c47,	// (0x000108da) vkb2_cell_t_keypad_pane_cp04

0x7c58,	// (0x000108eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7c58,	// (0x000108eb) vkb2_cell_t_keypad_pane_cp05

0x7c69,	// (0x000108fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7c69,	// (0x000108fc) vkb2_cell_t_keypad_pane_cp06

0x7c7a,	// (0x0001090d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7c7a,	// (0x0001090d) vkb2_cell_t_keypad_pane_cp07

0x7c8b,	// (0x0001091e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c8b,	// (0x0001091e) vkb2_cell_t_keypad_pane_cp10

0x7448,	// (0x000100db) vkb2_cell_t_keypad_pane_g1

0x0459,	// (0x000090ec) vkb2_cell_t_keypad_pane_t1

0x63f4,	// (0x0000f087) popup_grid_graphic2_window

0x046b,	// (0x000090fe) aid_size_cell_graphic2_ParamLimits

0x046b,	// (0x000090fe) aid_size_cell_graphic2

0xd478,	// (0x0001610b) bg_popup_window_pane_cp21_ParamLimits

0xd478,	// (0x0001610b) bg_popup_window_pane_cp21

0x0497,	// (0x0000912a) graphic2_pages_pane_ParamLimits

0x0497,	// (0x0000912a) graphic2_pages_pane

0x04dd,	// (0x00009170) grid_graphic2_control_pane_ParamLimits

0x04dd,	// (0x00009170) grid_graphic2_control_pane

0x050b,	// (0x0000919e) grid_graphic2_pane_ParamLimits

0x050b,	// (0x0000919e) grid_graphic2_pane

0x056b,	// (0x000091fe) cell_graphic2_pane

0x7ec6,	// (0x00010b59) main_comp_mode_pane

0xe85b,	// (0x000174ee) list_ai3_gene_pane_ParamLimits

0xeca1,	// (0x00017934) bg_popup_window_pane_cp19_ParamLimits

0xecad,	// (0x00017940) bg_touch_area_indi_pane_ParamLimits

0xecad,	// (0x00017940) bg_touch_area_indi_pane

0xecc3,	// (0x00017956) bg_touch_area_indi_pane_cp01_ParamLimits

0xecc3,	// (0x00017956) bg_touch_area_indi_pane_cp01

0xecd9,	// (0x0001796c) bg_touch_area_indi_pane_cp02_ParamLimits

0xecd9,	// (0x0001796c) bg_touch_area_indi_pane_cp02

0xecf1,	// (0x00017984) bg_touch_area_indi_pane_cp03_ParamLimits

0xecf1,	// (0x00017984) bg_touch_area_indi_pane_cp03

0xed0b,	// (0x0001799e) popup_slider_window_g1_ParamLimits

0xed27,	// (0x000179ba) popup_slider_window_g2_ParamLimits

0xed43,	// (0x000179d6) popup_slider_window_g3_ParamLimits

0xfd10,	// (0x000189a3) popup_slider_window_g_ParamLimits

0xed9f,	// (0x00017a32) popup_slider_window_t1_ParamLimits

0xee13,	// (0x00017aa6) small_volume_slider_vertical_pane_ParamLimits

0x056b,	// (0x000091fe) cell_graphic2_pane_ParamLimits

0x05ba,	// (0x0000924d) bg_button_pane_cp10_ParamLimits

0x05ba,	// (0x0000924d) bg_button_pane_cp10

0x05cd,	// (0x00009260) bg_button_pane_cp11_ParamLimits

0x05cd,	// (0x00009260) bg_button_pane_cp11

0x05e0,	// (0x00009273) graphic2_pages_pane_g1_ParamLimits

0x05e0,	// (0x00009273) graphic2_pages_pane_g1

0x05fb,	// (0x0000928e) graphic2_pages_pane_g2_ParamLimits

0x05fb,	// (0x0000928e) graphic2_pages_pane_g2

0x0001,

0xfdd4,	// (0x00018a67) graphic2_pages_pane_g_ParamLimits

0xfdd4,	// (0x00018a67) graphic2_pages_pane_g

0x0613,	// (0x000092a6) graphic2_pages_pane_t1_ParamLimits

0x0613,	// (0x000092a6) graphic2_pages_pane_t1

0x0629,	// (0x000092bc) cell_graphic2_control_pane_ParamLimits

0x0629,	// (0x000092bc) cell_graphic2_control_pane

0x0643,	// (0x000092d6) cell_graphic2_pane_g1_ParamLimits

0x0643,	// (0x000092d6) cell_graphic2_pane_g1

0x0650,	// (0x000092e3) cell_graphic2_pane_g2_ParamLimits

0x0650,	// (0x000092e3) cell_graphic2_pane_g2

0x065d,	// (0x000092f0) cell_graphic2_pane_g3_ParamLimits

0x065d,	// (0x000092f0) cell_graphic2_pane_g3

0x066a,	// (0x000092fd) cell_graphic2_pane_g4_ParamLimits

0x066a,	// (0x000092fd) cell_graphic2_pane_g4

0x0677,	// (0x0000930a) cell_graphic2_pane_g5_ParamLimits

0x0677,	// (0x0000930a) cell_graphic2_pane_g5

0x0004,

0xfdd9,	// (0x00018a6c) cell_graphic2_pane_g_ParamLimits

0xfdd9,	// (0x00018a6c) cell_graphic2_pane_g

0x0692,	// (0x00009325) cell_graphic2_pane_t1_ParamLimits

0x0692,	// (0x00009325) cell_graphic2_pane_t1

0xab2b,	// (0x000137be) grid_highlight_pane_cp11_ParamLimits

0xab2b,	// (0x000137be) grid_highlight_pane_cp11

0x8d93,	// (0x00011a26) bg_button_pane_cp05

0x06a8,	// (0x0000933b) cell_graphic2_control_pane_g1

0xd3b2,	// (0x00016045) bg_touch_area_indi_pane_g1

0x06b5,	// (0x00009348) aid_cmod_rocker_key_size

0x06bf,	// (0x00009352) aid_cmode_itu_key_size

0x06c9,	// (0x0000935c) main_cmode_video_pane

0x06d3,	// (0x00009366) main_comp_mode_itu_pane

0x06df,	// (0x00009372) main_comp_mode_rocker_pane

0x06eb,	// (0x0000937e) cell_cmode_rocker_pane_ParamLimits

0x06eb,	// (0x0000937e) cell_cmode_rocker_pane

0x06fd,	// (0x00009390) cell_cmode_itu_pane_ParamLimits

0x06fd,	// (0x00009390) cell_cmode_itu_pane

0x8d93,	// (0x00011a26) bg_button_pane_cp06_ParamLimits

0x8d93,	// (0x00011a26) bg_button_pane_cp06

0xd659,	// (0x000162ec) cell_cmode_rocker_pane_g1_ParamLimits

0xd659,	// (0x000162ec) cell_cmode_rocker_pane_g1

0xeeb7,	// (0x00017b4a) cell_cmode_rocker_pane_g2_ParamLimits

0xeeb7,	// (0x00017b4a) cell_cmode_rocker_pane_g2

0x0001,

0xfde4,	// (0x00018a77) cell_cmode_rocker_pane_g_ParamLimits

0xfde4,	// (0x00018a77) cell_cmode_rocker_pane_g

0x7ec6,	// (0x00010b59) bg_button_pane_cp07

0x0712,	// (0x000093a5) cell_cmode_itu_pane_g1

0x071b,	// (0x000093ae) cell_cmode_itu_pane_t1

0x0729,	// (0x000093bc) cell_cmode_itu_pane_t2

0x0001,

0xfde9,	// (0x00018a7c) cell_cmode_itu_pane_t

0xf0dd,	// (0x00017d70) aid_touch_ctrl_left

0xf0e5,	// (0x00017d78) aid_touch_ctrl_right

0x7ec6,	// (0x00010b59) compa_mode_pane

0x0737,	// (0x000093ca) aid_cmod_rocker_key_size_cp

0x0741,	// (0x000093d4) aid_cmode_itu_key_size_cp

0x074b,	// (0x000093de) compa_mode_pane_g1

0x0753,	// (0x000093e6) compa_mode_pane_g2

0x075b,	// (0x000093ee) compa_mode_pane_g3

0x0002,

0xfdee,	// (0x00018a81) compa_mode_pane_g

0x0763,	// (0x000093f6) main_comp_mode_itu_pane_cp

0x076b,	// (0x000093fe) main_comp_mode_rocker_pane_cp

0x0773,	// (0x00009406) cell_cmode_itu_pane_cp_ParamLimits

0x0773,	// (0x00009406) cell_cmode_itu_pane_cp

0x0788,	// (0x0000941b) cell_cmode_rocker_pane_cp_ParamLimits

0x0788,	// (0x0000941b) cell_cmode_rocker_pane_cp

0x8d93,	// (0x00011a26) bg_button_pane_cp06_cp_ParamLimits

0x8d93,	// (0x00011a26) bg_button_pane_cp06_cp

0xd659,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd659,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp

0xd3b2,	// (0x00016045) cell_cmode_rocker_pane_g2_cp

0x7ec6,	// (0x00010b59) bg_button_pane_cp07_cp

0x079a,	// (0x0000942d) cell_cmode_itu_pane_g1_cp

0x07a3,	// (0x00009436) cell_cmode_itu_pane_t1_cp

0x07a3,	// (0x00009436) cell_cmode_itu_pane_t2_cp

0xc016,	// (0x00014ca9) settings_code_pane_cp2

0x7fba,	// (0x00010c4d) bg_popup_window_pane_cp3_ParamLimits

0x842b,	// (0x000110be) heading_pane_cp3_ParamLimits

0x8437,	// (0x000110ca) listscroll_popup_graphic_pane_ParamLimits

0x71f1,	// (0x0000fe84) fep_hwr_aid_pane_ParamLimits

0x7661,	// (0x000102f4) aid_touch_sctrl_top_ParamLimits

0x767c,	// (0x0001030f) sctrl_sk_top_pane_g1_ParamLimits

0x7448,	// (0x000100db) sctrl_sk_top_pane_g2_ParamLimits

0xfd29,	// (0x000189bc) sctrl_sk_top_pane_g_ParamLimits

0x7689,	// (0x0001031c) sctrl_sk_top_pane_t1_ParamLimits

0x7661,	// (0x000102f4) aid_touch_sctrl_bottom_ParamLimits

0x7689,	// (0x0001031c) sctrl_sk_bottom_pane_t1_ParamLimits

0xf027,	// (0x00017cba) aid_area_touch_clock

0x786e,	// (0x00010501) aid_vkb2_area_top_pane_cell_ParamLimits

0x786e,	// (0x00010501) aid_vkb2_area_top_pane_cell

0x79b9,	// (0x0001064c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x79b9,	// (0x0001064c) aid_vkb2_area_bottom_pane_cell

0x01da,	// (0x00008e6d) popup_char_count_window

0x07b1,	// (0x00009444) popup_char_count_window_g1

0x07ba,	// (0x0000944d) popup_char_count_window_g2

0x07c3,	// (0x00009456) popup_char_count_window_g3

0x0002,

0xfdf5,	// (0x00018a88) popup_char_count_window_g

0x07cc,	// (0x0000945f) popup_char_count_window_t1

0x773c,	// (0x000103cf) popup_fep_char_preview_window_ParamLimits

0x773c,	// (0x000103cf) popup_fep_char_preview_window

0x788c,	// (0x0001051f) vkb2_top_candi_pane_ParamLimits

0x788c,	// (0x0001051f) vkb2_top_candi_pane

0x07da,	// (0x0000946d) cell_vkb2_top_candi_pane_ParamLimits

0x07da,	// (0x0000946d) cell_vkb2_top_candi_pane

0x7ca0,	// (0x00010933) bg_popup_fep_char_preview_window_ParamLimits

0x7ca0,	// (0x00010933) bg_popup_fep_char_preview_window

0x7cae,	// (0x00010941) popup_fep_char_preview_window_t1_ParamLimits

0x7cae,	// (0x00010941) popup_fep_char_preview_window_t1

0x0871,	// (0x00009504) bg_popup_fep_char_preview_window_g1

0x0869,	// (0x000094fc) bg_popup_fep_char_preview_window_g2

0x0861,	// (0x000094f4) bg_popup_fep_char_preview_window_g3

0x0899,	// (0x0000952c) bg_popup_fep_char_preview_window_g4

0x0891,	// (0x00009524) bg_popup_fep_char_preview_window_g5

0x7ce8,	// (0x0001097b) bg_popup_fep_char_preview_window_g6

0x0881,	// (0x00009514) bg_popup_fep_char_preview_window_g7

0x0879,	// (0x0000950c) bg_popup_fep_char_preview_window_g8

0x08a1,	// (0x00009534) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfc,	// (0x00018a8f) bg_popup_fep_char_preview_window_g

0x7448,	// (0x000100db) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7448,	// (0x000100db) cell_vkb2_top_candi_pane_g1

0x7456,	// (0x000100e9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7456,	// (0x000100e9) cell_vkb2_top_candi_pane_g2

0x08ca,	// (0x0000955d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x08ca,	// (0x0000955d) cell_vkb2_top_candi_pane_g3

0x7cf0,	// (0x00010983) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7cf0,	// (0x00010983) cell_vkb2_top_candi_pane_g4

0xdc81,	// (0x00016914) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdc81,	// (0x00016914) cell_vkb2_top_candi_pane_g5

0x7d11,	// (0x000109a4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7d11,	// (0x000109a4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0f,	// (0x00018aa2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0f,	// (0x00018aa2) cell_vkb2_top_candi_pane_g

0x7d1f,	// (0x000109b2) cell_vkb2_top_candi_pane_t1

0x7000,	// (0x0000fc93) aid_size_touch_slider_mark_ParamLimits

0x7000,	// (0x0000fc93) aid_size_touch_slider_mark

0x04cd,	// (0x00009160) grid_graphic2_catg_pane_ParamLimits

0x04cd,	// (0x00009160) grid_graphic2_catg_pane

0x0547,	// (0x000091da) popup_grid_graphic2_window_t1_ParamLimits

0x0547,	// (0x000091da) popup_grid_graphic2_window_t1

0x0559,	// (0x000091ec) popup_grid_graphic2_window_t2_ParamLimits

0x0559,	// (0x000091ec) popup_grid_graphic2_window_t2

0x0001,

0xfdcf,	// (0x00018a62) popup_grid_graphic2_window_t_ParamLimits

0xfdcf,	// (0x00018a62) popup_grid_graphic2_window_t

0x8d93,	// (0x00011a26) bg_button_pane_cp05_ParamLimits

0x06a8,	// (0x0000933b) cell_graphic2_control_pane_g1_ParamLimits

0x090a,	// (0x0000959d) cell_graphic2_catg_pane_ParamLimits

0x090a,	// (0x0000959d) cell_graphic2_catg_pane

0x7ec6,	// (0x00010b59) bg_button_pane_cp12

0x091c,	// (0x000095af) cell_graphic2_catg_pane_g1

0xeff3,	// (0x00017c86) cell_tb_ext_pane_t1_ParamLimits

0x7ad6,	// (0x00010769) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7ad6,	// (0x00010769) vkb2_top_cell_right_narrow_pane

0x7aee,	// (0x00010781) vkb2_top_cell_right_wide_pane_ParamLimits

0x7aee,	// (0x00010781) vkb2_top_cell_right_wide_pane

0x71e3,	// (0x0000fe76) bg_vkb2_func_pane_ParamLimits

0x71e3,	// (0x0000fe76) bg_vkb2_func_pane

0x7b5f,	// (0x000107f2) vkb2_top_cell_left_pane_g1_ParamLimits

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp03_ParamLimits

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp03

0x7bbd,	// (0x00010850) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xaa19,	// (0x000136ac) bg_vkb2_func_pane_g1

0xaa21,	// (0x000136b4) bg_vkb2_func_pane_g2

0xaa31,	// (0x000136c4) bg_vkb2_func_pane_g3

0xaa29,	// (0x000136bc) bg_vkb2_func_pane_g4

0xaa39,	// (0x000136cc) bg_vkb2_func_pane_g5

0xaa41,	// (0x000136d4) bg_vkb2_func_pane_g6

0xaa49,	// (0x000136dc) bg_vkb2_func_pane_g7

0xaa51,	// (0x000136e4) bg_vkb2_func_pane_g8

0xaa11,	// (0x000136a4) bg_vkb2_func_pane_g9

0x0008,

0xfe1c,	// (0x00018aaf) bg_vkb2_func_pane_g

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp01_ParamLimits

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp01

0x7b5f,	// (0x000107f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7b5f,	// (0x000107f2) vkb2_top_cell_right_wide_pane_g1

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp02_ParamLimits

0x71e3,	// (0x0000fe76) bg_vkb2_fuc_pane_cp02

0x7bbd,	// (0x00010850) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7bbd,	// (0x00010850) vkb2_top_cell_right_narrow_pane_g1

0xec1f,	// (0x000178b2) aid_touch_area_decrease_ParamLimits

0xec1f,	// (0x000178b2) aid_touch_area_decrease

0xec43,	// (0x000178d6) aid_touch_area_increase_ParamLimits

0xec43,	// (0x000178d6) aid_touch_area_increase

0xec4f,	// (0x000178e2) aid_touch_area_mute_ParamLimits

0xec4f,	// (0x000178e2) aid_touch_area_mute

0xec73,	// (0x00017906) aid_touch_area_slider_ParamLimits

0xec73,	// (0x00017906) aid_touch_area_slider

0xed5f,	// (0x000179f2) popup_slider_window_g4_ParamLimits

0xed5f,	// (0x000179f2) popup_slider_window_g4

0xed6b,	// (0x000179fe) popup_slider_window_g5_ParamLimits

0xed6b,	// (0x000179fe) popup_slider_window_g5

0xed8d,	// (0x00017a20) popup_slider_window_g6_ParamLimits

0xed8d,	// (0x00017a20) popup_slider_window_g6

0xedcd,	// (0x00017a60) popup_slider_window_t2_ParamLimits

0xedcd,	// (0x00017a60) popup_slider_window_t2

0x0001,

0xfd1d,	// (0x000189b0) popup_slider_window_t_ParamLimits

0xfd1d,	// (0x000189b0) popup_slider_window_t

0xede5,	// (0x00017a78) slider_pane_ParamLimits

0xede5,	// (0x00017a78) slider_pane

0x0925,	// (0x000095b8) slider_pane_g1_ParamLimits

0x0925,	// (0x000095b8) slider_pane_g1

0x0939,	// (0x000095cc) slider_pane_g2_ParamLimits

0x0939,	// (0x000095cc) slider_pane_g2

0x094f,	// (0x000095e2) slider_pane_g3_ParamLimits

0x094f,	// (0x000095e2) slider_pane_g3

0x0003,

0xfe2f,	// (0x00018ac2) slider_pane_g_ParamLimits

0xfe2f,	// (0x00018ac2) slider_pane_g

0xa429,	// (0x000130bc) popup_tb_float_extension_window_ParamLimits

0xa429,	// (0x000130bc) popup_tb_float_extension_window

0x097b,	// (0x0000960e) aid_size_cell_tb_float_ext

0x7ec6,	// (0x00010b59) bg_popup_sub_window_cp28

0x0987,	// (0x0000961a) grid_tb_float_ext_pane

0x0991,	// (0x00009624) cell_tb_float_ext_pane_ParamLimits

0x0991,	// (0x00009624) cell_tb_float_ext_pane

0x09ab,	// (0x0000963e) cell_tb_float_ext_pane_g1

0x09b4,	// (0x00009647) grid_highlight_pane_cp12

0x7332,	// (0x0000ffc5) cell_last_hwr_side_pane_ParamLimits

0x7332,	// (0x0000ffc5) cell_last_hwr_side_pane

0xd3b2,	// (0x00016045) cell_last_hwr_side_pane_g1

0x09bd,	// (0x00009650) cell_last_hwr_side_pane_g2

0x0001,

0xfe38,	// (0x00018acb) cell_last_hwr_side_pane_g

0x7a85,	// (0x00010718) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a85,	// (0x00010718) vkb2_area_bottom_space_btn_pane

0x7448,	// (0x000100db) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0459,	// (0x000090ec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7d1f,	// (0x000109b2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7d3e,	// (0x000109d1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7d3e,	// (0x000109d1) vkb2_area_bottom_space_btn_pane_g1

0x7d78,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d78,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g2

0x7dae,	// (0x00010a41) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7dae,	// (0x00010a41) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3d,	// (0x00018ad0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3d,	// (0x00018ad0) vkb2_area_bottom_space_btn_pane_g

0x72a6,	// (0x0000ff39) cel_fep_hwr_func_pane_ParamLimits

0x72a6,	// (0x0000ff39) cel_fep_hwr_func_pane

0x72e2,	// (0x0000ff75) cell_hwr_side_button_pane_ParamLimits

0x72e2,	// (0x0000ff75) cell_hwr_side_button_pane

0xf027,	// (0x00017cba) aid_area_touch_clock_ParamLimits

0x825d,	// (0x00010ef0) bg_uniindi_top_pane_ParamLimits

0xf039,	// (0x00017ccc) uniindi_top_pane_g1_ParamLimits

0xf04f,	// (0x00017ce2) uniindi_top_pane_g2_ParamLimits

0xf05b,	// (0x00017cee) uniindi_top_pane_g3_ParamLimits

0xf06c,	// (0x00017cff) uniindi_top_pane_g4_ParamLimits

0xfd55,	// (0x000189e8) uniindi_top_pane_g_ParamLimits

0xf079,	// (0x00017d0c) uniindi_top_pane_t1_ParamLimits

0x825d,	// (0x00010ef0) bg_vkb2_func_pane_cp01_ParamLimits

0x825d,	// (0x00010ef0) bg_vkb2_func_pane_cp01

0x0a80,	// (0x00009713) cel_fep_hwr_func_pane_g1_ParamLimits

0x0a80,	// (0x00009713) cel_fep_hwr_func_pane_g1

0x825d,	// (0x00010ef0) bg_vkb2_func_pane_cp02_ParamLimits

0x825d,	// (0x00010ef0) bg_vkb2_func_pane_cp02

0x0a80,	// (0x00009713) cell_hwr_side_button_pane_g1_ParamLimits

0x0a80,	// (0x00009713) cell_hwr_side_button_pane_g1

0xa872,	// (0x00013505) status_pane_g4_ParamLimits

0xa872,	// (0x00013505) status_pane_g4

0xa88a,	// (0x0001351d) status_pane_t1

0xd0b4,	// (0x00015d47) form2_midp_gauge_slider_cont_pane

0xd0bc,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd0ce,	// (0x00015d61) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd0e0,	// (0x00015d73) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x000187af) form2_midp_gauge_slider_pane_t_ParamLimits

0xd0f2,	// (0x00015d85) form2_midp_slider_pane_ParamLimits

0x76fc,	// (0x0001038f) aid_size_cell_func_vkb2_ParamLimits

0x76fc,	// (0x0001038f) aid_size_cell_func_vkb2

0x0967,	// (0x000095fa) slider_pane_g4_ParamLimits

0x0967,	// (0x000095fa) slider_pane_g4

0x7df8,	// (0x00010a8b) form2_midp_gauge_slider_pane_t2_cp01

0x7e06,	// (0x00010a99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7e06,	// (0x00010a99) form2_midp_gauge_slider_pane_t3_cp01

0x7e23,	// (0x00010ab6) form2_midp_slider_pane_cp01

0x7ec6,	// (0x00010b59) navi_smil_pane

0x0aed,	// (0x00009780) navi_smil_pane_g1

0x0af5,	// (0x00009788) navi_smil_pane_t1

0x0ac2,	// (0x00009755) form2_midp_slider_pane_g1

0x0acb,	// (0x0000975e) form2_midp_slider_pane_g2

0x0ad3,	// (0x00009766) form2_midp_slider_pane_g3

0x0ac2,	// (0x00009755) form2_midp_slider_pane_g4

0x0adb,	// (0x0000976e) form2_midp_slider_pane_g5

0x0004,

0xfe46,	// (0x00018ad9) form2_midp_slider_pane_g

0x7de8,	// (0x00010a7b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7de8,	// (0x00010a7b) vkb2_area_bottom_space_btn_pane_g4

0xa6a8,	// (0x0001333b) lc0_navi_pane_ParamLimits

0xa6a8,	// (0x0001333b) lc0_navi_pane

0xa71e,	// (0x000133b1) lc0_stat_indi_pane_ParamLimits

0xa71e,	// (0x000133b1) lc0_stat_indi_pane

0xa735,	// (0x000133c8) ls0_title_pane_ParamLimits

0xa735,	// (0x000133c8) ls0_title_pane

0x8d93,	// (0x00011a26) bg_popup_sub_pane_cp14_ParamLimits

0xf00e,	// (0x00017ca1) list_uniindi_pane_ParamLimits

0xf01a,	// (0x00017cad) uniindi_top_pane_ParamLimits

0xf0b5,	// (0x00017d48) list_single_uniindi_pane_g1_ParamLimits

0xf0c8,	// (0x00017d5b) list_single_uniindi_pane_t1_ParamLimits

0x7e2c,	// (0x00010abf) lc0_stat_clock_pane_ParamLimits

0x7e2c,	// (0x00010abf) lc0_stat_clock_pane

0x0b1d,	// (0x000097b0) lc0_stat_indi_pane_g1_ParamLimits

0x0b1d,	// (0x000097b0) lc0_stat_indi_pane_g1

0x0b10,	// (0x000097a3) lc0_stat_indi_pane_g2_ParamLimits

0x0b10,	// (0x000097a3) lc0_stat_indi_pane_g2

0x0001,

0xfe51,	// (0x00018ae4) lc0_stat_indi_pane_g_ParamLimits

0xfe51,	// (0x00018ae4) lc0_stat_indi_pane_g

0x7e39,	// (0x00010acc) lc0_uni_indicator_pane_ParamLimits

0x7e39,	// (0x00010acc) lc0_uni_indicator_pane

0x0b37,	// (0x000097ca) ls0_title_pane_g1_ParamLimits

0x0b37,	// (0x000097ca) ls0_title_pane_g1

0x0b4b,	// (0x000097de) ls0_title_pane_t1_ParamLimits

0x0b4b,	// (0x000097de) ls0_title_pane_t1

0x7e46,	// (0x00010ad9) lc0_uni_indicator_pane_g1_ParamLimits

0x7e46,	// (0x00010ad9) lc0_uni_indicator_pane_g1

0x0b97,	// (0x0000982a) lc0_stat_clock_pane_t1

0x7ec6,	// (0x00010b59) main_ai5_pane

0x0ba5,	// (0x00009838) ai5_sk_pane_ParamLimits

0x0ba5,	// (0x00009838) ai5_sk_pane

0x0bb2,	// (0x00009845) cell_ai5_widget_pane_ParamLimits

0x0bb2,	// (0x00009845) cell_ai5_widget_pane

0x0c40,	// (0x000098d3) aid_size_cell_widget_grid

0x0c54,	// (0x000098e7) bg_ai5_widget_pane_ParamLimits

0x0c54,	// (0x000098e7) bg_ai5_widget_pane

0x0c7c,	// (0x0000990f) cell_ai5_widget_pane_g2

0x0c8c,	// (0x0000991f) cell_ai5_widget_pane_g3

0x0ca0,	// (0x00009933) cell_ai5_widget_pane_g4

0x0cac,	// (0x0000993f) cell_ai5_widget_pane_g5

0x0cb8,	// (0x0000994b) cell_ai5_widget_pane_g6

0x0cc4,	// (0x00009957) cell_ai5_widget_pane_g7

0x0d0c,	// (0x0000999f) cell_ai5_widget_pane_t1_ParamLimits

0x0d0c,	// (0x0000999f) cell_ai5_widget_pane_t1

0x0d29,	// (0x000099bc) cell_ai5_widget_pane_t2_ParamLimits

0x0d29,	// (0x000099bc) cell_ai5_widget_pane_t2

0x0d41,	// (0x000099d4) cell_ai5_widget_pane_t3_ParamLimits

0x0d41,	// (0x000099d4) cell_ai5_widget_pane_t3

0x0d59,	// (0x000099ec) cell_ai5_widget_pane_t4_ParamLimits

0x0d59,	// (0x000099ec) cell_ai5_widget_pane_t4

0x0d73,	// (0x00009a06) cell_ai5_widget_pane_t5_ParamLimits

0x0d73,	// (0x00009a06) cell_ai5_widget_pane_t5

0x0d92,	// (0x00009a25) cell_ai5_widget_pane_t6_ParamLimits

0x0d92,	// (0x00009a25) cell_ai5_widget_pane_t6

0x0da4,	// (0x00009a37) cell_ai5_widget_pane_t7_ParamLimits

0x0da4,	// (0x00009a37) cell_ai5_widget_pane_t7

0x0dbd,	// (0x00009a50) cell_ai5_widget_pane_t8_ParamLimits

0x0dbd,	// (0x00009a50) cell_ai5_widget_pane_t8

0x0009,

0xfe6b,	// (0x00018afe) cell_ai5_widget_pane_t_ParamLimits

0xfe6b,	// (0x00018afe) cell_ai5_widget_pane_t

0x0e05,	// (0x00009a98) grid_ai5_widget_pane

0x8d93,	// (0x00011a26) highlight_cell_ai5_widget_pane_ParamLimits

0x8d93,	// (0x00011a26) highlight_cell_ai5_widget_pane

0x0e1b,	// (0x00009aae) ai5_sk_left_pane

0x0e25,	// (0x00009ab8) ai5_sk_middle_pane

0x0e2f,	// (0x00009ac2) ai5_sk_right_pane

0x0e39,	// (0x00009acc) bg_ai5_widget_pane_g1_ParamLimits

0x0e39,	// (0x00009acc) bg_ai5_widget_pane_g1

0x0e45,	// (0x00009ad8) bg_ai5_widget_pane_g2_ParamLimits

0x0e45,	// (0x00009ad8) bg_ai5_widget_pane_g2

0x0e51,	// (0x00009ae4) bg_ai5_widget_pane_g3_ParamLimits

0x0e51,	// (0x00009ae4) bg_ai5_widget_pane_g3

0x0e5d,	// (0x00009af0) bg_ai5_widget_pane_g4_ParamLimits

0x0e5d,	// (0x00009af0) bg_ai5_widget_pane_g4

0x0e69,	// (0x00009afc) bg_ai5_widget_pane_g5_ParamLimits

0x0e69,	// (0x00009afc) bg_ai5_widget_pane_g5

0x0e75,	// (0x00009b08) bg_ai5_widget_pane_g6_ParamLimits

0x0e75,	// (0x00009b08) bg_ai5_widget_pane_g6

0x0e81,	// (0x00009b14) bg_ai5_widget_pane_g7_ParamLimits

0x0e81,	// (0x00009b14) bg_ai5_widget_pane_g7

0x0e8d,	// (0x00009b20) bg_ai5_widget_pane_g8_ParamLimits

0x0e8d,	// (0x00009b20) bg_ai5_widget_pane_g8

0x0e99,	// (0x00009b2c) bg_ai5_widget_pane_g9_ParamLimits

0x0e99,	// (0x00009b2c) bg_ai5_widget_pane_g9

0x0008,

0xfe80,	// (0x00018b13) bg_ai5_widget_pane_g_ParamLimits

0xfe80,	// (0x00018b13) bg_ai5_widget_pane_g

0x0ecc,	// (0x00009b5f) cell_shortcut_ai5_widget_pane_ParamLimits

0x0ecc,	// (0x00009b5f) cell_shortcut_ai5_widget_pane

0x809d,	// (0x00010d30) bg_cell_shortcut_ai5_widget_pane

0x0edd,	// (0x00009b70) cell_grid_ai5_widget_pane_g1

0x0ee6,	// (0x00009b79) highlight_cell_shortcut_ai5_widget_pane

0xaa19,	// (0x000136ac) ai5_sk_left_pane_g1

0x0eee,	// (0x00009b81) ai5_sk_left_pane_g2

0x0ef6,	// (0x00009b89) ai5_sk_left_pane_g3

0x0efe,	// (0x00009b91) ai5_sk_left_pane_g4

0x0003,

0xfe93,	// (0x00018b26) ai5_sk_left_pane_g

0x0f06,	// (0x00009b99) ai5_sk_left_pane_t1

0xaa21,	// (0x000136b4) ai5_sk_right_pane_g1

0x0f14,	// (0x00009ba7) ai5_sk_right_pane_g2

0x0f1c,	// (0x00009baf) ai5_sk_right_pane_g3

0x0f24,	// (0x00009bb7) ai5_sk_right_pane_g4

0x0003,

0xfe9c,	// (0x00018b2f) ai5_sk_right_pane_g

0x0f2c,	// (0x00009bbf) ai5_sk_right_pane_t1

0xaa21,	// (0x000136b4) ai5_sk_middle_pane_g1

0xaa19,	// (0x000136ac) ai5_sk_middle_pane_g2

0xaa39,	// (0x000136cc) ai5_sk_middle_pane_g3

0x0f1c,	// (0x00009baf) ai5_sk_middle_pane_g4

0x0ef6,	// (0x00009b89) ai5_sk_middle_pane_g5

0x0f3a,	// (0x00009bcd) ai5_sk_middle_pane_g6

0x0f42,	// (0x00009bd5) ai5_sk_middle_pane_g7

0x0006,

0xfea5,	// (0x00018b38) ai5_sk_middle_pane_g

0xa534,	// (0x000131c7) aid_touch_area_size_lc0_ParamLimits

0xa534,	// (0x000131c7) aid_touch_area_size_lc0

0x7477,	// (0x0001010a) cell_hwr_candidate_pane_t1_ParamLimits

0xa550,	// (0x000131e3) aid_touch_navi_pane

0xa81c,	// (0x000134af) status_dt_navi_pane_ParamLimits

0xa81c,	// (0x000134af) status_dt_navi_pane

0xa829,	// (0x000134bc) status_dt_sta_pane_ParamLimits

0xa829,	// (0x000134bc) status_dt_sta_pane

0x0f4a,	// (0x00009bdd) dt_sta_controll_pane

0x0f57,	// (0x00009bea) dt_sta_indi_pane

0x0f68,	// (0x00009bfb) dt_sta_title_pane

0x825d,	// (0x00010ef0) bg_dt_sta_indi_pane_ParamLimits

0x825d,	// (0x00010ef0) bg_dt_sta_indi_pane

0x0f7b,	// (0x00009c0e) dt_sta_battery_pane

0x0f83,	// (0x00009c16) dt_sta_indi_pane_g1

0x0f8c,	// (0x00009c1f) dt_sta_indi_pane_g2

0x0f95,	// (0x00009c28) dt_sta_indi_pane_g3

0x0002,

0xfeb4,	// (0x00018b47) dt_sta_indi_pane_g

0x0f9e,	// (0x00009c31) dt_sta_signal_pane

0x8d93,	// (0x00011a26) bg_dt_sta_title_pane_ParamLimits

0x8d93,	// (0x00011a26) bg_dt_sta_title_pane

0xb905,	// (0x00014598) dt_sta_title_pane_g1

0x0fa7,	// (0x00009c3a) dt_sta_title_pane_t1_ParamLimits

0x0fa7,	// (0x00009c3a) dt_sta_title_pane_t1

0x7ec6,	// (0x00010b59) bg_dt_sta_control_pane

0x0fbc,	// (0x00009c4f) dt_sta_controll_pane_g1

0x0fc5,	// (0x00009c58) bg_dt_sta_title_pane_g1

0x0fce,	// (0x00009c61) bg_dt_sta_title_pane_g2

0x0fd7,	// (0x00009c6a) bg_dt_sta_title_pane_g3

0x0002,

0xfebb,	// (0x00018b4e) bg_dt_sta_title_pane_g

0xd3b2,	// (0x00016045) bg_dt_sta_indi_pane_g1

0x0fe0,	// (0x00009c73) dt_sta_signal_pane_g1

0x0fe8,	// (0x00009c7b) dt_sta_signal_pane_g2

0x0001,

0xfec2,	// (0x00018b55) dt_sta_signal_pane_g

0x0ff0,	// (0x00009c83) dt_sta_battery_pane_g1

0x0ff9,	// (0x00009c8c) dt_sta_battery_pane_t1

0xd3b2,	// (0x00016045) bg_dt_sta_control_pane_g1

0x964f,	// (0x000122e2) fep_china_uni_eep_pane

0x9657,	// (0x000122ea) fep_china_uni_entry_pane_ParamLimits

0x9667,	// (0x000122fa) popup_fep_china_uni_window_g1_ParamLimits

0x9677,	// (0x0001230a) popup_fep_china_uni_window_g2_ParamLimits

0x9677,	// (0x0001230a) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x000183eb) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x000183eb) popup_fep_china_uni_window_g

0x1008,	// (0x00009c9b) fep_china_uni_eep_pane_g1

0x1010,	// (0x00009ca3) fep_china_uni_eep_pane_t1

0x0ae4,	// (0x00009777) aid_touch_area_size_smil_player

0xa6a0,	// (0x00013333) lc0_clock_pane

0xa87e,	// (0x00013511) status_pane_g5_ParamLimits

0xa87e,	// (0x00013511) status_pane_g5

0xa0f6,	// (0x00012d89) popup_keymap_window

0xa83e,	// (0x000134d1) status_icon_pane

0x0c8c,	// (0x0000991f) cell_ai5_widget_pane_g3_ParamLimits

0x0ca0,	// (0x00009933) cell_ai5_widget_pane_g4_ParamLimits

0x0cac,	// (0x0000993f) cell_ai5_widget_pane_g5_ParamLimits

0x0cd0,	// (0x00009963) cell_ai5_widget_pane_g8_ParamLimits

0x0cd0,	// (0x00009963) cell_ai5_widget_pane_g8

0x0ce4,	// (0x00009977) cell_ai5_widget_pane_g9_ParamLimits

0x0ce4,	// (0x00009977) cell_ai5_widget_pane_g9

0x0cf8,	// (0x0000998b) cell_ai5_widget_pane_g10_ParamLimits

0x0cf8,	// (0x0000998b) cell_ai5_widget_pane_g10

0x101f,	// (0x00009cb2) status_icon_pane_g1

0x7ec6,	// (0x00010b59) bg_popup_sub_pane_cp13

0x1027,	// (0x00009cba) popup_keymap_window_t1

0x9eac,	// (0x00012b3f) control_pane_g6_ParamLimits

0x9eac,	// (0x00012b3f) control_pane_g6

0x9eb9,	// (0x00012b4c) control_pane_g7_ParamLimits

0x9eb9,	// (0x00012b4c) control_pane_g7

0x9ec6,	// (0x00012b59) control_pane_g8_ParamLimits

0x9ec6,	// (0x00012b59) control_pane_g8

0x0f4a,	// (0x00009bdd) dt_sta_controll_pane_ParamLimits

0x0f57,	// (0x00009bea) dt_sta_indi_pane_ParamLimits

0x0f68,	// (0x00009bfb) dt_sta_title_pane_ParamLimits

0x875f,	// (0x000113f2) aid_size_touch_scroll_bar_cale

0x64cd,	// (0x0000f160) popup_discreet_window_ParamLimits

0x64cd,	// (0x0000f160) popup_discreet_window

0x6547,	// (0x0000f1da) popup_sk_window

0xb137,	// (0x00013dca) bg_popup_sub_pane_cp28_ParamLimits

0xb137,	// (0x00013dca) bg_popup_sub_pane_cp28

0x1035,	// (0x00009cc8) popup_discreet_window_g1_ParamLimits

0x1035,	// (0x00009cc8) popup_discreet_window_g1

0x1055,	// (0x00009ce8) popup_discreet_window_t1_ParamLimits

0x1055,	// (0x00009ce8) popup_discreet_window_t1

0x1073,	// (0x00009d06) popup_discreet_window_t2_ParamLimits

0x1073,	// (0x00009d06) popup_discreet_window_t2

0x0002,

0xfec7,	// (0x00018b5a) popup_discreet_window_t_ParamLimits

0xfec7,	// (0x00018b5a) popup_discreet_window_t

0x7e5c,	// (0x00010aef) popup_sk_window_g1

0x7e66,	// (0x00010af9) popup_sk_window_g2

0x0001,

0xfece,	// (0x00018b61) popup_sk_window_g

0x10e7,	// (0x00009d7a) popup_sk_window_t1

0x10d9,	// (0x00009d6c) popup_sk_window_t1_copy1

0x0c7c,	// (0x0000990f) cell_ai5_widget_pane_g2_ParamLimits

0x0dcf,	// (0x00009a62) cell_ai5_widget_pane_t9_ParamLimits

0x0dcf,	// (0x00009a62) cell_ai5_widget_pane_t9

0x7ec6,	// (0x00010b59) main_fep_fshwr2_pane

0x10f5,	// (0x00009d88) aid_fshwr2_btn_pane

0x10fd,	// (0x00009d90) aid_fshwr2_syb_pane

0x1105,	// (0x00009d98) aid_fshwr2_txt_pane

0x110d,	// (0x00009da0) fshwr2_func_candi_pane

0x1119,	// (0x00009dac) fshwr2_hwr_syb_pane

0x1125,	// (0x00009db8) fshwr2_icf_pane

0x7ec6,	// (0x00010b59) fshwr2_icf_bg_pane

0x1143,	// (0x00009dd6) fshwr2_icf_pane_t1_ParamLimits

0x1143,	// (0x00009dd6) fshwr2_icf_pane_t1

0xd3b2,	// (0x00016045) fshwr2_func_candi_pane_g1

0x115a,	// (0x00009ded) fshwr2_func_candi_row_pane_ParamLimits

0x115a,	// (0x00009ded) fshwr2_func_candi_row_pane

0x116b,	// (0x00009dfe) cell_fshwr2_syb_pane_ParamLimits

0x116b,	// (0x00009dfe) cell_fshwr2_syb_pane

0xd659,	// (0x000162ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd659,	// (0x000162ec) fshwr2_hwr_syb_pane_g1

0x7ec6,	// (0x00010b59) bg_popup_call_pane_cp01

0x1187,	// (0x00009e1a) fshwr2_func_candi_cell_pane_ParamLimits

0x1187,	// (0x00009e1a) fshwr2_func_candi_cell_pane

0x11b8,	// (0x00009e4b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x11b8,	// (0x00009e4b) fshwr2_func_candi_cell_bg_pane

0x11d2,	// (0x00009e65) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x11d2,	// (0x00009e65) fshwr2_func_candi_cell_pane_g1

0x11f2,	// (0x00009e85) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x11f2,	// (0x00009e85) fshwr2_func_candi_cell_pane_t1

0x7ec6,	// (0x00010b59) bg_button_pane_cp08

0x9bd9,	// (0x0001286c) cell_fshwr2_syb_bg_pane

0x1205,	// (0x00009e98) cell_fshwr2_syb_bg_pane_g1

0x120d,	// (0x00009ea0) cell_fshwr2_syb_bg_pane_t1

0x8d93,	// (0x00011a26) main_tmo_pane

0xbc48,	// (0x000148db) uni_indicator_pane_g1_ParamLimits

0xbc5d,	// (0x000148f0) uni_indicator_pane_g2_ParamLimits

0xbc73,	// (0x00014906) uni_indicator_pane_g3_ParamLimits

0xbc89,	// (0x0001491c) uni_indicator_pane_g4_ParamLimits

0xbc89,	// (0x0001491c) uni_indicator_pane_g4

0xbc9d,	// (0x00014930) uni_indicator_pane_g5_ParamLimits

0xbc9d,	// (0x00014930) uni_indicator_pane_g5

0xbcb1,	// (0x00014944) uni_indicator_pane_g6_ParamLimits

0xbcb1,	// (0x00014944) uni_indicator_pane_g6

0xf955,	// (0x000185e8) uni_indicator_pane_g_ParamLimits

0xec01,	// (0x00017894) popup_tmo_note_window_ParamLimits

0xec01,	// (0x00017894) popup_tmo_note_window

0x7ec6,	// (0x00010b59) fshwr2_bg_pane

0x11e3,	// (0x00009e76) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x11e3,	// (0x00009e76) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed3,	// (0x00018b66) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed3,	// (0x00018b66) fshwr2_func_candi_cell_pane_g

0xd3b2,	// (0x00016045) bg_popup_window_pane_cp01

0x121c,	// (0x00009eaf) bg_popup_window_pane_g1_cp01

0x1225,	// (0x00009eb8) bg_popup_window_pane_cp22_ParamLimits

0x1225,	// (0x00009eb8) bg_popup_window_pane_cp22

0x1233,	// (0x00009ec6) listscroll_tmo_link_pane_ParamLimits

0x1233,	// (0x00009ec6) listscroll_tmo_link_pane

0x1273,	// (0x00009f06) popup_tmo_note_window_g1_ParamLimits

0x1273,	// (0x00009f06) popup_tmo_note_window_g1

0x1280,	// (0x00009f13) tmo_note_info_pane_ParamLimits

0x1280,	// (0x00009f13) tmo_note_info_pane

0x129a,	// (0x00009f2d) list_tmo_note_info_pane_g1_ParamLimits

0x129a,	// (0x00009f2d) list_tmo_note_info_pane_g1

0x12b1,	// (0x00009f44) list_tmo_note_info_pane_g2_ParamLimits

0x12b1,	// (0x00009f44) list_tmo_note_info_pane_g2

0x0001,

0xfed8,	// (0x00018b6b) list_tmo_note_info_pane_g_ParamLimits

0xfed8,	// (0x00018b6b) list_tmo_note_info_pane_g

0x12cd,	// (0x00009f60) list_tmo_note_info_text_pane_ParamLimits

0x12cd,	// (0x00009f60) list_tmo_note_info_text_pane

0x1352,	// (0x00009fe5) list_tmo_link_pane

0x135f,	// (0x00009ff2) scroll_pane_cp20

0x136c,	// (0x00009fff) list_single_tmo_link_pane_ParamLimits

0x136c,	// (0x00009fff) list_single_tmo_link_pane

0x137c,	// (0x0000a00f) list_single_tmo_link_pane_t1

0x138a,	// (0x0000a01d) list_tmo_note_info_text_pane_t1_ParamLimits

0x138a,	// (0x0000a01d) list_tmo_note_info_text_pane_t1

0x8fd6,	// (0x00011c69) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8fd6,	// (0x00011c69) aid_size_touch_scroll_bar_cp01

0x8e4d,	// (0x00011ae0) aid_size_touch_slider_marker

0x652f,	// (0x0000f1c2) popup_settings_window_ParamLimits

0x652f,	// (0x0000f1c2) popup_settings_window

0x9f87,	// (0x00012c1a) popup_candi_list_indi_window

0xa550,	// (0x000131e3) aid_touch_navi_pane_ParamLimits

0x7635,	// (0x000102c8) rs_clock_indi_pane

0x763e,	// (0x000102d1) sctrl_sk_bottom_pane_ParamLimits

0x764f,	// (0x000102e2) sctrl_sk_top_pane_ParamLimits

0x7756,	// (0x000103e9) popup_fep_tooltip_window

0x0c40,	// (0x000098d3) aid_size_cell_widget_grid_ParamLimits

0x0c70,	// (0x00009903) cell_ai5_widget_pane_g1_ParamLimits

0x0c70,	// (0x00009903) cell_ai5_widget_pane_g1

0x0cb8,	// (0x0000994b) cell_ai5_widget_pane_g6_ParamLimits

0x0cc4,	// (0x00009957) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe56,	// (0x00018ae9) cell_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x00018ae9) cell_ai5_widget_pane_g

0x0df3,	// (0x00009a86) cell_ai5_widget_pane_t10_ParamLimits

0x0df3,	// (0x00009a86) cell_ai5_widget_pane_t10

0x0e05,	// (0x00009a98) grid_ai5_widget_pane_ParamLimits

0x0ea5,	// (0x00009b38) cell_contacts_ai5_widget_pane_ParamLimits

0x0ea5,	// (0x00009b38) cell_contacts_ai5_widget_pane

0x1088,	// (0x00009d1b) popup_discreet_window_t3_ParamLimits

0x1088,	// (0x00009d1b) popup_discreet_window_t3

0x112f,	// (0x00009dc2) popup_fshwr2_char_preview_window_ParamLimits

0x112f,	// (0x00009dc2) popup_fshwr2_char_preview_window

0x12eb,	// (0x00009f7e) tmo_note_info_pane_t1

0x1300,	// (0x00009f93) tmo_note_info_pane_t2

0x1319,	// (0x00009fac) tmo_note_info_pane_t3

0x132e,	// (0x00009fc1) tmo_note_info_pane_t4

0x1340,	// (0x00009fd3) tmo_note_info_pane_t5

0x0004,

0xfedd,	// (0x00018b70) tmo_note_info_pane_t

0x1352,	// (0x00009fe5) list_tmo_link_pane_ParamLimits

0x135f,	// (0x00009ff2) scroll_pane_cp20_ParamLimits

0x7ec6,	// (0x00010b59) bg_popup_fep_char_preview_window_cp01

0x13a3,	// (0x0000a036) popup_fshwr2_char_preview_window_t1

0x13b1,	// (0x0000a044) popup_candi_list_indi_window_g1

0x13ba,	// (0x0000a04d) bg_cell_contacts_ai5_widget_pane

0x13c6,	// (0x0000a059) cell_contacts_ai5_widget_pane_g1

0x13da,	// (0x0000a06d) cell_contacts_ai5_widget_pane_g2

0x13e9,	// (0x0000a07c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee8,	// (0x00018b7b) cell_contacts_ai5_widget_pane_g

0x13fc,	// (0x0000a08f) cell_contacts_ai5_widget_pane_t1

0x8d93,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1476,	// (0x0000a109) settings_container_pane

0x9bd9,	// (0x0001286c) listscroll_set_pane_copy1

0xc89f,	// (0x00015532) scroll_pane_cp121_copy1

0x1482,	// (0x0000a115) set_content_pane_copy1

0x148a,	// (0x0000a11d) aid_height_set_list_copy1_ParamLimits

0x148a,	// (0x0000a11d) aid_height_set_list_copy1

0xbecc,	// (0x00014b5f) aid_size_parent_copy1_ParamLimits

0xbecc,	// (0x00014b5f) aid_size_parent_copy1

0x1496,	// (0x0000a129) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1496,	// (0x0000a129) button_value_adjust_pane_cp6_copy1

0x9f5f,	// (0x00012bf2) list_highlight_pane_cp2_copy1_ParamLimits

0x9f5f,	// (0x00012bf2) list_highlight_pane_cp2_copy1

0x14aa,	// (0x0000a13d) list_set_pane_copy1_ParamLimits

0x14aa,	// (0x0000a13d) list_set_pane_copy1

0x1411,	// (0x0000a0a4) main_pane_set_t1_copy1_ParamLimits

0x1411,	// (0x0000a0a4) main_pane_set_t1_copy1

0x144b,	// (0x0000a0de) main_pane_set_t2_copy1_ParamLimits

0x144b,	// (0x0000a0de) main_pane_set_t2_copy1

0x1557,	// (0x0000a1ea) main_pane_set_t3_copy1

0x1565,	// (0x0000a1f8) main_pane_set_t4_copy1

0x146a,	// (0x0000a0fd) set_content_pane_g1_copy1_ParamLimits

0x146a,	// (0x0000a0fd) set_content_pane_g1_copy1

0x1573,	// (0x0000a206) setting_code_pane_copy1

0x157d,	// (0x0000a210) setting_slider_graphic_pane_copy1

0x157d,	// (0x0000a210) setting_slider_pane_copy1

0x1587,	// (0x0000a21a) setting_text_pane_copy1

0x1591,	// (0x0000a224) setting_volume_pane_copy1

0x159a,	// (0x0000a22d) settings_code_pane_cp2_copy1

0x15a2,	// (0x0000a235) settings_code_pane_cp_copy1_ParamLimits

0x15a2,	// (0x0000a235) settings_code_pane_cp_copy1

0x15b6,	// (0x0000a249) volume_set_pane_copy1

0x15be,	// (0x0000a251) volume_set_pane_g10_copy1

0x15c6,	// (0x0000a259) volume_set_pane_g1_copy1

0x15ce,	// (0x0000a261) volume_set_pane_g2_copy1

0x15d6,	// (0x0000a269) volume_set_pane_g3_copy1

0x15de,	// (0x0000a271) volume_set_pane_g4_copy1

0x15e6,	// (0x0000a279) volume_set_pane_g5_copy1

0x15ee,	// (0x0000a281) volume_set_pane_g6_copy1

0x15f6,	// (0x0000a289) volume_set_pane_g7_copy1

0x15fe,	// (0x0000a291) volume_set_pane_g8_copy1

0x1606,	// (0x0000a299) volume_set_pane_g9_copy1

0x7fba,	// (0x00010c4d) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fba,	// (0x00010c4d) bg_set_opt_pane_cp_copy1

0x160e,	// (0x0000a2a1) setting_slider_pane_t1_copy1_ParamLimits

0x160e,	// (0x0000a2a1) setting_slider_pane_t1_copy1

0x162c,	// (0x0000a2bf) setting_slider_pane_t2_copy1_ParamLimits

0x162c,	// (0x0000a2bf) setting_slider_pane_t2_copy1

0x1646,	// (0x0000a2d9) setting_slider_pane_t3_copy1_ParamLimits

0x1646,	// (0x0000a2d9) setting_slider_pane_t3_copy1

0x165e,	// (0x0000a2f1) slider_set_pane_copy1_ParamLimits

0x165e,	// (0x0000a2f1) slider_set_pane_copy1

0x8ecf,	// (0x00011b62) set_opt_bg_pane_g1_copy2

0x8ed7,	// (0x00011b6a) set_opt_bg_pane_g2_copy2

0x1674,	// (0x0000a307) set_opt_bg_pane_g3_copy2

0x8ee7,	// (0x00011b7a) set_opt_bg_pane_g4_copy2

0x8eef,	// (0x00011b82) set_opt_bg_pane_g5_copy2

0x8ef7,	// (0x00011b8a) set_opt_bg_pane_g6_copy2

0x167e,	// (0x0000a311) set_opt_bg_pane_g7_copy2

0x1686,	// (0x0000a319) set_opt_bg_pane_g8_copy2

0x1690,	// (0x0000a323) set_opt_bg_pane_g9_copy2

0x7e70,	// (0x00010b03) aid_size_touch_slider_mark_copy1_ParamLimits

0x7e70,	// (0x00010b03) aid_size_touch_slider_mark_copy1

0x16ae,	// (0x0000a341) slider_set_pane_g1_copy1

0x7e84,	// (0x00010b17) slider_set_pane_g2_copy1

0x7020,	// (0x0000fcb3) slider_set_pane_g3_copy1_ParamLimits

0x7020,	// (0x0000fcb3) slider_set_pane_g3_copy1

0x7034,	// (0x0000fcc7) slider_set_pane_g4_copy1_ParamLimits

0x7034,	// (0x0000fcc7) slider_set_pane_g4_copy1

0x704c,	// (0x0000fcdf) slider_set_pane_g5_copy1_ParamLimits

0x704c,	// (0x0000fcdf) slider_set_pane_g5_copy1

0x7020,	// (0x0000fcb3) slider_set_pane_g6_copy1_ParamLimits

0x7020,	// (0x0000fcb3) slider_set_pane_g6_copy1

0x7e8c,	// (0x00010b1f) slider_set_pane_g7_copy1_ParamLimits

0x7e8c,	// (0x00010b1f) slider_set_pane_g7_copy1

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp2_copy1

0x16d5,	// (0x0000a368) setting_slider_graphic_pane_g1_copy1

0x16de,	// (0x0000a371) setting_slider_graphic_pane_t1_copy1

0x16ee,	// (0x0000a381) setting_slider_graphic_pane_t2_copy1

0x16fe,	// (0x0000a391) slider_set_pane_cp_copy1

0x170e,	// (0x0000a3a1) input_focus_pane_cp1_copy1

0x1717,	// (0x0000a3aa) list_set_text_pane_copy1

0x171f,	// (0x0000a3b2) setting_text_pane_g1_copy1

0x1728,	// (0x0000a3bb) set_text_pane_t1_copy1

0x170e,	// (0x0000a3a1) input_focus_pane_cp2_copy1

0x171f,	// (0x0000a3b2) setting_code_pane_g1_copy1

0x1745,	// (0x0000a3d8) setting_code_pane_t1_copy1

0x1753,	// (0x0000a3e6) list_set_graphic_pane_copy1

0x7eda,	// (0x00010b6d) bg_set_opt_pane_cp4_copy1

0x98db,	// (0x0001256e) list_set_graphic_pane_g1_copy1_ParamLimits

0x98db,	// (0x0001256e) list_set_graphic_pane_g1_copy1

0x1767,	// (0x0000a3fa) list_set_graphic_pane_g2_copy1

0x98f3,	// (0x00012586) list_set_graphic_pane_t1_copy1_ParamLimits

0x98f3,	// (0x00012586) list_set_graphic_pane_t1_copy1

0xd3b2,	// (0x00016045) rs_clock_indi_pane_g1

0x176f,	// (0x0000a402) rs_clock_indi_pane_t1

0x177d,	// (0x0000a410) rs_indi_pane

0x1785,	// (0x0000a418) rs_indi_pane_g1

0x178e,	// (0x0000a421) rs_indi_pane_g2

0x1797,	// (0x0000a42a) rs_indi_pane_g3

0x0002,

0xfeef,	// (0x00018b82) rs_indi_pane_g

0x9bd9,	// (0x0001286c) bg_popup_preview_window_pane_cp03

0x17a0,	// (0x0000a433) popup_fep_tooltip_window_t1

0xe23f,	// (0x00016ed2) popup_note2_window_g2_ParamLimits

0xe23f,	// (0x00016ed2) popup_note2_window_g2

0x0001,

0xfc94,	// (0x00018927) popup_note2_window_g_ParamLimits

0xfc94,	// (0x00018927) popup_note2_window_g

0xe821,	// (0x000174b4) bg_popup_sub_pane_cp11_ParamLimits

0xe82e,	// (0x000174c1) cell_ai3_links_pane_g1_ParamLimits

0xe845,	// (0x000174d8) cell_ai3_links_pane_t1

0x1728,	// (0x0000a3bb) set_text_pane_t1_copy1_ParamLimits

0x9ae8,	// (0x0001277b) cell_graphic_popup_pane_cp2_ParamLimits

0x9ae8,	// (0x0001277b) cell_graphic_popup_pane_cp2

0x17ae,	// (0x0000a441) cell_graphic_popup_pane_g1_cp2

0x8572,	// (0x00011205) cell_graphic_popup_pane_g2_cp2

0x17b6,	// (0x0000a449) cell_graphic_popup_pane_g3_cp2

0x17be,	// (0x0000a451) cell_graphic_popup_pane_t2_cp2

0x8583,	// (0x00011216) grid_highlight_pane_cp3_cp2

0x92b5,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8d93,	// (0x00011a26) main_tmo_pane_ParamLimits

0xebf5,	// (0x00017888) popup_tmo_big_image_note_window

0x0c60,	// (0x000098f3) cell_ai5_widget_list_pane

0x0c68,	// (0x000098fb) cell_ai5_widget_lrg_icon_pane

0x12eb,	// (0x00009f7e) tmo_note_info_pane_t1_ParamLimits

0x1300,	// (0x00009f93) tmo_note_info_pane_t2_ParamLimits

0x1319,	// (0x00009fac) tmo_note_info_pane_t3_ParamLimits

0x132e,	// (0x00009fc1) tmo_note_info_pane_t4_ParamLimits

0x1340,	// (0x00009fd3) tmo_note_info_pane_t5_ParamLimits

0xfedd,	// (0x00018b70) tmo_note_info_pane_t_ParamLimits

0x1476,	// (0x0000a109) settings_container_pane_ParamLimits

0x1706,	// (0x0000a399) indicator_popup_pane_cp5

0x1706,	// (0x0000a399) indicator_popup_pane_cp6

0x1753,	// (0x0000a3e6) list_set_graphic_pane_copy1_ParamLimits

0x7ec6,	// (0x00010b59) bg_popup_window_pane_cp23

0x17cc,	// (0x0000a45f) popup_tmo_big_image_note_window_g1

0x17d7,	// (0x0000a46a) popup_tmo_big_image_note_window_t1

0x17e7,	// (0x0000a47a) popup_tmo_big_image_note_window_t2

0x17f7,	// (0x0000a48a) popup_tmo_big_image_note_window_t3

0x0002,

0xfef6,	// (0x00018b89) popup_tmo_big_image_note_window_t

0x1807,	// (0x0000a49a) cell_ai5_widget_lrg_icon_pane_g1

0x180f,	// (0x0000a4a2) cell_ai5_widget_lrg_icon_pane_t1

0x181d,	// (0x0000a4b0) cell_ai5_widget_list_row_pane_ParamLimits

0x181d,	// (0x0000a4b0) cell_ai5_widget_list_row_pane

0x1836,	// (0x0000a4c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1836,	// (0x0000a4c9) cell_ai5_widget_list_row_pane_g1

0x1843,	// (0x0000a4d6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1843,	// (0x0000a4d6) cell_ai5_widget_list_row_pane_t1

0x185b,	// (0x0000a4ee) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x185b,	// (0x0000a4ee) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefd,	// (0x00018b90) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefd,	// (0x00018b90) cell_ai5_widget_list_row_pane_t

0x63f4,	// (0x0000f087) main_fep_vtchi_ss_pane

0x186d,	// (0x0000a500) popup_fep_char_pre_window

0x1875,	// (0x0000a508) popup_fep_ituss_window

0x1880,	// (0x0000a513) popup_fep_vkbss_window

0x1889,	// (0x0000a51c) grid_vkbss_keypad_pane_ParamLimits

0x1889,	// (0x0000a51c) grid_vkbss_keypad_pane

0x1899,	// (0x0000a52c) ituss_keypad_pane

0x18a1,	// (0x0000a534) aid_vkbss_key_offset_ParamLimits

0x18a1,	// (0x0000a534) aid_vkbss_key_offset

0x18b0,	// (0x0000a543) cell_vkbss_key_pane_ParamLimits

0x18b0,	// (0x0000a543) cell_vkbss_key_pane

0x18c6,	// (0x0000a559) bg_cell_vkbss_key_g1_ParamLimits

0x18c6,	// (0x0000a559) bg_cell_vkbss_key_g1

0x18d2,	// (0x0000a565) cell_vkbss_key_3p_pane_ParamLimits

0x18d2,	// (0x0000a565) cell_vkbss_key_3p_pane

0x18ec,	// (0x0000a57f) cell_vkbss_key_g1_ParamLimits

0x18ec,	// (0x0000a57f) cell_vkbss_key_g1

0x1906,	// (0x0000a599) cell_vkbss_key_t1_ParamLimits

0x1906,	// (0x0000a599) cell_vkbss_key_t1

0x1931,	// (0x0000a5c4) cell_ituss_key_pane_ParamLimits

0x1931,	// (0x0000a5c4) cell_ituss_key_pane

0x1940,	// (0x0000a5d3) bg_cell_ituss_key_g1_ParamLimits

0x1940,	// (0x0000a5d3) bg_cell_ituss_key_g1

0x194c,	// (0x0000a5df) cell_ituss_key_pane_g1_ParamLimits

0x194c,	// (0x0000a5df) cell_ituss_key_pane_g1

0x1958,	// (0x0000a5eb) cell_ituss_key_pane_g2_ParamLimits

0x1958,	// (0x0000a5eb) cell_ituss_key_pane_g2

0x0001,

0xff02,	// (0x00018b95) cell_ituss_key_pane_g_ParamLimits

0xff02,	// (0x00018b95) cell_ituss_key_pane_g

0x196b,	// (0x0000a5fe) cell_ituss_key_t1_ParamLimits

0x196b,	// (0x0000a5fe) cell_ituss_key_t1

0x1989,	// (0x0000a61c) cell_ituss_key_t2_ParamLimits

0x1989,	// (0x0000a61c) cell_ituss_key_t2

0x19a8,	// (0x0000a63b) cell_ituss_key_t3_ParamLimits

0x19a8,	// (0x0000a63b) cell_ituss_key_t3

0x19c7,	// (0x0000a65a) cell_ituss_key_t4_ParamLimits

0x19c7,	// (0x0000a65a) cell_ituss_key_t4

0x0003,

0xff07,	// (0x00018b9a) cell_ituss_key_t_ParamLimits

0xff07,	// (0x00018b9a) cell_ituss_key_t

0x19e6,	// (0x0000a679) cell_vkbss_key_3p_pane_g1

0x19ee,	// (0x0000a681) cell_vkbss_key_3p_pane_g2

0x19f6,	// (0x0000a689) cell_vkbss_key_3p_pane_g3

0x0002,

0xff10,	// (0x00018ba3) cell_vkbss_key_3p_pane_g

0x7ec6,	// (0x00010b59) bg_popup_fep_char_preview_window_cp02

0x19fe,	// (0x0000a691) popup_fep_char_pre_window_t1

0x0c36,	// (0x000098c9) main_ai5_sk_pane

0x13ba,	// (0x0000a04d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x13c6,	// (0x0000a059) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x13da,	// (0x0000a06d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x13e9,	// (0x0000a07c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee8,	// (0x00018b7b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x13fc,	// (0x0000a08f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8d93,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1a0d,	// (0x0000a6a0) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

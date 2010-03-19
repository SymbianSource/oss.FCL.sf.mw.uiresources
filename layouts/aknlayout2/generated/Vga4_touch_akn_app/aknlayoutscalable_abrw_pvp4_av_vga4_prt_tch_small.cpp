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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002c52c };

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
0x726f,	// (0x0003379b) Screen

0x727b,	// (0x000337a7) application_window_ParamLimits

0x727b,	// (0x000337a7) application_window

0x30d3,	// (0x0002f5ff) screen_g1

0x4a7c,	// (0x00030fa8) area_bottom_pane_ParamLimits

0x4a7c,	// (0x00030fa8) area_bottom_pane

0x4b3c,	// (0x00031068) area_top_pane_ParamLimits

0x4b3c,	// (0x00031068) area_top_pane

0x4bda,	// (0x00031106) main_pane_ParamLimits

0x4bda,	// (0x00031106) main_pane

0x30dd,	// (0x0002f609) misc_graphics

0x955d,	// (0x00035a89) battery_pane_ParamLimits

0x955d,	// (0x00035a89) battery_pane

0xa27c,	// (0x000367a8) bg_status_flat_pane_g8

0xa284,	// (0x000367b0) bg_status_flat_pane_g9

0x9625,	// (0x00035b51) context_pane_ParamLimits

0x9625,	// (0x00035b51) context_pane

0x9749,	// (0x00035c75) navi_pane_ParamLimits

0x9749,	// (0x00035c75) navi_pane

0x97d8,	// (0x00035d04) signal_pane_ParamLimits

0x97d8,	// (0x00035d04) signal_pane

0x0008,

0xf88a,	// (0x0003bdb6) bg_status_flat_pane_g

0x9845,	// (0x00035d71) status_pane_g1_ParamLimits

0x9845,	// (0x00035d71) status_pane_g1

0x9859,	// (0x00035d85) status_pane_g2_ParamLimits

0x9859,	// (0x00035d85) status_pane_g2

0x9865,	// (0x00035d91) status_pane_g3_ParamLimits

0x9865,	// (0x00035d91) status_pane_g3

0x0004,

0xf7b8,	// (0x0003bce4) status_pane_g_ParamLimits

0xf7b8,	// (0x0003bce4) status_pane_g

0x9899,	// (0x00035dc5) title_pane_ParamLimits

0x9899,	// (0x00035dc5) title_pane

0x98d6,	// (0x00035e02) uni_indicator_pane_ParamLimits

0x98d6,	// (0x00035e02) uni_indicator_pane

0x8e52,	// (0x0003537e) bg_list_pane_ParamLimits

0x8e52,	// (0x0003537e) bg_list_pane

0x8e72,	// (0x0003539e) find_pane

0x8e7a,	// (0x000353a6) listscroll_app_pane_ParamLimits

0x8e7a,	// (0x000353a6) listscroll_app_pane

0x8e86,	// (0x000353b2) listscroll_form_pane

0x8e8e,	// (0x000353ba) listscroll_gen_pane_ParamLimits

0x8e8e,	// (0x000353ba) listscroll_gen_pane

0x8e86,	// (0x000353b2) listscroll_set_pane

0x80c7,	// (0x000345f3) main_idle_act_pane

0x8b2e,	// (0x0003505a) main_idle_trad_pane

0x8b2e,	// (0x0003505a) main_list_empty_pane

0x8eb4,	// (0x000353e0) main_midp_pane

0x8ec0,	// (0x000353ec) main_pane_g1_ParamLimits

0x8ec0,	// (0x000353ec) main_pane_g1

0x8ece,	// (0x000353fa) popup_ai_message_window_ParamLimits

0x8ece,	// (0x000353fa) popup_ai_message_window

0x8f7e,	// (0x000354aa) popup_fep_china_uni_window_ParamLimits

0x8f7e,	// (0x000354aa) popup_fep_china_uni_window

0x8fde,	// (0x0003550a) popup_fep_japan_candidate_window_ParamLimits

0x8fde,	// (0x0003550a) popup_fep_japan_candidate_window

0x9008,	// (0x00035534) popup_fep_japan_predictive_window_ParamLimits

0x9008,	// (0x00035534) popup_fep_japan_predictive_window

0x903e,	// (0x0003556a) popup_find_window

0x904b,	// (0x00035577) popup_grid_graphic_window_ParamLimits

0x904b,	// (0x00035577) popup_grid_graphic_window

0x9079,	// (0x000355a5) popup_large_graphic_colour_window

0x909f,	// (0x000355cb) popup_menu_window_ParamLimits

0x909f,	// (0x000355cb) popup_menu_window

0x9269,	// (0x00035795) popup_note_image_window

0x9253,	// (0x0003577f) popup_note_wait_window_ParamLimits

0x9253,	// (0x0003577f) popup_note_wait_window

0x9253,	// (0x0003577f) popup_note_window_ParamLimits

0x9253,	// (0x0003577f) popup_note_window

0x92cf,	// (0x000357fb) popup_query_code_window_ParamLimits

0x92cf,	// (0x000357fb) popup_query_code_window

0x92e5,	// (0x00035811) popup_query_data_code_window_ParamLimits

0x92e5,	// (0x00035811) popup_query_data_code_window

0x9308,	// (0x00035834) popup_query_data_window_ParamLimits

0x9308,	// (0x00035834) popup_query_data_window

0x932a,	// (0x00035856) popup_query_sat_info_window_ParamLimits

0x932a,	// (0x00035856) popup_query_sat_info_window

0x9369,	// (0x00035895) popup_snote_single_graphic_window_ParamLimits

0x9369,	// (0x00035895) popup_snote_single_graphic_window

0x9369,	// (0x00035895) popup_snote_single_text_window_ParamLimits

0x9369,	// (0x00035895) popup_snote_single_text_window

0x9380,	// (0x000358ac) popup_sub_window_general

0x94c6,	// (0x000359f2) popup_window_general_ParamLimits

0x94c6,	// (0x000359f2) popup_window_general

0x94df,	// (0x00035a0b) power_save_pane

0x5aef,	// (0x0003201b) control_pane_g1_ParamLimits

0x5aef,	// (0x0003201b) control_pane_g1

0x5b18,	// (0x00032044) control_pane_g2_ParamLimits

0x5b18,	// (0x00032044) control_pane_g2

0x8dfb,	// (0x00035327) control_pane_g3_ParamLimits

0x8dfb,	// (0x00035327) control_pane_g3

0x0007,

0xf7a0,	// (0x0003bccc) control_pane_g_ParamLimits

0xf7a0,	// (0x0003bccc) control_pane_g

0x5b63,	// (0x0003208f) control_pane_t1_ParamLimits

0x5b63,	// (0x0003208f) control_pane_t1

0x5bb5,	// (0x000320e1) control_pane_t2_ParamLimits

0x5bb5,	// (0x000320e1) control_pane_t2

0x0002,

0xf7b1,	// (0x0003bcdd) control_pane_t_ParamLimits

0xf7b1,	// (0x0003bcdd) control_pane_t

0x8d1c,	// (0x00035248) navi_navi_volume_pane_cp1

0x8d25,	// (0x00035251) status_small_icon_pane

0x8d2d,	// (0x00035259) status_small_pane_g1_ParamLimits

0x8d2d,	// (0x00035259) status_small_pane_g1

0x8d61,	// (0x0003528d) status_small_pane_g2_ParamLimits

0x8d61,	// (0x0003528d) status_small_pane_g2

0x8d6d,	// (0x00035299) status_small_pane_g3_ParamLimits

0x8d6d,	// (0x00035299) status_small_pane_g3

0x8d79,	// (0x000352a5) status_small_pane_g4_ParamLimits

0x8d79,	// (0x000352a5) status_small_pane_g4

0x8d85,	// (0x000352b1) status_small_pane_g5_ParamLimits

0x8d85,	// (0x000352b1) status_small_pane_g5

0x8d94,	// (0x000352c0) status_small_pane_g6_ParamLimits

0x8d94,	// (0x000352c0) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003bcbb) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003bcbb) status_small_pane_g

0x8dc4,	// (0x000352f0) status_small_pane_t1

0x8de7,	// (0x00035313) status_small_wait_pane_ParamLimits

0x8de7,	// (0x00035313) status_small_wait_pane

0x85c5,	// (0x00034af1) aid_levels_signal_ParamLimits

0x85c5,	// (0x00034af1) aid_levels_signal

0x85d7,	// (0x00034b03) signal_pane_g1_ParamLimits

0x85d7,	// (0x00034b03) signal_pane_g1

0x85ec,	// (0x00034b18) signal_pane_g2_ParamLimits

0x85ec,	// (0x00034b18) signal_pane_g2

0x0001,

0xf724,	// (0x0003bc50) signal_pane_g_ParamLimits

0xf724,	// (0x0003bc50) signal_pane_g

0x8601,	// (0x00034b2d) context_pane_g1

0x728b,	// (0x000337b7) title_pane_g1

0x72c1,	// (0x000337ed) title_pane_t1

0x7329,	// (0x00033855) title_pane_t2

0x734f,	// (0x0003387b) title_pane_t3

0x0002,

0xf573,	// (0x0003ba9f) title_pane_t

0x98ee,	// (0x00035e1a) aid_levels_battery_ParamLimits

0x98ee,	// (0x00035e1a) aid_levels_battery

0x9902,	// (0x00035e2e) battery_pane_g1_ParamLimits

0x9902,	// (0x00035e2e) battery_pane_g1

0x9918,	// (0x00035e44) battery_pane_g2_ParamLimits

0x9918,	// (0x00035e44) battery_pane_g2

0x0001,

0xf7c3,	// (0x0003bcef) battery_pane_g_ParamLimits

0xf7c3,	// (0x0003bcef) battery_pane_g

0xabcc,	// (0x000370f8) uni_indicator_pane_g1

0xabe1,	// (0x0003710d) uni_indicator_pane_g2

0xabf7,	// (0x00037123) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0003be5e) uni_indicator_pane_g

0x899c,	// (0x00034ec8) navi_icon_pane_ParamLimits

0x899c,	// (0x00034ec8) navi_icon_pane

0x88e3,	// (0x00034e0f) navi_midp_pane

0x89b8,	// (0x00034ee4) navi_navi_pane

0x89c2,	// (0x00034eee) navi_text_pane_ParamLimits

0x89c2,	// (0x00034eee) navi_text_pane

0x30d3,	// (0x0002f5ff) status_small_wait_pane_g1

0x7793,	// (0x00033cbf) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0003be59) status_small_wait_pane_g

0xa8df,	// (0x00036e0b) navi_navi_icon_text_pane

0xa8e7,	// (0x00036e13) navi_navi_pane_g1_ParamLimits

0xa8e7,	// (0x00036e13) navi_navi_pane_g1

0xa8f9,	// (0x00036e25) navi_navi_pane_g2_ParamLimits

0xa8f9,	// (0x00036e25) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0003be27) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0003be27) navi_navi_pane_g

0xa90b,	// (0x00036e37) navi_navi_tabs_pane

0xa914,	// (0x00036e40) navi_navi_text_pane

0xa8df,	// (0x00036e0b) navi_navi_volume_pane

0xa8b8,	// (0x00036de4) navi_text_pane_t1

0xa8a9,	// (0x00036dd5) navi_icon_pane_g1

0xa7fc,	// (0x00036d28) navi_navi_text_pane_t1

0x5faa,	// (0x000324d6) navi_navi_volume_pane_g1

0x5fb2,	// (0x000324de) volume_small_pane

0xa762,	// (0x00036c8e) navi_navi_icon_text_pane_g1

0xa76a,	// (0x00036c96) navi_navi_icon_text_pane_t1

0x89b8,	// (0x00034ee4) navi_tabs_2_long_pane

0x89b8,	// (0x00034ee4) navi_tabs_2_pane

0x89b8,	// (0x00034ee4) navi_tabs_3_long_pane

0x89b8,	// (0x00034ee4) navi_tabs_3_pane

0x89b8,	// (0x00034ee4) navi_tabs_4_pane

0x5f8a,	// (0x000324b6) tabs_2_active_pane_ParamLimits

0x5f8a,	// (0x000324b6) tabs_2_active_pane

0x5f9a,	// (0x000324c6) tabs_2_passive_pane_ParamLimits

0x5f9a,	// (0x000324c6) tabs_2_passive_pane

0x5f58,	// (0x00032484) tabs_3_active_pane_ParamLimits

0x5f58,	// (0x00032484) tabs_3_active_pane

0x5f68,	// (0x00032494) tabs_3_passive_pane_ParamLimits

0x5f68,	// (0x00032494) tabs_3_passive_pane

0x5f79,	// (0x000324a5) tabs_3_passive_pane_cp_ParamLimits

0x5f79,	// (0x000324a5) tabs_3_passive_pane_cp

0x5f0c,	// (0x00032438) tabs_4_active_pane_ParamLimits

0x5f0c,	// (0x00032438) tabs_4_active_pane

0x5f1f,	// (0x0003244b) tabs_4_passive_pane_ParamLimits

0x5f1f,	// (0x0003244b) tabs_4_passive_pane

0x5f30,	// (0x0003245c) tabs_4_passive_pane_cp_ParamLimits

0x5f30,	// (0x0003245c) tabs_4_passive_pane_cp

0x5f41,	// (0x0003246d) tabs_4_passive_pane_cp2_ParamLimits

0x5f41,	// (0x0003246d) tabs_4_passive_pane_cp2

0x5ee8,	// (0x00032414) tabs_2_long_active_pane_ParamLimits

0x5ee8,	// (0x00032414) tabs_2_long_active_pane

0x5efa,	// (0x00032426) tabs_2_long_passive_pane_ParamLimits

0x5efa,	// (0x00032426) tabs_2_long_passive_pane

0x5ea9,	// (0x000323d5) tabs_3_long_active_pane_ParamLimits

0x5ea9,	// (0x000323d5) tabs_3_long_active_pane

0x5ebc,	// (0x000323e8) tabs_3_long_passive_pane_ParamLimits

0x5ebc,	// (0x000323e8) tabs_3_long_passive_pane

0x5ed5,	// (0x00032401) tabs_3_long_passive_pane_cp_ParamLimits

0x5ed5,	// (0x00032401) tabs_3_long_passive_pane_cp

0x5e4f,	// (0x0003237b) volume_small_pane_g1

0x5e58,	// (0x00032384) volume_small_pane_g2

0x5e61,	// (0x0003238d) volume_small_pane_g3

0x5e6a,	// (0x00032396) volume_small_pane_g4

0x5e73,	// (0x0003239f) volume_small_pane_g5

0x5e7c,	// (0x000323a8) volume_small_pane_g6

0x5e85,	// (0x000323b1) volume_small_pane_g7

0x5e8e,	// (0x000323ba) volume_small_pane_g8

0x5e97,	// (0x000323c3) volume_small_pane_g9

0x5ea0,	// (0x000323cc) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0003bdf3) volume_small_pane_g

0x7361,	// (0x0003388d) bg_active_tab_pane_cp2_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp2

0x736f,	// (0x0003389b) tabs_3_active_pane_g1

0x7377,	// (0x000338a3) tabs_3_active_pane_t1

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp2_ParamLimits

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp2

0x736f,	// (0x0003389b) tabs_3_passive_pane_g1

0x7377,	// (0x000338a3) tabs_3_passive_pane_t1

0x7361,	// (0x0003388d) bg_active_tab_pane_cp3_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp3

0x7389,	// (0x000338b5) tabs_4_active_pane_g1

0x7391,	// (0x000338bd) tabs_4_active_pane_t1

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp3_ParamLimits

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp3

0x7389,	// (0x000338b5) tabs_4_1_passive_pane_g1

0x7391,	// (0x000338bd) tabs_4_1_passive_pane_t1

0x8eb4,	// (0x000353e0) list_highlight_pane_cp2

0xae5b,	// (0x00037387) list_set_pane_ParamLimits

0xae5b,	// (0x00037387) list_set_pane

0xaf23,	// (0x0003744f) main_pane_set_t1_ParamLimits

0xaf23,	// (0x0003744f) main_pane_set_t1

0xaf43,	// (0x0003746f) main_pane_set_t2_ParamLimits

0xaf43,	// (0x0003746f) main_pane_set_t2

0xaf57,	// (0x00037483) main_pane_set_t3_ParamLimits

0xaf57,	// (0x00037483) main_pane_set_t3

0xaf6b,	// (0x00037497) main_pane_set_t4_ParamLimits

0xaf6b,	// (0x00037497) main_pane_set_t4

0x0003,

0xf997,	// (0x0003bec3) main_pane_set_t_ParamLimits

0xf997,	// (0x0003bec3) main_pane_set_t

0xaf8b,	// (0x000374b7) setting_code_pane

0xaf95,	// (0x000374c1) setting_slider_graphic_pane

0xaf95,	// (0x000374c1) setting_slider_pane

0xaf95,	// (0x000374c1) setting_text_pane

0xaf95,	// (0x000374c1) setting_volume_pane

0x4e31,	// (0x0003135d) volume_set_pane

0x7361,	// (0x0003388d) bg_set_opt_pane_cp

0x4e3b,	// (0x00031367) setting_slider_pane_t1

0x4e51,	// (0x0003137d) setting_slider_pane_t2

0x4e6b,	// (0x00031397) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003baa6) setting_slider_pane_t

0x4e83,	// (0x000313af) slider_set_pane

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp2

0x73a3,	// (0x000338cf) setting_slider_graphic_pane_g1

0x4e99,	// (0x000313c5) setting_slider_graphic_pane_t1

0x4ea9,	// (0x000313d5) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003baad) setting_slider_graphic_pane_t

0x4eb9,	// (0x000313e5) slider_set_pane_cp

0x30dd,	// (0x0002f609) input_focus_pane_cp1

0xae1c,	// (0x00037348) list_set_text_pane

0x30d3,	// (0x0002f5ff) setting_text_pane_g1

0x30dd,	// (0x0002f609) input_focus_pane_cp2

0x30d3,	// (0x0002f5ff) setting_code_pane_g1

0x73ac,	// (0x000338d8) setting_code_pane_t1

0x3fe5,	// (0x00030511) set_text_pane_t1_ParamLimits

0x3fe5,	// (0x00030511) set_text_pane_t1

0x7c4f,	// (0x0003417b) set_opt_bg_pane_g1

0x7c57,	// (0x00034183) set_opt_bg_pane_g2

0xadf4,	// (0x00037320) set_opt_bg_pane_g3

0x7c67,	// (0x00034193) set_opt_bg_pane_g4

0x7c6f,	// (0x0003419b) set_opt_bg_pane_g5

0x7c77,	// (0x000341a3) set_opt_bg_pane_g6

0xadfe,	// (0x0003732a) set_opt_bg_pane_g7

0xae08,	// (0x00037334) set_opt_bg_pane_g8

0xae12,	// (0x0003733e) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0003beb0) set_opt_bg_pane_g

0xade7,	// (0x00037313) slider_set_pane_g1

0x605b,	// (0x00032587) slider_set_pane_g2

0x0006,

0xf975,	// (0x0003bea1) slider_set_pane_g

0x5fbb,	// (0x000324e7) volume_set_pane_g1

0x5fc5,	// (0x000324f1) volume_set_pane_g2

0x5fcf,	// (0x000324fb) volume_set_pane_g3

0x5fd9,	// (0x00032505) volume_set_pane_g4

0x5fe3,	// (0x0003250f) volume_set_pane_g5

0x5fed,	// (0x00032519) volume_set_pane_g6

0x5ff7,	// (0x00032523) volume_set_pane_g7

0x6001,	// (0x0003252d) volume_set_pane_g8

0x600b,	// (0x00032537) volume_set_pane_g9

0x6015,	// (0x00032541) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0003be79) volume_set_pane_g

0x73ba,	// (0x000338e6) indicator_pane_ParamLimits

0x73ba,	// (0x000338e6) indicator_pane

0x73c6,	// (0x000338f2) main_idle_pane_g2_ParamLimits

0x73c6,	// (0x000338f2) main_idle_pane_g2

0x73ee,	// (0x0003391a) main_pane_idle_g1_ParamLimits

0x73ee,	// (0x0003391a) main_pane_idle_g1

0x73fc,	// (0x00033928) popup_clock_digital_analogue_window_ParamLimits

0x73fc,	// (0x00033928) popup_clock_digital_analogue_window

0x7413,	// (0x0003393f) soft_indicator_pane_ParamLimits

0x7413,	// (0x0003393f) soft_indicator_pane

0x7421,	// (0x0003394d) wallpaper_pane_ParamLimits

0x7421,	// (0x0003394d) wallpaper_pane

0x30d3,	// (0x0002f5ff) wallpaper_pane_g1

0x7435,	// (0x00033961) indicator_pane_g1_ParamLimits

0x7435,	// (0x00033961) indicator_pane_g1

0xb259,	// (0x00037785) navi_navi_icon_text_pane_srt_g1

0x7450,	// (0x0003397c) soft_indicator_pane_t1

0x746a,	// (0x00033996) aid_ps_area_pane

0x747b,	// (0x000339a7) aid_ps_clock_pane

0x7489,	// (0x000339b5) aid_ps_indicator_pane

0x7495,	// (0x000339c1) indicator_ps_pane_ParamLimits

0x7495,	// (0x000339c1) indicator_ps_pane

0x74a4,	// (0x000339d0) power_save_pane_g1_ParamLimits

0x74a4,	// (0x000339d0) power_save_pane_g1

0x74b0,	// (0x000339dc) power_save_pane_g2_ParamLimits

0x74b0,	// (0x000339dc) power_save_pane_g2

0x4a30,	// (0x00030f5c) aid_navinavi_width_pane

0x746a,	// (0x00033996) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003bab2) power_save_pane_g_ParamLimits

0xf586,	// (0x0003bab2) power_save_pane_g

0x74be,	// (0x000339ea) power_save_pane_t1_ParamLimits

0x74be,	// (0x000339ea) power_save_pane_t1

0x747b,	// (0x000339a7) aid_ps_clock_pane_ParamLimits

0x7489,	// (0x000339b5) aid_ps_indicator_pane_ParamLimits

0x74d0,	// (0x000339fc) power_save_pane_t4_ParamLimits

0x74d0,	// (0x000339fc) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003bab7) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003bab7) power_save_pane_t

0x74fa,	// (0x00033a26) power_save_t3_ParamLimits

0x74fa,	// (0x00033a26) power_save_t3

0x74e5,	// (0x00033a11) power_save_t2_ParamLimits

0x74e5,	// (0x00033a11) power_save_t2

0x750f,	// (0x00033a3b) indicator_ps_pane_g1

0x7518,	// (0x00033a44) ai_gene_pane_ParamLimits

0x7518,	// (0x00033a44) ai_gene_pane

0x7524,	// (0x00033a50) ai_links_pane_ParamLimits

0x7524,	// (0x00033a50) ai_links_pane

0x7530,	// (0x00033a5c) indicator_pane_cp1_ParamLimits

0x7530,	// (0x00033a5c) indicator_pane_cp1

0x753c,	// (0x00033a68) main_pane_idle_g1_cp_ParamLimits

0x753c,	// (0x00033a68) main_pane_idle_g1_cp

0x7548,	// (0x00033a74) popup_ai_links_title_window

0x7551,	// (0x00033a7d) soft_indicator_pane_cp1_ParamLimits

0x7551,	// (0x00033a7d) soft_indicator_pane_cp1

0xabba,	// (0x000370e6) ai_links_pane_g1

0xabc3,	// (0x000370ef) grid_ai_links_pane

0xab9f,	// (0x000370cb) ai_gene_pane_1

0xaba8,	// (0x000370d4) ai_gene_pane_2

0xabb1,	// (0x000370dd) list_highlight_pane_cp4

0xab7f,	// (0x000370ab) cell_ai_link_pane_ParamLimits

0xab7f,	// (0x000370ab) cell_ai_link_pane

0xab77,	// (0x000370a3) cell_ai_link_pane_g1

0x7793,	// (0x00033cbf) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0003be54) cell_ai_link_pane_g

0x30dd,	// (0x0002f609) grid_highlight_cp2

0x30dd,	// (0x0002f609) bg_popup_sub_pane_cp1

0x756b,	// (0x00033a97) popup_ai_links_title_window_t1

0xaac3,	// (0x00036fef) ai_gene_pane_1_g1_ParamLimits

0xaac3,	// (0x00036fef) ai_gene_pane_1_g1

0xaacf,	// (0x00036ffb) ai_gene_pane_1_g2_ParamLimits

0xaacf,	// (0x00036ffb) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0003be4a) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0003be4a) ai_gene_pane_1_g

0xaadc,	// (0x00037008) ai_gene_pane_1_t1_ParamLimits

0xaadc,	// (0x00037008) ai_gene_pane_1_t1

0xab10,	// (0x0003703c) grid_ai_soft_ind_pane

0xaaae,	// (0x00036fda) ai_gene_pane_2_t1_ParamLimits

0xaaae,	// (0x00036fda) ai_gene_pane_2_t1

0x757a,	// (0x00033aa6) main_pane_empty_t1_ParamLimits

0x757a,	// (0x00033aa6) main_pane_empty_t1

0x7592,	// (0x00033abe) main_pane_empty_t2_ParamLimits

0x7592,	// (0x00033abe) main_pane_empty_t2

0x75a7,	// (0x00033ad3) main_pane_empty_t3_ParamLimits

0x75a7,	// (0x00033ad3) main_pane_empty_t3

0x75b9,	// (0x00033ae5) main_pane_empty_t4_ParamLimits

0x75b9,	// (0x00033ae5) main_pane_empty_t4

0x75cb,	// (0x00033af7) main_pane_empty_t5_ParamLimits

0x75cb,	// (0x00033af7) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003babc) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003babc) main_pane_empty_t

0x7ca0,	// (0x000341cc) bg_popup_window_pane_ParamLimits

0x7ca0,	// (0x000341cc) bg_popup_window_pane

0xa80a,	// (0x00036d36) find_popup_pane_cp2_ParamLimits

0xa80a,	// (0x00036d36) find_popup_pane_cp2

0xa816,	// (0x00036d42) heading_pane_ParamLimits

0xa816,	// (0x00036d42) heading_pane

0x30dd,	// (0x0002f609) bg_popup_sub_pane

0xa784,	// (0x00036cb0) bg_popup_window_pane_g1_ParamLimits

0xa784,	// (0x00036cb0) bg_popup_window_pane_g1

0xa790,	// (0x00036cbc) bg_popup_window_pane_g2_ParamLimits

0xa790,	// (0x00036cbc) bg_popup_window_pane_g2

0xa79c,	// (0x00036cc8) bg_popup_window_pane_g3_ParamLimits

0xa79c,	// (0x00036cc8) bg_popup_window_pane_g3

0xa7a8,	// (0x00036cd4) bg_popup_window_pane_g4_ParamLimits

0xa7a8,	// (0x00036cd4) bg_popup_window_pane_g4

0xa7b4,	// (0x00036ce0) bg_popup_window_pane_g5_ParamLimits

0xa7b4,	// (0x00036ce0) bg_popup_window_pane_g5

0xa7c0,	// (0x00036cec) bg_popup_window_pane_g6_ParamLimits

0xa7c0,	// (0x00036cec) bg_popup_window_pane_g6

0xa7cc,	// (0x00036cf8) bg_popup_window_pane_g7_ParamLimits

0xa7cc,	// (0x00036cf8) bg_popup_window_pane_g7

0xa7d8,	// (0x00036d04) bg_popup_window_pane_g8_ParamLimits

0xa7d8,	// (0x00036d04) bg_popup_window_pane_g8

0xa7e4,	// (0x00036d10) bg_popup_window_pane_g9_ParamLimits

0xa7e4,	// (0x00036d10) bg_popup_window_pane_g9

0xa7f0,	// (0x00036d1c) bg_popup_window_pane_g10_ParamLimits

0xa7f0,	// (0x00036d1c) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0003be12) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0003be12) bg_popup_window_pane_g

0xa719,	// (0x00036c45) bg_popup_heading_pane_ParamLimits

0xa719,	// (0x00036c45) bg_popup_heading_pane

0x6181,	// (0x000326ad) tabs_4_passive_pane_cp_srt_ParamLimits

0x6181,	// (0x000326ad) tabs_4_passive_pane_cp_srt

0x6193,	// (0x000326bf) tabs_4_passive_pane_srt_ParamLimits

0xa72d,	// (0x00036c59) heading_pane_g2

0x6193,	// (0x000326bf) tabs_4_passive_pane_srt

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp3_srt

0xa735,	// (0x00036c61) heading_pane_t1_ParamLimits

0xa735,	// (0x00036c61) heading_pane_t1

0xa74c,	// (0x00036c78) heading_pane_t2_ParamLimits

0xa74c,	// (0x00036c78) heading_pane_t2

0x0001,

0xf8e1,	// (0x0003be0d) heading_pane_t_ParamLimits

0xf8e1,	// (0x0003be0d) heading_pane_t

0xa244,	// (0x00036770) bg_popup_heading_pane_g1

0xa2f3,	// (0x0003681f) bg_popup_heading_pane_g2

0xa2fd,	// (0x00036829) bg_popup_heading_pane_g3

0xa307,	// (0x00036833) bg_popup_heading_pane_g4

0xa311,	// (0x0003683d) bg_popup_heading_pane_g5

0xa31b,	// (0x00036847) bg_popup_heading_pane_g6

0xa323,	// (0x0003684f) bg_popup_heading_pane_g7

0xa32b,	// (0x00036857) bg_popup_heading_pane_g8

0xa335,	// (0x00036861) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0003bdc9) bg_popup_heading_pane_g

0x99f0,	// (0x00035f1c) bg_popup_sub_pane_g1

0x9a00,	// (0x00035f2c) bg_popup_sub_pane_g2

0x99f8,	// (0x00035f24) bg_popup_sub_pane_g3

0x9a10,	// (0x00035f3c) bg_popup_sub_pane_g4

0x9a08,	// (0x00035f34) bg_popup_sub_pane_g5

0x9a18,	// (0x00035f44) bg_popup_sub_pane_g6

0x9a20,	// (0x00035f4c) bg_popup_sub_pane_g7

0x9a30,	// (0x00035f5c) bg_popup_sub_pane_g8

0x9a28,	// (0x00035f54) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0003bda3) bg_popup_sub_pane_g

0x75dd,	// (0x00033b09) bg_popup_window_pane_cp5_ParamLimits

0x75dd,	// (0x00033b09) bg_popup_window_pane_cp5

0x75f9,	// (0x00033b25) popup_note_window_g1_ParamLimits

0x75f9,	// (0x00033b25) popup_note_window_g1

0x7605,	// (0x00033b31) popup_note_window_t1_ParamLimits

0x7605,	// (0x00033b31) popup_note_window_t1

0x761b,	// (0x00033b47) popup_note_window_t2_ParamLimits

0x761b,	// (0x00033b47) popup_note_window_t2

0x7631,	// (0x00033b5d) popup_note_window_t3_ParamLimits

0x7631,	// (0x00033b5d) popup_note_window_t3

0x7647,	// (0x00033b73) popup_note_window_t4_ParamLimits

0x7647,	// (0x00033b73) popup_note_window_t4

0x766f,	// (0x00033b9b) popup_note_window_t5_ParamLimits

0x766f,	// (0x00033b9b) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003bac7) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003bac7) popup_note_window_t

0x7693,	// (0x00033bbf) bg_popup_window_pane_cp6_ParamLimits

0x7693,	// (0x00033bbf) bg_popup_window_pane_cp6

0xa1c0,	// (0x000366ec) popup_note_image_window_g1_ParamLimits

0xa1c0,	// (0x000366ec) popup_note_image_window_g1

0xa1cc,	// (0x000366f8) popup_note_image_window_g2_ParamLimits

0xa1cc,	// (0x000366f8) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0003bd97) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0003bd97) popup_note_image_window_g

0xa1e5,	// (0x00036711) popup_note_image_window_t1_ParamLimits

0xa1e5,	// (0x00036711) popup_note_image_window_t1

0xa1fe,	// (0x0003672a) popup_note_image_window_t2_ParamLimits

0xa1fe,	// (0x0003672a) popup_note_image_window_t2

0xa217,	// (0x00036743) popup_note_image_window_t3_ParamLimits

0xa217,	// (0x00036743) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0003bd9c) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0003bd9c) popup_note_image_window_t

0xa080,	// (0x000365ac) bg_popup_window_pane_cp7_ParamLimits

0xa080,	// (0x000365ac) bg_popup_window_pane_cp7

0xa0b0,	// (0x000365dc) popup_note_wait_window_g1_ParamLimits

0xa0b0,	// (0x000365dc) popup_note_wait_window_g1

0xa0bc,	// (0x000365e8) popup_note_wait_window_g2_ParamLimits

0xa0bc,	// (0x000365e8) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0003bd85) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0003bd85) popup_note_wait_window_g

0xa0d4,	// (0x00036600) popup_note_wait_window_t1_ParamLimits

0xa0d4,	// (0x00036600) popup_note_wait_window_t1

0xa0fb,	// (0x00036627) popup_note_wait_window_t2_ParamLimits

0xa0fb,	// (0x00036627) popup_note_wait_window_t2

0xa119,	// (0x00036645) popup_note_wait_window_t3_ParamLimits

0xa119,	// (0x00036645) popup_note_wait_window_t3

0xa12c,	// (0x00036658) popup_note_wait_window_t4_ParamLimits

0xa12c,	// (0x00036658) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0003bd8c) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0003bd8c) popup_note_wait_window_t

0xa151,	// (0x0003667d) wait_bar_pane_ParamLimits

0xa151,	// (0x0003667d) wait_bar_pane

0x30dd,	// (0x0002f609) wait_anim_pane

0x30dd,	// (0x0002f609) wait_border_pane

0x30d3,	// (0x0002f5ff) wait_anim_pane_g1

0x30d3,	// (0x0002f5ff) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0003bc4b) wait_anim_pane_g

0xa024,	// (0x00036550) wait_border_pane_g1

0xa02f,	// (0x0003655b) wait_border_pane_g2

0xa038,	// (0x00036564) wait_border_pane_g3

0x0002,

0xf852,	// (0x0003bd7e) wait_border_pane_g

0x9e8e,	// (0x000363ba) bg_popup_window_pane_cp16_ParamLimits

0x9e8e,	// (0x000363ba) bg_popup_window_pane_cp16

0x9f8e,	// (0x000364ba) indicator_popup_pane_cp4_ParamLimits

0x9f8e,	// (0x000364ba) indicator_popup_pane_cp4

0x9fa2,	// (0x000364ce) popup_query_data_window_t1_ParamLimits

0x9fa2,	// (0x000364ce) popup_query_data_window_t1

0x9fb4,	// (0x000364e0) popup_query_data_window_t2_ParamLimits

0x9fb4,	// (0x000364e0) popup_query_data_window_t2

0x9fcd,	// (0x000364f9) popup_query_data_window_t3_ParamLimits

0x9fcd,	// (0x000364f9) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0003bd77) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0003bd77) popup_query_data_window_t

0x9fe7,	// (0x00036513) query_popup_data_pane_ParamLimits

0x9fe7,	// (0x00036513) query_popup_data_pane

0x9ffb,	// (0x00036527) query_popup_data_pane_cp1_ParamLimits

0x9ffb,	// (0x00036527) query_popup_data_pane_cp1

0x9e8e,	// (0x000363ba) bg_popup_window_pane_cp10_ParamLimits

0x9e8e,	// (0x000363ba) bg_popup_window_pane_cp10

0x9ec0,	// (0x000363ec) indicator_popup_pane_ParamLimits

0x9ec0,	// (0x000363ec) indicator_popup_pane

0x9ee2,	// (0x0003640e) popup_query_code_window_t1_ParamLimits

0x9ee2,	// (0x0003640e) popup_query_code_window_t1

0x9efc,	// (0x00036428) popup_query_code_window_t2_ParamLimits

0x9efc,	// (0x00036428) popup_query_code_window_t2

0x9f45,	// (0x00036471) popup_query_code_window_t3_ParamLimits

0x9f45,	// (0x00036471) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0003bd70) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0003bd70) popup_query_code_window_t

0x9f74,	// (0x000364a0) query_popup_pane_ParamLimits

0x9f74,	// (0x000364a0) query_popup_pane

0x7693,	// (0x00033bbf) bg_popup_window_pane_cp15_ParamLimits

0x7693,	// (0x00033bbf) bg_popup_window_pane_cp15

0x76b3,	// (0x00033bdf) indicator_popup_pane_cp1_ParamLimits

0x76b3,	// (0x00033bdf) indicator_popup_pane_cp1

0x76c6,	// (0x00033bf2) indicator_popup_pane_cp2_ParamLimits

0x76c6,	// (0x00033bf2) indicator_popup_pane_cp2

0x76e1,	// (0x00033c0d) popup_query_data_code_window_g1_ParamLimits

0x76e1,	// (0x00033c0d) popup_query_data_code_window_g1

0x76f4,	// (0x00033c20) popup_query_data_code_window_t1_ParamLimits

0x76f4,	// (0x00033c20) popup_query_data_code_window_t1

0x7706,	// (0x00033c32) popup_query_data_code_window_t2_ParamLimits

0x7706,	// (0x00033c32) popup_query_data_code_window_t2

0x7718,	// (0x00033c44) popup_query_data_code_window_t3_ParamLimits

0x7718,	// (0x00033c44) popup_query_data_code_window_t3

0x772e,	// (0x00033c5a) popup_query_data_code_window_t4_ParamLimits

0x772e,	// (0x00033c5a) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003bad2) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003bad2) popup_query_data_code_window_t

0x5ce7,	// (0x00032213) list_single_midp_graphic_pane_g3

0x7748,	// (0x00033c74) query_popup_data_pane_cp2_ParamLimits

0x775b,	// (0x00033c87) query_popup_pane_cp2_ParamLimits

0x775b,	// (0x00033c87) query_popup_pane_cp2

0x30dd,	// (0x0002f609) bg_popup_window_pane_cp11

0x9e86,	// (0x000363b2) heading_pane_cp5

0x784b,	// (0x00033d77) listscroll_popup_info_pane

0x30dd,	// (0x0002f609) input_focus_pane_cp3

0x7776,	// (0x00033ca2) query_popup_pane_t1

0x7784,	// (0x00033cb0) list_popup_info_pane_ParamLimits

0x7784,	// (0x00033cb0) list_popup_info_pane

0x7793,	// (0x00033cbf) listscroll_popup_info_pane_g1

0x779b,	// (0x00033cc7) scroll_pane_cp7

0x77a5,	// (0x00033cd1) popup_info_list_pane_t1_ParamLimits

0x77a5,	// (0x00033cd1) popup_info_list_pane_t1

0x77bf,	// (0x00033ceb) popup_info_list_pane_t2_ParamLimits

0x77bf,	// (0x00033ceb) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003badb) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003badb) popup_info_list_pane_t

0x30dd,	// (0x0002f609) bg_popup_window_pane_cp12

0xb273,	// (0x0003779f) find_popup_pane

0x7361,	// (0x0003388d) bg_popup_window_pane_cp3

0x77d9,	// (0x00033d05) heading_pane_cp3

0x77e5,	// (0x00033d11) listscroll_popup_graphic_pane

0x30dd,	// (0x0002f609) bg_popup_window_pane_cp4

0x7841,	// (0x00033d6d) heading_pane_cp4

0x784b,	// (0x00033d77) listscroll_popup_colour_pane

0x7853,	// (0x00033d7f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7853,	// (0x00033d7f) cell_large_graphic_colour_none_popup_pane

0x7867,	// (0x00033d93) grid_large_graphic_colour_popup_pane_ParamLimits

0x7867,	// (0x00033d93) grid_large_graphic_colour_popup_pane

0x7893,	// (0x00033dbf) listscroll_popup_colour_pane_g1_ParamLimits

0x7893,	// (0x00033dbf) listscroll_popup_colour_pane_g1

0x78aa,	// (0x00033dd6) listscroll_popup_colour_pane_g2_ParamLimits

0x78aa,	// (0x00033dd6) listscroll_popup_colour_pane_g2

0x78c1,	// (0x00033ded) listscroll_popup_colour_pane_g3_ParamLimits

0x78c1,	// (0x00033ded) listscroll_popup_colour_pane_g3

0x78d1,	// (0x00033dfd) listscroll_popup_colour_pane_g4_ParamLimits

0x78d1,	// (0x00033dfd) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003bae0) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003bae0) listscroll_popup_colour_pane_g

0x78e5,	// (0x00033e11) scroll_pane_cp6_ParamLimits

0x78e5,	// (0x00033e11) scroll_pane_cp6

0x78f7,	// (0x00033e23) cell_large_graphic_colour_popup_pane_ParamLimits

0x78f7,	// (0x00033e23) cell_large_graphic_colour_popup_pane

0x791c,	// (0x00033e48) cell_large_graphic_colour_none_popup_pane_t1

0x30dd,	// (0x0002f609) grid_highlight_pane_cp5

0x792b,	// (0x00033e57) cell_large_graphic_colour_popup_pane_g1

0x7933,	// (0x00033e5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003bae9) cell_large_graphic_colour_popup_pane_g

0x793b,	// (0x00033e67) cell_large_graphic_colour_popup_pane_g2_copy1

0x7944,	// (0x00033e70) grid_highlight_pane_cp4

0x794c,	// (0x00033e78) bg_popup_window_pane_cp8_ParamLimits

0x794c,	// (0x00033e78) bg_popup_window_pane_cp8

0x7967,	// (0x00033e93) popup_snote_single_text_window_g1_ParamLimits

0x7967,	// (0x00033e93) popup_snote_single_text_window_g1

0x7979,	// (0x00033ea5) popup_snote_single_text_window_t1_ParamLimits

0x7979,	// (0x00033ea5) popup_snote_single_text_window_t1

0x798c,	// (0x00033eb8) popup_snote_single_text_window_t2_ParamLimits

0x798c,	// (0x00033eb8) popup_snote_single_text_window_t2

0x799f,	// (0x00033ecb) popup_snote_single_text_window_t3_ParamLimits

0x799f,	// (0x00033ecb) popup_snote_single_text_window_t3

0x79d8,	// (0x00033f04) popup_snote_single_text_window_t4_ParamLimits

0x79d8,	// (0x00033f04) popup_snote_single_text_window_t4

0x7a0c,	// (0x00033f38) popup_snote_single_text_window_t5_ParamLimits

0x7a0c,	// (0x00033f38) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003baee) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003baee) popup_snote_single_text_window_t

0x7a3b,	// (0x00033f67) bg_popup_window_pane_cp9_ParamLimits

0x7a3b,	// (0x00033f67) bg_popup_window_pane_cp9

0x7967,	// (0x00033e93) popup_snote_single_graphic_window_g1_ParamLimits

0x7967,	// (0x00033e93) popup_snote_single_graphic_window_g1

0x7a49,	// (0x00033f75) popup_snote_single_graphic_window_g2_ParamLimits

0x7a49,	// (0x00033f75) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003baf9) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003baf9) popup_snote_single_graphic_window_g

0x7a55,	// (0x00033f81) popup_snote_single_graphic_window_t1_ParamLimits

0x7a55,	// (0x00033f81) popup_snote_single_graphic_window_t1

0x7a68,	// (0x00033f94) popup_snote_single_graphic_window_t2_ParamLimits

0x7a68,	// (0x00033f94) popup_snote_single_graphic_window_t2

0x7a7b,	// (0x00033fa7) popup_snote_single_graphic_window_t3_ParamLimits

0x7a7b,	// (0x00033fa7) popup_snote_single_graphic_window_t3

0x7ab4,	// (0x00033fe0) popup_snote_single_graphic_window_t4_ParamLimits

0x7ab4,	// (0x00033fe0) popup_snote_single_graphic_window_t4

0x7ae8,	// (0x00034014) popup_snote_single_graphic_window_t5_ParamLimits

0x7ae8,	// (0x00034014) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003bafe) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003bafe) popup_snote_single_graphic_window_t

0xb1b1,	// (0x000376dd) grid_graphic_popup_pane_ParamLimits

0xb1b1,	// (0x000376dd) grid_graphic_popup_pane

0xb1df,	// (0x0003770b) listscroll_popup_graphic_pane_g1_ParamLimits

0xb1df,	// (0x0003770b) listscroll_popup_graphic_pane_g1

0xb1f3,	// (0x0003771f) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1f3,	// (0x0003771f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0003beed) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0003beed) listscroll_popup_graphic_pane_g

0xb207,	// (0x00037733) scroll_pane_cp5

0xb159,	// (0x00037685) cell_graphic_popup_pane_ParamLimits

0xb159,	// (0x00037685) cell_graphic_popup_pane

0xb13a,	// (0x00037666) cell_graphic_popup_pane_g1

0xb142,	// (0x0003766e) cell_graphic_popup_pane_g2

0x793b,	// (0x00033e67) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0003bee6) cell_graphic_popup_pane_g

0xb14b,	// (0x00037677) cell_graphic_popup_pane_t2

0x7944,	// (0x00033e70) grid_highlight_pane_cp3

0x7b29,	// (0x00034055) list_gen_pane_ParamLimits

0x7b29,	// (0x00034055) list_gen_pane

0x7b5b,	// (0x00034087) scroll_pane

0xb09c,	// (0x000375c8) bg_list_pane_g1_ParamLimits

0xb09c,	// (0x000375c8) bg_list_pane_g1

0xb0b7,	// (0x000375e3) bg_list_pane_g2_ParamLimits

0xb0b7,	// (0x000375e3) bg_list_pane_g2

0xb0ca,	// (0x000375f6) bg_list_pane_g3_ParamLimits

0xb0ca,	// (0x000375f6) bg_list_pane_g3

0xb0dc,	// (0x00037608) bg_list_pane_g4_ParamLimits

0xb0dc,	// (0x00037608) bg_list_pane_g4

0xb0ee,	// (0x0003761a) bg_list_pane_g5_ParamLimits

0xb0ee,	// (0x0003761a) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0003bedb) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0003bedb) bg_list_pane_g

0x6103,	// (0x0003262f) list_double2_graphic_large_graphic_pane_ParamLimits

0x6103,	// (0x0003262f) list_double2_graphic_large_graphic_pane

0x6103,	// (0x0003262f) list_double2_graphic_pane_ParamLimits

0x6103,	// (0x0003262f) list_double2_graphic_pane

0x6103,	// (0x0003262f) list_double2_large_graphic_pane_ParamLimits

0x6103,	// (0x0003262f) list_double2_large_graphic_pane

0xb02d,	// (0x00037559) list_double2_pane_ParamLimits

0xb02d,	// (0x00037559) list_double2_pane

0x6103,	// (0x0003262f) list_double_graphic_heading_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_graphic_heading_pane

0x6103,	// (0x0003262f) list_double_graphic_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_graphic_pane

0x6103,	// (0x0003262f) list_double_heading_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_heading_pane

0x6103,	// (0x0003262f) list_double_large_graphic_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_large_graphic_pane

0x6103,	// (0x0003262f) list_double_number_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_number_pane

0x6103,	// (0x0003262f) list_double_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_pane

0x6103,	// (0x0003262f) list_double_time_pane_ParamLimits

0x6103,	// (0x0003262f) list_double_time_pane

0x6103,	// (0x0003262f) list_setting_number_pane_ParamLimits

0x6103,	// (0x0003262f) list_setting_number_pane

0x6103,	// (0x0003262f) list_setting_pane_ParamLimits

0x6103,	// (0x0003262f) list_setting_pane

0xb058,	// (0x00037584) list_single_2graphic_pane_ParamLimits

0xb058,	// (0x00037584) list_single_2graphic_pane

0xb058,	// (0x00037584) list_single_graphic_heading_pane_ParamLimits

0xb058,	// (0x00037584) list_single_graphic_heading_pane

0xb058,	// (0x00037584) list_single_graphic_pane_ParamLimits

0xb058,	// (0x00037584) list_single_graphic_pane

0xb058,	// (0x00037584) list_single_heading_pane_ParamLimits

0xb058,	// (0x00037584) list_single_heading_pane

0x6142,	// (0x0003266e) list_single_large_graphic_pane_ParamLimits

0x6142,	// (0x0003266e) list_single_large_graphic_pane

0xb058,	// (0x00037584) list_single_number_heading_pane_ParamLimits

0xb058,	// (0x00037584) list_single_number_heading_pane

0xb058,	// (0x00037584) list_single_number_pane_ParamLimits

0xb058,	// (0x00037584) list_single_number_pane

0xb058,	// (0x00037584) list_single_pane_ParamLimits

0xb058,	// (0x00037584) list_single_pane

0x30dd,	// (0x0002f609) list_highlight_pane_cp1

0x4000,	// (0x0003052c) list_single_pane_g1_ParamLimits

0x4000,	// (0x0003052c) list_single_pane_g1

0x4ecd,	// (0x000313f9) list_single_pane_g2_ParamLimits

0x4ecd,	// (0x000313f9) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0003bb10) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0003bb10) list_single_pane_g

0x60ed,	// (0x00032619) list_single_pane_t1_ParamLimits

0x60ed,	// (0x00032619) list_single_pane_t1

0x4000,	// (0x0003052c) list_single_number_pane_g1_ParamLimits

0x4000,	// (0x0003052c) list_single_number_pane_g1

0x4ecd,	// (0x000313f9) list_single_number_pane_g2_ParamLimits

0x4ecd,	// (0x000313f9) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0003bb10) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0003bb10) list_single_number_pane_g

0x601f,	// (0x0003254b) list_single_number_pane_t1_ParamLimits

0x601f,	// (0x0003254b) list_single_number_pane_t1

0x6035,	// (0x00032561) list_single_number_pane_t2_ParamLimits

0x6035,	// (0x00032561) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0003be9c) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0003be9c) list_single_number_pane_t

0x4ec1,	// (0x000313ed) list_single_graphic_pane_g1_ParamLimits

0x4ec1,	// (0x000313ed) list_single_graphic_pane_g1

0x4000,	// (0x0003052c) list_single_graphic_pane_g2_ParamLimits

0x4000,	// (0x0003052c) list_single_graphic_pane_g2

0x4ecd,	// (0x000313f9) list_single_graphic_pane_g3_ParamLimits

0x4ecd,	// (0x000313f9) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003bb09) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003bb09) list_single_graphic_pane_g

0x4ed9,	// (0x00031405) list_single_graphic_pane_t1_ParamLimits

0x4ed9,	// (0x00031405) list_single_graphic_pane_t1

0x4000,	// (0x0003052c) list_single_heading_pane_g1_ParamLimits

0x4000,	// (0x0003052c) list_single_heading_pane_g1

0x4ecd,	// (0x000313f9) list_single_heading_pane_g2_ParamLimits

0x4ecd,	// (0x000313f9) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003bb10) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003bb10) list_single_heading_pane_g

0x4eef,	// (0x0003141b) list_single_heading_pane_t1_ParamLimits

0x4eef,	// (0x0003141b) list_single_heading_pane_t1

0x4f05,	// (0x00031431) list_single_heading_pane_t2_ParamLimits

0x4f05,	// (0x00031431) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003bb15) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003bb15) list_single_heading_pane_t

0x4000,	// (0x0003052c) list_single_number_heading_pane_g1_ParamLimits

0x4000,	// (0x0003052c) list_single_number_heading_pane_g1

0x4ecd,	// (0x000313f9) list_single_number_heading_pane_g2_ParamLimits

0x4ecd,	// (0x000313f9) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003bb10) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003bb10) list_single_number_heading_pane_g

0x4eef,	// (0x0003141b) list_single_number_heading_pane_t1_ParamLimits

0x4eef,	// (0x0003141b) list_single_number_heading_pane_t1

0x4f17,	// (0x00031443) list_single_number_heading_pane_t2_ParamLimits

0x4f17,	// (0x00031443) list_single_number_heading_pane_t2

0x4f29,	// (0x00031455) list_single_number_heading_pane_t3_ParamLimits

0x4f29,	// (0x00031455) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0003bb1a) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0003bb1a) list_single_number_heading_pane_t

0x4f3b,	// (0x00031467) list_single_graphic_heading_pane_g1_ParamLimits

0x4f3b,	// (0x00031467) list_single_graphic_heading_pane_g1

0x4f47,	// (0x00031473) list_single_graphic_heading_pane_g4_ParamLimits

0x4f47,	// (0x00031473) list_single_graphic_heading_pane_g4

0x4ecd,	// (0x000313f9) list_single_graphic_heading_pane_g5_ParamLimits

0x4ecd,	// (0x000313f9) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0003bb21) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0003bb21) list_single_graphic_heading_pane_g

0x4eef,	// (0x0003141b) list_single_graphic_heading_pane_t1_ParamLimits

0x4eef,	// (0x0003141b) list_single_graphic_heading_pane_t1

0x4f58,	// (0x00031484) list_single_graphic_heading_pane_t2_ParamLimits

0x4f58,	// (0x00031484) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0003bb28) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0003bb28) list_single_graphic_heading_pane_t

0x4f6a,	// (0x00031496) list_single_large_graphic_pane_g1_ParamLimits

0x4f6a,	// (0x00031496) list_single_large_graphic_pane_g1

0x4000,	// (0x0003052c) list_single_large_graphic_pane_g2_ParamLimits

0x4000,	// (0x0003052c) list_single_large_graphic_pane_g2

0x4ecd,	// (0x000313f9) list_single_large_graphic_pane_g3_ParamLimits

0x4ecd,	// (0x000313f9) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003bb2d) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003bb2d) list_single_large_graphic_pane_g

0xa02f,	// (0x0003655b) wait_border_pane_g2_copy1

0x4f76,	// (0x000314a2) list_single_large_graphic_pane_g4_cp2

0x4eef,	// (0x0003141b) list_single_large_graphic_pane_t1_ParamLimits

0x4eef,	// (0x0003141b) list_single_large_graphic_pane_t1

0x4f7e,	// (0x000314aa) list_double_pane_g1_ParamLimits

0x4f7e,	// (0x000314aa) list_double_pane_g1

0x4f8a,	// (0x000314b6) list_double_pane_g2_ParamLimits

0x4f8a,	// (0x000314b6) list_double_pane_g2

0x0001,

0xf608,	// (0x0003bb34) list_double_pane_g_ParamLimits

0xf608,	// (0x0003bb34) list_double_pane_g

0x4f96,	// (0x000314c2) list_double_pane_t1_ParamLimits

0x4f96,	// (0x000314c2) list_double_pane_t1

0x4fac,	// (0x000314d8) list_double_pane_t2_ParamLimits

0x4fac,	// (0x000314d8) list_double_pane_t2

0x0001,

0xf60d,	// (0x0003bb39) list_double_pane_t_ParamLimits

0xf60d,	// (0x0003bb39) list_double_pane_t

0x4fbe,	// (0x000314ea) list_double2_pane_g1_ParamLimits

0x4fbe,	// (0x000314ea) list_double2_pane_g1

0x4fcf,	// (0x000314fb) list_double2_pane_g2_ParamLimits

0x4fcf,	// (0x000314fb) list_double2_pane_g2

0x0001,

0xf612,	// (0x0003bb3e) list_double2_pane_g_ParamLimits

0xf612,	// (0x0003bb3e) list_double2_pane_g

0x4fdb,	// (0x00031507) list_double2_pane_t1_ParamLimits

0x4fdb,	// (0x00031507) list_double2_pane_t1

0x4ff1,	// (0x0003151d) list_double2_pane_t2_ParamLimits

0x4ff1,	// (0x0003151d) list_double2_pane_t2

0x0001,

0xf617,	// (0x0003bb43) list_double2_pane_t_ParamLimits

0xf617,	// (0x0003bb43) list_double2_pane_t

0x4f7e,	// (0x000314aa) list_double_number_pane_g1_ParamLimits

0x4f7e,	// (0x000314aa) list_double_number_pane_g1

0x4f8a,	// (0x000314b6) list_double_number_pane_g2_ParamLimits

0x4f8a,	// (0x000314b6) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0003bb34) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0003bb34) list_double_number_pane_g

0x5003,	// (0x0003152f) list_double_number_pane_t1_ParamLimits

0x5003,	// (0x0003152f) list_double_number_pane_t1

0x5015,	// (0x00031541) list_double_number_pane_t2_ParamLimits

0x5015,	// (0x00031541) list_double_number_pane_t2

0x502b,	// (0x00031557) list_double_number_pane_t3_ParamLimits

0x502b,	// (0x00031557) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0003bb48) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0003bb48) list_double_number_pane_t

0x503d,	// (0x00031569) list_double_graphic_pane_g1_ParamLimits

0x503d,	// (0x00031569) list_double_graphic_pane_g1

0x5049,	// (0x00031575) list_double_graphic_pane_g2_ParamLimits

0x5049,	// (0x00031575) list_double_graphic_pane_g2

0x5058,	// (0x00031584) list_double_graphic_pane_g3_ParamLimits

0x5058,	// (0x00031584) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0003bb4f) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0003bb4f) list_double_graphic_pane_g

0x5070,	// (0x0003159c) list_double_graphic_pane_t1_ParamLimits

0x5070,	// (0x0003159c) list_double_graphic_pane_t1

0x5086,	// (0x000315b2) list_double_graphic_pane_t2_ParamLimits

0x5086,	// (0x000315b2) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003bb58) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003bb58) list_double_graphic_pane_t

0x5098,	// (0x000315c4) list_double2_graphic_pane_g1_ParamLimits

0x5098,	// (0x000315c4) list_double2_graphic_pane_g1

0x50a4,	// (0x000315d0) list_double2_graphic_pane_g2_ParamLimits

0x50a4,	// (0x000315d0) list_double2_graphic_pane_g2

0x50b0,	// (0x000315dc) list_double2_graphic_pane_g3_ParamLimits

0x50b0,	// (0x000315dc) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0003bb5d) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0003bb5d) list_double2_graphic_pane_g

0x50bc,	// (0x000315e8) list_double2_graphic_pane_t1_ParamLimits

0x50bc,	// (0x000315e8) list_double2_graphic_pane_t1

0x50d2,	// (0x000315fe) list_double2_graphic_pane_t2_ParamLimits

0x50d2,	// (0x000315fe) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0003bb64) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0003bb64) list_double2_graphic_pane_t

0x50e4,	// (0x00031610) list_double_large_graphic_pane_g1_ParamLimits

0x50e4,	// (0x00031610) list_double_large_graphic_pane_g1

0x510f,	// (0x0003163b) list_double_large_graphic_pane_g2_ParamLimits

0x510f,	// (0x0003163b) list_double_large_graphic_pane_g2

0x4f8a,	// (0x000314b6) list_double_large_graphic_pane_g3_ParamLimits

0x4f8a,	// (0x000314b6) list_double_large_graphic_pane_g3

0x5120,	// (0x0003164c) list_double_large_graphic_pane_g4_ParamLimits

0x5120,	// (0x0003164c) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0003bb69) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0003bb69) list_double_large_graphic_pane_g

0x5133,	// (0x0003165f) list_double_large_graphic_pane_t1_ParamLimits

0x5133,	// (0x0003165f) list_double_large_graphic_pane_t1

0x514c,	// (0x00031678) list_double_large_graphic_pane_t2_ParamLimits

0x514c,	// (0x00031678) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0003bb74) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0003bb74) list_double_large_graphic_pane_t

0x515e,	// (0x0003168a) list_double2_large_graphic_pane_g1_ParamLimits

0x515e,	// (0x0003168a) list_double2_large_graphic_pane_g1

0x516a,	// (0x00031696) list_double2_large_graphic_pane_g2_ParamLimits

0x516a,	// (0x00031696) list_double2_large_graphic_pane_g2

0x517b,	// (0x000316a7) list_double2_large_graphic_pane_g3_ParamLimits

0x517b,	// (0x000316a7) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0003bb79) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0003bb79) list_double2_large_graphic_pane_g

0x5187,	// (0x000316b3) list_double2_large_graphic_pane_t1_ParamLimits

0x5187,	// (0x000316b3) list_double2_large_graphic_pane_t1

0x519d,	// (0x000316c9) list_double2_large_graphic_pane_t2_ParamLimits

0x519d,	// (0x000316c9) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0003bb80) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0003bb80) list_double2_large_graphic_pane_t

0x51af,	// (0x000316db) list_double_heading_pane_g1_ParamLimits

0x51af,	// (0x000316db) list_double_heading_pane_g1

0x51c0,	// (0x000316ec) list_double_heading_pane_g2_ParamLimits

0x51c0,	// (0x000316ec) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0003bb85) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0003bb85) list_double_heading_pane_g

0x51cc,	// (0x000316f8) list_double_heading_pane_t1_ParamLimits

0x51cc,	// (0x000316f8) list_double_heading_pane_t1

0x51e2,	// (0x0003170e) list_double_heading_pane_t2_ParamLimits

0x51e2,	// (0x0003170e) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0003bb8a) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0003bb8a) list_double_heading_pane_t

0x51f4,	// (0x00031720) list_double_graphic_heading_pane_g1_ParamLimits

0x51f4,	// (0x00031720) list_double_graphic_heading_pane_g1

0x51af,	// (0x000316db) list_double_graphic_heading_pane_g2_ParamLimits

0x51af,	// (0x000316db) list_double_graphic_heading_pane_g2

0x51c0,	// (0x000316ec) list_double_graphic_heading_pane_g3_ParamLimits

0x51c0,	// (0x000316ec) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0003bb8f) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0003bb8f) list_double_graphic_heading_pane_g

0x5200,	// (0x0003172c) list_double_graphic_heading_pane_t1_ParamLimits

0x5200,	// (0x0003172c) list_double_graphic_heading_pane_t1

0x50d2,	// (0x000315fe) list_double_graphic_heading_pane_t2_ParamLimits

0x50d2,	// (0x000315fe) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0003bb96) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0003bb96) list_double_graphic_heading_pane_t

0x510f,	// (0x0003163b) list_double_time_pane_g1_ParamLimits

0x510f,	// (0x0003163b) list_double_time_pane_g1

0x4f8a,	// (0x000314b6) list_double_time_pane_g2_ParamLimits

0x4f8a,	// (0x000314b6) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0003bb9b) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0003bb9b) list_double_time_pane_g

0x5216,	// (0x00031742) list_double_time_pane_t1_ParamLimits

0x5216,	// (0x00031742) list_double_time_pane_t1

0x522c,	// (0x00031758) list_double_time_pane_t2_ParamLimits

0x522c,	// (0x00031758) list_double_time_pane_t2

0x523e,	// (0x0003176a) list_double_time_pane_t3_ParamLimits

0x523e,	// (0x0003176a) list_double_time_pane_t3

0x5250,	// (0x0003177c) list_double_time_pane_t4_ParamLimits

0x5250,	// (0x0003177c) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0003bba0) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0003bba0) list_double_time_pane_t

0x5262,	// (0x0003178e) list_setting_pane_g1_ParamLimits

0x5262,	// (0x0003178e) list_setting_pane_g1

0x526e,	// (0x0003179a) list_setting_pane_g2_ParamLimits

0x526e,	// (0x0003179a) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0003bba9) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0003bba9) list_setting_pane_g

0x527a,	// (0x000317a6) list_setting_pane_t1_ParamLimits

0x527a,	// (0x000317a6) list_setting_pane_t1

0x5294,	// (0x000317c0) list_setting_pane_t2_ParamLimits

0x5294,	// (0x000317c0) list_setting_pane_t2

0x0002,

0xf682,	// (0x0003bbae) list_setting_pane_t_ParamLimits

0xf682,	// (0x0003bbae) list_setting_pane_t

0x52d3,	// (0x000317ff) set_value_pane_cp_ParamLimits

0x52d3,	// (0x000317ff) set_value_pane_cp

0x52e1,	// (0x0003180d) list_setting_number_pane_g1_ParamLimits

0x52e1,	// (0x0003180d) list_setting_number_pane_g1

0x52ed,	// (0x00031819) list_setting_number_pane_g2_ParamLimits

0x52ed,	// (0x00031819) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0003bbb5) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0003bbb5) list_setting_number_pane_g

0x52f9,	// (0x00031825) list_setting_number_pane_t1_ParamLimits

0x52f9,	// (0x00031825) list_setting_number_pane_t1

0x5312,	// (0x0003183e) list_setting_number_pane_t2_ParamLimits

0x5312,	// (0x0003183e) list_setting_number_pane_t2

0x532c,	// (0x00031858) list_setting_number_pane_t3_ParamLimits

0x532c,	// (0x00031858) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0003bbba) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0003bbba) list_setting_number_pane_t

0x52d3,	// (0x000317ff) set_value_pane_ParamLimits

0x52d3,	// (0x000317ff) set_value_pane

0x7b8f,	// (0x000340bb) bg_set_opt_pane_ParamLimits

0x7b8f,	// (0x000340bb) bg_set_opt_pane

0x536f,	// (0x0003189b) set_value_pane_t1

0x7bb0,	// (0x000340dc) slider_set_pane_cp3

0x7bb9,	// (0x000340e5) volume_small_pane_cp

0x7bc2,	// (0x000340ee) list_form_gen_pane

0x7bcb,	// (0x000340f7) scroll_pane_cp8

0x537d,	// (0x000318a9) form_field_data_pane_ParamLimits

0x537d,	// (0x000318a9) form_field_data_pane

0x53a3,	// (0x000318cf) form_field_data_wide_pane_ParamLimits

0x53a3,	// (0x000318cf) form_field_data_wide_pane

0x53ca,	// (0x000318f6) form_field_popup_pane_ParamLimits

0x53ca,	// (0x000318f6) form_field_popup_pane

0x53ec,	// (0x00031918) form_field_popup_wide_pane_ParamLimits

0x53ec,	// (0x00031918) form_field_popup_wide_pane

0x540d,	// (0x00031939) form_field_slider_pane_ParamLimits

0x540d,	// (0x00031939) form_field_slider_pane

0x5420,	// (0x0003194c) form_field_slider_wide_pane_ParamLimits

0x5420,	// (0x0003194c) form_field_slider_wide_pane

0x7bdc,	// (0x00034108) data_form_pane

0x543d,	// (0x00031969) form_field_data_pane_t1

0x7be8,	// (0x00034114) input_focus_pane

0x7bf6,	// (0x00034122) data_form_wide_pane

0x5463,	// (0x0003198f) form_field_data_wide_pane_t1

0x7959,	// (0x00033e85) input_focus_pane_cp6

0x5485,	// (0x000319b1) form_field_popup_pane_t1

0x7be8,	// (0x00034114) input_focus_pane_cp7

0x7c22,	// (0x0003414e) list_form_pane

0x54a7,	// (0x000319d3) form_field_popup_wide_pane_t1

0x7be8,	// (0x00034114) input_focus_pane_cp8

0x7c2e,	// (0x0003415a) list_form_wide_pane

0x54c4,	// (0x000319f0) form_field_slider_pane_t1_ParamLimits

0x54c4,	// (0x000319f0) form_field_slider_pane_t1

0x54dc,	// (0x00031a08) form_field_slider_pane_t2_ParamLimits

0x54dc,	// (0x00031a08) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0003bbca) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0003bbca) form_field_slider_pane_t

0x75dd,	// (0x00033b09) input_focus_pane_cp9_ParamLimits

0x75dd,	// (0x00033b09) input_focus_pane_cp9

0x54f1,	// (0x00031a1d) slider_cont_pane_ParamLimits

0x54f1,	// (0x00031a1d) slider_cont_pane

0x7c3d,	// (0x00034169) form_field_slider_wide_pane_t1_ParamLimits

0x7c3d,	// (0x00034169) form_field_slider_wide_pane_t1

0x5505,	// (0x00031a31) form_field_slider_wide_pane_t2_ParamLimits

0x5505,	// (0x00031a31) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0003bbcf) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0003bbcf) form_field_slider_wide_pane_t

0x75dd,	// (0x00033b09) input_focus_pane_cp10_ParamLimits

0x75dd,	// (0x00033b09) input_focus_pane_cp10

0x5517,	// (0x00031a43) slider_cont_pane_cp1_ParamLimits

0x5517,	// (0x00031a43) slider_cont_pane_cp1

0x552b,	// (0x00031a57) slider_form_pane_cp

0x7c4f,	// (0x0003417b) input_focus_pane_g1

0x7c57,	// (0x00034183) input_focus_pane_g2

0x7c5f,	// (0x0003418b) input_focus_pane_g3

0x7c67,	// (0x00034193) input_focus_pane_g4

0x7c6f,	// (0x0003419b) input_focus_pane_g5

0x7c77,	// (0x000341a3) input_focus_pane_g6

0x7c7f,	// (0x000341ab) input_focus_pane_g7

0x7c87,	// (0x000341b3) input_focus_pane_g8

0x7c8f,	// (0x000341bb) input_focus_pane_g9

0x30d3,	// (0x0002f5ff) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0003bbd4) input_focus_pane_g

0xa038,	// (0x00036564) wait_border_pane_g3_copy1

0x5533,	// (0x00031a5f) data_form_pane_t1

0x30d3,	// (0x0002f5ff) wait_anim_pane_g1_copy1

0x60bf,	// (0x000325eb) data_form_wide_pane_t1

0x5550,	// (0x00031a7c) list_form_graphic_pane_cp_ParamLimits

0x5550,	// (0x00031a7c) list_form_graphic_pane_cp

0xafbd,	// (0x000374e9) slider_form_pane_g1

0xafc6,	// (0x000374f2) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0003becc) slider_form_pane_g

0x5565,	// (0x00031a91) list_form_graphic_pane_ParamLimits

0x5565,	// (0x00031a91) list_form_graphic_pane

0x5577,	// (0x00031aa3) list_form_graphic_pane_g1

0x557f,	// (0x00031aab) list_form_graphic_pane_t1_ParamLimits

0x557f,	// (0x00031aab) list_form_graphic_pane_t1

0x7361,	// (0x0003388d) list_highlight_pane_cp5_ParamLimits

0x7361,	// (0x0003388d) list_highlight_pane_cp5

0x5594,	// (0x00031ac0) find_pane_g1

0x7c97,	// (0x000341c3) input_find_pane

0x559d,	// (0x00031ac9) input_find_pane_g1_ParamLimits

0x559d,	// (0x00031ac9) input_find_pane_g1

0x55a9,	// (0x00031ad5) input_find_pane_t1_ParamLimits

0x55a9,	// (0x00031ad5) input_find_pane_t1

0x55be,	// (0x00031aea) input_find_pane_t2_ParamLimits

0x55be,	// (0x00031aea) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0003bbe9) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0003bbe9) input_find_pane_t

0x7ca0,	// (0x000341cc) input_focus_pane_cp5_ParamLimits

0x7ca0,	// (0x000341cc) input_focus_pane_cp5

0x7cba,	// (0x000341e6) bg_popup_window_pane_cp2_ParamLimits

0x7cba,	// (0x000341e6) bg_popup_window_pane_cp2

0x7cc7,	// (0x000341f3) listscroll_menu_pane_ParamLimits

0x7cc7,	// (0x000341f3) listscroll_menu_pane

0x7cd3,	// (0x000341ff) popup_submenu_window_ParamLimits

0x7cd3,	// (0x000341ff) popup_submenu_window

0x7d03,	// (0x0003422f) find_popup_pane_g1

0x7d0b,	// (0x00034237) input_popup_find_pane_cp

0x7ca0,	// (0x000341cc) input_focus_pane_cp4_ParamLimits

0x7ca0,	// (0x000341cc) input_focus_pane_cp4

0x7d23,	// (0x0003424f) input_popup_find_pane_t1_ParamLimits

0x7d23,	// (0x0003424f) input_popup_find_pane_t1

0x30dd,	// (0x0002f609) bg_popup_sub_pane_cp

0x8039,	// (0x00034565) listscroll_popup_sub_pane

0x8041,	// (0x0003456d) list_submenu_pane_ParamLimits

0x8041,	// (0x0003456d) list_submenu_pane

0x8052,	// (0x0003457e) scroll_pane_cp4

0x805a,	// (0x00034586) list_single_popup_submenu_pane_ParamLimits

0x805a,	// (0x00034586) list_single_popup_submenu_pane

0x806f,	// (0x0003459b) list_single_popup_submenu_pane_g1

0x8077,	// (0x000345a3) list_single_popup_submenu_pane_t1_ParamLimits

0x8077,	// (0x000345a3) list_single_popup_submenu_pane_t1

0x7361,	// (0x0003388d) bg_active_tab_pane_cp1_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp1

0x808c,	// (0x000345b8) tabs_2_active_pane_g1

0x8094,	// (0x000345c0) tabs_2_active_pane_t1

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp1_ParamLimits

0x7361,	// (0x0003388d) bg_passive_tab_pane_cp1

0x808c,	// (0x000345b8) tabs_2_passive_pane_g1

0x8094,	// (0x000345c0) tabs_2_passive_pane_t1

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp4

0x80b4,	// (0x000345e0) tabs_2_long_active_pane_t1

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp4

0x5cef,	// (0x0003221b) list_single_midp_graphic_pane_g4_ParamLimits

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp5

0x80d3,	// (0x000345ff) tabs_3_long_active_pane_t1

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp5

0x5cef,	// (0x0003221b) list_single_midp_graphic_pane_g4

0x7361,	// (0x0003388d) bg_popup_window_pane_cp13_ParamLimits

0x7361,	// (0x0003388d) bg_popup_window_pane_cp13

0x80ee,	// (0x0003461a) listscroll_popup_fast_pane_ParamLimits

0x80ee,	// (0x0003461a) listscroll_popup_fast_pane

0x80fd,	// (0x00034629) grid_popup_fast_pane_ParamLimits

0x80fd,	// (0x00034629) grid_popup_fast_pane

0x810f,	// (0x0003463b) scroll_pane_cp9_ParamLimits

0x810f,	// (0x0003463b) scroll_pane_cp9

0xc913,	// (0x00038e3f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc913,	// (0x00038e3f) list_single_graphic_hl_pane_t1_cp2

0x8133,	// (0x0003465f) input_focus_pane_cp20_ParamLimits

0x8133,	// (0x0003465f) input_focus_pane_cp20

0x8141,	// (0x0003466d) query_popup_data_pane_t1_ParamLimits

0x8141,	// (0x0003466d) query_popup_data_pane_t1

0x8154,	// (0x00034680) query_popup_data_pane_t2_ParamLimits

0x8154,	// (0x00034680) query_popup_data_pane_t2

0x819a,	// (0x000346c6) query_popup_data_pane_t3_ParamLimits

0x819a,	// (0x000346c6) query_popup_data_pane_t3

0x81db,	// (0x00034707) query_popup_data_pane_t4_ParamLimits

0x81db,	// (0x00034707) query_popup_data_pane_t4

0x8217,	// (0x00034743) query_popup_data_pane_t5_ParamLimits

0x8217,	// (0x00034743) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0003bbee) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0003bbee) query_popup_data_pane_t

0x7c4f,	// (0x0003417b) bg_set_opt_pane_g1

0x7c57,	// (0x00034183) bg_set_opt_pane_g2

0x7c5f,	// (0x0003418b) bg_set_opt_pane_g3

0x7c67,	// (0x00034193) bg_set_opt_pane_g4

0x7c6f,	// (0x0003419b) bg_set_opt_pane_g5

0x7c77,	// (0x000341a3) bg_set_opt_pane_g6

0x7c7f,	// (0x000341ab) bg_set_opt_pane_g7

0x7c87,	// (0x000341b3) bg_set_opt_pane_g8

0x7c8f,	// (0x000341bb) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0003bbf9) bg_set_opt_pane_g

0x5902,	// (0x00031e2e) control_top_pane_stacon_ParamLimits

0x5902,	// (0x00031e2e) control_top_pane_stacon

0x5955,	// (0x00031e81) signal_pane_stacon_ParamLimits

0x5955,	// (0x00031e81) signal_pane_stacon

0x87c3,	// (0x00034cef) stacon_top_pane_g1_ParamLimits

0x87c3,	// (0x00034cef) stacon_top_pane_g1

0x597a,	// (0x00031ea6) title_pane_stacon_ParamLimits

0x597a,	// (0x00031ea6) title_pane_stacon

0x59a4,	// (0x00031ed0) uni_indicator_pane_stacon_ParamLimits

0x59a4,	// (0x00031ed0) uni_indicator_pane_stacon

0x59bc,	// (0x00031ee8) battery_pane_stacon_ParamLimits

0x59bc,	// (0x00031ee8) battery_pane_stacon

0x5a00,	// (0x00031f2c) control_bottom_pane_stacon_ParamLimits

0x5a00,	// (0x00031f2c) control_bottom_pane_stacon

0x5a23,	// (0x00031f4f) navi_pane_stacon_ParamLimits

0x5a23,	// (0x00031f4f) navi_pane_stacon

0x87e5,	// (0x00034d11) stacon_bottom_pane_g1_ParamLimits

0x87e5,	// (0x00034d11) stacon_bottom_pane_g1

0x55d3,	// (0x00031aff) aid_levels_signal_lsc_ParamLimits

0x55d3,	// (0x00031aff) aid_levels_signal_lsc

0x55ea,	// (0x00031b16) signal_pane_stacon_g1_ParamLimits

0x55ea,	// (0x00031b16) signal_pane_stacon_g1

0x55fe,	// (0x00031b2a) signal_pane_stacon_g2_ParamLimits

0x55fe,	// (0x00031b2a) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0003bc0c) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0003bc0c) signal_pane_stacon_g

0x5633,	// (0x00031b5f) title_pane_stacon_t1_ParamLimits

0x5633,	// (0x00031b5f) title_pane_stacon_t1

0x825b,	// (0x00034787) uni_indicator_pane_stacon_g1

0x8265,	// (0x00034791) uni_indicator_pane_stacon_g2

0x826f,	// (0x0003479b) uni_indicator_pane_stacon_g3

0x8279,	// (0x000347a5) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0003bc18) uni_indicator_pane_stacon_g

0x5658,	// (0x00031b84) control_top_pane_stacon_g1

0x5660,	// (0x00031b8c) control_top_pane_stacon_t1_ParamLimits

0x5660,	// (0x00031b8c) control_top_pane_stacon_t1

0x5697,	// (0x00031bc3) aid_levels_battery_lsc_ParamLimits

0x5697,	// (0x00031bc3) aid_levels_battery_lsc

0x56af,	// (0x00031bdb) battery_pane_stacon_g1_ParamLimits

0x56af,	// (0x00031bdb) battery_pane_stacon_g1

0x56c2,	// (0x00031bee) battery_pane_stacon_g2_ParamLimits

0x56c2,	// (0x00031bee) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0003bc21) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0003bc21) battery_pane_stacon_g

0x5700,	// (0x00031c2c) navi_icon_pane_stacon

0x5714,	// (0x00031c40) navi_navi_pane_stacon

0x5700,	// (0x00031c2c) navi_text_pane_stacon

0x5658,	// (0x00031b84) control_bottom_pane_stacon_g1

0x572a,	// (0x00031c56) control_bottom_pane_stacon_t1_ParamLimits

0x572a,	// (0x00031c56) control_bottom_pane_stacon_t1

0x829d,	// (0x000347c9) grid_app_pane_ParamLimits

0x829d,	// (0x000347c9) grid_app_pane

0x82c1,	// (0x000347ed) scroll_pane_cp15_ParamLimits

0x82c1,	// (0x000347ed) scroll_pane_cp15

0x82d6,	// (0x00034802) cell_app_pane_ParamLimits

0x82d6,	// (0x00034802) cell_app_pane

0x8302,	// (0x0003482e) cell_app_pane_g1_ParamLimits

0x8302,	// (0x0003482e) cell_app_pane_g1

0x8326,	// (0x00034852) cell_app_pane_g2_ParamLimits

0x8326,	// (0x00034852) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0003bc26) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0003bc26) cell_app_pane_g

0x8332,	// (0x0003485e) cell_app_pane_t1_ParamLimits

0x8332,	// (0x0003485e) cell_app_pane_t1

0x8344,	// (0x00034870) grid_highlight_pane_ParamLimits

0x8344,	// (0x00034870) grid_highlight_pane

0x7c4f,	// (0x0003417b) cell_highlight_pane_g1

0x7c57,	// (0x00034183) cell_highlight_pane_g2

0x7c5f,	// (0x0003418b) cell_highlight_pane_g3

0x7c67,	// (0x00034193) cell_highlight_pane_g4

0x7c6f,	// (0x0003419b) cell_highlight_pane_g5

0x7c77,	// (0x000341a3) cell_highlight_pane_g6

0x7c7f,	// (0x000341ab) cell_highlight_pane_g7

0x7c87,	// (0x000341b3) cell_highlight_pane_g8

0x7c8f,	// (0x000341bb) cell_highlight_pane_g9

0x30d3,	// (0x0002f5ff) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0003bbd4) cell_highlight_pane_g

0x8355,	// (0x00034881) bg_scroll_pane

0x5774,	// (0x00031ca0) scroll_handle_pane

0x839c,	// (0x000348c8) scroll_bg_pane_g1

0x83b1,	// (0x000348dd) scroll_bg_pane_g2

0x83c9,	// (0x000348f5) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0003bc2b) scroll_bg_pane_g

0x83de,	// (0x0003490a) scroll_handle_focus_pane_ParamLimits

0x83de,	// (0x0003490a) scroll_handle_focus_pane

0x839c,	// (0x000348c8) scroll_handle_pane_g1

0x83eb,	// (0x00034917) scroll_handle_pane_g2

0x83c9,	// (0x000348f5) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0003bc32) scroll_handle_pane_g

0x7ca0,	// (0x000341cc) bg_popup_sub_pane_cp21_ParamLimits

0x7ca0,	// (0x000341cc) bg_popup_sub_pane_cp21

0x83ff,	// (0x0003492b) popup_fep_japan_predictive_window_t1_ParamLimits

0x83ff,	// (0x0003492b) popup_fep_japan_predictive_window_t1

0x8416,	// (0x00034942) popup_fep_japan_predictive_window_t2_ParamLimits

0x8416,	// (0x00034942) popup_fep_japan_predictive_window_t2

0x8449,	// (0x00034975) popup_fep_japan_predictive_window_t3_ParamLimits

0x8449,	// (0x00034975) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0003bc39) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0003bc39) popup_fep_japan_predictive_window_t

0x30dd,	// (0x0002f609) bg_popup_sub_pane_cp23

0x8480,	// (0x000349ac) listscroll_japin_cand_pane

0x8488,	// (0x000349b4) popup_fep_japan_candidate_window_t1

0x8496,	// (0x000349c2) candidate_pane_ParamLimits

0x8496,	// (0x000349c2) candidate_pane

0x84a8,	// (0x000349d4) scroll_pane_cp30

0x84b2,	// (0x000349de) list_single_popup_jap_candidate_pane_ParamLimits

0x84b2,	// (0x000349de) list_single_popup_jap_candidate_pane

0x30dd,	// (0x0002f609) list_highlight_pane_cp30

0x84c6,	// (0x000349f2) list_single_popup_jap_candidate_pane_t1

0x84d5,	// (0x00034a01) level_1_signal

0x84e2,	// (0x00034a0e) level_2_signal

0x84ef,	// (0x00034a1b) level_3_signal

0x84fc,	// (0x00034a28) level_4_signal

0x8509,	// (0x00034a35) level_5_signal

0x8516,	// (0x00034a42) level_6_signal

0x8523,	// (0x00034a4f) level_7_signal

0x84d5,	// (0x00034a01) level_1_battery

0x84e2,	// (0x00034a0e) level_2_battery

0x84ef,	// (0x00034a1b) level_3_battery

0x84fc,	// (0x00034a28) level_4_battery

0x8509,	// (0x00034a35) level_5_battery

0x8516,	// (0x00034a42) level_6_battery

0x8523,	// (0x00034a4f) level_7_battery

0x8548,	// (0x00034a74) list_menu_pane_ParamLimits

0x8548,	// (0x00034a74) list_menu_pane

0x8559,	// (0x00034a85) scroll_pane_cp25_ParamLimits

0x8559,	// (0x00034a85) scroll_pane_cp25

0x8572,	// (0x00034a9e) list_double2_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double2_graphic_pane_cp2

0x8572,	// (0x00034a9e) list_double2_large_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double2_large_graphic_pane_cp2

0x8572,	// (0x00034a9e) list_double2_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double2_pane_cp2

0x8572,	// (0x00034a9e) list_double_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double_graphic_pane_cp2

0x8572,	// (0x00034a9e) list_double_large_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double_large_graphic_pane_cp2

0x8572,	// (0x00034a9e) list_double_number_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double_number_pane_cp2

0x8572,	// (0x00034a9e) list_double_pane_cp2_ParamLimits

0x8572,	// (0x00034a9e) list_double_pane_cp2

0x8598,	// (0x00034ac4) list_single_2graphic_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_2graphic_pane_cp2

0x8598,	// (0x00034ac4) list_single_graphic_heading_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_graphic_heading_pane_cp2

0x8598,	// (0x00034ac4) list_single_graphic_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_graphic_pane_cp2

0x8598,	// (0x00034ac4) list_single_heading_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_heading_pane_cp2

0x85b5,	// (0x00034ae1) list_single_large_graphic_pane_cp2_ParamLimits

0x85b5,	// (0x00034ae1) list_single_large_graphic_pane_cp2

0x8598,	// (0x00034ac4) list_single_number_heading_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_number_heading_pane_cp2

0x8598,	// (0x00034ac4) list_single_number_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_number_pane_cp2

0x8598,	// (0x00034ac4) list_single_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_pane_cp2

0x860a,	// (0x00034b36) bg_popup_sub_pane_cp22

0x5826,	// (0x00031d52) popup_side_volume_key_window_g1

0x5850,	// (0x00031d7c) popup_side_volume_key_window_t1

0x586e,	// (0x00031d9a) volume_small_pane_cp1

0x75dd,	// (0x00033b09) bg_popup_sub_pane_cp24_ParamLimits

0x75dd,	// (0x00033b09) bg_popup_sub_pane_cp24

0x8620,	// (0x00034b4c) fep_china_uni_candidate_pane_ParamLimits

0x8620,	// (0x00034b4c) fep_china_uni_candidate_pane

0x8634,	// (0x00034b60) fep_china_uni_entry_pane

0x8644,	// (0x00034b70) popup_fep_china_uni_window_g1

0x8660,	// (0x00034b8c) fep_china_uni_entry_pane_g1

0x866a,	// (0x00034b96) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003bc66) fep_china_uni_entry_pane_g

0x8674,	// (0x00034ba0) fep_entry_item_pane

0x867e,	// (0x00034baa) fep_candidate_item_pane

0x8686,	// (0x00034bb2) fep_china_uni_candidate_pane_g1

0x8690,	// (0x00034bbc) fep_china_uni_candidate_pane_g2

0x8698,	// (0x00034bc4) fep_china_uni_candidate_pane_g3

0x86a0,	// (0x00034bcc) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0003bc6b) fep_china_uni_candidate_pane_g

0x30d3,	// (0x0002f5ff) fep_entry_item_pane_g1

0x86aa,	// (0x00034bd6) fep_entry_item_pane_t1_ParamLimits

0x86aa,	// (0x00034bd6) fep_entry_item_pane_t1

0x86c0,	// (0x00034bec) fep_candidate_item_pane_t1_ParamLimits

0x86c0,	// (0x00034bec) fep_candidate_item_pane_t1

0x86d5,	// (0x00034c01) fep_candidate_item_pane_t2_ParamLimits

0x86d5,	// (0x00034c01) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003bc74) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003bc74) fep_candidate_item_pane_t

0x7361,	// (0x0003388d) list_highlight_pane_cp31_ParamLimits

0x7361,	// (0x0003388d) list_highlight_pane_cp31

0x86e7,	// (0x00034c13) level_1_signal_lsc

0x86f0,	// (0x00034c1c) level_2_signal_lsc

0x86f9,	// (0x00034c25) level_3_signal_lsc

0x8702,	// (0x00034c2e) level_4_signal_lsc

0x870b,	// (0x00034c37) level_5_signal_lsc

0x8714,	// (0x00034c40) level_6_signal_lsc

0x871d,	// (0x00034c49) level_7_signal_lsc

0x871d,	// (0x00034c49) level_1_battery_lsc

0x8726,	// (0x00034c52) level_2_battery_lsc

0x872f,	// (0x00034c5b) level_3_battery_lsc

0x8738,	// (0x00034c64) level_4_battery_lsc

0x8741,	// (0x00034c6d) level_5_battery_lsc

0x874a,	// (0x00034c76) level_6_battery_lsc

0x86e7,	// (0x00034c13) level_7_battery_lsc

0x8753,	// (0x00034c7f) scroll_handle_focus_pane_g1

0x875c,	// (0x00034c88) scroll_handle_focus_pane_g2

0x8765,	// (0x00034c91) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0003bc79) scroll_handle_focus_pane_g

0x5876,	// (0x00031da2) list_single_2graphic_pane_g1_ParamLimits

0x5876,	// (0x00031da2) list_single_2graphic_pane_g1

0x4f47,	// (0x00031473) list_single_2graphic_pane_g2_ParamLimits

0x4f47,	// (0x00031473) list_single_2graphic_pane_g2

0x4ecd,	// (0x000313f9) list_single_2graphic_pane_g3_ParamLimits

0x4ecd,	// (0x000313f9) list_single_2graphic_pane_g3

0x5882,	// (0x00031dae) list_single_2graphic_pane_g4_ParamLimits

0x5882,	// (0x00031dae) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0003bc80) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0003bc80) list_single_2graphic_pane_g

0x588e,	// (0x00031dba) list_single_2graphic_pane_t1_ParamLimits

0x588e,	// (0x00031dba) list_single_2graphic_pane_t1

0x58bc,	// (0x00031de8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x58bc,	// (0x00031de8) list_double2_graphic_large_graphic_pane_g1

0x516a,	// (0x00031696) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x516a,	// (0x00031696) list_double2_graphic_large_graphic_pane_g2

0x517b,	// (0x000316a7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x517b,	// (0x000316a7) list_double2_graphic_large_graphic_pane_g3

0x58ce,	// (0x00031dfa) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x58ce,	// (0x00031dfa) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0003bc89) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0003bc89) list_double2_graphic_large_graphic_pane_g

0x58da,	// (0x00031e06) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x58da,	// (0x00031e06) list_double2_graphic_large_graphic_pane_t1

0x58f0,	// (0x00031e1c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x58f0,	// (0x00031e1c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003bc92) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003bc92) list_double2_graphic_large_graphic_pane_t

0x88a7,	// (0x00034dd3) popup_fast_swap_window_ParamLimits

0x88a7,	// (0x00034dd3) popup_fast_swap_window

0x88c5,	// (0x00034df1) popup_side_volume_key_window

0x88e3,	// (0x00034e0f) stacon_top_pane

0x88ed,	// (0x00034e19) status_pane_ParamLimits

0x88ed,	// (0x00034e19) status_pane

0x88e3,	// (0x00034e0f) status_small_pane

0x30dd,	// (0x0002f609) control_pane

0x30dd,	// (0x0002f609) stacon_bottom_pane

0x7bcb,	// (0x000340f7) scroll_pane_cp121

0x7bc2,	// (0x000340ee) set_content_pane

0x876e,	// (0x00034c9a) bg_active_tab_pane_g1_cp1

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp1

0x8780,	// (0x00034cac) bg_active_tab_pane_g3_cp1

0x876e,	// (0x00034c9a) bg_passive_tab_pane_g1_cp1

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp1

0x8780,	// (0x00034cac) bg_passive_tab_pane_g3_cp1

0x8789,	// (0x00034cb5) bg_active_tab_pane_g1_cp2

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp2

0x8792,	// (0x00034cbe) bg_active_tab_pane_g3_cp2

0x8789,	// (0x00034cb5) bg_passive_tab_pane_g1_cp2

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp2

0x8792,	// (0x00034cbe) bg_passive_tab_pane_g3_cp2

0x879b,	// (0x00034cc7) bg_active_tab_pane_g1_cp3

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp3

0x87a4,	// (0x00034cd0) bg_active_tab_pane_g3_cp3

0x879b,	// (0x00034cc7) bg_passive_tab_pane_g1_cp3

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp3

0x87a4,	// (0x00034cd0) bg_passive_tab_pane_g3_cp3

0x87ad,	// (0x00034cd9) bg_active_tab_pane_g1_cp4

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp4

0x87b8,	// (0x00034ce4) bg_active_tab_pane_g3_cp4

0x87ad,	// (0x00034cd9) bg_passive_tab_pane_g1_cp4

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp4

0x87b8,	// (0x00034ce4) bg_passive_tab_pane_g3_cp4

0x8801,	// (0x00034d2d) bg_active_tab_pane_g1_cp5

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp5

0x880a,	// (0x00034d36) bg_active_tab_pane_g3_cp5

0x8801,	// (0x00034d2d) bg_passive_tab_pane_g1_cp5

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp5

0x880a,	// (0x00034d36) bg_passive_tab_pane_g3_cp5

0x8813,	// (0x00034d3f) list_set_graphic_pane_ParamLimits

0x8813,	// (0x00034d3f) list_set_graphic_pane

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp4

0x8828,	// (0x00034d54) list_set_graphic_pane_g1_ParamLimits

0x8828,	// (0x00034d54) list_set_graphic_pane_g1

0x8834,	// (0x00034d60) list_set_graphic_pane_g2_ParamLimits

0x8834,	// (0x00034d60) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003bc97) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003bc97) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003c001) volume_small_pane_cp_g

0x8858,	// (0x00034d84) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8858,	// (0x00034d84) list_double2_large_graphic_pane_g1_cp2

0x8866,	// (0x00034d92) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8866,	// (0x00034d92) list_double2_large_graphic_pane_g2_cp2

0x8877,	// (0x00034da3) list_double2_large_graphic_pane_g3_cp2

0x887f,	// (0x00034dab) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x887f,	// (0x00034dab) list_double2_large_graphic_pane_t1_cp2

0x8895,	// (0x00034dc1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8895,	// (0x00034dc1) list_double2_large_graphic_pane_t2_cp2

0xab22,	// (0x0003704e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab22,	// (0x0003704e) list_double_large_graphic_pane_g1_cp2

0xab35,	// (0x00037061) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00037061) list_double_large_graphic_pane_g2_cp2

0x8a0b,	// (0x00034f37) list_double_large_graphic_pane_g3_cp2

0xab46,	// (0x00037072) list_double_large_graphic_pane_g4_cp

0xab4e,	// (0x0003707a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab4e,	// (0x0003707a) list_double_large_graphic_pane_t1_cp2

0xab65,	// (0x00037091) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab65,	// (0x00037091) list_double_large_graphic_pane_t2_cp2

0x88fb,	// (0x00034e27) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88fb,	// (0x00034e27) list_double2_graphic_pane_g1_cp2

0x8909,	// (0x00034e35) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8909,	// (0x00034e35) list_double2_graphic_pane_g2_cp2

0x891a,	// (0x00034e46) list_double2_graphic_pane_g3_cp2

0x8924,	// (0x00034e50) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8924,	// (0x00034e50) list_double2_graphic_pane_t1_cp2

0x893a,	// (0x00034e66) list_double2_graphic_pane_t2_cp2_ParamLimits

0x893a,	// (0x00034e66) list_double2_graphic_pane_t2_cp2

0x894c,	// (0x00034e78) list_single_number_heading_pane_g1_cp2_ParamLimits

0x894c,	// (0x00034e78) list_single_number_heading_pane_g1_cp2

0x8958,	// (0x00034e84) list_single_number_heading_pane_g2_cp2

0x8960,	// (0x00034e8c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8960,	// (0x00034e8c) list_single_number_heading_pane_t1_cp2

0x8976,	// (0x00034ea2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8976,	// (0x00034ea2) list_single_number_heading_pane_t2_cp2

0x898a,	// (0x00034eb6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x898a,	// (0x00034eb6) list_single_number_heading_pane_t3_cp2

0x894c,	// (0x00034e78) list_single_heading_pane_g1_cp2_ParamLimits

0x894c,	// (0x00034e78) list_single_heading_pane_g1_cp2

0x8958,	// (0x00034e84) list_single_heading_pane_g2_cp2

0x8960,	// (0x00034e8c) list_single_heading_pane_t1_cp2_ParamLimits

0x8960,	// (0x00034e8c) list_single_heading_pane_t1_cp2

0xa91c,	// (0x00036e48) list_single_heading_pane_t2_cp2_ParamLimits

0xa91c,	// (0x00036e48) list_single_heading_pane_t2_cp2

0xa85e,	// (0x00036d8a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa85e,	// (0x00036d8a) list_double_graphic_pane_g1_cp2

0xa86a,	// (0x00036d96) list_double_graphic_pane_g2_cp2_ParamLimits

0xa86a,	// (0x00036d96) list_double_graphic_pane_g2_cp2

0xa879,	// (0x00036da5) list_double_graphic_pane_g3_cp2

0xa881,	// (0x00036dad) list_double_graphic_pane_t1_cp2_ParamLimits

0xa881,	// (0x00036dad) list_double_graphic_pane_t1_cp2

0xa897,	// (0x00036dc3) list_double_graphic_pane_t2_cp2_ParamLimits

0xa897,	// (0x00036dc3) list_double_graphic_pane_t2_cp2

0x89ff,	// (0x00034f2b) list_double_number_pane_g1_cp2_ParamLimits

0x89ff,	// (0x00034f2b) list_double_number_pane_g1_cp2

0x8a0b,	// (0x00034f37) list_double_number_pane_g2_cp2

0xa822,	// (0x00036d4e) list_double_number_pane_t1_cp2_ParamLimits

0xa822,	// (0x00036d4e) list_double_number_pane_t1_cp2

0xa836,	// (0x00036d62) list_double_number_pane_t2_cp2_ParamLimits

0xa836,	// (0x00036d62) list_double_number_pane_t2_cp2

0xa84c,	// (0x00036d78) list_double_number_pane_t3_cp2_ParamLimits

0xa84c,	// (0x00036d78) list_double_number_pane_t3_cp2

0xa70b,	// (0x00036c37) list_single_graphic_pane_g1_cp2_ParamLimits

0xa70b,	// (0x00036c37) list_single_graphic_pane_g1_cp2

0x8a65,	// (0x00034f91) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a65,	// (0x00034f91) list_single_graphic_pane_g2_cp2

0x8a71,	// (0x00034f9d) list_single_graphic_pane_g3_cp2

0xa6e1,	// (0x00036c0d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00036c0d) list_single_graphic_pane_t1_cp2

0x8a65,	// (0x00034f91) list_single_number_pane_g1_cp2_ParamLimits

0x8a65,	// (0x00034f91) list_single_number_pane_g1_cp2

0x8a71,	// (0x00034f9d) list_single_number_pane_g2_cp2

0xa6e1,	// (0x00036c0d) list_single_number_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00036c0d) list_single_number_pane_t1_cp2

0xa6f7,	// (0x00036c23) list_single_number_pane_t2_cp2_ParamLimits

0xa6f7,	// (0x00036c23) list_single_number_pane_t2_cp2

0x8866,	// (0x00034d92) list_double2_pane_g1_cp2_ParamLimits

0x8866,	// (0x00034d92) list_double2_pane_g1_cp2

0x8877,	// (0x00034da3) list_double2_pane_g2_cp2

0x89d7,	// (0x00034f03) list_double2_pane_t1_cp2_ParamLimits

0x89d7,	// (0x00034f03) list_double2_pane_t1_cp2

0x89ed,	// (0x00034f19) list_double2_pane_t2_cp2_ParamLimits

0x89ed,	// (0x00034f19) list_double2_pane_t2_cp2

0x89ff,	// (0x00034f2b) list_double_pane_g1_cp2_ParamLimits

0x89ff,	// (0x00034f2b) list_double_pane_g1_cp2

0x8a0b,	// (0x00034f37) list_double_pane_g2_cp2

0x8a13,	// (0x00034f3f) list_double_pane_t1_cp2_ParamLimits

0x8a13,	// (0x00034f3f) list_double_pane_t1_cp2

0x8a29,	// (0x00034f55) list_double_pane_t2_cp2_ParamLimits

0x8a29,	// (0x00034f55) list_double_pane_t2_cp2

0x8a55,	// (0x00034f81) list_single_pane_cp2_g3

0x8a65,	// (0x00034f91) list_single_pane_g1_cp2_ParamLimits

0x8a65,	// (0x00034f91) list_single_pane_g1_cp2

0x8a71,	// (0x00034f9d) list_single_pane_g2_cp2

0x8a79,	// (0x00034fa5) list_single_pane_t1_cp2_ParamLimits

0x8a79,	// (0x00034fa5) list_single_pane_t1_cp2

0x8a91,	// (0x00034fbd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a91,	// (0x00034fbd) list_single_large_graphic_pane_g1_cp2

0x8a9f,	// (0x00034fcb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a9f,	// (0x00034fcb) list_single_large_graphic_pane_g2_cp2

0x8aab,	// (0x00034fd7) list_single_large_graphic_pane_g3_cp2

0x8ab3,	// (0x00034fdf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ab3,	// (0x00034fdf) list_single_large_graphic_pane_g4_cp1

0x8acd,	// (0x00034ff9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8acd,	// (0x00034ff9) list_single_large_graphic_pane_t1_cp2

0xa6ab,	// (0x00036bd7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6ab,	// (0x00036bd7) list_single_graphic_heading_pane_g1_cp2

0xa678,	// (0x00036ba4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa678,	// (0x00036ba4) list_single_graphic_heading_pane_g4_cp2

0x8a71,	// (0x00034f9d) list_single_graphic_heading_pane_g5_cp2

0xa6b7,	// (0x00036be3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b7,	// (0x00036be3) list_single_graphic_heading_pane_t1_cp2

0xa6cd,	// (0x00036bf9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6cd,	// (0x00036bf9) list_single_graphic_heading_pane_t2_cp2

0xa66c,	// (0x00036b98) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa66c,	// (0x00036b98) list_single_2graphic_pane_g1_cp2

0xa678,	// (0x00036ba4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa678,	// (0x00036ba4) list_single_2graphic_pane_g2_cp2

0x8a71,	// (0x00034f9d) list_single_2graphic_pane_g3_cp2

0xa689,	// (0x00036bb5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa689,	// (0x00036bb5) list_single_2graphic_pane_g4_cp2

0xa695,	// (0x00036bc1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x00036bc1) list_single_2graphic_pane_t1_cp2

0x30d3,	// (0x0002f5ff) list_highlight_pane_g10_cp1

0xa244,	// (0x00036770) list_highlight_pane_g1_cp1

0xa24c,	// (0x00036778) list_highlight_pane_g2_cp1

0xa254,	// (0x00036780) list_highlight_pane_g3_cp1

0xa25c,	// (0x00036788) list_highlight_pane_g4_cp1

0xa264,	// (0x00036790) list_highlight_pane_g5_cp1

0xa26c,	// (0x00036798) list_highlight_pane_g6_cp1

0xa274,	// (0x000367a0) list_highlight_pane_g7_cp1

0xa27c,	// (0x000367a8) list_highlight_pane_g8_cp1

0xa284,	// (0x000367b0) list_highlight_pane_g9_cp1

0xa164,	// (0x00036690) form_field_slider_pane_t3

0xa172,	// (0x0003669e) form_field_slider_pane_t4

0xa180,	// (0x000366ac) slider_form_pane_ParamLimits

0xa180,	// (0x000366ac) slider_form_pane

0x30dd,	// (0x0002f609) control_abbreviations

0x30dd,	// (0x0002f609) control_conventions

0x30dd,	// (0x0002f609) control_definitions

0x30dd,	// (0x0002f609) format_table_attribute

0xa972,	// (0x00036e9e) bg_popup_preview_window_pane_g9

0x30dd,	// (0x0002f609) format_table_data2

0x30dd,	// (0x0002f609) format_table_data3

0x30dd,	// (0x0002f609) format_table_data_example

0x0008,

0x30dd,	// (0x0002f609) intro_purpose

0xf900,	// (0x0003be2c) bg_popup_preview_window_pane_g

0x30dd,	// (0x0002f609) texts_category

0x30dd,	// (0x0002f609) texts_graphics

0x8ae3,	// (0x0003500f) text_digital

0x8af2,	// (0x0003501e) text_primary

0x8b01,	// (0x0003502d) text_primary_small

0x8b10,	// (0x0003503c) text_secondary

0x8b1f,	// (0x0003504b) text_title

0xb10e,	// (0x0003763a) bg_passive_tab_pane_g1_cp3_srt

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp3_srt

0xb117,	// (0x00037643) bg_passive_tab_pane_g3_cp3_srt

0x7361,	// (0x0003388d) bg_active_tab_pane_cp3_srt_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp3_srt

0xb120,	// (0x0003764c) tabs_4_active_pane_srt_g1

0xb128,	// (0x00037654) tabs_4_active_pane_srt_t1_ParamLimits

0xb128,	// (0x00037654) tabs_4_active_pane_srt_t1

0xb10e,	// (0x0003763a) bg_active_tab_pane_g1_cp3_copy1

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp3_copy1

0xb117,	// (0x00037643) bg_active_tab_pane_g3_cp3_copy1

0x7361,	// (0x0003388d) tabs_2_long_active_pane_srt_ParamLimits

0x7361,	// (0x0003388d) tabs_2_long_active_pane_srt

0x7361,	// (0x0003388d) tabs_2_long_passive_pane_srt_ParamLimits

0x7361,	// (0x0003388d) tabs_2_long_passive_pane_srt

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp4_srt

0xadc2,	// (0x000372ee) bg_passive_tab_pane_g1_cp4_srt

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp4_srt

0xadcb,	// (0x000372f7) bg_passive_tab_pane_g3_cp4_srt

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp4_srt_ParamLimits

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp4_srt

0xadd4,	// (0x00037300) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadd4,	// (0x00037300) tabs_2_long_active_pane_srt_t1

0xadc2,	// (0x000372ee) bg_active_tab_pane_g1_cp4_srt

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp4_srt

0xadcb,	// (0x000372f7) bg_active_tab_pane_g3_cp4_srt

0x75dd,	// (0x00033b09) tabs_3_long_active_pane_srt_ParamLimits

0x75dd,	// (0x00033b09) tabs_3_long_active_pane_srt

0x75dd,	// (0x00033b09) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x75dd,	// (0x00033b09) tabs_3_long_passive_pane_cp_srt

0x75dd,	// (0x00033b09) tabs_3_long_passive_pane_srt_ParamLimits

0x75dd,	// (0x00033b09) tabs_3_long_passive_pane_srt

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp5_srt

0x8801,	// (0x00034d2d) bg_passive_tab_pane_g1_cp5_srt

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp5_srt

0x880a,	// (0x00034d36) bg_passive_tab_pane_g3_cp5_srt

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp5_srt_ParamLimits

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp5_srt

0xadb0,	// (0x000372dc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadb0,	// (0x000372dc) tabs_3_long_active_pane_srt_t1

0x8801,	// (0x00034d2d) bg_active_tab_pane_g1_cp5_srt

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp5_srt

0x880a,	// (0x00034d36) bg_active_tab_pane_g3_cp5_srt

0xada2,	// (0x000372ce) navi_text_pane_srt_t1

0xad9a,	// (0x000372c6) navi_icon_pane_srt_g1

0x8cf6,	// (0x00035222) midp_editing_number_pane_srt

0x8b2e,	// (0x0003505a) midp_ticker_pane_srt

0x8cfe,	// (0x0003522a) midp_ticker_pane_srt_g1

0x8d06,	// (0x00035232) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003bcb6) midp_ticker_pane_srt_g

0x8d0e,	// (0x0003523a) midp_ticker_pane_srt_t1

0xad8b,	// (0x000372b7) midp_editing_number_pane_t1_copy1

0x8b36,	// (0x00035062) listscroll_midp_pane

0x8b36,	// (0x00035062) midp_form_pane

0x8ba4,	// (0x000350d0) midp_info_popup_window_ParamLimits

0x8ba4,	// (0x000350d0) midp_info_popup_window

0x7ca0,	// (0x000341cc) bg_popup_sub_pane_cp50_ParamLimits

0x7ca0,	// (0x000341cc) bg_popup_sub_pane_cp50

0x9e7a,	// (0x000363a6) listscroll_midp_info_pane_ParamLimits

0x9e7a,	// (0x000363a6) listscroll_midp_info_pane

0x9e62,	// (0x0003638e) listscroll_form_midp_pane_ParamLimits

0x9e62,	// (0x0003638e) listscroll_form_midp_pane

0x9e6e,	// (0x0003639a) scroll_bar_cp050

0x9e42,	// (0x0003636e) list_midp_pane

0xbb98,	// (0x000380c4) signal_pane_g2_cp

0x9d7c,	// (0x000362a8) listscroll_midp_info_pane_t1_ParamLimits

0x9d7c,	// (0x000362a8) listscroll_midp_info_pane_t1

0x9d94,	// (0x000362c0) listscroll_midp_info_pane_t2_ParamLimits

0x9d94,	// (0x000362c0) listscroll_midp_info_pane_t2

0x9dd2,	// (0x000362fe) listscroll_midp_info_pane_t3_ParamLimits

0x9dd2,	// (0x000362fe) listscroll_midp_info_pane_t3

0x9e0c,	// (0x00036338) listscroll_midp_info_pane_t4_ParamLimits

0x9e0c,	// (0x00036338) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0003bd67) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0003bd67) listscroll_midp_info_pane_t

0x8052,	// (0x0003457e) scroll_pane_cp21

0x9d16,	// (0x00036242) form_midp_field_choice_group_pane

0x9d1f,	// (0x0003624b) form_midp_field_text_pane

0x9d62,	// (0x0003628e) form_midp_field_time_pane

0x9d6a,	// (0x00036296) form_midp_gauge_slider_pane

0x9d73,	// (0x0003629f) form_midp_gauge_wait_pane

0x30dd,	// (0x0002f609) form_midp_image_pane

0x5e2c,	// (0x00032358) list_single_midp_pane_ParamLimits

0x5e2c,	// (0x00032358) list_single_midp_pane

0x9cda,	// (0x00036206) form_midp_field_text_pane_t1

0x9ae2,	// (0x0003600e) input_focus_pane_cp050

0x9d05,	// (0x00036231) list_midp_form_text_pane

0x9ca9,	// (0x000361d5) form_midp_field_choice_group_pane_t1

0x9cb7,	// (0x000361e3) input_focus_pane_cp051

0x9ccb,	// (0x000361f7) list_midp_choice_pane

0x30dd,	// (0x0002f609) status_idle_pane

0x9c8d,	// (0x000361b9) form_midp_field_time_pane_t1

0x30d3,	// (0x0002f5ff) wait_anim_pane_g2_copy1

0x9c9b,	// (0x000361c7) form_midp_field_time_pane_t2

0x0001,

0x8c54,	// (0x00035180) aid_navinavi_width_2_pane

0xf836,	// (0x0003bd62) form_midp_field_time_pane_t

0x30dd,	// (0x0002f609) input_focus_pane_cp052

0x30dd,	// (0x0002f609) bg_input_focus_pane_cp040

0x9c4d,	// (0x00036179) form_midp_gauge_slider_pane_t1

0x9c5b,	// (0x00036187) form_midp_gauge_slider_pane_t2

0x9c69,	// (0x00036195) form_midp_gauge_slider_pane_t3

0x9c77,	// (0x000361a3) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0003bd59) form_midp_gauge_slider_pane_t

0x9c85,	// (0x000361b1) form_midp_slider_pane

0x7361,	// (0x0003388d) bg_input_focus_pane_cp041_ParamLimits

0x7361,	// (0x0003388d) bg_input_focus_pane_cp041

0x9c1a,	// (0x00036146) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c1a,	// (0x00036146) form_midp_gauge_wait_pane_t1

0x9c2c,	// (0x00036158) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c2c,	// (0x00036158) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0003bd54) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0003bd54) form_midp_gauge_wait_pane_t

0x9c3e,	// (0x0003616a) form_midp_wait_pane_ParamLimits

0x9c3e,	// (0x0003616a) form_midp_wait_pane

0x9be2,	// (0x0003610e) form_midp_image_pane_g1

0x9beb,	// (0x00036117) form_midp_image_pane_t1

0x9bfa,	// (0x00036126) form_midp_image_pane_t2

0x9c09,	// (0x00036135) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0003bd4d) form_midp_image_pane_t

0x9bd9,	// (0x00036105) list_single_midp_pane_g1

0x5e1d,	// (0x00032349) list_single_midp_pane_t1

0x9bbf,	// (0x000360eb) list_midp_form_item_pane_ParamLimits

0x9bbf,	// (0x000360eb) list_midp_form_item_pane

0x8bfc,	// (0x00035128) list_midp_form_item_pane_t1

0x8c0b,	// (0x00035137) midp_ticker_pane_g1

0x8c17,	// (0x00035143) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0003bc9c) midp_ticker_pane_g

0x8c23,	// (0x0003514f) midp_ticker_pane_t1

0xb00a,	// (0x00037536) midp_editing_number_pane_t1

0xafe8,	// (0x00037514) midp_editing_number_pane

0xaff7,	// (0x00037523) midp_ticker_pane

0xad7b,	// (0x000372a7) ai_message_heading_pane

0x30dd,	// (0x0002f609) bg_popup_window_pane_cp14

0xad83,	// (0x000372af) listscroll_ai_message_pane

0xad01,	// (0x0003722d) ai_message_heading_pane_g1_ParamLimits

0xad01,	// (0x0003722d) ai_message_heading_pane_g1

0xad0d,	// (0x00037239) ai_message_heading_pane_g2_ParamLimits

0xad0d,	// (0x00037239) ai_message_heading_pane_g2

0xad1b,	// (0x00037247) ai_message_heading_pane_g3_ParamLimits

0xad1b,	// (0x00037247) ai_message_heading_pane_g3

0xad27,	// (0x00037253) ai_message_heading_pane_g4_ParamLimits

0xad27,	// (0x00037253) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0003be8e) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0003be8e) ai_message_heading_pane_g

0xad33,	// (0x0003725f) ai_message_heading_pane_t1_ParamLimits

0xad33,	// (0x0003725f) ai_message_heading_pane_t1

0xad4d,	// (0x00037279) ai_message_heading_pane_t2_ParamLimits

0xad4d,	// (0x00037279) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0003be97) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0003be97) ai_message_heading_pane_t

0xad61,	// (0x0003728d) bg_popup_heading_pane_cp1_ParamLimits

0xad61,	// (0x0003728d) bg_popup_heading_pane_cp1

0xacef,	// (0x0003721b) list_ai_message_pane_ParamLimits

0xacef,	// (0x0003721b) list_ai_message_pane

0x8052,	// (0x0003457e) scroll_pane_cp10

0xac8b,	// (0x000371b7) list_ai_message_pane_g1

0xac93,	// (0x000371bf) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0003be6b) list_ai_message_pane_g

0xac9b,	// (0x000371c7) list_ai_message_pane_t1_ParamLimits

0xac9b,	// (0x000371c7) list_ai_message_pane_t1

0xacb0,	// (0x000371dc) list_ai_message_pane_t2_ParamLimits

0xacb0,	// (0x000371dc) list_ai_message_pane_t2

0xacc5,	// (0x000371f1) list_ai_message_pane_t3_ParamLimits

0xacc5,	// (0x000371f1) list_ai_message_pane_t3

0xacda,	// (0x00037206) list_ai_message_pane_t4_ParamLimits

0xacda,	// (0x00037206) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0003be70) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0003be70) list_ai_message_pane_t

0xac74,	// (0x000371a0) cell_ai_soft_ind_pane_ParamLimits

0xac74,	// (0x000371a0) cell_ai_soft_ind_pane

0x8c35,	// (0x00035161) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c35,	// (0x00035161) cell_ai_soft_ind_pane_g1

0x30dd,	// (0x0002f609) grid_highlight_cp1

0x8c42,	// (0x0003516e) text_secondary_cp56_ParamLimits

0x8c42,	// (0x0003516e) text_secondary_cp56

0xac49,	// (0x00037175) example_general_pane_ParamLimits

0xac49,	// (0x00037175) example_general_pane

0xac55,	// (0x00037181) example_parent_pane_g1_ParamLimits

0xac55,	// (0x00037181) example_parent_pane_g1

0xac61,	// (0x0003718d) example_parent_pane_t1_ParamLimits

0xac61,	// (0x0003718d) example_parent_pane_t1

0x9277,	// (0x000357a3) popup_preview_text_window_ParamLimits

0x9277,	// (0x000357a3) popup_preview_text_window

0x8a5d,	// (0x00034f89) list_single_pane_cp2_g4

0x7693,	// (0x00033bbf) bg_popup_preview_window_pane_ParamLimits

0x7693,	// (0x00033bbf) bg_popup_preview_window_pane

0xa97c,	// (0x00036ea8) popup_preview_text_window_t1_ParamLimits

0xa97c,	// (0x00036ea8) popup_preview_text_window_t1

0xa99a,	// (0x00036ec6) popup_preview_text_window_t2_ParamLimits

0xa99a,	// (0x00036ec6) popup_preview_text_window_t2

0xa9e3,	// (0x00036f0f) popup_preview_text_window_t3_ParamLimits

0xa9e3,	// (0x00036f0f) popup_preview_text_window_t3

0xaa28,	// (0x00036f54) popup_preview_text_window_t4_ParamLimits

0xaa28,	// (0x00036f54) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0003be3f) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0003be3f) popup_preview_text_window_t

0xaaa6,	// (0x00036fd2) scroll_pane_cp11

0x99f0,	// (0x00035f1c) bg_popup_preview_window_pane_g1

0xa930,	// (0x00036e5c) bg_popup_preview_window_pane_g2

0xa93a,	// (0x00036e66) bg_popup_preview_window_pane_g3

0xa944,	// (0x00036e70) bg_popup_preview_window_pane_g4

0xa94e,	// (0x00036e7a) bg_popup_preview_window_pane_g5

0xa958,	// (0x00036e84) bg_popup_preview_window_pane_g6

0xa960,	// (0x00036e8c) bg_popup_preview_window_pane_g7

0xa968,	// (0x00036e94) bg_popup_preview_window_pane_g8

0x4a3c,	// (0x00030f68) aid_popup_width_pane

0x9253,	// (0x0003577f) popup_midp_note_alarm_window_ParamLimits

0x9253,	// (0x0003577f) popup_midp_note_alarm_window

0x7bdc,	// (0x00034108) data_form_pane_ParamLimits

0x5433,	// (0x0003195f) form_field_data_pane_g1

0x543d,	// (0x00031969) form_field_data_pane_t1_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_ParamLimits

0x7bf6,	// (0x00034122) data_form_wide_pane_ParamLimits

0x5457,	// (0x00031983) form_field_data_wide_pane_g1

0x5463,	// (0x0003198f) form_field_data_wide_pane_t1_ParamLimits

0x7959,	// (0x00033e85) input_focus_pane_cp6_ParamLimits

0x7d15,	// (0x00034241) input_popup_find_pane_g1_ParamLimits

0x7d15,	// (0x00034241) input_popup_find_pane_g1

0x56d3,	// (0x00031bff) aid_navi_side_left_pane

0x56e8,	// (0x00031c14) aid_navi_side_right_pane

0xa33f,	// (0x0003686b) bg_popup_window_pane_cp30_ParamLimits

0xa33f,	// (0x0003686b) bg_popup_window_pane_cp30

0xa3b9,	// (0x000368e5) popup_midp_note_alarm_window_g1_ParamLimits

0xa3b9,	// (0x000368e5) popup_midp_note_alarm_window_g1

0xa3e9,	// (0x00036915) popup_midp_note_alarm_window_t1_ParamLimits

0xa3e9,	// (0x00036915) popup_midp_note_alarm_window_t1

0xa48a,	// (0x000369b6) popup_midp_note_alarm_window_t2_ParamLimits

0xa48a,	// (0x000369b6) popup_midp_note_alarm_window_t2

0xa538,	// (0x00036a64) popup_midp_note_alarm_window_t3_ParamLimits

0xa538,	// (0x00036a64) popup_midp_note_alarm_window_t3

0xa56a,	// (0x00036a96) popup_midp_note_alarm_window_t4_ParamLimits

0xa56a,	// (0x00036a96) popup_midp_note_alarm_window_t4

0xa590,	// (0x00036abc) popup_midp_note_alarm_window_t5_ParamLimits

0xa590,	// (0x00036abc) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0003bddc) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0003bddc) popup_midp_note_alarm_window_t

0xa63c,	// (0x00036b68) wait_bar_pane_cp1_ParamLimits

0xa63c,	// (0x00036b68) wait_bar_pane_cp1

0x30dd,	// (0x0002f609) wait_anim_pane_copy1

0x30dd,	// (0x0002f609) wait_border_pane_copy1

0xa024,	// (0x00036550) wait_border_pane_g1_copy1

0x547d,	// (0x000319a9) form_field_popup_pane_g1

0x5485,	// (0x000319b1) form_field_popup_pane_t1_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_cp7_ParamLimits

0x7c22,	// (0x0003414e) list_form_pane_ParamLimits

0x549f,	// (0x000319cb) form_field_popup_wide_pane_g1

0x54a7,	// (0x000319d3) form_field_popup_wide_pane_t1_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_cp8_ParamLimits

0x7c2e,	// (0x0003415a) list_form_wide_pane_ParamLimits

0xb19b,	// (0x000376c7) aid_size_cell_graphic_pane

0x5533,	// (0x00031a5f) data_form_pane_t1_ParamLimits

0x60bf,	// (0x000325eb) data_form_wide_pane_t1_ParamLimits

0x959e,	// (0x00035aca) bg_status_flat_pane

0x72c1,	// (0x000337ed) title_pane_t1_ParamLimits

0x7329,	// (0x00033855) title_pane_t2_ParamLimits

0x734f,	// (0x0003387b) title_pane_t3_ParamLimits

0xf573,	// (0x0003ba9f) title_pane_t_ParamLimits

0x84d5,	// (0x00034a01) level_1_signal_ParamLimits

0x84e2,	// (0x00034a0e) level_2_signal_ParamLimits

0x84ef,	// (0x00034a1b) level_3_signal_ParamLimits

0x84fc,	// (0x00034a28) level_4_signal_ParamLimits

0x8509,	// (0x00034a35) level_5_signal_ParamLimits

0x8516,	// (0x00034a42) level_6_signal_ParamLimits

0x8523,	// (0x00034a4f) level_7_signal_ParamLimits

0x84d5,	// (0x00034a01) level_1_battery_ParamLimits

0x84e2,	// (0x00034a0e) level_2_battery_ParamLimits

0x84ef,	// (0x00034a1b) level_3_battery_ParamLimits

0x84fc,	// (0x00034a28) level_4_battery_ParamLimits

0x8509,	// (0x00034a35) level_5_battery_ParamLimits

0x8516,	// (0x00034a42) level_6_battery_ParamLimits

0x8523,	// (0x00034a4f) level_7_battery_ParamLimits

0xa244,	// (0x00036770) bg_status_flat_pane_g1

0xa24c,	// (0x00036778) bg_status_flat_pane_g2

0xa254,	// (0x00036780) bg_status_flat_pane_g3

0xa25c,	// (0x00036788) bg_status_flat_pane_g4

0xa264,	// (0x00036790) bg_status_flat_pane_g5

0xa26c,	// (0x00036798) bg_status_flat_pane_g6

0xa274,	// (0x000367a0) bg_status_flat_pane_g7

0x7377,	// (0x000338a3) tabs_3_active_pane_t1_ParamLimits

0x7377,	// (0x000338a3) tabs_3_passive_pane_t1_ParamLimits

0x7391,	// (0x000338bd) tabs_4_active_pane_t1_ParamLimits

0x7391,	// (0x000338bd) tabs_4_1_passive_pane_t1_ParamLimits

0x8094,	// (0x000345c0) tabs_2_active_pane_t1_ParamLimits

0x8094,	// (0x000345c0) tabs_2_passive_pane_t1_ParamLimits

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp4_ParamLimits

0x80b4,	// (0x000345e0) tabs_2_long_active_pane_t1_ParamLimits

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp4_ParamLimits

0x5d64,	// (0x00032290) list_single_midp_graphic_pane_t1_ParamLimits

0x80a6,	// (0x000345d2) bg_active_tab_pane_cp5_ParamLimits

0x80d3,	// (0x000345ff) tabs_3_long_active_pane_t1_ParamLimits

0x80c7,	// (0x000345f3) bg_passive_tab_pane_cp5_ParamLimits

0x5d64,	// (0x00032290) list_single_midp_graphic_pane_t1

0x959e,	// (0x00035aca) bg_status_flat_pane_ParamLimits

0x9669,	// (0x00035b95) indicator_pane_cp2_ParamLimits

0x9669,	// (0x00035b95) indicator_pane_cp2

0x97ab,	// (0x00035cd7) navi_pane_srt_ParamLimits

0x97ab,	// (0x00035cd7) navi_pane_srt

0x97cf,	// (0x00035cfb) popup_clock_digital_analogue_window_cp1

0x7441,	// (0x0003396d) indicator_pane_t1

0x8b2e,	// (0x0003505a) copy_highlight_pane

0x8b2e,	// (0x0003505a) cursor_graphics_pane

0x8b2e,	// (0x0003505a) graphic_within_text_pane

0x8b2e,	// (0x0003505a) link_highlight_pane

0xaa69,	// (0x00036f95) popup_preview_text_window_t5_ParamLimits

0xaa69,	// (0x00036f95) popup_preview_text_window_t5

0x8c5e,	// (0x0003518a) cursor_digital_pane

0x8c5e,	// (0x0003518a) cursor_primary_pane

0x8c6f,	// (0x0003519b) cursor_primary_small_pane

0x8c77,	// (0x000351a3) cursor_secondary_pane

0x8c7f,	// (0x000351ab) cursor_title_pane

0x8c5e,	// (0x0003518a) link_highlight_digital_pane

0x8c66,	// (0x00035192) link_highlight_primary_pane

0x8c6f,	// (0x0003519b) link_highlight_primary_small_pane

0x8c77,	// (0x000351a3) link_highlight_secondary_pane

0x8c7f,	// (0x000351ab) link_highlight_title_pane

0x8c5e,	// (0x0003518a) copy_highlight_digital_pane

0x8c5e,	// (0x0003518a) copy_highlight_primary_pane

0x8c6f,	// (0x0003519b) copy_highlight_primary_small_pane

0x8c77,	// (0x000351a3) copy_highlight_secondary_pane

0x8c7f,	// (0x000351ab) copy_highlight_title_pane

0x8c77,	// (0x000351a3) graphic_text_digital_pane

0xa2e2,	// (0x0003680e) graphic_text_primary_pane

0xa2eb,	// (0x00036817) graphic_text_primary_small_pane

0x8c6f,	// (0x0003519b) graphic_text_secondary_pane

0x8c5e,	// (0x0003518a) graphic_text_title_pane

0x8c87,	// (0x000351b3) cursor_primary_pane_g1

0xa2d4,	// (0x00036800) cursor_text_primary_t1

0xa2bc,	// (0x000367e8) cursor_primary_small_pane_g1

0xa2c6,	// (0x000367f2) cursor_text_primary_small_t1

0xa2a4,	// (0x000367d0) cursor_primary_small_pane_g1_copy1

0xa2ae,	// (0x000367da) cursor_text_primary_small_t1_copy1

0xa28c,	// (0x000367b8) cursor_text_title_t1

0xa29a,	// (0x000367c6) cursor_title_pane_g1

0x8c87,	// (0x000351b3) cursor_digital_pane_g1

0x8c91,	// (0x000351bd) cursor_text_digital_t1

0x8c9f,	// (0x000351cb) link_highlight_primary_pane_g1

0xa235,	// (0x00036761) link_highlight_primary_pane_t1

0x8c9f,	// (0x000351cb) link_highlight_primary_small_pane_g1

0x8ca7,	// (0x000351d3) link_highlight_primary_small_pane_t1

0x8cb6,	// (0x000351e2) link_highlight_secondary_pane_g1

0x8cbe,	// (0x000351ea) link_highlight_secondary_pane_t1

0xa1a9,	// (0x000366d5) link_highlight_title_pane_g1

0xa1b1,	// (0x000366dd) link_highlight_title_pane_t1

0xa192,	// (0x000366be) link_highlight_digital_pane_g1

0xa19a,	// (0x000366c6) link_highlight_digital_pane_t1

0xa05a,	// (0x00036586) copy_highlight_primary_pane_g1

0xa071,	// (0x0003659d) copy_highlight_primary_pane_t1

0xa05a,	// (0x00036586) copy_highlight_primary_small_pane_g1

0xa062,	// (0x0003658e) copy_highlight_primary_small_pane_t1

0x8ccd,	// (0x000351f9) copy_highlight_secondary_pane_g1

0x8cd5,	// (0x00035201) copy_highlight_secondary_pane_t1

0xa043,	// (0x0003656f) copy_highlight_title_pane_g1

0xa04b,	// (0x00036577) copy_highlight_title_pane_t1

0xa05a,	// (0x00036586) copy_highlight_digital_pane_g1

0xb36b,	// (0x00037897) copy_highlight_digital_pane_t1

0xb2bf,	// (0x000377eb) graphic_text_primary_pane_g1

0xb34f,	// (0x0003787b) graphic_text_primary_pane_t1

0xb35d,	// (0x00037889) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0003bf0b) graphic_text_primary_pane_t

0xb32b,	// (0x00037857) graphic_text_primary_small_pane_g1

0xb333,	// (0x0003785f) graphic_text_primary_small_pane_t1

0xb341,	// (0x0003786d) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0003bf06) graphic_text_primary_small_pane_t

0xb307,	// (0x00037833) graphic_text_secondary_pane_g1

0xb30f,	// (0x0003783b) graphic_text_secondary_pane_t1

0xb31d,	// (0x00037849) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0003bf01) graphic_text_secondary_pane_t

0xb2e3,	// (0x0003780f) graphic_text_title_pane_g1

0xb2eb,	// (0x00037817) graphic_text_title_pane_t1

0xb2f9,	// (0x00037825) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0003befc) graphic_text_title_pane_t

0xb2bf,	// (0x000377eb) graphic_text_digital_pane_g1

0xb2c7,	// (0x000377f3) graphic_text_digital_pane_t1

0xb2d5,	// (0x00037801) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0003bef7) graphic_text_digital_pane_t

0x7361,	// (0x0003388d) navi_icon_pane_srt_ParamLimits

0x7361,	// (0x0003388d) navi_icon_pane_srt

0x30dd,	// (0x0002f609) navi_midp_pane_srt

0x30dd,	// (0x0002f609) navi_navi_pane_srt

0x7361,	// (0x0003388d) navi_text_pane_srt_ParamLimits

0x7361,	// (0x0003388d) navi_text_pane_srt

0xb28a,	// (0x000377b6) navi_navi_icon_text_pane_srt

0xb292,	// (0x000377be) navi_navi_pane_srt_g1_ParamLimits

0xb292,	// (0x000377be) navi_navi_pane_srt_g1

0xb2a4,	// (0x000377d0) navi_navi_pane_srt_g2_ParamLimits

0xb2a4,	// (0x000377d0) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0003bef2) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0003bef2) navi_navi_pane_srt_g

0xb2b6,	// (0x000377e2) navi_navi_tabs_pane_srt

0xb28a,	// (0x000377b6) navi_navi_text_pane_srt

0xb28a,	// (0x000377b6) navi_navi_volume_pane_srt

0xb27b,	// (0x000377a7) navi_navi_text_pane_srt_t1

0x61f8,	// (0x00032724) navi_navi_volume_pane_srt_g1

0x6200,	// (0x0003272c) volume_small_pane_srt_ParamLimits

0x6200,	// (0x0003272c) volume_small_pane_srt

0x5a46,	// (0x00031f72) volume_small_pane_srt_g1_ParamLimits

0x5a46,	// (0x00031f72) volume_small_pane_srt_g1

0x5a56,	// (0x00031f82) volume_small_pane_srt_g2_ParamLimits

0x5a56,	// (0x00031f82) volume_small_pane_srt_g2

0x5a67,	// (0x00031f93) volume_small_pane_srt_g3_ParamLimits

0x5a67,	// (0x00031f93) volume_small_pane_srt_g3

0x5a78,	// (0x00031fa4) volume_small_pane_srt_g4_ParamLimits

0x5a78,	// (0x00031fa4) volume_small_pane_srt_g4

0x5a89,	// (0x00031fb5) volume_small_pane_srt_g5_ParamLimits

0x5a89,	// (0x00031fb5) volume_small_pane_srt_g5

0x5a9a,	// (0x00031fc6) volume_small_pane_srt_g6_ParamLimits

0x5a9a,	// (0x00031fc6) volume_small_pane_srt_g6

0x5aab,	// (0x00031fd7) volume_small_pane_srt_g7_ParamLimits

0x5aab,	// (0x00031fd7) volume_small_pane_srt_g7

0x5abc,	// (0x00031fe8) volume_small_pane_srt_g8_ParamLimits

0x5abc,	// (0x00031fe8) volume_small_pane_srt_g8

0x5acd,	// (0x00031ff9) volume_small_pane_srt_g9_ParamLimits

0x5acd,	// (0x00031ff9) volume_small_pane_srt_g9

0x5ade,	// (0x0003200a) volume_small_pane_srt_g10_ParamLimits

0x5ade,	// (0x0003200a) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003bca1) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003bca1) volume_small_pane_srt_g

0x7748,	// (0x00033c74) query_popup_data_pane_cp2

0xb261,	// (0x0003778d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb261,	// (0x0003778d) navi_navi_icon_text_pane_srt_t1

0xa2e2,	// (0x0003680e) navi_tabs_2_long_pane_srt

0xa2e2,	// (0x0003680e) navi_tabs_2_pane_srt

0xa2e2,	// (0x0003680e) navi_tabs_3_long_pane_srt

0xa2e2,	// (0x0003680e) navi_tabs_3_pane_srt

0xa2e2,	// (0x0003680e) navi_tabs_4_pane_srt

0x61d8,	// (0x00032704) tabs_2_active_pane_srt_ParamLimits

0x61d8,	// (0x00032704) tabs_2_active_pane_srt

0x61e8,	// (0x00032714) tabs_2_passive_pane_srt_ParamLimits

0x61e8,	// (0x00032714) tabs_2_passive_pane_srt

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp1_srt

0xb22d,	// (0x00037759) bg_passive_tab_pane_g1_cp1_srt

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp1_srt

0xb236,	// (0x00037762) bg_passive_tab_pane_g3_cp1_srt

0x7361,	// (0x0003388d) bg_active_tab_pane_cp1_srt_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp1_srt

0xb23f,	// (0x0003776b) tabs_2_active_pane_srt_g1

0xb247,	// (0x00037773) tabs_2_active_pane_srt_t1_ParamLimits

0xb247,	// (0x00037773) tabs_2_active_pane_srt_t1

0xb22d,	// (0x00037759) bg_active_tab_pane_g1_cp1_srt

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp1_srt

0xb236,	// (0x00037762) bg_active_tab_pane_g3_cp1_srt

0x61a5,	// (0x000326d1) tabs_3_active_pane_srt_ParamLimits

0x61a5,	// (0x000326d1) tabs_3_active_pane_srt

0x61b6,	// (0x000326e2) tabs_3_passive_pane_cp_srt_ParamLimits

0x61b6,	// (0x000326e2) tabs_3_passive_pane_cp_srt

0x61c7,	// (0x000326f3) tabs_3_passive_pane_srt_ParamLimits

0x61c7,	// (0x000326f3) tabs_3_passive_pane_srt

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8eb4,	// (0x000353e0) bg_passive_tab_pane_cp2_srt

0x8ce4,	// (0x00035210) bg_passive_tab_pane_g1_cp2_srt

0x8777,	// (0x00034ca3) bg_passive_tab_pane_g2_cp2_srt

0x8ced,	// (0x00035219) bg_passive_tab_pane_g3_cp2_srt

0x7361,	// (0x0003388d) bg_active_tab_pane_cp2_srt_ParamLimits

0x7361,	// (0x0003388d) bg_active_tab_pane_cp2_srt

0xb213,	// (0x0003773f) tabs_3_active_pane_srt_g1

0xb21b,	// (0x00037747) tabs_3_active_pane_srt_t1_ParamLimits

0xb21b,	// (0x00037747) tabs_3_active_pane_srt_t1

0x8ce4,	// (0x00035210) bg_active_tab_pane_g1_cp2_srt

0x8777,	// (0x00034ca3) bg_active_tab_pane_g2_cp2_srt

0x8ced,	// (0x00035219) bg_active_tab_pane_g3_cp2_srt

0x615d,	// (0x00032689) tabs_4_active_pane_srt_ParamLimits

0x615d,	// (0x00032689) tabs_4_active_pane_srt

0x616f,	// (0x0003269b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x616f,	// (0x0003269b) tabs_4_passive_pane_cp2_srt

0x8e42,	// (0x0003536e) aid_size_cell_toolbar

0x80c7,	// (0x000345f3) main_idle_act_pane_ParamLimits

0x9079,	// (0x000355a5) popup_large_graphic_colour_window_ParamLimits

0x9420,	// (0x0003594c) popup_toolbar_window_ParamLimits

0x9420,	// (0x0003594c) popup_toolbar_window

0x6118,	// (0x00032644) list_single_graphic_2heading_pane_ParamLimits

0x6118,	// (0x00032644) list_single_graphic_2heading_pane

0x8283,	// (0x000347af) aid_size_cell_apps_grid_lsc_pane

0x8295,	// (0x000347c1) aid_size_cell_apps_grid_prt_pane

0x8eb4,	// (0x000353e0) bg_wml_button_pane_cp1_ParamLimits

0x8eb4,	// (0x000353e0) bg_wml_button_pane_cp1

0x9cda,	// (0x00036206) form_midp_field_text_pane_t1_ParamLimits

0x9ae2,	// (0x0003600e) input_focus_pane_cp050_ParamLimits

0x9d05,	// (0x00036231) list_midp_form_text_pane_ParamLimits

0x9cb7,	// (0x000361e3) input_focus_pane_cp051_ParamLimits

0x9ccb,	// (0x000361f7) list_midp_choice_pane_ParamLimits

0x9b73,	// (0x0003609f) list_single_2graphic_pane_cp3_ParamLimits

0x9b73,	// (0x0003609f) list_single_2graphic_pane_cp3

0x9b98,	// (0x000360c4) list_single_midp_graphic_pane_ParamLimits

0x9b98,	// (0x000360c4) list_single_midp_graphic_pane

0x49c4,	// (0x00030ef0) list_single_graphic_2heading_pane_g1_ParamLimits

0x49c4,	// (0x00030ef0) list_single_graphic_2heading_pane_g1

0x49d0,	// (0x00030efc) list_single_graphic_2heading_pane_g4_ParamLimits

0x49d0,	// (0x00030efc) list_single_graphic_2heading_pane_g4

0x49dc,	// (0x00030f08) list_single_graphic_2heading_pane_g5_ParamLimits

0x49dc,	// (0x00030f08) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003bcf4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003bcf4) list_single_graphic_2heading_pane_g

0x49e8,	// (0x00030f14) list_single_graphic_2heading_pane_t1_ParamLimits

0x49e8,	// (0x00030f14) list_single_graphic_2heading_pane_t1

0x49fc,	// (0x00030f28) list_single_graphic_2heading_pane_t2_ParamLimits

0x49fc,	// (0x00030f28) list_single_graphic_2heading_pane_t2

0x4a18,	// (0x00030f44) list_single_graphic_2heading_pane_t3_ParamLimits

0x4a18,	// (0x00030f44) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003bcfb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003bcfb) list_single_graphic_2heading_pane_t

0x992e,	// (0x00035e5a) bg_popup_sub_pane_cp2

0x9958,	// (0x00035e84) grid_toobar_pane

0x5c58,	// (0x00032184) cell_toolbar_pane_ParamLimits

0x5c58,	// (0x00032184) cell_toolbar_pane

0x9994,	// (0x00035ec0) cell_toolbar_pane_g1_ParamLimits

0x9994,	// (0x00035ec0) cell_toolbar_pane_g1

0x99a8,	// (0x00035ed4) cell_toolbar_pane_g2_ParamLimits

0x99a8,	// (0x00035ed4) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0003bd09) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0003bd09) cell_toolbar_pane_g

0x99ca,	// (0x00035ef6) grid_highlight_pane_cp2_ParamLimits

0x99ca,	// (0x00035ef6) grid_highlight_pane_cp2

0x99e4,	// (0x00035f10) toolbar_button_pane

0x99f0,	// (0x00035f1c) toolbar_button_pane_g1

0x99f8,	// (0x00035f24) toolbar_button_pane_g2

0x9a00,	// (0x00035f2c) toolbar_button_pane_g3

0x9a08,	// (0x00035f34) toolbar_button_pane_g4

0x9a10,	// (0x00035f3c) toolbar_button_pane_g5

0x9a18,	// (0x00035f44) toolbar_button_pane_g6

0x9a20,	// (0x00035f4c) toolbar_button_pane_g7

0x9a28,	// (0x00035f54) toolbar_button_pane_g8

0x9a30,	// (0x00035f5c) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0003bd0e) toolbar_button_pane_g

0x5cca,	// (0x000321f6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5cca,	// (0x000321f6) list_single_2graphic_pane_g1_cp3

0x5cd6,	// (0x00032202) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5cd6,	// (0x00032202) list_single_2graphic_pane_g2_cp3

0x5ce7,	// (0x00032213) list_single_2graphic_pane_g3_cp3

0x5cef,	// (0x0003221b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5cef,	// (0x0003221b) list_single_2graphic_pane_g4_cp3

0x5cfb,	// (0x00032227) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5cfb,	// (0x00032227) list_single_2graphic_pane_t1_cp3

0x5d58,	// (0x00032284) list_single_midp_graphic_pane_g2_ParamLimits

0x5d58,	// (0x00032284) list_single_midp_graphic_pane_g2

0x8e4a,	// (0x00035376) aid_zoom_text_primary

0x5c48,	// (0x00032174) aid_zoom_text_secondary

0x8da1,	// (0x000352cd) status_small_pane_g7_ParamLimits

0x8da1,	// (0x000352cd) status_small_pane_g7

0x8dc4,	// (0x000352f0) status_small_pane_t1_ParamLimits

0x7298,	// (0x000337c4) title_pane_g2

0x0003,

0xf56a,	// (0x0003ba96) title_pane_g

0x77f1,	// (0x00033d1d) aid_size_cell_colour_1_pane_ParamLimits

0x77f1,	// (0x00033d1d) aid_size_cell_colour_1_pane

0x7805,	// (0x00033d31) aid_size_cell_colour_2_pane_ParamLimits

0x7805,	// (0x00033d31) aid_size_cell_colour_2_pane

0x7819,	// (0x00033d45) aid_size_cell_colour_3_pane_ParamLimits

0x7819,	// (0x00033d45) aid_size_cell_colour_3_pane

0x782d,	// (0x00033d59) aid_size_cell_colour_4_pane_ParamLimits

0x782d,	// (0x00033d59) aid_size_cell_colour_4_pane

0x560f,	// (0x00031b3b) title_pane_stacon_g1_ParamLimits

0x560f,	// (0x00031b3b) title_pane_stacon_g1

0xa0c8,	// (0x000365f4) popup_note_wait_window_g3_ParamLimits

0xa0c8,	// (0x000365f4) popup_note_wait_window_g3

0xa13f,	// (0x0003666b) popup_note_wait_window_t5_ParamLimits

0xa13f,	// (0x0003666b) popup_note_wait_window_t5

0x30dd,	// (0x0002f609) main_feb_china_hwr_fs_writing_pane

0x8f40,	// (0x0003546c) popup_feb_china_hwr_fs_window_ParamLimits

0x8f40,	// (0x0003546c) popup_feb_china_hwr_fs_window

0x5d7a,	// (0x000322a6) aid_size_cell_hwr_fs_ParamLimits

0x5d7a,	// (0x000322a6) aid_size_cell_hwr_fs

0x9ae2,	// (0x0003600e) bg_popup_sub_pane_cp3_ParamLimits

0x9ae2,	// (0x0003600e) bg_popup_sub_pane_cp3

0x5d8f,	// (0x000322bb) grid_hwr_fs_pane_ParamLimits

0x5d8f,	// (0x000322bb) grid_hwr_fs_pane

0x5da7,	// (0x000322d3) linegrid_hwr_fs_pane_ParamLimits

0x5da7,	// (0x000322d3) linegrid_hwr_fs_pane

0x5db7,	// (0x000322e3) cell_hwr_fs_pane_ParamLimits

0x5db7,	// (0x000322e3) cell_hwr_fs_pane

0x9aee,	// (0x0003601a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aee,	// (0x0003601a) linegrid_hwr_fs_pane_g1

0x9afa,	// (0x00036026) linegrid_hwr_fs_pane_g2_ParamLimits

0x9afa,	// (0x00036026) linegrid_hwr_fs_pane_g2

0x9b0c,	// (0x00036038) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b0c,	// (0x00036038) linegrid_hwr_fs_pane_g3

0x5ddb,	// (0x00032307) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ddb,	// (0x00032307) linegrid_hwr_fs_pane_g4

0x5df9,	// (0x00032325) linegrid_hwr_fs_pane_g5_ParamLimits

0x5df9,	// (0x00032325) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0003bd39) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0003bd39) linegrid_hwr_fs_pane_g

0x9b18,	// (0x00036044) cell_hwr_fs_pane_g1_ParamLimits

0x9b18,	// (0x00036044) cell_hwr_fs_pane_g1

0x9865,	// (0x00035d91) cell_hwr_fs_pane_g2_ParamLimits

0x9865,	// (0x00035d91) cell_hwr_fs_pane_g2

0x9b2e,	// (0x0003605a) cell_hwr_fs_pane_g3_ParamLimits

0x9b2e,	// (0x0003605a) cell_hwr_fs_pane_g3

0x9b3b,	// (0x00036067) cell_hwr_fs_pane_g4_ParamLimits

0x9b3b,	// (0x00036067) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0003bd44) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0003bd44) cell_hwr_fs_pane_g

0x5e0f,	// (0x0003233b) cell_hwr_fs_pane_t1

0x30dd,	// (0x0002f609) grid_highlight_pane_cp6

0x30dd,	// (0x0002f609) main_idle_act2_pane

0x8039,	// (0x00034565) aid_inside_area_popup_secondary

0xa778,	// (0x00036ca4) aid_inside_area_window_primary_ParamLimits

0xa778,	// (0x00036ca4) aid_inside_area_window_primary

0xb37a,	// (0x000378a6) ai2_news_ticker_pane

0xb382,	// (0x000378ae) aid_size_cell_ai1_link_ParamLimits

0xb382,	// (0x000378ae) aid_size_cell_ai1_link

0xb39c,	// (0x000378c8) popup_ai2_data_window_ParamLimits

0xb39c,	// (0x000378c8) popup_ai2_data_window

0xb3ba,	// (0x000378e6) popup_ai2_link_window_ParamLimits

0xb3ba,	// (0x000378e6) popup_ai2_link_window

0x9ae2,	// (0x0003600e) bg_popup_sub_pane_cp4_ParamLimits

0x9ae2,	// (0x0003600e) bg_popup_sub_pane_cp4

0xb3d0,	// (0x000378fc) grid_ai2_link_pane_ParamLimits

0xb3d0,	// (0x000378fc) grid_ai2_link_pane

0xb3e7,	// (0x00037913) popup_ai2_link_window_g1_ParamLimits

0xb3e7,	// (0x00037913) popup_ai2_link_window_g1

0xb3f3,	// (0x0003791f) popup_ai2_link_window_g2_ParamLimits

0xb3f3,	// (0x0003791f) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0003bf10) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0003bf10) popup_ai2_link_window_g

0xb404,	// (0x00037930) ai2_mp_button_pane

0xb40c,	// (0x00037938) ai2_mp_volume_pane

0x9cb7,	// (0x000361e3) bg_popup_sub_pane_cp5_ParamLimits

0x9cb7,	// (0x000361e3) bg_popup_sub_pane_cp5

0xb414,	// (0x00037940) heading_ai2_gene_pane_ParamLimits

0xb414,	// (0x00037940) heading_ai2_gene_pane

0xb420,	// (0x0003794c) list_ai2_gene_pane_ParamLimits

0xb420,	// (0x0003794c) list_ai2_gene_pane

0xb468,	// (0x00037994) cell_ai2_link_pane_ParamLimits

0xb468,	// (0x00037994) cell_ai2_link_pane

0xb47e,	// (0x000379aa) cell_ai2_link_pane_g1

0x30dd,	// (0x0002f609) grid_highlight_pane_cp7

0x6215,	// (0x00032741) ai2_mp_volume_pane_g1

0xb551,	// (0x00037a7d) ai2_mp_volume_pane_g2

0xb4c6,	// (0x000379f2) list_ai2_gene_pane_t1

0xb559,	// (0x00037a85) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0003bf29) ai2_mp_volume_pane_g

0x621d,	// (0x00032749) volume_small_pane_cp3

0xb561,	// (0x00037a8d) aid_size_cell_ai2_button

0xb569,	// (0x00037a95) grid_ai2_button_pane

0xb572,	// (0x00037a9e) cell_ai2_button_pane_ParamLimits

0xb572,	// (0x00037a9e) cell_ai2_button_pane

0x30d3,	// (0x0002f5ff) cell_ai2_button_pane_g1

0x30dd,	// (0x0002f609) grid_highlight_pane_cp8

0xb511,	// (0x00037a3d) ai2_gene_pane_t1_ParamLimits

0xb511,	// (0x00037a3d) ai2_gene_pane_t1

0x8e38,	// (0x00035364) aid_height_parent_landscape

0xae24,	// (0x00037350) aid_height_set_list

0xae35,	// (0x00037361) aid_size_parent

0xb19b,	// (0x000376c7) aid_size_cell_graphic_pane_ParamLimits

0xb430,	// (0x0003795c) popup_ai2_data_window_g1_ParamLimits

0xb430,	// (0x0003795c) popup_ai2_data_window_g1

0xb43c,	// (0x00037968) ai2_news_ticker_pane_g1

0xb444,	// (0x00037970) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0003bf15) ai2_news_ticker_pane_g

0xb44c,	// (0x00037978) ai2_news_ticker_pane_t1

0xb45a,	// (0x00037986) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0003bf1a) ai2_news_ticker_pane_t

0xb487,	// (0x000379b3) heading_ai2_gene_pane_g1

0xb48f,	// (0x000379bb) heading_ai2_gene_pane_t1_ParamLimits

0xb48f,	// (0x000379bb) heading_ai2_gene_pane_t1

0xb4a4,	// (0x000379d0) list_highlight_pane_cp6

0xb4ac,	// (0x000379d8) ai2_gene_pane_ParamLimits

0xb4ac,	// (0x000379d8) ai2_gene_pane

0xb4d4,	// (0x00037a00) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0003bf1f) list_ai2_gene_pane_t

0xb4e2,	// (0x00037a0e) list_highlight_pane_cp8_ParamLimits

0xb4e2,	// (0x00037a0e) list_highlight_pane_cp8

0xb4f3,	// (0x00037a1f) ai2_gene_pane_g1_ParamLimits

0xb4f3,	// (0x00037a1f) ai2_gene_pane_g1

0xb505,	// (0x00037a31) ai2_gene_pane_g2_ParamLimits

0xb505,	// (0x00037a31) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0003bf24) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0003bf24) ai2_gene_pane_g

0x7b7e,	// (0x000340aa) scroll_pane_cp12

0x5c07,	// (0x00032133) control_pane_t3_ParamLimits

0x5c07,	// (0x00032133) control_pane_t3

0x8db5,	// (0x000352e1) status_small_pane_g8_ParamLimits

0x8db5,	// (0x000352e1) status_small_pane_g8

0x903e,	// (0x0003556a) popup_find_window_ParamLimits

0x9269,	// (0x00035795) popup_note_image_window_ParamLimits

0x5c88,	// (0x000321b4) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c88,	// (0x000321b4) list_double2_graphic_pane_vc_g1

0x5c94,	// (0x000321c0) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c94,	// (0x000321c0) list_double2_graphic_pane_vc_g2

0x5ca0,	// (0x000321cc) list_double2_graphic_pane_vc_g3_ParamLimits

0x5ca0,	// (0x000321cc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003bd02) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003bd02) list_double2_graphic_pane_vc_g

0x5cac,	// (0x000321d8) list_double2_graphic_pane_vc_t1_ParamLimits

0x5cac,	// (0x000321d8) list_double2_graphic_pane_vc_t1

0x5d16,	// (0x00032242) list_single_heading_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_single_heading_pane_vc_g1

0x5d22,	// (0x0003224e) list_single_heading_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_single_heading_pane_vc_g

0x5d2e,	// (0x0003225a) list_single_heading_pane_vc_t1_ParamLimits

0x5d2e,	// (0x0003225a) list_single_heading_pane_vc_t1

0x5d44,	// (0x00032270) list_single_heading_pane_vc_t2_ParamLimits

0x5d44,	// (0x00032270) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0003bd28) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0003bd28) list_single_heading_pane_vc_t

0x9a38,	// (0x00035f64) list_setting_number_pane_vc_g1_ParamLimits

0x9a38,	// (0x00035f64) list_setting_number_pane_vc_g1

0x9a44,	// (0x00035f70) list_setting_number_pane_vc_g2_ParamLimits

0x9a44,	// (0x00035f70) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0003bd2d) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0003bd2d) list_setting_number_pane_vc_g

0x9a50,	// (0x00035f7c) list_setting_number_pane_vc_t1_ParamLimits

0x9a50,	// (0x00035f7c) list_setting_number_pane_vc_t1

0x9a64,	// (0x00035f90) list_setting_number_pane_vc_t2_ParamLimits

0x9a64,	// (0x00035f90) list_setting_number_pane_vc_t2

0x9a80,	// (0x00035fac) list_setting_number_pane_vc_t3_ParamLimits

0x9a80,	// (0x00035fac) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0003bd32) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0003bd32) list_setting_number_pane_vc_t

0x9aa8,	// (0x00035fd4) set_value_pane_vc_ParamLimits

0x9aa8,	// (0x00035fd4) set_value_pane_vc

0x6118,	// (0x00032644) list_double2_graphic_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double2_graphic_pane_vc

0xb019,	// (0x00037545) list_double2_large_graphic_pane_vc_ParamLimits

0xb019,	// (0x00037545) list_double2_large_graphic_pane_vc

0x6118,	// (0x00032644) list_double2_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double2_pane_vc

0x6118,	// (0x00032644) list_double_graphic_heading_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_graphic_heading_pane_vc

0x6118,	// (0x00032644) list_double_graphic_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_graphic_pane_vc

0x6118,	// (0x00032644) list_double_heading_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_heading_pane_vc

0xb019,	// (0x00037545) list_double_large_graphic_pane_vc_ParamLimits

0xb019,	// (0x00037545) list_double_large_graphic_pane_vc

0x6118,	// (0x00032644) list_double_number_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_number_pane_vc

0x6118,	// (0x00032644) list_double_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_pane_vc

0x6118,	// (0x00032644) list_double_time_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_double_time_pane_vc

0x6118,	// (0x00032644) list_setting_number_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_setting_number_pane_vc

0x6118,	// (0x00032644) list_setting_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_setting_pane_vc

0x6118,	// (0x00032644) list_single_graphic_heading_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_single_graphic_heading_pane_vc

0x6118,	// (0x00032644) list_single_heading_pane_vc_ParamLimits

0x6118,	// (0x00032644) list_single_heading_pane_vc

0xb041,	// (0x0003756d) list_single_number_heading_pane_vc_ParamLimits

0xb041,	// (0x0003756d) list_single_number_heading_pane_vc

0x5c88,	// (0x000321b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c88,	// (0x000321b4) list_double_graphic_heading_pane_vc_g1

0x5d16,	// (0x00032242) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5d16,	// (0x00032242) list_double_graphic_heading_pane_vc_g2

0x5d22,	// (0x0003224e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5d22,	// (0x0003224e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0003bf30) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003bf30) list_double_graphic_heading_pane_vc_g

0x6226,	// (0x00032752) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6226,	// (0x00032752) list_double_graphic_heading_pane_vc_t1

0x5d2e,	// (0x0003225a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d2e,	// (0x0003225a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0003bf37) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0003bf37) list_double_graphic_heading_pane_vc_t

0x9a38,	// (0x00035f64) list_setting_pane_vc_g1_ParamLimits

0x9a38,	// (0x00035f64) list_setting_pane_vc_g1

0x9a44,	// (0x00035f70) list_setting_pane_vc_g2_ParamLimits

0x9a44,	// (0x00035f70) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0003bd2d) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0003bd2d) list_setting_pane_vc_g

0xb7f0,	// (0x00037d1c) list_setting_pane_vc_t1_ParamLimits

0xb7f0,	// (0x00037d1c) list_setting_pane_vc_t1

0xb804,	// (0x00037d30) list_setting_pane_vc_t2_ParamLimits

0xb804,	// (0x00037d30) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0003bf65) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0003bf65) list_setting_pane_vc_t

0x9aa8,	// (0x00035fd4) set_value_pane_cp_vc_ParamLimits

0x9aa8,	// (0x00035fd4) set_value_pane_cp_vc

0x5d16,	// (0x00032242) list_single_number_heading_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_single_number_heading_pane_vc_g1

0x5d22,	// (0x0003224e) list_single_number_heading_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_single_number_heading_pane_vc_g

0x5d2e,	// (0x0003225a) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d2e,	// (0x0003225a) list_single_number_heading_pane_vc_t1

0x623a,	// (0x00032766) list_single_number_heading_pane_vc_t2_ParamLimits

0x623a,	// (0x00032766) list_single_number_heading_pane_vc_t2

0x624e,	// (0x0003277a) list_single_number_heading_pane_vc_t3_ParamLimits

0x624e,	// (0x0003277a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0003bf6a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003bf6a) list_single_number_heading_pane_vc_t

0x5c88,	// (0x000321b4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c88,	// (0x000321b4) list_single_graphic_heading_pane_vc_g1

0x5d16,	// (0x00032242) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5d16,	// (0x00032242) list_single_graphic_heading_pane_vc_g4

0x5d22,	// (0x0003224e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5d22,	// (0x0003224e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0003bf30) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003bf30) list_single_graphic_heading_pane_vc_g

0x5d2e,	// (0x0003225a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5d2e,	// (0x0003225a) list_single_graphic_heading_pane_vc_t1

0x6260,	// (0x0003278c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6260,	// (0x0003278c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0003bf71) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0003bf71) list_single_graphic_heading_pane_vc_t

0x5d16,	// (0x00032242) list_double2_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_double2_pane_vc_g1

0x5d22,	// (0x0003224e) list_double2_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_double2_pane_vc_g

0x6274,	// (0x000327a0) list_double2_pane_vc_t1_ParamLimits

0x6274,	// (0x000327a0) list_double2_pane_vc_t1

0x628a,	// (0x000327b6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x628a,	// (0x000327b6) list_double2_large_graphic_pane_vc_g1

0x6296,	// (0x000327c2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6296,	// (0x000327c2) list_double2_large_graphic_pane_vc_g2

0x62a2,	// (0x000327ce) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x62a2,	// (0x000327ce) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0003bf76) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0003bf76) list_double2_large_graphic_pane_vc_g

0x62ae,	// (0x000327da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x62ae,	// (0x000327da) list_double2_large_graphic_pane_vc_t1

0x62c4,	// (0x000327f0) list_double_time_pane_vc_g1_ParamLimits

0x62c4,	// (0x000327f0) list_double_time_pane_vc_g1

0x62d0,	// (0x000327fc) list_double_time_pane_vc_g2_ParamLimits

0x62d0,	// (0x000327fc) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0003bf7d) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0003bf7d) list_double_time_pane_vc_g

0x62dc,	// (0x00032808) list_double_time_pane_vc_t1_ParamLimits

0x62dc,	// (0x00032808) list_double_time_pane_vc_t1

0x62f5,	// (0x00032821) list_double_time_pane_vc_t2_ParamLimits

0x62f5,	// (0x00032821) list_double_time_pane_vc_t2

0x6335,	// (0x00032861) list_double_time_pane_vc_t3_ParamLimits

0x6335,	// (0x00032861) list_double_time_pane_vc_t3

0x634d,	// (0x00032879) list_double_time_pane_vc_t4_ParamLimits

0x634d,	// (0x00032879) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0003bf82) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0003bf82) list_double_time_pane_vc_t

0x5d16,	// (0x00032242) list_double_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_double_pane_vc_g1

0x5d22,	// (0x0003224e) list_double_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_double_pane_vc_g

0x6361,	// (0x0003288d) list_double_pane_vc_t1_ParamLimits

0x6361,	// (0x0003288d) list_double_pane_vc_t1

0x6373,	// (0x0003289f) list_double_pane_vc_t2_ParamLimits

0x6373,	// (0x0003289f) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003bf8b) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003bf8b) list_double_pane_vc_t

0x5d16,	// (0x00032242) list_double_number_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_double_number_pane_vc_g1

0x5d22,	// (0x0003224e) list_double_number_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_double_number_pane_vc_g

0x638b,	// (0x000328b7) list_double_number_pane_vc_t1_ParamLimits

0x638b,	// (0x000328b7) list_double_number_pane_vc_t1

0x639f,	// (0x000328cb) list_double_number_pane_vc_t2_ParamLimits

0x639f,	// (0x000328cb) list_double_number_pane_vc_t2

0x6373,	// (0x0003289f) list_double_number_pane_vc_t3_ParamLimits

0x6373,	// (0x0003289f) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0003bf90) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0003bf90) list_double_number_pane_vc_t

0x63b1,	// (0x000328dd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x63b1,	// (0x000328dd) list_double_large_graphic_pane_vc_g1

0x63bd,	// (0x000328e9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x63bd,	// (0x000328e9) list_double_large_graphic_pane_vc_g2

0x62a2,	// (0x000327ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x62a2,	// (0x000327ce) list_double_large_graphic_pane_vc_g3

0x63cc,	// (0x000328f8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x63cc,	// (0x000328f8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0003bf97) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0003bf97) list_double_large_graphic_pane_vc_g

0x63d8,	// (0x00032904) list_double_large_graphic_pane_vc_t1_ParamLimits

0x63d8,	// (0x00032904) list_double_large_graphic_pane_vc_t1

0x63ea,	// (0x00032916) list_double_large_graphic_pane_vc_t2_ParamLimits

0x63ea,	// (0x00032916) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0003bfa0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0003bfa0) list_double_large_graphic_pane_vc_t

0x5d16,	// (0x00032242) list_double_heading_pane_vc_g1_ParamLimits

0x5d16,	// (0x00032242) list_double_heading_pane_vc_g1

0x5d22,	// (0x0003224e) list_double_heading_pane_vc_g2_ParamLimits

0x5d22,	// (0x0003224e) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003bd23) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003bd23) list_double_heading_pane_vc_g

0x6403,	// (0x0003292f) list_double_heading_pane_vc_t1_ParamLimits

0x6403,	// (0x0003292f) list_double_heading_pane_vc_t1

0x5d2e,	// (0x0003225a) list_double_heading_pane_vc_t2_ParamLimits

0x5d2e,	// (0x0003225a) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0003bfa5) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003bfa5) list_double_heading_pane_vc_t

0x6417,	// (0x00032943) list_double_graphic_pane_vc_g1_ParamLimits

0x6417,	// (0x00032943) list_double_graphic_pane_vc_g1

0x6427,	// (0x00032953) list_double_graphic_pane_vc_g2_ParamLimits

0x6427,	// (0x00032953) list_double_graphic_pane_vc_g2

0x6436,	// (0x00032962) list_double_graphic_pane_vc_g3_ParamLimits

0x6436,	// (0x00032962) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0003bfaa) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003bfaa) list_double_graphic_pane_vc_g

0x6442,	// (0x0003296e) list_double_graphic_pane_vc_t1_ParamLimits

0x6442,	// (0x0003296e) list_double_graphic_pane_vc_t1

0x6373,	// (0x0003289f) list_double_graphic_pane_vc_t2_ParamLimits

0x6373,	// (0x0003289f) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0003bfb1) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0003bfb1) list_double_graphic_pane_vc_t

0x4a48,	// (0x00030f74) aid_size_cell_fastswap

0x4a50,	// (0x00030f7c) aid_size_cell_touch_ParamLimits

0x4a50,	// (0x00030f7c) aid_size_cell_touch

0x4cbb,	// (0x000311e7) popup_fast_swap_wide_window_ParamLimits

0x4cbb,	// (0x000311e7) popup_fast_swap_wide_window

0x4dd1,	// (0x000312fd) touch_pane_ParamLimits

0x4dd1,	// (0x000312fd) touch_pane

0x7bd4,	// (0x00034100) button_value_adjust_pane_cp2

0x7bd4,	// (0x00034100) button_value_adjust_pane_cp4

0x539b,	// (0x000318c7) form_field_data_pane_cp2

0x53c0,	// (0x000318ec) form_field_data_wide_pane_cp2

0x8355,	// (0x00034881) bg_scroll_pane_ParamLimits

0x5774,	// (0x00031ca0) scroll_handle_pane_ParamLimits

0x5788,	// (0x00031cb4) scroll_sc2_down_pane_ParamLimits

0x5788,	// (0x00031cb4) scroll_sc2_down_pane

0x8386,	// (0x000348b2) scroll_sc2_up_pane_ParamLimits

0x8386,	// (0x000348b2) scroll_sc2_up_pane

0xbc80,	// (0x000381ac) grid_wheel_folder_pane_g1_ParamLimits

0xbc80,	// (0x000381ac) grid_wheel_folder_pane_g1

0x59de,	// (0x00031f0a) clock_nsta_pane_cp2_ParamLimits

0x59de,	// (0x00031f0a) clock_nsta_pane_cp2

0x8b36,	// (0x00035062) listscroll_midp_pane_ParamLimits

0x8b42,	// (0x0003506e) midp_canvas_pane

0x8e30,	// (0x0003535c) nsta_clock_indic_pane

0x8e86,	// (0x000353b2) listscroll_form_pane_vc

0x8ea2,	// (0x000353ce) listscroll_set_pane_vc_ParamLimits

0x8ea2,	// (0x000353ce) listscroll_set_pane_vc

0x95ba,	// (0x00035ae6) clock_nsta_pane

0x9637,	// (0x00035b63) indicator_nsta_pane

0x992e,	// (0x00035e5a) bg_popup_sub_pane_cp2_ParamLimits

0x9942,	// (0x00035e6e) find_pane_cp2_ParamLimits

0x9942,	// (0x00035e6e) find_pane_cp2

0x9958,	// (0x00035e84) grid_toobar_pane_ParamLimits

0x9ab6,	// (0x00035fe2) list_form_gen_pane_vc_ParamLimits

0x9ab6,	// (0x00035fe2) list_form_gen_pane_vc

0x9acc,	// (0x00035ff8) scroll_pane_cp8_vc_ParamLimits

0x9acc,	// (0x00035ff8) scroll_pane_cp8_vc

0x9b48,	// (0x00036074) data_form_wide_pane_vc_ParamLimits

0x9b48,	// (0x00036074) data_form_wide_pane_vc

0x9b54,	// (0x00036080) form_field_data_wide_pane_vc_g1

0x9b5c,	// (0x00036088) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b5c,	// (0x00036088) form_field_data_wide_pane_vc_t1

0x7be8,	// (0x00034114) input_focus_pane_cp6_vc_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_cp6_vc

0x9e42,	// (0x0003636e) list_midp_pane_ParamLimits

0x9e4e,	// (0x0003637a) scroll_pane_cp16_ParamLimits

0x9e4e,	// (0x0003637a) scroll_pane_cp16

0x9e9c,	// (0x000363c8) button_value_adjust_pane_ParamLimits

0x9e9c,	// (0x000363c8) button_value_adjust_pane

0xae47,	// (0x00037373) button_value_adjust_pane_cp6_ParamLimits

0xae47,	// (0x00037373) button_value_adjust_pane_cp6

0xafa1,	// (0x000374cd) settings_code_pane_cp_ParamLimits

0xafa1,	// (0x000374cd) settings_code_pane_cp

0x30d3,	// (0x0002f5ff) cell_touch_pane_g1

0x30d3,	// (0x0002f5ff) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0003bc4b) cell_touch_pane_g

0xb584,	// (0x00037ab0) cell_touch_pane_cp_ParamLimits

0xb584,	// (0x00037ab0) cell_touch_pane_cp

0xb594,	// (0x00037ac0) cell_touch_pane_ParamLimits

0xb594,	// (0x00037ac0) cell_touch_pane

0x30d3,	// (0x0002f5ff) scroll_sc2_down_pane_g1

0x30d3,	// (0x0002f5ff) scroll_sc2_up_pane_g1

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp4_vc

0xb5a5,	// (0x00037ad1) list_set_graphic_pane_vc_g1_ParamLimits

0xb5a5,	// (0x00037ad1) list_set_graphic_pane_vc_g1

0xb5b1,	// (0x00037add) list_set_graphic_pane_vc_g2_ParamLimits

0xb5b1,	// (0x00037add) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0003bf3c) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0003bf3c) list_set_graphic_pane_vc_g

0xb5bd,	// (0x00037ae9) text_primary_small_cp13_vc_ParamLimits

0xb5bd,	// (0x00037ae9) text_primary_small_cp13_vc

0xb5d5,	// (0x00037b01) list_set_graphic_pane_vc_ParamLimits

0xb5d5,	// (0x00037b01) list_set_graphic_pane_vc

0x30dd,	// (0x0002f609) input_focus_pane_cp2_vc

0x30d3,	// (0x0002f5ff) setting_code_pane_vc_g1

0xb5e9,	// (0x00037b15) setting_code_pane_vc_t1

0xb5f7,	// (0x00037b23) set_text_pane_vc_t1_ParamLimits

0xb5f7,	// (0x00037b23) set_text_pane_vc_t1

0x30dd,	// (0x0002f609) input_focus_pane_cp1_vc

0xb615,	// (0x00037b41) list_set_text_pane_vc

0x30d3,	// (0x0002f5ff) setting_text_pane_vc_g1

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp2_vc

0xb61f,	// (0x00037b4b) setting_slider_graphic_pane_vc_g1

0xb627,	// (0x00037b53) setting_slider_graphic_pane_vc_t1

0xb635,	// (0x00037b61) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0003bf41) setting_slider_graphic_pane_vc_t

0xb643,	// (0x00037b6f) slider_set_pane_cp_vc

0xb64b,	// (0x00037b77) slider_set_pane_vc_g1

0xb654,	// (0x00037b80) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0003bf46) slider_set_pane_vc_g

0x7c4f,	// (0x0003417b) set_opt_bg_pane_g1_copy1

0x7c57,	// (0x00034183) set_opt_bg_pane_g2_copy1

0xb680,	// (0x00037bac) set_opt_bg_pane_g3_copy1

0x7c67,	// (0x00034193) set_opt_bg_pane_g4_copy1

0x7c6f,	// (0x0003419b) set_opt_bg_pane_g5_copy1

0x7c77,	// (0x000341a3) set_opt_bg_pane_g6_copy1

0xb68a,	// (0x00037bb6) set_opt_bg_pane_g7_copy1

0xb694,	// (0x00037bc0) set_opt_bg_pane_g8_copy1

0xb69e,	// (0x00037bca) set_opt_bg_pane_g9_copy1

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp_vc

0xb6ea,	// (0x00037c16) setting_slider_pane_vc_t1

0xb627,	// (0x00037b53) setting_slider_pane_vc_t2

0xb635,	// (0x00037b61) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0003bf55) setting_slider_pane_vc_t

0xb643,	// (0x00037b6f) slider_set_pane_vc

0x5e4f,	// (0x0003237b) volume_set_pane_vc_g1

0x5e58,	// (0x00032384) volume_set_pane_vc_g2

0x5e61,	// (0x0003238d) volume_set_pane_vc_g3

0x5e6a,	// (0x00032396) volume_set_pane_vc_g4

0x5e73,	// (0x0003239f) volume_set_pane_vc_g5

0x5e7c,	// (0x000323a8) volume_set_pane_vc_g6

0x5e85,	// (0x000323b1) volume_set_pane_vc_g7

0x5e8e,	// (0x000323ba) volume_set_pane_vc_g8

0x5e97,	// (0x000323c3) volume_set_pane_vc_g9

0x5ea0,	// (0x000323cc) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0003bdf3) volume_set_pane_vc_g

0xb6f9,	// (0x00037c25) volume_set_pane_vc

0xb701,	// (0x00037c2d) button_value_adjust_pane_cp1_vc

0xb70b,	// (0x00037c37) list_highlight_pane_cp2_vc

0xb714,	// (0x00037c40) list_set_pane_vc_ParamLimits

0xb714,	// (0x00037c40) list_set_pane_vc

0xb77e,	// (0x00037caa) main_pane_set_vc_t1_ParamLimits

0xb77e,	// (0x00037caa) main_pane_set_vc_t1

0xb793,	// (0x00037cbf) main_pane_set_vc_t2_ParamLimits

0xb793,	// (0x00037cbf) main_pane_set_vc_t2

0xb7a5,	// (0x00037cd1) main_pane_set_vc_t3_ParamLimits

0xb7a5,	// (0x00037cd1) main_pane_set_vc_t3

0xb7b9,	// (0x00037ce5) main_pane_set_vc_t4_ParamLimits

0xb7b9,	// (0x00037ce5) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0003bf5c) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0003bf5c) main_pane_set_vc_t

0xb7cd,	// (0x00037cf9) setting_code_pane_vc_ParamLimits

0xb7cd,	// (0x00037cf9) setting_code_pane_vc

0xb7de,	// (0x00037d0a) setting_slider_graphic_pane_vc

0xb7de,	// (0x00037d0a) setting_slider_pane_vc

0xb7de,	// (0x00037d0a) setting_text_pane_vc

0xb7de,	// (0x00037d0a) setting_volume_pane_vc

0xb7e8,	// (0x00037d14) scroll_pane_cp121_vc

0x7bc2,	// (0x000340ee) set_content_pane_vc

0xb826,	// (0x00037d52) button_value_adjust_pane_g1

0xb82f,	// (0x00037d5b) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0003bfb6) button_value_adjust_pane_g

0xb838,	// (0x00037d64) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb838,	// (0x00037d64) form_field_slider_wide_pane_vc_t1

0xb84c,	// (0x00037d78) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb84c,	// (0x00037d78) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003bfbb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003bfbb) form_field_slider_wide_pane_vc_t

0x75dd,	// (0x00033b09) input_focus_pane_cp10_vc_ParamLimits

0x75dd,	// (0x00033b09) input_focus_pane_cp10_vc

0xb85e,	// (0x00037d8a) slider_cont_pane_cp1_vc_ParamLimits

0xb85e,	// (0x00037d8a) slider_cont_pane_cp1_vc

0xb64b,	// (0x00037b77) slider_form_pane_g1_cp2

0xb654,	// (0x00037b80) slider_form_pane_g2_cp2

0xb877,	// (0x00037da3) form_field_slider_pane_vc_t3

0xb885,	// (0x00037db1) form_field_slider_pane_vc_t4

0xb893,	// (0x00037dbf) slider_form_pane_vc_ParamLimits

0xb893,	// (0x00037dbf) slider_form_pane_vc

0xb8a0,	// (0x00037dcc) form_field_slider_pane_vc_t1_ParamLimits

0xb8a0,	// (0x00037dcc) form_field_slider_pane_vc_t1

0xb84c,	// (0x00037d78) form_field_slider_pane_vc_t2_ParamLimits

0xb84c,	// (0x00037d78) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003bfcb) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003bfcb) form_field_slider_pane_vc_t

0x75dd,	// (0x00033b09) input_focus_pane_cp9_vc_ParamLimits

0x75dd,	// (0x00033b09) input_focus_pane_cp9_vc

0xb8bc,	// (0x00037de8) slider_cont_pane_vc_ParamLimits

0xb8bc,	// (0x00037de8) slider_cont_pane_vc

0xb8ce,	// (0x00037dfa) list_form_graphic_pane_cp_vc_ParamLimits

0xb8ce,	// (0x00037dfa) list_form_graphic_pane_cp_vc

0x9b54,	// (0x00036080) form_field_popup_wide_pane_vc_g1

0xb8e3,	// (0x00037e0f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8e3,	// (0x00037e0f) form_field_popup_wide_pane_vc_t1

0x7be8,	// (0x00034114) input_focus_pane_cp8_vc_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_cp8_vc

0xb8fa,	// (0x00037e26) list_form_wide_pane_vc_ParamLimits

0xb8fa,	// (0x00037e26) list_form_wide_pane_vc

0xb906,	// (0x00037e32) list_form_graphic_pane_vc_g1

0xb90e,	// (0x00037e3a) list_form_graphic_pane_vc_t1_ParamLimits

0xb90e,	// (0x00037e3a) list_form_graphic_pane_vc_t1

0x7361,	// (0x0003388d) list_highlight_pane_cp5_vc_ParamLimits

0x7361,	// (0x0003388d) list_highlight_pane_cp5_vc

0xb92a,	// (0x00037e56) list_form_graphic_pane_vc_ParamLimits

0xb92a,	// (0x00037e56) list_form_graphic_pane_vc

0x9b54,	// (0x00036080) form_field_popup_pane_vc_g1

0xb940,	// (0x00037e6c) form_field_popup_pane_vc_t1_ParamLimits

0xb940,	// (0x00037e6c) form_field_popup_pane_vc_t1

0x7be8,	// (0x00034114) input_focus_pane_cp7_vc_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_cp7_vc

0xb957,	// (0x00037e83) list_form_pane_vc_ParamLimits

0xb957,	// (0x00037e83) list_form_pane_vc

0xb963,	// (0x00037e8f) data_form_pane_vc_t1_ParamLimits

0xb963,	// (0x00037e8f) data_form_pane_vc_t1

0x7c4f,	// (0x0003417b) input_focus_pane_vc_g1

0x7c57,	// (0x00034183) input_focus_pane_vc_g2

0x7c5f,	// (0x0003418b) input_focus_pane_vc_g3

0x7c67,	// (0x00034193) input_focus_pane_vc_g4

0x7c6f,	// (0x0003419b) input_focus_pane_vc_g5

0x7c77,	// (0x000341a3) input_focus_pane_vc_g6

0x7c7f,	// (0x000341ab) input_focus_pane_vc_g7

0x7c87,	// (0x000341b3) input_focus_pane_vc_g8

0x7c8f,	// (0x000341bb) input_focus_pane_vc_g9

0x30d3,	// (0x0002f5ff) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0003bbd4) input_focus_pane_vc_g

0x9b48,	// (0x00036074) data_form_pane_vc_ParamLimits

0x9b48,	// (0x00036074) data_form_pane_vc

0x9b54,	// (0x00036080) form_field_data_pane_vc_g1

0xb980,	// (0x00037eac) form_field_data_pane_vc_t1_ParamLimits

0xb980,	// (0x00037eac) form_field_data_pane_vc_t1

0x7be8,	// (0x00034114) input_focus_pane_vc_ParamLimits

0x7be8,	// (0x00034114) input_focus_pane_vc

0xb99a,	// (0x00037ec6) button_value_adjust_pane_cp3_vc

0xb9a2,	// (0x00037ece) button_value_adjust_pane_cp5_vc

0xb9aa,	// (0x00037ed6) form_field_data_pane_vc_ParamLimits

0xb9aa,	// (0x00037ed6) form_field_data_pane_vc

0xb9c5,	// (0x00037ef1) form_field_data_pane_vc_cp2

0xb9cd,	// (0x00037ef9) form_field_data_wide_pane_vc_ParamLimits

0xb9cd,	// (0x00037ef9) form_field_data_wide_pane_vc

0xb9e7,	// (0x00037f13) form_field_data_wide_pane_vc_cp2

0xb9ef,	// (0x00037f1b) form_field_popup_pane_vc_ParamLimits

0xb9ef,	// (0x00037f1b) form_field_popup_pane_vc

0xba0a,	// (0x00037f36) form_field_popup_wide_pane_vc_ParamLimits

0xba0a,	// (0x00037f36) form_field_popup_wide_pane_vc

0xba24,	// (0x00037f50) form_field_slider_pane_vc_ParamLimits

0xba24,	// (0x00037f50) form_field_slider_pane_vc

0xba37,	// (0x00037f63) form_field_slider_wide_pane_vc_ParamLimits

0xba37,	// (0x00037f63) form_field_slider_wide_pane_vc

0xba4a,	// (0x00037f76) grid_touch_1_pane_ParamLimits

0xba4a,	// (0x00037f76) grid_touch_1_pane

0xba56,	// (0x00037f82) grid_touch_2_pane_ParamLimits

0xba56,	// (0x00037f82) grid_touch_2_pane

0x8dfb,	// (0x00035327) touch_pane_g1_ParamLimits

0x8dfb,	// (0x00035327) touch_pane_g1

0xba70,	// (0x00037f9c) cell_app_pane_cp_wide_ParamLimits

0xba70,	// (0x00037f9c) cell_app_pane_cp_wide

0xba81,	// (0x00037fad) grid_popup_fast_wide_pane_ParamLimits

0xba81,	// (0x00037fad) grid_popup_fast_wide_pane

0xba95,	// (0x00037fc1) scroll_pane_cp19_ParamLimits

0xba95,	// (0x00037fc1) scroll_pane_cp19

0x30dd,	// (0x0002f609) bg_popup_window_pane_cp20

0xbaa9,	// (0x00037fd5) listscroll_popup_fast_wide_pane

0x7361,	// (0x0003388d) grid_indicator_nsta_pane

0xbab1,	// (0x00037fdd) clock_nsta_pane_g1

0xbaba,	// (0x00037fe6) clock_nsta_pane_t1

0xbad6,	// (0x00038002) cell_indicator_nsta_pane_ParamLimits

0xbad6,	// (0x00038002) cell_indicator_nsta_pane

0xbb0e,	// (0x0003803a) cell_indicator_nsta_pane_g1

0xbb1c,	// (0x00038048) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0003bfd5) cell_indicator_nsta_pane_g

0xbb31,	// (0x0003805d) clock_nsta_pane_cp

0xbb39,	// (0x00038065) indicator_nsta_pane_cp

0xbb41,	// (0x0003806d) nsta_clock_indic_pane_g1

0x742d,	// (0x00033959) grid_indicator_pane

0x8478,	// (0x000349a4) scroll_pane_cp29

0x592a,	// (0x00031e56) indicator_nsta_pane_cp2_ParamLimits

0x592a,	// (0x00031e56) indicator_nsta_pane_cp2

0x7361,	// (0x0003388d) main_apps_wheel_pane

0x9d1f,	// (0x0003624b) form_midp_field_text_pane_ParamLimits

0x9e6e,	// (0x0003639a) scroll_bar_cp050_ParamLimits

0xbbaa,	// (0x000380d6) cell_indicator_pane_ParamLimits

0xbbaa,	// (0x000380d6) cell_indicator_pane

0xbbc2,	// (0x000380ee) cell_indicator_pane_g1

0xbbcc,	// (0x000380f8) grid_wheel_folder_pane_ParamLimits

0xbbcc,	// (0x000380f8) grid_wheel_folder_pane

0xbbe0,	// (0x0003810c) list_wheel_apps_pane_ParamLimits

0xbbe0,	// (0x0003810c) list_wheel_apps_pane

0xbbf3,	// (0x0003811f) main_apps_wheel_pane_g1_ParamLimits

0xbbf3,	// (0x0003811f) main_apps_wheel_pane_g1

0xbc0f,	// (0x0003813b) main_apps_wheel_pane_g2_ParamLimits

0xbc0f,	// (0x0003813b) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003bff1) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003bff1) main_apps_wheel_pane_g

0xbc2b,	// (0x00038157) main_apps_wheel_pane_t1_ParamLimits

0xbc2b,	// (0x00038157) main_apps_wheel_pane_t1

0xbc54,	// (0x00038180) list_wheel_apps_pane_g1

0xbc5c,	// (0x00038188) list_wheel_apps_pane_g2

0xbc64,	// (0x00038190) list_wheel_apps_pane_g3

0xbc6c,	// (0x00038198) list_wheel_apps_pane_g4

0xbc76,	// (0x000381a2) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0003bff6) list_wheel_apps_pane_g

0x89aa,	// (0x00034ed6) navi_icon_text_pane

0x94e7,	// (0x00035a13) aid_fill_nsta

0xbc97,	// (0x000381c3) navi_icon_text_pane_g1

0xbca6,	// (0x000381d2) navi_icon_text_pane_t1

0x8840,	// (0x00034d6c) list_set_graphic_pane_t1_ParamLimits

0x8840,	// (0x00034d6c) list_set_graphic_pane_t1

0xa5bf,	// (0x00036aeb) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bf,	// (0x00036aeb) popup_midp_note_alarm_window_t6

0xa5d1,	// (0x00036afd) popup_midp_note_alarm_window_t7_ParamLimits

0xa5d1,	// (0x00036afd) popup_midp_note_alarm_window_t7

0xa5e3,	// (0x00036b0f) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e3,	// (0x00036b0f) popup_midp_note_alarm_window_t8

0xa5f5,	// (0x00036b21) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f5,	// (0x00036b21) popup_midp_note_alarm_window_t9

0xa607,	// (0x00036b33) popup_midp_note_alarm_window_t10_ParamLimits

0xa607,	// (0x00036b33) popup_midp_note_alarm_window_t10

0xa619,	// (0x00036b45) popup_midp_note_alarm_window_t11_ParamLimits

0xa619,	// (0x00036b45) popup_midp_note_alarm_window_t11

0xa62b,	// (0x00036b57) scroll_pane_cp17_ParamLimits

0xa62b,	// (0x00036b57) scroll_pane_cp17

0x5e4f,	// (0x0003237b) volume_small_pane_cp_g1

0x6454,	// (0x00032980) volume_small_pane_cp_g2

0x645d,	// (0x00032989) volume_small_pane_cp_g3

0x6466,	// (0x00032992) volume_small_pane_cp_g4

0x646f,	// (0x0003299b) volume_small_pane_cp_g5

0x6478,	// (0x000329a4) volume_small_pane_cp_g6

0x6481,	// (0x000329ad) volume_small_pane_cp_g7

0x648a,	// (0x000329b6) volume_small_pane_cp_g8

0x6493,	// (0x000329bf) volume_small_pane_cp_g9

0x649c,	// (0x000329c8) volume_small_pane_cp_g10

0x8c0b,	// (0x00035137) midp_ticker_pane_g1_ParamLimits

0x8c17,	// (0x00035143) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0003bc9c) midp_ticker_pane_g_ParamLimits

0x8c23,	// (0x0003514f) midp_ticker_pane_t1_ParamLimits

0x94fd,	// (0x00035a29) aid_fill_nsta_2

0x9e5a,	// (0x00036386) list_form2_midp_pane

0xafe8,	// (0x00037514) midp_editing_number_pane_ParamLimits

0xaff7,	// (0x00037523) midp_ticker_pane_ParamLimits

0xbcbb,	// (0x000381e7) form2_midp_field_pane

0xbcdf,	// (0x0003820b) scroll_pane_cp51

0xbcff,	// (0x0003822b) form2_midp_button_pane_ParamLimits

0xbcff,	// (0x0003822b) form2_midp_button_pane

0xbd11,	// (0x0003823d) form2_midp_content_pane_ParamLimits

0xbd11,	// (0x0003823d) form2_midp_content_pane

0xbd2b,	// (0x00038257) form2_midp_field_choice_group_pane

0xbd33,	// (0x0003825f) form2_midp_field_pane_g1

0xbd3b,	// (0x00038267) form2_midp_field_pane_g2

0xbd43,	// (0x0003826f) form2_midp_field_pane_g3

0xbd4b,	// (0x00038277) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0003c01b) form2_midp_field_pane_g

0xbd53,	// (0x0003827f) form2_midp_gauge_slider_pane

0xbd5b,	// (0x00038287) form2_midp_gauge_wait_pane

0xbd63,	// (0x0003828f) form2_midp_image_pane_ParamLimits

0xbd63,	// (0x0003828f) form2_midp_image_pane

0xbd7e,	// (0x000382aa) form2_midp_label_pane_ParamLimits

0xbd7e,	// (0x000382aa) form2_midp_label_pane

0xbd9d,	// (0x000382c9) form2_midp_label_pane_cp_ParamLimits

0xbd9d,	// (0x000382c9) form2_midp_label_pane_cp

0xbdbe,	// (0x000382ea) form2_midp_string_pane_ParamLimits

0xbdbe,	// (0x000382ea) form2_midp_string_pane

0x64a5,	// (0x000329d1) form2_midp_text_pane_ParamLimits

0x64a5,	// (0x000329d1) form2_midp_text_pane

0xbdd0,	// (0x000382fc) form2_midp_time_pane

0xbde0,	// (0x0003830c) input_focus_pane_cp51_ParamLimits

0xbde0,	// (0x0003830c) input_focus_pane_cp51

0xbdf8,	// (0x00038324) form2_midp_label_pane_t1_ParamLimits

0xbdf8,	// (0x00038324) form2_midp_label_pane_t1

0x64c6,	// (0x000329f2) form2_mdip_text_pane_t1_ParamLimits

0x64c6,	// (0x000329f2) form2_mdip_text_pane_t1

0x64ea,	// (0x00032a16) form2_midp_time_pane_t1

0xbe46,	// (0x00038372) form2_midp_gauge_slider_pane_t1

0xbe58,	// (0x00038384) form2_midp_gauge_slider_pane_t2

0xbe6a,	// (0x00038396) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0003c024) form2_midp_gauge_slider_pane_t

0xbe7c,	// (0x000383a8) form2_midp_slider_pane

0xbe88,	// (0x000383b4) form2_midp_gauge_wait_pane_t1

0xbe96,	// (0x000383c2) form2_midp_wait_pane_ParamLimits

0xbe96,	// (0x000383c2) form2_midp_wait_pane

0x9b73,	// (0x0003609f) list_single_2graphic_pane_cp4_ParamLimits

0x9b73,	// (0x0003609f) list_single_2graphic_pane_cp4

0xbec1,	// (0x000383ed) list_single_midp_graphic_pane_cp_ParamLimits

0xbec1,	// (0x000383ed) list_single_midp_graphic_pane_cp

0x30dd,	// (0x0002f609) list_highlight_pane_cp20

0xbee5,	// (0x00038411) list_single_2graphic_pane_g1_cp4

0xb487,	// (0x000379b3) list_single_2graphic_pane_g2_cp4

0xbeed,	// (0x00038419) list_single_2graphic_pane_t1_cp4

0x7361,	// (0x0003388d) list_highlight_pane_cp21

0xbefc,	// (0x00038428) list_single_midp_graphic_pane_g4_cp

0xbf0b,	// (0x00038437) list_single_midp_graphic_pane_t1_cp

0xbf20,	// (0x0003844c) form2_mdip_string_pane_t1_ParamLimits

0xbf20,	// (0x0003844c) form2_mdip_string_pane_t1

0x30dd,	// (0x0002f609) bg_wml_button_pane_cp2

0x30d3,	// (0x0002f5ff) form2_midp_image_pane_g1

0x400c,	// (0x00030538) list_double_large_graphic_pane_g5_ParamLimits

0x400c,	// (0x00030538) list_double_large_graphic_pane_g5

0x8b36,	// (0x00035062) midp_form_pane_ParamLimits

0x7361,	// (0x0003388d) main_apps_wheel_pane_ParamLimits

0x9291,	// (0x000357bd) popup_preview_window_ParamLimits

0x9291,	// (0x000357bd) popup_preview_window

0x9478,	// (0x000359a4) popup_touch_info_window_ParamLimits

0x9478,	// (0x000359a4) popup_touch_info_window

0x949a,	// (0x000359c6) popup_touch_menu_window_ParamLimits

0x949a,	// (0x000359c6) popup_touch_menu_window

0x30c9,	// (0x0002f5f5) bg_popup_sub_pane_cp6

0xbfc5,	// (0x000384f1) list_touch_menu_pane

0xbfcd,	// (0x000384f9) list_single_touch_menu_pane_ParamLimits

0xbfcd,	// (0x000384f9) list_single_touch_menu_pane

0xbfe8,	// (0x00038514) list_single_touch_menu_pane_t1

0x7361,	// (0x0003388d) bg_popup_sub_pane_cp7_ParamLimits

0x7361,	// (0x0003388d) bg_popup_sub_pane_cp7

0xbff6,	// (0x00038522) heading_sub_pane

0xbffe,	// (0x0003852a) list_touch_info_pane_ParamLimits

0xbffe,	// (0x0003852a) list_touch_info_pane

0xc00d,	// (0x00038539) list_single_touch_info_pane_ParamLimits

0xc00d,	// (0x00038539) list_single_touch_info_pane

0xc01f,	// (0x0003854b) list_single_touch_info_pane_t1

0xc02d,	// (0x00038559) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0003c032) list_single_touch_info_pane_t

0x8b2e,	// (0x0003505a) bg_popup_heading_pane_cp

0xc03b,	// (0x00038567) heading_sub_pane_t1

0x9ae2,	// (0x0003600e) bg_popup_preview_window_pane_cp_ParamLimits

0x9ae2,	// (0x0003600e) bg_popup_preview_window_pane_cp

0xbff6,	// (0x00038522) heading_preview_pane

0xbffe,	// (0x0003852a) list_preview_pane_ParamLimits

0xbffe,	// (0x0003852a) list_preview_pane

0xc049,	// (0x00038575) popup_preview_window_g1

0xc00d,	// (0x00038539) list_single_preview_pane_ParamLimits

0xc00d,	// (0x00038539) list_single_preview_pane

0xc051,	// (0x0003857d) list_single_preview_pane_g1

0xc059,	// (0x00038585) list_single_preview_pane_t1

0xc01f,	// (0x0003854b) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0003c037) list_single_preview_pane_t

0xc067,	// (0x00038593) bg_popup_heading_pane_cp2_ParamLimits

0xc067,	// (0x00038593) bg_popup_heading_pane_cp2

0xc07d,	// (0x000385a9) heading_preview_pane_g1

0xc085,	// (0x000385b1) heading_preview_pane_t1_ParamLimits

0xc085,	// (0x000385b1) heading_preview_pane_t1

0x7450,	// (0x0003397c) soft_indicator_pane_t1_ParamLimits

0x7b5b,	// (0x00034087) scroll_pane_ParamLimits

0x8374,	// (0x000348a0) scroll_sc2_left_pane

0x837d,	// (0x000348a9) scroll_sc2_right_pane

0x839c,	// (0x000348c8) scroll_bg_pane_g1_ParamLimits

0x83b1,	// (0x000348dd) scroll_bg_pane_g2_ParamLimits

0x83c9,	// (0x000348f5) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0003bc2b) scroll_bg_pane_g_ParamLimits

0x839c,	// (0x000348c8) scroll_handle_pane_g1_ParamLimits

0x83eb,	// (0x00034917) scroll_handle_pane_g2_ParamLimits

0x83c9,	// (0x000348f5) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0003bc32) scroll_handle_pane_g_ParamLimits

0x8edc,	// (0x00035408) popup_choice_list_window_ParamLimits

0x8edc,	// (0x00035408) popup_choice_list_window

0x993a,	// (0x00035e66) choice_list_pane

0x99bc,	// (0x00035ee8) cell_toolbar_pane_t1

0x99e4,	// (0x00035f10) toolbar_button_pane_ParamLimits

0xaafb,	// (0x00037027) ai_gene_pane_1_t2_ParamLimits

0xaafb,	// (0x00037027) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0003be4f) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0003be4f) ai_gene_pane_1_t

0xc0a2,	// (0x000385ce) scroll_sc2_left_pane_g1

0xc0a2,	// (0x000385ce) scroll_sc2_right_pane_g1

0x8eb4,	// (0x000353e0) bg_popup_sub_pane_cp10

0xc0ac,	// (0x000385d8) list_choice_list_pane

0xc0c3,	// (0x000385ef) list_single_choice_list_pane_ParamLimits

0xc0c3,	// (0x000385ef) list_single_choice_list_pane

0xc0d7,	// (0x00038603) list_single_choice_list_pane_g1

0xc0df,	// (0x0003860b) list_single_choice_list_pane_t1_ParamLimits

0xc0df,	// (0x0003860b) list_single_choice_list_pane_t1

0xc0f4,	// (0x00038620) choice_list_pane_g1

0xc0fc,	// (0x00038628) choice_list_pane_t1

0x30c9,	// (0x0002f5f5) input_focus_pane_cp11

0x824e,	// (0x0003477a) title_pane_stacon_g2_ParamLimits

0x824e,	// (0x0003477a) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0003bc11) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003bc11) title_pane_stacon_g

0x8b2e,	// (0x0003505a) cursor_press_pane

0x8f92,	// (0x000354be) popup_fep_hwr_window_ParamLimits

0x8f92,	// (0x000354be) popup_fep_hwr_window

0x901c,	// (0x00035548) popup_fep_vkb_window_ParamLimits

0x901c,	// (0x00035548) popup_fep_vkb_window

0xc10a,	// (0x00038636) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0003c060) fep_vkb_side_pane_g_ParamLimits

0x6536,	// (0x00032a62) fep_hwr_candidate_pane_ParamLimits

0x6536,	// (0x00032a62) fep_hwr_candidate_pane

0x6560,	// (0x00032a8c) fep_hwr_side_pane_ParamLimits

0x6560,	// (0x00032a8c) fep_hwr_side_pane

0x6582,	// (0x00032aae) fep_hwr_top_pane_ParamLimits

0x6582,	// (0x00032aae) fep_hwr_top_pane

0x659a,	// (0x00032ac6) fep_hwr_write_pane_ParamLimits

0x659a,	// (0x00032ac6) fep_hwr_write_pane

0xfb34,	// (0x0003c060) fep_vkb_side_pane_g

0xc112,	// (0x0003863e) fep_hwr_top_pane_g1

0xc124,	// (0x00038650) fep_hwr_top_pane_g2

0x65d4,	// (0x00032b00) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0003c03c) fep_hwr_top_pane_g

0x65e9,	// (0x00032b15) fep_hwr_top_text_pane

0x8540,	// (0x00034a6c) fep_hwr_top_text_pane_g1

0xc15a,	// (0x00038686) fep_hwr_top_text_pane_t1

0x66f3,	// (0x00032c1f) fep_hwr_candidate_pane_g1

0xc3a5,	// (0x000388d1) fep_vkb_keypad_pane_g3_ParamLimits

0xc3a5,	// (0x000388d1) fep_vkb_keypad_pane_g3

0xc3d1,	// (0x000388fd) fep_vkb_keypad_pane_g4_ParamLimits

0xc3d1,	// (0x000388fd) fep_vkb_keypad_pane_g4

0xc448,	// (0x00038974) fep_vkb_bottom_pane_g2_ParamLimits

0xc448,	// (0x00038974) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0003c067) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0003c067) fep_vkb_bottom_pane_g

0xc0a2,	// (0x000385ce) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0003c071) cell_vkb_side_pane_g

0xc4d3,	// (0x000389ff) cell_vkb_side_pane_t1

0xc4e1,	// (0x00038a0d) cell_vkb_side_pane_t1_copy1

0xc0a2,	// (0x000385ce) bg_fep_vkb_candidate_pane_g2

0xc625,	// (0x00038b51) cell_vkb_candidate_pane_ParamLimits

0xc168,	// (0x00038694) aid_size_cell_vkb_ParamLimits

0xc168,	// (0x00038694) aid_size_cell_vkb

0xc625,	// (0x00038b51) cell_vkb_candidate_pane

0x671a,	// (0x00032c46) bg_popup_fep_shadow_pane_g1

0xc1fa,	// (0x00038726) fep_vkb_bottom_pane_ParamLimits

0xc1fa,	// (0x00038726) fep_vkb_bottom_pane

0xc237,	// (0x00038763) fep_vkb_candidate_pane_ParamLimits

0xc237,	// (0x00038763) fep_vkb_candidate_pane

0xc253,	// (0x0003877f) fep_vkb_keypad_pane_ParamLimits

0xc253,	// (0x0003877f) fep_vkb_keypad_pane

0xc286,	// (0x000387b2) fep_vkb_side_pane_ParamLimits

0xc286,	// (0x000387b2) fep_vkb_side_pane

0xc2c2,	// (0x000387ee) fep_vkb_top_pane_ParamLimits

0xc2c2,	// (0x000387ee) fep_vkb_top_pane

0xc2fe,	// (0x0003882a) fep_vkb_top_pane_g1_ParamLimits

0xc2fe,	// (0x0003882a) fep_vkb_top_pane_g1

0xc30d,	// (0x00038839) fep_vkb_top_pane_g2_ParamLimits

0xc30d,	// (0x00038839) fep_vkb_top_pane_g2

0xc31c,	// (0x00038848) fep_vkb_top_pane_g3_ParamLimits

0xc31c,	// (0x00038848) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0003c057) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0003c057) fep_vkb_top_pane_g

0xc33a,	// (0x00038866) fep_vkb_top_text_pane_ParamLimits

0xc33a,	// (0x00038866) fep_vkb_top_text_pane

0xc34b,	// (0x00038877) fep_vkb_side_pane_g1_ParamLimits

0xc34b,	// (0x00038877) fep_vkb_side_pane_g1

0xc394,	// (0x000388c0) grid_vkb_side_pane_ParamLimits

0xc394,	// (0x000388c0) grid_vkb_side_pane

0x6722,	// (0x00032c4e) bg_popup_fep_shadow_pane_g2

0x672b,	// (0x00032c57) bg_popup_fep_shadow_pane_g3

0x6733,	// (0x00032c5f) bg_popup_fep_shadow_pane_g4

0x673c,	// (0x00032c68) bg_popup_fep_shadow_pane_g5

0x6746,	// (0x00032c72) bg_popup_fep_shadow_pane_g6

0x674e,	// (0x00032c7a) bg_popup_fep_shadow_pane_g7

0x7c67,	// (0x00034193) bg_popup_fep_shadow_pane_g8

0xc3f3,	// (0x0003891f) grid_vkb_keypad_number_pane_ParamLimits

0xc3f3,	// (0x0003891f) grid_vkb_keypad_number_pane

0xc407,	// (0x00038933) grid_vkb_keypad_pane_ParamLimits

0xc407,	// (0x00038933) grid_vkb_keypad_pane

0xc42d,	// (0x00038959) fep_vkb_bottom_pane_g1_ParamLimits

0xc42d,	// (0x00038959) fep_vkb_bottom_pane_g1

0xc456,	// (0x00038982) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc456,	// (0x00038982) grid_vkb_keypad_bottom_left_pane

0xc46b,	// (0x00038997) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc46b,	// (0x00038997) grid_vkb_keypad_bottom_right_pane

0xc480,	// (0x000389ac) fep_vkb_top_text_pane_g1

0xc49b,	// (0x000389c7) fep_vkb_top_text_pane_t1

0xc4b0,	// (0x000389dc) cell_vkb_side_pane_ParamLimits

0xc4b0,	// (0x000389dc) cell_vkb_side_pane

0xc0a2,	// (0x000385ce) cell_vkb_side_pane_g1

0xc4ef,	// (0x00038a1b) cell_vkb_keypad_pane_ParamLimits

0xc4ef,	// (0x00038a1b) cell_vkb_keypad_pane

0xc57c,	// (0x00038aa8) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0003c084) bg_popup_fep_shadow_pane_g

0x6760,	// (0x00032c8c) cell_hwr_side_pane_g1

0x6760,	// (0x00032c8c) cell_hwr_side_pane_g2

0xc586,	// (0x00038ab2) cell_vkb_keypad_pane_t1

0xc594,	// (0x00038ac0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc594,	// (0x00038ac0) cell_vkb_keypad_bottom_left_pane

0xc5b1,	// (0x00038add) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b1,	// (0x00038add) cell_vkb_keypad_bottom_right_pane

0xc0a2,	// (0x000385ce) cell_vkb_keypad_bottom_left_pane_g1

0xc0a2,	// (0x000385ce) cell_vkb_keypad_bottom_right_pane_g1

0xc5ea,	// (0x00038b16) cell_vkb_keypad_number_pane_ParamLimits

0xc5ea,	// (0x00038b16) cell_vkb_keypad_number_pane

0xc609,	// (0x00038b35) cell_vkb_keypad_number_pane_g1

0xc613,	// (0x00038b3f) cell_vkb_keypad_number_pane_g2

0xc61c,	// (0x00038b48) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0003c076) cell_vkb_keypad_number_pane_g

0xc586,	// (0x00038ab2) cell_vkb_keypad_number_pane_t1

0xc646,	// (0x00038b72) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0003c097) cell_hwr_side_pane_g

0xc65f,	// (0x00038b8b) cell_hwr_side_pane_t1

0x676a,	// (0x00032c96) cell_hwr_side_pane_t1_copy1

0x6778,	// (0x00032ca4) cell_hwr_candidate_pane_g1

0x67a7,	// (0x00032cd3) cell_hwr_candidate_pane_t1

0xc0a2,	// (0x000385ce) cell_vkb_candidate_pane_g2

0xc6a3,	// (0x00038bcf) cell_vkb_candidate_pane_t1

0x64fd,	// (0x00032a29) bg_popup_fep_shadow_pane_ParamLimits

0x64fd,	// (0x00032a29) bg_popup_fep_shadow_pane

0x65b4,	// (0x00032ae0) bg_fep_hwr_top_pane_g4

0xc136,	// (0x00038662) bg_hwr_side_pane_g1_ParamLimits

0xc136,	// (0x00038662) bg_hwr_side_pane_g1

0x6627,	// (0x00032b53) cell_hwr_side_pane_ParamLimits

0x6627,	// (0x00032b53) cell_hwr_side_pane

0x6664,	// (0x00032b90) fep_hwr_write_pane_g1_ParamLimits

0x6664,	// (0x00032b90) fep_hwr_write_pane_g1

0x6671,	// (0x00032b9d) fep_hwr_write_pane_g2_ParamLimits

0x6671,	// (0x00032b9d) fep_hwr_write_pane_g2

0x667e,	// (0x00032baa) fep_hwr_write_pane_g3_ParamLimits

0x667e,	// (0x00032baa) fep_hwr_write_pane_g3

0x668c,	// (0x00032bb8) fep_hwr_write_pane_g4_ParamLimits

0x668c,	// (0x00032bb8) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0003c043) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0003c043) fep_hwr_write_pane_g

0x65b4,	// (0x00032ae0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65b4,	// (0x00032ae0) bg_fep_hwr_candidate_pane_g2

0x66a1,	// (0x00032bcd) cell_hwr_candidate_pane_ParamLimits

0x66a1,	// (0x00032bcd) cell_hwr_candidate_pane

0x66f3,	// (0x00032c1f) fep_hwr_candidate_pane_g1_ParamLimits

0xc196,	// (0x000386c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc196,	// (0x000386c2) bg_popup_fep_shadow_pane_cp2

0xc32c,	// (0x00038858) fep_vkb_top_pane_g4_ParamLimits

0xc32c,	// (0x00038858) fep_vkb_top_pane_g4

0xc372,	// (0x0003889e) fep_vkb_side_pane_g2_ParamLimits

0xc372,	// (0x0003889e) fep_vkb_side_pane_g2

0x52a8,	// (0x000317d4) list_setting_pane_t4_ParamLimits

0x52a8,	// (0x000317d4) list_setting_pane_t4

0x5344,	// (0x00031870) list_setting_number_pane_t5_ParamLimits

0x5344,	// (0x00031870) list_setting_number_pane_t5

0x8582,	// (0x00034aae) list_double_heading_pane_cp2_ParamLimits

0x8582,	// (0x00034aae) list_double_heading_pane_cp2

0x7c02,	// (0x0003412e) list_double_heading_pane_g1_cp2_ParamLimits

0x7c02,	// (0x0003412e) list_double_heading_pane_g1_cp2

0x7c0e,	// (0x0003413a) list_double_heading_pane_g2_cp2_ParamLimits

0x7c0e,	// (0x0003413a) list_double_heading_pane_g2_cp2

0xc6b1,	// (0x00038bdd) list_double_heading_pane_t1_cp2_ParamLimits

0xc6b1,	// (0x00038bdd) list_double_heading_pane_t1_cp2

0xc6c7,	// (0x00038bf3) list_double_heading_pane_t2_cp2_ParamLimits

0xc6c7,	// (0x00038bf3) list_double_heading_pane_t2_cp2

0x30c1,	// (0x0002f5ed) aid_value_unit2

0x4d19,	// (0x00031245) popup_preview_fixed_window

0x75eb,	// (0x00033b17) bg_popup_preview_window_pane_cp02

0xc6d9,	// (0x00038c05) list_preview_fixed_pane

0xc71f,	// (0x00038c4b) list_empty_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_empty_pane_fp

0xc71f,	// (0x00038c4b) list_single_cale_day_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_cale_day_pane_fp

0xc71f,	// (0x00038c4b) list_single_graphic_heading_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_graphic_heading_pane_fp

0xc71f,	// (0x00038c4b) list_single_graphic_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_graphic_pane_fp

0xc71f,	// (0x00038c4b) list_single_heading_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_heading_pane_fp

0xc71f,	// (0x00038c4b) list_single_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_pane_fp

0xc738,	// (0x00038c64) list_single_pane_fp_g1_ParamLimits

0xc738,	// (0x00038c64) list_single_pane_fp_g1

0x67c5,	// (0x00032cf1) list_single_pane_fp_g2_ParamLimits

0x67c5,	// (0x00032cf1) list_single_pane_fp_g2

0x67d1,	// (0x00032cfd) list_single_pane_fp_g3_ParamLimits

0x67d1,	// (0x00032cfd) list_single_pane_fp_g3

0xc744,	// (0x00038c70) list_single_pane_fp_g4_ParamLimits

0xc744,	// (0x00038c70) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0003c0aa) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003c0aa) list_single_pane_fp_g

0x67e5,	// (0x00032d11) list_single_pane_fp_t1_ParamLimits

0x67e5,	// (0x00032d11) list_single_pane_fp_t1

0x67fc,	// (0x00032d28) list_single_graphic_pane_fp_g1_ParamLimits

0x67fc,	// (0x00032d28) list_single_graphic_pane_fp_g1

0xc738,	// (0x00038c64) list_single_graphic_pane_fp_g2_ParamLimits

0xc738,	// (0x00038c64) list_single_graphic_pane_fp_g2

0x67c5,	// (0x00032cf1) list_single_graphic_pane_fp_g3_ParamLimits

0x67c5,	// (0x00032cf1) list_single_graphic_pane_fp_g3

0x67d1,	// (0x00032cfd) list_single_graphic_pane_fp_g4_ParamLimits

0x67d1,	// (0x00032cfd) list_single_graphic_pane_fp_g4

0xc744,	// (0x00038c70) list_single_graphic_pane_fp_g5_ParamLimits

0xc744,	// (0x00038c70) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c0b3) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c0b3) list_single_graphic_pane_fp_g

0x6808,	// (0x00032d34) list_single_graphic_pane_fp_t1_ParamLimits

0x6808,	// (0x00032d34) list_single_graphic_pane_fp_t1

0x67fc,	// (0x00032d28) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67fc,	// (0x00032d28) list_single_graphic_heading_pane_fp_g1

0xc738,	// (0x00038c64) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc738,	// (0x00038c64) list_single_graphic_heading_pane_fp_g2

0x67c5,	// (0x00032cf1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x67c5,	// (0x00032cf1) list_single_graphic_heading_pane_fp_g3

0x67d1,	// (0x00032cfd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x67d1,	// (0x00032cfd) list_single_graphic_heading_pane_fp_g4

0xc744,	// (0x00038c70) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc744,	// (0x00038c70) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c0b3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c0b3) list_single_graphic_heading_pane_fp_g

0x681e,	// (0x00032d4a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x681e,	// (0x00032d4a) list_single_graphic_heading_pane_fp_t1

0x6834,	// (0x00032d60) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6834,	// (0x00032d60) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003c0be) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003c0be) list_single_graphic_heading_pane_fp_t

0x6846,	// (0x00032d72) list_single_cale_day_pane_fp_g1_ParamLimits

0x6846,	// (0x00032d72) list_single_cale_day_pane_fp_g1

0xc750,	// (0x00038c7c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc750,	// (0x00038c7c) list_single_cale_day_pane_fp_g2

0x7d51,	// (0x0003427d) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d51,	// (0x0003427d) list_single_cale_day_pane_fp_g3

0x7d79,	// (0x000342a5) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d79,	// (0x000342a5) list_single_cale_day_pane_fp_g4

0x7d9d,	// (0x000342c9) list_single_cale_day_pane_fp_g5_ParamLimits

0x7d9d,	// (0x000342c9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003c0c3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003c0c3) list_single_cale_day_pane_fp_g

0x7dc1,	// (0x000342ed) list_single_cale_day_pane_fp_t1_ParamLimits

0x7dc1,	// (0x000342ed) list_single_cale_day_pane_fp_t1

0x7de7,	// (0x00034313) list_single_cale_day_pane_fp_t2_ParamLimits

0x7de7,	// (0x00034313) list_single_cale_day_pane_fp_t2

0x7e00,	// (0x0003432c) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e00,	// (0x0003432c) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003c0ce) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003c0ce) list_single_cale_day_pane_fp_t

0xc738,	// (0x00038c64) list_empty_pane_fp_g1_ParamLimits

0xc738,	// (0x00038c64) list_empty_pane_fp_g1

0x7e19,	// (0x00034345) list_empty_pane_fp_t1

0x7e27,	// (0x00034353) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0003c0d5) list_empty_pane_fp_t

0xc738,	// (0x00038c64) list_single_heading_pane_fp_g1_ParamLimits

0xc738,	// (0x00038c64) list_single_heading_pane_fp_g1

0x67c5,	// (0x00032cf1) list_single_heading_pane_fp_g2_ParamLimits

0x67c5,	// (0x00032cf1) list_single_heading_pane_fp_g2

0x67d1,	// (0x00032cfd) list_single_heading_pane_fp_g3_ParamLimits

0x67d1,	// (0x00032cfd) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0003c0da) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0003c0da) list_single_heading_pane_fp_g

0x7e35,	// (0x00034361) list_single_heading_pane_fp_t1_ParamLimits

0x7e35,	// (0x00034361) list_single_heading_pane_fp_t1

0x7e47,	// (0x00034373) list_single_heading_pane_fp_t2_ParamLimits

0x7e47,	// (0x00034373) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003c0e1) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003c0e1) list_single_heading_pane_fp_t

0x80e5,	// (0x00034611) aid_size_cell_fast

0x755d,	// (0x00033a89) soft_indicator_pane_cp1_t1

0x8122,	// (0x0003464e) cell_app_pane_cp2_ParamLimits

0x8122,	// (0x0003464e) cell_app_pane_cp2

0x651f,	// (0x00032a4b) fep_hwr_candidate_drop_down_list_pane

0x670d,	// (0x00032c39) fep_hwr_candidate_pane_g3_ParamLimits

0x670d,	// (0x00032c39) fep_hwr_candidate_pane_g3

0x30b4,	// (0x0002f5e0) fep_hwr_candidate_pane_g4_ParamLimits

0x30b4,	// (0x0002f5e0) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0003c050) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0003c050) fep_hwr_candidate_pane_g

0xc226,	// (0x00038752) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc226,	// (0x00038752) fep_vkb_candidate_drop_down_list_pane

0xc64e,	// (0x00038b7a) fep_vkb_candidate_pane_g3

0xc656,	// (0x00038b82) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0003c07d) fep_vkb_candidate_pane_g

0x6778,	// (0x00032ca4) cell_hwr_candidate_pane_g1_ParamLimits

0x6786,	// (0x00032cb2) cell_hwr_candidate_pane_g3_ParamLimits

0x6786,	// (0x00032cb2) cell_hwr_candidate_pane_g3

0xe00b,	// (0x0003a537) cell_hwr_candidate_pane_g4_ParamLimits

0xe00b,	// (0x0003a537) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003c09c) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0003c09c) cell_hwr_candidate_pane_g

0xc66d,	// (0x00038b99) cell_vkb_candidate_pane_g3_ParamLimits

0xc66d,	// (0x00038b99) cell_vkb_candidate_pane_g3

0xc688,	// (0x00038bb4) cell_vkb_candidate_pane_g4_ParamLimits

0xc688,	// (0x00038bb4) cell_vkb_candidate_pane_g4

0xc75c,	// (0x00038c88) cell_app_pane_cp2_g1_ParamLimits

0xc75c,	// (0x00038c88) cell_app_pane_cp2_g1

0xc77a,	// (0x00038ca6) cell_app_pane_cp2_g2_ParamLimits

0xc77a,	// (0x00038ca6) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0003c0e6) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0003c0e6) cell_app_pane_cp2_g

0xc786,	// (0x00038cb2) cell_app_pane_cp2_t1_ParamLimits

0xc786,	// (0x00038cb2) cell_app_pane_cp2_t1

0x7be8,	// (0x00034114) grid_highlight_pane_cp1_ParamLimits

0x7be8,	// (0x00034114) grid_highlight_pane_cp1

0x687e,	// (0x00032daa) cell_hwr_candidate_pane_cp1_ParamLimits

0x687e,	// (0x00032daa) cell_hwr_candidate_pane_cp1

0x6778,	// (0x00032ca4) fep_hwr_candidate_drop_down_list_pane_g1

0x68a2,	// (0x00032dce) fep_hwr_candidate_drop_down_list_pane_g2

0x68af,	// (0x00032ddb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0003c0eb) fep_hwr_candidate_drop_down_list_pane_g

0x68bc,	// (0x00032de8) fep_hwr_candidate_drop_down_list_scroll_pane

0x68c5,	// (0x00032df1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x68c5,	// (0x00032df1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x68d2,	// (0x00032dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68d2,	// (0x00032dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x68df,	// (0x00032e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68df,	// (0x00032e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68ec,	// (0x00032e18) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68ec,	// (0x00032e18) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6907,	// (0x00032e33) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6907,	// (0x00032e33) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6922,	// (0x00032e4e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6922,	// (0x00032e4e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x693d,	// (0x00032e69) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x693d,	// (0x00032e69) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6958,	// (0x00032e84) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6958,	// (0x00032e84) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003c0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003c0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc798,	// (0x00038cc4) cell_vkb_candidate_pane_cp1_ParamLimits

0xc798,	// (0x00038cc4) cell_vkb_candidate_pane_cp1

0xc32c,	// (0x00038858) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc32c,	// (0x00038858) fep_vkb_candidate_drop_down_list_pane_g1

0xc7be,	// (0x00038cea) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7be,	// (0x00038cea) fep_vkb_candidate_drop_down_list_pane_g2

0xc7cb,	// (0x00038cf7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7cb,	// (0x00038cf7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003c103) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003c103) fep_vkb_candidate_drop_down_list_pane_g

0xc7d8,	// (0x00038d04) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7d8,	// (0x00038d04) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7e5,	// (0x00038d11) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7e5,	// (0x00038d11) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7f2,	// (0x00038d1e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7f2,	// (0x00038d1e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7fe,	// (0x00038d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7fe,	// (0x00038d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc80a,	// (0x00038d36) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc80a,	// (0x00038d36) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc82b,	// (0x00038d57) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc82b,	// (0x00038d57) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc84c,	// (0x00038d78) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc84c,	// (0x00038d78) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc86d,	// (0x00038d99) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc86d,	// (0x00038d99) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc88e,	// (0x00038dba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc88e,	// (0x00038dba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003c10a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003c10a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x728b,	// (0x000337b7) title_pane_g1_ParamLimits

0x7298,	// (0x000337c4) title_pane_g2_ParamLimits

0xf56a,	// (0x0003ba96) title_pane_g_ParamLimits

0x8530,	// (0x00034a5c) aid_call2_pane

0x8538,	// (0x00034a64) aid_call_pane

0x8540,	// (0x00034a6c) popup_clock_analogue_window_g1

0x8540,	// (0x00034a6c) popup_clock_analogue_window_g2

0x579d,	// (0x00031cc9) popup_clock_analogue_window_g3

0x57a6,	// (0x00031cd2) popup_clock_analogue_window_g4

0x30d3,	// (0x0002f5ff) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0003bc40) popup_clock_analogue_window_g

0x57ae,	// (0x00031cda) popup_clock_analogue_window_t1

0x57bc,	// (0x00031ce8) clock_digital_number_pane_ParamLimits

0x57bc,	// (0x00031ce8) clock_digital_number_pane

0x57c8,	// (0x00031cf4) clock_digital_number_pane_cp02_ParamLimits

0x57c8,	// (0x00031cf4) clock_digital_number_pane_cp02

0x57d4,	// (0x00031d00) clock_digital_number_pane_cp03_ParamLimits

0x57d4,	// (0x00031d00) clock_digital_number_pane_cp03

0x57e0,	// (0x00031d0c) clock_digital_number_pane_cp04_ParamLimits

0x57e0,	// (0x00031d0c) clock_digital_number_pane_cp04

0x57ec,	// (0x00031d18) clock_digital_separator_pane_ParamLimits

0x57ec,	// (0x00031d18) clock_digital_separator_pane

0x57f8,	// (0x00031d24) popup_clock_digital_window_t1_ParamLimits

0x57f8,	// (0x00031d24) popup_clock_digital_window_t1

0x30d3,	// (0x0002f5ff) clock_digital_number_pane_g1

0x30d3,	// (0x0002f5ff) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0003bc4b) clock_digital_number_pane_g

0x30d3,	// (0x0002f5ff) clock_digital_separator_pane_g1

0x30d3,	// (0x0002f5ff) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0003bc4b) clock_digital_separator_pane_g

0x94e7,	// (0x00035a13) aid_fill_nsta_ParamLimits

0x9637,	// (0x00035b63) indicator_nsta_pane_ParamLimits

0x97c7,	// (0x00035cf3) popup_clock_analogue_window

0x97c7,	// (0x00035cf3) popup_clock_digital_window

0x7361,	// (0x0003388d) grid_indicator_nsta_pane_ParamLimits

0xbac8,	// (0x00037ff4) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003bfd0) clock_nsta_pane_t

0x5761,	// (0x00031c8d) aid_size_max_handle

0x576b,	// (0x00031c97) aid_size_min_handle

0x8b2e,	// (0x0003505a) editor_scroll_pane

0xc8a9,	// (0x00038dd5) ex_editor_pane

0x8052,	// (0x0003457e) scroll_pane_cp13

0x7b87,	// (0x000340b3) scroll_pane_cp14

0x856a,	// (0x00034a96) scroll_pane_cp36

0x8598,	// (0x00034ac4) list_single_graphic_hl_pane_cp2_ParamLimits

0x8598,	// (0x00034ac4) list_single_graphic_hl_pane_cp2

0x612d,	// (0x00032659) list_single_graphic_hl_pane_ParamLimits

0x612d,	// (0x00032659) list_single_graphic_hl_pane

0x7e5d,	// (0x00034389) aid_size_min_hl_cp1

0xc8b1,	// (0x00038ddd) list_highlight_pane_cp34_ParamLimits

0xc8b1,	// (0x00038ddd) list_highlight_pane_cp34

0xc8c2,	// (0x00038dee) list_single_graphic_hl_pane_g1_ParamLimits

0xc8c2,	// (0x00038dee) list_single_graphic_hl_pane_g1

0x7e66,	// (0x00034392) list_single_graphic_hl_pane_g2_ParamLimits

0x7e66,	// (0x00034392) list_single_graphic_hl_pane_g2

0x7e66,	// (0x00034392) list_single_graphic_hl_pane_g3_ParamLimits

0x7e66,	// (0x00034392) list_single_graphic_hl_pane_g3

0x5d16,	// (0x00032242) list_single_graphic_hl_pane_g4_ParamLimits

0x5d16,	// (0x00032242) list_single_graphic_hl_pane_g4

0x7e72,	// (0x0003439e) list_single_graphic_hl_pane_g5_ParamLimits

0x7e72,	// (0x0003439e) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003c11b) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003c11b) list_single_graphic_hl_pane_g

0x7e86,	// (0x000343b2) list_single_graphic_hl_pane_t1_ParamLimits

0x7e86,	// (0x000343b2) list_single_graphic_hl_pane_t1

0xc8cf,	// (0x00038dfb) aid_size_min_hl_cp2

0xc8d8,	// (0x00038e04) list_highlight_pane_cp34_cp2_ParamLimits

0xc8d8,	// (0x00038e04) list_highlight_pane_cp34_cp2

0xc8c2,	// (0x00038dee) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8c2,	// (0x00038dee) list_single_graphic_hl_pane_g1_cp2

0xc8e5,	// (0x00038e11) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8e5,	// (0x00038e11) list_single_graphic_hl_pane_g2_cp2

0xc8f1,	// (0x00038e1d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8f1,	// (0x00038e1d) list_single_graphic_hl_pane_g3_cp2

0x9b8c,	// (0x000360b8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9b8c,	// (0x000360b8) list_single_graphic_hl_pane_g4_cp2

0xc8ff,	// (0x00038e2b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8ff,	// (0x00038e2b) list_single_graphic_hl_pane_g5_cp2

0x5b3d,	// (0x00032069) control_pane_g4_ParamLimits

0x5b3d,	// (0x00032069) control_pane_g4

0x8eb4,	// (0x000353e0) bg_popup_sub_pane_cp10_ParamLimits

0xc0ac,	// (0x000385d8) list_choice_list_pane_ParamLimits

0xc0bb,	// (0x000385e7) scroll_pane_cp23

0x75eb,	// (0x00033b17) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6d9,	// (0x00038c05) list_preview_fixed_pane_ParamLimits

0xc6ef,	// (0x00038c1b) list_preview_fixed_pane_cp_ParamLimits

0xc6ef,	// (0x00038c1b) list_preview_fixed_pane_cp

0xc6fb,	// (0x00038c27) popup_preview_fixed_window_g1_ParamLimits

0xc6fb,	// (0x00038c27) popup_preview_fixed_window_g1

0xc707,	// (0x00038c33) popup_preview_fixed_window_g2_ParamLimits

0xc707,	// (0x00038c33) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003c0a3) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003c0a3) popup_preview_fixed_window_g

0x56d3,	// (0x00031bff) aid_navi_side_left_pane_ParamLimits

0x56e8,	// (0x00031c14) aid_navi_side_right_pane_ParamLimits

0x5700,	// (0x00031c2c) navi_icon_pane_stacon_ParamLimits

0x5714,	// (0x00031c40) navi_navi_pane_stacon_ParamLimits

0x5700,	// (0x00031c2c) navi_text_pane_stacon_ParamLimits

0x30c9,	// (0x0002f5f5) main_text_info_pane

0xc929,	// (0x00038e55) listscroll_text_info_pane

0xc931,	// (0x00038e5d) list_text_info_pane_ParamLimits

0xc931,	// (0x00038e5d) list_text_info_pane

0xc940,	// (0x00038e6c) scroll_pane_cp24_ParamLimits

0xc940,	// (0x00038e6c) scroll_pane_cp24

0xc95e,	// (0x00038e8a) list_text_info_pane_t1_ParamLimits

0xc95e,	// (0x00038e8a) list_text_info_pane_t1

0x8efa,	// (0x00035426) popup_fast_swap2_window_ParamLimits

0x8efa,	// (0x00035426) popup_fast_swap2_window

0xc983,	// (0x00038eaf) aid_size_cell_fast2

0x30c9,	// (0x0002f5f5) bg_popup_window_pane_cp17

0x9e86,	// (0x000363b2) heading_pane_cp2

0x784b,	// (0x00033d77) listscroll_fast2_pane

0xc98d,	// (0x00038eb9) grid_fast2_pane

0xc997,	// (0x00038ec3) listscroll_fast2_pane_g1

0xc9a1,	// (0x00038ecd) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003c126) listscroll_fast2_pane_g

0x8052,	// (0x0003457e) scroll_pane_cp26

0xc9ab,	// (0x00038ed7) cell_fast2_pane_ParamLimits

0xc9ab,	// (0x00038ed7) cell_fast2_pane

0xc9c2,	// (0x00038eee) cell_fast2_pane_g1

0xc9cb,	// (0x00038ef7) cell_fast2_pane_g2

0xc9d4,	// (0x00038f00) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003c12b) cell_fast2_pane_g

0x7944,	// (0x00033e70) grid_highlight_pane_cp9

0x7959,	// (0x00033e85) main_eswt_pane_ParamLimits

0x7959,	// (0x00033e85) main_eswt_pane

0xc955,	// (0x00038e81) list_single_text_info_pane

0xc9dc,	// (0x00038f08) eswt_ctrl_button_pane

0xc9dc,	// (0x00038f08) eswt_ctrl_canvas_pane

0xc9e4,	// (0x00038f10) eswt_ctrl_combo_pane

0xc9dc,	// (0x00038f08) eswt_ctrl_default_pane

0xc9dc,	// (0x00038f08) eswt_ctrl_label_pane

0xc9ec,	// (0x00038f18) eswt_ctrl_wait_pane

0xc9f4,	// (0x00038f20) eswt_shell_pane

0x30c9,	// (0x0002f5f5) listscroll_eswt_app_pane

0xca14,	// (0x00038f40) popup_eswt_tasktip_window_ParamLimits

0xca14,	// (0x00038f40) popup_eswt_tasktip_window

0x9ae2,	// (0x0003600e) bg_popup_window_pane_cp18

0xca25,	// (0x00038f51) eswt_control_pane_g1_ParamLimits

0xca25,	// (0x00038f51) eswt_control_pane_g1

0xca32,	// (0x00038f5e) eswt_control_pane_g2_ParamLimits

0xca32,	// (0x00038f5e) eswt_control_pane_g2

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_ParamLimits

0xca3f,	// (0x00038f6b) eswt_control_pane_g3

0xca4c,	// (0x00038f78) eswt_control_pane_g4_ParamLimits

0xca4c,	// (0x00038f78) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003c132) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003c132) eswt_control_pane_g

0x7be8,	// (0x00034114) bg_button_pane_ParamLimits

0x7be8,	// (0x00034114) bg_button_pane

0x7959,	// (0x00033e85) common_borders_pane_copy2_ParamLimits

0x7959,	// (0x00033e85) common_borders_pane_copy2

0xca59,	// (0x00038f85) control_button_pane_g1_ParamLimits

0xca59,	// (0x00038f85) control_button_pane_g1

0xca65,	// (0x00038f91) control_button_pane_g2_ParamLimits

0xca65,	// (0x00038f91) control_button_pane_g2

0xca71,	// (0x00038f9d) control_button_pane_g3_ParamLimits

0xca71,	// (0x00038f9d) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003c13b) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003c13b) control_button_pane_g

0xca85,	// (0x00038fb1) control_button_pane_t1

0xca93,	// (0x00038fbf) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003c142) control_button_pane_t

0x99f0,	// (0x00035f1c) bg_button_pane_g1

0x9a00,	// (0x00035f2c) bg_button_pane_g2

0x99f8,	// (0x00035f24) bg_button_pane_g3

0x9a10,	// (0x00035f3c) bg_button_pane_g4

0x9a08,	// (0x00035f34) bg_button_pane_g5

0x9a18,	// (0x00035f44) bg_button_pane_g6

0x9a20,	// (0x00035f4c) bg_button_pane_g7

0x9a30,	// (0x00035f5c) bg_button_pane_g8

0x9a28,	// (0x00035f54) bg_button_pane_g9

0x0008,

0xf877,	// (0x0003bda3) bg_button_pane_g

0xc067,	// (0x00038593) common_borders_pane_ParamLimits

0xc067,	// (0x00038593) common_borders_pane

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy1_ParamLimits

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy1

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy1_ParamLimits

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy1

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy1_ParamLimits

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy1

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy1_ParamLimits

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy1

0xc0a2,	// (0x000385ce) bg_eswt_ctrl_canvas_pane_g1

0xc067,	// (0x00038593) common_borders_pane_cp2_ParamLimits

0xc067,	// (0x00038593) common_borders_pane_cp2

0xc067,	// (0x00038593) common_borders_pane_cp3_ParamLimits

0xc067,	// (0x00038593) common_borders_pane_cp3

0xcaa1,	// (0x00038fcd) separator_horizontal_pane

0xcaa9,	// (0x00038fd5) separator_vertical_pane

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy2_ParamLimits

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy2

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy2_ParamLimits

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy2

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy2_ParamLimits

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy2

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy2_ParamLimits

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy2

0x30c9,	// (0x0002f5f5) common_borders_pane_cp4

0xcab2,	// (0x00038fde) separator_horizontal_pane_g1

0xcabb,	// (0x00038fe7) separator_horizontal_pane_g2

0xcac4,	// (0x00038ff0) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003c147) separator_horizontal_pane_g

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy3_ParamLimits

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy3

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy3_ParamLimits

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy3

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy3_ParamLimits

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy3

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy3_ParamLimits

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy3

0x30c9,	// (0x0002f5f5) common_borders_pane_cp5

0xcacd,	// (0x00038ff9) separator_vertical_pane_g1

0xcad6,	// (0x00039002) separator_vertical_pane_g2

0xcadf,	// (0x0003900b) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003c14e) separator_vertical_pane_g

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy4_ParamLimits

0xca25,	// (0x00038f51) eswt_control_pane_g1_copy4

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy4_ParamLimits

0xca32,	// (0x00038f5e) eswt_control_pane_g2_copy4

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy4_ParamLimits

0xca3f,	// (0x00038f6b) eswt_control_pane_g3_copy4

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy4_ParamLimits

0xca4c,	// (0x00038f78) eswt_control_pane_g4_copy4

0xcae8,	// (0x00039014) eswt_ctrl_combo_button_pane

0xcaf0,	// (0x0003901c) eswt_ctrl_input_pane

0xcaf8,	// (0x00039024) popup_choice_list_window_cp70

0xcb00,	// (0x0003902c) eswt_ctrl_input_pane_t1

0x30c9,	// (0x0002f5f5) input_focus_pane_cp70

0xc067,	// (0x00038593) bg_button_pane_cp70_ParamLimits

0xc067,	// (0x00038593) bg_button_pane_cp70

0xcb0e,	// (0x0003903a) eswt_ctrl_combo_button_pane_g1

0xcb16,	// (0x00039042) wait_bar_pane_cp70

0x9ae2,	// (0x0003600e) bg_popup_window_pane_cp70_ParamLimits

0x9ae2,	// (0x0003600e) bg_popup_window_pane_cp70

0xcb1e,	// (0x0003904a) popup_eswt_tasktip_window_t1

0xcb34,	// (0x00039060) wait_bar_pane_cp71_ParamLimits

0xcb34,	// (0x00039060) wait_bar_pane_cp71

0xcb40,	// (0x0003906c) grid_eswt_app_pane

0x8374,	// (0x000348a0) scroll_pane_cp70

0xcb49,	// (0x00039075) cell_eswt_app_pane_ParamLimits

0xcb49,	// (0x00039075) cell_eswt_app_pane

0xcb7b,	// (0x000390a7) cell_eswt_app_pane_g1_ParamLimits

0xcb7b,	// (0x000390a7) cell_eswt_app_pane_g1

0xcbaa,	// (0x000390d6) cell_eswt_app_pane_g2_ParamLimits

0xcbaa,	// (0x000390d6) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003c155) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003c155) cell_eswt_app_pane_g

0xcbd3,	// (0x000390ff) cell_eswt_app_pane_t1_ParamLimits

0xcbd3,	// (0x000390ff) cell_eswt_app_pane_t1

0xcc05,	// (0x00039131) grid_highlight_pane_cp70_ParamLimits

0xcc05,	// (0x00039131) grid_highlight_pane_cp70

0xaf7f,	// (0x000374ab) set_content_pane_g1

0x8dde,	// (0x0003530a) status_small_volume_pane

0x6973,	// (0x00032e9f) status_small_volume_pane_g1

0x697b,	// (0x00032ea7) volume_small2_pane

0x6984,	// (0x00032eb0) volume_small2_pane_g1

0x698d,	// (0x00032eb9) volume_small2_pane_g2

0x6996,	// (0x00032ec2) volume_small2_pane_g3

0x699f,	// (0x00032ecb) volume_small2_pane_g4

0x69a8,	// (0x00032ed4) volume_small2_pane_g5

0x69b1,	// (0x00032edd) volume_small2_pane_g6

0x69ba,	// (0x00032ee6) volume_small2_pane_g7

0x69c3,	// (0x00032eef) volume_small2_pane_g8

0x69cc,	// (0x00032ef8) volume_small2_pane_g9

0x69d5,	// (0x00032f01) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003c15a) volume_small2_pane_g

0xc480,	// (0x000389ac) fep_vkb_top_text_pane_g1_ParamLimits

0xc49b,	// (0x000389c7) fep_vkb_top_text_pane_t1_ParamLimits

0xc713,	// (0x00038c3f) popup_preview_fixed_window_g3_ParamLimits

0xc713,	// (0x00038c3f) popup_preview_fixed_window_g3

0x940b,	// (0x00035937) popup_toolbar_trans_pane

0xae24,	// (0x00037350) aid_height_set_list_ParamLimits

0xae35,	// (0x00037361) aid_size_parent_ParamLimits

0x8eb4,	// (0x000353e0) list_highlight_pane_cp2_ParamLimits

0xaf7f,	// (0x000374ab) set_content_pane_g1_ParamLimits

0xb088,	// (0x000375b4) list_single_image_pane_ParamLimits

0xb088,	// (0x000375b4) list_single_image_pane

0xcc11,	// (0x0003913d) aid_size_cell_image_ParamLimits

0xcc11,	// (0x0003913d) aid_size_cell_image

0xcc1e,	// (0x0003914a) grid_single_image_pane_ParamLimits

0xcc1e,	// (0x0003914a) grid_single_image_pane

0x7c02,	// (0x0003412e) list_single_image_pane_g1_ParamLimits

0x7c02,	// (0x0003412e) list_single_image_pane_g1

0x7c0e,	// (0x0003413a) list_single_image_pane_g2_ParamLimits

0x7c0e,	// (0x0003413a) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003c16f) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003c16f) list_single_image_pane_g

0xcc2c,	// (0x00039158) list_single_image_pane_t1_ParamLimits

0xcc2c,	// (0x00039158) list_single_image_pane_t1

0xcc42,	// (0x0003916e) cell_image_list_pane_ParamLimits

0xcc42,	// (0x0003916e) cell_image_list_pane

0xcc58,	// (0x00039184) cell_image_list_pane_g1

0xcc61,	// (0x0003918d) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003c174) cell_image_list_pane_g

0xcc6a,	// (0x00039196) aid_size_cell_tb_trans_pane

0x7be8,	// (0x00034114) bg_tb_trans_pane

0xcc7c,	// (0x000391a8) grid_tb_trans_pane

0x99f0,	// (0x00035f1c) bg_tb_trans_pane_g1

0x9a00,	// (0x00035f2c) bg_tb_trans_pane_g2

0x99f8,	// (0x00035f24) bg_tb_trans_pane_g3

0x9a10,	// (0x00035f3c) bg_tb_trans_pane_g4

0x9a08,	// (0x00035f34) bg_tb_trans_pane_g5

0x9a30,	// (0x00035f5c) bg_tb_trans_pane_g6

0x9a28,	// (0x00035f54) bg_tb_trans_pane_g7

0x9a18,	// (0x00035f44) bg_tb_trans_pane_g8

0x9a20,	// (0x00035f4c) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003c179) bg_tb_trans_pane_g

0xcc90,	// (0x000391bc) cell_toolbar_trans_pane_ParamLimits

0xcc90,	// (0x000391bc) cell_toolbar_trans_pane

0xc0a2,	// (0x000385ce) cell_toolbar_trans_pane_g1

0xbcc3,	// (0x000381ef) list_form2_midp_pane_t1

0xbcd1,	// (0x000381fd) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0003c016) list_form2_midp_pane_t

0xbcdf,	// (0x0003820b) scroll_pane_cp51_ParamLimits

0xbea6,	// (0x000383d2) form2_midp_wait_pane_g1

0xbeaf,	// (0x000383db) form2_midp_wait_pane_g2

0xbeb8,	// (0x000383e4) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0003c02b) form2_midp_wait_pane_g

0x7361,	// (0x0003388d) list_highlight_pane_cp21_ParamLimits

0xbefc,	// (0x00038428) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf0b,	// (0x00038437) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb041,	// (0x0003756d) list_single_2graphic_im_pane_ParamLimits

0xb041,	// (0x0003756d) list_single_2graphic_im_pane

0xccb6,	// (0x000391e2) list_single_2graphic_im_pane_g1_ParamLimits

0xccb6,	// (0x000391e2) list_single_2graphic_im_pane_g1

0xccc7,	// (0x000391f3) list_single_2graphic_im_pane_g2_ParamLimits

0xccc7,	// (0x000391f3) list_single_2graphic_im_pane_g2

0xccd3,	// (0x000391ff) list_single_2graphic_im_pane_g3_ParamLimits

0xccd3,	// (0x000391ff) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003c18c) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003c18c) list_single_2graphic_im_pane_g

0xccf3,	// (0x0003921f) list_single_2graphic_im_pane_t1_ParamLimits

0xccf3,	// (0x0003921f) list_single_2graphic_im_pane_t1

0xc71f,	// (0x00038c4b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc71f,	// (0x00038c4b) list_single_graphic_2heading_pane_fp

0x67fc,	// (0x00032d28) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67fc,	// (0x00032d28) list_single_graphic_2heading_pane_fp_g1

0xc738,	// (0x00038c64) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc738,	// (0x00038c64) list_single_graphic_2heading_pane_fp_g2

0x67c5,	// (0x00032cf1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x67c5,	// (0x00032cf1) list_single_graphic_2heading_pane_fp_g3

0x67d1,	// (0x00032cfd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x67d1,	// (0x00032cfd) list_single_graphic_2heading_pane_fp_g4

0xc744,	// (0x00038c70) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc744,	// (0x00038c70) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c0b3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c0b3) list_single_graphic_2heading_pane_fp_g

0x7e9c,	// (0x000343c8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7e9c,	// (0x000343c8) list_single_graphic_2heading_pane_fp_t1

0x6834,	// (0x00032d60) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6834,	// (0x00032d60) list_single_graphic_2heading_pane_fp_t2

0x7eb2,	// (0x000343de) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7eb2,	// (0x000343de) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003c195) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003c195) list_single_graphic_2heading_pane_fp_t

0xc142,	// (0x0003866e) fep_hwr_write_pane_g5_ParamLimits

0xc142,	// (0x0003866e) fep_hwr_write_pane_g5

0xc14e,	// (0x0003867a) fep_hwr_write_pane_g6_ParamLimits

0xc14e,	// (0x0003867a) fep_hwr_write_pane_g6

0xc9f4,	// (0x00038f20) eswt_shell_pane_ParamLimits

0x9ae2,	// (0x0003600e) bg_popup_window_pane_cp18_ParamLimits

0xad7b,	// (0x000372a7) heading_pane_cp70

0xcb1e,	// (0x0003904a) popup_eswt_tasktip_window_t1_ParamLimits

0x953e,	// (0x00035a6a) aid_touch_tab_arrow_left

0x954d,	// (0x00035a79) aid_touch_tab_arrow_right

0x72a9,	// (0x000337d5) title_pane_g3_ParamLimits

0x72a9,	// (0x000337d5) title_pane_g3

0x7ba7,	// (0x000340d3) set_value_pane_g1

0x940b,	// (0x00035937) popup_toolbar_trans_pane_ParamLimits

0xcc6a,	// (0x00039196) aid_size_cell_tb_trans_pane_ParamLimits

0x7be8,	// (0x00034114) bg_tb_trans_pane_ParamLimits

0xcc7c,	// (0x000391a8) grid_tb_trans_pane_ParamLimits

0x75eb,	// (0x00033b17) cont_note_pane_ParamLimits

0x75eb,	// (0x00033b17) cont_note_pane

0x7959,	// (0x00033e85) cont_snote2_single_text_pane_ParamLimits

0x7959,	// (0x00033e85) cont_snote2_single_text_pane

0x7959,	// (0x00033e85) cont_snote2_single_graphic_pane_ParamLimits

0x7959,	// (0x00033e85) cont_snote2_single_graphic_pane

0xa0a2,	// (0x000365ce) cont_note_wait_pane_ParamLimits

0xa0a2,	// (0x000365ce) cont_note_wait_pane

0xa0a2,	// (0x000365ce) cont_note_image_pane_ParamLimits

0xa0a2,	// (0x000365ce) cont_note_image_pane

0xcd24,	// (0x00039250) popup_note2_window_g1_ParamLimits

0xcd24,	// (0x00039250) popup_note2_window_g1

0xcd55,	// (0x00039281) popup_note2_window_t1_ParamLimits

0xcd55,	// (0x00039281) popup_note2_window_t1

0xcd9a,	// (0x000392c6) popup_note2_window_t2_ParamLimits

0xcd9a,	// (0x000392c6) popup_note2_window_t2

0xcddf,	// (0x0003930b) popup_note2_window_t3_ParamLimits

0xcddf,	// (0x0003930b) popup_note2_window_t3

0xce24,	// (0x00039350) popup_note2_window_t4_ParamLimits

0xce24,	// (0x00039350) popup_note2_window_t4

0x766f,	// (0x00033b9b) popup_note2_window_t5_ParamLimits

0x766f,	// (0x00033b9b) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003c1a1) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003c1a1) popup_note2_window_t

0xce53,	// (0x0003937f) popup_note2_image_window_g1_ParamLimits

0xce53,	// (0x0003937f) popup_note2_image_window_g1

0xce5f,	// (0x0003938b) popup_note2_image_window_g2_ParamLimits

0xce5f,	// (0x0003938b) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003c1ac) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003c1ac) popup_note2_image_window_g

0xce71,	// (0x0003939d) popup_note2_image_window_t1_ParamLimits

0xce71,	// (0x0003939d) popup_note2_image_window_t1

0xce89,	// (0x000393b5) popup_note2_image_window_t2_ParamLimits

0xce89,	// (0x000393b5) popup_note2_image_window_t2

0xcea1,	// (0x000393cd) popup_note2_image_window_t3_ParamLimits

0xcea1,	// (0x000393cd) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003c1b1) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003c1b1) popup_note2_image_window_t

0xa0b0,	// (0x000365dc) popup_note2_wait_window_g1_ParamLimits

0xa0b0,	// (0x000365dc) popup_note2_wait_window_g1

0xcebd,	// (0x000393e9) popup_note2_wait_window_g2_ParamLimits

0xcebd,	// (0x000393e9) popup_note2_wait_window_g2

0xa0c8,	// (0x000365f4) popup_note2_wait_window_g3_ParamLimits

0xa0c8,	// (0x000365f4) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003c1b8) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003c1b8) popup_note2_wait_window_g

0xcec9,	// (0x000393f5) popup_note2_wait_window_t1_ParamLimits

0xcec9,	// (0x000393f5) popup_note2_wait_window_t1

0xcee7,	// (0x00039413) popup_note2_wait_window_t2_ParamLimits

0xcee7,	// (0x00039413) popup_note2_wait_window_t2

0xcf05,	// (0x00039431) popup_note2_wait_window_t3_ParamLimits

0xcf05,	// (0x00039431) popup_note2_wait_window_t3

0xcf17,	// (0x00039443) popup_note2_wait_window_t4_ParamLimits

0xcf17,	// (0x00039443) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003c1bf) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003c1bf) popup_note2_wait_window_t

0xcf29,	// (0x00039455) wait_bar2_pane_ParamLimits

0xcf29,	// (0x00039455) wait_bar2_pane

0xcf41,	// (0x0003946d) popup_snote2_single_text_window_g1_ParamLimits

0xcf41,	// (0x0003946d) popup_snote2_single_text_window_g1

0xcf69,	// (0x00039495) popup_snote2_single_text_window_t1_ParamLimits

0xcf69,	// (0x00039495) popup_snote2_single_text_window_t1

0xcfb5,	// (0x000394e1) popup_snote2_single_text_window_t2_ParamLimits

0xcfb5,	// (0x000394e1) popup_snote2_single_text_window_t2

0xd001,	// (0x0003952d) popup_snote2_single_text_window_t3_ParamLimits

0xd001,	// (0x0003952d) popup_snote2_single_text_window_t3

0xd042,	// (0x0003956e) popup_snote2_single_text_window_t4_ParamLimits

0xd042,	// (0x0003956e) popup_snote2_single_text_window_t4

0xd078,	// (0x000395a4) popup_snote2_single_text_window_t5_ParamLimits

0xd078,	// (0x000395a4) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003c1c8) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003c1c8) popup_snote2_single_text_window_t

0xd0a3,	// (0x000395cf) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0a3,	// (0x000395cf) popup_snote2_single_graphic_window_g1

0xd0cb,	// (0x000395f7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0cb,	// (0x000395f7) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003c1d3) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003c1d3) popup_snote2_single_graphic_window_g

0xd0f3,	// (0x0003961f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0f3,	// (0x0003961f) popup_snote2_single_graphic_window_t1

0xd13f,	// (0x0003966b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd13f,	// (0x0003966b) popup_snote2_single_graphic_window_t2

0xd001,	// (0x0003952d) popup_snote2_single_graphic_window_t3_ParamLimits

0xd001,	// (0x0003952d) popup_snote2_single_graphic_window_t3

0xd042,	// (0x0003956e) popup_snote2_single_graphic_window_t4_ParamLimits

0xd042,	// (0x0003956e) popup_snote2_single_graphic_window_t4

0xd078,	// (0x000395a4) popup_snote2_single_graphic_window_t5_ParamLimits

0xd078,	// (0x000395a4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003c1d8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003c1d8) popup_snote2_single_graphic_window_t

0xbb89,	// (0x000380b5) clock_nsta_pane_cp2_t1

0xbb89,	// (0x000380b5) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0003bfec) clock_nsta_pane_cp2_t

0x5457,	// (0x00031983) form_field_data_wide_pane_g1_ParamLimits

0x7c02,	// (0x0003412e) form_field_data_wide_pane_g2_ParamLimits

0x7c02,	// (0x0003412e) form_field_data_wide_pane_g2

0x7c0e,	// (0x0003413a) form_field_data_wide_pane_g3_ParamLimits

0x7c0e,	// (0x0003413a) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0003bbc3) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0003bbc3) form_field_data_wide_pane_g

0xba64,	// (0x00037f90) grid_touch_3_pane_ParamLimits

0xba64,	// (0x00037f90) grid_touch_3_pane

0xd18b,	// (0x000396b7) cell_touch_3_pane_ParamLimits

0xd18b,	// (0x000396b7) cell_touch_3_pane

0xc0a2,	// (0x000385ce) cell_touch_3_pane_g1

0xc0a2,	// (0x000385ce) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0003c071) cell_touch_3_pane_g

0x76a1,	// (0x00033bcd) cont_query_data_pane

0x76a9,	// (0x00033bd5) cont_query_data_pane_cp1

0xd1be,	// (0x000396ea) button_value_adjust_pane_cp7

0xd1c6,	// (0x000396f2) query_popup_pane_cp3

0x860a,	// (0x00034b36) bg_popup_sub_pane_cp22_ParamLimits

0x5817,	// (0x00031d43) navi_navi_volume_pane_cp2

0x5832,	// (0x00031d5e) popup_side_volume_key_window_g2

0x5841,	// (0x00031d6d) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003bc55) popup_side_volume_key_window_g

0x585e,	// (0x00031d8a) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0003bc5c) popup_side_volume_key_window_t

0x88c5,	// (0x00034df1) popup_side_volume_key_window_ParamLimits

0x5064,	// (0x00031590) list_double_graphic_pane_g4_ParamLimits

0x5064,	// (0x00031590) list_double_graphic_pane_g4

0xb070,	// (0x0003759c) list_single_2heading_msg_pane_ParamLimits

0xb070,	// (0x0003759c) list_single_2heading_msg_pane

0x7ed2,	// (0x000343fe) list_single_2heading_msg_pane_g1_ParamLimits

0x7ed2,	// (0x000343fe) list_single_2heading_msg_pane_g1

0x4000,	// (0x0003052c) list_single_2heading_msg_pane_g2_ParamLimits

0x4000,	// (0x0003052c) list_single_2heading_msg_pane_g2

0x7ede,	// (0x0003440a) list_single_2heading_msg_pane_g3_ParamLimits

0x7ede,	// (0x0003440a) list_single_2heading_msg_pane_g3

0x7eea,	// (0x00034416) list_single_2heading_msg_pane_g4_ParamLimits

0x7eea,	// (0x00034416) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003c1e3) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003c1e3) list_single_2heading_msg_pane_g

0x7f02,	// (0x0003442e) list_single_2heading_msg_pane_t1_ParamLimits

0x7f02,	// (0x0003442e) list_single_2heading_msg_pane_t1

0x7f2a,	// (0x00034456) list_single_2heading_msg_pane_t2_ParamLimits

0x7f2a,	// (0x00034456) list_single_2heading_msg_pane_t2

0x7f5e,	// (0x0003448a) list_single_2heading_msg_pane_t3_ParamLimits

0x7f5e,	// (0x0003448a) list_single_2heading_msg_pane_t3

0x7f97,	// (0x000344c3) list_single_2heading_msg_pane_t4_ParamLimits

0x7f97,	// (0x000344c3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003c1ec) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003c1ec) list_single_2heading_msg_pane_t

0x72b5,	// (0x000337e1) title_pane_g4_ParamLimits

0x72b5,	// (0x000337e1) title_pane_g4

0x5623,	// (0x00031b4f) title_pane_stacon_g3_ParamLimits

0x5623,	// (0x00031b4f) title_pane_stacon_g3

0xcce7,	// (0x00039213) list_single_2graphic_im_pane_g4_ParamLimits

0xcce7,	// (0x00039213) list_single_2graphic_im_pane_g4

0xab18,	// (0x00037044) popup_side_volume_key_window_cp

0xb38e,	// (0x000378ba) main_idle_act2_pane_t1

0x5cc2,	// (0x000321ee) toolbar_button_pane_g10

0x7b51,	// (0x0003407d) popup_toolbar_window_cp1

0xbb7a,	// (0x000380a6) clock_nsta_pane_cp_t1

0xbb7a,	// (0x000380a6) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0003bfe7) clock_nsta_pane_cp_t

0x5817,	// (0x00031d43) navi_navi_volume_pane_cp2_ParamLimits

0x5826,	// (0x00031d52) popup_side_volume_key_window_g1_ParamLimits

0x5832,	// (0x00031d5e) popup_side_volume_key_window_g2_ParamLimits

0x5841,	// (0x00031d6d) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003bc55) popup_side_volume_key_window_g_ParamLimits

0x650b,	// (0x00032a37) fep_hwr_aid_pane

0x65b4,	// (0x00032ae0) bg_fep_hwr_top_pane_g4_ParamLimits

0xc112,	// (0x0003863e) fep_hwr_top_pane_g1_ParamLimits

0xc124,	// (0x00038650) fep_hwr_top_pane_g2_ParamLimits

0x65d4,	// (0x00032b00) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0003c03c) fep_hwr_top_pane_g_ParamLimits

0x65e9,	// (0x00032b15) fep_hwr_top_text_pane_ParamLimits

0xa8cd,	// (0x00036df9) aid_touch_tab_arrow_arrow_2

0xa8d6,	// (0x00036e02) aid_touch_tab_arrow_left_2

0x651f,	// (0x00032a4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6556,	// (0x00032a82) fep_hwr_prediction_pane

0xc27a,	// (0x000387a6) fep_vkb_prediction_pane

0xc380,	// (0x000388ac) fep_vkb_side_pane_g3_ParamLimits

0xc380,	// (0x000388ac) fep_vkb_side_pane_g3

0x6778,	// (0x00032ca4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x68a2,	// (0x00032dce) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x68af,	// (0x00032ddb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0003c0eb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69de,	// (0x00032f0a) fep_hwr_prediction_pane_g1

0x69e8,	// (0x00032f14) fep_hwr_prediction_pane_g2

0x69f0,	// (0x00032f1c) fep_hwr_prediction_pane_g3

0x69f8,	// (0x00032f24) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003c1f5) fep_hwr_prediction_pane_g

0xd1ed,	// (0x00039719) fep_vkb_prediction_pane_g1

0xd1f7,	// (0x00039723) fep_vkb_prediction_pane_g2

0xd1ff,	// (0x0003972b) fep_vkb_prediction_pane_g3

0xd207,	// (0x00039733) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003c1fe) fep_vkb_prediction_pane_g

0x6067,	// (0x00032593) slider_set_pane_g3

0x607b,	// (0x000325a7) slider_set_pane_g4

0x6093,	// (0x000325bf) slider_set_pane_g5

0x6067,	// (0x00032593) slider_set_pane_g6

0x60a9,	// (0x000325d5) slider_set_pane_g7

0xafc6,	// (0x000374f2) slider_form_pane_g3

0xafcf,	// (0x000374fb) slider_form_pane_g4

0xafd7,	// (0x00037503) slider_form_pane_g5

0xafc6,	// (0x000374f2) slider_form_pane_g6

0xafdf,	// (0x0003750b) slider_form_pane_g7

0xb65c,	// (0x00037b88) slider_set_pane_vc_g3

0xb665,	// (0x00037b91) slider_set_pane_vc_g4

0xb66e,	// (0x00037b9a) slider_set_pane_vc_g5

0xb65c,	// (0x00037b88) slider_set_pane_vc_g6

0xb677,	// (0x00037ba3) slider_set_pane_vc_g7

0xb65c,	// (0x00037b88) slider_form_pane_vc_g1

0xb665,	// (0x00037b91) slider_form_pane_vc_g2

0xb66e,	// (0x00037b9a) slider_form_pane_vc_g3

0xb65c,	// (0x00037b88) slider_form_pane_vc_g4

0xb86e,	// (0x00037d9a) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003bfc0) slider_form_pane_vc_g

0x30c9,	// (0x0002f5f5) main_idle_act3_pane

0xd20f,	// (0x0003973b) ai3_links_pane

0xd218,	// (0x00039744) popup_ai3_data_window_ParamLimits

0xd218,	// (0x00039744) popup_ai3_data_window

0x30c9,	// (0x0002f5f5) grid_ai3_links_pane

0xd244,	// (0x00039770) cell_ai3_links_pane_ParamLimits

0xd244,	// (0x00039770) cell_ai3_links_pane

0xd25e,	// (0x0003978a) bg_popup_sub_pane_cp11

0xd26b,	// (0x00039797) cell_ai3_links_pane_g1

0x30c9,	// (0x0002f5f5) bg_popup_sub_pane_cp12

0xd290,	// (0x000397bc) heading_ai3_data_pane

0xd298,	// (0x000397c4) list_ai3_gene_pane

0xd2a4,	// (0x000397d0) popup_ai3_data_window_g1

0xd2ac,	// (0x000397d8) heading_ai3_data_pane_g1

0xd2b4,	// (0x000397e0) heading_ai3_data_pane_t1

0xd2c2,	// (0x000397ee) list_double_ai3_gene_pane_ParamLimits

0xd2c2,	// (0x000397ee) list_double_ai3_gene_pane

0xd2cf,	// (0x000397fb) list_single_ai3_gene_pane_ParamLimits

0xd2cf,	// (0x000397fb) list_single_ai3_gene_pane

0xc067,	// (0x00038593) list_highlight_pane_cp7_ParamLimits

0xc067,	// (0x00038593) list_highlight_pane_cp7

0xd2dc,	// (0x00039808) list_single_a13_gene_pane_t1_ParamLimits

0xd2dc,	// (0x00039808) list_single_a13_gene_pane_t1

0xd2f3,	// (0x0003981f) list_single_ai3_gene_pane_g1

0xd2fc,	// (0x00039828) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003c207) list_single_ai3_gene_pane_g

0xd304,	// (0x00039830) list_double_ai3_gene_pane_g1_ParamLimits

0xd304,	// (0x00039830) list_double_ai3_gene_pane_g1

0xd310,	// (0x0003983c) list_double_ai3_gene_pane_t1_ParamLimits

0xd310,	// (0x0003983c) list_double_ai3_gene_pane_t1

0xd32c,	// (0x00039858) list_double_ai3_gene_pane_t2_ParamLimits

0xd32c,	// (0x00039858) list_double_ai3_gene_pane_t2

0xd341,	// (0x0003986d) list_double_ai3_gene_pane_t3_ParamLimits

0xd341,	// (0x0003986d) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003c20c) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003c20c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7ec8,	// (0x000343f4) aid_size_min_col_2

0xd1d7,	// (0x00039703) aid_size_min_msg_ParamLimits

0xd1d7,	// (0x00039703) aid_size_min_msg

0xc48c,	// (0x000389b8) fep_vkb_top_text_pane_g2_ParamLimits

0xc48c,	// (0x000389b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0003c06c) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0003c06c) fep_vkb_top_text_pane_g

0x30c9,	// (0x0002f5f5) main_hc_apps_shell_pane

0xd35e,	// (0x0003988a) grid_hc_apps_pane_ParamLimits

0xd35e,	// (0x0003988a) grid_hc_apps_pane

0xd36d,	// (0x00039899) list_hc_apps_pane

0xd375,	// (0x000398a1) scroll_pane_cp37_ParamLimits

0xd375,	// (0x000398a1) scroll_pane_cp37

0xd381,	// (0x000398ad) cell_hc_apps_pane_ParamLimits

0xd381,	// (0x000398ad) cell_hc_apps_pane

0xd439,	// (0x00039965) cell_hc_apps_pane_g1_ParamLimits

0xd439,	// (0x00039965) cell_hc_apps_pane_g1

0xd46a,	// (0x00039996) cell_hc_apps_pane_g2_ParamLimits

0xd46a,	// (0x00039996) cell_hc_apps_pane_g2

0xd486,	// (0x000399b2) cell_hc_apps_pane_g3_ParamLimits

0xd486,	// (0x000399b2) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003c213) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003c213) cell_hc_apps_pane_g

0xd4a8,	// (0x000399d4) cell_hc_apps_pane_t1_ParamLimits

0xd4a8,	// (0x000399d4) cell_hc_apps_pane_t1

0x75eb,	// (0x00033b17) grid_highlight_pane_cp10_ParamLimits

0x75eb,	// (0x00033b17) grid_highlight_pane_cp10

0xd4e8,	// (0x00039a14) list_single_hc_apps_pane_ParamLimits

0xd4e8,	// (0x00039a14) list_single_hc_apps_pane

0xd527,	// (0x00039a53) list_single_hc_apps_pane_g1

0x7fbc,	// (0x000344e8) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003c21a) list_single_hc_apps_pane_g

0x7fd5,	// (0x00034501) list_single_hc_apps_pane_g2_copy1

0x7ff1,	// (0x0003451d) list_single_hc_apps_pane_t1

0x7361,	// (0x0003388d) bg_set_opt_pane_cp_ParamLimits

0x4e3b,	// (0x00031367) setting_slider_pane_t1_ParamLimits

0x4e51,	// (0x0003137d) setting_slider_pane_t2_ParamLimits

0x4e6b,	// (0x00031397) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003baa6) setting_slider_pane_t_ParamLimits

0x4e83,	// (0x000313af) slider_set_pane_ParamLimits

0x5b54,	// (0x00032080) control_pane_g5_ParamLimits

0x5b54,	// (0x00032080) control_pane_g5

0xade7,	// (0x00037313) slider_set_pane_g1_ParamLimits

0x605b,	// (0x00032587) slider_set_pane_g2_ParamLimits

0x6067,	// (0x00032593) slider_set_pane_g3_ParamLimits

0x607b,	// (0x000325a7) slider_set_pane_g4_ParamLimits

0x6093,	// (0x000325bf) slider_set_pane_g5_ParamLimits

0x6067,	// (0x00032593) slider_set_pane_g6_ParamLimits

0x60a9,	// (0x000325d5) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0003bea1) slider_set_pane_g_ParamLimits

0x89aa,	// (0x00034ed6) navi_icon_text_pane_ParamLimits

0x94fd,	// (0x00035a29) aid_fill_nsta_2_ParamLimits

0x953e,	// (0x00035a6a) aid_touch_tab_arrow_left_ParamLimits

0x954d,	// (0x00035a79) aid_touch_tab_arrow_right_ParamLimits

0x95ba,	// (0x00035ae6) clock_nsta_pane_ParamLimits

0xa8a9,	// (0x00036dd5) navi_icon_pane_g1_ParamLimits

0xa8b8,	// (0x00036de4) navi_text_pane_t1_ParamLimits

0xbc97,	// (0x000381c3) navi_icon_text_pane_g1_ParamLimits

0xbca6,	// (0x000381d2) navi_icon_text_pane_t1_ParamLimits

0xd527,	// (0x00039a53) list_single_hc_apps_pane_g1_ParamLimits

0x7fbc,	// (0x000344e8) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003c21a) list_single_hc_apps_pane_g_ParamLimits

0x7fd5,	// (0x00034501) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ff1,	// (0x0003451d) list_single_hc_apps_pane_t1_ParamLimits

0x4d45,	// (0x00031271) popup_toolbar2_fixed_window_ParamLimits

0x4d45,	// (0x00031271) popup_toolbar2_fixed_window

0x9401,	// (0x0003592d) popup_toolbar2_float_window

0x30c9,	// (0x0002f5f5) bg_popup_sub_pane_cp27

0xd540,	// (0x00039a6c) grid_toolbar2_float_pane

0x30c9,	// (0x0002f5f5) bg_popup_sub_pane_cp26

0xd540,	// (0x00039a6c) grid_toolbar2_fixed_pane

0xd548,	// (0x00039a74) cell_toolbar2_fixed_pane_ParamLimits

0xd548,	// (0x00039a74) cell_toolbar2_fixed_pane

0xd558,	// (0x00039a84) cell_toolbar2_fixed_pane_g1

0xd561,	// (0x00039a8d) toolbar2_fixed_button_pane

0x99f0,	// (0x00035f1c) toolbar2_fixed_button_pane_g1

0x9a00,	// (0x00035f2c) toolbar2_fixed_button_pane_g2

0x99f8,	// (0x00035f24) toolbar2_fixed_button_pane_g3

0x9a10,	// (0x00035f3c) toolbar2_fixed_button_pane_g4

0x9a08,	// (0x00035f34) toolbar2_fixed_button_pane_g5

0x9a18,	// (0x00035f44) toolbar2_fixed_button_pane_g6

0x9a20,	// (0x00035f4c) toolbar2_fixed_button_pane_g7

0x9a30,	// (0x00035f5c) toolbar2_fixed_button_pane_g8

0x9a28,	// (0x00035f54) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0003bda3) toolbar2_fixed_button_pane_g

0xd569,	// (0x00039a95) cell_toolbar2_float_pane_ParamLimits

0xd569,	// (0x00039a95) cell_toolbar2_float_pane

0xd57a,	// (0x00039aa6) cell_toolbar2_float_pane_g1

0xd561,	// (0x00039a8d) toolbar2_fixed_button_pane_cp

0xc1e8,	// (0x00038714) fep_vkb_accented_list_pane_ParamLimits

0xc1e8,	// (0x00038714) fep_vkb_accented_list_pane

0x6758,	// (0x00032c84) bg_popup_fep_shadow_pane_g9

0x8b2e,	// (0x0003505a) bg_popup_fep_shadow_pane_cp3

0x8039,	// (0x00034565) list_accented_list_pane

0xd583,	// (0x00039aaf) list_single_accented_list_pane_ParamLimits

0xd583,	// (0x00039aaf) list_single_accented_list_pane

0x8b2e,	// (0x0003505a) list_highlight_pane_cp10

0xd594,	// (0x00039ac0) list_single_accented_list_pane_t1

0x9347,	// (0x00035873) popup_slider_window_ParamLimits

0x9347,	// (0x00035873) popup_slider_window

0xd1ce,	// (0x000396fa) aid_indentation_list_msg

0xd660,	// (0x00039b8c) bg_popup_window_pane_cp19

0xd6ce,	// (0x00039bfa) popup_slider_window_g1

0xd6ea,	// (0x00039c16) popup_slider_window_g2

0xd706,	// (0x00039c32) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003c21f) popup_slider_window_g

0xd762,	// (0x00039c8e) popup_slider_window_t1

0xd7d6,	// (0x00039d02) small_volume_slider_vertical_pane

0xc0a2,	// (0x000385ce) small_volume_slider_vertical_pane_g1

0xc0a2,	// (0x000385ce) small_volume_slider_vertical_pane_g2

0xd7f2,	// (0x00039d1e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003c231) small_volume_slider_vertical_pane_g

0x4af3,	// (0x0003101f) area_side_right_pane_ParamLimits

0x4af3,	// (0x0003101f) area_side_right_pane

0x6a00,	// (0x00032f2c) aid_size_side_button_ParamLimits

0x6a00,	// (0x00032f2c) aid_size_side_button

0x6a14,	// (0x00032f40) grid_sctrl_middle_pane_ParamLimits

0x6a14,	// (0x00032f40) grid_sctrl_middle_pane

0x6a34,	// (0x00032f60) sctrl_sk_bottom_pane

0x6a45,	// (0x00032f71) sctrl_sk_top_pane

0x6a57,	// (0x00032f83) aid_touch_sctrl_top

0x6a64,	// (0x00032f90) bg_sctrl_sk_pane_ParamLimits

0x6a64,	// (0x00032f90) bg_sctrl_sk_pane

0x6a72,	// (0x00032f9e) sctrl_sk_top_pane_g1

0x6a7f,	// (0x00032fab) sctrl_sk_top_pane_t1

0x6a57,	// (0x00032f83) aid_touch_sctrl_bottom

0x6a64,	// (0x00032f90) bg_sctrl_sk_pane_cp_ParamLimits

0x6a64,	// (0x00032f90) bg_sctrl_sk_pane_cp

0x6a9a,	// (0x00032fc6) sctrl_sk_bottom_pane_g1

0x6a7f,	// (0x00032fab) sctrl_sk_bottom_pane_t1

0x6aa3,	// (0x00032fcf) cell_sctrl_middle_pane_ParamLimits

0x6aa3,	// (0x00032fcf) cell_sctrl_middle_pane

0x6ac0,	// (0x00032fec) aid_touch_sctrl_middle_ParamLimits

0x6ac0,	// (0x00032fec) aid_touch_sctrl_middle

0x6ad2,	// (0x00032ffe) bg_sctrl_middle_pane_ParamLimits

0x6ad2,	// (0x00032ffe) bg_sctrl_middle_pane

0x6778,	// (0x00032ca4) cell_sctrl_middle_pane_g1_ParamLimits

0x6778,	// (0x00032ca4) cell_sctrl_middle_pane_g1

0x6ae0,	// (0x0003300c) cell_sctrl_middle_pane_g2_ParamLimits

0x6ae0,	// (0x0003300c) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003c23d) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003c23d) cell_sctrl_middle_pane_g

0x99f0,	// (0x00035f1c) bg_sctrl_middle_pane_g1

0x99f8,	// (0x00035f24) bg_sctrl_middle_pane_g2

0x9a00,	// (0x00035f2c) bg_sctrl_middle_pane_g3

0x9a08,	// (0x00035f34) bg_sctrl_middle_pane_g4

0x9a10,	// (0x00035f3c) bg_sctrl_middle_pane_g5

0x9a18,	// (0x00035f44) bg_sctrl_middle_pane_g6

0x9a20,	// (0x00035f4c) bg_sctrl_middle_pane_g7

0x9a28,	// (0x00035f54) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003c242) bg_sctrl_middle_pane_g

0x9a30,	// (0x00035f5c) bg_sctrl_middle_pane_g8_copy1

0x99f0,	// (0x00035f1c) bg_sctrl_sk_pane_g1

0x9a00,	// (0x00035f2c) bg_sctrl_sk_pane_g2

0x99f8,	// (0x00035f24) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0003bda3) bg_sctrl_sk_pane_g

0x7b17,	// (0x00034043) aid_size_touch_scroll_bar

0x9a10,	// (0x00035f3c) bg_sctrl_sk_pane_g4

0x9a08,	// (0x00035f34) bg_sctrl_sk_pane_g5

0x9a18,	// (0x00035f44) bg_sctrl_sk_pane_g6

0x9a20,	// (0x00035f4c) bg_sctrl_sk_pane_g7

0x9a30,	// (0x00035f5c) bg_sctrl_sk_pane_g8

0x9a28,	// (0x00035f54) bg_sctrl_sk_pane_g9

0x8f5e,	// (0x0003548a) popup_fep_china_hwr2_fs_candidate_window

0x8f68,	// (0x00035494) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f68,	// (0x00035494) popup_fep_china_hwr2_fs_control_window

0x6778,	// (0x00032ca4) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003c238) sctrl_sk_top_pane_g

0xd7fb,	// (0x00039d27) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7fb,	// (0x00039d27) aid_fep_china_hwr2_fs_cell

0xd80e,	// (0x00039d3a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd80e,	// (0x00039d3a) bg_popup_fep_shadow_pane_cp4

0xd827,	// (0x00039d53) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd827,	// (0x00039d53) bg_popup_fep_shadow_pane_cp5

0xd839,	// (0x00039d65) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd839,	// (0x00039d65) popup_fep_china_hwr2_fs_control_bar_grid

0xd849,	// (0x00039d75) popup_fep_china_hwr2_fs_control_funtion_grid

0xd851,	// (0x00039d7d) aid_fep_china_hwr2_fs_candi_cell

0x30c9,	// (0x0002f5f5) bg_popup_fep_shadow_pane_cp6

0xd85b,	// (0x00039d87) popup_fep_china_hwr2_fs_candidate_grid

0xd865,	// (0x00039d91) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd865,	// (0x00039d91) cell_fep_china_hwr2_fs_funtion_grid

0xc0a2,	// (0x000385ce) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd87d,	// (0x00039da9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd87d,	// (0x00039da9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd88b,	// (0x00039db7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd88b,	// (0x00039db7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003c253) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003c253) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8a1,	// (0x00039dcd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8a1,	// (0x00039dcd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b6,	// (0x00039de2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b6,	// (0x00039de2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003c258) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003c258) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8d2,	// (0x00039dfe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8da,	// (0x00039e06) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8e2,	// (0x00039e0e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003c25d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8ea,	// (0x00039e16) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8ea,	// (0x00039e16) cell_fep_china_hwr2_fs_candidate_grid

0xd909,	// (0x00039e35) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd911,	// (0x00039e3d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0a2,	// (0x000385ce) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0a2,	// (0x000385ce) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0003c071) cell_fep_china_hwr2_fs_candidate_grid_g

0xd919,	// (0x00039e45) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95cd,	// (0x00035af9) clock_nsta_pane_cp_24_ParamLimits

0x95cd,	// (0x00035af9) clock_nsta_pane_cp_24

0x964d,	// (0x00035b79) indicator_nsta_pane_cp_24_ParamLimits

0x964d,	// (0x00035b79) indicator_nsta_pane_cp_24

0xa725,	// (0x00036c51) heading_pane_g1

0x0001,

0xf8dc,	// (0x0003be08) heading_pane_g

0xb1d5,	// (0x00037701) grid_sct_catagory_button_pane

0xb207,	// (0x00037733) scroll_pane_cp5_ParamLimits

0xbceb,	// (0x00038217) button_value_adjust_pane_cp5_ParamLimits

0xbceb,	// (0x00038217) button_value_adjust_pane_cp5

0xbdd0,	// (0x000382fc) form2_midp_time_pane_ParamLimits

0xd927,	// (0x00039e53) cell_sct_catagory_button_pane_ParamLimits

0xd927,	// (0x00039e53) cell_sct_catagory_button_pane

0xc067,	// (0x00038593) bg_button_pane_cp01_ParamLimits

0xc067,	// (0x00038593) bg_button_pane_cp01

0xc0a2,	// (0x000385ce) cell_sct_catagory_button_pane_g1

0x9388,	// (0x000358b4) popup_tb_extension_window

0xd939,	// (0x00039e65) aid_size_cell_ext_ParamLimits

0xd939,	// (0x00039e65) aid_size_cell_ext

0x75eb,	// (0x00033b17) bg_tb_trans_pane_cp1_ParamLimits

0x75eb,	// (0x00033b17) bg_tb_trans_pane_cp1

0xd959,	// (0x00039e85) grid_tb_ext_pane_ParamLimits

0xd959,	// (0x00039e85) grid_tb_ext_pane

0xd989,	// (0x00039eb5) cell_tb_ext_pane_ParamLimits

0xd989,	// (0x00039eb5) cell_tb_ext_pane

0xd9a0,	// (0x00039ecc) cell_tb_ext_pane_g1_ParamLimits

0xd9a0,	// (0x00039ecc) cell_tb_ext_pane_g1

0xd9bd,	// (0x00039ee9) cell_tb_ext_pane_t1

0x75eb,	// (0x00033b17) list_highlight_pane_cp11_ParamLimits

0x75eb,	// (0x00033b17) list_highlight_pane_cp11

0x4d64,	// (0x00031290) popup_uni_indicator_window_ParamLimits

0x4d64,	// (0x00031290) popup_uni_indicator_window

0x7be8,	// (0x00034114) bg_popup_sub_pane_cp14

0xd9d8,	// (0x00039f04) list_uniindi_pane

0xd9e4,	// (0x00039f10) uniindi_top_pane

0x75eb,	// (0x00033b17) bg_uniindi_top_pane

0xda05,	// (0x00039f31) uniindi_top_pane_g1

0xda1b,	// (0x00039f47) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003c264) uniindi_top_pane_g

0xda45,	// (0x00039f71) uniindi_top_pane_t1

0xda71,	// (0x00039f9d) list_single_uniindi_pane_ParamLimits

0xda71,	// (0x00039f9d) list_single_uniindi_pane

0xc0a2,	// (0x000385ce) bg_uniindi_top_pane_g1

0xda83,	// (0x00039faf) list_single_uniindi_pane_g1

0xda96,	// (0x00039fc2) list_single_uniindi_pane_t1

0x4bd0,	// (0x000310fc) control_bg_pane

0xdabb,	// (0x00039fe7) bg_sctrl_sk_pane_cp1

0xdac4,	// (0x00039ff0) bg_sctrl_sk_pane_cp2

0xdacd,	// (0x00039ff9) control_bg_pane_g1

0xdad6,	// (0x0003a002) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003c26d) control_bg_pane_g

0xbb0e,	// (0x0003803a) cell_indicator_nsta_pane_g1_ParamLimits

0xbb1c,	// (0x00038048) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0003bfd5) cell_indicator_nsta_pane_g_ParamLimits

0x64ea,	// (0x00032a16) form2_midp_time_pane_t1_ParamLimits

0x7959,	// (0x00033e85) main_idle_act4_pane_ParamLimits

0x7959,	// (0x00033e85) main_idle_act4_pane

0x9388,	// (0x000358b4) popup_tb_extension_window_ParamLimits

0xd97b,	// (0x00039ea7) tb_ext_find_pane_ParamLimits

0xd97b,	// (0x00039ea7) tb_ext_find_pane

0xdadf,	// (0x0003a00b) ai_gene_pane_1_cp1

0x8c77,	// (0x000351a3) ai_gene_pane_2_cp1

0xdae7,	// (0x0003a013) list_single_idle_plugin_calendar_pane

0xdaf0,	// (0x0003a01c) list_single_idle_plugin_notification_pane

0xdaf9,	// (0x0003a025) list_single_idle_plugin_player_pane

0xdb02,	// (0x0003a02e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb02,	// (0x0003a02e) list_single_idle_plugin_shortcut_pane

0xdb24,	// (0x0003a050) main_idle_act4_pane_t1

0xdb36,	// (0x0003a062) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003c272) main_idle_act4_pane_t

0xdb48,	// (0x0003a074) middle_sk_idle_act4_pane_ParamLimits

0xdb48,	// (0x0003a074) middle_sk_idle_act4_pane

0xdb5e,	// (0x0003a08a) popup_clock_digital_analogue_window_cp2

0xdb78,	// (0x0003a0a4) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb78,	// (0x0003a0a4) shortcut_wheel_idle_act4_pane

0xc0a2,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g1

0xc0a2,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g2

0xc0a2,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g3

0xc0a2,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g4

0xc0a2,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g5

0xdb8c,	// (0x0003a0b8) shortcut_wheel_idle_act4_pane_g6

0xdb94,	// (0x0003a0c0) shortcut_wheel_idle_act4_pane_g7

0xdb9c,	// (0x0003a0c8) shortcut_wheel_idle_act4_pane_g8

0xdba4,	// (0x0003a0d0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003c277) shortcut_wheel_idle_act4_pane_g

0xc32c,	// (0x00038858) middle_sk_idle_act4_pane_g1_ParamLimits

0xc32c,	// (0x00038858) middle_sk_idle_act4_pane_g1

0xdc08,	// (0x0003a134) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc08,	// (0x0003a134) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003c29a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003c29a) middle_sk_idle_act4_pane_g

0xdc14,	// (0x0003a140) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc14,	// (0x0003a140) middle_sk_idle_act4_pane_t1

0xdc31,	// (0x0003a15d) grid_ai_shortcut_pane_ParamLimits

0xdc31,	// (0x0003a15d) grid_ai_shortcut_pane

0xdc4a,	// (0x0003a176) list_highlight_pane_cp16_ParamLimits

0xdc4a,	// (0x0003a176) list_highlight_pane_cp16

0xdc57,	// (0x0003a183) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc57,	// (0x0003a183) list_single_idle_plugin_shortcut_pane_g1

0xdc63,	// (0x0003a18f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc63,	// (0x0003a18f) list_single_idle_plugin_shortcut_pane_g2

0xdc7d,	// (0x0003a1a9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc7d,	// (0x0003a1a9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003c29f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003c29f) list_single_idle_plugin_shortcut_pane_g

0xdc90,	// (0x0003a1bc) cell_ai_shortcut_pane_ParamLimits

0xdc90,	// (0x0003a1bc) cell_ai_shortcut_pane

0xdcb3,	// (0x0003a1df) cell_ai_shortcut_pane_g1_ParamLimits

0xdcb3,	// (0x0003a1df) cell_ai_shortcut_pane_g1

0xdadf,	// (0x0003a00b) ai_gene_pane_1_cp2

0xdcd5,	// (0x0003a201) ai_gene_pane_2_cp2

0xdcdd,	// (0x0003a209) list_highlight_pane_cp15

0xdce6,	// (0x0003a212) list_single_idle_plugin_calendar_pane_g1

0xdcdd,	// (0x0003a209) list_highlight_pane_cp17

0xdcee,	// (0x0003a21a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcf6,	// (0x0003a222) list_single_idle_plugin_player_pane_g1

0xb43c,	// (0x00037968) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003c2a6) list_single_idle_plugin_player_pane_g

0xdcfe,	// (0x0003a22a) list_single_idle_plugin_player_pane_t1

0xdd0c,	// (0x0003a238) list_single_idle_plugin_player_pane_t2

0xdd1a,	// (0x0003a246) list_single_idle_plugin_player_pane_t3

0xdd28,	// (0x0003a254) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003c2ab) list_single_idle_plugin_player_pane_t

0xdd36,	// (0x0003a262) wait_bar_pane_cp15

0xdd3e,	// (0x0003a26a) grid_ai_notification_pane

0xb43c,	// (0x00037968) list_single_idle_plugin_notification_pane_g1

0xdd47,	// (0x0003a273) cell_ai_notification_pane_ParamLimits

0xdd47,	// (0x0003a273) cell_ai_notification_pane

0xdd54,	// (0x0003a280) cell_ai_notification_pane_g1

0xdd5c,	// (0x0003a288) cell_ai_notification_pane_t1

0xdd6a,	// (0x0003a296) tb_ext_find_button_pane

0xdd72,	// (0x0003a29e) tb_ext_find_pane_g1

0xdd7a,	// (0x0003a2a6) tb_ext_find_pane_t1

0x8540,	// (0x00034a6c) tb_ext_find_button_pane_g1

0xdd88,	// (0x0003a2b4) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003c2b4) tb_ext_find_button_pane_g

0xdb24,	// (0x0003a050) main_idle_act4_pane_t1_ParamLimits

0xdb36,	// (0x0003a062) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003c272) main_idle_act4_pane_t_ParamLimits

0xdb5e,	// (0x0003a08a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb6c,	// (0x0003a098) sat_plugin_idle_act4_pane_ParamLimits

0xdb6c,	// (0x0003a098) sat_plugin_idle_act4_pane

0xdd91,	// (0x0003a2bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd91,	// (0x0003a2bd) sat_plugin_idle_act4_pane_t1

0xdda4,	// (0x0003a2d0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdda4,	// (0x0003a2d0) sat_plugin_idle_act4_pane_t2

0xddb7,	// (0x0003a2e3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddb7,	// (0x0003a2e3) sat_plugin_idle_act4_pane_t3

0xddca,	// (0x0003a2f6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddca,	// (0x0003a2f6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003c2b9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003c2b9) sat_plugin_idle_act4_pane_t

0x4c95,	// (0x000311c1) popup_battery_window_ParamLimits

0x4c95,	// (0x000311c1) popup_battery_window

0x75eb,	// (0x00033b17) bg_popup_sub_pane_cp25_ParamLimits

0x75eb,	// (0x00033b17) bg_popup_sub_pane_cp25

0xdddd,	// (0x0003a309) popup_battery_window_g1_ParamLimits

0xdddd,	// (0x0003a309) popup_battery_window_g1

0xdde9,	// (0x0003a315) popup_battery_window_t1_ParamLimits

0xdde9,	// (0x0003a315) popup_battery_window_t1

0xddfb,	// (0x0003a327) popup_battery_window_t2_ParamLimits

0xddfb,	// (0x0003a327) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003c2c2) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003c2c2) popup_battery_window_t

0x8b42,	// (0x0003506e) midp_canvas_pane_ParamLimits

0x8bb9,	// (0x000350e5) midp_keypad_pane_ParamLimits

0x8bb9,	// (0x000350e5) midp_keypad_pane

0x8eb4,	// (0x000353e0) main_midp_pane_ParamLimits

0xbb98,	// (0x000380c4) signal_pane_g2_cp_ParamLimits

0xde18,	// (0x0003a344) aid_size_cell_midp_keypad_ParamLimits

0xde18,	// (0x0003a344) aid_size_cell_midp_keypad

0xde32,	// (0x0003a35e) midp_keyp_game_grid_pane_ParamLimits

0xde32,	// (0x0003a35e) midp_keyp_game_grid_pane

0xde52,	// (0x0003a37e) midp_keyp_rocker_pane_ParamLimits

0xde52,	// (0x0003a37e) midp_keyp_rocker_pane

0xde81,	// (0x0003a3ad) midp_keyp_sk_left_pane_ParamLimits

0xde81,	// (0x0003a3ad) midp_keyp_sk_left_pane

0xdedb,	// (0x0003a407) midp_keyp_sk_right_pane_ParamLimits

0xdedb,	// (0x0003a407) midp_keyp_sk_right_pane

0x30c9,	// (0x0002f5f5) bg_button_pane_cp03

0xdf35,	// (0x0003a461) midp_keyp_sk_left_pane_g1

0x30c9,	// (0x0002f5f5) bg_button_pane_cp04

0xdf35,	// (0x0003a461) midp_keyp_sk_right_pane_g1

0xc0a2,	// (0x000385ce) midp_keyp_rocker_pane_g1

0xdf3e,	// (0x0003a46a) keyp_game_cell_pane_ParamLimits

0xdf3e,	// (0x0003a46a) keyp_game_cell_pane

0x30c9,	// (0x0002f5f5) bg_button_pane_cp02

0xdf51,	// (0x0003a47d) keyp_game_cell_pane_g1

0x4cdf,	// (0x0003120b) popup_fep_vkb2_window_ParamLimits

0x4cdf,	// (0x0003120b) popup_fep_vkb2_window

0x6b02,	// (0x0003302e) aid_size_cell_vkb2_ParamLimits

0x6b02,	// (0x0003302e) aid_size_cell_vkb2

0x6b4e,	// (0x0003307a) popup_fep_vkb2_window_g1_ParamLimits

0x6b4e,	// (0x0003307a) popup_fep_vkb2_window_g1

0x6b96,	// (0x000330c2) vkb2_area_bottom_pane_ParamLimits

0x6b96,	// (0x000330c2) vkb2_area_bottom_pane

0x6bea,	// (0x00033116) vkb2_area_keypad_pane_ParamLimits

0x6bea,	// (0x00033116) vkb2_area_keypad_pane

0x6c30,	// (0x0003315c) vkb2_area_top_pane_ParamLimits

0x6c30,	// (0x0003315c) vkb2_area_top_pane

0x6caa,	// (0x000331d6) vkb2_top_entry_pane_ParamLimits

0x6caa,	// (0x000331d6) vkb2_top_entry_pane

0x6cd4,	// (0x00033200) vkb2_top_grid_left_pane_ParamLimits

0x6cd4,	// (0x00033200) vkb2_top_grid_left_pane

0x6cf2,	// (0x0003321e) vkb2_top_grid_right_pane_ParamLimits

0x6cf2,	// (0x0003321e) vkb2_top_grid_right_pane

0x6d10,	// (0x0003323c) vkb2_cell_keypad_pane_ParamLimits

0x6d10,	// (0x0003323c) vkb2_cell_keypad_pane

0x6dc6,	// (0x000332f2) vkb2_area_bottom_grid_pane_ParamLimits

0x6dc6,	// (0x000332f2) vkb2_area_bottom_grid_pane

0x6dec,	// (0x00033318) vkb2_area_bottom_pane_g1_ParamLimits

0x6dec,	// (0x00033318) vkb2_area_bottom_pane_g1

0x6e10,	// (0x0003333c) vkb2_area_bottom_pane_g2_ParamLimits

0x6e10,	// (0x0003333c) vkb2_area_bottom_pane_g2

0x6e3e,	// (0x0003336a) vkb2_area_bottom_pane_g3_ParamLimits

0x6e3e,	// (0x0003336a) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003c2c7) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003c2c7) vkb2_area_bottom_pane_g

0x6e9f,	// (0x000333cb) vkb2_top_cell_left_pane_ParamLimits

0x6e9f,	// (0x000333cb) vkb2_top_cell_left_pane

0xdf62,	// (0x0003a48e) vkb2_top_entry_pane_g1_ParamLimits

0xdf62,	// (0x0003a48e) vkb2_top_entry_pane_g1

0xdf70,	// (0x0003a49c) vkb2_top_entry_pane_t1_ParamLimits

0xdf70,	// (0x0003a49c) vkb2_top_entry_pane_t1

0xdf88,	// (0x0003a4b4) vkb2_top_entry_pane_t2_ParamLimits

0xdf88,	// (0x0003a4b4) vkb2_top_entry_pane_t2

0xdfa0,	// (0x0003a4cc) vkb2_top_entry_pane_t3_ParamLimits

0xdfa0,	// (0x0003a4cc) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003c2ce) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003c2ce) vkb2_top_entry_pane_t

0x6eec,	// (0x00033418) vkb2_top_grid_right_pane_g1_ParamLimits

0x6eec,	// (0x00033418) vkb2_top_grid_right_pane_g1

0x6f02,	// (0x0003342e) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f02,	// (0x0003342e) vkb2_top_grid_right_pane_g2

0x6f1a,	// (0x00033446) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f1a,	// (0x00033446) vkb2_top_grid_right_pane_g3

0x6f32,	// (0x0003345e) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f32,	// (0x0003345e) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003c2d5) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003c2d5) vkb2_top_grid_right_pane_g

0x6f48,	// (0x00033474) vkb2_top_cell_left_pane_g1

0x6f5f,	// (0x0003348b) vkb2_cell_keypad_pane_g1_ParamLimits

0x6f5f,	// (0x0003348b) vkb2_cell_keypad_pane_g1

0xdfb6,	// (0x0003a4e2) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfb6,	// (0x0003a4e2) vkb2_cell_keypad_pane_t1

0x6f83,	// (0x000334af) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f83,	// (0x000334af) vkb2_cell_bottom_grid_pane

0x6fbc,	// (0x000334e8) vkb2_cell_bottom_grid_pane_g1

0xdbac,	// (0x0003a0d8) aid_call2_pane_cp02

0xdbb4,	// (0x0003a0e0) aid_call_pane_cp02

0xdbbc,	// (0x0003a0e8) clock_digital_number_pane_cp10

0xdbc4,	// (0x0003a0f0) clock_digital_number_pane_cp11

0xdbcc,	// (0x0003a0f8) clock_digital_number_pane_cp12

0xdbd4,	// (0x0003a100) clock_digital_number_pane_cp13

0xdbdc,	// (0x0003a108) clock_digital_separator_pane_cp10

0x8540,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g1

0x8540,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g2

0xdbe4,	// (0x0003a110) popup_clock_digital_analogue_window_cp2_g3

0x8540,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g4

0xdbe4,	// (0x0003a110) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003c28a) popup_clock_digital_analogue_window_cp2_g

0xdbec,	// (0x0003a118) popup_clock_digital_analogue_window_cp2_t1

0xdbfa,	// (0x0003a126) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003c295) popup_clock_digital_analogue_window_cp2_t

0xc0a2,	// (0x000385ce) clock_digital_number_pane_cp10_g1

0xc0a2,	// (0x000385ce) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c071) clock_digital_number_pane_cp10_g

0xc0a2,	// (0x000385ce) clock_digital_separator_pane_cp10_g1

0xc0a2,	// (0x000385ce) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c071) clock_digital_separator_pane_cp10_g

0xda27,	// (0x00039f53) uniindi_top_pane_g3

0xda38,	// (0x00039f64) uniindi_top_pane_g4

0x6d80,	// (0x000332ac) vkb2_row_keypad_pane_ParamLimits

0x6d80,	// (0x000332ac) vkb2_row_keypad_pane

0x6fd8,	// (0x00033504) vkb2_cell_t_keypad_pane_ParamLimits

0x6fd8,	// (0x00033504) vkb2_cell_t_keypad_pane

0x6fe8,	// (0x00033514) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6fe8,	// (0x00033514) vkb2_cell_t_keypad_pane_cp08

0x6ffd,	// (0x00033529) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ffd,	// (0x00033529) vkb2_cell_t_keypad_pane_cp09

0x7011,	// (0x0003353d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7011,	// (0x0003353d) vkb2_cell_t_keypad_pane_cp01

0x7022,	// (0x0003354e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7022,	// (0x0003354e) vkb2_cell_t_keypad_pane_cp02

0x7033,	// (0x0003355f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7033,	// (0x0003355f) vkb2_cell_t_keypad_pane_cp03

0x7044,	// (0x00033570) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7044,	// (0x00033570) vkb2_cell_t_keypad_pane_cp04

0x7055,	// (0x00033581) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7055,	// (0x00033581) vkb2_cell_t_keypad_pane_cp05

0x7066,	// (0x00033592) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7066,	// (0x00033592) vkb2_cell_t_keypad_pane_cp06

0x7079,	// (0x000335a5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7079,	// (0x000335a5) vkb2_cell_t_keypad_pane_cp07

0x708e,	// (0x000335ba) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x708e,	// (0x000335ba) vkb2_cell_t_keypad_pane_cp10

0x6778,	// (0x00032ca4) vkb2_cell_t_keypad_pane_g1

0xdfcd,	// (0x0003a4f9) vkb2_cell_t_keypad_pane_t1

0x4bd0,	// (0x000310fc) popup_grid_graphic2_window

0xdfdf,	// (0x0003a50b) aid_size_cell_graphic2_ParamLimits

0xdfdf,	// (0x0003a50b) aid_size_cell_graphic2

0xd236,	// (0x00039762) bg_popup_window_pane_cp21_ParamLimits

0xd236,	// (0x00039762) bg_popup_window_pane_cp21

0xe02c,	// (0x0003a558) graphic2_pages_pane_ParamLimits

0xe02c,	// (0x0003a558) graphic2_pages_pane

0xe072,	// (0x0003a59e) grid_graphic2_control_pane_ParamLimits

0xe072,	// (0x0003a59e) grid_graphic2_control_pane

0xe0a0,	// (0x0003a5cc) grid_graphic2_pane_ParamLimits

0xe0a0,	// (0x0003a5cc) grid_graphic2_pane

0xe102,	// (0x0003a62e) cell_graphic2_pane

0x30c9,	// (0x0002f5f5) main_comp_mode_pane

0xd298,	// (0x000397c4) list_ai3_gene_pane_ParamLimits

0xd660,	// (0x00039b8c) bg_popup_window_pane_cp19_ParamLimits

0xd66c,	// (0x00039b98) bg_touch_area_indi_pane_ParamLimits

0xd66c,	// (0x00039b98) bg_touch_area_indi_pane

0xd682,	// (0x00039bae) bg_touch_area_indi_pane_cp01_ParamLimits

0xd682,	// (0x00039bae) bg_touch_area_indi_pane_cp01

0xd69a,	// (0x00039bc6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd69a,	// (0x00039bc6) bg_touch_area_indi_pane_cp02

0xd6b4,	// (0x00039be0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6b4,	// (0x00039be0) bg_touch_area_indi_pane_cp03

0xd6ce,	// (0x00039bfa) popup_slider_window_g1_ParamLimits

0xd6ea,	// (0x00039c16) popup_slider_window_g2_ParamLimits

0xd706,	// (0x00039c32) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003c21f) popup_slider_window_g_ParamLimits

0xd762,	// (0x00039c8e) popup_slider_window_t1_ParamLimits

0xd7d6,	// (0x00039d02) small_volume_slider_vertical_pane_ParamLimits

0xe102,	// (0x0003a62e) cell_graphic2_pane_ParamLimits

0xe157,	// (0x0003a683) bg_button_pane_cp10_ParamLimits

0xe157,	// (0x0003a683) bg_button_pane_cp10

0xe16c,	// (0x0003a698) bg_button_pane_cp11_ParamLimits

0xe16c,	// (0x0003a698) bg_button_pane_cp11

0xe181,	// (0x0003a6ad) graphic2_pages_pane_g1_ParamLimits

0xe181,	// (0x0003a6ad) graphic2_pages_pane_g1

0xe19c,	// (0x0003a6c8) graphic2_pages_pane_g2_ParamLimits

0xe19c,	// (0x0003a6c8) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003c2e3) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003c2e3) graphic2_pages_pane_g

0xe1b4,	// (0x0003a6e0) graphic2_pages_pane_t1_ParamLimits

0xe1b4,	// (0x0003a6e0) graphic2_pages_pane_t1

0xe1ca,	// (0x0003a6f6) cell_graphic2_control_pane_ParamLimits

0xe1ca,	// (0x0003a6f6) cell_graphic2_control_pane

0xe1e4,	// (0x0003a710) cell_graphic2_pane_g1_ParamLimits

0xe1e4,	// (0x0003a710) cell_graphic2_pane_g1

0xe1f1,	// (0x0003a71d) cell_graphic2_pane_g2_ParamLimits

0xe1f1,	// (0x0003a71d) cell_graphic2_pane_g2

0xe1fe,	// (0x0003a72a) cell_graphic2_pane_g3_ParamLimits

0xe1fe,	// (0x0003a72a) cell_graphic2_pane_g3

0xe20b,	// (0x0003a737) cell_graphic2_pane_g4_ParamLimits

0xe20b,	// (0x0003a737) cell_graphic2_pane_g4

0xe218,	// (0x0003a744) cell_graphic2_pane_g5_ParamLimits

0xe218,	// (0x0003a744) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003c2e8) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003c2e8) cell_graphic2_pane_g

0xe233,	// (0x0003a75f) cell_graphic2_pane_t1_ParamLimits

0xe233,	// (0x0003a75f) cell_graphic2_pane_t1

0x9ae2,	// (0x0003600e) grid_highlight_pane_cp11_ParamLimits

0x9ae2,	// (0x0003600e) grid_highlight_pane_cp11

0x7be8,	// (0x00034114) bg_button_pane_cp05

0xe25c,	// (0x0003a788) cell_graphic2_control_pane_g1

0xc0a2,	// (0x000385ce) bg_touch_area_indi_pane_g1

0xe269,	// (0x0003a795) aid_cmod_rocker_key_size

0xe273,	// (0x0003a79f) aid_cmode_itu_key_size

0xe27d,	// (0x0003a7a9) main_cmode_video_pane

0xe287,	// (0x0003a7b3) main_comp_mode_itu_pane

0xe293,	// (0x0003a7bf) main_comp_mode_rocker_pane

0xe29f,	// (0x0003a7cb) cell_cmode_rocker_pane_ParamLimits

0xe29f,	// (0x0003a7cb) cell_cmode_rocker_pane

0xe2b3,	// (0x0003a7df) cell_cmode_itu_pane_ParamLimits

0xe2b3,	// (0x0003a7df) cell_cmode_itu_pane

0x7be8,	// (0x00034114) bg_button_pane_cp06_ParamLimits

0x7be8,	// (0x00034114) bg_button_pane_cp06

0xc32c,	// (0x00038858) cell_cmode_rocker_pane_g1_ParamLimits

0xc32c,	// (0x00038858) cell_cmode_rocker_pane_g1

0xd87d,	// (0x00039da9) cell_cmode_rocker_pane_g2_ParamLimits

0xd87d,	// (0x00039da9) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003c2f8) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003c2f8) cell_cmode_rocker_pane_g

0x30c9,	// (0x0002f5f5) bg_button_pane_cp07

0xe2ca,	// (0x0003a7f6) cell_cmode_itu_pane_g1

0xe2d3,	// (0x0003a7ff) cell_cmode_itu_pane_t1

0xe2e1,	// (0x0003a80d) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003c2fd) cell_cmode_itu_pane_t

0xdaab,	// (0x00039fd7) aid_touch_ctrl_left

0xdab3,	// (0x00039fdf) aid_touch_ctrl_right

0x30c9,	// (0x0002f5f5) compa_mode_pane

0xe2ef,	// (0x0003a81b) aid_cmod_rocker_key_size_cp

0xe2f9,	// (0x0003a825) aid_cmode_itu_key_size_cp

0xe303,	// (0x0003a82f) compa_mode_pane_g1

0xe30b,	// (0x0003a837) compa_mode_pane_g2

0xe313,	// (0x0003a83f) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003c302) compa_mode_pane_g

0xe31b,	// (0x0003a847) main_comp_mode_itu_pane_cp

0xe323,	// (0x0003a84f) main_comp_mode_rocker_pane_cp

0xe32b,	// (0x0003a857) cell_cmode_itu_pane_cp_ParamLimits

0xe32b,	// (0x0003a857) cell_cmode_itu_pane_cp

0xe340,	// (0x0003a86c) cell_cmode_rocker_pane_cp_ParamLimits

0xe340,	// (0x0003a86c) cell_cmode_rocker_pane_cp

0x7be8,	// (0x00034114) bg_button_pane_cp06_cp_ParamLimits

0x7be8,	// (0x00034114) bg_button_pane_cp06_cp

0xc32c,	// (0x00038858) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc32c,	// (0x00038858) cell_cmode_rocker_pane_g1_cp

0xc0a2,	// (0x000385ce) cell_cmode_rocker_pane_g2_cp

0x30c9,	// (0x0002f5f5) bg_button_pane_cp07_cp

0xe352,	// (0x0003a87e) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0003a887) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0003a887) cell_cmode_itu_pane_t2_cp

0xafb5,	// (0x000374e1) settings_code_pane_cp2

0x7361,	// (0x0003388d) bg_popup_window_pane_cp3_ParamLimits

0x77d9,	// (0x00033d05) heading_pane_cp3_ParamLimits

0x77e5,	// (0x00033d11) listscroll_popup_graphic_pane_ParamLimits

0x650b,	// (0x00032a37) fep_hwr_aid_pane_ParamLimits

0x6a57,	// (0x00032f83) aid_touch_sctrl_top_ParamLimits

0x6a72,	// (0x00032f9e) sctrl_sk_top_pane_g1_ParamLimits

0x6778,	// (0x00032ca4) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003c238) sctrl_sk_top_pane_g_ParamLimits

0x6a7f,	// (0x00032fab) sctrl_sk_top_pane_t1_ParamLimits

0x6a57,	// (0x00032f83) aid_touch_sctrl_bottom_ParamLimits

0x6a7f,	// (0x00032fab) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9f1,	// (0x00039f1d) aid_area_touch_clock

0x6c72,	// (0x0003319e) aid_vkb2_area_top_pane_cell_ParamLimits

0x6c72,	// (0x0003319e) aid_vkb2_area_top_pane_cell

0x6da2,	// (0x000332ce) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6da2,	// (0x000332ce) aid_vkb2_area_bottom_pane_cell

0xdf5a,	// (0x0003a486) popup_char_count_window

0xe369,	// (0x0003a895) popup_char_count_window_g1

0xe372,	// (0x0003a89e) popup_char_count_window_g2

0xe37b,	// (0x0003a8a7) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003c309) popup_char_count_window_g

0xe384,	// (0x0003a8b0) popup_char_count_window_t1

0x6b2c,	// (0x00033058) popup_fep_char_preview_window_ParamLimits

0x6b2c,	// (0x00033058) popup_fep_char_preview_window

0x6c90,	// (0x000331bc) vkb2_top_candi_pane_ParamLimits

0x6c90,	// (0x000331bc) vkb2_top_candi_pane

0xe392,	// (0x0003a8be) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0003a8be) cell_vkb2_top_candi_pane

0x70a3,	// (0x000335cf) bg_popup_fep_char_preview_window_ParamLimits

0x70a3,	// (0x000335cf) bg_popup_fep_char_preview_window

0x70b1,	// (0x000335dd) popup_fep_char_preview_window_t1_ParamLimits

0x70b1,	// (0x000335dd) popup_fep_char_preview_window_t1

0xe3e3,	// (0x0003a90f) bg_popup_fep_char_preview_window_g1

0xe3eb,	// (0x0003a917) bg_popup_fep_char_preview_window_g2

0xe3f3,	// (0x0003a91f) bg_popup_fep_char_preview_window_g3

0xe3fb,	// (0x0003a927) bg_popup_fep_char_preview_window_g4

0xe403,	// (0x0003a92f) bg_popup_fep_char_preview_window_g5

0x70eb,	// (0x00033617) bg_popup_fep_char_preview_window_g6

0xe40b,	// (0x0003a937) bg_popup_fep_char_preview_window_g7

0xe413,	// (0x0003a93f) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x0003a947) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003c310) bg_popup_fep_char_preview_window_g

0x6778,	// (0x00032ca4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6778,	// (0x00032ca4) cell_vkb2_top_candi_pane_g1

0x6786,	// (0x00032cb2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6786,	// (0x00032cb2) cell_vkb2_top_candi_pane_g2

0xe00b,	// (0x0003a537) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe00b,	// (0x0003a537) cell_vkb2_top_candi_pane_g3

0x70f3,	// (0x0003361f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x70f3,	// (0x0003361f) cell_vkb2_top_candi_pane_g4

0xc82b,	// (0x00038d57) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc82b,	// (0x00038d57) cell_vkb2_top_candi_pane_g5

0x7114,	// (0x00033640) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7114,	// (0x00033640) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003c323) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003c323) cell_vkb2_top_candi_pane_g

0x7122,	// (0x0003364e) cell_vkb2_top_candi_pane_t1

0x6047,	// (0x00032573) aid_size_touch_slider_mark_ParamLimits

0x6047,	// (0x00032573) aid_size_touch_slider_mark

0xe062,	// (0x0003a58e) grid_graphic2_catg_pane_ParamLimits

0xe062,	// (0x0003a58e) grid_graphic2_catg_pane

0xe0dc,	// (0x0003a608) popup_grid_graphic2_window_t1_ParamLimits

0xe0dc,	// (0x0003a608) popup_grid_graphic2_window_t1

0xe0ee,	// (0x0003a61a) popup_grid_graphic2_window_t2_ParamLimits

0xe0ee,	// (0x0003a61a) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003c2de) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003c2de) popup_grid_graphic2_window_t

0x7be8,	// (0x00034114) bg_button_pane_cp05_ParamLimits

0xe25c,	// (0x0003a788) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0003a94f) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0003a94f) cell_graphic2_catg_pane

0x30c9,	// (0x0002f5f5) bg_button_pane_cp12

0xe435,	// (0x0003a961) cell_graphic2_catg_pane_g1

0xd9bd,	// (0x00039ee9) cell_tb_ext_pane_t1_ParamLimits

0x6ebf,	// (0x000333eb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ebf,	// (0x000333eb) vkb2_top_cell_right_narrow_pane

0x6ed7,	// (0x00033403) vkb2_top_cell_right_wide_pane_ParamLimits

0x6ed7,	// (0x00033403) vkb2_top_cell_right_wide_pane

0x64fd,	// (0x00032a29) bg_vkb2_func_pane_ParamLimits

0x64fd,	// (0x00032a29) bg_vkb2_func_pane

0x6f48,	// (0x00033474) vkb2_top_cell_left_pane_g1_ParamLimits

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp03

0x6fbc,	// (0x000334e8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99f8,	// (0x00035f24) bg_vkb2_func_pane_g1

0x9a00,	// (0x00035f2c) bg_vkb2_func_pane_g2

0x9a10,	// (0x00035f3c) bg_vkb2_func_pane_g3

0x9a08,	// (0x00035f34) bg_vkb2_func_pane_g4

0x9a18,	// (0x00035f44) bg_vkb2_func_pane_g5

0x9a20,	// (0x00035f4c) bg_vkb2_func_pane_g6

0x9a28,	// (0x00035f54) bg_vkb2_func_pane_g7

0x9a30,	// (0x00035f5c) bg_vkb2_func_pane_g8

0x99f0,	// (0x00035f1c) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003c330) bg_vkb2_func_pane_g

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp01

0x6f48,	// (0x00033474) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f48,	// (0x00033474) vkb2_top_cell_right_wide_pane_g1

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64fd,	// (0x00032a29) bg_vkb2_fuc_pane_cp02

0x6fbc,	// (0x000334e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6fbc,	// (0x000334e8) vkb2_top_cell_right_narrow_pane_g1

0xd5de,	// (0x00039b0a) aid_touch_area_decrease_ParamLimits

0xd5de,	// (0x00039b0a) aid_touch_area_decrease

0xd602,	// (0x00039b2e) aid_touch_area_increase_ParamLimits

0xd602,	// (0x00039b2e) aid_touch_area_increase

0xd60e,	// (0x00039b3a) aid_touch_area_mute_ParamLimits

0xd60e,	// (0x00039b3a) aid_touch_area_mute

0xd632,	// (0x00039b5e) aid_touch_area_slider_ParamLimits

0xd632,	// (0x00039b5e) aid_touch_area_slider

0xd722,	// (0x00039c4e) popup_slider_window_g4_ParamLimits

0xd722,	// (0x00039c4e) popup_slider_window_g4

0xd72e,	// (0x00039c5a) popup_slider_window_g5_ParamLimits

0xd72e,	// (0x00039c5a) popup_slider_window_g5

0xd750,	// (0x00039c7c) popup_slider_window_g6_ParamLimits

0xd750,	// (0x00039c7c) popup_slider_window_g6

0xd790,	// (0x00039cbc) popup_slider_window_t2_ParamLimits

0xd790,	// (0x00039cbc) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003c22c) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003c22c) popup_slider_window_t

0xd7a8,	// (0x00039cd4) slider_pane_ParamLimits

0xd7a8,	// (0x00039cd4) slider_pane

0xe43e,	// (0x0003a96a) slider_pane_g1_ParamLimits

0xe43e,	// (0x0003a96a) slider_pane_g1

0xe452,	// (0x0003a97e) slider_pane_g2_ParamLimits

0xe452,	// (0x0003a97e) slider_pane_g2

0xe468,	// (0x0003a994) slider_pane_g3_ParamLimits

0xe468,	// (0x0003a994) slider_pane_g3

0x0003,

0xfe17,	// (0x0003c343) slider_pane_g_ParamLimits

0xfe17,	// (0x0003c343) slider_pane_g

0x93ea,	// (0x00035916) popup_tb_float_extension_window_ParamLimits

0x93ea,	// (0x00035916) popup_tb_float_extension_window

0xe494,	// (0x0003a9c0) aid_size_cell_tb_float_ext

0x30c9,	// (0x0002f5f5) bg_popup_sub_window_cp28

0xe4a0,	// (0x0003a9cc) grid_tb_float_ext_pane

0xe4ac,	// (0x0003a9d8) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0003a9d8) cell_tb_float_ext_pane

0xe4c8,	// (0x0003a9f4) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0003a9fd) grid_highlight_pane_cp12

0x6652,	// (0x00032b7e) cell_last_hwr_side_pane_ParamLimits

0x6652,	// (0x00032b7e) cell_last_hwr_side_pane

0xc0a2,	// (0x000385ce) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0003aa06) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003c34c) cell_last_hwr_side_pane_g

0x6e6e,	// (0x0003339a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e6e,	// (0x0003339a) vkb2_area_bottom_space_btn_pane

0x6778,	// (0x00032ca4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfcd,	// (0x0003a4f9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7122,	// (0x0003364e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7140,	// (0x0003366c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7140,	// (0x0003366c) vkb2_area_bottom_space_btn_pane_g1

0x717a,	// (0x000336a6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x717a,	// (0x000336a6) vkb2_area_bottom_space_btn_pane_g2

0x71b0,	// (0x000336dc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x71b0,	// (0x000336dc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003c351) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003c351) vkb2_area_bottom_space_btn_pane_g

0x65c2,	// (0x00032aee) cel_fep_hwr_func_pane_ParamLimits

0x65c2,	// (0x00032aee) cel_fep_hwr_func_pane

0x65fe,	// (0x00032b2a) cell_hwr_side_button_pane_ParamLimits

0x65fe,	// (0x00032b2a) cell_hwr_side_button_pane

0xd9f1,	// (0x00039f1d) aid_area_touch_clock_ParamLimits

0x75eb,	// (0x00033b17) bg_uniindi_top_pane_ParamLimits

0xda05,	// (0x00039f31) uniindi_top_pane_g1_ParamLimits

0xda1b,	// (0x00039f47) uniindi_top_pane_g2_ParamLimits

0xda27,	// (0x00039f53) uniindi_top_pane_g3_ParamLimits

0xda38,	// (0x00039f64) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003c264) uniindi_top_pane_g_ParamLimits

0xda45,	// (0x00039f71) uniindi_top_pane_t1_ParamLimits

0x75eb,	// (0x00033b17) bg_vkb2_func_pane_cp01_ParamLimits

0x75eb,	// (0x00033b17) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0003aa0f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0003aa0f) cel_fep_hwr_func_pane_g1

0x75eb,	// (0x00033b17) bg_vkb2_func_pane_cp02_ParamLimits

0x75eb,	// (0x00033b17) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0003aa0f) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0003aa0f) cell_hwr_side_button_pane_g1

0x9871,	// (0x00035d9d) status_pane_g4_ParamLimits

0x9871,	// (0x00035d9d) status_pane_g4

0x988b,	// (0x00035db7) status_pane_t1

0xbe3e,	// (0x0003836a) form2_midp_gauge_slider_cont_pane

0xbe46,	// (0x00038372) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe58,	// (0x00038384) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe6a,	// (0x00038396) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0003c024) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe7c,	// (0x000383a8) form2_midp_slider_pane_ParamLimits

0x6af4,	// (0x00033020) aid_size_cell_func_vkb2_ParamLimits

0x6af4,	// (0x00033020) aid_size_cell_func_vkb2

0xe480,	// (0x0003a9ac) slider_pane_g4_ParamLimits

0xe480,	// (0x0003a9ac) slider_pane_g4

0x71fa,	// (0x00033726) form2_midp_gauge_slider_pane_t2_cp01

0x7208,	// (0x00033734) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7208,	// (0x00033734) form2_midp_gauge_slider_pane_t3_cp01

0x7225,	// (0x00033751) form2_midp_slider_pane_cp01

0x30c9,	// (0x0002f5f5) navi_smil_pane

0xe51c,	// (0x0003aa48) navi_smil_pane_g1

0xe524,	// (0x0003aa50) navi_smil_pane_t1

0xe4f1,	// (0x0003aa1d) form2_midp_slider_pane_g1

0xe4fa,	// (0x0003aa26) form2_midp_slider_pane_g2

0xe502,	// (0x0003aa2e) form2_midp_slider_pane_g3

0xe4f1,	// (0x0003aa1d) form2_midp_slider_pane_g4

0xe50a,	// (0x0003aa36) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003c35a) form2_midp_slider_pane_g

0x71ea,	// (0x00033716) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x71ea,	// (0x00033716) vkb2_area_bottom_space_btn_pane_g4

0x9689,	// (0x00035bb5) lc0_navi_pane_ParamLimits

0x9689,	// (0x00035bb5) lc0_navi_pane

0x9705,	// (0x00035c31) lc0_stat_indi_pane_ParamLimits

0x9705,	// (0x00035c31) lc0_stat_indi_pane

0x971c,	// (0x00035c48) ls0_title_pane_ParamLimits

0x971c,	// (0x00035c48) ls0_title_pane

0x7be8,	// (0x00034114) bg_popup_sub_pane_cp14_ParamLimits

0xd9d8,	// (0x00039f04) list_uniindi_pane_ParamLimits

0xd9e4,	// (0x00039f10) uniindi_top_pane_ParamLimits

0xda83,	// (0x00039faf) list_single_uniindi_pane_g1_ParamLimits

0xda96,	// (0x00039fc2) list_single_uniindi_pane_t1_ParamLimits

0x722e,	// (0x0003375a) lc0_stat_clock_pane_ParamLimits

0x722e,	// (0x0003375a) lc0_stat_clock_pane

0xe532,	// (0x0003aa5e) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0003aa5e) lc0_stat_indi_pane_g1

0xe53f,	// (0x0003aa6b) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0003aa6b) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003c365) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003c365) lc0_stat_indi_pane_g

0x723b,	// (0x00033767) lc0_uni_indicator_pane_ParamLimits

0x723b,	// (0x00033767) lc0_uni_indicator_pane

0xe54c,	// (0x0003aa78) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0003aa78) ls0_title_pane_g1

0xe560,	// (0x0003aa8c) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0003aa8c) ls0_title_pane_t1

0x7248,	// (0x00033774) lc0_uni_indicator_pane_g1_ParamLimits

0x7248,	// (0x00033774) lc0_uni_indicator_pane_g1

0xe596,	// (0x0003aac2) lc0_stat_clock_pane_t1

0x30c9,	// (0x0002f5f5) main_ai5_pane

0xe5a4,	// (0x0003aad0) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0003aad0) ai5_sk_pane

0xe5b1,	// (0x0003aadd) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0003aadd) cell_ai5_widget_pane

0xe627,	// (0x0003ab53) aid_size_cell_widget_grid

0xe63b,	// (0x0003ab67) bg_ai5_widget_pane_ParamLimits

0xe63b,	// (0x0003ab67) bg_ai5_widget_pane

0xe663,	// (0x0003ab8f) cell_ai5_widget_pane_g2

0xe673,	// (0x0003ab9f) cell_ai5_widget_pane_g3

0xe692,	// (0x0003abbe) cell_ai5_widget_pane_g4

0xe69e,	// (0x0003abca) cell_ai5_widget_pane_g5

0xe6aa,	// (0x0003abd6) cell_ai5_widget_pane_g6

0xe6b8,	// (0x0003abe4) cell_ai5_widget_pane_g7

0xe700,	// (0x0003ac2c) cell_ai5_widget_pane_t1_ParamLimits

0xe700,	// (0x0003ac2c) cell_ai5_widget_pane_t1

0xe71d,	// (0x0003ac49) cell_ai5_widget_pane_t2_ParamLimits

0xe71d,	// (0x0003ac49) cell_ai5_widget_pane_t2

0xe735,	// (0x0003ac61) cell_ai5_widget_pane_t3_ParamLimits

0xe735,	// (0x0003ac61) cell_ai5_widget_pane_t3

0xe74d,	// (0x0003ac79) cell_ai5_widget_pane_t4_ParamLimits

0xe74d,	// (0x0003ac79) cell_ai5_widget_pane_t4

0xe767,	// (0x0003ac93) cell_ai5_widget_pane_t5_ParamLimits

0xe767,	// (0x0003ac93) cell_ai5_widget_pane_t5

0xe786,	// (0x0003acb2) cell_ai5_widget_pane_t6_ParamLimits

0xe786,	// (0x0003acb2) cell_ai5_widget_pane_t6

0xe798,	// (0x0003acc4) cell_ai5_widget_pane_t7_ParamLimits

0xe798,	// (0x0003acc4) cell_ai5_widget_pane_t7

0xe7b1,	// (0x0003acdd) cell_ai5_widget_pane_t8_ParamLimits

0xe7b1,	// (0x0003acdd) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003c37f) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003c37f) cell_ai5_widget_pane_t

0xe7fd,	// (0x0003ad29) grid_ai5_widget_pane

0x7be8,	// (0x00034114) highlight_cell_ai5_widget_pane_ParamLimits

0x7be8,	// (0x00034114) highlight_cell_ai5_widget_pane

0xe814,	// (0x0003ad40) ai5_sk_left_pane

0xe81e,	// (0x0003ad4a) ai5_sk_middle_pane

0xe828,	// (0x0003ad54) ai5_sk_right_pane

0xe832,	// (0x0003ad5e) bg_ai5_widget_pane_g1_ParamLimits

0xe832,	// (0x0003ad5e) bg_ai5_widget_pane_g1

0xe83e,	// (0x0003ad6a) bg_ai5_widget_pane_g2_ParamLimits

0xe83e,	// (0x0003ad6a) bg_ai5_widget_pane_g2

0xe84a,	// (0x0003ad76) bg_ai5_widget_pane_g3_ParamLimits

0xe84a,	// (0x0003ad76) bg_ai5_widget_pane_g3

0xe856,	// (0x0003ad82) bg_ai5_widget_pane_g4_ParamLimits

0xe856,	// (0x0003ad82) bg_ai5_widget_pane_g4

0xe862,	// (0x0003ad8e) bg_ai5_widget_pane_g5_ParamLimits

0xe862,	// (0x0003ad8e) bg_ai5_widget_pane_g5

0xe86e,	// (0x0003ad9a) bg_ai5_widget_pane_g6_ParamLimits

0xe86e,	// (0x0003ad9a) bg_ai5_widget_pane_g6

0xe87a,	// (0x0003ada6) bg_ai5_widget_pane_g7_ParamLimits

0xe87a,	// (0x0003ada6) bg_ai5_widget_pane_g7

0xe886,	// (0x0003adb2) bg_ai5_widget_pane_g8_ParamLimits

0xe886,	// (0x0003adb2) bg_ai5_widget_pane_g8

0xe892,	// (0x0003adbe) bg_ai5_widget_pane_g9_ParamLimits

0xe892,	// (0x0003adbe) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003c394) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003c394) bg_ai5_widget_pane_g

0xe8b9,	// (0x0003ade5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b9,	// (0x0003ade5) cell_shortcut_ai5_widget_pane

0x742d,	// (0x00033959) bg_cell_shortcut_ai5_widget_pane

0xe8cb,	// (0x0003adf7) cell_grid_ai5_widget_pane_g1

0xe8d4,	// (0x0003ae00) highlight_cell_shortcut_ai5_widget_pane

0x99f8,	// (0x00035f24) ai5_sk_left_pane_g1

0xe8dc,	// (0x0003ae08) ai5_sk_left_pane_g2

0xe8e4,	// (0x0003ae10) ai5_sk_left_pane_g3

0xe8ec,	// (0x0003ae18) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003c3a7) ai5_sk_left_pane_g

0xe8f4,	// (0x0003ae20) ai5_sk_left_pane_t1

0x9a00,	// (0x00035f2c) ai5_sk_right_pane_g1

0xe902,	// (0x0003ae2e) ai5_sk_right_pane_g2

0xe90a,	// (0x0003ae36) ai5_sk_right_pane_g3

0xe912,	// (0x0003ae3e) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003c3b0) ai5_sk_right_pane_g

0xe91a,	// (0x0003ae46) ai5_sk_right_pane_t1

0x9a00,	// (0x00035f2c) ai5_sk_middle_pane_g1

0x99f8,	// (0x00035f24) ai5_sk_middle_pane_g2

0x9a18,	// (0x00035f44) ai5_sk_middle_pane_g3

0xe90a,	// (0x0003ae36) ai5_sk_middle_pane_g4

0xe8e4,	// (0x0003ae10) ai5_sk_middle_pane_g5

0xe928,	// (0x0003ae54) ai5_sk_middle_pane_g6

0xe930,	// (0x0003ae5c) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003c3b9) ai5_sk_middle_pane_g

0x950b,	// (0x00035a37) aid_touch_area_size_lc0_ParamLimits

0x950b,	// (0x00035a37) aid_touch_area_size_lc0

0x67a7,	// (0x00032cd3) cell_hwr_candidate_pane_t1_ParamLimits

0x9529,	// (0x00035a55) aid_touch_navi_pane

0x981b,	// (0x00035d47) status_dt_navi_pane_ParamLimits

0x981b,	// (0x00035d47) status_dt_navi_pane

0x9828,	// (0x00035d54) status_dt_sta_pane_ParamLimits

0x9828,	// (0x00035d54) status_dt_sta_pane

0xe938,	// (0x0003ae64) dt_sta_controll_pane

0xe945,	// (0x0003ae71) dt_sta_indi_pane

0xe956,	// (0x0003ae82) dt_sta_title_pane

0x75eb,	// (0x00033b17) bg_dt_sta_indi_pane_ParamLimits

0x75eb,	// (0x00033b17) bg_dt_sta_indi_pane

0xe969,	// (0x0003ae95) dt_sta_battery_pane

0xe971,	// (0x0003ae9d) dt_sta_indi_pane_g1

0xe97a,	// (0x0003aea6) dt_sta_indi_pane_g2

0xe983,	// (0x0003aeaf) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003c3c8) dt_sta_indi_pane_g

0xe98c,	// (0x0003aeb8) dt_sta_signal_pane

0x7be8,	// (0x00034114) bg_dt_sta_title_pane_ParamLimits

0x7be8,	// (0x00034114) bg_dt_sta_title_pane

0xe995,	// (0x0003aec1) dt_sta_title_pane_g1

0xe99d,	// (0x0003aec9) dt_sta_title_pane_t1_ParamLimits

0xe99d,	// (0x0003aec9) dt_sta_title_pane_t1

0x30c9,	// (0x0002f5f5) bg_dt_sta_control_pane

0xe9b2,	// (0x0003aede) dt_sta_controll_pane_g1

0xe9bb,	// (0x0003aee7) bg_dt_sta_title_pane_g1

0xe9c4,	// (0x0003aef0) bg_dt_sta_title_pane_g2

0xe9cd,	// (0x0003aef9) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003c3cf) bg_dt_sta_title_pane_g

0xc0a2,	// (0x000385ce) bg_dt_sta_indi_pane_g1

0xe9d6,	// (0x0003af02) dt_sta_signal_pane_g1

0xe9de,	// (0x0003af0a) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003c3d6) dt_sta_signal_pane_g

0xe9e6,	// (0x0003af12) dt_sta_battery_pane_g1

0xe9ef,	// (0x0003af1b) dt_sta_battery_pane_t1

0xc0a2,	// (0x000385ce) bg_dt_sta_control_pane_g1

0x862c,	// (0x00034b58) fep_china_uni_eep_pane

0x8634,	// (0x00034b60) fep_china_uni_entry_pane_ParamLimits

0x8644,	// (0x00034b70) popup_fep_china_uni_window_g1_ParamLimits

0x8654,	// (0x00034b80) popup_fep_china_uni_window_g2_ParamLimits

0x8654,	// (0x00034b80) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003bc61) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003bc61) popup_fep_china_uni_window_g

0xe9fe,	// (0x0003af2a) fep_china_uni_eep_pane_g1

0xea06,	// (0x0003af32) fep_china_uni_eep_pane_t1

0xe513,	// (0x0003aa3f) aid_touch_area_size_smil_player

0x9681,	// (0x00035bad) lc0_clock_pane

0x987f,	// (0x00035dab) status_pane_g5_ParamLimits

0x987f,	// (0x00035dab) status_pane_g5

0x906f,	// (0x0003559b) popup_keymap_window

0x983d,	// (0x00035d69) status_icon_pane

0xe673,	// (0x0003ab9f) cell_ai5_widget_pane_g3_ParamLimits

0xe692,	// (0x0003abbe) cell_ai5_widget_pane_g4_ParamLimits

0xe69e,	// (0x0003abca) cell_ai5_widget_pane_g5_ParamLimits

0xe6c4,	// (0x0003abf0) cell_ai5_widget_pane_g8_ParamLimits

0xe6c4,	// (0x0003abf0) cell_ai5_widget_pane_g8

0xe6d8,	// (0x0003ac04) cell_ai5_widget_pane_g9_ParamLimits

0xe6d8,	// (0x0003ac04) cell_ai5_widget_pane_g9

0xe6ec,	// (0x0003ac18) cell_ai5_widget_pane_g10_ParamLimits

0xe6ec,	// (0x0003ac18) cell_ai5_widget_pane_g10

0xea15,	// (0x0003af41) status_icon_pane_g1

0x30c9,	// (0x0002f5f5) bg_popup_sub_pane_cp13

0xea1d,	// (0x0003af49) popup_keymap_window_t1

0x8e09,	// (0x00035335) control_pane_g6_ParamLimits

0x8e09,	// (0x00035335) control_pane_g6

0x8e16,	// (0x00035342) control_pane_g7_ParamLimits

0x8e16,	// (0x00035342) control_pane_g7

0x8e23,	// (0x0003534f) control_pane_g8_ParamLimits

0x8e23,	// (0x0003534f) control_pane_g8

0xe938,	// (0x0003ae64) dt_sta_controll_pane_ParamLimits

0xe945,	// (0x0003ae71) dt_sta_indi_pane_ParamLimits

0xe956,	// (0x0003ae82) dt_sta_title_pane_ParamLimits

0x7b20,	// (0x0003404c) aid_size_touch_scroll_bar_cale

0x4cad,	// (0x000311d9) popup_discreet_window_ParamLimits

0x4cad,	// (0x000311d9) popup_discreet_window

0x4d3b,	// (0x00031267) popup_sk_window

0xa0a2,	// (0x000365ce) bg_popup_sub_pane_cp28_ParamLimits

0xa0a2,	// (0x000365ce) bg_popup_sub_pane_cp28

0xea2b,	// (0x0003af57) popup_discreet_window_g1_ParamLimits

0xea2b,	// (0x0003af57) popup_discreet_window_g1

0xea4b,	// (0x0003af77) popup_discreet_window_t1_ParamLimits

0xea4b,	// (0x0003af77) popup_discreet_window_t1

0xea69,	// (0x0003af95) popup_discreet_window_t2_ParamLimits

0xea69,	// (0x0003af95) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003c3db) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003c3db) popup_discreet_window_t

0x725b,	// (0x00033787) popup_sk_window_g1

0x7265,	// (0x00033791) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003c3e2) popup_sk_window_g

0xeabb,	// (0x0003afe7) popup_sk_window_t1

0xeac9,	// (0x0003aff5) popup_sk_window_t1_copy1

0xe663,	// (0x0003ab8f) cell_ai5_widget_pane_g2_ParamLimits

0xe7c3,	// (0x0003acef) cell_ai5_widget_pane_t9_ParamLimits

0xe7c3,	// (0x0003acef) cell_ai5_widget_pane_t9

0x30c9,	// (0x0002f5f5) main_fep_fshwr2_pane

0xead7,	// (0x0003b003) aid_fshwr2_btn_pane

0xeadf,	// (0x0003b00b) aid_fshwr2_syb_pane

0xeae7,	// (0x0003b013) aid_fshwr2_txt_pane

0xeaef,	// (0x0003b01b) fshwr2_func_candi_pane

0xeaf9,	// (0x0003b025) fshwr2_hwr_syb_pane

0xeb03,	// (0x0003b02f) fshwr2_icf_pane

0x30c9,	// (0x0002f5f5) fshwr2_icf_bg_pane

0xeb25,	// (0x0003b051) fshwr2_icf_pane_t1_ParamLimits

0xeb25,	// (0x0003b051) fshwr2_icf_pane_t1

0xc0a2,	// (0x000385ce) fshwr2_func_candi_pane_g1

0xeb3c,	// (0x0003b068) fshwr2_func_candi_row_pane_ParamLimits

0xeb3c,	// (0x0003b068) fshwr2_func_candi_row_pane

0xeb4d,	// (0x0003b079) cell_fshwr2_syb_pane_ParamLimits

0xeb4d,	// (0x0003b079) cell_fshwr2_syb_pane

0xc32c,	// (0x00038858) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc32c,	// (0x00038858) fshwr2_hwr_syb_pane_g1

0x30c9,	// (0x0002f5f5) bg_popup_call_pane_cp01

0xeb67,	// (0x0003b093) fshwr2_func_candi_cell_pane_ParamLimits

0xeb67,	// (0x0003b093) fshwr2_func_candi_cell_pane

0xeb99,	// (0x0003b0c5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb99,	// (0x0003b0c5) fshwr2_func_candi_cell_bg_pane

0xebb3,	// (0x0003b0df) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebb3,	// (0x0003b0df) fshwr2_func_candi_cell_pane_g1

0xebd3,	// (0x0003b0ff) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd3,	// (0x0003b0ff) fshwr2_func_candi_cell_pane_t1

0x30c9,	// (0x0002f5f5) bg_button_pane_cp08

0x8b2e,	// (0x0003505a) cell_fshwr2_syb_bg_pane

0xebe6,	// (0x0003b112) cell_fshwr2_syb_bg_pane_g1

0xebee,	// (0x0003b11a) cell_fshwr2_syb_bg_pane_t1

0x7be8,	// (0x00034114) main_tmo_pane

0xabcc,	// (0x000370f8) uni_indicator_pane_g1_ParamLimits

0xabe1,	// (0x0003710d) uni_indicator_pane_g2_ParamLimits

0xabf7,	// (0x00037123) uni_indicator_pane_g3_ParamLimits

0xac0d,	// (0x00037139) uni_indicator_pane_g4_ParamLimits

0xac0d,	// (0x00037139) uni_indicator_pane_g4

0xac21,	// (0x0003714d) uni_indicator_pane_g5_ParamLimits

0xac21,	// (0x0003714d) uni_indicator_pane_g5

0xac35,	// (0x00037161) uni_indicator_pane_g6_ParamLimits

0xac35,	// (0x00037161) uni_indicator_pane_g6

0xf932,	// (0x0003be5e) uni_indicator_pane_g_ParamLimits

0xd5ae,	// (0x00039ada) popup_tmo_note_window_ParamLimits

0xd5ae,	// (0x00039ada) popup_tmo_note_window

0x30c9,	// (0x0002f5f5) fshwr2_bg_pane

0xebc4,	// (0x0003b0f0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc4,	// (0x0003b0f0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003c3e7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003c3e7) fshwr2_func_candi_cell_pane_g

0xc0a2,	// (0x000385ce) bg_popup_window_pane_cp01

0xebfd,	// (0x0003b129) bg_popup_window_pane_g1_cp01

0xec06,	// (0x0003b132) bg_popup_window_pane_cp22_ParamLimits

0xec06,	// (0x0003b132) bg_popup_window_pane_cp22

0xec14,	// (0x0003b140) listscroll_tmo_link_pane_ParamLimits

0xec14,	// (0x0003b140) listscroll_tmo_link_pane

0xec54,	// (0x0003b180) popup_tmo_note_window_g1_ParamLimits

0xec54,	// (0x0003b180) popup_tmo_note_window_g1

0xec61,	// (0x0003b18d) tmo_note_info_pane_ParamLimits

0xec61,	// (0x0003b18d) tmo_note_info_pane

0xec7b,	// (0x0003b1a7) list_tmo_note_info_pane_g1_ParamLimits

0xec7b,	// (0x0003b1a7) list_tmo_note_info_pane_g1

0xec92,	// (0x0003b1be) list_tmo_note_info_pane_g2_ParamLimits

0xec92,	// (0x0003b1be) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003c3ec) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003c3ec) list_tmo_note_info_pane_g

0xecae,	// (0x0003b1da) list_tmo_note_info_text_pane_ParamLimits

0xecae,	// (0x0003b1da) list_tmo_note_info_text_pane

0xed33,	// (0x0003b25f) list_tmo_link_pane

0xed40,	// (0x0003b26c) scroll_pane_cp20

0xed4d,	// (0x0003b279) list_single_tmo_link_pane_ParamLimits

0xed4d,	// (0x0003b279) list_single_tmo_link_pane

0xed5d,	// (0x0003b289) list_single_tmo_link_pane_t1

0xed6b,	// (0x0003b297) list_tmo_note_info_text_pane_t1_ParamLimits

0xed6b,	// (0x0003b297) list_tmo_note_info_text_pane_t1

0x7cae,	// (0x000341da) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7cae,	// (0x000341da) aid_size_touch_scroll_bar_cp01

0x54bc,	// (0x000319e8) aid_size_touch_slider_marker

0x4d23,	// (0x0003124f) popup_settings_window_ParamLimits

0x4d23,	// (0x0003124f) popup_settings_window

0x5c50,	// (0x0003217c) popup_candi_list_indi_window

0x9529,	// (0x00035a55) aid_touch_navi_pane_ParamLimits

0x6a2b,	// (0x00032f57) rs_clock_indi_pane

0x6a34,	// (0x00032f60) sctrl_sk_bottom_pane_ParamLimits

0x6a45,	// (0x00032f71) sctrl_sk_top_pane_ParamLimits

0x6b46,	// (0x00033072) popup_fep_tooltip_window

0xe627,	// (0x0003ab53) aid_size_cell_widget_grid_ParamLimits

0xe657,	// (0x0003ab83) cell_ai5_widget_pane_g1_ParamLimits

0xe657,	// (0x0003ab83) cell_ai5_widget_pane_g1

0xe6aa,	// (0x0003abd6) cell_ai5_widget_pane_g6_ParamLimits

0xe6b8,	// (0x0003abe4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003c36a) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003c36a) cell_ai5_widget_pane_g

0xe7e7,	// (0x0003ad13) cell_ai5_widget_pane_t10_ParamLimits

0xe7e7,	// (0x0003ad13) cell_ai5_widget_pane_t10

0xe7fd,	// (0x0003ad29) grid_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0003adca) cell_contacts_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0003adca) cell_contacts_ai5_widget_pane

0xea7e,	// (0x0003afaa) popup_discreet_window_t3_ParamLimits

0xea7e,	// (0x0003afaa) popup_discreet_window_t3

0xeb0d,	// (0x0003b039) popup_fshwr2_char_preview_window_ParamLimits

0xeb0d,	// (0x0003b039) popup_fshwr2_char_preview_window

0xeccc,	// (0x0003b1f8) tmo_note_info_pane_t1

0xece1,	// (0x0003b20d) tmo_note_info_pane_t2

0xecfa,	// (0x0003b226) tmo_note_info_pane_t3

0xed0f,	// (0x0003b23b) tmo_note_info_pane_t4

0xed21,	// (0x0003b24d) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003c3f1) tmo_note_info_pane_t

0xed33,	// (0x0003b25f) list_tmo_link_pane_ParamLimits

0xed40,	// (0x0003b26c) scroll_pane_cp20_ParamLimits

0x30c9,	// (0x0002f5f5) bg_popup_fep_char_preview_window_cp01

0xed84,	// (0x0003b2b0) popup_fshwr2_char_preview_window_t1

0xed92,	// (0x0003b2be) popup_candi_list_indi_window_g1

0xed9b,	// (0x0003b2c7) bg_cell_contacts_ai5_widget_pane

0xeda7,	// (0x0003b2d3) cell_contacts_ai5_widget_pane_g1

0xedbb,	// (0x0003b2e7) cell_contacts_ai5_widget_pane_g2

0xedca,	// (0x0003b2f6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003c3fc) cell_contacts_ai5_widget_pane_g

0xeddd,	// (0x0003b309) cell_contacts_ai5_widget_pane_t1

0x7be8,	// (0x00034114) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee57,	// (0x0003b383) settings_container_pane

0x8b2e,	// (0x0003505a) listscroll_set_pane_copy1

0xb7e8,	// (0x00037d14) scroll_pane_cp121_copy1

0xee63,	// (0x0003b38f) set_content_pane_copy1

0xee6b,	// (0x0003b397) aid_height_set_list_copy1_ParamLimits

0xee6b,	// (0x0003b397) aid_height_set_list_copy1

0xae35,	// (0x00037361) aid_size_parent_copy1_ParamLimits

0xae35,	// (0x00037361) aid_size_parent_copy1

0xee77,	// (0x0003b3a3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee77,	// (0x0003b3a3) button_value_adjust_pane_cp6_copy1

0x8eb4,	// (0x000353e0) list_highlight_pane_cp2_copy1_ParamLimits

0x8eb4,	// (0x000353e0) list_highlight_pane_cp2_copy1

0xee8b,	// (0x0003b3b7) list_set_pane_copy1_ParamLimits

0xee8b,	// (0x0003b3b7) list_set_pane_copy1

0xedf2,	// (0x0003b31e) main_pane_set_t1_copy1_ParamLimits

0xedf2,	// (0x0003b31e) main_pane_set_t1_copy1

0xee2c,	// (0x0003b358) main_pane_set_t2_copy1_ParamLimits

0xee2c,	// (0x0003b358) main_pane_set_t2_copy1

0xef52,	// (0x0003b47e) main_pane_set_t3_copy1

0xef60,	// (0x0003b48c) main_pane_set_t4_copy1

0xee4b,	// (0x0003b377) set_content_pane_g1_copy1_ParamLimits

0xee4b,	// (0x0003b377) set_content_pane_g1_copy1

0xef6e,	// (0x0003b49a) setting_code_pane_copy1

0xef78,	// (0x0003b4a4) setting_slider_graphic_pane_copy1

0xef78,	// (0x0003b4a4) setting_slider_pane_copy1

0xef78,	// (0x0003b4a4) setting_text_pane_copy1

0xef82,	// (0x0003b4ae) setting_volume_pane_copy1

0xef8b,	// (0x0003b4b7) settings_code_pane_cp2_copy1

0xef93,	// (0x0003b4bf) settings_code_pane_cp_copy1_ParamLimits

0xef93,	// (0x0003b4bf) settings_code_pane_cp_copy1

0xefa7,	// (0x0003b4d3) volume_set_pane_copy1

0xefb3,	// (0x0003b4df) volume_set_pane_g10_copy1

0xefbf,	// (0x0003b4eb) volume_set_pane_g1_copy1

0xefc9,	// (0x0003b4f5) volume_set_pane_g2_copy1

0xefd3,	// (0x0003b4ff) volume_set_pane_g3_copy1

0xefdd,	// (0x0003b509) volume_set_pane_g4_copy1

0xefe7,	// (0x0003b513) volume_set_pane_g5_copy1

0xeff1,	// (0x0003b51d) volume_set_pane_g6_copy1

0xeffb,	// (0x0003b527) volume_set_pane_g7_copy1

0xf005,	// (0x0003b531) volume_set_pane_g8_copy1

0xf00f,	// (0x0003b53b) volume_set_pane_g9_copy1

0x7361,	// (0x0003388d) bg_set_opt_pane_cp_copy1_ParamLimits

0x7361,	// (0x0003388d) bg_set_opt_pane_cp_copy1

0xf019,	// (0x0003b545) setting_slider_pane_t1_copy1_ParamLimits

0xf019,	// (0x0003b545) setting_slider_pane_t1_copy1

0xf037,	// (0x0003b563) setting_slider_pane_t2_copy1_ParamLimits

0xf037,	// (0x0003b563) setting_slider_pane_t2_copy1

0xf051,	// (0x0003b57d) setting_slider_pane_t3_copy1_ParamLimits

0xf051,	// (0x0003b57d) setting_slider_pane_t3_copy1

0xf069,	// (0x0003b595) slider_set_pane_copy1_ParamLimits

0xf069,	// (0x0003b595) slider_set_pane_copy1

0x7c4f,	// (0x0003417b) set_opt_bg_pane_g1_copy2

0x7c57,	// (0x00034183) set_opt_bg_pane_g2_copy2

0xf07f,	// (0x0003b5ab) set_opt_bg_pane_g3_copy2

0x7c67,	// (0x00034193) set_opt_bg_pane_g4_copy2

0x7c6f,	// (0x0003419b) set_opt_bg_pane_g5_copy2

0x7c77,	// (0x000341a3) set_opt_bg_pane_g6_copy2

0xf089,	// (0x0003b5b5) set_opt_bg_pane_g7_copy2

0xf093,	// (0x0003b5bf) set_opt_bg_pane_g8_copy2

0xf09d,	// (0x0003b5c9) set_opt_bg_pane_g9_copy2

0xf0a7,	// (0x0003b5d3) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a7,	// (0x0003b5d3) aid_size_touch_slider_mark_copy1

0xf0bb,	// (0x0003b5e7) slider_set_pane_g1_copy1

0xf0c4,	// (0x0003b5f0) slider_set_pane_g2_copy1

0xb6a8,	// (0x00037bd4) slider_set_pane_g3_copy1_ParamLimits

0xb6a8,	// (0x00037bd4) slider_set_pane_g3_copy1

0xb6bc,	// (0x00037be8) slider_set_pane_g4_copy1_ParamLimits

0xb6bc,	// (0x00037be8) slider_set_pane_g4_copy1

0xb6d4,	// (0x00037c00) slider_set_pane_g5_copy1_ParamLimits

0xb6d4,	// (0x00037c00) slider_set_pane_g5_copy1

0xb6a8,	// (0x00037bd4) slider_set_pane_g6_copy1_ParamLimits

0xb6a8,	// (0x00037bd4) slider_set_pane_g6_copy1

0xf0cc,	// (0x0003b5f8) slider_set_pane_g7_copy1_ParamLimits

0xf0cc,	// (0x0003b5f8) slider_set_pane_g7_copy1

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp2_copy1

0xf0e2,	// (0x0003b60e) setting_slider_graphic_pane_g1_copy1

0xf0eb,	// (0x0003b617) setting_slider_graphic_pane_t1_copy1

0xf0fb,	// (0x0003b627) setting_slider_graphic_pane_t2_copy1

0xf10b,	// (0x0003b637) slider_set_pane_cp_copy1

0xf11b,	// (0x0003b647) input_focus_pane_cp1_copy1

0xf124,	// (0x0003b650) list_set_text_pane_copy1

0xf12c,	// (0x0003b658) setting_text_pane_g1_copy1

0x801f,	// (0x0003454b) set_text_pane_t1_copy1

0xf11b,	// (0x0003b647) input_focus_pane_cp2_copy1

0xf12c,	// (0x0003b658) setting_code_pane_g1_copy1

0xf135,	// (0x0003b661) setting_code_pane_t1_copy1

0xf143,	// (0x0003b66f) list_set_graphic_pane_copy1

0x30dd,	// (0x0002f609) bg_set_opt_pane_cp4_copy1

0x8828,	// (0x00034d54) list_set_graphic_pane_g1_copy1_ParamLimits

0x8828,	// (0x00034d54) list_set_graphic_pane_g1_copy1

0xf155,	// (0x0003b681) list_set_graphic_pane_g2_copy1

0x8840,	// (0x00034d6c) list_set_graphic_pane_t1_copy1_ParamLimits

0x8840,	// (0x00034d6c) list_set_graphic_pane_t1_copy1

0xc0a2,	// (0x000385ce) rs_clock_indi_pane_g1

0xf15d,	// (0x0003b689) rs_clock_indi_pane_t1

0xf16b,	// (0x0003b697) rs_indi_pane

0xf173,	// (0x0003b69f) rs_indi_pane_g1

0xf17c,	// (0x0003b6a8) rs_indi_pane_g2

0xf185,	// (0x0003b6b1) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003c403) rs_indi_pane_g

0x8b2e,	// (0x0003505a) bg_popup_preview_window_pane_cp03

0xf18e,	// (0x0003b6ba) popup_fep_tooltip_window_t1

0xcd48,	// (0x00039274) popup_note2_window_g2_ParamLimits

0xcd48,	// (0x00039274) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003c19c) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003c19c) popup_note2_window_g

0xd25e,	// (0x0003978a) bg_popup_sub_pane_cp11_ParamLimits

0xd26b,	// (0x00039797) cell_ai3_links_pane_g1_ParamLimits

0xd282,	// (0x000397ae) cell_ai3_links_pane_t1

0x801f,	// (0x0003454b) set_text_pane_t1_copy1_ParamLimits

0x8a3b,	// (0x00034f67) cell_graphic_popup_pane_cp2_ParamLimits

0x8a3b,	// (0x00034f67) cell_graphic_popup_pane_cp2

0xf19c,	// (0x0003b6c8) cell_graphic_popup_pane_g1_cp2

0x7933,	// (0x00033e5f) cell_graphic_popup_pane_g2_cp2

0xf1a4,	// (0x0003b6d0) cell_graphic_popup_pane_g3_cp2

0xf1ac,	// (0x0003b6d8) cell_graphic_popup_pane_t2_cp2

0x7944,	// (0x00033e70) grid_highlight_pane_cp3_cp2

0x8283,	// (0x000347af) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7be8,	// (0x00034114) main_tmo_pane_ParamLimits

0xd5a2,	// (0x00039ace) popup_tmo_big_image_note_window

0xe647,	// (0x0003ab73) cell_ai5_widget_list_pane

0xe64f,	// (0x0003ab7b) cell_ai5_widget_lrg_icon_pane

0xeccc,	// (0x0003b1f8) tmo_note_info_pane_t1_ParamLimits

0xece1,	// (0x0003b20d) tmo_note_info_pane_t2_ParamLimits

0xecfa,	// (0x0003b226) tmo_note_info_pane_t3_ParamLimits

0xed0f,	// (0x0003b23b) tmo_note_info_pane_t4_ParamLimits

0xed21,	// (0x0003b24d) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003c3f1) tmo_note_info_pane_t_ParamLimits

0xee57,	// (0x0003b383) settings_container_pane_ParamLimits

0xf113,	// (0x0003b63f) indicator_popup_pane_cp5

0xf113,	// (0x0003b63f) indicator_popup_pane_cp6

0xf143,	// (0x0003b66f) list_set_graphic_pane_copy1_ParamLimits

0x30c9,	// (0x0002f5f5) bg_popup_window_pane_cp23

0xf1ba,	// (0x0003b6e6) popup_tmo_big_image_note_window_g1

0xf1c6,	// (0x0003b6f2) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0003b702) popup_tmo_big_image_note_window_t2

0xf1e6,	// (0x0003b712) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003c40a) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0003b722) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0003b72a) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0003b738) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0003b738) cell_ai5_widget_list_row_pane

0xf225,	// (0x0003b751) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0003b751) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0003b75e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0003b75e) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0003b776) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0003b776) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0003c411) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003c411) cell_ai5_widget_list_row_pane_t

0x4bd0,	// (0x000310fc) main_fep_vtchi_ss_pane

0xf25c,	// (0x0003b788) popup_fep_char_pre_window

0xf264,	// (0x0003b790) popup_fep_ituss_window

0xf285,	// (0x0003b7b1) popup_fep_vkbss_window

0xf2a6,	// (0x0003b7d2) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0003b7d2) grid_vkbss_keypad_pane

0xf2b6,	// (0x0003b7e2) ituss_keypad_pane

0xf2cf,	// (0x0003b7fb) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x0003b7fb) aid_vkbss_key_offset

0xf2db,	// (0x0003b807) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0003b807) cell_vkbss_key_pane

0xf2f1,	// (0x0003b81d) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x0003b81d) bg_cell_vkbss_key_g1

0xf2fd,	// (0x0003b829) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x0003b829) cell_vkbss_key_3p_pane

0xf317,	// (0x0003b843) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0003b843) cell_vkbss_key_g1

0xf331,	// (0x0003b85d) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0003b85d) cell_vkbss_key_t1

0xf35c,	// (0x0003b888) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x0003b888) cell_ituss_key_pane

0xf36c,	// (0x0003b898) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x0003b898) bg_cell_ituss_key_g1

0xf378,	// (0x0003b8a4) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0003b8a4) cell_ituss_key_pane_g1

0xf384,	// (0x0003b8b0) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0003b8b0) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0003c416) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0003c416) cell_ituss_key_pane_g

0xf3a0,	// (0x0003b8cc) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0003b8cc) cell_ituss_key_t1

0xf3ce,	// (0x0003b8fa) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0003b8fa) cell_ituss_key_t2

0xf3ff,	// (0x0003b92b) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0003b92b) cell_ituss_key_t3

0xf430,	// (0x0003b95c) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0003b95c) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0003c41b) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0003c41b) cell_ituss_key_t

0xf461,	// (0x0003b98d) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0003b995) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0003b99d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0003c424) cell_vkbss_key_3p_pane_g

0x30c9,	// (0x0002f5f5) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0003b9a5) popup_fep_char_pre_window_t1

0xe61d,	// (0x0003ab49) main_ai5_sk_pane

0xed9b,	// (0x0003b2c7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda7,	// (0x0003b2d3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedbb,	// (0x0003b2e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedca,	// (0x0003b2f6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003c3fc) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeddd,	// (0x0003b309) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7be8,	// (0x00034114) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0003b9b4) main_ai5_sk_pane_g1

0x9eda,	// (0x00036406) popup_query_code_window_g1

0xf27a,	// (0x0003b7a6) popup_fep_vkb_icf_pane

0xf290,	// (0x0003b7bc) popup_fep_vtchi_icf_pane

0x7be8,	// (0x00034114) bg_icf_pane

0xf4a0,	// (0x0003b9cc) list_vkb_icf_pane

0x7be8,	// (0x00034114) bg_icf_pane_cp01

0xd561,	// (0x00039a8d) vtchi_icf_list_pane

0xf4c0,	// (0x0003b9ec) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0003b9ec) list_vkb_icf_pane_t1

0xf4d7,	// (0x0003ba03) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0003ba03) vtchi_icf_list_pane_t1

0xf264,	// (0x0003b790) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0003b7bc) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0003b7e2) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0003b7f2) ituss_sks_pane

0x7be8,	// (0x00034114) bg_icf_pane_ParamLimits

0xf491,	// (0x0003b9bd) icf_edit_indi_pane_ParamLimits

0xf491,	// (0x0003b9bd) icf_edit_indi_pane

0xf4a0,	// (0x0003b9cc) list_vkb_icf_pane_ParamLimits

0x7be8,	// (0x00034114) bg_icf_pane_cp01_ParamLimits

0xf4ac,	// (0x0003b9d8) icf_edit_indi_pane_cp01_ParamLimits

0xf4ac,	// (0x0003b9d8) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0003b9e4) vtchi_query_pane

0xc32c,	// (0x00038858) icf_edit_indi_pane_g1_ParamLimits

0xc32c,	// (0x00038858) icf_edit_indi_pane_g1

0xf4f0,	// (0x0003ba1c) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0003ba1c) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0003c42b) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0003c42b) icf_edit_indi_pane_g

0xf4fc,	// (0x0003ba28) icf_edit_indi_pane_t1

0xf50a,	// (0x0003ba36) bg_input_focus_pane_cp042

0x7b17,	// (0x00034043) vtchi_button_pane

0xf513,	// (0x0003ba3f) vtchi_query_pane_t1

0xf521,	// (0x0003ba4d) vtchi_query_pane_t2

0xf52f,	// (0x0003ba5b) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0003c430) vtchi_query_pane_t

0x30c9,	// (0x0002f5f5) bg_button_pane_cp13

0xf53d,	// (0x0003ba69) vtchi_button_pane_g1

0xdacd,	// (0x00039ff9) ituss_sks_pane_g1

0xf545,	// (0x0003ba71) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0003c437) ituss_sks_pane_g

0xf54e,	// (0x0003ba7a) ituss_sks_pane_t1

0xf55c,	// (0x0003ba88) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0003c43c) ituss_sks_pane_t

0xbb49,	// (0x00038075) indicator_nsta_pane_cp_g1

0xbb52,	// (0x0003807e) indicator_nsta_pane_cp_g2

0xbb5a,	// (0x00038086) indicator_nsta_pane_cp_g3

0xbb62,	// (0x0003808e) indicator_nsta_pane_cp_g4

0xbb6a,	// (0x00038096) indicator_nsta_pane_cp_g5

0xbb72,	// (0x0003809e) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0003bfda) indicator_nsta_pane_cp_g

0xe249,	// (0x0003a775) cell_graphic2_pane_t2_ParamLimits

0xe249,	// (0x0003a775) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003c2f3) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003c2f3) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

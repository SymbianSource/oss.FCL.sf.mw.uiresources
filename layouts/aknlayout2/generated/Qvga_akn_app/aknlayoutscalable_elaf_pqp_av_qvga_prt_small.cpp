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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000c835 };

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
0x34eb,	// (0x0000fd20) Screen

0x34fd,	// (0x0000fd32) application_window_ParamLimits

0x34fd,	// (0x0000fd32) application_window

0x3515,	// (0x0000fd4a) screen_g1

0x351f,	// (0x0000fd54) area_bottom_pane_ParamLimits

0x351f,	// (0x0000fd54) area_bottom_pane

0x3584,	// (0x0000fdb9) area_top_pane_ParamLimits

0x3584,	// (0x0000fdb9) area_top_pane

0x9dff,	// (0x00016634) main_pane_ParamLimits

0x9dff,	// (0x00016634) main_pane

0x35fc,	// (0x0000fe31) misc_graphics

0xa9a6,	// (0x000171db) battery_pane_ParamLimits

0xa9a6,	// (0x000171db) battery_pane

0x70be,	// (0x000138f3) bg_status_flat_pane_g8

0x70c6,	// (0x000138fb) bg_status_flat_pane_g9

0x6818,	// (0x0001304d) context_pane_ParamLimits

0x6818,	// (0x0001304d) context_pane

0xaad8,	// (0x0001730d) navi_pane_ParamLimits

0xaad8,	// (0x0001730d) navi_pane

0xab44,	// (0x00017379) signal_pane_ParamLimits

0xab44,	// (0x00017379) signal_pane

0x0008,

0xf8a6,	// (0x0001c0db) bg_status_flat_pane_g

0xaba5,	// (0x000173da) status_pane_g1_ParamLimits

0xaba5,	// (0x000173da) status_pane_g1

0xabb1,	// (0x000173e6) status_pane_g2_ParamLimits

0xabb1,	// (0x000173e6) status_pane_g2

0x687e,	// (0x000130b3) status_pane_g3_ParamLimits

0x687e,	// (0x000130b3) status_pane_g3

0x0004,

0xf7db,	// (0x0001c010) status_pane_g_ParamLimits

0xf7db,	// (0x0001c010) status_pane_g

0xabbd,	// (0x000173f2) title_pane_ParamLimits

0xabbd,	// (0x000173f2) title_pane

0xabfa,	// (0x0001742f) uni_indicator_pane_ParamLimits

0xabfa,	// (0x0001742f) uni_indicator_pane

0x6672,	// (0x00012ea7) bg_list_pane_ParamLimits

0x6672,	// (0x00012ea7) bg_list_pane

0x95e5,	// (0x00015e1a) find_pane

0xa5b2,	// (0x00016de7) listscroll_app_pane_ParamLimits

0xa5b2,	// (0x00016de7) listscroll_app_pane

0x6692,	// (0x00012ec7) listscroll_form_pane

0x95ed,	// (0x00015e22) listscroll_gen_pane_ParamLimits

0x95ed,	// (0x00015e22) listscroll_gen_pane

0x6692,	// (0x00012ec7) listscroll_set_pane

0x472d,	// (0x00010f62) main_idle_act_pane

0x517f,	// (0x000119b4) main_idle_trad_pane

0x517f,	// (0x000119b4) main_list_empty_pane

0x664e,	// (0x00012e83) main_midp_pane

0x66ac,	// (0x00012ee1) main_pane_g1_ParamLimits

0x66ac,	// (0x00012ee1) main_pane_g1

0xa5be,	// (0x00016df3) popup_ai_message_window_ParamLimits

0xa5be,	// (0x00016df3) popup_ai_message_window

0xa632,	// (0x00016e67) popup_fep_china_uni_window_ParamLimits

0xa632,	// (0x00016e67) popup_fep_china_uni_window

0x66e4,	// (0x00012f19) popup_fep_japan_candidate_window_ParamLimits

0x66e4,	// (0x00012f19) popup_fep_japan_candidate_window

0x6702,	// (0x00012f37) popup_fep_japan_predictive_window_ParamLimits

0x6702,	// (0x00012f37) popup_fep_japan_predictive_window

0xa670,	// (0x00016ea5) popup_find_window

0xa67d,	// (0x00016eb2) popup_grid_graphic_window_ParamLimits

0xa67d,	// (0x00016eb2) popup_grid_graphic_window

0x672e,	// (0x00012f63) popup_large_graphic_colour_window

0xa69b,	// (0x00016ed0) popup_menu_window_ParamLimits

0xa69b,	// (0x00016ed0) popup_menu_window

0xa7d3,	// (0x00017008) popup_note_image_window

0xa7c1,	// (0x00016ff6) popup_note_wait_window_ParamLimits

0xa7c1,	// (0x00016ff6) popup_note_wait_window

0xa7c1,	// (0x00016ff6) popup_note_window_ParamLimits

0xa7c1,	// (0x00016ff6) popup_note_window

0xa827,	// (0x0001705c) popup_query_code_window_ParamLimits

0xa827,	// (0x0001705c) popup_query_code_window

0x674d,	// (0x00012f82) popup_query_data_code_window_ParamLimits

0x674d,	// (0x00012f82) popup_query_data_code_window

0xa839,	// (0x0001706e) popup_query_data_window_ParamLimits

0xa839,	// (0x0001706e) popup_query_data_window

0xa84f,	// (0x00017084) popup_query_sat_info_window_ParamLimits

0xa84f,	// (0x00017084) popup_query_sat_info_window

0xa880,	// (0x000170b5) popup_snote_single_graphic_window_ParamLimits

0xa880,	// (0x000170b5) popup_snote_single_graphic_window

0xa880,	// (0x000170b5) popup_snote_single_text_window_ParamLimits

0xa880,	// (0x000170b5) popup_snote_single_text_window

0x6762,	// (0x00012f97) popup_sub_window_general

0x67a4,	// (0x00012fd9) popup_window_general_ParamLimits

0x67a4,	// (0x00012fd9) popup_window_general

0x67b7,	// (0x00012fec) power_save_pane

0xa466,	// (0x00016c9b) control_pane_g1_ParamLimits

0xa466,	// (0x00016c9b) control_pane_g1

0xa487,	// (0x00016cbc) control_pane_g2_ParamLimits

0xa487,	// (0x00016cbc) control_pane_g2

0x5438,	// (0x00011c6d) control_pane_g3_ParamLimits

0x5438,	// (0x00011c6d) control_pane_g3

0x0007,

0xf7c3,	// (0x0001bff8) control_pane_g_ParamLimits

0xf7c3,	// (0x0001bff8) control_pane_g

0xa4c1,	// (0x00016cf6) control_pane_t1_ParamLimits

0xa4c1,	// (0x00016cf6) control_pane_t1

0xa513,	// (0x00016d48) control_pane_t2_ParamLimits

0xa513,	// (0x00016d48) control_pane_t2

0x0002,

0xf7d4,	// (0x0001c009) control_pane_t_ParamLimits

0xf7d4,	// (0x0001c009) control_pane_t

0x535b,	// (0x00011b90) navi_navi_volume_pane_cp1

0x5364,	// (0x00011b99) status_small_icon_pane

0x536c,	// (0x00011ba1) status_small_pane_g1_ParamLimits

0x536c,	// (0x00011ba1) status_small_pane_g1

0x53a0,	// (0x00011bd5) status_small_pane_g2_ParamLimits

0x53a0,	// (0x00011bd5) status_small_pane_g2

0x53ac,	// (0x00011be1) status_small_pane_g3_ParamLimits

0x53ac,	// (0x00011be1) status_small_pane_g3

0x53b8,	// (0x00011bed) status_small_pane_g4_ParamLimits

0x53b8,	// (0x00011bed) status_small_pane_g4

0x53c4,	// (0x00011bf9) status_small_pane_g5_ParamLimits

0x53c4,	// (0x00011bf9) status_small_pane_g5

0x53d1,	// (0x00011c06) status_small_pane_g6_ParamLimits

0x53d1,	// (0x00011c06) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001bfe7) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001bfe7) status_small_pane_g

0x5401,	// (0x00011c36) status_small_pane_t1

0x5424,	// (0x00011c59) status_small_wait_pane_ParamLimits

0x5424,	// (0x00011c59) status_small_wait_pane

0x4c15,	// (0x0001144a) aid_levels_signal_ParamLimits

0x4c15,	// (0x0001144a) aid_levels_signal

0x4c26,	// (0x0001145b) signal_pane_g1_ParamLimits

0x4c26,	// (0x0001145b) signal_pane_g1

0x4c3c,	// (0x00011471) signal_pane_g2_ParamLimits

0x4c3c,	// (0x00011471) signal_pane_g2

0x0001,

0xf747,	// (0x0001bf7c) signal_pane_g_ParamLimits

0xf747,	// (0x0001bf7c) signal_pane_g

0x4c52,	// (0x00011487) context_pane_g1

0x3606,	// (0x0000fe3b) title_pane_g1

0x363c,	// (0x0000fe71) title_pane_t1

0x36a4,	// (0x0000fed9) title_pane_t2

0x36ca,	// (0x0000feff) title_pane_t3

0x0002,

0xf59b,	// (0x0001bdd0) title_pane_t

0xac10,	// (0x00017445) aid_levels_battery_ParamLimits

0xac10,	// (0x00017445) aid_levels_battery

0xac23,	// (0x00017458) battery_pane_g1_ParamLimits

0xac23,	// (0x00017458) battery_pane_g1

0xac38,	// (0x0001746d) battery_pane_g2_ParamLimits

0xac38,	// (0x0001746d) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001c01b) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001c01b) battery_pane_g

0xb066,	// (0x0001789b) uni_indicator_pane_g1

0xb07b,	// (0x000178b0) uni_indicator_pane_g2

0xb091,	// (0x000178c6) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x0001c183) uni_indicator_pane_g

0x460a,	// (0x00010e3f) navi_icon_pane_ParamLimits

0x460a,	// (0x00010e3f) navi_icon_pane

0x35fc,	// (0x0000fe31) navi_midp_pane

0x35fc,	// (0x0000fe31) navi_navi_pane

0x460a,	// (0x00010e3f) navi_text_pane_ParamLimits

0x460a,	// (0x00010e3f) navi_text_pane

0x3515,	// (0x0000fd4a) status_small_wait_pane_g1

0x3b43,	// (0x00010378) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x0001c17e) status_small_wait_pane_g

0x7a54,	// (0x00014289) navi_navi_icon_text_pane

0x7a6e,	// (0x000142a3) navi_navi_pane_g1_ParamLimits

0x7a6e,	// (0x000142a3) navi_navi_pane_g1

0x7a5c,	// (0x00014291) navi_navi_pane_g2_ParamLimits

0x7a5c,	// (0x00014291) navi_navi_pane_g2

0x0001,

0xf917,	// (0x0001c14c) navi_navi_pane_g_ParamLimits

0xf917,	// (0x0001c14c) navi_navi_pane_g

0x7a80,	// (0x000142b5) navi_navi_tabs_pane

0x7a54,	// (0x00014289) navi_navi_text_pane

0x7a54,	// (0x00014289) navi_navi_volume_pane

0x7604,	// (0x00013e39) navi_text_pane_t1

0x75f8,	// (0x00013e2d) navi_icon_pane_g1

0x754c,	// (0x00013d81) navi_navi_text_pane_t1

0xb030,	// (0x00017865) navi_navi_volume_pane_g1

0xb038,	// (0x0001786d) volume_small_pane

0xafa2,	// (0x000177d7) navi_navi_icon_text_pane_g1

0xafaa,	// (0x000177df) navi_navi_icon_text_pane_t1

0x7106,	// (0x0001393b) navi_tabs_2_long_pane

0x7106,	// (0x0001393b) navi_tabs_2_pane

0x7106,	// (0x0001393b) navi_tabs_3_long_pane

0x7106,	// (0x0001393b) navi_tabs_3_pane

0x7106,	// (0x0001393b) navi_tabs_4_pane

0xaf82,	// (0x000177b7) tabs_2_active_pane_ParamLimits

0xaf82,	// (0x000177b7) tabs_2_active_pane

0xaf92,	// (0x000177c7) tabs_2_passive_pane_ParamLimits

0xaf92,	// (0x000177c7) tabs_2_passive_pane

0xaf50,	// (0x00017785) tabs_3_active_pane_ParamLimits

0xaf50,	// (0x00017785) tabs_3_active_pane

0xaf60,	// (0x00017795) tabs_3_passive_pane_ParamLimits

0xaf60,	// (0x00017795) tabs_3_passive_pane

0xaf71,	// (0x000177a6) tabs_3_passive_pane_cp_ParamLimits

0xaf71,	// (0x000177a6) tabs_3_passive_pane_cp

0xaf0c,	// (0x00017741) tabs_4_active_pane_ParamLimits

0xaf0c,	// (0x00017741) tabs_4_active_pane

0xaf1d,	// (0x00017752) tabs_4_passive_pane_ParamLimits

0xaf1d,	// (0x00017752) tabs_4_passive_pane

0xaf2e,	// (0x00017763) tabs_4_passive_pane_cp_ParamLimits

0xaf2e,	// (0x00017763) tabs_4_passive_pane_cp

0xaf3f,	// (0x00017774) tabs_4_passive_pane_cp2_ParamLimits

0xaf3f,	// (0x00017774) tabs_4_passive_pane_cp2

0xaeec,	// (0x00017721) tabs_2_long_active_pane_ParamLimits

0xaeec,	// (0x00017721) tabs_2_long_active_pane

0xaefc,	// (0x00017731) tabs_2_long_passive_pane_ParamLimits

0xaefc,	// (0x00017731) tabs_2_long_passive_pane

0xaeb7,	// (0x000176ec) tabs_3_long_active_pane_ParamLimits

0xaeb7,	// (0x000176ec) tabs_3_long_active_pane

0xaec8,	// (0x000176fd) tabs_3_long_passive_pane_ParamLimits

0xaec8,	// (0x000176fd) tabs_3_long_passive_pane

0xaedb,	// (0x00017710) tabs_3_long_passive_pane_cp_ParamLimits

0xaedb,	// (0x00017710) tabs_3_long_passive_pane_cp

0xae5d,	// (0x00017692) volume_small_pane_g1

0xae66,	// (0x0001769b) volume_small_pane_g2

0xae6f,	// (0x000176a4) volume_small_pane_g3

0xae78,	// (0x000176ad) volume_small_pane_g4

0xae81,	// (0x000176b6) volume_small_pane_g5

0xae8a,	// (0x000176bf) volume_small_pane_g6

0xae93,	// (0x000176c8) volume_small_pane_g7

0xae9c,	// (0x000176d1) volume_small_pane_g8

0xaea5,	// (0x000176da) volume_small_pane_g9

0xaeae,	// (0x000176e3) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x0001c118) volume_small_pane_g

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp2_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp2

0x36ea,	// (0x0000ff1f) tabs_3_active_pane_g1

0x36f2,	// (0x0000ff27) tabs_3_active_pane_t1

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp2_ParamLimits

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp2

0x36ea,	// (0x0000ff1f) tabs_3_passive_pane_g1

0x36f2,	// (0x0000ff27) tabs_3_passive_pane_t1

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp3_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp3

0x3704,	// (0x0000ff39) tabs_4_active_pane_g1

0x370c,	// (0x0000ff41) tabs_4_active_pane_t1

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp3_ParamLimits

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp3

0x3704,	// (0x0000ff39) tabs_4_1_passive_pane_g1

0x370c,	// (0x0000ff41) tabs_4_1_passive_pane_t1

0x664e,	// (0x00012e83) list_highlight_pane_cp2

0xb159,	// (0x0001798e) list_set_pane_ParamLimits

0xb159,	// (0x0001798e) list_set_pane

0xb1e7,	// (0x00017a1c) main_pane_set_t1_ParamLimits

0xb1e7,	// (0x00017a1c) main_pane_set_t1

0xb207,	// (0x00017a3c) main_pane_set_t2_ParamLimits

0xb207,	// (0x00017a3c) main_pane_set_t2

0xb219,	// (0x00017a4e) main_pane_set_t3_ParamLimits

0xb219,	// (0x00017a4e) main_pane_set_t3

0xb22b,	// (0x00017a60) main_pane_set_t4_ParamLimits

0xb22b,	// (0x00017a60) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0001c1e8) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0001c1e8) main_pane_set_t

0xb23d,	// (0x00017a72) setting_code_pane

0xb245,	// (0x00017a7a) setting_slider_graphic_pane

0xb245,	// (0x00017a7a) setting_slider_pane

0xb245,	// (0x00017a7a) setting_text_pane

0xb245,	// (0x00017a7a) setting_volume_pane

0x9ffe,	// (0x00016833) volume_set_pane

0x36dc,	// (0x0000ff11) bg_set_opt_pane_cp

0x3975,	// (0x000101aa) setting_slider_pane_t1

0xa006,	// (0x0001683b) setting_slider_pane_t2

0xa01f,	// (0x00016854) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001bdd7) setting_slider_pane_t

0x398b,	// (0x000101c0) slider_set_pane

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp2

0x371e,	// (0x0000ff53) setting_slider_graphic_pane_g1

0xa036,	// (0x0001686b) setting_slider_graphic_pane_t1

0xa045,	// (0x0001687a) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001bdde) setting_slider_graphic_pane_t

0xa054,	// (0x00016889) slider_set_pane_cp

0x35fc,	// (0x0000fe31) input_focus_pane_cp1

0x7acb,	// (0x00014300) list_set_text_pane

0x3515,	// (0x0000fd4a) setting_text_pane_g1

0x35fc,	// (0x0000fe31) input_focus_pane_cp2

0x3515,	// (0x0000fd4a) setting_code_pane_g1

0x3727,	// (0x0000ff5c) setting_code_pane_t1

0x8ec3,	// (0x000156f8) set_text_pane_t1_ParamLimits

0x8ec3,	// (0x000156f8) set_text_pane_t1

0x4518,	// (0x00010d4d) set_opt_bg_pane_g1

0x4520,	// (0x00010d55) set_opt_bg_pane_g2

0xb119,	// (0x0001794e) set_opt_bg_pane_g3

0x4530,	// (0x00010d65) set_opt_bg_pane_g4

0x4538,	// (0x00010d6d) set_opt_bg_pane_g5

0x4540,	// (0x00010d75) set_opt_bg_pane_g6

0xb121,	// (0x00017956) set_opt_bg_pane_g7

0xb129,	// (0x0001795e) set_opt_bg_pane_g8

0xb131,	// (0x00017966) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x0001c1d5) set_opt_bg_pane_g

0x7a47,	// (0x0001427c) slider_set_pane_g1

0xb0f7,	// (0x0001792c) slider_set_pane_g2

0x0006,

0xf991,	// (0x0001c1c6) slider_set_pane_g

0xb0a7,	// (0x000178dc) volume_set_pane_g1

0xb0af,	// (0x000178e4) volume_set_pane_g2

0xb0b7,	// (0x000178ec) volume_set_pane_g3

0xb0bf,	// (0x000178f4) volume_set_pane_g4

0xb0c7,	// (0x000178fc) volume_set_pane_g5

0xb0cf,	// (0x00017904) volume_set_pane_g6

0xb0d7,	// (0x0001790c) volume_set_pane_g7

0xb0df,	// (0x00017914) volume_set_pane_g8

0xb0e7,	// (0x0001791c) volume_set_pane_g9

0xb0ef,	// (0x00017924) volume_set_pane_g10

0x0009,

0xf969,	// (0x0001c19e) volume_set_pane_g

0x3750,	// (0x0000ff85) indicator_pane_ParamLimits

0x3750,	// (0x0000ff85) indicator_pane

0x375c,	// (0x0000ff91) main_idle_pane_g2_ParamLimits

0x375c,	// (0x0000ff91) main_idle_pane_g2

0x3780,	// (0x0000ffb5) main_pane_idle_g1_ParamLimits

0x3780,	// (0x0000ffb5) main_pane_idle_g1

0x378d,	// (0x0000ffc2) popup_clock_digital_analogue_window_ParamLimits

0x378d,	// (0x0000ffc2) popup_clock_digital_analogue_window

0x37a4,	// (0x0000ffd9) soft_indicator_pane_ParamLimits

0x37a4,	// (0x0000ffd9) soft_indicator_pane

0x37b0,	// (0x0000ffe5) wallpaper_pane_ParamLimits

0x37b0,	// (0x0000ffe5) wallpaper_pane

0x3515,	// (0x0000fd4a) wallpaper_pane_g1

0x37c4,	// (0x0000fff9) indicator_pane_g1_ParamLimits

0x37c4,	// (0x0000fff9) indicator_pane_g1

0x7bd8,	// (0x0001440d) navi_navi_icon_text_pane_srt_g1

0x37df,	// (0x00010014) soft_indicator_pane_t1

0x37f9,	// (0x0001002e) aid_ps_area_pane

0x380a,	// (0x0001003f) aid_ps_clock_pane

0x3816,	// (0x0001004b) aid_ps_indicator_pane

0x3822,	// (0x00010057) indicator_ps_pane_ParamLimits

0x3822,	// (0x00010057) indicator_ps_pane

0x3831,	// (0x00010066) power_save_pane_g1_ParamLimits

0x3831,	// (0x00010066) power_save_pane_g1

0x383d,	// (0x00010072) power_save_pane_g2_ParamLimits

0x383d,	// (0x00010072) power_save_pane_g2

0x9d7b,	// (0x000165b0) aid_navinavi_width_pane

0x37f9,	// (0x0001002e) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001bde3) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001bde3) power_save_pane_g

0x384b,	// (0x00010080) power_save_pane_t1_ParamLimits

0x384b,	// (0x00010080) power_save_pane_t1

0x380a,	// (0x0001003f) aid_ps_clock_pane_ParamLimits

0x3816,	// (0x0001004b) aid_ps_indicator_pane_ParamLimits

0x385d,	// (0x00010092) power_save_pane_t4_ParamLimits

0x385d,	// (0x00010092) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001bde8) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001bde8) power_save_pane_t

0x3887,	// (0x000100bc) power_save_t3_ParamLimits

0x3887,	// (0x000100bc) power_save_t3

0x3872,	// (0x000100a7) power_save_t2_ParamLimits

0x3872,	// (0x000100a7) power_save_t2

0x389c,	// (0x000100d1) indicator_ps_pane_g1

0x38a5,	// (0x000100da) ai_gene_pane_ParamLimits

0x38a5,	// (0x000100da) ai_gene_pane

0x38b1,	// (0x000100e6) ai_links_pane_ParamLimits

0x38b1,	// (0x000100e6) ai_links_pane

0x38bd,	// (0x000100f2) indicator_pane_cp1_ParamLimits

0x38bd,	// (0x000100f2) indicator_pane_cp1

0x38c9,	// (0x000100fe) main_pane_idle_g1_cp_ParamLimits

0x38c9,	// (0x000100fe) main_pane_idle_g1_cp

0x38d5,	// (0x0001010a) popup_ai_links_title_window

0x38de,	// (0x00010113) soft_indicator_pane_cp1_ParamLimits

0x38de,	// (0x00010113) soft_indicator_pane_cp1

0x7889,	// (0x000140be) ai_links_pane_g1

0x7892,	// (0x000140c7) grid_ai_links_pane

0xb05d,	// (0x00017892) ai_gene_pane_1

0x7877,	// (0x000140ac) ai_gene_pane_2

0x7880,	// (0x000140b5) list_highlight_pane_cp4

0xb041,	// (0x00017876) cell_ai_link_pane_ParamLimits

0xb041,	// (0x00017876) cell_ai_link_pane

0x786f,	// (0x000140a4) cell_ai_link_pane_g1

0x3b43,	// (0x00010378) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x0001c179) cell_ai_link_pane_g

0x35fc,	// (0x0000fe31) grid_highlight_cp2

0x35fc,	// (0x0000fe31) bg_popup_sub_pane_cp1

0x38f8,	// (0x0001012d) popup_ai_links_title_window_t1

0x77c1,	// (0x00013ff6) ai_gene_pane_1_g1_ParamLimits

0x77c1,	// (0x00013ff6) ai_gene_pane_1_g1

0x77cd,	// (0x00014002) ai_gene_pane_1_g2_ParamLimits

0x77cd,	// (0x00014002) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x0001c16f) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x0001c16f) ai_gene_pane_1_g

0x77da,	// (0x0001400f) ai_gene_pane_1_t1_ParamLimits

0x77da,	// (0x0001400f) ai_gene_pane_1_t1

0x780e,	// (0x00014043) grid_ai_soft_ind_pane

0x77ac,	// (0x00013fe1) ai_gene_pane_2_t1_ParamLimits

0x77ac,	// (0x00013fe1) ai_gene_pane_2_t1

0x3907,	// (0x0001013c) main_pane_empty_t1_ParamLimits

0x3907,	// (0x0001013c) main_pane_empty_t1

0x3924,	// (0x00010159) main_pane_empty_t2_ParamLimits

0x3924,	// (0x00010159) main_pane_empty_t2

0x393c,	// (0x00010171) main_pane_empty_t3_ParamLimits

0x393c,	// (0x00010171) main_pane_empty_t3

0x394f,	// (0x00010184) main_pane_empty_t4_ParamLimits

0x394f,	// (0x00010184) main_pane_empty_t4

0x3962,	// (0x00010197) main_pane_empty_t5_ParamLimits

0x3962,	// (0x00010197) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001bded) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001bded) main_pane_empty_t

0x460a,	// (0x00010e3f) bg_popup_window_pane_ParamLimits

0x460a,	// (0x00010e3f) bg_popup_window_pane

0x755b,	// (0x00013d90) find_popup_pane_cp2_ParamLimits

0x755b,	// (0x00013d90) find_popup_pane_cp2

0x7567,	// (0x00013d9c) heading_pane_ParamLimits

0x7567,	// (0x00013d9c) heading_pane

0x35fc,	// (0x0000fe31) bg_popup_sub_pane

0xafc4,	// (0x000177f9) bg_popup_window_pane_g1_ParamLimits

0xafc4,	// (0x000177f9) bg_popup_window_pane_g1

0xafd0,	// (0x00017805) bg_popup_window_pane_g2_ParamLimits

0xafd0,	// (0x00017805) bg_popup_window_pane_g2

0xafdc,	// (0x00017811) bg_popup_window_pane_g3_ParamLimits

0xafdc,	// (0x00017811) bg_popup_window_pane_g3

0xafe8,	// (0x0001781d) bg_popup_window_pane_g4_ParamLimits

0xafe8,	// (0x0001781d) bg_popup_window_pane_g4

0xaff4,	// (0x00017829) bg_popup_window_pane_g5_ParamLimits

0xaff4,	// (0x00017829) bg_popup_window_pane_g5

0xb000,	// (0x00017835) bg_popup_window_pane_g6_ParamLimits

0xb000,	// (0x00017835) bg_popup_window_pane_g6

0xb00c,	// (0x00017841) bg_popup_window_pane_g7_ParamLimits

0xb00c,	// (0x00017841) bg_popup_window_pane_g7

0xb018,	// (0x0001784d) bg_popup_window_pane_g8_ParamLimits

0xb018,	// (0x0001784d) bg_popup_window_pane_g8

0xb024,	// (0x00017859) bg_popup_window_pane_g9_ParamLimits

0xb024,	// (0x00017859) bg_popup_window_pane_g9

0x7540,	// (0x00013d75) bg_popup_window_pane_g10_ParamLimits

0x7540,	// (0x00013d75) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x0001c137) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x0001c137) bg_popup_window_pane_g

0x74f7,	// (0x00013d2c) bg_popup_heading_pane_ParamLimits

0x74f7,	// (0x00013d2c) bg_popup_heading_pane

0xb3a7,	// (0x00017bdc) tabs_4_passive_pane_cp_srt_ParamLimits

0xb3a7,	// (0x00017bdc) tabs_4_passive_pane_cp_srt

0xb3b9,	// (0x00017bee) tabs_4_passive_pane_srt_ParamLimits

0x750b,	// (0x00013d40) heading_pane_g2

0xb3b9,	// (0x00017bee) tabs_4_passive_pane_srt

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp3_srt_ParamLimits

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp3_srt

0x7513,	// (0x00013d48) heading_pane_t1_ParamLimits

0x7513,	// (0x00013d48) heading_pane_t1

0x752a,	// (0x00013d5f) heading_pane_t2_ParamLimits

0x752a,	// (0x00013d5f) heading_pane_t2

0x0001,

0xf8fd,	// (0x0001c132) heading_pane_t_ParamLimits

0xf8fd,	// (0x0001c132) heading_pane_t

0x7086,	// (0x000138bb) bg_popup_heading_pane_g1

0x7117,	// (0x0001394c) bg_popup_heading_pane_g2

0x711f,	// (0x00013954) bg_popup_heading_pane_g3

0x7127,	// (0x0001395c) bg_popup_heading_pane_g4

0x712f,	// (0x00013964) bg_popup_heading_pane_g5

0x7137,	// (0x0001396c) bg_popup_heading_pane_g6

0x713f,	// (0x00013974) bg_popup_heading_pane_g7

0x7147,	// (0x0001397c) bg_popup_heading_pane_g8

0x714f,	// (0x00013984) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x0001c0ee) bg_popup_heading_pane_g

0x6966,	// (0x0001319b) bg_popup_sub_pane_g1

0x6976,	// (0x000131ab) bg_popup_sub_pane_g2

0x696e,	// (0x000131a3) bg_popup_sub_pane_g3

0x6986,	// (0x000131bb) bg_popup_sub_pane_g4

0x697e,	// (0x000131b3) bg_popup_sub_pane_g5

0x698e,	// (0x000131c3) bg_popup_sub_pane_g6

0x6996,	// (0x000131cb) bg_popup_sub_pane_g7

0x69a6,	// (0x000131db) bg_popup_sub_pane_g8

0x699e,	// (0x000131d3) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x0001c0c8) bg_popup_sub_pane_g

0x39a1,	// (0x000101d6) bg_popup_window_pane_cp5_ParamLimits

0x39a1,	// (0x000101d6) bg_popup_window_pane_cp5

0x39bd,	// (0x000101f2) popup_note_window_g1_ParamLimits

0x39bd,	// (0x000101f2) popup_note_window_g1

0x39c9,	// (0x000101fe) popup_note_window_t1_ParamLimits

0x39c9,	// (0x000101fe) popup_note_window_t1

0x39df,	// (0x00010214) popup_note_window_t2_ParamLimits

0x39df,	// (0x00010214) popup_note_window_t2

0x39f5,	// (0x0001022a) popup_note_window_t3_ParamLimits

0x39f5,	// (0x0001022a) popup_note_window_t3

0x3a0b,	// (0x00010240) popup_note_window_t4_ParamLimits

0x3a0b,	// (0x00010240) popup_note_window_t4

0x3a33,	// (0x00010268) popup_note_window_t5_ParamLimits

0x3a33,	// (0x00010268) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001bdf8) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001bdf8) popup_note_window_t

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp6_ParamLimits

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp6

0x7002,	// (0x00013837) popup_note_image_window_g1_ParamLimits

0x7002,	// (0x00013837) popup_note_image_window_g1

0x700e,	// (0x00013843) popup_note_image_window_g2_ParamLimits

0x700e,	// (0x00013843) popup_note_image_window_g2

0x0001,

0xf887,	// (0x0001c0bc) popup_note_image_window_g_ParamLimits

0xf887,	// (0x0001c0bc) popup_note_image_window_g

0x7027,	// (0x0001385c) popup_note_image_window_t1_ParamLimits

0x7027,	// (0x0001385c) popup_note_image_window_t1

0x7040,	// (0x00013875) popup_note_image_window_t2_ParamLimits

0x7040,	// (0x00013875) popup_note_image_window_t2

0x7059,	// (0x0001388e) popup_note_image_window_t3_ParamLimits

0x7059,	// (0x0001388e) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x0001c0c1) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x0001c0c1) popup_note_image_window_t

0x6eed,	// (0x00013722) bg_popup_window_pane_cp7_ParamLimits

0x6eed,	// (0x00013722) bg_popup_window_pane_cp7

0x6f1d,	// (0x00013752) popup_note_wait_window_g1_ParamLimits

0x6f1d,	// (0x00013752) popup_note_wait_window_g1

0x6f29,	// (0x0001375e) popup_note_wait_window_g2_ParamLimits

0x6f29,	// (0x0001375e) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x0001c0aa) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x0001c0aa) popup_note_wait_window_g

0x6f41,	// (0x00013776) popup_note_wait_window_t1_ParamLimits

0x6f41,	// (0x00013776) popup_note_wait_window_t1

0x6f68,	// (0x0001379d) popup_note_wait_window_t2_ParamLimits

0x6f68,	// (0x0001379d) popup_note_wait_window_t2

0x6f85,	// (0x000137ba) popup_note_wait_window_t3_ParamLimits

0x6f85,	// (0x000137ba) popup_note_wait_window_t3

0x6f98,	// (0x000137cd) popup_note_wait_window_t4_ParamLimits

0x6f98,	// (0x000137cd) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x0001c0b1) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x0001c0b1) popup_note_wait_window_t

0x6fbd,	// (0x000137f2) wait_bar_pane_ParamLimits

0x6fbd,	// (0x000137f2) wait_bar_pane

0x35fc,	// (0x0000fe31) wait_anim_pane

0x35fc,	// (0x0000fe31) wait_border_pane

0x3515,	// (0x0000fd4a) wait_anim_pane_g1

0x3515,	// (0x0000fd4a) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001bf77) wait_anim_pane_g

0x6e9d,	// (0x000136d2) wait_border_pane_g1

0x6ea6,	// (0x000136db) wait_border_pane_g2

0x6eaf,	// (0x000136e4) wait_border_pane_g3

0x0002,

0xf86e,	// (0x0001c0a3) wait_border_pane_g

0x6df3,	// (0x00013628) bg_popup_window_pane_cp16_ParamLimits

0x6df3,	// (0x00013628) bg_popup_window_pane_cp16

0x6e01,	// (0x00013636) indicator_popup_pane_cp4_ParamLimits

0x6e01,	// (0x00013636) indicator_popup_pane_cp4

0x6e15,	// (0x0001364a) popup_query_data_window_t1_ParamLimits

0x6e15,	// (0x0001364a) popup_query_data_window_t1

0x6e27,	// (0x0001365c) popup_query_data_window_t2_ParamLimits

0x6e27,	// (0x0001365c) popup_query_data_window_t2

0x6e40,	// (0x00013675) popup_query_data_window_t3_ParamLimits

0x6e40,	// (0x00013675) popup_query_data_window_t3

0x0002,

0xf867,	// (0x0001c09c) popup_query_data_window_t_ParamLimits

0xf867,	// (0x0001c09c) popup_query_data_window_t

0x6e5a,	// (0x0001368f) query_popup_data_pane_ParamLimits

0x6e5a,	// (0x0001368f) query_popup_data_pane

0x6e6e,	// (0x000136a3) query_popup_data_pane_cp1_ParamLimits

0x6e6e,	// (0x000136a3) query_popup_data_pane_cp1

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp10_ParamLimits

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp10

0x6d56,	// (0x0001358b) indicator_popup_pane_ParamLimits

0x6d56,	// (0x0001358b) indicator_popup_pane

0x3aae,	// (0x000102e3) popup_query_code_window_t1_ParamLimits

0x3aae,	// (0x000102e3) popup_query_code_window_t1

0x6d6e,	// (0x000135a3) popup_query_code_window_t2_ParamLimits

0x6d6e,	// (0x000135a3) popup_query_code_window_t2

0x6dac,	// (0x000135e1) popup_query_code_window_t3_ParamLimits

0x6dac,	// (0x000135e1) popup_query_code_window_t3

0x0002,

0xf860,	// (0x0001c095) popup_query_code_window_t_ParamLimits

0xf860,	// (0x0001c095) popup_query_code_window_t

0x6ddb,	// (0x00013610) query_popup_pane_ParamLimits

0x6ddb,	// (0x00013610) query_popup_pane

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp15_ParamLimits

0x3a57,	// (0x0001028c) bg_popup_window_pane_cp15

0x3a75,	// (0x000102aa) indicator_popup_pane_cp1_ParamLimits

0x3a75,	// (0x000102aa) indicator_popup_pane_cp1

0x3a88,	// (0x000102bd) indicator_popup_pane_cp2_ParamLimits

0x3a88,	// (0x000102bd) indicator_popup_pane_cp2

0x3a9b,	// (0x000102d0) popup_query_data_code_window_g1_ParamLimits

0x3a9b,	// (0x000102d0) popup_query_data_code_window_g1

0x3aae,	// (0x000102e3) popup_query_data_code_window_t1_ParamLimits

0x3aae,	// (0x000102e3) popup_query_data_code_window_t1

0x3ac0,	// (0x000102f5) popup_query_data_code_window_t2_ParamLimits

0x3ac0,	// (0x000102f5) popup_query_data_code_window_t2

0x3ad2,	// (0x00010307) popup_query_data_code_window_t3_ParamLimits

0x3ad2,	// (0x00010307) popup_query_data_code_window_t3

0x3ae8,	// (0x0001031d) popup_query_data_code_window_t4_ParamLimits

0x3ae8,	// (0x0001031d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001be03) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001be03) popup_query_data_code_window_t

0x5000,	// (0x00011835) list_single_midp_graphic_pane_g3

0x3b00,	// (0x00010335) query_popup_data_pane_cp2_ParamLimits

0x3b13,	// (0x00010348) query_popup_pane_cp2_ParamLimits

0x3b13,	// (0x00010348) query_popup_pane_cp2

0x35fc,	// (0x0000fe31) bg_popup_window_pane_cp11

0x6d2a,	// (0x0001355f) heading_pane_cp5

0x3bf7,	// (0x0001042c) listscroll_popup_info_pane

0x35fc,	// (0x0000fe31) input_focus_pane_cp3

0x3b26,	// (0x0001035b) query_popup_pane_t1

0x3b34,	// (0x00010369) list_popup_info_pane_ParamLimits

0x3b34,	// (0x00010369) list_popup_info_pane

0x3b43,	// (0x00010378) listscroll_popup_info_pane_g1

0x3b4b,	// (0x00010380) scroll_pane_cp7

0x3b53,	// (0x00010388) popup_info_list_pane_t1_ParamLimits

0x3b53,	// (0x00010388) popup_info_list_pane_t1

0x3b6d,	// (0x000103a2) popup_info_list_pane_t2_ParamLimits

0x3b6d,	// (0x000103a2) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001be0c) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001be0c) popup_info_list_pane_t

0x35fc,	// (0x0000fe31) bg_popup_window_pane_cp12

0x7bf2,	// (0x00014427) find_popup_pane

0x36dc,	// (0x0000ff11) bg_popup_window_pane_cp3

0x3b87,	// (0x000103bc) heading_pane_cp3

0x3b93,	// (0x000103c8) listscroll_popup_graphic_pane

0x35fc,	// (0x0000fe31) bg_popup_window_pane_cp4

0x3bef,	// (0x00010424) heading_pane_cp4

0x3bf7,	// (0x0001042c) listscroll_popup_colour_pane

0x3bff,	// (0x00010434) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3bff,	// (0x00010434) cell_large_graphic_colour_none_popup_pane

0x3c0f,	// (0x00010444) grid_large_graphic_colour_popup_pane_ParamLimits

0x3c0f,	// (0x00010444) grid_large_graphic_colour_popup_pane

0x3c2b,	// (0x00010460) listscroll_popup_colour_pane_g1_ParamLimits

0x3c2b,	// (0x00010460) listscroll_popup_colour_pane_g1

0x3c42,	// (0x00010477) listscroll_popup_colour_pane_g2_ParamLimits

0x3c42,	// (0x00010477) listscroll_popup_colour_pane_g2

0x3c56,	// (0x0001048b) listscroll_popup_colour_pane_g3_ParamLimits

0x3c56,	// (0x0001048b) listscroll_popup_colour_pane_g3

0x3c66,	// (0x0001049b) listscroll_popup_colour_pane_g4_ParamLimits

0x3c66,	// (0x0001049b) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001be11) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001be11) listscroll_popup_colour_pane_g

0x3c75,	// (0x000104aa) scroll_pane_cp6_ParamLimits

0x3c75,	// (0x000104aa) scroll_pane_cp6

0x3c87,	// (0x000104bc) cell_large_graphic_colour_popup_pane_ParamLimits

0x3c87,	// (0x000104bc) cell_large_graphic_colour_popup_pane

0x3ca6,	// (0x000104db) cell_large_graphic_colour_none_popup_pane_t1

0x35fc,	// (0x0000fe31) grid_highlight_pane_cp5

0x3cb5,	// (0x000104ea) cell_large_graphic_colour_popup_pane_g1

0x3cbd,	// (0x000104f2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001be1a) cell_large_graphic_colour_popup_pane_g

0x3cc5,	// (0x000104fa) cell_large_graphic_colour_popup_pane_g2_copy1

0x3cce,	// (0x00010503) grid_highlight_pane_cp4

0x3cd6,	// (0x0001050b) bg_popup_window_pane_cp8_ParamLimits

0x3cd6,	// (0x0001050b) bg_popup_window_pane_cp8

0x3cf1,	// (0x00010526) popup_snote_single_text_window_g1_ParamLimits

0x3cf1,	// (0x00010526) popup_snote_single_text_window_g1

0x3d03,	// (0x00010538) popup_snote_single_text_window_t1_ParamLimits

0x3d03,	// (0x00010538) popup_snote_single_text_window_t1

0x3d16,	// (0x0001054b) popup_snote_single_text_window_t2_ParamLimits

0x3d16,	// (0x0001054b) popup_snote_single_text_window_t2

0x3d29,	// (0x0001055e) popup_snote_single_text_window_t3_ParamLimits

0x3d29,	// (0x0001055e) popup_snote_single_text_window_t3

0x3d62,	// (0x00010597) popup_snote_single_text_window_t4_ParamLimits

0x3d62,	// (0x00010597) popup_snote_single_text_window_t4

0x3d96,	// (0x000105cb) popup_snote_single_text_window_t5_ParamLimits

0x3d96,	// (0x000105cb) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001be1f) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001be1f) popup_snote_single_text_window_t

0x3dc5,	// (0x000105fa) bg_popup_window_pane_cp9_ParamLimits

0x3dc5,	// (0x000105fa) bg_popup_window_pane_cp9

0x3cf1,	// (0x00010526) popup_snote_single_graphic_window_g1_ParamLimits

0x3cf1,	// (0x00010526) popup_snote_single_graphic_window_g1

0x3dd3,	// (0x00010608) popup_snote_single_graphic_window_g2_ParamLimits

0x3dd3,	// (0x00010608) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001be2a) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001be2a) popup_snote_single_graphic_window_g

0x3ddf,	// (0x00010614) popup_snote_single_graphic_window_t1_ParamLimits

0x3ddf,	// (0x00010614) popup_snote_single_graphic_window_t1

0x3df2,	// (0x00010627) popup_snote_single_graphic_window_t2_ParamLimits

0x3df2,	// (0x00010627) popup_snote_single_graphic_window_t2

0x3d29,	// (0x0001055e) popup_snote_single_graphic_window_t3_ParamLimits

0x3d29,	// (0x0001055e) popup_snote_single_graphic_window_t3

0x3d62,	// (0x00010597) popup_snote_single_graphic_window_t4_ParamLimits

0x3d62,	// (0x00010597) popup_snote_single_graphic_window_t4

0x3d96,	// (0x000105cb) popup_snote_single_graphic_window_t5_ParamLimits

0x3d96,	// (0x000105cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001be2f) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001be2f) popup_snote_single_graphic_window_t

0xb338,	// (0x00017b6d) grid_graphic_popup_pane_ParamLimits

0xb338,	// (0x00017b6d) grid_graphic_popup_pane

0xb35b,	// (0x00017b90) listscroll_popup_graphic_pane_g1_ParamLimits

0xb35b,	// (0x00017b90) listscroll_popup_graphic_pane_g1

0xb36f,	// (0x00017ba4) listscroll_popup_graphic_pane_g2_ParamLimits

0xb36f,	// (0x00017ba4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x0001c212) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x0001c212) listscroll_popup_graphic_pane_g

0x7abf,	// (0x000142f4) scroll_pane_cp5

0xb2f1,	// (0x00017b26) cell_graphic_popup_pane_ParamLimits

0xb2f1,	// (0x00017b26) cell_graphic_popup_pane

0x7b9b,	// (0x000143d0) cell_graphic_popup_pane_g1

0x7ba3,	// (0x000143d8) cell_graphic_popup_pane_g2

0x3cc5,	// (0x000104fa) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x0001c20b) cell_graphic_popup_pane_g

0x7bac,	// (0x000143e1) cell_graphic_popup_pane_t2

0x3cce,	// (0x00010503) grid_highlight_pane_cp3

0x3e17,	// (0x0001064c) list_gen_pane_ParamLimits

0x3e17,	// (0x0001064c) list_gen_pane

0x3e48,	// (0x0001067d) scroll_pane

0xb2c2,	// (0x00017af7) bg_list_pane_g1_ParamLimits

0xb2c2,	// (0x00017af7) bg_list_pane_g1

0x7b52,	// (0x00014387) bg_list_pane_g2_ParamLimits

0x7b52,	// (0x00014387) bg_list_pane_g2

0x7b65,	// (0x0001439a) bg_list_pane_g3_ParamLimits

0x7b65,	// (0x0001439a) bg_list_pane_g3

0x7b77,	// (0x000143ac) bg_list_pane_g4_ParamLimits

0x7b77,	// (0x000143ac) bg_list_pane_g4

0xb2d9,	// (0x00017b0e) bg_list_pane_g5_ParamLimits

0xb2d9,	// (0x00017b0e) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x0001c200) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x0001c200) bg_list_pane_g

0xb272,	// (0x00017aa7) list_double2_graphic_large_graphic_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double2_graphic_large_graphic_pane

0xb272,	// (0x00017aa7) list_double2_graphic_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double2_graphic_pane

0xb272,	// (0x00017aa7) list_double2_large_graphic_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double2_large_graphic_pane

0xb272,	// (0x00017aa7) list_double2_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double2_pane

0xb272,	// (0x00017aa7) list_double_graphic_heading_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_graphic_heading_pane

0xb272,	// (0x00017aa7) list_double_graphic_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_graphic_pane

0xb272,	// (0x00017aa7) list_double_heading_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_heading_pane

0xb272,	// (0x00017aa7) list_double_large_graphic_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_large_graphic_pane

0xb272,	// (0x00017aa7) list_double_number_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_number_pane

0xb272,	// (0x00017aa7) list_double_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_pane

0xb272,	// (0x00017aa7) list_double_time_pane_ParamLimits

0xb272,	// (0x00017aa7) list_double_time_pane

0xb272,	// (0x00017aa7) list_setting_number_pane_ParamLimits

0xb272,	// (0x00017aa7) list_setting_number_pane

0xb272,	// (0x00017aa7) list_setting_pane_ParamLimits

0xb272,	// (0x00017aa7) list_setting_pane

0x974d,	// (0x00015f82) list_single_2graphic_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_2graphic_pane

0x974d,	// (0x00015f82) list_single_graphic_heading_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_graphic_heading_pane

0x974d,	// (0x00015f82) list_single_graphic_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_graphic_pane

0x974d,	// (0x00015f82) list_single_heading_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_heading_pane

0x9764,	// (0x00015f99) list_single_large_graphic_pane_ParamLimits

0x9764,	// (0x00015f99) list_single_large_graphic_pane

0x974d,	// (0x00015f82) list_single_number_heading_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_number_heading_pane

0x974d,	// (0x00015f82) list_single_number_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_number_pane

0x974d,	// (0x00015f82) list_single_pane_ParamLimits

0x974d,	// (0x00015f82) list_single_pane

0x35fc,	// (0x0000fe31) list_highlight_pane_cp1

0x8eeb,	// (0x00015720) list_single_pane_g1_ParamLimits

0x8eeb,	// (0x00015720) list_single_pane_g1

0x8ef7,	// (0x0001572c) list_single_pane_g2_ParamLimits

0x8ef7,	// (0x0001572c) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001be41) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001be41) list_single_pane_g

0x970d,	// (0x00015f42) list_single_pane_t1_ParamLimits

0x970d,	// (0x00015f42) list_single_pane_t1

0x8eeb,	// (0x00015720) list_single_number_pane_g1_ParamLimits

0x8eeb,	// (0x00015720) list_single_number_pane_g1

0x8ef7,	// (0x0001572c) list_single_number_pane_g2_ParamLimits

0x8ef7,	// (0x0001572c) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001be41) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001be41) list_single_number_pane_g

0x8f03,	// (0x00015738) list_single_number_pane_t1_ParamLimits

0x8f03,	// (0x00015738) list_single_number_pane_t1

0x96ce,	// (0x00015f03) list_single_number_pane_t2_ParamLimits

0x96ce,	// (0x00015f03) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x0001c1c1) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x0001c1c1) list_single_number_pane_t

0x8edf,	// (0x00015714) list_single_graphic_pane_g1_ParamLimits

0x8edf,	// (0x00015714) list_single_graphic_pane_g1

0x8eeb,	// (0x00015720) list_single_graphic_pane_g2_ParamLimits

0x8eeb,	// (0x00015720) list_single_graphic_pane_g2

0x8ef7,	// (0x0001572c) list_single_graphic_pane_g3_ParamLimits

0x8ef7,	// (0x0001572c) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001be3a) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001be3a) list_single_graphic_pane_g

0x8f03,	// (0x00015738) list_single_graphic_pane_t1_ParamLimits

0x8f03,	// (0x00015738) list_single_graphic_pane_t1

0x8eeb,	// (0x00015720) list_single_heading_pane_g1_ParamLimits

0x8eeb,	// (0x00015720) list_single_heading_pane_g1

0x8ef7,	// (0x0001572c) list_single_heading_pane_g2_ParamLimits

0x8ef7,	// (0x0001572c) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001be41) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001be41) list_single_heading_pane_g

0x8f19,	// (0x0001574e) list_single_heading_pane_t1_ParamLimits

0x8f19,	// (0x0001574e) list_single_heading_pane_t1

0x8f2f,	// (0x00015764) list_single_heading_pane_t2_ParamLimits

0x8f2f,	// (0x00015764) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001be46) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001be46) list_single_heading_pane_t

0x8eeb,	// (0x00015720) list_single_number_heading_pane_g1_ParamLimits

0x8eeb,	// (0x00015720) list_single_number_heading_pane_g1

0x8ef7,	// (0x0001572c) list_single_number_heading_pane_g2_ParamLimits

0x8ef7,	// (0x0001572c) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001be41) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001be41) list_single_number_heading_pane_g

0x8f19,	// (0x0001574e) list_single_number_heading_pane_t1_ParamLimits

0x8f19,	// (0x0001574e) list_single_number_heading_pane_t1

0x8f41,	// (0x00015776) list_single_number_heading_pane_t2_ParamLimits

0x8f41,	// (0x00015776) list_single_number_heading_pane_t2

0x8f53,	// (0x00015788) list_single_number_heading_pane_t3_ParamLimits

0x8f53,	// (0x00015788) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001be4b) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001be4b) list_single_number_heading_pane_t

0x8edf,	// (0x00015714) list_single_graphic_heading_pane_g1_ParamLimits

0x8edf,	// (0x00015714) list_single_graphic_heading_pane_g1

0x8f65,	// (0x0001579a) list_single_graphic_heading_pane_g4_ParamLimits

0x8f65,	// (0x0001579a) list_single_graphic_heading_pane_g4

0x8ef7,	// (0x0001572c) list_single_graphic_heading_pane_g5_ParamLimits

0x8ef7,	// (0x0001572c) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001be52) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001be52) list_single_graphic_heading_pane_g

0x8f19,	// (0x0001574e) list_single_graphic_heading_pane_t1_ParamLimits

0x8f19,	// (0x0001574e) list_single_graphic_heading_pane_t1

0x8f74,	// (0x000157a9) list_single_graphic_heading_pane_t2_ParamLimits

0x8f74,	// (0x000157a9) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001be59) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001be59) list_single_graphic_heading_pane_t

0x8f86,	// (0x000157bb) list_single_large_graphic_pane_g1_ParamLimits

0x8f86,	// (0x000157bb) list_single_large_graphic_pane_g1

0x8f92,	// (0x000157c7) list_single_large_graphic_pane_g2_ParamLimits

0x8f92,	// (0x000157c7) list_single_large_graphic_pane_g2

0x8f9e,	// (0x000157d3) list_single_large_graphic_pane_g3_ParamLimits

0x8f9e,	// (0x000157d3) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001be5e) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001be5e) list_single_large_graphic_pane_g

0x6ea6,	// (0x000136db) wait_border_pane_g2_copy1

0x8faa,	// (0x000157df) list_single_large_graphic_pane_g4_cp2

0x8fb2,	// (0x000157e7) list_single_large_graphic_pane_t1_ParamLimits

0x8fb2,	// (0x000157e7) list_single_large_graphic_pane_t1

0x8fc8,	// (0x000157fd) list_double_pane_g1_ParamLimits

0x8fc8,	// (0x000157fd) list_double_pane_g1

0x8fd4,	// (0x00015809) list_double_pane_g2_ParamLimits

0x8fd4,	// (0x00015809) list_double_pane_g2

0x0001,

0xf630,	// (0x0001be65) list_double_pane_g_ParamLimits

0xf630,	// (0x0001be65) list_double_pane_g

0x8fe0,	// (0x00015815) list_double_pane_t1_ParamLimits

0x8fe0,	// (0x00015815) list_double_pane_t1

0x8ff6,	// (0x0001582b) list_double_pane_t2_ParamLimits

0x8ff6,	// (0x0001582b) list_double_pane_t2

0x0001,

0xf635,	// (0x0001be6a) list_double_pane_t_ParamLimits

0xf635,	// (0x0001be6a) list_double_pane_t

0x9008,	// (0x0001583d) list_double2_pane_g1_ParamLimits

0x9008,	// (0x0001583d) list_double2_pane_g1

0x8fd4,	// (0x00015809) list_double2_pane_g2_ParamLimits

0x8fd4,	// (0x00015809) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001be6f) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001be6f) list_double2_pane_g

0x8fe0,	// (0x00015815) list_double2_pane_t1_ParamLimits

0x8fe0,	// (0x00015815) list_double2_pane_t1

0x9017,	// (0x0001584c) list_double2_pane_t2_ParamLimits

0x9017,	// (0x0001584c) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001be74) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001be74) list_double2_pane_t

0x8fc8,	// (0x000157fd) list_double_number_pane_g1_ParamLimits

0x8fc8,	// (0x000157fd) list_double_number_pane_g1

0x8fd4,	// (0x00015809) list_double_number_pane_g2_ParamLimits

0x8fd4,	// (0x00015809) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001be65) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001be65) list_double_number_pane_g

0x9029,	// (0x0001585e) list_double_number_pane_t1_ParamLimits

0x9029,	// (0x0001585e) list_double_number_pane_t1

0x903b,	// (0x00015870) list_double_number_pane_t2_ParamLimits

0x903b,	// (0x00015870) list_double_number_pane_t2

0x9051,	// (0x00015886) list_double_number_pane_t3_ParamLimits

0x9051,	// (0x00015886) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001be79) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001be79) list_double_number_pane_t

0x9063,	// (0x00015898) list_double_graphic_pane_g1_ParamLimits

0x9063,	// (0x00015898) list_double_graphic_pane_g1

0x906f,	// (0x000158a4) list_double_graphic_pane_g2_ParamLimits

0x906f,	// (0x000158a4) list_double_graphic_pane_g2

0x907e,	// (0x000158b3) list_double_graphic_pane_g3_ParamLimits

0x907e,	// (0x000158b3) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001be80) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001be80) list_double_graphic_pane_g

0x9096,	// (0x000158cb) list_double_graphic_pane_t1_ParamLimits

0x9096,	// (0x000158cb) list_double_graphic_pane_t1

0x90ac,	// (0x000158e1) list_double_graphic_pane_t2_ParamLimits

0x90ac,	// (0x000158e1) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001be89) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001be89) list_double_graphic_pane_t

0x9063,	// (0x00015898) list_double2_graphic_pane_g1_ParamLimits

0x9063,	// (0x00015898) list_double2_graphic_pane_g1

0x90be,	// (0x000158f3) list_double2_graphic_pane_g2_ParamLimits

0x90be,	// (0x000158f3) list_double2_graphic_pane_g2

0x90ca,	// (0x000158ff) list_double2_graphic_pane_g3_ParamLimits

0x90ca,	// (0x000158ff) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001be8e) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001be8e) list_double2_graphic_pane_g

0x903b,	// (0x00015870) list_double2_graphic_pane_t1_ParamLimits

0x903b,	// (0x00015870) list_double2_graphic_pane_t1

0x90d6,	// (0x0001590b) list_double2_graphic_pane_t2_ParamLimits

0x90d6,	// (0x0001590b) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001be95) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001be95) list_double2_graphic_pane_t

0x90e8,	// (0x0001591d) list_double_large_graphic_pane_g1_ParamLimits

0x90e8,	// (0x0001591d) list_double_large_graphic_pane_g1

0x9008,	// (0x0001583d) list_double_large_graphic_pane_g2_ParamLimits

0x9008,	// (0x0001583d) list_double_large_graphic_pane_g2

0x8fd4,	// (0x00015809) list_double_large_graphic_pane_g3_ParamLimits

0x8fd4,	// (0x00015809) list_double_large_graphic_pane_g3

0x9111,	// (0x00015946) list_double_large_graphic_pane_g4_ParamLimits

0x9111,	// (0x00015946) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001be9a) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001be9a) list_double_large_graphic_pane_g

0x9137,	// (0x0001596c) list_double_large_graphic_pane_t1_ParamLimits

0x9137,	// (0x0001596c) list_double_large_graphic_pane_t1

0x9150,	// (0x00015985) list_double_large_graphic_pane_t2_ParamLimits

0x9150,	// (0x00015985) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001bea5) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001bea5) list_double_large_graphic_pane_t

0x9162,	// (0x00015997) list_double2_large_graphic_pane_g1_ParamLimits

0x9162,	// (0x00015997) list_double2_large_graphic_pane_g1

0x9008,	// (0x0001583d) list_double2_large_graphic_pane_g2_ParamLimits

0x9008,	// (0x0001583d) list_double2_large_graphic_pane_g2

0x8fd4,	// (0x00015809) list_double2_large_graphic_pane_g3_ParamLimits

0x8fd4,	// (0x00015809) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001beaa) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001beaa) list_double2_large_graphic_pane_g

0x916e,	// (0x000159a3) list_double2_large_graphic_pane_t1_ParamLimits

0x916e,	// (0x000159a3) list_double2_large_graphic_pane_t1

0x9184,	// (0x000159b9) list_double2_large_graphic_pane_t2_ParamLimits

0x9184,	// (0x000159b9) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001beb1) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001beb1) list_double2_large_graphic_pane_t

0x9196,	// (0x000159cb) list_double_heading_pane_g1_ParamLimits

0x9196,	// (0x000159cb) list_double_heading_pane_g1

0x91a5,	// (0x000159da) list_double_heading_pane_g2_ParamLimits

0x91a5,	// (0x000159da) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001beb6) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001beb6) list_double_heading_pane_g

0x91b1,	// (0x000159e6) list_double_heading_pane_t1_ParamLimits

0x91b1,	// (0x000159e6) list_double_heading_pane_t1

0x91c7,	// (0x000159fc) list_double_heading_pane_t2_ParamLimits

0x91c7,	// (0x000159fc) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001bebb) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001bebb) list_double_heading_pane_t

0x91d9,	// (0x00015a0e) list_double_graphic_heading_pane_g1_ParamLimits

0x91d9,	// (0x00015a0e) list_double_graphic_heading_pane_g1

0x9196,	// (0x000159cb) list_double_graphic_heading_pane_g2_ParamLimits

0x9196,	// (0x000159cb) list_double_graphic_heading_pane_g2

0x91a5,	// (0x000159da) list_double_graphic_heading_pane_g3_ParamLimits

0x91a5,	// (0x000159da) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001bec0) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001bec0) list_double_graphic_heading_pane_g

0x91e5,	// (0x00015a1a) list_double_graphic_heading_pane_t1_ParamLimits

0x91e5,	// (0x00015a1a) list_double_graphic_heading_pane_t1

0x91fb,	// (0x00015a30) list_double_graphic_heading_pane_t2_ParamLimits

0x91fb,	// (0x00015a30) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001bec7) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001bec7) list_double_graphic_heading_pane_t

0x9008,	// (0x0001583d) list_double_time_pane_g1_ParamLimits

0x9008,	// (0x0001583d) list_double_time_pane_g1

0x8fd4,	// (0x00015809) list_double_time_pane_g2_ParamLimits

0x8fd4,	// (0x00015809) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0001be6f) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0001be6f) list_double_time_pane_g

0x916e,	// (0x000159a3) list_double_time_pane_t1_ParamLimits

0x916e,	// (0x000159a3) list_double_time_pane_t1

0x920d,	// (0x00015a42) list_double_time_pane_t2_ParamLimits

0x920d,	// (0x00015a42) list_double_time_pane_t2

0x921f,	// (0x00015a54) list_double_time_pane_t3_ParamLimits

0x921f,	// (0x00015a54) list_double_time_pane_t3

0x9231,	// (0x00015a66) list_double_time_pane_t4_ParamLimits

0x9231,	// (0x00015a66) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0001becc) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0001becc) list_double_time_pane_t

0x9243,	// (0x00015a78) list_setting_pane_g1_ParamLimits

0x9243,	// (0x00015a78) list_setting_pane_g1

0x924f,	// (0x00015a84) list_setting_pane_g2_ParamLimits

0x924f,	// (0x00015a84) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0001bed5) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0001bed5) list_setting_pane_g

0x925b,	// (0x00015a90) list_setting_pane_t1_ParamLimits

0x925b,	// (0x00015a90) list_setting_pane_t1

0x9272,	// (0x00015aa7) list_setting_pane_t2_ParamLimits

0x9272,	// (0x00015aa7) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0001beda) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0001beda) list_setting_pane_t

0x92af,	// (0x00015ae4) set_value_pane_cp_ParamLimits

0x92af,	// (0x00015ae4) set_value_pane_cp

0x92bb,	// (0x00015af0) list_setting_number_pane_g1_ParamLimits

0x92bb,	// (0x00015af0) list_setting_number_pane_g1

0x92c7,	// (0x00015afc) list_setting_number_pane_g2_ParamLimits

0x92c7,	// (0x00015afc) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0001bee1) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0001bee1) list_setting_number_pane_g

0x92d3,	// (0x00015b08) list_setting_number_pane_t1_ParamLimits

0x92d3,	// (0x00015b08) list_setting_number_pane_t1

0x92e5,	// (0x00015b1a) list_setting_number_pane_t2_ParamLimits

0x92e5,	// (0x00015b1a) list_setting_number_pane_t2

0x92fc,	// (0x00015b31) list_setting_number_pane_t3_ParamLimits

0x92fc,	// (0x00015b31) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001bee6) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001bee6) list_setting_number_pane_t

0x92af,	// (0x00015ae4) set_value_pane_ParamLimits

0x92af,	// (0x00015ae4) set_value_pane

0x42d8,	// (0x00010b0d) bg_set_opt_pane_ParamLimits

0x42d8,	// (0x00010b0d) bg_set_opt_pane

0x933d,	// (0x00015b72) set_value_pane_t1

0x4307,	// (0x00010b3c) slider_set_pane_cp3

0x4310,	// (0x00010b45) volume_small_pane_cp

0x4319,	// (0x00010b4e) list_form_gen_pane

0x3e6c,	// (0x000106a1) scroll_pane_cp8

0x9353,	// (0x00015b88) form_field_data_pane_ParamLimits

0x9353,	// (0x00015b88) form_field_data_pane

0x9373,	// (0x00015ba8) form_field_data_wide_pane_ParamLimits

0x9373,	// (0x00015ba8) form_field_data_wide_pane

0x9392,	// (0x00015bc7) form_field_popup_pane_ParamLimits

0x9392,	// (0x00015bc7) form_field_popup_pane

0x93aa,	// (0x00015bdf) form_field_popup_wide_pane_ParamLimits

0x93aa,	// (0x00015bdf) form_field_popup_wide_pane

0x93c1,	// (0x00015bf6) form_field_slider_pane_ParamLimits

0x93c1,	// (0x00015bf6) form_field_slider_pane

0x93d4,	// (0x00015c09) form_field_slider_wide_pane_ParamLimits

0x93d4,	// (0x00015c09) form_field_slider_wide_pane

0x43c6,	// (0x00010bfb) data_form_pane

0x444e,	// (0x00010c83) form_field_data_pane_t1

0x43f2,	// (0x00010c27) input_focus_pane

0x4400,	// (0x00010c35) data_form_wide_pane

0x93fb,	// (0x00015c30) form_field_data_wide_pane_t1

0x3ce3,	// (0x00010518) input_focus_pane_cp6

0x941d,	// (0x00015c52) form_field_popup_pane_t1

0x43f2,	// (0x00010c27) input_focus_pane_cp7

0x43c6,	// (0x00010bfb) list_form_pane

0x943d,	// (0x00015c72) form_field_popup_wide_pane_t1

0x43f2,	// (0x00010c27) input_focus_pane_cp8

0x4483,	// (0x00010cb8) list_form_wide_pane

0x945a,	// (0x00015c8f) form_field_slider_pane_t1_ParamLimits

0x945a,	// (0x00015c8f) form_field_slider_pane_t1

0x946c,	// (0x00015ca1) form_field_slider_pane_t2_ParamLimits

0x946c,	// (0x00015ca1) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001bef6) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001bef6) form_field_slider_pane_t

0x39a1,	// (0x000101d6) input_focus_pane_cp9_ParamLimits

0x39a1,	// (0x000101d6) input_focus_pane_cp9

0x947e,	// (0x00015cb3) slider_cont_pane_ParamLimits

0x947e,	// (0x00015cb3) slider_cont_pane

0x44d6,	// (0x00010d0b) form_field_slider_wide_pane_t1_ParamLimits

0x44d6,	// (0x00010d0b) form_field_slider_wide_pane_t1

0x9492,	// (0x00015cc7) form_field_slider_wide_pane_t2_ParamLimits

0x9492,	// (0x00015cc7) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001befb) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001befb) form_field_slider_wide_pane_t

0x39a1,	// (0x000101d6) input_focus_pane_cp10_ParamLimits

0x39a1,	// (0x000101d6) input_focus_pane_cp10

0x94a4,	// (0x00015cd9) slider_cont_pane_cp1_ParamLimits

0x94a4,	// (0x00015cd9) slider_cont_pane_cp1

0x94ba,	// (0x00015cef) slider_form_pane_cp

0x4518,	// (0x00010d4d) input_focus_pane_g1

0x4520,	// (0x00010d55) input_focus_pane_g2

0x4528,	// (0x00010d5d) input_focus_pane_g3

0x4530,	// (0x00010d65) input_focus_pane_g4

0x4538,	// (0x00010d6d) input_focus_pane_g5

0x4540,	// (0x00010d75) input_focus_pane_g6

0x4548,	// (0x00010d7d) input_focus_pane_g7

0x4550,	// (0x00010d85) input_focus_pane_g8

0x4558,	// (0x00010d8d) input_focus_pane_g9

0x3515,	// (0x0000fd4a) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001bf00) input_focus_pane_g

0x6eaf,	// (0x000136e4) wait_border_pane_g3_copy1

0x94c2,	// (0x00015cf7) data_form_pane_t1

0x3515,	// (0x0000fd4a) wait_anim_pane_g1_copy1

0x96e0,	// (0x00015f15) data_form_wide_pane_t1

0x94dc,	// (0x00015d11) list_form_graphic_pane_cp_ParamLimits

0x94dc,	// (0x00015d11) list_form_graphic_pane_cp

0x7ae5,	// (0x0001431a) slider_form_pane_g1

0x7aee,	// (0x00014323) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x0001c1f1) slider_form_pane_g

0x94dc,	// (0x00015d11) list_form_graphic_pane_ParamLimits

0x94dc,	// (0x00015d11) list_form_graphic_pane

0x94f2,	// (0x00015d27) list_form_graphic_pane_g1

0x94fa,	// (0x00015d2f) list_form_graphic_pane_t1_ParamLimits

0x94fa,	// (0x00015d2f) list_form_graphic_pane_t1

0x36dc,	// (0x0000ff11) list_highlight_pane_cp5_ParamLimits

0x36dc,	// (0x0000ff11) list_highlight_pane_cp5

0x950f,	// (0x00015d44) find_pane_g1

0x45cb,	// (0x00010e00) input_find_pane

0x9518,	// (0x00015d4d) input_find_pane_g1_ParamLimits

0x9518,	// (0x00015d4d) input_find_pane_g1

0x9524,	// (0x00015d59) input_find_pane_t1_ParamLimits

0x9524,	// (0x00015d59) input_find_pane_t1

0x9539,	// (0x00015d6e) input_find_pane_t2_ParamLimits

0x9539,	// (0x00015d6e) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001bf15) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001bf15) input_find_pane_t

0x460a,	// (0x00010e3f) input_focus_pane_cp5_ParamLimits

0x460a,	// (0x00010e3f) input_focus_pane_cp5

0x39a1,	// (0x000101d6) bg_popup_window_pane_cp2_ParamLimits

0x39a1,	// (0x000101d6) bg_popup_window_pane_cp2

0x4624,	// (0x00010e59) listscroll_menu_pane_ParamLimits

0x4624,	// (0x00010e59) listscroll_menu_pane

0x4630,	// (0x00010e65) popup_submenu_window_ParamLimits

0x4630,	// (0x00010e65) popup_submenu_window

0x4654,	// (0x00010e89) find_popup_pane_g1

0x465c,	// (0x00010e91) input_popup_find_pane_cp

0x460a,	// (0x00010e3f) input_focus_pane_cp4_ParamLimits

0x460a,	// (0x00010e3f) input_focus_pane_cp4

0x4672,	// (0x00010ea7) input_popup_find_pane_t1_ParamLimits

0x4672,	// (0x00010ea7) input_popup_find_pane_t1

0x35fc,	// (0x0000fe31) bg_popup_sub_pane_cp

0x46a0,	// (0x00010ed5) listscroll_popup_sub_pane

0x46a8,	// (0x00010edd) list_submenu_pane_ParamLimits

0x46a8,	// (0x00010edd) list_submenu_pane

0x46b9,	// (0x00010eee) scroll_pane_cp4

0x46c1,	// (0x00010ef6) list_single_popup_submenu_pane_ParamLimits

0x46c1,	// (0x00010ef6) list_single_popup_submenu_pane

0x46d5,	// (0x00010f0a) list_single_popup_submenu_pane_g1

0x46dd,	// (0x00010f12) list_single_popup_submenu_pane_t1_ParamLimits

0x46dd,	// (0x00010f12) list_single_popup_submenu_pane_t1

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp1_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp1

0x46f2,	// (0x00010f27) tabs_2_active_pane_g1

0x46fa,	// (0x00010f2f) tabs_2_active_pane_t1

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp1_ParamLimits

0x36dc,	// (0x0000ff11) bg_passive_tab_pane_cp1

0x46f2,	// (0x00010f27) tabs_2_passive_pane_g1

0x46fa,	// (0x00010f2f) tabs_2_passive_pane_t1

0x470c,	// (0x00010f41) bg_active_tab_pane_cp4

0x471a,	// (0x00010f4f) tabs_2_long_active_pane_t1

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp4

0x6e91,	// (0x000136c6) list_single_midp_graphic_pane_g4_ParamLimits

0x470c,	// (0x00010f41) bg_active_tab_pane_cp5

0x4739,	// (0x00010f6e) tabs_3_long_active_pane_t1

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp5

0x6e91,	// (0x000136c6) list_single_midp_graphic_pane_g4

0x36dc,	// (0x0000ff11) bg_popup_window_pane_cp13_ParamLimits

0x36dc,	// (0x0000ff11) bg_popup_window_pane_cp13

0x4754,	// (0x00010f89) listscroll_popup_fast_pane_ParamLimits

0x4754,	// (0x00010f89) listscroll_popup_fast_pane

0x4763,	// (0x00010f98) grid_popup_fast_pane_ParamLimits

0x4763,	// (0x00010f98) grid_popup_fast_pane

0x4775,	// (0x00010faa) scroll_pane_cp9_ParamLimits

0x4775,	// (0x00010faa) scroll_pane_cp9

0xc4f6,	// (0x00018d2b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc4f6,	// (0x00018d2b) list_single_graphic_hl_pane_t1_cp2

0x4799,	// (0x00010fce) input_focus_pane_cp20_ParamLimits

0x4799,	// (0x00010fce) input_focus_pane_cp20

0x47a7,	// (0x00010fdc) query_popup_data_pane_t1_ParamLimits

0x47a7,	// (0x00010fdc) query_popup_data_pane_t1

0x47ba,	// (0x00010fef) query_popup_data_pane_t2_ParamLimits

0x47ba,	// (0x00010fef) query_popup_data_pane_t2

0x4800,	// (0x00011035) query_popup_data_pane_t3_ParamLimits

0x4800,	// (0x00011035) query_popup_data_pane_t3

0x4841,	// (0x00011076) query_popup_data_pane_t4_ParamLimits

0x4841,	// (0x00011076) query_popup_data_pane_t4

0x487d,	// (0x000110b2) query_popup_data_pane_t5_ParamLimits

0x487d,	// (0x000110b2) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001bf1a) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001bf1a) query_popup_data_pane_t

0x4518,	// (0x00010d4d) bg_set_opt_pane_g1

0x4520,	// (0x00010d55) bg_set_opt_pane_g2

0x4528,	// (0x00010d5d) bg_set_opt_pane_g3

0x4530,	// (0x00010d65) bg_set_opt_pane_g4

0x4538,	// (0x00010d6d) bg_set_opt_pane_g5

0x4540,	// (0x00010d75) bg_set_opt_pane_g6

0x4548,	// (0x00010d7d) bg_set_opt_pane_g7

0x4550,	// (0x00010d85) bg_set_opt_pane_g8

0x4558,	// (0x00010d8d) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001bf25) bg_set_opt_pane_g

0xa290,	// (0x00016ac5) control_top_pane_stacon_ParamLimits

0xa290,	// (0x00016ac5) control_top_pane_stacon

0xa2e3,	// (0x00016b18) signal_pane_stacon_ParamLimits

0xa2e3,	// (0x00016b18) signal_pane_stacon

0x4e92,	// (0x000116c7) stacon_top_pane_g1_ParamLimits

0x4e92,	// (0x000116c7) stacon_top_pane_g1

0xa308,	// (0x00016b3d) title_pane_stacon_ParamLimits

0xa308,	// (0x00016b3d) title_pane_stacon

0xa32a,	// (0x00016b5f) uni_indicator_pane_stacon_ParamLimits

0xa32a,	// (0x00016b5f) uni_indicator_pane_stacon

0xa33f,	// (0x00016b74) battery_pane_stacon_ParamLimits

0xa33f,	// (0x00016b74) battery_pane_stacon

0xa37f,	// (0x00016bb4) control_bottom_pane_stacon_ParamLimits

0xa37f,	// (0x00016bb4) control_bottom_pane_stacon

0xa39e,	// (0x00016bd3) navi_pane_stacon_ParamLimits

0xa39e,	// (0x00016bd3) navi_pane_stacon

0x4eb4,	// (0x000116e9) stacon_bottom_pane_g1_ParamLimits

0x4eb4,	// (0x000116e9) stacon_bottom_pane_g1

0x48b4,	// (0x000110e9) aid_levels_signal_lsc_ParamLimits

0x48b4,	// (0x000110e9) aid_levels_signal_lsc

0xa05c,	// (0x00016891) signal_pane_stacon_g1_ParamLimits

0xa05c,	// (0x00016891) signal_pane_stacon_g1

0xa068,	// (0x0001689d) signal_pane_stacon_g2_ParamLimits

0xa068,	// (0x0001689d) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001bf38) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001bf38) signal_pane_stacon_g

0xa09c,	// (0x000168d1) title_pane_stacon_t1_ParamLimits

0xa09c,	// (0x000168d1) title_pane_stacon_t1

0x48e2,	// (0x00011117) uni_indicator_pane_stacon_g1

0x48ec,	// (0x00011121) uni_indicator_pane_stacon_g2

0x48ce,	// (0x00011103) uni_indicator_pane_stacon_g3

0x48d8,	// (0x0001110d) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001bf44) uni_indicator_pane_stacon_g

0xa0c1,	// (0x000168f6) control_top_pane_stacon_g1

0xa0c9,	// (0x000168fe) control_top_pane_stacon_t1_ParamLimits

0xa0c9,	// (0x000168fe) control_top_pane_stacon_t1

0x48f6,	// (0x0001112b) aid_levels_battery_lsc_ParamLimits

0x48f6,	// (0x0001112b) aid_levels_battery_lsc

0xa0fa,	// (0x0001692f) battery_pane_stacon_g1_ParamLimits

0xa0fa,	// (0x0001692f) battery_pane_stacon_g1

0xa106,	// (0x0001693b) battery_pane_stacon_g2_ParamLimits

0xa106,	// (0x0001693b) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001bf4d) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001bf4d) battery_pane_stacon_g

0xa135,	// (0x0001696a) navi_icon_pane_stacon

0xa145,	// (0x0001697a) navi_navi_pane_stacon

0xa135,	// (0x0001696a) navi_text_pane_stacon

0xa0c1,	// (0x000168f6) control_bottom_pane_stacon_g1

0xa155,	// (0x0001698a) control_bottom_pane_stacon_t1_ParamLimits

0xa155,	// (0x0001698a) control_bottom_pane_stacon_t1

0x491e,	// (0x00011153) grid_app_pane_ParamLimits

0x491e,	// (0x00011153) grid_app_pane

0x493a,	// (0x0001116f) scroll_pane_cp15_ParamLimits

0x493a,	// (0x0001116f) scroll_pane_cp15

0x494d,	// (0x00011182) cell_app_pane_ParamLimits

0x494d,	// (0x00011182) cell_app_pane

0x496f,	// (0x000111a4) cell_app_pane_g1_ParamLimits

0x496f,	// (0x000111a4) cell_app_pane_g1

0x4993,	// (0x000111c8) cell_app_pane_g2_ParamLimits

0x4993,	// (0x000111c8) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001bf52) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001bf52) cell_app_pane_g

0x499f,	// (0x000111d4) cell_app_pane_t1_ParamLimits

0x499f,	// (0x000111d4) cell_app_pane_t1

0x49b1,	// (0x000111e6) grid_highlight_pane_ParamLimits

0x49b1,	// (0x000111e6) grid_highlight_pane

0x4518,	// (0x00010d4d) cell_highlight_pane_g1

0x4520,	// (0x00010d55) cell_highlight_pane_g2

0x4528,	// (0x00010d5d) cell_highlight_pane_g3

0x4530,	// (0x00010d65) cell_highlight_pane_g4

0x4538,	// (0x00010d6d) cell_highlight_pane_g5

0x4540,	// (0x00010d75) cell_highlight_pane_g6

0x4548,	// (0x00010d7d) cell_highlight_pane_g7

0x4550,	// (0x00010d85) cell_highlight_pane_g8

0x4558,	// (0x00010d8d) cell_highlight_pane_g9

0x3515,	// (0x0000fd4a) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001bf00) cell_highlight_pane_g

0x49c2,	// (0x000111f7) bg_scroll_pane

0xa199,	// (0x000169ce) scroll_handle_pane

0x4a09,	// (0x0001123e) scroll_bg_pane_g1

0x4a1e,	// (0x00011253) scroll_bg_pane_g2

0x4a36,	// (0x0001126b) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001bf57) scroll_bg_pane_g

0x4a4b,	// (0x00011280) scroll_handle_focus_pane_ParamLimits

0x4a4b,	// (0x00011280) scroll_handle_focus_pane

0x4a09,	// (0x0001123e) scroll_handle_pane_g1

0x4a58,	// (0x0001128d) scroll_handle_pane_g2

0x4a36,	// (0x0001126b) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001bf5e) scroll_handle_pane_g

0x460a,	// (0x00010e3f) bg_popup_sub_pane_cp21_ParamLimits

0x460a,	// (0x00010e3f) bg_popup_sub_pane_cp21

0x4a6c,	// (0x000112a1) popup_fep_japan_predictive_window_t1_ParamLimits

0x4a6c,	// (0x000112a1) popup_fep_japan_predictive_window_t1

0x4a83,	// (0x000112b8) popup_fep_japan_predictive_window_t2_ParamLimits

0x4a83,	// (0x000112b8) popup_fep_japan_predictive_window_t2

0x4ab6,	// (0x000112eb) popup_fep_japan_predictive_window_t3_ParamLimits

0x4ab6,	// (0x000112eb) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001bf65) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001bf65) popup_fep_japan_predictive_window_t

0x35fc,	// (0x0000fe31) bg_popup_sub_pane_cp23

0x4aed,	// (0x00011322) listscroll_japin_cand_pane

0x4af5,	// (0x0001132a) popup_fep_japan_candidate_window_t1

0x4b03,	// (0x00011338) candidate_pane_ParamLimits

0x4b03,	// (0x00011338) candidate_pane

0x4b16,	// (0x0001134b) scroll_pane_cp30

0x4b1e,	// (0x00011353) list_single_popup_jap_candidate_pane_ParamLimits

0x4b1e,	// (0x00011353) list_single_popup_jap_candidate_pane

0x35fc,	// (0x0000fe31) list_highlight_pane_cp30

0x4b33,	// (0x00011368) list_single_popup_jap_candidate_pane_t1

0x4b42,	// (0x00011377) level_1_signal

0x4b4f,	// (0x00011384) level_2_signal

0x4b5c,	// (0x00011391) level_3_signal

0x4b69,	// (0x0001139e) level_4_signal

0x4b76,	// (0x000113ab) level_5_signal

0x4b83,	// (0x000113b8) level_6_signal

0x4b90,	// (0x000113c5) level_7_signal

0x4b42,	// (0x00011377) level_1_battery

0x4b4f,	// (0x00011384) level_2_battery

0x4b5c,	// (0x00011391) level_3_battery

0x4b69,	// (0x0001139e) level_4_battery

0x4b76,	// (0x000113ab) level_5_battery

0x4b83,	// (0x000113b8) level_6_battery

0x4b90,	// (0x000113c5) level_7_battery

0x4bb5,	// (0x000113ea) list_menu_pane_ParamLimits

0x4bb5,	// (0x000113ea) list_menu_pane

0x4bc6,	// (0x000113fb) scroll_pane_cp25_ParamLimits

0x4bc6,	// (0x000113fb) scroll_pane_cp25

0x4bdf,	// (0x00011414) list_double2_graphic_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double2_graphic_pane_cp2

0x4bdf,	// (0x00011414) list_double2_large_graphic_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double2_large_graphic_pane_cp2

0x4bdf,	// (0x00011414) list_double2_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double2_pane_cp2

0x4bdf,	// (0x00011414) list_double_graphic_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double_graphic_pane_cp2

0x4bdf,	// (0x00011414) list_double_large_graphic_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double_large_graphic_pane_cp2

0x4bdf,	// (0x00011414) list_double_number_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double_number_pane_cp2

0x4bdf,	// (0x00011414) list_double_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double_pane_cp2

0x4bef,	// (0x00011424) list_single_2graphic_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_2graphic_pane_cp2

0x4bef,	// (0x00011424) list_single_graphic_heading_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_graphic_heading_pane_cp2

0x4bef,	// (0x00011424) list_single_graphic_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_graphic_pane_cp2

0x4bef,	// (0x00011424) list_single_heading_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_heading_pane_cp2

0x4c04,	// (0x00011439) list_single_large_graphic_pane_cp2_ParamLimits

0x4c04,	// (0x00011439) list_single_large_graphic_pane_cp2

0x4bef,	// (0x00011424) list_single_number_heading_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_number_heading_pane_cp2

0x4bef,	// (0x00011424) list_single_number_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_number_pane_cp2

0x4bef,	// (0x00011424) list_single_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_pane_cp2

0x4c5b,	// (0x00011490) bg_popup_sub_pane_cp22

0xa248,	// (0x00016a7d) popup_side_volume_key_window_g1

0xa26c,	// (0x00016aa1) popup_side_volume_key_window_t1

0xa288,	// (0x00016abd) volume_small_pane_cp1

0x39a1,	// (0x000101d6) bg_popup_sub_pane_cp24_ParamLimits

0x39a1,	// (0x000101d6) bg_popup_sub_pane_cp24

0x4c71,	// (0x000114a6) fep_china_uni_candidate_pane_ParamLimits

0x4c71,	// (0x000114a6) fep_china_uni_candidate_pane

0x4c85,	// (0x000114ba) fep_china_uni_entry_pane

0x4c95,	// (0x000114ca) popup_fep_china_uni_window_g1

0x4cb1,	// (0x000114e6) fep_china_uni_entry_pane_g1

0x4cb9,	// (0x000114ee) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001bf92) fep_china_uni_entry_pane_g

0x4cc1,	// (0x000114f6) fep_entry_item_pane

0x4ccb,	// (0x00011500) fep_candidate_item_pane

0x4cd3,	// (0x00011508) fep_china_uni_candidate_pane_g1

0x4cdb,	// (0x00011510) fep_china_uni_candidate_pane_g2

0x4ce3,	// (0x00011518) fep_china_uni_candidate_pane_g3

0x4ceb,	// (0x00011520) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001bf97) fep_china_uni_candidate_pane_g

0x3515,	// (0x0000fd4a) fep_entry_item_pane_g1

0x4cf3,	// (0x00011528) fep_entry_item_pane_t1_ParamLimits

0x4cf3,	// (0x00011528) fep_entry_item_pane_t1

0x4d09,	// (0x0001153e) fep_candidate_item_pane_t1_ParamLimits

0x4d09,	// (0x0001153e) fep_candidate_item_pane_t1

0x4d1e,	// (0x00011553) fep_candidate_item_pane_t2_ParamLimits

0x4d1e,	// (0x00011553) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001bfa0) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001bfa0) fep_candidate_item_pane_t

0x36dc,	// (0x0000ff11) list_highlight_pane_cp31_ParamLimits

0x36dc,	// (0x0000ff11) list_highlight_pane_cp31

0x4d30,	// (0x00011565) level_1_signal_lsc

0x4d39,	// (0x0001156e) level_2_signal_lsc

0x4d42,	// (0x00011577) level_3_signal_lsc

0x4d4b,	// (0x00011580) level_4_signal_lsc

0x4d54,	// (0x00011589) level_5_signal_lsc

0x4d5d,	// (0x00011592) level_6_signal_lsc

0x4d66,	// (0x0001159b) level_7_signal_lsc

0x4d66,	// (0x0001159b) level_1_battery_lsc

0x4d6f,	// (0x000115a4) level_2_battery_lsc

0x4d78,	// (0x000115ad) level_3_battery_lsc

0x4d81,	// (0x000115b6) level_4_battery_lsc

0x4d8a,	// (0x000115bf) level_5_battery_lsc

0x4d93,	// (0x000115c8) level_6_battery_lsc

0x4d30,	// (0x00011565) level_7_battery_lsc

0x4d9c,	// (0x000115d1) scroll_handle_focus_pane_g1

0x4da5,	// (0x000115da) scroll_handle_focus_pane_g2

0x4dae,	// (0x000115e3) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001bfa5) scroll_handle_focus_pane_g

0x954e,	// (0x00015d83) list_single_2graphic_pane_g1_ParamLimits

0x954e,	// (0x00015d83) list_single_2graphic_pane_g1

0x8f65,	// (0x0001579a) list_single_2graphic_pane_g2_ParamLimits

0x8f65,	// (0x0001579a) list_single_2graphic_pane_g2

0x8ef7,	// (0x0001572c) list_single_2graphic_pane_g3_ParamLimits

0x8ef7,	// (0x0001572c) list_single_2graphic_pane_g3

0x955a,	// (0x00015d8f) list_single_2graphic_pane_g4_ParamLimits

0x955a,	// (0x00015d8f) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001bfac) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001bfac) list_single_2graphic_pane_g

0x956b,	// (0x00015da0) list_single_2graphic_pane_t1_ParamLimits

0x956b,	// (0x00015da0) list_single_2graphic_pane_t1

0x9599,	// (0x00015dce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9599,	// (0x00015dce) list_double2_graphic_large_graphic_pane_g1

0x9008,	// (0x0001583d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9008,	// (0x0001583d) list_double2_graphic_large_graphic_pane_g2

0x8fd4,	// (0x00015809) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8fd4,	// (0x00015809) list_double2_graphic_large_graphic_pane_g3

0x95a9,	// (0x00015dde) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x95a9,	// (0x00015dde) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001bfb5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001bfb5) list_double2_graphic_large_graphic_pane_g

0x95b5,	// (0x00015dea) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x95b5,	// (0x00015dea) list_double2_graphic_large_graphic_pane_t1

0x95cb,	// (0x00015e00) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x95cb,	// (0x00015e00) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001bfbe) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001bfbe) list_double2_graphic_large_graphic_pane_t

0x4f5b,	// (0x00011790) popup_fast_swap_window_ParamLimits

0x4f5b,	// (0x00011790) popup_fast_swap_window

0x4f77,	// (0x000117ac) popup_side_volume_key_window

0x4f91,	// (0x000117c6) stacon_top_pane

0x4f9b,	// (0x000117d0) status_pane_ParamLimits

0x4f9b,	// (0x000117d0) status_pane

0x4f91,	// (0x000117c6) status_small_pane

0x35fc,	// (0x0000fe31) control_pane

0x35fc,	// (0x0000fe31) stacon_bottom_pane

0x3e6c,	// (0x000106a1) scroll_pane_cp121

0x4319,	// (0x00010b4e) set_content_pane

0x4e53,	// (0x00011688) bg_active_tab_pane_g1_cp1

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp1

0x4e41,	// (0x00011676) bg_active_tab_pane_g3_cp1

0x4e53,	// (0x00011688) bg_passive_tab_pane_g1_cp1

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp1

0x4e41,	// (0x00011676) bg_passive_tab_pane_g3_cp1

0x4e65,	// (0x0001169a) bg_active_tab_pane_g1_cp2

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp2

0x4e5c,	// (0x00011691) bg_active_tab_pane_g3_cp2

0x4e65,	// (0x0001169a) bg_passive_tab_pane_g1_cp2

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp2

0x4e5c,	// (0x00011691) bg_passive_tab_pane_g3_cp2

0x4e77,	// (0x000116ac) bg_active_tab_pane_g1_cp3

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp3

0x4e6e,	// (0x000116a3) bg_active_tab_pane_g3_cp3

0x4e77,	// (0x000116ac) bg_passive_tab_pane_g1_cp3

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp3

0x4e6e,	// (0x000116a3) bg_passive_tab_pane_g3_cp3

0x4e89,	// (0x000116be) bg_active_tab_pane_g1_cp4

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp4

0x4e80,	// (0x000116b5) bg_active_tab_pane_g3_cp4

0x4e89,	// (0x000116be) bg_passive_tab_pane_g1_cp4

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp4

0x4e80,	// (0x000116b5) bg_passive_tab_pane_g3_cp4

0x4ed9,	// (0x0001170e) bg_active_tab_pane_g1_cp5

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp5

0x4ed0,	// (0x00011705) bg_active_tab_pane_g3_cp5

0x4ed9,	// (0x0001170e) bg_passive_tab_pane_g1_cp5

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp5

0x4ed0,	// (0x00011705) bg_passive_tab_pane_g3_cp5

0x458f,	// (0x00010dc4) list_set_graphic_pane_ParamLimits

0x458f,	// (0x00010dc4) list_set_graphic_pane

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp4

0x4ee2,	// (0x00011717) list_set_graphic_pane_g1_ParamLimits

0x4ee2,	// (0x00011717) list_set_graphic_pane_g1

0x4eee,	// (0x00011723) list_set_graphic_pane_g2_ParamLimits

0x4eee,	// (0x00011723) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001bfc3) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001bfc3) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0001c329) volume_small_pane_cp_g

0x4f10,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4f10,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2

0x4f1c,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f1c,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2

0x4f2b,	// (0x00011760) list_double2_large_graphic_pane_g3_cp2

0x4f33,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f33,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2

0x4f49,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f49,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2

0x781e,	// (0x00014053) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x781e,	// (0x00014053) list_double_large_graphic_pane_g1_cp2

0x782f,	// (0x00014064) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x782f,	// (0x00014064) list_double_large_graphic_pane_g2_cp2

0x5076,	// (0x000118ab) list_double_large_graphic_pane_g3_cp2

0x783e,	// (0x00014073) list_double_large_graphic_pane_g4_cp

0x7846,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7846,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2

0x785d,	// (0x00014092) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x785d,	// (0x00014092) list_double_large_graphic_pane_t2_cp2

0x4fa9,	// (0x000117de) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4fa9,	// (0x000117de) list_double2_graphic_pane_g1_cp2

0x4fb5,	// (0x000117ea) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4fb5,	// (0x000117ea) list_double2_graphic_pane_g2_cp2

0x4fc4,	// (0x000117f9) list_double2_graphic_pane_g3_cp2

0x4fcc,	// (0x00011801) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4fcc,	// (0x00011801) list_double2_graphic_pane_t1_cp2

0x4fe2,	// (0x00011817) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4fe2,	// (0x00011817) list_double2_graphic_pane_t2_cp2

0x4ff4,	// (0x00011829) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_number_heading_pane_g1_cp2

0x5000,	// (0x00011835) list_single_number_heading_pane_g2_cp2

0x5008,	// (0x0001183d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5008,	// (0x0001183d) list_single_number_heading_pane_t1_cp2

0x501e,	// (0x00011853) list_single_number_heading_pane_t2_cp2_ParamLimits

0x501e,	// (0x00011853) list_single_number_heading_pane_t2_cp2

0x5030,	// (0x00011865) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5030,	// (0x00011865) list_single_number_heading_pane_t3_cp2

0x4ff4,	// (0x00011829) list_single_heading_pane_g1_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_heading_pane_g1_cp2

0x5000,	// (0x00011835) list_single_heading_pane_g2_cp2

0x5008,	// (0x0001183d) list_single_heading_pane_t1_cp2_ParamLimits

0x5008,	// (0x0001183d) list_single_heading_pane_t1_cp2

0x7628,	// (0x00013e5d) list_single_heading_pane_t2_cp2_ParamLimits

0x7628,	// (0x00013e5d) list_single_heading_pane_t2_cp2

0x75ad,	// (0x00013de2) list_double_graphic_pane_g1_cp2_ParamLimits

0x75ad,	// (0x00013de2) list_double_graphic_pane_g1_cp2

0x75b9,	// (0x00013dee) list_double_graphic_pane_g2_cp2_ParamLimits

0x75b9,	// (0x00013dee) list_double_graphic_pane_g2_cp2

0x75c8,	// (0x00013dfd) list_double_graphic_pane_g3_cp2

0x75d0,	// (0x00013e05) list_double_graphic_pane_t1_cp2_ParamLimits

0x75d0,	// (0x00013e05) list_double_graphic_pane_t1_cp2

0x75e6,	// (0x00013e1b) list_double_graphic_pane_t2_cp2_ParamLimits

0x75e6,	// (0x00013e1b) list_double_graphic_pane_t2_cp2

0x506a,	// (0x0001189f) list_double_number_pane_g1_cp2_ParamLimits

0x506a,	// (0x0001189f) list_double_number_pane_g1_cp2

0x5076,	// (0x000118ab) list_double_number_pane_g2_cp2

0x7573,	// (0x00013da8) list_double_number_pane_t1_cp2_ParamLimits

0x7573,	// (0x00013da8) list_double_number_pane_t1_cp2

0x7585,	// (0x00013dba) list_double_number_pane_t2_cp2_ParamLimits

0x7585,	// (0x00013dba) list_double_number_pane_t2_cp2

0x759b,	// (0x00013dd0) list_double_number_pane_t3_cp2_ParamLimits

0x759b,	// (0x00013dd0) list_double_number_pane_t3_cp2

0x74eb,	// (0x00013d20) list_single_graphic_pane_g1_cp2_ParamLimits

0x74eb,	// (0x00013d20) list_single_graphic_pane_g1_cp2

0x4ff4,	// (0x00011829) list_single_graphic_pane_g2_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_graphic_pane_g2_cp2

0x5000,	// (0x00011835) list_single_graphic_pane_g3_cp2

0x74c3,	// (0x00013cf8) list_single_graphic_pane_t1_cp2_ParamLimits

0x74c3,	// (0x00013cf8) list_single_graphic_pane_t1_cp2

0x4ff4,	// (0x00011829) list_single_number_pane_g1_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_number_pane_g1_cp2

0x5000,	// (0x00011835) list_single_number_pane_g2_cp2

0x74c3,	// (0x00013cf8) list_single_number_pane_t1_cp2_ParamLimits

0x74c3,	// (0x00013cf8) list_single_number_pane_t1_cp2

0x74d9,	// (0x00013d0e) list_single_number_pane_t2_cp2_ParamLimits

0x74d9,	// (0x00013d0e) list_single_number_pane_t2_cp2

0x4f1c,	// (0x00011751) list_double2_pane_g1_cp2_ParamLimits

0x4f1c,	// (0x00011751) list_double2_pane_g1_cp2

0x4f2b,	// (0x00011760) list_double2_pane_g2_cp2

0x5042,	// (0x00011877) list_double2_pane_t1_cp2_ParamLimits

0x5042,	// (0x00011877) list_double2_pane_t1_cp2

0x5058,	// (0x0001188d) list_double2_pane_t2_cp2_ParamLimits

0x5058,	// (0x0001188d) list_double2_pane_t2_cp2

0x506a,	// (0x0001189f) list_double_pane_g1_cp2_ParamLimits

0x506a,	// (0x0001189f) list_double_pane_g1_cp2

0x5076,	// (0x000118ab) list_double_pane_g2_cp2

0x507e,	// (0x000118b3) list_double_pane_t1_cp2_ParamLimits

0x507e,	// (0x000118b3) list_double_pane_t1_cp2

0x5094,	// (0x000118c9) list_double_pane_t2_cp2_ParamLimits

0x5094,	// (0x000118c9) list_double_pane_t2_cp2

0x50bc,	// (0x000118f1) list_single_pane_cp2_g3

0x4ff4,	// (0x00011829) list_single_pane_g1_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_pane_g1_cp2

0x5000,	// (0x00011835) list_single_pane_g2_cp2

0x50cc,	// (0x00011901) list_single_pane_t1_cp2_ParamLimits

0x50cc,	// (0x00011901) list_single_pane_t1_cp2

0x50e4,	// (0x00011919) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x50e4,	// (0x00011919) list_single_large_graphic_pane_g1_cp2

0x50f0,	// (0x00011925) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x50f0,	// (0x00011925) list_single_large_graphic_pane_g2_cp2

0x50fc,	// (0x00011931) list_single_large_graphic_pane_g3_cp2

0x5104,	// (0x00011939) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5104,	// (0x00011939) list_single_large_graphic_pane_g4_cp1

0x511e,	// (0x00011953) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x511e,	// (0x00011953) list_single_large_graphic_pane_t1_cp2

0x74a5,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x74a5,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2

0x7480,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x7480,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2

0x5000,	// (0x00011835) list_single_graphic_heading_pane_g5_cp2

0x5008,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5008,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2

0x74b1,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x74b1,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2

0x7474,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x7474,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2

0x7480,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x7480,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2

0x5000,	// (0x00011835) list_single_2graphic_pane_g3_cp2

0x6e91,	// (0x000136c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6e91,	// (0x000136c6) list_single_2graphic_pane_g4_cp2

0x748f,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x748f,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2

0x3515,	// (0x0000fd4a) list_highlight_pane_g10_cp1

0x7086,	// (0x000138bb) list_highlight_pane_g1_cp1

0x708e,	// (0x000138c3) list_highlight_pane_g2_cp1

0x7096,	// (0x000138cb) list_highlight_pane_g3_cp1

0x709e,	// (0x000138d3) list_highlight_pane_g4_cp1

0x70a6,	// (0x000138db) list_highlight_pane_g5_cp1

0x70ae,	// (0x000138e3) list_highlight_pane_g6_cp1

0x70b6,	// (0x000138eb) list_highlight_pane_g7_cp1

0x70be,	// (0x000138f3) list_highlight_pane_g8_cp1

0x70c6,	// (0x000138fb) list_highlight_pane_g9_cp1

0xae29,	// (0x0001765e) form_field_slider_pane_t3

0xae37,	// (0x0001766c) form_field_slider_pane_t4

0x6fd0,	// (0x00013805) slider_form_pane_ParamLimits

0x6fd0,	// (0x00013805) slider_form_pane

0x35fc,	// (0x0000fe31) control_abbreviations

0x35fc,	// (0x0000fe31) control_conventions

0x35fc,	// (0x0000fe31) control_definitions

0x35fc,	// (0x0000fe31) format_table_attribute

0x7672,	// (0x00013ea7) bg_popup_preview_window_pane_g9

0x35fc,	// (0x0000fe31) format_table_data2

0x35fc,	// (0x0000fe31) format_table_data3

0x35fc,	// (0x0000fe31) format_table_data_example

0x0008,

0x35fc,	// (0x0000fe31) intro_purpose

0xf91c,	// (0x0001c151) bg_popup_preview_window_pane_g

0x35fc,	// (0x0000fe31) texts_category

0x35fc,	// (0x0000fe31) texts_graphics

0x5134,	// (0x00011969) text_digital

0x5143,	// (0x00011978) text_primary

0x5152,	// (0x00011987) text_primary_small

0x5161,	// (0x00011996) text_secondary

0x5170,	// (0x000119a5) text_title

0x7b92,	// (0x000143c7) bg_passive_tab_pane_g1_cp3_srt

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp3_srt

0x7b89,	// (0x000143be) bg_passive_tab_pane_g3_cp3_srt

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp3_srt_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp3_srt

0x7a9d,	// (0x000142d2) tabs_4_active_pane_srt_g1

0x370c,	// (0x0000ff41) tabs_4_active_pane_srt_t1_ParamLimits

0x370c,	// (0x0000ff41) tabs_4_active_pane_srt_t1

0x7b92,	// (0x000143c7) bg_active_tab_pane_g1_cp3_copy1

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp3_copy1

0x7b89,	// (0x000143be) bg_active_tab_pane_g3_cp3_copy1

0x36dc,	// (0x0000ff11) tabs_2_long_active_pane_srt_ParamLimits

0x36dc,	// (0x0000ff11) tabs_2_long_active_pane_srt

0x36dc,	// (0x0000ff11) tabs_2_long_passive_pane_srt_ParamLimits

0x36dc,	// (0x0000ff11) tabs_2_long_passive_pane_srt

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp4_srt_ParamLimits

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp4_srt

0x7a3e,	// (0x00014273) bg_passive_tab_pane_g1_cp4_srt

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp4_srt

0x7a35,	// (0x0001426a) bg_passive_tab_pane_g3_cp4_srt

0x470c,	// (0x00010f41) bg_active_tab_pane_cp4_srt_ParamLimits

0x470c,	// (0x00010f41) bg_active_tab_pane_cp4_srt

0x471a,	// (0x00010f4f) tabs_2_long_active_pane_srt_t1_ParamLimits

0x471a,	// (0x00010f4f) tabs_2_long_active_pane_srt_t1

0x7a3e,	// (0x00014273) bg_active_tab_pane_g1_cp4_srt

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp4_srt

0x7a35,	// (0x0001426a) bg_active_tab_pane_g3_cp4_srt

0x39a1,	// (0x000101d6) tabs_3_long_active_pane_srt_ParamLimits

0x39a1,	// (0x000101d6) tabs_3_long_active_pane_srt

0x39a1,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39a1,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt

0x39a1,	// (0x000101d6) tabs_3_long_passive_pane_srt_ParamLimits

0x39a1,	// (0x000101d6) tabs_3_long_passive_pane_srt

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp5_srt_ParamLimits

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp5_srt

0x4ed9,	// (0x0001170e) bg_passive_tab_pane_g1_cp5_srt

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp5_srt

0x4ed0,	// (0x00011705) bg_passive_tab_pane_g3_cp5_srt

0x470c,	// (0x00010f41) bg_active_tab_pane_cp5_srt_ParamLimits

0x470c,	// (0x00010f41) bg_active_tab_pane_cp5_srt

0x4739,	// (0x00010f6e) tabs_3_long_active_pane_srt_t1_ParamLimits

0x4739,	// (0x00010f6e) tabs_3_long_active_pane_srt_t1

0x4ed9,	// (0x0001170e) bg_active_tab_pane_g1_cp5_srt

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp5_srt

0x4ed0,	// (0x00011705) bg_active_tab_pane_g3_cp5_srt

0x7a27,	// (0x0001425c) navi_text_pane_srt_t1

0x7a1f,	// (0x00014254) navi_icon_pane_srt_g1

0x5335,	// (0x00011b6a) midp_editing_number_pane_srt

0x517f,	// (0x000119b4) midp_ticker_pane_srt

0x533d,	// (0x00011b72) midp_ticker_pane_srt_g1

0x5345,	// (0x00011b7a) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001bfe2) midp_ticker_pane_srt_g

0x534d,	// (0x00011b82) midp_ticker_pane_srt_t1

0x7a10,	// (0x00014245) midp_editing_number_pane_t1_copy1

0x5187,	// (0x000119bc) listscroll_midp_pane

0x5187,	// (0x000119bc) midp_form_pane

0x51ef,	// (0x00011a24) midp_info_popup_window_ParamLimits

0x51ef,	// (0x00011a24) midp_info_popup_window

0x460a,	// (0x00010e3f) bg_popup_sub_pane_cp50_ParamLimits

0x460a,	// (0x00010e3f) bg_popup_sub_pane_cp50

0x6d1e,	// (0x00013553) listscroll_midp_info_pane_ParamLimits

0x6d1e,	// (0x00013553) listscroll_midp_info_pane

0x6d06,	// (0x0001353b) listscroll_form_midp_pane_ParamLimits

0x6d06,	// (0x0001353b) listscroll_form_midp_pane

0x6d12,	// (0x00013547) scroll_bar_cp050

0xae11,	// (0x00017646) list_midp_pane

0x8529,	// (0x00014d5e) signal_pane_g2_cp

0x6c38,	// (0x0001346d) listscroll_midp_info_pane_t1_ParamLimits

0x6c38,	// (0x0001346d) listscroll_midp_info_pane_t1

0x6c50,	// (0x00013485) listscroll_midp_info_pane_t2_ParamLimits

0x6c50,	// (0x00013485) listscroll_midp_info_pane_t2

0x6c8e,	// (0x000134c3) listscroll_midp_info_pane_t3_ParamLimits

0x6c8e,	// (0x000134c3) listscroll_midp_info_pane_t3

0x6cc8,	// (0x000134fd) listscroll_midp_info_pane_t4_ParamLimits

0x6cc8,	// (0x000134fd) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x0001c08c) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x0001c08c) listscroll_midp_info_pane_t

0x46b9,	// (0x00010eee) scroll_pane_cp21

0x6bdc,	// (0x00013411) form_midp_field_choice_group_pane

0x6be5,	// (0x0001341a) form_midp_field_text_pane

0x6c1e,	// (0x00013453) form_midp_field_time_pane

0x6c26,	// (0x0001345b) form_midp_gauge_slider_pane

0x6c2f,	// (0x00013464) form_midp_gauge_wait_pane

0x35fc,	// (0x0000fe31) form_midp_image_pane

0x96b5,	// (0x00015eea) list_single_midp_pane_ParamLimits

0x96b5,	// (0x00015eea) list_single_midp_pane

0xadee,	// (0x00017623) form_midp_field_text_pane_t1

0x6a7c,	// (0x000132b1) input_focus_pane_cp050

0x6bcb,	// (0x00013400) list_midp_form_text_pane

0x6b9a,	// (0x000133cf) form_midp_field_choice_group_pane_t1

0x6ba8,	// (0x000133dd) input_focus_pane_cp051

0x6bbc,	// (0x000133f1) list_midp_choice_pane

0x35fc,	// (0x0000fe31) status_idle_pane

0x6b7e,	// (0x000133b3) form_midp_field_time_pane_t1

0x3515,	// (0x0000fd4a) wait_anim_pane_g2_copy1

0x6b8c,	// (0x000133c1) form_midp_field_time_pane_t2

0x0001,

0x5297,	// (0x00011acc) aid_navinavi_width_2_pane

0xf852,	// (0x0001c087) form_midp_field_time_pane_t

0x35fc,	// (0x0000fe31) input_focus_pane_cp052

0x35fc,	// (0x0000fe31) bg_input_focus_pane_cp040

0x6b5a,	// (0x0001338f) form_midp_gauge_slider_pane_t1

0x6b68,	// (0x0001339d) form_midp_gauge_slider_pane_t2

0xadd2,	// (0x00017607) form_midp_gauge_slider_pane_t3

0xade0,	// (0x00017615) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x0001c07e) form_midp_gauge_slider_pane_t

0x6b76,	// (0x000133ab) form_midp_slider_pane

0x36dc,	// (0x0000ff11) bg_input_focus_pane_cp041_ParamLimits

0x36dc,	// (0x0000ff11) bg_input_focus_pane_cp041

0x6b2a,	// (0x0001335f) form_midp_gauge_wait_pane_t1_ParamLimits

0x6b2a,	// (0x0001335f) form_midp_gauge_wait_pane_t1

0x6b3c,	// (0x00013371) form_midp_gauge_wait_pane_t2_ParamLimits

0x6b3c,	// (0x00013371) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x0001c079) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x0001c079) form_midp_gauge_wait_pane_t

0x6b4e,	// (0x00013383) form_midp_wait_pane_ParamLimits

0x6b4e,	// (0x00013383) form_midp_wait_pane

0x6af4,	// (0x00013329) form_midp_image_pane_g1

0x6afd,	// (0x00013332) form_midp_image_pane_t1

0x6b0c,	// (0x00013341) form_midp_image_pane_t2

0x6b1b,	// (0x00013350) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x0001c072) form_midp_image_pane_t

0x6adc,	// (0x00013311) list_single_midp_pane_g1

0x96a6,	// (0x00015edb) list_single_midp_pane_t1

0xadbc,	// (0x000175f1) list_midp_form_item_pane_ParamLimits

0xadbc,	// (0x000175f1) list_midp_form_item_pane

0x523f,	// (0x00011a74) list_midp_form_item_pane_t1

0x524e,	// (0x00011a83) midp_ticker_pane_g1

0x525a,	// (0x00011a8f) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001bfc8) midp_ticker_pane_g

0x5266,	// (0x00011a9b) midp_ticker_pane_t1

0x7a10,	// (0x00014245) midp_editing_number_pane_t1

0x7b0f,	// (0x00014344) midp_editing_number_pane

0x7b1b,	// (0x00014350) midp_ticker_pane

0x7a00,	// (0x00014235) ai_message_heading_pane

0x35fc,	// (0x0000fe31) bg_popup_window_pane_cp14

0x7a08,	// (0x0001423d) listscroll_ai_message_pane

0x798a,	// (0x000141bf) ai_message_heading_pane_g1_ParamLimits

0x798a,	// (0x000141bf) ai_message_heading_pane_g1

0x7996,	// (0x000141cb) ai_message_heading_pane_g2_ParamLimits

0x7996,	// (0x000141cb) ai_message_heading_pane_g2

0x79a2,	// (0x000141d7) ai_message_heading_pane_g3_ParamLimits

0x79a2,	// (0x000141d7) ai_message_heading_pane_g3

0x79ae,	// (0x000141e3) ai_message_heading_pane_g4_ParamLimits

0x79ae,	// (0x000141e3) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x0001c1b3) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x0001c1b3) ai_message_heading_pane_g

0x79ba,	// (0x000141ef) ai_message_heading_pane_t1_ParamLimits

0x79ba,	// (0x000141ef) ai_message_heading_pane_t1

0x79d4,	// (0x00014209) ai_message_heading_pane_t2_ParamLimits

0x79d4,	// (0x00014209) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x0001c1bc) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x0001c1bc) ai_message_heading_pane_t

0x79e6,	// (0x0001421b) bg_popup_heading_pane_cp1_ParamLimits

0x79e6,	// (0x0001421b) bg_popup_heading_pane_cp1

0x7978,	// (0x000141ad) list_ai_message_pane_ParamLimits

0x7978,	// (0x000141ad) list_ai_message_pane

0x46b9,	// (0x00010eee) scroll_pane_cp10

0x7914,	// (0x00014149) list_ai_message_pane_g1

0x791c,	// (0x00014151) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x0001c190) list_ai_message_pane_g

0x7924,	// (0x00014159) list_ai_message_pane_t1_ParamLimits

0x7924,	// (0x00014159) list_ai_message_pane_t1

0x7939,	// (0x0001416e) list_ai_message_pane_t2_ParamLimits

0x7939,	// (0x0001416e) list_ai_message_pane_t2

0x794e,	// (0x00014183) list_ai_message_pane_t3_ParamLimits

0x794e,	// (0x00014183) list_ai_message_pane_t3

0x7963,	// (0x00014198) list_ai_message_pane_t4_ParamLimits

0x7963,	// (0x00014198) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x0001c195) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x0001c195) list_ai_message_pane_t

0x7902,	// (0x00014137) cell_ai_soft_ind_pane_ParamLimits

0x7902,	// (0x00014137) cell_ai_soft_ind_pane

0x5278,	// (0x00011aad) cell_ai_soft_ind_pane_g1_ParamLimits

0x5278,	// (0x00011aad) cell_ai_soft_ind_pane_g1

0x35fc,	// (0x0000fe31) grid_highlight_cp1

0x5285,	// (0x00011aba) text_secondary_cp56_ParamLimits

0x5285,	// (0x00011aba) text_secondary_cp56

0x78d7,	// (0x0001410c) example_general_pane_ParamLimits

0x78d7,	// (0x0001410c) example_general_pane

0x78e3,	// (0x00014118) example_parent_pane_g1_ParamLimits

0x78e3,	// (0x00014118) example_parent_pane_g1

0x78ef,	// (0x00014124) example_parent_pane_t1_ParamLimits

0x78ef,	// (0x00014124) example_parent_pane_t1

0xa7df,	// (0x00017014) popup_preview_text_window_ParamLimits

0xa7df,	// (0x00017014) popup_preview_text_window

0x50c4,	// (0x000118f9) list_single_pane_cp2_g4

0x3a57,	// (0x0001028c) bg_popup_preview_window_pane_ParamLimits

0x3a57,	// (0x0001028c) bg_popup_preview_window_pane

0x767a,	// (0x00013eaf) popup_preview_text_window_t1_ParamLimits

0x767a,	// (0x00013eaf) popup_preview_text_window_t1

0x7698,	// (0x00013ecd) popup_preview_text_window_t2_ParamLimits

0x7698,	// (0x00013ecd) popup_preview_text_window_t2

0x76e1,	// (0x00013f16) popup_preview_text_window_t3_ParamLimits

0x76e1,	// (0x00013f16) popup_preview_text_window_t3

0x7726,	// (0x00013f5b) popup_preview_text_window_t4_ParamLimits

0x7726,	// (0x00013f5b) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x0001c164) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x0001c164) popup_preview_text_window_t

0x77a4,	// (0x00013fd9) scroll_pane_cp11

0x6966,	// (0x0001319b) bg_popup_preview_window_pane_g1

0x763a,	// (0x00013e6f) bg_popup_preview_window_pane_g2

0x7642,	// (0x00013e77) bg_popup_preview_window_pane_g3

0x764a,	// (0x00013e7f) bg_popup_preview_window_pane_g4

0x7652,	// (0x00013e87) bg_popup_preview_window_pane_g5

0x765a,	// (0x00013e8f) bg_popup_preview_window_pane_g6

0x7662,	// (0x00013e97) bg_popup_preview_window_pane_g7

0x766a,	// (0x00013e9f) bg_popup_preview_window_pane_g8

0x9d83,	// (0x000165b8) aid_popup_width_pane

0xa7c1,	// (0x00016ff6) popup_midp_note_alarm_window_ParamLimits

0xa7c1,	// (0x00016ff6) popup_midp_note_alarm_window

0x43c6,	// (0x00010bfb) data_form_pane_ParamLimits

0x93e7,	// (0x00015c1c) form_field_data_pane_g1

0x444e,	// (0x00010c83) form_field_data_pane_t1_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_ParamLimits

0x4400,	// (0x00010c35) data_form_wide_pane_ParamLimits

0x93ef,	// (0x00015c24) form_field_data_wide_pane_g1

0x93fb,	// (0x00015c30) form_field_data_wide_pane_t1_ParamLimits

0x3ce3,	// (0x00010518) input_focus_pane_cp6_ParamLimits

0x4666,	// (0x00010e9b) input_popup_find_pane_g1_ParamLimits

0x4666,	// (0x00010e9b) input_popup_find_pane_g1

0xa116,	// (0x0001694b) aid_navi_side_left_pane

0xa126,	// (0x0001695b) aid_navi_side_right_pane

0x7157,	// (0x0001398c) bg_popup_window_pane_cp30_ParamLimits

0x7157,	// (0x0001398c) bg_popup_window_pane_cp30

0x71d1,	// (0x00013a06) popup_midp_note_alarm_window_g1_ParamLimits

0x71d1,	// (0x00013a06) popup_midp_note_alarm_window_g1

0x7201,	// (0x00013a36) popup_midp_note_alarm_window_t1_ParamLimits

0x7201,	// (0x00013a36) popup_midp_note_alarm_window_t1

0x72a2,	// (0x00013ad7) popup_midp_note_alarm_window_t2_ParamLimits

0x72a2,	// (0x00013ad7) popup_midp_note_alarm_window_t2

0x7350,	// (0x00013b85) popup_midp_note_alarm_window_t3_ParamLimits

0x7350,	// (0x00013b85) popup_midp_note_alarm_window_t3

0x7378,	// (0x00013bad) popup_midp_note_alarm_window_t4_ParamLimits

0x7378,	// (0x00013bad) popup_midp_note_alarm_window_t4

0x7398,	// (0x00013bcd) popup_midp_note_alarm_window_t5_ParamLimits

0x7398,	// (0x00013bcd) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x0001c101) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x0001c101) popup_midp_note_alarm_window_t

0x7444,	// (0x00013c79) wait_bar_pane_cp1_ParamLimits

0x7444,	// (0x00013c79) wait_bar_pane_cp1

0x35fc,	// (0x0000fe31) wait_anim_pane_copy1

0x35fc,	// (0x0000fe31) wait_border_pane_copy1

0x6e9d,	// (0x000136d2) wait_border_pane_g1_copy1

0x9415,	// (0x00015c4a) form_field_popup_pane_g1

0x941d,	// (0x00015c52) form_field_popup_pane_t1_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_cp7_ParamLimits

0x43c6,	// (0x00010bfb) list_form_pane_ParamLimits

0x9435,	// (0x00015c6a) form_field_popup_wide_pane_g1

0x943d,	// (0x00015c72) form_field_popup_wide_pane_t1_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_cp8_ParamLimits

0x4483,	// (0x00010cb8) list_form_wide_pane_ParamLimits

0x7bba,	// (0x000143ef) aid_size_cell_graphic_pane

0x94c2,	// (0x00015cf7) data_form_pane_t1_ParamLimits

0x96e0,	// (0x00015f15) data_form_wide_pane_t1_ParamLimits

0xa9e5,	// (0x0001721a) bg_status_flat_pane

0x363c,	// (0x0000fe71) title_pane_t1_ParamLimits

0x36a4,	// (0x0000fed9) title_pane_t2_ParamLimits

0x36ca,	// (0x0000feff) title_pane_t3_ParamLimits

0xf59b,	// (0x0001bdd0) title_pane_t_ParamLimits

0x4b42,	// (0x00011377) level_1_signal_ParamLimits

0x4b4f,	// (0x00011384) level_2_signal_ParamLimits

0x4b5c,	// (0x00011391) level_3_signal_ParamLimits

0x4b69,	// (0x0001139e) level_4_signal_ParamLimits

0x4b76,	// (0x000113ab) level_5_signal_ParamLimits

0x4b83,	// (0x000113b8) level_6_signal_ParamLimits

0x4b90,	// (0x000113c5) level_7_signal_ParamLimits

0x4b42,	// (0x00011377) level_1_battery_ParamLimits

0x4b4f,	// (0x00011384) level_2_battery_ParamLimits

0x4b5c,	// (0x00011391) level_3_battery_ParamLimits

0x4b69,	// (0x0001139e) level_4_battery_ParamLimits

0x4b76,	// (0x000113ab) level_5_battery_ParamLimits

0x4b83,	// (0x000113b8) level_6_battery_ParamLimits

0x4b90,	// (0x000113c5) level_7_battery_ParamLimits

0x7086,	// (0x000138bb) bg_status_flat_pane_g1

0x708e,	// (0x000138c3) bg_status_flat_pane_g2

0x7096,	// (0x000138cb) bg_status_flat_pane_g3

0x709e,	// (0x000138d3) bg_status_flat_pane_g4

0x70a6,	// (0x000138db) bg_status_flat_pane_g5

0x70ae,	// (0x000138e3) bg_status_flat_pane_g6

0x70b6,	// (0x000138eb) bg_status_flat_pane_g7

0x36f2,	// (0x0000ff27) tabs_3_active_pane_t1_ParamLimits

0x36f2,	// (0x0000ff27) tabs_3_passive_pane_t1_ParamLimits

0x370c,	// (0x0000ff41) tabs_4_active_pane_t1_ParamLimits

0x370c,	// (0x0000ff41) tabs_4_1_passive_pane_t1_ParamLimits

0x46fa,	// (0x00010f2f) tabs_2_active_pane_t1_ParamLimits

0x46fa,	// (0x00010f2f) tabs_2_passive_pane_t1_ParamLimits

0x470c,	// (0x00010f41) bg_active_tab_pane_cp4_ParamLimits

0x471a,	// (0x00010f4f) tabs_2_long_active_pane_t1_ParamLimits

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp4_ParamLimits

0xacb1,	// (0x000174e6) list_single_midp_graphic_pane_t1_ParamLimits

0x470c,	// (0x00010f41) bg_active_tab_pane_cp5_ParamLimits

0x4739,	// (0x00010f6e) tabs_3_long_active_pane_t1_ParamLimits

0x472d,	// (0x00010f62) bg_passive_tab_pane_cp5_ParamLimits

0xacb1,	// (0x000174e6) list_single_midp_graphic_pane_t1

0xa9e5,	// (0x0001721a) bg_status_flat_pane_ParamLimits

0x6845,	// (0x0001307a) indicator_pane_cp2_ParamLimits

0x6845,	// (0x0001307a) indicator_pane_cp2

0xab28,	// (0x0001735d) navi_pane_srt_ParamLimits

0xab28,	// (0x0001735d) navi_pane_srt

0x686d,	// (0x000130a2) popup_clock_digital_analogue_window_cp1

0x37d0,	// (0x00010005) indicator_pane_t1

0x517f,	// (0x000119b4) copy_highlight_pane

0x517f,	// (0x000119b4) cursor_graphics_pane

0x517f,	// (0x000119b4) graphic_within_text_pane

0x517f,	// (0x000119b4) link_highlight_pane

0x7767,	// (0x00013f9c) popup_preview_text_window_t5_ParamLimits

0x7767,	// (0x00013f9c) popup_preview_text_window_t5

0x529f,	// (0x00011ad4) cursor_digital_pane

0x529f,	// (0x00011ad4) cursor_primary_pane

0x52b0,	// (0x00011ae5) cursor_primary_small_pane

0x52b8,	// (0x00011aed) cursor_secondary_pane

0x52c0,	// (0x00011af5) cursor_title_pane

0x529f,	// (0x00011ad4) link_highlight_digital_pane

0x52a7,	// (0x00011adc) link_highlight_primary_pane

0x52b0,	// (0x00011ae5) link_highlight_primary_small_pane

0x52b8,	// (0x00011aed) link_highlight_secondary_pane

0x52c0,	// (0x00011af5) link_highlight_title_pane

0x529f,	// (0x00011ad4) copy_highlight_digital_pane

0x529f,	// (0x00011ad4) copy_highlight_primary_pane

0x52b0,	// (0x00011ae5) copy_highlight_primary_small_pane

0x52b8,	// (0x00011aed) copy_highlight_secondary_pane

0x52c0,	// (0x00011af5) copy_highlight_title_pane

0x52b8,	// (0x00011aed) graphic_text_digital_pane

0x7106,	// (0x0001393b) graphic_text_primary_pane

0x710f,	// (0x00013944) graphic_text_primary_small_pane

0x52b0,	// (0x00011ae5) graphic_text_secondary_pane

0x529f,	// (0x00011ad4) graphic_text_title_pane

0x52c8,	// (0x00011afd) cursor_primary_pane_g1

0x70f8,	// (0x0001392d) cursor_text_primary_t1

0xae55,	// (0x0001768a) cursor_primary_small_pane_g1

0x70ea,	// (0x0001391f) cursor_text_primary_small_t1

0xae4d,	// (0x00017682) cursor_primary_small_pane_g1_copy1

0x70dc,	// (0x00013911) cursor_text_primary_small_t1_copy1

0x70ce,	// (0x00013903) cursor_text_title_t1

0xae45,	// (0x0001767a) cursor_title_pane_g1

0x52c8,	// (0x00011afd) cursor_digital_pane_g1

0x52d0,	// (0x00011b05) cursor_text_digital_t1

0x52de,	// (0x00011b13) link_highlight_primary_pane_g1

0x7077,	// (0x000138ac) link_highlight_primary_pane_t1

0x52de,	// (0x00011b13) link_highlight_primary_small_pane_g1

0x52e6,	// (0x00011b1b) link_highlight_primary_small_pane_t1

0x52f5,	// (0x00011b2a) link_highlight_secondary_pane_g1

0x52fd,	// (0x00011b32) link_highlight_secondary_pane_t1

0x6fdc,	// (0x00013811) link_highlight_title_pane_g1

0x6ff3,	// (0x00013828) link_highlight_title_pane_t1

0x6fdc,	// (0x00013811) link_highlight_digital_pane_g1

0x6fe4,	// (0x00013819) link_highlight_digital_pane_t1

0x6eb8,	// (0x000136ed) copy_highlight_primary_pane_g1

0x6ede,	// (0x00013713) copy_highlight_primary_pane_t1

0x6eb8,	// (0x000136ed) copy_highlight_primary_small_pane_g1

0x6ecf,	// (0x00013704) copy_highlight_primary_small_pane_t1

0x530c,	// (0x00011b41) copy_highlight_secondary_pane_g1

0x5314,	// (0x00011b49) copy_highlight_secondary_pane_t1

0x6eb8,	// (0x000136ed) copy_highlight_title_pane_g1

0x6ec0,	// (0x000136f5) copy_highlight_title_pane_t1

0x6eb8,	// (0x000136ed) copy_highlight_digital_pane_g1

0x7d0d,	// (0x00014542) copy_highlight_digital_pane_t1

0x7c61,	// (0x00014496) graphic_text_primary_pane_g1

0x7cf1,	// (0x00014526) graphic_text_primary_pane_t1

0x7cff,	// (0x00014534) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x0001c22b) graphic_text_primary_pane_t

0x7ccd,	// (0x00014502) graphic_text_primary_small_pane_g1

0x7cd5,	// (0x0001450a) graphic_text_primary_small_pane_t1

0x7ce3,	// (0x00014518) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0001c226) graphic_text_primary_small_pane_t

0x7ca9,	// (0x000144de) graphic_text_secondary_pane_g1

0x7cb1,	// (0x000144e6) graphic_text_secondary_pane_t1

0x7cbf,	// (0x000144f4) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0001c221) graphic_text_secondary_pane_t

0x7c85,	// (0x000144ba) graphic_text_title_pane_g1

0x7c8d,	// (0x000144c2) graphic_text_title_pane_t1

0x7c9b,	// (0x000144d0) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x0001c21c) graphic_text_title_pane_t

0x7c61,	// (0x00014496) graphic_text_digital_pane_g1

0x7c69,	// (0x0001449e) graphic_text_digital_pane_t1

0x7c77,	// (0x000144ac) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x0001c217) graphic_text_digital_pane_t

0x36dc,	// (0x0000ff11) navi_icon_pane_srt_ParamLimits

0x36dc,	// (0x0000ff11) navi_icon_pane_srt

0x35fc,	// (0x0000fe31) navi_midp_pane_srt

0x35fc,	// (0x0000fe31) navi_navi_pane_srt

0x36dc,	// (0x0000ff11) navi_text_pane_srt_ParamLimits

0x36dc,	// (0x0000ff11) navi_text_pane_srt

0x7a54,	// (0x00014289) navi_navi_icon_text_pane_srt

0x7a6e,	// (0x000142a3) navi_navi_pane_srt_g1_ParamLimits

0x7a6e,	// (0x000142a3) navi_navi_pane_srt_g1

0x7a5c,	// (0x00014291) navi_navi_pane_srt_g2_ParamLimits

0x7a5c,	// (0x00014291) navi_navi_pane_srt_g2

0x0001,

0xf917,	// (0x0001c14c) navi_navi_pane_srt_g_ParamLimits

0xf917,	// (0x0001c14c) navi_navi_pane_srt_g

0x7a80,	// (0x000142b5) navi_navi_tabs_pane_srt

0x7a54,	// (0x00014289) navi_navi_text_pane_srt

0x7a54,	// (0x00014289) navi_navi_volume_pane_srt

0x7bfa,	// (0x0001442f) navi_navi_text_pane_srt_t1

0xb41e,	// (0x00017c53) navi_navi_volume_pane_srt_g1

0xb426,	// (0x00017c5b) volume_small_pane_srt_ParamLimits

0xb426,	// (0x00017c5b) volume_small_pane_srt

0xa3bd,	// (0x00016bf2) volume_small_pane_srt_g1_ParamLimits

0xa3bd,	// (0x00016bf2) volume_small_pane_srt_g1

0xa3cd,	// (0x00016c02) volume_small_pane_srt_g2_ParamLimits

0xa3cd,	// (0x00016c02) volume_small_pane_srt_g2

0xa3de,	// (0x00016c13) volume_small_pane_srt_g3_ParamLimits

0xa3de,	// (0x00016c13) volume_small_pane_srt_g3

0xa3ef,	// (0x00016c24) volume_small_pane_srt_g4_ParamLimits

0xa3ef,	// (0x00016c24) volume_small_pane_srt_g4

0xa400,	// (0x00016c35) volume_small_pane_srt_g5_ParamLimits

0xa400,	// (0x00016c35) volume_small_pane_srt_g5

0xa411,	// (0x00016c46) volume_small_pane_srt_g6_ParamLimits

0xa411,	// (0x00016c46) volume_small_pane_srt_g6

0xa422,	// (0x00016c57) volume_small_pane_srt_g7_ParamLimits

0xa422,	// (0x00016c57) volume_small_pane_srt_g7

0xa433,	// (0x00016c68) volume_small_pane_srt_g8_ParamLimits

0xa433,	// (0x00016c68) volume_small_pane_srt_g8

0xa444,	// (0x00016c79) volume_small_pane_srt_g9_ParamLimits

0xa444,	// (0x00016c79) volume_small_pane_srt_g9

0xa455,	// (0x00016c8a) volume_small_pane_srt_g10_ParamLimits

0xa455,	// (0x00016c8a) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001bfcd) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001bfcd) volume_small_pane_srt_g

0x3b00,	// (0x00010335) query_popup_data_pane_cp2

0x7be0,	// (0x00014415) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7be0,	// (0x00014415) navi_navi_icon_text_pane_srt_t1

0x7106,	// (0x0001393b) navi_tabs_2_long_pane_srt

0x7106,	// (0x0001393b) navi_tabs_2_pane_srt

0x7106,	// (0x0001393b) navi_tabs_3_long_pane_srt

0x7106,	// (0x0001393b) navi_tabs_3_pane_srt

0x7106,	// (0x0001393b) navi_tabs_4_pane_srt

0xb3fe,	// (0x00017c33) tabs_2_active_pane_srt_ParamLimits

0xb3fe,	// (0x00017c33) tabs_2_active_pane_srt

0xb40e,	// (0x00017c43) tabs_2_passive_pane_srt_ParamLimits

0xb40e,	// (0x00017c43) tabs_2_passive_pane_srt

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp1_srt_ParamLimits

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp1_srt

0x7ab6,	// (0x000142eb) bg_passive_tab_pane_g1_cp1_srt

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp1_srt

0x7aad,	// (0x000142e2) bg_passive_tab_pane_g3_cp1_srt

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp1_srt_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp1_srt

0x7aa5,	// (0x000142da) tabs_2_active_pane_srt_g1

0x46fa,	// (0x00010f2f) tabs_2_active_pane_srt_t1_ParamLimits

0x46fa,	// (0x00010f2f) tabs_2_active_pane_srt_t1

0x7ab6,	// (0x000142eb) bg_active_tab_pane_g1_cp1_srt

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp1_srt

0x7aad,	// (0x000142e2) bg_active_tab_pane_g3_cp1_srt

0xb3cb,	// (0x00017c00) tabs_3_active_pane_srt_ParamLimits

0xb3cb,	// (0x00017c00) tabs_3_active_pane_srt

0xb3dc,	// (0x00017c11) tabs_3_passive_pane_cp_srt_ParamLimits

0xb3dc,	// (0x00017c11) tabs_3_passive_pane_cp_srt

0xb3ed,	// (0x00017c22) tabs_3_passive_pane_srt_ParamLimits

0xb3ed,	// (0x00017c22) tabs_3_passive_pane_srt

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp2_srt_ParamLimits

0x664e,	// (0x00012e83) bg_passive_tab_pane_cp2_srt

0x532c,	// (0x00011b61) bg_passive_tab_pane_g1_cp2_srt

0x4e4a,	// (0x0001167f) bg_passive_tab_pane_g2_cp2_srt

0x5323,	// (0x00011b58) bg_passive_tab_pane_g3_cp2_srt

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp2_srt_ParamLimits

0x36dc,	// (0x0000ff11) bg_active_tab_pane_cp2_srt

0x7bd0,	// (0x00014405) tabs_3_active_pane_srt_g1

0x36f2,	// (0x0000ff27) tabs_3_active_pane_srt_t1_ParamLimits

0x36f2,	// (0x0000ff27) tabs_3_active_pane_srt_t1

0x532c,	// (0x00011b61) bg_active_tab_pane_g1_cp2_srt

0x4e4a,	// (0x0001167f) bg_active_tab_pane_g2_cp2_srt

0x5323,	// (0x00011b58) bg_active_tab_pane_g3_cp2_srt

0xb383,	// (0x00017bb8) tabs_4_active_pane_srt_ParamLimits

0xb383,	// (0x00017bb8) tabs_4_active_pane_srt

0xb395,	// (0x00017bca) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb395,	// (0x00017bca) tabs_4_passive_pane_cp2_srt

0x665a,	// (0x00012e8f) aid_size_cell_toolbar

0x472d,	// (0x00010f62) main_idle_act_pane_ParamLimits

0x672e,	// (0x00012f63) popup_large_graphic_colour_window_ParamLimits

0xa913,	// (0x00017148) popup_toolbar_window_ParamLimits

0xa913,	// (0x00017148) popup_toolbar_window

0x9723,	// (0x00015f58) list_single_graphic_2heading_pane_ParamLimits

0x9723,	// (0x00015f58) list_single_graphic_2heading_pane

0x4904,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane

0x4916,	// (0x0001114b) aid_size_cell_apps_grid_prt_pane

0x664e,	// (0x00012e83) bg_wml_button_pane_cp1_ParamLimits

0x664e,	// (0x00012e83) bg_wml_button_pane_cp1

0xadee,	// (0x00017623) form_midp_field_text_pane_t1_ParamLimits

0x6a7c,	// (0x000132b1) input_focus_pane_cp050_ParamLimits

0x6bcb,	// (0x00013400) list_midp_form_text_pane_ParamLimits

0x6ba8,	// (0x000133dd) input_focus_pane_cp051_ParamLimits

0x6bbc,	// (0x000133f1) list_midp_choice_pane_ParamLimits

0xad88,	// (0x000175bd) list_single_2graphic_pane_cp3_ParamLimits

0xad88,	// (0x000175bd) list_single_2graphic_pane_cp3

0xad9c,	// (0x000175d1) list_single_midp_graphic_pane_ParamLimits

0xad9c,	// (0x000175d1) list_single_midp_graphic_pane

0x8edf,	// (0x00015714) list_single_graphic_2heading_pane_g1_ParamLimits

0x8edf,	// (0x00015714) list_single_graphic_2heading_pane_g1

0x960a,	// (0x00015e3f) list_single_graphic_2heading_pane_g4_ParamLimits

0x960a,	// (0x00015e3f) list_single_graphic_2heading_pane_g4

0x9616,	// (0x00015e4b) list_single_graphic_2heading_pane_g5_ParamLimits

0x9616,	// (0x00015e4b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001c020) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001c020) list_single_graphic_2heading_pane_g

0x9622,	// (0x00015e57) list_single_graphic_2heading_pane_t1_ParamLimits

0x9622,	// (0x00015e57) list_single_graphic_2heading_pane_t1

0x9636,	// (0x00015e6b) list_single_graphic_2heading_pane_t2_ParamLimits

0x9636,	// (0x00015e6b) list_single_graphic_2heading_pane_t2

0x9650,	// (0x00015e85) list_single_graphic_2heading_pane_t3_ParamLimits

0x9650,	// (0x00015e85) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001c027) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001c027) list_single_graphic_2heading_pane_t

0x68b0,	// (0x000130e5) bg_popup_sub_pane_cp2

0x68d6,	// (0x0001310b) grid_toobar_pane

0xac4d,	// (0x00017482) cell_toolbar_pane_ParamLimits

0xac4d,	// (0x00017482) cell_toolbar_pane

0x690c,	// (0x00013141) cell_toolbar_pane_g1_ParamLimits

0x690c,	// (0x00013141) cell_toolbar_pane_g1

0x691e,	// (0x00013153) cell_toolbar_pane_g2_ParamLimits

0x691e,	// (0x00013153) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x0001c02e) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x0001c02e) cell_toolbar_pane_g

0x6940,	// (0x00013175) grid_highlight_pane_cp2_ParamLimits

0x6940,	// (0x00013175) grid_highlight_pane_cp2

0x695a,	// (0x0001318f) toolbar_button_pane

0x6966,	// (0x0001319b) toolbar_button_pane_g1

0x6976,	// (0x000131ab) toolbar_button_pane_g2

0x696e,	// (0x000131a3) toolbar_button_pane_g3

0x6986,	// (0x000131bb) toolbar_button_pane_g4

0x697e,	// (0x000131b3) toolbar_button_pane_g5

0x698e,	// (0x000131c3) toolbar_button_pane_g6

0x6996,	// (0x000131cb) toolbar_button_pane_g7

0x69a6,	// (0x000131db) toolbar_button_pane_g8

0x699e,	// (0x000131d3) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0001c033) toolbar_button_pane_g

0xac7c,	// (0x000174b1) list_single_2graphic_pane_g1_cp3_ParamLimits

0xac7c,	// (0x000174b1) list_single_2graphic_pane_g1_cp3

0xac88,	// (0x000174bd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xac88,	// (0x000174bd) list_single_2graphic_pane_g2_cp3

0x5000,	// (0x00011835) list_single_2graphic_pane_g3_cp3

0x6e91,	// (0x000136c6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6e91,	// (0x000136c6) list_single_2graphic_pane_g4_cp3

0xac97,	// (0x000174cc) list_single_2graphic_pane_t1_cp3_ParamLimits

0xac97,	// (0x000174cc) list_single_2graphic_pane_t1_cp3

0x4ff4,	// (0x00011829) list_single_midp_graphic_pane_g2_ParamLimits

0x4ff4,	// (0x00011829) list_single_midp_graphic_pane_g2

0x666a,	// (0x00012e9f) aid_zoom_text_primary

0x95dd,	// (0x00015e12) aid_zoom_text_secondary

0x53de,	// (0x00011c13) status_small_pane_g7_ParamLimits

0x53de,	// (0x00011c13) status_small_pane_g7

0x5401,	// (0x00011c36) status_small_pane_t1_ParamLimits

0x3613,	// (0x0000fe48) title_pane_g2

0x0003,

0xf592,	// (0x0001bdc7) title_pane_g

0x3b9f,	// (0x000103d4) aid_size_cell_colour_1_pane_ParamLimits

0x3b9f,	// (0x000103d4) aid_size_cell_colour_1_pane

0x3bb3,	// (0x000103e8) aid_size_cell_colour_2_pane_ParamLimits

0x3bb3,	// (0x000103e8) aid_size_cell_colour_2_pane

0x3bc7,	// (0x000103fc) aid_size_cell_colour_3_pane_ParamLimits

0x3bc7,	// (0x000103fc) aid_size_cell_colour_3_pane

0x3bdb,	// (0x00010410) aid_size_cell_colour_4_pane_ParamLimits

0x3bdb,	// (0x00010410) aid_size_cell_colour_4_pane

0xa078,	// (0x000168ad) title_pane_stacon_g1_ParamLimits

0xa078,	// (0x000168ad) title_pane_stacon_g1

0x6f35,	// (0x0001376a) popup_note_wait_window_g3_ParamLimits

0x6f35,	// (0x0001376a) popup_note_wait_window_g3

0x6fab,	// (0x000137e0) popup_note_wait_window_t5_ParamLimits

0x6fab,	// (0x000137e0) popup_note_wait_window_t5

0x35fc,	// (0x0000fe31) main_feb_china_hwr_fs_writing_pane

0xa602,	// (0x00016e37) popup_feb_china_hwr_fs_window_ParamLimits

0xa602,	// (0x00016e37) popup_feb_china_hwr_fs_window

0xacc7,	// (0x000174fc) aid_size_cell_hwr_fs_ParamLimits

0xacc7,	// (0x000174fc) aid_size_cell_hwr_fs

0x6a7c,	// (0x000132b1) bg_popup_sub_pane_cp3_ParamLimits

0x6a7c,	// (0x000132b1) bg_popup_sub_pane_cp3

0xacdc,	// (0x00017511) grid_hwr_fs_pane_ParamLimits

0xacdc,	// (0x00017511) grid_hwr_fs_pane

0xacf0,	// (0x00017525) linegrid_hwr_fs_pane_ParamLimits

0xacf0,	// (0x00017525) linegrid_hwr_fs_pane

0xad00,	// (0x00017535) cell_hwr_fs_pane_ParamLimits

0xad00,	// (0x00017535) cell_hwr_fs_pane

0x6a88,	// (0x000132bd) linegrid_hwr_fs_pane_g1_ParamLimits

0x6a88,	// (0x000132bd) linegrid_hwr_fs_pane_g1

0xad1e,	// (0x00017553) linegrid_hwr_fs_pane_g2_ParamLimits

0xad1e,	// (0x00017553) linegrid_hwr_fs_pane_g2

0x6a94,	// (0x000132c9) linegrid_hwr_fs_pane_g3_ParamLimits

0x6a94,	// (0x000132c9) linegrid_hwr_fs_pane_g3

0xad30,	// (0x00017565) linegrid_hwr_fs_pane_g4_ParamLimits

0xad30,	// (0x00017565) linegrid_hwr_fs_pane_g4

0xad4a,	// (0x0001757f) linegrid_hwr_fs_pane_g5_ParamLimits

0xad4a,	// (0x0001757f) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x0001c05e) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x0001c05e) linegrid_hwr_fs_pane_g

0x6aa0,	// (0x000132d5) cell_hwr_fs_pane_g1_ParamLimits

0x6aa0,	// (0x000132d5) cell_hwr_fs_pane_g1

0x687e,	// (0x000130b3) cell_hwr_fs_pane_g2_ParamLimits

0x687e,	// (0x000130b3) cell_hwr_fs_pane_g2

0xad60,	// (0x00017595) cell_hwr_fs_pane_g3_ParamLimits

0xad60,	// (0x00017595) cell_hwr_fs_pane_g3

0xad6d,	// (0x000175a2) cell_hwr_fs_pane_g4_ParamLimits

0xad6d,	// (0x000175a2) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x0001c069) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x0001c069) cell_hwr_fs_pane_g

0xad7a,	// (0x000175af) cell_hwr_fs_pane_t1

0x35fc,	// (0x0000fe31) grid_highlight_pane_cp6

0x35fc,	// (0x0000fe31) main_idle_act2_pane

0x46a0,	// (0x00010ed5) aid_inside_area_popup_secondary

0xafb8,	// (0x000177ed) aid_inside_area_window_primary_ParamLimits

0xafb8,	// (0x000177ed) aid_inside_area_window_primary

0x7d1c,	// (0x00014551) ai2_news_ticker_pane

0x7d24,	// (0x00014559) aid_size_cell_ai1_link_ParamLimits

0x7d24,	// (0x00014559) aid_size_cell_ai1_link

0xb43b,	// (0x00017c70) popup_ai2_data_window_ParamLimits

0xb43b,	// (0x00017c70) popup_ai2_data_window

0x7d3e,	// (0x00014573) popup_ai2_link_window_ParamLimits

0x7d3e,	// (0x00014573) popup_ai2_link_window

0x6a7c,	// (0x000132b1) bg_popup_sub_pane_cp4_ParamLimits

0x6a7c,	// (0x000132b1) bg_popup_sub_pane_cp4

0x7d52,	// (0x00014587) grid_ai2_link_pane_ParamLimits

0x7d52,	// (0x00014587) grid_ai2_link_pane

0x7d69,	// (0x0001459e) popup_ai2_link_window_g1_ParamLimits

0x7d69,	// (0x0001459e) popup_ai2_link_window_g1

0x7d75,	// (0x000145aa) popup_ai2_link_window_g2_ParamLimits

0x7d75,	// (0x000145aa) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x0001c230) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x0001c230) popup_ai2_link_window_g

0x7d84,	// (0x000145b9) ai2_mp_button_pane

0x7d8c,	// (0x000145c1) ai2_mp_volume_pane

0x6ba8,	// (0x000133dd) bg_popup_sub_pane_cp5_ParamLimits

0x6ba8,	// (0x000133dd) bg_popup_sub_pane_cp5

0x7d94,	// (0x000145c9) heading_ai2_gene_pane_ParamLimits

0x7d94,	// (0x000145c9) heading_ai2_gene_pane

0x7da0,	// (0x000145d5) list_ai2_gene_pane_ParamLimits

0x7da0,	// (0x000145d5) list_ai2_gene_pane

0x7de8,	// (0x0001461d) cell_ai2_link_pane_ParamLimits

0x7de8,	// (0x0001461d) cell_ai2_link_pane

0x7dfe,	// (0x00014633) cell_ai2_link_pane_g1

0x35fc,	// (0x0000fe31) grid_highlight_pane_cp7

0xb482,	// (0x00017cb7) ai2_mp_volume_pane_g1

0x7eae,	// (0x000146e3) ai2_mp_volume_pane_g2

0xb466,	// (0x00017c9b) list_ai2_gene_pane_t1

0x7ea6,	// (0x000146db) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x0001c249) ai2_mp_volume_pane_g

0xb48a,	// (0x00017cbf) volume_small_pane_cp3

0x7eb6,	// (0x000146eb) aid_size_cell_ai2_button

0x7ebe,	// (0x000146f3) grid_ai2_button_pane

0x7ec7,	// (0x000146fc) cell_ai2_button_pane_ParamLimits

0x7ec7,	// (0x000146fc) cell_ai2_button_pane

0x3515,	// (0x0000fd4a) cell_ai2_button_pane_g1

0x35fc,	// (0x0000fe31) grid_highlight_pane_cp8

0x7e66,	// (0x0001469b) ai2_gene_pane_t1_ParamLimits

0x7e66,	// (0x0001469b) ai2_gene_pane_t1

0xa5a8,	// (0x00016ddd) aid_height_parent_landscape

0xb139,	// (0x0001796e) aid_height_set_list

0x7ad3,	// (0x00014308) aid_size_parent

0x7bba,	// (0x000143ef) aid_size_cell_graphic_pane_ParamLimits

0x7db0,	// (0x000145e5) popup_ai2_data_window_g1_ParamLimits

0x7db0,	// (0x000145e5) popup_ai2_data_window_g1

0x7dbc,	// (0x000145f1) ai2_news_ticker_pane_g1

0x7dc4,	// (0x000145f9) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0001c235) ai2_news_ticker_pane_g

0x7dcc,	// (0x00014601) ai2_news_ticker_pane_t1

0x7dda,	// (0x0001460f) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x0001c23a) ai2_news_ticker_pane_t

0x7b9b,	// (0x000143d0) heading_ai2_gene_pane_g1

0x7e07,	// (0x0001463c) heading_ai2_gene_pane_t1_ParamLimits

0x7e07,	// (0x0001463c) heading_ai2_gene_pane_t1

0x7e2f,	// (0x00014664) list_highlight_pane_cp6

0xb44f,	// (0x00017c84) ai2_gene_pane_ParamLimits

0xb44f,	// (0x00017c84) ai2_gene_pane

0xb474,	// (0x00017ca9) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x0001c23f) list_ai2_gene_pane_t

0x7e37,	// (0x0001466c) list_highlight_pane_cp8_ParamLimits

0x7e37,	// (0x0001466c) list_highlight_pane_cp8

0x7e48,	// (0x0001467d) ai2_gene_pane_g1_ParamLimits

0x7e48,	// (0x0001467d) ai2_gene_pane_g1

0x7e5a,	// (0x0001468f) ai2_gene_pane_g2_ParamLimits

0x7e5a,	// (0x0001468f) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0001c244) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0001c244) ai2_gene_pane_g

0x3e6c,	// (0x000106a1) scroll_pane_cp12

0xa55f,	// (0x00016d94) control_pane_t3_ParamLimits

0xa55f,	// (0x00016d94) control_pane_t3

0x53f2,	// (0x00011c27) status_small_pane_g8_ParamLimits

0x53f2,	// (0x00011c27) status_small_pane_g8

0xa670,	// (0x00016ea5) popup_find_window_ParamLimits

0xa7d3,	// (0x00017008) popup_note_image_window_ParamLimits

0x8edf,	// (0x00015714) list_double2_graphic_pane_vc_g1_ParamLimits

0x8edf,	// (0x00015714) list_double2_graphic_pane_vc_g1

0x960a,	// (0x00015e3f) list_double2_graphic_pane_vc_g2_ParamLimits

0x960a,	// (0x00015e3f) list_double2_graphic_pane_vc_g2

0x9616,	// (0x00015e4b) list_double2_graphic_pane_vc_g3_ParamLimits

0x9616,	// (0x00015e4b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001c020) list_double2_graphic_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c020) list_double2_graphic_pane_vc_g

0x9668,	// (0x00015e9d) list_double2_graphic_pane_vc_t1_ParamLimits

0x9668,	// (0x00015e9d) list_double2_graphic_pane_vc_t1

0x960a,	// (0x00015e3f) list_single_heading_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_single_heading_pane_vc_g1

0x9616,	// (0x00015e4b) list_single_heading_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_single_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_single_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_single_heading_pane_vc_g

0x967e,	// (0x00015eb3) list_single_heading_pane_vc_t1_ParamLimits

0x967e,	// (0x00015eb3) list_single_heading_pane_vc_t1

0x9694,	// (0x00015ec9) list_single_heading_pane_vc_t2_ParamLimits

0x9694,	// (0x00015ec9) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x0001c04d) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x0001c04d) list_single_heading_pane_vc_t

0x69d6,	// (0x0001320b) list_setting_number_pane_vc_g1_ParamLimits

0x69d6,	// (0x0001320b) list_setting_number_pane_vc_g1

0x69e2,	// (0x00013217) list_setting_number_pane_vc_g2_ParamLimits

0x69e2,	// (0x00013217) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x0001c052) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x0001c052) list_setting_number_pane_vc_g

0x69ee,	// (0x00013223) list_setting_number_pane_vc_t1_ParamLimits

0x69ee,	// (0x00013223) list_setting_number_pane_vc_t1

0x6a02,	// (0x00013237) list_setting_number_pane_vc_t2_ParamLimits

0x6a02,	// (0x00013237) list_setting_number_pane_vc_t2

0x6a1e,	// (0x00013253) list_setting_number_pane_vc_t3_ParamLimits

0x6a1e,	// (0x00013253) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x0001c057) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x0001c057) list_setting_number_pane_vc_t

0x6a44,	// (0x00013279) set_value_pane_vc_ParamLimits

0x6a44,	// (0x00013279) set_value_pane_vc

0x9723,	// (0x00015f58) list_double2_graphic_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double2_graphic_pane_vc

0x7b41,	// (0x00014376) list_double2_large_graphic_pane_vc_ParamLimits

0x7b41,	// (0x00014376) list_double2_large_graphic_pane_vc

0x9723,	// (0x00015f58) list_double2_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double2_pane_vc

0x9723,	// (0x00015f58) list_double_graphic_heading_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_graphic_heading_pane_vc

0x9723,	// (0x00015f58) list_double_graphic_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_graphic_pane_vc

0x9723,	// (0x00015f58) list_double_heading_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_heading_pane_vc

0x7b41,	// (0x00014376) list_double_large_graphic_pane_vc_ParamLimits

0x7b41,	// (0x00014376) list_double_large_graphic_pane_vc

0x9723,	// (0x00015f58) list_double_number_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_number_pane_vc

0x9723,	// (0x00015f58) list_double_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_pane_vc

0x9723,	// (0x00015f58) list_double_time_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_double_time_pane_vc

0x9723,	// (0x00015f58) list_setting_number_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_setting_number_pane_vc

0x9723,	// (0x00015f58) list_setting_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_setting_pane_vc

0x9723,	// (0x00015f58) list_single_graphic_heading_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_single_graphic_heading_pane_vc

0x9723,	// (0x00015f58) list_single_heading_pane_vc_ParamLimits

0x9723,	// (0x00015f58) list_single_heading_pane_vc

0x9737,	// (0x00015f6c) list_single_number_heading_pane_vc_ParamLimits

0x9737,	// (0x00015f6c) list_single_number_heading_pane_vc

0x977b,	// (0x00015fb0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x977b,	// (0x00015fb0) list_double_graphic_heading_pane_vc_g1

0x960a,	// (0x00015e3f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x960a,	// (0x00015e3f) list_double_graphic_heading_pane_vc_g2

0x9616,	// (0x00015e4b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9616,	// (0x00015e4b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa1b,	// (0x0001c250) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa1b,	// (0x0001c250) list_double_graphic_heading_pane_vc_g

0x9787,	// (0x00015fbc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9787,	// (0x00015fbc) list_double_graphic_heading_pane_vc_t1

0x967e,	// (0x00015eb3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x967e,	// (0x00015eb3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0001c257) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0001c257) list_double_graphic_heading_pane_vc_t

0x69d6,	// (0x0001320b) list_setting_pane_vc_g1_ParamLimits

0x69d6,	// (0x0001320b) list_setting_pane_vc_g1

0x69e2,	// (0x00013217) list_setting_pane_vc_g2_ParamLimits

0x69e2,	// (0x00013217) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x0001c052) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x0001c052) list_setting_pane_vc_g

0x80c7,	// (0x000148fc) list_setting_pane_vc_t1_ParamLimits

0x80c7,	// (0x000148fc) list_setting_pane_vc_t1

0x80db,	// (0x00014910) list_setting_pane_vc_t2_ParamLimits

0x80db,	// (0x00014910) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0001c29a) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0001c29a) list_setting_pane_vc_t

0x6a44,	// (0x00013279) set_value_pane_cp_vc_ParamLimits

0x6a44,	// (0x00013279) set_value_pane_cp_vc

0x960a,	// (0x00015e3f) list_single_number_heading_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_single_number_heading_pane_vc_g1

0x9616,	// (0x00015e4b) list_single_number_heading_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_single_number_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_single_number_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_single_number_heading_pane_vc_g

0x967e,	// (0x00015eb3) list_single_number_heading_pane_vc_t1_ParamLimits

0x967e,	// (0x00015eb3) list_single_number_heading_pane_vc_t1

0x9799,	// (0x00015fce) list_single_number_heading_pane_vc_t2_ParamLimits

0x9799,	// (0x00015fce) list_single_number_heading_pane_vc_t2

0x97ab,	// (0x00015fe0) list_single_number_heading_pane_vc_t3_ParamLimits

0x97ab,	// (0x00015fe0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0001c29f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001c29f) list_single_number_heading_pane_vc_t

0x8edf,	// (0x00015714) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8edf,	// (0x00015714) list_single_graphic_heading_pane_vc_g1

0x960a,	// (0x00015e3f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x960a,	// (0x00015e3f) list_single_graphic_heading_pane_vc_g4

0x9616,	// (0x00015e4b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9616,	// (0x00015e4b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7eb,	// (0x0001c020) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c020) list_single_graphic_heading_pane_vc_g

0x967e,	// (0x00015eb3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x967e,	// (0x00015eb3) list_single_graphic_heading_pane_vc_t1

0x97bd,	// (0x00015ff2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x97bd,	// (0x00015ff2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001c2a6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001c2a6) list_single_graphic_heading_pane_vc_t

0x960a,	// (0x00015e3f) list_double2_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_double2_pane_vc_g1

0x9616,	// (0x00015e4b) list_double2_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_double2_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_double2_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_double2_pane_vc_g

0x97cf,	// (0x00016004) list_double2_pane_vc_t1_ParamLimits

0x97cf,	// (0x00016004) list_double2_pane_vc_t1

0x97e5,	// (0x0001601a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x97e5,	// (0x0001601a) list_double2_large_graphic_pane_vc_g1

0x97f1,	// (0x00016026) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x97f1,	// (0x00016026) list_double2_large_graphic_pane_vc_g2

0x97fd,	// (0x00016032) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x97fd,	// (0x00016032) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa76,	// (0x0001c2ab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0001c2ab) list_double2_large_graphic_pane_vc_g

0x9809,	// (0x0001603e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9809,	// (0x0001603e) list_double2_large_graphic_pane_vc_t1

0x981f,	// (0x00016054) list_double_time_pane_vc_g1_ParamLimits

0x981f,	// (0x00016054) list_double_time_pane_vc_g1

0x982b,	// (0x00016060) list_double_time_pane_vc_g2_ParamLimits

0x982b,	// (0x00016060) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001c2b2) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001c2b2) list_double_time_pane_vc_g

0x9837,	// (0x0001606c) list_double_time_pane_vc_t1_ParamLimits

0x9837,	// (0x0001606c) list_double_time_pane_vc_t1

0x9850,	// (0x00016085) list_double_time_pane_vc_t2_ParamLimits

0x9850,	// (0x00016085) list_double_time_pane_vc_t2

0x9889,	// (0x000160be) list_double_time_pane_vc_t3_ParamLimits

0x9889,	// (0x000160be) list_double_time_pane_vc_t3

0x98a1,	// (0x000160d6) list_double_time_pane_vc_t4_ParamLimits

0x98a1,	// (0x000160d6) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001c2b7) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001c2b7) list_double_time_pane_vc_t

0x960a,	// (0x00015e3f) list_double_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_double_pane_vc_g1

0x9616,	// (0x00015e4b) list_double_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_double_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_double_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_double_pane_vc_g

0x98b3,	// (0x000160e8) list_double_pane_vc_t1_ParamLimits

0x98b3,	// (0x000160e8) list_double_pane_vc_t1

0x98c5,	// (0x000160fa) list_double_pane_vc_t2_ParamLimits

0x98c5,	// (0x000160fa) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001c2c0) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001c2c0) list_double_pane_vc_t

0x960a,	// (0x00015e3f) list_double_number_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_double_number_pane_vc_g1

0x9616,	// (0x00015e4b) list_double_number_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_double_number_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_double_number_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_double_number_pane_vc_g

0x98db,	// (0x00016110) list_double_number_pane_vc_t1_ParamLimits

0x98db,	// (0x00016110) list_double_number_pane_vc_t1

0x98ef,	// (0x00016124) list_double_number_pane_vc_t2_ParamLimits

0x98ef,	// (0x00016124) list_double_number_pane_vc_t2

0x98c5,	// (0x000160fa) list_double_number_pane_vc_t3_ParamLimits

0x98c5,	// (0x000160fa) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001c2c5) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001c2c5) list_double_number_pane_vc_t

0x9901,	// (0x00016136) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9901,	// (0x00016136) list_double_large_graphic_pane_vc_g1

0x990d,	// (0x00016142) list_double_large_graphic_pane_vc_g2_ParamLimits

0x990d,	// (0x00016142) list_double_large_graphic_pane_vc_g2

0x97fd,	// (0x00016032) list_double_large_graphic_pane_vc_g3_ParamLimits

0x97fd,	// (0x00016032) list_double_large_graphic_pane_vc_g3

0x991c,	// (0x00016151) list_double_large_graphic_pane_vc_g4_ParamLimits

0x991c,	// (0x00016151) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001c2cc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001c2cc) list_double_large_graphic_pane_vc_g

0x9928,	// (0x0001615d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9928,	// (0x0001615d) list_double_large_graphic_pane_vc_t1

0x993a,	// (0x0001616f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x993a,	// (0x0001616f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001c2d5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001c2d5) list_double_large_graphic_pane_vc_t

0x960a,	// (0x00015e3f) list_double_heading_pane_vc_g1_ParamLimits

0x960a,	// (0x00015e3f) list_double_heading_pane_vc_g1

0x9616,	// (0x00015e4b) list_double_heading_pane_vc_g2_ParamLimits

0x9616,	// (0x00015e4b) list_double_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c048) list_double_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c048) list_double_heading_pane_vc_g

0x9951,	// (0x00016186) list_double_heading_pane_vc_t1_ParamLimits

0x9951,	// (0x00016186) list_double_heading_pane_vc_t1

0x967e,	// (0x00015eb3) list_double_heading_pane_vc_t2_ParamLimits

0x967e,	// (0x00015eb3) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0001c2da) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0001c2da) list_double_heading_pane_vc_t

0x9963,	// (0x00016198) list_double_graphic_pane_vc_g1_ParamLimits

0x9963,	// (0x00016198) list_double_graphic_pane_vc_g1

0x9973,	// (0x000161a8) list_double_graphic_pane_vc_g2_ParamLimits

0x9973,	// (0x000161a8) list_double_graphic_pane_vc_g2

0x9982,	// (0x000161b7) list_double_graphic_pane_vc_g3_ParamLimits

0x9982,	// (0x000161b7) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0001c2df) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0001c2df) list_double_graphic_pane_vc_g

0x998e,	// (0x000161c3) list_double_graphic_pane_vc_t1_ParamLimits

0x998e,	// (0x000161c3) list_double_graphic_pane_vc_t1

0x98c5,	// (0x000160fa) list_double_graphic_pane_vc_t2_ParamLimits

0x98c5,	// (0x000160fa) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0001c2e6) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0001c2e6) list_double_graphic_pane_vc_t

0x9d8b,	// (0x000165c0) aid_size_cell_fastswap

0x9d93,	// (0x000165c8) aid_size_cell_touch_ParamLimits

0x9d93,	// (0x000165c8) aid_size_cell_touch

0x9ed8,	// (0x0001670d) popup_fast_swap_wide_window_ParamLimits

0x9ed8,	// (0x0001670d) popup_fast_swap_wide_window

0x9f9e,	// (0x000167d3) touch_pane_ParamLimits

0x9f9e,	// (0x000167d3) touch_pane

0x934b,	// (0x00015b80) button_value_adjust_pane_cp2

0x8406,	// (0x00014c3b) button_value_adjust_pane_cp4

0x936b,	// (0x00015ba0) form_field_data_pane_cp2

0x938a,	// (0x00015bbf) form_field_data_wide_pane_cp2

0x49c2,	// (0x000111f7) bg_scroll_pane_ParamLimits

0xa199,	// (0x000169ce) scroll_handle_pane_ParamLimits

0xa1ad,	// (0x000169e2) scroll_sc2_down_pane_ParamLimits

0xa1ad,	// (0x000169e2) scroll_sc2_down_pane

0x49f3,	// (0x00011228) scroll_sc2_up_pane_ParamLimits

0x49f3,	// (0x00011228) scroll_sc2_up_pane

0xb607,	// (0x00017e3c) grid_wheel_folder_pane_g1_ParamLimits

0xb607,	// (0x00017e3c) grid_wheel_folder_pane_g1

0xa361,	// (0x00016b96) clock_nsta_pane_cp2_ParamLimits

0xa361,	// (0x00016b96) clock_nsta_pane_cp2

0x5187,	// (0x000119bc) listscroll_midp_pane_ParamLimits

0x5193,	// (0x000119c8) midp_canvas_pane

0xa5a0,	// (0x00016dd5) nsta_clock_indic_pane

0x6692,	// (0x00012ec7) listscroll_form_pane_vc

0x669a,	// (0x00012ecf) listscroll_set_pane_vc_ParamLimits

0x669a,	// (0x00012ecf) listscroll_set_pane_vc

0xaa01,	// (0x00017236) clock_nsta_pane

0xaa0e,	// (0x00017243) indicator_nsta_pane

0x68b0,	// (0x000130e5) bg_popup_sub_pane_cp2_ParamLimits

0x68c4,	// (0x000130f9) find_pane_cp2_ParamLimits

0x68c4,	// (0x000130f9) find_pane_cp2

0x68d6,	// (0x0001310b) grid_toobar_pane_ParamLimits

0x6a50,	// (0x00013285) list_form_gen_pane_vc_ParamLimits

0x6a50,	// (0x00013285) list_form_gen_pane_vc

0x6a66,	// (0x0001329b) scroll_pane_cp8_vc_ParamLimits

0x6a66,	// (0x0001329b) scroll_pane_cp8_vc

0x6ab6,	// (0x000132eb) data_form_wide_pane_vc_ParamLimits

0x6ab6,	// (0x000132eb) data_form_wide_pane_vc

0x6ac2,	// (0x000132f7) form_field_data_wide_pane_vc_g1

0x6aca,	// (0x000132ff) form_field_data_wide_pane_vc_t1_ParamLimits

0x6aca,	// (0x000132ff) form_field_data_wide_pane_vc_t1

0x43f2,	// (0x00010c27) input_focus_pane_cp6_vc_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_cp6_vc

0xae11,	// (0x00017646) list_midp_pane_ParamLimits

0xae1d,	// (0x00017652) scroll_pane_cp16_ParamLimits

0xae1d,	// (0x00017652) scroll_pane_cp16

0x6d32,	// (0x00013567) button_value_adjust_pane_ParamLimits

0x6d32,	// (0x00013567) button_value_adjust_pane

0xb145,	// (0x0001797a) button_value_adjust_pane_cp6_ParamLimits

0xb145,	// (0x0001797a) button_value_adjust_pane_cp6

0xb24d,	// (0x00017a82) settings_code_pane_cp_ParamLimits

0xb24d,	// (0x00017a82) settings_code_pane_cp

0x3515,	// (0x0000fd4a) cell_touch_pane_g1

0x3515,	// (0x0000fd4a) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001bf77) cell_touch_pane_g

0xb493,	// (0x00017cc8) cell_touch_pane_cp_ParamLimits

0xb493,	// (0x00017cc8) cell_touch_pane_cp

0xb4a3,	// (0x00017cd8) cell_touch_pane_ParamLimits

0xb4a3,	// (0x00017cd8) cell_touch_pane

0x3515,	// (0x0000fd4a) scroll_sc2_down_pane_g1

0x3515,	// (0x0000fd4a) scroll_sc2_up_pane_g1

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp4_vc

0x7eeb,	// (0x00014720) list_set_graphic_pane_vc_g1_ParamLimits

0x7eeb,	// (0x00014720) list_set_graphic_pane_vc_g1

0x7ef7,	// (0x0001472c) list_set_graphic_pane_vc_g2_ParamLimits

0x7ef7,	// (0x0001472c) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0001c25c) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0001c25c) list_set_graphic_pane_vc_g

0x7f03,	// (0x00014738) text_primary_small_cp13_vc_ParamLimits

0x7f03,	// (0x00014738) text_primary_small_cp13_vc

0x7e1c,	// (0x00014651) list_set_graphic_pane_vc_ParamLimits

0x7e1c,	// (0x00014651) list_set_graphic_pane_vc

0x35fc,	// (0x0000fe31) input_focus_pane_cp2_vc

0x3515,	// (0x0000fd4a) setting_code_pane_vc_g1

0x7f1b,	// (0x00014750) setting_code_pane_vc_t1

0x7f29,	// (0x0001475e) set_text_pane_vc_t1_ParamLimits

0x7f29,	// (0x0001475e) set_text_pane_vc_t1

0x35fc,	// (0x0000fe31) input_focus_pane_cp1_vc

0x7f44,	// (0x00014779) list_set_text_pane_vc

0x3515,	// (0x0000fd4a) setting_text_pane_vc_g1

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp2_vc

0x7f4e,	// (0x00014783) setting_slider_graphic_pane_vc_g1

0x7f56,	// (0x0001478b) setting_slider_graphic_pane_vc_t1

0x7f64,	// (0x00014799) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001c261) setting_slider_graphic_pane_vc_t

0x7f72,	// (0x000147a7) slider_set_pane_cp_vc

0x7f7a,	// (0x000147af) slider_set_pane_vc_g1

0x7f83,	// (0x000147b8) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0001c266) slider_set_pane_vc_g

0x4518,	// (0x00010d4d) set_opt_bg_pane_g1_copy1

0x4520,	// (0x00010d55) set_opt_bg_pane_g2_copy1

0x7faf,	// (0x000147e4) set_opt_bg_pane_g3_copy1

0x4530,	// (0x00010d65) set_opt_bg_pane_g4_copy1

0x4538,	// (0x00010d6d) set_opt_bg_pane_g5_copy1

0x4540,	// (0x00010d75) set_opt_bg_pane_g6_copy1

0x7fb7,	// (0x000147ec) set_opt_bg_pane_g7_copy1

0x7fbf,	// (0x000147f4) set_opt_bg_pane_g8_copy1

0x7fc7,	// (0x000147fc) set_opt_bg_pane_g9_copy1

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp_vc

0x7fcf,	// (0x00014804) setting_slider_pane_vc_t1

0x7f56,	// (0x0001478b) setting_slider_pane_vc_t2

0x7f64,	// (0x00014799) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0001c275) setting_slider_pane_vc_t

0x7f72,	// (0x000147a7) slider_set_pane_vc

0xae5d,	// (0x00017692) volume_set_pane_vc_g1

0xb4b5,	// (0x00017cea) volume_set_pane_vc_g2

0xb4be,	// (0x00017cf3) volume_set_pane_vc_g3

0xb4c7,	// (0x00017cfc) volume_set_pane_vc_g4

0xb4d0,	// (0x00017d05) volume_set_pane_vc_g5

0xb4d9,	// (0x00017d0e) volume_set_pane_vc_g6

0xb4e2,	// (0x00017d17) volume_set_pane_vc_g7

0xb4eb,	// (0x00017d20) volume_set_pane_vc_g8

0xb4f4,	// (0x00017d29) volume_set_pane_vc_g9

0xb4fd,	// (0x00017d32) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0001c27c) volume_set_pane_vc_g

0x7fde,	// (0x00014813) volume_set_pane_vc

0x7fe6,	// (0x0001481b) button_value_adjust_pane_cp1_vc

0x7ff0,	// (0x00014825) list_highlight_pane_cp2_vc

0x7ff9,	// (0x0001482e) list_set_pane_vc_ParamLimits

0x7ff9,	// (0x0001482e) list_set_pane_vc

0x804b,	// (0x00014880) main_pane_set_vc_t1_ParamLimits

0x804b,	// (0x00014880) main_pane_set_vc_t1

0x8072,	// (0x000148a7) main_pane_set_vc_t2_ParamLimits

0x8072,	// (0x000148a7) main_pane_set_vc_t2

0x8084,	// (0x000148b9) main_pane_set_vc_t3_ParamLimits

0x8084,	// (0x000148b9) main_pane_set_vc_t3

0x8096,	// (0x000148cb) main_pane_set_vc_t4_ParamLimits

0x8096,	// (0x000148cb) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0001c291) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0001c291) main_pane_set_vc_t

0x80a8,	// (0x000148dd) setting_code_pane_vc_ParamLimits

0x80a8,	// (0x000148dd) setting_code_pane_vc

0x80b7,	// (0x000148ec) setting_slider_graphic_pane_vc

0x80b7,	// (0x000148ec) setting_slider_pane_vc

0x80b7,	// (0x000148ec) setting_text_pane_vc

0x80b7,	// (0x000148ec) setting_volume_pane_vc

0x80bf,	// (0x000148f4) scroll_pane_cp121_vc

0x4319,	// (0x00010b4e) set_content_pane_vc

0x8272,	// (0x00014aa7) button_value_adjust_pane_g1

0x827b,	// (0x00014ab0) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0001c2eb) button_value_adjust_pane_g

0x8284,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8284,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1

0x829a,	// (0x00014acf) form_field_slider_wide_pane_vc_t2_ParamLimits

0x829a,	// (0x00014acf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0001c2f0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0001c2f0) form_field_slider_wide_pane_vc_t

0x39a1,	// (0x000101d6) input_focus_pane_cp10_vc_ParamLimits

0x39a1,	// (0x000101d6) input_focus_pane_cp10_vc

0x82af,	// (0x00014ae4) slider_cont_pane_cp1_vc_ParamLimits

0x82af,	// (0x00014ae4) slider_cont_pane_cp1_vc

0x7f7a,	// (0x000147af) slider_form_pane_g1_cp2

0x7f83,	// (0x000147b8) slider_form_pane_g2_cp2

0x82ca,	// (0x00014aff) form_field_slider_pane_vc_t3

0x82d8,	// (0x00014b0d) form_field_slider_pane_vc_t4

0x82e6,	// (0x00014b1b) slider_form_pane_vc_ParamLimits

0x82e6,	// (0x00014b1b) slider_form_pane_vc

0x82f3,	// (0x00014b28) form_field_slider_pane_vc_t1_ParamLimits

0x82f3,	// (0x00014b28) form_field_slider_pane_vc_t1

0x8309,	// (0x00014b3e) form_field_slider_pane_vc_t2_ParamLimits

0x8309,	// (0x00014b3e) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0001c300) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0001c300) form_field_slider_pane_vc_t

0x39a1,	// (0x000101d6) input_focus_pane_cp9_vc_ParamLimits

0x39a1,	// (0x000101d6) input_focus_pane_cp9_vc

0x831b,	// (0x00014b50) slider_cont_pane_vc_ParamLimits

0x831b,	// (0x00014b50) slider_cont_pane_vc

0x832d,	// (0x00014b62) list_form_graphic_pane_cp_vc_ParamLimits

0x832d,	// (0x00014b62) list_form_graphic_pane_cp_vc

0x6ac2,	// (0x000132f7) form_field_popup_wide_pane_vc_g1

0x8359,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x8359,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1

0x43f2,	// (0x00010c27) input_focus_pane_cp8_vc_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_cp8_vc

0x836e,	// (0x00014ba3) list_form_wide_pane_vc_ParamLimits

0x836e,	// (0x00014ba3) list_form_wide_pane_vc

0x837a,	// (0x00014baf) list_form_graphic_pane_vc_g1

0x8382,	// (0x00014bb7) list_form_graphic_pane_vc_t1_ParamLimits

0x8382,	// (0x00014bb7) list_form_graphic_pane_vc_t1

0x36dc,	// (0x0000ff11) list_highlight_pane_cp5_vc_ParamLimits

0x36dc,	// (0x0000ff11) list_highlight_pane_cp5_vc

0x839e,	// (0x00014bd3) list_form_graphic_pane_vc_ParamLimits

0x839e,	// (0x00014bd3) list_form_graphic_pane_vc

0x6ac2,	// (0x000132f7) form_field_popup_pane_vc_g1

0x83b4,	// (0x00014be9) form_field_popup_pane_vc_t1_ParamLimits

0x83b4,	// (0x00014be9) form_field_popup_pane_vc_t1

0x43f2,	// (0x00010c27) input_focus_pane_cp7_vc_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_cp7_vc

0x83c9,	// (0x00014bfe) list_form_pane_vc_ParamLimits

0x83c9,	// (0x00014bfe) list_form_pane_vc

0x83d5,	// (0x00014c0a) data_form_pane_vc_t1_ParamLimits

0x83d5,	// (0x00014c0a) data_form_pane_vc_t1

0x4518,	// (0x00010d4d) input_focus_pane_vc_g1

0x4520,	// (0x00010d55) input_focus_pane_vc_g2

0x4528,	// (0x00010d5d) input_focus_pane_vc_g3

0x4530,	// (0x00010d65) input_focus_pane_vc_g4

0x4538,	// (0x00010d6d) input_focus_pane_vc_g5

0x4540,	// (0x00010d75) input_focus_pane_vc_g6

0x4548,	// (0x00010d7d) input_focus_pane_vc_g7

0x4550,	// (0x00010d85) input_focus_pane_vc_g8

0x4558,	// (0x00010d8d) input_focus_pane_vc_g9

0x3515,	// (0x0000fd4a) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001bf00) input_focus_pane_vc_g

0x6ab6,	// (0x000132eb) data_form_pane_vc_ParamLimits

0x6ab6,	// (0x000132eb) data_form_pane_vc

0x6ac2,	// (0x000132f7) form_field_data_pane_vc_g1

0x83f0,	// (0x00014c25) form_field_data_pane_vc_t1_ParamLimits

0x83f0,	// (0x00014c25) form_field_data_pane_vc_t1

0x43f2,	// (0x00010c27) input_focus_pane_vc_ParamLimits

0x43f2,	// (0x00010c27) input_focus_pane_vc

0x4322,	// (0x00010b57) button_value_adjust_pane_cp3_vc

0x8406,	// (0x00014c3b) button_value_adjust_pane_cp5_vc

0x8342,	// (0x00014b77) form_field_data_pane_vc_ParamLimits

0x8342,	// (0x00014b77) form_field_data_pane_vc

0x434a,	// (0x00010b7f) form_field_data_pane_vc_cp2

0x840e,	// (0x00014c43) form_field_data_wide_pane_vc_ParamLimits

0x840e,	// (0x00014c43) form_field_data_wide_pane_vc

0x8424,	// (0x00014c59) form_field_data_wide_pane_vc_cp2

0x842c,	// (0x00014c61) form_field_popup_pane_vc_ParamLimits

0x842c,	// (0x00014c61) form_field_popup_pane_vc

0x8443,	// (0x00014c78) form_field_popup_wide_pane_vc_ParamLimits

0x8443,	// (0x00014c78) form_field_popup_wide_pane_vc

0x8459,	// (0x00014c8e) form_field_slider_pane_vc_ParamLimits

0x8459,	// (0x00014c8e) form_field_slider_pane_vc

0x846c,	// (0x00014ca1) form_field_slider_wide_pane_vc_ParamLimits

0x846c,	// (0x00014ca1) form_field_slider_wide_pane_vc

0xb506,	// (0x00017d3b) grid_touch_1_pane_ParamLimits

0xb506,	// (0x00017d3b) grid_touch_1_pane

0xb512,	// (0x00017d47) grid_touch_2_pane_ParamLimits

0xb512,	// (0x00017d47) grid_touch_2_pane

0x5438,	// (0x00011c6d) touch_pane_g1_ParamLimits

0x5438,	// (0x00011c6d) touch_pane_g1

0x847f,	// (0x00014cb4) cell_app_pane_cp_wide_ParamLimits

0x847f,	// (0x00014cb4) cell_app_pane_cp_wide

0x848f,	// (0x00014cc4) grid_popup_fast_wide_pane_ParamLimits

0x848f,	// (0x00014cc4) grid_popup_fast_wide_pane

0x84a3,	// (0x00014cd8) scroll_pane_cp19_ParamLimits

0x84a3,	// (0x00014cd8) scroll_pane_cp19

0x35fc,	// (0x0000fe31) bg_popup_window_pane_cp20

0x84b7,	// (0x00014cec) listscroll_popup_fast_wide_pane

0x36dc,	// (0x0000ff11) grid_indicator_nsta_pane

0x84bf,	// (0x00014cf4) clock_nsta_pane_g1

0x84c8,	// (0x00014cfd) clock_nsta_pane_t1

0xb52a,	// (0x00017d5f) cell_indicator_nsta_pane_ParamLimits

0xb52a,	// (0x00017d5f) cell_indicator_nsta_pane

0x84e4,	// (0x00014d19) cell_indicator_nsta_pane_g1

0xb562,	// (0x00017d97) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0001c30a) cell_indicator_nsta_pane_g

0x84f2,	// (0x00014d27) clock_nsta_pane_cp

0x84fa,	// (0x00014d2f) indicator_nsta_pane_cp

0x8503,	// (0x00014d38) nsta_clock_indic_pane_g1

0x37bc,	// (0x0000fff1) grid_indicator_pane

0x4ae5,	// (0x0001131a) scroll_pane_cp29

0xa2b8,	// (0x00016aed) indicator_nsta_pane_cp2_ParamLimits

0xa2b8,	// (0x00016aed) indicator_nsta_pane_cp2

0x36dc,	// (0x0000ff11) main_apps_wheel_pane

0x6be5,	// (0x0001341a) form_midp_field_text_pane_ParamLimits

0x6d12,	// (0x00013547) scroll_bar_cp050_ParamLimits

0x853b,	// (0x00014d70) cell_indicator_pane_ParamLimits

0x853b,	// (0x00014d70) cell_indicator_pane

0x8551,	// (0x00014d86) cell_indicator_pane_g1

0xb577,	// (0x00017dac) grid_wheel_folder_pane_ParamLimits

0xb577,	// (0x00017dac) grid_wheel_folder_pane

0xb589,	// (0x00017dbe) list_wheel_apps_pane_ParamLimits

0xb589,	// (0x00017dbe) list_wheel_apps_pane

0xb598,	// (0x00017dcd) main_apps_wheel_pane_g1_ParamLimits

0xb598,	// (0x00017dcd) main_apps_wheel_pane_g1

0xb5ac,	// (0x00017de1) main_apps_wheel_pane_g2_ParamLimits

0xb5ac,	// (0x00017de1) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0001c319) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0001c319) main_apps_wheel_pane_g

0xb5c0,	// (0x00017df5) main_apps_wheel_pane_t1_ParamLimits

0xb5c0,	// (0x00017df5) main_apps_wheel_pane_t1

0xb5df,	// (0x00017e14) list_wheel_apps_pane_g1

0xb5e7,	// (0x00017e1c) list_wheel_apps_pane_g2

0xb5ef,	// (0x00017e24) list_wheel_apps_pane_g3

0xb5f7,	// (0x00017e2c) list_wheel_apps_pane_g4

0xb5ff,	// (0x00017e34) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0001c31e) list_wheel_apps_pane_g

0x36dc,	// (0x0000ff11) navi_icon_text_pane

0xa955,	// (0x0001718a) aid_fill_nsta

0xb61e,	// (0x00017e53) navi_icon_text_pane_g1

0xb62a,	// (0x00017e5f) navi_icon_text_pane_t1

0x4efa,	// (0x0001172f) list_set_graphic_pane_t1_ParamLimits

0x4efa,	// (0x0001172f) list_set_graphic_pane_t1

0x73c7,	// (0x00013bfc) popup_midp_note_alarm_window_t6_ParamLimits

0x73c7,	// (0x00013bfc) popup_midp_note_alarm_window_t6

0x73d9,	// (0x00013c0e) popup_midp_note_alarm_window_t7_ParamLimits

0x73d9,	// (0x00013c0e) popup_midp_note_alarm_window_t7

0x73eb,	// (0x00013c20) popup_midp_note_alarm_window_t8_ParamLimits

0x73eb,	// (0x00013c20) popup_midp_note_alarm_window_t8

0x73fd,	// (0x00013c32) popup_midp_note_alarm_window_t9_ParamLimits

0x73fd,	// (0x00013c32) popup_midp_note_alarm_window_t9

0x740f,	// (0x00013c44) popup_midp_note_alarm_window_t10_ParamLimits

0x740f,	// (0x00013c44) popup_midp_note_alarm_window_t10

0x7421,	// (0x00013c56) popup_midp_note_alarm_window_t11_ParamLimits

0x7421,	// (0x00013c56) popup_midp_note_alarm_window_t11

0x7433,	// (0x00013c68) scroll_pane_cp17_ParamLimits

0x7433,	// (0x00013c68) scroll_pane_cp17

0xae5d,	// (0x00017692) volume_small_pane_cp_g1

0xb63c,	// (0x00017e71) volume_small_pane_cp_g2

0xb645,	// (0x00017e7a) volume_small_pane_cp_g3

0xb64e,	// (0x00017e83) volume_small_pane_cp_g4

0xae8a,	// (0x000176bf) volume_small_pane_cp_g5

0xb657,	// (0x00017e8c) volume_small_pane_cp_g6

0xb660,	// (0x00017e95) volume_small_pane_cp_g7

0xb669,	// (0x00017e9e) volume_small_pane_cp_g8

0xb672,	// (0x00017ea7) volume_small_pane_cp_g9

0xb67b,	// (0x00017eb0) volume_small_pane_cp_g10

0x524e,	// (0x00011a83) midp_ticker_pane_g1_ParamLimits

0x525a,	// (0x00011a8f) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001bfc8) midp_ticker_pane_g_ParamLimits

0x5266,	// (0x00011a9b) midp_ticker_pane_t1_ParamLimits

0xa965,	// (0x0001719a) aid_fill_nsta_2

0x6cfe,	// (0x00013533) list_form2_midp_pane

0x7b0f,	// (0x00014344) midp_editing_number_pane_ParamLimits

0x7b1b,	// (0x00014350) midp_ticker_pane_ParamLimits

0xb684,	// (0x00017eb9) form2_midp_field_pane

0xb6a8,	// (0x00017edd) scroll_pane_cp51

0xb6c8,	// (0x00017efd) form2_midp_button_pane_ParamLimits

0xb6c8,	// (0x00017efd) form2_midp_button_pane

0xb6da,	// (0x00017f0f) form2_midp_content_pane_ParamLimits

0xb6da,	// (0x00017f0f) form2_midp_content_pane

0xb6f4,	// (0x00017f29) form2_midp_field_choice_group_pane

0xb6fc,	// (0x00017f31) form2_midp_field_pane_g1

0xb704,	// (0x00017f39) form2_midp_field_pane_g2

0xb70c,	// (0x00017f41) form2_midp_field_pane_g3

0xb714,	// (0x00017f49) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0001c343) form2_midp_field_pane_g

0xb71c,	// (0x00017f51) form2_midp_gauge_slider_pane

0xb724,	// (0x00017f59) form2_midp_gauge_wait_pane

0xb72c,	// (0x00017f61) form2_midp_image_pane_ParamLimits

0xb72c,	// (0x00017f61) form2_midp_image_pane

0xb747,	// (0x00017f7c) form2_midp_label_pane_ParamLimits

0xb747,	// (0x00017f7c) form2_midp_label_pane

0xb760,	// (0x00017f95) form2_midp_label_pane_cp_ParamLimits

0xb760,	// (0x00017f95) form2_midp_label_pane_cp

0xb77f,	// (0x00017fb4) form2_midp_string_pane_ParamLimits

0xb77f,	// (0x00017fb4) form2_midp_string_pane

0x99a0,	// (0x000161d5) form2_midp_text_pane_ParamLimits

0x99a0,	// (0x000161d5) form2_midp_text_pane

0xb791,	// (0x00017fc6) form2_midp_time_pane

0xb7a1,	// (0x00017fd6) input_focus_pane_cp51_ParamLimits

0xb7a1,	// (0x00017fd6) input_focus_pane_cp51

0xb7b9,	// (0x00017fee) form2_midp_label_pane_t1_ParamLimits

0xb7b9,	// (0x00017fee) form2_midp_label_pane_t1

0x99b9,	// (0x000161ee) form2_mdip_text_pane_t1_ParamLimits

0x99b9,	// (0x000161ee) form2_mdip_text_pane_t1

0x99d6,	// (0x0001620b) form2_midp_time_pane_t1

0xb801,	// (0x00018036) form2_midp_gauge_slider_pane_t1

0xb813,	// (0x00018048) form2_midp_gauge_slider_pane_t2

0xb825,	// (0x0001805a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0001c34c) form2_midp_gauge_slider_pane_t

0xb837,	// (0x0001806c) form2_midp_slider_pane

0xb843,	// (0x00018078) form2_midp_gauge_wait_pane_t1

0xb851,	// (0x00018086) form2_midp_wait_pane_ParamLimits

0xb851,	// (0x00018086) form2_midp_wait_pane

0x4bef,	// (0x00011424) list_single_2graphic_pane_cp4_ParamLimits

0x4bef,	// (0x00011424) list_single_2graphic_pane_cp4

0xad9c,	// (0x000175d1) list_single_midp_graphic_pane_cp_ParamLimits

0xad9c,	// (0x000175d1) list_single_midp_graphic_pane_cp

0x35fc,	// (0x0000fe31) list_highlight_pane_cp20

0xb87c,	// (0x000180b1) list_single_2graphic_pane_g1_cp4

0x7b9b,	// (0x000143d0) list_single_2graphic_pane_g2_cp4

0xb884,	// (0x000180b9) list_single_2graphic_pane_t1_cp4

0x36dc,	// (0x0000ff11) list_highlight_pane_cp21

0xb893,	// (0x000180c8) list_single_midp_graphic_pane_g4_cp

0xb8a2,	// (0x000180d7) list_single_midp_graphic_pane_t1_cp

0xb8b7,	// (0x000180ec) form2_mdip_string_pane_t1_ParamLimits

0xb8b7,	// (0x000180ec) form2_mdip_string_pane_t1

0x35fc,	// (0x0000fe31) bg_wml_button_pane_cp2

0x3515,	// (0x0000fd4a) form2_midp_image_pane_g1

0x9122,	// (0x00015957) list_double_large_graphic_pane_g5_ParamLimits

0x9122,	// (0x00015957) list_double_large_graphic_pane_g5

0x5187,	// (0x000119bc) midp_form_pane_ParamLimits

0x36dc,	// (0x0000ff11) main_apps_wheel_pane_ParamLimits

0xa7f7,	// (0x0001702c) popup_preview_window_ParamLimits

0xa7f7,	// (0x0001702c) popup_preview_window

0x676a,	// (0x00012f9f) popup_touch_info_window_ParamLimits

0x676a,	// (0x00012f9f) popup_touch_info_window

0x6788,	// (0x00012fbd) popup_touch_menu_window_ParamLimits

0x6788,	// (0x00012fbd) popup_touch_menu_window

0x350b,	// (0x0000fd40) bg_popup_sub_pane_cp6

0xb92f,	// (0x00018164) list_touch_menu_pane

0xb937,	// (0x0001816c) list_single_touch_menu_pane_ParamLimits

0xb937,	// (0x0001816c) list_single_touch_menu_pane

0xb94e,	// (0x00018183) list_single_touch_menu_pane_t1

0x36dc,	// (0x0000ff11) bg_popup_sub_pane_cp7_ParamLimits

0x36dc,	// (0x0000ff11) bg_popup_sub_pane_cp7

0xb95c,	// (0x00018191) heading_sub_pane

0xb964,	// (0x00018199) list_touch_info_pane_ParamLimits

0xb964,	// (0x00018199) list_touch_info_pane

0xb973,	// (0x000181a8) list_single_touch_info_pane_ParamLimits

0xb973,	// (0x000181a8) list_single_touch_info_pane

0xb984,	// (0x000181b9) list_single_touch_info_pane_t1

0xb992,	// (0x000181c7) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0001c35a) list_single_touch_info_pane_t

0x517f,	// (0x000119b4) bg_popup_heading_pane_cp

0xb9a0,	// (0x000181d5) heading_sub_pane_t1

0x6a7c,	// (0x000132b1) bg_popup_preview_window_pane_cp_ParamLimits

0x6a7c,	// (0x000132b1) bg_popup_preview_window_pane_cp

0xb95c,	// (0x00018191) heading_preview_pane

0xb964,	// (0x00018199) list_preview_pane_ParamLimits

0xb964,	// (0x00018199) list_preview_pane

0xb9ae,	// (0x000181e3) popup_preview_window_g1

0xb973,	// (0x000181a8) list_single_preview_pane_ParamLimits

0xb973,	// (0x000181a8) list_single_preview_pane

0xb9b6,	// (0x000181eb) list_single_preview_pane_g1

0xb9be,	// (0x000181f3) list_single_preview_pane_t1

0xb984,	// (0x000181b9) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0001c35f) list_single_preview_pane_t

0xb9cc,	// (0x00018201) bg_popup_heading_pane_cp2_ParamLimits

0xb9cc,	// (0x00018201) bg_popup_heading_pane_cp2

0xb9e2,	// (0x00018217) heading_preview_pane_g1

0xb9ea,	// (0x0001821f) heading_preview_pane_t1_ParamLimits

0xb9ea,	// (0x0001821f) heading_preview_pane_t1

0x37df,	// (0x00010014) soft_indicator_pane_t1_ParamLimits

0x3e48,	// (0x0001067d) scroll_pane_ParamLimits

0x49ea,	// (0x0001121f) scroll_sc2_left_pane

0x49e1,	// (0x00011216) scroll_sc2_right_pane

0x4a09,	// (0x0001123e) scroll_bg_pane_g1_ParamLimits

0x4a1e,	// (0x00011253) scroll_bg_pane_g2_ParamLimits

0x4a36,	// (0x0001126b) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001bf57) scroll_bg_pane_g_ParamLimits

0x4a09,	// (0x0001123e) scroll_handle_pane_g1_ParamLimits

0x4a58,	// (0x0001128d) scroll_handle_pane_g2_ParamLimits

0x4a36,	// (0x0001126b) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001bf5e) scroll_handle_pane_g_ParamLimits

0x66c2,	// (0x00012ef7) popup_choice_list_window_ParamLimits

0x66c2,	// (0x00012ef7) popup_choice_list_window

0x68bc,	// (0x000130f1) choice_list_pane

0x6932,	// (0x00013167) cell_toolbar_pane_t1

0x695a,	// (0x0001318f) toolbar_button_pane_ParamLimits

0x77f9,	// (0x0001402e) ai_gene_pane_1_t2_ParamLimits

0x77f9,	// (0x0001402e) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x0001c174) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x0001c174) ai_gene_pane_1_t

0xba07,	// (0x0001823c) scroll_sc2_left_pane_g1

0xba07,	// (0x0001823c) scroll_sc2_right_pane_g1

0x664e,	// (0x00012e83) bg_popup_sub_pane_cp10

0xba11,	// (0x00018246) list_choice_list_pane

0xba28,	// (0x0001825d) list_single_choice_list_pane_ParamLimits

0xba28,	// (0x0001825d) list_single_choice_list_pane

0xba3c,	// (0x00018271) list_single_choice_list_pane_g1

0x46dd,	// (0x00010f12) list_single_choice_list_pane_t1_ParamLimits

0x46dd,	// (0x00010f12) list_single_choice_list_pane_t1

0xba44,	// (0x00018279) choice_list_pane_g1

0xba4c,	// (0x00018281) choice_list_pane_t1

0x350b,	// (0x0000fd40) input_focus_pane_cp11

0x48c1,	// (0x000110f6) title_pane_stacon_g2_ParamLimits

0x48c1,	// (0x000110f6) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001bf3d) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001bf3d) title_pane_stacon_g

0x517f,	// (0x000119b4) cursor_press_pane

0xa644,	// (0x00016e79) popup_fep_hwr_window_ParamLimits

0xa644,	// (0x00016e79) popup_fep_hwr_window

0x6714,	// (0x00012f49) popup_fep_vkb_window_ParamLimits

0x6714,	// (0x00012f49) popup_fep_vkb_window

0xba5a,	// (0x0001828f) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0001c388) fep_vkb_side_pane_g_ParamLimits

0xba97,	// (0x000182cc) fep_hwr_candidate_pane_ParamLimits

0xba97,	// (0x000182cc) fep_hwr_candidate_pane

0xbabf,	// (0x000182f4) fep_hwr_side_pane_ParamLimits

0xbabf,	// (0x000182f4) fep_hwr_side_pane

0xbadf,	// (0x00018314) fep_hwr_top_pane_ParamLimits

0xbadf,	// (0x00018314) fep_hwr_top_pane

0xbaf7,	// (0x0001832c) fep_hwr_write_pane_ParamLimits

0xbaf7,	// (0x0001832c) fep_hwr_write_pane

0xfb53,	// (0x0001c388) fep_vkb_side_pane_g

0xbb31,	// (0x00018366) fep_hwr_top_pane_g1

0xbb43,	// (0x00018378) fep_hwr_top_pane_g2

0xbb55,	// (0x0001838a) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0001c364) fep_hwr_top_pane_g

0xbb6a,	// (0x0001839f) fep_hwr_top_text_pane

0x4bad,	// (0x000113e2) fep_hwr_top_text_pane_g1

0xbc42,	// (0x00018477) fep_hwr_top_text_pane_t1

0xbc8a,	// (0x000184bf) fep_hwr_candidate_pane_g1

0xbec0,	// (0x000186f5) fep_vkb_keypad_pane_g3_ParamLimits

0xbec0,	// (0x000186f5) fep_vkb_keypad_pane_g3

0xbee2,	// (0x00018717) fep_vkb_keypad_pane_g4_ParamLimits

0xbee2,	// (0x00018717) fep_vkb_keypad_pane_g4

0xbf51,	// (0x00018786) fep_vkb_bottom_pane_g2_ParamLimits

0xbf51,	// (0x00018786) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0001c38f) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0001c38f) fep_vkb_bottom_pane_g

0xba07,	// (0x0001823c) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0001c399) cell_vkb_side_pane_g

0xbfdc,	// (0x00018811) cell_vkb_side_pane_t1

0xbfea,	// (0x0001881f) cell_vkb_side_pane_t1_copy1

0xba07,	// (0x0001823c) bg_fep_vkb_candidate_pane_g2

0xc10e,	// (0x00018943) cell_vkb_candidate_pane_ParamLimits

0xbcbe,	// (0x000184f3) aid_size_cell_vkb_ParamLimits

0xbcbe,	// (0x000184f3) aid_size_cell_vkb

0xc10e,	// (0x00018943) cell_vkb_candidate_pane

0xc140,	// (0x00018975) bg_popup_fep_shadow_pane_g1

0xbd34,	// (0x00018569) fep_vkb_bottom_pane_ParamLimits

0xbd34,	// (0x00018569) fep_vkb_bottom_pane

0xbd71,	// (0x000185a6) fep_vkb_candidate_pane_ParamLimits

0xbd71,	// (0x000185a6) fep_vkb_candidate_pane

0xbd8d,	// (0x000185c2) fep_vkb_keypad_pane_ParamLimits

0xbd8d,	// (0x000185c2) fep_vkb_keypad_pane

0xbdc1,	// (0x000185f6) fep_vkb_side_pane_ParamLimits

0xbdc1,	// (0x000185f6) fep_vkb_side_pane

0xbded,	// (0x00018622) fep_vkb_top_pane_ParamLimits

0xbded,	// (0x00018622) fep_vkb_top_pane

0xbe19,	// (0x0001864e) fep_vkb_top_pane_g1_ParamLimits

0xbe19,	// (0x0001864e) fep_vkb_top_pane_g1

0xbe28,	// (0x0001865d) fep_vkb_top_pane_g2_ParamLimits

0xbe28,	// (0x0001865d) fep_vkb_top_pane_g2

0xbe37,	// (0x0001866c) fep_vkb_top_pane_g3_ParamLimits

0xbe37,	// (0x0001866c) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0001c37f) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0001c37f) fep_vkb_top_pane_g

0xbe55,	// (0x0001868a) fep_vkb_top_text_pane_ParamLimits

0xbe55,	// (0x0001868a) fep_vkb_top_text_pane

0xbe66,	// (0x0001869b) fep_vkb_side_pane_g1_ParamLimits

0xbe66,	// (0x0001869b) fep_vkb_side_pane_g1

0xbeaf,	// (0x000186e4) grid_vkb_side_pane_ParamLimits

0xbeaf,	// (0x000186e4) grid_vkb_side_pane

0xc148,	// (0x0001897d) bg_popup_fep_shadow_pane_g2

0xc151,	// (0x00018986) bg_popup_fep_shadow_pane_g3

0xc159,	// (0x0001898e) bg_popup_fep_shadow_pane_g4

0xc162,	// (0x00018997) bg_popup_fep_shadow_pane_g5

0xc16a,	// (0x0001899f) bg_popup_fep_shadow_pane_g6

0xc172,	// (0x000189a7) bg_popup_fep_shadow_pane_g7

0x4538,	// (0x00010d6d) bg_popup_fep_shadow_pane_g8

0xbf00,	// (0x00018735) grid_vkb_keypad_number_pane_ParamLimits

0xbf00,	// (0x00018735) grid_vkb_keypad_number_pane

0xbf10,	// (0x00018745) grid_vkb_keypad_pane_ParamLimits

0xbf10,	// (0x00018745) grid_vkb_keypad_pane

0xbf36,	// (0x0001876b) fep_vkb_bottom_pane_g1_ParamLimits

0xbf36,	// (0x0001876b) fep_vkb_bottom_pane_g1

0xbf5f,	// (0x00018794) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbf5f,	// (0x00018794) grid_vkb_keypad_bottom_left_pane

0xbf74,	// (0x000187a9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbf74,	// (0x000187a9) grid_vkb_keypad_bottom_right_pane

0xbf89,	// (0x000187be) fep_vkb_top_text_pane_g1

0xbfa4,	// (0x000187d9) fep_vkb_top_text_pane_t1

0xbfb9,	// (0x000187ee) cell_vkb_side_pane_ParamLimits

0xbfb9,	// (0x000187ee) cell_vkb_side_pane

0xba07,	// (0x0001823c) cell_vkb_side_pane_g1

0xbff8,	// (0x0001882d) cell_vkb_keypad_pane_ParamLimits

0xbff8,	// (0x0001882d) cell_vkb_keypad_pane

0xc065,	// (0x0001889a) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0001c3ac) bg_popup_fep_shadow_pane_g

0xba07,	// (0x0001823c) cell_hwr_side_pane_g1

0xba07,	// (0x0001823c) cell_hwr_side_pane_g2

0xc06f,	// (0x000188a4) cell_vkb_keypad_pane_t1

0xc07d,	// (0x000188b2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc07d,	// (0x000188b2) cell_vkb_keypad_bottom_left_pane

0xc09a,	// (0x000188cf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc09a,	// (0x000188cf) cell_vkb_keypad_bottom_right_pane

0xba07,	// (0x0001823c) cell_vkb_keypad_bottom_left_pane_g1

0xba07,	// (0x0001823c) cell_vkb_keypad_bottom_right_pane_g1

0xc0d3,	// (0x00018908) cell_vkb_keypad_number_pane_ParamLimits

0xc0d3,	// (0x00018908) cell_vkb_keypad_number_pane

0xc0f2,	// (0x00018927) cell_vkb_keypad_number_pane_g1

0xc0fc,	// (0x00018931) cell_vkb_keypad_number_pane_g2

0xc105,	// (0x0001893a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0001c39e) cell_vkb_keypad_number_pane_g

0xc06f,	// (0x000188a4) cell_vkb_keypad_number_pane_t1

0xc127,	// (0x0001895c) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0001c399) cell_hwr_side_pane_g

0xc182,	// (0x000189b7) cell_hwr_side_pane_t1

0xc190,	// (0x000189c5) cell_hwr_side_pane_t1_copy1

0xbe47,	// (0x0001867c) cell_hwr_candidate_pane_g1

0xc1e0,	// (0x00018a15) cell_hwr_candidate_pane_t1

0xba07,	// (0x0001823c) cell_vkb_candidate_pane_g2

0xc233,	// (0x00018a68) cell_vkb_candidate_pane_t1

0xba62,	// (0x00018297) bg_popup_fep_shadow_pane_ParamLimits

0xba62,	// (0x00018297) bg_popup_fep_shadow_pane

0xbb11,	// (0x00018346) bg_fep_hwr_top_pane_g4

0xbb7f,	// (0x000183b4) bg_hwr_side_pane_g1_ParamLimits

0xbb7f,	// (0x000183b4) bg_hwr_side_pane_g1

0xbbb2,	// (0x000183e7) cell_hwr_side_pane_ParamLimits

0xbbb2,	// (0x000183e7) cell_hwr_side_pane

0xbbed,	// (0x00018422) fep_hwr_write_pane_g1_ParamLimits

0xbbed,	// (0x00018422) fep_hwr_write_pane_g1

0xbbfa,	// (0x0001842f) fep_hwr_write_pane_g2_ParamLimits

0xbbfa,	// (0x0001842f) fep_hwr_write_pane_g2

0xbc07,	// (0x0001843c) fep_hwr_write_pane_g3_ParamLimits

0xbc07,	// (0x0001843c) fep_hwr_write_pane_g3

0xbc15,	// (0x0001844a) fep_hwr_write_pane_g4_ParamLimits

0xbc15,	// (0x0001844a) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0001c36b) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0001c36b) fep_hwr_write_pane_g

0xbb11,	// (0x00018346) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbb11,	// (0x00018346) bg_fep_hwr_candidate_pane_g2

0xbc50,	// (0x00018485) cell_hwr_candidate_pane_ParamLimits

0xbc50,	// (0x00018485) cell_hwr_candidate_pane

0xbc8a,	// (0x000184bf) fep_hwr_candidate_pane_g1_ParamLimits

0xbcec,	// (0x00018521) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbcec,	// (0x00018521) bg_popup_fep_shadow_pane_cp2

0xbe47,	// (0x0001867c) fep_vkb_top_pane_g4_ParamLimits

0xbe47,	// (0x0001867c) fep_vkb_top_pane_g4

0xbe8d,	// (0x000186c2) fep_vkb_side_pane_g2_ParamLimits

0xbe8d,	// (0x000186c2) fep_vkb_side_pane_g2

0x9284,	// (0x00015ab9) list_setting_pane_t4_ParamLimits

0x9284,	// (0x00015ab9) list_setting_pane_t4

0x9312,	// (0x00015b47) list_setting_number_pane_t5_ParamLimits

0x9312,	// (0x00015b47) list_setting_number_pane_t5

0x4bdf,	// (0x00011414) list_double_heading_pane_cp2_ParamLimits

0x4bdf,	// (0x00011414) list_double_heading_pane_cp2

0x4ff4,	// (0x00011829) list_double_heading_pane_g1_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_double_heading_pane_g1_cp2

0xc241,	// (0x00018a76) list_double_heading_pane_g2_cp2_ParamLimits

0xc241,	// (0x00018a76) list_double_heading_pane_g2_cp2

0xc255,	// (0x00018a8a) list_double_heading_pane_t1_cp2_ParamLimits

0xc255,	// (0x00018a8a) list_double_heading_pane_t1_cp2

0xc26b,	// (0x00018aa0) list_double_heading_pane_t2_cp2_ParamLimits

0xc26b,	// (0x00018aa0) list_double_heading_pane_t2_cp2

0x34f5,	// (0x0000fd2a) aid_value_unit2

0x9f14,	// (0x00016749) popup_preview_fixed_window

0x39af,	// (0x000101e4) bg_popup_preview_window_pane_cp02

0xc27d,	// (0x00018ab2) list_preview_fixed_pane

0xc2c3,	// (0x00018af8) list_empty_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_empty_pane_fp

0xc2c3,	// (0x00018af8) list_single_cale_day_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_cale_day_pane_fp

0xc2c3,	// (0x00018af8) list_single_graphic_heading_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_graphic_heading_pane_fp

0xc2c3,	// (0x00018af8) list_single_graphic_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_graphic_pane_fp

0xc2c3,	// (0x00018af8) list_single_heading_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_heading_pane_fp

0xc2c3,	// (0x00018af8) list_single_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_pane_fp

0xc2d7,	// (0x00018b0c) list_single_pane_fp_g1_ParamLimits

0xc2d7,	// (0x00018b0c) list_single_pane_fp_g1

0x9243,	// (0x00015a78) list_single_pane_fp_g2_ParamLimits

0x9243,	// (0x00015a78) list_single_pane_fp_g2

0x99e9,	// (0x0001621e) list_single_pane_fp_g3_ParamLimits

0x99e9,	// (0x0001621e) list_single_pane_fp_g3

0xc2e3,	// (0x00018b18) list_single_pane_fp_g4_ParamLimits

0xc2e3,	// (0x00018b18) list_single_pane_fp_g4

0x0003,

0xfb98,	// (0x0001c3cd) list_single_pane_fp_g_ParamLimits

0xfb98,	// (0x0001c3cd) list_single_pane_fp_g

0x99fd,	// (0x00016232) list_single_pane_fp_t1_ParamLimits

0x99fd,	// (0x00016232) list_single_pane_fp_t1

0x9a14,	// (0x00016249) list_single_graphic_pane_fp_g1_ParamLimits

0x9a14,	// (0x00016249) list_single_graphic_pane_fp_g1

0xc2d7,	// (0x00018b0c) list_single_graphic_pane_fp_g2_ParamLimits

0xc2d7,	// (0x00018b0c) list_single_graphic_pane_fp_g2

0x9243,	// (0x00015a78) list_single_graphic_pane_fp_g3_ParamLimits

0x9243,	// (0x00015a78) list_single_graphic_pane_fp_g3

0x99e9,	// (0x0001621e) list_single_graphic_pane_fp_g4_ParamLimits

0x99e9,	// (0x0001621e) list_single_graphic_pane_fp_g4

0xc2e3,	// (0x00018b18) list_single_graphic_pane_fp_g5_ParamLimits

0xc2e3,	// (0x00018b18) list_single_graphic_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c3d6) list_single_graphic_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c3d6) list_single_graphic_pane_fp_g

0x9a20,	// (0x00016255) list_single_graphic_pane_fp_t1_ParamLimits

0x9a20,	// (0x00016255) list_single_graphic_pane_fp_t1

0x9a14,	// (0x00016249) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9a14,	// (0x00016249) list_single_graphic_heading_pane_fp_g1

0xc2d7,	// (0x00018b0c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2d7,	// (0x00018b0c) list_single_graphic_heading_pane_fp_g2

0x9243,	// (0x00015a78) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9243,	// (0x00015a78) list_single_graphic_heading_pane_fp_g3

0x99e9,	// (0x0001621e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x99e9,	// (0x0001621e) list_single_graphic_heading_pane_fp_g4

0xc2e3,	// (0x00018b18) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc2e3,	// (0x00018b18) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c3d6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c3d6) list_single_graphic_heading_pane_fp_g

0x9a36,	// (0x0001626b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9a36,	// (0x0001626b) list_single_graphic_heading_pane_fp_t1

0x9a4c,	// (0x00016281) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9a4c,	// (0x00016281) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0001c3e1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0001c3e1) list_single_graphic_heading_pane_fp_t

0x9a5e,	// (0x00016293) list_single_cale_day_pane_fp_g1_ParamLimits

0x9a5e,	// (0x00016293) list_single_cale_day_pane_fp_g1

0xc2ef,	// (0x00018b24) list_single_cale_day_pane_fp_g2_ParamLimits

0xc2ef,	// (0x00018b24) list_single_cale_day_pane_fp_g2

0x9a96,	// (0x000162cb) list_single_cale_day_pane_fp_g3_ParamLimits

0x9a96,	// (0x000162cb) list_single_cale_day_pane_fp_g3

0x9abe,	// (0x000162f3) list_single_cale_day_pane_fp_g4_ParamLimits

0x9abe,	// (0x000162f3) list_single_cale_day_pane_fp_g4

0x9ae2,	// (0x00016317) list_single_cale_day_pane_fp_g5_ParamLimits

0x9ae2,	// (0x00016317) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb1,	// (0x0001c3e6) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001c3e6) list_single_cale_day_pane_fp_g

0x9b06,	// (0x0001633b) list_single_cale_day_pane_fp_t1_ParamLimits

0x9b06,	// (0x0001633b) list_single_cale_day_pane_fp_t1

0x9b2c,	// (0x00016361) list_single_cale_day_pane_fp_t2_ParamLimits

0x9b2c,	// (0x00016361) list_single_cale_day_pane_fp_t2

0x9b45,	// (0x0001637a) list_single_cale_day_pane_fp_t3_ParamLimits

0x9b45,	// (0x0001637a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbc,	// (0x0001c3f1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c3f1) list_single_cale_day_pane_fp_t

0xc2d7,	// (0x00018b0c) list_empty_pane_fp_g1_ParamLimits

0xc2d7,	// (0x00018b0c) list_empty_pane_fp_g1

0x9b5e,	// (0x00016393) list_empty_pane_fp_t1

0x9b6c,	// (0x000163a1) list_empty_pane_fp_t2

0x0001,

0xfbc3,	// (0x0001c3f8) list_empty_pane_fp_t

0xc2d7,	// (0x00018b0c) list_single_heading_pane_fp_g1_ParamLimits

0xc2d7,	// (0x00018b0c) list_single_heading_pane_fp_g1

0x9243,	// (0x00015a78) list_single_heading_pane_fp_g2_ParamLimits

0x9243,	// (0x00015a78) list_single_heading_pane_fp_g2

0x99e9,	// (0x0001621e) list_single_heading_pane_fp_g3_ParamLimits

0x99e9,	// (0x0001621e) list_single_heading_pane_fp_g3

0x0002,

0xfbc8,	// (0x0001c3fd) list_single_heading_pane_fp_g_ParamLimits

0xfbc8,	// (0x0001c3fd) list_single_heading_pane_fp_g

0x9b7a,	// (0x000163af) list_single_heading_pane_fp_t1_ParamLimits

0x9b7a,	// (0x000163af) list_single_heading_pane_fp_t1

0x9b8c,	// (0x000163c1) list_single_heading_pane_fp_t2_ParamLimits

0x9b8c,	// (0x000163c1) list_single_heading_pane_fp_t2

0x0001,

0xfbcf,	// (0x0001c404) list_single_heading_pane_fp_t_ParamLimits

0xfbcf,	// (0x0001c404) list_single_heading_pane_fp_t

0x474b,	// (0x00010f80) aid_size_cell_fast

0x38ea,	// (0x0001011f) soft_indicator_pane_cp1_t1

0x4788,	// (0x00010fbd) cell_app_pane_cp2_ParamLimits

0x4788,	// (0x00010fbd) cell_app_pane_cp2

0xba84,	// (0x000182b9) fep_hwr_candidate_drop_down_list_pane

0xbca4,	// (0x000184d9) fep_hwr_candidate_pane_g3_ParamLimits

0xbca4,	// (0x000184d9) fep_hwr_candidate_pane_g3

0xbcb1,	// (0x000184e6) fep_hwr_candidate_pane_g4_ParamLimits

0xbcb1,	// (0x000184e6) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001c378) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0001c378) fep_hwr_candidate_pane_g

0xbd60,	// (0x00018595) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbd60,	// (0x00018595) fep_vkb_candidate_drop_down_list_pane

0xc12f,	// (0x00018964) fep_vkb_candidate_pane_g3

0xc137,	// (0x0001896c) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001c3a5) fep_vkb_candidate_pane_g

0xbe47,	// (0x0001867c) cell_hwr_candidate_pane_g1_ParamLimits

0xc19e,	// (0x000189d3) cell_hwr_candidate_pane_g3_ParamLimits

0xc19e,	// (0x000189d3) cell_hwr_candidate_pane_g3

0xc1bf,	// (0x000189f4) cell_hwr_candidate_pane_g4_ParamLimits

0xc1bf,	// (0x000189f4) cell_hwr_candidate_pane_g4

0x0002,

0xfb8a,	// (0x0001c3bf) cell_hwr_candidate_pane_g_ParamLimits

0xfb8a,	// (0x0001c3bf) cell_hwr_candidate_pane_g

0xc1fd,	// (0x00018a32) cell_vkb_candidate_pane_g3_ParamLimits

0xc1fd,	// (0x00018a32) cell_vkb_candidate_pane_g3

0xc218,	// (0x00018a4d) cell_vkb_candidate_pane_g4_ParamLimits

0xc218,	// (0x00018a4d) cell_vkb_candidate_pane_g4

0xc2fb,	// (0x00018b30) cell_app_pane_cp2_g1_ParamLimits

0xc2fb,	// (0x00018b30) cell_app_pane_cp2_g1

0xc319,	// (0x00018b4e) cell_app_pane_cp2_g2_ParamLimits

0xc319,	// (0x00018b4e) cell_app_pane_cp2_g2

0x0001,

0xfbd4,	// (0x0001c409) cell_app_pane_cp2_g_ParamLimits

0xfbd4,	// (0x0001c409) cell_app_pane_cp2_g

0xc325,	// (0x00018b5a) cell_app_pane_cp2_t1_ParamLimits

0xc325,	// (0x00018b5a) cell_app_pane_cp2_t1

0x43f2,	// (0x00010c27) grid_highlight_pane_cp1_ParamLimits

0x43f2,	// (0x00010c27) grid_highlight_pane_cp1

0xc337,	// (0x00018b6c) cell_hwr_candidate_pane_cp1_ParamLimits

0xc337,	// (0x00018b6c) cell_hwr_candidate_pane_cp1

0xbe47,	// (0x0001867c) fep_hwr_candidate_drop_down_list_pane_g1

0xc355,	// (0x00018b8a) fep_hwr_candidate_drop_down_list_pane_g2

0xc362,	// (0x00018b97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001c40e) fep_hwr_candidate_drop_down_list_pane_g

0xc36f,	// (0x00018ba4) fep_hwr_candidate_drop_down_list_scroll_pane

0xc378,	// (0x00018bad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc378,	// (0x00018bad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc385,	// (0x00018bba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc385,	// (0x00018bba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc392,	// (0x00018bc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc392,	// (0x00018bc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc1fd,	// (0x00018a32) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc1fd,	// (0x00018a32) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc218,	// (0x00018a4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc218,	// (0x00018a4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc39f,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc39f,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc3ba,	// (0x00018bef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3ba,	// (0x00018bef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc3d5,	// (0x00018c0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3d5,	// (0x00018c0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0001c415) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0001c415) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc3f0,	// (0x00018c25) cell_vkb_candidate_pane_cp1_ParamLimits

0xc3f0,	// (0x00018c25) cell_vkb_candidate_pane_cp1

0xbe47,	// (0x0001867c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) fep_vkb_candidate_drop_down_list_pane_g1

0xc355,	// (0x00018b8a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc355,	// (0x00018b8a) fep_vkb_candidate_drop_down_list_pane_g2

0xc362,	// (0x00018b97) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc362,	// (0x00018b97) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001c40e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0001c40e) fep_vkb_candidate_drop_down_list_pane_g

0xc413,	// (0x00018c48) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc413,	// (0x00018c48) fep_vkb_candidate_drop_down_list_scroll_pane

0xc420,	// (0x00018c55) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc420,	// (0x00018c55) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc42d,	// (0x00018c62) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc42d,	// (0x00018c62) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc439,	// (0x00018c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc439,	// (0x00018c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc19e,	// (0x000189d3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc19e,	// (0x000189d3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc1bf,	// (0x000189f4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1bf,	// (0x000189f4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc445,	// (0x00018c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc445,	// (0x00018c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc466,	// (0x00018c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc466,	// (0x00018c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc487,	// (0x00018cbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc487,	// (0x00018cbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0001c426) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0001c426) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x3606,	// (0x0000fe3b) title_pane_g1_ParamLimits

0x3613,	// (0x0000fe48) title_pane_g2_ParamLimits

0xf592,	// (0x0001bdc7) title_pane_g_ParamLimits

0x4ba5,	// (0x000113da) aid_call2_pane

0x4b9d,	// (0x000113d2) aid_call_pane

0x4bad,	// (0x000113e2) popup_clock_analogue_window_g1

0x4bad,	// (0x000113e2) popup_clock_analogue_window_g2

0xa1c2,	// (0x000169f7) popup_clock_analogue_window_g3

0xa1cb,	// (0x00016a00) popup_clock_analogue_window_g4

0x3515,	// (0x0000fd4a) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001bf6c) popup_clock_analogue_window_g

0xa1d3,	// (0x00016a08) popup_clock_analogue_window_t1

0xa1e1,	// (0x00016a16) clock_digital_number_pane_ParamLimits

0xa1e1,	// (0x00016a16) clock_digital_number_pane

0xa1ed,	// (0x00016a22) clock_digital_number_pane_cp02_ParamLimits

0xa1ed,	// (0x00016a22) clock_digital_number_pane_cp02

0xa1f9,	// (0x00016a2e) clock_digital_number_pane_cp03_ParamLimits

0xa1f9,	// (0x00016a2e) clock_digital_number_pane_cp03

0xa205,	// (0x00016a3a) clock_digital_number_pane_cp04_ParamLimits

0xa205,	// (0x00016a3a) clock_digital_number_pane_cp04

0xa211,	// (0x00016a46) clock_digital_separator_pane_ParamLimits

0xa211,	// (0x00016a46) clock_digital_separator_pane

0xa21d,	// (0x00016a52) popup_clock_digital_window_t1_ParamLimits

0xa21d,	// (0x00016a52) popup_clock_digital_window_t1

0x3515,	// (0x0000fd4a) clock_digital_number_pane_g1

0x3515,	// (0x0000fd4a) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001bf77) clock_digital_number_pane_g

0x3515,	// (0x0000fd4a) clock_digital_separator_pane_g1

0x3515,	// (0x0000fd4a) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001bf77) clock_digital_separator_pane_g

0xa955,	// (0x0001718a) aid_fill_nsta_ParamLimits

0xaa0e,	// (0x00017243) indicator_nsta_pane_ParamLimits

0x6865,	// (0x0001309a) popup_clock_analogue_window

0x6865,	// (0x0001309a) popup_clock_digital_window

0x36dc,	// (0x0000ff11) grid_indicator_nsta_pane_ParamLimits

0x84d6,	// (0x00014d0b) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0001c305) clock_nsta_pane_t

0xa186,	// (0x000169bb) aid_size_max_handle

0xa190,	// (0x000169c5) aid_size_min_handle

0x517f,	// (0x000119b4) editor_scroll_pane

0xc4a2,	// (0x00018cd7) ex_editor_pane

0x46b9,	// (0x00010eee) scroll_pane_cp13

0x3e75,	// (0x000106aa) scroll_pane_cp14

0x4bd7,	// (0x0001140c) scroll_pane_cp36

0x4bef,	// (0x00011424) list_single_graphic_hl_pane_cp2_ParamLimits

0x4bef,	// (0x00011424) list_single_graphic_hl_pane_cp2

0xb29b,	// (0x00017ad0) list_single_graphic_hl_pane_ParamLimits

0xb29b,	// (0x00017ad0) list_single_graphic_hl_pane

0x9ba2,	// (0x000163d7) aid_size_min_hl_cp1

0xc4aa,	// (0x00018cdf) list_highlight_pane_cp34_ParamLimits

0xc4aa,	// (0x00018cdf) list_highlight_pane_cp34

0xc4bb,	// (0x00018cf0) list_single_graphic_hl_pane_g1_ParamLimits

0xc4bb,	// (0x00018cf0) list_single_graphic_hl_pane_g1

0x9bab,	// (0x000163e0) list_single_graphic_hl_pane_g2_ParamLimits

0x9bab,	// (0x000163e0) list_single_graphic_hl_pane_g2

0x9bab,	// (0x000163e0) list_single_graphic_hl_pane_g3_ParamLimits

0x9bab,	// (0x000163e0) list_single_graphic_hl_pane_g3

0x960a,	// (0x00015e3f) list_single_graphic_hl_pane_g4_ParamLimits

0x960a,	// (0x00015e3f) list_single_graphic_hl_pane_g4

0x9bb7,	// (0x000163ec) list_single_graphic_hl_pane_g5_ParamLimits

0x9bb7,	// (0x000163ec) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0001c437) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0001c437) list_single_graphic_hl_pane_g

0x9bcb,	// (0x00016400) list_single_graphic_hl_pane_t1_ParamLimits

0x9bcb,	// (0x00016400) list_single_graphic_hl_pane_t1

0xc4c8,	// (0x00018cfd) aid_size_min_hl_cp2

0xc4d1,	// (0x00018d06) list_highlight_pane_cp34_cp2_ParamLimits

0xc4d1,	// (0x00018d06) list_highlight_pane_cp34_cp2

0xc4bb,	// (0x00018cf0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc4bb,	// (0x00018cf0) list_single_graphic_hl_pane_g1_cp2

0xc4de,	// (0x00018d13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc4de,	// (0x00018d13) list_single_graphic_hl_pane_g2_cp2

0xc4ea,	// (0x00018d1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc4ea,	// (0x00018d1f) list_single_graphic_hl_pane_g3_cp2

0x4ff4,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4ff4,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2

0xc241,	// (0x00018a76) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc241,	// (0x00018a76) list_single_graphic_hl_pane_g5_cp2

0xa4a8,	// (0x00016cdd) control_pane_g4_ParamLimits

0xa4a8,	// (0x00016cdd) control_pane_g4

0x664e,	// (0x00012e83) bg_popup_sub_pane_cp10_ParamLimits

0xba11,	// (0x00018246) list_choice_list_pane_ParamLimits

0xba20,	// (0x00018255) scroll_pane_cp23

0x39af,	// (0x000101e4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc27d,	// (0x00018ab2) list_preview_fixed_pane_ParamLimits

0xc293,	// (0x00018ac8) list_preview_fixed_pane_cp_ParamLimits

0xc293,	// (0x00018ac8) list_preview_fixed_pane_cp

0xc29f,	// (0x00018ad4) popup_preview_fixed_window_g1_ParamLimits

0xc29f,	// (0x00018ad4) popup_preview_fixed_window_g1

0xc2ab,	// (0x00018ae0) popup_preview_fixed_window_g2_ParamLimits

0xc2ab,	// (0x00018ae0) popup_preview_fixed_window_g2

0x0002,

0xfb91,	// (0x0001c3c6) popup_preview_fixed_window_g_ParamLimits

0xfb91,	// (0x0001c3c6) popup_preview_fixed_window_g

0xa116,	// (0x0001694b) aid_navi_side_left_pane_ParamLimits

0xa126,	// (0x0001695b) aid_navi_side_right_pane_ParamLimits

0xa135,	// (0x0001696a) navi_icon_pane_stacon_ParamLimits

0xa145,	// (0x0001697a) navi_navi_pane_stacon_ParamLimits

0xa135,	// (0x0001696a) navi_text_pane_stacon_ParamLimits

0x350b,	// (0x0000fd40) main_text_info_pane

0xc50c,	// (0x00018d41) listscroll_text_info_pane

0xc514,	// (0x00018d49) list_text_info_pane_ParamLimits

0xc514,	// (0x00018d49) list_text_info_pane

0xc523,	// (0x00018d58) scroll_pane_cp24_ParamLimits

0xc523,	// (0x00018d58) scroll_pane_cp24

0xc541,	// (0x00018d76) list_text_info_pane_t1_ParamLimits

0xc541,	// (0x00018d76) list_text_info_pane_t1

0xa5ca,	// (0x00016dff) popup_fast_swap2_window_ParamLimits

0xa5ca,	// (0x00016dff) popup_fast_swap2_window

0xc55e,	// (0x00018d93) aid_size_cell_fast2

0x350b,	// (0x0000fd40) bg_popup_window_pane_cp17

0x6d2a,	// (0x0001355f) heading_pane_cp2

0x3bf7,	// (0x0001042c) listscroll_fast2_pane

0xc568,	// (0x00018d9d) grid_fast2_pane

0xc570,	// (0x00018da5) listscroll_fast2_pane_g1

0xc578,	// (0x00018dad) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0001c442) listscroll_fast2_pane_g

0x46b9,	// (0x00010eee) scroll_pane_cp26

0xc580,	// (0x00018db5) cell_fast2_pane_ParamLimits

0xc580,	// (0x00018db5) cell_fast2_pane

0xc596,	// (0x00018dcb) cell_fast2_pane_g1

0xc59f,	// (0x00018dd4) cell_fast2_pane_g2

0xc5a8,	// (0x00018ddd) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0001c447) cell_fast2_pane_g

0x3cce,	// (0x00010503) grid_highlight_pane_cp9

0x3ce3,	// (0x00010518) main_eswt_pane_ParamLimits

0x3ce3,	// (0x00010518) main_eswt_pane

0xc538,	// (0x00018d6d) list_single_text_info_pane

0xc5b0,	// (0x00018de5) eswt_ctrl_button_pane

0xc5b0,	// (0x00018de5) eswt_ctrl_canvas_pane

0xc5b8,	// (0x00018ded) eswt_ctrl_combo_pane

0xc5b0,	// (0x00018de5) eswt_ctrl_default_pane

0xc5b0,	// (0x00018de5) eswt_ctrl_label_pane

0xc5c0,	// (0x00018df5) eswt_ctrl_wait_pane

0xc5c8,	// (0x00018dfd) eswt_shell_pane

0x350b,	// (0x0000fd40) listscroll_eswt_app_pane

0xc5e4,	// (0x00018e19) popup_eswt_tasktip_window_ParamLimits

0xc5e4,	// (0x00018e19) popup_eswt_tasktip_window

0x6a7c,	// (0x000132b1) bg_popup_window_pane_cp18

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_ParamLimits

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1

0xc602,	// (0x00018e37) eswt_control_pane_g2_ParamLimits

0xc602,	// (0x00018e37) eswt_control_pane_g2

0xc60f,	// (0x00018e44) eswt_control_pane_g3_ParamLimits

0xc60f,	// (0x00018e44) eswt_control_pane_g3

0xc61c,	// (0x00018e51) eswt_control_pane_g4_ParamLimits

0xc61c,	// (0x00018e51) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0001c44e) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0001c44e) eswt_control_pane_g

0x43f2,	// (0x00010c27) bg_button_pane_ParamLimits

0x43f2,	// (0x00010c27) bg_button_pane

0x3ce3,	// (0x00010518) common_borders_pane_copy2_ParamLimits

0x3ce3,	// (0x00010518) common_borders_pane_copy2

0xc629,	// (0x00018e5e) control_button_pane_g1_ParamLimits

0xc629,	// (0x00018e5e) control_button_pane_g1

0xc635,	// (0x00018e6a) control_button_pane_g2_ParamLimits

0xc635,	// (0x00018e6a) control_button_pane_g2

0xc641,	// (0x00018e76) control_button_pane_g3_ParamLimits

0xc641,	// (0x00018e76) control_button_pane_g3

0x0002,

0xfc22,	// (0x0001c457) control_button_pane_g_ParamLimits

0xfc22,	// (0x0001c457) control_button_pane_g

0xc655,	// (0x00018e8a) control_button_pane_t1

0xc663,	// (0x00018e98) control_button_pane_t2

0x0001,

0xfc29,	// (0x0001c45e) control_button_pane_t

0x6966,	// (0x0001319b) bg_button_pane_g1

0x6976,	// (0x000131ab) bg_button_pane_g2

0x696e,	// (0x000131a3) bg_button_pane_g3

0x6986,	// (0x000131bb) bg_button_pane_g4

0x697e,	// (0x000131b3) bg_button_pane_g5

0x698e,	// (0x000131c3) bg_button_pane_g6

0x6996,	// (0x000131cb) bg_button_pane_g7

0x69a6,	// (0x000131db) bg_button_pane_g8

0x699e,	// (0x000131d3) bg_button_pane_g9

0x0008,

0xf893,	// (0x0001c0c8) bg_button_pane_g

0xb9cc,	// (0x00018201) common_borders_pane_ParamLimits

0xb9cc,	// (0x00018201) common_borders_pane

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy1_ParamLimits

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy1

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy1_ParamLimits

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy1

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy1_ParamLimits

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy1

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy1_ParamLimits

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy1

0xba07,	// (0x0001823c) bg_eswt_ctrl_canvas_pane_g1

0xb9cc,	// (0x00018201) common_borders_pane_cp2_ParamLimits

0xb9cc,	// (0x00018201) common_borders_pane_cp2

0xb9cc,	// (0x00018201) common_borders_pane_cp3_ParamLimits

0xb9cc,	// (0x00018201) common_borders_pane_cp3

0xc671,	// (0x00018ea6) separator_horizontal_pane

0x49ea,	// (0x0001121f) separator_vertical_pane

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy2_ParamLimits

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy2

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy2_ParamLimits

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy2

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy2_ParamLimits

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy2

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy2_ParamLimits

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy2

0x350b,	// (0x0000fd40) common_borders_pane_cp4

0xc679,	// (0x00018eae) separator_horizontal_pane_g1

0xc682,	// (0x00018eb7) separator_horizontal_pane_g2

0xc68b,	// (0x00018ec0) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0001c463) separator_horizontal_pane_g

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy3_ParamLimits

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy3

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy3_ParamLimits

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy3

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy3_ParamLimits

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy3

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy3_ParamLimits

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy3

0x350b,	// (0x0000fd40) common_borders_pane_cp5

0xc694,	// (0x00018ec9) separator_vertical_pane_g1

0xc69d,	// (0x00018ed2) separator_vertical_pane_g2

0xc6a6,	// (0x00018edb) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0001c46a) separator_vertical_pane_g

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy4_ParamLimits

0xc5f5,	// (0x00018e2a) eswt_control_pane_g1_copy4

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy4_ParamLimits

0xc602,	// (0x00018e37) eswt_control_pane_g2_copy4

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy4_ParamLimits

0xc60f,	// (0x00018e44) eswt_control_pane_g3_copy4

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy4_ParamLimits

0xc61c,	// (0x00018e51) eswt_control_pane_g4_copy4

0xc6af,	// (0x00018ee4) eswt_ctrl_combo_button_pane

0xc6b7,	// (0x00018eec) eswt_ctrl_input_pane

0xc6bf,	// (0x00018ef4) popup_choice_list_window_cp70

0xc6c7,	// (0x00018efc) eswt_ctrl_input_pane_t1

0x350b,	// (0x0000fd40) input_focus_pane_cp70

0xb9cc,	// (0x00018201) bg_button_pane_cp70_ParamLimits

0xb9cc,	// (0x00018201) bg_button_pane_cp70

0xc6d5,	// (0x00018f0a) eswt_ctrl_combo_button_pane_g1

0xc6dd,	// (0x00018f12) wait_bar_pane_cp70

0x6a7c,	// (0x000132b1) bg_popup_window_pane_cp70_ParamLimits

0x6a7c,	// (0x000132b1) bg_popup_window_pane_cp70

0xc6e5,	// (0x00018f1a) popup_eswt_tasktip_window_t1

0xc6fb,	// (0x00018f30) wait_bar_pane_cp71_ParamLimits

0xc6fb,	// (0x00018f30) wait_bar_pane_cp71

0xc707,	// (0x00018f3c) grid_eswt_app_pane

0x49e1,	// (0x00011216) scroll_pane_cp70

0xc710,	// (0x00018f45) cell_eswt_app_pane_ParamLimits

0xc710,	// (0x00018f45) cell_eswt_app_pane

0xc738,	// (0x00018f6d) cell_eswt_app_pane_g1_ParamLimits

0xc738,	// (0x00018f6d) cell_eswt_app_pane_g1

0xc767,	// (0x00018f9c) cell_eswt_app_pane_g2_ParamLimits

0xc767,	// (0x00018f9c) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0001c471) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0001c471) cell_eswt_app_pane_g

0xc790,	// (0x00018fc5) cell_eswt_app_pane_t1_ParamLimits

0xc790,	// (0x00018fc5) cell_eswt_app_pane_t1

0xc7c2,	// (0x00018ff7) grid_highlight_pane_cp70_ParamLimits

0xc7c2,	// (0x00018ff7) grid_highlight_pane_cp70

0x3e89,	// (0x000106be) set_content_pane_g1

0x541b,	// (0x00011c50) status_small_volume_pane

0xc7ce,	// (0x00019003) status_small_volume_pane_g1

0xc7d6,	// (0x0001900b) volume_small2_pane

0xc7df,	// (0x00019014) volume_small2_pane_g1

0xc7e8,	// (0x0001901d) volume_small2_pane_g2

0xc7f1,	// (0x00019026) volume_small2_pane_g3

0xc7fa,	// (0x0001902f) volume_small2_pane_g4

0xc803,	// (0x00019038) volume_small2_pane_g5

0xc80c,	// (0x00019041) volume_small2_pane_g6

0xc815,	// (0x0001904a) volume_small2_pane_g7

0xc81e,	// (0x00019053) volume_small2_pane_g8

0xc827,	// (0x0001905c) volume_small2_pane_g9

0xc830,	// (0x00019065) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0001c476) volume_small2_pane_g

0xbf89,	// (0x000187be) fep_vkb_top_text_pane_g1_ParamLimits

0xbfa4,	// (0x000187d9) fep_vkb_top_text_pane_t1_ParamLimits

0xc2b7,	// (0x00018aec) popup_preview_fixed_window_g3_ParamLimits

0xc2b7,	// (0x00018aec) popup_preview_fixed_window_g3

0xa8fe,	// (0x00017133) popup_toolbar_trans_pane

0xb139,	// (0x0001796e) aid_height_set_list_ParamLimits

0x7ad3,	// (0x00014308) aid_size_parent_ParamLimits

0x664e,	// (0x00012e83) list_highlight_pane_cp2_ParamLimits

0x3e89,	// (0x000106be) set_content_pane_g1_ParamLimits

0xb2b0,	// (0x00017ae5) list_single_image_pane_ParamLimits

0xb2b0,	// (0x00017ae5) list_single_image_pane

0xc839,	// (0x0001906e) aid_size_cell_image_ParamLimits

0xc839,	// (0x0001906e) aid_size_cell_image

0xc846,	// (0x0001907b) grid_single_image_pane_ParamLimits

0xc846,	// (0x0001907b) grid_single_image_pane

0x3e89,	// (0x000106be) list_single_image_pane_g1_ParamLimits

0x3e89,	// (0x000106be) list_single_image_pane_g1

0x4418,	// (0x00010c4d) list_single_image_pane_g2_ParamLimits

0x4418,	// (0x00010c4d) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0001c48b) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0001c48b) list_single_image_pane_g

0x7c09,	// (0x0001443e) list_single_image_pane_t1_ParamLimits

0x7c09,	// (0x0001443e) list_single_image_pane_t1

0xc852,	// (0x00019087) cell_image_list_pane_ParamLimits

0xc852,	// (0x00019087) cell_image_list_pane

0xc865,	// (0x0001909a) cell_image_list_pane_g1

0xc86e,	// (0x000190a3) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0001c490) cell_image_list_pane_g

0xc877,	// (0x000190ac) aid_size_cell_tb_trans_pane

0x43f2,	// (0x00010c27) bg_tb_trans_pane

0xc889,	// (0x000190be) grid_tb_trans_pane

0x6966,	// (0x0001319b) bg_tb_trans_pane_g1

0x6976,	// (0x000131ab) bg_tb_trans_pane_g2

0x696e,	// (0x000131a3) bg_tb_trans_pane_g3

0x6986,	// (0x000131bb) bg_tb_trans_pane_g4

0x697e,	// (0x000131b3) bg_tb_trans_pane_g5

0x69a6,	// (0x000131db) bg_tb_trans_pane_g6

0x699e,	// (0x000131d3) bg_tb_trans_pane_g7

0x698e,	// (0x000131c3) bg_tb_trans_pane_g8

0x6996,	// (0x000131cb) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0001c495) bg_tb_trans_pane_g

0xc89d,	// (0x000190d2) cell_toolbar_trans_pane_ParamLimits

0xc89d,	// (0x000190d2) cell_toolbar_trans_pane

0xba07,	// (0x0001823c) cell_toolbar_trans_pane_g1

0xb68c,	// (0x00017ec1) list_form2_midp_pane_t1

0xb69a,	// (0x00017ecf) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0001c33e) list_form2_midp_pane_t

0xb6a8,	// (0x00017edd) scroll_pane_cp51_ParamLimits

0xb861,	// (0x00018096) form2_midp_wait_pane_g1

0xb86a,	// (0x0001809f) form2_midp_wait_pane_g2

0xb873,	// (0x000180a8) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0001c353) form2_midp_wait_pane_g

0x36dc,	// (0x0000ff11) list_highlight_pane_cp21_ParamLimits

0xb893,	// (0x000180c8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8a2,	// (0x000180d7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9737,	// (0x00015f6c) list_single_2graphic_im_pane_ParamLimits

0x9737,	// (0x00015f6c) list_single_2graphic_im_pane

0xc8c3,	// (0x000190f8) list_single_2graphic_im_pane_g1_ParamLimits

0xc8c3,	// (0x000190f8) list_single_2graphic_im_pane_g1

0xc8d4,	// (0x00019109) list_single_2graphic_im_pane_g2_ParamLimits

0xc8d4,	// (0x00019109) list_single_2graphic_im_pane_g2

0xc8e0,	// (0x00019115) list_single_2graphic_im_pane_g3_ParamLimits

0xc8e0,	// (0x00019115) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0001c4a8) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0001c4a8) list_single_2graphic_im_pane_g

0xc900,	// (0x00019135) list_single_2graphic_im_pane_t1_ParamLimits

0xc900,	// (0x00019135) list_single_2graphic_im_pane_t1

0xc2c3,	// (0x00018af8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2c3,	// (0x00018af8) list_single_graphic_2heading_pane_fp

0x9a14,	// (0x00016249) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9a14,	// (0x00016249) list_single_graphic_2heading_pane_fp_g1

0xc2d7,	// (0x00018b0c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2d7,	// (0x00018b0c) list_single_graphic_2heading_pane_fp_g2

0x9243,	// (0x00015a78) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9243,	// (0x00015a78) list_single_graphic_2heading_pane_fp_g3

0x99e9,	// (0x0001621e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x99e9,	// (0x0001621e) list_single_graphic_2heading_pane_fp_g4

0xc2e3,	// (0x00018b18) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc2e3,	// (0x00018b18) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c3d6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c3d6) list_single_graphic_2heading_pane_fp_g

0x9be1,	// (0x00016416) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9be1,	// (0x00016416) list_single_graphic_2heading_pane_fp_t1

0x9a4c,	// (0x00016281) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9a4c,	// (0x00016281) list_single_graphic_2heading_pane_fp_t2

0x9bf7,	// (0x0001642c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9bf7,	// (0x0001642c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0001c4b1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0001c4b1) list_single_graphic_2heading_pane_fp_t

0xbc2a,	// (0x0001845f) fep_hwr_write_pane_g5_ParamLimits

0xbc2a,	// (0x0001845f) fep_hwr_write_pane_g5

0xbc36,	// (0x0001846b) fep_hwr_write_pane_g6_ParamLimits

0xbc36,	// (0x0001846b) fep_hwr_write_pane_g6

0xc5c8,	// (0x00018dfd) eswt_shell_pane_ParamLimits

0x6a7c,	// (0x000132b1) bg_popup_window_pane_cp18_ParamLimits

0x7a00,	// (0x00014235) heading_pane_cp70

0xc6e5,	// (0x00018f1a) popup_eswt_tasktip_window_t1_ParamLimits

0xa98b,	// (0x000171c0) aid_touch_tab_arrow_left

0xa997,	// (0x000171cc) aid_touch_tab_arrow_right

0x3624,	// (0x0000fe59) title_pane_g3_ParamLimits

0x3624,	// (0x0000fe59) title_pane_g3

0x42f0,	// (0x00010b25) set_value_pane_g1

0xa8fe,	// (0x00017133) popup_toolbar_trans_pane_ParamLimits

0xc877,	// (0x000190ac) aid_size_cell_tb_trans_pane_ParamLimits

0x43f2,	// (0x00010c27) bg_tb_trans_pane_ParamLimits

0xc889,	// (0x000190be) grid_tb_trans_pane_ParamLimits

0x39af,	// (0x000101e4) cont_note_pane_ParamLimits

0x39af,	// (0x000101e4) cont_note_pane

0x3ce3,	// (0x00010518) cont_snote2_single_text_pane_ParamLimits

0x3ce3,	// (0x00010518) cont_snote2_single_text_pane

0x3ce3,	// (0x00010518) cont_snote2_single_graphic_pane_ParamLimits

0x3ce3,	// (0x00010518) cont_snote2_single_graphic_pane

0x6f0f,	// (0x00013744) cont_note_wait_pane_ParamLimits

0x6f0f,	// (0x00013744) cont_note_wait_pane

0x6f0f,	// (0x00013744) cont_note_image_pane_ParamLimits

0x6f0f,	// (0x00013744) cont_note_image_pane

0xc931,	// (0x00019166) popup_note2_window_g1_ParamLimits

0xc931,	// (0x00019166) popup_note2_window_g1

0xc962,	// (0x00019197) popup_note2_window_t1_ParamLimits

0xc962,	// (0x00019197) popup_note2_window_t1

0xc9a7,	// (0x000191dc) popup_note2_window_t2_ParamLimits

0xc9a7,	// (0x000191dc) popup_note2_window_t2

0xc9ec,	// (0x00019221) popup_note2_window_t3_ParamLimits

0xc9ec,	// (0x00019221) popup_note2_window_t3

0xca31,	// (0x00019266) popup_note2_window_t4_ParamLimits

0xca31,	// (0x00019266) popup_note2_window_t4

0x3a33,	// (0x00010268) popup_note2_window_t5_ParamLimits

0x3a33,	// (0x00010268) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0001c4bd) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0001c4bd) popup_note2_window_t

0xca60,	// (0x00019295) popup_note2_image_window_g1_ParamLimits

0xca60,	// (0x00019295) popup_note2_image_window_g1

0xca6c,	// (0x000192a1) popup_note2_image_window_g2_ParamLimits

0xca6c,	// (0x000192a1) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0001c4c8) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0001c4c8) popup_note2_image_window_g

0xca7e,	// (0x000192b3) popup_note2_image_window_t1_ParamLimits

0xca7e,	// (0x000192b3) popup_note2_image_window_t1

0xca96,	// (0x000192cb) popup_note2_image_window_t2_ParamLimits

0xca96,	// (0x000192cb) popup_note2_image_window_t2

0xcaae,	// (0x000192e3) popup_note2_image_window_t3_ParamLimits

0xcaae,	// (0x000192e3) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0001c4cd) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0001c4cd) popup_note2_image_window_t

0x6f1d,	// (0x00013752) popup_note2_wait_window_g1_ParamLimits

0x6f1d,	// (0x00013752) popup_note2_wait_window_g1

0x6f29,	// (0x0001375e) popup_note2_wait_window_g2_ParamLimits

0x6f29,	// (0x0001375e) popup_note2_wait_window_g2

0x6f35,	// (0x0001376a) popup_note2_wait_window_g3_ParamLimits

0x6f35,	// (0x0001376a) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x0001c0aa) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x0001c0aa) popup_note2_wait_window_g

0xcaca,	// (0x000192ff) popup_note2_wait_window_t1_ParamLimits

0xcaca,	// (0x000192ff) popup_note2_wait_window_t1

0xcae8,	// (0x0001931d) popup_note2_wait_window_t2_ParamLimits

0xcae8,	// (0x0001931d) popup_note2_wait_window_t2

0xcb06,	// (0x0001933b) popup_note2_wait_window_t3_ParamLimits

0xcb06,	// (0x0001933b) popup_note2_wait_window_t3

0xcb18,	// (0x0001934d) popup_note2_wait_window_t4_ParamLimits

0xcb18,	// (0x0001934d) popup_note2_wait_window_t4

0x0003,

0xfc9f,	// (0x0001c4d4) popup_note2_wait_window_t_ParamLimits

0xfc9f,	// (0x0001c4d4) popup_note2_wait_window_t

0xcb2a,	// (0x0001935f) wait_bar2_pane_ParamLimits

0xcb2a,	// (0x0001935f) wait_bar2_pane

0xcb42,	// (0x00019377) popup_snote2_single_text_window_g1_ParamLimits

0xcb42,	// (0x00019377) popup_snote2_single_text_window_g1

0xcb6a,	// (0x0001939f) popup_snote2_single_text_window_t1_ParamLimits

0xcb6a,	// (0x0001939f) popup_snote2_single_text_window_t1

0xcbb6,	// (0x000193eb) popup_snote2_single_text_window_t2_ParamLimits

0xcbb6,	// (0x000193eb) popup_snote2_single_text_window_t2

0xcc02,	// (0x00019437) popup_snote2_single_text_window_t3_ParamLimits

0xcc02,	// (0x00019437) popup_snote2_single_text_window_t3

0xcc43,	// (0x00019478) popup_snote2_single_text_window_t4_ParamLimits

0xcc43,	// (0x00019478) popup_snote2_single_text_window_t4

0xcc79,	// (0x000194ae) popup_snote2_single_text_window_t5_ParamLimits

0xcc79,	// (0x000194ae) popup_snote2_single_text_window_t5

0x0004,

0xfca8,	// (0x0001c4dd) popup_snote2_single_text_window_t_ParamLimits

0xfca8,	// (0x0001c4dd) popup_snote2_single_text_window_t

0xcca4,	// (0x000194d9) popup_snote2_single_graphic_window_g1_ParamLimits

0xcca4,	// (0x000194d9) popup_snote2_single_graphic_window_g1

0xcccc,	// (0x00019501) popup_snote2_single_graphic_window_g2_ParamLimits

0xcccc,	// (0x00019501) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb3,	// (0x0001c4e8) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb3,	// (0x0001c4e8) popup_snote2_single_graphic_window_g

0xccf4,	// (0x00019529) popup_snote2_single_graphic_window_t1_ParamLimits

0xccf4,	// (0x00019529) popup_snote2_single_graphic_window_t1

0xcd40,	// (0x00019575) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd40,	// (0x00019575) popup_snote2_single_graphic_window_t2

0xcc02,	// (0x00019437) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc02,	// (0x00019437) popup_snote2_single_graphic_window_t3

0xcc43,	// (0x00019478) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc43,	// (0x00019478) popup_snote2_single_graphic_window_t4

0xcc79,	// (0x000194ae) popup_snote2_single_graphic_window_t5_ParamLimits

0xcc79,	// (0x000194ae) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb8,	// (0x0001c4ed) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb8,	// (0x0001c4ed) popup_snote2_single_graphic_window_t

0x851a,	// (0x00014d4f) clock_nsta_pane_cp2_t1

0x851a,	// (0x00014d4f) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0001c314) clock_nsta_pane_cp2_t

0x93ef,	// (0x00015c24) form_field_data_wide_pane_g1_ParamLimits

0x3e89,	// (0x000106be) form_field_data_wide_pane_g2_ParamLimits

0x3e89,	// (0x000106be) form_field_data_wide_pane_g2

0x4418,	// (0x00010c4d) form_field_data_wide_pane_g3_ParamLimits

0x4418,	// (0x00010c4d) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001beef) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001beef) form_field_data_wide_pane_g

0xb51e,	// (0x00017d53) grid_touch_3_pane_ParamLimits

0xb51e,	// (0x00017d53) grid_touch_3_pane

0xcd8c,	// (0x000195c1) cell_touch_3_pane_ParamLimits

0xcd8c,	// (0x000195c1) cell_touch_3_pane

0xba07,	// (0x0001823c) cell_touch_3_pane_g1

0xba07,	// (0x0001823c) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0001c399) cell_touch_3_pane_g

0x3a65,	// (0x0001029a) cont_query_data_pane

0x3a6d,	// (0x000102a2) cont_query_data_pane_cp1

0xcdb9,	// (0x000195ee) button_value_adjust_pane_cp7

0xcdc1,	// (0x000195f6) query_popup_pane_cp3

0x4c5b,	// (0x00011490) bg_popup_sub_pane_cp22_ParamLimits

0xa23c,	// (0x00016a71) navi_navi_volume_pane_cp2

0xa254,	// (0x00016a89) popup_side_volume_key_window_g2

0xa260,	// (0x00016a95) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001bf81) popup_side_volume_key_window_g

0xa27a,	// (0x00016aaf) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001bf88) popup_side_volume_key_window_t

0x4f77,	// (0x000117ac) popup_side_volume_key_window_ParamLimits

0x908a,	// (0x000158bf) list_double_graphic_pane_g4_ParamLimits

0x908a,	// (0x000158bf) list_double_graphic_pane_g4

0xb284,	// (0x00017ab9) list_single_2heading_msg_pane_ParamLimits

0xb284,	// (0x00017ab9) list_single_2heading_msg_pane

0x9c15,	// (0x0001644a) list_single_2heading_msg_pane_g1_ParamLimits

0x9c15,	// (0x0001644a) list_single_2heading_msg_pane_g1

0x8eeb,	// (0x00015720) list_single_2heading_msg_pane_g2_ParamLimits

0x8eeb,	// (0x00015720) list_single_2heading_msg_pane_g2

0x9c21,	// (0x00016456) list_single_2heading_msg_pane_g3_ParamLimits

0x9c21,	// (0x00016456) list_single_2heading_msg_pane_g3

0x9c2d,	// (0x00016462) list_single_2heading_msg_pane_g4_ParamLimits

0x9c2d,	// (0x00016462) list_single_2heading_msg_pane_g4

0x0003,

0xfcc3,	// (0x0001c4f8) list_single_2heading_msg_pane_g_ParamLimits

0xfcc3,	// (0x0001c4f8) list_single_2heading_msg_pane_g

0x9c45,	// (0x0001647a) list_single_2heading_msg_pane_t1_ParamLimits

0x9c45,	// (0x0001647a) list_single_2heading_msg_pane_t1

0x9c6d,	// (0x000164a2) list_single_2heading_msg_pane_t2_ParamLimits

0x9c6d,	// (0x000164a2) list_single_2heading_msg_pane_t2

0x9ca1,	// (0x000164d6) list_single_2heading_msg_pane_t3_ParamLimits

0x9ca1,	// (0x000164d6) list_single_2heading_msg_pane_t3

0x9cda,	// (0x0001650f) list_single_2heading_msg_pane_t4_ParamLimits

0x9cda,	// (0x0001650f) list_single_2heading_msg_pane_t4

0x0003,

0xfccc,	// (0x0001c501) list_single_2heading_msg_pane_t_ParamLimits

0xfccc,	// (0x0001c501) list_single_2heading_msg_pane_t

0x3630,	// (0x0000fe65) title_pane_g4_ParamLimits

0x3630,	// (0x0000fe65) title_pane_g4

0xa08c,	// (0x000168c1) title_pane_stacon_g3_ParamLimits

0xa08c,	// (0x000168c1) title_pane_stacon_g3

0xc8f4,	// (0x00019129) list_single_2graphic_im_pane_g4_ParamLimits

0xc8f4,	// (0x00019129) list_single_2graphic_im_pane_g4

0x7816,	// (0x0001404b) popup_side_volume_key_window_cp

0x7d30,	// (0x00014565) main_idle_act2_pane_t1

0xac74,	// (0x000174a9) toolbar_button_pane_g10

0x3e40,	// (0x00010675) popup_toolbar_window_cp1

0x850b,	// (0x00014d40) clock_nsta_pane_cp_t1

0x850b,	// (0x00014d40) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0001c30f) clock_nsta_pane_cp_t

0xa23c,	// (0x00016a71) navi_navi_volume_pane_cp2_ParamLimits

0xa248,	// (0x00016a7d) popup_side_volume_key_window_g1_ParamLimits

0xa254,	// (0x00016a89) popup_side_volume_key_window_g2_ParamLimits

0xa260,	// (0x00016a95) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001bf81) popup_side_volume_key_window_g_ParamLimits

0xba70,	// (0x000182a5) fep_hwr_aid_pane

0xbb11,	// (0x00018346) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb31,	// (0x00018366) fep_hwr_top_pane_g1_ParamLimits

0xbb43,	// (0x00018378) fep_hwr_top_pane_g2_ParamLimits

0xbb55,	// (0x0001838a) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0001c364) fep_hwr_top_pane_g_ParamLimits

0xbb6a,	// (0x0001839f) fep_hwr_top_text_pane_ParamLimits

0x761f,	// (0x00013e54) aid_touch_tab_arrow_arrow_2

0x7616,	// (0x00013e4b) aid_touch_tab_arrow_left_2

0xba84,	// (0x000182b9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbab7,	// (0x000182ec) fep_hwr_prediction_pane

0xbdb9,	// (0x000185ee) fep_vkb_prediction_pane

0xbe9b,	// (0x000186d0) fep_vkb_side_pane_g3_ParamLimits

0xbe9b,	// (0x000186d0) fep_vkb_side_pane_g3

0xbe47,	// (0x0001867c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc355,	// (0x00018b8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc362,	// (0x00018b97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd9,	// (0x0001c40e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcde6,	// (0x0001961b) fep_hwr_prediction_pane_g1

0xcdf0,	// (0x00019625) fep_hwr_prediction_pane_g2

0xcdf8,	// (0x0001962d) fep_hwr_prediction_pane_g3

0xce00,	// (0x00019635) fep_hwr_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0001c50a) fep_hwr_prediction_pane_g

0xcde6,	// (0x0001961b) fep_vkb_prediction_pane_g1

0xce08,	// (0x0001963d) fep_vkb_prediction_pane_g2

0xce10,	// (0x00019645) fep_vkb_prediction_pane_g3

0xce18,	// (0x0001964d) fep_vkb_prediction_pane_g4

0x0003,

0xfcde,	// (0x0001c513) fep_vkb_prediction_pane_g

0x7c1f,	// (0x00014454) slider_set_pane_g3

0x7c33,	// (0x00014468) slider_set_pane_g4

0x7c4b,	// (0x00014480) slider_set_pane_g5

0x7c1f,	// (0x00014454) slider_set_pane_g6

0xb103,	// (0x00017938) slider_set_pane_g7

0x7af6,	// (0x0001432b) slider_form_pane_g3

0x7aff,	// (0x00014334) slider_form_pane_g4

0x7b07,	// (0x0001433c) slider_form_pane_g5

0x7af6,	// (0x0001432b) slider_form_pane_g6

0xb269,	// (0x00017a9e) slider_form_pane_g7

0x7f8b,	// (0x000147c0) slider_set_pane_vc_g3

0x7f94,	// (0x000147c9) slider_set_pane_vc_g4

0x7f9d,	// (0x000147d2) slider_set_pane_vc_g5

0x7f8b,	// (0x000147c0) slider_set_pane_vc_g6

0x7fa6,	// (0x000147db) slider_set_pane_vc_g7

0x7f8b,	// (0x000147c0) slider_form_pane_vc_g1

0x7f94,	// (0x000147c9) slider_form_pane_vc_g2

0x7f9d,	// (0x000147d2) slider_form_pane_vc_g3

0x7f8b,	// (0x000147c0) slider_form_pane_vc_g4

0x82c1,	// (0x00014af6) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0001c2f5) slider_form_pane_vc_g

0x350b,	// (0x0000fd40) main_idle_act3_pane

0xce20,	// (0x00019655) ai3_links_pane

0xce29,	// (0x0001965e) popup_ai3_data_window_ParamLimits

0xce29,	// (0x0001965e) popup_ai3_data_window

0x350b,	// (0x0000fd40) grid_ai3_links_pane

0xce41,	// (0x00019676) cell_ai3_links_pane_ParamLimits

0xce41,	// (0x00019676) cell_ai3_links_pane

0xce55,	// (0x0001968a) bg_popup_sub_pane_cp11

0xce62,	// (0x00019697) cell_ai3_links_pane_g1

0x350b,	// (0x0000fd40) bg_popup_sub_pane_cp12

0xce87,	// (0x000196bc) heading_ai3_data_pane

0xce8f,	// (0x000196c4) list_ai3_gene_pane

0xce9b,	// (0x000196d0) popup_ai3_data_window_g1

0xcea3,	// (0x000196d8) heading_ai3_data_pane_g1

0xceab,	// (0x000196e0) heading_ai3_data_pane_t1

0xceb9,	// (0x000196ee) list_double_ai3_gene_pane_ParamLimits

0xceb9,	// (0x000196ee) list_double_ai3_gene_pane

0xcec6,	// (0x000196fb) list_single_ai3_gene_pane_ParamLimits

0xcec6,	// (0x000196fb) list_single_ai3_gene_pane

0xb9cc,	// (0x00018201) list_highlight_pane_cp7_ParamLimits

0xb9cc,	// (0x00018201) list_highlight_pane_cp7

0xced3,	// (0x00019708) list_single_a13_gene_pane_t1_ParamLimits

0xced3,	// (0x00019708) list_single_a13_gene_pane_t1

0xceea,	// (0x0001971f) list_single_ai3_gene_pane_g1

0xcef3,	// (0x00019728) list_single_ai3_gene_pane_g2

0x0001,

0xfce7,	// (0x0001c51c) list_single_ai3_gene_pane_g

0xcefb,	// (0x00019730) list_double_ai3_gene_pane_g1_ParamLimits

0xcefb,	// (0x00019730) list_double_ai3_gene_pane_g1

0xcf07,	// (0x0001973c) list_double_ai3_gene_pane_t1_ParamLimits

0xcf07,	// (0x0001973c) list_double_ai3_gene_pane_t1

0xcf23,	// (0x00019758) list_double_ai3_gene_pane_t2_ParamLimits

0xcf23,	// (0x00019758) list_double_ai3_gene_pane_t2

0xcf38,	// (0x0001976d) list_double_ai3_gene_pane_t3_ParamLimits

0xcf38,	// (0x0001976d) list_double_ai3_gene_pane_t3

0x0002,

0xfcec,	// (0x0001c521) list_double_ai3_gene_pane_t_ParamLimits

0xfcec,	// (0x0001c521) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c0d,	// (0x00016442) aid_size_min_col_2

0xcdd2,	// (0x00019607) aid_size_min_msg_ParamLimits

0xcdd2,	// (0x00019607) aid_size_min_msg

0xbf95,	// (0x000187ca) fep_vkb_top_text_pane_g2_ParamLimits

0xbf95,	// (0x000187ca) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0001c394) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0001c394) fep_vkb_top_text_pane_g

0x350b,	// (0x0000fd40) main_hc_apps_shell_pane

0xcf55,	// (0x0001978a) grid_hc_apps_pane_ParamLimits

0xcf55,	// (0x0001978a) grid_hc_apps_pane

0xcf64,	// (0x00019799) list_hc_apps_pane

0xcf6c,	// (0x000197a1) scroll_pane_cp37_ParamLimits

0xcf6c,	// (0x000197a1) scroll_pane_cp37

0xcf78,	// (0x000197ad) cell_hc_apps_pane_ParamLimits

0xcf78,	// (0x000197ad) cell_hc_apps_pane

0xd006,	// (0x0001983b) cell_hc_apps_pane_g1_ParamLimits

0xd006,	// (0x0001983b) cell_hc_apps_pane_g1

0xd033,	// (0x00019868) cell_hc_apps_pane_g2_ParamLimits

0xd033,	// (0x00019868) cell_hc_apps_pane_g2

0xd04f,	// (0x00019884) cell_hc_apps_pane_g3_ParamLimits

0xd04f,	// (0x00019884) cell_hc_apps_pane_g3

0x0002,

0xfcf3,	// (0x0001c528) cell_hc_apps_pane_g_ParamLimits

0xfcf3,	// (0x0001c528) cell_hc_apps_pane_g

0xd071,	// (0x000198a6) cell_hc_apps_pane_t1_ParamLimits

0xd071,	// (0x000198a6) cell_hc_apps_pane_t1

0x39af,	// (0x000101e4) grid_highlight_pane_cp10_ParamLimits

0x39af,	// (0x000101e4) grid_highlight_pane_cp10

0xd0af,	// (0x000198e4) list_single_hc_apps_pane_ParamLimits

0xd0af,	// (0x000198e4) list_single_hc_apps_pane

0xd0df,	// (0x00019914) list_single_hc_apps_pane_g1

0x9cff,	// (0x00016534) list_single_hc_apps_pane_g2

0x0001,

0xfcfa,	// (0x0001c52f) list_single_hc_apps_pane_g

0x9d18,	// (0x0001654d) list_single_hc_apps_pane_g2_copy1

0x9d34,	// (0x00016569) list_single_hc_apps_pane_t1

0x36dc,	// (0x0000ff11) bg_set_opt_pane_cp_ParamLimits

0x3975,	// (0x000101aa) setting_slider_pane_t1_ParamLimits

0xa006,	// (0x0001683b) setting_slider_pane_t2_ParamLimits

0xa01f,	// (0x00016854) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001bdd7) setting_slider_pane_t_ParamLimits

0x398b,	// (0x000101c0) slider_set_pane_ParamLimits

0xa4b4,	// (0x00016ce9) control_pane_g5_ParamLimits

0xa4b4,	// (0x00016ce9) control_pane_g5

0x7a47,	// (0x0001427c) slider_set_pane_g1_ParamLimits

0xb0f7,	// (0x0001792c) slider_set_pane_g2_ParamLimits

0x7c1f,	// (0x00014454) slider_set_pane_g3_ParamLimits

0x7c33,	// (0x00014468) slider_set_pane_g4_ParamLimits

0x7c4b,	// (0x00014480) slider_set_pane_g5_ParamLimits

0x7c1f,	// (0x00014454) slider_set_pane_g6_ParamLimits

0xb103,	// (0x00017938) slider_set_pane_g7_ParamLimits

0xf991,	// (0x0001c1c6) slider_set_pane_g_ParamLimits

0x36dc,	// (0x0000ff11) navi_icon_text_pane_ParamLimits

0xa965,	// (0x0001719a) aid_fill_nsta_2_ParamLimits

0xa98b,	// (0x000171c0) aid_touch_tab_arrow_left_ParamLimits

0xa997,	// (0x000171cc) aid_touch_tab_arrow_right_ParamLimits

0xaa01,	// (0x00017236) clock_nsta_pane_ParamLimits

0x75f8,	// (0x00013e2d) navi_icon_pane_g1_ParamLimits

0x7604,	// (0x00013e39) navi_text_pane_t1_ParamLimits

0xb61e,	// (0x00017e53) navi_icon_text_pane_g1_ParamLimits

0xb62a,	// (0x00017e5f) navi_icon_text_pane_t1_ParamLimits

0xd0df,	// (0x00019914) list_single_hc_apps_pane_g1_ParamLimits

0x9cff,	// (0x00016534) list_single_hc_apps_pane_g2_ParamLimits

0xfcfa,	// (0x0001c52f) list_single_hc_apps_pane_g_ParamLimits

0x9d18,	// (0x0001654d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9d34,	// (0x00016569) list_single_hc_apps_pane_t1_ParamLimits

0x9f38,	// (0x0001676d) popup_toolbar2_fixed_window_ParamLimits

0x9f38,	// (0x0001676d) popup_toolbar2_fixed_window

0xa8f6,	// (0x0001712b) popup_toolbar2_float_window

0x350b,	// (0x0000fd40) bg_popup_sub_pane_cp27

0xd0f8,	// (0x0001992d) grid_toolbar2_float_pane

0x350b,	// (0x0000fd40) bg_popup_sub_pane_cp26

0xd0f8,	// (0x0001992d) grid_toolbar2_fixed_pane

0xd100,	// (0x00019935) cell_toolbar2_fixed_pane_ParamLimits

0xd100,	// (0x00019935) cell_toolbar2_fixed_pane

0xd111,	// (0x00019946) cell_toolbar2_fixed_pane_g1

0xd11a,	// (0x0001994f) toolbar2_fixed_button_pane

0x6966,	// (0x0001319b) toolbar2_fixed_button_pane_g1

0x6976,	// (0x000131ab) toolbar2_fixed_button_pane_g2

0x696e,	// (0x000131a3) toolbar2_fixed_button_pane_g3

0x6986,	// (0x000131bb) toolbar2_fixed_button_pane_g4

0x697e,	// (0x000131b3) toolbar2_fixed_button_pane_g5

0x698e,	// (0x000131c3) toolbar2_fixed_button_pane_g6

0x6996,	// (0x000131cb) toolbar2_fixed_button_pane_g7

0x69a6,	// (0x000131db) toolbar2_fixed_button_pane_g8

0x699e,	// (0x000131d3) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x0001c0c8) toolbar2_fixed_button_pane_g

0xd122,	// (0x00019957) cell_toolbar2_float_pane_ParamLimits

0xd122,	// (0x00019957) cell_toolbar2_float_pane

0xd133,	// (0x00019968) cell_toolbar2_float_pane_g1

0xd11a,	// (0x0001994f) toolbar2_fixed_button_pane_cp

0xbd28,	// (0x0001855d) fep_vkb_accented_list_pane_ParamLimits

0xbd28,	// (0x0001855d) fep_vkb_accented_list_pane

0xc17a,	// (0x000189af) bg_popup_fep_shadow_pane_g9

0x517f,	// (0x000119b4) bg_popup_fep_shadow_pane_cp3

0x46a0,	// (0x00010ed5) list_accented_list_pane

0xd13c,	// (0x00019971) list_single_accented_list_pane_ParamLimits

0xd13c,	// (0x00019971) list_single_accented_list_pane

0x517f,	// (0x000119b4) list_highlight_pane_cp10

0xd14d,	// (0x00019982) list_single_accented_list_pane_t1

0xa864,	// (0x00017099) popup_slider_window_ParamLimits

0xa864,	// (0x00017099) popup_slider_window

0xcdc9,	// (0x000195fe) aid_indentation_list_msg

0xd1ed,	// (0x00019a22) bg_popup_window_pane_cp19

0xd251,	// (0x00019a86) popup_slider_window_g1

0xd26d,	// (0x00019aa2) popup_slider_window_g2

0xd289,	// (0x00019abe) popup_slider_window_g3

0x0005,

0xfcff,	// (0x0001c534) popup_slider_window_g

0xd2e5,	// (0x00019b1a) popup_slider_window_t1

0xd357,	// (0x00019b8c) small_volume_slider_vertical_pane

0xba07,	// (0x0001823c) small_volume_slider_vertical_pane_g1

0xba07,	// (0x0001823c) small_volume_slider_vertical_pane_g2

0xd373,	// (0x00019ba8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd11,	// (0x0001c546) small_volume_slider_vertical_pane_g

0x9db6,	// (0x000165eb) area_side_right_pane_ParamLimits

0x9db6,	// (0x000165eb) area_side_right_pane

0xd37c,	// (0x00019bb1) aid_size_side_button_ParamLimits

0xd37c,	// (0x00019bb1) aid_size_side_button

0xd390,	// (0x00019bc5) grid_sctrl_middle_pane_ParamLimits

0xd390,	// (0x00019bc5) grid_sctrl_middle_pane

0xd3ac,	// (0x00019be1) sctrl_sk_bottom_pane

0xd3bd,	// (0x00019bf2) sctrl_sk_top_pane

0xd3cf,	// (0x00019c04) aid_touch_sctrl_top

0x39af,	// (0x000101e4) bg_sctrl_sk_pane_ParamLimits

0x39af,	// (0x000101e4) bg_sctrl_sk_pane

0xd3dc,	// (0x00019c11) sctrl_sk_top_pane_g1

0xd3e9,	// (0x00019c1e) sctrl_sk_top_pane_t1

0xd3cf,	// (0x00019c04) aid_touch_sctrl_bottom

0x39af,	// (0x000101e4) bg_sctrl_sk_pane_cp_ParamLimits

0x39af,	// (0x000101e4) bg_sctrl_sk_pane_cp

0xd404,	// (0x00019c39) sctrl_sk_bottom_pane_g1

0xd3e9,	// (0x00019c1e) sctrl_sk_bottom_pane_t1

0xd40d,	// (0x00019c42) cell_sctrl_middle_pane_ParamLimits

0xd40d,	// (0x00019c42) cell_sctrl_middle_pane

0xd428,	// (0x00019c5d) aid_touch_sctrl_middle_ParamLimits

0xd428,	// (0x00019c5d) aid_touch_sctrl_middle

0x43f2,	// (0x00010c27) bg_sctrl_middle_pane_ParamLimits

0x43f2,	// (0x00010c27) bg_sctrl_middle_pane

0xbe47,	// (0x0001867c) cell_sctrl_middle_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) cell_sctrl_middle_pane_g1

0xd439,	// (0x00019c6e) cell_sctrl_middle_pane_g2_ParamLimits

0xd439,	// (0x00019c6e) cell_sctrl_middle_pane_g2

0x0001,

0xfd1d,	// (0x0001c552) cell_sctrl_middle_pane_g_ParamLimits

0xfd1d,	// (0x0001c552) cell_sctrl_middle_pane_g

0x6966,	// (0x0001319b) bg_sctrl_middle_pane_g1

0x6976,	// (0x000131ab) bg_sctrl_middle_pane_g2

0x696e,	// (0x000131a3) bg_sctrl_middle_pane_g3

0x6986,	// (0x000131bb) bg_sctrl_middle_pane_g4

0x697e,	// (0x000131b3) bg_sctrl_middle_pane_g5

0x698e,	// (0x000131c3) bg_sctrl_middle_pane_g6

0x6996,	// (0x000131cb) bg_sctrl_middle_pane_g7

0x69a6,	// (0x000131db) bg_sctrl_middle_pane_g8

0x0007,

0xfd22,	// (0x0001c557) bg_sctrl_middle_pane_g

0x699e,	// (0x000131d3) bg_sctrl_middle_pane_g8_copy1

0x6966,	// (0x0001319b) bg_sctrl_sk_pane_g1

0x6976,	// (0x000131ab) bg_sctrl_sk_pane_g2

0x696e,	// (0x000131a3) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x0001c0c8) bg_sctrl_sk_pane_g

0x3e05,	// (0x0001063a) aid_size_touch_scroll_bar

0x6986,	// (0x000131bb) bg_sctrl_sk_pane_g4

0x697e,	// (0x000131b3) bg_sctrl_sk_pane_g5

0x698e,	// (0x000131c3) bg_sctrl_sk_pane_g6

0x6996,	// (0x000131cb) bg_sctrl_sk_pane_g7

0x69a6,	// (0x000131db) bg_sctrl_sk_pane_g8

0x699e,	// (0x000131d3) bg_sctrl_sk_pane_g9

0x66dc,	// (0x00012f11) popup_fep_china_hwr2_fs_candidate_window

0xa620,	// (0x00016e55) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa620,	// (0x00016e55) popup_fep_china_hwr2_fs_control_window

0xbe47,	// (0x0001867c) sctrl_sk_top_pane_g2

0x0001,

0xfd18,	// (0x0001c54d) sctrl_sk_top_pane_g

0xd44f,	// (0x00019c84) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd44f,	// (0x00019c84) aid_fep_china_hwr2_fs_cell

0xd460,	// (0x00019c95) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd460,	// (0x00019c95) bg_popup_fep_shadow_pane_cp4

0xd477,	// (0x00019cac) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd477,	// (0x00019cac) bg_popup_fep_shadow_pane_cp5

0xd489,	// (0x00019cbe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd489,	// (0x00019cbe) popup_fep_china_hwr2_fs_control_bar_grid

0xd499,	// (0x00019cce) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4a1,	// (0x00019cd6) aid_fep_china_hwr2_fs_candi_cell

0x350b,	// (0x0000fd40) bg_popup_fep_shadow_pane_cp6

0xd4ab,	// (0x00019ce0) popup_fep_china_hwr2_fs_candidate_grid

0xd4b3,	// (0x00019ce8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4b3,	// (0x00019ce8) cell_fep_china_hwr2_fs_funtion_grid

0xba07,	// (0x0001823c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4cb,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4cb,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4d9,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4d9,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd33,	// (0x0001c568) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd33,	// (0x0001c568) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4ef,	// (0x00019d24) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4ef,	// (0x00019d24) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd504,	// (0x00019d39) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd504,	// (0x00019d39) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd38,	// (0x0001c56d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd38,	// (0x0001c56d) cell_fep_china_hwr2_fs_funtion_grid_t

0xd520,	// (0x00019d55) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd528,	// (0x00019d5d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd530,	// (0x00019d65) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3d,	// (0x0001c572) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd538,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd538,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid

0xd551,	// (0x00019d86) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd559,	// (0x00019d8e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba07,	// (0x0001823c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba07,	// (0x0001823c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0001c399) cell_fep_china_hwr2_fs_candidate_grid_g

0xd561,	// (0x00019d96) cell_fep_china_hwr2_fs_candidate_grid_t1

0x67cb,	// (0x00013000) clock_nsta_pane_cp_24_ParamLimits

0x67cb,	// (0x00013000) clock_nsta_pane_cp_24

0x6828,	// (0x0001305d) indicator_nsta_pane_cp_24_ParamLimits

0x6828,	// (0x0001305d) indicator_nsta_pane_cp_24

0x7503,	// (0x00013d38) heading_pane_g1

0x0001,

0xf8f8,	// (0x0001c12d) heading_pane_g

0xb353,	// (0x00017b88) grid_sct_catagory_button_pane

0x7abf,	// (0x000142f4) scroll_pane_cp5_ParamLimits

0xb6b4,	// (0x00017ee9) button_value_adjust_pane_cp5_ParamLimits

0xb6b4,	// (0x00017ee9) button_value_adjust_pane_cp5

0xb791,	// (0x00017fc6) form2_midp_time_pane_ParamLimits

0xd56f,	// (0x00019da4) cell_sct_catagory_button_pane_ParamLimits

0xd56f,	// (0x00019da4) cell_sct_catagory_button_pane

0xb9cc,	// (0x00018201) bg_button_pane_cp01_ParamLimits

0xb9cc,	// (0x00018201) bg_button_pane_cp01

0xba07,	// (0x0001823c) cell_sct_catagory_button_pane_g1

0xa893,	// (0x000170c8) popup_tb_extension_window

0xd581,	// (0x00019db6) aid_size_cell_ext_ParamLimits

0xd581,	// (0x00019db6) aid_size_cell_ext

0x39af,	// (0x000101e4) bg_tb_trans_pane_cp1_ParamLimits

0x39af,	// (0x000101e4) bg_tb_trans_pane_cp1

0xd5a1,	// (0x00019dd6) grid_tb_ext_pane_ParamLimits

0xd5a1,	// (0x00019dd6) grid_tb_ext_pane

0xd5c7,	// (0x00019dfc) cell_tb_ext_pane_ParamLimits

0xd5c7,	// (0x00019dfc) cell_tb_ext_pane

0xd5dc,	// (0x00019e11) cell_tb_ext_pane_g1_ParamLimits

0xd5dc,	// (0x00019e11) cell_tb_ext_pane_g1

0xd5f9,	// (0x00019e2e) cell_tb_ext_pane_t1

0x39af,	// (0x000101e4) list_highlight_pane_cp11_ParamLimits

0x39af,	// (0x000101e4) list_highlight_pane_cp11

0x9f57,	// (0x0001678c) popup_uni_indicator_window_ParamLimits

0x9f57,	// (0x0001678c) popup_uni_indicator_window

0x43f2,	// (0x00010c27) bg_popup_sub_pane_cp14

0xd614,	// (0x00019e49) list_uniindi_pane

0xd620,	// (0x00019e55) uniindi_top_pane

0x39af,	// (0x000101e4) bg_uniindi_top_pane

0xd63f,	// (0x00019e74) uniindi_top_pane_g1

0xd655,	// (0x00019e8a) uniindi_top_pane_g2

0x0003,

0xfd44,	// (0x0001c579) uniindi_top_pane_g

0xd67f,	// (0x00019eb4) uniindi_top_pane_t1

0xd6a9,	// (0x00019ede) list_single_uniindi_pane_ParamLimits

0xd6a9,	// (0x00019ede) list_single_uniindi_pane

0xba07,	// (0x0001823c) bg_uniindi_top_pane_g1

0xd6bb,	// (0x00019ef0) list_single_uniindi_pane_g1

0xd6ce,	// (0x00019f03) list_single_uniindi_pane_t1

0x350b,	// (0x0000fd40) control_bg_pane

0xd6f3,	// (0x00019f28) bg_sctrl_sk_pane_cp1

0xd6fc,	// (0x00019f31) bg_sctrl_sk_pane_cp2

0xd705,	// (0x00019f3a) control_bg_pane_g1

0xd70e,	// (0x00019f43) control_bg_pane_g2

0x0001,

0xfd4d,	// (0x0001c582) control_bg_pane_g

0x84e4,	// (0x00014d19) cell_indicator_nsta_pane_g1_ParamLimits

0xb562,	// (0x00017d97) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0001c30a) cell_indicator_nsta_pane_g_ParamLimits

0x99d6,	// (0x0001620b) form2_midp_time_pane_t1_ParamLimits

0x3ce3,	// (0x00010518) main_idle_act4_pane_ParamLimits

0x3ce3,	// (0x00010518) main_idle_act4_pane

0xa893,	// (0x000170c8) popup_tb_extension_window_ParamLimits

0xd5bb,	// (0x00019df0) tb_ext_find_pane_ParamLimits

0xd5bb,	// (0x00019df0) tb_ext_find_pane

0xd717,	// (0x00019f4c) ai_gene_pane_1_cp1

0x52b8,	// (0x00011aed) ai_gene_pane_2_cp1

0xd71f,	// (0x00019f54) list_single_idle_plugin_calendar_pane

0xd728,	// (0x00019f5d) list_single_idle_plugin_notification_pane

0xd731,	// (0x00019f66) list_single_idle_plugin_player_pane

0xd73a,	// (0x00019f6f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd73a,	// (0x00019f6f) list_single_idle_plugin_shortcut_pane

0xd75c,	// (0x00019f91) main_idle_act4_pane_t1

0xd76e,	// (0x00019fa3) main_idle_act4_pane_t2

0x0001,

0xfd52,	// (0x0001c587) main_idle_act4_pane_t

0xd780,	// (0x00019fb5) middle_sk_idle_act4_pane_ParamLimits

0xd780,	// (0x00019fb5) middle_sk_idle_act4_pane

0xd796,	// (0x00019fcb) popup_clock_digital_analogue_window_cp2

0xd7b0,	// (0x00019fe5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7b0,	// (0x00019fe5) shortcut_wheel_idle_act4_pane

0xba07,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g1

0xba07,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g2

0xba07,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g3

0xba07,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g4

0xba07,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g5

0xd7c4,	// (0x00019ff9) shortcut_wheel_idle_act4_pane_g6

0xd7cc,	// (0x0001a001) shortcut_wheel_idle_act4_pane_g7

0xd7d4,	// (0x0001a009) shortcut_wheel_idle_act4_pane_g8

0xd7dc,	// (0x0001a011) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd57,	// (0x0001c58c) shortcut_wheel_idle_act4_pane_g

0xbe47,	// (0x0001867c) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) middle_sk_idle_act4_pane_g1

0xd840,	// (0x0001a075) middle_sk_idle_act4_pane_g2_ParamLimits

0xd840,	// (0x0001a075) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7a,	// (0x0001c5af) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7a,	// (0x0001c5af) middle_sk_idle_act4_pane_g

0xd84c,	// (0x0001a081) middle_sk_idle_act4_pane_t1_ParamLimits

0xd84c,	// (0x0001a081) middle_sk_idle_act4_pane_t1

0xd869,	// (0x0001a09e) grid_ai_shortcut_pane_ParamLimits

0xd869,	// (0x0001a09e) grid_ai_shortcut_pane

0xd882,	// (0x0001a0b7) list_highlight_pane_cp16_ParamLimits

0xd882,	// (0x0001a0b7) list_highlight_pane_cp16

0xd88f,	// (0x0001a0c4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd88f,	// (0x0001a0c4) list_single_idle_plugin_shortcut_pane_g1

0xd89b,	// (0x0001a0d0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd89b,	// (0x0001a0d0) list_single_idle_plugin_shortcut_pane_g2

0xd8b3,	// (0x0001a0e8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8b3,	// (0x0001a0e8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7f,	// (0x0001c5b4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7f,	// (0x0001c5b4) list_single_idle_plugin_shortcut_pane_g

0xd8c6,	// (0x0001a0fb) cell_ai_shortcut_pane_ParamLimits

0xd8c6,	// (0x0001a0fb) cell_ai_shortcut_pane

0xd8e7,	// (0x0001a11c) cell_ai_shortcut_pane_g1_ParamLimits

0xd8e7,	// (0x0001a11c) cell_ai_shortcut_pane_g1

0xd717,	// (0x00019f4c) ai_gene_pane_1_cp2

0xd909,	// (0x0001a13e) ai_gene_pane_2_cp2

0xd911,	// (0x0001a146) list_highlight_pane_cp15

0xd91a,	// (0x0001a14f) list_single_idle_plugin_calendar_pane_g1

0xd911,	// (0x0001a146) list_highlight_pane_cp17

0xd922,	// (0x0001a157) list_single_idle_plugin_calendar_pane_g1_copy1

0xd92a,	// (0x0001a15f) list_single_idle_plugin_player_pane_g1

0x7dbc,	// (0x000145f1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd86,	// (0x0001c5bb) list_single_idle_plugin_player_pane_g

0xd932,	// (0x0001a167) list_single_idle_plugin_player_pane_t1

0xd940,	// (0x0001a175) list_single_idle_plugin_player_pane_t2

0xd94e,	// (0x0001a183) list_single_idle_plugin_player_pane_t3

0xd95c,	// (0x0001a191) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8b,	// (0x0001c5c0) list_single_idle_plugin_player_pane_t

0xd96a,	// (0x0001a19f) wait_bar_pane_cp15

0xd972,	// (0x0001a1a7) grid_ai_notification_pane

0x7dbc,	// (0x000145f1) list_single_idle_plugin_notification_pane_g1

0xd97b,	// (0x0001a1b0) cell_ai_notification_pane_ParamLimits

0xd97b,	// (0x0001a1b0) cell_ai_notification_pane

0xd988,	// (0x0001a1bd) cell_ai_notification_pane_g1

0xd990,	// (0x0001a1c5) cell_ai_notification_pane_t1

0xd99e,	// (0x0001a1d3) tb_ext_find_button_pane

0xd9a6,	// (0x0001a1db) tb_ext_find_pane_g1

0xd9ae,	// (0x0001a1e3) tb_ext_find_pane_t1

0x4bad,	// (0x000113e2) tb_ext_find_button_pane_g1

0xd9bc,	// (0x0001a1f1) tb_ext_find_button_pane_g2

0x0001,

0xfd94,	// (0x0001c5c9) tb_ext_find_button_pane_g

0xd75c,	// (0x00019f91) main_idle_act4_pane_t1_ParamLimits

0xd76e,	// (0x00019fa3) main_idle_act4_pane_t2_ParamLimits

0xfd52,	// (0x0001c587) main_idle_act4_pane_t_ParamLimits

0xd796,	// (0x00019fcb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7a4,	// (0x00019fd9) sat_plugin_idle_act4_pane_ParamLimits

0xd7a4,	// (0x00019fd9) sat_plugin_idle_act4_pane

0xd9c5,	// (0x0001a1fa) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9c5,	// (0x0001a1fa) sat_plugin_idle_act4_pane_t1

0xd9d8,	// (0x0001a20d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9d8,	// (0x0001a20d) sat_plugin_idle_act4_pane_t2

0xd9eb,	// (0x0001a220) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9eb,	// (0x0001a220) sat_plugin_idle_act4_pane_t3

0xd9fe,	// (0x0001a233) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9fe,	// (0x0001a233) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd99,	// (0x0001c5ce) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd99,	// (0x0001c5ce) sat_plugin_idle_act4_pane_t

0x9eb8,	// (0x000166ed) popup_battery_window_ParamLimits

0x9eb8,	// (0x000166ed) popup_battery_window

0x39af,	// (0x000101e4) bg_popup_sub_pane_cp25_ParamLimits

0x39af,	// (0x000101e4) bg_popup_sub_pane_cp25

0xda11,	// (0x0001a246) popup_battery_window_g1_ParamLimits

0xda11,	// (0x0001a246) popup_battery_window_g1

0xda1d,	// (0x0001a252) popup_battery_window_t1_ParamLimits

0xda1d,	// (0x0001a252) popup_battery_window_t1

0xda2f,	// (0x0001a264) popup_battery_window_t2_ParamLimits

0xda2f,	// (0x0001a264) popup_battery_window_t2

0x0001,

0xfda2,	// (0x0001c5d7) popup_battery_window_t_ParamLimits

0xfda2,	// (0x0001c5d7) popup_battery_window_t

0x5193,	// (0x000119c8) midp_canvas_pane_ParamLimits

0x5202,	// (0x00011a37) midp_keypad_pane_ParamLimits

0x5202,	// (0x00011a37) midp_keypad_pane

0x664e,	// (0x00012e83) main_midp_pane_ParamLimits

0x8529,	// (0x00014d5e) signal_pane_g2_cp_ParamLimits

0xda4c,	// (0x0001a281) aid_size_cell_midp_keypad_ParamLimits

0xda4c,	// (0x0001a281) aid_size_cell_midp_keypad

0xda66,	// (0x0001a29b) midp_keyp_game_grid_pane_ParamLimits

0xda66,	// (0x0001a29b) midp_keyp_game_grid_pane

0xda80,	// (0x0001a2b5) midp_keyp_rocker_pane_ParamLimits

0xda80,	// (0x0001a2b5) midp_keyp_rocker_pane

0xdaad,	// (0x0001a2e2) midp_keyp_sk_left_pane_ParamLimits

0xdaad,	// (0x0001a2e2) midp_keyp_sk_left_pane

0xdb05,	// (0x0001a33a) midp_keyp_sk_right_pane_ParamLimits

0xdb05,	// (0x0001a33a) midp_keyp_sk_right_pane

0x350b,	// (0x0000fd40) bg_button_pane_cp03

0xdb57,	// (0x0001a38c) midp_keyp_sk_left_pane_g1

0x350b,	// (0x0000fd40) bg_button_pane_cp04

0xdb57,	// (0x0001a38c) midp_keyp_sk_right_pane_g1

0xba07,	// (0x0001823c) midp_keyp_rocker_pane_g1

0xdb60,	// (0x0001a395) keyp_game_cell_pane_ParamLimits

0xdb60,	// (0x0001a395) keyp_game_cell_pane

0x350b,	// (0x0000fd40) bg_button_pane_cp02

0xdb71,	// (0x0001a3a6) keyp_game_cell_pane_g1

0x9eee,	// (0x00016723) popup_fep_vkb2_window_ParamLimits

0x9eee,	// (0x00016723) popup_fep_vkb2_window

0xdb88,	// (0x0001a3bd) aid_size_cell_vkb2_ParamLimits

0xdb88,	// (0x0001a3bd) aid_size_cell_vkb2

0xdbdc,	// (0x0001a411) popup_fep_vkb2_window_g1_ParamLimits

0xdbdc,	// (0x0001a411) popup_fep_vkb2_window_g1

0xdc24,	// (0x0001a459) vkb2_area_bottom_pane_ParamLimits

0xdc24,	// (0x0001a459) vkb2_area_bottom_pane

0xdc5c,	// (0x0001a491) vkb2_area_keypad_pane_ParamLimits

0xdc5c,	// (0x0001a491) vkb2_area_keypad_pane

0xdc94,	// (0x0001a4c9) vkb2_area_top_pane_ParamLimits

0xdc94,	// (0x0001a4c9) vkb2_area_top_pane

0xdd04,	// (0x0001a539) vkb2_top_entry_pane_ParamLimits

0xdd04,	// (0x0001a539) vkb2_top_entry_pane

0xdd2e,	// (0x0001a563) vkb2_top_grid_left_pane_ParamLimits

0xdd2e,	// (0x0001a563) vkb2_top_grid_left_pane

0xdd4c,	// (0x0001a581) vkb2_top_grid_right_pane_ParamLimits

0xdd4c,	// (0x0001a581) vkb2_top_grid_right_pane

0xdd6a,	// (0x0001a59f) vkb2_cell_keypad_pane_ParamLimits

0xdd6a,	// (0x0001a59f) vkb2_cell_keypad_pane

0xde1b,	// (0x0001a650) vkb2_area_bottom_grid_pane_ParamLimits

0xde1b,	// (0x0001a650) vkb2_area_bottom_grid_pane

0xde3f,	// (0x0001a674) vkb2_area_bottom_pane_g1_ParamLimits

0xde3f,	// (0x0001a674) vkb2_area_bottom_pane_g1

0xde63,	// (0x0001a698) vkb2_area_bottom_pane_g2_ParamLimits

0xde63,	// (0x0001a698) vkb2_area_bottom_pane_g2

0xde91,	// (0x0001a6c6) vkb2_area_bottom_pane_g3_ParamLimits

0xde91,	// (0x0001a6c6) vkb2_area_bottom_pane_g3

0x0002,

0xfda7,	// (0x0001c5dc) vkb2_area_bottom_pane_g_ParamLimits

0xfda7,	// (0x0001c5dc) vkb2_area_bottom_pane_g

0xdee2,	// (0x0001a717) vkb2_top_cell_left_pane_ParamLimits

0xdee2,	// (0x0001a717) vkb2_top_cell_left_pane

0xdf0a,	// (0x0001a73f) vkb2_top_entry_pane_g1_ParamLimits

0xdf0a,	// (0x0001a73f) vkb2_top_entry_pane_g1

0xdf18,	// (0x0001a74d) vkb2_top_entry_pane_t1_ParamLimits

0xdf18,	// (0x0001a74d) vkb2_top_entry_pane_t1

0xdf4a,	// (0x0001a77f) vkb2_top_entry_pane_t2_ParamLimits

0xdf4a,	// (0x0001a77f) vkb2_top_entry_pane_t2

0xdf7c,	// (0x0001a7b1) vkb2_top_entry_pane_t3_ParamLimits

0xdf7c,	// (0x0001a7b1) vkb2_top_entry_pane_t3

0x0002,

0xfdae,	// (0x0001c5e3) vkb2_top_entry_pane_t_ParamLimits

0xfdae,	// (0x0001c5e3) vkb2_top_entry_pane_t

0xdfbf,	// (0x0001a7f4) vkb2_top_grid_right_pane_g1_ParamLimits

0xdfbf,	// (0x0001a7f4) vkb2_top_grid_right_pane_g1

0xdfd5,	// (0x0001a80a) vkb2_top_grid_right_pane_g2_ParamLimits

0xdfd5,	// (0x0001a80a) vkb2_top_grid_right_pane_g2

0xdfed,	// (0x0001a822) vkb2_top_grid_right_pane_g3_ParamLimits

0xdfed,	// (0x0001a822) vkb2_top_grid_right_pane_g3

0xe005,	// (0x0001a83a) vkb2_top_grid_right_pane_g4_ParamLimits

0xe005,	// (0x0001a83a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb5,	// (0x0001c5ea) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb5,	// (0x0001c5ea) vkb2_top_grid_right_pane_g

0xe01b,	// (0x0001a850) vkb2_top_cell_left_pane_g1

0xe032,	// (0x0001a867) vkb2_cell_keypad_pane_g1_ParamLimits

0xe032,	// (0x0001a867) vkb2_cell_keypad_pane_g1

0xe040,	// (0x0001a875) vkb2_cell_keypad_pane_t1_ParamLimits

0xe040,	// (0x0001a875) vkb2_cell_keypad_pane_t1

0xe057,	// (0x0001a88c) vkb2_cell_bottom_grid_pane_ParamLimits

0xe057,	// (0x0001a88c) vkb2_cell_bottom_grid_pane

0xe090,	// (0x0001a8c5) vkb2_cell_bottom_grid_pane_g1

0xd7e4,	// (0x0001a019) aid_call2_pane_cp02

0xd7ec,	// (0x0001a021) aid_call_pane_cp02

0xd7f4,	// (0x0001a029) clock_digital_number_pane_cp10

0xd7fc,	// (0x0001a031) clock_digital_number_pane_cp11

0xd804,	// (0x0001a039) clock_digital_number_pane_cp12

0xd80c,	// (0x0001a041) clock_digital_number_pane_cp13

0xd814,	// (0x0001a049) clock_digital_separator_pane_cp10

0x4bad,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g1

0x4bad,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g2

0xd81c,	// (0x0001a051) popup_clock_digital_analogue_window_cp2_g3

0x4bad,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g4

0xd81c,	// (0x0001a051) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6a,	// (0x0001c59f) popup_clock_digital_analogue_window_cp2_g

0xd824,	// (0x0001a059) popup_clock_digital_analogue_window_cp2_t1

0xd832,	// (0x0001a067) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd75,	// (0x0001c5aa) popup_clock_digital_analogue_window_cp2_t

0xba07,	// (0x0001823c) clock_digital_number_pane_cp10_g1

0xba07,	// (0x0001823c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001c399) clock_digital_number_pane_cp10_g

0xba07,	// (0x0001823c) clock_digital_separator_pane_cp10_g1

0xba07,	// (0x0001823c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001c399) clock_digital_separator_pane_cp10_g

0xd661,	// (0x00019e96) uniindi_top_pane_g3

0xd672,	// (0x00019ea7) uniindi_top_pane_g4

0xddd5,	// (0x0001a60a) vkb2_row_keypad_pane_ParamLimits

0xddd5,	// (0x0001a60a) vkb2_row_keypad_pane

0xe0ac,	// (0x0001a8e1) vkb2_cell_t_keypad_pane_ParamLimits

0xe0ac,	// (0x0001a8e1) vkb2_cell_t_keypad_pane

0xe0b9,	// (0x0001a8ee) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe0b9,	// (0x0001a8ee) vkb2_cell_t_keypad_pane_cp08

0xe0c9,	// (0x0001a8fe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe0c9,	// (0x0001a8fe) vkb2_cell_t_keypad_pane_cp09

0xe0da,	// (0x0001a90f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe0da,	// (0x0001a90f) vkb2_cell_t_keypad_pane_cp01

0xe0ea,	// (0x0001a91f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe0ea,	// (0x0001a91f) vkb2_cell_t_keypad_pane_cp02

0xe0fa,	// (0x0001a92f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe0fa,	// (0x0001a92f) vkb2_cell_t_keypad_pane_cp03

0xe10a,	// (0x0001a93f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe10a,	// (0x0001a93f) vkb2_cell_t_keypad_pane_cp04

0xe11a,	// (0x0001a94f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe11a,	// (0x0001a94f) vkb2_cell_t_keypad_pane_cp05

0xe12a,	// (0x0001a95f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe12a,	// (0x0001a95f) vkb2_cell_t_keypad_pane_cp06

0xe13a,	// (0x0001a96f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe13a,	// (0x0001a96f) vkb2_cell_t_keypad_pane_cp07

0xe14a,	// (0x0001a97f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe14a,	// (0x0001a97f) vkb2_cell_t_keypad_pane_cp10

0xbe47,	// (0x0001867c) vkb2_cell_t_keypad_pane_g1

0xe15f,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1

0x350b,	// (0x0000fd40) popup_grid_graphic2_window

0xe171,	// (0x0001a9a6) aid_size_cell_graphic2_ParamLimits

0xe171,	// (0x0001a9a6) aid_size_cell_graphic2

0xba62,	// (0x00018297) bg_popup_window_pane_cp21_ParamLimits

0xba62,	// (0x00018297) bg_popup_window_pane_cp21

0xe19d,	// (0x0001a9d2) graphic2_pages_pane_ParamLimits

0xe19d,	// (0x0001a9d2) graphic2_pages_pane

0xe1d7,	// (0x0001aa0c) grid_graphic2_control_pane_ParamLimits

0xe1d7,	// (0x0001aa0c) grid_graphic2_control_pane

0xe1ff,	// (0x0001aa34) grid_graphic2_pane_ParamLimits

0xe1ff,	// (0x0001aa34) grid_graphic2_pane

0xe24f,	// (0x0001aa84) cell_graphic2_pane

0x350b,	// (0x0000fd40) main_comp_mode_pane

0xce8f,	// (0x000196c4) list_ai3_gene_pane_ParamLimits

0xd1ed,	// (0x00019a22) bg_popup_window_pane_cp19_ParamLimits

0xd1f9,	// (0x00019a2e) bg_touch_area_indi_pane_ParamLimits

0xd1f9,	// (0x00019a2e) bg_touch_area_indi_pane

0xd20f,	// (0x00019a44) bg_touch_area_indi_pane_cp01_ParamLimits

0xd20f,	// (0x00019a44) bg_touch_area_indi_pane_cp01

0xd225,	// (0x00019a5a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd225,	// (0x00019a5a) bg_touch_area_indi_pane_cp02

0xd23b,	// (0x00019a70) bg_touch_area_indi_pane_cp03_ParamLimits

0xd23b,	// (0x00019a70) bg_touch_area_indi_pane_cp03

0xd251,	// (0x00019a86) popup_slider_window_g1_ParamLimits

0xd26d,	// (0x00019aa2) popup_slider_window_g2_ParamLimits

0xd289,	// (0x00019abe) popup_slider_window_g3_ParamLimits

0xfcff,	// (0x0001c534) popup_slider_window_g_ParamLimits

0xd2e5,	// (0x00019b1a) popup_slider_window_t1_ParamLimits

0xd357,	// (0x00019b8c) small_volume_slider_vertical_pane_ParamLimits

0xe24f,	// (0x0001aa84) cell_graphic2_pane_ParamLimits

0xe28c,	// (0x0001aac1) bg_button_pane_cp10_ParamLimits

0xe28c,	// (0x0001aac1) bg_button_pane_cp10

0xe29d,	// (0x0001aad2) bg_button_pane_cp11_ParamLimits

0xe29d,	// (0x0001aad2) bg_button_pane_cp11

0xe2ae,	// (0x0001aae3) graphic2_pages_pane_g1_ParamLimits

0xe2ae,	// (0x0001aae3) graphic2_pages_pane_g1

0xe2c1,	// (0x0001aaf6) graphic2_pages_pane_g2_ParamLimits

0xe2c1,	// (0x0001aaf6) graphic2_pages_pane_g2

0x0001,

0xfdc3,	// (0x0001c5f8) graphic2_pages_pane_g_ParamLimits

0xfdc3,	// (0x0001c5f8) graphic2_pages_pane_g

0xe2d7,	// (0x0001ab0c) graphic2_pages_pane_t1_ParamLimits

0xe2d7,	// (0x0001ab0c) graphic2_pages_pane_t1

0xe2ed,	// (0x0001ab22) cell_graphic2_control_pane_ParamLimits

0xe2ed,	// (0x0001ab22) cell_graphic2_control_pane

0xe307,	// (0x0001ab3c) cell_graphic2_pane_g1_ParamLimits

0xe307,	// (0x0001ab3c) cell_graphic2_pane_g1

0xe314,	// (0x0001ab49) cell_graphic2_pane_g2_ParamLimits

0xe314,	// (0x0001ab49) cell_graphic2_pane_g2

0xe321,	// (0x0001ab56) cell_graphic2_pane_g3_ParamLimits

0xe321,	// (0x0001ab56) cell_graphic2_pane_g3

0xe32e,	// (0x0001ab63) cell_graphic2_pane_g4_ParamLimits

0xe32e,	// (0x0001ab63) cell_graphic2_pane_g4

0xe33b,	// (0x0001ab70) cell_graphic2_pane_g5_ParamLimits

0xe33b,	// (0x0001ab70) cell_graphic2_pane_g5

0x0004,

0xfdc8,	// (0x0001c5fd) cell_graphic2_pane_g_ParamLimits

0xfdc8,	// (0x0001c5fd) cell_graphic2_pane_g

0xe356,	// (0x0001ab8b) cell_graphic2_pane_t1_ParamLimits

0xe356,	// (0x0001ab8b) cell_graphic2_pane_t1

0x6a7c,	// (0x000132b1) grid_highlight_pane_cp11_ParamLimits

0x6a7c,	// (0x000132b1) grid_highlight_pane_cp11

0x43f2,	// (0x00010c27) bg_button_pane_cp05

0xe36c,	// (0x0001aba1) cell_graphic2_control_pane_g1

0xba07,	// (0x0001823c) bg_touch_area_indi_pane_g1

0xe379,	// (0x0001abae) aid_cmod_rocker_key_size

0xe383,	// (0x0001abb8) aid_cmode_itu_key_size

0xe38d,	// (0x0001abc2) main_cmode_video_pane

0xe395,	// (0x0001abca) main_comp_mode_itu_pane

0xe39f,	// (0x0001abd4) main_comp_mode_rocker_pane

0xe3a7,	// (0x0001abdc) cell_cmode_rocker_pane_ParamLimits

0xe3a7,	// (0x0001abdc) cell_cmode_rocker_pane

0xe3b9,	// (0x0001abee) cell_cmode_itu_pane_ParamLimits

0xe3b9,	// (0x0001abee) cell_cmode_itu_pane

0x43f2,	// (0x00010c27) bg_button_pane_cp06_ParamLimits

0x43f2,	// (0x00010c27) bg_button_pane_cp06

0xbe47,	// (0x0001867c) cell_cmode_rocker_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) cell_cmode_rocker_pane_g1

0xd4cb,	// (0x00019d00) cell_cmode_rocker_pane_g2_ParamLimits

0xd4cb,	// (0x00019d00) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0001c608) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0001c608) cell_cmode_rocker_pane_g

0x350b,	// (0x0000fd40) bg_button_pane_cp07

0xe3ce,	// (0x0001ac03) cell_cmode_itu_pane_g1

0xe3d7,	// (0x0001ac0c) cell_cmode_itu_pane_t1

0xe3e5,	// (0x0001ac1a) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0001c60d) cell_cmode_itu_pane_t

0xd6e3,	// (0x00019f18) aid_touch_ctrl_left

0xd6eb,	// (0x00019f20) aid_touch_ctrl_right

0x350b,	// (0x0000fd40) compa_mode_pane

0xe3f3,	// (0x0001ac28) aid_cmod_rocker_key_size_cp

0xe3fd,	// (0x0001ac32) aid_cmode_itu_key_size_cp

0xe407,	// (0x0001ac3c) compa_mode_pane_g1

0xe40f,	// (0x0001ac44) compa_mode_pane_g2

0xe417,	// (0x0001ac4c) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0001c612) compa_mode_pane_g

0xe41f,	// (0x0001ac54) main_comp_mode_itu_pane_cp

0xe427,	// (0x0001ac5c) main_comp_mode_rocker_pane_cp

0xe42f,	// (0x0001ac64) cell_cmode_itu_pane_cp_ParamLimits

0xe42f,	// (0x0001ac64) cell_cmode_itu_pane_cp

0xe444,	// (0x0001ac79) cell_cmode_rocker_pane_cp_ParamLimits

0xe444,	// (0x0001ac79) cell_cmode_rocker_pane_cp

0x43f2,	// (0x00010c27) bg_button_pane_cp06_cp_ParamLimits

0x43f2,	// (0x00010c27) bg_button_pane_cp06_cp

0xbe47,	// (0x0001867c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbe47,	// (0x0001867c) cell_cmode_rocker_pane_g1_cp

0xba07,	// (0x0001823c) cell_cmode_rocker_pane_g2_cp

0x350b,	// (0x0000fd40) bg_button_pane_cp07_cp

0xe456,	// (0x0001ac8b) cell_cmode_itu_pane_g1_cp

0xe45f,	// (0x0001ac94) cell_cmode_itu_pane_t1_cp

0xe46d,	// (0x0001aca2) cell_cmode_itu_pane_t2_cp

0xb261,	// (0x00017a96) settings_code_pane_cp2

0x36dc,	// (0x0000ff11) bg_popup_window_pane_cp3_ParamLimits

0x3b87,	// (0x000103bc) heading_pane_cp3_ParamLimits

0x3b93,	// (0x000103c8) listscroll_popup_graphic_pane_ParamLimits

0xba70,	// (0x000182a5) fep_hwr_aid_pane_ParamLimits

0xd3cf,	// (0x00019c04) aid_touch_sctrl_top_ParamLimits

0xd3dc,	// (0x00019c11) sctrl_sk_top_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) sctrl_sk_top_pane_g2_ParamLimits

0xfd18,	// (0x0001c54d) sctrl_sk_top_pane_g_ParamLimits

0xd3e9,	// (0x00019c1e) sctrl_sk_top_pane_t1_ParamLimits

0xd3cf,	// (0x00019c04) aid_touch_sctrl_bottom_ParamLimits

0xd3e9,	// (0x00019c1e) sctrl_sk_bottom_pane_t1_ParamLimits

0xd62d,	// (0x00019e62) aid_area_touch_clock

0xdccc,	// (0x0001a501) aid_vkb2_area_top_pane_cell_ParamLimits

0xdccc,	// (0x0001a501) aid_vkb2_area_top_pane_cell

0xddf7,	// (0x0001a62c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xddf7,	// (0x0001a62c) aid_vkb2_area_bottom_pane_cell

0xdf02,	// (0x0001a737) popup_char_count_window

0xe47b,	// (0x0001acb0) popup_char_count_window_g1

0xe484,	// (0x0001acb9) popup_char_count_window_g2

0xe48d,	// (0x0001acc2) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0001c619) popup_char_count_window_g

0xe496,	// (0x0001accb) popup_char_count_window_t1

0xdbba,	// (0x0001a3ef) popup_fep_char_preview_window_ParamLimits

0xdbba,	// (0x0001a3ef) popup_fep_char_preview_window

0xdcea,	// (0x0001a51f) vkb2_top_candi_pane_ParamLimits

0xdcea,	// (0x0001a51f) vkb2_top_candi_pane

0xe4a4,	// (0x0001acd9) cell_vkb2_top_candi_pane_ParamLimits

0xe4a4,	// (0x0001acd9) cell_vkb2_top_candi_pane

0x6f0f,	// (0x00013744) bg_popup_fep_char_preview_window_ParamLimits

0x6f0f,	// (0x00013744) bg_popup_fep_char_preview_window

0xe4dd,	// (0x0001ad12) popup_fep_char_preview_window_t1_ParamLimits

0xe4dd,	// (0x0001ad12) popup_fep_char_preview_window_t1

0xe517,	// (0x0001ad4c) bg_popup_fep_char_preview_window_g1

0xe51f,	// (0x0001ad54) bg_popup_fep_char_preview_window_g2

0xe527,	// (0x0001ad5c) bg_popup_fep_char_preview_window_g3

0xe52f,	// (0x0001ad64) bg_popup_fep_char_preview_window_g4

0xe537,	// (0x0001ad6c) bg_popup_fep_char_preview_window_g5

0xe53f,	// (0x0001ad74) bg_popup_fep_char_preview_window_g6

0xe547,	// (0x0001ad7c) bg_popup_fep_char_preview_window_g7

0xe54f,	// (0x0001ad84) bg_popup_fep_char_preview_window_g8

0xe557,	// (0x0001ad8c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0001c620) bg_popup_fep_char_preview_window_g

0xbe47,	// (0x0001867c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) cell_vkb2_top_candi_pane_g1

0xc19e,	// (0x000189d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc19e,	// (0x000189d3) cell_vkb2_top_candi_pane_g2

0xc1bf,	// (0x000189f4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc1bf,	// (0x000189f4) cell_vkb2_top_candi_pane_g3

0xe55f,	// (0x0001ad94) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe55f,	// (0x0001ad94) cell_vkb2_top_candi_pane_g4

0xe580,	// (0x0001adb5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe580,	// (0x0001adb5) cell_vkb2_top_candi_pane_g5

0xd4cb,	// (0x00019d00) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4cb,	// (0x00019d00) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0001c633) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0001c633) cell_vkb2_top_candi_pane_g

0xe5a1,	// (0x0001add6) cell_vkb2_top_candi_pane_t1

0x7a89,	// (0x000142be) aid_size_touch_slider_mark_ParamLimits

0x7a89,	// (0x000142be) aid_size_touch_slider_mark

0xe1cb,	// (0x0001aa00) grid_graphic2_catg_pane_ParamLimits

0xe1cb,	// (0x0001aa00) grid_graphic2_catg_pane

0xe22b,	// (0x0001aa60) popup_grid_graphic2_window_t1_ParamLimits

0xe22b,	// (0x0001aa60) popup_grid_graphic2_window_t1

0xe23d,	// (0x0001aa72) popup_grid_graphic2_window_t2_ParamLimits

0xe23d,	// (0x0001aa72) popup_grid_graphic2_window_t2

0x0001,

0xfdbe,	// (0x0001c5f3) popup_grid_graphic2_window_t_ParamLimits

0xfdbe,	// (0x0001c5f3) popup_grid_graphic2_window_t

0x43f2,	// (0x00010c27) bg_button_pane_cp05_ParamLimits

0xe36c,	// (0x0001aba1) cell_graphic2_control_pane_g1_ParamLimits

0xe5b7,	// (0x0001adec) cell_graphic2_catg_pane_ParamLimits

0xe5b7,	// (0x0001adec) cell_graphic2_catg_pane

0x350b,	// (0x0000fd40) bg_button_pane_cp12

0xe5c9,	// (0x0001adfe) cell_graphic2_catg_pane_g1

0xd5f9,	// (0x00019e2e) cell_tb_ext_pane_t1_ParamLimits

0xdf92,	// (0x0001a7c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0xdf92,	// (0x0001a7c7) vkb2_top_cell_right_narrow_pane

0xdfaa,	// (0x0001a7df) vkb2_top_cell_right_wide_pane_ParamLimits

0xdfaa,	// (0x0001a7df) vkb2_top_cell_right_wide_pane

0xba62,	// (0x00018297) bg_vkb2_func_pane_ParamLimits

0xba62,	// (0x00018297) bg_vkb2_func_pane

0xe01b,	// (0x0001a850) vkb2_top_cell_left_pane_g1_ParamLimits

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp03_ParamLimits

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp03

0xe090,	// (0x0001a8c5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6976,	// (0x000131ab) bg_vkb2_func_pane_g1

0x696e,	// (0x000131a3) bg_vkb2_func_pane_g2

0x697e,	// (0x000131b3) bg_vkb2_func_pane_g3

0x6986,	// (0x000131bb) bg_vkb2_func_pane_g4

0x698e,	// (0x000131c3) bg_vkb2_func_pane_g5

0x6996,	// (0x000131cb) bg_vkb2_func_pane_g6

0x69a6,	// (0x000131db) bg_vkb2_func_pane_g7

0x699e,	// (0x000131d3) bg_vkb2_func_pane_g8

0x6966,	// (0x0001319b) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0001c640) bg_vkb2_func_pane_g

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp01_ParamLimits

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp01

0xe01b,	// (0x0001a850) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe01b,	// (0x0001a850) vkb2_top_cell_right_wide_pane_g1

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp02_ParamLimits

0xba62,	// (0x00018297) bg_vkb2_fuc_pane_cp02

0xe090,	// (0x0001a8c5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe090,	// (0x0001a8c5) vkb2_top_cell_right_narrow_pane_g1

0xd17f,	// (0x000199b4) aid_touch_area_decrease_ParamLimits

0xd17f,	// (0x000199b4) aid_touch_area_decrease

0xd197,	// (0x000199cc) aid_touch_area_increase_ParamLimits

0xd197,	// (0x000199cc) aid_touch_area_increase

0xd1a3,	// (0x000199d8) aid_touch_area_mute_ParamLimits

0xd1a3,	// (0x000199d8) aid_touch_area_mute

0xd1bf,	// (0x000199f4) aid_touch_area_slider_ParamLimits

0xd1bf,	// (0x000199f4) aid_touch_area_slider

0xd2a5,	// (0x00019ada) popup_slider_window_g4_ParamLimits

0xd2a5,	// (0x00019ada) popup_slider_window_g4

0xd2b1,	// (0x00019ae6) popup_slider_window_g5_ParamLimits

0xd2b1,	// (0x00019ae6) popup_slider_window_g5

0xd2d3,	// (0x00019b08) popup_slider_window_g6_ParamLimits

0xd2d3,	// (0x00019b08) popup_slider_window_g6

0xd311,	// (0x00019b46) popup_slider_window_t2_ParamLimits

0xd311,	// (0x00019b46) popup_slider_window_t2

0x0001,

0xfd0c,	// (0x0001c541) popup_slider_window_t_ParamLimits

0xfd0c,	// (0x0001c541) popup_slider_window_t

0xd329,	// (0x00019b5e) slider_pane_ParamLimits

0xd329,	// (0x00019b5e) slider_pane

0xe5d2,	// (0x0001ae07) slider_pane_g1_ParamLimits

0xe5d2,	// (0x0001ae07) slider_pane_g1

0xe5e6,	// (0x0001ae1b) slider_pane_g2_ParamLimits

0xe5e6,	// (0x0001ae1b) slider_pane_g2

0xe5fc,	// (0x0001ae31) slider_pane_g3_ParamLimits

0xe5fc,	// (0x0001ae31) slider_pane_g3

0x0003,

0xfe1e,	// (0x0001c653) slider_pane_g_ParamLimits

0xfe1e,	// (0x0001c653) slider_pane_g

0xa8e3,	// (0x00017118) popup_tb_float_extension_window_ParamLimits

0xa8e3,	// (0x00017118) popup_tb_float_extension_window

0xe628,	// (0x0001ae5d) aid_size_cell_tb_float_ext

0x350b,	// (0x0000fd40) bg_popup_sub_window_cp28

0xe633,	// (0x0001ae68) grid_tb_float_ext_pane

0xe63b,	// (0x0001ae70) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x0001ae70) cell_tb_float_ext_pane

0xe653,	// (0x0001ae88) cell_tb_float_ext_pane_g1

0xe65c,	// (0x0001ae91) grid_highlight_pane_cp12

0xbbdb,	// (0x00018410) cell_last_hwr_side_pane_ParamLimits

0xbbdb,	// (0x00018410) cell_last_hwr_side_pane

0xba07,	// (0x0001823c) cell_last_hwr_side_pane_g1

0xe665,	// (0x0001ae9a) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0001c65c) cell_last_hwr_side_pane_g

0xdebf,	// (0x0001a6f4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdebf,	// (0x0001a6f4) vkb2_area_bottom_space_btn_pane

0xbe47,	// (0x0001867c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe15f,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe5a1,	// (0x0001add6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe66e,	// (0x0001aea3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe66e,	// (0x0001aea3) vkb2_area_bottom_space_btn_pane_g1

0xe6a4,	// (0x0001aed9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe6a4,	// (0x0001aed9) vkb2_area_bottom_space_btn_pane_g2

0xe6da,	// (0x0001af0f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe6da,	// (0x0001af0f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0001c661) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0001c661) vkb2_area_bottom_space_btn_pane_g

0xbb1f,	// (0x00018354) cel_fep_hwr_func_pane_ParamLimits

0xbb1f,	// (0x00018354) cel_fep_hwr_func_pane

0xbb8b,	// (0x000183c0) cell_hwr_side_button_pane_ParamLimits

0xbb8b,	// (0x000183c0) cell_hwr_side_button_pane

0xd62d,	// (0x00019e62) aid_area_touch_clock_ParamLimits

0x39af,	// (0x000101e4) bg_uniindi_top_pane_ParamLimits

0xd63f,	// (0x00019e74) uniindi_top_pane_g1_ParamLimits

0xd655,	// (0x00019e8a) uniindi_top_pane_g2_ParamLimits

0xd661,	// (0x00019e96) uniindi_top_pane_g3_ParamLimits

0xd672,	// (0x00019ea7) uniindi_top_pane_g4_ParamLimits

0xfd44,	// (0x0001c579) uniindi_top_pane_g_ParamLimits

0xd67f,	// (0x00019eb4) uniindi_top_pane_t1_ParamLimits

0x39af,	// (0x000101e4) bg_vkb2_func_pane_cp01_ParamLimits

0x39af,	// (0x000101e4) bg_vkb2_func_pane_cp01

0xe720,	// (0x0001af55) cel_fep_hwr_func_pane_g1_ParamLimits

0xe720,	// (0x0001af55) cel_fep_hwr_func_pane_g1

0x39af,	// (0x000101e4) bg_vkb2_func_pane_cp02_ParamLimits

0x39af,	// (0x000101e4) bg_vkb2_func_pane_cp02

0xe720,	// (0x0001af55) cell_hwr_side_button_pane_g1_ParamLimits

0xe720,	// (0x0001af55) cell_hwr_side_button_pane_g1

0x688a,	// (0x000130bf) status_pane_g4_ParamLimits

0x688a,	// (0x000130bf) status_pane_g4

0x68a2,	// (0x000130d7) status_pane_t1

0xb7f9,	// (0x0001802e) form2_midp_gauge_slider_cont_pane

0xb801,	// (0x00018036) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb813,	// (0x00018048) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb825,	// (0x0001805a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0001c34c) form2_midp_gauge_slider_pane_t_ParamLimits

0xb837,	// (0x0001806c) form2_midp_slider_pane_ParamLimits

0xdb7a,	// (0x0001a3af) aid_size_cell_func_vkb2_ParamLimits

0xdb7a,	// (0x0001a3af) aid_size_cell_func_vkb2

0xe614,	// (0x0001ae49) slider_pane_g4_ParamLimits

0xe614,	// (0x0001ae49) slider_pane_g4

0xe72e,	// (0x0001af63) form2_midp_gauge_slider_pane_t2_cp01

0xe73c,	// (0x0001af71) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe73c,	// (0x0001af71) form2_midp_gauge_slider_pane_t3_cp01

0xe759,	// (0x0001af8e) form2_midp_slider_pane_cp01

0x350b,	// (0x0000fd40) navi_smil_pane

0xe78d,	// (0x0001afc2) navi_smil_pane_g1

0xe795,	// (0x0001afca) navi_smil_pane_t1

0xe762,	// (0x0001af97) form2_midp_slider_pane_g1

0xe76b,	// (0x0001afa0) form2_midp_slider_pane_g2

0xe773,	// (0x0001afa8) form2_midp_slider_pane_g3

0xe762,	// (0x0001af97) form2_midp_slider_pane_g4

0xe77b,	// (0x0001afb0) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0001c66a) form2_midp_slider_pane_g

0xe710,	// (0x0001af45) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe710,	// (0x0001af45) vkb2_area_bottom_space_btn_pane_g4

0xaa24,	// (0x00017259) lc0_navi_pane_ParamLimits

0xaa24,	// (0x00017259) lc0_navi_pane

0xaa9a,	// (0x000172cf) lc0_stat_indi_pane_ParamLimits

0xaa9a,	// (0x000172cf) lc0_stat_indi_pane

0xaab1,	// (0x000172e6) ls0_title_pane_ParamLimits

0xaab1,	// (0x000172e6) ls0_title_pane

0x43f2,	// (0x00010c27) bg_popup_sub_pane_cp14_ParamLimits

0xd614,	// (0x00019e49) list_uniindi_pane_ParamLimits

0xd620,	// (0x00019e55) uniindi_top_pane_ParamLimits

0xd6bb,	// (0x00019ef0) list_single_uniindi_pane_g1_ParamLimits

0xd6ce,	// (0x00019f03) list_single_uniindi_pane_t1_ParamLimits

0xe7a3,	// (0x0001afd8) lc0_stat_clock_pane_ParamLimits

0xe7a3,	// (0x0001afd8) lc0_stat_clock_pane

0xe7b0,	// (0x0001afe5) lc0_stat_indi_pane_g1_ParamLimits

0xe7b0,	// (0x0001afe5) lc0_stat_indi_pane_g1

0xe7bd,	// (0x0001aff2) lc0_stat_indi_pane_g2_ParamLimits

0xe7bd,	// (0x0001aff2) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0001c675) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0001c675) lc0_stat_indi_pane_g

0xe7ca,	// (0x0001afff) lc0_uni_indicator_pane_ParamLimits

0xe7ca,	// (0x0001afff) lc0_uni_indicator_pane

0xe7d7,	// (0x0001b00c) ls0_title_pane_g1_ParamLimits

0xe7d7,	// (0x0001b00c) ls0_title_pane_g1

0xe7eb,	// (0x0001b020) ls0_title_pane_t1_ParamLimits

0xe7eb,	// (0x0001b020) ls0_title_pane_t1

0xe821,	// (0x0001b056) lc0_uni_indicator_pane_g1_ParamLimits

0xe821,	// (0x0001b056) lc0_uni_indicator_pane_g1

0xe833,	// (0x0001b068) lc0_stat_clock_pane_t1

0x350b,	// (0x0000fd40) main_ai5_pane

0xe841,	// (0x0001b076) ai5_sk_pane_ParamLimits

0xe841,	// (0x0001b076) ai5_sk_pane

0xe84e,	// (0x0001b083) cell_ai5_widget_pane_ParamLimits

0xe84e,	// (0x0001b083) cell_ai5_widget_pane

0xe8a9,	// (0x0001b0de) aid_size_cell_widget_grid

0xe8bb,	// (0x0001b0f0) bg_ai5_widget_pane_ParamLimits

0xe8bb,	// (0x0001b0f0) bg_ai5_widget_pane

0xe8e3,	// (0x0001b118) cell_ai5_widget_pane_g2

0xe8f3,	// (0x0001b128) cell_ai5_widget_pane_g3

0xe907,	// (0x0001b13c) cell_ai5_widget_pane_g4

0xe913,	// (0x0001b148) cell_ai5_widget_pane_g5

0xe91f,	// (0x0001b154) cell_ai5_widget_pane_g6

0xe92b,	// (0x0001b160) cell_ai5_widget_pane_g7

0xe973,	// (0x0001b1a8) cell_ai5_widget_pane_t1_ParamLimits

0xe973,	// (0x0001b1a8) cell_ai5_widget_pane_t1

0xe990,	// (0x0001b1c5) cell_ai5_widget_pane_t2_ParamLimits

0xe990,	// (0x0001b1c5) cell_ai5_widget_pane_t2

0xe9a8,	// (0x0001b1dd) cell_ai5_widget_pane_t3_ParamLimits

0xe9a8,	// (0x0001b1dd) cell_ai5_widget_pane_t3

0xe9c0,	// (0x0001b1f5) cell_ai5_widget_pane_t4_ParamLimits

0xe9c0,	// (0x0001b1f5) cell_ai5_widget_pane_t4

0xe9da,	// (0x0001b20f) cell_ai5_widget_pane_t5_ParamLimits

0xe9da,	// (0x0001b20f) cell_ai5_widget_pane_t5

0xe9f9,	// (0x0001b22e) cell_ai5_widget_pane_t6_ParamLimits

0xe9f9,	// (0x0001b22e) cell_ai5_widget_pane_t6

0xea0b,	// (0x0001b240) cell_ai5_widget_pane_t7_ParamLimits

0xea0b,	// (0x0001b240) cell_ai5_widget_pane_t7

0xea24,	// (0x0001b259) cell_ai5_widget_pane_t8_ParamLimits

0xea24,	// (0x0001b259) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0001c68f) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0001c68f) cell_ai5_widget_pane_t

0xea6c,	// (0x0001b2a1) grid_ai5_widget_pane

0x43f2,	// (0x00010c27) highlight_cell_ai5_widget_pane_ParamLimits

0x43f2,	// (0x00010c27) highlight_cell_ai5_widget_pane

0xea82,	// (0x0001b2b7) ai5_sk_left_pane

0xea8c,	// (0x0001b2c1) ai5_sk_middle_pane

0xea96,	// (0x0001b2cb) ai5_sk_right_pane

0xeaa0,	// (0x0001b2d5) bg_ai5_widget_pane_g1_ParamLimits

0xeaa0,	// (0x0001b2d5) bg_ai5_widget_pane_g1

0xeaac,	// (0x0001b2e1) bg_ai5_widget_pane_g2_ParamLimits

0xeaac,	// (0x0001b2e1) bg_ai5_widget_pane_g2

0xeab8,	// (0x0001b2ed) bg_ai5_widget_pane_g3_ParamLimits

0xeab8,	// (0x0001b2ed) bg_ai5_widget_pane_g3

0xeac4,	// (0x0001b2f9) bg_ai5_widget_pane_g4_ParamLimits

0xeac4,	// (0x0001b2f9) bg_ai5_widget_pane_g4

0xead0,	// (0x0001b305) bg_ai5_widget_pane_g5_ParamLimits

0xead0,	// (0x0001b305) bg_ai5_widget_pane_g5

0xeadc,	// (0x0001b311) bg_ai5_widget_pane_g6_ParamLimits

0xeadc,	// (0x0001b311) bg_ai5_widget_pane_g6

0xeae8,	// (0x0001b31d) bg_ai5_widget_pane_g7_ParamLimits

0xeae8,	// (0x0001b31d) bg_ai5_widget_pane_g7

0xeaf4,	// (0x0001b329) bg_ai5_widget_pane_g8_ParamLimits

0xeaf4,	// (0x0001b329) bg_ai5_widget_pane_g8

0xeb00,	// (0x0001b335) bg_ai5_widget_pane_g9_ParamLimits

0xeb00,	// (0x0001b335) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0001c6a4) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0001c6a4) bg_ai5_widget_pane_g

0xeb28,	// (0x0001b35d) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb28,	// (0x0001b35d) cell_shortcut_ai5_widget_pane

0x37bc,	// (0x0000fff1) bg_cell_shortcut_ai5_widget_pane

0xeb3a,	// (0x0001b36f) cell_grid_ai5_widget_pane_g1

0xeb43,	// (0x0001b378) highlight_cell_shortcut_ai5_widget_pane

0x696e,	// (0x000131a3) ai5_sk_left_pane_g1

0xeb4b,	// (0x0001b380) ai5_sk_left_pane_g2

0xeb53,	// (0x0001b388) ai5_sk_left_pane_g3

0xeb5b,	// (0x0001b390) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0001c6b7) ai5_sk_left_pane_g

0xeb63,	// (0x0001b398) ai5_sk_left_pane_t1

0x6976,	// (0x000131ab) ai5_sk_right_pane_g1

0xeb71,	// (0x0001b3a6) ai5_sk_right_pane_g2

0xeb79,	// (0x0001b3ae) ai5_sk_right_pane_g3

0xeb81,	// (0x0001b3b6) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0001c6c0) ai5_sk_right_pane_g

0xeb89,	// (0x0001b3be) ai5_sk_right_pane_t1

0x6976,	// (0x000131ab) ai5_sk_middle_pane_g1

0x696e,	// (0x000131a3) ai5_sk_middle_pane_g2

0x698e,	// (0x000131c3) ai5_sk_middle_pane_g3

0xeb79,	// (0x0001b3ae) ai5_sk_middle_pane_g4

0xeb53,	// (0x0001b388) ai5_sk_middle_pane_g5

0xeb97,	// (0x0001b3cc) ai5_sk_middle_pane_g6

0xeb9f,	// (0x0001b3d4) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0001c6c9) ai5_sk_middle_pane_g

0xa971,	// (0x000171a6) aid_touch_area_size_lc0_ParamLimits

0xa971,	// (0x000171a6) aid_touch_area_size_lc0

0xc1e0,	// (0x00018a15) cell_hwr_candidate_pane_t1_ParamLimits

0x67bf,	// (0x00012ff4) aid_touch_navi_pane

0xab83,	// (0x000173b8) status_dt_navi_pane_ParamLimits

0xab83,	// (0x000173b8) status_dt_navi_pane

0xab90,	// (0x000173c5) status_dt_sta_pane_ParamLimits

0xab90,	// (0x000173c5) status_dt_sta_pane

0xeba7,	// (0x0001b3dc) dt_sta_controll_pane

0xebb4,	// (0x0001b3e9) dt_sta_indi_pane

0xebc5,	// (0x0001b3fa) dt_sta_title_pane

0x39af,	// (0x000101e4) bg_dt_sta_indi_pane_ParamLimits

0x39af,	// (0x000101e4) bg_dt_sta_indi_pane

0xebd8,	// (0x0001b40d) dt_sta_battery_pane

0xebe0,	// (0x0001b415) dt_sta_indi_pane_g1

0xebe9,	// (0x0001b41e) dt_sta_indi_pane_g2

0xebf2,	// (0x0001b427) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0001c6d8) dt_sta_indi_pane_g

0xebfb,	// (0x0001b430) dt_sta_signal_pane

0x43f2,	// (0x00010c27) bg_dt_sta_title_pane_ParamLimits

0x43f2,	// (0x00010c27) bg_dt_sta_title_pane

0xec04,	// (0x0001b439) dt_sta_title_pane_g1

0xec0c,	// (0x0001b441) dt_sta_title_pane_t1_ParamLimits

0xec0c,	// (0x0001b441) dt_sta_title_pane_t1

0x350b,	// (0x0000fd40) bg_dt_sta_control_pane

0xec21,	// (0x0001b456) dt_sta_controll_pane_g1

0xec2a,	// (0x0001b45f) bg_dt_sta_title_pane_g1

0xec33,	// (0x0001b468) bg_dt_sta_title_pane_g2

0xec3c,	// (0x0001b471) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0001c6df) bg_dt_sta_title_pane_g

0xba07,	// (0x0001823c) bg_dt_sta_indi_pane_g1

0xec45,	// (0x0001b47a) dt_sta_signal_pane_g1

0xec4d,	// (0x0001b482) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0001c6e6) dt_sta_signal_pane_g

0xec55,	// (0x0001b48a) dt_sta_battery_pane_g1

0xec5e,	// (0x0001b493) dt_sta_battery_pane_t1

0xba07,	// (0x0001823c) bg_dt_sta_control_pane_g1

0x4c7d,	// (0x000114b2) fep_china_uni_eep_pane

0x4c85,	// (0x000114ba) fep_china_uni_entry_pane_ParamLimits

0x4c95,	// (0x000114ca) popup_fep_china_uni_window_g1_ParamLimits

0x4ca5,	// (0x000114da) popup_fep_china_uni_window_g2_ParamLimits

0x4ca5,	// (0x000114da) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001bf8d) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001bf8d) popup_fep_china_uni_window_g

0xec6d,	// (0x0001b4a2) fep_china_uni_eep_pane_g1

0xec75,	// (0x0001b4aa) fep_china_uni_eep_pane_t1

0xe784,	// (0x0001afb9) aid_touch_area_size_smil_player

0x685d,	// (0x00013092) lc0_clock_pane

0x6896,	// (0x000130cb) status_pane_g5_ParamLimits

0x6896,	// (0x000130cb) status_pane_g5

0xa693,	// (0x00016ec8) popup_keymap_window

0x6876,	// (0x000130ab) status_icon_pane

0xe8f3,	// (0x0001b128) cell_ai5_widget_pane_g3_ParamLimits

0xe907,	// (0x0001b13c) cell_ai5_widget_pane_g4_ParamLimits

0xe913,	// (0x0001b148) cell_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0001b16c) cell_ai5_widget_pane_g8_ParamLimits

0xe937,	// (0x0001b16c) cell_ai5_widget_pane_g8

0xe94b,	// (0x0001b180) cell_ai5_widget_pane_g9_ParamLimits

0xe94b,	// (0x0001b180) cell_ai5_widget_pane_g9

0xe95f,	// (0x0001b194) cell_ai5_widget_pane_g10_ParamLimits

0xe95f,	// (0x0001b194) cell_ai5_widget_pane_g10

0xec84,	// (0x0001b4b9) status_icon_pane_g1

0x350b,	// (0x0000fd40) bg_popup_sub_pane_cp13

0xec8c,	// (0x0001b4c1) popup_keymap_window_t1

0x5460,	// (0x00011c95) control_pane_g6_ParamLimits

0x5460,	// (0x00011c95) control_pane_g6

0x5453,	// (0x00011c88) control_pane_g7_ParamLimits

0x5453,	// (0x00011c88) control_pane_g7

0x5446,	// (0x00011c7b) control_pane_g8_ParamLimits

0x5446,	// (0x00011c7b) control_pane_g8

0xeba7,	// (0x0001b3dc) dt_sta_controll_pane_ParamLimits

0xebb4,	// (0x0001b3e9) dt_sta_indi_pane_ParamLimits

0xebc5,	// (0x0001b3fa) dt_sta_title_pane_ParamLimits

0x3e0e,	// (0x00010643) aid_size_touch_scroll_bar_cale

0x9ecc,	// (0x00016701) popup_discreet_window_ParamLimits

0x9ecc,	// (0x00016701) popup_discreet_window

0x9f30,	// (0x00016765) popup_sk_window

0x6f0f,	// (0x00013744) bg_popup_sub_pane_cp28_ParamLimits

0x6f0f,	// (0x00013744) bg_popup_sub_pane_cp28

0xec9a,	// (0x0001b4cf) popup_discreet_window_g1_ParamLimits

0xec9a,	// (0x0001b4cf) popup_discreet_window_g1

0xecba,	// (0x0001b4ef) popup_discreet_window_t1_ParamLimits

0xecba,	// (0x0001b4ef) popup_discreet_window_t1

0xecd8,	// (0x0001b50d) popup_discreet_window_t2_ParamLimits

0xecd8,	// (0x0001b50d) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0001c6eb) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0001c6eb) popup_discreet_window_t

0xed2a,	// (0x0001b55f) popup_sk_window_g1

0xed33,	// (0x0001b568) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0001c6f2) popup_sk_window_g

0xed3c,	// (0x0001b571) popup_sk_window_t1

0xed4a,	// (0x0001b57f) popup_sk_window_t1_copy1

0xe8e3,	// (0x0001b118) cell_ai5_widget_pane_g2_ParamLimits

0xea36,	// (0x0001b26b) cell_ai5_widget_pane_t9_ParamLimits

0xea36,	// (0x0001b26b) cell_ai5_widget_pane_t9

0x350b,	// (0x0000fd40) main_fep_fshwr2_pane

0xed58,	// (0x0001b58d) aid_fshwr2_btn_pane

0xed60,	// (0x0001b595) aid_fshwr2_syb_pane

0xed68,	// (0x0001b59d) aid_fshwr2_txt_pane

0xed70,	// (0x0001b5a5) fshwr2_func_candi_pane

0xed78,	// (0x0001b5ad) fshwr2_hwr_syb_pane

0xed80,	// (0x0001b5b5) fshwr2_icf_pane

0x350b,	// (0x0000fd40) fshwr2_icf_bg_pane

0xed9a,	// (0x0001b5cf) fshwr2_icf_pane_t1_ParamLimits

0xed9a,	// (0x0001b5cf) fshwr2_icf_pane_t1

0xba07,	// (0x0001823c) fshwr2_func_candi_pane_g1

0xedb1,	// (0x0001b5e6) fshwr2_func_candi_row_pane_ParamLimits

0xedb1,	// (0x0001b5e6) fshwr2_func_candi_row_pane

0xedc2,	// (0x0001b5f7) cell_fshwr2_syb_pane_ParamLimits

0xedc2,	// (0x0001b5f7) cell_fshwr2_syb_pane

0xbe47,	// (0x0001867c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbe47,	// (0x0001867c) fshwr2_hwr_syb_pane_g1

0x350b,	// (0x0000fd40) bg_popup_call_pane_cp01

0xedd9,	// (0x0001b60e) fshwr2_func_candi_cell_pane_ParamLimits

0xedd9,	// (0x0001b60e) fshwr2_func_candi_cell_pane

0xee04,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee04,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane

0xee1e,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee1e,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1

0xee3e,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee3e,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1

0x350b,	// (0x0000fd40) bg_button_pane_cp08

0x517f,	// (0x000119b4) cell_fshwr2_syb_bg_pane

0xee51,	// (0x0001b686) cell_fshwr2_syb_bg_pane_g1

0xee59,	// (0x0001b68e) cell_fshwr2_syb_bg_pane_t1

0x43f2,	// (0x00010c27) main_tmo_pane

0xb066,	// (0x0001789b) uni_indicator_pane_g1_ParamLimits

0xb07b,	// (0x000178b0) uni_indicator_pane_g2_ParamLimits

0xb091,	// (0x000178c6) uni_indicator_pane_g3_ParamLimits

0x789b,	// (0x000140d0) uni_indicator_pane_g4_ParamLimits

0x789b,	// (0x000140d0) uni_indicator_pane_g4

0x78af,	// (0x000140e4) uni_indicator_pane_g5_ParamLimits

0x78af,	// (0x000140e4) uni_indicator_pane_g5

0x78c3,	// (0x000140f8) uni_indicator_pane_g6_ParamLimits

0x78c3,	// (0x000140f8) uni_indicator_pane_g6

0xf94e,	// (0x0001c183) uni_indicator_pane_g_ParamLimits

0xd163,	// (0x00019998) popup_tmo_note_window_ParamLimits

0xd163,	// (0x00019998) popup_tmo_note_window

0x350b,	// (0x0000fd40) fshwr2_bg_pane

0xee2f,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee2f,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0001c6f7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0001c6f7) fshwr2_func_candi_cell_pane_g

0xba07,	// (0x0001823c) bg_popup_window_pane_cp01

0xee68,	// (0x0001b69d) bg_popup_window_pane_g1_cp01

0xee71,	// (0x0001b6a6) bg_popup_window_pane_cp22_ParamLimits

0xee71,	// (0x0001b6a6) bg_popup_window_pane_cp22

0xee7f,	// (0x0001b6b4) listscroll_tmo_link_pane_ParamLimits

0xee7f,	// (0x0001b6b4) listscroll_tmo_link_pane

0xeebf,	// (0x0001b6f4) popup_tmo_note_window_g1_ParamLimits

0xeebf,	// (0x0001b6f4) popup_tmo_note_window_g1

0xeecc,	// (0x0001b701) tmo_note_info_pane_ParamLimits

0xeecc,	// (0x0001b701) tmo_note_info_pane

0xeee6,	// (0x0001b71b) list_tmo_note_info_pane_g1_ParamLimits

0xeee6,	// (0x0001b71b) list_tmo_note_info_pane_g1

0xeefd,	// (0x0001b732) list_tmo_note_info_pane_g2_ParamLimits

0xeefd,	// (0x0001b732) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0001c6fc) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0001c6fc) list_tmo_note_info_pane_g

0xef19,	// (0x0001b74e) list_tmo_note_info_text_pane_ParamLimits

0xef19,	// (0x0001b74e) list_tmo_note_info_text_pane

0xef9a,	// (0x0001b7cf) list_tmo_link_pane

0xefa7,	// (0x0001b7dc) scroll_pane_cp20

0xefb4,	// (0x0001b7e9) list_single_tmo_link_pane_ParamLimits

0xefb4,	// (0x0001b7e9) list_single_tmo_link_pane

0xefc4,	// (0x0001b7f9) list_single_tmo_link_pane_t1

0xefd2,	// (0x0001b807) list_tmo_note_info_text_pane_t1_ParamLimits

0xefd2,	// (0x0001b807) list_tmo_note_info_text_pane_t1

0x4618,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4618,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01

0x9452,	// (0x00015c87) aid_size_touch_slider_marker

0x9f1c,	// (0x00016751) popup_settings_window_ParamLimits

0x9f1c,	// (0x00016751) popup_settings_window

0x9602,	// (0x00015e37) popup_candi_list_indi_window

0x67bf,	// (0x00012ff4) aid_touch_navi_pane_ParamLimits

0xd3a3,	// (0x00019bd8) rs_clock_indi_pane

0xd3ac,	// (0x00019be1) sctrl_sk_bottom_pane_ParamLimits

0xd3bd,	// (0x00019bf2) sctrl_sk_top_pane_ParamLimits

0xdbd4,	// (0x0001a409) popup_fep_tooltip_window

0xe8a9,	// (0x0001b0de) aid_size_cell_widget_grid_ParamLimits

0xe8d7,	// (0x0001b10c) cell_ai5_widget_pane_g1_ParamLimits

0xe8d7,	// (0x0001b10c) cell_ai5_widget_pane_g1

0xe91f,	// (0x0001b154) cell_ai5_widget_pane_g6_ParamLimits

0xe92b,	// (0x0001b160) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0001c67a) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0001c67a) cell_ai5_widget_pane_g

0xea5a,	// (0x0001b28f) cell_ai5_widget_pane_t10_ParamLimits

0xea5a,	// (0x0001b28f) cell_ai5_widget_pane_t10

0xea6c,	// (0x0001b2a1) grid_ai5_widget_pane_ParamLimits

0xeb0c,	// (0x0001b341) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0c,	// (0x0001b341) cell_contacts_ai5_widget_pane

0xeced,	// (0x0001b522) popup_discreet_window_t3_ParamLimits

0xeced,	// (0x0001b522) popup_discreet_window_t3

0xed88,	// (0x0001b5bd) popup_fshwr2_char_preview_window_ParamLimits

0xed88,	// (0x0001b5bd) popup_fshwr2_char_preview_window

0xef37,	// (0x0001b76c) tmo_note_info_pane_t1

0xef4c,	// (0x0001b781) tmo_note_info_pane_t2

0xef61,	// (0x0001b796) tmo_note_info_pane_t3

0xef76,	// (0x0001b7ab) tmo_note_info_pane_t4

0xef88,	// (0x0001b7bd) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0001c701) tmo_note_info_pane_t

0xef9a,	// (0x0001b7cf) list_tmo_link_pane_ParamLimits

0xefa7,	// (0x0001b7dc) scroll_pane_cp20_ParamLimits

0x350b,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp01

0xefeb,	// (0x0001b820) popup_fshwr2_char_preview_window_t1

0xeff9,	// (0x0001b82e) popup_candi_list_indi_window_g1

0xf002,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane

0xf00e,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1

0xf022,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2

0xf031,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0001c70c) cell_contacts_ai5_widget_pane_g

0xf044,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1

0x43f2,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0bc,	// (0x0001b8f1) settings_container_pane

0x517f,	// (0x000119b4) listscroll_set_pane_copy1

0x80bf,	// (0x000148f4) scroll_pane_cp121_copy1

0xf0c8,	// (0x0001b8fd) set_content_pane_copy1

0xf0d0,	// (0x0001b905) aid_height_set_list_copy1_ParamLimits

0xf0d0,	// (0x0001b905) aid_height_set_list_copy1

0x7ad3,	// (0x00014308) aid_size_parent_copy1_ParamLimits

0x7ad3,	// (0x00014308) aid_size_parent_copy1

0xf0dc,	// (0x0001b911) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0dc,	// (0x0001b911) button_value_adjust_pane_cp6_copy1

0x664e,	// (0x00012e83) list_highlight_pane_cp2_copy1_ParamLimits

0x664e,	// (0x00012e83) list_highlight_pane_cp2_copy1

0xf0f0,	// (0x0001b925) list_set_pane_copy1_ParamLimits

0xf0f0,	// (0x0001b925) list_set_pane_copy1

0xf059,	// (0x0001b88e) main_pane_set_t1_copy1_ParamLimits

0xf059,	// (0x0001b88e) main_pane_set_t1_copy1

0xf093,	// (0x0001b8c8) main_pane_set_t2_copy1_ParamLimits

0xf093,	// (0x0001b8c8) main_pane_set_t2_copy1

0xf17e,	// (0x0001b9b3) main_pane_set_t3_copy1

0xf18c,	// (0x0001b9c1) main_pane_set_t4_copy1

0xf0b0,	// (0x0001b8e5) set_content_pane_g1_copy1_ParamLimits

0xf0b0,	// (0x0001b8e5) set_content_pane_g1_copy1

0xf19a,	// (0x0001b9cf) setting_code_pane_copy1

0xf1a2,	// (0x0001b9d7) setting_slider_graphic_pane_copy1

0xf1a2,	// (0x0001b9d7) setting_slider_pane_copy1

0xf1aa,	// (0x0001b9df) setting_text_pane_copy1

0xf1a2,	// (0x0001b9d7) setting_volume_pane_copy1

0xf1b2,	// (0x0001b9e7) settings_code_pane_cp2_copy1

0xf1ba,	// (0x0001b9ef) settings_code_pane_cp_copy1_ParamLimits

0xf1ba,	// (0x0001b9ef) settings_code_pane_cp_copy1

0xf1ce,	// (0x0001ba03) volume_set_pane_copy1

0xf1d6,	// (0x0001ba0b) volume_set_pane_g10_copy1

0xf1de,	// (0x0001ba13) volume_set_pane_g1_copy1

0xf1e6,	// (0x0001ba1b) volume_set_pane_g2_copy1

0xf1ee,	// (0x0001ba23) volume_set_pane_g3_copy1

0xf1f6,	// (0x0001ba2b) volume_set_pane_g4_copy1

0xf1fe,	// (0x0001ba33) volume_set_pane_g5_copy1

0xf206,	// (0x0001ba3b) volume_set_pane_g6_copy1

0xf20e,	// (0x0001ba43) volume_set_pane_g7_copy1

0xf216,	// (0x0001ba4b) volume_set_pane_g8_copy1

0xf21e,	// (0x0001ba53) volume_set_pane_g9_copy1

0x36dc,	// (0x0000ff11) bg_set_opt_pane_cp_copy1_ParamLimits

0x36dc,	// (0x0000ff11) bg_set_opt_pane_cp_copy1

0x3975,	// (0x000101aa) setting_slider_pane_t1_copy1_ParamLimits

0x3975,	// (0x000101aa) setting_slider_pane_t1_copy1

0xf226,	// (0x0001ba5b) setting_slider_pane_t2_copy1_ParamLimits

0xf226,	// (0x0001ba5b) setting_slider_pane_t2_copy1

0xf23f,	// (0x0001ba74) setting_slider_pane_t3_copy1_ParamLimits

0xf23f,	// (0x0001ba74) setting_slider_pane_t3_copy1

0x398b,	// (0x000101c0) slider_set_pane_copy1_ParamLimits

0x398b,	// (0x000101c0) slider_set_pane_copy1

0x4518,	// (0x00010d4d) set_opt_bg_pane_g1_copy2

0x4520,	// (0x00010d55) set_opt_bg_pane_g2_copy2

0xf256,	// (0x0001ba8b) set_opt_bg_pane_g3_copy2

0x4530,	// (0x00010d65) set_opt_bg_pane_g4_copy2

0x4538,	// (0x00010d6d) set_opt_bg_pane_g5_copy2

0x4540,	// (0x00010d75) set_opt_bg_pane_g6_copy2

0xf25e,	// (0x0001ba93) set_opt_bg_pane_g7_copy2

0xf266,	// (0x0001ba9b) set_opt_bg_pane_g8_copy2

0xf26e,	// (0x0001baa3) set_opt_bg_pane_g9_copy2

0x7a89,	// (0x000142be) aid_size_touch_slider_mark_copy1_ParamLimits

0x7a89,	// (0x000142be) aid_size_touch_slider_mark_copy1

0x7ae5,	// (0x0001431a) slider_set_pane_g1_copy1

0x7aee,	// (0x00014323) slider_set_pane_g2_copy1

0x7c1f,	// (0x00014454) slider_set_pane_g3_copy1_ParamLimits

0x7c1f,	// (0x00014454) slider_set_pane_g3_copy1

0x7c33,	// (0x00014468) slider_set_pane_g4_copy1_ParamLimits

0x7c33,	// (0x00014468) slider_set_pane_g4_copy1

0x7c4b,	// (0x00014480) slider_set_pane_g5_copy1_ParamLimits

0x7c4b,	// (0x00014480) slider_set_pane_g5_copy1

0x7c1f,	// (0x00014454) slider_set_pane_g6_copy1_ParamLimits

0x7c1f,	// (0x00014454) slider_set_pane_g6_copy1

0xf276,	// (0x0001baab) slider_set_pane_g7_copy1_ParamLimits

0xf276,	// (0x0001baab) slider_set_pane_g7_copy1

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp2_copy1

0x371e,	// (0x0000ff53) setting_slider_graphic_pane_g1_copy1

0xf28c,	// (0x0001bac1) setting_slider_graphic_pane_t1_copy1

0xf29b,	// (0x0001bad0) setting_slider_graphic_pane_t2_copy1

0xf2aa,	// (0x0001badf) slider_set_pane_cp_copy1

0xf2ba,	// (0x0001baef) input_focus_pane_cp1_copy1

0xf2c3,	// (0x0001baf8) list_set_text_pane_copy1

0xf2cb,	// (0x0001bb00) setting_text_pane_g1_copy1

0x9d62,	// (0x00016597) set_text_pane_t1_copy1

0xf2ba,	// (0x0001baef) input_focus_pane_cp2_copy1

0xf2cb,	// (0x0001bb00) setting_code_pane_g1_copy1

0xf2d4,	// (0x0001bb09) setting_code_pane_t1_copy1

0xf2e2,	// (0x0001bb17) list_set_graphic_pane_copy1

0x35fc,	// (0x0000fe31) bg_set_opt_pane_cp4_copy1

0xf2f6,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2f6,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0001bb37) list_set_graphic_pane_g2_copy1

0x4efa,	// (0x0001172f) list_set_graphic_pane_t1_copy1_ParamLimits

0x4efa,	// (0x0001172f) list_set_graphic_pane_t1_copy1

0xba07,	// (0x0001823c) rs_clock_indi_pane_g1

0xf30a,	// (0x0001bb3f) rs_clock_indi_pane_t1

0xf318,	// (0x0001bb4d) rs_indi_pane

0xf320,	// (0x0001bb55) rs_indi_pane_g1

0xf329,	// (0x0001bb5e) rs_indi_pane_g2

0xeff9,	// (0x0001b82e) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0001c713) rs_indi_pane_g

0x517f,	// (0x000119b4) bg_popup_preview_window_pane_cp03

0xf332,	// (0x0001bb67) popup_fep_tooltip_window_t1

0xc955,	// (0x0001918a) popup_note2_window_g2_ParamLimits

0xc955,	// (0x0001918a) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0001c4b8) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0001c4b8) popup_note2_window_g

0xce55,	// (0x0001968a) bg_popup_sub_pane_cp11_ParamLimits

0xce62,	// (0x00019697) cell_ai3_links_pane_g1_ParamLimits

0xce79,	// (0x000196ae) cell_ai3_links_pane_t1

0x9d62,	// (0x00016597) set_text_pane_t1_copy1_ParamLimits

0x50a6,	// (0x000118db) cell_graphic_popup_pane_cp2_ParamLimits

0x50a6,	// (0x000118db) cell_graphic_popup_pane_cp2

0xf340,	// (0x0001bb75) cell_graphic_popup_pane_g1_cp2

0x3cbd,	// (0x000104f2) cell_graphic_popup_pane_g2_cp2

0xf348,	// (0x0001bb7d) cell_graphic_popup_pane_g3_cp2

0xf350,	// (0x0001bb85) cell_graphic_popup_pane_t2_cp2

0x3cce,	// (0x00010503) grid_highlight_pane_cp3_cp2

0x4904,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x43f2,	// (0x00010c27) main_tmo_pane_ParamLimits

0xd15b,	// (0x00019990) popup_tmo_big_image_note_window

0xe8c7,	// (0x0001b0fc) cell_ai5_widget_list_pane

0xe8cf,	// (0x0001b104) cell_ai5_widget_lrg_icon_pane

0xef37,	// (0x0001b76c) tmo_note_info_pane_t1_ParamLimits

0xef4c,	// (0x0001b781) tmo_note_info_pane_t2_ParamLimits

0xef61,	// (0x0001b796) tmo_note_info_pane_t3_ParamLimits

0xef76,	// (0x0001b7ab) tmo_note_info_pane_t4_ParamLimits

0xef88,	// (0x0001b7bd) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0001c701) tmo_note_info_pane_t_ParamLimits

0xf0bc,	// (0x0001b8f1) settings_container_pane_ParamLimits

0xf2b2,	// (0x0001bae7) indicator_popup_pane_cp5

0xf2b2,	// (0x0001bae7) indicator_popup_pane_cp6

0xf2e2,	// (0x0001bb17) list_set_graphic_pane_copy1_ParamLimits

0x350b,	// (0x0000fd40) bg_popup_window_pane_cp23

0xf35e,	// (0x0001bb93) popup_tmo_big_image_note_window_g1

0xf367,	// (0x0001bb9c) popup_tmo_big_image_note_window_t1

0xf375,	// (0x0001bbaa) popup_tmo_big_image_note_window_t2

0xf383,	// (0x0001bbb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0001c71a) popup_tmo_big_image_note_window_t

0xf391,	// (0x0001bbc6) cell_ai5_widget_lrg_icon_pane_g1

0xf399,	// (0x0001bbce) cell_ai5_widget_lrg_icon_pane_t1

0xf3a7,	// (0x0001bbdc) cell_ai5_widget_list_row_pane_ParamLimits

0xf3a7,	// (0x0001bbdc) cell_ai5_widget_list_row_pane

0xf3c0,	// (0x0001bbf5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3c0,	// (0x0001bbf5) cell_ai5_widget_list_row_pane_g1

0xf3cd,	// (0x0001bc02) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3cd,	// (0x0001bc02) cell_ai5_widget_list_row_pane_t1

0xf3e5,	// (0x0001bc1a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3e5,	// (0x0001bc1a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x0001c721) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0001c721) cell_ai5_widget_list_row_pane_t

0x350b,	// (0x0000fd40) main_fep_vtchi_ss_pane

0xf3f7,	// (0x0001bc2c) popup_fep_char_pre_window

0xf3ff,	// (0x0001bc34) popup_fep_ituss_window

0xf408,	// (0x0001bc3d) popup_fep_vkbss_window

0xf411,	// (0x0001bc46) grid_vkbss_keypad_pane_ParamLimits

0xf411,	// (0x0001bc46) grid_vkbss_keypad_pane

0xf421,	// (0x0001bc56) ituss_keypad_pane

0xf429,	// (0x0001bc5e) aid_vkbss_key_offset_ParamLimits

0xf429,	// (0x0001bc5e) aid_vkbss_key_offset

0xf438,	// (0x0001bc6d) cell_vkbss_key_pane_ParamLimits

0xf438,	// (0x0001bc6d) cell_vkbss_key_pane

0xf44e,	// (0x0001bc83) bg_cell_vkbss_key_g1_ParamLimits

0xf44e,	// (0x0001bc83) bg_cell_vkbss_key_g1

0xf45a,	// (0x0001bc8f) cell_vkbss_key_3p_pane_ParamLimits

0xf45a,	// (0x0001bc8f) cell_vkbss_key_3p_pane

0xf46e,	// (0x0001bca3) cell_vkbss_key_g1_ParamLimits

0xf46e,	// (0x0001bca3) cell_vkbss_key_g1

0xf482,	// (0x0001bcb7) cell_vkbss_key_t1_ParamLimits

0xf482,	// (0x0001bcb7) cell_vkbss_key_t1

0xf4ad,	// (0x0001bce2) cell_ituss_key_pane_ParamLimits

0xf4ad,	// (0x0001bce2) cell_ituss_key_pane

0xf4bc,	// (0x0001bcf1) bg_cell_ituss_key_g1_ParamLimits

0xf4bc,	// (0x0001bcf1) bg_cell_ituss_key_g1

0xf4c8,	// (0x0001bcfd) cell_ituss_key_pane_g1_ParamLimits

0xf4c8,	// (0x0001bcfd) cell_ituss_key_pane_g1

0xf4d4,	// (0x0001bd09) cell_ituss_key_pane_g2_ParamLimits

0xf4d4,	// (0x0001bd09) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0001c726) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0001c726) cell_ituss_key_pane_g

0xf4e7,	// (0x0001bd1c) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0001bd1c) cell_ituss_key_t1

0xf505,	// (0x0001bd3a) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0001bd3a) cell_ituss_key_t2

0xf524,	// (0x0001bd59) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0001bd59) cell_ituss_key_t3

0xf543,	// (0x0001bd78) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0001bd78) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0001c72b) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0001c72b) cell_ituss_key_t

0xf562,	// (0x0001bd97) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0001bd9f) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0001bda7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0001c734) cell_vkbss_key_3p_pane_g

0x350b,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0001bdaf) popup_fep_char_pre_window_t1

0xe89f,	// (0x0001b0d4) main_ai5_sk_pane

0xf002,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf00e,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf022,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf031,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0001c70c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf044,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x43f2,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001bdbe) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

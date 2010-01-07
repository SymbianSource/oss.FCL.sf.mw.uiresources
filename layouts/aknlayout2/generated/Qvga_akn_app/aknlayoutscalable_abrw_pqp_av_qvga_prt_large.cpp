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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002cc9a };

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
0xa0c6,	// (0x00036d60) Screen

0xa0d0,	// (0x00036d6a) application_window_ParamLimits

0xa0d0,	// (0x00036d6a) application_window

0x3259,	// (0x0002fef3) screen_g1

0xa119,	// (0x00036db3) area_bottom_pane_ParamLimits

0xa119,	// (0x00036db3) area_bottom_pane

0x332e,	// (0x0002ffc8) area_top_pane_ParamLimits

0x332e,	// (0x0002ffc8) area_top_pane

0xa1d1,	// (0x00036e6b) main_pane_ParamLimits

0xa1d1,	// (0x00036e6b) main_pane

0x33a6,	// (0x00030040) misc_graphics

0xb323,	// (0x00037fbd) battery_pane_ParamLimits

0xb323,	// (0x00037fbd) battery_pane

0x8429,	// (0x000350c3) bg_status_flat_pane_g8

0x8431,	// (0x000350cb) bg_status_flat_pane_g9

0x7a4f,	// (0x000346e9) context_pane_ParamLimits

0x7a4f,	// (0x000346e9) context_pane

0xb455,	// (0x000380ef) navi_pane_ParamLimits

0xb455,	// (0x000380ef) navi_pane

0xb4c1,	// (0x0003815b) signal_pane_ParamLimits

0xb4c1,	// (0x0003815b) signal_pane

0x0008,

0xf8b2,	// (0x0003c54c) bg_status_flat_pane_g

0xb522,	// (0x000381bc) status_pane_g1_ParamLimits

0xb522,	// (0x000381bc) status_pane_g1

0xb52e,	// (0x000381c8) status_pane_g2_ParamLimits

0xb52e,	// (0x000381c8) status_pane_g2

0x7ab5,	// (0x0003474f) status_pane_g3_ParamLimits

0x7ab5,	// (0x0003474f) status_pane_g3

0x0004,

0xf7e5,	// (0x0003c47f) status_pane_g_ParamLimits

0xf7e5,	// (0x0003c47f) status_pane_g

0xb53a,	// (0x000381d4) title_pane_ParamLimits

0xb53a,	// (0x000381d4) title_pane

0xb577,	// (0x00038211) uni_indicator_pane_ParamLimits

0xb577,	// (0x00038211) uni_indicator_pane

0x78b1,	// (0x0003454b) bg_list_pane_ParamLimits

0x78b1,	// (0x0003454b) bg_list_pane

0xed1e,	// (0x0003b9b8) find_pane

0xaf2f,	// (0x00037bc9) listscroll_app_pane_ParamLimits

0xaf2f,	// (0x00037bc9) listscroll_app_pane

0x78d1,	// (0x0003456b) listscroll_form_pane

0xed26,	// (0x0003b9c0) listscroll_gen_pane_ParamLimits

0xed26,	// (0x0003b9c0) listscroll_gen_pane

0x78d1,	// (0x0003456b) listscroll_set_pane

0xa73d,	// (0x000373d7) main_idle_act_pane

0x768f,	// (0x00034329) main_idle_trad_pane

0x768f,	// (0x00034329) main_list_empty_pane

0x6e64,	// (0x00033afe) main_midp_pane

0x78eb,	// (0x00034585) main_pane_g1_ParamLimits

0x78eb,	// (0x00034585) main_pane_g1

0xaf3b,	// (0x00037bd5) popup_ai_message_window_ParamLimits

0xaf3b,	// (0x00037bd5) popup_ai_message_window

0xafaf,	// (0x00037c49) popup_fep_china_uni_window_ParamLimits

0xafaf,	// (0x00037c49) popup_fep_china_uni_window

0x791b,	// (0x000345b5) popup_fep_japan_candidate_window_ParamLimits

0x791b,	// (0x000345b5) popup_fep_japan_candidate_window

0x7939,	// (0x000345d3) popup_fep_japan_predictive_window_ParamLimits

0x7939,	// (0x000345d3) popup_fep_japan_predictive_window

0xafed,	// (0x00037c87) popup_find_window

0xaffa,	// (0x00037c94) popup_grid_graphic_window_ParamLimits

0xaffa,	// (0x00037c94) popup_grid_graphic_window

0x7965,	// (0x000345ff) popup_large_graphic_colour_window

0xb018,	// (0x00037cb2) popup_menu_window_ParamLimits

0xb018,	// (0x00037cb2) popup_menu_window

0xb150,	// (0x00037dea) popup_note_image_window

0xb13e,	// (0x00037dd8) popup_note_wait_window_ParamLimits

0xb13e,	// (0x00037dd8) popup_note_wait_window

0xb13e,	// (0x00037dd8) popup_note_window_ParamLimits

0xb13e,	// (0x00037dd8) popup_note_window

0xb1a4,	// (0x00037e3e) popup_query_code_window_ParamLimits

0xb1a4,	// (0x00037e3e) popup_query_code_window

0x7984,	// (0x0003461e) popup_query_data_code_window_ParamLimits

0x7984,	// (0x0003461e) popup_query_data_code_window

0xb1b6,	// (0x00037e50) popup_query_data_window_ParamLimits

0xb1b6,	// (0x00037e50) popup_query_data_window

0xb1cc,	// (0x00037e66) popup_query_sat_info_window_ParamLimits

0xb1cc,	// (0x00037e66) popup_query_sat_info_window

0xb1fd,	// (0x00037e97) popup_snote_single_graphic_window_ParamLimits

0xb1fd,	// (0x00037e97) popup_snote_single_graphic_window

0xb1fd,	// (0x00037e97) popup_snote_single_text_window_ParamLimits

0xb1fd,	// (0x00037e97) popup_snote_single_text_window

0x7999,	// (0x00034633) popup_sub_window_general

0x79db,	// (0x00034675) popup_window_general_ParamLimits

0x79db,	// (0x00034675) popup_window_general

0x79ee,	// (0x00034688) power_save_pane

0xadb3,	// (0x00037a4d) control_pane_g1_ParamLimits

0xadb3,	// (0x00037a4d) control_pane_g1

0xadd4,	// (0x00037a6e) control_pane_g2_ParamLimits

0xadd4,	// (0x00037a6e) control_pane_g2

0x789b,	// (0x00034535) control_pane_g3_ParamLimits

0x789b,	// (0x00034535) control_pane_g3

0x0007,

0xf7cd,	// (0x0003c467) control_pane_g_ParamLimits

0xf7cd,	// (0x0003c467) control_pane_g

0xae3e,	// (0x00037ad8) control_pane_t1_ParamLimits

0xae3e,	// (0x00037ad8) control_pane_t1

0xae90,	// (0x00037b2a) control_pane_t2_ParamLimits

0xae90,	// (0x00037b2a) control_pane_t2

0x0002,

0xf7de,	// (0x0003c478) control_pane_t_ParamLimits

0xf7de,	// (0x0003c478) control_pane_t

0x77be,	// (0x00034458) navi_navi_volume_pane_cp1

0x77c7,	// (0x00034461) status_small_icon_pane

0x77cf,	// (0x00034469) status_small_pane_g1_ParamLimits

0x77cf,	// (0x00034469) status_small_pane_g1

0x7803,	// (0x0003449d) status_small_pane_g2_ParamLimits

0x7803,	// (0x0003449d) status_small_pane_g2

0x780f,	// (0x000344a9) status_small_pane_g3_ParamLimits

0x780f,	// (0x000344a9) status_small_pane_g3

0x781b,	// (0x000344b5) status_small_pane_g4_ParamLimits

0x781b,	// (0x000344b5) status_small_pane_g4

0x7827,	// (0x000344c1) status_small_pane_g5_ParamLimits

0x7827,	// (0x000344c1) status_small_pane_g5

0x7834,	// (0x000344ce) status_small_pane_g6_ParamLimits

0x7834,	// (0x000344ce) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003c456) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003c456) status_small_pane_g

0x7864,	// (0x000344fe) status_small_pane_t1

0x7887,	// (0x00034521) status_small_wait_pane_ParamLimits

0x7887,	// (0x00034521) status_small_wait_pane

0xaa41,	// (0x000376db) aid_levels_signal_ParamLimits

0xaa41,	// (0x000376db) aid_levels_signal

0xaa52,	// (0x000376ec) signal_pane_g1_ParamLimits

0xaa52,	// (0x000376ec) signal_pane_g1

0xaa68,	// (0x00037702) signal_pane_g2_ParamLimits

0xaa68,	// (0x00037702) signal_pane_g2

0x0001,

0xf751,	// (0x0003c3eb) signal_pane_g_ParamLimits

0xf751,	// (0x0003c3eb) signal_pane_g

0x7234,	// (0x00033ece) context_pane_g1

0xa3d0,	// (0x0003706a) title_pane_g1

0xa3fa,	// (0x00037094) title_pane_t1

0x3530,	// (0x000301ca) title_pane_t2

0x3556,	// (0x000301f0) title_pane_t3

0x0002,

0xf59b,	// (0x0003c235) title_pane_t

0xb58d,	// (0x00038227) aid_levels_battery_ParamLimits

0xb58d,	// (0x00038227) aid_levels_battery

0xb5a0,	// (0x0003823a) battery_pane_g1_ParamLimits

0xb5a0,	// (0x0003823a) battery_pane_g1

0xb5b5,	// (0x0003824f) battery_pane_g2_ParamLimits

0xb5b5,	// (0x0003824f) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003c48a) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003c48a) battery_pane_g

0xba03,	// (0x0003869d) uni_indicator_pane_g1

0xba18,	// (0x000386b2) uni_indicator_pane_g2

0xba2e,	// (0x000386c8) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003c5f4) uni_indicator_pane_g

0x6d88,	// (0x00033a22) navi_icon_pane_ParamLimits

0x6d88,	// (0x00033a22) navi_icon_pane

0x33a6,	// (0x00030040) navi_midp_pane

0x33a6,	// (0x00030040) navi_navi_pane

0x6d88,	// (0x00033a22) navi_text_pane_ParamLimits

0x6d88,	// (0x00033a22) navi_text_pane

0x3259,	// (0x0002fef3) status_small_wait_pane_g1

0x3a9b,	// (0x00030735) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003c5ef) status_small_wait_pane_g

0x8eea,	// (0x00035b84) navi_navi_icon_text_pane

0x8f04,	// (0x00035b9e) navi_navi_pane_g1_ParamLimits

0x8f04,	// (0x00035b9e) navi_navi_pane_g1

0x8ef2,	// (0x00035b8c) navi_navi_pane_g2_ParamLimits

0x8ef2,	// (0x00035b8c) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003c5bd) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003c5bd) navi_navi_pane_g

0x8f16,	// (0x00035bb0) navi_navi_tabs_pane

0x8eea,	// (0x00035b84) navi_navi_text_pane

0x8eea,	// (0x00035b84) navi_navi_volume_pane

0x896f,	// (0x00035609) navi_text_pane_t1

0x8963,	// (0x000355fd) navi_icon_pane_g1

0x88b7,	// (0x00035551) navi_navi_text_pane_t1

0xb9cd,	// (0x00038667) navi_navi_volume_pane_g1

0xb9d5,	// (0x0003866f) volume_small_pane

0xb93f,	// (0x000385d9) navi_navi_icon_text_pane_g1

0xb947,	// (0x000385e1) navi_navi_icon_text_pane_t1

0x8471,	// (0x0003510b) navi_tabs_2_long_pane

0x8471,	// (0x0003510b) navi_tabs_2_pane

0x8471,	// (0x0003510b) navi_tabs_3_long_pane

0x8471,	// (0x0003510b) navi_tabs_3_pane

0x8471,	// (0x0003510b) navi_tabs_4_pane

0xb91f,	// (0x000385b9) tabs_2_active_pane_ParamLimits

0xb91f,	// (0x000385b9) tabs_2_active_pane

0xb92f,	// (0x000385c9) tabs_2_passive_pane_ParamLimits

0xb92f,	// (0x000385c9) tabs_2_passive_pane

0xb8ed,	// (0x00038587) tabs_3_active_pane_ParamLimits

0xb8ed,	// (0x00038587) tabs_3_active_pane

0xb8fd,	// (0x00038597) tabs_3_passive_pane_ParamLimits

0xb8fd,	// (0x00038597) tabs_3_passive_pane

0xb90e,	// (0x000385a8) tabs_3_passive_pane_cp_ParamLimits

0xb90e,	// (0x000385a8) tabs_3_passive_pane_cp

0xb8a9,	// (0x00038543) tabs_4_active_pane_ParamLimits

0xb8a9,	// (0x00038543) tabs_4_active_pane

0xb8ba,	// (0x00038554) tabs_4_passive_pane_ParamLimits

0xb8ba,	// (0x00038554) tabs_4_passive_pane

0xb8cb,	// (0x00038565) tabs_4_passive_pane_cp_ParamLimits

0xb8cb,	// (0x00038565) tabs_4_passive_pane_cp

0xb8dc,	// (0x00038576) tabs_4_passive_pane_cp2_ParamLimits

0xb8dc,	// (0x00038576) tabs_4_passive_pane_cp2

0xb889,	// (0x00038523) tabs_2_long_active_pane_ParamLimits

0xb889,	// (0x00038523) tabs_2_long_active_pane

0xb899,	// (0x00038533) tabs_2_long_passive_pane_ParamLimits

0xb899,	// (0x00038533) tabs_2_long_passive_pane

0xb854,	// (0x000384ee) tabs_3_long_active_pane_ParamLimits

0xb854,	// (0x000384ee) tabs_3_long_active_pane

0xb865,	// (0x000384ff) tabs_3_long_passive_pane_ParamLimits

0xb865,	// (0x000384ff) tabs_3_long_passive_pane

0xb878,	// (0x00038512) tabs_3_long_passive_pane_cp_ParamLimits

0xb878,	// (0x00038512) tabs_3_long_passive_pane_cp

0xb7fa,	// (0x00038494) volume_small_pane_g1

0xb803,	// (0x0003849d) volume_small_pane_g2

0xb80c,	// (0x000384a6) volume_small_pane_g3

0xb815,	// (0x000384af) volume_small_pane_g4

0xb81e,	// (0x000384b8) volume_small_pane_g5

0xb827,	// (0x000384c1) volume_small_pane_g6

0xb830,	// (0x000384ca) volume_small_pane_g7

0xb839,	// (0x000384d3) volume_small_pane_g8

0xb842,	// (0x000384dc) volume_small_pane_g9

0xb84b,	// (0x000384e5) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003c589) volume_small_pane_g

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp2_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp2

0x3576,	// (0x00030210) tabs_3_active_pane_g1

0xa462,	// (0x000370fc) tabs_3_active_pane_t1

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp2_ParamLimits

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp2

0x3576,	// (0x00030210) tabs_3_passive_pane_g1

0xa462,	// (0x000370fc) tabs_3_passive_pane_t1

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp3_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp3

0xa474,	// (0x0003710e) tabs_4_active_pane_g1

0xa47c,	// (0x00037116) tabs_4_active_pane_t1

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp3_ParamLimits

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp3

0xa474,	// (0x0003710e) tabs_4_1_passive_pane_g1

0xa47c,	// (0x00037116) tabs_4_1_passive_pane_t1

0x6e64,	// (0x00033afe) list_highlight_pane_cp2

0xbb4c,	// (0x000387e6) list_set_pane_ParamLimits

0xbb4c,	// (0x000387e6) list_set_pane

0xbbda,	// (0x00038874) main_pane_set_t1_ParamLimits

0xbbda,	// (0x00038874) main_pane_set_t1

0xbbfa,	// (0x00038894) main_pane_set_t2_ParamLimits

0xbbfa,	// (0x00038894) main_pane_set_t2

0xbc0c,	// (0x000388a6) main_pane_set_t3_ParamLimits

0xbc0c,	// (0x000388a6) main_pane_set_t3

0xbc1e,	// (0x000388b8) main_pane_set_t4_ParamLimits

0xbc1e,	// (0x000388b8) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003c659) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003c659) main_pane_set_t

0xbc30,	// (0x000388ca) setting_code_pane

0xbc38,	// (0x000388d2) setting_slider_graphic_pane

0xbc38,	// (0x000388d2) setting_slider_pane

0xbc38,	// (0x000388d2) setting_text_pane

0xbc38,	// (0x000388d2) setting_volume_pane

0xa48e,	// (0x00037128) volume_set_pane

0x35b2,	// (0x0003024c) bg_set_opt_pane_cp

0xa496,	// (0x00037130) setting_slider_pane_t1

0xa4ac,	// (0x00037146) setting_slider_pane_t2

0xa4c5,	// (0x0003715f) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003c23c) setting_slider_pane_t

0xa4dc,	// (0x00037176) slider_set_pane

0x33a6,	// (0x00030040) bg_set_opt_pane_cp2

0x361c,	// (0x000302b6) setting_slider_graphic_pane_g1

0xa4f2,	// (0x0003718c) setting_slider_graphic_pane_t1

0xa501,	// (0x0003719b) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003c243) setting_slider_graphic_pane_t

0xa510,	// (0x000371aa) slider_set_pane_cp

0x33a6,	// (0x00030040) input_focus_pane_cp1

0x8dbf,	// (0x00035a59) list_set_text_pane

0x3259,	// (0x0002fef3) setting_text_pane_g1

0x33a6,	// (0x00030040) input_focus_pane_cp2

0x3259,	// (0x0002fef3) setting_code_pane_g1

0x364b,	// (0x000302e5) setting_code_pane_t1

0xe607,	// (0x0003b2a1) set_text_pane_t1_ParamLimits

0xe607,	// (0x0003b2a1) set_text_pane_t1

0x6d37,	// (0x000339d1) set_opt_bg_pane_g1

0x6d3f,	// (0x000339d9) set_opt_bg_pane_g2

0xbb0c,	// (0x000387a6) set_opt_bg_pane_g3

0x6d4f,	// (0x000339e9) set_opt_bg_pane_g4

0x6d57,	// (0x000339f1) set_opt_bg_pane_g5

0x6d5f,	// (0x000339f9) set_opt_bg_pane_g6

0xbb14,	// (0x000387ae) set_opt_bg_pane_g7

0xbb1c,	// (0x000387b6) set_opt_bg_pane_g8

0xbb24,	// (0x000387be) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003c646) set_opt_bg_pane_g

0x8db2,	// (0x00035a4c) slider_set_pane_g1

0xbaa8,	// (0x00038742) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003c637) slider_set_pane_g

0xba44,	// (0x000386de) volume_set_pane_g1

0xba4c,	// (0x000386e6) volume_set_pane_g2

0xba54,	// (0x000386ee) volume_set_pane_g3

0xba5c,	// (0x000386f6) volume_set_pane_g4

0xba64,	// (0x000386fe) volume_set_pane_g5

0xba6c,	// (0x00038706) volume_set_pane_g6

0xba74,	// (0x0003870e) volume_set_pane_g7

0xba7c,	// (0x00038716) volume_set_pane_g8

0xba84,	// (0x0003871e) volume_set_pane_g9

0xba8c,	// (0x00038726) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003c60f) volume_set_pane_g

0xa518,	// (0x000371b2) indicator_pane_ParamLimits

0xa518,	// (0x000371b2) indicator_pane

0xa524,	// (0x000371be) main_idle_pane_g2_ParamLimits

0xa524,	// (0x000371be) main_idle_pane_g2

0xa548,	// (0x000371e2) main_pane_idle_g1_ParamLimits

0xa548,	// (0x000371e2) main_pane_idle_g1

0x36d6,	// (0x00030370) popup_clock_digital_analogue_window_ParamLimits

0x36d6,	// (0x00030370) popup_clock_digital_analogue_window

0xa555,	// (0x000371ef) soft_indicator_pane_ParamLimits

0xa555,	// (0x000371ef) soft_indicator_pane

0xa561,	// (0x000371fb) wallpaper_pane_ParamLimits

0xa561,	// (0x000371fb) wallpaper_pane

0x3259,	// (0x0002fef3) wallpaper_pane_g1

0xa56d,	// (0x00037207) indicator_pane_g1_ParamLimits

0xa56d,	// (0x00037207) indicator_pane_g1

0x8eb9,	// (0x00035b53) navi_navi_icon_text_pane_srt_g1

0x3749,	// (0x000303e3) soft_indicator_pane_t1

0x3763,	// (0x000303fd) aid_ps_area_pane

0xa579,	// (0x00037213) aid_ps_clock_pane

0x3780,	// (0x0003041a) aid_ps_indicator_pane

0x378c,	// (0x00030426) indicator_ps_pane_ParamLimits

0x378c,	// (0x00030426) indicator_ps_pane

0x379b,	// (0x00030435) power_save_pane_g1_ParamLimits

0x379b,	// (0x00030435) power_save_pane_g1

0x37a7,	// (0x00030441) power_save_pane_g2_ParamLimits

0x37a7,	// (0x00030441) power_save_pane_g2

0xa0de,	// (0x00036d78) aid_navinavi_width_pane

0x3763,	// (0x000303fd) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003c248) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003c248) power_save_pane_g

0x37b5,	// (0x0003044f) power_save_pane_t1_ParamLimits

0x37b5,	// (0x0003044f) power_save_pane_t1

0xa579,	// (0x00037213) aid_ps_clock_pane_ParamLimits

0x3780,	// (0x0003041a) aid_ps_indicator_pane_ParamLimits

0x37c7,	// (0x00030461) power_save_pane_t4_ParamLimits

0x37c7,	// (0x00030461) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003c24d) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003c24d) power_save_pane_t

0x37f1,	// (0x0003048b) power_save_t3_ParamLimits

0x37f1,	// (0x0003048b) power_save_t3

0x37dc,	// (0x00030476) power_save_t2_ParamLimits

0x37dc,	// (0x00030476) power_save_t2

0x3806,	// (0x000304a0) indicator_ps_pane_g1

0xa585,	// (0x0003721f) ai_gene_pane_ParamLimits

0xa585,	// (0x0003721f) ai_gene_pane

0xa591,	// (0x0003722b) ai_links_pane_ParamLimits

0xa591,	// (0x0003722b) ai_links_pane

0xa59d,	// (0x00037237) indicator_pane_cp1_ParamLimits

0xa59d,	// (0x00037237) indicator_pane_cp1

0xa5a9,	// (0x00037243) main_pane_idle_g1_cp_ParamLimits

0xa5a9,	// (0x00037243) main_pane_idle_g1_cp

0x385f,	// (0x000304f9) popup_ai_links_title_window

0xa5b5,	// (0x0003724f) soft_indicator_pane_cp1_ParamLimits

0xa5b5,	// (0x0003724f) soft_indicator_pane_cp1

0x8bf4,	// (0x0003588e) ai_links_pane_g1

0x8bfd,	// (0x00035897) grid_ai_links_pane

0xb9fa,	// (0x00038694) ai_gene_pane_1

0x8be2,	// (0x0003587c) ai_gene_pane_2

0x8beb,	// (0x00035885) list_highlight_pane_cp4

0xb9de,	// (0x00038678) cell_ai_link_pane_ParamLimits

0xb9de,	// (0x00038678) cell_ai_link_pane

0x8bda,	// (0x00035874) cell_ai_link_pane_g1

0x3a9b,	// (0x00030735) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003c5ea) cell_ai_link_pane_g

0x33a6,	// (0x00030040) grid_highlight_cp2

0x33a6,	// (0x00030040) bg_popup_sub_pane_cp1

0x388a,	// (0x00030524) popup_ai_links_title_window_t1

0x8b2c,	// (0x000357c6) ai_gene_pane_1_g1_ParamLimits

0x8b2c,	// (0x000357c6) ai_gene_pane_1_g1

0x8b38,	// (0x000357d2) ai_gene_pane_1_g2_ParamLimits

0x8b38,	// (0x000357d2) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003c5e0) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003c5e0) ai_gene_pane_1_g

0x8b45,	// (0x000357df) ai_gene_pane_1_t1_ParamLimits

0x8b45,	// (0x000357df) ai_gene_pane_1_t1

0x8b79,	// (0x00035813) grid_ai_soft_ind_pane

0x8b17,	// (0x000357b1) ai_gene_pane_2_t1_ParamLimits

0x8b17,	// (0x000357b1) ai_gene_pane_2_t1

0xa5c1,	// (0x0003725b) main_pane_empty_t1_ParamLimits

0xa5c1,	// (0x0003725b) main_pane_empty_t1

0xa5de,	// (0x00037278) main_pane_empty_t2_ParamLimits

0xa5de,	// (0x00037278) main_pane_empty_t2

0xa5f6,	// (0x00037290) main_pane_empty_t3_ParamLimits

0xa5f6,	// (0x00037290) main_pane_empty_t3

0xa609,	// (0x000372a3) main_pane_empty_t4_ParamLimits

0xa609,	// (0x000372a3) main_pane_empty_t4

0xa61c,	// (0x000372b6) main_pane_empty_t5_ParamLimits

0xa61c,	// (0x000372b6) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003c252) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003c252) main_pane_empty_t

0x6d88,	// (0x00033a22) bg_popup_window_pane_ParamLimits

0x6d88,	// (0x00033a22) bg_popup_window_pane

0x88c6,	// (0x00035560) find_popup_pane_cp2_ParamLimits

0x88c6,	// (0x00035560) find_popup_pane_cp2

0x88d2,	// (0x0003556c) heading_pane_ParamLimits

0x88d2,	// (0x0003556c) heading_pane

0x33a6,	// (0x00030040) bg_popup_sub_pane

0xb961,	// (0x000385fb) bg_popup_window_pane_g1_ParamLimits

0xb961,	// (0x000385fb) bg_popup_window_pane_g1

0xb96d,	// (0x00038607) bg_popup_window_pane_g2_ParamLimits

0xb96d,	// (0x00038607) bg_popup_window_pane_g2

0xb979,	// (0x00038613) bg_popup_window_pane_g3_ParamLimits

0xb979,	// (0x00038613) bg_popup_window_pane_g3

0xb985,	// (0x0003861f) bg_popup_window_pane_g4_ParamLimits

0xb985,	// (0x0003861f) bg_popup_window_pane_g4

0xb991,	// (0x0003862b) bg_popup_window_pane_g5_ParamLimits

0xb991,	// (0x0003862b) bg_popup_window_pane_g5

0xb99d,	// (0x00038637) bg_popup_window_pane_g6_ParamLimits

0xb99d,	// (0x00038637) bg_popup_window_pane_g6

0xb9a9,	// (0x00038643) bg_popup_window_pane_g7_ParamLimits

0xb9a9,	// (0x00038643) bg_popup_window_pane_g7

0xb9b5,	// (0x0003864f) bg_popup_window_pane_g8_ParamLimits

0xb9b5,	// (0x0003864f) bg_popup_window_pane_g8

0xb9c1,	// (0x0003865b) bg_popup_window_pane_g9_ParamLimits

0xb9c1,	// (0x0003865b) bg_popup_window_pane_g9

0x88ab,	// (0x00035545) bg_popup_window_pane_g10_ParamLimits

0x88ab,	// (0x00035545) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003c5a8) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003c5a8) bg_popup_window_pane_g

0x8862,	// (0x000354fc) bg_popup_heading_pane_ParamLimits

0x8862,	// (0x000354fc) bg_popup_heading_pane

0xbd6e,	// (0x00038a08) tabs_4_passive_pane_cp_srt_ParamLimits

0xbd6e,	// (0x00038a08) tabs_4_passive_pane_cp_srt

0xbd80,	// (0x00038a1a) tabs_4_passive_pane_srt_ParamLimits

0x8876,	// (0x00035510) heading_pane_g2

0xbd80,	// (0x00038a1a) tabs_4_passive_pane_srt

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp3_srt

0x887e,	// (0x00035518) heading_pane_t1_ParamLimits

0x887e,	// (0x00035518) heading_pane_t1

0x8895,	// (0x0003552f) heading_pane_t2_ParamLimits

0x8895,	// (0x0003552f) heading_pane_t2

0x0001,

0xf909,	// (0x0003c5a3) heading_pane_t_ParamLimits

0xf909,	// (0x0003c5a3) heading_pane_t

0x83f1,	// (0x0003508b) bg_popup_heading_pane_g1

0x8482,	// (0x0003511c) bg_popup_heading_pane_g2

0x848a,	// (0x00035124) bg_popup_heading_pane_g3

0x8492,	// (0x0003512c) bg_popup_heading_pane_g4

0x849a,	// (0x00035134) bg_popup_heading_pane_g5

0x84a2,	// (0x0003513c) bg_popup_heading_pane_g6

0x84aa,	// (0x00035144) bg_popup_heading_pane_g7

0x84b2,	// (0x0003514c) bg_popup_heading_pane_g8

0x84ba,	// (0x00035154) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003c55f) bg_popup_heading_pane_g

0x7b9d,	// (0x00034837) bg_popup_sub_pane_g1

0x7ba5,	// (0x0003483f) bg_popup_sub_pane_g2

0x7bad,	// (0x00034847) bg_popup_sub_pane_g3

0x7bb5,	// (0x0003484f) bg_popup_sub_pane_g4

0x7bbd,	// (0x00034857) bg_popup_sub_pane_g5

0x7bc5,	// (0x0003485f) bg_popup_sub_pane_g6

0x7bcd,	// (0x00034867) bg_popup_sub_pane_g7

0x7bd5,	// (0x0003486f) bg_popup_sub_pane_g8

0x7bdd,	// (0x00034877) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003c539) bg_popup_sub_pane_g

0x3568,	// (0x00030202) bg_popup_window_pane_cp5_ParamLimits

0x3568,	// (0x00030202) bg_popup_window_pane_cp5

0x3915,	// (0x000305af) popup_note_window_g1_ParamLimits

0x3915,	// (0x000305af) popup_note_window_g1

0x3921,	// (0x000305bb) popup_note_window_t1_ParamLimits

0x3921,	// (0x000305bb) popup_note_window_t1

0x3937,	// (0x000305d1) popup_note_window_t2_ParamLimits

0x3937,	// (0x000305d1) popup_note_window_t2

0x394d,	// (0x000305e7) popup_note_window_t3_ParamLimits

0x394d,	// (0x000305e7) popup_note_window_t3

0x3963,	// (0x000305fd) popup_note_window_t4_ParamLimits

0x3963,	// (0x000305fd) popup_note_window_t4

0x398b,	// (0x00030625) popup_note_window_t5_ParamLimits

0x398b,	// (0x00030625) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003c25d) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003c25d) popup_note_window_t

0x39af,	// (0x00030649) bg_popup_window_pane_cp6_ParamLimits

0x39af,	// (0x00030649) bg_popup_window_pane_cp6

0x836d,	// (0x00035007) popup_note_image_window_g1_ParamLimits

0x836d,	// (0x00035007) popup_note_image_window_g1

0x8379,	// (0x00035013) popup_note_image_window_g2_ParamLimits

0x8379,	// (0x00035013) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003c52d) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003c52d) popup_note_image_window_g

0x8392,	// (0x0003502c) popup_note_image_window_t1_ParamLimits

0x8392,	// (0x0003502c) popup_note_image_window_t1

0x83ab,	// (0x00035045) popup_note_image_window_t2_ParamLimits

0x83ab,	// (0x00035045) popup_note_image_window_t2

0x83c4,	// (0x0003505e) popup_note_image_window_t3_ParamLimits

0x83c4,	// (0x0003505e) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003c532) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003c532) popup_note_image_window_t

0x8258,	// (0x00034ef2) bg_popup_window_pane_cp7_ParamLimits

0x8258,	// (0x00034ef2) bg_popup_window_pane_cp7

0x8288,	// (0x00034f22) popup_note_wait_window_g1_ParamLimits

0x8288,	// (0x00034f22) popup_note_wait_window_g1

0x8294,	// (0x00034f2e) popup_note_wait_window_g2_ParamLimits

0x8294,	// (0x00034f2e) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003c51b) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003c51b) popup_note_wait_window_g

0x82ac,	// (0x00034f46) popup_note_wait_window_t1_ParamLimits

0x82ac,	// (0x00034f46) popup_note_wait_window_t1

0x82d3,	// (0x00034f6d) popup_note_wait_window_t2_ParamLimits

0x82d3,	// (0x00034f6d) popup_note_wait_window_t2

0x82f0,	// (0x00034f8a) popup_note_wait_window_t3_ParamLimits

0x82f0,	// (0x00034f8a) popup_note_wait_window_t3

0x8303,	// (0x00034f9d) popup_note_wait_window_t4_ParamLimits

0x8303,	// (0x00034f9d) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003c522) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003c522) popup_note_wait_window_t

0x8328,	// (0x00034fc2) wait_bar_pane_ParamLimits

0x8328,	// (0x00034fc2) wait_bar_pane

0x33a6,	// (0x00030040) wait_anim_pane

0x33a6,	// (0x00030040) wait_border_pane

0x3259,	// (0x0002fef3) wait_anim_pane_g1

0x3259,	// (0x0002fef3) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003c3e6) wait_anim_pane_g

0x8208,	// (0x00034ea2) wait_border_pane_g1

0x8211,	// (0x00034eab) wait_border_pane_g2

0x821a,	// (0x00034eb4) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003c514) wait_border_pane_g

0x816a,	// (0x00034e04) bg_popup_window_pane_cp16_ParamLimits

0x816a,	// (0x00034e04) bg_popup_window_pane_cp16

0x8178,	// (0x00034e12) indicator_popup_pane_cp4_ParamLimits

0x8178,	// (0x00034e12) indicator_popup_pane_cp4

0x818c,	// (0x00034e26) popup_query_data_window_t1_ParamLimits

0x818c,	// (0x00034e26) popup_query_data_window_t1

0x819e,	// (0x00034e38) popup_query_data_window_t2_ParamLimits

0x819e,	// (0x00034e38) popup_query_data_window_t2

0x81b7,	// (0x00034e51) popup_query_data_window_t3_ParamLimits

0x81b7,	// (0x00034e51) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003c50d) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003c50d) popup_query_data_window_t

0x81d1,	// (0x00034e6b) query_popup_data_pane_ParamLimits

0x81d1,	// (0x00034e6b) query_popup_data_pane

0x81e5,	// (0x00034e7f) query_popup_data_pane_cp1_ParamLimits

0x81e5,	// (0x00034e7f) query_popup_data_pane_cp1

0x39af,	// (0x00030649) bg_popup_window_pane_cp10_ParamLimits

0x39af,	// (0x00030649) bg_popup_window_pane_cp10

0x80cd,	// (0x00034d67) indicator_popup_pane_ParamLimits

0x80cd,	// (0x00034d67) indicator_popup_pane

0x3a06,	// (0x000306a0) popup_query_code_window_t1_ParamLimits

0x3a06,	// (0x000306a0) popup_query_code_window_t1

0x80e5,	// (0x00034d7f) popup_query_code_window_t2_ParamLimits

0x80e5,	// (0x00034d7f) popup_query_code_window_t2

0x8123,	// (0x00034dbd) popup_query_code_window_t3_ParamLimits

0x8123,	// (0x00034dbd) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003c506) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003c506) popup_query_code_window_t

0x8152,	// (0x00034dec) query_popup_pane_ParamLimits

0x8152,	// (0x00034dec) query_popup_pane

0x39af,	// (0x00030649) bg_popup_window_pane_cp15_ParamLimits

0x39af,	// (0x00030649) bg_popup_window_pane_cp15

0x39cd,	// (0x00030667) indicator_popup_pane_cp1_ParamLimits

0x39cd,	// (0x00030667) indicator_popup_pane_cp1

0x39e0,	// (0x0003067a) indicator_popup_pane_cp2_ParamLimits

0x39e0,	// (0x0003067a) indicator_popup_pane_cp2

0x39f3,	// (0x0003068d) popup_query_data_code_window_g1_ParamLimits

0x39f3,	// (0x0003068d) popup_query_data_code_window_g1

0x3a06,	// (0x000306a0) popup_query_data_code_window_t1_ParamLimits

0x3a06,	// (0x000306a0) popup_query_data_code_window_t1

0x3a18,	// (0x000306b2) popup_query_data_code_window_t2_ParamLimits

0x3a18,	// (0x000306b2) popup_query_data_code_window_t2

0x3a2a,	// (0x000306c4) popup_query_data_code_window_t3_ParamLimits

0x3a2a,	// (0x000306c4) popup_query_data_code_window_t3

0x3a40,	// (0x000306da) popup_query_data_code_window_t4_ParamLimits

0x3a40,	// (0x000306da) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003c268) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003c268) popup_query_data_code_window_t

0xb614,	// (0x000382ae) list_single_midp_graphic_pane_g3

0x3a58,	// (0x000306f2) query_popup_data_pane_cp2_ParamLimits

0x3a6b,	// (0x00030705) query_popup_pane_cp2_ParamLimits

0x3a6b,	// (0x00030705) query_popup_pane_cp2

0x33a6,	// (0x00030040) bg_popup_window_pane_cp11

0x80a1,	// (0x00034d3b) heading_pane_cp5

0x3b4f,	// (0x000307e9) listscroll_popup_info_pane

0x33a6,	// (0x00030040) input_focus_pane_cp3

0x3a7e,	// (0x00030718) query_popup_pane_t1

0x3a8c,	// (0x00030726) list_popup_info_pane_ParamLimits

0x3a8c,	// (0x00030726) list_popup_info_pane

0x3a9b,	// (0x00030735) listscroll_popup_info_pane_g1

0x3aa3,	// (0x0003073d) scroll_pane_cp7

0x3aab,	// (0x00030745) popup_info_list_pane_t1_ParamLimits

0x3aab,	// (0x00030745) popup_info_list_pane_t1

0x3ac5,	// (0x0003075f) popup_info_list_pane_t2_ParamLimits

0x3ac5,	// (0x0003075f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003c271) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003c271) popup_info_list_pane_t

0x33a6,	// (0x00030040) bg_popup_window_pane_cp12

0x8ed3,	// (0x00035b6d) find_popup_pane

0x35b2,	// (0x0003024c) bg_popup_window_pane_cp3

0x3adf,	// (0x00030779) heading_pane_cp3

0x3aeb,	// (0x00030785) listscroll_popup_graphic_pane

0x33a6,	// (0x00030040) bg_popup_window_pane_cp4

0xa67f,	// (0x00037319) heading_pane_cp4

0x3b4f,	// (0x000307e9) listscroll_popup_colour_pane

0x3b57,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b57,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane

0xa687,	// (0x00037321) grid_large_graphic_colour_popup_pane_ParamLimits

0xa687,	// (0x00037321) grid_large_graphic_colour_popup_pane

0xa6a3,	// (0x0003733d) listscroll_popup_colour_pane_g1_ParamLimits

0xa6a3,	// (0x0003733d) listscroll_popup_colour_pane_g1

0xa6ba,	// (0x00037354) listscroll_popup_colour_pane_g2_ParamLimits

0xa6ba,	// (0x00037354) listscroll_popup_colour_pane_g2

0x3bae,	// (0x00030848) listscroll_popup_colour_pane_g3_ParamLimits

0x3bae,	// (0x00030848) listscroll_popup_colour_pane_g3

0xa6ce,	// (0x00037368) listscroll_popup_colour_pane_g4_ParamLimits

0xa6ce,	// (0x00037368) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003c276) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003c276) listscroll_popup_colour_pane_g

0x3bcd,	// (0x00030867) scroll_pane_cp6_ParamLimits

0x3bcd,	// (0x00030867) scroll_pane_cp6

0xa6dd,	// (0x00037377) cell_large_graphic_colour_popup_pane_ParamLimits

0xa6dd,	// (0x00037377) cell_large_graphic_colour_popup_pane

0x3bfe,	// (0x00030898) cell_large_graphic_colour_none_popup_pane_t1

0x33a6,	// (0x00030040) grid_highlight_pane_cp5

0x3c0d,	// (0x000308a7) cell_large_graphic_colour_popup_pane_g1

0x3c15,	// (0x000308af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003c27f) cell_large_graphic_colour_popup_pane_g

0x3c1d,	// (0x000308b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c26,	// (0x000308c0) grid_highlight_pane_cp4

0x3c2e,	// (0x000308c8) bg_popup_window_pane_cp8_ParamLimits

0x3c2e,	// (0x000308c8) bg_popup_window_pane_cp8

0x3c49,	// (0x000308e3) popup_snote_single_text_window_g1_ParamLimits

0x3c49,	// (0x000308e3) popup_snote_single_text_window_g1

0x3c5b,	// (0x000308f5) popup_snote_single_text_window_t1_ParamLimits

0x3c5b,	// (0x000308f5) popup_snote_single_text_window_t1

0x3c6e,	// (0x00030908) popup_snote_single_text_window_t2_ParamLimits

0x3c6e,	// (0x00030908) popup_snote_single_text_window_t2

0x3c81,	// (0x0003091b) popup_snote_single_text_window_t3_ParamLimits

0x3c81,	// (0x0003091b) popup_snote_single_text_window_t3

0x3cba,	// (0x00030954) popup_snote_single_text_window_t4_ParamLimits

0x3cba,	// (0x00030954) popup_snote_single_text_window_t4

0x3cee,	// (0x00030988) popup_snote_single_text_window_t5_ParamLimits

0x3cee,	// (0x00030988) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003c284) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003c284) popup_snote_single_text_window_t

0x3d1d,	// (0x000309b7) bg_popup_window_pane_cp9_ParamLimits

0x3d1d,	// (0x000309b7) bg_popup_window_pane_cp9

0x3c49,	// (0x000308e3) popup_snote_single_graphic_window_g1_ParamLimits

0x3c49,	// (0x000308e3) popup_snote_single_graphic_window_g1

0x3d2b,	// (0x000309c5) popup_snote_single_graphic_window_g2_ParamLimits

0x3d2b,	// (0x000309c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003c28f) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003c28f) popup_snote_single_graphic_window_g

0x3d37,	// (0x000309d1) popup_snote_single_graphic_window_t1_ParamLimits

0x3d37,	// (0x000309d1) popup_snote_single_graphic_window_t1

0x3d4a,	// (0x000309e4) popup_snote_single_graphic_window_t2_ParamLimits

0x3d4a,	// (0x000309e4) popup_snote_single_graphic_window_t2

0x3c81,	// (0x0003091b) popup_snote_single_graphic_window_t3_ParamLimits

0x3c81,	// (0x0003091b) popup_snote_single_graphic_window_t3

0x3cba,	// (0x00030954) popup_snote_single_graphic_window_t4_ParamLimits

0x3cba,	// (0x00030954) popup_snote_single_graphic_window_t4

0x3cee,	// (0x00030988) popup_snote_single_graphic_window_t5_ParamLimits

0x3cee,	// (0x00030988) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003c294) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003c294) popup_snote_single_graphic_window_t

0xbcff,	// (0x00038999) grid_graphic_popup_pane_ParamLimits

0xbcff,	// (0x00038999) grid_graphic_popup_pane

0xbd22,	// (0x000389bc) listscroll_popup_graphic_pane_g1_ParamLimits

0xbd22,	// (0x000389bc) listscroll_popup_graphic_pane_g1

0xbd36,	// (0x000389d0) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd36,	// (0x000389d0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003c683) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003c683) listscroll_popup_graphic_pane_g

0x8069,	// (0x00034d03) scroll_pane_cp5

0xbcb8,	// (0x00038952) cell_graphic_popup_pane_ParamLimits

0xbcb8,	// (0x00038952) cell_graphic_popup_pane

0x8e7c,	// (0x00035b16) cell_graphic_popup_pane_g1

0x8e84,	// (0x00035b1e) cell_graphic_popup_pane_g2

0x3c1d,	// (0x000308b7) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003c67c) cell_graphic_popup_pane_g

0x8e8d,	// (0x00035b27) cell_graphic_popup_pane_t2

0x3c26,	// (0x000308c0) grid_highlight_pane_cp3

0x3d6f,	// (0x00030a09) list_gen_pane_ParamLimits

0x3d6f,	// (0x00030a09) list_gen_pane

0x3da0,	// (0x00030a3a) scroll_pane

0xbc89,	// (0x00038923) bg_list_pane_g1_ParamLimits

0xbc89,	// (0x00038923) bg_list_pane_g1

0x8e33,	// (0x00035acd) bg_list_pane_g2_ParamLimits

0x8e33,	// (0x00035acd) bg_list_pane_g2

0x8e46,	// (0x00035ae0) bg_list_pane_g3_ParamLimits

0x8e46,	// (0x00035ae0) bg_list_pane_g3

0x8e58,	// (0x00035af2) bg_list_pane_g4_ParamLimits

0x8e58,	// (0x00035af2) bg_list_pane_g4

0xbca0,	// (0x0003893a) bg_list_pane_g5_ParamLimits

0xbca0,	// (0x0003893a) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003c671) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003c671) bg_list_pane_g

0xbc65,	// (0x000388ff) list_double2_graphic_large_graphic_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double2_graphic_large_graphic_pane

0xbc65,	// (0x000388ff) list_double2_graphic_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double2_graphic_pane

0xbc65,	// (0x000388ff) list_double2_large_graphic_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double2_large_graphic_pane

0xbc65,	// (0x000388ff) list_double2_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double2_pane

0xbc65,	// (0x000388ff) list_double_graphic_heading_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_graphic_heading_pane

0xbc65,	// (0x000388ff) list_double_graphic_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_graphic_pane

0xbc65,	// (0x000388ff) list_double_heading_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_heading_pane

0xbc65,	// (0x000388ff) list_double_large_graphic_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_large_graphic_pane

0xbc65,	// (0x000388ff) list_double_number_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_number_pane

0xbc65,	// (0x000388ff) list_double_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_pane

0xbc65,	// (0x000388ff) list_double_time_pane_ParamLimits

0xbc65,	// (0x000388ff) list_double_time_pane

0xbc65,	// (0x000388ff) list_setting_number_pane_ParamLimits

0xbc65,	// (0x000388ff) list_setting_number_pane

0xbc65,	// (0x000388ff) list_setting_pane_ParamLimits

0xbc65,	// (0x000388ff) list_setting_pane

0xedfc,	// (0x0003ba96) list_single_2graphic_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_2graphic_pane

0xedfc,	// (0x0003ba96) list_single_graphic_heading_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_graphic_heading_pane

0xedfc,	// (0x0003ba96) list_single_graphic_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_graphic_pane

0xedfc,	// (0x0003ba96) list_single_heading_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_heading_pane

0xf4c5,	// (0x0003c15f) list_single_large_graphic_pane_ParamLimits

0xf4c5,	// (0x0003c15f) list_single_large_graphic_pane

0xedfc,	// (0x0003ba96) list_single_number_heading_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_number_heading_pane

0xedfc,	// (0x0003ba96) list_single_number_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_number_pane

0xedfc,	// (0x0003ba96) list_single_pane_ParamLimits

0xedfc,	// (0x0003ba96) list_single_pane

0x33a6,	// (0x00030040) list_highlight_pane_cp1

0xf3cc,	// (0x0003c066) list_single_pane_g1_ParamLimits

0xf3cc,	// (0x0003c066) list_single_pane_g1

0xf3d8,	// (0x0003c072) list_single_pane_g2_ParamLimits

0xf3d8,	// (0x0003c072) list_single_pane_g2

0x0001,

0xf616,	// (0x0003c2b0) list_single_pane_g_ParamLimits

0xf616,	// (0x0003c2b0) list_single_pane_g

0xedd2,	// (0x0003ba6c) list_single_pane_t1_ParamLimits

0xedd2,	// (0x0003ba6c) list_single_pane_t1

0xf3cc,	// (0x0003c066) list_single_number_pane_g1_ParamLimits

0xf3cc,	// (0x0003c066) list_single_number_pane_g1

0xf3d8,	// (0x0003c072) list_single_number_pane_g2_ParamLimits

0xf3d8,	// (0x0003c072) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003c2b0) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003c2b0) list_single_number_pane_g

0xe62e,	// (0x0003b2c8) list_single_number_pane_t1_ParamLimits

0xe62e,	// (0x0003b2c8) list_single_number_pane_t1

0xed91,	// (0x0003ba2b) list_single_number_pane_t2_ParamLimits

0xed91,	// (0x0003ba2b) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003c632) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003c632) list_single_number_pane_t

0xe622,	// (0x0003b2bc) list_single_graphic_pane_g1_ParamLimits

0xe622,	// (0x0003b2bc) list_single_graphic_pane_g1

0xf3cc,	// (0x0003c066) list_single_graphic_pane_g2_ParamLimits

0xf3cc,	// (0x0003c066) list_single_graphic_pane_g2

0xf3d8,	// (0x0003c072) list_single_graphic_pane_g3_ParamLimits

0xf3d8,	// (0x0003c072) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003c29f) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003c29f) list_single_graphic_pane_g

0xe62e,	// (0x0003b2c8) list_single_graphic_pane_t1_ParamLimits

0xe62e,	// (0x0003b2c8) list_single_graphic_pane_t1

0xe644,	// (0x0003b2de) list_single_heading_pane_g1_ParamLimits

0xe644,	// (0x0003b2de) list_single_heading_pane_g1

0xf3d8,	// (0x0003c072) list_single_heading_pane_g2_ParamLimits

0xf3d8,	// (0x0003c072) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003c2a6) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003c2a6) list_single_heading_pane_g

0xe657,	// (0x0003b2f1) list_single_heading_pane_t1_ParamLimits

0xe657,	// (0x0003b2f1) list_single_heading_pane_t1

0xe66d,	// (0x0003b307) list_single_heading_pane_t2_ParamLimits

0xe66d,	// (0x0003b307) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003c2ab) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003c2ab) list_single_heading_pane_t

0xf3cc,	// (0x0003c066) list_single_number_heading_pane_g1_ParamLimits

0xf3cc,	// (0x0003c066) list_single_number_heading_pane_g1

0xf3d8,	// (0x0003c072) list_single_number_heading_pane_g2_ParamLimits

0xf3d8,	// (0x0003c072) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003c2b0) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003c2b0) list_single_number_heading_pane_g

0xe67f,	// (0x0003b319) list_single_number_heading_pane_t1_ParamLimits

0xe67f,	// (0x0003b319) list_single_number_heading_pane_t1

0xe695,	// (0x0003b32f) list_single_number_heading_pane_t2_ParamLimits

0xe695,	// (0x0003b32f) list_single_number_heading_pane_t2

0xe6a7,	// (0x0003b341) list_single_number_heading_pane_t3_ParamLimits

0xe6a7,	// (0x0003b341) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003c2b5) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003c2b5) list_single_number_heading_pane_t

0xe6b9,	// (0x0003b353) list_single_graphic_heading_pane_g1_ParamLimits

0xe6b9,	// (0x0003b353) list_single_graphic_heading_pane_g1

0xf3e4,	// (0x0003c07e) list_single_graphic_heading_pane_g4_ParamLimits

0xf3e4,	// (0x0003c07e) list_single_graphic_heading_pane_g4

0xf3d8,	// (0x0003c072) list_single_graphic_heading_pane_g5_ParamLimits

0xf3d8,	// (0x0003c072) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003c2bc) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003c2bc) list_single_graphic_heading_pane_g

0xe67f,	// (0x0003b319) list_single_graphic_heading_pane_t1_ParamLimits

0xe67f,	// (0x0003b319) list_single_graphic_heading_pane_t1

0xe6cd,	// (0x0003b367) list_single_graphic_heading_pane_t2_ParamLimits

0xe6cd,	// (0x0003b367) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003c2c3) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003c2c3) list_single_graphic_heading_pane_t

0xf3f3,	// (0x0003c08d) list_single_large_graphic_pane_g1_ParamLimits

0xf3f3,	// (0x0003c08d) list_single_large_graphic_pane_g1

0xf3ff,	// (0x0003c099) list_single_large_graphic_pane_g2_ParamLimits

0xf3ff,	// (0x0003c099) list_single_large_graphic_pane_g2

0xf40b,	// (0x0003c0a5) list_single_large_graphic_pane_g3_ParamLimits

0xf40b,	// (0x0003c0a5) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003c2c8) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003c2c8) list_single_large_graphic_pane_g

0x8211,	// (0x00034eab) wait_border_pane_g2_copy1

0xf417,	// (0x0003c0b1) list_single_large_graphic_pane_g4_cp2

0xe6e5,	// (0x0003b37f) list_single_large_graphic_pane_t1_ParamLimits

0xe6e5,	// (0x0003b37f) list_single_large_graphic_pane_t1

0xf41f,	// (0x0003c0b9) list_double_pane_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_pane_g1

0xf42b,	// (0x0003c0c5) list_double_pane_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_pane_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double_pane_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double_pane_g

0xe6fb,	// (0x0003b395) list_double_pane_t1_ParamLimits

0xe6fb,	// (0x0003b395) list_double_pane_t1

0xe711,	// (0x0003b3ab) list_double_pane_t2_ParamLimits

0xe711,	// (0x0003b3ab) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003c2d4) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003c2d4) list_double_pane_t

0xe723,	// (0x0003b3bd) list_double2_pane_g1_ParamLimits

0xe723,	// (0x0003b3bd) list_double2_pane_g1

0xe732,	// (0x0003b3cc) list_double2_pane_g2_ParamLimits

0xe732,	// (0x0003b3cc) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003c2d9) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003c2d9) list_double2_pane_g

0xe73e,	// (0x0003b3d8) list_double2_pane_t1_ParamLimits

0xe73e,	// (0x0003b3d8) list_double2_pane_t1

0xe754,	// (0x0003b3ee) list_double2_pane_t2_ParamLimits

0xe754,	// (0x0003b3ee) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003c2de) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003c2de) list_double2_pane_t

0xf41f,	// (0x0003c0b9) list_double_number_pane_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_number_pane_g1

0xf42b,	// (0x0003c0c5) list_double_number_pane_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double_number_pane_g

0xe766,	// (0x0003b400) list_double_number_pane_t1_ParamLimits

0xe766,	// (0x0003b400) list_double_number_pane_t1

0xe778,	// (0x0003b412) list_double_number_pane_t2_ParamLimits

0xe778,	// (0x0003b412) list_double_number_pane_t2

0xe78e,	// (0x0003b428) list_double_number_pane_t3_ParamLimits

0xe78e,	// (0x0003b428) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003c2e3) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003c2e3) list_double_number_pane_t

0xe7a0,	// (0x0003b43a) list_double_graphic_pane_g1_ParamLimits

0xe7a0,	// (0x0003b43a) list_double_graphic_pane_g1

0xf437,	// (0x0003c0d1) list_double_graphic_pane_g2_ParamLimits

0xf437,	// (0x0003c0d1) list_double_graphic_pane_g2

0xf446,	// (0x0003c0e0) list_double_graphic_pane_g3_ParamLimits

0xf446,	// (0x0003c0e0) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003c2ea) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003c2ea) list_double_graphic_pane_g

0xe7ac,	// (0x0003b446) list_double_graphic_pane_t1_ParamLimits

0xe7ac,	// (0x0003b446) list_double_graphic_pane_t1

0xe7c2,	// (0x0003b45c) list_double_graphic_pane_t2_ParamLimits

0xe7c2,	// (0x0003b45c) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003c2f3) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003c2f3) list_double_graphic_pane_t

0xe7d4,	// (0x0003b46e) list_double2_graphic_pane_g1_ParamLimits

0xe7d4,	// (0x0003b46e) list_double2_graphic_pane_g1

0x3e43,	// (0x00030add) list_double2_graphic_pane_g2_ParamLimits

0x3e43,	// (0x00030add) list_double2_graphic_pane_g2

0xf45e,	// (0x0003c0f8) list_double2_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c0f8) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003c2f8) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003c2f8) list_double2_graphic_pane_g

0xe7e0,	// (0x0003b47a) list_double2_graphic_pane_t1_ParamLimits

0xe7e0,	// (0x0003b47a) list_double2_graphic_pane_t1

0xe7f6,	// (0x0003b490) list_double2_graphic_pane_t2_ParamLimits

0xe7f6,	// (0x0003b490) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003c2ff) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003c2ff) list_double2_graphic_pane_t

0xe808,	// (0x0003b4a2) list_double_large_graphic_pane_g1_ParamLimits

0xe808,	// (0x0003b4a2) list_double_large_graphic_pane_g1

0xe825,	// (0x0003b4bf) list_double_large_graphic_pane_g2_ParamLimits

0xe825,	// (0x0003b4bf) list_double_large_graphic_pane_g2

0xf42b,	// (0x0003c0c5) list_double_large_graphic_pane_g3_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_large_graphic_pane_g3

0xe839,	// (0x0003b4d3) list_double_large_graphic_pane_g4_ParamLimits

0xe839,	// (0x0003b4d3) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003c304) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003c304) list_double_large_graphic_pane_g

0xe84a,	// (0x0003b4e4) list_double_large_graphic_pane_t1_ParamLimits

0xe84a,	// (0x0003b4e4) list_double_large_graphic_pane_t1

0xe863,	// (0x0003b4fd) list_double_large_graphic_pane_t2_ParamLimits

0xe863,	// (0x0003b4fd) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003c30f) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003c30f) list_double_large_graphic_pane_t

0xf47f,	// (0x0003c119) list_double2_large_graphic_pane_g1_ParamLimits

0xf47f,	// (0x0003c119) list_double2_large_graphic_pane_g1

0xf48b,	// (0x0003c125) list_double2_large_graphic_pane_g2_ParamLimits

0xf48b,	// (0x0003c125) list_double2_large_graphic_pane_g2

0xf45e,	// (0x0003c0f8) list_double2_large_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c0f8) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003c314) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003c314) list_double2_large_graphic_pane_g

0xe875,	// (0x0003b50f) list_double2_large_graphic_pane_t1_ParamLimits

0xe875,	// (0x0003b50f) list_double2_large_graphic_pane_t1

0xe88b,	// (0x0003b525) list_double2_large_graphic_pane_t2_ParamLimits

0xe88b,	// (0x0003b525) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003c31b) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003c31b) list_double2_large_graphic_pane_t

0xe89d,	// (0x0003b537) list_double_heading_pane_g1_ParamLimits

0xe89d,	// (0x0003b537) list_double_heading_pane_g1

0xe8ac,	// (0x0003b546) list_double_heading_pane_g2_ParamLimits

0xe8ac,	// (0x0003b546) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003c320) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003c320) list_double_heading_pane_g

0xe8b8,	// (0x0003b552) list_double_heading_pane_t1_ParamLimits

0xe8b8,	// (0x0003b552) list_double_heading_pane_t1

0xe754,	// (0x0003b3ee) list_double_heading_pane_t2_ParamLimits

0xe754,	// (0x0003b3ee) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003c325) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003c325) list_double_heading_pane_t

0xe8ce,	// (0x0003b568) list_double_graphic_heading_pane_g1_ParamLimits

0xe8ce,	// (0x0003b568) list_double_graphic_heading_pane_g1

0xe89d,	// (0x0003b537) list_double_graphic_heading_pane_g2_ParamLimits

0xe89d,	// (0x0003b537) list_double_graphic_heading_pane_g2

0xe8ac,	// (0x0003b546) list_double_graphic_heading_pane_g3_ParamLimits

0xe8ac,	// (0x0003b546) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003c32a) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003c32a) list_double_graphic_heading_pane_g

0xe8da,	// (0x0003b574) list_double_graphic_heading_pane_t1_ParamLimits

0xe8da,	// (0x0003b574) list_double_graphic_heading_pane_t1

0xe7f6,	// (0x0003b490) list_double_graphic_heading_pane_t2_ParamLimits

0xe7f6,	// (0x0003b490) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003c331) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003c331) list_double_graphic_heading_pane_t

0xe8f0,	// (0x0003b58a) list_double_time_pane_g1_ParamLimits

0xe8f0,	// (0x0003b58a) list_double_time_pane_g1

0xe8ff,	// (0x0003b599) list_double_time_pane_g2_ParamLimits

0xe8ff,	// (0x0003b599) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003c336) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003c336) list_double_time_pane_g

0xe90b,	// (0x0003b5a5) list_double_time_pane_t1_ParamLimits

0xe90b,	// (0x0003b5a5) list_double_time_pane_t1

0xe921,	// (0x0003b5bb) list_double_time_pane_t2_ParamLimits

0xe921,	// (0x0003b5bb) list_double_time_pane_t2

0xe933,	// (0x0003b5cd) list_double_time_pane_t3_ParamLimits

0xe933,	// (0x0003b5cd) list_double_time_pane_t3

0xe945,	// (0x0003b5df) list_double_time_pane_t4_ParamLimits

0xe945,	// (0x0003b5df) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003c33b) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003c33b) list_double_time_pane_t

0xe957,	// (0x0003b5f1) list_setting_pane_g1_ParamLimits

0xe957,	// (0x0003b5f1) list_setting_pane_g1

0xe732,	// (0x0003b3cc) list_setting_pane_g2_ParamLimits

0xe732,	// (0x0003b3cc) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003c344) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003c344) list_setting_pane_g

0xe963,	// (0x0003b5fd) list_setting_pane_t1_ParamLimits

0xe963,	// (0x0003b5fd) list_setting_pane_t1

0xe97d,	// (0x0003b617) list_setting_pane_t2_ParamLimits

0xe97d,	// (0x0003b617) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003c349) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003c349) list_setting_pane_t

0xe9ba,	// (0x0003b654) set_value_pane_cp_ParamLimits

0xe9ba,	// (0x0003b654) set_value_pane_cp

0xe9c6,	// (0x0003b660) list_setting_number_pane_g1_ParamLimits

0xe9c6,	// (0x0003b660) list_setting_number_pane_g1

0xe9d2,	// (0x0003b66c) list_setting_number_pane_g2_ParamLimits

0xe9d2,	// (0x0003b66c) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003c350) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003c350) list_setting_number_pane_g

0xe9de,	// (0x0003b678) list_setting_number_pane_t1_ParamLimits

0xe9de,	// (0x0003b678) list_setting_number_pane_t1

0xe9f5,	// (0x0003b68f) list_setting_number_pane_t2_ParamLimits

0xe9f5,	// (0x0003b68f) list_setting_number_pane_t2

0xea0f,	// (0x0003b6a9) list_setting_number_pane_t3_ParamLimits

0xea0f,	// (0x0003b6a9) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003c355) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003c355) list_setting_number_pane_t

0xe9ba,	// (0x0003b654) set_value_pane_ParamLimits

0xe9ba,	// (0x0003b654) set_value_pane

0x6ca0,	// (0x0003393a) bg_set_opt_pane_ParamLimits

0x6ca0,	// (0x0003393a) bg_set_opt_pane

0xea50,	// (0x0003b6ea) set_value_pane_t1

0x6cc1,	// (0x0003395b) slider_set_pane_cp3

0x6cca,	// (0x00033964) volume_small_pane_cp

0x6cd3,	// (0x0003396d) list_form_gen_pane

0x3dc4,	// (0x00030a5e) scroll_pane_cp8

0xea6e,	// (0x0003b708) form_field_data_pane_ParamLimits

0xea6e,	// (0x0003b708) form_field_data_pane

0xea8e,	// (0x0003b728) form_field_data_wide_pane_ParamLimits

0xea8e,	// (0x0003b728) form_field_data_wide_pane

0xeaad,	// (0x0003b747) form_field_popup_pane_ParamLimits

0xeaad,	// (0x0003b747) form_field_popup_pane

0xeac5,	// (0x0003b75f) form_field_popup_wide_pane_ParamLimits

0xeac5,	// (0x0003b75f) form_field_popup_wide_pane

0xeadc,	// (0x0003b776) form_field_slider_pane_ParamLimits

0xeadc,	// (0x0003b776) form_field_slider_pane

0xeaef,	// (0x0003b789) form_field_slider_wide_pane_ParamLimits

0xeaef,	// (0x0003b789) form_field_slider_wide_pane

0x6cdc,	// (0x00033976) data_form_pane

0xeb0a,	// (0x0003b7a4) form_field_data_pane_t1

0x6ce8,	// (0x00033982) input_focus_pane

0x6cf6,	// (0x00033990) data_form_wide_pane

0xeb2e,	// (0x0003b7c8) form_field_data_wide_pane_t1

0x3c3b,	// (0x000308d5) input_focus_pane_cp6

0xeb50,	// (0x0003b7ea) form_field_popup_pane_t1

0x6ce8,	// (0x00033982) input_focus_pane_cp7

0x6cdc,	// (0x00033976) list_form_pane

0xeb70,	// (0x0003b80a) form_field_popup_wide_pane_t1

0x6ce8,	// (0x00033982) input_focus_pane_cp8

0x6d16,	// (0x000339b0) list_form_wide_pane

0xeb8d,	// (0x0003b827) form_field_slider_pane_t1_ParamLimits

0xeb8d,	// (0x0003b827) form_field_slider_pane_t1

0xeba3,	// (0x0003b83d) form_field_slider_pane_t2_ParamLimits

0xeba3,	// (0x0003b83d) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003c365) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003c365) form_field_slider_pane_t

0x3568,	// (0x00030202) input_focus_pane_cp9_ParamLimits

0x3568,	// (0x00030202) input_focus_pane_cp9

0xebb8,	// (0x0003b852) slider_cont_pane_ParamLimits

0xebb8,	// (0x0003b852) slider_cont_pane

0x6d25,	// (0x000339bf) form_field_slider_wide_pane_t1_ParamLimits

0x6d25,	// (0x000339bf) form_field_slider_wide_pane_t1

0xebcc,	// (0x0003b866) form_field_slider_wide_pane_t2_ParamLimits

0xebcc,	// (0x0003b866) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003c36a) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003c36a) form_field_slider_wide_pane_t

0x3568,	// (0x00030202) input_focus_pane_cp10_ParamLimits

0x3568,	// (0x00030202) input_focus_pane_cp10

0xebde,	// (0x0003b878) slider_cont_pane_cp1_ParamLimits

0xebde,	// (0x0003b878) slider_cont_pane_cp1

0xebf4,	// (0x0003b88e) slider_form_pane_cp

0x6d37,	// (0x000339d1) input_focus_pane_g1

0x6d3f,	// (0x000339d9) input_focus_pane_g2

0x6d47,	// (0x000339e1) input_focus_pane_g3

0x6d4f,	// (0x000339e9) input_focus_pane_g4

0x6d57,	// (0x000339f1) input_focus_pane_g5

0x6d5f,	// (0x000339f9) input_focus_pane_g6

0x6d67,	// (0x00033a01) input_focus_pane_g7

0x6d6f,	// (0x00033a09) input_focus_pane_g8

0x6d77,	// (0x00033a11) input_focus_pane_g9

0x3259,	// (0x0002fef3) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003c36f) input_focus_pane_g

0x821a,	// (0x00034eb4) wait_border_pane_g3_copy1

0xebfc,	// (0x0003b896) data_form_pane_t1

0x3259,	// (0x0002fef3) wait_anim_pane_g1_copy1

0xeda3,	// (0x0003ba3d) data_form_wide_pane_t1

0xec16,	// (0x0003b8b0) list_form_graphic_pane_cp_ParamLimits

0xec16,	// (0x0003b8b0) list_form_graphic_pane_cp

0x8dd9,	// (0x00035a73) slider_form_pane_g1

0x8de2,	// (0x00035a7c) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003c662) slider_form_pane_g

0xec2a,	// (0x0003b8c4) list_form_graphic_pane_ParamLimits

0xec2a,	// (0x0003b8c4) list_form_graphic_pane

0xec40,	// (0x0003b8da) list_form_graphic_pane_g1

0xec48,	// (0x0003b8e2) list_form_graphic_pane_t1_ParamLimits

0xec48,	// (0x0003b8e2) list_form_graphic_pane_t1

0x35b2,	// (0x0003024c) list_highlight_pane_cp5_ParamLimits

0x35b2,	// (0x0003024c) list_highlight_pane_cp5

0xec5d,	// (0x0003b8f7) find_pane_g1

0x6d7f,	// (0x00033a19) input_find_pane

0xec66,	// (0x0003b900) input_find_pane_g1_ParamLimits

0xec66,	// (0x0003b900) input_find_pane_g1

0xec72,	// (0x0003b90c) input_find_pane_t1_ParamLimits

0xec72,	// (0x0003b90c) input_find_pane_t1

0xec87,	// (0x0003b921) input_find_pane_t2_ParamLimits

0xec87,	// (0x0003b921) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003c384) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003c384) input_find_pane_t

0x6d88,	// (0x00033a22) input_focus_pane_cp5_ParamLimits

0x6d88,	// (0x00033a22) input_focus_pane_cp5

0x3568,	// (0x00030202) bg_popup_window_pane_cp2_ParamLimits

0x3568,	// (0x00030202) bg_popup_window_pane_cp2

0x6da2,	// (0x00033a3c) listscroll_menu_pane_ParamLimits

0x6da2,	// (0x00033a3c) listscroll_menu_pane

0x6dae,	// (0x00033a48) popup_submenu_window_ParamLimits

0x6dae,	// (0x00033a48) popup_submenu_window

0x6dd2,	// (0x00033a6c) find_popup_pane_g1

0x6dda,	// (0x00033a74) input_popup_find_pane_cp

0x6d88,	// (0x00033a22) input_focus_pane_cp4_ParamLimits

0x6d88,	// (0x00033a22) input_focus_pane_cp4

0x6de4,	// (0x00033a7e) input_popup_find_pane_t1_ParamLimits

0x6de4,	// (0x00033a7e) input_popup_find_pane_t1

0x33a6,	// (0x00030040) bg_popup_sub_pane_cp

0x6e12,	// (0x00033aac) listscroll_popup_sub_pane

0x6e1a,	// (0x00033ab4) list_submenu_pane_ParamLimits

0x6e1a,	// (0x00033ab4) list_submenu_pane

0x6e2b,	// (0x00033ac5) scroll_pane_cp4

0x6e33,	// (0x00033acd) list_single_popup_submenu_pane_ParamLimits

0x6e33,	// (0x00033acd) list_single_popup_submenu_pane

0x6e47,	// (0x00033ae1) list_single_popup_submenu_pane_g1

0x6e4f,	// (0x00033ae9) list_single_popup_submenu_pane_t1_ParamLimits

0x6e4f,	// (0x00033ae9) list_single_popup_submenu_pane_t1

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp1_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp1

0xa710,	// (0x000373aa) tabs_2_active_pane_g1

0xa718,	// (0x000373b2) tabs_2_active_pane_t1

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp1_ParamLimits

0x35b2,	// (0x0003024c) bg_passive_tab_pane_cp1

0xa710,	// (0x000373aa) tabs_2_passive_pane_g1

0xa718,	// (0x000373b2) tabs_2_passive_pane_t1

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp4

0xa72a,	// (0x000373c4) tabs_2_long_active_pane_t1

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp4

0xb61c,	// (0x000382b6) list_single_midp_graphic_pane_g4_ParamLimits

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp5

0xa749,	// (0x000373e3) tabs_3_long_active_pane_t1

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp5

0xb61c,	// (0x000382b6) list_single_midp_graphic_pane_g4

0x35b2,	// (0x0003024c) bg_popup_window_pane_cp13_ParamLimits

0x35b2,	// (0x0003024c) bg_popup_window_pane_cp13

0x6e79,	// (0x00033b13) listscroll_popup_fast_pane_ParamLimits

0x6e79,	// (0x00033b13) listscroll_popup_fast_pane

0x6e88,	// (0x00033b22) grid_popup_fast_pane_ParamLimits

0x6e88,	// (0x00033b22) grid_popup_fast_pane

0x6e9a,	// (0x00033b34) scroll_pane_cp9_ParamLimits

0x6e9a,	// (0x00033b34) scroll_pane_cp9

0xd7ac,	// (0x0003a446) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd7ac,	// (0x0003a446) list_single_graphic_hl_pane_t1_cp2

0x6ebe,	// (0x00033b58) input_focus_pane_cp20_ParamLimits

0x6ebe,	// (0x00033b58) input_focus_pane_cp20

0x6ecc,	// (0x00033b66) query_popup_data_pane_t1_ParamLimits

0x6ecc,	// (0x00033b66) query_popup_data_pane_t1

0x6edf,	// (0x00033b79) query_popup_data_pane_t2_ParamLimits

0x6edf,	// (0x00033b79) query_popup_data_pane_t2

0x6f25,	// (0x00033bbf) query_popup_data_pane_t3_ParamLimits

0x6f25,	// (0x00033bbf) query_popup_data_pane_t3

0x6f66,	// (0x00033c00) query_popup_data_pane_t4_ParamLimits

0x6f66,	// (0x00033c00) query_popup_data_pane_t4

0x6fa2,	// (0x00033c3c) query_popup_data_pane_t5_ParamLimits

0x6fa2,	// (0x00033c3c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003c389) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003c389) query_popup_data_pane_t

0x6d37,	// (0x000339d1) bg_set_opt_pane_g1

0x6d3f,	// (0x000339d9) bg_set_opt_pane_g2

0x6d47,	// (0x000339e1) bg_set_opt_pane_g3

0x6d4f,	// (0x000339e9) bg_set_opt_pane_g4

0x6d57,	// (0x000339f1) bg_set_opt_pane_g5

0x6d5f,	// (0x000339f9) bg_set_opt_pane_g6

0x6d67,	// (0x00033a01) bg_set_opt_pane_g7

0x6d6f,	// (0x00033a09) bg_set_opt_pane_g8

0x6d77,	// (0x00033a11) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003c394) bg_set_opt_pane_g

0xab1a,	// (0x000377b4) control_top_pane_stacon_ParamLimits

0xab1a,	// (0x000377b4) control_top_pane_stacon

0xab6d,	// (0x00037807) signal_pane_stacon_ParamLimits

0xab6d,	// (0x00037807) signal_pane_stacon

0x73a2,	// (0x0003403c) stacon_top_pane_g1_ParamLimits

0x73a2,	// (0x0003403c) stacon_top_pane_g1

0xab92,	// (0x0003782c) title_pane_stacon_ParamLimits

0xab92,	// (0x0003782c) title_pane_stacon

0xabb4,	// (0x0003784e) uni_indicator_pane_stacon_ParamLimits

0xabb4,	// (0x0003784e) uni_indicator_pane_stacon

0xabc9,	// (0x00037863) battery_pane_stacon_ParamLimits

0xabc9,	// (0x00037863) battery_pane_stacon

0xac09,	// (0x000378a3) control_bottom_pane_stacon_ParamLimits

0xac09,	// (0x000378a3) control_bottom_pane_stacon

0xac28,	// (0x000378c2) navi_pane_stacon_ParamLimits

0xac28,	// (0x000378c2) navi_pane_stacon

0x73c4,	// (0x0003405e) stacon_bottom_pane_g1_ParamLimits

0x73c4,	// (0x0003405e) stacon_bottom_pane_g1

0x6fd9,	// (0x00033c73) aid_levels_signal_lsc_ParamLimits

0x6fd9,	// (0x00033c73) aid_levels_signal_lsc

0xa75b,	// (0x000373f5) signal_pane_stacon_g1_ParamLimits

0xa75b,	// (0x000373f5) signal_pane_stacon_g1

0xa767,	// (0x00037401) signal_pane_stacon_g2_ParamLimits

0xa767,	// (0x00037401) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003c3a7) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003c3a7) signal_pane_stacon_g

0xa79b,	// (0x00037435) title_pane_stacon_t1_ParamLimits

0xa79b,	// (0x00037435) title_pane_stacon_t1

0x7007,	// (0x00033ca1) uni_indicator_pane_stacon_g1

0x7011,	// (0x00033cab) uni_indicator_pane_stacon_g2

0x6ff3,	// (0x00033c8d) uni_indicator_pane_stacon_g3

0x6ffd,	// (0x00033c97) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003c3b3) uni_indicator_pane_stacon_g

0xa7c0,	// (0x0003745a) control_top_pane_stacon_g1

0xa7c8,	// (0x00037462) control_top_pane_stacon_t1_ParamLimits

0xa7c8,	// (0x00037462) control_top_pane_stacon_t1

0x701b,	// (0x00033cb5) aid_levels_battery_lsc_ParamLimits

0x701b,	// (0x00033cb5) aid_levels_battery_lsc

0xa7f9,	// (0x00037493) battery_pane_stacon_g1_ParamLimits

0xa7f9,	// (0x00037493) battery_pane_stacon_g1

0xa805,	// (0x0003749f) battery_pane_stacon_g2_ParamLimits

0xa805,	// (0x0003749f) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003c3bc) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003c3bc) battery_pane_stacon_g

0xa834,	// (0x000374ce) navi_icon_pane_stacon

0xa844,	// (0x000374de) navi_navi_pane_stacon

0xa834,	// (0x000374ce) navi_text_pane_stacon

0xa7c0,	// (0x0003745a) control_bottom_pane_stacon_g1

0xa854,	// (0x000374ee) control_bottom_pane_stacon_t1_ParamLimits

0xa854,	// (0x000374ee) control_bottom_pane_stacon_t1

0xa885,	// (0x0003751f) grid_app_pane_ParamLimits

0xa885,	// (0x0003751f) grid_app_pane

0xa8a1,	// (0x0003753b) scroll_pane_cp15_ParamLimits

0xa8a1,	// (0x0003753b) scroll_pane_cp15

0xa8b4,	// (0x0003754e) cell_app_pane_ParamLimits

0xa8b4,	// (0x0003754e) cell_app_pane

0xa8d6,	// (0x00037570) cell_app_pane_g1_ParamLimits

0xa8d6,	// (0x00037570) cell_app_pane_g1

0x7043,	// (0x00033cdd) cell_app_pane_g2_ParamLimits

0x7043,	// (0x00033cdd) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003c3c1) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003c3c1) cell_app_pane_g

0x704f,	// (0x00033ce9) cell_app_pane_t1_ParamLimits

0x704f,	// (0x00033ce9) cell_app_pane_t1

0x7061,	// (0x00033cfb) grid_highlight_pane_ParamLimits

0x7061,	// (0x00033cfb) grid_highlight_pane

0x6d37,	// (0x000339d1) cell_highlight_pane_g1

0x6d3f,	// (0x000339d9) cell_highlight_pane_g2

0x6d47,	// (0x000339e1) cell_highlight_pane_g3

0x6d4f,	// (0x000339e9) cell_highlight_pane_g4

0x6d57,	// (0x000339f1) cell_highlight_pane_g5

0x6d5f,	// (0x000339f9) cell_highlight_pane_g6

0x6d67,	// (0x00033a01) cell_highlight_pane_g7

0x6d6f,	// (0x00033a09) cell_highlight_pane_g8

0x6d77,	// (0x00033a11) cell_highlight_pane_g9

0x3259,	// (0x0002fef3) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003c36f) cell_highlight_pane_g

0x7072,	// (0x00033d0c) bg_scroll_pane

0xa90d,	// (0x000375a7) scroll_handle_pane

0x70b9,	// (0x00033d53) scroll_bg_pane_g1

0x70ce,	// (0x00033d68) scroll_bg_pane_g2

0x70e6,	// (0x00033d80) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003c3c6) scroll_bg_pane_g

0x70fb,	// (0x00033d95) scroll_handle_focus_pane_ParamLimits

0x70fb,	// (0x00033d95) scroll_handle_focus_pane

0x70b9,	// (0x00033d53) scroll_handle_pane_g1

0x7108,	// (0x00033da2) scroll_handle_pane_g2

0x70e6,	// (0x00033d80) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003c3cd) scroll_handle_pane_g

0x6d88,	// (0x00033a22) bg_popup_sub_pane_cp21_ParamLimits

0x6d88,	// (0x00033a22) bg_popup_sub_pane_cp21

0x711c,	// (0x00033db6) popup_fep_japan_predictive_window_t1_ParamLimits

0x711c,	// (0x00033db6) popup_fep_japan_predictive_window_t1

0x7133,	// (0x00033dcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x7133,	// (0x00033dcd) popup_fep_japan_predictive_window_t2

0x7166,	// (0x00033e00) popup_fep_japan_predictive_window_t3_ParamLimits

0x7166,	// (0x00033e00) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003c3d4) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003c3d4) popup_fep_japan_predictive_window_t

0x33a6,	// (0x00030040) bg_popup_sub_pane_cp23

0x719d,	// (0x00033e37) listscroll_japin_cand_pane

0x71a5,	// (0x00033e3f) popup_fep_japan_candidate_window_t1

0x71b3,	// (0x00033e4d) candidate_pane_ParamLimits

0x71b3,	// (0x00033e4d) candidate_pane

0x71c6,	// (0x00033e60) scroll_pane_cp30

0x71ce,	// (0x00033e68) list_single_popup_jap_candidate_pane_ParamLimits

0x71ce,	// (0x00033e68) list_single_popup_jap_candidate_pane

0x33a6,	// (0x00030040) list_highlight_pane_cp30

0x71e3,	// (0x00033e7d) list_single_popup_jap_candidate_pane_t1

0xa936,	// (0x000375d0) level_1_signal

0xa943,	// (0x000375dd) level_2_signal

0xa950,	// (0x000375ea) level_3_signal

0xa95d,	// (0x000375f7) level_4_signal

0xa96a,	// (0x00037604) level_5_signal

0xa977,	// (0x00037611) level_6_signal

0xa984,	// (0x0003761e) level_7_signal

0xa936,	// (0x000375d0) level_1_battery

0xa943,	// (0x000375dd) level_2_battery

0xa950,	// (0x000375ea) level_3_battery

0xa95d,	// (0x000375f7) level_4_battery

0xa96a,	// (0x00037604) level_5_battery

0xa977,	// (0x00037611) level_6_battery

0xa984,	// (0x0003761e) level_7_battery

0x720a,	// (0x00033ea4) list_menu_pane_ParamLimits

0x720a,	// (0x00033ea4) list_menu_pane

0x721b,	// (0x00033eb5) scroll_pane_cp25_ParamLimits

0x721b,	// (0x00033eb5) scroll_pane_cp25

0xa9b0,	// (0x0003764a) list_double2_graphic_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double2_graphic_pane_cp2

0xa9b0,	// (0x0003764a) list_double2_large_graphic_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double2_large_graphic_pane_cp2

0xa9b0,	// (0x0003764a) list_double2_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double2_pane_cp2

0xa9b0,	// (0x0003764a) list_double_graphic_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double_graphic_pane_cp2

0xa9b0,	// (0x0003764a) list_double_large_graphic_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double_large_graphic_pane_cp2

0xa9b0,	// (0x0003764a) list_double_number_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double_number_pane_cp2

0xa9b0,	// (0x0003764a) list_double_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double_pane_cp2

0xa9c0,	// (0x0003765a) list_single_2graphic_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_2graphic_pane_cp2

0xa9c0,	// (0x0003765a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_graphic_heading_pane_cp2

0xa9c0,	// (0x0003765a) list_single_graphic_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_graphic_pane_cp2

0xa9c0,	// (0x0003765a) list_single_heading_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_heading_pane_cp2

0xa9d5,	// (0x0003766f) list_single_large_graphic_pane_cp2_ParamLimits

0xa9d5,	// (0x0003766f) list_single_large_graphic_pane_cp2

0xa9c0,	// (0x0003765a) list_single_number_heading_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_number_heading_pane_cp2

0xa9c0,	// (0x0003765a) list_single_number_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_number_pane_cp2

0xa9c0,	// (0x0003765a) list_single_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_pane_cp2

0x723d,	// (0x00033ed7) bg_popup_sub_pane_cp22

0xaa8a,	// (0x00037724) popup_side_volume_key_window_g1

0xaaae,	// (0x00037748) popup_side_volume_key_window_t1

0xaaca,	// (0x00037764) volume_small_pane_cp1

0x3568,	// (0x00030202) bg_popup_sub_pane_cp24_ParamLimits

0x3568,	// (0x00030202) bg_popup_sub_pane_cp24

0x7253,	// (0x00033eed) fep_china_uni_candidate_pane_ParamLimits

0x7253,	// (0x00033eed) fep_china_uni_candidate_pane

0x7267,	// (0x00033f01) fep_china_uni_entry_pane

0x7277,	// (0x00033f11) popup_fep_china_uni_window_g1

0x7293,	// (0x00033f2d) fep_china_uni_entry_pane_g1

0x729b,	// (0x00033f35) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003c401) fep_china_uni_entry_pane_g

0x72a3,	// (0x00033f3d) fep_entry_item_pane

0x72ad,	// (0x00033f47) fep_candidate_item_pane

0x72b5,	// (0x00033f4f) fep_china_uni_candidate_pane_g1

0x72bd,	// (0x00033f57) fep_china_uni_candidate_pane_g2

0x72c5,	// (0x00033f5f) fep_china_uni_candidate_pane_g3

0x72cd,	// (0x00033f67) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003c406) fep_china_uni_candidate_pane_g

0x3259,	// (0x0002fef3) fep_entry_item_pane_g1

0x72d5,	// (0x00033f6f) fep_entry_item_pane_t1_ParamLimits

0x72d5,	// (0x00033f6f) fep_entry_item_pane_t1

0x72eb,	// (0x00033f85) fep_candidate_item_pane_t1_ParamLimits

0x72eb,	// (0x00033f85) fep_candidate_item_pane_t1

0x7300,	// (0x00033f9a) fep_candidate_item_pane_t2_ParamLimits

0x7300,	// (0x00033f9a) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003c40f) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003c40f) fep_candidate_item_pane_t

0x35b2,	// (0x0003024c) list_highlight_pane_cp31_ParamLimits

0x35b2,	// (0x0003024c) list_highlight_pane_cp31

0x7312,	// (0x00033fac) level_1_signal_lsc

0x731b,	// (0x00033fb5) level_2_signal_lsc

0x7324,	// (0x00033fbe) level_3_signal_lsc

0x732d,	// (0x00033fc7) level_4_signal_lsc

0x7336,	// (0x00033fd0) level_5_signal_lsc

0x733f,	// (0x00033fd9) level_6_signal_lsc

0x7348,	// (0x00033fe2) level_7_signal_lsc

0x7348,	// (0x00033fe2) level_1_battery_lsc

0x7351,	// (0x00033feb) level_2_battery_lsc

0x735a,	// (0x00033ff4) level_3_battery_lsc

0x7363,	// (0x00033ffd) level_4_battery_lsc

0x736c,	// (0x00034006) level_5_battery_lsc

0x7375,	// (0x0003400f) level_6_battery_lsc

0x7312,	// (0x00033fac) level_7_battery_lsc

0x737e,	// (0x00034018) scroll_handle_focus_pane_g1

0x7387,	// (0x00034021) scroll_handle_focus_pane_g2

0x7390,	// (0x0003402a) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003c414) scroll_handle_focus_pane_g

0xec9c,	// (0x0003b936) list_single_2graphic_pane_g1_ParamLimits

0xec9c,	// (0x0003b936) list_single_2graphic_pane_g1

0xf3e4,	// (0x0003c07e) list_single_2graphic_pane_g2_ParamLimits

0xf3e4,	// (0x0003c07e) list_single_2graphic_pane_g2

0xf3d8,	// (0x0003c072) list_single_2graphic_pane_g3_ParamLimits

0xf3d8,	// (0x0003c072) list_single_2graphic_pane_g3

0xeca8,	// (0x0003b942) list_single_2graphic_pane_g4_ParamLimits

0xeca8,	// (0x0003b942) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003c41b) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003c41b) list_single_2graphic_pane_g

0xecb4,	// (0x0003b94e) list_single_2graphic_pane_t1_ParamLimits

0xecb4,	// (0x0003b94e) list_single_2graphic_pane_t1

0xf49a,	// (0x0003c134) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf49a,	// (0x0003c134) list_double2_graphic_large_graphic_pane_g1

0xf48b,	// (0x0003c125) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xf48b,	// (0x0003c125) list_double2_graphic_large_graphic_pane_g2

0xf45e,	// (0x0003c0f8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c0f8) list_double2_graphic_large_graphic_pane_g3

0xece2,	// (0x0003b97c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xece2,	// (0x0003b97c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003c424) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003c424) list_double2_graphic_large_graphic_pane_g

0xecee,	// (0x0003b988) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xecee,	// (0x0003b988) list_double2_graphic_large_graphic_pane_t1

0xed04,	// (0x0003b99e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xed04,	// (0x0003b99e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003c42d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003c42d) list_double2_graphic_large_graphic_pane_t

0x746b,	// (0x00034105) popup_fast_swap_window_ParamLimits

0x746b,	// (0x00034105) popup_fast_swap_window

0x7487,	// (0x00034121) popup_side_volume_key_window

0x74a1,	// (0x0003413b) stacon_top_pane

0x74ab,	// (0x00034145) status_pane_ParamLimits

0x74ab,	// (0x00034145) status_pane

0x74a1,	// (0x0003413b) status_small_pane

0x33a6,	// (0x00030040) control_pane

0x33a6,	// (0x00030040) stacon_bottom_pane

0x3dc4,	// (0x00030a5e) scroll_pane_cp121

0x6cd3,	// (0x0003396d) set_content_pane

0xaad2,	// (0x0003776c) bg_active_tab_pane_g1_cp1

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp1

0xaadb,	// (0x00037775) bg_active_tab_pane_g3_cp1

0xaad2,	// (0x0003776c) bg_passive_tab_pane_g1_cp1

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp1

0xaadb,	// (0x00037775) bg_passive_tab_pane_g3_cp1

0xaae4,	// (0x0003777e) bg_active_tab_pane_g1_cp2

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp2

0xaaed,	// (0x00037787) bg_active_tab_pane_g3_cp2

0xaae4,	// (0x0003777e) bg_passive_tab_pane_g1_cp2

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp2

0xaaed,	// (0x00037787) bg_passive_tab_pane_g3_cp2

0xaaf6,	// (0x00037790) bg_active_tab_pane_g1_cp3

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp3

0xaaff,	// (0x00037799) bg_active_tab_pane_g3_cp3

0xaaf6,	// (0x00037790) bg_passive_tab_pane_g1_cp3

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp3

0xaaff,	// (0x00037799) bg_passive_tab_pane_g3_cp3

0xab08,	// (0x000377a2) bg_active_tab_pane_g1_cp4

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp4

0xab11,	// (0x000377ab) bg_active_tab_pane_g3_cp4

0xab08,	// (0x000377a2) bg_passive_tab_pane_g1_cp4

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp4

0xab11,	// (0x000377ab) bg_passive_tab_pane_g3_cp4

0x73e9,	// (0x00034083) bg_active_tab_pane_g1_cp5

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp5

0x73e0,	// (0x0003407a) bg_active_tab_pane_g3_cp5

0x73e9,	// (0x00034083) bg_passive_tab_pane_g1_cp5

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp5

0x73e0,	// (0x0003407a) bg_passive_tab_pane_g3_cp5

0xac47,	// (0x000378e1) list_set_graphic_pane_ParamLimits

0xac47,	// (0x000378e1) list_set_graphic_pane

0x33a6,	// (0x00030040) bg_set_opt_pane_cp4

0x73f2,	// (0x0003408c) list_set_graphic_pane_g1_ParamLimits

0x73f2,	// (0x0003408c) list_set_graphic_pane_g1

0x73fe,	// (0x00034098) list_set_graphic_pane_g2_ParamLimits

0x73fe,	// (0x00034098) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003c432) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003c432) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0003c78c) volume_small_pane_cp_g

0x7420,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7420,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2

0x742c,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x742c,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2

0x743b,	// (0x000340d5) list_double2_large_graphic_pane_g3_cp2

0x7443,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7443,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2

0x7459,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7459,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2

0x8b89,	// (0x00035823) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x8b89,	// (0x00035823) list_double_large_graphic_pane_g1_cp2

0x8b9a,	// (0x00035834) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x8b9a,	// (0x00035834) list_double_large_graphic_pane_g2_cp2

0x7586,	// (0x00034220) list_double_large_graphic_pane_g3_cp2

0x8ba9,	// (0x00035843) list_double_large_graphic_pane_g4_cp

0x8bb1,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8bb1,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2

0x8bc8,	// (0x00035862) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x8bc8,	// (0x00035862) list_double_large_graphic_pane_t2_cp2

0x74b9,	// (0x00034153) list_double2_graphic_pane_g1_cp2_ParamLimits

0x74b9,	// (0x00034153) list_double2_graphic_pane_g1_cp2

0x74c5,	// (0x0003415f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x74c5,	// (0x0003415f) list_double2_graphic_pane_g2_cp2

0x74d4,	// (0x0003416e) list_double2_graphic_pane_g3_cp2

0x74dc,	// (0x00034176) list_double2_graphic_pane_t1_cp2_ParamLimits

0x74dc,	// (0x00034176) list_double2_graphic_pane_t1_cp2

0x74f2,	// (0x0003418c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x74f2,	// (0x0003418c) list_double2_graphic_pane_t2_cp2

0x7504,	// (0x0003419e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_number_heading_pane_g1_cp2

0x7510,	// (0x000341aa) list_single_number_heading_pane_g2_cp2

0x7518,	// (0x000341b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7518,	// (0x000341b2) list_single_number_heading_pane_t1_cp2

0x752e,	// (0x000341c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x752e,	// (0x000341c8) list_single_number_heading_pane_t2_cp2

0x7540,	// (0x000341da) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7540,	// (0x000341da) list_single_number_heading_pane_t3_cp2

0x7504,	// (0x0003419e) list_single_heading_pane_g1_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_heading_pane_g1_cp2

0x7510,	// (0x000341aa) list_single_heading_pane_g2_cp2

0x7518,	// (0x000341b2) list_single_heading_pane_t1_cp2_ParamLimits

0x7518,	// (0x000341b2) list_single_heading_pane_t1_cp2

0x8993,	// (0x0003562d) list_single_heading_pane_t2_cp2_ParamLimits

0x8993,	// (0x0003562d) list_single_heading_pane_t2_cp2

0x8918,	// (0x000355b2) list_double_graphic_pane_g1_cp2_ParamLimits

0x8918,	// (0x000355b2) list_double_graphic_pane_g1_cp2

0x8924,	// (0x000355be) list_double_graphic_pane_g2_cp2_ParamLimits

0x8924,	// (0x000355be) list_double_graphic_pane_g2_cp2

0x8933,	// (0x000355cd) list_double_graphic_pane_g3_cp2

0x893b,	// (0x000355d5) list_double_graphic_pane_t1_cp2_ParamLimits

0x893b,	// (0x000355d5) list_double_graphic_pane_t1_cp2

0x8951,	// (0x000355eb) list_double_graphic_pane_t2_cp2_ParamLimits

0x8951,	// (0x000355eb) list_double_graphic_pane_t2_cp2

0x757a,	// (0x00034214) list_double_number_pane_g1_cp2_ParamLimits

0x757a,	// (0x00034214) list_double_number_pane_g1_cp2

0x7586,	// (0x00034220) list_double_number_pane_g2_cp2

0x88de,	// (0x00035578) list_double_number_pane_t1_cp2_ParamLimits

0x88de,	// (0x00035578) list_double_number_pane_t1_cp2

0x88f0,	// (0x0003558a) list_double_number_pane_t2_cp2_ParamLimits

0x88f0,	// (0x0003558a) list_double_number_pane_t2_cp2

0x8906,	// (0x000355a0) list_double_number_pane_t3_cp2_ParamLimits

0x8906,	// (0x000355a0) list_double_number_pane_t3_cp2

0x8856,	// (0x000354f0) list_single_graphic_pane_g1_cp2_ParamLimits

0x8856,	// (0x000354f0) list_single_graphic_pane_g1_cp2

0x7504,	// (0x0003419e) list_single_graphic_pane_g2_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_graphic_pane_g2_cp2

0x7510,	// (0x000341aa) list_single_graphic_pane_g3_cp2

0x882e,	// (0x000354c8) list_single_graphic_pane_t1_cp2_ParamLimits

0x882e,	// (0x000354c8) list_single_graphic_pane_t1_cp2

0x7504,	// (0x0003419e) list_single_number_pane_g1_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_number_pane_g1_cp2

0x7510,	// (0x000341aa) list_single_number_pane_g2_cp2

0x882e,	// (0x000354c8) list_single_number_pane_t1_cp2_ParamLimits

0x882e,	// (0x000354c8) list_single_number_pane_t1_cp2

0x8844,	// (0x000354de) list_single_number_pane_t2_cp2_ParamLimits

0x8844,	// (0x000354de) list_single_number_pane_t2_cp2

0x742c,	// (0x000340c6) list_double2_pane_g1_cp2_ParamLimits

0x742c,	// (0x000340c6) list_double2_pane_g1_cp2

0x743b,	// (0x000340d5) list_double2_pane_g2_cp2

0x7552,	// (0x000341ec) list_double2_pane_t1_cp2_ParamLimits

0x7552,	// (0x000341ec) list_double2_pane_t1_cp2

0x7568,	// (0x00034202) list_double2_pane_t2_cp2_ParamLimits

0x7568,	// (0x00034202) list_double2_pane_t2_cp2

0x757a,	// (0x00034214) list_double_pane_g1_cp2_ParamLimits

0x757a,	// (0x00034214) list_double_pane_g1_cp2

0x7586,	// (0x00034220) list_double_pane_g2_cp2

0x758e,	// (0x00034228) list_double_pane_t1_cp2_ParamLimits

0x758e,	// (0x00034228) list_double_pane_t1_cp2

0x75a4,	// (0x0003423e) list_double_pane_t2_cp2_ParamLimits

0x75a4,	// (0x0003423e) list_double_pane_t2_cp2

0x75cc,	// (0x00034266) list_single_pane_cp2_g3

0x7504,	// (0x0003419e) list_single_pane_g1_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_pane_g1_cp2

0x7510,	// (0x000341aa) list_single_pane_g2_cp2

0x75dc,	// (0x00034276) list_single_pane_t1_cp2_ParamLimits

0x75dc,	// (0x00034276) list_single_pane_t1_cp2

0x75f4,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x75f4,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2

0x7600,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7600,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2

0x760c,	// (0x000342a6) list_single_large_graphic_pane_g3_cp2

0x7614,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7614,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1

0x762e,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x762e,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2

0x8810,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8810,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2

0x87eb,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x87eb,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2

0x7510,	// (0x000341aa) list_single_graphic_heading_pane_g5_cp2

0x7518,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x7518,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2

0x881c,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x881c,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2

0x87df,	// (0x00035479) list_single_2graphic_pane_g1_cp2_ParamLimits

0x87df,	// (0x00035479) list_single_2graphic_pane_g1_cp2

0x87eb,	// (0x00035485) list_single_2graphic_pane_g2_cp2_ParamLimits

0x87eb,	// (0x00035485) list_single_2graphic_pane_g2_cp2

0x7510,	// (0x000341aa) list_single_2graphic_pane_g3_cp2

0x7e30,	// (0x00034aca) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7e30,	// (0x00034aca) list_single_2graphic_pane_g4_cp2

0x87fa,	// (0x00035494) list_single_2graphic_pane_t1_cp2_ParamLimits

0x87fa,	// (0x00035494) list_single_2graphic_pane_t1_cp2

0x3259,	// (0x0002fef3) list_highlight_pane_g10_cp1

0x83f1,	// (0x0003508b) list_highlight_pane_g1_cp1

0x83f9,	// (0x00035093) list_highlight_pane_g2_cp1

0x8401,	// (0x0003509b) list_highlight_pane_g3_cp1

0x8409,	// (0x000350a3) list_highlight_pane_g4_cp1

0x8411,	// (0x000350ab) list_highlight_pane_g5_cp1

0x8419,	// (0x000350b3) list_highlight_pane_g6_cp1

0x8421,	// (0x000350bb) list_highlight_pane_g7_cp1

0x8429,	// (0x000350c3) list_highlight_pane_g8_cp1

0x8431,	// (0x000350cb) list_highlight_pane_g9_cp1

0xb7c6,	// (0x00038460) form_field_slider_pane_t3

0xb7d4,	// (0x0003846e) form_field_slider_pane_t4

0x833b,	// (0x00034fd5) slider_form_pane_ParamLimits

0x833b,	// (0x00034fd5) slider_form_pane

0x33a6,	// (0x00030040) control_abbreviations

0x33a6,	// (0x00030040) control_conventions

0x33a6,	// (0x00030040) control_definitions

0x33a6,	// (0x00030040) format_table_attribute

0x89dd,	// (0x00035677) bg_popup_preview_window_pane_g9

0x33a6,	// (0x00030040) format_table_data2

0x33a6,	// (0x00030040) format_table_data3

0x33a6,	// (0x00030040) format_table_data_example

0x0008,

0x33a6,	// (0x00030040) intro_purpose

0xf928,	// (0x0003c5c2) bg_popup_preview_window_pane_g

0x33a6,	// (0x00030040) texts_category

0x33a6,	// (0x00030040) texts_graphics

0x7644,	// (0x000342de) text_digital

0x7653,	// (0x000342ed) text_primary

0x7662,	// (0x000342fc) text_primary_small

0x7671,	// (0x0003430b) text_secondary

0x7680,	// (0x0003431a) text_title

0x8e73,	// (0x00035b0d) bg_passive_tab_pane_g1_cp3_srt

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp3_srt

0x8e6a,	// (0x00035b04) bg_passive_tab_pane_g3_cp3_srt

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp3_srt_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp3_srt

0x7e0e,	// (0x00034aa8) tabs_4_active_pane_srt_g1

0xa47c,	// (0x00037116) tabs_4_active_pane_srt_t1_ParamLimits

0xa47c,	// (0x00037116) tabs_4_active_pane_srt_t1

0x8e73,	// (0x00035b0d) bg_active_tab_pane_g1_cp3_copy1

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp3_copy1

0x8e6a,	// (0x00035b04) bg_active_tab_pane_g3_cp3_copy1

0x35b2,	// (0x0003024c) tabs_2_long_active_pane_srt_ParamLimits

0x35b2,	// (0x0003024c) tabs_2_long_active_pane_srt

0x35b2,	// (0x0003024c) tabs_2_long_passive_pane_srt_ParamLimits

0x35b2,	// (0x0003024c) tabs_2_long_passive_pane_srt

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp4_srt

0x8da9,	// (0x00035a43) bg_passive_tab_pane_g1_cp4_srt

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp4_srt

0x8da0,	// (0x00035a3a) bg_passive_tab_pane_g3_cp4_srt

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp4_srt

0xa72a,	// (0x000373c4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa72a,	// (0x000373c4) tabs_2_long_active_pane_srt_t1

0x8da9,	// (0x00035a43) bg_active_tab_pane_g1_cp4_srt

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp4_srt

0x8da0,	// (0x00035a3a) bg_active_tab_pane_g3_cp4_srt

0x3568,	// (0x00030202) tabs_3_long_active_pane_srt_ParamLimits

0x3568,	// (0x00030202) tabs_3_long_active_pane_srt

0x3568,	// (0x00030202) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3568,	// (0x00030202) tabs_3_long_passive_pane_cp_srt

0x3568,	// (0x00030202) tabs_3_long_passive_pane_srt_ParamLimits

0x3568,	// (0x00030202) tabs_3_long_passive_pane_srt

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp5_srt

0x73e9,	// (0x00034083) bg_passive_tab_pane_g1_cp5_srt

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp5_srt

0x73e0,	// (0x0003407a) bg_passive_tab_pane_g3_cp5_srt

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp5_srt

0xa749,	// (0x000373e3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa749,	// (0x000373e3) tabs_3_long_active_pane_srt_t1

0x73e9,	// (0x00034083) bg_active_tab_pane_g1_cp5_srt

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp5_srt

0x73e0,	// (0x0003407a) bg_active_tab_pane_g3_cp5_srt

0x8d92,	// (0x00035a2c) navi_text_pane_srt_t1

0x8d8a,	// (0x00035a24) navi_icon_pane_srt_g1

0x7798,	// (0x00034432) midp_editing_number_pane_srt

0x768f,	// (0x00034329) midp_ticker_pane_srt

0x77a0,	// (0x0003443a) midp_ticker_pane_srt_g1

0x77a8,	// (0x00034442) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003c451) midp_ticker_pane_srt_g

0x77b0,	// (0x0003444a) midp_ticker_pane_srt_t1

0x8d7b,	// (0x00035a15) midp_editing_number_pane_t1_copy1

0xac5d,	// (0x000378f7) listscroll_midp_pane

0xac5d,	// (0x000378f7) midp_form_pane

0x7697,	// (0x00034331) midp_info_popup_window_ParamLimits

0x7697,	// (0x00034331) midp_info_popup_window

0x6d88,	// (0x00033a22) bg_popup_sub_pane_cp50_ParamLimits

0x6d88,	// (0x00033a22) bg_popup_sub_pane_cp50

0x8095,	// (0x00034d2f) listscroll_midp_info_pane_ParamLimits

0x8095,	// (0x00034d2f) listscroll_midp_info_pane

0x807d,	// (0x00034d17) listscroll_form_midp_pane_ParamLimits

0x807d,	// (0x00034d17) listscroll_form_midp_pane

0x8089,	// (0x00034d23) scroll_bar_cp050

0xb7ae,	// (0x00038448) list_midp_pane

0x96ba,	// (0x00036354) signal_pane_g2_cp

0x7fa3,	// (0x00034c3d) listscroll_midp_info_pane_t1_ParamLimits

0x7fa3,	// (0x00034c3d) listscroll_midp_info_pane_t1

0x7fbb,	// (0x00034c55) listscroll_midp_info_pane_t2_ParamLimits

0x7fbb,	// (0x00034c55) listscroll_midp_info_pane_t2

0x7ff9,	// (0x00034c93) listscroll_midp_info_pane_t3_ParamLimits

0x7ff9,	// (0x00034c93) listscroll_midp_info_pane_t3

0x8033,	// (0x00034ccd) listscroll_midp_info_pane_t4_ParamLimits

0x8033,	// (0x00034ccd) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003c4fd) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003c4fd) listscroll_midp_info_pane_t

0x6e2b,	// (0x00033ac5) scroll_pane_cp21

0x7f47,	// (0x00034be1) form_midp_field_choice_group_pane

0x7f50,	// (0x00034bea) form_midp_field_text_pane

0x7f89,	// (0x00034c23) form_midp_field_time_pane

0x7f91,	// (0x00034c2b) form_midp_gauge_slider_pane

0x7f9a,	// (0x00034c34) form_midp_gauge_wait_pane

0x33a6,	// (0x00030040) form_midp_image_pane

0xed7a,	// (0x0003ba14) list_single_midp_pane_ParamLimits

0xed7a,	// (0x0003ba14) list_single_midp_pane

0xb78b,	// (0x00038425) form_midp_field_text_pane_t1

0x7c8b,	// (0x00034925) input_focus_pane_cp050

0x7f36,	// (0x00034bd0) list_midp_form_text_pane

0x7f05,	// (0x00034b9f) form_midp_field_choice_group_pane_t1

0x7f13,	// (0x00034bad) input_focus_pane_cp051

0x7f27,	// (0x00034bc1) list_midp_choice_pane

0x33a6,	// (0x00030040) status_idle_pane

0x7ee9,	// (0x00034b83) form_midp_field_time_pane_t1

0x3259,	// (0x0002fef3) wait_anim_pane_g2_copy1

0x7ef7,	// (0x00034b91) form_midp_field_time_pane_t2

0x0001,

0x7702,	// (0x0003439c) aid_navinavi_width_2_pane

0xf85e,	// (0x0003c4f8) form_midp_field_time_pane_t

0x33a6,	// (0x00030040) input_focus_pane_cp052

0x33a6,	// (0x00030040) bg_input_focus_pane_cp040

0x7ec5,	// (0x00034b5f) form_midp_gauge_slider_pane_t1

0x7ed3,	// (0x00034b6d) form_midp_gauge_slider_pane_t2

0xb76f,	// (0x00038409) form_midp_gauge_slider_pane_t3

0xb77d,	// (0x00038417) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003c4ef) form_midp_gauge_slider_pane_t

0x7ee1,	// (0x00034b7b) form_midp_slider_pane

0x35b2,	// (0x0003024c) bg_input_focus_pane_cp041_ParamLimits

0x35b2,	// (0x0003024c) bg_input_focus_pane_cp041

0x7e95,	// (0x00034b2f) form_midp_gauge_wait_pane_t1_ParamLimits

0x7e95,	// (0x00034b2f) form_midp_gauge_wait_pane_t1

0x7ea7,	// (0x00034b41) form_midp_gauge_wait_pane_t2_ParamLimits

0x7ea7,	// (0x00034b41) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003c4ea) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003c4ea) form_midp_gauge_wait_pane_t

0x7eb9,	// (0x00034b53) form_midp_wait_pane_ParamLimits

0x7eb9,	// (0x00034b53) form_midp_wait_pane

0x7e5f,	// (0x00034af9) form_midp_image_pane_g1

0x7e68,	// (0x00034b02) form_midp_image_pane_t1

0x7e77,	// (0x00034b11) form_midp_image_pane_t2

0x7e86,	// (0x00034b20) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003c4e3) form_midp_image_pane_t

0x7e56,	// (0x00034af0) list_single_midp_pane_g1

0xed6b,	// (0x0003ba05) list_single_midp_pane_t1

0xb759,	// (0x000383f3) list_midp_form_item_pane_ParamLimits

0xb759,	// (0x000383f3) list_midp_form_item_pane

0x76aa,	// (0x00034344) list_midp_form_item_pane_t1

0x76b9,	// (0x00034353) midp_ticker_pane_g1

0x76c5,	// (0x0003435f) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003c437) midp_ticker_pane_g

0x76d1,	// (0x0003436b) midp_ticker_pane_t1

0x8d7b,	// (0x00035a15) midp_editing_number_pane_t1

0x8e03,	// (0x00035a9d) midp_editing_number_pane

0x8e0f,	// (0x00035aa9) midp_ticker_pane

0x8d6b,	// (0x00035a05) ai_message_heading_pane

0x33a6,	// (0x00030040) bg_popup_window_pane_cp14

0x8d73,	// (0x00035a0d) listscroll_ai_message_pane

0x8cf5,	// (0x0003598f) ai_message_heading_pane_g1_ParamLimits

0x8cf5,	// (0x0003598f) ai_message_heading_pane_g1

0x8d01,	// (0x0003599b) ai_message_heading_pane_g2_ParamLimits

0x8d01,	// (0x0003599b) ai_message_heading_pane_g2

0x8d0d,	// (0x000359a7) ai_message_heading_pane_g3_ParamLimits

0x8d0d,	// (0x000359a7) ai_message_heading_pane_g3

0x8d19,	// (0x000359b3) ai_message_heading_pane_g4_ParamLimits

0x8d19,	// (0x000359b3) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003c624) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003c624) ai_message_heading_pane_g

0x8d25,	// (0x000359bf) ai_message_heading_pane_t1_ParamLimits

0x8d25,	// (0x000359bf) ai_message_heading_pane_t1

0x8d3f,	// (0x000359d9) ai_message_heading_pane_t2_ParamLimits

0x8d3f,	// (0x000359d9) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003c62d) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003c62d) ai_message_heading_pane_t

0x8d51,	// (0x000359eb) bg_popup_heading_pane_cp1_ParamLimits

0x8d51,	// (0x000359eb) bg_popup_heading_pane_cp1

0x8ce3,	// (0x0003597d) list_ai_message_pane_ParamLimits

0x8ce3,	// (0x0003597d) list_ai_message_pane

0x6e2b,	// (0x00033ac5) scroll_pane_cp10

0x8c7f,	// (0x00035919) list_ai_message_pane_g1

0x8c87,	// (0x00035921) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003c601) list_ai_message_pane_g

0x8c8f,	// (0x00035929) list_ai_message_pane_t1_ParamLimits

0x8c8f,	// (0x00035929) list_ai_message_pane_t1

0x8ca4,	// (0x0003593e) list_ai_message_pane_t2_ParamLimits

0x8ca4,	// (0x0003593e) list_ai_message_pane_t2

0x8cb9,	// (0x00035953) list_ai_message_pane_t3_ParamLimits

0x8cb9,	// (0x00035953) list_ai_message_pane_t3

0x8cce,	// (0x00035968) list_ai_message_pane_t4_ParamLimits

0x8cce,	// (0x00035968) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003c606) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003c606) list_ai_message_pane_t

0x8c6d,	// (0x00035907) cell_ai_soft_ind_pane_ParamLimits

0x8c6d,	// (0x00035907) cell_ai_soft_ind_pane

0x76e3,	// (0x0003437d) cell_ai_soft_ind_pane_g1_ParamLimits

0x76e3,	// (0x0003437d) cell_ai_soft_ind_pane_g1

0x33a6,	// (0x00030040) grid_highlight_cp1

0x76f0,	// (0x0003438a) text_secondary_cp56_ParamLimits

0x76f0,	// (0x0003438a) text_secondary_cp56

0x8c42,	// (0x000358dc) example_general_pane_ParamLimits

0x8c42,	// (0x000358dc) example_general_pane

0x8c4e,	// (0x000358e8) example_parent_pane_g1_ParamLimits

0x8c4e,	// (0x000358e8) example_parent_pane_g1

0x8c5a,	// (0x000358f4) example_parent_pane_t1_ParamLimits

0x8c5a,	// (0x000358f4) example_parent_pane_t1

0xb15c,	// (0x00037df6) popup_preview_text_window_ParamLimits

0xb15c,	// (0x00037df6) popup_preview_text_window

0x75d4,	// (0x0003426e) list_single_pane_cp2_g4

0x39af,	// (0x00030649) bg_popup_preview_window_pane_ParamLimits

0x39af,	// (0x00030649) bg_popup_preview_window_pane

0x89e5,	// (0x0003567f) popup_preview_text_window_t1_ParamLimits

0x89e5,	// (0x0003567f) popup_preview_text_window_t1

0x8a03,	// (0x0003569d) popup_preview_text_window_t2_ParamLimits

0x8a03,	// (0x0003569d) popup_preview_text_window_t2

0x8a4c,	// (0x000356e6) popup_preview_text_window_t3_ParamLimits

0x8a4c,	// (0x000356e6) popup_preview_text_window_t3

0x8a91,	// (0x0003572b) popup_preview_text_window_t4_ParamLimits

0x8a91,	// (0x0003572b) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003c5d5) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003c5d5) popup_preview_text_window_t

0x8b0f,	// (0x000357a9) scroll_pane_cp11

0x7b9d,	// (0x00034837) bg_popup_preview_window_pane_g1

0x89a5,	// (0x0003563f) bg_popup_preview_window_pane_g2

0x89ad,	// (0x00035647) bg_popup_preview_window_pane_g3

0x89b5,	// (0x0003564f) bg_popup_preview_window_pane_g4

0x89bd,	// (0x00035657) bg_popup_preview_window_pane_g5

0x89c5,	// (0x0003565f) bg_popup_preview_window_pane_g6

0x89cd,	// (0x00035667) bg_popup_preview_window_pane_g7

0x89d5,	// (0x0003566f) bg_popup_preview_window_pane_g8

0xa0e6,	// (0x00036d80) aid_popup_width_pane

0xb13e,	// (0x00037dd8) popup_midp_note_alarm_window_ParamLimits

0xb13e,	// (0x00037dd8) popup_midp_note_alarm_window

0x6cdc,	// (0x00033976) data_form_pane_ParamLimits

0xeb02,	// (0x0003b79c) form_field_data_pane_g1

0xeb0a,	// (0x0003b7a4) form_field_data_pane_t1_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_ParamLimits

0x6cf6,	// (0x00033990) data_form_wide_pane_ParamLimits

0xeb22,	// (0x0003b7bc) form_field_data_wide_pane_g1

0xeb2e,	// (0x0003b7c8) form_field_data_wide_pane_t1_ParamLimits

0x3c3b,	// (0x000308d5) input_focus_pane_cp6_ParamLimits

0xa704,	// (0x0003739e) input_popup_find_pane_g1_ParamLimits

0xa704,	// (0x0003739e) input_popup_find_pane_g1

0xa815,	// (0x000374af) aid_navi_side_left_pane

0xa825,	// (0x000374bf) aid_navi_side_right_pane

0x84c2,	// (0x0003515c) bg_popup_window_pane_cp30_ParamLimits

0x84c2,	// (0x0003515c) bg_popup_window_pane_cp30

0x853c,	// (0x000351d6) popup_midp_note_alarm_window_g1_ParamLimits

0x853c,	// (0x000351d6) popup_midp_note_alarm_window_g1

0x856c,	// (0x00035206) popup_midp_note_alarm_window_t1_ParamLimits

0x856c,	// (0x00035206) popup_midp_note_alarm_window_t1

0x860d,	// (0x000352a7) popup_midp_note_alarm_window_t2_ParamLimits

0x860d,	// (0x000352a7) popup_midp_note_alarm_window_t2

0x86bb,	// (0x00035355) popup_midp_note_alarm_window_t3_ParamLimits

0x86bb,	// (0x00035355) popup_midp_note_alarm_window_t3

0x86e3,	// (0x0003537d) popup_midp_note_alarm_window_t4_ParamLimits

0x86e3,	// (0x0003537d) popup_midp_note_alarm_window_t4

0x8703,	// (0x0003539d) popup_midp_note_alarm_window_t5_ParamLimits

0x8703,	// (0x0003539d) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003c572) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003c572) popup_midp_note_alarm_window_t

0x87af,	// (0x00035449) wait_bar_pane_cp1_ParamLimits

0x87af,	// (0x00035449) wait_bar_pane_cp1

0x33a6,	// (0x00030040) wait_anim_pane_copy1

0x33a6,	// (0x00030040) wait_border_pane_copy1

0x8208,	// (0x00034ea2) wait_border_pane_g1_copy1

0xeb48,	// (0x0003b7e2) form_field_popup_pane_g1

0xeb50,	// (0x0003b7ea) form_field_popup_pane_t1_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_cp7_ParamLimits

0x6cdc,	// (0x00033976) list_form_pane_ParamLimits

0xeb68,	// (0x0003b802) form_field_popup_wide_pane_g1

0xeb70,	// (0x0003b80a) form_field_popup_wide_pane_t1_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_cp8_ParamLimits

0x6d16,	// (0x000339b0) list_form_wide_pane_ParamLimits

0x8e9b,	// (0x00035b35) aid_size_cell_graphic_pane

0xebfc,	// (0x0003b896) data_form_pane_t1_ParamLimits

0xeda3,	// (0x0003ba3d) data_form_wide_pane_t1_ParamLimits

0xb362,	// (0x00037ffc) bg_status_flat_pane

0xa3fa,	// (0x00037094) title_pane_t1_ParamLimits

0x3530,	// (0x000301ca) title_pane_t2_ParamLimits

0x3556,	// (0x000301f0) title_pane_t3_ParamLimits

0xf59b,	// (0x0003c235) title_pane_t_ParamLimits

0xa936,	// (0x000375d0) level_1_signal_ParamLimits

0xa943,	// (0x000375dd) level_2_signal_ParamLimits

0xa950,	// (0x000375ea) level_3_signal_ParamLimits

0xa95d,	// (0x000375f7) level_4_signal_ParamLimits

0xa96a,	// (0x00037604) level_5_signal_ParamLimits

0xa977,	// (0x00037611) level_6_signal_ParamLimits

0xa984,	// (0x0003761e) level_7_signal_ParamLimits

0xa936,	// (0x000375d0) level_1_battery_ParamLimits

0xa943,	// (0x000375dd) level_2_battery_ParamLimits

0xa950,	// (0x000375ea) level_3_battery_ParamLimits

0xa95d,	// (0x000375f7) level_4_battery_ParamLimits

0xa96a,	// (0x00037604) level_5_battery_ParamLimits

0xa977,	// (0x00037611) level_6_battery_ParamLimits

0xa984,	// (0x0003761e) level_7_battery_ParamLimits

0x83f1,	// (0x0003508b) bg_status_flat_pane_g1

0x83f9,	// (0x00035093) bg_status_flat_pane_g2

0x8401,	// (0x0003509b) bg_status_flat_pane_g3

0x8409,	// (0x000350a3) bg_status_flat_pane_g4

0x8411,	// (0x000350ab) bg_status_flat_pane_g5

0x8419,	// (0x000350b3) bg_status_flat_pane_g6

0x8421,	// (0x000350bb) bg_status_flat_pane_g7

0xa462,	// (0x000370fc) tabs_3_active_pane_t1_ParamLimits

0xa462,	// (0x000370fc) tabs_3_passive_pane_t1_ParamLimits

0xa47c,	// (0x00037116) tabs_4_active_pane_t1_ParamLimits

0xa47c,	// (0x00037116) tabs_4_1_passive_pane_t1_ParamLimits

0xa718,	// (0x000373b2) tabs_2_active_pane_t1_ParamLimits

0xa718,	// (0x000373b2) tabs_2_passive_pane_t1_ParamLimits

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp4_ParamLimits

0xa72a,	// (0x000373c4) tabs_2_long_active_pane_t1_ParamLimits

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp4_ParamLimits

0xb64e,	// (0x000382e8) list_single_midp_graphic_pane_t1_ParamLimits

0x7ce1,	// (0x0003497b) bg_active_tab_pane_cp5_ParamLimits

0xa749,	// (0x000373e3) tabs_3_long_active_pane_t1_ParamLimits

0xa73d,	// (0x000373d7) bg_passive_tab_pane_cp5_ParamLimits

0xb64e,	// (0x000382e8) list_single_midp_graphic_pane_t1

0xb362,	// (0x00037ffc) bg_status_flat_pane_ParamLimits

0x7a7c,	// (0x00034716) indicator_pane_cp2_ParamLimits

0x7a7c,	// (0x00034716) indicator_pane_cp2

0xb4a5,	// (0x0003813f) navi_pane_srt_ParamLimits

0xb4a5,	// (0x0003813f) navi_pane_srt

0x7aa4,	// (0x0003473e) popup_clock_digital_analogue_window_cp1

0x373a,	// (0x000303d4) indicator_pane_t1

0x768f,	// (0x00034329) copy_highlight_pane

0x768f,	// (0x00034329) cursor_graphics_pane

0x768f,	// (0x00034329) graphic_within_text_pane

0x768f,	// (0x00034329) link_highlight_pane

0x8ad2,	// (0x0003576c) popup_preview_text_window_t5_ParamLimits

0x8ad2,	// (0x0003576c) popup_preview_text_window_t5

0x770a,	// (0x000343a4) cursor_digital_pane

0x770a,	// (0x000343a4) cursor_primary_pane

0x771b,	// (0x000343b5) cursor_primary_small_pane

0x7723,	// (0x000343bd) cursor_secondary_pane

0x772b,	// (0x000343c5) cursor_title_pane

0x770a,	// (0x000343a4) link_highlight_digital_pane

0x7712,	// (0x000343ac) link_highlight_primary_pane

0x771b,	// (0x000343b5) link_highlight_primary_small_pane

0x7723,	// (0x000343bd) link_highlight_secondary_pane

0x772b,	// (0x000343c5) link_highlight_title_pane

0x770a,	// (0x000343a4) copy_highlight_digital_pane

0x770a,	// (0x000343a4) copy_highlight_primary_pane

0x771b,	// (0x000343b5) copy_highlight_primary_small_pane

0x7723,	// (0x000343bd) copy_highlight_secondary_pane

0x772b,	// (0x000343c5) copy_highlight_title_pane

0x7723,	// (0x000343bd) graphic_text_digital_pane

0x8471,	// (0x0003510b) graphic_text_primary_pane

0x847a,	// (0x00035114) graphic_text_primary_small_pane

0x771b,	// (0x000343b5) graphic_text_secondary_pane

0x770a,	// (0x000343a4) graphic_text_title_pane

0xad02,	// (0x0003799c) cursor_primary_pane_g1

0x8463,	// (0x000350fd) cursor_text_primary_t1

0xb7f2,	// (0x0003848c) cursor_primary_small_pane_g1

0x8455,	// (0x000350ef) cursor_text_primary_small_t1

0xb7ea,	// (0x00038484) cursor_primary_small_pane_g1_copy1

0x8447,	// (0x000350e1) cursor_text_primary_small_t1_copy1

0x8439,	// (0x000350d3) cursor_text_title_t1

0xb7e2,	// (0x0003847c) cursor_title_pane_g1

0xad02,	// (0x0003799c) cursor_digital_pane_g1

0x7733,	// (0x000343cd) cursor_text_digital_t1

0x7741,	// (0x000343db) link_highlight_primary_pane_g1

0x83e2,	// (0x0003507c) link_highlight_primary_pane_t1

0x7741,	// (0x000343db) link_highlight_primary_small_pane_g1

0x7749,	// (0x000343e3) link_highlight_primary_small_pane_t1

0x7758,	// (0x000343f2) link_highlight_secondary_pane_g1

0x7760,	// (0x000343fa) link_highlight_secondary_pane_t1

0x8347,	// (0x00034fe1) link_highlight_title_pane_g1

0x835e,	// (0x00034ff8) link_highlight_title_pane_t1

0x8347,	// (0x00034fe1) link_highlight_digital_pane_g1

0x834f,	// (0x00034fe9) link_highlight_digital_pane_t1

0x8223,	// (0x00034ebd) copy_highlight_primary_pane_g1

0x8249,	// (0x00034ee3) copy_highlight_primary_pane_t1

0x8223,	// (0x00034ebd) copy_highlight_primary_small_pane_g1

0x823a,	// (0x00034ed4) copy_highlight_primary_small_pane_t1

0x776f,	// (0x00034409) copy_highlight_secondary_pane_g1

0x7777,	// (0x00034411) copy_highlight_secondary_pane_t1

0x8223,	// (0x00034ebd) copy_highlight_title_pane_g1

0x822b,	// (0x00034ec5) copy_highlight_title_pane_t1

0x8223,	// (0x00034ebd) copy_highlight_digital_pane_g1

0x9021,	// (0x00035cbb) copy_highlight_digital_pane_t1

0x8f1f,	// (0x00035bb9) graphic_text_primary_pane_g1

0x9005,	// (0x00035c9f) graphic_text_primary_pane_t1

0x9013,	// (0x00035cad) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0003c69c) graphic_text_primary_pane_t

0x8fe1,	// (0x00035c7b) graphic_text_primary_small_pane_g1

0x8fe9,	// (0x00035c83) graphic_text_primary_small_pane_t1

0x8ff7,	// (0x00035c91) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0003c697) graphic_text_primary_small_pane_t

0x8f67,	// (0x00035c01) graphic_text_secondary_pane_g1

0x8f6f,	// (0x00035c09) graphic_text_secondary_pane_t1

0x8fd3,	// (0x00035c6d) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0003c692) graphic_text_secondary_pane_t

0x8f43,	// (0x00035bdd) graphic_text_title_pane_g1

0x8f4b,	// (0x00035be5) graphic_text_title_pane_t1

0x8f59,	// (0x00035bf3) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0003c68d) graphic_text_title_pane_t

0x8f1f,	// (0x00035bb9) graphic_text_digital_pane_g1

0x8f27,	// (0x00035bc1) graphic_text_digital_pane_t1

0x8f35,	// (0x00035bcf) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0003c688) graphic_text_digital_pane_t

0x35b2,	// (0x0003024c) navi_icon_pane_srt_ParamLimits

0x35b2,	// (0x0003024c) navi_icon_pane_srt

0x33a6,	// (0x00030040) navi_midp_pane_srt

0x33a6,	// (0x00030040) navi_navi_pane_srt

0x35b2,	// (0x0003024c) navi_text_pane_srt_ParamLimits

0x35b2,	// (0x0003024c) navi_text_pane_srt

0x8eea,	// (0x00035b84) navi_navi_icon_text_pane_srt

0x8f04,	// (0x00035b9e) navi_navi_pane_srt_g1_ParamLimits

0x8f04,	// (0x00035b9e) navi_navi_pane_srt_g1

0x8ef2,	// (0x00035b8c) navi_navi_pane_srt_g2_ParamLimits

0x8ef2,	// (0x00035b8c) navi_navi_pane_srt_g2

0x0001,

0xf923,	// (0x0003c5bd) navi_navi_pane_srt_g_ParamLimits

0xf923,	// (0x0003c5bd) navi_navi_pane_srt_g

0x8f16,	// (0x00035bb0) navi_navi_tabs_pane_srt

0x8eea,	// (0x00035b84) navi_navi_text_pane_srt

0x8eea,	// (0x00035b84) navi_navi_volume_pane_srt

0x8edb,	// (0x00035b75) navi_navi_text_pane_srt_t1

0xbde5,	// (0x00038a7f) navi_navi_volume_pane_srt_g1

0xbded,	// (0x00038a87) volume_small_pane_srt_ParamLimits

0xbded,	// (0x00038a87) volume_small_pane_srt

0xad0a,	// (0x000379a4) volume_small_pane_srt_g1_ParamLimits

0xad0a,	// (0x000379a4) volume_small_pane_srt_g1

0xad1a,	// (0x000379b4) volume_small_pane_srt_g2_ParamLimits

0xad1a,	// (0x000379b4) volume_small_pane_srt_g2

0xad2b,	// (0x000379c5) volume_small_pane_srt_g3_ParamLimits

0xad2b,	// (0x000379c5) volume_small_pane_srt_g3

0xad3c,	// (0x000379d6) volume_small_pane_srt_g4_ParamLimits

0xad3c,	// (0x000379d6) volume_small_pane_srt_g4

0xad4d,	// (0x000379e7) volume_small_pane_srt_g5_ParamLimits

0xad4d,	// (0x000379e7) volume_small_pane_srt_g5

0xad5e,	// (0x000379f8) volume_small_pane_srt_g6_ParamLimits

0xad5e,	// (0x000379f8) volume_small_pane_srt_g6

0xad6f,	// (0x00037a09) volume_small_pane_srt_g7_ParamLimits

0xad6f,	// (0x00037a09) volume_small_pane_srt_g7

0xad80,	// (0x00037a1a) volume_small_pane_srt_g8_ParamLimits

0xad80,	// (0x00037a1a) volume_small_pane_srt_g8

0xad91,	// (0x00037a2b) volume_small_pane_srt_g9_ParamLimits

0xad91,	// (0x00037a2b) volume_small_pane_srt_g9

0xada2,	// (0x00037a3c) volume_small_pane_srt_g10_ParamLimits

0xada2,	// (0x00037a3c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003c43c) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003c43c) volume_small_pane_srt_g

0x3a58,	// (0x000306f2) query_popup_data_pane_cp2

0x8ec1,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8ec1,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1

0x8471,	// (0x0003510b) navi_tabs_2_long_pane_srt

0x8471,	// (0x0003510b) navi_tabs_2_pane_srt

0x8471,	// (0x0003510b) navi_tabs_3_long_pane_srt

0x8471,	// (0x0003510b) navi_tabs_3_pane_srt

0x8471,	// (0x0003510b) navi_tabs_4_pane_srt

0xbdc5,	// (0x00038a5f) tabs_2_active_pane_srt_ParamLimits

0xbdc5,	// (0x00038a5f) tabs_2_active_pane_srt

0xbdd5,	// (0x00038a6f) tabs_2_passive_pane_srt_ParamLimits

0xbdd5,	// (0x00038a6f) tabs_2_passive_pane_srt

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp1_srt

0x7e27,	// (0x00034ac1) bg_passive_tab_pane_g1_cp1_srt

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp1_srt

0x7e1e,	// (0x00034ab8) bg_passive_tab_pane_g3_cp1_srt

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp1_srt_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp1_srt

0x7e16,	// (0x00034ab0) tabs_2_active_pane_srt_g1

0xa718,	// (0x000373b2) tabs_2_active_pane_srt_t1_ParamLimits

0xa718,	// (0x000373b2) tabs_2_active_pane_srt_t1

0x7e27,	// (0x00034ac1) bg_active_tab_pane_g1_cp1_srt

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp1_srt

0x7e1e,	// (0x00034ab8) bg_active_tab_pane_g3_cp1_srt

0xbd92,	// (0x00038a2c) tabs_3_active_pane_srt_ParamLimits

0xbd92,	// (0x00038a2c) tabs_3_active_pane_srt

0xbda3,	// (0x00038a3d) tabs_3_passive_pane_cp_srt_ParamLimits

0xbda3,	// (0x00038a3d) tabs_3_passive_pane_cp_srt

0xbdb4,	// (0x00038a4e) tabs_3_passive_pane_srt_ParamLimits

0xbdb4,	// (0x00038a4e) tabs_3_passive_pane_srt

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6e64,	// (0x00033afe) bg_passive_tab_pane_cp2_srt

0x778f,	// (0x00034429) bg_passive_tab_pane_g1_cp2_srt

0x7399,	// (0x00034033) bg_passive_tab_pane_g2_cp2_srt

0x7786,	// (0x00034420) bg_passive_tab_pane_g3_cp2_srt

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp2_srt_ParamLimits

0x35b2,	// (0x0003024c) bg_active_tab_pane_cp2_srt

0x8eb1,	// (0x00035b4b) tabs_3_active_pane_srt_g1

0xa462,	// (0x000370fc) tabs_3_active_pane_srt_t1_ParamLimits

0xa462,	// (0x000370fc) tabs_3_active_pane_srt_t1

0x778f,	// (0x00034429) bg_active_tab_pane_g1_cp2_srt

0x7399,	// (0x00034033) bg_active_tab_pane_g2_cp2_srt

0x7786,	// (0x00034420) bg_active_tab_pane_g3_cp2_srt

0xbd4a,	// (0x000389e4) tabs_4_active_pane_srt_ParamLimits

0xbd4a,	// (0x000389e4) tabs_4_active_pane_srt

0xbd5c,	// (0x000389f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbd5c,	// (0x000389f6) tabs_4_passive_pane_cp2_srt

0x78a9,	// (0x00034543) aid_size_cell_toolbar

0xa73d,	// (0x000373d7) main_idle_act_pane_ParamLimits

0x7965,	// (0x000345ff) popup_large_graphic_colour_window_ParamLimits

0xb290,	// (0x00037f2a) popup_toolbar_window_ParamLimits

0xb290,	// (0x00037f2a) popup_toolbar_window

0xf4b2,	// (0x0003c14c) list_single_graphic_2heading_pane_ParamLimits

0xf4b2,	// (0x0003c14c) list_single_graphic_2heading_pane

0x7029,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane

0x703b,	// (0x00033cd5) aid_size_cell_apps_grid_prt_pane

0x6e64,	// (0x00033afe) bg_wml_button_pane_cp1_ParamLimits

0x6e64,	// (0x00033afe) bg_wml_button_pane_cp1

0xb78b,	// (0x00038425) form_midp_field_text_pane_t1_ParamLimits

0x7c8b,	// (0x00034925) input_focus_pane_cp050_ParamLimits

0x7f36,	// (0x00034bd0) list_midp_form_text_pane_ParamLimits

0x7f13,	// (0x00034bad) input_focus_pane_cp051_ParamLimits

0x7f27,	// (0x00034bc1) list_midp_choice_pane_ParamLimits

0xb725,	// (0x000383bf) list_single_2graphic_pane_cp3_ParamLimits

0xb725,	// (0x000383bf) list_single_2graphic_pane_cp3

0xb739,	// (0x000383d3) list_single_midp_graphic_pane_ParamLimits

0xb739,	// (0x000383d3) list_single_midp_graphic_pane

0xa05c,	// (0x00036cf6) list_single_graphic_2heading_pane_g1_ParamLimits

0xa05c,	// (0x00036cf6) list_single_graphic_2heading_pane_g1

0xa068,	// (0x00036d02) list_single_graphic_2heading_pane_g4_ParamLimits

0xa068,	// (0x00036d02) list_single_graphic_2heading_pane_g4

0xa074,	// (0x00036d0e) list_single_graphic_2heading_pane_g5_ParamLimits

0xa074,	// (0x00036d0e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003c48f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003c48f) list_single_graphic_2heading_pane_g

0xa080,	// (0x00036d1a) list_single_graphic_2heading_pane_t1_ParamLimits

0xa080,	// (0x00036d1a) list_single_graphic_2heading_pane_t1

0xa094,	// (0x00036d2e) list_single_graphic_2heading_pane_t2_ParamLimits

0xa094,	// (0x00036d2e) list_single_graphic_2heading_pane_t2

0xa0ae,	// (0x00036d48) list_single_graphic_2heading_pane_t3_ParamLimits

0xa0ae,	// (0x00036d48) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003c496) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003c496) list_single_graphic_2heading_pane_t

0x7ae7,	// (0x00034781) bg_popup_sub_pane_cp2

0x7b0d,	// (0x000347a7) grid_toobar_pane

0xb5ca,	// (0x00038264) cell_toolbar_pane_ParamLimits

0xb5ca,	// (0x00038264) cell_toolbar_pane

0x7b43,	// (0x000347dd) cell_toolbar_pane_g1_ParamLimits

0x7b43,	// (0x000347dd) cell_toolbar_pane_g1

0x7b55,	// (0x000347ef) cell_toolbar_pane_g2_ParamLimits

0x7b55,	// (0x000347ef) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003c4a4) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003c4a4) cell_toolbar_pane_g

0x7b77,	// (0x00034811) grid_highlight_pane_cp2_ParamLimits

0x7b77,	// (0x00034811) grid_highlight_pane_cp2

0x7b91,	// (0x0003482b) toolbar_button_pane

0x7b9d,	// (0x00034837) toolbar_button_pane_g1

0x7bad,	// (0x00034847) toolbar_button_pane_g2

0x7ba5,	// (0x0003483f) toolbar_button_pane_g3

0x7bbd,	// (0x00034857) toolbar_button_pane_g4

0x7bb5,	// (0x0003484f) toolbar_button_pane_g5

0x7bc5,	// (0x0003485f) toolbar_button_pane_g6

0x7bcd,	// (0x00034867) toolbar_button_pane_g7

0x7bdd,	// (0x00034877) toolbar_button_pane_g8

0x7bd5,	// (0x0003486f) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003c4a9) toolbar_button_pane_g

0xb5f9,	// (0x00038293) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb5f9,	// (0x00038293) list_single_2graphic_pane_g1_cp3

0xb605,	// (0x0003829f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb605,	// (0x0003829f) list_single_2graphic_pane_g2_cp3

0xb614,	// (0x000382ae) list_single_2graphic_pane_g3_cp3

0xb61c,	// (0x000382b6) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb61c,	// (0x000382b6) list_single_2graphic_pane_g4_cp3

0xb628,	// (0x000382c2) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb628,	// (0x000382c2) list_single_2graphic_pane_t1_cp3

0xb642,	// (0x000382dc) list_single_midp_graphic_pane_g2_ParamLimits

0xb642,	// (0x000382dc) list_single_midp_graphic_pane_g2

0xed16,	// (0x0003b9b0) aid_zoom_text_primary

0xf4aa,	// (0x0003c144) aid_zoom_text_secondary

0x7841,	// (0x000344db) status_small_pane_g7_ParamLimits

0x7841,	// (0x000344db) status_small_pane_g7

0x7864,	// (0x000344fe) status_small_pane_t1_ParamLimits

0xa3dd,	// (0x00037077) title_pane_g2

0x0003,

0xf592,	// (0x0003c22c) title_pane_g

0xa62f,	// (0x000372c9) aid_size_cell_colour_1_pane_ParamLimits

0xa62f,	// (0x000372c9) aid_size_cell_colour_1_pane

0xa643,	// (0x000372dd) aid_size_cell_colour_2_pane_ParamLimits

0xa643,	// (0x000372dd) aid_size_cell_colour_2_pane

0xa657,	// (0x000372f1) aid_size_cell_colour_3_pane_ParamLimits

0xa657,	// (0x000372f1) aid_size_cell_colour_3_pane

0xa66b,	// (0x00037305) aid_size_cell_colour_4_pane_ParamLimits

0xa66b,	// (0x00037305) aid_size_cell_colour_4_pane

0xa777,	// (0x00037411) title_pane_stacon_g1_ParamLimits

0xa777,	// (0x00037411) title_pane_stacon_g1

0x82a0,	// (0x00034f3a) popup_note_wait_window_g3_ParamLimits

0x82a0,	// (0x00034f3a) popup_note_wait_window_g3

0x8316,	// (0x00034fb0) popup_note_wait_window_t5_ParamLimits

0x8316,	// (0x00034fb0) popup_note_wait_window_t5

0x33a6,	// (0x00030040) main_feb_china_hwr_fs_writing_pane

0xaf7f,	// (0x00037c19) popup_feb_china_hwr_fs_window_ParamLimits

0xaf7f,	// (0x00037c19) popup_feb_china_hwr_fs_window

0xb664,	// (0x000382fe) aid_size_cell_hwr_fs_ParamLimits

0xb664,	// (0x000382fe) aid_size_cell_hwr_fs

0x7c8b,	// (0x00034925) bg_popup_sub_pane_cp3_ParamLimits

0x7c8b,	// (0x00034925) bg_popup_sub_pane_cp3

0xb679,	// (0x00038313) grid_hwr_fs_pane_ParamLimits

0xb679,	// (0x00038313) grid_hwr_fs_pane

0xb68d,	// (0x00038327) linegrid_hwr_fs_pane_ParamLimits

0xb68d,	// (0x00038327) linegrid_hwr_fs_pane

0xb69d,	// (0x00038337) cell_hwr_fs_pane_ParamLimits

0xb69d,	// (0x00038337) cell_hwr_fs_pane

0x7c97,	// (0x00034931) linegrid_hwr_fs_pane_g1_ParamLimits

0x7c97,	// (0x00034931) linegrid_hwr_fs_pane_g1

0xb6bb,	// (0x00038355) linegrid_hwr_fs_pane_g2_ParamLimits

0xb6bb,	// (0x00038355) linegrid_hwr_fs_pane_g2

0x7ca3,	// (0x0003493d) linegrid_hwr_fs_pane_g3_ParamLimits

0x7ca3,	// (0x0003493d) linegrid_hwr_fs_pane_g3

0xb6cd,	// (0x00038367) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6cd,	// (0x00038367) linegrid_hwr_fs_pane_g4

0xb6e7,	// (0x00038381) linegrid_hwr_fs_pane_g5_ParamLimits

0xb6e7,	// (0x00038381) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003c4cf) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003c4cf) linegrid_hwr_fs_pane_g

0x7caf,	// (0x00034949) cell_hwr_fs_pane_g1_ParamLimits

0x7caf,	// (0x00034949) cell_hwr_fs_pane_g1

0x7ab5,	// (0x0003474f) cell_hwr_fs_pane_g2_ParamLimits

0x7ab5,	// (0x0003474f) cell_hwr_fs_pane_g2

0xb6fd,	// (0x00038397) cell_hwr_fs_pane_g3_ParamLimits

0xb6fd,	// (0x00038397) cell_hwr_fs_pane_g3

0xb70a,	// (0x000383a4) cell_hwr_fs_pane_g4_ParamLimits

0xb70a,	// (0x000383a4) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003c4da) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003c4da) cell_hwr_fs_pane_g

0xb717,	// (0x000383b1) cell_hwr_fs_pane_t1

0x33a6,	// (0x00030040) grid_highlight_pane_cp6

0x33a6,	// (0x00030040) main_idle_act2_pane

0x6e12,	// (0x00033aac) aid_inside_area_popup_secondary

0xb955,	// (0x000385ef) aid_inside_area_window_primary_ParamLimits

0xb955,	// (0x000385ef) aid_inside_area_window_primary

0x9030,	// (0x00035cca) ai2_news_ticker_pane

0x9038,	// (0x00035cd2) aid_size_cell_ai1_link_ParamLimits

0x9038,	// (0x00035cd2) aid_size_cell_ai1_link

0xbe02,	// (0x00038a9c) popup_ai2_data_window_ParamLimits

0xbe02,	// (0x00038a9c) popup_ai2_data_window

0x9052,	// (0x00035cec) popup_ai2_link_window_ParamLimits

0x9052,	// (0x00035cec) popup_ai2_link_window

0x7c8b,	// (0x00034925) bg_popup_sub_pane_cp4_ParamLimits

0x7c8b,	// (0x00034925) bg_popup_sub_pane_cp4

0x9066,	// (0x00035d00) grid_ai2_link_pane_ParamLimits

0x9066,	// (0x00035d00) grid_ai2_link_pane

0x907d,	// (0x00035d17) popup_ai2_link_window_g1_ParamLimits

0x907d,	// (0x00035d17) popup_ai2_link_window_g1

0x9089,	// (0x00035d23) popup_ai2_link_window_g2_ParamLimits

0x9089,	// (0x00035d23) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0003c6a1) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0003c6a1) popup_ai2_link_window_g

0x9098,	// (0x00035d32) ai2_mp_button_pane

0x90a0,	// (0x00035d3a) ai2_mp_volume_pane

0x7f13,	// (0x00034bad) bg_popup_sub_pane_cp5_ParamLimits

0x7f13,	// (0x00034bad) bg_popup_sub_pane_cp5

0x90a8,	// (0x00035d42) heading_ai2_gene_pane_ParamLimits

0x90a8,	// (0x00035d42) heading_ai2_gene_pane

0x90b4,	// (0x00035d4e) list_ai2_gene_pane_ParamLimits

0x90b4,	// (0x00035d4e) list_ai2_gene_pane

0x90fc,	// (0x00035d96) cell_ai2_link_pane_ParamLimits

0x90fc,	// (0x00035d96) cell_ai2_link_pane

0x9112,	// (0x00035dac) cell_ai2_link_pane_g1

0x33a6,	// (0x00030040) grid_highlight_pane_cp7

0xbe49,	// (0x00038ae3) ai2_mp_volume_pane_g1

0x91af,	// (0x00035e49) ai2_mp_volume_pane_g2

0xbe2d,	// (0x00038ac7) list_ai2_gene_pane_t1

0x91a7,	// (0x00035e41) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0003c6ba) ai2_mp_volume_pane_g

0xbe51,	// (0x00038aeb) volume_small_pane_cp3

0x91b7,	// (0x00035e51) aid_size_cell_ai2_button

0x91bf,	// (0x00035e59) grid_ai2_button_pane

0x91c8,	// (0x00035e62) cell_ai2_button_pane_ParamLimits

0x91c8,	// (0x00035e62) cell_ai2_button_pane

0x3259,	// (0x0002fef3) cell_ai2_button_pane_g1

0x33a6,	// (0x00030040) grid_highlight_pane_cp8

0x9167,	// (0x00035e01) ai2_gene_pane_t1_ParamLimits

0x9167,	// (0x00035e01) ai2_gene_pane_t1

0xaf25,	// (0x00037bbf) aid_height_parent_landscape

0xbb2c,	// (0x000387c6) aid_height_set_list

0x8dc7,	// (0x00035a61) aid_size_parent

0x8e9b,	// (0x00035b35) aid_size_cell_graphic_pane_ParamLimits

0x90c4,	// (0x00035d5e) popup_ai2_data_window_g1_ParamLimits

0x90c4,	// (0x00035d5e) popup_ai2_data_window_g1

0x90d0,	// (0x00035d6a) ai2_news_ticker_pane_g1

0x90d8,	// (0x00035d72) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0003c6a6) ai2_news_ticker_pane_g

0x90e0,	// (0x00035d7a) ai2_news_ticker_pane_t1

0x90ee,	// (0x00035d88) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0003c6ab) ai2_news_ticker_pane_t

0x8e7c,	// (0x00035b16) heading_ai2_gene_pane_g1

0x911b,	// (0x00035db5) heading_ai2_gene_pane_t1_ParamLimits

0x911b,	// (0x00035db5) heading_ai2_gene_pane_t1

0x9130,	// (0x00035dca) list_highlight_pane_cp6

0xbe16,	// (0x00038ab0) ai2_gene_pane_ParamLimits

0xbe16,	// (0x00038ab0) ai2_gene_pane

0xbe3b,	// (0x00038ad5) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0003c6b0) list_ai2_gene_pane_t

0x9138,	// (0x00035dd2) list_highlight_pane_cp8_ParamLimits

0x9138,	// (0x00035dd2) list_highlight_pane_cp8

0x9149,	// (0x00035de3) ai2_gene_pane_g1_ParamLimits

0x9149,	// (0x00035de3) ai2_gene_pane_g1

0x915b,	// (0x00035df5) ai2_gene_pane_g2_ParamLimits

0x915b,	// (0x00035df5) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0003c6b5) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0003c6b5) ai2_gene_pane_g

0x3dc4,	// (0x00030a5e) scroll_pane_cp12

0xaedc,	// (0x00037b76) control_pane_t3_ParamLimits

0xaedc,	// (0x00037b76) control_pane_t3

0x7855,	// (0x000344ef) status_small_pane_g8_ParamLimits

0x7855,	// (0x000344ef) status_small_pane_g8

0xafed,	// (0x00037c87) popup_find_window_ParamLimits

0xb150,	// (0x00037dea) popup_note_image_window_ParamLimits

0xe7a0,	// (0x0003b43a) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7a0,	// (0x0003b43a) list_double2_graphic_pane_vc_g1

0xf41f,	// (0x0003c0b9) list_double2_graphic_pane_vc_g2_ParamLimits

0xf41f,	// (0x0003c0b9) list_double2_graphic_pane_vc_g2

0xf42b,	// (0x0003c0c5) list_double2_graphic_pane_vc_g3_ParamLimits

0xf42b,	// (0x0003c0c5) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003c49d) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003c49d) list_double2_graphic_pane_vc_g

0xe778,	// (0x0003b412) list_double2_graphic_pane_vc_t1_ParamLimits

0xe778,	// (0x0003b412) list_double2_graphic_pane_vc_t1

0xf41f,	// (0x0003c0b9) list_single_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_heading_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_single_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_single_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_single_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_single_heading_pane_vc_g

0xed43,	// (0x0003b9dd) list_single_heading_pane_vc_t1_ParamLimits

0xed43,	// (0x0003b9dd) list_single_heading_pane_vc_t1

0xed59,	// (0x0003b9f3) list_single_heading_pane_vc_t2_ParamLimits

0xed59,	// (0x0003b9f3) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003c4be) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003c4be) list_single_heading_pane_vc_t

0x7be5,	// (0x0003487f) list_setting_number_pane_vc_g1_ParamLimits

0x7be5,	// (0x0003487f) list_setting_number_pane_vc_g1

0x7bf1,	// (0x0003488b) list_setting_number_pane_vc_g2_ParamLimits

0x7bf1,	// (0x0003488b) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003c4c3) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003c4c3) list_setting_number_pane_vc_g

0x7bfd,	// (0x00034897) list_setting_number_pane_vc_t1_ParamLimits

0x7bfd,	// (0x00034897) list_setting_number_pane_vc_t1

0x7c11,	// (0x000348ab) list_setting_number_pane_vc_t2_ParamLimits

0x7c11,	// (0x000348ab) list_setting_number_pane_vc_t2

0x7c2d,	// (0x000348c7) list_setting_number_pane_vc_t3_ParamLimits

0x7c2d,	// (0x000348c7) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003c4c8) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003c4c8) list_setting_number_pane_vc_t

0x7c53,	// (0x000348ed) set_value_pane_vc_ParamLimits

0x7c53,	// (0x000348ed) set_value_pane_vc

0xf4b2,	// (0x0003c14c) list_double2_graphic_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double2_graphic_pane_vc

0x8e22,	// (0x00035abc) list_double2_large_graphic_pane_vc_ParamLimits

0x8e22,	// (0x00035abc) list_double2_large_graphic_pane_vc

0xf4b2,	// (0x0003c14c) list_double2_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double2_pane_vc

0xf4b2,	// (0x0003c14c) list_double_graphic_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_graphic_heading_pane_vc

0xf4b2,	// (0x0003c14c) list_double_graphic_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_graphic_pane_vc

0xf4b2,	// (0x0003c14c) list_double_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_heading_pane_vc

0x8e22,	// (0x00035abc) list_double_large_graphic_pane_vc_ParamLimits

0x8e22,	// (0x00035abc) list_double_large_graphic_pane_vc

0xf4b2,	// (0x0003c14c) list_double_number_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_number_pane_vc

0xf4b2,	// (0x0003c14c) list_double_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_pane_vc

0xf4b2,	// (0x0003c14c) list_double_time_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_double_time_pane_vc

0xf4b2,	// (0x0003c14c) list_setting_number_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_setting_number_pane_vc

0xf4b2,	// (0x0003c14c) list_setting_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_setting_pane_vc

0xf4b2,	// (0x0003c14c) list_single_graphic_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_single_graphic_heading_pane_vc

0xf4b2,	// (0x0003c14c) list_single_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c14c) list_single_heading_pane_vc

0xede8,	// (0x0003ba82) list_single_number_heading_pane_vc_ParamLimits

0xede8,	// (0x0003ba82) list_single_number_heading_pane_vc

0xe7a0,	// (0x0003b43a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe7a0,	// (0x0003b43a) list_double_graphic_heading_pane_vc_g1

0xf41f,	// (0x0003c0b9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_graphic_heading_pane_vc_g2

0xf42b,	// (0x0003c0c5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003c49d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c49d) list_double_graphic_heading_pane_vc_g

0xee3b,	// (0x0003bad5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xee3b,	// (0x0003bad5) list_double_graphic_heading_pane_vc_t1

0xed43,	// (0x0003b9dd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed43,	// (0x0003b9dd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0003c6c1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0003c6c1) list_double_graphic_heading_pane_vc_t

0x7be5,	// (0x0003487f) list_setting_pane_vc_g1_ParamLimits

0x7be5,	// (0x0003487f) list_setting_pane_vc_g1

0x7bf1,	// (0x0003488b) list_setting_pane_vc_g2_ParamLimits

0x7bf1,	// (0x0003488b) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003c4c3) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003c4c3) list_setting_pane_vc_g

0x93b7,	// (0x00036051) list_setting_pane_vc_t1_ParamLimits

0x93b7,	// (0x00036051) list_setting_pane_vc_t1

0x93cb,	// (0x00036065) list_setting_pane_vc_t2_ParamLimits

0x93cb,	// (0x00036065) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0003c704) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0003c704) list_setting_pane_vc_t

0x7c53,	// (0x000348ed) set_value_pane_cp_vc_ParamLimits

0x7c53,	// (0x000348ed) set_value_pane_cp_vc

0xf41f,	// (0x0003c0b9) list_single_number_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_number_heading_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_single_number_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_single_number_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_single_number_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_single_number_heading_pane_vc_g

0xed43,	// (0x0003b9dd) list_single_number_heading_pane_vc_t1_ParamLimits

0xed43,	// (0x0003b9dd) list_single_number_heading_pane_vc_t1

0xee4d,	// (0x0003bae7) list_single_number_heading_pane_vc_t2_ParamLimits

0xee4d,	// (0x0003bae7) list_single_number_heading_pane_vc_t2

0xee5f,	// (0x0003baf9) list_single_number_heading_pane_vc_t3_ParamLimits

0xee5f,	// (0x0003baf9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0003c709) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003c709) list_single_number_heading_pane_vc_t

0xe7a0,	// (0x0003b43a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe7a0,	// (0x0003b43a) list_single_graphic_heading_pane_vc_g1

0xf41f,	// (0x0003c0b9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_graphic_heading_pane_vc_g4

0xf42b,	// (0x0003c0c5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf42b,	// (0x0003c0c5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003c49d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c49d) list_single_graphic_heading_pane_vc_g

0xed43,	// (0x0003b9dd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed43,	// (0x0003b9dd) list_single_graphic_heading_pane_vc_t1

0xee71,	// (0x0003bb0b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee71,	// (0x0003bb0b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0003c710) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0003c710) list_single_graphic_heading_pane_vc_t

0xf41f,	// (0x0003c0b9) list_double2_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double2_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_double2_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double2_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double2_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double2_pane_vc_g

0xe6fb,	// (0x0003b395) list_double2_pane_vc_t1_ParamLimits

0xe6fb,	// (0x0003b395) list_double2_pane_vc_t1

0xf3f3,	// (0x0003c08d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xf3f3,	// (0x0003c08d) list_double2_large_graphic_pane_vc_g1

0xf3ff,	// (0x0003c099) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf3ff,	// (0x0003c099) list_double2_large_graphic_pane_vc_g2

0xf40b,	// (0x0003c0a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf40b,	// (0x0003c0a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003c2c8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003c2c8) list_double2_large_graphic_pane_vc_g

0xe6e5,	// (0x0003b37f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe6e5,	// (0x0003b37f) list_double2_large_graphic_pane_vc_t1

0xf4db,	// (0x0003c175) list_double_time_pane_vc_g1_ParamLimits

0xf4db,	// (0x0003c175) list_double_time_pane_vc_g1

0xf4e7,	// (0x0003c181) list_double_time_pane_vc_g2_ParamLimits

0xf4e7,	// (0x0003c181) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0003c715) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0003c715) list_double_time_pane_vc_g

0xee83,	// (0x0003bb1d) list_double_time_pane_vc_t1_ParamLimits

0xee83,	// (0x0003bb1d) list_double_time_pane_vc_t1

0xee9c,	// (0x0003bb36) list_double_time_pane_vc_t2_ParamLimits

0xee9c,	// (0x0003bb36) list_double_time_pane_vc_t2

0xeed5,	// (0x0003bb6f) list_double_time_pane_vc_t3_ParamLimits

0xeed5,	// (0x0003bb6f) list_double_time_pane_vc_t3

0xeeed,	// (0x0003bb87) list_double_time_pane_vc_t4_ParamLimits

0xeeed,	// (0x0003bb87) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0003c71a) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0003c71a) list_double_time_pane_vc_t

0xf41f,	// (0x0003c0b9) list_double_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_double_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double_pane_vc_g

0xeeff,	// (0x0003bb99) list_double_pane_vc_t1_ParamLimits

0xeeff,	// (0x0003bb99) list_double_pane_vc_t1

0xef11,	// (0x0003bbab) list_double_pane_vc_t2_ParamLimits

0xef11,	// (0x0003bbab) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0003c723) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0003c723) list_double_pane_vc_t

0xf41f,	// (0x0003c0b9) list_double_number_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_number_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_double_number_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_number_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double_number_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double_number_pane_vc_g

0xef27,	// (0x0003bbc1) list_double_number_pane_vc_t1_ParamLimits

0xef27,	// (0x0003bbc1) list_double_number_pane_vc_t1

0xef3b,	// (0x0003bbd5) list_double_number_pane_vc_t2_ParamLimits

0xef3b,	// (0x0003bbd5) list_double_number_pane_vc_t2

0xef11,	// (0x0003bbab) list_double_number_pane_vc_t3_ParamLimits

0xef11,	// (0x0003bbab) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0003c728) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0003c728) list_double_number_pane_vc_t

0xf4f3,	// (0x0003c18d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf4f3,	// (0x0003c18d) list_double_large_graphic_pane_vc_g1

0xf4ff,	// (0x0003c199) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf4ff,	// (0x0003c199) list_double_large_graphic_pane_vc_g2

0xf40b,	// (0x0003c0a5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xf40b,	// (0x0003c0a5) list_double_large_graphic_pane_vc_g3

0xef4d,	// (0x0003bbe7) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef4d,	// (0x0003bbe7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0003c72f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0003c72f) list_double_large_graphic_pane_vc_g

0xef59,	// (0x0003bbf3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef59,	// (0x0003bbf3) list_double_large_graphic_pane_vc_t1

0xef6b,	// (0x0003bc05) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef6b,	// (0x0003bc05) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0003c738) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0003c738) list_double_large_graphic_pane_vc_t

0xf41f,	// (0x0003c0b9) list_double_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c0b9) list_double_heading_pane_vc_g1

0xf42b,	// (0x0003c0c5) list_double_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c0c5) list_double_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c2cf) list_double_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c2cf) list_double_heading_pane_vc_g

0xef82,	// (0x0003bc1c) list_double_heading_pane_vc_t1_ParamLimits

0xef82,	// (0x0003bc1c) list_double_heading_pane_vc_t1

0xed43,	// (0x0003b9dd) list_double_heading_pane_vc_t2_ParamLimits

0xed43,	// (0x0003b9dd) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0003c73d) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0003c73d) list_double_heading_pane_vc_t

0xe7a0,	// (0x0003b43a) list_double_graphic_pane_vc_g1_ParamLimits

0xe7a0,	// (0x0003b43a) list_double_graphic_pane_vc_g1

0xf437,	// (0x0003c0d1) list_double_graphic_pane_vc_g2_ParamLimits

0xf437,	// (0x0003c0d1) list_double_graphic_pane_vc_g2

0xf446,	// (0x0003c0e0) list_double_graphic_pane_vc_g3_ParamLimits

0xf446,	// (0x0003c0e0) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0003c742) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0003c742) list_double_graphic_pane_vc_g

0xef94,	// (0x0003bc2e) list_double_graphic_pane_vc_t1_ParamLimits

0xef94,	// (0x0003bc2e) list_double_graphic_pane_vc_t1

0xef11,	// (0x0003bbab) list_double_graphic_pane_vc_t2_ParamLimits

0xef11,	// (0x0003bbab) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003c749) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003c749) list_double_graphic_pane_vc_t

0xa0ee,	// (0x00036d88) aid_size_cell_fastswap

0xa0f6,	// (0x00036d90) aid_size_cell_touch_ParamLimits

0xa0f6,	// (0x00036d90) aid_size_cell_touch

0xa2aa,	// (0x00036f44) popup_fast_swap_wide_window_ParamLimits

0xa2aa,	// (0x00036f44) popup_fast_swap_wide_window

0xa370,	// (0x0003700a) touch_pane_ParamLimits

0xa370,	// (0x0003700a) touch_pane

0xea5e,	// (0x0003b6f8) button_value_adjust_pane_cp2

0xea66,	// (0x0003b700) button_value_adjust_pane_cp4

0xea86,	// (0x0003b720) form_field_data_pane_cp2

0xeaa5,	// (0x0003b73f) form_field_data_wide_pane_cp2

0x7072,	// (0x00033d0c) bg_scroll_pane_ParamLimits

0xa90d,	// (0x000375a7) scroll_handle_pane_ParamLimits

0xa921,	// (0x000375bb) scroll_sc2_down_pane_ParamLimits

0xa921,	// (0x000375bb) scroll_sc2_down_pane

0x70a3,	// (0x00033d3d) scroll_sc2_up_pane_ParamLimits

0x70a3,	// (0x00033d3d) scroll_sc2_up_pane

0xbfce,	// (0x00038c68) grid_wheel_folder_pane_g1_ParamLimits

0xbfce,	// (0x00038c68) grid_wheel_folder_pane_g1

0xabeb,	// (0x00037885) clock_nsta_pane_cp2_ParamLimits

0xabeb,	// (0x00037885) clock_nsta_pane_cp2

0xac5d,	// (0x000378f7) listscroll_midp_pane_ParamLimits

0xac69,	// (0x00037903) midp_canvas_pane

0xaf1d,	// (0x00037bb7) nsta_clock_indic_pane

0x78d1,	// (0x0003456b) listscroll_form_pane_vc

0x78d9,	// (0x00034573) listscroll_set_pane_vc_ParamLimits

0x78d9,	// (0x00034573) listscroll_set_pane_vc

0xb37e,	// (0x00038018) clock_nsta_pane

0xb38b,	// (0x00038025) indicator_nsta_pane

0x7ae7,	// (0x00034781) bg_popup_sub_pane_cp2_ParamLimits

0x7afb,	// (0x00034795) find_pane_cp2_ParamLimits

0x7afb,	// (0x00034795) find_pane_cp2

0x7b0d,	// (0x000347a7) grid_toobar_pane_ParamLimits

0x7c5f,	// (0x000348f9) list_form_gen_pane_vc_ParamLimits

0x7c5f,	// (0x000348f9) list_form_gen_pane_vc

0x7c75,	// (0x0003490f) scroll_pane_cp8_vc_ParamLimits

0x7c75,	// (0x0003490f) scroll_pane_cp8_vc

0x7cc5,	// (0x0003495f) data_form_wide_pane_vc_ParamLimits

0x7cc5,	// (0x0003495f) data_form_wide_pane_vc

0x7e3c,	// (0x00034ad6) form_field_data_wide_pane_vc_g1

0x7e44,	// (0x00034ade) form_field_data_wide_pane_vc_t1_ParamLimits

0x7e44,	// (0x00034ade) form_field_data_wide_pane_vc_t1

0x6ce8,	// (0x00033982) input_focus_pane_cp6_vc_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_cp6_vc

0xb7ae,	// (0x00038448) list_midp_pane_ParamLimits

0xb7ba,	// (0x00038454) scroll_pane_cp16_ParamLimits

0xb7ba,	// (0x00038454) scroll_pane_cp16

0x80a9,	// (0x00034d43) button_value_adjust_pane_ParamLimits

0x80a9,	// (0x00034d43) button_value_adjust_pane

0xbb38,	// (0x000387d2) button_value_adjust_pane_cp6_ParamLimits

0xbb38,	// (0x000387d2) button_value_adjust_pane_cp6

0xbc40,	// (0x000388da) settings_code_pane_cp_ParamLimits

0xbc40,	// (0x000388da) settings_code_pane_cp

0x3259,	// (0x0002fef3) cell_touch_pane_g1

0x3259,	// (0x0002fef3) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003c3e6) cell_touch_pane_g

0xbe5a,	// (0x00038af4) cell_touch_pane_cp_ParamLimits

0xbe5a,	// (0x00038af4) cell_touch_pane_cp

0xbe6a,	// (0x00038b04) cell_touch_pane_ParamLimits

0xbe6a,	// (0x00038b04) cell_touch_pane

0x3259,	// (0x0002fef3) scroll_sc2_down_pane_g1

0x3259,	// (0x0002fef3) scroll_sc2_up_pane_g1

0x33a6,	// (0x00030040) bg_set_opt_pane_cp4_vc

0x91da,	// (0x00035e74) list_set_graphic_pane_vc_g1_ParamLimits

0x91da,	// (0x00035e74) list_set_graphic_pane_vc_g1

0x91e6,	// (0x00035e80) list_set_graphic_pane_vc_g2_ParamLimits

0x91e6,	// (0x00035e80) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0003c6c6) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003c6c6) list_set_graphic_pane_vc_g

0x91f2,	// (0x00035e8c) text_primary_small_cp13_vc_ParamLimits

0x91f2,	// (0x00035e8c) text_primary_small_cp13_vc

0x920a,	// (0x00035ea4) list_set_graphic_pane_vc_ParamLimits

0x920a,	// (0x00035ea4) list_set_graphic_pane_vc

0x33a6,	// (0x00030040) input_focus_pane_cp2_vc

0x3259,	// (0x0002fef3) setting_code_pane_vc_g1

0x921d,	// (0x00035eb7) setting_code_pane_vc_t1

0x922b,	// (0x00035ec5) set_text_pane_vc_t1_ParamLimits

0x922b,	// (0x00035ec5) set_text_pane_vc_t1

0x33a6,	// (0x00030040) input_focus_pane_cp1_vc

0x9246,	// (0x00035ee0) list_set_text_pane_vc

0x3259,	// (0x0002fef3) setting_text_pane_vc_g1

0x33a6,	// (0x00030040) bg_set_opt_pane_cp2_vc

0x9250,	// (0x00035eea) setting_slider_graphic_pane_vc_g1

0x9258,	// (0x00035ef2) setting_slider_graphic_pane_vc_t1

0x9266,	// (0x00035f00) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0003c6cb) setting_slider_graphic_pane_vc_t

0x9274,	// (0x00035f0e) slider_set_pane_cp_vc

0x927c,	// (0x00035f16) slider_set_pane_vc_g1

0x9285,	// (0x00035f1f) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0003c6d0) slider_set_pane_vc_g

0x6d37,	// (0x000339d1) set_opt_bg_pane_g1_copy1

0x6d3f,	// (0x000339d9) set_opt_bg_pane_g2_copy1

0x92b1,	// (0x00035f4b) set_opt_bg_pane_g3_copy1

0x6d4f,	// (0x000339e9) set_opt_bg_pane_g4_copy1

0x6d57,	// (0x000339f1) set_opt_bg_pane_g5_copy1

0x6d5f,	// (0x000339f9) set_opt_bg_pane_g6_copy1

0x92b9,	// (0x00035f53) set_opt_bg_pane_g7_copy1

0x92c1,	// (0x00035f5b) set_opt_bg_pane_g8_copy1

0x92c9,	// (0x00035f63) set_opt_bg_pane_g9_copy1

0x33a6,	// (0x00030040) bg_set_opt_pane_cp_vc

0x92d1,	// (0x00035f6b) setting_slider_pane_vc_t1

0x9258,	// (0x00035ef2) setting_slider_pane_vc_t2

0x9266,	// (0x00035f00) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0003c6df) setting_slider_pane_vc_t

0x9274,	// (0x00035f0e) slider_set_pane_vc

0xb7fa,	// (0x00038494) volume_set_pane_vc_g1

0xbe7c,	// (0x00038b16) volume_set_pane_vc_g2

0xbe85,	// (0x00038b1f) volume_set_pane_vc_g3

0xbe8e,	// (0x00038b28) volume_set_pane_vc_g4

0xbe97,	// (0x00038b31) volume_set_pane_vc_g5

0xbea0,	// (0x00038b3a) volume_set_pane_vc_g6

0xbea9,	// (0x00038b43) volume_set_pane_vc_g7

0xbeb2,	// (0x00038b4c) volume_set_pane_vc_g8

0xbebb,	// (0x00038b55) volume_set_pane_vc_g9

0xbec4,	// (0x00038b5e) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0003c6e6) volume_set_pane_vc_g

0x92e0,	// (0x00035f7a) volume_set_pane_vc

0x92e8,	// (0x00035f82) button_value_adjust_pane_cp1_vc

0x92f2,	// (0x00035f8c) list_highlight_pane_cp2_vc

0x92fb,	// (0x00035f95) list_set_pane_vc_ParamLimits

0x92fb,	// (0x00035f95) list_set_pane_vc

0x934d,	// (0x00035fe7) main_pane_set_vc_t1_ParamLimits

0x934d,	// (0x00035fe7) main_pane_set_vc_t1

0x9362,	// (0x00035ffc) main_pane_set_vc_t2_ParamLimits

0x9362,	// (0x00035ffc) main_pane_set_vc_t2

0x9374,	// (0x0003600e) main_pane_set_vc_t3_ParamLimits

0x9374,	// (0x0003600e) main_pane_set_vc_t3

0x9386,	// (0x00036020) main_pane_set_vc_t4_ParamLimits

0x9386,	// (0x00036020) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0003c6fb) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0003c6fb) main_pane_set_vc_t

0x9398,	// (0x00036032) setting_code_pane_vc_ParamLimits

0x9398,	// (0x00036032) setting_code_pane_vc

0x93a7,	// (0x00036041) setting_slider_graphic_pane_vc

0x93a7,	// (0x00036041) setting_slider_pane_vc

0x93a7,	// (0x00036041) setting_text_pane_vc

0x93a7,	// (0x00036041) setting_volume_pane_vc

0x93af,	// (0x00036049) scroll_pane_cp121_vc

0x6cd3,	// (0x0003396d) set_content_pane_vc

0x93ed,	// (0x00036087) button_value_adjust_pane_g1

0x93f6,	// (0x00036090) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0003c74e) button_value_adjust_pane_g

0x93ff,	// (0x00036099) form_field_slider_wide_pane_vc_t1_ParamLimits

0x93ff,	// (0x00036099) form_field_slider_wide_pane_vc_t1

0x9415,	// (0x000360af) form_field_slider_wide_pane_vc_t2_ParamLimits

0x9415,	// (0x000360af) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0003c753) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0003c753) form_field_slider_wide_pane_vc_t

0x3568,	// (0x00030202) input_focus_pane_cp10_vc_ParamLimits

0x3568,	// (0x00030202) input_focus_pane_cp10_vc

0x942a,	// (0x000360c4) slider_cont_pane_cp1_vc_ParamLimits

0x942a,	// (0x000360c4) slider_cont_pane_cp1_vc

0x927c,	// (0x00035f16) slider_form_pane_g1_cp2

0x9285,	// (0x00035f1f) slider_form_pane_g2_cp2

0x9445,	// (0x000360df) form_field_slider_pane_vc_t3

0x9453,	// (0x000360ed) form_field_slider_pane_vc_t4

0x9461,	// (0x000360fb) slider_form_pane_vc_ParamLimits

0x9461,	// (0x000360fb) slider_form_pane_vc

0x946e,	// (0x00036108) form_field_slider_pane_vc_t1_ParamLimits

0x946e,	// (0x00036108) form_field_slider_pane_vc_t1

0x9484,	// (0x0003611e) form_field_slider_pane_vc_t2_ParamLimits

0x9484,	// (0x0003611e) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0003c763) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0003c763) form_field_slider_pane_vc_t

0x3568,	// (0x00030202) input_focus_pane_cp9_vc_ParamLimits

0x3568,	// (0x00030202) input_focus_pane_cp9_vc

0x9496,	// (0x00036130) slider_cont_pane_vc_ParamLimits

0x9496,	// (0x00036130) slider_cont_pane_vc

0x94a8,	// (0x00036142) list_form_graphic_pane_cp_vc_ParamLimits

0x94a8,	// (0x00036142) list_form_graphic_pane_cp_vc

0x7e3c,	// (0x00034ad6) form_field_popup_wide_pane_vc_g1

0x94bd,	// (0x00036157) form_field_popup_wide_pane_vc_t1_ParamLimits

0x94bd,	// (0x00036157) form_field_popup_wide_pane_vc_t1

0x6ce8,	// (0x00033982) input_focus_pane_cp8_vc_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_cp8_vc

0x94d2,	// (0x0003616c) list_form_wide_pane_vc_ParamLimits

0x94d2,	// (0x0003616c) list_form_wide_pane_vc

0x94de,	// (0x00036178) list_form_graphic_pane_vc_g1

0x94e6,	// (0x00036180) list_form_graphic_pane_vc_t1_ParamLimits

0x94e6,	// (0x00036180) list_form_graphic_pane_vc_t1

0x35b2,	// (0x0003024c) list_highlight_pane_cp5_vc_ParamLimits

0x35b2,	// (0x0003024c) list_highlight_pane_cp5_vc

0x9502,	// (0x0003619c) list_form_graphic_pane_vc_ParamLimits

0x9502,	// (0x0003619c) list_form_graphic_pane_vc

0x7e3c,	// (0x00034ad6) form_field_popup_pane_vc_g1

0x9518,	// (0x000361b2) form_field_popup_pane_vc_t1_ParamLimits

0x9518,	// (0x000361b2) form_field_popup_pane_vc_t1

0x6ce8,	// (0x00033982) input_focus_pane_cp7_vc_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_cp7_vc

0x952d,	// (0x000361c7) list_form_pane_vc_ParamLimits

0x952d,	// (0x000361c7) list_form_pane_vc

0x9539,	// (0x000361d3) data_form_pane_vc_t1_ParamLimits

0x9539,	// (0x000361d3) data_form_pane_vc_t1

0x6d37,	// (0x000339d1) input_focus_pane_vc_g1

0x6d3f,	// (0x000339d9) input_focus_pane_vc_g2

0x6d47,	// (0x000339e1) input_focus_pane_vc_g3

0x6d4f,	// (0x000339e9) input_focus_pane_vc_g4

0x6d57,	// (0x000339f1) input_focus_pane_vc_g5

0x6d5f,	// (0x000339f9) input_focus_pane_vc_g6

0x6d67,	// (0x00033a01) input_focus_pane_vc_g7

0x6d6f,	// (0x00033a09) input_focus_pane_vc_g8

0x6d77,	// (0x00033a11) input_focus_pane_vc_g9

0x3259,	// (0x0002fef3) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003c36f) input_focus_pane_vc_g

0x7cc5,	// (0x0003495f) data_form_pane_vc_ParamLimits

0x7cc5,	// (0x0003495f) data_form_pane_vc

0x7e3c,	// (0x00034ad6) form_field_data_pane_vc_g1

0x9554,	// (0x000361ee) form_field_data_pane_vc_t1_ParamLimits

0x9554,	// (0x000361ee) form_field_data_pane_vc_t1

0x6ce8,	// (0x00033982) input_focus_pane_vc_ParamLimits

0x6ce8,	// (0x00033982) input_focus_pane_vc

0x7cd1,	// (0x0003496b) button_value_adjust_pane_cp3_vc

0x956a,	// (0x00036204) button_value_adjust_pane_cp5_vc

0x9572,	// (0x0003620c) form_field_data_pane_vc_ParamLimits

0x9572,	// (0x0003620c) form_field_data_pane_vc

0x7cd9,	// (0x00034973) form_field_data_pane_vc_cp2

0x9589,	// (0x00036223) form_field_data_wide_pane_vc_ParamLimits

0x9589,	// (0x00036223) form_field_data_wide_pane_vc

0x959f,	// (0x00036239) form_field_data_wide_pane_vc_cp2

0x95a7,	// (0x00036241) form_field_popup_pane_vc_ParamLimits

0x95a7,	// (0x00036241) form_field_popup_pane_vc

0x95be,	// (0x00036258) form_field_popup_wide_pane_vc_ParamLimits

0x95be,	// (0x00036258) form_field_popup_wide_pane_vc

0x95d4,	// (0x0003626e) form_field_slider_pane_vc_ParamLimits

0x95d4,	// (0x0003626e) form_field_slider_pane_vc

0x95e7,	// (0x00036281) form_field_slider_wide_pane_vc_ParamLimits

0x95e7,	// (0x00036281) form_field_slider_wide_pane_vc

0xbecd,	// (0x00038b67) grid_touch_1_pane_ParamLimits

0xbecd,	// (0x00038b67) grid_touch_1_pane

0xbed9,	// (0x00038b73) grid_touch_2_pane_ParamLimits

0xbed9,	// (0x00038b73) grid_touch_2_pane

0x789b,	// (0x00034535) touch_pane_g1_ParamLimits

0x789b,	// (0x00034535) touch_pane_g1

0x95fa,	// (0x00036294) cell_app_pane_cp_wide_ParamLimits

0x95fa,	// (0x00036294) cell_app_pane_cp_wide

0x960a,	// (0x000362a4) grid_popup_fast_wide_pane_ParamLimits

0x960a,	// (0x000362a4) grid_popup_fast_wide_pane

0x961e,	// (0x000362b8) scroll_pane_cp19_ParamLimits

0x961e,	// (0x000362b8) scroll_pane_cp19

0x33a6,	// (0x00030040) bg_popup_window_pane_cp20

0x9632,	// (0x000362cc) listscroll_popup_fast_wide_pane

0x35b2,	// (0x0003024c) grid_indicator_nsta_pane

0x965e,	// (0x000362f8) clock_nsta_pane_g1

0x9667,	// (0x00036301) clock_nsta_pane_t1

0xbef1,	// (0x00038b8b) cell_indicator_nsta_pane_ParamLimits

0xbef1,	// (0x00038b8b) cell_indicator_nsta_pane

0x9650,	// (0x000362ea) cell_indicator_nsta_pane_g1

0xbf29,	// (0x00038bc3) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0003c76d) cell_indicator_nsta_pane_g

0x9683,	// (0x0003631d) clock_nsta_pane_cp

0x968b,	// (0x00036325) indicator_nsta_pane_cp

0x9694,	// (0x0003632e) nsta_clock_indic_pane_g1

0x3719,	// (0x000303b3) grid_indicator_pane

0x7195,	// (0x00033e2f) scroll_pane_cp29

0xab42,	// (0x000377dc) indicator_nsta_pane_cp2_ParamLimits

0xab42,	// (0x000377dc) indicator_nsta_pane_cp2

0x35b2,	// (0x0003024c) main_apps_wheel_pane

0x7f50,	// (0x00034bea) form_midp_field_text_pane_ParamLimits

0x8089,	// (0x00034d23) scroll_bar_cp050_ParamLimits

0x96cc,	// (0x00036366) cell_indicator_pane_ParamLimits

0x96cc,	// (0x00036366) cell_indicator_pane

0x96e2,	// (0x0003637c) cell_indicator_pane_g1

0xbf3e,	// (0x00038bd8) grid_wheel_folder_pane_ParamLimits

0xbf3e,	// (0x00038bd8) grid_wheel_folder_pane

0xbf50,	// (0x00038bea) list_wheel_apps_pane_ParamLimits

0xbf50,	// (0x00038bea) list_wheel_apps_pane

0xbf5f,	// (0x00038bf9) main_apps_wheel_pane_g1_ParamLimits

0xbf5f,	// (0x00038bf9) main_apps_wheel_pane_g1

0xbf73,	// (0x00038c0d) main_apps_wheel_pane_g2_ParamLimits

0xbf73,	// (0x00038c0d) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0003c77c) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0003c77c) main_apps_wheel_pane_g

0xbf87,	// (0x00038c21) main_apps_wheel_pane_t1_ParamLimits

0xbf87,	// (0x00038c21) main_apps_wheel_pane_t1

0xbfa6,	// (0x00038c40) list_wheel_apps_pane_g1

0xbfae,	// (0x00038c48) list_wheel_apps_pane_g2

0xbfb6,	// (0x00038c50) list_wheel_apps_pane_g3

0xbfbe,	// (0x00038c58) list_wheel_apps_pane_g4

0xbfc6,	// (0x00038c60) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0003c781) list_wheel_apps_pane_g

0x35b2,	// (0x0003024c) navi_icon_text_pane

0xb2d2,	// (0x00037f6c) aid_fill_nsta

0xbfe5,	// (0x00038c7f) navi_icon_text_pane_g1

0xbff1,	// (0x00038c8b) navi_icon_text_pane_t1

0x740a,	// (0x000340a4) list_set_graphic_pane_t1_ParamLimits

0x740a,	// (0x000340a4) list_set_graphic_pane_t1

0x8732,	// (0x000353cc) popup_midp_note_alarm_window_t6_ParamLimits

0x8732,	// (0x000353cc) popup_midp_note_alarm_window_t6

0x8744,	// (0x000353de) popup_midp_note_alarm_window_t7_ParamLimits

0x8744,	// (0x000353de) popup_midp_note_alarm_window_t7

0x8756,	// (0x000353f0) popup_midp_note_alarm_window_t8_ParamLimits

0x8756,	// (0x000353f0) popup_midp_note_alarm_window_t8

0x8768,	// (0x00035402) popup_midp_note_alarm_window_t9_ParamLimits

0x8768,	// (0x00035402) popup_midp_note_alarm_window_t9

0x877a,	// (0x00035414) popup_midp_note_alarm_window_t10_ParamLimits

0x877a,	// (0x00035414) popup_midp_note_alarm_window_t10

0x878c,	// (0x00035426) popup_midp_note_alarm_window_t11_ParamLimits

0x878c,	// (0x00035426) popup_midp_note_alarm_window_t11

0x879e,	// (0x00035438) scroll_pane_cp17_ParamLimits

0x879e,	// (0x00035438) scroll_pane_cp17

0xb7fa,	// (0x00038494) volume_small_pane_cp_g1

0xc003,	// (0x00038c9d) volume_small_pane_cp_g2

0xc00c,	// (0x00038ca6) volume_small_pane_cp_g3

0xc015,	// (0x00038caf) volume_small_pane_cp_g4

0xb827,	// (0x000384c1) volume_small_pane_cp_g5

0xc01e,	// (0x00038cb8) volume_small_pane_cp_g6

0xc027,	// (0x00038cc1) volume_small_pane_cp_g7

0xc030,	// (0x00038cca) volume_small_pane_cp_g8

0xc039,	// (0x00038cd3) volume_small_pane_cp_g9

0xc042,	// (0x00038cdc) volume_small_pane_cp_g10

0x76b9,	// (0x00034353) midp_ticker_pane_g1_ParamLimits

0x76c5,	// (0x0003435f) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003c437) midp_ticker_pane_g_ParamLimits

0x76d1,	// (0x0003436b) midp_ticker_pane_t1_ParamLimits

0xb2e2,	// (0x00037f7c) aid_fill_nsta_2

0x8075,	// (0x00034d0f) list_form2_midp_pane

0x8e03,	// (0x00035a9d) midp_editing_number_pane_ParamLimits

0x8e0f,	// (0x00035aa9) midp_ticker_pane_ParamLimits

0xc04b,	// (0x00038ce5) form2_midp_field_pane

0xc06f,	// (0x00038d09) scroll_pane_cp51

0xcc90,	// (0x0003992a) form2_midp_button_pane_ParamLimits

0xcc90,	// (0x0003992a) form2_midp_button_pane

0xcca2,	// (0x0003993c) form2_midp_content_pane_ParamLimits

0xcca2,	// (0x0003993c) form2_midp_content_pane

0xccbc,	// (0x00039956) form2_midp_field_choice_group_pane

0xccc4,	// (0x0003995e) form2_midp_field_pane_g1

0xcccc,	// (0x00039966) form2_midp_field_pane_g2

0xccd4,	// (0x0003996e) form2_midp_field_pane_g3

0xccdc,	// (0x00039976) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0003c7a6) form2_midp_field_pane_g

0xcce4,	// (0x0003997e) form2_midp_gauge_slider_pane

0xccec,	// (0x00039986) form2_midp_gauge_wait_pane

0xccf4,	// (0x0003998e) form2_midp_image_pane_ParamLimits

0xccf4,	// (0x0003998e) form2_midp_image_pane

0xcd0f,	// (0x000399a9) form2_midp_label_pane_ParamLimits

0xcd0f,	// (0x000399a9) form2_midp_label_pane

0xcd28,	// (0x000399c2) form2_midp_label_pane_cp_ParamLimits

0xcd28,	// (0x000399c2) form2_midp_label_pane_cp

0xcd47,	// (0x000399e1) form2_midp_string_pane_ParamLimits

0xcd47,	// (0x000399e1) form2_midp_string_pane

0xefa6,	// (0x0003bc40) form2_midp_text_pane_ParamLimits

0xefa6,	// (0x0003bc40) form2_midp_text_pane

0xcd59,	// (0x000399f3) form2_midp_time_pane

0xcd69,	// (0x00039a03) input_focus_pane_cp51_ParamLimits

0xcd69,	// (0x00039a03) input_focus_pane_cp51

0xcd81,	// (0x00039a1b) form2_midp_label_pane_t1_ParamLimits

0xcd81,	// (0x00039a1b) form2_midp_label_pane_t1

0xefbf,	// (0x0003bc59) form2_mdip_text_pane_t1_ParamLimits

0xefbf,	// (0x0003bc59) form2_mdip_text_pane_t1

0xefda,	// (0x0003bc74) form2_midp_time_pane_t1

0xcdc9,	// (0x00039a63) form2_midp_gauge_slider_pane_t1

0xcddb,	// (0x00039a75) form2_midp_gauge_slider_pane_t2

0xcded,	// (0x00039a87) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0003c7af) form2_midp_gauge_slider_pane_t

0xcdff,	// (0x00039a99) form2_midp_slider_pane

0xce0b,	// (0x00039aa5) form2_midp_gauge_wait_pane_t1

0xce19,	// (0x00039ab3) form2_midp_wait_pane_ParamLimits

0xce19,	// (0x00039ab3) form2_midp_wait_pane

0xa9c0,	// (0x0003765a) list_single_2graphic_pane_cp4_ParamLimits

0xa9c0,	// (0x0003765a) list_single_2graphic_pane_cp4

0xb739,	// (0x000383d3) list_single_midp_graphic_pane_cp_ParamLimits

0xb739,	// (0x000383d3) list_single_midp_graphic_pane_cp

0x33a6,	// (0x00030040) list_highlight_pane_cp20

0xce44,	// (0x00039ade) list_single_2graphic_pane_g1_cp4

0x8e7c,	// (0x00035b16) list_single_2graphic_pane_g2_cp4

0xce4c,	// (0x00039ae6) list_single_2graphic_pane_t1_cp4

0x35b2,	// (0x0003024c) list_highlight_pane_cp21

0xce5b,	// (0x00039af5) list_single_midp_graphic_pane_g4_cp

0xce6a,	// (0x00039b04) list_single_midp_graphic_pane_t1_cp

0xce7f,	// (0x00039b19) form2_mdip_string_pane_t1_ParamLimits

0xce7f,	// (0x00039b19) form2_mdip_string_pane_t1

0x33a6,	// (0x00030040) bg_wml_button_pane_cp2

0x3259,	// (0x0002fef3) form2_midp_image_pane_g1

0xf46a,	// (0x0003c104) list_double_large_graphic_pane_g5_ParamLimits

0xf46a,	// (0x0003c104) list_double_large_graphic_pane_g5

0xac5d,	// (0x000378f7) midp_form_pane_ParamLimits

0x35b2,	// (0x0003024c) main_apps_wheel_pane_ParamLimits

0xb174,	// (0x00037e0e) popup_preview_window_ParamLimits

0xb174,	// (0x00037e0e) popup_preview_window

0x79a1,	// (0x0003463b) popup_touch_info_window_ParamLimits

0x79a1,	// (0x0003463b) popup_touch_info_window

0x79bf,	// (0x00034659) popup_touch_menu_window_ParamLimits

0x79bf,	// (0x00034659) popup_touch_menu_window

0x324f,	// (0x0002fee9) bg_popup_sub_pane_cp6

0xcef7,	// (0x00039b91) list_touch_menu_pane

0xceff,	// (0x00039b99) list_single_touch_menu_pane_ParamLimits

0xceff,	// (0x00039b99) list_single_touch_menu_pane

0xcf16,	// (0x00039bb0) list_single_touch_menu_pane_t1

0x35b2,	// (0x0003024c) bg_popup_sub_pane_cp7_ParamLimits

0x35b2,	// (0x0003024c) bg_popup_sub_pane_cp7

0xcf24,	// (0x00039bbe) heading_sub_pane

0xcf2c,	// (0x00039bc6) list_touch_info_pane_ParamLimits

0xcf2c,	// (0x00039bc6) list_touch_info_pane

0xcf3b,	// (0x00039bd5) list_single_touch_info_pane_ParamLimits

0xcf3b,	// (0x00039bd5) list_single_touch_info_pane

0xcf4c,	// (0x00039be6) list_single_touch_info_pane_t1

0xcf5a,	// (0x00039bf4) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0003c7bd) list_single_touch_info_pane_t

0x768f,	// (0x00034329) bg_popup_heading_pane_cp

0xcf68,	// (0x00039c02) heading_sub_pane_t1

0x7c8b,	// (0x00034925) bg_popup_preview_window_pane_cp_ParamLimits

0x7c8b,	// (0x00034925) bg_popup_preview_window_pane_cp

0xcf24,	// (0x00039bbe) heading_preview_pane

0xcf2c,	// (0x00039bc6) list_preview_pane_ParamLimits

0xcf2c,	// (0x00039bc6) list_preview_pane

0xcf76,	// (0x00039c10) popup_preview_window_g1

0xcf3b,	// (0x00039bd5) list_single_preview_pane_ParamLimits

0xcf3b,	// (0x00039bd5) list_single_preview_pane

0xcf7e,	// (0x00039c18) list_single_preview_pane_g1

0xcf86,	// (0x00039c20) list_single_preview_pane_t1

0xcf4c,	// (0x00039be6) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0003c7c2) list_single_preview_pane_t

0xcf94,	// (0x00039c2e) bg_popup_heading_pane_cp2_ParamLimits

0xcf94,	// (0x00039c2e) bg_popup_heading_pane_cp2

0xcfaa,	// (0x00039c44) heading_preview_pane_g1

0xcfb2,	// (0x00039c4c) heading_preview_pane_t1_ParamLimits

0xcfb2,	// (0x00039c4c) heading_preview_pane_t1

0x3749,	// (0x000303e3) soft_indicator_pane_t1_ParamLimits

0x3da0,	// (0x00030a3a) scroll_pane_ParamLimits

0x709a,	// (0x00033d34) scroll_sc2_left_pane

0x7091,	// (0x00033d2b) scroll_sc2_right_pane

0x70b9,	// (0x00033d53) scroll_bg_pane_g1_ParamLimits

0x70ce,	// (0x00033d68) scroll_bg_pane_g2_ParamLimits

0x70e6,	// (0x00033d80) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003c3c6) scroll_bg_pane_g_ParamLimits

0x70b9,	// (0x00033d53) scroll_handle_pane_g1_ParamLimits

0x7108,	// (0x00033da2) scroll_handle_pane_g2_ParamLimits

0x70e6,	// (0x00033d80) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003c3cd) scroll_handle_pane_g_ParamLimits

0x78f9,	// (0x00034593) popup_choice_list_window_ParamLimits

0x78f9,	// (0x00034593) popup_choice_list_window

0x7af3,	// (0x0003478d) choice_list_pane

0x7b69,	// (0x00034803) cell_toolbar_pane_t1

0x7b91,	// (0x0003482b) toolbar_button_pane_ParamLimits

0x8b64,	// (0x000357fe) ai_gene_pane_1_t2_ParamLimits

0x8b64,	// (0x000357fe) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003c5e5) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003c5e5) ai_gene_pane_1_t

0xcfcf,	// (0x00039c69) scroll_sc2_left_pane_g1

0xcfcf,	// (0x00039c69) scroll_sc2_right_pane_g1

0x6e64,	// (0x00033afe) bg_popup_sub_pane_cp10

0xcfd9,	// (0x00039c73) list_choice_list_pane

0xcff0,	// (0x00039c8a) list_single_choice_list_pane_ParamLimits

0xcff0,	// (0x00039c8a) list_single_choice_list_pane

0xd004,	// (0x00039c9e) list_single_choice_list_pane_g1

0x6e4f,	// (0x00033ae9) list_single_choice_list_pane_t1_ParamLimits

0x6e4f,	// (0x00033ae9) list_single_choice_list_pane_t1

0xd00c,	// (0x00039ca6) choice_list_pane_g1

0xd014,	// (0x00039cae) choice_list_pane_t1

0x324f,	// (0x0002fee9) input_focus_pane_cp11

0x6fe6,	// (0x00033c80) title_pane_stacon_g2_ParamLimits

0x6fe6,	// (0x00033c80) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003c3ac) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003c3ac) title_pane_stacon_g

0x768f,	// (0x00034329) cursor_press_pane

0xafc1,	// (0x00037c5b) popup_fep_hwr_window_ParamLimits

0xafc1,	// (0x00037c5b) popup_fep_hwr_window

0x794b,	// (0x000345e5) popup_fep_vkb_window_ParamLimits

0x794b,	// (0x000345e5) popup_fep_vkb_window

0xd022,	// (0x00039cbc) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0003c7eb) fep_vkb_side_pane_g_ParamLimits

0xc0b0,	// (0x00038d4a) fep_hwr_candidate_pane_ParamLimits

0xc0b0,	// (0x00038d4a) fep_hwr_candidate_pane

0xc0d8,	// (0x00038d72) fep_hwr_side_pane_ParamLimits

0xc0d8,	// (0x00038d72) fep_hwr_side_pane

0xc0f8,	// (0x00038d92) fep_hwr_top_pane_ParamLimits

0xc0f8,	// (0x00038d92) fep_hwr_top_pane

0xc110,	// (0x00038daa) fep_hwr_write_pane_ParamLimits

0xc110,	// (0x00038daa) fep_hwr_write_pane

0xfb51,	// (0x0003c7eb) fep_vkb_side_pane_g

0xd02a,	// (0x00039cc4) fep_hwr_top_pane_g1

0xd03c,	// (0x00039cd6) fep_hwr_top_pane_g2

0xc14a,	// (0x00038de4) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0003c7c7) fep_hwr_top_pane_g

0xc15f,	// (0x00038df9) fep_hwr_top_text_pane

0x7202,	// (0x00033e9c) fep_hwr_top_text_pane_g1

0xd072,	// (0x00039d0c) fep_hwr_top_text_pane_t1

0xc24d,	// (0x00038ee7) fep_hwr_candidate_pane_g1

0xd282,	// (0x00039f1c) fep_vkb_keypad_pane_g3_ParamLimits

0xd282,	// (0x00039f1c) fep_vkb_keypad_pane_g3

0xd2a4,	// (0x00039f3e) fep_vkb_keypad_pane_g4_ParamLimits

0xd2a4,	// (0x00039f3e) fep_vkb_keypad_pane_g4

0xd313,	// (0x00039fad) fep_vkb_bottom_pane_g2_ParamLimits

0xd313,	// (0x00039fad) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0003c7f2) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0003c7f2) fep_vkb_bottom_pane_g

0xcfcf,	// (0x00039c69) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0003c7fc) cell_vkb_side_pane_g

0xd39e,	// (0x0003a038) cell_vkb_side_pane_t1

0xd3ac,	// (0x0003a046) cell_vkb_side_pane_t1_copy1

0xcfcf,	// (0x00039c69) bg_fep_vkb_candidate_pane_g2

0xd4d0,	// (0x0003a16a) cell_vkb_candidate_pane_ParamLimits

0xd080,	// (0x00039d1a) aid_size_cell_vkb_ParamLimits

0xd080,	// (0x00039d1a) aid_size_cell_vkb

0xd4d0,	// (0x0003a16a) cell_vkb_candidate_pane

0xc274,	// (0x00038f0e) bg_popup_fep_shadow_pane_g1

0xd0f6,	// (0x00039d90) fep_vkb_bottom_pane_ParamLimits

0xd0f6,	// (0x00039d90) fep_vkb_bottom_pane

0xd133,	// (0x00039dcd) fep_vkb_candidate_pane_ParamLimits

0xd133,	// (0x00039dcd) fep_vkb_candidate_pane

0xd14f,	// (0x00039de9) fep_vkb_keypad_pane_ParamLimits

0xd14f,	// (0x00039de9) fep_vkb_keypad_pane

0xd183,	// (0x00039e1d) fep_vkb_side_pane_ParamLimits

0xd183,	// (0x00039e1d) fep_vkb_side_pane

0xd1af,	// (0x00039e49) fep_vkb_top_pane_ParamLimits

0xd1af,	// (0x00039e49) fep_vkb_top_pane

0xd1db,	// (0x00039e75) fep_vkb_top_pane_g1_ParamLimits

0xd1db,	// (0x00039e75) fep_vkb_top_pane_g1

0xd1ea,	// (0x00039e84) fep_vkb_top_pane_g2_ParamLimits

0xd1ea,	// (0x00039e84) fep_vkb_top_pane_g2

0xd1f9,	// (0x00039e93) fep_vkb_top_pane_g3_ParamLimits

0xd1f9,	// (0x00039e93) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0003c7e2) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0003c7e2) fep_vkb_top_pane_g

0xd217,	// (0x00039eb1) fep_vkb_top_text_pane_ParamLimits

0xd217,	// (0x00039eb1) fep_vkb_top_text_pane

0xd228,	// (0x00039ec2) fep_vkb_side_pane_g1_ParamLimits

0xd228,	// (0x00039ec2) fep_vkb_side_pane_g1

0xd271,	// (0x00039f0b) grid_vkb_side_pane_ParamLimits

0xd271,	// (0x00039f0b) grid_vkb_side_pane

0xc27c,	// (0x00038f16) bg_popup_fep_shadow_pane_g2

0xc285,	// (0x00038f1f) bg_popup_fep_shadow_pane_g3

0xc28d,	// (0x00038f27) bg_popup_fep_shadow_pane_g4

0xc296,	// (0x00038f30) bg_popup_fep_shadow_pane_g5

0xc29e,	// (0x00038f38) bg_popup_fep_shadow_pane_g6

0xc2a6,	// (0x00038f40) bg_popup_fep_shadow_pane_g7

0x6d4f,	// (0x000339e9) bg_popup_fep_shadow_pane_g8

0xd2c2,	// (0x00039f5c) grid_vkb_keypad_number_pane_ParamLimits

0xd2c2,	// (0x00039f5c) grid_vkb_keypad_number_pane

0xd2d2,	// (0x00039f6c) grid_vkb_keypad_pane_ParamLimits

0xd2d2,	// (0x00039f6c) grid_vkb_keypad_pane

0xd2f8,	// (0x00039f92) fep_vkb_bottom_pane_g1_ParamLimits

0xd2f8,	// (0x00039f92) fep_vkb_bottom_pane_g1

0xd321,	// (0x00039fbb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd321,	// (0x00039fbb) grid_vkb_keypad_bottom_left_pane

0xd336,	// (0x00039fd0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd336,	// (0x00039fd0) grid_vkb_keypad_bottom_right_pane

0xd34b,	// (0x00039fe5) fep_vkb_top_text_pane_g1

0xd366,	// (0x0003a000) fep_vkb_top_text_pane_t1

0xd37b,	// (0x0003a015) cell_vkb_side_pane_ParamLimits

0xd37b,	// (0x0003a015) cell_vkb_side_pane

0xcfcf,	// (0x00039c69) cell_vkb_side_pane_g1

0xd3ba,	// (0x0003a054) cell_vkb_keypad_pane_ParamLimits

0xd3ba,	// (0x0003a054) cell_vkb_keypad_pane

0xd427,	// (0x0003a0c1) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0003c80f) bg_popup_fep_shadow_pane_g

0xc2b6,	// (0x00038f50) cell_hwr_side_pane_g1

0xc2b6,	// (0x00038f50) cell_hwr_side_pane_g2

0xd431,	// (0x0003a0cb) cell_vkb_keypad_pane_t1

0xd43f,	// (0x0003a0d9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd43f,	// (0x0003a0d9) cell_vkb_keypad_bottom_left_pane

0xd45c,	// (0x0003a0f6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd45c,	// (0x0003a0f6) cell_vkb_keypad_bottom_right_pane

0xcfcf,	// (0x00039c69) cell_vkb_keypad_bottom_left_pane_g1

0xcfcf,	// (0x00039c69) cell_vkb_keypad_bottom_right_pane_g1

0xd495,	// (0x0003a12f) cell_vkb_keypad_number_pane_ParamLimits

0xd495,	// (0x0003a12f) cell_vkb_keypad_number_pane

0xd4b4,	// (0x0003a14e) cell_vkb_keypad_number_pane_g1

0xd4be,	// (0x0003a158) cell_vkb_keypad_number_pane_g2

0xd4c7,	// (0x0003a161) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0003c801) cell_vkb_keypad_number_pane_g

0xd431,	// (0x0003a0cb) cell_vkb_keypad_number_pane_t1

0xd4e9,	// (0x0003a183) fep_vkb_candidate_pane_g1

0x0001,

0xfb88,	// (0x0003c822) cell_hwr_side_pane_g

0xd502,	// (0x0003a19c) cell_hwr_side_pane_t1

0xc2c0,	// (0x00038f5a) cell_hwr_side_pane_t1_copy1

0xc2ce,	// (0x00038f68) cell_hwr_candidate_pane_g1

0xc2fd,	// (0x00038f97) cell_hwr_candidate_pane_t1

0xcfcf,	// (0x00039c69) cell_vkb_candidate_pane_g2

0xd546,	// (0x0003a1e0) cell_vkb_candidate_pane_t1

0xc07b,	// (0x00038d15) bg_popup_fep_shadow_pane_ParamLimits

0xc07b,	// (0x00038d15) bg_popup_fep_shadow_pane

0xc12a,	// (0x00038dc4) bg_fep_hwr_top_pane_g4

0xd04e,	// (0x00039ce8) bg_hwr_side_pane_g1_ParamLimits

0xd04e,	// (0x00039ce8) bg_hwr_side_pane_g1

0xc19b,	// (0x00038e35) cell_hwr_side_pane_ParamLimits

0xc19b,	// (0x00038e35) cell_hwr_side_pane

0xc1d6,	// (0x00038e70) fep_hwr_write_pane_g1_ParamLimits

0xc1d6,	// (0x00038e70) fep_hwr_write_pane_g1

0xc1e3,	// (0x00038e7d) fep_hwr_write_pane_g2_ParamLimits

0xc1e3,	// (0x00038e7d) fep_hwr_write_pane_g2

0xc1f0,	// (0x00038e8a) fep_hwr_write_pane_g3_ParamLimits

0xc1f0,	// (0x00038e8a) fep_hwr_write_pane_g3

0xc1fe,	// (0x00038e98) fep_hwr_write_pane_g4_ParamLimits

0xc1fe,	// (0x00038e98) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0003c7ce) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0003c7ce) fep_hwr_write_pane_g

0xc12a,	// (0x00038dc4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc12a,	// (0x00038dc4) bg_fep_hwr_candidate_pane_g2

0xc213,	// (0x00038ead) cell_hwr_candidate_pane_ParamLimits

0xc213,	// (0x00038ead) cell_hwr_candidate_pane

0xc24d,	// (0x00038ee7) fep_hwr_candidate_pane_g1_ParamLimits

0xd0ae,	// (0x00039d48) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd0ae,	// (0x00039d48) bg_popup_fep_shadow_pane_cp2

0xd209,	// (0x00039ea3) fep_vkb_top_pane_g4_ParamLimits

0xd209,	// (0x00039ea3) fep_vkb_top_pane_g4

0xd24f,	// (0x00039ee9) fep_vkb_side_pane_g2_ParamLimits

0xd24f,	// (0x00039ee9) fep_vkb_side_pane_g2

0xe98f,	// (0x0003b629) list_setting_pane_t4_ParamLimits

0xe98f,	// (0x0003b629) list_setting_pane_t4

0xea25,	// (0x0003b6bf) list_setting_number_pane_t5_ParamLimits

0xea25,	// (0x0003b6bf) list_setting_number_pane_t5

0xa9b0,	// (0x0003764a) list_double_heading_pane_cp2_ParamLimits

0xa9b0,	// (0x0003764a) list_double_heading_pane_cp2

0x7504,	// (0x0003419e) list_double_heading_pane_g1_cp2_ParamLimits

0x7504,	// (0x0003419e) list_double_heading_pane_g1_cp2

0xd554,	// (0x0003a1ee) list_double_heading_pane_g2_cp2_ParamLimits

0xd554,	// (0x0003a1ee) list_double_heading_pane_g2_cp2

0xd568,	// (0x0003a202) list_double_heading_pane_t1_cp2_ParamLimits

0xd568,	// (0x0003a202) list_double_heading_pane_t1_cp2

0xd57e,	// (0x0003a218) list_double_heading_pane_t2_cp2_ParamLimits

0xd57e,	// (0x0003a218) list_double_heading_pane_t2_cp2

0x3239,	// (0x0002fed3) aid_value_unit2

0xa2e6,	// (0x00036f80) popup_preview_fixed_window

0x3907,	// (0x000305a1) bg_popup_preview_window_pane_cp02

0xd590,	// (0x0003a22a) list_preview_fixed_pane

0xd5d6,	// (0x0003a270) list_empty_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_empty_pane_fp

0xd5d6,	// (0x0003a270) list_single_cale_day_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_cale_day_pane_fp

0xd5d6,	// (0x0003a270) list_single_graphic_heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_graphic_heading_pane_fp

0xd5d6,	// (0x0003a270) list_single_graphic_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_graphic_pane_fp

0xd5d6,	// (0x0003a270) list_single_heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_heading_pane_fp

0xd5d6,	// (0x0003a270) list_single_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_pane_fp

0xd5ea,	// (0x0003a284) list_single_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a284) list_single_pane_fp_g1

0xf41f,	// (0x0003c0b9) list_single_pane_fp_g2_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_pane_fp_g2

0xf50e,	// (0x0003c1a8) list_single_pane_fp_g3_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_pane_fp_g3

0xd5f6,	// (0x0003a290) list_single_pane_fp_g4_ParamLimits

0xd5f6,	// (0x0003a290) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0003c835) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003c835) list_single_pane_fp_g

0xf00e,	// (0x0003bca8) list_single_pane_fp_t1_ParamLimits

0xf00e,	// (0x0003bca8) list_single_pane_fp_t1

0xf025,	// (0x0003bcbf) list_single_graphic_pane_fp_g1_ParamLimits

0xf025,	// (0x0003bcbf) list_single_graphic_pane_fp_g1

0xd5ea,	// (0x0003a284) list_single_graphic_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a284) list_single_graphic_pane_fp_g2

0xf41f,	// (0x0003c0b9) list_single_graphic_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_graphic_pane_fp_g3

0xf50e,	// (0x0003c1a8) list_single_graphic_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_graphic_pane_fp_g4

0xd5f6,	// (0x0003a290) list_single_graphic_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a290) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c83e) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c83e) list_single_graphic_pane_fp_g

0xf031,	// (0x0003bccb) list_single_graphic_pane_fp_t1_ParamLimits

0xf031,	// (0x0003bccb) list_single_graphic_pane_fp_t1

0xf025,	// (0x0003bcbf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf025,	// (0x0003bcbf) list_single_graphic_heading_pane_fp_g1

0xd5ea,	// (0x0003a284) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a284) list_single_graphic_heading_pane_fp_g2

0xf41f,	// (0x0003c0b9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_graphic_heading_pane_fp_g3

0xf50e,	// (0x0003c1a8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_graphic_heading_pane_fp_g4

0xd5f6,	// (0x0003a290) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a290) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c83e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c83e) list_single_graphic_heading_pane_fp_g

0xf047,	// (0x0003bce1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf047,	// (0x0003bce1) list_single_graphic_heading_pane_fp_t1

0xf05d,	// (0x0003bcf7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x0003bcf7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0003c849) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0003c849) list_single_graphic_heading_pane_fp_t

0xf06f,	// (0x0003bd09) list_single_cale_day_pane_fp_g1_ParamLimits

0xf06f,	// (0x0003bd09) list_single_cale_day_pane_fp_g1

0xd602,	// (0x0003a29c) list_single_cale_day_pane_fp_g2_ParamLimits

0xd602,	// (0x0003a29c) list_single_cale_day_pane_fp_g2

0xf522,	// (0x0003c1bc) list_single_cale_day_pane_fp_g3_ParamLimits

0xf522,	// (0x0003c1bc) list_single_cale_day_pane_fp_g3

0xf54a,	// (0x0003c1e4) list_single_cale_day_pane_fp_g4_ParamLimits

0xf54a,	// (0x0003c1e4) list_single_cale_day_pane_fp_g4

0xf56e,	// (0x0003c208) list_single_cale_day_pane_fp_g5_ParamLimits

0xf56e,	// (0x0003c208) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0003c84e) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0003c84e) list_single_cale_day_pane_fp_g

0xf0a7,	// (0x0003bd41) list_single_cale_day_pane_fp_t1_ParamLimits

0xf0a7,	// (0x0003bd41) list_single_cale_day_pane_fp_t1

0xf0cd,	// (0x0003bd67) list_single_cale_day_pane_fp_t2_ParamLimits

0xf0cd,	// (0x0003bd67) list_single_cale_day_pane_fp_t2

0xf0e6,	// (0x0003bd80) list_single_cale_day_pane_fp_t3_ParamLimits

0xf0e6,	// (0x0003bd80) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0003c859) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0003c859) list_single_cale_day_pane_fp_t

0xd5ea,	// (0x0003a284) list_empty_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a284) list_empty_pane_fp_g1

0xf0ff,	// (0x0003bd99) list_empty_pane_fp_t1

0xf10d,	// (0x0003bda7) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0003c860) list_empty_pane_fp_t

0xd5ea,	// (0x0003a284) list_single_heading_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a284) list_single_heading_pane_fp_g1

0xf41f,	// (0x0003c0b9) list_single_heading_pane_fp_g2_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_heading_pane_fp_g2

0xf50e,	// (0x0003c1a8) list_single_heading_pane_fp_g3_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0003c865) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0003c865) list_single_heading_pane_fp_g

0xf11b,	// (0x0003bdb5) list_single_heading_pane_fp_t1_ParamLimits

0xf11b,	// (0x0003bdb5) list_single_heading_pane_fp_t1

0xf12d,	// (0x0003bdc7) list_single_heading_pane_fp_t2_ParamLimits

0xf12d,	// (0x0003bdc7) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003c86c) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0003c86c) list_single_heading_pane_fp_t

0x6e70,	// (0x00033b0a) aid_size_cell_fast

0x387c,	// (0x00030516) soft_indicator_pane_cp1_t1

0x6ead,	// (0x00033b47) cell_app_pane_cp2_ParamLimits

0x6ead,	// (0x00033b47) cell_app_pane_cp2

0xc09d,	// (0x00038d37) fep_hwr_candidate_drop_down_list_pane

0xc267,	// (0x00038f01) fep_hwr_candidate_pane_g3_ParamLimits

0xc267,	// (0x00038f01) fep_hwr_candidate_pane_g3

0x65ff,	// (0x00033299) fep_hwr_candidate_pane_g4_ParamLimits

0x65ff,	// (0x00033299) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0003c7db) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0003c7db) fep_hwr_candidate_pane_g

0xd122,	// (0x00039dbc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd122,	// (0x00039dbc) fep_vkb_candidate_drop_down_list_pane

0xd4f1,	// (0x0003a18b) fep_vkb_candidate_pane_g3

0xd4f9,	// (0x0003a193) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0003c808) fep_vkb_candidate_pane_g

0xc2ce,	// (0x00038f68) cell_hwr_candidate_pane_g1_ParamLimits

0xc2dc,	// (0x00038f76) cell_hwr_candidate_pane_g3_ParamLimits

0xc2dc,	// (0x00038f76) cell_hwr_candidate_pane_g3

0xefed,	// (0x0003bc87) cell_hwr_candidate_pane_g4_ParamLimits

0xefed,	// (0x0003bc87) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0003c827) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0003c827) cell_hwr_candidate_pane_g

0xd510,	// (0x0003a1aa) cell_vkb_candidate_pane_g3_ParamLimits

0xd510,	// (0x0003a1aa) cell_vkb_candidate_pane_g3

0xd52b,	// (0x0003a1c5) cell_vkb_candidate_pane_g4_ParamLimits

0xd52b,	// (0x0003a1c5) cell_vkb_candidate_pane_g4

0xd60e,	// (0x0003a2a8) cell_app_pane_cp2_g1_ParamLimits

0xd60e,	// (0x0003a2a8) cell_app_pane_cp2_g1

0xd62c,	// (0x0003a2c6) cell_app_pane_cp2_g2_ParamLimits

0xd62c,	// (0x0003a2c6) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0003c871) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0003c871) cell_app_pane_cp2_g

0xd638,	// (0x0003a2d2) cell_app_pane_cp2_t1_ParamLimits

0xd638,	// (0x0003a2d2) cell_app_pane_cp2_t1

0x6ce8,	// (0x00033982) grid_highlight_pane_cp1_ParamLimits

0x6ce8,	// (0x00033982) grid_highlight_pane_cp1

0xc31a,	// (0x00038fb4) cell_hwr_candidate_pane_cp1_ParamLimits

0xc31a,	// (0x00038fb4) cell_hwr_candidate_pane_cp1

0xc2ce,	// (0x00038f68) fep_hwr_candidate_drop_down_list_pane_g1

0xc338,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_pane_g2

0xc345,	// (0x00038fdf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003c876) fep_hwr_candidate_drop_down_list_pane_g

0xc352,	// (0x00038fec) fep_hwr_candidate_drop_down_list_scroll_pane

0xc35b,	// (0x00038ff5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc35b,	// (0x00038ff5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc368,	// (0x00039002) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc368,	// (0x00039002) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc375,	// (0x0003900f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc375,	// (0x0003900f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc382,	// (0x0003901c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc382,	// (0x0003901c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc39d,	// (0x00039037) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc39d,	// (0x00039037) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc3b8,	// (0x00039052) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc3b8,	// (0x00039052) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc3d3,	// (0x0003906d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3d3,	// (0x0003906d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc3ee,	// (0x00039088) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3ee,	// (0x00039088) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003c87d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003c87d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd64a,	// (0x0003a2e4) cell_vkb_candidate_pane_cp1_ParamLimits

0xd64a,	// (0x0003a2e4) cell_vkb_candidate_pane_cp1

0xd209,	// (0x00039ea3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd209,	// (0x00039ea3) fep_vkb_candidate_drop_down_list_pane_g1

0xd66d,	// (0x0003a307) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd66d,	// (0x0003a307) fep_vkb_candidate_drop_down_list_pane_g2

0xd67a,	// (0x0003a314) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd67a,	// (0x0003a314) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf4,	// (0x0003c88e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf4,	// (0x0003c88e) fep_vkb_candidate_drop_down_list_pane_g

0xd687,	// (0x0003a321) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd687,	// (0x0003a321) fep_vkb_candidate_drop_down_list_scroll_pane

0xd694,	// (0x0003a32e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd694,	// (0x0003a32e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd6a1,	// (0x0003a33b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd6a1,	// (0x0003a33b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd6ad,	// (0x0003a347) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd6ad,	// (0x0003a347) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd6b9,	// (0x0003a353) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd6b9,	// (0x0003a353) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd6da,	// (0x0003a374) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd6da,	// (0x0003a374) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd6fb,	// (0x0003a395) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd6fb,	// (0x0003a395) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd71c,	// (0x0003a3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd71c,	// (0x0003a3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd73d,	// (0x0003a3d7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd73d,	// (0x0003a3d7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfb,	// (0x0003c895) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfb,	// (0x0003c895) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa3d0,	// (0x0003706a) title_pane_g1_ParamLimits

0xa3dd,	// (0x00037077) title_pane_g2_ParamLimits

0xf592,	// (0x0003c22c) title_pane_g_ParamLimits

0x71fa,	// (0x00033e94) aid_call2_pane

0x71f2,	// (0x00033e8c) aid_call_pane

0x7202,	// (0x00033e9c) popup_clock_analogue_window_g1

0x7202,	// (0x00033e9c) popup_clock_analogue_window_g2

0xa991,	// (0x0003762b) popup_clock_analogue_window_g3

0xa99a,	// (0x00037634) popup_clock_analogue_window_g4

0x3259,	// (0x0002fef3) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003c3db) popup_clock_analogue_window_g

0xa9a2,	// (0x0003763c) popup_clock_analogue_window_t1

0xa9e6,	// (0x00037680) clock_digital_number_pane_ParamLimits

0xa9e6,	// (0x00037680) clock_digital_number_pane

0xa9f2,	// (0x0003768c) clock_digital_number_pane_cp02_ParamLimits

0xa9f2,	// (0x0003768c) clock_digital_number_pane_cp02

0xa9fe,	// (0x00037698) clock_digital_number_pane_cp03_ParamLimits

0xa9fe,	// (0x00037698) clock_digital_number_pane_cp03

0xaa0a,	// (0x000376a4) clock_digital_number_pane_cp04_ParamLimits

0xaa0a,	// (0x000376a4) clock_digital_number_pane_cp04

0xaa16,	// (0x000376b0) clock_digital_separator_pane_ParamLimits

0xaa16,	// (0x000376b0) clock_digital_separator_pane

0xaa22,	// (0x000376bc) popup_clock_digital_window_t1_ParamLimits

0xaa22,	// (0x000376bc) popup_clock_digital_window_t1

0x3259,	// (0x0002fef3) clock_digital_number_pane_g1

0x3259,	// (0x0002fef3) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003c3e6) clock_digital_number_pane_g

0x3259,	// (0x0002fef3) clock_digital_separator_pane_g1

0x3259,	// (0x0002fef3) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003c3e6) clock_digital_separator_pane_g

0xb2d2,	// (0x00037f6c) aid_fill_nsta_ParamLimits

0xb38b,	// (0x00038025) indicator_nsta_pane_ParamLimits

0x7a9c,	// (0x00034736) popup_clock_analogue_window

0x7a9c,	// (0x00034736) popup_clock_digital_window

0x35b2,	// (0x0003024c) grid_indicator_nsta_pane_ParamLimits

0x9675,	// (0x0003630f) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0003c768) clock_nsta_pane_t

0xa8fa,	// (0x00037594) aid_size_max_handle

0xa904,	// (0x0003759e) aid_size_min_handle

0x768f,	// (0x00034329) editor_scroll_pane

0xd758,	// (0x0003a3f2) ex_editor_pane

0x6e2b,	// (0x00033ac5) scroll_pane_cp13

0x3dcd,	// (0x00030a67) scroll_pane_cp14

0x722c,	// (0x00033ec6) scroll_pane_cp36

0xa9c0,	// (0x0003765a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9c0,	// (0x0003765a) list_single_graphic_hl_pane_cp2

0xee27,	// (0x0003bac1) list_single_graphic_hl_pane_ParamLimits

0xee27,	// (0x0003bac1) list_single_graphic_hl_pane

0xf143,	// (0x0003bddd) aid_size_min_hl_cp1

0xd760,	// (0x0003a3fa) list_highlight_pane_cp34_ParamLimits

0xd760,	// (0x0003a3fa) list_highlight_pane_cp34

0xd771,	// (0x0003a40b) list_single_graphic_hl_pane_g1_ParamLimits

0xd771,	// (0x0003a40b) list_single_graphic_hl_pane_g1

0xf14c,	// (0x0003bde6) list_single_graphic_hl_pane_g2_ParamLimits

0xf14c,	// (0x0003bde6) list_single_graphic_hl_pane_g2

0xf14c,	// (0x0003bde6) list_single_graphic_hl_pane_g3_ParamLimits

0xf14c,	// (0x0003bde6) list_single_graphic_hl_pane_g3

0xf41f,	// (0x0003c0b9) list_single_graphic_hl_pane_g4_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_graphic_hl_pane_g4

0xf50e,	// (0x0003c1a8) list_single_graphic_hl_pane_g5_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_graphic_hl_pane_g5

0x0004,

0xfc0c,	// (0x0003c8a6) list_single_graphic_hl_pane_g_ParamLimits

0xfc0c,	// (0x0003c8a6) list_single_graphic_hl_pane_g

0xe7ac,	// (0x0003b446) list_single_graphic_hl_pane_t1_ParamLimits

0xe7ac,	// (0x0003b446) list_single_graphic_hl_pane_t1

0xd77e,	// (0x0003a418) aid_size_min_hl_cp2

0xd787,	// (0x0003a421) list_highlight_pane_cp34_cp2_ParamLimits

0xd787,	// (0x0003a421) list_highlight_pane_cp34_cp2

0xd771,	// (0x0003a40b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd771,	// (0x0003a40b) list_single_graphic_hl_pane_g1_cp2

0xd794,	// (0x0003a42e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd794,	// (0x0003a42e) list_single_graphic_hl_pane_g2_cp2

0xd7a0,	// (0x0003a43a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd7a0,	// (0x0003a43a) list_single_graphic_hl_pane_g3_cp2

0x7504,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7504,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2

0xd554,	// (0x0003a1ee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd554,	// (0x0003a1ee) list_single_graphic_hl_pane_g5_cp2

0xadf5,	// (0x00037a8f) control_pane_g4_ParamLimits

0xadf5,	// (0x00037a8f) control_pane_g4

0x6e64,	// (0x00033afe) bg_popup_sub_pane_cp10_ParamLimits

0xcfd9,	// (0x00039c73) list_choice_list_pane_ParamLimits

0xcfe8,	// (0x00039c82) scroll_pane_cp23

0x3907,	// (0x000305a1) bg_popup_preview_window_pane_cp02_ParamLimits

0xd590,	// (0x0003a22a) list_preview_fixed_pane_ParamLimits

0xd5a6,	// (0x0003a240) list_preview_fixed_pane_cp_ParamLimits

0xd5a6,	// (0x0003a240) list_preview_fixed_pane_cp

0xd5b2,	// (0x0003a24c) popup_preview_fixed_window_g1_ParamLimits

0xd5b2,	// (0x0003a24c) popup_preview_fixed_window_g1

0xd5be,	// (0x0003a258) popup_preview_fixed_window_g2_ParamLimits

0xd5be,	// (0x0003a258) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0003c82e) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0003c82e) popup_preview_fixed_window_g

0xa815,	// (0x000374af) aid_navi_side_left_pane_ParamLimits

0xa825,	// (0x000374bf) aid_navi_side_right_pane_ParamLimits

0xa834,	// (0x000374ce) navi_icon_pane_stacon_ParamLimits

0xa844,	// (0x000374de) navi_navi_pane_stacon_ParamLimits

0xa834,	// (0x000374ce) navi_text_pane_stacon_ParamLimits

0x324f,	// (0x0002fee9) main_text_info_pane

0xd7c2,	// (0x0003a45c) listscroll_text_info_pane

0xd7ca,	// (0x0003a464) list_text_info_pane_ParamLimits

0xd7ca,	// (0x0003a464) list_text_info_pane

0xd7d9,	// (0x0003a473) scroll_pane_cp24_ParamLimits

0xd7d9,	// (0x0003a473) scroll_pane_cp24

0xd7f7,	// (0x0003a491) list_text_info_pane_t1_ParamLimits

0xd7f7,	// (0x0003a491) list_text_info_pane_t1

0xaf47,	// (0x00037be1) popup_fast_swap2_window_ParamLimits

0xaf47,	// (0x00037be1) popup_fast_swap2_window

0xd814,	// (0x0003a4ae) aid_size_cell_fast2

0x324f,	// (0x0002fee9) bg_popup_window_pane_cp17

0x80a1,	// (0x00034d3b) heading_pane_cp2

0x3b4f,	// (0x000307e9) listscroll_fast2_pane

0xd81e,	// (0x0003a4b8) grid_fast2_pane

0xd826,	// (0x0003a4c0) listscroll_fast2_pane_g1

0xd82e,	// (0x0003a4c8) listscroll_fast2_pane_g2

0x0001,

0xfc17,	// (0x0003c8b1) listscroll_fast2_pane_g

0x6e2b,	// (0x00033ac5) scroll_pane_cp26

0xd836,	// (0x0003a4d0) cell_fast2_pane_ParamLimits

0xd836,	// (0x0003a4d0) cell_fast2_pane

0xd84c,	// (0x0003a4e6) cell_fast2_pane_g1

0xd855,	// (0x0003a4ef) cell_fast2_pane_g2

0xd85e,	// (0x0003a4f8) cell_fast2_pane_g3

0x0002,

0xfc1c,	// (0x0003c8b6) cell_fast2_pane_g

0x3c26,	// (0x000308c0) grid_highlight_pane_cp9

0x3c3b,	// (0x000308d5) main_eswt_pane_ParamLimits

0x3c3b,	// (0x000308d5) main_eswt_pane

0xd7ee,	// (0x0003a488) list_single_text_info_pane

0xd866,	// (0x0003a500) eswt_ctrl_button_pane

0xd866,	// (0x0003a500) eswt_ctrl_canvas_pane

0xd86e,	// (0x0003a508) eswt_ctrl_combo_pane

0xd866,	// (0x0003a500) eswt_ctrl_default_pane

0xd866,	// (0x0003a500) eswt_ctrl_label_pane

0xd876,	// (0x0003a510) eswt_ctrl_wait_pane

0xd87e,	// (0x0003a518) eswt_shell_pane

0x324f,	// (0x0002fee9) listscroll_eswt_app_pane

0xd89a,	// (0x0003a534) popup_eswt_tasktip_window_ParamLimits

0xd89a,	// (0x0003a534) popup_eswt_tasktip_window

0x7c8b,	// (0x00034925) bg_popup_window_pane_cp18

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_ParamLimits

0xd8ab,	// (0x0003a545) eswt_control_pane_g1

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_ParamLimits

0xd8b8,	// (0x0003a552) eswt_control_pane_g2

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_ParamLimits

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_ParamLimits

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4

0x0003,

0xfc23,	// (0x0003c8bd) eswt_control_pane_g_ParamLimits

0xfc23,	// (0x0003c8bd) eswt_control_pane_g

0x6ce8,	// (0x00033982) bg_button_pane_ParamLimits

0x6ce8,	// (0x00033982) bg_button_pane

0x3c3b,	// (0x000308d5) common_borders_pane_copy2_ParamLimits

0x3c3b,	// (0x000308d5) common_borders_pane_copy2

0xd8df,	// (0x0003a579) control_button_pane_g1_ParamLimits

0xd8df,	// (0x0003a579) control_button_pane_g1

0xd8eb,	// (0x0003a585) control_button_pane_g2_ParamLimits

0xd8eb,	// (0x0003a585) control_button_pane_g2

0xd8f7,	// (0x0003a591) control_button_pane_g3_ParamLimits

0xd8f7,	// (0x0003a591) control_button_pane_g3

0x0002,

0xfc2c,	// (0x0003c8c6) control_button_pane_g_ParamLimits

0xfc2c,	// (0x0003c8c6) control_button_pane_g

0xd90b,	// (0x0003a5a5) control_button_pane_t1

0xd919,	// (0x0003a5b3) control_button_pane_t2

0x0001,

0xfc33,	// (0x0003c8cd) control_button_pane_t

0x7b9d,	// (0x00034837) bg_button_pane_g1

0x7ba5,	// (0x0003483f) bg_button_pane_g2

0x7bad,	// (0x00034847) bg_button_pane_g3

0x7bb5,	// (0x0003484f) bg_button_pane_g4

0x7bbd,	// (0x00034857) bg_button_pane_g5

0x7bc5,	// (0x0003485f) bg_button_pane_g6

0x7bcd,	// (0x00034867) bg_button_pane_g7

0x7bd5,	// (0x0003486f) bg_button_pane_g8

0x7bdd,	// (0x00034877) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003c539) bg_button_pane_g

0xcf94,	// (0x00039c2e) common_borders_pane_ParamLimits

0xcf94,	// (0x00039c2e) common_borders_pane

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy1_ParamLimits

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy1

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy1_ParamLimits

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy1

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy1_ParamLimits

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy1

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy1_ParamLimits

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy1

0xcfcf,	// (0x00039c69) bg_eswt_ctrl_canvas_pane_g1

0xcf94,	// (0x00039c2e) common_borders_pane_cp2_ParamLimits

0xcf94,	// (0x00039c2e) common_borders_pane_cp2

0xcf94,	// (0x00039c2e) common_borders_pane_cp3_ParamLimits

0xcf94,	// (0x00039c2e) common_borders_pane_cp3

0xd927,	// (0x0003a5c1) separator_horizontal_pane

0x7091,	// (0x00033d2b) separator_vertical_pane

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy2_ParamLimits

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy2

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy2_ParamLimits

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy2

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy2_ParamLimits

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy2

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy2_ParamLimits

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy2

0x324f,	// (0x0002fee9) common_borders_pane_cp4

0xd92f,	// (0x0003a5c9) separator_horizontal_pane_g1

0xd938,	// (0x0003a5d2) separator_horizontal_pane_g2

0xd941,	// (0x0003a5db) separator_horizontal_pane_g3

0x0002,

0xfc38,	// (0x0003c8d2) separator_horizontal_pane_g

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy3_ParamLimits

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy3

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy3_ParamLimits

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy3

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy3_ParamLimits

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy3

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy3_ParamLimits

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy3

0x324f,	// (0x0002fee9) common_borders_pane_cp5

0xd94a,	// (0x0003a5e4) separator_vertical_pane_g1

0xd953,	// (0x0003a5ed) separator_vertical_pane_g2

0xd95c,	// (0x0003a5f6) separator_vertical_pane_g3

0x0002,

0xfc3f,	// (0x0003c8d9) separator_vertical_pane_g

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy4_ParamLimits

0xd8ab,	// (0x0003a545) eswt_control_pane_g1_copy4

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy4_ParamLimits

0xd8b8,	// (0x0003a552) eswt_control_pane_g2_copy4

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy4_ParamLimits

0xd8c5,	// (0x0003a55f) eswt_control_pane_g3_copy4

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy4_ParamLimits

0xd8d2,	// (0x0003a56c) eswt_control_pane_g4_copy4

0xd965,	// (0x0003a5ff) eswt_ctrl_combo_button_pane

0xd96d,	// (0x0003a607) eswt_ctrl_input_pane

0xd975,	// (0x0003a60f) popup_choice_list_window_cp70

0xd97d,	// (0x0003a617) eswt_ctrl_input_pane_t1

0x324f,	// (0x0002fee9) input_focus_pane_cp70

0xcf94,	// (0x00039c2e) bg_button_pane_cp70_ParamLimits

0xcf94,	// (0x00039c2e) bg_button_pane_cp70

0xd98b,	// (0x0003a625) eswt_ctrl_combo_button_pane_g1

0xd993,	// (0x0003a62d) wait_bar_pane_cp70

0x7c8b,	// (0x00034925) bg_popup_window_pane_cp70_ParamLimits

0x7c8b,	// (0x00034925) bg_popup_window_pane_cp70

0xd99b,	// (0x0003a635) popup_eswt_tasktip_window_t1

0xd9b1,	// (0x0003a64b) wait_bar_pane_cp71_ParamLimits

0xd9b1,	// (0x0003a64b) wait_bar_pane_cp71

0xd9bd,	// (0x0003a657) grid_eswt_app_pane

0x709a,	// (0x00033d34) scroll_pane_cp70

0xd9c6,	// (0x0003a660) cell_eswt_app_pane_ParamLimits

0xd9c6,	// (0x0003a660) cell_eswt_app_pane

0xd9ee,	// (0x0003a688) cell_eswt_app_pane_g1_ParamLimits

0xd9ee,	// (0x0003a688) cell_eswt_app_pane_g1

0xda1d,	// (0x0003a6b7) cell_eswt_app_pane_g2_ParamLimits

0xda1d,	// (0x0003a6b7) cell_eswt_app_pane_g2

0x0001,

0xfc46,	// (0x0003c8e0) cell_eswt_app_pane_g_ParamLimits

0xfc46,	// (0x0003c8e0) cell_eswt_app_pane_g

0xda46,	// (0x0003a6e0) cell_eswt_app_pane_t1_ParamLimits

0xda46,	// (0x0003a6e0) cell_eswt_app_pane_t1

0xda78,	// (0x0003a712) grid_highlight_pane_cp70_ParamLimits

0xda78,	// (0x0003a712) grid_highlight_pane_cp70

0x3e43,	// (0x00030add) set_content_pane_g1

0x787e,	// (0x00034518) status_small_volume_pane

0xc409,	// (0x000390a3) status_small_volume_pane_g1

0xc411,	// (0x000390ab) volume_small2_pane

0xc41a,	// (0x000390b4) volume_small2_pane_g1

0xc423,	// (0x000390bd) volume_small2_pane_g2

0xc42c,	// (0x000390c6) volume_small2_pane_g3

0xc435,	// (0x000390cf) volume_small2_pane_g4

0xc43e,	// (0x000390d8) volume_small2_pane_g5

0xc447,	// (0x000390e1) volume_small2_pane_g6

0xc450,	// (0x000390ea) volume_small2_pane_g7

0xc459,	// (0x000390f3) volume_small2_pane_g8

0xc462,	// (0x000390fc) volume_small2_pane_g9

0xc46b,	// (0x00039105) volume_small2_pane_g10

0x0009,

0xfc4b,	// (0x0003c8e5) volume_small2_pane_g

0xd34b,	// (0x00039fe5) fep_vkb_top_text_pane_g1_ParamLimits

0xd366,	// (0x0003a000) fep_vkb_top_text_pane_t1_ParamLimits

0xd5ca,	// (0x0003a264) popup_preview_fixed_window_g3_ParamLimits

0xd5ca,	// (0x0003a264) popup_preview_fixed_window_g3

0xb27b,	// (0x00037f15) popup_toolbar_trans_pane

0xbb2c,	// (0x000387c6) aid_height_set_list_ParamLimits

0x8dc7,	// (0x00035a61) aid_size_parent_ParamLimits

0x6e64,	// (0x00033afe) list_highlight_pane_cp2_ParamLimits

0x3e43,	// (0x00030add) set_content_pane_g1_ParamLimits

0xbc77,	// (0x00038911) list_single_image_pane_ParamLimits

0xbc77,	// (0x00038911) list_single_image_pane

0x000c,	// (0x0002cca6) aid_size_cell_image_ParamLimits

0x000c,	// (0x0002cca6) aid_size_cell_image

0x0019,	// (0x0002ccb3) grid_single_image_pane_ParamLimits

0x0019,	// (0x0002ccb3) grid_single_image_pane

0x3e43,	// (0x00030add) list_single_image_pane_g1_ParamLimits

0x3e43,	// (0x00030add) list_single_image_pane_g1

0x6d02,	// (0x0003399c) list_single_image_pane_g2_ParamLimits

0x6d02,	// (0x0003399c) list_single_image_pane_g2

0x0001,

0xfc60,	// (0x0003c8fa) list_single_image_pane_g_ParamLimits

0xfc60,	// (0x0003c8fa) list_single_image_pane_g

0x963a,	// (0x000362d4) list_single_image_pane_t1_ParamLimits

0x963a,	// (0x000362d4) list_single_image_pane_t1

0x0025,	// (0x0002ccbf) cell_image_list_pane_ParamLimits

0x0025,	// (0x0002ccbf) cell_image_list_pane

0x0038,	// (0x0002ccd2) cell_image_list_pane_g1

0x0041,	// (0x0002ccdb) cell_image_list_pane_g2

0x0001,

0xfc65,	// (0x0003c8ff) cell_image_list_pane_g

0xda84,	// (0x0003a71e) aid_size_cell_tb_trans_pane

0x6ce8,	// (0x00033982) bg_tb_trans_pane

0xda96,	// (0x0003a730) grid_tb_trans_pane

0x7b9d,	// (0x00034837) bg_tb_trans_pane_g1

0x7ba5,	// (0x0003483f) bg_tb_trans_pane_g2

0x7bad,	// (0x00034847) bg_tb_trans_pane_g3

0x7bb5,	// (0x0003484f) bg_tb_trans_pane_g4

0x7bbd,	// (0x00034857) bg_tb_trans_pane_g5

0x7bd5,	// (0x0003486f) bg_tb_trans_pane_g6

0x7bdd,	// (0x00034877) bg_tb_trans_pane_g7

0x7bc5,	// (0x0003485f) bg_tb_trans_pane_g8

0x7bcd,	// (0x00034867) bg_tb_trans_pane_g9

0x0008,

0xfc6a,	// (0x0003c904) bg_tb_trans_pane_g

0xdaaa,	// (0x0003a744) cell_toolbar_trans_pane_ParamLimits

0xdaaa,	// (0x0003a744) cell_toolbar_trans_pane

0xcfcf,	// (0x00039c69) cell_toolbar_trans_pane_g1

0xc053,	// (0x00038ced) list_form2_midp_pane_t1

0xc061,	// (0x00038cfb) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0003c7a1) list_form2_midp_pane_t

0xc06f,	// (0x00038d09) scroll_pane_cp51_ParamLimits

0xce29,	// (0x00039ac3) form2_midp_wait_pane_g1

0xce32,	// (0x00039acc) form2_midp_wait_pane_g2

0xce3b,	// (0x00039ad5) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0003c7b6) form2_midp_wait_pane_g

0x35b2,	// (0x0003024c) list_highlight_pane_cp21_ParamLimits

0xce5b,	// (0x00039af5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xce6a,	// (0x00039b04) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xede8,	// (0x0003ba82) list_single_2graphic_im_pane_ParamLimits

0xede8,	// (0x0003ba82) list_single_2graphic_im_pane

0x004a,	// (0x0002cce4) list_single_2graphic_im_pane_g1_ParamLimits

0x004a,	// (0x0002cce4) list_single_2graphic_im_pane_g1

0x005b,	// (0x0002ccf5) list_single_2graphic_im_pane_g2_ParamLimits

0x005b,	// (0x0002ccf5) list_single_2graphic_im_pane_g2

0x0067,	// (0x0002cd01) list_single_2graphic_im_pane_g3_ParamLimits

0x0067,	// (0x0002cd01) list_single_2graphic_im_pane_g3

0x0003,

0xfc7d,	// (0x0003c917) list_single_2graphic_im_pane_g_ParamLimits

0xfc7d,	// (0x0003c917) list_single_2graphic_im_pane_g

0x007b,	// (0x0002cd15) list_single_2graphic_im_pane_t1_ParamLimits

0x007b,	// (0x0002cd15) list_single_2graphic_im_pane_t1

0xd5d6,	// (0x0003a270) list_single_graphic_2heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a270) list_single_graphic_2heading_pane_fp

0xf025,	// (0x0003bcbf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf025,	// (0x0003bcbf) list_single_graphic_2heading_pane_fp_g1

0xd5ea,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g2

0xf41f,	// (0x0003c0b9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c0b9) list_single_graphic_2heading_pane_fp_g3

0xf50e,	// (0x0003c1a8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c1a8) list_single_graphic_2heading_pane_fp_g4

0xd5f6,	// (0x0003a290) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a290) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c83e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c83e) list_single_graphic_2heading_pane_fp_g

0xf158,	// (0x0003bdf2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf158,	// (0x0003bdf2) list_single_graphic_2heading_pane_fp_t1

0xf05d,	// (0x0003bcf7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x0003bcf7) list_single_graphic_2heading_pane_fp_t2

0xf16e,	// (0x0003be08) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf16e,	// (0x0003be08) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc86,	// (0x0003c920) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc86,	// (0x0003c920) list_single_graphic_2heading_pane_fp_t

0xd05a,	// (0x00039cf4) fep_hwr_write_pane_g5_ParamLimits

0xd05a,	// (0x00039cf4) fep_hwr_write_pane_g5

0xd066,	// (0x00039d00) fep_hwr_write_pane_g6_ParamLimits

0xd066,	// (0x00039d00) fep_hwr_write_pane_g6

0xd87e,	// (0x0003a518) eswt_shell_pane_ParamLimits

0x7c8b,	// (0x00034925) bg_popup_window_pane_cp18_ParamLimits

0x8d6b,	// (0x00035a05) heading_pane_cp70

0xd99b,	// (0x0003a635) popup_eswt_tasktip_window_t1_ParamLimits

0xb308,	// (0x00037fa2) aid_touch_tab_arrow_left

0xb314,	// (0x00037fae) aid_touch_tab_arrow_right

0xa3ee,	// (0x00037088) title_pane_g3_ParamLimits

0xa3ee,	// (0x00037088) title_pane_g3

0x6cb8,	// (0x00033952) set_value_pane_g1

0xb27b,	// (0x00037f15) popup_toolbar_trans_pane_ParamLimits

0xda84,	// (0x0003a71e) aid_size_cell_tb_trans_pane_ParamLimits

0x6ce8,	// (0x00033982) bg_tb_trans_pane_ParamLimits

0xda96,	// (0x0003a730) grid_tb_trans_pane_ParamLimits

0x3907,	// (0x000305a1) cont_note_pane_ParamLimits

0x3907,	// (0x000305a1) cont_note_pane

0x3c3b,	// (0x000308d5) cont_snote2_single_text_pane_ParamLimits

0x3c3b,	// (0x000308d5) cont_snote2_single_text_pane

0x3c3b,	// (0x000308d5) cont_snote2_single_graphic_pane_ParamLimits

0x3c3b,	// (0x000308d5) cont_snote2_single_graphic_pane

0x827a,	// (0x00034f14) cont_note_wait_pane_ParamLimits

0x827a,	// (0x00034f14) cont_note_wait_pane

0x827a,	// (0x00034f14) cont_note_image_pane_ParamLimits

0x827a,	// (0x00034f14) cont_note_image_pane

0xdadc,	// (0x0003a776) popup_note2_window_g1_ParamLimits

0xdadc,	// (0x0003a776) popup_note2_window_g1

0xdb0d,	// (0x0003a7a7) popup_note2_window_t1_ParamLimits

0xdb0d,	// (0x0003a7a7) popup_note2_window_t1

0xdb52,	// (0x0003a7ec) popup_note2_window_t2_ParamLimits

0xdb52,	// (0x0003a7ec) popup_note2_window_t2

0xdb97,	// (0x0003a831) popup_note2_window_t3_ParamLimits

0xdb97,	// (0x0003a831) popup_note2_window_t3

0xdbdc,	// (0x0003a876) popup_note2_window_t4_ParamLimits

0xdbdc,	// (0x0003a876) popup_note2_window_t4

0x398b,	// (0x00030625) popup_note2_window_t5_ParamLimits

0x398b,	// (0x00030625) popup_note2_window_t5

0x0004,

0xfc92,	// (0x0003c92c) popup_note2_window_t_ParamLimits

0xfc92,	// (0x0003c92c) popup_note2_window_t

0xdc0b,	// (0x0003a8a5) popup_note2_image_window_g1_ParamLimits

0xdc0b,	// (0x0003a8a5) popup_note2_image_window_g1

0xdc17,	// (0x0003a8b1) popup_note2_image_window_g2_ParamLimits

0xdc17,	// (0x0003a8b1) popup_note2_image_window_g2

0x0001,

0xfc9d,	// (0x0003c937) popup_note2_image_window_g_ParamLimits

0xfc9d,	// (0x0003c937) popup_note2_image_window_g

0xdc29,	// (0x0003a8c3) popup_note2_image_window_t1_ParamLimits

0xdc29,	// (0x0003a8c3) popup_note2_image_window_t1

0xdc41,	// (0x0003a8db) popup_note2_image_window_t2_ParamLimits

0xdc41,	// (0x0003a8db) popup_note2_image_window_t2

0xdc59,	// (0x0003a8f3) popup_note2_image_window_t3_ParamLimits

0xdc59,	// (0x0003a8f3) popup_note2_image_window_t3

0x0002,

0xfca2,	// (0x0003c93c) popup_note2_image_window_t_ParamLimits

0xfca2,	// (0x0003c93c) popup_note2_image_window_t

0x8288,	// (0x00034f22) popup_note2_wait_window_g1_ParamLimits

0x8288,	// (0x00034f22) popup_note2_wait_window_g1

0x8294,	// (0x00034f2e) popup_note2_wait_window_g2_ParamLimits

0x8294,	// (0x00034f2e) popup_note2_wait_window_g2

0x82a0,	// (0x00034f3a) popup_note2_wait_window_g3_ParamLimits

0x82a0,	// (0x00034f3a) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0003c51b) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0003c51b) popup_note2_wait_window_g

0xdc75,	// (0x0003a90f) popup_note2_wait_window_t1_ParamLimits

0xdc75,	// (0x0003a90f) popup_note2_wait_window_t1

0xdc93,	// (0x0003a92d) popup_note2_wait_window_t2_ParamLimits

0xdc93,	// (0x0003a92d) popup_note2_wait_window_t2

0xdcb1,	// (0x0003a94b) popup_note2_wait_window_t3_ParamLimits

0xdcb1,	// (0x0003a94b) popup_note2_wait_window_t3

0xdcc3,	// (0x0003a95d) popup_note2_wait_window_t4_ParamLimits

0xdcc3,	// (0x0003a95d) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x0003c943) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x0003c943) popup_note2_wait_window_t

0xdcd5,	// (0x0003a96f) wait_bar2_pane_ParamLimits

0xdcd5,	// (0x0003a96f) wait_bar2_pane

0xdced,	// (0x0003a987) popup_snote2_single_text_window_g1_ParamLimits

0xdced,	// (0x0003a987) popup_snote2_single_text_window_g1

0xdd15,	// (0x0003a9af) popup_snote2_single_text_window_t1_ParamLimits

0xdd15,	// (0x0003a9af) popup_snote2_single_text_window_t1

0xdd61,	// (0x0003a9fb) popup_snote2_single_text_window_t2_ParamLimits

0xdd61,	// (0x0003a9fb) popup_snote2_single_text_window_t2

0xddad,	// (0x0003aa47) popup_snote2_single_text_window_t3_ParamLimits

0xddad,	// (0x0003aa47) popup_snote2_single_text_window_t3

0xddee,	// (0x0003aa88) popup_snote2_single_text_window_t4_ParamLimits

0xddee,	// (0x0003aa88) popup_snote2_single_text_window_t4

0xde24,	// (0x0003aabe) popup_snote2_single_text_window_t5_ParamLimits

0xde24,	// (0x0003aabe) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0003c94c) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0003c94c) popup_snote2_single_text_window_t

0xde4f,	// (0x0003aae9) popup_snote2_single_graphic_window_g1_ParamLimits

0xde4f,	// (0x0003aae9) popup_snote2_single_graphic_window_g1

0xde77,	// (0x0003ab11) popup_snote2_single_graphic_window_g2_ParamLimits

0xde77,	// (0x0003ab11) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x0003c957) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x0003c957) popup_snote2_single_graphic_window_g

0xde9f,	// (0x0003ab39) popup_snote2_single_graphic_window_t1_ParamLimits

0xde9f,	// (0x0003ab39) popup_snote2_single_graphic_window_t1

0xdeeb,	// (0x0003ab85) popup_snote2_single_graphic_window_t2_ParamLimits

0xdeeb,	// (0x0003ab85) popup_snote2_single_graphic_window_t2

0xddad,	// (0x0003aa47) popup_snote2_single_graphic_window_t3_ParamLimits

0xddad,	// (0x0003aa47) popup_snote2_single_graphic_window_t3

0xddee,	// (0x0003aa88) popup_snote2_single_graphic_window_t4_ParamLimits

0xddee,	// (0x0003aa88) popup_snote2_single_graphic_window_t4

0xde24,	// (0x0003aabe) popup_snote2_single_graphic_window_t5_ParamLimits

0xde24,	// (0x0003aabe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0003c95c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0003c95c) popup_snote2_single_graphic_window_t

0x96ab,	// (0x00036345) clock_nsta_pane_cp2_t1

0x96ab,	// (0x00036345) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0003c777) clock_nsta_pane_cp2_t

0xeb22,	// (0x0003b7bc) form_field_data_wide_pane_g1_ParamLimits

0x3e43,	// (0x00030add) form_field_data_wide_pane_g2_ParamLimits

0x3e43,	// (0x00030add) form_field_data_wide_pane_g2

0x6d02,	// (0x0003399c) form_field_data_wide_pane_g3_ParamLimits

0x6d02,	// (0x0003399c) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003c35e) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003c35e) form_field_data_wide_pane_g

0xbee5,	// (0x00038b7f) grid_touch_3_pane_ParamLimits

0xbee5,	// (0x00038b7f) grid_touch_3_pane

0x00ac,	// (0x0002cd46) cell_touch_3_pane_ParamLimits

0x00ac,	// (0x0002cd46) cell_touch_3_pane

0xcfcf,	// (0x00039c69) cell_touch_3_pane_g1

0xcfcf,	// (0x00039c69) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0003c7fc) cell_touch_3_pane_g

0x39bd,	// (0x00030657) cont_query_data_pane

0x39c5,	// (0x0003065f) cont_query_data_pane_cp1

0xdf37,	// (0x0003abd1) button_value_adjust_pane_cp7

0xdf3f,	// (0x0003abd9) query_popup_pane_cp3

0x723d,	// (0x00033ed7) bg_popup_sub_pane_cp22_ParamLimits

0xaa7e,	// (0x00037718) navi_navi_volume_pane_cp2

0xaa96,	// (0x00037730) popup_side_volume_key_window_g2

0xaaa2,	// (0x0003773c) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003c3f0) popup_side_volume_key_window_g

0xaabc,	// (0x00037756) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003c3f7) popup_side_volume_key_window_t

0x7487,	// (0x00034121) popup_side_volume_key_window_ParamLimits

0xf452,	// (0x0003c0ec) list_double_graphic_pane_g4_ParamLimits

0xf452,	// (0x0003c0ec) list_double_graphic_pane_g4

0xee11,	// (0x0003baab) list_single_2heading_msg_pane_ParamLimits

0xee11,	// (0x0003baab) list_single_2heading_msg_pane

0xf18c,	// (0x0003be26) list_single_2heading_msg_pane_g1_ParamLimits

0xf18c,	// (0x0003be26) list_single_2heading_msg_pane_g1

0x7504,	// (0x0003419e) list_single_2heading_msg_pane_g2_ParamLimits

0x7504,	// (0x0003419e) list_single_2heading_msg_pane_g2

0xf198,	// (0x0003be32) list_single_2heading_msg_pane_g3_ParamLimits

0xf198,	// (0x0003be32) list_single_2heading_msg_pane_g3

0xf1a4,	// (0x0003be3e) list_single_2heading_msg_pane_g4_ParamLimits

0xf1a4,	// (0x0003be3e) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x0003c967) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x0003c967) list_single_2heading_msg_pane_g

0xf1bc,	// (0x0003be56) list_single_2heading_msg_pane_t1_ParamLimits

0xf1bc,	// (0x0003be56) list_single_2heading_msg_pane_t1

0xf1e4,	// (0x0003be7e) list_single_2heading_msg_pane_t2_ParamLimits

0xf1e4,	// (0x0003be7e) list_single_2heading_msg_pane_t2

0xf213,	// (0x0003bead) list_single_2heading_msg_pane_t3_ParamLimits

0xf213,	// (0x0003bead) list_single_2heading_msg_pane_t3

0xf24c,	// (0x0003bee6) list_single_2heading_msg_pane_t4_ParamLimits

0xf24c,	// (0x0003bee6) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x0003c970) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x0003c970) list_single_2heading_msg_pane_t

0x3497,	// (0x00030131) title_pane_g4_ParamLimits

0x3497,	// (0x00030131) title_pane_g4

0xa78b,	// (0x00037425) title_pane_stacon_g3_ParamLimits

0xa78b,	// (0x00037425) title_pane_stacon_g3

0xdad0,	// (0x0003a76a) list_single_2graphic_im_pane_g4_ParamLimits

0xdad0,	// (0x0003a76a) list_single_2graphic_im_pane_g4

0x8b81,	// (0x0003581b) popup_side_volume_key_window_cp

0x9044,	// (0x00035cde) main_idle_act2_pane_t1

0xb5f1,	// (0x0003828b) toolbar_button_pane_g10

0xa6fc,	// (0x00037396) popup_toolbar_window_cp1

0x969c,	// (0x00036336) clock_nsta_pane_cp_t1

0x969c,	// (0x00036336) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0003c772) clock_nsta_pane_cp_t

0xaa7e,	// (0x00037718) navi_navi_volume_pane_cp2_ParamLimits

0xaa8a,	// (0x00037724) popup_side_volume_key_window_g1_ParamLimits

0xaa96,	// (0x00037730) popup_side_volume_key_window_g2_ParamLimits

0xaaa2,	// (0x0003773c) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003c3f0) popup_side_volume_key_window_g_ParamLimits

0xc089,	// (0x00038d23) fep_hwr_aid_pane

0xc12a,	// (0x00038dc4) bg_fep_hwr_top_pane_g4_ParamLimits

0xd02a,	// (0x00039cc4) fep_hwr_top_pane_g1_ParamLimits

0xd03c,	// (0x00039cd6) fep_hwr_top_pane_g2_ParamLimits

0xc14a,	// (0x00038de4) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0003c7c7) fep_hwr_top_pane_g_ParamLimits

0xc15f,	// (0x00038df9) fep_hwr_top_text_pane_ParamLimits

0x898a,	// (0x00035624) aid_touch_tab_arrow_arrow_2

0x8981,	// (0x0003561b) aid_touch_tab_arrow_left_2

0xc09d,	// (0x00038d37) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc0d0,	// (0x00038d6a) fep_hwr_prediction_pane

0xd17b,	// (0x00039e15) fep_vkb_prediction_pane

0xd25d,	// (0x00039ef7) fep_vkb_side_pane_g3_ParamLimits

0xd25d,	// (0x00039ef7) fep_vkb_side_pane_g3

0xc2ce,	// (0x00038f68) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc338,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc345,	// (0x00038fdf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0003c876) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc474,	// (0x0003910e) fep_hwr_prediction_pane_g1

0xc47e,	// (0x00039118) fep_hwr_prediction_pane_g2

0xc486,	// (0x00039120) fep_hwr_prediction_pane_g3

0xc48e,	// (0x00039128) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0003c979) fep_hwr_prediction_pane_g

0xdf50,	// (0x0003abea) fep_vkb_prediction_pane_g1

0xdf5a,	// (0x0003abf4) fep_vkb_prediction_pane_g2

0xdf62,	// (0x0003abfc) fep_vkb_prediction_pane_g3

0xdf6a,	// (0x0003ac04) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x0003c982) fep_vkb_prediction_pane_g

0xbab4,	// (0x0003874e) slider_set_pane_g3

0xbac8,	// (0x00038762) slider_set_pane_g4

0xbae0,	// (0x0003877a) slider_set_pane_g5

0xbab4,	// (0x0003874e) slider_set_pane_g6

0xbaf6,	// (0x00038790) slider_set_pane_g7

0x8dea,	// (0x00035a84) slider_form_pane_g3

0x8df3,	// (0x00035a8d) slider_form_pane_g4

0x8dfb,	// (0x00035a95) slider_form_pane_g5

0x8dea,	// (0x00035a84) slider_form_pane_g6

0xbc5c,	// (0x000388f6) slider_form_pane_g7

0x928d,	// (0x00035f27) slider_set_pane_vc_g3

0x9296,	// (0x00035f30) slider_set_pane_vc_g4

0x929f,	// (0x00035f39) slider_set_pane_vc_g5

0x928d,	// (0x00035f27) slider_set_pane_vc_g6

0x92a8,	// (0x00035f42) slider_set_pane_vc_g7

0x928d,	// (0x00035f27) slider_form_pane_vc_g1

0x9296,	// (0x00035f30) slider_form_pane_vc_g2

0x929f,	// (0x00035f39) slider_form_pane_vc_g3

0x928d,	// (0x00035f27) slider_form_pane_vc_g4

0x943c,	// (0x000360d6) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0003c758) slider_form_pane_vc_g

0x324f,	// (0x0002fee9) main_idle_act3_pane

0xdf72,	// (0x0003ac0c) ai3_links_pane

0x0105,	// (0x0002cd9f) popup_ai3_data_window_ParamLimits

0x0105,	// (0x0002cd9f) popup_ai3_data_window

0x324f,	// (0x0002fee9) grid_ai3_links_pane

0x011d,	// (0x0002cdb7) cell_ai3_links_pane_ParamLimits

0x011d,	// (0x0002cdb7) cell_ai3_links_pane

0xdf7b,	// (0x0003ac15) bg_popup_sub_pane_cp11

0xdf88,	// (0x0003ac22) cell_ai3_links_pane_g1

0x324f,	// (0x0002fee9) bg_popup_sub_pane_cp12

0xdfad,	// (0x0003ac47) heading_ai3_data_pane

0xdfb5,	// (0x0003ac4f) list_ai3_gene_pane

0xdfc1,	// (0x0003ac5b) popup_ai3_data_window_g1

0xdfc9,	// (0x0003ac63) heading_ai3_data_pane_g1

0xdfd1,	// (0x0003ac6b) heading_ai3_data_pane_t1

0xdfdf,	// (0x0003ac79) list_double_ai3_gene_pane_ParamLimits

0xdfdf,	// (0x0003ac79) list_double_ai3_gene_pane

0xdfec,	// (0x0003ac86) list_single_ai3_gene_pane_ParamLimits

0xdfec,	// (0x0003ac86) list_single_ai3_gene_pane

0xcf94,	// (0x00039c2e) list_highlight_pane_cp7_ParamLimits

0xcf94,	// (0x00039c2e) list_highlight_pane_cp7

0xdff9,	// (0x0003ac93) list_single_a13_gene_pane_t1_ParamLimits

0xdff9,	// (0x0003ac93) list_single_a13_gene_pane_t1

0xe010,	// (0x0003acaa) list_single_ai3_gene_pane_g1

0xe019,	// (0x0003acb3) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x0003c98b) list_single_ai3_gene_pane_g

0xe021,	// (0x0003acbb) list_double_ai3_gene_pane_g1_ParamLimits

0xe021,	// (0x0003acbb) list_double_ai3_gene_pane_g1

0xe02d,	// (0x0003acc7) list_double_ai3_gene_pane_t1_ParamLimits

0xe02d,	// (0x0003acc7) list_double_ai3_gene_pane_t1

0xe049,	// (0x0003ace3) list_double_ai3_gene_pane_t2_ParamLimits

0xe049,	// (0x0003ace3) list_double_ai3_gene_pane_t2

0xe05e,	// (0x0003acf8) list_double_ai3_gene_pane_t3_ParamLimits

0xe05e,	// (0x0003acf8) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x0003c990) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x0003c990) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf184,	// (0x0003be1e) aid_size_min_col_2

0x00d9,	// (0x0002cd73) aid_size_min_msg_ParamLimits

0x00d9,	// (0x0002cd73) aid_size_min_msg

0xd357,	// (0x00039ff1) fep_vkb_top_text_pane_g2_ParamLimits

0xd357,	// (0x00039ff1) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0003c7f7) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0003c7f7) fep_vkb_top_text_pane_g

0x324f,	// (0x0002fee9) main_hc_apps_shell_pane

0xe07b,	// (0x0003ad15) grid_hc_apps_pane_ParamLimits

0xe07b,	// (0x0003ad15) grid_hc_apps_pane

0xe08a,	// (0x0003ad24) list_hc_apps_pane

0xe092,	// (0x0003ad2c) scroll_pane_cp37_ParamLimits

0xe092,	// (0x0003ad2c) scroll_pane_cp37

0x0131,	// (0x0002cdcb) cell_hc_apps_pane_ParamLimits

0x0131,	// (0x0002cdcb) cell_hc_apps_pane

0x01bf,	// (0x0002ce59) cell_hc_apps_pane_g1_ParamLimits

0x01bf,	// (0x0002ce59) cell_hc_apps_pane_g1

0xe09e,	// (0x0003ad38) cell_hc_apps_pane_g2_ParamLimits

0xe09e,	// (0x0003ad38) cell_hc_apps_pane_g2

0xe0ba,	// (0x0003ad54) cell_hc_apps_pane_g3_ParamLimits

0xe0ba,	// (0x0003ad54) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x0003c997) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x0003c997) cell_hc_apps_pane_g

0x01ec,	// (0x0002ce86) cell_hc_apps_pane_t1_ParamLimits

0x01ec,	// (0x0002ce86) cell_hc_apps_pane_t1

0x3907,	// (0x000305a1) grid_highlight_pane_cp10_ParamLimits

0x3907,	// (0x000305a1) grid_highlight_pane_cp10

0x022a,	// (0x0002cec4) list_single_hc_apps_pane_ParamLimits

0x022a,	// (0x0002cec4) list_single_hc_apps_pane

0x025a,	// (0x0002cef4) list_single_hc_apps_pane_g1

0x0273,	// (0x0002cf0d) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x0003c99e) list_single_hc_apps_pane_g

0x028c,	// (0x0002cf26) list_single_hc_apps_pane_g2_copy1

0xf271,	// (0x0003bf0b) list_single_hc_apps_pane_t1

0x35b2,	// (0x0003024c) bg_set_opt_pane_cp_ParamLimits

0xa496,	// (0x00037130) setting_slider_pane_t1_ParamLimits

0xa4ac,	// (0x00037146) setting_slider_pane_t2_ParamLimits

0xa4c5,	// (0x0003715f) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003c23c) setting_slider_pane_t_ParamLimits

0xa4dc,	// (0x00037176) slider_set_pane_ParamLimits

0xae0a,	// (0x00037aa4) control_pane_g5_ParamLimits

0xae0a,	// (0x00037aa4) control_pane_g5

0x8db2,	// (0x00035a4c) slider_set_pane_g1_ParamLimits

0xbaa8,	// (0x00038742) slider_set_pane_g2_ParamLimits

0xbab4,	// (0x0003874e) slider_set_pane_g3_ParamLimits

0xbac8,	// (0x00038762) slider_set_pane_g4_ParamLimits

0xbae0,	// (0x0003877a) slider_set_pane_g5_ParamLimits

0xbab4,	// (0x0003874e) slider_set_pane_g6_ParamLimits

0xbaf6,	// (0x00038790) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003c637) slider_set_pane_g_ParamLimits

0x35b2,	// (0x0003024c) navi_icon_text_pane_ParamLimits

0xb2e2,	// (0x00037f7c) aid_fill_nsta_2_ParamLimits

0xb308,	// (0x00037fa2) aid_touch_tab_arrow_left_ParamLimits

0xb314,	// (0x00037fae) aid_touch_tab_arrow_right_ParamLimits

0xb37e,	// (0x00038018) clock_nsta_pane_ParamLimits

0x8963,	// (0x000355fd) navi_icon_pane_g1_ParamLimits

0x896f,	// (0x00035609) navi_text_pane_t1_ParamLimits

0xbfe5,	// (0x00038c7f) navi_icon_text_pane_g1_ParamLimits

0xbff1,	// (0x00038c8b) navi_icon_text_pane_t1_ParamLimits

0x025a,	// (0x0002cef4) list_single_hc_apps_pane_g1_ParamLimits

0x0273,	// (0x0002cf0d) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x0003c99e) list_single_hc_apps_pane_g_ParamLimits

0x028c,	// (0x0002cf26) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf271,	// (0x0003bf0b) list_single_hc_apps_pane_t1_ParamLimits

0xa30a,	// (0x00036fa4) popup_toolbar2_fixed_window_ParamLimits

0xa30a,	// (0x00036fa4) popup_toolbar2_fixed_window

0xb273,	// (0x00037f0d) popup_toolbar2_float_window

0x324f,	// (0x0002fee9) bg_popup_sub_pane_cp27

0xe0dc,	// (0x0003ad76) grid_toolbar2_float_pane

0x324f,	// (0x0002fee9) bg_popup_sub_pane_cp26

0xe0dc,	// (0x0003ad76) grid_toolbar2_fixed_pane

0x02a8,	// (0x0002cf42) cell_toolbar2_fixed_pane_ParamLimits

0x02a8,	// (0x0002cf42) cell_toolbar2_fixed_pane

0x02b9,	// (0x0002cf53) cell_toolbar2_fixed_pane_g1

0xe0e4,	// (0x0003ad7e) toolbar2_fixed_button_pane

0x7b9d,	// (0x00034837) toolbar2_fixed_button_pane_g1

0x7ba5,	// (0x0003483f) toolbar2_fixed_button_pane_g2

0x7bad,	// (0x00034847) toolbar2_fixed_button_pane_g3

0x7bb5,	// (0x0003484f) toolbar2_fixed_button_pane_g4

0x7bbd,	// (0x00034857) toolbar2_fixed_button_pane_g5

0x7bc5,	// (0x0003485f) toolbar2_fixed_button_pane_g6

0x7bcd,	// (0x00034867) toolbar2_fixed_button_pane_g7

0x7bd5,	// (0x0003486f) toolbar2_fixed_button_pane_g8

0x7bdd,	// (0x00034877) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003c539) toolbar2_fixed_button_pane_g

0xe0ec,	// (0x0003ad86) cell_toolbar2_float_pane_ParamLimits

0xe0ec,	// (0x0003ad86) cell_toolbar2_float_pane

0xe0fd,	// (0x0003ad97) cell_toolbar2_float_pane_g1

0xe0e4,	// (0x0003ad7e) toolbar2_fixed_button_pane_cp

0xd0ea,	// (0x00039d84) fep_vkb_accented_list_pane_ParamLimits

0xd0ea,	// (0x00039d84) fep_vkb_accented_list_pane

0xc2ae,	// (0x00038f48) bg_popup_fep_shadow_pane_g9

0x768f,	// (0x00034329) bg_popup_fep_shadow_pane_cp3

0x6e12,	// (0x00033aac) list_accented_list_pane

0xe106,	// (0x0003ada0) list_single_accented_list_pane_ParamLimits

0xe106,	// (0x0003ada0) list_single_accented_list_pane

0x768f,	// (0x00034329) list_highlight_pane_cp10

0xe117,	// (0x0003adb1) list_single_accented_list_pane_t1

0xb1e1,	// (0x00037e7b) popup_slider_window_ParamLimits

0xb1e1,	// (0x00037e7b) popup_slider_window

0xdf47,	// (0x0003abe1) aid_indentation_list_msg

0x0354,	// (0x0002cfee) bg_popup_window_pane_cp19

0xe17d,	// (0x0003ae17) popup_slider_window_g1

0xe199,	// (0x0003ae33) popup_slider_window_g2

0xe1b5,	// (0x0003ae4f) popup_slider_window_g3

0x0005,

0xfd09,	// (0x0003c9a3) popup_slider_window_g

0xe1d1,	// (0x0003ae6b) popup_slider_window_t1

0xe215,	// (0x0003aeaf) small_volume_slider_vertical_pane

0xcfcf,	// (0x00039c69) small_volume_slider_vertical_pane_g1

0xcfcf,	// (0x00039c69) small_volume_slider_vertical_pane_g2

0xe231,	// (0x0003aecb) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x0003c9b5) small_volume_slider_vertical_pane_g

0xa17e,	// (0x00036e18) area_side_right_pane_ParamLimits

0xa17e,	// (0x00036e18) area_side_right_pane

0xc496,	// (0x00039130) aid_size_side_button_ParamLimits

0xc496,	// (0x00039130) aid_size_side_button

0xc4aa,	// (0x00039144) grid_sctrl_middle_pane_ParamLimits

0xc4aa,	// (0x00039144) grid_sctrl_middle_pane

0xc4c6,	// (0x00039160) sctrl_sk_bottom_pane

0xc4d7,	// (0x00039171) sctrl_sk_top_pane

0xc4e9,	// (0x00039183) aid_touch_sctrl_top

0xc4f6,	// (0x00039190) bg_sctrl_sk_pane_ParamLimits

0xc4f6,	// (0x00039190) bg_sctrl_sk_pane

0xc504,	// (0x0003919e) sctrl_sk_top_pane_g1

0xc511,	// (0x000391ab) sctrl_sk_top_pane_t1

0xc4e9,	// (0x00039183) aid_touch_sctrl_bottom

0xc4f6,	// (0x00039190) bg_sctrl_sk_pane_cp_ParamLimits

0xc4f6,	// (0x00039190) bg_sctrl_sk_pane_cp

0xc52c,	// (0x000391c6) sctrl_sk_bottom_pane_g1

0xc511,	// (0x000391ab) sctrl_sk_bottom_pane_t1

0xc535,	// (0x000391cf) cell_sctrl_middle_pane_ParamLimits

0xc535,	// (0x000391cf) cell_sctrl_middle_pane

0xc550,	// (0x000391ea) aid_touch_sctrl_middle_ParamLimits

0xc550,	// (0x000391ea) aid_touch_sctrl_middle

0xc561,	// (0x000391fb) bg_sctrl_middle_pane_ParamLimits

0xc561,	// (0x000391fb) bg_sctrl_middle_pane

0xc2ce,	// (0x00038f68) cell_sctrl_middle_pane_g1_ParamLimits

0xc2ce,	// (0x00038f68) cell_sctrl_middle_pane_g1

0xc56f,	// (0x00039209) cell_sctrl_middle_pane_g2_ParamLimits

0xc56f,	// (0x00039209) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x0003c9c1) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x0003c9c1) cell_sctrl_middle_pane_g

0x7b9d,	// (0x00034837) bg_sctrl_middle_pane_g1

0x7bad,	// (0x00034847) bg_sctrl_middle_pane_g2

0x7ba5,	// (0x0003483f) bg_sctrl_middle_pane_g3

0x7bbd,	// (0x00034857) bg_sctrl_middle_pane_g4

0x7bb5,	// (0x0003484f) bg_sctrl_middle_pane_g5

0x7bc5,	// (0x0003485f) bg_sctrl_middle_pane_g6

0x7bcd,	// (0x00034867) bg_sctrl_middle_pane_g7

0x7bdd,	// (0x00034877) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x0003c9c6) bg_sctrl_middle_pane_g

0x7bd5,	// (0x0003486f) bg_sctrl_middle_pane_g8_copy1

0x7b9d,	// (0x00034837) bg_sctrl_sk_pane_g1

0x7ba5,	// (0x0003483f) bg_sctrl_sk_pane_g2

0x7bad,	// (0x00034847) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003c539) bg_sctrl_sk_pane_g

0x3d5d,	// (0x000309f7) aid_size_touch_scroll_bar

0x7bb5,	// (0x0003484f) bg_sctrl_sk_pane_g4

0x7bbd,	// (0x00034857) bg_sctrl_sk_pane_g5

0x7bc5,	// (0x0003485f) bg_sctrl_sk_pane_g6

0x7bcd,	// (0x00034867) bg_sctrl_sk_pane_g7

0x7bd5,	// (0x0003486f) bg_sctrl_sk_pane_g8

0x7bdd,	// (0x00034877) bg_sctrl_sk_pane_g9

0x7913,	// (0x000345ad) popup_fep_china_hwr2_fs_candidate_window

0xaf9d,	// (0x00037c37) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf9d,	// (0x00037c37) popup_fep_china_hwr2_fs_control_window

0xc2ce,	// (0x00038f68) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x0003c9bc) sctrl_sk_top_pane_g

0x04a1,	// (0x0002d13b) aid_fep_china_hwr2_fs_cell_ParamLimits

0x04a1,	// (0x0002d13b) aid_fep_china_hwr2_fs_cell

0x04b2,	// (0x0002d14c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x04b2,	// (0x0002d14c) bg_popup_fep_shadow_pane_cp4

0x04c9,	// (0x0002d163) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x04c9,	// (0x0002d163) bg_popup_fep_shadow_pane_cp5

0x04db,	// (0x0002d175) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x04db,	// (0x0002d175) popup_fep_china_hwr2_fs_control_bar_grid

0x04eb,	// (0x0002d185) popup_fep_china_hwr2_fs_control_funtion_grid

0xe23a,	// (0x0003aed4) aid_fep_china_hwr2_fs_candi_cell

0x324f,	// (0x0002fee9) bg_popup_fep_shadow_pane_cp6

0xe244,	// (0x0003aede) popup_fep_china_hwr2_fs_candidate_grid

0x04f3,	// (0x0002d18d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x04f3,	// (0x0002d18d) cell_fep_china_hwr2_fs_funtion_grid

0xcfcf,	// (0x00039c69) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe24c,	// (0x0003aee6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe24c,	// (0x0003aee6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe25a,	// (0x0003aef4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe25a,	// (0x0003aef4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x0003c9d7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x0003c9d7) cell_fep_china_hwr2_fs_funtion_grid_g

0x050b,	// (0x0002d1a5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x050b,	// (0x0002d1a5) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0520,	// (0x0002d1ba) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0520,	// (0x0002d1ba) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x0003c9dc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x0003c9dc) cell_fep_china_hwr2_fs_funtion_grid_t

0xe270,	// (0x0003af0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe278,	// (0x0003af12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe280,	// (0x0003af1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x0003c9e1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe288,	// (0x0003af22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe288,	// (0x0003af22) cell_fep_china_hwr2_fs_candidate_grid

0xe2a1,	// (0x0003af3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe2a9,	// (0x0003af43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcfcf,	// (0x00039c69) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcfcf,	// (0x00039c69) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0003c7fc) cell_fep_china_hwr2_fs_candidate_grid_g

0xe2b1,	// (0x0003af4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7a02,	// (0x0003469c) clock_nsta_pane_cp_24_ParamLimits

0x7a02,	// (0x0003469c) clock_nsta_pane_cp_24

0x7a5f,	// (0x000346f9) indicator_nsta_pane_cp_24_ParamLimits

0x7a5f,	// (0x000346f9) indicator_nsta_pane_cp_24

0x886e,	// (0x00035508) heading_pane_g1

0x0001,

0xf904,	// (0x0003c59e) heading_pane_g

0xbd1a,	// (0x000389b4) grid_sct_catagory_button_pane

0x8069,	// (0x00034d03) scroll_pane_cp5_ParamLimits

0xcc7c,	// (0x00039916) button_value_adjust_pane_cp5_ParamLimits

0xcc7c,	// (0x00039916) button_value_adjust_pane_cp5

0xcd59,	// (0x000399f3) form2_midp_time_pane_ParamLimits

0xe2bf,	// (0x0003af59) cell_sct_catagory_button_pane_ParamLimits

0xe2bf,	// (0x0003af59) cell_sct_catagory_button_pane

0xcf94,	// (0x00039c2e) bg_button_pane_cp01_ParamLimits

0xcf94,	// (0x00039c2e) bg_button_pane_cp01

0xcfcf,	// (0x00039c69) cell_sct_catagory_button_pane_g1

0xb210,	// (0x00037eaa) popup_tb_extension_window

0x053c,	// (0x0002d1d6) aid_size_cell_ext_ParamLimits

0x053c,	// (0x0002d1d6) aid_size_cell_ext

0x3907,	// (0x000305a1) bg_tb_trans_pane_cp1_ParamLimits

0x3907,	// (0x000305a1) bg_tb_trans_pane_cp1

0x055c,	// (0x0002d1f6) grid_tb_ext_pane_ParamLimits

0x055c,	// (0x0002d1f6) grid_tb_ext_pane

0x0582,	// (0x0002d21c) cell_tb_ext_pane_ParamLimits

0x0582,	// (0x0002d21c) cell_tb_ext_pane

0x0597,	// (0x0002d231) cell_tb_ext_pane_g1_ParamLimits

0x0597,	// (0x0002d231) cell_tb_ext_pane_g1

0xe2d1,	// (0x0003af6b) cell_tb_ext_pane_t1

0x3907,	// (0x000305a1) list_highlight_pane_cp11_ParamLimits

0x3907,	// (0x000305a1) list_highlight_pane_cp11

0xa329,	// (0x00036fc3) popup_uni_indicator_window_ParamLimits

0xa329,	// (0x00036fc3) popup_uni_indicator_window

0x6ce8,	// (0x00033982) bg_popup_sub_pane_cp14

0xe2ec,	// (0x0003af86) list_uniindi_pane

0xe2f8,	// (0x0003af92) uniindi_top_pane

0x3907,	// (0x000305a1) bg_uniindi_top_pane

0xe317,	// (0x0003afb1) uniindi_top_pane_g1

0xe32d,	// (0x0003afc7) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x0003c9e8) uniindi_top_pane_g

0xe357,	// (0x0003aff1) uniindi_top_pane_t1

0xe381,	// (0x0003b01b) list_single_uniindi_pane_ParamLimits

0xe381,	// (0x0003b01b) list_single_uniindi_pane

0xcfcf,	// (0x00039c69) bg_uniindi_top_pane_g1

0xe393,	// (0x0003b02d) list_single_uniindi_pane_g1

0xe3a6,	// (0x0003b040) list_single_uniindi_pane_t1

0xa1c7,	// (0x00036e61) control_bg_pane

0xe3cb,	// (0x0003b065) bg_sctrl_sk_pane_cp1

0xe3d4,	// (0x0003b06e) bg_sctrl_sk_pane_cp2

0xe3dd,	// (0x0003b077) control_bg_pane_g1

0xe3e6,	// (0x0003b080) control_bg_pane_g2

0x0001,

0xfd57,	// (0x0003c9f1) control_bg_pane_g

0x9650,	// (0x000362ea) cell_indicator_nsta_pane_g1_ParamLimits

0xbf29,	// (0x00038bc3) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0003c76d) cell_indicator_nsta_pane_g_ParamLimits

0xefda,	// (0x0003bc74) form2_midp_time_pane_t1_ParamLimits

0x3c3b,	// (0x000308d5) main_idle_act4_pane_ParamLimits

0x3c3b,	// (0x000308d5) main_idle_act4_pane

0xb210,	// (0x00037eaa) popup_tb_extension_window_ParamLimits

0x0576,	// (0x0002d210) tb_ext_find_pane_ParamLimits

0x0576,	// (0x0002d210) tb_ext_find_pane

0xe3ef,	// (0x0003b089) ai_gene_pane_1_cp1

0x7723,	// (0x000343bd) ai_gene_pane_2_cp1

0xe3f7,	// (0x0003b091) list_single_idle_plugin_calendar_pane

0xe400,	// (0x0003b09a) list_single_idle_plugin_notification_pane

0xe409,	// (0x0003b0a3) list_single_idle_plugin_player_pane

0x05b4,	// (0x0002d24e) list_single_idle_plugin_shortcut_pane_ParamLimits

0x05b4,	// (0x0002d24e) list_single_idle_plugin_shortcut_pane

0x05d6,	// (0x0002d270) main_idle_act4_pane_t1

0x05e8,	// (0x0002d282) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x0003c9f6) main_idle_act4_pane_t

0x05fa,	// (0x0002d294) middle_sk_idle_act4_pane_ParamLimits

0x05fa,	// (0x0002d294) middle_sk_idle_act4_pane

0x0610,	// (0x0002d2aa) popup_clock_digital_analogue_window_cp2

0x062a,	// (0x0002d2c4) shortcut_wheel_idle_act4_pane_ParamLimits

0x062a,	// (0x0002d2c4) shortcut_wheel_idle_act4_pane

0xcfcf,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g1

0xcfcf,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g2

0xcfcf,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g3

0xcfcf,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g4

0xcfcf,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g5

0xe412,	// (0x0003b0ac) shortcut_wheel_idle_act4_pane_g6

0xe41a,	// (0x0003b0b4) shortcut_wheel_idle_act4_pane_g7

0xe422,	// (0x0003b0bc) shortcut_wheel_idle_act4_pane_g8

0xe42a,	// (0x0003b0c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x0003c9fb) shortcut_wheel_idle_act4_pane_g

0xd209,	// (0x00039ea3) middle_sk_idle_act4_pane_g1_ParamLimits

0xd209,	// (0x00039ea3) middle_sk_idle_act4_pane_g1

0x069a,	// (0x0002d334) middle_sk_idle_act4_pane_g2_ParamLimits

0x069a,	// (0x0002d334) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x0003ca1e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x0003ca1e) middle_sk_idle_act4_pane_g

0x06a6,	// (0x0002d340) middle_sk_idle_act4_pane_t1_ParamLimits

0x06a6,	// (0x0002d340) middle_sk_idle_act4_pane_t1

0x06c3,	// (0x0002d35d) grid_ai_shortcut_pane_ParamLimits

0x06c3,	// (0x0002d35d) grid_ai_shortcut_pane

0x06dc,	// (0x0002d376) list_highlight_pane_cp16_ParamLimits

0x06dc,	// (0x0002d376) list_highlight_pane_cp16

0x06e9,	// (0x0002d383) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x06e9,	// (0x0002d383) list_single_idle_plugin_shortcut_pane_g1

0x06f5,	// (0x0002d38f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x06f5,	// (0x0002d38f) list_single_idle_plugin_shortcut_pane_g2

0x070d,	// (0x0002d3a7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x070d,	// (0x0002d3a7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x0003ca23) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x0003ca23) list_single_idle_plugin_shortcut_pane_g

0x0720,	// (0x0002d3ba) cell_ai_shortcut_pane_ParamLimits

0x0720,	// (0x0002d3ba) cell_ai_shortcut_pane

0x0741,	// (0x0002d3db) cell_ai_shortcut_pane_g1_ParamLimits

0x0741,	// (0x0002d3db) cell_ai_shortcut_pane_g1

0xe3ef,	// (0x0003b089) ai_gene_pane_1_cp2

0xe432,	// (0x0003b0cc) ai_gene_pane_2_cp2

0xe43a,	// (0x0003b0d4) list_highlight_pane_cp15

0xe443,	// (0x0003b0dd) list_single_idle_plugin_calendar_pane_g1

0xe43a,	// (0x0003b0d4) list_highlight_pane_cp17

0xe44b,	// (0x0003b0e5) list_single_idle_plugin_calendar_pane_g1_copy1

0xe453,	// (0x0003b0ed) list_single_idle_plugin_player_pane_g1

0x90d0,	// (0x00035d6a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x0003ca2a) list_single_idle_plugin_player_pane_g

0xe45b,	// (0x0003b0f5) list_single_idle_plugin_player_pane_t1

0xe469,	// (0x0003b103) list_single_idle_plugin_player_pane_t2

0xe477,	// (0x0003b111) list_single_idle_plugin_player_pane_t3

0xe485,	// (0x0003b11f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x0003ca2f) list_single_idle_plugin_player_pane_t

0xe493,	// (0x0003b12d) wait_bar_pane_cp15

0xe49b,	// (0x0003b135) grid_ai_notification_pane

0x90d0,	// (0x00035d6a) list_single_idle_plugin_notification_pane_g1

0x0763,	// (0x0002d3fd) cell_ai_notification_pane_ParamLimits

0x0763,	// (0x0002d3fd) cell_ai_notification_pane

0xe4a4,	// (0x0003b13e) cell_ai_notification_pane_g1

0xe4ac,	// (0x0003b146) cell_ai_notification_pane_t1

0x0770,	// (0x0002d40a) tb_ext_find_button_pane

0x0778,	// (0x0002d412) tb_ext_find_pane_g1

0x0780,	// (0x0002d41a) tb_ext_find_pane_t1

0x7202,	// (0x00033e9c) tb_ext_find_button_pane_g1

0xe4ba,	// (0x0003b154) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x0003ca38) tb_ext_find_button_pane_g

0x05d6,	// (0x0002d270) main_idle_act4_pane_t1_ParamLimits

0x05e8,	// (0x0002d282) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x0003c9f6) main_idle_act4_pane_t_ParamLimits

0x0610,	// (0x0002d2aa) popup_clock_digital_analogue_window_cp2_ParamLimits

0x061e,	// (0x0002d2b8) sat_plugin_idle_act4_pane_ParamLimits

0x061e,	// (0x0002d2b8) sat_plugin_idle_act4_pane

0x078e,	// (0x0002d428) sat_plugin_idle_act4_pane_t1_ParamLimits

0x078e,	// (0x0002d428) sat_plugin_idle_act4_pane_t1

0x07a1,	// (0x0002d43b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x07a1,	// (0x0002d43b) sat_plugin_idle_act4_pane_t2

0x07b4,	// (0x0002d44e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x07b4,	// (0x0002d44e) sat_plugin_idle_act4_pane_t3

0x07c7,	// (0x0002d461) sat_plugin_idle_act4_pane_t4_ParamLimits

0x07c7,	// (0x0002d461) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0003ca3d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0003ca3d) sat_plugin_idle_act4_pane_t

0xa28a,	// (0x00036f24) popup_battery_window_ParamLimits

0xa28a,	// (0x00036f24) popup_battery_window

0x3907,	// (0x000305a1) bg_popup_sub_pane_cp25_ParamLimits

0x3907,	// (0x000305a1) bg_popup_sub_pane_cp25

0xe4c3,	// (0x0003b15d) popup_battery_window_g1_ParamLimits

0xe4c3,	// (0x0003b15d) popup_battery_window_g1

0xe4cf,	// (0x0003b169) popup_battery_window_t1_ParamLimits

0xe4cf,	// (0x0003b169) popup_battery_window_t1

0xe4e1,	// (0x0003b17b) popup_battery_window_t2_ParamLimits

0xe4e1,	// (0x0003b17b) popup_battery_window_t2

0x0001,

0xfdac,	// (0x0003ca46) popup_battery_window_t_ParamLimits

0xfdac,	// (0x0003ca46) popup_battery_window_t

0xac69,	// (0x00037903) midp_canvas_pane_ParamLimits

0xacc5,	// (0x0003795f) midp_keypad_pane_ParamLimits

0xacc5,	// (0x0003795f) midp_keypad_pane

0x6e64,	// (0x00033afe) main_midp_pane_ParamLimits

0x96ba,	// (0x00036354) signal_pane_g2_cp_ParamLimits

0x07da,	// (0x0002d474) aid_size_cell_midp_keypad_ParamLimits

0x07da,	// (0x0002d474) aid_size_cell_midp_keypad

0x07f4,	// (0x0002d48e) midp_keyp_game_grid_pane_ParamLimits

0x07f4,	// (0x0002d48e) midp_keyp_game_grid_pane

0x080e,	// (0x0002d4a8) midp_keyp_rocker_pane_ParamLimits

0x080e,	// (0x0002d4a8) midp_keyp_rocker_pane

0x083b,	// (0x0002d4d5) midp_keyp_sk_left_pane_ParamLimits

0x083b,	// (0x0002d4d5) midp_keyp_sk_left_pane

0x0893,	// (0x0002d52d) midp_keyp_sk_right_pane_ParamLimits

0x0893,	// (0x0002d52d) midp_keyp_sk_right_pane

0x324f,	// (0x0002fee9) bg_button_pane_cp03

0x08e5,	// (0x0002d57f) midp_keyp_sk_left_pane_g1

0x324f,	// (0x0002fee9) bg_button_pane_cp04

0x08e5,	// (0x0002d57f) midp_keyp_sk_right_pane_g1

0xcfcf,	// (0x00039c69) midp_keyp_rocker_pane_g1

0x08ee,	// (0x0002d588) keyp_game_cell_pane_ParamLimits

0x08ee,	// (0x0002d588) keyp_game_cell_pane

0x324f,	// (0x0002fee9) bg_button_pane_cp02

0x08ff,	// (0x0002d599) keyp_game_cell_pane_g1

0xa2c0,	// (0x00036f5a) popup_fep_vkb2_window_ParamLimits

0xa2c0,	// (0x00036f5a) popup_fep_vkb2_window

0xc593,	// (0x0003922d) aid_size_cell_vkb2_ParamLimits

0xc593,	// (0x0003922d) aid_size_cell_vkb2

0xc5e7,	// (0x00039281) popup_fep_vkb2_window_g1_ParamLimits

0xc5e7,	// (0x00039281) popup_fep_vkb2_window_g1

0xc62f,	// (0x000392c9) vkb2_area_bottom_pane_ParamLimits

0xc62f,	// (0x000392c9) vkb2_area_bottom_pane

0xc667,	// (0x00039301) vkb2_area_keypad_pane_ParamLimits

0xc667,	// (0x00039301) vkb2_area_keypad_pane

0xc69f,	// (0x00039339) vkb2_area_top_pane_ParamLimits

0xc69f,	// (0x00039339) vkb2_area_top_pane

0xc70f,	// (0x000393a9) vkb2_top_entry_pane_ParamLimits

0xc70f,	// (0x000393a9) vkb2_top_entry_pane

0xc739,	// (0x000393d3) vkb2_top_grid_left_pane_ParamLimits

0xc739,	// (0x000393d3) vkb2_top_grid_left_pane

0xc757,	// (0x000393f1) vkb2_top_grid_right_pane_ParamLimits

0xc757,	// (0x000393f1) vkb2_top_grid_right_pane

0xc775,	// (0x0003940f) vkb2_cell_keypad_pane_ParamLimits

0xc775,	// (0x0003940f) vkb2_cell_keypad_pane

0xc826,	// (0x000394c0) vkb2_area_bottom_grid_pane_ParamLimits

0xc826,	// (0x000394c0) vkb2_area_bottom_grid_pane

0xc84a,	// (0x000394e4) vkb2_area_bottom_pane_g1_ParamLimits

0xc84a,	// (0x000394e4) vkb2_area_bottom_pane_g1

0xc86e,	// (0x00039508) vkb2_area_bottom_pane_g2_ParamLimits

0xc86e,	// (0x00039508) vkb2_area_bottom_pane_g2

0xc89c,	// (0x00039536) vkb2_area_bottom_pane_g3_ParamLimits

0xc89c,	// (0x00039536) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x0003ca4b) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x0003ca4b) vkb2_area_bottom_pane_g

0xc8ed,	// (0x00039587) vkb2_top_cell_left_pane_ParamLimits

0xc8ed,	// (0x00039587) vkb2_top_cell_left_pane

0x0c90,	// (0x0002d92a) vkb2_top_entry_pane_g1_ParamLimits

0x0c90,	// (0x0002d92a) vkb2_top_entry_pane_g1

0x0c9e,	// (0x0002d938) vkb2_top_entry_pane_t1_ParamLimits

0x0c9e,	// (0x0002d938) vkb2_top_entry_pane_t1

0xe506,	// (0x0003b1a0) vkb2_top_entry_pane_t2_ParamLimits

0xe506,	// (0x0003b1a0) vkb2_top_entry_pane_t2

0xe538,	// (0x0003b1d2) vkb2_top_entry_pane_t3_ParamLimits

0xe538,	// (0x0003b1d2) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x0003ca52) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x0003ca52) vkb2_top_entry_pane_t

0xc93a,	// (0x000395d4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc93a,	// (0x000395d4) vkb2_top_grid_right_pane_g1

0xc950,	// (0x000395ea) vkb2_top_grid_right_pane_g2_ParamLimits

0xc950,	// (0x000395ea) vkb2_top_grid_right_pane_g2

0xc968,	// (0x00039602) vkb2_top_grid_right_pane_g3_ParamLimits

0xc968,	// (0x00039602) vkb2_top_grid_right_pane_g3

0xc980,	// (0x0003961a) vkb2_top_grid_right_pane_g4_ParamLimits

0xc980,	// (0x0003961a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x0003ca59) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x0003ca59) vkb2_top_grid_right_pane_g

0xc996,	// (0x00039630) vkb2_top_cell_left_pane_g1

0xc9ad,	// (0x00039647) vkb2_cell_keypad_pane_g1_ParamLimits

0xc9ad,	// (0x00039647) vkb2_cell_keypad_pane_g1

0xe54e,	// (0x0003b1e8) vkb2_cell_keypad_pane_t1_ParamLimits

0xe54e,	// (0x0003b1e8) vkb2_cell_keypad_pane_t1

0xc9bb,	// (0x00039655) vkb2_cell_bottom_grid_pane_ParamLimits

0xc9bb,	// (0x00039655) vkb2_cell_bottom_grid_pane

0xc9f4,	// (0x0003968e) vkb2_cell_bottom_grid_pane_g1

0x063e,	// (0x0002d2d8) aid_call2_pane_cp02

0x0646,	// (0x0002d2e0) aid_call_pane_cp02

0x064e,	// (0x0002d2e8) clock_digital_number_pane_cp10

0x0656,	// (0x0002d2f0) clock_digital_number_pane_cp11

0x065e,	// (0x0002d2f8) clock_digital_number_pane_cp12

0x0666,	// (0x0002d300) clock_digital_number_pane_cp13

0x066e,	// (0x0002d308) clock_digital_separator_pane_cp10

0x7202,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g1

0x7202,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g2

0x0676,	// (0x0002d310) popup_clock_digital_analogue_window_cp2_g3

0x7202,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g4

0x0676,	// (0x0002d310) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x0003ca0e) popup_clock_digital_analogue_window_cp2_g

0x067e,	// (0x0002d318) popup_clock_digital_analogue_window_cp2_t1

0x068c,	// (0x0002d326) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x0003ca19) popup_clock_digital_analogue_window_cp2_t

0xcfcf,	// (0x00039c69) clock_digital_number_pane_cp10_g1

0xcfcf,	// (0x00039c69) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0003c7fc) clock_digital_number_pane_cp10_g

0xcfcf,	// (0x00039c69) clock_digital_separator_pane_cp10_g1

0xcfcf,	// (0x00039c69) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0003c7fc) clock_digital_separator_pane_cp10_g

0xe339,	// (0x0003afd3) uniindi_top_pane_g3

0xe34a,	// (0x0003afe4) uniindi_top_pane_g4

0xc7e0,	// (0x0003947a) vkb2_row_keypad_pane_ParamLimits

0xc7e0,	// (0x0003947a) vkb2_row_keypad_pane

0xca10,	// (0x000396aa) vkb2_cell_t_keypad_pane_ParamLimits

0xca10,	// (0x000396aa) vkb2_cell_t_keypad_pane

0xca1d,	// (0x000396b7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xca1d,	// (0x000396b7) vkb2_cell_t_keypad_pane_cp08

0xca2d,	// (0x000396c7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xca2d,	// (0x000396c7) vkb2_cell_t_keypad_pane_cp09

0xca3e,	// (0x000396d8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xca3e,	// (0x000396d8) vkb2_cell_t_keypad_pane_cp01

0xca4e,	// (0x000396e8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xca4e,	// (0x000396e8) vkb2_cell_t_keypad_pane_cp02

0xca5e,	// (0x000396f8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xca5e,	// (0x000396f8) vkb2_cell_t_keypad_pane_cp03

0xca6e,	// (0x00039708) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xca6e,	// (0x00039708) vkb2_cell_t_keypad_pane_cp04

0xca7e,	// (0x00039718) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xca7e,	// (0x00039718) vkb2_cell_t_keypad_pane_cp05

0xca8e,	// (0x00039728) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xca8e,	// (0x00039728) vkb2_cell_t_keypad_pane_cp06

0xca9e,	// (0x00039738) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xca9e,	// (0x00039738) vkb2_cell_t_keypad_pane_cp07

0xcaae,	// (0x00039748) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xcaae,	// (0x00039748) vkb2_cell_t_keypad_pane_cp10

0xc2ce,	// (0x00038f68) vkb2_cell_t_keypad_pane_g1

0xe565,	// (0x0003b1ff) vkb2_cell_t_keypad_pane_t1

0xa1c7,	// (0x00036e61) popup_grid_graphic2_window

0x0e86,	// (0x0002db20) aid_size_cell_graphic2_ParamLimits

0x0e86,	// (0x0002db20) aid_size_cell_graphic2

0xe577,	// (0x0003b211) bg_popup_window_pane_cp21_ParamLimits

0xe577,	// (0x0003b211) bg_popup_window_pane_cp21

0x0eb2,	// (0x0002db4c) graphic2_pages_pane_ParamLimits

0x0eb2,	// (0x0002db4c) graphic2_pages_pane

0x0eec,	// (0x0002db86) grid_graphic2_control_pane_ParamLimits

0x0eec,	// (0x0002db86) grid_graphic2_control_pane

0x0f14,	// (0x0002dbae) grid_graphic2_pane_ParamLimits

0x0f14,	// (0x0002dbae) grid_graphic2_pane

0x0f64,	// (0x0002dbfe) cell_graphic2_pane

0x324f,	// (0x0002fee9) main_comp_mode_pane

0xdfb5,	// (0x0003ac4f) list_ai3_gene_pane_ParamLimits

0x0354,	// (0x0002cfee) bg_popup_window_pane_cp19_ParamLimits

0xe125,	// (0x0003adbf) bg_touch_area_indi_pane_ParamLimits

0xe125,	// (0x0003adbf) bg_touch_area_indi_pane

0xe13b,	// (0x0003add5) bg_touch_area_indi_pane_cp01_ParamLimits

0xe13b,	// (0x0003add5) bg_touch_area_indi_pane_cp01

0xe151,	// (0x0003adeb) bg_touch_area_indi_pane_cp02_ParamLimits

0xe151,	// (0x0003adeb) bg_touch_area_indi_pane_cp02

0xe167,	// (0x0003ae01) bg_touch_area_indi_pane_cp03_ParamLimits

0xe167,	// (0x0003ae01) bg_touch_area_indi_pane_cp03

0xe17d,	// (0x0003ae17) popup_slider_window_g1_ParamLimits

0xe199,	// (0x0003ae33) popup_slider_window_g2_ParamLimits

0xe1b5,	// (0x0003ae4f) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x0003c9a3) popup_slider_window_g_ParamLimits

0xe1d1,	// (0x0003ae6b) popup_slider_window_t1_ParamLimits

0xe215,	// (0x0003aeaf) small_volume_slider_vertical_pane_ParamLimits

0x0f64,	// (0x0002dbfe) cell_graphic2_pane_ParamLimits

0x0fa1,	// (0x0002dc3b) bg_button_pane_cp10_ParamLimits

0x0fa1,	// (0x0002dc3b) bg_button_pane_cp10

0x0fb2,	// (0x0002dc4c) bg_button_pane_cp11_ParamLimits

0x0fb2,	// (0x0002dc4c) bg_button_pane_cp11

0x0fc3,	// (0x0002dc5d) graphic2_pages_pane_g1_ParamLimits

0x0fc3,	// (0x0002dc5d) graphic2_pages_pane_g1

0x0fd6,	// (0x0002dc70) graphic2_pages_pane_g2_ParamLimits

0x0fd6,	// (0x0002dc70) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x0003ca67) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x0003ca67) graphic2_pages_pane_g

0x0fec,	// (0x0002dc86) graphic2_pages_pane_t1_ParamLimits

0x0fec,	// (0x0002dc86) graphic2_pages_pane_t1

0x1002,	// (0x0002dc9c) cell_graphic2_control_pane_ParamLimits

0x1002,	// (0x0002dc9c) cell_graphic2_control_pane

0x101c,	// (0x0002dcb6) cell_graphic2_pane_g1_ParamLimits

0x101c,	// (0x0002dcb6) cell_graphic2_pane_g1

0x1029,	// (0x0002dcc3) cell_graphic2_pane_g2_ParamLimits

0x1029,	// (0x0002dcc3) cell_graphic2_pane_g2

0x1036,	// (0x0002dcd0) cell_graphic2_pane_g3_ParamLimits

0x1036,	// (0x0002dcd0) cell_graphic2_pane_g3

0x1043,	// (0x0002dcdd) cell_graphic2_pane_g4_ParamLimits

0x1043,	// (0x0002dcdd) cell_graphic2_pane_g4

0x1050,	// (0x0002dcea) cell_graphic2_pane_g5_ParamLimits

0x1050,	// (0x0002dcea) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0003ca6c) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0003ca6c) cell_graphic2_pane_g

0x106b,	// (0x0002dd05) cell_graphic2_pane_t1_ParamLimits

0x106b,	// (0x0002dd05) cell_graphic2_pane_t1

0x7c8b,	// (0x00034925) grid_highlight_pane_cp11_ParamLimits

0x7c8b,	// (0x00034925) grid_highlight_pane_cp11

0x6ce8,	// (0x00033982) bg_button_pane_cp05

0x1081,	// (0x0002dd1b) cell_graphic2_control_pane_g1

0xcfcf,	// (0x00039c69) bg_touch_area_indi_pane_g1

0xe585,	// (0x0003b21f) aid_cmod_rocker_key_size

0xe58f,	// (0x0003b229) aid_cmode_itu_key_size

0xe599,	// (0x0003b233) main_cmode_video_pane

0xe5a1,	// (0x0003b23b) main_comp_mode_itu_pane

0xe5ab,	// (0x0003b245) main_comp_mode_rocker_pane

0xe5b3,	// (0x0003b24d) cell_cmode_rocker_pane_ParamLimits

0xe5b3,	// (0x0003b24d) cell_cmode_rocker_pane

0xe5c5,	// (0x0003b25f) cell_cmode_itu_pane_ParamLimits

0xe5c5,	// (0x0003b25f) cell_cmode_itu_pane

0x6ce8,	// (0x00033982) bg_button_pane_cp06_ParamLimits

0x6ce8,	// (0x00033982) bg_button_pane_cp06

0xd209,	// (0x00039ea3) cell_cmode_rocker_pane_g1_ParamLimits

0xd209,	// (0x00039ea3) cell_cmode_rocker_pane_g1

0xe24c,	// (0x0003aee6) cell_cmode_rocker_pane_g2_ParamLimits

0xe24c,	// (0x0003aee6) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x0003ca77) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x0003ca77) cell_cmode_rocker_pane_g

0x324f,	// (0x0002fee9) bg_button_pane_cp07

0xe5da,	// (0x0003b274) cell_cmode_itu_pane_g1

0xe5e3,	// (0x0003b27d) cell_cmode_itu_pane_t1

0xe5f1,	// (0x0003b28b) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0003ca7c) cell_cmode_itu_pane_t

0xe3bb,	// (0x0003b055) aid_touch_ctrl_left

0xe3c3,	// (0x0003b05d) aid_touch_ctrl_right

0x324f,	// (0x0002fee9) compa_mode_pane

0x108e,	// (0x0002dd28) aid_cmod_rocker_key_size_cp

0x1098,	// (0x0002dd32) aid_cmode_itu_key_size_cp

0xe5ff,	// (0x0003b299) compa_mode_pane_g1

0xf29f,	// (0x0003bf39) compa_mode_pane_g2

0xf2a7,	// (0x0003bf41) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x0003ca81) compa_mode_pane_g

0x10a2,	// (0x0002dd3c) main_comp_mode_itu_pane_cp

0x10aa,	// (0x0002dd44) main_comp_mode_rocker_pane_cp

0x10b2,	// (0x0002dd4c) cell_cmode_itu_pane_cp_ParamLimits

0x10b2,	// (0x0002dd4c) cell_cmode_itu_pane_cp

0x10c7,	// (0x0002dd61) cell_cmode_rocker_pane_cp_ParamLimits

0x10c7,	// (0x0002dd61) cell_cmode_rocker_pane_cp

0x6ce8,	// (0x00033982) bg_button_pane_cp06_cp_ParamLimits

0x6ce8,	// (0x00033982) bg_button_pane_cp06_cp

0xd209,	// (0x00039ea3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd209,	// (0x00039ea3) cell_cmode_rocker_pane_g1_cp

0xcfcf,	// (0x00039c69) cell_cmode_rocker_pane_g2_cp

0x324f,	// (0x0002fee9) bg_button_pane_cp07_cp

0x10d9,	// (0x0002dd73) cell_cmode_itu_pane_g1_cp

0x10e2,	// (0x0002dd7c) cell_cmode_itu_pane_t1_cp

0x10f0,	// (0x0002dd8a) cell_cmode_itu_pane_t2_cp

0xbc54,	// (0x000388ee) settings_code_pane_cp2

0x35b2,	// (0x0003024c) bg_popup_window_pane_cp3_ParamLimits

0x3adf,	// (0x00030779) heading_pane_cp3_ParamLimits

0x3aeb,	// (0x00030785) listscroll_popup_graphic_pane_ParamLimits

0xc089,	// (0x00038d23) fep_hwr_aid_pane_ParamLimits

0xc4e9,	// (0x00039183) aid_touch_sctrl_top_ParamLimits

0xc504,	// (0x0003919e) sctrl_sk_top_pane_g1_ParamLimits

0xc2ce,	// (0x00038f68) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x0003c9bc) sctrl_sk_top_pane_g_ParamLimits

0xc511,	// (0x000391ab) sctrl_sk_top_pane_t1_ParamLimits

0xc4e9,	// (0x00039183) aid_touch_sctrl_bottom_ParamLimits

0xc511,	// (0x000391ab) sctrl_sk_bottom_pane_t1_ParamLimits

0xe305,	// (0x0003af9f) aid_area_touch_clock

0xc6d7,	// (0x00039371) aid_vkb2_area_top_pane_cell_ParamLimits

0xc6d7,	// (0x00039371) aid_vkb2_area_top_pane_cell

0xc802,	// (0x0003949c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc802,	// (0x0003949c) aid_vkb2_area_bottom_pane_cell

0xe4fe,	// (0x0003b198) popup_char_count_window

0xf2af,	// (0x0003bf49) popup_char_count_window_g1

0xf2b8,	// (0x0003bf52) popup_char_count_window_g2

0xf2c1,	// (0x0003bf5b) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0003ca88) popup_char_count_window_g

0xf2ca,	// (0x0003bf64) popup_char_count_window_t1

0xc5c5,	// (0x0003925f) popup_fep_char_preview_window_ParamLimits

0xc5c5,	// (0x0003925f) popup_fep_char_preview_window

0xc6f5,	// (0x0003938f) vkb2_top_candi_pane_ParamLimits

0xc6f5,	// (0x0003938f) vkb2_top_candi_pane

0x10fe,	// (0x0002dd98) cell_vkb2_top_candi_pane_ParamLimits

0x10fe,	// (0x0002dd98) cell_vkb2_top_candi_pane

0xcac3,	// (0x0003975d) bg_popup_fep_char_preview_window_ParamLimits

0xcac3,	// (0x0003975d) bg_popup_fep_char_preview_window

0xcad1,	// (0x0003976b) popup_fep_char_preview_window_t1_ParamLimits

0xcad1,	// (0x0003976b) popup_fep_char_preview_window_t1

0xf2d8,	// (0x0003bf72) bg_popup_fep_char_preview_window_g1

0xf2e0,	// (0x0003bf7a) bg_popup_fep_char_preview_window_g2

0xf2e8,	// (0x0003bf82) bg_popup_fep_char_preview_window_g3

0xf2f0,	// (0x0003bf8a) bg_popup_fep_char_preview_window_g4

0xf2f8,	// (0x0003bf92) bg_popup_fep_char_preview_window_g5

0xcb0b,	// (0x000397a5) bg_popup_fep_char_preview_window_g6

0xf300,	// (0x0003bf9a) bg_popup_fep_char_preview_window_g7

0xf308,	// (0x0003bfa2) bg_popup_fep_char_preview_window_g8

0xf310,	// (0x0003bfaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x0003ca8f) bg_popup_fep_char_preview_window_g

0xc2ce,	// (0x00038f68) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2ce,	// (0x00038f68) cell_vkb2_top_candi_pane_g1

0xc2dc,	// (0x00038f76) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc2dc,	// (0x00038f76) cell_vkb2_top_candi_pane_g2

0xefed,	// (0x0003bc87) cell_vkb2_top_candi_pane_g3_ParamLimits

0xefed,	// (0x0003bc87) cell_vkb2_top_candi_pane_g3

0xcb13,	// (0x000397ad) cell_vkb2_top_candi_pane_g4_ParamLimits

0xcb13,	// (0x000397ad) cell_vkb2_top_candi_pane_g4

0xd6da,	// (0x0003a374) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd6da,	// (0x0003a374) cell_vkb2_top_candi_pane_g5

0xcb34,	// (0x000397ce) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcb34,	// (0x000397ce) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x0003caa2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x0003caa2) cell_vkb2_top_candi_pane_g

0xcb42,	// (0x000397dc) cell_vkb2_top_candi_pane_t1

0xba94,	// (0x0003872e) aid_size_touch_slider_mark_ParamLimits

0xba94,	// (0x0003872e) aid_size_touch_slider_mark

0x0ee0,	// (0x0002db7a) grid_graphic2_catg_pane_ParamLimits

0x0ee0,	// (0x0002db7a) grid_graphic2_catg_pane

0x0f40,	// (0x0002dbda) popup_grid_graphic2_window_t1_ParamLimits

0x0f40,	// (0x0002dbda) popup_grid_graphic2_window_t1

0x0f52,	// (0x0002dbec) popup_grid_graphic2_window_t2_ParamLimits

0x0f52,	// (0x0002dbec) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x0003ca62) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x0003ca62) popup_grid_graphic2_window_t

0x6ce8,	// (0x00033982) bg_button_pane_cp05_ParamLimits

0x1081,	// (0x0002dd1b) cell_graphic2_control_pane_g1_ParamLimits

0x11b0,	// (0x0002de4a) cell_graphic2_catg_pane_ParamLimits

0x11b0,	// (0x0002de4a) cell_graphic2_catg_pane

0x324f,	// (0x0002fee9) bg_button_pane_cp12

0x11c2,	// (0x0002de5c) cell_graphic2_catg_pane_g1

0xe2d1,	// (0x0003af6b) cell_tb_ext_pane_t1_ParamLimits

0xc90d,	// (0x000395a7) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc90d,	// (0x000395a7) vkb2_top_cell_right_narrow_pane

0xc925,	// (0x000395bf) vkb2_top_cell_right_wide_pane_ParamLimits

0xc925,	// (0x000395bf) vkb2_top_cell_right_wide_pane

0xc07b,	// (0x00038d15) bg_vkb2_func_pane_ParamLimits

0xc07b,	// (0x00038d15) bg_vkb2_func_pane

0xc996,	// (0x00039630) vkb2_top_cell_left_pane_g1_ParamLimits

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp03

0xc9f4,	// (0x0003968e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7bad,	// (0x00034847) bg_vkb2_func_pane_g1

0x7ba5,	// (0x0003483f) bg_vkb2_func_pane_g2

0x7bb5,	// (0x0003484f) bg_vkb2_func_pane_g3

0x7bbd,	// (0x00034857) bg_vkb2_func_pane_g4

0x7bc5,	// (0x0003485f) bg_vkb2_func_pane_g5

0x7bcd,	// (0x00034867) bg_vkb2_func_pane_g6

0x7bdd,	// (0x00034877) bg_vkb2_func_pane_g7

0x7bd5,	// (0x0003486f) bg_vkb2_func_pane_g8

0x7b9d,	// (0x00034837) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x0003caaf) bg_vkb2_func_pane_g

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp01

0xc996,	// (0x00039630) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc996,	// (0x00039630) vkb2_top_cell_right_wide_pane_g1

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc07b,	// (0x00038d15) bg_vkb2_fuc_pane_cp02

0xc9f4,	// (0x0003968e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc9f4,	// (0x0003968e) vkb2_top_cell_right_narrow_pane_g1

0x02e6,	// (0x0002cf80) aid_touch_area_decrease_ParamLimits

0x02e6,	// (0x0002cf80) aid_touch_area_decrease

0x02fe,	// (0x0002cf98) aid_touch_area_increase_ParamLimits

0x02fe,	// (0x0002cf98) aid_touch_area_increase

0x030a,	// (0x0002cfa4) aid_touch_area_mute_ParamLimits

0x030a,	// (0x0002cfa4) aid_touch_area_mute

0x0326,	// (0x0002cfc0) aid_touch_area_slider_ParamLimits

0x0326,	// (0x0002cfc0) aid_touch_area_slider

0x0360,	// (0x0002cffa) popup_slider_window_g4_ParamLimits

0x0360,	// (0x0002cffa) popup_slider_window_g4

0x036c,	// (0x0002d006) popup_slider_window_g5_ParamLimits

0x036c,	// (0x0002d006) popup_slider_window_g5

0x038e,	// (0x0002d028) popup_slider_window_g6_ParamLimits

0x038e,	// (0x0002d028) popup_slider_window_g6

0xe1fd,	// (0x0003ae97) popup_slider_window_t2_ParamLimits

0xe1fd,	// (0x0003ae97) popup_slider_window_t2

0x0001,

0xfd16,	// (0x0003c9b0) popup_slider_window_t_ParamLimits

0xfd16,	// (0x0003c9b0) popup_slider_window_t

0x03a0,	// (0x0002d03a) slider_pane_ParamLimits

0x03a0,	// (0x0002d03a) slider_pane

0xf318,	// (0x0003bfb2) slider_pane_g1_ParamLimits

0xf318,	// (0x0003bfb2) slider_pane_g1

0xf32c,	// (0x0003bfc6) slider_pane_g2_ParamLimits

0xf32c,	// (0x0003bfc6) slider_pane_g2

0xf342,	// (0x0003bfdc) slider_pane_g3_ParamLimits

0xf342,	// (0x0003bfdc) slider_pane_g3

0x0003,

0xfe28,	// (0x0003cac2) slider_pane_g_ParamLimits

0xfe28,	// (0x0003cac2) slider_pane_g

0xb260,	// (0x00037efa) popup_tb_float_extension_window_ParamLimits

0xb260,	// (0x00037efa) popup_tb_float_extension_window

0xf36e,	// (0x0003c008) aid_size_cell_tb_float_ext

0x324f,	// (0x0002fee9) bg_popup_sub_window_cp28

0xf379,	// (0x0003c013) grid_tb_float_ext_pane

0xf381,	// (0x0003c01b) cell_tb_float_ext_pane_ParamLimits

0xf381,	// (0x0003c01b) cell_tb_float_ext_pane

0xf399,	// (0x0003c033) cell_tb_float_ext_pane_g1

0xf3a2,	// (0x0003c03c) grid_highlight_pane_cp12

0xc1c4,	// (0x00038e5e) cell_last_hwr_side_pane_ParamLimits

0xc1c4,	// (0x00038e5e) cell_last_hwr_side_pane

0xcfcf,	// (0x00039c69) cell_last_hwr_side_pane_g1

0xf3ab,	// (0x0003c045) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x0003cacb) cell_last_hwr_side_pane_g

0xc8ca,	// (0x00039564) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc8ca,	// (0x00039564) vkb2_area_bottom_space_btn_pane

0xc2ce,	// (0x00038f68) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe565,	// (0x0003b1ff) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xcb42,	// (0x000397dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0xcb58,	// (0x000397f2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xcb58,	// (0x000397f2) vkb2_area_bottom_space_btn_pane_g1

0xcb8e,	// (0x00039828) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xcb8e,	// (0x00039828) vkb2_area_bottom_space_btn_pane_g2

0xcbc4,	// (0x0003985e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xcbc4,	// (0x0003985e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x0003cad0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x0003cad0) vkb2_area_bottom_space_btn_pane_g

0xc138,	// (0x00038dd2) cel_fep_hwr_func_pane_ParamLimits

0xc138,	// (0x00038dd2) cel_fep_hwr_func_pane

0xc174,	// (0x00038e0e) cell_hwr_side_button_pane_ParamLimits

0xc174,	// (0x00038e0e) cell_hwr_side_button_pane

0xe305,	// (0x0003af9f) aid_area_touch_clock_ParamLimits

0x3907,	// (0x000305a1) bg_uniindi_top_pane_ParamLimits

0xe317,	// (0x0003afb1) uniindi_top_pane_g1_ParamLimits

0xe32d,	// (0x0003afc7) uniindi_top_pane_g2_ParamLimits

0xe339,	// (0x0003afd3) uniindi_top_pane_g3_ParamLimits

0xe34a,	// (0x0003afe4) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x0003c9e8) uniindi_top_pane_g_ParamLimits

0xe357,	// (0x0003aff1) uniindi_top_pane_t1_ParamLimits

0x3907,	// (0x000305a1) bg_vkb2_func_pane_cp01_ParamLimits

0x3907,	// (0x000305a1) bg_vkb2_func_pane_cp01

0x127d,	// (0x0002df17) cel_fep_hwr_func_pane_g1_ParamLimits

0x127d,	// (0x0002df17) cel_fep_hwr_func_pane_g1

0x3907,	// (0x000305a1) bg_vkb2_func_pane_cp02_ParamLimits

0x3907,	// (0x000305a1) bg_vkb2_func_pane_cp02

0x127d,	// (0x0002df17) cell_hwr_side_button_pane_g1_ParamLimits

0x127d,	// (0x0002df17) cell_hwr_side_button_pane_g1

0x7ac1,	// (0x0003475b) status_pane_g4_ParamLimits

0x7ac1,	// (0x0003475b) status_pane_g4

0x7ad9,	// (0x00034773) status_pane_t1

0xcdc1,	// (0x00039a5b) form2_midp_gauge_slider_cont_pane

0xcdc9,	// (0x00039a63) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcddb,	// (0x00039a75) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcded,	// (0x00039a87) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0003c7af) form2_midp_gauge_slider_pane_t_ParamLimits

0xcdff,	// (0x00039a99) form2_midp_slider_pane_ParamLimits

0xc585,	// (0x0003921f) aid_size_cell_func_vkb2_ParamLimits

0xc585,	// (0x0003921f) aid_size_cell_func_vkb2

0xf35a,	// (0x0003bff4) slider_pane_g4_ParamLimits

0xf35a,	// (0x0003bff4) slider_pane_g4

0xcc0a,	// (0x000398a4) form2_midp_gauge_slider_pane_t2_cp01

0xcc18,	// (0x000398b2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcc18,	// (0x000398b2) form2_midp_gauge_slider_pane_t3_cp01

0xcc35,	// (0x000398cf) form2_midp_slider_pane_cp01

0x324f,	// (0x0002fee9) navi_smil_pane

0x12ea,	// (0x0002df84) navi_smil_pane_g1

0x12f2,	// (0x0002df8c) navi_smil_pane_t1

0x12bf,	// (0x0002df59) form2_midp_slider_pane_g1

0x12c8,	// (0x0002df62) form2_midp_slider_pane_g2

0x12d0,	// (0x0002df6a) form2_midp_slider_pane_g3

0x12bf,	// (0x0002df59) form2_midp_slider_pane_g4

0x12d8,	// (0x0002df72) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x0003cad9) form2_midp_slider_pane_g

0xcbfa,	// (0x00039894) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xcbfa,	// (0x00039894) vkb2_area_bottom_space_btn_pane_g4

0xb3a1,	// (0x0003803b) lc0_navi_pane_ParamLimits

0xb3a1,	// (0x0003803b) lc0_navi_pane

0xb417,	// (0x000380b1) lc0_stat_indi_pane_ParamLimits

0xb417,	// (0x000380b1) lc0_stat_indi_pane

0xb42e,	// (0x000380c8) ls0_title_pane_ParamLimits

0xb42e,	// (0x000380c8) ls0_title_pane

0x6ce8,	// (0x00033982) bg_popup_sub_pane_cp14_ParamLimits

0xe2ec,	// (0x0003af86) list_uniindi_pane_ParamLimits

0xe2f8,	// (0x0003af92) uniindi_top_pane_ParamLimits

0xe393,	// (0x0003b02d) list_single_uniindi_pane_g1_ParamLimits

0xe3a6,	// (0x0003b040) list_single_uniindi_pane_t1_ParamLimits

0xcc3e,	// (0x000398d8) lc0_stat_clock_pane_ParamLimits

0xcc3e,	// (0x000398d8) lc0_stat_clock_pane

0x131a,	// (0x0002dfb4) lc0_stat_indi_pane_g1_ParamLimits

0x131a,	// (0x0002dfb4) lc0_stat_indi_pane_g1

0x130d,	// (0x0002dfa7) lc0_stat_indi_pane_g2_ParamLimits

0x130d,	// (0x0002dfa7) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x0003cae4) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x0003cae4) lc0_stat_indi_pane_g

0xcc4b,	// (0x000398e5) lc0_uni_indicator_pane_ParamLimits

0xcc4b,	// (0x000398e5) lc0_uni_indicator_pane

0x1334,	// (0x0002dfce) ls0_title_pane_g1_ParamLimits

0x1334,	// (0x0002dfce) ls0_title_pane_g1

0x1348,	// (0x0002dfe2) ls0_title_pane_t1_ParamLimits

0x1348,	// (0x0002dfe2) ls0_title_pane_t1

0xcc58,	// (0x000398f2) lc0_uni_indicator_pane_g1_ParamLimits

0xcc58,	// (0x000398f2) lc0_uni_indicator_pane_g1

0x1390,	// (0x0002e02a) lc0_stat_clock_pane_t1

0x324f,	// (0x0002fee9) main_ai5_pane

0x139e,	// (0x0002e038) ai5_sk_pane_ParamLimits

0x139e,	// (0x0002e038) ai5_sk_pane

0x13ab,	// (0x0002e045) cell_ai5_widget_pane_ParamLimits

0x13ab,	// (0x0002e045) cell_ai5_widget_pane

0x1406,	// (0x0002e0a0) aid_size_cell_widget_grid

0x141a,	// (0x0002e0b4) bg_ai5_widget_pane_ParamLimits

0x141a,	// (0x0002e0b4) bg_ai5_widget_pane

0x1442,	// (0x0002e0dc) cell_ai5_widget_pane_g2

0x1452,	// (0x0002e0ec) cell_ai5_widget_pane_g3

0x1466,	// (0x0002e100) cell_ai5_widget_pane_g4

0x1472,	// (0x0002e10c) cell_ai5_widget_pane_g5

0x147e,	// (0x0002e118) cell_ai5_widget_pane_g6

0x148a,	// (0x0002e124) cell_ai5_widget_pane_g7

0x14d2,	// (0x0002e16c) cell_ai5_widget_pane_t1_ParamLimits

0x14d2,	// (0x0002e16c) cell_ai5_widget_pane_t1

0x14ef,	// (0x0002e189) cell_ai5_widget_pane_t2_ParamLimits

0x14ef,	// (0x0002e189) cell_ai5_widget_pane_t2

0x1507,	// (0x0002e1a1) cell_ai5_widget_pane_t3_ParamLimits

0x1507,	// (0x0002e1a1) cell_ai5_widget_pane_t3

0x151f,	// (0x0002e1b9) cell_ai5_widget_pane_t4_ParamLimits

0x151f,	// (0x0002e1b9) cell_ai5_widget_pane_t4

0x1539,	// (0x0002e1d3) cell_ai5_widget_pane_t5_ParamLimits

0x1539,	// (0x0002e1d3) cell_ai5_widget_pane_t5

0x1558,	// (0x0002e1f2) cell_ai5_widget_pane_t6_ParamLimits

0x1558,	// (0x0002e1f2) cell_ai5_widget_pane_t6

0x156a,	// (0x0002e204) cell_ai5_widget_pane_t7_ParamLimits

0x156a,	// (0x0002e204) cell_ai5_widget_pane_t7

0x1583,	// (0x0002e21d) cell_ai5_widget_pane_t8_ParamLimits

0x1583,	// (0x0002e21d) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0003cafe) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0003cafe) cell_ai5_widget_pane_t

0x15cb,	// (0x0002e265) grid_ai5_widget_pane

0x6ce8,	// (0x00033982) highlight_cell_ai5_widget_pane_ParamLimits

0x6ce8,	// (0x00033982) highlight_cell_ai5_widget_pane

0x15e1,	// (0x0002e27b) ai5_sk_left_pane

0x15eb,	// (0x0002e285) ai5_sk_middle_pane

0x15f5,	// (0x0002e28f) ai5_sk_right_pane

0x15ff,	// (0x0002e299) bg_ai5_widget_pane_g1_ParamLimits

0x15ff,	// (0x0002e299) bg_ai5_widget_pane_g1

0x160b,	// (0x0002e2a5) bg_ai5_widget_pane_g2_ParamLimits

0x160b,	// (0x0002e2a5) bg_ai5_widget_pane_g2

0x1617,	// (0x0002e2b1) bg_ai5_widget_pane_g3_ParamLimits

0x1617,	// (0x0002e2b1) bg_ai5_widget_pane_g3

0x1623,	// (0x0002e2bd) bg_ai5_widget_pane_g4_ParamLimits

0x1623,	// (0x0002e2bd) bg_ai5_widget_pane_g4

0x162f,	// (0x0002e2c9) bg_ai5_widget_pane_g5_ParamLimits

0x162f,	// (0x0002e2c9) bg_ai5_widget_pane_g5

0x163b,	// (0x0002e2d5) bg_ai5_widget_pane_g6_ParamLimits

0x163b,	// (0x0002e2d5) bg_ai5_widget_pane_g6

0x1647,	// (0x0002e2e1) bg_ai5_widget_pane_g7_ParamLimits

0x1647,	// (0x0002e2e1) bg_ai5_widget_pane_g7

0x1653,	// (0x0002e2ed) bg_ai5_widget_pane_g8_ParamLimits

0x1653,	// (0x0002e2ed) bg_ai5_widget_pane_g8

0x165f,	// (0x0002e2f9) bg_ai5_widget_pane_g9_ParamLimits

0x165f,	// (0x0002e2f9) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x0003cb13) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x0003cb13) bg_ai5_widget_pane_g

0x1687,	// (0x0002e321) cell_shortcut_ai5_widget_pane_ParamLimits

0x1687,	// (0x0002e321) cell_shortcut_ai5_widget_pane

0x3719,	// (0x000303b3) bg_cell_shortcut_ai5_widget_pane

0x1698,	// (0x0002e332) cell_grid_ai5_widget_pane_g1

0x16a1,	// (0x0002e33b) highlight_cell_shortcut_ai5_widget_pane

0x7bad,	// (0x00034847) ai5_sk_left_pane_g1

0x16a9,	// (0x0002e343) ai5_sk_left_pane_g2

0x16b1,	// (0x0002e34b) ai5_sk_left_pane_g3

0x16b9,	// (0x0002e353) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x0003cb26) ai5_sk_left_pane_g

0x16c1,	// (0x0002e35b) ai5_sk_left_pane_t1

0x7ba5,	// (0x0003483f) ai5_sk_right_pane_g1

0x16cf,	// (0x0002e369) ai5_sk_right_pane_g2

0x16d7,	// (0x0002e371) ai5_sk_right_pane_g3

0x16df,	// (0x0002e379) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0003cb2f) ai5_sk_right_pane_g

0x16e7,	// (0x0002e381) ai5_sk_right_pane_t1

0x7ba5,	// (0x0003483f) ai5_sk_middle_pane_g1

0x7bad,	// (0x00034847) ai5_sk_middle_pane_g2

0x7bc5,	// (0x0003485f) ai5_sk_middle_pane_g3

0x16d7,	// (0x0002e371) ai5_sk_middle_pane_g4

0x16b1,	// (0x0002e34b) ai5_sk_middle_pane_g5

0x16f5,	// (0x0002e38f) ai5_sk_middle_pane_g6

0x16fd,	// (0x0002e397) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0003cb38) ai5_sk_middle_pane_g

0xb2ee,	// (0x00037f88) aid_touch_area_size_lc0_ParamLimits

0xb2ee,	// (0x00037f88) aid_touch_area_size_lc0

0xc2fd,	// (0x00038f97) cell_hwr_candidate_pane_t1_ParamLimits

0x79f6,	// (0x00034690) aid_touch_navi_pane

0xb500,	// (0x0003819a) status_dt_navi_pane_ParamLimits

0xb500,	// (0x0003819a) status_dt_navi_pane

0xb50d,	// (0x000381a7) status_dt_sta_pane_ParamLimits

0xb50d,	// (0x000381a7) status_dt_sta_pane

0x1705,	// (0x0002e39f) dt_sta_controll_pane

0x1712,	// (0x0002e3ac) dt_sta_indi_pane

0x1723,	// (0x0002e3bd) dt_sta_title_pane

0x3907,	// (0x000305a1) bg_dt_sta_indi_pane_ParamLimits

0x3907,	// (0x000305a1) bg_dt_sta_indi_pane

0x1736,	// (0x0002e3d0) dt_sta_battery_pane

0x173e,	// (0x0002e3d8) dt_sta_indi_pane_g1

0x1747,	// (0x0002e3e1) dt_sta_indi_pane_g2

0x1750,	// (0x0002e3ea) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0003cb47) dt_sta_indi_pane_g

0x1759,	// (0x0002e3f3) dt_sta_signal_pane

0x6ce8,	// (0x00033982) bg_dt_sta_title_pane_ParamLimits

0x6ce8,	// (0x00033982) bg_dt_sta_title_pane

0x1762,	// (0x0002e3fc) dt_sta_title_pane_g1

0x176a,	// (0x0002e404) dt_sta_title_pane_t1_ParamLimits

0x176a,	// (0x0002e404) dt_sta_title_pane_t1

0x324f,	// (0x0002fee9) bg_dt_sta_control_pane

0x177f,	// (0x0002e419) dt_sta_controll_pane_g1

0x1788,	// (0x0002e422) bg_dt_sta_title_pane_g1

0x1791,	// (0x0002e42b) bg_dt_sta_title_pane_g2

0x179a,	// (0x0002e434) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0003cb4e) bg_dt_sta_title_pane_g

0xcfcf,	// (0x00039c69) bg_dt_sta_indi_pane_g1

0x17a3,	// (0x0002e43d) dt_sta_signal_pane_g1

0x17ab,	// (0x0002e445) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0003cb55) dt_sta_signal_pane_g

0x17b3,	// (0x0002e44d) dt_sta_battery_pane_g1

0x17bc,	// (0x0002e456) dt_sta_battery_pane_t1

0xcfcf,	// (0x00039c69) bg_dt_sta_control_pane_g1

0x725f,	// (0x00033ef9) fep_china_uni_eep_pane

0x7267,	// (0x00033f01) fep_china_uni_entry_pane_ParamLimits

0x7277,	// (0x00033f11) popup_fep_china_uni_window_g1_ParamLimits

0x7287,	// (0x00033f21) popup_fep_china_uni_window_g2_ParamLimits

0x7287,	// (0x00033f21) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003c3fc) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003c3fc) popup_fep_china_uni_window_g

0x17cb,	// (0x0002e465) fep_china_uni_eep_pane_g1

0x17d3,	// (0x0002e46d) fep_china_uni_eep_pane_t1

0x12e1,	// (0x0002df7b) aid_touch_area_size_smil_player

0x7a94,	// (0x0003472e) lc0_clock_pane

0x7acd,	// (0x00034767) status_pane_g5_ParamLimits

0x7acd,	// (0x00034767) status_pane_g5

0xb010,	// (0x00037caa) popup_keymap_window

0x7aad,	// (0x00034747) status_icon_pane

0x1452,	// (0x0002e0ec) cell_ai5_widget_pane_g3_ParamLimits

0x1466,	// (0x0002e100) cell_ai5_widget_pane_g4_ParamLimits

0x1472,	// (0x0002e10c) cell_ai5_widget_pane_g5_ParamLimits

0x1496,	// (0x0002e130) cell_ai5_widget_pane_g8_ParamLimits

0x1496,	// (0x0002e130) cell_ai5_widget_pane_g8

0x14aa,	// (0x0002e144) cell_ai5_widget_pane_g9_ParamLimits

0x14aa,	// (0x0002e144) cell_ai5_widget_pane_g9

0x14be,	// (0x0002e158) cell_ai5_widget_pane_g10_ParamLimits

0x14be,	// (0x0002e158) cell_ai5_widget_pane_g10

0x17e2,	// (0x0002e47c) status_icon_pane_g1

0x324f,	// (0x0002fee9) bg_popup_sub_pane_cp13

0x17ea,	// (0x0002e484) popup_keymap_window_t1

0xae17,	// (0x00037ab1) control_pane_g6_ParamLimits

0xae17,	// (0x00037ab1) control_pane_g6

0xae24,	// (0x00037abe) control_pane_g7_ParamLimits

0xae24,	// (0x00037abe) control_pane_g7

0xae31,	// (0x00037acb) control_pane_g8_ParamLimits

0xae31,	// (0x00037acb) control_pane_g8

0x1705,	// (0x0002e39f) dt_sta_controll_pane_ParamLimits

0x1712,	// (0x0002e3ac) dt_sta_indi_pane_ParamLimits

0x1723,	// (0x0002e3bd) dt_sta_title_pane_ParamLimits

0x3d66,	// (0x00030a00) aid_size_touch_scroll_bar_cale

0xa29e,	// (0x00036f38) popup_discreet_window_ParamLimits

0xa29e,	// (0x00036f38) popup_discreet_window

0xa302,	// (0x00036f9c) popup_sk_window

0x827a,	// (0x00034f14) bg_popup_sub_pane_cp28_ParamLimits

0x827a,	// (0x00034f14) bg_popup_sub_pane_cp28

0x17f8,	// (0x0002e492) popup_discreet_window_g1_ParamLimits

0x17f8,	// (0x0002e492) popup_discreet_window_g1

0x1818,	// (0x0002e4b2) popup_discreet_window_t1_ParamLimits

0x1818,	// (0x0002e4b2) popup_discreet_window_t1

0x1836,	// (0x0002e4d0) popup_discreet_window_t2_ParamLimits

0x1836,	// (0x0002e4d0) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0003cb5a) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0003cb5a) popup_discreet_window_t

0xcc6a,	// (0x00039904) popup_sk_window_g1

0xcc73,	// (0x0003990d) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0003cb61) popup_sk_window_g

0x18a8,	// (0x0002e542) popup_sk_window_t1

0x189a,	// (0x0002e534) popup_sk_window_t1_copy1

0x1442,	// (0x0002e0dc) cell_ai5_widget_pane_g2_ParamLimits

0x1595,	// (0x0002e22f) cell_ai5_widget_pane_t9_ParamLimits

0x1595,	// (0x0002e22f) cell_ai5_widget_pane_t9

0x324f,	// (0x0002fee9) main_fep_fshwr2_pane

0x18b6,	// (0x0002e550) aid_fshwr2_btn_pane

0x18be,	// (0x0002e558) aid_fshwr2_syb_pane

0x18c6,	// (0x0002e560) aid_fshwr2_txt_pane

0x18ce,	// (0x0002e568) fshwr2_func_candi_pane

0x18d6,	// (0x0002e570) fshwr2_hwr_syb_pane

0x18de,	// (0x0002e578) fshwr2_icf_pane

0x324f,	// (0x0002fee9) fshwr2_icf_bg_pane

0x18f8,	// (0x0002e592) fshwr2_icf_pane_t1_ParamLimits

0x18f8,	// (0x0002e592) fshwr2_icf_pane_t1

0xcfcf,	// (0x00039c69) fshwr2_func_candi_pane_g1

0x190f,	// (0x0002e5a9) fshwr2_func_candi_row_pane_ParamLimits

0x190f,	// (0x0002e5a9) fshwr2_func_candi_row_pane

0x1920,	// (0x0002e5ba) cell_fshwr2_syb_pane_ParamLimits

0x1920,	// (0x0002e5ba) cell_fshwr2_syb_pane

0xd209,	// (0x00039ea3) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd209,	// (0x00039ea3) fshwr2_hwr_syb_pane_g1

0x324f,	// (0x0002fee9) bg_popup_call_pane_cp01

0x1937,	// (0x0002e5d1) fshwr2_func_candi_cell_pane_ParamLimits

0x1937,	// (0x0002e5d1) fshwr2_func_candi_cell_pane

0x1962,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1962,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane

0x197c,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x197c,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1

0x199c,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x199c,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1

0x324f,	// (0x0002fee9) bg_button_pane_cp08

0x768f,	// (0x00034329) cell_fshwr2_syb_bg_pane

0x19af,	// (0x0002e649) cell_fshwr2_syb_bg_pane_g1

0x19b7,	// (0x0002e651) cell_fshwr2_syb_bg_pane_t1

0x6ce8,	// (0x00033982) main_tmo_pane

0xba03,	// (0x0003869d) uni_indicator_pane_g1_ParamLimits

0xba18,	// (0x000386b2) uni_indicator_pane_g2_ParamLimits

0xba2e,	// (0x000386c8) uni_indicator_pane_g3_ParamLimits

0x8c06,	// (0x000358a0) uni_indicator_pane_g4_ParamLimits

0x8c06,	// (0x000358a0) uni_indicator_pane_g4

0x8c1a,	// (0x000358b4) uni_indicator_pane_g5_ParamLimits

0x8c1a,	// (0x000358b4) uni_indicator_pane_g5

0x8c2e,	// (0x000358c8) uni_indicator_pane_g6_ParamLimits

0x8c2e,	// (0x000358c8) uni_indicator_pane_g6

0xf95a,	// (0x0003c5f4) uni_indicator_pane_g_ParamLimits

0x02ca,	// (0x0002cf64) popup_tmo_note_window_ParamLimits

0x02ca,	// (0x0002cf64) popup_tmo_note_window

0x324f,	// (0x0002fee9) fshwr2_bg_pane

0x198d,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x198d,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0003cb66) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0003cb66) fshwr2_func_candi_cell_pane_g

0xcfcf,	// (0x00039c69) bg_popup_window_pane_cp01

0x19c6,	// (0x0002e660) bg_popup_window_pane_g1_cp01

0x19cf,	// (0x0002e669) bg_popup_window_pane_cp22_ParamLimits

0x19cf,	// (0x0002e669) bg_popup_window_pane_cp22

0x19dd,	// (0x0002e677) listscroll_tmo_link_pane_ParamLimits

0x19dd,	// (0x0002e677) listscroll_tmo_link_pane

0x1a1d,	// (0x0002e6b7) popup_tmo_note_window_g1_ParamLimits

0x1a1d,	// (0x0002e6b7) popup_tmo_note_window_g1

0x1a2a,	// (0x0002e6c4) tmo_note_info_pane_ParamLimits

0x1a2a,	// (0x0002e6c4) tmo_note_info_pane

0x1a44,	// (0x0002e6de) list_tmo_note_info_pane_g1_ParamLimits

0x1a44,	// (0x0002e6de) list_tmo_note_info_pane_g1

0x1a5b,	// (0x0002e6f5) list_tmo_note_info_pane_g2_ParamLimits

0x1a5b,	// (0x0002e6f5) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0003cb6b) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0003cb6b) list_tmo_note_info_pane_g

0x1a77,	// (0x0002e711) list_tmo_note_info_text_pane_ParamLimits

0x1a77,	// (0x0002e711) list_tmo_note_info_text_pane

0x1af8,	// (0x0002e792) list_tmo_link_pane

0x1b05,	// (0x0002e79f) scroll_pane_cp20

0x1b12,	// (0x0002e7ac) list_single_tmo_link_pane_ParamLimits

0x1b12,	// (0x0002e7ac) list_single_tmo_link_pane

0x1b22,	// (0x0002e7bc) list_single_tmo_link_pane_t1

0x1b30,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1_ParamLimits

0x1b30,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1

0x6d96,	// (0x00033a30) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d96,	// (0x00033a30) aid_size_touch_scroll_bar_cp01

0xeb85,	// (0x0003b81f) aid_size_touch_slider_marker

0xa2ee,	// (0x00036f88) popup_settings_window_ParamLimits

0xa2ee,	// (0x00036f88) popup_settings_window

0xed3b,	// (0x0003b9d5) popup_candi_list_indi_window

0x79f6,	// (0x00034690) aid_touch_navi_pane_ParamLimits

0xc4bd,	// (0x00039157) rs_clock_indi_pane

0xc4c6,	// (0x00039160) sctrl_sk_bottom_pane_ParamLimits

0xc4d7,	// (0x00039171) sctrl_sk_top_pane_ParamLimits

0xc5df,	// (0x00039279) popup_fep_tooltip_window

0x1406,	// (0x0002e0a0) aid_size_cell_widget_grid_ParamLimits

0x1436,	// (0x0002e0d0) cell_ai5_widget_pane_g1_ParamLimits

0x1436,	// (0x0002e0d0) cell_ai5_widget_pane_g1

0x147e,	// (0x0002e118) cell_ai5_widget_pane_g6_ParamLimits

0x148a,	// (0x0002e124) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x0003cae9) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003cae9) cell_ai5_widget_pane_g

0x15b9,	// (0x0002e253) cell_ai5_widget_pane_t10_ParamLimits

0x15b9,	// (0x0002e253) cell_ai5_widget_pane_t10

0x15cb,	// (0x0002e265) grid_ai5_widget_pane_ParamLimits

0x166b,	// (0x0002e305) cell_contacts_ai5_widget_pane_ParamLimits

0x166b,	// (0x0002e305) cell_contacts_ai5_widget_pane

0x184b,	// (0x0002e4e5) popup_discreet_window_t3_ParamLimits

0x184b,	// (0x0002e4e5) popup_discreet_window_t3

0x18e6,	// (0x0002e580) popup_fshwr2_char_preview_window_ParamLimits

0x18e6,	// (0x0002e580) popup_fshwr2_char_preview_window

0x1a95,	// (0x0002e72f) tmo_note_info_pane_t1

0x1aaa,	// (0x0002e744) tmo_note_info_pane_t2

0x1abf,	// (0x0002e759) tmo_note_info_pane_t3

0x1ad4,	// (0x0002e76e) tmo_note_info_pane_t4

0x1ae6,	// (0x0002e780) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0003cb70) tmo_note_info_pane_t

0x1af8,	// (0x0002e792) list_tmo_link_pane_ParamLimits

0x1b05,	// (0x0002e79f) scroll_pane_cp20_ParamLimits

0x324f,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp01

0x1b49,	// (0x0002e7e3) popup_fshwr2_char_preview_window_t1

0x1b57,	// (0x0002e7f1) popup_candi_list_indi_window_g1

0x1b60,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane

0x1b6c,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1

0x1b80,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2

0x1b8f,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0003cb7b) cell_contacts_ai5_widget_pane_g

0x1ba2,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1

0x6ce8,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1c1a,	// (0x0002e8b4) settings_container_pane

0x768f,	// (0x00034329) listscroll_set_pane_copy1

0x93af,	// (0x00036049) scroll_pane_cp121_copy1

0x1c26,	// (0x0002e8c0) set_content_pane_copy1

0x1c2e,	// (0x0002e8c8) aid_height_set_list_copy1_ParamLimits

0x1c2e,	// (0x0002e8c8) aid_height_set_list_copy1

0x8dc7,	// (0x00035a61) aid_size_parent_copy1_ParamLimits

0x8dc7,	// (0x00035a61) aid_size_parent_copy1

0x1c3a,	// (0x0002e8d4) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1c3a,	// (0x0002e8d4) button_value_adjust_pane_cp6_copy1

0x6e64,	// (0x00033afe) list_highlight_pane_cp2_copy1_ParamLimits

0x6e64,	// (0x00033afe) list_highlight_pane_cp2_copy1

0x1c4e,	// (0x0002e8e8) list_set_pane_copy1_ParamLimits

0x1c4e,	// (0x0002e8e8) list_set_pane_copy1

0x1bb7,	// (0x0002e851) main_pane_set_t1_copy1_ParamLimits

0x1bb7,	// (0x0002e851) main_pane_set_t1_copy1

0x1bf1,	// (0x0002e88b) main_pane_set_t2_copy1_ParamLimits

0x1bf1,	// (0x0002e88b) main_pane_set_t2_copy1

0x1cdc,	// (0x0002e976) main_pane_set_t3_copy1

0x1cea,	// (0x0002e984) main_pane_set_t4_copy1

0x1c0e,	// (0x0002e8a8) set_content_pane_g1_copy1_ParamLimits

0x1c0e,	// (0x0002e8a8) set_content_pane_g1_copy1

0x1cf8,	// (0x0002e992) setting_code_pane_copy1

0x1d00,	// (0x0002e99a) setting_slider_graphic_pane_copy1

0x1d00,	// (0x0002e99a) setting_slider_pane_copy1

0x1d08,	// (0x0002e9a2) setting_text_pane_copy1

0x1d00,	// (0x0002e99a) setting_volume_pane_copy1

0x1d10,	// (0x0002e9aa) settings_code_pane_cp2_copy1

0x1d18,	// (0x0002e9b2) settings_code_pane_cp_copy1_ParamLimits

0x1d18,	// (0x0002e9b2) settings_code_pane_cp_copy1

0x1d2c,	// (0x0002e9c6) volume_set_pane_copy1

0x1d34,	// (0x0002e9ce) volume_set_pane_g10_copy1

0x1d3c,	// (0x0002e9d6) volume_set_pane_g1_copy1

0x1d44,	// (0x0002e9de) volume_set_pane_g2_copy1

0x1d4c,	// (0x0002e9e6) volume_set_pane_g3_copy1

0x1d54,	// (0x0002e9ee) volume_set_pane_g4_copy1

0x1d5c,	// (0x0002e9f6) volume_set_pane_g5_copy1

0x1d64,	// (0x0002e9fe) volume_set_pane_g6_copy1

0x1d6c,	// (0x0002ea06) volume_set_pane_g7_copy1

0x1d74,	// (0x0002ea0e) volume_set_pane_g8_copy1

0x1d7c,	// (0x0002ea16) volume_set_pane_g9_copy1

0x35b2,	// (0x0003024c) bg_set_opt_pane_cp_copy1_ParamLimits

0x35b2,	// (0x0003024c) bg_set_opt_pane_cp_copy1

0x35c0,	// (0x0003025a) setting_slider_pane_t1_copy1_ParamLimits

0x35c0,	// (0x0003025a) setting_slider_pane_t1_copy1

0x1d84,	// (0x0002ea1e) setting_slider_pane_t2_copy1_ParamLimits

0x1d84,	// (0x0002ea1e) setting_slider_pane_t2_copy1

0x1d9d,	// (0x0002ea37) setting_slider_pane_t3_copy1_ParamLimits

0x1d9d,	// (0x0002ea37) setting_slider_pane_t3_copy1

0x3606,	// (0x000302a0) slider_set_pane_copy1_ParamLimits

0x3606,	// (0x000302a0) slider_set_pane_copy1

0x6d37,	// (0x000339d1) set_opt_bg_pane_g1_copy2

0x6d3f,	// (0x000339d9) set_opt_bg_pane_g2_copy2

0x1db4,	// (0x0002ea4e) set_opt_bg_pane_g3_copy2

0x6d4f,	// (0x000339e9) set_opt_bg_pane_g4_copy2

0x6d57,	// (0x000339f1) set_opt_bg_pane_g5_copy2

0x6d5f,	// (0x000339f9) set_opt_bg_pane_g6_copy2

0x1dbc,	// (0x0002ea56) set_opt_bg_pane_g7_copy2

0x1dc4,	// (0x0002ea5e) set_opt_bg_pane_g8_copy2

0x1dcc,	// (0x0002ea66) set_opt_bg_pane_g9_copy2

0x8f7d,	// (0x00035c17) aid_size_touch_slider_mark_copy1_ParamLimits

0x8f7d,	// (0x00035c17) aid_size_touch_slider_mark_copy1

0x8dd9,	// (0x00035a73) slider_set_pane_g1_copy1

0x8de2,	// (0x00035a7c) slider_set_pane_g2_copy1

0x8f91,	// (0x00035c2b) slider_set_pane_g3_copy1_ParamLimits

0x8f91,	// (0x00035c2b) slider_set_pane_g3_copy1

0x8fa5,	// (0x00035c3f) slider_set_pane_g4_copy1_ParamLimits

0x8fa5,	// (0x00035c3f) slider_set_pane_g4_copy1

0x8fbd,	// (0x00035c57) slider_set_pane_g5_copy1_ParamLimits

0x8fbd,	// (0x00035c57) slider_set_pane_g5_copy1

0x8f91,	// (0x00035c2b) slider_set_pane_g6_copy1_ParamLimits

0x8f91,	// (0x00035c2b) slider_set_pane_g6_copy1

0x1dd4,	// (0x0002ea6e) slider_set_pane_g7_copy1_ParamLimits

0x1dd4,	// (0x0002ea6e) slider_set_pane_g7_copy1

0x33a6,	// (0x00030040) bg_set_opt_pane_cp2_copy1

0x361c,	// (0x000302b6) setting_slider_graphic_pane_g1_copy1

0x1dea,	// (0x0002ea84) setting_slider_graphic_pane_t1_copy1

0x1df9,	// (0x0002ea93) setting_slider_graphic_pane_t2_copy1

0x1e08,	// (0x0002eaa2) slider_set_pane_cp_copy1

0x1e18,	// (0x0002eab2) input_focus_pane_cp1_copy1

0x1e21,	// (0x0002eabb) list_set_text_pane_copy1

0x1e29,	// (0x0002eac3) setting_text_pane_g1_copy1

0xf3b4,	// (0x0003c04e) set_text_pane_t1_copy1

0x1e18,	// (0x0002eab2) input_focus_pane_cp2_copy1

0x1e29,	// (0x0002eac3) setting_code_pane_g1_copy1

0x1e32,	// (0x0002eacc) setting_code_pane_t1_copy1

0x1e40,	// (0x0002eada) list_set_graphic_pane_copy1

0x33a6,	// (0x00030040) bg_set_opt_pane_cp4_copy1

0x1e54,	// (0x0002eaee) list_set_graphic_pane_g1_copy1_ParamLimits

0x1e54,	// (0x0002eaee) list_set_graphic_pane_g1_copy1

0x1e60,	// (0x0002eafa) list_set_graphic_pane_g2_copy1

0x740a,	// (0x000340a4) list_set_graphic_pane_t1_copy1_ParamLimits

0x740a,	// (0x000340a4) list_set_graphic_pane_t1_copy1

0xcfcf,	// (0x00039c69) rs_clock_indi_pane_g1

0x1e68,	// (0x0002eb02) rs_clock_indi_pane_t1

0x1e76,	// (0x0002eb10) rs_indi_pane

0x1e7e,	// (0x0002eb18) rs_indi_pane_g1

0x1e87,	// (0x0002eb21) rs_indi_pane_g2

0x1b57,	// (0x0002e7f1) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x0003cb82) rs_indi_pane_g

0x768f,	// (0x00034329) bg_popup_preview_window_pane_cp03

0x1e90,	// (0x0002eb2a) popup_fep_tooltip_window_t1

0xdb00,	// (0x0003a79a) popup_note2_window_g2_ParamLimits

0xdb00,	// (0x0003a79a) popup_note2_window_g2

0x0001,

0xfc8d,	// (0x0003c927) popup_note2_window_g_ParamLimits

0xfc8d,	// (0x0003c927) popup_note2_window_g

0xdf7b,	// (0x0003ac15) bg_popup_sub_pane_cp11_ParamLimits

0xdf88,	// (0x0003ac22) cell_ai3_links_pane_g1_ParamLimits

0xdf9f,	// (0x0003ac39) cell_ai3_links_pane_t1

0xf3b4,	// (0x0003c04e) set_text_pane_t1_copy1_ParamLimits

0x75b6,	// (0x00034250) cell_graphic_popup_pane_cp2_ParamLimits

0x75b6,	// (0x00034250) cell_graphic_popup_pane_cp2

0x1e9e,	// (0x0002eb38) cell_graphic_popup_pane_g1_cp2

0x3c15,	// (0x000308af) cell_graphic_popup_pane_g2_cp2

0x1ea6,	// (0x0002eb40) cell_graphic_popup_pane_g3_cp2

0x1eae,	// (0x0002eb48) cell_graphic_popup_pane_t2_cp2

0x3c26,	// (0x000308c0) grid_highlight_pane_cp3_cp2

0x7029,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6ce8,	// (0x00033982) main_tmo_pane_ParamLimits

0x02c2,	// (0x0002cf5c) popup_tmo_big_image_note_window

0x1426,	// (0x0002e0c0) cell_ai5_widget_list_pane

0x142e,	// (0x0002e0c8) cell_ai5_widget_lrg_icon_pane

0x1a95,	// (0x0002e72f) tmo_note_info_pane_t1_ParamLimits

0x1aaa,	// (0x0002e744) tmo_note_info_pane_t2_ParamLimits

0x1abf,	// (0x0002e759) tmo_note_info_pane_t3_ParamLimits

0x1ad4,	// (0x0002e76e) tmo_note_info_pane_t4_ParamLimits

0x1ae6,	// (0x0002e780) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0003cb70) tmo_note_info_pane_t_ParamLimits

0x1c1a,	// (0x0002e8b4) settings_container_pane_ParamLimits

0x1e10,	// (0x0002eaaa) indicator_popup_pane_cp5

0x1e10,	// (0x0002eaaa) indicator_popup_pane_cp6

0x1e40,	// (0x0002eada) list_set_graphic_pane_copy1_ParamLimits

0x324f,	// (0x0002fee9) bg_popup_window_pane_cp23

0x1ebc,	// (0x0002eb56) popup_tmo_big_image_note_window_g1

0x1ec5,	// (0x0002eb5f) popup_tmo_big_image_note_window_t1

0x1ed3,	// (0x0002eb6d) popup_tmo_big_image_note_window_t2

0x1ee1,	// (0x0002eb7b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0003cb89) popup_tmo_big_image_note_window_t

0x1eef,	// (0x0002eb89) cell_ai5_widget_lrg_icon_pane_g1

0x1ef7,	// (0x0002eb91) cell_ai5_widget_lrg_icon_pane_t1

0x1f05,	// (0x0002eb9f) cell_ai5_widget_list_row_pane_ParamLimits

0x1f05,	// (0x0002eb9f) cell_ai5_widget_list_row_pane

0x1f1e,	// (0x0002ebb8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1f1e,	// (0x0002ebb8) cell_ai5_widget_list_row_pane_g1

0x1f2b,	// (0x0002ebc5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1f2b,	// (0x0002ebc5) cell_ai5_widget_list_row_pane_t1

0x1f43,	// (0x0002ebdd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1f43,	// (0x0002ebdd) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x0003cb90) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0003cb90) cell_ai5_widget_list_row_pane_t

0xa1c7,	// (0x00036e61) main_fep_vtchi_ss_pane

0x1f55,	// (0x0002ebef) popup_fep_char_pre_window

0x1f5d,	// (0x0002ebf7) popup_fep_ituss_window

0x1f66,	// (0x0002ec00) popup_fep_vkbss_window

0x1f6f,	// (0x0002ec09) grid_vkbss_keypad_pane_ParamLimits

0x1f6f,	// (0x0002ec09) grid_vkbss_keypad_pane

0x1f7f,	// (0x0002ec19) ituss_keypad_pane

0x1f87,	// (0x0002ec21) aid_vkbss_key_offset_ParamLimits

0x1f87,	// (0x0002ec21) aid_vkbss_key_offset

0x1f96,	// (0x0002ec30) cell_vkbss_key_pane_ParamLimits

0x1f96,	// (0x0002ec30) cell_vkbss_key_pane

0x1fac,	// (0x0002ec46) bg_cell_vkbss_key_g1_ParamLimits

0x1fac,	// (0x0002ec46) bg_cell_vkbss_key_g1

0x1fb8,	// (0x0002ec52) cell_vkbss_key_3p_pane_ParamLimits

0x1fb8,	// (0x0002ec52) cell_vkbss_key_3p_pane

0x1fcc,	// (0x0002ec66) cell_vkbss_key_g1_ParamLimits

0x1fcc,	// (0x0002ec66) cell_vkbss_key_g1

0x1fe0,	// (0x0002ec7a) cell_vkbss_key_t1_ParamLimits

0x1fe0,	// (0x0002ec7a) cell_vkbss_key_t1

0x200b,	// (0x0002eca5) cell_ituss_key_pane_ParamLimits

0x200b,	// (0x0002eca5) cell_ituss_key_pane

0x201a,	// (0x0002ecb4) bg_cell_ituss_key_g1_ParamLimits

0x201a,	// (0x0002ecb4) bg_cell_ituss_key_g1

0x2026,	// (0x0002ecc0) cell_ituss_key_pane_g1_ParamLimits

0x2026,	// (0x0002ecc0) cell_ituss_key_pane_g1

0x2032,	// (0x0002eccc) cell_ituss_key_pane_g2_ParamLimits

0x2032,	// (0x0002eccc) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x0003cb95) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x0003cb95) cell_ituss_key_pane_g

0x2045,	// (0x0002ecdf) cell_ituss_key_t1_ParamLimits

0x2045,	// (0x0002ecdf) cell_ituss_key_t1

0x2063,	// (0x0002ecfd) cell_ituss_key_t2_ParamLimits

0x2063,	// (0x0002ecfd) cell_ituss_key_t2

0x2082,	// (0x0002ed1c) cell_ituss_key_t3_ParamLimits

0x2082,	// (0x0002ed1c) cell_ituss_key_t3

0x20a1,	// (0x0002ed3b) cell_ituss_key_t4_ParamLimits

0x20a1,	// (0x0002ed3b) cell_ituss_key_t4

0x0003,

0xff00,	// (0x0003cb9a) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0003cb9a) cell_ituss_key_t

0x20c0,	// (0x0002ed5a) cell_vkbss_key_3p_pane_g1

0x20c8,	// (0x0002ed62) cell_vkbss_key_3p_pane_g2

0x20d0,	// (0x0002ed6a) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x0003cba3) cell_vkbss_key_3p_pane_g

0x324f,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp02

0x20d8,	// (0x0002ed72) popup_fep_char_pre_window_t1

0x13fc,	// (0x0002e096) main_ai5_sk_pane

0x1b60,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1b6c,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1b80,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1b8f,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0003cb7b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1ba2,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6ce8,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x20e7,	// (0x0002ed81) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

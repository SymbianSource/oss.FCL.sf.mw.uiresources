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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002c96d };

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
0x9665,	// (0x00035fd2) Screen

0x9671,	// (0x00035fde) application_window_ParamLimits

0x9671,	// (0x00035fde) application_window

0x4e64,	// (0x000317d1) screen_g1

0x96cd,	// (0x0003603a) area_bottom_pane_ParamLimits

0x96cd,	// (0x0003603a) area_bottom_pane

0x978d,	// (0x000360fa) area_top_pane_ParamLimits

0x978d,	// (0x000360fa) area_top_pane

0x9821,	// (0x0003618e) main_pane_ParamLimits

0x9821,	// (0x0003618e) main_pane

0x4e6e,	// (0x000317db) misc_graphics

0xbe2e,	// (0x0003879b) battery_pane_ParamLimits

0xbe2e,	// (0x0003879b) battery_pane

0x6be5,	// (0x00033552) bg_status_flat_pane_g8

0x6bed,	// (0x0003355a) bg_status_flat_pane_g9

0x634b,	// (0x00032cb8) context_pane_ParamLimits

0x634b,	// (0x00032cb8) context_pane

0xbf62,	// (0x000388cf) navi_pane_ParamLimits

0xbf62,	// (0x000388cf) navi_pane

0xbfce,	// (0x0003893b) signal_pane_ParamLimits

0xbfce,	// (0x0003893b) signal_pane

0x0008,

0xf8b7,	// (0x0003c224) bg_status_flat_pane_g

0xc033,	// (0x000389a0) status_pane_g1_ParamLimits

0xc033,	// (0x000389a0) status_pane_g1

0xc047,	// (0x000389b4) status_pane_g2_ParamLimits

0xc047,	// (0x000389b4) status_pane_g2

0x63b0,	// (0x00032d1d) status_pane_g3_ParamLimits

0x63b0,	// (0x00032d1d) status_pane_g3

0x0004,

0xf7e5,	// (0x0003c152) status_pane_g_ParamLimits

0xf7e5,	// (0x0003c152) status_pane_g

0xc053,	// (0x000389c0) title_pane_ParamLimits

0xc053,	// (0x000389c0) title_pane

0xc090,	// (0x000389fd) uni_indicator_pane_ParamLimits

0xc090,	// (0x000389fd) uni_indicator_pane

0x6176,	// (0x00032ae3) bg_list_pane_ParamLimits

0x6176,	// (0x00032ae3) bg_list_pane

0xa606,	// (0x00036f73) find_pane

0xb946,	// (0x000382b3) listscroll_app_pane_ParamLimits

0xb946,	// (0x000382b3) listscroll_app_pane

0x6196,	// (0x00032b03) listscroll_form_pane

0xa60e,	// (0x00036f7b) listscroll_gen_pane_ParamLimits

0xa60e,	// (0x00036f7b) listscroll_gen_pane

0x6196,	// (0x00032b03) listscroll_set_pane

0x9eba,	// (0x00036827) main_idle_act_pane

0x5f5c,	// (0x000328c9) main_idle_trad_pane

0x5f5c,	// (0x000328c9) main_list_empty_pane

0x5671,	// (0x00031fde) main_midp_pane

0x61b0,	// (0x00032b1d) main_pane_g1_ParamLimits

0x61b0,	// (0x00032b1d) main_pane_g1

0xb952,	// (0x000382bf) popup_ai_message_window_ParamLimits

0xb952,	// (0x000382bf) popup_ai_message_window

0xb9d0,	// (0x0003833d) popup_fep_china_uni_window_ParamLimits

0xb9d0,	// (0x0003833d) popup_fep_china_uni_window

0x61f0,	// (0x00032b5d) popup_fep_japan_candidate_window_ParamLimits

0x61f0,	// (0x00032b5d) popup_fep_japan_candidate_window

0x620e,	// (0x00032b7b) popup_fep_japan_predictive_window_ParamLimits

0x620e,	// (0x00032b7b) popup_fep_japan_predictive_window

0xba2a,	// (0x00038397) popup_find_window

0xba37,	// (0x000383a4) popup_grid_graphic_window_ParamLimits

0xba37,	// (0x000383a4) popup_grid_graphic_window

0x623e,	// (0x00032bab) popup_large_graphic_colour_window

0xba5d,	// (0x000383ca) popup_menu_window_ParamLimits

0xba5d,	// (0x000383ca) popup_menu_window

0xbc17,	// (0x00038584) popup_note_image_window

0xbc03,	// (0x00038570) popup_note_wait_window_ParamLimits

0xbc03,	// (0x00038570) popup_note_wait_window

0xbc03,	// (0x00038570) popup_note_window_ParamLimits

0xbc03,	// (0x00038570) popup_note_window

0xbc6d,	// (0x000385da) popup_query_code_window_ParamLimits

0xbc6d,	// (0x000385da) popup_query_code_window

0x6264,	// (0x00032bd1) popup_query_data_code_window_ParamLimits

0x6264,	// (0x00032bd1) popup_query_data_code_window

0xbc81,	// (0x000385ee) popup_query_data_window_ParamLimits

0xbc81,	// (0x000385ee) popup_query_data_window

0xbc99,	// (0x00038606) popup_query_sat_info_window_ParamLimits

0xbc99,	// (0x00038606) popup_query_sat_info_window

0xbcd2,	// (0x0003863f) popup_snote_single_graphic_window_ParamLimits

0xbcd2,	// (0x0003863f) popup_snote_single_graphic_window

0xbcd2,	// (0x0003863f) popup_snote_single_text_window_ParamLimits

0xbcd2,	// (0x0003863f) popup_snote_single_text_window

0x627b,	// (0x00032be8) popup_sub_window_general

0x62c1,	// (0x00032c2e) popup_window_general_ParamLimits

0x62c1,	// (0x00032c2e) popup_window_general

0x62d6,	// (0x00032c43) power_save_pane

0xa4b3,	// (0x00036e20) control_pane_g1_ParamLimits

0xa4b3,	// (0x00036e20) control_pane_g1

0xa4dc,	// (0x00036e49) control_pane_g2_ParamLimits

0xa4dc,	// (0x00036e49) control_pane_g2

0x6150,	// (0x00032abd) control_pane_g3_ParamLimits

0x6150,	// (0x00032abd) control_pane_g3

0x0007,

0xf7cd,	// (0x0003c13a) control_pane_g_ParamLimits

0xf7cd,	// (0x0003c13a) control_pane_g

0xa521,	// (0x00036e8e) control_pane_t1_ParamLimits

0xa521,	// (0x00036e8e) control_pane_t1

0xa573,	// (0x00036ee0) control_pane_t2_ParamLimits

0xa573,	// (0x00036ee0) control_pane_t2

0x0002,

0xf7de,	// (0x0003c14b) control_pane_t_ParamLimits

0xf7de,	// (0x0003c14b) control_pane_t

0x6071,	// (0x000329de) navi_navi_volume_pane_cp1

0x607a,	// (0x000329e7) status_small_icon_pane

0x6082,	// (0x000329ef) status_small_pane_g1_ParamLimits

0x6082,	// (0x000329ef) status_small_pane_g1

0x60b6,	// (0x00032a23) status_small_pane_g2_ParamLimits

0x60b6,	// (0x00032a23) status_small_pane_g2

0x60c2,	// (0x00032a2f) status_small_pane_g3_ParamLimits

0x60c2,	// (0x00032a2f) status_small_pane_g3

0x60ce,	// (0x00032a3b) status_small_pane_g4_ParamLimits

0x60ce,	// (0x00032a3b) status_small_pane_g4

0x60da,	// (0x00032a47) status_small_pane_g5_ParamLimits

0x60da,	// (0x00032a47) status_small_pane_g5

0x60e9,	// (0x00032a56) status_small_pane_g6_ParamLimits

0x60e9,	// (0x00032a56) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003c129) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003c129) status_small_pane_g

0x6119,	// (0x00032a86) status_small_pane_t1

0x613c,	// (0x00032aa9) status_small_wait_pane_ParamLimits

0x613c,	// (0x00032aa9) status_small_wait_pane

0xa1c8,	// (0x00036b35) aid_levels_signal_ParamLimits

0xa1c8,	// (0x00036b35) aid_levels_signal

0xa1da,	// (0x00036b47) signal_pane_g1_ParamLimits

0xa1da,	// (0x00036b47) signal_pane_g1

0xa1ef,	// (0x00036b5c) signal_pane_g2_ParamLimits

0xa1ef,	// (0x00036b5c) signal_pane_g2

0x0001,

0xf751,	// (0x0003c0be) signal_pane_g_ParamLimits

0xf751,	// (0x0003c0be) signal_pane_g

0x5aa0,	// (0x0003240d) context_pane_g1

0x9a52,	// (0x000363bf) title_pane_g1

0x9a7c,	// (0x000363e9) title_pane_t1

0x4e84,	// (0x000317f1) title_pane_t2

0x4eaa,	// (0x00031817) title_pane_t3

0x0002,

0xf59b,	// (0x0003bf08) title_pane_t

0xc0a8,	// (0x00038a15) aid_levels_battery_ParamLimits

0xc0a8,	// (0x00038a15) aid_levels_battery

0xc0bc,	// (0x00038a29) battery_pane_g1_ParamLimits

0xc0bc,	// (0x00038a29) battery_pane_g1

0xc0d2,	// (0x00038a3f) battery_pane_g2_ParamLimits

0xc0d2,	// (0x00038a3f) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003c15d) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003c15d) battery_pane_g

0xc364,	// (0x00038cd1) uni_indicator_pane_g1

0xc379,	// (0x00038ce6) uni_indicator_pane_g2

0xc38f,	// (0x00038cfc) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0003c2cc) uni_indicator_pane_g

0x5dcc,	// (0x00032739) navi_icon_pane_ParamLimits

0x5dcc,	// (0x00032739) navi_icon_pane

0x5d13,	// (0x00032680) navi_midp_pane

0x5de8,	// (0x00032755) navi_navi_pane

0x5df2,	// (0x0003275f) navi_text_pane_ParamLimits

0x5df2,	// (0x0003275f) navi_text_pane

0x4e64,	// (0x000317d1) status_small_wait_pane_g1

0x518e,	// (0x00031afb) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0003c2c7) status_small_wait_pane_g

0xc309,	// (0x00038c76) navi_navi_icon_text_pane

0xc311,	// (0x00038c7e) navi_navi_pane_g1_ParamLimits

0xc311,	// (0x00038c7e) navi_navi_pane_g1

0xc323,	// (0x00038c90) navi_navi_pane_g2_ParamLimits

0xc323,	// (0x00038c90) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0003c295) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0003c295) navi_navi_pane_g

0x7168,	// (0x00033ad5) navi_navi_tabs_pane

0xc335,	// (0x00038ca2) navi_navi_text_pane

0xc309,	// (0x00038c76) navi_navi_volume_pane

0xc2f4,	// (0x00038c61) navi_text_pane_t1

0xc2e5,	// (0x00038c52) navi_icon_pane_g1

0x70a9,	// (0x00033a16) navi_navi_text_pane_t1

0xa8a9,	// (0x00037216) navi_navi_volume_pane_g1

0xa8b1,	// (0x0003721e) volume_small_pane

0xc257,	// (0x00038bc4) navi_navi_icon_text_pane_g1

0xc25f,	// (0x00038bcc) navi_navi_icon_text_pane_t1

0x5de8,	// (0x00032755) navi_tabs_2_long_pane

0x5de8,	// (0x00032755) navi_tabs_2_pane

0x5de8,	// (0x00032755) navi_tabs_3_long_pane

0x5de8,	// (0x00032755) navi_tabs_3_pane

0x5de8,	// (0x00032755) navi_tabs_4_pane

0xa889,	// (0x000371f6) tabs_2_active_pane_ParamLimits

0xa889,	// (0x000371f6) tabs_2_active_pane

0xa899,	// (0x00037206) tabs_2_passive_pane_ParamLimits

0xa899,	// (0x00037206) tabs_2_passive_pane

0xa857,	// (0x000371c4) tabs_3_active_pane_ParamLimits

0xa857,	// (0x000371c4) tabs_3_active_pane

0xa867,	// (0x000371d4) tabs_3_passive_pane_ParamLimits

0xa867,	// (0x000371d4) tabs_3_passive_pane

0xa878,	// (0x000371e5) tabs_3_passive_pane_cp_ParamLimits

0xa878,	// (0x000371e5) tabs_3_passive_pane_cp

0xa813,	// (0x00037180) tabs_4_active_pane_ParamLimits

0xa813,	// (0x00037180) tabs_4_active_pane

0xa824,	// (0x00037191) tabs_4_passive_pane_ParamLimits

0xa824,	// (0x00037191) tabs_4_passive_pane

0xa835,	// (0x000371a2) tabs_4_passive_pane_cp_ParamLimits

0xa835,	// (0x000371a2) tabs_4_passive_pane_cp

0xa846,	// (0x000371b3) tabs_4_passive_pane_cp2_ParamLimits

0xa846,	// (0x000371b3) tabs_4_passive_pane_cp2

0xa7ef,	// (0x0003715c) tabs_2_long_active_pane_ParamLimits

0xa7ef,	// (0x0003715c) tabs_2_long_active_pane

0xa801,	// (0x0003716e) tabs_2_long_passive_pane_ParamLimits

0xa801,	// (0x0003716e) tabs_2_long_passive_pane

0xa7aa,	// (0x00037117) tabs_3_long_active_pane_ParamLimits

0xa7aa,	// (0x00037117) tabs_3_long_active_pane

0xa7c3,	// (0x00037130) tabs_3_long_passive_pane_ParamLimits

0xa7c3,	// (0x00037130) tabs_3_long_passive_pane

0xa7d6,	// (0x00037143) tabs_3_long_passive_pane_cp_ParamLimits

0xa7d6,	// (0x00037143) tabs_3_long_passive_pane_cp

0xa750,	// (0x000370bd) volume_small_pane_g1

0xa759,	// (0x000370c6) volume_small_pane_g2

0xa762,	// (0x000370cf) volume_small_pane_g3

0xa76b,	// (0x000370d8) volume_small_pane_g4

0xa774,	// (0x000370e1) volume_small_pane_g5

0xa77d,	// (0x000370ea) volume_small_pane_g6

0xa786,	// (0x000370f3) volume_small_pane_g7

0xa78f,	// (0x000370fc) volume_small_pane_g8

0xa798,	// (0x00037105) volume_small_pane_g9

0xa7a1,	// (0x0003710e) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0003c261) volume_small_pane_g

0x4eca,	// (0x00031837) bg_active_tab_pane_cp2_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp2

0x9ae4,	// (0x00036451) tabs_3_active_pane_g1

0x9aec,	// (0x00036459) tabs_3_active_pane_t1

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp2_ParamLimits

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp2

0x9ae4,	// (0x00036451) tabs_3_passive_pane_g1

0x9aec,	// (0x00036459) tabs_3_passive_pane_t1

0x4eca,	// (0x00031837) bg_active_tab_pane_cp3_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp3

0x9afe,	// (0x0003646b) tabs_4_active_pane_g1

0x9b06,	// (0x00036473) tabs_4_active_pane_t1

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp3_ParamLimits

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp3

0x9afe,	// (0x0003646b) tabs_4_1_passive_pane_g1

0x9b06,	// (0x00036473) tabs_4_1_passive_pane_t1

0x5671,	// (0x00031fde) list_highlight_pane_cp2

0xc407,	// (0x00038d74) list_set_pane_ParamLimits

0xc407,	// (0x00038d74) list_set_pane

0xc4a9,	// (0x00038e16) main_pane_set_t1_ParamLimits

0xc4a9,	// (0x00038e16) main_pane_set_t1

0xc4c9,	// (0x00038e36) main_pane_set_t2_ParamLimits

0xc4c9,	// (0x00038e36) main_pane_set_t2

0xc4dd,	// (0x00038e4a) main_pane_set_t3_ParamLimits

0xc4dd,	// (0x00038e4a) main_pane_set_t3

0xc4ef,	// (0x00038e5c) main_pane_set_t4_ParamLimits

0xc4ef,	// (0x00038e5c) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0003c331) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0003c331) main_pane_set_t

0xc501,	// (0x00038e6e) setting_code_pane

0xc50b,	// (0x00038e78) setting_slider_graphic_pane

0xc50b,	// (0x00038e78) setting_slider_pane

0xc50b,	// (0x00038e78) setting_text_pane

0xc50b,	// (0x00038e78) setting_volume_pane

0x9b18,	// (0x00036485) volume_set_pane

0x4eca,	// (0x00031837) bg_set_opt_pane_cp

0x9b20,	// (0x0003648d) setting_slider_pane_t1

0x9b39,	// (0x000364a6) setting_slider_pane_t2

0x9b52,	// (0x000364bf) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003bf0f) setting_slider_pane_t

0x9b69,	// (0x000364d6) slider_set_pane

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp2

0x4ee1,	// (0x0003184e) setting_slider_graphic_pane_g1

0x9b7f,	// (0x000364ec) setting_slider_graphic_pane_t1

0x9b8e,	// (0x000364fb) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003bf16) setting_slider_graphic_pane_t

0x9b9d,	// (0x0003650a) slider_set_pane_cp

0x4e6e,	// (0x000317db) input_focus_pane_cp1

0x75cf,	// (0x00033f3c) list_set_text_pane

0x4e64,	// (0x000317d1) setting_text_pane_g1

0x4e6e,	// (0x000317db) input_focus_pane_cp2

0x4e64,	// (0x000317d1) setting_code_pane_g1

0x4eea,	// (0x00031857) setting_code_pane_t1

0x8841,	// (0x000351ae) set_text_pane_t1_ParamLimits

0x8841,	// (0x000351ae) set_text_pane_t1

0x5581,	// (0x00031eee) set_opt_bg_pane_g1

0x5589,	// (0x00031ef6) set_opt_bg_pane_g2

0x75af,	// (0x00033f1c) set_opt_bg_pane_g3

0x5599,	// (0x00031f06) set_opt_bg_pane_g4

0x55a1,	// (0x00031f0e) set_opt_bg_pane_g5

0x55a9,	// (0x00031f16) set_opt_bg_pane_g6

0x75b7,	// (0x00033f24) set_opt_bg_pane_g7

0x75bf,	// (0x00033f2c) set_opt_bg_pane_g8

0x75c7,	// (0x00033f34) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0003c31e) set_opt_bg_pane_g

0x75a2,	// (0x00033f0f) slider_set_pane_g1

0xa91e,	// (0x0003728b) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0003c30f) slider_set_pane_g

0xa8ba,	// (0x00037227) volume_set_pane_g1

0xa8c2,	// (0x0003722f) volume_set_pane_g2

0xa8ca,	// (0x00037237) volume_set_pane_g3

0xa8d2,	// (0x0003723f) volume_set_pane_g4

0xa8da,	// (0x00037247) volume_set_pane_g5

0xa8e2,	// (0x0003724f) volume_set_pane_g6

0xa8ea,	// (0x00037257) volume_set_pane_g7

0xa8f2,	// (0x0003725f) volume_set_pane_g8

0xa8fa,	// (0x00037267) volume_set_pane_g9

0xa902,	// (0x0003726f) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0003c2e7) volume_set_pane_g

0x9ba5,	// (0x00036512) indicator_pane_ParamLimits

0x9ba5,	// (0x00036512) indicator_pane

0x9bb1,	// (0x0003651e) main_idle_pane_g2_ParamLimits

0x9bb1,	// (0x0003651e) main_idle_pane_g2

0x9bd9,	// (0x00036546) main_pane_idle_g1_ParamLimits

0x9bd9,	// (0x00036546) main_pane_idle_g1

0x4ef8,	// (0x00031865) popup_clock_digital_analogue_window_ParamLimits

0x4ef8,	// (0x00031865) popup_clock_digital_analogue_window

0x9be6,	// (0x00036553) soft_indicator_pane_ParamLimits

0x9be6,	// (0x00036553) soft_indicator_pane

0x9bf2,	// (0x0003655f) wallpaper_pane_ParamLimits

0x9bf2,	// (0x0003655f) wallpaper_pane

0x4e64,	// (0x000317d1) wallpaper_pane_g1

0x9bfe,	// (0x0003656b) indicator_pane_g1_ParamLimits

0x9bfe,	// (0x0003656b) indicator_pane_g1

0x7716,	// (0x00034083) navi_navi_icon_text_pane_srt_g1

0x4f26,	// (0x00031893) soft_indicator_pane_t1

0x4f40,	// (0x000318ad) aid_ps_area_pane

0x9c0a,	// (0x00036577) aid_ps_clock_pane

0x4f51,	// (0x000318be) aid_ps_indicator_pane

0x4f5d,	// (0x000318ca) indicator_ps_pane_ParamLimits

0x4f5d,	// (0x000318ca) indicator_ps_pane

0x4f6c,	// (0x000318d9) power_save_pane_g1_ParamLimits

0x4f6c,	// (0x000318d9) power_save_pane_g1

0x4f78,	// (0x000318e5) power_save_pane_g2_ParamLimits

0x4f78,	// (0x000318e5) power_save_pane_g2

0x9681,	// (0x00035fee) aid_navinavi_width_pane

0x4f40,	// (0x000318ad) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003bf1b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003bf1b) power_save_pane_g

0x4f86,	// (0x000318f3) power_save_pane_t1_ParamLimits

0x4f86,	// (0x000318f3) power_save_pane_t1

0x9c0a,	// (0x00036577) aid_ps_clock_pane_ParamLimits

0x4f51,	// (0x000318be) aid_ps_indicator_pane_ParamLimits

0x4f98,	// (0x00031905) power_save_pane_t4_ParamLimits

0x4f98,	// (0x00031905) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003bf20) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003bf20) power_save_pane_t

0x4fc2,	// (0x0003192f) power_save_t3_ParamLimits

0x4fc2,	// (0x0003192f) power_save_t3

0x4fad,	// (0x0003191a) power_save_t2_ParamLimits

0x4fad,	// (0x0003191a) power_save_t2

0x4fd7,	// (0x00031944) indicator_ps_pane_g1

0x9c18,	// (0x00036585) ai_gene_pane_ParamLimits

0x9c18,	// (0x00036585) ai_gene_pane

0x9c24,	// (0x00036591) ai_links_pane_ParamLimits

0x9c24,	// (0x00036591) ai_links_pane

0x9c30,	// (0x0003659d) indicator_pane_cp1_ParamLimits

0x9c30,	// (0x0003659d) indicator_pane_cp1

0x9c3c,	// (0x000365a9) main_pane_idle_g1_cp_ParamLimits

0x9c3c,	// (0x000365a9) main_pane_idle_g1_cp

0x4fe0,	// (0x0003194d) popup_ai_links_title_window

0x9c48,	// (0x000365b5) soft_indicator_pane_cp1_ParamLimits

0x9c48,	// (0x000365b5) soft_indicator_pane_cp1

0x73d8,	// (0x00033d45) ai_links_pane_g1

0x73e1,	// (0x00033d4e) grid_ai_links_pane

0xc359,	// (0x00038cc6) ai_gene_pane_1

0x73c6,	// (0x00033d33) ai_gene_pane_2

0x73cf,	// (0x00033d3c) list_highlight_pane_cp4

0xc33d,	// (0x00038caa) cell_ai_link_pane_ParamLimits

0xc33d,	// (0x00038caa) cell_ai_link_pane

0x73be,	// (0x00033d2b) cell_ai_link_pane_g1

0x518e,	// (0x00031afb) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0003c2c2) cell_ai_link_pane_g

0x4e6e,	// (0x000317db) grid_highlight_cp2

0x4e6e,	// (0x000317db) bg_popup_sub_pane_cp1

0x4ff7,	// (0x00031964) popup_ai_links_title_window_t1

0x730c,	// (0x00033c79) ai_gene_pane_1_g1_ParamLimits

0x730c,	// (0x00033c79) ai_gene_pane_1_g1

0x7318,	// (0x00033c85) ai_gene_pane_1_g2_ParamLimits

0x7318,	// (0x00033c85) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0003c2b8) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0003c2b8) ai_gene_pane_1_g

0x7325,	// (0x00033c92) ai_gene_pane_1_t1_ParamLimits

0x7325,	// (0x00033c92) ai_gene_pane_1_t1

0x7359,	// (0x00033cc6) grid_ai_soft_ind_pane

0x72f7,	// (0x00033c64) ai_gene_pane_2_t1_ParamLimits

0x72f7,	// (0x00033c64) ai_gene_pane_2_t1

0x9c54,	// (0x000365c1) main_pane_empty_t1_ParamLimits

0x9c54,	// (0x000365c1) main_pane_empty_t1

0x9c6c,	// (0x000365d9) main_pane_empty_t2_ParamLimits

0x9c6c,	// (0x000365d9) main_pane_empty_t2

0x9c81,	// (0x000365ee) main_pane_empty_t3_ParamLimits

0x9c81,	// (0x000365ee) main_pane_empty_t3

0x9c93,	// (0x00036600) main_pane_empty_t4_ParamLimits

0x9c93,	// (0x00036600) main_pane_empty_t4

0x9ca5,	// (0x00036612) main_pane_empty_t5_ParamLimits

0x9ca5,	// (0x00036612) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003bf25) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003bf25) main_pane_empty_t

0x55d2,	// (0x00031f3f) bg_popup_window_pane_ParamLimits

0x55d2,	// (0x00031f3f) bg_popup_window_pane

0x70b7,	// (0x00033a24) find_popup_pane_cp2_ParamLimits

0x70b7,	// (0x00033a24) find_popup_pane_cp2

0x70c3,	// (0x00033a30) heading_pane_ParamLimits

0x70c3,	// (0x00033a30) heading_pane

0x4e6e,	// (0x000317db) bg_popup_sub_pane

0xc279,	// (0x00038be6) bg_popup_window_pane_g1_ParamLimits

0xc279,	// (0x00038be6) bg_popup_window_pane_g1

0xc285,	// (0x00038bf2) bg_popup_window_pane_g2_ParamLimits

0xc285,	// (0x00038bf2) bg_popup_window_pane_g2

0xc291,	// (0x00038bfe) bg_popup_window_pane_g3_ParamLimits

0xc291,	// (0x00038bfe) bg_popup_window_pane_g3

0xc29d,	// (0x00038c0a) bg_popup_window_pane_g4_ParamLimits

0xc29d,	// (0x00038c0a) bg_popup_window_pane_g4

0xc2a9,	// (0x00038c16) bg_popup_window_pane_g5_ParamLimits

0xc2a9,	// (0x00038c16) bg_popup_window_pane_g5

0xc2b5,	// (0x00038c22) bg_popup_window_pane_g6_ParamLimits

0xc2b5,	// (0x00038c22) bg_popup_window_pane_g6

0xc2c1,	// (0x00038c2e) bg_popup_window_pane_g7_ParamLimits

0xc2c1,	// (0x00038c2e) bg_popup_window_pane_g7

0xc2cd,	// (0x00038c3a) bg_popup_window_pane_g8_ParamLimits

0xc2cd,	// (0x00038c3a) bg_popup_window_pane_g8

0xc2d9,	// (0x00038c46) bg_popup_window_pane_g9_ParamLimits

0xc2d9,	// (0x00038c46) bg_popup_window_pane_g9

0x709d,	// (0x00033a0a) bg_popup_window_pane_g10_ParamLimits

0x709d,	// (0x00033a0a) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0003c280) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0003c280) bg_popup_window_pane_g

0x7054,	// (0x000339c1) bg_popup_heading_pane_ParamLimits

0x7054,	// (0x000339c1) bg_popup_heading_pane

0xaa5c,	// (0x000373c9) tabs_4_passive_pane_cp_srt_ParamLimits

0xaa5c,	// (0x000373c9) tabs_4_passive_pane_cp_srt

0xaa6e,	// (0x000373db) tabs_4_passive_pane_srt_ParamLimits

0x7068,	// (0x000339d5) heading_pane_g2

0xaa6e,	// (0x000373db) tabs_4_passive_pane_srt

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp3_srt

0x7070,	// (0x000339dd) heading_pane_t1_ParamLimits

0x7070,	// (0x000339dd) heading_pane_t1

0x7087,	// (0x000339f4) heading_pane_t2_ParamLimits

0x7087,	// (0x000339f4) heading_pane_t2

0x0001,

0xf90e,	// (0x0003c27b) heading_pane_t_ParamLimits

0xf90e,	// (0x0003c27b) heading_pane_t

0x6bad,	// (0x0003351a) bg_popup_heading_pane_g1

0x6c3e,	// (0x000335ab) bg_popup_heading_pane_g2

0x6c48,	// (0x000335b5) bg_popup_heading_pane_g3

0x6c52,	// (0x000335bf) bg_popup_heading_pane_g4

0x6c5c,	// (0x000335c9) bg_popup_heading_pane_g5

0x6c66,	// (0x000335d3) bg_popup_heading_pane_g6

0x6c6e,	// (0x000335db) bg_popup_heading_pane_g7

0x6c76,	// (0x000335e3) bg_popup_heading_pane_g8

0x6c80,	// (0x000335ed) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0003c237) bg_popup_heading_pane_g

0x64a4,	// (0x00032e11) bg_popup_sub_pane_g1

0x64b4,	// (0x00032e21) bg_popup_sub_pane_g2

0x64ac,	// (0x00032e19) bg_popup_sub_pane_g3

0x64c4,	// (0x00032e31) bg_popup_sub_pane_g4

0x64bc,	// (0x00032e29) bg_popup_sub_pane_g5

0x64cc,	// (0x00032e39) bg_popup_sub_pane_g6

0x64d4,	// (0x00032e41) bg_popup_sub_pane_g7

0x64e4,	// (0x00032e51) bg_popup_sub_pane_g8

0x64dc,	// (0x00032e49) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0003c211) bg_popup_sub_pane_g

0x4ebc,	// (0x00031829) bg_popup_window_pane_cp5_ParamLimits

0x4ebc,	// (0x00031829) bg_popup_window_pane_cp5

0x5014,	// (0x00031981) popup_note_window_g1_ParamLimits

0x5014,	// (0x00031981) popup_note_window_g1

0x5020,	// (0x0003198d) popup_note_window_t1_ParamLimits

0x5020,	// (0x0003198d) popup_note_window_t1

0x5032,	// (0x0003199f) popup_note_window_t2_ParamLimits

0x5032,	// (0x0003199f) popup_note_window_t2

0x5044,	// (0x000319b1) popup_note_window_t3_ParamLimits

0x5044,	// (0x000319b1) popup_note_window_t3

0x5056,	// (0x000319c3) popup_note_window_t4_ParamLimits

0x5056,	// (0x000319c3) popup_note_window_t4

0x507e,	// (0x000319eb) popup_note_window_t5_ParamLimits

0x507e,	// (0x000319eb) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003bf30) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003bf30) popup_note_window_t

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp6_ParamLimits

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp6

0x6b21,	// (0x0003348e) popup_note_image_window_g1_ParamLimits

0x6b21,	// (0x0003348e) popup_note_image_window_g1

0x6b2d,	// (0x0003349a) popup_note_image_window_g2_ParamLimits

0x6b2d,	// (0x0003349a) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0003c205) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0003c205) popup_note_image_window_g

0x6b46,	// (0x000334b3) popup_note_image_window_t1_ParamLimits

0x6b46,	// (0x000334b3) popup_note_image_window_t1

0x6b5f,	// (0x000334cc) popup_note_image_window_t2_ParamLimits

0x6b5f,	// (0x000334cc) popup_note_image_window_t2

0x6b78,	// (0x000334e5) popup_note_image_window_t3_ParamLimits

0x6b78,	// (0x000334e5) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0003c20a) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0003c20a) popup_note_image_window_t

0x69fe,	// (0x0003336b) bg_popup_window_pane_cp7_ParamLimits

0x69fe,	// (0x0003336b) bg_popup_window_pane_cp7

0x6a2e,	// (0x0003339b) popup_note_wait_window_g1_ParamLimits

0x6a2e,	// (0x0003339b) popup_note_wait_window_g1

0x6a3a,	// (0x000333a7) popup_note_wait_window_g2_ParamLimits

0x6a3a,	// (0x000333a7) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0003c1f3) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0003c1f3) popup_note_wait_window_g

0x6a52,	// (0x000333bf) popup_note_wait_window_t1_ParamLimits

0x6a52,	// (0x000333bf) popup_note_wait_window_t1

0x6a79,	// (0x000333e6) popup_note_wait_window_t2_ParamLimits

0x6a79,	// (0x000333e6) popup_note_wait_window_t2

0x6a96,	// (0x00033403) popup_note_wait_window_t3_ParamLimits

0x6a96,	// (0x00033403) popup_note_wait_window_t3

0x6aa9,	// (0x00033416) popup_note_wait_window_t4_ParamLimits

0x6aa9,	// (0x00033416) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0003c1fa) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0003c1fa) popup_note_wait_window_t

0x6ace,	// (0x0003343b) wait_bar_pane_ParamLimits

0x6ace,	// (0x0003343b) wait_bar_pane

0x4e6e,	// (0x000317db) wait_anim_pane

0x4e6e,	// (0x000317db) wait_border_pane

0x4e64,	// (0x000317d1) wait_anim_pane_g1

0x4e64,	// (0x000317d1) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003c0b9) wait_anim_pane_g

0x69a2,	// (0x0003330f) wait_border_pane_g1

0x69ad,	// (0x0003331a) wait_border_pane_g2

0x69b6,	// (0x00033323) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0003c1ec) wait_border_pane_g

0x6904,	// (0x00033271) bg_popup_window_pane_cp16_ParamLimits

0x6904,	// (0x00033271) bg_popup_window_pane_cp16

0x6912,	// (0x0003327f) indicator_popup_pane_cp4_ParamLimits

0x6912,	// (0x0003327f) indicator_popup_pane_cp4

0x6926,	// (0x00033293) popup_query_data_window_t1_ParamLimits

0x6926,	// (0x00033293) popup_query_data_window_t1

0x6938,	// (0x000332a5) popup_query_data_window_t2_ParamLimits

0x6938,	// (0x000332a5) popup_query_data_window_t2

0x6951,	// (0x000332be) popup_query_data_window_t3_ParamLimits

0x6951,	// (0x000332be) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0003c1e5) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0003c1e5) popup_query_data_window_t

0x696b,	// (0x000332d8) query_popup_data_pane_ParamLimits

0x696b,	// (0x000332d8) query_popup_data_pane

0x697f,	// (0x000332ec) query_popup_data_pane_cp1_ParamLimits

0x697f,	// (0x000332ec) query_popup_data_pane_cp1

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp10_ParamLimits

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp10

0x6867,	// (0x000331d4) indicator_popup_pane_ParamLimits

0x6867,	// (0x000331d4) indicator_popup_pane

0x50f9,	// (0x00031a66) popup_query_code_window_t1_ParamLimits

0x50f9,	// (0x00031a66) popup_query_code_window_t1

0x687f,	// (0x000331ec) popup_query_code_window_t2_ParamLimits

0x687f,	// (0x000331ec) popup_query_code_window_t2

0x68bd,	// (0x0003322a) popup_query_code_window_t3_ParamLimits

0x68bd,	// (0x0003322a) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0003c1de) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0003c1de) popup_query_code_window_t

0x68ec,	// (0x00033259) query_popup_pane_ParamLimits

0x68ec,	// (0x00033259) query_popup_pane

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp15_ParamLimits

0x50a2,	// (0x00031a0f) bg_popup_window_pane_cp15

0x50c0,	// (0x00031a2d) indicator_popup_pane_cp1_ParamLimits

0x50c0,	// (0x00031a2d) indicator_popup_pane_cp1

0x50d3,	// (0x00031a40) indicator_popup_pane_cp2_ParamLimits

0x50d3,	// (0x00031a40) indicator_popup_pane_cp2

0x50e6,	// (0x00031a53) popup_query_data_code_window_g1_ParamLimits

0x50e6,	// (0x00031a53) popup_query_data_code_window_g1

0x50f9,	// (0x00031a66) popup_query_data_code_window_t1_ParamLimits

0x50f9,	// (0x00031a66) popup_query_data_code_window_t1

0x510b,	// (0x00031a78) popup_query_data_code_window_t2_ParamLimits

0x510b,	// (0x00031a78) popup_query_data_code_window_t2

0x511d,	// (0x00031a8a) popup_query_data_code_window_t3_ParamLimits

0x511d,	// (0x00031a8a) popup_query_data_code_window_t3

0x5133,	// (0x00031aa0) popup_query_data_code_window_t4_ParamLimits

0x5133,	// (0x00031aa0) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003bf3b) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003bf3b) popup_query_data_code_window_t

0x5d88,	// (0x000326f5) list_single_midp_graphic_pane_g3

0x514b,	// (0x00031ab8) query_popup_data_pane_cp2_ParamLimits

0x515e,	// (0x00031acb) query_popup_pane_cp2_ParamLimits

0x515e,	// (0x00031acb) query_popup_pane_cp2

0x4e6e,	// (0x000317db) bg_popup_window_pane_cp11

0x683b,	// (0x000331a8) heading_pane_cp5

0x51ec,	// (0x00031b59) listscroll_popup_info_pane

0x4e6e,	// (0x000317db) input_focus_pane_cp3

0x5171,	// (0x00031ade) query_popup_pane_t1

0x517f,	// (0x00031aec) list_popup_info_pane_ParamLimits

0x517f,	// (0x00031aec) list_popup_info_pane

0x518e,	// (0x00031afb) listscroll_popup_info_pane_g1

0x5196,	// (0x00031b03) scroll_pane_cp7

0x51a0,	// (0x00031b0d) popup_info_list_pane_t1_ParamLimits

0x51a0,	// (0x00031b0d) popup_info_list_pane_t1

0x51ba,	// (0x00031b27) popup_info_list_pane_t2_ParamLimits

0x51ba,	// (0x00031b27) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003bf44) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003bf44) popup_info_list_pane_t

0x4e6e,	// (0x000317db) bg_popup_window_pane_cp12

0x7730,	// (0x0003409d) find_popup_pane

0x4eca,	// (0x00031837) bg_popup_window_pane_cp3

0x51d4,	// (0x00031b41) heading_pane_cp3

0x51e0,	// (0x00031b4d) listscroll_popup_graphic_pane

0x4e6e,	// (0x000317db) bg_popup_window_pane_cp4

0x9d09,	// (0x00036676) heading_pane_cp4

0x51ec,	// (0x00031b59) listscroll_popup_colour_pane

0x51f4,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x51f4,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane

0x9d13,	// (0x00036680) grid_large_graphic_colour_popup_pane_ParamLimits

0x9d13,	// (0x00036680) grid_large_graphic_colour_popup_pane

0x5208,	// (0x00031b75) listscroll_popup_colour_pane_g1_ParamLimits

0x5208,	// (0x00031b75) listscroll_popup_colour_pane_g1

0x521f,	// (0x00031b8c) listscroll_popup_colour_pane_g2_ParamLimits

0x521f,	// (0x00031b8c) listscroll_popup_colour_pane_g2

0x5236,	// (0x00031ba3) listscroll_popup_colour_pane_g3_ParamLimits

0x5236,	// (0x00031ba3) listscroll_popup_colour_pane_g3

0x9d37,	// (0x000366a4) listscroll_popup_colour_pane_g4_ParamLimits

0x9d37,	// (0x000366a4) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003bf49) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003bf49) listscroll_popup_colour_pane_g

0x5246,	// (0x00031bb3) scroll_pane_cp6_ParamLimits

0x5246,	// (0x00031bb3) scroll_pane_cp6

0x9d46,	// (0x000366b3) cell_large_graphic_colour_popup_pane_ParamLimits

0x9d46,	// (0x000366b3) cell_large_graphic_colour_popup_pane

0x5258,	// (0x00031bc5) cell_large_graphic_colour_none_popup_pane_t1

0x4e6e,	// (0x000317db) grid_highlight_pane_cp5

0x5267,	// (0x00031bd4) cell_large_graphic_colour_popup_pane_g1

0x526f,	// (0x00031bdc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003bf52) cell_large_graphic_colour_popup_pane_g

0x5277,	// (0x00031be4) cell_large_graphic_colour_popup_pane_g2_copy1

0x5280,	// (0x00031bed) grid_highlight_pane_cp4

0x5288,	// (0x00031bf5) bg_popup_window_pane_cp8_ParamLimits

0x5288,	// (0x00031bf5) bg_popup_window_pane_cp8

0x52a3,	// (0x00031c10) popup_snote_single_text_window_g1_ParamLimits

0x52a3,	// (0x00031c10) popup_snote_single_text_window_g1

0x52b5,	// (0x00031c22) popup_snote_single_text_window_t1_ParamLimits

0x52b5,	// (0x00031c22) popup_snote_single_text_window_t1

0x52c8,	// (0x00031c35) popup_snote_single_text_window_t2_ParamLimits

0x52c8,	// (0x00031c35) popup_snote_single_text_window_t2

0x52db,	// (0x00031c48) popup_snote_single_text_window_t3_ParamLimits

0x52db,	// (0x00031c48) popup_snote_single_text_window_t3

0x5314,	// (0x00031c81) popup_snote_single_text_window_t4_ParamLimits

0x5314,	// (0x00031c81) popup_snote_single_text_window_t4

0x5348,	// (0x00031cb5) popup_snote_single_text_window_t5_ParamLimits

0x5348,	// (0x00031cb5) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003bf57) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003bf57) popup_snote_single_text_window_t

0x5377,	// (0x00031ce4) bg_popup_window_pane_cp9_ParamLimits

0x5377,	// (0x00031ce4) bg_popup_window_pane_cp9

0x52a3,	// (0x00031c10) popup_snote_single_graphic_window_g1_ParamLimits

0x52a3,	// (0x00031c10) popup_snote_single_graphic_window_g1

0x5385,	// (0x00031cf2) popup_snote_single_graphic_window_g2_ParamLimits

0x5385,	// (0x00031cf2) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003bf62) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003bf62) popup_snote_single_graphic_window_g

0x5391,	// (0x00031cfe) popup_snote_single_graphic_window_t1_ParamLimits

0x5391,	// (0x00031cfe) popup_snote_single_graphic_window_t1

0x53a4,	// (0x00031d11) popup_snote_single_graphic_window_t2_ParamLimits

0x53a4,	// (0x00031d11) popup_snote_single_graphic_window_t2

0x53b7,	// (0x00031d24) popup_snote_single_graphic_window_t3_ParamLimits

0x53b7,	// (0x00031d24) popup_snote_single_graphic_window_t3

0x53f0,	// (0x00031d5d) popup_snote_single_graphic_window_t4_ParamLimits

0x53f0,	// (0x00031d5d) popup_snote_single_graphic_window_t4

0x5424,	// (0x00031d91) popup_snote_single_graphic_window_t5_ParamLimits

0x5424,	// (0x00031d91) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003bf67) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003bf67) popup_snote_single_graphic_window_t

0x76b4,	// (0x00034021) grid_graphic_popup_pane_ParamLimits

0x76b4,	// (0x00034021) grid_graphic_popup_pane

0x76e0,	// (0x0003404d) listscroll_popup_graphic_pane_g1_ParamLimits

0x76e0,	// (0x0003404d) listscroll_popup_graphic_pane_g1

0xc5d7,	// (0x00038f44) listscroll_popup_graphic_pane_g2_ParamLimits

0xc5d7,	// (0x00038f44) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0003c35b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0003c35b) listscroll_popup_graphic_pane_g

0x7424,	// (0x00033d91) scroll_pane_cp5

0xc598,	// (0x00038f05) cell_graphic_popup_pane_ParamLimits

0xc598,	// (0x00038f05) cell_graphic_popup_pane

0x767f,	// (0x00033fec) cell_graphic_popup_pane_g1

0x7687,	// (0x00033ff4) cell_graphic_popup_pane_g2

0x5277,	// (0x00031be4) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0003c354) cell_graphic_popup_pane_g

0x7690,	// (0x00033ffd) cell_graphic_popup_pane_t2

0x5280,	// (0x00031bed) grid_highlight_pane_cp3

0x5465,	// (0x00031dd2) list_gen_pane_ParamLimits

0x5465,	// (0x00031dd2) list_gen_pane

0x548d,	// (0x00031dfa) scroll_pane

0xc54b,	// (0x00038eb8) bg_list_pane_g1_ParamLimits

0xc54b,	// (0x00038eb8) bg_list_pane_g1

0x762e,	// (0x00033f9b) bg_list_pane_g2_ParamLimits

0x762e,	// (0x00033f9b) bg_list_pane_g2

0x7641,	// (0x00033fae) bg_list_pane_g3_ParamLimits

0x7641,	// (0x00033fae) bg_list_pane_g3

0x7653,	// (0x00033fc0) bg_list_pane_g4_ParamLimits

0x7653,	// (0x00033fc0) bg_list_pane_g4

0xc566,	// (0x00038ed3) bg_list_pane_g5_ParamLimits

0xc566,	// (0x00038ed3) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0003c349) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0003c349) bg_list_pane_g

0xa982,	// (0x000372ef) list_double2_graphic_large_graphic_pane_ParamLimits

0xa982,	// (0x000372ef) list_double2_graphic_large_graphic_pane

0xa982,	// (0x000372ef) list_double2_graphic_pane_ParamLimits

0xa982,	// (0x000372ef) list_double2_graphic_pane

0xa982,	// (0x000372ef) list_double2_large_graphic_pane_ParamLimits

0xa982,	// (0x000372ef) list_double2_large_graphic_pane

0xa982,	// (0x000372ef) list_double2_pane_ParamLimits

0xa982,	// (0x000372ef) list_double2_pane

0xa982,	// (0x000372ef) list_double_graphic_heading_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_graphic_heading_pane

0xa982,	// (0x000372ef) list_double_graphic_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_graphic_pane

0xa982,	// (0x000372ef) list_double_heading_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_heading_pane

0xa982,	// (0x000372ef) list_double_large_graphic_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_large_graphic_pane

0xa982,	// (0x000372ef) list_double_number_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_number_pane

0xa982,	// (0x000372ef) list_double_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_pane

0xa982,	// (0x000372ef) list_double_time_pane_ParamLimits

0xa982,	// (0x000372ef) list_double_time_pane

0xa982,	// (0x000372ef) list_setting_number_pane_ParamLimits

0xa982,	// (0x000372ef) list_setting_number_pane

0xa982,	// (0x000372ef) list_setting_pane_ParamLimits

0xa982,	// (0x000372ef) list_setting_pane

0xa9c6,	// (0x00037333) list_single_2graphic_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_2graphic_pane

0xa9c6,	// (0x00037333) list_single_graphic_heading_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_graphic_heading_pane

0xa9c6,	// (0x00037333) list_single_graphic_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_graphic_pane

0xa9c6,	// (0x00037333) list_single_heading_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_heading_pane

0xaa12,	// (0x0003737f) list_single_large_graphic_pane_ParamLimits

0xaa12,	// (0x0003737f) list_single_large_graphic_pane

0xa9c6,	// (0x00037333) list_single_number_heading_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_number_heading_pane

0xa9c6,	// (0x00037333) list_single_number_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_number_pane

0xa9c6,	// (0x00037333) list_single_pane_ParamLimits

0xa9c6,	// (0x00037333) list_single_pane

0x4e6e,	// (0x000317db) list_highlight_pane_cp1

0x5ecd,	// (0x0003283a) list_single_pane_g1_ParamLimits

0x5ecd,	// (0x0003283a) list_single_pane_g1

0x8866,	// (0x000351d3) list_single_pane_g2_ParamLimits

0x8866,	// (0x000351d3) list_single_pane_g2

0x0001,

0xf616,	// (0x0003bf83) list_single_pane_g_ParamLimits

0xf616,	// (0x0003bf83) list_single_pane_g

0x90ff,	// (0x00035a6c) list_single_pane_t1_ParamLimits

0x90ff,	// (0x00035a6c) list_single_pane_t1

0x5ecd,	// (0x0003283a) list_single_number_pane_g1_ParamLimits

0x5ecd,	// (0x0003283a) list_single_number_pane_g1

0x8866,	// (0x000351d3) list_single_number_pane_g2_ParamLimits

0x8866,	// (0x000351d3) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003bf83) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003bf83) list_single_number_pane_g

0x90a7,	// (0x00035a14) list_single_number_pane_t1_ParamLimits

0x90a7,	// (0x00035a14) list_single_number_pane_t1

0x90bd,	// (0x00035a2a) list_single_number_pane_t2_ParamLimits

0x90bd,	// (0x00035a2a) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0003c30a) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0003c30a) list_single_number_pane_t

0x885a,	// (0x000351c7) list_single_graphic_pane_g1_ParamLimits

0x885a,	// (0x000351c7) list_single_graphic_pane_g1

0x5ecd,	// (0x0003283a) list_single_graphic_pane_g2_ParamLimits

0x5ecd,	// (0x0003283a) list_single_graphic_pane_g2

0x8866,	// (0x000351d3) list_single_graphic_pane_g3_ParamLimits

0x8866,	// (0x000351d3) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003bf72) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003bf72) list_single_graphic_pane_g

0x8872,	// (0x000351df) list_single_graphic_pane_t1_ParamLimits

0x8872,	// (0x000351df) list_single_graphic_pane_t1

0x8888,	// (0x000351f5) list_single_heading_pane_g1_ParamLimits

0x8888,	// (0x000351f5) list_single_heading_pane_g1

0x8866,	// (0x000351d3) list_single_heading_pane_g2_ParamLimits

0x8866,	// (0x000351d3) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003bf79) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003bf79) list_single_heading_pane_g

0x889b,	// (0x00035208) list_single_heading_pane_t1_ParamLimits

0x889b,	// (0x00035208) list_single_heading_pane_t1

0x9d6f,	// (0x000366dc) list_single_heading_pane_t2_ParamLimits

0x9d6f,	// (0x000366dc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003bf7e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003bf7e) list_single_heading_pane_t

0x5ecd,	// (0x0003283a) list_single_number_heading_pane_g1_ParamLimits

0x5ecd,	// (0x0003283a) list_single_number_heading_pane_g1

0x8866,	// (0x000351d3) list_single_number_heading_pane_g2_ParamLimits

0x8866,	// (0x000351d3) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003bf83) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003bf83) list_single_number_heading_pane_g

0x88b1,	// (0x0003521e) list_single_number_heading_pane_t1_ParamLimits

0x88b1,	// (0x0003521e) list_single_number_heading_pane_t1

0x88c7,	// (0x00035234) list_single_number_heading_pane_t2_ParamLimits

0x88c7,	// (0x00035234) list_single_number_heading_pane_t2

0x88d9,	// (0x00035246) list_single_number_heading_pane_t3_ParamLimits

0x88d9,	// (0x00035246) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003bf88) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003bf88) list_single_number_heading_pane_t

0x88eb,	// (0x00035258) list_single_graphic_heading_pane_g1_ParamLimits

0x88eb,	// (0x00035258) list_single_graphic_heading_pane_g1

0x8901,	// (0x0003526e) list_single_graphic_heading_pane_g4_ParamLimits

0x8901,	// (0x0003526e) list_single_graphic_heading_pane_g4

0x8866,	// (0x000351d3) list_single_graphic_heading_pane_g5_ParamLimits

0x8866,	// (0x000351d3) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003bf8f) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003bf8f) list_single_graphic_heading_pane_g

0x88b1,	// (0x0003521e) list_single_graphic_heading_pane_t1_ParamLimits

0x88b1,	// (0x0003521e) list_single_graphic_heading_pane_t1

0x8912,	// (0x0003527f) list_single_graphic_heading_pane_t2_ParamLimits

0x8912,	// (0x0003527f) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003bf96) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003bf96) list_single_graphic_heading_pane_t

0x9d81,	// (0x000366ee) list_single_large_graphic_pane_g1_ParamLimits

0x9d81,	// (0x000366ee) list_single_large_graphic_pane_g1

0x9d8d,	// (0x000366fa) list_single_large_graphic_pane_g2_ParamLimits

0x9d8d,	// (0x000366fa) list_single_large_graphic_pane_g2

0x9d99,	// (0x00036706) list_single_large_graphic_pane_g3_ParamLimits

0x9d99,	// (0x00036706) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003bf9b) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003bf9b) list_single_large_graphic_pane_g

0x69ad,	// (0x0003331a) wait_border_pane_g2_copy1

0x9da5,	// (0x00036712) list_single_large_graphic_pane_g4_cp2

0x892a,	// (0x00035297) list_single_large_graphic_pane_t1_ParamLimits

0x892a,	// (0x00035297) list_single_large_graphic_pane_t1

0x9dad,	// (0x0003671a) list_double_pane_g1_ParamLimits

0x9dad,	// (0x0003671a) list_double_pane_g1

0x9db9,	// (0x00036726) list_double_pane_g2_ParamLimits

0x9db9,	// (0x00036726) list_double_pane_g2

0x0001,

0xf635,	// (0x0003bfa2) list_double_pane_g_ParamLimits

0xf635,	// (0x0003bfa2) list_double_pane_g

0x8940,	// (0x000352ad) list_double_pane_t1_ParamLimits

0x8940,	// (0x000352ad) list_double_pane_t1

0x8956,	// (0x000352c3) list_double_pane_t2_ParamLimits

0x8956,	// (0x000352c3) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003bfa7) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003bfa7) list_double_pane_t

0x8968,	// (0x000352d5) list_double2_pane_g1_ParamLimits

0x8968,	// (0x000352d5) list_double2_pane_g1

0x8979,	// (0x000352e6) list_double2_pane_g2_ParamLimits

0x8979,	// (0x000352e6) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003bfac) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003bfac) list_double2_pane_g

0x8985,	// (0x000352f2) list_double2_pane_t1_ParamLimits

0x8985,	// (0x000352f2) list_double2_pane_t1

0x899b,	// (0x00035308) list_double2_pane_t2_ParamLimits

0x899b,	// (0x00035308) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003bfb1) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003bfb1) list_double2_pane_t

0x9dad,	// (0x0003671a) list_double_number_pane_g1_ParamLimits

0x9dad,	// (0x0003671a) list_double_number_pane_g1

0x9db9,	// (0x00036726) list_double_number_pane_g2_ParamLimits

0x9db9,	// (0x00036726) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003bfa2) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003bfa2) list_double_number_pane_g

0x89ad,	// (0x0003531a) list_double_number_pane_t1_ParamLimits

0x89ad,	// (0x0003531a) list_double_number_pane_t1

0x89bf,	// (0x0003532c) list_double_number_pane_t2_ParamLimits

0x89bf,	// (0x0003532c) list_double_number_pane_t2

0x89d5,	// (0x00035342) list_double_number_pane_t3_ParamLimits

0x89d5,	// (0x00035342) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003bfb6) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003bfb6) list_double_number_pane_t

0x89e7,	// (0x00035354) list_double_graphic_pane_g1_ParamLimits

0x89e7,	// (0x00035354) list_double_graphic_pane_g1

0x9dc5,	// (0x00036732) list_double_graphic_pane_g2_ParamLimits

0x9dc5,	// (0x00036732) list_double_graphic_pane_g2

0x9dd4,	// (0x00036741) list_double_graphic_pane_g3_ParamLimits

0x9dd4,	// (0x00036741) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003bfbd) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003bfbd) list_double_graphic_pane_g

0x89ff,	// (0x0003536c) list_double_graphic_pane_t1_ParamLimits

0x89ff,	// (0x0003536c) list_double_graphic_pane_t1

0x8a15,	// (0x00035382) list_double_graphic_pane_t2_ParamLimits

0x8a15,	// (0x00035382) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003bfc6) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003bfc6) list_double_graphic_pane_t

0x8a27,	// (0x00035394) list_double2_graphic_pane_g1_ParamLimits

0x8a27,	// (0x00035394) list_double2_graphic_pane_g1

0x9de0,	// (0x0003674d) list_double2_graphic_pane_g2_ParamLimits

0x9de0,	// (0x0003674d) list_double2_graphic_pane_g2

0x9dec,	// (0x00036759) list_double2_graphic_pane_g3_ParamLimits

0x9dec,	// (0x00036759) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003bfcb) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003bfcb) list_double2_graphic_pane_g

0x8a33,	// (0x000353a0) list_double2_graphic_pane_t1_ParamLimits

0x8a33,	// (0x000353a0) list_double2_graphic_pane_t1

0x8a49,	// (0x000353b6) list_double2_graphic_pane_t2_ParamLimits

0x8a49,	// (0x000353b6) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003bfd2) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003bfd2) list_double2_graphic_pane_t

0x8a5b,	// (0x000353c8) list_double_large_graphic_pane_g1_ParamLimits

0x8a5b,	// (0x000353c8) list_double_large_graphic_pane_g1

0x8a86,	// (0x000353f3) list_double_large_graphic_pane_g2_ParamLimits

0x8a86,	// (0x000353f3) list_double_large_graphic_pane_g2

0x9db9,	// (0x00036726) list_double_large_graphic_pane_g3_ParamLimits

0x9db9,	// (0x00036726) list_double_large_graphic_pane_g3

0x8a9c,	// (0x00035409) list_double_large_graphic_pane_g4_ParamLimits

0x8a9c,	// (0x00035409) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003bfd7) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003bfd7) list_double_large_graphic_pane_g

0x8aaf,	// (0x0003541c) list_double_large_graphic_pane_t1_ParamLimits

0x8aaf,	// (0x0003541c) list_double_large_graphic_pane_t1

0x8ac8,	// (0x00035435) list_double_large_graphic_pane_t2_ParamLimits

0x8ac8,	// (0x00035435) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003bfe2) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003bfe2) list_double_large_graphic_pane_t

0x9e0d,	// (0x0003677a) list_double2_large_graphic_pane_g1_ParamLimits

0x9e0d,	// (0x0003677a) list_double2_large_graphic_pane_g1

0x9e19,	// (0x00036786) list_double2_large_graphic_pane_g2_ParamLimits

0x9e19,	// (0x00036786) list_double2_large_graphic_pane_g2

0x9dec,	// (0x00036759) list_double2_large_graphic_pane_g3_ParamLimits

0x9dec,	// (0x00036759) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003bfe7) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003bfe7) list_double2_large_graphic_pane_g

0x8ada,	// (0x00035447) list_double2_large_graphic_pane_t1_ParamLimits

0x8ada,	// (0x00035447) list_double2_large_graphic_pane_t1

0x8af0,	// (0x0003545d) list_double2_large_graphic_pane_t2_ParamLimits

0x8af0,	// (0x0003545d) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003bfee) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003bfee) list_double2_large_graphic_pane_t

0x8b02,	// (0x0003546f) list_double_heading_pane_g1_ParamLimits

0x8b02,	// (0x0003546f) list_double_heading_pane_g1

0x9e2a,	// (0x00036797) list_double_heading_pane_g2_ParamLimits

0x9e2a,	// (0x00036797) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003bff3) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003bff3) list_double_heading_pane_g

0x8b13,	// (0x00035480) list_double_heading_pane_t1_ParamLimits

0x8b13,	// (0x00035480) list_double_heading_pane_t1

0x899b,	// (0x00035308) list_double_heading_pane_t2_ParamLimits

0x899b,	// (0x00035308) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003bff8) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003bff8) list_double_heading_pane_t

0x8b29,	// (0x00035496) list_double_graphic_heading_pane_g1_ParamLimits

0x8b29,	// (0x00035496) list_double_graphic_heading_pane_g1

0x8b02,	// (0x0003546f) list_double_graphic_heading_pane_g2_ParamLimits

0x8b02,	// (0x0003546f) list_double_graphic_heading_pane_g2

0x9e2a,	// (0x00036797) list_double_graphic_heading_pane_g3_ParamLimits

0x9e2a,	// (0x00036797) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003bffd) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003bffd) list_double_graphic_heading_pane_g

0x8b35,	// (0x000354a2) list_double_graphic_heading_pane_t1_ParamLimits

0x8b35,	// (0x000354a2) list_double_graphic_heading_pane_t1

0x8a49,	// (0x000353b6) list_double_graphic_heading_pane_t2_ParamLimits

0x8a49,	// (0x000353b6) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003c004) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003c004) list_double_graphic_heading_pane_t

0x8b4b,	// (0x000354b8) list_double_time_pane_g1_ParamLimits

0x8b4b,	// (0x000354b8) list_double_time_pane_g1

0x8b5c,	// (0x000354c9) list_double_time_pane_g2_ParamLimits

0x8b5c,	// (0x000354c9) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003c009) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003c009) list_double_time_pane_g

0x8b68,	// (0x000354d5) list_double_time_pane_t1_ParamLimits

0x8b68,	// (0x000354d5) list_double_time_pane_t1

0x8b7e,	// (0x000354eb) list_double_time_pane_t2_ParamLimits

0x8b7e,	// (0x000354eb) list_double_time_pane_t2

0x8b90,	// (0x000354fd) list_double_time_pane_t3_ParamLimits

0x8b90,	// (0x000354fd) list_double_time_pane_t3

0x8ba2,	// (0x0003550f) list_double_time_pane_t4_ParamLimits

0x8ba2,	// (0x0003550f) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003c00e) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003c00e) list_double_time_pane_t

0x8bb4,	// (0x00035521) list_setting_pane_g1_ParamLimits

0x8bb4,	// (0x00035521) list_setting_pane_g1

0x8bc0,	// (0x0003552d) list_setting_pane_g2_ParamLimits

0x8bc0,	// (0x0003552d) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003c017) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003c017) list_setting_pane_g

0x8bcc,	// (0x00035539) list_setting_pane_t1_ParamLimits

0x8bcc,	// (0x00035539) list_setting_pane_t1

0x8be6,	// (0x00035553) list_setting_pane_t2_ParamLimits

0x8be6,	// (0x00035553) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003c01c) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003c01c) list_setting_pane_t

0x8c23,	// (0x00035590) set_value_pane_cp_ParamLimits

0x8c23,	// (0x00035590) set_value_pane_cp

0x8c2f,	// (0x0003559c) list_setting_number_pane_g1_ParamLimits

0x8c2f,	// (0x0003559c) list_setting_number_pane_g1

0x8c3b,	// (0x000355a8) list_setting_number_pane_g2_ParamLimits

0x8c3b,	// (0x000355a8) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003c023) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003c023) list_setting_number_pane_g

0x8c47,	// (0x000355b4) list_setting_number_pane_t1_ParamLimits

0x8c47,	// (0x000355b4) list_setting_number_pane_t1

0x8c60,	// (0x000355cd) list_setting_number_pane_t2_ParamLimits

0x8c60,	// (0x000355cd) list_setting_number_pane_t2

0x8c7a,	// (0x000355e7) list_setting_number_pane_t3_ParamLimits

0x8c7a,	// (0x000355e7) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003c028) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003c028) list_setting_number_pane_t

0x8c23,	// (0x00035590) set_value_pane_ParamLimits

0x8c23,	// (0x00035590) set_value_pane

0x54c1,	// (0x00031e2e) bg_set_opt_pane_ParamLimits

0x54c1,	// (0x00031e2e) bg_set_opt_pane

0x8cbd,	// (0x0003562a) set_value_pane_t1

0x54e2,	// (0x00031e4f) slider_set_pane_cp3

0x54eb,	// (0x00031e58) volume_small_pane_cp

0x54f4,	// (0x00031e61) list_form_gen_pane

0x54fd,	// (0x00031e6a) scroll_pane_cp8

0x8cd3,	// (0x00035640) form_field_data_pane_ParamLimits

0x8cd3,	// (0x00035640) form_field_data_pane

0x8cf3,	// (0x00035660) form_field_data_wide_pane_ParamLimits

0x8cf3,	// (0x00035660) form_field_data_wide_pane

0x8d14,	// (0x00035681) form_field_popup_pane_ParamLimits

0x8d14,	// (0x00035681) form_field_popup_pane

0x8d32,	// (0x0003569f) form_field_popup_wide_pane_ParamLimits

0x8d32,	// (0x0003569f) form_field_popup_wide_pane

0x8d4f,	// (0x000356bc) form_field_slider_pane_ParamLimits

0x8d4f,	// (0x000356bc) form_field_slider_pane

0x8d62,	// (0x000356cf) form_field_slider_wide_pane_ParamLimits

0x8d62,	// (0x000356cf) form_field_slider_wide_pane

0x550e,	// (0x00031e7b) data_form_pane

0x8d7f,	// (0x000356ec) form_field_data_pane_t1

0x551a,	// (0x00031e87) input_focus_pane

0x5528,	// (0x00031e95) data_form_wide_pane

0x8da5,	// (0x00035712) form_field_data_wide_pane_t1

0x5295,	// (0x00031c02) input_focus_pane_cp6

0x8dc7,	// (0x00035734) form_field_popup_pane_t1

0x551a,	// (0x00031e87) input_focus_pane_cp7

0x5554,	// (0x00031ec1) list_form_pane

0x8de9,	// (0x00035756) form_field_popup_wide_pane_t1

0x551a,	// (0x00031e87) input_focus_pane_cp8

0x5560,	// (0x00031ecd) list_form_wide_pane

0x8e06,	// (0x00035773) form_field_slider_pane_t1_ParamLimits

0x8e06,	// (0x00035773) form_field_slider_pane_t1

0x8e1e,	// (0x0003578b) form_field_slider_pane_t2_ParamLimits

0x8e1e,	// (0x0003578b) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003c038) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003c038) form_field_slider_pane_t

0x4ebc,	// (0x00031829) input_focus_pane_cp9_ParamLimits

0x4ebc,	// (0x00031829) input_focus_pane_cp9

0x8e33,	// (0x000357a0) slider_cont_pane_ParamLimits

0x8e33,	// (0x000357a0) slider_cont_pane

0x556f,	// (0x00031edc) form_field_slider_wide_pane_t1_ParamLimits

0x556f,	// (0x00031edc) form_field_slider_wide_pane_t1

0x8e47,	// (0x000357b4) form_field_slider_wide_pane_t2_ParamLimits

0x8e47,	// (0x000357b4) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003c03d) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003c03d) form_field_slider_wide_pane_t

0x4ebc,	// (0x00031829) input_focus_pane_cp10_ParamLimits

0x4ebc,	// (0x00031829) input_focus_pane_cp10

0x8e59,	// (0x000357c6) slider_cont_pane_cp1_ParamLimits

0x8e59,	// (0x000357c6) slider_cont_pane_cp1

0x8e6d,	// (0x000357da) slider_form_pane_cp

0x5581,	// (0x00031eee) input_focus_pane_g1

0x5589,	// (0x00031ef6) input_focus_pane_g2

0x5591,	// (0x00031efe) input_focus_pane_g3

0x5599,	// (0x00031f06) input_focus_pane_g4

0x55a1,	// (0x00031f0e) input_focus_pane_g5

0x55a9,	// (0x00031f16) input_focus_pane_g6

0x55b1,	// (0x00031f1e) input_focus_pane_g7

0x55b9,	// (0x00031f26) input_focus_pane_g8

0x55c1,	// (0x00031f2e) input_focus_pane_g9

0x4e64,	// (0x000317d1) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003c042) input_focus_pane_g

0x69b6,	// (0x00033323) wait_border_pane_g3_copy1

0x8e75,	// (0x000357e2) data_form_pane_t1

0x4e64,	// (0x000317d1) wait_anim_pane_g1_copy1

0x90cf,	// (0x00035a3c) data_form_wide_pane_t1

0x8e90,	// (0x000357fd) list_form_graphic_pane_cp_ParamLimits

0x8e90,	// (0x000357fd) list_form_graphic_pane_cp

0x75d7,	// (0x00033f44) slider_form_pane_g1

0x75e0,	// (0x00033f4d) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0003c33a) slider_form_pane_g

0x8ea7,	// (0x00035814) list_form_graphic_pane_ParamLimits

0x8ea7,	// (0x00035814) list_form_graphic_pane

0x8ec1,	// (0x0003582e) list_form_graphic_pane_g1

0x8ec9,	// (0x00035836) list_form_graphic_pane_t1_ParamLimits

0x8ec9,	// (0x00035836) list_form_graphic_pane_t1

0x4eca,	// (0x00031837) list_highlight_pane_cp5_ParamLimits

0x4eca,	// (0x00031837) list_highlight_pane_cp5

0x8ede,	// (0x0003584b) find_pane_g1

0x55c9,	// (0x00031f36) input_find_pane

0x8ee7,	// (0x00035854) input_find_pane_g1_ParamLimits

0x8ee7,	// (0x00035854) input_find_pane_g1

0x8ef3,	// (0x00035860) input_find_pane_t1_ParamLimits

0x8ef3,	// (0x00035860) input_find_pane_t1

0x8f08,	// (0x00035875) input_find_pane_t2_ParamLimits

0x8f08,	// (0x00035875) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003c057) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003c057) input_find_pane_t

0x55d2,	// (0x00031f3f) input_focus_pane_cp5_ParamLimits

0x55d2,	// (0x00031f3f) input_focus_pane_cp5

0x9e42,	// (0x000367af) bg_popup_window_pane_cp2_ParamLimits

0x9e42,	// (0x000367af) bg_popup_window_pane_cp2

0x9e4f,	// (0x000367bc) listscroll_menu_pane_ParamLimits

0x9e4f,	// (0x000367bc) listscroll_menu_pane

0x9e5b,	// (0x000367c8) popup_submenu_window_ParamLimits

0x9e5b,	// (0x000367c8) popup_submenu_window

0x55e0,	// (0x00031f4d) find_popup_pane_g1

0x55e8,	// (0x00031f55) input_popup_find_pane_cp

0x55d2,	// (0x00031f3f) input_focus_pane_cp4_ParamLimits

0x55d2,	// (0x00031f3f) input_focus_pane_cp4

0x55f2,	// (0x00031f5f) input_popup_find_pane_t1_ParamLimits

0x55f2,	// (0x00031f5f) input_popup_find_pane_t1

0x4e6e,	// (0x000317db) bg_popup_sub_pane_cp

0x5620,	// (0x00031f8d) listscroll_popup_sub_pane

0x5628,	// (0x00031f95) list_submenu_pane_ParamLimits

0x5628,	// (0x00031f95) list_submenu_pane

0x5639,	// (0x00031fa6) scroll_pane_cp4

0x5641,	// (0x00031fae) list_single_popup_submenu_pane_ParamLimits

0x5641,	// (0x00031fae) list_single_popup_submenu_pane

0x5654,	// (0x00031fc1) list_single_popup_submenu_pane_g1

0x565c,	// (0x00031fc9) list_single_popup_submenu_pane_t1_ParamLimits

0x565c,	// (0x00031fc9) list_single_popup_submenu_pane_t1

0x4eca,	// (0x00031837) bg_active_tab_pane_cp1_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp1

0x9e8d,	// (0x000367fa) tabs_2_active_pane_g1

0x9e95,	// (0x00036802) tabs_2_active_pane_t1

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp1_ParamLimits

0x4eca,	// (0x00031837) bg_passive_tab_pane_cp1

0x9e8d,	// (0x000367fa) tabs_2_passive_pane_g1

0x9e95,	// (0x00036802) tabs_2_passive_pane_t1

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp4

0x9ea7,	// (0x00036814) tabs_2_long_active_pane_t1

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp4

0xa677,	// (0x00036fe4) list_single_midp_graphic_pane_g4_ParamLimits

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp5

0x9ec6,	// (0x00036833) tabs_3_long_active_pane_t1

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp5

0xa677,	// (0x00036fe4) list_single_midp_graphic_pane_g4

0x4eca,	// (0x00031837) bg_popup_window_pane_cp13_ParamLimits

0x4eca,	// (0x00031837) bg_popup_window_pane_cp13

0x5686,	// (0x00031ff3) listscroll_popup_fast_pane_ParamLimits

0x5686,	// (0x00031ff3) listscroll_popup_fast_pane

0x5695,	// (0x00032002) grid_popup_fast_pane_ParamLimits

0x5695,	// (0x00032002) grid_popup_fast_pane

0x56a7,	// (0x00032014) scroll_pane_cp9_ParamLimits

0x56a7,	// (0x00032014) scroll_pane_cp9

0xd287,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd287,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2

0x56cb,	// (0x00032038) input_focus_pane_cp20_ParamLimits

0x56cb,	// (0x00032038) input_focus_pane_cp20

0x56d9,	// (0x00032046) query_popup_data_pane_t1_ParamLimits

0x56d9,	// (0x00032046) query_popup_data_pane_t1

0x56ec,	// (0x00032059) query_popup_data_pane_t2_ParamLimits

0x56ec,	// (0x00032059) query_popup_data_pane_t2

0x5732,	// (0x0003209f) query_popup_data_pane_t3_ParamLimits

0x5732,	// (0x0003209f) query_popup_data_pane_t3

0x5773,	// (0x000320e0) query_popup_data_pane_t4_ParamLimits

0x5773,	// (0x000320e0) query_popup_data_pane_t4

0x57af,	// (0x0003211c) query_popup_data_pane_t5_ParamLimits

0x57af,	// (0x0003211c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003c05c) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003c05c) query_popup_data_pane_t

0x5581,	// (0x00031eee) bg_set_opt_pane_g1

0x5589,	// (0x00031ef6) bg_set_opt_pane_g2

0x5591,	// (0x00031efe) bg_set_opt_pane_g3

0x5599,	// (0x00031f06) bg_set_opt_pane_g4

0x55a1,	// (0x00031f0e) bg_set_opt_pane_g5

0x55a9,	// (0x00031f16) bg_set_opt_pane_g6

0x55b1,	// (0x00031f1e) bg_set_opt_pane_g7

0x55b9,	// (0x00031f26) bg_set_opt_pane_g8

0x55c1,	// (0x00031f2e) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003c067) bg_set_opt_pane_g

0xa2c9,	// (0x00036c36) control_top_pane_stacon_ParamLimits

0xa2c9,	// (0x00036c36) control_top_pane_stacon

0xa31c,	// (0x00036c89) signal_pane_stacon_ParamLimits

0xa31c,	// (0x00036c89) signal_pane_stacon

0x5c0e,	// (0x0003257b) stacon_top_pane_g1_ParamLimits

0x5c0e,	// (0x0003257b) stacon_top_pane_g1

0xa341,	// (0x00036cae) title_pane_stacon_ParamLimits

0xa341,	// (0x00036cae) title_pane_stacon

0xa36b,	// (0x00036cd8) uni_indicator_pane_stacon_ParamLimits

0xa36b,	// (0x00036cd8) uni_indicator_pane_stacon

0xa380,	// (0x00036ced) battery_pane_stacon_ParamLimits

0xa380,	// (0x00036ced) battery_pane_stacon

0xa3c4,	// (0x00036d31) control_bottom_pane_stacon_ParamLimits

0xa3c4,	// (0x00036d31) control_bottom_pane_stacon

0xa3e7,	// (0x00036d54) navi_pane_stacon_ParamLimits

0xa3e7,	// (0x00036d54) navi_pane_stacon

0x5c30,	// (0x0003259d) stacon_bottom_pane_g1_ParamLimits

0x5c30,	// (0x0003259d) stacon_bottom_pane_g1

0x9ed8,	// (0x00036845) aid_levels_signal_lsc_ParamLimits

0x9ed8,	// (0x00036845) aid_levels_signal_lsc

0x9eef,	// (0x0003685c) signal_pane_stacon_g1_ParamLimits

0x9eef,	// (0x0003685c) signal_pane_stacon_g1

0x9f03,	// (0x00036870) signal_pane_stacon_g2_ParamLimits

0x9f03,	// (0x00036870) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003c07a) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003c07a) signal_pane_stacon_g

0x9f38,	// (0x000368a5) title_pane_stacon_t1_ParamLimits

0x9f38,	// (0x000368a5) title_pane_stacon_t1

0x57f3,	// (0x00032160) uni_indicator_pane_stacon_g1

0x5811,	// (0x0003217e) uni_indicator_pane_stacon_g2

0x57fd,	// (0x0003216a) uni_indicator_pane_stacon_g3

0x5807,	// (0x00032174) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003c086) uni_indicator_pane_stacon_g

0x9f5d,	// (0x000368ca) control_top_pane_stacon_g1

0x9f65,	// (0x000368d2) control_top_pane_stacon_t1_ParamLimits

0x9f65,	// (0x000368d2) control_top_pane_stacon_t1

0x9f9c,	// (0x00036909) aid_levels_battery_lsc_ParamLimits

0x9f9c,	// (0x00036909) aid_levels_battery_lsc

0x9fb4,	// (0x00036921) battery_pane_stacon_g1_ParamLimits

0x9fb4,	// (0x00036921) battery_pane_stacon_g1

0x9fc7,	// (0x00036934) battery_pane_stacon_g2_ParamLimits

0x9fc7,	// (0x00036934) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003c08f) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003c08f) battery_pane_stacon_g

0xa005,	// (0x00036972) navi_icon_pane_stacon

0xa019,	// (0x00036986) navi_navi_pane_stacon

0xa005,	// (0x00036972) navi_text_pane_stacon

0x9f5d,	// (0x000368ca) control_bottom_pane_stacon_g1

0xa02d,	// (0x0003699a) control_bottom_pane_stacon_t1_ParamLimits

0xa02d,	// (0x0003699a) control_bottom_pane_stacon_t1

0xa064,	// (0x000369d1) grid_app_pane_ParamLimits

0xa064,	// (0x000369d1) grid_app_pane

0xa086,	// (0x000369f3) scroll_pane_cp15_ParamLimits

0xa086,	// (0x000369f3) scroll_pane_cp15

0xa09b,	// (0x00036a08) cell_app_pane_ParamLimits

0xa09b,	// (0x00036a08) cell_app_pane

0xa0c5,	// (0x00036a32) cell_app_pane_g1_ParamLimits

0xa0c5,	// (0x00036a32) cell_app_pane_g1

0x5835,	// (0x000321a2) cell_app_pane_g2_ParamLimits

0x5835,	// (0x000321a2) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003c094) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003c094) cell_app_pane_g

0x5841,	// (0x000321ae) cell_app_pane_t1_ParamLimits

0x5841,	// (0x000321ae) cell_app_pane_t1

0x5853,	// (0x000321c0) grid_highlight_pane_ParamLimits

0x5853,	// (0x000321c0) grid_highlight_pane

0x5581,	// (0x00031eee) cell_highlight_pane_g1

0x5589,	// (0x00031ef6) cell_highlight_pane_g2

0x5591,	// (0x00031efe) cell_highlight_pane_g3

0x5599,	// (0x00031f06) cell_highlight_pane_g4

0x55a1,	// (0x00031f0e) cell_highlight_pane_g5

0x55a9,	// (0x00031f16) cell_highlight_pane_g6

0x55b1,	// (0x00031f1e) cell_highlight_pane_g7

0x55b9,	// (0x00031f26) cell_highlight_pane_g8

0x55c1,	// (0x00031f2e) cell_highlight_pane_g9

0x4e64,	// (0x000317d1) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003c042) cell_highlight_pane_g

0x5864,	// (0x000321d1) bg_scroll_pane

0xa0fc,	// (0x00036a69) scroll_handle_pane

0x58ab,	// (0x00032218) scroll_bg_pane_g1

0x58c0,	// (0x0003222d) scroll_bg_pane_g2

0x58d8,	// (0x00032245) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003c099) scroll_bg_pane_g

0x58ed,	// (0x0003225a) scroll_handle_focus_pane_ParamLimits

0x58ed,	// (0x0003225a) scroll_handle_focus_pane

0x58ab,	// (0x00032218) scroll_handle_pane_g1

0x58fa,	// (0x00032267) scroll_handle_pane_g2

0x58d8,	// (0x00032245) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003c0a0) scroll_handle_pane_g

0x55d2,	// (0x00031f3f) bg_popup_sub_pane_cp21_ParamLimits

0x55d2,	// (0x00031f3f) bg_popup_sub_pane_cp21

0x590e,	// (0x0003227b) popup_fep_japan_predictive_window_t1_ParamLimits

0x590e,	// (0x0003227b) popup_fep_japan_predictive_window_t1

0x5925,	// (0x00032292) popup_fep_japan_predictive_window_t2_ParamLimits

0x5925,	// (0x00032292) popup_fep_japan_predictive_window_t2

0x5958,	// (0x000322c5) popup_fep_japan_predictive_window_t3_ParamLimits

0x5958,	// (0x000322c5) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003c0a7) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003c0a7) popup_fep_japan_predictive_window_t

0x4e6e,	// (0x000317db) bg_popup_sub_pane_cp23

0x598f,	// (0x000322fc) listscroll_japin_cand_pane

0x5997,	// (0x00032304) popup_fep_japan_candidate_window_t1

0x59a5,	// (0x00032312) candidate_pane_ParamLimits

0x59a5,	// (0x00032312) candidate_pane

0x59b7,	// (0x00032324) scroll_pane_cp30

0x59bf,	// (0x0003232c) list_single_popup_jap_candidate_pane_ParamLimits

0x59bf,	// (0x0003232c) list_single_popup_jap_candidate_pane

0x4e6e,	// (0x000317db) list_highlight_pane_cp30

0x59d3,	// (0x00032340) list_single_popup_jap_candidate_pane_t1

0x59e2,	// (0x0003234f) level_1_signal

0x59ef,	// (0x0003235c) level_2_signal

0x59fc,	// (0x00032369) level_3_signal

0x5a09,	// (0x00032376) level_4_signal

0x5a16,	// (0x00032383) level_5_signal

0x5a23,	// (0x00032390) level_6_signal

0x5a30,	// (0x0003239d) level_7_signal

0x59e2,	// (0x0003234f) level_1_battery

0x59ef,	// (0x0003235c) level_2_battery

0x59fc,	// (0x00032369) level_3_battery

0x5a09,	// (0x00032376) level_4_battery

0x5a16,	// (0x00032383) level_5_battery

0x5a23,	// (0x00032390) level_6_battery

0x5a30,	// (0x0003239d) level_7_battery

0x5a55,	// (0x000323c2) list_menu_pane_ParamLimits

0x5a55,	// (0x000323c2) list_menu_pane

0x5a66,	// (0x000323d3) scroll_pane_cp25_ParamLimits

0x5a66,	// (0x000323d3) scroll_pane_cp25

0x5a7f,	// (0x000323ec) list_double2_graphic_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double2_graphic_pane_cp2

0x5a7f,	// (0x000323ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double2_large_graphic_pane_cp2

0x5a7f,	// (0x000323ec) list_double2_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double2_pane_cp2

0x5a7f,	// (0x000323ec) list_double_graphic_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double_graphic_pane_cp2

0x5a7f,	// (0x000323ec) list_double_large_graphic_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double_large_graphic_pane_cp2

0x5a7f,	// (0x000323ec) list_double_number_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double_number_pane_cp2

0x5a7f,	// (0x000323ec) list_double_pane_cp2_ParamLimits

0x5a7f,	// (0x000323ec) list_double_pane_cp2

0xa156,	// (0x00036ac3) list_single_2graphic_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_2graphic_pane_cp2

0xa156,	// (0x00036ac3) list_single_graphic_heading_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_graphic_heading_pane_cp2

0xa156,	// (0x00036ac3) list_single_graphic_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_graphic_pane_cp2

0xa156,	// (0x00036ac3) list_single_heading_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_heading_pane_cp2

0x5a8f,	// (0x000323fc) list_single_large_graphic_pane_cp2_ParamLimits

0x5a8f,	// (0x000323fc) list_single_large_graphic_pane_cp2

0xa156,	// (0x00036ac3) list_single_number_heading_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_number_heading_pane_cp2

0xa156,	// (0x00036ac3) list_single_number_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_number_pane_cp2

0xa156,	// (0x00036ac3) list_single_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_pane_cp2

0x5aa9,	// (0x00032416) bg_popup_sub_pane_cp22

0xa213,	// (0x00036b80) popup_side_volume_key_window_g1

0xa23d,	// (0x00036baa) popup_side_volume_key_window_t1

0xa259,	// (0x00036bc6) volume_small_pane_cp1

0x4ebc,	// (0x00031829) bg_popup_sub_pane_cp24_ParamLimits

0x4ebc,	// (0x00031829) bg_popup_sub_pane_cp24

0x5abf,	// (0x0003242c) fep_china_uni_candidate_pane_ParamLimits

0x5abf,	// (0x0003242c) fep_china_uni_candidate_pane

0x5ad3,	// (0x00032440) fep_china_uni_entry_pane

0x5ae3,	// (0x00032450) popup_fep_china_uni_window_g1

0x5aff,	// (0x0003246c) fep_china_uni_entry_pane_g1

0x5b07,	// (0x00032474) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003c0d4) fep_china_uni_entry_pane_g

0x5b0f,	// (0x0003247c) fep_entry_item_pane

0x5b19,	// (0x00032486) fep_candidate_item_pane

0x5b21,	// (0x0003248e) fep_china_uni_candidate_pane_g1

0x5b29,	// (0x00032496) fep_china_uni_candidate_pane_g2

0x5b31,	// (0x0003249e) fep_china_uni_candidate_pane_g3

0x5b39,	// (0x000324a6) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003c0d9) fep_china_uni_candidate_pane_g

0x4e64,	// (0x000317d1) fep_entry_item_pane_g1

0x5b41,	// (0x000324ae) fep_entry_item_pane_t1_ParamLimits

0x5b41,	// (0x000324ae) fep_entry_item_pane_t1

0x5b57,	// (0x000324c4) fep_candidate_item_pane_t1_ParamLimits

0x5b57,	// (0x000324c4) fep_candidate_item_pane_t1

0x5b6c,	// (0x000324d9) fep_candidate_item_pane_t2_ParamLimits

0x5b6c,	// (0x000324d9) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003c0e2) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003c0e2) fep_candidate_item_pane_t

0x4eca,	// (0x00031837) list_highlight_pane_cp31_ParamLimits

0x4eca,	// (0x00031837) list_highlight_pane_cp31

0x5b7e,	// (0x000324eb) level_1_signal_lsc

0x5b87,	// (0x000324f4) level_2_signal_lsc

0x5b90,	// (0x000324fd) level_3_signal_lsc

0x5b99,	// (0x00032506) level_4_signal_lsc

0x5ba2,	// (0x0003250f) level_5_signal_lsc

0x5bab,	// (0x00032518) level_6_signal_lsc

0x5bb4,	// (0x00032521) level_7_signal_lsc

0x5bb4,	// (0x00032521) level_1_battery_lsc

0x5bbd,	// (0x0003252a) level_2_battery_lsc

0x5bc6,	// (0x00032533) level_3_battery_lsc

0x5bcf,	// (0x0003253c) level_4_battery_lsc

0x5bd8,	// (0x00032545) level_5_battery_lsc

0x5be1,	// (0x0003254e) level_6_battery_lsc

0x5b7e,	// (0x000324eb) level_7_battery_lsc

0x5bea,	// (0x00032557) scroll_handle_focus_pane_g1

0x5bf3,	// (0x00032560) scroll_handle_focus_pane_g2

0x5bfc,	// (0x00032569) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003c0e7) scroll_handle_focus_pane_g

0x8f1d,	// (0x0003588a) list_single_2graphic_pane_g1_ParamLimits

0x8f1d,	// (0x0003588a) list_single_2graphic_pane_g1

0x8901,	// (0x0003526e) list_single_2graphic_pane_g2_ParamLimits

0x8901,	// (0x0003526e) list_single_2graphic_pane_g2

0x8866,	// (0x000351d3) list_single_2graphic_pane_g3_ParamLimits

0x8866,	// (0x000351d3) list_single_2graphic_pane_g3

0x8f29,	// (0x00035896) list_single_2graphic_pane_g4_ParamLimits

0x8f29,	// (0x00035896) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003c0ee) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003c0ee) list_single_2graphic_pane_g

0x8f3a,	// (0x000358a7) list_single_2graphic_pane_t1_ParamLimits

0x8f3a,	// (0x000358a7) list_single_2graphic_pane_t1

0xa261,	// (0x00036bce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa261,	// (0x00036bce) list_double2_graphic_large_graphic_pane_g1

0x9e19,	// (0x00036786) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9e19,	// (0x00036786) list_double2_graphic_large_graphic_pane_g2

0x9dec,	// (0x00036759) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9dec,	// (0x00036759) list_double2_graphic_large_graphic_pane_g3

0xa271,	// (0x00036bde) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa271,	// (0x00036bde) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003c0f7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003c0f7) list_double2_graphic_large_graphic_pane_g

0x8f68,	// (0x000358d5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8f68,	// (0x000358d5) list_double2_graphic_large_graphic_pane_t1

0x8f7e,	// (0x000358eb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8f7e,	// (0x000358eb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003c100) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003c100) list_double2_graphic_large_graphic_pane_t

0x5cdd,	// (0x0003264a) popup_fast_swap_window_ParamLimits

0x5cdd,	// (0x0003264a) popup_fast_swap_window

0x5cf9,	// (0x00032666) popup_side_volume_key_window

0x5d13,	// (0x00032680) stacon_top_pane

0x5d1d,	// (0x0003268a) status_pane_ParamLimits

0x5d1d,	// (0x0003268a) status_pane

0x5d13,	// (0x00032680) status_small_pane

0x4e6e,	// (0x000317db) control_pane

0x4e6e,	// (0x000317db) stacon_bottom_pane

0x54fd,	// (0x00031e6a) scroll_pane_cp121

0x54f4,	// (0x00031e61) set_content_pane

0xa27d,	// (0x00036bea) bg_active_tab_pane_g1_cp1

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp1

0xa286,	// (0x00036bf3) bg_active_tab_pane_g3_cp1

0xa27d,	// (0x00036bea) bg_passive_tab_pane_g1_cp1

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp1

0xa286,	// (0x00036bf3) bg_passive_tab_pane_g3_cp1

0xa28f,	// (0x00036bfc) bg_active_tab_pane_g1_cp2

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp2

0xa298,	// (0x00036c05) bg_active_tab_pane_g3_cp2

0xa28f,	// (0x00036bfc) bg_passive_tab_pane_g1_cp2

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp2

0xa298,	// (0x00036c05) bg_passive_tab_pane_g3_cp2

0xa2a1,	// (0x00036c0e) bg_active_tab_pane_g1_cp3

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp3

0xa2aa,	// (0x00036c17) bg_active_tab_pane_g3_cp3

0xa2a1,	// (0x00036c0e) bg_passive_tab_pane_g1_cp3

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp3

0xa2aa,	// (0x00036c17) bg_passive_tab_pane_g3_cp3

0xa2b3,	// (0x00036c20) bg_active_tab_pane_g1_cp4

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp4

0xa2be,	// (0x00036c2b) bg_active_tab_pane_g3_cp4

0xa2b3,	// (0x00036c20) bg_passive_tab_pane_g1_cp4

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp4

0xa2be,	// (0x00036c2b) bg_passive_tab_pane_g3_cp4

0x5c55,	// (0x000325c2) bg_active_tab_pane_g1_cp5

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp5

0x5c4c,	// (0x000325b9) bg_active_tab_pane_g3_cp5

0x5c55,	// (0x000325c2) bg_passive_tab_pane_g1_cp5

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp5

0x5c4c,	// (0x000325b9) bg_passive_tab_pane_g3_cp5

0xb826,	// (0x00038193) list_set_graphic_pane_ParamLimits

0xb826,	// (0x00038193) list_set_graphic_pane

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp4

0x5c5e,	// (0x000325cb) list_set_graphic_pane_g1_ParamLimits

0x5c5e,	// (0x000325cb) list_set_graphic_pane_g1

0x5c6a,	// (0x000325d7) list_set_graphic_pane_g2_ParamLimits

0x5c6a,	// (0x000325d7) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003c105) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003c105) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0003c470) volume_small_pane_cp_g

0x5c8e,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5c8e,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2

0x5c9c,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5c9c,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2

0x5cad,	// (0x0003261a) list_double2_large_graphic_pane_g3_cp2

0x5cb5,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5cb5,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2

0x5ccb,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5ccb,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2

0x7369,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7369,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2

0x737c,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x737c,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2

0x5e3b,	// (0x000327a8) list_double_large_graphic_pane_g3_cp2

0x738d,	// (0x00033cfa) list_double_large_graphic_pane_g4_cp

0x7395,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7395,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2

0x73ac,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x73ac,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2

0x5d2b,	// (0x00032698) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5d2b,	// (0x00032698) list_double2_graphic_pane_g1_cp2

0x5d39,	// (0x000326a6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5d39,	// (0x000326a6) list_double2_graphic_pane_g2_cp2

0x5d4a,	// (0x000326b7) list_double2_graphic_pane_g3_cp2

0x5d54,	// (0x000326c1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5d54,	// (0x000326c1) list_double2_graphic_pane_t1_cp2

0x5d6a,	// (0x000326d7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5d6a,	// (0x000326d7) list_double2_graphic_pane_t2_cp2

0x5d7c,	// (0x000326e9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5d7c,	// (0x000326e9) list_single_number_heading_pane_g1_cp2

0x5d88,	// (0x000326f5) list_single_number_heading_pane_g2_cp2

0x5d90,	// (0x000326fd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5d90,	// (0x000326fd) list_single_number_heading_pane_t1_cp2

0x5da6,	// (0x00032713) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5da6,	// (0x00032713) list_single_number_heading_pane_t2_cp2

0x5dba,	// (0x00032727) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5dba,	// (0x00032727) list_single_number_heading_pane_t3_cp2

0x5d7c,	// (0x000326e9) list_single_heading_pane_g1_cp2_ParamLimits

0x5d7c,	// (0x000326e9) list_single_heading_pane_g1_cp2

0x5d88,	// (0x000326f5) list_single_heading_pane_g2_cp2

0x5d90,	// (0x000326fd) list_single_heading_pane_t1_cp2_ParamLimits

0x5d90,	// (0x000326fd) list_single_heading_pane_t1_cp2

0x7171,	// (0x00033ade) list_single_heading_pane_t2_cp2_ParamLimits

0x7171,	// (0x00033ade) list_single_heading_pane_t2_cp2

0x710b,	// (0x00033a78) list_double_graphic_pane_g1_cp2_ParamLimits

0x710b,	// (0x00033a78) list_double_graphic_pane_g1_cp2

0x7117,	// (0x00033a84) list_double_graphic_pane_g2_cp2_ParamLimits

0x7117,	// (0x00033a84) list_double_graphic_pane_g2_cp2

0x7126,	// (0x00033a93) list_double_graphic_pane_g3_cp2

0x712e,	// (0x00033a9b) list_double_graphic_pane_t1_cp2_ParamLimits

0x712e,	// (0x00033a9b) list_double_graphic_pane_t1_cp2

0x7144,	// (0x00033ab1) list_double_graphic_pane_t2_cp2_ParamLimits

0x7144,	// (0x00033ab1) list_double_graphic_pane_t2_cp2

0x5e2f,	// (0x0003279c) list_double_number_pane_g1_cp2_ParamLimits

0x5e2f,	// (0x0003279c) list_double_number_pane_g1_cp2

0x5e3b,	// (0x000327a8) list_double_number_pane_g2_cp2

0x70cf,	// (0x00033a3c) list_double_number_pane_t1_cp2_ParamLimits

0x70cf,	// (0x00033a3c) list_double_number_pane_t1_cp2

0x70e3,	// (0x00033a50) list_double_number_pane_t2_cp2_ParamLimits

0x70e3,	// (0x00033a50) list_double_number_pane_t2_cp2

0x70f9,	// (0x00033a66) list_double_number_pane_t3_cp2_ParamLimits

0x70f9,	// (0x00033a66) list_double_number_pane_t3_cp2

0x7046,	// (0x000339b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x7046,	// (0x000339b3) list_single_graphic_pane_g1_cp2

0x5e93,	// (0x00032800) list_single_graphic_pane_g2_cp2_ParamLimits

0x5e93,	// (0x00032800) list_single_graphic_pane_g2_cp2

0x5e9f,	// (0x0003280c) list_single_graphic_pane_g3_cp2

0x701c,	// (0x00033989) list_single_graphic_pane_t1_cp2_ParamLimits

0x701c,	// (0x00033989) list_single_graphic_pane_t1_cp2

0x5e93,	// (0x00032800) list_single_number_pane_g1_cp2_ParamLimits

0x5e93,	// (0x00032800) list_single_number_pane_g1_cp2

0x5e9f,	// (0x0003280c) list_single_number_pane_g2_cp2

0x701c,	// (0x00033989) list_single_number_pane_t1_cp2_ParamLimits

0x701c,	// (0x00033989) list_single_number_pane_t1_cp2

0x7032,	// (0x0003399f) list_single_number_pane_t2_cp2_ParamLimits

0x7032,	// (0x0003399f) list_single_number_pane_t2_cp2

0x5c9c,	// (0x00032609) list_double2_pane_g1_cp2_ParamLimits

0x5c9c,	// (0x00032609) list_double2_pane_g1_cp2

0x5cad,	// (0x0003261a) list_double2_pane_g2_cp2

0x5e07,	// (0x00032774) list_double2_pane_t1_cp2_ParamLimits

0x5e07,	// (0x00032774) list_double2_pane_t1_cp2

0x5e1d,	// (0x0003278a) list_double2_pane_t2_cp2_ParamLimits

0x5e1d,	// (0x0003278a) list_double2_pane_t2_cp2

0x5e2f,	// (0x0003279c) list_double_pane_g1_cp2_ParamLimits

0x5e2f,	// (0x0003279c) list_double_pane_g1_cp2

0x5e3b,	// (0x000327a8) list_double_pane_g2_cp2

0x5e43,	// (0x000327b0) list_double_pane_t1_cp2_ParamLimits

0x5e43,	// (0x000327b0) list_double_pane_t1_cp2

0x5e59,	// (0x000327c6) list_double_pane_t2_cp2_ParamLimits

0x5e59,	// (0x000327c6) list_double_pane_t2_cp2

0x5e83,	// (0x000327f0) list_single_pane_cp2_g3

0x5e93,	// (0x00032800) list_single_pane_g1_cp2_ParamLimits

0x5e93,	// (0x00032800) list_single_pane_g1_cp2

0x5e9f,	// (0x0003280c) list_single_pane_g2_cp2

0x5ea7,	// (0x00032814) list_single_pane_t1_cp2_ParamLimits

0x5ea7,	// (0x00032814) list_single_pane_t1_cp2

0x5ebf,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5ebf,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2

0x5ecd,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5ecd,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2

0x5ed9,	// (0x00032846) list_single_large_graphic_pane_g3_cp2

0x5ee1,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5ee1,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1

0x5efb,	// (0x00032868) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5efb,	// (0x00032868) list_single_large_graphic_pane_t1_cp2

0x6fe6,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6fe6,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2

0x6fb3,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6fb3,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2

0x5e9f,	// (0x0003280c) list_single_graphic_heading_pane_g5_cp2

0x6ff2,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6ff2,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2

0x7008,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x7008,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2

0x6fa7,	// (0x00033914) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6fa7,	// (0x00033914) list_single_2graphic_pane_g1_cp2

0x6fb3,	// (0x00033920) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6fb3,	// (0x00033920) list_single_2graphic_pane_g2_cp2

0x5e9f,	// (0x0003280c) list_single_2graphic_pane_g3_cp2

0x6fc4,	// (0x00033931) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6fc4,	// (0x00033931) list_single_2graphic_pane_g4_cp2

0x6fd0,	// (0x0003393d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6fd0,	// (0x0003393d) list_single_2graphic_pane_t1_cp2

0x4e64,	// (0x000317d1) list_highlight_pane_g10_cp1

0x6bad,	// (0x0003351a) list_highlight_pane_g1_cp1

0x6bb5,	// (0x00033522) list_highlight_pane_g2_cp1

0x6bbd,	// (0x0003352a) list_highlight_pane_g3_cp1

0x6bc5,	// (0x00033532) list_highlight_pane_g4_cp1

0x6bcd,	// (0x0003353a) list_highlight_pane_g5_cp1

0x6bd5,	// (0x00033542) list_highlight_pane_g6_cp1

0x6bdd,	// (0x0003354a) list_highlight_pane_g7_cp1

0x6be5,	// (0x00033552) list_highlight_pane_g8_cp1

0x6bed,	// (0x0003355a) list_highlight_pane_g9_cp1

0xc21d,	// (0x00038b8a) form_field_slider_pane_t3

0xc22b,	// (0x00038b98) form_field_slider_pane_t4

0x6ae1,	// (0x0003344e) slider_form_pane_ParamLimits

0x6ae1,	// (0x0003344e) slider_form_pane

0x4e6e,	// (0x000317db) control_abbreviations

0x4e6e,	// (0x000317db) control_conventions

0x4e6e,	// (0x000317db) control_definitions

0x4e6e,	// (0x000317db) format_table_attribute

0x71bd,	// (0x00033b2a) bg_popup_preview_window_pane_g9

0x4e6e,	// (0x000317db) format_table_data2

0x4e6e,	// (0x000317db) format_table_data3

0x4e6e,	// (0x000317db) format_table_data_example

0x0008,

0x4e6e,	// (0x000317db) intro_purpose

0xf92d,	// (0x0003c29a) bg_popup_preview_window_pane_g

0x4e6e,	// (0x000317db) texts_category

0x4e6e,	// (0x000317db) texts_graphics

0x5f11,	// (0x0003287e) text_digital

0x5f20,	// (0x0003288d) text_primary

0x5f2f,	// (0x0003289c) text_primary_small

0x5f3e,	// (0x000328ab) text_secondary

0x5f4d,	// (0x000328ba) text_title

0x766e,	// (0x00033fdb) bg_passive_tab_pane_g1_cp3_srt

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp3_srt

0x7665,	// (0x00033fd2) bg_passive_tab_pane_g3_cp3_srt

0x4eca,	// (0x00031837) bg_active_tab_pane_cp3_srt_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp3_srt

0x7677,	// (0x00033fe4) tabs_4_active_pane_srt_g1

0xc586,	// (0x00038ef3) tabs_4_active_pane_srt_t1_ParamLimits

0xc586,	// (0x00038ef3) tabs_4_active_pane_srt_t1

0x766e,	// (0x00033fdb) bg_active_tab_pane_g1_cp3_copy1

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp3_copy1

0x7665,	// (0x00033fd2) bg_active_tab_pane_g3_cp3_copy1

0x4eca,	// (0x00031837) tabs_2_long_active_pane_srt_ParamLimits

0x4eca,	// (0x00031837) tabs_2_long_active_pane_srt

0x4eca,	// (0x00031837) tabs_2_long_passive_pane_srt_ParamLimits

0x4eca,	// (0x00031837) tabs_2_long_passive_pane_srt

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp4_srt

0x7599,	// (0x00033f06) bg_passive_tab_pane_g1_cp4_srt

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp4_srt

0x7590,	// (0x00033efd) bg_passive_tab_pane_g3_cp4_srt

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp4_srt_ParamLimits

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp4_srt

0xc3cd,	// (0x00038d3a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc3cd,	// (0x00038d3a) tabs_2_long_active_pane_srt_t1

0x7599,	// (0x00033f06) bg_active_tab_pane_g1_cp4_srt

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp4_srt

0x7590,	// (0x00033efd) bg_active_tab_pane_g3_cp4_srt

0x4ebc,	// (0x00031829) tabs_3_long_active_pane_srt_ParamLimits

0x4ebc,	// (0x00031829) tabs_3_long_active_pane_srt

0x4ebc,	// (0x00031829) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4ebc,	// (0x00031829) tabs_3_long_passive_pane_cp_srt

0x4ebc,	// (0x00031829) tabs_3_long_passive_pane_srt_ParamLimits

0x4ebc,	// (0x00031829) tabs_3_long_passive_pane_srt

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp5_srt

0x5c55,	// (0x000325c2) bg_passive_tab_pane_g1_cp5_srt

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp5_srt

0x5c4c,	// (0x000325b9) bg_passive_tab_pane_g3_cp5_srt

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp5_srt_ParamLimits

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp5_srt

0xc3bb,	// (0x00038d28) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc3bb,	// (0x00038d28) tabs_3_long_active_pane_srt_t1

0x5c55,	// (0x000325c2) bg_active_tab_pane_g1_cp5_srt

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp5_srt

0x5c4c,	// (0x000325b9) bg_active_tab_pane_g3_cp5_srt

0x7582,	// (0x00033eef) navi_text_pane_srt_t1

0x757a,	// (0x00033ee7) navi_icon_pane_srt_g1

0x604b,	// (0x000329b8) midp_editing_number_pane_srt

0x5f5c,	// (0x000328c9) midp_ticker_pane_srt

0x6053,	// (0x000329c0) midp_ticker_pane_srt_g1

0x605b,	// (0x000329c8) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003c124) midp_ticker_pane_srt_g

0x6063,	// (0x000329d0) midp_ticker_pane_srt_t1

0x756b,	// (0x00033ed8) midp_editing_number_pane_t1_copy1

0xb844,	// (0x000381b1) listscroll_midp_pane

0xb844,	// (0x000381b1) midp_form_pane

0x5f64,	// (0x000328d1) midp_info_popup_window_ParamLimits

0x5f64,	// (0x000328d1) midp_info_popup_window

0x55d2,	// (0x00031f3f) bg_popup_sub_pane_cp50_ParamLimits

0x55d2,	// (0x00031f3f) bg_popup_sub_pane_cp50

0x682f,	// (0x0003319c) listscroll_midp_info_pane_ParamLimits

0x682f,	// (0x0003319c) listscroll_midp_info_pane

0x6817,	// (0x00033184) listscroll_form_midp_pane_ParamLimits

0x6817,	// (0x00033184) listscroll_form_midp_pane

0x6823,	// (0x00033190) scroll_bar_cp050

0xc205,	// (0x00038b72) list_midp_pane

0x7f07,	// (0x00034874) signal_pane_g2_cp

0x6749,	// (0x000330b6) listscroll_midp_info_pane_t1_ParamLimits

0x6749,	// (0x000330b6) listscroll_midp_info_pane_t1

0x6761,	// (0x000330ce) listscroll_midp_info_pane_t2_ParamLimits

0x6761,	// (0x000330ce) listscroll_midp_info_pane_t2

0x679f,	// (0x0003310c) listscroll_midp_info_pane_t3_ParamLimits

0x679f,	// (0x0003310c) listscroll_midp_info_pane_t3

0x67d9,	// (0x00033146) listscroll_midp_info_pane_t4_ParamLimits

0x67d9,	// (0x00033146) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0003c1d5) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0003c1d5) listscroll_midp_info_pane_t

0x5639,	// (0x00031fa6) scroll_pane_cp21

0x66ed,	// (0x0003305a) form_midp_field_choice_group_pane

0x66f6,	// (0x00033063) form_midp_field_text_pane

0x672f,	// (0x0003309c) form_midp_field_time_pane

0x6737,	// (0x000330a4) form_midp_gauge_slider_pane

0x6740,	// (0x000330ad) form_midp_gauge_wait_pane

0x4e6e,	// (0x000317db) form_midp_image_pane

0x906f,	// (0x000359dc) list_single_midp_pane_ParamLimits

0x906f,	// (0x000359dc) list_single_midp_pane

0xc1c6,	// (0x00038b33) form_midp_field_text_pane_t1

0x6594,	// (0x00032f01) input_focus_pane_cp050

0x66dc,	// (0x00033049) list_midp_form_text_pane

0x66ab,	// (0x00033018) form_midp_field_choice_group_pane_t1

0x66b9,	// (0x00033026) input_focus_pane_cp051

0x66cd,	// (0x0003303a) list_midp_choice_pane

0x4e6e,	// (0x000317db) status_idle_pane

0x668f,	// (0x00032ffc) form_midp_field_time_pane_t1

0x4e64,	// (0x000317d1) wait_anim_pane_g2_copy1

0x669d,	// (0x0003300a) form_midp_field_time_pane_t2

0x0001,

0x5fbd,	// (0x0003292a) aid_navinavi_width_2_pane

0xf863,	// (0x0003c1d0) form_midp_field_time_pane_t

0x4e6e,	// (0x000317db) input_focus_pane_cp052

0x4e6e,	// (0x000317db) bg_input_focus_pane_cp040

0x666b,	// (0x00032fd8) form_midp_gauge_slider_pane_t1

0x6679,	// (0x00032fe6) form_midp_gauge_slider_pane_t2

0xc1aa,	// (0x00038b17) form_midp_gauge_slider_pane_t3

0xc1b8,	// (0x00038b25) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0003c1c7) form_midp_gauge_slider_pane_t

0x6687,	// (0x00032ff4) form_midp_slider_pane

0x4eca,	// (0x00031837) bg_input_focus_pane_cp041_ParamLimits

0x4eca,	// (0x00031837) bg_input_focus_pane_cp041

0x6638,	// (0x00032fa5) form_midp_gauge_wait_pane_t1_ParamLimits

0x6638,	// (0x00032fa5) form_midp_gauge_wait_pane_t1

0x664a,	// (0x00032fb7) form_midp_gauge_wait_pane_t2_ParamLimits

0x664a,	// (0x00032fb7) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0003c1c2) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0003c1c2) form_midp_gauge_wait_pane_t

0x665c,	// (0x00032fc9) form_midp_wait_pane_ParamLimits

0x665c,	// (0x00032fc9) form_midp_wait_pane

0x6602,	// (0x00032f6f) form_midp_image_pane_g1

0x660b,	// (0x00032f78) form_midp_image_pane_t1

0x661a,	// (0x00032f87) form_midp_image_pane_t2

0x6629,	// (0x00032f96) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0003c1bb) form_midp_image_pane_t

0x65f9,	// (0x00032f66) list_single_midp_pane_g1

0x9060,	// (0x000359cd) list_single_midp_pane_t1

0xc17a,	// (0x00038ae7) list_midp_form_item_pane_ParamLimits

0xc17a,	// (0x00038ae7) list_midp_form_item_pane

0x5f77,	// (0x000328e4) list_midp_form_item_pane_t1

0x5f86,	// (0x000328f3) midp_ticker_pane_g1

0x5f92,	// (0x000328ff) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003c10a) midp_ticker_pane_g

0xb8f9,	// (0x00038266) midp_ticker_pane_t1

0xc53c,	// (0x00038ea9) midp_editing_number_pane_t1

0x75f9,	// (0x00033f66) midp_editing_number_pane

0x7608,	// (0x00033f75) midp_ticker_pane

0x755b,	// (0x00033ec8) ai_message_heading_pane

0x4e6e,	// (0x000317db) bg_popup_window_pane_cp14

0x7563,	// (0x00033ed0) listscroll_ai_message_pane

0x74e5,	// (0x00033e52) ai_message_heading_pane_g1_ParamLimits

0x74e5,	// (0x00033e52) ai_message_heading_pane_g1

0x74f1,	// (0x00033e5e) ai_message_heading_pane_g2_ParamLimits

0x74f1,	// (0x00033e5e) ai_message_heading_pane_g2

0x74fd,	// (0x00033e6a) ai_message_heading_pane_g3_ParamLimits

0x74fd,	// (0x00033e6a) ai_message_heading_pane_g3

0x7509,	// (0x00033e76) ai_message_heading_pane_g4_ParamLimits

0x7509,	// (0x00033e76) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0003c2fc) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0003c2fc) ai_message_heading_pane_g

0x7515,	// (0x00033e82) ai_message_heading_pane_t1_ParamLimits

0x7515,	// (0x00033e82) ai_message_heading_pane_t1

0x752f,	// (0x00033e9c) ai_message_heading_pane_t2_ParamLimits

0x752f,	// (0x00033e9c) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0003c305) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0003c305) ai_message_heading_pane_t

0x7541,	// (0x00033eae) bg_popup_heading_pane_cp1_ParamLimits

0x7541,	// (0x00033eae) bg_popup_heading_pane_cp1

0x74d3,	// (0x00033e40) list_ai_message_pane_ParamLimits

0x74d3,	// (0x00033e40) list_ai_message_pane

0x5639,	// (0x00031fa6) scroll_pane_cp10

0x746f,	// (0x00033ddc) list_ai_message_pane_g1

0x7477,	// (0x00033de4) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0003c2d9) list_ai_message_pane_g

0x747f,	// (0x00033dec) list_ai_message_pane_t1_ParamLimits

0x747f,	// (0x00033dec) list_ai_message_pane_t1

0x7494,	// (0x00033e01) list_ai_message_pane_t2_ParamLimits

0x7494,	// (0x00033e01) list_ai_message_pane_t2

0x74a9,	// (0x00033e16) list_ai_message_pane_t3_ParamLimits

0x74a9,	// (0x00033e16) list_ai_message_pane_t3

0x74be,	// (0x00033e2b) list_ai_message_pane_t4_ParamLimits

0x74be,	// (0x00033e2b) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0003c2de) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0003c2de) list_ai_message_pane_t

0xc3a5,	// (0x00038d12) cell_ai_soft_ind_pane_ParamLimits

0xc3a5,	// (0x00038d12) cell_ai_soft_ind_pane

0x5f9e,	// (0x0003290b) cell_ai_soft_ind_pane_g1_ParamLimits

0x5f9e,	// (0x0003290b) cell_ai_soft_ind_pane_g1

0x4e6e,	// (0x000317db) grid_highlight_cp1

0x5fab,	// (0x00032918) text_secondary_cp56_ParamLimits

0x5fab,	// (0x00032918) text_secondary_cp56

0x7444,	// (0x00033db1) example_general_pane_ParamLimits

0x7444,	// (0x00033db1) example_general_pane

0x7450,	// (0x00033dbd) example_parent_pane_g1_ParamLimits

0x7450,	// (0x00033dbd) example_parent_pane_g1

0x745c,	// (0x00033dc9) example_parent_pane_t1_ParamLimits

0x745c,	// (0x00033dc9) example_parent_pane_t1

0xbc25,	// (0x00038592) popup_preview_text_window_ParamLimits

0xbc25,	// (0x00038592) popup_preview_text_window

0x5e8b,	// (0x000327f8) list_single_pane_cp2_g4

0x50a2,	// (0x00031a0f) bg_popup_preview_window_pane_ParamLimits

0x50a2,	// (0x00031a0f) bg_popup_preview_window_pane

0x71c5,	// (0x00033b32) popup_preview_text_window_t1_ParamLimits

0x71c5,	// (0x00033b32) popup_preview_text_window_t1

0x71e3,	// (0x00033b50) popup_preview_text_window_t2_ParamLimits

0x71e3,	// (0x00033b50) popup_preview_text_window_t2

0x722c,	// (0x00033b99) popup_preview_text_window_t3_ParamLimits

0x722c,	// (0x00033b99) popup_preview_text_window_t3

0x7271,	// (0x00033bde) popup_preview_text_window_t4_ParamLimits

0x7271,	// (0x00033bde) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0003c2ad) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0003c2ad) popup_preview_text_window_t

0x72ef,	// (0x00033c5c) scroll_pane_cp11

0x64a4,	// (0x00032e11) bg_popup_preview_window_pane_g1

0x7185,	// (0x00033af2) bg_popup_preview_window_pane_g2

0x718d,	// (0x00033afa) bg_popup_preview_window_pane_g3

0x7195,	// (0x00033b02) bg_popup_preview_window_pane_g4

0x719d,	// (0x00033b0a) bg_popup_preview_window_pane_g5

0x71a5,	// (0x00033b12) bg_popup_preview_window_pane_g6

0x71ad,	// (0x00033b1a) bg_popup_preview_window_pane_g7

0x71b5,	// (0x00033b22) bg_popup_preview_window_pane_g8

0x968d,	// (0x00035ffa) aid_popup_width_pane

0xbc03,	// (0x00038570) popup_midp_note_alarm_window_ParamLimits

0xbc03,	// (0x00038570) popup_midp_note_alarm_window

0x550e,	// (0x00031e7b) data_form_pane_ParamLimits

0x8d75,	// (0x000356e2) form_field_data_pane_g1

0x8d7f,	// (0x000356ec) form_field_data_pane_t1_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_ParamLimits

0x5528,	// (0x00031e95) data_form_wide_pane_ParamLimits

0x8d99,	// (0x00035706) form_field_data_wide_pane_g1

0x8da5,	// (0x00035712) form_field_data_wide_pane_t1_ParamLimits

0x5295,	// (0x00031c02) input_focus_pane_cp6_ParamLimits

0x9e7f,	// (0x000367ec) input_popup_find_pane_g1_ParamLimits

0x9e7f,	// (0x000367ec) input_popup_find_pane_g1

0x9fd8,	// (0x00036945) aid_navi_side_left_pane

0x9fed,	// (0x0003695a) aid_navi_side_right_pane

0x6c8a,	// (0x000335f7) bg_popup_window_pane_cp30_ParamLimits

0x6c8a,	// (0x000335f7) bg_popup_window_pane_cp30

0x6d04,	// (0x00033671) popup_midp_note_alarm_window_g1_ParamLimits

0x6d04,	// (0x00033671) popup_midp_note_alarm_window_g1

0x6d34,	// (0x000336a1) popup_midp_note_alarm_window_t1_ParamLimits

0x6d34,	// (0x000336a1) popup_midp_note_alarm_window_t1

0x6dd5,	// (0x00033742) popup_midp_note_alarm_window_t2_ParamLimits

0x6dd5,	// (0x00033742) popup_midp_note_alarm_window_t2

0x6e83,	// (0x000337f0) popup_midp_note_alarm_window_t3_ParamLimits

0x6e83,	// (0x000337f0) popup_midp_note_alarm_window_t3

0x6eab,	// (0x00033818) popup_midp_note_alarm_window_t4_ParamLimits

0x6eab,	// (0x00033818) popup_midp_note_alarm_window_t4

0x6ecb,	// (0x00033838) popup_midp_note_alarm_window_t5_ParamLimits

0x6ecb,	// (0x00033838) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0003c24a) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0003c24a) popup_midp_note_alarm_window_t

0x6f77,	// (0x000338e4) wait_bar_pane_cp1_ParamLimits

0x6f77,	// (0x000338e4) wait_bar_pane_cp1

0x4e6e,	// (0x000317db) wait_anim_pane_copy1

0x4e6e,	// (0x000317db) wait_border_pane_copy1

0x69a2,	// (0x0003330f) wait_border_pane_g1_copy1

0x8dbf,	// (0x0003572c) form_field_popup_pane_g1

0x8dc7,	// (0x00035734) form_field_popup_pane_t1_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_cp7_ParamLimits

0x5554,	// (0x00031ec1) list_form_pane_ParamLimits

0x8de1,	// (0x0003574e) form_field_popup_wide_pane_g1

0x8de9,	// (0x00035756) form_field_popup_wide_pane_t1_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_cp8_ParamLimits

0x5560,	// (0x00031ecd) list_form_wide_pane_ParamLimits

0x769e,	// (0x0003400b) aid_size_cell_graphic_pane

0x8e75,	// (0x000357e2) data_form_pane_t1_ParamLimits

0x90cf,	// (0x00035a3c) data_form_wide_pane_t1_ParamLimits

0xbe6f,	// (0x000387dc) bg_status_flat_pane

0x9a7c,	// (0x000363e9) title_pane_t1_ParamLimits

0x4e84,	// (0x000317f1) title_pane_t2_ParamLimits

0x4eaa,	// (0x00031817) title_pane_t3_ParamLimits

0xf59b,	// (0x0003bf08) title_pane_t_ParamLimits

0x59e2,	// (0x0003234f) level_1_signal_ParamLimits

0x59ef,	// (0x0003235c) level_2_signal_ParamLimits

0x59fc,	// (0x00032369) level_3_signal_ParamLimits

0x5a09,	// (0x00032376) level_4_signal_ParamLimits

0x5a16,	// (0x00032383) level_5_signal_ParamLimits

0x5a23,	// (0x00032390) level_6_signal_ParamLimits

0x5a30,	// (0x0003239d) level_7_signal_ParamLimits

0x59e2,	// (0x0003234f) level_1_battery_ParamLimits

0x59ef,	// (0x0003235c) level_2_battery_ParamLimits

0x59fc,	// (0x00032369) level_3_battery_ParamLimits

0x5a09,	// (0x00032376) level_4_battery_ParamLimits

0x5a16,	// (0x00032383) level_5_battery_ParamLimits

0x5a23,	// (0x00032390) level_6_battery_ParamLimits

0x5a30,	// (0x0003239d) level_7_battery_ParamLimits

0x6bad,	// (0x0003351a) bg_status_flat_pane_g1

0x6bb5,	// (0x00033522) bg_status_flat_pane_g2

0x6bbd,	// (0x0003352a) bg_status_flat_pane_g3

0x6bc5,	// (0x00033532) bg_status_flat_pane_g4

0x6bcd,	// (0x0003353a) bg_status_flat_pane_g5

0x6bd5,	// (0x00033542) bg_status_flat_pane_g6

0x6bdd,	// (0x0003354a) bg_status_flat_pane_g7

0x9aec,	// (0x00036459) tabs_3_active_pane_t1_ParamLimits

0x9aec,	// (0x00036459) tabs_3_passive_pane_t1_ParamLimits

0x9b06,	// (0x00036473) tabs_4_active_pane_t1_ParamLimits

0x9b06,	// (0x00036473) tabs_4_1_passive_pane_t1_ParamLimits

0x9e95,	// (0x00036802) tabs_2_active_pane_t1_ParamLimits

0x9e95,	// (0x00036802) tabs_2_passive_pane_t1_ParamLimits

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp4_ParamLimits

0x9ea7,	// (0x00036814) tabs_2_long_active_pane_t1_ParamLimits

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp4_ParamLimits

0xa69d,	// (0x0003700a) list_single_midp_graphic_pane_t1_ParamLimits

0x61be,	// (0x00032b2b) bg_active_tab_pane_cp5_ParamLimits

0x9ec6,	// (0x00036833) tabs_3_long_active_pane_t1_ParamLimits

0x9eba,	// (0x00036827) bg_passive_tab_pane_cp5_ParamLimits

0xa69d,	// (0x0003700a) list_single_midp_graphic_pane_t1

0xbe6f,	// (0x000387dc) bg_status_flat_pane_ParamLimits

0x6377,	// (0x00032ce4) indicator_pane_cp2_ParamLimits

0x6377,	// (0x00032ce4) indicator_pane_cp2

0xbfb2,	// (0x0003891f) navi_pane_srt_ParamLimits

0xbfb2,	// (0x0003891f) navi_pane_srt

0x639f,	// (0x00032d0c) popup_clock_digital_analogue_window_cp1

0x4f17,	// (0x00031884) indicator_pane_t1

0x5f5c,	// (0x000328c9) copy_highlight_pane

0x5f5c,	// (0x000328c9) cursor_graphics_pane

0x5f5c,	// (0x000328c9) graphic_within_text_pane

0x5f5c,	// (0x000328c9) link_highlight_pane

0x72b2,	// (0x00033c1f) popup_preview_text_window_t5_ParamLimits

0x72b2,	// (0x00033c1f) popup_preview_text_window_t5

0x5fc5,	// (0x00032932) cursor_digital_pane

0x5fc5,	// (0x00032932) cursor_primary_pane

0x5fd6,	// (0x00032943) cursor_primary_small_pane

0x5fde,	// (0x0003294b) cursor_secondary_pane

0x5fe6,	// (0x00032953) cursor_title_pane

0x5fc5,	// (0x00032932) link_highlight_digital_pane

0x5fcd,	// (0x0003293a) link_highlight_primary_pane

0x5fd6,	// (0x00032943) link_highlight_primary_small_pane

0x5fde,	// (0x0003294b) link_highlight_secondary_pane

0x5fe6,	// (0x00032953) link_highlight_title_pane

0x5fc5,	// (0x00032932) copy_highlight_digital_pane

0x5fc5,	// (0x00032932) copy_highlight_primary_pane

0x5fd6,	// (0x00032943) copy_highlight_primary_small_pane

0x5fde,	// (0x0003294b) copy_highlight_secondary_pane

0x5fe6,	// (0x00032953) copy_highlight_title_pane

0x5fde,	// (0x0003294b) graphic_text_digital_pane

0x6c2d,	// (0x0003359a) graphic_text_primary_pane

0x6c36,	// (0x000335a3) graphic_text_primary_small_pane

0x5fd6,	// (0x00032943) graphic_text_secondary_pane

0x5fc5,	// (0x00032932) graphic_text_title_pane

0xb90b,	// (0x00038278) cursor_primary_pane_g1

0x6c1f,	// (0x0003358c) cursor_text_primary_t1

0xc24d,	// (0x00038bba) cursor_primary_small_pane_g1

0x6c11,	// (0x0003357e) cursor_text_primary_small_t1

0xc243,	// (0x00038bb0) cursor_primary_small_pane_g1_copy1

0x6c03,	// (0x00033570) cursor_text_primary_small_t1_copy1

0x6bf5,	// (0x00033562) cursor_text_title_t1

0xc239,	// (0x00038ba6) cursor_title_pane_g1

0xb90b,	// (0x00038278) cursor_digital_pane_g1

0x5fee,	// (0x0003295b) cursor_text_digital_t1

0x6b96,	// (0x00033503) link_highlight_primary_pane_g1

0x6b9e,	// (0x0003350b) link_highlight_primary_pane_t1

0x5ffc,	// (0x00032969) link_highlight_primary_small_pane_g1

0x6004,	// (0x00032971) link_highlight_primary_small_pane_t1

0x5ffc,	// (0x00032969) link_highlight_secondary_pane_g1

0x6013,	// (0x00032980) link_highlight_secondary_pane_t1

0x6b0a,	// (0x00033477) link_highlight_title_pane_g1

0x6b12,	// (0x0003347f) link_highlight_title_pane_t1

0x6af3,	// (0x00033460) link_highlight_digital_pane_g1

0x6afb,	// (0x00033468) link_highlight_digital_pane_t1

0x69e7,	// (0x00033354) copy_highlight_primary_pane_g1

0x69ef,	// (0x0003335c) copy_highlight_primary_pane_t1

0x69c1,	// (0x0003332e) copy_highlight_primary_small_pane_g1

0x69d8,	// (0x00033345) copy_highlight_primary_small_pane_t1

0x6022,	// (0x0003298f) copy_highlight_secondary_pane_g1

0x602a,	// (0x00032997) copy_highlight_secondary_pane_t1

0x69c1,	// (0x0003332e) copy_highlight_title_pane_g1

0x69c9,	// (0x00033336) copy_highlight_title_pane_t1

0x69e7,	// (0x00033354) copy_highlight_digital_pane_g1

0x7828,	// (0x00034195) copy_highlight_digital_pane_t1

0x777c,	// (0x000340e9) graphic_text_primary_pane_g1

0x780c,	// (0x00034179) graphic_text_primary_pane_t1

0x781a,	// (0x00034187) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0003c379) graphic_text_primary_pane_t

0x77e8,	// (0x00034155) graphic_text_primary_small_pane_g1

0x77f0,	// (0x0003415d) graphic_text_primary_small_pane_t1

0x77fe,	// (0x0003416b) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0003c374) graphic_text_primary_small_pane_t

0x77c4,	// (0x00034131) graphic_text_secondary_pane_g1

0x77cc,	// (0x00034139) graphic_text_secondary_pane_t1

0x77da,	// (0x00034147) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0003c36f) graphic_text_secondary_pane_t

0x77a0,	// (0x0003410d) graphic_text_title_pane_g1

0x77a8,	// (0x00034115) graphic_text_title_pane_t1

0x77b6,	// (0x00034123) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0003c36a) graphic_text_title_pane_t

0x777c,	// (0x000340e9) graphic_text_digital_pane_g1

0x7784,	// (0x000340f1) graphic_text_digital_pane_t1

0x7792,	// (0x000340ff) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0003c365) graphic_text_digital_pane_t

0x4eca,	// (0x00031837) navi_icon_pane_srt_ParamLimits

0x4eca,	// (0x00031837) navi_icon_pane_srt

0x4e6e,	// (0x000317db) navi_midp_pane_srt

0x4e6e,	// (0x000317db) navi_navi_pane_srt

0x4eca,	// (0x00031837) navi_text_pane_srt_ParamLimits

0x4eca,	// (0x00031837) navi_text_pane_srt

0x7747,	// (0x000340b4) navi_navi_icon_text_pane_srt

0x774f,	// (0x000340bc) navi_navi_pane_srt_g1_ParamLimits

0x774f,	// (0x000340bc) navi_navi_pane_srt_g1

0x7761,	// (0x000340ce) navi_navi_pane_srt_g2_ParamLimits

0x7761,	// (0x000340ce) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0003c360) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0003c360) navi_navi_pane_srt_g

0x7773,	// (0x000340e0) navi_navi_tabs_pane_srt

0x7747,	// (0x000340b4) navi_navi_text_pane_srt

0x7747,	// (0x000340b4) navi_navi_volume_pane_srt

0x7738,	// (0x000340a5) navi_navi_text_pane_srt_t1

0xaad3,	// (0x00037440) navi_navi_volume_pane_srt_g1

0xaadb,	// (0x00037448) volume_small_pane_srt_ParamLimits

0xaadb,	// (0x00037448) volume_small_pane_srt

0xa40a,	// (0x00036d77) volume_small_pane_srt_g1_ParamLimits

0xa40a,	// (0x00036d77) volume_small_pane_srt_g1

0xa41a,	// (0x00036d87) volume_small_pane_srt_g2_ParamLimits

0xa41a,	// (0x00036d87) volume_small_pane_srt_g2

0xa42b,	// (0x00036d98) volume_small_pane_srt_g3_ParamLimits

0xa42b,	// (0x00036d98) volume_small_pane_srt_g3

0xa43c,	// (0x00036da9) volume_small_pane_srt_g4_ParamLimits

0xa43c,	// (0x00036da9) volume_small_pane_srt_g4

0xa44d,	// (0x00036dba) volume_small_pane_srt_g5_ParamLimits

0xa44d,	// (0x00036dba) volume_small_pane_srt_g5

0xa45e,	// (0x00036dcb) volume_small_pane_srt_g6_ParamLimits

0xa45e,	// (0x00036dcb) volume_small_pane_srt_g6

0xa46f,	// (0x00036ddc) volume_small_pane_srt_g7_ParamLimits

0xa46f,	// (0x00036ddc) volume_small_pane_srt_g7

0xa480,	// (0x00036ded) volume_small_pane_srt_g8_ParamLimits

0xa480,	// (0x00036ded) volume_small_pane_srt_g8

0xa491,	// (0x00036dfe) volume_small_pane_srt_g9_ParamLimits

0xa491,	// (0x00036dfe) volume_small_pane_srt_g9

0xa4a2,	// (0x00036e0f) volume_small_pane_srt_g10_ParamLimits

0xa4a2,	// (0x00036e0f) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003c10f) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003c10f) volume_small_pane_srt_g

0x514b,	// (0x00031ab8) query_popup_data_pane_cp2

0x771e,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x771e,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1

0x6c2d,	// (0x0003359a) navi_tabs_2_long_pane_srt

0x6c2d,	// (0x0003359a) navi_tabs_2_pane_srt

0x6c2d,	// (0x0003359a) navi_tabs_3_long_pane_srt

0x6c2d,	// (0x0003359a) navi_tabs_3_pane_srt

0x6c2d,	// (0x0003359a) navi_tabs_4_pane_srt

0xaab3,	// (0x00037420) tabs_2_active_pane_srt_ParamLimits

0xaab3,	// (0x00037420) tabs_2_active_pane_srt

0xaac3,	// (0x00037430) tabs_2_passive_pane_srt_ParamLimits

0xaac3,	// (0x00037430) tabs_2_passive_pane_srt

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp1_srt

0x7705,	// (0x00034072) bg_passive_tab_pane_g1_cp1_srt

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp1_srt

0x76fc,	// (0x00034069) bg_passive_tab_pane_g3_cp1_srt

0x4eca,	// (0x00031837) bg_active_tab_pane_cp1_srt_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp1_srt

0x770e,	// (0x0003407b) tabs_2_active_pane_srt_g1

0xc5fd,	// (0x00038f6a) tabs_2_active_pane_srt_t1_ParamLimits

0xc5fd,	// (0x00038f6a) tabs_2_active_pane_srt_t1

0x7705,	// (0x00034072) bg_active_tab_pane_g1_cp1_srt

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp1_srt

0x76fc,	// (0x00034069) bg_active_tab_pane_g3_cp1_srt

0xaa80,	// (0x000373ed) tabs_3_active_pane_srt_ParamLimits

0xaa80,	// (0x000373ed) tabs_3_active_pane_srt

0xaa91,	// (0x000373fe) tabs_3_passive_pane_cp_srt_ParamLimits

0xaa91,	// (0x000373fe) tabs_3_passive_pane_cp_srt

0xaaa2,	// (0x0003740f) tabs_3_passive_pane_srt_ParamLimits

0xaaa2,	// (0x0003740f) tabs_3_passive_pane_srt

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5671,	// (0x00031fde) bg_passive_tab_pane_cp2_srt

0x6042,	// (0x000329af) bg_passive_tab_pane_g1_cp2_srt

0x5c05,	// (0x00032572) bg_passive_tab_pane_g2_cp2_srt

0x6039,	// (0x000329a6) bg_passive_tab_pane_g3_cp2_srt

0x4eca,	// (0x00031837) bg_active_tab_pane_cp2_srt_ParamLimits

0x4eca,	// (0x00031837) bg_active_tab_pane_cp2_srt

0x76f4,	// (0x00034061) tabs_3_active_pane_srt_g1

0xc5eb,	// (0x00038f58) tabs_3_active_pane_srt_t1_ParamLimits

0xc5eb,	// (0x00038f58) tabs_3_active_pane_srt_t1

0x6042,	// (0x000329af) bg_active_tab_pane_g1_cp2_srt

0x5c05,	// (0x00032572) bg_active_tab_pane_g2_cp2_srt

0x6039,	// (0x000329a6) bg_active_tab_pane_g3_cp2_srt

0xaa38,	// (0x000373a5) tabs_4_active_pane_srt_ParamLimits

0xaa38,	// (0x000373a5) tabs_4_active_pane_srt

0xaa4a,	// (0x000373b7) tabs_4_passive_pane_cp2_srt_ParamLimits

0xaa4a,	// (0x000373b7) tabs_4_passive_pane_cp2_srt

0x6166,	// (0x00032ad3) aid_size_cell_toolbar

0x9eba,	// (0x00036827) main_idle_act_pane_ParamLimits

0x623e,	// (0x00032bab) popup_large_graphic_colour_window_ParamLimits

0xbd77,	// (0x000386e4) popup_toolbar_window_ParamLimits

0xbd77,	// (0x000386e4) popup_toolbar_window

0x761b,	// (0x00033f88) list_single_graphic_2heading_pane_ParamLimits

0x761b,	// (0x00033f88) list_single_graphic_2heading_pane

0x581b,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane

0x582d,	// (0x0003219a) aid_size_cell_apps_grid_prt_pane

0x5671,	// (0x00031fde) bg_wml_button_pane_cp1_ParamLimits

0x5671,	// (0x00031fde) bg_wml_button_pane_cp1

0xc1c6,	// (0x00038b33) form_midp_field_text_pane_t1_ParamLimits

0x6594,	// (0x00032f01) input_focus_pane_cp050_ParamLimits

0x66dc,	// (0x00033049) list_midp_form_text_pane_ParamLimits

0x66b9,	// (0x00033026) input_focus_pane_cp051_ParamLimits

0x66cd,	// (0x0003303a) list_midp_choice_pane_ParamLimits

0xc114,	// (0x00038a81) list_single_2graphic_pane_cp3_ParamLimits

0xc114,	// (0x00038a81) list_single_2graphic_pane_cp3

0xc140,	// (0x00038aad) list_single_midp_graphic_pane_ParamLimits

0xc140,	// (0x00038aad) list_single_midp_graphic_pane

0x8fa8,	// (0x00035915) list_single_graphic_2heading_pane_g1_ParamLimits

0x8fa8,	// (0x00035915) list_single_graphic_2heading_pane_g1

0x8fb4,	// (0x00035921) list_single_graphic_2heading_pane_g4_ParamLimits

0x8fb4,	// (0x00035921) list_single_graphic_2heading_pane_g4

0x8fc0,	// (0x0003592d) list_single_graphic_2heading_pane_g5_ParamLimits

0x8fc0,	// (0x0003592d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003c162) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003c162) list_single_graphic_2heading_pane_g

0x8fcc,	// (0x00035939) list_single_graphic_2heading_pane_t1_ParamLimits

0x8fcc,	// (0x00035939) list_single_graphic_2heading_pane_t1

0x8fe0,	// (0x0003594d) list_single_graphic_2heading_pane_t2_ParamLimits

0x8fe0,	// (0x0003594d) list_single_graphic_2heading_pane_t2

0x8ffc,	// (0x00035969) list_single_graphic_2heading_pane_t3_ParamLimits

0x8ffc,	// (0x00035969) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003c169) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003c169) list_single_graphic_2heading_pane_t

0x63e2,	// (0x00032d4f) bg_popup_sub_pane_cp2

0x640c,	// (0x00032d79) grid_toobar_pane

0xa622,	// (0x00036f8f) cell_toolbar_pane_ParamLimits

0xa622,	// (0x00036f8f) cell_toolbar_pane

0x6448,	// (0x00032db5) cell_toolbar_pane_g1_ParamLimits

0x6448,	// (0x00032db5) cell_toolbar_pane_g1

0x645c,	// (0x00032dc9) cell_toolbar_pane_g2_ParamLimits

0x645c,	// (0x00032dc9) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003c177) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003c177) cell_toolbar_pane_g

0x647e,	// (0x00032deb) grid_highlight_pane_cp2_ParamLimits

0x647e,	// (0x00032deb) grid_highlight_pane_cp2

0x6498,	// (0x00032e05) toolbar_button_pane

0x64a4,	// (0x00032e11) toolbar_button_pane_g1

0x64b4,	// (0x00032e21) toolbar_button_pane_g2

0x64ac,	// (0x00032e19) toolbar_button_pane_g3

0x64c4,	// (0x00032e31) toolbar_button_pane_g4

0x64bc,	// (0x00032e29) toolbar_button_pane_g5

0x64cc,	// (0x00032e39) toolbar_button_pane_g6

0x64d4,	// (0x00032e41) toolbar_button_pane_g7

0x64e4,	// (0x00032e51) toolbar_button_pane_g8

0x64dc,	// (0x00032e49) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003c17c) toolbar_button_pane_g

0xa65a,	// (0x00036fc7) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa65a,	// (0x00036fc7) list_single_2graphic_pane_g1_cp3

0xa666,	// (0x00036fd3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa666,	// (0x00036fd3) list_single_2graphic_pane_g2_cp3

0x5d88,	// (0x000326f5) list_single_2graphic_pane_g3_cp3

0xa677,	// (0x00036fe4) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa677,	// (0x00036fe4) list_single_2graphic_pane_g4_cp3

0xa683,	// (0x00036ff0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa683,	// (0x00036ff0) list_single_2graphic_pane_t1_cp3

0x5d7c,	// (0x000326e9) list_single_midp_graphic_pane_g2_ParamLimits

0x5d7c,	// (0x000326e9) list_single_midp_graphic_pane_g2

0x8f90,	// (0x000358fd) aid_zoom_text_primary

0x8f98,	// (0x00035905) aid_zoom_text_secondary

0x60f6,	// (0x00032a63) status_small_pane_g7_ParamLimits

0x60f6,	// (0x00032a63) status_small_pane_g7

0x6119,	// (0x00032a86) status_small_pane_t1_ParamLimits

0x9a5f,	// (0x000363cc) title_pane_g2

0x0003,

0xf592,	// (0x0003beff) title_pane_g

0x9cb9,	// (0x00036626) aid_size_cell_colour_1_pane_ParamLimits

0x9cb9,	// (0x00036626) aid_size_cell_colour_1_pane

0x9ccd,	// (0x0003663a) aid_size_cell_colour_2_pane_ParamLimits

0x9ccd,	// (0x0003663a) aid_size_cell_colour_2_pane

0x9ce1,	// (0x0003664e) aid_size_cell_colour_3_pane_ParamLimits

0x9ce1,	// (0x0003664e) aid_size_cell_colour_3_pane

0x9cf5,	// (0x00036662) aid_size_cell_colour_4_pane_ParamLimits

0x9cf5,	// (0x00036662) aid_size_cell_colour_4_pane

0x9f14,	// (0x00036881) title_pane_stacon_g1_ParamLimits

0x9f14,	// (0x00036881) title_pane_stacon_g1

0x6a46,	// (0x000333b3) popup_note_wait_window_g3_ParamLimits

0x6a46,	// (0x000333b3) popup_note_wait_window_g3

0x6abc,	// (0x00033429) popup_note_wait_window_t5_ParamLimits

0x6abc,	// (0x00033429) popup_note_wait_window_t5

0x4e6e,	// (0x000317db) main_feb_china_hwr_fs_writing_pane

0xb9a0,	// (0x0003830d) popup_feb_china_hwr_fs_window_ParamLimits

0xb9a0,	// (0x0003830d) popup_feb_china_hwr_fs_window

0xa6b3,	// (0x00037020) aid_size_cell_hwr_fs_ParamLimits

0xa6b3,	// (0x00037020) aid_size_cell_hwr_fs

0x6594,	// (0x00032f01) bg_popup_sub_pane_cp3_ParamLimits

0x6594,	// (0x00032f01) bg_popup_sub_pane_cp3

0xa6c8,	// (0x00037035) grid_hwr_fs_pane_ParamLimits

0xa6c8,	// (0x00037035) grid_hwr_fs_pane

0xa6e0,	// (0x0003704d) linegrid_hwr_fs_pane_ParamLimits

0xa6e0,	// (0x0003704d) linegrid_hwr_fs_pane

0xa6f0,	// (0x0003705d) cell_hwr_fs_pane_ParamLimits

0xa6f0,	// (0x0003705d) cell_hwr_fs_pane

0x65a0,	// (0x00032f0d) linegrid_hwr_fs_pane_g1_ParamLimits

0x65a0,	// (0x00032f0d) linegrid_hwr_fs_pane_g1

0xc0e8,	// (0x00038a55) linegrid_hwr_fs_pane_g2_ParamLimits

0xc0e8,	// (0x00038a55) linegrid_hwr_fs_pane_g2

0x65ac,	// (0x00032f19) linegrid_hwr_fs_pane_g3_ParamLimits

0x65ac,	// (0x00032f19) linegrid_hwr_fs_pane_g3

0xa712,	// (0x0003707f) linegrid_hwr_fs_pane_g4_ParamLimits

0xa712,	// (0x0003707f) linegrid_hwr_fs_pane_g4

0xa72c,	// (0x00037099) linegrid_hwr_fs_pane_g5_ParamLimits

0xa72c,	// (0x00037099) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0003c1a7) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0003c1a7) linegrid_hwr_fs_pane_g

0x65b8,	// (0x00032f25) cell_hwr_fs_pane_g1_ParamLimits

0x65b8,	// (0x00032f25) cell_hwr_fs_pane_g1

0x63b0,	// (0x00032d1d) cell_hwr_fs_pane_g2_ParamLimits

0x63b0,	// (0x00032d1d) cell_hwr_fs_pane_g2

0xc0fa,	// (0x00038a67) cell_hwr_fs_pane_g3_ParamLimits

0xc0fa,	// (0x00038a67) cell_hwr_fs_pane_g3

0xc107,	// (0x00038a74) cell_hwr_fs_pane_g4_ParamLimits

0xc107,	// (0x00038a74) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0003c1b2) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0003c1b2) cell_hwr_fs_pane_g

0xa742,	// (0x000370af) cell_hwr_fs_pane_t1

0x4e6e,	// (0x000317db) grid_highlight_pane_cp6

0x4e6e,	// (0x000317db) main_idle_act2_pane

0x5620,	// (0x00031f8d) aid_inside_area_popup_secondary

0xc26d,	// (0x00038bda) aid_inside_area_window_primary_ParamLimits

0xc26d,	// (0x00038bda) aid_inside_area_window_primary

0x7837,	// (0x000341a4) ai2_news_ticker_pane

0x783f,	// (0x000341ac) aid_size_cell_ai1_link_ParamLimits

0x783f,	// (0x000341ac) aid_size_cell_ai1_link

0x7859,	// (0x000341c6) popup_ai2_data_window_ParamLimits

0x7859,	// (0x000341c6) popup_ai2_data_window

0x786d,	// (0x000341da) popup_ai2_link_window_ParamLimits

0x786d,	// (0x000341da) popup_ai2_link_window

0x6594,	// (0x00032f01) bg_popup_sub_pane_cp4_ParamLimits

0x6594,	// (0x00032f01) bg_popup_sub_pane_cp4

0x7881,	// (0x000341ee) grid_ai2_link_pane_ParamLimits

0x7881,	// (0x000341ee) grid_ai2_link_pane

0x7898,	// (0x00034205) popup_ai2_link_window_g1_ParamLimits

0x7898,	// (0x00034205) popup_ai2_link_window_g1

0x78a4,	// (0x00034211) popup_ai2_link_window_g2_ParamLimits

0x78a4,	// (0x00034211) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0003c37e) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0003c37e) popup_ai2_link_window_g

0x78b3,	// (0x00034220) ai2_mp_button_pane

0x78bb,	// (0x00034228) ai2_mp_volume_pane

0x66b9,	// (0x00033026) bg_popup_sub_pane_cp5_ParamLimits

0x66b9,	// (0x00033026) bg_popup_sub_pane_cp5

0x78c3,	// (0x00034230) heading_ai2_gene_pane_ParamLimits

0x78c3,	// (0x00034230) heading_ai2_gene_pane

0x78cf,	// (0x0003423c) list_ai2_gene_pane_ParamLimits

0x78cf,	// (0x0003423c) list_ai2_gene_pane

0x7917,	// (0x00034284) cell_ai2_link_pane_ParamLimits

0x7917,	// (0x00034284) cell_ai2_link_pane

0x792d,	// (0x0003429a) cell_ai2_link_pane_g1

0x4e6e,	// (0x000317db) grid_highlight_pane_cp7

0xaaf0,	// (0x0003745d) ai2_mp_volume_pane_g1

0x79fe,	// (0x0003436b) ai2_mp_volume_pane_g2

0x7973,	// (0x000342e0) list_ai2_gene_pane_t1

0x7a06,	// (0x00034373) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0003c397) ai2_mp_volume_pane_g

0xaaf8,	// (0x00037465) volume_small_pane_cp3

0x7a0e,	// (0x0003437b) aid_size_cell_ai2_button

0x7a16,	// (0x00034383) grid_ai2_button_pane

0x7a1f,	// (0x0003438c) cell_ai2_button_pane_ParamLimits

0x7a1f,	// (0x0003438c) cell_ai2_button_pane

0x4e64,	// (0x000317d1) cell_ai2_button_pane_g1

0x4e6e,	// (0x000317db) grid_highlight_pane_cp8

0x79be,	// (0x0003432b) ai2_gene_pane_t1_ParamLimits

0x79be,	// (0x0003432b) ai2_gene_pane_t1

0xb93c,	// (0x000382a9) aid_height_parent_landscape

0xc3e0,	// (0x00038d4d) aid_height_set_list

0x7412,	// (0x00033d7f) aid_size_parent

0x769e,	// (0x0003400b) aid_size_cell_graphic_pane_ParamLimits

0x78df,	// (0x0003424c) popup_ai2_data_window_g1_ParamLimits

0x78df,	// (0x0003424c) popup_ai2_data_window_g1

0x78eb,	// (0x00034258) ai2_news_ticker_pane_g1

0x78f3,	// (0x00034260) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0003c383) ai2_news_ticker_pane_g

0x78fb,	// (0x00034268) ai2_news_ticker_pane_t1

0x7909,	// (0x00034276) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0003c388) ai2_news_ticker_pane_t

0x7936,	// (0x000342a3) heading_ai2_gene_pane_g1

0x793e,	// (0x000342ab) heading_ai2_gene_pane_t1_ParamLimits

0x793e,	// (0x000342ab) heading_ai2_gene_pane_t1

0x7953,	// (0x000342c0) list_highlight_pane_cp6

0x795b,	// (0x000342c8) ai2_gene_pane_ParamLimits

0x795b,	// (0x000342c8) ai2_gene_pane

0x7981,	// (0x000342ee) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0003c38d) list_ai2_gene_pane_t

0x798f,	// (0x000342fc) list_highlight_pane_cp8_ParamLimits

0x798f,	// (0x000342fc) list_highlight_pane_cp8

0x79a0,	// (0x0003430d) ai2_gene_pane_g1_ParamLimits

0x79a0,	// (0x0003430d) ai2_gene_pane_g1

0x79b2,	// (0x0003431f) ai2_gene_pane_g2_ParamLimits

0x79b2,	// (0x0003431f) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0003c392) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0003c392) ai2_gene_pane_g

0x54b0,	// (0x00031e1d) scroll_pane_cp12

0xa5c5,	// (0x00036f32) control_pane_t3_ParamLimits

0xa5c5,	// (0x00036f32) control_pane_t3

0x610a,	// (0x00032a77) status_small_pane_g8_ParamLimits

0x610a,	// (0x00032a77) status_small_pane_g8

0xba2a,	// (0x00038397) popup_find_window_ParamLimits

0xbc17,	// (0x00038584) popup_note_image_window_ParamLimits

0x9014,	// (0x00035981) list_double2_graphic_pane_vc_g1_ParamLimits

0x9014,	// (0x00035981) list_double2_graphic_pane_vc_g1

0x9d8d,	// (0x000366fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x9d8d,	// (0x000366fa) list_double2_graphic_pane_vc_g2

0x9d99,	// (0x00036706) list_double2_graphic_pane_vc_g3_ParamLimits

0x9d99,	// (0x00036706) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003c170) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003c170) list_double2_graphic_pane_vc_g

0x9020,	// (0x0003598d) list_double2_graphic_pane_vc_t1_ParamLimits

0x9020,	// (0x0003598d) list_double2_graphic_pane_vc_t1

0x9d8d,	// (0x000366fa) list_single_heading_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_single_heading_pane_vc_g1

0x9d99,	// (0x00036706) list_single_heading_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_single_heading_pane_vc_g

0x9036,	// (0x000359a3) list_single_heading_pane_vc_t1_ParamLimits

0x9036,	// (0x000359a3) list_single_heading_pane_vc_t1

0x904c,	// (0x000359b9) list_single_heading_pane_vc_t2_ParamLimits

0x904c,	// (0x000359b9) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0003c196) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0003c196) list_single_heading_pane_vc_t

0x64ec,	// (0x00032e59) list_setting_number_pane_vc_g1_ParamLimits

0x64ec,	// (0x00032e59) list_setting_number_pane_vc_g1

0x64f8,	// (0x00032e65) list_setting_number_pane_vc_g2_ParamLimits

0x64f8,	// (0x00032e65) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0003c19b) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0003c19b) list_setting_number_pane_vc_g

0x6504,	// (0x00032e71) list_setting_number_pane_vc_t1_ParamLimits

0x6504,	// (0x00032e71) list_setting_number_pane_vc_t1

0x6518,	// (0x00032e85) list_setting_number_pane_vc_t2_ParamLimits

0x6518,	// (0x00032e85) list_setting_number_pane_vc_t2

0x6534,	// (0x00032ea1) list_setting_number_pane_vc_t3_ParamLimits

0x6534,	// (0x00032ea1) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0003c1a0) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0003c1a0) list_setting_number_pane_vc_t

0x655c,	// (0x00032ec9) set_value_pane_vc_ParamLimits

0x655c,	// (0x00032ec9) set_value_pane_vc

0x761b,	// (0x00033f88) list_double2_graphic_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double2_graphic_pane_vc

0x761b,	// (0x00033f88) list_double2_large_graphic_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double2_large_graphic_pane_vc

0x761b,	// (0x00033f88) list_double2_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double2_pane_vc

0x761b,	// (0x00033f88) list_double_graphic_heading_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_graphic_heading_pane_vc

0x761b,	// (0x00033f88) list_double_graphic_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_graphic_pane_vc

0x761b,	// (0x00033f88) list_double_heading_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_heading_pane_vc

0x761b,	// (0x00033f88) list_double_large_graphic_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_large_graphic_pane_vc

0x761b,	// (0x00033f88) list_double_number_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_number_pane_vc

0x761b,	// (0x00033f88) list_double_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_pane_vc

0x761b,	// (0x00033f88) list_double_time_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_double_time_pane_vc

0x761b,	// (0x00033f88) list_setting_number_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_setting_number_pane_vc

0x761b,	// (0x00033f88) list_setting_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_setting_pane_vc

0x761b,	// (0x00033f88) list_single_graphic_heading_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_single_graphic_heading_pane_vc

0x761b,	// (0x00033f88) list_single_heading_pane_vc_ParamLimits

0x761b,	// (0x00033f88) list_single_heading_pane_vc

0xa9a1,	// (0x0003730e) list_single_number_heading_pane_vc_ParamLimits

0xa9a1,	// (0x0003730e) list_single_number_heading_pane_vc

0x9014,	// (0x00035981) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9014,	// (0x00035981) list_double_graphic_heading_pane_vc_g1

0x9d8d,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9d8d,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2

0x9d99,	// (0x00036706) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9d99,	// (0x00036706) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003c170) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c170) list_double_graphic_heading_pane_vc_g

0x9153,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9153,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1

0x9036,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9036,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0003c39e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0003c39e) list_double_graphic_heading_pane_vc_t

0x64ec,	// (0x00032e59) list_setting_pane_vc_g1_ParamLimits

0x64ec,	// (0x00032e59) list_setting_pane_vc_g1

0x64f8,	// (0x00032e65) list_setting_pane_vc_g2_ParamLimits

0x64f8,	// (0x00032e65) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0003c19b) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0003c19b) list_setting_pane_vc_g

0x7c15,	// (0x00034582) list_setting_pane_vc_t1_ParamLimits

0x7c15,	// (0x00034582) list_setting_pane_vc_t1

0x7c29,	// (0x00034596) list_setting_pane_vc_t2_ParamLimits

0x7c29,	// (0x00034596) list_setting_pane_vc_t2

0x0001,

0xfa74,	// (0x0003c3e1) list_setting_pane_vc_t_ParamLimits

0xfa74,	// (0x0003c3e1) list_setting_pane_vc_t

0x655c,	// (0x00032ec9) set_value_pane_cp_vc_ParamLimits

0x655c,	// (0x00032ec9) set_value_pane_cp_vc

0x9d8d,	// (0x000366fa) list_single_number_heading_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_single_number_heading_pane_vc_g1

0x9d99,	// (0x00036706) list_single_number_heading_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_single_number_heading_pane_vc_g

0x9036,	// (0x000359a3) list_single_number_heading_pane_vc_t1_ParamLimits

0x9036,	// (0x000359a3) list_single_number_heading_pane_vc_t1

0x9167,	// (0x00035ad4) list_single_number_heading_pane_vc_t2_ParamLimits

0x9167,	// (0x00035ad4) list_single_number_heading_pane_vc_t2

0x917b,	// (0x00035ae8) list_single_number_heading_pane_vc_t3_ParamLimits

0x917b,	// (0x00035ae8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa79,	// (0x0003c3e6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003c3e6) list_single_number_heading_pane_vc_t

0x9014,	// (0x00035981) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9014,	// (0x00035981) list_single_graphic_heading_pane_vc_g1

0x9d8d,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9d8d,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4

0x9d99,	// (0x00036706) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9d99,	// (0x00036706) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003c170) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c170) list_single_graphic_heading_pane_vc_g

0x9036,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9036,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1

0x918d,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x918d,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x0003c3ed) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x0003c3ed) list_single_graphic_heading_pane_vc_t

0x9d8d,	// (0x000366fa) list_double2_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_double2_pane_vc_g1

0x9d99,	// (0x00036706) list_double2_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_double2_pane_vc_g

0x91a1,	// (0x00035b0e) list_double2_pane_vc_t1_ParamLimits

0x91a1,	// (0x00035b0e) list_double2_pane_vc_t1

0xab52,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xab52,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1

0x9d8d,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9d8d,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2

0x9d99,	// (0x00036706) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9d99,	// (0x00036706) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x0003c3f2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x0003c3f2) list_double2_large_graphic_pane_vc_g

0x91b7,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x91b7,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1

0xab5e,	// (0x000374cb) list_double_time_pane_vc_g1_ParamLimits

0xab5e,	// (0x000374cb) list_double_time_pane_vc_g1

0xab6a,	// (0x000374d7) list_double_time_pane_vc_g2_ParamLimits

0xab6a,	// (0x000374d7) list_double_time_pane_vc_g2

0x0001,

0xfa8c,	// (0x0003c3f9) list_double_time_pane_vc_g_ParamLimits

0xfa8c,	// (0x0003c3f9) list_double_time_pane_vc_g

0x91cd,	// (0x00035b3a) list_double_time_pane_vc_t1_ParamLimits

0x91cd,	// (0x00035b3a) list_double_time_pane_vc_t1

0x91e6,	// (0x00035b53) list_double_time_pane_vc_t2_ParamLimits

0x91e6,	// (0x00035b53) list_double_time_pane_vc_t2

0x9226,	// (0x00035b93) list_double_time_pane_vc_t3_ParamLimits

0x9226,	// (0x00035b93) list_double_time_pane_vc_t3

0x923e,	// (0x00035bab) list_double_time_pane_vc_t4_ParamLimits

0x923e,	// (0x00035bab) list_double_time_pane_vc_t4

0x0003,

0xfa91,	// (0x0003c3fe) list_double_time_pane_vc_t_ParamLimits

0xfa91,	// (0x0003c3fe) list_double_time_pane_vc_t

0x9d8d,	// (0x000366fa) list_double_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_double_pane_vc_g1

0x9d99,	// (0x00036706) list_double_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_double_pane_vc_g

0x9252,	// (0x00035bbf) list_double_pane_vc_t1_ParamLimits

0x9252,	// (0x00035bbf) list_double_pane_vc_t1

0x9264,	// (0x00035bd1) list_double_pane_vc_t2_ParamLimits

0x9264,	// (0x00035bd1) list_double_pane_vc_t2

0x0001,

0xfa9a,	// (0x0003c407) list_double_pane_vc_t_ParamLimits

0xfa9a,	// (0x0003c407) list_double_pane_vc_t

0x9d8d,	// (0x000366fa) list_double_number_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_double_number_pane_vc_g1

0x9d99,	// (0x00036706) list_double_number_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_double_number_pane_vc_g

0x927c,	// (0x00035be9) list_double_number_pane_vc_t1_ParamLimits

0x927c,	// (0x00035be9) list_double_number_pane_vc_t1

0x9290,	// (0x00035bfd) list_double_number_pane_vc_t2_ParamLimits

0x9290,	// (0x00035bfd) list_double_number_pane_vc_t2

0x9264,	// (0x00035bd1) list_double_number_pane_vc_t3_ParamLimits

0x9264,	// (0x00035bd1) list_double_number_pane_vc_t3

0x0002,

0xfa9f,	// (0x0003c40c) list_double_number_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003c40c) list_double_number_pane_vc_t

0xab76,	// (0x000374e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0xab76,	// (0x000374e3) list_double_large_graphic_pane_vc_g1

0xab82,	// (0x000374ef) list_double_large_graphic_pane_vc_g2_ParamLimits

0xab82,	// (0x000374ef) list_double_large_graphic_pane_vc_g2

0x9d99,	// (0x00036706) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9d99,	// (0x00036706) list_double_large_graphic_pane_vc_g3

0x92a2,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x92a2,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa6,	// (0x0003c413) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003c413) list_double_large_graphic_pane_vc_g

0x92ae,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x92ae,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1

0x92c0,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x92c0,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003c41c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003c41c) list_double_large_graphic_pane_vc_t

0x9d8d,	// (0x000366fa) list_double_heading_pane_vc_g1_ParamLimits

0x9d8d,	// (0x000366fa) list_double_heading_pane_vc_g1

0x9d99,	// (0x00036706) list_double_heading_pane_vc_g2_ParamLimits

0x9d99,	// (0x00036706) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003c191) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003c191) list_double_heading_pane_vc_g

0x92d9,	// (0x00035c46) list_double_heading_pane_vc_t1_ParamLimits

0x92d9,	// (0x00035c46) list_double_heading_pane_vc_t1

0x9036,	// (0x000359a3) list_double_heading_pane_vc_t2_ParamLimits

0x9036,	// (0x000359a3) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0003c421) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0003c421) list_double_heading_pane_vc_t

0x9014,	// (0x00035981) list_double_graphic_pane_vc_g1_ParamLimits

0x9014,	// (0x00035981) list_double_graphic_pane_vc_g1

0xab91,	// (0x000374fe) list_double_graphic_pane_vc_g2_ParamLimits

0xab91,	// (0x000374fe) list_double_graphic_pane_vc_g2

0xaba0,	// (0x0003750d) list_double_graphic_pane_vc_g3_ParamLimits

0xaba0,	// (0x0003750d) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0003c426) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0003c426) list_double_graphic_pane_vc_g

0x92ed,	// (0x00035c5a) list_double_graphic_pane_vc_t1_ParamLimits

0x92ed,	// (0x00035c5a) list_double_graphic_pane_vc_t1

0x9264,	// (0x00035bd1) list_double_graphic_pane_vc_t2_ParamLimits

0x9264,	// (0x00035bd1) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0003c42d) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0003c42d) list_double_graphic_pane_vc_t

0x9699,	// (0x00036006) aid_size_cell_fastswap

0x96a1,	// (0x0003600e) aid_size_cell_touch_ParamLimits

0x96a1,	// (0x0003600e) aid_size_cell_touch

0x98fc,	// (0x00036269) popup_fast_swap_wide_window_ParamLimits

0x98fc,	// (0x00036269) popup_fast_swap_wide_window

0x99f2,	// (0x0003635f) touch_pane_ParamLimits

0x99f2,	// (0x0003635f) touch_pane

0x5506,	// (0x00031e73) button_value_adjust_pane_cp2

0x8ccb,	// (0x00035638) button_value_adjust_pane_cp4

0x8ceb,	// (0x00035658) form_field_data_pane_cp2

0x8d0a,	// (0x00035677) form_field_data_wide_pane_cp2

0x5864,	// (0x000321d1) bg_scroll_pane_ParamLimits

0xa0fc,	// (0x00036a69) scroll_handle_pane_ParamLimits

0xa110,	// (0x00036a7d) scroll_sc2_down_pane_ParamLimits

0xa110,	// (0x00036a7d) scroll_sc2_down_pane

0x5895,	// (0x00032202) scroll_sc2_up_pane_ParamLimits

0x5895,	// (0x00032202) scroll_sc2_up_pane

0xc745,	// (0x000390b2) grid_wheel_folder_pane_g1_ParamLimits

0xc745,	// (0x000390b2) grid_wheel_folder_pane_g1

0xa3a2,	// (0x00036d0f) clock_nsta_pane_cp2_ParamLimits

0xa3a2,	// (0x00036d0f) clock_nsta_pane_cp2

0xb844,	// (0x000381b1) listscroll_midp_pane_ParamLimits

0xb850,	// (0x000381bd) midp_canvas_pane

0x615e,	// (0x00032acb) nsta_clock_indic_pane

0x6196,	// (0x00032b03) listscroll_form_pane_vc

0x619e,	// (0x00032b0b) listscroll_set_pane_vc_ParamLimits

0x619e,	// (0x00032b0b) listscroll_set_pane_vc

0xbe8b,	// (0x000387f8) clock_nsta_pane

0xbe98,	// (0x00038805) indicator_nsta_pane

0x63e2,	// (0x00032d4f) bg_popup_sub_pane_cp2_ParamLimits

0x63f6,	// (0x00032d63) find_pane_cp2_ParamLimits

0x63f6,	// (0x00032d63) find_pane_cp2

0x640c,	// (0x00032d79) grid_toobar_pane_ParamLimits

0x6568,	// (0x00032ed5) list_form_gen_pane_vc_ParamLimits

0x6568,	// (0x00032ed5) list_form_gen_pane_vc

0x657e,	// (0x00032eeb) scroll_pane_cp8_vc_ParamLimits

0x657e,	// (0x00032eeb) scroll_pane_cp8_vc

0x65ce,	// (0x00032f3b) data_form_wide_pane_vc_ParamLimits

0x65ce,	// (0x00032f3b) data_form_wide_pane_vc

0x65da,	// (0x00032f47) form_field_data_wide_pane_vc_g1

0x65e2,	// (0x00032f4f) form_field_data_wide_pane_vc_t1_ParamLimits

0x65e2,	// (0x00032f4f) form_field_data_wide_pane_vc_t1

0x551a,	// (0x00031e87) input_focus_pane_cp6_vc_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_cp6_vc

0xc205,	// (0x00038b72) list_midp_pane_ParamLimits

0xc211,	// (0x00038b7e) scroll_pane_cp16_ParamLimits

0xc211,	// (0x00038b7e) scroll_pane_cp16

0x6843,	// (0x000331b0) button_value_adjust_pane_ParamLimits

0x6843,	// (0x000331b0) button_value_adjust_pane

0xc3f1,	// (0x00038d5e) button_value_adjust_pane_cp6_ParamLimits

0xc3f1,	// (0x00038d5e) button_value_adjust_pane_cp6

0xc513,	// (0x00038e80) settings_code_pane_cp_ParamLimits

0xc513,	// (0x00038e80) settings_code_pane_cp

0x4e64,	// (0x000317d1) cell_touch_pane_g1

0x4e64,	// (0x000317d1) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003c0b9) cell_touch_pane_g

0xc60f,	// (0x00038f7c) cell_touch_pane_cp_ParamLimits

0xc60f,	// (0x00038f7c) cell_touch_pane_cp

0xc61f,	// (0x00038f8c) cell_touch_pane_ParamLimits

0xc61f,	// (0x00038f8c) cell_touch_pane

0x4e64,	// (0x000317d1) scroll_sc2_down_pane_g1

0x4e64,	// (0x000317d1) scroll_sc2_up_pane_g1

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp4_vc

0x7a31,	// (0x0003439e) list_set_graphic_pane_vc_g1_ParamLimits

0x7a31,	// (0x0003439e) list_set_graphic_pane_vc_g1

0x7a3d,	// (0x000343aa) list_set_graphic_pane_vc_g2_ParamLimits

0x7a3d,	// (0x000343aa) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0003c3a3) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0003c3a3) list_set_graphic_pane_vc_g

0x7a49,	// (0x000343b6) text_primary_small_cp13_vc_ParamLimits

0x7a49,	// (0x000343b6) text_primary_small_cp13_vc

0x7a61,	// (0x000343ce) list_set_graphic_pane_vc_ParamLimits

0x7a61,	// (0x000343ce) list_set_graphic_pane_vc

0x4e6e,	// (0x000317db) input_focus_pane_cp2_vc

0x4e64,	// (0x000317d1) setting_code_pane_vc_g1

0x7a75,	// (0x000343e2) setting_code_pane_vc_t1

0x7a83,	// (0x000343f0) set_text_pane_vc_t1_ParamLimits

0x7a83,	// (0x000343f0) set_text_pane_vc_t1

0x4e6e,	// (0x000317db) input_focus_pane_cp1_vc

0x7aa2,	// (0x0003440f) list_set_text_pane_vc

0x4e64,	// (0x000317d1) setting_text_pane_vc_g1

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp2_vc

0x7aac,	// (0x00034419) setting_slider_graphic_pane_vc_g1

0x7ab4,	// (0x00034421) setting_slider_graphic_pane_vc_t1

0x7ac2,	// (0x0003442f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003c3a8) setting_slider_graphic_pane_vc_t

0x7ad0,	// (0x0003443d) slider_set_pane_cp_vc

0x7ad8,	// (0x00034445) slider_set_pane_vc_g1

0x7ae1,	// (0x0003444e) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0003c3ad) slider_set_pane_vc_g

0x5581,	// (0x00031eee) set_opt_bg_pane_g1_copy1

0x5589,	// (0x00031ef6) set_opt_bg_pane_g2_copy1

0x7b0d,	// (0x0003447a) set_opt_bg_pane_g3_copy1

0x5599,	// (0x00031f06) set_opt_bg_pane_g4_copy1

0x55a1,	// (0x00031f0e) set_opt_bg_pane_g5_copy1

0x55a9,	// (0x00031f16) set_opt_bg_pane_g6_copy1

0x7b15,	// (0x00034482) set_opt_bg_pane_g7_copy1

0x7b1f,	// (0x0003448c) set_opt_bg_pane_g8_copy1

0x7b27,	// (0x00034494) set_opt_bg_pane_g9_copy1

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp_vc

0x7b2f,	// (0x0003449c) setting_slider_pane_vc_t1

0x7ab4,	// (0x00034421) setting_slider_pane_vc_t2

0x7ac2,	// (0x0003442f) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0003c3bc) setting_slider_pane_vc_t

0x7ad0,	// (0x0003443d) slider_set_pane_vc

0xa750,	// (0x000370bd) volume_set_pane_vc_g1

0xab01,	// (0x0003746e) volume_set_pane_vc_g2

0xab0a,	// (0x00037477) volume_set_pane_vc_g3

0xab13,	// (0x00037480) volume_set_pane_vc_g4

0xab1c,	// (0x00037489) volume_set_pane_vc_g5

0xab25,	// (0x00037492) volume_set_pane_vc_g6

0xab2e,	// (0x0003749b) volume_set_pane_vc_g7

0xab37,	// (0x000374a4) volume_set_pane_vc_g8

0xab40,	// (0x000374ad) volume_set_pane_vc_g9

0xab49,	// (0x000374b6) volume_set_pane_vc_g10

0x0009,

0xfa56,	// (0x0003c3c3) volume_set_pane_vc_g

0x7b3e,	// (0x000344ab) volume_set_pane_vc

0x7b46,	// (0x000344b3) button_value_adjust_pane_cp1_vc

0x7b50,	// (0x000344bd) list_highlight_pane_cp2_vc

0x7b59,	// (0x000344c6) list_set_pane_vc_ParamLimits

0x7b59,	// (0x000344c6) list_set_pane_vc

0x7bab,	// (0x00034518) main_pane_set_vc_t1_ParamLimits

0x7bab,	// (0x00034518) main_pane_set_vc_t1

0x7bc0,	// (0x0003452d) main_pane_set_vc_t2_ParamLimits

0x7bc0,	// (0x0003452d) main_pane_set_vc_t2

0x7bd2,	// (0x0003453f) main_pane_set_vc_t3_ParamLimits

0x7bd2,	// (0x0003453f) main_pane_set_vc_t3

0x7be4,	// (0x00034551) main_pane_set_vc_t4_ParamLimits

0x7be4,	// (0x00034551) main_pane_set_vc_t4

0x0003,

0xfa6b,	// (0x0003c3d8) main_pane_set_vc_t_ParamLimits

0xfa6b,	// (0x0003c3d8) main_pane_set_vc_t

0x7bf6,	// (0x00034563) setting_code_pane_vc_ParamLimits

0x7bf6,	// (0x00034563) setting_code_pane_vc

0x7c05,	// (0x00034572) setting_slider_graphic_pane_vc

0x7c05,	// (0x00034572) setting_slider_pane_vc

0x7c05,	// (0x00034572) setting_text_pane_vc

0x7c05,	// (0x00034572) setting_volume_pane_vc

0x7c0d,	// (0x0003457a) scroll_pane_cp121_vc

0x54f4,	// (0x00031e61) set_content_pane_vc

0x7c4b,	// (0x000345b8) button_value_adjust_pane_g1

0x7c54,	// (0x000345c1) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0003c432) button_value_adjust_pane_g

0x7c5d,	// (0x000345ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7c5d,	// (0x000345ca) form_field_slider_wide_pane_vc_t1

0x7c71,	// (0x000345de) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7c71,	// (0x000345de) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0003c437) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0003c437) form_field_slider_wide_pane_vc_t

0x4ebc,	// (0x00031829) input_focus_pane_cp10_vc_ParamLimits

0x4ebc,	// (0x00031829) input_focus_pane_cp10_vc

0x7c83,	// (0x000345f0) slider_cont_pane_cp1_vc_ParamLimits

0x7c83,	// (0x000345f0) slider_cont_pane_cp1_vc

0x7ad8,	// (0x00034445) slider_form_pane_g1_cp2

0x7ae1,	// (0x0003444e) slider_form_pane_g2_cp2

0x7c9c,	// (0x00034609) form_field_slider_pane_vc_t3

0x7caa,	// (0x00034617) form_field_slider_pane_vc_t4

0x7cb8,	// (0x00034625) slider_form_pane_vc_ParamLimits

0x7cb8,	// (0x00034625) slider_form_pane_vc

0x7cc5,	// (0x00034632) form_field_slider_pane_vc_t1_ParamLimits

0x7cc5,	// (0x00034632) form_field_slider_pane_vc_t1

0x7c71,	// (0x000345de) form_field_slider_pane_vc_t2_ParamLimits

0x7c71,	// (0x000345de) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0003c447) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0003c447) form_field_slider_pane_vc_t

0x4ebc,	// (0x00031829) input_focus_pane_cp9_vc_ParamLimits

0x4ebc,	// (0x00031829) input_focus_pane_cp9_vc

0x7ce1,	// (0x0003464e) slider_cont_pane_vc_ParamLimits

0x7ce1,	// (0x0003464e) slider_cont_pane_vc

0x7cf3,	// (0x00034660) list_form_graphic_pane_cp_vc_ParamLimits

0x7cf3,	// (0x00034660) list_form_graphic_pane_cp_vc

0x65da,	// (0x00032f47) form_field_popup_wide_pane_vc_g1

0x7d08,	// (0x00034675) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7d08,	// (0x00034675) form_field_popup_wide_pane_vc_t1

0x551a,	// (0x00031e87) input_focus_pane_cp8_vc_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_cp8_vc

0x7d1f,	// (0x0003468c) list_form_wide_pane_vc_ParamLimits

0x7d1f,	// (0x0003468c) list_form_wide_pane_vc

0x7d2b,	// (0x00034698) list_form_graphic_pane_vc_g1

0x7d33,	// (0x000346a0) list_form_graphic_pane_vc_t1_ParamLimits

0x7d33,	// (0x000346a0) list_form_graphic_pane_vc_t1

0x4eca,	// (0x00031837) list_highlight_pane_cp5_vc_ParamLimits

0x4eca,	// (0x00031837) list_highlight_pane_cp5_vc

0x7d4f,	// (0x000346bc) list_form_graphic_pane_vc_ParamLimits

0x7d4f,	// (0x000346bc) list_form_graphic_pane_vc

0x65da,	// (0x00032f47) form_field_popup_pane_vc_g1

0x7d65,	// (0x000346d2) form_field_popup_pane_vc_t1_ParamLimits

0x7d65,	// (0x000346d2) form_field_popup_pane_vc_t1

0x551a,	// (0x00031e87) input_focus_pane_cp7_vc_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_cp7_vc

0x7d7c,	// (0x000346e9) list_form_pane_vc_ParamLimits

0x7d7c,	// (0x000346e9) list_form_pane_vc

0x7d88,	// (0x000346f5) data_form_pane_vc_t1_ParamLimits

0x7d88,	// (0x000346f5) data_form_pane_vc_t1

0x5581,	// (0x00031eee) input_focus_pane_vc_g1

0x5589,	// (0x00031ef6) input_focus_pane_vc_g2

0x5591,	// (0x00031efe) input_focus_pane_vc_g3

0x5599,	// (0x00031f06) input_focus_pane_vc_g4

0x55a1,	// (0x00031f0e) input_focus_pane_vc_g5

0x55a9,	// (0x00031f16) input_focus_pane_vc_g6

0x55b1,	// (0x00031f1e) input_focus_pane_vc_g7

0x55b9,	// (0x00031f26) input_focus_pane_vc_g8

0x55c1,	// (0x00031f2e) input_focus_pane_vc_g9

0x4e64,	// (0x000317d1) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003c042) input_focus_pane_vc_g

0x65ce,	// (0x00032f3b) data_form_pane_vc_ParamLimits

0x65ce,	// (0x00032f3b) data_form_pane_vc

0x65da,	// (0x00032f47) form_field_data_pane_vc_g1

0x7da3,	// (0x00034710) form_field_data_pane_vc_t1_ParamLimits

0x7da3,	// (0x00034710) form_field_data_pane_vc_t1

0x551a,	// (0x00031e87) input_focus_pane_vc_ParamLimits

0x551a,	// (0x00031e87) input_focus_pane_vc

0x7dbd,	// (0x0003472a) button_value_adjust_pane_cp3_vc

0x7dc5,	// (0x00034732) button_value_adjust_pane_cp5_vc

0x7dcd,	// (0x0003473a) form_field_data_pane_vc_ParamLimits

0x7dcd,	// (0x0003473a) form_field_data_pane_vc

0x7de4,	// (0x00034751) form_field_data_pane_vc_cp2

0x7dec,	// (0x00034759) form_field_data_wide_pane_vc_ParamLimits

0x7dec,	// (0x00034759) form_field_data_wide_pane_vc

0x7e02,	// (0x0003476f) form_field_data_wide_pane_vc_cp2

0x7e0a,	// (0x00034777) form_field_popup_pane_vc_ParamLimits

0x7e0a,	// (0x00034777) form_field_popup_pane_vc

0x7e21,	// (0x0003478e) form_field_popup_wide_pane_vc_ParamLimits

0x7e21,	// (0x0003478e) form_field_popup_wide_pane_vc

0x7e37,	// (0x000347a4) form_field_slider_pane_vc_ParamLimits

0x7e37,	// (0x000347a4) form_field_slider_pane_vc

0x7e4a,	// (0x000347b7) form_field_slider_wide_pane_vc_ParamLimits

0x7e4a,	// (0x000347b7) form_field_slider_wide_pane_vc

0xc631,	// (0x00038f9e) grid_touch_1_pane_ParamLimits

0xc631,	// (0x00038f9e) grid_touch_1_pane

0xc63d,	// (0x00038faa) grid_touch_2_pane_ParamLimits

0xc63d,	// (0x00038faa) grid_touch_2_pane

0x6150,	// (0x00032abd) touch_pane_g1_ParamLimits

0x6150,	// (0x00032abd) touch_pane_g1

0x7e5d,	// (0x000347ca) cell_app_pane_cp_wide_ParamLimits

0x7e5d,	// (0x000347ca) cell_app_pane_cp_wide

0x7e6e,	// (0x000347db) grid_popup_fast_wide_pane_ParamLimits

0x7e6e,	// (0x000347db) grid_popup_fast_wide_pane

0x7e90,	// (0x000347fd) scroll_pane_cp19_ParamLimits

0x7e90,	// (0x000347fd) scroll_pane_cp19

0x4e6e,	// (0x000317db) bg_popup_window_pane_cp20

0x7ea4,	// (0x00034811) listscroll_popup_fast_wide_pane

0x4eca,	// (0x00031837) grid_indicator_nsta_pane

0x7eac,	// (0x00034819) clock_nsta_pane_g1

0x7eb5,	// (0x00034822) clock_nsta_pane_t1

0xc655,	// (0x00038fc2) cell_indicator_nsta_pane_ParamLimits

0xc655,	// (0x00038fc2) cell_indicator_nsta_pane

0x7e82,	// (0x000347ef) cell_indicator_nsta_pane_g1

0xc68d,	// (0x00038ffa) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0003c451) cell_indicator_nsta_pane_g

0x7ed1,	// (0x0003483e) clock_nsta_pane_cp

0x7ed9,	// (0x00034846) indicator_nsta_pane_cp

0x7ee1,	// (0x0003484e) nsta_clock_indic_pane_g1

0x4f0f,	// (0x0003187c) grid_indicator_pane

0x5987,	// (0x000322f4) scroll_pane_cp29

0xa2f1,	// (0x00036c5e) indicator_nsta_pane_cp2_ParamLimits

0xa2f1,	// (0x00036c5e) indicator_nsta_pane_cp2

0x4eca,	// (0x00031837) main_apps_wheel_pane

0x66f6,	// (0x00033063) form_midp_field_text_pane_ParamLimits

0x6823,	// (0x00033190) scroll_bar_cp050_ParamLimits

0x7f19,	// (0x00034886) cell_indicator_pane_ParamLimits

0x7f19,	// (0x00034886) cell_indicator_pane

0x7f36,	// (0x000348a3) cell_indicator_pane_g1

0xc6a3,	// (0x00039010) grid_wheel_folder_pane_ParamLimits

0xc6a3,	// (0x00039010) grid_wheel_folder_pane

0xc6b9,	// (0x00039026) list_wheel_apps_pane_ParamLimits

0xc6b9,	// (0x00039026) list_wheel_apps_pane

0xc6ca,	// (0x00039037) main_apps_wheel_pane_g1_ParamLimits

0xc6ca,	// (0x00039037) main_apps_wheel_pane_g1

0xc6de,	// (0x0003904b) main_apps_wheel_pane_g2_ParamLimits

0xc6de,	// (0x0003904b) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0003c460) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0003c460) main_apps_wheel_pane_g

0xc6f6,	// (0x00039063) main_apps_wheel_pane_t1_ParamLimits

0xc6f6,	// (0x00039063) main_apps_wheel_pane_t1

0xc719,	// (0x00039086) list_wheel_apps_pane_g1

0xc721,	// (0x0003908e) list_wheel_apps_pane_g2

0xc729,	// (0x00039096) list_wheel_apps_pane_g3

0xc731,	// (0x0003909e) list_wheel_apps_pane_g4

0xc73b,	// (0x000390a8) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0003c465) list_wheel_apps_pane_g

0x5dda,	// (0x00032747) navi_icon_text_pane

0xbdcf,	// (0x0003873c) aid_fill_nsta

0xc75e,	// (0x000390cb) navi_icon_text_pane_g1

0xc76d,	// (0x000390da) navi_icon_text_pane_t1

0x5c76,	// (0x000325e3) list_set_graphic_pane_t1_ParamLimits

0x5c76,	// (0x000325e3) list_set_graphic_pane_t1

0x6efa,	// (0x00033867) popup_midp_note_alarm_window_t6_ParamLimits

0x6efa,	// (0x00033867) popup_midp_note_alarm_window_t6

0x6f0c,	// (0x00033879) popup_midp_note_alarm_window_t7_ParamLimits

0x6f0c,	// (0x00033879) popup_midp_note_alarm_window_t7

0x6f1e,	// (0x0003388b) popup_midp_note_alarm_window_t8_ParamLimits

0x6f1e,	// (0x0003388b) popup_midp_note_alarm_window_t8

0x6f30,	// (0x0003389d) popup_midp_note_alarm_window_t9_ParamLimits

0x6f30,	// (0x0003389d) popup_midp_note_alarm_window_t9

0x6f42,	// (0x000338af) popup_midp_note_alarm_window_t10_ParamLimits

0x6f42,	// (0x000338af) popup_midp_note_alarm_window_t10

0x6f54,	// (0x000338c1) popup_midp_note_alarm_window_t11_ParamLimits

0x6f54,	// (0x000338c1) popup_midp_note_alarm_window_t11

0x6f66,	// (0x000338d3) scroll_pane_cp17_ParamLimits

0x6f66,	// (0x000338d3) scroll_pane_cp17

0xa750,	// (0x000370bd) volume_small_pane_cp_g1

0xabac,	// (0x00037519) volume_small_pane_cp_g2

0xabb5,	// (0x00037522) volume_small_pane_cp_g3

0xabbe,	// (0x0003752b) volume_small_pane_cp_g4

0xabc7,	// (0x00037534) volume_small_pane_cp_g5

0xabd0,	// (0x0003753d) volume_small_pane_cp_g6

0xabd9,	// (0x00037546) volume_small_pane_cp_g7

0xabe2,	// (0x0003754f) volume_small_pane_cp_g8

0xabeb,	// (0x00037558) volume_small_pane_cp_g9

0xabf4,	// (0x00037561) volume_small_pane_cp_g10

0x5f86,	// (0x000328f3) midp_ticker_pane_g1_ParamLimits

0x5f92,	// (0x000328ff) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003c10a) midp_ticker_pane_g_ParamLimits

0xb8f9,	// (0x00038266) midp_ticker_pane_t1_ParamLimits

0xbde5,	// (0x00038752) aid_fill_nsta_2

0x680f,	// (0x0003317c) list_form2_midp_pane

0x75f9,	// (0x00033f66) midp_editing_number_pane_ParamLimits

0x7608,	// (0x00033f75) midp_ticker_pane_ParamLimits

0x7f40,	// (0x000348ad) form2_midp_field_pane

0x7f48,	// (0x000348b5) scroll_pane_cp51

0x7f68,	// (0x000348d5) form2_midp_button_pane_ParamLimits

0x7f68,	// (0x000348d5) form2_midp_button_pane

0x7f7a,	// (0x000348e7) form2_midp_content_pane_ParamLimits

0x7f7a,	// (0x000348e7) form2_midp_content_pane

0x7f94,	// (0x00034901) form2_midp_field_choice_group_pane

0x7f9c,	// (0x00034909) form2_midp_field_pane_g1

0x7fa4,	// (0x00034911) form2_midp_field_pane_g2

0x7fac,	// (0x00034919) form2_midp_field_pane_g3

0x7fb4,	// (0x00034921) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0003c48a) form2_midp_field_pane_g

0x7fbc,	// (0x00034929) form2_midp_gauge_slider_pane

0x7fc4,	// (0x00034931) form2_midp_gauge_wait_pane

0x7fcc,	// (0x00034939) form2_midp_image_pane_ParamLimits

0x7fcc,	// (0x00034939) form2_midp_image_pane

0x7fe7,	// (0x00034954) form2_midp_label_pane_ParamLimits

0x7fe7,	// (0x00034954) form2_midp_label_pane

0xc79e,	// (0x0003910b) form2_midp_label_pane_cp_ParamLimits

0xc79e,	// (0x0003910b) form2_midp_label_pane_cp

0x8000,	// (0x0003496d) form2_midp_string_pane_ParamLimits

0x8000,	// (0x0003496d) form2_midp_string_pane

0x92ff,	// (0x00035c6c) form2_midp_text_pane_ParamLimits

0x92ff,	// (0x00035c6c) form2_midp_text_pane

0x8012,	// (0x0003497f) form2_midp_time_pane

0x8022,	// (0x0003498f) input_focus_pane_cp51_ParamLimits

0x8022,	// (0x0003498f) input_focus_pane_cp51

0x803a,	// (0x000349a7) form2_midp_label_pane_t1_ParamLimits

0x803a,	// (0x000349a7) form2_midp_label_pane_t1

0x931a,	// (0x00035c87) form2_mdip_text_pane_t1_ParamLimits

0x931a,	// (0x00035c87) form2_mdip_text_pane_t1

0x9336,	// (0x00035ca3) form2_midp_time_pane_t1

0x8082,	// (0x000349ef) form2_midp_gauge_slider_pane_t1

0xc7bf,	// (0x0003912c) form2_midp_gauge_slider_pane_t2

0xc7d1,	// (0x0003913e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0003c493) form2_midp_gauge_slider_pane_t

0x8094,	// (0x00034a01) form2_midp_slider_pane

0x80a0,	// (0x00034a0d) form2_midp_gauge_wait_pane_t1

0x80ae,	// (0x00034a1b) form2_midp_wait_pane_ParamLimits

0x80ae,	// (0x00034a1b) form2_midp_wait_pane

0xc7e3,	// (0x00039150) list_single_2graphic_pane_cp4_ParamLimits

0xc7e3,	// (0x00039150) list_single_2graphic_pane_cp4

0xc140,	// (0x00038aad) list_single_midp_graphic_pane_cp_ParamLimits

0xc140,	// (0x00038aad) list_single_midp_graphic_pane_cp

0x4e6e,	// (0x000317db) list_highlight_pane_cp20

0x80d9,	// (0x00034a46) list_single_2graphic_pane_g1_cp4

0x7936,	// (0x000342a3) list_single_2graphic_pane_g2_cp4

0x80e1,	// (0x00034a4e) list_single_2graphic_pane_t1_cp4

0x4eca,	// (0x00031837) list_highlight_pane_cp21

0x80f0,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp

0x80ff,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp

0xc812,	// (0x0003917f) form2_mdip_string_pane_t1_ParamLimits

0xc812,	// (0x0003917f) form2_mdip_string_pane_t1

0x4e6e,	// (0x000317db) bg_wml_button_pane_cp2

0x4e64,	// (0x000317d1) form2_midp_image_pane_g1

0x9df8,	// (0x00036765) list_double_large_graphic_pane_g5_ParamLimits

0x9df8,	// (0x00036765) list_double_large_graphic_pane_g5

0xb844,	// (0x000381b1) midp_form_pane_ParamLimits

0x4eca,	// (0x00031837) main_apps_wheel_pane_ParamLimits

0xbc3d,	// (0x000385aa) popup_preview_window_ParamLimits

0xbc3d,	// (0x000385aa) popup_preview_window

0x6283,	// (0x00032bf0) popup_touch_info_window_ParamLimits

0x6283,	// (0x00032bf0) popup_touch_info_window

0x62a1,	// (0x00032c0e) popup_touch_menu_window_ParamLimits

0x62a1,	// (0x00032c0e) popup_touch_menu_window

0x4e5a,	// (0x000317c7) bg_popup_sub_pane_cp6

0xc94c,	// (0x000392b9) list_touch_menu_pane

0xc954,	// (0x000392c1) list_single_touch_menu_pane_ParamLimits

0xc954,	// (0x000392c1) list_single_touch_menu_pane

0xc969,	// (0x000392d6) list_single_touch_menu_pane_t1

0x4eca,	// (0x00031837) bg_popup_sub_pane_cp7_ParamLimits

0x4eca,	// (0x00031837) bg_popup_sub_pane_cp7

0xc977,	// (0x000392e4) heading_sub_pane

0xc97f,	// (0x000392ec) list_touch_info_pane_ParamLimits

0xc97f,	// (0x000392ec) list_touch_info_pane

0xc98e,	// (0x000392fb) list_single_touch_info_pane_ParamLimits

0xc98e,	// (0x000392fb) list_single_touch_info_pane

0xc9a0,	// (0x0003930d) list_single_touch_info_pane_t1

0xc9ae,	// (0x0003931b) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0003c4a1) list_single_touch_info_pane_t

0x5f5c,	// (0x000328c9) bg_popup_heading_pane_cp

0xc9bc,	// (0x00039329) heading_sub_pane_t1

0x6594,	// (0x00032f01) bg_popup_preview_window_pane_cp_ParamLimits

0x6594,	// (0x00032f01) bg_popup_preview_window_pane_cp

0xc977,	// (0x000392e4) heading_preview_pane

0xc97f,	// (0x000392ec) list_preview_pane_ParamLimits

0xc97f,	// (0x000392ec) list_preview_pane

0xc9ca,	// (0x00039337) popup_preview_window_g1

0xc98e,	// (0x000392fb) list_single_preview_pane_ParamLimits

0xc98e,	// (0x000392fb) list_single_preview_pane

0xc9d2,	// (0x0003933f) list_single_preview_pane_g1

0xc9da,	// (0x00039347) list_single_preview_pane_t1

0xc9a0,	// (0x0003930d) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0003c4a6) list_single_preview_pane_t

0xc9e8,	// (0x00039355) bg_popup_heading_pane_cp2_ParamLimits

0xc9e8,	// (0x00039355) bg_popup_heading_pane_cp2

0xc9fe,	// (0x0003936b) heading_preview_pane_g1

0xca06,	// (0x00039373) heading_preview_pane_t1_ParamLimits

0xca06,	// (0x00039373) heading_preview_pane_t1

0x4f26,	// (0x00031893) soft_indicator_pane_t1_ParamLimits

0x548d,	// (0x00031dfa) scroll_pane_ParamLimits

0x588c,	// (0x000321f9) scroll_sc2_left_pane

0x5883,	// (0x000321f0) scroll_sc2_right_pane

0x58ab,	// (0x00032218) scroll_bg_pane_g1_ParamLimits

0x58c0,	// (0x0003222d) scroll_bg_pane_g2_ParamLimits

0x58d8,	// (0x00032245) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003c099) scroll_bg_pane_g_ParamLimits

0x58ab,	// (0x00032218) scroll_handle_pane_g1_ParamLimits

0x58fa,	// (0x00032267) scroll_handle_pane_g2_ParamLimits

0x58d8,	// (0x00032245) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003c0a0) scroll_handle_pane_g_ParamLimits

0x61cc,	// (0x00032b39) popup_choice_list_window_ParamLimits

0x61cc,	// (0x00032b39) popup_choice_list_window

0x63ee,	// (0x00032d5b) choice_list_pane

0x6470,	// (0x00032ddd) cell_toolbar_pane_t1

0x6498,	// (0x00032e05) toolbar_button_pane_ParamLimits

0x7344,	// (0x00033cb1) ai_gene_pane_1_t2_ParamLimits

0x7344,	// (0x00033cb1) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0003c2bd) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0003c2bd) ai_gene_pane_1_t

0xca23,	// (0x00039390) scroll_sc2_left_pane_g1

0xca23,	// (0x00039390) scroll_sc2_right_pane_g1

0x5671,	// (0x00031fde) bg_popup_sub_pane_cp10

0xca2d,	// (0x0003939a) list_choice_list_pane

0xca44,	// (0x000393b1) list_single_choice_list_pane_ParamLimits

0xca44,	// (0x000393b1) list_single_choice_list_pane

0xca58,	// (0x000393c5) list_single_choice_list_pane_g1

0xca60,	// (0x000393cd) list_single_choice_list_pane_t1_ParamLimits

0xca60,	// (0x000393cd) list_single_choice_list_pane_t1

0xca75,	// (0x000393e2) choice_list_pane_g1

0xca7d,	// (0x000393ea) choice_list_pane_t1

0x4e5a,	// (0x000317c7) input_focus_pane_cp11

0x57e6,	// (0x00032153) title_pane_stacon_g2_ParamLimits

0x57e6,	// (0x00032153) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003c07f) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003c07f) title_pane_stacon_g

0x5f5c,	// (0x000328c9) cursor_press_pane

0xb9e2,	// (0x0003834f) popup_fep_hwr_window_ParamLimits

0xb9e2,	// (0x0003834f) popup_fep_hwr_window

0x6220,	// (0x00032b8d) popup_fep_vkb_window_ParamLimits

0x6220,	// (0x00032b8d) popup_fep_vkb_window

0xca8b,	// (0x000393f8) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0003c4cf) fep_vkb_side_pane_g_ParamLimits

0xac28,	// (0x00037595) fep_hwr_candidate_pane_ParamLimits

0xac28,	// (0x00037595) fep_hwr_candidate_pane

0xac52,	// (0x000375bf) fep_hwr_side_pane_ParamLimits

0xac52,	// (0x000375bf) fep_hwr_side_pane

0xac72,	// (0x000375df) fep_hwr_top_pane_ParamLimits

0xac72,	// (0x000375df) fep_hwr_top_pane

0xac8a,	// (0x000375f7) fep_hwr_write_pane_ParamLimits

0xac8a,	// (0x000375f7) fep_hwr_write_pane

0xfb62,	// (0x0003c4cf) fep_vkb_side_pane_g

0xca93,	// (0x00039400) fep_hwr_top_pane_g1

0xcaa5,	// (0x00039412) fep_hwr_top_pane_g2

0xacb6,	// (0x00037623) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0003c4ab) fep_hwr_top_pane_g

0xaccb,	// (0x00037638) fep_hwr_top_text_pane

0x5a4d,	// (0x000323ba) fep_hwr_top_text_pane_g1

0xcadb,	// (0x00039448) fep_hwr_top_text_pane_t1

0xadc1,	// (0x0003772e) fep_hwr_candidate_pane_g1

0xcd35,	// (0x000396a2) fep_vkb_keypad_pane_g3_ParamLimits

0xcd35,	// (0x000396a2) fep_vkb_keypad_pane_g3

0xcd5d,	// (0x000396ca) fep_vkb_keypad_pane_g4_ParamLimits

0xcd5d,	// (0x000396ca) fep_vkb_keypad_pane_g4

0xcdcc,	// (0x00039739) fep_vkb_bottom_pane_g2_ParamLimits

0xcdcc,	// (0x00039739) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0003c4d6) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0003c4d6) fep_vkb_bottom_pane_g

0xca23,	// (0x00039390) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0003c4e0) cell_vkb_side_pane_g

0xce57,	// (0x000397c4) cell_vkb_side_pane_t1

0xce65,	// (0x000397d2) cell_vkb_side_pane_t1_copy1

0xca23,	// (0x00039390) bg_fep_vkb_candidate_pane_g2

0xcf97,	// (0x00039904) cell_vkb_candidate_pane_ParamLimits

0xcae9,	// (0x00039456) aid_size_cell_vkb_ParamLimits

0xcae9,	// (0x00039456) aid_size_cell_vkb

0xcf97,	// (0x00039904) cell_vkb_candidate_pane

0xaddb,	// (0x00037748) bg_popup_fep_shadow_pane_g1

0xcb77,	// (0x000394e4) fep_vkb_bottom_pane_ParamLimits

0xcb77,	// (0x000394e4) fep_vkb_bottom_pane

0xcbb4,	// (0x00039521) fep_vkb_candidate_pane_ParamLimits

0xcbb4,	// (0x00039521) fep_vkb_candidate_pane

0xcbd0,	// (0x0003953d) fep_vkb_keypad_pane_ParamLimits

0xcbd0,	// (0x0003953d) fep_vkb_keypad_pane

0xcc16,	// (0x00039583) fep_vkb_side_pane_ParamLimits

0xcc16,	// (0x00039583) fep_vkb_side_pane

0xcc52,	// (0x000395bf) fep_vkb_top_pane_ParamLimits

0xcc52,	// (0x000395bf) fep_vkb_top_pane

0xcc8e,	// (0x000395fb) fep_vkb_top_pane_g1_ParamLimits

0xcc8e,	// (0x000395fb) fep_vkb_top_pane_g1

0xcc9d,	// (0x0003960a) fep_vkb_top_pane_g2_ParamLimits

0xcc9d,	// (0x0003960a) fep_vkb_top_pane_g2

0xccac,	// (0x00039619) fep_vkb_top_pane_g3_ParamLimits

0xccac,	// (0x00039619) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0003c4c6) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0003c4c6) fep_vkb_top_pane_g

0xccca,	// (0x00039637) fep_vkb_top_text_pane_ParamLimits

0xccca,	// (0x00039637) fep_vkb_top_text_pane

0xccdb,	// (0x00039648) fep_vkb_side_pane_g1_ParamLimits

0xccdb,	// (0x00039648) fep_vkb_side_pane_g1

0xcd24,	// (0x00039691) grid_vkb_side_pane_ParamLimits

0xcd24,	// (0x00039691) grid_vkb_side_pane

0xade3,	// (0x00037750) bg_popup_fep_shadow_pane_g2

0xadec,	// (0x00037759) bg_popup_fep_shadow_pane_g3

0xadf4,	// (0x00037761) bg_popup_fep_shadow_pane_g4

0xadfd,	// (0x0003776a) bg_popup_fep_shadow_pane_g5

0xae07,	// (0x00037774) bg_popup_fep_shadow_pane_g6

0xae0f,	// (0x0003777c) bg_popup_fep_shadow_pane_g7

0x55a1,	// (0x00031f0e) bg_popup_fep_shadow_pane_g8

0xcd7b,	// (0x000396e8) grid_vkb_keypad_number_pane_ParamLimits

0xcd7b,	// (0x000396e8) grid_vkb_keypad_number_pane

0xcd8b,	// (0x000396f8) grid_vkb_keypad_pane_ParamLimits

0xcd8b,	// (0x000396f8) grid_vkb_keypad_pane

0xcdb1,	// (0x0003971e) fep_vkb_bottom_pane_g1_ParamLimits

0xcdb1,	// (0x0003971e) fep_vkb_bottom_pane_g1

0xcdda,	// (0x00039747) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcdda,	// (0x00039747) grid_vkb_keypad_bottom_left_pane

0xcdef,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xcdef,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane

0xce04,	// (0x00039771) fep_vkb_top_text_pane_g1

0xce1f,	// (0x0003978c) fep_vkb_top_text_pane_t1

0xce34,	// (0x000397a1) cell_vkb_side_pane_ParamLimits

0xce34,	// (0x000397a1) cell_vkb_side_pane

0xca23,	// (0x00039390) cell_vkb_side_pane_g1

0xce73,	// (0x000397e0) cell_vkb_keypad_pane_ParamLimits

0xce73,	// (0x000397e0) cell_vkb_keypad_pane

0xceee,	// (0x0003985b) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0003c4f3) bg_popup_fep_shadow_pane_g

0xca23,	// (0x00039390) cell_hwr_side_pane_g1

0xca23,	// (0x00039390) cell_hwr_side_pane_g2

0xcef8,	// (0x00039865) cell_vkb_keypad_pane_t1

0xcf06,	// (0x00039873) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf06,	// (0x00039873) cell_vkb_keypad_bottom_left_pane

0xcf23,	// (0x00039890) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf23,	// (0x00039890) cell_vkb_keypad_bottom_right_pane

0xca23,	// (0x00039390) cell_vkb_keypad_bottom_left_pane_g1

0xca23,	// (0x00039390) cell_vkb_keypad_bottom_right_pane_g1

0xcf5c,	// (0x000398c9) cell_vkb_keypad_number_pane_ParamLimits

0xcf5c,	// (0x000398c9) cell_vkb_keypad_number_pane

0xcf7b,	// (0x000398e8) cell_vkb_keypad_number_pane_g1

0xcf85,	// (0x000398f2) cell_vkb_keypad_number_pane_g2

0xcf8e,	// (0x000398fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0003c4e5) cell_vkb_keypad_number_pane_g

0xcef8,	// (0x00039865) cell_vkb_keypad_number_pane_t1

0xcfb4,	// (0x00039921) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x0003c4e0) cell_hwr_side_pane_g

0xcfdb,	// (0x00039948) cell_hwr_side_pane_t1

0xae21,	// (0x0003778e) cell_hwr_side_pane_t1_copy1

0xccbc,	// (0x00039629) cell_hwr_candidate_pane_g1

0xae2f,	// (0x0003779c) cell_hwr_candidate_pane_t1

0xca23,	// (0x00039390) cell_vkb_candidate_pane_g2

0xd061,	// (0x000399ce) cell_vkb_candidate_pane_t1

0xcfcd,	// (0x0003993a) bg_popup_fep_shadow_pane_ParamLimits

0xcfcd,	// (0x0003993a) bg_popup_fep_shadow_pane

0x18e1,	// (0x0002e24e) bg_fep_hwr_top_pane_g4

0xcab7,	// (0x00039424) bg_hwr_side_pane_g1_ParamLimits

0xcab7,	// (0x00039424) bg_hwr_side_pane_g1

0xad07,	// (0x00037674) cell_hwr_side_pane_ParamLimits

0xad07,	// (0x00037674) cell_hwr_side_pane

0xad42,	// (0x000376af) fep_hwr_write_pane_g1_ParamLimits

0xad42,	// (0x000376af) fep_hwr_write_pane_g1

0xad4f,	// (0x000376bc) fep_hwr_write_pane_g2_ParamLimits

0xad4f,	// (0x000376bc) fep_hwr_write_pane_g2

0xad5c,	// (0x000376c9) fep_hwr_write_pane_g3_ParamLimits

0xad5c,	// (0x000376c9) fep_hwr_write_pane_g3

0xad6a,	// (0x000376d7) fep_hwr_write_pane_g4_ParamLimits

0xad6a,	// (0x000376d7) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0003c4b2) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0003c4b2) fep_hwr_write_pane_g

0x18e1,	// (0x0002e24e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x18e1,	// (0x0002e24e) bg_fep_hwr_candidate_pane_g2

0xad7f,	// (0x000376ec) cell_hwr_candidate_pane_ParamLimits

0xad7f,	// (0x000376ec) cell_hwr_candidate_pane

0xadc1,	// (0x0003772e) fep_hwr_candidate_pane_g1_ParamLimits

0xcb17,	// (0x00039484) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcb17,	// (0x00039484) bg_popup_fep_shadow_pane_cp2

0xccbc,	// (0x00039629) fep_vkb_top_pane_g4_ParamLimits

0xccbc,	// (0x00039629) fep_vkb_top_pane_g4

0xcd02,	// (0x0003966f) fep_vkb_side_pane_g2_ParamLimits

0xcd02,	// (0x0003966f) fep_vkb_side_pane_g2

0x8bf8,	// (0x00035565) list_setting_pane_t4_ParamLimits

0x8bf8,	// (0x00035565) list_setting_pane_t4

0x8c92,	// (0x000355ff) list_setting_number_pane_t5_ParamLimits

0x8c92,	// (0x000355ff) list_setting_number_pane_t5

0xa144,	// (0x00036ab1) list_double_heading_pane_cp2_ParamLimits

0xa144,	// (0x00036ab1) list_double_heading_pane_cp2

0x5534,	// (0x00031ea1) list_double_heading_pane_g1_cp2_ParamLimits

0x5534,	// (0x00031ea1) list_double_heading_pane_g1_cp2

0x5540,	// (0x00031ead) list_double_heading_pane_g2_cp2_ParamLimits

0x5540,	// (0x00031ead) list_double_heading_pane_g2_cp2

0xd06f,	// (0x000399dc) list_double_heading_pane_t1_cp2_ParamLimits

0xd06f,	// (0x000399dc) list_double_heading_pane_t1_cp2

0xd085,	// (0x000399f2) list_double_heading_pane_t2_cp2_ParamLimits

0xd085,	// (0x000399f2) list_double_heading_pane_t2_cp2

0x4e52,	// (0x000317bf) aid_value_unit2

0x9948,	// (0x000362b5) popup_preview_fixed_window

0x5006,	// (0x00031973) bg_popup_preview_window_pane_cp02

0xd097,	// (0x00039a04) list_preview_fixed_pane

0xd0dd,	// (0x00039a4a) list_empty_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_empty_pane_fp

0xd0dd,	// (0x00039a4a) list_single_cale_day_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_cale_day_pane_fp

0xd0dd,	// (0x00039a4a) list_single_graphic_heading_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_graphic_heading_pane_fp

0xd0dd,	// (0x00039a4a) list_single_graphic_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_graphic_pane_fp

0xd0dd,	// (0x00039a4a) list_single_heading_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_heading_pane_fp

0xd0dd,	// (0x00039a4a) list_single_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_pane_fp

0xd0f4,	// (0x00039a61) list_single_pane_fp_g1_ParamLimits

0xd0f4,	// (0x00039a61) list_single_pane_fp_g1

0x9de0,	// (0x0003674d) list_single_pane_fp_g2_ParamLimits

0x9de0,	// (0x0003674d) list_single_pane_fp_g2

0x9349,	// (0x00035cb6) list_single_pane_fp_g3_ParamLimits

0x9349,	// (0x00035cb6) list_single_pane_fp_g3

0xd100,	// (0x00039a6d) list_single_pane_fp_g4_ParamLimits

0xd100,	// (0x00039a6d) list_single_pane_fp_g4

0x0003,

0xfba7,	// (0x0003c514) list_single_pane_fp_g_ParamLimits

0xfba7,	// (0x0003c514) list_single_pane_fp_g

0x935d,	// (0x00035cca) list_single_pane_fp_t1_ParamLimits

0x935d,	// (0x00035cca) list_single_pane_fp_t1

0x9374,	// (0x00035ce1) list_single_graphic_pane_fp_g1_ParamLimits

0x9374,	// (0x00035ce1) list_single_graphic_pane_fp_g1

0xd0f4,	// (0x00039a61) list_single_graphic_pane_fp_g2_ParamLimits

0xd0f4,	// (0x00039a61) list_single_graphic_pane_fp_g2

0x9de0,	// (0x0003674d) list_single_graphic_pane_fp_g3_ParamLimits

0x9de0,	// (0x0003674d) list_single_graphic_pane_fp_g3

0x9349,	// (0x00035cb6) list_single_graphic_pane_fp_g4_ParamLimits

0x9349,	// (0x00035cb6) list_single_graphic_pane_fp_g4

0xd100,	// (0x00039a6d) list_single_graphic_pane_fp_g5_ParamLimits

0xd100,	// (0x00039a6d) list_single_graphic_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c51d) list_single_graphic_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c51d) list_single_graphic_pane_fp_g

0x9380,	// (0x00035ced) list_single_graphic_pane_fp_t1_ParamLimits

0x9380,	// (0x00035ced) list_single_graphic_pane_fp_t1

0x9374,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9374,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1

0xd0f4,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd0f4,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2

0x9de0,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9de0,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3

0x9349,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9349,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4

0xd100,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd100,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c51d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c51d) list_single_graphic_heading_pane_fp_g

0x9396,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9396,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1

0x93ac,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x93ac,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbb,	// (0x0003c528) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbb,	// (0x0003c528) list_single_graphic_heading_pane_fp_t

0x93be,	// (0x00035d2b) list_single_cale_day_pane_fp_g1_ParamLimits

0x93be,	// (0x00035d2b) list_single_cale_day_pane_fp_g1

0xd10c,	// (0x00039a79) list_single_cale_day_pane_fp_g2_ParamLimits

0xd10c,	// (0x00039a79) list_single_cale_day_pane_fp_g2

0x93f6,	// (0x00035d63) list_single_cale_day_pane_fp_g3_ParamLimits

0x93f6,	// (0x00035d63) list_single_cale_day_pane_fp_g3

0x941e,	// (0x00035d8b) list_single_cale_day_pane_fp_g4_ParamLimits

0x941e,	// (0x00035d8b) list_single_cale_day_pane_fp_g4

0x9442,	// (0x00035daf) list_single_cale_day_pane_fp_g5_ParamLimits

0x9442,	// (0x00035daf) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc0,	// (0x0003c52d) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc0,	// (0x0003c52d) list_single_cale_day_pane_fp_g

0x9466,	// (0x00035dd3) list_single_cale_day_pane_fp_t1_ParamLimits

0x9466,	// (0x00035dd3) list_single_cale_day_pane_fp_t1

0x948c,	// (0x00035df9) list_single_cale_day_pane_fp_t2_ParamLimits

0x948c,	// (0x00035df9) list_single_cale_day_pane_fp_t2

0x94a5,	// (0x00035e12) list_single_cale_day_pane_fp_t3_ParamLimits

0x94a5,	// (0x00035e12) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcb,	// (0x0003c538) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcb,	// (0x0003c538) list_single_cale_day_pane_fp_t

0xd0f4,	// (0x00039a61) list_empty_pane_fp_g1_ParamLimits

0xd0f4,	// (0x00039a61) list_empty_pane_fp_g1

0x94be,	// (0x00035e2b) list_empty_pane_fp_t1

0x94cc,	// (0x00035e39) list_empty_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003c53f) list_empty_pane_fp_t

0xd0f4,	// (0x00039a61) list_single_heading_pane_fp_g1_ParamLimits

0xd0f4,	// (0x00039a61) list_single_heading_pane_fp_g1

0x9de0,	// (0x0003674d) list_single_heading_pane_fp_g2_ParamLimits

0x9de0,	// (0x0003674d) list_single_heading_pane_fp_g2

0x9349,	// (0x00035cb6) list_single_heading_pane_fp_g3_ParamLimits

0x9349,	// (0x00035cb6) list_single_heading_pane_fp_g3

0x0002,

0xfbd7,	// (0x0003c544) list_single_heading_pane_fp_g_ParamLimits

0xfbd7,	// (0x0003c544) list_single_heading_pane_fp_g

0x94da,	// (0x00035e47) list_single_heading_pane_fp_t1_ParamLimits

0x94da,	// (0x00035e47) list_single_heading_pane_fp_t1

0x94ec,	// (0x00035e59) list_single_heading_pane_fp_t2_ParamLimits

0x94ec,	// (0x00035e59) list_single_heading_pane_fp_t2

0x0001,

0xfbde,	// (0x0003c54b) list_single_heading_pane_fp_t_ParamLimits

0xfbde,	// (0x0003c54b) list_single_heading_pane_fp_t

0x567d,	// (0x00031fea) aid_size_cell_fast

0x4fe9,	// (0x00031956) soft_indicator_pane_cp1_t1

0x56ba,	// (0x00032027) cell_app_pane_cp2_ParamLimits

0x56ba,	// (0x00032027) cell_app_pane_cp2

0xac11,	// (0x0003757e) fep_hwr_candidate_drop_down_list_pane

0x1c38,	// (0x0002e5a5) fep_hwr_candidate_pane_g3_ParamLimits

0x1c38,	// (0x0002e5a5) fep_hwr_candidate_pane_g3

0x1c45,	// (0x0002e5b2) fep_hwr_candidate_pane_g4_ParamLimits

0x1c45,	// (0x0002e5b2) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0003c4bf) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0003c4bf) fep_hwr_candidate_pane_g

0xcba3,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcba3,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane

0xcfbc,	// (0x00039929) fep_vkb_candidate_pane_g3

0xcfc4,	// (0x00039931) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0003c4ec) fep_vkb_candidate_pane_g

0xccbc,	// (0x00039629) cell_hwr_candidate_pane_g1_ParamLimits

0xcfe9,	// (0x00039956) cell_hwr_candidate_pane_g3_ParamLimits

0xcfe9,	// (0x00039956) cell_hwr_candidate_pane_g3

0xd00a,	// (0x00039977) cell_hwr_candidate_pane_g4_ParamLimits

0xd00a,	// (0x00039977) cell_hwr_candidate_pane_g4

0x0002,

0xfb99,	// (0x0003c506) cell_hwr_candidate_pane_g_ParamLimits

0xfb99,	// (0x0003c506) cell_hwr_candidate_pane_g

0xd02b,	// (0x00039998) cell_vkb_candidate_pane_g3_ParamLimits

0xd02b,	// (0x00039998) cell_vkb_candidate_pane_g3

0xd046,	// (0x000399b3) cell_vkb_candidate_pane_g4_ParamLimits

0xd046,	// (0x000399b3) cell_vkb_candidate_pane_g4

0xd118,	// (0x00039a85) cell_app_pane_cp2_g1_ParamLimits

0xd118,	// (0x00039a85) cell_app_pane_cp2_g1

0xd136,	// (0x00039aa3) cell_app_pane_cp2_g2_ParamLimits

0xd136,	// (0x00039aa3) cell_app_pane_cp2_g2

0x0001,

0xfbe3,	// (0x0003c550) cell_app_pane_cp2_g_ParamLimits

0xfbe3,	// (0x0003c550) cell_app_pane_cp2_g

0xd142,	// (0x00039aaf) cell_app_pane_cp2_t1_ParamLimits

0xd142,	// (0x00039aaf) cell_app_pane_cp2_t1

0x551a,	// (0x00031e87) grid_highlight_pane_cp1_ParamLimits

0x551a,	// (0x00031e87) grid_highlight_pane_cp1

0xae4d,	// (0x000377ba) cell_hwr_candidate_pane_cp1_ParamLimits

0xae4d,	// (0x000377ba) cell_hwr_candidate_pane_cp1

0xccbc,	// (0x00039629) fep_hwr_candidate_drop_down_list_pane_g1

0xd154,	// (0x00039ac1) fep_hwr_candidate_drop_down_list_pane_g2

0xd161,	// (0x00039ace) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0003c555) fep_hwr_candidate_drop_down_list_pane_g

0xae6c,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane

0xae75,	// (0x000377e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xae75,	// (0x000377e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xae82,	// (0x000377ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xae82,	// (0x000377ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xae8f,	// (0x000377fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xae8f,	// (0x000377fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xd02b,	// (0x00039998) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd02b,	// (0x00039998) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xd046,	// (0x000399b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd046,	// (0x000399b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xae9c,	// (0x00037809) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xae9c,	// (0x00037809) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaeb7,	// (0x00037824) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaeb7,	// (0x00037824) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd16e,	// (0x00039adb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd16e,	// (0x00039adb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0003c55c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0003c55c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd189,	// (0x00039af6) cell_vkb_candidate_pane_cp1_ParamLimits

0xd189,	// (0x00039af6) cell_vkb_candidate_pane_cp1

0xccbc,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xccbc,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1

0xd154,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd154,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2

0xd161,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd161,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0003c555) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x0003c555) fep_vkb_candidate_drop_down_list_pane_g

0xd1a9,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd1a9,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane

0xd1b6,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd1b6,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd1c3,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd1c3,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd1cf,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd1cf,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xcfe9,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcfe9,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd00a,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd00a,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd1db,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd1db,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd1fc,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd1fc,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd16e,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd16e,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0003c56d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0003c56d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9a52,	// (0x000363bf) title_pane_g1_ParamLimits

0x9a5f,	// (0x000363cc) title_pane_g2_ParamLimits

0xf592,	// (0x0003beff) title_pane_g_ParamLimits

0x5a45,	// (0x000323b2) aid_call2_pane

0x5a3d,	// (0x000323aa) aid_call_pane

0x5a4d,	// (0x000323ba) popup_clock_analogue_window_g1

0x5a4d,	// (0x000323ba) popup_clock_analogue_window_g2

0xa125,	// (0x00036a92) popup_clock_analogue_window_g3

0xa12e,	// (0x00036a9b) popup_clock_analogue_window_g4

0x4e64,	// (0x000317d1) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003c0ae) popup_clock_analogue_window_g

0xa136,	// (0x00036aa3) popup_clock_analogue_window_t1

0xa16d,	// (0x00036ada) clock_digital_number_pane_ParamLimits

0xa16d,	// (0x00036ada) clock_digital_number_pane

0xa179,	// (0x00036ae6) clock_digital_number_pane_cp02_ParamLimits

0xa179,	// (0x00036ae6) clock_digital_number_pane_cp02

0xa185,	// (0x00036af2) clock_digital_number_pane_cp03_ParamLimits

0xa185,	// (0x00036af2) clock_digital_number_pane_cp03

0xa191,	// (0x00036afe) clock_digital_number_pane_cp04_ParamLimits

0xa191,	// (0x00036afe) clock_digital_number_pane_cp04

0xa19d,	// (0x00036b0a) clock_digital_separator_pane_ParamLimits

0xa19d,	// (0x00036b0a) clock_digital_separator_pane

0xa1a9,	// (0x00036b16) popup_clock_digital_window_t1_ParamLimits

0xa1a9,	// (0x00036b16) popup_clock_digital_window_t1

0x4e64,	// (0x000317d1) clock_digital_number_pane_g1

0x4e64,	// (0x000317d1) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003c0b9) clock_digital_number_pane_g

0x4e64,	// (0x000317d1) clock_digital_separator_pane_g1

0x4e64,	// (0x000317d1) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003c0b9) clock_digital_separator_pane_g

0xbdcf,	// (0x0003873c) aid_fill_nsta_ParamLimits

0xbe98,	// (0x00038805) indicator_nsta_pane_ParamLimits

0x6397,	// (0x00032d04) popup_clock_analogue_window

0x6397,	// (0x00032d04) popup_clock_digital_window

0x4eca,	// (0x00031837) grid_indicator_nsta_pane_ParamLimits

0x7ec3,	// (0x00034830) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0003c44c) clock_nsta_pane_t

0xa0e9,	// (0x00036a56) aid_size_max_handle

0xa0f3,	// (0x00036a60) aid_size_min_handle

0x5f5c,	// (0x000328c9) editor_scroll_pane

0xd21d,	// (0x00039b8a) ex_editor_pane

0x5639,	// (0x00031fa6) scroll_pane_cp13

0x54b9,	// (0x00031e26) scroll_pane_cp14

0x5a77,	// (0x000323e4) scroll_pane_cp36

0xa156,	// (0x00036ac3) list_single_graphic_hl_pane_cp2_ParamLimits

0xa156,	// (0x00036ac3) list_single_graphic_hl_pane_cp2

0x9115,	// (0x00035a82) list_single_graphic_hl_pane_ParamLimits

0x9115,	// (0x00035a82) list_single_graphic_hl_pane

0x9502,	// (0x00035e6f) aid_size_min_hl_cp1

0xd225,	// (0x00039b92) list_highlight_pane_cp34_ParamLimits

0xd225,	// (0x00039b92) list_highlight_pane_cp34

0xd236,	// (0x00039ba3) list_single_graphic_hl_pane_g1_ParamLimits

0xd236,	// (0x00039ba3) list_single_graphic_hl_pane_g1

0x950b,	// (0x00035e78) list_single_graphic_hl_pane_g2_ParamLimits

0x950b,	// (0x00035e78) list_single_graphic_hl_pane_g2

0x950b,	// (0x00035e78) list_single_graphic_hl_pane_g3_ParamLimits

0x950b,	// (0x00035e78) list_single_graphic_hl_pane_g3

0x5ecd,	// (0x0003283a) list_single_graphic_hl_pane_g4_ParamLimits

0x5ecd,	// (0x0003283a) list_single_graphic_hl_pane_g4

0x9517,	// (0x00035e84) list_single_graphic_hl_pane_g5_ParamLimits

0x9517,	// (0x00035e84) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0003c57e) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0003c57e) list_single_graphic_hl_pane_g

0x8872,	// (0x000351df) list_single_graphic_hl_pane_t1_ParamLimits

0x8872,	// (0x000351df) list_single_graphic_hl_pane_t1

0xd243,	// (0x00039bb0) aid_size_min_hl_cp2

0xd24c,	// (0x00039bb9) list_highlight_pane_cp34_cp2_ParamLimits

0xd24c,	// (0x00039bb9) list_highlight_pane_cp34_cp2

0xd236,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd236,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2

0xd259,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd259,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2

0xd265,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd265,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2

0x5e93,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5e93,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2

0xd273,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd273,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2

0xa4ff,	// (0x00036e6c) control_pane_g4_ParamLimits

0xa4ff,	// (0x00036e6c) control_pane_g4

0x5671,	// (0x00031fde) bg_popup_sub_pane_cp10_ParamLimits

0xca2d,	// (0x0003939a) list_choice_list_pane_ParamLimits

0xca3c,	// (0x000393a9) scroll_pane_cp23

0x5006,	// (0x00031973) bg_popup_preview_window_pane_cp02_ParamLimits

0xd097,	// (0x00039a04) list_preview_fixed_pane_ParamLimits

0xd0ad,	// (0x00039a1a) list_preview_fixed_pane_cp_ParamLimits

0xd0ad,	// (0x00039a1a) list_preview_fixed_pane_cp

0xd0b9,	// (0x00039a26) popup_preview_fixed_window_g1_ParamLimits

0xd0b9,	// (0x00039a26) popup_preview_fixed_window_g1

0xd0c5,	// (0x00039a32) popup_preview_fixed_window_g2_ParamLimits

0xd0c5,	// (0x00039a32) popup_preview_fixed_window_g2

0x0002,

0xfba0,	// (0x0003c50d) popup_preview_fixed_window_g_ParamLimits

0xfba0,	// (0x0003c50d) popup_preview_fixed_window_g

0x9fd8,	// (0x00036945) aid_navi_side_left_pane_ParamLimits

0x9fed,	// (0x0003695a) aid_navi_side_right_pane_ParamLimits

0xa005,	// (0x00036972) navi_icon_pane_stacon_ParamLimits

0xa019,	// (0x00036986) navi_navi_pane_stacon_ParamLimits

0xa005,	// (0x00036972) navi_text_pane_stacon_ParamLimits

0x4e5a,	// (0x000317c7) main_text_info_pane

0xd29d,	// (0x00039c0a) listscroll_text_info_pane

0xd2a5,	// (0x00039c12) list_text_info_pane_ParamLimits

0xd2a5,	// (0x00039c12) list_text_info_pane

0xd2b4,	// (0x00039c21) scroll_pane_cp24_ParamLimits

0xd2b4,	// (0x00039c21) scroll_pane_cp24

0xd2d2,	// (0x00039c3f) list_text_info_pane_t1_ParamLimits

0xd2d2,	// (0x00039c3f) list_text_info_pane_t1

0xb960,	// (0x000382cd) popup_fast_swap2_window_ParamLimits

0xb960,	// (0x000382cd) popup_fast_swap2_window

0xd30b,	// (0x00039c78) aid_size_cell_fast2

0x4e5a,	// (0x000317c7) bg_popup_window_pane_cp17

0x683b,	// (0x000331a8) heading_pane_cp2

0x51ec,	// (0x00031b59) listscroll_fast2_pane

0xd315,	// (0x00039c82) grid_fast2_pane

0xd31f,	// (0x00039c8c) listscroll_fast2_pane_g1

0xd327,	// (0x00039c94) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0003c589) listscroll_fast2_pane_g

0x5639,	// (0x00031fa6) scroll_pane_cp26

0xd331,	// (0x00039c9e) cell_fast2_pane_ParamLimits

0xd331,	// (0x00039c9e) cell_fast2_pane

0xd346,	// (0x00039cb3) cell_fast2_pane_g1

0xd34f,	// (0x00039cbc) cell_fast2_pane_g2

0xd358,	// (0x00039cc5) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0003c58e) cell_fast2_pane_g

0x5280,	// (0x00031bed) grid_highlight_pane_cp9

0x5295,	// (0x00031c02) main_eswt_pane_ParamLimits

0x5295,	// (0x00031c02) main_eswt_pane

0xd2c9,	// (0x00039c36) list_single_text_info_pane

0xd360,	// (0x00039ccd) eswt_ctrl_button_pane

0xd360,	// (0x00039ccd) eswt_ctrl_canvas_pane

0xd368,	// (0x00039cd5) eswt_ctrl_combo_pane

0xd360,	// (0x00039ccd) eswt_ctrl_default_pane

0xd360,	// (0x00039ccd) eswt_ctrl_label_pane

0xd370,	// (0x00039cdd) eswt_ctrl_wait_pane

0xd378,	// (0x00039ce5) eswt_shell_pane

0x4e5a,	// (0x000317c7) listscroll_eswt_app_pane

0xd398,	// (0x00039d05) popup_eswt_tasktip_window_ParamLimits

0xd398,	// (0x00039d05) popup_eswt_tasktip_window

0x6594,	// (0x00032f01) bg_popup_window_pane_cp18

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_ParamLimits

0xd3a9,	// (0x00039d16) eswt_control_pane_g1

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_ParamLimits

0xd3b6,	// (0x00039d23) eswt_control_pane_g2

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_ParamLimits

0xd3c3,	// (0x00039d30) eswt_control_pane_g3

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_ParamLimits

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0003c595) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0003c595) eswt_control_pane_g

0x551a,	// (0x00031e87) bg_button_pane_ParamLimits

0x551a,	// (0x00031e87) bg_button_pane

0x5295,	// (0x00031c02) common_borders_pane_copy2_ParamLimits

0x5295,	// (0x00031c02) common_borders_pane_copy2

0xd3dd,	// (0x00039d4a) control_button_pane_g1_ParamLimits

0xd3dd,	// (0x00039d4a) control_button_pane_g1

0xd3e9,	// (0x00039d56) control_button_pane_g2_ParamLimits

0xd3e9,	// (0x00039d56) control_button_pane_g2

0xd3f5,	// (0x00039d62) control_button_pane_g3_ParamLimits

0xd3f5,	// (0x00039d62) control_button_pane_g3

0x0002,

0xfc31,	// (0x0003c59e) control_button_pane_g_ParamLimits

0xfc31,	// (0x0003c59e) control_button_pane_g

0xd409,	// (0x00039d76) control_button_pane_t1

0xd417,	// (0x00039d84) control_button_pane_t2

0x0001,

0xfc38,	// (0x0003c5a5) control_button_pane_t

0x64a4,	// (0x00032e11) bg_button_pane_g1

0x64b4,	// (0x00032e21) bg_button_pane_g2

0x64ac,	// (0x00032e19) bg_button_pane_g3

0x64c4,	// (0x00032e31) bg_button_pane_g4

0x64bc,	// (0x00032e29) bg_button_pane_g5

0x64cc,	// (0x00032e39) bg_button_pane_g6

0x64d4,	// (0x00032e41) bg_button_pane_g7

0x64e4,	// (0x00032e51) bg_button_pane_g8

0x64dc,	// (0x00032e49) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0003c211) bg_button_pane_g

0xc9e8,	// (0x00039355) common_borders_pane_ParamLimits

0xc9e8,	// (0x00039355) common_borders_pane

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy1_ParamLimits

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy1

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy1_ParamLimits

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy1

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy1_ParamLimits

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy1

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy1_ParamLimits

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy1

0xca23,	// (0x00039390) bg_eswt_ctrl_canvas_pane_g1

0xc9e8,	// (0x00039355) common_borders_pane_cp2_ParamLimits

0xc9e8,	// (0x00039355) common_borders_pane_cp2

0xc9e8,	// (0x00039355) common_borders_pane_cp3_ParamLimits

0xc9e8,	// (0x00039355) common_borders_pane_cp3

0xd425,	// (0x00039d92) separator_horizontal_pane

0xd42d,	// (0x00039d9a) separator_vertical_pane

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy2_ParamLimits

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy2

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy2_ParamLimits

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy2

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy2_ParamLimits

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy2

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy2_ParamLimits

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy2

0x4e5a,	// (0x000317c7) common_borders_pane_cp4

0xd436,	// (0x00039da3) separator_horizontal_pane_g1

0xd43f,	// (0x00039dac) separator_horizontal_pane_g2

0xd448,	// (0x00039db5) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0003c5aa) separator_horizontal_pane_g

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy3_ParamLimits

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy3

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy3_ParamLimits

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy3

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy3_ParamLimits

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy3

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy3_ParamLimits

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy3

0x4e5a,	// (0x000317c7) common_borders_pane_cp5

0xd451,	// (0x00039dbe) separator_vertical_pane_g1

0xd45a,	// (0x00039dc7) separator_vertical_pane_g2

0xd463,	// (0x00039dd0) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0003c5b1) separator_vertical_pane_g

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy4_ParamLimits

0xd3a9,	// (0x00039d16) eswt_control_pane_g1_copy4

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy4_ParamLimits

0xd3b6,	// (0x00039d23) eswt_control_pane_g2_copy4

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy4_ParamLimits

0xd3c3,	// (0x00039d30) eswt_control_pane_g3_copy4

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy4_ParamLimits

0xd3d0,	// (0x00039d3d) eswt_control_pane_g4_copy4

0xd46c,	// (0x00039dd9) eswt_ctrl_combo_button_pane

0xd474,	// (0x00039de1) eswt_ctrl_input_pane

0xd47c,	// (0x00039de9) popup_choice_list_window_cp70

0xd484,	// (0x00039df1) eswt_ctrl_input_pane_t1

0x4e5a,	// (0x000317c7) input_focus_pane_cp70

0xc9e8,	// (0x00039355) bg_button_pane_cp70_ParamLimits

0xc9e8,	// (0x00039355) bg_button_pane_cp70

0xd492,	// (0x00039dff) eswt_ctrl_combo_button_pane_g1

0xd49a,	// (0x00039e07) wait_bar_pane_cp70

0x6594,	// (0x00032f01) bg_popup_window_pane_cp70_ParamLimits

0x6594,	// (0x00032f01) bg_popup_window_pane_cp70

0xd4a2,	// (0x00039e0f) popup_eswt_tasktip_window_t1

0xd4b8,	// (0x00039e25) wait_bar_pane_cp71_ParamLimits

0xd4b8,	// (0x00039e25) wait_bar_pane_cp71

0xd4c4,	// (0x00039e31) grid_eswt_app_pane

0x5883,	// (0x000321f0) scroll_pane_cp70

0xd4cd,	// (0x00039e3a) cell_eswt_app_pane_ParamLimits

0xd4cd,	// (0x00039e3a) cell_eswt_app_pane

0xd501,	// (0x00039e6e) cell_eswt_app_pane_g1_ParamLimits

0xd501,	// (0x00039e6e) cell_eswt_app_pane_g1

0xd530,	// (0x00039e9d) cell_eswt_app_pane_g2_ParamLimits

0xd530,	// (0x00039e9d) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0003c5b8) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0003c5b8) cell_eswt_app_pane_g

0xd559,	// (0x00039ec6) cell_eswt_app_pane_t1_ParamLimits

0xd559,	// (0x00039ec6) cell_eswt_app_pane_t1

0xd58b,	// (0x00039ef8) grid_highlight_pane_cp70_ParamLimits

0xd58b,	// (0x00039ef8) grid_highlight_pane_cp70

0x5e2f,	// (0x0003279c) set_content_pane_g1

0x6133,	// (0x00032aa0) status_small_volume_pane

0xaed2,	// (0x0003783f) status_small_volume_pane_g1

0xaeda,	// (0x00037847) volume_small2_pane

0xaee3,	// (0x00037850) volume_small2_pane_g1

0xaeec,	// (0x00037859) volume_small2_pane_g2

0xaef5,	// (0x00037862) volume_small2_pane_g3

0xaefe,	// (0x0003786b) volume_small2_pane_g4

0xaf07,	// (0x00037874) volume_small2_pane_g5

0xaf10,	// (0x0003787d) volume_small2_pane_g6

0xaf19,	// (0x00037886) volume_small2_pane_g7

0xaf22,	// (0x0003788f) volume_small2_pane_g8

0xaf2b,	// (0x00037898) volume_small2_pane_g9

0xaf34,	// (0x000378a1) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0003c5bd) volume_small2_pane_g

0xce04,	// (0x00039771) fep_vkb_top_text_pane_g1_ParamLimits

0xce1f,	// (0x0003978c) fep_vkb_top_text_pane_t1_ParamLimits

0xd0d1,	// (0x00039a3e) popup_preview_fixed_window_g3_ParamLimits

0xd0d1,	// (0x00039a3e) popup_preview_fixed_window_g3

0xbd62,	// (0x000386cf) popup_toolbar_trans_pane

0xc3e0,	// (0x00038d4d) aid_height_set_list_ParamLimits

0x7412,	// (0x00033d7f) aid_size_parent_ParamLimits

0x5671,	// (0x00031fde) list_highlight_pane_cp2_ParamLimits

0x5e2f,	// (0x0003279c) set_content_pane_g1_ParamLimits

0x9137,	// (0x00035aa4) list_single_image_pane_ParamLimits

0x9137,	// (0x00035aa4) list_single_image_pane

0xd597,	// (0x00039f04) aid_size_cell_image_ParamLimits

0xd597,	// (0x00039f04) aid_size_cell_image

0xd5a4,	// (0x00039f11) grid_single_image_pane_ParamLimits

0xd5a4,	// (0x00039f11) grid_single_image_pane

0x5534,	// (0x00031ea1) list_single_image_pane_g1_ParamLimits

0x5534,	// (0x00031ea1) list_single_image_pane_g1

0x5540,	// (0x00031ead) list_single_image_pane_g2_ParamLimits

0x5540,	// (0x00031ead) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0003c5d2) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0003c5d2) list_single_image_pane_g

0xd5b0,	// (0x00039f1d) list_single_image_pane_t1_ParamLimits

0xd5b0,	// (0x00039f1d) list_single_image_pane_t1

0xd5c6,	// (0x00039f33) cell_image_list_pane_ParamLimits

0xd5c6,	// (0x00039f33) cell_image_list_pane

0xd5da,	// (0x00039f47) cell_image_list_pane_g1

0xd5e3,	// (0x00039f50) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0003c5d7) cell_image_list_pane_g

0xd5ec,	// (0x00039f59) aid_size_cell_tb_trans_pane

0x551a,	// (0x00031e87) bg_tb_trans_pane

0xd5fe,	// (0x00039f6b) grid_tb_trans_pane

0x64a4,	// (0x00032e11) bg_tb_trans_pane_g1

0x64b4,	// (0x00032e21) bg_tb_trans_pane_g2

0x64ac,	// (0x00032e19) bg_tb_trans_pane_g3

0x64c4,	// (0x00032e31) bg_tb_trans_pane_g4

0x64bc,	// (0x00032e29) bg_tb_trans_pane_g5

0x64e4,	// (0x00032e51) bg_tb_trans_pane_g6

0x64dc,	// (0x00032e49) bg_tb_trans_pane_g7

0x64cc,	// (0x00032e39) bg_tb_trans_pane_g8

0x64d4,	// (0x00032e41) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0003c5dc) bg_tb_trans_pane_g

0xd612,	// (0x00039f7f) cell_toolbar_trans_pane_ParamLimits

0xd612,	// (0x00039f7f) cell_toolbar_trans_pane

0xca23,	// (0x00039390) cell_toolbar_trans_pane_g1

0xc782,	// (0x000390ef) list_form2_midp_pane_t1

0xc790,	// (0x000390fd) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0003c485) list_form2_midp_pane_t

0x7f48,	// (0x000348b5) scroll_pane_cp51_ParamLimits

0x80be,	// (0x00034a2b) form2_midp_wait_pane_g1

0x80c7,	// (0x00034a34) form2_midp_wait_pane_g2

0x80d0,	// (0x00034a3d) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0003c49a) form2_midp_wait_pane_g

0x4eca,	// (0x00031837) list_highlight_pane_cp21_ParamLimits

0x80f0,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x80ff,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa9a1,	// (0x0003730e) list_single_2graphic_im_pane_ParamLimits

0xa9a1,	// (0x0003730e) list_single_2graphic_im_pane

0xd638,	// (0x00039fa5) list_single_2graphic_im_pane_g1_ParamLimits

0xd638,	// (0x00039fa5) list_single_2graphic_im_pane_g1

0xd649,	// (0x00039fb6) list_single_2graphic_im_pane_g2_ParamLimits

0xd649,	// (0x00039fb6) list_single_2graphic_im_pane_g2

0xd655,	// (0x00039fc2) list_single_2graphic_im_pane_g3_ParamLimits

0xd655,	// (0x00039fc2) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0003c5ef) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0003c5ef) list_single_2graphic_im_pane_g

0xd675,	// (0x00039fe2) list_single_2graphic_im_pane_t1_ParamLimits

0xd675,	// (0x00039fe2) list_single_2graphic_im_pane_t1

0xd0dd,	// (0x00039a4a) list_single_graphic_2heading_pane_fp_ParamLimits

0xd0dd,	// (0x00039a4a) list_single_graphic_2heading_pane_fp

0x9374,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9374,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1

0xd0f4,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd0f4,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2

0x9de0,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9de0,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3

0x9349,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9349,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4

0xd100,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd100,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0003c51d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003c51d) list_single_graphic_2heading_pane_fp_g

0x952b,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x952b,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1

0x93ac,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x93ac,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2

0x9541,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9541,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0003c5f8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0003c5f8) list_single_graphic_2heading_pane_fp_t

0xcac3,	// (0x00039430) fep_hwr_write_pane_g5_ParamLimits

0xcac3,	// (0x00039430) fep_hwr_write_pane_g5

0xcacf,	// (0x0003943c) fep_hwr_write_pane_g6_ParamLimits

0xcacf,	// (0x0003943c) fep_hwr_write_pane_g6

0xd378,	// (0x00039ce5) eswt_shell_pane_ParamLimits

0x6594,	// (0x00032f01) bg_popup_window_pane_cp18_ParamLimits

0x755b,	// (0x00033ec8) heading_pane_cp70

0xd4a2,	// (0x00039e0f) popup_eswt_tasktip_window_t1_ParamLimits

0xbe0f,	// (0x0003877c) aid_touch_tab_arrow_left

0xbe1e,	// (0x0003878b) aid_touch_tab_arrow_right

0x9a70,	// (0x000363dd) title_pane_g3_ParamLimits

0x9a70,	// (0x000363dd) title_pane_g3

0x54d9,	// (0x00031e46) set_value_pane_g1

0xbd62,	// (0x000386cf) popup_toolbar_trans_pane_ParamLimits

0xd5ec,	// (0x00039f59) aid_size_cell_tb_trans_pane_ParamLimits

0x551a,	// (0x00031e87) bg_tb_trans_pane_ParamLimits

0xd5fe,	// (0x00039f6b) grid_tb_trans_pane_ParamLimits

0x5006,	// (0x00031973) cont_note_pane_ParamLimits

0x5006,	// (0x00031973) cont_note_pane

0x5295,	// (0x00031c02) cont_snote2_single_text_pane_ParamLimits

0x5295,	// (0x00031c02) cont_snote2_single_text_pane

0x5295,	// (0x00031c02) cont_snote2_single_graphic_pane_ParamLimits

0x5295,	// (0x00031c02) cont_snote2_single_graphic_pane

0x6a20,	// (0x0003338d) cont_note_wait_pane_ParamLimits

0x6a20,	// (0x0003338d) cont_note_wait_pane

0x6a20,	// (0x0003338d) cont_note_image_pane_ParamLimits

0x6a20,	// (0x0003338d) cont_note_image_pane

0xd6a6,	// (0x0003a013) popup_note2_window_g1_ParamLimits

0xd6a6,	// (0x0003a013) popup_note2_window_g1

0xd6d7,	// (0x0003a044) popup_note2_window_t1_ParamLimits

0xd6d7,	// (0x0003a044) popup_note2_window_t1

0xd71c,	// (0x0003a089) popup_note2_window_t2_ParamLimits

0xd71c,	// (0x0003a089) popup_note2_window_t2

0xd761,	// (0x0003a0ce) popup_note2_window_t3_ParamLimits

0xd761,	// (0x0003a0ce) popup_note2_window_t3

0xd7a6,	// (0x0003a113) popup_note2_window_t4_ParamLimits

0xd7a6,	// (0x0003a113) popup_note2_window_t4

0x507e,	// (0x000319eb) popup_note2_window_t5_ParamLimits

0x507e,	// (0x000319eb) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0003c604) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0003c604) popup_note2_window_t

0xd7d5,	// (0x0003a142) popup_note2_image_window_g1_ParamLimits

0xd7d5,	// (0x0003a142) popup_note2_image_window_g1

0xd7e1,	// (0x0003a14e) popup_note2_image_window_g2_ParamLimits

0xd7e1,	// (0x0003a14e) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0003c60f) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0003c60f) popup_note2_image_window_g

0xd7f3,	// (0x0003a160) popup_note2_image_window_t1_ParamLimits

0xd7f3,	// (0x0003a160) popup_note2_image_window_t1

0xd80b,	// (0x0003a178) popup_note2_image_window_t2_ParamLimits

0xd80b,	// (0x0003a178) popup_note2_image_window_t2

0xd823,	// (0x0003a190) popup_note2_image_window_t3_ParamLimits

0xd823,	// (0x0003a190) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0003c614) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0003c614) popup_note2_image_window_t

0x6a2e,	// (0x0003339b) popup_note2_wait_window_g1_ParamLimits

0x6a2e,	// (0x0003339b) popup_note2_wait_window_g1

0x6a3a,	// (0x000333a7) popup_note2_wait_window_g2_ParamLimits

0x6a3a,	// (0x000333a7) popup_note2_wait_window_g2

0x6a46,	// (0x000333b3) popup_note2_wait_window_g3_ParamLimits

0x6a46,	// (0x000333b3) popup_note2_wait_window_g3

0x0002,

0xf886,	// (0x0003c1f3) popup_note2_wait_window_g_ParamLimits

0xf886,	// (0x0003c1f3) popup_note2_wait_window_g

0xd83f,	// (0x0003a1ac) popup_note2_wait_window_t1_ParamLimits

0xd83f,	// (0x0003a1ac) popup_note2_wait_window_t1

0xd85d,	// (0x0003a1ca) popup_note2_wait_window_t2_ParamLimits

0xd85d,	// (0x0003a1ca) popup_note2_wait_window_t2

0xd87b,	// (0x0003a1e8) popup_note2_wait_window_t3_ParamLimits

0xd87b,	// (0x0003a1e8) popup_note2_wait_window_t3

0xd88d,	// (0x0003a1fa) popup_note2_wait_window_t4_ParamLimits

0xd88d,	// (0x0003a1fa) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0003c61b) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0003c61b) popup_note2_wait_window_t

0xd89f,	// (0x0003a20c) wait_bar2_pane_ParamLimits

0xd89f,	// (0x0003a20c) wait_bar2_pane

0xd8b7,	// (0x0003a224) popup_snote2_single_text_window_g1_ParamLimits

0xd8b7,	// (0x0003a224) popup_snote2_single_text_window_g1

0xd8df,	// (0x0003a24c) popup_snote2_single_text_window_t1_ParamLimits

0xd8df,	// (0x0003a24c) popup_snote2_single_text_window_t1

0xd92b,	// (0x0003a298) popup_snote2_single_text_window_t2_ParamLimits

0xd92b,	// (0x0003a298) popup_snote2_single_text_window_t2

0xd977,	// (0x0003a2e4) popup_snote2_single_text_window_t3_ParamLimits

0xd977,	// (0x0003a2e4) popup_snote2_single_text_window_t3

0xd9b8,	// (0x0003a325) popup_snote2_single_text_window_t4_ParamLimits

0xd9b8,	// (0x0003a325) popup_snote2_single_text_window_t4

0xd9ee,	// (0x0003a35b) popup_snote2_single_text_window_t5_ParamLimits

0xd9ee,	// (0x0003a35b) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0003c624) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0003c624) popup_snote2_single_text_window_t

0xda19,	// (0x0003a386) popup_snote2_single_graphic_window_g1_ParamLimits

0xda19,	// (0x0003a386) popup_snote2_single_graphic_window_g1

0xda41,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2_ParamLimits

0xda41,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0003c62f) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0003c62f) popup_snote2_single_graphic_window_g

0xda69,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1_ParamLimits

0xda69,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1

0xdab5,	// (0x0003a422) popup_snote2_single_graphic_window_t2_ParamLimits

0xdab5,	// (0x0003a422) popup_snote2_single_graphic_window_t2

0xd977,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3_ParamLimits

0xd977,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3

0xd9b8,	// (0x0003a325) popup_snote2_single_graphic_window_t4_ParamLimits

0xd9b8,	// (0x0003a325) popup_snote2_single_graphic_window_t4

0xd9ee,	// (0x0003a35b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd9ee,	// (0x0003a35b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0003c634) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0003c634) popup_snote2_single_graphic_window_t

0x7ef8,	// (0x00034865) clock_nsta_pane_cp2_t1

0x7ef8,	// (0x00034865) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0003c45b) clock_nsta_pane_cp2_t

0x8d99,	// (0x00035706) form_field_data_wide_pane_g1_ParamLimits

0x5534,	// (0x00031ea1) form_field_data_wide_pane_g2_ParamLimits

0x5534,	// (0x00031ea1) form_field_data_wide_pane_g2

0x5540,	// (0x00031ead) form_field_data_wide_pane_g3_ParamLimits

0x5540,	// (0x00031ead) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003c031) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003c031) form_field_data_wide_pane_g

0xc649,	// (0x00038fb6) grid_touch_3_pane_ParamLimits

0xc649,	// (0x00038fb6) grid_touch_3_pane

0xdb01,	// (0x0003a46e) cell_touch_3_pane_ParamLimits

0xdb01,	// (0x0003a46e) cell_touch_3_pane

0xca23,	// (0x00039390) cell_touch_3_pane_g1

0xca23,	// (0x00039390) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0003c4e0) cell_touch_3_pane_g

0x50b0,	// (0x00031a1d) cont_query_data_pane

0x50b8,	// (0x00031a25) cont_query_data_pane_cp1

0xdb30,	// (0x0003a49d) button_value_adjust_pane_cp7

0xdb38,	// (0x0003a4a5) query_popup_pane_cp3

0x5aa9,	// (0x00032416) bg_popup_sub_pane_cp22_ParamLimits

0xa204,	// (0x00036b71) navi_navi_volume_pane_cp2

0xa21f,	// (0x00036b8c) popup_side_volume_key_window_g2

0xa22e,	// (0x00036b9b) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003c0c3) popup_side_volume_key_window_g

0xa24b,	// (0x00036bb8) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003c0ca) popup_side_volume_key_window_t

0x5cf9,	// (0x00032666) popup_side_volume_key_window_ParamLimits

0x89f3,	// (0x00035360) list_double_graphic_pane_g4_ParamLimits

0x89f3,	// (0x00035360) list_double_graphic_pane_g4

0xa9ec,	// (0x00037359) list_single_2heading_msg_pane_ParamLimits

0xa9ec,	// (0x00037359) list_single_2heading_msg_pane

0xaf3d,	// (0x000378aa) list_single_2heading_msg_pane_g1_ParamLimits

0xaf3d,	// (0x000378aa) list_single_2heading_msg_pane_g1

0xaf49,	// (0x000378b6) list_single_2heading_msg_pane_g2_ParamLimits

0xaf49,	// (0x000378b6) list_single_2heading_msg_pane_g2

0xaf55,	// (0x000378c2) list_single_2heading_msg_pane_g3_ParamLimits

0xaf55,	// (0x000378c2) list_single_2heading_msg_pane_g3

0xaf61,	// (0x000378ce) list_single_2heading_msg_pane_g4_ParamLimits

0xaf61,	// (0x000378ce) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0003c63f) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0003c63f) list_single_2heading_msg_pane_g

0x9561,	// (0x00035ece) list_single_2heading_msg_pane_t1_ParamLimits

0x9561,	// (0x00035ece) list_single_2heading_msg_pane_t1

0x9589,	// (0x00035ef6) list_single_2heading_msg_pane_t2_ParamLimits

0x9589,	// (0x00035ef6) list_single_2heading_msg_pane_t2

0x95bd,	// (0x00035f2a) list_single_2heading_msg_pane_t3_ParamLimits

0x95bd,	// (0x00035f2a) list_single_2heading_msg_pane_t3

0x95f6,	// (0x00035f63) list_single_2heading_msg_pane_t4_ParamLimits

0x95f6,	// (0x00035f63) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0003c648) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0003c648) list_single_2heading_msg_pane_t

0x4e78,	// (0x000317e5) title_pane_g4_ParamLimits

0x4e78,	// (0x000317e5) title_pane_g4

0x9f28,	// (0x00036895) title_pane_stacon_g3_ParamLimits

0x9f28,	// (0x00036895) title_pane_stacon_g3

0xd669,	// (0x00039fd6) list_single_2graphic_im_pane_g4_ParamLimits

0xd669,	// (0x00039fd6) list_single_2graphic_im_pane_g4

0x7361,	// (0x00033cce) popup_side_volume_key_window_cp

0x784b,	// (0x000341b8) main_idle_act2_pane_t1

0xa652,	// (0x00036fbf) toolbar_button_pane_g10

0x9d65,	// (0x000366d2) popup_toolbar_window_cp1

0x7ee9,	// (0x00034856) clock_nsta_pane_cp_t1

0x7ee9,	// (0x00034856) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0003c456) clock_nsta_pane_cp_t

0xa204,	// (0x00036b71) navi_navi_volume_pane_cp2_ParamLimits

0xa213,	// (0x00036b80) popup_side_volume_key_window_g1_ParamLimits

0xa21f,	// (0x00036b8c) popup_side_volume_key_window_g2_ParamLimits

0xa22e,	// (0x00036b9b) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003c0c3) popup_side_volume_key_window_g_ParamLimits

0xabfd,	// (0x0003756a) fep_hwr_aid_pane

0x18e1,	// (0x0002e24e) bg_fep_hwr_top_pane_g4_ParamLimits

0xca93,	// (0x00039400) fep_hwr_top_pane_g1_ParamLimits

0xcaa5,	// (0x00039412) fep_hwr_top_pane_g2_ParamLimits

0xacb6,	// (0x00037623) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0003c4ab) fep_hwr_top_pane_g_ParamLimits

0xaccb,	// (0x00037638) fep_hwr_top_text_pane_ParamLimits

0x715f,	// (0x00033acc) aid_touch_tab_arrow_arrow_2

0x7156,	// (0x00033ac3) aid_touch_tab_arrow_left_2

0xac11,	// (0x0003757e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xac48,	// (0x000375b5) fep_hwr_prediction_pane

0xcc0c,	// (0x00039579) fep_vkb_prediction_pane

0xcd10,	// (0x0003967d) fep_vkb_side_pane_g3_ParamLimits

0xcd10,	// (0x0003967d) fep_vkb_side_pane_g3

0xccbc,	// (0x00039629) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xd154,	// (0x00039ac1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xd161,	// (0x00039ace) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe8,	// (0x0003c555) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xdb5d,	// (0x0003a4ca) fep_hwr_prediction_pane_g1

0xaf79,	// (0x000378e6) fep_hwr_prediction_pane_g2

0xaf81,	// (0x000378ee) fep_hwr_prediction_pane_g3

0xaf89,	// (0x000378f6) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0003c651) fep_hwr_prediction_pane_g

0xdb5d,	// (0x0003a4ca) fep_vkb_prediction_pane_g1

0xdb67,	// (0x0003a4d4) fep_vkb_prediction_pane_g2

0xdb6f,	// (0x0003a4dc) fep_vkb_prediction_pane_g3

0xdb77,	// (0x0003a4e4) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0003c65a) fep_vkb_prediction_pane_g

0xa92a,	// (0x00037297) slider_set_pane_g3

0xa93e,	// (0x000372ab) slider_set_pane_g4

0xa956,	// (0x000372c3) slider_set_pane_g5

0xa92a,	// (0x00037297) slider_set_pane_g6

0xa96c,	// (0x000372d9) slider_set_pane_g7

0x75e0,	// (0x00033f4d) slider_form_pane_g3

0x75e9,	// (0x00033f56) slider_form_pane_g4

0x75f1,	// (0x00033f5e) slider_form_pane_g5

0x75e0,	// (0x00033f4d) slider_form_pane_g6

0xc533,	// (0x00038ea0) slider_form_pane_g7

0x7ae9,	// (0x00034456) slider_set_pane_vc_g3

0x7af2,	// (0x0003445f) slider_set_pane_vc_g4

0x7afb,	// (0x00034468) slider_set_pane_vc_g5

0x7ae9,	// (0x00034456) slider_set_pane_vc_g6

0x7b04,	// (0x00034471) slider_set_pane_vc_g7

0x7ae9,	// (0x00034456) slider_form_pane_vc_g1

0x7af2,	// (0x0003445f) slider_form_pane_vc_g2

0x7afb,	// (0x00034468) slider_form_pane_vc_g3

0x7ae9,	// (0x00034456) slider_form_pane_vc_g4

0x7c93,	// (0x00034600) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0003c43c) slider_form_pane_vc_g

0x4e5a,	// (0x000317c7) main_idle_act3_pane

0xdb7f,	// (0x0003a4ec) ai3_links_pane

0xdb88,	// (0x0003a4f5) popup_ai3_data_window_ParamLimits

0xdb88,	// (0x0003a4f5) popup_ai3_data_window

0x4e5a,	// (0x000317c7) grid_ai3_links_pane

0xdba0,	// (0x0003a50d) cell_ai3_links_pane_ParamLimits

0xdba0,	// (0x0003a50d) cell_ai3_links_pane

0xdbb8,	// (0x0003a525) bg_popup_sub_pane_cp11

0xdbc5,	// (0x0003a532) cell_ai3_links_pane_g1

0x4e5a,	// (0x000317c7) bg_popup_sub_pane_cp12

0xdbea,	// (0x0003a557) heading_ai3_data_pane

0xdbf2,	// (0x0003a55f) list_ai3_gene_pane

0xdbfe,	// (0x0003a56b) popup_ai3_data_window_g1

0xdc06,	// (0x0003a573) heading_ai3_data_pane_g1

0xdc0e,	// (0x0003a57b) heading_ai3_data_pane_t1

0xdc1c,	// (0x0003a589) list_double_ai3_gene_pane_ParamLimits

0xdc1c,	// (0x0003a589) list_double_ai3_gene_pane

0xdc29,	// (0x0003a596) list_single_ai3_gene_pane_ParamLimits

0xdc29,	// (0x0003a596) list_single_ai3_gene_pane

0xc9e8,	// (0x00039355) list_highlight_pane_cp7_ParamLimits

0xc9e8,	// (0x00039355) list_highlight_pane_cp7

0xdc36,	// (0x0003a5a3) list_single_a13_gene_pane_t1_ParamLimits

0xdc36,	// (0x0003a5a3) list_single_a13_gene_pane_t1

0xdc4d,	// (0x0003a5ba) list_single_ai3_gene_pane_g1

0xdc56,	// (0x0003a5c3) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0003c663) list_single_ai3_gene_pane_g

0xdc5e,	// (0x0003a5cb) list_double_ai3_gene_pane_g1_ParamLimits

0xdc5e,	// (0x0003a5cb) list_double_ai3_gene_pane_g1

0xdc6a,	// (0x0003a5d7) list_double_ai3_gene_pane_t1_ParamLimits

0xdc6a,	// (0x0003a5d7) list_double_ai3_gene_pane_t1

0xdc86,	// (0x0003a5f3) list_double_ai3_gene_pane_t2_ParamLimits

0xdc86,	// (0x0003a5f3) list_double_ai3_gene_pane_t2

0xdc9b,	// (0x0003a608) list_double_ai3_gene_pane_t3_ParamLimits

0xdc9b,	// (0x0003a608) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0003c668) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0003c668) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9557,	// (0x00035ec4) aid_size_min_col_2

0xdb49,	// (0x0003a4b6) aid_size_min_msg_ParamLimits

0xdb49,	// (0x0003a4b6) aid_size_min_msg

0xce10,	// (0x0003977d) fep_vkb_top_text_pane_g2_ParamLimits

0xce10,	// (0x0003977d) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0003c4db) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0003c4db) fep_vkb_top_text_pane_g

0x4e5a,	// (0x000317c7) main_hc_apps_shell_pane

0xdcb8,	// (0x0003a625) grid_hc_apps_pane_ParamLimits

0xdcb8,	// (0x0003a625) grid_hc_apps_pane

0xdcc7,	// (0x0003a634) list_hc_apps_pane

0xdccf,	// (0x0003a63c) scroll_pane_cp37_ParamLimits

0xdccf,	// (0x0003a63c) scroll_pane_cp37

0xdcdb,	// (0x0003a648) cell_hc_apps_pane_ParamLimits

0xdcdb,	// (0x0003a648) cell_hc_apps_pane

0xddac,	// (0x0003a719) cell_hc_apps_pane_g1_ParamLimits

0xddac,	// (0x0003a719) cell_hc_apps_pane_g1

0xdddd,	// (0x0003a74a) cell_hc_apps_pane_g2_ParamLimits

0xdddd,	// (0x0003a74a) cell_hc_apps_pane_g2

0xddf9,	// (0x0003a766) cell_hc_apps_pane_g3_ParamLimits

0xddf9,	// (0x0003a766) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0003c66f) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0003c66f) cell_hc_apps_pane_g

0xde1b,	// (0x0003a788) cell_hc_apps_pane_t1_ParamLimits

0xde1b,	// (0x0003a788) cell_hc_apps_pane_t1

0x5006,	// (0x00031973) grid_highlight_pane_cp10_ParamLimits

0x5006,	// (0x00031973) grid_highlight_pane_cp10

0xde5b,	// (0x0003a7c8) list_single_hc_apps_pane_ParamLimits

0xde5b,	// (0x0003a7c8) list_single_hc_apps_pane

0xdece,	// (0x0003a83b) list_single_hc_apps_pane_g1

0xaf91,	// (0x000378fe) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0003c676) list_single_hc_apps_pane_g

0xafaa,	// (0x00037917) list_single_hc_apps_pane_g2_copy1

0x961b,	// (0x00035f88) list_single_hc_apps_pane_t1

0x4eca,	// (0x00031837) bg_set_opt_pane_cp_ParamLimits

0x9b20,	// (0x0003648d) setting_slider_pane_t1_ParamLimits

0x9b39,	// (0x000364a6) setting_slider_pane_t2_ParamLimits

0x9b52,	// (0x000364bf) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003bf0f) setting_slider_pane_t_ParamLimits

0x9b69,	// (0x000364d6) slider_set_pane_ParamLimits

0xa514,	// (0x00036e81) control_pane_g5_ParamLimits

0xa514,	// (0x00036e81) control_pane_g5

0x75a2,	// (0x00033f0f) slider_set_pane_g1_ParamLimits

0xa91e,	// (0x0003728b) slider_set_pane_g2_ParamLimits

0xa92a,	// (0x00037297) slider_set_pane_g3_ParamLimits

0xa93e,	// (0x000372ab) slider_set_pane_g4_ParamLimits

0xa956,	// (0x000372c3) slider_set_pane_g5_ParamLimits

0xa92a,	// (0x00037297) slider_set_pane_g6_ParamLimits

0xa96c,	// (0x000372d9) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0003c30f) slider_set_pane_g_ParamLimits

0x5dda,	// (0x00032747) navi_icon_text_pane_ParamLimits

0xbde5,	// (0x00038752) aid_fill_nsta_2_ParamLimits

0xbe0f,	// (0x0003877c) aid_touch_tab_arrow_left_ParamLimits

0xbe1e,	// (0x0003878b) aid_touch_tab_arrow_right_ParamLimits

0xbe8b,	// (0x000387f8) clock_nsta_pane_ParamLimits

0xc2e5,	// (0x00038c52) navi_icon_pane_g1_ParamLimits

0xc2f4,	// (0x00038c61) navi_text_pane_t1_ParamLimits

0xc75e,	// (0x000390cb) navi_icon_text_pane_g1_ParamLimits

0xc76d,	// (0x000390da) navi_icon_text_pane_t1_ParamLimits

0xdece,	// (0x0003a83b) list_single_hc_apps_pane_g1_ParamLimits

0xaf91,	// (0x000378fe) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0003c676) list_single_hc_apps_pane_g_ParamLimits

0xafaa,	// (0x00037917) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x961b,	// (0x00035f88) list_single_hc_apps_pane_t1_ParamLimits

0x9974,	// (0x000362e1) popup_toolbar2_fixed_window_ParamLimits

0x9974,	// (0x000362e1) popup_toolbar2_fixed_window

0xbd58,	// (0x000386c5) popup_toolbar2_float_window

0x4e5a,	// (0x000317c7) bg_popup_sub_pane_cp27

0xdee7,	// (0x0003a854) grid_toolbar2_float_pane

0x4e5a,	// (0x000317c7) bg_popup_sub_pane_cp26

0xdee7,	// (0x0003a854) grid_toolbar2_fixed_pane

0xdeef,	// (0x0003a85c) cell_toolbar2_fixed_pane_ParamLimits

0xdeef,	// (0x0003a85c) cell_toolbar2_fixed_pane

0xdf00,	// (0x0003a86d) cell_toolbar2_fixed_pane_g1

0xdf09,	// (0x0003a876) toolbar2_fixed_button_pane

0x64a4,	// (0x00032e11) toolbar2_fixed_button_pane_g1

0x64b4,	// (0x00032e21) toolbar2_fixed_button_pane_g2

0x64ac,	// (0x00032e19) toolbar2_fixed_button_pane_g3

0x64c4,	// (0x00032e31) toolbar2_fixed_button_pane_g4

0x64bc,	// (0x00032e29) toolbar2_fixed_button_pane_g5

0x64cc,	// (0x00032e39) toolbar2_fixed_button_pane_g6

0x64d4,	// (0x00032e41) toolbar2_fixed_button_pane_g7

0x64e4,	// (0x00032e51) toolbar2_fixed_button_pane_g8

0x64dc,	// (0x00032e49) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0003c211) toolbar2_fixed_button_pane_g

0xdf11,	// (0x0003a87e) cell_toolbar2_float_pane_ParamLimits

0xdf11,	// (0x0003a87e) cell_toolbar2_float_pane

0xdf22,	// (0x0003a88f) cell_toolbar2_float_pane_g1

0xdf09,	// (0x0003a876) toolbar2_fixed_button_pane_cp

0xcb65,	// (0x000394d2) fep_vkb_accented_list_pane_ParamLimits

0xcb65,	// (0x000394d2) fep_vkb_accented_list_pane

0xae19,	// (0x00037786) bg_popup_fep_shadow_pane_g9

0x5f5c,	// (0x000328c9) bg_popup_fep_shadow_pane_cp3

0x5620,	// (0x00031f8d) list_accented_list_pane

0xdf2b,	// (0x0003a898) list_single_accented_list_pane_ParamLimits

0xdf2b,	// (0x0003a898) list_single_accented_list_pane

0x5f5c,	// (0x000328c9) list_highlight_pane_cp10

0xdf3c,	// (0x0003a8a9) list_single_accented_list_pane_t1

0xbcb0,	// (0x0003861d) popup_slider_window_ParamLimits

0xbcb0,	// (0x0003861d) popup_slider_window

0xdb40,	// (0x0003a4ad) aid_indentation_list_msg

0xdff6,	// (0x0003a963) bg_popup_window_pane_cp19

0xe060,	// (0x0003a9cd) popup_slider_window_g1

0xe07c,	// (0x0003a9e9) popup_slider_window_g2

0xe098,	// (0x0003aa05) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0003c67b) popup_slider_window_g

0xe0f4,	// (0x0003aa61) popup_slider_window_t1

0xe168,	// (0x0003aad5) small_volume_slider_vertical_pane

0xca23,	// (0x00039390) small_volume_slider_vertical_pane_g1

0xca23,	// (0x00039390) small_volume_slider_vertical_pane_g2

0xe184,	// (0x0003aaf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0003c68d) small_volume_slider_vertical_pane_g

0x9744,	// (0x000360b1) area_side_right_pane_ParamLimits

0x9744,	// (0x000360b1) area_side_right_pane

0xafc6,	// (0x00037933) aid_size_side_button_ParamLimits

0xafc6,	// (0x00037933) aid_size_side_button

0xafda,	// (0x00037947) grid_sctrl_middle_pane_ParamLimits

0xafda,	// (0x00037947) grid_sctrl_middle_pane

0xaffa,	// (0x00037967) sctrl_sk_bottom_pane

0xb00b,	// (0x00037978) sctrl_sk_top_pane

0xb01d,	// (0x0003798a) aid_touch_sctrl_top

0x5006,	// (0x00031973) bg_sctrl_sk_pane_ParamLimits

0x5006,	// (0x00031973) bg_sctrl_sk_pane

0xb02a,	// (0x00037997) sctrl_sk_top_pane_g1

0xb037,	// (0x000379a4) sctrl_sk_top_pane_t1

0xb01d,	// (0x0003798a) aid_touch_sctrl_bottom

0x5006,	// (0x00031973) bg_sctrl_sk_pane_cp_ParamLimits

0x5006,	// (0x00031973) bg_sctrl_sk_pane_cp

0xb052,	// (0x000379bf) sctrl_sk_bottom_pane_g1

0xb037,	// (0x000379a4) sctrl_sk_bottom_pane_t1

0xb05b,	// (0x000379c8) cell_sctrl_middle_pane_ParamLimits

0xb05b,	// (0x000379c8) cell_sctrl_middle_pane

0xb076,	// (0x000379e3) aid_touch_sctrl_middle_ParamLimits

0xb076,	// (0x000379e3) aid_touch_sctrl_middle

0x551a,	// (0x00031e87) bg_sctrl_middle_pane_ParamLimits

0x551a,	// (0x00031e87) bg_sctrl_middle_pane

0xccbc,	// (0x00039629) cell_sctrl_middle_pane_g1_ParamLimits

0xccbc,	// (0x00039629) cell_sctrl_middle_pane_g1

0xb088,	// (0x000379f5) cell_sctrl_middle_pane_g2_ParamLimits

0xb088,	// (0x000379f5) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0003c699) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0003c699) cell_sctrl_middle_pane_g

0x64a4,	// (0x00032e11) bg_sctrl_middle_pane_g1

0x64b4,	// (0x00032e21) bg_sctrl_middle_pane_g2

0x64ac,	// (0x00032e19) bg_sctrl_middle_pane_g3

0x64c4,	// (0x00032e31) bg_sctrl_middle_pane_g4

0x64bc,	// (0x00032e29) bg_sctrl_middle_pane_g5

0x64cc,	// (0x00032e39) bg_sctrl_middle_pane_g6

0x64d4,	// (0x00032e41) bg_sctrl_middle_pane_g7

0x64e4,	// (0x00032e51) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0003c69e) bg_sctrl_middle_pane_g

0x64dc,	// (0x00032e49) bg_sctrl_middle_pane_g8_copy1

0x64a4,	// (0x00032e11) bg_sctrl_sk_pane_g1

0x64b4,	// (0x00032e21) bg_sctrl_sk_pane_g2

0x64ac,	// (0x00032e19) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0003c211) bg_sctrl_sk_pane_g

0x5453,	// (0x00031dc0) aid_size_touch_scroll_bar

0x64c4,	// (0x00032e31) bg_sctrl_sk_pane_g4

0x64bc,	// (0x00032e29) bg_sctrl_sk_pane_g5

0x64cc,	// (0x00032e39) bg_sctrl_sk_pane_g6

0x64d4,	// (0x00032e41) bg_sctrl_sk_pane_g7

0x64e4,	// (0x00032e51) bg_sctrl_sk_pane_g8

0x64dc,	// (0x00032e49) bg_sctrl_sk_pane_g9

0x61e6,	// (0x00032b53) popup_fep_china_hwr2_fs_candidate_window

0xb9be,	// (0x0003832b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb9be,	// (0x0003832b) popup_fep_china_hwr2_fs_control_window

0xccbc,	// (0x00039629) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0003c694) sctrl_sk_top_pane_g

0xe18d,	// (0x0003aafa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe18d,	// (0x0003aafa) aid_fep_china_hwr2_fs_cell

0xe19f,	// (0x0003ab0c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe19f,	// (0x0003ab0c) bg_popup_fep_shadow_pane_cp4

0xe1b6,	// (0x0003ab23) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1b6,	// (0x0003ab23) bg_popup_fep_shadow_pane_cp5

0xe1c8,	// (0x0003ab35) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1c8,	// (0x0003ab35) popup_fep_china_hwr2_fs_control_bar_grid

0xe1d8,	// (0x0003ab45) popup_fep_china_hwr2_fs_control_funtion_grid

0xe1e0,	// (0x0003ab4d) aid_fep_china_hwr2_fs_candi_cell

0x4e5a,	// (0x000317c7) bg_popup_fep_shadow_pane_cp6

0xe1ea,	// (0x0003ab57) popup_fep_china_hwr2_fs_candidate_grid

0xe1f4,	// (0x0003ab61) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1f4,	// (0x0003ab61) cell_fep_china_hwr2_fs_funtion_grid

0xca23,	// (0x00039390) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe20c,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe20c,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe21a,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe21a,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0003c6af) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0003c6af) cell_fep_china_hwr2_fs_funtion_grid_g

0xe230,	// (0x0003ab9d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe230,	// (0x0003ab9d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe245,	// (0x0003abb2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe245,	// (0x0003abb2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0003c6b4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0003c6b4) cell_fep_china_hwr2_fs_funtion_grid_t

0xe261,	// (0x0003abce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe269,	// (0x0003abd6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe271,	// (0x0003abde) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0003c6b9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe279,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe279,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid

0xe292,	// (0x0003abff) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe29a,	// (0x0003ac07) popup_fep_china_hwr2_fs_candidate_grid_g21

0xca23,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g1

0xca23,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0003c4e0) cell_fep_china_hwr2_fs_candidate_grid_g

0xe2a2,	// (0x0003ac0f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x62f3,	// (0x00032c60) clock_nsta_pane_cp_24_ParamLimits

0x62f3,	// (0x00032c60) clock_nsta_pane_cp_24

0x635b,	// (0x00032cc8) indicator_nsta_pane_cp_24_ParamLimits

0x635b,	// (0x00032cc8) indicator_nsta_pane_cp_24

0x7060,	// (0x000339cd) heading_pane_g1

0x0001,

0xf909,	// (0x0003c276) heading_pane_g

0x76d6,	// (0x00034043) grid_sct_catagory_button_pane

0x7424,	// (0x00033d91) scroll_pane_cp5_ParamLimits

0x7f54,	// (0x000348c1) button_value_adjust_pane_cp5_ParamLimits

0x7f54,	// (0x000348c1) button_value_adjust_pane_cp5

0x8012,	// (0x0003497f) form2_midp_time_pane_ParamLimits

0xe2b0,	// (0x0003ac1d) cell_sct_catagory_button_pane_ParamLimits

0xe2b0,	// (0x0003ac1d) cell_sct_catagory_button_pane

0xc9e8,	// (0x00039355) bg_button_pane_cp01_ParamLimits

0xc9e8,	// (0x00039355) bg_button_pane_cp01

0xca23,	// (0x00039390) cell_sct_catagory_button_pane_g1

0xbce7,	// (0x00038654) popup_tb_extension_window

0xe2c2,	// (0x0003ac2f) aid_size_cell_ext_ParamLimits

0xe2c2,	// (0x0003ac2f) aid_size_cell_ext

0x5006,	// (0x00031973) bg_tb_trans_pane_cp1_ParamLimits

0x5006,	// (0x00031973) bg_tb_trans_pane_cp1

0xe2e2,	// (0x0003ac4f) grid_tb_ext_pane_ParamLimits

0xe2e2,	// (0x0003ac4f) grid_tb_ext_pane

0xe314,	// (0x0003ac81) cell_tb_ext_pane_ParamLimits

0xe314,	// (0x0003ac81) cell_tb_ext_pane

0xe32b,	// (0x0003ac98) cell_tb_ext_pane_g1_ParamLimits

0xe32b,	// (0x0003ac98) cell_tb_ext_pane_g1

0xe348,	// (0x0003acb5) cell_tb_ext_pane_t1

0x5006,	// (0x00031973) list_highlight_pane_cp11_ParamLimits

0x5006,	// (0x00031973) list_highlight_pane_cp11

0x9993,	// (0x00036300) popup_uni_indicator_window_ParamLimits

0x9993,	// (0x00036300) popup_uni_indicator_window

0x551a,	// (0x00031e87) bg_popup_sub_pane_cp14

0xe363,	// (0x0003acd0) list_uniindi_pane

0xe36f,	// (0x0003acdc) uniindi_top_pane

0x5006,	// (0x00031973) bg_uniindi_top_pane

0xe38e,	// (0x0003acfb) uniindi_top_pane_g1

0xe3a4,	// (0x0003ad11) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0003c6c0) uniindi_top_pane_g

0xe3ce,	// (0x0003ad3b) uniindi_top_pane_t1

0xe3f8,	// (0x0003ad65) list_single_uniindi_pane_ParamLimits

0xe3f8,	// (0x0003ad65) list_single_uniindi_pane

0xca23,	// (0x00039390) bg_uniindi_top_pane_g1

0xe40a,	// (0x0003ad77) list_single_uniindi_pane_g1

0xe41d,	// (0x0003ad8a) list_single_uniindi_pane_t1

0x4e5a,	// (0x000317c7) control_bg_pane

0xe442,	// (0x0003adaf) bg_sctrl_sk_pane_cp1

0xe44b,	// (0x0003adb8) bg_sctrl_sk_pane_cp2

0xe454,	// (0x0003adc1) control_bg_pane_g1

0xe45d,	// (0x0003adca) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0003c6c9) control_bg_pane_g

0x7e82,	// (0x000347ef) cell_indicator_nsta_pane_g1_ParamLimits

0xc68d,	// (0x00038ffa) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0003c451) cell_indicator_nsta_pane_g_ParamLimits

0x9336,	// (0x00035ca3) form2_midp_time_pane_t1_ParamLimits

0x5295,	// (0x00031c02) main_idle_act4_pane_ParamLimits

0x5295,	// (0x00031c02) main_idle_act4_pane

0xbce7,	// (0x00038654) popup_tb_extension_window_ParamLimits

0xe304,	// (0x0003ac71) tb_ext_find_pane_ParamLimits

0xe304,	// (0x0003ac71) tb_ext_find_pane

0xe466,	// (0x0003add3) ai_gene_pane_1_cp1

0x5fde,	// (0x0003294b) ai_gene_pane_2_cp1

0xe46e,	// (0x0003addb) list_single_idle_plugin_calendar_pane

0xe477,	// (0x0003ade4) list_single_idle_plugin_notification_pane

0xe480,	// (0x0003aded) list_single_idle_plugin_player_pane

0xe489,	// (0x0003adf6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe489,	// (0x0003adf6) list_single_idle_plugin_shortcut_pane

0xe4ab,	// (0x0003ae18) main_idle_act4_pane_t1

0xe4bd,	// (0x0003ae2a) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0003c6ce) main_idle_act4_pane_t

0xe4cf,	// (0x0003ae3c) middle_sk_idle_act4_pane_ParamLimits

0xe4cf,	// (0x0003ae3c) middle_sk_idle_act4_pane

0xe4e5,	// (0x0003ae52) popup_clock_digital_analogue_window_cp2

0xe4ff,	// (0x0003ae6c) shortcut_wheel_idle_act4_pane_ParamLimits

0xe4ff,	// (0x0003ae6c) shortcut_wheel_idle_act4_pane

0xca23,	// (0x00039390) shortcut_wheel_idle_act4_pane_g1

0xca23,	// (0x00039390) shortcut_wheel_idle_act4_pane_g2

0xca23,	// (0x00039390) shortcut_wheel_idle_act4_pane_g3

0xca23,	// (0x00039390) shortcut_wheel_idle_act4_pane_g4

0xca23,	// (0x00039390) shortcut_wheel_idle_act4_pane_g5

0xe513,	// (0x0003ae80) shortcut_wheel_idle_act4_pane_g6

0xe51b,	// (0x0003ae88) shortcut_wheel_idle_act4_pane_g7

0xe523,	// (0x0003ae90) shortcut_wheel_idle_act4_pane_g8

0xe52b,	// (0x0003ae98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0003c6d3) shortcut_wheel_idle_act4_pane_g

0xccbc,	// (0x00039629) middle_sk_idle_act4_pane_g1_ParamLimits

0xccbc,	// (0x00039629) middle_sk_idle_act4_pane_g1

0xe58f,	// (0x0003aefc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe58f,	// (0x0003aefc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0003c6f6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0003c6f6) middle_sk_idle_act4_pane_g

0xe59b,	// (0x0003af08) middle_sk_idle_act4_pane_t1_ParamLimits

0xe59b,	// (0x0003af08) middle_sk_idle_act4_pane_t1

0xe5b8,	// (0x0003af25) grid_ai_shortcut_pane_ParamLimits

0xe5b8,	// (0x0003af25) grid_ai_shortcut_pane

0xe5d1,	// (0x0003af3e) list_highlight_pane_cp16_ParamLimits

0xe5d1,	// (0x0003af3e) list_highlight_pane_cp16

0xe5de,	// (0x0003af4b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe5de,	// (0x0003af4b) list_single_idle_plugin_shortcut_pane_g1

0xe5ea,	// (0x0003af57) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe5ea,	// (0x0003af57) list_single_idle_plugin_shortcut_pane_g2

0xe602,	// (0x0003af6f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe602,	// (0x0003af6f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0003c6fb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0003c6fb) list_single_idle_plugin_shortcut_pane_g

0xe615,	// (0x0003af82) cell_ai_shortcut_pane_ParamLimits

0xe615,	// (0x0003af82) cell_ai_shortcut_pane

0xe636,	// (0x0003afa3) cell_ai_shortcut_pane_g1_ParamLimits

0xe636,	// (0x0003afa3) cell_ai_shortcut_pane_g1

0xe466,	// (0x0003add3) ai_gene_pane_1_cp2

0xe658,	// (0x0003afc5) ai_gene_pane_2_cp2

0xe660,	// (0x0003afcd) list_highlight_pane_cp15

0xe669,	// (0x0003afd6) list_single_idle_plugin_calendar_pane_g1

0xe660,	// (0x0003afcd) list_highlight_pane_cp17

0xe671,	// (0x0003afde) list_single_idle_plugin_calendar_pane_g1_copy1

0xe679,	// (0x0003afe6) list_single_idle_plugin_player_pane_g1

0x78eb,	// (0x00034258) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0003c702) list_single_idle_plugin_player_pane_g

0xe681,	// (0x0003afee) list_single_idle_plugin_player_pane_t1

0xe68f,	// (0x0003affc) list_single_idle_plugin_player_pane_t2

0xe69d,	// (0x0003b00a) list_single_idle_plugin_player_pane_t3

0xe6ab,	// (0x0003b018) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0003c707) list_single_idle_plugin_player_pane_t

0xe6b9,	// (0x0003b026) wait_bar_pane_cp15

0xe6c1,	// (0x0003b02e) grid_ai_notification_pane

0x78eb,	// (0x00034258) list_single_idle_plugin_notification_pane_g1

0xe6ca,	// (0x0003b037) cell_ai_notification_pane_ParamLimits

0xe6ca,	// (0x0003b037) cell_ai_notification_pane

0xe6d7,	// (0x0003b044) cell_ai_notification_pane_g1

0xe6df,	// (0x0003b04c) cell_ai_notification_pane_t1

0xe6ed,	// (0x0003b05a) tb_ext_find_button_pane

0xe6f5,	// (0x0003b062) tb_ext_find_pane_g1

0xe6fd,	// (0x0003b06a) tb_ext_find_pane_t1

0x5a4d,	// (0x000323ba) tb_ext_find_button_pane_g1

0xe70b,	// (0x0003b078) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0003c710) tb_ext_find_button_pane_g

0xe4ab,	// (0x0003ae18) main_idle_act4_pane_t1_ParamLimits

0xe4bd,	// (0x0003ae2a) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0003c6ce) main_idle_act4_pane_t_ParamLimits

0xe4e5,	// (0x0003ae52) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe4f3,	// (0x0003ae60) sat_plugin_idle_act4_pane_ParamLimits

0xe4f3,	// (0x0003ae60) sat_plugin_idle_act4_pane

0xe714,	// (0x0003b081) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe714,	// (0x0003b081) sat_plugin_idle_act4_pane_t1

0xe727,	// (0x0003b094) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe727,	// (0x0003b094) sat_plugin_idle_act4_pane_t2

0xe73a,	// (0x0003b0a7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe73a,	// (0x0003b0a7) sat_plugin_idle_act4_pane_t3

0xe74d,	// (0x0003b0ba) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe74d,	// (0x0003b0ba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0003c715) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0003c715) sat_plugin_idle_act4_pane_t

0x98dc,	// (0x00036249) popup_battery_window_ParamLimits

0x98dc,	// (0x00036249) popup_battery_window

0x5006,	// (0x00031973) bg_popup_sub_pane_cp25_ParamLimits

0x5006,	// (0x00031973) bg_popup_sub_pane_cp25

0xe760,	// (0x0003b0cd) popup_battery_window_g1_ParamLimits

0xe760,	// (0x0003b0cd) popup_battery_window_g1

0xe76c,	// (0x0003b0d9) popup_battery_window_t1_ParamLimits

0xe76c,	// (0x0003b0d9) popup_battery_window_t1

0xe77e,	// (0x0003b0eb) popup_battery_window_t2_ParamLimits

0xe77e,	// (0x0003b0eb) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0003c71e) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0003c71e) popup_battery_window_t

0xb850,	// (0x000381bd) midp_canvas_pane_ParamLimits

0xb8b4,	// (0x00038221) midp_keypad_pane_ParamLimits

0xb8b4,	// (0x00038221) midp_keypad_pane

0x5671,	// (0x00031fde) main_midp_pane_ParamLimits

0x7f07,	// (0x00034874) signal_pane_g2_cp_ParamLimits

0xe79b,	// (0x0003b108) aid_size_cell_midp_keypad_ParamLimits

0xe79b,	// (0x0003b108) aid_size_cell_midp_keypad

0xe7b5,	// (0x0003b122) midp_keyp_game_grid_pane_ParamLimits

0xe7b5,	// (0x0003b122) midp_keyp_game_grid_pane

0xe7d5,	// (0x0003b142) midp_keyp_rocker_pane_ParamLimits

0xe7d5,	// (0x0003b142) midp_keyp_rocker_pane

0xe80e,	// (0x0003b17b) midp_keyp_sk_left_pane_ParamLimits

0xe80e,	// (0x0003b17b) midp_keyp_sk_left_pane

0xe868,	// (0x0003b1d5) midp_keyp_sk_right_pane_ParamLimits

0xe868,	// (0x0003b1d5) midp_keyp_sk_right_pane

0x4e5a,	// (0x000317c7) bg_button_pane_cp03

0xe8c2,	// (0x0003b22f) midp_keyp_sk_left_pane_g1

0x4e5a,	// (0x000317c7) bg_button_pane_cp04

0xe8c2,	// (0x0003b22f) midp_keyp_sk_right_pane_g1

0xca23,	// (0x00039390) midp_keyp_rocker_pane_g1

0xe8cb,	// (0x0003b238) keyp_game_cell_pane_ParamLimits

0xe8cb,	// (0x0003b238) keyp_game_cell_pane

0x4e5a,	// (0x000317c7) bg_button_pane_cp02

0xe8de,	// (0x0003b24b) keyp_game_cell_pane_g1

0x9912,	// (0x0003627f) popup_fep_vkb2_window_ParamLimits

0x9912,	// (0x0003627f) popup_fep_vkb2_window

0xb0aa,	// (0x00037a17) aid_size_cell_vkb2_ParamLimits

0xb0aa,	// (0x00037a17) aid_size_cell_vkb2

0xb0fe,	// (0x00037a6b) popup_fep_vkb2_window_g1_ParamLimits

0xb0fe,	// (0x00037a6b) popup_fep_vkb2_window_g1

0xb13e,	// (0x00037aab) vkb2_area_bottom_pane_ParamLimits

0xb13e,	// (0x00037aab) vkb2_area_bottom_pane

0xb18a,	// (0x00037af7) vkb2_area_keypad_pane_ParamLimits

0xb18a,	// (0x00037af7) vkb2_area_keypad_pane

0xb1cc,	// (0x00037b39) vkb2_area_top_pane_ParamLimits

0xb1cc,	// (0x00037b39) vkb2_area_top_pane

0xb246,	// (0x00037bb3) vkb2_top_entry_pane_ParamLimits

0xb246,	// (0x00037bb3) vkb2_top_entry_pane

0xb270,	// (0x00037bdd) vkb2_top_grid_left_pane_ParamLimits

0xb270,	// (0x00037bdd) vkb2_top_grid_left_pane

0xb28e,	// (0x00037bfb) vkb2_top_grid_right_pane_ParamLimits

0xb28e,	// (0x00037bfb) vkb2_top_grid_right_pane

0xb2ac,	// (0x00037c19) vkb2_cell_keypad_pane_ParamLimits

0xb2ac,	// (0x00037c19) vkb2_cell_keypad_pane

0xb37d,	// (0x00037cea) vkb2_area_bottom_grid_pane_ParamLimits

0xb37d,	// (0x00037cea) vkb2_area_bottom_grid_pane

0xb3a3,	// (0x00037d10) vkb2_area_bottom_pane_g1_ParamLimits

0xb3a3,	// (0x00037d10) vkb2_area_bottom_pane_g1

0xb3c7,	// (0x00037d34) vkb2_area_bottom_pane_g2_ParamLimits

0xb3c7,	// (0x00037d34) vkb2_area_bottom_pane_g2

0xb3f5,	// (0x00037d62) vkb2_area_bottom_pane_g3_ParamLimits

0xb3f5,	// (0x00037d62) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0003c723) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0003c723) vkb2_area_bottom_pane_g

0xb456,	// (0x00037dc3) vkb2_top_cell_left_pane_ParamLimits

0xb456,	// (0x00037dc3) vkb2_top_cell_left_pane

0x01f8,	// (0x0002cb65) vkb2_top_entry_pane_g1_ParamLimits

0x01f8,	// (0x0002cb65) vkb2_top_entry_pane_g1

0x0206,	// (0x0002cb73) vkb2_top_entry_pane_t1_ParamLimits

0x0206,	// (0x0002cb73) vkb2_top_entry_pane_t1

0xe8ef,	// (0x0003b25c) vkb2_top_entry_pane_t2_ParamLimits

0xe8ef,	// (0x0003b25c) vkb2_top_entry_pane_t2

0xe921,	// (0x0003b28e) vkb2_top_entry_pane_t3_ParamLimits

0xe921,	// (0x0003b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0003c72a) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0003c72a) vkb2_top_entry_pane_t

0xb4a3,	// (0x00037e10) vkb2_top_grid_right_pane_g1_ParamLimits

0xb4a3,	// (0x00037e10) vkb2_top_grid_right_pane_g1

0xb4b9,	// (0x00037e26) vkb2_top_grid_right_pane_g2_ParamLimits

0xb4b9,	// (0x00037e26) vkb2_top_grid_right_pane_g2

0xb4d1,	// (0x00037e3e) vkb2_top_grid_right_pane_g3_ParamLimits

0xb4d1,	// (0x00037e3e) vkb2_top_grid_right_pane_g3

0xb4e9,	// (0x00037e56) vkb2_top_grid_right_pane_g4_ParamLimits

0xb4e9,	// (0x00037e56) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0003c731) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0003c731) vkb2_top_grid_right_pane_g

0xb4ff,	// (0x00037e6c) vkb2_top_cell_left_pane_g1

0xb516,	// (0x00037e83) vkb2_cell_keypad_pane_g1_ParamLimits

0xb516,	// (0x00037e83) vkb2_cell_keypad_pane_g1

0xe945,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1_ParamLimits

0xe945,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1

0xb524,	// (0x00037e91) vkb2_cell_bottom_grid_pane_ParamLimits

0xb524,	// (0x00037e91) vkb2_cell_bottom_grid_pane

0xb55d,	// (0x00037eca) vkb2_cell_bottom_grid_pane_g1

0xe533,	// (0x0003aea0) aid_call2_pane_cp02

0xe53b,	// (0x0003aea8) aid_call_pane_cp02

0xe543,	// (0x0003aeb0) clock_digital_number_pane_cp10

0xe54b,	// (0x0003aeb8) clock_digital_number_pane_cp11

0xe553,	// (0x0003aec0) clock_digital_number_pane_cp12

0xe55b,	// (0x0003aec8) clock_digital_number_pane_cp13

0xe563,	// (0x0003aed0) clock_digital_separator_pane_cp10

0x5a4d,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g1

0x5a4d,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g2

0xe56b,	// (0x0003aed8) popup_clock_digital_analogue_window_cp2_g3

0x5a4d,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g4

0xe56b,	// (0x0003aed8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0003c6e6) popup_clock_digital_analogue_window_cp2_g

0xe573,	// (0x0003aee0) popup_clock_digital_analogue_window_cp2_t1

0xe581,	// (0x0003aeee) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0003c6f1) popup_clock_digital_analogue_window_cp2_t

0xca23,	// (0x00039390) clock_digital_number_pane_cp10_g1

0xca23,	// (0x00039390) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0003c4e0) clock_digital_number_pane_cp10_g

0xca23,	// (0x00039390) clock_digital_separator_pane_cp10_g1

0xca23,	// (0x00039390) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0003c4e0) clock_digital_separator_pane_cp10_g

0xe3b0,	// (0x0003ad1d) uniindi_top_pane_g3

0xe3c1,	// (0x0003ad2e) uniindi_top_pane_g4

0xb337,	// (0x00037ca4) vkb2_row_keypad_pane_ParamLimits

0xb337,	// (0x00037ca4) vkb2_row_keypad_pane

0xb57d,	// (0x00037eea) vkb2_cell_t_keypad_pane_ParamLimits

0xb57d,	// (0x00037eea) vkb2_cell_t_keypad_pane

0xb58d,	// (0x00037efa) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb58d,	// (0x00037efa) vkb2_cell_t_keypad_pane_cp08

0xb5a0,	// (0x00037f0d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb5a0,	// (0x00037f0d) vkb2_cell_t_keypad_pane_cp09

0xb5b4,	// (0x00037f21) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb5b4,	// (0x00037f21) vkb2_cell_t_keypad_pane_cp01

0xb5c5,	// (0x00037f32) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb5c5,	// (0x00037f32) vkb2_cell_t_keypad_pane_cp02

0xb5d6,	// (0x00037f43) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb5d6,	// (0x00037f43) vkb2_cell_t_keypad_pane_cp03

0xb5e7,	// (0x00037f54) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb5e7,	// (0x00037f54) vkb2_cell_t_keypad_pane_cp04

0xb5f8,	// (0x00037f65) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb5f8,	// (0x00037f65) vkb2_cell_t_keypad_pane_cp05

0xb609,	// (0x00037f76) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb609,	// (0x00037f76) vkb2_cell_t_keypad_pane_cp06

0xb61a,	// (0x00037f87) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb61a,	// (0x00037f87) vkb2_cell_t_keypad_pane_cp07

0xb62b,	// (0x00037f98) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb62b,	// (0x00037f98) vkb2_cell_t_keypad_pane_cp10

0xccbc,	// (0x00039629) vkb2_cell_t_keypad_pane_g1

0xe95c,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1

0x4e5a,	// (0x000317c7) popup_grid_graphic2_window

0x0238,	// (0x0002cba5) aid_size_cell_graphic2_ParamLimits

0x0238,	// (0x0002cba5) aid_size_cell_graphic2

0xcfcd,	// (0x0003993a) bg_popup_window_pane_cp21_ParamLimits

0xcfcd,	// (0x0003993a) bg_popup_window_pane_cp21

0x0264,	// (0x0002cbd1) graphic2_pages_pane_ParamLimits

0x0264,	// (0x0002cbd1) graphic2_pages_pane

0x02aa,	// (0x0002cc17) grid_graphic2_control_pane_ParamLimits

0x02aa,	// (0x0002cc17) grid_graphic2_control_pane

0x02d8,	// (0x0002cc45) grid_graphic2_pane_ParamLimits

0x02d8,	// (0x0002cc45) grid_graphic2_pane

0x0338,	// (0x0002cca5) cell_graphic2_pane

0x4e5a,	// (0x000317c7) main_comp_mode_pane

0xdbf2,	// (0x0003a55f) list_ai3_gene_pane_ParamLimits

0xdff6,	// (0x0003a963) bg_popup_window_pane_cp19_ParamLimits

0xe002,	// (0x0003a96f) bg_touch_area_indi_pane_ParamLimits

0xe002,	// (0x0003a96f) bg_touch_area_indi_pane

0xe018,	// (0x0003a985) bg_touch_area_indi_pane_cp01_ParamLimits

0xe018,	// (0x0003a985) bg_touch_area_indi_pane_cp01

0xe02e,	// (0x0003a99b) bg_touch_area_indi_pane_cp02_ParamLimits

0xe02e,	// (0x0003a99b) bg_touch_area_indi_pane_cp02

0xe046,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03_ParamLimits

0xe046,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03

0xe060,	// (0x0003a9cd) popup_slider_window_g1_ParamLimits

0xe07c,	// (0x0003a9e9) popup_slider_window_g2_ParamLimits

0xe098,	// (0x0003aa05) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0003c67b) popup_slider_window_g_ParamLimits

0xe0f4,	// (0x0003aa61) popup_slider_window_t1_ParamLimits

0xe168,	// (0x0003aad5) small_volume_slider_vertical_pane_ParamLimits

0x0338,	// (0x0002cca5) cell_graphic2_pane_ParamLimits

0x0387,	// (0x0002ccf4) bg_button_pane_cp10_ParamLimits

0x0387,	// (0x0002ccf4) bg_button_pane_cp10

0x039a,	// (0x0002cd07) bg_button_pane_cp11_ParamLimits

0x039a,	// (0x0002cd07) bg_button_pane_cp11

0x03ad,	// (0x0002cd1a) graphic2_pages_pane_g1_ParamLimits

0x03ad,	// (0x0002cd1a) graphic2_pages_pane_g1

0x03c8,	// (0x0002cd35) graphic2_pages_pane_g2_ParamLimits

0x03c8,	// (0x0002cd35) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0003c73f) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0003c73f) graphic2_pages_pane_g

0x03e0,	// (0x0002cd4d) graphic2_pages_pane_t1_ParamLimits

0x03e0,	// (0x0002cd4d) graphic2_pages_pane_t1

0x03f6,	// (0x0002cd63) cell_graphic2_control_pane_ParamLimits

0x03f6,	// (0x0002cd63) cell_graphic2_control_pane

0x0410,	// (0x0002cd7d) cell_graphic2_pane_g1_ParamLimits

0x0410,	// (0x0002cd7d) cell_graphic2_pane_g1

0x041d,	// (0x0002cd8a) cell_graphic2_pane_g2_ParamLimits

0x041d,	// (0x0002cd8a) cell_graphic2_pane_g2

0x042a,	// (0x0002cd97) cell_graphic2_pane_g3_ParamLimits

0x042a,	// (0x0002cd97) cell_graphic2_pane_g3

0x0437,	// (0x0002cda4) cell_graphic2_pane_g4_ParamLimits

0x0437,	// (0x0002cda4) cell_graphic2_pane_g4

0x0444,	// (0x0002cdb1) cell_graphic2_pane_g5_ParamLimits

0x0444,	// (0x0002cdb1) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0003c744) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0003c744) cell_graphic2_pane_g

0x045f,	// (0x0002cdcc) cell_graphic2_pane_t1_ParamLimits

0x045f,	// (0x0002cdcc) cell_graphic2_pane_t1

0x6594,	// (0x00032f01) grid_highlight_pane_cp11_ParamLimits

0x6594,	// (0x00032f01) grid_highlight_pane_cp11

0x551a,	// (0x00031e87) bg_button_pane_cp05

0x0475,	// (0x0002cde2) cell_graphic2_control_pane_g1

0xca23,	// (0x00039390) bg_touch_area_indi_pane_g1

0xe96e,	// (0x0003b2db) aid_cmod_rocker_key_size

0xe978,	// (0x0003b2e5) aid_cmode_itu_key_size

0xe982,	// (0x0003b2ef) main_cmode_video_pane

0xe98c,	// (0x0003b2f9) main_comp_mode_itu_pane

0xe998,	// (0x0003b305) main_comp_mode_rocker_pane

0xe9a4,	// (0x0003b311) cell_cmode_rocker_pane_ParamLimits

0xe9a4,	// (0x0003b311) cell_cmode_rocker_pane

0xe9b6,	// (0x0003b323) cell_cmode_itu_pane_ParamLimits

0xe9b6,	// (0x0003b323) cell_cmode_itu_pane

0x551a,	// (0x00031e87) bg_button_pane_cp06_ParamLimits

0x551a,	// (0x00031e87) bg_button_pane_cp06

0xccbc,	// (0x00039629) cell_cmode_rocker_pane_g1_ParamLimits

0xccbc,	// (0x00039629) cell_cmode_rocker_pane_g1

0xe20c,	// (0x0003ab79) cell_cmode_rocker_pane_g2_ParamLimits

0xe20c,	// (0x0003ab79) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0003c74f) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0003c74f) cell_cmode_rocker_pane_g

0x4e5a,	// (0x000317c7) bg_button_pane_cp07

0xe9cb,	// (0x0003b338) cell_cmode_itu_pane_g1

0xe9d4,	// (0x0003b341) cell_cmode_itu_pane_t1

0xe9e2,	// (0x0003b34f) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0003c754) cell_cmode_itu_pane_t

0xe432,	// (0x0003ad9f) aid_touch_ctrl_left

0xe43a,	// (0x0003ada7) aid_touch_ctrl_right

0x4e5a,	// (0x000317c7) compa_mode_pane

0x0482,	// (0x0002cdef) aid_cmod_rocker_key_size_cp

0x048c,	// (0x0002cdf9) aid_cmode_itu_key_size_cp

0xe9f0,	// (0x0003b35d) compa_mode_pane_g1

0xe9f8,	// (0x0003b365) compa_mode_pane_g2

0xea00,	// (0x0003b36d) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0003c759) compa_mode_pane_g

0x0496,	// (0x0002ce03) main_comp_mode_itu_pane_cp

0x049e,	// (0x0002ce0b) main_comp_mode_rocker_pane_cp

0x04a6,	// (0x0002ce13) cell_cmode_itu_pane_cp_ParamLimits

0x04a6,	// (0x0002ce13) cell_cmode_itu_pane_cp

0x04bb,	// (0x0002ce28) cell_cmode_rocker_pane_cp_ParamLimits

0x04bb,	// (0x0002ce28) cell_cmode_rocker_pane_cp

0x551a,	// (0x00031e87) bg_button_pane_cp06_cp_ParamLimits

0x551a,	// (0x00031e87) bg_button_pane_cp06_cp

0xccbc,	// (0x00039629) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xccbc,	// (0x00039629) cell_cmode_rocker_pane_g1_cp

0xca23,	// (0x00039390) cell_cmode_rocker_pane_g2_cp

0x4e5a,	// (0x000317c7) bg_button_pane_cp07_cp

0x04cd,	// (0x0002ce3a) cell_cmode_itu_pane_g1_cp

0x04d6,	// (0x0002ce43) cell_cmode_itu_pane_t1_cp

0x04d6,	// (0x0002ce43) cell_cmode_itu_pane_t2_cp

0xc529,	// (0x00038e96) settings_code_pane_cp2

0x4eca,	// (0x00031837) bg_popup_window_pane_cp3_ParamLimits

0x51d4,	// (0x00031b41) heading_pane_cp3_ParamLimits

0x51e0,	// (0x00031b4d) listscroll_popup_graphic_pane_ParamLimits

0xabfd,	// (0x0003756a) fep_hwr_aid_pane_ParamLimits

0xb01d,	// (0x0003798a) aid_touch_sctrl_top_ParamLimits

0xb02a,	// (0x00037997) sctrl_sk_top_pane_g1_ParamLimits

0xccbc,	// (0x00039629) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0003c694) sctrl_sk_top_pane_g_ParamLimits

0xb037,	// (0x000379a4) sctrl_sk_top_pane_t1_ParamLimits

0xb01d,	// (0x0003798a) aid_touch_sctrl_bottom_ParamLimits

0xb037,	// (0x000379a4) sctrl_sk_bottom_pane_t1_ParamLimits

0xe37c,	// (0x0003ace9) aid_area_touch_clock

0xb20e,	// (0x00037b7b) aid_vkb2_area_top_pane_cell_ParamLimits

0xb20e,	// (0x00037b7b) aid_vkb2_area_top_pane_cell

0xb359,	// (0x00037cc6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb359,	// (0x00037cc6) aid_vkb2_area_bottom_pane_cell

0xe8e7,	// (0x0003b254) popup_char_count_window

0xea08,	// (0x0003b375) popup_char_count_window_g1

0xea11,	// (0x0003b37e) popup_char_count_window_g2

0xea1a,	// (0x0003b387) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0003c760) popup_char_count_window_g

0xea23,	// (0x0003b390) popup_char_count_window_t1

0xb0dc,	// (0x00037a49) popup_fep_char_preview_window_ParamLimits

0xb0dc,	// (0x00037a49) popup_fep_char_preview_window

0xb22c,	// (0x00037b99) vkb2_top_candi_pane_ParamLimits

0xb22c,	// (0x00037b99) vkb2_top_candi_pane

0x04e4,	// (0x0002ce51) cell_vkb2_top_candi_pane_ParamLimits

0x04e4,	// (0x0002ce51) cell_vkb2_top_candi_pane

0x6a20,	// (0x0003338d) bg_popup_fep_char_preview_window_ParamLimits

0x6a20,	// (0x0003338d) bg_popup_fep_char_preview_window

0xb640,	// (0x00037fad) popup_fep_char_preview_window_t1_ParamLimits

0xb640,	// (0x00037fad) popup_fep_char_preview_window_t1

0xea31,	// (0x0003b39e) bg_popup_fep_char_preview_window_g1

0xea39,	// (0x0003b3a6) bg_popup_fep_char_preview_window_g2

0xea41,	// (0x0003b3ae) bg_popup_fep_char_preview_window_g3

0xea49,	// (0x0003b3b6) bg_popup_fep_char_preview_window_g4

0xea51,	// (0x0003b3be) bg_popup_fep_char_preview_window_g5

0xb67a,	// (0x00037fe7) bg_popup_fep_char_preview_window_g6

0xea59,	// (0x0003b3c6) bg_popup_fep_char_preview_window_g7

0xea61,	// (0x0003b3ce) bg_popup_fep_char_preview_window_g8

0xea69,	// (0x0003b3d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0003c767) bg_popup_fep_char_preview_window_g

0xccbc,	// (0x00039629) cell_vkb2_top_candi_pane_g1_ParamLimits

0xccbc,	// (0x00039629) cell_vkb2_top_candi_pane_g1

0xcfe9,	// (0x00039956) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcfe9,	// (0x00039956) cell_vkb2_top_candi_pane_g2

0xd00a,	// (0x00039977) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd00a,	// (0x00039977) cell_vkb2_top_candi_pane_g3

0xb682,	// (0x00037fef) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb682,	// (0x00037fef) cell_vkb2_top_candi_pane_g4

0xdd8b,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdd8b,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g5

0xe20c,	// (0x0003ab79) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe20c,	// (0x0003ab79) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0003c77a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0003c77a) cell_vkb2_top_candi_pane_g

0xb6a3,	// (0x00038010) cell_vkb2_top_candi_pane_t1

0xa90a,	// (0x00037277) aid_size_touch_slider_mark_ParamLimits

0xa90a,	// (0x00037277) aid_size_touch_slider_mark

0x029a,	// (0x0002cc07) grid_graphic2_catg_pane_ParamLimits

0x029a,	// (0x0002cc07) grid_graphic2_catg_pane

0x0314,	// (0x0002cc81) popup_grid_graphic2_window_t1_ParamLimits

0x0314,	// (0x0002cc81) popup_grid_graphic2_window_t1

0x0326,	// (0x0002cc93) popup_grid_graphic2_window_t2_ParamLimits

0x0326,	// (0x0002cc93) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0003c73a) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0003c73a) popup_grid_graphic2_window_t

0x551a,	// (0x00031e87) bg_button_pane_cp05_ParamLimits

0x0475,	// (0x0002cde2) cell_graphic2_control_pane_g1_ParamLimits

0x0531,	// (0x0002ce9e) cell_graphic2_catg_pane_ParamLimits

0x0531,	// (0x0002ce9e) cell_graphic2_catg_pane

0x4e5a,	// (0x000317c7) bg_button_pane_cp12

0x0543,	// (0x0002ceb0) cell_graphic2_catg_pane_g1

0xe348,	// (0x0003acb5) cell_tb_ext_pane_t1_ParamLimits

0xb476,	// (0x00037de3) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb476,	// (0x00037de3) vkb2_top_cell_right_narrow_pane

0xb48e,	// (0x00037dfb) vkb2_top_cell_right_wide_pane_ParamLimits

0xb48e,	// (0x00037dfb) vkb2_top_cell_right_wide_pane

0xcfcd,	// (0x0003993a) bg_vkb2_func_pane_ParamLimits

0xcfcd,	// (0x0003993a) bg_vkb2_func_pane

0xb4ff,	// (0x00037e6c) vkb2_top_cell_left_pane_g1_ParamLimits

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp03

0xb55d,	// (0x00037eca) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x64b4,	// (0x00032e21) bg_vkb2_func_pane_g1

0x64ac,	// (0x00032e19) bg_vkb2_func_pane_g2

0x64bc,	// (0x00032e29) bg_vkb2_func_pane_g3

0x64c4,	// (0x00032e31) bg_vkb2_func_pane_g4

0x64cc,	// (0x00032e39) bg_vkb2_func_pane_g5

0x64d4,	// (0x00032e41) bg_vkb2_func_pane_g6

0x64e4,	// (0x00032e51) bg_vkb2_func_pane_g7

0x64dc,	// (0x00032e49) bg_vkb2_func_pane_g8

0x64a4,	// (0x00032e11) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0003c787) bg_vkb2_func_pane_g

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp01

0xb4ff,	// (0x00037e6c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb4ff,	// (0x00037e6c) vkb2_top_cell_right_wide_pane_g1

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcfcd,	// (0x0003993a) bg_vkb2_fuc_pane_cp02

0xb55d,	// (0x00037eca) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb55d,	// (0x00037eca) vkb2_top_cell_right_narrow_pane_g1

0xdf74,	// (0x0003a8e1) aid_touch_area_decrease_ParamLimits

0xdf74,	// (0x0003a8e1) aid_touch_area_decrease

0xdf98,	// (0x0003a905) aid_touch_area_increase_ParamLimits

0xdf98,	// (0x0003a905) aid_touch_area_increase

0xdfa4,	// (0x0003a911) aid_touch_area_mute_ParamLimits

0xdfa4,	// (0x0003a911) aid_touch_area_mute

0xdfc8,	// (0x0003a935) aid_touch_area_slider_ParamLimits

0xdfc8,	// (0x0003a935) aid_touch_area_slider

0xe0b4,	// (0x0003aa21) popup_slider_window_g4_ParamLimits

0xe0b4,	// (0x0003aa21) popup_slider_window_g4

0xe0c0,	// (0x0003aa2d) popup_slider_window_g5_ParamLimits

0xe0c0,	// (0x0003aa2d) popup_slider_window_g5

0xe0e2,	// (0x0003aa4f) popup_slider_window_g6_ParamLimits

0xe0e2,	// (0x0003aa4f) popup_slider_window_g6

0xe122,	// (0x0003aa8f) popup_slider_window_t2_ParamLimits

0xe122,	// (0x0003aa8f) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0003c688) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0003c688) popup_slider_window_t

0xe13a,	// (0x0003aaa7) slider_pane_ParamLimits

0xe13a,	// (0x0003aaa7) slider_pane

0xea71,	// (0x0003b3de) slider_pane_g1_ParamLimits

0xea71,	// (0x0003b3de) slider_pane_g1

0xea85,	// (0x0003b3f2) slider_pane_g2_ParamLimits

0xea85,	// (0x0003b3f2) slider_pane_g2

0xea9b,	// (0x0003b408) slider_pane_g3_ParamLimits

0xea9b,	// (0x0003b408) slider_pane_g3

0x0003,

0xfe2d,	// (0x0003c79a) slider_pane_g_ParamLimits

0xfe2d,	// (0x0003c79a) slider_pane_g

0xbd43,	// (0x000386b0) popup_tb_float_extension_window_ParamLimits

0xbd43,	// (0x000386b0) popup_tb_float_extension_window

0xeac7,	// (0x0003b434) aid_size_cell_tb_float_ext

0x4e5a,	// (0x000317c7) bg_popup_sub_window_cp28

0xead3,	// (0x0003b440) grid_tb_float_ext_pane

0xeadd,	// (0x0003b44a) cell_tb_float_ext_pane_ParamLimits

0xeadd,	// (0x0003b44a) cell_tb_float_ext_pane

0xeaf7,	// (0x0003b464) cell_tb_float_ext_pane_g1

0xeb00,	// (0x0003b46d) grid_highlight_pane_cp12

0xad30,	// (0x0003769d) cell_last_hwr_side_pane_ParamLimits

0xad30,	// (0x0003769d) cell_last_hwr_side_pane

0xca23,	// (0x00039390) cell_last_hwr_side_pane_g1

0xeb09,	// (0x0003b476) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0003c7a3) cell_last_hwr_side_pane_g

0xb425,	// (0x00037d92) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb425,	// (0x00037d92) vkb2_area_bottom_space_btn_pane

0xccbc,	// (0x00039629) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe95c,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb6a3,	// (0x00038010) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb6c2,	// (0x0003802f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb6c2,	// (0x0003802f) vkb2_area_bottom_space_btn_pane_g1

0xb6fc,	// (0x00038069) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb6fc,	// (0x00038069) vkb2_area_bottom_space_btn_pane_g2

0xb732,	// (0x0003809f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb732,	// (0x0003809f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0003c7a8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0003c7a8) vkb2_area_bottom_space_btn_pane_g

0xaca4,	// (0x00037611) cel_fep_hwr_func_pane_ParamLimits

0xaca4,	// (0x00037611) cel_fep_hwr_func_pane

0xace0,	// (0x0003764d) cell_hwr_side_button_pane_ParamLimits

0xace0,	// (0x0003764d) cell_hwr_side_button_pane

0xe37c,	// (0x0003ace9) aid_area_touch_clock_ParamLimits

0x5006,	// (0x00031973) bg_uniindi_top_pane_ParamLimits

0xe38e,	// (0x0003acfb) uniindi_top_pane_g1_ParamLimits

0xe3a4,	// (0x0003ad11) uniindi_top_pane_g2_ParamLimits

0xe3b0,	// (0x0003ad1d) uniindi_top_pane_g3_ParamLimits

0xe3c1,	// (0x0003ad2e) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0003c6c0) uniindi_top_pane_g_ParamLimits

0xe3ce,	// (0x0003ad3b) uniindi_top_pane_t1_ParamLimits

0x5006,	// (0x00031973) bg_vkb2_func_pane_cp01_ParamLimits

0x5006,	// (0x00031973) bg_vkb2_func_pane_cp01

0xeb12,	// (0x0003b47f) cel_fep_hwr_func_pane_g1_ParamLimits

0xeb12,	// (0x0003b47f) cel_fep_hwr_func_pane_g1

0x5006,	// (0x00031973) bg_vkb2_func_pane_cp02_ParamLimits

0x5006,	// (0x00031973) bg_vkb2_func_pane_cp02

0xeb12,	// (0x0003b47f) cell_hwr_side_button_pane_g1_ParamLimits

0xeb12,	// (0x0003b47f) cell_hwr_side_button_pane_g1

0x63bc,	// (0x00032d29) status_pane_g4_ParamLimits

0x63bc,	// (0x00032d29) status_pane_g4

0x63d4,	// (0x00032d41) status_pane_t1

0x807a,	// (0x000349e7) form2_midp_gauge_slider_cont_pane

0x8082,	// (0x000349ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc7bf,	// (0x0003912c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc7d1,	// (0x0003913e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0003c493) form2_midp_gauge_slider_pane_t_ParamLimits

0x8094,	// (0x00034a01) form2_midp_slider_pane_ParamLimits

0xb09c,	// (0x00037a09) aid_size_cell_func_vkb2_ParamLimits

0xb09c,	// (0x00037a09) aid_size_cell_func_vkb2

0xeab3,	// (0x0003b420) slider_pane_g4_ParamLimits

0xeab3,	// (0x0003b420) slider_pane_g4

0xb77c,	// (0x000380e9) form2_midp_gauge_slider_pane_t2_cp01

0xb78a,	// (0x000380f7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb78a,	// (0x000380f7) form2_midp_gauge_slider_pane_t3_cp01

0xb7a7,	// (0x00038114) form2_midp_slider_pane_cp01

0x4e5a,	// (0x000317c7) navi_smil_pane

0xeb42,	// (0x0003b4af) navi_smil_pane_g1

0xeb4a,	// (0x0003b4b7) navi_smil_pane_t1

0xeb20,	// (0x0003b48d) form2_midp_slider_pane_g1

0xeb29,	// (0x0003b496) form2_midp_slider_pane_g2

0xeb31,	// (0x0003b49e) form2_midp_slider_pane_g3

0xeb20,	// (0x0003b48d) form2_midp_slider_pane_g4

0x054c,	// (0x0002ceb9) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0003c7b1) form2_midp_slider_pane_g

0xb76c,	// (0x000380d9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb76c,	// (0x000380d9) vkb2_area_bottom_space_btn_pane_g4

0xbeae,	// (0x0003881b) lc0_navi_pane_ParamLimits

0xbeae,	// (0x0003881b) lc0_navi_pane

0xbf24,	// (0x00038891) lc0_stat_indi_pane_ParamLimits

0xbf24,	// (0x00038891) lc0_stat_indi_pane

0xbf3b,	// (0x000388a8) ls0_title_pane_ParamLimits

0xbf3b,	// (0x000388a8) ls0_title_pane

0x551a,	// (0x00031e87) bg_popup_sub_pane_cp14_ParamLimits

0xe363,	// (0x0003acd0) list_uniindi_pane_ParamLimits

0xe36f,	// (0x0003acdc) uniindi_top_pane_ParamLimits

0xe40a,	// (0x0003ad77) list_single_uniindi_pane_g1_ParamLimits

0xe41d,	// (0x0003ad8a) list_single_uniindi_pane_t1_ParamLimits

0xb7b0,	// (0x0003811d) lc0_stat_clock_pane_ParamLimits

0xb7b0,	// (0x0003811d) lc0_stat_clock_pane

0x0562,	// (0x0002cecf) lc0_stat_indi_pane_g1_ParamLimits

0x0562,	// (0x0002cecf) lc0_stat_indi_pane_g1

0x0555,	// (0x0002cec2) lc0_stat_indi_pane_g2_ParamLimits

0x0555,	// (0x0002cec2) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0003c7bc) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0003c7bc) lc0_stat_indi_pane_g

0xb7bd,	// (0x0003812a) lc0_uni_indicator_pane_ParamLimits

0xb7bd,	// (0x0003812a) lc0_uni_indicator_pane

0x056f,	// (0x0002cedc) ls0_title_pane_g1_ParamLimits

0x056f,	// (0x0002cedc) ls0_title_pane_g1

0x0583,	// (0x0002cef0) ls0_title_pane_t1_ParamLimits

0x0583,	// (0x0002cef0) ls0_title_pane_t1

0xb7ca,	// (0x00038137) lc0_uni_indicator_pane_g1_ParamLimits

0xb7ca,	// (0x00038137) lc0_uni_indicator_pane_g1

0xeb58,	// (0x0003b4c5) lc0_stat_clock_pane_t1

0x4e5a,	// (0x000317c7) main_ai5_pane

0xeb66,	// (0x0003b4d3) ai5_sk_pane_ParamLimits

0xeb66,	// (0x0003b4d3) ai5_sk_pane

0x05b9,	// (0x0002cf26) cell_ai5_widget_pane_ParamLimits

0x05b9,	// (0x0002cf26) cell_ai5_widget_pane

0xeb73,	// (0x0003b4e0) aid_size_cell_widget_grid

0xeb87,	// (0x0003b4f4) bg_ai5_widget_pane_ParamLimits

0xeb87,	// (0x0003b4f4) bg_ai5_widget_pane

0x0663,	// (0x0002cfd0) cell_ai5_widget_pane_g2

0x0673,	// (0x0002cfe0) cell_ai5_widget_pane_g3

0x0687,	// (0x0002cff4) cell_ai5_widget_pane_g4

0x0693,	// (0x0002d000) cell_ai5_widget_pane_g5

0x069f,	// (0x0002d00c) cell_ai5_widget_pane_g6

0x06ab,	// (0x0002d018) cell_ai5_widget_pane_g7

0x06f3,	// (0x0002d060) cell_ai5_widget_pane_t1_ParamLimits

0x06f3,	// (0x0002d060) cell_ai5_widget_pane_t1

0x0710,	// (0x0002d07d) cell_ai5_widget_pane_t2_ParamLimits

0x0710,	// (0x0002d07d) cell_ai5_widget_pane_t2

0x0728,	// (0x0002d095) cell_ai5_widget_pane_t3_ParamLimits

0x0728,	// (0x0002d095) cell_ai5_widget_pane_t3

0x0740,	// (0x0002d0ad) cell_ai5_widget_pane_t4_ParamLimits

0x0740,	// (0x0002d0ad) cell_ai5_widget_pane_t4

0x075a,	// (0x0002d0c7) cell_ai5_widget_pane_t5_ParamLimits

0x075a,	// (0x0002d0c7) cell_ai5_widget_pane_t5

0xeb93,	// (0x0003b500) cell_ai5_widget_pane_t6_ParamLimits

0xeb93,	// (0x0003b500) cell_ai5_widget_pane_t6

0xeba5,	// (0x0003b512) cell_ai5_widget_pane_t7_ParamLimits

0xeba5,	// (0x0003b512) cell_ai5_widget_pane_t7

0x0779,	// (0x0002d0e6) cell_ai5_widget_pane_t8_ParamLimits

0x0779,	// (0x0002d0e6) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0003c7d6) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0003c7d6) cell_ai5_widget_pane_t

0x07c1,	// (0x0002d12e) grid_ai5_widget_pane

0x551a,	// (0x00031e87) highlight_cell_ai5_widget_pane_ParamLimits

0x551a,	// (0x00031e87) highlight_cell_ai5_widget_pane

0x07d7,	// (0x0002d144) ai5_sk_left_pane

0x07e1,	// (0x0002d14e) ai5_sk_middle_pane

0x07eb,	// (0x0002d158) ai5_sk_right_pane

0xebbe,	// (0x0003b52b) bg_ai5_widget_pane_g1_ParamLimits

0xebbe,	// (0x0003b52b) bg_ai5_widget_pane_g1

0xebca,	// (0x0003b537) bg_ai5_widget_pane_g2_ParamLimits

0xebca,	// (0x0003b537) bg_ai5_widget_pane_g2

0xebd6,	// (0x0003b543) bg_ai5_widget_pane_g3_ParamLimits

0xebd6,	// (0x0003b543) bg_ai5_widget_pane_g3

0xebe2,	// (0x0003b54f) bg_ai5_widget_pane_g4_ParamLimits

0xebe2,	// (0x0003b54f) bg_ai5_widget_pane_g4

0xebee,	// (0x0003b55b) bg_ai5_widget_pane_g5_ParamLimits

0xebee,	// (0x0003b55b) bg_ai5_widget_pane_g5

0xebfa,	// (0x0003b567) bg_ai5_widget_pane_g6_ParamLimits

0xebfa,	// (0x0003b567) bg_ai5_widget_pane_g6

0xec06,	// (0x0003b573) bg_ai5_widget_pane_g7_ParamLimits

0xec06,	// (0x0003b573) bg_ai5_widget_pane_g7

0xec12,	// (0x0003b57f) bg_ai5_widget_pane_g8_ParamLimits

0xec12,	// (0x0003b57f) bg_ai5_widget_pane_g8

0xec1e,	// (0x0003b58b) bg_ai5_widget_pane_g9_ParamLimits

0xec1e,	// (0x0003b58b) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0003c7eb) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0003c7eb) bg_ai5_widget_pane_g

0xec51,	// (0x0003b5be) cell_shortcut_ai5_widget_pane_ParamLimits

0xec51,	// (0x0003b5be) cell_shortcut_ai5_widget_pane

0x4f0f,	// (0x0003187c) bg_cell_shortcut_ai5_widget_pane

0xec62,	// (0x0003b5cf) cell_grid_ai5_widget_pane_g1

0xec6b,	// (0x0003b5d8) highlight_cell_shortcut_ai5_widget_pane

0x64ac,	// (0x00032e19) ai5_sk_left_pane_g1

0xec73,	// (0x0003b5e0) ai5_sk_left_pane_g2

0xec7b,	// (0x0003b5e8) ai5_sk_left_pane_g3

0xec83,	// (0x0003b5f0) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0003c7fe) ai5_sk_left_pane_g

0xec8b,	// (0x0003b5f8) ai5_sk_left_pane_t1

0x64b4,	// (0x00032e21) ai5_sk_right_pane_g1

0xec99,	// (0x0003b606) ai5_sk_right_pane_g2

0xeca1,	// (0x0003b60e) ai5_sk_right_pane_g3

0xeca9,	// (0x0003b616) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0003c807) ai5_sk_right_pane_g

0xecb1,	// (0x0003b61e) ai5_sk_right_pane_t1

0x64b4,	// (0x00032e21) ai5_sk_middle_pane_g1

0x64ac,	// (0x00032e19) ai5_sk_middle_pane_g2

0x64cc,	// (0x00032e39) ai5_sk_middle_pane_g3

0xeca1,	// (0x0003b60e) ai5_sk_middle_pane_g4

0xec7b,	// (0x0003b5e8) ai5_sk_middle_pane_g5

0xecbf,	// (0x0003b62c) ai5_sk_middle_pane_g6

0x07f5,	// (0x0002d162) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0003c810) ai5_sk_middle_pane_g

0xbdf3,	// (0x00038760) aid_touch_area_size_lc0_ParamLimits

0xbdf3,	// (0x00038760) aid_touch_area_size_lc0

0xae2f,	// (0x0003779c) cell_hwr_candidate_pane_t1_ParamLimits

0x62de,	// (0x00032c4b) aid_touch_navi_pane

0xc011,	// (0x0003897e) status_dt_navi_pane_ParamLimits

0xc011,	// (0x0003897e) status_dt_navi_pane

0xc01e,	// (0x0003898b) status_dt_sta_pane_ParamLimits

0xc01e,	// (0x0003898b) status_dt_sta_pane

0x07fd,	// (0x0002d16a) dt_sta_controll_pane

0x080a,	// (0x0002d177) dt_sta_indi_pane

0x081b,	// (0x0002d188) dt_sta_title_pane

0x5006,	// (0x00031973) bg_dt_sta_indi_pane_ParamLimits

0x5006,	// (0x00031973) bg_dt_sta_indi_pane

0x082e,	// (0x0002d19b) dt_sta_battery_pane

0x0836,	// (0x0002d1a3) dt_sta_indi_pane_g1

0xecc7,	// (0x0003b634) dt_sta_indi_pane_g2

0xecd0,	// (0x0003b63d) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0003c81f) dt_sta_indi_pane_g

0xecd9,	// (0x0003b646) dt_sta_signal_pane

0x551a,	// (0x00031e87) bg_dt_sta_title_pane_ParamLimits

0x551a,	// (0x00031e87) bg_dt_sta_title_pane

0x7126,	// (0x00033a93) dt_sta_title_pane_g1

0x083f,	// (0x0002d1ac) dt_sta_title_pane_t1_ParamLimits

0x083f,	// (0x0002d1ac) dt_sta_title_pane_t1

0x4e5a,	// (0x000317c7) bg_dt_sta_control_pane

0x0854,	// (0x0002d1c1) dt_sta_controll_pane_g1

0xece2,	// (0x0003b64f) bg_dt_sta_title_pane_g1

0xeceb,	// (0x0003b658) bg_dt_sta_title_pane_g2

0xecf4,	// (0x0003b661) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0003c826) bg_dt_sta_title_pane_g

0xca23,	// (0x00039390) bg_dt_sta_indi_pane_g1

0xecfd,	// (0x0003b66a) dt_sta_signal_pane_g1

0xed05,	// (0x0003b672) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0003c82d) dt_sta_signal_pane_g

0xed0d,	// (0x0003b67a) dt_sta_battery_pane_g1

0xed16,	// (0x0003b683) dt_sta_battery_pane_t1

0xca23,	// (0x00039390) bg_dt_sta_control_pane_g1

0x5acb,	// (0x00032438) fep_china_uni_eep_pane

0x5ad3,	// (0x00032440) fep_china_uni_entry_pane_ParamLimits

0x5ae3,	// (0x00032450) popup_fep_china_uni_window_g1_ParamLimits

0x5af3,	// (0x00032460) popup_fep_china_uni_window_g2_ParamLimits

0x5af3,	// (0x00032460) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003c0cf) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003c0cf) popup_fep_china_uni_window_g

0xed25,	// (0x0003b692) fep_china_uni_eep_pane_g1

0xed2d,	// (0x0003b69a) fep_china_uni_eep_pane_t1

0xeb39,	// (0x0003b4a6) aid_touch_area_size_smil_player

0x638f,	// (0x00032cfc) lc0_clock_pane

0x63c8,	// (0x00032d35) status_pane_g5_ParamLimits

0x63c8,	// (0x00032d35) status_pane_g5

0xba55,	// (0x000383c2) popup_keymap_window

0x63a8,	// (0x00032d15) status_icon_pane

0x0673,	// (0x0002cfe0) cell_ai5_widget_pane_g3_ParamLimits

0x0687,	// (0x0002cff4) cell_ai5_widget_pane_g4_ParamLimits

0x0693,	// (0x0002d000) cell_ai5_widget_pane_g5_ParamLimits

0x06b7,	// (0x0002d024) cell_ai5_widget_pane_g8_ParamLimits

0x06b7,	// (0x0002d024) cell_ai5_widget_pane_g8

0x06cb,	// (0x0002d038) cell_ai5_widget_pane_g9_ParamLimits

0x06cb,	// (0x0002d038) cell_ai5_widget_pane_g9

0x06df,	// (0x0002d04c) cell_ai5_widget_pane_g10_ParamLimits

0x06df,	// (0x0002d04c) cell_ai5_widget_pane_g10

0xed3c,	// (0x0003b6a9) status_icon_pane_g1

0x4e5a,	// (0x000317c7) bg_popup_sub_pane_cp13

0xed44,	// (0x0003b6b1) popup_keymap_window_t1

0xb915,	// (0x00038282) control_pane_g6_ParamLimits

0xb915,	// (0x00038282) control_pane_g6

0xb922,	// (0x0003828f) control_pane_g7_ParamLimits

0xb922,	// (0x0003828f) control_pane_g7

0xb92f,	// (0x0003829c) control_pane_g8_ParamLimits

0xb92f,	// (0x0003829c) control_pane_g8

0x07fd,	// (0x0002d16a) dt_sta_controll_pane_ParamLimits

0x080a,	// (0x0002d177) dt_sta_indi_pane_ParamLimits

0x081b,	// (0x0002d188) dt_sta_title_pane_ParamLimits

0x545c,	// (0x00031dc9) aid_size_touch_scroll_bar_cale

0x98f0,	// (0x0003625d) popup_discreet_window_ParamLimits

0x98f0,	// (0x0003625d) popup_discreet_window

0x996a,	// (0x000362d7) popup_sk_window

0x6a20,	// (0x0003338d) bg_popup_sub_pane_cp28_ParamLimits

0x6a20,	// (0x0003338d) bg_popup_sub_pane_cp28

0xed52,	// (0x0003b6bf) popup_discreet_window_g1_ParamLimits

0xed52,	// (0x0003b6bf) popup_discreet_window_g1

0xed72,	// (0x0003b6df) popup_discreet_window_t1_ParamLimits

0xed72,	// (0x0003b6df) popup_discreet_window_t1

0xed90,	// (0x0003b6fd) popup_discreet_window_t2_ParamLimits

0xed90,	// (0x0003b6fd) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0003c832) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0003c832) popup_discreet_window_t

0xb7e0,	// (0x0003814d) popup_sk_window_g1

0xb7ea,	// (0x00038157) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0003c839) popup_sk_window_g

0xede2,	// (0x0003b74f) popup_sk_window_t1

0xedf0,	// (0x0003b75d) popup_sk_window_t1_copy1

0x0663,	// (0x0002cfd0) cell_ai5_widget_pane_g2_ParamLimits

0x078b,	// (0x0002d0f8) cell_ai5_widget_pane_t9_ParamLimits

0x078b,	// (0x0002d0f8) cell_ai5_widget_pane_t9

0x4e5a,	// (0x000317c7) main_fep_fshwr2_pane

0x085d,	// (0x0002d1ca) aid_fshwr2_btn_pane

0x0865,	// (0x0002d1d2) aid_fshwr2_syb_pane

0x086d,	// (0x0002d1da) aid_fshwr2_txt_pane

0x0875,	// (0x0002d1e2) fshwr2_func_candi_pane

0x0881,	// (0x0002d1ee) fshwr2_hwr_syb_pane

0x088d,	// (0x0002d1fa) fshwr2_icf_pane

0x4e5a,	// (0x000317c7) fshwr2_icf_bg_pane

0x0897,	// (0x0002d204) fshwr2_icf_pane_t1_ParamLimits

0x0897,	// (0x0002d204) fshwr2_icf_pane_t1

0xca23,	// (0x00039390) fshwr2_func_candi_pane_g1

0xee12,	// (0x0003b77f) fshwr2_func_candi_row_pane_ParamLimits

0xee12,	// (0x0003b77f) fshwr2_func_candi_row_pane

0x08ae,	// (0x0002d21b) cell_fshwr2_syb_pane_ParamLimits

0x08ae,	// (0x0002d21b) cell_fshwr2_syb_pane

0xccbc,	// (0x00039629) fshwr2_hwr_syb_pane_g1_ParamLimits

0xccbc,	// (0x00039629) fshwr2_hwr_syb_pane_g1

0x4e5a,	// (0x000317c7) bg_popup_call_pane_cp01

0xee23,	// (0x0003b790) fshwr2_func_candi_cell_pane_ParamLimits

0xee23,	// (0x0003b790) fshwr2_func_candi_cell_pane

0xee54,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee54,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane

0xee6e,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee6e,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1

0xee8e,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee8e,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1

0x4e5a,	// (0x000317c7) bg_button_pane_cp08

0x5f5c,	// (0x000328c9) cell_fshwr2_syb_bg_pane

0x08ca,	// (0x0002d237) cell_fshwr2_syb_bg_pane_g1

0xeea1,	// (0x0003b80e) cell_fshwr2_syb_bg_pane_t1

0x551a,	// (0x00031e87) main_tmo_pane

0xc364,	// (0x00038cd1) uni_indicator_pane_g1_ParamLimits

0xc379,	// (0x00038ce6) uni_indicator_pane_g2_ParamLimits

0xc38f,	// (0x00038cfc) uni_indicator_pane_g3_ParamLimits

0x73ea,	// (0x00033d57) uni_indicator_pane_g4_ParamLimits

0x73ea,	// (0x00033d57) uni_indicator_pane_g4

0x73fe,	// (0x00033d6b) uni_indicator_pane_g5_ParamLimits

0x73fe,	// (0x00033d6b) uni_indicator_pane_g5

0x7430,	// (0x00033d9d) uni_indicator_pane_g6_ParamLimits

0x7430,	// (0x00033d9d) uni_indicator_pane_g6

0xf95f,	// (0x0003c2cc) uni_indicator_pane_g_ParamLimits

0xdf56,	// (0x0003a8c3) popup_tmo_note_window_ParamLimits

0xdf56,	// (0x0003a8c3) popup_tmo_note_window

0x4e5a,	// (0x000317c7) fshwr2_bg_pane

0xee7f,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee7f,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0003c83e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0003c83e) fshwr2_func_candi_cell_pane_g

0xca23,	// (0x00039390) bg_popup_window_pane_cp01

0xeeb0,	// (0x0003b81d) bg_popup_window_pane_g1_cp01

0xeeb9,	// (0x0003b826) bg_popup_window_pane_cp22_ParamLimits

0xeeb9,	// (0x0003b826) bg_popup_window_pane_cp22

0xeec7,	// (0x0003b834) listscroll_tmo_link_pane_ParamLimits

0xeec7,	// (0x0003b834) listscroll_tmo_link_pane

0xef07,	// (0x0003b874) popup_tmo_note_window_g1_ParamLimits

0xef07,	// (0x0003b874) popup_tmo_note_window_g1

0xef14,	// (0x0003b881) tmo_note_info_pane_ParamLimits

0xef14,	// (0x0003b881) tmo_note_info_pane

0x08d2,	// (0x0002d23f) list_tmo_note_info_pane_g1_ParamLimits

0x08d2,	// (0x0002d23f) list_tmo_note_info_pane_g1

0xef2e,	// (0x0003b89b) list_tmo_note_info_pane_g2_ParamLimits

0xef2e,	// (0x0003b89b) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0003c843) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0003c843) list_tmo_note_info_pane_g

0xef4a,	// (0x0003b8b7) list_tmo_note_info_text_pane_ParamLimits

0xef4a,	// (0x0003b8b7) list_tmo_note_info_text_pane

0xef8c,	// (0x0003b8f9) list_tmo_link_pane

0xef99,	// (0x0003b906) scroll_pane_cp20

0xefa6,	// (0x0003b913) list_single_tmo_link_pane_ParamLimits

0xefa6,	// (0x0003b913) list_single_tmo_link_pane

0xefb6,	// (0x0003b923) list_single_tmo_link_pane_t1

0xefc4,	// (0x0003b931) list_tmo_note_info_text_pane_t1_ParamLimits

0xefc4,	// (0x0003b931) list_tmo_note_info_text_pane_t1

0x9e36,	// (0x000367a3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9e36,	// (0x000367a3) aid_size_touch_scroll_bar_cp01

0x8dfe,	// (0x0003576b) aid_size_touch_slider_marker

0x9952,	// (0x000362bf) popup_settings_window_ParamLimits

0x9952,	// (0x000362bf) popup_settings_window

0x8fa0,	// (0x0003590d) popup_candi_list_indi_window

0x62de,	// (0x00032c4b) aid_touch_navi_pane_ParamLimits

0xaff1,	// (0x0003795e) rs_clock_indi_pane

0xaffa,	// (0x00037967) sctrl_sk_bottom_pane_ParamLimits

0xb00b,	// (0x00037978) sctrl_sk_top_pane_ParamLimits

0xb0f6,	// (0x00037a63) popup_fep_tooltip_window

0xeb73,	// (0x0003b4e0) aid_size_cell_widget_grid_ParamLimits

0x0657,	// (0x0002cfc4) cell_ai5_widget_pane_g1_ParamLimits

0x0657,	// (0x0002cfc4) cell_ai5_widget_pane_g1

0x069f,	// (0x0002d00c) cell_ai5_widget_pane_g6_ParamLimits

0x06ab,	// (0x0002d018) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0003c7c1) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0003c7c1) cell_ai5_widget_pane_g

0x07af,	// (0x0002d11c) cell_ai5_widget_pane_t10_ParamLimits

0x07af,	// (0x0002d11c) cell_ai5_widget_pane_t10

0x07c1,	// (0x0002d12e) grid_ai5_widget_pane_ParamLimits

0xec2a,	// (0x0003b597) cell_contacts_ai5_widget_pane_ParamLimits

0xec2a,	// (0x0003b597) cell_contacts_ai5_widget_pane

0xeda5,	// (0x0003b712) popup_discreet_window_t3_ParamLimits

0xeda5,	// (0x0003b712) popup_discreet_window_t3

0xedfe,	// (0x0003b76b) popup_fshwr2_char_preview_window_ParamLimits

0xedfe,	// (0x0003b76b) popup_fshwr2_char_preview_window

0x08e9,	// (0x0002d256) tmo_note_info_pane_t1

0x08fe,	// (0x0002d26b) tmo_note_info_pane_t2

0x0917,	// (0x0002d284) tmo_note_info_pane_t3

0xef68,	// (0x0003b8d5) tmo_note_info_pane_t4

0xef7a,	// (0x0003b8e7) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0003c848) tmo_note_info_pane_t

0xef8c,	// (0x0003b8f9) list_tmo_link_pane_ParamLimits

0xef99,	// (0x0003b906) scroll_pane_cp20_ParamLimits

0x4e5a,	// (0x000317c7) bg_popup_fep_char_preview_window_cp01

0xefdd,	// (0x0003b94a) popup_fshwr2_char_preview_window_t1

0xefeb,	// (0x0003b958) popup_candi_list_indi_window_g1

0xeff4,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane

0xf000,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1

0xf014,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2

0xf023,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0003c853) cell_contacts_ai5_widget_pane_g

0xf036,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1

0x551a,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0b0,	// (0x0003ba1d) settings_container_pane

0x5f5c,	// (0x000328c9) listscroll_set_pane_copy1

0x7c0d,	// (0x0003457a) scroll_pane_cp121_copy1

0xf0bc,	// (0x0003ba29) set_content_pane_copy1

0xf0c4,	// (0x0003ba31) aid_height_set_list_copy1_ParamLimits

0xf0c4,	// (0x0003ba31) aid_height_set_list_copy1

0x7412,	// (0x00033d7f) aid_size_parent_copy1_ParamLimits

0x7412,	// (0x00033d7f) aid_size_parent_copy1

0xf0d0,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0d0,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1

0x5671,	// (0x00031fde) list_highlight_pane_cp2_copy1_ParamLimits

0x5671,	// (0x00031fde) list_highlight_pane_cp2_copy1

0xf0e4,	// (0x0003ba51) list_set_pane_copy1_ParamLimits

0xf0e4,	// (0x0003ba51) list_set_pane_copy1

0xf04b,	// (0x0003b9b8) main_pane_set_t1_copy1_ParamLimits

0xf04b,	// (0x0003b9b8) main_pane_set_t1_copy1

0xf085,	// (0x0003b9f2) main_pane_set_t2_copy1_ParamLimits

0xf085,	// (0x0003b9f2) main_pane_set_t2_copy1

0xf191,	// (0x0003bafe) main_pane_set_t3_copy1

0xf19f,	// (0x0003bb0c) main_pane_set_t4_copy1

0xf0a4,	// (0x0003ba11) set_content_pane_g1_copy1_ParamLimits

0xf0a4,	// (0x0003ba11) set_content_pane_g1_copy1

0xf1ad,	// (0x0003bb1a) setting_code_pane_copy1

0xf1b7,	// (0x0003bb24) setting_slider_graphic_pane_copy1

0xf1b7,	// (0x0003bb24) setting_slider_pane_copy1

0xf1c1,	// (0x0003bb2e) setting_text_pane_copy1

0xf1cb,	// (0x0003bb38) setting_volume_pane_copy1

0xf1d4,	// (0x0003bb41) settings_code_pane_cp2_copy1

0xf1dc,	// (0x0003bb49) settings_code_pane_cp_copy1_ParamLimits

0xf1dc,	// (0x0003bb49) settings_code_pane_cp_copy1

0xf1f0,	// (0x0003bb5d) volume_set_pane_copy1

0xf1f8,	// (0x0003bb65) volume_set_pane_g10_copy1

0xf200,	// (0x0003bb6d) volume_set_pane_g1_copy1

0xf208,	// (0x0003bb75) volume_set_pane_g2_copy1

0xf210,	// (0x0003bb7d) volume_set_pane_g3_copy1

0xf218,	// (0x0003bb85) volume_set_pane_g4_copy1

0xf220,	// (0x0003bb8d) volume_set_pane_g5_copy1

0xf228,	// (0x0003bb95) volume_set_pane_g6_copy1

0xf230,	// (0x0003bb9d) volume_set_pane_g7_copy1

0xf238,	// (0x0003bba5) volume_set_pane_g8_copy1

0xf240,	// (0x0003bbad) volume_set_pane_g9_copy1

0x4eca,	// (0x00031837) bg_set_opt_pane_cp_copy1_ParamLimits

0x4eca,	// (0x00031837) bg_set_opt_pane_cp_copy1

0xf248,	// (0x0003bbb5) setting_slider_pane_t1_copy1_ParamLimits

0xf248,	// (0x0003bbb5) setting_slider_pane_t1_copy1

0xf266,	// (0x0003bbd3) setting_slider_pane_t2_copy1_ParamLimits

0xf266,	// (0x0003bbd3) setting_slider_pane_t2_copy1

0xf280,	// (0x0003bbed) setting_slider_pane_t3_copy1_ParamLimits

0xf280,	// (0x0003bbed) setting_slider_pane_t3_copy1

0xf298,	// (0x0003bc05) slider_set_pane_copy1_ParamLimits

0xf298,	// (0x0003bc05) slider_set_pane_copy1

0x5581,	// (0x00031eee) set_opt_bg_pane_g1_copy2

0x5589,	// (0x00031ef6) set_opt_bg_pane_g2_copy2

0xf2ae,	// (0x0003bc1b) set_opt_bg_pane_g3_copy2

0x5599,	// (0x00031f06) set_opt_bg_pane_g4_copy2

0x55a1,	// (0x00031f0e) set_opt_bg_pane_g5_copy2

0x55a9,	// (0x00031f16) set_opt_bg_pane_g6_copy2

0xf2b8,	// (0x0003bc25) set_opt_bg_pane_g7_copy2

0xf2c0,	// (0x0003bc2d) set_opt_bg_pane_g8_copy2

0xf2ca,	// (0x0003bc37) set_opt_bg_pane_g9_copy2

0xb7f4,	// (0x00038161) aid_size_touch_slider_mark_copy1_ParamLimits

0xb7f4,	// (0x00038161) aid_size_touch_slider_mark_copy1

0xf2d4,	// (0x0003bc41) slider_set_pane_g1_copy1

0xb808,	// (0x00038175) slider_set_pane_g2_copy1

0xa92a,	// (0x00037297) slider_set_pane_g3_copy1_ParamLimits

0xa92a,	// (0x00037297) slider_set_pane_g3_copy1

0xa93e,	// (0x000372ab) slider_set_pane_g4_copy1_ParamLimits

0xa93e,	// (0x000372ab) slider_set_pane_g4_copy1

0xa956,	// (0x000372c3) slider_set_pane_g5_copy1_ParamLimits

0xa956,	// (0x000372c3) slider_set_pane_g5_copy1

0xa92a,	// (0x00037297) slider_set_pane_g6_copy1_ParamLimits

0xa92a,	// (0x00037297) slider_set_pane_g6_copy1

0xb810,	// (0x0003817d) slider_set_pane_g7_copy1_ParamLimits

0xb810,	// (0x0003817d) slider_set_pane_g7_copy1

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp2_copy1

0xf2dd,	// (0x0003bc4a) setting_slider_graphic_pane_g1_copy1

0xf2e6,	// (0x0003bc53) setting_slider_graphic_pane_t1_copy1

0xf2f6,	// (0x0003bc63) setting_slider_graphic_pane_t2_copy1

0xf306,	// (0x0003bc73) slider_set_pane_cp_copy1

0xf316,	// (0x0003bc83) input_focus_pane_cp1_copy1

0xf31f,	// (0x0003bc8c) list_set_text_pane_copy1

0xf327,	// (0x0003bc94) setting_text_pane_g1_copy1

0x9649,	// (0x00035fb6) set_text_pane_t1_copy1

0xf316,	// (0x0003bc83) input_focus_pane_cp2_copy1

0xf327,	// (0x0003bc94) setting_code_pane_g1_copy1

0xf330,	// (0x0003bc9d) setting_code_pane_t1_copy1

0xf33e,	// (0x0003bcab) list_set_graphic_pane_copy1

0x4e6e,	// (0x000317db) bg_set_opt_pane_cp4_copy1

0x5c5e,	// (0x000325cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x5c5e,	// (0x000325cb) list_set_graphic_pane_g1_copy1

0xf352,	// (0x0003bcbf) list_set_graphic_pane_g2_copy1

0x5c76,	// (0x000325e3) list_set_graphic_pane_t1_copy1_ParamLimits

0x5c76,	// (0x000325e3) list_set_graphic_pane_t1_copy1

0xca23,	// (0x00039390) rs_clock_indi_pane_g1

0xf35a,	// (0x0003bcc7) rs_clock_indi_pane_t1

0xf368,	// (0x0003bcd5) rs_indi_pane

0xf370,	// (0x0003bcdd) rs_indi_pane_g1

0xf379,	// (0x0003bce6) rs_indi_pane_g2

0xf382,	// (0x0003bcef) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0003c85a) rs_indi_pane_g

0x5f5c,	// (0x000328c9) bg_popup_preview_window_pane_cp03

0xf38b,	// (0x0003bcf8) popup_fep_tooltip_window_t1

0xd6ca,	// (0x0003a037) popup_note2_window_g2_ParamLimits

0xd6ca,	// (0x0003a037) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0003c5ff) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0003c5ff) popup_note2_window_g

0xdbb8,	// (0x0003a525) bg_popup_sub_pane_cp11_ParamLimits

0xdbc5,	// (0x0003a532) cell_ai3_links_pane_g1_ParamLimits

0xdbdc,	// (0x0003a549) cell_ai3_links_pane_t1

0x9649,	// (0x00035fb6) set_text_pane_t1_copy1_ParamLimits

0x5e6b,	// (0x000327d8) cell_graphic_popup_pane_cp2_ParamLimits

0x5e6b,	// (0x000327d8) cell_graphic_popup_pane_cp2

0xf399,	// (0x0003bd06) cell_graphic_popup_pane_g1_cp2

0x526f,	// (0x00031bdc) cell_graphic_popup_pane_g2_cp2

0xf3a1,	// (0x0003bd0e) cell_graphic_popup_pane_g3_cp2

0xf3a9,	// (0x0003bd16) cell_graphic_popup_pane_t2_cp2

0x5280,	// (0x00031bed) grid_highlight_pane_cp3_cp2

0x581b,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x551a,	// (0x00031e87) main_tmo_pane_ParamLimits

0xdf4a,	// (0x0003a8b7) popup_tmo_big_image_note_window

0x0647,	// (0x0002cfb4) cell_ai5_widget_list_pane

0x064f,	// (0x0002cfbc) cell_ai5_widget_lrg_icon_pane

0x08e9,	// (0x0002d256) tmo_note_info_pane_t1_ParamLimits

0x08fe,	// (0x0002d26b) tmo_note_info_pane_t2_ParamLimits

0x0917,	// (0x0002d284) tmo_note_info_pane_t3_ParamLimits

0xef68,	// (0x0003b8d5) tmo_note_info_pane_t4_ParamLimits

0xef7a,	// (0x0003b8e7) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0003c848) tmo_note_info_pane_t_ParamLimits

0xf0b0,	// (0x0003ba1d) settings_container_pane_ParamLimits

0xf30e,	// (0x0003bc7b) indicator_popup_pane_cp5

0xf30e,	// (0x0003bc7b) indicator_popup_pane_cp6

0xf33e,	// (0x0003bcab) list_set_graphic_pane_copy1_ParamLimits

0x4e5a,	// (0x000317c7) bg_popup_window_pane_cp23

0xf3b7,	// (0x0003bd24) popup_tmo_big_image_note_window_g1

0xf3c2,	// (0x0003bd2f) popup_tmo_big_image_note_window_t1

0xf3d2,	// (0x0003bd3f) popup_tmo_big_image_note_window_t2

0xf3e2,	// (0x0003bd4f) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0003c861) popup_tmo_big_image_note_window_t

0x092c,	// (0x0002d299) cell_ai5_widget_lrg_icon_pane_g1

0x0934,	// (0x0002d2a1) cell_ai5_widget_lrg_icon_pane_t1

0x0942,	// (0x0002d2af) cell_ai5_widget_list_row_pane_ParamLimits

0x0942,	// (0x0002d2af) cell_ai5_widget_list_row_pane

0x095b,	// (0x0002d2c8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x095b,	// (0x0002d2c8) cell_ai5_widget_list_row_pane_g1

0x0968,	// (0x0002d2d5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0968,	// (0x0002d2d5) cell_ai5_widget_list_row_pane_t1

0x0980,	// (0x0002d2ed) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0980,	// (0x0002d2ed) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0003c868) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0003c868) cell_ai5_widget_list_row_pane_t

0x4e5a,	// (0x000317c7) main_fep_vtchi_ss_pane

0xf3f2,	// (0x0003bd5f) popup_fep_char_pre_window

0xf3fa,	// (0x0003bd67) popup_fep_ituss_window

0xf405,	// (0x0003bd72) popup_fep_vkbss_window

0xf40e,	// (0x0003bd7b) grid_vkbss_keypad_pane_ParamLimits

0xf40e,	// (0x0003bd7b) grid_vkbss_keypad_pane

0xf41e,	// (0x0003bd8b) ituss_keypad_pane

0xf426,	// (0x0003bd93) aid_vkbss_key_offset_ParamLimits

0xf426,	// (0x0003bd93) aid_vkbss_key_offset

0xf435,	// (0x0003bda2) cell_vkbss_key_pane_ParamLimits

0xf435,	// (0x0003bda2) cell_vkbss_key_pane

0xf44b,	// (0x0003bdb8) bg_cell_vkbss_key_g1_ParamLimits

0xf44b,	// (0x0003bdb8) bg_cell_vkbss_key_g1

0xf457,	// (0x0003bdc4) cell_vkbss_key_3p_pane_ParamLimits

0xf457,	// (0x0003bdc4) cell_vkbss_key_3p_pane

0xf471,	// (0x0003bdde) cell_vkbss_key_g1_ParamLimits

0xf471,	// (0x0003bdde) cell_vkbss_key_g1

0xf48b,	// (0x0003bdf8) cell_vkbss_key_t1_ParamLimits

0xf48b,	// (0x0003bdf8) cell_vkbss_key_t1

0xf4b6,	// (0x0003be23) cell_ituss_key_pane_ParamLimits

0xf4b6,	// (0x0003be23) cell_ituss_key_pane

0xf4c5,	// (0x0003be32) bg_cell_ituss_key_g1_ParamLimits

0xf4c5,	// (0x0003be32) bg_cell_ituss_key_g1

0xf4d1,	// (0x0003be3e) cell_ituss_key_pane_g1_ParamLimits

0xf4d1,	// (0x0003be3e) cell_ituss_key_pane_g1

0xf4dd,	// (0x0003be4a) cell_ituss_key_pane_g2_ParamLimits

0xf4dd,	// (0x0003be4a) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0003c86d) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0003c86d) cell_ituss_key_pane_g

0xf4f0,	// (0x0003be5d) cell_ituss_key_t1_ParamLimits

0xf4f0,	// (0x0003be5d) cell_ituss_key_t1

0xf50e,	// (0x0003be7b) cell_ituss_key_t2_ParamLimits

0xf50e,	// (0x0003be7b) cell_ituss_key_t2

0xf52d,	// (0x0003be9a) cell_ituss_key_t3_ParamLimits

0xf52d,	// (0x0003be9a) cell_ituss_key_t3

0xf54c,	// (0x0003beb9) cell_ituss_key_t4_ParamLimits

0xf54c,	// (0x0003beb9) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0003c872) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0003c872) cell_ituss_key_t

0xf56b,	// (0x0003bed8) cell_vkbss_key_3p_pane_g1

0xf573,	// (0x0003bee0) cell_vkbss_key_3p_pane_g2

0xf57b,	// (0x0003bee8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0003c87b) cell_vkbss_key_3p_pane_g

0x4e5a,	// (0x000317c7) bg_popup_fep_char_preview_window_cp02

0xf583,	// (0x0003bef0) popup_fep_char_pre_window_t1

0x063d,	// (0x0002cfaa) main_ai5_sk_pane

0xeff4,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf000,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf014,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf023,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0003c853) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf036,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x551a,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0992,	// (0x0002d2ff) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

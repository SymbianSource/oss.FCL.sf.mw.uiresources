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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002dec9 };

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
0x2000,	// (0x0002fec9) Screen

0x2012,	// (0x0002fedb) application_window_ParamLimits

0x2012,	// (0x0002fedb) application_window

0x202a,	// (0x0002fef3) screen_g1

0x2054,	// (0x0002ff1d) area_bottom_pane_ParamLimits

0x2054,	// (0x0002ff1d) area_bottom_pane

0x20ff,	// (0x0002ffc8) area_top_pane_ParamLimits

0x20ff,	// (0x0002ffc8) area_top_pane

0x8fa2,	// (0x00036e6b) main_pane_ParamLimits

0x8fa2,	// (0x00036e6b) main_pane

0x2177,	// (0x00030040) misc_graphics

0x36b9,	// (0x00031582) battery_pane_ParamLimits

0x36b9,	// (0x00031582) battery_pane

0x71fa,	// (0x000350c3) bg_status_flat_pane_g8

0x7202,	// (0x000350cb) bg_status_flat_pane_g9

0x6820,	// (0x000346e9) context_pane_ParamLimits

0x6820,	// (0x000346e9) context_pane

0x3813,	// (0x000316dc) navi_pane_ParamLimits

0x3813,	// (0x000316dc) navi_pane

0x3888,	// (0x00031751) signal_pane_ParamLimits

0x3888,	// (0x00031751) signal_pane

0x0008,

0xf8ab,	// (0x0003d774) bg_status_flat_pane_g

0x3914,	// (0x000317dd) status_pane_g1_ParamLimits

0x3914,	// (0x000317dd) status_pane_g1

0x3920,	// (0x000317e9) status_pane_g2_ParamLimits

0x3920,	// (0x000317e9) status_pane_g2

0x6886,	// (0x0003474f) status_pane_g3_ParamLimits

0x6886,	// (0x0003474f) status_pane_g3

0x0004,

0xf7e5,	// (0x0003d6ae) status_pane_g_ParamLimits

0xf7e5,	// (0x0003d6ae) status_pane_g

0x392c,	// (0x000317f5) title_pane_ParamLimits

0x392c,	// (0x000317f5) title_pane

0x3987,	// (0x00031850) uni_indicator_pane_ParamLimits

0x3987,	// (0x00031850) uni_indicator_pane

0x6682,	// (0x0003454b) bg_list_pane_ParamLimits

0x6682,	// (0x0003454b) bg_list_pane

0x3081,	// (0x00030f4a) find_pane

0x3089,	// (0x00030f52) listscroll_app_pane_ParamLimits

0x3089,	// (0x00030f52) listscroll_app_pane

0x66a2,	// (0x0003456b) listscroll_form_pane

0x3095,	// (0x00030f5e) listscroll_gen_pane_ParamLimits

0x3095,	// (0x00030f5e) listscroll_gen_pane

0x66a2,	// (0x0003456b) listscroll_set_pane

0x30aa,	// (0x00030f73) main_idle_act_pane

0x6460,	// (0x00034329) main_idle_trad_pane

0x6460,	// (0x00034329) main_list_empty_pane

0x5c35,	// (0x00033afe) main_midp_pane

0x66bc,	// (0x00034585) main_pane_g1_ParamLimits

0x66bc,	// (0x00034585) main_pane_g1

0x30bd,	// (0x00030f86) popup_ai_message_window_ParamLimits

0x30bd,	// (0x00030f86) popup_ai_message_window

0x3141,	// (0x0003100a) popup_fep_china_uni_window_ParamLimits

0x3141,	// (0x0003100a) popup_fep_china_uni_window

0x66ec,	// (0x000345b5) popup_fep_japan_candidate_window_ParamLimits

0x66ec,	// (0x000345b5) popup_fep_japan_candidate_window

0x670a,	// (0x000345d3) popup_fep_japan_predictive_window_ParamLimits

0x670a,	// (0x000345d3) popup_fep_japan_predictive_window

0x317f,	// (0x00031048) popup_find_window

0x3198,	// (0x00031061) popup_grid_graphic_window_ParamLimits

0x3198,	// (0x00031061) popup_grid_graphic_window

0x6736,	// (0x000345ff) popup_large_graphic_colour_window

0x3214,	// (0x000310dd) popup_menu_window_ParamLimits

0x3214,	// (0x000310dd) popup_menu_window

0x3372,	// (0x0003123b) popup_note_image_window

0x333a,	// (0x00031203) popup_note_wait_window_ParamLimits

0x333a,	// (0x00031203) popup_note_wait_window

0x3388,	// (0x00031251) popup_note_window_ParamLimits

0x3388,	// (0x00031251) popup_note_window

0x341c,	// (0x000312e5) popup_query_code_window_ParamLimits

0x341c,	// (0x000312e5) popup_query_code_window

0x6755,	// (0x0003461e) popup_query_data_code_window_ParamLimits

0x6755,	// (0x0003461e) popup_query_data_code_window

0x3454,	// (0x0003131d) popup_query_data_window_ParamLimits

0x3454,	// (0x0003131d) popup_query_data_window

0x34c8,	// (0x00031391) popup_query_sat_info_window_ParamLimits

0x34c8,	// (0x00031391) popup_query_sat_info_window

0x3555,	// (0x0003141e) popup_snote_single_graphic_window_ParamLimits

0x3555,	// (0x0003141e) popup_snote_single_graphic_window

0x3555,	// (0x0003141e) popup_snote_single_text_window_ParamLimits

0x3555,	// (0x0003141e) popup_snote_single_text_window

0x676a,	// (0x00034633) popup_sub_window_general

0x67ac,	// (0x00034675) popup_window_general_ParamLimits

0x67ac,	// (0x00034675) popup_window_general

0x67bf,	// (0x00034688) power_save_pane

0xee5b,	// (0x0003cd24) control_pane_g1_ParamLimits

0xee5b,	// (0x0003cd24) control_pane_g1

0x9ba5,	// (0x00037a6e) control_pane_g2_ParamLimits

0x9ba5,	// (0x00037a6e) control_pane_g2

0x666c,	// (0x00034535) control_pane_g3_ParamLimits

0x666c,	// (0x00034535) control_pane_g3

0x0007,

0xf7cd,	// (0x0003d696) control_pane_g_ParamLimits

0xf7cd,	// (0x0003d696) control_pane_g

0xee91,	// (0x0003cd5a) control_pane_t1_ParamLimits

0xee91,	// (0x0003cd5a) control_pane_t1

0xeeed,	// (0x0003cdb6) control_pane_t2_ParamLimits

0xeeed,	// (0x0003cdb6) control_pane_t2

0x0002,

0xf7de,	// (0x0003d6a7) control_pane_t_ParamLimits

0xf7de,	// (0x0003d6a7) control_pane_t

0x658f,	// (0x00034458) navi_navi_volume_pane_cp1

0x6598,	// (0x00034461) status_small_icon_pane

0x65a0,	// (0x00034469) status_small_pane_g1_ParamLimits

0x65a0,	// (0x00034469) status_small_pane_g1

0x65d4,	// (0x0003449d) status_small_pane_g2_ParamLimits

0x65d4,	// (0x0003449d) status_small_pane_g2

0x65e0,	// (0x000344a9) status_small_pane_g3_ParamLimits

0x65e0,	// (0x000344a9) status_small_pane_g3

0x65ec,	// (0x000344b5) status_small_pane_g4_ParamLimits

0x65ec,	// (0x000344b5) status_small_pane_g4

0x65f8,	// (0x000344c1) status_small_pane_g5_ParamLimits

0x65f8,	// (0x000344c1) status_small_pane_g5

0x6605,	// (0x000344ce) status_small_pane_g6_ParamLimits

0x6605,	// (0x000344ce) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003d685) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003d685) status_small_pane_g

0x6635,	// (0x000344fe) status_small_pane_t1

0x6658,	// (0x00034521) status_small_wait_pane_ParamLimits

0x6658,	// (0x00034521) status_small_wait_pane

0x2de0,	// (0x00030ca9) aid_levels_signal_ParamLimits

0x2de0,	// (0x00030ca9) aid_levels_signal

0x2df4,	// (0x00030cbd) signal_pane_g1_ParamLimits

0x2df4,	// (0x00030cbd) signal_pane_g1

0x2e0e,	// (0x00030cd7) signal_pane_g2_ParamLimits

0x2e0e,	// (0x00030cd7) signal_pane_g2

0x0001,

0xf751,	// (0x0003d61a) signal_pane_g_ParamLimits

0xf751,	// (0x0003d61a) signal_pane_g

0x6005,	// (0x00033ece) context_pane_g1

0x2226,	// (0x000300ef) title_pane_g1

0x2274,	// (0x0003013d) title_pane_t1

0x2301,	// (0x000301ca) title_pane_t2

0x2327,	// (0x000301f0) title_pane_t3

0x0002,

0xf59b,	// (0x0003d464) title_pane_t

0x39ad,	// (0x00031876) aid_levels_battery_ParamLimits

0x39ad,	// (0x00031876) aid_levels_battery

0x39c5,	// (0x0003188e) battery_pane_g1_ParamLimits

0x39c5,	// (0x0003188e) battery_pane_g1

0x39e0,	// (0x000318a9) battery_pane_g2_ParamLimits

0x39e0,	// (0x000318a9) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003d6b9) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003d6b9) battery_pane_g

0x3d4f,	// (0x00031c18) uni_indicator_pane_g1

0x3d64,	// (0x00031c2d) uni_indicator_pane_g2

0x3d7a,	// (0x00031c43) uni_indicator_pane_g3

0x0005,

0xf953,	// (0x0003d81c) uni_indicator_pane_g

0x5b59,	// (0x00033a22) navi_icon_pane_ParamLimits

0x5b59,	// (0x00033a22) navi_icon_pane

0x2177,	// (0x00030040) navi_midp_pane

0x2177,	// (0x00030040) navi_navi_pane

0x5b59,	// (0x00033a22) navi_text_pane_ParamLimits

0x5b59,	// (0x00033a22) navi_text_pane

0x202a,	// (0x0002fef3) status_small_wait_pane_g1

0x286c,	// (0x00030735) status_small_wait_pane_g2

0x0001,

0xf94e,	// (0x0003d817) status_small_wait_pane_g

0x3cf5,	// (0x00031bbe) navi_navi_icon_text_pane

0x3d0f,	// (0x00031bd8) navi_navi_pane_g1_ParamLimits

0x3d0f,	// (0x00031bd8) navi_navi_pane_g1

0x3cfd,	// (0x00031bc6) navi_navi_pane_g2_ParamLimits

0x3cfd,	// (0x00031bc6) navi_navi_pane_g2

0x0001,

0xf91c,	// (0x0003d7e5) navi_navi_pane_g_ParamLimits

0xf91c,	// (0x0003d7e5) navi_navi_pane_g

0x3d21,	// (0x00031bea) navi_navi_tabs_pane

0x3cf5,	// (0x00031bbe) navi_navi_text_pane

0x3cf5,	// (0x00031bbe) navi_navi_volume_pane

0x7740,	// (0x00035609) navi_text_pane_t1

0x7734,	// (0x000355fd) navi_icon_pane_g1

0x7688,	// (0x00035551) navi_navi_text_pane_t1

0xa79e,	// (0x00038667) navi_navi_volume_pane_g1

0xf0dc,	// (0x0003cfa5) volume_small_pane

0x3c48,	// (0x00031b11) navi_navi_icon_text_pane_g1

0x3c50,	// (0x00031b19) navi_navi_icon_text_pane_t1

0x7242,	// (0x0003510b) navi_tabs_2_long_pane

0x7242,	// (0x0003510b) navi_tabs_2_pane

0x7242,	// (0x0003510b) navi_tabs_3_long_pane

0x7242,	// (0x0003510b) navi_tabs_3_pane

0x7242,	// (0x0003510b) navi_tabs_4_pane

0xf0bc,	// (0x0003cf85) tabs_2_active_pane_ParamLimits

0xf0bc,	// (0x0003cf85) tabs_2_active_pane

0xf0cc,	// (0x0003cf95) tabs_2_passive_pane_ParamLimits

0xf0cc,	// (0x0003cf95) tabs_2_passive_pane

0xf08a,	// (0x0003cf53) tabs_3_active_pane_ParamLimits

0xf08a,	// (0x0003cf53) tabs_3_active_pane

0xf09a,	// (0x0003cf63) tabs_3_passive_pane_ParamLimits

0xf09a,	// (0x0003cf63) tabs_3_passive_pane

0xf0ab,	// (0x0003cf74) tabs_3_passive_pane_cp_ParamLimits

0xf0ab,	// (0x0003cf74) tabs_3_passive_pane_cp

0xf046,	// (0x0003cf0f) tabs_4_active_pane_ParamLimits

0xf046,	// (0x0003cf0f) tabs_4_active_pane

0xf057,	// (0x0003cf20) tabs_4_passive_pane_ParamLimits

0xf057,	// (0x0003cf20) tabs_4_passive_pane

0xf068,	// (0x0003cf31) tabs_4_passive_pane_cp_ParamLimits

0xf068,	// (0x0003cf31) tabs_4_passive_pane_cp

0xf079,	// (0x0003cf42) tabs_4_passive_pane_cp2_ParamLimits

0xf079,	// (0x0003cf42) tabs_4_passive_pane_cp2

0xf026,	// (0x0003ceef) tabs_2_long_active_pane_ParamLimits

0xf026,	// (0x0003ceef) tabs_2_long_active_pane

0xf036,	// (0x0003ceff) tabs_2_long_passive_pane_ParamLimits

0xf036,	// (0x0003ceff) tabs_2_long_passive_pane

0xefef,	// (0x0003ceb8) tabs_3_long_active_pane_ParamLimits

0xefef,	// (0x0003ceb8) tabs_3_long_active_pane

0xf002,	// (0x0003cecb) tabs_3_long_passive_pane_ParamLimits

0xf002,	// (0x0003cecb) tabs_3_long_passive_pane

0xf013,	// (0x0003cedc) tabs_3_long_passive_pane_cp_ParamLimits

0xf013,	// (0x0003cedc) tabs_3_long_passive_pane_cp

0xa5cb,	// (0x00038494) volume_small_pane_g1

0xa5d4,	// (0x0003849d) volume_small_pane_g2

0xa5dd,	// (0x000384a6) volume_small_pane_g3

0xa5e6,	// (0x000384af) volume_small_pane_g4

0xa5ef,	// (0x000384b8) volume_small_pane_g5

0xa5f8,	// (0x000384c1) volume_small_pane_g6

0xa601,	// (0x000384ca) volume_small_pane_g7

0xa60a,	// (0x000384d3) volume_small_pane_g8

0xa613,	// (0x000384dc) volume_small_pane_g9

0xa61c,	// (0x000384e5) volume_small_pane_g10

0x0009,

0xf8e8,	// (0x0003d7b1) volume_small_pane_g

0x2339,	// (0x00030202) bg_active_tab_pane_cp2_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp2

0x2347,	// (0x00030210) tabs_3_active_pane_g1

0x234f,	// (0x00030218) tabs_3_active_pane_t1

0x2339,	// (0x00030202) bg_passive_tab_pane_cp2_ParamLimits

0x2339,	// (0x00030202) bg_passive_tab_pane_cp2

0x2347,	// (0x00030210) tabs_3_passive_pane_g1

0x234f,	// (0x00030218) tabs_3_passive_pane_t1

0x2339,	// (0x00030202) bg_active_tab_pane_cp3_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp3

0x6bdf,	// (0x00034aa8) tabs_4_active_pane_g1

0x2365,	// (0x0003022e) tabs_4_active_pane_t1

0x2339,	// (0x00030202) bg_passive_tab_pane_cp3_ParamLimits

0x2339,	// (0x00030202) bg_passive_tab_pane_cp3

0x6bdf,	// (0x00034aa8) tabs_4_1_passive_pane_g1

0x2365,	// (0x0003022e) tabs_4_1_passive_pane_t1

0x5c35,	// (0x00033afe) list_highlight_pane_cp2

0x3e36,	// (0x00031cff) list_set_pane_ParamLimits

0x3e36,	// (0x00031cff) list_set_pane

0x3ec4,	// (0x00031d8d) main_pane_set_t1_ParamLimits

0x3ec4,	// (0x00031d8d) main_pane_set_t1

0x3ee4,	// (0x00031dad) main_pane_set_t2_ParamLimits

0x3ee4,	// (0x00031dad) main_pane_set_t2

0x3ef8,	// (0x00031dc1) main_pane_set_t3_ParamLimits

0x3ef8,	// (0x00031dc1) main_pane_set_t3

0x3f0a,	// (0x00031dd3) main_pane_set_t4_ParamLimits

0x3f0a,	// (0x00031dd3) main_pane_set_t4

0x0003,

0xf9b8,	// (0x0003d881) main_pane_set_t_ParamLimits

0xf9b8,	// (0x0003d881) main_pane_set_t

0x3f1c,	// (0x00031de5) setting_code_pane

0x3f24,	// (0x00031ded) setting_slider_graphic_pane

0x3f24,	// (0x00031ded) setting_slider_pane

0x3f24,	// (0x00031ded) setting_text_pane

0x3f24,	// (0x00031ded) setting_volume_pane

0xede8,	// (0x0003ccb1) volume_set_pane

0x2383,	// (0x0003024c) bg_set_opt_pane_cp

0x9267,	// (0x00037130) setting_slider_pane_t1

0xedf0,	// (0x0003ccb9) setting_slider_pane_t2

0xee09,	// (0x0003ccd2) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d46b) setting_slider_pane_t

0x92ad,	// (0x00037176) slider_set_pane

0x2177,	// (0x00030040) bg_set_opt_pane_cp2

0x23ed,	// (0x000302b6) setting_slider_graphic_pane_g1

0xee20,	// (0x0003cce9) setting_slider_graphic_pane_t1

0xee2f,	// (0x0003ccf8) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d472) setting_slider_graphic_pane_t

0xee3e,	// (0x0003cd07) slider_set_pane_cp

0x2177,	// (0x00030040) input_focus_pane_cp1

0x7b90,	// (0x00035a59) list_set_text_pane

0x202a,	// (0x0002fef3) setting_text_pane_g1

0x2177,	// (0x00030040) input_focus_pane_cp2

0x202a,	// (0x0002fef3) setting_code_pane_g1

0x241c,	// (0x000302e5) setting_code_pane_t1

0x1833,	// (0x0002f6fc) set_text_pane_t1_ParamLimits

0x1833,	// (0x0002f6fc) set_text_pane_t1

0x5b08,	// (0x000339d1) set_opt_bg_pane_g1

0x5b10,	// (0x000339d9) set_opt_bg_pane_g2

0x3df6,	// (0x00031cbf) set_opt_bg_pane_g3

0x5b20,	// (0x000339e9) set_opt_bg_pane_g4

0x5b28,	// (0x000339f1) set_opt_bg_pane_g5

0x5b30,	// (0x000339f9) set_opt_bg_pane_g6

0x3dfe,	// (0x00031cc7) set_opt_bg_pane_g7

0x3e06,	// (0x00031ccf) set_opt_bg_pane_g8

0x3e0e,	// (0x00031cd7) set_opt_bg_pane_g9

0x0008,

0xf9a5,	// (0x0003d86e) set_opt_bg_pane_g

0x7b83,	// (0x00035a4c) slider_set_pane_g1

0xa879,	// (0x00038742) slider_set_pane_g2

0x0006,

0xf996,	// (0x0003d85f) slider_set_pane_g

0xf0e5,	// (0x0003cfae) volume_set_pane_g1

0xf0ed,	// (0x0003cfb6) volume_set_pane_g2

0xf0f5,	// (0x0003cfbe) volume_set_pane_g3

0xf0fd,	// (0x0003cfc6) volume_set_pane_g4

0xf105,	// (0x0003cfce) volume_set_pane_g5

0xf10d,	// (0x0003cfd6) volume_set_pane_g6

0xf115,	// (0x0003cfde) volume_set_pane_g7

0xf11d,	// (0x0003cfe6) volume_set_pane_g8

0xf125,	// (0x0003cfee) volume_set_pane_g9

0xf12d,	// (0x0003cff6) volume_set_pane_g10

0x0009,

0xf96e,	// (0x0003d837) volume_set_pane_g

0x242a,	// (0x000302f3) indicator_pane_ParamLimits

0x242a,	// (0x000302f3) indicator_pane

0x2452,	// (0x0003031b) main_idle_pane_g2_ParamLimits

0x2452,	// (0x0003031b) main_idle_pane_g2

0x2482,	// (0x0003034b) main_pane_idle_g1_ParamLimits

0x2482,	// (0x0003034b) main_pane_idle_g1

0x24a7,	// (0x00030370) popup_clock_digital_analogue_window_ParamLimits

0x24a7,	// (0x00030370) popup_clock_digital_analogue_window

0x24be,	// (0x00030387) soft_indicator_pane_ParamLimits

0x24be,	// (0x00030387) soft_indicator_pane

0x24d8,	// (0x000303a1) wallpaper_pane_ParamLimits

0x24d8,	// (0x000303a1) wallpaper_pane

0x202a,	// (0x0002fef3) wallpaper_pane_g1

0x24f2,	// (0x000303bb) indicator_pane_g1_ParamLimits

0x24f2,	// (0x000303bb) indicator_pane_g1

0x7c8a,	// (0x00035b53) navi_navi_icon_text_pane_srt_g1

0x251a,	// (0x000303e3) soft_indicator_pane_t1

0x2534,	// (0x000303fd) aid_ps_area_pane

0x2545,	// (0x0003040e) aid_ps_clock_pane

0x2551,	// (0x0003041a) aid_ps_indicator_pane

0x255d,	// (0x00030426) indicator_ps_pane_ParamLimits

0x255d,	// (0x00030426) indicator_ps_pane

0x256c,	// (0x00030435) power_save_pane_g1_ParamLimits

0x256c,	// (0x00030435) power_save_pane_g1

0x2578,	// (0x00030441) power_save_pane_g2_ParamLimits

0x2578,	// (0x00030441) power_save_pane_g2

0x8eaf,	// (0x00036d78) aid_navinavi_width_pane

0x2534,	// (0x000303fd) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d477) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d477) power_save_pane_g

0x2586,	// (0x0003044f) power_save_pane_t1_ParamLimits

0x2586,	// (0x0003044f) power_save_pane_t1

0x2545,	// (0x0003040e) aid_ps_clock_pane_ParamLimits

0x2551,	// (0x0003041a) aid_ps_indicator_pane_ParamLimits

0x2598,	// (0x00030461) power_save_pane_t4_ParamLimits

0x2598,	// (0x00030461) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d47c) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d47c) power_save_pane_t

0x25c2,	// (0x0003048b) power_save_t3_ParamLimits

0x25c2,	// (0x0003048b) power_save_t3

0x25ad,	// (0x00030476) power_save_t2_ParamLimits

0x25ad,	// (0x00030476) power_save_t2

0x25d7,	// (0x000304a0) indicator_ps_pane_g1

0x25e0,	// (0x000304a9) ai_gene_pane_ParamLimits

0x25e0,	// (0x000304a9) ai_gene_pane

0x25f7,	// (0x000304c0) ai_links_pane_ParamLimits

0x25f7,	// (0x000304c0) ai_links_pane

0x2609,	// (0x000304d2) indicator_pane_cp1_ParamLimits

0x2609,	// (0x000304d2) indicator_pane_cp1

0x2618,	// (0x000304e1) main_pane_idle_g1_cp_ParamLimits

0x2618,	// (0x000304e1) main_pane_idle_g1_cp

0x2630,	// (0x000304f9) popup_ai_links_title_window

0x2639,	// (0x00030502) soft_indicator_pane_cp1_ParamLimits

0x2639,	// (0x00030502) soft_indicator_pane_cp1

0x79c5,	// (0x0003588e) ai_links_pane_g1

0x79ce,	// (0x00035897) grid_ai_links_pane

0x3d46,	// (0x00031c0f) ai_gene_pane_1

0x79b3,	// (0x0003587c) ai_gene_pane_2

0x79bc,	// (0x00035885) list_highlight_pane_cp4

0x3d2a,	// (0x00031bf3) cell_ai_link_pane_ParamLimits

0x3d2a,	// (0x00031bf3) cell_ai_link_pane

0x79ab,	// (0x00035874) cell_ai_link_pane_g1

0x286c,	// (0x00030735) cell_ai_link_pane_g2

0x0001,

0xf949,	// (0x0003d812) cell_ai_link_pane_g

0x2177,	// (0x00030040) grid_highlight_cp2

0x2177,	// (0x00030040) bg_popup_sub_pane_cp1

0x265b,	// (0x00030524) popup_ai_links_title_window_t1

0x78fd,	// (0x000357c6) ai_gene_pane_1_g1_ParamLimits

0x78fd,	// (0x000357c6) ai_gene_pane_1_g1

0x7909,	// (0x000357d2) ai_gene_pane_1_g2_ParamLimits

0x7909,	// (0x000357d2) ai_gene_pane_1_g2

0x0001,

0xf93f,	// (0x0003d808) ai_gene_pane_1_g_ParamLimits

0xf93f,	// (0x0003d808) ai_gene_pane_1_g

0x7916,	// (0x000357df) ai_gene_pane_1_t1_ParamLimits

0x7916,	// (0x000357df) ai_gene_pane_1_t1

0x794a,	// (0x00035813) grid_ai_soft_ind_pane

0x78e8,	// (0x000357b1) ai_gene_pane_2_t1_ParamLimits

0x78e8,	// (0x000357b1) ai_gene_pane_2_t1

0x266a,	// (0x00030533) main_pane_empty_t1_ParamLimits

0x266a,	// (0x00030533) main_pane_empty_t1

0x2687,	// (0x00030550) main_pane_empty_t2_ParamLimits

0x2687,	// (0x00030550) main_pane_empty_t2

0x269f,	// (0x00030568) main_pane_empty_t3_ParamLimits

0x269f,	// (0x00030568) main_pane_empty_t3

0x26b2,	// (0x0003057b) main_pane_empty_t4_ParamLimits

0x26b2,	// (0x0003057b) main_pane_empty_t4

0x26c5,	// (0x0003058e) main_pane_empty_t5_ParamLimits

0x26c5,	// (0x0003058e) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d481) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d481) main_pane_empty_t

0x5b59,	// (0x00033a22) bg_popup_window_pane_ParamLimits

0x5b59,	// (0x00033a22) bg_popup_window_pane

0x7697,	// (0x00035560) find_popup_pane_cp2_ParamLimits

0x7697,	// (0x00035560) find_popup_pane_cp2

0x76a3,	// (0x0003556c) heading_pane_ParamLimits

0x76a3,	// (0x0003556c) heading_pane

0x2177,	// (0x00030040) bg_popup_sub_pane

0x3c6d,	// (0x00031b36) bg_popup_window_pane_g1_ParamLimits

0x3c6d,	// (0x00031b36) bg_popup_window_pane_g1

0x3c7c,	// (0x00031b45) bg_popup_window_pane_g2_ParamLimits

0x3c7c,	// (0x00031b45) bg_popup_window_pane_g2

0x3c88,	// (0x00031b51) bg_popup_window_pane_g3_ParamLimits

0x3c88,	// (0x00031b51) bg_popup_window_pane_g3

0x3c94,	// (0x00031b5d) bg_popup_window_pane_g4_ParamLimits

0x3c94,	// (0x00031b5d) bg_popup_window_pane_g4

0x3ca3,	// (0x00031b6c) bg_popup_window_pane_g5_ParamLimits

0x3ca3,	// (0x00031b6c) bg_popup_window_pane_g5

0x3cb3,	// (0x00031b7c) bg_popup_window_pane_g6_ParamLimits

0x3cb3,	// (0x00031b7c) bg_popup_window_pane_g6

0x3cbf,	// (0x00031b88) bg_popup_window_pane_g7_ParamLimits

0x3cbf,	// (0x00031b88) bg_popup_window_pane_g7

0x3cce,	// (0x00031b97) bg_popup_window_pane_g8_ParamLimits

0x3cce,	// (0x00031b97) bg_popup_window_pane_g8

0x3cdd,	// (0x00031ba6) bg_popup_window_pane_g9_ParamLimits

0x3cdd,	// (0x00031ba6) bg_popup_window_pane_g9

0x767c,	// (0x00035545) bg_popup_window_pane_g10_ParamLimits

0x767c,	// (0x00035545) bg_popup_window_pane_g10

0x0009,

0xf907,	// (0x0003d7d0) bg_popup_window_pane_g_ParamLimits

0xf907,	// (0x0003d7d0) bg_popup_window_pane_g

0x7633,	// (0x000354fc) bg_popup_heading_pane_ParamLimits

0x7633,	// (0x000354fc) bg_popup_heading_pane

0xab3f,	// (0x00038a08) tabs_4_passive_pane_cp_srt_ParamLimits

0xab3f,	// (0x00038a08) tabs_4_passive_pane_cp_srt

0xab51,	// (0x00038a1a) tabs_4_passive_pane_srt_ParamLimits

0x7647,	// (0x00035510) heading_pane_g2

0xab51,	// (0x00038a1a) tabs_4_passive_pane_srt

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp3_srt

0x764f,	// (0x00035518) heading_pane_t1_ParamLimits

0x764f,	// (0x00035518) heading_pane_t1

0x7666,	// (0x0003552f) heading_pane_t2_ParamLimits

0x7666,	// (0x0003552f) heading_pane_t2

0x0001,

0xf902,	// (0x0003d7cb) heading_pane_t_ParamLimits

0xf902,	// (0x0003d7cb) heading_pane_t

0x71c2,	// (0x0003508b) bg_popup_heading_pane_g1

0x7253,	// (0x0003511c) bg_popup_heading_pane_g2

0x725b,	// (0x00035124) bg_popup_heading_pane_g3

0x7263,	// (0x0003512c) bg_popup_heading_pane_g4

0x726b,	// (0x00035134) bg_popup_heading_pane_g5

0x7273,	// (0x0003513c) bg_popup_heading_pane_g6

0x727b,	// (0x00035144) bg_popup_heading_pane_g7

0x7283,	// (0x0003514c) bg_popup_heading_pane_g8

0x728b,	// (0x00035154) bg_popup_heading_pane_g9

0x0008,

0xf8be,	// (0x0003d787) bg_popup_heading_pane_g

0x696e,	// (0x00034837) bg_popup_sub_pane_g1

0x6976,	// (0x0003483f) bg_popup_sub_pane_g2

0x697e,	// (0x00034847) bg_popup_sub_pane_g3

0x6986,	// (0x0003484f) bg_popup_sub_pane_g4

0x698e,	// (0x00034857) bg_popup_sub_pane_g5

0x6996,	// (0x0003485f) bg_popup_sub_pane_g6

0x699e,	// (0x00034867) bg_popup_sub_pane_g7

0x69a6,	// (0x0003486f) bg_popup_sub_pane_g8

0x69ae,	// (0x00034877) bg_popup_sub_pane_g9

0x0008,

0xf898,	// (0x0003d761) bg_popup_sub_pane_g

0x2339,	// (0x00030202) bg_popup_window_pane_cp5_ParamLimits

0x2339,	// (0x00030202) bg_popup_window_pane_cp5

0x26e6,	// (0x000305af) popup_note_window_g1_ParamLimits

0x26e6,	// (0x000305af) popup_note_window_g1

0x26f2,	// (0x000305bb) popup_note_window_t1_ParamLimits

0x26f2,	// (0x000305bb) popup_note_window_t1

0x2708,	// (0x000305d1) popup_note_window_t2_ParamLimits

0x2708,	// (0x000305d1) popup_note_window_t2

0x271e,	// (0x000305e7) popup_note_window_t3_ParamLimits

0x271e,	// (0x000305e7) popup_note_window_t3

0x2734,	// (0x000305fd) popup_note_window_t4_ParamLimits

0x2734,	// (0x000305fd) popup_note_window_t4

0x275c,	// (0x00030625) popup_note_window_t5_ParamLimits

0x275c,	// (0x00030625) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d48c) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d48c) popup_note_window_t

0x2780,	// (0x00030649) bg_popup_window_pane_cp6_ParamLimits

0x2780,	// (0x00030649) bg_popup_window_pane_cp6

0x713e,	// (0x00035007) popup_note_image_window_g1_ParamLimits

0x713e,	// (0x00035007) popup_note_image_window_g1

0x714a,	// (0x00035013) popup_note_image_window_g2_ParamLimits

0x714a,	// (0x00035013) popup_note_image_window_g2

0x0001,

0xf88c,	// (0x0003d755) popup_note_image_window_g_ParamLimits

0xf88c,	// (0x0003d755) popup_note_image_window_g

0x7163,	// (0x0003502c) popup_note_image_window_t1_ParamLimits

0x7163,	// (0x0003502c) popup_note_image_window_t1

0x717c,	// (0x00035045) popup_note_image_window_t2_ParamLimits

0x717c,	// (0x00035045) popup_note_image_window_t2

0x7195,	// (0x0003505e) popup_note_image_window_t3_ParamLimits

0x7195,	// (0x0003505e) popup_note_image_window_t3

0x0002,

0xf891,	// (0x0003d75a) popup_note_image_window_t_ParamLimits

0xf891,	// (0x0003d75a) popup_note_image_window_t

0x7029,	// (0x00034ef2) bg_popup_window_pane_cp7_ParamLimits

0x7029,	// (0x00034ef2) bg_popup_window_pane_cp7

0x7059,	// (0x00034f22) popup_note_wait_window_g1_ParamLimits

0x7059,	// (0x00034f22) popup_note_wait_window_g1

0x7065,	// (0x00034f2e) popup_note_wait_window_g2_ParamLimits

0x7065,	// (0x00034f2e) popup_note_wait_window_g2

0x0002,

0xf87a,	// (0x0003d743) popup_note_wait_window_g_ParamLimits

0xf87a,	// (0x0003d743) popup_note_wait_window_g

0x707d,	// (0x00034f46) popup_note_wait_window_t1_ParamLimits

0x707d,	// (0x00034f46) popup_note_wait_window_t1

0x70a4,	// (0x00034f6d) popup_note_wait_window_t2_ParamLimits

0x70a4,	// (0x00034f6d) popup_note_wait_window_t2

0x70c1,	// (0x00034f8a) popup_note_wait_window_t3_ParamLimits

0x70c1,	// (0x00034f8a) popup_note_wait_window_t3

0x70d4,	// (0x00034f9d) popup_note_wait_window_t4_ParamLimits

0x70d4,	// (0x00034f9d) popup_note_wait_window_t4

0x0004,

0xf881,	// (0x0003d74a) popup_note_wait_window_t_ParamLimits

0xf881,	// (0x0003d74a) popup_note_wait_window_t

0x70f9,	// (0x00034fc2) wait_bar_pane_ParamLimits

0x70f9,	// (0x00034fc2) wait_bar_pane

0x2177,	// (0x00030040) wait_anim_pane

0x2177,	// (0x00030040) wait_border_pane

0x202a,	// (0x0002fef3) wait_anim_pane_g1

0x202a,	// (0x0002fef3) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003d615) wait_anim_pane_g

0x6fd9,	// (0x00034ea2) wait_border_pane_g1

0x6fe2,	// (0x00034eab) wait_border_pane_g2

0x6feb,	// (0x00034eb4) wait_border_pane_g3

0x0002,

0xf873,	// (0x0003d73c) wait_border_pane_g

0x6f3b,	// (0x00034e04) bg_popup_window_pane_cp16_ParamLimits

0x6f3b,	// (0x00034e04) bg_popup_window_pane_cp16

0x6f49,	// (0x00034e12) indicator_popup_pane_cp4_ParamLimits

0x6f49,	// (0x00034e12) indicator_popup_pane_cp4

0x6f5d,	// (0x00034e26) popup_query_data_window_t1_ParamLimits

0x6f5d,	// (0x00034e26) popup_query_data_window_t1

0x6f6f,	// (0x00034e38) popup_query_data_window_t2_ParamLimits

0x6f6f,	// (0x00034e38) popup_query_data_window_t2

0x6f88,	// (0x00034e51) popup_query_data_window_t3_ParamLimits

0x6f88,	// (0x00034e51) popup_query_data_window_t3

0x0002,

0xf86c,	// (0x0003d735) popup_query_data_window_t_ParamLimits

0xf86c,	// (0x0003d735) popup_query_data_window_t

0x6fa2,	// (0x00034e6b) query_popup_data_pane_ParamLimits

0x6fa2,	// (0x00034e6b) query_popup_data_pane

0x6fb6,	// (0x00034e7f) query_popup_data_pane_cp1_ParamLimits

0x6fb6,	// (0x00034e7f) query_popup_data_pane_cp1

0x2780,	// (0x00030649) bg_popup_window_pane_cp10_ParamLimits

0x2780,	// (0x00030649) bg_popup_window_pane_cp10

0x6e9e,	// (0x00034d67) indicator_popup_pane_ParamLimits

0x6e9e,	// (0x00034d67) indicator_popup_pane

0x27d7,	// (0x000306a0) popup_query_code_window_t1_ParamLimits

0x27d7,	// (0x000306a0) popup_query_code_window_t1

0x6eb6,	// (0x00034d7f) popup_query_code_window_t2_ParamLimits

0x6eb6,	// (0x00034d7f) popup_query_code_window_t2

0x6ef4,	// (0x00034dbd) popup_query_code_window_t3_ParamLimits

0x6ef4,	// (0x00034dbd) popup_query_code_window_t3

0x0002,

0xf865,	// (0x0003d72e) popup_query_code_window_t_ParamLimits

0xf865,	// (0x0003d72e) popup_query_code_window_t

0x6f23,	// (0x00034dec) query_popup_pane_ParamLimits

0x6f23,	// (0x00034dec) query_popup_pane

0x2780,	// (0x00030649) bg_popup_window_pane_cp15_ParamLimits

0x2780,	// (0x00030649) bg_popup_window_pane_cp15

0x279e,	// (0x00030667) indicator_popup_pane_cp1_ParamLimits

0x279e,	// (0x00030667) indicator_popup_pane_cp1

0x27b1,	// (0x0003067a) indicator_popup_pane_cp2_ParamLimits

0x27b1,	// (0x0003067a) indicator_popup_pane_cp2

0x27c4,	// (0x0003068d) popup_query_data_code_window_g1_ParamLimits

0x27c4,	// (0x0003068d) popup_query_data_code_window_g1

0x27d7,	// (0x000306a0) popup_query_data_code_window_t1_ParamLimits

0x27d7,	// (0x000306a0) popup_query_data_code_window_t1

0x27e9,	// (0x000306b2) popup_query_data_code_window_t2_ParamLimits

0x27e9,	// (0x000306b2) popup_query_data_code_window_t2

0x27fb,	// (0x000306c4) popup_query_data_code_window_t3_ParamLimits

0x27fb,	// (0x000306c4) popup_query_data_code_window_t3

0x2811,	// (0x000306da) popup_query_data_code_window_t4_ParamLimits

0x2811,	// (0x000306da) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003d497) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003d497) popup_query_data_code_window_t

0xa3e5,	// (0x000382ae) list_single_midp_graphic_pane_g3

0x2829,	// (0x000306f2) query_popup_data_pane_cp2_ParamLimits

0x283c,	// (0x00030705) query_popup_pane_cp2_ParamLimits

0x283c,	// (0x00030705) query_popup_pane_cp2

0x2177,	// (0x00030040) bg_popup_window_pane_cp11

0x6e72,	// (0x00034d3b) heading_pane_cp5

0x2920,	// (0x000307e9) listscroll_popup_info_pane

0x2177,	// (0x00030040) input_focus_pane_cp3

0x284f,	// (0x00030718) query_popup_pane_t1

0x285d,	// (0x00030726) list_popup_info_pane_ParamLimits

0x285d,	// (0x00030726) list_popup_info_pane

0x286c,	// (0x00030735) listscroll_popup_info_pane_g1

0x2874,	// (0x0003073d) scroll_pane_cp7

0x287c,	// (0x00030745) popup_info_list_pane_t1_ParamLimits

0x287c,	// (0x00030745) popup_info_list_pane_t1

0x2896,	// (0x0003075f) popup_info_list_pane_t2_ParamLimits

0x2896,	// (0x0003075f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003d4a0) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003d4a0) popup_info_list_pane_t

0x2177,	// (0x00030040) bg_popup_window_pane_cp12

0x7ca4,	// (0x00035b6d) find_popup_pane

0x2383,	// (0x0003024c) bg_popup_window_pane_cp3

0x28b0,	// (0x00030779) heading_pane_cp3

0x28bc,	// (0x00030785) listscroll_popup_graphic_pane

0x2177,	// (0x00030040) bg_popup_window_pane_cp4

0x2918,	// (0x000307e1) heading_pane_cp4

0x2920,	// (0x000307e9) listscroll_popup_colour_pane

0x2928,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2928,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane

0x2938,	// (0x00030801) grid_large_graphic_colour_popup_pane_ParamLimits

0x2938,	// (0x00030801) grid_large_graphic_colour_popup_pane

0x2954,	// (0x0003081d) listscroll_popup_colour_pane_g1_ParamLimits

0x2954,	// (0x0003081d) listscroll_popup_colour_pane_g1

0x296b,	// (0x00030834) listscroll_popup_colour_pane_g2_ParamLimits

0x296b,	// (0x00030834) listscroll_popup_colour_pane_g2

0x297f,	// (0x00030848) listscroll_popup_colour_pane_g3_ParamLimits

0x297f,	// (0x00030848) listscroll_popup_colour_pane_g3

0x298f,	// (0x00030858) listscroll_popup_colour_pane_g4_ParamLimits

0x298f,	// (0x00030858) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003d4a5) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003d4a5) listscroll_popup_colour_pane_g

0x299e,	// (0x00030867) scroll_pane_cp6_ParamLimits

0x299e,	// (0x00030867) scroll_pane_cp6

0x29b0,	// (0x00030879) cell_large_graphic_colour_popup_pane_ParamLimits

0x29b0,	// (0x00030879) cell_large_graphic_colour_popup_pane

0x29cf,	// (0x00030898) cell_large_graphic_colour_none_popup_pane_t1

0x2177,	// (0x00030040) grid_highlight_pane_cp5

0x29de,	// (0x000308a7) cell_large_graphic_colour_popup_pane_g1

0x29e6,	// (0x000308af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003d4ae) cell_large_graphic_colour_popup_pane_g

0x29ee,	// (0x000308b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x29f7,	// (0x000308c0) grid_highlight_pane_cp4

0x29ff,	// (0x000308c8) bg_popup_window_pane_cp8_ParamLimits

0x29ff,	// (0x000308c8) bg_popup_window_pane_cp8

0x2a1a,	// (0x000308e3) popup_snote_single_text_window_g1_ParamLimits

0x2a1a,	// (0x000308e3) popup_snote_single_text_window_g1

0x2a2c,	// (0x000308f5) popup_snote_single_text_window_t1_ParamLimits

0x2a2c,	// (0x000308f5) popup_snote_single_text_window_t1

0x2a3f,	// (0x00030908) popup_snote_single_text_window_t2_ParamLimits

0x2a3f,	// (0x00030908) popup_snote_single_text_window_t2

0x2a52,	// (0x0003091b) popup_snote_single_text_window_t3_ParamLimits

0x2a52,	// (0x0003091b) popup_snote_single_text_window_t3

0x2a8b,	// (0x00030954) popup_snote_single_text_window_t4_ParamLimits

0x2a8b,	// (0x00030954) popup_snote_single_text_window_t4

0x2abf,	// (0x00030988) popup_snote_single_text_window_t5_ParamLimits

0x2abf,	// (0x00030988) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003d4b3) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003d4b3) popup_snote_single_text_window_t

0x2aee,	// (0x000309b7) bg_popup_window_pane_cp9_ParamLimits

0x2aee,	// (0x000309b7) bg_popup_window_pane_cp9

0x2a1a,	// (0x000308e3) popup_snote_single_graphic_window_g1_ParamLimits

0x2a1a,	// (0x000308e3) popup_snote_single_graphic_window_g1

0x2afc,	// (0x000309c5) popup_snote_single_graphic_window_g2_ParamLimits

0x2afc,	// (0x000309c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003d4be) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003d4be) popup_snote_single_graphic_window_g

0x2b08,	// (0x000309d1) popup_snote_single_graphic_window_t1_ParamLimits

0x2b08,	// (0x000309d1) popup_snote_single_graphic_window_t1

0x2b1b,	// (0x000309e4) popup_snote_single_graphic_window_t2_ParamLimits

0x2b1b,	// (0x000309e4) popup_snote_single_graphic_window_t2

0x2a52,	// (0x0003091b) popup_snote_single_graphic_window_t3_ParamLimits

0x2a52,	// (0x0003091b) popup_snote_single_graphic_window_t3

0x2a8b,	// (0x00030954) popup_snote_single_graphic_window_t4_ParamLimits

0x2a8b,	// (0x00030954) popup_snote_single_graphic_window_t4

0x2abf,	// (0x00030988) popup_snote_single_graphic_window_t5_ParamLimits

0x2abf,	// (0x00030988) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003d4c3) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003d4c3) popup_snote_single_graphic_window_t

0x401e,	// (0x00031ee7) grid_graphic_popup_pane_ParamLimits

0x401e,	// (0x00031ee7) grid_graphic_popup_pane

0x4041,	// (0x00031f0a) listscroll_popup_graphic_pane_g1_ParamLimits

0x4041,	// (0x00031f0a) listscroll_popup_graphic_pane_g1

0x4055,	// (0x00031f1e) listscroll_popup_graphic_pane_g2_ParamLimits

0x4055,	// (0x00031f1e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e2,	// (0x0003d8ab) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e2,	// (0x0003d8ab) listscroll_popup_graphic_pane_g

0x6e3a,	// (0x00034d03) scroll_pane_cp5

0x3fd9,	// (0x00031ea2) cell_graphic_popup_pane_ParamLimits

0x3fd9,	// (0x00031ea2) cell_graphic_popup_pane

0x7c4d,	// (0x00035b16) cell_graphic_popup_pane_g1

0x7c55,	// (0x00035b1e) cell_graphic_popup_pane_g2

0x29ee,	// (0x000308b7) cell_graphic_popup_pane_g3

0x0002,

0xf9db,	// (0x0003d8a4) cell_graphic_popup_pane_g

0x7c5e,	// (0x00035b27) cell_graphic_popup_pane_t2

0x29f7,	// (0x000308c0) grid_highlight_pane_cp3

0x2b40,	// (0x00030a09) list_gen_pane_ParamLimits

0x2b40,	// (0x00030a09) list_gen_pane

0x2b71,	// (0x00030a3a) scroll_pane

0x3fac,	// (0x00031e75) bg_list_pane_g1_ParamLimits

0x3fac,	// (0x00031e75) bg_list_pane_g1

0x7c04,	// (0x00035acd) bg_list_pane_g2_ParamLimits

0x7c04,	// (0x00035acd) bg_list_pane_g2

0x7c17,	// (0x00035ae0) bg_list_pane_g3_ParamLimits

0x7c17,	// (0x00035ae0) bg_list_pane_g3

0x7c29,	// (0x00035af2) bg_list_pane_g4_ParamLimits

0x7c29,	// (0x00035af2) bg_list_pane_g4

0x3fc7,	// (0x00031e90) bg_list_pane_g5_ParamLimits

0x3fc7,	// (0x00031e90) bg_list_pane_g5

0x0004,

0xf9d0,	// (0x0003d899) bg_list_pane_g_ParamLimits

0xf9d0,	// (0x0003d899) bg_list_pane_g

0x3f51,	// (0x00031e1a) list_double2_graphic_large_graphic_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double2_graphic_large_graphic_pane

0x3f51,	// (0x00031e1a) list_double2_graphic_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double2_graphic_pane

0x3f51,	// (0x00031e1a) list_double2_large_graphic_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double2_large_graphic_pane

0x3f51,	// (0x00031e1a) list_double2_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double2_pane

0x3f51,	// (0x00031e1a) list_double_graphic_heading_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_graphic_heading_pane

0x3f51,	// (0x00031e1a) list_double_graphic_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_graphic_pane

0x3f51,	// (0x00031e1a) list_double_heading_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_heading_pane

0x3f51,	// (0x00031e1a) list_double_large_graphic_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_large_graphic_pane

0x3f51,	// (0x00031e1a) list_double_number_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_number_pane

0x3f51,	// (0x00031e1a) list_double_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_pane

0x3f51,	// (0x00031e1a) list_double_time_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_double_time_pane

0x3f51,	// (0x00031e1a) list_setting_number_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_setting_number_pane

0x3f51,	// (0x00031e1a) list_setting_pane_ParamLimits

0x3f51,	// (0x00031e1a) list_setting_pane

0x3f62,	// (0x00031e2b) list_single_2graphic_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_2graphic_pane

0x3f62,	// (0x00031e2b) list_single_graphic_heading_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_graphic_heading_pane

0x3f62,	// (0x00031e2b) list_single_graphic_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_graphic_pane

0x3f62,	// (0x00031e2b) list_single_heading_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_heading_pane

0x3f9a,	// (0x00031e63) list_single_large_graphic_pane_ParamLimits

0x3f9a,	// (0x00031e63) list_single_large_graphic_pane

0x3f62,	// (0x00031e2b) list_single_number_heading_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_number_heading_pane

0x3f62,	// (0x00031e2b) list_single_number_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_number_pane

0x3f62,	// (0x00031e2b) list_single_pane_ParamLimits

0x3f62,	// (0x00031e2b) list_single_pane

0x2177,	// (0x00030040) list_highlight_pane_cp1

0xe1f0,	// (0x0003c0b9) list_single_pane_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_pane_g1

0xe1fc,	// (0x0003c0c5) list_single_pane_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_pane_g2

0x0001,

0xf616,	// (0x0003d4df) list_single_pane_g_ParamLimits

0xf616,	// (0x0003d4df) list_single_pane_g

0xd4cc,	// (0x0003b395) list_single_pane_t1_ParamLimits

0xd4cc,	// (0x0003b395) list_single_pane_t1

0xe1f0,	// (0x0003c0b9) list_single_number_pane_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_number_pane_g1

0xe1fc,	// (0x0003c0c5) list_single_number_pane_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003d4df) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003d4df) list_single_number_pane_g

0xd549,	// (0x0003b412) list_single_number_pane_t1_ParamLimits

0xd549,	// (0x0003b412) list_single_number_pane_t1

0x1ded,	// (0x0002fcb6) list_single_number_pane_t2_ParamLimits

0x1ded,	// (0x0002fcb6) list_single_number_pane_t2

0x0001,

0xf991,	// (0x0003d85a) list_single_number_pane_t_ParamLimits

0xf991,	// (0x0003d85a) list_single_number_pane_t

0xd571,	// (0x0003b43a) list_single_graphic_pane_g1_ParamLimits

0xd571,	// (0x0003b43a) list_single_graphic_pane_g1

0xe1f0,	// (0x0003c0b9) list_single_graphic_pane_g2_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_graphic_pane_g2

0xe1fc,	// (0x0003c0c5) list_single_graphic_pane_g3_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003d4ce) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003d4ce) list_single_graphic_pane_g

0xd549,	// (0x0003b412) list_single_graphic_pane_t1_ParamLimits

0xd549,	// (0x0003b412) list_single_graphic_pane_t1

0x184c,	// (0x0002f715) list_single_heading_pane_g1_ParamLimits

0x184c,	// (0x0002f715) list_single_heading_pane_g1

0xe1fc,	// (0x0003c0c5) list_single_heading_pane_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003d4d5) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003d4d5) list_single_heading_pane_g

0x185f,	// (0x0002f728) list_single_heading_pane_t1_ParamLimits

0x185f,	// (0x0002f728) list_single_heading_pane_t1

0x2ba6,	// (0x00030a6f) list_single_heading_pane_t2_ParamLimits

0x2ba6,	// (0x00030a6f) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003d4da) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003d4da) list_single_heading_pane_t

0xe1f0,	// (0x0003c0b9) list_single_number_heading_pane_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_number_heading_pane_g1

0xe1fc,	// (0x0003c0c5) list_single_number_heading_pane_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003d4df) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003d4df) list_single_number_heading_pane_g

0x1875,	// (0x0002f73e) list_single_number_heading_pane_t1_ParamLimits

0x1875,	// (0x0002f73e) list_single_number_heading_pane_t1

0x188b,	// (0x0002f754) list_single_number_heading_pane_t2_ParamLimits

0x188b,	// (0x0002f754) list_single_number_heading_pane_t2

0xdc30,	// (0x0003baf9) list_single_number_heading_pane_t3_ParamLimits

0xdc30,	// (0x0003baf9) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003d4e4) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003d4e4) list_single_number_heading_pane_t

0x189d,	// (0x0002f766) list_single_graphic_heading_pane_g1_ParamLimits

0x189d,	// (0x0002f766) list_single_graphic_heading_pane_g1

0x2bb8,	// (0x00030a81) list_single_graphic_heading_pane_g4_ParamLimits

0x2bb8,	// (0x00030a81) list_single_graphic_heading_pane_g4

0xe1fc,	// (0x0003c0c5) list_single_graphic_heading_pane_g5_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003d4eb) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003d4eb) list_single_graphic_heading_pane_g

0x1875,	// (0x0002f73e) list_single_graphic_heading_pane_t1_ParamLimits

0x1875,	// (0x0002f73e) list_single_graphic_heading_pane_t1

0x18b3,	// (0x0002f77c) list_single_graphic_heading_pane_t2_ParamLimits

0x18b3,	// (0x0002f77c) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003d4f2) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003d4f2) list_single_graphic_heading_pane_t

0xe1c4,	// (0x0003c08d) list_single_large_graphic_pane_g1_ParamLimits

0xe1c4,	// (0x0003c08d) list_single_large_graphic_pane_g1

0xe1d0,	// (0x0003c099) list_single_large_graphic_pane_g2_ParamLimits

0xe1d0,	// (0x0003c099) list_single_large_graphic_pane_g2

0xe1dc,	// (0x0003c0a5) list_single_large_graphic_pane_g3_ParamLimits

0xe1dc,	// (0x0003c0a5) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003d4f7) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003d4f7) list_single_large_graphic_pane_g

0x6fe2,	// (0x00034eab) wait_border_pane_g2_copy1

0xe1e8,	// (0x0003c0b1) list_single_large_graphic_pane_g4_cp2

0xd4b6,	// (0x0003b37f) list_single_large_graphic_pane_t1_ParamLimits

0xd4b6,	// (0x0003b37f) list_single_large_graphic_pane_t1

0x2bc9,	// (0x00030a92) list_double_pane_g1_ParamLimits

0x2bc9,	// (0x00030a92) list_double_pane_g1

0x2bd5,	// (0x00030a9e) list_double_pane_g2_ParamLimits

0x2bd5,	// (0x00030a9e) list_double_pane_g2

0x0001,

0xf635,	// (0x0003d4fe) list_double_pane_g_ParamLimits

0xf635,	// (0x0003d4fe) list_double_pane_g

0x18cb,	// (0x0002f794) list_double_pane_t1_ParamLimits

0x18cb,	// (0x0002f794) list_double_pane_t1

0x18e1,	// (0x0002f7aa) list_double_pane_t2_ParamLimits

0x18e1,	// (0x0002f7aa) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003d503) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003d503) list_double_pane_t

0x18f3,	// (0x0002f7bc) list_double2_pane_g1_ParamLimits

0x18f3,	// (0x0002f7bc) list_double2_pane_g1

0x1904,	// (0x0002f7cd) list_double2_pane_g2_ParamLimits

0x1904,	// (0x0002f7cd) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003d508) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003d508) list_double2_pane_g

0x1910,	// (0x0002f7d9) list_double2_pane_t1_ParamLimits

0x1910,	// (0x0002f7d9) list_double2_pane_t1

0x1926,	// (0x0002f7ef) list_double2_pane_t2_ParamLimits

0x1926,	// (0x0002f7ef) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003d50d) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003d50d) list_double2_pane_t

0x2bc9,	// (0x00030a92) list_double_number_pane_g1_ParamLimits

0x2bc9,	// (0x00030a92) list_double_number_pane_g1

0x2bd5,	// (0x00030a9e) list_double_number_pane_g2_ParamLimits

0x2bd5,	// (0x00030a9e) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003d4fe) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003d4fe) list_double_number_pane_g

0x1938,	// (0x0002f801) list_double_number_pane_t1_ParamLimits

0x1938,	// (0x0002f801) list_double_number_pane_t1

0x194a,	// (0x0002f813) list_double_number_pane_t2_ParamLimits

0x194a,	// (0x0002f813) list_double_number_pane_t2

0x1960,	// (0x0002f829) list_double_number_pane_t3_ParamLimits

0x1960,	// (0x0002f829) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003d512) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003d512) list_double_number_pane_t

0xd69f,	// (0x0003b568) list_double_graphic_pane_g1_ParamLimits

0xd69f,	// (0x0003b568) list_double_graphic_pane_g1

0x2be1,	// (0x00030aaa) list_double_graphic_pane_g2_ParamLimits

0x2be1,	// (0x00030aaa) list_double_graphic_pane_g2

0x2bf0,	// (0x00030ab9) list_double_graphic_pane_g3_ParamLimits

0x2bf0,	// (0x00030ab9) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003d519) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003d519) list_double_graphic_pane_g

0x197e,	// (0x0002f847) list_double_graphic_pane_t1_ParamLimits

0x197e,	// (0x0002f847) list_double_graphic_pane_t1

0x1994,	// (0x0002f85d) list_double_graphic_pane_t2_ParamLimits

0x1994,	// (0x0002f85d) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003d522) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003d522) list_double_graphic_pane_t

0xd3f3,	// (0x0003b2bc) list_double2_graphic_pane_g1_ParamLimits

0xd3f3,	// (0x0003b2bc) list_double2_graphic_pane_g1

0xe19d,	// (0x0003c066) list_double2_graphic_pane_g2_ParamLimits

0xe19d,	// (0x0003c066) list_double2_graphic_pane_g2

0xe1a9,	// (0x0003c072) list_double2_graphic_pane_g3_ParamLimits

0xe1a9,	// (0x0003c072) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003d527) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003d527) list_double2_graphic_pane_g

0xd3ff,	// (0x0003b2c8) list_double2_graphic_pane_t1_ParamLimits

0xd3ff,	// (0x0003b2c8) list_double2_graphic_pane_t1

0x19a6,	// (0x0002f86f) list_double2_graphic_pane_t2_ParamLimits

0x19a6,	// (0x0002f86f) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003d52e) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003d52e) list_double2_graphic_pane_t

0x19b8,	// (0x0002f881) list_double_large_graphic_pane_g1_ParamLimits

0x19b8,	// (0x0002f881) list_double_large_graphic_pane_g1

0x19dc,	// (0x0002f8a5) list_double_large_graphic_pane_g2_ParamLimits

0x19dc,	// (0x0002f8a5) list_double_large_graphic_pane_g2

0x2bd5,	// (0x00030a9e) list_double_large_graphic_pane_g3_ParamLimits

0x2bd5,	// (0x00030a9e) list_double_large_graphic_pane_g3

0x19f2,	// (0x0002f8bb) list_double_large_graphic_pane_g4_ParamLimits

0x19f2,	// (0x0002f8bb) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003d533) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003d533) list_double_large_graphic_pane_g

0x1a03,	// (0x0002f8cc) list_double_large_graphic_pane_t1_ParamLimits

0x1a03,	// (0x0002f8cc) list_double_large_graphic_pane_t1

0x1a1c,	// (0x0002f8e5) list_double_large_graphic_pane_t2_ParamLimits

0x1a1c,	// (0x0002f8e5) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003d53e) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003d53e) list_double_large_graphic_pane_t

0x2bfc,	// (0x00030ac5) list_double2_large_graphic_pane_g1_ParamLimits

0x2bfc,	// (0x00030ac5) list_double2_large_graphic_pane_g1

0x1a2e,	// (0x0002f8f7) list_double2_large_graphic_pane_g2_ParamLimits

0x1a2e,	// (0x0002f8f7) list_double2_large_graphic_pane_g2

0xe1a9,	// (0x0003c072) list_double2_large_graphic_pane_g3_ParamLimits

0xe1a9,	// (0x0003c072) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003d543) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003d543) list_double2_large_graphic_pane_g

0xd450,	// (0x0003b319) list_double2_large_graphic_pane_t1_ParamLimits

0xd450,	// (0x0003b319) list_double2_large_graphic_pane_t1

0x1a3f,	// (0x0002f908) list_double2_large_graphic_pane_t2_ParamLimits

0x1a3f,	// (0x0002f908) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003d54a) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003d54a) list_double2_large_graphic_pane_t

0x1a51,	// (0x0002f91a) list_double_heading_pane_g1_ParamLimits

0x1a51,	// (0x0002f91a) list_double_heading_pane_g1

0x2c08,	// (0x00030ad1) list_double_heading_pane_g2_ParamLimits

0x2c08,	// (0x00030ad1) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003d54f) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003d54f) list_double_heading_pane_g

0x1a62,	// (0x0002f92b) list_double_heading_pane_t1_ParamLimits

0x1a62,	// (0x0002f92b) list_double_heading_pane_t1

0x1926,	// (0x0002f7ef) list_double_heading_pane_t2_ParamLimits

0x1926,	// (0x0002f7ef) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003d554) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003d554) list_double_heading_pane_t

0xd69f,	// (0x0003b568) list_double_graphic_heading_pane_g1_ParamLimits

0xd69f,	// (0x0003b568) list_double_graphic_heading_pane_g1

0x1a51,	// (0x0002f91a) list_double_graphic_heading_pane_g2_ParamLimits

0x1a51,	// (0x0002f91a) list_double_graphic_heading_pane_g2

0x2c08,	// (0x00030ad1) list_double_graphic_heading_pane_g3_ParamLimits

0x2c08,	// (0x00030ad1) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003d559) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003d559) list_double_graphic_heading_pane_g

0x1a78,	// (0x0002f941) list_double_graphic_heading_pane_t1_ParamLimits

0x1a78,	// (0x0002f941) list_double_graphic_heading_pane_t1

0x19a6,	// (0x0002f86f) list_double_graphic_heading_pane_t2_ParamLimits

0x19a6,	// (0x0002f86f) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003d560) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003d560) list_double_graphic_heading_pane_t

0x1a8e,	// (0x0002f957) list_double_time_pane_g1_ParamLimits

0x1a8e,	// (0x0002f957) list_double_time_pane_g1

0x1a9f,	// (0x0002f968) list_double_time_pane_g2_ParamLimits

0x1a9f,	// (0x0002f968) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003d565) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003d565) list_double_time_pane_g

0x1aab,	// (0x0002f974) list_double_time_pane_t1_ParamLimits

0x1aab,	// (0x0002f974) list_double_time_pane_t1

0x1ac1,	// (0x0002f98a) list_double_time_pane_t2_ParamLimits

0x1ac1,	// (0x0002f98a) list_double_time_pane_t2

0x1ad3,	// (0x0002f99c) list_double_time_pane_t3_ParamLimits

0x1ad3,	// (0x0002f99c) list_double_time_pane_t3

0x1ae5,	// (0x0002f9ae) list_double_time_pane_t4_ParamLimits

0x1ae5,	// (0x0002f9ae) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003d56a) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003d56a) list_double_time_pane_t

0xee46,	// (0x0003cd0f) list_setting_pane_g1_ParamLimits

0xee46,	// (0x0003cd0f) list_setting_pane_g1

0xd6d0,	// (0x0003b599) list_setting_pane_g2_ParamLimits

0xd6d0,	// (0x0003b599) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003d573) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003d573) list_setting_pane_g

0x1af7,	// (0x0002f9c0) list_setting_pane_t1_ParamLimits

0x1af7,	// (0x0002f9c0) list_setting_pane_t1

0x1b11,	// (0x0002f9da) list_setting_pane_t2_ParamLimits

0x1b11,	// (0x0002f9da) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003d578) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003d578) list_setting_pane_t

0x1b4e,	// (0x0002fa17) set_value_pane_cp_ParamLimits

0x1b4e,	// (0x0002fa17) set_value_pane_cp

0x1b5a,	// (0x0002fa23) list_setting_number_pane_g1_ParamLimits

0x1b5a,	// (0x0002fa23) list_setting_number_pane_g1

0x1b66,	// (0x0002fa2f) list_setting_number_pane_g2_ParamLimits

0x1b66,	// (0x0002fa2f) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003d57f) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003d57f) list_setting_number_pane_g

0x1b72,	// (0x0002fa3b) list_setting_number_pane_t1_ParamLimits

0x1b72,	// (0x0002fa3b) list_setting_number_pane_t1

0x1b8b,	// (0x0002fa54) list_setting_number_pane_t2_ParamLimits

0x1b8b,	// (0x0002fa54) list_setting_number_pane_t2

0x1ba5,	// (0x0002fa6e) list_setting_number_pane_t3_ParamLimits

0x1ba5,	// (0x0002fa6e) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003d584) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003d584) list_setting_number_pane_t

0x1b4e,	// (0x0002fa17) set_value_pane_ParamLimits

0x1b4e,	// (0x0002fa17) set_value_pane

0x5a71,	// (0x0003393a) bg_set_opt_pane_ParamLimits

0x5a71,	// (0x0003393a) bg_set_opt_pane

0xd821,	// (0x0003b6ea) set_value_pane_t1

0x5a92,	// (0x0003395b) slider_set_pane_cp3

0x5a9b,	// (0x00033964) volume_small_pane_cp

0x5aa4,	// (0x0003396d) list_form_gen_pane

0x2b95,	// (0x00030a5e) scroll_pane_cp8

0x1be8,	// (0x0002fab1) form_field_data_pane_ParamLimits

0x1be8,	// (0x0002fab1) form_field_data_pane

0x1bff,	// (0x0002fac8) form_field_data_wide_pane_ParamLimits

0x1bff,	// (0x0002fac8) form_field_data_wide_pane

0x1c1f,	// (0x0002fae8) form_field_popup_pane_ParamLimits

0x1c1f,	// (0x0002fae8) form_field_popup_pane

0x1c37,	// (0x0002fb00) form_field_popup_wide_pane_ParamLimits

0x1c37,	// (0x0002fb00) form_field_popup_wide_pane

0xd8ad,	// (0x0003b776) form_field_slider_pane_ParamLimits

0xd8ad,	// (0x0003b776) form_field_slider_pane

0xd8c0,	// (0x0003b789) form_field_slider_wide_pane_ParamLimits

0xd8c0,	// (0x0003b789) form_field_slider_wide_pane

0x5aad,	// (0x00033976) data_form_pane

0x1c58,	// (0x0002fb21) form_field_data_pane_t1

0x5ab9,	// (0x00033982) input_focus_pane

0x5ac7,	// (0x00033990) data_form_wide_pane

0xd8ff,	// (0x0003b7c8) form_field_data_wide_pane_t1

0x2a0c,	// (0x000308d5) input_focus_pane_cp6

0x1c70,	// (0x0002fb39) form_field_popup_pane_t1

0x5ab9,	// (0x00033982) input_focus_pane_cp7

0x5aad,	// (0x00033976) list_form_pane

0xd941,	// (0x0003b80a) form_field_popup_wide_pane_t1

0x5ab9,	// (0x00033982) input_focus_pane_cp8

0x5ae7,	// (0x000339b0) list_form_wide_pane

0x1c90,	// (0x0002fb59) form_field_slider_pane_t1_ParamLimits

0x1c90,	// (0x0002fb59) form_field_slider_pane_t1

0x1ca6,	// (0x0002fb6f) form_field_slider_pane_t2_ParamLimits

0x1ca6,	// (0x0002fb6f) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003d594) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003d594) form_field_slider_pane_t

0x2339,	// (0x00030202) input_focus_pane_cp9_ParamLimits

0x2339,	// (0x00030202) input_focus_pane_cp9

0x1cbb,	// (0x0002fb84) slider_cont_pane_ParamLimits

0x1cbb,	// (0x0002fb84) slider_cont_pane

0x5af6,	// (0x000339bf) form_field_slider_wide_pane_t1_ParamLimits

0x5af6,	// (0x000339bf) form_field_slider_wide_pane_t1

0xd99d,	// (0x0003b866) form_field_slider_wide_pane_t2_ParamLimits

0xd99d,	// (0x0003b866) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003d599) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003d599) form_field_slider_wide_pane_t

0x2339,	// (0x00030202) input_focus_pane_cp10_ParamLimits

0x2339,	// (0x00030202) input_focus_pane_cp10

0x1ccf,	// (0x0002fb98) slider_cont_pane_cp1_ParamLimits

0x1ccf,	// (0x0002fb98) slider_cont_pane_cp1

0x1ce5,	// (0x0002fbae) slider_form_pane_cp

0x5b08,	// (0x000339d1) input_focus_pane_g1

0x5b10,	// (0x000339d9) input_focus_pane_g2

0x5b18,	// (0x000339e1) input_focus_pane_g3

0x5b20,	// (0x000339e9) input_focus_pane_g4

0x5b28,	// (0x000339f1) input_focus_pane_g5

0x5b30,	// (0x000339f9) input_focus_pane_g6

0x5b38,	// (0x00033a01) input_focus_pane_g7

0x5b40,	// (0x00033a09) input_focus_pane_g8

0x5b48,	// (0x00033a11) input_focus_pane_g9

0x202a,	// (0x0002fef3) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003d59e) input_focus_pane_g

0x6feb,	// (0x00034eb4) wait_border_pane_g3_copy1

0x1ced,	// (0x0002fbb6) data_form_pane_t1

0x202a,	// (0x0002fef3) wait_anim_pane_g1_copy1

0x1dff,	// (0x0002fcc8) data_form_wide_pane_t1

0x1d05,	// (0x0002fbce) list_form_graphic_pane_cp_ParamLimits

0x1d05,	// (0x0002fbce) list_form_graphic_pane_cp

0x7baa,	// (0x00035a73) slider_form_pane_g1

0x7bb3,	// (0x00035a7c) slider_form_pane_g2

0x0006,

0xf9c1,	// (0x0003d88a) slider_form_pane_g

0xd9e7,	// (0x0003b8b0) list_form_graphic_pane_ParamLimits

0xd9e7,	// (0x0003b8b0) list_form_graphic_pane

0xda11,	// (0x0003b8da) list_form_graphic_pane_g1

0xda19,	// (0x0003b8e2) list_form_graphic_pane_t1_ParamLimits

0xda19,	// (0x0003b8e2) list_form_graphic_pane_t1

0x2383,	// (0x0003024c) list_highlight_pane_cp5_ParamLimits

0x2383,	// (0x0003024c) list_highlight_pane_cp5

0x1d18,	// (0x0002fbe1) find_pane_g1

0x5b50,	// (0x00033a19) input_find_pane

0x1d23,	// (0x0002fbec) input_find_pane_g1_ParamLimits

0x1d23,	// (0x0002fbec) input_find_pane_g1

0x1d2f,	// (0x0002fbf8) input_find_pane_t1_ParamLimits

0x1d2f,	// (0x0002fbf8) input_find_pane_t1

0x1d44,	// (0x0002fc0d) input_find_pane_t2_ParamLimits

0x1d44,	// (0x0002fc0d) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003d5b3) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003d5b3) input_find_pane_t

0x5b59,	// (0x00033a22) input_focus_pane_cp5_ParamLimits

0x5b59,	// (0x00033a22) input_focus_pane_cp5

0x2339,	// (0x00030202) bg_popup_window_pane_cp2_ParamLimits

0x2339,	// (0x00030202) bg_popup_window_pane_cp2

0x5b73,	// (0x00033a3c) listscroll_menu_pane_ParamLimits

0x5b73,	// (0x00033a3c) listscroll_menu_pane

0x5b7f,	// (0x00033a48) popup_submenu_window_ParamLimits

0x5b7f,	// (0x00033a48) popup_submenu_window

0x5ba3,	// (0x00033a6c) find_popup_pane_g1

0x5bab,	// (0x00033a74) input_popup_find_pane_cp

0x5b59,	// (0x00033a22) input_focus_pane_cp4_ParamLimits

0x5b59,	// (0x00033a22) input_focus_pane_cp4

0x5bb5,	// (0x00033a7e) input_popup_find_pane_t1_ParamLimits

0x5bb5,	// (0x00033a7e) input_popup_find_pane_t1

0x2177,	// (0x00030040) bg_popup_sub_pane_cp

0x5be3,	// (0x00033aac) listscroll_popup_sub_pane

0x5beb,	// (0x00033ab4) list_submenu_pane_ParamLimits

0x5beb,	// (0x00033ab4) list_submenu_pane

0x5bfc,	// (0x00033ac5) scroll_pane_cp4

0x5c04,	// (0x00033acd) list_single_popup_submenu_pane_ParamLimits

0x5c04,	// (0x00033acd) list_single_popup_submenu_pane

0x5c18,	// (0x00033ae1) list_single_popup_submenu_pane_g1

0x5c20,	// (0x00033ae9) list_single_popup_submenu_pane_t1_ParamLimits

0x5c20,	// (0x00033ae9) list_single_popup_submenu_pane_t1

0x2339,	// (0x00030202) bg_active_tab_pane_cp1_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp1

0x6be7,	// (0x00034ab0) tabs_2_active_pane_g1

0x2c2c,	// (0x00030af5) tabs_2_active_pane_t1

0x2339,	// (0x00030202) bg_passive_tab_pane_cp1_ParamLimits

0x2339,	// (0x00030202) bg_passive_tab_pane_cp1

0x6be7,	// (0x00034ab0) tabs_2_passive_pane_g1

0x2c2c,	// (0x00030af5) tabs_2_passive_pane_t1

0x2383,	// (0x0003024c) bg_active_tab_pane_cp4

0x2c42,	// (0x00030b0b) tabs_2_long_active_pane_t1

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp4

0xa3ed,	// (0x000382b6) list_single_midp_graphic_pane_g4_ParamLimits

0x2383,	// (0x0003024c) bg_active_tab_pane_cp5

0x2c59,	// (0x00030b22) tabs_3_long_active_pane_t1

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp5

0xa3ed,	// (0x000382b6) list_single_midp_graphic_pane_g4

0x2383,	// (0x0003024c) bg_popup_window_pane_cp13_ParamLimits

0x2383,	// (0x0003024c) bg_popup_window_pane_cp13

0x5c4a,	// (0x00033b13) listscroll_popup_fast_pane_ParamLimits

0x5c4a,	// (0x00033b13) listscroll_popup_fast_pane

0x5c59,	// (0x00033b22) grid_popup_fast_pane_ParamLimits

0x5c59,	// (0x00033b22) grid_popup_fast_pane

0x5c6b,	// (0x00033b34) scroll_pane_cp9_ParamLimits

0x5c6b,	// (0x00033b34) scroll_pane_cp9

0xc57d,	// (0x0003a446) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc57d,	// (0x0003a446) list_single_graphic_hl_pane_t1_cp2

0x5c8f,	// (0x00033b58) input_focus_pane_cp20_ParamLimits

0x5c8f,	// (0x00033b58) input_focus_pane_cp20

0x5c9d,	// (0x00033b66) query_popup_data_pane_t1_ParamLimits

0x5c9d,	// (0x00033b66) query_popup_data_pane_t1

0x5cb0,	// (0x00033b79) query_popup_data_pane_t2_ParamLimits

0x5cb0,	// (0x00033b79) query_popup_data_pane_t2

0x5cf6,	// (0x00033bbf) query_popup_data_pane_t3_ParamLimits

0x5cf6,	// (0x00033bbf) query_popup_data_pane_t3

0x5d37,	// (0x00033c00) query_popup_data_pane_t4_ParamLimits

0x5d37,	// (0x00033c00) query_popup_data_pane_t4

0x5d73,	// (0x00033c3c) query_popup_data_pane_t5_ParamLimits

0x5d73,	// (0x00033c3c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003d5b8) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003d5b8) query_popup_data_pane_t

0x5b08,	// (0x000339d1) bg_set_opt_pane_g1

0x5b10,	// (0x000339d9) bg_set_opt_pane_g2

0x5b18,	// (0x000339e1) bg_set_opt_pane_g3

0x5b20,	// (0x000339e9) bg_set_opt_pane_g4

0x5b28,	// (0x000339f1) bg_set_opt_pane_g5

0x5b30,	// (0x000339f9) bg_set_opt_pane_g6

0x5b38,	// (0x00033a01) bg_set_opt_pane_g7

0x5b40,	// (0x00033a09) bg_set_opt_pane_g8

0x5b48,	// (0x00033a11) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003d5c3) bg_set_opt_pane_g

0x98eb,	// (0x000377b4) control_top_pane_stacon_ParamLimits

0x98eb,	// (0x000377b4) control_top_pane_stacon

0x993e,	// (0x00037807) signal_pane_stacon_ParamLimits

0x993e,	// (0x00037807) signal_pane_stacon

0x6173,	// (0x0003403c) stacon_top_pane_g1_ParamLimits

0x6173,	// (0x0003403c) stacon_top_pane_g1

0x9963,	// (0x0003782c) title_pane_stacon_ParamLimits

0x9963,	// (0x0003782c) title_pane_stacon

0x9985,	// (0x0003784e) uni_indicator_pane_stacon_ParamLimits

0x9985,	// (0x0003784e) uni_indicator_pane_stacon

0x999a,	// (0x00037863) battery_pane_stacon_ParamLimits

0x999a,	// (0x00037863) battery_pane_stacon

0x99da,	// (0x000378a3) control_bottom_pane_stacon_ParamLimits

0x99da,	// (0x000378a3) control_bottom_pane_stacon

0x99f9,	// (0x000378c2) navi_pane_stacon_ParamLimits

0x99f9,	// (0x000378c2) navi_pane_stacon

0x6195,	// (0x0003405e) stacon_bottom_pane_g1_ParamLimits

0x6195,	// (0x0003405e) stacon_bottom_pane_g1

0x5daa,	// (0x00033c73) aid_levels_signal_lsc_ParamLimits

0x5daa,	// (0x00033c73) aid_levels_signal_lsc

0x952c,	// (0x000373f5) signal_pane_stacon_g1_ParamLimits

0x952c,	// (0x000373f5) signal_pane_stacon_g1

0x9538,	// (0x00037401) signal_pane_stacon_g2_ParamLimits

0x9538,	// (0x00037401) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003d5d6) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003d5d6) signal_pane_stacon_g

0x956c,	// (0x00037435) title_pane_stacon_t1_ParamLimits

0x956c,	// (0x00037435) title_pane_stacon_t1

0x5dd8,	// (0x00033ca1) uni_indicator_pane_stacon_g1

0x5de2,	// (0x00033cab) uni_indicator_pane_stacon_g2

0x5dc4,	// (0x00033c8d) uni_indicator_pane_stacon_g3

0x5dce,	// (0x00033c97) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003d5e2) uni_indicator_pane_stacon_g

0x9591,	// (0x0003745a) control_top_pane_stacon_g1

0x9599,	// (0x00037462) control_top_pane_stacon_t1_ParamLimits

0x9599,	// (0x00037462) control_top_pane_stacon_t1

0x5dec,	// (0x00033cb5) aid_levels_battery_lsc_ParamLimits

0x5dec,	// (0x00033cb5) aid_levels_battery_lsc

0x95ca,	// (0x00037493) battery_pane_stacon_g1_ParamLimits

0x95ca,	// (0x00037493) battery_pane_stacon_g1

0x95d6,	// (0x0003749f) battery_pane_stacon_g2_ParamLimits

0x95d6,	// (0x0003749f) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003d5eb) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003d5eb) battery_pane_stacon_g

0x9605,	// (0x000374ce) navi_icon_pane_stacon

0x9615,	// (0x000374de) navi_navi_pane_stacon

0x9605,	// (0x000374ce) navi_text_pane_stacon

0x9591,	// (0x0003745a) control_bottom_pane_stacon_g1

0x9625,	// (0x000374ee) control_bottom_pane_stacon_t1_ParamLimits

0x9625,	// (0x000374ee) control_bottom_pane_stacon_t1

0x2c6f,	// (0x00030b38) grid_app_pane_ParamLimits

0x2c6f,	// (0x00030b38) grid_app_pane

0x2c9d,	// (0x00030b66) scroll_pane_cp15_ParamLimits

0x2c9d,	// (0x00030b66) scroll_pane_cp15

0x2cb4,	// (0x00030b7d) cell_app_pane_ParamLimits

0x2cb4,	// (0x00030b7d) cell_app_pane

0x2cf3,	// (0x00030bbc) cell_app_pane_g1_ParamLimits

0x2cf3,	// (0x00030bbc) cell_app_pane_g1

0x5e14,	// (0x00033cdd) cell_app_pane_g2_ParamLimits

0x5e14,	// (0x00033cdd) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003d5f0) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003d5f0) cell_app_pane_g

0x5e20,	// (0x00033ce9) cell_app_pane_t1_ParamLimits

0x5e20,	// (0x00033ce9) cell_app_pane_t1

0x5e32,	// (0x00033cfb) grid_highlight_pane_ParamLimits

0x5e32,	// (0x00033cfb) grid_highlight_pane

0x5b08,	// (0x000339d1) cell_highlight_pane_g1

0x5b10,	// (0x000339d9) cell_highlight_pane_g2

0x5b18,	// (0x000339e1) cell_highlight_pane_g3

0x5b20,	// (0x000339e9) cell_highlight_pane_g4

0x5b28,	// (0x000339f1) cell_highlight_pane_g5

0x5b30,	// (0x000339f9) cell_highlight_pane_g6

0x5b38,	// (0x00033a01) cell_highlight_pane_g7

0x5b40,	// (0x00033a09) cell_highlight_pane_g8

0x5b48,	// (0x00033a11) cell_highlight_pane_g9

0x202a,	// (0x0002fef3) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003d59e) cell_highlight_pane_g

0x5e43,	// (0x00033d0c) bg_scroll_pane

0x96de,	// (0x000375a7) scroll_handle_pane

0x5e8a,	// (0x00033d53) scroll_bg_pane_g1

0x5e9f,	// (0x00033d68) scroll_bg_pane_g2

0x5eb7,	// (0x00033d80) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003d5f5) scroll_bg_pane_g

0x5ecc,	// (0x00033d95) scroll_handle_focus_pane_ParamLimits

0x5ecc,	// (0x00033d95) scroll_handle_focus_pane

0x5e8a,	// (0x00033d53) scroll_handle_pane_g1

0x5ed9,	// (0x00033da2) scroll_handle_pane_g2

0x5eb7,	// (0x00033d80) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003d5fc) scroll_handle_pane_g

0x5b59,	// (0x00033a22) bg_popup_sub_pane_cp21_ParamLimits

0x5b59,	// (0x00033a22) bg_popup_sub_pane_cp21

0x5eed,	// (0x00033db6) popup_fep_japan_predictive_window_t1_ParamLimits

0x5eed,	// (0x00033db6) popup_fep_japan_predictive_window_t1

0x5f04,	// (0x00033dcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x5f04,	// (0x00033dcd) popup_fep_japan_predictive_window_t2

0x5f37,	// (0x00033e00) popup_fep_japan_predictive_window_t3_ParamLimits

0x5f37,	// (0x00033e00) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003d603) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003d603) popup_fep_japan_predictive_window_t

0x2177,	// (0x00030040) bg_popup_sub_pane_cp23

0x5f6e,	// (0x00033e37) listscroll_japin_cand_pane

0x5f76,	// (0x00033e3f) popup_fep_japan_candidate_window_t1

0x5f84,	// (0x00033e4d) candidate_pane_ParamLimits

0x5f84,	// (0x00033e4d) candidate_pane

0x5f97,	// (0x00033e60) scroll_pane_cp30

0x5f9f,	// (0x00033e68) list_single_popup_jap_candidate_pane_ParamLimits

0x5f9f,	// (0x00033e68) list_single_popup_jap_candidate_pane

0x2177,	// (0x00030040) list_highlight_pane_cp30

0x5fb4,	// (0x00033e7d) list_single_popup_jap_candidate_pane_t1

0x2d20,	// (0x00030be9) level_1_signal

0x2d32,	// (0x00030bfb) level_2_signal

0x2d45,	// (0x00030c0e) level_3_signal

0x2d58,	// (0x00030c21) level_4_signal

0x2d6b,	// (0x00030c34) level_5_signal

0x2d7e,	// (0x00030c47) level_6_signal

0x2d91,	// (0x00030c5a) level_7_signal

0x2d20,	// (0x00030be9) level_1_battery

0x2d32,	// (0x00030bfb) level_2_battery

0x2d45,	// (0x00030c0e) level_3_battery

0x2d58,	// (0x00030c21) level_4_battery

0x2d6b,	// (0x00030c34) level_5_battery

0x2d7e,	// (0x00030c47) level_6_battery

0x2d91,	// (0x00030c5a) level_7_battery

0x5fdb,	// (0x00033ea4) list_menu_pane_ParamLimits

0x5fdb,	// (0x00033ea4) list_menu_pane

0x5fec,	// (0x00033eb5) scroll_pane_cp25_ParamLimits

0x5fec,	// (0x00033eb5) scroll_pane_cp25

0x2da4,	// (0x00030c6d) list_double2_graphic_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double2_graphic_pane_cp2

0x2da4,	// (0x00030c6d) list_double2_large_graphic_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double2_large_graphic_pane_cp2

0x2da4,	// (0x00030c6d) list_double2_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double2_pane_cp2

0x2da4,	// (0x00030c6d) list_double_graphic_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double_graphic_pane_cp2

0x2da4,	// (0x00030c6d) list_double_large_graphic_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double_large_graphic_pane_cp2

0x2da4,	// (0x00030c6d) list_double_number_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double_number_pane_cp2

0x2da4,	// (0x00030c6d) list_double_pane_cp2_ParamLimits

0x2da4,	// (0x00030c6d) list_double_pane_cp2

0x2dbf,	// (0x00030c88) list_single_2graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_2graphic_pane_cp2

0x2dbf,	// (0x00030c88) list_single_graphic_heading_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_graphic_heading_pane_cp2

0x2dbf,	// (0x00030c88) list_single_graphic_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_graphic_pane_cp2

0x2dbf,	// (0x00030c88) list_single_heading_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_heading_pane_cp2

0x2dd0,	// (0x00030c99) list_single_large_graphic_pane_cp2_ParamLimits

0x2dd0,	// (0x00030c99) list_single_large_graphic_pane_cp2

0x2dbf,	// (0x00030c88) list_single_number_heading_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_number_heading_pane_cp2

0x2dbf,	// (0x00030c88) list_single_number_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_number_pane_cp2

0x2dbf,	// (0x00030c88) list_single_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_pane_cp2

0x600e,	// (0x00033ed7) bg_popup_sub_pane_cp22

0x985b,	// (0x00037724) popup_side_volume_key_window_g1

0x987f,	// (0x00037748) popup_side_volume_key_window_t1

0x989b,	// (0x00037764) volume_small_pane_cp1

0x2339,	// (0x00030202) bg_popup_sub_pane_cp24_ParamLimits

0x2339,	// (0x00030202) bg_popup_sub_pane_cp24

0x6024,	// (0x00033eed) fep_china_uni_candidate_pane_ParamLimits

0x6024,	// (0x00033eed) fep_china_uni_candidate_pane

0x6038,	// (0x00033f01) fep_china_uni_entry_pane

0x6048,	// (0x00033f11) popup_fep_china_uni_window_g1

0x6064,	// (0x00033f2d) fep_china_uni_entry_pane_g1

0x606c,	// (0x00033f35) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003d630) fep_china_uni_entry_pane_g

0x6074,	// (0x00033f3d) fep_entry_item_pane

0x607e,	// (0x00033f47) fep_candidate_item_pane

0x6086,	// (0x00033f4f) fep_china_uni_candidate_pane_g1

0x608e,	// (0x00033f57) fep_china_uni_candidate_pane_g2

0x6096,	// (0x00033f5f) fep_china_uni_candidate_pane_g3

0x609e,	// (0x00033f67) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003d635) fep_china_uni_candidate_pane_g

0x202a,	// (0x0002fef3) fep_entry_item_pane_g1

0x60a6,	// (0x00033f6f) fep_entry_item_pane_t1_ParamLimits

0x60a6,	// (0x00033f6f) fep_entry_item_pane_t1

0x60bc,	// (0x00033f85) fep_candidate_item_pane_t1_ParamLimits

0x60bc,	// (0x00033f85) fep_candidate_item_pane_t1

0x60d1,	// (0x00033f9a) fep_candidate_item_pane_t2_ParamLimits

0x60d1,	// (0x00033f9a) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003d63e) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003d63e) fep_candidate_item_pane_t

0x2383,	// (0x0003024c) list_highlight_pane_cp31_ParamLimits

0x2383,	// (0x0003024c) list_highlight_pane_cp31

0x60e3,	// (0x00033fac) level_1_signal_lsc

0x60ec,	// (0x00033fb5) level_2_signal_lsc

0x60f5,	// (0x00033fbe) level_3_signal_lsc

0x60fe,	// (0x00033fc7) level_4_signal_lsc

0x6107,	// (0x00033fd0) level_5_signal_lsc

0x6110,	// (0x00033fd9) level_6_signal_lsc

0x6119,	// (0x00033fe2) level_7_signal_lsc

0x6119,	// (0x00033fe2) level_1_battery_lsc

0x6122,	// (0x00033feb) level_2_battery_lsc

0x612b,	// (0x00033ff4) level_3_battery_lsc

0x6134,	// (0x00033ffd) level_4_battery_lsc

0x613d,	// (0x00034006) level_5_battery_lsc

0x6146,	// (0x0003400f) level_6_battery_lsc

0x60e3,	// (0x00033fac) level_7_battery_lsc

0x614f,	// (0x00034018) scroll_handle_focus_pane_g1

0x6158,	// (0x00034021) scroll_handle_focus_pane_g2

0x6161,	// (0x0003402a) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003d643) scroll_handle_focus_pane_g

0x1d59,	// (0x0002fc22) list_single_2graphic_pane_g1_ParamLimits

0x1d59,	// (0x0002fc22) list_single_2graphic_pane_g1

0x2bb8,	// (0x00030a81) list_single_2graphic_pane_g2_ParamLimits

0x2bb8,	// (0x00030a81) list_single_2graphic_pane_g2

0xe1fc,	// (0x0003c0c5) list_single_2graphic_pane_g3_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_2graphic_pane_g3

0x1d65,	// (0x0002fc2e) list_single_2graphic_pane_g4_ParamLimits

0x1d65,	// (0x0002fc2e) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003d64a) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003d64a) list_single_2graphic_pane_g

0x1d76,	// (0x0002fc3f) list_single_2graphic_pane_t1_ParamLimits

0x1d76,	// (0x0002fc3f) list_single_2graphic_pane_t1

0x2e29,	// (0x00030cf2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x2e29,	// (0x00030cf2) list_double2_graphic_large_graphic_pane_g1

0x1a2e,	// (0x0002f8f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1a2e,	// (0x0002f8f7) list_double2_graphic_large_graphic_pane_g2

0xe1a9,	// (0x0003c072) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe1a9,	// (0x0003c072) list_double2_graphic_large_graphic_pane_g3

0x1da4,	// (0x0002fc6d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1da4,	// (0x0002fc6d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003d653) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003d653) list_double2_graphic_large_graphic_pane_g

0x1db0,	// (0x0002fc79) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1db0,	// (0x0002fc79) list_double2_graphic_large_graphic_pane_t1

0x1dc6,	// (0x0002fc8f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1dc6,	// (0x0002fc8f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003d65c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003d65c) list_double2_graphic_large_graphic_pane_t

0x623c,	// (0x00034105) popup_fast_swap_window_ParamLimits

0x623c,	// (0x00034105) popup_fast_swap_window

0x6258,	// (0x00034121) popup_side_volume_key_window

0x6272,	// (0x0003413b) stacon_top_pane

0x627c,	// (0x00034145) status_pane_ParamLimits

0x627c,	// (0x00034145) status_pane

0x6272,	// (0x0003413b) status_small_pane

0x2177,	// (0x00030040) control_pane

0x2177,	// (0x00030040) stacon_bottom_pane

0x2b95,	// (0x00030a5e) scroll_pane_cp121

0x5aa4,	// (0x0003396d) set_content_pane

0x6bf8,	// (0x00034ac1) bg_active_tab_pane_g1_cp1

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp1

0x6bef,	// (0x00034ab8) bg_active_tab_pane_g3_cp1

0x6bf8,	// (0x00034ac1) bg_passive_tab_pane_g1_cp1

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp1

0x6bef,	// (0x00034ab8) bg_passive_tab_pane_g3_cp1

0x2e42,	// (0x00030d0b) bg_active_tab_pane_g1_cp2

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp2

0x2e39,	// (0x00030d02) bg_active_tab_pane_g3_cp2

0x2e42,	// (0x00030d0b) bg_passive_tab_pane_g1_cp2

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp2

0x2e39,	// (0x00030d02) bg_passive_tab_pane_g3_cp2

0x2e54,	// (0x00030d1d) bg_active_tab_pane_g1_cp3

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp3

0x2e4b,	// (0x00030d14) bg_active_tab_pane_g3_cp3

0x2e54,	// (0x00030d1d) bg_passive_tab_pane_g1_cp3

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp3

0x2e4b,	// (0x00030d14) bg_passive_tab_pane_g3_cp3

0x2e66,	// (0x00030d2f) bg_active_tab_pane_g1_cp4

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp4

0x2e5d,	// (0x00030d26) bg_active_tab_pane_g3_cp4

0x2e66,	// (0x00030d2f) bg_passive_tab_pane_g1_cp4

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp4

0x2e5d,	// (0x00030d26) bg_passive_tab_pane_g3_cp4

0x61ba,	// (0x00034083) bg_active_tab_pane_g1_cp5

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp5

0x61b1,	// (0x0003407a) bg_active_tab_pane_g3_cp5

0x61ba,	// (0x00034083) bg_passive_tab_pane_g1_cp5

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp5

0x61b1,	// (0x0003407a) bg_passive_tab_pane_g3_cp5

0x2e6f,	// (0x00030d38) list_set_graphic_pane_ParamLimits

0x2e6f,	// (0x00030d38) list_set_graphic_pane

0x2177,	// (0x00030040) bg_set_opt_pane_cp4

0x61c3,	// (0x0003408c) list_set_graphic_pane_g1_ParamLimits

0x61c3,	// (0x0003408c) list_set_graphic_pane_g1

0x61cf,	// (0x00034098) list_set_graphic_pane_g2_ParamLimits

0x61cf,	// (0x00034098) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003d661) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003d661) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0003d9b9) volume_small_pane_cp_g

0x61f1,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x61f1,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2

0x61fd,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x61fd,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2

0x620c,	// (0x000340d5) list_double2_large_graphic_pane_g3_cp2

0x6214,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6214,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2

0x622a,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x622a,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2

0x795a,	// (0x00035823) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x795a,	// (0x00035823) list_double_large_graphic_pane_g1_cp2

0x796b,	// (0x00035834) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x796b,	// (0x00035834) list_double_large_graphic_pane_g2_cp2

0x6357,	// (0x00034220) list_double_large_graphic_pane_g3_cp2

0x797a,	// (0x00035843) list_double_large_graphic_pane_g4_cp

0x7982,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7982,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2

0x7999,	// (0x00035862) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7999,	// (0x00035862) list_double_large_graphic_pane_t2_cp2

0x628a,	// (0x00034153) list_double2_graphic_pane_g1_cp2_ParamLimits

0x628a,	// (0x00034153) list_double2_graphic_pane_g1_cp2

0x6296,	// (0x0003415f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6296,	// (0x0003415f) list_double2_graphic_pane_g2_cp2

0x62a5,	// (0x0003416e) list_double2_graphic_pane_g3_cp2

0x62ad,	// (0x00034176) list_double2_graphic_pane_t1_cp2_ParamLimits

0x62ad,	// (0x00034176) list_double2_graphic_pane_t1_cp2

0x62c3,	// (0x0003418c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x62c3,	// (0x0003418c) list_double2_graphic_pane_t2_cp2

0x62d5,	// (0x0003419e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_number_heading_pane_g1_cp2

0x62e1,	// (0x000341aa) list_single_number_heading_pane_g2_cp2

0x62e9,	// (0x000341b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x62e9,	// (0x000341b2) list_single_number_heading_pane_t1_cp2

0x62ff,	// (0x000341c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x62ff,	// (0x000341c8) list_single_number_heading_pane_t2_cp2

0x6311,	// (0x000341da) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6311,	// (0x000341da) list_single_number_heading_pane_t3_cp2

0x62d5,	// (0x0003419e) list_single_heading_pane_g1_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_heading_pane_g1_cp2

0x62e1,	// (0x000341aa) list_single_heading_pane_g2_cp2

0x62e9,	// (0x000341b2) list_single_heading_pane_t1_cp2_ParamLimits

0x62e9,	// (0x000341b2) list_single_heading_pane_t1_cp2

0x7764,	// (0x0003562d) list_single_heading_pane_t2_cp2_ParamLimits

0x7764,	// (0x0003562d) list_single_heading_pane_t2_cp2

0x76e9,	// (0x000355b2) list_double_graphic_pane_g1_cp2_ParamLimits

0x76e9,	// (0x000355b2) list_double_graphic_pane_g1_cp2

0x76f5,	// (0x000355be) list_double_graphic_pane_g2_cp2_ParamLimits

0x76f5,	// (0x000355be) list_double_graphic_pane_g2_cp2

0x7704,	// (0x000355cd) list_double_graphic_pane_g3_cp2

0x770c,	// (0x000355d5) list_double_graphic_pane_t1_cp2_ParamLimits

0x770c,	// (0x000355d5) list_double_graphic_pane_t1_cp2

0x7722,	// (0x000355eb) list_double_graphic_pane_t2_cp2_ParamLimits

0x7722,	// (0x000355eb) list_double_graphic_pane_t2_cp2

0x634b,	// (0x00034214) list_double_number_pane_g1_cp2_ParamLimits

0x634b,	// (0x00034214) list_double_number_pane_g1_cp2

0x6357,	// (0x00034220) list_double_number_pane_g2_cp2

0x76af,	// (0x00035578) list_double_number_pane_t1_cp2_ParamLimits

0x76af,	// (0x00035578) list_double_number_pane_t1_cp2

0x76c1,	// (0x0003558a) list_double_number_pane_t2_cp2_ParamLimits

0x76c1,	// (0x0003558a) list_double_number_pane_t2_cp2

0x76d7,	// (0x000355a0) list_double_number_pane_t3_cp2_ParamLimits

0x76d7,	// (0x000355a0) list_double_number_pane_t3_cp2

0x7627,	// (0x000354f0) list_single_graphic_pane_g1_cp2_ParamLimits

0x7627,	// (0x000354f0) list_single_graphic_pane_g1_cp2

0x62d5,	// (0x0003419e) list_single_graphic_pane_g2_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_graphic_pane_g2_cp2

0x62e1,	// (0x000341aa) list_single_graphic_pane_g3_cp2

0x75ff,	// (0x000354c8) list_single_graphic_pane_t1_cp2_ParamLimits

0x75ff,	// (0x000354c8) list_single_graphic_pane_t1_cp2

0x62d5,	// (0x0003419e) list_single_number_pane_g1_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_number_pane_g1_cp2

0x62e1,	// (0x000341aa) list_single_number_pane_g2_cp2

0x75ff,	// (0x000354c8) list_single_number_pane_t1_cp2_ParamLimits

0x75ff,	// (0x000354c8) list_single_number_pane_t1_cp2

0x7615,	// (0x000354de) list_single_number_pane_t2_cp2_ParamLimits

0x7615,	// (0x000354de) list_single_number_pane_t2_cp2

0x61fd,	// (0x000340c6) list_double2_pane_g1_cp2_ParamLimits

0x61fd,	// (0x000340c6) list_double2_pane_g1_cp2

0x620c,	// (0x000340d5) list_double2_pane_g2_cp2

0x6323,	// (0x000341ec) list_double2_pane_t1_cp2_ParamLimits

0x6323,	// (0x000341ec) list_double2_pane_t1_cp2

0x6339,	// (0x00034202) list_double2_pane_t2_cp2_ParamLimits

0x6339,	// (0x00034202) list_double2_pane_t2_cp2

0x634b,	// (0x00034214) list_double_pane_g1_cp2_ParamLimits

0x634b,	// (0x00034214) list_double_pane_g1_cp2

0x6357,	// (0x00034220) list_double_pane_g2_cp2

0x635f,	// (0x00034228) list_double_pane_t1_cp2_ParamLimits

0x635f,	// (0x00034228) list_double_pane_t1_cp2

0x6375,	// (0x0003423e) list_double_pane_t2_cp2_ParamLimits

0x6375,	// (0x0003423e) list_double_pane_t2_cp2

0x639d,	// (0x00034266) list_single_pane_cp2_g3

0x62d5,	// (0x0003419e) list_single_pane_g1_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_pane_g1_cp2

0x62e1,	// (0x000341aa) list_single_pane_g2_cp2

0x63ad,	// (0x00034276) list_single_pane_t1_cp2_ParamLimits

0x63ad,	// (0x00034276) list_single_pane_t1_cp2

0x63c5,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x63c5,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2

0x63d1,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x63d1,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2

0x63dd,	// (0x000342a6) list_single_large_graphic_pane_g3_cp2

0x63e5,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x63e5,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1

0x63ff,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x63ff,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2

0x75e1,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x75e1,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2

0x75bc,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x75bc,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2

0x62e1,	// (0x000341aa) list_single_graphic_heading_pane_g5_cp2

0x62e9,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62e9,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2

0x75ed,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x75ed,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2

0x75b0,	// (0x00035479) list_single_2graphic_pane_g1_cp2_ParamLimits

0x75b0,	// (0x00035479) list_single_2graphic_pane_g1_cp2

0x75bc,	// (0x00035485) list_single_2graphic_pane_g2_cp2_ParamLimits

0x75bc,	// (0x00035485) list_single_2graphic_pane_g2_cp2

0x62e1,	// (0x000341aa) list_single_2graphic_pane_g3_cp2

0x6c01,	// (0x00034aca) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6c01,	// (0x00034aca) list_single_2graphic_pane_g4_cp2

0x75cb,	// (0x00035494) list_single_2graphic_pane_t1_cp2_ParamLimits

0x75cb,	// (0x00035494) list_single_2graphic_pane_t1_cp2

0x202a,	// (0x0002fef3) list_highlight_pane_g10_cp1

0x71c2,	// (0x0003508b) list_highlight_pane_g1_cp1

0x71ca,	// (0x00035093) list_highlight_pane_g2_cp1

0x71d2,	// (0x0003509b) list_highlight_pane_g3_cp1

0x71da,	// (0x000350a3) list_highlight_pane_g4_cp1

0x71e2,	// (0x000350ab) list_highlight_pane_g5_cp1

0x71ea,	// (0x000350b3) list_highlight_pane_g6_cp1

0x71f2,	// (0x000350bb) list_highlight_pane_g7_cp1

0x71fa,	// (0x000350c3) list_highlight_pane_g8_cp1

0x7202,	// (0x000350cb) list_highlight_pane_g9_cp1

0x3b21,	// (0x000319ea) form_field_slider_pane_t3

0x3b2f,	// (0x000319f8) form_field_slider_pane_t4

0x710c,	// (0x00034fd5) slider_form_pane_ParamLimits

0x710c,	// (0x00034fd5) slider_form_pane

0x2177,	// (0x00030040) control_abbreviations

0x2177,	// (0x00030040) control_conventions

0x2177,	// (0x00030040) control_definitions

0x2177,	// (0x00030040) format_table_attribute

0x77ae,	// (0x00035677) bg_popup_preview_window_pane_g9

0x2177,	// (0x00030040) format_table_data2

0x2177,	// (0x00030040) format_table_data3

0x2177,	// (0x00030040) format_table_data_example

0x0008,

0x2177,	// (0x00030040) intro_purpose

0xf921,	// (0x0003d7ea) bg_popup_preview_window_pane_g

0x2177,	// (0x00030040) texts_category

0x2177,	// (0x00030040) texts_graphics

0x6415,	// (0x000342de) text_digital

0x6424,	// (0x000342ed) text_primary

0x6433,	// (0x000342fc) text_primary_small

0x6442,	// (0x0003430b) text_secondary

0x6451,	// (0x0003431a) text_title

0x7c44,	// (0x00035b0d) bg_passive_tab_pane_g1_cp3_srt

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp3_srt

0x7c3b,	// (0x00035b04) bg_passive_tab_pane_g3_cp3_srt

0x2339,	// (0x00030202) bg_active_tab_pane_cp3_srt_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp3_srt

0x6bdf,	// (0x00034aa8) tabs_4_active_pane_srt_g1

0x2365,	// (0x0003022e) tabs_4_active_pane_srt_t1_ParamLimits

0x2365,	// (0x0003022e) tabs_4_active_pane_srt_t1

0x7c44,	// (0x00035b0d) bg_active_tab_pane_g1_cp3_copy1

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp3_copy1

0x7c3b,	// (0x00035b04) bg_active_tab_pane_g3_cp3_copy1

0x2383,	// (0x0003024c) tabs_2_long_active_pane_srt_ParamLimits

0x2383,	// (0x0003024c) tabs_2_long_active_pane_srt

0x2383,	// (0x0003024c) tabs_2_long_passive_pane_srt_ParamLimits

0x2383,	// (0x0003024c) tabs_2_long_passive_pane_srt

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp4_srt

0x7b7a,	// (0x00035a43) bg_passive_tab_pane_g1_cp4_srt

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp4_srt

0x7b71,	// (0x00035a3a) bg_passive_tab_pane_g3_cp4_srt

0x2383,	// (0x0003024c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2383,	// (0x0003024c) bg_active_tab_pane_cp4_srt

0x2c42,	// (0x00030b0b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2c42,	// (0x00030b0b) tabs_2_long_active_pane_srt_t1

0x7b7a,	// (0x00035a43) bg_active_tab_pane_g1_cp4_srt

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp4_srt

0x7b71,	// (0x00035a3a) bg_active_tab_pane_g3_cp4_srt

0x2339,	// (0x00030202) tabs_3_long_active_pane_srt_ParamLimits

0x2339,	// (0x00030202) tabs_3_long_active_pane_srt

0x2339,	// (0x00030202) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2339,	// (0x00030202) tabs_3_long_passive_pane_cp_srt

0x2339,	// (0x00030202) tabs_3_long_passive_pane_srt_ParamLimits

0x2339,	// (0x00030202) tabs_3_long_passive_pane_srt

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp5_srt

0x61ba,	// (0x00034083) bg_passive_tab_pane_g1_cp5_srt

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp5_srt

0x61b1,	// (0x0003407a) bg_passive_tab_pane_g3_cp5_srt

0x2383,	// (0x0003024c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2383,	// (0x0003024c) bg_active_tab_pane_cp5_srt

0x2c59,	// (0x00030b22) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2c59,	// (0x00030b22) tabs_3_long_active_pane_srt_t1

0x61ba,	// (0x00034083) bg_active_tab_pane_g1_cp5_srt

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp5_srt

0x61b1,	// (0x0003407a) bg_active_tab_pane_g3_cp5_srt

0x7b63,	// (0x00035a2c) navi_text_pane_srt_t1

0x7b5b,	// (0x00035a24) navi_icon_pane_srt_g1

0x6569,	// (0x00034432) midp_editing_number_pane_srt

0x6460,	// (0x00034329) midp_ticker_pane_srt

0x6571,	// (0x0003443a) midp_ticker_pane_srt_g1

0x6579,	// (0x00034442) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003d680) midp_ticker_pane_srt_g

0x6581,	// (0x0003444a) midp_ticker_pane_srt_t1

0x7b4c,	// (0x00035a15) midp_editing_number_pane_t1_copy1

0x2e83,	// (0x00030d4c) listscroll_midp_pane

0x2e83,	// (0x00030d4c) midp_form_pane

0x6468,	// (0x00034331) midp_info_popup_window_ParamLimits

0x6468,	// (0x00034331) midp_info_popup_window

0x5b59,	// (0x00033a22) bg_popup_sub_pane_cp50_ParamLimits

0x5b59,	// (0x00033a22) bg_popup_sub_pane_cp50

0x6e66,	// (0x00034d2f) listscroll_midp_info_pane_ParamLimits

0x6e66,	// (0x00034d2f) listscroll_midp_info_pane

0x6e4e,	// (0x00034d17) listscroll_form_midp_pane_ParamLimits

0x6e4e,	// (0x00034d17) listscroll_form_midp_pane

0x6e5a,	// (0x00034d23) scroll_bar_cp050

0x3b15,	// (0x000319de) list_midp_pane

0x848b,	// (0x00036354) signal_pane_g2_cp

0x6d74,	// (0x00034c3d) listscroll_midp_info_pane_t1_ParamLimits

0x6d74,	// (0x00034c3d) listscroll_midp_info_pane_t1

0x6d8c,	// (0x00034c55) listscroll_midp_info_pane_t2_ParamLimits

0x6d8c,	// (0x00034c55) listscroll_midp_info_pane_t2

0x6dca,	// (0x00034c93) listscroll_midp_info_pane_t3_ParamLimits

0x6dca,	// (0x00034c93) listscroll_midp_info_pane_t3

0x6e04,	// (0x00034ccd) listscroll_midp_info_pane_t4_ParamLimits

0x6e04,	// (0x00034ccd) listscroll_midp_info_pane_t4

0x0003,

0xf85c,	// (0x0003d725) listscroll_midp_info_pane_t_ParamLimits

0xf85c,	// (0x0003d725) listscroll_midp_info_pane_t

0x5bfc,	// (0x00033ac5) scroll_pane_cp21

0x6d18,	// (0x00034be1) form_midp_field_choice_group_pane

0x6d21,	// (0x00034bea) form_midp_field_text_pane

0x6d5a,	// (0x00034c23) form_midp_field_time_pane

0x6d62,	// (0x00034c2b) form_midp_gauge_slider_pane

0x6d6b,	// (0x00034c34) form_midp_gauge_wait_pane

0x2177,	// (0x00030040) form_midp_image_pane

0x1dd8,	// (0x0002fca1) list_single_midp_pane_ParamLimits

0x1dd8,	// (0x0002fca1) list_single_midp_pane

0x3af4,	// (0x000319bd) form_midp_field_text_pane_t1

0x6a5c,	// (0x00034925) input_focus_pane_cp050

0x6d07,	// (0x00034bd0) list_midp_form_text_pane

0x6cd6,	// (0x00034b9f) form_midp_field_choice_group_pane_t1

0x6ce4,	// (0x00034bad) input_focus_pane_cp051

0x6cf8,	// (0x00034bc1) list_midp_choice_pane

0x2177,	// (0x00030040) status_idle_pane

0x6cba,	// (0x00034b83) form_midp_field_time_pane_t1

0x202a,	// (0x0002fef3) wait_anim_pane_g2_copy1

0x6cc8,	// (0x00034b91) form_midp_field_time_pane_t2

0x0001,

0x64d3,	// (0x0003439c) aid_navinavi_width_2_pane

0xf857,	// (0x0003d720) form_midp_field_time_pane_t

0x2177,	// (0x00030040) input_focus_pane_cp052

0x2177,	// (0x00030040) bg_input_focus_pane_cp040

0x6c96,	// (0x00034b5f) form_midp_gauge_slider_pane_t1

0x6ca4,	// (0x00034b6d) form_midp_gauge_slider_pane_t2

0x3ad8,	// (0x000319a1) form_midp_gauge_slider_pane_t3

0x3ae6,	// (0x000319af) form_midp_gauge_slider_pane_t4

0x0003,

0xf84e,	// (0x0003d717) form_midp_gauge_slider_pane_t

0x6cb2,	// (0x00034b7b) form_midp_slider_pane

0x2383,	// (0x0003024c) bg_input_focus_pane_cp041_ParamLimits

0x2383,	// (0x0003024c) bg_input_focus_pane_cp041

0x6c66,	// (0x00034b2f) form_midp_gauge_wait_pane_t1_ParamLimits

0x6c66,	// (0x00034b2f) form_midp_gauge_wait_pane_t1

0x6c78,	// (0x00034b41) form_midp_gauge_wait_pane_t2_ParamLimits

0x6c78,	// (0x00034b41) form_midp_gauge_wait_pane_t2

0x0001,

0xf849,	// (0x0003d712) form_midp_gauge_wait_pane_t_ParamLimits

0xf849,	// (0x0003d712) form_midp_gauge_wait_pane_t

0x6c8a,	// (0x00034b53) form_midp_wait_pane_ParamLimits

0x6c8a,	// (0x00034b53) form_midp_wait_pane

0x6c30,	// (0x00034af9) form_midp_image_pane_g1

0x6c39,	// (0x00034b02) form_midp_image_pane_t1

0x6c48,	// (0x00034b11) form_midp_image_pane_t2

0x6c57,	// (0x00034b20) form_midp_image_pane_t3

0x0002,

0xf842,	// (0x0003d70b) form_midp_image_pane_t

0x6c27,	// (0x00034af0) list_single_midp_pane_g1

0xdb3c,	// (0x0003ba05) list_single_midp_pane_t1

0x3ac4,	// (0x0003198d) list_midp_form_item_pane_ParamLimits

0x3ac4,	// (0x0003198d) list_midp_form_item_pane

0x647b,	// (0x00034344) list_midp_form_item_pane_t1

0x648a,	// (0x00034353) midp_ticker_pane_g1

0x6496,	// (0x0003435f) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003d666) midp_ticker_pane_g

0x64a2,	// (0x0003436b) midp_ticker_pane_t1

0x7b4c,	// (0x00035a15) midp_editing_number_pane_t1

0x7bd4,	// (0x00035a9d) midp_editing_number_pane

0x7be0,	// (0x00035aa9) midp_ticker_pane

0x7b3c,	// (0x00035a05) ai_message_heading_pane

0x2177,	// (0x00030040) bg_popup_window_pane_cp14

0x7b44,	// (0x00035a0d) listscroll_ai_message_pane

0x7ac6,	// (0x0003598f) ai_message_heading_pane_g1_ParamLimits

0x7ac6,	// (0x0003598f) ai_message_heading_pane_g1

0x7ad2,	// (0x0003599b) ai_message_heading_pane_g2_ParamLimits

0x7ad2,	// (0x0003599b) ai_message_heading_pane_g2

0x7ade,	// (0x000359a7) ai_message_heading_pane_g3_ParamLimits

0x7ade,	// (0x000359a7) ai_message_heading_pane_g3

0x7aea,	// (0x000359b3) ai_message_heading_pane_g4_ParamLimits

0x7aea,	// (0x000359b3) ai_message_heading_pane_g4

0x0003,

0xf983,	// (0x0003d84c) ai_message_heading_pane_g_ParamLimits

0xf983,	// (0x0003d84c) ai_message_heading_pane_g

0x7af6,	// (0x000359bf) ai_message_heading_pane_t1_ParamLimits

0x7af6,	// (0x000359bf) ai_message_heading_pane_t1

0x7b10,	// (0x000359d9) ai_message_heading_pane_t2_ParamLimits

0x7b10,	// (0x000359d9) ai_message_heading_pane_t2

0x0001,

0xf98c,	// (0x0003d855) ai_message_heading_pane_t_ParamLimits

0xf98c,	// (0x0003d855) ai_message_heading_pane_t

0x7b22,	// (0x000359eb) bg_popup_heading_pane_cp1_ParamLimits

0x7b22,	// (0x000359eb) bg_popup_heading_pane_cp1

0x7ab4,	// (0x0003597d) list_ai_message_pane_ParamLimits

0x7ab4,	// (0x0003597d) list_ai_message_pane

0x5bfc,	// (0x00033ac5) scroll_pane_cp10

0x7a50,	// (0x00035919) list_ai_message_pane_g1

0x7a58,	// (0x00035921) list_ai_message_pane_g2

0x0001,

0xf960,	// (0x0003d829) list_ai_message_pane_g

0x7a60,	// (0x00035929) list_ai_message_pane_t1_ParamLimits

0x7a60,	// (0x00035929) list_ai_message_pane_t1

0x7a75,	// (0x0003593e) list_ai_message_pane_t2_ParamLimits

0x7a75,	// (0x0003593e) list_ai_message_pane_t2

0x7a8a,	// (0x00035953) list_ai_message_pane_t3_ParamLimits

0x7a8a,	// (0x00035953) list_ai_message_pane_t3

0x7a9f,	// (0x00035968) list_ai_message_pane_t4_ParamLimits

0x7a9f,	// (0x00035968) list_ai_message_pane_t4

0x0003,

0xf965,	// (0x0003d82e) list_ai_message_pane_t_ParamLimits

0xf965,	// (0x0003d82e) list_ai_message_pane_t

0x7a3e,	// (0x00035907) cell_ai_soft_ind_pane_ParamLimits

0x7a3e,	// (0x00035907) cell_ai_soft_ind_pane

0x64b4,	// (0x0003437d) cell_ai_soft_ind_pane_g1_ParamLimits

0x64b4,	// (0x0003437d) cell_ai_soft_ind_pane_g1

0x2177,	// (0x00030040) grid_highlight_cp1

0x64c1,	// (0x0003438a) text_secondary_cp56_ParamLimits

0x64c1,	// (0x0003438a) text_secondary_cp56

0x7a13,	// (0x000358dc) example_general_pane_ParamLimits

0x7a13,	// (0x000358dc) example_general_pane

0x7a1f,	// (0x000358e8) example_parent_pane_g1_ParamLimits

0x7a1f,	// (0x000358e8) example_parent_pane_g1

0x7a2b,	// (0x000358f4) example_parent_pane_t1_ParamLimits

0x7a2b,	// (0x000358f4) example_parent_pane_t1

0x33b8,	// (0x00031281) popup_preview_text_window_ParamLimits

0x33b8,	// (0x00031281) popup_preview_text_window

0x63a5,	// (0x0003426e) list_single_pane_cp2_g4

0x2780,	// (0x00030649) bg_popup_preview_window_pane_ParamLimits

0x2780,	// (0x00030649) bg_popup_preview_window_pane

0x77b6,	// (0x0003567f) popup_preview_text_window_t1_ParamLimits

0x77b6,	// (0x0003567f) popup_preview_text_window_t1

0x77d4,	// (0x0003569d) popup_preview_text_window_t2_ParamLimits

0x77d4,	// (0x0003569d) popup_preview_text_window_t2

0x781d,	// (0x000356e6) popup_preview_text_window_t3_ParamLimits

0x781d,	// (0x000356e6) popup_preview_text_window_t3

0x7862,	// (0x0003572b) popup_preview_text_window_t4_ParamLimits

0x7862,	// (0x0003572b) popup_preview_text_window_t4

0x0004,

0xf934,	// (0x0003d7fd) popup_preview_text_window_t_ParamLimits

0xf934,	// (0x0003d7fd) popup_preview_text_window_t

0x78e0,	// (0x000357a9) scroll_pane_cp11

0x696e,	// (0x00034837) bg_popup_preview_window_pane_g1

0x7776,	// (0x0003563f) bg_popup_preview_window_pane_g2

0x777e,	// (0x00035647) bg_popup_preview_window_pane_g3

0x7786,	// (0x0003564f) bg_popup_preview_window_pane_g4

0x778e,	// (0x00035657) bg_popup_preview_window_pane_g5

0x7796,	// (0x0003565f) bg_popup_preview_window_pane_g6

0x779e,	// (0x00035667) bg_popup_preview_window_pane_g7

0x77a6,	// (0x0003566f) bg_popup_preview_window_pane_g8

0x8eb7,	// (0x00036d80) aid_popup_width_pane

0x333a,	// (0x00031203) popup_midp_note_alarm_window_ParamLimits

0x333a,	// (0x00031203) popup_midp_note_alarm_window

0x5aad,	// (0x00033976) data_form_pane_ParamLimits

0x1c4e,	// (0x0002fb17) form_field_data_pane_g1

0x1c58,	// (0x0002fb21) form_field_data_pane_t1_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_ParamLimits

0x5ac7,	// (0x00033990) data_form_wide_pane_ParamLimits

0xd8f3,	// (0x0003b7bc) form_field_data_wide_pane_g1

0xd8ff,	// (0x0003b7c8) form_field_data_wide_pane_t1_ParamLimits

0x2a0c,	// (0x000308d5) input_focus_pane_cp6_ParamLimits

0x2c20,	// (0x00030ae9) input_popup_find_pane_g1_ParamLimits

0x2c20,	// (0x00030ae9) input_popup_find_pane_g1

0x95e6,	// (0x000374af) aid_navi_side_left_pane

0x95f6,	// (0x000374bf) aid_navi_side_right_pane

0x7293,	// (0x0003515c) bg_popup_window_pane_cp30_ParamLimits

0x7293,	// (0x0003515c) bg_popup_window_pane_cp30

0x730d,	// (0x000351d6) popup_midp_note_alarm_window_g1_ParamLimits

0x730d,	// (0x000351d6) popup_midp_note_alarm_window_g1

0x733d,	// (0x00035206) popup_midp_note_alarm_window_t1_ParamLimits

0x733d,	// (0x00035206) popup_midp_note_alarm_window_t1

0x73de,	// (0x000352a7) popup_midp_note_alarm_window_t2_ParamLimits

0x73de,	// (0x000352a7) popup_midp_note_alarm_window_t2

0x748c,	// (0x00035355) popup_midp_note_alarm_window_t3_ParamLimits

0x748c,	// (0x00035355) popup_midp_note_alarm_window_t3

0x74b4,	// (0x0003537d) popup_midp_note_alarm_window_t4_ParamLimits

0x74b4,	// (0x0003537d) popup_midp_note_alarm_window_t4

0x74d4,	// (0x0003539d) popup_midp_note_alarm_window_t5_ParamLimits

0x74d4,	// (0x0003539d) popup_midp_note_alarm_window_t5

0x000a,

0xf8d1,	// (0x0003d79a) popup_midp_note_alarm_window_t_ParamLimits

0xf8d1,	// (0x0003d79a) popup_midp_note_alarm_window_t

0x7580,	// (0x00035449) wait_bar_pane_cp1_ParamLimits

0x7580,	// (0x00035449) wait_bar_pane_cp1

0x2177,	// (0x00030040) wait_anim_pane_copy1

0x2177,	// (0x00030040) wait_border_pane_copy1

0x6fd9,	// (0x00034ea2) wait_border_pane_g1_copy1

0xd919,	// (0x0003b7e2) form_field_popup_pane_g1

0x1c70,	// (0x0002fb39) form_field_popup_pane_t1_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_cp7_ParamLimits

0x5aad,	// (0x00033976) list_form_pane_ParamLimits

0xd939,	// (0x0003b802) form_field_popup_wide_pane_g1

0xd941,	// (0x0003b80a) form_field_popup_wide_pane_t1_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_cp8_ParamLimits

0x5ae7,	// (0x000339b0) list_form_wide_pane_ParamLimits

0x7c6c,	// (0x00035b35) aid_size_cell_graphic_pane

0x1ced,	// (0x0002fbb6) data_form_pane_t1_ParamLimits

0x1dff,	// (0x0002fcc8) data_form_wide_pane_t1_ParamLimits

0x3716,	// (0x000315df) bg_status_flat_pane

0x2274,	// (0x0003013d) title_pane_t1_ParamLimits

0x2301,	// (0x000301ca) title_pane_t2_ParamLimits

0x2327,	// (0x000301f0) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d464) title_pane_t_ParamLimits

0x2d20,	// (0x00030be9) level_1_signal_ParamLimits

0x2d32,	// (0x00030bfb) level_2_signal_ParamLimits

0x2d45,	// (0x00030c0e) level_3_signal_ParamLimits

0x2d58,	// (0x00030c21) level_4_signal_ParamLimits

0x2d6b,	// (0x00030c34) level_5_signal_ParamLimits

0x2d7e,	// (0x00030c47) level_6_signal_ParamLimits

0x2d91,	// (0x00030c5a) level_7_signal_ParamLimits

0x2d20,	// (0x00030be9) level_1_battery_ParamLimits

0x2d32,	// (0x00030bfb) level_2_battery_ParamLimits

0x2d45,	// (0x00030c0e) level_3_battery_ParamLimits

0x2d58,	// (0x00030c21) level_4_battery_ParamLimits

0x2d6b,	// (0x00030c34) level_5_battery_ParamLimits

0x2d7e,	// (0x00030c47) level_6_battery_ParamLimits

0x2d91,	// (0x00030c5a) level_7_battery_ParamLimits

0x71c2,	// (0x0003508b) bg_status_flat_pane_g1

0x71ca,	// (0x00035093) bg_status_flat_pane_g2

0x71d2,	// (0x0003509b) bg_status_flat_pane_g3

0x71da,	// (0x000350a3) bg_status_flat_pane_g4

0x71e2,	// (0x000350ab) bg_status_flat_pane_g5

0x71ea,	// (0x000350b3) bg_status_flat_pane_g6

0x71f2,	// (0x000350bb) bg_status_flat_pane_g7

0x234f,	// (0x00030218) tabs_3_active_pane_t1_ParamLimits

0x234f,	// (0x00030218) tabs_3_passive_pane_t1_ParamLimits

0x2365,	// (0x0003022e) tabs_4_active_pane_t1_ParamLimits

0x2365,	// (0x0003022e) tabs_4_1_passive_pane_t1_ParamLimits

0x2c2c,	// (0x00030af5) tabs_2_active_pane_t1_ParamLimits

0x2c2c,	// (0x00030af5) tabs_2_passive_pane_t1_ParamLimits

0x2383,	// (0x0003024c) bg_active_tab_pane_cp4_ParamLimits

0x2c42,	// (0x00030b0b) tabs_2_long_active_pane_t1_ParamLimits

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp4_ParamLimits

0xa41f,	// (0x000382e8) list_single_midp_graphic_pane_t1_ParamLimits

0x2383,	// (0x0003024c) bg_active_tab_pane_cp5_ParamLimits

0x2c59,	// (0x00030b22) tabs_3_long_active_pane_t1_ParamLimits

0x5c35,	// (0x00033afe) bg_passive_tab_pane_cp5_ParamLimits

0xa41f,	// (0x000382e8) list_single_midp_graphic_pane_t1

0x3716,	// (0x000315df) bg_status_flat_pane_ParamLimits

0x684d,	// (0x00034716) indicator_pane_cp2_ParamLimits

0x684d,	// (0x00034716) indicator_pane_cp2

0x387c,	// (0x00031745) navi_pane_srt_ParamLimits

0x387c,	// (0x00031745) navi_pane_srt

0x6875,	// (0x0003473e) popup_clock_digital_analogue_window_cp1

0x250b,	// (0x000303d4) indicator_pane_t1

0x6460,	// (0x00034329) copy_highlight_pane

0x6460,	// (0x00034329) cursor_graphics_pane

0x6460,	// (0x00034329) graphic_within_text_pane

0x6460,	// (0x00034329) link_highlight_pane

0x78a3,	// (0x0003576c) popup_preview_text_window_t5_ParamLimits

0x78a3,	// (0x0003576c) popup_preview_text_window_t5

0x64db,	// (0x000343a4) cursor_digital_pane

0x64db,	// (0x000343a4) cursor_primary_pane

0x64ec,	// (0x000343b5) cursor_primary_small_pane

0x64f4,	// (0x000343bd) cursor_secondary_pane

0x64fc,	// (0x000343c5) cursor_title_pane

0x64db,	// (0x000343a4) link_highlight_digital_pane

0x64e3,	// (0x000343ac) link_highlight_primary_pane

0x64ec,	// (0x000343b5) link_highlight_primary_small_pane

0x64f4,	// (0x000343bd) link_highlight_secondary_pane

0x64fc,	// (0x000343c5) link_highlight_title_pane

0x64db,	// (0x000343a4) copy_highlight_digital_pane

0x64db,	// (0x000343a4) copy_highlight_primary_pane

0x64ec,	// (0x000343b5) copy_highlight_primary_small_pane

0x64f4,	// (0x000343bd) copy_highlight_secondary_pane

0x64fc,	// (0x000343c5) copy_highlight_title_pane

0x64f4,	// (0x000343bd) graphic_text_digital_pane

0x7242,	// (0x0003510b) graphic_text_primary_pane

0x724b,	// (0x00035114) graphic_text_primary_small_pane

0x64ec,	// (0x000343b5) graphic_text_secondary_pane

0x64db,	// (0x000343a4) graphic_text_title_pane

0x2f20,	// (0x00030de9) cursor_primary_pane_g1

0x7234,	// (0x000350fd) cursor_text_primary_t1

0x3b51,	// (0x00031a1a) cursor_primary_small_pane_g1

0x7226,	// (0x000350ef) cursor_text_primary_small_t1

0x3b47,	// (0x00031a10) cursor_primary_small_pane_g1_copy1

0x7218,	// (0x000350e1) cursor_text_primary_small_t1_copy1

0x720a,	// (0x000350d3) cursor_text_title_t1

0x3b3d,	// (0x00031a06) cursor_title_pane_g1

0x2f20,	// (0x00030de9) cursor_digital_pane_g1

0x6504,	// (0x000343cd) cursor_text_digital_t1

0x6512,	// (0x000343db) link_highlight_primary_pane_g1

0x71b3,	// (0x0003507c) link_highlight_primary_pane_t1

0x6512,	// (0x000343db) link_highlight_primary_small_pane_g1

0x651a,	// (0x000343e3) link_highlight_primary_small_pane_t1

0x6529,	// (0x000343f2) link_highlight_secondary_pane_g1

0x6531,	// (0x000343fa) link_highlight_secondary_pane_t1

0x7118,	// (0x00034fe1) link_highlight_title_pane_g1

0x712f,	// (0x00034ff8) link_highlight_title_pane_t1

0x7118,	// (0x00034fe1) link_highlight_digital_pane_g1

0x7120,	// (0x00034fe9) link_highlight_digital_pane_t1

0x6ff4,	// (0x00034ebd) copy_highlight_primary_pane_g1

0x701a,	// (0x00034ee3) copy_highlight_primary_pane_t1

0x6ff4,	// (0x00034ebd) copy_highlight_primary_small_pane_g1

0x700b,	// (0x00034ed4) copy_highlight_primary_small_pane_t1

0x6540,	// (0x00034409) copy_highlight_secondary_pane_g1

0x6548,	// (0x00034411) copy_highlight_secondary_pane_t1

0x6ff4,	// (0x00034ebd) copy_highlight_title_pane_g1

0x6ffc,	// (0x00034ec5) copy_highlight_title_pane_t1

0x6ff4,	// (0x00034ebd) copy_highlight_digital_pane_g1

0x7df2,	// (0x00035cbb) copy_highlight_digital_pane_t1

0x7cf0,	// (0x00035bb9) graphic_text_primary_pane_g1

0x7dd6,	// (0x00035c9f) graphic_text_primary_pane_t1

0x7de4,	// (0x00035cad) graphic_text_primary_pane_t2

0x0001,

0xfa00,	// (0x0003d8c9) graphic_text_primary_pane_t

0x7db2,	// (0x00035c7b) graphic_text_primary_small_pane_g1

0x7dba,	// (0x00035c83) graphic_text_primary_small_pane_t1

0x7dc8,	// (0x00035c91) graphic_text_primary_small_pane_t2

0x0001,

0xf9fb,	// (0x0003d8c4) graphic_text_primary_small_pane_t

0x7d38,	// (0x00035c01) graphic_text_secondary_pane_g1

0x7d40,	// (0x00035c09) graphic_text_secondary_pane_t1

0x7da4,	// (0x00035c6d) graphic_text_secondary_pane_t2

0x0001,

0xf9f6,	// (0x0003d8bf) graphic_text_secondary_pane_t

0x7d14,	// (0x00035bdd) graphic_text_title_pane_g1

0x7d1c,	// (0x00035be5) graphic_text_title_pane_t1

0x7d2a,	// (0x00035bf3) graphic_text_title_pane_t2

0x0001,

0xf9f1,	// (0x0003d8ba) graphic_text_title_pane_t

0x7cf0,	// (0x00035bb9) graphic_text_digital_pane_g1

0x7cf8,	// (0x00035bc1) graphic_text_digital_pane_t1

0x7d06,	// (0x00035bcf) graphic_text_digital_pane_t2

0x0001,

0xf9ec,	// (0x0003d8b5) graphic_text_digital_pane_t

0x2383,	// (0x0003024c) navi_icon_pane_srt_ParamLimits

0x2383,	// (0x0003024c) navi_icon_pane_srt

0x2177,	// (0x00030040) navi_midp_pane_srt

0x2177,	// (0x00030040) navi_navi_pane_srt

0x2383,	// (0x0003024c) navi_text_pane_srt_ParamLimits

0x2383,	// (0x0003024c) navi_text_pane_srt

0x7cbb,	// (0x00035b84) navi_navi_icon_text_pane_srt

0x7cd5,	// (0x00035b9e) navi_navi_pane_srt_g1_ParamLimits

0x7cd5,	// (0x00035b9e) navi_navi_pane_srt_g1

0x7cc3,	// (0x00035b8c) navi_navi_pane_srt_g2_ParamLimits

0x7cc3,	// (0x00035b8c) navi_navi_pane_srt_g2

0x0001,

0xf9e7,	// (0x0003d8b0) navi_navi_pane_srt_g_ParamLimits

0xf9e7,	// (0x0003d8b0) navi_navi_pane_srt_g

0x7ce7,	// (0x00035bb0) navi_navi_tabs_pane_srt

0x7cbb,	// (0x00035b84) navi_navi_text_pane_srt

0x7cbb,	// (0x00035b84) navi_navi_volume_pane_srt

0x7cac,	// (0x00035b75) navi_navi_text_pane_srt_t1

0xabb6,	// (0x00038a7f) navi_navi_volume_pane_srt_g1

0xabbe,	// (0x00038a87) volume_small_pane_srt_ParamLimits

0xabbe,	// (0x00038a87) volume_small_pane_srt

0x9adb,	// (0x000379a4) volume_small_pane_srt_g1_ParamLimits

0x9adb,	// (0x000379a4) volume_small_pane_srt_g1

0x9aeb,	// (0x000379b4) volume_small_pane_srt_g2_ParamLimits

0x9aeb,	// (0x000379b4) volume_small_pane_srt_g2

0x9afc,	// (0x000379c5) volume_small_pane_srt_g3_ParamLimits

0x9afc,	// (0x000379c5) volume_small_pane_srt_g3

0x9b0d,	// (0x000379d6) volume_small_pane_srt_g4_ParamLimits

0x9b0d,	// (0x000379d6) volume_small_pane_srt_g4

0x9b1e,	// (0x000379e7) volume_small_pane_srt_g5_ParamLimits

0x9b1e,	// (0x000379e7) volume_small_pane_srt_g5

0x9b2f,	// (0x000379f8) volume_small_pane_srt_g6_ParamLimits

0x9b2f,	// (0x000379f8) volume_small_pane_srt_g6

0x9b40,	// (0x00037a09) volume_small_pane_srt_g7_ParamLimits

0x9b40,	// (0x00037a09) volume_small_pane_srt_g7

0x9b51,	// (0x00037a1a) volume_small_pane_srt_g8_ParamLimits

0x9b51,	// (0x00037a1a) volume_small_pane_srt_g8

0x9b62,	// (0x00037a2b) volume_small_pane_srt_g9_ParamLimits

0x9b62,	// (0x00037a2b) volume_small_pane_srt_g9

0x9b73,	// (0x00037a3c) volume_small_pane_srt_g10_ParamLimits

0x9b73,	// (0x00037a3c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003d66b) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003d66b) volume_small_pane_srt_g

0x2829,	// (0x000306f2) query_popup_data_pane_cp2

0x7c92,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7c92,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1

0x7242,	// (0x0003510b) navi_tabs_2_long_pane_srt

0x7242,	// (0x0003510b) navi_tabs_2_pane_srt

0x7242,	// (0x0003510b) navi_tabs_3_long_pane_srt

0x7242,	// (0x0003510b) navi_tabs_3_pane_srt

0x7242,	// (0x0003510b) navi_tabs_4_pane_srt

0xab96,	// (0x00038a5f) tabs_2_active_pane_srt_ParamLimits

0xab96,	// (0x00038a5f) tabs_2_active_pane_srt

0xaba6,	// (0x00038a6f) tabs_2_passive_pane_srt_ParamLimits

0xaba6,	// (0x00038a6f) tabs_2_passive_pane_srt

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp1_srt

0x6bf8,	// (0x00034ac1) bg_passive_tab_pane_g1_cp1_srt

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp1_srt

0x6bef,	// (0x00034ab8) bg_passive_tab_pane_g3_cp1_srt

0x2339,	// (0x00030202) bg_active_tab_pane_cp1_srt_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp1_srt

0x6be7,	// (0x00034ab0) tabs_2_active_pane_srt_g1

0x2c2c,	// (0x00030af5) tabs_2_active_pane_srt_t1_ParamLimits

0x2c2c,	// (0x00030af5) tabs_2_active_pane_srt_t1

0x6bf8,	// (0x00034ac1) bg_active_tab_pane_g1_cp1_srt

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp1_srt

0x6bef,	// (0x00034ab8) bg_active_tab_pane_g3_cp1_srt

0xab63,	// (0x00038a2c) tabs_3_active_pane_srt_ParamLimits

0xab63,	// (0x00038a2c) tabs_3_active_pane_srt

0xab74,	// (0x00038a3d) tabs_3_passive_pane_cp_srt_ParamLimits

0xab74,	// (0x00038a3d) tabs_3_passive_pane_cp_srt

0xab85,	// (0x00038a4e) tabs_3_passive_pane_srt_ParamLimits

0xab85,	// (0x00038a4e) tabs_3_passive_pane_srt

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6a5c,	// (0x00034925) bg_passive_tab_pane_cp2_srt

0x6560,	// (0x00034429) bg_passive_tab_pane_g1_cp2_srt

0x616a,	// (0x00034033) bg_passive_tab_pane_g2_cp2_srt

0x6557,	// (0x00034420) bg_passive_tab_pane_g3_cp2_srt

0x2339,	// (0x00030202) bg_active_tab_pane_cp2_srt_ParamLimits

0x2339,	// (0x00030202) bg_active_tab_pane_cp2_srt

0x7c82,	// (0x00035b4b) tabs_3_active_pane_srt_g1

0x234f,	// (0x00030218) tabs_3_active_pane_srt_t1_ParamLimits

0x234f,	// (0x00030218) tabs_3_active_pane_srt_t1

0x6560,	// (0x00034429) bg_active_tab_pane_g1_cp2_srt

0x616a,	// (0x00034033) bg_active_tab_pane_g2_cp2_srt

0x6557,	// (0x00034420) bg_active_tab_pane_g3_cp2_srt

0xab1b,	// (0x000389e4) tabs_4_active_pane_srt_ParamLimits

0xab1b,	// (0x000389e4) tabs_4_active_pane_srt

0xab2d,	// (0x000389f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0xab2d,	// (0x000389f6) tabs_4_passive_pane_cp2_srt

0x667a,	// (0x00034543) aid_size_cell_toolbar

0x30aa,	// (0x00030f73) main_idle_act_pane_ParamLimits

0x6736,	// (0x000345ff) popup_large_graphic_colour_window_ParamLimits

0x3608,	// (0x000314d1) popup_toolbar_window_ParamLimits

0x3608,	// (0x000314d1) popup_toolbar_window

0xe283,	// (0x0003c14c) list_single_graphic_2heading_pane_ParamLimits

0xe283,	// (0x0003c14c) list_single_graphic_2heading_pane

0x5dfa,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane

0x5e0c,	// (0x00033cd5) aid_size_cell_apps_grid_prt_pane

0x5c35,	// (0x00033afe) bg_wml_button_pane_cp1_ParamLimits

0x5c35,	// (0x00033afe) bg_wml_button_pane_cp1

0x3af4,	// (0x000319bd) form_midp_field_text_pane_t1_ParamLimits

0x6a5c,	// (0x00034925) input_focus_pane_cp050_ParamLimits

0x6d07,	// (0x00034bd0) list_midp_form_text_pane_ParamLimits

0x6ce4,	// (0x00034bad) input_focus_pane_cp051_ParamLimits

0x6cf8,	// (0x00034bc1) list_midp_choice_pane_ParamLimits

0x3a92,	// (0x0003195b) list_single_2graphic_pane_cp3_ParamLimits

0x3a92,	// (0x0003195b) list_single_2graphic_pane_cp3

0x3aa5,	// (0x0003196e) list_single_midp_graphic_pane_ParamLimits

0x3aa5,	// (0x0003196e) list_single_midp_graphic_pane

0x8e2d,	// (0x00036cf6) list_single_graphic_2heading_pane_g1_ParamLimits

0x8e2d,	// (0x00036cf6) list_single_graphic_2heading_pane_g1

0x8e39,	// (0x00036d02) list_single_graphic_2heading_pane_g4_ParamLimits

0x8e39,	// (0x00036d02) list_single_graphic_2heading_pane_g4

0x8e45,	// (0x00036d0e) list_single_graphic_2heading_pane_g5_ParamLimits

0x8e45,	// (0x00036d0e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003d6be) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003d6be) list_single_graphic_2heading_pane_g

0x8e51,	// (0x00036d1a) list_single_graphic_2heading_pane_t1_ParamLimits

0x8e51,	// (0x00036d1a) list_single_graphic_2heading_pane_t1

0x8e65,	// (0x00036d2e) list_single_graphic_2heading_pane_t2_ParamLimits

0x8e65,	// (0x00036d2e) list_single_graphic_2heading_pane_t2

0x8e7f,	// (0x00036d48) list_single_graphic_2heading_pane_t3_ParamLimits

0x8e7f,	// (0x00036d48) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003d6c5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003d6c5) list_single_graphic_2heading_pane_t

0x68b8,	// (0x00034781) bg_popup_sub_pane_cp2

0x68de,	// (0x000347a7) grid_toobar_pane

0xa39b,	// (0x00038264) cell_toolbar_pane_ParamLimits

0xa39b,	// (0x00038264) cell_toolbar_pane

0x6914,	// (0x000347dd) cell_toolbar_pane_g1_ParamLimits

0x6914,	// (0x000347dd) cell_toolbar_pane_g1

0x6926,	// (0x000347ef) cell_toolbar_pane_g2_ParamLimits

0x6926,	// (0x000347ef) cell_toolbar_pane_g2

0x0001,

0xf803,	// (0x0003d6cc) cell_toolbar_pane_g_ParamLimits

0xf803,	// (0x0003d6cc) cell_toolbar_pane_g

0x6948,	// (0x00034811) grid_highlight_pane_cp2_ParamLimits

0x6948,	// (0x00034811) grid_highlight_pane_cp2

0x6962,	// (0x0003482b) toolbar_button_pane

0x696e,	// (0x00034837) toolbar_button_pane_g1

0x697e,	// (0x00034847) toolbar_button_pane_g2

0x6976,	// (0x0003483f) toolbar_button_pane_g3

0x698e,	// (0x00034857) toolbar_button_pane_g4

0x6986,	// (0x0003484f) toolbar_button_pane_g5

0x6996,	// (0x0003485f) toolbar_button_pane_g6

0x699e,	// (0x00034867) toolbar_button_pane_g7

0x69ae,	// (0x00034877) toolbar_button_pane_g8

0x69a6,	// (0x0003486f) toolbar_button_pane_g9

0x0009,

0xf808,	// (0x0003d6d1) toolbar_button_pane_g

0xa3ca,	// (0x00038293) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa3ca,	// (0x00038293) list_single_2graphic_pane_g1_cp3

0xef83,	// (0x0003ce4c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xef83,	// (0x0003ce4c) list_single_2graphic_pane_g2_cp3

0xa3e5,	// (0x000382ae) list_single_2graphic_pane_g3_cp3

0xa3ed,	// (0x000382b6) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa3ed,	// (0x000382b6) list_single_2graphic_pane_g4_cp3

0xa3f9,	// (0x000382c2) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa3f9,	// (0x000382c2) list_single_2graphic_pane_t1_cp3

0xa413,	// (0x000382dc) list_single_midp_graphic_pane_g2_ParamLimits

0xa413,	// (0x000382dc) list_single_midp_graphic_pane_g2

0xdae7,	// (0x0003b9b0) aid_zoom_text_primary

0xe27b,	// (0x0003c144) aid_zoom_text_secondary

0x6612,	// (0x000344db) status_small_pane_g7_ParamLimits

0x6612,	// (0x000344db) status_small_pane_g7

0x6635,	// (0x000344fe) status_small_pane_t1_ParamLimits

0x223d,	// (0x00030106) title_pane_g2

0x0003,

0xf592,	// (0x0003d45b) title_pane_g

0x28c8,	// (0x00030791) aid_size_cell_colour_1_pane_ParamLimits

0x28c8,	// (0x00030791) aid_size_cell_colour_1_pane

0x28dc,	// (0x000307a5) aid_size_cell_colour_2_pane_ParamLimits

0x28dc,	// (0x000307a5) aid_size_cell_colour_2_pane

0x28f0,	// (0x000307b9) aid_size_cell_colour_3_pane_ParamLimits

0x28f0,	// (0x000307b9) aid_size_cell_colour_3_pane

0x2904,	// (0x000307cd) aid_size_cell_colour_4_pane_ParamLimits

0x2904,	// (0x000307cd) aid_size_cell_colour_4_pane

0x9548,	// (0x00037411) title_pane_stacon_g1_ParamLimits

0x9548,	// (0x00037411) title_pane_stacon_g1

0x7071,	// (0x00034f3a) popup_note_wait_window_g3_ParamLimits

0x7071,	// (0x00034f3a) popup_note_wait_window_g3

0x70e7,	// (0x00034fb0) popup_note_wait_window_t5_ParamLimits

0x70e7,	// (0x00034fb0) popup_note_wait_window_t5

0x2177,	// (0x00030040) main_feb_china_hwr_fs_writing_pane

0x310b,	// (0x00030fd4) popup_feb_china_hwr_fs_window_ParamLimits

0x310b,	// (0x00030fd4) popup_feb_china_hwr_fs_window

0xef94,	// (0x0003ce5d) aid_size_cell_hwr_fs_ParamLimits

0xef94,	// (0x0003ce5d) aid_size_cell_hwr_fs

0x6a5c,	// (0x00034925) bg_popup_sub_pane_cp3_ParamLimits

0x6a5c,	// (0x00034925) bg_popup_sub_pane_cp3

0xefa9,	// (0x0003ce72) grid_hwr_fs_pane_ParamLimits

0xefa9,	// (0x0003ce72) grid_hwr_fs_pane

0xa45e,	// (0x00038327) linegrid_hwr_fs_pane_ParamLimits

0xa45e,	// (0x00038327) linegrid_hwr_fs_pane

0xefc1,	// (0x0003ce8a) cell_hwr_fs_pane_ParamLimits

0xefc1,	// (0x0003ce8a) cell_hwr_fs_pane

0x6a68,	// (0x00034931) linegrid_hwr_fs_pane_g1_ParamLimits

0x6a68,	// (0x00034931) linegrid_hwr_fs_pane_g1

0x3a58,	// (0x00031921) linegrid_hwr_fs_pane_g2_ParamLimits

0x3a58,	// (0x00031921) linegrid_hwr_fs_pane_g2

0x6a74,	// (0x0003493d) linegrid_hwr_fs_pane_g3_ParamLimits

0x6a74,	// (0x0003493d) linegrid_hwr_fs_pane_g3

0xa49e,	// (0x00038367) linegrid_hwr_fs_pane_g4_ParamLimits

0xa49e,	// (0x00038367) linegrid_hwr_fs_pane_g4

0xa4b8,	// (0x00038381) linegrid_hwr_fs_pane_g5_ParamLimits

0xa4b8,	// (0x00038381) linegrid_hwr_fs_pane_g5

0x0004,

0xf82e,	// (0x0003d6f7) linegrid_hwr_fs_pane_g_ParamLimits

0xf82e,	// (0x0003d6f7) linegrid_hwr_fs_pane_g

0x6a80,	// (0x00034949) cell_hwr_fs_pane_g1_ParamLimits

0x6a80,	// (0x00034949) cell_hwr_fs_pane_g1

0x6886,	// (0x0003474f) cell_hwr_fs_pane_g2_ParamLimits

0x6886,	// (0x0003474f) cell_hwr_fs_pane_g2

0x3a6a,	// (0x00031933) cell_hwr_fs_pane_g3_ParamLimits

0x3a6a,	// (0x00031933) cell_hwr_fs_pane_g3

0x3a77,	// (0x00031940) cell_hwr_fs_pane_g4_ParamLimits

0x3a77,	// (0x00031940) cell_hwr_fs_pane_g4

0x0003,

0xf839,	// (0x0003d702) cell_hwr_fs_pane_g_ParamLimits

0xf839,	// (0x0003d702) cell_hwr_fs_pane_g

0xefe1,	// (0x0003ceaa) cell_hwr_fs_pane_t1

0x2177,	// (0x00030040) grid_highlight_pane_cp6

0x2177,	// (0x00030040) main_idle_act2_pane

0x5be3,	// (0x00033aac) aid_inside_area_popup_secondary

0x3c5e,	// (0x00031b27) aid_inside_area_window_primary_ParamLimits

0x3c5e,	// (0x00031b27) aid_inside_area_window_primary

0x7e01,	// (0x00035cca) ai2_news_ticker_pane

0x7e09,	// (0x00035cd2) aid_size_cell_ai1_link_ParamLimits

0x7e09,	// (0x00035cd2) aid_size_cell_ai1_link

0x4069,	// (0x00031f32) popup_ai2_data_window_ParamLimits

0x4069,	// (0x00031f32) popup_ai2_data_window

0x7e23,	// (0x00035cec) popup_ai2_link_window_ParamLimits

0x7e23,	// (0x00035cec) popup_ai2_link_window

0x6a5c,	// (0x00034925) bg_popup_sub_pane_cp4_ParamLimits

0x6a5c,	// (0x00034925) bg_popup_sub_pane_cp4

0x7e37,	// (0x00035d00) grid_ai2_link_pane_ParamLimits

0x7e37,	// (0x00035d00) grid_ai2_link_pane

0x7e4e,	// (0x00035d17) popup_ai2_link_window_g1_ParamLimits

0x7e4e,	// (0x00035d17) popup_ai2_link_window_g1

0x7e5a,	// (0x00035d23) popup_ai2_link_window_g2_ParamLimits

0x7e5a,	// (0x00035d23) popup_ai2_link_window_g2

0x0001,

0xfa05,	// (0x0003d8ce) popup_ai2_link_window_g_ParamLimits

0xfa05,	// (0x0003d8ce) popup_ai2_link_window_g

0x7e69,	// (0x00035d32) ai2_mp_button_pane

0x7e71,	// (0x00035d3a) ai2_mp_volume_pane

0x6ce4,	// (0x00034bad) bg_popup_sub_pane_cp5_ParamLimits

0x6ce4,	// (0x00034bad) bg_popup_sub_pane_cp5

0x7e79,	// (0x00035d42) heading_ai2_gene_pane_ParamLimits

0x7e79,	// (0x00035d42) heading_ai2_gene_pane

0x7e85,	// (0x00035d4e) list_ai2_gene_pane_ParamLimits

0x7e85,	// (0x00035d4e) list_ai2_gene_pane

0x7ecd,	// (0x00035d96) cell_ai2_link_pane_ParamLimits

0x7ecd,	// (0x00035d96) cell_ai2_link_pane

0x7ee3,	// (0x00035dac) cell_ai2_link_pane_g1

0x2177,	// (0x00030040) grid_highlight_pane_cp7

0xac1a,	// (0x00038ae3) ai2_mp_volume_pane_g1

0x7f80,	// (0x00035e49) ai2_mp_volume_pane_g2

0x4093,	// (0x00031f5c) list_ai2_gene_pane_t1

0x7f78,	// (0x00035e41) ai2_mp_volume_pane_g3

0x0002,

0xfa1e,	// (0x0003d8e7) ai2_mp_volume_pane_g

0xac22,	// (0x00038aeb) volume_small_pane_cp3

0x7f88,	// (0x00035e51) aid_size_cell_ai2_button

0x7f90,	// (0x00035e59) grid_ai2_button_pane

0x7f99,	// (0x00035e62) cell_ai2_button_pane_ParamLimits

0x7f99,	// (0x00035e62) cell_ai2_button_pane

0x202a,	// (0x0002fef3) cell_ai2_button_pane_g1

0x2177,	// (0x00030040) grid_highlight_pane_cp8

0x7f38,	// (0x00035e01) ai2_gene_pane_t1_ParamLimits

0x7f38,	// (0x00035e01) ai2_gene_pane_t1

0x3079,	// (0x00030f42) aid_height_parent_landscape

0x3e16,	// (0x00031cdf) aid_height_set_list

0x7b98,	// (0x00035a61) aid_size_parent

0x7c6c,	// (0x00035b35) aid_size_cell_graphic_pane_ParamLimits

0x7e95,	// (0x00035d5e) popup_ai2_data_window_g1_ParamLimits

0x7e95,	// (0x00035d5e) popup_ai2_data_window_g1

0x7ea1,	// (0x00035d6a) ai2_news_ticker_pane_g1

0x7ea9,	// (0x00035d72) ai2_news_ticker_pane_g2

0x0001,

0xfa0a,	// (0x0003d8d3) ai2_news_ticker_pane_g

0x7eb1,	// (0x00035d7a) ai2_news_ticker_pane_t1

0x7ebf,	// (0x00035d88) ai2_news_ticker_pane_t2

0x0001,

0xfa0f,	// (0x0003d8d8) ai2_news_ticker_pane_t

0x7c4d,	// (0x00035b16) heading_ai2_gene_pane_g1

0x7eec,	// (0x00035db5) heading_ai2_gene_pane_t1_ParamLimits

0x7eec,	// (0x00035db5) heading_ai2_gene_pane_t1

0x7f01,	// (0x00035dca) list_highlight_pane_cp6

0x407d,	// (0x00031f46) ai2_gene_pane_ParamLimits

0x407d,	// (0x00031f46) ai2_gene_pane

0x40a1,	// (0x00031f6a) list_ai2_gene_pane_t2

0x0001,

0xfa14,	// (0x0003d8dd) list_ai2_gene_pane_t

0x7f09,	// (0x00035dd2) list_highlight_pane_cp8_ParamLimits

0x7f09,	// (0x00035dd2) list_highlight_pane_cp8

0x7f1a,	// (0x00035de3) ai2_gene_pane_g1_ParamLimits

0x7f1a,	// (0x00035de3) ai2_gene_pane_g1

0x7f2c,	// (0x00035df5) ai2_gene_pane_g2_ParamLimits

0x7f2c,	// (0x00035df5) ai2_gene_pane_g2

0x0001,

0xfa19,	// (0x0003d8e2) ai2_gene_pane_g_ParamLimits

0xfa19,	// (0x0003d8e2) ai2_gene_pane_g

0x2b95,	// (0x00030a5e) scroll_pane_cp12

0xef42,	// (0x0003ce0b) control_pane_t3_ParamLimits

0xef42,	// (0x0003ce0b) control_pane_t3

0x6626,	// (0x000344ef) status_small_pane_g8_ParamLimits

0x6626,	// (0x000344ef) status_small_pane_g8

0x317f,	// (0x00031048) popup_find_window_ParamLimits

0x3372,	// (0x0003123b) popup_note_image_window_ParamLimits

0xd571,	// (0x0003b43a) list_double2_graphic_pane_vc_g1_ParamLimits

0xd571,	// (0x0003b43a) list_double2_graphic_pane_vc_g1

0xe1f0,	// (0x0003c0b9) list_double2_graphic_pane_vc_g2_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double2_graphic_pane_vc_g2

0xe1fc,	// (0x0003c0c5) list_double2_graphic_pane_vc_g3_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x0003d4ce) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x0003d4ce) list_double2_graphic_pane_vc_g

0xd549,	// (0x0003b412) list_double2_graphic_pane_vc_t1_ParamLimits

0xd549,	// (0x0003b412) list_double2_graphic_pane_vc_t1

0xe1f0,	// (0x0003c0b9) list_single_heading_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_heading_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_single_heading_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_single_heading_pane_vc_g

0xdb14,	// (0x0003b9dd) list_single_heading_pane_vc_t1_ParamLimits

0xdb14,	// (0x0003b9dd) list_single_heading_pane_vc_t1

0xdb2a,	// (0x0003b9f3) list_single_heading_pane_vc_t2_ParamLimits

0xdb2a,	// (0x0003b9f3) list_single_heading_pane_vc_t2

0x0001,

0xf81d,	// (0x0003d6e6) list_single_heading_pane_vc_t_ParamLimits

0xf81d,	// (0x0003d6e6) list_single_heading_pane_vc_t

0x69b6,	// (0x0003487f) list_setting_number_pane_vc_g1_ParamLimits

0x69b6,	// (0x0003487f) list_setting_number_pane_vc_g1

0x69c2,	// (0x0003488b) list_setting_number_pane_vc_g2_ParamLimits

0x69c2,	// (0x0003488b) list_setting_number_pane_vc_g2

0x0001,

0xf822,	// (0x0003d6eb) list_setting_number_pane_vc_g_ParamLimits

0xf822,	// (0x0003d6eb) list_setting_number_pane_vc_g

0x69ce,	// (0x00034897) list_setting_number_pane_vc_t1_ParamLimits

0x69ce,	// (0x00034897) list_setting_number_pane_vc_t1

0x69e2,	// (0x000348ab) list_setting_number_pane_vc_t2_ParamLimits

0x69e2,	// (0x000348ab) list_setting_number_pane_vc_t2

0x69fe,	// (0x000348c7) list_setting_number_pane_vc_t3_ParamLimits

0x69fe,	// (0x000348c7) list_setting_number_pane_vc_t3

0x0002,

0xf827,	// (0x0003d6f0) list_setting_number_pane_vc_t_ParamLimits

0xf827,	// (0x0003d6f0) list_setting_number_pane_vc_t

0x6a24,	// (0x000348ed) set_value_pane_vc_ParamLimits

0x6a24,	// (0x000348ed) set_value_pane_vc

0xe283,	// (0x0003c14c) list_double2_graphic_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double2_graphic_pane_vc

0x7bf3,	// (0x00035abc) list_double2_large_graphic_pane_vc_ParamLimits

0x7bf3,	// (0x00035abc) list_double2_large_graphic_pane_vc

0xe283,	// (0x0003c14c) list_double2_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double2_pane_vc

0xe283,	// (0x0003c14c) list_double_graphic_heading_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_graphic_heading_pane_vc

0xe283,	// (0x0003c14c) list_double_graphic_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_graphic_pane_vc

0xe283,	// (0x0003c14c) list_double_heading_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_heading_pane_vc

0x7bf3,	// (0x00035abc) list_double_large_graphic_pane_vc_ParamLimits

0x7bf3,	// (0x00035abc) list_double_large_graphic_pane_vc

0xe283,	// (0x0003c14c) list_double_number_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_number_pane_vc

0xe283,	// (0x0003c14c) list_double_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_pane_vc

0xe283,	// (0x0003c14c) list_double_time_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_double_time_pane_vc

0xe283,	// (0x0003c14c) list_setting_number_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_setting_number_pane_vc

0xe283,	// (0x0003c14c) list_setting_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_setting_pane_vc

0xe283,	// (0x0003c14c) list_single_graphic_heading_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_single_graphic_heading_pane_vc

0xe283,	// (0x0003c14c) list_single_heading_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_single_heading_pane_vc

0xe283,	// (0x0003c14c) list_single_number_heading_pane_vc_ParamLimits

0xe283,	// (0x0003c14c) list_single_number_heading_pane_vc

0xd571,	// (0x0003b43a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd571,	// (0x0003b43a) list_double_graphic_heading_pane_vc_g1

0xe1f0,	// (0x0003c0b9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double_graphic_heading_pane_vc_g2

0xe1fc,	// (0x0003c0c5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x0003d4ce) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003d4ce) list_double_graphic_heading_pane_vc_g

0xdc0c,	// (0x0003bad5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdc0c,	// (0x0003bad5) list_double_graphic_heading_pane_vc_t1

0xdb14,	// (0x0003b9dd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdb14,	// (0x0003b9dd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa25,	// (0x0003d8ee) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x0003d8ee) list_double_graphic_heading_pane_vc_t

0x69b6,	// (0x0003487f) list_setting_pane_vc_g1_ParamLimits

0x69b6,	// (0x0003487f) list_setting_pane_vc_g1

0x69c2,	// (0x0003488b) list_setting_pane_vc_g2_ParamLimits

0x69c2,	// (0x0003488b) list_setting_pane_vc_g2

0x0001,

0xf822,	// (0x0003d6eb) list_setting_pane_vc_g_ParamLimits

0xf822,	// (0x0003d6eb) list_setting_pane_vc_g

0x8188,	// (0x00036051) list_setting_pane_vc_t1_ParamLimits

0x8188,	// (0x00036051) list_setting_pane_vc_t1

0x819c,	// (0x00036065) list_setting_pane_vc_t2_ParamLimits

0x819c,	// (0x00036065) list_setting_pane_vc_t2

0x0001,

0xfa68,	// (0x0003d931) list_setting_pane_vc_t_ParamLimits

0xfa68,	// (0x0003d931) list_setting_pane_vc_t

0x6a24,	// (0x000348ed) set_value_pane_cp_vc_ParamLimits

0x6a24,	// (0x000348ed) set_value_pane_cp_vc

0xe1f0,	// (0x0003c0b9) list_single_number_heading_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_number_heading_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_single_number_heading_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_single_number_heading_pane_vc_g

0xdb14,	// (0x0003b9dd) list_single_number_heading_pane_vc_t1_ParamLimits

0xdb14,	// (0x0003b9dd) list_single_number_heading_pane_vc_t1

0xdc1e,	// (0x0003bae7) list_single_number_heading_pane_vc_t2_ParamLimits

0xdc1e,	// (0x0003bae7) list_single_number_heading_pane_vc_t2

0xdc30,	// (0x0003baf9) list_single_number_heading_pane_vc_t3_ParamLimits

0xdc30,	// (0x0003baf9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6d,	// (0x0003d936) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003d936) list_single_number_heading_pane_vc_t

0xd571,	// (0x0003b43a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd571,	// (0x0003b43a) list_single_graphic_heading_pane_vc_g1

0xe1f0,	// (0x0003c0b9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_graphic_heading_pane_vc_g4

0xe1fc,	// (0x0003c0c5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe1fc,	// (0x0003c0c5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x0003d4ce) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0003d4ce) list_single_graphic_heading_pane_vc_g

0xdb14,	// (0x0003b9dd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdb14,	// (0x0003b9dd) list_single_graphic_heading_pane_vc_t1

0xdc42,	// (0x0003bb0b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdc42,	// (0x0003bb0b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0003d93d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0003d93d) list_single_graphic_heading_pane_vc_t

0xe1f0,	// (0x0003c0b9) list_double2_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double2_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_double2_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_double2_pane_vc_g

0xd4cc,	// (0x0003b395) list_double2_pane_vc_t1_ParamLimits

0xd4cc,	// (0x0003b395) list_double2_pane_vc_t1

0xe1c4,	// (0x0003c08d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe1c4,	// (0x0003c08d) list_double2_large_graphic_pane_vc_g1

0xe1d0,	// (0x0003c099) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe1d0,	// (0x0003c099) list_double2_large_graphic_pane_vc_g2

0xe1dc,	// (0x0003c0a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe1dc,	// (0x0003c0a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003d4f7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003d4f7) list_double2_large_graphic_pane_vc_g

0xd4b6,	// (0x0003b37f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd4b6,	// (0x0003b37f) list_double2_large_graphic_pane_vc_t1

0xe2ac,	// (0x0003c175) list_double_time_pane_vc_g1_ParamLimits

0xe2ac,	// (0x0003c175) list_double_time_pane_vc_g1

0xe2b8,	// (0x0003c181) list_double_time_pane_vc_g2_ParamLimits

0xe2b8,	// (0x0003c181) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0003d942) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0003d942) list_double_time_pane_vc_g

0xdc54,	// (0x0003bb1d) list_double_time_pane_vc_t1_ParamLimits

0xdc54,	// (0x0003bb1d) list_double_time_pane_vc_t1

0xdc6d,	// (0x0003bb36) list_double_time_pane_vc_t2_ParamLimits

0xdc6d,	// (0x0003bb36) list_double_time_pane_vc_t2

0xdca6,	// (0x0003bb6f) list_double_time_pane_vc_t3_ParamLimits

0xdca6,	// (0x0003bb6f) list_double_time_pane_vc_t3

0xdcbe,	// (0x0003bb87) list_double_time_pane_vc_t4_ParamLimits

0xdcbe,	// (0x0003bb87) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0003d947) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0003d947) list_double_time_pane_vc_t

0xe1f0,	// (0x0003c0b9) list_double_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_double_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_double_pane_vc_g

0xdcd0,	// (0x0003bb99) list_double_pane_vc_t1_ParamLimits

0xdcd0,	// (0x0003bb99) list_double_pane_vc_t1

0xdce2,	// (0x0003bbab) list_double_pane_vc_t2_ParamLimits

0xdce2,	// (0x0003bbab) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003d950) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003d950) list_double_pane_vc_t

0xe1f0,	// (0x0003c0b9) list_double_number_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double_number_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_double_number_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_double_number_pane_vc_g

0xdcf8,	// (0x0003bbc1) list_double_number_pane_vc_t1_ParamLimits

0xdcf8,	// (0x0003bbc1) list_double_number_pane_vc_t1

0xdd0c,	// (0x0003bbd5) list_double_number_pane_vc_t2_ParamLimits

0xdd0c,	// (0x0003bbd5) list_double_number_pane_vc_t2

0xdce2,	// (0x0003bbab) list_double_number_pane_vc_t3_ParamLimits

0xdce2,	// (0x0003bbab) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0003d955) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003d955) list_double_number_pane_vc_t

0xe2c4,	// (0x0003c18d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe2c4,	// (0x0003c18d) list_double_large_graphic_pane_vc_g1

0xe2d0,	// (0x0003c199) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe2d0,	// (0x0003c199) list_double_large_graphic_pane_vc_g2

0xe1dc,	// (0x0003c0a5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe1dc,	// (0x0003c0a5) list_double_large_graphic_pane_vc_g3

0xdd1e,	// (0x0003bbe7) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdd1e,	// (0x0003bbe7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0003d95c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0003d95c) list_double_large_graphic_pane_vc_g

0xdd2a,	// (0x0003bbf3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdd2a,	// (0x0003bbf3) list_double_large_graphic_pane_vc_t1

0xdd3c,	// (0x0003bc05) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdd3c,	// (0x0003bc05) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0003d965) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0003d965) list_double_large_graphic_pane_vc_t

0xe1f0,	// (0x0003c0b9) list_double_heading_pane_vc_g1_ParamLimits

0xe1f0,	// (0x0003c0b9) list_double_heading_pane_vc_g1

0xe1fc,	// (0x0003c0c5) list_double_heading_pane_vc_g2_ParamLimits

0xe1fc,	// (0x0003c0c5) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d4df) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d4df) list_double_heading_pane_vc_g

0xdd53,	// (0x0003bc1c) list_double_heading_pane_vc_t1_ParamLimits

0xdd53,	// (0x0003bc1c) list_double_heading_pane_vc_t1

0xdb14,	// (0x0003b9dd) list_double_heading_pane_vc_t2_ParamLimits

0xdb14,	// (0x0003b9dd) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0003d96a) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0003d96a) list_double_heading_pane_vc_t

0xd571,	// (0x0003b43a) list_double_graphic_pane_vc_g1_ParamLimits

0xd571,	// (0x0003b43a) list_double_graphic_pane_vc_g1

0xe208,	// (0x0003c0d1) list_double_graphic_pane_vc_g2_ParamLimits

0xe208,	// (0x0003c0d1) list_double_graphic_pane_vc_g2

0xe217,	// (0x0003c0e0) list_double_graphic_pane_vc_g3_ParamLimits

0xe217,	// (0x0003c0e0) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003d96f) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003d96f) list_double_graphic_pane_vc_g

0xdd65,	// (0x0003bc2e) list_double_graphic_pane_vc_t1_ParamLimits

0xdd65,	// (0x0003bc2e) list_double_graphic_pane_vc_t1

0xdce2,	// (0x0003bbab) list_double_graphic_pane_vc_t2_ParamLimits

0xdce2,	// (0x0003bbab) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0003d976) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0003d976) list_double_graphic_pane_vc_t

0x8ebf,	// (0x00036d88) aid_size_cell_fastswap

0xece1,	// (0x0003cbaa) aid_size_cell_touch_ParamLimits

0xece1,	// (0x0003cbaa) aid_size_cell_touch

0x907b,	// (0x00036f44) popup_fast_swap_wide_window_ParamLimits

0x907b,	// (0x00036f44) popup_fast_swap_wide_window

0xed92,	// (0x0003cc5b) touch_pane_ParamLimits

0xed92,	// (0x0003cc5b) touch_pane

0xd82f,	// (0x0003b6f8) button_value_adjust_pane_cp2

0xd837,	// (0x0003b700) button_value_adjust_pane_cp4

0xd857,	// (0x0003b720) form_field_data_pane_cp2

0x1c15,	// (0x0002fade) form_field_data_wide_pane_cp2

0x5e43,	// (0x00033d0c) bg_scroll_pane_ParamLimits

0x96de,	// (0x000375a7) scroll_handle_pane_ParamLimits

0x96f2,	// (0x000375bb) scroll_sc2_down_pane_ParamLimits

0x96f2,	// (0x000375bb) scroll_sc2_down_pane

0x5e74,	// (0x00033d3d) scroll_sc2_up_pane_ParamLimits

0x5e74,	// (0x00033d3d) scroll_sc2_up_pane

0x41c5,	// (0x0003208e) grid_wheel_folder_pane_g1_ParamLimits

0x41c5,	// (0x0003208e) grid_wheel_folder_pane_g1

0x99bc,	// (0x00037885) clock_nsta_pane_cp2_ParamLimits

0x99bc,	// (0x00037885) clock_nsta_pane_cp2

0x2e83,	// (0x00030d4c) listscroll_midp_pane_ParamLimits

0x2e93,	// (0x00030d5c) midp_canvas_pane

0x9cee,	// (0x00037bb7) nsta_clock_indic_pane

0x66a2,	// (0x0003456b) listscroll_form_pane_vc

0x66aa,	// (0x00034573) listscroll_set_pane_vc_ParamLimits

0x66aa,	// (0x00034573) listscroll_set_pane_vc

0x373e,	// (0x00031607) clock_nsta_pane

0x3761,	// (0x0003162a) indicator_nsta_pane

0x68b8,	// (0x00034781) bg_popup_sub_pane_cp2_ParamLimits

0x68cc,	// (0x00034795) find_pane_cp2_ParamLimits

0x68cc,	// (0x00034795) find_pane_cp2

0x68de,	// (0x000347a7) grid_toobar_pane_ParamLimits

0x6a30,	// (0x000348f9) list_form_gen_pane_vc_ParamLimits

0x6a30,	// (0x000348f9) list_form_gen_pane_vc

0x6a46,	// (0x0003490f) scroll_pane_cp8_vc_ParamLimits

0x6a46,	// (0x0003490f) scroll_pane_cp8_vc

0x6a96,	// (0x0003495f) data_form_wide_pane_vc_ParamLimits

0x6a96,	// (0x0003495f) data_form_wide_pane_vc

0x6c0d,	// (0x00034ad6) form_field_data_wide_pane_vc_g1

0x6c15,	// (0x00034ade) form_field_data_wide_pane_vc_t1_ParamLimits

0x6c15,	// (0x00034ade) form_field_data_wide_pane_vc_t1

0x5ab9,	// (0x00033982) input_focus_pane_cp6_vc_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_cp6_vc

0x3b15,	// (0x000319de) list_midp_pane_ParamLimits

0x6e3a,	// (0x00034d03) scroll_pane_cp16_ParamLimits

0x6e3a,	// (0x00034d03) scroll_pane_cp16

0x6e7a,	// (0x00034d43) button_value_adjust_pane_ParamLimits

0x6e7a,	// (0x00034d43) button_value_adjust_pane

0x3e22,	// (0x00031ceb) button_value_adjust_pane_cp6_ParamLimits

0x3e22,	// (0x00031ceb) button_value_adjust_pane_cp6

0x3f2c,	// (0x00031df5) settings_code_pane_cp_ParamLimits

0x3f2c,	// (0x00031df5) settings_code_pane_cp

0x202a,	// (0x0002fef3) cell_touch_pane_g1

0x202a,	// (0x0002fef3) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003d615) cell_touch_pane_g

0x40af,	// (0x00031f78) cell_touch_pane_cp_ParamLimits

0x40af,	// (0x00031f78) cell_touch_pane_cp

0x40cb,	// (0x00031f94) cell_touch_pane_ParamLimits

0x40cb,	// (0x00031f94) cell_touch_pane

0x202a,	// (0x0002fef3) scroll_sc2_down_pane_g1

0x202a,	// (0x0002fef3) scroll_sc2_up_pane_g1

0x2177,	// (0x00030040) bg_set_opt_pane_cp4_vc

0x7fab,	// (0x00035e74) list_set_graphic_pane_vc_g1_ParamLimits

0x7fab,	// (0x00035e74) list_set_graphic_pane_vc_g1

0x7fb7,	// (0x00035e80) list_set_graphic_pane_vc_g2_ParamLimits

0x7fb7,	// (0x00035e80) list_set_graphic_pane_vc_g2

0x0001,

0xfa2a,	// (0x0003d8f3) list_set_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x0003d8f3) list_set_graphic_pane_vc_g

0x7fc3,	// (0x00035e8c) text_primary_small_cp13_vc_ParamLimits

0x7fc3,	// (0x00035e8c) text_primary_small_cp13_vc

0x7fdb,	// (0x00035ea4) list_set_graphic_pane_vc_ParamLimits

0x7fdb,	// (0x00035ea4) list_set_graphic_pane_vc

0x2177,	// (0x00030040) input_focus_pane_cp2_vc

0x202a,	// (0x0002fef3) setting_code_pane_vc_g1

0x7fee,	// (0x00035eb7) setting_code_pane_vc_t1

0x7ffc,	// (0x00035ec5) set_text_pane_vc_t1_ParamLimits

0x7ffc,	// (0x00035ec5) set_text_pane_vc_t1

0x2177,	// (0x00030040) input_focus_pane_cp1_vc

0x8017,	// (0x00035ee0) list_set_text_pane_vc

0x202a,	// (0x0002fef3) setting_text_pane_vc_g1

0x2177,	// (0x00030040) bg_set_opt_pane_cp2_vc

0x8021,	// (0x00035eea) setting_slider_graphic_pane_vc_g1

0x8029,	// (0x00035ef2) setting_slider_graphic_pane_vc_t1

0x8037,	// (0x00035f00) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2f,	// (0x0003d8f8) setting_slider_graphic_pane_vc_t

0x8045,	// (0x00035f0e) slider_set_pane_cp_vc

0x804d,	// (0x00035f16) slider_set_pane_vc_g1

0x8056,	// (0x00035f1f) slider_set_pane_vc_g2

0x0006,

0xfa34,	// (0x0003d8fd) slider_set_pane_vc_g

0x5b08,	// (0x000339d1) set_opt_bg_pane_g1_copy1

0x5b10,	// (0x000339d9) set_opt_bg_pane_g2_copy1

0x8082,	// (0x00035f4b) set_opt_bg_pane_g3_copy1

0x5b20,	// (0x000339e9) set_opt_bg_pane_g4_copy1

0x5b28,	// (0x000339f1) set_opt_bg_pane_g5_copy1

0x5b30,	// (0x000339f9) set_opt_bg_pane_g6_copy1

0x808a,	// (0x00035f53) set_opt_bg_pane_g7_copy1

0x8092,	// (0x00035f5b) set_opt_bg_pane_g8_copy1

0x809a,	// (0x00035f63) set_opt_bg_pane_g9_copy1

0x2177,	// (0x00030040) bg_set_opt_pane_cp_vc

0x80a2,	// (0x00035f6b) setting_slider_pane_vc_t1

0x8029,	// (0x00035ef2) setting_slider_pane_vc_t2

0x8037,	// (0x00035f00) setting_slider_pane_vc_t3

0x0002,

0xfa43,	// (0x0003d90c) setting_slider_pane_vc_t

0x8045,	// (0x00035f0e) slider_set_pane_vc

0xa5cb,	// (0x00038494) volume_set_pane_vc_g1

0xac4d,	// (0x00038b16) volume_set_pane_vc_g2

0xac56,	// (0x00038b1f) volume_set_pane_vc_g3

0xac5f,	// (0x00038b28) volume_set_pane_vc_g4

0xac68,	// (0x00038b31) volume_set_pane_vc_g5

0xac71,	// (0x00038b3a) volume_set_pane_vc_g6

0xac7a,	// (0x00038b43) volume_set_pane_vc_g7

0xac83,	// (0x00038b4c) volume_set_pane_vc_g8

0xac8c,	// (0x00038b55) volume_set_pane_vc_g9

0xac95,	// (0x00038b5e) volume_set_pane_vc_g10

0x0009,

0xfa4a,	// (0x0003d913) volume_set_pane_vc_g

0x80b1,	// (0x00035f7a) volume_set_pane_vc

0x80b9,	// (0x00035f82) button_value_adjust_pane_cp1_vc

0x80c3,	// (0x00035f8c) list_highlight_pane_cp2_vc

0x80cc,	// (0x00035f95) list_set_pane_vc_ParamLimits

0x80cc,	// (0x00035f95) list_set_pane_vc

0x811e,	// (0x00035fe7) main_pane_set_vc_t1_ParamLimits

0x811e,	// (0x00035fe7) main_pane_set_vc_t1

0x8133,	// (0x00035ffc) main_pane_set_vc_t2_ParamLimits

0x8133,	// (0x00035ffc) main_pane_set_vc_t2

0x8145,	// (0x0003600e) main_pane_set_vc_t3_ParamLimits

0x8145,	// (0x0003600e) main_pane_set_vc_t3

0x8157,	// (0x00036020) main_pane_set_vc_t4_ParamLimits

0x8157,	// (0x00036020) main_pane_set_vc_t4

0x0003,

0xfa5f,	// (0x0003d928) main_pane_set_vc_t_ParamLimits

0xfa5f,	// (0x0003d928) main_pane_set_vc_t

0x8169,	// (0x00036032) setting_code_pane_vc_ParamLimits

0x8169,	// (0x00036032) setting_code_pane_vc

0x8178,	// (0x00036041) setting_slider_graphic_pane_vc

0x8178,	// (0x00036041) setting_slider_pane_vc

0x8178,	// (0x00036041) setting_text_pane_vc

0x8178,	// (0x00036041) setting_volume_pane_vc

0x8180,	// (0x00036049) scroll_pane_cp121_vc

0x5aa4,	// (0x0003396d) set_content_pane_vc

0x81be,	// (0x00036087) button_value_adjust_pane_g1

0x81c7,	// (0x00036090) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0003d97b) button_value_adjust_pane_g

0x81d0,	// (0x00036099) form_field_slider_wide_pane_vc_t1_ParamLimits

0x81d0,	// (0x00036099) form_field_slider_wide_pane_vc_t1

0x81e6,	// (0x000360af) form_field_slider_wide_pane_vc_t2_ParamLimits

0x81e6,	// (0x000360af) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0003d980) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0003d980) form_field_slider_wide_pane_vc_t

0x2339,	// (0x00030202) input_focus_pane_cp10_vc_ParamLimits

0x2339,	// (0x00030202) input_focus_pane_cp10_vc

0x81fb,	// (0x000360c4) slider_cont_pane_cp1_vc_ParamLimits

0x81fb,	// (0x000360c4) slider_cont_pane_cp1_vc

0x804d,	// (0x00035f16) slider_form_pane_g1_cp2

0x8056,	// (0x00035f1f) slider_form_pane_g2_cp2

0x8216,	// (0x000360df) form_field_slider_pane_vc_t3

0x8224,	// (0x000360ed) form_field_slider_pane_vc_t4

0x8232,	// (0x000360fb) slider_form_pane_vc_ParamLimits

0x8232,	// (0x000360fb) slider_form_pane_vc

0x823f,	// (0x00036108) form_field_slider_pane_vc_t1_ParamLimits

0x823f,	// (0x00036108) form_field_slider_pane_vc_t1

0x8255,	// (0x0003611e) form_field_slider_pane_vc_t2_ParamLimits

0x8255,	// (0x0003611e) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0003d990) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0003d990) form_field_slider_pane_vc_t

0x2339,	// (0x00030202) input_focus_pane_cp9_vc_ParamLimits

0x2339,	// (0x00030202) input_focus_pane_cp9_vc

0x8267,	// (0x00036130) slider_cont_pane_vc_ParamLimits

0x8267,	// (0x00036130) slider_cont_pane_vc

0x8279,	// (0x00036142) list_form_graphic_pane_cp_vc_ParamLimits

0x8279,	// (0x00036142) list_form_graphic_pane_cp_vc

0x6c0d,	// (0x00034ad6) form_field_popup_wide_pane_vc_g1

0x828e,	// (0x00036157) form_field_popup_wide_pane_vc_t1_ParamLimits

0x828e,	// (0x00036157) form_field_popup_wide_pane_vc_t1

0x5ab9,	// (0x00033982) input_focus_pane_cp8_vc_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_cp8_vc

0x82a3,	// (0x0003616c) list_form_wide_pane_vc_ParamLimits

0x82a3,	// (0x0003616c) list_form_wide_pane_vc

0x82af,	// (0x00036178) list_form_graphic_pane_vc_g1

0x82b7,	// (0x00036180) list_form_graphic_pane_vc_t1_ParamLimits

0x82b7,	// (0x00036180) list_form_graphic_pane_vc_t1

0x2383,	// (0x0003024c) list_highlight_pane_cp5_vc_ParamLimits

0x2383,	// (0x0003024c) list_highlight_pane_cp5_vc

0x82d3,	// (0x0003619c) list_form_graphic_pane_vc_ParamLimits

0x82d3,	// (0x0003619c) list_form_graphic_pane_vc

0x6c0d,	// (0x00034ad6) form_field_popup_pane_vc_g1

0x82e9,	// (0x000361b2) form_field_popup_pane_vc_t1_ParamLimits

0x82e9,	// (0x000361b2) form_field_popup_pane_vc_t1

0x5ab9,	// (0x00033982) input_focus_pane_cp7_vc_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_cp7_vc

0x82fe,	// (0x000361c7) list_form_pane_vc_ParamLimits

0x82fe,	// (0x000361c7) list_form_pane_vc

0x830a,	// (0x000361d3) data_form_pane_vc_t1_ParamLimits

0x830a,	// (0x000361d3) data_form_pane_vc_t1

0x5b08,	// (0x000339d1) input_focus_pane_vc_g1

0x5b10,	// (0x000339d9) input_focus_pane_vc_g2

0x5b18,	// (0x000339e1) input_focus_pane_vc_g3

0x5b20,	// (0x000339e9) input_focus_pane_vc_g4

0x5b28,	// (0x000339f1) input_focus_pane_vc_g5

0x5b30,	// (0x000339f9) input_focus_pane_vc_g6

0x5b38,	// (0x00033a01) input_focus_pane_vc_g7

0x5b40,	// (0x00033a09) input_focus_pane_vc_g8

0x5b48,	// (0x00033a11) input_focus_pane_vc_g9

0x202a,	// (0x0002fef3) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003d59e) input_focus_pane_vc_g

0x6a96,	// (0x0003495f) data_form_pane_vc_ParamLimits

0x6a96,	// (0x0003495f) data_form_pane_vc

0x6c0d,	// (0x00034ad6) form_field_data_pane_vc_g1

0x8325,	// (0x000361ee) form_field_data_pane_vc_t1_ParamLimits

0x8325,	// (0x000361ee) form_field_data_pane_vc_t1

0x5ab9,	// (0x00033982) input_focus_pane_vc_ParamLimits

0x5ab9,	// (0x00033982) input_focus_pane_vc

0x6aa2,	// (0x0003496b) button_value_adjust_pane_cp3_vc

0x833b,	// (0x00036204) button_value_adjust_pane_cp5_vc

0x8343,	// (0x0003620c) form_field_data_pane_vc_ParamLimits

0x8343,	// (0x0003620c) form_field_data_pane_vc

0x6aaa,	// (0x00034973) form_field_data_pane_vc_cp2

0x835a,	// (0x00036223) form_field_data_wide_pane_vc_ParamLimits

0x835a,	// (0x00036223) form_field_data_wide_pane_vc

0x8370,	// (0x00036239) form_field_data_wide_pane_vc_cp2

0x8378,	// (0x00036241) form_field_popup_pane_vc_ParamLimits

0x8378,	// (0x00036241) form_field_popup_pane_vc

0x838f,	// (0x00036258) form_field_popup_wide_pane_vc_ParamLimits

0x838f,	// (0x00036258) form_field_popup_wide_pane_vc

0x83a5,	// (0x0003626e) form_field_slider_pane_vc_ParamLimits

0x83a5,	// (0x0003626e) form_field_slider_pane_vc

0x83b8,	// (0x00036281) form_field_slider_wide_pane_vc_ParamLimits

0x83b8,	// (0x00036281) form_field_slider_wide_pane_vc

0x40e9,	// (0x00031fb2) grid_touch_1_pane_ParamLimits

0x40e9,	// (0x00031fb2) grid_touch_1_pane

0x40fd,	// (0x00031fc6) grid_touch_2_pane_ParamLimits

0x40fd,	// (0x00031fc6) grid_touch_2_pane

0x8421,	// (0x000362ea) touch_pane_g1_ParamLimits

0x8421,	// (0x000362ea) touch_pane_g1

0x83cb,	// (0x00036294) cell_app_pane_cp_wide_ParamLimits

0x83cb,	// (0x00036294) cell_app_pane_cp_wide

0x83db,	// (0x000362a4) grid_popup_fast_wide_pane_ParamLimits

0x83db,	// (0x000362a4) grid_popup_fast_wide_pane

0x83ef,	// (0x000362b8) scroll_pane_cp19_ParamLimits

0x83ef,	// (0x000362b8) scroll_pane_cp19

0x2177,	// (0x00030040) bg_popup_window_pane_cp20

0x8403,	// (0x000362cc) listscroll_popup_fast_wide_pane

0x6ab2,	// (0x0003497b) grid_indicator_nsta_pane

0x842f,	// (0x000362f8) clock_nsta_pane_g1

0x8438,	// (0x00036301) clock_nsta_pane_t1

0x4127,	// (0x00031ff0) cell_indicator_nsta_pane_ParamLimits

0x4127,	// (0x00031ff0) cell_indicator_nsta_pane

0x8421,	// (0x000362ea) cell_indicator_nsta_pane_g1

0x4144,	// (0x0003200d) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0003d99a) cell_indicator_nsta_pane_g

0x8454,	// (0x0003631d) clock_nsta_pane_cp

0x845c,	// (0x00036325) indicator_nsta_pane_cp

0x8465,	// (0x0003632e) nsta_clock_indic_pane_g1

0x24ea,	// (0x000303b3) grid_indicator_pane

0x5f66,	// (0x00033e2f) scroll_pane_cp29

0x9913,	// (0x000377dc) indicator_nsta_pane_cp2_ParamLimits

0x9913,	// (0x000377dc) indicator_nsta_pane_cp2

0x2383,	// (0x0003024c) main_apps_wheel_pane

0x6d21,	// (0x00034bea) form_midp_field_text_pane_ParamLimits

0x6e5a,	// (0x00034d23) scroll_bar_cp050_ParamLimits

0x849d,	// (0x00036366) cell_indicator_pane_ParamLimits

0x849d,	// (0x00036366) cell_indicator_pane

0x84b3,	// (0x0003637c) cell_indicator_pane_g1

0x4159,	// (0x00032022) grid_wheel_folder_pane_ParamLimits

0x4159,	// (0x00032022) grid_wheel_folder_pane

0x4167,	// (0x00032030) list_wheel_apps_pane_ParamLimits

0x4167,	// (0x00032030) list_wheel_apps_pane

0x4173,	// (0x0003203c) main_apps_wheel_pane_g1_ParamLimits

0x4173,	// (0x0003203c) main_apps_wheel_pane_g1

0x417f,	// (0x00032048) main_apps_wheel_pane_g2_ParamLimits

0x417f,	// (0x00032048) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0003d9a9) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0003d9a9) main_apps_wheel_pane_g

0x418b,	// (0x00032054) main_apps_wheel_pane_t1_ParamLimits

0x418b,	// (0x00032054) main_apps_wheel_pane_t1

0x419d,	// (0x00032066) list_wheel_apps_pane_g1

0x41a5,	// (0x0003206e) list_wheel_apps_pane_g2

0x41ad,	// (0x00032076) list_wheel_apps_pane_g3

0x41b5,	// (0x0003207e) list_wheel_apps_pane_g4

0x41bd,	// (0x00032086) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0003d9ae) list_wheel_apps_pane_g

0x2383,	// (0x0003024c) navi_icon_text_pane

0x364a,	// (0x00031513) aid_fill_nsta

0xadb6,	// (0x00038c7f) navi_icon_text_pane_g1

0xadc2,	// (0x00038c8b) navi_icon_text_pane_t1

0x61db,	// (0x000340a4) list_set_graphic_pane_t1_ParamLimits

0x61db,	// (0x000340a4) list_set_graphic_pane_t1

0x7503,	// (0x000353cc) popup_midp_note_alarm_window_t6_ParamLimits

0x7503,	// (0x000353cc) popup_midp_note_alarm_window_t6

0x7515,	// (0x000353de) popup_midp_note_alarm_window_t7_ParamLimits

0x7515,	// (0x000353de) popup_midp_note_alarm_window_t7

0x7527,	// (0x000353f0) popup_midp_note_alarm_window_t8_ParamLimits

0x7527,	// (0x000353f0) popup_midp_note_alarm_window_t8

0x7539,	// (0x00035402) popup_midp_note_alarm_window_t9_ParamLimits

0x7539,	// (0x00035402) popup_midp_note_alarm_window_t9

0x754b,	// (0x00035414) popup_midp_note_alarm_window_t10_ParamLimits

0x754b,	// (0x00035414) popup_midp_note_alarm_window_t10

0x755d,	// (0x00035426) popup_midp_note_alarm_window_t11_ParamLimits

0x755d,	// (0x00035426) popup_midp_note_alarm_window_t11

0x756f,	// (0x00035438) scroll_pane_cp17_ParamLimits

0x756f,	// (0x00035438) scroll_pane_cp17

0xa5cb,	// (0x00038494) volume_small_pane_cp_g1

0xadd4,	// (0x00038c9d) volume_small_pane_cp_g2

0xaddd,	// (0x00038ca6) volume_small_pane_cp_g3

0xade6,	// (0x00038caf) volume_small_pane_cp_g4

0xa5f8,	// (0x000384c1) volume_small_pane_cp_g5

0xadef,	// (0x00038cb8) volume_small_pane_cp_g6

0xadf8,	// (0x00038cc1) volume_small_pane_cp_g7

0xae01,	// (0x00038cca) volume_small_pane_cp_g8

0xae0a,	// (0x00038cd3) volume_small_pane_cp_g9

0xae13,	// (0x00038cdc) volume_small_pane_cp_g10

0x648a,	// (0x00034353) midp_ticker_pane_g1_ParamLimits

0x6496,	// (0x0003435f) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003d666) midp_ticker_pane_g_ParamLimits

0x64a2,	// (0x0003436b) midp_ticker_pane_t1_ParamLimits

0x3660,	// (0x00031529) aid_fill_nsta_2

0x6e46,	// (0x00034d0f) list_form2_midp_pane

0x7bd4,	// (0x00035a9d) midp_editing_number_pane_ParamLimits

0x7be0,	// (0x00035aa9) midp_ticker_pane_ParamLimits

0xae1c,	// (0x00038ce5) form2_midp_field_pane

0xae40,	// (0x00038d09) scroll_pane_cp51

0xba61,	// (0x0003992a) form2_midp_button_pane_ParamLimits

0xba61,	// (0x0003992a) form2_midp_button_pane

0xba73,	// (0x0003993c) form2_midp_content_pane_ParamLimits

0xba73,	// (0x0003993c) form2_midp_content_pane

0xba8d,	// (0x00039956) form2_midp_field_choice_group_pane

0xba95,	// (0x0003995e) form2_midp_field_pane_g1

0xba9d,	// (0x00039966) form2_midp_field_pane_g2

0xbaa5,	// (0x0003996e) form2_midp_field_pane_g3

0xbaad,	// (0x00039976) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0003d9d3) form2_midp_field_pane_g

0xbab5,	// (0x0003997e) form2_midp_gauge_slider_pane

0xbabd,	// (0x00039986) form2_midp_gauge_wait_pane

0xbac5,	// (0x0003998e) form2_midp_image_pane_ParamLimits

0xbac5,	// (0x0003998e) form2_midp_image_pane

0xbae0,	// (0x000399a9) form2_midp_label_pane_ParamLimits

0xbae0,	// (0x000399a9) form2_midp_label_pane

0x41f2,	// (0x000320bb) form2_midp_label_pane_cp_ParamLimits

0x41f2,	// (0x000320bb) form2_midp_label_pane_cp

0xbb18,	// (0x000399e1) form2_midp_string_pane_ParamLimits

0xbb18,	// (0x000399e1) form2_midp_string_pane

0x1e3a,	// (0x0002fd03) form2_midp_text_pane_ParamLimits

0x1e3a,	// (0x0002fd03) form2_midp_text_pane

0xbb2a,	// (0x000399f3) form2_midp_time_pane

0xbb3a,	// (0x00039a03) input_focus_pane_cp51_ParamLimits

0xbb3a,	// (0x00039a03) input_focus_pane_cp51

0xbb52,	// (0x00039a1b) form2_midp_label_pane_t1_ParamLimits

0xbb52,	// (0x00039a1b) form2_midp_label_pane_t1

0x1e53,	// (0x0002fd1c) form2_mdip_text_pane_t1_ParamLimits

0x1e53,	// (0x0002fd1c) form2_mdip_text_pane_t1

0xddab,	// (0x0003bc74) form2_midp_time_pane_t1

0xbb9a,	// (0x00039a63) form2_midp_gauge_slider_pane_t1

0x4211,	// (0x000320da) form2_midp_gauge_slider_pane_t2

0x4223,	// (0x000320ec) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0003d9dc) form2_midp_gauge_slider_pane_t

0xbbd0,	// (0x00039a99) form2_midp_slider_pane

0xbbdc,	// (0x00039aa5) form2_midp_gauge_wait_pane_t1

0xbbea,	// (0x00039ab3) form2_midp_wait_pane_ParamLimits

0xbbea,	// (0x00039ab3) form2_midp_wait_pane

0x3a92,	// (0x0003195b) list_single_2graphic_pane_cp4_ParamLimits

0x3a92,	// (0x0003195b) list_single_2graphic_pane_cp4

0x4235,	// (0x000320fe) list_single_midp_graphic_pane_cp_ParamLimits

0x4235,	// (0x000320fe) list_single_midp_graphic_pane_cp

0x2177,	// (0x00030040) list_highlight_pane_cp20

0xbc15,	// (0x00039ade) list_single_2graphic_pane_g1_cp4

0x7c4d,	// (0x00035b16) list_single_2graphic_pane_g2_cp4

0xbc1d,	// (0x00039ae6) list_single_2graphic_pane_t1_cp4

0x2383,	// (0x0003024c) list_highlight_pane_cp21

0xbc2c,	// (0x00039af5) list_single_midp_graphic_pane_g4_cp

0xbc3b,	// (0x00039b04) list_single_midp_graphic_pane_t1_cp

0x4253,	// (0x0003211c) form2_mdip_string_pane_t1_ParamLimits

0x4253,	// (0x0003211c) form2_mdip_string_pane_t1

0x2177,	// (0x00030040) bg_wml_button_pane_cp2

0x202a,	// (0x0002fef3) form2_midp_image_pane_g1

0xe23b,	// (0x0003c104) list_double_large_graphic_pane_g5_ParamLimits

0xe23b,	// (0x0003c104) list_double_large_graphic_pane_g5

0x2e83,	// (0x00030d4c) midp_form_pane_ParamLimits

0x2383,	// (0x0003024c) main_apps_wheel_pane_ParamLimits

0x33ec,	// (0x000312b5) popup_preview_window_ParamLimits

0x33ec,	// (0x000312b5) popup_preview_window

0x6772,	// (0x0003463b) popup_touch_info_window_ParamLimits

0x6772,	// (0x0003463b) popup_touch_info_window

0x6790,	// (0x00034659) popup_touch_menu_window_ParamLimits

0x6790,	// (0x00034659) popup_touch_menu_window

0x2020,	// (0x0002fee9) bg_popup_sub_pane_cp6

0xbcc8,	// (0x00039b91) list_touch_menu_pane

0xbcd0,	// (0x00039b99) list_single_touch_menu_pane_ParamLimits

0xbcd0,	// (0x00039b99) list_single_touch_menu_pane

0xbce7,	// (0x00039bb0) list_single_touch_menu_pane_t1

0x2383,	// (0x0003024c) bg_popup_sub_pane_cp7_ParamLimits

0x2383,	// (0x0003024c) bg_popup_sub_pane_cp7

0xbcf5,	// (0x00039bbe) heading_sub_pane

0xbcfd,	// (0x00039bc6) list_touch_info_pane_ParamLimits

0xbcfd,	// (0x00039bc6) list_touch_info_pane

0xbd0c,	// (0x00039bd5) list_single_touch_info_pane_ParamLimits

0xbd0c,	// (0x00039bd5) list_single_touch_info_pane

0xbd1d,	// (0x00039be6) list_single_touch_info_pane_t1

0xbd2b,	// (0x00039bf4) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0003d9ea) list_single_touch_info_pane_t

0x6460,	// (0x00034329) bg_popup_heading_pane_cp

0xbd39,	// (0x00039c02) heading_sub_pane_t1

0x6a5c,	// (0x00034925) bg_popup_preview_window_pane_cp_ParamLimits

0x6a5c,	// (0x00034925) bg_popup_preview_window_pane_cp

0xbcf5,	// (0x00039bbe) heading_preview_pane

0xbcfd,	// (0x00039bc6) list_preview_pane_ParamLimits

0xbcfd,	// (0x00039bc6) list_preview_pane

0xbd47,	// (0x00039c10) popup_preview_window_g1

0xbd0c,	// (0x00039bd5) list_single_preview_pane_ParamLimits

0xbd0c,	// (0x00039bd5) list_single_preview_pane

0xbd4f,	// (0x00039c18) list_single_preview_pane_g1

0xbd57,	// (0x00039c20) list_single_preview_pane_t1

0xbd1d,	// (0x00039be6) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0003d9ef) list_single_preview_pane_t

0xbd65,	// (0x00039c2e) bg_popup_heading_pane_cp2_ParamLimits

0xbd65,	// (0x00039c2e) bg_popup_heading_pane_cp2

0xbd7b,	// (0x00039c44) heading_preview_pane_g1

0xbd83,	// (0x00039c4c) heading_preview_pane_t1_ParamLimits

0xbd83,	// (0x00039c4c) heading_preview_pane_t1

0x251a,	// (0x000303e3) soft_indicator_pane_t1_ParamLimits

0x2b71,	// (0x00030a3a) scroll_pane_ParamLimits

0x5e6b,	// (0x00033d34) scroll_sc2_left_pane

0x5e62,	// (0x00033d2b) scroll_sc2_right_pane

0x5e8a,	// (0x00033d53) scroll_bg_pane_g1_ParamLimits

0x5e9f,	// (0x00033d68) scroll_bg_pane_g2_ParamLimits

0x5eb7,	// (0x00033d80) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003d5f5) scroll_bg_pane_g_ParamLimits

0x5e8a,	// (0x00033d53) scroll_handle_pane_g1_ParamLimits

0x5ed9,	// (0x00033da2) scroll_handle_pane_g2_ParamLimits

0x5eb7,	// (0x00033d80) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003d5fc) scroll_handle_pane_g_ParamLimits

0x66ca,	// (0x00034593) popup_choice_list_window_ParamLimits

0x66ca,	// (0x00034593) popup_choice_list_window

0x68c4,	// (0x0003478d) choice_list_pane

0x693a,	// (0x00034803) cell_toolbar_pane_t1

0x6962,	// (0x0003482b) toolbar_button_pane_ParamLimits

0x7935,	// (0x000357fe) ai_gene_pane_1_t2_ParamLimits

0x7935,	// (0x000357fe) ai_gene_pane_1_t2

0x0001,

0xf944,	// (0x0003d80d) ai_gene_pane_1_t_ParamLimits

0xf944,	// (0x0003d80d) ai_gene_pane_1_t

0xbda0,	// (0x00039c69) scroll_sc2_left_pane_g1

0xbda0,	// (0x00039c69) scroll_sc2_right_pane_g1

0x5c35,	// (0x00033afe) bg_popup_sub_pane_cp10

0xbdaa,	// (0x00039c73) list_choice_list_pane

0xbdc1,	// (0x00039c8a) list_single_choice_list_pane_ParamLimits

0xbdc1,	// (0x00039c8a) list_single_choice_list_pane

0xbdd5,	// (0x00039c9e) list_single_choice_list_pane_g1

0x5c20,	// (0x00033ae9) list_single_choice_list_pane_t1_ParamLimits

0x5c20,	// (0x00033ae9) list_single_choice_list_pane_t1

0xbddd,	// (0x00039ca6) choice_list_pane_g1

0xbde5,	// (0x00039cae) choice_list_pane_t1

0x2020,	// (0x0002fee9) input_focus_pane_cp11

0x5db7,	// (0x00033c80) title_pane_stacon_g2_ParamLimits

0x5db7,	// (0x00033c80) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003d5db) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003d5db) title_pane_stacon_g

0x6460,	// (0x00034329) cursor_press_pane

0x3153,	// (0x0003101c) popup_fep_hwr_window_ParamLimits

0x3153,	// (0x0003101c) popup_fep_hwr_window

0x671c,	// (0x000345e5) popup_fep_vkb_window_ParamLimits

0x671c,	// (0x000345e5) popup_fep_vkb_window

0xbdf3,	// (0x00039cbc) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0003da18) fep_vkb_side_pane_g_ParamLimits

0xae81,	// (0x00038d4a) fep_hwr_candidate_pane_ParamLimits

0xae81,	// (0x00038d4a) fep_hwr_candidate_pane

0xaea9,	// (0x00038d72) fep_hwr_side_pane_ParamLimits

0xaea9,	// (0x00038d72) fep_hwr_side_pane

0xaec9,	// (0x00038d92) fep_hwr_top_pane_ParamLimits

0xaec9,	// (0x00038d92) fep_hwr_top_pane

0xaee1,	// (0x00038daa) fep_hwr_write_pane_ParamLimits

0xaee1,	// (0x00038daa) fep_hwr_write_pane

0xfb4f,	// (0x0003da18) fep_vkb_side_pane_g

0xbdfb,	// (0x00039cc4) fep_hwr_top_pane_g1

0xbe0d,	// (0x00039cd6) fep_hwr_top_pane_g2

0xaf1b,	// (0x00038de4) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0003d9f4) fep_hwr_top_pane_g

0xaf30,	// (0x00038df9) fep_hwr_top_text_pane

0x5fd3,	// (0x00033e9c) fep_hwr_top_text_pane_g1

0xbe43,	// (0x00039d0c) fep_hwr_top_text_pane_t1

0xb01e,	// (0x00038ee7) fep_hwr_candidate_pane_g1

0xc053,	// (0x00039f1c) fep_vkb_keypad_pane_g3_ParamLimits

0xc053,	// (0x00039f1c) fep_vkb_keypad_pane_g3

0xc075,	// (0x00039f3e) fep_vkb_keypad_pane_g4_ParamLimits

0xc075,	// (0x00039f3e) fep_vkb_keypad_pane_g4

0xc0e4,	// (0x00039fad) fep_vkb_bottom_pane_g2_ParamLimits

0xc0e4,	// (0x00039fad) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0003da1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0003da1f) fep_vkb_bottom_pane_g

0xbda0,	// (0x00039c69) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0003da29) cell_vkb_side_pane_g

0xc16f,	// (0x0003a038) cell_vkb_side_pane_t1

0xc17d,	// (0x0003a046) cell_vkb_side_pane_t1_copy1

0xbda0,	// (0x00039c69) bg_fep_vkb_candidate_pane_g2

0xc2a1,	// (0x0003a16a) cell_vkb_candidate_pane_ParamLimits

0xbe51,	// (0x00039d1a) aid_size_cell_vkb_ParamLimits

0xbe51,	// (0x00039d1a) aid_size_cell_vkb

0xc2a1,	// (0x0003a16a) cell_vkb_candidate_pane

0xb045,	// (0x00038f0e) bg_popup_fep_shadow_pane_g1

0xbec7,	// (0x00039d90) fep_vkb_bottom_pane_ParamLimits

0xbec7,	// (0x00039d90) fep_vkb_bottom_pane

0xbf04,	// (0x00039dcd) fep_vkb_candidate_pane_ParamLimits

0xbf04,	// (0x00039dcd) fep_vkb_candidate_pane

0xbf20,	// (0x00039de9) fep_vkb_keypad_pane_ParamLimits

0xbf20,	// (0x00039de9) fep_vkb_keypad_pane

0xbf54,	// (0x00039e1d) fep_vkb_side_pane_ParamLimits

0xbf54,	// (0x00039e1d) fep_vkb_side_pane

0xbf80,	// (0x00039e49) fep_vkb_top_pane_ParamLimits

0xbf80,	// (0x00039e49) fep_vkb_top_pane

0xbfac,	// (0x00039e75) fep_vkb_top_pane_g1_ParamLimits

0xbfac,	// (0x00039e75) fep_vkb_top_pane_g1

0xbfbb,	// (0x00039e84) fep_vkb_top_pane_g2_ParamLimits

0xbfbb,	// (0x00039e84) fep_vkb_top_pane_g2

0xbfca,	// (0x00039e93) fep_vkb_top_pane_g3_ParamLimits

0xbfca,	// (0x00039e93) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0003da0f) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0003da0f) fep_vkb_top_pane_g

0xbfe8,	// (0x00039eb1) fep_vkb_top_text_pane_ParamLimits

0xbfe8,	// (0x00039eb1) fep_vkb_top_text_pane

0x431a,	// (0x000321e3) fep_vkb_side_pane_g1_ParamLimits

0x431a,	// (0x000321e3) fep_vkb_side_pane_g1

0xc042,	// (0x00039f0b) grid_vkb_side_pane_ParamLimits

0xc042,	// (0x00039f0b) grid_vkb_side_pane

0xb04d,	// (0x00038f16) bg_popup_fep_shadow_pane_g2

0xb056,	// (0x00038f1f) bg_popup_fep_shadow_pane_g3

0xb05e,	// (0x00038f27) bg_popup_fep_shadow_pane_g4

0xb067,	// (0x00038f30) bg_popup_fep_shadow_pane_g5

0xb06f,	// (0x00038f38) bg_popup_fep_shadow_pane_g6

0xb077,	// (0x00038f40) bg_popup_fep_shadow_pane_g7

0x5b20,	// (0x000339e9) bg_popup_fep_shadow_pane_g8

0xc093,	// (0x00039f5c) grid_vkb_keypad_number_pane_ParamLimits

0xc093,	// (0x00039f5c) grid_vkb_keypad_number_pane

0xc0a3,	// (0x00039f6c) grid_vkb_keypad_pane_ParamLimits

0xc0a3,	// (0x00039f6c) grid_vkb_keypad_pane

0xc0c9,	// (0x00039f92) fep_vkb_bottom_pane_g1_ParamLimits

0xc0c9,	// (0x00039f92) fep_vkb_bottom_pane_g1

0xc0f2,	// (0x00039fbb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0f2,	// (0x00039fbb) grid_vkb_keypad_bottom_left_pane

0xc107,	// (0x00039fd0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc107,	// (0x00039fd0) grid_vkb_keypad_bottom_right_pane

0xc11c,	// (0x00039fe5) fep_vkb_top_text_pane_g1

0x4361,	// (0x0003222a) fep_vkb_top_text_pane_t1

0x4373,	// (0x0003223c) cell_vkb_side_pane_ParamLimits

0x4373,	// (0x0003223c) cell_vkb_side_pane

0xbda0,	// (0x00039c69) cell_vkb_side_pane_g1

0xc18b,	// (0x0003a054) cell_vkb_keypad_pane_ParamLimits

0xc18b,	// (0x0003a054) cell_vkb_keypad_pane

0xc1f8,	// (0x0003a0c1) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0003da3c) bg_popup_fep_shadow_pane_g

0xb087,	// (0x00038f50) cell_hwr_side_pane_g1

0xb087,	// (0x00038f50) cell_hwr_side_pane_g2

0xc202,	// (0x0003a0cb) cell_vkb_keypad_pane_t1

0x4389,	// (0x00032252) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x4389,	// (0x00032252) cell_vkb_keypad_bottom_left_pane

0x439e,	// (0x00032267) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x439e,	// (0x00032267) cell_vkb_keypad_bottom_right_pane

0xbda0,	// (0x00039c69) cell_vkb_keypad_bottom_left_pane_g1

0xbda0,	// (0x00039c69) cell_vkb_keypad_bottom_right_pane_g1

0xc266,	// (0x0003a12f) cell_vkb_keypad_number_pane_ParamLimits

0xc266,	// (0x0003a12f) cell_vkb_keypad_number_pane

0xc285,	// (0x0003a14e) cell_vkb_keypad_number_pane_g1

0xc28f,	// (0x0003a158) cell_vkb_keypad_number_pane_g2

0xc298,	// (0x0003a161) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0003da2e) cell_vkb_keypad_number_pane_g

0xc202,	// (0x0003a0cb) cell_vkb_keypad_number_pane_t1

0xc2ba,	// (0x0003a183) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0003da4f) cell_hwr_side_pane_g

0xc2d3,	// (0x0003a19c) cell_hwr_side_pane_t1

0xb091,	// (0x00038f5a) cell_hwr_side_pane_t1_copy1

0xb09f,	// (0x00038f68) cell_hwr_candidate_pane_g1

0xb0ce,	// (0x00038f97) cell_hwr_candidate_pane_t1

0xbda0,	// (0x00039c69) cell_vkb_candidate_pane_g2

0xc317,	// (0x0003a1e0) cell_vkb_candidate_pane_t1

0xae4c,	// (0x00038d15) bg_popup_fep_shadow_pane_ParamLimits

0xae4c,	// (0x00038d15) bg_popup_fep_shadow_pane

0xaefb,	// (0x00038dc4) bg_fep_hwr_top_pane_g4

0xbe1f,	// (0x00039ce8) bg_hwr_side_pane_g1_ParamLimits

0xbe1f,	// (0x00039ce8) bg_hwr_side_pane_g1

0xf163,	// (0x0003d02c) cell_hwr_side_pane_ParamLimits

0xf163,	// (0x0003d02c) cell_hwr_side_pane

0xafa7,	// (0x00038e70) fep_hwr_write_pane_g1_ParamLimits

0xafa7,	// (0x00038e70) fep_hwr_write_pane_g1

0xafb4,	// (0x00038e7d) fep_hwr_write_pane_g2_ParamLimits

0xafb4,	// (0x00038e7d) fep_hwr_write_pane_g2

0xafc1,	// (0x00038e8a) fep_hwr_write_pane_g3_ParamLimits

0xafc1,	// (0x00038e8a) fep_hwr_write_pane_g3

0xf183,	// (0x0003d04c) fep_hwr_write_pane_g4_ParamLimits

0xf183,	// (0x0003d04c) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0003d9fb) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0003d9fb) fep_hwr_write_pane_g

0xaefb,	// (0x00038dc4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xaefb,	// (0x00038dc4) bg_fep_hwr_candidate_pane_g2

0xafe4,	// (0x00038ead) cell_hwr_candidate_pane_ParamLimits

0xafe4,	// (0x00038ead) cell_hwr_candidate_pane

0xb01e,	// (0x00038ee7) fep_hwr_candidate_pane_g1_ParamLimits

0xbe7f,	// (0x00039d48) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe7f,	// (0x00039d48) bg_popup_fep_shadow_pane_cp2

0xbfda,	// (0x00039ea3) fep_vkb_top_pane_g4_ParamLimits

0xbfda,	// (0x00039ea3) fep_vkb_top_pane_g4

0xc020,	// (0x00039ee9) fep_vkb_side_pane_g2_ParamLimits

0xc020,	// (0x00039ee9) fep_vkb_side_pane_g2

0x1b23,	// (0x0002f9ec) list_setting_pane_t4_ParamLimits

0x1b23,	// (0x0002f9ec) list_setting_pane_t4

0x1bbd,	// (0x0002fa86) list_setting_number_pane_t5_ParamLimits

0x1bbd,	// (0x0002fa86) list_setting_number_pane_t5

0x2db3,	// (0x00030c7c) list_double_heading_pane_cp2_ParamLimits

0x2db3,	// (0x00030c7c) list_double_heading_pane_cp2

0x62d5,	// (0x0003419e) list_double_heading_pane_g1_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_double_heading_pane_g1_cp2

0xc325,	// (0x0003a1ee) list_double_heading_pane_g2_cp2_ParamLimits

0xc325,	// (0x0003a1ee) list_double_heading_pane_g2_cp2

0xc339,	// (0x0003a202) list_double_heading_pane_t1_cp2_ParamLimits

0xc339,	// (0x0003a202) list_double_heading_pane_t1_cp2

0xc34f,	// (0x0003a218) list_double_heading_pane_t2_cp2_ParamLimits

0xc34f,	// (0x0003a218) list_double_heading_pane_t2_cp2

0x200a,	// (0x0002fed3) aid_value_unit2

0x90b7,	// (0x00036f80) popup_preview_fixed_window

0x26d8,	// (0x000305a1) bg_popup_preview_window_pane_cp02

0xc361,	// (0x0003a22a) list_preview_fixed_pane

0xc3a7,	// (0x0003a270) list_empty_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_empty_pane_fp

0xc3a7,	// (0x0003a270) list_single_cale_day_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_cale_day_pane_fp

0xc3a7,	// (0x0003a270) list_single_graphic_heading_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_graphic_heading_pane_fp

0xc3a7,	// (0x0003a270) list_single_graphic_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_graphic_pane_fp

0xc3a7,	// (0x0003a270) list_single_heading_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_heading_pane_fp

0xc3a7,	// (0x0003a270) list_single_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_pane_fp

0xc3bb,	// (0x0003a284) list_single_pane_fp_g1_ParamLimits

0xc3bb,	// (0x0003a284) list_single_pane_fp_g1

0xe1f0,	// (0x0003c0b9) list_single_pane_fp_g2_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_pane_fp_g2

0xe2df,	// (0x0003c1a8) list_single_pane_fp_g3_ParamLimits

0xe2df,	// (0x0003c1a8) list_single_pane_fp_g3

0xc3c7,	// (0x0003a290) list_single_pane_fp_g4_ParamLimits

0xc3c7,	// (0x0003a290) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0003da62) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0003da62) list_single_pane_fp_g

0xdddf,	// (0x0003bca8) list_single_pane_fp_t1_ParamLimits

0xdddf,	// (0x0003bca8) list_single_pane_fp_t1

0xddf6,	// (0x0003bcbf) list_single_graphic_pane_fp_g1_ParamLimits

0xddf6,	// (0x0003bcbf) list_single_graphic_pane_fp_g1

0xc3bb,	// (0x0003a284) list_single_graphic_pane_fp_g2_ParamLimits

0xc3bb,	// (0x0003a284) list_single_graphic_pane_fp_g2

0xe1f0,	// (0x0003c0b9) list_single_graphic_pane_fp_g3_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_graphic_pane_fp_g3

0xe2df,	// (0x0003c1a8) list_single_graphic_pane_fp_g4_ParamLimits

0xe2df,	// (0x0003c1a8) list_single_graphic_pane_fp_g4

0xc3c7,	// (0x0003a290) list_single_graphic_pane_fp_g5_ParamLimits

0xc3c7,	// (0x0003a290) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0003da6b) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0003da6b) list_single_graphic_pane_fp_g

0xde02,	// (0x0003bccb) list_single_graphic_pane_fp_t1_ParamLimits

0xde02,	// (0x0003bccb) list_single_graphic_pane_fp_t1

0xddf6,	// (0x0003bcbf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xddf6,	// (0x0003bcbf) list_single_graphic_heading_pane_fp_g1

0xc3bb,	// (0x0003a284) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc3bb,	// (0x0003a284) list_single_graphic_heading_pane_fp_g2

0xe1f0,	// (0x0003c0b9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_graphic_heading_pane_fp_g3

0xe2df,	// (0x0003c1a8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe2df,	// (0x0003c1a8) list_single_graphic_heading_pane_fp_g4

0xc3c7,	// (0x0003a290) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3c7,	// (0x0003a290) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003da6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003da6b) list_single_graphic_heading_pane_fp_g

0xde18,	// (0x0003bce1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xde18,	// (0x0003bce1) list_single_graphic_heading_pane_fp_t1

0xde2e,	// (0x0003bcf7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xde2e,	// (0x0003bcf7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0003da76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0003da76) list_single_graphic_heading_pane_fp_t

0xde40,	// (0x0003bd09) list_single_cale_day_pane_fp_g1_ParamLimits

0xde40,	// (0x0003bd09) list_single_cale_day_pane_fp_g1

0xc3d3,	// (0x0003a29c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3d3,	// (0x0003a29c) list_single_cale_day_pane_fp_g2

0xe2f3,	// (0x0003c1bc) list_single_cale_day_pane_fp_g3_ParamLimits

0xe2f3,	// (0x0003c1bc) list_single_cale_day_pane_fp_g3

0xe31b,	// (0x0003c1e4) list_single_cale_day_pane_fp_g4_ParamLimits

0xe31b,	// (0x0003c1e4) list_single_cale_day_pane_fp_g4

0xe33f,	// (0x0003c208) list_single_cale_day_pane_fp_g5_ParamLimits

0xe33f,	// (0x0003c208) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0003da7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0003da7b) list_single_cale_day_pane_fp_g

0xde78,	// (0x0003bd41) list_single_cale_day_pane_fp_t1_ParamLimits

0xde78,	// (0x0003bd41) list_single_cale_day_pane_fp_t1

0xde9e,	// (0x0003bd67) list_single_cale_day_pane_fp_t2_ParamLimits

0xde9e,	// (0x0003bd67) list_single_cale_day_pane_fp_t2

0xdeb7,	// (0x0003bd80) list_single_cale_day_pane_fp_t3_ParamLimits

0xdeb7,	// (0x0003bd80) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0003da86) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0003da86) list_single_cale_day_pane_fp_t

0xc3bb,	// (0x0003a284) list_empty_pane_fp_g1_ParamLimits

0xc3bb,	// (0x0003a284) list_empty_pane_fp_g1

0xded0,	// (0x0003bd99) list_empty_pane_fp_t1

0xdede,	// (0x0003bda7) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003da8d) list_empty_pane_fp_t

0xc3bb,	// (0x0003a284) list_single_heading_pane_fp_g1_ParamLimits

0xc3bb,	// (0x0003a284) list_single_heading_pane_fp_g1

0xe1f0,	// (0x0003c0b9) list_single_heading_pane_fp_g2_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_heading_pane_fp_g2

0xe2df,	// (0x0003c1a8) list_single_heading_pane_fp_g3_ParamLimits

0xe2df,	// (0x0003c1a8) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0003da92) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0003da92) list_single_heading_pane_fp_g

0xdeec,	// (0x0003bdb5) list_single_heading_pane_fp_t1_ParamLimits

0xdeec,	// (0x0003bdb5) list_single_heading_pane_fp_t1

0xdefe,	// (0x0003bdc7) list_single_heading_pane_fp_t2_ParamLimits

0xdefe,	// (0x0003bdc7) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0003da99) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0003da99) list_single_heading_pane_fp_t

0x5c41,	// (0x00033b0a) aid_size_cell_fast

0x264d,	// (0x00030516) soft_indicator_pane_cp1_t1

0x5c7e,	// (0x00033b47) cell_app_pane_cp2_ParamLimits

0x5c7e,	// (0x00033b47) cell_app_pane_cp2

0xae6e,	// (0x00038d37) fep_hwr_candidate_drop_down_list_pane

0xb038,	// (0x00038f01) fep_hwr_candidate_pane_g3_ParamLimits

0xb038,	// (0x00038f01) fep_hwr_candidate_pane_g3

0x53d0,	// (0x00033299) fep_hwr_candidate_pane_g4_ParamLimits

0x53d0,	// (0x00033299) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0003da08) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0003da08) fep_hwr_candidate_pane_g

0xbef3,	// (0x00039dbc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbef3,	// (0x00039dbc) fep_vkb_candidate_drop_down_list_pane

0xc2c2,	// (0x0003a18b) fep_vkb_candidate_pane_g3

0xc2ca,	// (0x0003a193) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0003da35) fep_vkb_candidate_pane_g

0xb09f,	// (0x00038f68) cell_hwr_candidate_pane_g1_ParamLimits

0xb0ad,	// (0x00038f76) cell_hwr_candidate_pane_g3_ParamLimits

0xb0ad,	// (0x00038f76) cell_hwr_candidate_pane_g3

0xddbe,	// (0x0003bc87) cell_hwr_candidate_pane_g4_ParamLimits

0xddbe,	// (0x0003bc87) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0003da54) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0003da54) cell_hwr_candidate_pane_g

0xc2e1,	// (0x0003a1aa) cell_vkb_candidate_pane_g3_ParamLimits

0xc2e1,	// (0x0003a1aa) cell_vkb_candidate_pane_g3

0xc2fc,	// (0x0003a1c5) cell_vkb_candidate_pane_g4_ParamLimits

0xc2fc,	// (0x0003a1c5) cell_vkb_candidate_pane_g4

0xc3df,	// (0x0003a2a8) cell_app_pane_cp2_g1_ParamLimits

0xc3df,	// (0x0003a2a8) cell_app_pane_cp2_g1

0xc3fd,	// (0x0003a2c6) cell_app_pane_cp2_g2_ParamLimits

0xc3fd,	// (0x0003a2c6) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0003da9e) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0003da9e) cell_app_pane_cp2_g

0xc409,	// (0x0003a2d2) cell_app_pane_cp2_t1_ParamLimits

0xc409,	// (0x0003a2d2) cell_app_pane_cp2_t1

0x5ab9,	// (0x00033982) grid_highlight_pane_cp1_ParamLimits

0x5ab9,	// (0x00033982) grid_highlight_pane_cp1

0xb0eb,	// (0x00038fb4) cell_hwr_candidate_pane_cp1_ParamLimits

0xb0eb,	// (0x00038fb4) cell_hwr_candidate_pane_cp1

0xb09f,	// (0x00038f68) fep_hwr_candidate_drop_down_list_pane_g1

0xb109,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_pane_g2

0xb116,	// (0x00038fdf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003daa3) fep_hwr_candidate_drop_down_list_pane_g

0xb123,	// (0x00038fec) fep_hwr_candidate_drop_down_list_scroll_pane

0xb12c,	// (0x00038ff5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb12c,	// (0x00038ff5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb139,	// (0x00039002) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb139,	// (0x00039002) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb146,	// (0x0003900f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb146,	// (0x0003900f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb153,	// (0x0003901c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb153,	// (0x0003901c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb16e,	// (0x00039037) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb16e,	// (0x00039037) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb189,	// (0x00039052) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb189,	// (0x00039052) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb1a4,	// (0x0003906d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb1a4,	// (0x0003906d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb1bf,	// (0x00039088) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb1bf,	// (0x00039088) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003daaa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003daaa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x43b9,	// (0x00032282) cell_vkb_candidate_pane_cp1_ParamLimits

0x43b9,	// (0x00032282) cell_vkb_candidate_pane_cp1

0xbfda,	// (0x00039ea3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbfda,	// (0x00039ea3) fep_vkb_candidate_drop_down_list_pane_g1

0xc43e,	// (0x0003a307) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc43e,	// (0x0003a307) fep_vkb_candidate_drop_down_list_pane_g2

0xc44b,	// (0x0003a314) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc44b,	// (0x0003a314) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0003dabb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0003dabb) fep_vkb_candidate_drop_down_list_pane_g

0xc458,	// (0x0003a321) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc458,	// (0x0003a321) fep_vkb_candidate_drop_down_list_scroll_pane

0xc465,	// (0x0003a32e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc465,	// (0x0003a32e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc472,	// (0x0003a33b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc472,	// (0x0003a33b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc47e,	// (0x0003a347) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc47e,	// (0x0003a347) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc48a,	// (0x0003a353) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc48a,	// (0x0003a353) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc4ab,	// (0x0003a374) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc4ab,	// (0x0003a374) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc4cc,	// (0x0003a395) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc4cc,	// (0x0003a395) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc4ed,	// (0x0003a3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc4ed,	// (0x0003a3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc50e,	// (0x0003a3d7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc50e,	// (0x0003a3d7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0003dac2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0003dac2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2226,	// (0x000300ef) title_pane_g1_ParamLimits

0x223d,	// (0x00030106) title_pane_g2_ParamLimits

0xf592,	// (0x0003d45b) title_pane_g_ParamLimits

0x5fcb,	// (0x00033e94) aid_call2_pane

0x5fc3,	// (0x00033e8c) aid_call_pane

0x5fd3,	// (0x00033e9c) popup_clock_analogue_window_g1

0x5fd3,	// (0x00033e9c) popup_clock_analogue_window_g2

0x9762,	// (0x0003762b) popup_clock_analogue_window_g3

0x976b,	// (0x00037634) popup_clock_analogue_window_g4

0x202a,	// (0x0002fef3) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003d60a) popup_clock_analogue_window_g

0x9773,	// (0x0003763c) popup_clock_analogue_window_t1

0x97b7,	// (0x00037680) clock_digital_number_pane_ParamLimits

0x97b7,	// (0x00037680) clock_digital_number_pane

0x97c3,	// (0x0003768c) clock_digital_number_pane_cp02_ParamLimits

0x97c3,	// (0x0003768c) clock_digital_number_pane_cp02

0x97cf,	// (0x00037698) clock_digital_number_pane_cp03_ParamLimits

0x97cf,	// (0x00037698) clock_digital_number_pane_cp03

0x97db,	// (0x000376a4) clock_digital_number_pane_cp04_ParamLimits

0x97db,	// (0x000376a4) clock_digital_number_pane_cp04

0x97e7,	// (0x000376b0) clock_digital_separator_pane_ParamLimits

0x97e7,	// (0x000376b0) clock_digital_separator_pane

0x97f3,	// (0x000376bc) popup_clock_digital_window_t1_ParamLimits

0x97f3,	// (0x000376bc) popup_clock_digital_window_t1

0x202a,	// (0x0002fef3) clock_digital_number_pane_g1

0x202a,	// (0x0002fef3) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003d615) clock_digital_number_pane_g

0x202a,	// (0x0002fef3) clock_digital_separator_pane_g1

0x202a,	// (0x0002fef3) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003d615) clock_digital_separator_pane_g

0x364a,	// (0x00031513) aid_fill_nsta_ParamLimits

0x3761,	// (0x0003162a) indicator_nsta_pane_ParamLimits

0x686d,	// (0x00034736) popup_clock_analogue_window

0x686d,	// (0x00034736) popup_clock_digital_window

0x6ab2,	// (0x0003497b) grid_indicator_nsta_pane_ParamLimits

0x8446,	// (0x0003630f) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0003d995) clock_nsta_pane_t

0x96cb,	// (0x00037594) aid_size_max_handle

0xee52,	// (0x0003cd1b) aid_size_min_handle

0x6460,	// (0x00034329) editor_scroll_pane

0xc529,	// (0x0003a3f2) ex_editor_pane

0x5bfc,	// (0x00033ac5) scroll_pane_cp13

0x2b9e,	// (0x00030a67) scroll_pane_cp14

0x5ffd,	// (0x00033ec6) scroll_pane_cp36

0x2dbf,	// (0x00030c88) list_single_graphic_hl_pane_cp2_ParamLimits

0x2dbf,	// (0x00030c88) list_single_graphic_hl_pane_cp2

0x3f76,	// (0x00031e3f) list_single_graphic_hl_pane_ParamLimits

0x3f76,	// (0x00031e3f) list_single_graphic_hl_pane

0xdf14,	// (0x0003bddd) aid_size_min_hl_cp1

0xc531,	// (0x0003a3fa) list_highlight_pane_cp34_ParamLimits

0xc531,	// (0x0003a3fa) list_highlight_pane_cp34

0xc542,	// (0x0003a40b) list_single_graphic_hl_pane_g1_ParamLimits

0xc542,	// (0x0003a40b) list_single_graphic_hl_pane_g1

0x1e6c,	// (0x0002fd35) list_single_graphic_hl_pane_g2_ParamLimits

0x1e6c,	// (0x0002fd35) list_single_graphic_hl_pane_g2

0x1e6c,	// (0x0002fd35) list_single_graphic_hl_pane_g3_ParamLimits

0x1e6c,	// (0x0002fd35) list_single_graphic_hl_pane_g3

0x2c14,	// (0x00030add) list_single_graphic_hl_pane_g4_ParamLimits

0x2c14,	// (0x00030add) list_single_graphic_hl_pane_g4

0x5ad3,	// (0x0003399c) list_single_graphic_hl_pane_g5_ParamLimits

0x5ad3,	// (0x0003399c) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0003dad3) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0003dad3) list_single_graphic_hl_pane_g

0x1e78,	// (0x0002fd41) list_single_graphic_hl_pane_t1_ParamLimits

0x1e78,	// (0x0002fd41) list_single_graphic_hl_pane_t1

0xc54f,	// (0x0003a418) aid_size_min_hl_cp2

0xc558,	// (0x0003a421) list_highlight_pane_cp34_cp2_ParamLimits

0xc558,	// (0x0003a421) list_highlight_pane_cp34_cp2

0xc542,	// (0x0003a40b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc542,	// (0x0003a40b) list_single_graphic_hl_pane_g1_cp2

0xc565,	// (0x0003a42e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc565,	// (0x0003a42e) list_single_graphic_hl_pane_g2_cp2

0xc571,	// (0x0003a43a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc571,	// (0x0003a43a) list_single_graphic_hl_pane_g3_cp2

0x62d5,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x62d5,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2

0xc325,	// (0x0003a1ee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc325,	// (0x0003a1ee) list_single_graphic_hl_pane_g5_cp2

0xee7c,	// (0x0003cd45) control_pane_g4_ParamLimits

0xee7c,	// (0x0003cd45) control_pane_g4

0x5c35,	// (0x00033afe) bg_popup_sub_pane_cp10_ParamLimits

0xbdaa,	// (0x00039c73) list_choice_list_pane_ParamLimits

0xbdb9,	// (0x00039c82) scroll_pane_cp23

0x26d8,	// (0x000305a1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc361,	// (0x0003a22a) list_preview_fixed_pane_ParamLimits

0xc377,	// (0x0003a240) list_preview_fixed_pane_cp_ParamLimits

0xc377,	// (0x0003a240) list_preview_fixed_pane_cp

0xc383,	// (0x0003a24c) popup_preview_fixed_window_g1_ParamLimits

0xc383,	// (0x0003a24c) popup_preview_fixed_window_g1

0xc38f,	// (0x0003a258) popup_preview_fixed_window_g2_ParamLimits

0xc38f,	// (0x0003a258) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0003da5b) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0003da5b) popup_preview_fixed_window_g

0x95e6,	// (0x000374af) aid_navi_side_left_pane_ParamLimits

0x95f6,	// (0x000374bf) aid_navi_side_right_pane_ParamLimits

0x9605,	// (0x000374ce) navi_icon_pane_stacon_ParamLimits

0x9615,	// (0x000374de) navi_navi_pane_stacon_ParamLimits

0x9605,	// (0x000374ce) navi_text_pane_stacon_ParamLimits

0x2020,	// (0x0002fee9) main_text_info_pane

0xc593,	// (0x0003a45c) listscroll_text_info_pane

0xc59b,	// (0x0003a464) list_text_info_pane_ParamLimits

0xc59b,	// (0x0003a464) list_text_info_pane

0xc5aa,	// (0x0003a473) scroll_pane_cp24_ParamLimits

0xc5aa,	// (0x0003a473) scroll_pane_cp24

0x43d9,	// (0x000322a2) list_text_info_pane_t1_ParamLimits

0x43d9,	// (0x000322a2) list_text_info_pane_t1

0x30d3,	// (0x00030f9c) popup_fast_swap2_window_ParamLimits

0x30d3,	// (0x00030f9c) popup_fast_swap2_window

0xc5e5,	// (0x0003a4ae) aid_size_cell_fast2

0x2020,	// (0x0002fee9) bg_popup_window_pane_cp17

0x6e72,	// (0x00034d3b) heading_pane_cp2

0x2920,	// (0x000307e9) listscroll_fast2_pane

0xc5ef,	// (0x0003a4b8) grid_fast2_pane

0xc5f7,	// (0x0003a4c0) listscroll_fast2_pane_g1

0xc5ff,	// (0x0003a4c8) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0003dade) listscroll_fast2_pane_g

0x5bfc,	// (0x00033ac5) scroll_pane_cp26

0xc607,	// (0x0003a4d0) cell_fast2_pane_ParamLimits

0xc607,	// (0x0003a4d0) cell_fast2_pane

0xc61d,	// (0x0003a4e6) cell_fast2_pane_g1

0xc626,	// (0x0003a4ef) cell_fast2_pane_g2

0xc62f,	// (0x0003a4f8) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0003dae3) cell_fast2_pane_g

0x29f7,	// (0x000308c0) grid_highlight_pane_cp9

0x2a0c,	// (0x000308d5) main_eswt_pane_ParamLimits

0x2a0c,	// (0x000308d5) main_eswt_pane

0xc5bf,	// (0x0003a488) list_single_text_info_pane

0xc637,	// (0x0003a500) eswt_ctrl_button_pane

0xc637,	// (0x0003a500) eswt_ctrl_canvas_pane

0xc63f,	// (0x0003a508) eswt_ctrl_combo_pane

0xc637,	// (0x0003a500) eswt_ctrl_default_pane

0xc637,	// (0x0003a500) eswt_ctrl_label_pane

0xc647,	// (0x0003a510) eswt_ctrl_wait_pane

0xc64f,	// (0x0003a518) eswt_shell_pane

0x2020,	// (0x0002fee9) listscroll_eswt_app_pane

0xc66b,	// (0x0003a534) popup_eswt_tasktip_window_ParamLimits

0xc66b,	// (0x0003a534) popup_eswt_tasktip_window

0x6a5c,	// (0x00034925) bg_popup_window_pane_cp18

0xc67c,	// (0x0003a545) eswt_control_pane_g1_ParamLimits

0xc67c,	// (0x0003a545) eswt_control_pane_g1

0xc689,	// (0x0003a552) eswt_control_pane_g2_ParamLimits

0xc689,	// (0x0003a552) eswt_control_pane_g2

0xc696,	// (0x0003a55f) eswt_control_pane_g3_ParamLimits

0xc696,	// (0x0003a55f) eswt_control_pane_g3

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_ParamLimits

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0003daea) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0003daea) eswt_control_pane_g

0x5ab9,	// (0x00033982) bg_button_pane_ParamLimits

0x5ab9,	// (0x00033982) bg_button_pane

0x2a0c,	// (0x000308d5) common_borders_pane_copy2_ParamLimits

0x2a0c,	// (0x000308d5) common_borders_pane_copy2

0xc6b0,	// (0x0003a579) control_button_pane_g1_ParamLimits

0xc6b0,	// (0x0003a579) control_button_pane_g1

0xc6bc,	// (0x0003a585) control_button_pane_g2_ParamLimits

0xc6bc,	// (0x0003a585) control_button_pane_g2

0xc6c8,	// (0x0003a591) control_button_pane_g3_ParamLimits

0xc6c8,	// (0x0003a591) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0003daf3) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0003daf3) control_button_pane_g

0xc6dc,	// (0x0003a5a5) control_button_pane_t1

0xc6ea,	// (0x0003a5b3) control_button_pane_t2

0x0001,

0xfc31,	// (0x0003dafa) control_button_pane_t

0x696e,	// (0x00034837) bg_button_pane_g1

0x6976,	// (0x0003483f) bg_button_pane_g2

0x697e,	// (0x00034847) bg_button_pane_g3

0x6986,	// (0x0003484f) bg_button_pane_g4

0x698e,	// (0x00034857) bg_button_pane_g5

0x6996,	// (0x0003485f) bg_button_pane_g6

0x699e,	// (0x00034867) bg_button_pane_g7

0x69a6,	// (0x0003486f) bg_button_pane_g8

0x69ae,	// (0x00034877) bg_button_pane_g9

0x0008,

0xf898,	// (0x0003d761) bg_button_pane_g

0xbd65,	// (0x00039c2e) common_borders_pane_ParamLimits

0xbd65,	// (0x00039c2e) common_borders_pane

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy1_ParamLimits

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy1

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy1_ParamLimits

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy1

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy1_ParamLimits

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy1

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy1_ParamLimits

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy1

0xbda0,	// (0x00039c69) bg_eswt_ctrl_canvas_pane_g1

0xbd65,	// (0x00039c2e) common_borders_pane_cp2_ParamLimits

0xbd65,	// (0x00039c2e) common_borders_pane_cp2

0xbd65,	// (0x00039c2e) common_borders_pane_cp3_ParamLimits

0xbd65,	// (0x00039c2e) common_borders_pane_cp3

0xc6f8,	// (0x0003a5c1) separator_horizontal_pane

0x5e62,	// (0x00033d2b) separator_vertical_pane

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy2_ParamLimits

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy2

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy2_ParamLimits

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy2

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy2_ParamLimits

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy2

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy2_ParamLimits

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy2

0x2020,	// (0x0002fee9) common_borders_pane_cp4

0xc700,	// (0x0003a5c9) separator_horizontal_pane_g1

0xc709,	// (0x0003a5d2) separator_horizontal_pane_g2

0xc712,	// (0x0003a5db) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0003daff) separator_horizontal_pane_g

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy3_ParamLimits

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy3

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy3_ParamLimits

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy3

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy3_ParamLimits

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy3

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy3_ParamLimits

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy3

0x2020,	// (0x0002fee9) common_borders_pane_cp5

0xc71b,	// (0x0003a5e4) separator_vertical_pane_g1

0xc724,	// (0x0003a5ed) separator_vertical_pane_g2

0xc72d,	// (0x0003a5f6) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0003db06) separator_vertical_pane_g

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy4_ParamLimits

0xc67c,	// (0x0003a545) eswt_control_pane_g1_copy4

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy4_ParamLimits

0xc689,	// (0x0003a552) eswt_control_pane_g2_copy4

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy4_ParamLimits

0xc696,	// (0x0003a55f) eswt_control_pane_g3_copy4

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy4_ParamLimits

0xc6a3,	// (0x0003a56c) eswt_control_pane_g4_copy4

0x43f4,	// (0x000322bd) eswt_ctrl_combo_button_pane

0x43fc,	// (0x000322c5) eswt_ctrl_input_pane

0x4404,	// (0x000322cd) popup_choice_list_window_cp70

0x440c,	// (0x000322d5) eswt_ctrl_input_pane_t1

0x2020,	// (0x0002fee9) input_focus_pane_cp70

0xbd65,	// (0x00039c2e) bg_button_pane_cp70_ParamLimits

0xbd65,	// (0x00039c2e) bg_button_pane_cp70

0x441a,	// (0x000322e3) eswt_ctrl_combo_button_pane_g1

0xc764,	// (0x0003a62d) wait_bar_pane_cp70

0x6a5c,	// (0x00034925) bg_popup_window_pane_cp70_ParamLimits

0x6a5c,	// (0x00034925) bg_popup_window_pane_cp70

0xc76c,	// (0x0003a635) popup_eswt_tasktip_window_t1

0xc782,	// (0x0003a64b) wait_bar_pane_cp71_ParamLimits

0xc782,	// (0x0003a64b) wait_bar_pane_cp71

0xc78e,	// (0x0003a657) grid_eswt_app_pane

0x5e6b,	// (0x00033d34) scroll_pane_cp70

0x4422,	// (0x000322eb) cell_eswt_app_pane_ParamLimits

0x4422,	// (0x000322eb) cell_eswt_app_pane

0x444a,	// (0x00032313) cell_eswt_app_pane_g1_ParamLimits

0x444a,	// (0x00032313) cell_eswt_app_pane_g1

0x4479,	// (0x00032342) cell_eswt_app_pane_g2_ParamLimits

0x4479,	// (0x00032342) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0003db0d) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0003db0d) cell_eswt_app_pane_g

0x44a2,	// (0x0003236b) cell_eswt_app_pane_t1_ParamLimits

0x44a2,	// (0x0003236b) cell_eswt_app_pane_t1

0xc849,	// (0x0003a712) grid_highlight_pane_cp70_ParamLimits

0xc849,	// (0x0003a712) grid_highlight_pane_cp70

0x2c14,	// (0x00030add) set_content_pane_g1

0x664f,	// (0x00034518) status_small_volume_pane

0xb1da,	// (0x000390a3) status_small_volume_pane_g1

0xb1e2,	// (0x000390ab) volume_small2_pane

0xb1eb,	// (0x000390b4) volume_small2_pane_g1

0xb1f4,	// (0x000390bd) volume_small2_pane_g2

0xb1fd,	// (0x000390c6) volume_small2_pane_g3

0xb206,	// (0x000390cf) volume_small2_pane_g4

0xb20f,	// (0x000390d8) volume_small2_pane_g5

0xb218,	// (0x000390e1) volume_small2_pane_g6

0xb221,	// (0x000390ea) volume_small2_pane_g7

0xb22a,	// (0x000390f3) volume_small2_pane_g8

0xb233,	// (0x000390fc) volume_small2_pane_g9

0xb23c,	// (0x00039105) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0003db12) volume_small2_pane_g

0xc11c,	// (0x00039fe5) fep_vkb_top_text_pane_g1_ParamLimits

0x4361,	// (0x0003222a) fep_vkb_top_text_pane_t1_ParamLimits

0xc39b,	// (0x0003a264) popup_preview_fixed_window_g3_ParamLimits

0xc39b,	// (0x0003a264) popup_preview_fixed_window_g3

0x35f3,	// (0x000314bc) popup_toolbar_trans_pane

0x3e16,	// (0x00031cdf) aid_height_set_list_ParamLimits

0x7b98,	// (0x00035a61) aid_size_parent_ParamLimits

0x5c35,	// (0x00033afe) list_highlight_pane_cp2_ParamLimits

0x2c14,	// (0x00030add) set_content_pane_g1_ParamLimits

0x3f89,	// (0x00031e52) list_single_image_pane_ParamLimits

0x3f89,	// (0x00031e52) list_single_image_pane

0x44d4,	// (0x0003239d) aid_size_cell_image_ParamLimits

0x44d4,	// (0x0003239d) aid_size_cell_image

0x44e1,	// (0x000323aa) grid_single_image_pane_ParamLimits

0x44e1,	// (0x000323aa) grid_single_image_pane

0x2c14,	// (0x00030add) list_single_image_pane_g1_ParamLimits

0x2c14,	// (0x00030add) list_single_image_pane_g1

0x5ad3,	// (0x0003399c) list_single_image_pane_g2_ParamLimits

0x5ad3,	// (0x0003399c) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0003db27) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0003db27) list_single_image_pane_g

0x840b,	// (0x000362d4) list_single_image_pane_t1_ParamLimits

0x840b,	// (0x000362d4) list_single_image_pane_t1

0x44ed,	// (0x000323b6) cell_image_list_pane_ParamLimits

0x44ed,	// (0x000323b6) cell_image_list_pane

0x4501,	// (0x000323ca) cell_image_list_pane_g1

0x450a,	// (0x000323d3) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0003db2c) cell_image_list_pane_g

0xc855,	// (0x0003a71e) aid_size_cell_tb_trans_pane

0x5ab9,	// (0x00033982) bg_tb_trans_pane

0xc867,	// (0x0003a730) grid_tb_trans_pane

0x696e,	// (0x00034837) bg_tb_trans_pane_g1

0x6976,	// (0x0003483f) bg_tb_trans_pane_g2

0x697e,	// (0x00034847) bg_tb_trans_pane_g3

0x6986,	// (0x0003484f) bg_tb_trans_pane_g4

0x698e,	// (0x00034857) bg_tb_trans_pane_g5

0x69a6,	// (0x0003486f) bg_tb_trans_pane_g6

0x69ae,	// (0x00034877) bg_tb_trans_pane_g7

0x6996,	// (0x0003485f) bg_tb_trans_pane_g8

0x699e,	// (0x00034867) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0003db31) bg_tb_trans_pane_g

0xc87b,	// (0x0003a744) cell_toolbar_trans_pane_ParamLimits

0xc87b,	// (0x0003a744) cell_toolbar_trans_pane

0xbda0,	// (0x00039c69) cell_toolbar_trans_pane_g1

0x41d6,	// (0x0003209f) list_form2_midp_pane_t1

0x41e4,	// (0x000320ad) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0003d9ce) list_form2_midp_pane_t

0xae40,	// (0x00038d09) scroll_pane_cp51_ParamLimits

0xbbfa,	// (0x00039ac3) form2_midp_wait_pane_g1

0xbc03,	// (0x00039acc) form2_midp_wait_pane_g2

0xbc0c,	// (0x00039ad5) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0003d9e3) form2_midp_wait_pane_g

0x2383,	// (0x0003024c) list_highlight_pane_cp21_ParamLimits

0xbc2c,	// (0x00039af5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbc3b,	// (0x00039b04) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe283,	// (0x0003c14c) list_single_2graphic_im_pane_ParamLimits

0xe283,	// (0x0003c14c) list_single_2graphic_im_pane

0x4513,	// (0x000323dc) list_single_2graphic_im_pane_g1_ParamLimits

0x4513,	// (0x000323dc) list_single_2graphic_im_pane_g1

0x4524,	// (0x000323ed) list_single_2graphic_im_pane_g2_ParamLimits

0x4524,	// (0x000323ed) list_single_2graphic_im_pane_g2

0x4530,	// (0x000323f9) list_single_2graphic_im_pane_g3_ParamLimits

0x4530,	// (0x000323f9) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0003db44) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0003db44) list_single_2graphic_im_pane_g

0x4544,	// (0x0003240d) list_single_2graphic_im_pane_t1_ParamLimits

0x4544,	// (0x0003240d) list_single_2graphic_im_pane_t1

0xc3a7,	// (0x0003a270) list_single_graphic_2heading_pane_fp_ParamLimits

0xc3a7,	// (0x0003a270) list_single_graphic_2heading_pane_fp

0xddf6,	// (0x0003bcbf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xddf6,	// (0x0003bcbf) list_single_graphic_2heading_pane_fp_g1

0xc3bb,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc3bb,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g2

0xe1f0,	// (0x0003c0b9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe1f0,	// (0x0003c0b9) list_single_graphic_2heading_pane_fp_g3

0xe2df,	// (0x0003c1a8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe2df,	// (0x0003c1a8) list_single_graphic_2heading_pane_fp_g4

0xc3c7,	// (0x0003a290) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3c7,	// (0x0003a290) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003da6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003da6b) list_single_graphic_2heading_pane_fp_g

0xdf29,	// (0x0003bdf2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdf29,	// (0x0003bdf2) list_single_graphic_2heading_pane_fp_t1

0xde2e,	// (0x0003bcf7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xde2e,	// (0x0003bcf7) list_single_graphic_2heading_pane_fp_t2

0xdf3f,	// (0x0003be08) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdf3f,	// (0x0003be08) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0003db4d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0003db4d) list_single_graphic_2heading_pane_fp_t

0xbe2b,	// (0x00039cf4) fep_hwr_write_pane_g5_ParamLimits

0xbe2b,	// (0x00039cf4) fep_hwr_write_pane_g5

0xbe37,	// (0x00039d00) fep_hwr_write_pane_g6_ParamLimits

0xbe37,	// (0x00039d00) fep_hwr_write_pane_g6

0xc64f,	// (0x0003a518) eswt_shell_pane_ParamLimits

0x6a5c,	// (0x00034925) bg_popup_window_pane_cp18_ParamLimits

0x7b3c,	// (0x00035a05) heading_pane_cp70

0xc76c,	// (0x0003a635) popup_eswt_tasktip_window_t1_ParamLimits

0x368e,	// (0x00031557) aid_touch_tab_arrow_left

0x36a2,	// (0x0003156b) aid_touch_tab_arrow_right

0x225c,	// (0x00030125) title_pane_g3_ParamLimits

0x225c,	// (0x00030125) title_pane_g3

0x5a89,	// (0x00033952) set_value_pane_g1

0x35f3,	// (0x000314bc) popup_toolbar_trans_pane_ParamLimits

0xc855,	// (0x0003a71e) aid_size_cell_tb_trans_pane_ParamLimits

0x5ab9,	// (0x00033982) bg_tb_trans_pane_ParamLimits

0xc867,	// (0x0003a730) grid_tb_trans_pane_ParamLimits

0x26d8,	// (0x000305a1) cont_note_pane_ParamLimits

0x26d8,	// (0x000305a1) cont_note_pane

0x2a0c,	// (0x000308d5) cont_snote2_single_text_pane_ParamLimits

0x2a0c,	// (0x000308d5) cont_snote2_single_text_pane

0x2a0c,	// (0x000308d5) cont_snote2_single_graphic_pane_ParamLimits

0x2a0c,	// (0x000308d5) cont_snote2_single_graphic_pane

0x704b,	// (0x00034f14) cont_note_wait_pane_ParamLimits

0x704b,	// (0x00034f14) cont_note_wait_pane

0x704b,	// (0x00034f14) cont_note_image_pane_ParamLimits

0x704b,	// (0x00034f14) cont_note_image_pane

0xc8ad,	// (0x0003a776) popup_note2_window_g1_ParamLimits

0xc8ad,	// (0x0003a776) popup_note2_window_g1

0xc8de,	// (0x0003a7a7) popup_note2_window_t1_ParamLimits

0xc8de,	// (0x0003a7a7) popup_note2_window_t1

0xc923,	// (0x0003a7ec) popup_note2_window_t2_ParamLimits

0xc923,	// (0x0003a7ec) popup_note2_window_t2

0xc968,	// (0x0003a831) popup_note2_window_t3_ParamLimits

0xc968,	// (0x0003a831) popup_note2_window_t3

0xc9ad,	// (0x0003a876) popup_note2_window_t4_ParamLimits

0xc9ad,	// (0x0003a876) popup_note2_window_t4

0x275c,	// (0x00030625) popup_note2_window_t5_ParamLimits

0x275c,	// (0x00030625) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0003db59) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0003db59) popup_note2_window_t

0xc9dc,	// (0x0003a8a5) popup_note2_image_window_g1_ParamLimits

0xc9dc,	// (0x0003a8a5) popup_note2_image_window_g1

0xc9e8,	// (0x0003a8b1) popup_note2_image_window_g2_ParamLimits

0xc9e8,	// (0x0003a8b1) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0003db64) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0003db64) popup_note2_image_window_g

0xc9fa,	// (0x0003a8c3) popup_note2_image_window_t1_ParamLimits

0xc9fa,	// (0x0003a8c3) popup_note2_image_window_t1

0xca12,	// (0x0003a8db) popup_note2_image_window_t2_ParamLimits

0xca12,	// (0x0003a8db) popup_note2_image_window_t2

0xca2a,	// (0x0003a8f3) popup_note2_image_window_t3_ParamLimits

0xca2a,	// (0x0003a8f3) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0003db69) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0003db69) popup_note2_image_window_t

0x7059,	// (0x00034f22) popup_note2_wait_window_g1_ParamLimits

0x7059,	// (0x00034f22) popup_note2_wait_window_g1

0x7065,	// (0x00034f2e) popup_note2_wait_window_g2_ParamLimits

0x7065,	// (0x00034f2e) popup_note2_wait_window_g2

0x7071,	// (0x00034f3a) popup_note2_wait_window_g3_ParamLimits

0x7071,	// (0x00034f3a) popup_note2_wait_window_g3

0x0002,

0xf87a,	// (0x0003d743) popup_note2_wait_window_g_ParamLimits

0xf87a,	// (0x0003d743) popup_note2_wait_window_g

0xca46,	// (0x0003a90f) popup_note2_wait_window_t1_ParamLimits

0xca46,	// (0x0003a90f) popup_note2_wait_window_t1

0xca64,	// (0x0003a92d) popup_note2_wait_window_t2_ParamLimits

0xca64,	// (0x0003a92d) popup_note2_wait_window_t2

0xca82,	// (0x0003a94b) popup_note2_wait_window_t3_ParamLimits

0xca82,	// (0x0003a94b) popup_note2_wait_window_t3

0xca94,	// (0x0003a95d) popup_note2_wait_window_t4_ParamLimits

0xca94,	// (0x0003a95d) popup_note2_wait_window_t4

0x0003,

0xfca7,	// (0x0003db70) popup_note2_wait_window_t_ParamLimits

0xfca7,	// (0x0003db70) popup_note2_wait_window_t

0xcaa6,	// (0x0003a96f) wait_bar2_pane_ParamLimits

0xcaa6,	// (0x0003a96f) wait_bar2_pane

0xcabe,	// (0x0003a987) popup_snote2_single_text_window_g1_ParamLimits

0xcabe,	// (0x0003a987) popup_snote2_single_text_window_g1

0xcae6,	// (0x0003a9af) popup_snote2_single_text_window_t1_ParamLimits

0xcae6,	// (0x0003a9af) popup_snote2_single_text_window_t1

0xcb32,	// (0x0003a9fb) popup_snote2_single_text_window_t2_ParamLimits

0xcb32,	// (0x0003a9fb) popup_snote2_single_text_window_t2

0xcb7e,	// (0x0003aa47) popup_snote2_single_text_window_t3_ParamLimits

0xcb7e,	// (0x0003aa47) popup_snote2_single_text_window_t3

0xcbbf,	// (0x0003aa88) popup_snote2_single_text_window_t4_ParamLimits

0xcbbf,	// (0x0003aa88) popup_snote2_single_text_window_t4

0xcbf5,	// (0x0003aabe) popup_snote2_single_text_window_t5_ParamLimits

0xcbf5,	// (0x0003aabe) popup_snote2_single_text_window_t5

0x0004,

0xfcb0,	// (0x0003db79) popup_snote2_single_text_window_t_ParamLimits

0xfcb0,	// (0x0003db79) popup_snote2_single_text_window_t

0xcc20,	// (0x0003aae9) popup_snote2_single_graphic_window_g1_ParamLimits

0xcc20,	// (0x0003aae9) popup_snote2_single_graphic_window_g1

0xcc48,	// (0x0003ab11) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc48,	// (0x0003ab11) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbb,	// (0x0003db84) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbb,	// (0x0003db84) popup_snote2_single_graphic_window_g

0xcc70,	// (0x0003ab39) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc70,	// (0x0003ab39) popup_snote2_single_graphic_window_t1

0xccbc,	// (0x0003ab85) popup_snote2_single_graphic_window_t2_ParamLimits

0xccbc,	// (0x0003ab85) popup_snote2_single_graphic_window_t2

0xcb7e,	// (0x0003aa47) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb7e,	// (0x0003aa47) popup_snote2_single_graphic_window_t3

0xcbbf,	// (0x0003aa88) popup_snote2_single_graphic_window_t4_ParamLimits

0xcbbf,	// (0x0003aa88) popup_snote2_single_graphic_window_t4

0xcbf5,	// (0x0003aabe) popup_snote2_single_graphic_window_t5_ParamLimits

0xcbf5,	// (0x0003aabe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc0,	// (0x0003db89) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc0,	// (0x0003db89) popup_snote2_single_graphic_window_t

0x847c,	// (0x00036345) clock_nsta_pane_cp2_t1

0x847c,	// (0x00036345) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0003d9a4) clock_nsta_pane_cp2_t

0xd8f3,	// (0x0003b7bc) form_field_data_wide_pane_g1_ParamLimits

0x2c14,	// (0x00030add) form_field_data_wide_pane_g2_ParamLimits

0x2c14,	// (0x00030add) form_field_data_wide_pane_g2

0x5ad3,	// (0x0003399c) form_field_data_wide_pane_g3_ParamLimits

0x5ad3,	// (0x0003399c) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003d58d) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003d58d) form_field_data_wide_pane_g

0x4111,	// (0x00031fda) grid_touch_3_pane_ParamLimits

0x4111,	// (0x00031fda) grid_touch_3_pane

0x4575,	// (0x0003243e) cell_touch_3_pane_ParamLimits

0x4575,	// (0x0003243e) cell_touch_3_pane

0xbda0,	// (0x00039c69) cell_touch_3_pane_g1

0xbda0,	// (0x00039c69) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0003da29) cell_touch_3_pane_g

0x278e,	// (0x00030657) cont_query_data_pane

0x2796,	// (0x0003065f) cont_query_data_pane_cp1

0xcd08,	// (0x0003abd1) button_value_adjust_pane_cp7

0xcd10,	// (0x0003abd9) query_popup_pane_cp3

0x600e,	// (0x00033ed7) bg_popup_sub_pane_cp22_ParamLimits

0x984f,	// (0x00037718) navi_navi_volume_pane_cp2

0x9867,	// (0x00037730) popup_side_volume_key_window_g2

0x9873,	// (0x0003773c) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003d61f) popup_side_volume_key_window_g

0x988d,	// (0x00037756) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003d626) popup_side_volume_key_window_t

0x6258,	// (0x00034121) popup_side_volume_key_window_ParamLimits

0x1972,	// (0x0002f83b) list_double_graphic_pane_g4_ParamLimits

0x1972,	// (0x0002f83b) list_double_graphic_pane_g4

0x1e26,	// (0x0002fcef) list_single_2heading_msg_pane_ParamLimits

0x1e26,	// (0x0002fcef) list_single_2heading_msg_pane

0x1e8e,	// (0x0002fd57) list_single_2heading_msg_pane_g1_ParamLimits

0x1e8e,	// (0x0002fd57) list_single_2heading_msg_pane_g1

0x1e9a,	// (0x0002fd63) list_single_2heading_msg_pane_g2_ParamLimits

0x1e9a,	// (0x0002fd63) list_single_2heading_msg_pane_g2

0x1ead,	// (0x0002fd76) list_single_2heading_msg_pane_g3_ParamLimits

0x1ead,	// (0x0002fd76) list_single_2heading_msg_pane_g3

0x1eb9,	// (0x0002fd82) list_single_2heading_msg_pane_g4_ParamLimits

0x1eb9,	// (0x0002fd82) list_single_2heading_msg_pane_g4

0x0003,

0xfccb,	// (0x0003db94) list_single_2heading_msg_pane_g_ParamLimits

0xfccb,	// (0x0003db94) list_single_2heading_msg_pane_g

0x1ed1,	// (0x0002fd9a) list_single_2heading_msg_pane_t1_ParamLimits

0x1ed1,	// (0x0002fd9a) list_single_2heading_msg_pane_t1

0x1ef9,	// (0x0002fdc2) list_single_2heading_msg_pane_t2_ParamLimits

0x1ef9,	// (0x0002fdc2) list_single_2heading_msg_pane_t2

0x1f64,	// (0x0002fe2d) list_single_2heading_msg_pane_t3_ParamLimits

0x1f64,	// (0x0002fe2d) list_single_2heading_msg_pane_t3

0xe01d,	// (0x0003bee6) list_single_2heading_msg_pane_t4_ParamLimits

0xe01d,	// (0x0003bee6) list_single_2heading_msg_pane_t4

0x0003,

0xfcd4,	// (0x0003db9d) list_single_2heading_msg_pane_t_ParamLimits

0xfcd4,	// (0x0003db9d) list_single_2heading_msg_pane_t

0x2268,	// (0x00030131) title_pane_g4_ParamLimits

0x2268,	// (0x00030131) title_pane_g4

0x955c,	// (0x00037425) title_pane_stacon_g3_ParamLimits

0x955c,	// (0x00037425) title_pane_stacon_g3

0xc8a1,	// (0x0003a76a) list_single_2graphic_im_pane_g4_ParamLimits

0xc8a1,	// (0x0003a76a) list_single_2graphic_im_pane_g4

0x7952,	// (0x0003581b) popup_side_volume_key_window_cp

0x7e15,	// (0x00035cde) main_idle_act2_pane_t1

0xa3c2,	// (0x0003828b) toolbar_button_pane_g10

0x2b69,	// (0x00030a32) popup_toolbar_window_cp1

0x846d,	// (0x00036336) clock_nsta_pane_cp_t1

0x846d,	// (0x00036336) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0003d99f) clock_nsta_pane_cp_t

0x984f,	// (0x00037718) navi_navi_volume_pane_cp2_ParamLimits

0x985b,	// (0x00037724) popup_side_volume_key_window_g1_ParamLimits

0x9867,	// (0x00037730) popup_side_volume_key_window_g2_ParamLimits

0x9873,	// (0x0003773c) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003d61f) popup_side_volume_key_window_g_ParamLimits

0xae5a,	// (0x00038d23) fep_hwr_aid_pane

0xaefb,	// (0x00038dc4) bg_fep_hwr_top_pane_g4_ParamLimits

0xbdfb,	// (0x00039cc4) fep_hwr_top_pane_g1_ParamLimits

0xbe0d,	// (0x00039cd6) fep_hwr_top_pane_g2_ParamLimits

0xaf1b,	// (0x00038de4) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0003d9f4) fep_hwr_top_pane_g_ParamLimits

0xaf30,	// (0x00038df9) fep_hwr_top_text_pane_ParamLimits

0x775b,	// (0x00035624) aid_touch_tab_arrow_arrow_2

0x7752,	// (0x0003561b) aid_touch_tab_arrow_left_2

0xae6e,	// (0x00038d37) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xaea1,	// (0x00038d6a) fep_hwr_prediction_pane

0xbf4c,	// (0x00039e15) fep_vkb_prediction_pane

0x4341,	// (0x0003220a) fep_vkb_side_pane_g3_ParamLimits

0x4341,	// (0x0003220a) fep_vkb_side_pane_g3

0xb09f,	// (0x00038f68) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb109,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb116,	// (0x00038fdf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0003daa3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb245,	// (0x0003910e) fep_hwr_prediction_pane_g1

0xb24f,	// (0x00039118) fep_hwr_prediction_pane_g2

0xb257,	// (0x00039120) fep_hwr_prediction_pane_g3

0xb25f,	// (0x00039128) fep_hwr_prediction_pane_g4

0x0003,

0xfcdd,	// (0x0003dba6) fep_hwr_prediction_pane_g

0xcd21,	// (0x0003abea) fep_vkb_prediction_pane_g1

0xcd2b,	// (0x0003abf4) fep_vkb_prediction_pane_g2

0xcd33,	// (0x0003abfc) fep_vkb_prediction_pane_g3

0xcd3b,	// (0x0003ac04) fep_vkb_prediction_pane_g4

0x0003,

0xfce6,	// (0x0003dbaf) fep_vkb_prediction_pane_g

0xa885,	// (0x0003874e) slider_set_pane_g3

0xa899,	// (0x00038762) slider_set_pane_g4

0xa8b1,	// (0x0003877a) slider_set_pane_g5

0xa885,	// (0x0003874e) slider_set_pane_g6

0xf135,	// (0x0003cffe) slider_set_pane_g7

0x7bbb,	// (0x00035a84) slider_form_pane_g3

0x7bc4,	// (0x00035a8d) slider_form_pane_g4

0x7bcc,	// (0x00035a95) slider_form_pane_g5

0x7bbb,	// (0x00035a84) slider_form_pane_g6

0x3f48,	// (0x00031e11) slider_form_pane_g7

0x805e,	// (0x00035f27) slider_set_pane_vc_g3

0x8067,	// (0x00035f30) slider_set_pane_vc_g4

0x8070,	// (0x00035f39) slider_set_pane_vc_g5

0x805e,	// (0x00035f27) slider_set_pane_vc_g6

0x8079,	// (0x00035f42) slider_set_pane_vc_g7

0x805e,	// (0x00035f27) slider_form_pane_vc_g1

0x8067,	// (0x00035f30) slider_form_pane_vc_g2

0x8070,	// (0x00035f39) slider_form_pane_vc_g3

0x805e,	// (0x00035f27) slider_form_pane_vc_g4

0x820d,	// (0x000360d6) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0003d985) slider_form_pane_vc_g

0x2020,	// (0x0002fee9) main_idle_act3_pane

0xcd43,	// (0x0003ac0c) ai3_links_pane

0x45bc,	// (0x00032485) popup_ai3_data_window_ParamLimits

0x45bc,	// (0x00032485) popup_ai3_data_window

0x2020,	// (0x0002fee9) grid_ai3_links_pane

0x45d4,	// (0x0003249d) cell_ai3_links_pane_ParamLimits

0x45d4,	// (0x0003249d) cell_ai3_links_pane

0xcd4c,	// (0x0003ac15) bg_popup_sub_pane_cp11

0xcd59,	// (0x0003ac22) cell_ai3_links_pane_g1

0x2020,	// (0x0002fee9) bg_popup_sub_pane_cp12

0xcd7e,	// (0x0003ac47) heading_ai3_data_pane

0xcd86,	// (0x0003ac4f) list_ai3_gene_pane

0xcd92,	// (0x0003ac5b) popup_ai3_data_window_g1

0xcd9a,	// (0x0003ac63) heading_ai3_data_pane_g1

0xcda2,	// (0x0003ac6b) heading_ai3_data_pane_t1

0xcdb0,	// (0x0003ac79) list_double_ai3_gene_pane_ParamLimits

0xcdb0,	// (0x0003ac79) list_double_ai3_gene_pane

0xcdbd,	// (0x0003ac86) list_single_ai3_gene_pane_ParamLimits

0xcdbd,	// (0x0003ac86) list_single_ai3_gene_pane

0xbd65,	// (0x00039c2e) list_highlight_pane_cp7_ParamLimits

0xbd65,	// (0x00039c2e) list_highlight_pane_cp7

0xcdca,	// (0x0003ac93) list_single_a13_gene_pane_t1_ParamLimits

0xcdca,	// (0x0003ac93) list_single_a13_gene_pane_t1

0xcde1,	// (0x0003acaa) list_single_ai3_gene_pane_g1

0xcdea,	// (0x0003acb3) list_single_ai3_gene_pane_g2

0x0001,

0xfcef,	// (0x0003dbb8) list_single_ai3_gene_pane_g

0xcdf2,	// (0x0003acbb) list_double_ai3_gene_pane_g1_ParamLimits

0xcdf2,	// (0x0003acbb) list_double_ai3_gene_pane_g1

0xcdfe,	// (0x0003acc7) list_double_ai3_gene_pane_t1_ParamLimits

0xcdfe,	// (0x0003acc7) list_double_ai3_gene_pane_t1

0xce1a,	// (0x0003ace3) list_double_ai3_gene_pane_t2_ParamLimits

0xce1a,	// (0x0003ace3) list_double_ai3_gene_pane_t2

0xce2f,	// (0x0003acf8) list_double_ai3_gene_pane_t3_ParamLimits

0xce2f,	// (0x0003acf8) list_double_ai3_gene_pane_t3

0x0002,

0xfcf4,	// (0x0003dbbd) list_double_ai3_gene_pane_t_ParamLimits

0xfcf4,	// (0x0003dbbd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdf55,	// (0x0003be1e) aid_size_min_col_2

0x45a8,	// (0x00032471) aid_size_min_msg_ParamLimits

0x45a8,	// (0x00032471) aid_size_min_msg

0x4355,	// (0x0003221e) fep_vkb_top_text_pane_g2_ParamLimits

0x4355,	// (0x0003221e) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0003da24) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0003da24) fep_vkb_top_text_pane_g

0x2020,	// (0x0002fee9) main_hc_apps_shell_pane

0xce4c,	// (0x0003ad15) grid_hc_apps_pane_ParamLimits

0xce4c,	// (0x0003ad15) grid_hc_apps_pane

0xce5b,	// (0x0003ad24) list_hc_apps_pane

0xce63,	// (0x0003ad2c) scroll_pane_cp37_ParamLimits

0xce63,	// (0x0003ad2c) scroll_pane_cp37

0x45ea,	// (0x000324b3) cell_hc_apps_pane_ParamLimits

0x45ea,	// (0x000324b3) cell_hc_apps_pane

0x4684,	// (0x0003254d) cell_hc_apps_pane_g1_ParamLimits

0x4684,	// (0x0003254d) cell_hc_apps_pane_g1

0xce6f,	// (0x0003ad38) cell_hc_apps_pane_g2_ParamLimits

0xce6f,	// (0x0003ad38) cell_hc_apps_pane_g2

0xce8b,	// (0x0003ad54) cell_hc_apps_pane_g3_ParamLimits

0xce8b,	// (0x0003ad54) cell_hc_apps_pane_g3

0x0002,

0xfcfb,	// (0x0003dbc4) cell_hc_apps_pane_g_ParamLimits

0xfcfb,	// (0x0003dbc4) cell_hc_apps_pane_g

0x46b1,	// (0x0003257a) cell_hc_apps_pane_t1_ParamLimits

0x46b1,	// (0x0003257a) cell_hc_apps_pane_t1

0x26d8,	// (0x000305a1) grid_highlight_pane_cp10_ParamLimits

0x26d8,	// (0x000305a1) grid_highlight_pane_cp10

0x46ef,	// (0x000325b8) list_single_hc_apps_pane_ParamLimits

0x46ef,	// (0x000325b8) list_single_hc_apps_pane

0x471b,	// (0x000325e4) list_single_hc_apps_pane_g1

0x4734,	// (0x000325fd) list_single_hc_apps_pane_g2

0x0001,

0xfd02,	// (0x0003dbcb) list_single_hc_apps_pane_g

0x474d,	// (0x00032616) list_single_hc_apps_pane_g2_copy1

0x1fd2,	// (0x0002fe9b) list_single_hc_apps_pane_t1

0x2383,	// (0x0003024c) bg_set_opt_pane_cp_ParamLimits

0x9267,	// (0x00037130) setting_slider_pane_t1_ParamLimits

0xedf0,	// (0x0003ccb9) setting_slider_pane_t2_ParamLimits

0xee09,	// (0x0003ccd2) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d46b) setting_slider_pane_t_ParamLimits

0x92ad,	// (0x00037176) slider_set_pane_ParamLimits

0x9bdb,	// (0x00037aa4) control_pane_g5_ParamLimits

0x9bdb,	// (0x00037aa4) control_pane_g5

0x7b83,	// (0x00035a4c) slider_set_pane_g1_ParamLimits

0xa879,	// (0x00038742) slider_set_pane_g2_ParamLimits

0xa885,	// (0x0003874e) slider_set_pane_g3_ParamLimits

0xa899,	// (0x00038762) slider_set_pane_g4_ParamLimits

0xa8b1,	// (0x0003877a) slider_set_pane_g5_ParamLimits

0xa885,	// (0x0003874e) slider_set_pane_g6_ParamLimits

0xf135,	// (0x0003cffe) slider_set_pane_g7_ParamLimits

0xf996,	// (0x0003d85f) slider_set_pane_g_ParamLimits

0x2383,	// (0x0003024c) navi_icon_text_pane_ParamLimits

0x3660,	// (0x00031529) aid_fill_nsta_2_ParamLimits

0x368e,	// (0x00031557) aid_touch_tab_arrow_left_ParamLimits

0x36a2,	// (0x0003156b) aid_touch_tab_arrow_right_ParamLimits

0x373e,	// (0x00031607) clock_nsta_pane_ParamLimits

0x7734,	// (0x000355fd) navi_icon_pane_g1_ParamLimits

0x7740,	// (0x00035609) navi_text_pane_t1_ParamLimits

0xadb6,	// (0x00038c7f) navi_icon_text_pane_g1_ParamLimits

0xadc2,	// (0x00038c8b) navi_icon_text_pane_t1_ParamLimits

0x471b,	// (0x000325e4) list_single_hc_apps_pane_g1_ParamLimits

0x4734,	// (0x000325fd) list_single_hc_apps_pane_g2_ParamLimits

0xfd02,	// (0x0003dbcb) list_single_hc_apps_pane_g_ParamLimits

0x474d,	// (0x00032616) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1fd2,	// (0x0002fe9b) list_single_hc_apps_pane_t1_ParamLimits

0xed7d,	// (0x0003cc46) popup_toolbar2_fixed_window_ParamLimits

0xed7d,	// (0x0003cc46) popup_toolbar2_fixed_window

0x35eb,	// (0x000314b4) popup_toolbar2_float_window

0x2020,	// (0x0002fee9) bg_popup_sub_pane_cp27

0xcead,	// (0x0003ad76) grid_toolbar2_float_pane

0x2020,	// (0x0002fee9) bg_popup_sub_pane_cp26

0xcead,	// (0x0003ad76) grid_toolbar2_fixed_pane

0x4769,	// (0x00032632) cell_toolbar2_fixed_pane_ParamLimits

0x4769,	// (0x00032632) cell_toolbar2_fixed_pane

0x4784,	// (0x0003264d) cell_toolbar2_fixed_pane_g1

0xceb5,	// (0x0003ad7e) toolbar2_fixed_button_pane

0x696e,	// (0x00034837) toolbar2_fixed_button_pane_g1

0x6976,	// (0x0003483f) toolbar2_fixed_button_pane_g2

0x697e,	// (0x00034847) toolbar2_fixed_button_pane_g3

0x6986,	// (0x0003484f) toolbar2_fixed_button_pane_g4

0x698e,	// (0x00034857) toolbar2_fixed_button_pane_g5

0x6996,	// (0x0003485f) toolbar2_fixed_button_pane_g6

0x699e,	// (0x00034867) toolbar2_fixed_button_pane_g7

0x69a6,	// (0x0003486f) toolbar2_fixed_button_pane_g8

0x69ae,	// (0x00034877) toolbar2_fixed_button_pane_g9

0x0008,

0xf898,	// (0x0003d761) toolbar2_fixed_button_pane_g

0xcebd,	// (0x0003ad86) cell_toolbar2_float_pane_ParamLimits

0xcebd,	// (0x0003ad86) cell_toolbar2_float_pane

0xcece,	// (0x0003ad97) cell_toolbar2_float_pane_g1

0xceb5,	// (0x0003ad7e) toolbar2_fixed_button_pane_cp

0x430a,	// (0x000321d3) fep_vkb_accented_list_pane_ParamLimits

0x430a,	// (0x000321d3) fep_vkb_accented_list_pane

0xb07f,	// (0x00038f48) bg_popup_fep_shadow_pane_g9

0x6460,	// (0x00034329) bg_popup_fep_shadow_pane_cp3

0x5be3,	// (0x00033aac) list_accented_list_pane

0xced7,	// (0x0003ada0) list_single_accented_list_pane_ParamLimits

0xced7,	// (0x0003ada0) list_single_accented_list_pane

0x6460,	// (0x00034329) list_highlight_pane_cp10

0xcee8,	// (0x0003adb1) list_single_accented_list_pane_t1

0x352d,	// (0x000313f6) popup_slider_window_ParamLimits

0x352d,	// (0x000313f6) popup_slider_window

0xcd18,	// (0x0003abe1) aid_indentation_list_msg

0x4863,	// (0x0003272c) bg_popup_window_pane_cp19

0xcf4e,	// (0x0003ae17) popup_slider_window_g1

0xcf6a,	// (0x0003ae33) popup_slider_window_g2

0xcf86,	// (0x0003ae4f) popup_slider_window_g3

0x0005,

0xfd07,	// (0x0003dbd0) popup_slider_window_g

0xcfa2,	// (0x0003ae6b) popup_slider_window_t1

0xcfe6,	// (0x0003aeaf) small_volume_slider_vertical_pane

0xbda0,	// (0x00039c69) small_volume_slider_vertical_pane_g1

0xbda0,	// (0x00039c69) small_volume_slider_vertical_pane_g2

0xd002,	// (0x0003aecb) small_volume_slider_vertical_pane_g3

0x0002,

0xfd19,	// (0x0003dbe2) small_volume_slider_vertical_pane_g

0xed01,	// (0x0003cbca) area_side_right_pane_ParamLimits

0xed01,	// (0x0003cbca) area_side_right_pane

0xf198,	// (0x0003d061) aid_size_side_button_ParamLimits

0xf198,	// (0x0003d061) aid_size_side_button

0xf1b1,	// (0x0003d07a) grid_sctrl_middle_pane_ParamLimits

0xf1b1,	// (0x0003d07a) grid_sctrl_middle_pane

0xb297,	// (0x00039160) sctrl_sk_bottom_pane

0xb2a8,	// (0x00039171) sctrl_sk_top_pane

0xb2ba,	// (0x00039183) aid_touch_sctrl_top

0xb2c7,	// (0x00039190) bg_sctrl_sk_pane_ParamLimits

0xb2c7,	// (0x00039190) bg_sctrl_sk_pane

0xb2d5,	// (0x0003919e) sctrl_sk_top_pane_g1

0xb2e2,	// (0x000391ab) sctrl_sk_top_pane_t1

0xb2ba,	// (0x00039183) aid_touch_sctrl_bottom

0xb2c7,	// (0x00039190) bg_sctrl_sk_pane_cp_ParamLimits

0xb2c7,	// (0x00039190) bg_sctrl_sk_pane_cp

0xb2fd,	// (0x000391c6) sctrl_sk_bottom_pane_g1

0xb2e2,	// (0x000391ab) sctrl_sk_bottom_pane_t1

0xf1c7,	// (0x0003d090) cell_sctrl_middle_pane_ParamLimits

0xf1c7,	// (0x0003d090) cell_sctrl_middle_pane

0xf1d8,	// (0x0003d0a1) aid_touch_sctrl_middle_ParamLimits

0xf1d8,	// (0x0003d0a1) aid_touch_sctrl_middle

0xf1e5,	// (0x0003d0ae) bg_sctrl_middle_pane_ParamLimits

0xf1e5,	// (0x0003d0ae) bg_sctrl_middle_pane

0xb905,	// (0x000397ce) cell_sctrl_middle_pane_g1_ParamLimits

0xb905,	// (0x000397ce) cell_sctrl_middle_pane_g1

0xf1f3,	// (0x0003d0bc) cell_sctrl_middle_pane_g2_ParamLimits

0xf1f3,	// (0x0003d0bc) cell_sctrl_middle_pane_g2

0x0001,

0xfd25,	// (0x0003dbee) cell_sctrl_middle_pane_g_ParamLimits

0xfd25,	// (0x0003dbee) cell_sctrl_middle_pane_g

0x696e,	// (0x00034837) bg_sctrl_middle_pane_g1

0x697e,	// (0x00034847) bg_sctrl_middle_pane_g2

0x6976,	// (0x0003483f) bg_sctrl_middle_pane_g3

0x698e,	// (0x00034857) bg_sctrl_middle_pane_g4

0x6986,	// (0x0003484f) bg_sctrl_middle_pane_g5

0x6996,	// (0x0003485f) bg_sctrl_middle_pane_g6

0x699e,	// (0x00034867) bg_sctrl_middle_pane_g7

0x69ae,	// (0x00034877) bg_sctrl_middle_pane_g8

0x0007,

0xfd2a,	// (0x0003dbf3) bg_sctrl_middle_pane_g

0x69a6,	// (0x0003486f) bg_sctrl_middle_pane_g8_copy1

0x696e,	// (0x00034837) bg_sctrl_sk_pane_g1

0x6976,	// (0x0003483f) bg_sctrl_sk_pane_g2

0x697e,	// (0x00034847) bg_sctrl_sk_pane_g3

0x0008,

0xf898,	// (0x0003d761) bg_sctrl_sk_pane_g

0x2b2e,	// (0x000309f7) aid_size_touch_scroll_bar

0x6986,	// (0x0003484f) bg_sctrl_sk_pane_g4

0x698e,	// (0x00034857) bg_sctrl_sk_pane_g5

0x6996,	// (0x0003485f) bg_sctrl_sk_pane_g6

0x699e,	// (0x00034867) bg_sctrl_sk_pane_g7

0x69a6,	// (0x0003486f) bg_sctrl_sk_pane_g8

0x69ae,	// (0x00034877) bg_sctrl_sk_pane_g9

0x66e4,	// (0x000345ad) popup_fep_china_hwr2_fs_candidate_window

0x3128,	// (0x00030ff1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x3128,	// (0x00030ff1) popup_fep_china_hwr2_fs_control_window

0xb09f,	// (0x00038f68) sctrl_sk_top_pane_g2

0x0001,

0xfd20,	// (0x0003dbe9) sctrl_sk_top_pane_g

0x4983,	// (0x0003284c) aid_fep_china_hwr2_fs_cell_ParamLimits

0x4983,	// (0x0003284c) aid_fep_china_hwr2_fs_cell

0x4997,	// (0x00032860) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x4997,	// (0x00032860) bg_popup_fep_shadow_pane_cp4

0x49ae,	// (0x00032877) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x49ae,	// (0x00032877) bg_popup_fep_shadow_pane_cp5

0x49c0,	// (0x00032889) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x49c0,	// (0x00032889) popup_fep_china_hwr2_fs_control_bar_grid

0x49d4,	// (0x0003289d) popup_fep_china_hwr2_fs_control_funtion_grid

0xd00b,	// (0x0003aed4) aid_fep_china_hwr2_fs_candi_cell

0x2020,	// (0x0002fee9) bg_popup_fep_shadow_pane_cp6

0xd015,	// (0x0003aede) popup_fep_china_hwr2_fs_candidate_grid

0x49dc,	// (0x000328a5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x49dc,	// (0x000328a5) cell_fep_china_hwr2_fs_funtion_grid

0xbda0,	// (0x00039c69) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd01d,	// (0x0003aee6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd01d,	// (0x0003aee6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd02b,	// (0x0003aef4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd02b,	// (0x0003aef4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3b,	// (0x0003dc04) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3b,	// (0x0003dc04) cell_fep_china_hwr2_fs_funtion_grid_g

0x49f4,	// (0x000328bd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x49f4,	// (0x000328bd) cell_fep_china_hwr2_fs_funtion_grid_t1

0x4a09,	// (0x000328d2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x4a09,	// (0x000328d2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd40,	// (0x0003dc09) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd40,	// (0x0003dc09) cell_fep_china_hwr2_fs_funtion_grid_t

0xd041,	// (0x0003af0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd049,	// (0x0003af12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd051,	// (0x0003af1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd45,	// (0x0003dc0e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd059,	// (0x0003af22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd059,	// (0x0003af22) cell_fep_china_hwr2_fs_candidate_grid

0xd072,	// (0x0003af3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd07a,	// (0x0003af43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbda0,	// (0x00039c69) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbda0,	// (0x00039c69) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0003da29) cell_fep_china_hwr2_fs_candidate_grid_g

0xd082,	// (0x0003af4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x67d3,	// (0x0003469c) clock_nsta_pane_cp_24_ParamLimits

0x67d3,	// (0x0003469c) clock_nsta_pane_cp_24

0x6830,	// (0x000346f9) indicator_nsta_pane_cp_24_ParamLimits

0x6830,	// (0x000346f9) indicator_nsta_pane_cp_24

0x763f,	// (0x00035508) heading_pane_g1

0x0001,

0xf8fd,	// (0x0003d7c6) heading_pane_g

0x4039,	// (0x00031f02) grid_sct_catagory_button_pane

0x6e3a,	// (0x00034d03) scroll_pane_cp5_ParamLimits

0xba4d,	// (0x00039916) button_value_adjust_pane_cp5_ParamLimits

0xba4d,	// (0x00039916) button_value_adjust_pane_cp5

0xbb2a,	// (0x000399f3) form2_midp_time_pane_ParamLimits

0xd090,	// (0x0003af59) cell_sct_catagory_button_pane_ParamLimits

0xd090,	// (0x0003af59) cell_sct_catagory_button_pane

0xbd65,	// (0x00039c2e) bg_button_pane_cp01_ParamLimits

0xbd65,	// (0x00039c2e) bg_button_pane_cp01

0xbda0,	// (0x00039c69) cell_sct_catagory_button_pane_g1

0x359c,	// (0x00031465) popup_tb_extension_window

0x4a25,	// (0x000328ee) aid_size_cell_ext_ParamLimits

0x4a25,	// (0x000328ee) aid_size_cell_ext

0x2a0c,	// (0x000308d5) bg_tb_trans_pane_cp1_ParamLimits

0x2a0c,	// (0x000308d5) bg_tb_trans_pane_cp1

0x4a4b,	// (0x00032914) grid_tb_ext_pane_ParamLimits

0x4a4b,	// (0x00032914) grid_tb_ext_pane

0x4a81,	// (0x0003294a) cell_tb_ext_pane_ParamLimits

0x4a81,	// (0x0003294a) cell_tb_ext_pane

0x4aa5,	// (0x0003296e) cell_tb_ext_pane_g1_ParamLimits

0x4aa5,	// (0x0003296e) cell_tb_ext_pane_g1

0xd0a2,	// (0x0003af6b) cell_tb_ext_pane_t1

0x26d8,	// (0x000305a1) list_highlight_pane_cp11_ParamLimits

0x26d8,	// (0x000305a1) list_highlight_pane_cp11

0x90fa,	// (0x00036fc3) popup_uni_indicator_window_ParamLimits

0x90fa,	// (0x00036fc3) popup_uni_indicator_window

0x5ab9,	// (0x00033982) bg_popup_sub_pane_cp14

0xd0bd,	// (0x0003af86) list_uniindi_pane

0xd0c9,	// (0x0003af92) uniindi_top_pane

0x26d8,	// (0x000305a1) bg_uniindi_top_pane

0xd0e8,	// (0x0003afb1) uniindi_top_pane_g1

0xd0fe,	// (0x0003afc7) uniindi_top_pane_g2

0x0003,

0xfd4c,	// (0x0003dc15) uniindi_top_pane_g

0xd128,	// (0x0003aff1) uniindi_top_pane_t1

0xd152,	// (0x0003b01b) list_single_uniindi_pane_ParamLimits

0xd152,	// (0x0003b01b) list_single_uniindi_pane

0xbda0,	// (0x00039c69) bg_uniindi_top_pane_g1

0xd164,	// (0x0003b02d) list_single_uniindi_pane_g1

0xd177,	// (0x0003b040) list_single_uniindi_pane_t1

0x8f98,	// (0x00036e61) control_bg_pane

0xd19c,	// (0x0003b065) bg_sctrl_sk_pane_cp1

0xd1a5,	// (0x0003b06e) bg_sctrl_sk_pane_cp2

0xd1ae,	// (0x0003b077) control_bg_pane_g1

0xd1b7,	// (0x0003b080) control_bg_pane_g2

0x0001,

0xfd55,	// (0x0003dc1e) control_bg_pane_g

0x8421,	// (0x000362ea) cell_indicator_nsta_pane_g1_ParamLimits

0x4144,	// (0x0003200d) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0003d99a) cell_indicator_nsta_pane_g_ParamLimits

0xddab,	// (0x0003bc74) form2_midp_time_pane_t1_ParamLimits

0xd348,	// (0x0003b211) main_idle_act4_pane_ParamLimits

0xd348,	// (0x0003b211) main_idle_act4_pane

0x359c,	// (0x00031465) popup_tb_extension_window_ParamLimits

0x4a6b,	// (0x00032934) tb_ext_find_pane_ParamLimits

0x4a6b,	// (0x00032934) tb_ext_find_pane

0xd1c0,	// (0x0003b089) ai_gene_pane_1_cp1

0x64f4,	// (0x000343bd) ai_gene_pane_2_cp1

0xd1c8,	// (0x0003b091) list_single_idle_plugin_calendar_pane

0xd1d1,	// (0x0003b09a) list_single_idle_plugin_notification_pane

0xd1da,	// (0x0003b0a3) list_single_idle_plugin_player_pane

0x4ac2,	// (0x0003298b) list_single_idle_plugin_shortcut_pane_ParamLimits

0x4ac2,	// (0x0003298b) list_single_idle_plugin_shortcut_pane

0x4aea,	// (0x000329b3) main_idle_act4_pane_t1

0x4b00,	// (0x000329c9) main_idle_act4_pane_t2

0x0001,

0xfd5a,	// (0x0003dc23) main_idle_act4_pane_t

0x4b16,	// (0x000329df) middle_sk_idle_act4_pane_ParamLimits

0x4b16,	// (0x000329df) middle_sk_idle_act4_pane

0x4b32,	// (0x000329fb) popup_clock_digital_analogue_window_cp2

0x4b58,	// (0x00032a21) shortcut_wheel_idle_act4_pane_ParamLimits

0x4b58,	// (0x00032a21) shortcut_wheel_idle_act4_pane

0xbda0,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g1

0xbda0,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g2

0xbda0,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g3

0xbda0,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g4

0xbda0,	// (0x00039c69) shortcut_wheel_idle_act4_pane_g5

0xd1e3,	// (0x0003b0ac) shortcut_wheel_idle_act4_pane_g6

0xd1eb,	// (0x0003b0b4) shortcut_wheel_idle_act4_pane_g7

0xd1f3,	// (0x0003b0bc) shortcut_wheel_idle_act4_pane_g8

0xd1fb,	// (0x0003b0c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5f,	// (0x0003dc28) shortcut_wheel_idle_act4_pane_g

0xf200,	// (0x0003d0c9) middle_sk_idle_act4_pane_g1_ParamLimits

0xf200,	// (0x0003d0c9) middle_sk_idle_act4_pane_g1

0x4bd3,	// (0x00032a9c) middle_sk_idle_act4_pane_g2_ParamLimits

0x4bd3,	// (0x00032a9c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd82,	// (0x0003dc4b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd82,	// (0x0003dc4b) middle_sk_idle_act4_pane_g

0x4beb,	// (0x00032ab4) middle_sk_idle_act4_pane_t1_ParamLimits

0x4beb,	// (0x00032ab4) middle_sk_idle_act4_pane_t1

0x4c1a,	// (0x00032ae3) grid_ai_shortcut_pane_ParamLimits

0x4c1a,	// (0x00032ae3) grid_ai_shortcut_pane

0x4c37,	// (0x00032b00) list_highlight_pane_cp16_ParamLimits

0x4c37,	// (0x00032b00) list_highlight_pane_cp16

0x4c44,	// (0x00032b0d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x4c44,	// (0x00032b0d) list_single_idle_plugin_shortcut_pane_g1

0x4c50,	// (0x00032b19) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x4c50,	// (0x00032b19) list_single_idle_plugin_shortcut_pane_g2

0x4c6c,	// (0x00032b35) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x4c6c,	// (0x00032b35) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd87,	// (0x0003dc50) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd87,	// (0x0003dc50) list_single_idle_plugin_shortcut_pane_g

0x4c81,	// (0x00032b4a) cell_ai_shortcut_pane_ParamLimits

0x4c81,	// (0x00032b4a) cell_ai_shortcut_pane

0x4c97,	// (0x00032b60) cell_ai_shortcut_pane_g1_ParamLimits

0x4c97,	// (0x00032b60) cell_ai_shortcut_pane_g1

0xd1c0,	// (0x0003b089) ai_gene_pane_1_cp2

0xd203,	// (0x0003b0cc) ai_gene_pane_2_cp2

0xd20b,	// (0x0003b0d4) list_highlight_pane_cp15

0xd214,	// (0x0003b0dd) list_single_idle_plugin_calendar_pane_g1

0xd20b,	// (0x0003b0d4) list_highlight_pane_cp17

0xd21c,	// (0x0003b0e5) list_single_idle_plugin_calendar_pane_g1_copy1

0xd224,	// (0x0003b0ed) list_single_idle_plugin_player_pane_g1

0x7ea1,	// (0x00035d6a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8e,	// (0x0003dc57) list_single_idle_plugin_player_pane_g

0xd22c,	// (0x0003b0f5) list_single_idle_plugin_player_pane_t1

0xd23a,	// (0x0003b103) list_single_idle_plugin_player_pane_t2

0xd248,	// (0x0003b111) list_single_idle_plugin_player_pane_t3

0xd256,	// (0x0003b11f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd93,	// (0x0003dc5c) list_single_idle_plugin_player_pane_t

0xd264,	// (0x0003b12d) wait_bar_pane_cp15

0xd26c,	// (0x0003b135) grid_ai_notification_pane

0x7ea1,	// (0x00035d6a) list_single_idle_plugin_notification_pane_g1

0x4cb9,	// (0x00032b82) cell_ai_notification_pane_ParamLimits

0x4cb9,	// (0x00032b82) cell_ai_notification_pane

0xd275,	// (0x0003b13e) cell_ai_notification_pane_g1

0xd27d,	// (0x0003b146) cell_ai_notification_pane_t1

0x4cc6,	// (0x00032b8f) tb_ext_find_button_pane

0x4cce,	// (0x00032b97) tb_ext_find_pane_g1

0x4cd6,	// (0x00032b9f) tb_ext_find_pane_t1

0x5fd3,	// (0x00033e9c) tb_ext_find_button_pane_g1

0xd28b,	// (0x0003b154) tb_ext_find_button_pane_g2

0x0001,

0xfd9c,	// (0x0003dc65) tb_ext_find_button_pane_g

0x4aea,	// (0x000329b3) main_idle_act4_pane_t1_ParamLimits

0x4b00,	// (0x000329c9) main_idle_act4_pane_t2_ParamLimits

0xfd5a,	// (0x0003dc23) main_idle_act4_pane_t_ParamLimits

0x4b32,	// (0x000329fb) popup_clock_digital_analogue_window_cp2_ParamLimits

0x4b48,	// (0x00032a11) sat_plugin_idle_act4_pane_ParamLimits

0x4b48,	// (0x00032a11) sat_plugin_idle_act4_pane

0x4ce4,	// (0x00032bad) sat_plugin_idle_act4_pane_t1_ParamLimits

0x4ce4,	// (0x00032bad) sat_plugin_idle_act4_pane_t1

0x4cfc,	// (0x00032bc5) sat_plugin_idle_act4_pane_t2_ParamLimits

0x4cfc,	// (0x00032bc5) sat_plugin_idle_act4_pane_t2

0x4d14,	// (0x00032bdd) sat_plugin_idle_act4_pane_t3_ParamLimits

0x4d14,	// (0x00032bdd) sat_plugin_idle_act4_pane_t3

0x4d2c,	// (0x00032bf5) sat_plugin_idle_act4_pane_t4_ParamLimits

0x4d2c,	// (0x00032bf5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda1,	// (0x0003dc6a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda1,	// (0x0003dc6a) sat_plugin_idle_act4_pane_t

0x905b,	// (0x00036f24) popup_battery_window_ParamLimits

0x905b,	// (0x00036f24) popup_battery_window

0x26d8,	// (0x000305a1) bg_popup_sub_pane_cp25_ParamLimits

0x26d8,	// (0x000305a1) bg_popup_sub_pane_cp25

0xd294,	// (0x0003b15d) popup_battery_window_g1_ParamLimits

0xd294,	// (0x0003b15d) popup_battery_window_g1

0xd2a0,	// (0x0003b169) popup_battery_window_t1_ParamLimits

0xd2a0,	// (0x0003b169) popup_battery_window_t1

0xd2b2,	// (0x0003b17b) popup_battery_window_t2_ParamLimits

0xd2b2,	// (0x0003b17b) popup_battery_window_t2

0x0001,

0xfdaa,	// (0x0003dc73) popup_battery_window_t_ParamLimits

0xfdaa,	// (0x0003dc73) popup_battery_window_t

0x2e93,	// (0x00030d5c) midp_canvas_pane_ParamLimits

0x2ee8,	// (0x00030db1) midp_keypad_pane_ParamLimits

0x2ee8,	// (0x00030db1) midp_keypad_pane

0x5c35,	// (0x00033afe) main_midp_pane_ParamLimits

0x848b,	// (0x00036354) signal_pane_g2_cp_ParamLimits

0x4d44,	// (0x00032c0d) aid_size_cell_midp_keypad_ParamLimits

0x4d44,	// (0x00032c0d) aid_size_cell_midp_keypad

0x4d62,	// (0x00032c2b) midp_keyp_game_grid_pane_ParamLimits

0x4d62,	// (0x00032c2b) midp_keyp_game_grid_pane

0x4d81,	// (0x00032c4a) midp_keyp_rocker_pane_ParamLimits

0x4d81,	// (0x00032c4a) midp_keyp_rocker_pane

0x4dc2,	// (0x00032c8b) midp_keyp_sk_left_pane_ParamLimits

0x4dc2,	// (0x00032c8b) midp_keyp_sk_left_pane

0x4e14,	// (0x00032cdd) midp_keyp_sk_right_pane_ParamLimits

0x4e14,	// (0x00032cdd) midp_keyp_sk_right_pane

0x2020,	// (0x0002fee9) bg_button_pane_cp03

0x4e60,	// (0x00032d29) midp_keyp_sk_left_pane_g1

0x2020,	// (0x0002fee9) bg_button_pane_cp04

0x4e60,	// (0x00032d29) midp_keyp_sk_right_pane_g1

0xbda0,	// (0x00039c69) midp_keyp_rocker_pane_g1

0x4e69,	// (0x00032d32) keyp_game_cell_pane_ParamLimits

0x4e69,	// (0x00032d32) keyp_game_cell_pane

0x2020,	// (0x0002fee9) bg_button_pane_cp02

0x4e8b,	// (0x00032d54) keyp_game_cell_pane_g1

0xed43,	// (0x0003cc0c) popup_fep_vkb2_window_ParamLimits

0xed43,	// (0x0003cc0c) popup_fep_vkb2_window

0xf20e,	// (0x0003d0d7) aid_size_cell_vkb2_ParamLimits

0xf20e,	// (0x0003d0d7) aid_size_cell_vkb2

0xf244,	// (0x0003d10d) popup_fep_vkb2_window_g1_ParamLimits

0xf244,	// (0x0003d10d) popup_fep_vkb2_window_g1

0xf294,	// (0x0003d15d) vkb2_area_bottom_pane_ParamLimits

0xf294,	// (0x0003d15d) vkb2_area_bottom_pane

0xf2d2,	// (0x0003d19b) vkb2_area_keypad_pane_ParamLimits

0xf2d2,	// (0x0003d19b) vkb2_area_keypad_pane

0xf310,	// (0x0003d1d9) vkb2_area_top_pane_ParamLimits

0xf310,	// (0x0003d1d9) vkb2_area_top_pane

0xf38c,	// (0x0003d255) vkb2_top_entry_pane_ParamLimits

0xf38c,	// (0x0003d255) vkb2_top_entry_pane

0xf3b9,	// (0x0003d282) vkb2_top_grid_left_pane_ParamLimits

0xf3b9,	// (0x0003d282) vkb2_top_grid_left_pane

0xf3d9,	// (0x0003d2a2) vkb2_top_grid_right_pane_ParamLimits

0xf3d9,	// (0x0003d2a2) vkb2_top_grid_right_pane

0xb546,	// (0x0003940f) vkb2_cell_keypad_pane_ParamLimits

0xb546,	// (0x0003940f) vkb2_cell_keypad_pane

0xf41f,	// (0x0003d2e8) vkb2_area_bottom_grid_pane_ParamLimits

0xf41f,	// (0x0003d2e8) vkb2_area_bottom_grid_pane

0xf445,	// (0x0003d30e) vkb2_area_bottom_pane_g1_ParamLimits

0xf445,	// (0x0003d30e) vkb2_area_bottom_pane_g1

0xf46b,	// (0x0003d334) vkb2_area_bottom_pane_g2_ParamLimits

0xf46b,	// (0x0003d334) vkb2_area_bottom_pane_g2

0xf49c,	// (0x0003d365) vkb2_area_bottom_pane_g3_ParamLimits

0xf49c,	// (0x0003d365) vkb2_area_bottom_pane_g3

0x0002,

0xfdaf,	// (0x0003dc78) vkb2_area_bottom_pane_g_ParamLimits

0xfdaf,	// (0x0003dc78) vkb2_area_bottom_pane_g

0xb6be,	// (0x00039587) vkb2_top_cell_left_pane_ParamLimits

0xb6be,	// (0x00039587) vkb2_top_cell_left_pane

0x5178,	// (0x00033041) vkb2_top_entry_pane_g1_ParamLimits

0x5178,	// (0x00033041) vkb2_top_entry_pane_g1

0x5186,	// (0x0003304f) vkb2_top_entry_pane_t1_ParamLimits

0x5186,	// (0x0003304f) vkb2_top_entry_pane_t1

0xd2d7,	// (0x0003b1a0) vkb2_top_entry_pane_t2_ParamLimits

0xd2d7,	// (0x0003b1a0) vkb2_top_entry_pane_t2

0xd309,	// (0x0003b1d2) vkb2_top_entry_pane_t3_ParamLimits

0xd309,	// (0x0003b1d2) vkb2_top_entry_pane_t3

0x0002,

0xfdb6,	// (0x0003dc7f) vkb2_top_entry_pane_t_ParamLimits

0xfdb6,	// (0x0003dc7f) vkb2_top_entry_pane_t

0xf4f2,	// (0x0003d3bb) vkb2_top_grid_right_pane_g1_ParamLimits

0xf4f2,	// (0x0003d3bb) vkb2_top_grid_right_pane_g1

0xb721,	// (0x000395ea) vkb2_top_grid_right_pane_g2_ParamLimits

0xb721,	// (0x000395ea) vkb2_top_grid_right_pane_g2

0xb739,	// (0x00039602) vkb2_top_grid_right_pane_g3_ParamLimits

0xb739,	// (0x00039602) vkb2_top_grid_right_pane_g3

0xf508,	// (0x0003d3d1) vkb2_top_grid_right_pane_g4_ParamLimits

0xf508,	// (0x0003d3d1) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbd,	// (0x0003dc86) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbd,	// (0x0003dc86) vkb2_top_grid_right_pane_g

0xb767,	// (0x00039630) vkb2_top_cell_left_pane_g1

0xb77e,	// (0x00039647) vkb2_cell_keypad_pane_g1_ParamLimits

0xb77e,	// (0x00039647) vkb2_cell_keypad_pane_g1

0xd31f,	// (0x0003b1e8) vkb2_cell_keypad_pane_t1_ParamLimits

0xd31f,	// (0x0003b1e8) vkb2_cell_keypad_pane_t1

0xb78c,	// (0x00039655) vkb2_cell_bottom_grid_pane_ParamLimits

0xb78c,	// (0x00039655) vkb2_cell_bottom_grid_pane

0xb7c5,	// (0x0003968e) vkb2_cell_bottom_grid_pane_g1

0x4b77,	// (0x00032a40) aid_call2_pane_cp02

0x4b7f,	// (0x00032a48) aid_call_pane_cp02

0x4b87,	// (0x00032a50) clock_digital_number_pane_cp10

0x4b8f,	// (0x00032a58) clock_digital_number_pane_cp11

0x4b97,	// (0x00032a60) clock_digital_number_pane_cp12

0x4b9f,	// (0x00032a68) clock_digital_number_pane_cp13

0x4ba7,	// (0x00032a70) clock_digital_separator_pane_cp10

0x5fd3,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g1

0x5fd3,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g2

0x4baf,	// (0x00032a78) popup_clock_digital_analogue_window_cp2_g3

0x5fd3,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g4

0x4baf,	// (0x00032a78) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd72,	// (0x0003dc3b) popup_clock_digital_analogue_window_cp2_g

0x4bb7,	// (0x00032a80) popup_clock_digital_analogue_window_cp2_t1

0x4bc5,	// (0x00032a8e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7d,	// (0x0003dc46) popup_clock_digital_analogue_window_cp2_t

0xbda0,	// (0x00039c69) clock_digital_number_pane_cp10_g1

0xbda0,	// (0x00039c69) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003da29) clock_digital_number_pane_cp10_g

0xbda0,	// (0x00039c69) clock_digital_separator_pane_cp10_g1

0xbda0,	// (0x00039c69) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003da29) clock_digital_separator_pane_cp10_g

0xd10a,	// (0x0003afd3) uniindi_top_pane_g3

0xd11b,	// (0x0003afe4) uniindi_top_pane_g4

0xb5b1,	// (0x0003947a) vkb2_row_keypad_pane_ParamLimits

0xb5b1,	// (0x0003947a) vkb2_row_keypad_pane

0xb7e1,	// (0x000396aa) vkb2_cell_t_keypad_pane_ParamLimits

0xb7e1,	// (0x000396aa) vkb2_cell_t_keypad_pane

0xb7ee,	// (0x000396b7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb7ee,	// (0x000396b7) vkb2_cell_t_keypad_pane_cp08

0xb7fe,	// (0x000396c7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb7fe,	// (0x000396c7) vkb2_cell_t_keypad_pane_cp09

0xb80f,	// (0x000396d8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb80f,	// (0x000396d8) vkb2_cell_t_keypad_pane_cp01

0xb81f,	// (0x000396e8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb81f,	// (0x000396e8) vkb2_cell_t_keypad_pane_cp02

0xb82f,	// (0x000396f8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb82f,	// (0x000396f8) vkb2_cell_t_keypad_pane_cp03

0xb83f,	// (0x00039708) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb83f,	// (0x00039708) vkb2_cell_t_keypad_pane_cp04

0xb84f,	// (0x00039718) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb84f,	// (0x00039718) vkb2_cell_t_keypad_pane_cp05

0xb85f,	// (0x00039728) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb85f,	// (0x00039728) vkb2_cell_t_keypad_pane_cp06

0xb86f,	// (0x00039738) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb86f,	// (0x00039738) vkb2_cell_t_keypad_pane_cp07

0xb87f,	// (0x00039748) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb87f,	// (0x00039748) vkb2_cell_t_keypad_pane_cp10

0xb09f,	// (0x00038f68) vkb2_cell_t_keypad_pane_g1

0xd336,	// (0x0003b1ff) vkb2_cell_t_keypad_pane_t1

0x8f98,	// (0x00036e61) popup_grid_graphic2_window

0x51eb,	// (0x000330b4) aid_size_cell_graphic2_ParamLimits

0x51eb,	// (0x000330b4) aid_size_cell_graphic2

0x704b,	// (0x00034f14) bg_popup_window_pane_cp21_ParamLimits

0x704b,	// (0x00034f14) bg_popup_window_pane_cp21

0x521d,	// (0x000330e6) graphic2_pages_pane_ParamLimits

0x521d,	// (0x000330e6) graphic2_pages_pane

0x5266,	// (0x0003312f) grid_graphic2_control_pane_ParamLimits

0x5266,	// (0x0003312f) grid_graphic2_control_pane

0x5294,	// (0x0003315d) grid_graphic2_pane_ParamLimits

0x5294,	// (0x0003315d) grid_graphic2_pane

0x52f3,	// (0x000331bc) cell_graphic2_pane

0x2020,	// (0x0002fee9) main_comp_mode_pane

0xcd86,	// (0x0003ac4f) list_ai3_gene_pane_ParamLimits

0x4863,	// (0x0003272c) bg_popup_window_pane_cp19_ParamLimits

0xcef6,	// (0x0003adbf) bg_touch_area_indi_pane_ParamLimits

0xcef6,	// (0x0003adbf) bg_touch_area_indi_pane

0xcf0c,	// (0x0003add5) bg_touch_area_indi_pane_cp01_ParamLimits

0xcf0c,	// (0x0003add5) bg_touch_area_indi_pane_cp01

0xcf22,	// (0x0003adeb) bg_touch_area_indi_pane_cp02_ParamLimits

0xcf22,	// (0x0003adeb) bg_touch_area_indi_pane_cp02

0xcf38,	// (0x0003ae01) bg_touch_area_indi_pane_cp03_ParamLimits

0xcf38,	// (0x0003ae01) bg_touch_area_indi_pane_cp03

0xcf4e,	// (0x0003ae17) popup_slider_window_g1_ParamLimits

0xcf6a,	// (0x0003ae33) popup_slider_window_g2_ParamLimits

0xcf86,	// (0x0003ae4f) popup_slider_window_g3_ParamLimits

0xfd07,	// (0x0003dbd0) popup_slider_window_g_ParamLimits

0xcfa2,	// (0x0003ae6b) popup_slider_window_t1_ParamLimits

0xcfe6,	// (0x0003aeaf) small_volume_slider_vertical_pane_ParamLimits

0x52f3,	// (0x000331bc) cell_graphic2_pane_ParamLimits

0x533c,	// (0x00033205) bg_button_pane_cp10_ParamLimits

0x533c,	// (0x00033205) bg_button_pane_cp10

0x534d,	// (0x00033216) bg_button_pane_cp11_ParamLimits

0x534d,	// (0x00033216) bg_button_pane_cp11

0x535e,	// (0x00033227) graphic2_pages_pane_g1_ParamLimits

0x535e,	// (0x00033227) graphic2_pages_pane_g1

0x5379,	// (0x00033242) graphic2_pages_pane_g2_ParamLimits

0x5379,	// (0x00033242) graphic2_pages_pane_g2

0x0001,

0xfdcb,	// (0x0003dc94) graphic2_pages_pane_g_ParamLimits

0xfdcb,	// (0x0003dc94) graphic2_pages_pane_g

0x5391,	// (0x0003325a) graphic2_pages_pane_t1_ParamLimits

0x5391,	// (0x0003325a) graphic2_pages_pane_t1

0x53a9,	// (0x00033272) cell_graphic2_control_pane_ParamLimits

0x53a9,	// (0x00033272) cell_graphic2_control_pane

0x53c3,	// (0x0003328c) cell_graphic2_pane_g1_ParamLimits

0x53c3,	// (0x0003328c) cell_graphic2_pane_g1

0xf51e,	// (0x0003d3e7) cell_graphic2_pane_g2_ParamLimits

0xf51e,	// (0x0003d3e7) cell_graphic2_pane_g2

0x53d0,	// (0x00033299) cell_graphic2_pane_g3_ParamLimits

0x53d0,	// (0x00033299) cell_graphic2_pane_g3

0xf52b,	// (0x0003d3f4) cell_graphic2_pane_g4_ParamLimits

0xf52b,	// (0x0003d3f4) cell_graphic2_pane_g4

0x53dd,	// (0x000332a6) cell_graphic2_pane_g5_ParamLimits

0x53dd,	// (0x000332a6) cell_graphic2_pane_g5

0x0004,

0xfdd0,	// (0x0003dc99) cell_graphic2_pane_g_ParamLimits

0xfdd0,	// (0x0003dc99) cell_graphic2_pane_g

0x53fd,	// (0x000332c6) cell_graphic2_pane_t1_ParamLimits

0x53fd,	// (0x000332c6) cell_graphic2_pane_t1

0x7633,	// (0x000354fc) grid_highlight_pane_cp11_ParamLimits

0x7633,	// (0x000354fc) grid_highlight_pane_cp11

0x5ab9,	// (0x00033982) bg_button_pane_cp05

0x5414,	// (0x000332dd) cell_graphic2_control_pane_g1

0xbda0,	// (0x00039c69) bg_touch_area_indi_pane_g1

0xd356,	// (0x0003b21f) aid_cmod_rocker_key_size

0xd360,	// (0x0003b229) aid_cmode_itu_key_size

0xd36a,	// (0x0003b233) main_cmode_video_pane

0xd372,	// (0x0003b23b) main_comp_mode_itu_pane

0xd37c,	// (0x0003b245) main_comp_mode_rocker_pane

0xd384,	// (0x0003b24d) cell_cmode_rocker_pane_ParamLimits

0xd384,	// (0x0003b24d) cell_cmode_rocker_pane

0xd396,	// (0x0003b25f) cell_cmode_itu_pane_ParamLimits

0xd396,	// (0x0003b25f) cell_cmode_itu_pane

0x5ab9,	// (0x00033982) bg_button_pane_cp06_ParamLimits

0x5ab9,	// (0x00033982) bg_button_pane_cp06

0xbfda,	// (0x00039ea3) cell_cmode_rocker_pane_g1_ParamLimits

0xbfda,	// (0x00039ea3) cell_cmode_rocker_pane_g1

0xd01d,	// (0x0003aee6) cell_cmode_rocker_pane_g2_ParamLimits

0xd01d,	// (0x0003aee6) cell_cmode_rocker_pane_g2

0x0001,

0xfddb,	// (0x0003dca4) cell_cmode_rocker_pane_g_ParamLimits

0xfddb,	// (0x0003dca4) cell_cmode_rocker_pane_g

0x2020,	// (0x0002fee9) bg_button_pane_cp07

0xd3ab,	// (0x0003b274) cell_cmode_itu_pane_g1

0xd3b4,	// (0x0003b27d) cell_cmode_itu_pane_t1

0xd3c2,	// (0x0003b28b) cell_cmode_itu_pane_t2

0x0001,

0xfde0,	// (0x0003dca9) cell_cmode_itu_pane_t

0xd18c,	// (0x0003b055) aid_touch_ctrl_left

0xd194,	// (0x0003b05d) aid_touch_ctrl_right

0x2020,	// (0x0002fee9) compa_mode_pane

0x5421,	// (0x000332ea) aid_cmod_rocker_key_size_cp

0x542b,	// (0x000332f4) aid_cmode_itu_key_size_cp

0xd3d0,	// (0x0003b299) compa_mode_pane_g1

0xe070,	// (0x0003bf39) compa_mode_pane_g2

0xe078,	// (0x0003bf41) compa_mode_pane_g3

0x0002,

0xfde5,	// (0x0003dcae) compa_mode_pane_g

0x5435,	// (0x000332fe) main_comp_mode_itu_pane_cp

0x543f,	// (0x00033308) main_comp_mode_rocker_pane_cp

0x5449,	// (0x00033312) cell_cmode_itu_pane_cp_ParamLimits

0x5449,	// (0x00033312) cell_cmode_itu_pane_cp

0x545e,	// (0x00033327) cell_cmode_rocker_pane_cp_ParamLimits

0x545e,	// (0x00033327) cell_cmode_rocker_pane_cp

0x5ab9,	// (0x00033982) bg_button_pane_cp06_cp_ParamLimits

0x5ab9,	// (0x00033982) bg_button_pane_cp06_cp

0xbfda,	// (0x00039ea3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbfda,	// (0x00039ea3) cell_cmode_rocker_pane_g1_cp

0xbda0,	// (0x00039c69) cell_cmode_rocker_pane_g2_cp

0x2020,	// (0x0002fee9) bg_button_pane_cp07_cp

0x5470,	// (0x00033339) cell_cmode_itu_pane_g1_cp

0x5479,	// (0x00033342) cell_cmode_itu_pane_t1_cp

0x5487,	// (0x00033350) cell_cmode_itu_pane_t2_cp

0x3f40,	// (0x00031e09) settings_code_pane_cp2

0x2383,	// (0x0003024c) bg_popup_window_pane_cp3_ParamLimits

0x28b0,	// (0x00030779) heading_pane_cp3_ParamLimits

0x28bc,	// (0x00030785) listscroll_popup_graphic_pane_ParamLimits

0xae5a,	// (0x00038d23) fep_hwr_aid_pane_ParamLimits

0xb2ba,	// (0x00039183) aid_touch_sctrl_top_ParamLimits

0xb2d5,	// (0x0003919e) sctrl_sk_top_pane_g1_ParamLimits

0xb09f,	// (0x00038f68) sctrl_sk_top_pane_g2_ParamLimits

0xfd20,	// (0x0003dbe9) sctrl_sk_top_pane_g_ParamLimits

0xb2e2,	// (0x000391ab) sctrl_sk_top_pane_t1_ParamLimits

0xb2ba,	// (0x00039183) aid_touch_sctrl_bottom_ParamLimits

0xb2e2,	// (0x000391ab) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0d6,	// (0x0003af9f) aid_area_touch_clock

0xf34e,	// (0x0003d217) aid_vkb2_area_top_pane_cell_ParamLimits

0xf34e,	// (0x0003d217) aid_vkb2_area_top_pane_cell

0xf3f9,	// (0x0003d2c2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xf3f9,	// (0x0003d2c2) aid_vkb2_area_bottom_pane_cell

0xd2cf,	// (0x0003b198) popup_char_count_window

0xe080,	// (0x0003bf49) popup_char_count_window_g1

0xe089,	// (0x0003bf52) popup_char_count_window_g2

0xe092,	// (0x0003bf5b) popup_char_count_window_g3

0x0002,

0xfdec,	// (0x0003dcb5) popup_char_count_window_g

0xe09b,	// (0x0003bf64) popup_char_count_window_t1

0xb396,	// (0x0003925f) popup_fep_char_preview_window_ParamLimits

0xb396,	// (0x0003925f) popup_fep_char_preview_window

0xf36e,	// (0x0003d237) vkb2_top_candi_pane_ParamLimits

0xf36e,	// (0x0003d237) vkb2_top_candi_pane

0x5495,	// (0x0003335e) cell_vkb2_top_candi_pane_ParamLimits

0x5495,	// (0x0003335e) cell_vkb2_top_candi_pane

0xb894,	// (0x0003975d) bg_popup_fep_char_preview_window_ParamLimits

0xb894,	// (0x0003975d) bg_popup_fep_char_preview_window

0xb8a2,	// (0x0003976b) popup_fep_char_preview_window_t1_ParamLimits

0xb8a2,	// (0x0003976b) popup_fep_char_preview_window_t1

0xe0a9,	// (0x0003bf72) bg_popup_fep_char_preview_window_g1

0xe0b1,	// (0x0003bf7a) bg_popup_fep_char_preview_window_g2

0xe0b9,	// (0x0003bf82) bg_popup_fep_char_preview_window_g3

0xe0c1,	// (0x0003bf8a) bg_popup_fep_char_preview_window_g4

0xe0c9,	// (0x0003bf92) bg_popup_fep_char_preview_window_g5

0xb8dc,	// (0x000397a5) bg_popup_fep_char_preview_window_g6

0xe0d1,	// (0x0003bf9a) bg_popup_fep_char_preview_window_g7

0xe0d9,	// (0x0003bfa2) bg_popup_fep_char_preview_window_g8

0xe0e1,	// (0x0003bfaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf3,	// (0x0003dcbc) bg_popup_fep_char_preview_window_g

0xb09f,	// (0x00038f68) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb09f,	// (0x00038f68) cell_vkb2_top_candi_pane_g1

0xb0ad,	// (0x00038f76) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb0ad,	// (0x00038f76) cell_vkb2_top_candi_pane_g2

0xddbe,	// (0x0003bc87) cell_vkb2_top_candi_pane_g3_ParamLimits

0xddbe,	// (0x0003bc87) cell_vkb2_top_candi_pane_g3

0xb8e4,	// (0x000397ad) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb8e4,	// (0x000397ad) cell_vkb2_top_candi_pane_g4

0xc4ab,	// (0x0003a374) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc4ab,	// (0x0003a374) cell_vkb2_top_candi_pane_g5

0xb905,	// (0x000397ce) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb905,	// (0x000397ce) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe06,	// (0x0003dccf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe06,	// (0x0003dccf) cell_vkb2_top_candi_pane_g

0xb913,	// (0x000397dc) cell_vkb2_top_candi_pane_t1

0xa865,	// (0x0003872e) aid_size_touch_slider_mark_ParamLimits

0xa865,	// (0x0003872e) aid_size_touch_slider_mark

0x5251,	// (0x0003311a) grid_graphic2_catg_pane_ParamLimits

0x5251,	// (0x0003311a) grid_graphic2_catg_pane

0x52c8,	// (0x00033191) popup_grid_graphic2_window_t1_ParamLimits

0x52c8,	// (0x00033191) popup_grid_graphic2_window_t1

0x52dd,	// (0x000331a6) popup_grid_graphic2_window_t2_ParamLimits

0x52dd,	// (0x000331a6) popup_grid_graphic2_window_t2

0x0001,

0xfdc6,	// (0x0003dc8f) popup_grid_graphic2_window_t_ParamLimits

0xfdc6,	// (0x0003dc8f) popup_grid_graphic2_window_t

0x5ab9,	// (0x00033982) bg_button_pane_cp05_ParamLimits

0x5414,	// (0x000332dd) cell_graphic2_control_pane_g1_ParamLimits

0xd152,	// (0x0003b01b) cell_graphic2_catg_pane_ParamLimits

0xd152,	// (0x0003b01b) cell_graphic2_catg_pane

0x2020,	// (0x0002fee9) bg_button_pane_cp12

0x54df,	// (0x000333a8) cell_graphic2_catg_pane_g1

0xd0a2,	// (0x0003af6b) cell_tb_ext_pane_t1_ParamLimits

0xb6de,	// (0x000395a7) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb6de,	// (0x000395a7) vkb2_top_cell_right_narrow_pane

0xb6f6,	// (0x000395bf) vkb2_top_cell_right_wide_pane_ParamLimits

0xb6f6,	// (0x000395bf) vkb2_top_cell_right_wide_pane

0xae4c,	// (0x00038d15) bg_vkb2_func_pane_ParamLimits

0xae4c,	// (0x00038d15) bg_vkb2_func_pane

0xb767,	// (0x00039630) vkb2_top_cell_left_pane_g1_ParamLimits

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp03_ParamLimits

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp03

0xb7c5,	// (0x0003968e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x697e,	// (0x00034847) bg_vkb2_func_pane_g1

0x6976,	// (0x0003483f) bg_vkb2_func_pane_g2

0x6986,	// (0x0003484f) bg_vkb2_func_pane_g3

0x698e,	// (0x00034857) bg_vkb2_func_pane_g4

0x6996,	// (0x0003485f) bg_vkb2_func_pane_g5

0x699e,	// (0x00034867) bg_vkb2_func_pane_g6

0x69ae,	// (0x00034877) bg_vkb2_func_pane_g7

0x69a6,	// (0x0003486f) bg_vkb2_func_pane_g8

0x696e,	// (0x00034837) bg_vkb2_func_pane_g9

0x0008,

0xfe13,	// (0x0003dcdc) bg_vkb2_func_pane_g

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp01_ParamLimits

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp01

0xb767,	// (0x00039630) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb767,	// (0x00039630) vkb2_top_cell_right_wide_pane_g1

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp02_ParamLimits

0xae4c,	// (0x00038d15) bg_vkb2_fuc_pane_cp02

0xb7c5,	// (0x0003968e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb7c5,	// (0x0003968e) vkb2_top_cell_right_narrow_pane_g1

0x47b1,	// (0x0003267a) aid_touch_area_decrease_ParamLimits

0x47b1,	// (0x0003267a) aid_touch_area_decrease

0x47df,	// (0x000326a8) aid_touch_area_increase_ParamLimits

0x47df,	// (0x000326a8) aid_touch_area_increase

0x4807,	// (0x000326d0) aid_touch_area_mute_ParamLimits

0x4807,	// (0x000326d0) aid_touch_area_mute

0x482f,	// (0x000326f8) aid_touch_area_slider_ParamLimits

0x482f,	// (0x000326f8) aid_touch_area_slider

0x486f,	// (0x00032738) popup_slider_window_g4_ParamLimits

0x486f,	// (0x00032738) popup_slider_window_g4

0x4897,	// (0x00032760) popup_slider_window_g5_ParamLimits

0x4897,	// (0x00032760) popup_slider_window_g5

0x48cb,	// (0x00032794) popup_slider_window_g6_ParamLimits

0x48cb,	// (0x00032794) popup_slider_window_g6

0xcfce,	// (0x0003ae97) popup_slider_window_t2_ParamLimits

0xcfce,	// (0x0003ae97) popup_slider_window_t2

0x0001,

0xfd14,	// (0x0003dbdd) popup_slider_window_t_ParamLimits

0xfd14,	// (0x0003dbdd) popup_slider_window_t

0x48e7,	// (0x000327b0) slider_pane_ParamLimits

0x48e7,	// (0x000327b0) slider_pane

0xe0e9,	// (0x0003bfb2) slider_pane_g1_ParamLimits

0xe0e9,	// (0x0003bfb2) slider_pane_g1

0xe0fd,	// (0x0003bfc6) slider_pane_g2_ParamLimits

0xe0fd,	// (0x0003bfc6) slider_pane_g2

0xe113,	// (0x0003bfdc) slider_pane_g3_ParamLimits

0xe113,	// (0x0003bfdc) slider_pane_g3

0x0003,

0xfe26,	// (0x0003dcef) slider_pane_g_ParamLimits

0xfe26,	// (0x0003dcef) slider_pane_g

0x35d8,	// (0x000314a1) popup_tb_float_extension_window_ParamLimits

0x35d8,	// (0x000314a1) popup_tb_float_extension_window

0xe13f,	// (0x0003c008) aid_size_cell_tb_float_ext

0x2020,	// (0x0002fee9) bg_popup_sub_window_cp28

0xe14a,	// (0x0003c013) grid_tb_float_ext_pane

0xe152,	// (0x0003c01b) cell_tb_float_ext_pane_ParamLimits

0xe152,	// (0x0003c01b) cell_tb_float_ext_pane

0xe16a,	// (0x0003c033) cell_tb_float_ext_pane_g1

0xe173,	// (0x0003c03c) grid_highlight_pane_cp12

0xf176,	// (0x0003d03f) cell_last_hwr_side_pane_ParamLimits

0xf176,	// (0x0003d03f) cell_last_hwr_side_pane

0xbda0,	// (0x00039c69) cell_last_hwr_side_pane_g1

0xe17c,	// (0x0003c045) cell_last_hwr_side_pane_g2

0x0001,

0xfe2f,	// (0x0003dcf8) cell_last_hwr_side_pane_g

0xf4cd,	// (0x0003d396) vkb2_area_bottom_space_btn_pane_ParamLimits

0xf4cd,	// (0x0003d396) vkb2_area_bottom_space_btn_pane

0xb09f,	// (0x00038f68) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd336,	// (0x0003b1ff) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb913,	// (0x000397dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb929,	// (0x000397f2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb929,	// (0x000397f2) vkb2_area_bottom_space_btn_pane_g1

0xb95f,	// (0x00039828) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb95f,	// (0x00039828) vkb2_area_bottom_space_btn_pane_g2

0xb995,	// (0x0003985e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb995,	// (0x0003985e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe34,	// (0x0003dcfd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe34,	// (0x0003dcfd) vkb2_area_bottom_space_btn_pane_g

0xaf09,	// (0x00038dd2) cel_fep_hwr_func_pane_ParamLimits

0xaf09,	// (0x00038dd2) cel_fep_hwr_func_pane

0xf14b,	// (0x0003d014) cell_hwr_side_button_pane_ParamLimits

0xf14b,	// (0x0003d014) cell_hwr_side_button_pane

0xd0d6,	// (0x0003af9f) aid_area_touch_clock_ParamLimits

0x26d8,	// (0x000305a1) bg_uniindi_top_pane_ParamLimits

0xd0e8,	// (0x0003afb1) uniindi_top_pane_g1_ParamLimits

0xd0fe,	// (0x0003afc7) uniindi_top_pane_g2_ParamLimits

0xd10a,	// (0x0003afd3) uniindi_top_pane_g3_ParamLimits

0xd11b,	// (0x0003afe4) uniindi_top_pane_g4_ParamLimits

0xfd4c,	// (0x0003dc15) uniindi_top_pane_g_ParamLimits

0xd128,	// (0x0003aff1) uniindi_top_pane_t1_ParamLimits

0x26d8,	// (0x000305a1) bg_vkb2_func_pane_cp01_ParamLimits

0x26d8,	// (0x000305a1) bg_vkb2_func_pane_cp01

0x004e,	// (0x0002df17) cel_fep_hwr_func_pane_g1_ParamLimits

0x004e,	// (0x0002df17) cel_fep_hwr_func_pane_g1

0x26d8,	// (0x000305a1) bg_vkb2_func_pane_cp02_ParamLimits

0x26d8,	// (0x000305a1) bg_vkb2_func_pane_cp02

0x004e,	// (0x0002df17) cell_hwr_side_button_pane_g1_ParamLimits

0x004e,	// (0x0002df17) cell_hwr_side_button_pane_g1

0x6892,	// (0x0003475b) status_pane_g4_ParamLimits

0x6892,	// (0x0003475b) status_pane_g4

0x68aa,	// (0x00034773) status_pane_t1

0xbb92,	// (0x00039a5b) form2_midp_gauge_slider_cont_pane

0xbb9a,	// (0x00039a63) form2_midp_gauge_slider_pane_t1_ParamLimits

0x4211,	// (0x000320da) form2_midp_gauge_slider_pane_t2_ParamLimits

0x4223,	// (0x000320ec) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0003d9dc) form2_midp_gauge_slider_pane_t_ParamLimits

0xbbd0,	// (0x00039a99) form2_midp_slider_pane_ParamLimits

0xb356,	// (0x0003921f) aid_size_cell_func_vkb2_ParamLimits

0xb356,	// (0x0003921f) aid_size_cell_func_vkb2

0xe12b,	// (0x0003bff4) slider_pane_g4_ParamLimits

0xe12b,	// (0x0003bff4) slider_pane_g4

0xf538,	// (0x0003d401) form2_midp_gauge_slider_pane_t2_cp01

0xf546,	// (0x0003d40f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf546,	// (0x0003d40f) form2_midp_gauge_slider_pane_t3_cp01

0xba06,	// (0x000398cf) form2_midp_slider_pane_cp01

0x2020,	// (0x0002fee9) navi_smil_pane

0x00bb,	// (0x0002df84) navi_smil_pane_g1

0x00c3,	// (0x0002df8c) navi_smil_pane_t1

0x0090,	// (0x0002df59) form2_midp_slider_pane_g1

0x0099,	// (0x0002df62) form2_midp_slider_pane_g2

0x00a1,	// (0x0002df6a) form2_midp_slider_pane_g3

0x0090,	// (0x0002df59) form2_midp_slider_pane_g4

0x5513,	// (0x000333dc) form2_midp_slider_pane_g5

0x0004,

0xfe3d,	// (0x0003dd06) form2_midp_slider_pane_g

0xb9cb,	// (0x00039894) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb9cb,	// (0x00039894) vkb2_area_bottom_space_btn_pane_g4

0x377a,	// (0x00031643) lc0_navi_pane_ParamLimits

0x377a,	// (0x00031643) lc0_navi_pane

0x37e4,	// (0x000316ad) lc0_stat_indi_pane_ParamLimits

0x37e4,	// (0x000316ad) lc0_stat_indi_pane

0x37f9,	// (0x000316c2) ls0_title_pane_ParamLimits

0x37f9,	// (0x000316c2) ls0_title_pane

0x5ab9,	// (0x00033982) bg_popup_sub_pane_cp14_ParamLimits

0xd0bd,	// (0x0003af86) list_uniindi_pane_ParamLimits

0xd0c9,	// (0x0003af92) uniindi_top_pane_ParamLimits

0xd164,	// (0x0003b02d) list_single_uniindi_pane_g1_ParamLimits

0xd177,	// (0x0003b040) list_single_uniindi_pane_t1_ParamLimits

0xf563,	// (0x0003d42c) lc0_stat_clock_pane_ParamLimits

0xf563,	// (0x0003d42c) lc0_stat_clock_pane

0x5536,	// (0x000333ff) lc0_stat_indi_pane_g1_ParamLimits

0x5536,	// (0x000333ff) lc0_stat_indi_pane_g1

0x5529,	// (0x000333f2) lc0_stat_indi_pane_g2_ParamLimits

0x5529,	// (0x000333f2) lc0_stat_indi_pane_g2

0x0001,

0xfe48,	// (0x0003dd11) lc0_stat_indi_pane_g_ParamLimits

0xfe48,	// (0x0003dd11) lc0_stat_indi_pane_g

0xf570,	// (0x0003d439) lc0_uni_indicator_pane_ParamLimits

0xf570,	// (0x0003d439) lc0_uni_indicator_pane

0x0105,	// (0x0002dfce) ls0_title_pane_g1_ParamLimits

0x0105,	// (0x0002dfce) ls0_title_pane_g1

0x5550,	// (0x00033419) ls0_title_pane_t1_ParamLimits

0x5550,	// (0x00033419) ls0_title_pane_t1

0xf57d,	// (0x0003d446) lc0_uni_indicator_pane_g1_ParamLimits

0xf57d,	// (0x0003d446) lc0_uni_indicator_pane_g1

0x0161,	// (0x0002e02a) lc0_stat_clock_pane_t1

0x2020,	// (0x0002fee9) main_ai5_pane

0x016f,	// (0x0002e038) ai5_sk_pane_ParamLimits

0x016f,	// (0x0002e038) ai5_sk_pane

0x5593,	// (0x0003345c) cell_ai5_widget_pane_ParamLimits

0x5593,	// (0x0003345c) cell_ai5_widget_pane

0x55fa,	// (0x000334c3) aid_size_cell_widget_grid

0x01eb,	// (0x0002e0b4) bg_ai5_widget_pane_ParamLimits

0x01eb,	// (0x0002e0b4) bg_ai5_widget_pane

0x5629,	// (0x000334f2) cell_ai5_widget_pane_g2

0x5639,	// (0x00033502) cell_ai5_widget_pane_g3

0x564d,	// (0x00033516) cell_ai5_widget_pane_g4

0x5659,	// (0x00033522) cell_ai5_widget_pane_g5

0x5665,	// (0x0003352e) cell_ai5_widget_pane_g6

0x5671,	// (0x0003353a) cell_ai5_widget_pane_g7

0x56b9,	// (0x00033582) cell_ai5_widget_pane_t1_ParamLimits

0x56b9,	// (0x00033582) cell_ai5_widget_pane_t1

0x56d6,	// (0x0003359f) cell_ai5_widget_pane_t2_ParamLimits

0x56d6,	// (0x0003359f) cell_ai5_widget_pane_t2

0x56ee,	// (0x000335b7) cell_ai5_widget_pane_t3_ParamLimits

0x56ee,	// (0x000335b7) cell_ai5_widget_pane_t3

0x5706,	// (0x000335cf) cell_ai5_widget_pane_t4_ParamLimits

0x5706,	// (0x000335cf) cell_ai5_widget_pane_t4

0x5720,	// (0x000335e9) cell_ai5_widget_pane_t5_ParamLimits

0x5720,	// (0x000335e9) cell_ai5_widget_pane_t5

0x0329,	// (0x0002e1f2) cell_ai5_widget_pane_t6_ParamLimits

0x0329,	// (0x0002e1f2) cell_ai5_widget_pane_t6

0x033b,	// (0x0002e204) cell_ai5_widget_pane_t7_ParamLimits

0x033b,	// (0x0002e204) cell_ai5_widget_pane_t7

0x573f,	// (0x00033608) cell_ai5_widget_pane_t8_ParamLimits

0x573f,	// (0x00033608) cell_ai5_widget_pane_t8

0x0009,

0xfe62,	// (0x0003dd2b) cell_ai5_widget_pane_t_ParamLimits

0xfe62,	// (0x0003dd2b) cell_ai5_widget_pane_t

0x5787,	// (0x00033650) grid_ai5_widget_pane

0x5ab9,	// (0x00033982) highlight_cell_ai5_widget_pane_ParamLimits

0x5ab9,	// (0x00033982) highlight_cell_ai5_widget_pane

0x579b,	// (0x00033664) ai5_sk_left_pane

0x57a5,	// (0x0003366e) ai5_sk_middle_pane

0x57af,	// (0x00033678) ai5_sk_right_pane

0x03d0,	// (0x0002e299) bg_ai5_widget_pane_g1_ParamLimits

0x03d0,	// (0x0002e299) bg_ai5_widget_pane_g1

0x03dc,	// (0x0002e2a5) bg_ai5_widget_pane_g2_ParamLimits

0x03dc,	// (0x0002e2a5) bg_ai5_widget_pane_g2

0x03e8,	// (0x0002e2b1) bg_ai5_widget_pane_g3_ParamLimits

0x03e8,	// (0x0002e2b1) bg_ai5_widget_pane_g3

0x03f4,	// (0x0002e2bd) bg_ai5_widget_pane_g4_ParamLimits

0x03f4,	// (0x0002e2bd) bg_ai5_widget_pane_g4

0x0400,	// (0x0002e2c9) bg_ai5_widget_pane_g5_ParamLimits

0x0400,	// (0x0002e2c9) bg_ai5_widget_pane_g5

0x040c,	// (0x0002e2d5) bg_ai5_widget_pane_g6_ParamLimits

0x040c,	// (0x0002e2d5) bg_ai5_widget_pane_g6

0x0418,	// (0x0002e2e1) bg_ai5_widget_pane_g7_ParamLimits

0x0418,	// (0x0002e2e1) bg_ai5_widget_pane_g7

0x0424,	// (0x0002e2ed) bg_ai5_widget_pane_g8_ParamLimits

0x0424,	// (0x0002e2ed) bg_ai5_widget_pane_g8

0x0430,	// (0x0002e2f9) bg_ai5_widget_pane_g9_ParamLimits

0x0430,	// (0x0002e2f9) bg_ai5_widget_pane_g9

0x0008,

0xfe77,	// (0x0003dd40) bg_ai5_widget_pane_g_ParamLimits

0xfe77,	// (0x0003dd40) bg_ai5_widget_pane_g

0x57b9,	// (0x00033682) cell_shortcut_ai5_widget_pane_ParamLimits

0x57b9,	// (0x00033682) cell_shortcut_ai5_widget_pane

0x24ea,	// (0x000303b3) bg_cell_shortcut_ai5_widget_pane

0x57ca,	// (0x00033693) cell_grid_ai5_widget_pane_g1

0x0472,	// (0x0002e33b) highlight_cell_shortcut_ai5_widget_pane

0x697e,	// (0x00034847) ai5_sk_left_pane_g1

0x047a,	// (0x0002e343) ai5_sk_left_pane_g2

0x0482,	// (0x0002e34b) ai5_sk_left_pane_g3

0x048a,	// (0x0002e353) ai5_sk_left_pane_g4

0x0003,

0xfe8a,	// (0x0003dd53) ai5_sk_left_pane_g

0x0492,	// (0x0002e35b) ai5_sk_left_pane_t1

0x6976,	// (0x0003483f) ai5_sk_right_pane_g1

0x04a0,	// (0x0002e369) ai5_sk_right_pane_g2

0x04a8,	// (0x0002e371) ai5_sk_right_pane_g3

0x04b0,	// (0x0002e379) ai5_sk_right_pane_g4

0x0003,

0xfe93,	// (0x0003dd5c) ai5_sk_right_pane_g

0x04b8,	// (0x0002e381) ai5_sk_right_pane_t1

0x6976,	// (0x0003483f) ai5_sk_middle_pane_g1

0x697e,	// (0x00034847) ai5_sk_middle_pane_g2

0x6996,	// (0x0003485f) ai5_sk_middle_pane_g3

0x04a8,	// (0x0002e371) ai5_sk_middle_pane_g4

0x0482,	// (0x0002e34b) ai5_sk_middle_pane_g5

0x04c6,	// (0x0002e38f) ai5_sk_middle_pane_g6

0x57d3,	// (0x0003369c) ai5_sk_middle_pane_g7

0x0006,

0xfe9c,	// (0x0003dd65) ai5_sk_middle_pane_g

0x3678,	// (0x00031541) aid_touch_area_size_lc0_ParamLimits

0x3678,	// (0x00031541) aid_touch_area_size_lc0

0xb0ce,	// (0x00038f97) cell_hwr_candidate_pane_t1_ParamLimits

0x67c7,	// (0x00034690) aid_touch_navi_pane

0x38e5,	// (0x000317ae) status_dt_navi_pane_ParamLimits

0x38e5,	// (0x000317ae) status_dt_navi_pane

0x38fd,	// (0x000317c6) status_dt_sta_pane_ParamLimits

0x38fd,	// (0x000317c6) status_dt_sta_pane

0x57db,	// (0x000336a4) dt_sta_controll_pane

0x57e8,	// (0x000336b1) dt_sta_indi_pane

0x57f5,	// (0x000336be) dt_sta_title_pane

0x26d8,	// (0x000305a1) bg_dt_sta_indi_pane_ParamLimits

0x26d8,	// (0x000305a1) bg_dt_sta_indi_pane

0x5807,	// (0x000336d0) dt_sta_battery_pane

0x580f,	// (0x000336d8) dt_sta_indi_pane_g1

0x5818,	// (0x000336e1) dt_sta_indi_pane_g2

0x5821,	// (0x000336ea) dt_sta_indi_pane_g3

0x0002,

0xfeab,	// (0x0003dd74) dt_sta_indi_pane_g

0x582a,	// (0x000336f3) dt_sta_signal_pane

0x5ab9,	// (0x00033982) bg_dt_sta_title_pane_ParamLimits

0x5ab9,	// (0x00033982) bg_dt_sta_title_pane

0x5833,	// (0x000336fc) dt_sta_title_pane_g1

0x583b,	// (0x00033704) dt_sta_title_pane_t1_ParamLimits

0x583b,	// (0x00033704) dt_sta_title_pane_t1

0x2020,	// (0x0002fee9) bg_dt_sta_control_pane

0x5850,	// (0x00033719) dt_sta_controll_pane_g1

0x5859,	// (0x00033722) bg_dt_sta_title_pane_g1

0x5862,	// (0x0003372b) bg_dt_sta_title_pane_g2

0x586b,	// (0x00033734) bg_dt_sta_title_pane_g3

0x0002,

0xfeb2,	// (0x0003dd7b) bg_dt_sta_title_pane_g

0xbda0,	// (0x00039c69) bg_dt_sta_indi_pane_g1

0x5874,	// (0x0003373d) dt_sta_signal_pane_g1

0x587c,	// (0x00033745) dt_sta_signal_pane_g2

0x0001,

0xfeb9,	// (0x0003dd82) dt_sta_signal_pane_g

0x0584,	// (0x0002e44d) dt_sta_battery_pane_g1

0x058d,	// (0x0002e456) dt_sta_battery_pane_t1

0xbda0,	// (0x00039c69) bg_dt_sta_control_pane_g1

0x6030,	// (0x00033ef9) fep_china_uni_eep_pane

0x6038,	// (0x00033f01) fep_china_uni_entry_pane_ParamLimits

0x6048,	// (0x00033f11) popup_fep_china_uni_window_g1_ParamLimits

0x6058,	// (0x00033f21) popup_fep_china_uni_window_g2_ParamLimits

0x6058,	// (0x00033f21) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003d62b) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003d62b) popup_fep_china_uni_window_g

0x059c,	// (0x0002e465) fep_china_uni_eep_pane_g1

0x05a4,	// (0x0002e46d) fep_china_uni_eep_pane_t1

0x00b2,	// (0x0002df7b) aid_touch_area_size_smil_player

0x6865,	// (0x0003472e) lc0_clock_pane

0x689e,	// (0x00034767) status_pane_g5_ParamLimits

0x689e,	// (0x00034767) status_pane_g5

0x320c,	// (0x000310d5) popup_keymap_window

0x687e,	// (0x00034747) status_icon_pane

0x5639,	// (0x00033502) cell_ai5_widget_pane_g3_ParamLimits

0x564d,	// (0x00033516) cell_ai5_widget_pane_g4_ParamLimits

0x5659,	// (0x00033522) cell_ai5_widget_pane_g5_ParamLimits

0x567d,	// (0x00033546) cell_ai5_widget_pane_g8_ParamLimits

0x567d,	// (0x00033546) cell_ai5_widget_pane_g8

0x5691,	// (0x0003355a) cell_ai5_widget_pane_g9_ParamLimits

0x5691,	// (0x0003355a) cell_ai5_widget_pane_g9

0x56a5,	// (0x0003356e) cell_ai5_widget_pane_g10_ParamLimits

0x56a5,	// (0x0003356e) cell_ai5_widget_pane_g10

0x05b3,	// (0x0002e47c) status_icon_pane_g1

0x2020,	// (0x0002fee9) bg_popup_sub_pane_cp13

0x05bb,	// (0x0002e484) popup_keymap_window_t1

0x2f7a,	// (0x00030e43) control_pane_g6_ParamLimits

0x2f7a,	// (0x00030e43) control_pane_g6

0x2f6d,	// (0x00030e36) control_pane_g7_ParamLimits

0x2f6d,	// (0x00030e36) control_pane_g7

0x2f60,	// (0x00030e29) control_pane_g8_ParamLimits

0x2f60,	// (0x00030e29) control_pane_g8

0x57db,	// (0x000336a4) dt_sta_controll_pane_ParamLimits

0x57e8,	// (0x000336b1) dt_sta_indi_pane_ParamLimits

0x57f5,	// (0x000336be) dt_sta_title_pane_ParamLimits

0x2b37,	// (0x00030a00) aid_size_touch_scroll_bar_cale

0x906f,	// (0x00036f38) popup_discreet_window_ParamLimits

0x906f,	// (0x00036f38) popup_discreet_window

0xed75,	// (0x0003cc3e) popup_sk_window

0x704b,	// (0x00034f14) bg_popup_sub_pane_cp28_ParamLimits

0x704b,	// (0x00034f14) bg_popup_sub_pane_cp28

0x05c9,	// (0x0002e492) popup_discreet_window_g1_ParamLimits

0x05c9,	// (0x0002e492) popup_discreet_window_g1

0x05e9,	// (0x0002e4b2) popup_discreet_window_t1_ParamLimits

0x05e9,	// (0x0002e4b2) popup_discreet_window_t1

0x0607,	// (0x0002e4d0) popup_discreet_window_t2_ParamLimits

0x0607,	// (0x0002e4d0) popup_discreet_window_t2

0x0002,

0xfebe,	// (0x0003dd87) popup_discreet_window_t_ParamLimits

0xfebe,	// (0x0003dd87) popup_discreet_window_t

0xba3b,	// (0x00039904) popup_sk_window_g1

0xba44,	// (0x0003990d) popup_sk_window_g2

0x0001,

0xfec5,	// (0x0003dd8e) popup_sk_window_g

0x0679,	// (0x0002e542) popup_sk_window_t1

0x066b,	// (0x0002e534) popup_sk_window_t1_copy1

0x5629,	// (0x000334f2) cell_ai5_widget_pane_g2_ParamLimits

0x5751,	// (0x0003361a) cell_ai5_widget_pane_t9_ParamLimits

0x5751,	// (0x0003361a) cell_ai5_widget_pane_t9

0x2020,	// (0x0002fee9) main_fep_fshwr2_pane

0x5884,	// (0x0003374d) aid_fshwr2_btn_pane

0x588c,	// (0x00033755) aid_fshwr2_syb_pane

0x5894,	// (0x0003375d) aid_fshwr2_txt_pane

0x589c,	// (0x00033765) fshwr2_func_candi_pane

0x58a4,	// (0x0003376d) fshwr2_hwr_syb_pane

0x58ac,	// (0x00033775) fshwr2_icf_pane

0x2020,	// (0x0002fee9) fshwr2_icf_bg_pane

0x58b4,	// (0x0003377d) fshwr2_icf_pane_t1_ParamLimits

0x58b4,	// (0x0003377d) fshwr2_icf_pane_t1

0xbda0,	// (0x00039c69) fshwr2_func_candi_pane_g1

0x06e0,	// (0x0002e5a9) fshwr2_func_candi_row_pane_ParamLimits

0x06e0,	// (0x0002e5a9) fshwr2_func_candi_row_pane

0x58cc,	// (0x00033795) cell_fshwr2_syb_pane_ParamLimits

0x58cc,	// (0x00033795) cell_fshwr2_syb_pane

0xbfda,	// (0x00039ea3) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbfda,	// (0x00039ea3) fshwr2_hwr_syb_pane_g1

0x2020,	// (0x0002fee9) bg_popup_call_pane_cp01

0x0708,	// (0x0002e5d1) fshwr2_func_candi_cell_pane_ParamLimits

0x0708,	// (0x0002e5d1) fshwr2_func_candi_cell_pane

0x0733,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x0733,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane

0x074d,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x074d,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1

0x076d,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x076d,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1

0x2020,	// (0x0002fee9) bg_button_pane_cp08

0x6460,	// (0x00034329) cell_fshwr2_syb_bg_pane

0x58e3,	// (0x000337ac) cell_fshwr2_syb_bg_pane_g1

0x58eb,	// (0x000337b4) cell_fshwr2_syb_bg_pane_t1

0x5ab9,	// (0x00033982) main_tmo_pane

0x3d4f,	// (0x00031c18) uni_indicator_pane_g1_ParamLimits

0x3d64,	// (0x00031c2d) uni_indicator_pane_g2_ParamLimits

0x3d7a,	// (0x00031c43) uni_indicator_pane_g3_ParamLimits

0x79d7,	// (0x000358a0) uni_indicator_pane_g4_ParamLimits

0x79d7,	// (0x000358a0) uni_indicator_pane_g4

0x79eb,	// (0x000358b4) uni_indicator_pane_g5_ParamLimits

0x79eb,	// (0x000358b4) uni_indicator_pane_g5

0x79ff,	// (0x000358c8) uni_indicator_pane_g6_ParamLimits

0x79ff,	// (0x000358c8) uni_indicator_pane_g6

0xf953,	// (0x0003d81c) uni_indicator_pane_g_ParamLimits

0x4795,	// (0x0003265e) popup_tmo_note_window_ParamLimits

0x4795,	// (0x0003265e) popup_tmo_note_window

0x2020,	// (0x0002fee9) fshwr2_bg_pane

0x075e,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x075e,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeca,	// (0x0003dd93) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeca,	// (0x0003dd93) fshwr2_func_candi_cell_pane_g

0xbda0,	// (0x00039c69) bg_popup_window_pane_cp01

0x0797,	// (0x0002e660) bg_popup_window_pane_g1_cp01

0x07a0,	// (0x0002e669) bg_popup_window_pane_cp22_ParamLimits

0x07a0,	// (0x0002e669) bg_popup_window_pane_cp22

0x07ae,	// (0x0002e677) listscroll_tmo_link_pane_ParamLimits

0x07ae,	// (0x0002e677) listscroll_tmo_link_pane

0x07ee,	// (0x0002e6b7) popup_tmo_note_window_g1_ParamLimits

0x07ee,	// (0x0002e6b7) popup_tmo_note_window_g1

0x07fb,	// (0x0002e6c4) tmo_note_info_pane_ParamLimits

0x07fb,	// (0x0002e6c4) tmo_note_info_pane

0x58fa,	// (0x000337c3) list_tmo_note_info_pane_g1_ParamLimits

0x58fa,	// (0x000337c3) list_tmo_note_info_pane_g1

0x082c,	// (0x0002e6f5) list_tmo_note_info_pane_g2_ParamLimits

0x082c,	// (0x0002e6f5) list_tmo_note_info_pane_g2

0x0001,

0xfecf,	// (0x0003dd98) list_tmo_note_info_pane_g_ParamLimits

0xfecf,	// (0x0003dd98) list_tmo_note_info_pane_g

0x0848,	// (0x0002e711) list_tmo_note_info_text_pane_ParamLimits

0x0848,	// (0x0002e711) list_tmo_note_info_text_pane

0x08c9,	// (0x0002e792) list_tmo_link_pane

0x08d6,	// (0x0002e79f) scroll_pane_cp20

0x08e3,	// (0x0002e7ac) list_single_tmo_link_pane_ParamLimits

0x08e3,	// (0x0002e7ac) list_single_tmo_link_pane

0x08f3,	// (0x0002e7bc) list_single_tmo_link_pane_t1

0x0901,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1_ParamLimits

0x0901,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1

0x5b67,	// (0x00033a30) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5b67,	// (0x00033a30) aid_size_touch_scroll_bar_cp01

0x1c88,	// (0x0002fb51) aid_size_touch_slider_marker

0xed69,	// (0x0003cc32) popup_settings_window_ParamLimits

0xed69,	// (0x0003cc32) popup_settings_window

0xdb0c,	// (0x0003b9d5) popup_candi_list_indi_window

0x67c7,	// (0x00034690) aid_touch_navi_pane_ParamLimits

0xb28e,	// (0x00039157) rs_clock_indi_pane

0xb297,	// (0x00039160) sctrl_sk_bottom_pane_ParamLimits

0xb2a8,	// (0x00039171) sctrl_sk_top_pane_ParamLimits

0xb3b0,	// (0x00039279) popup_fep_tooltip_window

0x55fa,	// (0x000334c3) aid_size_cell_widget_grid_ParamLimits

0x561d,	// (0x000334e6) cell_ai5_widget_pane_g1_ParamLimits

0x561d,	// (0x000334e6) cell_ai5_widget_pane_g1

0x5665,	// (0x0003352e) cell_ai5_widget_pane_g6_ParamLimits

0x5671,	// (0x0003353a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4d,	// (0x0003dd16) cell_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0003dd16) cell_ai5_widget_pane_g

0x5775,	// (0x0003363e) cell_ai5_widget_pane_t10_ParamLimits

0x5775,	// (0x0003363e) cell_ai5_widget_pane_t10

0x5787,	// (0x00033650) grid_ai5_widget_pane_ParamLimits

0x043c,	// (0x0002e305) cell_contacts_ai5_widget_pane_ParamLimits

0x043c,	// (0x0002e305) cell_contacts_ai5_widget_pane

0x061c,	// (0x0002e4e5) popup_discreet_window_t3_ParamLimits

0x061c,	// (0x0002e4e5) popup_discreet_window_t3

0x06b7,	// (0x0002e580) popup_fshwr2_char_preview_window_ParamLimits

0x06b7,	// (0x0002e580) popup_fshwr2_char_preview_window

0x5911,	// (0x000337da) tmo_note_info_pane_t1

0x5926,	// (0x000337ef) tmo_note_info_pane_t2

0x593b,	// (0x00033804) tmo_note_info_pane_t3

0x08a5,	// (0x0002e76e) tmo_note_info_pane_t4

0x08b7,	// (0x0002e780) tmo_note_info_pane_t5

0x0004,

0xfed4,	// (0x0003dd9d) tmo_note_info_pane_t

0x08c9,	// (0x0002e792) list_tmo_link_pane_ParamLimits

0x08d6,	// (0x0002e79f) scroll_pane_cp20_ParamLimits

0x2020,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp01

0x091a,	// (0x0002e7e3) popup_fshwr2_char_preview_window_t1

0x0928,	// (0x0002e7f1) popup_candi_list_indi_window_g1

0x0931,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane

0x093d,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1

0x0951,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2

0x0960,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedf,	// (0x0003dda8) cell_contacts_ai5_widget_pane_g

0x0973,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1

0x5ab9,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01

0x59b3,	// (0x0003387c) settings_container_pane

0x6460,	// (0x00034329) listscroll_set_pane_copy1

0x8180,	// (0x00036049) scroll_pane_cp121_copy1

0x09f7,	// (0x0002e8c0) set_content_pane_copy1

0x09ff,	// (0x0002e8c8) aid_height_set_list_copy1_ParamLimits

0x09ff,	// (0x0002e8c8) aid_height_set_list_copy1

0x7b98,	// (0x00035a61) aid_size_parent_copy1_ParamLimits

0x7b98,	// (0x00035a61) aid_size_parent_copy1

0x59bf,	// (0x00033888) button_value_adjust_pane_cp6_copy1_ParamLimits

0x59bf,	// (0x00033888) button_value_adjust_pane_cp6_copy1

0x5c35,	// (0x00033afe) list_highlight_pane_cp2_copy1_ParamLimits

0x5c35,	// (0x00033afe) list_highlight_pane_cp2_copy1

0x59d3,	// (0x0003389c) list_set_pane_copy1_ParamLimits

0x59d3,	// (0x0003389c) list_set_pane_copy1

0x5950,	// (0x00033819) main_pane_set_t1_copy1_ParamLimits

0x5950,	// (0x00033819) main_pane_set_t1_copy1

0x598a,	// (0x00033853) main_pane_set_t2_copy1_ParamLimits

0x598a,	// (0x00033853) main_pane_set_t2_copy1

0x0aad,	// (0x0002e976) main_pane_set_t3_copy1

0x0abb,	// (0x0002e984) main_pane_set_t4_copy1

0x59a7,	// (0x00033870) set_content_pane_g1_copy1_ParamLimits

0x59a7,	// (0x00033870) set_content_pane_g1_copy1

0x5a61,	// (0x0003392a) setting_code_pane_copy1

0x0ad1,	// (0x0002e99a) setting_slider_graphic_pane_copy1

0x0ad1,	// (0x0002e99a) setting_slider_pane_copy1

0x0ad9,	// (0x0002e9a2) setting_text_pane_copy1

0x0ad1,	// (0x0002e99a) setting_volume_pane_copy1

0x5a69,	// (0x00033932) settings_code_pane_cp2_copy1

0x6ac0,	// (0x00034989) settings_code_pane_cp_copy1_ParamLimits

0x6ac0,	// (0x00034989) settings_code_pane_cp_copy1

0x6ad4,	// (0x0003499d) volume_set_pane_copy1

0x6adc,	// (0x000349a5) volume_set_pane_g10_copy1

0x6ae4,	// (0x000349ad) volume_set_pane_g1_copy1

0x6aec,	// (0x000349b5) volume_set_pane_g2_copy1

0x6af4,	// (0x000349bd) volume_set_pane_g3_copy1

0x6afc,	// (0x000349c5) volume_set_pane_g4_copy1

0x6b04,	// (0x000349cd) volume_set_pane_g5_copy1

0x6b0c,	// (0x000349d5) volume_set_pane_g6_copy1

0x6b14,	// (0x000349dd) volume_set_pane_g7_copy1

0x6b1c,	// (0x000349e5) volume_set_pane_g8_copy1

0x6b24,	// (0x000349ed) volume_set_pane_g9_copy1

0x2383,	// (0x0003024c) bg_set_opt_pane_cp_copy1_ParamLimits

0x2383,	// (0x0003024c) bg_set_opt_pane_cp_copy1

0x2391,	// (0x0003025a) setting_slider_pane_t1_copy1_ParamLimits

0x2391,	// (0x0003025a) setting_slider_pane_t1_copy1

0x0b55,	// (0x0002ea1e) setting_slider_pane_t2_copy1_ParamLimits

0x0b55,	// (0x0002ea1e) setting_slider_pane_t2_copy1

0x0b6e,	// (0x0002ea37) setting_slider_pane_t3_copy1_ParamLimits

0x0b6e,	// (0x0002ea37) setting_slider_pane_t3_copy1

0x23d7,	// (0x000302a0) slider_set_pane_copy1_ParamLimits

0x23d7,	// (0x000302a0) slider_set_pane_copy1

0x5b08,	// (0x000339d1) set_opt_bg_pane_g1_copy2

0x5b10,	// (0x000339d9) set_opt_bg_pane_g2_copy2

0x0b85,	// (0x0002ea4e) set_opt_bg_pane_g3_copy2

0x5b20,	// (0x000339e9) set_opt_bg_pane_g4_copy2

0x5b28,	// (0x000339f1) set_opt_bg_pane_g5_copy2

0x5b30,	// (0x000339f9) set_opt_bg_pane_g6_copy2

0x6b2c,	// (0x000349f5) set_opt_bg_pane_g7_copy2

0x0b95,	// (0x0002ea5e) set_opt_bg_pane_g8_copy2

0x0b9d,	// (0x0002ea66) set_opt_bg_pane_g9_copy2

0x7d4e,	// (0x00035c17) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d4e,	// (0x00035c17) aid_size_touch_slider_mark_copy1

0x7baa,	// (0x00035a73) slider_set_pane_g1_copy1

0x7bb3,	// (0x00035a7c) slider_set_pane_g2_copy1

0x7d62,	// (0x00035c2b) slider_set_pane_g3_copy1_ParamLimits

0x7d62,	// (0x00035c2b) slider_set_pane_g3_copy1

0x7d76,	// (0x00035c3f) slider_set_pane_g4_copy1_ParamLimits

0x7d76,	// (0x00035c3f) slider_set_pane_g4_copy1

0x7d8e,	// (0x00035c57) slider_set_pane_g5_copy1_ParamLimits

0x7d8e,	// (0x00035c57) slider_set_pane_g5_copy1

0x7d62,	// (0x00035c2b) slider_set_pane_g6_copy1_ParamLimits

0x7d62,	// (0x00035c2b) slider_set_pane_g6_copy1

0x6b34,	// (0x000349fd) slider_set_pane_g7_copy1_ParamLimits

0x6b34,	// (0x000349fd) slider_set_pane_g7_copy1

0x2177,	// (0x00030040) bg_set_opt_pane_cp2_copy1

0x23ed,	// (0x000302b6) setting_slider_graphic_pane_g1_copy1

0x6b4a,	// (0x00034a13) setting_slider_graphic_pane_t1_copy1

0x6b59,	// (0x00034a22) setting_slider_graphic_pane_t2_copy1

0x6b68,	// (0x00034a31) slider_set_pane_cp_copy1

0x0be9,	// (0x0002eab2) input_focus_pane_cp1_copy1

0x0bf2,	// (0x0002eabb) list_set_text_pane_copy1

0x0bfa,	// (0x0002eac3) setting_text_pane_g1_copy1

0xe185,	// (0x0003c04e) set_text_pane_t1_copy1

0x0be9,	// (0x0002eab2) input_focus_pane_cp2_copy1

0x0bfa,	// (0x0002eac3) setting_code_pane_g1_copy1

0x0c03,	// (0x0002eacc) setting_code_pane_t1_copy1

0x2e6f,	// (0x00030d38) list_set_graphic_pane_copy1

0x2177,	// (0x00030040) bg_set_opt_pane_cp4_copy1

0x0c25,	// (0x0002eaee) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c25,	// (0x0002eaee) list_set_graphic_pane_g1_copy1

0x0c31,	// (0x0002eafa) list_set_graphic_pane_g2_copy1

0x61db,	// (0x000340a4) list_set_graphic_pane_t1_copy1_ParamLimits

0x61db,	// (0x000340a4) list_set_graphic_pane_t1_copy1

0xbda0,	// (0x00039c69) rs_clock_indi_pane_g1

0x0c39,	// (0x0002eb02) rs_clock_indi_pane_t1

0x0c47,	// (0x0002eb10) rs_indi_pane

0x0c4f,	// (0x0002eb18) rs_indi_pane_g1

0x0c58,	// (0x0002eb21) rs_indi_pane_g2

0x0928,	// (0x0002e7f1) rs_indi_pane_g3

0x0002,

0xfee6,	// (0x0003ddaf) rs_indi_pane_g

0x6460,	// (0x00034329) bg_popup_preview_window_pane_cp03

0x0c61,	// (0x0002eb2a) popup_fep_tooltip_window_t1

0xc8d1,	// (0x0003a79a) popup_note2_window_g2_ParamLimits

0xc8d1,	// (0x0003a79a) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0003db54) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0003db54) popup_note2_window_g

0xcd4c,	// (0x0003ac15) bg_popup_sub_pane_cp11_ParamLimits

0xcd59,	// (0x0003ac22) cell_ai3_links_pane_g1_ParamLimits

0xcd70,	// (0x0003ac39) cell_ai3_links_pane_t1

0xe185,	// (0x0003c04e) set_text_pane_t1_copy1_ParamLimits

0x6387,	// (0x00034250) cell_graphic_popup_pane_cp2_ParamLimits

0x6387,	// (0x00034250) cell_graphic_popup_pane_cp2

0x0c6f,	// (0x0002eb38) cell_graphic_popup_pane_g1_cp2

0x29e6,	// (0x000308af) cell_graphic_popup_pane_g2_cp2

0x0c77,	// (0x0002eb40) cell_graphic_popup_pane_g3_cp2

0x0c7f,	// (0x0002eb48) cell_graphic_popup_pane_t2_cp2

0x29f7,	// (0x000308c0) grid_highlight_pane_cp3_cp2

0x5dfa,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5ab9,	// (0x00033982) main_tmo_pane_ParamLimits

0x478d,	// (0x00032656) popup_tmo_big_image_note_window

0x560d,	// (0x000334d6) cell_ai5_widget_list_pane

0x5615,	// (0x000334de) cell_ai5_widget_lrg_icon_pane

0x5911,	// (0x000337da) tmo_note_info_pane_t1_ParamLimits

0x5926,	// (0x000337ef) tmo_note_info_pane_t2_ParamLimits

0x593b,	// (0x00033804) tmo_note_info_pane_t3_ParamLimits

0x08a5,	// (0x0002e76e) tmo_note_info_pane_t4_ParamLimits

0x08b7,	// (0x0002e780) tmo_note_info_pane_t5_ParamLimits

0xfed4,	// (0x0003dd9d) tmo_note_info_pane_t_ParamLimits

0x59b3,	// (0x0003387c) settings_container_pane_ParamLimits

0x0be1,	// (0x0002eaaa) indicator_popup_pane_cp5

0x0be1,	// (0x0002eaaa) indicator_popup_pane_cp6

0x2e6f,	// (0x00030d38) list_set_graphic_pane_copy1_ParamLimits

0x2020,	// (0x0002fee9) bg_popup_window_pane_cp23

0x0c8d,	// (0x0002eb56) popup_tmo_big_image_note_window_g1

0x0c96,	// (0x0002eb5f) popup_tmo_big_image_note_window_t1

0x0ca4,	// (0x0002eb6d) popup_tmo_big_image_note_window_t2

0x0cb2,	// (0x0002eb7b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeed,	// (0x0003ddb6) popup_tmo_big_image_note_window_t

0x6b70,	// (0x00034a39) cell_ai5_widget_lrg_icon_pane_g1

0x6b78,	// (0x00034a41) cell_ai5_widget_lrg_icon_pane_t1

0x6b86,	// (0x00034a4f) cell_ai5_widget_list_row_pane_ParamLimits

0x6b86,	// (0x00034a4f) cell_ai5_widget_list_row_pane

0x6b9f,	// (0x00034a68) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6b9f,	// (0x00034a68) cell_ai5_widget_list_row_pane_g1

0x6bac,	// (0x00034a75) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6bac,	// (0x00034a75) cell_ai5_widget_list_row_pane_t1

0x6bc4,	// (0x00034a8d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6bc4,	// (0x00034a8d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef4,	// (0x0003ddbd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef4,	// (0x0003ddbd) cell_ai5_widget_list_row_pane_t

0x8f98,	// (0x00036e61) main_fep_vtchi_ss_pane

0x0d26,	// (0x0002ebef) popup_fep_char_pre_window

0x0d2e,	// (0x0002ebf7) popup_fep_ituss_window

0x0d37,	// (0x0002ec00) popup_fep_vkbss_window

0x0d40,	// (0x0002ec09) grid_vkbss_keypad_pane_ParamLimits

0x0d40,	// (0x0002ec09) grid_vkbss_keypad_pane

0x0d50,	// (0x0002ec19) ituss_keypad_pane

0x0d58,	// (0x0002ec21) aid_vkbss_key_offset_ParamLimits

0x0d58,	// (0x0002ec21) aid_vkbss_key_offset

0x0d67,	// (0x0002ec30) cell_vkbss_key_pane_ParamLimits

0x0d67,	// (0x0002ec30) cell_vkbss_key_pane

0x0d7d,	// (0x0002ec46) bg_cell_vkbss_key_g1_ParamLimits

0x0d7d,	// (0x0002ec46) bg_cell_vkbss_key_g1

0x0d89,	// (0x0002ec52) cell_vkbss_key_3p_pane_ParamLimits

0x0d89,	// (0x0002ec52) cell_vkbss_key_3p_pane

0x0d9d,	// (0x0002ec66) cell_vkbss_key_g1_ParamLimits

0x0d9d,	// (0x0002ec66) cell_vkbss_key_g1

0x0db1,	// (0x0002ec7a) cell_vkbss_key_t1_ParamLimits

0x0db1,	// (0x0002ec7a) cell_vkbss_key_t1

0x0ddc,	// (0x0002eca5) cell_ituss_key_pane_ParamLimits

0x0ddc,	// (0x0002eca5) cell_ituss_key_pane

0x0deb,	// (0x0002ecb4) bg_cell_ituss_key_g1_ParamLimits

0x0deb,	// (0x0002ecb4) bg_cell_ituss_key_g1

0x0df7,	// (0x0002ecc0) cell_ituss_key_pane_g1_ParamLimits

0x0df7,	// (0x0002ecc0) cell_ituss_key_pane_g1

0x0e03,	// (0x0002eccc) cell_ituss_key_pane_g2_ParamLimits

0x0e03,	// (0x0002eccc) cell_ituss_key_pane_g2

0x0001,

0xfef9,	// (0x0003ddc2) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0003ddc2) cell_ituss_key_pane_g

0x0e16,	// (0x0002ecdf) cell_ituss_key_t1_ParamLimits

0x0e16,	// (0x0002ecdf) cell_ituss_key_t1

0x0e34,	// (0x0002ecfd) cell_ituss_key_t2_ParamLimits

0x0e34,	// (0x0002ecfd) cell_ituss_key_t2

0x0e53,	// (0x0002ed1c) cell_ituss_key_t3_ParamLimits

0x0e53,	// (0x0002ed1c) cell_ituss_key_t3

0x0e72,	// (0x0002ed3b) cell_ituss_key_t4_ParamLimits

0x0e72,	// (0x0002ed3b) cell_ituss_key_t4

0x0003,

0xfefe,	// (0x0003ddc7) cell_ituss_key_t_ParamLimits

0xfefe,	// (0x0003ddc7) cell_ituss_key_t

0x0e91,	// (0x0002ed5a) cell_vkbss_key_3p_pane_g1

0x0e99,	// (0x0002ed62) cell_vkbss_key_3p_pane_g2

0x0ea1,	// (0x0002ed6a) cell_vkbss_key_3p_pane_g3

0x0002,

0xff07,	// (0x0003ddd0) cell_vkbss_key_3p_pane_g

0x2020,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp02

0x0ea9,	// (0x0002ed72) popup_fep_char_pre_window_t1

0x55f0,	// (0x000334b9) main_ai5_sk_pane

0x0931,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x093d,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0951,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0960,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedf,	// (0x0003dda8) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0973,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5ab9,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x6bd6,	// (0x00034a9f) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

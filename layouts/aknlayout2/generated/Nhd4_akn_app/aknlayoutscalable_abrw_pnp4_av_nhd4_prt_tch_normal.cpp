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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000c9c9 };

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
0x7920,	// (0x000142e9) Screen

0x792c,	// (0x000142f5) application_window_ParamLimits

0x792c,	// (0x000142f5) application_window

0x3c40,	// (0x00010609) screen_g1

0x5418,	// (0x00011de1) area_bottom_pane_ParamLimits

0x5418,	// (0x00011de1) area_bottom_pane

0x54d8,	// (0x00011ea1) area_top_pane_ParamLimits

0x54d8,	// (0x00011ea1) area_top_pane

0x5576,	// (0x00011f3f) main_pane_ParamLimits

0x5576,	// (0x00011f3f) main_pane

0x3db9,	// (0x00010782) misc_graphics

0x8fbf,	// (0x00015988) battery_pane_ParamLimits

0x8fbf,	// (0x00015988) battery_pane

0x9d90,	// (0x00016759) bg_status_flat_pane_g8

0x9d98,	// (0x00016761) bg_status_flat_pane_g9

0x9087,	// (0x00015a50) context_pane_ParamLimits

0x9087,	// (0x00015a50) context_pane

0x919d,	// (0x00015b66) navi_pane_ParamLimits

0x919d,	// (0x00015b66) navi_pane

0x9221,	// (0x00015bea) signal_pane_ParamLimits

0x9221,	// (0x00015bea) signal_pane

0x0008,

0xf86a,	// (0x0001c233) bg_status_flat_pane_g

0x928e,	// (0x00015c57) status_pane_g1_ParamLimits

0x928e,	// (0x00015c57) status_pane_g1

0x92a2,	// (0x00015c6b) status_pane_g2_ParamLimits

0x92a2,	// (0x00015c6b) status_pane_g2

0x92ae,	// (0x00015c77) status_pane_g3_ParamLimits

0x92ae,	// (0x00015c77) status_pane_g3

0x0004,

0xf791,	// (0x0001c15a) status_pane_g_ParamLimits

0xf791,	// (0x0001c15a) status_pane_g

0x92e2,	// (0x00015cab) title_pane_ParamLimits

0x92e2,	// (0x00015cab) title_pane

0x931f,	// (0x00015ce8) uni_indicator_pane_ParamLimits

0x931f,	// (0x00015ce8) uni_indicator_pane

0x8ed3,	// (0x0001589c) bg_list_pane_ParamLimits

0x8ed3,	// (0x0001589c) bg_list_pane

0x8ef3,	// (0x000158bc) find_pane

0x8efb,	// (0x000158c4) listscroll_app_pane_ParamLimits

0x8efb,	// (0x000158c4) listscroll_app_pane

0x8f07,	// (0x000158d0) listscroll_form_pane

0x5e3c,	// (0x00012805) listscroll_gen_pane_ParamLimits

0x5e3c,	// (0x00012805) listscroll_gen_pane

0x5e50,	// (0x00012819) listscroll_set_pane

0x849b,	// (0x00014e64) main_idle_act_pane

0x8bd3,	// (0x0001559c) main_idle_trad_pane

0x8bd3,	// (0x0001559c) main_list_empty_pane

0x8f21,	// (0x000158ea) main_midp_pane

0x8f2d,	// (0x000158f6) main_pane_g1_ParamLimits

0x8f2d,	// (0x000158f6) main_pane_g1

0x5e66,	// (0x0001282f) popup_ai_message_window_ParamLimits

0x5e66,	// (0x0001282f) popup_ai_message_window

0x5f0a,	// (0x000128d3) popup_fep_china_uni_window_ParamLimits

0x5f0a,	// (0x000128d3) popup_fep_china_uni_window

0x5f64,	// (0x0001292d) popup_fep_japan_candidate_window_ParamLimits

0x5f64,	// (0x0001292d) popup_fep_japan_candidate_window

0x5f82,	// (0x0001294b) popup_fep_japan_predictive_window_ParamLimits

0x5f82,	// (0x0001294b) popup_fep_japan_predictive_window

0x5fb2,	// (0x0001297b) popup_find_window

0x5fbf,	// (0x00012988) popup_grid_graphic_window_ParamLimits

0x5fbf,	// (0x00012988) popup_grid_graphic_window

0x5fe9,	// (0x000129b2) popup_large_graphic_colour_window

0x600f,	// (0x000129d8) popup_menu_window_ParamLimits

0x600f,	// (0x000129d8) popup_menu_window

0x61cb,	// (0x00012b94) popup_note_image_window

0x61b7,	// (0x00012b80) popup_note_wait_window_ParamLimits

0x61b7,	// (0x00012b80) popup_note_wait_window

0x61b7,	// (0x00012b80) popup_note_window_ParamLimits

0x61b7,	// (0x00012b80) popup_note_window

0x6221,	// (0x00012bea) popup_query_code_window_ParamLimits

0x6221,	// (0x00012bea) popup_query_code_window

0x6235,	// (0x00012bfe) popup_query_data_code_window_ParamLimits

0x6235,	// (0x00012bfe) popup_query_data_code_window

0x6252,	// (0x00012c1b) popup_query_data_window_ParamLimits

0x6252,	// (0x00012c1b) popup_query_data_window

0x626e,	// (0x00012c37) popup_query_sat_info_window_ParamLimits

0x626e,	// (0x00012c37) popup_query_sat_info_window

0x62a7,	// (0x00012c70) popup_snote_single_graphic_window_ParamLimits

0x62a7,	// (0x00012c70) popup_snote_single_graphic_window

0x62a7,	// (0x00012c70) popup_snote_single_text_window_ParamLimits

0x62a7,	// (0x00012c70) popup_snote_single_text_window

0x62bc,	// (0x00012c85) popup_sub_window_general

0x63ec,	// (0x00012db5) popup_window_general_ParamLimits

0x63ec,	// (0x00012db5) popup_window_general

0x8f43,	// (0x0001590c) power_save_pane

0x5cc6,	// (0x0001268f) control_pane_g1_ParamLimits

0x5cc6,	// (0x0001268f) control_pane_g1

0x5ced,	// (0x000126b6) control_pane_g2_ParamLimits

0x5ced,	// (0x000126b6) control_pane_g2

0x8e96,	// (0x0001585f) control_pane_g3_ParamLimits

0x8e96,	// (0x0001585f) control_pane_g3

0x0007,

0xf779,	// (0x0001c142) control_pane_g_ParamLimits

0xf779,	// (0x0001c142) control_pane_g

0x5d37,	// (0x00012700) control_pane_t1_ParamLimits

0x5d37,	// (0x00012700) control_pane_t1

0x5d8b,	// (0x00012754) control_pane_t2_ParamLimits

0x5d8b,	// (0x00012754) control_pane_t2

0x0002,

0xf78a,	// (0x0001c153) control_pane_t_ParamLimits

0xf78a,	// (0x0001c153) control_pane_t

0x8dbb,	// (0x00015784) navi_navi_volume_pane_cp1

0x8dc3,	// (0x0001578c) status_small_icon_pane

0x8dcb,	// (0x00015794) status_small_pane_g1_ParamLimits

0x8dcb,	// (0x00015794) status_small_pane_g1

0x8dff,	// (0x000157c8) status_small_pane_g2_ParamLimits

0x8dff,	// (0x000157c8) status_small_pane_g2

0x8e0b,	// (0x000157d4) status_small_pane_g3_ParamLimits

0x8e0b,	// (0x000157d4) status_small_pane_g3

0x8e17,	// (0x000157e0) status_small_pane_g4_ParamLimits

0x8e17,	// (0x000157e0) status_small_pane_g4

0x8e23,	// (0x000157ec) status_small_pane_g5_ParamLimits

0x8e23,	// (0x000157ec) status_small_pane_g5

0x8e31,	// (0x000157fa) status_small_pane_g6_ParamLimits

0x8e31,	// (0x000157fa) status_small_pane_g6

0x0007,

0xf768,	// (0x0001c131) status_small_pane_g_ParamLimits

0xf768,	// (0x0001c131) status_small_pane_g

0x8e60,	// (0x00015829) status_small_pane_t1

0x8e82,	// (0x0001584b) status_small_wait_pane_ParamLimits

0x8e82,	// (0x0001584b) status_small_wait_pane

0x8630,	// (0x00014ff9) aid_levels_signal_ParamLimits

0x8630,	// (0x00014ff9) aid_levels_signal

0x8642,	// (0x0001500b) signal_pane_g1_ParamLimits

0x8642,	// (0x0001500b) signal_pane_g1

0x8657,	// (0x00015020) signal_pane_g2_ParamLimits

0x8657,	// (0x00015020) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001c0c2) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001c0c2) signal_pane_g

0x49a5,	// (0x0001136e) context_pane_g1

0x793c,	// (0x00014305) title_pane_g1

0x7966,	// (0x0001432f) title_pane_t1

0x3def,	// (0x000107b8) title_pane_t2

0x3e15,	// (0x000107de) title_pane_t3

0x0002,

0xf557,	// (0x0001bf20) title_pane_t

0x9337,	// (0x00015d00) aid_levels_battery_ParamLimits

0x9337,	// (0x00015d00) aid_levels_battery

0x934b,	// (0x00015d14) battery_pane_g1_ParamLimits

0x934b,	// (0x00015d14) battery_pane_g1

0x9361,	// (0x00015d2a) battery_pane_g2_ParamLimits

0x9361,	// (0x00015d2a) battery_pane_g2

0x0001,

0xf79c,	// (0x0001c165) battery_pane_g_ParamLimits

0xf79c,	// (0x0001c165) battery_pane_g

0xa6b4,	// (0x0001707d) uni_indicator_pane_g1

0xa6c7,	// (0x00017090) uni_indicator_pane_g2

0xa6d9,	// (0x000170a2) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0001c2db) uni_indicator_pane_g

0x8a45,	// (0x0001540e) navi_icon_pane_ParamLimits

0x8a45,	// (0x0001540e) navi_icon_pane

0x898f,	// (0x00015358) navi_midp_pane

0x8a61,	// (0x0001542a) navi_navi_pane

0x8a6b,	// (0x00015434) navi_text_pane_ParamLimits

0x8a6b,	// (0x00015434) navi_text_pane

0x3c40,	// (0x00010609) status_small_wait_pane_g1

0x4080,	// (0x00010a49) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0001c2d6) status_small_wait_pane_g

0xa3db,	// (0x00016da4) navi_navi_icon_text_pane

0xa3e3,	// (0x00016dac) navi_navi_pane_g1_ParamLimits

0xa3e3,	// (0x00016dac) navi_navi_pane_g1

0xa3f5,	// (0x00016dbe) navi_navi_pane_g2_ParamLimits

0xa3f5,	// (0x00016dbe) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0001c2a4) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0001c2a4) navi_navi_pane_g

0xa407,	// (0x00016dd0) navi_navi_tabs_pane

0xa410,	// (0x00016dd9) navi_navi_text_pane

0xa3db,	// (0x00016da4) navi_navi_volume_pane

0xa3b7,	// (0x00016d80) navi_text_pane_t1

0xa3ab,	// (0x00016d74) navi_icon_pane_g1

0xa2fe,	// (0x00016cc7) navi_navi_text_pane_t1

0x6708,	// (0x000130d1) navi_navi_volume_pane_g1

0x6710,	// (0x000130d9) volume_small_pane

0xa264,	// (0x00016c2d) navi_navi_icon_text_pane_g1

0xa26c,	// (0x00016c35) navi_navi_icon_text_pane_t1

0x8a61,	// (0x0001542a) navi_tabs_2_long_pane

0x8a61,	// (0x0001542a) navi_tabs_2_pane

0x8a61,	// (0x0001542a) navi_tabs_3_long_pane

0x8a61,	// (0x0001542a) navi_tabs_3_pane

0x8a61,	// (0x0001542a) navi_tabs_4_pane

0x66e8,	// (0x000130b1) tabs_2_active_pane_ParamLimits

0x66e8,	// (0x000130b1) tabs_2_active_pane

0x66f8,	// (0x000130c1) tabs_2_passive_pane_ParamLimits

0x66f8,	// (0x000130c1) tabs_2_passive_pane

0x66b6,	// (0x0001307f) tabs_3_active_pane_ParamLimits

0x66b6,	// (0x0001307f) tabs_3_active_pane

0x66c6,	// (0x0001308f) tabs_3_passive_pane_ParamLimits

0x66c6,	// (0x0001308f) tabs_3_passive_pane

0x66d7,	// (0x000130a0) tabs_3_passive_pane_cp_ParamLimits

0x66d7,	// (0x000130a0) tabs_3_passive_pane_cp

0x6672,	// (0x0001303b) tabs_4_active_pane_ParamLimits

0x6672,	// (0x0001303b) tabs_4_active_pane

0x6683,	// (0x0001304c) tabs_4_passive_pane_ParamLimits

0x6683,	// (0x0001304c) tabs_4_passive_pane

0x6694,	// (0x0001305d) tabs_4_passive_pane_cp_ParamLimits

0x6694,	// (0x0001305d) tabs_4_passive_pane_cp

0x66a5,	// (0x0001306e) tabs_4_passive_pane_cp2_ParamLimits

0x66a5,	// (0x0001306e) tabs_4_passive_pane_cp2

0x664e,	// (0x00013017) tabs_2_long_active_pane_ParamLimits

0x664e,	// (0x00013017) tabs_2_long_active_pane

0x6660,	// (0x00013029) tabs_2_long_passive_pane_ParamLimits

0x6660,	// (0x00013029) tabs_2_long_passive_pane

0x6609,	// (0x00012fd2) tabs_3_long_active_pane_ParamLimits

0x6609,	// (0x00012fd2) tabs_3_long_active_pane

0x6622,	// (0x00012feb) tabs_3_long_passive_pane_ParamLimits

0x6622,	// (0x00012feb) tabs_3_long_passive_pane

0x6635,	// (0x00012ffe) tabs_3_long_passive_pane_cp_ParamLimits

0x6635,	// (0x00012ffe) tabs_3_long_passive_pane_cp

0x65af,	// (0x00012f78) volume_small_pane_g1

0x65b8,	// (0x00012f81) volume_small_pane_g2

0x65c1,	// (0x00012f8a) volume_small_pane_g3

0x65ca,	// (0x00012f93) volume_small_pane_g4

0x65d3,	// (0x00012f9c) volume_small_pane_g5

0x65dc,	// (0x00012fa5) volume_small_pane_g6

0x65e5,	// (0x00012fae) volume_small_pane_g7

0x65ee,	// (0x00012fb7) volume_small_pane_g8

0x65f7,	// (0x00012fc0) volume_small_pane_g9

0x6600,	// (0x00012fc9) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0001c270) volume_small_pane_g

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp2_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp2

0x79ce,	// (0x00014397) tabs_3_active_pane_g1

0x79d6,	// (0x0001439f) tabs_3_active_pane_t1

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp2_ParamLimits

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp2

0x79ce,	// (0x00014397) tabs_3_passive_pane_g1

0x79d6,	// (0x0001439f) tabs_3_passive_pane_t1

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp3_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp3

0x79e8,	// (0x000143b1) tabs_4_active_pane_g1

0x79f0,	// (0x000143b9) tabs_4_active_pane_t1

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp3_ParamLimits

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp3

0x79e8,	// (0x000143b1) tabs_4_1_passive_pane_g1

0x79f0,	// (0x000143b9) tabs_4_1_passive_pane_t1

0x8f21,	// (0x000158ea) list_highlight_pane_cp2

0xa92e,	// (0x000172f7) list_set_pane_ParamLimits

0xa92e,	// (0x000172f7) list_set_pane

0xa9d0,	// (0x00017399) main_pane_set_t1_ParamLimits

0xa9d0,	// (0x00017399) main_pane_set_t1

0xa9f0,	// (0x000173b9) main_pane_set_t2_ParamLimits

0xa9f0,	// (0x000173b9) main_pane_set_t2

0xaa04,	// (0x000173cd) main_pane_set_t3_ParamLimits

0xaa04,	// (0x000173cd) main_pane_set_t3

0xaa16,	// (0x000173df) main_pane_set_t4_ParamLimits

0xaa16,	// (0x000173df) main_pane_set_t4

0x0003,

0xf977,	// (0x0001c340) main_pane_set_t_ParamLimits

0xf977,	// (0x0001c340) main_pane_set_t

0xaa28,	// (0x000173f1) setting_code_pane

0xaa34,	// (0x000173fd) setting_slider_graphic_pane

0xaa34,	// (0x000173fd) setting_slider_pane

0xaa34,	// (0x000173fd) setting_text_pane

0xaa34,	// (0x000173fd) setting_volume_pane

0x57b7,	// (0x00012180) volume_set_pane

0x3e35,	// (0x000107fe) bg_set_opt_pane_cp

0x57bf,	// (0x00012188) setting_slider_pane_t1

0x57d8,	// (0x000121a1) setting_slider_pane_t2

0x57f2,	// (0x000121bb) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001bf27) setting_slider_pane_t

0x580a,	// (0x000121d3) slider_set_pane

0x3db9,	// (0x00010782) bg_set_opt_pane_cp2

0x3e43,	// (0x0001080c) setting_slider_graphic_pane_g1

0x5820,	// (0x000121e9) setting_slider_graphic_pane_t1

0x5830,	// (0x000121f9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001bf2e) setting_slider_graphic_pane_t

0x5840,	// (0x00012209) slider_set_pane_cp

0x3db9,	// (0x00010782) input_focus_pane_cp1

0xa8ed,	// (0x000172b6) list_set_text_pane

0x3c40,	// (0x00010609) setting_text_pane_g1

0x3db9,	// (0x00010782) input_focus_pane_cp2

0x3c40,	// (0x00010609) setting_code_pane_g1

0x3e4c,	// (0x00010815) setting_code_pane_t1

0x3e5a,	// (0x00010823) set_text_pane_t1_ParamLimits

0x3e5a,	// (0x00010823) set_text_pane_t1

0x4331,	// (0x00010cfa) set_opt_bg_pane_g1

0x4339,	// (0x00010d02) set_opt_bg_pane_g2

0xa8c7,	// (0x00017290) set_opt_bg_pane_g3

0x4349,	// (0x00010d12) set_opt_bg_pane_g4

0x4351,	// (0x00010d1a) set_opt_bg_pane_g5

0x4359,	// (0x00010d22) set_opt_bg_pane_g6

0xa8d1,	// (0x0001729a) set_opt_bg_pane_g7

0xa8d9,	// (0x000172a2) set_opt_bg_pane_g8

0xa8e3,	// (0x000172ac) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0001c32d) set_opt_bg_pane_g

0xa8ba,	// (0x00017283) slider_set_pane_g1

0x677d,	// (0x00013146) slider_set_pane_g2

0x0006,

0xf955,	// (0x0001c31e) slider_set_pane_g

0x6719,	// (0x000130e2) volume_set_pane_g1

0x6721,	// (0x000130ea) volume_set_pane_g2

0x6729,	// (0x000130f2) volume_set_pane_g3

0x6731,	// (0x000130fa) volume_set_pane_g4

0x6739,	// (0x00013102) volume_set_pane_g5

0x6741,	// (0x0001310a) volume_set_pane_g6

0x6749,	// (0x00013112) volume_set_pane_g7

0x6751,	// (0x0001311a) volume_set_pane_g8

0x6759,	// (0x00013122) volume_set_pane_g9

0x6761,	// (0x0001312a) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0001c2f6) volume_set_pane_g

0x7a02,	// (0x000143cb) indicator_pane_ParamLimits

0x7a02,	// (0x000143cb) indicator_pane

0x7a0e,	// (0x000143d7) main_idle_pane_g2_ParamLimits

0x7a0e,	// (0x000143d7) main_idle_pane_g2

0x7a36,	// (0x000143ff) main_pane_idle_g1_ParamLimits

0x7a36,	// (0x000143ff) main_pane_idle_g1

0x3e74,	// (0x0001083d) popup_clock_digital_analogue_window_ParamLimits

0x3e74,	// (0x0001083d) popup_clock_digital_analogue_window

0x7a43,	// (0x0001440c) soft_indicator_pane_ParamLimits

0x7a43,	// (0x0001440c) soft_indicator_pane

0x7a4f,	// (0x00014418) wallpaper_pane_ParamLimits

0x7a4f,	// (0x00014418) wallpaper_pane

0x3c40,	// (0x00010609) wallpaper_pane_g1

0x7a5b,	// (0x00014424) indicator_pane_g1_ParamLimits

0x7a5b,	// (0x00014424) indicator_pane_g1

0xadc0,	// (0x00017789) navi_navi_icon_text_pane_srt_g1

0x3ea2,	// (0x0001086b) soft_indicator_pane_t1

0x3ebc,	// (0x00010885) aid_ps_area_pane

0x7a67,	// (0x00014430) aid_ps_clock_pane

0x3ecd,	// (0x00010896) aid_ps_indicator_pane

0x3ed9,	// (0x000108a2) indicator_ps_pane_ParamLimits

0x3ed9,	// (0x000108a2) indicator_ps_pane

0x3ee8,	// (0x000108b1) power_save_pane_g1_ParamLimits

0x3ee8,	// (0x000108b1) power_save_pane_g1

0x3ef4,	// (0x000108bd) power_save_pane_g2_ParamLimits

0x3ef4,	// (0x000108bd) power_save_pane_g2

0x53cc,	// (0x00011d95) aid_navinavi_width_pane

0x3ebc,	// (0x00010885) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001bf33) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001bf33) power_save_pane_g

0x3f02,	// (0x000108cb) power_save_pane_t1_ParamLimits

0x3f02,	// (0x000108cb) power_save_pane_t1

0x7a67,	// (0x00014430) aid_ps_clock_pane_ParamLimits

0x3ecd,	// (0x00010896) aid_ps_indicator_pane_ParamLimits

0x3f14,	// (0x000108dd) power_save_pane_t4_ParamLimits

0x3f14,	// (0x000108dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001bf38) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001bf38) power_save_pane_t

0x3f3e,	// (0x00010907) power_save_t3_ParamLimits

0x3f3e,	// (0x00010907) power_save_t3

0x3f29,	// (0x000108f2) power_save_t2_ParamLimits

0x3f29,	// (0x000108f2) power_save_t2

0x3f53,	// (0x0001091c) indicator_ps_pane_g1

0x7a75,	// (0x0001443e) ai_gene_pane_ParamLimits

0x7a75,	// (0x0001443e) ai_gene_pane

0x7a81,	// (0x0001444a) ai_links_pane_ParamLimits

0x7a81,	// (0x0001444a) ai_links_pane

0x7a8d,	// (0x00014456) indicator_pane_cp1_ParamLimits

0x7a8d,	// (0x00014456) indicator_pane_cp1

0x7a99,	// (0x00014462) main_pane_idle_g1_cp_ParamLimits

0x7a99,	// (0x00014462) main_pane_idle_g1_cp

0x7aa5,	// (0x0001446e) popup_ai_links_title_window

0x7aae,	// (0x00014477) soft_indicator_pane_cp1_ParamLimits

0x7aae,	// (0x00014477) soft_indicator_pane_cp1

0xa6a2,	// (0x0001706b) ai_links_pane_g1

0xa6ab,	// (0x00017074) grid_ai_links_pane

0xa685,	// (0x0001704e) ai_gene_pane_1

0xa690,	// (0x00017059) ai_gene_pane_2

0xa699,	// (0x00017062) list_highlight_pane_cp4

0xa669,	// (0x00017032) cell_ai_link_pane_ParamLimits

0xa669,	// (0x00017032) cell_ai_link_pane

0xa661,	// (0x0001702a) cell_ai_link_pane_g1

0x4080,	// (0x00010a49) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0001c2d1) cell_ai_link_pane_g

0x3db9,	// (0x00010782) grid_highlight_cp2

0x3db9,	// (0x00010782) bg_popup_sub_pane_cp1

0x3f6a,	// (0x00010933) popup_ai_links_title_window_t1

0xa5b1,	// (0x00016f7a) ai_gene_pane_1_g1_ParamLimits

0xa5b1,	// (0x00016f7a) ai_gene_pane_1_g1

0xa5bd,	// (0x00016f86) ai_gene_pane_1_g2_ParamLimits

0xa5bd,	// (0x00016f86) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0001c2c7) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0001c2c7) ai_gene_pane_1_g

0xa5ca,	// (0x00016f93) ai_gene_pane_1_t1_ParamLimits

0xa5ca,	// (0x00016f93) ai_gene_pane_1_t1

0xa5fe,	// (0x00016fc7) grid_ai_soft_ind_pane

0xa59c,	// (0x00016f65) ai_gene_pane_2_t1_ParamLimits

0xa59c,	// (0x00016f65) ai_gene_pane_2_t1

0x7aba,	// (0x00014483) main_pane_empty_t1_ParamLimits

0x7aba,	// (0x00014483) main_pane_empty_t1

0x7ad2,	// (0x0001449b) main_pane_empty_t2_ParamLimits

0x7ad2,	// (0x0001449b) main_pane_empty_t2

0x7ae7,	// (0x000144b0) main_pane_empty_t3_ParamLimits

0x7ae7,	// (0x000144b0) main_pane_empty_t3

0x7af9,	// (0x000144c2) main_pane_empty_t4_ParamLimits

0x7af9,	// (0x000144c2) main_pane_empty_t4

0x7b0b,	// (0x000144d4) main_pane_empty_t5_ParamLimits

0x7b0b,	// (0x000144d4) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001bf3d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001bf3d) main_pane_empty_t

0x4382,	// (0x00010d4b) bg_popup_window_pane_ParamLimits

0x4382,	// (0x00010d4b) bg_popup_window_pane

0xa30c,	// (0x00016cd5) find_popup_pane_cp2_ParamLimits

0xa30c,	// (0x00016cd5) find_popup_pane_cp2

0xa318,	// (0x00016ce1) heading_pane_ParamLimits

0xa318,	// (0x00016ce1) heading_pane

0x3db9,	// (0x00010782) bg_popup_sub_pane

0xa286,	// (0x00016c4f) bg_popup_window_pane_g1_ParamLimits

0xa286,	// (0x00016c4f) bg_popup_window_pane_g1

0xa292,	// (0x00016c5b) bg_popup_window_pane_g2_ParamLimits

0xa292,	// (0x00016c5b) bg_popup_window_pane_g2

0xa29e,	// (0x00016c67) bg_popup_window_pane_g3_ParamLimits

0xa29e,	// (0x00016c67) bg_popup_window_pane_g3

0xa2aa,	// (0x00016c73) bg_popup_window_pane_g4_ParamLimits

0xa2aa,	// (0x00016c73) bg_popup_window_pane_g4

0xa2b6,	// (0x00016c7f) bg_popup_window_pane_g5_ParamLimits

0xa2b6,	// (0x00016c7f) bg_popup_window_pane_g5

0xa2c2,	// (0x00016c8b) bg_popup_window_pane_g6_ParamLimits

0xa2c2,	// (0x00016c8b) bg_popup_window_pane_g6

0xa2ce,	// (0x00016c97) bg_popup_window_pane_g7_ParamLimits

0xa2ce,	// (0x00016c97) bg_popup_window_pane_g7

0xa2da,	// (0x00016ca3) bg_popup_window_pane_g8_ParamLimits

0xa2da,	// (0x00016ca3) bg_popup_window_pane_g8

0xa2e6,	// (0x00016caf) bg_popup_window_pane_g9_ParamLimits

0xa2e6,	// (0x00016caf) bg_popup_window_pane_g9

0xa2f2,	// (0x00016cbb) bg_popup_window_pane_g10_ParamLimits

0xa2f2,	// (0x00016cbb) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0001c28f) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0001c28f) bg_popup_window_pane_g

0xa21b,	// (0x00016be4) bg_popup_heading_pane_ParamLimits

0xa21b,	// (0x00016be4) bg_popup_heading_pane

0x6805,	// (0x000131ce) tabs_4_passive_pane_cp_srt_ParamLimits

0x6805,	// (0x000131ce) tabs_4_passive_pane_cp_srt

0x6817,	// (0x000131e0) tabs_4_passive_pane_srt_ParamLimits

0xa22f,	// (0x00016bf8) heading_pane_g2

0x6817,	// (0x000131e0) tabs_4_passive_pane_srt

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp3_srt

0xa237,	// (0x00016c00) heading_pane_t1_ParamLimits

0xa237,	// (0x00016c00) heading_pane_t1

0xa24e,	// (0x00016c17) heading_pane_t2_ParamLimits

0xa24e,	// (0x00016c17) heading_pane_t2

0x0001,

0xf8c1,	// (0x0001c28a) heading_pane_t_ParamLimits

0xf8c1,	// (0x0001c28a) heading_pane_t

0x9d58,	// (0x00016721) bg_popup_heading_pane_g1

0x9e07,	// (0x000167d0) bg_popup_heading_pane_g2

0x9e11,	// (0x000167da) bg_popup_heading_pane_g3

0x9e1b,	// (0x000167e4) bg_popup_heading_pane_g4

0x9e25,	// (0x000167ee) bg_popup_heading_pane_g5

0x9e2f,	// (0x000167f8) bg_popup_heading_pane_g6

0x9e37,	// (0x00016800) bg_popup_heading_pane_g7

0x9e3f,	// (0x00016808) bg_popup_heading_pane_g8

0x9e49,	// (0x00016812) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0001c246) bg_popup_heading_pane_g

0x9458,	// (0x00015e21) bg_popup_sub_pane_g1

0x9468,	// (0x00015e31) bg_popup_sub_pane_g2

0x9460,	// (0x00015e29) bg_popup_sub_pane_g3

0x9478,	// (0x00015e41) bg_popup_sub_pane_g4

0x9470,	// (0x00015e39) bg_popup_sub_pane_g5

0x9480,	// (0x00015e49) bg_popup_sub_pane_g6

0x9488,	// (0x00015e51) bg_popup_sub_pane_g7

0x9498,	// (0x00015e61) bg_popup_sub_pane_g8

0x9490,	// (0x00015e59) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0001c220) bg_popup_sub_pane_g

0x3e27,	// (0x000107f0) bg_popup_window_pane_cp5_ParamLimits

0x3e27,	// (0x000107f0) bg_popup_window_pane_cp5

0x3f87,	// (0x00010950) popup_note_window_g1_ParamLimits

0x3f87,	// (0x00010950) popup_note_window_g1

0x3f93,	// (0x0001095c) popup_note_window_t1_ParamLimits

0x3f93,	// (0x0001095c) popup_note_window_t1

0x3fa9,	// (0x00010972) popup_note_window_t2_ParamLimits

0x3fa9,	// (0x00010972) popup_note_window_t2

0x3fbf,	// (0x00010988) popup_note_window_t3_ParamLimits

0x3fbf,	// (0x00010988) popup_note_window_t3

0x3fd5,	// (0x0001099e) popup_note_window_t4_ParamLimits

0x3fd5,	// (0x0001099e) popup_note_window_t4

0x3ffd,	// (0x000109c6) popup_note_window_t5_ParamLimits

0x3ffd,	// (0x000109c6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001bf48) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001bf48) popup_note_window_t

0x4021,	// (0x000109ea) bg_popup_window_pane_cp6_ParamLimits

0x4021,	// (0x000109ea) bg_popup_window_pane_cp6

0x9cd4,	// (0x0001669d) popup_note_image_window_g1_ParamLimits

0x9cd4,	// (0x0001669d) popup_note_image_window_g1

0x9ce0,	// (0x000166a9) popup_note_image_window_g2_ParamLimits

0x9ce0,	// (0x000166a9) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0001c214) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0001c214) popup_note_image_window_g

0x9cf9,	// (0x000166c2) popup_note_image_window_t1_ParamLimits

0x9cf9,	// (0x000166c2) popup_note_image_window_t1

0x9d12,	// (0x000166db) popup_note_image_window_t2_ParamLimits

0x9d12,	// (0x000166db) popup_note_image_window_t2

0x9d2b,	// (0x000166f4) popup_note_image_window_t3_ParamLimits

0x9d2b,	// (0x000166f4) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0001c219) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0001c219) popup_note_image_window_t

0x9b9d,	// (0x00016566) bg_popup_window_pane_cp7_ParamLimits

0x9b9d,	// (0x00016566) bg_popup_window_pane_cp7

0x9bcd,	// (0x00016596) popup_note_wait_window_g1_ParamLimits

0x9bcd,	// (0x00016596) popup_note_wait_window_g1

0x9bd9,	// (0x000165a2) popup_note_wait_window_g2_ParamLimits

0x9bd9,	// (0x000165a2) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0001c202) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0001c202) popup_note_wait_window_g

0x9bf1,	// (0x000165ba) popup_note_wait_window_t1_ParamLimits

0x9bf1,	// (0x000165ba) popup_note_wait_window_t1

0x9c18,	// (0x000165e1) popup_note_wait_window_t2_ParamLimits

0x9c18,	// (0x000165e1) popup_note_wait_window_t2

0x9c35,	// (0x000165fe) popup_note_wait_window_t3_ParamLimits

0x9c35,	// (0x000165fe) popup_note_wait_window_t3

0x9c48,	// (0x00016611) popup_note_wait_window_t4_ParamLimits

0x9c48,	// (0x00016611) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0001c209) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0001c209) popup_note_wait_window_t

0x9c6d,	// (0x00016636) wait_bar_pane_ParamLimits

0x9c6d,	// (0x00016636) wait_bar_pane

0x3db9,	// (0x00010782) wait_anim_pane

0x3db9,	// (0x00010782) wait_border_pane

0x3c40,	// (0x00010609) wait_anim_pane_g1

0x3c40,	// (0x00010609) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0001c0bd) wait_anim_pane_g

0x9b49,	// (0x00016512) wait_border_pane_g1

0x9b54,	// (0x0001651d) wait_border_pane_g2

0x9b5d,	// (0x00016526) wait_border_pane_g3

0x0002,

0xf832,	// (0x0001c1fb) wait_border_pane_g

0x99b4,	// (0x0001637d) bg_popup_window_pane_cp16_ParamLimits

0x99b4,	// (0x0001637d) bg_popup_window_pane_cp16

0x9ab4,	// (0x0001647d) indicator_popup_pane_cp4_ParamLimits

0x9ab4,	// (0x0001647d) indicator_popup_pane_cp4

0x9ac8,	// (0x00016491) popup_query_data_window_t1_ParamLimits

0x9ac8,	// (0x00016491) popup_query_data_window_t1

0x9ada,	// (0x000164a3) popup_query_data_window_t2_ParamLimits

0x9ada,	// (0x000164a3) popup_query_data_window_t2

0x9af3,	// (0x000164bc) popup_query_data_window_t3_ParamLimits

0x9af3,	// (0x000164bc) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0001c1f4) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0001c1f4) popup_query_data_window_t

0x9b0d,	// (0x000164d6) query_popup_data_pane_ParamLimits

0x9b0d,	// (0x000164d6) query_popup_data_pane

0x9b21,	// (0x000164ea) query_popup_data_pane_cp1_ParamLimits

0x9b21,	// (0x000164ea) query_popup_data_pane_cp1

0x99b4,	// (0x0001637d) bg_popup_window_pane_cp10_ParamLimits

0x99b4,	// (0x0001637d) bg_popup_window_pane_cp10

0x99e6,	// (0x000163af) indicator_popup_pane_ParamLimits

0x99e6,	// (0x000163af) indicator_popup_pane

0x9a08,	// (0x000163d1) popup_query_code_window_t1_ParamLimits

0x9a08,	// (0x000163d1) popup_query_code_window_t1

0x9a22,	// (0x000163eb) popup_query_code_window_t2_ParamLimits

0x9a22,	// (0x000163eb) popup_query_code_window_t2

0x9a6b,	// (0x00016434) popup_query_code_window_t3_ParamLimits

0x9a6b,	// (0x00016434) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0001c1ed) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0001c1ed) popup_query_code_window_t

0x9a9a,	// (0x00016463) query_popup_pane_ParamLimits

0x9a9a,	// (0x00016463) query_popup_pane

0x4021,	// (0x000109ea) bg_popup_window_pane_cp15_ParamLimits

0x4021,	// (0x000109ea) bg_popup_window_pane_cp15

0x7b1f,	// (0x000144e8) indicator_popup_pane_cp1_ParamLimits

0x7b1f,	// (0x000144e8) indicator_popup_pane_cp1

0x7b32,	// (0x000144fb) indicator_popup_pane_cp2_ParamLimits

0x7b32,	// (0x000144fb) indicator_popup_pane_cp2

0x7b45,	// (0x0001450e) popup_query_data_code_window_g1_ParamLimits

0x7b45,	// (0x0001450e) popup_query_data_code_window_g1

0x403f,	// (0x00010a08) popup_query_data_code_window_t1_ParamLimits

0x403f,	// (0x00010a08) popup_query_data_code_window_t1

0x4051,	// (0x00010a1a) popup_query_data_code_window_t2_ParamLimits

0x4051,	// (0x00010a1a) popup_query_data_code_window_t2

0x7b58,	// (0x00014521) popup_query_data_code_window_t3_ParamLimits

0x7b58,	// (0x00014521) popup_query_data_code_window_t3

0x7b6e,	// (0x00014537) popup_query_data_code_window_t4_ParamLimits

0x7b6e,	// (0x00014537) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001bf53) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001bf53) popup_query_data_code_window_t

0x64c0,	// (0x00012e89) list_single_midp_graphic_pane_g3

0x7b86,	// (0x0001454f) query_popup_data_pane_cp2_ParamLimits

0x7b99,	// (0x00014562) query_popup_pane_cp2_ParamLimits

0x7b99,	// (0x00014562) query_popup_pane_cp2

0x3db9,	// (0x00010782) bg_popup_window_pane_cp11

0x99ac,	// (0x00016375) heading_pane_cp5

0x40ad,	// (0x00010a76) listscroll_popup_info_pane

0x3db9,	// (0x00010782) input_focus_pane_cp3

0x4063,	// (0x00010a2c) query_popup_pane_t1

0x4071,	// (0x00010a3a) list_popup_info_pane_ParamLimits

0x4071,	// (0x00010a3a) list_popup_info_pane

0x4080,	// (0x00010a49) listscroll_popup_info_pane_g1

0x4088,	// (0x00010a51) scroll_pane_cp7

0x7bac,	// (0x00014575) popup_info_list_pane_t1_ParamLimits

0x7bac,	// (0x00014575) popup_info_list_pane_t1

0x7bc6,	// (0x0001458f) popup_info_list_pane_t2_ParamLimits

0x7bc6,	// (0x0001458f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001bf5c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001bf5c) popup_info_list_pane_t

0x3db9,	// (0x00010782) bg_popup_window_pane_cp12

0xadda,	// (0x000177a3) find_popup_pane

0x3e35,	// (0x000107fe) bg_popup_window_pane_cp3

0x4092,	// (0x00010a5b) heading_pane_cp3

0x409e,	// (0x00010a67) listscroll_popup_graphic_pane

0x3db9,	// (0x00010782) bg_popup_window_pane_cp4

0x7c30,	// (0x000145f9) heading_pane_cp4

0x40ad,	// (0x00010a76) listscroll_popup_colour_pane

0x7c3a,	// (0x00014603) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7c3a,	// (0x00014603) cell_large_graphic_colour_none_popup_pane

0x7c4e,	// (0x00014617) grid_large_graphic_colour_popup_pane_ParamLimits

0x7c4e,	// (0x00014617) grid_large_graphic_colour_popup_pane

0x7c76,	// (0x0001463f) listscroll_popup_colour_pane_g1_ParamLimits

0x7c76,	// (0x0001463f) listscroll_popup_colour_pane_g1

0x7c8d,	// (0x00014656) listscroll_popup_colour_pane_g2_ParamLimits

0x7c8d,	// (0x00014656) listscroll_popup_colour_pane_g2

0x7ca4,	// (0x0001466d) listscroll_popup_colour_pane_g3_ParamLimits

0x7ca4,	// (0x0001466d) listscroll_popup_colour_pane_g3

0x7cb4,	// (0x0001467d) listscroll_popup_colour_pane_g4_ParamLimits

0x7cb4,	// (0x0001467d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001bf61) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001bf61) listscroll_popup_colour_pane_g

0x40b5,	// (0x00010a7e) scroll_pane_cp6_ParamLimits

0x40b5,	// (0x00010a7e) scroll_pane_cp6

0x7cc4,	// (0x0001468d) cell_large_graphic_colour_popup_pane_ParamLimits

0x7cc4,	// (0x0001468d) cell_large_graphic_colour_popup_pane

0x7ce3,	// (0x000146ac) cell_large_graphic_colour_none_popup_pane_t1

0x3db9,	// (0x00010782) grid_highlight_pane_cp5

0x40c7,	// (0x00010a90) cell_large_graphic_colour_popup_pane_g1

0x40cf,	// (0x00010a98) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001bf6a) cell_large_graphic_colour_popup_pane_g

0x40d7,	// (0x00010aa0) cell_large_graphic_colour_popup_pane_g2_copy1

0x40e0,	// (0x00010aa9) grid_highlight_pane_cp4

0x40e8,	// (0x00010ab1) bg_popup_window_pane_cp8_ParamLimits

0x40e8,	// (0x00010ab1) bg_popup_window_pane_cp8

0x7cf2,	// (0x000146bb) popup_snote_single_text_window_g1_ParamLimits

0x7cf2,	// (0x000146bb) popup_snote_single_text_window_g1

0x7d04,	// (0x000146cd) popup_snote_single_text_window_t1_ParamLimits

0x7d04,	// (0x000146cd) popup_snote_single_text_window_t1

0x7d17,	// (0x000146e0) popup_snote_single_text_window_t2_ParamLimits

0x7d17,	// (0x000146e0) popup_snote_single_text_window_t2

0x7d2a,	// (0x000146f3) popup_snote_single_text_window_t3_ParamLimits

0x7d2a,	// (0x000146f3) popup_snote_single_text_window_t3

0x7d63,	// (0x0001472c) popup_snote_single_text_window_t4_ParamLimits

0x7d63,	// (0x0001472c) popup_snote_single_text_window_t4

0x7d97,	// (0x00014760) popup_snote_single_text_window_t5_ParamLimits

0x7d97,	// (0x00014760) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001bf6f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001bf6f) popup_snote_single_text_window_t

0x4103,	// (0x00010acc) bg_popup_window_pane_cp9_ParamLimits

0x4103,	// (0x00010acc) bg_popup_window_pane_cp9

0x7cf2,	// (0x000146bb) popup_snote_single_graphic_window_g1_ParamLimits

0x7cf2,	// (0x000146bb) popup_snote_single_graphic_window_g1

0x4111,	// (0x00010ada) popup_snote_single_graphic_window_g2_ParamLimits

0x4111,	// (0x00010ada) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001bf7a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001bf7a) popup_snote_single_graphic_window_g

0x411d,	// (0x00010ae6) popup_snote_single_graphic_window_t1_ParamLimits

0x411d,	// (0x00010ae6) popup_snote_single_graphic_window_t1

0x4130,	// (0x00010af9) popup_snote_single_graphic_window_t2_ParamLimits

0x4130,	// (0x00010af9) popup_snote_single_graphic_window_t2

0x7dc6,	// (0x0001478f) popup_snote_single_graphic_window_t3_ParamLimits

0x7dc6,	// (0x0001478f) popup_snote_single_graphic_window_t3

0x7dff,	// (0x000147c8) popup_snote_single_graphic_window_t4_ParamLimits

0x7dff,	// (0x000147c8) popup_snote_single_graphic_window_t4

0x7e33,	// (0x000147fc) popup_snote_single_graphic_window_t5_ParamLimits

0x7e33,	// (0x000147fc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001bf7f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001bf7f) popup_snote_single_graphic_window_t

0xad1c,	// (0x000176e5) grid_graphic_popup_pane_ParamLimits

0xad1c,	// (0x000176e5) grid_graphic_popup_pane

0xad46,	// (0x0001770f) listscroll_popup_graphic_pane_g1_ParamLimits

0xad46,	// (0x0001770f) listscroll_popup_graphic_pane_g1

0xad5a,	// (0x00017723) listscroll_popup_graphic_pane_g2_ParamLimits

0xad5a,	// (0x00017723) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0001c36a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0001c36a) listscroll_popup_graphic_pane_g

0xad6e,	// (0x00017737) scroll_pane_cp5

0xacbb,	// (0x00017684) cell_graphic_popup_pane_ParamLimits

0xacbb,	// (0x00017684) cell_graphic_popup_pane

0xac9c,	// (0x00017665) cell_graphic_popup_pane_g1

0xaca4,	// (0x0001766d) cell_graphic_popup_pane_g2

0x40d7,	// (0x00010aa0) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0001c363) cell_graphic_popup_pane_g

0xacad,	// (0x00017676) cell_graphic_popup_pane_t2

0x40e0,	// (0x00010aa9) grid_highlight_pane_cp3

0x4155,	// (0x00010b1e) list_gen_pane_ParamLimits

0x4155,	// (0x00010b1e) list_gen_pane

0x417d,	// (0x00010b46) scroll_pane

0xabf4,	// (0x000175bd) bg_list_pane_g1_ParamLimits

0xabf4,	// (0x000175bd) bg_list_pane_g1

0xac11,	// (0x000175da) bg_list_pane_g2_ParamLimits

0xac11,	// (0x000175da) bg_list_pane_g2

0xac26,	// (0x000175ef) bg_list_pane_g3_ParamLimits

0xac26,	// (0x000175ef) bg_list_pane_g3

0xac3a,	// (0x00017603) bg_list_pane_g4_ParamLimits

0xac3a,	// (0x00017603) bg_list_pane_g4

0xac4e,	// (0x00017617) bg_list_pane_g5_ParamLimits

0xac4e,	// (0x00017617) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0001c358) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0001c358) bg_list_pane_g

0xaaed,	// (0x000174b6) list_double2_graphic_large_graphic_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double2_graphic_large_graphic_pane

0xaaed,	// (0x000174b6) list_double2_graphic_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double2_graphic_pane

0xaaed,	// (0x000174b6) list_double2_large_graphic_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double2_large_graphic_pane

0xaaed,	// (0x000174b6) list_double2_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double2_pane

0xaaed,	// (0x000174b6) list_double_graphic_heading_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_graphic_heading_pane

0xaaed,	// (0x000174b6) list_double_graphic_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_graphic_pane

0xaaed,	// (0x000174b6) list_double_heading_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_heading_pane

0xaaed,	// (0x000174b6) list_double_large_graphic_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_large_graphic_pane

0xaaed,	// (0x000174b6) list_double_number_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_number_pane

0xaaed,	// (0x000174b6) list_double_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_pane

0xaaed,	// (0x000174b6) list_double_time_pane_ParamLimits

0xaaed,	// (0x000174b6) list_double_time_pane

0xaaed,	// (0x000174b6) list_setting_number_pane_ParamLimits

0xaaed,	// (0x000174b6) list_setting_number_pane

0xaaed,	// (0x000174b6) list_setting_pane_ParamLimits

0xaaed,	// (0x000174b6) list_setting_pane

0xab58,	// (0x00017521) list_single_2graphic_pane_ParamLimits

0xab58,	// (0x00017521) list_single_2graphic_pane

0xab58,	// (0x00017521) list_single_graphic_heading_pane_ParamLimits

0xab58,	// (0x00017521) list_single_graphic_heading_pane

0xab58,	// (0x00017521) list_single_graphic_pane_ParamLimits

0xab58,	// (0x00017521) list_single_graphic_pane

0xab58,	// (0x00017521) list_single_heading_pane_ParamLimits

0xab58,	// (0x00017521) list_single_heading_pane

0xabd2,	// (0x0001759b) list_single_large_graphic_pane_ParamLimits

0xabd2,	// (0x0001759b) list_single_large_graphic_pane

0xab58,	// (0x00017521) list_single_number_heading_pane_ParamLimits

0xab58,	// (0x00017521) list_single_number_heading_pane

0xab58,	// (0x00017521) list_single_number_pane_ParamLimits

0xab58,	// (0x00017521) list_single_number_pane

0xab58,	// (0x00017521) list_single_pane_ParamLimits

0xab58,	// (0x00017521) list_single_pane

0x3db9,	// (0x00010782) list_highlight_pane_cp1

0x7e78,	// (0x00014841) list_single_pane_g1_ParamLimits

0x7e78,	// (0x00014841) list_single_pane_g1

0x7e84,	// (0x0001484d) list_single_pane_g2_ParamLimits

0x7e84,	// (0x0001484d) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001bf91) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001bf91) list_single_pane_g

0xaaa6,	// (0x0001746f) list_single_pane_t1_ParamLimits

0xaaa6,	// (0x0001746f) list_single_pane_t1

0x7e78,	// (0x00014841) list_single_number_pane_g1_ParamLimits

0x7e78,	// (0x00014841) list_single_number_pane_g1

0x7e84,	// (0x0001484d) list_single_number_pane_g2_ParamLimits

0x7e84,	// (0x0001484d) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001bf91) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001bf91) list_single_number_pane_g

0x7e90,	// (0x00014859) list_single_number_pane_t1_ParamLimits

0x7e90,	// (0x00014859) list_single_number_pane_t1

0xa84c,	// (0x00017215) list_single_number_pane_t2_ParamLimits

0xa84c,	// (0x00017215) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0001c319) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0001c319) list_single_number_pane_t

0x7e6c,	// (0x00014835) list_single_graphic_pane_g1_ParamLimits

0x7e6c,	// (0x00014835) list_single_graphic_pane_g1

0x7e78,	// (0x00014841) list_single_graphic_pane_g2_ParamLimits

0x7e78,	// (0x00014841) list_single_graphic_pane_g2

0x7e84,	// (0x0001484d) list_single_graphic_pane_g3_ParamLimits

0x7e84,	// (0x0001484d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001bf8a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001bf8a) list_single_graphic_pane_g

0x7e90,	// (0x00014859) list_single_graphic_pane_t1_ParamLimits

0x7e90,	// (0x00014859) list_single_graphic_pane_t1

0x7e78,	// (0x00014841) list_single_heading_pane_g1_ParamLimits

0x7e78,	// (0x00014841) list_single_heading_pane_g1

0x7e84,	// (0x0001484d) list_single_heading_pane_g2_ParamLimits

0x7e84,	// (0x0001484d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001bf91) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001bf91) list_single_heading_pane_g

0x7ea6,	// (0x0001486f) list_single_heading_pane_t1_ParamLimits

0x7ea6,	// (0x0001486f) list_single_heading_pane_t1

0x7ebc,	// (0x00014885) list_single_heading_pane_t2_ParamLimits

0x7ebc,	// (0x00014885) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001bf96) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001bf96) list_single_heading_pane_t

0x7e78,	// (0x00014841) list_single_number_heading_pane_g1_ParamLimits

0x7e78,	// (0x00014841) list_single_number_heading_pane_g1

0x7e84,	// (0x0001484d) list_single_number_heading_pane_g2_ParamLimits

0x7e84,	// (0x0001484d) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001bf91) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001bf91) list_single_number_heading_pane_g

0x7ea6,	// (0x0001486f) list_single_number_heading_pane_t1_ParamLimits

0x7ea6,	// (0x0001486f) list_single_number_heading_pane_t1

0x7ece,	// (0x00014897) list_single_number_heading_pane_t2_ParamLimits

0x7ece,	// (0x00014897) list_single_number_heading_pane_t2

0x7ee0,	// (0x000148a9) list_single_number_heading_pane_t3_ParamLimits

0x7ee0,	// (0x000148a9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001bf9b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001bf9b) list_single_number_heading_pane_t

0x7ef2,	// (0x000148bb) list_single_graphic_heading_pane_g1_ParamLimits

0x7ef2,	// (0x000148bb) list_single_graphic_heading_pane_g1

0x7efe,	// (0x000148c7) list_single_graphic_heading_pane_g4_ParamLimits

0x7efe,	// (0x000148c7) list_single_graphic_heading_pane_g4

0x7e84,	// (0x0001484d) list_single_graphic_heading_pane_g5_ParamLimits

0x7e84,	// (0x0001484d) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001bfa2) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001bfa2) list_single_graphic_heading_pane_g

0x7ea6,	// (0x0001486f) list_single_graphic_heading_pane_t1_ParamLimits

0x7ea6,	// (0x0001486f) list_single_graphic_heading_pane_t1

0x7f0f,	// (0x000148d8) list_single_graphic_heading_pane_t2_ParamLimits

0x7f0f,	// (0x000148d8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001bfa9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001bfa9) list_single_graphic_heading_pane_t

0x7f21,	// (0x000148ea) list_single_large_graphic_pane_g1_ParamLimits

0x7f21,	// (0x000148ea) list_single_large_graphic_pane_g1

0x41b1,	// (0x00010b7a) list_single_large_graphic_pane_g2_ParamLimits

0x41b1,	// (0x00010b7a) list_single_large_graphic_pane_g2

0x41bd,	// (0x00010b86) list_single_large_graphic_pane_g3_ParamLimits

0x41bd,	// (0x00010b86) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001bfae) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001bfae) list_single_large_graphic_pane_g

0x9b54,	// (0x0001651d) wait_border_pane_g2_copy1

0x7f2d,	// (0x000148f6) list_single_large_graphic_pane_g4_cp2

0x7f35,	// (0x000148fe) list_single_large_graphic_pane_t1_ParamLimits

0x7f35,	// (0x000148fe) list_single_large_graphic_pane_t1

0x41de,	// (0x00010ba7) list_double_pane_g1_ParamLimits

0x41de,	// (0x00010ba7) list_double_pane_g1

0x7f4b,	// (0x00014914) list_double_pane_g2_ParamLimits

0x7f4b,	// (0x00014914) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001bfb5) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001bfb5) list_double_pane_g

0x7f57,	// (0x00014920) list_double_pane_t1_ParamLimits

0x7f57,	// (0x00014920) list_double_pane_t1

0x7f6d,	// (0x00014936) list_double_pane_t2_ParamLimits

0x7f6d,	// (0x00014936) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001bfba) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001bfba) list_double_pane_t

0x7f7f,	// (0x00014948) list_double2_pane_g1_ParamLimits

0x7f7f,	// (0x00014948) list_double2_pane_g1

0x7f90,	// (0x00014959) list_double2_pane_g2_ParamLimits

0x7f90,	// (0x00014959) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001bfbf) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001bfbf) list_double2_pane_g

0x7f9c,	// (0x00014965) list_double2_pane_t1_ParamLimits

0x7f9c,	// (0x00014965) list_double2_pane_t1

0x7fb2,	// (0x0001497b) list_double2_pane_t2_ParamLimits

0x7fb2,	// (0x0001497b) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001bfc4) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001bfc4) list_double2_pane_t

0x41de,	// (0x00010ba7) list_double_number_pane_g1_ParamLimits

0x41de,	// (0x00010ba7) list_double_number_pane_g1

0x7f4b,	// (0x00014914) list_double_number_pane_g2_ParamLimits

0x7f4b,	// (0x00014914) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001bfb5) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001bfb5) list_double_number_pane_g

0x7fc4,	// (0x0001498d) list_double_number_pane_t1_ParamLimits

0x7fc4,	// (0x0001498d) list_double_number_pane_t1

0x7fd6,	// (0x0001499f) list_double_number_pane_t2_ParamLimits

0x7fd6,	// (0x0001499f) list_double_number_pane_t2

0x7fec,	// (0x000149b5) list_double_number_pane_t3_ParamLimits

0x7fec,	// (0x000149b5) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001bfc9) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001bfc9) list_double_number_pane_t

0x7ffe,	// (0x000149c7) list_double_graphic_pane_g1_ParamLimits

0x7ffe,	// (0x000149c7) list_double_graphic_pane_g1

0x800a,	// (0x000149d3) list_double_graphic_pane_g2_ParamLimits

0x800a,	// (0x000149d3) list_double_graphic_pane_g2

0x8019,	// (0x000149e2) list_double_graphic_pane_g3_ParamLimits

0x8019,	// (0x000149e2) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001bfd0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001bfd0) list_double_graphic_pane_g

0x7fd6,	// (0x0001499f) list_double_graphic_pane_t1_ParamLimits

0x7fd6,	// (0x0001499f) list_double_graphic_pane_t1

0x7fec,	// (0x000149b5) list_double_graphic_pane_t2_ParamLimits

0x7fec,	// (0x000149b5) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001bfd9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001bfd9) list_double_graphic_pane_t

0x8031,	// (0x000149fa) list_double2_graphic_pane_g1_ParamLimits

0x8031,	// (0x000149fa) list_double2_graphic_pane_g1

0x41ea,	// (0x00010bb3) list_double2_graphic_pane_g2_ParamLimits

0x41ea,	// (0x00010bb3) list_double2_graphic_pane_g2

0x7f90,	// (0x00014959) list_double2_graphic_pane_g3_ParamLimits

0x7f90,	// (0x00014959) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001bfde) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001bfde) list_double2_graphic_pane_g

0x803d,	// (0x00014a06) list_double2_graphic_pane_t1_ParamLimits

0x803d,	// (0x00014a06) list_double2_graphic_pane_t1

0x8053,	// (0x00014a1c) list_double2_graphic_pane_t2_ParamLimits

0x8053,	// (0x00014a1c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001bfe5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001bfe5) list_double2_graphic_pane_t

0x8065,	// (0x00014a2e) list_double_large_graphic_pane_g1_ParamLimits

0x8065,	// (0x00014a2e) list_double_large_graphic_pane_g1

0x8084,	// (0x00014a4d) list_double_large_graphic_pane_g2_ParamLimits

0x8084,	// (0x00014a4d) list_double_large_graphic_pane_g2

0x7f4b,	// (0x00014914) list_double_large_graphic_pane_g3_ParamLimits

0x7f4b,	// (0x00014914) list_double_large_graphic_pane_g3

0x8095,	// (0x00014a5e) list_double_large_graphic_pane_g4_ParamLimits

0x8095,	// (0x00014a5e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001bfea) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001bfea) list_double_large_graphic_pane_g

0x80a7,	// (0x00014a70) list_double_large_graphic_pane_t1_ParamLimits

0x80a7,	// (0x00014a70) list_double_large_graphic_pane_t1

0x80c0,	// (0x00014a89) list_double_large_graphic_pane_t2_ParamLimits

0x80c0,	// (0x00014a89) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001bff5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001bff5) list_double_large_graphic_pane_t

0x80d2,	// (0x00014a9b) list_double2_large_graphic_pane_g1_ParamLimits

0x80d2,	// (0x00014a9b) list_double2_large_graphic_pane_g1

0x7f7f,	// (0x00014948) list_double2_large_graphic_pane_g2_ParamLimits

0x7f7f,	// (0x00014948) list_double2_large_graphic_pane_g2

0x7f90,	// (0x00014959) list_double2_large_graphic_pane_g3_ParamLimits

0x7f90,	// (0x00014959) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001bffa) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001bffa) list_double2_large_graphic_pane_g

0x803d,	// (0x00014a06) list_double2_large_graphic_pane_t1_ParamLimits

0x803d,	// (0x00014a06) list_double2_large_graphic_pane_t1

0x8053,	// (0x00014a1c) list_double2_large_graphic_pane_t2_ParamLimits

0x8053,	// (0x00014a1c) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001bfe5) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001bfe5) list_double2_large_graphic_pane_t

0x80de,	// (0x00014aa7) list_double_heading_pane_g1_ParamLimits

0x80de,	// (0x00014aa7) list_double_heading_pane_g1

0x80ef,	// (0x00014ab8) list_double_heading_pane_g2_ParamLimits

0x80ef,	// (0x00014ab8) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0001c001) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0001c001) list_double_heading_pane_g

0x80fb,	// (0x00014ac4) list_double_heading_pane_t1_ParamLimits

0x80fb,	// (0x00014ac4) list_double_heading_pane_t1

0x8053,	// (0x00014a1c) list_double_heading_pane_t2_ParamLimits

0x8053,	// (0x00014a1c) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c006) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c006) list_double_heading_pane_t

0x8111,	// (0x00014ada) list_double_graphic_heading_pane_g1_ParamLimits

0x8111,	// (0x00014ada) list_double_graphic_heading_pane_g1

0x80de,	// (0x00014aa7) list_double_graphic_heading_pane_g2_ParamLimits

0x80de,	// (0x00014aa7) list_double_graphic_heading_pane_g2

0x80ef,	// (0x00014ab8) list_double_graphic_heading_pane_g3_ParamLimits

0x80ef,	// (0x00014ab8) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0001c00b) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0001c00b) list_double_graphic_heading_pane_g

0x80fb,	// (0x00014ac4) list_double_graphic_heading_pane_t1_ParamLimits

0x80fb,	// (0x00014ac4) list_double_graphic_heading_pane_t1

0x8053,	// (0x00014a1c) list_double_graphic_heading_pane_t2_ParamLimits

0x8053,	// (0x00014a1c) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c006) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c006) list_double_graphic_heading_pane_t

0x8084,	// (0x00014a4d) list_double_time_pane_g1_ParamLimits

0x8084,	// (0x00014a4d) list_double_time_pane_g1

0x7f4b,	// (0x00014914) list_double_time_pane_g2_ParamLimits

0x7f4b,	// (0x00014914) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0001c012) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0001c012) list_double_time_pane_g

0x811d,	// (0x00014ae6) list_double_time_pane_t1_ParamLimits

0x811d,	// (0x00014ae6) list_double_time_pane_t1

0x8133,	// (0x00014afc) list_double_time_pane_t2_ParamLimits

0x8133,	// (0x00014afc) list_double_time_pane_t2

0x8145,	// (0x00014b0e) list_double_time_pane_t3_ParamLimits

0x8145,	// (0x00014b0e) list_double_time_pane_t3

0x8157,	// (0x00014b20) list_double_time_pane_t4_ParamLimits

0x8157,	// (0x00014b20) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0001c017) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0001c017) list_double_time_pane_t

0x41ea,	// (0x00010bb3) list_setting_pane_g1_ParamLimits

0x41ea,	// (0x00010bb3) list_setting_pane_g1

0x7f90,	// (0x00014959) list_setting_pane_g2_ParamLimits

0x7f90,	// (0x00014959) list_setting_pane_g2

0x0001,

0xf657,	// (0x0001c020) list_setting_pane_g_ParamLimits

0xf657,	// (0x0001c020) list_setting_pane_g

0x8169,	// (0x00014b32) list_setting_pane_t1_ParamLimits

0x8169,	// (0x00014b32) list_setting_pane_t1

0x8180,	// (0x00014b49) list_setting_pane_t2_ParamLimits

0x8180,	// (0x00014b49) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0001c025) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0001c025) list_setting_pane_t

0x81bd,	// (0x00014b86) set_value_pane_cp_ParamLimits

0x81bd,	// (0x00014b86) set_value_pane_cp

0x41ea,	// (0x00010bb3) list_setting_number_pane_g1_ParamLimits

0x41ea,	// (0x00010bb3) list_setting_number_pane_g1

0x7f90,	// (0x00014959) list_setting_number_pane_g2_ParamLimits

0x7f90,	// (0x00014959) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x0001c020) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x0001c020) list_setting_number_pane_g

0x81c9,	// (0x00014b92) list_setting_number_pane_t1_ParamLimits

0x81c9,	// (0x00014b92) list_setting_number_pane_t1

0x81dd,	// (0x00014ba6) list_setting_number_pane_t2_ParamLimits

0x81dd,	// (0x00014ba6) list_setting_number_pane_t2

0x81f4,	// (0x00014bbd) list_setting_number_pane_t3_ParamLimits

0x81f4,	// (0x00014bbd) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0001c02c) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0001c02c) list_setting_number_pane_t

0x81bd,	// (0x00014b86) set_value_pane_ParamLimits

0x81bd,	// (0x00014b86) set_value_pane

0x41f6,	// (0x00010bbf) bg_set_opt_pane_ParamLimits

0x41f6,	// (0x00010bbf) bg_set_opt_pane

0x4217,	// (0x00010be0) set_value_pane_t1

0x4225,	// (0x00010bee) slider_set_pane_cp3

0x8237,	// (0x00014c00) volume_small_pane_cp

0x422e,	// (0x00010bf7) list_form_gen_pane

0x4237,	// (0x00010c00) scroll_pane_cp8

0x8240,	// (0x00014c09) form_field_data_pane_ParamLimits

0x8240,	// (0x00014c09) form_field_data_pane

0x8258,	// (0x00014c21) form_field_data_wide_pane_ParamLimits

0x8258,	// (0x00014c21) form_field_data_wide_pane

0x8279,	// (0x00014c42) form_field_popup_pane_ParamLimits

0x8279,	// (0x00014c42) form_field_popup_pane

0x8299,	// (0x00014c62) form_field_popup_wide_pane_ParamLimits

0x8299,	// (0x00014c62) form_field_popup_wide_pane

0x4258,	// (0x00010c21) form_field_slider_pane_ParamLimits

0x4258,	// (0x00010c21) form_field_slider_pane

0x82b6,	// (0x00014c7f) form_field_slider_wide_pane_ParamLimits

0x82b6,	// (0x00014c7f) form_field_slider_wide_pane

0x426b,	// (0x00010c34) data_form_pane

0x82d3,	// (0x00014c9c) form_field_data_pane_t1

0x4277,	// (0x00010c40) input_focus_pane

0x4285,	// (0x00010c4e) data_form_wide_pane

0x42b6,	// (0x00010c7f) form_field_data_wide_pane_t1

0x40f5,	// (0x00010abe) input_focus_pane_cp6

0x82eb,	// (0x00014cb4) form_field_popup_pane_t1

0x4277,	// (0x00010c40) input_focus_pane_cp7

0x42d8,	// (0x00010ca1) list_form_pane

0x42ec,	// (0x00010cb5) form_field_popup_wide_pane_t1

0x4277,	// (0x00010c40) input_focus_pane_cp8

0x4301,	// (0x00010cca) list_form_wide_pane

0x830b,	// (0x00014cd4) form_field_slider_pane_t1_ParamLimits

0x830b,	// (0x00014cd4) form_field_slider_pane_t1

0x831d,	// (0x00014ce6) form_field_slider_pane_t2_ParamLimits

0x831d,	// (0x00014ce6) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0001c03c) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0001c03c) form_field_slider_pane_t

0x3e27,	// (0x000107f0) input_focus_pane_cp9_ParamLimits

0x3e27,	// (0x000107f0) input_focus_pane_cp9

0x832f,	// (0x00014cf8) slider_cont_pane_ParamLimits

0x832f,	// (0x00014cf8) slider_cont_pane

0x430d,	// (0x00010cd6) form_field_slider_wide_pane_t1_ParamLimits

0x430d,	// (0x00010cd6) form_field_slider_wide_pane_t1

0x431f,	// (0x00010ce8) form_field_slider_wide_pane_t2_ParamLimits

0x431f,	// (0x00010ce8) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0001c041) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0001c041) form_field_slider_wide_pane_t

0x3e27,	// (0x000107f0) input_focus_pane_cp10_ParamLimits

0x3e27,	// (0x000107f0) input_focus_pane_cp10

0x8343,	// (0x00014d0c) slider_cont_pane_cp1_ParamLimits

0x8343,	// (0x00014d0c) slider_cont_pane_cp1

0x8357,	// (0x00014d20) slider_form_pane_cp

0x4331,	// (0x00010cfa) input_focus_pane_g1

0x4339,	// (0x00010d02) input_focus_pane_g2

0x4341,	// (0x00010d0a) input_focus_pane_g3

0x4349,	// (0x00010d12) input_focus_pane_g4

0x4351,	// (0x00010d1a) input_focus_pane_g5

0x4359,	// (0x00010d22) input_focus_pane_g6

0x4361,	// (0x00010d2a) input_focus_pane_g7

0x4369,	// (0x00010d32) input_focus_pane_g8

0x4371,	// (0x00010d3a) input_focus_pane_g9

0x3c40,	// (0x00010609) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0001c046) input_focus_pane_g

0x9b5d,	// (0x00016526) wait_border_pane_g3_copy1

0x835f,	// (0x00014d28) data_form_pane_t1

0x3c40,	// (0x00010609) wait_anim_pane_g1_copy1

0xaa89,	// (0x00017452) data_form_wide_pane_t1

0x837a,	// (0x00014d43) list_form_graphic_pane_cp_ParamLimits

0x837a,	// (0x00014d43) list_form_graphic_pane_cp

0xaa5e,	// (0x00017427) slider_form_pane_g1

0xaa67,	// (0x00017430) slider_form_pane_g2

0x0006,

0xf980,	// (0x0001c349) slider_form_pane_g

0x838e,	// (0x00014d57) list_form_graphic_pane_ParamLimits

0x838e,	// (0x00014d57) list_form_graphic_pane

0x83a5,	// (0x00014d6e) list_form_graphic_pane_g1

0x83ad,	// (0x00014d76) list_form_graphic_pane_t1_ParamLimits

0x83ad,	// (0x00014d76) list_form_graphic_pane_t1

0x3e35,	// (0x000107fe) list_highlight_pane_cp5_ParamLimits

0x3e35,	// (0x000107fe) list_highlight_pane_cp5

0x83c2,	// (0x00014d8b) find_pane_g1

0x4379,	// (0x00010d42) input_find_pane

0x83cb,	// (0x00014d94) input_find_pane_g1_ParamLimits

0x83cb,	// (0x00014d94) input_find_pane_g1

0x83d7,	// (0x00014da0) input_find_pane_t1_ParamLimits

0x83d7,	// (0x00014da0) input_find_pane_t1

0x83ec,	// (0x00014db5) input_find_pane_t2_ParamLimits

0x83ec,	// (0x00014db5) input_find_pane_t2

0x0001,

0xf692,	// (0x0001c05b) input_find_pane_t_ParamLimits

0xf692,	// (0x0001c05b) input_find_pane_t

0x4382,	// (0x00010d4b) input_focus_pane_cp5_ParamLimits

0x4382,	// (0x00010d4b) input_focus_pane_cp5

0x4390,	// (0x00010d59) bg_popup_window_pane_cp2_ParamLimits

0x4390,	// (0x00010d59) bg_popup_window_pane_cp2

0x439d,	// (0x00010d66) listscroll_menu_pane_ParamLimits

0x439d,	// (0x00010d66) listscroll_menu_pane

0x840d,	// (0x00014dd6) popup_submenu_window_ParamLimits

0x840d,	// (0x00014dd6) popup_submenu_window

0x43a9,	// (0x00010d72) find_popup_pane_g1

0x8435,	// (0x00014dfe) input_popup_find_pane_cp

0x4382,	// (0x00010d4b) input_focus_pane_cp4_ParamLimits

0x4382,	// (0x00010d4b) input_focus_pane_cp4

0x43b1,	// (0x00010d7a) input_popup_find_pane_t1_ParamLimits

0x43b1,	// (0x00010d7a) input_popup_find_pane_t1

0x3db9,	// (0x00010782) bg_popup_sub_pane_cp

0x43df,	// (0x00010da8) listscroll_popup_sub_pane

0x43e7,	// (0x00010db0) list_submenu_pane_ParamLimits

0x43e7,	// (0x00010db0) list_submenu_pane

0x43f8,	// (0x00010dc1) scroll_pane_cp4

0x844d,	// (0x00014e16) list_single_popup_submenu_pane_ParamLimits

0x844d,	// (0x00014e16) list_single_popup_submenu_pane

0x4416,	// (0x00010ddf) list_single_popup_submenu_pane_g1

0x8461,	// (0x00014e2a) list_single_popup_submenu_pane_t1_ParamLimits

0x8461,	// (0x00014e2a) list_single_popup_submenu_pane_t1

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp1_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp1

0x4400,	// (0x00010dc9) tabs_2_active_pane_g1

0x8476,	// (0x00014e3f) tabs_2_active_pane_t1

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp1_ParamLimits

0x3e35,	// (0x000107fe) bg_passive_tab_pane_cp1

0x4400,	// (0x00010dc9) tabs_2_passive_pane_g1

0x8476,	// (0x00014e3f) tabs_2_passive_pane_t1

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp4

0x8488,	// (0x00014e51) tabs_2_long_active_pane_t1

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp4

0x64c8,	// (0x00012e91) list_single_midp_graphic_pane_g4_ParamLimits

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp5

0x84a7,	// (0x00014e70) tabs_3_long_active_pane_t1

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp5

0x64c8,	// (0x00012e91) list_single_midp_graphic_pane_g4

0x3e35,	// (0x000107fe) bg_popup_window_pane_cp13_ParamLimits

0x3e35,	// (0x000107fe) bg_popup_window_pane_cp13

0x441e,	// (0x00010de7) listscroll_popup_fast_pane_ParamLimits

0x441e,	// (0x00010de7) listscroll_popup_fast_pane

0x442a,	// (0x00010df3) grid_popup_fast_pane_ParamLimits

0x442a,	// (0x00010df3) grid_popup_fast_pane

0x443c,	// (0x00010e05) scroll_pane_cp9_ParamLimits

0x443c,	// (0x00010e05) scroll_pane_cp9

0xc9a9,	// (0x00019372) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc9a9,	// (0x00019372) list_single_graphic_hl_pane_t1_cp2

0x444f,	// (0x00010e18) input_focus_pane_cp20_ParamLimits

0x444f,	// (0x00010e18) input_focus_pane_cp20

0x445d,	// (0x00010e26) query_popup_data_pane_t1_ParamLimits

0x445d,	// (0x00010e26) query_popup_data_pane_t1

0x4470,	// (0x00010e39) query_popup_data_pane_t2_ParamLimits

0x4470,	// (0x00010e39) query_popup_data_pane_t2

0x44b6,	// (0x00010e7f) query_popup_data_pane_t3_ParamLimits

0x44b6,	// (0x00010e7f) query_popup_data_pane_t3

0x44f7,	// (0x00010ec0) query_popup_data_pane_t4_ParamLimits

0x44f7,	// (0x00010ec0) query_popup_data_pane_t4

0x4533,	// (0x00010efc) query_popup_data_pane_t5_ParamLimits

0x4533,	// (0x00010efc) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0001c060) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0001c060) query_popup_data_pane_t

0x4331,	// (0x00010cfa) bg_set_opt_pane_g1

0x4339,	// (0x00010d02) bg_set_opt_pane_g2

0x4341,	// (0x00010d0a) bg_set_opt_pane_g3

0x4349,	// (0x00010d12) bg_set_opt_pane_g4

0x4351,	// (0x00010d1a) bg_set_opt_pane_g5

0x4359,	// (0x00010d22) bg_set_opt_pane_g6

0x4361,	// (0x00010d2a) bg_set_opt_pane_g7

0x4369,	// (0x00010d32) bg_set_opt_pane_g8

0x4371,	// (0x00010d3a) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x0001c06b) bg_set_opt_pane_g

0x5adc,	// (0x000124a5) control_top_pane_stacon_ParamLimits

0x5adc,	// (0x000124a5) control_top_pane_stacon

0x5b2f,	// (0x000124f8) signal_pane_stacon_ParamLimits

0x5b2f,	// (0x000124f8) signal_pane_stacon

0x8870,	// (0x00015239) stacon_top_pane_g1_ParamLimits

0x8870,	// (0x00015239) stacon_top_pane_g1

0x5b54,	// (0x0001251d) title_pane_stacon_ParamLimits

0x5b54,	// (0x0001251d) title_pane_stacon

0x5b7e,	// (0x00012547) uni_indicator_pane_stacon_ParamLimits

0x5b7e,	// (0x00012547) uni_indicator_pane_stacon

0x5b93,	// (0x0001255c) battery_pane_stacon_ParamLimits

0x5b93,	// (0x0001255c) battery_pane_stacon

0x5bd7,	// (0x000125a0) control_bottom_pane_stacon_ParamLimits

0x5bd7,	// (0x000125a0) control_bottom_pane_stacon

0x5bfa,	// (0x000125c3) navi_pane_stacon_ParamLimits

0x5bfa,	// (0x000125c3) navi_pane_stacon

0x8892,	// (0x0001525b) stacon_bottom_pane_g1_ParamLimits

0x8892,	// (0x0001525b) stacon_bottom_pane_g1

0x5848,	// (0x00012211) aid_levels_signal_lsc_ParamLimits

0x5848,	// (0x00012211) aid_levels_signal_lsc

0x585e,	// (0x00012227) signal_pane_stacon_g1_ParamLimits

0x585e,	// (0x00012227) signal_pane_stacon_g1

0x5872,	// (0x0001223b) signal_pane_stacon_g2_ParamLimits

0x5872,	// (0x0001223b) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0001c07e) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0001c07e) signal_pane_stacon_g

0x58a7,	// (0x00012270) title_pane_stacon_t1_ParamLimits

0x58a7,	// (0x00012270) title_pane_stacon_t1

0x460f,	// (0x00010fd8) uni_indicator_pane_stacon_g1

0x4619,	// (0x00010fe2) uni_indicator_pane_stacon_g2

0x45fb,	// (0x00010fc4) uni_indicator_pane_stacon_g3

0x4605,	// (0x00010fce) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0001c08a) uni_indicator_pane_stacon_g

0x58cc,	// (0x00012295) control_top_pane_stacon_g1

0x58d4,	// (0x0001229d) control_top_pane_stacon_t1_ParamLimits

0x58d4,	// (0x0001229d) control_top_pane_stacon_t1

0x590b,	// (0x000122d4) aid_levels_battery_lsc_ParamLimits

0x590b,	// (0x000122d4) aid_levels_battery_lsc

0x5922,	// (0x000122eb) battery_pane_stacon_g1_ParamLimits

0x5922,	// (0x000122eb) battery_pane_stacon_g1

0x5935,	// (0x000122fe) battery_pane_stacon_g2_ParamLimits

0x5935,	// (0x000122fe) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001c093) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c093) battery_pane_stacon_g

0x5973,	// (0x0001233c) navi_icon_pane_stacon

0x5987,	// (0x00012350) navi_navi_pane_stacon

0x5973,	// (0x0001233c) navi_text_pane_stacon

0x58cc,	// (0x00012295) control_bottom_pane_stacon_g1

0x599b,	// (0x00012364) control_bottom_pane_stacon_t1_ParamLimits

0x599b,	// (0x00012364) control_bottom_pane_stacon_t1

0x84d3,	// (0x00014e9c) grid_app_pane_ParamLimits

0x84d3,	// (0x00014e9c) grid_app_pane

0x84f7,	// (0x00014ec0) scroll_pane_cp15_ParamLimits

0x84f7,	// (0x00014ec0) scroll_pane_cp15

0x850a,	// (0x00014ed3) cell_app_pane_ParamLimits

0x850a,	// (0x00014ed3) cell_app_pane

0x8532,	// (0x00014efb) cell_app_pane_g1_ParamLimits

0x8532,	// (0x00014efb) cell_app_pane_g1

0x4743,	// (0x0001110c) cell_app_pane_g2_ParamLimits

0x4743,	// (0x0001110c) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x0001c098) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x0001c098) cell_app_pane_g

0x8556,	// (0x00014f1f) cell_app_pane_t1_ParamLimits

0x8556,	// (0x00014f1f) cell_app_pane_t1

0x474f,	// (0x00011118) grid_highlight_pane_ParamLimits

0x474f,	// (0x00011118) grid_highlight_pane

0x4331,	// (0x00010cfa) cell_highlight_pane_g1

0x4339,	// (0x00010d02) cell_highlight_pane_g2

0x4341,	// (0x00010d0a) cell_highlight_pane_g3

0x4349,	// (0x00010d12) cell_highlight_pane_g4

0x4351,	// (0x00010d1a) cell_highlight_pane_g5

0x4359,	// (0x00010d22) cell_highlight_pane_g6

0x4361,	// (0x00010d2a) cell_highlight_pane_g7

0x4369,	// (0x00010d32) cell_highlight_pane_g8

0x4371,	// (0x00010d3a) cell_highlight_pane_g9

0x3c40,	// (0x00010609) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0001c046) cell_highlight_pane_g

0x476a,	// (0x00011133) bg_scroll_pane

0x59e5,	// (0x000123ae) scroll_handle_pane

0x47c6,	// (0x0001118f) scroll_bg_pane_g1

0x47db,	// (0x000111a4) scroll_bg_pane_g2

0x47f3,	// (0x000111bc) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0001c09d) scroll_bg_pane_g

0x856d,	// (0x00014f36) scroll_handle_focus_pane_ParamLimits

0x856d,	// (0x00014f36) scroll_handle_focus_pane

0x47c6,	// (0x0001118f) scroll_handle_pane_g1

0x4808,	// (0x000111d1) scroll_handle_pane_g2

0x47f3,	// (0x000111bc) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001c0a4) scroll_handle_pane_g

0x4382,	// (0x00010d4b) bg_popup_sub_pane_cp21_ParamLimits

0x4382,	// (0x00010d4b) bg_popup_sub_pane_cp21

0x857a,	// (0x00014f43) popup_fep_japan_predictive_window_t1_ParamLimits

0x857a,	// (0x00014f43) popup_fep_japan_predictive_window_t1

0x8594,	// (0x00014f5d) popup_fep_japan_predictive_window_t2_ParamLimits

0x8594,	// (0x00014f5d) popup_fep_japan_predictive_window_t2

0x85c7,	// (0x00014f90) popup_fep_japan_predictive_window_t3_ParamLimits

0x85c7,	// (0x00014f90) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0001c0ab) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0001c0ab) popup_fep_japan_predictive_window_t

0x3db9,	// (0x00010782) bg_popup_sub_pane_cp23

0x4887,	// (0x00011250) listscroll_japin_cand_pane

0x481c,	// (0x000111e5) popup_fep_japan_candidate_window_t1

0x482a,	// (0x000111f3) candidate_pane_ParamLimits

0x482a,	// (0x000111f3) candidate_pane

0x85fe,	// (0x00014fc7) scroll_pane_cp30

0x483c,	// (0x00011205) list_single_popup_jap_candidate_pane_ParamLimits

0x483c,	// (0x00011205) list_single_popup_jap_candidate_pane

0x3db9,	// (0x00010782) list_highlight_pane_cp30

0x4851,	// (0x0001121a) list_single_popup_jap_candidate_pane_t1

0x4860,	// (0x00011229) level_1_signal

0x486d,	// (0x00011236) level_2_signal

0x487a,	// (0x00011243) level_3_signal

0x488f,	// (0x00011258) level_4_signal

0x489c,	// (0x00011265) level_5_signal

0x48a9,	// (0x00011272) level_6_signal

0x48b6,	// (0x0001127f) level_7_signal

0x4860,	// (0x00011229) level_1_battery

0x486d,	// (0x00011236) level_2_battery

0x487a,	// (0x00011243) level_3_battery

0x488f,	// (0x00011258) level_4_battery

0x489c,	// (0x00011265) level_5_battery

0x48a9,	// (0x00011272) level_6_battery

0x48b6,	// (0x0001127f) level_7_battery

0x48fa,	// (0x000112c3) list_menu_pane_ParamLimits

0x48fa,	// (0x000112c3) list_menu_pane

0x4910,	// (0x000112d9) scroll_pane_cp25_ParamLimits

0x4910,	// (0x000112d9) scroll_pane_cp25

0x4929,	// (0x000112f2) list_double2_graphic_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double2_graphic_pane_cp2

0x4929,	// (0x000112f2) list_double2_large_graphic_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double2_large_graphic_pane_cp2

0x4929,	// (0x000112f2) list_double2_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double2_pane_cp2

0x4929,	// (0x000112f2) list_double_graphic_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double_graphic_pane_cp2

0x4929,	// (0x000112f2) list_double_large_graphic_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double_large_graphic_pane_cp2

0x4929,	// (0x000112f2) list_double_number_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double_number_pane_cp2

0x4929,	// (0x000112f2) list_double_pane_cp2_ParamLimits

0x4929,	// (0x000112f2) list_double_pane_cp2

0x861a,	// (0x00014fe3) list_single_2graphic_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_2graphic_pane_cp2

0x861a,	// (0x00014fe3) list_single_graphic_heading_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_graphic_heading_pane_cp2

0x861a,	// (0x00014fe3) list_single_graphic_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_graphic_pane_cp2

0x861a,	// (0x00014fe3) list_single_heading_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_heading_pane_cp2

0x4939,	// (0x00011302) list_single_large_graphic_pane_cp2_ParamLimits

0x4939,	// (0x00011302) list_single_large_graphic_pane_cp2

0x861a,	// (0x00014fe3) list_single_number_heading_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_number_heading_pane_cp2

0x861a,	// (0x00014fe3) list_single_number_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_number_pane_cp2

0x861a,	// (0x00014fe3) list_single_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_pane_cp2

0x49ae,	// (0x00011377) bg_popup_sub_pane_cp22

0x5a94,	// (0x0001245d) popup_side_volume_key_window_g1

0x5ab8,	// (0x00012481) popup_side_volume_key_window_t1

0x5ad4,	// (0x0001249d) volume_small_pane_cp1

0x3e27,	// (0x000107f0) bg_popup_sub_pane_cp24_ParamLimits

0x3e27,	// (0x000107f0) bg_popup_sub_pane_cp24

0x49de,	// (0x000113a7) fep_china_uni_candidate_pane_ParamLimits

0x49de,	// (0x000113a7) fep_china_uni_candidate_pane

0x49f2,	// (0x000113bb) fep_china_uni_entry_pane

0x4a02,	// (0x000113cb) popup_fep_china_uni_window_g1

0x868b,	// (0x00015054) fep_china_uni_entry_pane_g1

0x8693,	// (0x0001505c) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0001c0dc) fep_china_uni_entry_pane_g

0x869b,	// (0x00015064) fep_entry_item_pane

0x86a5,	// (0x0001506e) fep_candidate_item_pane

0x86ad,	// (0x00015076) fep_china_uni_candidate_pane_g1

0x86b5,	// (0x0001507e) fep_china_uni_candidate_pane_g2

0x86bd,	// (0x00015086) fep_china_uni_candidate_pane_g3

0x86c5,	// (0x0001508e) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0001c0e1) fep_china_uni_candidate_pane_g

0x3c40,	// (0x00010609) fep_entry_item_pane_g1

0x86cd,	// (0x00015096) fep_entry_item_pane_t1_ParamLimits

0x86cd,	// (0x00015096) fep_entry_item_pane_t1

0x86e3,	// (0x000150ac) fep_candidate_item_pane_t1_ParamLimits

0x86e3,	// (0x000150ac) fep_candidate_item_pane_t1

0x86f8,	// (0x000150c1) fep_candidate_item_pane_t2_ParamLimits

0x86f8,	// (0x000150c1) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x0001c0ea) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x0001c0ea) fep_candidate_item_pane_t

0x3e35,	// (0x000107fe) list_highlight_pane_cp31_ParamLimits

0x3e35,	// (0x000107fe) list_highlight_pane_cp31

0x870a,	// (0x000150d3) level_1_signal_lsc

0x8713,	// (0x000150dc) level_2_signal_lsc

0x871c,	// (0x000150e5) level_3_signal_lsc

0x8725,	// (0x000150ee) level_4_signal_lsc

0x872e,	// (0x000150f7) level_5_signal_lsc

0x8737,	// (0x00015100) level_6_signal_lsc

0x8740,	// (0x00015109) level_7_signal_lsc

0x8740,	// (0x00015109) level_1_battery_lsc

0x8749,	// (0x00015112) level_2_battery_lsc

0x8752,	// (0x0001511b) level_3_battery_lsc

0x875b,	// (0x00015124) level_4_battery_lsc

0x8764,	// (0x0001512d) level_5_battery_lsc

0x876d,	// (0x00015136) level_6_battery_lsc

0x870a,	// (0x000150d3) level_7_battery_lsc

0x8776,	// (0x0001513f) scroll_handle_focus_pane_g1

0x877f,	// (0x00015148) scroll_handle_focus_pane_g2

0x8788,	// (0x00015151) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0001c0ef) scroll_handle_focus_pane_g

0x8791,	// (0x0001515a) list_single_2graphic_pane_g1_ParamLimits

0x8791,	// (0x0001515a) list_single_2graphic_pane_g1

0x7efe,	// (0x000148c7) list_single_2graphic_pane_g2_ParamLimits

0x7efe,	// (0x000148c7) list_single_2graphic_pane_g2

0x7e84,	// (0x0001484d) list_single_2graphic_pane_g3_ParamLimits

0x7e84,	// (0x0001484d) list_single_2graphic_pane_g3

0x879d,	// (0x00015166) list_single_2graphic_pane_g4_ParamLimits

0x879d,	// (0x00015166) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0001c0f6) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0001c0f6) list_single_2graphic_pane_g

0x87a9,	// (0x00015172) list_single_2graphic_pane_t1_ParamLimits

0x87a9,	// (0x00015172) list_single_2graphic_pane_t1

0x87d7,	// (0x000151a0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87d7,	// (0x000151a0) list_double2_graphic_large_graphic_pane_g1

0x7f7f,	// (0x00014948) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7f7f,	// (0x00014948) list_double2_graphic_large_graphic_pane_g2

0x7f90,	// (0x00014959) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7f90,	// (0x00014959) list_double2_graphic_large_graphic_pane_g3

0x87e7,	// (0x000151b0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x87e7,	// (0x000151b0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0001c0ff) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0001c0ff) list_double2_graphic_large_graphic_pane_g

0x87f3,	// (0x000151bc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x87f3,	// (0x000151bc) list_double2_graphic_large_graphic_pane_t1

0x8809,	// (0x000151d2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8809,	// (0x000151d2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x0001c108) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x0001c108) list_double2_graphic_large_graphic_pane_t

0x8959,	// (0x00015322) popup_fast_swap_window_ParamLimits

0x8959,	// (0x00015322) popup_fast_swap_window

0x8975,	// (0x0001533e) popup_side_volume_key_window

0x898f,	// (0x00015358) stacon_top_pane

0x8999,	// (0x00015362) status_pane_ParamLimits

0x8999,	// (0x00015362) status_pane

0x89a7,	// (0x00015370) status_small_pane

0x3db9,	// (0x00010782) control_pane

0x3db9,	// (0x00010782) stacon_bottom_pane

0x4237,	// (0x00010c00) scroll_pane_cp121

0x422e,	// (0x00010bf7) set_content_pane

0x881b,	// (0x000151e4) bg_active_tab_pane_g1_cp1

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp1

0x882d,	// (0x000151f6) bg_active_tab_pane_g3_cp1

0x881b,	// (0x000151e4) bg_passive_tab_pane_g1_cp1

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp1

0x882d,	// (0x000151f6) bg_passive_tab_pane_g3_cp1

0x8836,	// (0x000151ff) bg_active_tab_pane_g1_cp2

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp2

0x883f,	// (0x00015208) bg_active_tab_pane_g3_cp2

0x8836,	// (0x000151ff) bg_passive_tab_pane_g1_cp2

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp2

0x883f,	// (0x00015208) bg_passive_tab_pane_g3_cp2

0x8848,	// (0x00015211) bg_active_tab_pane_g1_cp3

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp3

0x8851,	// (0x0001521a) bg_active_tab_pane_g3_cp3

0x8848,	// (0x00015211) bg_passive_tab_pane_g1_cp3

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp3

0x8851,	// (0x0001521a) bg_passive_tab_pane_g3_cp3

0x885a,	// (0x00015223) bg_active_tab_pane_g1_cp4

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp4

0x8865,	// (0x0001522e) bg_active_tab_pane_g3_cp4

0x885a,	// (0x00015223) bg_passive_tab_pane_g1_cp4

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp4

0x8865,	// (0x0001522e) bg_passive_tab_pane_g3_cp4

0x88ae,	// (0x00015277) bg_active_tab_pane_g1_cp5

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp5

0x88b7,	// (0x00015280) bg_active_tab_pane_g3_cp5

0x88ae,	// (0x00015277) bg_passive_tab_pane_g1_cp5

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp5

0x88b7,	// (0x00015280) bg_passive_tab_pane_g3_cp5

0x88c0,	// (0x00015289) list_set_graphic_pane_ParamLimits

0x88c0,	// (0x00015289) list_set_graphic_pane

0x3db9,	// (0x00010782) bg_set_opt_pane_cp4

0x88de,	// (0x000152a7) list_set_graphic_pane_g1_ParamLimits

0x88de,	// (0x000152a7) list_set_graphic_pane_g1

0x88ea,	// (0x000152b3) list_set_graphic_pane_g2_ParamLimits

0x88ea,	// (0x000152b3) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0001c10d) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0001c10d) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001c4a5) volume_small_pane_cp_g

0x890c,	// (0x000152d5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x890c,	// (0x000152d5) list_double2_large_graphic_pane_g1_cp2

0x8918,	// (0x000152e1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8918,	// (0x000152e1) list_double2_large_graphic_pane_g2_cp2

0x8929,	// (0x000152f2) list_double2_large_graphic_pane_g3_cp2

0x8931,	// (0x000152fa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8931,	// (0x000152fa) list_double2_large_graphic_pane_t1_cp2

0x8947,	// (0x00015310) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8947,	// (0x00015310) list_double2_large_graphic_pane_t2_cp2

0xa60e,	// (0x00016fd7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa60e,	// (0x00016fd7) list_double_large_graphic_pane_g1_cp2

0xa61f,	// (0x00016fe8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa61f,	// (0x00016fe8) list_double_large_graphic_pane_g2_cp2

0x8ab4,	// (0x0001547d) list_double_large_graphic_pane_g3_cp2

0xa630,	// (0x00016ff9) list_double_large_graphic_pane_g4_cp

0xa638,	// (0x00017001) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa638,	// (0x00017001) list_double_large_graphic_pane_t1_cp2

0xa64f,	// (0x00017018) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa64f,	// (0x00017018) list_double_large_graphic_pane_t2_cp2

0x89b2,	// (0x0001537b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89b2,	// (0x0001537b) list_double2_graphic_pane_g1_cp2

0x89c0,	// (0x00015389) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89c0,	// (0x00015389) list_double2_graphic_pane_g2_cp2

0x89d1,	// (0x0001539a) list_double2_graphic_pane_g3_cp2

0x89db,	// (0x000153a4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89db,	// (0x000153a4) list_double2_graphic_pane_t1_cp2

0x89f1,	// (0x000153ba) list_double2_graphic_pane_t2_cp2_ParamLimits

0x89f1,	// (0x000153ba) list_double2_graphic_pane_t2_cp2

0x41ea,	// (0x00010bb3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x41ea,	// (0x00010bb3) list_single_number_heading_pane_g1_cp2

0x8a03,	// (0x000153cc) list_single_number_heading_pane_g2_cp2

0x8a0b,	// (0x000153d4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a0b,	// (0x000153d4) list_single_number_heading_pane_t1_cp2

0x8a21,	// (0x000153ea) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a21,	// (0x000153ea) list_single_number_heading_pane_t2_cp2

0x8a33,	// (0x000153fc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a33,	// (0x000153fc) list_single_number_heading_pane_t3_cp2

0x41ea,	// (0x00010bb3) list_single_heading_pane_g1_cp2_ParamLimits

0x41ea,	// (0x00010bb3) list_single_heading_pane_g1_cp2

0x8a03,	// (0x000153cc) list_single_heading_pane_g2_cp2

0x8a0b,	// (0x000153d4) list_single_heading_pane_t1_cp2_ParamLimits

0x8a0b,	// (0x000153d4) list_single_heading_pane_t1_cp2

0xa418,	// (0x00016de1) list_single_heading_pane_t2_cp2_ParamLimits

0xa418,	// (0x00016de1) list_single_heading_pane_t2_cp2

0xa360,	// (0x00016d29) list_double_graphic_pane_g1_cp2_ParamLimits

0xa360,	// (0x00016d29) list_double_graphic_pane_g1_cp2

0xa36c,	// (0x00016d35) list_double_graphic_pane_g2_cp2_ParamLimits

0xa36c,	// (0x00016d35) list_double_graphic_pane_g2_cp2

0xa37b,	// (0x00016d44) list_double_graphic_pane_g3_cp2

0xa383,	// (0x00016d4c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa383,	// (0x00016d4c) list_double_graphic_pane_t1_cp2

0xa399,	// (0x00016d62) list_double_graphic_pane_t2_cp2_ParamLimits

0xa399,	// (0x00016d62) list_double_graphic_pane_t2_cp2

0x8aa8,	// (0x00015471) list_double_number_pane_g1_cp2_ParamLimits

0x8aa8,	// (0x00015471) list_double_number_pane_g1_cp2

0x8ab4,	// (0x0001547d) list_double_number_pane_g2_cp2

0xa324,	// (0x00016ced) list_double_number_pane_t1_cp2_ParamLimits

0xa324,	// (0x00016ced) list_double_number_pane_t1_cp2

0xa338,	// (0x00016d01) list_double_number_pane_t2_cp2_ParamLimits

0xa338,	// (0x00016d01) list_double_number_pane_t2_cp2

0xa34e,	// (0x00016d17) list_double_number_pane_t3_cp2_ParamLimits

0xa34e,	// (0x00016d17) list_double_number_pane_t3_cp2

0xa20d,	// (0x00016bd6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa20d,	// (0x00016bd6) list_single_graphic_pane_g1_cp2

0x8b0c,	// (0x000154d5) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b0c,	// (0x000154d5) list_single_graphic_pane_g2_cp2

0x8b18,	// (0x000154e1) list_single_graphic_pane_g3_cp2

0xa1e3,	// (0x00016bac) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1e3,	// (0x00016bac) list_single_graphic_pane_t1_cp2

0x8b0c,	// (0x000154d5) list_single_number_pane_g1_cp2_ParamLimits

0x8b0c,	// (0x000154d5) list_single_number_pane_g1_cp2

0x8b18,	// (0x000154e1) list_single_number_pane_g2_cp2

0xa1e3,	// (0x00016bac) list_single_number_pane_t1_cp2_ParamLimits

0xa1e3,	// (0x00016bac) list_single_number_pane_t1_cp2

0xa1f9,	// (0x00016bc2) list_single_number_pane_t2_cp2_ParamLimits

0xa1f9,	// (0x00016bc2) list_single_number_pane_t2_cp2

0x8918,	// (0x000152e1) list_double2_pane_g1_cp2_ParamLimits

0x8918,	// (0x000152e1) list_double2_pane_g1_cp2

0x8929,	// (0x000152f2) list_double2_pane_g2_cp2

0x8a80,	// (0x00015449) list_double2_pane_t1_cp2_ParamLimits

0x8a80,	// (0x00015449) list_double2_pane_t1_cp2

0x8a96,	// (0x0001545f) list_double2_pane_t2_cp2_ParamLimits

0x8a96,	// (0x0001545f) list_double2_pane_t2_cp2

0x8aa8,	// (0x00015471) list_double_pane_g1_cp2_ParamLimits

0x8aa8,	// (0x00015471) list_double_pane_g1_cp2

0x8ab4,	// (0x0001547d) list_double_pane_g2_cp2

0x8abc,	// (0x00015485) list_double_pane_t1_cp2_ParamLimits

0x8abc,	// (0x00015485) list_double_pane_t1_cp2

0x8ad2,	// (0x0001549b) list_double_pane_t2_cp2_ParamLimits

0x8ad2,	// (0x0001549b) list_double_pane_t2_cp2

0x8afc,	// (0x000154c5) list_single_pane_cp2_g3

0x8b0c,	// (0x000154d5) list_single_pane_g1_cp2_ParamLimits

0x8b0c,	// (0x000154d5) list_single_pane_g1_cp2

0x8b18,	// (0x000154e1) list_single_pane_g2_cp2

0x8b20,	// (0x000154e9) list_single_pane_t1_cp2_ParamLimits

0x8b20,	// (0x000154e9) list_single_pane_t1_cp2

0x8b38,	// (0x00015501) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b38,	// (0x00015501) list_single_large_graphic_pane_g1_cp2

0x8b44,	// (0x0001550d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b44,	// (0x0001550d) list_single_large_graphic_pane_g2_cp2

0x8b50,	// (0x00015519) list_single_large_graphic_pane_g3_cp2

0x8b58,	// (0x00015521) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b58,	// (0x00015521) list_single_large_graphic_pane_g4_cp1

0x8b72,	// (0x0001553b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b72,	// (0x0001553b) list_single_large_graphic_pane_t1_cp2

0xa1af,	// (0x00016b78) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa1af,	// (0x00016b78) list_single_graphic_heading_pane_g1_cp2

0xa17c,	// (0x00016b45) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa17c,	// (0x00016b45) list_single_graphic_heading_pane_g4_cp2

0x8b18,	// (0x000154e1) list_single_graphic_heading_pane_g5_cp2

0xa1bb,	// (0x00016b84) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa1bb,	// (0x00016b84) list_single_graphic_heading_pane_t1_cp2

0xa1d1,	// (0x00016b9a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1d1,	// (0x00016b9a) list_single_graphic_heading_pane_t2_cp2

0xa170,	// (0x00016b39) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa170,	// (0x00016b39) list_single_2graphic_pane_g1_cp2

0xa17c,	// (0x00016b45) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa17c,	// (0x00016b45) list_single_2graphic_pane_g2_cp2

0x8b18,	// (0x000154e1) list_single_2graphic_pane_g3_cp2

0xa18d,	// (0x00016b56) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa18d,	// (0x00016b56) list_single_2graphic_pane_g4_cp2

0xa199,	// (0x00016b62) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa199,	// (0x00016b62) list_single_2graphic_pane_t1_cp2

0x3c40,	// (0x00010609) list_highlight_pane_g10_cp1

0x9d58,	// (0x00016721) list_highlight_pane_g1_cp1

0x9d60,	// (0x00016729) list_highlight_pane_g2_cp1

0x9d68,	// (0x00016731) list_highlight_pane_g3_cp1

0x9d70,	// (0x00016739) list_highlight_pane_g4_cp1

0x9d78,	// (0x00016741) list_highlight_pane_g5_cp1

0x9d80,	// (0x00016749) list_highlight_pane_g6_cp1

0x9d88,	// (0x00016751) list_highlight_pane_g7_cp1

0x9d90,	// (0x00016759) list_highlight_pane_g8_cp1

0x9d98,	// (0x00016761) list_highlight_pane_g9_cp1

0x9c80,	// (0x00016649) form_field_slider_pane_t3

0x9c8e,	// (0x00016657) form_field_slider_pane_t4

0x9c9c,	// (0x00016665) slider_form_pane_ParamLimits

0x9c9c,	// (0x00016665) slider_form_pane

0x3db9,	// (0x00010782) control_abbreviations

0x3db9,	// (0x00010782) control_conventions

0x3db9,	// (0x00010782) control_definitions

0x3db9,	// (0x00010782) format_table_attribute

0xa462,	// (0x00016e2b) bg_popup_preview_window_pane_g9

0x3db9,	// (0x00010782) format_table_data2

0x3db9,	// (0x00010782) format_table_data3

0x3db9,	// (0x00010782) format_table_data_example

0x0008,

0x3db9,	// (0x00010782) intro_purpose

0xf8e0,	// (0x0001c2a9) bg_popup_preview_window_pane_g

0x3db9,	// (0x00010782) texts_category

0x3db9,	// (0x00010782) texts_graphics

0x8b88,	// (0x00015551) text_digital

0x8b97,	// (0x00015560) text_primary

0x8ba6,	// (0x0001556f) text_primary_small

0x8bb5,	// (0x0001557e) text_secondary

0x8bc4,	// (0x0001558d) text_title

0xac70,	// (0x00017639) bg_passive_tab_pane_g1_cp3_srt

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp3_srt

0xac79,	// (0x00017642) bg_passive_tab_pane_g3_cp3_srt

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp3_srt_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp3_srt

0xac82,	// (0x0001764b) tabs_4_active_pane_srt_g1

0xac8a,	// (0x00017653) tabs_4_active_pane_srt_t1_ParamLimits

0xac8a,	// (0x00017653) tabs_4_active_pane_srt_t1

0xac70,	// (0x00017639) bg_active_tab_pane_g1_cp3_copy1

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp3_copy1

0xac79,	// (0x00017642) bg_active_tab_pane_g3_cp3_copy1

0x3e35,	// (0x000107fe) tabs_2_long_active_pane_srt_ParamLimits

0x3e35,	// (0x000107fe) tabs_2_long_active_pane_srt

0x3e35,	// (0x000107fe) tabs_2_long_passive_pane_srt_ParamLimits

0x3e35,	// (0x000107fe) tabs_2_long_passive_pane_srt

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp4_srt_ParamLimits

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp4_srt

0xa895,	// (0x0001725e) bg_passive_tab_pane_g1_cp4_srt

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp4_srt

0xa89e,	// (0x00017267) bg_passive_tab_pane_g3_cp4_srt

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp4_srt_ParamLimits

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp4_srt

0xa8a7,	// (0x00017270) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8a7,	// (0x00017270) tabs_2_long_active_pane_srt_t1

0xa895,	// (0x0001725e) bg_active_tab_pane_g1_cp4_srt

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp4_srt

0xa89e,	// (0x00017267) bg_active_tab_pane_g3_cp4_srt

0x3e27,	// (0x000107f0) tabs_3_long_active_pane_srt_ParamLimits

0x3e27,	// (0x000107f0) tabs_3_long_active_pane_srt

0x3e27,	// (0x000107f0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3e27,	// (0x000107f0) tabs_3_long_passive_pane_cp_srt

0x3e27,	// (0x000107f0) tabs_3_long_passive_pane_srt_ParamLimits

0x3e27,	// (0x000107f0) tabs_3_long_passive_pane_srt

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp5_srt_ParamLimits

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp5_srt

0x88ae,	// (0x00015277) bg_passive_tab_pane_g1_cp5_srt

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp5_srt

0x88b7,	// (0x00015280) bg_passive_tab_pane_g3_cp5_srt

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp5_srt_ParamLimits

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp5_srt

0xa883,	// (0x0001724c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa883,	// (0x0001724c) tabs_3_long_active_pane_srt_t1

0x88ae,	// (0x00015277) bg_active_tab_pane_g1_cp5_srt

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp5_srt

0x88b7,	// (0x00015280) bg_active_tab_pane_g3_cp5_srt

0xa875,	// (0x0001723e) navi_text_pane_srt_t1

0xa86d,	// (0x00017236) navi_icon_pane_srt_g1

0x8d95,	// (0x0001575e) midp_editing_number_pane_srt

0x8bd3,	// (0x0001559c) midp_ticker_pane_srt

0x8d9d,	// (0x00015766) midp_ticker_pane_srt_g1

0x8da5,	// (0x0001576e) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0001c12c) midp_ticker_pane_srt_g

0x8dad,	// (0x00015776) midp_ticker_pane_srt_t1

0xa85e,	// (0x00017227) midp_editing_number_pane_t1_copy1

0x8bdb,	// (0x000155a4) listscroll_midp_pane

0x8bdb,	// (0x000155a4) midp_form_pane

0x8c4d,	// (0x00015616) midp_info_popup_window_ParamLimits

0x8c4d,	// (0x00015616) midp_info_popup_window

0x4382,	// (0x00010d4b) bg_popup_sub_pane_cp50_ParamLimits

0x4382,	// (0x00010d4b) bg_popup_sub_pane_cp50

0x99a0,	// (0x00016369) listscroll_midp_info_pane_ParamLimits

0x99a0,	// (0x00016369) listscroll_midp_info_pane

0x9980,	// (0x00016349) listscroll_form_midp_pane_ParamLimits

0x9980,	// (0x00016349) listscroll_form_midp_pane

0x998c,	// (0x00016355) scroll_bar_cp050

0x9960,	// (0x00016329) list_midp_pane

0xb9c1,	// (0x0001838a) signal_pane_g2_cp

0x989a,	// (0x00016263) listscroll_midp_info_pane_t1_ParamLimits

0x989a,	// (0x00016263) listscroll_midp_info_pane_t1

0x98b2,	// (0x0001627b) listscroll_midp_info_pane_t2_ParamLimits

0x98b2,	// (0x0001627b) listscroll_midp_info_pane_t2

0x98f0,	// (0x000162b9) listscroll_midp_info_pane_t3_ParamLimits

0x98f0,	// (0x000162b9) listscroll_midp_info_pane_t3

0x992a,	// (0x000162f3) listscroll_midp_info_pane_t4_ParamLimits

0x992a,	// (0x000162f3) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0001c1e4) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0001c1e4) listscroll_midp_info_pane_t

0x43f8,	// (0x00010dc1) scroll_pane_cp21

0x983a,	// (0x00016203) form_midp_field_choice_group_pane

0x9843,	// (0x0001620c) form_midp_field_text_pane

0x9880,	// (0x00016249) form_midp_field_time_pane

0x9888,	// (0x00016251) form_midp_gauge_slider_pane

0x9891,	// (0x0001625a) form_midp_gauge_wait_pane

0x3db9,	// (0x00010782) form_midp_image_pane

0x9808,	// (0x000161d1) list_single_midp_pane_ParamLimits

0x9808,	// (0x000161d1) list_single_midp_pane

0x97bd,	// (0x00016186) form_midp_field_text_pane_t1

0x9578,	// (0x00015f41) input_focus_pane_cp050

0x97f7,	// (0x000161c0) list_midp_form_text_pane

0x978c,	// (0x00016155) form_midp_field_choice_group_pane_t1

0x979a,	// (0x00016163) input_focus_pane_cp051

0x97ae,	// (0x00016177) list_midp_choice_pane

0x3db9,	// (0x00010782) status_idle_pane

0x9770,	// (0x00016139) form_midp_field_time_pane_t1

0x3c40,	// (0x00010609) wait_anim_pane_g2_copy1

0x977e,	// (0x00016147) form_midp_field_time_pane_t2

0x0001,

0x8cfd,	// (0x000156c6) aid_navinavi_width_2_pane

0xf816,	// (0x0001c1df) form_midp_field_time_pane_t

0x3db9,	// (0x00010782) input_focus_pane_cp052

0x3db9,	// (0x00010782) bg_input_focus_pane_cp040

0x9730,	// (0x000160f9) form_midp_gauge_slider_pane_t1

0x973e,	// (0x00016107) form_midp_gauge_slider_pane_t2

0x974c,	// (0x00016115) form_midp_gauge_slider_pane_t3

0x975a,	// (0x00016123) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0001c1d6) form_midp_gauge_slider_pane_t

0x9768,	// (0x00016131) form_midp_slider_pane

0x3e35,	// (0x000107fe) bg_input_focus_pane_cp041_ParamLimits

0x3e35,	// (0x000107fe) bg_input_focus_pane_cp041

0x96fd,	// (0x000160c6) form_midp_gauge_wait_pane_t1_ParamLimits

0x96fd,	// (0x000160c6) form_midp_gauge_wait_pane_t1

0x970f,	// (0x000160d8) form_midp_gauge_wait_pane_t2_ParamLimits

0x970f,	// (0x000160d8) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0001c1d1) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0001c1d1) form_midp_gauge_wait_pane_t

0x9721,	// (0x000160ea) form_midp_wait_pane_ParamLimits

0x9721,	// (0x000160ea) form_midp_wait_pane

0x96c7,	// (0x00016090) form_midp_image_pane_g1

0x96d0,	// (0x00016099) form_midp_image_pane_t1

0x96df,	// (0x000160a8) form_midp_image_pane_t2

0x96ee,	// (0x000160b7) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0001c1ca) form_midp_image_pane_t

0x96af,	// (0x00016078) list_single_midp_pane_g1

0x96b8,	// (0x00016081) list_single_midp_pane_t1

0x9686,	// (0x0001604f) list_midp_form_item_pane_ParamLimits

0x9686,	// (0x0001604f) list_midp_form_item_pane

0x8ca5,	// (0x0001566e) list_midp_form_item_pane_t1

0x8cb4,	// (0x0001567d) midp_ticker_pane_g1

0x8cc0,	// (0x00015689) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0001c112) midp_ticker_pane_g

0x8ccc,	// (0x00015695) midp_ticker_pane_t1

0xaade,	// (0x000174a7) midp_editing_number_pane_t1

0xaabc,	// (0x00017485) midp_editing_number_pane

0xaacb,	// (0x00017494) midp_ticker_pane

0xa83c,	// (0x00017205) ai_message_heading_pane

0x3db9,	// (0x00010782) bg_popup_window_pane_cp14

0xa844,	// (0x0001720d) listscroll_ai_message_pane

0xa7c6,	// (0x0001718f) ai_message_heading_pane_g1_ParamLimits

0xa7c6,	// (0x0001718f) ai_message_heading_pane_g1

0xa7d2,	// (0x0001719b) ai_message_heading_pane_g2_ParamLimits

0xa7d2,	// (0x0001719b) ai_message_heading_pane_g2

0xa7de,	// (0x000171a7) ai_message_heading_pane_g3_ParamLimits

0xa7de,	// (0x000171a7) ai_message_heading_pane_g3

0xa7ea,	// (0x000171b3) ai_message_heading_pane_g4_ParamLimits

0xa7ea,	// (0x000171b3) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0001c30b) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0001c30b) ai_message_heading_pane_g

0xa7f6,	// (0x000171bf) ai_message_heading_pane_t1_ParamLimits

0xa7f6,	// (0x000171bf) ai_message_heading_pane_t1

0xa810,	// (0x000171d9) ai_message_heading_pane_t2_ParamLimits

0xa810,	// (0x000171d9) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0001c314) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0001c314) ai_message_heading_pane_t

0xa822,	// (0x000171eb) bg_popup_heading_pane_cp1_ParamLimits

0xa822,	// (0x000171eb) bg_popup_heading_pane_cp1

0xa7b4,	// (0x0001717d) list_ai_message_pane_ParamLimits

0xa7b4,	// (0x0001717d) list_ai_message_pane

0x43f8,	// (0x00010dc1) scroll_pane_cp10

0xa750,	// (0x00017119) list_ai_message_pane_g1

0xa758,	// (0x00017121) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0001c2e8) list_ai_message_pane_g

0xa760,	// (0x00017129) list_ai_message_pane_t1_ParamLimits

0xa760,	// (0x00017129) list_ai_message_pane_t1

0xa775,	// (0x0001713e) list_ai_message_pane_t2_ParamLimits

0xa775,	// (0x0001713e) list_ai_message_pane_t2

0xa78a,	// (0x00017153) list_ai_message_pane_t3_ParamLimits

0xa78a,	// (0x00017153) list_ai_message_pane_t3

0xa79f,	// (0x00017168) list_ai_message_pane_t4_ParamLimits

0xa79f,	// (0x00017168) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0001c2ed) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0001c2ed) list_ai_message_pane_t

0xa73b,	// (0x00017104) cell_ai_soft_ind_pane_ParamLimits

0xa73b,	// (0x00017104) cell_ai_soft_ind_pane

0x8cde,	// (0x000156a7) cell_ai_soft_ind_pane_g1_ParamLimits

0x8cde,	// (0x000156a7) cell_ai_soft_ind_pane_g1

0x3db9,	// (0x00010782) grid_highlight_cp1

0x8ceb,	// (0x000156b4) text_secondary_cp56_ParamLimits

0x8ceb,	// (0x000156b4) text_secondary_cp56

0xa710,	// (0x000170d9) example_general_pane_ParamLimits

0xa710,	// (0x000170d9) example_general_pane

0xa71c,	// (0x000170e5) example_parent_pane_g1_ParamLimits

0xa71c,	// (0x000170e5) example_parent_pane_g1

0xa728,	// (0x000170f1) example_parent_pane_t1_ParamLimits

0xa728,	// (0x000170f1) example_parent_pane_t1

0x61d9,	// (0x00012ba2) popup_preview_text_window_ParamLimits

0x61d9,	// (0x00012ba2) popup_preview_text_window

0x8b04,	// (0x000154cd) list_single_pane_cp2_g4

0x4021,	// (0x000109ea) bg_popup_preview_window_pane_ParamLimits

0x4021,	// (0x000109ea) bg_popup_preview_window_pane

0xa46a,	// (0x00016e33) popup_preview_text_window_t1_ParamLimits

0xa46a,	// (0x00016e33) popup_preview_text_window_t1

0xa488,	// (0x00016e51) popup_preview_text_window_t2_ParamLimits

0xa488,	// (0x00016e51) popup_preview_text_window_t2

0xa4d1,	// (0x00016e9a) popup_preview_text_window_t3_ParamLimits

0xa4d1,	// (0x00016e9a) popup_preview_text_window_t3

0xa516,	// (0x00016edf) popup_preview_text_window_t4_ParamLimits

0xa516,	// (0x00016edf) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0001c2bc) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0001c2bc) popup_preview_text_window_t

0xa594,	// (0x00016f5d) scroll_pane_cp11

0x9458,	// (0x00015e21) bg_popup_preview_window_pane_g1

0xa42a,	// (0x00016df3) bg_popup_preview_window_pane_g2

0xa432,	// (0x00016dfb) bg_popup_preview_window_pane_g3

0xa43a,	// (0x00016e03) bg_popup_preview_window_pane_g4

0xa442,	// (0x00016e0b) bg_popup_preview_window_pane_g5

0xa44a,	// (0x00016e13) bg_popup_preview_window_pane_g6

0xa452,	// (0x00016e1b) bg_popup_preview_window_pane_g7

0xa45a,	// (0x00016e23) bg_popup_preview_window_pane_g8

0x53d8,	// (0x00011da1) aid_popup_width_pane

0x61b7,	// (0x00012b80) popup_midp_note_alarm_window_ParamLimits

0x61b7,	// (0x00012b80) popup_midp_note_alarm_window

0x426b,	// (0x00010c34) data_form_pane_ParamLimits

0x82c9,	// (0x00014c92) form_field_data_pane_g1

0x82d3,	// (0x00014c9c) form_field_data_pane_t1_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_ParamLimits

0x4285,	// (0x00010c4e) data_form_wide_pane_ParamLimits

0x4296,	// (0x00010c5f) form_field_data_wide_pane_g1

0x42b6,	// (0x00010c7f) form_field_data_wide_pane_t1_ParamLimits

0x40f5,	// (0x00010abe) input_focus_pane_cp6_ParamLimits

0x843f,	// (0x00014e08) input_popup_find_pane_g1_ParamLimits

0x843f,	// (0x00014e08) input_popup_find_pane_g1

0x5946,	// (0x0001230f) aid_navi_side_left_pane

0x595b,	// (0x00012324) aid_navi_side_right_pane

0x9e53,	// (0x0001681c) bg_popup_window_pane_cp30_ParamLimits

0x9e53,	// (0x0001681c) bg_popup_window_pane_cp30

0x9ecd,	// (0x00016896) popup_midp_note_alarm_window_g1_ParamLimits

0x9ecd,	// (0x00016896) popup_midp_note_alarm_window_g1

0x9efd,	// (0x000168c6) popup_midp_note_alarm_window_t1_ParamLimits

0x9efd,	// (0x000168c6) popup_midp_note_alarm_window_t1

0x9f9e,	// (0x00016967) popup_midp_note_alarm_window_t2_ParamLimits

0x9f9e,	// (0x00016967) popup_midp_note_alarm_window_t2

0xa04c,	// (0x00016a15) popup_midp_note_alarm_window_t3_ParamLimits

0xa04c,	// (0x00016a15) popup_midp_note_alarm_window_t3

0xa074,	// (0x00016a3d) popup_midp_note_alarm_window_t4_ParamLimits

0xa074,	// (0x00016a3d) popup_midp_note_alarm_window_t4

0xa094,	// (0x00016a5d) popup_midp_note_alarm_window_t5_ParamLimits

0xa094,	// (0x00016a5d) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0001c259) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0001c259) popup_midp_note_alarm_window_t

0xa140,	// (0x00016b09) wait_bar_pane_cp1_ParamLimits

0xa140,	// (0x00016b09) wait_bar_pane_cp1

0x3db9,	// (0x00010782) wait_anim_pane_copy1

0x3db9,	// (0x00010782) wait_border_pane_copy1

0x9b49,	// (0x00016512) wait_border_pane_g1_copy1

0x42d0,	// (0x00010c99) form_field_popup_pane_g1

0x82eb,	// (0x00014cb4) form_field_popup_pane_t1_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_cp7_ParamLimits

0x42d8,	// (0x00010ca1) list_form_pane_ParamLimits

0x42e4,	// (0x00010cad) form_field_popup_wide_pane_g1

0x42ec,	// (0x00010cb5) form_field_popup_wide_pane_t1_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_cp8_ParamLimits

0x4301,	// (0x00010cca) list_form_wide_pane_ParamLimits

0xad04,	// (0x000176cd) aid_size_cell_graphic_pane

0x835f,	// (0x00014d28) data_form_pane_t1_ParamLimits

0xaa89,	// (0x00017452) data_form_wide_pane_t1_ParamLimits

0x9000,	// (0x000159c9) bg_status_flat_pane

0x7966,	// (0x0001432f) title_pane_t1_ParamLimits

0x3def,	// (0x000107b8) title_pane_t2_ParamLimits

0x3e15,	// (0x000107de) title_pane_t3_ParamLimits

0xf557,	// (0x0001bf20) title_pane_t_ParamLimits

0x4860,	// (0x00011229) level_1_signal_ParamLimits

0x486d,	// (0x00011236) level_2_signal_ParamLimits

0x487a,	// (0x00011243) level_3_signal_ParamLimits

0x488f,	// (0x00011258) level_4_signal_ParamLimits

0x489c,	// (0x00011265) level_5_signal_ParamLimits

0x48a9,	// (0x00011272) level_6_signal_ParamLimits

0x48b6,	// (0x0001127f) level_7_signal_ParamLimits

0x4860,	// (0x00011229) level_1_battery_ParamLimits

0x486d,	// (0x00011236) level_2_battery_ParamLimits

0x487a,	// (0x00011243) level_3_battery_ParamLimits

0x488f,	// (0x00011258) level_4_battery_ParamLimits

0x489c,	// (0x00011265) level_5_battery_ParamLimits

0x48a9,	// (0x00011272) level_6_battery_ParamLimits

0x48b6,	// (0x0001127f) level_7_battery_ParamLimits

0x9d58,	// (0x00016721) bg_status_flat_pane_g1

0x9d60,	// (0x00016729) bg_status_flat_pane_g2

0x9d68,	// (0x00016731) bg_status_flat_pane_g3

0x9d70,	// (0x00016739) bg_status_flat_pane_g4

0x9d78,	// (0x00016741) bg_status_flat_pane_g5

0x9d80,	// (0x00016749) bg_status_flat_pane_g6

0x9d88,	// (0x00016751) bg_status_flat_pane_g7

0x79d6,	// (0x0001439f) tabs_3_active_pane_t1_ParamLimits

0x79d6,	// (0x0001439f) tabs_3_passive_pane_t1_ParamLimits

0x79f0,	// (0x000143b9) tabs_4_active_pane_t1_ParamLimits

0x79f0,	// (0x000143b9) tabs_4_1_passive_pane_t1_ParamLimits

0x8476,	// (0x00014e3f) tabs_2_active_pane_t1_ParamLimits

0x8476,	// (0x00014e3f) tabs_2_passive_pane_t1_ParamLimits

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp4_ParamLimits

0x8488,	// (0x00014e51) tabs_2_long_active_pane_t1_ParamLimits

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp4_ParamLimits

0x64fc,	// (0x00012ec5) list_single_midp_graphic_pane_t1_ParamLimits

0x4408,	// (0x00010dd1) bg_active_tab_pane_cp5_ParamLimits

0x84a7,	// (0x00014e70) tabs_3_long_active_pane_t1_ParamLimits

0x849b,	// (0x00014e64) bg_passive_tab_pane_cp5_ParamLimits

0x64fc,	// (0x00012ec5) list_single_midp_graphic_pane_t1

0x9000,	// (0x000159c9) bg_status_flat_pane_ParamLimits

0x90c9,	// (0x00015a92) indicator_pane_cp2_ParamLimits

0x90c9,	// (0x00015a92) indicator_pane_cp2

0x91f4,	// (0x00015bbd) navi_pane_srt_ParamLimits

0x91f4,	// (0x00015bbd) navi_pane_srt

0x9218,	// (0x00015be1) popup_clock_digital_analogue_window_cp1

0x3e93,	// (0x0001085c) indicator_pane_t1

0x8bd3,	// (0x0001559c) copy_highlight_pane

0x8bd3,	// (0x0001559c) cursor_graphics_pane

0x8bd3,	// (0x0001559c) graphic_within_text_pane

0x8bd3,	// (0x0001559c) link_highlight_pane

0xa557,	// (0x00016f20) popup_preview_text_window_t5_ParamLimits

0xa557,	// (0x00016f20) popup_preview_text_window_t5

0x8d05,	// (0x000156ce) cursor_digital_pane

0x8d05,	// (0x000156ce) cursor_primary_pane

0x8d16,	// (0x000156df) cursor_primary_small_pane

0x8d1e,	// (0x000156e7) cursor_secondary_pane

0x8d26,	// (0x000156ef) cursor_title_pane

0x8d05,	// (0x000156ce) link_highlight_digital_pane

0x8d0d,	// (0x000156d6) link_highlight_primary_pane

0x8d16,	// (0x000156df) link_highlight_primary_small_pane

0x8d1e,	// (0x000156e7) link_highlight_secondary_pane

0x8d26,	// (0x000156ef) link_highlight_title_pane

0x8d05,	// (0x000156ce) copy_highlight_digital_pane

0x8d05,	// (0x000156ce) copy_highlight_primary_pane

0x8d16,	// (0x000156df) copy_highlight_primary_small_pane

0x8d1e,	// (0x000156e7) copy_highlight_secondary_pane

0x8d26,	// (0x000156ef) copy_highlight_title_pane

0x8d1e,	// (0x000156e7) graphic_text_digital_pane

0x9df6,	// (0x000167bf) graphic_text_primary_pane

0x9dff,	// (0x000167c8) graphic_text_primary_small_pane

0x8d16,	// (0x000156df) graphic_text_secondary_pane

0x8d05,	// (0x000156ce) graphic_text_title_pane

0x8d2e,	// (0x000156f7) cursor_primary_pane_g1

0x9de8,	// (0x000167b1) cursor_text_primary_t1

0x9dd0,	// (0x00016799) cursor_primary_small_pane_g1

0x9dda,	// (0x000167a3) cursor_text_primary_small_t1

0x9db8,	// (0x00016781) cursor_primary_small_pane_g1_copy1

0x9dc2,	// (0x0001678b) cursor_text_primary_small_t1_copy1

0x9da0,	// (0x00016769) cursor_text_title_t1

0x9dae,	// (0x00016777) cursor_title_pane_g1

0x8d2e,	// (0x000156f7) cursor_digital_pane_g1

0x8d38,	// (0x00015701) cursor_text_digital_t1

0x8d46,	// (0x0001570f) link_highlight_primary_pane_g1

0x9d49,	// (0x00016712) link_highlight_primary_pane_t1

0x8d46,	// (0x0001570f) link_highlight_primary_small_pane_g1

0x8d4e,	// (0x00015717) link_highlight_primary_small_pane_t1

0x8d46,	// (0x0001570f) link_highlight_secondary_pane_g1

0x8d5d,	// (0x00015726) link_highlight_secondary_pane_t1

0x9cae,	// (0x00016677) link_highlight_title_pane_g1

0x9cc5,	// (0x0001668e) link_highlight_title_pane_t1

0x9cae,	// (0x00016677) link_highlight_digital_pane_g1

0x9cb6,	// (0x0001667f) link_highlight_digital_pane_t1

0x9b68,	// (0x00016531) copy_highlight_primary_pane_g1

0x9b8e,	// (0x00016557) copy_highlight_primary_pane_t1

0x9b68,	// (0x00016531) copy_highlight_primary_small_pane_g1

0x9b7f,	// (0x00016548) copy_highlight_primary_small_pane_t1

0x8d6c,	// (0x00015735) copy_highlight_secondary_pane_g1

0x8d74,	// (0x0001573d) copy_highlight_secondary_pane_t1

0x9b68,	// (0x00016531) copy_highlight_title_pane_g1

0x9b70,	// (0x00016539) copy_highlight_title_pane_t1

0x9b68,	// (0x00016531) copy_highlight_digital_pane_g1

0xaed2,	// (0x0001789b) copy_highlight_digital_pane_t1

0xae26,	// (0x000177ef) graphic_text_primary_pane_g1

0xaeb6,	// (0x0001787f) graphic_text_primary_pane_t1

0xaec4,	// (0x0001788d) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0001c388) graphic_text_primary_pane_t

0xae92,	// (0x0001785b) graphic_text_primary_small_pane_g1

0xae9a,	// (0x00017863) graphic_text_primary_small_pane_t1

0xaea8,	// (0x00017871) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0001c383) graphic_text_primary_small_pane_t

0xae6e,	// (0x00017837) graphic_text_secondary_pane_g1

0xae76,	// (0x0001783f) graphic_text_secondary_pane_t1

0xae84,	// (0x0001784d) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0001c37e) graphic_text_secondary_pane_t

0xae4a,	// (0x00017813) graphic_text_title_pane_g1

0xae52,	// (0x0001781b) graphic_text_title_pane_t1

0xae60,	// (0x00017829) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0001c379) graphic_text_title_pane_t

0xae26,	// (0x000177ef) graphic_text_digital_pane_g1

0xae2e,	// (0x000177f7) graphic_text_digital_pane_t1

0xae3c,	// (0x00017805) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0001c374) graphic_text_digital_pane_t

0x3e35,	// (0x000107fe) navi_icon_pane_srt_ParamLimits

0x3e35,	// (0x000107fe) navi_icon_pane_srt

0x3db9,	// (0x00010782) navi_midp_pane_srt

0x3db9,	// (0x00010782) navi_navi_pane_srt

0x3e35,	// (0x000107fe) navi_text_pane_srt_ParamLimits

0x3e35,	// (0x000107fe) navi_text_pane_srt

0xadf1,	// (0x000177ba) navi_navi_icon_text_pane_srt

0xadf9,	// (0x000177c2) navi_navi_pane_srt_g1_ParamLimits

0xadf9,	// (0x000177c2) navi_navi_pane_srt_g1

0xae0b,	// (0x000177d4) navi_navi_pane_srt_g2_ParamLimits

0xae0b,	// (0x000177d4) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0001c36f) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0001c36f) navi_navi_pane_srt_g

0xae1d,	// (0x000177e6) navi_navi_tabs_pane_srt

0xadf1,	// (0x000177ba) navi_navi_text_pane_srt

0xadf1,	// (0x000177ba) navi_navi_volume_pane_srt

0xade2,	// (0x000177ab) navi_navi_text_pane_srt_t1

0x687c,	// (0x00013245) navi_navi_volume_pane_srt_g1

0x6884,	// (0x0001324d) volume_small_pane_srt_ParamLimits

0x6884,	// (0x0001324d) volume_small_pane_srt

0x5c1d,	// (0x000125e6) volume_small_pane_srt_g1_ParamLimits

0x5c1d,	// (0x000125e6) volume_small_pane_srt_g1

0x5c2d,	// (0x000125f6) volume_small_pane_srt_g2_ParamLimits

0x5c2d,	// (0x000125f6) volume_small_pane_srt_g2

0x5c3e,	// (0x00012607) volume_small_pane_srt_g3_ParamLimits

0x5c3e,	// (0x00012607) volume_small_pane_srt_g3

0x5c4f,	// (0x00012618) volume_small_pane_srt_g4_ParamLimits

0x5c4f,	// (0x00012618) volume_small_pane_srt_g4

0x5c60,	// (0x00012629) volume_small_pane_srt_g5_ParamLimits

0x5c60,	// (0x00012629) volume_small_pane_srt_g5

0x5c71,	// (0x0001263a) volume_small_pane_srt_g6_ParamLimits

0x5c71,	// (0x0001263a) volume_small_pane_srt_g6

0x5c82,	// (0x0001264b) volume_small_pane_srt_g7_ParamLimits

0x5c82,	// (0x0001264b) volume_small_pane_srt_g7

0x5c93,	// (0x0001265c) volume_small_pane_srt_g8_ParamLimits

0x5c93,	// (0x0001265c) volume_small_pane_srt_g8

0x5ca4,	// (0x0001266d) volume_small_pane_srt_g9_ParamLimits

0x5ca4,	// (0x0001266d) volume_small_pane_srt_g9

0x5cb5,	// (0x0001267e) volume_small_pane_srt_g10_ParamLimits

0x5cb5,	// (0x0001267e) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0001c117) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0001c117) volume_small_pane_srt_g

0x7b86,	// (0x0001454f) query_popup_data_pane_cp2

0xadc8,	// (0x00017791) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadc8,	// (0x00017791) navi_navi_icon_text_pane_srt_t1

0x9df6,	// (0x000167bf) navi_tabs_2_long_pane_srt

0x9df6,	// (0x000167bf) navi_tabs_2_pane_srt

0x9df6,	// (0x000167bf) navi_tabs_3_long_pane_srt

0x9df6,	// (0x000167bf) navi_tabs_3_pane_srt

0x9df6,	// (0x000167bf) navi_tabs_4_pane_srt

0x685c,	// (0x00013225) tabs_2_active_pane_srt_ParamLimits

0x685c,	// (0x00013225) tabs_2_active_pane_srt

0x686c,	// (0x00013235) tabs_2_passive_pane_srt_ParamLimits

0x686c,	// (0x00013235) tabs_2_passive_pane_srt

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp1_srt

0xad94,	// (0x0001775d) bg_passive_tab_pane_g1_cp1_srt

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp1_srt

0xad9d,	// (0x00017766) bg_passive_tab_pane_g3_cp1_srt

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp1_srt_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp1_srt

0xada6,	// (0x0001776f) tabs_2_active_pane_srt_g1

0xadae,	// (0x00017777) tabs_2_active_pane_srt_t1_ParamLimits

0xadae,	// (0x00017777) tabs_2_active_pane_srt_t1

0xad94,	// (0x0001775d) bg_active_tab_pane_g1_cp1_srt

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp1_srt

0xad9d,	// (0x00017766) bg_active_tab_pane_g3_cp1_srt

0x6829,	// (0x000131f2) tabs_3_active_pane_srt_ParamLimits

0x6829,	// (0x000131f2) tabs_3_active_pane_srt

0x683a,	// (0x00013203) tabs_3_passive_pane_cp_srt_ParamLimits

0x683a,	// (0x00013203) tabs_3_passive_pane_cp_srt

0x684b,	// (0x00013214) tabs_3_passive_pane_srt_ParamLimits

0x684b,	// (0x00013214) tabs_3_passive_pane_srt

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f21,	// (0x000158ea) bg_passive_tab_pane_cp2_srt

0x8d83,	// (0x0001574c) bg_passive_tab_pane_g1_cp2_srt

0x8824,	// (0x000151ed) bg_passive_tab_pane_g2_cp2_srt

0x8d8c,	// (0x00015755) bg_passive_tab_pane_g3_cp2_srt

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp2_srt_ParamLimits

0x3e35,	// (0x000107fe) bg_active_tab_pane_cp2_srt

0xad7a,	// (0x00017743) tabs_3_active_pane_srt_g1

0xad82,	// (0x0001774b) tabs_3_active_pane_srt_t1_ParamLimits

0xad82,	// (0x0001774b) tabs_3_active_pane_srt_t1

0x8d83,	// (0x0001574c) bg_active_tab_pane_g1_cp2_srt

0x8824,	// (0x000151ed) bg_active_tab_pane_g2_cp2_srt

0x8d8c,	// (0x00015755) bg_active_tab_pane_g3_cp2_srt

0x67e1,	// (0x000131aa) tabs_4_active_pane_srt_ParamLimits

0x67e1,	// (0x000131aa) tabs_4_active_pane_srt

0x67f3,	// (0x000131bc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x67f3,	// (0x000131bc) tabs_4_passive_pane_cp2_srt

0x5e24,	// (0x000127ed) aid_size_cell_toolbar

0x849b,	// (0x00014e64) main_idle_act_pane_ParamLimits

0x5fe9,	// (0x000129b2) popup_large_graphic_colour_window_ParamLimits

0x6354,	// (0x00012d1d) popup_toolbar_window_ParamLimits

0x6354,	// (0x00012d1d) popup_toolbar_window

0xab09,	// (0x000174d2) list_single_graphic_2heading_pane_ParamLimits

0xab09,	// (0x000174d2) list_single_graphic_2heading_pane

0x4729,	// (0x000110f2) aid_size_cell_apps_grid_lsc_pane

0x473b,	// (0x00011104) aid_size_cell_apps_grid_prt_pane

0x8f21,	// (0x000158ea) bg_wml_button_pane_cp1_ParamLimits

0x8f21,	// (0x000158ea) bg_wml_button_pane_cp1

0x97bd,	// (0x00016186) form_midp_field_text_pane_t1_ParamLimits

0x9578,	// (0x00015f41) input_focus_pane_cp050_ParamLimits

0x97f7,	// (0x000161c0) list_midp_form_text_pane_ParamLimits

0x979a,	// (0x00016163) input_focus_pane_cp051_ParamLimits

0x97ae,	// (0x00016177) list_midp_choice_pane_ParamLimits

0x962e,	// (0x00015ff7) list_single_2graphic_pane_cp3_ParamLimits

0x962e,	// (0x00015ff7) list_single_2graphic_pane_cp3

0x9653,	// (0x0001601c) list_single_midp_graphic_pane_ParamLimits

0x9653,	// (0x0001601c) list_single_midp_graphic_pane

0x6401,	// (0x00012dca) list_single_graphic_2heading_pane_g1_ParamLimits

0x6401,	// (0x00012dca) list_single_graphic_2heading_pane_g1

0x640d,	// (0x00012dd6) list_single_graphic_2heading_pane_g4_ParamLimits

0x640d,	// (0x00012dd6) list_single_graphic_2heading_pane_g4

0x6419,	// (0x00012de2) list_single_graphic_2heading_pane_g5_ParamLimits

0x6419,	// (0x00012de2) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0001c16a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0001c16a) list_single_graphic_2heading_pane_g

0x6425,	// (0x00012dee) list_single_graphic_2heading_pane_t1_ParamLimits

0x6425,	// (0x00012dee) list_single_graphic_2heading_pane_t1

0x6439,	// (0x00012e02) list_single_graphic_2heading_pane_t2_ParamLimits

0x6439,	// (0x00012e02) list_single_graphic_2heading_pane_t2

0x6453,	// (0x00012e1c) list_single_graphic_2heading_pane_t3_ParamLimits

0x6453,	// (0x00012e1c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0001c171) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0001c171) list_single_graphic_2heading_pane_t

0x9374,	// (0x00015d3d) bg_popup_sub_pane_cp2

0x939e,	// (0x00015d67) grid_toobar_pane

0x646b,	// (0x00012e34) cell_toolbar_pane_ParamLimits

0x646b,	// (0x00012e34) cell_toolbar_pane

0x93fc,	// (0x00015dc5) cell_toolbar_pane_g1_ParamLimits

0x93fc,	// (0x00015dc5) cell_toolbar_pane_g1

0x9410,	// (0x00015dd9) cell_toolbar_pane_g2_ParamLimits

0x9410,	// (0x00015dd9) cell_toolbar_pane_g2

0x0001,

0xf7b6,	// (0x0001c17f) cell_toolbar_pane_g_ParamLimits

0xf7b6,	// (0x0001c17f) cell_toolbar_pane_g

0x9432,	// (0x00015dfb) grid_highlight_pane_cp2_ParamLimits

0x9432,	// (0x00015dfb) grid_highlight_pane_cp2

0x944c,	// (0x00015e15) toolbar_button_pane

0x9458,	// (0x00015e21) toolbar_button_pane_g1

0x9460,	// (0x00015e29) toolbar_button_pane_g2

0x9468,	// (0x00015e31) toolbar_button_pane_g3

0x9470,	// (0x00015e39) toolbar_button_pane_g4

0x9478,	// (0x00015e41) toolbar_button_pane_g5

0x9480,	// (0x00015e49) toolbar_button_pane_g6

0x9488,	// (0x00015e51) toolbar_button_pane_g7

0x9490,	// (0x00015e59) toolbar_button_pane_g8

0x9498,	// (0x00015e61) toolbar_button_pane_g9

0x0009,

0xf7bb,	// (0x0001c184) toolbar_button_pane_g

0x64a3,	// (0x00012e6c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64a3,	// (0x00012e6c) list_single_2graphic_pane_g1_cp3

0x64af,	// (0x00012e78) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64af,	// (0x00012e78) list_single_2graphic_pane_g2_cp3

0x64c0,	// (0x00012e89) list_single_2graphic_pane_g3_cp3

0x64c8,	// (0x00012e91) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64c8,	// (0x00012e91) list_single_2graphic_pane_g4_cp3

0x64d4,	// (0x00012e9d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x64d4,	// (0x00012e9d) list_single_2graphic_pane_t1_cp3

0x64f0,	// (0x00012eb9) list_single_midp_graphic_pane_g2_ParamLimits

0x64f0,	// (0x00012eb9) list_single_midp_graphic_pane_g2

0x5e2c,	// (0x000127f5) aid_zoom_text_primary

0x5e34,	// (0x000127fd) aid_zoom_text_secondary

0x8e3d,	// (0x00015806) status_small_pane_g7_ParamLimits

0x8e3d,	// (0x00015806) status_small_pane_g7

0x8e60,	// (0x00015829) status_small_pane_t1_ParamLimits

0x7949,	// (0x00014312) title_pane_g2

0x0003,

0xf54e,	// (0x0001bf17) title_pane_g

0x7be0,	// (0x000145a9) aid_size_cell_colour_1_pane_ParamLimits

0x7be0,	// (0x000145a9) aid_size_cell_colour_1_pane

0x7bf4,	// (0x000145bd) aid_size_cell_colour_2_pane_ParamLimits

0x7bf4,	// (0x000145bd) aid_size_cell_colour_2_pane

0x7c08,	// (0x000145d1) aid_size_cell_colour_3_pane_ParamLimits

0x7c08,	// (0x000145d1) aid_size_cell_colour_3_pane

0x7c1c,	// (0x000145e5) aid_size_cell_colour_4_pane_ParamLimits

0x7c1c,	// (0x000145e5) aid_size_cell_colour_4_pane

0x5883,	// (0x0001224c) title_pane_stacon_g1_ParamLimits

0x5883,	// (0x0001224c) title_pane_stacon_g1

0x9be5,	// (0x000165ae) popup_note_wait_window_g3_ParamLimits

0x9be5,	// (0x000165ae) popup_note_wait_window_g3

0x9c5b,	// (0x00016624) popup_note_wait_window_t5_ParamLimits

0x9c5b,	// (0x00016624) popup_note_wait_window_t5

0x3db9,	// (0x00010782) main_feb_china_hwr_fs_writing_pane

0x5ed0,	// (0x00012899) popup_feb_china_hwr_fs_window_ParamLimits

0x5ed0,	// (0x00012899) popup_feb_china_hwr_fs_window

0x6512,	// (0x00012edb) aid_size_cell_hwr_fs_ParamLimits

0x6512,	// (0x00012edb) aid_size_cell_hwr_fs

0x9578,	// (0x00015f41) bg_popup_sub_pane_cp3_ParamLimits

0x9578,	// (0x00015f41) bg_popup_sub_pane_cp3

0x6527,	// (0x00012ef0) grid_hwr_fs_pane_ParamLimits

0x6527,	// (0x00012ef0) grid_hwr_fs_pane

0x653f,	// (0x00012f08) linegrid_hwr_fs_pane_ParamLimits

0x653f,	// (0x00012f08) linegrid_hwr_fs_pane

0x654f,	// (0x00012f18) cell_hwr_fs_pane_ParamLimits

0x654f,	// (0x00012f18) cell_hwr_fs_pane

0x9584,	// (0x00015f4d) linegrid_hwr_fs_pane_g1_ParamLimits

0x9584,	// (0x00015f4d) linegrid_hwr_fs_pane_g1

0x9590,	// (0x00015f59) linegrid_hwr_fs_pane_g2_ParamLimits

0x9590,	// (0x00015f59) linegrid_hwr_fs_pane_g2

0x95a2,	// (0x00015f6b) linegrid_hwr_fs_pane_g3_ParamLimits

0x95a2,	// (0x00015f6b) linegrid_hwr_fs_pane_g3

0x6571,	// (0x00012f3a) linegrid_hwr_fs_pane_g4_ParamLimits

0x6571,	// (0x00012f3a) linegrid_hwr_fs_pane_g4

0x658b,	// (0x00012f54) linegrid_hwr_fs_pane_g5_ParamLimits

0x658b,	// (0x00012f54) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0001c1af) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0001c1af) linegrid_hwr_fs_pane_g

0x95ae,	// (0x00015f77) cell_hwr_fs_pane_g1_ParamLimits

0x95ae,	// (0x00015f77) cell_hwr_fs_pane_g1

0x92ae,	// (0x00015c77) cell_hwr_fs_pane_g2_ParamLimits

0x92ae,	// (0x00015c77) cell_hwr_fs_pane_g2

0x95c4,	// (0x00015f8d) cell_hwr_fs_pane_g3_ParamLimits

0x95c4,	// (0x00015f8d) cell_hwr_fs_pane_g3

0x95d1,	// (0x00015f9a) cell_hwr_fs_pane_g4_ParamLimits

0x95d1,	// (0x00015f9a) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0001c1ba) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001c1ba) cell_hwr_fs_pane_g

0x65a1,	// (0x00012f6a) cell_hwr_fs_pane_t1

0x3db9,	// (0x00010782) grid_highlight_pane_cp6

0x3db9,	// (0x00010782) main_idle_act2_pane

0x43df,	// (0x00010da8) aid_inside_area_popup_secondary

0xa27a,	// (0x00016c43) aid_inside_area_window_primary_ParamLimits

0xa27a,	// (0x00016c43) aid_inside_area_window_primary

0xaee1,	// (0x000178aa) ai2_news_ticker_pane

0xaee9,	// (0x000178b2) aid_size_cell_ai1_link_ParamLimits

0xaee9,	// (0x000178b2) aid_size_cell_ai1_link

0xaf03,	// (0x000178cc) popup_ai2_data_window_ParamLimits

0xaf03,	// (0x000178cc) popup_ai2_data_window

0xaf19,	// (0x000178e2) popup_ai2_link_window_ParamLimits

0xaf19,	// (0x000178e2) popup_ai2_link_window

0x9578,	// (0x00015f41) bg_popup_sub_pane_cp4_ParamLimits

0x9578,	// (0x00015f41) bg_popup_sub_pane_cp4

0xaf2d,	// (0x000178f6) grid_ai2_link_pane_ParamLimits

0xaf2d,	// (0x000178f6) grid_ai2_link_pane

0xaf44,	// (0x0001790d) popup_ai2_link_window_g1_ParamLimits

0xaf44,	// (0x0001790d) popup_ai2_link_window_g1

0xaf50,	// (0x00017919) popup_ai2_link_window_g2_ParamLimits

0xaf50,	// (0x00017919) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0001c38d) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0001c38d) popup_ai2_link_window_g

0xaf5f,	// (0x00017928) ai2_mp_button_pane

0xaf67,	// (0x00017930) ai2_mp_volume_pane

0x979a,	// (0x00016163) bg_popup_sub_pane_cp5_ParamLimits

0x979a,	// (0x00016163) bg_popup_sub_pane_cp5

0xaf6f,	// (0x00017938) heading_ai2_gene_pane_ParamLimits

0xaf6f,	// (0x00017938) heading_ai2_gene_pane

0xaf7b,	// (0x00017944) list_ai2_gene_pane_ParamLimits

0xaf7b,	// (0x00017944) list_ai2_gene_pane

0xafc3,	// (0x0001798c) cell_ai2_link_pane_ParamLimits

0xafc3,	// (0x0001798c) cell_ai2_link_pane

0xafd9,	// (0x000179a2) cell_ai2_link_pane_g1

0x3db9,	// (0x00010782) grid_highlight_pane_cp7

0x6899,	// (0x00013262) ai2_mp_volume_pane_g1

0xb0a9,	// (0x00017a72) ai2_mp_volume_pane_g2

0xb01e,	// (0x000179e7) list_ai2_gene_pane_t1

0xb0b1,	// (0x00017a7a) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0001c3a6) ai2_mp_volume_pane_g

0x68a1,	// (0x0001326a) volume_small_pane_cp3

0xb0b9,	// (0x00017a82) aid_size_cell_ai2_button

0xb0c1,	// (0x00017a8a) grid_ai2_button_pane

0xb0ca,	// (0x00017a93) cell_ai2_button_pane_ParamLimits

0xb0ca,	// (0x00017a93) cell_ai2_button_pane

0x3c40,	// (0x00010609) cell_ai2_button_pane_g1

0x3db9,	// (0x00010782) grid_highlight_pane_cp8

0xb069,	// (0x00017a32) ai2_gene_pane_t1_ParamLimits

0xb069,	// (0x00017a32) ai2_gene_pane_t1

0x5e1a,	// (0x000127e3) aid_height_parent_landscape

0xa8f5,	// (0x000172be) aid_height_set_list

0xa906,	// (0x000172cf) aid_size_parent

0xad04,	// (0x000176cd) aid_size_cell_graphic_pane_ParamLimits

0xaf8b,	// (0x00017954) popup_ai2_data_window_g1_ParamLimits

0xaf8b,	// (0x00017954) popup_ai2_data_window_g1

0xaf97,	// (0x00017960) ai2_news_ticker_pane_g1

0xaf9f,	// (0x00017968) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0001c392) ai2_news_ticker_pane_g

0xafa7,	// (0x00017970) ai2_news_ticker_pane_t1

0xafb5,	// (0x0001797e) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0001c397) ai2_news_ticker_pane_t

0xafe2,	// (0x000179ab) heading_ai2_gene_pane_g1

0xafea,	// (0x000179b3) heading_ai2_gene_pane_t1_ParamLimits

0xafea,	// (0x000179b3) heading_ai2_gene_pane_t1

0xafff,	// (0x000179c8) list_highlight_pane_cp6

0xb007,	// (0x000179d0) ai2_gene_pane_ParamLimits

0xb007,	// (0x000179d0) ai2_gene_pane

0xb02c,	// (0x000179f5) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0001c39c) list_ai2_gene_pane_t

0xb03a,	// (0x00017a03) list_highlight_pane_cp8_ParamLimits

0xb03a,	// (0x00017a03) list_highlight_pane_cp8

0xb04b,	// (0x00017a14) ai2_gene_pane_g1_ParamLimits

0xb04b,	// (0x00017a14) ai2_gene_pane_g1

0xb05d,	// (0x00017a26) ai2_gene_pane_g2_ParamLimits

0xb05d,	// (0x00017a26) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0001c3a1) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0001c3a1) ai2_gene_pane_g

0x41a0,	// (0x00010b69) scroll_pane_cp12

0x5dd7,	// (0x000127a0) control_pane_t3_ParamLimits

0x5dd7,	// (0x000127a0) control_pane_t3

0x8e51,	// (0x0001581a) status_small_pane_g8_ParamLimits

0x8e51,	// (0x0001581a) status_small_pane_g8

0x5fb2,	// (0x0001297b) popup_find_window_ParamLimits

0x61cb,	// (0x00012b94) popup_note_image_window_ParamLimits

0x93da,	// (0x00015da3) list_double2_graphic_pane_vc_g1_ParamLimits

0x93da,	// (0x00015da3) list_double2_graphic_pane_vc_g1

0x41b1,	// (0x00010b7a) list_double2_graphic_pane_vc_g2_ParamLimits

0x41b1,	// (0x00010b7a) list_double2_graphic_pane_vc_g2

0x41bd,	// (0x00010b86) list_double2_graphic_pane_vc_g3_ParamLimits

0x41bd,	// (0x00010b86) list_double2_graphic_pane_vc_g3

0x0002,

0xf7af,	// (0x0001c178) list_double2_graphic_pane_vc_g_ParamLimits

0xf7af,	// (0x0001c178) list_double2_graphic_pane_vc_g

0x93e6,	// (0x00015daf) list_double2_graphic_pane_vc_t1_ParamLimits

0x93e6,	// (0x00015daf) list_double2_graphic_pane_vc_t1

0x41b1,	// (0x00010b7a) list_single_heading_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_single_heading_pane_vc_g1

0x41bd,	// (0x00010b86) list_single_heading_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_single_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_single_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_single_heading_pane_vc_g

0x94a0,	// (0x00015e69) list_single_heading_pane_vc_t1_ParamLimits

0x94a0,	// (0x00015e69) list_single_heading_pane_vc_t1

0x94b6,	// (0x00015e7f) list_single_heading_pane_vc_t2_ParamLimits

0x94b6,	// (0x00015e7f) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0001c19e) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001c19e) list_single_heading_pane_vc_t

0x94c8,	// (0x00015e91) list_setting_number_pane_vc_g1_ParamLimits

0x94c8,	// (0x00015e91) list_setting_number_pane_vc_g1

0x94d4,	// (0x00015e9d) list_setting_number_pane_vc_g2_ParamLimits

0x94d4,	// (0x00015e9d) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c1a3) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c1a3) list_setting_number_pane_vc_g

0x94e0,	// (0x00015ea9) list_setting_number_pane_vc_t1_ParamLimits

0x94e0,	// (0x00015ea9) list_setting_number_pane_vc_t1

0x94f4,	// (0x00015ebd) list_setting_number_pane_vc_t2_ParamLimits

0x94f4,	// (0x00015ebd) list_setting_number_pane_vc_t2

0x9510,	// (0x00015ed9) list_setting_number_pane_vc_t3_ParamLimits

0x9510,	// (0x00015ed9) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c1a8) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c1a8) list_setting_number_pane_vc_t

0x953c,	// (0x00015f05) set_value_pane_vc_ParamLimits

0x953c,	// (0x00015f05) set_value_pane_vc

0xab09,	// (0x000174d2) list_double2_graphic_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double2_graphic_pane_vc

0xab09,	// (0x000174d2) list_double2_large_graphic_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double2_large_graphic_pane_vc

0xab09,	// (0x000174d2) list_double2_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double2_pane_vc

0xab09,	// (0x000174d2) list_double_graphic_heading_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_graphic_heading_pane_vc

0xab09,	// (0x000174d2) list_double_graphic_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_graphic_pane_vc

0xab09,	// (0x000174d2) list_double_heading_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_heading_pane_vc

0xab1b,	// (0x000174e4) list_double_large_graphic_pane_vc_ParamLimits

0xab1b,	// (0x000174e4) list_double_large_graphic_pane_vc

0xab09,	// (0x000174d2) list_double_number_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_number_pane_vc

0xab09,	// (0x000174d2) list_double_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_pane_vc

0xab09,	// (0x000174d2) list_double_time_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_double_time_pane_vc

0xab09,	// (0x000174d2) list_setting_number_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_setting_number_pane_vc

0xab09,	// (0x000174d2) list_setting_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_setting_pane_vc

0xab09,	// (0x000174d2) list_single_graphic_heading_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_single_graphic_heading_pane_vc

0xab09,	// (0x000174d2) list_single_heading_pane_vc_ParamLimits

0xab09,	// (0x000174d2) list_single_heading_pane_vc

0xab39,	// (0x00017502) list_single_number_heading_pane_vc_ParamLimits

0xab39,	// (0x00017502) list_single_number_heading_pane_vc

0xb0fe,	// (0x00017ac7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb0fe,	// (0x00017ac7) list_double_graphic_heading_pane_vc_g1

0x41b1,	// (0x00010b7a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x41b1,	// (0x00010b7a) list_double_graphic_heading_pane_vc_g2

0x41bd,	// (0x00010b86) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x41bd,	// (0x00010b86) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0001c3ad) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0001c3ad) list_double_graphic_heading_pane_vc_g

0xb10a,	// (0x00017ad3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb10a,	// (0x00017ad3) list_double_graphic_heading_pane_vc_t1

0xb11e,	// (0x00017ae7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb11e,	// (0x00017ae7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0001c3b4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0001c3b4) list_double_graphic_heading_pane_vc_t

0x94c8,	// (0x00015e91) list_setting_pane_vc_g1_ParamLimits

0x94c8,	// (0x00015e91) list_setting_pane_vc_g1

0x94d4,	// (0x00015e9d) list_setting_pane_vc_g2_ParamLimits

0x94d4,	// (0x00015e9d) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c1a3) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c1a3) list_setting_pane_vc_g

0xb336,	// (0x00017cff) list_setting_pane_vc_t1_ParamLimits

0xb336,	// (0x00017cff) list_setting_pane_vc_t1

0xb352,	// (0x00017d1b) list_setting_pane_vc_t2_ParamLimits

0xb352,	// (0x00017d1b) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001c3f7) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c3f7) list_setting_pane_vc_t

0x953c,	// (0x00015f05) set_value_pane_cp_vc_ParamLimits

0x953c,	// (0x00015f05) set_value_pane_cp_vc

0x41b1,	// (0x00010b7a) list_single_number_heading_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_single_number_heading_pane_vc_g1

0x41bd,	// (0x00010b86) list_single_number_heading_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_single_number_heading_pane_vc_g

0xb36c,	// (0x00017d35) list_single_number_heading_pane_vc_t1_ParamLimits

0xb36c,	// (0x00017d35) list_single_number_heading_pane_vc_t1

0xb382,	// (0x00017d4b) list_single_number_heading_pane_vc_t2_ParamLimits

0xb382,	// (0x00017d4b) list_single_number_heading_pane_vc_t2

0xb394,	// (0x00017d5d) list_single_number_heading_pane_vc_t3_ParamLimits

0xb394,	// (0x00017d5d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0001c3fc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0001c3fc) list_single_number_heading_pane_vc_t

0xb3a6,	// (0x00017d6f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb3a6,	// (0x00017d6f) list_single_graphic_heading_pane_vc_g1

0x41b1,	// (0x00010b7a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x41b1,	// (0x00010b7a) list_single_graphic_heading_pane_vc_g4

0x41bd,	// (0x00010b86) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x41bd,	// (0x00010b86) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0001c403) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c403) list_single_graphic_heading_pane_vc_g

0xb3b2,	// (0x00017d7b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb3b2,	// (0x00017d7b) list_single_graphic_heading_pane_vc_t1

0xb3c8,	// (0x00017d91) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3c8,	// (0x00017d91) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0001c40a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0001c40a) list_single_graphic_heading_pane_vc_t

0x41b1,	// (0x00010b7a) list_double2_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_double2_pane_vc_g1

0x41bd,	// (0x00010b86) list_double2_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_double2_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_double2_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_double2_pane_vc_g

0xb3da,	// (0x00017da3) list_double2_pane_vc_t1_ParamLimits

0xb3da,	// (0x00017da3) list_double2_pane_vc_t1

0xb3f2,	// (0x00017dbb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3f2,	// (0x00017dbb) list_double2_large_graphic_pane_vc_g1

0x41b1,	// (0x00010b7a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x41b1,	// (0x00010b7a) list_double2_large_graphic_pane_vc_g2

0x41bd,	// (0x00010b86) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x41bd,	// (0x00010b86) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0001c40f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001c40f) list_double2_large_graphic_pane_vc_g

0x93e6,	// (0x00015daf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x93e6,	// (0x00015daf) list_double2_large_graphic_pane_vc_t1

0xb3fe,	// (0x00017dc7) list_double_time_pane_vc_g1_ParamLimits

0xb3fe,	// (0x00017dc7) list_double_time_pane_vc_g1

0xb40a,	// (0x00017dd3) list_double_time_pane_vc_g2_ParamLimits

0xb40a,	// (0x00017dd3) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0001c416) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0001c416) list_double_time_pane_vc_g

0xb416,	// (0x00017ddf) list_double_time_pane_vc_t1_ParamLimits

0xb416,	// (0x00017ddf) list_double_time_pane_vc_t1

0xb43a,	// (0x00017e03) list_double_time_pane_vc_t2_ParamLimits

0xb43a,	// (0x00017e03) list_double_time_pane_vc_t2

0xb469,	// (0x00017e32) list_double_time_pane_vc_t3_ParamLimits

0xb469,	// (0x00017e32) list_double_time_pane_vc_t3

0xb47b,	// (0x00017e44) list_double_time_pane_vc_t4_ParamLimits

0xb47b,	// (0x00017e44) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0001c41b) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0001c41b) list_double_time_pane_vc_t

0x41b1,	// (0x00010b7a) list_double_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_double_pane_vc_g1

0x41bd,	// (0x00010b86) list_double_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_double_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_double_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_double_pane_vc_g

0xb48f,	// (0x00017e58) list_double_pane_vc_t1_ParamLimits

0xb48f,	// (0x00017e58) list_double_pane_vc_t1

0xb4a3,	// (0x00017e6c) list_double_pane_vc_t2_ParamLimits

0xb4a3,	// (0x00017e6c) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0001c424) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c424) list_double_pane_vc_t

0x41b1,	// (0x00010b7a) list_double_number_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_double_number_pane_vc_g1

0x41bd,	// (0x00010b86) list_double_number_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_double_number_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_double_number_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_double_number_pane_vc_g

0xb4bb,	// (0x00017e84) list_double_number_pane_vc_t1_ParamLimits

0xb4bb,	// (0x00017e84) list_double_number_pane_vc_t1

0xb48f,	// (0x00017e58) list_double_number_pane_vc_t2_ParamLimits

0xb48f,	// (0x00017e58) list_double_number_pane_vc_t2

0xb4cd,	// (0x00017e96) list_double_number_pane_vc_t3_ParamLimits

0xb4cd,	// (0x00017e96) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0001c429) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0001c429) list_double_number_pane_vc_t

0xb4e5,	// (0x00017eae) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4e5,	// (0x00017eae) list_double_large_graphic_pane_vc_g1

0xb507,	// (0x00017ed0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb507,	// (0x00017ed0) list_double_large_graphic_pane_vc_g2

0xb51b,	// (0x00017ee4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb51b,	// (0x00017ee4) list_double_large_graphic_pane_vc_g3

0xb52a,	// (0x00017ef3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb52a,	// (0x00017ef3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0001c430) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001c430) list_double_large_graphic_pane_vc_g

0xb536,	// (0x00017eff) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb536,	// (0x00017eff) list_double_large_graphic_pane_vc_t1

0xb552,	// (0x00017f1b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb552,	// (0x00017f1b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0001c439) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0001c439) list_double_large_graphic_pane_vc_t

0x41b1,	// (0x00010b7a) list_double_heading_pane_vc_g1_ParamLimits

0x41b1,	// (0x00010b7a) list_double_heading_pane_vc_g1

0x41bd,	// (0x00010b86) list_double_heading_pane_vc_g2_ParamLimits

0x41bd,	// (0x00010b86) list_double_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c199) list_double_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c199) list_double_heading_pane_vc_g

0xb574,	// (0x00017f3d) list_double_heading_pane_vc_t1_ParamLimits

0xb574,	// (0x00017f3d) list_double_heading_pane_vc_t1

0xb588,	// (0x00017f51) list_double_heading_pane_vc_t2_ParamLimits

0xb588,	// (0x00017f51) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0001c43e) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0001c43e) list_double_heading_pane_vc_t

0xb5a0,	// (0x00017f69) list_double_graphic_pane_vc_g1_ParamLimits

0xb5a0,	// (0x00017f69) list_double_graphic_pane_vc_g1

0xb5b3,	// (0x00017f7c) list_double_graphic_pane_vc_g2_ParamLimits

0xb5b3,	// (0x00017f7c) list_double_graphic_pane_vc_g2

0x41b1,	// (0x00010b7a) list_double_graphic_pane_vc_g3_ParamLimits

0x41b1,	// (0x00010b7a) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0001c443) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0001c443) list_double_graphic_pane_vc_g

0xb5d0,	// (0x00017f99) list_double_graphic_pane_vc_t1_ParamLimits

0xb5d0,	// (0x00017f99) list_double_graphic_pane_vc_t1

0xb5ef,	// (0x00017fb8) list_double_graphic_pane_vc_t2_ParamLimits

0xb5ef,	// (0x00017fb8) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001c44c) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001c44c) list_double_graphic_pane_vc_t

0x53e4,	// (0x00011dad) aid_size_cell_fastswap

0x53ec,	// (0x00011db5) aid_size_cell_touch_ParamLimits

0x53ec,	// (0x00011db5) aid_size_cell_touch

0x5651,	// (0x0001201a) popup_fast_swap_wide_window_ParamLimits

0x5651,	// (0x0001201a) popup_fast_swap_wide_window

0x5757,	// (0x00012120) touch_pane_ParamLimits

0x5757,	// (0x00012120) touch_pane

0x4240,	// (0x00010c09) button_value_adjust_pane_cp2

0x4248,	// (0x00010c11) button_value_adjust_pane_cp4

0x4250,	// (0x00010c19) form_field_data_pane_cp2

0x826f,	// (0x00014c38) form_field_data_wide_pane_cp2

0x476a,	// (0x00011133) bg_scroll_pane_ParamLimits

0x59e5,	// (0x000123ae) scroll_handle_pane_ParamLimits

0x59f9,	// (0x000123c2) scroll_sc2_down_pane_ParamLimits

0x59f9,	// (0x000123c2) scroll_sc2_down_pane

0x47b0,	// (0x00011179) scroll_sc2_up_pane_ParamLimits

0x47b0,	// (0x00011179) scroll_sc2_up_pane

0xba9a,	// (0x00018463) grid_wheel_folder_pane_g1_ParamLimits

0xba9a,	// (0x00018463) grid_wheel_folder_pane_g1

0x5bb5,	// (0x0001257e) clock_nsta_pane_cp2_ParamLimits

0x5bb5,	// (0x0001257e) clock_nsta_pane_cp2

0x8bdb,	// (0x000155a4) listscroll_midp_pane_ParamLimits

0x8be7,	// (0x000155b0) midp_canvas_pane

0x8ecb,	// (0x00015894) nsta_clock_indic_pane

0x8f07,	// (0x000158d0) listscroll_form_pane_vc

0x8f0f,	// (0x000158d8) listscroll_set_pane_vc_ParamLimits

0x8f0f,	// (0x000158d8) listscroll_set_pane_vc

0x901c,	// (0x000159e5) clock_nsta_pane

0x9097,	// (0x00015a60) indicator_nsta_pane

0x9374,	// (0x00015d3d) bg_popup_sub_pane_cp2_ParamLimits

0x9388,	// (0x00015d51) find_pane_cp2_ParamLimits

0x9388,	// (0x00015d51) find_pane_cp2

0x939e,	// (0x00015d67) grid_toobar_pane_ParamLimits

0x954c,	// (0x00015f15) list_form_gen_pane_vc_ParamLimits

0x954c,	// (0x00015f15) list_form_gen_pane_vc

0x9562,	// (0x00015f2b) scroll_pane_cp8_vc_ParamLimits

0x9562,	// (0x00015f2b) scroll_pane_cp8_vc

0x95de,	// (0x00015fa7) data_form_wide_pane_vc_ParamLimits

0x95de,	// (0x00015fa7) data_form_wide_pane_vc

0x95ea,	// (0x00015fb3) form_field_data_wide_pane_vc_g1

0x95f2,	// (0x00015fbb) form_field_data_wide_pane_vc_t1_ParamLimits

0x95f2,	// (0x00015fbb) form_field_data_wide_pane_vc_t1

0x4277,	// (0x00010c40) input_focus_pane_cp6_vc_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_cp6_vc

0x9960,	// (0x00016329) list_midp_pane_ParamLimits

0x996c,	// (0x00016335) scroll_pane_cp16_ParamLimits

0x996c,	// (0x00016335) scroll_pane_cp16

0x99c2,	// (0x0001638b) button_value_adjust_pane_ParamLimits

0x99c2,	// (0x0001638b) button_value_adjust_pane

0xa918,	// (0x000172e1) button_value_adjust_pane_cp6_ParamLimits

0xa918,	// (0x000172e1) button_value_adjust_pane_cp6

0xaa3e,	// (0x00017407) settings_code_pane_cp_ParamLimits

0xaa3e,	// (0x00017407) settings_code_pane_cp

0x3c40,	// (0x00010609) cell_touch_pane_g1

0x3c40,	// (0x00010609) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0001c0bd) cell_touch_pane_g

0xb0dc,	// (0x00017aa5) cell_touch_pane_cp_ParamLimits

0xb0dc,	// (0x00017aa5) cell_touch_pane_cp

0xb0ec,	// (0x00017ab5) cell_touch_pane_ParamLimits

0xb0ec,	// (0x00017ab5) cell_touch_pane

0x3c40,	// (0x00010609) scroll_sc2_down_pane_g1

0x3c40,	// (0x00010609) scroll_sc2_up_pane_g1

0x3db9,	// (0x00010782) bg_set_opt_pane_cp4_vc

0xb136,	// (0x00017aff) list_set_graphic_pane_vc_g1_ParamLimits

0xb136,	// (0x00017aff) list_set_graphic_pane_vc_g1

0xb142,	// (0x00017b0b) list_set_graphic_pane_vc_g2_ParamLimits

0xb142,	// (0x00017b0b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0001c3b9) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0001c3b9) list_set_graphic_pane_vc_g

0xb14e,	// (0x00017b17) text_primary_small_cp13_vc_ParamLimits

0xb14e,	// (0x00017b17) text_primary_small_cp13_vc

0xb166,	// (0x00017b2f) list_set_graphic_pane_vc_ParamLimits

0xb166,	// (0x00017b2f) list_set_graphic_pane_vc

0x3db9,	// (0x00010782) input_focus_pane_cp2_vc

0x3c40,	// (0x00010609) setting_code_pane_vc_g1

0x3e4c,	// (0x00010815) setting_code_pane_vc_t1

0xb179,	// (0x00017b42) set_text_pane_vc_t1_ParamLimits

0xb179,	// (0x00017b42) set_text_pane_vc_t1

0x3db9,	// (0x00010782) input_focus_pane_cp1_vc

0xb195,	// (0x00017b5e) list_set_text_pane_vc

0x3c40,	// (0x00010609) setting_text_pane_vc_g1

0x3db9,	// (0x00010782) bg_set_opt_pane_cp2_vc

0x3e43,	// (0x0001080c) setting_slider_graphic_pane_vc_g1

0xb19f,	// (0x00017b68) setting_slider_graphic_pane_vc_t1

0xb1af,	// (0x00017b78) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c3be) setting_slider_graphic_pane_vc_t

0xb1bf,	// (0x00017b88) slider_set_pane_cp_vc

0xb1c7,	// (0x00017b90) slider_set_pane_vc_g1

0xb1d0,	// (0x00017b99) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0001c3c3) slider_set_pane_vc_g

0x4331,	// (0x00010cfa) set_opt_bg_pane_g1_copy1

0x4339,	// (0x00010d02) set_opt_bg_pane_g2_copy1

0xb1fc,	// (0x00017bc5) set_opt_bg_pane_g3_copy1

0x4349,	// (0x00010d12) set_opt_bg_pane_g4_copy1

0x4351,	// (0x00010d1a) set_opt_bg_pane_g5_copy1

0x4359,	// (0x00010d22) set_opt_bg_pane_g6_copy1

0xb204,	// (0x00017bcd) set_opt_bg_pane_g7_copy1

0xb20c,	// (0x00017bd5) set_opt_bg_pane_g8_copy1

0xb214,	// (0x00017bdd) set_opt_bg_pane_g9_copy1

0x3db9,	// (0x00010782) bg_set_opt_pane_cp_vc

0xb21c,	// (0x00017be5) setting_slider_pane_vc_t1

0xb22b,	// (0x00017bf4) setting_slider_pane_vc_t2

0xb23b,	// (0x00017c04) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0001c3d2) setting_slider_pane_vc_t

0xb24b,	// (0x00017c14) slider_set_pane_vc

0x65af,	// (0x00012f78) volume_set_pane_vc_g1

0x68aa,	// (0x00013273) volume_set_pane_vc_g2

0x68b3,	// (0x0001327c) volume_set_pane_vc_g3

0x68bc,	// (0x00013285) volume_set_pane_vc_g4

0x68c5,	// (0x0001328e) volume_set_pane_vc_g5

0x68ce,	// (0x00013297) volume_set_pane_vc_g6

0x68d7,	// (0x000132a0) volume_set_pane_vc_g7

0x68e0,	// (0x000132a9) volume_set_pane_vc_g8

0x68e9,	// (0x000132b2) volume_set_pane_vc_g9

0x68f2,	// (0x000132bb) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0001c3d9) volume_set_pane_vc_g

0xb253,	// (0x00017c1c) volume_set_pane_vc

0xb25b,	// (0x00017c24) button_value_adjust_pane_cp1_vc

0xb265,	// (0x00017c2e) list_highlight_pane_cp2_vc

0xb26e,	// (0x00017c37) list_set_pane_vc_ParamLimits

0xb26e,	// (0x00017c37) list_set_pane_vc

0xb2cc,	// (0x00017c95) main_pane_set_vc_t1_ParamLimits

0xb2cc,	// (0x00017c95) main_pane_set_vc_t1

0xb2e1,	// (0x00017caa) main_pane_set_vc_t2_ParamLimits

0xb2e1,	// (0x00017caa) main_pane_set_vc_t2

0xb2f3,	// (0x00017cbc) main_pane_set_vc_t3_ParamLimits

0xb2f3,	// (0x00017cbc) main_pane_set_vc_t3

0xb305,	// (0x00017cce) main_pane_set_vc_t4_ParamLimits

0xb305,	// (0x00017cce) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0001c3ee) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0001c3ee) main_pane_set_vc_t

0xb317,	// (0x00017ce0) setting_code_pane_vc_ParamLimits

0xb317,	// (0x00017ce0) setting_code_pane_vc

0xb326,	// (0x00017cef) setting_slider_graphic_pane_vc

0xb326,	// (0x00017cef) setting_slider_pane_vc

0xb326,	// (0x00017cef) setting_text_pane_vc

0xb326,	// (0x00017cef) setting_volume_pane_vc

0xb32e,	// (0x00017cf7) scroll_pane_cp121_vc

0x422e,	// (0x00010bf7) set_content_pane_vc

0xb619,	// (0x00017fe2) button_value_adjust_pane_g1

0xb622,	// (0x00017feb) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001c451) button_value_adjust_pane_g

0xb62b,	// (0x00017ff4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb62b,	// (0x00017ff4) form_field_slider_wide_pane_vc_t1

0xb63f,	// (0x00018008) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb63f,	// (0x00018008) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001c456) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001c456) form_field_slider_wide_pane_vc_t

0x3e27,	// (0x000107f0) input_focus_pane_cp10_vc_ParamLimits

0x3e27,	// (0x000107f0) input_focus_pane_cp10_vc

0xb66d,	// (0x00018036) slider_cont_pane_cp1_vc_ParamLimits

0xb66d,	// (0x00018036) slider_cont_pane_cp1_vc

0xb67f,	// (0x00018048) slider_form_pane_g1_cp2

0xb1d0,	// (0x00017b99) slider_form_pane_g2_cp2

0xb6ac,	// (0x00018075) form_field_slider_pane_vc_t3

0xb6ba,	// (0x00018083) form_field_slider_pane_vc_t4

0xb6c8,	// (0x00018091) slider_form_pane_vc_ParamLimits

0xb6c8,	// (0x00018091) slider_form_pane_vc

0xb6d5,	// (0x0001809e) form_field_slider_pane_vc_t1_ParamLimits

0xb6d5,	// (0x0001809e) form_field_slider_pane_vc_t1

0xb63f,	// (0x00018008) form_field_slider_pane_vc_t2_ParamLimits

0xb63f,	// (0x00018008) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001c468) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001c468) form_field_slider_pane_vc_t

0x3e27,	// (0x000107f0) input_focus_pane_cp9_vc_ParamLimits

0x3e27,	// (0x000107f0) input_focus_pane_cp9_vc

0xb6f1,	// (0x000180ba) slider_cont_pane_vc_ParamLimits

0xb6f1,	// (0x000180ba) slider_cont_pane_vc

0xb705,	// (0x000180ce) list_form_graphic_pane_cp_vc_ParamLimits

0xb705,	// (0x000180ce) list_form_graphic_pane_cp_vc

0x95ea,	// (0x00015fb3) form_field_popup_wide_pane_vc_g1

0xb71a,	// (0x000180e3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb71a,	// (0x000180e3) form_field_popup_wide_pane_vc_t1

0x4277,	// (0x00010c40) input_focus_pane_cp8_vc_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_cp8_vc

0xb75f,	// (0x00018128) list_form_wide_pane_vc_ParamLimits

0xb75f,	// (0x00018128) list_form_wide_pane_vc

0xb76b,	// (0x00018134) list_form_graphic_pane_vc_g1

0xb773,	// (0x0001813c) list_form_graphic_pane_vc_t1_ParamLimits

0xb773,	// (0x0001813c) list_form_graphic_pane_vc_t1

0x3e35,	// (0x000107fe) list_highlight_pane_cp5_vc_ParamLimits

0x3e35,	// (0x000107fe) list_highlight_pane_cp5_vc

0xb78f,	// (0x00018158) list_form_graphic_pane_vc_ParamLimits

0xb78f,	// (0x00018158) list_form_graphic_pane_vc

0x95ea,	// (0x00015fb3) form_field_popup_pane_vc_g1

0xb7a5,	// (0x0001816e) form_field_popup_pane_vc_t1_ParamLimits

0xb7a5,	// (0x0001816e) form_field_popup_pane_vc_t1

0x4277,	// (0x00010c40) input_focus_pane_cp7_vc_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_cp7_vc

0xb7bc,	// (0x00018185) list_form_pane_vc_ParamLimits

0xb7bc,	// (0x00018185) list_form_pane_vc

0xb7c8,	// (0x00018191) data_form_pane_vc_t1_ParamLimits

0xb7c8,	// (0x00018191) data_form_pane_vc_t1

0x4331,	// (0x00010cfa) input_focus_pane_vc_g1

0x4339,	// (0x00010d02) input_focus_pane_vc_g2

0x4341,	// (0x00010d0a) input_focus_pane_vc_g3

0x4349,	// (0x00010d12) input_focus_pane_vc_g4

0x4351,	// (0x00010d1a) input_focus_pane_vc_g5

0x4359,	// (0x00010d22) input_focus_pane_vc_g6

0x4361,	// (0x00010d2a) input_focus_pane_vc_g7

0x4369,	// (0x00010d32) input_focus_pane_vc_g8

0x4371,	// (0x00010d3a) input_focus_pane_vc_g9

0x3c40,	// (0x00010609) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0001c046) input_focus_pane_vc_g

0x95de,	// (0x00015fa7) data_form_pane_vc_ParamLimits

0x95de,	// (0x00015fa7) data_form_pane_vc

0x95ea,	// (0x00015fb3) form_field_data_pane_vc_g1

0xb7e3,	// (0x000181ac) form_field_data_pane_vc_t1_ParamLimits

0xb7e3,	// (0x000181ac) form_field_data_pane_vc_t1

0x4277,	// (0x00010c40) input_focus_pane_vc_ParamLimits

0x4277,	// (0x00010c40) input_focus_pane_vc

0xb7fd,	// (0x000181c6) button_value_adjust_pane_cp3_vc

0xb805,	// (0x000181ce) button_value_adjust_pane_cp5_vc

0xb80d,	// (0x000181d6) form_field_data_pane_vc_ParamLimits

0xb80d,	// (0x000181d6) form_field_data_pane_vc

0xb824,	// (0x000181ed) form_field_data_pane_vc_cp2

0xb82c,	// (0x000181f5) form_field_data_wide_pane_vc_ParamLimits

0xb82c,	// (0x000181f5) form_field_data_wide_pane_vc

0xb842,	// (0x0001820b) form_field_data_wide_pane_vc_cp2

0xb84a,	// (0x00018213) form_field_popup_pane_vc_ParamLimits

0xb84a,	// (0x00018213) form_field_popup_pane_vc

0xb861,	// (0x0001822a) form_field_popup_wide_pane_vc_ParamLimits

0xb861,	// (0x0001822a) form_field_popup_wide_pane_vc

0xb877,	// (0x00018240) form_field_slider_pane_vc_ParamLimits

0xb877,	// (0x00018240) form_field_slider_pane_vc

0xb88a,	// (0x00018253) form_field_slider_wide_pane_vc_ParamLimits

0xb88a,	// (0x00018253) form_field_slider_wide_pane_vc

0xb89d,	// (0x00018266) grid_touch_1_pane_ParamLimits

0xb89d,	// (0x00018266) grid_touch_1_pane

0xb8a9,	// (0x00018272) grid_touch_2_pane_ParamLimits

0xb8a9,	// (0x00018272) grid_touch_2_pane

0x8e96,	// (0x0001585f) touch_pane_g1_ParamLimits

0x8e96,	// (0x0001585f) touch_pane_g1

0xb8c1,	// (0x0001828a) cell_app_pane_cp_wide_ParamLimits

0xb8c1,	// (0x0001828a) cell_app_pane_cp_wide

0xb8d2,	// (0x0001829b) grid_popup_fast_wide_pane_ParamLimits

0xb8d2,	// (0x0001829b) grid_popup_fast_wide_pane

0xb8e6,	// (0x000182af) scroll_pane_cp19_ParamLimits

0xb8e6,	// (0x000182af) scroll_pane_cp19

0x3db9,	// (0x00010782) bg_popup_window_pane_cp20

0xb8fa,	// (0x000182c3) listscroll_popup_fast_wide_pane

0x3e35,	// (0x000107fe) grid_indicator_nsta_pane

0xb902,	// (0x000182cb) clock_nsta_pane_g1

0xb90b,	// (0x000182d4) clock_nsta_pane_t1

0xb927,	// (0x000182f0) cell_indicator_nsta_pane_ParamLimits

0xb927,	// (0x000182f0) cell_indicator_nsta_pane

0xb958,	// (0x00018321) cell_indicator_nsta_pane_g1

0xb966,	// (0x0001832f) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001c479) cell_indicator_nsta_pane_g

0xb973,	// (0x0001833c) clock_nsta_pane_cp

0xb97b,	// (0x00018344) indicator_nsta_pane_cp

0xb983,	// (0x0001834c) nsta_clock_indic_pane_g1

0x3e8b,	// (0x00010854) grid_indicator_pane

0x85f6,	// (0x00014fbf) scroll_pane_cp29

0x5b04,	// (0x000124cd) indicator_nsta_pane_cp2_ParamLimits

0x5b04,	// (0x000124cd) indicator_nsta_pane_cp2

0x3e35,	// (0x000107fe) main_apps_wheel_pane

0x9843,	// (0x0001620c) form_midp_field_text_pane_ParamLimits

0x998c,	// (0x00016355) scroll_bar_cp050_ParamLimits

0xb9d3,	// (0x0001839c) cell_indicator_pane_ParamLimits

0xb9d3,	// (0x0001839c) cell_indicator_pane

0xb9ec,	// (0x000183b5) cell_indicator_pane_g1

0xb9f6,	// (0x000183bf) grid_wheel_folder_pane_ParamLimits

0xb9f6,	// (0x000183bf) grid_wheel_folder_pane

0xba0c,	// (0x000183d5) list_wheel_apps_pane_ParamLimits

0xba0c,	// (0x000183d5) list_wheel_apps_pane

0xba1d,	// (0x000183e6) main_apps_wheel_pane_g1_ParamLimits

0xba1d,	// (0x000183e6) main_apps_wheel_pane_g1

0xba31,	// (0x000183fa) main_apps_wheel_pane_g2_ParamLimits

0xba31,	// (0x000183fa) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001c495) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001c495) main_apps_wheel_pane_g

0xba49,	// (0x00018412) main_apps_wheel_pane_t1_ParamLimits

0xba49,	// (0x00018412) main_apps_wheel_pane_t1

0xba6c,	// (0x00018435) list_wheel_apps_pane_g1

0xba74,	// (0x0001843d) list_wheel_apps_pane_g2

0xba7c,	// (0x00018445) list_wheel_apps_pane_g3

0xba86,	// (0x0001844f) list_wheel_apps_pane_g4

0xba90,	// (0x00018459) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001c49a) list_wheel_apps_pane_g

0x8a53,	// (0x0001541c) navi_icon_text_pane

0x8f4b,	// (0x00015914) aid_fill_nsta

0xbab3,	// (0x0001847c) navi_icon_text_pane_g1

0xbabf,	// (0x00018488) navi_icon_text_pane_t1

0x88f6,	// (0x000152bf) list_set_graphic_pane_t1_ParamLimits

0x88f6,	// (0x000152bf) list_set_graphic_pane_t1

0xa0c3,	// (0x00016a8c) popup_midp_note_alarm_window_t6_ParamLimits

0xa0c3,	// (0x00016a8c) popup_midp_note_alarm_window_t6

0xa0d5,	// (0x00016a9e) popup_midp_note_alarm_window_t7_ParamLimits

0xa0d5,	// (0x00016a9e) popup_midp_note_alarm_window_t7

0xa0e7,	// (0x00016ab0) popup_midp_note_alarm_window_t8_ParamLimits

0xa0e7,	// (0x00016ab0) popup_midp_note_alarm_window_t8

0xa0f9,	// (0x00016ac2) popup_midp_note_alarm_window_t9_ParamLimits

0xa0f9,	// (0x00016ac2) popup_midp_note_alarm_window_t9

0xa10b,	// (0x00016ad4) popup_midp_note_alarm_window_t10_ParamLimits

0xa10b,	// (0x00016ad4) popup_midp_note_alarm_window_t10

0xa11d,	// (0x00016ae6) popup_midp_note_alarm_window_t11_ParamLimits

0xa11d,	// (0x00016ae6) popup_midp_note_alarm_window_t11

0xa12f,	// (0x00016af8) scroll_pane_cp17_ParamLimits

0xa12f,	// (0x00016af8) scroll_pane_cp17

0x65af,	// (0x00012f78) volume_small_pane_cp_g1

0x68fb,	// (0x000132c4) volume_small_pane_cp_g2

0x6904,	// (0x000132cd) volume_small_pane_cp_g3

0x690d,	// (0x000132d6) volume_small_pane_cp_g4

0x6916,	// (0x000132df) volume_small_pane_cp_g5

0x68c5,	// (0x0001328e) volume_small_pane_cp_g6

0x691f,	// (0x000132e8) volume_small_pane_cp_g7

0x6928,	// (0x000132f1) volume_small_pane_cp_g8

0x6931,	// (0x000132fa) volume_small_pane_cp_g9

0x693a,	// (0x00013303) volume_small_pane_cp_g10

0x8cb4,	// (0x0001567d) midp_ticker_pane_g1_ParamLimits

0x8cc0,	// (0x00015689) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0001c112) midp_ticker_pane_g_ParamLimits

0x8ccc,	// (0x00015695) midp_ticker_pane_t1_ParamLimits

0x8f61,	// (0x0001592a) aid_fill_nsta_2

0x9978,	// (0x00016341) list_form2_midp_pane

0xaabc,	// (0x00017485) midp_editing_number_pane_ParamLimits

0xaacb,	// (0x00017494) midp_ticker_pane_ParamLimits

0xbad1,	// (0x0001849a) form2_midp_field_pane

0xbaf5,	// (0x000184be) scroll_pane_cp51

0xbb15,	// (0x000184de) form2_midp_button_pane_ParamLimits

0xbb15,	// (0x000184de) form2_midp_button_pane

0xbb27,	// (0x000184f0) form2_midp_content_pane_ParamLimits

0xbb27,	// (0x000184f0) form2_midp_content_pane

0xbb41,	// (0x0001850a) form2_midp_field_choice_group_pane

0xbb49,	// (0x00018512) form2_midp_field_pane_g1

0xbb51,	// (0x0001851a) form2_midp_field_pane_g2

0xbb59,	// (0x00018522) form2_midp_field_pane_g3

0xbb61,	// (0x0001852a) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001c4bf) form2_midp_field_pane_g

0xbb69,	// (0x00018532) form2_midp_gauge_slider_pane

0xbb71,	// (0x0001853a) form2_midp_gauge_wait_pane

0xbb79,	// (0x00018542) form2_midp_image_pane_ParamLimits

0xbb79,	// (0x00018542) form2_midp_image_pane

0xbb94,	// (0x0001855d) form2_midp_label_pane_ParamLimits

0xbb94,	// (0x0001855d) form2_midp_label_pane

0xbbad,	// (0x00018576) form2_midp_label_pane_cp_ParamLimits

0xbbad,	// (0x00018576) form2_midp_label_pane_cp

0xbbce,	// (0x00018597) form2_midp_string_pane_ParamLimits

0xbbce,	// (0x00018597) form2_midp_string_pane

0xbbe0,	// (0x000185a9) form2_midp_text_pane_ParamLimits

0xbbe0,	// (0x000185a9) form2_midp_text_pane

0xbbfb,	// (0x000185c4) form2_midp_time_pane

0xbc0b,	// (0x000185d4) input_focus_pane_cp51_ParamLimits

0xbc0b,	// (0x000185d4) input_focus_pane_cp51

0xbc23,	// (0x000185ec) form2_midp_label_pane_t1_ParamLimits

0xbc23,	// (0x000185ec) form2_midp_label_pane_t1

0xbc64,	// (0x0001862d) form2_mdip_text_pane_t1_ParamLimits

0xbc64,	// (0x0001862d) form2_mdip_text_pane_t1

0xbc83,	// (0x0001864c) form2_midp_time_pane_t1

0xbc9e,	// (0x00018667) form2_midp_gauge_slider_pane_t1

0xbcb0,	// (0x00018679) form2_midp_gauge_slider_pane_t2

0xbcc2,	// (0x0001868b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001c4c8) form2_midp_gauge_slider_pane_t

0xbcd4,	// (0x0001869d) form2_midp_slider_pane

0xbce0,	// (0x000186a9) form2_midp_gauge_wait_pane_t1

0xbcee,	// (0x000186b7) form2_midp_wait_pane_ParamLimits

0xbcee,	// (0x000186b7) form2_midp_wait_pane

0xbd19,	// (0x000186e2) list_single_2graphic_pane_cp4_ParamLimits

0xbd19,	// (0x000186e2) list_single_2graphic_pane_cp4

0x9653,	// (0x0001601c) list_single_midp_graphic_pane_cp_ParamLimits

0x9653,	// (0x0001601c) list_single_midp_graphic_pane_cp

0x3db9,	// (0x00010782) list_highlight_pane_cp20

0xbd41,	// (0x0001870a) list_single_2graphic_pane_g1_cp4

0xafe2,	// (0x000179ab) list_single_2graphic_pane_g2_cp4

0xbd49,	// (0x00018712) list_single_2graphic_pane_t1_cp4

0x3e35,	// (0x000107fe) list_highlight_pane_cp21

0xbd58,	// (0x00018721) list_single_midp_graphic_pane_g4_cp

0xbd67,	// (0x00018730) list_single_midp_graphic_pane_t1_cp

0xbd7c,	// (0x00018745) form2_mdip_string_pane_t1_ParamLimits

0xbd7c,	// (0x00018745) form2_mdip_string_pane_t1

0x3db9,	// (0x00010782) bg_wml_button_pane_cp2

0x3c40,	// (0x00010609) form2_midp_image_pane_g1

0x41c9,	// (0x00010b92) list_double_large_graphic_pane_g5_ParamLimits

0x41c9,	// (0x00010b92) list_double_large_graphic_pane_g5

0x8bdb,	// (0x000155a4) midp_form_pane_ParamLimits

0x3e35,	// (0x000107fe) main_apps_wheel_pane_ParamLimits

0x61f1,	// (0x00012bba) popup_preview_window_ParamLimits

0x61f1,	// (0x00012bba) popup_preview_window

0x63ac,	// (0x00012d75) popup_touch_info_window_ParamLimits

0x63ac,	// (0x00012d75) popup_touch_info_window

0x63ca,	// (0x00012d93) popup_touch_menu_window_ParamLimits

0x63ca,	// (0x00012d93) popup_touch_menu_window

0x3c36,	// (0x000105ff) bg_popup_sub_pane_cp6

0xbe7d,	// (0x00018846) list_touch_menu_pane

0xbe85,	// (0x0001884e) list_single_touch_menu_pane_ParamLimits

0xbe85,	// (0x0001884e) list_single_touch_menu_pane

0xbe9b,	// (0x00018864) list_single_touch_menu_pane_t1

0x3e35,	// (0x000107fe) bg_popup_sub_pane_cp7_ParamLimits

0x3e35,	// (0x000107fe) bg_popup_sub_pane_cp7

0xbea9,	// (0x00018872) heading_sub_pane

0xbeb1,	// (0x0001887a) list_touch_info_pane_ParamLimits

0xbeb1,	// (0x0001887a) list_touch_info_pane

0xbec0,	// (0x00018889) list_single_touch_info_pane_ParamLimits

0xbec0,	// (0x00018889) list_single_touch_info_pane

0xbed2,	// (0x0001889b) list_single_touch_info_pane_t1

0xbee0,	// (0x000188a9) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001c4d6) list_single_touch_info_pane_t

0x8bd3,	// (0x0001559c) bg_popup_heading_pane_cp

0xbeee,	// (0x000188b7) heading_sub_pane_t1

0x9578,	// (0x00015f41) bg_popup_preview_window_pane_cp_ParamLimits

0x9578,	// (0x00015f41) bg_popup_preview_window_pane_cp

0xbea9,	// (0x00018872) heading_preview_pane

0xbeb1,	// (0x0001887a) list_preview_pane_ParamLimits

0xbeb1,	// (0x0001887a) list_preview_pane

0xbefc,	// (0x000188c5) popup_preview_window_g1

0xbec0,	// (0x00018889) list_single_preview_pane_ParamLimits

0xbec0,	// (0x00018889) list_single_preview_pane

0xbf04,	// (0x000188cd) list_single_preview_pane_g1

0xbf0c,	// (0x000188d5) list_single_preview_pane_t1

0xbed2,	// (0x0001889b) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001c4db) list_single_preview_pane_t

0xbf1a,	// (0x000188e3) bg_popup_heading_pane_cp2_ParamLimits

0xbf1a,	// (0x000188e3) bg_popup_heading_pane_cp2

0xbf30,	// (0x000188f9) heading_preview_pane_g1

0xbf38,	// (0x00018901) heading_preview_pane_t1_ParamLimits

0xbf38,	// (0x00018901) heading_preview_pane_t1

0x3ea2,	// (0x0001086b) soft_indicator_pane_t1_ParamLimits

0x417d,	// (0x00010b46) scroll_pane_ParamLimits

0x47a7,	// (0x00011170) scroll_sc2_left_pane

0x479e,	// (0x00011167) scroll_sc2_right_pane

0x47c6,	// (0x0001118f) scroll_bg_pane_g1_ParamLimits

0x47db,	// (0x000111a4) scroll_bg_pane_g2_ParamLimits

0x47f3,	// (0x000111bc) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0001c09d) scroll_bg_pane_g_ParamLimits

0x47c6,	// (0x0001118f) scroll_handle_pane_g1_ParamLimits

0x4808,	// (0x000111d1) scroll_handle_pane_g2_ParamLimits

0x47f3,	// (0x000111bc) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001c0a4) scroll_handle_pane_g_ParamLimits

0x5e74,	// (0x0001283d) popup_choice_list_window_ParamLimits

0x5e74,	// (0x0001283d) popup_choice_list_window

0x9380,	// (0x00015d49) choice_list_pane

0x9424,	// (0x00015ded) cell_toolbar_pane_t1

0x944c,	// (0x00015e15) toolbar_button_pane_ParamLimits

0xa5e9,	// (0x00016fb2) ai_gene_pane_1_t2_ParamLimits

0xa5e9,	// (0x00016fb2) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0001c2cc) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0001c2cc) ai_gene_pane_1_t

0xbf55,	// (0x0001891e) scroll_sc2_left_pane_g1

0xbf55,	// (0x0001891e) scroll_sc2_right_pane_g1

0x8f21,	// (0x000158ea) bg_popup_sub_pane_cp10

0xbf5f,	// (0x00018928) list_choice_list_pane

0xbf78,	// (0x00018941) list_single_choice_list_pane_ParamLimits

0xbf78,	// (0x00018941) list_single_choice_list_pane

0xbf8b,	// (0x00018954) list_single_choice_list_pane_g1

0x8461,	// (0x00014e2a) list_single_choice_list_pane_t1_ParamLimits

0x8461,	// (0x00014e2a) list_single_choice_list_pane_t1

0xbf93,	// (0x0001895c) choice_list_pane_g1

0xbf9b,	// (0x00018964) choice_list_pane_t1

0x3c36,	// (0x000105ff) input_focus_pane_cp11

0x45b9,	// (0x00010f82) title_pane_stacon_g2_ParamLimits

0x45b9,	// (0x00010f82) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0001c083) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0001c083) title_pane_stacon_g

0x8bd3,	// (0x0001559c) cursor_press_pane

0x5f1c,	// (0x000128e5) popup_fep_hwr_window_ParamLimits

0x5f1c,	// (0x000128e5) popup_fep_hwr_window

0x5f94,	// (0x0001295d) popup_fep_vkb_window_ParamLimits

0x5f94,	// (0x0001295d) popup_fep_vkb_window

0xbfa9,	// (0x00018972) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001c504) fep_vkb_side_pane_g_ParamLimits

0x697c,	// (0x00013345) fep_hwr_candidate_pane_ParamLimits

0x697c,	// (0x00013345) fep_hwr_candidate_pane

0x69a6,	// (0x0001336f) fep_hwr_side_pane_ParamLimits

0x69a6,	// (0x0001336f) fep_hwr_side_pane

0x69c6,	// (0x0001338f) fep_hwr_top_pane_ParamLimits

0x69c6,	// (0x0001338f) fep_hwr_top_pane

0x69de,	// (0x000133a7) fep_hwr_write_pane_ParamLimits

0x69de,	// (0x000133a7) fep_hwr_write_pane

0xfb3b,	// (0x0001c504) fep_vkb_side_pane_g

0xbfb1,	// (0x0001897a) fep_hwr_top_pane_g1

0xbfc3,	// (0x0001898c) fep_hwr_top_pane_g2

0x6a18,	// (0x000133e1) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001c4e0) fep_hwr_top_pane_g

0x6a2d,	// (0x000133f6) fep_hwr_top_text_pane

0x48d3,	// (0x0001129c) fep_hwr_top_text_pane_g1

0xbff9,	// (0x000189c2) fep_hwr_top_text_pane_t1

0x6b23,	// (0x000134ec) fep_hwr_candidate_pane_g1

0xc23e,	// (0x00018c07) fep_vkb_keypad_pane_g3_ParamLimits

0xc23e,	// (0x00018c07) fep_vkb_keypad_pane_g3

0xc266,	// (0x00018c2f) fep_vkb_keypad_pane_g4_ParamLimits

0xc266,	// (0x00018c2f) fep_vkb_keypad_pane_g4

0xc2d5,	// (0x00018c9e) fep_vkb_bottom_pane_g2_ParamLimits

0xc2d5,	// (0x00018c9e) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001c50b) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001c50b) fep_vkb_bottom_pane_g

0xbf55,	// (0x0001891e) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001c515) cell_vkb_side_pane_g

0xc360,	// (0x00018d29) cell_vkb_side_pane_t1

0xc36e,	// (0x00018d37) cell_vkb_side_pane_t1_copy1

0xbf55,	// (0x0001891e) bg_fep_vkb_candidate_pane_g2

0xc49a,	// (0x00018e63) cell_vkb_candidate_pane_ParamLimits

0xc007,	// (0x000189d0) aid_size_cell_vkb_ParamLimits

0xc007,	// (0x000189d0) aid_size_cell_vkb

0xc49a,	// (0x00018e63) cell_vkb_candidate_pane

0x6b4a,	// (0x00013513) bg_popup_fep_shadow_pane_g1

0xc095,	// (0x00018a5e) fep_vkb_bottom_pane_ParamLimits

0xc095,	// (0x00018a5e) fep_vkb_bottom_pane

0xc0cb,	// (0x00018a94) fep_vkb_candidate_pane_ParamLimits

0xc0cb,	// (0x00018a94) fep_vkb_candidate_pane

0xc0e7,	// (0x00018ab0) fep_vkb_keypad_pane_ParamLimits

0xc0e7,	// (0x00018ab0) fep_vkb_keypad_pane

0xc126,	// (0x00018aef) fep_vkb_side_pane_ParamLimits

0xc126,	// (0x00018aef) fep_vkb_side_pane

0xc162,	// (0x00018b2b) fep_vkb_top_pane_ParamLimits

0xc162,	// (0x00018b2b) fep_vkb_top_pane

0xc197,	// (0x00018b60) fep_vkb_top_pane_g1_ParamLimits

0xc197,	// (0x00018b60) fep_vkb_top_pane_g1

0xc1a6,	// (0x00018b6f) fep_vkb_top_pane_g2_ParamLimits

0xc1a6,	// (0x00018b6f) fep_vkb_top_pane_g2

0xc1b5,	// (0x00018b7e) fep_vkb_top_pane_g3_ParamLimits

0xc1b5,	// (0x00018b7e) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001c4fb) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001c4fb) fep_vkb_top_pane_g

0xc1d3,	// (0x00018b9c) fep_vkb_top_text_pane_ParamLimits

0xc1d3,	// (0x00018b9c) fep_vkb_top_text_pane

0xc1e4,	// (0x00018bad) fep_vkb_side_pane_g1_ParamLimits

0xc1e4,	// (0x00018bad) fep_vkb_side_pane_g1

0xc22d,	// (0x00018bf6) grid_vkb_side_pane_ParamLimits

0xc22d,	// (0x00018bf6) grid_vkb_side_pane

0x6b52,	// (0x0001351b) bg_popup_fep_shadow_pane_g2

0x6b5b,	// (0x00013524) bg_popup_fep_shadow_pane_g3

0x6b63,	// (0x0001352c) bg_popup_fep_shadow_pane_g4

0x6b6c,	// (0x00013535) bg_popup_fep_shadow_pane_g5

0x6b76,	// (0x0001353f) bg_popup_fep_shadow_pane_g6

0x6b7e,	// (0x00013547) bg_popup_fep_shadow_pane_g7

0x4349,	// (0x00010d12) bg_popup_fep_shadow_pane_g8

0xc284,	// (0x00018c4d) grid_vkb_keypad_number_pane_ParamLimits

0xc284,	// (0x00018c4d) grid_vkb_keypad_number_pane

0xc294,	// (0x00018c5d) grid_vkb_keypad_pane_ParamLimits

0xc294,	// (0x00018c5d) grid_vkb_keypad_pane

0xc2ba,	// (0x00018c83) fep_vkb_bottom_pane_g1_ParamLimits

0xc2ba,	// (0x00018c83) fep_vkb_bottom_pane_g1

0xc2e3,	// (0x00018cac) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2e3,	// (0x00018cac) grid_vkb_keypad_bottom_left_pane

0xc2f8,	// (0x00018cc1) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2f8,	// (0x00018cc1) grid_vkb_keypad_bottom_right_pane

0xc30d,	// (0x00018cd6) fep_vkb_top_text_pane_g1

0xc328,	// (0x00018cf1) fep_vkb_top_text_pane_t1

0xc33d,	// (0x00018d06) cell_vkb_side_pane_ParamLimits

0xc33d,	// (0x00018d06) cell_vkb_side_pane

0xbf55,	// (0x0001891e) cell_vkb_side_pane_g1

0xc37c,	// (0x00018d45) cell_vkb_keypad_pane_ParamLimits

0xc37c,	// (0x00018d45) cell_vkb_keypad_pane

0xc3f1,	// (0x00018dba) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001c528) bg_popup_fep_shadow_pane_g

0x6b90,	// (0x00013559) cell_hwr_side_pane_g1

0x6b90,	// (0x00013559) cell_hwr_side_pane_g2

0xc3fb,	// (0x00018dc4) cell_vkb_keypad_pane_t1

0xc409,	// (0x00018dd2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc409,	// (0x00018dd2) cell_vkb_keypad_bottom_left_pane

0xc426,	// (0x00018def) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc426,	// (0x00018def) cell_vkb_keypad_bottom_right_pane

0xbf55,	// (0x0001891e) cell_vkb_keypad_bottom_left_pane_g1

0xbf55,	// (0x0001891e) cell_vkb_keypad_bottom_right_pane_g1

0xc45f,	// (0x00018e28) cell_vkb_keypad_number_pane_ParamLimits

0xc45f,	// (0x00018e28) cell_vkb_keypad_number_pane

0xc47e,	// (0x00018e47) cell_vkb_keypad_number_pane_g1

0xc488,	// (0x00018e51) cell_vkb_keypad_number_pane_g2

0xc491,	// (0x00018e5a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001c51a) cell_vkb_keypad_number_pane_g

0xc3fb,	// (0x00018dc4) cell_vkb_keypad_number_pane_t1

0xc4b5,	// (0x00018e7e) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001c53b) cell_hwr_side_pane_g

0xc4ce,	// (0x00018e97) cell_hwr_side_pane_t1

0x6b9a,	// (0x00013563) cell_hwr_side_pane_t1_copy1

0x6ba8,	// (0x00013571) cell_hwr_candidate_pane_g1

0x6bd7,	// (0x000135a0) cell_hwr_candidate_pane_t1

0xbf55,	// (0x0001891e) cell_vkb_candidate_pane_g2

0xc512,	// (0x00018edb) cell_vkb_candidate_pane_t1

0x6943,	// (0x0001330c) bg_popup_fep_shadow_pane_ParamLimits

0x6943,	// (0x0001330c) bg_popup_fep_shadow_pane

0x69f8,	// (0x000133c1) bg_fep_hwr_top_pane_g4

0xbfd5,	// (0x0001899e) bg_hwr_side_pane_g1_ParamLimits

0xbfd5,	// (0x0001899e) bg_hwr_side_pane_g1

0x6a69,	// (0x00013432) cell_hwr_side_pane_ParamLimits

0x6a69,	// (0x00013432) cell_hwr_side_pane

0x6aa4,	// (0x0001346d) fep_hwr_write_pane_g1_ParamLimits

0x6aa4,	// (0x0001346d) fep_hwr_write_pane_g1

0x6ab1,	// (0x0001347a) fep_hwr_write_pane_g2_ParamLimits

0x6ab1,	// (0x0001347a) fep_hwr_write_pane_g2

0x6abe,	// (0x00013487) fep_hwr_write_pane_g3_ParamLimits

0x6abe,	// (0x00013487) fep_hwr_write_pane_g3

0x6acc,	// (0x00013495) fep_hwr_write_pane_g4_ParamLimits

0x6acc,	// (0x00013495) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001c4e7) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001c4e7) fep_hwr_write_pane_g

0x69f8,	// (0x000133c1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x69f8,	// (0x000133c1) bg_fep_hwr_candidate_pane_g2

0x6ae1,	// (0x000134aa) cell_hwr_candidate_pane_ParamLimits

0x6ae1,	// (0x000134aa) cell_hwr_candidate_pane

0x6b23,	// (0x000134ec) fep_hwr_candidate_pane_g1_ParamLimits

0xc035,	// (0x000189fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc035,	// (0x000189fe) bg_popup_fep_shadow_pane_cp2

0xc1c5,	// (0x00018b8e) fep_vkb_top_pane_g4_ParamLimits

0xc1c5,	// (0x00018b8e) fep_vkb_top_pane_g4

0xc20b,	// (0x00018bd4) fep_vkb_side_pane_g2_ParamLimits

0xc20b,	// (0x00018bd4) fep_vkb_side_pane_g2

0x8192,	// (0x00014b5b) list_setting_pane_t4_ParamLimits

0x8192,	// (0x00014b5b) list_setting_pane_t4

0x820c,	// (0x00014bd5) list_setting_number_pane_t5_ParamLimits

0x820c,	// (0x00014bd5) list_setting_number_pane_t5

0x8606,	// (0x00014fcf) list_double_heading_pane_cp2_ParamLimits

0x8606,	// (0x00014fcf) list_double_heading_pane_cp2

0xc520,	// (0x00018ee9) list_double_heading_pane_g1_cp2_ParamLimits

0xc520,	// (0x00018ee9) list_double_heading_pane_g1_cp2

0xc52c,	// (0x00018ef5) list_double_heading_pane_g2_cp2_ParamLimits

0xc52c,	// (0x00018ef5) list_double_heading_pane_g2_cp2

0xc540,	// (0x00018f09) list_double_heading_pane_t1_cp2_ParamLimits

0xc540,	// (0x00018f09) list_double_heading_pane_t1_cp2

0xc556,	// (0x00018f1f) list_double_heading_pane_t2_cp2_ParamLimits

0xc556,	// (0x00018f1f) list_double_heading_pane_t2_cp2

0x3c2e,	// (0x000105f7) aid_value_unit2

0x569d,	// (0x00012066) popup_preview_fixed_window

0x3f79,	// (0x00010942) bg_popup_preview_window_pane_cp02

0xc568,	// (0x00018f31) list_preview_fixed_pane

0xc5ae,	// (0x00018f77) list_empty_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_empty_pane_fp

0xc5ae,	// (0x00018f77) list_single_cale_day_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_cale_day_pane_fp

0xc5ae,	// (0x00018f77) list_single_graphic_heading_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_graphic_heading_pane_fp

0xc5ae,	// (0x00018f77) list_single_graphic_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_graphic_pane_fp

0xc5ae,	// (0x00018f77) list_single_heading_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_heading_pane_fp

0xc5ae,	// (0x00018f77) list_single_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_pane_fp

0xc5c4,	// (0x00018f8d) list_single_pane_fp_g1_ParamLimits

0xc5c4,	// (0x00018f8d) list_single_pane_fp_g1

0xc5d0,	// (0x00018f99) list_single_pane_fp_g2_ParamLimits

0xc5d0,	// (0x00018f99) list_single_pane_fp_g2

0xc5dc,	// (0x00018fa5) list_single_pane_fp_g3_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_pane_fp_g3

0xc5f0,	// (0x00018fb9) list_single_pane_fp_g4_ParamLimits

0xc5f0,	// (0x00018fb9) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001c54e) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c54e) list_single_pane_fp_g

0xc5fc,	// (0x00018fc5) list_single_pane_fp_t1_ParamLimits

0xc5fc,	// (0x00018fc5) list_single_pane_fp_t1

0xc613,	// (0x00018fdc) list_single_graphic_pane_fp_g1_ParamLimits

0xc613,	// (0x00018fdc) list_single_graphic_pane_fp_g1

0xc5c4,	// (0x00018f8d) list_single_graphic_pane_fp_g2_ParamLimits

0xc5c4,	// (0x00018f8d) list_single_graphic_pane_fp_g2

0xc5d0,	// (0x00018f99) list_single_graphic_pane_fp_g3_ParamLimits

0xc5d0,	// (0x00018f99) list_single_graphic_pane_fp_g3

0xc5dc,	// (0x00018fa5) list_single_graphic_pane_fp_g4_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_graphic_pane_fp_g4

0xc5f0,	// (0x00018fb9) list_single_graphic_pane_fp_g5_ParamLimits

0xc5f0,	// (0x00018fb9) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c557) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c557) list_single_graphic_pane_fp_g

0xc61f,	// (0x00018fe8) list_single_graphic_pane_fp_t1_ParamLimits

0xc61f,	// (0x00018fe8) list_single_graphic_pane_fp_t1

0xc613,	// (0x00018fdc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc613,	// (0x00018fdc) list_single_graphic_heading_pane_fp_g1

0xc5c4,	// (0x00018f8d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5c4,	// (0x00018f8d) list_single_graphic_heading_pane_fp_g2

0xc5d0,	// (0x00018f99) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5d0,	// (0x00018f99) list_single_graphic_heading_pane_fp_g3

0xc5dc,	// (0x00018fa5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_graphic_heading_pane_fp_g4

0xc5f0,	// (0x00018fb9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5f0,	// (0x00018fb9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c557) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c557) list_single_graphic_heading_pane_fp_g

0xc635,	// (0x00018ffe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc635,	// (0x00018ffe) list_single_graphic_heading_pane_fp_t1

0xc64b,	// (0x00019014) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc64b,	// (0x00019014) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001c562) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001c562) list_single_graphic_heading_pane_fp_t

0xc65d,	// (0x00019026) list_single_cale_day_pane_fp_g1_ParamLimits

0xc65d,	// (0x00019026) list_single_cale_day_pane_fp_g1

0xc695,	// (0x0001905e) list_single_cale_day_pane_fp_g2_ParamLimits

0xc695,	// (0x0001905e) list_single_cale_day_pane_fp_g2

0xc6a1,	// (0x0001906a) list_single_cale_day_pane_fp_g3_ParamLimits

0xc6a1,	// (0x0001906a) list_single_cale_day_pane_fp_g3

0xc6c9,	// (0x00019092) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6c9,	// (0x00019092) list_single_cale_day_pane_fp_g4

0xc6ed,	// (0x000190b6) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6ed,	// (0x000190b6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001c567) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001c567) list_single_cale_day_pane_fp_g

0xc711,	// (0x000190da) list_single_cale_day_pane_fp_t1_ParamLimits

0xc711,	// (0x000190da) list_single_cale_day_pane_fp_t1

0xc737,	// (0x00019100) list_single_cale_day_pane_fp_t2_ParamLimits

0xc737,	// (0x00019100) list_single_cale_day_pane_fp_t2

0xc750,	// (0x00019119) list_single_cale_day_pane_fp_t3_ParamLimits

0xc750,	// (0x00019119) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001c572) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001c572) list_single_cale_day_pane_fp_t

0xc5c4,	// (0x00018f8d) list_empty_pane_fp_g1_ParamLimits

0xc5c4,	// (0x00018f8d) list_empty_pane_fp_g1

0xc769,	// (0x00019132) list_empty_pane_fp_t1

0xc777,	// (0x00019140) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001c579) list_empty_pane_fp_t

0xc5c4,	// (0x00018f8d) list_single_heading_pane_fp_g1_ParamLimits

0xc5c4,	// (0x00018f8d) list_single_heading_pane_fp_g1

0xc5d0,	// (0x00018f99) list_single_heading_pane_fp_g2_ParamLimits

0xc5d0,	// (0x00018f99) list_single_heading_pane_fp_g2

0xc5dc,	// (0x00018fa5) list_single_heading_pane_fp_g3_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001c57e) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001c57e) list_single_heading_pane_fp_g

0xc785,	// (0x0001914e) list_single_heading_pane_fp_t1_ParamLimits

0xc785,	// (0x0001914e) list_single_heading_pane_fp_t1

0xc797,	// (0x00019160) list_single_heading_pane_fp_t2_ParamLimits

0xc797,	// (0x00019160) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001c585) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c585) list_single_heading_pane_fp_t

0x84b9,	// (0x00014e82) aid_size_cell_fast

0x3f5c,	// (0x00010925) soft_indicator_pane_cp1_t1

0x84c2,	// (0x00014e8b) cell_app_pane_cp2_ParamLimits

0x84c2,	// (0x00014e8b) cell_app_pane_cp2

0x6965,	// (0x0001332e) fep_hwr_candidate_drop_down_list_pane

0x6b3d,	// (0x00013506) fep_hwr_candidate_pane_g3_ParamLimits

0x6b3d,	// (0x00013506) fep_hwr_candidate_pane_g3

0x327e,	// (0x0000fc47) fep_hwr_candidate_pane_g4_ParamLimits

0x327e,	// (0x0000fc47) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001c4f4) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001c4f4) fep_hwr_candidate_pane_g

0xc0ba,	// (0x00018a83) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0ba,	// (0x00018a83) fep_vkb_candidate_drop_down_list_pane

0xc4bd,	// (0x00018e86) fep_vkb_candidate_pane_g3

0xc4c5,	// (0x00018e8e) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001c521) fep_vkb_candidate_pane_g

0x6ba8,	// (0x00013571) cell_hwr_candidate_pane_g1_ParamLimits

0x6bb6,	// (0x0001357f) cell_hwr_candidate_pane_g3_ParamLimits

0x6bb6,	// (0x0001357f) cell_hwr_candidate_pane_g3

0xd397,	// (0x00019d60) cell_hwr_candidate_pane_g4_ParamLimits

0xd397,	// (0x00019d60) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001c540) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001c540) cell_hwr_candidate_pane_g

0xc4dc,	// (0x00018ea5) cell_vkb_candidate_pane_g3_ParamLimits

0xc4dc,	// (0x00018ea5) cell_vkb_candidate_pane_g3

0xc4f7,	// (0x00018ec0) cell_vkb_candidate_pane_g4_ParamLimits

0xc4f7,	// (0x00018ec0) cell_vkb_candidate_pane_g4

0xc7ad,	// (0x00019176) cell_app_pane_cp2_g1_ParamLimits

0xc7ad,	// (0x00019176) cell_app_pane_cp2_g1

0xc7cb,	// (0x00019194) cell_app_pane_cp2_g2_ParamLimits

0xc7cb,	// (0x00019194) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001c58a) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001c58a) cell_app_pane_cp2_g

0xc7d7,	// (0x000191a0) cell_app_pane_cp2_t1_ParamLimits

0xc7d7,	// (0x000191a0) cell_app_pane_cp2_t1

0x4277,	// (0x00010c40) grid_highlight_pane_cp1_ParamLimits

0x4277,	// (0x00010c40) grid_highlight_pane_cp1

0x6bf5,	// (0x000135be) cell_hwr_candidate_pane_cp1_ParamLimits

0x6bf5,	// (0x000135be) cell_hwr_candidate_pane_cp1

0x6ba8,	// (0x00013571) fep_hwr_candidate_drop_down_list_pane_g1

0x6c14,	// (0x000135dd) fep_hwr_candidate_drop_down_list_pane_g2

0x6c21,	// (0x000135ea) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001c58f) fep_hwr_candidate_drop_down_list_pane_g

0x6c2e,	// (0x000135f7) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c37,	// (0x00013600) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c37,	// (0x00013600) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c44,	// (0x0001360d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c44,	// (0x0001360d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c51,	// (0x0001361a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c51,	// (0x0001361a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6c5e,	// (0x00013627) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c5e,	// (0x00013627) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6c79,	// (0x00013642) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c79,	// (0x00013642) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6c94,	// (0x0001365d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6c94,	// (0x0001365d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6caf,	// (0x00013678) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6caf,	// (0x00013678) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6cca,	// (0x00013693) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6cca,	// (0x00013693) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001c596) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001c596) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7e9,	// (0x000191b2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7e9,	// (0x000191b2) cell_vkb_candidate_pane_cp1

0xc1c5,	// (0x00018b8e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1c5,	// (0x00018b8e) fep_vkb_candidate_drop_down_list_pane_g1

0xc809,	// (0x000191d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc809,	// (0x000191d2) fep_vkb_candidate_drop_down_list_pane_g2

0xc816,	// (0x000191df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc816,	// (0x000191df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001c5a7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001c5a7) fep_vkb_candidate_drop_down_list_pane_g

0xc823,	// (0x000191ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc823,	// (0x000191ec) fep_vkb_candidate_drop_down_list_scroll_pane

0xc830,	// (0x000191f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc830,	// (0x000191f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc83d,	// (0x00019206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc83d,	// (0x00019206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc849,	// (0x00019212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc849,	// (0x00019212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc855,	// (0x0001921e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc855,	// (0x0001921e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc876,	// (0x0001923f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc876,	// (0x0001923f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc897,	// (0x00019260) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc897,	// (0x00019260) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b8,	// (0x00019281) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b8,	// (0x00019281) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d9,	// (0x000192a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d9,	// (0x000192a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001c5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001c5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x793c,	// (0x00014305) title_pane_g1_ParamLimits

0x7949,	// (0x00014312) title_pane_g2_ParamLimits

0xf54e,	// (0x0001bf17) title_pane_g_ParamLimits

0x48cb,	// (0x00011294) aid_call2_pane

0x48c3,	// (0x0001128c) aid_call_pane

0x48d3,	// (0x0001129c) popup_clock_analogue_window_g1

0x48d3,	// (0x0001129c) popup_clock_analogue_window_g2

0x5a0e,	// (0x000123d7) popup_clock_analogue_window_g3

0x5a17,	// (0x000123e0) popup_clock_analogue_window_g4

0x3c40,	// (0x00010609) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001c0b2) popup_clock_analogue_window_g

0x5a1f,	// (0x000123e8) popup_clock_analogue_window_t1

0x5a2d,	// (0x000123f6) clock_digital_number_pane_ParamLimits

0x5a2d,	// (0x000123f6) clock_digital_number_pane

0x5a39,	// (0x00012402) clock_digital_number_pane_cp02_ParamLimits

0x5a39,	// (0x00012402) clock_digital_number_pane_cp02

0x5a45,	// (0x0001240e) clock_digital_number_pane_cp03_ParamLimits

0x5a45,	// (0x0001240e) clock_digital_number_pane_cp03

0x5a51,	// (0x0001241a) clock_digital_number_pane_cp04_ParamLimits

0x5a51,	// (0x0001241a) clock_digital_number_pane_cp04

0x5a5d,	// (0x00012426) clock_digital_separator_pane_ParamLimits

0x5a5d,	// (0x00012426) clock_digital_separator_pane

0x5a69,	// (0x00012432) popup_clock_digital_window_t1_ParamLimits

0x5a69,	// (0x00012432) popup_clock_digital_window_t1

0x3c40,	// (0x00010609) clock_digital_number_pane_g1

0x3c40,	// (0x00010609) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0001c0bd) clock_digital_number_pane_g

0x3c40,	// (0x00010609) clock_digital_separator_pane_g1

0x3c40,	// (0x00010609) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0001c0bd) clock_digital_separator_pane_g

0x8f4b,	// (0x00015914) aid_fill_nsta_ParamLimits

0x9097,	// (0x00015a60) indicator_nsta_pane_ParamLimits

0x9210,	// (0x00015bd9) popup_clock_analogue_window

0x9210,	// (0x00015bd9) popup_clock_digital_window

0x3e35,	// (0x000107fe) grid_indicator_nsta_pane_ParamLimits

0xb919,	// (0x000182e2) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001c474) clock_nsta_pane_t

0x59d2,	// (0x0001239b) aid_size_max_handle

0x59dc,	// (0x000123a5) aid_size_min_handle

0x8bd3,	// (0x0001559c) editor_scroll_pane

0xc8f4,	// (0x000192bd) ex_editor_pane

0x43f8,	// (0x00010dc1) scroll_pane_cp13

0x41a9,	// (0x00010b72) scroll_pane_cp14

0x4921,	// (0x000112ea) scroll_pane_cp36

0x861a,	// (0x00014fe3) list_single_graphic_hl_pane_cp2_ParamLimits

0x861a,	// (0x00014fe3) list_single_graphic_hl_pane_cp2

0xab98,	// (0x00017561) list_single_graphic_hl_pane_ParamLimits

0xab98,	// (0x00017561) list_single_graphic_hl_pane

0xc8fc,	// (0x000192c5) aid_size_min_hl_cp1

0xc905,	// (0x000192ce) list_highlight_pane_cp34_ParamLimits

0xc905,	// (0x000192ce) list_highlight_pane_cp34

0xc916,	// (0x000192df) list_single_graphic_hl_pane_g1_ParamLimits

0xc916,	// (0x000192df) list_single_graphic_hl_pane_g1

0xc923,	// (0x000192ec) list_single_graphic_hl_pane_g2_ParamLimits

0xc923,	// (0x000192ec) list_single_graphic_hl_pane_g2

0xc923,	// (0x000192ec) list_single_graphic_hl_pane_g3_ParamLimits

0xc923,	// (0x000192ec) list_single_graphic_hl_pane_g3

0xc92f,	// (0x000192f8) list_single_graphic_hl_pane_g4_ParamLimits

0xc92f,	// (0x000192f8) list_single_graphic_hl_pane_g4

0xc93b,	// (0x00019304) list_single_graphic_hl_pane_g5_ParamLimits

0xc93b,	// (0x00019304) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001c5bf) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001c5bf) list_single_graphic_hl_pane_g

0xc94f,	// (0x00019318) list_single_graphic_hl_pane_t1_ParamLimits

0xc94f,	// (0x00019318) list_single_graphic_hl_pane_t1

0xc965,	// (0x0001932e) aid_size_min_hl_cp2

0xc96e,	// (0x00019337) list_highlight_pane_cp34_cp2_ParamLimits

0xc96e,	// (0x00019337) list_highlight_pane_cp34_cp2

0xc916,	// (0x000192df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc916,	// (0x000192df) list_single_graphic_hl_pane_g1_cp2

0xc97b,	// (0x00019344) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc97b,	// (0x00019344) list_single_graphic_hl_pane_g2_cp2

0xc987,	// (0x00019350) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc987,	// (0x00019350) list_single_graphic_hl_pane_g3_cp2

0x8b0c,	// (0x000154d5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8b0c,	// (0x000154d5) list_single_graphic_hl_pane_g4_cp2

0xc995,	// (0x0001935e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc995,	// (0x0001935e) list_single_graphic_hl_pane_g5_cp2

0x5d14,	// (0x000126dd) control_pane_g4_ParamLimits

0x5d14,	// (0x000126dd) control_pane_g4

0x8f21,	// (0x000158ea) bg_popup_sub_pane_cp10_ParamLimits

0xbf5f,	// (0x00018928) list_choice_list_pane_ParamLimits

0xbf6e,	// (0x00018937) scroll_pane_cp23

0x3f79,	// (0x00010942) bg_popup_preview_window_pane_cp02_ParamLimits

0xc568,	// (0x00018f31) list_preview_fixed_pane_ParamLimits

0xc57e,	// (0x00018f47) list_preview_fixed_pane_cp_ParamLimits

0xc57e,	// (0x00018f47) list_preview_fixed_pane_cp

0xc58a,	// (0x00018f53) popup_preview_fixed_window_g1_ParamLimits

0xc58a,	// (0x00018f53) popup_preview_fixed_window_g1

0xc596,	// (0x00018f5f) popup_preview_fixed_window_g2_ParamLimits

0xc596,	// (0x00018f5f) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001c547) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001c547) popup_preview_fixed_window_g

0x5946,	// (0x0001230f) aid_navi_side_left_pane_ParamLimits

0x595b,	// (0x00012324) aid_navi_side_right_pane_ParamLimits

0x5973,	// (0x0001233c) navi_icon_pane_stacon_ParamLimits

0x5987,	// (0x00012350) navi_navi_pane_stacon_ParamLimits

0x5973,	// (0x0001233c) navi_text_pane_stacon_ParamLimits

0x556c,	// (0x00011f35) main_text_info_pane

0xc9bf,	// (0x00019388) listscroll_text_info_pane

0xc9c7,	// (0x00019390) list_text_info_pane_ParamLimits

0xc9c7,	// (0x00019390) list_text_info_pane

0xc9d6,	// (0x0001939f) scroll_pane_cp24_ParamLimits

0xc9d6,	// (0x0001939f) scroll_pane_cp24

0xc9f4,	// (0x000193bd) list_text_info_pane_t1_ParamLimits

0xc9f4,	// (0x000193bd) list_text_info_pane_t1

0x5e90,	// (0x00012859) popup_fast_swap2_window_ParamLimits

0x5e90,	// (0x00012859) popup_fast_swap2_window

0xca28,	// (0x000193f1) aid_size_cell_fast2

0x3c36,	// (0x000105ff) bg_popup_window_pane_cp17

0x99ac,	// (0x00016375) heading_pane_cp2

0x40ad,	// (0x00010a76) listscroll_fast2_pane

0xca32,	// (0x000193fb) grid_fast2_pane

0xca3c,	// (0x00019405) listscroll_fast2_pane_g1

0xca44,	// (0x0001940d) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001c5ca) listscroll_fast2_pane_g

0x43f8,	// (0x00010dc1) scroll_pane_cp26

0xca4e,	// (0x00019417) cell_fast2_pane_ParamLimits

0xca4e,	// (0x00019417) cell_fast2_pane

0xca63,	// (0x0001942c) cell_fast2_pane_g1

0xca6c,	// (0x00019435) cell_fast2_pane_g2

0xca75,	// (0x0001943e) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001c5cf) cell_fast2_pane_g

0x40e0,	// (0x00010aa9) grid_highlight_pane_cp9

0x5e58,	// (0x00012821) main_eswt_pane_ParamLimits

0x5e58,	// (0x00012821) main_eswt_pane

0xc9eb,	// (0x000193b4) list_single_text_info_pane

0xca7d,	// (0x00019446) eswt_ctrl_button_pane

0xca7d,	// (0x00019446) eswt_ctrl_canvas_pane

0xca85,	// (0x0001944e) eswt_ctrl_combo_pane

0xca7d,	// (0x00019446) eswt_ctrl_default_pane

0xca7d,	// (0x00019446) eswt_ctrl_label_pane

0xca8d,	// (0x00019456) eswt_ctrl_wait_pane

0xca95,	// (0x0001945e) eswt_shell_pane

0x3c36,	// (0x000105ff) listscroll_eswt_app_pane

0xcab5,	// (0x0001947e) popup_eswt_tasktip_window_ParamLimits

0xcab5,	// (0x0001947e) popup_eswt_tasktip_window

0x9578,	// (0x00015f41) bg_popup_window_pane_cp18

0xcac6,	// (0x0001948f) eswt_control_pane_g1_ParamLimits

0xcac6,	// (0x0001948f) eswt_control_pane_g1

0xcad3,	// (0x0001949c) eswt_control_pane_g2_ParamLimits

0xcad3,	// (0x0001949c) eswt_control_pane_g2

0xcae0,	// (0x000194a9) eswt_control_pane_g3_ParamLimits

0xcae0,	// (0x000194a9) eswt_control_pane_g3

0xcaed,	// (0x000194b6) eswt_control_pane_g4_ParamLimits

0xcaed,	// (0x000194b6) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001c5d6) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001c5d6) eswt_control_pane_g

0x4277,	// (0x00010c40) bg_button_pane_ParamLimits

0x4277,	// (0x00010c40) bg_button_pane

0x40f5,	// (0x00010abe) common_borders_pane_copy2_ParamLimits

0x40f5,	// (0x00010abe) common_borders_pane_copy2

0xcafa,	// (0x000194c3) control_button_pane_g1_ParamLimits

0xcafa,	// (0x000194c3) control_button_pane_g1

0xcb06,	// (0x000194cf) control_button_pane_g2_ParamLimits

0xcb06,	// (0x000194cf) control_button_pane_g2

0xcb12,	// (0x000194db) control_button_pane_g3_ParamLimits

0xcb12,	// (0x000194db) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001c5df) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001c5df) control_button_pane_g

0xcb26,	// (0x000194ef) control_button_pane_t1

0xcb34,	// (0x000194fd) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001c5e6) control_button_pane_t

0x9458,	// (0x00015e21) bg_button_pane_g1

0x9468,	// (0x00015e31) bg_button_pane_g2

0x9460,	// (0x00015e29) bg_button_pane_g3

0x9478,	// (0x00015e41) bg_button_pane_g4

0x9470,	// (0x00015e39) bg_button_pane_g5

0x9480,	// (0x00015e49) bg_button_pane_g6

0x9488,	// (0x00015e51) bg_button_pane_g7

0x9498,	// (0x00015e61) bg_button_pane_g8

0x9490,	// (0x00015e59) bg_button_pane_g9

0x0008,

0xf857,	// (0x0001c220) bg_button_pane_g

0xbf1a,	// (0x000188e3) common_borders_pane_ParamLimits

0xbf1a,	// (0x000188e3) common_borders_pane

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy1_ParamLimits

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy1

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy1_ParamLimits

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy1

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy1_ParamLimits

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy1

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy1_ParamLimits

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy1

0xbf55,	// (0x0001891e) bg_eswt_ctrl_canvas_pane_g1

0xbf1a,	// (0x000188e3) common_borders_pane_cp2_ParamLimits

0xbf1a,	// (0x000188e3) common_borders_pane_cp2

0xbf1a,	// (0x000188e3) common_borders_pane_cp3_ParamLimits

0xbf1a,	// (0x000188e3) common_borders_pane_cp3

0xcb42,	// (0x0001950b) separator_horizontal_pane

0xcb4a,	// (0x00019513) separator_vertical_pane

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy2_ParamLimits

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy2

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy2_ParamLimits

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy2

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy2_ParamLimits

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy2

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy2_ParamLimits

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy2

0x3c36,	// (0x000105ff) common_borders_pane_cp4

0xcb53,	// (0x0001951c) separator_horizontal_pane_g1

0xcb5c,	// (0x00019525) separator_horizontal_pane_g2

0xcb65,	// (0x0001952e) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001c5eb) separator_horizontal_pane_g

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy3_ParamLimits

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy3

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy3_ParamLimits

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy3

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy3_ParamLimits

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy3

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy3_ParamLimits

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy3

0x3c36,	// (0x000105ff) common_borders_pane_cp5

0xcb6e,	// (0x00019537) separator_vertical_pane_g1

0xcb77,	// (0x00019540) separator_vertical_pane_g2

0xcb80,	// (0x00019549) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001c5f2) separator_vertical_pane_g

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy4_ParamLimits

0xcac6,	// (0x0001948f) eswt_control_pane_g1_copy4

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy4_ParamLimits

0xcad3,	// (0x0001949c) eswt_control_pane_g2_copy4

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy4_ParamLimits

0xcae0,	// (0x000194a9) eswt_control_pane_g3_copy4

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy4_ParamLimits

0xcaed,	// (0x000194b6) eswt_control_pane_g4_copy4

0xcb89,	// (0x00019552) eswt_ctrl_combo_button_pane

0xcb91,	// (0x0001955a) eswt_ctrl_input_pane

0xcb99,	// (0x00019562) popup_choice_list_window_cp70

0xcba1,	// (0x0001956a) eswt_ctrl_input_pane_t1

0x3c36,	// (0x000105ff) input_focus_pane_cp70

0xbf1a,	// (0x000188e3) bg_button_pane_cp70_ParamLimits

0xbf1a,	// (0x000188e3) bg_button_pane_cp70

0xcbaf,	// (0x00019578) eswt_ctrl_combo_button_pane_g1

0xcbb7,	// (0x00019580) wait_bar_pane_cp70

0x9578,	// (0x00015f41) bg_popup_window_pane_cp70_ParamLimits

0x9578,	// (0x00015f41) bg_popup_window_pane_cp70

0xcbbf,	// (0x00019588) popup_eswt_tasktip_window_t1

0xcbd5,	// (0x0001959e) wait_bar_pane_cp71_ParamLimits

0xcbd5,	// (0x0001959e) wait_bar_pane_cp71

0xcbe1,	// (0x000195aa) grid_eswt_app_pane

0x47a7,	// (0x00011170) scroll_pane_cp70

0xcbea,	// (0x000195b3) cell_eswt_app_pane_ParamLimits

0xcbea,	// (0x000195b3) cell_eswt_app_pane

0xcc1a,	// (0x000195e3) cell_eswt_app_pane_g1_ParamLimits

0xcc1a,	// (0x000195e3) cell_eswt_app_pane_g1

0xcc49,	// (0x00019612) cell_eswt_app_pane_g2_ParamLimits

0xcc49,	// (0x00019612) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001c5f9) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001c5f9) cell_eswt_app_pane_g

0xcc6d,	// (0x00019636) cell_eswt_app_pane_t1_ParamLimits

0xcc6d,	// (0x00019636) cell_eswt_app_pane_t1

0xcc9f,	// (0x00019668) grid_highlight_pane_cp70_ParamLimits

0xcc9f,	// (0x00019668) grid_highlight_pane_cp70

0x8aa8,	// (0x00015471) set_content_pane_g1

0x8e7a,	// (0x00015843) status_small_volume_pane

0x6ce5,	// (0x000136ae) status_small_volume_pane_g1

0x6ced,	// (0x000136b6) volume_small2_pane

0x6cf6,	// (0x000136bf) volume_small2_pane_g1

0x6cff,	// (0x000136c8) volume_small2_pane_g2

0x6d08,	// (0x000136d1) volume_small2_pane_g3

0x6d11,	// (0x000136da) volume_small2_pane_g4

0x6d1a,	// (0x000136e3) volume_small2_pane_g5

0x6d23,	// (0x000136ec) volume_small2_pane_g6

0x6d2c,	// (0x000136f5) volume_small2_pane_g7

0x6d35,	// (0x000136fe) volume_small2_pane_g8

0x6d3e,	// (0x00013707) volume_small2_pane_g9

0x6d47,	// (0x00013710) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001c5fe) volume_small2_pane_g

0xc30d,	// (0x00018cd6) fep_vkb_top_text_pane_g1_ParamLimits

0xc328,	// (0x00018cf1) fep_vkb_top_text_pane_t1_ParamLimits

0xc5a2,	// (0x00018f6b) popup_preview_fixed_window_g3_ParamLimits

0xc5a2,	// (0x00018f6b) popup_preview_fixed_window_g3

0x633f,	// (0x00012d08) popup_toolbar_trans_pane

0xa8f5,	// (0x000172be) aid_height_set_list_ParamLimits

0xa906,	// (0x000172cf) aid_size_parent_ParamLimits

0x8f21,	// (0x000158ea) list_highlight_pane_cp2_ParamLimits

0x8aa8,	// (0x00015471) set_content_pane_g1_ParamLimits

0xabb7,	// (0x00017580) list_single_image_pane_ParamLimits

0xabb7,	// (0x00017580) list_single_image_pane

0xccab,	// (0x00019674) aid_size_cell_image_ParamLimits

0xccab,	// (0x00019674) aid_size_cell_image

0xccb8,	// (0x00019681) grid_single_image_pane_ParamLimits

0xccb8,	// (0x00019681) grid_single_image_pane

0xc5d0,	// (0x00018f99) list_single_image_pane_g1_ParamLimits

0xc5d0,	// (0x00018f99) list_single_image_pane_g1

0xc5dc,	// (0x00018fa5) list_single_image_pane_g2_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001c613) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001c613) list_single_image_pane_g

0xccc6,	// (0x0001968f) list_single_image_pane_t1_ParamLimits

0xccc6,	// (0x0001968f) list_single_image_pane_t1

0xccdc,	// (0x000196a5) cell_image_list_pane_ParamLimits

0xccdc,	// (0x000196a5) cell_image_list_pane

0xccf0,	// (0x000196b9) cell_image_list_pane_g1

0xccf9,	// (0x000196c2) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001c618) cell_image_list_pane_g

0xcd02,	// (0x000196cb) aid_size_cell_tb_trans_pane

0x4277,	// (0x00010c40) bg_tb_trans_pane

0xcd14,	// (0x000196dd) grid_tb_trans_pane

0x9458,	// (0x00015e21) bg_tb_trans_pane_g1

0x9468,	// (0x00015e31) bg_tb_trans_pane_g2

0x9460,	// (0x00015e29) bg_tb_trans_pane_g3

0x9478,	// (0x00015e41) bg_tb_trans_pane_g4

0x9470,	// (0x00015e39) bg_tb_trans_pane_g5

0x9498,	// (0x00015e61) bg_tb_trans_pane_g6

0x9490,	// (0x00015e59) bg_tb_trans_pane_g7

0x9480,	// (0x00015e49) bg_tb_trans_pane_g8

0x9488,	// (0x00015e51) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001c61d) bg_tb_trans_pane_g

0xcd28,	// (0x000196f1) cell_toolbar_trans_pane_ParamLimits

0xcd28,	// (0x000196f1) cell_toolbar_trans_pane

0xbf55,	// (0x0001891e) cell_toolbar_trans_pane_g1

0xbad9,	// (0x000184a2) list_form2_midp_pane_t1

0xbae7,	// (0x000184b0) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001c4ba) list_form2_midp_pane_t

0xbaf5,	// (0x000184be) scroll_pane_cp51_ParamLimits

0xbcfe,	// (0x000186c7) form2_midp_wait_pane_g1

0xbd07,	// (0x000186d0) form2_midp_wait_pane_g2

0xbd10,	// (0x000186d9) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001c4cf) form2_midp_wait_pane_g

0x3e35,	// (0x000107fe) list_highlight_pane_cp21_ParamLimits

0xbd58,	// (0x00018721) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd67,	// (0x00018730) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab39,	// (0x00017502) list_single_2graphic_im_pane_ParamLimits

0xab39,	// (0x00017502) list_single_2graphic_im_pane

0xcd4e,	// (0x00019717) list_single_2graphic_im_pane_g1_ParamLimits

0xcd4e,	// (0x00019717) list_single_2graphic_im_pane_g1

0xcd5f,	// (0x00019728) list_single_2graphic_im_pane_g2_ParamLimits

0xcd5f,	// (0x00019728) list_single_2graphic_im_pane_g2

0xcd6b,	// (0x00019734) list_single_2graphic_im_pane_g3_ParamLimits

0xcd6b,	// (0x00019734) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001c630) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001c630) list_single_2graphic_im_pane_g

0xcd8b,	// (0x00019754) list_single_2graphic_im_pane_t1_ParamLimits

0xcd8b,	// (0x00019754) list_single_2graphic_im_pane_t1

0xc5ae,	// (0x00018f77) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5ae,	// (0x00018f77) list_single_graphic_2heading_pane_fp

0xc613,	// (0x00018fdc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc613,	// (0x00018fdc) list_single_graphic_2heading_pane_fp_g1

0xc5c4,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5c4,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_g2

0xc5d0,	// (0x00018f99) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5d0,	// (0x00018f99) list_single_graphic_2heading_pane_fp_g3

0xc5dc,	// (0x00018fa5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc5dc,	// (0x00018fa5) list_single_graphic_2heading_pane_fp_g4

0xc5f0,	// (0x00018fb9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5f0,	// (0x00018fb9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c557) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c557) list_single_graphic_2heading_pane_fp_g

0xcdbc,	// (0x00019785) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcdbc,	// (0x00019785) list_single_graphic_2heading_pane_fp_t1

0xc64b,	// (0x00019014) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc64b,	// (0x00019014) list_single_graphic_2heading_pane_fp_t2

0xcdd2,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdd2,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001c639) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001c639) list_single_graphic_2heading_pane_fp_t

0xbfe1,	// (0x000189aa) fep_hwr_write_pane_g5_ParamLimits

0xbfe1,	// (0x000189aa) fep_hwr_write_pane_g5

0xbfed,	// (0x000189b6) fep_hwr_write_pane_g6_ParamLimits

0xbfed,	// (0x000189b6) fep_hwr_write_pane_g6

0xca95,	// (0x0001945e) eswt_shell_pane_ParamLimits

0x9578,	// (0x00015f41) bg_popup_window_pane_cp18_ParamLimits

0xa83c,	// (0x00017205) heading_pane_cp70

0xcbbf,	// (0x00019588) popup_eswt_tasktip_window_t1_ParamLimits

0x8fa0,	// (0x00015969) aid_touch_tab_arrow_left

0x8faf,	// (0x00015978) aid_touch_tab_arrow_right

0x795a,	// (0x00014323) title_pane_g3_ParamLimits

0x795a,	// (0x00014323) title_pane_g3

0x420e,	// (0x00010bd7) set_value_pane_g1

0x633f,	// (0x00012d08) popup_toolbar_trans_pane_ParamLimits

0xcd02,	// (0x000196cb) aid_size_cell_tb_trans_pane_ParamLimits

0x4277,	// (0x00010c40) bg_tb_trans_pane_ParamLimits

0xcd14,	// (0x000196dd) grid_tb_trans_pane_ParamLimits

0x3f79,	// (0x00010942) cont_note_pane_ParamLimits

0x3f79,	// (0x00010942) cont_note_pane

0x40f5,	// (0x00010abe) cont_snote2_single_text_pane_ParamLimits

0x40f5,	// (0x00010abe) cont_snote2_single_text_pane

0x40f5,	// (0x00010abe) cont_snote2_single_graphic_pane_ParamLimits

0x40f5,	// (0x00010abe) cont_snote2_single_graphic_pane

0x9bbf,	// (0x00016588) cont_note_wait_pane_ParamLimits

0x9bbf,	// (0x00016588) cont_note_wait_pane

0x9bbf,	// (0x00016588) cont_note_image_pane_ParamLimits

0x9bbf,	// (0x00016588) cont_note_image_pane

0xcde8,	// (0x000197b1) popup_note2_window_g1_ParamLimits

0xcde8,	// (0x000197b1) popup_note2_window_g1

0xce19,	// (0x000197e2) popup_note2_window_t1_ParamLimits

0xce19,	// (0x000197e2) popup_note2_window_t1

0xce5e,	// (0x00019827) popup_note2_window_t2_ParamLimits

0xce5e,	// (0x00019827) popup_note2_window_t2

0xcea3,	// (0x0001986c) popup_note2_window_t3_ParamLimits

0xcea3,	// (0x0001986c) popup_note2_window_t3

0xcee8,	// (0x000198b1) popup_note2_window_t4_ParamLimits

0xcee8,	// (0x000198b1) popup_note2_window_t4

0x3ffd,	// (0x000109c6) popup_note2_window_t5_ParamLimits

0x3ffd,	// (0x000109c6) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001c645) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001c645) popup_note2_window_t

0xcf17,	// (0x000198e0) popup_note2_image_window_g1_ParamLimits

0xcf17,	// (0x000198e0) popup_note2_image_window_g1

0xcf23,	// (0x000198ec) popup_note2_image_window_g2_ParamLimits

0xcf23,	// (0x000198ec) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001c650) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001c650) popup_note2_image_window_g

0xcf35,	// (0x000198fe) popup_note2_image_window_t1_ParamLimits

0xcf35,	// (0x000198fe) popup_note2_image_window_t1

0xcf4d,	// (0x00019916) popup_note2_image_window_t2_ParamLimits

0xcf4d,	// (0x00019916) popup_note2_image_window_t2

0xcf65,	// (0x0001992e) popup_note2_image_window_t3_ParamLimits

0xcf65,	// (0x0001992e) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001c655) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001c655) popup_note2_image_window_t

0x9bcd,	// (0x00016596) popup_note2_wait_window_g1_ParamLimits

0x9bcd,	// (0x00016596) popup_note2_wait_window_g1

0x9bd9,	// (0x000165a2) popup_note2_wait_window_g2_ParamLimits

0x9bd9,	// (0x000165a2) popup_note2_wait_window_g2

0x9be5,	// (0x000165ae) popup_note2_wait_window_g3_ParamLimits

0x9be5,	// (0x000165ae) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0001c202) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0001c202) popup_note2_wait_window_g

0xcf81,	// (0x0001994a) popup_note2_wait_window_t1_ParamLimits

0xcf81,	// (0x0001994a) popup_note2_wait_window_t1

0xcf9f,	// (0x00019968) popup_note2_wait_window_t2_ParamLimits

0xcf9f,	// (0x00019968) popup_note2_wait_window_t2

0xcfbd,	// (0x00019986) popup_note2_wait_window_t3_ParamLimits

0xcfbd,	// (0x00019986) popup_note2_wait_window_t3

0xcfcf,	// (0x00019998) popup_note2_wait_window_t4_ParamLimits

0xcfcf,	// (0x00019998) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001c65c) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001c65c) popup_note2_wait_window_t

0xcfe1,	// (0x000199aa) wait_bar2_pane_ParamLimits

0xcfe1,	// (0x000199aa) wait_bar2_pane

0xcff9,	// (0x000199c2) popup_snote2_single_text_window_g1_ParamLimits

0xcff9,	// (0x000199c2) popup_snote2_single_text_window_g1

0xd021,	// (0x000199ea) popup_snote2_single_text_window_t1_ParamLimits

0xd021,	// (0x000199ea) popup_snote2_single_text_window_t1

0xd06d,	// (0x00019a36) popup_snote2_single_text_window_t2_ParamLimits

0xd06d,	// (0x00019a36) popup_snote2_single_text_window_t2

0xd0b9,	// (0x00019a82) popup_snote2_single_text_window_t3_ParamLimits

0xd0b9,	// (0x00019a82) popup_snote2_single_text_window_t3

0xd0fa,	// (0x00019ac3) popup_snote2_single_text_window_t4_ParamLimits

0xd0fa,	// (0x00019ac3) popup_snote2_single_text_window_t4

0xd130,	// (0x00019af9) popup_snote2_single_text_window_t5_ParamLimits

0xd130,	// (0x00019af9) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001c665) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001c665) popup_snote2_single_text_window_t

0xd15b,	// (0x00019b24) popup_snote2_single_graphic_window_g1_ParamLimits

0xd15b,	// (0x00019b24) popup_snote2_single_graphic_window_g1

0xd183,	// (0x00019b4c) popup_snote2_single_graphic_window_g2_ParamLimits

0xd183,	// (0x00019b4c) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001c670) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001c670) popup_snote2_single_graphic_window_g

0xd1ab,	// (0x00019b74) popup_snote2_single_graphic_window_t1_ParamLimits

0xd1ab,	// (0x00019b74) popup_snote2_single_graphic_window_t1

0xd1f7,	// (0x00019bc0) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1f7,	// (0x00019bc0) popup_snote2_single_graphic_window_t2

0xd0b9,	// (0x00019a82) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0b9,	// (0x00019a82) popup_snote2_single_graphic_window_t3

0xd0fa,	// (0x00019ac3) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0fa,	// (0x00019ac3) popup_snote2_single_graphic_window_t4

0xd130,	// (0x00019af9) popup_snote2_single_graphic_window_t5_ParamLimits

0xd130,	// (0x00019af9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001c675) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001c675) popup_snote2_single_graphic_window_t

0xb9b2,	// (0x0001837b) clock_nsta_pane_cp2_t1

0xb9b2,	// (0x0001837b) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001c490) clock_nsta_pane_cp2_t

0x4296,	// (0x00010c5f) form_field_data_wide_pane_g1_ParamLimits

0x41de,	// (0x00010ba7) form_field_data_wide_pane_g2_ParamLimits

0x41de,	// (0x00010ba7) form_field_data_wide_pane_g2

0x42a2,	// (0x00010c6b) form_field_data_wide_pane_g3_ParamLimits

0x42a2,	// (0x00010c6b) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0001c035) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0001c035) form_field_data_wide_pane_g

0xb8b5,	// (0x0001827e) grid_touch_3_pane_ParamLimits

0xb8b5,	// (0x0001827e) grid_touch_3_pane

0xd243,	// (0x00019c0c) cell_touch_3_pane_ParamLimits

0xd243,	// (0x00019c0c) cell_touch_3_pane

0xbf55,	// (0x0001891e) cell_touch_3_pane_g1

0xbf55,	// (0x0001891e) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001c515) cell_touch_3_pane_g

0x402f,	// (0x000109f8) cont_query_data_pane

0x4037,	// (0x00010a00) cont_query_data_pane_cp1

0xd271,	// (0x00019c3a) button_value_adjust_pane_cp7

0xd279,	// (0x00019c42) query_popup_pane_cp3

0x49ae,	// (0x00011377) bg_popup_sub_pane_cp22_ParamLimits

0x5a88,	// (0x00012451) navi_navi_volume_pane_cp2

0x5aa0,	// (0x00012469) popup_side_volume_key_window_g2

0x5aac,	// (0x00012475) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0001c0cb) popup_side_volume_key_window_g

0x5ac6,	// (0x0001248f) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0001c0d2) popup_side_volume_key_window_t

0x8975,	// (0x0001533e) popup_side_volume_key_window_ParamLimits

0x8025,	// (0x000149ee) list_double_graphic_pane_g4_ParamLimits

0x8025,	// (0x000149ee) list_double_graphic_pane_g4

0xab78,	// (0x00017541) list_single_2heading_msg_pane_ParamLimits

0xab78,	// (0x00017541) list_single_2heading_msg_pane

0xd2a8,	// (0x00019c71) list_single_2heading_msg_pane_g1_ParamLimits

0xd2a8,	// (0x00019c71) list_single_2heading_msg_pane_g1

0x7e78,	// (0x00014841) list_single_2heading_msg_pane_g2_ParamLimits

0x7e78,	// (0x00014841) list_single_2heading_msg_pane_g2

0xd2b4,	// (0x00019c7d) list_single_2heading_msg_pane_g3_ParamLimits

0xd2b4,	// (0x00019c7d) list_single_2heading_msg_pane_g3

0xd2c0,	// (0x00019c89) list_single_2heading_msg_pane_g4_ParamLimits

0xd2c0,	// (0x00019c89) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001c680) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001c680) list_single_2heading_msg_pane_g

0xd2d8,	// (0x00019ca1) list_single_2heading_msg_pane_t1_ParamLimits

0xd2d8,	// (0x00019ca1) list_single_2heading_msg_pane_t1

0xd300,	// (0x00019cc9) list_single_2heading_msg_pane_t2_ParamLimits

0xd300,	// (0x00019cc9) list_single_2heading_msg_pane_t2

0xd32f,	// (0x00019cf8) list_single_2heading_msg_pane_t3_ParamLimits

0xd32f,	// (0x00019cf8) list_single_2heading_msg_pane_t3

0xd368,	// (0x00019d31) list_single_2heading_msg_pane_t4_ParamLimits

0xd368,	// (0x00019d31) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001c689) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001c689) list_single_2heading_msg_pane_t

0x3de3,	// (0x000107ac) title_pane_g4_ParamLimits

0x3de3,	// (0x000107ac) title_pane_g4

0x5897,	// (0x00012260) title_pane_stacon_g3_ParamLimits

0x5897,	// (0x00012260) title_pane_stacon_g3

0xcd7f,	// (0x00019748) list_single_2graphic_im_pane_g4_ParamLimits

0xcd7f,	// (0x00019748) list_single_2graphic_im_pane_g4

0xa606,	// (0x00016fcf) popup_side_volume_key_window_cp

0xaef5,	// (0x000178be) main_idle_act2_pane_t1

0x649b,	// (0x00012e64) toolbar_button_pane_g10

0x7e62,	// (0x0001482b) popup_toolbar_window_cp1

0xb9a3,	// (0x0001836c) clock_nsta_pane_cp_t1

0xb9a3,	// (0x0001836c) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001c48b) clock_nsta_pane_cp_t

0x5a88,	// (0x00012451) navi_navi_volume_pane_cp2_ParamLimits

0x5a94,	// (0x0001245d) popup_side_volume_key_window_g1_ParamLimits

0x5aa0,	// (0x00012469) popup_side_volume_key_window_g2_ParamLimits

0x5aac,	// (0x00012475) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0001c0cb) popup_side_volume_key_window_g_ParamLimits

0x6951,	// (0x0001331a) fep_hwr_aid_pane

0x69f8,	// (0x000133c1) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfb1,	// (0x0001897a) fep_hwr_top_pane_g1_ParamLimits

0xbfc3,	// (0x0001898c) fep_hwr_top_pane_g2_ParamLimits

0x6a18,	// (0x000133e1) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001c4e0) fep_hwr_top_pane_g_ParamLimits

0x6a2d,	// (0x000133f6) fep_hwr_top_text_pane_ParamLimits

0xa3c9,	// (0x00016d92) aid_touch_tab_arrow_arrow_2

0xa3d2,	// (0x00016d9b) aid_touch_tab_arrow_left_2

0x6965,	// (0x0001332e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x699c,	// (0x00013365) fep_hwr_prediction_pane

0xc11c,	// (0x00018ae5) fep_vkb_prediction_pane

0xc219,	// (0x00018be2) fep_vkb_side_pane_g3_ParamLimits

0xc219,	// (0x00018be2) fep_vkb_side_pane_g3

0x6ba8,	// (0x00013571) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c14,	// (0x000135dd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c21,	// (0x000135ea) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001c58f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6d50,	// (0x00013719) fep_hwr_prediction_pane_g1

0x6d5a,	// (0x00013723) fep_hwr_prediction_pane_g2

0x6d62,	// (0x0001372b) fep_hwr_prediction_pane_g3

0x6d6a,	// (0x00013733) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001c692) fep_hwr_prediction_pane_g

0xd38d,	// (0x00019d56) fep_vkb_prediction_pane_g1

0xd3b8,	// (0x00019d81) fep_vkb_prediction_pane_g2

0xd3c0,	// (0x00019d89) fep_vkb_prediction_pane_g3

0xd3c8,	// (0x00019d91) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001c69b) fep_vkb_prediction_pane_g

0x6789,	// (0x00013152) slider_set_pane_g3

0x679d,	// (0x00013166) slider_set_pane_g4

0x67b5,	// (0x0001317e) slider_set_pane_g5

0x6789,	// (0x00013152) slider_set_pane_g6

0x67cb,	// (0x00013194) slider_set_pane_g7

0xaa67,	// (0x00017430) slider_form_pane_g3

0xaa70,	// (0x00017439) slider_form_pane_g4

0xaa78,	// (0x00017441) slider_form_pane_g5

0xaa67,	// (0x00017430) slider_form_pane_g6

0xaa80,	// (0x00017449) slider_form_pane_g7

0xb1d8,	// (0x00017ba1) slider_set_pane_vc_g3

0xb1e1,	// (0x00017baa) slider_set_pane_vc_g4

0xb1ea,	// (0x00017bb3) slider_set_pane_vc_g5

0xb1d8,	// (0x00017ba1) slider_set_pane_vc_g6

0xb1f3,	// (0x00017bbc) slider_set_pane_vc_g7

0xb688,	// (0x00018051) slider_form_pane_vc_g1

0xb691,	// (0x0001805a) slider_form_pane_vc_g2

0xb69a,	// (0x00018063) slider_form_pane_vc_g3

0xb688,	// (0x00018051) slider_form_pane_vc_g4

0xb6a3,	// (0x0001806c) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001c45d) slider_form_pane_vc_g

0x556c,	// (0x00011f35) main_idle_act3_pane

0xd3d0,	// (0x00019d99) ai3_links_pane

0xd3d9,	// (0x00019da2) popup_ai3_data_window_ParamLimits

0xd3d9,	// (0x00019da2) popup_ai3_data_window

0x3c36,	// (0x000105ff) grid_ai3_links_pane

0xd3f1,	// (0x00019dba) cell_ai3_links_pane_ParamLimits

0xd3f1,	// (0x00019dba) cell_ai3_links_pane

0xd409,	// (0x00019dd2) bg_popup_sub_pane_cp11

0xd416,	// (0x00019ddf) cell_ai3_links_pane_g1

0x3c36,	// (0x000105ff) bg_popup_sub_pane_cp12

0xd43b,	// (0x00019e04) heading_ai3_data_pane

0xd443,	// (0x00019e0c) list_ai3_gene_pane

0xd44f,	// (0x00019e18) popup_ai3_data_window_g1

0xd457,	// (0x00019e20) heading_ai3_data_pane_g1

0xd45f,	// (0x00019e28) heading_ai3_data_pane_t1

0xd46d,	// (0x00019e36) list_double_ai3_gene_pane_ParamLimits

0xd46d,	// (0x00019e36) list_double_ai3_gene_pane

0xd47a,	// (0x00019e43) list_single_ai3_gene_pane_ParamLimits

0xd47a,	// (0x00019e43) list_single_ai3_gene_pane

0xbf1a,	// (0x000188e3) list_highlight_pane_cp7_ParamLimits

0xbf1a,	// (0x000188e3) list_highlight_pane_cp7

0xd487,	// (0x00019e50) list_single_a13_gene_pane_t1_ParamLimits

0xd487,	// (0x00019e50) list_single_a13_gene_pane_t1

0xd49e,	// (0x00019e67) list_single_ai3_gene_pane_g1

0xd4a7,	// (0x00019e70) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001c6a4) list_single_ai3_gene_pane_g

0xd4af,	// (0x00019e78) list_double_ai3_gene_pane_g1_ParamLimits

0xd4af,	// (0x00019e78) list_double_ai3_gene_pane_g1

0xd4bb,	// (0x00019e84) list_double_ai3_gene_pane_t1_ParamLimits

0xd4bb,	// (0x00019e84) list_double_ai3_gene_pane_t1

0xd4d7,	// (0x00019ea0) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d7,	// (0x00019ea0) list_double_ai3_gene_pane_t2

0xd4ec,	// (0x00019eb5) list_double_ai3_gene_pane_t3_ParamLimits

0xd4ec,	// (0x00019eb5) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001c6a9) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001c6a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd28a,	// (0x00019c53) aid_size_min_col_2

0xd294,	// (0x00019c5d) aid_size_min_msg_ParamLimits

0xd294,	// (0x00019c5d) aid_size_min_msg

0xc319,	// (0x00018ce2) fep_vkb_top_text_pane_g2_ParamLimits

0xc319,	// (0x00018ce2) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001c510) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001c510) fep_vkb_top_text_pane_g

0x556c,	// (0x00011f35) main_hc_apps_shell_pane

0xd509,	// (0x00019ed2) grid_hc_apps_pane_ParamLimits

0xd509,	// (0x00019ed2) grid_hc_apps_pane

0xd518,	// (0x00019ee1) list_hc_apps_pane

0xd520,	// (0x00019ee9) scroll_pane_cp37_ParamLimits

0xd520,	// (0x00019ee9) scroll_pane_cp37

0xd52c,	// (0x00019ef5) cell_hc_apps_pane_ParamLimits

0xd52c,	// (0x00019ef5) cell_hc_apps_pane

0xd5da,	// (0x00019fa3) cell_hc_apps_pane_g1_ParamLimits

0xd5da,	// (0x00019fa3) cell_hc_apps_pane_g1

0xd60b,	// (0x00019fd4) cell_hc_apps_pane_g2_ParamLimits

0xd60b,	// (0x00019fd4) cell_hc_apps_pane_g2

0xd627,	// (0x00019ff0) cell_hc_apps_pane_g3_ParamLimits

0xd627,	// (0x00019ff0) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001c6b0) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001c6b0) cell_hc_apps_pane_g

0xd649,	// (0x0001a012) cell_hc_apps_pane_t1_ParamLimits

0xd649,	// (0x0001a012) cell_hc_apps_pane_t1

0x3f79,	// (0x00010942) grid_highlight_pane_cp10_ParamLimits

0x3f79,	// (0x00010942) grid_highlight_pane_cp10

0xd689,	// (0x0001a052) list_single_hc_apps_pane_ParamLimits

0xd689,	// (0x0001a052) list_single_hc_apps_pane

0xd6ec,	// (0x0001a0b5) list_single_hc_apps_pane_g1

0xd705,	// (0x0001a0ce) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001c6b7) list_single_hc_apps_pane_g

0xd71e,	// (0x0001a0e7) list_single_hc_apps_pane_g2_copy1

0xd73a,	// (0x0001a103) list_single_hc_apps_pane_t1

0x3e35,	// (0x000107fe) bg_set_opt_pane_cp_ParamLimits

0x57bf,	// (0x00012188) setting_slider_pane_t1_ParamLimits

0x57d8,	// (0x000121a1) setting_slider_pane_t2_ParamLimits

0x57f2,	// (0x000121bb) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001bf27) setting_slider_pane_t_ParamLimits

0x580a,	// (0x000121d3) slider_set_pane_ParamLimits

0x5d28,	// (0x000126f1) control_pane_g5_ParamLimits

0x5d28,	// (0x000126f1) control_pane_g5

0xa8ba,	// (0x00017283) slider_set_pane_g1_ParamLimits

0x677d,	// (0x00013146) slider_set_pane_g2_ParamLimits

0x6789,	// (0x00013152) slider_set_pane_g3_ParamLimits

0x679d,	// (0x00013166) slider_set_pane_g4_ParamLimits

0x67b5,	// (0x0001317e) slider_set_pane_g5_ParamLimits

0x6789,	// (0x00013152) slider_set_pane_g6_ParamLimits

0x67cb,	// (0x00013194) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0001c31e) slider_set_pane_g_ParamLimits

0x8a53,	// (0x0001541c) navi_icon_text_pane_ParamLimits

0x8f61,	// (0x0001592a) aid_fill_nsta_2_ParamLimits

0x8fa0,	// (0x00015969) aid_touch_tab_arrow_left_ParamLimits

0x8faf,	// (0x00015978) aid_touch_tab_arrow_right_ParamLimits

0x901c,	// (0x000159e5) clock_nsta_pane_ParamLimits

0xa3ab,	// (0x00016d74) navi_icon_pane_g1_ParamLimits

0xa3b7,	// (0x00016d80) navi_text_pane_t1_ParamLimits

0xbab3,	// (0x0001847c) navi_icon_text_pane_g1_ParamLimits

0xbabf,	// (0x00018488) navi_icon_text_pane_t1_ParamLimits

0xd6ec,	// (0x0001a0b5) list_single_hc_apps_pane_g1_ParamLimits

0xd705,	// (0x0001a0ce) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001c6b7) list_single_hc_apps_pane_g_ParamLimits

0xd71e,	// (0x0001a0e7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd73a,	// (0x0001a103) list_single_hc_apps_pane_t1_ParamLimits

0x56c9,	// (0x00012092) popup_toolbar2_fixed_window_ParamLimits

0x56c9,	// (0x00012092) popup_toolbar2_fixed_window

0x6335,	// (0x00012cfe) popup_toolbar2_float_window

0x3c36,	// (0x000105ff) bg_popup_sub_pane_cp27

0xd768,	// (0x0001a131) grid_toolbar2_float_pane

0x3c36,	// (0x000105ff) bg_popup_sub_pane_cp26

0xd768,	// (0x0001a131) grid_toolbar2_fixed_pane

0xd770,	// (0x0001a139) cell_toolbar2_fixed_pane_ParamLimits

0xd770,	// (0x0001a139) cell_toolbar2_fixed_pane

0xd780,	// (0x0001a149) cell_toolbar2_fixed_pane_g1

0x6207,	// (0x00012bd0) toolbar2_fixed_button_pane

0x9458,	// (0x00015e21) toolbar2_fixed_button_pane_g1

0x9468,	// (0x00015e31) toolbar2_fixed_button_pane_g2

0x9460,	// (0x00015e29) toolbar2_fixed_button_pane_g3

0x9478,	// (0x00015e41) toolbar2_fixed_button_pane_g4

0x9470,	// (0x00015e39) toolbar2_fixed_button_pane_g5

0x9480,	// (0x00015e49) toolbar2_fixed_button_pane_g6

0x9488,	// (0x00015e51) toolbar2_fixed_button_pane_g7

0x9498,	// (0x00015e61) toolbar2_fixed_button_pane_g8

0x9490,	// (0x00015e59) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0001c220) toolbar2_fixed_button_pane_g

0xd789,	// (0x0001a152) cell_toolbar2_float_pane_ParamLimits

0xd789,	// (0x0001a152) cell_toolbar2_float_pane

0xd79a,	// (0x0001a163) cell_toolbar2_float_pane_g1

0x6207,	// (0x00012bd0) toolbar2_fixed_button_pane_cp

0xc083,	// (0x00018a4c) fep_vkb_accented_list_pane_ParamLimits

0xc083,	// (0x00018a4c) fep_vkb_accented_list_pane

0x6b88,	// (0x00013551) bg_popup_fep_shadow_pane_g9

0x8bd3,	// (0x0001559c) bg_popup_fep_shadow_pane_cp3

0x43df,	// (0x00010da8) list_accented_list_pane

0xd7a3,	// (0x0001a16c) list_single_accented_list_pane_ParamLimits

0xd7a3,	// (0x0001a16c) list_single_accented_list_pane

0x8bd3,	// (0x0001559c) list_highlight_pane_cp10

0xd7b4,	// (0x0001a17d) list_single_accented_list_pane_t1

0x6285,	// (0x00012c4e) popup_slider_window_ParamLimits

0x6285,	// (0x00012c4e) popup_slider_window

0xd281,	// (0x00019c4a) aid_indentation_list_msg

0xd86a,	// (0x0001a233) bg_popup_window_pane_cp19

0xd8d4,	// (0x0001a29d) popup_slider_window_g1

0xd8f0,	// (0x0001a2b9) popup_slider_window_g2

0xd90c,	// (0x0001a2d5) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001c6bc) popup_slider_window_g

0xd968,	// (0x0001a331) popup_slider_window_t1

0xd9dc,	// (0x0001a3a5) small_volume_slider_vertical_pane

0xbf55,	// (0x0001891e) small_volume_slider_vertical_pane_g1

0xbf55,	// (0x0001891e) small_volume_slider_vertical_pane_g2

0xd9f8,	// (0x0001a3c1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001c6ce) small_volume_slider_vertical_pane_g

0x548f,	// (0x00011e58) area_side_right_pane_ParamLimits

0x548f,	// (0x00011e58) area_side_right_pane

0x6d72,	// (0x0001373b) aid_size_side_button_ParamLimits

0x6d72,	// (0x0001373b) aid_size_side_button

0x6d86,	// (0x0001374f) grid_sctrl_middle_pane_ParamLimits

0x6d86,	// (0x0001374f) grid_sctrl_middle_pane

0x6da5,	// (0x0001376e) sctrl_sk_bottom_pane

0x6db6,	// (0x0001377f) sctrl_sk_top_pane

0x6dc8,	// (0x00013791) aid_touch_sctrl_top

0x6dd5,	// (0x0001379e) bg_sctrl_sk_pane_ParamLimits

0x6dd5,	// (0x0001379e) bg_sctrl_sk_pane

0x6de3,	// (0x000137ac) sctrl_sk_top_pane_g1

0x6df0,	// (0x000137b9) sctrl_sk_top_pane_t1

0x6dc8,	// (0x00013791) aid_touch_sctrl_bottom

0x6dd5,	// (0x0001379e) bg_sctrl_sk_pane_cp_ParamLimits

0x6dd5,	// (0x0001379e) bg_sctrl_sk_pane_cp

0x6e0b,	// (0x000137d4) sctrl_sk_bottom_pane_g1

0x6df0,	// (0x000137b9) sctrl_sk_bottom_pane_t1

0x6e14,	// (0x000137dd) cell_sctrl_middle_pane_ParamLimits

0x6e14,	// (0x000137dd) cell_sctrl_middle_pane

0x6e2f,	// (0x000137f8) aid_touch_sctrl_middle_ParamLimits

0x6e2f,	// (0x000137f8) aid_touch_sctrl_middle

0x6e41,	// (0x0001380a) bg_sctrl_middle_pane_ParamLimits

0x6e41,	// (0x0001380a) bg_sctrl_middle_pane

0x6ba8,	// (0x00013571) cell_sctrl_middle_pane_g1_ParamLimits

0x6ba8,	// (0x00013571) cell_sctrl_middle_pane_g1

0x6e4f,	// (0x00013818) cell_sctrl_middle_pane_g2_ParamLimits

0x6e4f,	// (0x00013818) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001c6da) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001c6da) cell_sctrl_middle_pane_g

0x9458,	// (0x00015e21) bg_sctrl_middle_pane_g1

0x9460,	// (0x00015e29) bg_sctrl_middle_pane_g2

0x9468,	// (0x00015e31) bg_sctrl_middle_pane_g3

0x9470,	// (0x00015e39) bg_sctrl_middle_pane_g4

0x9478,	// (0x00015e41) bg_sctrl_middle_pane_g5

0x9480,	// (0x00015e49) bg_sctrl_middle_pane_g6

0x9488,	// (0x00015e51) bg_sctrl_middle_pane_g7

0x9490,	// (0x00015e59) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001c6df) bg_sctrl_middle_pane_g

0x9498,	// (0x00015e61) bg_sctrl_middle_pane_g8_copy1

0x9458,	// (0x00015e21) bg_sctrl_sk_pane_g1

0x9468,	// (0x00015e31) bg_sctrl_sk_pane_g2

0x9460,	// (0x00015e29) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0001c220) bg_sctrl_sk_pane_g

0x4143,	// (0x00010b0c) aid_size_touch_scroll_bar

0x9478,	// (0x00015e41) bg_sctrl_sk_pane_g4

0x9470,	// (0x00015e39) bg_sctrl_sk_pane_g5

0x9480,	// (0x00015e49) bg_sctrl_sk_pane_g6

0x9488,	// (0x00015e51) bg_sctrl_sk_pane_g7

0x9498,	// (0x00015e61) bg_sctrl_sk_pane_g8

0x9490,	// (0x00015e59) bg_sctrl_sk_pane_g9

0x5eee,	// (0x000128b7) popup_fep_china_hwr2_fs_candidate_window

0x5ef8,	// (0x000128c1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ef8,	// (0x000128c1) popup_fep_china_hwr2_fs_control_window

0x6ba8,	// (0x00013571) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001c6d5) sctrl_sk_top_pane_g

0xda01,	// (0x0001a3ca) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda01,	// (0x0001a3ca) aid_fep_china_hwr2_fs_cell

0xda13,	// (0x0001a3dc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda13,	// (0x0001a3dc) bg_popup_fep_shadow_pane_cp4

0xda2a,	// (0x0001a3f3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda2a,	// (0x0001a3f3) bg_popup_fep_shadow_pane_cp5

0xda3c,	// (0x0001a405) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda3c,	// (0x0001a405) popup_fep_china_hwr2_fs_control_bar_grid

0xda4c,	// (0x0001a415) popup_fep_china_hwr2_fs_control_funtion_grid

0xda54,	// (0x0001a41d) aid_fep_china_hwr2_fs_candi_cell

0x3c36,	// (0x000105ff) bg_popup_fep_shadow_pane_cp6

0xda5e,	// (0x0001a427) popup_fep_china_hwr2_fs_candidate_grid

0xda68,	// (0x0001a431) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda68,	// (0x0001a431) cell_fep_china_hwr2_fs_funtion_grid

0xbf55,	// (0x0001891e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda80,	// (0x0001a449) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda80,	// (0x0001a449) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda8e,	// (0x0001a457) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda8e,	// (0x0001a457) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001c6f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001c6f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaa4,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaa4,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdab9,	// (0x0001a482) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdab9,	// (0x0001a482) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001c6f5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001c6f5) cell_fep_china_hwr2_fs_funtion_grid_t

0xdad5,	// (0x0001a49e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdadd,	// (0x0001a4a6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdae5,	// (0x0001a4ae) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001c6fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaed,	// (0x0001a4b6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaed,	// (0x0001a4b6) cell_fep_china_hwr2_fs_candidate_grid

0xdb06,	// (0x0001a4cf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb0e,	// (0x0001a4d7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf55,	// (0x0001891e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf55,	// (0x0001891e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001c515) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb16,	// (0x0001a4df) cell_fep_china_hwr2_fs_candidate_grid_t1

0x902f,	// (0x000159f8) clock_nsta_pane_cp_24_ParamLimits

0x902f,	// (0x000159f8) clock_nsta_pane_cp_24

0x90ad,	// (0x00015a76) indicator_nsta_pane_cp_24_ParamLimits

0x90ad,	// (0x00015a76) indicator_nsta_pane_cp_24

0xa227,	// (0x00016bf0) heading_pane_g1

0x0001,

0xf8bc,	// (0x0001c285) heading_pane_g

0xad3e,	// (0x00017707) grid_sct_catagory_button_pane

0xad6e,	// (0x00017737) scroll_pane_cp5_ParamLimits

0xbb01,	// (0x000184ca) button_value_adjust_pane_cp5_ParamLimits

0xbb01,	// (0x000184ca) button_value_adjust_pane_cp5

0xbbfb,	// (0x000185c4) form2_midp_time_pane_ParamLimits

0xdb24,	// (0x0001a4ed) cell_sct_catagory_button_pane_ParamLimits

0xdb24,	// (0x0001a4ed) cell_sct_catagory_button_pane

0xbf1a,	// (0x000188e3) bg_button_pane_cp01_ParamLimits

0xbf1a,	// (0x000188e3) bg_button_pane_cp01

0xbf55,	// (0x0001891e) cell_sct_catagory_button_pane_g1

0x62c4,	// (0x00012c8d) popup_tb_extension_window

0xdb36,	// (0x0001a4ff) aid_size_cell_ext_ParamLimits

0xdb36,	// (0x0001a4ff) aid_size_cell_ext

0x3f79,	// (0x00010942) bg_tb_trans_pane_cp1_ParamLimits

0x3f79,	// (0x00010942) bg_tb_trans_pane_cp1

0xdb56,	// (0x0001a51f) grid_tb_ext_pane_ParamLimits

0xdb56,	// (0x0001a51f) grid_tb_ext_pane

0xdb86,	// (0x0001a54f) cell_tb_ext_pane_ParamLimits

0xdb86,	// (0x0001a54f) cell_tb_ext_pane

0xdb9d,	// (0x0001a566) cell_tb_ext_pane_g1_ParamLimits

0xdb9d,	// (0x0001a566) cell_tb_ext_pane_g1

0xdbba,	// (0x0001a583) cell_tb_ext_pane_t1

0x3f79,	// (0x00010942) list_highlight_pane_cp11_ParamLimits

0x3f79,	// (0x00010942) list_highlight_pane_cp11

0x56e8,	// (0x000120b1) popup_uni_indicator_window_ParamLimits

0x56e8,	// (0x000120b1) popup_uni_indicator_window

0x4277,	// (0x00010c40) bg_popup_sub_pane_cp14

0xdbd6,	// (0x0001a59f) list_uniindi_pane

0xdbe2,	// (0x0001a5ab) uniindi_top_pane

0x3f79,	// (0x00010942) bg_uniindi_top_pane

0xdc01,	// (0x0001a5ca) uniindi_top_pane_g1

0xdc17,	// (0x0001a5e0) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001c701) uniindi_top_pane_g

0xdc41,	// (0x0001a60a) uniindi_top_pane_t1

0xdc6b,	// (0x0001a634) list_single_uniindi_pane_ParamLimits

0xdc6b,	// (0x0001a634) list_single_uniindi_pane

0xbf55,	// (0x0001891e) bg_uniindi_top_pane_g1

0xdc7d,	// (0x0001a646) list_single_uniindi_pane_g1

0xdc90,	// (0x0001a659) list_single_uniindi_pane_t1

0x556c,	// (0x00011f35) control_bg_pane

0xdcb5,	// (0x0001a67e) bg_sctrl_sk_pane_cp1

0xdcbe,	// (0x0001a687) bg_sctrl_sk_pane_cp2

0xdcc7,	// (0x0001a690) control_bg_pane_g1

0xdcd0,	// (0x0001a699) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001c70a) control_bg_pane_g

0xb958,	// (0x00018321) cell_indicator_nsta_pane_g1_ParamLimits

0xb966,	// (0x0001832f) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001c479) cell_indicator_nsta_pane_g_ParamLimits

0xbc83,	// (0x0001864c) form2_midp_time_pane_t1_ParamLimits

0x5e58,	// (0x00012821) main_idle_act4_pane_ParamLimits

0x5e58,	// (0x00012821) main_idle_act4_pane

0x62c4,	// (0x00012c8d) popup_tb_extension_window_ParamLimits

0xdb76,	// (0x0001a53f) tb_ext_find_pane_ParamLimits

0xdb76,	// (0x0001a53f) tb_ext_find_pane

0xdcd9,	// (0x0001a6a2) ai_gene_pane_1_cp1

0x8d1e,	// (0x000156e7) ai_gene_pane_2_cp1

0xdce1,	// (0x0001a6aa) list_single_idle_plugin_calendar_pane

0xdcea,	// (0x0001a6b3) list_single_idle_plugin_notification_pane

0xdcf3,	// (0x0001a6bc) list_single_idle_plugin_player_pane

0xdcfc,	// (0x0001a6c5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcfc,	// (0x0001a6c5) list_single_idle_plugin_shortcut_pane

0xdd1e,	// (0x0001a6e7) main_idle_act4_pane_t1

0xdd30,	// (0x0001a6f9) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001c70f) main_idle_act4_pane_t

0xdd42,	// (0x0001a70b) middle_sk_idle_act4_pane_ParamLimits

0xdd42,	// (0x0001a70b) middle_sk_idle_act4_pane

0xdd58,	// (0x0001a721) popup_clock_digital_analogue_window_cp2

0xdd72,	// (0x0001a73b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd72,	// (0x0001a73b) shortcut_wheel_idle_act4_pane

0xbf55,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g1

0xbf55,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g2

0xbf55,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g3

0xbf55,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g4

0xbf55,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g5

0xdd86,	// (0x0001a74f) shortcut_wheel_idle_act4_pane_g6

0xdd8e,	// (0x0001a757) shortcut_wheel_idle_act4_pane_g7

0xdd96,	// (0x0001a75f) shortcut_wheel_idle_act4_pane_g8

0xdd9e,	// (0x0001a767) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001c714) shortcut_wheel_idle_act4_pane_g

0xc1c5,	// (0x00018b8e) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1c5,	// (0x00018b8e) middle_sk_idle_act4_pane_g1

0xde02,	// (0x0001a7cb) middle_sk_idle_act4_pane_g2_ParamLimits

0xde02,	// (0x0001a7cb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001c737) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001c737) middle_sk_idle_act4_pane_g

0xde0e,	// (0x0001a7d7) middle_sk_idle_act4_pane_t1_ParamLimits

0xde0e,	// (0x0001a7d7) middle_sk_idle_act4_pane_t1

0xde2b,	// (0x0001a7f4) grid_ai_shortcut_pane_ParamLimits

0xde2b,	// (0x0001a7f4) grid_ai_shortcut_pane

0xde44,	// (0x0001a80d) list_highlight_pane_cp16_ParamLimits

0xde44,	// (0x0001a80d) list_highlight_pane_cp16

0xde51,	// (0x0001a81a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde51,	// (0x0001a81a) list_single_idle_plugin_shortcut_pane_g1

0xde5d,	// (0x0001a826) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde5d,	// (0x0001a826) list_single_idle_plugin_shortcut_pane_g2

0xde75,	// (0x0001a83e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde75,	// (0x0001a83e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001c73c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001c73c) list_single_idle_plugin_shortcut_pane_g

0xde88,	// (0x0001a851) cell_ai_shortcut_pane_ParamLimits

0xde88,	// (0x0001a851) cell_ai_shortcut_pane

0xdeac,	// (0x0001a875) cell_ai_shortcut_pane_g1_ParamLimits

0xdeac,	// (0x0001a875) cell_ai_shortcut_pane_g1

0xdcd9,	// (0x0001a6a2) ai_gene_pane_1_cp2

0xdece,	// (0x0001a897) ai_gene_pane_2_cp2

0xded6,	// (0x0001a89f) list_highlight_pane_cp15

0xdedf,	// (0x0001a8a8) list_single_idle_plugin_calendar_pane_g1

0xded6,	// (0x0001a89f) list_highlight_pane_cp17

0xdee7,	// (0x0001a8b0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeef,	// (0x0001a8b8) list_single_idle_plugin_player_pane_g1

0xaf97,	// (0x00017960) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001c743) list_single_idle_plugin_player_pane_g

0xdef7,	// (0x0001a8c0) list_single_idle_plugin_player_pane_t1

0xdf05,	// (0x0001a8ce) list_single_idle_plugin_player_pane_t2

0xdf13,	// (0x0001a8dc) list_single_idle_plugin_player_pane_t3

0xdf21,	// (0x0001a8ea) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001c748) list_single_idle_plugin_player_pane_t

0xdf2f,	// (0x0001a8f8) wait_bar_pane_cp15

0xdf37,	// (0x0001a900) grid_ai_notification_pane

0xaf97,	// (0x00017960) list_single_idle_plugin_notification_pane_g1

0xdf40,	// (0x0001a909) cell_ai_notification_pane_ParamLimits

0xdf40,	// (0x0001a909) cell_ai_notification_pane

0xdf4d,	// (0x0001a916) cell_ai_notification_pane_g1

0xdf55,	// (0x0001a91e) cell_ai_notification_pane_t1

0xdf63,	// (0x0001a92c) tb_ext_find_button_pane

0xdf6b,	// (0x0001a934) tb_ext_find_pane_g1

0xdf73,	// (0x0001a93c) tb_ext_find_pane_t1

0x48d3,	// (0x0001129c) tb_ext_find_button_pane_g1

0xdf81,	// (0x0001a94a) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001c751) tb_ext_find_button_pane_g

0xdd1e,	// (0x0001a6e7) main_idle_act4_pane_t1_ParamLimits

0xdd30,	// (0x0001a6f9) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001c70f) main_idle_act4_pane_t_ParamLimits

0xdd58,	// (0x0001a721) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd66,	// (0x0001a72f) sat_plugin_idle_act4_pane_ParamLimits

0xdd66,	// (0x0001a72f) sat_plugin_idle_act4_pane

0xdf8a,	// (0x0001a953) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf8a,	// (0x0001a953) sat_plugin_idle_act4_pane_t1

0xdf9d,	// (0x0001a966) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf9d,	// (0x0001a966) sat_plugin_idle_act4_pane_t2

0xdfb0,	// (0x0001a979) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfb0,	// (0x0001a979) sat_plugin_idle_act4_pane_t3

0xdfc3,	// (0x0001a98c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfc3,	// (0x0001a98c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001c756) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001c756) sat_plugin_idle_act4_pane_t

0x5631,	// (0x00011ffa) popup_battery_window_ParamLimits

0x5631,	// (0x00011ffa) popup_battery_window

0x3f79,	// (0x00010942) bg_popup_sub_pane_cp25_ParamLimits

0x3f79,	// (0x00010942) bg_popup_sub_pane_cp25

0xdfd6,	// (0x0001a99f) popup_battery_window_g1_ParamLimits

0xdfd6,	// (0x0001a99f) popup_battery_window_g1

0xdfe2,	// (0x0001a9ab) popup_battery_window_t1_ParamLimits

0xdfe2,	// (0x0001a9ab) popup_battery_window_t1

0xdff4,	// (0x0001a9bd) popup_battery_window_t2_ParamLimits

0xdff4,	// (0x0001a9bd) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001c75f) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001c75f) popup_battery_window_t

0x8be7,	// (0x000155b0) midp_canvas_pane_ParamLimits

0x8c60,	// (0x00015629) midp_keypad_pane_ParamLimits

0x8c60,	// (0x00015629) midp_keypad_pane

0x8f21,	// (0x000158ea) main_midp_pane_ParamLimits

0xb9c1,	// (0x0001838a) signal_pane_g2_cp_ParamLimits

0xe011,	// (0x0001a9da) aid_size_cell_midp_keypad_ParamLimits

0xe011,	// (0x0001a9da) aid_size_cell_midp_keypad

0xe02b,	// (0x0001a9f4) midp_keyp_game_grid_pane_ParamLimits

0xe02b,	// (0x0001a9f4) midp_keyp_game_grid_pane

0xe04b,	// (0x0001aa14) midp_keyp_rocker_pane_ParamLimits

0xe04b,	// (0x0001aa14) midp_keyp_rocker_pane

0xe084,	// (0x0001aa4d) midp_keyp_sk_left_pane_ParamLimits

0xe084,	// (0x0001aa4d) midp_keyp_sk_left_pane

0xe0de,	// (0x0001aaa7) midp_keyp_sk_right_pane_ParamLimits

0xe0de,	// (0x0001aaa7) midp_keyp_sk_right_pane

0x3c36,	// (0x000105ff) bg_button_pane_cp03

0xe138,	// (0x0001ab01) midp_keyp_sk_left_pane_g1

0x3c36,	// (0x000105ff) bg_button_pane_cp04

0xe138,	// (0x0001ab01) midp_keyp_sk_right_pane_g1

0xbf55,	// (0x0001891e) midp_keyp_rocker_pane_g1

0xe141,	// (0x0001ab0a) keyp_game_cell_pane_ParamLimits

0xe141,	// (0x0001ab0a) keyp_game_cell_pane

0x3c36,	// (0x000105ff) bg_button_pane_cp02

0xe154,	// (0x0001ab1d) keyp_game_cell_pane_g1

0x5667,	// (0x00012030) popup_fep_vkb2_window_ParamLimits

0x5667,	// (0x00012030) popup_fep_vkb2_window

0x6e6d,	// (0x00013836) aid_size_cell_vkb2_ParamLimits

0x6e6d,	// (0x00013836) aid_size_cell_vkb2

0x6ec1,	// (0x0001388a) popup_fep_vkb2_window_g1_ParamLimits

0x6ec1,	// (0x0001388a) popup_fep_vkb2_window_g1

0x6f09,	// (0x000138d2) vkb2_area_bottom_pane_ParamLimits

0x6f09,	// (0x000138d2) vkb2_area_bottom_pane

0x6f55,	// (0x0001391e) vkb2_area_keypad_pane_ParamLimits

0x6f55,	// (0x0001391e) vkb2_area_keypad_pane

0x6f97,	// (0x00013960) vkb2_area_top_pane_ParamLimits

0x6f97,	// (0x00013960) vkb2_area_top_pane

0x7011,	// (0x000139da) vkb2_top_entry_pane_ParamLimits

0x7011,	// (0x000139da) vkb2_top_entry_pane

0x703b,	// (0x00013a04) vkb2_top_grid_left_pane_ParamLimits

0x703b,	// (0x00013a04) vkb2_top_grid_left_pane

0x7059,	// (0x00013a22) vkb2_top_grid_right_pane_ParamLimits

0x7059,	// (0x00013a22) vkb2_top_grid_right_pane

0x7077,	// (0x00013a40) vkb2_cell_keypad_pane_ParamLimits

0x7077,	// (0x00013a40) vkb2_cell_keypad_pane

0x7148,	// (0x00013b11) vkb2_area_bottom_grid_pane_ParamLimits

0x7148,	// (0x00013b11) vkb2_area_bottom_grid_pane

0x716e,	// (0x00013b37) vkb2_area_bottom_pane_g1_ParamLimits

0x716e,	// (0x00013b37) vkb2_area_bottom_pane_g1

0x7192,	// (0x00013b5b) vkb2_area_bottom_pane_g2_ParamLimits

0x7192,	// (0x00013b5b) vkb2_area_bottom_pane_g2

0x71c0,	// (0x00013b89) vkb2_area_bottom_pane_g3_ParamLimits

0x71c0,	// (0x00013b89) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001c764) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001c764) vkb2_area_bottom_pane_g

0x7221,	// (0x00013bea) vkb2_top_cell_left_pane_ParamLimits

0x7221,	// (0x00013bea) vkb2_top_cell_left_pane

0xe165,	// (0x0001ab2e) vkb2_top_entry_pane_g1_ParamLimits

0xe165,	// (0x0001ab2e) vkb2_top_entry_pane_g1

0xe173,	// (0x0001ab3c) vkb2_top_entry_pane_t1_ParamLimits

0xe173,	// (0x0001ab3c) vkb2_top_entry_pane_t1

0xe1a5,	// (0x0001ab6e) vkb2_top_entry_pane_t2_ParamLimits

0xe1a5,	// (0x0001ab6e) vkb2_top_entry_pane_t2

0xe1d7,	// (0x0001aba0) vkb2_top_entry_pane_t3_ParamLimits

0xe1d7,	// (0x0001aba0) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001c76b) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001c76b) vkb2_top_entry_pane_t

0x726e,	// (0x00013c37) vkb2_top_grid_right_pane_g1_ParamLimits

0x726e,	// (0x00013c37) vkb2_top_grid_right_pane_g1

0x7284,	// (0x00013c4d) vkb2_top_grid_right_pane_g2_ParamLimits

0x7284,	// (0x00013c4d) vkb2_top_grid_right_pane_g2

0x729c,	// (0x00013c65) vkb2_top_grid_right_pane_g3_ParamLimits

0x729c,	// (0x00013c65) vkb2_top_grid_right_pane_g3

0x72b4,	// (0x00013c7d) vkb2_top_grid_right_pane_g4_ParamLimits

0x72b4,	// (0x00013c7d) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001c772) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001c772) vkb2_top_grid_right_pane_g

0x72ca,	// (0x00013c93) vkb2_top_cell_left_pane_g1

0x72e1,	// (0x00013caa) vkb2_cell_keypad_pane_g1_ParamLimits

0x72e1,	// (0x00013caa) vkb2_cell_keypad_pane_g1

0xe1fb,	// (0x0001abc4) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1fb,	// (0x0001abc4) vkb2_cell_keypad_pane_t1

0x72ef,	// (0x00013cb8) vkb2_cell_bottom_grid_pane_ParamLimits

0x72ef,	// (0x00013cb8) vkb2_cell_bottom_grid_pane

0x7328,	// (0x00013cf1) vkb2_cell_bottom_grid_pane_g1

0xdda6,	// (0x0001a76f) aid_call2_pane_cp02

0xddae,	// (0x0001a777) aid_call_pane_cp02

0xddb6,	// (0x0001a77f) clock_digital_number_pane_cp10

0xddbe,	// (0x0001a787) clock_digital_number_pane_cp11

0xddc6,	// (0x0001a78f) clock_digital_number_pane_cp12

0xddce,	// (0x0001a797) clock_digital_number_pane_cp13

0xddd6,	// (0x0001a79f) clock_digital_separator_pane_cp10

0x48d3,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g1

0x48d3,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g2

0xddde,	// (0x0001a7a7) popup_clock_digital_analogue_window_cp2_g3

0x48d3,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g4

0xddde,	// (0x0001a7a7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001c727) popup_clock_digital_analogue_window_cp2_g

0xdde6,	// (0x0001a7af) popup_clock_digital_analogue_window_cp2_t1

0xddf4,	// (0x0001a7bd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001c732) popup_clock_digital_analogue_window_cp2_t

0xbf55,	// (0x0001891e) clock_digital_number_pane_cp10_g1

0xbf55,	// (0x0001891e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c515) clock_digital_number_pane_cp10_g

0xbf55,	// (0x0001891e) clock_digital_separator_pane_cp10_g1

0xbf55,	// (0x0001891e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c515) clock_digital_separator_pane_cp10_g

0xdc23,	// (0x0001a5ec) uniindi_top_pane_g3

0xdc34,	// (0x0001a5fd) uniindi_top_pane_g4

0x7102,	// (0x00013acb) vkb2_row_keypad_pane_ParamLimits

0x7102,	// (0x00013acb) vkb2_row_keypad_pane

0x7344,	// (0x00013d0d) vkb2_cell_t_keypad_pane_ParamLimits

0x7344,	// (0x00013d0d) vkb2_cell_t_keypad_pane

0x7354,	// (0x00013d1d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7354,	// (0x00013d1d) vkb2_cell_t_keypad_pane_cp08

0x7367,	// (0x00013d30) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7367,	// (0x00013d30) vkb2_cell_t_keypad_pane_cp09

0x737b,	// (0x00013d44) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x737b,	// (0x00013d44) vkb2_cell_t_keypad_pane_cp01

0x738c,	// (0x00013d55) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x738c,	// (0x00013d55) vkb2_cell_t_keypad_pane_cp02

0x739d,	// (0x00013d66) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x739d,	// (0x00013d66) vkb2_cell_t_keypad_pane_cp03

0x73ae,	// (0x00013d77) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x73ae,	// (0x00013d77) vkb2_cell_t_keypad_pane_cp04

0x73bf,	// (0x00013d88) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x73bf,	// (0x00013d88) vkb2_cell_t_keypad_pane_cp05

0x73d0,	// (0x00013d99) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x73d0,	// (0x00013d99) vkb2_cell_t_keypad_pane_cp06

0x73e1,	// (0x00013daa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x73e1,	// (0x00013daa) vkb2_cell_t_keypad_pane_cp07

0x73f2,	// (0x00013dbb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x73f2,	// (0x00013dbb) vkb2_cell_t_keypad_pane_cp10

0x6ba8,	// (0x00013571) vkb2_cell_t_keypad_pane_g1

0xe212,	// (0x0001abdb) vkb2_cell_t_keypad_pane_t1

0x556c,	// (0x00011f35) popup_grid_graphic2_window

0xe224,	// (0x0001abed) aid_size_cell_graphic2_ParamLimits

0xe224,	// (0x0001abed) aid_size_cell_graphic2

0xe25c,	// (0x0001ac25) bg_popup_window_pane_cp21_ParamLimits

0xe25c,	// (0x0001ac25) bg_popup_window_pane_cp21

0xe26a,	// (0x0001ac33) graphic2_pages_pane_ParamLimits

0xe26a,	// (0x0001ac33) graphic2_pages_pane

0xe2b0,	// (0x0001ac79) grid_graphic2_control_pane_ParamLimits

0xe2b0,	// (0x0001ac79) grid_graphic2_control_pane

0xe2ee,	// (0x0001acb7) grid_graphic2_pane_ParamLimits

0xe2ee,	// (0x0001acb7) grid_graphic2_pane

0xe362,	// (0x0001ad2b) cell_graphic2_pane

0x556c,	// (0x00011f35) main_comp_mode_pane

0xd443,	// (0x00019e0c) list_ai3_gene_pane_ParamLimits

0xd86a,	// (0x0001a233) bg_popup_window_pane_cp19_ParamLimits

0xd876,	// (0x0001a23f) bg_touch_area_indi_pane_ParamLimits

0xd876,	// (0x0001a23f) bg_touch_area_indi_pane

0xd88c,	// (0x0001a255) bg_touch_area_indi_pane_cp01_ParamLimits

0xd88c,	// (0x0001a255) bg_touch_area_indi_pane_cp01

0xd8a2,	// (0x0001a26b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8a2,	// (0x0001a26b) bg_touch_area_indi_pane_cp02

0xd8ba,	// (0x0001a283) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8ba,	// (0x0001a283) bg_touch_area_indi_pane_cp03

0xd8d4,	// (0x0001a29d) popup_slider_window_g1_ParamLimits

0xd8f0,	// (0x0001a2b9) popup_slider_window_g2_ParamLimits

0xd90c,	// (0x0001a2d5) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001c6bc) popup_slider_window_g_ParamLimits

0xd968,	// (0x0001a331) popup_slider_window_t1_ParamLimits

0xd9dc,	// (0x0001a3a5) small_volume_slider_vertical_pane_ParamLimits

0xe362,	// (0x0001ad2b) cell_graphic2_pane_ParamLimits

0xe3b1,	// (0x0001ad7a) bg_button_pane_cp10_ParamLimits

0xe3b1,	// (0x0001ad7a) bg_button_pane_cp10

0xe3c4,	// (0x0001ad8d) bg_button_pane_cp11_ParamLimits

0xe3c4,	// (0x0001ad8d) bg_button_pane_cp11

0xe3d7,	// (0x0001ada0) graphic2_pages_pane_g1_ParamLimits

0xe3d7,	// (0x0001ada0) graphic2_pages_pane_g1

0xe3f2,	// (0x0001adbb) graphic2_pages_pane_g2_ParamLimits

0xe3f2,	// (0x0001adbb) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001c780) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001c780) graphic2_pages_pane_g

0xe40a,	// (0x0001add3) graphic2_pages_pane_t1_ParamLimits

0xe40a,	// (0x0001add3) graphic2_pages_pane_t1

0xe422,	// (0x0001adeb) cell_graphic2_control_pane_ParamLimits

0xe422,	// (0x0001adeb) cell_graphic2_control_pane

0xe440,	// (0x0001ae09) cell_graphic2_pane_g1_ParamLimits

0xe440,	// (0x0001ae09) cell_graphic2_pane_g1

0xe44d,	// (0x0001ae16) cell_graphic2_pane_g2_ParamLimits

0xe44d,	// (0x0001ae16) cell_graphic2_pane_g2

0xe45a,	// (0x0001ae23) cell_graphic2_pane_g3_ParamLimits

0xe45a,	// (0x0001ae23) cell_graphic2_pane_g3

0xe467,	// (0x0001ae30) cell_graphic2_pane_g4_ParamLimits

0xe467,	// (0x0001ae30) cell_graphic2_pane_g4

0xe474,	// (0x0001ae3d) cell_graphic2_pane_g5_ParamLimits

0xe474,	// (0x0001ae3d) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001c785) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001c785) cell_graphic2_pane_g

0xe48f,	// (0x0001ae58) cell_graphic2_pane_t1_ParamLimits

0xe48f,	// (0x0001ae58) cell_graphic2_pane_t1

0x9578,	// (0x00015f41) grid_highlight_pane_cp11_ParamLimits

0x9578,	// (0x00015f41) grid_highlight_pane_cp11

0x3f79,	// (0x00010942) bg_button_pane_cp05

0xe4c6,	// (0x0001ae8f) cell_graphic2_control_pane_g1

0xbf55,	// (0x0001891e) bg_touch_area_indi_pane_g1

0xe4ee,	// (0x0001aeb7) aid_cmod_rocker_key_size

0xe4f8,	// (0x0001aec1) aid_cmode_itu_key_size

0xe502,	// (0x0001aecb) main_cmode_video_pane

0xe50c,	// (0x0001aed5) main_comp_mode_itu_pane

0xe518,	// (0x0001aee1) main_comp_mode_rocker_pane

0xe524,	// (0x0001aeed) cell_cmode_rocker_pane_ParamLimits

0xe524,	// (0x0001aeed) cell_cmode_rocker_pane

0xe536,	// (0x0001aeff) cell_cmode_itu_pane_ParamLimits

0xe536,	// (0x0001aeff) cell_cmode_itu_pane

0x4277,	// (0x00010c40) bg_button_pane_cp06_ParamLimits

0x4277,	// (0x00010c40) bg_button_pane_cp06

0xc1c5,	// (0x00018b8e) cell_cmode_rocker_pane_g1_ParamLimits

0xc1c5,	// (0x00018b8e) cell_cmode_rocker_pane_g1

0xda80,	// (0x0001a449) cell_cmode_rocker_pane_g2_ParamLimits

0xda80,	// (0x0001a449) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001c795) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001c795) cell_cmode_rocker_pane_g

0x3c36,	// (0x000105ff) bg_button_pane_cp07

0xe54b,	// (0x0001af14) cell_cmode_itu_pane_g1

0xe554,	// (0x0001af1d) cell_cmode_itu_pane_t1

0xe562,	// (0x0001af2b) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001c79a) cell_cmode_itu_pane_t

0xdca5,	// (0x0001a66e) aid_touch_ctrl_left

0xdcad,	// (0x0001a676) aid_touch_ctrl_right

0x3c36,	// (0x000105ff) compa_mode_pane

0xe570,	// (0x0001af39) aid_cmod_rocker_key_size_cp

0xe57a,	// (0x0001af43) aid_cmode_itu_key_size_cp

0xe584,	// (0x0001af4d) compa_mode_pane_g1

0xe58c,	// (0x0001af55) compa_mode_pane_g2

0xe594,	// (0x0001af5d) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001c79f) compa_mode_pane_g

0xe59c,	// (0x0001af65) main_comp_mode_itu_pane_cp

0xe5a4,	// (0x0001af6d) main_comp_mode_rocker_pane_cp

0xe5ac,	// (0x0001af75) cell_cmode_itu_pane_cp_ParamLimits

0xe5ac,	// (0x0001af75) cell_cmode_itu_pane_cp

0xe5c1,	// (0x0001af8a) cell_cmode_rocker_pane_cp_ParamLimits

0xe5c1,	// (0x0001af8a) cell_cmode_rocker_pane_cp

0x4277,	// (0x00010c40) bg_button_pane_cp06_cp_ParamLimits

0x4277,	// (0x00010c40) bg_button_pane_cp06_cp

0xc1c5,	// (0x00018b8e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1c5,	// (0x00018b8e) cell_cmode_rocker_pane_g1_cp

0xbf55,	// (0x0001891e) cell_cmode_rocker_pane_g2_cp

0x3c36,	// (0x000105ff) bg_button_pane_cp07_cp

0xe5d3,	// (0x0001af9c) cell_cmode_itu_pane_g1_cp

0xe5dc,	// (0x0001afa5) cell_cmode_itu_pane_t1_cp

0xe5dc,	// (0x0001afa5) cell_cmode_itu_pane_t2_cp

0xaa54,	// (0x0001741d) settings_code_pane_cp2

0x3e35,	// (0x000107fe) bg_popup_window_pane_cp3_ParamLimits

0x4092,	// (0x00010a5b) heading_pane_cp3_ParamLimits

0x409e,	// (0x00010a67) listscroll_popup_graphic_pane_ParamLimits

0x6951,	// (0x0001331a) fep_hwr_aid_pane_ParamLimits

0x6dc8,	// (0x00013791) aid_touch_sctrl_top_ParamLimits

0x6de3,	// (0x000137ac) sctrl_sk_top_pane_g1_ParamLimits

0x6ba8,	// (0x00013571) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001c6d5) sctrl_sk_top_pane_g_ParamLimits

0x6df0,	// (0x000137b9) sctrl_sk_top_pane_t1_ParamLimits

0x6dc8,	// (0x00013791) aid_touch_sctrl_bottom_ParamLimits

0x6df0,	// (0x000137b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbef,	// (0x0001a5b8) aid_area_touch_clock

0x6fd9,	// (0x000139a2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6fd9,	// (0x000139a2) aid_vkb2_area_top_pane_cell

0x7124,	// (0x00013aed) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7124,	// (0x00013aed) aid_vkb2_area_bottom_pane_cell

0xe15d,	// (0x0001ab26) popup_char_count_window

0xe5ea,	// (0x0001afb3) popup_char_count_window_g1

0xe5f3,	// (0x0001afbc) popup_char_count_window_g2

0xe5fc,	// (0x0001afc5) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001c7a6) popup_char_count_window_g

0xe605,	// (0x0001afce) popup_char_count_window_t1

0x6e9f,	// (0x00013868) popup_fep_char_preview_window_ParamLimits

0x6e9f,	// (0x00013868) popup_fep_char_preview_window

0x6ff7,	// (0x000139c0) vkb2_top_candi_pane_ParamLimits

0x6ff7,	// (0x000139c0) vkb2_top_candi_pane

0xe613,	// (0x0001afdc) cell_vkb2_top_candi_pane_ParamLimits

0xe613,	// (0x0001afdc) cell_vkb2_top_candi_pane

0x7407,	// (0x00013dd0) bg_popup_fep_char_preview_window_ParamLimits

0x7407,	// (0x00013dd0) bg_popup_fep_char_preview_window

0x7415,	// (0x00013dde) popup_fep_char_preview_window_t1_ParamLimits

0x7415,	// (0x00013dde) popup_fep_char_preview_window_t1

0xe660,	// (0x0001b029) bg_popup_fep_char_preview_window_g1

0xe668,	// (0x0001b031) bg_popup_fep_char_preview_window_g2

0xe670,	// (0x0001b039) bg_popup_fep_char_preview_window_g3

0xe678,	// (0x0001b041) bg_popup_fep_char_preview_window_g4

0xe680,	// (0x0001b049) bg_popup_fep_char_preview_window_g5

0x744f,	// (0x00013e18) bg_popup_fep_char_preview_window_g6

0xe688,	// (0x0001b051) bg_popup_fep_char_preview_window_g7

0xe690,	// (0x0001b059) bg_popup_fep_char_preview_window_g8

0xe698,	// (0x0001b061) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001c7ad) bg_popup_fep_char_preview_window_g

0x6ba8,	// (0x00013571) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6ba8,	// (0x00013571) cell_vkb2_top_candi_pane_g1

0x6bb6,	// (0x0001357f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6bb6,	// (0x0001357f) cell_vkb2_top_candi_pane_g2

0xd397,	// (0x00019d60) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd397,	// (0x00019d60) cell_vkb2_top_candi_pane_g3

0x7457,	// (0x00013e20) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7457,	// (0x00013e20) cell_vkb2_top_candi_pane_g4

0xc876,	// (0x0001923f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc876,	// (0x0001923f) cell_vkb2_top_candi_pane_g5

0x7478,	// (0x00013e41) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7478,	// (0x00013e41) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001c7c0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001c7c0) cell_vkb2_top_candi_pane_g

0x7486,	// (0x00013e4f) cell_vkb2_top_candi_pane_t1

0x6769,	// (0x00013132) aid_size_touch_slider_mark_ParamLimits

0x6769,	// (0x00013132) aid_size_touch_slider_mark

0xe2a0,	// (0x0001ac69) grid_graphic2_catg_pane_ParamLimits

0xe2a0,	// (0x0001ac69) grid_graphic2_catg_pane

0xe33e,	// (0x0001ad07) popup_grid_graphic2_window_t1_ParamLimits

0xe33e,	// (0x0001ad07) popup_grid_graphic2_window_t1

0xe350,	// (0x0001ad19) popup_grid_graphic2_window_t2_ParamLimits

0xe350,	// (0x0001ad19) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001c77b) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001c77b) popup_grid_graphic2_window_t

0x3f79,	// (0x00010942) bg_button_pane_cp05_ParamLimits

0xe4c6,	// (0x0001ae8f) cell_graphic2_control_pane_g1_ParamLimits

0xe6a0,	// (0x0001b069) cell_graphic2_catg_pane_ParamLimits

0xe6a0,	// (0x0001b069) cell_graphic2_catg_pane

0x3c36,	// (0x000105ff) bg_button_pane_cp12

0xe6b2,	// (0x0001b07b) cell_graphic2_catg_pane_g1

0xdbba,	// (0x0001a583) cell_tb_ext_pane_t1_ParamLimits

0x7241,	// (0x00013c0a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7241,	// (0x00013c0a) vkb2_top_cell_right_narrow_pane

0x7259,	// (0x00013c22) vkb2_top_cell_right_wide_pane_ParamLimits

0x7259,	// (0x00013c22) vkb2_top_cell_right_wide_pane

0x6943,	// (0x0001330c) bg_vkb2_func_pane_ParamLimits

0x6943,	// (0x0001330c) bg_vkb2_func_pane

0x72ca,	// (0x00013c93) vkb2_top_cell_left_pane_g1_ParamLimits

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp03

0x7328,	// (0x00013cf1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9460,	// (0x00015e29) bg_vkb2_func_pane_g1

0x9468,	// (0x00015e31) bg_vkb2_func_pane_g2

0x9478,	// (0x00015e41) bg_vkb2_func_pane_g3

0x9470,	// (0x00015e39) bg_vkb2_func_pane_g4

0x9480,	// (0x00015e49) bg_vkb2_func_pane_g5

0x9488,	// (0x00015e51) bg_vkb2_func_pane_g6

0x9490,	// (0x00015e59) bg_vkb2_func_pane_g7

0x9498,	// (0x00015e61) bg_vkb2_func_pane_g8

0x9458,	// (0x00015e21) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001c7cd) bg_vkb2_func_pane_g

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp01

0x72ca,	// (0x00013c93) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x72ca,	// (0x00013c93) vkb2_top_cell_right_wide_pane_g1

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6943,	// (0x0001330c) bg_vkb2_fuc_pane_cp02

0x7328,	// (0x00013cf1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7328,	// (0x00013cf1) vkb2_top_cell_right_narrow_pane_g1

0xd7ec,	// (0x0001a1b5) aid_touch_area_decrease_ParamLimits

0xd7ec,	// (0x0001a1b5) aid_touch_area_decrease

0xd80c,	// (0x0001a1d5) aid_touch_area_increase_ParamLimits

0xd80c,	// (0x0001a1d5) aid_touch_area_increase

0xd818,	// (0x0001a1e1) aid_touch_area_mute_ParamLimits

0xd818,	// (0x0001a1e1) aid_touch_area_mute

0xd83c,	// (0x0001a205) aid_touch_area_slider_ParamLimits

0xd83c,	// (0x0001a205) aid_touch_area_slider

0xd928,	// (0x0001a2f1) popup_slider_window_g4_ParamLimits

0xd928,	// (0x0001a2f1) popup_slider_window_g4

0xd934,	// (0x0001a2fd) popup_slider_window_g5_ParamLimits

0xd934,	// (0x0001a2fd) popup_slider_window_g5

0xd956,	// (0x0001a31f) popup_slider_window_g6_ParamLimits

0xd956,	// (0x0001a31f) popup_slider_window_g6

0xd996,	// (0x0001a35f) popup_slider_window_t2_ParamLimits

0xd996,	// (0x0001a35f) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001c6c9) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001c6c9) popup_slider_window_t

0xd9ae,	// (0x0001a377) slider_pane_ParamLimits

0xd9ae,	// (0x0001a377) slider_pane

0xe6bb,	// (0x0001b084) slider_pane_g1_ParamLimits

0xe6bb,	// (0x0001b084) slider_pane_g1

0xe6cf,	// (0x0001b098) slider_pane_g2_ParamLimits

0xe6cf,	// (0x0001b098) slider_pane_g2

0xe6e5,	// (0x0001b0ae) slider_pane_g3_ParamLimits

0xe6e5,	// (0x0001b0ae) slider_pane_g3

0x0003,

0xfe17,	// (0x0001c7e0) slider_pane_g_ParamLimits

0xfe17,	// (0x0001c7e0) slider_pane_g

0x6320,	// (0x00012ce9) popup_tb_float_extension_window_ParamLimits

0x6320,	// (0x00012ce9) popup_tb_float_extension_window

0xe711,	// (0x0001b0da) aid_size_cell_tb_float_ext

0x3c36,	// (0x000105ff) bg_popup_sub_window_cp28

0xe71d,	// (0x0001b0e6) grid_tb_float_ext_pane

0xe727,	// (0x0001b0f0) cell_tb_float_ext_pane_ParamLimits

0xe727,	// (0x0001b0f0) cell_tb_float_ext_pane

0xe741,	// (0x0001b10a) cell_tb_float_ext_pane_g1

0xe74a,	// (0x0001b113) grid_highlight_pane_cp12

0x6a92,	// (0x0001345b) cell_last_hwr_side_pane_ParamLimits

0x6a92,	// (0x0001345b) cell_last_hwr_side_pane

0xbf55,	// (0x0001891e) cell_last_hwr_side_pane_g1

0xe753,	// (0x0001b11c) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001c7e9) cell_last_hwr_side_pane_g

0x71f0,	// (0x00013bb9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x71f0,	// (0x00013bb9) vkb2_area_bottom_space_btn_pane

0x6ba8,	// (0x00013571) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe212,	// (0x0001abdb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7486,	// (0x00013e4f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x74a5,	// (0x00013e6e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x74a5,	// (0x00013e6e) vkb2_area_bottom_space_btn_pane_g1

0x74df,	// (0x00013ea8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x74df,	// (0x00013ea8) vkb2_area_bottom_space_btn_pane_g2

0x7515,	// (0x00013ede) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7515,	// (0x00013ede) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001c7ee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001c7ee) vkb2_area_bottom_space_btn_pane_g

0x6a06,	// (0x000133cf) cel_fep_hwr_func_pane_ParamLimits

0x6a06,	// (0x000133cf) cel_fep_hwr_func_pane

0x6a42,	// (0x0001340b) cell_hwr_side_button_pane_ParamLimits

0x6a42,	// (0x0001340b) cell_hwr_side_button_pane

0xdbef,	// (0x0001a5b8) aid_area_touch_clock_ParamLimits

0x3f79,	// (0x00010942) bg_uniindi_top_pane_ParamLimits

0xdc01,	// (0x0001a5ca) uniindi_top_pane_g1_ParamLimits

0xdc17,	// (0x0001a5e0) uniindi_top_pane_g2_ParamLimits

0xdc23,	// (0x0001a5ec) uniindi_top_pane_g3_ParamLimits

0xdc34,	// (0x0001a5fd) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001c701) uniindi_top_pane_g_ParamLimits

0xdc41,	// (0x0001a60a) uniindi_top_pane_t1_ParamLimits

0x3f79,	// (0x00010942) bg_vkb2_func_pane_cp01_ParamLimits

0x3f79,	// (0x00010942) bg_vkb2_func_pane_cp01

0xe75c,	// (0x0001b125) cel_fep_hwr_func_pane_g1_ParamLimits

0xe75c,	// (0x0001b125) cel_fep_hwr_func_pane_g1

0x3f79,	// (0x00010942) bg_vkb2_func_pane_cp02_ParamLimits

0x3f79,	// (0x00010942) bg_vkb2_func_pane_cp02

0xe75c,	// (0x0001b125) cell_hwr_side_button_pane_g1_ParamLimits

0xe75c,	// (0x0001b125) cell_hwr_side_button_pane_g1

0x92ba,	// (0x00015c83) status_pane_g4_ParamLimits

0x92ba,	// (0x00015c83) status_pane_g4

0x92d4,	// (0x00015c9d) status_pane_t1

0xbc96,	// (0x0001865f) form2_midp_gauge_slider_cont_pane

0xbc9e,	// (0x00018667) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcb0,	// (0x00018679) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcc2,	// (0x0001868b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001c4c8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcd4,	// (0x0001869d) form2_midp_slider_pane_ParamLimits

0x6e5f,	// (0x00013828) aid_size_cell_func_vkb2_ParamLimits

0x6e5f,	// (0x00013828) aid_size_cell_func_vkb2

0xe6fd,	// (0x0001b0c6) slider_pane_g4_ParamLimits

0xe6fd,	// (0x0001b0c6) slider_pane_g4

0x755f,	// (0x00013f28) form2_midp_gauge_slider_pane_t2_cp01

0x756d,	// (0x00013f36) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x756d,	// (0x00013f36) form2_midp_gauge_slider_pane_t3_cp01

0x758a,	// (0x00013f53) form2_midp_slider_pane_cp01

0x3c36,	// (0x000105ff) navi_smil_pane

0xe795,	// (0x0001b15e) navi_smil_pane_g1

0xe79d,	// (0x0001b166) navi_smil_pane_t1

0xe76a,	// (0x0001b133) form2_midp_slider_pane_g1

0xe773,	// (0x0001b13c) form2_midp_slider_pane_g2

0xe77b,	// (0x0001b144) form2_midp_slider_pane_g3

0xe76a,	// (0x0001b133) form2_midp_slider_pane_g4

0xe783,	// (0x0001b14c) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001c7f7) form2_midp_slider_pane_g

0x754f,	// (0x00013f18) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x754f,	// (0x00013f18) vkb2_area_bottom_space_btn_pane_g4

0x90e9,	// (0x00015ab2) lc0_navi_pane_ParamLimits

0x90e9,	// (0x00015ab2) lc0_navi_pane

0x915f,	// (0x00015b28) lc0_stat_indi_pane_ParamLimits

0x915f,	// (0x00015b28) lc0_stat_indi_pane

0x9176,	// (0x00015b3f) ls0_title_pane_ParamLimits

0x9176,	// (0x00015b3f) ls0_title_pane

0x4277,	// (0x00010c40) bg_popup_sub_pane_cp14_ParamLimits

0xdbd6,	// (0x0001a59f) list_uniindi_pane_ParamLimits

0xdbe2,	// (0x0001a5ab) uniindi_top_pane_ParamLimits

0xdc7d,	// (0x0001a646) list_single_uniindi_pane_g1_ParamLimits

0xdc90,	// (0x0001a659) list_single_uniindi_pane_t1_ParamLimits

0x7593,	// (0x00013f5c) lc0_stat_clock_pane_ParamLimits

0x7593,	// (0x00013f5c) lc0_stat_clock_pane

0xe7ab,	// (0x0001b174) lc0_stat_indi_pane_g1_ParamLimits

0xe7ab,	// (0x0001b174) lc0_stat_indi_pane_g1

0xe7b8,	// (0x0001b181) lc0_stat_indi_pane_g2_ParamLimits

0xe7b8,	// (0x0001b181) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001c802) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001c802) lc0_stat_indi_pane_g

0x75a0,	// (0x00013f69) lc0_uni_indicator_pane_ParamLimits

0x75a0,	// (0x00013f69) lc0_uni_indicator_pane

0xe7c5,	// (0x0001b18e) ls0_title_pane_g1_ParamLimits

0xe7c5,	// (0x0001b18e) ls0_title_pane_g1

0xe7d9,	// (0x0001b1a2) ls0_title_pane_t1_ParamLimits

0xe7d9,	// (0x0001b1a2) ls0_title_pane_t1

0x75ad,	// (0x00013f76) lc0_uni_indicator_pane_g1_ParamLimits

0x75ad,	// (0x00013f76) lc0_uni_indicator_pane_g1

0xe80f,	// (0x0001b1d8) lc0_stat_clock_pane_t1

0x556c,	// (0x00011f35) main_ai5_pane

0xe81d,	// (0x0001b1e6) ai5_sk_pane_ParamLimits

0xe81d,	// (0x0001b1e6) ai5_sk_pane

0xe82a,	// (0x0001b1f3) cell_ai5_widget_pane_ParamLimits

0xe82a,	// (0x0001b1f3) cell_ai5_widget_pane

0xe8dc,	// (0x0001b2a5) aid_size_cell_widget_grid

0xe8ea,	// (0x0001b2b3) bg_ai5_widget_pane_ParamLimits

0xe8ea,	// (0x0001b2b3) bg_ai5_widget_pane

0xe95e,	// (0x0001b327) cell_ai5_widget_pane_g2

0xe96e,	// (0x0001b337) cell_ai5_widget_pane_g3

0xe985,	// (0x0001b34e) cell_ai5_widget_pane_g4

0xe991,	// (0x0001b35a) cell_ai5_widget_pane_g5

0xe99d,	// (0x0001b366) cell_ai5_widget_pane_g6

0xe9a9,	// (0x0001b372) cell_ai5_widget_pane_g7

0xe9f1,	// (0x0001b3ba) cell_ai5_widget_pane_t1_ParamLimits

0xe9f1,	// (0x0001b3ba) cell_ai5_widget_pane_t1

0xea0e,	// (0x0001b3d7) cell_ai5_widget_pane_t2_ParamLimits

0xea0e,	// (0x0001b3d7) cell_ai5_widget_pane_t2

0xea26,	// (0x0001b3ef) cell_ai5_widget_pane_t3_ParamLimits

0xea26,	// (0x0001b3ef) cell_ai5_widget_pane_t3

0xea3e,	// (0x0001b407) cell_ai5_widget_pane_t4_ParamLimits

0xea3e,	// (0x0001b407) cell_ai5_widget_pane_t4

0xea5b,	// (0x0001b424) cell_ai5_widget_pane_t5_ParamLimits

0xea5b,	// (0x0001b424) cell_ai5_widget_pane_t5

0xea7a,	// (0x0001b443) cell_ai5_widget_pane_t6_ParamLimits

0xea7a,	// (0x0001b443) cell_ai5_widget_pane_t6

0xea8c,	// (0x0001b455) cell_ai5_widget_pane_t7_ParamLimits

0xea8c,	// (0x0001b455) cell_ai5_widget_pane_t7

0xeaa5,	// (0x0001b46e) cell_ai5_widget_pane_t8_ParamLimits

0xeaa5,	// (0x0001b46e) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001c81c) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001c81c) cell_ai5_widget_pane_t

0xeaf9,	// (0x0001b4c2) grid_ai5_widget_pane

0x4277,	// (0x00010c40) highlight_cell_ai5_widget_pane_ParamLimits

0x4277,	// (0x00010c40) highlight_cell_ai5_widget_pane

0xeb07,	// (0x0001b4d0) ai5_sk_left_pane

0xeb11,	// (0x0001b4da) ai5_sk_middle_pane

0xeb1b,	// (0x0001b4e4) ai5_sk_right_pane

0xeb25,	// (0x0001b4ee) bg_ai5_widget_pane_g1_ParamLimits

0xeb25,	// (0x0001b4ee) bg_ai5_widget_pane_g1

0xeb31,	// (0x0001b4fa) bg_ai5_widget_pane_g2_ParamLimits

0xeb31,	// (0x0001b4fa) bg_ai5_widget_pane_g2

0xeb3d,	// (0x0001b506) bg_ai5_widget_pane_g3_ParamLimits

0xeb3d,	// (0x0001b506) bg_ai5_widget_pane_g3

0xeb49,	// (0x0001b512) bg_ai5_widget_pane_g4_ParamLimits

0xeb49,	// (0x0001b512) bg_ai5_widget_pane_g4

0xeb55,	// (0x0001b51e) bg_ai5_widget_pane_g5_ParamLimits

0xeb55,	// (0x0001b51e) bg_ai5_widget_pane_g5

0xeb61,	// (0x0001b52a) bg_ai5_widget_pane_g6_ParamLimits

0xeb61,	// (0x0001b52a) bg_ai5_widget_pane_g6

0xeb6d,	// (0x0001b536) bg_ai5_widget_pane_g7_ParamLimits

0xeb6d,	// (0x0001b536) bg_ai5_widget_pane_g7

0xeb79,	// (0x0001b542) bg_ai5_widget_pane_g8_ParamLimits

0xeb79,	// (0x0001b542) bg_ai5_widget_pane_g8

0xeb85,	// (0x0001b54e) bg_ai5_widget_pane_g9_ParamLimits

0xeb85,	// (0x0001b54e) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001c831) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001c831) bg_ai5_widget_pane_g

0xebb7,	// (0x0001b580) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb7,	// (0x0001b580) cell_shortcut_ai5_widget_pane

0x8bd3,	// (0x0001559c) bg_cell_shortcut_ai5_widget_pane

0xebc8,	// (0x0001b591) cell_grid_ai5_widget_pane_g1

0x8bd3,	// (0x0001559c) highlight_cell_shortcut_ai5_widget_pane

0x9460,	// (0x00015e29) ai5_sk_left_pane_g1

0xebd1,	// (0x0001b59a) ai5_sk_left_pane_g2

0xebd9,	// (0x0001b5a2) ai5_sk_left_pane_g3

0xebe1,	// (0x0001b5aa) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001c844) ai5_sk_left_pane_g

0xebe9,	// (0x0001b5b2) ai5_sk_left_pane_t1

0x9468,	// (0x00015e31) ai5_sk_right_pane_g1

0xebf7,	// (0x0001b5c0) ai5_sk_right_pane_g2

0xebff,	// (0x0001b5c8) ai5_sk_right_pane_g3

0xec07,	// (0x0001b5d0) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001c84d) ai5_sk_right_pane_g

0xec0f,	// (0x0001b5d8) ai5_sk_right_pane_t1

0x9468,	// (0x00015e31) ai5_sk_middle_pane_g1

0x9460,	// (0x00015e29) ai5_sk_middle_pane_g2

0x9480,	// (0x00015e49) ai5_sk_middle_pane_g3

0xebff,	// (0x0001b5c8) ai5_sk_middle_pane_g4

0xebd9,	// (0x0001b5a2) ai5_sk_middle_pane_g5

0xec1d,	// (0x0001b5e6) ai5_sk_middle_pane_g6

0xec25,	// (0x0001b5ee) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001c856) ai5_sk_middle_pane_g

0x8f6f,	// (0x00015938) aid_touch_area_size_lc0_ParamLimits

0x8f6f,	// (0x00015938) aid_touch_area_size_lc0

0x6bd7,	// (0x000135a0) cell_hwr_candidate_pane_t1_ParamLimits

0x8f8b,	// (0x00015954) aid_touch_navi_pane

0x9264,	// (0x00015c2d) status_dt_navi_pane_ParamLimits

0x9264,	// (0x00015c2d) status_dt_navi_pane

0x9271,	// (0x00015c3a) status_dt_sta_pane_ParamLimits

0x9271,	// (0x00015c3a) status_dt_sta_pane

0xec2d,	// (0x0001b5f6) dt_sta_controll_pane

0xec3a,	// (0x0001b603) dt_sta_indi_pane

0xec4b,	// (0x0001b614) dt_sta_title_pane

0x3f79,	// (0x00010942) bg_dt_sta_indi_pane_ParamLimits

0x3f79,	// (0x00010942) bg_dt_sta_indi_pane

0xec5e,	// (0x0001b627) dt_sta_battery_pane

0xec66,	// (0x0001b62f) dt_sta_indi_pane_g1

0xec6f,	// (0x0001b638) dt_sta_indi_pane_g2

0xec78,	// (0x0001b641) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001c865) dt_sta_indi_pane_g

0xec81,	// (0x0001b64a) dt_sta_signal_pane

0x4277,	// (0x00010c40) bg_dt_sta_title_pane_ParamLimits

0x4277,	// (0x00010c40) bg_dt_sta_title_pane

0xa37b,	// (0x00016d44) dt_sta_title_pane_g1

0xec8a,	// (0x0001b653) dt_sta_title_pane_t1_ParamLimits

0xec8a,	// (0x0001b653) dt_sta_title_pane_t1

0x3c36,	// (0x000105ff) bg_dt_sta_control_pane

0xec9f,	// (0x0001b668) dt_sta_controll_pane_g1

0xeca8,	// (0x0001b671) bg_dt_sta_title_pane_g1

0xecb1,	// (0x0001b67a) bg_dt_sta_title_pane_g2

0xecba,	// (0x0001b683) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001c86c) bg_dt_sta_title_pane_g

0xbf55,	// (0x0001891e) bg_dt_sta_indi_pane_g1

0xecc3,	// (0x0001b68c) dt_sta_signal_pane_g1

0xeccb,	// (0x0001b694) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001c873) dt_sta_signal_pane_g

0xecd3,	// (0x0001b69c) dt_sta_battery_pane_g1

0xecdc,	// (0x0001b6a5) dt_sta_battery_pane_t1

0xbf55,	// (0x0001891e) bg_dt_sta_control_pane_g1

0x49ea,	// (0x000113b3) fep_china_uni_eep_pane

0x49f2,	// (0x000113bb) fep_china_uni_entry_pane_ParamLimits

0x4a02,	// (0x000113cb) popup_fep_china_uni_window_g1_ParamLimits

0x4a12,	// (0x000113db) popup_fep_china_uni_window_g2_ParamLimits

0x4a12,	// (0x000113db) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x0001c0d7) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x0001c0d7) popup_fep_china_uni_window_g

0xeceb,	// (0x0001b6b4) fep_china_uni_eep_pane_g1

0xecf3,	// (0x0001b6bc) fep_china_uni_eep_pane_t1

0xe78c,	// (0x0001b155) aid_touch_area_size_smil_player

0x90e1,	// (0x00015aaa) lc0_clock_pane

0x92c8,	// (0x00015c91) status_pane_g5_ParamLimits

0x92c8,	// (0x00015c91) status_pane_g5

0x5fe1,	// (0x000129aa) popup_keymap_window

0x9286,	// (0x00015c4f) status_icon_pane

0xe96e,	// (0x0001b337) cell_ai5_widget_pane_g3_ParamLimits

0xe985,	// (0x0001b34e) cell_ai5_widget_pane_g4_ParamLimits

0xe991,	// (0x0001b35a) cell_ai5_widget_pane_g5_ParamLimits

0xe9b5,	// (0x0001b37e) cell_ai5_widget_pane_g8_ParamLimits

0xe9b5,	// (0x0001b37e) cell_ai5_widget_pane_g8

0xe9c9,	// (0x0001b392) cell_ai5_widget_pane_g9_ParamLimits

0xe9c9,	// (0x0001b392) cell_ai5_widget_pane_g9

0xe9dd,	// (0x0001b3a6) cell_ai5_widget_pane_g10_ParamLimits

0xe9dd,	// (0x0001b3a6) cell_ai5_widget_pane_g10

0xed02,	// (0x0001b6cb) status_icon_pane_g1

0x3c36,	// (0x000105ff) bg_popup_sub_pane_cp13

0xed0a,	// (0x0001b6d3) popup_keymap_window_t1

0x8ea4,	// (0x0001586d) control_pane_g6_ParamLimits

0x8ea4,	// (0x0001586d) control_pane_g6

0x8eb1,	// (0x0001587a) control_pane_g7_ParamLimits

0x8eb1,	// (0x0001587a) control_pane_g7

0x8ebe,	// (0x00015887) control_pane_g8_ParamLimits

0x8ebe,	// (0x00015887) control_pane_g8

0xec2d,	// (0x0001b5f6) dt_sta_controll_pane_ParamLimits

0xec3a,	// (0x0001b603) dt_sta_indi_pane_ParamLimits

0xec4b,	// (0x0001b614) dt_sta_title_pane_ParamLimits

0x414c,	// (0x00010b15) aid_size_touch_scroll_bar_cale

0x5645,	// (0x0001200e) popup_discreet_window_ParamLimits

0x5645,	// (0x0001200e) popup_discreet_window

0x56bf,	// (0x00012088) popup_sk_window

0x9bbf,	// (0x00016588) bg_popup_sub_pane_cp28_ParamLimits

0x9bbf,	// (0x00016588) bg_popup_sub_pane_cp28

0xed18,	// (0x0001b6e1) popup_discreet_window_g1_ParamLimits

0xed18,	// (0x0001b6e1) popup_discreet_window_g1

0xed38,	// (0x0001b701) popup_discreet_window_t1_ParamLimits

0xed38,	// (0x0001b701) popup_discreet_window_t1

0xed56,	// (0x0001b71f) popup_discreet_window_t2_ParamLimits

0xed56,	// (0x0001b71f) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001c878) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001c878) popup_discreet_window_t

0x75c1,	// (0x00013f8a) popup_sk_window_g1

0x75cb,	// (0x00013f94) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001c87f) popup_sk_window_g

0x75d3,	// (0x00013f9c) popup_sk_window_t1

0x75e1,	// (0x00013faa) popup_sk_window_t1_copy1

0xe95e,	// (0x0001b327) cell_ai5_widget_pane_g2_ParamLimits

0xeab7,	// (0x0001b480) cell_ai5_widget_pane_t9_ParamLimits

0xeab7,	// (0x0001b480) cell_ai5_widget_pane_t9

0x3c36,	// (0x000105ff) main_fep_fshwr2_pane

0x75ef,	// (0x00013fb8) aid_fshwr2_btn_pane

0x75fb,	// (0x00013fc4) aid_fshwr2_syb_pane

0x760c,	// (0x00013fd5) aid_fshwr2_txt_pane

0x7618,	// (0x00013fe1) fshwr2_func_candi_pane

0x7630,	// (0x00013ff9) fshwr2_hwr_syb_pane

0x7647,	// (0x00014010) fshwr2_icf_pane

0x556c,	// (0x00011f35) fshwr2_icf_bg_pane

0x7670,	// (0x00014039) fshwr2_icf_pane_t1_ParamLimits

0x7670,	// (0x00014039) fshwr2_icf_pane_t1

0x48d3,	// (0x0001129c) fshwr2_func_candi_pane_g1

0xeda8,	// (0x0001b771) fshwr2_func_candi_row_pane_ParamLimits

0xeda8,	// (0x0001b771) fshwr2_func_candi_row_pane

0x7689,	// (0x00014052) cell_fshwr2_syb_pane_ParamLimits

0x7689,	// (0x00014052) cell_fshwr2_syb_pane

0x6ba8,	// (0x00013571) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6ba8,	// (0x00013571) fshwr2_hwr_syb_pane_g1

0x556c,	// (0x00011f35) bg_popup_call_pane_cp01

0x769f,	// (0x00014068) fshwr2_func_candi_cell_pane_ParamLimits

0x769f,	// (0x00014068) fshwr2_func_candi_cell_pane

0xa21b,	// (0x00016be4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa21b,	// (0x00016be4) fshwr2_func_candi_cell_bg_pane

0x76ea,	// (0x000140b3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x76ea,	// (0x000140b3) fshwr2_func_candi_cell_pane_g1

0x7712,	// (0x000140db) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7712,	// (0x000140db) fshwr2_func_candi_cell_pane_t1

0x556c,	// (0x00011f35) bg_button_pane_cp08

0xedb8,	// (0x0001b781) cell_fshwr2_syb_bg_pane

0x7725,	// (0x000140ee) cell_fshwr2_syb_bg_pane_g1

0x772d,	// (0x000140f6) cell_fshwr2_syb_bg_pane_t1

0x4277,	// (0x00010c40) main_tmo_pane

0xa6b4,	// (0x0001707d) uni_indicator_pane_g1_ParamLimits

0xa6c7,	// (0x00017090) uni_indicator_pane_g2_ParamLimits

0xa6d9,	// (0x000170a2) uni_indicator_pane_g3_ParamLimits

0xa6e8,	// (0x000170b1) uni_indicator_pane_g4_ParamLimits

0xa6e8,	// (0x000170b1) uni_indicator_pane_g4

0xa6fc,	// (0x000170c5) uni_indicator_pane_g5_ParamLimits

0xa6fc,	// (0x000170c5) uni_indicator_pane_g5

0xa6fc,	// (0x000170c5) uni_indicator_pane_g6_ParamLimits

0xa6fc,	// (0x000170c5) uni_indicator_pane_g6

0xf912,	// (0x0001c2db) uni_indicator_pane_g_ParamLimits

0xd7ce,	// (0x0001a197) popup_tmo_note_window_ParamLimits

0xd7ce,	// (0x0001a197) popup_tmo_note_window

0x6e41,	// (0x0001380a) fshwr2_bg_pane

0x7703,	// (0x000140cc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7703,	// (0x000140cc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001c884) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001c884) fshwr2_func_candi_cell_pane_g

0x6b90,	// (0x00013559) bg_popup_window_pane_cp01

0x773c,	// (0x00014105) bg_popup_window_pane_g1_cp01

0xedc0,	// (0x0001b789) bg_popup_window_pane_cp22_ParamLimits

0xedc0,	// (0x0001b789) bg_popup_window_pane_cp22

0xedce,	// (0x0001b797) listscroll_tmo_link_pane_ParamLimits

0xedce,	// (0x0001b797) listscroll_tmo_link_pane

0xee0e,	// (0x0001b7d7) popup_tmo_note_window_g1_ParamLimits

0xee0e,	// (0x0001b7d7) popup_tmo_note_window_g1

0xee1b,	// (0x0001b7e4) tmo_note_info_pane_ParamLimits

0xee1b,	// (0x0001b7e4) tmo_note_info_pane

0xee35,	// (0x0001b7fe) list_tmo_note_info_pane_g1_ParamLimits

0xee35,	// (0x0001b7fe) list_tmo_note_info_pane_g1

0xee4c,	// (0x0001b815) list_tmo_note_info_pane_g2_ParamLimits

0xee4c,	// (0x0001b815) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001c889) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001c889) list_tmo_note_info_pane_g

0xee68,	// (0x0001b831) list_tmo_note_info_text_pane_ParamLimits

0xee68,	// (0x0001b831) list_tmo_note_info_text_pane

0xeee9,	// (0x0001b8b2) list_tmo_link_pane

0xeef6,	// (0x0001b8bf) scroll_pane_cp20

0xef03,	// (0x0001b8cc) list_single_tmo_link_pane_ParamLimits

0xef03,	// (0x0001b8cc) list_single_tmo_link_pane

0xef13,	// (0x0001b8dc) list_single_tmo_link_pane_t1

0xef21,	// (0x0001b8ea) list_tmo_note_info_text_pane_t1_ParamLimits

0xef21,	// (0x0001b8ea) list_tmo_note_info_text_pane_t1

0x8401,	// (0x00014dca) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8401,	// (0x00014dca) aid_size_touch_scroll_bar_cp01

0x8303,	// (0x00014ccc) aid_size_touch_slider_marker

0x56a7,	// (0x00012070) popup_settings_window_ParamLimits

0x56a7,	// (0x00012070) popup_settings_window

0x8f3b,	// (0x00015904) popup_candi_list_indi_window

0x8f8b,	// (0x00015954) aid_touch_navi_pane_ParamLimits

0x6d9c,	// (0x00013765) rs_clock_indi_pane

0x6da5,	// (0x0001376e) sctrl_sk_bottom_pane_ParamLimits

0x6db6,	// (0x0001377f) sctrl_sk_top_pane_ParamLimits

0x6eb9,	// (0x00013882) popup_fep_tooltip_window

0xe8dc,	// (0x0001b2a5) aid_size_cell_widget_grid_ParamLimits

0xe949,	// (0x0001b312) cell_ai5_widget_pane_g1_ParamLimits

0xe949,	// (0x0001b312) cell_ai5_widget_pane_g1

0xe99d,	// (0x0001b366) cell_ai5_widget_pane_g6_ParamLimits

0xe9a9,	// (0x0001b372) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001c807) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001c807) cell_ai5_widget_pane_g

0xeadb,	// (0x0001b4a4) cell_ai5_widget_pane_t10_ParamLimits

0xeadb,	// (0x0001b4a4) cell_ai5_widget_pane_t10

0xeaf9,	// (0x0001b4c2) grid_ai5_widget_pane_ParamLimits

0xeb91,	// (0x0001b55a) cell_contacts_ai5_widget_pane_ParamLimits

0xeb91,	// (0x0001b55a) cell_contacts_ai5_widget_pane

0xed6b,	// (0x0001b734) popup_discreet_window_t3_ParamLimits

0xed6b,	// (0x0001b734) popup_discreet_window_t3

0x765c,	// (0x00014025) popup_fshwr2_char_preview_window_ParamLimits

0x765c,	// (0x00014025) popup_fshwr2_char_preview_window

0xee86,	// (0x0001b84f) tmo_note_info_pane_t1

0xee9b,	// (0x0001b864) tmo_note_info_pane_t2

0xeeb0,	// (0x0001b879) tmo_note_info_pane_t3

0xeec5,	// (0x0001b88e) tmo_note_info_pane_t4

0xeed7,	// (0x0001b8a0) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001c88e) tmo_note_info_pane_t

0xeee9,	// (0x0001b8b2) list_tmo_link_pane_ParamLimits

0xeef6,	// (0x0001b8bf) scroll_pane_cp20_ParamLimits

0x556c,	// (0x00011f35) bg_popup_fep_char_preview_window_cp01

0xef3a,	// (0x0001b903) popup_fshwr2_char_preview_window_t1

0xef48,	// (0x0001b911) popup_candi_list_indi_window_g1

0xef51,	// (0x0001b91a) bg_cell_contacts_ai5_widget_pane

0xef5d,	// (0x0001b926) cell_contacts_ai5_widget_pane_g1

0xc7cb,	// (0x00019194) cell_contacts_ai5_widget_pane_g2

0xef72,	// (0x0001b93b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001c899) cell_contacts_ai5_widget_pane_g

0xef7e,	// (0x0001b947) cell_contacts_ai5_widget_pane_t1

0x4277,	// (0x00010c40) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff5,	// (0x0001b9be) settings_container_pane

0x8bd3,	// (0x0001559c) listscroll_set_pane_copy1

0xb32e,	// (0x00017cf7) scroll_pane_cp121_copy1

0x9978,	// (0x00016341) set_content_pane_copy1

0xf001,	// (0x0001b9ca) aid_height_set_list_copy1_ParamLimits

0xf001,	// (0x0001b9ca) aid_height_set_list_copy1

0xa906,	// (0x000172cf) aid_size_parent_copy1_ParamLimits

0xa906,	// (0x000172cf) aid_size_parent_copy1

0xf00d,	// (0x0001b9d6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00d,	// (0x0001b9d6) button_value_adjust_pane_cp6_copy1

0x8f21,	// (0x000158ea) list_highlight_pane_cp2_copy1_ParamLimits

0x8f21,	// (0x000158ea) list_highlight_pane_cp2_copy1

0xf021,	// (0x0001b9ea) list_set_pane_copy1_ParamLimits

0xf021,	// (0x0001b9ea) list_set_pane_copy1

0xef90,	// (0x0001b959) main_pane_set_t1_copy1_ParamLimits

0xef90,	// (0x0001b959) main_pane_set_t1_copy1

0xefca,	// (0x0001b993) main_pane_set_t2_copy1_ParamLimits

0xefca,	// (0x0001b993) main_pane_set_t2_copy1

0xf0ce,	// (0x0001ba97) main_pane_set_t3_copy1

0xf0dc,	// (0x0001baa5) main_pane_set_t4_copy1

0xefe9,	// (0x0001b9b2) set_content_pane_g1_copy1_ParamLimits

0xefe9,	// (0x0001b9b2) set_content_pane_g1_copy1

0xf0ea,	// (0x0001bab3) setting_code_pane_copy1

0xf0f2,	// (0x0001babb) setting_slider_graphic_pane_copy1

0xf0f2,	// (0x0001babb) setting_slider_pane_copy1

0xf0f2,	// (0x0001babb) setting_text_pane_copy1

0xf0f2,	// (0x0001babb) setting_volume_pane_copy1

0xf0ea,	// (0x0001bab3) settings_code_pane_cp2_copy1

0xf0fa,	// (0x0001bac3) settings_code_pane_cp_copy1_ParamLimits

0xf0fa,	// (0x0001bac3) settings_code_pane_cp_copy1

0x7745,	// (0x0001410e) volume_set_pane_copy1

0xf10e,	// (0x0001bad7) volume_set_pane_g10_copy1

0xf116,	// (0x0001badf) volume_set_pane_g1_copy1

0xf11e,	// (0x0001bae7) volume_set_pane_g2_copy1

0xf126,	// (0x0001baef) volume_set_pane_g3_copy1

0xf12e,	// (0x0001baf7) volume_set_pane_g4_copy1

0xf136,	// (0x0001baff) volume_set_pane_g5_copy1

0xf13e,	// (0x0001bb07) volume_set_pane_g6_copy1

0xf146,	// (0x0001bb0f) volume_set_pane_g7_copy1

0xf14e,	// (0x0001bb17) volume_set_pane_g8_copy1

0xf156,	// (0x0001bb1f) volume_set_pane_g9_copy1

0x3e35,	// (0x000107fe) bg_set_opt_pane_cp_copy1_ParamLimits

0x3e35,	// (0x000107fe) bg_set_opt_pane_cp_copy1

0x774d,	// (0x00014116) setting_slider_pane_t1_copy1_ParamLimits

0x774d,	// (0x00014116) setting_slider_pane_t1_copy1

0x776b,	// (0x00014134) setting_slider_pane_t2_copy1_ParamLimits

0x776b,	// (0x00014134) setting_slider_pane_t2_copy1

0x7785,	// (0x0001414e) setting_slider_pane_t3_copy1_ParamLimits

0x7785,	// (0x0001414e) setting_slider_pane_t3_copy1

0x779d,	// (0x00014166) slider_set_pane_copy1_ParamLimits

0x779d,	// (0x00014166) slider_set_pane_copy1

0x4331,	// (0x00010cfa) set_opt_bg_pane_g1_copy2

0x4339,	// (0x00010d02) set_opt_bg_pane_g2_copy2

0xf15e,	// (0x0001bb27) set_opt_bg_pane_g3_copy2

0x4349,	// (0x00010d12) set_opt_bg_pane_g4_copy2

0x4351,	// (0x00010d1a) set_opt_bg_pane_g5_copy2

0x4359,	// (0x00010d22) set_opt_bg_pane_g6_copy2

0xf168,	// (0x0001bb31) set_opt_bg_pane_g7_copy2

0xf170,	// (0x0001bb39) set_opt_bg_pane_g8_copy2

0xf17a,	// (0x0001bb43) set_opt_bg_pane_g9_copy2

0x77b3,	// (0x0001417c) aid_size_touch_slider_mark_copy1_ParamLimits

0x77b3,	// (0x0001417c) aid_size_touch_slider_mark_copy1

0xf184,	// (0x0001bb4d) slider_set_pane_g1_copy1

0x77c7,	// (0x00014190) slider_set_pane_g2_copy1

0x6789,	// (0x00013152) slider_set_pane_g3_copy1_ParamLimits

0x6789,	// (0x00013152) slider_set_pane_g3_copy1

0x679d,	// (0x00013166) slider_set_pane_g4_copy1_ParamLimits

0x679d,	// (0x00013166) slider_set_pane_g4_copy1

0x67b5,	// (0x0001317e) slider_set_pane_g5_copy1_ParamLimits

0x67b5,	// (0x0001317e) slider_set_pane_g5_copy1

0x6789,	// (0x00013152) slider_set_pane_g6_copy1_ParamLimits

0x6789,	// (0x00013152) slider_set_pane_g6_copy1

0x77cf,	// (0x00014198) slider_set_pane_g7_copy1_ParamLimits

0x77cf,	// (0x00014198) slider_set_pane_g7_copy1

0x3db9,	// (0x00010782) bg_set_opt_pane_cp2_copy1

0xf18d,	// (0x0001bb56) setting_slider_graphic_pane_g1_copy1

0xf196,	// (0x0001bb5f) setting_slider_graphic_pane_t1_copy1

0xf1a6,	// (0x0001bb6f) setting_slider_graphic_pane_t2_copy1

0xf1b6,	// (0x0001bb7f) slider_set_pane_cp_copy1

0xf1c6,	// (0x0001bb8f) input_focus_pane_cp1_copy1

0xf1cf,	// (0x0001bb98) list_set_text_pane_copy1

0xf1d7,	// (0x0001bba0) setting_text_pane_g1_copy1

0xf1e0,	// (0x0001bba9) set_text_pane_t1_copy1

0xf1c6,	// (0x0001bb8f) input_focus_pane_cp2_copy1

0xf1d7,	// (0x0001bba0) setting_code_pane_g1_copy1

0xf1fb,	// (0x0001bbc4) setting_code_pane_t1_copy1

0xf209,	// (0x0001bbd2) list_set_graphic_pane_copy1

0x3db9,	// (0x00010782) bg_set_opt_pane_cp4_copy1

0x88de,	// (0x000152a7) list_set_graphic_pane_g1_copy1_ParamLimits

0x88de,	// (0x000152a7) list_set_graphic_pane_g1_copy1

0xf21d,	// (0x0001bbe6) list_set_graphic_pane_g2_copy1

0x88f6,	// (0x000152bf) list_set_graphic_pane_t1_copy1_ParamLimits

0x88f6,	// (0x000152bf) list_set_graphic_pane_t1_copy1

0xbf55,	// (0x0001891e) rs_clock_indi_pane_g1

0xf225,	// (0x0001bbee) rs_clock_indi_pane_t1

0xf233,	// (0x0001bbfc) rs_indi_pane

0xf23b,	// (0x0001bc04) rs_indi_pane_g1

0xf244,	// (0x0001bc0d) rs_indi_pane_g2

0xef48,	// (0x0001b911) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001c8a0) rs_indi_pane_g

0x8bd3,	// (0x0001559c) bg_popup_preview_window_pane_cp03

0xf24d,	// (0x0001bc16) popup_fep_tooltip_window_t1

0xce0c,	// (0x000197d5) popup_note2_window_g2_ParamLimits

0xce0c,	// (0x000197d5) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001c640) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001c640) popup_note2_window_g

0xd409,	// (0x00019dd2) bg_popup_sub_pane_cp11_ParamLimits

0xd416,	// (0x00019ddf) cell_ai3_links_pane_g1_ParamLimits

0xd42d,	// (0x00019df6) cell_ai3_links_pane_t1

0xf1e0,	// (0x0001bba9) set_text_pane_t1_copy1_ParamLimits

0x8ae4,	// (0x000154ad) cell_graphic_popup_pane_cp2_ParamLimits

0x8ae4,	// (0x000154ad) cell_graphic_popup_pane_cp2

0xf25b,	// (0x0001bc24) cell_graphic_popup_pane_g1_cp2

0x40cf,	// (0x00010a98) cell_graphic_popup_pane_g2_cp2

0xf263,	// (0x0001bc2c) cell_graphic_popup_pane_g3_cp2

0xf26b,	// (0x0001bc34) cell_graphic_popup_pane_t2_cp2

0x40e0,	// (0x00010aa9) grid_highlight_pane_cp3_cp2

0x4729,	// (0x000110f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4277,	// (0x00010c40) main_tmo_pane_ParamLimits

0xd7c2,	// (0x0001a18b) popup_tmo_big_image_note_window

0xe938,	// (0x0001b301) cell_ai5_widget_list_pane

0xe940,	// (0x0001b309) cell_ai5_widget_lrg_icon_pane

0xee86,	// (0x0001b84f) tmo_note_info_pane_t1_ParamLimits

0xee9b,	// (0x0001b864) tmo_note_info_pane_t2_ParamLimits

0xeeb0,	// (0x0001b879) tmo_note_info_pane_t3_ParamLimits

0xeec5,	// (0x0001b88e) tmo_note_info_pane_t4_ParamLimits

0xeed7,	// (0x0001b8a0) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001c88e) tmo_note_info_pane_t_ParamLimits

0xeff5,	// (0x0001b9be) settings_container_pane_ParamLimits

0xf1be,	// (0x0001bb87) indicator_popup_pane_cp5

0xf1be,	// (0x0001bb87) indicator_popup_pane_cp6

0xf209,	// (0x0001bbd2) list_set_graphic_pane_copy1_ParamLimits

0x3c36,	// (0x000105ff) bg_popup_window_pane_cp23

0xf279,	// (0x0001bc42) popup_tmo_big_image_note_window_g1

0xf282,	// (0x0001bc4b) popup_tmo_big_image_note_window_t1

0xf292,	// (0x0001bc5b) popup_tmo_big_image_note_window_t2

0xf2a2,	// (0x0001bc6b) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001c8a7) popup_tmo_big_image_note_window_t

0xbf55,	// (0x0001891e) cell_ai5_widget_lrg_icon_pane_g1

0xf2b2,	// (0x0001bc7b) cell_ai5_widget_lrg_icon_pane_t1

0xf2c0,	// (0x0001bc89) cell_ai5_widget_list_row_pane_ParamLimits

0xf2c0,	// (0x0001bc89) cell_ai5_widget_list_row_pane

0xf2d7,	// (0x0001bca0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d7,	// (0x0001bca0) cell_ai5_widget_list_row_pane_g1

0xf2e4,	// (0x0001bcad) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e4,	// (0x0001bcad) cell_ai5_widget_list_row_pane_t1

0xf30f,	// (0x0001bcd8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30f,	// (0x0001bcd8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0001c8ae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001c8ae) cell_ai5_widget_list_row_pane_t

0x556c,	// (0x00011f35) main_fep_vtchi_ss_pane

0xf353,	// (0x0001bd1c) popup_fep_char_pre_window

0xf35b,	// (0x0001bd24) popup_fep_ituss_window

0xf37c,	// (0x0001bd45) popup_fep_vkbss_window

0xf3a6,	// (0x0001bd6f) grid_vkbss_keypad_pane_ParamLimits

0xf3a6,	// (0x0001bd6f) grid_vkbss_keypad_pane

0xf3b2,	// (0x0001bd7b) ituss_keypad_pane

0x77f1,	// (0x000141ba) aid_vkbss_key_offset_ParamLimits

0x77f1,	// (0x000141ba) aid_vkbss_key_offset

0x77fd,	// (0x000141c6) cell_vkbss_key_pane_ParamLimits

0x77fd,	// (0x000141c6) cell_vkbss_key_pane

0x92a2,	// (0x00015c6b) bg_cell_vkbss_key_g1_ParamLimits

0x92a2,	// (0x00015c6b) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0001bd8a) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0001bd8a) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0001bd9e) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0001bd9e) cell_vkbss_key_g1

0xf3e9,	// (0x0001bdb2) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0001bdb2) cell_vkbss_key_t1

0x7813,	// (0x000141dc) cell_ituss_key_pane_ParamLimits

0x7813,	// (0x000141dc) cell_ituss_key_pane

0xf414,	// (0x0001bddd) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0001bddd) bg_cell_ituss_key_g1

0xf420,	// (0x0001bde9) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0001bde9) cell_ituss_key_pane_g1

0x7824,	// (0x000141ed) cell_ituss_key_pane_g2_ParamLimits

0x7824,	// (0x000141ed) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0001c8b5) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001c8b5) cell_ituss_key_pane_g

0x7850,	// (0x00014219) cell_ituss_key_t1_ParamLimits

0x7850,	// (0x00014219) cell_ituss_key_t1

0x788a,	// (0x00014253) cell_ituss_key_t2_ParamLimits

0x788a,	// (0x00014253) cell_ituss_key_t2

0x78bb,	// (0x00014284) cell_ituss_key_t3_ParamLimits

0x78bb,	// (0x00014284) cell_ituss_key_t3

0x788a,	// (0x00014253) cell_ituss_key_t4_ParamLimits

0x788a,	// (0x00014253) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0001c8bc) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001c8bc) cell_ituss_key_t

0xf446,	// (0x0001be0f) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0001be17) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0001be1f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0001c8c7) cell_vkbss_key_3p_pane_g

0x556c,	// (0x00011f35) bg_popup_fep_char_preview_window_cp02

0x78fe,	// (0x000142c7) popup_fep_char_pre_window_t1

0xe8d2,	// (0x0001b29b) main_ai5_sk_pane

0xef51,	// (0x0001b91a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5d,	// (0x0001b926) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7cb,	// (0x00019194) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef72,	// (0x0001b93b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001c899) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7e,	// (0x0001b947) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4277,	// (0x00010c40) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0001be27) main_ai5_sk_pane_g1

0x9a00,	// (0x000163c9) popup_query_code_window_g1

0xf371,	// (0x0001bd3a) popup_fep_vkb_icf_pane

0xf390,	// (0x0001bd59) popup_fep_vtchi_icf_pane

0xf467,	// (0x0001be30) bg_icf_pane

0xf473,	// (0x0001be3c) list_vkb_icf_pane

0xf482,	// (0x0001be4b) bg_icf_pane_cp01

0xf495,	// (0x0001be5e) vtchi_icf_list_pane

0xf4a5,	// (0x0001be6e) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0001be6e) list_vkb_icf_pane_t1

0xf4bc,	// (0x0001be85) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0001be85) vtchi_icf_list_pane_t1

0xf35b,	// (0x0001bd24) popup_fep_ituss_window_ParamLimits

0xf390,	// (0x0001bd59) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0001bd7b) ituss_keypad_pane_ParamLimits

0x77e5,	// (0x000141ae) ituss_sks_pane

0xf467,	// (0x0001be30) bg_icf_pane_ParamLimits

0xf337,	// (0x0001bd00) icf_edit_indi_pane_ParamLimits

0xf337,	// (0x0001bd00) icf_edit_indi_pane

0xf473,	// (0x0001be3c) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0001be4b) bg_icf_pane_cp01_ParamLimits

0xf346,	// (0x0001bd0f) icf_edit_indi_pane_cp01_ParamLimits

0xf346,	// (0x0001bd0f) icf_edit_indi_pane_cp01

0xf49d,	// (0x0001be66) vtchi_query_pane

0xc1c5,	// (0x00018b8e) icf_edit_indi_pane_g1_ParamLimits

0xc1c5,	// (0x00018b8e) icf_edit_indi_pane_g1

0xf531,	// (0x0001befa) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001befa) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001c8df) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001c8df) icf_edit_indi_pane_g

0xf540,	// (0x0001bf09) icf_edit_indi_pane_t1

0xf4da,	// (0x0001bea3) bg_input_focus_pane_cp042

0x4143,	// (0x00010b0c) vtchi_button_pane

0xf4e3,	// (0x0001beac) vtchi_query_pane_t1

0xf4f1,	// (0x0001beba) vtchi_query_pane_t2

0xf4ff,	// (0x0001bec8) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001c8ce) vtchi_query_pane_t

0x556c,	// (0x00011f35) bg_button_pane_cp13

0xf50d,	// (0x0001bed6) vtchi_button_pane_g1

0x790d,	// (0x000142d6) ituss_sks_pane_g1

0x7918,	// (0x000142e1) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001c8d5) ituss_sks_pane_g

0xf515,	// (0x0001bede) ituss_sks_pane_t1

0xf523,	// (0x0001beec) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001c8da) ituss_sks_pane_t

0xb98b,	// (0x00018354) indicator_nsta_pane_cp_g1

0xb993,	// (0x0001835c) indicator_nsta_pane_cp_g2

0xb99b,	// (0x00018364) indicator_nsta_pane_cp_g3

0xb98b,	// (0x00018354) indicator_nsta_pane_cp_g4

0xb993,	// (0x0001835c) indicator_nsta_pane_cp_g5

0xb99b,	// (0x00018364) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001c47e) indicator_nsta_pane_cp_g

0xe4b3,	// (0x0001ae7c) cell_graphic2_pane_t2_ParamLimits

0xe4b3,	// (0x0001ae7c) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001c790) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001c790) cell_graphic2_pane_t

0xe4e0,	// (0x0001aea9) cell_graphic2_control_pane_t1

0x8669,	// (0x00015032) signal_pane_g3_ParamLimits

0x8669,	// (0x00015032) signal_pane_g3

0x867b,	// (0x00015044) signal_pane_g4_ParamLimits

0x867b,	// (0x00015044) signal_pane_g4

0xf321,	// (0x0001bcea) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf321,	// (0x0001bcea) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0001bdfd) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0001bdfd) cell_ituss_key_pane_t1

0x9606,	// (0x00015fcf) form_field_data_wide_pane_vc_t2_ParamLimits

0x9606,	// (0x00015fcf) form_field_data_wide_pane_vc_t2

0x961a,	// (0x00015fe3) form_field_data_wide_pane_vc_t3_ParamLimits

0x961a,	// (0x00015fe3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0001c1c3) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0001c1c3) form_field_data_wide_pane_vc_t

0xb653,	// (0x0001801c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb653,	// (0x0001801c) form_field_slider_wide_pane_vc_t3

0xb731,	// (0x000180fa) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb731,	// (0x000180fa) form_field_popup_wide_pane_vc_t2

0xb748,	// (0x00018111) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb748,	// (0x00018111) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001c46d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001c46d) form_field_popup_wide_pane_vc_t

0x75ef,	// (0x00013fb8) aid_fshwr2_btn_pane_ParamLimits

0x75fb,	// (0x00013fc4) aid_fshwr2_syb_pane_ParamLimits

0x760c,	// (0x00013fd5) aid_fshwr2_txt_pane_ParamLimits

0x6e41,	// (0x0001380a) fshwr2_bg_pane_ParamLimits

0x7618,	// (0x00013fe1) fshwr2_func_candi_pane_ParamLimits

0x7630,	// (0x00013ff9) fshwr2_hwr_syb_pane_ParamLimits

0x7647,	// (0x00014010) fshwr2_icf_pane_ParamLimits

0xb5c4,	// (0x00017f8d) list_double_graphic_pane_vc_g4_ParamLimits

0xb5c4,	// (0x00017f8d) list_double_graphic_pane_vc_g4

0x7844,	// (0x0001420d) cell_ituss_key_pane_g3_ParamLimits

0x7844,	// (0x0001420d) cell_ituss_key_pane_g3

0x78ec,	// (0x000142b5) cell_ituss_key_t5_ParamLimits

0x78ec,	// (0x000142b5) cell_ituss_key_t5

0xf37c,	// (0x0001bd45) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

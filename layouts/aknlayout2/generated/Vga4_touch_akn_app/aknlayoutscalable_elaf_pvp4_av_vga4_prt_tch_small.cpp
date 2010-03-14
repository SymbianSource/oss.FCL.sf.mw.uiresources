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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001c43b };

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
0x5b19,	// (0x00021f54) Screen

0x5b25,	// (0x00021f60) application_window_ParamLimits

0x5b25,	// (0x00021f60) application_window

0x36cc,	// (0x0001fb07) screen_g1

0x5b81,	// (0x00021fbc) area_bottom_pane_ParamLimits

0x5b81,	// (0x00021fbc) area_bottom_pane

0x5c41,	// (0x0002207c) area_top_pane_ParamLimits

0x5c41,	// (0x0002207c) area_top_pane

0x5cd5,	// (0x00022110) main_pane_ParamLimits

0x5cd5,	// (0x00022110) main_pane

0x384f,	// (0x0001fc8a) misc_graphics

0x962d,	// (0x00025a68) battery_pane_ParamLimits

0x962d,	// (0x00025a68) battery_pane

0xa315,	// (0x00026750) bg_status_flat_pane_g8

0xa31d,	// (0x00026758) bg_status_flat_pane_g9

0x96f5,	// (0x00025b30) context_pane_ParamLimits

0x96f5,	// (0x00025b30) context_pane

0x9819,	// (0x00025c54) navi_pane_ParamLimits

0x9819,	// (0x00025c54) navi_pane

0x98a9,	// (0x00025ce4) signal_pane_ParamLimits

0x98a9,	// (0x00025ce4) signal_pane

0x0008,

0xf88a,	// (0x0002bcc5) bg_status_flat_pane_g

0x9916,	// (0x00025d51) status_pane_g1_ParamLimits

0x9916,	// (0x00025d51) status_pane_g1

0x992a,	// (0x00025d65) status_pane_g2_ParamLimits

0x992a,	// (0x00025d65) status_pane_g2

0x9936,	// (0x00025d71) status_pane_g3_ParamLimits

0x9936,	// (0x00025d71) status_pane_g3

0x0004,

0xf7b8,	// (0x0002bbf3) status_pane_g_ParamLimits

0xf7b8,	// (0x0002bbf3) status_pane_g

0x996a,	// (0x00025da5) title_pane_ParamLimits

0x996a,	// (0x00025da5) title_pane

0x99a7,	// (0x00025de2) uni_indicator_pane_ParamLimits

0x99a7,	// (0x00025de2) uni_indicator_pane

0x8f22,	// (0x0002535d) bg_list_pane_ParamLimits

0x8f22,	// (0x0002535d) bg_list_pane

0x8f42,	// (0x0002537d) find_pane

0x8f4a,	// (0x00025385) listscroll_app_pane_ParamLimits

0x8f4a,	// (0x00025385) listscroll_app_pane

0x8f56,	// (0x00025391) listscroll_form_pane

0x8f5e,	// (0x00025399) listscroll_gen_pane_ParamLimits

0x8f5e,	// (0x00025399) listscroll_gen_pane

0x8f56,	// (0x00025391) listscroll_set_pane

0x816c,	// (0x000245a7) main_idle_act_pane

0x8bfe,	// (0x00025039) main_idle_trad_pane

0x8bfe,	// (0x00025039) main_list_empty_pane

0x8f84,	// (0x000253bf) main_midp_pane

0x8f90,	// (0x000253cb) main_pane_g1_ParamLimits

0x8f90,	// (0x000253cb) main_pane_g1

0x8f9e,	// (0x000253d9) popup_ai_message_window_ParamLimits

0x8f9e,	// (0x000253d9) popup_ai_message_window

0x904e,	// (0x00025489) popup_fep_china_uni_window_ParamLimits

0x904e,	// (0x00025489) popup_fep_china_uni_window

0x90ae,	// (0x000254e9) popup_fep_japan_candidate_window_ParamLimits

0x90ae,	// (0x000254e9) popup_fep_japan_candidate_window

0x90d8,	// (0x00025513) popup_fep_japan_predictive_window_ParamLimits

0x90d8,	// (0x00025513) popup_fep_japan_predictive_window

0x910e,	// (0x00025549) popup_find_window

0x911b,	// (0x00025556) popup_grid_graphic_window_ParamLimits

0x911b,	// (0x00025556) popup_grid_graphic_window

0x9149,	// (0x00025584) popup_large_graphic_colour_window

0x916f,	// (0x000255aa) popup_menu_window_ParamLimits

0x916f,	// (0x000255aa) popup_menu_window

0x9339,	// (0x00025774) popup_note_image_window

0x9323,	// (0x0002575e) popup_note_wait_window_ParamLimits

0x9323,	// (0x0002575e) popup_note_wait_window

0x9323,	// (0x0002575e) popup_note_window_ParamLimits

0x9323,	// (0x0002575e) popup_note_window

0x939f,	// (0x000257da) popup_query_code_window_ParamLimits

0x939f,	// (0x000257da) popup_query_code_window

0x93b5,	// (0x000257f0) popup_query_data_code_window_ParamLimits

0x93b5,	// (0x000257f0) popup_query_data_code_window

0x93d8,	// (0x00025813) popup_query_data_window_ParamLimits

0x93d8,	// (0x00025813) popup_query_data_window

0x93fa,	// (0x00025835) popup_query_sat_info_window_ParamLimits

0x93fa,	// (0x00025835) popup_query_sat_info_window

0x9439,	// (0x00025874) popup_snote_single_graphic_window_ParamLimits

0x9439,	// (0x00025874) popup_snote_single_graphic_window

0x9439,	// (0x00025874) popup_snote_single_text_window_ParamLimits

0x9439,	// (0x00025874) popup_snote_single_text_window

0x9450,	// (0x0002588b) popup_sub_window_general

0x9596,	// (0x000259d1) popup_window_general_ParamLimits

0x9596,	// (0x000259d1) popup_window_general

0x95af,	// (0x000259ea) power_save_pane

0x6d44,	// (0x0002317f) control_pane_g1_ParamLimits

0x6d44,	// (0x0002317f) control_pane_g1

0x6d6d,	// (0x000231a8) control_pane_g2_ParamLimits

0x6d6d,	// (0x000231a8) control_pane_g2

0x8ecb,	// (0x00025306) control_pane_g3_ParamLimits

0x8ecb,	// (0x00025306) control_pane_g3

0x0007,

0xf7a0,	// (0x0002bbdb) control_pane_g_ParamLimits

0xf7a0,	// (0x0002bbdb) control_pane_g

0x6db5,	// (0x000231f0) control_pane_t1_ParamLimits

0x6db5,	// (0x000231f0) control_pane_t1

0x6e01,	// (0x0002323c) control_pane_t2_ParamLimits

0x6e01,	// (0x0002323c) control_pane_t2

0x0002,

0xf7b1,	// (0x0002bbec) control_pane_t_ParamLimits

0xf7b1,	// (0x0002bbec) control_pane_t

0x8dec,	// (0x00025227) navi_navi_volume_pane_cp1

0x8df5,	// (0x00025230) status_small_icon_pane

0x8dfd,	// (0x00025238) status_small_pane_g1_ParamLimits

0x8dfd,	// (0x00025238) status_small_pane_g1

0x8e31,	// (0x0002526c) status_small_pane_g2_ParamLimits

0x8e31,	// (0x0002526c) status_small_pane_g2

0x8e3d,	// (0x00025278) status_small_pane_g3_ParamLimits

0x8e3d,	// (0x00025278) status_small_pane_g3

0x8e49,	// (0x00025284) status_small_pane_g4_ParamLimits

0x8e49,	// (0x00025284) status_small_pane_g4

0x8e55,	// (0x00025290) status_small_pane_g5_ParamLimits

0x8e55,	// (0x00025290) status_small_pane_g5

0x8e64,	// (0x0002529f) status_small_pane_g6_ParamLimits

0x8e64,	// (0x0002529f) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002bbca) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002bbca) status_small_pane_g

0x8e94,	// (0x000252cf) status_small_pane_t1

0x8eb7,	// (0x000252f2) status_small_wait_pane_ParamLimits

0x8eb7,	// (0x000252f2) status_small_wait_pane

0x866f,	// (0x00024aaa) aid_levels_signal_ParamLimits

0x866f,	// (0x00024aaa) aid_levels_signal

0x8681,	// (0x00024abc) signal_pane_g1_ParamLimits

0x8681,	// (0x00024abc) signal_pane_g1

0x8696,	// (0x00024ad1) signal_pane_g2_ParamLimits

0x8696,	// (0x00024ad1) signal_pane_g2

0x0003,

0xf720,	// (0x0002bb5b) signal_pane_g_ParamLimits

0xf720,	// (0x0002bb5b) signal_pane_g

0x86d1,	// (0x00024b0c) context_pane_g1

0x5f2c,	// (0x00022367) title_pane_g1

0x5f56,	// (0x00022391) title_pane_t1

0x5fbe,	// (0x000223f9) title_pane_t2

0x5fe4,	// (0x0002241f) title_pane_t3

0x0002,

0xf56f,	// (0x0002b9aa) title_pane_t

0x99bf,	// (0x00025dfa) aid_levels_battery_ParamLimits

0x99bf,	// (0x00025dfa) aid_levels_battery

0x99d3,	// (0x00025e0e) battery_pane_g1_ParamLimits

0x99d3,	// (0x00025e0e) battery_pane_g1

0x99e9,	// (0x00025e24) battery_pane_g2_ParamLimits

0x99e9,	// (0x00025e24) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002bbfe) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002bbfe) battery_pane_g

0xac65,	// (0x000270a0) uni_indicator_pane_g1

0xac7a,	// (0x000270b5) uni_indicator_pane_g2

0xac90,	// (0x000270cb) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002bd6d) uni_indicator_pane_g

0x8a6c,	// (0x00024ea7) navi_icon_pane_ParamLimits

0x8a6c,	// (0x00024ea7) navi_icon_pane

0x89b3,	// (0x00024dee) navi_midp_pane

0x8a88,	// (0x00024ec3) navi_navi_pane

0x8a92,	// (0x00024ecd) navi_text_pane_ParamLimits

0x8a92,	// (0x00024ecd) navi_text_pane

0x36cc,	// (0x0001fb07) status_small_wait_pane_g1

0x64b8,	// (0x000228f3) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002bd68) status_small_wait_pane_g

0xa978,	// (0x00026db3) navi_navi_icon_text_pane

0xa980,	// (0x00026dbb) navi_navi_pane_g1_ParamLimits

0xa980,	// (0x00026dbb) navi_navi_pane_g1

0xa992,	// (0x00026dcd) navi_navi_pane_g2_ParamLimits

0xa992,	// (0x00026dcd) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002bd36) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002bd36) navi_navi_pane_g

0xa9a4,	// (0x00026ddf) navi_navi_tabs_pane

0xa9ad,	// (0x00026de8) navi_navi_text_pane

0xa978,	// (0x00026db3) navi_navi_volume_pane

0xa951,	// (0x00026d8c) navi_text_pane_t1

0xa942,	// (0x00026d7d) navi_icon_pane_g1

0xa895,	// (0x00026cd0) navi_navi_text_pane_t1

0x7112,	// (0x0002354d) navi_navi_volume_pane_g1

0x711a,	// (0x00023555) volume_small_pane

0xa7fb,	// (0x00026c36) navi_navi_icon_text_pane_g1

0xa803,	// (0x00026c3e) navi_navi_icon_text_pane_t1

0x8a88,	// (0x00024ec3) navi_tabs_2_long_pane

0x8a88,	// (0x00024ec3) navi_tabs_2_pane

0x8a88,	// (0x00024ec3) navi_tabs_3_long_pane

0x8a88,	// (0x00024ec3) navi_tabs_3_pane

0x8a88,	// (0x00024ec3) navi_tabs_4_pane

0x70f2,	// (0x0002352d) tabs_2_active_pane_ParamLimits

0x70f2,	// (0x0002352d) tabs_2_active_pane

0x7102,	// (0x0002353d) tabs_2_passive_pane_ParamLimits

0x7102,	// (0x0002353d) tabs_2_passive_pane

0x70c0,	// (0x000234fb) tabs_3_active_pane_ParamLimits

0x70c0,	// (0x000234fb) tabs_3_active_pane

0x70d0,	// (0x0002350b) tabs_3_passive_pane_ParamLimits

0x70d0,	// (0x0002350b) tabs_3_passive_pane

0x70e1,	// (0x0002351c) tabs_3_passive_pane_cp_ParamLimits

0x70e1,	// (0x0002351c) tabs_3_passive_pane_cp

0x7074,	// (0x000234af) tabs_4_active_pane_ParamLimits

0x7074,	// (0x000234af) tabs_4_active_pane

0x7087,	// (0x000234c2) tabs_4_passive_pane_ParamLimits

0x7087,	// (0x000234c2) tabs_4_passive_pane

0x7098,	// (0x000234d3) tabs_4_passive_pane_cp_ParamLimits

0x7098,	// (0x000234d3) tabs_4_passive_pane_cp

0x70a9,	// (0x000234e4) tabs_4_passive_pane_cp2_ParamLimits

0x70a9,	// (0x000234e4) tabs_4_passive_pane_cp2

0x7050,	// (0x0002348b) tabs_2_long_active_pane_ParamLimits

0x7050,	// (0x0002348b) tabs_2_long_active_pane

0x7062,	// (0x0002349d) tabs_2_long_passive_pane_ParamLimits

0x7062,	// (0x0002349d) tabs_2_long_passive_pane

0x7011,	// (0x0002344c) tabs_3_long_active_pane_ParamLimits

0x7011,	// (0x0002344c) tabs_3_long_active_pane

0x7024,	// (0x0002345f) tabs_3_long_passive_pane_ParamLimits

0x7024,	// (0x0002345f) tabs_3_long_passive_pane

0x703d,	// (0x00023478) tabs_3_long_passive_pane_cp_ParamLimits

0x703d,	// (0x00023478) tabs_3_long_passive_pane_cp

0x6fb7,	// (0x000233f2) volume_small_pane_g1

0x6fc0,	// (0x000233fb) volume_small_pane_g2

0x6fc9,	// (0x00023404) volume_small_pane_g3

0x6fd2,	// (0x0002340d) volume_small_pane_g4

0x6fdb,	// (0x00023416) volume_small_pane_g5

0x6fe4,	// (0x0002341f) volume_small_pane_g6

0x6fed,	// (0x00023428) volume_small_pane_g7

0x6ff6,	// (0x00023431) volume_small_pane_g8

0x6fff,	// (0x0002343a) volume_small_pane_g9

0x7008,	// (0x00023443) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002bd02) volume_small_pane_g

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp2_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp2

0x6004,	// (0x0002243f) tabs_3_active_pane_g1

0x600c,	// (0x00022447) tabs_3_active_pane_t1

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp2_ParamLimits

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp2

0x6004,	// (0x0002243f) tabs_3_passive_pane_g1

0x600c,	// (0x00022447) tabs_3_passive_pane_t1

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp3_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp3

0x601e,	// (0x00022459) tabs_4_active_pane_g1

0x6026,	// (0x00022461) tabs_4_active_pane_t1

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp3_ParamLimits

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp3

0x601e,	// (0x00022459) tabs_4_1_passive_pane_g1

0x6026,	// (0x00022461) tabs_4_1_passive_pane_t1

0x8f84,	// (0x000253bf) list_highlight_pane_cp2

0xaef4,	// (0x0002732f) list_set_pane_ParamLimits

0xaef4,	// (0x0002732f) list_set_pane

0xafbc,	// (0x000273f7) main_pane_set_t1_ParamLimits

0xafbc,	// (0x000273f7) main_pane_set_t1

0xafdc,	// (0x00027417) main_pane_set_t2_ParamLimits

0xafdc,	// (0x00027417) main_pane_set_t2

0xaff0,	// (0x0002742b) main_pane_set_t3_ParamLimits

0xaff0,	// (0x0002742b) main_pane_set_t3

0xb004,	// (0x0002743f) main_pane_set_t4_ParamLimits

0xb004,	// (0x0002743f) main_pane_set_t4

0x0003,

0xf997,	// (0x0002bdd2) main_pane_set_t_ParamLimits

0xf997,	// (0x0002bdd2) main_pane_set_t

0xb024,	// (0x0002745f) setting_code_pane

0xb02e,	// (0x00027469) setting_slider_graphic_pane

0xb02e,	// (0x00027469) setting_slider_pane

0xb02e,	// (0x00027469) setting_text_pane

0xb02e,	// (0x00027469) setting_volume_pane

0x6038,	// (0x00022473) volume_set_pane

0x5ff6,	// (0x00022431) bg_set_opt_pane_cp

0x6042,	// (0x0002247d) setting_slider_pane_t1

0x6058,	// (0x00022493) setting_slider_pane_t2

0x6072,	// (0x000224ad) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0002b9b1) setting_slider_pane_t

0x608a,	// (0x000224c5) slider_set_pane

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp2

0x60a0,	// (0x000224db) setting_slider_graphic_pane_g1

0x60a9,	// (0x000224e4) setting_slider_graphic_pane_t1

0x60b9,	// (0x000224f4) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0002b9b8) setting_slider_graphic_pane_t

0x60c9,	// (0x00022504) slider_set_pane_cp

0x384f,	// (0x0001fc8a) input_focus_pane_cp1

0xaeb5,	// (0x000272f0) list_set_text_pane

0x36cc,	// (0x0001fb07) setting_text_pane_g1

0x384f,	// (0x0001fc8a) input_focus_pane_cp2

0x36cc,	// (0x0001fb07) setting_code_pane_g1

0x60d1,	// (0x0002250c) setting_code_pane_t1

0x4b68,	// (0x00020fa3) set_text_pane_t1_ParamLimits

0x4b68,	// (0x00020fa3) set_text_pane_t1

0x7fdc,	// (0x00024417) set_opt_bg_pane_g1

0x7fe4,	// (0x0002441f) set_opt_bg_pane_g2

0xae8d,	// (0x000272c8) set_opt_bg_pane_g3

0x7ff4,	// (0x0002442f) set_opt_bg_pane_g4

0x7ffc,	// (0x00024437) set_opt_bg_pane_g5

0x8004,	// (0x0002443f) set_opt_bg_pane_g6

0xae97,	// (0x000272d2) set_opt_bg_pane_g7

0xaea1,	// (0x000272dc) set_opt_bg_pane_g8

0xaeab,	// (0x000272e6) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002bdbf) set_opt_bg_pane_g

0xae80,	// (0x000272bb) slider_set_pane_g1

0x719b,	// (0x000235d6) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002bdb0) slider_set_pane_g

0x7123,	// (0x0002355e) volume_set_pane_g1

0x712d,	// (0x00023568) volume_set_pane_g2

0x7137,	// (0x00023572) volume_set_pane_g3

0x7141,	// (0x0002357c) volume_set_pane_g4

0x714b,	// (0x00023586) volume_set_pane_g5

0x7155,	// (0x00023590) volume_set_pane_g6

0x715f,	// (0x0002359a) volume_set_pane_g7

0x7169,	// (0x000235a4) volume_set_pane_g8

0x7173,	// (0x000235ae) volume_set_pane_g9

0x717d,	// (0x000235b8) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002bd88) volume_set_pane_g

0x60df,	// (0x0002251a) indicator_pane_ParamLimits

0x60df,	// (0x0002251a) indicator_pane

0x60eb,	// (0x00022526) main_idle_pane_g2_ParamLimits

0x60eb,	// (0x00022526) main_idle_pane_g2

0x6113,	// (0x0002254e) main_pane_idle_g1_ParamLimits

0x6113,	// (0x0002254e) main_pane_idle_g1

0x6121,	// (0x0002255c) popup_clock_digital_analogue_window_ParamLimits

0x6121,	// (0x0002255c) popup_clock_digital_analogue_window

0x6138,	// (0x00022573) soft_indicator_pane_ParamLimits

0x6138,	// (0x00022573) soft_indicator_pane

0x6146,	// (0x00022581) wallpaper_pane_ParamLimits

0x6146,	// (0x00022581) wallpaper_pane

0x36cc,	// (0x0001fb07) wallpaper_pane_g1

0x615a,	// (0x00022595) indicator_pane_g1_ParamLimits

0x615a,	// (0x00022595) indicator_pane_g1

0xb2f2,	// (0x0002772d) navi_navi_icon_text_pane_srt_g1

0x6175,	// (0x000225b0) soft_indicator_pane_t1

0x618f,	// (0x000225ca) aid_ps_area_pane

0x61a0,	// (0x000225db) aid_ps_clock_pane

0x61ae,	// (0x000225e9) aid_ps_indicator_pane

0x61ba,	// (0x000225f5) indicator_ps_pane_ParamLimits

0x61ba,	// (0x000225f5) indicator_ps_pane

0x61c9,	// (0x00022604) power_save_pane_g1_ParamLimits

0x61c9,	// (0x00022604) power_save_pane_g1

0x61d5,	// (0x00022610) power_save_pane_g2_ParamLimits

0x61d5,	// (0x00022610) power_save_pane_g2

0x5b35,	// (0x00021f70) aid_navinavi_width_pane

0x618f,	// (0x000225ca) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0002b9bd) power_save_pane_g_ParamLimits

0xf582,	// (0x0002b9bd) power_save_pane_g

0x61e3,	// (0x0002261e) power_save_pane_t1_ParamLimits

0x61e3,	// (0x0002261e) power_save_pane_t1

0x61a0,	// (0x000225db) aid_ps_clock_pane_ParamLimits

0x61ae,	// (0x000225e9) aid_ps_indicator_pane_ParamLimits

0x61f5,	// (0x00022630) power_save_pane_t4_ParamLimits

0x61f5,	// (0x00022630) power_save_pane_t4

0x0001,

0xf587,	// (0x0002b9c2) power_save_pane_t_ParamLimits

0xf587,	// (0x0002b9c2) power_save_pane_t

0x621f,	// (0x0002265a) power_save_t3_ParamLimits

0x621f,	// (0x0002265a) power_save_t3

0x620a,	// (0x00022645) power_save_t2_ParamLimits

0x620a,	// (0x00022645) power_save_t2

0x6234,	// (0x0002266f) indicator_ps_pane_g1

0x623d,	// (0x00022678) ai_gene_pane_ParamLimits

0x623d,	// (0x00022678) ai_gene_pane

0x6249,	// (0x00022684) ai_links_pane_ParamLimits

0x6249,	// (0x00022684) ai_links_pane

0x6255,	// (0x00022690) indicator_pane_cp1_ParamLimits

0x6255,	// (0x00022690) indicator_pane_cp1

0x6261,	// (0x0002269c) main_pane_idle_g1_cp_ParamLimits

0x6261,	// (0x0002269c) main_pane_idle_g1_cp

0x626d,	// (0x000226a8) popup_ai_links_title_window

0x6276,	// (0x000226b1) soft_indicator_pane_cp1_ParamLimits

0x6276,	// (0x000226b1) soft_indicator_pane_cp1

0xac53,	// (0x0002708e) ai_links_pane_g1

0xac5c,	// (0x00027097) grid_ai_links_pane

0xac38,	// (0x00027073) ai_gene_pane_1

0xac41,	// (0x0002707c) ai_gene_pane_2

0xac4a,	// (0x00027085) list_highlight_pane_cp4

0xac18,	// (0x00027053) cell_ai_link_pane_ParamLimits

0xac18,	// (0x00027053) cell_ai_link_pane

0xac10,	// (0x0002704b) cell_ai_link_pane_g1

0x64b8,	// (0x000228f3) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002bd63) cell_ai_link_pane_g

0x384f,	// (0x0001fc8a) grid_highlight_cp2

0x384f,	// (0x0001fc8a) bg_popup_sub_pane_cp1

0x6290,	// (0x000226cb) popup_ai_links_title_window_t1

0xab5c,	// (0x00026f97) ai_gene_pane_1_g1_ParamLimits

0xab5c,	// (0x00026f97) ai_gene_pane_1_g1

0xab68,	// (0x00026fa3) ai_gene_pane_1_g2_ParamLimits

0xab68,	// (0x00026fa3) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002bd59) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002bd59) ai_gene_pane_1_g

0xab75,	// (0x00026fb0) ai_gene_pane_1_t1_ParamLimits

0xab75,	// (0x00026fb0) ai_gene_pane_1_t1

0xaba9,	// (0x00026fe4) grid_ai_soft_ind_pane

0xab47,	// (0x00026f82) ai_gene_pane_2_t1_ParamLimits

0xab47,	// (0x00026f82) ai_gene_pane_2_t1

0x629f,	// (0x000226da) main_pane_empty_t1_ParamLimits

0x629f,	// (0x000226da) main_pane_empty_t1

0x62b7,	// (0x000226f2) main_pane_empty_t2_ParamLimits

0x62b7,	// (0x000226f2) main_pane_empty_t2

0x62cc,	// (0x00022707) main_pane_empty_t3_ParamLimits

0x62cc,	// (0x00022707) main_pane_empty_t3

0x62de,	// (0x00022719) main_pane_empty_t4_ParamLimits

0x62de,	// (0x00022719) main_pane_empty_t4

0x62f0,	// (0x0002272b) main_pane_empty_t5_ParamLimits

0x62f0,	// (0x0002272b) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0002b9c7) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0002b9c7) main_pane_empty_t

0x802d,	// (0x00024468) bg_popup_window_pane_ParamLimits

0x802d,	// (0x00024468) bg_popup_window_pane

0xa8a3,	// (0x00026cde) find_popup_pane_cp2_ParamLimits

0xa8a3,	// (0x00026cde) find_popup_pane_cp2

0xa8af,	// (0x00026cea) heading_pane_ParamLimits

0xa8af,	// (0x00026cea) heading_pane

0x384f,	// (0x0001fc8a) bg_popup_sub_pane

0xa81d,	// (0x00026c58) bg_popup_window_pane_g1_ParamLimits

0xa81d,	// (0x00026c58) bg_popup_window_pane_g1

0xa829,	// (0x00026c64) bg_popup_window_pane_g2_ParamLimits

0xa829,	// (0x00026c64) bg_popup_window_pane_g2

0xa835,	// (0x00026c70) bg_popup_window_pane_g3_ParamLimits

0xa835,	// (0x00026c70) bg_popup_window_pane_g3

0xa841,	// (0x00026c7c) bg_popup_window_pane_g4_ParamLimits

0xa841,	// (0x00026c7c) bg_popup_window_pane_g4

0xa84d,	// (0x00026c88) bg_popup_window_pane_g5_ParamLimits

0xa84d,	// (0x00026c88) bg_popup_window_pane_g5

0xa859,	// (0x00026c94) bg_popup_window_pane_g6_ParamLimits

0xa859,	// (0x00026c94) bg_popup_window_pane_g6

0xa865,	// (0x00026ca0) bg_popup_window_pane_g7_ParamLimits

0xa865,	// (0x00026ca0) bg_popup_window_pane_g7

0xa871,	// (0x00026cac) bg_popup_window_pane_g8_ParamLimits

0xa871,	// (0x00026cac) bg_popup_window_pane_g8

0xa87d,	// (0x00026cb8) bg_popup_window_pane_g9_ParamLimits

0xa87d,	// (0x00026cb8) bg_popup_window_pane_g9

0xa889,	// (0x00026cc4) bg_popup_window_pane_g10_ParamLimits

0xa889,	// (0x00026cc4) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002bd21) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002bd21) bg_popup_window_pane_g

0xa7b2,	// (0x00026bed) bg_popup_heading_pane_ParamLimits

0xa7b2,	// (0x00026bed) bg_popup_heading_pane

0x7223,	// (0x0002365e) tabs_4_passive_pane_cp_srt_ParamLimits

0x7223,	// (0x0002365e) tabs_4_passive_pane_cp_srt

0x7235,	// (0x00023670) tabs_4_passive_pane_srt_ParamLimits

0xa7c6,	// (0x00026c01) heading_pane_g2

0x7235,	// (0x00023670) tabs_4_passive_pane_srt

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp3_srt

0xa7ce,	// (0x00026c09) heading_pane_t1_ParamLimits

0xa7ce,	// (0x00026c09) heading_pane_t1

0xa7e5,	// (0x00026c20) heading_pane_t2_ParamLimits

0xa7e5,	// (0x00026c20) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002bd1c) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002bd1c) heading_pane_t

0xa2dd,	// (0x00026718) bg_popup_heading_pane_g1

0xa38c,	// (0x000267c7) bg_popup_heading_pane_g2

0xa396,	// (0x000267d1) bg_popup_heading_pane_g3

0xa3a0,	// (0x000267db) bg_popup_heading_pane_g4

0xa3aa,	// (0x000267e5) bg_popup_heading_pane_g5

0xa3b4,	// (0x000267ef) bg_popup_heading_pane_g6

0xa3bc,	// (0x000267f7) bg_popup_heading_pane_g7

0xa3c4,	// (0x000267ff) bg_popup_heading_pane_g8

0xa3ce,	// (0x00026809) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002bcd8) bg_popup_heading_pane_g

0x9ac1,	// (0x00025efc) bg_popup_sub_pane_g1

0x9ac9,	// (0x00025f04) bg_popup_sub_pane_g2

0x9ad1,	// (0x00025f0c) bg_popup_sub_pane_g3

0x9ad9,	// (0x00025f14) bg_popup_sub_pane_g4

0x9ae1,	// (0x00025f1c) bg_popup_sub_pane_g5

0x9ae9,	// (0x00025f24) bg_popup_sub_pane_g6

0x9af1,	// (0x00025f2c) bg_popup_sub_pane_g7

0x9af9,	// (0x00025f34) bg_popup_sub_pane_g8

0x9b01,	// (0x00025f3c) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002bcb2) bg_popup_sub_pane_g

0x6302,	// (0x0002273d) bg_popup_window_pane_cp5_ParamLimits

0x6302,	// (0x0002273d) bg_popup_window_pane_cp5

0x631e,	// (0x00022759) popup_note_window_g1_ParamLimits

0x631e,	// (0x00022759) popup_note_window_g1

0x632a,	// (0x00022765) popup_note_window_t1_ParamLimits

0x632a,	// (0x00022765) popup_note_window_t1

0x6340,	// (0x0002277b) popup_note_window_t2_ParamLimits

0x6340,	// (0x0002277b) popup_note_window_t2

0x6356,	// (0x00022791) popup_note_window_t3_ParamLimits

0x6356,	// (0x00022791) popup_note_window_t3

0x636c,	// (0x000227a7) popup_note_window_t4_ParamLimits

0x636c,	// (0x000227a7) popup_note_window_t4

0x6394,	// (0x000227cf) popup_note_window_t5_ParamLimits

0x6394,	// (0x000227cf) popup_note_window_t5

0x0004,

0xf597,	// (0x0002b9d2) popup_note_window_t_ParamLimits

0xf597,	// (0x0002b9d2) popup_note_window_t

0x63b8,	// (0x000227f3) bg_popup_window_pane_cp6_ParamLimits

0x63b8,	// (0x000227f3) bg_popup_window_pane_cp6

0xa259,	// (0x00026694) popup_note_image_window_g1_ParamLimits

0xa259,	// (0x00026694) popup_note_image_window_g1

0xa265,	// (0x000266a0) popup_note_image_window_g2_ParamLimits

0xa265,	// (0x000266a0) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002bca6) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002bca6) popup_note_image_window_g

0xa27e,	// (0x000266b9) popup_note_image_window_t1_ParamLimits

0xa27e,	// (0x000266b9) popup_note_image_window_t1

0xa297,	// (0x000266d2) popup_note_image_window_t2_ParamLimits

0xa297,	// (0x000266d2) popup_note_image_window_t2

0xa2b0,	// (0x000266eb) popup_note_image_window_t3_ParamLimits

0xa2b0,	// (0x000266eb) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002bcab) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002bcab) popup_note_image_window_t

0xa119,	// (0x00026554) bg_popup_window_pane_cp7_ParamLimits

0xa119,	// (0x00026554) bg_popup_window_pane_cp7

0xa149,	// (0x00026584) popup_note_wait_window_g1_ParamLimits

0xa149,	// (0x00026584) popup_note_wait_window_g1

0xa155,	// (0x00026590) popup_note_wait_window_g2_ParamLimits

0xa155,	// (0x00026590) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002bc94) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002bc94) popup_note_wait_window_g

0xa16d,	// (0x000265a8) popup_note_wait_window_t1_ParamLimits

0xa16d,	// (0x000265a8) popup_note_wait_window_t1

0xa194,	// (0x000265cf) popup_note_wait_window_t2_ParamLimits

0xa194,	// (0x000265cf) popup_note_wait_window_t2

0xa1b2,	// (0x000265ed) popup_note_wait_window_t3_ParamLimits

0xa1b2,	// (0x000265ed) popup_note_wait_window_t3

0xa1c5,	// (0x00026600) popup_note_wait_window_t4_ParamLimits

0xa1c5,	// (0x00026600) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002bc9b) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002bc9b) popup_note_wait_window_t

0xa1ea,	// (0x00026625) wait_bar_pane_ParamLimits

0xa1ea,	// (0x00026625) wait_bar_pane

0x384f,	// (0x0001fc8a) wait_anim_pane

0x384f,	// (0x0001fc8a) wait_border_pane

0x36cc,	// (0x0001fb07) wait_anim_pane_g1

0x36cc,	// (0x0001fb07) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x0002bb56) wait_anim_pane_g

0xa0bd,	// (0x000264f8) wait_border_pane_g1

0xa0c8,	// (0x00026503) wait_border_pane_g2

0xa0d1,	// (0x0002650c) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002bc8d) wait_border_pane_g

0x9f27,	// (0x00026362) bg_popup_window_pane_cp16_ParamLimits

0x9f27,	// (0x00026362) bg_popup_window_pane_cp16

0xa027,	// (0x00026462) indicator_popup_pane_cp4_ParamLimits

0xa027,	// (0x00026462) indicator_popup_pane_cp4

0xa03b,	// (0x00026476) popup_query_data_window_t1_ParamLimits

0xa03b,	// (0x00026476) popup_query_data_window_t1

0xa04d,	// (0x00026488) popup_query_data_window_t2_ParamLimits

0xa04d,	// (0x00026488) popup_query_data_window_t2

0xa066,	// (0x000264a1) popup_query_data_window_t3_ParamLimits

0xa066,	// (0x000264a1) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002bc86) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002bc86) popup_query_data_window_t

0xa080,	// (0x000264bb) query_popup_data_pane_ParamLimits

0xa080,	// (0x000264bb) query_popup_data_pane

0xa094,	// (0x000264cf) query_popup_data_pane_cp1_ParamLimits

0xa094,	// (0x000264cf) query_popup_data_pane_cp1

0x9f27,	// (0x00026362) bg_popup_window_pane_cp10_ParamLimits

0x9f27,	// (0x00026362) bg_popup_window_pane_cp10

0x9f59,	// (0x00026394) indicator_popup_pane_ParamLimits

0x9f59,	// (0x00026394) indicator_popup_pane

0x9f7b,	// (0x000263b6) popup_query_code_window_t1_ParamLimits

0x9f7b,	// (0x000263b6) popup_query_code_window_t1

0x9f95,	// (0x000263d0) popup_query_code_window_t2_ParamLimits

0x9f95,	// (0x000263d0) popup_query_code_window_t2

0x9fde,	// (0x00026419) popup_query_code_window_t3_ParamLimits

0x9fde,	// (0x00026419) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002bc7f) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002bc7f) popup_query_code_window_t

0xa00d,	// (0x00026448) query_popup_pane_ParamLimits

0xa00d,	// (0x00026448) query_popup_pane

0x63b8,	// (0x000227f3) bg_popup_window_pane_cp15_ParamLimits

0x63b8,	// (0x000227f3) bg_popup_window_pane_cp15

0x63d8,	// (0x00022813) indicator_popup_pane_cp1_ParamLimits

0x63d8,	// (0x00022813) indicator_popup_pane_cp1

0x63eb,	// (0x00022826) indicator_popup_pane_cp2_ParamLimits

0x63eb,	// (0x00022826) indicator_popup_pane_cp2

0x6406,	// (0x00022841) popup_query_data_code_window_g1_ParamLimits

0x6406,	// (0x00022841) popup_query_data_code_window_g1

0x6419,	// (0x00022854) popup_query_data_code_window_t1_ParamLimits

0x6419,	// (0x00022854) popup_query_data_code_window_t1

0x642b,	// (0x00022866) popup_query_data_code_window_t2_ParamLimits

0x642b,	// (0x00022866) popup_query_data_code_window_t2

0x643d,	// (0x00022878) popup_query_data_code_window_t3_ParamLimits

0x643d,	// (0x00022878) popup_query_data_code_window_t3

0x6453,	// (0x0002288e) popup_query_data_code_window_t4_ParamLimits

0x6453,	// (0x0002288e) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0002b9dd) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0002b9dd) popup_query_data_code_window_t

0x8a28,	// (0x00024e63) list_single_midp_graphic_pane_g3

0x646d,	// (0x000228a8) query_popup_data_pane_cp2_ParamLimits

0x6480,	// (0x000228bb) query_popup_pane_cp2_ParamLimits

0x6480,	// (0x000228bb) query_popup_pane_cp2

0x384f,	// (0x0001fc8a) bg_popup_window_pane_cp11

0x9f1f,	// (0x0002635a) heading_pane_cp5

0x6570,	// (0x000229ab) listscroll_popup_info_pane

0x384f,	// (0x0001fc8a) input_focus_pane_cp3

0x649b,	// (0x000228d6) query_popup_pane_t1

0x64a9,	// (0x000228e4) list_popup_info_pane_ParamLimits

0x64a9,	// (0x000228e4) list_popup_info_pane

0x64b8,	// (0x000228f3) listscroll_popup_info_pane_g1

0x64c0,	// (0x000228fb) scroll_pane_cp7

0x64ca,	// (0x00022905) popup_info_list_pane_t1_ParamLimits

0x64ca,	// (0x00022905) popup_info_list_pane_t1

0x64e4,	// (0x0002291f) popup_info_list_pane_t2_ParamLimits

0x64e4,	// (0x0002291f) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0002b9e6) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0002b9e6) popup_info_list_pane_t

0x384f,	// (0x0001fc8a) bg_popup_window_pane_cp12

0xb30c,	// (0x00027747) find_popup_pane

0x5ff6,	// (0x00022431) bg_popup_window_pane_cp3

0x64fe,	// (0x00022939) heading_pane_cp3

0x650a,	// (0x00022945) listscroll_popup_graphic_pane

0x384f,	// (0x0001fc8a) bg_popup_window_pane_cp4

0x6566,	// (0x000229a1) heading_pane_cp4

0x6570,	// (0x000229ab) listscroll_popup_colour_pane

0x6578,	// (0x000229b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6578,	// (0x000229b3) cell_large_graphic_colour_none_popup_pane

0x658c,	// (0x000229c7) grid_large_graphic_colour_popup_pane_ParamLimits

0x658c,	// (0x000229c7) grid_large_graphic_colour_popup_pane

0x65b8,	// (0x000229f3) listscroll_popup_colour_pane_g1_ParamLimits

0x65b8,	// (0x000229f3) listscroll_popup_colour_pane_g1

0x65cf,	// (0x00022a0a) listscroll_popup_colour_pane_g2_ParamLimits

0x65cf,	// (0x00022a0a) listscroll_popup_colour_pane_g2

0x65e6,	// (0x00022a21) listscroll_popup_colour_pane_g3_ParamLimits

0x65e6,	// (0x00022a21) listscroll_popup_colour_pane_g3

0x65f6,	// (0x00022a31) listscroll_popup_colour_pane_g4_ParamLimits

0x65f6,	// (0x00022a31) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0002b9eb) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0002b9eb) listscroll_popup_colour_pane_g

0x660a,	// (0x00022a45) scroll_pane_cp6_ParamLimits

0x660a,	// (0x00022a45) scroll_pane_cp6

0x661c,	// (0x00022a57) cell_large_graphic_colour_popup_pane_ParamLimits

0x661c,	// (0x00022a57) cell_large_graphic_colour_popup_pane

0x6641,	// (0x00022a7c) cell_large_graphic_colour_none_popup_pane_t1

0x384f,	// (0x0001fc8a) grid_highlight_pane_cp5

0x6650,	// (0x00022a8b) cell_large_graphic_colour_popup_pane_g1

0x6658,	// (0x00022a93) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0002b9f4) cell_large_graphic_colour_popup_pane_g

0x6660,	// (0x00022a9b) cell_large_graphic_colour_popup_pane_g2_copy1

0x6669,	// (0x00022aa4) grid_highlight_pane_cp4

0x6671,	// (0x00022aac) bg_popup_window_pane_cp8_ParamLimits

0x6671,	// (0x00022aac) bg_popup_window_pane_cp8

0x668c,	// (0x00022ac7) popup_snote_single_text_window_g1_ParamLimits

0x668c,	// (0x00022ac7) popup_snote_single_text_window_g1

0x669e,	// (0x00022ad9) popup_snote_single_text_window_t1_ParamLimits

0x669e,	// (0x00022ad9) popup_snote_single_text_window_t1

0x66b1,	// (0x00022aec) popup_snote_single_text_window_t2_ParamLimits

0x66b1,	// (0x00022aec) popup_snote_single_text_window_t2

0x66c4,	// (0x00022aff) popup_snote_single_text_window_t3_ParamLimits

0x66c4,	// (0x00022aff) popup_snote_single_text_window_t3

0x66fd,	// (0x00022b38) popup_snote_single_text_window_t4_ParamLimits

0x66fd,	// (0x00022b38) popup_snote_single_text_window_t4

0x6731,	// (0x00022b6c) popup_snote_single_text_window_t5_ParamLimits

0x6731,	// (0x00022b6c) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0002b9f9) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0002b9f9) popup_snote_single_text_window_t

0x6760,	// (0x00022b9b) bg_popup_window_pane_cp9_ParamLimits

0x6760,	// (0x00022b9b) bg_popup_window_pane_cp9

0x668c,	// (0x00022ac7) popup_snote_single_graphic_window_g1_ParamLimits

0x668c,	// (0x00022ac7) popup_snote_single_graphic_window_g1

0x676e,	// (0x00022ba9) popup_snote_single_graphic_window_g2_ParamLimits

0x676e,	// (0x00022ba9) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0002ba04) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0002ba04) popup_snote_single_graphic_window_g

0x677a,	// (0x00022bb5) popup_snote_single_graphic_window_t1_ParamLimits

0x677a,	// (0x00022bb5) popup_snote_single_graphic_window_t1

0x678d,	// (0x00022bc8) popup_snote_single_graphic_window_t2_ParamLimits

0x678d,	// (0x00022bc8) popup_snote_single_graphic_window_t2

0x67a0,	// (0x00022bdb) popup_snote_single_graphic_window_t3_ParamLimits

0x67a0,	// (0x00022bdb) popup_snote_single_graphic_window_t3

0x67d9,	// (0x00022c14) popup_snote_single_graphic_window_t4_ParamLimits

0x67d9,	// (0x00022c14) popup_snote_single_graphic_window_t4

0x680d,	// (0x00022c48) popup_snote_single_graphic_window_t5_ParamLimits

0x680d,	// (0x00022c48) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0002ba09) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0002ba09) popup_snote_single_graphic_window_t

0xb24a,	// (0x00027685) grid_graphic_popup_pane_ParamLimits

0xb24a,	// (0x00027685) grid_graphic_popup_pane

0xb278,	// (0x000276b3) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x000276b3) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x000276c7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x000276c7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002bdfc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002bdfc) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x000276db) scroll_pane_cp5

0xb1f2,	// (0x0002762d) cell_graphic_popup_pane_ParamLimits

0xb1f2,	// (0x0002762d) cell_graphic_popup_pane

0xb1d3,	// (0x0002760e) cell_graphic_popup_pane_g1

0xb1db,	// (0x00027616) cell_graphic_popup_pane_g2

0x6660,	// (0x00022a9b) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002bdf5) cell_graphic_popup_pane_g

0xb1e4,	// (0x0002761f) cell_graphic_popup_pane_t2

0x6669,	// (0x00022aa4) grid_highlight_pane_cp3

0x684e,	// (0x00022c89) list_gen_pane_ParamLimits

0x684e,	// (0x00022c89) list_gen_pane

0x6880,	// (0x00022cbb) scroll_pane

0xb135,	// (0x00027570) bg_list_pane_g1_ParamLimits

0xb135,	// (0x00027570) bg_list_pane_g1

0xb150,	// (0x0002758b) bg_list_pane_g2_ParamLimits

0xb150,	// (0x0002758b) bg_list_pane_g2

0xb163,	// (0x0002759e) bg_list_pane_g3_ParamLimits

0xb163,	// (0x0002759e) bg_list_pane_g3

0xb175,	// (0x000275b0) bg_list_pane_g4_ParamLimits

0xb175,	// (0x000275b0) bg_list_pane_g4

0xb187,	// (0x000275c2) bg_list_pane_g5_ParamLimits

0xb187,	// (0x000275c2) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002bdea) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002bdea) bg_list_pane_g

0x54b0,	// (0x000218eb) list_double2_graphic_large_graphic_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double2_graphic_large_graphic_pane

0x54b0,	// (0x000218eb) list_double2_graphic_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double2_graphic_pane

0x54b0,	// (0x000218eb) list_double2_large_graphic_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double2_large_graphic_pane

0xb0c6,	// (0x00027501) list_double2_pane_ParamLimits

0xb0c6,	// (0x00027501) list_double2_pane

0x54b0,	// (0x000218eb) list_double_graphic_heading_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_graphic_heading_pane

0x54b0,	// (0x000218eb) list_double_graphic_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_graphic_pane

0x54b0,	// (0x000218eb) list_double_heading_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_heading_pane

0x54b0,	// (0x000218eb) list_double_large_graphic_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_large_graphic_pane

0x54b0,	// (0x000218eb) list_double_number_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_number_pane

0x54b0,	// (0x000218eb) list_double_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_pane

0x54b0,	// (0x000218eb) list_double_time_pane_ParamLimits

0x54b0,	// (0x000218eb) list_double_time_pane

0x54b0,	// (0x000218eb) list_setting_number_pane_ParamLimits

0x54b0,	// (0x000218eb) list_setting_number_pane

0x54b0,	// (0x000218eb) list_setting_pane_ParamLimits

0x54b0,	// (0x000218eb) list_setting_pane

0xb0f1,	// (0x0002752c) list_single_2graphic_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_2graphic_pane

0xb0f1,	// (0x0002752c) list_single_graphic_heading_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_graphic_heading_pane

0xb0f1,	// (0x0002752c) list_single_graphic_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_graphic_pane

0xb0f1,	// (0x0002752c) list_single_heading_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_heading_pane

0x54ef,	// (0x0002192a) list_single_large_graphic_pane_ParamLimits

0x54ef,	// (0x0002192a) list_single_large_graphic_pane

0xb0f1,	// (0x0002752c) list_single_number_heading_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_number_heading_pane

0xb0f1,	// (0x0002752c) list_single_number_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_number_pane

0xb0f1,	// (0x0002752c) list_single_pane_ParamLimits

0xb0f1,	// (0x0002752c) list_single_pane

0x384f,	// (0x0001fc8a) list_highlight_pane_cp1

0x4b8f,	// (0x00020fca) list_single_pane_g1_ParamLimits

0x4b8f,	// (0x00020fca) list_single_pane_g1

0x4b9b,	// (0x00020fd6) list_single_pane_g2_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0002ba1b) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0002ba1b) list_single_pane_g

0x549a,	// (0x000218d5) list_single_pane_t1_ParamLimits

0x549a,	// (0x000218d5) list_single_pane_t1

0x4b8f,	// (0x00020fca) list_single_number_pane_g1_ParamLimits

0x4b8f,	// (0x00020fca) list_single_number_pane_g1

0x4b9b,	// (0x00020fd6) list_single_number_pane_g2_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0002ba1b) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0002ba1b) list_single_number_pane_g

0x5444,	// (0x0002187f) list_single_number_pane_t1_ParamLimits

0x5444,	// (0x0002187f) list_single_number_pane_t1

0x545a,	// (0x00021895) list_single_number_pane_t2_ParamLimits

0x545a,	// (0x00021895) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002bdab) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002bdab) list_single_number_pane_t

0x4b83,	// (0x00020fbe) list_single_graphic_pane_g1_ParamLimits

0x4b83,	// (0x00020fbe) list_single_graphic_pane_g1

0x4b8f,	// (0x00020fca) list_single_graphic_pane_g2_ParamLimits

0x4b8f,	// (0x00020fca) list_single_graphic_pane_g2

0x4b9b,	// (0x00020fd6) list_single_graphic_pane_g3_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0002ba14) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0002ba14) list_single_graphic_pane_g

0x4ba7,	// (0x00020fe2) list_single_graphic_pane_t1_ParamLimits

0x4ba7,	// (0x00020fe2) list_single_graphic_pane_t1

0x4b8f,	// (0x00020fca) list_single_heading_pane_g1_ParamLimits

0x4b8f,	// (0x00020fca) list_single_heading_pane_g1

0x4b9b,	// (0x00020fd6) list_single_heading_pane_g2_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002ba1b) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002ba1b) list_single_heading_pane_g

0x4bbd,	// (0x00020ff8) list_single_heading_pane_t1_ParamLimits

0x4bbd,	// (0x00020ff8) list_single_heading_pane_t1

0x4bd3,	// (0x0002100e) list_single_heading_pane_t2_ParamLimits

0x4bd3,	// (0x0002100e) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0002ba20) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0002ba20) list_single_heading_pane_t

0x4b8f,	// (0x00020fca) list_single_number_heading_pane_g1_ParamLimits

0x4b8f,	// (0x00020fca) list_single_number_heading_pane_g1

0x4b9b,	// (0x00020fd6) list_single_number_heading_pane_g2_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002ba1b) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002ba1b) list_single_number_heading_pane_g

0x4bbd,	// (0x00020ff8) list_single_number_heading_pane_t1_ParamLimits

0x4bbd,	// (0x00020ff8) list_single_number_heading_pane_t1

0x4be5,	// (0x00021020) list_single_number_heading_pane_t2_ParamLimits

0x4be5,	// (0x00021020) list_single_number_heading_pane_t2

0x4bf7,	// (0x00021032) list_single_number_heading_pane_t3_ParamLimits

0x4bf7,	// (0x00021032) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0002ba25) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0002ba25) list_single_number_heading_pane_t

0x4c09,	// (0x00021044) list_single_graphic_heading_pane_g1_ParamLimits

0x4c09,	// (0x00021044) list_single_graphic_heading_pane_g1

0x4c15,	// (0x00021050) list_single_graphic_heading_pane_g4_ParamLimits

0x4c15,	// (0x00021050) list_single_graphic_heading_pane_g4

0x4b9b,	// (0x00020fd6) list_single_graphic_heading_pane_g5_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0002ba2c) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0002ba2c) list_single_graphic_heading_pane_g

0x4bbd,	// (0x00020ff8) list_single_graphic_heading_pane_t1_ParamLimits

0x4bbd,	// (0x00020ff8) list_single_graphic_heading_pane_t1

0x4c26,	// (0x00021061) list_single_graphic_heading_pane_t2_ParamLimits

0x4c26,	// (0x00021061) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0002ba33) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0002ba33) list_single_graphic_heading_pane_t

0x4c38,	// (0x00021073) list_single_large_graphic_pane_g1_ParamLimits

0x4c38,	// (0x00021073) list_single_large_graphic_pane_g1

0x4b8f,	// (0x00020fca) list_single_large_graphic_pane_g2_ParamLimits

0x4b8f,	// (0x00020fca) list_single_large_graphic_pane_g2

0x4b9b,	// (0x00020fd6) list_single_large_graphic_pane_g3_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0002ba38) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0002ba38) list_single_large_graphic_pane_g

0xa0c8,	// (0x00026503) wait_border_pane_g2_copy1

0x4c44,	// (0x0002107f) list_single_large_graphic_pane_g4_cp2

0x4bbd,	// (0x00020ff8) list_single_large_graphic_pane_t1_ParamLimits

0x4bbd,	// (0x00020ff8) list_single_large_graphic_pane_t1

0x4c4c,	// (0x00021087) list_double_pane_g1_ParamLimits

0x4c4c,	// (0x00021087) list_double_pane_g1

0x4c58,	// (0x00021093) list_double_pane_g2_ParamLimits

0x4c58,	// (0x00021093) list_double_pane_g2

0x0001,

0xf604,	// (0x0002ba3f) list_double_pane_g_ParamLimits

0xf604,	// (0x0002ba3f) list_double_pane_g

0x4c64,	// (0x0002109f) list_double_pane_t1_ParamLimits

0x4c64,	// (0x0002109f) list_double_pane_t1

0x4c7a,	// (0x000210b5) list_double_pane_t2_ParamLimits

0x4c7a,	// (0x000210b5) list_double_pane_t2

0x0001,

0xf609,	// (0x0002ba44) list_double_pane_t_ParamLimits

0xf609,	// (0x0002ba44) list_double_pane_t

0x4c8c,	// (0x000210c7) list_double2_pane_g1_ParamLimits

0x4c8c,	// (0x000210c7) list_double2_pane_g1

0x4c9d,	// (0x000210d8) list_double2_pane_g2_ParamLimits

0x4c9d,	// (0x000210d8) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0002ba49) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0002ba49) list_double2_pane_g

0x4ca9,	// (0x000210e4) list_double2_pane_t1_ParamLimits

0x4ca9,	// (0x000210e4) list_double2_pane_t1

0x4cbf,	// (0x000210fa) list_double2_pane_t2_ParamLimits

0x4cbf,	// (0x000210fa) list_double2_pane_t2

0x0001,

0xf613,	// (0x0002ba4e) list_double2_pane_t_ParamLimits

0xf613,	// (0x0002ba4e) list_double2_pane_t

0x4c4c,	// (0x00021087) list_double_number_pane_g1_ParamLimits

0x4c4c,	// (0x00021087) list_double_number_pane_g1

0x4c58,	// (0x00021093) list_double_number_pane_g2_ParamLimits

0x4c58,	// (0x00021093) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0002ba3f) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0002ba3f) list_double_number_pane_g

0x4cd1,	// (0x0002110c) list_double_number_pane_t1_ParamLimits

0x4cd1,	// (0x0002110c) list_double_number_pane_t1

0x4ce3,	// (0x0002111e) list_double_number_pane_t2_ParamLimits

0x4ce3,	// (0x0002111e) list_double_number_pane_t2

0x4cf9,	// (0x00021134) list_double_number_pane_t3_ParamLimits

0x4cf9,	// (0x00021134) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0002ba53) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0002ba53) list_double_number_pane_t

0x4d0b,	// (0x00021146) list_double_graphic_pane_g1_ParamLimits

0x4d0b,	// (0x00021146) list_double_graphic_pane_g1

0x4d17,	// (0x00021152) list_double_graphic_pane_g2_ParamLimits

0x4d17,	// (0x00021152) list_double_graphic_pane_g2

0x4d26,	// (0x00021161) list_double_graphic_pane_g3_ParamLimits

0x4d26,	// (0x00021161) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0002ba5a) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0002ba5a) list_double_graphic_pane_g

0x4d3e,	// (0x00021179) list_double_graphic_pane_t1_ParamLimits

0x4d3e,	// (0x00021179) list_double_graphic_pane_t1

0x4d54,	// (0x0002118f) list_double_graphic_pane_t2_ParamLimits

0x4d54,	// (0x0002118f) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0002ba63) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0002ba63) list_double_graphic_pane_t

0x4d66,	// (0x000211a1) list_double2_graphic_pane_g1_ParamLimits

0x4d66,	// (0x000211a1) list_double2_graphic_pane_g1

0x4d72,	// (0x000211ad) list_double2_graphic_pane_g2_ParamLimits

0x4d72,	// (0x000211ad) list_double2_graphic_pane_g2

0x4d7e,	// (0x000211b9) list_double2_graphic_pane_g3_ParamLimits

0x4d7e,	// (0x000211b9) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0002ba68) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0002ba68) list_double2_graphic_pane_g

0x4d8a,	// (0x000211c5) list_double2_graphic_pane_t1_ParamLimits

0x4d8a,	// (0x000211c5) list_double2_graphic_pane_t1

0x4da0,	// (0x000211db) list_double2_graphic_pane_t2_ParamLimits

0x4da0,	// (0x000211db) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0002ba6f) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0002ba6f) list_double2_graphic_pane_t

0x4db2,	// (0x000211ed) list_double_large_graphic_pane_g1_ParamLimits

0x4db2,	// (0x000211ed) list_double_large_graphic_pane_g1

0x4ddd,	// (0x00021218) list_double_large_graphic_pane_g2_ParamLimits

0x4ddd,	// (0x00021218) list_double_large_graphic_pane_g2

0x4c58,	// (0x00021093) list_double_large_graphic_pane_g3_ParamLimits

0x4c58,	// (0x00021093) list_double_large_graphic_pane_g3

0x4dee,	// (0x00021229) list_double_large_graphic_pane_g4_ParamLimits

0x4dee,	// (0x00021229) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0002ba74) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0002ba74) list_double_large_graphic_pane_g

0x4e16,	// (0x00021251) list_double_large_graphic_pane_t1_ParamLimits

0x4e16,	// (0x00021251) list_double_large_graphic_pane_t1

0x4e2f,	// (0x0002126a) list_double_large_graphic_pane_t2_ParamLimits

0x4e2f,	// (0x0002126a) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0002ba7f) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0002ba7f) list_double_large_graphic_pane_t

0x4e41,	// (0x0002127c) list_double2_large_graphic_pane_g1_ParamLimits

0x4e41,	// (0x0002127c) list_double2_large_graphic_pane_g1

0x4e4d,	// (0x00021288) list_double2_large_graphic_pane_g2_ParamLimits

0x4e4d,	// (0x00021288) list_double2_large_graphic_pane_g2

0x4e5e,	// (0x00021299) list_double2_large_graphic_pane_g3_ParamLimits

0x4e5e,	// (0x00021299) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0002ba84) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0002ba84) list_double2_large_graphic_pane_g

0x4e6a,	// (0x000212a5) list_double2_large_graphic_pane_t1_ParamLimits

0x4e6a,	// (0x000212a5) list_double2_large_graphic_pane_t1

0x4e80,	// (0x000212bb) list_double2_large_graphic_pane_t2_ParamLimits

0x4e80,	// (0x000212bb) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0002ba8b) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0002ba8b) list_double2_large_graphic_pane_t

0x4e92,	// (0x000212cd) list_double_heading_pane_g1_ParamLimits

0x4e92,	// (0x000212cd) list_double_heading_pane_g1

0x4ea3,	// (0x000212de) list_double_heading_pane_g2_ParamLimits

0x4ea3,	// (0x000212de) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0002ba90) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0002ba90) list_double_heading_pane_g

0x4eaf,	// (0x000212ea) list_double_heading_pane_t1_ParamLimits

0x4eaf,	// (0x000212ea) list_double_heading_pane_t1

0x4ec5,	// (0x00021300) list_double_heading_pane_t2_ParamLimits

0x4ec5,	// (0x00021300) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0002ba95) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0002ba95) list_double_heading_pane_t

0x4ed7,	// (0x00021312) list_double_graphic_heading_pane_g1_ParamLimits

0x4ed7,	// (0x00021312) list_double_graphic_heading_pane_g1

0x4e92,	// (0x000212cd) list_double_graphic_heading_pane_g2_ParamLimits

0x4e92,	// (0x000212cd) list_double_graphic_heading_pane_g2

0x4ea3,	// (0x000212de) list_double_graphic_heading_pane_g3_ParamLimits

0x4ea3,	// (0x000212de) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0002ba9a) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0002ba9a) list_double_graphic_heading_pane_g

0x4ee3,	// (0x0002131e) list_double_graphic_heading_pane_t1_ParamLimits

0x4ee3,	// (0x0002131e) list_double_graphic_heading_pane_t1

0x4da0,	// (0x000211db) list_double_graphic_heading_pane_t2_ParamLimits

0x4da0,	// (0x000211db) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0002baa1) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0002baa1) list_double_graphic_heading_pane_t

0x4ddd,	// (0x00021218) list_double_time_pane_g1_ParamLimits

0x4ddd,	// (0x00021218) list_double_time_pane_g1

0x4c58,	// (0x00021093) list_double_time_pane_g2_ParamLimits

0x4c58,	// (0x00021093) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0002baa6) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0002baa6) list_double_time_pane_g

0x4ef9,	// (0x00021334) list_double_time_pane_t1_ParamLimits

0x4ef9,	// (0x00021334) list_double_time_pane_t1

0x4f0f,	// (0x0002134a) list_double_time_pane_t2_ParamLimits

0x4f0f,	// (0x0002134a) list_double_time_pane_t2

0x4f21,	// (0x0002135c) list_double_time_pane_t3_ParamLimits

0x4f21,	// (0x0002135c) list_double_time_pane_t3

0x4f33,	// (0x0002136e) list_double_time_pane_t4_ParamLimits

0x4f33,	// (0x0002136e) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0002baab) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0002baab) list_double_time_pane_t

0x4f45,	// (0x00021380) list_setting_pane_g1_ParamLimits

0x4f45,	// (0x00021380) list_setting_pane_g1

0x4f51,	// (0x0002138c) list_setting_pane_g2_ParamLimits

0x4f51,	// (0x0002138c) list_setting_pane_g2

0x0001,

0xf679,	// (0x0002bab4) list_setting_pane_g_ParamLimits

0xf679,	// (0x0002bab4) list_setting_pane_g

0x4f5d,	// (0x00021398) list_setting_pane_t1_ParamLimits

0x4f5d,	// (0x00021398) list_setting_pane_t1

0x4f77,	// (0x000213b2) list_setting_pane_t2_ParamLimits

0x4f77,	// (0x000213b2) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0002bab9) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0002bab9) list_setting_pane_t

0x4fb6,	// (0x000213f1) set_value_pane_cp_ParamLimits

0x4fb6,	// (0x000213f1) set_value_pane_cp

0x4fc4,	// (0x000213ff) list_setting_number_pane_g1_ParamLimits

0x4fc4,	// (0x000213ff) list_setting_number_pane_g1

0x4fd0,	// (0x0002140b) list_setting_number_pane_g2_ParamLimits

0x4fd0,	// (0x0002140b) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0002bac0) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0002bac0) list_setting_number_pane_g

0x4fdc,	// (0x00021417) list_setting_number_pane_t1_ParamLimits

0x4fdc,	// (0x00021417) list_setting_number_pane_t1

0x4ff5,	// (0x00021430) list_setting_number_pane_t2_ParamLimits

0x4ff5,	// (0x00021430) list_setting_number_pane_t2

0x500f,	// (0x0002144a) list_setting_number_pane_t3_ParamLimits

0x500f,	// (0x0002144a) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0002bac5) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0002bac5) list_setting_number_pane_t

0x4fb6,	// (0x000213f1) set_value_pane_ParamLimits

0x4fb6,	// (0x000213f1) set_value_pane

0x7f1c,	// (0x00024357) bg_set_opt_pane_ParamLimits

0x7f1c,	// (0x00024357) bg_set_opt_pane

0x5052,	// (0x0002148d) set_value_pane_t1

0x7f3d,	// (0x00024378) slider_set_pane_cp3

0x7f46,	// (0x00024381) volume_small_pane_cp

0x7f4f,	// (0x0002438a) list_form_gen_pane

0x7f58,	// (0x00024393) scroll_pane_cp8

0x5060,	// (0x0002149b) form_field_data_pane_ParamLimits

0x5060,	// (0x0002149b) form_field_data_pane

0x5086,	// (0x000214c1) form_field_data_wide_pane_ParamLimits

0x5086,	// (0x000214c1) form_field_data_wide_pane

0x50ad,	// (0x000214e8) form_field_popup_pane_ParamLimits

0x50ad,	// (0x000214e8) form_field_popup_pane

0x50cf,	// (0x0002150a) form_field_popup_wide_pane_ParamLimits

0x50cf,	// (0x0002150a) form_field_popup_wide_pane

0x50f0,	// (0x0002152b) form_field_slider_pane_ParamLimits

0x50f0,	// (0x0002152b) form_field_slider_pane

0x5103,	// (0x0002153e) form_field_slider_wide_pane_ParamLimits

0x5103,	// (0x0002153e) form_field_slider_wide_pane

0x7f69,	// (0x000243a4) data_form_pane

0x5120,	// (0x0002155b) form_field_data_pane_t1

0x7f75,	// (0x000243b0) input_focus_pane

0x7f83,	// (0x000243be) data_form_wide_pane

0x5146,	// (0x00021581) form_field_data_wide_pane_t1

0x667e,	// (0x00022ab9) input_focus_pane_cp6

0x5168,	// (0x000215a3) form_field_popup_pane_t1

0x7f75,	// (0x000243b0) input_focus_pane_cp7

0x7faf,	// (0x000243ea) list_form_pane

0x518a,	// (0x000215c5) form_field_popup_wide_pane_t1

0x7f75,	// (0x000243b0) input_focus_pane_cp8

0x7fbb,	// (0x000243f6) list_form_wide_pane

0x51a7,	// (0x000215e2) form_field_slider_pane_t1_ParamLimits

0x51a7,	// (0x000215e2) form_field_slider_pane_t1

0x51bf,	// (0x000215fa) form_field_slider_pane_t2_ParamLimits

0x51bf,	// (0x000215fa) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0002bad5) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0002bad5) form_field_slider_pane_t

0x6302,	// (0x0002273d) input_focus_pane_cp9_ParamLimits

0x6302,	// (0x0002273d) input_focus_pane_cp9

0x51d4,	// (0x0002160f) slider_cont_pane_ParamLimits

0x51d4,	// (0x0002160f) slider_cont_pane

0x7fca,	// (0x00024405) form_field_slider_wide_pane_t1_ParamLimits

0x7fca,	// (0x00024405) form_field_slider_wide_pane_t1

0x51e8,	// (0x00021623) form_field_slider_wide_pane_t2_ParamLimits

0x51e8,	// (0x00021623) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x0002bada) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x0002bada) form_field_slider_wide_pane_t

0x6302,	// (0x0002273d) input_focus_pane_cp10_ParamLimits

0x6302,	// (0x0002273d) input_focus_pane_cp10

0x51fa,	// (0x00021635) slider_cont_pane_cp1_ParamLimits

0x51fa,	// (0x00021635) slider_cont_pane_cp1

0x520e,	// (0x00021649) slider_form_pane_cp

0x7fdc,	// (0x00024417) input_focus_pane_g1

0x7fe4,	// (0x0002441f) input_focus_pane_g2

0x7fec,	// (0x00024427) input_focus_pane_g3

0x7ff4,	// (0x0002442f) input_focus_pane_g4

0x7ffc,	// (0x00024437) input_focus_pane_g5

0x8004,	// (0x0002443f) input_focus_pane_g6

0x800c,	// (0x00024447) input_focus_pane_g7

0x8014,	// (0x0002444f) input_focus_pane_g8

0x801c,	// (0x00024457) input_focus_pane_g9

0x36cc,	// (0x0001fb07) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x0002badf) input_focus_pane_g

0xa0d1,	// (0x0002650c) wait_border_pane_g3_copy1

0x5216,	// (0x00021651) data_form_pane_t1

0x36cc,	// (0x0001fb07) wait_anim_pane_g1_copy1

0x546c,	// (0x000218a7) data_form_wide_pane_t1

0x5233,	// (0x0002166e) list_form_graphic_pane_cp_ParamLimits

0x5233,	// (0x0002166e) list_form_graphic_pane_cp

0xb056,	// (0x00027491) slider_form_pane_g1

0xb05f,	// (0x0002749a) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002bddb) slider_form_pane_g

0x5248,	// (0x00021683) list_form_graphic_pane_ParamLimits

0x5248,	// (0x00021683) list_form_graphic_pane

0x525a,	// (0x00021695) list_form_graphic_pane_g1

0x5262,	// (0x0002169d) list_form_graphic_pane_t1_ParamLimits

0x5262,	// (0x0002169d) list_form_graphic_pane_t1

0x5ff6,	// (0x00022431) list_highlight_pane_cp5_ParamLimits

0x5ff6,	// (0x00022431) list_highlight_pane_cp5

0x5277,	// (0x000216b2) find_pane_g1

0x8024,	// (0x0002445f) input_find_pane

0x5280,	// (0x000216bb) input_find_pane_g1_ParamLimits

0x5280,	// (0x000216bb) input_find_pane_g1

0x528c,	// (0x000216c7) input_find_pane_t1_ParamLimits

0x528c,	// (0x000216c7) input_find_pane_t1

0x52a1,	// (0x000216dc) input_find_pane_t2_ParamLimits

0x52a1,	// (0x000216dc) input_find_pane_t2

0x0001,

0xf6b9,	// (0x0002baf4) input_find_pane_t_ParamLimits

0xf6b9,	// (0x0002baf4) input_find_pane_t

0x802d,	// (0x00024468) input_focus_pane_cp5_ParamLimits

0x802d,	// (0x00024468) input_focus_pane_cp5

0x8047,	// (0x00024482) bg_popup_window_pane_cp2_ParamLimits

0x8047,	// (0x00024482) bg_popup_window_pane_cp2

0x8054,	// (0x0002448f) listscroll_menu_pane_ParamLimits

0x8054,	// (0x0002448f) listscroll_menu_pane

0x8060,	// (0x0002449b) popup_submenu_window_ParamLimits

0x8060,	// (0x0002449b) popup_submenu_window

0x8090,	// (0x000244cb) find_popup_pane_g1

0x8098,	// (0x000244d3) input_popup_find_pane_cp

0x802d,	// (0x00024468) input_focus_pane_cp4_ParamLimits

0x802d,	// (0x00024468) input_focus_pane_cp4

0x80b0,	// (0x000244eb) input_popup_find_pane_t1_ParamLimits

0x80b0,	// (0x000244eb) input_popup_find_pane_t1

0x384f,	// (0x0001fc8a) bg_popup_sub_pane_cp

0x80de,	// (0x00024519) listscroll_popup_sub_pane

0x80e6,	// (0x00024521) list_submenu_pane_ParamLimits

0x80e6,	// (0x00024521) list_submenu_pane

0x80f7,	// (0x00024532) scroll_pane_cp4

0x80ff,	// (0x0002453a) list_single_popup_submenu_pane_ParamLimits

0x80ff,	// (0x0002453a) list_single_popup_submenu_pane

0x8114,	// (0x0002454f) list_single_popup_submenu_pane_g1

0x811c,	// (0x00024557) list_single_popup_submenu_pane_t1_ParamLimits

0x811c,	// (0x00024557) list_single_popup_submenu_pane_t1

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp1_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp1

0x8131,	// (0x0002456c) tabs_2_active_pane_g1

0x8139,	// (0x00024574) tabs_2_active_pane_t1

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp1_ParamLimits

0x5ff6,	// (0x00022431) bg_passive_tab_pane_cp1

0x8131,	// (0x0002456c) tabs_2_passive_pane_g1

0x8139,	// (0x00024574) tabs_2_passive_pane_t1

0x814b,	// (0x00024586) bg_active_tab_pane_cp4

0x8159,	// (0x00024594) tabs_2_long_active_pane_t1

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp4

0x0906,	// (0x0001cd41) list_single_midp_graphic_pane_g4_ParamLimits

0x814b,	// (0x00024586) bg_active_tab_pane_cp5

0x8178,	// (0x000245b3) tabs_3_long_active_pane_t1

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp5

0x0906,	// (0x0001cd41) list_single_midp_graphic_pane_g4

0x5ff6,	// (0x00022431) bg_popup_window_pane_cp13_ParamLimits

0x5ff6,	// (0x00022431) bg_popup_window_pane_cp13

0x8193,	// (0x000245ce) listscroll_popup_fast_pane_ParamLimits

0x8193,	// (0x000245ce) listscroll_popup_fast_pane

0x81a2,	// (0x000245dd) grid_popup_fast_pane_ParamLimits

0x81a2,	// (0x000245dd) grid_popup_fast_pane

0x81b4,	// (0x000245ef) scroll_pane_cp9_ParamLimits

0x81b4,	// (0x000245ef) scroll_pane_cp9

0xc8f5,	// (0x00028d30) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8f5,	// (0x00028d30) list_single_graphic_hl_pane_t1_cp2

0x81d8,	// (0x00024613) input_focus_pane_cp20_ParamLimits

0x81d8,	// (0x00024613) input_focus_pane_cp20

0x81e6,	// (0x00024621) query_popup_data_pane_t1_ParamLimits

0x81e6,	// (0x00024621) query_popup_data_pane_t1

0x81f9,	// (0x00024634) query_popup_data_pane_t2_ParamLimits

0x81f9,	// (0x00024634) query_popup_data_pane_t2

0x823f,	// (0x0002467a) query_popup_data_pane_t3_ParamLimits

0x823f,	// (0x0002467a) query_popup_data_pane_t3

0x8280,	// (0x000246bb) query_popup_data_pane_t4_ParamLimits

0x8280,	// (0x000246bb) query_popup_data_pane_t4

0x82bc,	// (0x000246f7) query_popup_data_pane_t5_ParamLimits

0x82bc,	// (0x000246f7) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x0002baf9) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x0002baf9) query_popup_data_pane_t

0x7fdc,	// (0x00024417) bg_set_opt_pane_g1

0x7fe4,	// (0x0002441f) bg_set_opt_pane_g2

0x7fec,	// (0x00024427) bg_set_opt_pane_g3

0x7ff4,	// (0x0002442f) bg_set_opt_pane_g4

0x7ffc,	// (0x00024437) bg_set_opt_pane_g5

0x8004,	// (0x0002443f) bg_set_opt_pane_g6

0x800c,	// (0x00024447) bg_set_opt_pane_g7

0x8014,	// (0x0002444f) bg_set_opt_pane_g8

0x801c,	// (0x00024457) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x0002bb04) bg_set_opt_pane_g

0x6b57,	// (0x00022f92) control_top_pane_stacon_ParamLimits

0x6b57,	// (0x00022f92) control_top_pane_stacon

0x6baa,	// (0x00022fe5) signal_pane_stacon_ParamLimits

0x6baa,	// (0x00022fe5) signal_pane_stacon

0x8893,	// (0x00024cce) stacon_top_pane_g1_ParamLimits

0x8893,	// (0x00024cce) stacon_top_pane_g1

0x6bcf,	// (0x0002300a) title_pane_stacon_ParamLimits

0x6bcf,	// (0x0002300a) title_pane_stacon

0x6bf9,	// (0x00023034) uni_indicator_pane_stacon_ParamLimits

0x6bf9,	// (0x00023034) uni_indicator_pane_stacon

0x6c11,	// (0x0002304c) battery_pane_stacon_ParamLimits

0x6c11,	// (0x0002304c) battery_pane_stacon

0x6c55,	// (0x00023090) control_bottom_pane_stacon_ParamLimits

0x6c55,	// (0x00023090) control_bottom_pane_stacon

0x6c78,	// (0x000230b3) navi_pane_stacon_ParamLimits

0x6c78,	// (0x000230b3) navi_pane_stacon

0x88b5,	// (0x00024cf0) stacon_bottom_pane_g1_ParamLimits

0x88b5,	// (0x00024cf0) stacon_bottom_pane_g1

0x68b4,	// (0x00022cef) aid_levels_signal_lsc_ParamLimits

0x68b4,	// (0x00022cef) aid_levels_signal_lsc

0x68cb,	// (0x00022d06) signal_pane_stacon_g1_ParamLimits

0x68cb,	// (0x00022d06) signal_pane_stacon_g1

0x68df,	// (0x00022d1a) signal_pane_stacon_g2_ParamLimits

0x68df,	// (0x00022d1a) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x0002bb17) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0002bb17) signal_pane_stacon_g

0x6914,	// (0x00022d4f) title_pane_stacon_t1_ParamLimits

0x6914,	// (0x00022d4f) title_pane_stacon_t1

0x8300,	// (0x0002473b) uni_indicator_pane_stacon_g1

0x830a,	// (0x00024745) uni_indicator_pane_stacon_g2

0x8314,	// (0x0002474f) uni_indicator_pane_stacon_g3

0x831e,	// (0x00024759) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x0002bb23) uni_indicator_pane_stacon_g

0x6939,	// (0x00022d74) control_top_pane_stacon_g1

0x6941,	// (0x00022d7c) control_top_pane_stacon_t1_ParamLimits

0x6941,	// (0x00022d7c) control_top_pane_stacon_t1

0x6978,	// (0x00022db3) aid_levels_battery_lsc_ParamLimits

0x6978,	// (0x00022db3) aid_levels_battery_lsc

0x6990,	// (0x00022dcb) battery_pane_stacon_g1_ParamLimits

0x6990,	// (0x00022dcb) battery_pane_stacon_g1

0x69a3,	// (0x00022dde) battery_pane_stacon_g2_ParamLimits

0x69a3,	// (0x00022dde) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x0002bb2c) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x0002bb2c) battery_pane_stacon_g

0x69e1,	// (0x00022e1c) navi_icon_pane_stacon

0x69f5,	// (0x00022e30) navi_navi_pane_stacon

0x69e1,	// (0x00022e1c) navi_text_pane_stacon

0x6939,	// (0x00022d74) control_bottom_pane_stacon_g1

0x6a0b,	// (0x00022e46) control_bottom_pane_stacon_t1_ParamLimits

0x6a0b,	// (0x00022e46) control_bottom_pane_stacon_t1

0x8342,	// (0x0002477d) grid_app_pane_ParamLimits

0x8342,	// (0x0002477d) grid_app_pane

0x8366,	// (0x000247a1) scroll_pane_cp15_ParamLimits

0x8366,	// (0x000247a1) scroll_pane_cp15

0x837b,	// (0x000247b6) cell_app_pane_ParamLimits

0x837b,	// (0x000247b6) cell_app_pane

0x83a7,	// (0x000247e2) cell_app_pane_g1_ParamLimits

0x83a7,	// (0x000247e2) cell_app_pane_g1

0x83cb,	// (0x00024806) cell_app_pane_g2_ParamLimits

0x83cb,	// (0x00024806) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x0002bb31) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x0002bb31) cell_app_pane_g

0x83d7,	// (0x00024812) cell_app_pane_t1_ParamLimits

0x83d7,	// (0x00024812) cell_app_pane_t1

0x83e9,	// (0x00024824) grid_highlight_pane_ParamLimits

0x83e9,	// (0x00024824) grid_highlight_pane

0x7fdc,	// (0x00024417) cell_highlight_pane_g1

0x7fe4,	// (0x0002441f) cell_highlight_pane_g2

0x7fec,	// (0x00024427) cell_highlight_pane_g3

0x7ff4,	// (0x0002442f) cell_highlight_pane_g4

0x7ffc,	// (0x00024437) cell_highlight_pane_g5

0x8004,	// (0x0002443f) cell_highlight_pane_g6

0x800c,	// (0x00024447) cell_highlight_pane_g7

0x8014,	// (0x0002444f) cell_highlight_pane_g8

0x801c,	// (0x00024457) cell_highlight_pane_g9

0x36cc,	// (0x0001fb07) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x0002badf) cell_highlight_pane_g

0x83fa,	// (0x00024835) bg_scroll_pane

0x6a55,	// (0x00022e90) scroll_handle_pane

0x8441,	// (0x0002487c) scroll_bg_pane_g1

0x8456,	// (0x00024891) scroll_bg_pane_g2

0x846e,	// (0x000248a9) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x0002bb36) scroll_bg_pane_g

0x8483,	// (0x000248be) scroll_handle_focus_pane_ParamLimits

0x8483,	// (0x000248be) scroll_handle_focus_pane

0x8441,	// (0x0002487c) scroll_handle_pane_g1

0x8490,	// (0x000248cb) scroll_handle_pane_g2

0x846e,	// (0x000248a9) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x0002bb3d) scroll_handle_pane_g

0x802d,	// (0x00024468) bg_popup_sub_pane_cp21_ParamLimits

0x802d,	// (0x00024468) bg_popup_sub_pane_cp21

0x84a4,	// (0x000248df) popup_fep_japan_predictive_window_t1_ParamLimits

0x84a4,	// (0x000248df) popup_fep_japan_predictive_window_t1

0x84bb,	// (0x000248f6) popup_fep_japan_predictive_window_t2_ParamLimits

0x84bb,	// (0x000248f6) popup_fep_japan_predictive_window_t2

0x84ee,	// (0x00024929) popup_fep_japan_predictive_window_t3_ParamLimits

0x84ee,	// (0x00024929) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x0002bb44) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x0002bb44) popup_fep_japan_predictive_window_t

0x384f,	// (0x0001fc8a) bg_popup_sub_pane_cp23

0x8525,	// (0x00024960) listscroll_japin_cand_pane

0x852d,	// (0x00024968) popup_fep_japan_candidate_window_t1

0x853b,	// (0x00024976) candidate_pane_ParamLimits

0x853b,	// (0x00024976) candidate_pane

0x854d,	// (0x00024988) scroll_pane_cp30

0x8557,	// (0x00024992) list_single_popup_jap_candidate_pane_ParamLimits

0x8557,	// (0x00024992) list_single_popup_jap_candidate_pane

0x384f,	// (0x0001fc8a) list_highlight_pane_cp30

0x856b,	// (0x000249a6) list_single_popup_jap_candidate_pane_t1

0x857a,	// (0x000249b5) level_1_signal

0x8587,	// (0x000249c2) level_2_signal

0x8594,	// (0x000249cf) level_3_signal

0x85a1,	// (0x000249dc) level_4_signal

0x85ae,	// (0x000249e9) level_5_signal

0x85bb,	// (0x000249f6) level_6_signal

0x85c8,	// (0x00024a03) level_7_signal

0x857a,	// (0x000249b5) level_1_battery

0x8587,	// (0x000249c2) level_2_battery

0x8594,	// (0x000249cf) level_3_battery

0x85a1,	// (0x000249dc) level_4_battery

0x85ae,	// (0x000249e9) level_5_battery

0x85bb,	// (0x000249f6) level_6_battery

0x85c8,	// (0x00024a03) level_7_battery

0x85ed,	// (0x00024a28) list_menu_pane_ParamLimits

0x85ed,	// (0x00024a28) list_menu_pane

0x8603,	// (0x00024a3e) scroll_pane_cp25_ParamLimits

0x8603,	// (0x00024a3e) scroll_pane_cp25

0x861c,	// (0x00024a57) list_double2_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double2_graphic_pane_cp2

0x861c,	// (0x00024a57) list_double2_large_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double2_large_graphic_pane_cp2

0x861c,	// (0x00024a57) list_double2_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double2_pane_cp2

0x861c,	// (0x00024a57) list_double_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double_graphic_pane_cp2

0x861c,	// (0x00024a57) list_double_large_graphic_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double_large_graphic_pane_cp2

0x861c,	// (0x00024a57) list_double_number_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double_number_pane_cp2

0x861c,	// (0x00024a57) list_double_pane_cp2_ParamLimits

0x861c,	// (0x00024a57) list_double_pane_cp2

0x8642,	// (0x00024a7d) list_single_2graphic_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_2graphic_pane_cp2

0x8642,	// (0x00024a7d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_graphic_heading_pane_cp2

0x8642,	// (0x00024a7d) list_single_graphic_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_graphic_pane_cp2

0x8642,	// (0x00024a7d) list_single_heading_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_heading_pane_cp2

0x865f,	// (0x00024a9a) list_single_large_graphic_pane_cp2_ParamLimits

0x865f,	// (0x00024a9a) list_single_large_graphic_pane_cp2

0x8642,	// (0x00024a7d) list_single_number_heading_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_number_heading_pane_cp2

0x8642,	// (0x00024a7d) list_single_number_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_number_pane_cp2

0x8642,	// (0x00024a7d) list_single_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_pane_cp2

0x86da,	// (0x00024b15) bg_popup_sub_pane_cp22

0x6b07,	// (0x00022f42) popup_side_volume_key_window_g1

0x6b31,	// (0x00022f6c) popup_side_volume_key_window_t1

0x6b4f,	// (0x00022f8a) volume_small_pane_cp1

0x6302,	// (0x0002273d) bg_popup_sub_pane_cp24_ParamLimits

0x6302,	// (0x0002273d) bg_popup_sub_pane_cp24

0x86f0,	// (0x00024b2b) fep_china_uni_candidate_pane_ParamLimits

0x86f0,	// (0x00024b2b) fep_china_uni_candidate_pane

0x8704,	// (0x00024b3f) fep_china_uni_entry_pane

0x8714,	// (0x00024b4f) popup_fep_china_uni_window_g1

0x8730,	// (0x00024b6b) fep_china_uni_entry_pane_g1

0x873a,	// (0x00024b75) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002bb75) fep_china_uni_entry_pane_g

0x8744,	// (0x00024b7f) fep_entry_item_pane

0x874e,	// (0x00024b89) fep_candidate_item_pane

0x8756,	// (0x00024b91) fep_china_uni_candidate_pane_g1

0x8760,	// (0x00024b9b) fep_china_uni_candidate_pane_g2

0x8768,	// (0x00024ba3) fep_china_uni_candidate_pane_g3

0x8770,	// (0x00024bab) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002bb7a) fep_china_uni_candidate_pane_g

0x36cc,	// (0x0001fb07) fep_entry_item_pane_g1

0x877a,	// (0x00024bb5) fep_entry_item_pane_t1_ParamLimits

0x877a,	// (0x00024bb5) fep_entry_item_pane_t1

0x8790,	// (0x00024bcb) fep_candidate_item_pane_t1_ParamLimits

0x8790,	// (0x00024bcb) fep_candidate_item_pane_t1

0x87a5,	// (0x00024be0) fep_candidate_item_pane_t2_ParamLimits

0x87a5,	// (0x00024be0) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002bb83) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002bb83) fep_candidate_item_pane_t

0x5ff6,	// (0x00022431) list_highlight_pane_cp31_ParamLimits

0x5ff6,	// (0x00022431) list_highlight_pane_cp31

0x87b7,	// (0x00024bf2) level_1_signal_lsc

0x87c0,	// (0x00024bfb) level_2_signal_lsc

0x87c9,	// (0x00024c04) level_3_signal_lsc

0x87d2,	// (0x00024c0d) level_4_signal_lsc

0x87db,	// (0x00024c16) level_5_signal_lsc

0x87e4,	// (0x00024c1f) level_6_signal_lsc

0x87ed,	// (0x00024c28) level_7_signal_lsc

0x87ed,	// (0x00024c28) level_1_battery_lsc

0x87f6,	// (0x00024c31) level_2_battery_lsc

0x87ff,	// (0x00024c3a) level_3_battery_lsc

0x8808,	// (0x00024c43) level_4_battery_lsc

0x8811,	// (0x00024c4c) level_5_battery_lsc

0x881a,	// (0x00024c55) level_6_battery_lsc

0x87b7,	// (0x00024bf2) level_7_battery_lsc

0x8823,	// (0x00024c5e) scroll_handle_focus_pane_g1

0x882c,	// (0x00024c67) scroll_handle_focus_pane_g2

0x8835,	// (0x00024c70) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002bb88) scroll_handle_focus_pane_g

0x52b6,	// (0x000216f1) list_single_2graphic_pane_g1_ParamLimits

0x52b6,	// (0x000216f1) list_single_2graphic_pane_g1

0x4c15,	// (0x00021050) list_single_2graphic_pane_g2_ParamLimits

0x4c15,	// (0x00021050) list_single_2graphic_pane_g2

0x4b9b,	// (0x00020fd6) list_single_2graphic_pane_g3_ParamLimits

0x4b9b,	// (0x00020fd6) list_single_2graphic_pane_g3

0x52c2,	// (0x000216fd) list_single_2graphic_pane_g4_ParamLimits

0x52c2,	// (0x000216fd) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002bb8f) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002bb8f) list_single_2graphic_pane_g

0x52ce,	// (0x00021709) list_single_2graphic_pane_t1_ParamLimits

0x52ce,	// (0x00021709) list_single_2graphic_pane_t1

0x52fc,	// (0x00021737) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x52fc,	// (0x00021737) list_double2_graphic_large_graphic_pane_g1

0x4e4d,	// (0x00021288) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e4d,	// (0x00021288) list_double2_graphic_large_graphic_pane_g2

0x4e5e,	// (0x00021299) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e5e,	// (0x00021299) list_double2_graphic_large_graphic_pane_g3

0x530e,	// (0x00021749) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x530e,	// (0x00021749) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002bb98) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002bb98) list_double2_graphic_large_graphic_pane_g

0x531a,	// (0x00021755) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x531a,	// (0x00021755) list_double2_graphic_large_graphic_pane_t1

0x5330,	// (0x0002176b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5330,	// (0x0002176b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002bba1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002bba1) list_double2_graphic_large_graphic_pane_t

0x8977,	// (0x00024db2) popup_fast_swap_window_ParamLimits

0x8977,	// (0x00024db2) popup_fast_swap_window

0x8995,	// (0x00024dd0) popup_side_volume_key_window

0x89b3,	// (0x00024dee) stacon_top_pane

0x89bd,	// (0x00024df8) status_pane_ParamLimits

0x89bd,	// (0x00024df8) status_pane

0x89b3,	// (0x00024dee) status_small_pane

0x384f,	// (0x0001fc8a) control_pane

0x384f,	// (0x0001fc8a) stacon_bottom_pane

0x7f58,	// (0x00024393) scroll_pane_cp121

0x7f4f,	// (0x0002438a) set_content_pane

0x883e,	// (0x00024c79) bg_active_tab_pane_g1_cp1

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp1

0x8850,	// (0x00024c8b) bg_active_tab_pane_g3_cp1

0x883e,	// (0x00024c79) bg_passive_tab_pane_g1_cp1

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp1

0x8850,	// (0x00024c8b) bg_passive_tab_pane_g3_cp1

0x8859,	// (0x00024c94) bg_active_tab_pane_g1_cp2

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp2

0x8862,	// (0x00024c9d) bg_active_tab_pane_g3_cp2

0x8859,	// (0x00024c94) bg_passive_tab_pane_g1_cp2

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp2

0x8862,	// (0x00024c9d) bg_passive_tab_pane_g3_cp2

0x886b,	// (0x00024ca6) bg_active_tab_pane_g1_cp3

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp3

0x8874,	// (0x00024caf) bg_active_tab_pane_g3_cp3

0x886b,	// (0x00024ca6) bg_passive_tab_pane_g1_cp3

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp3

0x8874,	// (0x00024caf) bg_passive_tab_pane_g3_cp3

0x887d,	// (0x00024cb8) bg_active_tab_pane_g1_cp4

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp4

0x8888,	// (0x00024cc3) bg_active_tab_pane_g3_cp4

0x887d,	// (0x00024cb8) bg_passive_tab_pane_g1_cp4

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp4

0x8888,	// (0x00024cc3) bg_passive_tab_pane_g3_cp4

0x88d1,	// (0x00024d0c) bg_active_tab_pane_g1_cp5

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp5

0x88da,	// (0x00024d15) bg_active_tab_pane_g3_cp5

0x88d1,	// (0x00024d0c) bg_passive_tab_pane_g1_cp5

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp5

0x88da,	// (0x00024d15) bg_passive_tab_pane_g3_cp5

0x88e3,	// (0x00024d1e) list_set_graphic_pane_ParamLimits

0x88e3,	// (0x00024d1e) list_set_graphic_pane

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp4

0x88f8,	// (0x00024d33) list_set_graphic_pane_g1_ParamLimits

0x88f8,	// (0x00024d33) list_set_graphic_pane_g1

0x8904,	// (0x00024d3f) list_set_graphic_pane_g2_ParamLimits

0x8904,	// (0x00024d3f) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002bba6) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002bba6) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002bf10) volume_small_pane_cp_g

0x8928,	// (0x00024d63) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8928,	// (0x00024d63) list_double2_large_graphic_pane_g1_cp2

0x8936,	// (0x00024d71) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8936,	// (0x00024d71) list_double2_large_graphic_pane_g2_cp2

0x8947,	// (0x00024d82) list_double2_large_graphic_pane_g3_cp2

0x894f,	// (0x00024d8a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x894f,	// (0x00024d8a) list_double2_large_graphic_pane_t1_cp2

0x8965,	// (0x00024da0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8965,	// (0x00024da0) list_double2_large_graphic_pane_t2_cp2

0xabbb,	// (0x00026ff6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x00026ff6) list_double_large_graphic_pane_g1_cp2

0xabce,	// (0x00027009) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabce,	// (0x00027009) list_double_large_graphic_pane_g2_cp2

0x8adb,	// (0x00024f16) list_double_large_graphic_pane_g3_cp2

0xabdf,	// (0x0002701a) list_double_large_graphic_pane_g4_cp

0xabe7,	// (0x00027022) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabe7,	// (0x00027022) list_double_large_graphic_pane_t1_cp2

0xabfe,	// (0x00027039) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xabfe,	// (0x00027039) list_double_large_graphic_pane_t2_cp2

0x89cb,	// (0x00024e06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89cb,	// (0x00024e06) list_double2_graphic_pane_g1_cp2

0x89d9,	// (0x00024e14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89d9,	// (0x00024e14) list_double2_graphic_pane_g2_cp2

0x89ea,	// (0x00024e25) list_double2_graphic_pane_g3_cp2

0x89f4,	// (0x00024e2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89f4,	// (0x00024e2f) list_double2_graphic_pane_t1_cp2

0x8a0a,	// (0x00024e45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a0a,	// (0x00024e45) list_double2_graphic_pane_t2_cp2

0x8a1c,	// (0x00024e57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a1c,	// (0x00024e57) list_single_number_heading_pane_g1_cp2

0x8a28,	// (0x00024e63) list_single_number_heading_pane_g2_cp2

0x8a30,	// (0x00024e6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a30,	// (0x00024e6b) list_single_number_heading_pane_t1_cp2

0x8a46,	// (0x00024e81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a46,	// (0x00024e81) list_single_number_heading_pane_t2_cp2

0x8a5a,	// (0x00024e95) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a5a,	// (0x00024e95) list_single_number_heading_pane_t3_cp2

0x8a1c,	// (0x00024e57) list_single_heading_pane_g1_cp2_ParamLimits

0x8a1c,	// (0x00024e57) list_single_heading_pane_g1_cp2

0x8a28,	// (0x00024e63) list_single_heading_pane_g2_cp2

0x8a30,	// (0x00024e6b) list_single_heading_pane_t1_cp2_ParamLimits

0x8a30,	// (0x00024e6b) list_single_heading_pane_t1_cp2

0xa9b5,	// (0x00026df0) list_single_heading_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x00026df0) list_single_heading_pane_t2_cp2

0xa8f7,	// (0x00026d32) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8f7,	// (0x00026d32) list_double_graphic_pane_g1_cp2

0xa903,	// (0x00026d3e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa903,	// (0x00026d3e) list_double_graphic_pane_g2_cp2

0xa912,	// (0x00026d4d) list_double_graphic_pane_g3_cp2

0xa91a,	// (0x00026d55) list_double_graphic_pane_t1_cp2_ParamLimits

0xa91a,	// (0x00026d55) list_double_graphic_pane_t1_cp2

0xa930,	// (0x00026d6b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa930,	// (0x00026d6b) list_double_graphic_pane_t2_cp2

0x8acf,	// (0x00024f0a) list_double_number_pane_g1_cp2_ParamLimits

0x8acf,	// (0x00024f0a) list_double_number_pane_g1_cp2

0x8adb,	// (0x00024f16) list_double_number_pane_g2_cp2

0xa8bb,	// (0x00026cf6) list_double_number_pane_t1_cp2_ParamLimits

0xa8bb,	// (0x00026cf6) list_double_number_pane_t1_cp2

0xa8cf,	// (0x00026d0a) list_double_number_pane_t2_cp2_ParamLimits

0xa8cf,	// (0x00026d0a) list_double_number_pane_t2_cp2

0xa8e5,	// (0x00026d20) list_double_number_pane_t3_cp2_ParamLimits

0xa8e5,	// (0x00026d20) list_double_number_pane_t3_cp2

0xa7a4,	// (0x00026bdf) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7a4,	// (0x00026bdf) list_single_graphic_pane_g1_cp2

0x8b35,	// (0x00024f70) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b35,	// (0x00024f70) list_single_graphic_pane_g2_cp2

0x8b41,	// (0x00024f7c) list_single_graphic_pane_g3_cp2

0xa77a,	// (0x00026bb5) list_single_graphic_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00026bb5) list_single_graphic_pane_t1_cp2

0x8b35,	// (0x00024f70) list_single_number_pane_g1_cp2_ParamLimits

0x8b35,	// (0x00024f70) list_single_number_pane_g1_cp2

0x8b41,	// (0x00024f7c) list_single_number_pane_g2_cp2

0xa77a,	// (0x00026bb5) list_single_number_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00026bb5) list_single_number_pane_t1_cp2

0xa790,	// (0x00026bcb) list_single_number_pane_t2_cp2_ParamLimits

0xa790,	// (0x00026bcb) list_single_number_pane_t2_cp2

0x8936,	// (0x00024d71) list_double2_pane_g1_cp2_ParamLimits

0x8936,	// (0x00024d71) list_double2_pane_g1_cp2

0x8947,	// (0x00024d82) list_double2_pane_g2_cp2

0x8aa7,	// (0x00024ee2) list_double2_pane_t1_cp2_ParamLimits

0x8aa7,	// (0x00024ee2) list_double2_pane_t1_cp2

0x8abd,	// (0x00024ef8) list_double2_pane_t2_cp2_ParamLimits

0x8abd,	// (0x00024ef8) list_double2_pane_t2_cp2

0x8acf,	// (0x00024f0a) list_double_pane_g1_cp2_ParamLimits

0x8acf,	// (0x00024f0a) list_double_pane_g1_cp2

0x8adb,	// (0x00024f16) list_double_pane_g2_cp2

0x8ae3,	// (0x00024f1e) list_double_pane_t1_cp2_ParamLimits

0x8ae3,	// (0x00024f1e) list_double_pane_t1_cp2

0x8af9,	// (0x00024f34) list_double_pane_t2_cp2_ParamLimits

0x8af9,	// (0x00024f34) list_double_pane_t2_cp2

0x8b25,	// (0x00024f60) list_single_pane_cp2_g3

0x8b35,	// (0x00024f70) list_single_pane_g1_cp2_ParamLimits

0x8b35,	// (0x00024f70) list_single_pane_g1_cp2

0x8b41,	// (0x00024f7c) list_single_pane_g2_cp2

0x8b49,	// (0x00024f84) list_single_pane_t1_cp2_ParamLimits

0x8b49,	// (0x00024f84) list_single_pane_t1_cp2

0x8b61,	// (0x00024f9c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b61,	// (0x00024f9c) list_single_large_graphic_pane_g1_cp2

0x8b6f,	// (0x00024faa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b6f,	// (0x00024faa) list_single_large_graphic_pane_g2_cp2

0x8b7b,	// (0x00024fb6) list_single_large_graphic_pane_g3_cp2

0x8b83,	// (0x00024fbe) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b83,	// (0x00024fbe) list_single_large_graphic_pane_g4_cp1

0x8b9d,	// (0x00024fd8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b9d,	// (0x00024fd8) list_single_large_graphic_pane_t1_cp2

0xa744,	// (0x00026b7f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa744,	// (0x00026b7f) list_single_graphic_heading_pane_g1_cp2

0xa711,	// (0x00026b4c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa711,	// (0x00026b4c) list_single_graphic_heading_pane_g4_cp2

0x8b41,	// (0x00024f7c) list_single_graphic_heading_pane_g5_cp2

0xa750,	// (0x00026b8b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa750,	// (0x00026b8b) list_single_graphic_heading_pane_t1_cp2

0xa766,	// (0x00026ba1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa766,	// (0x00026ba1) list_single_graphic_heading_pane_t2_cp2

0xa705,	// (0x00026b40) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa705,	// (0x00026b40) list_single_2graphic_pane_g1_cp2

0xa711,	// (0x00026b4c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa711,	// (0x00026b4c) list_single_2graphic_pane_g2_cp2

0x8b41,	// (0x00024f7c) list_single_2graphic_pane_g3_cp2

0xa722,	// (0x00026b5d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa722,	// (0x00026b5d) list_single_2graphic_pane_g4_cp2

0xa72e,	// (0x00026b69) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa72e,	// (0x00026b69) list_single_2graphic_pane_t1_cp2

0x36cc,	// (0x0001fb07) list_highlight_pane_g10_cp1

0xa2dd,	// (0x00026718) list_highlight_pane_g1_cp1

0xa2e5,	// (0x00026720) list_highlight_pane_g2_cp1

0xa2ed,	// (0x00026728) list_highlight_pane_g3_cp1

0xa2f5,	// (0x00026730) list_highlight_pane_g4_cp1

0xa2fd,	// (0x00026738) list_highlight_pane_g5_cp1

0xa305,	// (0x00026740) list_highlight_pane_g6_cp1

0xa30d,	// (0x00026748) list_highlight_pane_g7_cp1

0xa315,	// (0x00026750) list_highlight_pane_g8_cp1

0xa31d,	// (0x00026758) list_highlight_pane_g9_cp1

0xa1fd,	// (0x00026638) form_field_slider_pane_t3

0xa20b,	// (0x00026646) form_field_slider_pane_t4

0xa219,	// (0x00026654) slider_form_pane_ParamLimits

0xa219,	// (0x00026654) slider_form_pane

0x384f,	// (0x0001fc8a) control_abbreviations

0x384f,	// (0x0001fc8a) control_conventions

0x384f,	// (0x0001fc8a) control_definitions

0x384f,	// (0x0001fc8a) format_table_attribute

0xaa0b,	// (0x00026e46) bg_popup_preview_window_pane_g9

0x384f,	// (0x0001fc8a) format_table_data2

0x384f,	// (0x0001fc8a) format_table_data3

0x384f,	// (0x0001fc8a) format_table_data_example

0x0008,

0x384f,	// (0x0001fc8a) intro_purpose

0xf900,	// (0x0002bd3b) bg_popup_preview_window_pane_g

0x384f,	// (0x0001fc8a) texts_category

0x384f,	// (0x0001fc8a) texts_graphics

0x8bb3,	// (0x00024fee) text_digital

0x8bc2,	// (0x00024ffd) text_primary

0x8bd1,	// (0x0002500c) text_primary_small

0x8be0,	// (0x0002501b) text_secondary

0x8bef,	// (0x0002502a) text_title

0xb1a7,	// (0x000275e2) bg_passive_tab_pane_g1_cp3_srt

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp3_srt

0xb1b0,	// (0x000275eb) bg_passive_tab_pane_g3_cp3_srt

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp3_srt_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp3_srt

0xb1b9,	// (0x000275f4) tabs_4_active_pane_srt_g1

0xb1c1,	// (0x000275fc) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x000275fc) tabs_4_active_pane_srt_t1

0xb1a7,	// (0x000275e2) bg_active_tab_pane_g1_cp3_copy1

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp3_copy1

0xb1b0,	// (0x000275eb) bg_active_tab_pane_g3_cp3_copy1

0x5ff6,	// (0x00022431) tabs_2_long_active_pane_srt_ParamLimits

0x5ff6,	// (0x00022431) tabs_2_long_active_pane_srt

0x5ff6,	// (0x00022431) tabs_2_long_passive_pane_srt_ParamLimits

0x5ff6,	// (0x00022431) tabs_2_long_passive_pane_srt

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp4_srt

0xae5b,	// (0x00027296) bg_passive_tab_pane_g1_cp4_srt

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp4_srt

0xae64,	// (0x0002729f) bg_passive_tab_pane_g3_cp4_srt

0x814b,	// (0x00024586) bg_active_tab_pane_cp4_srt_ParamLimits

0x814b,	// (0x00024586) bg_active_tab_pane_cp4_srt

0xae6d,	// (0x000272a8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6d,	// (0x000272a8) tabs_2_long_active_pane_srt_t1

0xae5b,	// (0x00027296) bg_active_tab_pane_g1_cp4_srt

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp4_srt

0xae64,	// (0x0002729f) bg_active_tab_pane_g3_cp4_srt

0x6302,	// (0x0002273d) tabs_3_long_active_pane_srt_ParamLimits

0x6302,	// (0x0002273d) tabs_3_long_active_pane_srt

0x6302,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6302,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt

0x6302,	// (0x0002273d) tabs_3_long_passive_pane_srt_ParamLimits

0x6302,	// (0x0002273d) tabs_3_long_passive_pane_srt

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp5_srt

0x88d1,	// (0x00024d0c) bg_passive_tab_pane_g1_cp5_srt

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp5_srt

0x88da,	// (0x00024d15) bg_passive_tab_pane_g3_cp5_srt

0x814b,	// (0x00024586) bg_active_tab_pane_cp5_srt_ParamLimits

0x814b,	// (0x00024586) bg_active_tab_pane_cp5_srt

0xae49,	// (0x00027284) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae49,	// (0x00027284) tabs_3_long_active_pane_srt_t1

0x88d1,	// (0x00024d0c) bg_active_tab_pane_g1_cp5_srt

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp5_srt

0x88da,	// (0x00024d15) bg_active_tab_pane_g3_cp5_srt

0xae3b,	// (0x00027276) navi_text_pane_srt_t1

0xae33,	// (0x0002726e) navi_icon_pane_srt_g1

0x8dc6,	// (0x00025201) midp_editing_number_pane_srt

0x8bfe,	// (0x00025039) midp_ticker_pane_srt

0x8dce,	// (0x00025209) midp_ticker_pane_srt_g1

0x8dd6,	// (0x00025211) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002bbc5) midp_ticker_pane_srt_g

0x8dde,	// (0x00025219) midp_ticker_pane_srt_t1

0xae24,	// (0x0002725f) midp_editing_number_pane_t1_copy1

0x8c06,	// (0x00025041) listscroll_midp_pane

0x8c06,	// (0x00025041) midp_form_pane

0x8c74,	// (0x000250af) midp_info_popup_window_ParamLimits

0x8c74,	// (0x000250af) midp_info_popup_window

0x802d,	// (0x00024468) bg_popup_sub_pane_cp50_ParamLimits

0x802d,	// (0x00024468) bg_popup_sub_pane_cp50

0x9f13,	// (0x0002634e) listscroll_midp_info_pane_ParamLimits

0x9f13,	// (0x0002634e) listscroll_midp_info_pane

0x9efb,	// (0x00026336) listscroll_form_midp_pane_ParamLimits

0x9efb,	// (0x00026336) listscroll_form_midp_pane

0x9f07,	// (0x00026342) scroll_bar_cp050

0x9edb,	// (0x00026316) list_midp_pane

0xbbf0,	// (0x0002802b) signal_pane_g2_cp

0x9e15,	// (0x00026250) listscroll_midp_info_pane_t1_ParamLimits

0x9e15,	// (0x00026250) listscroll_midp_info_pane_t1

0x9e2d,	// (0x00026268) listscroll_midp_info_pane_t2_ParamLimits

0x9e2d,	// (0x00026268) listscroll_midp_info_pane_t2

0x9e6b,	// (0x000262a6) listscroll_midp_info_pane_t3_ParamLimits

0x9e6b,	// (0x000262a6) listscroll_midp_info_pane_t3

0x9ea5,	// (0x000262e0) listscroll_midp_info_pane_t4_ParamLimits

0x9ea5,	// (0x000262e0) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002bc76) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002bc76) listscroll_midp_info_pane_t

0x80f7,	// (0x00024532) scroll_pane_cp21

0x9daf,	// (0x000261ea) form_midp_field_choice_group_pane

0x9db8,	// (0x000261f3) form_midp_field_text_pane

0x9dfb,	// (0x00026236) form_midp_field_time_pane

0x9e03,	// (0x0002623e) form_midp_gauge_slider_pane

0x9e0c,	// (0x00026247) form_midp_gauge_wait_pane

0x384f,	// (0x0001fc8a) form_midp_image_pane

0x5431,	// (0x0002186c) list_single_midp_pane_ParamLimits

0x5431,	// (0x0002186c) list_single_midp_pane

0x9d80,	// (0x000261bb) form_midp_field_text_pane_t1

0x9bb3,	// (0x00025fee) input_focus_pane_cp050

0x9d9e,	// (0x000261d9) list_midp_form_text_pane

0x9d4f,	// (0x0002618a) form_midp_field_choice_group_pane_t1

0x9d5d,	// (0x00026198) input_focus_pane_cp051

0x9d71,	// (0x000261ac) list_midp_choice_pane

0x384f,	// (0x0001fc8a) status_idle_pane

0x9d33,	// (0x0002616e) form_midp_field_time_pane_t1

0x36cc,	// (0x0001fb07) wait_anim_pane_g2_copy1

0x9d41,	// (0x0002617c) form_midp_field_time_pane_t2

0x0001,

0x8d24,	// (0x0002515f) aid_navinavi_width_2_pane

0xf836,	// (0x0002bc71) form_midp_field_time_pane_t

0x384f,	// (0x0001fc8a) input_focus_pane_cp052

0x384f,	// (0x0001fc8a) bg_input_focus_pane_cp040

0x9cf3,	// (0x0002612e) form_midp_gauge_slider_pane_t1

0x9d01,	// (0x0002613c) form_midp_gauge_slider_pane_t2

0x9d0f,	// (0x0002614a) form_midp_gauge_slider_pane_t3

0x9d1d,	// (0x00026158) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002bc68) form_midp_gauge_slider_pane_t

0x9d2b,	// (0x00026166) form_midp_slider_pane

0x5ff6,	// (0x00022431) bg_input_focus_pane_cp041_ParamLimits

0x5ff6,	// (0x00022431) bg_input_focus_pane_cp041

0x9cc0,	// (0x000260fb) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc0,	// (0x000260fb) form_midp_gauge_wait_pane_t1

0x9cd2,	// (0x0002610d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd2,	// (0x0002610d) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002bc63) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002bc63) form_midp_gauge_wait_pane_t

0x9ce4,	// (0x0002611f) form_midp_wait_pane_ParamLimits

0x9ce4,	// (0x0002611f) form_midp_wait_pane

0x9c8a,	// (0x000260c5) form_midp_image_pane_g1

0x9c93,	// (0x000260ce) form_midp_image_pane_t1

0x9ca2,	// (0x000260dd) form_midp_image_pane_t2

0x9cb1,	// (0x000260ec) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002bc5c) form_midp_image_pane_t

0x9c81,	// (0x000260bc) list_single_midp_pane_g1

0x5422,	// (0x0002185d) list_single_midp_pane_t1

0x9c70,	// (0x000260ab) list_midp_form_item_pane_ParamLimits

0x9c70,	// (0x000260ab) list_midp_form_item_pane

0x8ccc,	// (0x00025107) list_midp_form_item_pane_t1

0x8cdb,	// (0x00025116) midp_ticker_pane_g1

0x8ce7,	// (0x00025122) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002bbab) midp_ticker_pane_g

0x8cf3,	// (0x0002512e) midp_ticker_pane_t1

0xb0a3,	// (0x000274de) midp_editing_number_pane_t1

0xb081,	// (0x000274bc) midp_editing_number_pane

0xb090,	// (0x000274cb) midp_ticker_pane

0xae14,	// (0x0002724f) ai_message_heading_pane

0x384f,	// (0x0001fc8a) bg_popup_window_pane_cp14

0xae1c,	// (0x00027257) listscroll_ai_message_pane

0xad9a,	// (0x000271d5) ai_message_heading_pane_g1_ParamLimits

0xad9a,	// (0x000271d5) ai_message_heading_pane_g1

0xada6,	// (0x000271e1) ai_message_heading_pane_g2_ParamLimits

0xada6,	// (0x000271e1) ai_message_heading_pane_g2

0xadb4,	// (0x000271ef) ai_message_heading_pane_g3_ParamLimits

0xadb4,	// (0x000271ef) ai_message_heading_pane_g3

0xadc0,	// (0x000271fb) ai_message_heading_pane_g4_ParamLimits

0xadc0,	// (0x000271fb) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002bd9d) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002bd9d) ai_message_heading_pane_g

0xadcc,	// (0x00027207) ai_message_heading_pane_t1_ParamLimits

0xadcc,	// (0x00027207) ai_message_heading_pane_t1

0xade6,	// (0x00027221) ai_message_heading_pane_t2_ParamLimits

0xade6,	// (0x00027221) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002bda6) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002bda6) ai_message_heading_pane_t

0xadfa,	// (0x00027235) bg_popup_heading_pane_cp1_ParamLimits

0xadfa,	// (0x00027235) bg_popup_heading_pane_cp1

0xad88,	// (0x000271c3) list_ai_message_pane_ParamLimits

0xad88,	// (0x000271c3) list_ai_message_pane

0x80f7,	// (0x00024532) scroll_pane_cp10

0xad24,	// (0x0002715f) list_ai_message_pane_g1

0xad2c,	// (0x00027167) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002bd7a) list_ai_message_pane_g

0xad34,	// (0x0002716f) list_ai_message_pane_t1_ParamLimits

0xad34,	// (0x0002716f) list_ai_message_pane_t1

0xad49,	// (0x00027184) list_ai_message_pane_t2_ParamLimits

0xad49,	// (0x00027184) list_ai_message_pane_t2

0xad5e,	// (0x00027199) list_ai_message_pane_t3_ParamLimits

0xad5e,	// (0x00027199) list_ai_message_pane_t3

0xad73,	// (0x000271ae) list_ai_message_pane_t4_ParamLimits

0xad73,	// (0x000271ae) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002bd7f) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002bd7f) list_ai_message_pane_t

0xad0d,	// (0x00027148) cell_ai_soft_ind_pane_ParamLimits

0xad0d,	// (0x00027148) cell_ai_soft_ind_pane

0x8d05,	// (0x00025140) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d05,	// (0x00025140) cell_ai_soft_ind_pane_g1

0x384f,	// (0x0001fc8a) grid_highlight_cp1

0x8d12,	// (0x0002514d) text_secondary_cp56_ParamLimits

0x8d12,	// (0x0002514d) text_secondary_cp56

0xace2,	// (0x0002711d) example_general_pane_ParamLimits

0xace2,	// (0x0002711d) example_general_pane

0xacee,	// (0x00027129) example_parent_pane_g1_ParamLimits

0xacee,	// (0x00027129) example_parent_pane_g1

0xacfa,	// (0x00027135) example_parent_pane_t1_ParamLimits

0xacfa,	// (0x00027135) example_parent_pane_t1

0x9347,	// (0x00025782) popup_preview_text_window_ParamLimits

0x9347,	// (0x00025782) popup_preview_text_window

0x8b2d,	// (0x00024f68) list_single_pane_cp2_g4

0x63b8,	// (0x000227f3) bg_popup_preview_window_pane_ParamLimits

0x63b8,	// (0x000227f3) bg_popup_preview_window_pane

0xaa15,	// (0x00026e50) popup_preview_text_window_t1_ParamLimits

0xaa15,	// (0x00026e50) popup_preview_text_window_t1

0xaa33,	// (0x00026e6e) popup_preview_text_window_t2_ParamLimits

0xaa33,	// (0x00026e6e) popup_preview_text_window_t2

0xaa7c,	// (0x00026eb7) popup_preview_text_window_t3_ParamLimits

0xaa7c,	// (0x00026eb7) popup_preview_text_window_t3

0xaac1,	// (0x00026efc) popup_preview_text_window_t4_ParamLimits

0xaac1,	// (0x00026efc) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002bd4e) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002bd4e) popup_preview_text_window_t

0xab3f,	// (0x00026f7a) scroll_pane_cp11

0x9ac1,	// (0x00025efc) bg_popup_preview_window_pane_g1

0xa9c9,	// (0x00026e04) bg_popup_preview_window_pane_g2

0xa9d3,	// (0x00026e0e) bg_popup_preview_window_pane_g3

0xa9dd,	// (0x00026e18) bg_popup_preview_window_pane_g4

0xa9e7,	// (0x00026e22) bg_popup_preview_window_pane_g5

0xa9f1,	// (0x00026e2c) bg_popup_preview_window_pane_g6

0xa9f9,	// (0x00026e34) bg_popup_preview_window_pane_g7

0xaa01,	// (0x00026e3c) bg_popup_preview_window_pane_g8

0x5b41,	// (0x00021f7c) aid_popup_width_pane

0x9323,	// (0x0002575e) popup_midp_note_alarm_window_ParamLimits

0x9323,	// (0x0002575e) popup_midp_note_alarm_window

0x7f69,	// (0x000243a4) data_form_pane_ParamLimits

0x5116,	// (0x00021551) form_field_data_pane_g1

0x5120,	// (0x0002155b) form_field_data_pane_t1_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_ParamLimits

0x7f83,	// (0x000243be) data_form_wide_pane_ParamLimits

0x513a,	// (0x00021575) form_field_data_wide_pane_g1

0x5146,	// (0x00021581) form_field_data_wide_pane_t1_ParamLimits

0x667e,	// (0x00022ab9) input_focus_pane_cp6_ParamLimits

0x80a2,	// (0x000244dd) input_popup_find_pane_g1_ParamLimits

0x80a2,	// (0x000244dd) input_popup_find_pane_g1

0x69b4,	// (0x00022def) aid_navi_side_left_pane

0x69c9,	// (0x00022e04) aid_navi_side_right_pane

0xa3d8,	// (0x00026813) bg_popup_window_pane_cp30_ParamLimits

0xa3d8,	// (0x00026813) bg_popup_window_pane_cp30

0xa452,	// (0x0002688d) popup_midp_note_alarm_window_g1_ParamLimits

0xa452,	// (0x0002688d) popup_midp_note_alarm_window_g1

0xa482,	// (0x000268bd) popup_midp_note_alarm_window_t1_ParamLimits

0xa482,	// (0x000268bd) popup_midp_note_alarm_window_t1

0xa523,	// (0x0002695e) popup_midp_note_alarm_window_t2_ParamLimits

0xa523,	// (0x0002695e) popup_midp_note_alarm_window_t2

0xa5d1,	// (0x00026a0c) popup_midp_note_alarm_window_t3_ParamLimits

0xa5d1,	// (0x00026a0c) popup_midp_note_alarm_window_t3

0xa603,	// (0x00026a3e) popup_midp_note_alarm_window_t4_ParamLimits

0xa603,	// (0x00026a3e) popup_midp_note_alarm_window_t4

0xa629,	// (0x00026a64) popup_midp_note_alarm_window_t5_ParamLimits

0xa629,	// (0x00026a64) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002bceb) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002bceb) popup_midp_note_alarm_window_t

0xa6d5,	// (0x00026b10) wait_bar_pane_cp1_ParamLimits

0xa6d5,	// (0x00026b10) wait_bar_pane_cp1

0x384f,	// (0x0001fc8a) wait_anim_pane_copy1

0x384f,	// (0x0001fc8a) wait_border_pane_copy1

0xa0bd,	// (0x000264f8) wait_border_pane_g1_copy1

0x5160,	// (0x0002159b) form_field_popup_pane_g1

0x5168,	// (0x000215a3) form_field_popup_pane_t1_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_cp7_ParamLimits

0x7faf,	// (0x000243ea) list_form_pane_ParamLimits

0x5182,	// (0x000215bd) form_field_popup_wide_pane_g1

0x518a,	// (0x000215c5) form_field_popup_wide_pane_t1_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_cp8_ParamLimits

0x7fbb,	// (0x000243f6) list_form_wide_pane_ParamLimits

0xb234,	// (0x0002766f) aid_size_cell_graphic_pane

0x5216,	// (0x00021651) data_form_pane_t1_ParamLimits

0x546c,	// (0x000218a7) data_form_wide_pane_t1_ParamLimits

0x966e,	// (0x00025aa9) bg_status_flat_pane

0x5f56,	// (0x00022391) title_pane_t1_ParamLimits

0x5fbe,	// (0x000223f9) title_pane_t2_ParamLimits

0x5fe4,	// (0x0002241f) title_pane_t3_ParamLimits

0xf56f,	// (0x0002b9aa) title_pane_t_ParamLimits

0x857a,	// (0x000249b5) level_1_signal_ParamLimits

0x8587,	// (0x000249c2) level_2_signal_ParamLimits

0x8594,	// (0x000249cf) level_3_signal_ParamLimits

0x85a1,	// (0x000249dc) level_4_signal_ParamLimits

0x85ae,	// (0x000249e9) level_5_signal_ParamLimits

0x85bb,	// (0x000249f6) level_6_signal_ParamLimits

0x85c8,	// (0x00024a03) level_7_signal_ParamLimits

0x857a,	// (0x000249b5) level_1_battery_ParamLimits

0x8587,	// (0x000249c2) level_2_battery_ParamLimits

0x8594,	// (0x000249cf) level_3_battery_ParamLimits

0x85a1,	// (0x000249dc) level_4_battery_ParamLimits

0x85ae,	// (0x000249e9) level_5_battery_ParamLimits

0x85bb,	// (0x000249f6) level_6_battery_ParamLimits

0x85c8,	// (0x00024a03) level_7_battery_ParamLimits

0xa2dd,	// (0x00026718) bg_status_flat_pane_g1

0xa2e5,	// (0x00026720) bg_status_flat_pane_g2

0xa2ed,	// (0x00026728) bg_status_flat_pane_g3

0xa2f5,	// (0x00026730) bg_status_flat_pane_g4

0xa2fd,	// (0x00026738) bg_status_flat_pane_g5

0xa305,	// (0x00026740) bg_status_flat_pane_g6

0xa30d,	// (0x00026748) bg_status_flat_pane_g7

0x600c,	// (0x00022447) tabs_3_active_pane_t1_ParamLimits

0x600c,	// (0x00022447) tabs_3_passive_pane_t1_ParamLimits

0x6026,	// (0x00022461) tabs_4_active_pane_t1_ParamLimits

0x6026,	// (0x00022461) tabs_4_1_passive_pane_t1_ParamLimits

0x8139,	// (0x00024574) tabs_2_active_pane_t1_ParamLimits

0x8139,	// (0x00024574) tabs_2_passive_pane_t1_ParamLimits

0x814b,	// (0x00024586) bg_active_tab_pane_cp4_ParamLimits

0x8159,	// (0x00024594) tabs_2_long_active_pane_t1_ParamLimits

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp4_ParamLimits

0x6efe,	// (0x00023339) list_single_midp_graphic_pane_t1_ParamLimits

0x814b,	// (0x00024586) bg_active_tab_pane_cp5_ParamLimits

0x8178,	// (0x000245b3) tabs_3_long_active_pane_t1_ParamLimits

0x816c,	// (0x000245a7) bg_passive_tab_pane_cp5_ParamLimits

0x6efe,	// (0x00023339) list_single_midp_graphic_pane_t1

0x966e,	// (0x00025aa9) bg_status_flat_pane_ParamLimits

0x9739,	// (0x00025b74) indicator_pane_cp2_ParamLimits

0x9739,	// (0x00025b74) indicator_pane_cp2

0x987c,	// (0x00025cb7) navi_pane_srt_ParamLimits

0x987c,	// (0x00025cb7) navi_pane_srt

0x98a0,	// (0x00025cdb) popup_clock_digital_analogue_window_cp1

0x6166,	// (0x000225a1) indicator_pane_t1

0x8bfe,	// (0x00025039) copy_highlight_pane

0x8bfe,	// (0x00025039) cursor_graphics_pane

0x8bfe,	// (0x00025039) graphic_within_text_pane

0x8bfe,	// (0x00025039) link_highlight_pane

0xab02,	// (0x00026f3d) popup_preview_text_window_t5_ParamLimits

0xab02,	// (0x00026f3d) popup_preview_text_window_t5

0x8d2e,	// (0x00025169) cursor_digital_pane

0x8d2e,	// (0x00025169) cursor_primary_pane

0x8d3f,	// (0x0002517a) cursor_primary_small_pane

0x8d47,	// (0x00025182) cursor_secondary_pane

0x8d4f,	// (0x0002518a) cursor_title_pane

0x8d2e,	// (0x00025169) link_highlight_digital_pane

0x8d36,	// (0x00025171) link_highlight_primary_pane

0x8d3f,	// (0x0002517a) link_highlight_primary_small_pane

0x8d47,	// (0x00025182) link_highlight_secondary_pane

0x8d4f,	// (0x0002518a) link_highlight_title_pane

0x8d2e,	// (0x00025169) copy_highlight_digital_pane

0x8d2e,	// (0x00025169) copy_highlight_primary_pane

0x8d3f,	// (0x0002517a) copy_highlight_primary_small_pane

0x8d47,	// (0x00025182) copy_highlight_secondary_pane

0x8d4f,	// (0x0002518a) copy_highlight_title_pane

0x8d47,	// (0x00025182) graphic_text_digital_pane

0xa37b,	// (0x000267b6) graphic_text_primary_pane

0xa384,	// (0x000267bf) graphic_text_primary_small_pane

0x8d3f,	// (0x0002517a) graphic_text_secondary_pane

0x8d2e,	// (0x00025169) graphic_text_title_pane

0x8d57,	// (0x00025192) cursor_primary_pane_g1

0xa36d,	// (0x000267a8) cursor_text_primary_t1

0xa355,	// (0x00026790) cursor_primary_small_pane_g1

0xa35f,	// (0x0002679a) cursor_text_primary_small_t1

0xa33d,	// (0x00026778) cursor_primary_small_pane_g1_copy1

0xa347,	// (0x00026782) cursor_text_primary_small_t1_copy1

0xa325,	// (0x00026760) cursor_text_title_t1

0xa333,	// (0x0002676e) cursor_title_pane_g1

0x8d57,	// (0x00025192) cursor_digital_pane_g1

0x8d61,	// (0x0002519c) cursor_text_digital_t1

0x8d6f,	// (0x000251aa) link_highlight_primary_pane_g1

0xa2ce,	// (0x00026709) link_highlight_primary_pane_t1

0x8d6f,	// (0x000251aa) link_highlight_primary_small_pane_g1

0x8d77,	// (0x000251b2) link_highlight_primary_small_pane_t1

0x8d86,	// (0x000251c1) link_highlight_secondary_pane_g1

0x8d8e,	// (0x000251c9) link_highlight_secondary_pane_t1

0xa242,	// (0x0002667d) link_highlight_title_pane_g1

0xa24a,	// (0x00026685) link_highlight_title_pane_t1

0xa22b,	// (0x00026666) link_highlight_digital_pane_g1

0xa233,	// (0x0002666e) link_highlight_digital_pane_t1

0xa0f3,	// (0x0002652e) copy_highlight_primary_pane_g1

0xa10a,	// (0x00026545) copy_highlight_primary_pane_t1

0xa0f3,	// (0x0002652e) copy_highlight_primary_small_pane_g1

0xa0fb,	// (0x00026536) copy_highlight_primary_small_pane_t1

0x8d9d,	// (0x000251d8) copy_highlight_secondary_pane_g1

0x8da5,	// (0x000251e0) copy_highlight_secondary_pane_t1

0xa0dc,	// (0x00026517) copy_highlight_title_pane_g1

0xa0e4,	// (0x0002651f) copy_highlight_title_pane_t1

0xa0f3,	// (0x0002652e) copy_highlight_digital_pane_g1

0xb404,	// (0x0002783f) copy_highlight_digital_pane_t1

0xb358,	// (0x00027793) graphic_text_primary_pane_g1

0xb3e8,	// (0x00027823) graphic_text_primary_pane_t1

0xb3f6,	// (0x00027831) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002be1a) graphic_text_primary_pane_t

0xb3c4,	// (0x000277ff) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x00027807) graphic_text_primary_small_pane_t1

0xb3da,	// (0x00027815) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002be15) graphic_text_primary_small_pane_t

0xb3a0,	// (0x000277db) graphic_text_secondary_pane_g1

0xb3a8,	// (0x000277e3) graphic_text_secondary_pane_t1

0xb3b6,	// (0x000277f1) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002be10) graphic_text_secondary_pane_t

0xb37c,	// (0x000277b7) graphic_text_title_pane_g1

0xb384,	// (0x000277bf) graphic_text_title_pane_t1

0xb392,	// (0x000277cd) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002be0b) graphic_text_title_pane_t

0xb358,	// (0x00027793) graphic_text_digital_pane_g1

0xb360,	// (0x0002779b) graphic_text_digital_pane_t1

0xb36e,	// (0x000277a9) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002be06) graphic_text_digital_pane_t

0x5ff6,	// (0x00022431) navi_icon_pane_srt_ParamLimits

0x5ff6,	// (0x00022431) navi_icon_pane_srt

0x384f,	// (0x0001fc8a) navi_midp_pane_srt

0x384f,	// (0x0001fc8a) navi_navi_pane_srt

0x5ff6,	// (0x00022431) navi_text_pane_srt_ParamLimits

0x5ff6,	// (0x00022431) navi_text_pane_srt

0xb323,	// (0x0002775e) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00027766) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00027766) navi_navi_pane_srt_g1

0xb33d,	// (0x00027778) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00027778) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002be01) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002be01) navi_navi_pane_srt_g

0xb34f,	// (0x0002778a) navi_navi_tabs_pane_srt

0xb323,	// (0x0002775e) navi_navi_text_pane_srt

0xb323,	// (0x0002775e) navi_navi_volume_pane_srt

0xb314,	// (0x0002774f) navi_navi_text_pane_srt_t1

0x729a,	// (0x000236d5) navi_navi_volume_pane_srt_g1

0x72a2,	// (0x000236dd) volume_small_pane_srt_ParamLimits

0x72a2,	// (0x000236dd) volume_small_pane_srt

0x6c9b,	// (0x000230d6) volume_small_pane_srt_g1_ParamLimits

0x6c9b,	// (0x000230d6) volume_small_pane_srt_g1

0x6cab,	// (0x000230e6) volume_small_pane_srt_g2_ParamLimits

0x6cab,	// (0x000230e6) volume_small_pane_srt_g2

0x6cbc,	// (0x000230f7) volume_small_pane_srt_g3_ParamLimits

0x6cbc,	// (0x000230f7) volume_small_pane_srt_g3

0x6ccd,	// (0x00023108) volume_small_pane_srt_g4_ParamLimits

0x6ccd,	// (0x00023108) volume_small_pane_srt_g4

0x6cde,	// (0x00023119) volume_small_pane_srt_g5_ParamLimits

0x6cde,	// (0x00023119) volume_small_pane_srt_g5

0x6cef,	// (0x0002312a) volume_small_pane_srt_g6_ParamLimits

0x6cef,	// (0x0002312a) volume_small_pane_srt_g6

0x6d00,	// (0x0002313b) volume_small_pane_srt_g7_ParamLimits

0x6d00,	// (0x0002313b) volume_small_pane_srt_g7

0x6d11,	// (0x0002314c) volume_small_pane_srt_g8_ParamLimits

0x6d11,	// (0x0002314c) volume_small_pane_srt_g8

0x6d22,	// (0x0002315d) volume_small_pane_srt_g9_ParamLimits

0x6d22,	// (0x0002315d) volume_small_pane_srt_g9

0x6d33,	// (0x0002316e) volume_small_pane_srt_g10_ParamLimits

0x6d33,	// (0x0002316e) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002bbb0) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002bbb0) volume_small_pane_srt_g

0x646d,	// (0x000228a8) query_popup_data_pane_cp2

0xb2fa,	// (0x00027735) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x00027735) navi_navi_icon_text_pane_srt_t1

0xa37b,	// (0x000267b6) navi_tabs_2_long_pane_srt

0xa37b,	// (0x000267b6) navi_tabs_2_pane_srt

0xa37b,	// (0x000267b6) navi_tabs_3_long_pane_srt

0xa37b,	// (0x000267b6) navi_tabs_3_pane_srt

0xa37b,	// (0x000267b6) navi_tabs_4_pane_srt

0x727a,	// (0x000236b5) tabs_2_active_pane_srt_ParamLimits

0x727a,	// (0x000236b5) tabs_2_active_pane_srt

0x728a,	// (0x000236c5) tabs_2_passive_pane_srt_ParamLimits

0x728a,	// (0x000236c5) tabs_2_passive_pane_srt

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x00027701) bg_passive_tab_pane_g1_cp1_srt

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x0002770a) bg_passive_tab_pane_g3_cp1_srt

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp1_srt_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x00027713) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x0002771b) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x0002771b) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x00027701) bg_active_tab_pane_g1_cp1_srt

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x0002770a) bg_active_tab_pane_g3_cp1_srt

0x7247,	// (0x00023682) tabs_3_active_pane_srt_ParamLimits

0x7247,	// (0x00023682) tabs_3_active_pane_srt

0x7258,	// (0x00023693) tabs_3_passive_pane_cp_srt_ParamLimits

0x7258,	// (0x00023693) tabs_3_passive_pane_cp_srt

0x7269,	// (0x000236a4) tabs_3_passive_pane_srt_ParamLimits

0x7269,	// (0x000236a4) tabs_3_passive_pane_srt

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f84,	// (0x000253bf) bg_passive_tab_pane_cp2_srt

0x8db4,	// (0x000251ef) bg_passive_tab_pane_g1_cp2_srt

0x8847,	// (0x00024c82) bg_passive_tab_pane_g2_cp2_srt

0x8dbd,	// (0x000251f8) bg_passive_tab_pane_g3_cp2_srt

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp2_srt_ParamLimits

0x5ff6,	// (0x00022431) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x000276e7) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x000276ef) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x000276ef) tabs_3_active_pane_srt_t1

0x8db4,	// (0x000251ef) bg_active_tab_pane_g1_cp2_srt

0x8847,	// (0x00024c82) bg_active_tab_pane_g2_cp2_srt

0x8dbd,	// (0x000251f8) bg_active_tab_pane_g3_cp2_srt

0x71ff,	// (0x0002363a) tabs_4_active_pane_srt_ParamLimits

0x71ff,	// (0x0002363a) tabs_4_active_pane_srt

0x7211,	// (0x0002364c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7211,	// (0x0002364c) tabs_4_passive_pane_cp2_srt

0x8f12,	// (0x0002534d) aid_size_cell_toolbar

0x816c,	// (0x000245a7) main_idle_act_pane_ParamLimits

0x9149,	// (0x00025584) popup_large_graphic_colour_window_ParamLimits

0x94f0,	// (0x0002592b) popup_toolbar_window_ParamLimits

0x94f0,	// (0x0002592b) popup_toolbar_window

0x54c5,	// (0x00021900) list_single_graphic_2heading_pane_ParamLimits

0x54c5,	// (0x00021900) list_single_graphic_2heading_pane

0x8328,	// (0x00024763) aid_size_cell_apps_grid_lsc_pane

0x833a,	// (0x00024775) aid_size_cell_apps_grid_prt_pane

0x8f84,	// (0x000253bf) bg_wml_button_pane_cp1_ParamLimits

0x8f84,	// (0x000253bf) bg_wml_button_pane_cp1

0x9d80,	// (0x000261bb) form_midp_field_text_pane_t1_ParamLimits

0x9bb3,	// (0x00025fee) input_focus_pane_cp050_ParamLimits

0x9d9e,	// (0x000261d9) list_midp_form_text_pane_ParamLimits

0x9d5d,	// (0x00026198) input_focus_pane_cp051_ParamLimits

0x9d71,	// (0x000261ac) list_midp_choice_pane_ParamLimits

0x9c44,	// (0x0002607f) list_single_2graphic_pane_cp3_ParamLimits

0x9c44,	// (0x0002607f) list_single_2graphic_pane_cp3

0x9c54,	// (0x0002608f) list_single_midp_graphic_pane_ParamLimits

0x9c54,	// (0x0002608f) list_single_midp_graphic_pane

0x5352,	// (0x0002178d) list_single_graphic_2heading_pane_g1_ParamLimits

0x5352,	// (0x0002178d) list_single_graphic_2heading_pane_g1

0x535e,	// (0x00021799) list_single_graphic_2heading_pane_g4_ParamLimits

0x535e,	// (0x00021799) list_single_graphic_2heading_pane_g4

0x536a,	// (0x000217a5) list_single_graphic_2heading_pane_g5_ParamLimits

0x536a,	// (0x000217a5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002bc03) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002bc03) list_single_graphic_2heading_pane_g

0x5376,	// (0x000217b1) list_single_graphic_2heading_pane_t1_ParamLimits

0x5376,	// (0x000217b1) list_single_graphic_2heading_pane_t1

0x538a,	// (0x000217c5) list_single_graphic_2heading_pane_t2_ParamLimits

0x538a,	// (0x000217c5) list_single_graphic_2heading_pane_t2

0x53a6,	// (0x000217e1) list_single_graphic_2heading_pane_t3_ParamLimits

0x53a6,	// (0x000217e1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002bc0a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002bc0a) list_single_graphic_2heading_pane_t

0x99ff,	// (0x00025e3a) bg_popup_sub_pane_cp2

0x9a29,	// (0x00025e64) grid_toobar_pane

0x6e8e,	// (0x000232c9) cell_toolbar_pane_ParamLimits

0x6e8e,	// (0x000232c9) cell_toolbar_pane

0x9a65,	// (0x00025ea0) cell_toolbar_pane_g1_ParamLimits

0x9a65,	// (0x00025ea0) cell_toolbar_pane_g1

0x9a79,	// (0x00025eb4) cell_toolbar_pane_g2_ParamLimits

0x9a79,	// (0x00025eb4) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002bc18) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002bc18) cell_toolbar_pane_g

0x9a9b,	// (0x00025ed6) grid_highlight_pane_cp2_ParamLimits

0x9a9b,	// (0x00025ed6) grid_highlight_pane_cp2

0x9ab5,	// (0x00025ef0) toolbar_button_pane

0x9ac1,	// (0x00025efc) toolbar_button_pane_g1

0x9ac9,	// (0x00025f04) toolbar_button_pane_g2

0x9ad1,	// (0x00025f0c) toolbar_button_pane_g3

0x9ad9,	// (0x00025f14) toolbar_button_pane_g4

0x9ae1,	// (0x00025f1c) toolbar_button_pane_g5

0x9ae9,	// (0x00025f24) toolbar_button_pane_g6

0x9af1,	// (0x00025f2c) toolbar_button_pane_g7

0x9af9,	// (0x00025f34) toolbar_button_pane_g8

0x9b01,	// (0x00025f3c) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002bc1d) toolbar_button_pane_g

0x6ec6,	// (0x00023301) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ec6,	// (0x00023301) list_single_2graphic_pane_g1_cp3

0x6ed2,	// (0x0002330d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6ed2,	// (0x0002330d) list_single_2graphic_pane_g2_cp3

0x8a28,	// (0x00024e63) list_single_2graphic_pane_g3_cp3

0x0906,	// (0x0001cd41) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0906,	// (0x0001cd41) list_single_2graphic_pane_g4_cp3

0x6ee3,	// (0x0002331e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ee3,	// (0x0002331e) list_single_2graphic_pane_t1_cp3

0x8a1c,	// (0x00024e57) list_single_midp_graphic_pane_g2_ParamLimits

0x8a1c,	// (0x00024e57) list_single_midp_graphic_pane_g2

0x8f1a,	// (0x00025355) aid_zoom_text_primary

0x5342,	// (0x0002177d) aid_zoom_text_secondary

0x8e71,	// (0x000252ac) status_small_pane_g7_ParamLimits

0x8e71,	// (0x000252ac) status_small_pane_g7

0x8e94,	// (0x000252cf) status_small_pane_t1_ParamLimits

0x5f39,	// (0x00022374) title_pane_g2

0x0003,

0xf566,	// (0x0002b9a1) title_pane_g

0x6516,	// (0x00022951) aid_size_cell_colour_1_pane_ParamLimits

0x6516,	// (0x00022951) aid_size_cell_colour_1_pane

0x652a,	// (0x00022965) aid_size_cell_colour_2_pane_ParamLimits

0x652a,	// (0x00022965) aid_size_cell_colour_2_pane

0x653e,	// (0x00022979) aid_size_cell_colour_3_pane_ParamLimits

0x653e,	// (0x00022979) aid_size_cell_colour_3_pane

0x6552,	// (0x0002298d) aid_size_cell_colour_4_pane_ParamLimits

0x6552,	// (0x0002298d) aid_size_cell_colour_4_pane

0x68f0,	// (0x00022d2b) title_pane_stacon_g1_ParamLimits

0x68f0,	// (0x00022d2b) title_pane_stacon_g1

0xa161,	// (0x0002659c) popup_note_wait_window_g3_ParamLimits

0xa161,	// (0x0002659c) popup_note_wait_window_g3

0xa1d8,	// (0x00026613) popup_note_wait_window_t5_ParamLimits

0xa1d8,	// (0x00026613) popup_note_wait_window_t5

0x384f,	// (0x0001fc8a) main_feb_china_hwr_fs_writing_pane

0x9010,	// (0x0002544b) popup_feb_china_hwr_fs_window_ParamLimits

0x9010,	// (0x0002544b) popup_feb_china_hwr_fs_window

0x6f14,	// (0x0002334f) aid_size_cell_hwr_fs_ParamLimits

0x6f14,	// (0x0002334f) aid_size_cell_hwr_fs

0x9bb3,	// (0x00025fee) bg_popup_sub_pane_cp3_ParamLimits

0x9bb3,	// (0x00025fee) bg_popup_sub_pane_cp3

0x6f29,	// (0x00023364) grid_hwr_fs_pane_ParamLimits

0x6f29,	// (0x00023364) grid_hwr_fs_pane

0x6f41,	// (0x0002337c) linegrid_hwr_fs_pane_ParamLimits

0x6f41,	// (0x0002337c) linegrid_hwr_fs_pane

0x6f51,	// (0x0002338c) cell_hwr_fs_pane_ParamLimits

0x6f51,	// (0x0002338c) cell_hwr_fs_pane

0x9bbf,	// (0x00025ffa) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bbf,	// (0x00025ffa) linegrid_hwr_fs_pane_g1

0x9bcb,	// (0x00026006) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bcb,	// (0x00026006) linegrid_hwr_fs_pane_g2

0x9bdd,	// (0x00026018) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bdd,	// (0x00026018) linegrid_hwr_fs_pane_g3

0x6f75,	// (0x000233b0) linegrid_hwr_fs_pane_g4_ParamLimits

0x6f75,	// (0x000233b0) linegrid_hwr_fs_pane_g4

0x6f93,	// (0x000233ce) linegrid_hwr_fs_pane_g5_ParamLimits

0x6f93,	// (0x000233ce) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002bc48) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002bc48) linegrid_hwr_fs_pane_g

0x9be9,	// (0x00026024) cell_hwr_fs_pane_g1_ParamLimits

0x9be9,	// (0x00026024) cell_hwr_fs_pane_g1

0x9936,	// (0x00025d71) cell_hwr_fs_pane_g2_ParamLimits

0x9936,	// (0x00025d71) cell_hwr_fs_pane_g2

0x9bff,	// (0x0002603a) cell_hwr_fs_pane_g3_ParamLimits

0x9bff,	// (0x0002603a) cell_hwr_fs_pane_g3

0x9c0c,	// (0x00026047) cell_hwr_fs_pane_g4_ParamLimits

0x9c0c,	// (0x00026047) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002bc53) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002bc53) cell_hwr_fs_pane_g

0x6fa9,	// (0x000233e4) cell_hwr_fs_pane_t1

0x384f,	// (0x0001fc8a) grid_highlight_pane_cp6

0x384f,	// (0x0001fc8a) main_idle_act2_pane

0x80de,	// (0x00024519) aid_inside_area_popup_secondary

0xa811,	// (0x00026c4c) aid_inside_area_window_primary_ParamLimits

0xa811,	// (0x00026c4c) aid_inside_area_window_primary

0xb413,	// (0x0002784e) ai2_news_ticker_pane

0xb41b,	// (0x00027856) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00027856) aid_size_cell_ai1_link

0xb435,	// (0x00027870) popup_ai2_data_window_ParamLimits

0xb435,	// (0x00027870) popup_ai2_data_window

0xb453,	// (0x0002788e) popup_ai2_link_window_ParamLimits

0xb453,	// (0x0002788e) popup_ai2_link_window

0x9bb3,	// (0x00025fee) bg_popup_sub_pane_cp4_ParamLimits

0x9bb3,	// (0x00025fee) bg_popup_sub_pane_cp4

0xb469,	// (0x000278a4) grid_ai2_link_pane_ParamLimits

0xb469,	// (0x000278a4) grid_ai2_link_pane

0xb480,	// (0x000278bb) popup_ai2_link_window_g1_ParamLimits

0xb480,	// (0x000278bb) popup_ai2_link_window_g1

0xb48c,	// (0x000278c7) popup_ai2_link_window_g2_ParamLimits

0xb48c,	// (0x000278c7) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002be1f) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002be1f) popup_ai2_link_window_g

0xb49d,	// (0x000278d8) ai2_mp_button_pane

0xb4a5,	// (0x000278e0) ai2_mp_volume_pane

0x9d5d,	// (0x00026198) bg_popup_sub_pane_cp5_ParamLimits

0x9d5d,	// (0x00026198) bg_popup_sub_pane_cp5

0xb4ad,	// (0x000278e8) heading_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x000278e8) heading_ai2_gene_pane

0xb4b9,	// (0x000278f4) list_ai2_gene_pane_ParamLimits

0xb4b9,	// (0x000278f4) list_ai2_gene_pane

0xb501,	// (0x0002793c) cell_ai2_link_pane_ParamLimits

0xb501,	// (0x0002793c) cell_ai2_link_pane

0xb517,	// (0x00027952) cell_ai2_link_pane_g1

0x384f,	// (0x0001fc8a) grid_highlight_pane_cp7

0x72b7,	// (0x000236f2) ai2_mp_volume_pane_g1

0xb5ea,	// (0x00027a25) ai2_mp_volume_pane_g2

0xb55f,	// (0x0002799a) list_ai2_gene_pane_t1

0xb5f2,	// (0x00027a2d) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002be38) ai2_mp_volume_pane_g

0x72bf,	// (0x000236fa) volume_small_pane_cp3

0xb5fa,	// (0x00027a35) aid_size_cell_ai2_button

0xb602,	// (0x00027a3d) grid_ai2_button_pane

0xb60b,	// (0x00027a46) cell_ai2_button_pane_ParamLimits

0xb60b,	// (0x00027a46) cell_ai2_button_pane

0x36cc,	// (0x0001fb07) cell_ai2_button_pane_g1

0x384f,	// (0x0001fc8a) grid_highlight_pane_cp8

0xb5aa,	// (0x000279e5) ai2_gene_pane_t1_ParamLimits

0xb5aa,	// (0x000279e5) ai2_gene_pane_t1

0x8f08,	// (0x00025343) aid_height_parent_landscape

0xaebd,	// (0x000272f8) aid_height_set_list

0xaece,	// (0x00027309) aid_size_parent

0xb234,	// (0x0002766f) aid_size_cell_graphic_pane_ParamLimits

0xb4c9,	// (0x00027904) popup_ai2_data_window_g1_ParamLimits

0xb4c9,	// (0x00027904) popup_ai2_data_window_g1

0xb4d5,	// (0x00027910) ai2_news_ticker_pane_g1

0xb4dd,	// (0x00027918) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002be24) ai2_news_ticker_pane_g

0xb4e5,	// (0x00027920) ai2_news_ticker_pane_t1

0xb4f3,	// (0x0002792e) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002be29) ai2_news_ticker_pane_t

0xb520,	// (0x0002795b) heading_ai2_gene_pane_g1

0xb528,	// (0x00027963) heading_ai2_gene_pane_t1_ParamLimits

0xb528,	// (0x00027963) heading_ai2_gene_pane_t1

0xb53d,	// (0x00027978) list_highlight_pane_cp6

0xb545,	// (0x00027980) ai2_gene_pane_ParamLimits

0xb545,	// (0x00027980) ai2_gene_pane

0xb56d,	// (0x000279a8) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002be2e) list_ai2_gene_pane_t

0xb57b,	// (0x000279b6) list_highlight_pane_cp8_ParamLimits

0xb57b,	// (0x000279b6) list_highlight_pane_cp8

0xb58c,	// (0x000279c7) ai2_gene_pane_g1_ParamLimits

0xb58c,	// (0x000279c7) ai2_gene_pane_g1

0xb59e,	// (0x000279d9) ai2_gene_pane_g2_ParamLimits

0xb59e,	// (0x000279d9) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002be33) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002be33) ai2_gene_pane_g

0x68a3,	// (0x00022cde) scroll_pane_cp12

0x6e4d,	// (0x00023288) control_pane_t3_ParamLimits

0x6e4d,	// (0x00023288) control_pane_t3

0x8e85,	// (0x000252c0) status_small_pane_g8_ParamLimits

0x8e85,	// (0x000252c0) status_small_pane_g8

0x910e,	// (0x00025549) popup_find_window_ParamLimits

0x9339,	// (0x00025774) popup_note_image_window_ParamLimits

0x53be,	// (0x000217f9) list_double2_graphic_pane_vc_g1_ParamLimits

0x53be,	// (0x000217f9) list_double2_graphic_pane_vc_g1

0x53ca,	// (0x00021805) list_double2_graphic_pane_vc_g2_ParamLimits

0x53ca,	// (0x00021805) list_double2_graphic_pane_vc_g2

0x53d6,	// (0x00021811) list_double2_graphic_pane_vc_g3_ParamLimits

0x53d6,	// (0x00021811) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002bc11) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002bc11) list_double2_graphic_pane_vc_g

0x53e2,	// (0x0002181d) list_double2_graphic_pane_vc_t1_ParamLimits

0x53e2,	// (0x0002181d) list_double2_graphic_pane_vc_t1

0x535e,	// (0x00021799) list_single_heading_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_single_heading_pane_vc_g1

0x536a,	// (0x000217a5) list_single_heading_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_single_heading_pane_vc_g

0x53f8,	// (0x00021833) list_single_heading_pane_vc_t1_ParamLimits

0x53f8,	// (0x00021833) list_single_heading_pane_vc_t1

0x5410,	// (0x0002184b) list_single_heading_pane_vc_t2_ParamLimits

0x5410,	// (0x0002184b) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002bc37) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002bc37) list_single_heading_pane_vc_t

0x9b09,	// (0x00025f44) list_setting_number_pane_vc_g1_ParamLimits

0x9b09,	// (0x00025f44) list_setting_number_pane_vc_g1

0x9b15,	// (0x00025f50) list_setting_number_pane_vc_g2_ParamLimits

0x9b15,	// (0x00025f50) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002bc3c) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002bc3c) list_setting_number_pane_vc_g

0x9b21,	// (0x00025f5c) list_setting_number_pane_vc_t1_ParamLimits

0x9b21,	// (0x00025f5c) list_setting_number_pane_vc_t1

0x9b35,	// (0x00025f70) list_setting_number_pane_vc_t2_ParamLimits

0x9b35,	// (0x00025f70) list_setting_number_pane_vc_t2

0x9b51,	// (0x00025f8c) list_setting_number_pane_vc_t3_ParamLimits

0x9b51,	// (0x00025f8c) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002bc41) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002bc41) list_setting_number_pane_vc_t

0x9b79,	// (0x00025fb4) set_value_pane_vc_ParamLimits

0x9b79,	// (0x00025fb4) set_value_pane_vc

0x54c5,	// (0x00021900) list_double2_graphic_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double2_graphic_pane_vc

0xb0b2,	// (0x000274ed) list_double2_large_graphic_pane_vc_ParamLimits

0xb0b2,	// (0x000274ed) list_double2_large_graphic_pane_vc

0x54c5,	// (0x00021900) list_double2_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double2_pane_vc

0x54c5,	// (0x00021900) list_double_graphic_heading_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_graphic_heading_pane_vc

0x54c5,	// (0x00021900) list_double_graphic_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_graphic_pane_vc

0x54c5,	// (0x00021900) list_double_heading_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_heading_pane_vc

0xb0b2,	// (0x000274ed) list_double_large_graphic_pane_vc_ParamLimits

0xb0b2,	// (0x000274ed) list_double_large_graphic_pane_vc

0x54c5,	// (0x00021900) list_double_number_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_number_pane_vc

0x54c5,	// (0x00021900) list_double_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_pane_vc

0x54c5,	// (0x00021900) list_double_time_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_double_time_pane_vc

0x54c5,	// (0x00021900) list_setting_number_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_setting_number_pane_vc

0x54c5,	// (0x00021900) list_setting_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_setting_pane_vc

0x54c5,	// (0x00021900) list_single_graphic_heading_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_single_graphic_heading_pane_vc

0x54c5,	// (0x00021900) list_single_heading_pane_vc_ParamLimits

0x54c5,	// (0x00021900) list_single_heading_pane_vc

0xb0da,	// (0x00027515) list_single_number_heading_pane_vc_ParamLimits

0xb0da,	// (0x00027515) list_single_number_heading_pane_vc

0x53be,	// (0x000217f9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x53be,	// (0x000217f9) list_double_graphic_heading_pane_vc_g1

0x535e,	// (0x00021799) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x535e,	// (0x00021799) list_double_graphic_heading_pane_vc_g2

0x536a,	// (0x000217a5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x536a,	// (0x000217a5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002be3f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002be3f) list_double_graphic_heading_pane_vc_g

0x550a,	// (0x00021945) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x550a,	// (0x00021945) list_double_graphic_heading_pane_vc_t1

0x53f8,	// (0x00021833) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x53f8,	// (0x00021833) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002be46) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002be46) list_double_graphic_heading_pane_vc_t

0x9b09,	// (0x00025f44) list_setting_pane_vc_g1_ParamLimits

0x9b09,	// (0x00025f44) list_setting_pane_vc_g1

0x9b15,	// (0x00025f50) list_setting_pane_vc_g2_ParamLimits

0x9b15,	// (0x00025f50) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002bc3c) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002bc3c) list_setting_pane_vc_g

0xb847,	// (0x00027c82) list_setting_pane_vc_t1_ParamLimits

0xb847,	// (0x00027c82) list_setting_pane_vc_t1

0xb85b,	// (0x00027c96) list_setting_pane_vc_t2_ParamLimits

0xb85b,	// (0x00027c96) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002be74) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002be74) list_setting_pane_vc_t

0x9b79,	// (0x00025fb4) set_value_pane_cp_vc_ParamLimits

0x9b79,	// (0x00025fb4) set_value_pane_cp_vc

0x535e,	// (0x00021799) list_single_number_heading_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_single_number_heading_pane_vc_g1

0x536a,	// (0x000217a5) list_single_number_heading_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_single_number_heading_pane_vc_g

0x53f8,	// (0x00021833) list_single_number_heading_pane_vc_t1_ParamLimits

0x53f8,	// (0x00021833) list_single_number_heading_pane_vc_t1

0x551c,	// (0x00021957) list_single_number_heading_pane_vc_t2_ParamLimits

0x551c,	// (0x00021957) list_single_number_heading_pane_vc_t2

0x552e,	// (0x00021969) list_single_number_heading_pane_vc_t3_ParamLimits

0x552e,	// (0x00021969) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002be79) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002be79) list_single_number_heading_pane_vc_t

0x53be,	// (0x000217f9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x53be,	// (0x000217f9) list_single_graphic_heading_pane_vc_g1

0x535e,	// (0x00021799) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x535e,	// (0x00021799) list_single_graphic_heading_pane_vc_g4

0x536a,	// (0x000217a5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x536a,	// (0x000217a5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0002be3f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002be3f) list_single_graphic_heading_pane_vc_g

0x53f8,	// (0x00021833) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x53f8,	// (0x00021833) list_single_graphic_heading_pane_vc_t1

0x5540,	// (0x0002197b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5540,	// (0x0002197b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002be80) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002be80) list_single_graphic_heading_pane_vc_t

0x535e,	// (0x00021799) list_double2_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_double2_pane_vc_g1

0x536a,	// (0x000217a5) list_double2_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_double2_pane_vc_g

0x5552,	// (0x0002198d) list_double2_pane_vc_t1_ParamLimits

0x5552,	// (0x0002198d) list_double2_pane_vc_t1

0x5568,	// (0x000219a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5568,	// (0x000219a3) list_double2_large_graphic_pane_vc_g1

0x5574,	// (0x000219af) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5574,	// (0x000219af) list_double2_large_graphic_pane_vc_g2

0x5580,	// (0x000219bb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5580,	// (0x000219bb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0002be85) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002be85) list_double2_large_graphic_pane_vc_g

0x558c,	// (0x000219c7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x558c,	// (0x000219c7) list_double2_large_graphic_pane_vc_t1

0x55a2,	// (0x000219dd) list_double_time_pane_vc_g1_ParamLimits

0x55a2,	// (0x000219dd) list_double_time_pane_vc_g1

0x55ae,	// (0x000219e9) list_double_time_pane_vc_g2_ParamLimits

0x55ae,	// (0x000219e9) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0002be8c) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0002be8c) list_double_time_pane_vc_g

0x55ba,	// (0x000219f5) list_double_time_pane_vc_t1_ParamLimits

0x55ba,	// (0x000219f5) list_double_time_pane_vc_t1

0x55d5,	// (0x00021a10) list_double_time_pane_vc_t2_ParamLimits

0x55d5,	// (0x00021a10) list_double_time_pane_vc_t2

0x5613,	// (0x00021a4e) list_double_time_pane_vc_t3_ParamLimits

0x5613,	// (0x00021a4e) list_double_time_pane_vc_t3

0x562b,	// (0x00021a66) list_double_time_pane_vc_t4_ParamLimits

0x562b,	// (0x00021a66) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002be91) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002be91) list_double_time_pane_vc_t

0x535e,	// (0x00021799) list_double_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_double_pane_vc_g1

0x536a,	// (0x000217a5) list_double_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_double_pane_vc_g

0x563f,	// (0x00021a7a) list_double_pane_vc_t1_ParamLimits

0x563f,	// (0x00021a7a) list_double_pane_vc_t1

0x5653,	// (0x00021a8e) list_double_pane_vc_t2_ParamLimits

0x5653,	// (0x00021a8e) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0002be9a) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002be9a) list_double_pane_vc_t

0x535e,	// (0x00021799) list_double_number_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_double_number_pane_vc_g1

0x536a,	// (0x000217a5) list_double_number_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_double_number_pane_vc_g

0x5669,	// (0x00021aa4) list_double_number_pane_vc_t1_ParamLimits

0x5669,	// (0x00021aa4) list_double_number_pane_vc_t1

0x567d,	// (0x00021ab8) list_double_number_pane_vc_t2_ParamLimits

0x567d,	// (0x00021ab8) list_double_number_pane_vc_t2

0x5653,	// (0x00021a8e) list_double_number_pane_vc_t3_ParamLimits

0x5653,	// (0x00021a8e) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002be9f) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002be9f) list_double_number_pane_vc_t

0x5691,	// (0x00021acc) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5691,	// (0x00021acc) list_double_large_graphic_pane_vc_g1

0x569d,	// (0x00021ad8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x569d,	// (0x00021ad8) list_double_large_graphic_pane_vc_g2

0x5580,	// (0x000219bb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5580,	// (0x000219bb) list_double_large_graphic_pane_vc_g3

0x56ac,	// (0x00021ae7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x56ac,	// (0x00021ae7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0002bea6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0002bea6) list_double_large_graphic_pane_vc_g

0x56b8,	// (0x00021af3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x56b8,	// (0x00021af3) list_double_large_graphic_pane_vc_t1

0x56cc,	// (0x00021b07) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56cc,	// (0x00021b07) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002beaf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002beaf) list_double_large_graphic_pane_vc_t

0x535e,	// (0x00021799) list_double_heading_pane_vc_g1_ParamLimits

0x535e,	// (0x00021799) list_double_heading_pane_vc_g1

0x536a,	// (0x000217a5) list_double_heading_pane_vc_g2_ParamLimits

0x536a,	// (0x000217a5) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bc32) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bc32) list_double_heading_pane_vc_g

0x56e3,	// (0x00021b1e) list_double_heading_pane_vc_t1_ParamLimits

0x56e3,	// (0x00021b1e) list_double_heading_pane_vc_t1

0x53f8,	// (0x00021833) list_double_heading_pane_vc_t2_ParamLimits

0x53f8,	// (0x00021833) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0002beb4) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0002beb4) list_double_heading_pane_vc_t

0x56f5,	// (0x00021b30) list_double_graphic_pane_vc_g1_ParamLimits

0x56f5,	// (0x00021b30) list_double_graphic_pane_vc_g1

0x5705,	// (0x00021b40) list_double_graphic_pane_vc_g2_ParamLimits

0x5705,	// (0x00021b40) list_double_graphic_pane_vc_g2

0x5714,	// (0x00021b4f) list_double_graphic_pane_vc_g3_ParamLimits

0x5714,	// (0x00021b4f) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0002beb9) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0002beb9) list_double_graphic_pane_vc_g

0x5720,	// (0x00021b5b) list_double_graphic_pane_vc_t1_ParamLimits

0x5720,	// (0x00021b5b) list_double_graphic_pane_vc_t1

0x5653,	// (0x00021a8e) list_double_graphic_pane_vc_t2_ParamLimits

0x5653,	// (0x00021a8e) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002bec0) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002bec0) list_double_graphic_pane_vc_t

0x5b4d,	// (0x00021f88) aid_size_cell_fastswap

0x5b55,	// (0x00021f90) aid_size_cell_touch_ParamLimits

0x5b55,	// (0x00021f90) aid_size_cell_touch

0x5db6,	// (0x000221f1) popup_fast_swap_wide_window_ParamLimits

0x5db6,	// (0x000221f1) popup_fast_swap_wide_window

0x5ecc,	// (0x00022307) touch_pane_ParamLimits

0x5ecc,	// (0x00022307) touch_pane

0x7f61,	// (0x0002439c) button_value_adjust_pane_cp2

0x7f61,	// (0x0002439c) button_value_adjust_pane_cp4

0x507e,	// (0x000214b9) form_field_data_pane_cp2

0x50a3,	// (0x000214de) form_field_data_wide_pane_cp2

0x83fa,	// (0x00024835) bg_scroll_pane_ParamLimits

0x6a55,	// (0x00022e90) scroll_handle_pane_ParamLimits

0x6a69,	// (0x00022ea4) scroll_sc2_down_pane_ParamLimits

0x6a69,	// (0x00022ea4) scroll_sc2_down_pane

0x842b,	// (0x00024866) scroll_sc2_up_pane_ParamLimits

0x842b,	// (0x00024866) scroll_sc2_up_pane

0xbcd8,	// (0x00028113) grid_wheel_folder_pane_g1_ParamLimits

0xbcd8,	// (0x00028113) grid_wheel_folder_pane_g1

0x6c33,	// (0x0002306e) clock_nsta_pane_cp2_ParamLimits

0x6c33,	// (0x0002306e) clock_nsta_pane_cp2

0x8c06,	// (0x00025041) listscroll_midp_pane_ParamLimits

0x8c12,	// (0x0002504d) midp_canvas_pane

0x8f00,	// (0x0002533b) nsta_clock_indic_pane

0x8f56,	// (0x00025391) listscroll_form_pane_vc

0x8f72,	// (0x000253ad) listscroll_set_pane_vc_ParamLimits

0x8f72,	// (0x000253ad) listscroll_set_pane_vc

0x968a,	// (0x00025ac5) clock_nsta_pane

0x9707,	// (0x00025b42) indicator_nsta_pane

0x99ff,	// (0x00025e3a) bg_popup_sub_pane_cp2_ParamLimits

0x9a13,	// (0x00025e4e) find_pane_cp2_ParamLimits

0x9a13,	// (0x00025e4e) find_pane_cp2

0x9a29,	// (0x00025e64) grid_toobar_pane_ParamLimits

0x9b87,	// (0x00025fc2) list_form_gen_pane_vc_ParamLimits

0x9b87,	// (0x00025fc2) list_form_gen_pane_vc

0x9b9d,	// (0x00025fd8) scroll_pane_cp8_vc_ParamLimits

0x9b9d,	// (0x00025fd8) scroll_pane_cp8_vc

0x9c19,	// (0x00026054) data_form_wide_pane_vc_ParamLimits

0x9c19,	// (0x00026054) data_form_wide_pane_vc

0x9c25,	// (0x00026060) form_field_data_wide_pane_vc_g1

0x9c2d,	// (0x00026068) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c2d,	// (0x00026068) form_field_data_wide_pane_vc_t1

0x7f75,	// (0x000243b0) input_focus_pane_cp6_vc_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_cp6_vc

0x9edb,	// (0x00026316) list_midp_pane_ParamLimits

0x9ee7,	// (0x00026322) scroll_pane_cp16_ParamLimits

0x9ee7,	// (0x00026322) scroll_pane_cp16

0x9f35,	// (0x00026370) button_value_adjust_pane_ParamLimits

0x9f35,	// (0x00026370) button_value_adjust_pane

0xaee0,	// (0x0002731b) button_value_adjust_pane_cp6_ParamLimits

0xaee0,	// (0x0002731b) button_value_adjust_pane_cp6

0xb03a,	// (0x00027475) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x00027475) settings_code_pane_cp

0x36cc,	// (0x0001fb07) cell_touch_pane_g1

0x36cc,	// (0x0001fb07) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x0002bb56) cell_touch_pane_g

0xb61d,	// (0x00027a58) cell_touch_pane_cp_ParamLimits

0xb61d,	// (0x00027a58) cell_touch_pane_cp

0xb62d,	// (0x00027a68) cell_touch_pane_ParamLimits

0xb62d,	// (0x00027a68) cell_touch_pane

0x36cc,	// (0x0001fb07) scroll_sc2_down_pane_g1

0x36cc,	// (0x0001fb07) scroll_sc2_up_pane_g1

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp4_vc

0xb63e,	// (0x00027a79) list_set_graphic_pane_vc_g1_ParamLimits

0xb63e,	// (0x00027a79) list_set_graphic_pane_vc_g1

0xb64a,	// (0x00027a85) list_set_graphic_pane_vc_g2_ParamLimits

0xb64a,	// (0x00027a85) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002be4b) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002be4b) list_set_graphic_pane_vc_g

0xb656,	// (0x00027a91) text_primary_small_cp13_vc_ParamLimits

0xb656,	// (0x00027a91) text_primary_small_cp13_vc

0xb66e,	// (0x00027aa9) list_set_graphic_pane_vc_ParamLimits

0xb66e,	// (0x00027aa9) list_set_graphic_pane_vc

0x384f,	// (0x0001fc8a) input_focus_pane_cp2_vc

0x36cc,	// (0x0001fb07) setting_code_pane_vc_g1

0xb682,	// (0x00027abd) setting_code_pane_vc_t1

0xb690,	// (0x00027acb) set_text_pane_vc_t1_ParamLimits

0xb690,	// (0x00027acb) set_text_pane_vc_t1

0x384f,	// (0x0001fc8a) input_focus_pane_cp1_vc

0xb6ae,	// (0x00027ae9) list_set_text_pane_vc

0x36cc,	// (0x0001fb07) setting_text_pane_vc_g1

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp2_vc

0xb6b8,	// (0x00027af3) setting_slider_graphic_pane_vc_g1

0xb6c0,	// (0x00027afb) setting_slider_graphic_pane_vc_t1

0xb6ce,	// (0x00027b09) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002be50) setting_slider_graphic_pane_vc_t

0xb6dc,	// (0x00027b17) slider_set_pane_cp_vc

0xb6e4,	// (0x00027b1f) slider_set_pane_vc_g1

0xb6ed,	// (0x00027b28) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002be55) slider_set_pane_vc_g

0x7fdc,	// (0x00024417) set_opt_bg_pane_g1_copy1

0x7fe4,	// (0x0002441f) set_opt_bg_pane_g2_copy1

0xb719,	// (0x00027b54) set_opt_bg_pane_g3_copy1

0x7ff4,	// (0x0002442f) set_opt_bg_pane_g4_copy1

0x7ffc,	// (0x00024437) set_opt_bg_pane_g5_copy1

0x8004,	// (0x0002443f) set_opt_bg_pane_g6_copy1

0xb723,	// (0x00027b5e) set_opt_bg_pane_g7_copy1

0xb72d,	// (0x00027b68) set_opt_bg_pane_g8_copy1

0xb737,	// (0x00027b72) set_opt_bg_pane_g9_copy1

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp_vc

0xb741,	// (0x00027b7c) setting_slider_pane_vc_t1

0xb6c0,	// (0x00027afb) setting_slider_pane_vc_t2

0xb6ce,	// (0x00027b09) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002be64) setting_slider_pane_vc_t

0xb6dc,	// (0x00027b17) slider_set_pane_vc

0x6fb7,	// (0x000233f2) volume_set_pane_vc_g1

0x6fc0,	// (0x000233fb) volume_set_pane_vc_g2

0x6fc9,	// (0x00023404) volume_set_pane_vc_g3

0x6fd2,	// (0x0002340d) volume_set_pane_vc_g4

0x6fdb,	// (0x00023416) volume_set_pane_vc_g5

0x6fe4,	// (0x0002341f) volume_set_pane_vc_g6

0x6fed,	// (0x00023428) volume_set_pane_vc_g7

0x6ff6,	// (0x00023431) volume_set_pane_vc_g8

0x6fff,	// (0x0002343a) volume_set_pane_vc_g9

0x7008,	// (0x00023443) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0002bd02) volume_set_pane_vc_g

0xb750,	// (0x00027b8b) volume_set_pane_vc

0xb758,	// (0x00027b93) button_value_adjust_pane_cp1_vc

0xb762,	// (0x00027b9d) list_highlight_pane_cp2_vc

0xb76b,	// (0x00027ba6) list_set_pane_vc_ParamLimits

0xb76b,	// (0x00027ba6) list_set_pane_vc

0xb7d5,	// (0x00027c10) main_pane_set_vc_t1_ParamLimits

0xb7d5,	// (0x00027c10) main_pane_set_vc_t1

0xb7ea,	// (0x00027c25) main_pane_set_vc_t2_ParamLimits

0xb7ea,	// (0x00027c25) main_pane_set_vc_t2

0xb7fc,	// (0x00027c37) main_pane_set_vc_t3_ParamLimits

0xb7fc,	// (0x00027c37) main_pane_set_vc_t3

0xb810,	// (0x00027c4b) main_pane_set_vc_t4_ParamLimits

0xb810,	// (0x00027c4b) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002be6b) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002be6b) main_pane_set_vc_t

0xb824,	// (0x00027c5f) setting_code_pane_vc_ParamLimits

0xb824,	// (0x00027c5f) setting_code_pane_vc

0xb835,	// (0x00027c70) setting_slider_graphic_pane_vc

0xb835,	// (0x00027c70) setting_slider_pane_vc

0xb835,	// (0x00027c70) setting_text_pane_vc

0xb835,	// (0x00027c70) setting_volume_pane_vc

0xb83f,	// (0x00027c7a) scroll_pane_cp121_vc

0x7f4f,	// (0x0002438a) set_content_pane_vc

0xb87d,	// (0x00027cb8) button_value_adjust_pane_g1

0xb886,	// (0x00027cc1) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0002bec5) button_value_adjust_pane_g

0xb88f,	// (0x00027cca) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb88f,	// (0x00027cca) form_field_slider_wide_pane_vc_t1

0xb8a3,	// (0x00027cde) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00027cde) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002beca) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002beca) form_field_slider_wide_pane_vc_t

0x6302,	// (0x0002273d) input_focus_pane_cp10_vc_ParamLimits

0x6302,	// (0x0002273d) input_focus_pane_cp10_vc

0xb8b5,	// (0x00027cf0) slider_cont_pane_cp1_vc_ParamLimits

0xb8b5,	// (0x00027cf0) slider_cont_pane_cp1_vc

0xb6e4,	// (0x00027b1f) slider_form_pane_g1_cp2

0xb6ed,	// (0x00027b28) slider_form_pane_g2_cp2

0xb8ce,	// (0x00027d09) form_field_slider_pane_vc_t3

0xb8dc,	// (0x00027d17) form_field_slider_pane_vc_t4

0xb8ea,	// (0x00027d25) slider_form_pane_vc_ParamLimits

0xb8ea,	// (0x00027d25) slider_form_pane_vc

0xb8f7,	// (0x00027d32) form_field_slider_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00027d32) form_field_slider_pane_vc_t1

0xb8a3,	// (0x00027cde) form_field_slider_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00027cde) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002beda) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002beda) form_field_slider_pane_vc_t

0x6302,	// (0x0002273d) input_focus_pane_cp9_vc_ParamLimits

0x6302,	// (0x0002273d) input_focus_pane_cp9_vc

0xb913,	// (0x00027d4e) slider_cont_pane_vc_ParamLimits

0xb913,	// (0x00027d4e) slider_cont_pane_vc

0xb925,	// (0x00027d60) list_form_graphic_pane_cp_vc_ParamLimits

0xb925,	// (0x00027d60) list_form_graphic_pane_cp_vc

0x9c25,	// (0x00026060) form_field_popup_wide_pane_vc_g1

0xb93a,	// (0x00027d75) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb93a,	// (0x00027d75) form_field_popup_wide_pane_vc_t1

0x7f75,	// (0x000243b0) input_focus_pane_cp8_vc_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_cp8_vc

0xb951,	// (0x00027d8c) list_form_wide_pane_vc_ParamLimits

0xb951,	// (0x00027d8c) list_form_wide_pane_vc

0xb95d,	// (0x00027d98) list_form_graphic_pane_vc_g1

0xb965,	// (0x00027da0) list_form_graphic_pane_vc_t1_ParamLimits

0xb965,	// (0x00027da0) list_form_graphic_pane_vc_t1

0x5ff6,	// (0x00022431) list_highlight_pane_cp5_vc_ParamLimits

0x5ff6,	// (0x00022431) list_highlight_pane_cp5_vc

0xb981,	// (0x00027dbc) list_form_graphic_pane_vc_ParamLimits

0xb981,	// (0x00027dbc) list_form_graphic_pane_vc

0x9c25,	// (0x00026060) form_field_popup_pane_vc_g1

0xb997,	// (0x00027dd2) form_field_popup_pane_vc_t1_ParamLimits

0xb997,	// (0x00027dd2) form_field_popup_pane_vc_t1

0x7f75,	// (0x000243b0) input_focus_pane_cp7_vc_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_cp7_vc

0xb9ae,	// (0x00027de9) list_form_pane_vc_ParamLimits

0xb9ae,	// (0x00027de9) list_form_pane_vc

0xb9ba,	// (0x00027df5) data_form_pane_vc_t1_ParamLimits

0xb9ba,	// (0x00027df5) data_form_pane_vc_t1

0x7fdc,	// (0x00024417) input_focus_pane_vc_g1

0x7fe4,	// (0x0002441f) input_focus_pane_vc_g2

0x7fec,	// (0x00024427) input_focus_pane_vc_g3

0x7ff4,	// (0x0002442f) input_focus_pane_vc_g4

0x7ffc,	// (0x00024437) input_focus_pane_vc_g5

0x8004,	// (0x0002443f) input_focus_pane_vc_g6

0x800c,	// (0x00024447) input_focus_pane_vc_g7

0x8014,	// (0x0002444f) input_focus_pane_vc_g8

0x801c,	// (0x00024457) input_focus_pane_vc_g9

0x36cc,	// (0x0001fb07) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x0002badf) input_focus_pane_vc_g

0x9c19,	// (0x00026054) data_form_pane_vc_ParamLimits

0x9c19,	// (0x00026054) data_form_pane_vc

0x9c25,	// (0x00026060) form_field_data_pane_vc_g1

0xb9d7,	// (0x00027e12) form_field_data_pane_vc_t1_ParamLimits

0xb9d7,	// (0x00027e12) form_field_data_pane_vc_t1

0x7f75,	// (0x000243b0) input_focus_pane_vc_ParamLimits

0x7f75,	// (0x000243b0) input_focus_pane_vc

0xb9f1,	// (0x00027e2c) button_value_adjust_pane_cp3_vc

0xb9f9,	// (0x00027e34) button_value_adjust_pane_cp5_vc

0xba01,	// (0x00027e3c) form_field_data_pane_vc_ParamLimits

0xba01,	// (0x00027e3c) form_field_data_pane_vc

0xba1c,	// (0x00027e57) form_field_data_pane_vc_cp2

0xba24,	// (0x00027e5f) form_field_data_wide_pane_vc_ParamLimits

0xba24,	// (0x00027e5f) form_field_data_wide_pane_vc

0xba3e,	// (0x00027e79) form_field_data_wide_pane_vc_cp2

0xba46,	// (0x00027e81) form_field_popup_pane_vc_ParamLimits

0xba46,	// (0x00027e81) form_field_popup_pane_vc

0xba61,	// (0x00027e9c) form_field_popup_wide_pane_vc_ParamLimits

0xba61,	// (0x00027e9c) form_field_popup_wide_pane_vc

0xba7b,	// (0x00027eb6) form_field_slider_pane_vc_ParamLimits

0xba7b,	// (0x00027eb6) form_field_slider_pane_vc

0xba8e,	// (0x00027ec9) form_field_slider_wide_pane_vc_ParamLimits

0xba8e,	// (0x00027ec9) form_field_slider_wide_pane_vc

0xbaa1,	// (0x00027edc) grid_touch_1_pane_ParamLimits

0xbaa1,	// (0x00027edc) grid_touch_1_pane

0xbaad,	// (0x00027ee8) grid_touch_2_pane_ParamLimits

0xbaad,	// (0x00027ee8) grid_touch_2_pane

0x8ecb,	// (0x00025306) touch_pane_g1_ParamLimits

0x8ecb,	// (0x00025306) touch_pane_g1

0xbac7,	// (0x00027f02) cell_app_pane_cp_wide_ParamLimits

0xbac7,	// (0x00027f02) cell_app_pane_cp_wide

0xbad8,	// (0x00027f13) grid_popup_fast_wide_pane_ParamLimits

0xbad8,	// (0x00027f13) grid_popup_fast_wide_pane

0xbaec,	// (0x00027f27) scroll_pane_cp19_ParamLimits

0xbaec,	// (0x00027f27) scroll_pane_cp19

0x384f,	// (0x0001fc8a) bg_popup_window_pane_cp20

0xbb00,	// (0x00027f3b) listscroll_popup_fast_wide_pane

0x5ff6,	// (0x00022431) grid_indicator_nsta_pane

0xbb08,	// (0x00027f43) clock_nsta_pane_g1

0xbb11,	// (0x00027f4c) clock_nsta_pane_t1

0xbb2d,	// (0x00027f68) cell_indicator_nsta_pane_ParamLimits

0xbb2d,	// (0x00027f68) cell_indicator_nsta_pane

0xbb65,	// (0x00027fa0) cell_indicator_nsta_pane_g1

0xbb73,	// (0x00027fae) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002bee4) cell_indicator_nsta_pane_g

0xbb89,	// (0x00027fc4) clock_nsta_pane_cp

0xbb91,	// (0x00027fcc) indicator_nsta_pane_cp

0xbb99,	// (0x00027fd4) nsta_clock_indic_pane_g1

0x6152,	// (0x0002258d) grid_indicator_pane

0x851d,	// (0x00024958) scroll_pane_cp29

0x6b7f,	// (0x00022fba) indicator_nsta_pane_cp2_ParamLimits

0x6b7f,	// (0x00022fba) indicator_nsta_pane_cp2

0x5ff6,	// (0x00022431) main_apps_wheel_pane

0x9db8,	// (0x000261f3) form_midp_field_text_pane_ParamLimits

0x9f07,	// (0x00026342) scroll_bar_cp050_ParamLimits

0xbc02,	// (0x0002803d) cell_indicator_pane_ParamLimits

0xbc02,	// (0x0002803d) cell_indicator_pane

0xbc1a,	// (0x00028055) cell_indicator_pane_g1

0xbc24,	// (0x0002805f) grid_wheel_folder_pane_ParamLimits

0xbc24,	// (0x0002805f) grid_wheel_folder_pane

0xbc38,	// (0x00028073) list_wheel_apps_pane_ParamLimits

0xbc38,	// (0x00028073) list_wheel_apps_pane

0xbc4b,	// (0x00028086) main_apps_wheel_pane_g1_ParamLimits

0xbc4b,	// (0x00028086) main_apps_wheel_pane_g1

0xbc67,	// (0x000280a2) main_apps_wheel_pane_g2_ParamLimits

0xbc67,	// (0x000280a2) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002bf00) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002bf00) main_apps_wheel_pane_g

0xbc83,	// (0x000280be) main_apps_wheel_pane_t1_ParamLimits

0xbc83,	// (0x000280be) main_apps_wheel_pane_t1

0xbcac,	// (0x000280e7) list_wheel_apps_pane_g1

0xbcb4,	// (0x000280ef) list_wheel_apps_pane_g2

0xbcbc,	// (0x000280f7) list_wheel_apps_pane_g3

0xbcc4,	// (0x000280ff) list_wheel_apps_pane_g4

0xbcce,	// (0x00028109) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002bf05) list_wheel_apps_pane_g

0x8a7a,	// (0x00024eb5) navi_icon_text_pane

0x95b7,	// (0x000259f2) aid_fill_nsta

0xbcef,	// (0x0002812a) navi_icon_text_pane_g1

0xbcfe,	// (0x00028139) navi_icon_text_pane_t1

0x8910,	// (0x00024d4b) list_set_graphic_pane_t1_ParamLimits

0x8910,	// (0x00024d4b) list_set_graphic_pane_t1

0xa658,	// (0x00026a93) popup_midp_note_alarm_window_t6_ParamLimits

0xa658,	// (0x00026a93) popup_midp_note_alarm_window_t6

0xa66a,	// (0x00026aa5) popup_midp_note_alarm_window_t7_ParamLimits

0xa66a,	// (0x00026aa5) popup_midp_note_alarm_window_t7

0xa67c,	// (0x00026ab7) popup_midp_note_alarm_window_t8_ParamLimits

0xa67c,	// (0x00026ab7) popup_midp_note_alarm_window_t8

0xa68e,	// (0x00026ac9) popup_midp_note_alarm_window_t9_ParamLimits

0xa68e,	// (0x00026ac9) popup_midp_note_alarm_window_t9

0xa6a0,	// (0x00026adb) popup_midp_note_alarm_window_t10_ParamLimits

0xa6a0,	// (0x00026adb) popup_midp_note_alarm_window_t10

0xa6b2,	// (0x00026aed) popup_midp_note_alarm_window_t11_ParamLimits

0xa6b2,	// (0x00026aed) popup_midp_note_alarm_window_t11

0xa6c4,	// (0x00026aff) scroll_pane_cp17_ParamLimits

0xa6c4,	// (0x00026aff) scroll_pane_cp17

0x6fb7,	// (0x000233f2) volume_small_pane_cp_g1

0x72c8,	// (0x00023703) volume_small_pane_cp_g2

0x72d1,	// (0x0002370c) volume_small_pane_cp_g3

0x72da,	// (0x00023715) volume_small_pane_cp_g4

0x72e3,	// (0x0002371e) volume_small_pane_cp_g5

0x72ec,	// (0x00023727) volume_small_pane_cp_g6

0x72f5,	// (0x00023730) volume_small_pane_cp_g7

0x72fe,	// (0x00023739) volume_small_pane_cp_g8

0x7307,	// (0x00023742) volume_small_pane_cp_g9

0x7310,	// (0x0002374b) volume_small_pane_cp_g10

0x8cdb,	// (0x00025116) midp_ticker_pane_g1_ParamLimits

0x8ce7,	// (0x00025122) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002bbab) midp_ticker_pane_g_ParamLimits

0x8cf3,	// (0x0002512e) midp_ticker_pane_t1_ParamLimits

0x95cd,	// (0x00025a08) aid_fill_nsta_2

0x9ef3,	// (0x0002632e) list_form2_midp_pane

0xb081,	// (0x000274bc) midp_editing_number_pane_ParamLimits

0xb090,	// (0x000274cb) midp_ticker_pane_ParamLimits

0xbd13,	// (0x0002814e) form2_midp_field_pane

0xbd37,	// (0x00028172) scroll_pane_cp51

0xbd57,	// (0x00028192) form2_midp_button_pane_ParamLimits

0xbd57,	// (0x00028192) form2_midp_button_pane

0xbd69,	// (0x000281a4) form2_midp_content_pane_ParamLimits

0xbd69,	// (0x000281a4) form2_midp_content_pane

0xbd83,	// (0x000281be) form2_midp_field_choice_group_pane

0xbd8b,	// (0x000281c6) form2_midp_field_pane_g1

0xbd93,	// (0x000281ce) form2_midp_field_pane_g2

0xbd9b,	// (0x000281d6) form2_midp_field_pane_g3

0xbda3,	// (0x000281de) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002bf2a) form2_midp_field_pane_g

0xbdab,	// (0x000281e6) form2_midp_gauge_slider_pane

0xbdb3,	// (0x000281ee) form2_midp_gauge_wait_pane

0xbdbb,	// (0x000281f6) form2_midp_image_pane_ParamLimits

0xbdbb,	// (0x000281f6) form2_midp_image_pane

0xbdd6,	// (0x00028211) form2_midp_label_pane_ParamLimits

0xbdd6,	// (0x00028211) form2_midp_label_pane

0xbdef,	// (0x0002822a) form2_midp_label_pane_cp_ParamLimits

0xbdef,	// (0x0002822a) form2_midp_label_pane_cp

0xbe0e,	// (0x00028249) form2_midp_string_pane_ParamLimits

0xbe0e,	// (0x00028249) form2_midp_string_pane

0x5734,	// (0x00021b6f) form2_midp_text_pane_ParamLimits

0x5734,	// (0x00021b6f) form2_midp_text_pane

0xbe20,	// (0x0002825b) form2_midp_time_pane

0xbe30,	// (0x0002826b) input_focus_pane_cp51_ParamLimits

0xbe30,	// (0x0002826b) input_focus_pane_cp51

0xbe48,	// (0x00028283) form2_midp_label_pane_t1_ParamLimits

0xbe48,	// (0x00028283) form2_midp_label_pane_t1

0x574d,	// (0x00021b88) form2_mdip_text_pane_t1_ParamLimits

0x574d,	// (0x00021b88) form2_mdip_text_pane_t1

0x5765,	// (0x00021ba0) form2_midp_time_pane_t1

0xbe86,	// (0x000282c1) form2_midp_gauge_slider_pane_t1

0xbe98,	// (0x000282d3) form2_midp_gauge_slider_pane_t2

0xbeaa,	// (0x000282e5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002bf33) form2_midp_gauge_slider_pane_t

0xbebc,	// (0x000282f7) form2_midp_slider_pane

0xbec8,	// (0x00028303) form2_midp_gauge_wait_pane_t1

0xbed6,	// (0x00028311) form2_midp_wait_pane_ParamLimits

0xbed6,	// (0x00028311) form2_midp_wait_pane

0xbf01,	// (0x0002833c) list_single_2graphic_pane_cp4_ParamLimits

0xbf01,	// (0x0002833c) list_single_2graphic_pane_cp4

0x9c54,	// (0x0002608f) list_single_midp_graphic_pane_cp_ParamLimits

0x9c54,	// (0x0002608f) list_single_midp_graphic_pane_cp

0x384f,	// (0x0001fc8a) list_highlight_pane_cp20

0xbf12,	// (0x0002834d) list_single_2graphic_pane_g1_cp4

0xb520,	// (0x0002795b) list_single_2graphic_pane_g2_cp4

0xbf1a,	// (0x00028355) list_single_2graphic_pane_t1_cp4

0x5ff6,	// (0x00022431) list_highlight_pane_cp21

0xbf29,	// (0x00028364) list_single_midp_graphic_pane_g4_cp

0xbf38,	// (0x00028373) list_single_midp_graphic_pane_t1_cp

0xbf4d,	// (0x00028388) form2_mdip_string_pane_t1_ParamLimits

0xbf4d,	// (0x00028388) form2_mdip_string_pane_t1

0x384f,	// (0x0001fc8a) bg_wml_button_pane_cp2

0x36cc,	// (0x0001fb07) form2_midp_image_pane_g1

0x4e01,	// (0x0002123c) list_double_large_graphic_pane_g5_ParamLimits

0x4e01,	// (0x0002123c) list_double_large_graphic_pane_g5

0x8c06,	// (0x00025041) midp_form_pane_ParamLimits

0x5ff6,	// (0x00022431) main_apps_wheel_pane_ParamLimits

0x9361,	// (0x0002579c) popup_preview_window_ParamLimits

0x9361,	// (0x0002579c) popup_preview_window

0x9548,	// (0x00025983) popup_touch_info_window_ParamLimits

0x9548,	// (0x00025983) popup_touch_info_window

0x956a,	// (0x000259a5) popup_touch_menu_window_ParamLimits

0x956a,	// (0x000259a5) popup_touch_menu_window

0x36c2,	// (0x0001fafd) bg_popup_sub_pane_cp6

0xbfa7,	// (0x000283e2) list_touch_menu_pane

0xbfaf,	// (0x000283ea) list_single_touch_menu_pane_ParamLimits

0xbfaf,	// (0x000283ea) list_single_touch_menu_pane

0xbfca,	// (0x00028405) list_single_touch_menu_pane_t1

0x5ff6,	// (0x00022431) bg_popup_sub_pane_cp7_ParamLimits

0x5ff6,	// (0x00022431) bg_popup_sub_pane_cp7

0xbfd8,	// (0x00028413) heading_sub_pane

0xbfe0,	// (0x0002841b) list_touch_info_pane_ParamLimits

0xbfe0,	// (0x0002841b) list_touch_info_pane

0xbfef,	// (0x0002842a) list_single_touch_info_pane_ParamLimits

0xbfef,	// (0x0002842a) list_single_touch_info_pane

0xc001,	// (0x0002843c) list_single_touch_info_pane_t1

0xc00f,	// (0x0002844a) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002bf41) list_single_touch_info_pane_t

0x8bfe,	// (0x00025039) bg_popup_heading_pane_cp

0xc01d,	// (0x00028458) heading_sub_pane_t1

0x9bb3,	// (0x00025fee) bg_popup_preview_window_pane_cp_ParamLimits

0x9bb3,	// (0x00025fee) bg_popup_preview_window_pane_cp

0xbfd8,	// (0x00028413) heading_preview_pane

0xbfe0,	// (0x0002841b) list_preview_pane_ParamLimits

0xbfe0,	// (0x0002841b) list_preview_pane

0xc02b,	// (0x00028466) popup_preview_window_g1

0xbfef,	// (0x0002842a) list_single_preview_pane_ParamLimits

0xbfef,	// (0x0002842a) list_single_preview_pane

0xc033,	// (0x0002846e) list_single_preview_pane_g1

0xc03b,	// (0x00028476) list_single_preview_pane_t1

0xc001,	// (0x0002843c) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002bf46) list_single_preview_pane_t

0xc049,	// (0x00028484) bg_popup_heading_pane_cp2_ParamLimits

0xc049,	// (0x00028484) bg_popup_heading_pane_cp2

0xc05f,	// (0x0002849a) heading_preview_pane_g1

0xc067,	// (0x000284a2) heading_preview_pane_t1_ParamLimits

0xc067,	// (0x000284a2) heading_preview_pane_t1

0x6175,	// (0x000225b0) soft_indicator_pane_t1_ParamLimits

0x6880,	// (0x00022cbb) scroll_pane_ParamLimits

0x8419,	// (0x00024854) scroll_sc2_left_pane

0x8422,	// (0x0002485d) scroll_sc2_right_pane

0x8441,	// (0x0002487c) scroll_bg_pane_g1_ParamLimits

0x8456,	// (0x00024891) scroll_bg_pane_g2_ParamLimits

0x846e,	// (0x000248a9) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x0002bb36) scroll_bg_pane_g_ParamLimits

0x8441,	// (0x0002487c) scroll_handle_pane_g1_ParamLimits

0x8490,	// (0x000248cb) scroll_handle_pane_g2_ParamLimits

0x846e,	// (0x000248a9) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x0002bb3d) scroll_handle_pane_g_ParamLimits

0x8fac,	// (0x000253e7) popup_choice_list_window_ParamLimits

0x8fac,	// (0x000253e7) popup_choice_list_window

0x9a0b,	// (0x00025e46) choice_list_pane

0x9a8d,	// (0x00025ec8) cell_toolbar_pane_t1

0x9ab5,	// (0x00025ef0) toolbar_button_pane_ParamLimits

0xab94,	// (0x00026fcf) ai_gene_pane_1_t2_ParamLimits

0xab94,	// (0x00026fcf) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002bd5e) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002bd5e) ai_gene_pane_1_t

0xc084,	// (0x000284bf) scroll_sc2_left_pane_g1

0xc084,	// (0x000284bf) scroll_sc2_right_pane_g1

0x8f84,	// (0x000253bf) bg_popup_sub_pane_cp10

0xc08e,	// (0x000284c9) list_choice_list_pane

0xc0a5,	// (0x000284e0) list_single_choice_list_pane_ParamLimits

0xc0a5,	// (0x000284e0) list_single_choice_list_pane

0xc0b9,	// (0x000284f4) list_single_choice_list_pane_g1

0xc0c1,	// (0x000284fc) list_single_choice_list_pane_t1_ParamLimits

0xc0c1,	// (0x000284fc) list_single_choice_list_pane_t1

0xc0d6,	// (0x00028511) choice_list_pane_g1

0xc0de,	// (0x00028519) choice_list_pane_t1

0x36c2,	// (0x0001fafd) input_focus_pane_cp11

0x82f3,	// (0x0002472e) title_pane_stacon_g2_ParamLimits

0x82f3,	// (0x0002472e) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x0002bb1c) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0002bb1c) title_pane_stacon_g

0x8bfe,	// (0x00025039) cursor_press_pane

0x9062,	// (0x0002549d) popup_fep_hwr_window_ParamLimits

0x9062,	// (0x0002549d) popup_fep_hwr_window

0x90ec,	// (0x00025527) popup_fep_vkb_window_ParamLimits

0x90ec,	// (0x00025527) popup_fep_vkb_window

0xc0ec,	// (0x00028527) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002bf6f) fep_vkb_side_pane_g_ParamLimits

0x7344,	// (0x0002377f) fep_hwr_candidate_pane_ParamLimits

0x7344,	// (0x0002377f) fep_hwr_candidate_pane

0x736e,	// (0x000237a9) fep_hwr_side_pane_ParamLimits

0x736e,	// (0x000237a9) fep_hwr_side_pane

0x7390,	// (0x000237cb) fep_hwr_top_pane_ParamLimits

0x7390,	// (0x000237cb) fep_hwr_top_pane

0x73a8,	// (0x000237e3) fep_hwr_write_pane_ParamLimits

0x73a8,	// (0x000237e3) fep_hwr_write_pane

0xfb34,	// (0x0002bf6f) fep_vkb_side_pane_g

0xc0f4,	// (0x0002852f) fep_hwr_top_pane_g1

0xc106,	// (0x00028541) fep_hwr_top_pane_g2

0x73d4,	// (0x0002380f) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002bf4b) fep_hwr_top_pane_g

0x73e9,	// (0x00023824) fep_hwr_top_text_pane

0x85e5,	// (0x00024a20) fep_hwr_top_text_pane_g1

0xc13c,	// (0x00028577) fep_hwr_top_text_pane_t1

0x74f3,	// (0x0002392e) fep_hwr_candidate_pane_g1

0xc387,	// (0x000287c2) fep_vkb_keypad_pane_g3_ParamLimits

0xc387,	// (0x000287c2) fep_vkb_keypad_pane_g3

0xc3b3,	// (0x000287ee) fep_vkb_keypad_pane_g4_ParamLimits

0xc3b3,	// (0x000287ee) fep_vkb_keypad_pane_g4

0xc42a,	// (0x00028865) fep_vkb_bottom_pane_g2_ParamLimits

0xc42a,	// (0x00028865) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002bf76) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002bf76) fep_vkb_bottom_pane_g

0xc084,	// (0x000284bf) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002bf80) cell_vkb_side_pane_g

0xc4b5,	// (0x000288f0) cell_vkb_side_pane_t1

0xc4c3,	// (0x000288fe) cell_vkb_side_pane_t1_copy1

0xc084,	// (0x000284bf) bg_fep_vkb_candidate_pane_g2

0xc607,	// (0x00028a42) cell_vkb_candidate_pane_ParamLimits

0xc14a,	// (0x00028585) aid_size_cell_vkb_ParamLimits

0xc14a,	// (0x00028585) aid_size_cell_vkb

0xc607,	// (0x00028a42) cell_vkb_candidate_pane

0x750d,	// (0x00023948) bg_popup_fep_shadow_pane_g1

0xc1dc,	// (0x00028617) fep_vkb_bottom_pane_ParamLimits

0xc1dc,	// (0x00028617) fep_vkb_bottom_pane

0xc219,	// (0x00028654) fep_vkb_candidate_pane_ParamLimits

0xc219,	// (0x00028654) fep_vkb_candidate_pane

0xc235,	// (0x00028670) fep_vkb_keypad_pane_ParamLimits

0xc235,	// (0x00028670) fep_vkb_keypad_pane

0xc268,	// (0x000286a3) fep_vkb_side_pane_ParamLimits

0xc268,	// (0x000286a3) fep_vkb_side_pane

0xc2a4,	// (0x000286df) fep_vkb_top_pane_ParamLimits

0xc2a4,	// (0x000286df) fep_vkb_top_pane

0xc2e0,	// (0x0002871b) fep_vkb_top_pane_g1_ParamLimits

0xc2e0,	// (0x0002871b) fep_vkb_top_pane_g1

0xc2ef,	// (0x0002872a) fep_vkb_top_pane_g2_ParamLimits

0xc2ef,	// (0x0002872a) fep_vkb_top_pane_g2

0xc2fe,	// (0x00028739) fep_vkb_top_pane_g3_ParamLimits

0xc2fe,	// (0x00028739) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002bf66) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002bf66) fep_vkb_top_pane_g

0xc31c,	// (0x00028757) fep_vkb_top_text_pane_ParamLimits

0xc31c,	// (0x00028757) fep_vkb_top_text_pane

0xc32d,	// (0x00028768) fep_vkb_side_pane_g1_ParamLimits

0xc32d,	// (0x00028768) fep_vkb_side_pane_g1

0xc376,	// (0x000287b1) grid_vkb_side_pane_ParamLimits

0xc376,	// (0x000287b1) grid_vkb_side_pane

0x7515,	// (0x00023950) bg_popup_fep_shadow_pane_g2

0x751e,	// (0x00023959) bg_popup_fep_shadow_pane_g3

0x7526,	// (0x00023961) bg_popup_fep_shadow_pane_g4

0x752f,	// (0x0002396a) bg_popup_fep_shadow_pane_g5

0x7539,	// (0x00023974) bg_popup_fep_shadow_pane_g6

0x7541,	// (0x0002397c) bg_popup_fep_shadow_pane_g7

0x7ffc,	// (0x00024437) bg_popup_fep_shadow_pane_g8

0xc3d5,	// (0x00028810) grid_vkb_keypad_number_pane_ParamLimits

0xc3d5,	// (0x00028810) grid_vkb_keypad_number_pane

0xc3e9,	// (0x00028824) grid_vkb_keypad_pane_ParamLimits

0xc3e9,	// (0x00028824) grid_vkb_keypad_pane

0xc40f,	// (0x0002884a) fep_vkb_bottom_pane_g1_ParamLimits

0xc40f,	// (0x0002884a) fep_vkb_bottom_pane_g1

0xc438,	// (0x00028873) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc438,	// (0x00028873) grid_vkb_keypad_bottom_left_pane

0xc44d,	// (0x00028888) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc44d,	// (0x00028888) grid_vkb_keypad_bottom_right_pane

0xc462,	// (0x0002889d) fep_vkb_top_text_pane_g1

0xc47d,	// (0x000288b8) fep_vkb_top_text_pane_t1

0xc492,	// (0x000288cd) cell_vkb_side_pane_ParamLimits

0xc492,	// (0x000288cd) cell_vkb_side_pane

0xc084,	// (0x000284bf) cell_vkb_side_pane_g1

0xc4d1,	// (0x0002890c) cell_vkb_keypad_pane_ParamLimits

0xc4d1,	// (0x0002890c) cell_vkb_keypad_pane

0xc55e,	// (0x00028999) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002bf93) bg_popup_fep_shadow_pane_g

0xc084,	// (0x000284bf) cell_hwr_side_pane_g1

0xc084,	// (0x000284bf) cell_hwr_side_pane_g2

0xc568,	// (0x000289a3) cell_vkb_keypad_pane_t1

0xc576,	// (0x000289b1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc576,	// (0x000289b1) cell_vkb_keypad_bottom_left_pane

0xc593,	// (0x000289ce) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc593,	// (0x000289ce) cell_vkb_keypad_bottom_right_pane

0xc084,	// (0x000284bf) cell_vkb_keypad_bottom_left_pane_g1

0xc084,	// (0x000284bf) cell_vkb_keypad_bottom_right_pane_g1

0xc5cc,	// (0x00028a07) cell_vkb_keypad_number_pane_ParamLimits

0xc5cc,	// (0x00028a07) cell_vkb_keypad_number_pane

0xc5eb,	// (0x00028a26) cell_vkb_keypad_number_pane_g1

0xc5f5,	// (0x00028a30) cell_vkb_keypad_number_pane_g2

0xc5fe,	// (0x00028a39) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002bf85) cell_vkb_keypad_number_pane_g

0xc568,	// (0x000289a3) cell_vkb_keypad_number_pane_t1

0xc628,	// (0x00028a63) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002bf80) cell_hwr_side_pane_g

0xc641,	// (0x00028a7c) cell_hwr_side_pane_t1

0x7553,	// (0x0002398e) cell_hwr_side_pane_t1_copy1

0xc30e,	// (0x00028749) cell_hwr_candidate_pane_g1

0x7561,	// (0x0002399c) cell_hwr_candidate_pane_t1

0xc084,	// (0x000284bf) cell_vkb_candidate_pane_g2

0xc6c7,	// (0x00028b02) cell_vkb_candidate_pane_t1

0x0ae4,	// (0x0001cf1f) bg_popup_fep_shadow_pane_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_popup_fep_shadow_pane

0x12f1,	// (0x0001d72c) bg_fep_hwr_top_pane_g4

0xc118,	// (0x00028553) bg_hwr_side_pane_g1_ParamLimits

0xc118,	// (0x00028553) bg_hwr_side_pane_g1

0x7427,	// (0x00023862) cell_hwr_side_pane_ParamLimits

0x7427,	// (0x00023862) cell_hwr_side_pane

0x7464,	// (0x0002389f) fep_hwr_write_pane_g1_ParamLimits

0x7464,	// (0x0002389f) fep_hwr_write_pane_g1

0x7471,	// (0x000238ac) fep_hwr_write_pane_g2_ParamLimits

0x7471,	// (0x000238ac) fep_hwr_write_pane_g2

0x747e,	// (0x000238b9) fep_hwr_write_pane_g3_ParamLimits

0x747e,	// (0x000238b9) fep_hwr_write_pane_g3

0x748c,	// (0x000238c7) fep_hwr_write_pane_g4_ParamLimits

0x748c,	// (0x000238c7) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002bf52) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002bf52) fep_hwr_write_pane_g

0x12f1,	// (0x0001d72c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x12f1,	// (0x0001d72c) bg_fep_hwr_candidate_pane_g2

0x74a1,	// (0x000238dc) cell_hwr_candidate_pane_ParamLimits

0x74a1,	// (0x000238dc) cell_hwr_candidate_pane

0x74f3,	// (0x0002392e) fep_hwr_candidate_pane_g1_ParamLimits

0xc178,	// (0x000285b3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc178,	// (0x000285b3) bg_popup_fep_shadow_pane_cp2

0xc30e,	// (0x00028749) fep_vkb_top_pane_g4_ParamLimits

0xc30e,	// (0x00028749) fep_vkb_top_pane_g4

0xc354,	// (0x0002878f) fep_vkb_side_pane_g2_ParamLimits

0xc354,	// (0x0002878f) fep_vkb_side_pane_g2

0x4f8b,	// (0x000213c6) list_setting_pane_t4_ParamLimits

0x4f8b,	// (0x000213c6) list_setting_pane_t4

0x5027,	// (0x00021462) list_setting_number_pane_t5_ParamLimits

0x5027,	// (0x00021462) list_setting_number_pane_t5

0x862c,	// (0x00024a67) list_double_heading_pane_cp2_ParamLimits

0x862c,	// (0x00024a67) list_double_heading_pane_cp2

0x7f8f,	// (0x000243ca) list_double_heading_pane_g1_cp2_ParamLimits

0x7f8f,	// (0x000243ca) list_double_heading_pane_g1_cp2

0x7f9b,	// (0x000243d6) list_double_heading_pane_g2_cp2_ParamLimits

0x7f9b,	// (0x000243d6) list_double_heading_pane_g2_cp2

0xc6d5,	// (0x00028b10) list_double_heading_pane_t1_cp2_ParamLimits

0xc6d5,	// (0x00028b10) list_double_heading_pane_t1_cp2

0xc6eb,	// (0x00028b26) list_double_heading_pane_t2_cp2_ParamLimits

0xc6eb,	// (0x00028b26) list_double_heading_pane_t2_cp2

0x36ba,	// (0x0001faf5) aid_value_unit2

0x5e14,	// (0x0002224f) popup_preview_fixed_window

0x6310,	// (0x0002274b) bg_popup_preview_window_pane_cp02

0xc6fd,	// (0x00028b38) list_preview_fixed_pane

0xc743,	// (0x00028b7e) list_empty_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_empty_pane_fp

0xc743,	// (0x00028b7e) list_single_cale_day_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_cale_day_pane_fp

0xc743,	// (0x00028b7e) list_single_graphic_heading_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_graphic_heading_pane_fp

0xc743,	// (0x00028b7e) list_single_graphic_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_graphic_pane_fp

0xc743,	// (0x00028b7e) list_single_heading_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_heading_pane_fp

0xc743,	// (0x00028b7e) list_single_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_pane_fp

0xc75c,	// (0x00028b97) list_single_pane_fp_g1_ParamLimits

0xc75c,	// (0x00028b97) list_single_pane_fp_g1

0x5778,	// (0x00021bb3) list_single_pane_fp_g2_ParamLimits

0x5778,	// (0x00021bb3) list_single_pane_fp_g2

0x5784,	// (0x00021bbf) list_single_pane_fp_g3_ParamLimits

0x5784,	// (0x00021bbf) list_single_pane_fp_g3

0xc768,	// (0x00028ba3) list_single_pane_fp_g4_ParamLimits

0xc768,	// (0x00028ba3) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002bfb4) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002bfb4) list_single_pane_fp_g

0x5798,	// (0x00021bd3) list_single_pane_fp_t1_ParamLimits

0x5798,	// (0x00021bd3) list_single_pane_fp_t1

0x57af,	// (0x00021bea) list_single_graphic_pane_fp_g1_ParamLimits

0x57af,	// (0x00021bea) list_single_graphic_pane_fp_g1

0xc75c,	// (0x00028b97) list_single_graphic_pane_fp_g2_ParamLimits

0xc75c,	// (0x00028b97) list_single_graphic_pane_fp_g2

0x5778,	// (0x00021bb3) list_single_graphic_pane_fp_g3_ParamLimits

0x5778,	// (0x00021bb3) list_single_graphic_pane_fp_g3

0x5784,	// (0x00021bbf) list_single_graphic_pane_fp_g4_ParamLimits

0x5784,	// (0x00021bbf) list_single_graphic_pane_fp_g4

0xc768,	// (0x00028ba3) list_single_graphic_pane_fp_g5_ParamLimits

0xc768,	// (0x00028ba3) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bfbd) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bfbd) list_single_graphic_pane_fp_g

0x57bb,	// (0x00021bf6) list_single_graphic_pane_fp_t1_ParamLimits

0x57bb,	// (0x00021bf6) list_single_graphic_pane_fp_t1

0x57af,	// (0x00021bea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x57af,	// (0x00021bea) list_single_graphic_heading_pane_fp_g1

0xc75c,	// (0x00028b97) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc75c,	// (0x00028b97) list_single_graphic_heading_pane_fp_g2

0x5778,	// (0x00021bb3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5778,	// (0x00021bb3) list_single_graphic_heading_pane_fp_g3

0x5784,	// (0x00021bbf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5784,	// (0x00021bbf) list_single_graphic_heading_pane_fp_g4

0xc768,	// (0x00028ba3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc768,	// (0x00028ba3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bfbd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bfbd) list_single_graphic_heading_pane_fp_g

0x57d1,	// (0x00021c0c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57d1,	// (0x00021c0c) list_single_graphic_heading_pane_fp_t1

0x57e7,	// (0x00021c22) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57e7,	// (0x00021c22) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002bfc8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002bfc8) list_single_graphic_heading_pane_fp_t

0x57f9,	// (0x00021c34) list_single_cale_day_pane_fp_g1_ParamLimits

0x57f9,	// (0x00021c34) list_single_cale_day_pane_fp_g1

0xc774,	// (0x00028baf) list_single_cale_day_pane_fp_g2_ParamLimits

0xc774,	// (0x00028baf) list_single_cale_day_pane_fp_g2

0x5831,	// (0x00021c6c) list_single_cale_day_pane_fp_g3_ParamLimits

0x5831,	// (0x00021c6c) list_single_cale_day_pane_fp_g3

0x5859,	// (0x00021c94) list_single_cale_day_pane_fp_g4_ParamLimits

0x5859,	// (0x00021c94) list_single_cale_day_pane_fp_g4

0x587d,	// (0x00021cb8) list_single_cale_day_pane_fp_g5_ParamLimits

0x587d,	// (0x00021cb8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002bfcd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002bfcd) list_single_cale_day_pane_fp_g

0x58a1,	// (0x00021cdc) list_single_cale_day_pane_fp_t1_ParamLimits

0x58a1,	// (0x00021cdc) list_single_cale_day_pane_fp_t1

0x58c7,	// (0x00021d02) list_single_cale_day_pane_fp_t2_ParamLimits

0x58c7,	// (0x00021d02) list_single_cale_day_pane_fp_t2

0x58e0,	// (0x00021d1b) list_single_cale_day_pane_fp_t3_ParamLimits

0x58e0,	// (0x00021d1b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002bfd8) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002bfd8) list_single_cale_day_pane_fp_t

0xc75c,	// (0x00028b97) list_empty_pane_fp_g1_ParamLimits

0xc75c,	// (0x00028b97) list_empty_pane_fp_g1

0x58f9,	// (0x00021d34) list_empty_pane_fp_t1

0x5907,	// (0x00021d42) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002bfdf) list_empty_pane_fp_t

0xc75c,	// (0x00028b97) list_single_heading_pane_fp_g1_ParamLimits

0xc75c,	// (0x00028b97) list_single_heading_pane_fp_g1

0x5778,	// (0x00021bb3) list_single_heading_pane_fp_g2_ParamLimits

0x5778,	// (0x00021bb3) list_single_heading_pane_fp_g2

0x5784,	// (0x00021bbf) list_single_heading_pane_fp_g3_ParamLimits

0x5784,	// (0x00021bbf) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002bfe4) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002bfe4) list_single_heading_pane_fp_g

0x5915,	// (0x00021d50) list_single_heading_pane_fp_t1_ParamLimits

0x5915,	// (0x00021d50) list_single_heading_pane_fp_t1

0x5927,	// (0x00021d62) list_single_heading_pane_fp_t2_ParamLimits

0x5927,	// (0x00021d62) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002bfeb) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002bfeb) list_single_heading_pane_fp_t

0x818a,	// (0x000245c5) aid_size_cell_fast

0x6282,	// (0x000226bd) soft_indicator_pane_cp1_t1

0x81c7,	// (0x00024602) cell_app_pane_cp2_ParamLimits

0x81c7,	// (0x00024602) cell_app_pane_cp2

0x732d,	// (0x00023768) fep_hwr_candidate_drop_down_list_pane

0x12ff,	// (0x0001d73a) fep_hwr_candidate_pane_g3_ParamLimits

0x12ff,	// (0x0001d73a) fep_hwr_candidate_pane_g3

0x130c,	// (0x0001d747) fep_hwr_candidate_pane_g4_ParamLimits

0x130c,	// (0x0001d747) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002bf5f) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002bf5f) fep_hwr_candidate_pane_g

0xc208,	// (0x00028643) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc208,	// (0x00028643) fep_vkb_candidate_drop_down_list_pane

0xc630,	// (0x00028a6b) fep_vkb_candidate_pane_g3

0xc638,	// (0x00028a73) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002bf8c) fep_vkb_candidate_pane_g

0xc30e,	// (0x00028749) cell_hwr_candidate_pane_g1_ParamLimits

0xc64f,	// (0x00028a8a) cell_hwr_candidate_pane_g3_ParamLimits

0xc64f,	// (0x00028a8a) cell_hwr_candidate_pane_g3

0xc670,	// (0x00028aab) cell_hwr_candidate_pane_g4_ParamLimits

0xc670,	// (0x00028aab) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002bfa6) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002bfa6) cell_hwr_candidate_pane_g

0xc691,	// (0x00028acc) cell_vkb_candidate_pane_g3_ParamLimits

0xc691,	// (0x00028acc) cell_vkb_candidate_pane_g3

0xc6ac,	// (0x00028ae7) cell_vkb_candidate_pane_g4_ParamLimits

0xc6ac,	// (0x00028ae7) cell_vkb_candidate_pane_g4

0xc780,	// (0x00028bbb) cell_app_pane_cp2_g1_ParamLimits

0xc780,	// (0x00028bbb) cell_app_pane_cp2_g1

0xc79e,	// (0x00028bd9) cell_app_pane_cp2_g2_ParamLimits

0xc79e,	// (0x00028bd9) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002bff0) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002bff0) cell_app_pane_cp2_g

0xc7aa,	// (0x00028be5) cell_app_pane_cp2_t1_ParamLimits

0xc7aa,	// (0x00028be5) cell_app_pane_cp2_t1

0x7f75,	// (0x000243b0) grid_highlight_pane_cp1_ParamLimits

0x7f75,	// (0x000243b0) grid_highlight_pane_cp1

0x757f,	// (0x000239ba) cell_hwr_candidate_pane_cp1_ParamLimits

0x757f,	// (0x000239ba) cell_hwr_candidate_pane_cp1

0xc30e,	// (0x00028749) fep_hwr_candidate_drop_down_list_pane_g1

0xc7bc,	// (0x00028bf7) fep_hwr_candidate_drop_down_list_pane_g2

0xc7c9,	// (0x00028c04) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002bff5) fep_hwr_candidate_drop_down_list_pane_g

0x75a3,	// (0x000239de) fep_hwr_candidate_drop_down_list_scroll_pane

0x75ac,	// (0x000239e7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x75ac,	// (0x000239e7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x75b9,	// (0x000239f4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x75b9,	// (0x000239f4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x75c6,	// (0x00023a01) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x75c6,	// (0x00023a01) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc691,	// (0x00028acc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc691,	// (0x00028acc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6ac,	// (0x00028ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6ac,	// (0x00028ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x75d3,	// (0x00023a0e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x75d3,	// (0x00023a0e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x75ee,	// (0x00023a29) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x75ee,	// (0x00023a29) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7609,	// (0x00023a44) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7609,	// (0x00023a44) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002bffc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002bffc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7d6,	// (0x00028c11) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7d6,	// (0x00028c11) cell_vkb_candidate_pane_cp1

0xc30e,	// (0x00028749) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc30e,	// (0x00028749) fep_vkb_candidate_drop_down_list_pane_g1

0xc7bc,	// (0x00028bf7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7bc,	// (0x00028bf7) fep_vkb_candidate_drop_down_list_pane_g2

0xc7c9,	// (0x00028c04) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7c9,	// (0x00028c04) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002bff5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002bff5) fep_vkb_candidate_drop_down_list_pane_g

0xc7fc,	// (0x00028c37) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7fc,	// (0x00028c37) fep_vkb_candidate_drop_down_list_scroll_pane

0xc809,	// (0x00028c44) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc809,	// (0x00028c44) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc816,	// (0x00028c51) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc816,	// (0x00028c51) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc822,	// (0x00028c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc822,	// (0x00028c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc64f,	// (0x00028a8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc64f,	// (0x00028a8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc670,	// (0x00028aab) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc670,	// (0x00028aab) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc82e,	// (0x00028c69) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc82e,	// (0x00028c69) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc84f,	// (0x00028c8a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc84f,	// (0x00028c8a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc870,	// (0x00028cab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc870,	// (0x00028cab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002c00d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002c00d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5f2c,	// (0x00022367) title_pane_g1_ParamLimits

0x5f39,	// (0x00022374) title_pane_g2_ParamLimits

0xf566,	// (0x0002b9a1) title_pane_g_ParamLimits

0x85d5,	// (0x00024a10) aid_call2_pane

0x85dd,	// (0x00024a18) aid_call_pane

0x85e5,	// (0x00024a20) popup_clock_analogue_window_g1

0x85e5,	// (0x00024a20) popup_clock_analogue_window_g2

0x6a7e,	// (0x00022eb9) popup_clock_analogue_window_g3

0x6a87,	// (0x00022ec2) popup_clock_analogue_window_g4

0x36cc,	// (0x0001fb07) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x0002bb4b) popup_clock_analogue_window_g

0x6a8f,	// (0x00022eca) popup_clock_analogue_window_t1

0x6a9d,	// (0x00022ed8) clock_digital_number_pane_ParamLimits

0x6a9d,	// (0x00022ed8) clock_digital_number_pane

0x6aa9,	// (0x00022ee4) clock_digital_number_pane_cp02_ParamLimits

0x6aa9,	// (0x00022ee4) clock_digital_number_pane_cp02

0x6ab5,	// (0x00022ef0) clock_digital_number_pane_cp03_ParamLimits

0x6ab5,	// (0x00022ef0) clock_digital_number_pane_cp03

0x6ac1,	// (0x00022efc) clock_digital_number_pane_cp04_ParamLimits

0x6ac1,	// (0x00022efc) clock_digital_number_pane_cp04

0x6acd,	// (0x00022f08) clock_digital_separator_pane_ParamLimits

0x6acd,	// (0x00022f08) clock_digital_separator_pane

0x6ad9,	// (0x00022f14) popup_clock_digital_window_t1_ParamLimits

0x6ad9,	// (0x00022f14) popup_clock_digital_window_t1

0x36cc,	// (0x0001fb07) clock_digital_number_pane_g1

0x36cc,	// (0x0001fb07) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x0002bb56) clock_digital_number_pane_g

0x36cc,	// (0x0001fb07) clock_digital_separator_pane_g1

0x36cc,	// (0x0001fb07) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x0002bb56) clock_digital_separator_pane_g

0x95b7,	// (0x000259f2) aid_fill_nsta_ParamLimits

0x9707,	// (0x00025b42) indicator_nsta_pane_ParamLimits

0x9898,	// (0x00025cd3) popup_clock_analogue_window

0x9898,	// (0x00025cd3) popup_clock_digital_window

0x5ff6,	// (0x00022431) grid_indicator_nsta_pane_ParamLimits

0xbb1f,	// (0x00027f5a) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002bedf) clock_nsta_pane_t

0x6a42,	// (0x00022e7d) aid_size_max_handle

0x6a4c,	// (0x00022e87) aid_size_min_handle

0x8bfe,	// (0x00025039) editor_scroll_pane

0xc88b,	// (0x00028cc6) ex_editor_pane

0x80f7,	// (0x00024532) scroll_pane_cp13

0x68ac,	// (0x00022ce7) scroll_pane_cp14

0x8614,	// (0x00024a4f) scroll_pane_cp36

0x8642,	// (0x00024a7d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8642,	// (0x00024a7d) list_single_graphic_hl_pane_cp2

0x54da,	// (0x00021915) list_single_graphic_hl_pane_ParamLimits

0x54da,	// (0x00021915) list_single_graphic_hl_pane

0x593d,	// (0x00021d78) aid_size_min_hl_cp1

0xc893,	// (0x00028cce) list_highlight_pane_cp34_ParamLimits

0xc893,	// (0x00028cce) list_highlight_pane_cp34

0xc8a4,	// (0x00028cdf) list_single_graphic_hl_pane_g1_ParamLimits

0xc8a4,	// (0x00028cdf) list_single_graphic_hl_pane_g1

0x5946,	// (0x00021d81) list_single_graphic_hl_pane_g2_ParamLimits

0x5946,	// (0x00021d81) list_single_graphic_hl_pane_g2

0x5946,	// (0x00021d81) list_single_graphic_hl_pane_g3_ParamLimits

0x5946,	// (0x00021d81) list_single_graphic_hl_pane_g3

0x535e,	// (0x00021799) list_single_graphic_hl_pane_g4_ParamLimits

0x535e,	// (0x00021799) list_single_graphic_hl_pane_g4

0x5952,	// (0x00021d8d) list_single_graphic_hl_pane_g5_ParamLimits

0x5952,	// (0x00021d8d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002c01e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002c01e) list_single_graphic_hl_pane_g

0x5966,	// (0x00021da1) list_single_graphic_hl_pane_t1_ParamLimits

0x5966,	// (0x00021da1) list_single_graphic_hl_pane_t1

0xc8b1,	// (0x00028cec) aid_size_min_hl_cp2

0xc8ba,	// (0x00028cf5) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ba,	// (0x00028cf5) list_highlight_pane_cp34_cp2

0xc8a4,	// (0x00028cdf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8a4,	// (0x00028cdf) list_single_graphic_hl_pane_g1_cp2

0xc8c7,	// (0x00028d02) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8c7,	// (0x00028d02) list_single_graphic_hl_pane_g2_cp2

0xc8d3,	// (0x00028d0e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8d3,	// (0x00028d0e) list_single_graphic_hl_pane_g3_cp2

0x7624,	// (0x00023a5f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7624,	// (0x00023a5f) list_single_graphic_hl_pane_g4_cp2

0xc8e1,	// (0x00028d1c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8e1,	// (0x00028d1c) list_single_graphic_hl_pane_g5_cp2

0x6d92,	// (0x000231cd) control_pane_g4_ParamLimits

0x6d92,	// (0x000231cd) control_pane_g4

0x8f84,	// (0x000253bf) bg_popup_sub_pane_cp10_ParamLimits

0xc08e,	// (0x000284c9) list_choice_list_pane_ParamLimits

0xc09d,	// (0x000284d8) scroll_pane_cp23

0x6310,	// (0x0002274b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6fd,	// (0x00028b38) list_preview_fixed_pane_ParamLimits

0xc713,	// (0x00028b4e) list_preview_fixed_pane_cp_ParamLimits

0xc713,	// (0x00028b4e) list_preview_fixed_pane_cp

0xc71f,	// (0x00028b5a) popup_preview_fixed_window_g1_ParamLimits

0xc71f,	// (0x00028b5a) popup_preview_fixed_window_g1

0xc72b,	// (0x00028b66) popup_preview_fixed_window_g2_ParamLimits

0xc72b,	// (0x00028b66) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002bfad) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002bfad) popup_preview_fixed_window_g

0x69b4,	// (0x00022def) aid_navi_side_left_pane_ParamLimits

0x69c9,	// (0x00022e04) aid_navi_side_right_pane_ParamLimits

0x69e1,	// (0x00022e1c) navi_icon_pane_stacon_ParamLimits

0x69f5,	// (0x00022e30) navi_navi_pane_stacon_ParamLimits

0x69e1,	// (0x00022e1c) navi_text_pane_stacon_ParamLimits

0x36c2,	// (0x0001fafd) main_text_info_pane

0xc90b,	// (0x00028d46) listscroll_text_info_pane

0xc913,	// (0x00028d4e) list_text_info_pane_ParamLimits

0xc913,	// (0x00028d4e) list_text_info_pane

0xc922,	// (0x00028d5d) scroll_pane_cp24_ParamLimits

0xc922,	// (0x00028d5d) scroll_pane_cp24

0xc940,	// (0x00028d7b) list_text_info_pane_t1_ParamLimits

0xc940,	// (0x00028d7b) list_text_info_pane_t1

0x8fca,	// (0x00025405) popup_fast_swap2_window_ParamLimits

0x8fca,	// (0x00025405) popup_fast_swap2_window

0xc965,	// (0x00028da0) aid_size_cell_fast2

0x36c2,	// (0x0001fafd) bg_popup_window_pane_cp17

0x9f1f,	// (0x0002635a) heading_pane_cp2

0x6570,	// (0x000229ab) listscroll_fast2_pane

0xc96f,	// (0x00028daa) grid_fast2_pane

0xc979,	// (0x00028db4) listscroll_fast2_pane_g1

0xc983,	// (0x00028dbe) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002c029) listscroll_fast2_pane_g

0x80f7,	// (0x00024532) scroll_pane_cp26

0xc98d,	// (0x00028dc8) cell_fast2_pane_ParamLimits

0xc98d,	// (0x00028dc8) cell_fast2_pane

0xc9a4,	// (0x00028ddf) cell_fast2_pane_g1

0xc9ad,	// (0x00028de8) cell_fast2_pane_g2

0xc9b6,	// (0x00028df1) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002c02e) cell_fast2_pane_g

0x6669,	// (0x00022aa4) grid_highlight_pane_cp9

0x667e,	// (0x00022ab9) main_eswt_pane_ParamLimits

0x667e,	// (0x00022ab9) main_eswt_pane

0xc937,	// (0x00028d72) list_single_text_info_pane

0xc9be,	// (0x00028df9) eswt_ctrl_button_pane

0xc9be,	// (0x00028df9) eswt_ctrl_canvas_pane

0xc9c6,	// (0x00028e01) eswt_ctrl_combo_pane

0xc9be,	// (0x00028df9) eswt_ctrl_default_pane

0xc9be,	// (0x00028df9) eswt_ctrl_label_pane

0xc9ce,	// (0x00028e09) eswt_ctrl_wait_pane

0xc9d6,	// (0x00028e11) eswt_shell_pane

0x36c2,	// (0x0001fafd) listscroll_eswt_app_pane

0xc9f6,	// (0x00028e31) popup_eswt_tasktip_window_ParamLimits

0xc9f6,	// (0x00028e31) popup_eswt_tasktip_window

0x9bb3,	// (0x00025fee) bg_popup_window_pane_cp18

0xca07,	// (0x00028e42) eswt_control_pane_g1_ParamLimits

0xca07,	// (0x00028e42) eswt_control_pane_g1

0xca14,	// (0x00028e4f) eswt_control_pane_g2_ParamLimits

0xca14,	// (0x00028e4f) eswt_control_pane_g2

0xca21,	// (0x00028e5c) eswt_control_pane_g3_ParamLimits

0xca21,	// (0x00028e5c) eswt_control_pane_g3

0xca2e,	// (0x00028e69) eswt_control_pane_g4_ParamLimits

0xca2e,	// (0x00028e69) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002c035) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002c035) eswt_control_pane_g

0x7f75,	// (0x000243b0) bg_button_pane_ParamLimits

0x7f75,	// (0x000243b0) bg_button_pane

0x667e,	// (0x00022ab9) common_borders_pane_copy2_ParamLimits

0x667e,	// (0x00022ab9) common_borders_pane_copy2

0xca3b,	// (0x00028e76) control_button_pane_g1_ParamLimits

0xca3b,	// (0x00028e76) control_button_pane_g1

0xca47,	// (0x00028e82) control_button_pane_g2_ParamLimits

0xca47,	// (0x00028e82) control_button_pane_g2

0xca53,	// (0x00028e8e) control_button_pane_g3_ParamLimits

0xca53,	// (0x00028e8e) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002c03e) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002c03e) control_button_pane_g

0xca67,	// (0x00028ea2) control_button_pane_t1

0xca75,	// (0x00028eb0) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002c045) control_button_pane_t

0x9ac1,	// (0x00025efc) bg_button_pane_g1

0x9ac9,	// (0x00025f04) bg_button_pane_g2

0x9ad1,	// (0x00025f0c) bg_button_pane_g3

0x9ad9,	// (0x00025f14) bg_button_pane_g4

0x9ae1,	// (0x00025f1c) bg_button_pane_g5

0x9ae9,	// (0x00025f24) bg_button_pane_g6

0x9af1,	// (0x00025f2c) bg_button_pane_g7

0x9af9,	// (0x00025f34) bg_button_pane_g8

0x9b01,	// (0x00025f3c) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002bcb2) bg_button_pane_g

0xc049,	// (0x00028484) common_borders_pane_ParamLimits

0xc049,	// (0x00028484) common_borders_pane

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy1_ParamLimits

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy1

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy1_ParamLimits

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy1

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy1_ParamLimits

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy1

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy1_ParamLimits

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy1

0xc084,	// (0x000284bf) bg_eswt_ctrl_canvas_pane_g1

0xc049,	// (0x00028484) common_borders_pane_cp2_ParamLimits

0xc049,	// (0x00028484) common_borders_pane_cp2

0xc049,	// (0x00028484) common_borders_pane_cp3_ParamLimits

0xc049,	// (0x00028484) common_borders_pane_cp3

0xca83,	// (0x00028ebe) separator_horizontal_pane

0xca8b,	// (0x00028ec6) separator_vertical_pane

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy2_ParamLimits

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy2

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy2_ParamLimits

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy2

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy2_ParamLimits

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy2

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy2_ParamLimits

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy2

0x36c2,	// (0x0001fafd) common_borders_pane_cp4

0xca94,	// (0x00028ecf) separator_horizontal_pane_g1

0xca9d,	// (0x00028ed8) separator_horizontal_pane_g2

0xcaa6,	// (0x00028ee1) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002c04a) separator_horizontal_pane_g

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy3_ParamLimits

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy3

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy3_ParamLimits

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy3

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy3_ParamLimits

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy3

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy3_ParamLimits

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy3

0x36c2,	// (0x0001fafd) common_borders_pane_cp5

0xcaaf,	// (0x00028eea) separator_vertical_pane_g1

0xcab8,	// (0x00028ef3) separator_vertical_pane_g2

0xcac1,	// (0x00028efc) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002c051) separator_vertical_pane_g

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy4_ParamLimits

0xca07,	// (0x00028e42) eswt_control_pane_g1_copy4

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy4_ParamLimits

0xca14,	// (0x00028e4f) eswt_control_pane_g2_copy4

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy4_ParamLimits

0xca21,	// (0x00028e5c) eswt_control_pane_g3_copy4

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy4_ParamLimits

0xca2e,	// (0x00028e69) eswt_control_pane_g4_copy4

0xcaca,	// (0x00028f05) eswt_ctrl_combo_button_pane

0xcad2,	// (0x00028f0d) eswt_ctrl_input_pane

0xcada,	// (0x00028f15) popup_choice_list_window_cp70

0xcae2,	// (0x00028f1d) eswt_ctrl_input_pane_t1

0x36c2,	// (0x0001fafd) input_focus_pane_cp70

0xc049,	// (0x00028484) bg_button_pane_cp70_ParamLimits

0xc049,	// (0x00028484) bg_button_pane_cp70

0xcaf0,	// (0x00028f2b) eswt_ctrl_combo_button_pane_g1

0xcaf8,	// (0x00028f33) wait_bar_pane_cp70

0x9bb3,	// (0x00025fee) bg_popup_window_pane_cp70_ParamLimits

0x9bb3,	// (0x00025fee) bg_popup_window_pane_cp70

0xcb00,	// (0x00028f3b) popup_eswt_tasktip_window_t1

0xcb16,	// (0x00028f51) wait_bar_pane_cp71_ParamLimits

0xcb16,	// (0x00028f51) wait_bar_pane_cp71

0xcb22,	// (0x00028f5d) grid_eswt_app_pane

0x8422,	// (0x0002485d) scroll_pane_cp70

0xcb2b,	// (0x00028f66) cell_eswt_app_pane_ParamLimits

0xcb2b,	// (0x00028f66) cell_eswt_app_pane

0xcb5d,	// (0x00028f98) cell_eswt_app_pane_g1_ParamLimits

0xcb5d,	// (0x00028f98) cell_eswt_app_pane_g1

0xcb8c,	// (0x00028fc7) cell_eswt_app_pane_g2_ParamLimits

0xcb8c,	// (0x00028fc7) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002c058) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002c058) cell_eswt_app_pane_g

0xcbb5,	// (0x00028ff0) cell_eswt_app_pane_t1_ParamLimits

0xcbb5,	// (0x00028ff0) cell_eswt_app_pane_t1

0xcbe7,	// (0x00029022) grid_highlight_pane_cp70_ParamLimits

0xcbe7,	// (0x00029022) grid_highlight_pane_cp70

0xb018,	// (0x00027453) set_content_pane_g1

0x8eae,	// (0x000252e9) status_small_volume_pane

0x7630,	// (0x00023a6b) status_small_volume_pane_g1

0x7638,	// (0x00023a73) volume_small2_pane

0x7641,	// (0x00023a7c) volume_small2_pane_g1

0x764a,	// (0x00023a85) volume_small2_pane_g2

0x7653,	// (0x00023a8e) volume_small2_pane_g3

0x765c,	// (0x00023a97) volume_small2_pane_g4

0x7665,	// (0x00023aa0) volume_small2_pane_g5

0x766e,	// (0x00023aa9) volume_small2_pane_g6

0x7677,	// (0x00023ab2) volume_small2_pane_g7

0x7680,	// (0x00023abb) volume_small2_pane_g8

0x7689,	// (0x00023ac4) volume_small2_pane_g9

0x7692,	// (0x00023acd) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002c05d) volume_small2_pane_g

0xc462,	// (0x0002889d) fep_vkb_top_text_pane_g1_ParamLimits

0xc47d,	// (0x000288b8) fep_vkb_top_text_pane_t1_ParamLimits

0xc737,	// (0x00028b72) popup_preview_fixed_window_g3_ParamLimits

0xc737,	// (0x00028b72) popup_preview_fixed_window_g3

0x94db,	// (0x00025916) popup_toolbar_trans_pane

0xaebd,	// (0x000272f8) aid_height_set_list_ParamLimits

0xaece,	// (0x00027309) aid_size_parent_ParamLimits

0x8f84,	// (0x000253bf) list_highlight_pane_cp2_ParamLimits

0xb018,	// (0x00027453) set_content_pane_g1_ParamLimits

0xb121,	// (0x0002755c) list_single_image_pane_ParamLimits

0xb121,	// (0x0002755c) list_single_image_pane

0xcbf3,	// (0x0002902e) aid_size_cell_image_ParamLimits

0xcbf3,	// (0x0002902e) aid_size_cell_image

0xcc00,	// (0x0002903b) grid_single_image_pane_ParamLimits

0xcc00,	// (0x0002903b) grid_single_image_pane

0x7f8f,	// (0x000243ca) list_single_image_pane_g1_ParamLimits

0x7f8f,	// (0x000243ca) list_single_image_pane_g1

0x7f9b,	// (0x000243d6) list_single_image_pane_g2_ParamLimits

0x7f9b,	// (0x000243d6) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002c072) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002c072) list_single_image_pane_g

0xcc0e,	// (0x00029049) list_single_image_pane_t1_ParamLimits

0xcc0e,	// (0x00029049) list_single_image_pane_t1

0xcc24,	// (0x0002905f) cell_image_list_pane_ParamLimits

0xcc24,	// (0x0002905f) cell_image_list_pane

0xcc3a,	// (0x00029075) cell_image_list_pane_g1

0xcc43,	// (0x0002907e) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002c077) cell_image_list_pane_g

0xcc4c,	// (0x00029087) aid_size_cell_tb_trans_pane

0x7f75,	// (0x000243b0) bg_tb_trans_pane

0xcc5e,	// (0x00029099) grid_tb_trans_pane

0x9ac1,	// (0x00025efc) bg_tb_trans_pane_g1

0x9ac9,	// (0x00025f04) bg_tb_trans_pane_g2

0x9ad1,	// (0x00025f0c) bg_tb_trans_pane_g3

0x9ad9,	// (0x00025f14) bg_tb_trans_pane_g4

0x9ae1,	// (0x00025f1c) bg_tb_trans_pane_g5

0x9af9,	// (0x00025f34) bg_tb_trans_pane_g6

0x9b01,	// (0x00025f3c) bg_tb_trans_pane_g7

0x9ae9,	// (0x00025f24) bg_tb_trans_pane_g8

0x9af1,	// (0x00025f2c) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002c07c) bg_tb_trans_pane_g

0xcc72,	// (0x000290ad) cell_toolbar_trans_pane_ParamLimits

0xcc72,	// (0x000290ad) cell_toolbar_trans_pane

0xc084,	// (0x000284bf) cell_toolbar_trans_pane_g1

0xbd1b,	// (0x00028156) list_form2_midp_pane_t1

0xbd29,	// (0x00028164) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002bf25) list_form2_midp_pane_t

0xbd37,	// (0x00028172) scroll_pane_cp51_ParamLimits

0xbee6,	// (0x00028321) form2_midp_wait_pane_g1

0xbeef,	// (0x0002832a) form2_midp_wait_pane_g2

0xbef8,	// (0x00028333) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002bf3a) form2_midp_wait_pane_g

0x5ff6,	// (0x00022431) list_highlight_pane_cp21_ParamLimits

0xbf29,	// (0x00028364) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf38,	// (0x00028373) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb0da,	// (0x00027515) list_single_2graphic_im_pane_ParamLimits

0xb0da,	// (0x00027515) list_single_2graphic_im_pane

0xcc98,	// (0x000290d3) list_single_2graphic_im_pane_g1_ParamLimits

0xcc98,	// (0x000290d3) list_single_2graphic_im_pane_g1

0xcca9,	// (0x000290e4) list_single_2graphic_im_pane_g2_ParamLimits

0xcca9,	// (0x000290e4) list_single_2graphic_im_pane_g2

0xccb5,	// (0x000290f0) list_single_2graphic_im_pane_g3_ParamLimits

0xccb5,	// (0x000290f0) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002c08f) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002c08f) list_single_2graphic_im_pane_g

0xccd5,	// (0x00029110) list_single_2graphic_im_pane_t1_ParamLimits

0xccd5,	// (0x00029110) list_single_2graphic_im_pane_t1

0xc743,	// (0x00028b7e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc743,	// (0x00028b7e) list_single_graphic_2heading_pane_fp

0x57af,	// (0x00021bea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x57af,	// (0x00021bea) list_single_graphic_2heading_pane_fp_g1

0xc75c,	// (0x00028b97) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc75c,	// (0x00028b97) list_single_graphic_2heading_pane_fp_g2

0x5778,	// (0x00021bb3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5778,	// (0x00021bb3) list_single_graphic_2heading_pane_fp_g3

0x5784,	// (0x00021bbf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5784,	// (0x00021bbf) list_single_graphic_2heading_pane_fp_g4

0xc768,	// (0x00028ba3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc768,	// (0x00028ba3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bfbd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bfbd) list_single_graphic_2heading_pane_fp_g

0x597c,	// (0x00021db7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x597c,	// (0x00021db7) list_single_graphic_2heading_pane_fp_t1

0x57e7,	// (0x00021c22) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57e7,	// (0x00021c22) list_single_graphic_2heading_pane_fp_t2

0x5992,	// (0x00021dcd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5992,	// (0x00021dcd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002c098) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002c098) list_single_graphic_2heading_pane_fp_t

0xc124,	// (0x0002855f) fep_hwr_write_pane_g5_ParamLimits

0xc124,	// (0x0002855f) fep_hwr_write_pane_g5

0xc130,	// (0x0002856b) fep_hwr_write_pane_g6_ParamLimits

0xc130,	// (0x0002856b) fep_hwr_write_pane_g6

0xc9d6,	// (0x00028e11) eswt_shell_pane_ParamLimits

0x9bb3,	// (0x00025fee) bg_popup_window_pane_cp18_ParamLimits

0xae14,	// (0x0002724f) heading_pane_cp70

0xcb00,	// (0x00028f3b) popup_eswt_tasktip_window_t1_ParamLimits

0x960e,	// (0x00025a49) aid_touch_tab_arrow_left

0x961d,	// (0x00025a58) aid_touch_tab_arrow_right

0x5f4a,	// (0x00022385) title_pane_g3_ParamLimits

0x5f4a,	// (0x00022385) title_pane_g3

0x7f34,	// (0x0002436f) set_value_pane_g1

0x94db,	// (0x00025916) popup_toolbar_trans_pane_ParamLimits

0xcc4c,	// (0x00029087) aid_size_cell_tb_trans_pane_ParamLimits

0x7f75,	// (0x000243b0) bg_tb_trans_pane_ParamLimits

0xcc5e,	// (0x00029099) grid_tb_trans_pane_ParamLimits

0x6310,	// (0x0002274b) cont_note_pane_ParamLimits

0x6310,	// (0x0002274b) cont_note_pane

0x667e,	// (0x00022ab9) cont_snote2_single_text_pane_ParamLimits

0x667e,	// (0x00022ab9) cont_snote2_single_text_pane

0x667e,	// (0x00022ab9) cont_snote2_single_graphic_pane_ParamLimits

0x667e,	// (0x00022ab9) cont_snote2_single_graphic_pane

0xa13b,	// (0x00026576) cont_note_wait_pane_ParamLimits

0xa13b,	// (0x00026576) cont_note_wait_pane

0xa13b,	// (0x00026576) cont_note_image_pane_ParamLimits

0xa13b,	// (0x00026576) cont_note_image_pane

0xcd06,	// (0x00029141) popup_note2_window_g1_ParamLimits

0xcd06,	// (0x00029141) popup_note2_window_g1

0xcd37,	// (0x00029172) popup_note2_window_t1_ParamLimits

0xcd37,	// (0x00029172) popup_note2_window_t1

0xcd7c,	// (0x000291b7) popup_note2_window_t2_ParamLimits

0xcd7c,	// (0x000291b7) popup_note2_window_t2

0xcdc1,	// (0x000291fc) popup_note2_window_t3_ParamLimits

0xcdc1,	// (0x000291fc) popup_note2_window_t3

0xce06,	// (0x00029241) popup_note2_window_t4_ParamLimits

0xce06,	// (0x00029241) popup_note2_window_t4

0x6394,	// (0x000227cf) popup_note2_window_t5_ParamLimits

0x6394,	// (0x000227cf) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002c0a4) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002c0a4) popup_note2_window_t

0xce35,	// (0x00029270) popup_note2_image_window_g1_ParamLimits

0xce35,	// (0x00029270) popup_note2_image_window_g1

0xce41,	// (0x0002927c) popup_note2_image_window_g2_ParamLimits

0xce41,	// (0x0002927c) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002c0af) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002c0af) popup_note2_image_window_g

0xce53,	// (0x0002928e) popup_note2_image_window_t1_ParamLimits

0xce53,	// (0x0002928e) popup_note2_image_window_t1

0xce6b,	// (0x000292a6) popup_note2_image_window_t2_ParamLimits

0xce6b,	// (0x000292a6) popup_note2_image_window_t2

0xce83,	// (0x000292be) popup_note2_image_window_t3_ParamLimits

0xce83,	// (0x000292be) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002c0b4) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002c0b4) popup_note2_image_window_t

0xa149,	// (0x00026584) popup_note2_wait_window_g1_ParamLimits

0xa149,	// (0x00026584) popup_note2_wait_window_g1

0xce9f,	// (0x000292da) popup_note2_wait_window_g2_ParamLimits

0xce9f,	// (0x000292da) popup_note2_wait_window_g2

0xa161,	// (0x0002659c) popup_note2_wait_window_g3_ParamLimits

0xa161,	// (0x0002659c) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002c0bb) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002c0bb) popup_note2_wait_window_g

0xceab,	// (0x000292e6) popup_note2_wait_window_t1_ParamLimits

0xceab,	// (0x000292e6) popup_note2_wait_window_t1

0xcec9,	// (0x00029304) popup_note2_wait_window_t2_ParamLimits

0xcec9,	// (0x00029304) popup_note2_wait_window_t2

0xcee7,	// (0x00029322) popup_note2_wait_window_t3_ParamLimits

0xcee7,	// (0x00029322) popup_note2_wait_window_t3

0xcef9,	// (0x00029334) popup_note2_wait_window_t4_ParamLimits

0xcef9,	// (0x00029334) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002c0c2) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002c0c2) popup_note2_wait_window_t

0xcf0b,	// (0x00029346) wait_bar2_pane_ParamLimits

0xcf0b,	// (0x00029346) wait_bar2_pane

0xcf23,	// (0x0002935e) popup_snote2_single_text_window_g1_ParamLimits

0xcf23,	// (0x0002935e) popup_snote2_single_text_window_g1

0xcf4b,	// (0x00029386) popup_snote2_single_text_window_t1_ParamLimits

0xcf4b,	// (0x00029386) popup_snote2_single_text_window_t1

0xcf97,	// (0x000293d2) popup_snote2_single_text_window_t2_ParamLimits

0xcf97,	// (0x000293d2) popup_snote2_single_text_window_t2

0xcfe3,	// (0x0002941e) popup_snote2_single_text_window_t3_ParamLimits

0xcfe3,	// (0x0002941e) popup_snote2_single_text_window_t3

0xd024,	// (0x0002945f) popup_snote2_single_text_window_t4_ParamLimits

0xd024,	// (0x0002945f) popup_snote2_single_text_window_t4

0xd05a,	// (0x00029495) popup_snote2_single_text_window_t5_ParamLimits

0xd05a,	// (0x00029495) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002c0cb) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002c0cb) popup_snote2_single_text_window_t

0xd085,	// (0x000294c0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd085,	// (0x000294c0) popup_snote2_single_graphic_window_g1

0xd0ad,	// (0x000294e8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0ad,	// (0x000294e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002c0d6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002c0d6) popup_snote2_single_graphic_window_g

0xd0d5,	// (0x00029510) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0d5,	// (0x00029510) popup_snote2_single_graphic_window_t1

0xd121,	// (0x0002955c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd121,	// (0x0002955c) popup_snote2_single_graphic_window_t2

0xcfe3,	// (0x0002941e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfe3,	// (0x0002941e) popup_snote2_single_graphic_window_t3

0xd024,	// (0x0002945f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd024,	// (0x0002945f) popup_snote2_single_graphic_window_t4

0xd05a,	// (0x00029495) popup_snote2_single_graphic_window_t5_ParamLimits

0xd05a,	// (0x00029495) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002c0db) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002c0db) popup_snote2_single_graphic_window_t

0xbbe1,	// (0x0002801c) clock_nsta_pane_cp2_t1

0xbbe1,	// (0x0002801c) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002befb) clock_nsta_pane_cp2_t

0x513a,	// (0x00021575) form_field_data_wide_pane_g1_ParamLimits

0x7f8f,	// (0x000243ca) form_field_data_wide_pane_g2_ParamLimits

0x7f8f,	// (0x000243ca) form_field_data_wide_pane_g2

0x7f9b,	// (0x000243d6) form_field_data_wide_pane_g3_ParamLimits

0x7f9b,	// (0x000243d6) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x0002bace) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x0002bace) form_field_data_wide_pane_g

0xbabb,	// (0x00027ef6) grid_touch_3_pane_ParamLimits

0xbabb,	// (0x00027ef6) grid_touch_3_pane

0xd16d,	// (0x000295a8) cell_touch_3_pane_ParamLimits

0xd16d,	// (0x000295a8) cell_touch_3_pane

0xc084,	// (0x000284bf) cell_touch_3_pane_g1

0xc084,	// (0x000284bf) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002bf80) cell_touch_3_pane_g

0x63c6,	// (0x00022801) cont_query_data_pane

0x63ce,	// (0x00022809) cont_query_data_pane_cp1

0xd1a0,	// (0x000295db) button_value_adjust_pane_cp7

0xd1a8,	// (0x000295e3) query_popup_pane_cp3

0x86da,	// (0x00024b15) bg_popup_sub_pane_cp22_ParamLimits

0x6af8,	// (0x00022f33) navi_navi_volume_pane_cp2

0x6b13,	// (0x00022f4e) popup_side_volume_key_window_g2

0x6b22,	// (0x00022f5d) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002bb64) popup_side_volume_key_window_g

0x6b3f,	// (0x00022f7a) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002bb6b) popup_side_volume_key_window_t

0x8995,	// (0x00024dd0) popup_side_volume_key_window_ParamLimits

0x4d32,	// (0x0002116d) list_double_graphic_pane_g4_ParamLimits

0x4d32,	// (0x0002116d) list_double_graphic_pane_g4

0xb109,	// (0x00027544) list_single_2heading_msg_pane_ParamLimits

0xb109,	// (0x00027544) list_single_2heading_msg_pane

0x59b2,	// (0x00021ded) list_single_2heading_msg_pane_g1_ParamLimits

0x59b2,	// (0x00021ded) list_single_2heading_msg_pane_g1

0x4b8f,	// (0x00020fca) list_single_2heading_msg_pane_g2_ParamLimits

0x4b8f,	// (0x00020fca) list_single_2heading_msg_pane_g2

0x59be,	// (0x00021df9) list_single_2heading_msg_pane_g3_ParamLimits

0x59be,	// (0x00021df9) list_single_2heading_msg_pane_g3

0x59ca,	// (0x00021e05) list_single_2heading_msg_pane_g4_ParamLimits

0x59ca,	// (0x00021e05) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002c0e6) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002c0e6) list_single_2heading_msg_pane_g

0x59e2,	// (0x00021e1d) list_single_2heading_msg_pane_t1_ParamLimits

0x59e2,	// (0x00021e1d) list_single_2heading_msg_pane_t1

0x5a0a,	// (0x00021e45) list_single_2heading_msg_pane_t2_ParamLimits

0x5a0a,	// (0x00021e45) list_single_2heading_msg_pane_t2

0x5a3e,	// (0x00021e79) list_single_2heading_msg_pane_t3_ParamLimits

0x5a3e,	// (0x00021e79) list_single_2heading_msg_pane_t3

0x5a77,	// (0x00021eb2) list_single_2heading_msg_pane_t4_ParamLimits

0x5a77,	// (0x00021eb2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002c0ef) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002c0ef) list_single_2heading_msg_pane_t

0x3859,	// (0x0001fc94) title_pane_g4_ParamLimits

0x3859,	// (0x0001fc94) title_pane_g4

0x6904,	// (0x00022d3f) title_pane_stacon_g3_ParamLimits

0x6904,	// (0x00022d3f) title_pane_stacon_g3

0xccc9,	// (0x00029104) list_single_2graphic_im_pane_g4_ParamLimits

0xccc9,	// (0x00029104) list_single_2graphic_im_pane_g4

0xabb1,	// (0x00026fec) popup_side_volume_key_window_cp

0xb427,	// (0x00027862) main_idle_act2_pane_t1

0x6ebe,	// (0x000232f9) toolbar_button_pane_g10

0x6876,	// (0x00022cb1) popup_toolbar_window_cp1

0xbbd2,	// (0x0002800d) clock_nsta_pane_cp_t1

0xbbd2,	// (0x0002800d) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002bef6) clock_nsta_pane_cp_t

0x6af8,	// (0x00022f33) navi_navi_volume_pane_cp2_ParamLimits

0x6b07,	// (0x00022f42) popup_side_volume_key_window_g1_ParamLimits

0x6b13,	// (0x00022f4e) popup_side_volume_key_window_g2_ParamLimits

0x6b22,	// (0x00022f5d) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002bb64) popup_side_volume_key_window_g_ParamLimits

0x7319,	// (0x00023754) fep_hwr_aid_pane

0x12f1,	// (0x0001d72c) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0f4,	// (0x0002852f) fep_hwr_top_pane_g1_ParamLimits

0xc106,	// (0x00028541) fep_hwr_top_pane_g2_ParamLimits

0x73d4,	// (0x0002380f) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002bf4b) fep_hwr_top_pane_g_ParamLimits

0x73e9,	// (0x00023824) fep_hwr_top_text_pane_ParamLimits

0xa966,	// (0x00026da1) aid_touch_tab_arrow_arrow_2

0xa96f,	// (0x00026daa) aid_touch_tab_arrow_left_2

0x732d,	// (0x00023768) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7364,	// (0x0002379f) fep_hwr_prediction_pane

0xc25c,	// (0x00028697) fep_vkb_prediction_pane

0xc362,	// (0x0002879d) fep_vkb_side_pane_g3_ParamLimits

0xc362,	// (0x0002879d) fep_vkb_side_pane_g3

0xc30e,	// (0x00028749) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7bc,	// (0x00028bf7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7c9,	// (0x00028c04) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002bff5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1cf,	// (0x0002960a) fep_hwr_prediction_pane_g1

0x769b,	// (0x00023ad6) fep_hwr_prediction_pane_g2

0x76a3,	// (0x00023ade) fep_hwr_prediction_pane_g3

0x76ab,	// (0x00023ae6) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002c0f8) fep_hwr_prediction_pane_g

0xd1cf,	// (0x0002960a) fep_vkb_prediction_pane_g1

0xd1d9,	// (0x00029614) fep_vkb_prediction_pane_g2

0xd1e1,	// (0x0002961c) fep_vkb_prediction_pane_g3

0xd1e9,	// (0x00029624) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002c101) fep_vkb_prediction_pane_g

0x71a7,	// (0x000235e2) slider_set_pane_g3

0x71bb,	// (0x000235f6) slider_set_pane_g4

0x71d3,	// (0x0002360e) slider_set_pane_g5

0x71a7,	// (0x000235e2) slider_set_pane_g6

0x71e9,	// (0x00023624) slider_set_pane_g7

0xb05f,	// (0x0002749a) slider_form_pane_g3

0xb068,	// (0x000274a3) slider_form_pane_g4

0xb070,	// (0x000274ab) slider_form_pane_g5

0xb05f,	// (0x0002749a) slider_form_pane_g6

0xb078,	// (0x000274b3) slider_form_pane_g7

0xb6f5,	// (0x00027b30) slider_set_pane_vc_g3

0xb6fe,	// (0x00027b39) slider_set_pane_vc_g4

0xb707,	// (0x00027b42) slider_set_pane_vc_g5

0xb6f5,	// (0x00027b30) slider_set_pane_vc_g6

0xb710,	// (0x00027b4b) slider_set_pane_vc_g7

0xb6f5,	// (0x00027b30) slider_form_pane_vc_g1

0xb6fe,	// (0x00027b39) slider_form_pane_vc_g2

0xb707,	// (0x00027b42) slider_form_pane_vc_g3

0xb6f5,	// (0x00027b30) slider_form_pane_vc_g4

0xb8c5,	// (0x00027d00) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002becf) slider_form_pane_vc_g

0x36c2,	// (0x0001fafd) main_idle_act3_pane

0xd1f1,	// (0x0002962c) ai3_links_pane

0xd1fa,	// (0x00029635) popup_ai3_data_window_ParamLimits

0xd1fa,	// (0x00029635) popup_ai3_data_window

0x36c2,	// (0x0001fafd) grid_ai3_links_pane

0xd218,	// (0x00029653) cell_ai3_links_pane_ParamLimits

0xd218,	// (0x00029653) cell_ai3_links_pane

0xd232,	// (0x0002966d) bg_popup_sub_pane_cp11

0xd23f,	// (0x0002967a) cell_ai3_links_pane_g1

0x36c2,	// (0x0001fafd) bg_popup_sub_pane_cp12

0xd264,	// (0x0002969f) heading_ai3_data_pane

0xd26c,	// (0x000296a7) list_ai3_gene_pane

0xd278,	// (0x000296b3) popup_ai3_data_window_g1

0xd280,	// (0x000296bb) heading_ai3_data_pane_g1

0xd288,	// (0x000296c3) heading_ai3_data_pane_t1

0xd296,	// (0x000296d1) list_double_ai3_gene_pane_ParamLimits

0xd296,	// (0x000296d1) list_double_ai3_gene_pane

0xd2a3,	// (0x000296de) list_single_ai3_gene_pane_ParamLimits

0xd2a3,	// (0x000296de) list_single_ai3_gene_pane

0xc049,	// (0x00028484) list_highlight_pane_cp7_ParamLimits

0xc049,	// (0x00028484) list_highlight_pane_cp7

0xd2b0,	// (0x000296eb) list_single_a13_gene_pane_t1_ParamLimits

0xd2b0,	// (0x000296eb) list_single_a13_gene_pane_t1

0xd2c7,	// (0x00029702) list_single_ai3_gene_pane_g1

0xd2d0,	// (0x0002970b) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002c10a) list_single_ai3_gene_pane_g

0xd2d8,	// (0x00029713) list_double_ai3_gene_pane_g1_ParamLimits

0xd2d8,	// (0x00029713) list_double_ai3_gene_pane_g1

0xd2e4,	// (0x0002971f) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e4,	// (0x0002971f) list_double_ai3_gene_pane_t1

0xd300,	// (0x0002973b) list_double_ai3_gene_pane_t2_ParamLimits

0xd300,	// (0x0002973b) list_double_ai3_gene_pane_t2

0xd315,	// (0x00029750) list_double_ai3_gene_pane_t3_ParamLimits

0xd315,	// (0x00029750) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002c10f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002c10f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x59a8,	// (0x00021de3) aid_size_min_col_2

0xd1b9,	// (0x000295f4) aid_size_min_msg_ParamLimits

0xd1b9,	// (0x000295f4) aid_size_min_msg

0xc46e,	// (0x000288a9) fep_vkb_top_text_pane_g2_ParamLimits

0xc46e,	// (0x000288a9) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002bf7b) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002bf7b) fep_vkb_top_text_pane_g

0x36c2,	// (0x0001fafd) main_hc_apps_shell_pane

0xd332,	// (0x0002976d) grid_hc_apps_pane_ParamLimits

0xd332,	// (0x0002976d) grid_hc_apps_pane

0xd341,	// (0x0002977c) list_hc_apps_pane

0xd349,	// (0x00029784) scroll_pane_cp37_ParamLimits

0xd349,	// (0x00029784) scroll_pane_cp37

0xd355,	// (0x00029790) cell_hc_apps_pane_ParamLimits

0xd355,	// (0x00029790) cell_hc_apps_pane

0xd40d,	// (0x00029848) cell_hc_apps_pane_g1_ParamLimits

0xd40d,	// (0x00029848) cell_hc_apps_pane_g1

0xd43e,	// (0x00029879) cell_hc_apps_pane_g2_ParamLimits

0xd43e,	// (0x00029879) cell_hc_apps_pane_g2

0xd45a,	// (0x00029895) cell_hc_apps_pane_g3_ParamLimits

0xd45a,	// (0x00029895) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002c116) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002c116) cell_hc_apps_pane_g

0xd47c,	// (0x000298b7) cell_hc_apps_pane_t1_ParamLimits

0xd47c,	// (0x000298b7) cell_hc_apps_pane_t1

0x6310,	// (0x0002274b) grid_highlight_pane_cp10_ParamLimits

0x6310,	// (0x0002274b) grid_highlight_pane_cp10

0xd4bc,	// (0x000298f7) list_single_hc_apps_pane_ParamLimits

0xd4bc,	// (0x000298f7) list_single_hc_apps_pane

0xd4fb,	// (0x00029936) list_single_hc_apps_pane_g1

0x5a9c,	// (0x00021ed7) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002c11d) list_single_hc_apps_pane_g

0x5ab5,	// (0x00021ef0) list_single_hc_apps_pane_g2_copy1

0x5ad1,	// (0x00021f0c) list_single_hc_apps_pane_t1

0x5ff6,	// (0x00022431) bg_set_opt_pane_cp_ParamLimits

0x6042,	// (0x0002247d) setting_slider_pane_t1_ParamLimits

0x6058,	// (0x00022493) setting_slider_pane_t2_ParamLimits

0x6072,	// (0x000224ad) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0002b9b1) setting_slider_pane_t_ParamLimits

0x608a,	// (0x000224c5) slider_set_pane_ParamLimits

0x6da6,	// (0x000231e1) control_pane_g5_ParamLimits

0x6da6,	// (0x000231e1) control_pane_g5

0xae80,	// (0x000272bb) slider_set_pane_g1_ParamLimits

0x719b,	// (0x000235d6) slider_set_pane_g2_ParamLimits

0x71a7,	// (0x000235e2) slider_set_pane_g3_ParamLimits

0x71bb,	// (0x000235f6) slider_set_pane_g4_ParamLimits

0x71d3,	// (0x0002360e) slider_set_pane_g5_ParamLimits

0x71a7,	// (0x000235e2) slider_set_pane_g6_ParamLimits

0x71e9,	// (0x00023624) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002bdb0) slider_set_pane_g_ParamLimits

0x8a7a,	// (0x00024eb5) navi_icon_text_pane_ParamLimits

0x95cd,	// (0x00025a08) aid_fill_nsta_2_ParamLimits

0x960e,	// (0x00025a49) aid_touch_tab_arrow_left_ParamLimits

0x961d,	// (0x00025a58) aid_touch_tab_arrow_right_ParamLimits

0x968a,	// (0x00025ac5) clock_nsta_pane_ParamLimits

0xa942,	// (0x00026d7d) navi_icon_pane_g1_ParamLimits

0xa951,	// (0x00026d8c) navi_text_pane_t1_ParamLimits

0xbcef,	// (0x0002812a) navi_icon_text_pane_g1_ParamLimits

0xbcfe,	// (0x00028139) navi_icon_text_pane_t1_ParamLimits

0xd4fb,	// (0x00029936) list_single_hc_apps_pane_g1_ParamLimits

0x5a9c,	// (0x00021ed7) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002c11d) list_single_hc_apps_pane_g_ParamLimits

0x5ab5,	// (0x00021ef0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ad1,	// (0x00021f0c) list_single_hc_apps_pane_t1_ParamLimits

0x5e40,	// (0x0002227b) popup_toolbar2_fixed_window_ParamLimits

0x5e40,	// (0x0002227b) popup_toolbar2_fixed_window

0x94d1,	// (0x0002590c) popup_toolbar2_float_window

0x36c2,	// (0x0001fafd) bg_popup_sub_pane_cp27

0xd514,	// (0x0002994f) grid_toolbar2_float_pane

0x36c2,	// (0x0001fafd) bg_popup_sub_pane_cp26

0xd514,	// (0x0002994f) grid_toolbar2_fixed_pane

0xd51c,	// (0x00029957) cell_toolbar2_fixed_pane_ParamLimits

0xd51c,	// (0x00029957) cell_toolbar2_fixed_pane

0xd52c,	// (0x00029967) cell_toolbar2_fixed_pane_g1

0xd535,	// (0x00029970) toolbar2_fixed_button_pane

0x9ac1,	// (0x00025efc) toolbar2_fixed_button_pane_g1

0x9ac9,	// (0x00025f04) toolbar2_fixed_button_pane_g2

0x9ad1,	// (0x00025f0c) toolbar2_fixed_button_pane_g3

0x9ad9,	// (0x00025f14) toolbar2_fixed_button_pane_g4

0x9ae1,	// (0x00025f1c) toolbar2_fixed_button_pane_g5

0x9ae9,	// (0x00025f24) toolbar2_fixed_button_pane_g6

0x9af1,	// (0x00025f2c) toolbar2_fixed_button_pane_g7

0x9af9,	// (0x00025f34) toolbar2_fixed_button_pane_g8

0x9b01,	// (0x00025f3c) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002bcb2) toolbar2_fixed_button_pane_g

0xd53d,	// (0x00029978) cell_toolbar2_float_pane_ParamLimits

0xd53d,	// (0x00029978) cell_toolbar2_float_pane

0xd54e,	// (0x00029989) cell_toolbar2_float_pane_g1

0xd535,	// (0x00029970) toolbar2_fixed_button_pane_cp

0xc1ca,	// (0x00028605) fep_vkb_accented_list_pane_ParamLimits

0xc1ca,	// (0x00028605) fep_vkb_accented_list_pane

0x754b,	// (0x00023986) bg_popup_fep_shadow_pane_g9

0x8bfe,	// (0x00025039) bg_popup_fep_shadow_pane_cp3

0x80de,	// (0x00024519) list_accented_list_pane

0xd557,	// (0x00029992) list_single_accented_list_pane_ParamLimits

0xd557,	// (0x00029992) list_single_accented_list_pane

0x8bfe,	// (0x00025039) list_highlight_pane_cp10

0xd568,	// (0x000299a3) list_single_accented_list_pane_t1

0x9417,	// (0x00025852) popup_slider_window_ParamLimits

0x9417,	// (0x00025852) popup_slider_window

0xd1b0,	// (0x000295eb) aid_indentation_list_msg

0xd634,	// (0x00029a6f) bg_popup_window_pane_cp19

0xd6a2,	// (0x00029add) popup_slider_window_g1

0xd6be,	// (0x00029af9) popup_slider_window_g2

0xd6da,	// (0x00029b15) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002c122) popup_slider_window_g

0xd736,	// (0x00029b71) popup_slider_window_t1

0xd7aa,	// (0x00029be5) small_volume_slider_vertical_pane

0xc084,	// (0x000284bf) small_volume_slider_vertical_pane_g1

0xc084,	// (0x000284bf) small_volume_slider_vertical_pane_g2

0xd7c6,	// (0x00029c01) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002c134) small_volume_slider_vertical_pane_g

0x5bf8,	// (0x00022033) area_side_right_pane_ParamLimits

0x5bf8,	// (0x00022033) area_side_right_pane

0x76b3,	// (0x00023aee) aid_size_side_button_ParamLimits

0x76b3,	// (0x00023aee) aid_size_side_button

0x76c7,	// (0x00023b02) grid_sctrl_middle_pane_ParamLimits

0x76c7,	// (0x00023b02) grid_sctrl_middle_pane

0x76e7,	// (0x00023b22) sctrl_sk_bottom_pane

0x76f8,	// (0x00023b33) sctrl_sk_top_pane

0x770a,	// (0x00023b45) aid_touch_sctrl_top

0x6310,	// (0x0002274b) bg_sctrl_sk_pane_ParamLimits

0x6310,	// (0x0002274b) bg_sctrl_sk_pane

0x7717,	// (0x00023b52) sctrl_sk_top_pane_g1

0x7724,	// (0x00023b5f) sctrl_sk_top_pane_t1

0x770a,	// (0x00023b45) aid_touch_sctrl_bottom

0x6310,	// (0x0002274b) bg_sctrl_sk_pane_cp_ParamLimits

0x6310,	// (0x0002274b) bg_sctrl_sk_pane_cp

0x773f,	// (0x00023b7a) sctrl_sk_bottom_pane_g1

0x7724,	// (0x00023b5f) sctrl_sk_bottom_pane_t1

0x7748,	// (0x00023b83) cell_sctrl_middle_pane_ParamLimits

0x7748,	// (0x00023b83) cell_sctrl_middle_pane

0x7765,	// (0x00023ba0) aid_touch_sctrl_middle_ParamLimits

0x7765,	// (0x00023ba0) aid_touch_sctrl_middle

0x7f75,	// (0x000243b0) bg_sctrl_middle_pane_ParamLimits

0x7f75,	// (0x000243b0) bg_sctrl_middle_pane

0xc30e,	// (0x00028749) cell_sctrl_middle_pane_g1_ParamLimits

0xc30e,	// (0x00028749) cell_sctrl_middle_pane_g1

0x7777,	// (0x00023bb2) cell_sctrl_middle_pane_g2_ParamLimits

0x7777,	// (0x00023bb2) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002c140) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002c140) cell_sctrl_middle_pane_g

0x9ac1,	// (0x00025efc) bg_sctrl_middle_pane_g1

0x9ac9,	// (0x00025f04) bg_sctrl_middle_pane_g2

0x9ad1,	// (0x00025f0c) bg_sctrl_middle_pane_g3

0x9ad9,	// (0x00025f14) bg_sctrl_middle_pane_g4

0x9ae1,	// (0x00025f1c) bg_sctrl_middle_pane_g5

0x9ae9,	// (0x00025f24) bg_sctrl_middle_pane_g6

0x9af1,	// (0x00025f2c) bg_sctrl_middle_pane_g7

0x9af9,	// (0x00025f34) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002c145) bg_sctrl_middle_pane_g

0x9b01,	// (0x00025f3c) bg_sctrl_middle_pane_g8_copy1

0x9ac1,	// (0x00025efc) bg_sctrl_sk_pane_g1

0x9ac9,	// (0x00025f04) bg_sctrl_sk_pane_g2

0x9ad1,	// (0x00025f0c) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002bcb2) bg_sctrl_sk_pane_g

0x683c,	// (0x00022c77) aid_size_touch_scroll_bar

0x9ad9,	// (0x00025f14) bg_sctrl_sk_pane_g4

0x9ae1,	// (0x00025f1c) bg_sctrl_sk_pane_g5

0x9ae9,	// (0x00025f24) bg_sctrl_sk_pane_g6

0x9af1,	// (0x00025f2c) bg_sctrl_sk_pane_g7

0x9af9,	// (0x00025f34) bg_sctrl_sk_pane_g8

0x9b01,	// (0x00025f3c) bg_sctrl_sk_pane_g9

0x902e,	// (0x00025469) popup_fep_china_hwr2_fs_candidate_window

0x9038,	// (0x00025473) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9038,	// (0x00025473) popup_fep_china_hwr2_fs_control_window

0xc30e,	// (0x00028749) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002c13b) sctrl_sk_top_pane_g

0xd7cf,	// (0x00029c0a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7cf,	// (0x00029c0a) aid_fep_china_hwr2_fs_cell

0xd7e2,	// (0x00029c1d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e2,	// (0x00029c1d) bg_popup_fep_shadow_pane_cp4

0xd7fb,	// (0x00029c36) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fb,	// (0x00029c36) bg_popup_fep_shadow_pane_cp5

0xd80d,	// (0x00029c48) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80d,	// (0x00029c48) popup_fep_china_hwr2_fs_control_bar_grid

0xd81d,	// (0x00029c58) popup_fep_china_hwr2_fs_control_funtion_grid

0xd825,	// (0x00029c60) aid_fep_china_hwr2_fs_candi_cell

0x36c2,	// (0x0001fafd) bg_popup_fep_shadow_pane_cp6

0xd82f,	// (0x00029c6a) popup_fep_china_hwr2_fs_candidate_grid

0xd839,	// (0x00029c74) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd839,	// (0x00029c74) cell_fep_china_hwr2_fs_funtion_grid

0xc084,	// (0x000284bf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd851,	// (0x00029c8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd851,	// (0x00029c8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85f,	// (0x00029c9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85f,	// (0x00029c9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002c156) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002c156) cell_fep_china_hwr2_fs_funtion_grid_g

0xd875,	// (0x00029cb0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd875,	// (0x00029cb0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd88a,	// (0x00029cc5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd88a,	// (0x00029cc5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002c15b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002c15b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a6,	// (0x00029ce1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ae,	// (0x00029ce9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b6,	// (0x00029cf1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002c160) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8be,	// (0x00029cf9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8be,	// (0x00029cf9) cell_fep_china_hwr2_fs_candidate_grid

0xd8dd,	// (0x00029d18) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8e5,	// (0x00029d20) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc084,	// (0x000284bf) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc084,	// (0x000284bf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002bf80) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8ed,	// (0x00029d28) cell_fep_china_hwr2_fs_candidate_grid_t1

0x969d,	// (0x00025ad8) clock_nsta_pane_cp_24_ParamLimits

0x969d,	// (0x00025ad8) clock_nsta_pane_cp_24

0x971d,	// (0x00025b58) indicator_nsta_pane_cp_24_ParamLimits

0x971d,	// (0x00025b58) indicator_nsta_pane_cp_24

0xa7be,	// (0x00026bf9) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002bd17) heading_pane_g

0xb26e,	// (0x000276a9) grid_sct_catagory_button_pane

0xb2a0,	// (0x000276db) scroll_pane_cp5_ParamLimits

0xbd43,	// (0x0002817e) button_value_adjust_pane_cp5_ParamLimits

0xbd43,	// (0x0002817e) button_value_adjust_pane_cp5

0xbe20,	// (0x0002825b) form2_midp_time_pane_ParamLimits

0xd8fb,	// (0x00029d36) cell_sct_catagory_button_pane_ParamLimits

0xd8fb,	// (0x00029d36) cell_sct_catagory_button_pane

0xc049,	// (0x00028484) bg_button_pane_cp01_ParamLimits

0xc049,	// (0x00028484) bg_button_pane_cp01

0xc084,	// (0x000284bf) cell_sct_catagory_button_pane_g1

0x9458,	// (0x00025893) popup_tb_extension_window

0xd90d,	// (0x00029d48) aid_size_cell_ext_ParamLimits

0xd90d,	// (0x00029d48) aid_size_cell_ext

0x6310,	// (0x0002274b) bg_tb_trans_pane_cp1_ParamLimits

0x6310,	// (0x0002274b) bg_tb_trans_pane_cp1

0xd92d,	// (0x00029d68) grid_tb_ext_pane_ParamLimits

0xd92d,	// (0x00029d68) grid_tb_ext_pane

0xd95d,	// (0x00029d98) cell_tb_ext_pane_ParamLimits

0xd95d,	// (0x00029d98) cell_tb_ext_pane

0xd974,	// (0x00029daf) cell_tb_ext_pane_g1_ParamLimits

0xd974,	// (0x00029daf) cell_tb_ext_pane_g1

0xd991,	// (0x00029dcc) cell_tb_ext_pane_t1

0x6310,	// (0x0002274b) list_highlight_pane_cp11_ParamLimits

0x6310,	// (0x0002274b) list_highlight_pane_cp11

0x5e5f,	// (0x0002229a) popup_uni_indicator_window_ParamLimits

0x5e5f,	// (0x0002229a) popup_uni_indicator_window

0x7f75,	// (0x000243b0) bg_popup_sub_pane_cp14

0xd9ac,	// (0x00029de7) list_uniindi_pane

0xd9b8,	// (0x00029df3) uniindi_top_pane

0x6310,	// (0x0002274b) bg_uniindi_top_pane

0xd9d9,	// (0x00029e14) uniindi_top_pane_g1

0xd9ef,	// (0x00029e2a) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002c167) uniindi_top_pane_g

0xda19,	// (0x00029e54) uniindi_top_pane_t1

0xda45,	// (0x00029e80) list_single_uniindi_pane_ParamLimits

0xda45,	// (0x00029e80) list_single_uniindi_pane

0xc084,	// (0x000284bf) bg_uniindi_top_pane_g1

0xda57,	// (0x00029e92) list_single_uniindi_pane_g1

0xda6a,	// (0x00029ea5) list_single_uniindi_pane_t1

0x36c2,	// (0x0001fafd) control_bg_pane

0xda8f,	// (0x00029eca) bg_sctrl_sk_pane_cp1

0xda98,	// (0x00029ed3) bg_sctrl_sk_pane_cp2

0xdaa1,	// (0x00029edc) control_bg_pane_g1

0xdaaa,	// (0x00029ee5) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002c170) control_bg_pane_g

0xbb65,	// (0x00027fa0) cell_indicator_nsta_pane_g1_ParamLimits

0xbb73,	// (0x00027fae) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002bee4) cell_indicator_nsta_pane_g_ParamLimits

0x5765,	// (0x00021ba0) form2_midp_time_pane_t1_ParamLimits

0x667e,	// (0x00022ab9) main_idle_act4_pane_ParamLimits

0x667e,	// (0x00022ab9) main_idle_act4_pane

0x9458,	// (0x00025893) popup_tb_extension_window_ParamLimits

0xd94f,	// (0x00029d8a) tb_ext_find_pane_ParamLimits

0xd94f,	// (0x00029d8a) tb_ext_find_pane

0xdab3,	// (0x00029eee) ai_gene_pane_1_cp1

0x8d47,	// (0x00025182) ai_gene_pane_2_cp1

0xdabb,	// (0x00029ef6) list_single_idle_plugin_calendar_pane

0xdac4,	// (0x00029eff) list_single_idle_plugin_notification_pane

0xdacd,	// (0x00029f08) list_single_idle_plugin_player_pane

0xdad6,	// (0x00029f11) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdad6,	// (0x00029f11) list_single_idle_plugin_shortcut_pane

0xdaf8,	// (0x00029f33) main_idle_act4_pane_t1

0xdb0a,	// (0x00029f45) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002c175) main_idle_act4_pane_t

0xdb1c,	// (0x00029f57) middle_sk_idle_act4_pane_ParamLimits

0xdb1c,	// (0x00029f57) middle_sk_idle_act4_pane

0xdb32,	// (0x00029f6d) popup_clock_digital_analogue_window_cp2

0xdb4c,	// (0x00029f87) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb4c,	// (0x00029f87) shortcut_wheel_idle_act4_pane

0xc084,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g1

0xc084,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g2

0xc084,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g3

0xc084,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g4

0xc084,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g5

0xdb60,	// (0x00029f9b) shortcut_wheel_idle_act4_pane_g6

0xdb68,	// (0x00029fa3) shortcut_wheel_idle_act4_pane_g7

0xdb70,	// (0x00029fab) shortcut_wheel_idle_act4_pane_g8

0xdb78,	// (0x00029fb3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002c17a) shortcut_wheel_idle_act4_pane_g

0xc30e,	// (0x00028749) middle_sk_idle_act4_pane_g1_ParamLimits

0xc30e,	// (0x00028749) middle_sk_idle_act4_pane_g1

0xdbdc,	// (0x0002a017) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbdc,	// (0x0002a017) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002c19d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002c19d) middle_sk_idle_act4_pane_g

0xdbe8,	// (0x0002a023) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbe8,	// (0x0002a023) middle_sk_idle_act4_pane_t1

0xdc05,	// (0x0002a040) grid_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0002a040) grid_ai_shortcut_pane

0xdc1e,	// (0x0002a059) list_highlight_pane_cp16_ParamLimits

0xdc1e,	// (0x0002a059) list_highlight_pane_cp16

0xdc2b,	// (0x0002a066) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc2b,	// (0x0002a066) list_single_idle_plugin_shortcut_pane_g1

0xdc37,	// (0x0002a072) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc37,	// (0x0002a072) list_single_idle_plugin_shortcut_pane_g2

0xdc51,	// (0x0002a08c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc51,	// (0x0002a08c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002c1a2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002c1a2) list_single_idle_plugin_shortcut_pane_g

0xdc64,	// (0x0002a09f) cell_ai_shortcut_pane_ParamLimits

0xdc64,	// (0x0002a09f) cell_ai_shortcut_pane

0xdc87,	// (0x0002a0c2) cell_ai_shortcut_pane_g1_ParamLimits

0xdc87,	// (0x0002a0c2) cell_ai_shortcut_pane_g1

0xdab3,	// (0x00029eee) ai_gene_pane_1_cp2

0xdca9,	// (0x0002a0e4) ai_gene_pane_2_cp2

0xdcb1,	// (0x0002a0ec) list_highlight_pane_cp15

0xdcba,	// (0x0002a0f5) list_single_idle_plugin_calendar_pane_g1

0xdcb1,	// (0x0002a0ec) list_highlight_pane_cp17

0xdcc2,	// (0x0002a0fd) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcca,	// (0x0002a105) list_single_idle_plugin_player_pane_g1

0xb4d5,	// (0x00027910) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002c1a9) list_single_idle_plugin_player_pane_g

0xdcd2,	// (0x0002a10d) list_single_idle_plugin_player_pane_t1

0xdce0,	// (0x0002a11b) list_single_idle_plugin_player_pane_t2

0xdcee,	// (0x0002a129) list_single_idle_plugin_player_pane_t3

0xdcfc,	// (0x0002a137) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002c1ae) list_single_idle_plugin_player_pane_t

0xdd0a,	// (0x0002a145) wait_bar_pane_cp15

0xdd12,	// (0x0002a14d) grid_ai_notification_pane

0xb4d5,	// (0x00027910) list_single_idle_plugin_notification_pane_g1

0xdd1b,	// (0x0002a156) cell_ai_notification_pane_ParamLimits

0xdd1b,	// (0x0002a156) cell_ai_notification_pane

0xdd28,	// (0x0002a163) cell_ai_notification_pane_g1

0xdd30,	// (0x0002a16b) cell_ai_notification_pane_t1

0xdd3e,	// (0x0002a179) tb_ext_find_button_pane

0xdd46,	// (0x0002a181) tb_ext_find_pane_g1

0xdd4e,	// (0x0002a189) tb_ext_find_pane_t1

0x85e5,	// (0x00024a20) tb_ext_find_button_pane_g1

0xdd5c,	// (0x0002a197) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002c1b7) tb_ext_find_button_pane_g

0xdaf8,	// (0x00029f33) main_idle_act4_pane_t1_ParamLimits

0xdb0a,	// (0x00029f45) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002c175) main_idle_act4_pane_t_ParamLimits

0xdb32,	// (0x00029f6d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb40,	// (0x00029f7b) sat_plugin_idle_act4_pane_ParamLimits

0xdb40,	// (0x00029f7b) sat_plugin_idle_act4_pane

0xdd65,	// (0x0002a1a0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd65,	// (0x0002a1a0) sat_plugin_idle_act4_pane_t1

0xdd78,	// (0x0002a1b3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd78,	// (0x0002a1b3) sat_plugin_idle_act4_pane_t2

0xdd8b,	// (0x0002a1c6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd8b,	// (0x0002a1c6) sat_plugin_idle_act4_pane_t3

0xdd9e,	// (0x0002a1d9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd9e,	// (0x0002a1d9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002c1bc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002c1bc) sat_plugin_idle_act4_pane_t

0x5d90,	// (0x000221cb) popup_battery_window_ParamLimits

0x5d90,	// (0x000221cb) popup_battery_window

0x6310,	// (0x0002274b) bg_popup_sub_pane_cp25_ParamLimits

0x6310,	// (0x0002274b) bg_popup_sub_pane_cp25

0xddb1,	// (0x0002a1ec) popup_battery_window_g1_ParamLimits

0xddb1,	// (0x0002a1ec) popup_battery_window_g1

0xddbd,	// (0x0002a1f8) popup_battery_window_t1_ParamLimits

0xddbd,	// (0x0002a1f8) popup_battery_window_t1

0xddcf,	// (0x0002a20a) popup_battery_window_t2_ParamLimits

0xddcf,	// (0x0002a20a) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002c1c5) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002c1c5) popup_battery_window_t

0x8c12,	// (0x0002504d) midp_canvas_pane_ParamLimits

0x8c89,	// (0x000250c4) midp_keypad_pane_ParamLimits

0x8c89,	// (0x000250c4) midp_keypad_pane

0x8f84,	// (0x000253bf) main_midp_pane_ParamLimits

0xbbf0,	// (0x0002802b) signal_pane_g2_cp_ParamLimits

0xddec,	// (0x0002a227) aid_size_cell_midp_keypad_ParamLimits

0xddec,	// (0x0002a227) aid_size_cell_midp_keypad

0xde06,	// (0x0002a241) midp_keyp_game_grid_pane_ParamLimits

0xde06,	// (0x0002a241) midp_keyp_game_grid_pane

0xde26,	// (0x0002a261) midp_keyp_rocker_pane_ParamLimits

0xde26,	// (0x0002a261) midp_keyp_rocker_pane

0xde55,	// (0x0002a290) midp_keyp_sk_left_pane_ParamLimits

0xde55,	// (0x0002a290) midp_keyp_sk_left_pane

0xdeaf,	// (0x0002a2ea) midp_keyp_sk_right_pane_ParamLimits

0xdeaf,	// (0x0002a2ea) midp_keyp_sk_right_pane

0x36c2,	// (0x0001fafd) bg_button_pane_cp03

0xdf09,	// (0x0002a344) midp_keyp_sk_left_pane_g1

0x36c2,	// (0x0001fafd) bg_button_pane_cp04

0xdf09,	// (0x0002a344) midp_keyp_sk_right_pane_g1

0xc084,	// (0x000284bf) midp_keyp_rocker_pane_g1

0xdf12,	// (0x0002a34d) keyp_game_cell_pane_ParamLimits

0xdf12,	// (0x0002a34d) keyp_game_cell_pane

0x36c2,	// (0x0001fafd) bg_button_pane_cp02

0xdf25,	// (0x0002a360) keyp_game_cell_pane_g1

0x5dda,	// (0x00022215) popup_fep_vkb2_window_ParamLimits

0x5dda,	// (0x00022215) popup_fep_vkb2_window

0x7799,	// (0x00023bd4) aid_size_cell_vkb2_ParamLimits

0x7799,	// (0x00023bd4) aid_size_cell_vkb2

0x77e5,	// (0x00023c20) popup_fep_vkb2_window_g1_ParamLimits

0x77e5,	// (0x00023c20) popup_fep_vkb2_window_g1

0x782d,	// (0x00023c68) vkb2_area_bottom_pane_ParamLimits

0x782d,	// (0x00023c68) vkb2_area_bottom_pane

0x7881,	// (0x00023cbc) vkb2_area_keypad_pane_ParamLimits

0x7881,	// (0x00023cbc) vkb2_area_keypad_pane

0x78c7,	// (0x00023d02) vkb2_area_top_pane_ParamLimits

0x78c7,	// (0x00023d02) vkb2_area_top_pane

0x7941,	// (0x00023d7c) vkb2_top_entry_pane_ParamLimits

0x7941,	// (0x00023d7c) vkb2_top_entry_pane

0x796b,	// (0x00023da6) vkb2_top_grid_left_pane_ParamLimits

0x796b,	// (0x00023da6) vkb2_top_grid_left_pane

0x7989,	// (0x00023dc4) vkb2_top_grid_right_pane_ParamLimits

0x7989,	// (0x00023dc4) vkb2_top_grid_right_pane

0x79a7,	// (0x00023de2) vkb2_cell_keypad_pane_ParamLimits

0x79a7,	// (0x00023de2) vkb2_cell_keypad_pane

0x7a5d,	// (0x00023e98) vkb2_area_bottom_grid_pane_ParamLimits

0x7a5d,	// (0x00023e98) vkb2_area_bottom_grid_pane

0x7a83,	// (0x00023ebe) vkb2_area_bottom_pane_g1_ParamLimits

0x7a83,	// (0x00023ebe) vkb2_area_bottom_pane_g1

0x7aa7,	// (0x00023ee2) vkb2_area_bottom_pane_g2_ParamLimits

0x7aa7,	// (0x00023ee2) vkb2_area_bottom_pane_g2

0x7ad5,	// (0x00023f10) vkb2_area_bottom_pane_g3_ParamLimits

0x7ad5,	// (0x00023f10) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002c1ca) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002c1ca) vkb2_area_bottom_pane_g

0x7b36,	// (0x00023f71) vkb2_top_cell_left_pane_ParamLimits

0x7b36,	// (0x00023f71) vkb2_top_cell_left_pane

0xdf36,	// (0x0002a371) vkb2_top_entry_pane_g1_ParamLimits

0xdf36,	// (0x0002a371) vkb2_top_entry_pane_g1

0xdf44,	// (0x0002a37f) vkb2_top_entry_pane_t1_ParamLimits

0xdf44,	// (0x0002a37f) vkb2_top_entry_pane_t1

0xdf5c,	// (0x0002a397) vkb2_top_entry_pane_t2_ParamLimits

0xdf5c,	// (0x0002a397) vkb2_top_entry_pane_t2

0xdf74,	// (0x0002a3af) vkb2_top_entry_pane_t3_ParamLimits

0xdf74,	// (0x0002a3af) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002c1d1) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002c1d1) vkb2_top_entry_pane_t

0x7b83,	// (0x00023fbe) vkb2_top_grid_right_pane_g1_ParamLimits

0x7b83,	// (0x00023fbe) vkb2_top_grid_right_pane_g1

0x7b99,	// (0x00023fd4) vkb2_top_grid_right_pane_g2_ParamLimits

0x7b99,	// (0x00023fd4) vkb2_top_grid_right_pane_g2

0x7bb1,	// (0x00023fec) vkb2_top_grid_right_pane_g3_ParamLimits

0x7bb1,	// (0x00023fec) vkb2_top_grid_right_pane_g3

0x7bc9,	// (0x00024004) vkb2_top_grid_right_pane_g4_ParamLimits

0x7bc9,	// (0x00024004) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002c1d8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002c1d8) vkb2_top_grid_right_pane_g

0x7bdf,	// (0x0002401a) vkb2_top_cell_left_pane_g1

0x7bf6,	// (0x00024031) vkb2_cell_keypad_pane_g1_ParamLimits

0x7bf6,	// (0x00024031) vkb2_cell_keypad_pane_g1

0xdf8a,	// (0x0002a3c5) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf8a,	// (0x0002a3c5) vkb2_cell_keypad_pane_t1

0x7c1a,	// (0x00024055) vkb2_cell_bottom_grid_pane_ParamLimits

0x7c1a,	// (0x00024055) vkb2_cell_bottom_grid_pane

0x7c53,	// (0x0002408e) vkb2_cell_bottom_grid_pane_g1

0xdb80,	// (0x00029fbb) aid_call2_pane_cp02

0xdb88,	// (0x00029fc3) aid_call_pane_cp02

0xdb90,	// (0x00029fcb) clock_digital_number_pane_cp10

0xdb98,	// (0x00029fd3) clock_digital_number_pane_cp11

0xdba0,	// (0x00029fdb) clock_digital_number_pane_cp12

0xdba8,	// (0x00029fe3) clock_digital_number_pane_cp13

0xdbb0,	// (0x00029feb) clock_digital_separator_pane_cp10

0x85e5,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g1

0x85e5,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g2

0xdbb8,	// (0x00029ff3) popup_clock_digital_analogue_window_cp2_g3

0x85e5,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g4

0xdbb8,	// (0x00029ff3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002c18d) popup_clock_digital_analogue_window_cp2_g

0xdbc0,	// (0x00029ffb) popup_clock_digital_analogue_window_cp2_t1

0xdbce,	// (0x0002a009) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002c198) popup_clock_digital_analogue_window_cp2_t

0xc084,	// (0x000284bf) clock_digital_number_pane_cp10_g1

0xc084,	// (0x000284bf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002bf80) clock_digital_number_pane_cp10_g

0xc084,	// (0x000284bf) clock_digital_separator_pane_cp10_g1

0xc084,	// (0x000284bf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002bf80) clock_digital_separator_pane_cp10_g

0xd9fb,	// (0x00029e36) uniindi_top_pane_g3

0xda0c,	// (0x00029e47) uniindi_top_pane_g4

0x7a17,	// (0x00023e52) vkb2_row_keypad_pane_ParamLimits

0x7a17,	// (0x00023e52) vkb2_row_keypad_pane

0x7c6f,	// (0x000240aa) vkb2_cell_t_keypad_pane_ParamLimits

0x7c6f,	// (0x000240aa) vkb2_cell_t_keypad_pane

0x7c7f,	// (0x000240ba) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7c7f,	// (0x000240ba) vkb2_cell_t_keypad_pane_cp08

0x7c94,	// (0x000240cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7c94,	// (0x000240cf) vkb2_cell_t_keypad_pane_cp09

0x7ca8,	// (0x000240e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7ca8,	// (0x000240e3) vkb2_cell_t_keypad_pane_cp01

0x7cb9,	// (0x000240f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7cb9,	// (0x000240f4) vkb2_cell_t_keypad_pane_cp02

0x7cca,	// (0x00024105) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7cca,	// (0x00024105) vkb2_cell_t_keypad_pane_cp03

0x7cdb,	// (0x00024116) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7cdb,	// (0x00024116) vkb2_cell_t_keypad_pane_cp04

0x7cec,	// (0x00024127) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7cec,	// (0x00024127) vkb2_cell_t_keypad_pane_cp05

0x7cfd,	// (0x00024138) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7cfd,	// (0x00024138) vkb2_cell_t_keypad_pane_cp06

0x7d10,	// (0x0002414b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7d10,	// (0x0002414b) vkb2_cell_t_keypad_pane_cp07

0x7d25,	// (0x00024160) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7d25,	// (0x00024160) vkb2_cell_t_keypad_pane_cp10

0xc30e,	// (0x00028749) vkb2_cell_t_keypad_pane_g1

0xdfa1,	// (0x0002a3dc) vkb2_cell_t_keypad_pane_t1

0x36c2,	// (0x0001fafd) popup_grid_graphic2_window

0xdfb3,	// (0x0002a3ee) aid_size_cell_graphic2_ParamLimits

0xdfb3,	// (0x0002a3ee) aid_size_cell_graphic2

0xdfeb,	// (0x0002a426) bg_popup_window_pane_cp21_ParamLimits

0xdfeb,	// (0x0002a426) bg_popup_window_pane_cp21

0xdff9,	// (0x0002a434) graphic2_pages_pane_ParamLimits

0xdff9,	// (0x0002a434) graphic2_pages_pane

0xe03f,	// (0x0002a47a) grid_graphic2_control_pane_ParamLimits

0xe03f,	// (0x0002a47a) grid_graphic2_control_pane

0xe07d,	// (0x0002a4b8) grid_graphic2_pane_ParamLimits

0xe07d,	// (0x0002a4b8) grid_graphic2_pane

0xe0f3,	// (0x0002a52e) cell_graphic2_pane

0x36c2,	// (0x0001fafd) main_comp_mode_pane

0xd26c,	// (0x000296a7) list_ai3_gene_pane_ParamLimits

0xd634,	// (0x00029a6f) bg_popup_window_pane_cp19_ParamLimits

0xd640,	// (0x00029a7b) bg_touch_area_indi_pane_ParamLimits

0xd640,	// (0x00029a7b) bg_touch_area_indi_pane

0xd656,	// (0x00029a91) bg_touch_area_indi_pane_cp01_ParamLimits

0xd656,	// (0x00029a91) bg_touch_area_indi_pane_cp01

0xd66e,	// (0x00029aa9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd66e,	// (0x00029aa9) bg_touch_area_indi_pane_cp02

0xd688,	// (0x00029ac3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd688,	// (0x00029ac3) bg_touch_area_indi_pane_cp03

0xd6a2,	// (0x00029add) popup_slider_window_g1_ParamLimits

0xd6be,	// (0x00029af9) popup_slider_window_g2_ParamLimits

0xd6da,	// (0x00029b15) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002c122) popup_slider_window_g_ParamLimits

0xd736,	// (0x00029b71) popup_slider_window_t1_ParamLimits

0xd7aa,	// (0x00029be5) small_volume_slider_vertical_pane_ParamLimits

0xe0f3,	// (0x0002a52e) cell_graphic2_pane_ParamLimits

0xe145,	// (0x0002a580) bg_button_pane_cp10_ParamLimits

0xe145,	// (0x0002a580) bg_button_pane_cp10

0xe15a,	// (0x0002a595) bg_button_pane_cp11_ParamLimits

0xe15a,	// (0x0002a595) bg_button_pane_cp11

0xe16f,	// (0x0002a5aa) graphic2_pages_pane_g1_ParamLimits

0xe16f,	// (0x0002a5aa) graphic2_pages_pane_g1

0xe18a,	// (0x0002a5c5) graphic2_pages_pane_g2_ParamLimits

0xe18a,	// (0x0002a5c5) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002c1e6) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002c1e6) graphic2_pages_pane_g

0xe1a2,	// (0x0002a5dd) graphic2_pages_pane_t1_ParamLimits

0xe1a2,	// (0x0002a5dd) graphic2_pages_pane_t1

0xe1b8,	// (0x0002a5f3) cell_graphic2_control_pane_ParamLimits

0xe1b8,	// (0x0002a5f3) cell_graphic2_control_pane

0xe1d2,	// (0x0002a60d) cell_graphic2_pane_g1_ParamLimits

0xe1d2,	// (0x0002a60d) cell_graphic2_pane_g1

0xe1df,	// (0x0002a61a) cell_graphic2_pane_g2_ParamLimits

0xe1df,	// (0x0002a61a) cell_graphic2_pane_g2

0xe1ec,	// (0x0002a627) cell_graphic2_pane_g3_ParamLimits

0xe1ec,	// (0x0002a627) cell_graphic2_pane_g3

0xe1f9,	// (0x0002a634) cell_graphic2_pane_g4_ParamLimits

0xe1f9,	// (0x0002a634) cell_graphic2_pane_g4

0xe206,	// (0x0002a641) cell_graphic2_pane_g5_ParamLimits

0xe206,	// (0x0002a641) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002c1eb) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002c1eb) cell_graphic2_pane_g

0xe221,	// (0x0002a65c) cell_graphic2_pane_t1_ParamLimits

0xe221,	// (0x0002a65c) cell_graphic2_pane_t1

0x9bb3,	// (0x00025fee) grid_highlight_pane_cp11_ParamLimits

0x9bb3,	// (0x00025fee) grid_highlight_pane_cp11

0x6310,	// (0x0002274b) bg_button_pane_cp05

0xe24a,	// (0x0002a685) cell_graphic2_control_pane_g1

0xc084,	// (0x000284bf) bg_touch_area_indi_pane_g1

0xe272,	// (0x0002a6ad) aid_cmod_rocker_key_size

0xe27c,	// (0x0002a6b7) aid_cmode_itu_key_size

0xe286,	// (0x0002a6c1) main_cmode_video_pane

0xe290,	// (0x0002a6cb) main_comp_mode_itu_pane

0xe29c,	// (0x0002a6d7) main_comp_mode_rocker_pane

0xe2a8,	// (0x0002a6e3) cell_cmode_rocker_pane_ParamLimits

0xe2a8,	// (0x0002a6e3) cell_cmode_rocker_pane

0xe2bc,	// (0x0002a6f7) cell_cmode_itu_pane_ParamLimits

0xe2bc,	// (0x0002a6f7) cell_cmode_itu_pane

0x7f75,	// (0x000243b0) bg_button_pane_cp06_ParamLimits

0x7f75,	// (0x000243b0) bg_button_pane_cp06

0xc30e,	// (0x00028749) cell_cmode_rocker_pane_g1_ParamLimits

0xc30e,	// (0x00028749) cell_cmode_rocker_pane_g1

0xd851,	// (0x00029c8c) cell_cmode_rocker_pane_g2_ParamLimits

0xd851,	// (0x00029c8c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002c1fb) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002c1fb) cell_cmode_rocker_pane_g

0x36c2,	// (0x0001fafd) bg_button_pane_cp07

0xe2d3,	// (0x0002a70e) cell_cmode_itu_pane_g1

0xe2dc,	// (0x0002a717) cell_cmode_itu_pane_t1

0xe2ea,	// (0x0002a725) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002c200) cell_cmode_itu_pane_t

0xda7f,	// (0x00029eba) aid_touch_ctrl_left

0xda87,	// (0x00029ec2) aid_touch_ctrl_right

0x36c2,	// (0x0001fafd) compa_mode_pane

0xe2f8,	// (0x0002a733) aid_cmod_rocker_key_size_cp

0xe302,	// (0x0002a73d) aid_cmode_itu_key_size_cp

0xe30c,	// (0x0002a747) compa_mode_pane_g1

0xe314,	// (0x0002a74f) compa_mode_pane_g2

0xe31c,	// (0x0002a757) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002c205) compa_mode_pane_g

0xe324,	// (0x0002a75f) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0002a767) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0002a76f) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0002a76f) cell_cmode_itu_pane_cp

0xe349,	// (0x0002a784) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0002a784) cell_cmode_rocker_pane_cp

0x7f75,	// (0x000243b0) bg_button_pane_cp06_cp_ParamLimits

0x7f75,	// (0x000243b0) bg_button_pane_cp06_cp

0xc30e,	// (0x00028749) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc30e,	// (0x00028749) cell_cmode_rocker_pane_g1_cp

0xc084,	// (0x000284bf) cell_cmode_rocker_pane_g2_cp

0x36c2,	// (0x0001fafd) bg_button_pane_cp07_cp

0xe35b,	// (0x0002a796) cell_cmode_itu_pane_g1_cp

0xe364,	// (0x0002a79f) cell_cmode_itu_pane_t1_cp

0xe364,	// (0x0002a79f) cell_cmode_itu_pane_t2_cp

0xb04e,	// (0x00027489) settings_code_pane_cp2

0x5ff6,	// (0x00022431) bg_popup_window_pane_cp3_ParamLimits

0x64fe,	// (0x00022939) heading_pane_cp3_ParamLimits

0x650a,	// (0x00022945) listscroll_popup_graphic_pane_ParamLimits

0x7319,	// (0x00023754) fep_hwr_aid_pane_ParamLimits

0x770a,	// (0x00023b45) aid_touch_sctrl_top_ParamLimits

0x7717,	// (0x00023b52) sctrl_sk_top_pane_g1_ParamLimits

0xc30e,	// (0x00028749) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002c13b) sctrl_sk_top_pane_g_ParamLimits

0x7724,	// (0x00023b5f) sctrl_sk_top_pane_t1_ParamLimits

0x770a,	// (0x00023b45) aid_touch_sctrl_bottom_ParamLimits

0x7724,	// (0x00023b5f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9c5,	// (0x00029e00) aid_area_touch_clock

0x7909,	// (0x00023d44) aid_vkb2_area_top_pane_cell_ParamLimits

0x7909,	// (0x00023d44) aid_vkb2_area_top_pane_cell

0x7a39,	// (0x00023e74) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7a39,	// (0x00023e74) aid_vkb2_area_bottom_pane_cell

0xdf2e,	// (0x0002a369) popup_char_count_window

0xe372,	// (0x0002a7ad) popup_char_count_window_g1

0xe37b,	// (0x0002a7b6) popup_char_count_window_g2

0xe384,	// (0x0002a7bf) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002c20c) popup_char_count_window_g

0xe38d,	// (0x0002a7c8) popup_char_count_window_t1

0x77c3,	// (0x00023bfe) popup_fep_char_preview_window_ParamLimits

0x77c3,	// (0x00023bfe) popup_fep_char_preview_window

0x7927,	// (0x00023d62) vkb2_top_candi_pane_ParamLimits

0x7927,	// (0x00023d62) vkb2_top_candi_pane

0xe39b,	// (0x0002a7d6) cell_vkb2_top_candi_pane_ParamLimits

0xe39b,	// (0x0002a7d6) cell_vkb2_top_candi_pane

0xa13b,	// (0x00026576) bg_popup_fep_char_preview_window_ParamLimits

0xa13b,	// (0x00026576) bg_popup_fep_char_preview_window

0x7d3a,	// (0x00024175) popup_fep_char_preview_window_t1_ParamLimits

0x7d3a,	// (0x00024175) popup_fep_char_preview_window_t1

0xe3ec,	// (0x0002a827) bg_popup_fep_char_preview_window_g1

0xe3f4,	// (0x0002a82f) bg_popup_fep_char_preview_window_g2

0xe3fc,	// (0x0002a837) bg_popup_fep_char_preview_window_g3

0xe404,	// (0x0002a83f) bg_popup_fep_char_preview_window_g4

0xe40c,	// (0x0002a847) bg_popup_fep_char_preview_window_g5

0x7d74,	// (0x000241af) bg_popup_fep_char_preview_window_g6

0xe414,	// (0x0002a84f) bg_popup_fep_char_preview_window_g7

0xe41c,	// (0x0002a857) bg_popup_fep_char_preview_window_g8

0xe424,	// (0x0002a85f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002c213) bg_popup_fep_char_preview_window_g

0xc30e,	// (0x00028749) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc30e,	// (0x00028749) cell_vkb2_top_candi_pane_g1

0xc64f,	// (0x00028a8a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc64f,	// (0x00028a8a) cell_vkb2_top_candi_pane_g2

0xc670,	// (0x00028aab) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc670,	// (0x00028aab) cell_vkb2_top_candi_pane_g3

0x7d7c,	// (0x000241b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7d7c,	// (0x000241b7) cell_vkb2_top_candi_pane_g4

0xe42c,	// (0x0002a867) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe42c,	// (0x0002a867) cell_vkb2_top_candi_pane_g5

0xd851,	// (0x00029c8c) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd851,	// (0x00029c8c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002c226) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002c226) cell_vkb2_top_candi_pane_g

0x7d9d,	// (0x000241d8) cell_vkb2_top_candi_pane_t1

0x7187,	// (0x000235c2) aid_size_touch_slider_mark_ParamLimits

0x7187,	// (0x000235c2) aid_size_touch_slider_mark

0xe02f,	// (0x0002a46a) grid_graphic2_catg_pane_ParamLimits

0xe02f,	// (0x0002a46a) grid_graphic2_catg_pane

0xe0cd,	// (0x0002a508) popup_grid_graphic2_window_t1_ParamLimits

0xe0cd,	// (0x0002a508) popup_grid_graphic2_window_t1

0xe0df,	// (0x0002a51a) popup_grid_graphic2_window_t2_ParamLimits

0xe0df,	// (0x0002a51a) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002c1e1) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002c1e1) popup_grid_graphic2_window_t

0x6310,	// (0x0002274b) bg_button_pane_cp05_ParamLimits

0xe24a,	// (0x0002a685) cell_graphic2_control_pane_g1_ParamLimits

0xe44d,	// (0x0002a888) cell_graphic2_catg_pane_ParamLimits

0xe44d,	// (0x0002a888) cell_graphic2_catg_pane

0x36c2,	// (0x0001fafd) bg_button_pane_cp12

0xe45f,	// (0x0002a89a) cell_graphic2_catg_pane_g1

0xd991,	// (0x00029dcc) cell_tb_ext_pane_t1_ParamLimits

0x7b56,	// (0x00023f91) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7b56,	// (0x00023f91) vkb2_top_cell_right_narrow_pane

0x7b6e,	// (0x00023fa9) vkb2_top_cell_right_wide_pane_ParamLimits

0x7b6e,	// (0x00023fa9) vkb2_top_cell_right_wide_pane

0x0ae4,	// (0x0001cf1f) bg_vkb2_func_pane_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_vkb2_func_pane

0x7bdf,	// (0x0002401a) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp03

0x7c53,	// (0x0002408e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ac9,	// (0x00025f04) bg_vkb2_func_pane_g1

0x9ad1,	// (0x00025f0c) bg_vkb2_func_pane_g2

0x9ae1,	// (0x00025f1c) bg_vkb2_func_pane_g3

0x9ad9,	// (0x00025f14) bg_vkb2_func_pane_g4

0x9ae9,	// (0x00025f24) bg_vkb2_func_pane_g5

0x9af1,	// (0x00025f2c) bg_vkb2_func_pane_g6

0x9af9,	// (0x00025f34) bg_vkb2_func_pane_g7

0x9b01,	// (0x00025f3c) bg_vkb2_func_pane_g8

0x9ac1,	// (0x00025efc) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002c233) bg_vkb2_func_pane_g

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp01

0x7bdf,	// (0x0002401a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7bdf,	// (0x0002401a) vkb2_top_cell_right_wide_pane_g1

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ae4,	// (0x0001cf1f) bg_vkb2_fuc_pane_cp02

0x7c53,	// (0x0002408e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7c53,	// (0x0002408e) vkb2_top_cell_right_narrow_pane_g1

0xd5b2,	// (0x000299ed) aid_touch_area_decrease_ParamLimits

0xd5b2,	// (0x000299ed) aid_touch_area_decrease

0xd5d6,	// (0x00029a11) aid_touch_area_increase_ParamLimits

0xd5d6,	// (0x00029a11) aid_touch_area_increase

0xd5e2,	// (0x00029a1d) aid_touch_area_mute_ParamLimits

0xd5e2,	// (0x00029a1d) aid_touch_area_mute

0xd606,	// (0x00029a41) aid_touch_area_slider_ParamLimits

0xd606,	// (0x00029a41) aid_touch_area_slider

0xd6f6,	// (0x00029b31) popup_slider_window_g4_ParamLimits

0xd6f6,	// (0x00029b31) popup_slider_window_g4

0xd702,	// (0x00029b3d) popup_slider_window_g5_ParamLimits

0xd702,	// (0x00029b3d) popup_slider_window_g5

0xd724,	// (0x00029b5f) popup_slider_window_g6_ParamLimits

0xd724,	// (0x00029b5f) popup_slider_window_g6

0xd764,	// (0x00029b9f) popup_slider_window_t2_ParamLimits

0xd764,	// (0x00029b9f) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002c12f) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002c12f) popup_slider_window_t

0xd77c,	// (0x00029bb7) slider_pane_ParamLimits

0xd77c,	// (0x00029bb7) slider_pane

0xe468,	// (0x0002a8a3) slider_pane_g1_ParamLimits

0xe468,	// (0x0002a8a3) slider_pane_g1

0xe47c,	// (0x0002a8b7) slider_pane_g2_ParamLimits

0xe47c,	// (0x0002a8b7) slider_pane_g2

0xe492,	// (0x0002a8cd) slider_pane_g3_ParamLimits

0xe492,	// (0x0002a8cd) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002c246) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002c246) slider_pane_g

0x94ba,	// (0x000258f5) popup_tb_float_extension_window_ParamLimits

0x94ba,	// (0x000258f5) popup_tb_float_extension_window

0xe4be,	// (0x0002a8f9) aid_size_cell_tb_float_ext

0x36c2,	// (0x0001fafd) bg_popup_sub_window_cp28

0xe4ca,	// (0x0002a905) grid_tb_float_ext_pane

0xe4d6,	// (0x0002a911) cell_tb_float_ext_pane_ParamLimits

0xe4d6,	// (0x0002a911) cell_tb_float_ext_pane

0xe4f2,	// (0x0002a92d) cell_tb_float_ext_pane_g1

0xe4fb,	// (0x0002a936) grid_highlight_pane_cp12

0x7452,	// (0x0002388d) cell_last_hwr_side_pane_ParamLimits

0x7452,	// (0x0002388d) cell_last_hwr_side_pane

0xc084,	// (0x000284bf) cell_last_hwr_side_pane_g1

0xe504,	// (0x0002a93f) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002c24f) cell_last_hwr_side_pane_g

0x7b05,	// (0x00023f40) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7b05,	// (0x00023f40) vkb2_area_bottom_space_btn_pane

0xc30e,	// (0x00028749) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfa1,	// (0x0002a3dc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7d9d,	// (0x000241d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7dbb,	// (0x000241f6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7dbb,	// (0x000241f6) vkb2_area_bottom_space_btn_pane_g1

0x7df5,	// (0x00024230) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7df5,	// (0x00024230) vkb2_area_bottom_space_btn_pane_g2

0x7e2b,	// (0x00024266) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7e2b,	// (0x00024266) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002c254) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002c254) vkb2_area_bottom_space_btn_pane_g

0x73c2,	// (0x000237fd) cel_fep_hwr_func_pane_ParamLimits

0x73c2,	// (0x000237fd) cel_fep_hwr_func_pane

0x73fe,	// (0x00023839) cell_hwr_side_button_pane_ParamLimits

0x73fe,	// (0x00023839) cell_hwr_side_button_pane

0xd9c5,	// (0x00029e00) aid_area_touch_clock_ParamLimits

0x6310,	// (0x0002274b) bg_uniindi_top_pane_ParamLimits

0xd9d9,	// (0x00029e14) uniindi_top_pane_g1_ParamLimits

0xd9ef,	// (0x00029e2a) uniindi_top_pane_g2_ParamLimits

0xd9fb,	// (0x00029e36) uniindi_top_pane_g3_ParamLimits

0xda0c,	// (0x00029e47) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002c167) uniindi_top_pane_g_ParamLimits

0xda19,	// (0x00029e54) uniindi_top_pane_t1_ParamLimits

0x6310,	// (0x0002274b) bg_vkb2_func_pane_cp01_ParamLimits

0x6310,	// (0x0002274b) bg_vkb2_func_pane_cp01

0xe50d,	// (0x0002a948) cel_fep_hwr_func_pane_g1_ParamLimits

0xe50d,	// (0x0002a948) cel_fep_hwr_func_pane_g1

0x6310,	// (0x0002274b) bg_vkb2_func_pane_cp02_ParamLimits

0x6310,	// (0x0002274b) bg_vkb2_func_pane_cp02

0xe50d,	// (0x0002a948) cell_hwr_side_button_pane_g1_ParamLimits

0xe50d,	// (0x0002a948) cell_hwr_side_button_pane_g1

0x9942,	// (0x00025d7d) status_pane_g4_ParamLimits

0x9942,	// (0x00025d7d) status_pane_g4

0x995c,	// (0x00025d97) status_pane_t1

0xbe7e,	// (0x000282b9) form2_midp_gauge_slider_cont_pane

0xbe86,	// (0x000282c1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe98,	// (0x000282d3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbeaa,	// (0x000282e5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002bf33) form2_midp_gauge_slider_pane_t_ParamLimits

0xbebc,	// (0x000282f7) form2_midp_slider_pane_ParamLimits

0x778b,	// (0x00023bc6) aid_size_cell_func_vkb2_ParamLimits

0x778b,	// (0x00023bc6) aid_size_cell_func_vkb2

0xe4aa,	// (0x0002a8e5) slider_pane_g4_ParamLimits

0xe4aa,	// (0x0002a8e5) slider_pane_g4

0x7e75,	// (0x000242b0) form2_midp_gauge_slider_pane_t2_cp01

0x7e83,	// (0x000242be) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7e83,	// (0x000242be) form2_midp_gauge_slider_pane_t3_cp01

0x7ea0,	// (0x000242db) form2_midp_slider_pane_cp01

0x36c2,	// (0x0001fafd) navi_smil_pane

0xe546,	// (0x0002a981) navi_smil_pane_g1

0xe54e,	// (0x0002a989) navi_smil_pane_t1

0xe51b,	// (0x0002a956) form2_midp_slider_pane_g1

0xe524,	// (0x0002a95f) form2_midp_slider_pane_g2

0xe52c,	// (0x0002a967) form2_midp_slider_pane_g3

0xe51b,	// (0x0002a956) form2_midp_slider_pane_g4

0xe534,	// (0x0002a96f) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002c25d) form2_midp_slider_pane_g

0x7e65,	// (0x000242a0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7e65,	// (0x000242a0) vkb2_area_bottom_space_btn_pane_g4

0x9759,	// (0x00025b94) lc0_navi_pane_ParamLimits

0x9759,	// (0x00025b94) lc0_navi_pane

0x97d5,	// (0x00025c10) lc0_stat_indi_pane_ParamLimits

0x97d5,	// (0x00025c10) lc0_stat_indi_pane

0x97ec,	// (0x00025c27) ls0_title_pane_ParamLimits

0x97ec,	// (0x00025c27) ls0_title_pane

0x7f75,	// (0x000243b0) bg_popup_sub_pane_cp14_ParamLimits

0xd9ac,	// (0x00029de7) list_uniindi_pane_ParamLimits

0xd9b8,	// (0x00029df3) uniindi_top_pane_ParamLimits

0xda57,	// (0x00029e92) list_single_uniindi_pane_g1_ParamLimits

0xda6a,	// (0x00029ea5) list_single_uniindi_pane_t1_ParamLimits

0x7ea9,	// (0x000242e4) lc0_stat_clock_pane_ParamLimits

0x7ea9,	// (0x000242e4) lc0_stat_clock_pane

0xe55c,	// (0x0002a997) lc0_stat_indi_pane_g1_ParamLimits

0xe55c,	// (0x0002a997) lc0_stat_indi_pane_g1

0xe569,	// (0x0002a9a4) lc0_stat_indi_pane_g2_ParamLimits

0xe569,	// (0x0002a9a4) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002c268) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002c268) lc0_stat_indi_pane_g

0x7eb6,	// (0x000242f1) lc0_uni_indicator_pane_ParamLimits

0x7eb6,	// (0x000242f1) lc0_uni_indicator_pane

0xe576,	// (0x0002a9b1) ls0_title_pane_g1_ParamLimits

0xe576,	// (0x0002a9b1) ls0_title_pane_g1

0xe58a,	// (0x0002a9c5) ls0_title_pane_t1_ParamLimits

0xe58a,	// (0x0002a9c5) ls0_title_pane_t1

0x7ec3,	// (0x000242fe) lc0_uni_indicator_pane_g1_ParamLimits

0x7ec3,	// (0x000242fe) lc0_uni_indicator_pane_g1

0xe5c0,	// (0x0002a9fb) lc0_stat_clock_pane_t1

0x36c2,	// (0x0001fafd) main_ai5_pane

0xe5ce,	// (0x0002aa09) ai5_sk_pane_ParamLimits

0xe5ce,	// (0x0002aa09) ai5_sk_pane

0xe5db,	// (0x0002aa16) cell_ai5_widget_pane_ParamLimits

0xe5db,	// (0x0002aa16) cell_ai5_widget_pane

0xe651,	// (0x0002aa8c) aid_size_cell_widget_grid

0xe665,	// (0x0002aaa0) bg_ai5_widget_pane_ParamLimits

0xe665,	// (0x0002aaa0) bg_ai5_widget_pane

0xe68d,	// (0x0002aac8) cell_ai5_widget_pane_g2

0xe69d,	// (0x0002aad8) cell_ai5_widget_pane_g3

0xe6bc,	// (0x0002aaf7) cell_ai5_widget_pane_g4

0xe6c8,	// (0x0002ab03) cell_ai5_widget_pane_g5

0xe6d4,	// (0x0002ab0f) cell_ai5_widget_pane_g6

0xe6e2,	// (0x0002ab1d) cell_ai5_widget_pane_g7

0xe72a,	// (0x0002ab65) cell_ai5_widget_pane_t1_ParamLimits

0xe72a,	// (0x0002ab65) cell_ai5_widget_pane_t1

0xe747,	// (0x0002ab82) cell_ai5_widget_pane_t2_ParamLimits

0xe747,	// (0x0002ab82) cell_ai5_widget_pane_t2

0xe75f,	// (0x0002ab9a) cell_ai5_widget_pane_t3_ParamLimits

0xe75f,	// (0x0002ab9a) cell_ai5_widget_pane_t3

0xe777,	// (0x0002abb2) cell_ai5_widget_pane_t4_ParamLimits

0xe777,	// (0x0002abb2) cell_ai5_widget_pane_t4

0xe791,	// (0x0002abcc) cell_ai5_widget_pane_t5_ParamLimits

0xe791,	// (0x0002abcc) cell_ai5_widget_pane_t5

0xe7b0,	// (0x0002abeb) cell_ai5_widget_pane_t6_ParamLimits

0xe7b0,	// (0x0002abeb) cell_ai5_widget_pane_t6

0xe7c2,	// (0x0002abfd) cell_ai5_widget_pane_t7_ParamLimits

0xe7c2,	// (0x0002abfd) cell_ai5_widget_pane_t7

0xe7db,	// (0x0002ac16) cell_ai5_widget_pane_t8_ParamLimits

0xe7db,	// (0x0002ac16) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002c282) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002c282) cell_ai5_widget_pane_t

0xe827,	// (0x0002ac62) grid_ai5_widget_pane

0x7f75,	// (0x000243b0) highlight_cell_ai5_widget_pane_ParamLimits

0x7f75,	// (0x000243b0) highlight_cell_ai5_widget_pane

0xe83e,	// (0x0002ac79) ai5_sk_left_pane

0xe848,	// (0x0002ac83) ai5_sk_middle_pane

0xe852,	// (0x0002ac8d) ai5_sk_right_pane

0xe85c,	// (0x0002ac97) bg_ai5_widget_pane_g1_ParamLimits

0xe85c,	// (0x0002ac97) bg_ai5_widget_pane_g1

0xe868,	// (0x0002aca3) bg_ai5_widget_pane_g2_ParamLimits

0xe868,	// (0x0002aca3) bg_ai5_widget_pane_g2

0xe874,	// (0x0002acaf) bg_ai5_widget_pane_g3_ParamLimits

0xe874,	// (0x0002acaf) bg_ai5_widget_pane_g3

0xe880,	// (0x0002acbb) bg_ai5_widget_pane_g4_ParamLimits

0xe880,	// (0x0002acbb) bg_ai5_widget_pane_g4

0xe88c,	// (0x0002acc7) bg_ai5_widget_pane_g5_ParamLimits

0xe88c,	// (0x0002acc7) bg_ai5_widget_pane_g5

0xe898,	// (0x0002acd3) bg_ai5_widget_pane_g6_ParamLimits

0xe898,	// (0x0002acd3) bg_ai5_widget_pane_g6

0xe8a4,	// (0x0002acdf) bg_ai5_widget_pane_g7_ParamLimits

0xe8a4,	// (0x0002acdf) bg_ai5_widget_pane_g7

0xe8b0,	// (0x0002aceb) bg_ai5_widget_pane_g8_ParamLimits

0xe8b0,	// (0x0002aceb) bg_ai5_widget_pane_g8

0xe8bc,	// (0x0002acf7) bg_ai5_widget_pane_g9_ParamLimits

0xe8bc,	// (0x0002acf7) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002c297) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002c297) bg_ai5_widget_pane_g

0xe8e3,	// (0x0002ad1e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e3,	// (0x0002ad1e) cell_shortcut_ai5_widget_pane

0x6152,	// (0x0002258d) bg_cell_shortcut_ai5_widget_pane

0xe8f5,	// (0x0002ad30) cell_grid_ai5_widget_pane_g1

0xe8fe,	// (0x0002ad39) highlight_cell_shortcut_ai5_widget_pane

0x9ad1,	// (0x00025f0c) ai5_sk_left_pane_g1

0xe906,	// (0x0002ad41) ai5_sk_left_pane_g2

0xe90e,	// (0x0002ad49) ai5_sk_left_pane_g3

0xe916,	// (0x0002ad51) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002c2aa) ai5_sk_left_pane_g

0xe91e,	// (0x0002ad59) ai5_sk_left_pane_t1

0x9ac9,	// (0x00025f04) ai5_sk_right_pane_g1

0xe92c,	// (0x0002ad67) ai5_sk_right_pane_g2

0xe934,	// (0x0002ad6f) ai5_sk_right_pane_g3

0xe93c,	// (0x0002ad77) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002c2b3) ai5_sk_right_pane_g

0xe944,	// (0x0002ad7f) ai5_sk_right_pane_t1

0x9ac9,	// (0x00025f04) ai5_sk_middle_pane_g1

0x9ad1,	// (0x00025f0c) ai5_sk_middle_pane_g2

0x9ae9,	// (0x00025f24) ai5_sk_middle_pane_g3

0xe934,	// (0x0002ad6f) ai5_sk_middle_pane_g4

0xe90e,	// (0x0002ad49) ai5_sk_middle_pane_g5

0xe952,	// (0x0002ad8d) ai5_sk_middle_pane_g6

0xe95a,	// (0x0002ad95) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002c2bc) ai5_sk_middle_pane_g

0x95db,	// (0x00025a16) aid_touch_area_size_lc0_ParamLimits

0x95db,	// (0x00025a16) aid_touch_area_size_lc0

0x7561,	// (0x0002399c) cell_hwr_candidate_pane_t1_ParamLimits

0x95f9,	// (0x00025a34) aid_touch_navi_pane

0x98ec,	// (0x00025d27) status_dt_navi_pane_ParamLimits

0x98ec,	// (0x00025d27) status_dt_navi_pane

0x98f9,	// (0x00025d34) status_dt_sta_pane_ParamLimits

0x98f9,	// (0x00025d34) status_dt_sta_pane

0xe962,	// (0x0002ad9d) dt_sta_controll_pane

0xe96f,	// (0x0002adaa) dt_sta_indi_pane

0xe980,	// (0x0002adbb) dt_sta_title_pane

0x6310,	// (0x0002274b) bg_dt_sta_indi_pane_ParamLimits

0x6310,	// (0x0002274b) bg_dt_sta_indi_pane

0xe993,	// (0x0002adce) dt_sta_battery_pane

0xe99b,	// (0x0002add6) dt_sta_indi_pane_g1

0xe9a4,	// (0x0002addf) dt_sta_indi_pane_g2

0xe9ad,	// (0x0002ade8) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002c2cb) dt_sta_indi_pane_g

0xe9b6,	// (0x0002adf1) dt_sta_signal_pane

0x7f75,	// (0x000243b0) bg_dt_sta_title_pane_ParamLimits

0x7f75,	// (0x000243b0) bg_dt_sta_title_pane

0xe9bf,	// (0x0002adfa) dt_sta_title_pane_g1

0xe9c7,	// (0x0002ae02) dt_sta_title_pane_t1_ParamLimits

0xe9c7,	// (0x0002ae02) dt_sta_title_pane_t1

0x36c2,	// (0x0001fafd) bg_dt_sta_control_pane

0xe9dc,	// (0x0002ae17) dt_sta_controll_pane_g1

0xe9e5,	// (0x0002ae20) bg_dt_sta_title_pane_g1

0xe9ee,	// (0x0002ae29) bg_dt_sta_title_pane_g2

0xe9f7,	// (0x0002ae32) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002c2d2) bg_dt_sta_title_pane_g

0xc084,	// (0x000284bf) bg_dt_sta_indi_pane_g1

0xea00,	// (0x0002ae3b) dt_sta_signal_pane_g1

0xea08,	// (0x0002ae43) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002c2d9) dt_sta_signal_pane_g

0xea10,	// (0x0002ae4b) dt_sta_battery_pane_g1

0xea19,	// (0x0002ae54) dt_sta_battery_pane_t1

0xc084,	// (0x000284bf) bg_dt_sta_control_pane_g1

0x86fc,	// (0x00024b37) fep_china_uni_eep_pane

0x8704,	// (0x00024b3f) fep_china_uni_entry_pane_ParamLimits

0x8714,	// (0x00024b4f) popup_fep_china_uni_window_g1_ParamLimits

0x8724,	// (0x00024b5f) popup_fep_china_uni_window_g2_ParamLimits

0x8724,	// (0x00024b5f) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002bb70) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002bb70) popup_fep_china_uni_window_g

0xea28,	// (0x0002ae63) fep_china_uni_eep_pane_g1

0xea30,	// (0x0002ae6b) fep_china_uni_eep_pane_t1

0xe53d,	// (0x0002a978) aid_touch_area_size_smil_player

0x9751,	// (0x00025b8c) lc0_clock_pane

0x9950,	// (0x00025d8b) status_pane_g5_ParamLimits

0x9950,	// (0x00025d8b) status_pane_g5

0x913f,	// (0x0002557a) popup_keymap_window

0x990e,	// (0x00025d49) status_icon_pane

0xe69d,	// (0x0002aad8) cell_ai5_widget_pane_g3_ParamLimits

0xe6bc,	// (0x0002aaf7) cell_ai5_widget_pane_g4_ParamLimits

0xe6c8,	// (0x0002ab03) cell_ai5_widget_pane_g5_ParamLimits

0xe6ee,	// (0x0002ab29) cell_ai5_widget_pane_g8_ParamLimits

0xe6ee,	// (0x0002ab29) cell_ai5_widget_pane_g8

0xe702,	// (0x0002ab3d) cell_ai5_widget_pane_g9_ParamLimits

0xe702,	// (0x0002ab3d) cell_ai5_widget_pane_g9

0xe716,	// (0x0002ab51) cell_ai5_widget_pane_g10_ParamLimits

0xe716,	// (0x0002ab51) cell_ai5_widget_pane_g10

0xea3f,	// (0x0002ae7a) status_icon_pane_g1

0x36c2,	// (0x0001fafd) bg_popup_sub_pane_cp13

0xea47,	// (0x0002ae82) popup_keymap_window_t1

0x8ed9,	// (0x00025314) control_pane_g6_ParamLimits

0x8ed9,	// (0x00025314) control_pane_g6

0x8ee6,	// (0x00025321) control_pane_g7_ParamLimits

0x8ee6,	// (0x00025321) control_pane_g7

0x8ef3,	// (0x0002532e) control_pane_g8_ParamLimits

0x8ef3,	// (0x0002532e) control_pane_g8

0xe962,	// (0x0002ad9d) dt_sta_controll_pane_ParamLimits

0xe96f,	// (0x0002adaa) dt_sta_indi_pane_ParamLimits

0xe980,	// (0x0002adbb) dt_sta_title_pane_ParamLimits

0x6845,	// (0x00022c80) aid_size_touch_scroll_bar_cale

0x5da8,	// (0x000221e3) popup_discreet_window_ParamLimits

0x5da8,	// (0x000221e3) popup_discreet_window

0x5e36,	// (0x00022271) popup_sk_window

0xa13b,	// (0x00026576) bg_popup_sub_pane_cp28_ParamLimits

0xa13b,	// (0x00026576) bg_popup_sub_pane_cp28

0xea55,	// (0x0002ae90) popup_discreet_window_g1_ParamLimits

0xea55,	// (0x0002ae90) popup_discreet_window_g1

0xea75,	// (0x0002aeb0) popup_discreet_window_t1_ParamLimits

0xea75,	// (0x0002aeb0) popup_discreet_window_t1

0xea93,	// (0x0002aece) popup_discreet_window_t2_ParamLimits

0xea93,	// (0x0002aece) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002c2de) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002c2de) popup_discreet_window_t

0x7ed6,	// (0x00024311) popup_sk_window_g1

0x7ee0,	// (0x0002431b) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002c2e5) popup_sk_window_g

0xeae5,	// (0x0002af20) popup_sk_window_t1

0xeaf3,	// (0x0002af2e) popup_sk_window_t1_copy1

0xe68d,	// (0x0002aac8) cell_ai5_widget_pane_g2_ParamLimits

0xe7ed,	// (0x0002ac28) cell_ai5_widget_pane_t9_ParamLimits

0xe7ed,	// (0x0002ac28) cell_ai5_widget_pane_t9

0x36c2,	// (0x0001fafd) main_fep_fshwr2_pane

0xeb01,	// (0x0002af3c) aid_fshwr2_btn_pane

0xeb09,	// (0x0002af44) aid_fshwr2_syb_pane

0xeb11,	// (0x0002af4c) aid_fshwr2_txt_pane

0xeb19,	// (0x0002af54) fshwr2_func_candi_pane

0xeb23,	// (0x0002af5e) fshwr2_hwr_syb_pane

0xeb2d,	// (0x0002af68) fshwr2_icf_pane

0x36c2,	// (0x0001fafd) fshwr2_icf_bg_pane

0xeb4f,	// (0x0002af8a) fshwr2_icf_pane_t1_ParamLimits

0xeb4f,	// (0x0002af8a) fshwr2_icf_pane_t1

0xc084,	// (0x000284bf) fshwr2_func_candi_pane_g1

0xeb66,	// (0x0002afa1) fshwr2_func_candi_row_pane_ParamLimits

0xeb66,	// (0x0002afa1) fshwr2_func_candi_row_pane

0xeb77,	// (0x0002afb2) cell_fshwr2_syb_pane_ParamLimits

0xeb77,	// (0x0002afb2) cell_fshwr2_syb_pane

0xc30e,	// (0x00028749) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc30e,	// (0x00028749) fshwr2_hwr_syb_pane_g1

0x36c2,	// (0x0001fafd) bg_popup_call_pane_cp01

0xeb91,	// (0x0002afcc) fshwr2_func_candi_cell_pane_ParamLimits

0xeb91,	// (0x0002afcc) fshwr2_func_candi_cell_pane

0xebc3,	// (0x0002affe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebc3,	// (0x0002affe) fshwr2_func_candi_cell_bg_pane

0xebdd,	// (0x0002b018) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebdd,	// (0x0002b018) fshwr2_func_candi_cell_pane_g1

0xebfd,	// (0x0002b038) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebfd,	// (0x0002b038) fshwr2_func_candi_cell_pane_t1

0x36c2,	// (0x0001fafd) bg_button_pane_cp08

0x8bfe,	// (0x00025039) cell_fshwr2_syb_bg_pane

0xec10,	// (0x0002b04b) cell_fshwr2_syb_bg_pane_g1

0xec18,	// (0x0002b053) cell_fshwr2_syb_bg_pane_t1

0x7f75,	// (0x000243b0) main_tmo_pane

0xac65,	// (0x000270a0) uni_indicator_pane_g1_ParamLimits

0xac7a,	// (0x000270b5) uni_indicator_pane_g2_ParamLimits

0xac90,	// (0x000270cb) uni_indicator_pane_g3_ParamLimits

0xaca6,	// (0x000270e1) uni_indicator_pane_g4_ParamLimits

0xaca6,	// (0x000270e1) uni_indicator_pane_g4

0xacba,	// (0x000270f5) uni_indicator_pane_g5_ParamLimits

0xacba,	// (0x000270f5) uni_indicator_pane_g5

0xacce,	// (0x00027109) uni_indicator_pane_g6_ParamLimits

0xacce,	// (0x00027109) uni_indicator_pane_g6

0xf932,	// (0x0002bd6d) uni_indicator_pane_g_ParamLimits

0xd582,	// (0x000299bd) popup_tmo_note_window_ParamLimits

0xd582,	// (0x000299bd) popup_tmo_note_window

0x36c2,	// (0x0001fafd) fshwr2_bg_pane

0xebee,	// (0x0002b029) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebee,	// (0x0002b029) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002c2ea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002c2ea) fshwr2_func_candi_cell_pane_g

0xc084,	// (0x000284bf) bg_popup_window_pane_cp01

0xec27,	// (0x0002b062) bg_popup_window_pane_g1_cp01

0xec30,	// (0x0002b06b) bg_popup_window_pane_cp22_ParamLimits

0xec30,	// (0x0002b06b) bg_popup_window_pane_cp22

0xec3e,	// (0x0002b079) listscroll_tmo_link_pane_ParamLimits

0xec3e,	// (0x0002b079) listscroll_tmo_link_pane

0xec7e,	// (0x0002b0b9) popup_tmo_note_window_g1_ParamLimits

0xec7e,	// (0x0002b0b9) popup_tmo_note_window_g1

0xec8b,	// (0x0002b0c6) tmo_note_info_pane_ParamLimits

0xec8b,	// (0x0002b0c6) tmo_note_info_pane

0xeca5,	// (0x0002b0e0) list_tmo_note_info_pane_g1_ParamLimits

0xeca5,	// (0x0002b0e0) list_tmo_note_info_pane_g1

0xecbc,	// (0x0002b0f7) list_tmo_note_info_pane_g2_ParamLimits

0xecbc,	// (0x0002b0f7) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002c2ef) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002c2ef) list_tmo_note_info_pane_g

0xecd8,	// (0x0002b113) list_tmo_note_info_text_pane_ParamLimits

0xecd8,	// (0x0002b113) list_tmo_note_info_text_pane

0xed5d,	// (0x0002b198) list_tmo_link_pane

0xed6a,	// (0x0002b1a5) scroll_pane_cp20

0xed77,	// (0x0002b1b2) list_single_tmo_link_pane_ParamLimits

0xed77,	// (0x0002b1b2) list_single_tmo_link_pane

0xed87,	// (0x0002b1c2) list_single_tmo_link_pane_t1

0xed95,	// (0x0002b1d0) list_tmo_note_info_text_pane_t1_ParamLimits

0xed95,	// (0x0002b1d0) list_tmo_note_info_text_pane_t1

0x803b,	// (0x00024476) aid_size_touch_scroll_bar_cp01_ParamLimits

0x803b,	// (0x00024476) aid_size_touch_scroll_bar_cp01

0x519f,	// (0x000215da) aid_size_touch_slider_marker

0x5e1e,	// (0x00022259) popup_settings_window_ParamLimits

0x5e1e,	// (0x00022259) popup_settings_window

0x534a,	// (0x00021785) popup_candi_list_indi_window

0x95f9,	// (0x00025a34) aid_touch_navi_pane_ParamLimits

0x76de,	// (0x00023b19) rs_clock_indi_pane

0x76e7,	// (0x00023b22) sctrl_sk_bottom_pane_ParamLimits

0x76f8,	// (0x00023b33) sctrl_sk_top_pane_ParamLimits

0x77dd,	// (0x00023c18) popup_fep_tooltip_window

0xe651,	// (0x0002aa8c) aid_size_cell_widget_grid_ParamLimits

0xe681,	// (0x0002aabc) cell_ai5_widget_pane_g1_ParamLimits

0xe681,	// (0x0002aabc) cell_ai5_widget_pane_g1

0xe6d4,	// (0x0002ab0f) cell_ai5_widget_pane_g6_ParamLimits

0xe6e2,	// (0x0002ab1d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002c26d) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002c26d) cell_ai5_widget_pane_g

0xe811,	// (0x0002ac4c) cell_ai5_widget_pane_t10_ParamLimits

0xe811,	// (0x0002ac4c) cell_ai5_widget_pane_t10

0xe827,	// (0x0002ac62) grid_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0002ad03) cell_contacts_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0002ad03) cell_contacts_ai5_widget_pane

0xeaa8,	// (0x0002aee3) popup_discreet_window_t3_ParamLimits

0xeaa8,	// (0x0002aee3) popup_discreet_window_t3

0xeb37,	// (0x0002af72) popup_fshwr2_char_preview_window_ParamLimits

0xeb37,	// (0x0002af72) popup_fshwr2_char_preview_window

0xecf6,	// (0x0002b131) tmo_note_info_pane_t1

0xed0b,	// (0x0002b146) tmo_note_info_pane_t2

0xed24,	// (0x0002b15f) tmo_note_info_pane_t3

0xed39,	// (0x0002b174) tmo_note_info_pane_t4

0xed4b,	// (0x0002b186) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002c2f4) tmo_note_info_pane_t

0xed5d,	// (0x0002b198) list_tmo_link_pane_ParamLimits

0xed6a,	// (0x0002b1a5) scroll_pane_cp20_ParamLimits

0x36c2,	// (0x0001fafd) bg_popup_fep_char_preview_window_cp01

0xedae,	// (0x0002b1e9) popup_fshwr2_char_preview_window_t1

0xedbc,	// (0x0002b1f7) popup_candi_list_indi_window_g1

0xedc5,	// (0x0002b200) bg_cell_contacts_ai5_widget_pane

0xedd1,	// (0x0002b20c) cell_contacts_ai5_widget_pane_g1

0xede5,	// (0x0002b220) cell_contacts_ai5_widget_pane_g2

0xedf4,	// (0x0002b22f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002c2ff) cell_contacts_ai5_widget_pane_g

0xee07,	// (0x0002b242) cell_contacts_ai5_widget_pane_t1

0x7f75,	// (0x000243b0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee81,	// (0x0002b2bc) settings_container_pane

0x8bfe,	// (0x00025039) listscroll_set_pane_copy1

0xb83f,	// (0x00027c7a) scroll_pane_cp121_copy1

0xee8d,	// (0x0002b2c8) set_content_pane_copy1

0xee95,	// (0x0002b2d0) aid_height_set_list_copy1_ParamLimits

0xee95,	// (0x0002b2d0) aid_height_set_list_copy1

0xaece,	// (0x00027309) aid_size_parent_copy1_ParamLimits

0xaece,	// (0x00027309) aid_size_parent_copy1

0xeea1,	// (0x0002b2dc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeea1,	// (0x0002b2dc) button_value_adjust_pane_cp6_copy1

0x8f84,	// (0x000253bf) list_highlight_pane_cp2_copy1_ParamLimits

0x8f84,	// (0x000253bf) list_highlight_pane_cp2_copy1

0xeeb5,	// (0x0002b2f0) list_set_pane_copy1_ParamLimits

0xeeb5,	// (0x0002b2f0) list_set_pane_copy1

0xee1c,	// (0x0002b257) main_pane_set_t1_copy1_ParamLimits

0xee1c,	// (0x0002b257) main_pane_set_t1_copy1

0xee56,	// (0x0002b291) main_pane_set_t2_copy1_ParamLimits

0xee56,	// (0x0002b291) main_pane_set_t2_copy1

0xef7c,	// (0x0002b3b7) main_pane_set_t3_copy1

0xef8a,	// (0x0002b3c5) main_pane_set_t4_copy1

0xee75,	// (0x0002b2b0) set_content_pane_g1_copy1_ParamLimits

0xee75,	// (0x0002b2b0) set_content_pane_g1_copy1

0xef98,	// (0x0002b3d3) setting_code_pane_copy1

0xefa2,	// (0x0002b3dd) setting_slider_graphic_pane_copy1

0xefa2,	// (0x0002b3dd) setting_slider_pane_copy1

0xefa2,	// (0x0002b3dd) setting_text_pane_copy1

0xefac,	// (0x0002b3e7) setting_volume_pane_copy1

0xefb5,	// (0x0002b3f0) settings_code_pane_cp2_copy1

0xefbd,	// (0x0002b3f8) settings_code_pane_cp_copy1_ParamLimits

0xefbd,	// (0x0002b3f8) settings_code_pane_cp_copy1

0xefd1,	// (0x0002b40c) volume_set_pane_copy1

0xefdd,	// (0x0002b418) volume_set_pane_g10_copy1

0xefe9,	// (0x0002b424) volume_set_pane_g1_copy1

0xeff3,	// (0x0002b42e) volume_set_pane_g2_copy1

0xeffd,	// (0x0002b438) volume_set_pane_g3_copy1

0xf007,	// (0x0002b442) volume_set_pane_g4_copy1

0xf011,	// (0x0002b44c) volume_set_pane_g5_copy1

0xf01b,	// (0x0002b456) volume_set_pane_g6_copy1

0xf025,	// (0x0002b460) volume_set_pane_g7_copy1

0xf02f,	// (0x0002b46a) volume_set_pane_g8_copy1

0xf039,	// (0x0002b474) volume_set_pane_g9_copy1

0x5ff6,	// (0x00022431) bg_set_opt_pane_cp_copy1_ParamLimits

0x5ff6,	// (0x00022431) bg_set_opt_pane_cp_copy1

0xf043,	// (0x0002b47e) setting_slider_pane_t1_copy1_ParamLimits

0xf043,	// (0x0002b47e) setting_slider_pane_t1_copy1

0xf061,	// (0x0002b49c) setting_slider_pane_t2_copy1_ParamLimits

0xf061,	// (0x0002b49c) setting_slider_pane_t2_copy1

0xf07b,	// (0x0002b4b6) setting_slider_pane_t3_copy1_ParamLimits

0xf07b,	// (0x0002b4b6) setting_slider_pane_t3_copy1

0xf093,	// (0x0002b4ce) slider_set_pane_copy1_ParamLimits

0xf093,	// (0x0002b4ce) slider_set_pane_copy1

0x7fdc,	// (0x00024417) set_opt_bg_pane_g1_copy2

0x7fe4,	// (0x0002441f) set_opt_bg_pane_g2_copy2

0xf0a9,	// (0x0002b4e4) set_opt_bg_pane_g3_copy2

0x7ff4,	// (0x0002442f) set_opt_bg_pane_g4_copy2

0x7ffc,	// (0x00024437) set_opt_bg_pane_g5_copy2

0x8004,	// (0x0002443f) set_opt_bg_pane_g6_copy2

0xf0b3,	// (0x0002b4ee) set_opt_bg_pane_g7_copy2

0xf0bd,	// (0x0002b4f8) set_opt_bg_pane_g8_copy2

0xf0c7,	// (0x0002b502) set_opt_bg_pane_g9_copy2

0x7eea,	// (0x00024325) aid_size_touch_slider_mark_copy1_ParamLimits

0x7eea,	// (0x00024325) aid_size_touch_slider_mark_copy1

0xf0d1,	// (0x0002b50c) slider_set_pane_g1_copy1

0x7efe,	// (0x00024339) slider_set_pane_g2_copy1

0x71a7,	// (0x000235e2) slider_set_pane_g3_copy1_ParamLimits

0x71a7,	// (0x000235e2) slider_set_pane_g3_copy1

0x71bb,	// (0x000235f6) slider_set_pane_g4_copy1_ParamLimits

0x71bb,	// (0x000235f6) slider_set_pane_g4_copy1

0x71d3,	// (0x0002360e) slider_set_pane_g5_copy1_ParamLimits

0x71d3,	// (0x0002360e) slider_set_pane_g5_copy1

0x71a7,	// (0x000235e2) slider_set_pane_g6_copy1_ParamLimits

0x71a7,	// (0x000235e2) slider_set_pane_g6_copy1

0x7f06,	// (0x00024341) slider_set_pane_g7_copy1_ParamLimits

0x7f06,	// (0x00024341) slider_set_pane_g7_copy1

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp2_copy1

0xf0da,	// (0x0002b515) setting_slider_graphic_pane_g1_copy1

0xf0e3,	// (0x0002b51e) setting_slider_graphic_pane_t1_copy1

0xf0f3,	// (0x0002b52e) setting_slider_graphic_pane_t2_copy1

0xf103,	// (0x0002b53e) slider_set_pane_cp_copy1

0xf113,	// (0x0002b54e) input_focus_pane_cp1_copy1

0xf11c,	// (0x0002b557) list_set_text_pane_copy1

0xf124,	// (0x0002b55f) setting_text_pane_g1_copy1

0x5aff,	// (0x00021f3a) set_text_pane_t1_copy1

0xf113,	// (0x0002b54e) input_focus_pane_cp2_copy1

0xf124,	// (0x0002b55f) setting_code_pane_g1_copy1

0xf12d,	// (0x0002b568) setting_code_pane_t1_copy1

0xf13b,	// (0x0002b576) list_set_graphic_pane_copy1

0x384f,	// (0x0001fc8a) bg_set_opt_pane_cp4_copy1

0x88f8,	// (0x00024d33) list_set_graphic_pane_g1_copy1_ParamLimits

0x88f8,	// (0x00024d33) list_set_graphic_pane_g1_copy1

0xf14d,	// (0x0002b588) list_set_graphic_pane_g2_copy1

0x8910,	// (0x00024d4b) list_set_graphic_pane_t1_copy1_ParamLimits

0x8910,	// (0x00024d4b) list_set_graphic_pane_t1_copy1

0xc084,	// (0x000284bf) rs_clock_indi_pane_g1

0xf155,	// (0x0002b590) rs_clock_indi_pane_t1

0xf163,	// (0x0002b59e) rs_indi_pane

0xf16b,	// (0x0002b5a6) rs_indi_pane_g1

0xf174,	// (0x0002b5af) rs_indi_pane_g2

0xf17d,	// (0x0002b5b8) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002c306) rs_indi_pane_g

0x8bfe,	// (0x00025039) bg_popup_preview_window_pane_cp03

0xf186,	// (0x0002b5c1) popup_fep_tooltip_window_t1

0xcd2a,	// (0x00029165) popup_note2_window_g2_ParamLimits

0xcd2a,	// (0x00029165) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002c09f) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002c09f) popup_note2_window_g

0xd232,	// (0x0002966d) bg_popup_sub_pane_cp11_ParamLimits

0xd23f,	// (0x0002967a) cell_ai3_links_pane_g1_ParamLimits

0xd256,	// (0x00029691) cell_ai3_links_pane_t1

0x5aff,	// (0x00021f3a) set_text_pane_t1_copy1_ParamLimits

0x8b0b,	// (0x00024f46) cell_graphic_popup_pane_cp2_ParamLimits

0x8b0b,	// (0x00024f46) cell_graphic_popup_pane_cp2

0xf194,	// (0x0002b5cf) cell_graphic_popup_pane_g1_cp2

0x6658,	// (0x00022a93) cell_graphic_popup_pane_g2_cp2

0xf19c,	// (0x0002b5d7) cell_graphic_popup_pane_g3_cp2

0xf1a4,	// (0x0002b5df) cell_graphic_popup_pane_t2_cp2

0x6669,	// (0x00022aa4) grid_highlight_pane_cp3_cp2

0x8328,	// (0x00024763) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7f75,	// (0x000243b0) main_tmo_pane_ParamLimits

0xd576,	// (0x000299b1) popup_tmo_big_image_note_window

0xe671,	// (0x0002aaac) cell_ai5_widget_list_pane

0xe679,	// (0x0002aab4) cell_ai5_widget_lrg_icon_pane

0xecf6,	// (0x0002b131) tmo_note_info_pane_t1_ParamLimits

0xed0b,	// (0x0002b146) tmo_note_info_pane_t2_ParamLimits

0xed24,	// (0x0002b15f) tmo_note_info_pane_t3_ParamLimits

0xed39,	// (0x0002b174) tmo_note_info_pane_t4_ParamLimits

0xed4b,	// (0x0002b186) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002c2f4) tmo_note_info_pane_t_ParamLimits

0xee81,	// (0x0002b2bc) settings_container_pane_ParamLimits

0xf10b,	// (0x0002b546) indicator_popup_pane_cp5

0xf10b,	// (0x0002b546) indicator_popup_pane_cp6

0xf13b,	// (0x0002b576) list_set_graphic_pane_copy1_ParamLimits

0x36c2,	// (0x0001fafd) bg_popup_window_pane_cp23

0xf1b2,	// (0x0002b5ed) popup_tmo_big_image_note_window_g1

0xf1be,	// (0x0002b5f9) popup_tmo_big_image_note_window_t1

0xf1ce,	// (0x0002b609) popup_tmo_big_image_note_window_t2

0xf1de,	// (0x0002b619) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002c30d) popup_tmo_big_image_note_window_t

0xf1ee,	// (0x0002b629) cell_ai5_widget_lrg_icon_pane_g1

0xf1f6,	// (0x0002b631) cell_ai5_widget_lrg_icon_pane_t1

0xf204,	// (0x0002b63f) cell_ai5_widget_list_row_pane_ParamLimits

0xf204,	// (0x0002b63f) cell_ai5_widget_list_row_pane

0xf21d,	// (0x0002b658) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21d,	// (0x0002b658) cell_ai5_widget_list_row_pane_g1

0xf22a,	// (0x0002b665) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22a,	// (0x0002b665) cell_ai5_widget_list_row_pane_t1

0xf242,	// (0x0002b67d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf242,	// (0x0002b67d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed9,	// (0x0002c314) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002c314) cell_ai5_widget_list_row_pane_t

0x36c2,	// (0x0001fafd) main_fep_vtchi_ss_pane

0xf254,	// (0x0002b68f) popup_fep_char_pre_window

0xf25c,	// (0x0002b697) popup_fep_ituss_window

0xf276,	// (0x0002b6b1) popup_fep_vkbss_window

0xf296,	// (0x0002b6d1) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x0002b6d1) grid_vkbss_keypad_pane

0xf2a6,	// (0x0002b6e1) ituss_keypad_pane

0xf2bc,	// (0x0002b6f7) aid_vkbss_key_offset_ParamLimits

0xf2bc,	// (0x0002b6f7) aid_vkbss_key_offset

0xf2c8,	// (0x0002b703) cell_vkbss_key_pane_ParamLimits

0xf2c8,	// (0x0002b703) cell_vkbss_key_pane

0xf2de,	// (0x0002b719) bg_cell_vkbss_key_g1_ParamLimits

0xf2de,	// (0x0002b719) bg_cell_vkbss_key_g1

0xf2ea,	// (0x0002b725) cell_vkbss_key_3p_pane_ParamLimits

0xf2ea,	// (0x0002b725) cell_vkbss_key_3p_pane

0xf304,	// (0x0002b73f) cell_vkbss_key_g1_ParamLimits

0xf304,	// (0x0002b73f) cell_vkbss_key_g1

0xf31e,	// (0x0002b759) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x0002b759) cell_vkbss_key_t1

0xf349,	// (0x0002b784) cell_ituss_key_pane_ParamLimits

0xf349,	// (0x0002b784) cell_ituss_key_pane

0xf359,	// (0x0002b794) bg_cell_ituss_key_g1_ParamLimits

0xf359,	// (0x0002b794) bg_cell_ituss_key_g1

0xf365,	// (0x0002b7a0) cell_ituss_key_pane_g1_ParamLimits

0xf365,	// (0x0002b7a0) cell_ituss_key_pane_g1

0xf371,	// (0x0002b7ac) cell_ituss_key_pane_g2_ParamLimits

0xf371,	// (0x0002b7ac) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0002c319) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0002c319) cell_ituss_key_pane_g

0xf38a,	// (0x0002b7c5) cell_ituss_key_t1_ParamLimits

0xf38a,	// (0x0002b7c5) cell_ituss_key_t1

0xf3b8,	// (0x0002b7f3) cell_ituss_key_t2_ParamLimits

0xf3b8,	// (0x0002b7f3) cell_ituss_key_t2

0xf3e9,	// (0x0002b824) cell_ituss_key_t3_ParamLimits

0xf3e9,	// (0x0002b824) cell_ituss_key_t3

0xf41a,	// (0x0002b855) cell_ituss_key_t4_ParamLimits

0xf41a,	// (0x0002b855) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0002c31e) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002c31e) cell_ituss_key_t

0xf44b,	// (0x0002b886) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0002b88e) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0002b896) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0002c327) cell_vkbss_key_3p_pane_g

0x36c2,	// (0x0001fafd) bg_popup_fep_char_preview_window_cp02

0xf463,	// (0x0002b89e) popup_fep_char_pre_window_t1

0xe647,	// (0x0002aa82) main_ai5_sk_pane

0xedc5,	// (0x0002b200) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedd1,	// (0x0002b20c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xede5,	// (0x0002b220) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedf4,	// (0x0002b22f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002c2ff) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee07,	// (0x0002b242) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7f75,	// (0x000243b0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf472,	// (0x0002b8ad) main_ai5_sk_pane_g1

0x9f73,	// (0x000263ae) popup_query_code_window_g1

0xf26b,	// (0x0002b6a6) popup_fep_vkb_icf_pane

0xf281,	// (0x0002b6bc) popup_fep_vtchi_icf_pane

0x7f75,	// (0x000243b0) bg_icf_pane

0xf48a,	// (0x0002b8c5) list_vkb_icf_pane

0x7f75,	// (0x000243b0) bg_icf_pane_cp01

0xf4a2,	// (0x0002b8dd) vtchi_icf_list_pane

0xf4b2,	// (0x0002b8ed) list_vkb_icf_pane_t1_ParamLimits

0xf4b2,	// (0x0002b8ed) list_vkb_icf_pane_t1

0xf4c9,	// (0x0002b904) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0002b904) vtchi_icf_list_pane_t1

0xf25c,	// (0x0002b697) popup_fep_ituss_window_ParamLimits

0xf281,	// (0x0002b6bc) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x0002b6e1) ituss_keypad_pane_ParamLimits

0xf2b2,	// (0x0002b6ed) ituss_sks_pane

0x7f75,	// (0x000243b0) bg_icf_pane_ParamLimits

0xf47b,	// (0x0002b8b6) icf_edit_indi_pane_ParamLimits

0xf47b,	// (0x0002b8b6) icf_edit_indi_pane

0xf48a,	// (0x0002b8c5) list_vkb_icf_pane_ParamLimits

0x7f75,	// (0x000243b0) bg_icf_pane_cp01_ParamLimits

0xf496,	// (0x0002b8d1) icf_edit_indi_pane_cp01_ParamLimits

0xf496,	// (0x0002b8d1) icf_edit_indi_pane_cp01

0xf4aa,	// (0x0002b8e5) vtchi_query_pane

0xc30e,	// (0x00028749) icf_edit_indi_pane_g1_ParamLimits

0xc30e,	// (0x00028749) icf_edit_indi_pane_g1

0xf4e2,	// (0x0002b91d) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0002b91d) icf_edit_indi_pane_g2

0x0001,

0xfef3,	// (0x0002c32e) icf_edit_indi_pane_g_ParamLimits

0xfef3,	// (0x0002c32e) icf_edit_indi_pane_g

0xf4ee,	// (0x0002b929) icf_edit_indi_pane_t1

0xf4fc,	// (0x0002b937) bg_input_focus_pane_cp042

0x683c,	// (0x00022c77) vtchi_button_pane

0xf505,	// (0x0002b940) vtchi_query_pane_t1

0xf513,	// (0x0002b94e) vtchi_query_pane_t2

0xf521,	// (0x0002b95c) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0002c333) vtchi_query_pane_t

0x36c2,	// (0x0001fafd) bg_button_pane_cp13

0xf52f,	// (0x0002b96a) vtchi_button_pane_g1

0xf537,	// (0x0002b972) ituss_sks_pane_g1

0xf542,	// (0x0002b97d) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0002c33a) ituss_sks_pane_g

0xf54a,	// (0x0002b985) ituss_sks_pane_t1

0xf558,	// (0x0002b993) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0002c33f) ituss_sks_pane_t

0xbba1,	// (0x00027fdc) indicator_nsta_pane_cp_g1

0xbbaa,	// (0x00027fe5) indicator_nsta_pane_cp_g2

0xbbb2,	// (0x00027fed) indicator_nsta_pane_cp_g3

0xbbba,	// (0x00027ff5) indicator_nsta_pane_cp_g4

0xbbc2,	// (0x00027ffd) indicator_nsta_pane_cp_g5

0xbbca,	// (0x00028005) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002bee9) indicator_nsta_pane_cp_g

0xe237,	// (0x0002a672) cell_graphic2_pane_t2_ParamLimits

0xe237,	// (0x0002a672) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002c1f6) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002c1f6) cell_graphic2_pane_t

0xe264,	// (0x0002a69f) cell_graphic2_control_pane_t1

0x86ab,	// (0x00024ae6) signal_pane_g3_ParamLimits

0x86ab,	// (0x00024ae6) signal_pane_g3

0x86bd,	// (0x00024af8) signal_pane_g4_ParamLimits

0x86bd,	// (0x00024af8) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

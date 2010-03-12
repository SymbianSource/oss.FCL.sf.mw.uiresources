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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002ea65 };

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
0x99d1,	// (0x00038436) Screen

0x99dd,	// (0x00038442) application_window_ParamLimits

0x99dd,	// (0x00038442) application_window

0x404b,	// (0x00032ab0) screen_g1

0x9a39,	// (0x0003849e) area_bottom_pane_ParamLimits

0x9a39,	// (0x0003849e) area_bottom_pane

0x9af9,	// (0x0003855e) area_top_pane_ParamLimits

0x9af9,	// (0x0003855e) area_top_pane

0x9b8d,	// (0x000385f2) main_pane_ParamLimits

0x9b8d,	// (0x000385f2) main_pane

0x4055,	// (0x00032aba) misc_graphics

0xb14c,	// (0x00039bb1) battery_pane_ParamLimits

0xb14c,	// (0x00039bb1) battery_pane

0x5c81,	// (0x000346e6) bg_status_flat_pane_g8

0x5c89,	// (0x000346ee) bg_status_flat_pane_g9

0x5374,	// (0x00033dd9) context_pane_ParamLimits

0x5374,	// (0x00033dd9) context_pane

0xb280,	// (0x00039ce5) navi_pane_ParamLimits

0xb280,	// (0x00039ce5) navi_pane

0xb2ed,	// (0x00039d52) signal_pane_ParamLimits

0xb2ed,	// (0x00039d52) signal_pane

0x0008,

0xf884,	// (0x0003e2e9) bg_status_flat_pane_g

0xb352,	// (0x00039db7) status_pane_g1_ParamLimits

0xb352,	// (0x00039db7) status_pane_g1

0x5419,	// (0x00033e7e) status_pane_g2_ParamLimits

0x5419,	// (0x00033e7e) status_pane_g2

0x53d9,	// (0x00033e3e) status_pane_g3_ParamLimits

0x53d9,	// (0x00033e3e) status_pane_g3

0x0004,

0xf7ab,	// (0x0003e210) status_pane_g_ParamLimits

0xf7ab,	// (0x0003e210) status_pane_g

0xb366,	// (0x00039dcb) title_pane_ParamLimits

0xb366,	// (0x00039dcb) title_pane

0xb3a3,	// (0x00039e08) uni_indicator_pane_ParamLimits

0xb3a3,	// (0x00039e08) uni_indicator_pane

0x52b7,	// (0x00033d1c) bg_list_pane_ParamLimits

0x52b7,	// (0x00033d1c) bg_list_pane

0xab3e,	// (0x000395a3) find_pane

0xab46,	// (0x000395ab) listscroll_app_pane_ParamLimits

0xab46,	// (0x000395ab) listscroll_app_pane

0x52d7,	// (0x00033d3c) listscroll_form_pane

0xab52,	// (0x000395b7) listscroll_gen_pane_ParamLimits

0xab52,	// (0x000395b7) listscroll_gen_pane

0x52d7,	// (0x00033d3c) listscroll_set_pane

0xa263,	// (0x00038cc8) main_idle_act_pane

0x509b,	// (0x00033b00) main_idle_trad_pane

0x509b,	// (0x00033b00) main_list_empty_pane

0x4816,	// (0x0003327b) main_midp_pane

0x52f1,	// (0x00033d56) main_pane_g1_ParamLimits

0x52f1,	// (0x00033d56) main_pane_g1

0xab66,	// (0x000395cb) popup_ai_message_window_ParamLimits

0xab66,	// (0x000395cb) popup_ai_message_window

0xac08,	// (0x0003966d) popup_fep_china_uni_window_ParamLimits

0xac08,	// (0x0003966d) popup_fep_china_uni_window

0xac62,	// (0x000396c7) popup_fep_japan_candidate_window_ParamLimits

0xac62,	// (0x000396c7) popup_fep_japan_candidate_window

0xac80,	// (0x000396e5) popup_fep_japan_predictive_window_ParamLimits

0xac80,	// (0x000396e5) popup_fep_japan_predictive_window

0xacb0,	// (0x00039715) popup_find_window

0xacbd,	// (0x00039722) popup_grid_graphic_window_ParamLimits

0xacbd,	// (0x00039722) popup_grid_graphic_window

0xace3,	// (0x00039748) popup_large_graphic_colour_window

0xad09,	// (0x0003976e) popup_menu_window_ParamLimits

0xad09,	// (0x0003976e) popup_menu_window

0xaec3,	// (0x00039928) popup_note_image_window

0xaeaf,	// (0x00039914) popup_note_wait_window_ParamLimits

0xaeaf,	// (0x00039914) popup_note_wait_window

0xaeaf,	// (0x00039914) popup_note_window_ParamLimits

0xaeaf,	// (0x00039914) popup_note_window

0xaf19,	// (0x0003997e) popup_query_code_window_ParamLimits

0xaf19,	// (0x0003997e) popup_query_code_window

0xaf2d,	// (0x00039992) popup_query_data_code_window_ParamLimits

0xaf2d,	// (0x00039992) popup_query_data_code_window

0xaf44,	// (0x000399a9) popup_query_data_window_ParamLimits

0xaf44,	// (0x000399a9) popup_query_data_window

0xaf5c,	// (0x000399c1) popup_query_sat_info_window_ParamLimits

0xaf5c,	// (0x000399c1) popup_query_sat_info_window

0xaf95,	// (0x000399fa) popup_snote_single_graphic_window_ParamLimits

0xaf95,	// (0x000399fa) popup_snote_single_graphic_window

0xaf95,	// (0x000399fa) popup_snote_single_text_window_ParamLimits

0xaf95,	// (0x000399fa) popup_snote_single_text_window

0xafaa,	// (0x00039a0f) popup_sub_window_general

0xb0d8,	// (0x00039b3d) popup_window_general_ParamLimits

0xb0d8,	// (0x00039b3d) popup_window_general

0x52ff,	// (0x00033d64) power_save_pane

0xa9c1,	// (0x00039426) control_pane_g1_ParamLimits

0xa9c1,	// (0x00039426) control_pane_g1

0xa9e8,	// (0x0003944d) control_pane_g2_ParamLimits

0xa9e8,	// (0x0003944d) control_pane_g2

0x52a1,	// (0x00033d06) control_pane_g3_ParamLimits

0x52a1,	// (0x00033d06) control_pane_g3

0x0007,

0xf793,	// (0x0003e1f8) control_pane_g_ParamLimits

0xf793,	// (0x0003e1f8) control_pane_g

0xaa53,	// (0x000394b8) control_pane_t1_ParamLimits

0xaa53,	// (0x000394b8) control_pane_t1

0xaa9f,	// (0x00039504) control_pane_t2_ParamLimits

0xaa9f,	// (0x00039504) control_pane_t2

0x0002,

0xf7a4,	// (0x0003e209) control_pane_t_ParamLimits

0xf7a4,	// (0x0003e209) control_pane_t

0x51c2,	// (0x00033c27) navi_navi_volume_pane_cp1

0x51cb,	// (0x00033c30) status_small_icon_pane

0x51d3,	// (0x00033c38) status_small_pane_g1_ParamLimits

0x51d3,	// (0x00033c38) status_small_pane_g1

0x5207,	// (0x00033c6c) status_small_pane_g2_ParamLimits

0x5207,	// (0x00033c6c) status_small_pane_g2

0x5213,	// (0x00033c78) status_small_pane_g3_ParamLimits

0x5213,	// (0x00033c78) status_small_pane_g3

0x521f,	// (0x00033c84) status_small_pane_g4_ParamLimits

0x521f,	// (0x00033c84) status_small_pane_g4

0x522b,	// (0x00033c90) status_small_pane_g5_ParamLimits

0x522b,	// (0x00033c90) status_small_pane_g5

0x523a,	// (0x00033c9f) status_small_pane_g6_ParamLimits

0x523a,	// (0x00033c9f) status_small_pane_g6

0x0007,

0xf782,	// (0x0003e1e7) status_small_pane_g_ParamLimits

0xf782,	// (0x0003e1e7) status_small_pane_g

0x526a,	// (0x00033ccf) status_small_pane_t1

0x528d,	// (0x00033cf2) status_small_wait_pane_ParamLimits

0x528d,	// (0x00033cf2) status_small_wait_pane

0xa55b,	// (0x00038fc0) aid_levels_signal_ParamLimits

0xa55b,	// (0x00038fc0) aid_levels_signal

0xa56d,	// (0x00038fd2) signal_pane_g1_ParamLimits

0xa56d,	// (0x00038fd2) signal_pane_g1

0xa582,	// (0x00038fe7) signal_pane_g2_ParamLimits

0xa582,	// (0x00038fe7) signal_pane_g2

0x0003,

0xf713,	// (0x0003e178) signal_pane_g_ParamLimits

0xf713,	// (0x0003e178) signal_pane_g

0x4c61,	// (0x000336c6) context_pane_g1

0x9dbe,	// (0x00038823) title_pane_g1

0x9de8,	// (0x0003884d) title_pane_t1

0x406b,	// (0x00032ad0) title_pane_t2

0x4091,	// (0x00032af6) title_pane_t3

0x0002,

0xf55d,	// (0x0003dfc2) title_pane_t

0xb3bb,	// (0x00039e20) aid_levels_battery_ParamLimits

0xb3bb,	// (0x00039e20) aid_levels_battery

0xb3cf,	// (0x00039e34) battery_pane_g1_ParamLimits

0xb3cf,	// (0x00039e34) battery_pane_g1

0xb3e5,	// (0x00039e4a) battery_pane_g2_ParamLimits

0xb3e5,	// (0x00039e4a) battery_pane_g2

0x0001,

0xf7b6,	// (0x0003e21b) battery_pane_g_ParamLimits

0xf7b6,	// (0x0003e21b) battery_pane_g

0xb94a,	// (0x0003a3af) uni_indicator_pane_g1

0xb95f,	// (0x0003a3c4) uni_indicator_pane_g2

0x6445,	// (0x00034eaa) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0003e391) uni_indicator_pane_g

0x4f31,	// (0x00033996) navi_icon_pane_ParamLimits

0x4f31,	// (0x00033996) navi_icon_pane

0x4eb5,	// (0x0003391a) navi_midp_pane

0x4f4d,	// (0x000339b2) navi_navi_pane

0x4f57,	// (0x000339bc) navi_text_pane_ParamLimits

0x4f57,	// (0x000339bc) navi_text_pane

0x404b,	// (0x00032ab0) status_small_wait_pane_g1

0x436c,	// (0x00032dd1) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0003e38c) status_small_wait_pane_g

0x61c7,	// (0x00034c2c) navi_navi_icon_text_pane

0x61e1,	// (0x00034c46) navi_navi_pane_g1_ParamLimits

0x61e1,	// (0x00034c46) navi_navi_pane_g1

0x61cf,	// (0x00034c34) navi_navi_pane_g2_ParamLimits

0x61cf,	// (0x00034c34) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0003e35a) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0003e35a) navi_navi_pane_g

0x61f3,	// (0x00034c58) navi_navi_tabs_pane

0x61fc,	// (0x00034c61) navi_navi_text_pane

0x61c7,	// (0x00034c2c) navi_navi_volume_pane

0x61a3,	// (0x00034c08) navi_text_pane_t1

0x6197,	// (0x00034bfc) navi_icon_pane_g1

0x60fe,	// (0x00034b63) navi_navi_text_pane_t1

0xb8c6,	// (0x0003a32b) navi_navi_volume_pane_g1

0xb8ce,	// (0x0003a333) volume_small_pane

0xb838,	// (0x0003a29d) navi_navi_icon_text_pane_g1

0xb840,	// (0x0003a2a5) navi_navi_icon_text_pane_t1

0x4f4d,	// (0x000339b2) navi_tabs_2_long_pane

0x4f4d,	// (0x000339b2) navi_tabs_2_pane

0x4f4d,	// (0x000339b2) navi_tabs_3_long_pane

0x4f4d,	// (0x000339b2) navi_tabs_3_pane

0x4f4d,	// (0x000339b2) navi_tabs_4_pane

0xb7f6,	// (0x0003a25b) tabs_2_active_pane_ParamLimits

0xb7f6,	// (0x0003a25b) tabs_2_active_pane

0xb806,	// (0x0003a26b) tabs_2_passive_pane_ParamLimits

0xb806,	// (0x0003a26b) tabs_2_passive_pane

0xb7c4,	// (0x0003a229) tabs_3_active_pane_ParamLimits

0xb7c4,	// (0x0003a229) tabs_3_active_pane

0xb7d4,	// (0x0003a239) tabs_3_passive_pane_ParamLimits

0xb7d4,	// (0x0003a239) tabs_3_passive_pane

0xb7e5,	// (0x0003a24a) tabs_3_passive_pane_cp_ParamLimits

0xb7e5,	// (0x0003a24a) tabs_3_passive_pane_cp

0xb780,	// (0x0003a1e5) tabs_4_active_pane_ParamLimits

0xb780,	// (0x0003a1e5) tabs_4_active_pane

0xb791,	// (0x0003a1f6) tabs_4_passive_pane_ParamLimits

0xb791,	// (0x0003a1f6) tabs_4_passive_pane

0xb7a2,	// (0x0003a207) tabs_4_passive_pane_cp_ParamLimits

0xb7a2,	// (0x0003a207) tabs_4_passive_pane_cp

0xb7b3,	// (0x0003a218) tabs_4_passive_pane_cp2_ParamLimits

0xb7b3,	// (0x0003a218) tabs_4_passive_pane_cp2

0xb75c,	// (0x0003a1c1) tabs_2_long_active_pane_ParamLimits

0xb75c,	// (0x0003a1c1) tabs_2_long_active_pane

0xb76e,	// (0x0003a1d3) tabs_2_long_passive_pane_ParamLimits

0xb76e,	// (0x0003a1d3) tabs_2_long_passive_pane

0xb717,	// (0x0003a17c) tabs_3_long_active_pane_ParamLimits

0xb717,	// (0x0003a17c) tabs_3_long_active_pane

0xb730,	// (0x0003a195) tabs_3_long_passive_pane_ParamLimits

0xb730,	// (0x0003a195) tabs_3_long_passive_pane

0xb743,	// (0x0003a1a8) tabs_3_long_passive_pane_cp_ParamLimits

0xb743,	// (0x0003a1a8) tabs_3_long_passive_pane_cp

0xb6bd,	// (0x0003a122) volume_small_pane_g1

0xb6c6,	// (0x0003a12b) volume_small_pane_g2

0xb6cf,	// (0x0003a134) volume_small_pane_g3

0xb6d8,	// (0x0003a13d) volume_small_pane_g4

0xb6e1,	// (0x0003a146) volume_small_pane_g5

0xb6ea,	// (0x0003a14f) volume_small_pane_g6

0xb6f3,	// (0x0003a158) volume_small_pane_g7

0xb6fc,	// (0x0003a161) volume_small_pane_g8

0xb705,	// (0x0003a16a) volume_small_pane_g9

0xb70e,	// (0x0003a173) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0003e326) volume_small_pane_g

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp2_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp2

0x9e50,	// (0x000388b5) tabs_3_active_pane_g1

0x9e58,	// (0x000388bd) tabs_3_active_pane_t1

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp2_ParamLimits

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp2

0x9e50,	// (0x000388b5) tabs_3_passive_pane_g1

0x9e58,	// (0x000388bd) tabs_3_passive_pane_t1

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp3_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp3

0x9e6a,	// (0x000388cf) tabs_4_active_pane_g1

0x9e72,	// (0x000388d7) tabs_4_active_pane_t1

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp3_ParamLimits

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp3

0x9e6a,	// (0x000388cf) tabs_4_1_passive_pane_g1

0x9e72,	// (0x000388d7) tabs_4_1_passive_pane_t1

0x4816,	// (0x0003327b) list_highlight_pane_cp2

0xba5d,	// (0x0003a4c2) list_set_pane_ParamLimits

0xba5d,	// (0x0003a4c2) list_set_pane

0xbaff,	// (0x0003a564) main_pane_set_t1_ParamLimits

0xbaff,	// (0x0003a564) main_pane_set_t1

0xbb1f,	// (0x0003a584) main_pane_set_t2_ParamLimits

0xbb1f,	// (0x0003a584) main_pane_set_t2

0xbb33,	// (0x0003a598) main_pane_set_t3_ParamLimits

0xbb33,	// (0x0003a598) main_pane_set_t3

0xbb45,	// (0x0003a5aa) main_pane_set_t4_ParamLimits

0xbb45,	// (0x0003a5aa) main_pane_set_t4

0x0003,

0xf991,	// (0x0003e3f6) main_pane_set_t_ParamLimits

0xf991,	// (0x0003e3f6) main_pane_set_t

0xbb57,	// (0x0003a5bc) setting_code_pane

0xbb61,	// (0x0003a5c6) setting_slider_graphic_pane

0xbb61,	// (0x0003a5c6) setting_slider_pane

0xbb61,	// (0x0003a5c6) setting_text_pane

0xbb61,	// (0x0003a5c6) setting_volume_pane

0x9e84,	// (0x000388e9) volume_set_pane

0x40b1,	// (0x00032b16) bg_set_opt_pane_cp

0x9e8c,	// (0x000388f1) setting_slider_pane_t1

0x9ea5,	// (0x0003890a) setting_slider_pane_t2

0x9ebe,	// (0x00038923) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003dfc9) setting_slider_pane_t

0x9ed5,	// (0x0003893a) slider_set_pane

0x4055,	// (0x00032aba) bg_set_opt_pane_cp2

0x40bf,	// (0x00032b24) setting_slider_graphic_pane_g1

0x9eeb,	// (0x00038950) setting_slider_graphic_pane_t1

0x9efa,	// (0x0003895f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003dfd0) setting_slider_graphic_pane_t

0x9f09,	// (0x0003896e) slider_set_pane_cp

0x4055,	// (0x00032aba) input_focus_pane_cp1

0x6654,	// (0x000350b9) list_set_text_pane

0x404b,	// (0x00032ab0) setting_text_pane_g1

0x4055,	// (0x00032aba) input_focus_pane_cp2

0x404b,	// (0x00032ab0) setting_code_pane_g1

0x40c8,	// (0x00032b2d) setting_code_pane_t1

0x8b53,	// (0x000375b8) set_text_pane_t1_ParamLimits

0x8b53,	// (0x000375b8) set_text_pane_t1

0x470d,	// (0x00033172) set_opt_bg_pane_g1

0x4715,	// (0x0003317a) set_opt_bg_pane_g2

0x6634,	// (0x00035099) set_opt_bg_pane_g3

0x4725,	// (0x0003318a) set_opt_bg_pane_g4

0x472d,	// (0x00033192) set_opt_bg_pane_g5

0x4735,	// (0x0003319a) set_opt_bg_pane_g6

0x663c,	// (0x000350a1) set_opt_bg_pane_g7

0x6644,	// (0x000350a9) set_opt_bg_pane_g8

0x664c,	// (0x000350b1) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0003e3e3) set_opt_bg_pane_g

0x6627,	// (0x0003508c) slider_set_pane_g1

0xba14,	// (0x0003a479) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0003e3d4) slider_set_pane_g

0xb98b,	// (0x0003a3f0) volume_set_pane_g1

0xb993,	// (0x0003a3f8) volume_set_pane_g2

0xb99b,	// (0x0003a400) volume_set_pane_g3

0xb9a3,	// (0x0003a408) volume_set_pane_g4

0xb9ab,	// (0x0003a410) volume_set_pane_g5

0xb9b3,	// (0x0003a418) volume_set_pane_g6

0xb9bb,	// (0x0003a420) volume_set_pane_g7

0xb9c3,	// (0x0003a428) volume_set_pane_g8

0xb9cb,	// (0x0003a430) volume_set_pane_g9

0xb9d3,	// (0x0003a438) volume_set_pane_g10

0x0009,

0xf947,	// (0x0003e3ac) volume_set_pane_g

0x9f11,	// (0x00038976) indicator_pane_ParamLimits

0x9f11,	// (0x00038976) indicator_pane

0x9f1d,	// (0x00038982) main_idle_pane_g2_ParamLimits

0x9f1d,	// (0x00038982) main_idle_pane_g2

0x9f45,	// (0x000389aa) main_pane_idle_g1_ParamLimits

0x9f45,	// (0x000389aa) main_pane_idle_g1

0x40d6,	// (0x00032b3b) popup_clock_digital_analogue_window_ParamLimits

0x40d6,	// (0x00032b3b) popup_clock_digital_analogue_window

0x9f52,	// (0x000389b7) soft_indicator_pane_ParamLimits

0x9f52,	// (0x000389b7) soft_indicator_pane

0x9f5e,	// (0x000389c3) wallpaper_pane_ParamLimits

0x9f5e,	// (0x000389c3) wallpaper_pane

0x404b,	// (0x00032ab0) wallpaper_pane_g1

0x9f6a,	// (0x000389cf) indicator_pane_g1_ParamLimits

0x9f6a,	// (0x000389cf) indicator_pane_g1

0x67be,	// (0x00035223) navi_navi_icon_text_pane_srt_g1

0x4104,	// (0x00032b69) soft_indicator_pane_t1

0x411e,	// (0x00032b83) aid_ps_area_pane

0x9f76,	// (0x000389db) aid_ps_clock_pane

0x412f,	// (0x00032b94) aid_ps_indicator_pane

0x413b,	// (0x00032ba0) indicator_ps_pane_ParamLimits

0x413b,	// (0x00032ba0) indicator_ps_pane

0x414a,	// (0x00032baf) power_save_pane_g1_ParamLimits

0x414a,	// (0x00032baf) power_save_pane_g1

0x4156,	// (0x00032bbb) power_save_pane_g2_ParamLimits

0x4156,	// (0x00032bbb) power_save_pane_g2

0x99ed,	// (0x00038452) aid_navinavi_width_pane

0x411e,	// (0x00032b83) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003dfd5) power_save_pane_g_ParamLimits

0xf570,	// (0x0003dfd5) power_save_pane_g

0x4164,	// (0x00032bc9) power_save_pane_t1_ParamLimits

0x4164,	// (0x00032bc9) power_save_pane_t1

0x9f76,	// (0x000389db) aid_ps_clock_pane_ParamLimits

0x412f,	// (0x00032b94) aid_ps_indicator_pane_ParamLimits

0x4176,	// (0x00032bdb) power_save_pane_t4_ParamLimits

0x4176,	// (0x00032bdb) power_save_pane_t4

0x0001,

0xf575,	// (0x0003dfda) power_save_pane_t_ParamLimits

0xf575,	// (0x0003dfda) power_save_pane_t

0x41a0,	// (0x00032c05) power_save_t3_ParamLimits

0x41a0,	// (0x00032c05) power_save_t3

0x418b,	// (0x00032bf0) power_save_t2_ParamLimits

0x418b,	// (0x00032bf0) power_save_t2

0x41b5,	// (0x00032c1a) indicator_ps_pane_g1

0x9f84,	// (0x000389e9) ai_gene_pane_ParamLimits

0x9f84,	// (0x000389e9) ai_gene_pane

0x9f90,	// (0x000389f5) ai_links_pane_ParamLimits

0x9f90,	// (0x000389f5) ai_links_pane

0x9f9c,	// (0x00038a01) indicator_pane_cp1_ParamLimits

0x9f9c,	// (0x00038a01) indicator_pane_cp1

0x9fa8,	// (0x00038a0d) main_pane_idle_g1_cp_ParamLimits

0x9fa8,	// (0x00038a0d) main_pane_idle_g1_cp

0x41be,	// (0x00032c23) popup_ai_links_title_window

0x9fb4,	// (0x00038a19) soft_indicator_pane_cp1_ParamLimits

0x9fb4,	// (0x00038a19) soft_indicator_pane_cp1

0x6433,	// (0x00034e98) ai_links_pane_g1

0x643c,	// (0x00034ea1) grid_ai_links_pane

0xb93f,	// (0x0003a3a4) ai_gene_pane_1

0x6421,	// (0x00034e86) ai_gene_pane_2

0x642a,	// (0x00034e8f) list_highlight_pane_cp4

0xb923,	// (0x0003a388) cell_ai_link_pane_ParamLimits

0xb923,	// (0x0003a388) cell_ai_link_pane

0x6419,	// (0x00034e7e) cell_ai_link_pane_g1

0x436c,	// (0x00032dd1) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0003e387) cell_ai_link_pane_g

0x4055,	// (0x00032aba) grid_highlight_cp2

0x4055,	// (0x00032aba) bg_popup_sub_pane_cp1

0x41d5,	// (0x00032c3a) popup_ai_links_title_window_t1

0x638b,	// (0x00034df0) ai_gene_pane_1_g1_ParamLimits

0x638b,	// (0x00034df0) ai_gene_pane_1_g1

0x6397,	// (0x00034dfc) ai_gene_pane_1_g2_ParamLimits

0x6397,	// (0x00034dfc) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0003e37d) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0003e37d) ai_gene_pane_1_g

0x63a4,	// (0x00034e09) ai_gene_pane_1_t1_ParamLimits

0x63a4,	// (0x00034e09) ai_gene_pane_1_t1

0x63d8,	// (0x00034e3d) grid_ai_soft_ind_pane

0x6376,	// (0x00034ddb) ai_gene_pane_2_t1_ParamLimits

0x6376,	// (0x00034ddb) ai_gene_pane_2_t1

0x9fc0,	// (0x00038a25) main_pane_empty_t1_ParamLimits

0x9fc0,	// (0x00038a25) main_pane_empty_t1

0x9fd8,	// (0x00038a3d) main_pane_empty_t2_ParamLimits

0x9fd8,	// (0x00038a3d) main_pane_empty_t2

0x9fed,	// (0x00038a52) main_pane_empty_t3_ParamLimits

0x9fed,	// (0x00038a52) main_pane_empty_t3

0x9fff,	// (0x00038a64) main_pane_empty_t4_ParamLimits

0x9fff,	// (0x00038a64) main_pane_empty_t4

0xa011,	// (0x00038a76) main_pane_empty_t5_ParamLimits

0xa011,	// (0x00038a76) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003dfdf) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003dfdf) main_pane_empty_t

0x475e,	// (0x000331c3) bg_popup_window_pane_ParamLimits

0x475e,	// (0x000331c3) bg_popup_window_pane

0x610c,	// (0x00034b71) find_popup_pane_cp2_ParamLimits

0x610c,	// (0x00034b71) find_popup_pane_cp2

0x6118,	// (0x00034b7d) heading_pane_ParamLimits

0x6118,	// (0x00034b7d) heading_pane

0x4055,	// (0x00032aba) bg_popup_sub_pane

0xb85a,	// (0x0003a2bf) bg_popup_window_pane_g1_ParamLimits

0xb85a,	// (0x0003a2bf) bg_popup_window_pane_g1

0xb866,	// (0x0003a2cb) bg_popup_window_pane_g2_ParamLimits

0xb866,	// (0x0003a2cb) bg_popup_window_pane_g2

0xb872,	// (0x0003a2d7) bg_popup_window_pane_g3_ParamLimits

0xb872,	// (0x0003a2d7) bg_popup_window_pane_g3

0xb87e,	// (0x0003a2e3) bg_popup_window_pane_g4_ParamLimits

0xb87e,	// (0x0003a2e3) bg_popup_window_pane_g4

0xb88a,	// (0x0003a2ef) bg_popup_window_pane_g5_ParamLimits

0xb88a,	// (0x0003a2ef) bg_popup_window_pane_g5

0xb896,	// (0x0003a2fb) bg_popup_window_pane_g6_ParamLimits

0xb896,	// (0x0003a2fb) bg_popup_window_pane_g6

0xb8a2,	// (0x0003a307) bg_popup_window_pane_g7_ParamLimits

0xb8a2,	// (0x0003a307) bg_popup_window_pane_g7

0xb8ae,	// (0x0003a313) bg_popup_window_pane_g8_ParamLimits

0xb8ae,	// (0x0003a313) bg_popup_window_pane_g8

0xb8ba,	// (0x0003a31f) bg_popup_window_pane_g9_ParamLimits

0xb8ba,	// (0x0003a31f) bg_popup_window_pane_g9

0x60f2,	// (0x00034b57) bg_popup_window_pane_g10_ParamLimits

0x60f2,	// (0x00034b57) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0003e345) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0003e345) bg_popup_window_pane_g

0x60a9,	// (0x00034b0e) bg_popup_heading_pane_ParamLimits

0x60a9,	// (0x00034b0e) bg_popup_heading_pane

0xbd0c,	// (0x0003a771) tabs_4_passive_pane_cp_srt_ParamLimits

0xbd0c,	// (0x0003a771) tabs_4_passive_pane_cp_srt

0xbd1e,	// (0x0003a783) tabs_4_passive_pane_srt_ParamLimits

0x60bd,	// (0x00034b22) heading_pane_g2

0xbd1e,	// (0x0003a783) tabs_4_passive_pane_srt

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp3_srt

0x60c5,	// (0x00034b2a) heading_pane_t1_ParamLimits

0x60c5,	// (0x00034b2a) heading_pane_t1

0x60dc,	// (0x00034b41) heading_pane_t2_ParamLimits

0x60dc,	// (0x00034b41) heading_pane_t2

0x0001,

0xf8db,	// (0x0003e340) heading_pane_t_ParamLimits

0xf8db,	// (0x0003e340) heading_pane_t

0x5c49,	// (0x000346ae) bg_popup_heading_pane_g1

0x5cda,	// (0x0003473f) bg_popup_heading_pane_g2

0x5ce4,	// (0x00034749) bg_popup_heading_pane_g3

0x5cee,	// (0x00034753) bg_popup_heading_pane_g4

0x5cf8,	// (0x0003475d) bg_popup_heading_pane_g5

0x5d02,	// (0x00034767) bg_popup_heading_pane_g6

0x5d0a,	// (0x0003476f) bg_popup_heading_pane_g7

0x5d12,	// (0x00034777) bg_popup_heading_pane_g8

0x5d1c,	// (0x00034781) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0003e2fc) bg_popup_heading_pane_g

0x54e7,	// (0x00033f4c) bg_popup_sub_pane_g1

0x54f7,	// (0x00033f5c) bg_popup_sub_pane_g2

0x54ef,	// (0x00033f54) bg_popup_sub_pane_g3

0x5507,	// (0x00033f6c) bg_popup_sub_pane_g4

0x54ff,	// (0x00033f64) bg_popup_sub_pane_g5

0x550f,	// (0x00033f74) bg_popup_sub_pane_g6

0x5517,	// (0x00033f7c) bg_popup_sub_pane_g7

0x5527,	// (0x00033f8c) bg_popup_sub_pane_g8

0x551f,	// (0x00033f84) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0003e2d6) bg_popup_sub_pane_g

0x40a3,	// (0x00032b08) bg_popup_window_pane_cp5_ParamLimits

0x40a3,	// (0x00032b08) bg_popup_window_pane_cp5

0x41f2,	// (0x00032c57) popup_note_window_g1_ParamLimits

0x41f2,	// (0x00032c57) popup_note_window_g1

0x41fe,	// (0x00032c63) popup_note_window_t1_ParamLimits

0x41fe,	// (0x00032c63) popup_note_window_t1

0x4210,	// (0x00032c75) popup_note_window_t2_ParamLimits

0x4210,	// (0x00032c75) popup_note_window_t2

0x4222,	// (0x00032c87) popup_note_window_t3_ParamLimits

0x4222,	// (0x00032c87) popup_note_window_t3

0x4234,	// (0x00032c99) popup_note_window_t4_ParamLimits

0x4234,	// (0x00032c99) popup_note_window_t4

0x425c,	// (0x00032cc1) popup_note_window_t5_ParamLimits

0x425c,	// (0x00032cc1) popup_note_window_t5

0x0004,

0xf585,	// (0x0003dfea) popup_note_window_t_ParamLimits

0xf585,	// (0x0003dfea) popup_note_window_t

0x4280,	// (0x00032ce5) bg_popup_window_pane_cp6_ParamLimits

0x4280,	// (0x00032ce5) bg_popup_window_pane_cp6

0x5bbd,	// (0x00034622) popup_note_image_window_g1_ParamLimits

0x5bbd,	// (0x00034622) popup_note_image_window_g1

0x5bc9,	// (0x0003462e) popup_note_image_window_g2_ParamLimits

0x5bc9,	// (0x0003462e) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0003e2ca) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0003e2ca) popup_note_image_window_g

0x5be2,	// (0x00034647) popup_note_image_window_t1_ParamLimits

0x5be2,	// (0x00034647) popup_note_image_window_t1

0x5bfb,	// (0x00034660) popup_note_image_window_t2_ParamLimits

0x5bfb,	// (0x00034660) popup_note_image_window_t2

0x5c14,	// (0x00034679) popup_note_image_window_t3_ParamLimits

0x5c14,	// (0x00034679) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0003e2cf) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0003e2cf) popup_note_image_window_t

0x5a9a,	// (0x000344ff) bg_popup_window_pane_cp7_ParamLimits

0x5a9a,	// (0x000344ff) bg_popup_window_pane_cp7

0x5aca,	// (0x0003452f) popup_note_wait_window_g1_ParamLimits

0x5aca,	// (0x0003452f) popup_note_wait_window_g1

0x5ad6,	// (0x0003453b) popup_note_wait_window_g2_ParamLimits

0x5ad6,	// (0x0003453b) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0003e2b8) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0003e2b8) popup_note_wait_window_g

0x5aee,	// (0x00034553) popup_note_wait_window_t1_ParamLimits

0x5aee,	// (0x00034553) popup_note_wait_window_t1

0x5b15,	// (0x0003457a) popup_note_wait_window_t2_ParamLimits

0x5b15,	// (0x0003457a) popup_note_wait_window_t2

0x5b32,	// (0x00034597) popup_note_wait_window_t3_ParamLimits

0x5b32,	// (0x00034597) popup_note_wait_window_t3

0x5b45,	// (0x000345aa) popup_note_wait_window_t4_ParamLimits

0x5b45,	// (0x000345aa) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0003e2bf) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0003e2bf) popup_note_wait_window_t

0x5b6a,	// (0x000345cf) wait_bar_pane_ParamLimits

0x5b6a,	// (0x000345cf) wait_bar_pane

0x4055,	// (0x00032aba) wait_anim_pane

0x4055,	// (0x00032aba) wait_border_pane

0x404b,	// (0x00032ab0) wait_anim_pane_g1

0x404b,	// (0x00032ab0) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0003e173) wait_anim_pane_g

0x5a3e,	// (0x000344a3) wait_border_pane_g1

0x5a49,	// (0x000344ae) wait_border_pane_g2

0x5a52,	// (0x000344b7) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0003e2b1) wait_border_pane_g

0x58ae,	// (0x00034313) bg_popup_window_pane_cp16_ParamLimits

0x58ae,	// (0x00034313) bg_popup_window_pane_cp16

0x59ae,	// (0x00034413) indicator_popup_pane_cp4_ParamLimits

0x59ae,	// (0x00034413) indicator_popup_pane_cp4

0x59c2,	// (0x00034427) popup_query_data_window_t1_ParamLimits

0x59c2,	// (0x00034427) popup_query_data_window_t1

0x59d4,	// (0x00034439) popup_query_data_window_t2_ParamLimits

0x59d4,	// (0x00034439) popup_query_data_window_t2

0x59ed,	// (0x00034452) popup_query_data_window_t3_ParamLimits

0x59ed,	// (0x00034452) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0003e2aa) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0003e2aa) popup_query_data_window_t

0x5a07,	// (0x0003446c) query_popup_data_pane_ParamLimits

0x5a07,	// (0x0003446c) query_popup_data_pane

0x5a1b,	// (0x00034480) query_popup_data_pane_cp1_ParamLimits

0x5a1b,	// (0x00034480) query_popup_data_pane_cp1

0x58ae,	// (0x00034313) bg_popup_window_pane_cp10_ParamLimits

0x58ae,	// (0x00034313) bg_popup_window_pane_cp10

0x58e0,	// (0x00034345) indicator_popup_pane_ParamLimits

0x58e0,	// (0x00034345) indicator_popup_pane

0x5902,	// (0x00034367) popup_query_code_window_t1_ParamLimits

0x5902,	// (0x00034367) popup_query_code_window_t1

0x591c,	// (0x00034381) popup_query_code_window_t2_ParamLimits

0x591c,	// (0x00034381) popup_query_code_window_t2

0x5965,	// (0x000343ca) popup_query_code_window_t3_ParamLimits

0x5965,	// (0x000343ca) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0003e2a3) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0003e2a3) popup_query_code_window_t

0x5994,	// (0x000343f9) query_popup_pane_ParamLimits

0x5994,	// (0x000343f9) query_popup_pane

0x4280,	// (0x00032ce5) bg_popup_window_pane_cp15_ParamLimits

0x4280,	// (0x00032ce5) bg_popup_window_pane_cp15

0x429e,	// (0x00032d03) indicator_popup_pane_cp1_ParamLimits

0x429e,	// (0x00032d03) indicator_popup_pane_cp1

0x42b1,	// (0x00032d16) indicator_popup_pane_cp2_ParamLimits

0x42b1,	// (0x00032d16) indicator_popup_pane_cp2

0x42c4,	// (0x00032d29) popup_query_data_code_window_g1_ParamLimits

0x42c4,	// (0x00032d29) popup_query_data_code_window_g1

0x42d7,	// (0x00032d3c) popup_query_data_code_window_t1_ParamLimits

0x42d7,	// (0x00032d3c) popup_query_data_code_window_t1

0x42e9,	// (0x00032d4e) popup_query_data_code_window_t2_ParamLimits

0x42e9,	// (0x00032d4e) popup_query_data_code_window_t2

0x42fb,	// (0x00032d60) popup_query_data_code_window_t3_ParamLimits

0x42fb,	// (0x00032d60) popup_query_data_code_window_t3

0x4311,	// (0x00032d76) popup_query_data_code_window_t4_ParamLimits

0x4311,	// (0x00032d76) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003dff5) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003dff5) popup_query_data_code_window_t

0x4f01,	// (0x00033966) list_single_midp_graphic_pane_g3

0x4329,	// (0x00032d8e) query_popup_data_pane_cp2_ParamLimits

0x433c,	// (0x00032da1) query_popup_pane_cp2_ParamLimits

0x433c,	// (0x00032da1) query_popup_pane_cp2

0x4055,	// (0x00032aba) bg_popup_window_pane_cp11

0x58a6,	// (0x0003430b) heading_pane_cp5

0x43ca,	// (0x00032e2f) listscroll_popup_info_pane

0x4055,	// (0x00032aba) input_focus_pane_cp3

0x434f,	// (0x00032db4) query_popup_pane_t1

0x435d,	// (0x00032dc2) list_popup_info_pane_ParamLimits

0x435d,	// (0x00032dc2) list_popup_info_pane

0x436c,	// (0x00032dd1) listscroll_popup_info_pane_g1

0x4374,	// (0x00032dd9) scroll_pane_cp7

0x437e,	// (0x00032de3) popup_info_list_pane_t1_ParamLimits

0x437e,	// (0x00032de3) popup_info_list_pane_t1

0x4398,	// (0x00032dfd) popup_info_list_pane_t2_ParamLimits

0x4398,	// (0x00032dfd) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003dffe) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003dffe) popup_info_list_pane_t

0x4055,	// (0x00032aba) bg_popup_window_pane_cp12

0x67d8,	// (0x0003523d) find_popup_pane

0x40b1,	// (0x00032b16) bg_popup_window_pane_cp3

0x43b2,	// (0x00032e17) heading_pane_cp3

0x43be,	// (0x00032e23) listscroll_popup_graphic_pane

0x4055,	// (0x00032aba) bg_popup_window_pane_cp4

0xa075,	// (0x00038ada) heading_pane_cp4

0x43ca,	// (0x00032e2f) listscroll_popup_colour_pane

0xa07f,	// (0x00038ae4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa07f,	// (0x00038ae4) cell_large_graphic_colour_none_popup_pane

0xa093,	// (0x00038af8) grid_large_graphic_colour_popup_pane_ParamLimits

0xa093,	// (0x00038af8) grid_large_graphic_colour_popup_pane

0xa0b7,	// (0x00038b1c) listscroll_popup_colour_pane_g1_ParamLimits

0xa0b7,	// (0x00038b1c) listscroll_popup_colour_pane_g1

0xa0ce,	// (0x00038b33) listscroll_popup_colour_pane_g2_ParamLimits

0xa0ce,	// (0x00038b33) listscroll_popup_colour_pane_g2

0xa0e5,	// (0x00038b4a) listscroll_popup_colour_pane_g3_ParamLimits

0xa0e5,	// (0x00038b4a) listscroll_popup_colour_pane_g3

0xa0f5,	// (0x00038b5a) listscroll_popup_colour_pane_g4_ParamLimits

0xa0f5,	// (0x00038b5a) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003e003) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003e003) listscroll_popup_colour_pane_g

0x43d2,	// (0x00032e37) scroll_pane_cp6_ParamLimits

0x43d2,	// (0x00032e37) scroll_pane_cp6

0xa104,	// (0x00038b69) cell_large_graphic_colour_popup_pane_ParamLimits

0xa104,	// (0x00038b69) cell_large_graphic_colour_popup_pane

0x43e4,	// (0x00032e49) cell_large_graphic_colour_none_popup_pane_t1

0x4055,	// (0x00032aba) grid_highlight_pane_cp5

0x43f3,	// (0x00032e58) cell_large_graphic_colour_popup_pane_g1

0x43fb,	// (0x00032e60) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003e00c) cell_large_graphic_colour_popup_pane_g

0x4403,	// (0x00032e68) cell_large_graphic_colour_popup_pane_g2_copy1

0x440c,	// (0x00032e71) grid_highlight_pane_cp4

0x4414,	// (0x00032e79) bg_popup_window_pane_cp8_ParamLimits

0x4414,	// (0x00032e79) bg_popup_window_pane_cp8

0x442f,	// (0x00032e94) popup_snote_single_text_window_g1_ParamLimits

0x442f,	// (0x00032e94) popup_snote_single_text_window_g1

0x4441,	// (0x00032ea6) popup_snote_single_text_window_t1_ParamLimits

0x4441,	// (0x00032ea6) popup_snote_single_text_window_t1

0x4454,	// (0x00032eb9) popup_snote_single_text_window_t2_ParamLimits

0x4454,	// (0x00032eb9) popup_snote_single_text_window_t2

0x4467,	// (0x00032ecc) popup_snote_single_text_window_t3_ParamLimits

0x4467,	// (0x00032ecc) popup_snote_single_text_window_t3

0x44a0,	// (0x00032f05) popup_snote_single_text_window_t4_ParamLimits

0x44a0,	// (0x00032f05) popup_snote_single_text_window_t4

0x44d4,	// (0x00032f39) popup_snote_single_text_window_t5_ParamLimits

0x44d4,	// (0x00032f39) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003e011) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003e011) popup_snote_single_text_window_t

0x4503,	// (0x00032f68) bg_popup_window_pane_cp9_ParamLimits

0x4503,	// (0x00032f68) bg_popup_window_pane_cp9

0x442f,	// (0x00032e94) popup_snote_single_graphic_window_g1_ParamLimits

0x442f,	// (0x00032e94) popup_snote_single_graphic_window_g1

0x4511,	// (0x00032f76) popup_snote_single_graphic_window_g2_ParamLimits

0x4511,	// (0x00032f76) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003e01c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003e01c) popup_snote_single_graphic_window_g

0x451d,	// (0x00032f82) popup_snote_single_graphic_window_t1_ParamLimits

0x451d,	// (0x00032f82) popup_snote_single_graphic_window_t1

0x4530,	// (0x00032f95) popup_snote_single_graphic_window_t2_ParamLimits

0x4530,	// (0x00032f95) popup_snote_single_graphic_window_t2

0x4543,	// (0x00032fa8) popup_snote_single_graphic_window_t3_ParamLimits

0x4543,	// (0x00032fa8) popup_snote_single_graphic_window_t3

0x457c,	// (0x00032fe1) popup_snote_single_graphic_window_t4_ParamLimits

0x457c,	// (0x00032fe1) popup_snote_single_graphic_window_t4

0x45b0,	// (0x00033015) popup_snote_single_graphic_window_t5_ParamLimits

0x45b0,	// (0x00033015) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003e021) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003e021) popup_snote_single_graphic_window_t

0x675c,	// (0x000351c1) grid_graphic_popup_pane_ParamLimits

0x675c,	// (0x000351c1) grid_graphic_popup_pane

0x6788,	// (0x000351ed) listscroll_popup_graphic_pane_g1_ParamLimits

0x6788,	// (0x000351ed) listscroll_popup_graphic_pane_g1

0xbcd4,	// (0x0003a739) listscroll_popup_graphic_pane_g2_ParamLimits

0xbcd4,	// (0x0003a739) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0003e420) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0003e420) listscroll_popup_graphic_pane_g

0x64e8,	// (0x00034f4d) scroll_pane_cp5

0xbc95,	// (0x0003a6fa) cell_graphic_popup_pane_ParamLimits

0xbc95,	// (0x0003a6fa) cell_graphic_popup_pane

0x6727,	// (0x0003518c) cell_graphic_popup_pane_g1

0x672f,	// (0x00035194) cell_graphic_popup_pane_g2

0x4403,	// (0x00032e68) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0003e419) cell_graphic_popup_pane_g

0x6738,	// (0x0003519d) cell_graphic_popup_pane_t2

0x440c,	// (0x00032e71) grid_highlight_pane_cp3

0x45f1,	// (0x00033056) list_gen_pane_ParamLimits

0x45f1,	// (0x00033056) list_gen_pane

0x4619,	// (0x0003307e) scroll_pane

0xbc48,	// (0x0003a6ad) bg_list_pane_g1_ParamLimits

0xbc48,	// (0x0003a6ad) bg_list_pane_g1

0x66d6,	// (0x0003513b) bg_list_pane_g2_ParamLimits

0x66d6,	// (0x0003513b) bg_list_pane_g2

0x66e9,	// (0x0003514e) bg_list_pane_g3_ParamLimits

0x66e9,	// (0x0003514e) bg_list_pane_g3

0x66fb,	// (0x00035160) bg_list_pane_g4_ParamLimits

0x66fb,	// (0x00035160) bg_list_pane_g4

0xbc63,	// (0x0003a6c8) bg_list_pane_g5_ParamLimits

0xbc63,	// (0x0003a6c8) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0003e40e) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0003e40e) bg_list_pane_g

0xbb92,	// (0x0003a5f7) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double2_graphic_large_graphic_pane

0xbb92,	// (0x0003a5f7) list_double2_graphic_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double2_graphic_pane

0xbb92,	// (0x0003a5f7) list_double2_large_graphic_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double2_large_graphic_pane

0xbb92,	// (0x0003a5f7) list_double2_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double2_pane

0xbb92,	// (0x0003a5f7) list_double_graphic_heading_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_graphic_heading_pane

0xbb92,	// (0x0003a5f7) list_double_graphic_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_graphic_pane

0xbb92,	// (0x0003a5f7) list_double_heading_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_heading_pane

0xbb92,	// (0x0003a5f7) list_double_large_graphic_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_large_graphic_pane

0xbb92,	// (0x0003a5f7) list_double_number_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_number_pane

0xbb92,	// (0x0003a5f7) list_double_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_pane

0xbb92,	// (0x0003a5f7) list_double_time_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_double_time_pane

0xbb92,	// (0x0003a5f7) list_setting_number_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_setting_number_pane

0xbb92,	// (0x0003a5f7) list_setting_pane_ParamLimits

0xbb92,	// (0x0003a5f7) list_setting_pane

0xbbd6,	// (0x0003a63b) list_single_2graphic_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_2graphic_pane

0xbbd6,	// (0x0003a63b) list_single_graphic_heading_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_graphic_heading_pane

0xbbd6,	// (0x0003a63b) list_single_graphic_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_graphic_pane

0xbbd6,	// (0x0003a63b) list_single_heading_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_heading_pane

0xbc22,	// (0x0003a687) list_single_large_graphic_pane_ParamLimits

0xbc22,	// (0x0003a687) list_single_large_graphic_pane

0xbbd6,	// (0x0003a63b) list_single_number_heading_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_number_heading_pane

0xbbd6,	// (0x0003a63b) list_single_number_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_number_pane

0xbbd6,	// (0x0003a63b) list_single_pane_ParamLimits

0xbbd6,	// (0x0003a63b) list_single_pane

0x4055,	// (0x00032aba) list_highlight_pane_cp1

0x500c,	// (0x00033a71) list_single_pane_g1_ParamLimits

0x500c,	// (0x00033a71) list_single_pane_g1

0x8b78,	// (0x000375dd) list_single_pane_g2_ParamLimits

0x8b78,	// (0x000375dd) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0003e03d) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0003e03d) list_single_pane_g

0x940f,	// (0x00037e74) list_single_pane_t1_ParamLimits

0x940f,	// (0x00037e74) list_single_pane_t1

0x500c,	// (0x00033a71) list_single_number_pane_g1_ParamLimits

0x500c,	// (0x00033a71) list_single_number_pane_g1

0x8b78,	// (0x000375dd) list_single_number_pane_g2_ParamLimits

0x8b78,	// (0x000375dd) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0003e03d) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0003e03d) list_single_number_pane_g

0x93b7,	// (0x00037e1c) list_single_number_pane_t1_ParamLimits

0x93b7,	// (0x00037e1c) list_single_number_pane_t1

0x93cd,	// (0x00037e32) list_single_number_pane_t2_ParamLimits

0x93cd,	// (0x00037e32) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0003e3cf) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0003e3cf) list_single_number_pane_t

0x8b6c,	// (0x000375d1) list_single_graphic_pane_g1_ParamLimits

0x8b6c,	// (0x000375d1) list_single_graphic_pane_g1

0x500c,	// (0x00033a71) list_single_graphic_pane_g2_ParamLimits

0x500c,	// (0x00033a71) list_single_graphic_pane_g2

0x8b78,	// (0x000375dd) list_single_graphic_pane_g3_ParamLimits

0x8b78,	// (0x000375dd) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003e02c) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003e02c) list_single_graphic_pane_g

0x8b84,	// (0x000375e9) list_single_graphic_pane_t1_ParamLimits

0x8b84,	// (0x000375e9) list_single_graphic_pane_t1

0x8b9a,	// (0x000375ff) list_single_heading_pane_g1_ParamLimits

0x8b9a,	// (0x000375ff) list_single_heading_pane_g1

0x8b78,	// (0x000375dd) list_single_heading_pane_g2_ParamLimits

0x8b78,	// (0x000375dd) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003e033) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003e033) list_single_heading_pane_g

0x8bad,	// (0x00037612) list_single_heading_pane_t1_ParamLimits

0x8bad,	// (0x00037612) list_single_heading_pane_t1

0xa12d,	// (0x00038b92) list_single_heading_pane_t2_ParamLimits

0xa12d,	// (0x00038b92) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003e038) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003e038) list_single_heading_pane_t

0x500c,	// (0x00033a71) list_single_number_heading_pane_g1_ParamLimits

0x500c,	// (0x00033a71) list_single_number_heading_pane_g1

0x8b78,	// (0x000375dd) list_single_number_heading_pane_g2_ParamLimits

0x8b78,	// (0x000375dd) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0003e03d) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0003e03d) list_single_number_heading_pane_g

0x8bc3,	// (0x00037628) list_single_number_heading_pane_t1_ParamLimits

0x8bc3,	// (0x00037628) list_single_number_heading_pane_t1

0x8bd9,	// (0x0003763e) list_single_number_heading_pane_t2_ParamLimits

0x8bd9,	// (0x0003763e) list_single_number_heading_pane_t2

0x8beb,	// (0x00037650) list_single_number_heading_pane_t3_ParamLimits

0x8beb,	// (0x00037650) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0003e042) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0003e042) list_single_number_heading_pane_t

0x8bfd,	// (0x00037662) list_single_graphic_heading_pane_g1_ParamLimits

0x8bfd,	// (0x00037662) list_single_graphic_heading_pane_g1

0x8c13,	// (0x00037678) list_single_graphic_heading_pane_g4_ParamLimits

0x8c13,	// (0x00037678) list_single_graphic_heading_pane_g4

0x8b78,	// (0x000375dd) list_single_graphic_heading_pane_g5_ParamLimits

0x8b78,	// (0x000375dd) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0003e049) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e049) list_single_graphic_heading_pane_g

0x8bc3,	// (0x00037628) list_single_graphic_heading_pane_t1_ParamLimits

0x8bc3,	// (0x00037628) list_single_graphic_heading_pane_t1

0x8c24,	// (0x00037689) list_single_graphic_heading_pane_t2_ParamLimits

0x8c24,	// (0x00037689) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0003e050) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0003e050) list_single_graphic_heading_pane_t

0xa13f,	// (0x00038ba4) list_single_large_graphic_pane_g1_ParamLimits

0xa13f,	// (0x00038ba4) list_single_large_graphic_pane_g1

0xa14b,	// (0x00038bb0) list_single_large_graphic_pane_g2_ParamLimits

0xa14b,	// (0x00038bb0) list_single_large_graphic_pane_g2

0xa157,	// (0x00038bbc) list_single_large_graphic_pane_g3_ParamLimits

0xa157,	// (0x00038bbc) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003e055) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003e055) list_single_large_graphic_pane_g

0x5a49,	// (0x000344ae) wait_border_pane_g2_copy1

0xa163,	// (0x00038bc8) list_single_large_graphic_pane_g4_cp2

0x8c3c,	// (0x000376a1) list_single_large_graphic_pane_t1_ParamLimits

0x8c3c,	// (0x000376a1) list_single_large_graphic_pane_t1

0xa16b,	// (0x00038bd0) list_double_pane_g1_ParamLimits

0xa16b,	// (0x00038bd0) list_double_pane_g1

0xa177,	// (0x00038bdc) list_double_pane_g2_ParamLimits

0xa177,	// (0x00038bdc) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0003e05c) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0003e05c) list_double_pane_g

0x8c52,	// (0x000376b7) list_double_pane_t1_ParamLimits

0x8c52,	// (0x000376b7) list_double_pane_t1

0x8c68,	// (0x000376cd) list_double_pane_t2_ParamLimits

0x8c68,	// (0x000376cd) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0003e061) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0003e061) list_double_pane_t

0x8c7a,	// (0x000376df) list_double2_pane_g1_ParamLimits

0x8c7a,	// (0x000376df) list_double2_pane_g1

0x8c8b,	// (0x000376f0) list_double2_pane_g2_ParamLimits

0x8c8b,	// (0x000376f0) list_double2_pane_g2

0x0001,

0xf601,	// (0x0003e066) list_double2_pane_g_ParamLimits

0xf601,	// (0x0003e066) list_double2_pane_g

0x8c97,	// (0x000376fc) list_double2_pane_t1_ParamLimits

0x8c97,	// (0x000376fc) list_double2_pane_t1

0x8cad,	// (0x00037712) list_double2_pane_t2_ParamLimits

0x8cad,	// (0x00037712) list_double2_pane_t2

0x0001,

0xf606,	// (0x0003e06b) list_double2_pane_t_ParamLimits

0xf606,	// (0x0003e06b) list_double2_pane_t

0xa16b,	// (0x00038bd0) list_double_number_pane_g1_ParamLimits

0xa16b,	// (0x00038bd0) list_double_number_pane_g1

0xa177,	// (0x00038bdc) list_double_number_pane_g2_ParamLimits

0xa177,	// (0x00038bdc) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0003e05c) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0003e05c) list_double_number_pane_g

0x8cbf,	// (0x00037724) list_double_number_pane_t1_ParamLimits

0x8cbf,	// (0x00037724) list_double_number_pane_t1

0x8cd1,	// (0x00037736) list_double_number_pane_t2_ParamLimits

0x8cd1,	// (0x00037736) list_double_number_pane_t2

0x8ce7,	// (0x0003774c) list_double_number_pane_t3_ParamLimits

0x8ce7,	// (0x0003774c) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0003e070) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0003e070) list_double_number_pane_t

0x8cf9,	// (0x0003775e) list_double_graphic_pane_g1_ParamLimits

0x8cf9,	// (0x0003775e) list_double_graphic_pane_g1

0xa183,	// (0x00038be8) list_double_graphic_pane_g2_ParamLimits

0xa183,	// (0x00038be8) list_double_graphic_pane_g2

0xa192,	// (0x00038bf7) list_double_graphic_pane_g3_ParamLimits

0xa192,	// (0x00038bf7) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0003e077) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0003e077) list_double_graphic_pane_g

0x8d11,	// (0x00037776) list_double_graphic_pane_t1_ParamLimits

0x8d11,	// (0x00037776) list_double_graphic_pane_t1

0x8d27,	// (0x0003778c) list_double_graphic_pane_t2_ParamLimits

0x8d27,	// (0x0003778c) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0003e080) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0003e080) list_double_graphic_pane_t

0x8d39,	// (0x0003779e) list_double2_graphic_pane_g1_ParamLimits

0x8d39,	// (0x0003779e) list_double2_graphic_pane_g1

0xa19e,	// (0x00038c03) list_double2_graphic_pane_g2_ParamLimits

0xa19e,	// (0x00038c03) list_double2_graphic_pane_g2

0xa1aa,	// (0x00038c0f) list_double2_graphic_pane_g3_ParamLimits

0xa1aa,	// (0x00038c0f) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0003e085) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0003e085) list_double2_graphic_pane_g

0x8d45,	// (0x000377aa) list_double2_graphic_pane_t1_ParamLimits

0x8d45,	// (0x000377aa) list_double2_graphic_pane_t1

0x8d5b,	// (0x000377c0) list_double2_graphic_pane_t2_ParamLimits

0x8d5b,	// (0x000377c0) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0003e08c) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0003e08c) list_double2_graphic_pane_t

0x8d6d,	// (0x000377d2) list_double_large_graphic_pane_g1_ParamLimits

0x8d6d,	// (0x000377d2) list_double_large_graphic_pane_g1

0x8d98,	// (0x000377fd) list_double_large_graphic_pane_g2_ParamLimits

0x8d98,	// (0x000377fd) list_double_large_graphic_pane_g2

0xa177,	// (0x00038bdc) list_double_large_graphic_pane_g3_ParamLimits

0xa177,	// (0x00038bdc) list_double_large_graphic_pane_g3

0x8dae,	// (0x00037813) list_double_large_graphic_pane_g4_ParamLimits

0x8dae,	// (0x00037813) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0003e091) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0003e091) list_double_large_graphic_pane_g

0x8dc1,	// (0x00037826) list_double_large_graphic_pane_t1_ParamLimits

0x8dc1,	// (0x00037826) list_double_large_graphic_pane_t1

0x8dda,	// (0x0003783f) list_double_large_graphic_pane_t2_ParamLimits

0x8dda,	// (0x0003783f) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0003e09c) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0003e09c) list_double_large_graphic_pane_t

0xa1cb,	// (0x00038c30) list_double2_large_graphic_pane_g1_ParamLimits

0xa1cb,	// (0x00038c30) list_double2_large_graphic_pane_g1

0xa1d7,	// (0x00038c3c) list_double2_large_graphic_pane_g2_ParamLimits

0xa1d7,	// (0x00038c3c) list_double2_large_graphic_pane_g2

0xa1aa,	// (0x00038c0f) list_double2_large_graphic_pane_g3_ParamLimits

0xa1aa,	// (0x00038c0f) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0003e0a1) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0003e0a1) list_double2_large_graphic_pane_g

0x8dec,	// (0x00037851) list_double2_large_graphic_pane_t1_ParamLimits

0x8dec,	// (0x00037851) list_double2_large_graphic_pane_t1

0x8e02,	// (0x00037867) list_double2_large_graphic_pane_t2_ParamLimits

0x8e02,	// (0x00037867) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0003e0a8) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0003e0a8) list_double2_large_graphic_pane_t

0x8e14,	// (0x00037879) list_double_heading_pane_g1_ParamLimits

0x8e14,	// (0x00037879) list_double_heading_pane_g1

0xa1e8,	// (0x00038c4d) list_double_heading_pane_g2_ParamLimits

0xa1e8,	// (0x00038c4d) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0003e0ad) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0003e0ad) list_double_heading_pane_g

0x8e25,	// (0x0003788a) list_double_heading_pane_t1_ParamLimits

0x8e25,	// (0x0003788a) list_double_heading_pane_t1

0x8cad,	// (0x00037712) list_double_heading_pane_t2_ParamLimits

0x8cad,	// (0x00037712) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0003e0b2) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0003e0b2) list_double_heading_pane_t

0x8e3b,	// (0x000378a0) list_double_graphic_heading_pane_g1_ParamLimits

0x8e3b,	// (0x000378a0) list_double_graphic_heading_pane_g1

0x8e14,	// (0x00037879) list_double_graphic_heading_pane_g2_ParamLimits

0x8e14,	// (0x00037879) list_double_graphic_heading_pane_g2

0xa1e8,	// (0x00038c4d) list_double_graphic_heading_pane_g3_ParamLimits

0xa1e8,	// (0x00038c4d) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0003e0b7) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0003e0b7) list_double_graphic_heading_pane_g

0x8e47,	// (0x000378ac) list_double_graphic_heading_pane_t1_ParamLimits

0x8e47,	// (0x000378ac) list_double_graphic_heading_pane_t1

0x8d5b,	// (0x000377c0) list_double_graphic_heading_pane_t2_ParamLimits

0x8d5b,	// (0x000377c0) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0003e0be) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0003e0be) list_double_graphic_heading_pane_t

0x8e5d,	// (0x000378c2) list_double_time_pane_g1_ParamLimits

0x8e5d,	// (0x000378c2) list_double_time_pane_g1

0x8e6e,	// (0x000378d3) list_double_time_pane_g2_ParamLimits

0x8e6e,	// (0x000378d3) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0003e0c3) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0003e0c3) list_double_time_pane_g

0x8e7a,	// (0x000378df) list_double_time_pane_t1_ParamLimits

0x8e7a,	// (0x000378df) list_double_time_pane_t1

0x8e90,	// (0x000378f5) list_double_time_pane_t2_ParamLimits

0x8e90,	// (0x000378f5) list_double_time_pane_t2

0x8ea2,	// (0x00037907) list_double_time_pane_t3_ParamLimits

0x8ea2,	// (0x00037907) list_double_time_pane_t3

0x8eb4,	// (0x00037919) list_double_time_pane_t4_ParamLimits

0x8eb4,	// (0x00037919) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0003e0c8) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0003e0c8) list_double_time_pane_t

0x8ec6,	// (0x0003792b) list_setting_pane_g1_ParamLimits

0x8ec6,	// (0x0003792b) list_setting_pane_g1

0x8ed2,	// (0x00037937) list_setting_pane_g2_ParamLimits

0x8ed2,	// (0x00037937) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0003e0d1) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0003e0d1) list_setting_pane_g

0x8ede,	// (0x00037943) list_setting_pane_t1_ParamLimits

0x8ede,	// (0x00037943) list_setting_pane_t1

0x8ef8,	// (0x0003795d) list_setting_pane_t2_ParamLimits

0x8ef8,	// (0x0003795d) list_setting_pane_t2

0x0002,

0xf671,	// (0x0003e0d6) list_setting_pane_t_ParamLimits

0xf671,	// (0x0003e0d6) list_setting_pane_t

0x8f35,	// (0x0003799a) set_value_pane_cp_ParamLimits

0x8f35,	// (0x0003799a) set_value_pane_cp

0x8f41,	// (0x000379a6) list_setting_number_pane_g1_ParamLimits

0x8f41,	// (0x000379a6) list_setting_number_pane_g1

0x8f4d,	// (0x000379b2) list_setting_number_pane_g2_ParamLimits

0x8f4d,	// (0x000379b2) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0003e0dd) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0003e0dd) list_setting_number_pane_g

0x8f59,	// (0x000379be) list_setting_number_pane_t1_ParamLimits

0x8f59,	// (0x000379be) list_setting_number_pane_t1

0x8f72,	// (0x000379d7) list_setting_number_pane_t2_ParamLimits

0x8f72,	// (0x000379d7) list_setting_number_pane_t2

0x8f8c,	// (0x000379f1) list_setting_number_pane_t3_ParamLimits

0x8f8c,	// (0x000379f1) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0003e0e2) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0003e0e2) list_setting_number_pane_t

0x8f35,	// (0x0003799a) set_value_pane_ParamLimits

0x8f35,	// (0x0003799a) set_value_pane

0x464d,	// (0x000330b2) bg_set_opt_pane_ParamLimits

0x464d,	// (0x000330b2) bg_set_opt_pane

0x8fcf,	// (0x00037a34) set_value_pane_t1

0x466e,	// (0x000330d3) slider_set_pane_cp3

0x4677,	// (0x000330dc) volume_small_pane_cp

0x4680,	// (0x000330e5) list_form_gen_pane

0x4689,	// (0x000330ee) scroll_pane_cp8

0x8fe5,	// (0x00037a4a) form_field_data_pane_ParamLimits

0x8fe5,	// (0x00037a4a) form_field_data_pane

0x9005,	// (0x00037a6a) form_field_data_wide_pane_ParamLimits

0x9005,	// (0x00037a6a) form_field_data_wide_pane

0x9026,	// (0x00037a8b) form_field_popup_pane_ParamLimits

0x9026,	// (0x00037a8b) form_field_popup_pane

0x9044,	// (0x00037aa9) form_field_popup_wide_pane_ParamLimits

0x9044,	// (0x00037aa9) form_field_popup_wide_pane

0x9061,	// (0x00037ac6) form_field_slider_pane_ParamLimits

0x9061,	// (0x00037ac6) form_field_slider_pane

0x9074,	// (0x00037ad9) form_field_slider_wide_pane_ParamLimits

0x9074,	// (0x00037ad9) form_field_slider_wide_pane

0x469a,	// (0x000330ff) data_form_pane

0x9091,	// (0x00037af6) form_field_data_pane_t1

0x46a6,	// (0x0003310b) input_focus_pane

0x46b4,	// (0x00033119) data_form_wide_pane

0x90b7,	// (0x00037b1c) form_field_data_wide_pane_t1

0x4421,	// (0x00032e86) input_focus_pane_cp6

0x90d9,	// (0x00037b3e) form_field_popup_pane_t1

0x46a6,	// (0x0003310b) input_focus_pane_cp7

0x46e0,	// (0x00033145) list_form_pane

0x90fb,	// (0x00037b60) form_field_popup_wide_pane_t1

0x46a6,	// (0x0003310b) input_focus_pane_cp8

0x46ec,	// (0x00033151) list_form_wide_pane

0x9118,	// (0x00037b7d) form_field_slider_pane_t1_ParamLimits

0x9118,	// (0x00037b7d) form_field_slider_pane_t1

0x9130,	// (0x00037b95) form_field_slider_pane_t2_ParamLimits

0x9130,	// (0x00037b95) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0003e0f2) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0003e0f2) form_field_slider_pane_t

0x40a3,	// (0x00032b08) input_focus_pane_cp9_ParamLimits

0x40a3,	// (0x00032b08) input_focus_pane_cp9

0x9145,	// (0x00037baa) slider_cont_pane_ParamLimits

0x9145,	// (0x00037baa) slider_cont_pane

0x46fb,	// (0x00033160) form_field_slider_wide_pane_t1_ParamLimits

0x46fb,	// (0x00033160) form_field_slider_wide_pane_t1

0x9159,	// (0x00037bbe) form_field_slider_wide_pane_t2_ParamLimits

0x9159,	// (0x00037bbe) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0003e0f7) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0003e0f7) form_field_slider_wide_pane_t

0x40a3,	// (0x00032b08) input_focus_pane_cp10_ParamLimits

0x40a3,	// (0x00032b08) input_focus_pane_cp10

0x916b,	// (0x00037bd0) slider_cont_pane_cp1_ParamLimits

0x916b,	// (0x00037bd0) slider_cont_pane_cp1

0x917f,	// (0x00037be4) slider_form_pane_cp

0x470d,	// (0x00033172) input_focus_pane_g1

0x4715,	// (0x0003317a) input_focus_pane_g2

0x471d,	// (0x00033182) input_focus_pane_g3

0x4725,	// (0x0003318a) input_focus_pane_g4

0x472d,	// (0x00033192) input_focus_pane_g5

0x4735,	// (0x0003319a) input_focus_pane_g6

0x473d,	// (0x000331a2) input_focus_pane_g7

0x4745,	// (0x000331aa) input_focus_pane_g8

0x474d,	// (0x000331b2) input_focus_pane_g9

0x404b,	// (0x00032ab0) input_focus_pane_g10

0x0009,

0xf697,	// (0x0003e0fc) input_focus_pane_g

0x5a52,	// (0x000344b7) wait_border_pane_g3_copy1

0x9187,	// (0x00037bec) data_form_pane_t1

0x404b,	// (0x00032ab0) wait_anim_pane_g1_copy1

0x93df,	// (0x00037e44) data_form_wide_pane_t1

0x91a2,	// (0x00037c07) list_form_graphic_pane_cp_ParamLimits

0x91a2,	// (0x00037c07) list_form_graphic_pane_cp

0x665c,	// (0x000350c1) slider_form_pane_g1

0x6665,	// (0x000350ca) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0003e3ff) slider_form_pane_g

0x91b9,	// (0x00037c1e) list_form_graphic_pane_ParamLimits

0x91b9,	// (0x00037c1e) list_form_graphic_pane

0x91d3,	// (0x00037c38) list_form_graphic_pane_g1

0x91db,	// (0x00037c40) list_form_graphic_pane_t1_ParamLimits

0x91db,	// (0x00037c40) list_form_graphic_pane_t1

0x40b1,	// (0x00032b16) list_highlight_pane_cp5_ParamLimits

0x40b1,	// (0x00032b16) list_highlight_pane_cp5

0x91f0,	// (0x00037c55) find_pane_g1

0x4755,	// (0x000331ba) input_find_pane

0x91f9,	// (0x00037c5e) input_find_pane_g1_ParamLimits

0x91f9,	// (0x00037c5e) input_find_pane_g1

0x9205,	// (0x00037c6a) input_find_pane_t1_ParamLimits

0x9205,	// (0x00037c6a) input_find_pane_t1

0x921a,	// (0x00037c7f) input_find_pane_t2_ParamLimits

0x921a,	// (0x00037c7f) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0003e111) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0003e111) input_find_pane_t

0x475e,	// (0x000331c3) input_focus_pane_cp5_ParamLimits

0x475e,	// (0x000331c3) input_focus_pane_cp5

0x476c,	// (0x000331d1) bg_popup_window_pane_cp2_ParamLimits

0x476c,	// (0x000331d1) bg_popup_window_pane_cp2

0x4779,	// (0x000331de) listscroll_menu_pane_ParamLimits

0x4779,	// (0x000331de) listscroll_menu_pane

0xa200,	// (0x00038c65) popup_submenu_window_ParamLimits

0xa200,	// (0x00038c65) popup_submenu_window

0x4785,	// (0x000331ea) find_popup_pane_g1

0x478d,	// (0x000331f2) input_popup_find_pane_cp

0x475e,	// (0x000331c3) input_focus_pane_cp4_ParamLimits

0x475e,	// (0x000331c3) input_focus_pane_cp4

0x4797,	// (0x000331fc) input_popup_find_pane_t1_ParamLimits

0x4797,	// (0x000331fc) input_popup_find_pane_t1

0x4055,	// (0x00032aba) bg_popup_sub_pane_cp

0x47c5,	// (0x0003322a) listscroll_popup_sub_pane

0x47cd,	// (0x00033232) list_submenu_pane_ParamLimits

0x47cd,	// (0x00033232) list_submenu_pane

0x47de,	// (0x00033243) scroll_pane_cp4

0x47e6,	// (0x0003324b) list_single_popup_submenu_pane_ParamLimits

0x47e6,	// (0x0003324b) list_single_popup_submenu_pane

0x47f9,	// (0x0003325e) list_single_popup_submenu_pane_g1

0x4801,	// (0x00033266) list_single_popup_submenu_pane_t1_ParamLimits

0x4801,	// (0x00033266) list_single_popup_submenu_pane_t1

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp1_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp1

0xa236,	// (0x00038c9b) tabs_2_active_pane_g1

0xa23e,	// (0x00038ca3) tabs_2_active_pane_t1

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp1_ParamLimits

0x40b1,	// (0x00032b16) bg_passive_tab_pane_cp1

0xa236,	// (0x00038c9b) tabs_2_passive_pane_g1

0xa23e,	// (0x00038ca3) tabs_2_passive_pane_t1

0x540b,	// (0x00033e70) bg_active_tab_pane_cp4

0xa250,	// (0x00038cb5) tabs_2_long_active_pane_t1

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp4

0xb450,	// (0x00039eb5) list_single_midp_graphic_pane_g4_ParamLimits

0x540b,	// (0x00033e70) bg_active_tab_pane_cp5

0xa26f,	// (0x00038cd4) tabs_3_long_active_pane_t1

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp5

0xb450,	// (0x00039eb5) list_single_midp_graphic_pane_g4

0x40b1,	// (0x00032b16) bg_popup_window_pane_cp13_ParamLimits

0x40b1,	// (0x00032b16) bg_popup_window_pane_cp13

0x482b,	// (0x00033290) listscroll_popup_fast_pane_ParamLimits

0x482b,	// (0x00033290) listscroll_popup_fast_pane

0x483a,	// (0x0003329f) grid_popup_fast_pane_ParamLimits

0x483a,	// (0x0003329f) grid_popup_fast_pane

0x484c,	// (0x000332b1) scroll_pane_cp9_ParamLimits

0x484c,	// (0x000332b1) scroll_pane_cp9

0x7aca,	// (0x0003652f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7aca,	// (0x0003652f) list_single_graphic_hl_pane_t1_cp2

0x4870,	// (0x000332d5) input_focus_pane_cp20_ParamLimits

0x4870,	// (0x000332d5) input_focus_pane_cp20

0x487e,	// (0x000332e3) query_popup_data_pane_t1_ParamLimits

0x487e,	// (0x000332e3) query_popup_data_pane_t1

0x4891,	// (0x000332f6) query_popup_data_pane_t2_ParamLimits

0x4891,	// (0x000332f6) query_popup_data_pane_t2

0x48d7,	// (0x0003333c) query_popup_data_pane_t3_ParamLimits

0x48d7,	// (0x0003333c) query_popup_data_pane_t3

0x4918,	// (0x0003337d) query_popup_data_pane_t4_ParamLimits

0x4918,	// (0x0003337d) query_popup_data_pane_t4

0x4954,	// (0x000333b9) query_popup_data_pane_t5_ParamLimits

0x4954,	// (0x000333b9) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0003e116) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0003e116) query_popup_data_pane_t

0x470d,	// (0x00033172) bg_set_opt_pane_g1

0x4715,	// (0x0003317a) bg_set_opt_pane_g2

0x471d,	// (0x00033182) bg_set_opt_pane_g3

0x4725,	// (0x0003318a) bg_set_opt_pane_g4

0x472d,	// (0x00033192) bg_set_opt_pane_g5

0x4735,	// (0x0003319a) bg_set_opt_pane_g6

0x473d,	// (0x000331a2) bg_set_opt_pane_g7

0x4745,	// (0x000331aa) bg_set_opt_pane_g8

0x474d,	// (0x000331b2) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0003e121) bg_set_opt_pane_g

0xa684,	// (0x000390e9) control_top_pane_stacon_ParamLimits

0xa684,	// (0x000390e9) control_top_pane_stacon

0xa6d7,	// (0x0003913c) signal_pane_stacon_ParamLimits

0xa6d7,	// (0x0003913c) signal_pane_stacon

0x4dcf,	// (0x00033834) stacon_top_pane_g1_ParamLimits

0x4dcf,	// (0x00033834) stacon_top_pane_g1

0xa6fc,	// (0x00039161) title_pane_stacon_ParamLimits

0xa6fc,	// (0x00039161) title_pane_stacon

0xa726,	// (0x0003918b) uni_indicator_pane_stacon_ParamLimits

0xa726,	// (0x0003918b) uni_indicator_pane_stacon

0xa73b,	// (0x000391a0) battery_pane_stacon_ParamLimits

0xa73b,	// (0x000391a0) battery_pane_stacon

0xa77f,	// (0x000391e4) control_bottom_pane_stacon_ParamLimits

0xa77f,	// (0x000391e4) control_bottom_pane_stacon

0xa7a2,	// (0x00039207) navi_pane_stacon_ParamLimits

0xa7a2,	// (0x00039207) navi_pane_stacon

0x4df1,	// (0x00033856) stacon_bottom_pane_g1_ParamLimits

0x4df1,	// (0x00033856) stacon_bottom_pane_g1

0xa281,	// (0x00038ce6) aid_levels_signal_lsc_ParamLimits

0xa281,	// (0x00038ce6) aid_levels_signal_lsc

0xa298,	// (0x00038cfd) signal_pane_stacon_g1_ParamLimits

0xa298,	// (0x00038cfd) signal_pane_stacon_g1

0xa2ac,	// (0x00038d11) signal_pane_stacon_g2_ParamLimits

0xa2ac,	// (0x00038d11) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003e134) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003e134) signal_pane_stacon_g

0xa2e1,	// (0x00038d46) title_pane_stacon_t1_ParamLimits

0xa2e1,	// (0x00038d46) title_pane_stacon_t1

0x49ac,	// (0x00033411) uni_indicator_pane_stacon_g1

0x49b6,	// (0x0003341b) uni_indicator_pane_stacon_g2

0x4998,	// (0x000333fd) uni_indicator_pane_stacon_g3

0x49a2,	// (0x00033407) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0003e140) uni_indicator_pane_stacon_g

0xa306,	// (0x00038d6b) control_top_pane_stacon_g1

0xa30e,	// (0x00038d73) control_top_pane_stacon_t1_ParamLimits

0xa30e,	// (0x00038d73) control_top_pane_stacon_t1

0xa345,	// (0x00038daa) aid_levels_battery_lsc_ParamLimits

0xa345,	// (0x00038daa) aid_levels_battery_lsc

0xa35d,	// (0x00038dc2) battery_pane_stacon_g1_ParamLimits

0xa35d,	// (0x00038dc2) battery_pane_stacon_g1

0xa370,	// (0x00038dd5) battery_pane_stacon_g2_ParamLimits

0xa370,	// (0x00038dd5) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0003e149) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0003e149) battery_pane_stacon_g

0xa3ae,	// (0x00038e13) navi_icon_pane_stacon

0xa3c2,	// (0x00038e27) navi_navi_pane_stacon

0xa3ae,	// (0x00038e13) navi_text_pane_stacon

0xa306,	// (0x00038d6b) control_bottom_pane_stacon_g1

0xa3d6,	// (0x00038e3b) control_bottom_pane_stacon_t1_ParamLimits

0xa3d6,	// (0x00038e3b) control_bottom_pane_stacon_t1

0xa40d,	// (0x00038e72) grid_app_pane_ParamLimits

0xa40d,	// (0x00038e72) grid_app_pane

0xa42f,	// (0x00038e94) scroll_pane_cp15_ParamLimits

0xa42f,	// (0x00038e94) scroll_pane_cp15

0xa444,	// (0x00038ea9) cell_app_pane_ParamLimits

0xa444,	// (0x00038ea9) cell_app_pane

0xa46e,	// (0x00038ed3) cell_app_pane_g1_ParamLimits

0xa46e,	// (0x00038ed3) cell_app_pane_g1

0x49da,	// (0x0003343f) cell_app_pane_g2_ParamLimits

0x49da,	// (0x0003343f) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0003e14e) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0003e14e) cell_app_pane_g

0xa48e,	// (0x00038ef3) cell_app_pane_t1_ParamLimits

0xa48e,	// (0x00038ef3) cell_app_pane_t1

0x49e6,	// (0x0003344b) grid_highlight_pane_ParamLimits

0x49e6,	// (0x0003344b) grid_highlight_pane

0x470d,	// (0x00033172) cell_highlight_pane_g1

0x4715,	// (0x0003317a) cell_highlight_pane_g2

0x471d,	// (0x00033182) cell_highlight_pane_g3

0x4725,	// (0x0003318a) cell_highlight_pane_g4

0x472d,	// (0x00033192) cell_highlight_pane_g5

0x4735,	// (0x0003319a) cell_highlight_pane_g6

0x473d,	// (0x000331a2) cell_highlight_pane_g7

0x4745,	// (0x000331aa) cell_highlight_pane_g8

0x474d,	// (0x000331b2) cell_highlight_pane_g9

0x404b,	// (0x00032ab0) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0003e0fc) cell_highlight_pane_g

0x49f7,	// (0x0003345c) bg_scroll_pane

0xa4b8,	// (0x00038f1d) scroll_handle_pane

0x4a3e,	// (0x000334a3) scroll_bg_pane_g1

0x4a53,	// (0x000334b8) scroll_bg_pane_g2

0x4a6b,	// (0x000334d0) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0003e153) scroll_bg_pane_g

0x4a80,	// (0x000334e5) scroll_handle_focus_pane_ParamLimits

0x4a80,	// (0x000334e5) scroll_handle_focus_pane

0x4a3e,	// (0x000334a3) scroll_handle_pane_g1

0x4a8d,	// (0x000334f2) scroll_handle_pane_g2

0x4a6b,	// (0x000334d0) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0003e15a) scroll_handle_pane_g

0x475e,	// (0x000331c3) bg_popup_sub_pane_cp21_ParamLimits

0x475e,	// (0x000331c3) bg_popup_sub_pane_cp21

0x4aa1,	// (0x00033506) popup_fep_japan_predictive_window_t1_ParamLimits

0x4aa1,	// (0x00033506) popup_fep_japan_predictive_window_t1

0x4ab8,	// (0x0003351d) popup_fep_japan_predictive_window_t2_ParamLimits

0x4ab8,	// (0x0003351d) popup_fep_japan_predictive_window_t2

0x4aeb,	// (0x00033550) popup_fep_japan_predictive_window_t3_ParamLimits

0x4aeb,	// (0x00033550) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0003e161) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0003e161) popup_fep_japan_predictive_window_t

0x4055,	// (0x00032aba) bg_popup_sub_pane_cp23

0x4b22,	// (0x00033587) listscroll_japin_cand_pane

0x4b2a,	// (0x0003358f) popup_fep_japan_candidate_window_t1

0x4b38,	// (0x0003359d) candidate_pane_ParamLimits

0x4b38,	// (0x0003359d) candidate_pane

0x4b4a,	// (0x000335af) scroll_pane_cp30

0x4b52,	// (0x000335b7) list_single_popup_jap_candidate_pane_ParamLimits

0x4b52,	// (0x000335b7) list_single_popup_jap_candidate_pane

0x4055,	// (0x00032aba) list_highlight_pane_cp30

0x4b66,	// (0x000335cb) list_single_popup_jap_candidate_pane_t1

0x4b75,	// (0x000335da) level_1_signal

0x4b82,	// (0x000335e7) level_2_signal

0x4b8f,	// (0x000335f4) level_3_signal

0x4b9c,	// (0x00033601) level_4_signal

0x4ba9,	// (0x0003360e) level_5_signal

0x4bb6,	// (0x0003361b) level_6_signal

0x4bc3,	// (0x00033628) level_7_signal

0x4b75,	// (0x000335da) level_1_battery

0x4b82,	// (0x000335e7) level_2_battery

0x4b8f,	// (0x000335f4) level_3_battery

0x4b9c,	// (0x00033601) level_4_battery

0x4ba9,	// (0x0003360e) level_5_battery

0x4bb6,	// (0x0003361b) level_6_battery

0x4bc3,	// (0x00033628) level_7_battery

0x4be8,	// (0x0003364d) list_menu_pane_ParamLimits

0x4be8,	// (0x0003364d) list_menu_pane

0x4bfe,	// (0x00033663) scroll_pane_cp25_ParamLimits

0x4bfe,	// (0x00033663) scroll_pane_cp25

0x4c17,	// (0x0003367c) list_double2_graphic_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double2_graphic_pane_cp2

0x4c17,	// (0x0003367c) list_double2_large_graphic_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double2_large_graphic_pane_cp2

0x4c17,	// (0x0003367c) list_double2_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double2_pane_cp2

0x4c17,	// (0x0003367c) list_double_graphic_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double_graphic_pane_cp2

0x4c17,	// (0x0003367c) list_double_large_graphic_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double_large_graphic_pane_cp2

0x4c17,	// (0x0003367c) list_double_number_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double_number_pane_cp2

0x4c17,	// (0x0003367c) list_double_pane_cp2_ParamLimits

0x4c17,	// (0x0003367c) list_double_pane_cp2

0x4c39,	// (0x0003369e) list_single_2graphic_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_2graphic_pane_cp2

0x4c39,	// (0x0003369e) list_single_graphic_heading_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_graphic_heading_pane_cp2

0x4c39,	// (0x0003369e) list_single_graphic_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_graphic_pane_cp2

0x4c39,	// (0x0003369e) list_single_heading_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_heading_pane_cp2

0x4c50,	// (0x000336b5) list_single_large_graphic_pane_cp2_ParamLimits

0x4c50,	// (0x000336b5) list_single_large_graphic_pane_cp2

0x4c39,	// (0x0003369e) list_single_number_heading_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_number_heading_pane_cp2

0x4c39,	// (0x0003369e) list_single_number_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_number_pane_cp2

0x4c39,	// (0x0003369e) list_single_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_pane_cp2

0x4c6a,	// (0x000336cf) bg_popup_sub_pane_cp22

0xa5cc,	// (0x00039031) popup_side_volume_key_window_g1

0xa5f6,	// (0x0003905b) popup_side_volume_key_window_t1

0xa612,	// (0x00039077) volume_small_pane_cp1

0x40a3,	// (0x00032b08) bg_popup_sub_pane_cp24_ParamLimits

0x40a3,	// (0x00032b08) bg_popup_sub_pane_cp24

0x4c80,	// (0x000336e5) fep_china_uni_candidate_pane_ParamLimits

0x4c80,	// (0x000336e5) fep_china_uni_candidate_pane

0x4c94,	// (0x000336f9) fep_china_uni_entry_pane

0x4ca4,	// (0x00033709) popup_fep_china_uni_window_g1

0x4cc0,	// (0x00033725) fep_china_uni_entry_pane_g1

0x4cc8,	// (0x0003372d) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0003e192) fep_china_uni_entry_pane_g

0x4cd0,	// (0x00033735) fep_entry_item_pane

0x4cda,	// (0x0003373f) fep_candidate_item_pane

0x4ce2,	// (0x00033747) fep_china_uni_candidate_pane_g1

0x4cea,	// (0x0003374f) fep_china_uni_candidate_pane_g2

0x4cf2,	// (0x00033757) fep_china_uni_candidate_pane_g3

0x4cfa,	// (0x0003375f) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0003e197) fep_china_uni_candidate_pane_g

0x404b,	// (0x00032ab0) fep_entry_item_pane_g1

0x4d02,	// (0x00033767) fep_entry_item_pane_t1_ParamLimits

0x4d02,	// (0x00033767) fep_entry_item_pane_t1

0x4d18,	// (0x0003377d) fep_candidate_item_pane_t1_ParamLimits

0x4d18,	// (0x0003377d) fep_candidate_item_pane_t1

0x4d2d,	// (0x00033792) fep_candidate_item_pane_t2_ParamLimits

0x4d2d,	// (0x00033792) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0003e1a0) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0003e1a0) fep_candidate_item_pane_t

0x40b1,	// (0x00032b16) list_highlight_pane_cp31_ParamLimits

0x40b1,	// (0x00032b16) list_highlight_pane_cp31

0x4d3f,	// (0x000337a4) level_1_signal_lsc

0x4d48,	// (0x000337ad) level_2_signal_lsc

0x4d51,	// (0x000337b6) level_3_signal_lsc

0x4d5a,	// (0x000337bf) level_4_signal_lsc

0x4d63,	// (0x000337c8) level_5_signal_lsc

0x4d6c,	// (0x000337d1) level_6_signal_lsc

0x4d75,	// (0x000337da) level_7_signal_lsc

0x4d75,	// (0x000337da) level_1_battery_lsc

0x4d7e,	// (0x000337e3) level_2_battery_lsc

0x4d87,	// (0x000337ec) level_3_battery_lsc

0x4d90,	// (0x000337f5) level_4_battery_lsc

0x4d99,	// (0x000337fe) level_5_battery_lsc

0x4da2,	// (0x00033807) level_6_battery_lsc

0x4d3f,	// (0x000337a4) level_7_battery_lsc

0x4dab,	// (0x00033810) scroll_handle_focus_pane_g1

0x4db4,	// (0x00033819) scroll_handle_focus_pane_g2

0x4dbd,	// (0x00033822) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0003e1a5) scroll_handle_focus_pane_g

0x922f,	// (0x00037c94) list_single_2graphic_pane_g1_ParamLimits

0x922f,	// (0x00037c94) list_single_2graphic_pane_g1

0x8c13,	// (0x00037678) list_single_2graphic_pane_g2_ParamLimits

0x8c13,	// (0x00037678) list_single_2graphic_pane_g2

0x8b78,	// (0x000375dd) list_single_2graphic_pane_g3_ParamLimits

0x8b78,	// (0x000375dd) list_single_2graphic_pane_g3

0x923b,	// (0x00037ca0) list_single_2graphic_pane_g4_ParamLimits

0x923b,	// (0x00037ca0) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0003e1ac) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0003e1ac) list_single_2graphic_pane_g

0x924c,	// (0x00037cb1) list_single_2graphic_pane_t1_ParamLimits

0x924c,	// (0x00037cb1) list_single_2graphic_pane_t1

0xa61a,	// (0x0003907f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa61a,	// (0x0003907f) list_double2_graphic_large_graphic_pane_g1

0xa1d7,	// (0x00038c3c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa1d7,	// (0x00038c3c) list_double2_graphic_large_graphic_pane_g2

0xa1aa,	// (0x00038c0f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa1aa,	// (0x00038c0f) list_double2_graphic_large_graphic_pane_g3

0xa62c,	// (0x00039091) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa62c,	// (0x00039091) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0003e1b5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0003e1b5) list_double2_graphic_large_graphic_pane_g

0x927a,	// (0x00037cdf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x927a,	// (0x00037cdf) list_double2_graphic_large_graphic_pane_t1

0x9290,	// (0x00037cf5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9290,	// (0x00037cf5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0003e1be) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0003e1be) list_double2_graphic_large_graphic_pane_t

0x4e7f,	// (0x000338e4) popup_fast_swap_window_ParamLimits

0x4e7f,	// (0x000338e4) popup_fast_swap_window

0x4e9b,	// (0x00033900) popup_side_volume_key_window

0x4eb5,	// (0x0003391a) stacon_top_pane

0x4ebf,	// (0x00033924) status_pane_ParamLimits

0x4ebf,	// (0x00033924) status_pane

0x4eb5,	// (0x0003391a) status_small_pane

0x4055,	// (0x00032aba) control_pane

0x4055,	// (0x00032aba) stacon_bottom_pane

0x4689,	// (0x000330ee) scroll_pane_cp121

0x4680,	// (0x000330e5) set_content_pane

0xa638,	// (0x0003909d) bg_active_tab_pane_g1_cp1

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp1

0xa641,	// (0x000390a6) bg_active_tab_pane_g3_cp1

0xa638,	// (0x0003909d) bg_passive_tab_pane_g1_cp1

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp1

0xa641,	// (0x000390a6) bg_passive_tab_pane_g3_cp1

0xa64a,	// (0x000390af) bg_active_tab_pane_g1_cp2

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp2

0xa653,	// (0x000390b8) bg_active_tab_pane_g3_cp2

0xa64a,	// (0x000390af) bg_passive_tab_pane_g1_cp2

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp2

0xa653,	// (0x000390b8) bg_passive_tab_pane_g3_cp2

0xa65c,	// (0x000390c1) bg_active_tab_pane_g1_cp3

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp3

0xa665,	// (0x000390ca) bg_active_tab_pane_g3_cp3

0xa65c,	// (0x000390c1) bg_passive_tab_pane_g1_cp3

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp3

0xa665,	// (0x000390ca) bg_passive_tab_pane_g3_cp3

0xa66e,	// (0x000390d3) bg_active_tab_pane_g1_cp4

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp4

0xa679,	// (0x000390de) bg_active_tab_pane_g3_cp4

0xa66e,	// (0x000390d3) bg_passive_tab_pane_g1_cp4

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp4

0xa679,	// (0x000390de) bg_passive_tab_pane_g3_cp4

0x4e16,	// (0x0003387b) bg_active_tab_pane_g1_cp5

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp5

0x4e0d,	// (0x00033872) bg_active_tab_pane_g3_cp5

0x4e16,	// (0x0003387b) bg_passive_tab_pane_g1_cp5

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp5

0x4e0d,	// (0x00033872) bg_passive_tab_pane_g3_cp5

0xa7c5,	// (0x0003922a) list_set_graphic_pane_ParamLimits

0xa7c5,	// (0x0003922a) list_set_graphic_pane

0x4055,	// (0x00032aba) bg_set_opt_pane_cp4

0x4e1f,	// (0x00033884) list_set_graphic_pane_g1_ParamLimits

0x4e1f,	// (0x00033884) list_set_graphic_pane_g1

0x4e2b,	// (0x00033890) list_set_graphic_pane_g2_ParamLimits

0x4e2b,	// (0x00033890) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0003e1c3) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0003e1c3) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x0003e54b) volume_small_pane_cp_g

0xa7e3,	// (0x00039248) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa7e3,	// (0x00039248) list_double2_large_graphic_pane_g1_cp2

0xa7f1,	// (0x00039256) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa7f1,	// (0x00039256) list_double2_large_graphic_pane_g2_cp2

0x4e4f,	// (0x000338b4) list_double2_large_graphic_pane_g3_cp2

0x4e57,	// (0x000338bc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4e57,	// (0x000338bc) list_double2_large_graphic_pane_t1_cp2

0x4e6d,	// (0x000338d2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4e6d,	// (0x000338d2) list_double2_large_graphic_pane_t2_cp2

0xb8ff,	// (0x0003a364) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb8ff,	// (0x0003a364) list_double_large_graphic_pane_g1_cp2

0xb912,	// (0x0003a377) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb912,	// (0x0003a377) list_double_large_graphic_pane_g2_cp2

0x4fa0,	// (0x00033a05) list_double_large_graphic_pane_g3_cp2

0x63e8,	// (0x00034e4d) list_double_large_graphic_pane_g4_cp

0x63f0,	// (0x00034e55) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x63f0,	// (0x00034e55) list_double_large_graphic_pane_t1_cp2

0x6407,	// (0x00034e6c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6407,	// (0x00034e6c) list_double_large_graphic_pane_t2_cp2

0xa802,	// (0x00039267) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa802,	// (0x00039267) list_double2_graphic_pane_g1_cp2

0xa810,	// (0x00039275) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa810,	// (0x00039275) list_double2_graphic_pane_g2_cp2

0xa821,	// (0x00039286) list_double2_graphic_pane_g3_cp2

0x4ecd,	// (0x00033932) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ecd,	// (0x00033932) list_double2_graphic_pane_t1_cp2

0x4ee3,	// (0x00033948) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4ee3,	// (0x00033948) list_double2_graphic_pane_t2_cp2

0x4ef5,	// (0x0003395a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4ef5,	// (0x0003395a) list_single_number_heading_pane_g1_cp2

0x4f01,	// (0x00033966) list_single_number_heading_pane_g2_cp2

0x4f09,	// (0x0003396e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4f09,	// (0x0003396e) list_single_number_heading_pane_t1_cp2

0xa82b,	// (0x00039290) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa82b,	// (0x00039290) list_single_number_heading_pane_t2_cp2

0x4f1f,	// (0x00033984) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4f1f,	// (0x00033984) list_single_number_heading_pane_t3_cp2

0x4ef5,	// (0x0003395a) list_single_heading_pane_g1_cp2_ParamLimits

0x4ef5,	// (0x0003395a) list_single_heading_pane_g1_cp2

0x4f01,	// (0x00033966) list_single_heading_pane_g2_cp2

0x4f09,	// (0x0003396e) list_single_heading_pane_t1_cp2_ParamLimits

0x4f09,	// (0x0003396e) list_single_heading_pane_t1_cp2

0xb8eb,	// (0x0003a350) list_single_heading_pane_t2_cp2_ParamLimits

0xb8eb,	// (0x0003a350) list_single_heading_pane_t2_cp2

0x614c,	// (0x00034bb1) list_double_graphic_pane_g1_cp2_ParamLimits

0x614c,	// (0x00034bb1) list_double_graphic_pane_g1_cp2

0x6158,	// (0x00034bbd) list_double_graphic_pane_g2_cp2_ParamLimits

0x6158,	// (0x00034bbd) list_double_graphic_pane_g2_cp2

0x6167,	// (0x00034bcc) list_double_graphic_pane_g3_cp2

0x616f,	// (0x00034bd4) list_double_graphic_pane_t1_cp2_ParamLimits

0x616f,	// (0x00034bd4) list_double_graphic_pane_t1_cp2

0x6185,	// (0x00034bea) list_double_graphic_pane_t2_cp2_ParamLimits

0x6185,	// (0x00034bea) list_double_graphic_pane_t2_cp2

0x4f94,	// (0x000339f9) list_double_number_pane_g1_cp2_ParamLimits

0x4f94,	// (0x000339f9) list_double_number_pane_g1_cp2

0x4fa0,	// (0x00033a05) list_double_number_pane_g2_cp2

0xb8d7,	// (0x0003a33c) list_double_number_pane_t1_cp2_ParamLimits

0xb8d7,	// (0x0003a33c) list_double_number_pane_t1_cp2

0x6124,	// (0x00034b89) list_double_number_pane_t2_cp2_ParamLimits

0x6124,	// (0x00034b89) list_double_number_pane_t2_cp2

0x613a,	// (0x00034b9f) list_double_number_pane_t3_cp2_ParamLimits

0x613a,	// (0x00034b9f) list_double_number_pane_t3_cp2

0xb82a,	// (0x0003a28f) list_single_graphic_pane_g1_cp2_ParamLimits

0xb82a,	// (0x0003a28f) list_single_graphic_pane_g1_cp2

0x4fe0,	// (0x00033a45) list_single_graphic_pane_g2_cp2_ParamLimits

0x4fe0,	// (0x00033a45) list_single_graphic_pane_g2_cp2

0x4fec,	// (0x00033a51) list_single_graphic_pane_g3_cp2

0x6093,	// (0x00034af8) list_single_graphic_pane_t1_cp2_ParamLimits

0x6093,	// (0x00034af8) list_single_graphic_pane_t1_cp2

0x4fe0,	// (0x00033a45) list_single_number_pane_g1_cp2_ParamLimits

0x4fe0,	// (0x00033a45) list_single_number_pane_g1_cp2

0x4fec,	// (0x00033a51) list_single_number_pane_g2_cp2

0x6093,	// (0x00034af8) list_single_number_pane_t1_cp2_ParamLimits

0x6093,	// (0x00034af8) list_single_number_pane_t1_cp2

0xb816,	// (0x0003a27b) list_single_number_pane_t2_cp2_ParamLimits

0xb816,	// (0x0003a27b) list_single_number_pane_t2_cp2

0xa7f1,	// (0x00039256) list_double2_pane_g1_cp2_ParamLimits

0xa7f1,	// (0x00039256) list_double2_pane_g1_cp2

0x4e4f,	// (0x000338b4) list_double2_pane_g2_cp2

0x4f6c,	// (0x000339d1) list_double2_pane_t1_cp2_ParamLimits

0x4f6c,	// (0x000339d1) list_double2_pane_t1_cp2

0x4f82,	// (0x000339e7) list_double2_pane_t2_cp2_ParamLimits

0x4f82,	// (0x000339e7) list_double2_pane_t2_cp2

0x4f94,	// (0x000339f9) list_double_pane_g1_cp2_ParamLimits

0x4f94,	// (0x000339f9) list_double_pane_g1_cp2

0x4fa0,	// (0x00033a05) list_double_pane_g2_cp2

0x4fa8,	// (0x00033a0d) list_double_pane_t1_cp2_ParamLimits

0x4fa8,	// (0x00033a0d) list_double_pane_t1_cp2

0x4fbe,	// (0x00033a23) list_double_pane_t2_cp2_ParamLimits

0x4fbe,	// (0x00033a23) list_double_pane_t2_cp2

0x4fd0,	// (0x00033a35) list_single_pane_cp2_g3

0x4fe0,	// (0x00033a45) list_single_pane_g1_cp2_ParamLimits

0x4fe0,	// (0x00033a45) list_single_pane_g1_cp2

0x4fec,	// (0x00033a51) list_single_pane_g2_cp2

0x4ff4,	// (0x00033a59) list_single_pane_t1_cp2_ParamLimits

0x4ff4,	// (0x00033a59) list_single_pane_t1_cp2

0xa857,	// (0x000392bc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa857,	// (0x000392bc) list_single_large_graphic_pane_g1_cp2

0x500c,	// (0x00033a71) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x500c,	// (0x00033a71) list_single_large_graphic_pane_g2_cp2

0x5018,	// (0x00033a7d) list_single_large_graphic_pane_g3_cp2

0x5020,	// (0x00033a85) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5020,	// (0x00033a85) list_single_large_graphic_pane_g4_cp1

0x503a,	// (0x00033a9f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x503a,	// (0x00033a9f) list_single_large_graphic_pane_t1_cp2

0x6071,	// (0x00034ad6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6071,	// (0x00034ad6) list_single_graphic_heading_pane_g1_cp2

0xb698,	// (0x0003a0fd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb698,	// (0x0003a0fd) list_single_graphic_heading_pane_g4_cp2

0x4fec,	// (0x00033a51) list_single_graphic_heading_pane_g5_cp2

0x607d,	// (0x00034ae2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x607d,	// (0x00034ae2) list_single_graphic_heading_pane_t1_cp2

0xb6a9,	// (0x0003a10e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb6a9,	// (0x0003a10e) list_single_graphic_heading_pane_t2_cp2

0x6043,	// (0x00034aa8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6043,	// (0x00034aa8) list_single_2graphic_pane_g1_cp2

0xb698,	// (0x0003a0fd) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb698,	// (0x0003a0fd) list_single_2graphic_pane_g2_cp2

0x4fec,	// (0x00033a51) list_single_2graphic_pane_g3_cp2

0x604f,	// (0x00034ab4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x604f,	// (0x00034ab4) list_single_2graphic_pane_g4_cp2

0x605b,	// (0x00034ac0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x605b,	// (0x00034ac0) list_single_2graphic_pane_t1_cp2

0x404b,	// (0x00032ab0) list_highlight_pane_g10_cp1

0x5c49,	// (0x000346ae) list_highlight_pane_g1_cp1

0x5c51,	// (0x000346b6) list_highlight_pane_g2_cp1

0x5c59,	// (0x000346be) list_highlight_pane_g3_cp1

0x5c61,	// (0x000346c6) list_highlight_pane_g4_cp1

0x5c69,	// (0x000346ce) list_highlight_pane_g5_cp1

0x5c71,	// (0x000346d6) list_highlight_pane_g6_cp1

0x5c79,	// (0x000346de) list_highlight_pane_g7_cp1

0x5c81,	// (0x000346e6) list_highlight_pane_g8_cp1

0x5c89,	// (0x000346ee) list_highlight_pane_g9_cp1

0xb65e,	// (0x0003a0c3) form_field_slider_pane_t3

0xb66c,	// (0x0003a0d1) form_field_slider_pane_t4

0x5b7d,	// (0x000345e2) slider_form_pane_ParamLimits

0x5b7d,	// (0x000345e2) slider_form_pane

0x4055,	// (0x00032aba) control_abbreviations

0x4055,	// (0x00032aba) control_conventions

0x4055,	// (0x00032aba) control_definitions

0x4055,	// (0x00032aba) format_table_attribute

0x623c,	// (0x00034ca1) bg_popup_preview_window_pane_g9

0x4055,	// (0x00032aba) format_table_data2

0x4055,	// (0x00032aba) format_table_data3

0x4055,	// (0x00032aba) format_table_data_example

0x0008,

0x4055,	// (0x00032aba) intro_purpose

0xf8fa,	// (0x0003e35f) bg_popup_preview_window_pane_g

0x4055,	// (0x00032aba) texts_category

0x4055,	// (0x00032aba) texts_graphics

0x5050,	// (0x00033ab5) text_digital

0x505f,	// (0x00033ac4) text_primary

0x506e,	// (0x00033ad3) text_primary_small

0x507d,	// (0x00033ae2) text_secondary

0x508c,	// (0x00033af1) text_title

0x6716,	// (0x0003517b) bg_passive_tab_pane_g1_cp3_srt

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp3_srt

0x670d,	// (0x00035172) bg_passive_tab_pane_g3_cp3_srt

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp3_srt_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp3_srt

0x671f,	// (0x00035184) tabs_4_active_pane_srt_g1

0xbc83,	// (0x0003a6e8) tabs_4_active_pane_srt_t1_ParamLimits

0xbc83,	// (0x0003a6e8) tabs_4_active_pane_srt_t1

0x6716,	// (0x0003517b) bg_active_tab_pane_g1_cp3_copy1

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp3_copy1

0x670d,	// (0x00035172) bg_active_tab_pane_g3_cp3_copy1

0x40b1,	// (0x00032b16) tabs_2_long_active_pane_srt_ParamLimits

0x40b1,	// (0x00032b16) tabs_2_long_active_pane_srt

0x40b1,	// (0x00032b16) tabs_2_long_passive_pane_srt_ParamLimits

0x40b1,	// (0x00032b16) tabs_2_long_passive_pane_srt

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp4_srt

0x661e,	// (0x00035083) bg_passive_tab_pane_g1_cp4_srt

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp4_srt

0x6615,	// (0x0003507a) bg_passive_tab_pane_g3_cp4_srt

0x540b,	// (0x00033e70) bg_active_tab_pane_cp4_srt_ParamLimits

0x540b,	// (0x00033e70) bg_active_tab_pane_cp4_srt

0xb9ed,	// (0x0003a452) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb9ed,	// (0x0003a452) tabs_2_long_active_pane_srt_t1

0x661e,	// (0x00035083) bg_active_tab_pane_g1_cp4_srt

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp4_srt

0x6615,	// (0x0003507a) bg_active_tab_pane_g3_cp4_srt

0x40a3,	// (0x00032b08) tabs_3_long_active_pane_srt_ParamLimits

0x40a3,	// (0x00032b08) tabs_3_long_active_pane_srt

0x40a3,	// (0x00032b08) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x40a3,	// (0x00032b08) tabs_3_long_passive_pane_cp_srt

0x40a3,	// (0x00032b08) tabs_3_long_passive_pane_srt_ParamLimits

0x40a3,	// (0x00032b08) tabs_3_long_passive_pane_srt

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp5_srt

0x4e16,	// (0x0003387b) bg_passive_tab_pane_g1_cp5_srt

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp5_srt

0x4e0d,	// (0x00033872) bg_passive_tab_pane_g3_cp5_srt

0x540b,	// (0x00033e70) bg_active_tab_pane_cp5_srt_ParamLimits

0x540b,	// (0x00033e70) bg_active_tab_pane_cp5_srt

0xb9db,	// (0x0003a440) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb9db,	// (0x0003a440) tabs_3_long_active_pane_srt_t1

0x4e16,	// (0x0003387b) bg_active_tab_pane_g1_cp5_srt

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp5_srt

0x4e0d,	// (0x00033872) bg_active_tab_pane_g3_cp5_srt

0x6607,	// (0x0003506c) navi_text_pane_srt_t1

0x65ff,	// (0x00035064) navi_icon_pane_srt_g1

0x519c,	// (0x00033c01) midp_editing_number_pane_srt

0x509b,	// (0x00033b00) midp_ticker_pane_srt

0x51a4,	// (0x00033c09) midp_ticker_pane_srt_g1

0x51ac,	// (0x00033c11) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0003e1e2) midp_ticker_pane_srt_g

0x51b4,	// (0x00033c19) midp_ticker_pane_srt_t1

0x65f0,	// (0x00035055) midp_editing_number_pane_t1_copy1

0xa263,	// (0x00038cc8) listscroll_midp_pane

0xa263,	// (0x00038cc8) midp_form_pane

0x50a3,	// (0x00033b08) midp_info_popup_window_ParamLimits

0x50a3,	// (0x00033b08) midp_info_popup_window

0x475e,	// (0x000331c3) bg_popup_sub_pane_cp50_ParamLimits

0x475e,	// (0x000331c3) bg_popup_sub_pane_cp50

0x589a,	// (0x000342ff) listscroll_midp_info_pane_ParamLimits

0x589a,	// (0x000342ff) listscroll_midp_info_pane

0x5882,	// (0x000342e7) listscroll_form_midp_pane_ParamLimits

0x5882,	// (0x000342e7) listscroll_form_midp_pane

0x588e,	// (0x000342f3) scroll_bar_cp050

0xb646,	// (0x0003a0ab) list_midp_pane

0x7047,	// (0x00035aac) signal_pane_g2_cp

0x57b4,	// (0x00034219) listscroll_midp_info_pane_t1_ParamLimits

0x57b4,	// (0x00034219) listscroll_midp_info_pane_t1

0x57cc,	// (0x00034231) listscroll_midp_info_pane_t2_ParamLimits

0x57cc,	// (0x00034231) listscroll_midp_info_pane_t2

0x580a,	// (0x0003426f) listscroll_midp_info_pane_t3_ParamLimits

0x580a,	// (0x0003426f) listscroll_midp_info_pane_t3

0x5844,	// (0x000342a9) listscroll_midp_info_pane_t4_ParamLimits

0x5844,	// (0x000342a9) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0003e29a) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0003e29a) listscroll_midp_info_pane_t

0x47de,	// (0x00033243) scroll_pane_cp21

0x5758,	// (0x000341bd) form_midp_field_choice_group_pane

0x5761,	// (0x000341c6) form_midp_field_text_pane

0x579a,	// (0x000341ff) form_midp_field_time_pane

0x57a2,	// (0x00034207) form_midp_gauge_slider_pane

0x57ab,	// (0x00034210) form_midp_gauge_wait_pane

0x4055,	// (0x00032aba) form_midp_image_pane

0x937f,	// (0x00037de4) list_single_midp_pane_ParamLimits

0x937f,	// (0x00037de4) list_single_midp_pane

0xb607,	// (0x0003a06c) form_midp_field_text_pane_t1

0x55d7,	// (0x0003403c) input_focus_pane_cp050

0x5747,	// (0x000341ac) list_midp_form_text_pane

0x5716,	// (0x0003417b) form_midp_field_choice_group_pane_t1

0x5724,	// (0x00034189) input_focus_pane_cp051

0x5738,	// (0x0003419d) list_midp_choice_pane

0x4055,	// (0x00032aba) status_idle_pane

0x56fa,	// (0x0003415f) form_midp_field_time_pane_t1

0x404b,	// (0x00032ab0) wait_anim_pane_g2_copy1

0x5708,	// (0x0003416d) form_midp_field_time_pane_t2

0x0001,

0x510e,	// (0x00033b73) aid_navinavi_width_2_pane

0xf830,	// (0x0003e295) form_midp_field_time_pane_t

0x4055,	// (0x00032aba) input_focus_pane_cp052

0x4055,	// (0x00032aba) bg_input_focus_pane_cp040

0x56d6,	// (0x0003413b) form_midp_gauge_slider_pane_t1

0x56e4,	// (0x00034149) form_midp_gauge_slider_pane_t2

0xb5eb,	// (0x0003a050) form_midp_gauge_slider_pane_t3

0xb5f9,	// (0x0003a05e) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0003e28c) form_midp_gauge_slider_pane_t

0x56f2,	// (0x00034157) form_midp_slider_pane

0x40b1,	// (0x00032b16) bg_input_focus_pane_cp041_ParamLimits

0x40b1,	// (0x00032b16) bg_input_focus_pane_cp041

0x56a3,	// (0x00034108) form_midp_gauge_wait_pane_t1_ParamLimits

0x56a3,	// (0x00034108) form_midp_gauge_wait_pane_t1

0x56b5,	// (0x0003411a) form_midp_gauge_wait_pane_t2_ParamLimits

0x56b5,	// (0x0003411a) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0003e287) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0003e287) form_midp_gauge_wait_pane_t

0x56c7,	// (0x0003412c) form_midp_wait_pane_ParamLimits

0x56c7,	// (0x0003412c) form_midp_wait_pane

0x566d,	// (0x000340d2) form_midp_image_pane_g1

0x5676,	// (0x000340db) form_midp_image_pane_t1

0x5685,	// (0x000340ea) form_midp_image_pane_t2

0x5694,	// (0x000340f9) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0003e280) form_midp_image_pane_t

0x5664,	// (0x000340c9) list_single_midp_pane_g1

0x9370,	// (0x00037dd5) list_single_midp_pane_t1

0xb5bb,	// (0x0003a020) list_midp_form_item_pane_ParamLimits

0xb5bb,	// (0x0003a020) list_midp_form_item_pane

0x50b6,	// (0x00033b1b) list_midp_form_item_pane_t1

0x50c5,	// (0x00033b2a) midp_ticker_pane_g1

0x50d1,	// (0x00033b36) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0003e1c8) midp_ticker_pane_g

0x50dd,	// (0x00033b42) midp_ticker_pane_t1

0x66a0,	// (0x00035105) midp_editing_number_pane_t1

0x667e,	// (0x000350e3) midp_editing_number_pane

0x668d,	// (0x000350f2) midp_ticker_pane

0x65e0,	// (0x00035045) ai_message_heading_pane

0x4055,	// (0x00032aba) bg_popup_window_pane_cp14

0x65e8,	// (0x0003504d) listscroll_ai_message_pane

0x656a,	// (0x00034fcf) ai_message_heading_pane_g1_ParamLimits

0x656a,	// (0x00034fcf) ai_message_heading_pane_g1

0x6576,	// (0x00034fdb) ai_message_heading_pane_g2_ParamLimits

0x6576,	// (0x00034fdb) ai_message_heading_pane_g2

0x6582,	// (0x00034fe7) ai_message_heading_pane_g3_ParamLimits

0x6582,	// (0x00034fe7) ai_message_heading_pane_g3

0x658e,	// (0x00034ff3) ai_message_heading_pane_g4_ParamLimits

0x658e,	// (0x00034ff3) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0003e3c1) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0003e3c1) ai_message_heading_pane_g

0x659a,	// (0x00034fff) ai_message_heading_pane_t1_ParamLimits

0x659a,	// (0x00034fff) ai_message_heading_pane_t1

0x65b4,	// (0x00035019) ai_message_heading_pane_t2_ParamLimits

0x65b4,	// (0x00035019) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0003e3ca) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0003e3ca) ai_message_heading_pane_t

0x65c6,	// (0x0003502b) bg_popup_heading_pane_cp1_ParamLimits

0x65c6,	// (0x0003502b) bg_popup_heading_pane_cp1

0x6558,	// (0x00034fbd) list_ai_message_pane_ParamLimits

0x6558,	// (0x00034fbd) list_ai_message_pane

0x47de,	// (0x00033243) scroll_pane_cp10

0x64f4,	// (0x00034f59) list_ai_message_pane_g1

0x64fc,	// (0x00034f61) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0003e39e) list_ai_message_pane_g

0x6504,	// (0x00034f69) list_ai_message_pane_t1_ParamLimits

0x6504,	// (0x00034f69) list_ai_message_pane_t1

0x6519,	// (0x00034f7e) list_ai_message_pane_t2_ParamLimits

0x6519,	// (0x00034f7e) list_ai_message_pane_t2

0x652e,	// (0x00034f93) list_ai_message_pane_t3_ParamLimits

0x652e,	// (0x00034f93) list_ai_message_pane_t3

0x6543,	// (0x00034fa8) list_ai_message_pane_t4_ParamLimits

0x6543,	// (0x00034fa8) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0003e3a3) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0003e3a3) list_ai_message_pane_t

0xb975,	// (0x0003a3da) cell_ai_soft_ind_pane_ParamLimits

0xb975,	// (0x0003a3da) cell_ai_soft_ind_pane

0x50ef,	// (0x00033b54) cell_ai_soft_ind_pane_g1_ParamLimits

0x50ef,	// (0x00033b54) cell_ai_soft_ind_pane_g1

0x4055,	// (0x00032aba) grid_highlight_cp1

0x50fc,	// (0x00033b61) text_secondary_cp56_ParamLimits

0x50fc,	// (0x00033b61) text_secondary_cp56

0x6497,	// (0x00034efc) example_general_pane_ParamLimits

0x6497,	// (0x00034efc) example_general_pane

0x64a3,	// (0x00034f08) example_parent_pane_g1_ParamLimits

0x64a3,	// (0x00034f08) example_parent_pane_g1

0x64af,	// (0x00034f14) example_parent_pane_t1_ParamLimits

0x64af,	// (0x00034f14) example_parent_pane_t1

0xaed1,	// (0x00039936) popup_preview_text_window_ParamLimits

0xaed1,	// (0x00039936) popup_preview_text_window

0x4fd8,	// (0x00033a3d) list_single_pane_cp2_g4

0x4280,	// (0x00032ce5) bg_popup_preview_window_pane_ParamLimits

0x4280,	// (0x00032ce5) bg_popup_preview_window_pane

0x6244,	// (0x00034ca9) popup_preview_text_window_t1_ParamLimits

0x6244,	// (0x00034ca9) popup_preview_text_window_t1

0x6262,	// (0x00034cc7) popup_preview_text_window_t2_ParamLimits

0x6262,	// (0x00034cc7) popup_preview_text_window_t2

0x62ab,	// (0x00034d10) popup_preview_text_window_t3_ParamLimits

0x62ab,	// (0x00034d10) popup_preview_text_window_t3

0x62f0,	// (0x00034d55) popup_preview_text_window_t4_ParamLimits

0x62f0,	// (0x00034d55) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0003e372) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0003e372) popup_preview_text_window_t

0x636e,	// (0x00034dd3) scroll_pane_cp11

0x54e7,	// (0x00033f4c) bg_popup_preview_window_pane_g1

0x6204,	// (0x00034c69) bg_popup_preview_window_pane_g2

0x620c,	// (0x00034c71) bg_popup_preview_window_pane_g3

0x6214,	// (0x00034c79) bg_popup_preview_window_pane_g4

0x621c,	// (0x00034c81) bg_popup_preview_window_pane_g5

0x6224,	// (0x00034c89) bg_popup_preview_window_pane_g6

0x622c,	// (0x00034c91) bg_popup_preview_window_pane_g7

0x6234,	// (0x00034c99) bg_popup_preview_window_pane_g8

0x99f9,	// (0x0003845e) aid_popup_width_pane

0xaeaf,	// (0x00039914) popup_midp_note_alarm_window_ParamLimits

0xaeaf,	// (0x00039914) popup_midp_note_alarm_window

0x469a,	// (0x000330ff) data_form_pane_ParamLimits

0x9087,	// (0x00037aec) form_field_data_pane_g1

0x9091,	// (0x00037af6) form_field_data_pane_t1_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_ParamLimits

0x46b4,	// (0x00033119) data_form_wide_pane_ParamLimits

0x90ab,	// (0x00037b10) form_field_data_wide_pane_g1

0x90b7,	// (0x00037b1c) form_field_data_wide_pane_t1_ParamLimits

0x4421,	// (0x00032e86) input_focus_pane_cp6_ParamLimits

0xa228,	// (0x00038c8d) input_popup_find_pane_g1_ParamLimits

0xa228,	// (0x00038c8d) input_popup_find_pane_g1

0xa381,	// (0x00038de6) aid_navi_side_left_pane

0xa396,	// (0x00038dfb) aid_navi_side_right_pane

0x5d26,	// (0x0003478b) bg_popup_window_pane_cp30_ParamLimits

0x5d26,	// (0x0003478b) bg_popup_window_pane_cp30

0x5da0,	// (0x00034805) popup_midp_note_alarm_window_g1_ParamLimits

0x5da0,	// (0x00034805) popup_midp_note_alarm_window_g1

0x5dd0,	// (0x00034835) popup_midp_note_alarm_window_t1_ParamLimits

0x5dd0,	// (0x00034835) popup_midp_note_alarm_window_t1

0x5e71,	// (0x000348d6) popup_midp_note_alarm_window_t2_ParamLimits

0x5e71,	// (0x000348d6) popup_midp_note_alarm_window_t2

0x5f1f,	// (0x00034984) popup_midp_note_alarm_window_t3_ParamLimits

0x5f1f,	// (0x00034984) popup_midp_note_alarm_window_t3

0x5f47,	// (0x000349ac) popup_midp_note_alarm_window_t4_ParamLimits

0x5f47,	// (0x000349ac) popup_midp_note_alarm_window_t4

0x5f67,	// (0x000349cc) popup_midp_note_alarm_window_t5_ParamLimits

0x5f67,	// (0x000349cc) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0003e30f) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0003e30f) popup_midp_note_alarm_window_t

0x6013,	// (0x00034a78) wait_bar_pane_cp1_ParamLimits

0x6013,	// (0x00034a78) wait_bar_pane_cp1

0x4055,	// (0x00032aba) wait_anim_pane_copy1

0x4055,	// (0x00032aba) wait_border_pane_copy1

0x5a3e,	// (0x000344a3) wait_border_pane_g1_copy1

0x90d1,	// (0x00037b36) form_field_popup_pane_g1

0x90d9,	// (0x00037b3e) form_field_popup_pane_t1_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_cp7_ParamLimits

0x46e0,	// (0x00033145) list_form_pane_ParamLimits

0x90f3,	// (0x00037b58) form_field_popup_wide_pane_g1

0x90fb,	// (0x00037b60) form_field_popup_wide_pane_t1_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_cp8_ParamLimits

0x46ec,	// (0x00033151) list_form_wide_pane_ParamLimits

0x6746,	// (0x000351ab) aid_size_cell_graphic_pane

0x9187,	// (0x00037bec) data_form_pane_t1_ParamLimits

0x93df,	// (0x00037e44) data_form_wide_pane_t1_ParamLimits

0xb18d,	// (0x00039bf2) bg_status_flat_pane

0x9de8,	// (0x0003884d) title_pane_t1_ParamLimits

0x406b,	// (0x00032ad0) title_pane_t2_ParamLimits

0x4091,	// (0x00032af6) title_pane_t3_ParamLimits

0xf55d,	// (0x0003dfc2) title_pane_t_ParamLimits

0x4b75,	// (0x000335da) level_1_signal_ParamLimits

0x4b82,	// (0x000335e7) level_2_signal_ParamLimits

0x4b8f,	// (0x000335f4) level_3_signal_ParamLimits

0x4b9c,	// (0x00033601) level_4_signal_ParamLimits

0x4ba9,	// (0x0003360e) level_5_signal_ParamLimits

0x4bb6,	// (0x0003361b) level_6_signal_ParamLimits

0x4bc3,	// (0x00033628) level_7_signal_ParamLimits

0x4b75,	// (0x000335da) level_1_battery_ParamLimits

0x4b82,	// (0x000335e7) level_2_battery_ParamLimits

0x4b8f,	// (0x000335f4) level_3_battery_ParamLimits

0x4b9c,	// (0x00033601) level_4_battery_ParamLimits

0x4ba9,	// (0x0003360e) level_5_battery_ParamLimits

0x4bb6,	// (0x0003361b) level_6_battery_ParamLimits

0x4bc3,	// (0x00033628) level_7_battery_ParamLimits

0x5c49,	// (0x000346ae) bg_status_flat_pane_g1

0x5c51,	// (0x000346b6) bg_status_flat_pane_g2

0x5c59,	// (0x000346be) bg_status_flat_pane_g3

0x5c61,	// (0x000346c6) bg_status_flat_pane_g4

0x5c69,	// (0x000346ce) bg_status_flat_pane_g5

0x5c71,	// (0x000346d6) bg_status_flat_pane_g6

0x5c79,	// (0x000346de) bg_status_flat_pane_g7

0x9e58,	// (0x000388bd) tabs_3_active_pane_t1_ParamLimits

0x9e58,	// (0x000388bd) tabs_3_passive_pane_t1_ParamLimits

0x9e72,	// (0x000388d7) tabs_4_active_pane_t1_ParamLimits

0x9e72,	// (0x000388d7) tabs_4_1_passive_pane_t1_ParamLimits

0xa23e,	// (0x00038ca3) tabs_2_active_pane_t1_ParamLimits

0xa23e,	// (0x00038ca3) tabs_2_passive_pane_t1_ParamLimits

0x540b,	// (0x00033e70) bg_active_tab_pane_cp4_ParamLimits

0xa250,	// (0x00038cb5) tabs_2_long_active_pane_t1_ParamLimits

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp4_ParamLimits

0xb476,	// (0x00039edb) list_single_midp_graphic_pane_t1_ParamLimits

0x540b,	// (0x00033e70) bg_active_tab_pane_cp5_ParamLimits

0xa26f,	// (0x00038cd4) tabs_3_long_active_pane_t1_ParamLimits

0xa263,	// (0x00038cc8) bg_passive_tab_pane_cp5_ParamLimits

0xb476,	// (0x00039edb) list_single_midp_graphic_pane_t1

0xb18d,	// (0x00039bf2) bg_status_flat_pane_ParamLimits

0x53a0,	// (0x00033e05) indicator_pane_cp2_ParamLimits

0x53a0,	// (0x00033e05) indicator_pane_cp2

0xb2d1,	// (0x00039d36) navi_pane_srt_ParamLimits

0xb2d1,	// (0x00039d36) navi_pane_srt

0x53c8,	// (0x00033e2d) popup_clock_digital_analogue_window_cp1

0x40f5,	// (0x00032b5a) indicator_pane_t1

0x509b,	// (0x00033b00) copy_highlight_pane

0x509b,	// (0x00033b00) cursor_graphics_pane

0x509b,	// (0x00033b00) graphic_within_text_pane

0x509b,	// (0x00033b00) link_highlight_pane

0x6331,	// (0x00034d96) popup_preview_text_window_t5_ParamLimits

0x6331,	// (0x00034d96) popup_preview_text_window_t5

0x5116,	// (0x00033b7b) cursor_digital_pane

0x5116,	// (0x00033b7b) cursor_primary_pane

0x5127,	// (0x00033b8c) cursor_primary_small_pane

0x512f,	// (0x00033b94) cursor_secondary_pane

0x5137,	// (0x00033b9c) cursor_title_pane

0x5116,	// (0x00033b7b) link_highlight_digital_pane

0x511e,	// (0x00033b83) link_highlight_primary_pane

0x5127,	// (0x00033b8c) link_highlight_primary_small_pane

0x512f,	// (0x00033b94) link_highlight_secondary_pane

0x5137,	// (0x00033b9c) link_highlight_title_pane

0x5116,	// (0x00033b7b) copy_highlight_digital_pane

0x5116,	// (0x00033b7b) copy_highlight_primary_pane

0x5127,	// (0x00033b8c) copy_highlight_primary_small_pane

0x512f,	// (0x00033b94) copy_highlight_secondary_pane

0x5137,	// (0x00033b9c) copy_highlight_title_pane

0x512f,	// (0x00033b94) graphic_text_digital_pane

0x5cc9,	// (0x0003472e) graphic_text_primary_pane

0x5cd2,	// (0x00034737) graphic_text_primary_small_pane

0x5127,	// (0x00033b8c) graphic_text_secondary_pane

0x5116,	// (0x00033b7b) graphic_text_title_pane

0xa90e,	// (0x00039373) cursor_primary_pane_g1

0x5cbb,	// (0x00034720) cursor_text_primary_t1

0xb68e,	// (0x0003a0f3) cursor_primary_small_pane_g1

0x5cad,	// (0x00034712) cursor_text_primary_small_t1

0xb684,	// (0x0003a0e9) cursor_primary_small_pane_g1_copy1

0x5c9f,	// (0x00034704) cursor_text_primary_small_t1_copy1

0x5c91,	// (0x000346f6) cursor_text_title_t1

0xb67a,	// (0x0003a0df) cursor_title_pane_g1

0xa90e,	// (0x00039373) cursor_digital_pane_g1

0x513f,	// (0x00033ba4) cursor_text_digital_t1

0x5c32,	// (0x00034697) link_highlight_primary_pane_g1

0x5c3a,	// (0x0003469f) link_highlight_primary_pane_t1

0x514d,	// (0x00033bb2) link_highlight_primary_small_pane_g1

0x5155,	// (0x00033bba) link_highlight_primary_small_pane_t1

0x514d,	// (0x00033bb2) link_highlight_secondary_pane_g1

0x5164,	// (0x00033bc9) link_highlight_secondary_pane_t1

0x5ba6,	// (0x0003460b) link_highlight_title_pane_g1

0x5bae,	// (0x00034613) link_highlight_title_pane_t1

0x5b8f,	// (0x000345f4) link_highlight_digital_pane_g1

0x5b97,	// (0x000345fc) link_highlight_digital_pane_t1

0x5a83,	// (0x000344e8) copy_highlight_primary_pane_g1

0x5a8b,	// (0x000344f0) copy_highlight_primary_pane_t1

0x5a5d,	// (0x000344c2) copy_highlight_primary_small_pane_g1

0x5a74,	// (0x000344d9) copy_highlight_primary_small_pane_t1

0x5173,	// (0x00033bd8) copy_highlight_secondary_pane_g1

0x517b,	// (0x00033be0) copy_highlight_secondary_pane_t1

0x5a5d,	// (0x000344c2) copy_highlight_title_pane_g1

0x5a65,	// (0x000344ca) copy_highlight_title_pane_t1

0x5a83,	// (0x000344e8) copy_highlight_digital_pane_g1

0x68d0,	// (0x00035335) copy_highlight_digital_pane_t1

0x6824,	// (0x00035289) graphic_text_primary_pane_g1

0x68b4,	// (0x00035319) graphic_text_primary_pane_t1

0x68c2,	// (0x00035327) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0003e43e) graphic_text_primary_pane_t

0x6890,	// (0x000352f5) graphic_text_primary_small_pane_g1

0x6898,	// (0x000352fd) graphic_text_primary_small_pane_t1

0x68a6,	// (0x0003530b) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0003e439) graphic_text_primary_small_pane_t

0x686c,	// (0x000352d1) graphic_text_secondary_pane_g1

0x6874,	// (0x000352d9) graphic_text_secondary_pane_t1

0x6882,	// (0x000352e7) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0003e434) graphic_text_secondary_pane_t

0x6848,	// (0x000352ad) graphic_text_title_pane_g1

0x6850,	// (0x000352b5) graphic_text_title_pane_t1

0x685e,	// (0x000352c3) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0003e42f) graphic_text_title_pane_t

0x6824,	// (0x00035289) graphic_text_digital_pane_g1

0x682c,	// (0x00035291) graphic_text_digital_pane_t1

0x683a,	// (0x0003529f) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0003e42a) graphic_text_digital_pane_t

0x40b1,	// (0x00032b16) navi_icon_pane_srt_ParamLimits

0x40b1,	// (0x00032b16) navi_icon_pane_srt

0x4055,	// (0x00032aba) navi_midp_pane_srt

0x4055,	// (0x00032aba) navi_navi_pane_srt

0x40b1,	// (0x00032b16) navi_text_pane_srt_ParamLimits

0x40b1,	// (0x00032b16) navi_text_pane_srt

0x67ef,	// (0x00035254) navi_navi_icon_text_pane_srt

0x6809,	// (0x0003526e) navi_navi_pane_srt_g1_ParamLimits

0x6809,	// (0x0003526e) navi_navi_pane_srt_g1

0x67f7,	// (0x0003525c) navi_navi_pane_srt_g2_ParamLimits

0x67f7,	// (0x0003525c) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0003e425) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0003e425) navi_navi_pane_srt_g

0x681b,	// (0x00035280) navi_navi_tabs_pane_srt

0x67ef,	// (0x00035254) navi_navi_text_pane_srt

0x67ef,	// (0x00035254) navi_navi_volume_pane_srt

0x67e0,	// (0x00035245) navi_navi_text_pane_srt_t1

0xbda7,	// (0x0003a80c) navi_navi_volume_pane_srt_g1

0xbdaf,	// (0x0003a814) volume_small_pane_srt_ParamLimits

0xbdaf,	// (0x0003a814) volume_small_pane_srt

0xa918,	// (0x0003937d) volume_small_pane_srt_g1_ParamLimits

0xa918,	// (0x0003937d) volume_small_pane_srt_g1

0xa928,	// (0x0003938d) volume_small_pane_srt_g2_ParamLimits

0xa928,	// (0x0003938d) volume_small_pane_srt_g2

0xa939,	// (0x0003939e) volume_small_pane_srt_g3_ParamLimits

0xa939,	// (0x0003939e) volume_small_pane_srt_g3

0xa94a,	// (0x000393af) volume_small_pane_srt_g4_ParamLimits

0xa94a,	// (0x000393af) volume_small_pane_srt_g4

0xa95b,	// (0x000393c0) volume_small_pane_srt_g5_ParamLimits

0xa95b,	// (0x000393c0) volume_small_pane_srt_g5

0xa96c,	// (0x000393d1) volume_small_pane_srt_g6_ParamLimits

0xa96c,	// (0x000393d1) volume_small_pane_srt_g6

0xa97d,	// (0x000393e2) volume_small_pane_srt_g7_ParamLimits

0xa97d,	// (0x000393e2) volume_small_pane_srt_g7

0xa98e,	// (0x000393f3) volume_small_pane_srt_g8_ParamLimits

0xa98e,	// (0x000393f3) volume_small_pane_srt_g8

0xa99f,	// (0x00039404) volume_small_pane_srt_g9_ParamLimits

0xa99f,	// (0x00039404) volume_small_pane_srt_g9

0xa9b0,	// (0x00039415) volume_small_pane_srt_g10_ParamLimits

0xa9b0,	// (0x00039415) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0003e1cd) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0003e1cd) volume_small_pane_srt_g

0x4329,	// (0x00032d8e) query_popup_data_pane_cp2

0x67c6,	// (0x0003522b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x67c6,	// (0x0003522b) navi_navi_icon_text_pane_srt_t1

0x5cc9,	// (0x0003472e) navi_tabs_2_long_pane_srt

0x5cc9,	// (0x0003472e) navi_tabs_2_pane_srt

0x5cc9,	// (0x0003472e) navi_tabs_3_long_pane_srt

0x5cc9,	// (0x0003472e) navi_tabs_3_pane_srt

0x5cc9,	// (0x0003472e) navi_tabs_4_pane_srt

0xbd87,	// (0x0003a7ec) tabs_2_active_pane_srt_ParamLimits

0xbd87,	// (0x0003a7ec) tabs_2_active_pane_srt

0xbd97,	// (0x0003a7fc) tabs_2_passive_pane_srt_ParamLimits

0xbd97,	// (0x0003a7fc) tabs_2_passive_pane_srt

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp1_srt

0x67ad,	// (0x00035212) bg_passive_tab_pane_g1_cp1_srt

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp1_srt

0x67a4,	// (0x00035209) bg_passive_tab_pane_g3_cp1_srt

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp1_srt_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp1_srt

0x67b6,	// (0x0003521b) tabs_2_active_pane_srt_g1

0xbd75,	// (0x0003a7da) tabs_2_active_pane_srt_t1_ParamLimits

0xbd75,	// (0x0003a7da) tabs_2_active_pane_srt_t1

0x67ad,	// (0x00035212) bg_active_tab_pane_g1_cp1_srt

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp1_srt

0x67a4,	// (0x00035209) bg_active_tab_pane_g3_cp1_srt

0xbd42,	// (0x0003a7a7) tabs_3_active_pane_srt_ParamLimits

0xbd42,	// (0x0003a7a7) tabs_3_active_pane_srt

0xbd53,	// (0x0003a7b8) tabs_3_passive_pane_cp_srt_ParamLimits

0xbd53,	// (0x0003a7b8) tabs_3_passive_pane_cp_srt

0xbd64,	// (0x0003a7c9) tabs_3_passive_pane_srt_ParamLimits

0xbd64,	// (0x0003a7c9) tabs_3_passive_pane_srt

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4816,	// (0x0003327b) bg_passive_tab_pane_cp2_srt

0x5193,	// (0x00033bf8) bg_passive_tab_pane_g1_cp2_srt

0x4dc6,	// (0x0003382b) bg_passive_tab_pane_g2_cp2_srt

0x518a,	// (0x00033bef) bg_passive_tab_pane_g3_cp2_srt

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp2_srt_ParamLimits

0x40b1,	// (0x00032b16) bg_active_tab_pane_cp2_srt

0x679c,	// (0x00035201) tabs_3_active_pane_srt_g1

0xbd30,	// (0x0003a795) tabs_3_active_pane_srt_t1_ParamLimits

0xbd30,	// (0x0003a795) tabs_3_active_pane_srt_t1

0x5193,	// (0x00033bf8) bg_active_tab_pane_g1_cp2_srt

0x4dc6,	// (0x0003382b) bg_active_tab_pane_g2_cp2_srt

0x518a,	// (0x00033bef) bg_active_tab_pane_g3_cp2_srt

0xbce8,	// (0x0003a74d) tabs_4_active_pane_srt_ParamLimits

0xbce8,	// (0x0003a74d) tabs_4_active_pane_srt

0xbcfa,	// (0x0003a75f) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbcfa,	// (0x0003a75f) tabs_4_passive_pane_cp2_srt

0xab36,	// (0x0003959b) aid_size_cell_toolbar

0xa263,	// (0x00038cc8) main_idle_act_pane_ParamLimits

0xace3,	// (0x00039748) popup_large_graphic_colour_window_ParamLimits

0xb042,	// (0x00039aa7) popup_toolbar_window_ParamLimits

0xb042,	// (0x00039aa7) popup_toolbar_window

0x66c3,	// (0x00035128) list_single_graphic_2heading_pane_ParamLimits

0x66c3,	// (0x00035128) list_single_graphic_2heading_pane

0x49c0,	// (0x00033425) aid_size_cell_apps_grid_lsc_pane

0x49d2,	// (0x00033437) aid_size_cell_apps_grid_prt_pane

0x4816,	// (0x0003327b) bg_wml_button_pane_cp1_ParamLimits

0x4816,	// (0x0003327b) bg_wml_button_pane_cp1

0xb607,	// (0x0003a06c) form_midp_field_text_pane_t1_ParamLimits

0x55d7,	// (0x0003403c) input_focus_pane_cp050_ParamLimits

0x5747,	// (0x000341ac) list_midp_form_text_pane_ParamLimits

0x5724,	// (0x00034189) input_focus_pane_cp051_ParamLimits

0x5738,	// (0x0003419d) list_midp_choice_pane_ParamLimits

0xb555,	// (0x00039fba) list_single_2graphic_pane_cp3_ParamLimits

0xb555,	// (0x00039fba) list_single_2graphic_pane_cp3

0xb581,	// (0x00039fe6) list_single_midp_graphic_pane_ParamLimits

0xb581,	// (0x00039fe6) list_single_midp_graphic_pane

0x92ba,	// (0x00037d1f) list_single_graphic_2heading_pane_g1_ParamLimits

0x92ba,	// (0x00037d1f) list_single_graphic_2heading_pane_g1

0x92c6,	// (0x00037d2b) list_single_graphic_2heading_pane_g4_ParamLimits

0x92c6,	// (0x00037d2b) list_single_graphic_2heading_pane_g4

0x92d2,	// (0x00037d37) list_single_graphic_2heading_pane_g5_ParamLimits

0x92d2,	// (0x00037d37) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0003e220) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0003e220) list_single_graphic_2heading_pane_g

0x92de,	// (0x00037d43) list_single_graphic_2heading_pane_t1_ParamLimits

0x92de,	// (0x00037d43) list_single_graphic_2heading_pane_t1

0x92f2,	// (0x00037d57) list_single_graphic_2heading_pane_t2_ParamLimits

0x92f2,	// (0x00037d57) list_single_graphic_2heading_pane_t2

0x930c,	// (0x00037d71) list_single_graphic_2heading_pane_t3_ParamLimits

0x930c,	// (0x00037d71) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0003e227) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0003e227) list_single_graphic_2heading_pane_t

0x5425,	// (0x00033e8a) bg_popup_sub_pane_cp2

0x544f,	// (0x00033eb4) grid_toobar_pane

0xb3fb,	// (0x00039e60) cell_toolbar_pane_ParamLimits

0xb3fb,	// (0x00039e60) cell_toolbar_pane

0x548b,	// (0x00033ef0) cell_toolbar_pane_g1_ParamLimits

0x548b,	// (0x00033ef0) cell_toolbar_pane_g1

0x549f,	// (0x00033f04) cell_toolbar_pane_g2_ParamLimits

0x549f,	// (0x00033f04) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0003e235) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0003e235) cell_toolbar_pane_g

0x54c1,	// (0x00033f26) grid_highlight_pane_cp2_ParamLimits

0x54c1,	// (0x00033f26) grid_highlight_pane_cp2

0x54db,	// (0x00033f40) toolbar_button_pane

0x54e7,	// (0x00033f4c) toolbar_button_pane_g1

0x54f7,	// (0x00033f5c) toolbar_button_pane_g2

0x54ef,	// (0x00033f54) toolbar_button_pane_g3

0x5507,	// (0x00033f6c) toolbar_button_pane_g4

0x54ff,	// (0x00033f64) toolbar_button_pane_g5

0x550f,	// (0x00033f74) toolbar_button_pane_g6

0x5517,	// (0x00033f7c) toolbar_button_pane_g7

0x5527,	// (0x00033f8c) toolbar_button_pane_g8

0x551f,	// (0x00033f84) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0003e23a) toolbar_button_pane_g

0xb433,	// (0x00039e98) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb433,	// (0x00039e98) list_single_2graphic_pane_g1_cp3

0xb43f,	// (0x00039ea4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb43f,	// (0x00039ea4) list_single_2graphic_pane_g2_cp3

0x4f01,	// (0x00033966) list_single_2graphic_pane_g3_cp3

0xb450,	// (0x00039eb5) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb450,	// (0x00039eb5) list_single_2graphic_pane_g4_cp3

0xb45c,	// (0x00039ec1) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb45c,	// (0x00039ec1) list_single_2graphic_pane_t1_cp3

0x4ef5,	// (0x0003395a) list_single_midp_graphic_pane_g2_ParamLimits

0x4ef5,	// (0x0003395a) list_single_midp_graphic_pane_g2

0x92a2,	// (0x00037d07) aid_zoom_text_primary

0x92aa,	// (0x00037d0f) aid_zoom_text_secondary

0x5247,	// (0x00033cac) status_small_pane_g7_ParamLimits

0x5247,	// (0x00033cac) status_small_pane_g7

0x526a,	// (0x00033ccf) status_small_pane_t1_ParamLimits

0x9dcb,	// (0x00038830) title_pane_g2

0x0003,

0xf554,	// (0x0003dfb9) title_pane_g

0xa025,	// (0x00038a8a) aid_size_cell_colour_1_pane_ParamLimits

0xa025,	// (0x00038a8a) aid_size_cell_colour_1_pane

0xa039,	// (0x00038a9e) aid_size_cell_colour_2_pane_ParamLimits

0xa039,	// (0x00038a9e) aid_size_cell_colour_2_pane

0xa04d,	// (0x00038ab2) aid_size_cell_colour_3_pane_ParamLimits

0xa04d,	// (0x00038ab2) aid_size_cell_colour_3_pane

0xa061,	// (0x00038ac6) aid_size_cell_colour_4_pane_ParamLimits

0xa061,	// (0x00038ac6) aid_size_cell_colour_4_pane

0xa2bd,	// (0x00038d22) title_pane_stacon_g1_ParamLimits

0xa2bd,	// (0x00038d22) title_pane_stacon_g1

0x5ae2,	// (0x00034547) popup_note_wait_window_g3_ParamLimits

0x5ae2,	// (0x00034547) popup_note_wait_window_g3

0x5b58,	// (0x000345bd) popup_note_wait_window_t5_ParamLimits

0x5b58,	// (0x000345bd) popup_note_wait_window_t5

0x4055,	// (0x00032aba) main_feb_china_hwr_fs_writing_pane

0xabce,	// (0x00039633) popup_feb_china_hwr_fs_window_ParamLimits

0xabce,	// (0x00039633) popup_feb_china_hwr_fs_window

0xb48c,	// (0x00039ef1) aid_size_cell_hwr_fs_ParamLimits

0xb48c,	// (0x00039ef1) aid_size_cell_hwr_fs

0x55d7,	// (0x0003403c) bg_popup_sub_pane_cp3_ParamLimits

0x55d7,	// (0x0003403c) bg_popup_sub_pane_cp3

0xb4a1,	// (0x00039f06) grid_hwr_fs_pane_ParamLimits

0xb4a1,	// (0x00039f06) grid_hwr_fs_pane

0xb4b9,	// (0x00039f1e) linegrid_hwr_fs_pane_ParamLimits

0xb4b9,	// (0x00039f1e) linegrid_hwr_fs_pane

0xb4c9,	// (0x00039f2e) cell_hwr_fs_pane_ParamLimits

0xb4c9,	// (0x00039f2e) cell_hwr_fs_pane

0x55e3,	// (0x00034048) linegrid_hwr_fs_pane_g1_ParamLimits

0x55e3,	// (0x00034048) linegrid_hwr_fs_pane_g1

0xb4eb,	// (0x00039f50) linegrid_hwr_fs_pane_g2_ParamLimits

0xb4eb,	// (0x00039f50) linegrid_hwr_fs_pane_g2

0x55ef,	// (0x00034054) linegrid_hwr_fs_pane_g3_ParamLimits

0x55ef,	// (0x00034054) linegrid_hwr_fs_pane_g3

0xb4fd,	// (0x00039f62) linegrid_hwr_fs_pane_g4_ParamLimits

0xb4fd,	// (0x00039f62) linegrid_hwr_fs_pane_g4

0xb517,	// (0x00039f7c) linegrid_hwr_fs_pane_g5_ParamLimits

0xb517,	// (0x00039f7c) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0003e265) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003e265) linegrid_hwr_fs_pane_g

0x55fb,	// (0x00034060) cell_hwr_fs_pane_g1_ParamLimits

0x55fb,	// (0x00034060) cell_hwr_fs_pane_g1

0x53d9,	// (0x00033e3e) cell_hwr_fs_pane_g2_ParamLimits

0x53d9,	// (0x00033e3e) cell_hwr_fs_pane_g2

0xb52d,	// (0x00039f92) cell_hwr_fs_pane_g3_ParamLimits

0xb52d,	// (0x00039f92) cell_hwr_fs_pane_g3

0xb53a,	// (0x00039f9f) cell_hwr_fs_pane_g4_ParamLimits

0xb53a,	// (0x00039f9f) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0003e270) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0003e270) cell_hwr_fs_pane_g

0xb547,	// (0x00039fac) cell_hwr_fs_pane_t1

0x4055,	// (0x00032aba) grid_highlight_pane_cp6

0x4055,	// (0x00032aba) main_idle_act2_pane

0x47c5,	// (0x0003322a) aid_inside_area_popup_secondary

0xb84e,	// (0x0003a2b3) aid_inside_area_window_primary_ParamLimits

0xb84e,	// (0x0003a2b3) aid_inside_area_window_primary

0x68df,	// (0x00035344) ai2_news_ticker_pane

0x68e7,	// (0x0003534c) aid_size_cell_ai1_link_ParamLimits

0x68e7,	// (0x0003534c) aid_size_cell_ai1_link

0x6901,	// (0x00035366) popup_ai2_data_window_ParamLimits

0x6901,	// (0x00035366) popup_ai2_data_window

0x6915,	// (0x0003537a) popup_ai2_link_window_ParamLimits

0x6915,	// (0x0003537a) popup_ai2_link_window

0x55d7,	// (0x0003403c) bg_popup_sub_pane_cp4_ParamLimits

0x55d7,	// (0x0003403c) bg_popup_sub_pane_cp4

0x6929,	// (0x0003538e) grid_ai2_link_pane_ParamLimits

0x6929,	// (0x0003538e) grid_ai2_link_pane

0x6940,	// (0x000353a5) popup_ai2_link_window_g1_ParamLimits

0x6940,	// (0x000353a5) popup_ai2_link_window_g1

0x694c,	// (0x000353b1) popup_ai2_link_window_g2_ParamLimits

0x694c,	// (0x000353b1) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0003e443) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0003e443) popup_ai2_link_window_g

0x695b,	// (0x000353c0) ai2_mp_button_pane

0x6963,	// (0x000353c8) ai2_mp_volume_pane

0x5724,	// (0x00034189) bg_popup_sub_pane_cp5_ParamLimits

0x5724,	// (0x00034189) bg_popup_sub_pane_cp5

0x696b,	// (0x000353d0) heading_ai2_gene_pane_ParamLimits

0x696b,	// (0x000353d0) heading_ai2_gene_pane

0x6977,	// (0x000353dc) list_ai2_gene_pane_ParamLimits

0x6977,	// (0x000353dc) list_ai2_gene_pane

0x69bf,	// (0x00035424) cell_ai2_link_pane_ParamLimits

0x69bf,	// (0x00035424) cell_ai2_link_pane

0x69d5,	// (0x0003543a) cell_ai2_link_pane_g1

0x4055,	// (0x00032aba) grid_highlight_pane_cp7

0xbdc4,	// (0x0003a829) ai2_mp_volume_pane_g1

0x6aae,	// (0x00035513) ai2_mp_volume_pane_g2

0x6a1b,	// (0x00035480) list_ai2_gene_pane_t1

0x6aa6,	// (0x0003550b) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0003e45c) ai2_mp_volume_pane_g

0xbdcc,	// (0x0003a831) volume_small_pane_cp3

0x6ab6,	// (0x0003551b) aid_size_cell_ai2_button

0x6abe,	// (0x00035523) grid_ai2_button_pane

0x6ac7,	// (0x0003552c) cell_ai2_button_pane_ParamLimits

0x6ac7,	// (0x0003552c) cell_ai2_button_pane

0x404b,	// (0x00032ab0) cell_ai2_button_pane_g1

0x4055,	// (0x00032aba) grid_highlight_pane_cp8

0x6a66,	// (0x000354cb) ai2_gene_pane_t1_ParamLimits

0x6a66,	// (0x000354cb) ai2_gene_pane_t1

0xab2c,	// (0x00039591) aid_height_parent_landscape

0xba36,	// (0x0003a49b) aid_height_set_list

0x64d6,	// (0x00034f3b) aid_size_parent

0x6746,	// (0x000351ab) aid_size_cell_graphic_pane_ParamLimits

0x6987,	// (0x000353ec) popup_ai2_data_window_g1_ParamLimits

0x6987,	// (0x000353ec) popup_ai2_data_window_g1

0x6993,	// (0x000353f8) ai2_news_ticker_pane_g1

0x699b,	// (0x00035400) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0003e448) ai2_news_ticker_pane_g

0x69a3,	// (0x00035408) ai2_news_ticker_pane_t1

0x69b1,	// (0x00035416) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0003e44d) ai2_news_ticker_pane_t

0x69de,	// (0x00035443) heading_ai2_gene_pane_g1

0x69e6,	// (0x0003544b) heading_ai2_gene_pane_t1_ParamLimits

0x69e6,	// (0x0003544b) heading_ai2_gene_pane_t1

0x69fb,	// (0x00035460) list_highlight_pane_cp6

0x6a03,	// (0x00035468) ai2_gene_pane_ParamLimits

0x6a03,	// (0x00035468) ai2_gene_pane

0x6a29,	// (0x0003548e) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0003e452) list_ai2_gene_pane_t

0x6a37,	// (0x0003549c) list_highlight_pane_cp8_ParamLimits

0x6a37,	// (0x0003549c) list_highlight_pane_cp8

0x6a48,	// (0x000354ad) ai2_gene_pane_g1_ParamLimits

0x6a48,	// (0x000354ad) ai2_gene_pane_g1

0x6a5a,	// (0x000354bf) ai2_gene_pane_g2_ParamLimits

0x6a5a,	// (0x000354bf) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0003e457) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0003e457) ai2_gene_pane_g

0x463c,	// (0x000330a1) scroll_pane_cp12

0xaaeb,	// (0x00039550) control_pane_t3_ParamLimits

0xaaeb,	// (0x00039550) control_pane_t3

0x525b,	// (0x00033cc0) status_small_pane_g8_ParamLimits

0x525b,	// (0x00033cc0) status_small_pane_g8

0xacb0,	// (0x00039715) popup_find_window_ParamLimits

0xaec3,	// (0x00039928) popup_note_image_window_ParamLimits

0x9324,	// (0x00037d89) list_double2_graphic_pane_vc_g1_ParamLimits

0x9324,	// (0x00037d89) list_double2_graphic_pane_vc_g1

0xa14b,	// (0x00038bb0) list_double2_graphic_pane_vc_g2_ParamLimits

0xa14b,	// (0x00038bb0) list_double2_graphic_pane_vc_g2

0xa157,	// (0x00038bbc) list_double2_graphic_pane_vc_g3_ParamLimits

0xa157,	// (0x00038bbc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003e22e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003e22e) list_double2_graphic_pane_vc_g

0x9330,	// (0x00037d95) list_double2_graphic_pane_vc_t1_ParamLimits

0x9330,	// (0x00037d95) list_double2_graphic_pane_vc_t1

0xa14b,	// (0x00038bb0) list_single_heading_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_single_heading_pane_vc_g1

0xa157,	// (0x00038bbc) list_single_heading_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_single_heading_pane_vc_g

0x9346,	// (0x00037dab) list_single_heading_pane_vc_t1_ParamLimits

0x9346,	// (0x00037dab) list_single_heading_pane_vc_t1

0x935c,	// (0x00037dc1) list_single_heading_pane_vc_t2_ParamLimits

0x935c,	// (0x00037dc1) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0003e254) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003e254) list_single_heading_pane_vc_t

0x552f,	// (0x00033f94) list_setting_number_pane_vc_g1_ParamLimits

0x552f,	// (0x00033f94) list_setting_number_pane_vc_g1

0x553b,	// (0x00033fa0) list_setting_number_pane_vc_g2_ParamLimits

0x553b,	// (0x00033fa0) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0003e259) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0003e259) list_setting_number_pane_vc_g

0x5547,	// (0x00033fac) list_setting_number_pane_vc_t1_ParamLimits

0x5547,	// (0x00033fac) list_setting_number_pane_vc_t1

0x555b,	// (0x00033fc0) list_setting_number_pane_vc_t2_ParamLimits

0x555b,	// (0x00033fc0) list_setting_number_pane_vc_t2

0x5575,	// (0x00033fda) list_setting_number_pane_vc_t3_ParamLimits

0x5575,	// (0x00033fda) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0003e25e) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0003e25e) list_setting_number_pane_vc_t

0x559b,	// (0x00034000) set_value_pane_vc_ParamLimits

0x559b,	// (0x00034000) set_value_pane_vc

0x66c3,	// (0x00035128) list_double2_graphic_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double2_graphic_pane_vc

0x66c3,	// (0x00035128) list_double2_large_graphic_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double2_large_graphic_pane_vc

0x66c3,	// (0x00035128) list_double2_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double2_pane_vc

0x66c3,	// (0x00035128) list_double_graphic_heading_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_graphic_heading_pane_vc

0x66c3,	// (0x00035128) list_double_graphic_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_graphic_pane_vc

0x66c3,	// (0x00035128) list_double_heading_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_heading_pane_vc

0x66c3,	// (0x00035128) list_double_large_graphic_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_large_graphic_pane_vc

0x66c3,	// (0x00035128) list_double_number_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_number_pane_vc

0x66c3,	// (0x00035128) list_double_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_pane_vc

0x66c3,	// (0x00035128) list_double_time_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_double_time_pane_vc

0x66c3,	// (0x00035128) list_setting_number_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_setting_number_pane_vc

0x66c3,	// (0x00035128) list_setting_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_setting_pane_vc

0x66c3,	// (0x00035128) list_single_graphic_heading_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_single_graphic_heading_pane_vc

0x66c3,	// (0x00035128) list_single_heading_pane_vc_ParamLimits

0x66c3,	// (0x00035128) list_single_heading_pane_vc

0xbbb1,	// (0x0003a616) list_single_number_heading_pane_vc_ParamLimits

0xbbb1,	// (0x0003a616) list_single_number_heading_pane_vc

0x9324,	// (0x00037d89) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9324,	// (0x00037d89) list_double_graphic_heading_pane_vc_g1

0xa14b,	// (0x00038bb0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa14b,	// (0x00038bb0) list_double_graphic_heading_pane_vc_g2

0xa157,	// (0x00038bbc) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa157,	// (0x00038bbc) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003e22e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003e22e) list_double_graphic_heading_pane_vc_g

0x9463,	// (0x00037ec8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9463,	// (0x00037ec8) list_double_graphic_heading_pane_vc_t1

0x9346,	// (0x00037dab) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9346,	// (0x00037dab) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0003e463) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0003e463) list_double_graphic_heading_pane_vc_t

0x552f,	// (0x00033f94) list_setting_pane_vc_g1_ParamLimits

0x552f,	// (0x00033f94) list_setting_pane_vc_g1

0x553b,	// (0x00033fa0) list_setting_pane_vc_g2_ParamLimits

0x553b,	// (0x00033fa0) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0003e259) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0003e259) list_setting_pane_vc_g

0x6cbd,	// (0x00035722) list_setting_pane_vc_t1_ParamLimits

0x6cbd,	// (0x00035722) list_setting_pane_vc_t1

0x6cd7,	// (0x0003573c) list_setting_pane_vc_t2_ParamLimits

0x6cd7,	// (0x0003573c) list_setting_pane_vc_t2

0x0001,

0xfa41,	// (0x0003e4a6) list_setting_pane_vc_t_ParamLimits

0xfa41,	// (0x0003e4a6) list_setting_pane_vc_t

0x559b,	// (0x00034000) set_value_pane_cp_vc_ParamLimits

0x559b,	// (0x00034000) set_value_pane_cp_vc

0xa14b,	// (0x00038bb0) list_single_number_heading_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_single_number_heading_pane_vc_g1

0xa157,	// (0x00038bbc) list_single_number_heading_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_single_number_heading_pane_vc_g

0x9346,	// (0x00037dab) list_single_number_heading_pane_vc_t1_ParamLimits

0x9346,	// (0x00037dab) list_single_number_heading_pane_vc_t1

0x9477,	// (0x00037edc) list_single_number_heading_pane_vc_t2_ParamLimits

0x9477,	// (0x00037edc) list_single_number_heading_pane_vc_t2

0x948b,	// (0x00037ef0) list_single_number_heading_pane_vc_t3_ParamLimits

0x948b,	// (0x00037ef0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa46,	// (0x0003e4ab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x0003e4ab) list_single_number_heading_pane_vc_t

0x9324,	// (0x00037d89) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9324,	// (0x00037d89) list_single_graphic_heading_pane_vc_g1

0xa14b,	// (0x00038bb0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa14b,	// (0x00038bb0) list_single_graphic_heading_pane_vc_g4

0xa157,	// (0x00038bbc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa157,	// (0x00038bbc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0003e22e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003e22e) list_single_graphic_heading_pane_vc_g

0x9346,	// (0x00037dab) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9346,	// (0x00037dab) list_single_graphic_heading_pane_vc_t1

0x949d,	// (0x00037f02) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x949d,	// (0x00037f02) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x0003e4b2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x0003e4b2) list_single_graphic_heading_pane_vc_t

0xa14b,	// (0x00038bb0) list_double2_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_double2_pane_vc_g1

0xa157,	// (0x00038bbc) list_double2_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_double2_pane_vc_g

0x94b1,	// (0x00037f16) list_double2_pane_vc_t1_ParamLimits

0x94b1,	// (0x00037f16) list_double2_pane_vc_t1

0xbe48,	// (0x0003a8ad) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xbe48,	// (0x0003a8ad) list_double2_large_graphic_pane_vc_g1

0xa14b,	// (0x00038bb0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa14b,	// (0x00038bb0) list_double2_large_graphic_pane_vc_g2

0xa157,	// (0x00038bbc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa157,	// (0x00038bbc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa52,	// (0x0003e4b7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0003e4b7) list_double2_large_graphic_pane_vc_g

0x94c7,	// (0x00037f2c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x94c7,	// (0x00037f2c) list_double2_large_graphic_pane_vc_t1

0x94dd,	// (0x00037f42) list_double_time_pane_vc_g1_ParamLimits

0x94dd,	// (0x00037f42) list_double_time_pane_vc_g1

0x94e9,	// (0x00037f4e) list_double_time_pane_vc_g2_ParamLimits

0x94e9,	// (0x00037f4e) list_double_time_pane_vc_g2

0x0001,

0xfa59,	// (0x0003e4be) list_double_time_pane_vc_g_ParamLimits

0xfa59,	// (0x0003e4be) list_double_time_pane_vc_g

0x94f5,	// (0x00037f5a) list_double_time_pane_vc_t1_ParamLimits

0x94f5,	// (0x00037f5a) list_double_time_pane_vc_t1

0x9513,	// (0x00037f78) list_double_time_pane_vc_t2_ParamLimits

0x9513,	// (0x00037f78) list_double_time_pane_vc_t2

0x9562,	// (0x00037fc7) list_double_time_pane_vc_t3_ParamLimits

0x9562,	// (0x00037fc7) list_double_time_pane_vc_t3

0x9574,	// (0x00037fd9) list_double_time_pane_vc_t4_ParamLimits

0x9574,	// (0x00037fd9) list_double_time_pane_vc_t4

0x0003,

0xfa5e,	// (0x0003e4c3) list_double_time_pane_vc_t_ParamLimits

0xfa5e,	// (0x0003e4c3) list_double_time_pane_vc_t

0xa14b,	// (0x00038bb0) list_double_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_double_pane_vc_g1

0xa157,	// (0x00038bbc) list_double_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_double_pane_vc_g

0x9588,	// (0x00037fed) list_double_pane_vc_t1_ParamLimits

0x9588,	// (0x00037fed) list_double_pane_vc_t1

0x959a,	// (0x00037fff) list_double_pane_vc_t2_ParamLimits

0x959a,	// (0x00037fff) list_double_pane_vc_t2

0x0001,

0xfa67,	// (0x0003e4cc) list_double_pane_vc_t_ParamLimits

0xfa67,	// (0x0003e4cc) list_double_pane_vc_t

0xa14b,	// (0x00038bb0) list_double_number_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_double_number_pane_vc_g1

0xa157,	// (0x00038bbc) list_double_number_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_double_number_pane_vc_g

0x95b2,	// (0x00038017) list_double_number_pane_vc_t1_ParamLimits

0x95b2,	// (0x00038017) list_double_number_pane_vc_t1

0x95c6,	// (0x0003802b) list_double_number_pane_vc_t2_ParamLimits

0x95c6,	// (0x0003802b) list_double_number_pane_vc_t2

0x959a,	// (0x00037fff) list_double_number_pane_vc_t3_ParamLimits

0x959a,	// (0x00037fff) list_double_number_pane_vc_t3

0x0002,

0xfa6c,	// (0x0003e4d1) list_double_number_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003e4d1) list_double_number_pane_vc_t

0xbe54,	// (0x0003a8b9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xbe54,	// (0x0003a8b9) list_double_large_graphic_pane_vc_g1

0xbe65,	// (0x0003a8ca) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbe65,	// (0x0003a8ca) list_double_large_graphic_pane_vc_g2

0xa157,	// (0x00038bbc) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa157,	// (0x00038bbc) list_double_large_graphic_pane_vc_g3

0x95d8,	// (0x0003803d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x95d8,	// (0x0003803d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa73,	// (0x0003e4d8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0003e4d8) list_double_large_graphic_pane_vc_g

0x95e4,	// (0x00038049) list_double_large_graphic_pane_vc_t1_ParamLimits

0x95e4,	// (0x00038049) list_double_large_graphic_pane_vc_t1

0x95fb,	// (0x00038060) list_double_large_graphic_pane_vc_t2_ParamLimits

0x95fb,	// (0x00038060) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x0003e4e1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003e4e1) list_double_large_graphic_pane_vc_t

0xa14b,	// (0x00038bb0) list_double_heading_pane_vc_g1_ParamLimits

0xa14b,	// (0x00038bb0) list_double_heading_pane_vc_g1

0xa157,	// (0x00038bbc) list_double_heading_pane_vc_g2_ParamLimits

0xa157,	// (0x00038bbc) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003e24f) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003e24f) list_double_heading_pane_vc_g

0x9614,	// (0x00038079) list_double_heading_pane_vc_t1_ParamLimits

0x9614,	// (0x00038079) list_double_heading_pane_vc_t1

0x9346,	// (0x00037dab) list_double_heading_pane_vc_t2_ParamLimits

0x9346,	// (0x00037dab) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x0003e4e6) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x0003e4e6) list_double_heading_pane_vc_t

0x9324,	// (0x00037d89) list_double_graphic_pane_vc_g1_ParamLimits

0x9324,	// (0x00037d89) list_double_graphic_pane_vc_g1

0x9628,	// (0x0003808d) list_double_graphic_pane_vc_g2_ParamLimits

0x9628,	// (0x0003808d) list_double_graphic_pane_vc_g2

0x9637,	// (0x0003809c) list_double_graphic_pane_vc_g3_ParamLimits

0x9637,	// (0x0003809c) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x0003e4eb) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x0003e4eb) list_double_graphic_pane_vc_g

0x9643,	// (0x000380a8) list_double_graphic_pane_vc_t1_ParamLimits

0x9643,	// (0x000380a8) list_double_graphic_pane_vc_t1

0x959a,	// (0x00037fff) list_double_graphic_pane_vc_t2_ParamLimits

0x959a,	// (0x00037fff) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x0003e4f2) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003e4f2) list_double_graphic_pane_vc_t

0x9a05,	// (0x0003846a) aid_size_cell_fastswap

0x9a0d,	// (0x00038472) aid_size_cell_touch_ParamLimits

0x9a0d,	// (0x00038472) aid_size_cell_touch

0x9c68,	// (0x000386cd) popup_fast_swap_wide_window_ParamLimits

0x9c68,	// (0x000386cd) popup_fast_swap_wide_window

0x9d5e,	// (0x000387c3) touch_pane_ParamLimits

0x9d5e,	// (0x000387c3) touch_pane

0x4692,	// (0x000330f7) button_value_adjust_pane_cp2

0x8fdd,	// (0x00037a42) button_value_adjust_pane_cp4

0x8ffd,	// (0x00037a62) form_field_data_pane_cp2

0x901c,	// (0x00037a81) form_field_data_wide_pane_cp2

0x49f7,	// (0x0003345c) bg_scroll_pane_ParamLimits

0xa4b8,	// (0x00038f1d) scroll_handle_pane_ParamLimits

0xa4cc,	// (0x00038f31) scroll_sc2_down_pane_ParamLimits

0xa4cc,	// (0x00038f31) scroll_sc2_down_pane

0x4a28,	// (0x0003348d) scroll_sc2_up_pane_ParamLimits

0x4a28,	// (0x0003348d) scroll_sc2_up_pane

0xbf8a,	// (0x0003a9ef) grid_wheel_folder_pane_g1_ParamLimits

0xbf8a,	// (0x0003a9ef) grid_wheel_folder_pane_g1

0xa75d,	// (0x000391c2) clock_nsta_pane_cp2_ParamLimits

0xa75d,	// (0x000391c2) clock_nsta_pane_cp2

0xa263,	// (0x00038cc8) listscroll_midp_pane_ParamLimits

0xa865,	// (0x000392ca) midp_canvas_pane

0x52af,	// (0x00033d14) nsta_clock_indic_pane

0x52d7,	// (0x00033d3c) listscroll_form_pane_vc

0x52df,	// (0x00033d44) listscroll_set_pane_vc_ParamLimits

0x52df,	// (0x00033d44) listscroll_set_pane_vc

0xb1a9,	// (0x00039c0e) clock_nsta_pane

0xb1b6,	// (0x00039c1b) indicator_nsta_pane

0x5425,	// (0x00033e8a) bg_popup_sub_pane_cp2_ParamLimits

0x5439,	// (0x00033e9e) find_pane_cp2_ParamLimits

0x5439,	// (0x00033e9e) find_pane_cp2

0x544f,	// (0x00033eb4) grid_toobar_pane_ParamLimits

0x55ab,	// (0x00034010) list_form_gen_pane_vc_ParamLimits

0x55ab,	// (0x00034010) list_form_gen_pane_vc

0x55c1,	// (0x00034026) scroll_pane_cp8_vc_ParamLimits

0x55c1,	// (0x00034026) scroll_pane_cp8_vc

0x5611,	// (0x00034076) data_form_wide_pane_vc_ParamLimits

0x5611,	// (0x00034076) data_form_wide_pane_vc

0x561d,	// (0x00034082) form_field_data_wide_pane_vc_g1

0x5625,	// (0x0003408a) form_field_data_wide_pane_vc_t1_ParamLimits

0x5625,	// (0x0003408a) form_field_data_wide_pane_vc_t1

0x46a6,	// (0x0003310b) input_focus_pane_cp6_vc_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_cp6_vc

0xb646,	// (0x0003a0ab) list_midp_pane_ParamLimits

0xb652,	// (0x0003a0b7) scroll_pane_cp16_ParamLimits

0xb652,	// (0x0003a0b7) scroll_pane_cp16

0x58bc,	// (0x00034321) button_value_adjust_pane_ParamLimits

0x58bc,	// (0x00034321) button_value_adjust_pane

0xba47,	// (0x0003a4ac) button_value_adjust_pane_cp6_ParamLimits

0xba47,	// (0x0003a4ac) button_value_adjust_pane_cp6

0xbb69,	// (0x0003a5ce) settings_code_pane_cp_ParamLimits

0xbb69,	// (0x0003a5ce) settings_code_pane_cp

0x404b,	// (0x00032ab0) cell_touch_pane_g1

0x404b,	// (0x00032ab0) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0003e173) cell_touch_pane_g

0xbdd5,	// (0x0003a83a) cell_touch_pane_cp_ParamLimits

0xbdd5,	// (0x0003a83a) cell_touch_pane_cp

0xbde5,	// (0x0003a84a) cell_touch_pane_ParamLimits

0xbde5,	// (0x0003a84a) cell_touch_pane

0x404b,	// (0x00032ab0) scroll_sc2_down_pane_g1

0x404b,	// (0x00032ab0) scroll_sc2_up_pane_g1

0x4055,	// (0x00032aba) bg_set_opt_pane_cp4_vc

0x6ad9,	// (0x0003553e) list_set_graphic_pane_vc_g1_ParamLimits

0x6ad9,	// (0x0003553e) list_set_graphic_pane_vc_g1

0x6ae5,	// (0x0003554a) list_set_graphic_pane_vc_g2_ParamLimits

0x6ae5,	// (0x0003554a) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0003e468) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0003e468) list_set_graphic_pane_vc_g

0x6af1,	// (0x00035556) text_primary_small_cp13_vc_ParamLimits

0x6af1,	// (0x00035556) text_primary_small_cp13_vc

0x64c2,	// (0x00034f27) list_set_graphic_pane_vc_ParamLimits

0x64c2,	// (0x00034f27) list_set_graphic_pane_vc

0x4055,	// (0x00032aba) input_focus_pane_cp2_vc

0x404b,	// (0x00032ab0) setting_code_pane_vc_g1

0x40c8,	// (0x00032b2d) setting_code_pane_vc_t1

0x6b09,	// (0x0003556e) set_text_pane_vc_t1_ParamLimits

0x6b09,	// (0x0003556e) set_text_pane_vc_t1

0x4055,	// (0x00032aba) input_focus_pane_cp1_vc

0x6b28,	// (0x0003558d) list_set_text_pane_vc

0x404b,	// (0x00032ab0) setting_text_pane_vc_g1

0x4055,	// (0x00032aba) bg_set_opt_pane_cp2_vc

0x40bf,	// (0x00032b24) setting_slider_graphic_pane_vc_g1

0x6b32,	// (0x00035597) setting_slider_graphic_pane_vc_t1

0x6b41,	// (0x000355a6) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0003e46d) setting_slider_graphic_pane_vc_t

0x6b50,	// (0x000355b5) slider_set_pane_cp_vc

0x6b58,	// (0x000355bd) slider_set_pane_vc_g1

0x6b61,	// (0x000355c6) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0003e472) slider_set_pane_vc_g

0x470d,	// (0x00033172) set_opt_bg_pane_g1_copy1

0x4715,	// (0x0003317a) set_opt_bg_pane_g2_copy1

0x6b8d,	// (0x000355f2) set_opt_bg_pane_g3_copy1

0x4725,	// (0x0003318a) set_opt_bg_pane_g4_copy1

0x472d,	// (0x00033192) set_opt_bg_pane_g5_copy1

0x4735,	// (0x0003319a) set_opt_bg_pane_g6_copy1

0x6b95,	// (0x000355fa) set_opt_bg_pane_g7_copy1

0x6b9f,	// (0x00035604) set_opt_bg_pane_g8_copy1

0x6ba7,	// (0x0003560c) set_opt_bg_pane_g9_copy1

0x4055,	// (0x00032aba) bg_set_opt_pane_cp_vc

0x6baf,	// (0x00035614) setting_slider_pane_vc_t1

0x6bbe,	// (0x00035623) setting_slider_pane_vc_t2

0x6bcd,	// (0x00035632) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0003e481) setting_slider_pane_vc_t

0x6bdc,	// (0x00035641) slider_set_pane_vc

0xb6bd,	// (0x0003a122) volume_set_pane_vc_g1

0xbdf7,	// (0x0003a85c) volume_set_pane_vc_g2

0xbe00,	// (0x0003a865) volume_set_pane_vc_g3

0xbe09,	// (0x0003a86e) volume_set_pane_vc_g4

0xbe12,	// (0x0003a877) volume_set_pane_vc_g5

0xbe1b,	// (0x0003a880) volume_set_pane_vc_g6

0xbe24,	// (0x0003a889) volume_set_pane_vc_g7

0xbe2d,	// (0x0003a892) volume_set_pane_vc_g8

0xbe36,	// (0x0003a89b) volume_set_pane_vc_g9

0xbe3f,	// (0x0003a8a4) volume_set_pane_vc_g10

0x0009,

0xfa23,	// (0x0003e488) volume_set_pane_vc_g

0x6be4,	// (0x00035649) volume_set_pane_vc

0x6bee,	// (0x00035653) button_value_adjust_pane_cp1_vc

0x6bf8,	// (0x0003565d) list_highlight_pane_cp2_vc

0x6c01,	// (0x00035666) list_set_pane_vc_ParamLimits

0x6c01,	// (0x00035666) list_set_pane_vc

0x6c53,	// (0x000356b8) main_pane_set_vc_t1_ParamLimits

0x6c53,	// (0x000356b8) main_pane_set_vc_t1

0x6c68,	// (0x000356cd) main_pane_set_vc_t2_ParamLimits

0x6c68,	// (0x000356cd) main_pane_set_vc_t2

0x6c7a,	// (0x000356df) main_pane_set_vc_t3_ParamLimits

0x6c7a,	// (0x000356df) main_pane_set_vc_t3

0x6c8c,	// (0x000356f1) main_pane_set_vc_t4_ParamLimits

0x6c8c,	// (0x000356f1) main_pane_set_vc_t4

0x0003,

0xfa38,	// (0x0003e49d) main_pane_set_vc_t_ParamLimits

0xfa38,	// (0x0003e49d) main_pane_set_vc_t

0x6c9e,	// (0x00035703) setting_code_pane_vc_ParamLimits

0x6c9e,	// (0x00035703) setting_code_pane_vc

0x6cad,	// (0x00035712) setting_slider_graphic_pane_vc

0x6cad,	// (0x00035712) setting_slider_pane_vc

0x6cad,	// (0x00035712) setting_text_pane_vc

0x6cad,	// (0x00035712) setting_volume_pane_vc

0x6cb5,	// (0x0003571a) scroll_pane_cp121_vc

0x4680,	// (0x000330e5) set_content_pane_vc

0x6ced,	// (0x00035752) button_value_adjust_pane_g1

0x6cf6,	// (0x0003575b) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x0003e4f7) button_value_adjust_pane_g

0x6cff,	// (0x00035764) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6cff,	// (0x00035764) form_field_slider_wide_pane_vc_t1

0x6d13,	// (0x00035778) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d13,	// (0x00035778) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x0003e4fc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0003e4fc) form_field_slider_wide_pane_vc_t

0x40a3,	// (0x00032b08) input_focus_pane_cp10_vc_ParamLimits

0x40a3,	// (0x00032b08) input_focus_pane_cp10_vc

0x6d3f,	// (0x000357a4) slider_cont_pane_cp1_vc_ParamLimits

0x6d3f,	// (0x000357a4) slider_cont_pane_cp1_vc

0x6d4f,	// (0x000357b4) slider_form_pane_g1_cp2

0x6b61,	// (0x000355c6) slider_form_pane_g2_cp2

0x6d7c,	// (0x000357e1) form_field_slider_pane_vc_t3

0x6d8a,	// (0x000357ef) form_field_slider_pane_vc_t4

0x6d98,	// (0x000357fd) slider_form_pane_vc_ParamLimits

0x6d98,	// (0x000357fd) slider_form_pane_vc

0x6da5,	// (0x0003580a) form_field_slider_pane_vc_t1_ParamLimits

0x6da5,	// (0x0003580a) form_field_slider_pane_vc_t1

0x6d13,	// (0x00035778) form_field_slider_pane_vc_t2_ParamLimits

0x6d13,	// (0x00035778) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0003e50e) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0003e50e) form_field_slider_pane_vc_t

0x40a3,	// (0x00032b08) input_focus_pane_cp9_vc_ParamLimits

0x40a3,	// (0x00032b08) input_focus_pane_cp9_vc

0x6dc1,	// (0x00035826) slider_cont_pane_vc_ParamLimits

0x6dc1,	// (0x00035826) slider_cont_pane_vc

0x6dd3,	// (0x00035838) list_form_graphic_pane_cp_vc_ParamLimits

0x6dd3,	// (0x00035838) list_form_graphic_pane_cp_vc

0x561d,	// (0x00034082) form_field_popup_wide_pane_vc_g1

0x6de8,	// (0x0003584d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6de8,	// (0x0003584d) form_field_popup_wide_pane_vc_t1

0x46a6,	// (0x0003310b) input_focus_pane_cp8_vc_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_cp8_vc

0x6e2d,	// (0x00035892) list_form_wide_pane_vc_ParamLimits

0x6e2d,	// (0x00035892) list_form_wide_pane_vc

0x6e39,	// (0x0003589e) list_form_graphic_pane_vc_g1

0x6e41,	// (0x000358a6) list_form_graphic_pane_vc_t1_ParamLimits

0x6e41,	// (0x000358a6) list_form_graphic_pane_vc_t1

0x40b1,	// (0x00032b16) list_highlight_pane_cp5_vc_ParamLimits

0x40b1,	// (0x00032b16) list_highlight_pane_cp5_vc

0x6e5d,	// (0x000358c2) list_form_graphic_pane_vc_ParamLimits

0x6e5d,	// (0x000358c2) list_form_graphic_pane_vc

0x561d,	// (0x00034082) form_field_popup_pane_vc_g1

0x6e73,	// (0x000358d8) form_field_popup_pane_vc_t1_ParamLimits

0x6e73,	// (0x000358d8) form_field_popup_pane_vc_t1

0x46a6,	// (0x0003310b) input_focus_pane_cp7_vc_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_cp7_vc

0x6e8a,	// (0x000358ef) list_form_pane_vc_ParamLimits

0x6e8a,	// (0x000358ef) list_form_pane_vc

0x6e96,	// (0x000358fb) data_form_pane_vc_t1_ParamLimits

0x6e96,	// (0x000358fb) data_form_pane_vc_t1

0x470d,	// (0x00033172) input_focus_pane_vc_g1

0x4715,	// (0x0003317a) input_focus_pane_vc_g2

0x471d,	// (0x00033182) input_focus_pane_vc_g3

0x4725,	// (0x0003318a) input_focus_pane_vc_g4

0x472d,	// (0x00033192) input_focus_pane_vc_g5

0x4735,	// (0x0003319a) input_focus_pane_vc_g6

0x473d,	// (0x000331a2) input_focus_pane_vc_g7

0x4745,	// (0x000331aa) input_focus_pane_vc_g8

0x474d,	// (0x000331b2) input_focus_pane_vc_g9

0x404b,	// (0x00032ab0) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0003e0fc) input_focus_pane_vc_g

0x5611,	// (0x00034076) data_form_pane_vc_ParamLimits

0x5611,	// (0x00034076) data_form_pane_vc

0x561d,	// (0x00034082) form_field_data_pane_vc_g1

0x6eb1,	// (0x00035916) form_field_data_pane_vc_t1_ParamLimits

0x6eb1,	// (0x00035916) form_field_data_pane_vc_t1

0x46a6,	// (0x0003310b) input_focus_pane_vc_ParamLimits

0x46a6,	// (0x0003310b) input_focus_pane_vc

0x6ecb,	// (0x00035930) button_value_adjust_pane_cp3_vc

0x6ed3,	// (0x00035938) button_value_adjust_pane_cp5_vc

0x6edb,	// (0x00035940) form_field_data_pane_vc_ParamLimits

0x6edb,	// (0x00035940) form_field_data_pane_vc

0x6ef2,	// (0x00035957) form_field_data_pane_vc_cp2

0x6efa,	// (0x0003595f) form_field_data_wide_pane_vc_ParamLimits

0x6efa,	// (0x0003595f) form_field_data_wide_pane_vc

0x6f10,	// (0x00035975) form_field_data_wide_pane_vc_cp2

0x6f18,	// (0x0003597d) form_field_popup_pane_vc_ParamLimits

0x6f18,	// (0x0003597d) form_field_popup_pane_vc

0x6f2f,	// (0x00035994) form_field_popup_wide_pane_vc_ParamLimits

0x6f2f,	// (0x00035994) form_field_popup_wide_pane_vc

0x6f45,	// (0x000359aa) form_field_slider_pane_vc_ParamLimits

0x6f45,	// (0x000359aa) form_field_slider_pane_vc

0x6f58,	// (0x000359bd) form_field_slider_wide_pane_vc_ParamLimits

0x6f58,	// (0x000359bd) form_field_slider_wide_pane_vc

0xbe74,	// (0x0003a8d9) grid_touch_1_pane_ParamLimits

0xbe74,	// (0x0003a8d9) grid_touch_1_pane

0xbe80,	// (0x0003a8e5) grid_touch_2_pane_ParamLimits

0xbe80,	// (0x0003a8e5) grid_touch_2_pane

0x52a1,	// (0x00033d06) touch_pane_g1_ParamLimits

0x52a1,	// (0x00033d06) touch_pane_g1

0x6f79,	// (0x000359de) cell_app_pane_cp_wide_ParamLimits

0x6f79,	// (0x000359de) cell_app_pane_cp_wide

0x6f8a,	// (0x000359ef) grid_popup_fast_wide_pane_ParamLimits

0x6f8a,	// (0x000359ef) grid_popup_fast_wide_pane

0x6f9e,	// (0x00035a03) scroll_pane_cp19_ParamLimits

0x6f9e,	// (0x00035a03) scroll_pane_cp19

0x4055,	// (0x00032aba) bg_popup_window_pane_cp20

0x6fb2,	// (0x00035a17) listscroll_popup_fast_wide_pane

0x40b1,	// (0x00032b16) grid_indicator_nsta_pane

0x6fba,	// (0x00035a1f) clock_nsta_pane_g1

0x6fc3,	// (0x00035a28) clock_nsta_pane_t1

0xbe98,	// (0x0003a8fd) cell_indicator_nsta_pane_ParamLimits

0xbe98,	// (0x0003a8fd) cell_indicator_nsta_pane

0x6f6b,	// (0x000359d0) cell_indicator_nsta_pane_g1

0xbed0,	// (0x0003a935) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x0003e51f) cell_indicator_nsta_pane_g

0x6fdf,	// (0x00035a44) clock_nsta_pane_cp

0x6fe7,	// (0x00035a4c) indicator_nsta_pane_cp

0x6ff0,	// (0x00035a55) nsta_clock_indic_pane_g1

0x40ed,	// (0x00032b52) grid_indicator_pane

0x4b1a,	// (0x0003357f) scroll_pane_cp29

0xa6ac,	// (0x00039111) indicator_nsta_pane_cp2_ParamLimits

0xa6ac,	// (0x00039111) indicator_nsta_pane_cp2

0x40b1,	// (0x00032b16) main_apps_wheel_pane

0x5761,	// (0x000341c6) form_midp_field_text_pane_ParamLimits

0x588e,	// (0x000342f3) scroll_bar_cp050_ParamLimits

0x7059,	// (0x00035abe) cell_indicator_pane_ParamLimits

0x7059,	// (0x00035abe) cell_indicator_pane

0x7076,	// (0x00035adb) cell_indicator_pane_g1

0xbee6,	// (0x0003a94b) grid_wheel_folder_pane_ParamLimits

0xbee6,	// (0x0003a94b) grid_wheel_folder_pane

0xbefc,	// (0x0003a961) list_wheel_apps_pane_ParamLimits

0xbefc,	// (0x0003a961) list_wheel_apps_pane

0xbf0d,	// (0x0003a972) main_apps_wheel_pane_g1_ParamLimits

0xbf0d,	// (0x0003a972) main_apps_wheel_pane_g1

0xbf21,	// (0x0003a986) main_apps_wheel_pane_g2_ParamLimits

0xbf21,	// (0x0003a986) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x0003e53b) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x0003e53b) main_apps_wheel_pane_g

0xbf39,	// (0x0003a99e) main_apps_wheel_pane_t1_ParamLimits

0xbf39,	// (0x0003a99e) main_apps_wheel_pane_t1

0xbf5c,	// (0x0003a9c1) list_wheel_apps_pane_g1

0xbf64,	// (0x0003a9c9) list_wheel_apps_pane_g2

0xbf6c,	// (0x0003a9d1) list_wheel_apps_pane_g3

0xbf76,	// (0x0003a9db) list_wheel_apps_pane_g4

0xbf80,	// (0x0003a9e5) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0003e540) list_wheel_apps_pane_g

0x4f3f,	// (0x000339a4) navi_icon_text_pane

0xb0ed,	// (0x00039b52) aid_fill_nsta

0x7080,	// (0x00035ae5) navi_icon_text_pane_g1

0x708c,	// (0x00035af1) navi_icon_text_pane_t1

0x4e37,	// (0x0003389c) list_set_graphic_pane_t1_ParamLimits

0x4e37,	// (0x0003389c) list_set_graphic_pane_t1

0x5f96,	// (0x000349fb) popup_midp_note_alarm_window_t6_ParamLimits

0x5f96,	// (0x000349fb) popup_midp_note_alarm_window_t6

0x5fa8,	// (0x00034a0d) popup_midp_note_alarm_window_t7_ParamLimits

0x5fa8,	// (0x00034a0d) popup_midp_note_alarm_window_t7

0x5fba,	// (0x00034a1f) popup_midp_note_alarm_window_t8_ParamLimits

0x5fba,	// (0x00034a1f) popup_midp_note_alarm_window_t8

0x5fcc,	// (0x00034a31) popup_midp_note_alarm_window_t9_ParamLimits

0x5fcc,	// (0x00034a31) popup_midp_note_alarm_window_t9

0x5fde,	// (0x00034a43) popup_midp_note_alarm_window_t10_ParamLimits

0x5fde,	// (0x00034a43) popup_midp_note_alarm_window_t10

0x5ff0,	// (0x00034a55) popup_midp_note_alarm_window_t11_ParamLimits

0x5ff0,	// (0x00034a55) popup_midp_note_alarm_window_t11

0x6002,	// (0x00034a67) scroll_pane_cp17_ParamLimits

0x6002,	// (0x00034a67) scroll_pane_cp17

0xb6bd,	// (0x0003a122) volume_small_pane_cp_g1

0xbfa3,	// (0x0003aa08) volume_small_pane_cp_g2

0xbfac,	// (0x0003aa11) volume_small_pane_cp_g3

0xbfb5,	// (0x0003aa1a) volume_small_pane_cp_g4

0xbfbe,	// (0x0003aa23) volume_small_pane_cp_g5

0xbfc7,	// (0x0003aa2c) volume_small_pane_cp_g6

0xbfd0,	// (0x0003aa35) volume_small_pane_cp_g7

0xbfd9,	// (0x0003aa3e) volume_small_pane_cp_g8

0xbfe2,	// (0x0003aa47) volume_small_pane_cp_g9

0xbfeb,	// (0x0003aa50) volume_small_pane_cp_g10

0x50c5,	// (0x00033b2a) midp_ticker_pane_g1_ParamLimits

0x50d1,	// (0x00033b36) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0003e1c8) midp_ticker_pane_g_ParamLimits

0x50dd,	// (0x00033b42) midp_ticker_pane_t1_ParamLimits

0xb103,	// (0x00039b68) aid_fill_nsta_2

0x587a,	// (0x000342df) list_form2_midp_pane

0x667e,	// (0x000350e3) midp_editing_number_pane_ParamLimits

0x668d,	// (0x000350f2) midp_ticker_pane_ParamLimits

0x709e,	// (0x00035b03) form2_midp_field_pane

0x70a6,	// (0x00035b0b) scroll_pane_cp51

0x70c6,	// (0x00035b2b) form2_midp_button_pane_ParamLimits

0x70c6,	// (0x00035b2b) form2_midp_button_pane

0x70d8,	// (0x00035b3d) form2_midp_content_pane_ParamLimits

0x70d8,	// (0x00035b3d) form2_midp_content_pane

0x70f2,	// (0x00035b57) form2_midp_field_choice_group_pane

0x70fa,	// (0x00035b5f) form2_midp_field_pane_g1

0x7102,	// (0x00035b67) form2_midp_field_pane_g2

0x710a,	// (0x00035b6f) form2_midp_field_pane_g3

0x7112,	// (0x00035b77) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0003e565) form2_midp_field_pane_g

0x711a,	// (0x00035b7f) form2_midp_gauge_slider_pane

0x7122,	// (0x00035b87) form2_midp_gauge_wait_pane

0x712a,	// (0x00035b8f) form2_midp_image_pane_ParamLimits

0x712a,	// (0x00035b8f) form2_midp_image_pane

0x7187,	// (0x00035bec) form2_midp_label_pane_ParamLimits

0x7187,	// (0x00035bec) form2_midp_label_pane

0xc010,	// (0x0003aa75) form2_midp_label_pane_cp_ParamLimits

0xc010,	// (0x0003aa75) form2_midp_label_pane_cp

0x71a0,	// (0x00035c05) form2_midp_string_pane_ParamLimits

0x71a0,	// (0x00035c05) form2_midp_string_pane

0x9655,	// (0x000380ba) form2_midp_text_pane_ParamLimits

0x9655,	// (0x000380ba) form2_midp_text_pane

0x71b2,	// (0x00035c17) form2_midp_time_pane

0x71c2,	// (0x00035c27) input_focus_pane_cp51_ParamLimits

0x71c2,	// (0x00035c27) input_focus_pane_cp51

0x71da,	// (0x00035c3f) form2_midp_label_pane_t1_ParamLimits

0x71da,	// (0x00035c3f) form2_midp_label_pane_t1

0x9670,	// (0x000380d5) form2_mdip_text_pane_t1_ParamLimits

0x9670,	// (0x000380d5) form2_mdip_text_pane_t1

0x968c,	// (0x000380f1) form2_midp_time_pane_t1

0x7222,	// (0x00035c87) form2_midp_gauge_slider_pane_t1

0xc031,	// (0x0003aa96) form2_midp_gauge_slider_pane_t2

0xc043,	// (0x0003aaa8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x0003e56e) form2_midp_gauge_slider_pane_t

0x7234,	// (0x00035c99) form2_midp_slider_pane

0x7240,	// (0x00035ca5) form2_midp_gauge_wait_pane_t1

0x724e,	// (0x00035cb3) form2_midp_wait_pane_ParamLimits

0x724e,	// (0x00035cb3) form2_midp_wait_pane

0xc055,	// (0x0003aaba) list_single_2graphic_pane_cp4_ParamLimits

0xc055,	// (0x0003aaba) list_single_2graphic_pane_cp4

0xb581,	// (0x00039fe6) list_single_midp_graphic_pane_cp_ParamLimits

0xb581,	// (0x00039fe6) list_single_midp_graphic_pane_cp

0x4055,	// (0x00032aba) list_highlight_pane_cp20

0x7279,	// (0x00035cde) list_single_2graphic_pane_g1_cp4

0x69de,	// (0x00035443) list_single_2graphic_pane_g2_cp4

0x7281,	// (0x00035ce6) list_single_2graphic_pane_t1_cp4

0x40b1,	// (0x00032b16) list_highlight_pane_cp21

0x7290,	// (0x00035cf5) list_single_midp_graphic_pane_g4_cp

0x729f,	// (0x00035d04) list_single_midp_graphic_pane_t1_cp

0xc084,	// (0x0003aae9) form2_mdip_string_pane_t1_ParamLimits

0xc084,	// (0x0003aae9) form2_mdip_string_pane_t1

0x4055,	// (0x00032aba) bg_wml_button_pane_cp2

0x404b,	// (0x00032ab0) form2_midp_image_pane_g1

0xa1b6,	// (0x00038c1b) list_double_large_graphic_pane_g5_ParamLimits

0xa1b6,	// (0x00038c1b) list_double_large_graphic_pane_g5

0xa263,	// (0x00038cc8) midp_form_pane_ParamLimits

0x40b1,	// (0x00032b16) main_apps_wheel_pane_ParamLimits

0xaee9,	// (0x0003994e) popup_preview_window_ParamLimits

0xaee9,	// (0x0003994e) popup_preview_window

0xb09a,	// (0x00039aff) popup_touch_info_window_ParamLimits

0xb09a,	// (0x00039aff) popup_touch_info_window

0xb0b8,	// (0x00039b1d) popup_touch_menu_window_ParamLimits

0xb0b8,	// (0x00039b1d) popup_touch_menu_window

0x4041,	// (0x00032aa6) bg_popup_sub_pane_cp6

0x72b4,	// (0x00035d19) list_touch_menu_pane

0x72bc,	// (0x00035d21) list_single_touch_menu_pane_ParamLimits

0x72bc,	// (0x00035d21) list_single_touch_menu_pane

0x72d0,	// (0x00035d35) list_single_touch_menu_pane_t1

0x40b1,	// (0x00032b16) bg_popup_sub_pane_cp7_ParamLimits

0x40b1,	// (0x00032b16) bg_popup_sub_pane_cp7

0x72de,	// (0x00035d43) heading_sub_pane

0x72e6,	// (0x00035d4b) list_touch_info_pane_ParamLimits

0x72e6,	// (0x00035d4b) list_touch_info_pane

0x72f5,	// (0x00035d5a) list_single_touch_info_pane_ParamLimits

0x72f5,	// (0x00035d5a) list_single_touch_info_pane

0x7307,	// (0x00035d6c) list_single_touch_info_pane_t1

0x7315,	// (0x00035d7a) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x0003e57c) list_single_touch_info_pane_t

0x509b,	// (0x00033b00) bg_popup_heading_pane_cp

0x7323,	// (0x00035d88) heading_sub_pane_t1

0x55d7,	// (0x0003403c) bg_popup_preview_window_pane_cp_ParamLimits

0x55d7,	// (0x0003403c) bg_popup_preview_window_pane_cp

0x72de,	// (0x00035d43) heading_preview_pane

0x72e6,	// (0x00035d4b) list_preview_pane_ParamLimits

0x72e6,	// (0x00035d4b) list_preview_pane

0x7331,	// (0x00035d96) popup_preview_window_g1

0x72f5,	// (0x00035d5a) list_single_preview_pane_ParamLimits

0x72f5,	// (0x00035d5a) list_single_preview_pane

0x7339,	// (0x00035d9e) list_single_preview_pane_g1

0x7341,	// (0x00035da6) list_single_preview_pane_t1

0x7307,	// (0x00035d6c) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0003e581) list_single_preview_pane_t

0x734f,	// (0x00035db4) bg_popup_heading_pane_cp2_ParamLimits

0x734f,	// (0x00035db4) bg_popup_heading_pane_cp2

0x7365,	// (0x00035dca) heading_preview_pane_g1

0x736d,	// (0x00035dd2) heading_preview_pane_t1_ParamLimits

0x736d,	// (0x00035dd2) heading_preview_pane_t1

0x4104,	// (0x00032b69) soft_indicator_pane_t1_ParamLimits

0x4619,	// (0x0003307e) scroll_pane_ParamLimits

0x4a1f,	// (0x00033484) scroll_sc2_left_pane

0x4a16,	// (0x0003347b) scroll_sc2_right_pane

0x4a3e,	// (0x000334a3) scroll_bg_pane_g1_ParamLimits

0x4a53,	// (0x000334b8) scroll_bg_pane_g2_ParamLimits

0x4a6b,	// (0x000334d0) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0003e153) scroll_bg_pane_g_ParamLimits

0x4a3e,	// (0x000334a3) scroll_handle_pane_g1_ParamLimits

0x4a8d,	// (0x000334f2) scroll_handle_pane_g2_ParamLimits

0x4a6b,	// (0x000334d0) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0003e15a) scroll_handle_pane_g_ParamLimits

0xab74,	// (0x000395d9) popup_choice_list_window_ParamLimits

0xab74,	// (0x000395d9) popup_choice_list_window

0x5431,	// (0x00033e96) choice_list_pane

0x54b3,	// (0x00033f18) cell_toolbar_pane_t1

0x54db,	// (0x00033f40) toolbar_button_pane_ParamLimits

0x63c3,	// (0x00034e28) ai_gene_pane_1_t2_ParamLimits

0x63c3,	// (0x00034e28) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0003e382) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0003e382) ai_gene_pane_1_t

0x738a,	// (0x00035def) scroll_sc2_left_pane_g1

0x738a,	// (0x00035def) scroll_sc2_right_pane_g1

0x4816,	// (0x0003327b) bg_popup_sub_pane_cp10

0x7394,	// (0x00035df9) list_choice_list_pane

0x73ab,	// (0x00035e10) list_single_choice_list_pane_ParamLimits

0x73ab,	// (0x00035e10) list_single_choice_list_pane

0x47f9,	// (0x0003325e) list_single_choice_list_pane_g1

0x4801,	// (0x00033266) list_single_choice_list_pane_t1_ParamLimits

0x4801,	// (0x00033266) list_single_choice_list_pane_t1

0x73be,	// (0x00035e23) choice_list_pane_g1

0x73c6,	// (0x00035e2b) choice_list_pane_t1

0x4041,	// (0x00032aa6) input_focus_pane_cp11

0x498b,	// (0x000333f0) title_pane_stacon_g2_ParamLimits

0x498b,	// (0x000333f0) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0003e139) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0003e139) title_pane_stacon_g

0x509b,	// (0x00033b00) cursor_press_pane

0xac1a,	// (0x0003967f) popup_fep_hwr_window_ParamLimits

0xac1a,	// (0x0003967f) popup_fep_hwr_window

0xac92,	// (0x000396f7) popup_fep_vkb_window_ParamLimits

0xac92,	// (0x000396f7) popup_fep_vkb_window

0x73d4,	// (0x00035e39) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x0003e5aa) fep_vkb_side_pane_g_ParamLimits

0xc1f7,	// (0x0003ac5c) fep_hwr_candidate_pane_ParamLimits

0xc1f7,	// (0x0003ac5c) fep_hwr_candidate_pane

0xc221,	// (0x0003ac86) fep_hwr_side_pane_ParamLimits

0xc221,	// (0x0003ac86) fep_hwr_side_pane

0xc241,	// (0x0003aca6) fep_hwr_top_pane_ParamLimits

0xc241,	// (0x0003aca6) fep_hwr_top_pane

0xc259,	// (0x0003acbe) fep_hwr_write_pane_ParamLimits

0xc259,	// (0x0003acbe) fep_hwr_write_pane

0xfb45,	// (0x0003e5aa) fep_vkb_side_pane_g

0x73ee,	// (0x00035e53) fep_hwr_top_pane_g1

0x73dc,	// (0x00035e41) fep_hwr_top_pane_g2

0xc285,	// (0x0003acea) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0003e586) fep_hwr_top_pane_g

0xc29a,	// (0x0003acff) fep_hwr_top_text_pane

0x4be0,	// (0x00033645) fep_hwr_top_text_pane_g1

0x7424,	// (0x00035e89) fep_hwr_top_text_pane_t1

0xc390,	// (0x0003adf5) fep_hwr_candidate_pane_g1

0x7631,	// (0x00036096) fep_vkb_keypad_pane_g3_ParamLimits

0x7631,	// (0x00036096) fep_vkb_keypad_pane_g3

0x7659,	// (0x000360be) fep_vkb_keypad_pane_g4_ParamLimits

0x7659,	// (0x000360be) fep_vkb_keypad_pane_g4

0x76c8,	// (0x0003612d) fep_vkb_bottom_pane_g2_ParamLimits

0x76c8,	// (0x0003612d) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x0003e5b1) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x0003e5b1) fep_vkb_bottom_pane_g

0x738a,	// (0x00035def) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x0003e5bb) cell_vkb_side_pane_g

0x770c,	// (0x00036171) cell_vkb_side_pane_t1

0x771a,	// (0x0003617f) cell_vkb_side_pane_t1_copy1

0x738a,	// (0x00035def) bg_fep_vkb_candidate_pane_g2

0x77f6,	// (0x0003625b) cell_vkb_candidate_pane_ParamLimits

0x7432,	// (0x00035e97) aid_size_cell_vkb_ParamLimits

0x7432,	// (0x00035e97) aid_size_cell_vkb

0x77f6,	// (0x0003625b) cell_vkb_candidate_pane

0xc494,	// (0x0003aef9) bg_popup_fep_shadow_pane_g1

0x74ae,	// (0x00035f13) fep_vkb_bottom_pane_ParamLimits

0x74ae,	// (0x00035f13) fep_vkb_bottom_pane

0x74eb,	// (0x00035f50) fep_vkb_candidate_pane_ParamLimits

0x74eb,	// (0x00035f50) fep_vkb_candidate_pane

0x7507,	// (0x00035f6c) fep_vkb_keypad_pane_ParamLimits

0x7507,	// (0x00035f6c) fep_vkb_keypad_pane

0x754d,	// (0x00035fb2) fep_vkb_side_pane_ParamLimits

0x754d,	// (0x00035fb2) fep_vkb_side_pane

0x7589,	// (0x00035fee) fep_vkb_top_pane_ParamLimits

0x7589,	// (0x00035fee) fep_vkb_top_pane

0x75c5,	// (0x0003602a) fep_vkb_top_pane_g1_ParamLimits

0x75c5,	// (0x0003602a) fep_vkb_top_pane_g1

0x75d4,	// (0x00036039) fep_vkb_top_pane_g2_ParamLimits

0x75d4,	// (0x00036039) fep_vkb_top_pane_g2

0x75e3,	// (0x00036048) fep_vkb_top_pane_g3_ParamLimits

0x75e3,	// (0x00036048) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x0003e5a1) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x0003e5a1) fep_vkb_top_pane_g

0x7601,	// (0x00036066) fep_vkb_top_text_pane_ParamLimits

0x7601,	// (0x00036066) fep_vkb_top_text_pane

0xc3bc,	// (0x0003ae21) fep_vkb_side_pane_g1_ParamLimits

0xc3bc,	// (0x0003ae21) fep_vkb_side_pane_g1

0x7620,	// (0x00036085) grid_vkb_side_pane_ParamLimits

0x7620,	// (0x00036085) grid_vkb_side_pane

0xc49c,	// (0x0003af01) bg_popup_fep_shadow_pane_g2

0xc4a5,	// (0x0003af0a) bg_popup_fep_shadow_pane_g3

0xc4ad,	// (0x0003af12) bg_popup_fep_shadow_pane_g4

0xc4b6,	// (0x0003af1b) bg_popup_fep_shadow_pane_g5

0xc4c0,	// (0x0003af25) bg_popup_fep_shadow_pane_g6

0xc4c8,	// (0x0003af2d) bg_popup_fep_shadow_pane_g7

0x472d,	// (0x00033192) bg_popup_fep_shadow_pane_g8

0x7677,	// (0x000360dc) grid_vkb_keypad_number_pane_ParamLimits

0x7677,	// (0x000360dc) grid_vkb_keypad_number_pane

0x7687,	// (0x000360ec) grid_vkb_keypad_pane_ParamLimits

0x7687,	// (0x000360ec) grid_vkb_keypad_pane

0x76ad,	// (0x00036112) fep_vkb_bottom_pane_g1_ParamLimits

0x76ad,	// (0x00036112) fep_vkb_bottom_pane_g1

0x76d6,	// (0x0003613b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x76d6,	// (0x0003613b) grid_vkb_keypad_bottom_left_pane

0x76eb,	// (0x00036150) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x76eb,	// (0x00036150) grid_vkb_keypad_bottom_right_pane

0x7700,	// (0x00036165) fep_vkb_top_text_pane_g1

0xc406,	// (0x0003ae6b) fep_vkb_top_text_pane_t1

0xc41b,	// (0x0003ae80) cell_vkb_side_pane_ParamLimits

0xc41b,	// (0x0003ae80) cell_vkb_side_pane

0x738a,	// (0x00035def) cell_vkb_side_pane_g1

0x7728,	// (0x0003618d) cell_vkb_keypad_pane_ParamLimits

0x7728,	// (0x0003618d) cell_vkb_keypad_pane

0x77a3,	// (0x00036208) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x0003e5ce) bg_popup_fep_shadow_pane_g

0x738a,	// (0x00035def) cell_hwr_side_pane_g1

0x738a,	// (0x00035def) cell_hwr_side_pane_g2

0x77ad,	// (0x00036212) cell_vkb_keypad_pane_t1

0xc43e,	// (0x0003aea3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc43e,	// (0x0003aea3) cell_vkb_keypad_bottom_left_pane

0xc45b,	// (0x0003aec0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc45b,	// (0x0003aec0) cell_vkb_keypad_bottom_right_pane

0x738a,	// (0x00035def) cell_vkb_keypad_bottom_left_pane_g1

0x738a,	// (0x00035def) cell_vkb_keypad_bottom_right_pane_g1

0x77bb,	// (0x00036220) cell_vkb_keypad_number_pane_ParamLimits

0x77bb,	// (0x00036220) cell_vkb_keypad_number_pane

0x77da,	// (0x0003623f) cell_vkb_keypad_number_pane_g1

0x77e4,	// (0x00036249) cell_vkb_keypad_number_pane_g2

0x77ed,	// (0x00036252) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x0003e5c0) cell_vkb_keypad_number_pane_g

0x77ad,	// (0x00036212) cell_vkb_keypad_number_pane_t1

0x7813,	// (0x00036278) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x0003e5bb) cell_hwr_side_pane_g

0x782c,	// (0x00036291) cell_hwr_side_pane_t1

0xc4da,	// (0x0003af3f) cell_hwr_side_pane_t1_copy1

0x75f3,	// (0x00036058) cell_hwr_candidate_pane_g1

0xc4e8,	// (0x0003af4d) cell_hwr_candidate_pane_t1

0x738a,	// (0x00035def) cell_vkb_candidate_pane_g2

0x7870,	// (0x000362d5) cell_vkb_candidate_pane_t1

0xc1be,	// (0x0003ac23) bg_popup_fep_shadow_pane_ParamLimits

0xc1be,	// (0x0003ac23) bg_popup_fep_shadow_pane

0x3907,	// (0x0003236c) bg_fep_hwr_top_pane_g4

0x7400,	// (0x00035e65) bg_hwr_side_pane_g1_ParamLimits

0x7400,	// (0x00035e65) bg_hwr_side_pane_g1

0xc2d6,	// (0x0003ad3b) cell_hwr_side_pane_ParamLimits

0xc2d6,	// (0x0003ad3b) cell_hwr_side_pane

0xc311,	// (0x0003ad76) fep_hwr_write_pane_g1_ParamLimits

0xc311,	// (0x0003ad76) fep_hwr_write_pane_g1

0xc31e,	// (0x0003ad83) fep_hwr_write_pane_g2_ParamLimits

0xc31e,	// (0x0003ad83) fep_hwr_write_pane_g2

0xc32b,	// (0x0003ad90) fep_hwr_write_pane_g3_ParamLimits

0xc32b,	// (0x0003ad90) fep_hwr_write_pane_g3

0xc339,	// (0x0003ad9e) fep_hwr_write_pane_g4_ParamLimits

0xc339,	// (0x0003ad9e) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x0003e58d) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x0003e58d) fep_hwr_write_pane_g

0x3907,	// (0x0003236c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3907,	// (0x0003236c) bg_fep_hwr_candidate_pane_g2

0xc34e,	// (0x0003adb3) cell_hwr_candidate_pane_ParamLimits

0xc34e,	// (0x0003adb3) cell_hwr_candidate_pane

0xc390,	// (0x0003adf5) fep_hwr_candidate_pane_g1_ParamLimits

0x7460,	// (0x00035ec5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7460,	// (0x00035ec5) bg_popup_fep_shadow_pane_cp2

0x75f3,	// (0x00036058) fep_vkb_top_pane_g4_ParamLimits

0x75f3,	// (0x00036058) fep_vkb_top_pane_g4

0x7612,	// (0x00036077) fep_vkb_side_pane_g2_ParamLimits

0x7612,	// (0x00036077) fep_vkb_side_pane_g2

0x8f0a,	// (0x0003796f) list_setting_pane_t4_ParamLimits

0x8f0a,	// (0x0003796f) list_setting_pane_t4

0x8fa4,	// (0x00037a09) list_setting_number_pane_t5_ParamLimits

0x8fa4,	// (0x00037a09) list_setting_number_pane_t5

0x4c27,	// (0x0003368c) list_double_heading_pane_cp2_ParamLimits

0x4c27,	// (0x0003368c) list_double_heading_pane_cp2

0x46c0,	// (0x00033125) list_double_heading_pane_g1_cp2_ParamLimits

0x46c0,	// (0x00033125) list_double_heading_pane_g1_cp2

0x46cc,	// (0x00033131) list_double_heading_pane_g2_cp2_ParamLimits

0x46cc,	// (0x00033131) list_double_heading_pane_g2_cp2

0x787e,	// (0x000362e3) list_double_heading_pane_t1_cp2_ParamLimits

0x787e,	// (0x000362e3) list_double_heading_pane_t1_cp2

0x7894,	// (0x000362f9) list_double_heading_pane_t2_cp2_ParamLimits

0x7894,	// (0x000362f9) list_double_heading_pane_t2_cp2

0x4039,	// (0x00032a9e) aid_value_unit2

0x9cb4,	// (0x00038719) popup_preview_fixed_window

0x41e4,	// (0x00032c49) bg_popup_preview_window_pane_cp02

0x78a6,	// (0x0003630b) list_preview_fixed_pane

0x78ec,	// (0x00036351) list_empty_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_empty_pane_fp

0x78ec,	// (0x00036351) list_single_cale_day_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_cale_day_pane_fp

0x78ec,	// (0x00036351) list_single_graphic_heading_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_graphic_heading_pane_fp

0x78ec,	// (0x00036351) list_single_graphic_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_graphic_pane_fp

0x78ec,	// (0x00036351) list_single_heading_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_heading_pane_fp

0x78ec,	// (0x00036351) list_single_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_pane_fp

0x7903,	// (0x00036368) list_single_pane_fp_g1_ParamLimits

0x7903,	// (0x00036368) list_single_pane_fp_g1

0xa19e,	// (0x00038c03) list_single_pane_fp_g2_ParamLimits

0xa19e,	// (0x00038c03) list_single_pane_fp_g2

0x969f,	// (0x00038104) list_single_pane_fp_g3_ParamLimits

0x969f,	// (0x00038104) list_single_pane_fp_g3

0x790f,	// (0x00036374) list_single_pane_fp_g4_ParamLimits

0x790f,	// (0x00036374) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x0003e5ef) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003e5ef) list_single_pane_fp_g

0x96b3,	// (0x00038118) list_single_pane_fp_t1_ParamLimits

0x96b3,	// (0x00038118) list_single_pane_fp_t1

0x96ca,	// (0x0003812f) list_single_graphic_pane_fp_g1_ParamLimits

0x96ca,	// (0x0003812f) list_single_graphic_pane_fp_g1

0x7903,	// (0x00036368) list_single_graphic_pane_fp_g2_ParamLimits

0x7903,	// (0x00036368) list_single_graphic_pane_fp_g2

0xa19e,	// (0x00038c03) list_single_graphic_pane_fp_g3_ParamLimits

0xa19e,	// (0x00038c03) list_single_graphic_pane_fp_g3

0x969f,	// (0x00038104) list_single_graphic_pane_fp_g4_ParamLimits

0x969f,	// (0x00038104) list_single_graphic_pane_fp_g4

0x790f,	// (0x00036374) list_single_graphic_pane_fp_g5_ParamLimits

0x790f,	// (0x00036374) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x0003e5f8) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x0003e5f8) list_single_graphic_pane_fp_g

0x96d6,	// (0x0003813b) list_single_graphic_pane_fp_t1_ParamLimits

0x96d6,	// (0x0003813b) list_single_graphic_pane_fp_t1

0x96ca,	// (0x0003812f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x96ca,	// (0x0003812f) list_single_graphic_heading_pane_fp_g1

0x7903,	// (0x00036368) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7903,	// (0x00036368) list_single_graphic_heading_pane_fp_g2

0xa19e,	// (0x00038c03) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa19e,	// (0x00038c03) list_single_graphic_heading_pane_fp_g3

0x969f,	// (0x00038104) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x969f,	// (0x00038104) list_single_graphic_heading_pane_fp_g4

0x790f,	// (0x00036374) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x790f,	// (0x00036374) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x0003e5f8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x0003e5f8) list_single_graphic_heading_pane_fp_g

0x96ec,	// (0x00038151) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x96ec,	// (0x00038151) list_single_graphic_heading_pane_fp_t1

0x9702,	// (0x00038167) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9702,	// (0x00038167) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x0003e603) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x0003e603) list_single_graphic_heading_pane_fp_t

0x9714,	// (0x00038179) list_single_cale_day_pane_fp_g1_ParamLimits

0x9714,	// (0x00038179) list_single_cale_day_pane_fp_g1

0x791b,	// (0x00036380) list_single_cale_day_pane_fp_g2_ParamLimits

0x791b,	// (0x00036380) list_single_cale_day_pane_fp_g2

0x974c,	// (0x000381b1) list_single_cale_day_pane_fp_g3_ParamLimits

0x974c,	// (0x000381b1) list_single_cale_day_pane_fp_g3

0x9774,	// (0x000381d9) list_single_cale_day_pane_fp_g4_ParamLimits

0x9774,	// (0x000381d9) list_single_cale_day_pane_fp_g4

0x9798,	// (0x000381fd) list_single_cale_day_pane_fp_g5_ParamLimits

0x9798,	// (0x000381fd) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x0003e608) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x0003e608) list_single_cale_day_pane_fp_g

0x97bc,	// (0x00038221) list_single_cale_day_pane_fp_t1_ParamLimits

0x97bc,	// (0x00038221) list_single_cale_day_pane_fp_t1

0x97e2,	// (0x00038247) list_single_cale_day_pane_fp_t2_ParamLimits

0x97e2,	// (0x00038247) list_single_cale_day_pane_fp_t2

0x97fb,	// (0x00038260) list_single_cale_day_pane_fp_t3_ParamLimits

0x97fb,	// (0x00038260) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x0003e613) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x0003e613) list_single_cale_day_pane_fp_t

0x7903,	// (0x00036368) list_empty_pane_fp_g1_ParamLimits

0x7903,	// (0x00036368) list_empty_pane_fp_g1

0x9814,	// (0x00038279) list_empty_pane_fp_t1

0x9822,	// (0x00038287) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003e61a) list_empty_pane_fp_t

0x7903,	// (0x00036368) list_single_heading_pane_fp_g1_ParamLimits

0x7903,	// (0x00036368) list_single_heading_pane_fp_g1

0xa19e,	// (0x00038c03) list_single_heading_pane_fp_g2_ParamLimits

0xa19e,	// (0x00038c03) list_single_heading_pane_fp_g2

0x969f,	// (0x00038104) list_single_heading_pane_fp_g3_ParamLimits

0x969f,	// (0x00038104) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x0003e61f) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x0003e61f) list_single_heading_pane_fp_g

0x9830,	// (0x00038295) list_single_heading_pane_fp_t1_ParamLimits

0x9830,	// (0x00038295) list_single_heading_pane_fp_t1

0x9842,	// (0x000382a7) list_single_heading_pane_fp_t2_ParamLimits

0x9842,	// (0x000382a7) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x0003e626) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x0003e626) list_single_heading_pane_fp_t

0x4822,	// (0x00033287) aid_size_cell_fast

0x41c7,	// (0x00032c2c) soft_indicator_pane_cp1_t1

0x485f,	// (0x000332c4) cell_app_pane_cp2_ParamLimits

0x485f,	// (0x000332c4) cell_app_pane_cp2

0xc1e0,	// (0x0003ac45) fep_hwr_candidate_drop_down_list_pane

0x3f33,	// (0x00032998) fep_hwr_candidate_pane_g3_ParamLimits

0x3f33,	// (0x00032998) fep_hwr_candidate_pane_g3

0x3f40,	// (0x000329a5) fep_hwr_candidate_pane_g4_ParamLimits

0x3f40,	// (0x000329a5) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x0003e59a) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x0003e59a) fep_hwr_candidate_pane_g

0x74da,	// (0x00035f3f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74da,	// (0x00035f3f) fep_vkb_candidate_drop_down_list_pane

0x781b,	// (0x00036280) fep_vkb_candidate_pane_g3

0x7823,	// (0x00036288) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x0003e5c7) fep_vkb_candidate_pane_g

0x75f3,	// (0x00036058) cell_hwr_candidate_pane_g1_ParamLimits

0x79cf,	// (0x00036434) cell_hwr_candidate_pane_g3_ParamLimits

0x79cf,	// (0x00036434) cell_hwr_candidate_pane_g3

0x79f0,	// (0x00036455) cell_hwr_candidate_pane_g4_ParamLimits

0x79f0,	// (0x00036455) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x0003e5e1) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x0003e5e1) cell_hwr_candidate_pane_g

0x783a,	// (0x0003629f) cell_vkb_candidate_pane_g3_ParamLimits

0x783a,	// (0x0003629f) cell_vkb_candidate_pane_g3

0x7855,	// (0x000362ba) cell_vkb_candidate_pane_g4_ParamLimits

0x7855,	// (0x000362ba) cell_vkb_candidate_pane_g4

0x7927,	// (0x0003638c) cell_app_pane_cp2_g1_ParamLimits

0x7927,	// (0x0003638c) cell_app_pane_cp2_g1

0x7945,	// (0x000363aa) cell_app_pane_cp2_g2_ParamLimits

0x7945,	// (0x000363aa) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x0003e62b) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x0003e62b) cell_app_pane_cp2_g

0x7951,	// (0x000363b6) cell_app_pane_cp2_t1_ParamLimits

0x7951,	// (0x000363b6) cell_app_pane_cp2_t1

0x46a6,	// (0x0003310b) grid_highlight_pane_cp1_ParamLimits

0x46a6,	// (0x0003310b) grid_highlight_pane_cp1

0xc506,	// (0x0003af6b) cell_hwr_candidate_pane_cp1_ParamLimits

0xc506,	// (0x0003af6b) cell_hwr_candidate_pane_cp1

0x75f3,	// (0x00036058) fep_hwr_candidate_drop_down_list_pane_g1

0x7983,	// (0x000363e8) fep_hwr_candidate_drop_down_list_pane_g2

0x7990,	// (0x000363f5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0003e630) fep_hwr_candidate_drop_down_list_pane_g

0xc525,	// (0x0003af8a) fep_hwr_candidate_drop_down_list_scroll_pane

0xc52e,	// (0x0003af93) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc52e,	// (0x0003af93) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc53b,	// (0x0003afa0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc53b,	// (0x0003afa0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc548,	// (0x0003afad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc548,	// (0x0003afad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x783a,	// (0x0003629f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x783a,	// (0x0003629f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7855,	// (0x000362ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7855,	// (0x000362ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc555,	// (0x0003afba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc555,	// (0x0003afba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc570,	// (0x0003afd5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc570,	// (0x0003afd5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7a53,	// (0x000364b8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a53,	// (0x000364b8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0003e637) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0003e637) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7963,	// (0x000363c8) cell_vkb_candidate_pane_cp1_ParamLimits

0x7963,	// (0x000363c8) cell_vkb_candidate_pane_cp1

0x75f3,	// (0x00036058) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x75f3,	// (0x00036058) fep_vkb_candidate_drop_down_list_pane_g1

0x7983,	// (0x000363e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7983,	// (0x000363e8) fep_vkb_candidate_drop_down_list_pane_g2

0x7990,	// (0x000363f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7990,	// (0x000363f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0003e630) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x0003e630) fep_vkb_candidate_drop_down_list_pane_g

0x799d,	// (0x00036402) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x799d,	// (0x00036402) fep_vkb_candidate_drop_down_list_scroll_pane

0x79aa,	// (0x0003640f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79aa,	// (0x0003640f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x79b7,	// (0x0003641c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79b7,	// (0x0003641c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x79c3,	// (0x00036428) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79c3,	// (0x00036428) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79cf,	// (0x00036434) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79cf,	// (0x00036434) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x79f0,	// (0x00036455) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x79f0,	// (0x00036455) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a11,	// (0x00036476) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a11,	// (0x00036476) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a32,	// (0x00036497) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a32,	// (0x00036497) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a53,	// (0x000364b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a53,	// (0x000364b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003e648) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003e648) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9dbe,	// (0x00038823) title_pane_g1_ParamLimits

0x9dcb,	// (0x00038830) title_pane_g2_ParamLimits

0xf554,	// (0x0003dfb9) title_pane_g_ParamLimits

0x4bd8,	// (0x0003363d) aid_call2_pane

0x4bd0,	// (0x00033635) aid_call_pane

0x4be0,	// (0x00033645) popup_clock_analogue_window_g1

0x4be0,	// (0x00033645) popup_clock_analogue_window_g2

0xa4e1,	// (0x00038f46) popup_clock_analogue_window_g3

0xa4ea,	// (0x00038f4f) popup_clock_analogue_window_g4

0x404b,	// (0x00032ab0) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0003e168) popup_clock_analogue_window_g

0xa4f2,	// (0x00038f57) popup_clock_analogue_window_t1

0xa500,	// (0x00038f65) clock_digital_number_pane_ParamLimits

0xa500,	// (0x00038f65) clock_digital_number_pane

0xa50c,	// (0x00038f71) clock_digital_number_pane_cp02_ParamLimits

0xa50c,	// (0x00038f71) clock_digital_number_pane_cp02

0xa518,	// (0x00038f7d) clock_digital_number_pane_cp03_ParamLimits

0xa518,	// (0x00038f7d) clock_digital_number_pane_cp03

0xa524,	// (0x00038f89) clock_digital_number_pane_cp04_ParamLimits

0xa524,	// (0x00038f89) clock_digital_number_pane_cp04

0xa530,	// (0x00038f95) clock_digital_separator_pane_ParamLimits

0xa530,	// (0x00038f95) clock_digital_separator_pane

0xa53c,	// (0x00038fa1) popup_clock_digital_window_t1_ParamLimits

0xa53c,	// (0x00038fa1) popup_clock_digital_window_t1

0x404b,	// (0x00032ab0) clock_digital_number_pane_g1

0x404b,	// (0x00032ab0) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0003e173) clock_digital_number_pane_g

0x404b,	// (0x00032ab0) clock_digital_separator_pane_g1

0x404b,	// (0x00032ab0) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0003e173) clock_digital_separator_pane_g

0xb0ed,	// (0x00039b52) aid_fill_nsta_ParamLimits

0xb1b6,	// (0x00039c1b) indicator_nsta_pane_ParamLimits

0x53c0,	// (0x00033e25) popup_clock_analogue_window

0x53c0,	// (0x00033e25) popup_clock_digital_window

0x40b1,	// (0x00032b16) grid_indicator_nsta_pane_ParamLimits

0x6fd1,	// (0x00035a36) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x0003e51a) clock_nsta_pane_t

0xa4a5,	// (0x00038f0a) aid_size_max_handle

0xa4af,	// (0x00038f14) aid_size_min_handle

0x509b,	// (0x00033b00) editor_scroll_pane

0x7a6e,	// (0x000364d3) ex_editor_pane

0x47de,	// (0x00033243) scroll_pane_cp13

0x4645,	// (0x000330aa) scroll_pane_cp14

0x4c0f,	// (0x00033674) scroll_pane_cp36

0x4c39,	// (0x0003369e) list_single_graphic_hl_pane_cp2_ParamLimits

0x4c39,	// (0x0003369e) list_single_graphic_hl_pane_cp2

0x9425,	// (0x00037e8a) list_single_graphic_hl_pane_ParamLimits

0x9425,	// (0x00037e8a) list_single_graphic_hl_pane

0x9858,	// (0x000382bd) aid_size_min_hl_cp1

0x7a76,	// (0x000364db) list_highlight_pane_cp34_ParamLimits

0x7a76,	// (0x000364db) list_highlight_pane_cp34

0x7a87,	// (0x000364ec) list_single_graphic_hl_pane_g1_ParamLimits

0x7a87,	// (0x000364ec) list_single_graphic_hl_pane_g1

0x9861,	// (0x000382c6) list_single_graphic_hl_pane_g2_ParamLimits

0x9861,	// (0x000382c6) list_single_graphic_hl_pane_g2

0x9861,	// (0x000382c6) list_single_graphic_hl_pane_g3_ParamLimits

0x9861,	// (0x000382c6) list_single_graphic_hl_pane_g3

0x500c,	// (0x00033a71) list_single_graphic_hl_pane_g4_ParamLimits

0x500c,	// (0x00033a71) list_single_graphic_hl_pane_g4

0x986d,	// (0x000382d2) list_single_graphic_hl_pane_g5_ParamLimits

0x986d,	// (0x000382d2) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x0003e659) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x0003e659) list_single_graphic_hl_pane_g

0x9881,	// (0x000382e6) list_single_graphic_hl_pane_t1_ParamLimits

0x9881,	// (0x000382e6) list_single_graphic_hl_pane_t1

0x7a94,	// (0x000364f9) aid_size_min_hl_cp2

0x7a9d,	// (0x00036502) list_highlight_pane_cp34_cp2_ParamLimits

0x7a9d,	// (0x00036502) list_highlight_pane_cp34_cp2

0x7a87,	// (0x000364ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7a87,	// (0x000364ec) list_single_graphic_hl_pane_g1_cp2

0x7aaa,	// (0x0003650f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7aaa,	// (0x0003650f) list_single_graphic_hl_pane_g2_cp2

0xc58b,	// (0x0003aff0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc58b,	// (0x0003aff0) list_single_graphic_hl_pane_g3_cp2

0x4fe0,	// (0x00033a45) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4fe0,	// (0x00033a45) list_single_graphic_hl_pane_g4_cp2

0x7ab6,	// (0x0003651b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ab6,	// (0x0003651b) list_single_graphic_hl_pane_g5_cp2

0xaa0b,	// (0x00039470) control_pane_g4_ParamLimits

0xaa0b,	// (0x00039470) control_pane_g4

0x4816,	// (0x0003327b) bg_popup_sub_pane_cp10_ParamLimits

0x7394,	// (0x00035df9) list_choice_list_pane_ParamLimits

0x73a3,	// (0x00035e08) scroll_pane_cp23

0x41e4,	// (0x00032c49) bg_popup_preview_window_pane_cp02_ParamLimits

0x78a6,	// (0x0003630b) list_preview_fixed_pane_ParamLimits

0x78bc,	// (0x00036321) list_preview_fixed_pane_cp_ParamLimits

0x78bc,	// (0x00036321) list_preview_fixed_pane_cp

0x78c8,	// (0x0003632d) popup_preview_fixed_window_g1_ParamLimits

0x78c8,	// (0x0003632d) popup_preview_fixed_window_g1

0x78d4,	// (0x00036339) popup_preview_fixed_window_g2_ParamLimits

0x78d4,	// (0x00036339) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x0003e5e8) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x0003e5e8) popup_preview_fixed_window_g

0xa381,	// (0x00038de6) aid_navi_side_left_pane_ParamLimits

0xa396,	// (0x00038dfb) aid_navi_side_right_pane_ParamLimits

0xa3ae,	// (0x00038e13) navi_icon_pane_stacon_ParamLimits

0xa3c2,	// (0x00038e27) navi_navi_pane_stacon_ParamLimits

0xa3ae,	// (0x00038e13) navi_text_pane_stacon_ParamLimits

0x4041,	// (0x00032aa6) main_text_info_pane

0x7ae0,	// (0x00036545) listscroll_text_info_pane

0x7ae8,	// (0x0003654d) list_text_info_pane_ParamLimits

0x7ae8,	// (0x0003654d) list_text_info_pane

0x7af7,	// (0x0003655c) scroll_pane_cp24_ParamLimits

0x7af7,	// (0x0003655c) scroll_pane_cp24

0xc599,	// (0x0003affe) list_text_info_pane_t1_ParamLimits

0xc599,	// (0x0003affe) list_text_info_pane_t1

0xab8e,	// (0x000395f3) popup_fast_swap2_window_ParamLimits

0xab8e,	// (0x000395f3) popup_fast_swap2_window

0x7b15,	// (0x0003657a) aid_size_cell_fast2

0x4041,	// (0x00032aa6) bg_popup_window_pane_cp17

0x58a6,	// (0x0003430b) heading_pane_cp2

0x43ca,	// (0x00032e2f) listscroll_fast2_pane

0x7b1f,	// (0x00036584) grid_fast2_pane

0x7b29,	// (0x0003658e) listscroll_fast2_pane_g1

0x7b31,	// (0x00036596) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x0003e664) listscroll_fast2_pane_g

0x47de,	// (0x00033243) scroll_pane_cp26

0x7b3b,	// (0x000365a0) cell_fast2_pane_ParamLimits

0x7b3b,	// (0x000365a0) cell_fast2_pane

0x7b50,	// (0x000365b5) cell_fast2_pane_g1

0x7b59,	// (0x000365be) cell_fast2_pane_g2

0x7b62,	// (0x000365c7) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x0003e669) cell_fast2_pane_g

0x440c,	// (0x00032e71) grid_highlight_pane_cp9

0x4421,	// (0x00032e86) main_eswt_pane_ParamLimits

0x4421,	// (0x00032e86) main_eswt_pane

0x7b0c,	// (0x00036571) list_single_text_info_pane

0x7b6a,	// (0x000365cf) eswt_ctrl_button_pane

0x7b6a,	// (0x000365cf) eswt_ctrl_canvas_pane

0x7b72,	// (0x000365d7) eswt_ctrl_combo_pane

0x7b6a,	// (0x000365cf) eswt_ctrl_default_pane

0x7b6a,	// (0x000365cf) eswt_ctrl_label_pane

0x7b7a,	// (0x000365df) eswt_ctrl_wait_pane

0x7b82,	// (0x000365e7) eswt_shell_pane

0x4041,	// (0x00032aa6) listscroll_eswt_app_pane

0x7ba2,	// (0x00036607) popup_eswt_tasktip_window_ParamLimits

0x7ba2,	// (0x00036607) popup_eswt_tasktip_window

0x55d7,	// (0x0003403c) bg_popup_window_pane_cp18

0x7bb3,	// (0x00036618) eswt_control_pane_g1_ParamLimits

0x7bb3,	// (0x00036618) eswt_control_pane_g1

0x7bc0,	// (0x00036625) eswt_control_pane_g2_ParamLimits

0x7bc0,	// (0x00036625) eswt_control_pane_g2

0x7bcd,	// (0x00036632) eswt_control_pane_g3_ParamLimits

0x7bcd,	// (0x00036632) eswt_control_pane_g3

0x7bda,	// (0x0003663f) eswt_control_pane_g4_ParamLimits

0x7bda,	// (0x0003663f) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x0003e670) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x0003e670) eswt_control_pane_g

0x46a6,	// (0x0003310b) bg_button_pane_ParamLimits

0x46a6,	// (0x0003310b) bg_button_pane

0x4421,	// (0x00032e86) common_borders_pane_copy2_ParamLimits

0x4421,	// (0x00032e86) common_borders_pane_copy2

0x7be7,	// (0x0003664c) control_button_pane_g1_ParamLimits

0x7be7,	// (0x0003664c) control_button_pane_g1

0x7bf3,	// (0x00036658) control_button_pane_g2_ParamLimits

0x7bf3,	// (0x00036658) control_button_pane_g2

0x7bff,	// (0x00036664) control_button_pane_g3_ParamLimits

0x7bff,	// (0x00036664) control_button_pane_g3

0x0002,

0xfc14,	// (0x0003e679) control_button_pane_g_ParamLimits

0xfc14,	// (0x0003e679) control_button_pane_g

0x7c13,	// (0x00036678) control_button_pane_t1

0x7c21,	// (0x00036686) control_button_pane_t2

0x0001,

0xfc1b,	// (0x0003e680) control_button_pane_t

0x54e7,	// (0x00033f4c) bg_button_pane_g1

0x54f7,	// (0x00033f5c) bg_button_pane_g2

0x54ef,	// (0x00033f54) bg_button_pane_g3

0x5507,	// (0x00033f6c) bg_button_pane_g4

0x54ff,	// (0x00033f64) bg_button_pane_g5

0x550f,	// (0x00033f74) bg_button_pane_g6

0x5517,	// (0x00033f7c) bg_button_pane_g7

0x5527,	// (0x00033f8c) bg_button_pane_g8

0x551f,	// (0x00033f84) bg_button_pane_g9

0x0008,

0xf871,	// (0x0003e2d6) bg_button_pane_g

0x734f,	// (0x00035db4) common_borders_pane_ParamLimits

0x734f,	// (0x00035db4) common_borders_pane

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy1_ParamLimits

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy1

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy1_ParamLimits

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy1

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy1_ParamLimits

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy1

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy1_ParamLimits

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy1

0x738a,	// (0x00035def) bg_eswt_ctrl_canvas_pane_g1

0x734f,	// (0x00035db4) common_borders_pane_cp2_ParamLimits

0x734f,	// (0x00035db4) common_borders_pane_cp2

0x734f,	// (0x00035db4) common_borders_pane_cp3_ParamLimits

0x734f,	// (0x00035db4) common_borders_pane_cp3

0x7c2f,	// (0x00036694) separator_horizontal_pane

0x7c37,	// (0x0003669c) separator_vertical_pane

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy2_ParamLimits

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy2

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy2_ParamLimits

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy2

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy2_ParamLimits

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy2

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy2_ParamLimits

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy2

0x4041,	// (0x00032aa6) common_borders_pane_cp4

0x7c40,	// (0x000366a5) separator_horizontal_pane_g1

0x7c49,	// (0x000366ae) separator_horizontal_pane_g2

0x7c52,	// (0x000366b7) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0003e685) separator_horizontal_pane_g

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy3_ParamLimits

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy3

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy3_ParamLimits

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy3

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy3_ParamLimits

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy3

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy3_ParamLimits

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy3

0x4041,	// (0x00032aa6) common_borders_pane_cp5

0x7c5b,	// (0x000366c0) separator_vertical_pane_g1

0x7c64,	// (0x000366c9) separator_vertical_pane_g2

0x7c6d,	// (0x000366d2) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x0003e68c) separator_vertical_pane_g

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy4_ParamLimits

0x7bb3,	// (0x00036618) eswt_control_pane_g1_copy4

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy4_ParamLimits

0x7bc0,	// (0x00036625) eswt_control_pane_g2_copy4

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy4_ParamLimits

0x7bcd,	// (0x00036632) eswt_control_pane_g3_copy4

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy4_ParamLimits

0x7bda,	// (0x0003663f) eswt_control_pane_g4_copy4

0xc5d2,	// (0x0003b037) eswt_ctrl_combo_button_pane

0xc5da,	// (0x0003b03f) eswt_ctrl_input_pane

0xc5e2,	// (0x0003b047) popup_choice_list_window_cp70

0xc5ea,	// (0x0003b04f) eswt_ctrl_input_pane_t1

0x4041,	// (0x00032aa6) input_focus_pane_cp70

0x734f,	// (0x00035db4) bg_button_pane_cp70_ParamLimits

0x734f,	// (0x00035db4) bg_button_pane_cp70

0xc5f8,	// (0x0003b05d) eswt_ctrl_combo_button_pane_g1

0x7c76,	// (0x000366db) wait_bar_pane_cp70

0x55d7,	// (0x0003403c) bg_popup_window_pane_cp70_ParamLimits

0x55d7,	// (0x0003403c) bg_popup_window_pane_cp70

0x7c7e,	// (0x000366e3) popup_eswt_tasktip_window_t1

0x7c94,	// (0x000366f9) wait_bar_pane_cp71_ParamLimits

0x7c94,	// (0x000366f9) wait_bar_pane_cp71

0x7ca0,	// (0x00036705) grid_eswt_app_pane

0x4a16,	// (0x0003347b) scroll_pane_cp70

0xc600,	// (0x0003b065) cell_eswt_app_pane_ParamLimits

0xc600,	// (0x0003b065) cell_eswt_app_pane

0xc634,	// (0x0003b099) cell_eswt_app_pane_g1_ParamLimits

0xc634,	// (0x0003b099) cell_eswt_app_pane_g1

0xc663,	// (0x0003b0c8) cell_eswt_app_pane_g2_ParamLimits

0xc663,	// (0x0003b0c8) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x0003e693) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x0003e693) cell_eswt_app_pane_g

0xc68c,	// (0x0003b0f1) cell_eswt_app_pane_t1_ParamLimits

0xc68c,	// (0x0003b0f1) cell_eswt_app_pane_t1

0x7ca9,	// (0x0003670e) grid_highlight_pane_cp70_ParamLimits

0x7ca9,	// (0x0003670e) grid_highlight_pane_cp70

0x4f94,	// (0x000339f9) set_content_pane_g1

0x5284,	// (0x00033ce9) status_small_volume_pane

0xc6be,	// (0x0003b123) status_small_volume_pane_g1

0xc6c6,	// (0x0003b12b) volume_small2_pane

0xc6cf,	// (0x0003b134) volume_small2_pane_g1

0xc6d8,	// (0x0003b13d) volume_small2_pane_g2

0xc6e1,	// (0x0003b146) volume_small2_pane_g3

0xc6ea,	// (0x0003b14f) volume_small2_pane_g4

0xc6f3,	// (0x0003b158) volume_small2_pane_g5

0xc6fc,	// (0x0003b161) volume_small2_pane_g6

0xc705,	// (0x0003b16a) volume_small2_pane_g7

0xc70e,	// (0x0003b173) volume_small2_pane_g8

0xc717,	// (0x0003b17c) volume_small2_pane_g9

0xc720,	// (0x0003b185) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x0003e698) volume_small2_pane_g

0x7700,	// (0x00036165) fep_vkb_top_text_pane_g1_ParamLimits

0xc406,	// (0x0003ae6b) fep_vkb_top_text_pane_t1_ParamLimits

0x78e0,	// (0x00036345) popup_preview_fixed_window_g3_ParamLimits

0x78e0,	// (0x00036345) popup_preview_fixed_window_g3

0xb02d,	// (0x00039a92) popup_toolbar_trans_pane

0xba36,	// (0x0003a49b) aid_height_set_list_ParamLimits

0x64d6,	// (0x00034f3b) aid_size_parent_ParamLimits

0x4816,	// (0x0003327b) list_highlight_pane_cp2_ParamLimits

0x4f94,	// (0x000339f9) set_content_pane_g1_ParamLimits

0x9447,	// (0x00037eac) list_single_image_pane_ParamLimits

0x9447,	// (0x00037eac) list_single_image_pane

0xc729,	// (0x0003b18e) aid_size_cell_image_ParamLimits

0xc729,	// (0x0003b18e) aid_size_cell_image

0xc736,	// (0x0003b19b) grid_single_image_pane_ParamLimits

0xc736,	// (0x0003b19b) grid_single_image_pane

0x46c0,	// (0x00033125) list_single_image_pane_g1_ParamLimits

0x46c0,	// (0x00033125) list_single_image_pane_g1

0x46cc,	// (0x00033131) list_single_image_pane_g2_ParamLimits

0x46cc,	// (0x00033131) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x0003e6ad) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x0003e6ad) list_single_image_pane_g

0x7cb5,	// (0x0003671a) list_single_image_pane_t1_ParamLimits

0x7cb5,	// (0x0003671a) list_single_image_pane_t1

0xc742,	// (0x0003b1a7) cell_image_list_pane_ParamLimits

0xc742,	// (0x0003b1a7) cell_image_list_pane

0xc756,	// (0x0003b1bb) cell_image_list_pane_g1

0xc75f,	// (0x0003b1c4) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x0003e6b2) cell_image_list_pane_g

0x7ccb,	// (0x00036730) aid_size_cell_tb_trans_pane

0x46a6,	// (0x0003310b) bg_tb_trans_pane

0x7cdd,	// (0x00036742) grid_tb_trans_pane

0x54e7,	// (0x00033f4c) bg_tb_trans_pane_g1

0x54f7,	// (0x00033f5c) bg_tb_trans_pane_g2

0x54ef,	// (0x00033f54) bg_tb_trans_pane_g3

0x5507,	// (0x00033f6c) bg_tb_trans_pane_g4

0x54ff,	// (0x00033f64) bg_tb_trans_pane_g5

0x5527,	// (0x00033f8c) bg_tb_trans_pane_g6

0x551f,	// (0x00033f84) bg_tb_trans_pane_g7

0x550f,	// (0x00033f74) bg_tb_trans_pane_g8

0x5517,	// (0x00033f7c) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x0003e6b7) bg_tb_trans_pane_g

0x7cf1,	// (0x00036756) cell_toolbar_trans_pane_ParamLimits

0x7cf1,	// (0x00036756) cell_toolbar_trans_pane

0x738a,	// (0x00035def) cell_toolbar_trans_pane_g1

0xbff4,	// (0x0003aa59) list_form2_midp_pane_t1

0xc002,	// (0x0003aa67) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x0003e560) list_form2_midp_pane_t

0x70a6,	// (0x00035b0b) scroll_pane_cp51_ParamLimits

0x725e,	// (0x00035cc3) form2_midp_wait_pane_g1

0x7267,	// (0x00035ccc) form2_midp_wait_pane_g2

0x7270,	// (0x00035cd5) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0003e575) form2_midp_wait_pane_g

0x40b1,	// (0x00032b16) list_highlight_pane_cp21_ParamLimits

0x7290,	// (0x00035cf5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x729f,	// (0x00035d04) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbbb1,	// (0x0003a616) list_single_2graphic_im_pane_ParamLimits

0xbbb1,	// (0x0003a616) list_single_2graphic_im_pane

0xc768,	// (0x0003b1cd) list_single_2graphic_im_pane_g1_ParamLimits

0xc768,	// (0x0003b1cd) list_single_2graphic_im_pane_g1

0xc779,	// (0x0003b1de) list_single_2graphic_im_pane_g2_ParamLimits

0xc779,	// (0x0003b1de) list_single_2graphic_im_pane_g2

0xc785,	// (0x0003b1ea) list_single_2graphic_im_pane_g3_ParamLimits

0xc785,	// (0x0003b1ea) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x0003e6ca) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x0003e6ca) list_single_2graphic_im_pane_g

0xc799,	// (0x0003b1fe) list_single_2graphic_im_pane_t1_ParamLimits

0xc799,	// (0x0003b1fe) list_single_2graphic_im_pane_t1

0x78ec,	// (0x00036351) list_single_graphic_2heading_pane_fp_ParamLimits

0x78ec,	// (0x00036351) list_single_graphic_2heading_pane_fp

0x96ca,	// (0x0003812f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x96ca,	// (0x0003812f) list_single_graphic_2heading_pane_fp_g1

0x7903,	// (0x00036368) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7903,	// (0x00036368) list_single_graphic_2heading_pane_fp_g2

0xa19e,	// (0x00038c03) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa19e,	// (0x00038c03) list_single_graphic_2heading_pane_fp_g3

0x969f,	// (0x00038104) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x969f,	// (0x00038104) list_single_graphic_2heading_pane_fp_g4

0x790f,	// (0x00036374) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x790f,	// (0x00036374) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x0003e5f8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x0003e5f8) list_single_graphic_2heading_pane_fp_g

0x9897,	// (0x000382fc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9897,	// (0x000382fc) list_single_graphic_2heading_pane_fp_t1

0x9702,	// (0x00038167) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9702,	// (0x00038167) list_single_graphic_2heading_pane_fp_t2

0x98ad,	// (0x00038312) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x98ad,	// (0x00038312) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x0003e6d3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x0003e6d3) list_single_graphic_2heading_pane_fp_t

0x740c,	// (0x00035e71) fep_hwr_write_pane_g5_ParamLimits

0x740c,	// (0x00035e71) fep_hwr_write_pane_g5

0x7418,	// (0x00035e7d) fep_hwr_write_pane_g6_ParamLimits

0x7418,	// (0x00035e7d) fep_hwr_write_pane_g6

0x7b82,	// (0x000365e7) eswt_shell_pane_ParamLimits

0x55d7,	// (0x0003403c) bg_popup_window_pane_cp18_ParamLimits

0x65e0,	// (0x00035045) heading_pane_cp70

0x7c7e,	// (0x000366e3) popup_eswt_tasktip_window_t1_ParamLimits

0xb12d,	// (0x00039b92) aid_touch_tab_arrow_left

0xb13c,	// (0x00039ba1) aid_touch_tab_arrow_right

0x9ddc,	// (0x00038841) title_pane_g3_ParamLimits

0x9ddc,	// (0x00038841) title_pane_g3

0x4665,	// (0x000330ca) set_value_pane_g1

0xb02d,	// (0x00039a92) popup_toolbar_trans_pane_ParamLimits

0x7ccb,	// (0x00036730) aid_size_cell_tb_trans_pane_ParamLimits

0x46a6,	// (0x0003310b) bg_tb_trans_pane_ParamLimits

0x7cdd,	// (0x00036742) grid_tb_trans_pane_ParamLimits

0x41e4,	// (0x00032c49) cont_note_pane_ParamLimits

0x41e4,	// (0x00032c49) cont_note_pane

0x4421,	// (0x00032e86) cont_snote2_single_text_pane_ParamLimits

0x4421,	// (0x00032e86) cont_snote2_single_text_pane

0x4421,	// (0x00032e86) cont_snote2_single_graphic_pane_ParamLimits

0x4421,	// (0x00032e86) cont_snote2_single_graphic_pane

0x5abc,	// (0x00034521) cont_note_wait_pane_ParamLimits

0x5abc,	// (0x00034521) cont_note_wait_pane

0x5abc,	// (0x00034521) cont_note_image_pane_ParamLimits

0x5abc,	// (0x00034521) cont_note_image_pane

0x7d23,	// (0x00036788) popup_note2_window_g1_ParamLimits

0x7d23,	// (0x00036788) popup_note2_window_g1

0x7d54,	// (0x000367b9) popup_note2_window_t1_ParamLimits

0x7d54,	// (0x000367b9) popup_note2_window_t1

0x7d99,	// (0x000367fe) popup_note2_window_t2_ParamLimits

0x7d99,	// (0x000367fe) popup_note2_window_t2

0x7dde,	// (0x00036843) popup_note2_window_t3_ParamLimits

0x7dde,	// (0x00036843) popup_note2_window_t3

0x7e23,	// (0x00036888) popup_note2_window_t4_ParamLimits

0x7e23,	// (0x00036888) popup_note2_window_t4

0x425c,	// (0x00032cc1) popup_note2_window_t5_ParamLimits

0x425c,	// (0x00032cc1) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x0003e6df) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x0003e6df) popup_note2_window_t

0x7e52,	// (0x000368b7) popup_note2_image_window_g1_ParamLimits

0x7e52,	// (0x000368b7) popup_note2_image_window_g1

0x7e5e,	// (0x000368c3) popup_note2_image_window_g2_ParamLimits

0x7e5e,	// (0x000368c3) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x0003e6ea) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x0003e6ea) popup_note2_image_window_g

0x7e70,	// (0x000368d5) popup_note2_image_window_t1_ParamLimits

0x7e70,	// (0x000368d5) popup_note2_image_window_t1

0x7e88,	// (0x000368ed) popup_note2_image_window_t2_ParamLimits

0x7e88,	// (0x000368ed) popup_note2_image_window_t2

0x7ea0,	// (0x00036905) popup_note2_image_window_t3_ParamLimits

0x7ea0,	// (0x00036905) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x0003e6ef) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x0003e6ef) popup_note2_image_window_t

0x5aca,	// (0x0003452f) popup_note2_wait_window_g1_ParamLimits

0x5aca,	// (0x0003452f) popup_note2_wait_window_g1

0x5ad6,	// (0x0003453b) popup_note2_wait_window_g2_ParamLimits

0x5ad6,	// (0x0003453b) popup_note2_wait_window_g2

0x5ae2,	// (0x00034547) popup_note2_wait_window_g3_ParamLimits

0x5ae2,	// (0x00034547) popup_note2_wait_window_g3

0x0002,

0xf853,	// (0x0003e2b8) popup_note2_wait_window_g_ParamLimits

0xf853,	// (0x0003e2b8) popup_note2_wait_window_g

0x7ebc,	// (0x00036921) popup_note2_wait_window_t1_ParamLimits

0x7ebc,	// (0x00036921) popup_note2_wait_window_t1

0x7eda,	// (0x0003693f) popup_note2_wait_window_t2_ParamLimits

0x7eda,	// (0x0003693f) popup_note2_wait_window_t2

0x7ef8,	// (0x0003695d) popup_note2_wait_window_t3_ParamLimits

0x7ef8,	// (0x0003695d) popup_note2_wait_window_t3

0x7f0a,	// (0x0003696f) popup_note2_wait_window_t4_ParamLimits

0x7f0a,	// (0x0003696f) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0003e6f6) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0003e6f6) popup_note2_wait_window_t

0x7f1c,	// (0x00036981) wait_bar2_pane_ParamLimits

0x7f1c,	// (0x00036981) wait_bar2_pane

0x7f34,	// (0x00036999) popup_snote2_single_text_window_g1_ParamLimits

0x7f34,	// (0x00036999) popup_snote2_single_text_window_g1

0x7f5c,	// (0x000369c1) popup_snote2_single_text_window_t1_ParamLimits

0x7f5c,	// (0x000369c1) popup_snote2_single_text_window_t1

0x7fa8,	// (0x00036a0d) popup_snote2_single_text_window_t2_ParamLimits

0x7fa8,	// (0x00036a0d) popup_snote2_single_text_window_t2

0x7ff4,	// (0x00036a59) popup_snote2_single_text_window_t3_ParamLimits

0x7ff4,	// (0x00036a59) popup_snote2_single_text_window_t3

0x8035,	// (0x00036a9a) popup_snote2_single_text_window_t4_ParamLimits

0x8035,	// (0x00036a9a) popup_snote2_single_text_window_t4

0x806b,	// (0x00036ad0) popup_snote2_single_text_window_t5_ParamLimits

0x806b,	// (0x00036ad0) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0003e6ff) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0003e6ff) popup_snote2_single_text_window_t

0x8096,	// (0x00036afb) popup_snote2_single_graphic_window_g1_ParamLimits

0x8096,	// (0x00036afb) popup_snote2_single_graphic_window_g1

0x80be,	// (0x00036b23) popup_snote2_single_graphic_window_g2_ParamLimits

0x80be,	// (0x00036b23) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0003e70a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0003e70a) popup_snote2_single_graphic_window_g

0x80e6,	// (0x00036b4b) popup_snote2_single_graphic_window_t1_ParamLimits

0x80e6,	// (0x00036b4b) popup_snote2_single_graphic_window_t1

0x8132,	// (0x00036b97) popup_snote2_single_graphic_window_t2_ParamLimits

0x8132,	// (0x00036b97) popup_snote2_single_graphic_window_t2

0x7ff4,	// (0x00036a59) popup_snote2_single_graphic_window_t3_ParamLimits

0x7ff4,	// (0x00036a59) popup_snote2_single_graphic_window_t3

0x8035,	// (0x00036a9a) popup_snote2_single_graphic_window_t4_ParamLimits

0x8035,	// (0x00036a9a) popup_snote2_single_graphic_window_t4

0x806b,	// (0x00036ad0) popup_snote2_single_graphic_window_t5_ParamLimits

0x806b,	// (0x00036ad0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0003e70f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0003e70f) popup_snote2_single_graphic_window_t

0x7038,	// (0x00035a9d) clock_nsta_pane_cp2_t1

0x7038,	// (0x00035a9d) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0003e536) clock_nsta_pane_cp2_t

0x90ab,	// (0x00037b10) form_field_data_wide_pane_g1_ParamLimits

0x46c0,	// (0x00033125) form_field_data_wide_pane_g2_ParamLimits

0x46c0,	// (0x00033125) form_field_data_wide_pane_g2

0x46cc,	// (0x00033131) form_field_data_wide_pane_g3_ParamLimits

0x46cc,	// (0x00033131) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0003e0eb) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0003e0eb) form_field_data_wide_pane_g

0xbe8c,	// (0x0003a8f1) grid_touch_3_pane_ParamLimits

0xbe8c,	// (0x0003a8f1) grid_touch_3_pane

0xc7ca,	// (0x0003b22f) cell_touch_3_pane_ParamLimits

0xc7ca,	// (0x0003b22f) cell_touch_3_pane

0x738a,	// (0x00035def) cell_touch_3_pane_g1

0x738a,	// (0x00035def) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x0003e5bb) cell_touch_3_pane_g

0x428e,	// (0x00032cf3) cont_query_data_pane

0x4296,	// (0x00032cfb) cont_query_data_pane_cp1

0x817e,	// (0x00036be3) button_value_adjust_pane_cp7

0x8186,	// (0x00036beb) query_popup_pane_cp3

0x4c6a,	// (0x000336cf) bg_popup_sub_pane_cp22_ParamLimits

0xa5bd,	// (0x00039022) navi_navi_volume_pane_cp2

0xa5d8,	// (0x0003903d) popup_side_volume_key_window_g2

0xa5e7,	// (0x0003904c) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0003e181) popup_side_volume_key_window_g

0xa604,	// (0x00039069) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0003e188) popup_side_volume_key_window_t

0x4e9b,	// (0x00033900) popup_side_volume_key_window_ParamLimits

0x8d05,	// (0x0003776a) list_double_graphic_pane_g4_ParamLimits

0x8d05,	// (0x0003776a) list_double_graphic_pane_g4

0xbbfc,	// (0x0003a661) list_single_2heading_msg_pane_ParamLimits

0xbbfc,	// (0x0003a661) list_single_2heading_msg_pane

0xc80d,	// (0x0003b272) list_single_2heading_msg_pane_g1_ParamLimits

0xc80d,	// (0x0003b272) list_single_2heading_msg_pane_g1

0xc819,	// (0x0003b27e) list_single_2heading_msg_pane_g2_ParamLimits

0xc819,	// (0x0003b27e) list_single_2heading_msg_pane_g2

0xc825,	// (0x0003b28a) list_single_2heading_msg_pane_g3_ParamLimits

0xc825,	// (0x0003b28a) list_single_2heading_msg_pane_g3

0xc831,	// (0x0003b296) list_single_2heading_msg_pane_g4_ParamLimits

0xc831,	// (0x0003b296) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0003e71a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0003e71a) list_single_2heading_msg_pane_g

0x98cd,	// (0x00038332) list_single_2heading_msg_pane_t1_ParamLimits

0x98cd,	// (0x00038332) list_single_2heading_msg_pane_t1

0x98f5,	// (0x0003835a) list_single_2heading_msg_pane_t2_ParamLimits

0x98f5,	// (0x0003835a) list_single_2heading_msg_pane_t2

0x9929,	// (0x0003838e) list_single_2heading_msg_pane_t3_ParamLimits

0x9929,	// (0x0003838e) list_single_2heading_msg_pane_t3

0x9962,	// (0x000383c7) list_single_2heading_msg_pane_t4_ParamLimits

0x9962,	// (0x000383c7) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0003e723) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0003e723) list_single_2heading_msg_pane_t

0x405f,	// (0x00032ac4) title_pane_g4_ParamLimits

0x405f,	// (0x00032ac4) title_pane_g4

0xa2d1,	// (0x00038d36) title_pane_stacon_g3_ParamLimits

0xa2d1,	// (0x00038d36) title_pane_stacon_g3

0x7d17,	// (0x0003677c) list_single_2graphic_im_pane_g4_ParamLimits

0x7d17,	// (0x0003677c) list_single_2graphic_im_pane_g4

0x63e0,	// (0x00034e45) popup_side_volume_key_window_cp

0x68f3,	// (0x00035358) main_idle_act2_pane_t1

0xb42b,	// (0x00039e90) toolbar_button_pane_g10

0xa123,	// (0x00038b88) popup_toolbar_window_cp1

0x7029,	// (0x00035a8e) clock_nsta_pane_cp_t1

0x7029,	// (0x00035a8e) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0003e531) clock_nsta_pane_cp_t

0xa5bd,	// (0x00039022) navi_navi_volume_pane_cp2_ParamLimits

0xa5cc,	// (0x00039031) popup_side_volume_key_window_g1_ParamLimits

0xa5d8,	// (0x0003903d) popup_side_volume_key_window_g2_ParamLimits

0xa5e7,	// (0x0003904c) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0003e181) popup_side_volume_key_window_g_ParamLimits

0xc1cc,	// (0x0003ac31) fep_hwr_aid_pane

0x3907,	// (0x0003236c) bg_fep_hwr_top_pane_g4_ParamLimits

0x73ee,	// (0x00035e53) fep_hwr_top_pane_g1_ParamLimits

0x73dc,	// (0x00035e41) fep_hwr_top_pane_g2_ParamLimits

0xc285,	// (0x0003acea) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0003e586) fep_hwr_top_pane_g_ParamLimits

0xc29a,	// (0x0003acff) fep_hwr_top_text_pane_ParamLimits

0x61be,	// (0x00034c23) aid_touch_tab_arrow_arrow_2

0x61b5,	// (0x00034c1a) aid_touch_tab_arrow_left_2

0xc1e0,	// (0x0003ac45) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc217,	// (0x0003ac7c) fep_hwr_prediction_pane

0x7543,	// (0x00035fa8) fep_vkb_prediction_pane

0xc3e3,	// (0x0003ae48) fep_vkb_side_pane_g3_ParamLimits

0xc3e3,	// (0x0003ae48) fep_vkb_side_pane_g3

0x75f3,	// (0x00036058) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7983,	// (0x000363e8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7990,	// (0x000363f5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x0003e630) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc849,	// (0x0003b2ae) fep_hwr_prediction_pane_g1

0xc853,	// (0x0003b2b8) fep_hwr_prediction_pane_g2

0xc85b,	// (0x0003b2c0) fep_hwr_prediction_pane_g3

0xc863,	// (0x0003b2c8) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0003e72c) fep_hwr_prediction_pane_g

0xc849,	// (0x0003b2ae) fep_vkb_prediction_pane_g1

0xc86b,	// (0x0003b2d0) fep_vkb_prediction_pane_g2

0xc873,	// (0x0003b2d8) fep_vkb_prediction_pane_g3

0xc87b,	// (0x0003b2e0) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0003e735) fep_vkb_prediction_pane_g

0x7145,	// (0x00035baa) slider_set_pane_g3

0x7159,	// (0x00035bbe) slider_set_pane_g4

0x7171,	// (0x00035bd6) slider_set_pane_g5

0x7145,	// (0x00035baa) slider_set_pane_g6

0xba20,	// (0x0003a485) slider_set_pane_g7

0x6665,	// (0x000350ca) slider_form_pane_g3

0x666e,	// (0x000350d3) slider_form_pane_g4

0x6676,	// (0x000350db) slider_form_pane_g5

0x6665,	// (0x000350ca) slider_form_pane_g6

0xbb89,	// (0x0003a5ee) slider_form_pane_g7

0x6b69,	// (0x000355ce) slider_set_pane_vc_g3

0x6b72,	// (0x000355d7) slider_set_pane_vc_g4

0x6b7b,	// (0x000355e0) slider_set_pane_vc_g5

0x6b69,	// (0x000355ce) slider_set_pane_vc_g6

0x6b84,	// (0x000355e9) slider_set_pane_vc_g7

0x6d58,	// (0x000357bd) slider_form_pane_vc_g1

0x6d61,	// (0x000357c6) slider_form_pane_vc_g2

0x6d6a,	// (0x000357cf) slider_form_pane_vc_g3

0x6d58,	// (0x000357bd) slider_form_pane_vc_g4

0x6d73,	// (0x000357d8) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0003e503) slider_form_pane_vc_g

0x4041,	// (0x00032aa6) main_idle_act3_pane

0xc883,	// (0x0003b2e8) ai3_links_pane

0xd739,	// (0x0003c19e) popup_ai3_data_window_ParamLimits

0xd739,	// (0x0003c19e) popup_ai3_data_window

0x4041,	// (0x00032aa6) grid_ai3_links_pane

0xd751,	// (0x0003c1b6) cell_ai3_links_pane_ParamLimits

0xd751,	// (0x0003c1b6) cell_ai3_links_pane

0xc88c,	// (0x0003b2f1) bg_popup_sub_pane_cp11

0xc899,	// (0x0003b2fe) cell_ai3_links_pane_g1

0x4041,	// (0x00032aa6) bg_popup_sub_pane_cp12

0xc8be,	// (0x0003b323) heading_ai3_data_pane

0xc8c6,	// (0x0003b32b) list_ai3_gene_pane

0xc8d2,	// (0x0003b337) popup_ai3_data_window_g1

0xc8da,	// (0x0003b33f) heading_ai3_data_pane_g1

0xc8e2,	// (0x0003b347) heading_ai3_data_pane_t1

0xc8f0,	// (0x0003b355) list_double_ai3_gene_pane_ParamLimits

0xc8f0,	// (0x0003b355) list_double_ai3_gene_pane

0xc8fd,	// (0x0003b362) list_single_ai3_gene_pane_ParamLimits

0xc8fd,	// (0x0003b362) list_single_ai3_gene_pane

0x734f,	// (0x00035db4) list_highlight_pane_cp7_ParamLimits

0x734f,	// (0x00035db4) list_highlight_pane_cp7

0xc90a,	// (0x0003b36f) list_single_a13_gene_pane_t1_ParamLimits

0xc90a,	// (0x0003b36f) list_single_a13_gene_pane_t1

0xc921,	// (0x0003b386) list_single_ai3_gene_pane_g1

0xc92a,	// (0x0003b38f) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0003e73e) list_single_ai3_gene_pane_g

0xc932,	// (0x0003b397) list_double_ai3_gene_pane_g1_ParamLimits

0xc932,	// (0x0003b397) list_double_ai3_gene_pane_g1

0xc93e,	// (0x0003b3a3) list_double_ai3_gene_pane_t1_ParamLimits

0xc93e,	// (0x0003b3a3) list_double_ai3_gene_pane_t1

0xc95a,	// (0x0003b3bf) list_double_ai3_gene_pane_t2_ParamLimits

0xc95a,	// (0x0003b3bf) list_double_ai3_gene_pane_t2

0xc96f,	// (0x0003b3d4) list_double_ai3_gene_pane_t3_ParamLimits

0xc96f,	// (0x0003b3d4) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0003e743) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0003e743) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x98c3,	// (0x00038328) aid_size_min_col_2

0xc7f9,	// (0x0003b25e) aid_size_min_msg_ParamLimits

0xc7f9,	// (0x0003b25e) aid_size_min_msg

0xc3f7,	// (0x0003ae5c) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f7,	// (0x0003ae5c) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x0003e5b6) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x0003e5b6) fep_vkb_top_text_pane_g

0x4041,	// (0x00032aa6) main_hc_apps_shell_pane

0xc98c,	// (0x0003b3f1) grid_hc_apps_pane_ParamLimits

0xc98c,	// (0x0003b3f1) grid_hc_apps_pane

0xc99b,	// (0x0003b400) list_hc_apps_pane

0xc9a3,	// (0x0003b408) scroll_pane_cp37_ParamLimits

0xc9a3,	// (0x0003b408) scroll_pane_cp37

0xd769,	// (0x0003c1ce) cell_hc_apps_pane_ParamLimits

0xd769,	// (0x0003c1ce) cell_hc_apps_pane

0xd819,	// (0x0003c27e) cell_hc_apps_pane_g1_ParamLimits

0xd819,	// (0x0003c27e) cell_hc_apps_pane_g1

0xc9af,	// (0x0003b414) cell_hc_apps_pane_g2_ParamLimits

0xc9af,	// (0x0003b414) cell_hc_apps_pane_g2

0xc9cb,	// (0x0003b430) cell_hc_apps_pane_g3_ParamLimits

0xc9cb,	// (0x0003b430) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0003e74a) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0003e74a) cell_hc_apps_pane_g

0xd84a,	// (0x0003c2af) cell_hc_apps_pane_t1_ParamLimits

0xd84a,	// (0x0003c2af) cell_hc_apps_pane_t1

0x41e4,	// (0x00032c49) grid_highlight_pane_cp10_ParamLimits

0x41e4,	// (0x00032c49) grid_highlight_pane_cp10

0xd88a,	// (0x0003c2ef) list_single_hc_apps_pane_ParamLimits

0xd88a,	// (0x0003c2ef) list_single_hc_apps_pane

0xd8fd,	// (0x0003c362) list_single_hc_apps_pane_g1

0xc9ed,	// (0x0003b452) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0003e751) list_single_hc_apps_pane_g

0xca06,	// (0x0003b46b) list_single_hc_apps_pane_g2_copy1

0x9987,	// (0x000383ec) list_single_hc_apps_pane_t1

0x40b1,	// (0x00032b16) bg_set_opt_pane_cp_ParamLimits

0x9e8c,	// (0x000388f1) setting_slider_pane_t1_ParamLimits

0x9ea5,	// (0x0003890a) setting_slider_pane_t2_ParamLimits

0x9ebe,	// (0x00038923) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003dfc9) setting_slider_pane_t_ParamLimits

0x9ed5,	// (0x0003893a) slider_set_pane_ParamLimits

0xaa1f,	// (0x00039484) control_pane_g5_ParamLimits

0xaa1f,	// (0x00039484) control_pane_g5

0x6627,	// (0x0003508c) slider_set_pane_g1_ParamLimits

0xba14,	// (0x0003a479) slider_set_pane_g2_ParamLimits

0x7145,	// (0x00035baa) slider_set_pane_g3_ParamLimits

0x7159,	// (0x00035bbe) slider_set_pane_g4_ParamLimits

0x7171,	// (0x00035bd6) slider_set_pane_g5_ParamLimits

0x7145,	// (0x00035baa) slider_set_pane_g6_ParamLimits

0xba20,	// (0x0003a485) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0003e3d4) slider_set_pane_g_ParamLimits

0x4f3f,	// (0x000339a4) navi_icon_text_pane_ParamLimits

0xb103,	// (0x00039b68) aid_fill_nsta_2_ParamLimits

0xb12d,	// (0x00039b92) aid_touch_tab_arrow_left_ParamLimits

0xb13c,	// (0x00039ba1) aid_touch_tab_arrow_right_ParamLimits

0xb1a9,	// (0x00039c0e) clock_nsta_pane_ParamLimits

0x6197,	// (0x00034bfc) navi_icon_pane_g1_ParamLimits

0x61a3,	// (0x00034c08) navi_text_pane_t1_ParamLimits

0x7080,	// (0x00035ae5) navi_icon_text_pane_g1_ParamLimits

0x708c,	// (0x00035af1) navi_icon_text_pane_t1_ParamLimits

0xd8fd,	// (0x0003c362) list_single_hc_apps_pane_g1_ParamLimits

0xc9ed,	// (0x0003b452) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0003e751) list_single_hc_apps_pane_g_ParamLimits

0xca06,	// (0x0003b46b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9987,	// (0x000383ec) list_single_hc_apps_pane_t1_ParamLimits

0x9ce0,	// (0x00038745) popup_toolbar2_fixed_window_ParamLimits

0x9ce0,	// (0x00038745) popup_toolbar2_fixed_window

0xb023,	// (0x00039a88) popup_toolbar2_float_window

0x4041,	// (0x00032aa6) bg_popup_sub_pane_cp27

0xca22,	// (0x0003b487) grid_toolbar2_float_pane

0x4041,	// (0x00032aa6) bg_popup_sub_pane_cp26

0xca22,	// (0x0003b487) grid_toolbar2_fixed_pane

0xd916,	// (0x0003c37b) cell_toolbar2_fixed_pane_ParamLimits

0xd916,	// (0x0003c37b) cell_toolbar2_fixed_pane

0xd927,	// (0x0003c38c) cell_toolbar2_fixed_pane_g1

0xca2a,	// (0x0003b48f) toolbar2_fixed_button_pane

0x54e7,	// (0x00033f4c) toolbar2_fixed_button_pane_g1

0x54f7,	// (0x00033f5c) toolbar2_fixed_button_pane_g2

0x54ef,	// (0x00033f54) toolbar2_fixed_button_pane_g3

0x5507,	// (0x00033f6c) toolbar2_fixed_button_pane_g4

0x54ff,	// (0x00033f64) toolbar2_fixed_button_pane_g5

0x550f,	// (0x00033f74) toolbar2_fixed_button_pane_g6

0x5517,	// (0x00033f7c) toolbar2_fixed_button_pane_g7

0x5527,	// (0x00033f8c) toolbar2_fixed_button_pane_g8

0x551f,	// (0x00033f84) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0003e2d6) toolbar2_fixed_button_pane_g

0xca32,	// (0x0003b497) cell_toolbar2_float_pane_ParamLimits

0xca32,	// (0x0003b497) cell_toolbar2_float_pane

0xca43,	// (0x0003b4a8) cell_toolbar2_float_pane_g1

0xca2a,	// (0x0003b48f) toolbar2_fixed_button_pane_cp

0xc3aa,	// (0x0003ae0f) fep_vkb_accented_list_pane_ParamLimits

0xc3aa,	// (0x0003ae0f) fep_vkb_accented_list_pane

0xc4d2,	// (0x0003af37) bg_popup_fep_shadow_pane_g9

0x509b,	// (0x00033b00) bg_popup_fep_shadow_pane_cp3

0x47c5,	// (0x0003322a) list_accented_list_pane

0xca4c,	// (0x0003b4b1) list_single_accented_list_pane_ParamLimits

0xca4c,	// (0x0003b4b1) list_single_accented_list_pane

0x509b,	// (0x00033b00) list_highlight_pane_cp10

0xca5d,	// (0x0003b4c2) list_single_accented_list_pane_t1

0xaf73,	// (0x000399d8) popup_slider_window_ParamLimits

0xaf73,	// (0x000399d8) popup_slider_window

0x818e,	// (0x00036bf3) aid_indentation_list_msg

0xd9dc,	// (0x0003c441) bg_popup_window_pane_cp19

0xcac9,	// (0x0003b52e) popup_slider_window_g1

0xcae5,	// (0x0003b54a) popup_slider_window_g2

0xcb01,	// (0x0003b566) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0003e756) popup_slider_window_g

0xcb1d,	// (0x0003b582) popup_slider_window_t1

0xcb63,	// (0x0003b5c8) small_volume_slider_vertical_pane

0x738a,	// (0x00035def) small_volume_slider_vertical_pane_g1

0x738a,	// (0x00035def) small_volume_slider_vertical_pane_g2

0xcb7f,	// (0x0003b5e4) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0003e768) small_volume_slider_vertical_pane_g

0x9ab0,	// (0x00038515) area_side_right_pane_ParamLimits

0x9ab0,	// (0x00038515) area_side_right_pane

0xcb88,	// (0x0003b5ed) aid_size_side_button_ParamLimits

0xcb88,	// (0x0003b5ed) aid_size_side_button

0xcb9c,	// (0x0003b601) grid_sctrl_middle_pane_ParamLimits

0xcb9c,	// (0x0003b601) grid_sctrl_middle_pane

0xcbbc,	// (0x0003b621) sctrl_sk_bottom_pane

0xcbcd,	// (0x0003b632) sctrl_sk_top_pane

0xcbdf,	// (0x0003b644) aid_touch_sctrl_top

0x41e4,	// (0x00032c49) bg_sctrl_sk_pane_ParamLimits

0x41e4,	// (0x00032c49) bg_sctrl_sk_pane

0xcbec,	// (0x0003b651) sctrl_sk_top_pane_g1

0xcbf9,	// (0x0003b65e) sctrl_sk_top_pane_t1

0xcbdf,	// (0x0003b644) aid_touch_sctrl_bottom

0x41e4,	// (0x00032c49) bg_sctrl_sk_pane_cp_ParamLimits

0x41e4,	// (0x00032c49) bg_sctrl_sk_pane_cp

0xcc14,	// (0x0003b679) sctrl_sk_bottom_pane_g1

0xcbf9,	// (0x0003b65e) sctrl_sk_bottom_pane_t1

0xcc1d,	// (0x0003b682) cell_sctrl_middle_pane_ParamLimits

0xcc1d,	// (0x0003b682) cell_sctrl_middle_pane

0xcc38,	// (0x0003b69d) aid_touch_sctrl_middle_ParamLimits

0xcc38,	// (0x0003b69d) aid_touch_sctrl_middle

0x46a6,	// (0x0003310b) bg_sctrl_middle_pane_ParamLimits

0x46a6,	// (0x0003310b) bg_sctrl_middle_pane

0x75f3,	// (0x00036058) cell_sctrl_middle_pane_g1_ParamLimits

0x75f3,	// (0x00036058) cell_sctrl_middle_pane_g1

0xcc4a,	// (0x0003b6af) cell_sctrl_middle_pane_g2_ParamLimits

0xcc4a,	// (0x0003b6af) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0003e774) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0003e774) cell_sctrl_middle_pane_g

0x54e7,	// (0x00033f4c) bg_sctrl_middle_pane_g1

0x54f7,	// (0x00033f5c) bg_sctrl_middle_pane_g2

0x54ef,	// (0x00033f54) bg_sctrl_middle_pane_g3

0x5507,	// (0x00033f6c) bg_sctrl_middle_pane_g4

0x54ff,	// (0x00033f64) bg_sctrl_middle_pane_g5

0x550f,	// (0x00033f74) bg_sctrl_middle_pane_g6

0x5517,	// (0x00033f7c) bg_sctrl_middle_pane_g7

0x5527,	// (0x00033f8c) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0003e779) bg_sctrl_middle_pane_g

0x551f,	// (0x00033f84) bg_sctrl_middle_pane_g8_copy1

0x54e7,	// (0x00033f4c) bg_sctrl_sk_pane_g1

0x54f7,	// (0x00033f5c) bg_sctrl_sk_pane_g2

0x54ef,	// (0x00033f54) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0003e2d6) bg_sctrl_sk_pane_g

0x45df,	// (0x00033044) aid_size_touch_scroll_bar

0x5507,	// (0x00033f6c) bg_sctrl_sk_pane_g4

0x54ff,	// (0x00033f64) bg_sctrl_sk_pane_g5

0x550f,	// (0x00033f74) bg_sctrl_sk_pane_g6

0x5517,	// (0x00033f7c) bg_sctrl_sk_pane_g7

0x5527,	// (0x00033f8c) bg_sctrl_sk_pane_g8

0x551f,	// (0x00033f84) bg_sctrl_sk_pane_g9

0xabec,	// (0x00039651) popup_fep_china_hwr2_fs_candidate_window

0xabf6,	// (0x0003965b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xabf6,	// (0x0003965b) popup_fep_china_hwr2_fs_control_window

0x75f3,	// (0x00036058) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0003e76f) sctrl_sk_top_pane_g

0xda56,	// (0x0003c4bb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda56,	// (0x0003c4bb) aid_fep_china_hwr2_fs_cell

0xda68,	// (0x0003c4cd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda68,	// (0x0003c4cd) bg_popup_fep_shadow_pane_cp4

0xda7f,	// (0x0003c4e4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda7f,	// (0x0003c4e4) bg_popup_fep_shadow_pane_cp5

0xda91,	// (0x0003c4f6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda91,	// (0x0003c4f6) popup_fep_china_hwr2_fs_control_bar_grid

0xdaa1,	// (0x0003c506) popup_fep_china_hwr2_fs_control_funtion_grid

0xcc5a,	// (0x0003b6bf) aid_fep_china_hwr2_fs_candi_cell

0x4041,	// (0x00032aa6) bg_popup_fep_shadow_pane_cp6

0xcc64,	// (0x0003b6c9) popup_fep_china_hwr2_fs_candidate_grid

0xdaa9,	// (0x0003c50e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdaa9,	// (0x0003c50e) cell_fep_china_hwr2_fs_funtion_grid

0x738a,	// (0x00035def) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcc6e,	// (0x0003b6d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcc6e,	// (0x0003b6d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcc7c,	// (0x0003b6e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcc7c,	// (0x0003b6e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0003e78a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0003e78a) cell_fep_china_hwr2_fs_funtion_grid_g

0xdac1,	// (0x0003c526) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdac1,	// (0x0003c526) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdad6,	// (0x0003c53b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdad6,	// (0x0003c53b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0003e78f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0003e78f) cell_fep_china_hwr2_fs_funtion_grid_t

0xcc92,	// (0x0003b6f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcc9a,	// (0x0003b6ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcca2,	// (0x0003b707) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0003e794) popup_fep_china_hwr2_fs_control_bar_grid_g

0xccaa,	// (0x0003b70f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xccaa,	// (0x0003b70f) cell_fep_china_hwr2_fs_candidate_grid

0xccc3,	// (0x0003b728) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcccb,	// (0x0003b730) popup_fep_china_hwr2_fs_candidate_grid_g21

0x738a,	// (0x00035def) cell_fep_china_hwr2_fs_candidate_grid_g1

0x738a,	// (0x00035def) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x0003e5bb) cell_fep_china_hwr2_fs_candidate_grid_g

0xccd3,	// (0x0003b738) cell_fep_china_hwr2_fs_candidate_grid_t1

0x531c,	// (0x00033d81) clock_nsta_pane_cp_24_ParamLimits

0x531c,	// (0x00033d81) clock_nsta_pane_cp_24

0x5384,	// (0x00033de9) indicator_nsta_pane_cp_24_ParamLimits

0x5384,	// (0x00033de9) indicator_nsta_pane_cp_24

0x60b5,	// (0x00034b1a) heading_pane_g1

0x0001,

0xf8d6,	// (0x0003e33b) heading_pane_g

0x677e,	// (0x000351e3) grid_sct_catagory_button_pane

0x64e8,	// (0x00034f4d) scroll_pane_cp5_ParamLimits

0x70b2,	// (0x00035b17) button_value_adjust_pane_cp5_ParamLimits

0x70b2,	// (0x00035b17) button_value_adjust_pane_cp5

0x71b2,	// (0x00035c17) form2_midp_time_pane_ParamLimits

0xcce1,	// (0x0003b746) cell_sct_catagory_button_pane_ParamLimits

0xcce1,	// (0x0003b746) cell_sct_catagory_button_pane

0x734f,	// (0x00035db4) bg_button_pane_cp01_ParamLimits

0x734f,	// (0x00035db4) bg_button_pane_cp01

0x738a,	// (0x00035def) cell_sct_catagory_button_pane_g1

0xafb2,	// (0x00039a17) popup_tb_extension_window

0xdaf2,	// (0x0003c557) aid_size_cell_ext_ParamLimits

0xdaf2,	// (0x0003c557) aid_size_cell_ext

0x41e4,	// (0x00032c49) bg_tb_trans_pane_cp1_ParamLimits

0x41e4,	// (0x00032c49) bg_tb_trans_pane_cp1

0xdb12,	// (0x0003c577) grid_tb_ext_pane_ParamLimits

0xdb12,	// (0x0003c577) grid_tb_ext_pane

0xdb42,	// (0x0003c5a7) cell_tb_ext_pane_ParamLimits

0xdb42,	// (0x0003c5a7) cell_tb_ext_pane

0xdb59,	// (0x0003c5be) cell_tb_ext_pane_g1_ParamLimits

0xdb59,	// (0x0003c5be) cell_tb_ext_pane_g1

0xccf3,	// (0x0003b758) cell_tb_ext_pane_t1

0x41e4,	// (0x00032c49) list_highlight_pane_cp11_ParamLimits

0x41e4,	// (0x00032c49) list_highlight_pane_cp11

0x9cff,	// (0x00038764) popup_uni_indicator_window_ParamLimits

0x9cff,	// (0x00038764) popup_uni_indicator_window

0x46a6,	// (0x0003310b) bg_popup_sub_pane_cp14

0xcd0e,	// (0x0003b773) list_uniindi_pane

0xcd1a,	// (0x0003b77f) uniindi_top_pane

0x41e4,	// (0x00032c49) bg_uniindi_top_pane

0xdb88,	// (0x0003c5ed) uniindi_top_pane_g1

0xdb9e,	// (0x0003c603) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0003e79b) uniindi_top_pane_g

0xdbc8,	// (0x0003c62d) uniindi_top_pane_t1

0xdbf2,	// (0x0003c657) list_single_uniindi_pane_ParamLimits

0xdbf2,	// (0x0003c657) list_single_uniindi_pane

0x738a,	// (0x00035def) bg_uniindi_top_pane_g1

0xdc04,	// (0x0003c669) list_single_uniindi_pane_g1

0xdc17,	// (0x0003c67c) list_single_uniindi_pane_t1

0x4041,	// (0x00032aa6) control_bg_pane

0xdc3c,	// (0x0003c6a1) bg_sctrl_sk_pane_cp1

0xdc45,	// (0x0003c6aa) bg_sctrl_sk_pane_cp2

0xdc4e,	// (0x0003c6b3) control_bg_pane_g1

0xdc57,	// (0x0003c6bc) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0003e7a4) control_bg_pane_g

0x6f6b,	// (0x000359d0) cell_indicator_nsta_pane_g1_ParamLimits

0xbed0,	// (0x0003a935) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x0003e51f) cell_indicator_nsta_pane_g_ParamLimits

0x968c,	// (0x000380f1) form2_midp_time_pane_t1_ParamLimits

0x4421,	// (0x00032e86) main_idle_act4_pane_ParamLimits

0x4421,	// (0x00032e86) main_idle_act4_pane

0xafb2,	// (0x00039a17) popup_tb_extension_window_ParamLimits

0xdb32,	// (0x0003c597) tb_ext_find_pane_ParamLimits

0xdb32,	// (0x0003c597) tb_ext_find_pane

0xdc60,	// (0x0003c6c5) ai_gene_pane_1_cp1

0x512f,	// (0x00033b94) ai_gene_pane_2_cp1

0xdc68,	// (0x0003c6cd) list_single_idle_plugin_calendar_pane

0xdc71,	// (0x0003c6d6) list_single_idle_plugin_notification_pane

0xdc7a,	// (0x0003c6df) list_single_idle_plugin_player_pane

0xdc83,	// (0x0003c6e8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc83,	// (0x0003c6e8) list_single_idle_plugin_shortcut_pane

0xdca5,	// (0x0003c70a) main_idle_act4_pane_t1

0xdcb7,	// (0x0003c71c) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0003e7a9) main_idle_act4_pane_t

0xdcc9,	// (0x0003c72e) middle_sk_idle_act4_pane_ParamLimits

0xdcc9,	// (0x0003c72e) middle_sk_idle_act4_pane

0xdcdf,	// (0x0003c744) popup_clock_digital_analogue_window_cp2

0xdcf9,	// (0x0003c75e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcf9,	// (0x0003c75e) shortcut_wheel_idle_act4_pane

0x738a,	// (0x00035def) shortcut_wheel_idle_act4_pane_g1

0x738a,	// (0x00035def) shortcut_wheel_idle_act4_pane_g2

0x738a,	// (0x00035def) shortcut_wheel_idle_act4_pane_g3

0x738a,	// (0x00035def) shortcut_wheel_idle_act4_pane_g4

0x738a,	// (0x00035def) shortcut_wheel_idle_act4_pane_g5

0xdd0d,	// (0x0003c772) shortcut_wheel_idle_act4_pane_g6

0xdd15,	// (0x0003c77a) shortcut_wheel_idle_act4_pane_g7

0xdd1d,	// (0x0003c782) shortcut_wheel_idle_act4_pane_g8

0xdd25,	// (0x0003c78a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0003e7ae) shortcut_wheel_idle_act4_pane_g

0x75f3,	// (0x00036058) middle_sk_idle_act4_pane_g1_ParamLimits

0x75f3,	// (0x00036058) middle_sk_idle_act4_pane_g1

0xdd89,	// (0x0003c7ee) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd89,	// (0x0003c7ee) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0003e7d1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0003e7d1) middle_sk_idle_act4_pane_g

0xdd95,	// (0x0003c7fa) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd95,	// (0x0003c7fa) middle_sk_idle_act4_pane_t1

0xddb2,	// (0x0003c817) grid_ai_shortcut_pane_ParamLimits

0xddb2,	// (0x0003c817) grid_ai_shortcut_pane

0xddcb,	// (0x0003c830) list_highlight_pane_cp16_ParamLimits

0xddcb,	// (0x0003c830) list_highlight_pane_cp16

0xddd8,	// (0x0003c83d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddd8,	// (0x0003c83d) list_single_idle_plugin_shortcut_pane_g1

0xdde4,	// (0x0003c849) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdde4,	// (0x0003c849) list_single_idle_plugin_shortcut_pane_g2

0xddfc,	// (0x0003c861) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddfc,	// (0x0003c861) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0003e7d6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0003e7d6) list_single_idle_plugin_shortcut_pane_g

0xde0f,	// (0x0003c874) cell_ai_shortcut_pane_ParamLimits

0xde0f,	// (0x0003c874) cell_ai_shortcut_pane

0xde30,	// (0x0003c895) cell_ai_shortcut_pane_g1_ParamLimits

0xde30,	// (0x0003c895) cell_ai_shortcut_pane_g1

0xdc60,	// (0x0003c6c5) ai_gene_pane_1_cp2

0xde52,	// (0x0003c8b7) ai_gene_pane_2_cp2

0xde5a,	// (0x0003c8bf) list_highlight_pane_cp15

0xde63,	// (0x0003c8c8) list_single_idle_plugin_calendar_pane_g1

0xde5a,	// (0x0003c8bf) list_highlight_pane_cp17

0xde6b,	// (0x0003c8d0) list_single_idle_plugin_calendar_pane_g1_copy1

0xde73,	// (0x0003c8d8) list_single_idle_plugin_player_pane_g1

0x6993,	// (0x000353f8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0003e7dd) list_single_idle_plugin_player_pane_g

0xde7b,	// (0x0003c8e0) list_single_idle_plugin_player_pane_t1

0xde89,	// (0x0003c8ee) list_single_idle_plugin_player_pane_t2

0xde97,	// (0x0003c8fc) list_single_idle_plugin_player_pane_t3

0xdea5,	// (0x0003c90a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0003e7e2) list_single_idle_plugin_player_pane_t

0xdeb3,	// (0x0003c918) wait_bar_pane_cp15

0xdebb,	// (0x0003c920) grid_ai_notification_pane

0x6993,	// (0x000353f8) list_single_idle_plugin_notification_pane_g1

0xdec4,	// (0x0003c929) cell_ai_notification_pane_ParamLimits

0xdec4,	// (0x0003c929) cell_ai_notification_pane

0xded1,	// (0x0003c936) cell_ai_notification_pane_g1

0xded9,	// (0x0003c93e) cell_ai_notification_pane_t1

0xdee7,	// (0x0003c94c) tb_ext_find_button_pane

0xdeef,	// (0x0003c954) tb_ext_find_pane_g1

0xdef7,	// (0x0003c95c) tb_ext_find_pane_t1

0x4be0,	// (0x00033645) tb_ext_find_button_pane_g1

0xdf05,	// (0x0003c96a) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0003e7eb) tb_ext_find_button_pane_g

0xdca5,	// (0x0003c70a) main_idle_act4_pane_t1_ParamLimits

0xdcb7,	// (0x0003c71c) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0003e7a9) main_idle_act4_pane_t_ParamLimits

0xdcdf,	// (0x0003c744) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdced,	// (0x0003c752) sat_plugin_idle_act4_pane_ParamLimits

0xdced,	// (0x0003c752) sat_plugin_idle_act4_pane

0xdf0e,	// (0x0003c973) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf0e,	// (0x0003c973) sat_plugin_idle_act4_pane_t1

0xdf21,	// (0x0003c986) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf21,	// (0x0003c986) sat_plugin_idle_act4_pane_t2

0xdf34,	// (0x0003c999) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf34,	// (0x0003c999) sat_plugin_idle_act4_pane_t3

0xdf47,	// (0x0003c9ac) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf47,	// (0x0003c9ac) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0003e7f0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0003e7f0) sat_plugin_idle_act4_pane_t

0x9c48,	// (0x000386ad) popup_battery_window_ParamLimits

0x9c48,	// (0x000386ad) popup_battery_window

0x41e4,	// (0x00032c49) bg_popup_sub_pane_cp25_ParamLimits

0x41e4,	// (0x00032c49) bg_popup_sub_pane_cp25

0xdf5a,	// (0x0003c9bf) popup_battery_window_g1_ParamLimits

0xdf5a,	// (0x0003c9bf) popup_battery_window_g1

0xdf66,	// (0x0003c9cb) popup_battery_window_t1_ParamLimits

0xdf66,	// (0x0003c9cb) popup_battery_window_t1

0xdf78,	// (0x0003c9dd) popup_battery_window_t2_ParamLimits

0xdf78,	// (0x0003c9dd) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0003e7f9) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0003e7f9) popup_battery_window_t

0xa865,	// (0x000392ca) midp_canvas_pane_ParamLimits

0xa8c9,	// (0x0003932e) midp_keypad_pane_ParamLimits

0xa8c9,	// (0x0003932e) midp_keypad_pane

0x4816,	// (0x0003327b) main_midp_pane_ParamLimits

0x7047,	// (0x00035aac) signal_pane_g2_cp_ParamLimits

0xdf95,	// (0x0003c9fa) aid_size_cell_midp_keypad_ParamLimits

0xdf95,	// (0x0003c9fa) aid_size_cell_midp_keypad

0xdfaf,	// (0x0003ca14) midp_keyp_game_grid_pane_ParamLimits

0xdfaf,	// (0x0003ca14) midp_keyp_game_grid_pane

0xdfcf,	// (0x0003ca34) midp_keyp_rocker_pane_ParamLimits

0xdfcf,	// (0x0003ca34) midp_keyp_rocker_pane

0xdffa,	// (0x0003ca5f) midp_keyp_sk_left_pane_ParamLimits

0xdffa,	// (0x0003ca5f) midp_keyp_sk_left_pane

0xe054,	// (0x0003cab9) midp_keyp_sk_right_pane_ParamLimits

0xe054,	// (0x0003cab9) midp_keyp_sk_right_pane

0x4041,	// (0x00032aa6) bg_button_pane_cp03

0xe0ae,	// (0x0003cb13) midp_keyp_sk_left_pane_g1

0x4041,	// (0x00032aa6) bg_button_pane_cp04

0xe0ae,	// (0x0003cb13) midp_keyp_sk_right_pane_g1

0x738a,	// (0x00035def) midp_keyp_rocker_pane_g1

0xe0b7,	// (0x0003cb1c) keyp_game_cell_pane_ParamLimits

0xe0b7,	// (0x0003cb1c) keyp_game_cell_pane

0x4041,	// (0x00032aa6) bg_button_pane_cp02

0xe0ca,	// (0x0003cb2f) keyp_game_cell_pane_g1

0x9c7e,	// (0x000386e3) popup_fep_vkb2_window_ParamLimits

0x9c7e,	// (0x000386e3) popup_fep_vkb2_window

0xcd35,	// (0x0003b79a) aid_size_cell_vkb2_ParamLimits

0xcd35,	// (0x0003b79a) aid_size_cell_vkb2

0xcd89,	// (0x0003b7ee) popup_fep_vkb2_window_g1_ParamLimits

0xcd89,	// (0x0003b7ee) popup_fep_vkb2_window_g1

0xcdc9,	// (0x0003b82e) vkb2_area_bottom_pane_ParamLimits

0xcdc9,	// (0x0003b82e) vkb2_area_bottom_pane

0xce15,	// (0x0003b87a) vkb2_area_keypad_pane_ParamLimits

0xce15,	// (0x0003b87a) vkb2_area_keypad_pane

0xce57,	// (0x0003b8bc) vkb2_area_top_pane_ParamLimits

0xce57,	// (0x0003b8bc) vkb2_area_top_pane

0xced1,	// (0x0003b936) vkb2_top_entry_pane_ParamLimits

0xced1,	// (0x0003b936) vkb2_top_entry_pane

0xcefb,	// (0x0003b960) vkb2_top_grid_left_pane_ParamLimits

0xcefb,	// (0x0003b960) vkb2_top_grid_left_pane

0xcf19,	// (0x0003b97e) vkb2_top_grid_right_pane_ParamLimits

0xcf19,	// (0x0003b97e) vkb2_top_grid_right_pane

0xcf37,	// (0x0003b99c) vkb2_cell_keypad_pane_ParamLimits

0xcf37,	// (0x0003b99c) vkb2_cell_keypad_pane

0xd008,	// (0x0003ba6d) vkb2_area_bottom_grid_pane_ParamLimits

0xd008,	// (0x0003ba6d) vkb2_area_bottom_grid_pane

0xd02e,	// (0x0003ba93) vkb2_area_bottom_pane_g1_ParamLimits

0xd02e,	// (0x0003ba93) vkb2_area_bottom_pane_g1

0xd052,	// (0x0003bab7) vkb2_area_bottom_pane_g2_ParamLimits

0xd052,	// (0x0003bab7) vkb2_area_bottom_pane_g2

0xd080,	// (0x0003bae5) vkb2_area_bottom_pane_g3_ParamLimits

0xd080,	// (0x0003bae5) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0003e7fe) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0003e7fe) vkb2_area_bottom_pane_g

0xd0e1,	// (0x0003bb46) vkb2_top_cell_left_pane_ParamLimits

0xd0e1,	// (0x0003bb46) vkb2_top_cell_left_pane

0xe31f,	// (0x0003cd84) vkb2_top_entry_pane_g1_ParamLimits

0xe31f,	// (0x0003cd84) vkb2_top_entry_pane_g1

0xe32d,	// (0x0003cd92) vkb2_top_entry_pane_t1_ParamLimits

0xe32d,	// (0x0003cd92) vkb2_top_entry_pane_t1

0xe0db,	// (0x0003cb40) vkb2_top_entry_pane_t2_ParamLimits

0xe0db,	// (0x0003cb40) vkb2_top_entry_pane_t2

0xe10d,	// (0x0003cb72) vkb2_top_entry_pane_t3_ParamLimits

0xe10d,	// (0x0003cb72) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0003e805) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0003e805) vkb2_top_entry_pane_t

0xd12e,	// (0x0003bb93) vkb2_top_grid_right_pane_g1_ParamLimits

0xd12e,	// (0x0003bb93) vkb2_top_grid_right_pane_g1

0xd144,	// (0x0003bba9) vkb2_top_grid_right_pane_g2_ParamLimits

0xd144,	// (0x0003bba9) vkb2_top_grid_right_pane_g2

0xd15c,	// (0x0003bbc1) vkb2_top_grid_right_pane_g3_ParamLimits

0xd15c,	// (0x0003bbc1) vkb2_top_grid_right_pane_g3

0xd174,	// (0x0003bbd9) vkb2_top_grid_right_pane_g4_ParamLimits

0xd174,	// (0x0003bbd9) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0003e80c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0003e80c) vkb2_top_grid_right_pane_g

0xd18a,	// (0x0003bbef) vkb2_top_cell_left_pane_g1

0xd1a1,	// (0x0003bc06) vkb2_cell_keypad_pane_g1_ParamLimits

0xd1a1,	// (0x0003bc06) vkb2_cell_keypad_pane_g1

0xe131,	// (0x0003cb96) vkb2_cell_keypad_pane_t1_ParamLimits

0xe131,	// (0x0003cb96) vkb2_cell_keypad_pane_t1

0xd1af,	// (0x0003bc14) vkb2_cell_bottom_grid_pane_ParamLimits

0xd1af,	// (0x0003bc14) vkb2_cell_bottom_grid_pane

0xd1e8,	// (0x0003bc4d) vkb2_cell_bottom_grid_pane_g1

0xdd2d,	// (0x0003c792) aid_call2_pane_cp02

0xdd35,	// (0x0003c79a) aid_call_pane_cp02

0xdd3d,	// (0x0003c7a2) clock_digital_number_pane_cp10

0xdd45,	// (0x0003c7aa) clock_digital_number_pane_cp11

0xdd4d,	// (0x0003c7b2) clock_digital_number_pane_cp12

0xdd55,	// (0x0003c7ba) clock_digital_number_pane_cp13

0xdd5d,	// (0x0003c7c2) clock_digital_separator_pane_cp10

0x4be0,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g1

0x4be0,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g2

0xdd65,	// (0x0003c7ca) popup_clock_digital_analogue_window_cp2_g3

0x4be0,	// (0x00033645) popup_clock_digital_analogue_window_cp2_g4

0xdd65,	// (0x0003c7ca) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0003e7c1) popup_clock_digital_analogue_window_cp2_g

0xdd6d,	// (0x0003c7d2) popup_clock_digital_analogue_window_cp2_t1

0xdd7b,	// (0x0003c7e0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0003e7cc) popup_clock_digital_analogue_window_cp2_t

0x738a,	// (0x00035def) clock_digital_number_pane_cp10_g1

0x738a,	// (0x00035def) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x0003e5bb) clock_digital_number_pane_cp10_g

0x738a,	// (0x00035def) clock_digital_separator_pane_cp10_g1

0x738a,	// (0x00035def) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x0003e5bb) clock_digital_separator_pane_cp10_g

0xdbaa,	// (0x0003c60f) uniindi_top_pane_g3

0xdbbb,	// (0x0003c620) uniindi_top_pane_g4

0xcfc2,	// (0x0003ba27) vkb2_row_keypad_pane_ParamLimits

0xcfc2,	// (0x0003ba27) vkb2_row_keypad_pane

0xd208,	// (0x0003bc6d) vkb2_cell_t_keypad_pane_ParamLimits

0xd208,	// (0x0003bc6d) vkb2_cell_t_keypad_pane

0xd218,	// (0x0003bc7d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd218,	// (0x0003bc7d) vkb2_cell_t_keypad_pane_cp08

0xd22b,	// (0x0003bc90) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd22b,	// (0x0003bc90) vkb2_cell_t_keypad_pane_cp09

0xd23f,	// (0x0003bca4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd23f,	// (0x0003bca4) vkb2_cell_t_keypad_pane_cp01

0xd250,	// (0x0003bcb5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd250,	// (0x0003bcb5) vkb2_cell_t_keypad_pane_cp02

0xd261,	// (0x0003bcc6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd261,	// (0x0003bcc6) vkb2_cell_t_keypad_pane_cp03

0xd272,	// (0x0003bcd7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd272,	// (0x0003bcd7) vkb2_cell_t_keypad_pane_cp04

0xd283,	// (0x0003bce8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd283,	// (0x0003bce8) vkb2_cell_t_keypad_pane_cp05

0xd294,	// (0x0003bcf9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd294,	// (0x0003bcf9) vkb2_cell_t_keypad_pane_cp06

0xd2a5,	// (0x0003bd0a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd2a5,	// (0x0003bd0a) vkb2_cell_t_keypad_pane_cp07

0xd2b6,	// (0x0003bd1b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd2b6,	// (0x0003bd1b) vkb2_cell_t_keypad_pane_cp10

0x75f3,	// (0x00036058) vkb2_cell_t_keypad_pane_g1

0xe148,	// (0x0003cbad) vkb2_cell_t_keypad_pane_t1

0x4041,	// (0x00032aa6) popup_grid_graphic2_window

0xe35f,	// (0x0003cdc4) aid_size_cell_graphic2_ParamLimits

0xe35f,	// (0x0003cdc4) aid_size_cell_graphic2

0xe397,	// (0x0003cdfc) bg_popup_window_pane_cp21_ParamLimits

0xe397,	// (0x0003cdfc) bg_popup_window_pane_cp21

0xe3a5,	// (0x0003ce0a) graphic2_pages_pane_ParamLimits

0xe3a5,	// (0x0003ce0a) graphic2_pages_pane

0xe3eb,	// (0x0003ce50) grid_graphic2_control_pane_ParamLimits

0xe3eb,	// (0x0003ce50) grid_graphic2_control_pane

0xe429,	// (0x0003ce8e) grid_graphic2_pane_ParamLimits

0xe429,	// (0x0003ce8e) grid_graphic2_pane

0xe49d,	// (0x0003cf02) cell_graphic2_pane

0x4041,	// (0x00032aa6) main_comp_mode_pane

0xc8c6,	// (0x0003b32b) list_ai3_gene_pane_ParamLimits

0xd9dc,	// (0x0003c441) bg_popup_window_pane_cp19_ParamLimits

0xca6b,	// (0x0003b4d0) bg_touch_area_indi_pane_ParamLimits

0xca6b,	// (0x0003b4d0) bg_touch_area_indi_pane

0xca81,	// (0x0003b4e6) bg_touch_area_indi_pane_cp01_ParamLimits

0xca81,	// (0x0003b4e6) bg_touch_area_indi_pane_cp01

0xca97,	// (0x0003b4fc) bg_touch_area_indi_pane_cp02_ParamLimits

0xca97,	// (0x0003b4fc) bg_touch_area_indi_pane_cp02

0xcaaf,	// (0x0003b514) bg_touch_area_indi_pane_cp03_ParamLimits

0xcaaf,	// (0x0003b514) bg_touch_area_indi_pane_cp03

0xcac9,	// (0x0003b52e) popup_slider_window_g1_ParamLimits

0xcae5,	// (0x0003b54a) popup_slider_window_g2_ParamLimits

0xcb01,	// (0x0003b566) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0003e756) popup_slider_window_g_ParamLimits

0xcb1d,	// (0x0003b582) popup_slider_window_t1_ParamLimits

0xcb63,	// (0x0003b5c8) small_volume_slider_vertical_pane_ParamLimits

0xe49d,	// (0x0003cf02) cell_graphic2_pane_ParamLimits

0xe4eb,	// (0x0003cf50) bg_button_pane_cp10_ParamLimits

0xe4eb,	// (0x0003cf50) bg_button_pane_cp10

0xe4fe,	// (0x0003cf63) bg_button_pane_cp11_ParamLimits

0xe4fe,	// (0x0003cf63) bg_button_pane_cp11

0xe511,	// (0x0003cf76) graphic2_pages_pane_g1_ParamLimits

0xe511,	// (0x0003cf76) graphic2_pages_pane_g1

0xe52c,	// (0x0003cf91) graphic2_pages_pane_g2_ParamLimits

0xe52c,	// (0x0003cf91) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0003e81a) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0003e81a) graphic2_pages_pane_g

0xe544,	// (0x0003cfa9) graphic2_pages_pane_t1_ParamLimits

0xe544,	// (0x0003cfa9) graphic2_pages_pane_t1

0xe55a,	// (0x0003cfbf) cell_graphic2_control_pane_ParamLimits

0xe55a,	// (0x0003cfbf) cell_graphic2_control_pane

0xe57b,	// (0x0003cfe0) cell_graphic2_pane_g1_ParamLimits

0xe57b,	// (0x0003cfe0) cell_graphic2_pane_g1

0xe588,	// (0x0003cfed) cell_graphic2_pane_g2_ParamLimits

0xe588,	// (0x0003cfed) cell_graphic2_pane_g2

0xe595,	// (0x0003cffa) cell_graphic2_pane_g3_ParamLimits

0xe595,	// (0x0003cffa) cell_graphic2_pane_g3

0xe5a2,	// (0x0003d007) cell_graphic2_pane_g4_ParamLimits

0xe5a2,	// (0x0003d007) cell_graphic2_pane_g4

0xe5af,	// (0x0003d014) cell_graphic2_pane_g5_ParamLimits

0xe5af,	// (0x0003d014) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0003e81f) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0003e81f) cell_graphic2_pane_g

0xe5ca,	// (0x0003d02f) cell_graphic2_pane_t1_ParamLimits

0xe5ca,	// (0x0003d02f) cell_graphic2_pane_t1

0x55d7,	// (0x0003403c) grid_highlight_pane_cp11_ParamLimits

0x55d7,	// (0x0003403c) grid_highlight_pane_cp11

0x41e4,	// (0x00032c49) bg_button_pane_cp05

0xe5f3,	// (0x0003d058) cell_graphic2_control_pane_g1

0x738a,	// (0x00035def) bg_touch_area_indi_pane_g1

0xe15a,	// (0x0003cbbf) aid_cmod_rocker_key_size

0xe164,	// (0x0003cbc9) aid_cmode_itu_key_size

0xe16e,	// (0x0003cbd3) main_cmode_video_pane

0xe178,	// (0x0003cbdd) main_comp_mode_itu_pane

0xe184,	// (0x0003cbe9) main_comp_mode_rocker_pane

0xe190,	// (0x0003cbf5) cell_cmode_rocker_pane_ParamLimits

0xe190,	// (0x0003cbf5) cell_cmode_rocker_pane

0xe1a2,	// (0x0003cc07) cell_cmode_itu_pane_ParamLimits

0xe1a2,	// (0x0003cc07) cell_cmode_itu_pane

0x46a6,	// (0x0003310b) bg_button_pane_cp06_ParamLimits

0x46a6,	// (0x0003310b) bg_button_pane_cp06

0x75f3,	// (0x00036058) cell_cmode_rocker_pane_g1_ParamLimits

0x75f3,	// (0x00036058) cell_cmode_rocker_pane_g1

0xcc6e,	// (0x0003b6d3) cell_cmode_rocker_pane_g2_ParamLimits

0xcc6e,	// (0x0003b6d3) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0003e82f) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0003e82f) cell_cmode_rocker_pane_g

0x4041,	// (0x00032aa6) bg_button_pane_cp07

0xe1b7,	// (0x0003cc1c) cell_cmode_itu_pane_g1

0xe1c0,	// (0x0003cc25) cell_cmode_itu_pane_t1

0xe1ce,	// (0x0003cc33) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0003e834) cell_cmode_itu_pane_t

0xdc2c,	// (0x0003c691) aid_touch_ctrl_left

0xdc34,	// (0x0003c699) aid_touch_ctrl_right

0x4041,	// (0x00032aa6) compa_mode_pane

0xe61b,	// (0x0003d080) aid_cmod_rocker_key_size_cp

0xe625,	// (0x0003d08a) aid_cmode_itu_key_size_cp

0xe1dc,	// (0x0003cc41) compa_mode_pane_g1

0xe1e4,	// (0x0003cc49) compa_mode_pane_g2

0xe1ec,	// (0x0003cc51) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0003e839) compa_mode_pane_g

0xe62f,	// (0x0003d094) main_comp_mode_itu_pane_cp

0xe637,	// (0x0003d09c) main_comp_mode_rocker_pane_cp

0xe63f,	// (0x0003d0a4) cell_cmode_itu_pane_cp_ParamLimits

0xe63f,	// (0x0003d0a4) cell_cmode_itu_pane_cp

0xe654,	// (0x0003d0b9) cell_cmode_rocker_pane_cp_ParamLimits

0xe654,	// (0x0003d0b9) cell_cmode_rocker_pane_cp

0x46a6,	// (0x0003310b) bg_button_pane_cp06_cp_ParamLimits

0x46a6,	// (0x0003310b) bg_button_pane_cp06_cp

0x75f3,	// (0x00036058) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x75f3,	// (0x00036058) cell_cmode_rocker_pane_g1_cp

0x738a,	// (0x00035def) cell_cmode_rocker_pane_g2_cp

0x4041,	// (0x00032aa6) bg_button_pane_cp07_cp

0xe666,	// (0x0003d0cb) cell_cmode_itu_pane_g1_cp

0xe66f,	// (0x0003d0d4) cell_cmode_itu_pane_t1_cp

0xe66f,	// (0x0003d0d4) cell_cmode_itu_pane_t2_cp

0xbb7f,	// (0x0003a5e4) settings_code_pane_cp2

0x40b1,	// (0x00032b16) bg_popup_window_pane_cp3_ParamLimits

0x43b2,	// (0x00032e17) heading_pane_cp3_ParamLimits

0x43be,	// (0x00032e23) listscroll_popup_graphic_pane_ParamLimits

0xc1cc,	// (0x0003ac31) fep_hwr_aid_pane_ParamLimits

0xcbdf,	// (0x0003b644) aid_touch_sctrl_top_ParamLimits

0xcbec,	// (0x0003b651) sctrl_sk_top_pane_g1_ParamLimits

0x75f3,	// (0x00036058) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0003e76f) sctrl_sk_top_pane_g_ParamLimits

0xcbf9,	// (0x0003b65e) sctrl_sk_top_pane_t1_ParamLimits

0xcbdf,	// (0x0003b644) aid_touch_sctrl_bottom_ParamLimits

0xcbf9,	// (0x0003b65e) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb76,	// (0x0003c5db) aid_area_touch_clock

0xce99,	// (0x0003b8fe) aid_vkb2_area_top_pane_cell_ParamLimits

0xce99,	// (0x0003b8fe) aid_vkb2_area_top_pane_cell

0xcfe4,	// (0x0003ba49) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcfe4,	// (0x0003ba49) aid_vkb2_area_bottom_pane_cell

0xe0d3,	// (0x0003cb38) popup_char_count_window

0xe1f4,	// (0x0003cc59) popup_char_count_window_g1

0xe1fd,	// (0x0003cc62) popup_char_count_window_g2

0xe206,	// (0x0003cc6b) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0003e840) popup_char_count_window_g

0xe20f,	// (0x0003cc74) popup_char_count_window_t1

0xcd67,	// (0x0003b7cc) popup_fep_char_preview_window_ParamLimits

0xcd67,	// (0x0003b7cc) popup_fep_char_preview_window

0xceb7,	// (0x0003b91c) vkb2_top_candi_pane_ParamLimits

0xceb7,	// (0x0003b91c) vkb2_top_candi_pane

0xe67d,	// (0x0003d0e2) cell_vkb2_top_candi_pane_ParamLimits

0xe67d,	// (0x0003d0e2) cell_vkb2_top_candi_pane

0x5abc,	// (0x00034521) bg_popup_fep_char_preview_window_ParamLimits

0x5abc,	// (0x00034521) bg_popup_fep_char_preview_window

0xd2cb,	// (0x0003bd30) popup_fep_char_preview_window_t1_ParamLimits

0xd2cb,	// (0x0003bd30) popup_fep_char_preview_window_t1

0xe21d,	// (0x0003cc82) bg_popup_fep_char_preview_window_g1

0xe225,	// (0x0003cc8a) bg_popup_fep_char_preview_window_g2

0xe22d,	// (0x0003cc92) bg_popup_fep_char_preview_window_g3

0xe235,	// (0x0003cc9a) bg_popup_fep_char_preview_window_g4

0xe23d,	// (0x0003cca2) bg_popup_fep_char_preview_window_g5

0xd305,	// (0x0003bd6a) bg_popup_fep_char_preview_window_g6

0xe245,	// (0x0003ccaa) bg_popup_fep_char_preview_window_g7

0xe24d,	// (0x0003ccb2) bg_popup_fep_char_preview_window_g8

0xe255,	// (0x0003ccba) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0003e847) bg_popup_fep_char_preview_window_g

0x75f3,	// (0x00036058) cell_vkb2_top_candi_pane_g1_ParamLimits

0x75f3,	// (0x00036058) cell_vkb2_top_candi_pane_g1

0x79cf,	// (0x00036434) cell_vkb2_top_candi_pane_g2_ParamLimits

0x79cf,	// (0x00036434) cell_vkb2_top_candi_pane_g2

0x79f0,	// (0x00036455) cell_vkb2_top_candi_pane_g3_ParamLimits

0x79f0,	// (0x00036455) cell_vkb2_top_candi_pane_g3

0xd30d,	// (0x0003bd72) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd30d,	// (0x0003bd72) cell_vkb2_top_candi_pane_g4

0xe25d,	// (0x0003ccc2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe25d,	// (0x0003ccc2) cell_vkb2_top_candi_pane_g5

0xcc6e,	// (0x0003b6d3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcc6e,	// (0x0003b6d3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0003e85a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0003e85a) cell_vkb2_top_candi_pane_g

0xd32e,	// (0x0003bd93) cell_vkb2_top_candi_pane_t1

0xba00,	// (0x0003a465) aid_size_touch_slider_mark_ParamLimits

0xba00,	// (0x0003a465) aid_size_touch_slider_mark

0xe3db,	// (0x0003ce40) grid_graphic2_catg_pane_ParamLimits

0xe3db,	// (0x0003ce40) grid_graphic2_catg_pane

0xe479,	// (0x0003cede) popup_grid_graphic2_window_t1_ParamLimits

0xe479,	// (0x0003cede) popup_grid_graphic2_window_t1

0xe48b,	// (0x0003cef0) popup_grid_graphic2_window_t2_ParamLimits

0xe48b,	// (0x0003cef0) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0003e815) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0003e815) popup_grid_graphic2_window_t

0x41e4,	// (0x00032c49) bg_button_pane_cp05_ParamLimits

0xe5f3,	// (0x0003d058) cell_graphic2_control_pane_g1_ParamLimits

0xe6ca,	// (0x0003d12f) cell_graphic2_catg_pane_ParamLimits

0xe6ca,	// (0x0003d12f) cell_graphic2_catg_pane

0x4041,	// (0x00032aa6) bg_button_pane_cp12

0xe6dc,	// (0x0003d141) cell_graphic2_catg_pane_g1

0xccf3,	// (0x0003b758) cell_tb_ext_pane_t1_ParamLimits

0xd101,	// (0x0003bb66) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd101,	// (0x0003bb66) vkb2_top_cell_right_narrow_pane

0xd119,	// (0x0003bb7e) vkb2_top_cell_right_wide_pane_ParamLimits

0xd119,	// (0x0003bb7e) vkb2_top_cell_right_wide_pane

0xc1be,	// (0x0003ac23) bg_vkb2_func_pane_ParamLimits

0xc1be,	// (0x0003ac23) bg_vkb2_func_pane

0xd18a,	// (0x0003bbef) vkb2_top_cell_left_pane_g1_ParamLimits

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp03

0xd1e8,	// (0x0003bc4d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54f7,	// (0x00033f5c) bg_vkb2_func_pane_g1

0x54ef,	// (0x00033f54) bg_vkb2_func_pane_g2

0x54ff,	// (0x00033f64) bg_vkb2_func_pane_g3

0x5507,	// (0x00033f6c) bg_vkb2_func_pane_g4

0x550f,	// (0x00033f74) bg_vkb2_func_pane_g5

0x5517,	// (0x00033f7c) bg_vkb2_func_pane_g6

0x5527,	// (0x00033f8c) bg_vkb2_func_pane_g7

0x551f,	// (0x00033f84) bg_vkb2_func_pane_g8

0x54e7,	// (0x00033f4c) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0003e867) bg_vkb2_func_pane_g

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp01

0xd18a,	// (0x0003bbef) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd18a,	// (0x0003bbef) vkb2_top_cell_right_wide_pane_g1

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc1be,	// (0x0003ac23) bg_vkb2_fuc_pane_cp02

0xd1e8,	// (0x0003bc4d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd1e8,	// (0x0003bc4d) vkb2_top_cell_right_narrow_pane_g1

0xd95a,	// (0x0003c3bf) aid_touch_area_decrease_ParamLimits

0xd95a,	// (0x0003c3bf) aid_touch_area_decrease

0xd97e,	// (0x0003c3e3) aid_touch_area_increase_ParamLimits

0xd97e,	// (0x0003c3e3) aid_touch_area_increase

0xd98a,	// (0x0003c3ef) aid_touch_area_mute_ParamLimits

0xd98a,	// (0x0003c3ef) aid_touch_area_mute

0xd9ae,	// (0x0003c413) aid_touch_area_slider_ParamLimits

0xd9ae,	// (0x0003c413) aid_touch_area_slider

0xd9e8,	// (0x0003c44d) popup_slider_window_g4_ParamLimits

0xd9e8,	// (0x0003c44d) popup_slider_window_g4

0xd9f4,	// (0x0003c459) popup_slider_window_g5_ParamLimits

0xd9f4,	// (0x0003c459) popup_slider_window_g5

0xda16,	// (0x0003c47b) popup_slider_window_g6_ParamLimits

0xda16,	// (0x0003c47b) popup_slider_window_g6

0xcb4b,	// (0x0003b5b0) popup_slider_window_t2_ParamLimits

0xcb4b,	// (0x0003b5b0) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0003e763) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0003e763) popup_slider_window_t

0xda28,	// (0x0003c48d) slider_pane_ParamLimits

0xda28,	// (0x0003c48d) slider_pane

0xe27e,	// (0x0003cce3) slider_pane_g1_ParamLimits

0xe27e,	// (0x0003cce3) slider_pane_g1

0xe292,	// (0x0003ccf7) slider_pane_g2_ParamLimits

0xe292,	// (0x0003ccf7) slider_pane_g2

0xe2a8,	// (0x0003cd0d) slider_pane_g3_ParamLimits

0xe2a8,	// (0x0003cd0d) slider_pane_g3

0x0003,

0xfe15,	// (0x0003e87a) slider_pane_g_ParamLimits

0xfe15,	// (0x0003e87a) slider_pane_g

0xb00e,	// (0x00039a73) popup_tb_float_extension_window_ParamLimits

0xb00e,	// (0x00039a73) popup_tb_float_extension_window

0xe2d4,	// (0x0003cd39) aid_size_cell_tb_float_ext

0x4041,	// (0x00032aa6) bg_popup_sub_window_cp28

0xe2e0,	// (0x0003cd45) grid_tb_float_ext_pane

0xe2ea,	// (0x0003cd4f) cell_tb_float_ext_pane_ParamLimits

0xe2ea,	// (0x0003cd4f) cell_tb_float_ext_pane

0xe304,	// (0x0003cd69) cell_tb_float_ext_pane_g1

0xe30d,	// (0x0003cd72) grid_highlight_pane_cp12

0xc2ff,	// (0x0003ad64) cell_last_hwr_side_pane_ParamLimits

0xc2ff,	// (0x0003ad64) cell_last_hwr_side_pane

0x738a,	// (0x00035def) cell_last_hwr_side_pane_g1

0xe316,	// (0x0003cd7b) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0003e883) cell_last_hwr_side_pane_g

0xd0b0,	// (0x0003bb15) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd0b0,	// (0x0003bb15) vkb2_area_bottom_space_btn_pane

0x75f3,	// (0x00036058) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe148,	// (0x0003cbad) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd32e,	// (0x0003bd93) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd34d,	// (0x0003bdb2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd34d,	// (0x0003bdb2) vkb2_area_bottom_space_btn_pane_g1

0xd387,	// (0x0003bdec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd387,	// (0x0003bdec) vkb2_area_bottom_space_btn_pane_g2

0xd3bd,	// (0x0003be22) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd3bd,	// (0x0003be22) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0003e888) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0003e888) vkb2_area_bottom_space_btn_pane_g

0xc273,	// (0x0003acd8) cel_fep_hwr_func_pane_ParamLimits

0xc273,	// (0x0003acd8) cel_fep_hwr_func_pane

0xc2af,	// (0x0003ad14) cell_hwr_side_button_pane_ParamLimits

0xc2af,	// (0x0003ad14) cell_hwr_side_button_pane

0xdb76,	// (0x0003c5db) aid_area_touch_clock_ParamLimits

0x41e4,	// (0x00032c49) bg_uniindi_top_pane_ParamLimits

0xdb88,	// (0x0003c5ed) uniindi_top_pane_g1_ParamLimits

0xdb9e,	// (0x0003c603) uniindi_top_pane_g2_ParamLimits

0xdbaa,	// (0x0003c60f) uniindi_top_pane_g3_ParamLimits

0xdbbb,	// (0x0003c620) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0003e79b) uniindi_top_pane_g_ParamLimits

0xdbc8,	// (0x0003c62d) uniindi_top_pane_t1_ParamLimits

0x41e4,	// (0x00032c49) bg_vkb2_func_pane_cp01_ParamLimits

0x41e4,	// (0x00032c49) bg_vkb2_func_pane_cp01

0xe6e5,	// (0x0003d14a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e5,	// (0x0003d14a) cel_fep_hwr_func_pane_g1

0x41e4,	// (0x00032c49) bg_vkb2_func_pane_cp02_ParamLimits

0x41e4,	// (0x00032c49) bg_vkb2_func_pane_cp02

0xe6e5,	// (0x0003d14a) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e5,	// (0x0003d14a) cell_hwr_side_button_pane_g1

0x53e5,	// (0x00033e4a) status_pane_g4_ParamLimits

0x53e5,	// (0x00033e4a) status_pane_g4

0x53fd,	// (0x00033e62) status_pane_t1

0x721a,	// (0x00035c7f) form2_midp_gauge_slider_cont_pane

0x7222,	// (0x00035c87) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc031,	// (0x0003aa96) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc043,	// (0x0003aaa8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x0003e56e) form2_midp_gauge_slider_pane_t_ParamLimits

0x7234,	// (0x00035c99) form2_midp_slider_pane_ParamLimits

0xcd27,	// (0x0003b78c) aid_size_cell_func_vkb2_ParamLimits

0xcd27,	// (0x0003b78c) aid_size_cell_func_vkb2

0xe2c0,	// (0x0003cd25) slider_pane_g4_ParamLimits

0xe2c0,	// (0x0003cd25) slider_pane_g4

0xd407,	// (0x0003be6c) form2_midp_gauge_slider_pane_t2_cp01

0xd415,	// (0x0003be7a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd415,	// (0x0003be7a) form2_midp_gauge_slider_pane_t3_cp01

0xd432,	// (0x0003be97) form2_midp_slider_pane_cp01

0x4041,	// (0x00032aa6) navi_smil_pane

0xe715,	// (0x0003d17a) navi_smil_pane_g1

0xe71d,	// (0x0003d182) navi_smil_pane_t1

0xe6f3,	// (0x0003d158) form2_midp_slider_pane_g1

0xe6fc,	// (0x0003d161) form2_midp_slider_pane_g2

0xe704,	// (0x0003d169) form2_midp_slider_pane_g3

0xe6f3,	// (0x0003d158) form2_midp_slider_pane_g4

0xd43b,	// (0x0003bea0) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0003e891) form2_midp_slider_pane_g

0xd3f7,	// (0x0003be5c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd3f7,	// (0x0003be5c) vkb2_area_bottom_space_btn_pane_g4

0xb1cc,	// (0x00039c31) lc0_navi_pane_ParamLimits

0xb1cc,	// (0x00039c31) lc0_navi_pane

0xb242,	// (0x00039ca7) lc0_stat_indi_pane_ParamLimits

0xb242,	// (0x00039ca7) lc0_stat_indi_pane

0xb259,	// (0x00039cbe) ls0_title_pane_ParamLimits

0xb259,	// (0x00039cbe) ls0_title_pane

0x46a6,	// (0x0003310b) bg_popup_sub_pane_cp14_ParamLimits

0xcd0e,	// (0x0003b773) list_uniindi_pane_ParamLimits

0xcd1a,	// (0x0003b77f) uniindi_top_pane_ParamLimits

0xdc04,	// (0x0003c669) list_single_uniindi_pane_g1_ParamLimits

0xdc17,	// (0x0003c67c) list_single_uniindi_pane_t1_ParamLimits

0xd444,	// (0x0003bea9) lc0_stat_clock_pane_ParamLimits

0xd444,	// (0x0003bea9) lc0_stat_clock_pane

0xd451,	// (0x0003beb6) lc0_stat_indi_pane_g1_ParamLimits

0xd451,	// (0x0003beb6) lc0_stat_indi_pane_g1

0xd45e,	// (0x0003bec3) lc0_stat_indi_pane_g2_ParamLimits

0xd45e,	// (0x0003bec3) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0003e89c) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0003e89c) lc0_stat_indi_pane_g

0xd46b,	// (0x0003bed0) lc0_uni_indicator_pane_ParamLimits

0xd46b,	// (0x0003bed0) lc0_uni_indicator_pane

0xe72b,	// (0x0003d190) ls0_title_pane_g1_ParamLimits

0xe72b,	// (0x0003d190) ls0_title_pane_g1

0xd478,	// (0x0003bedd) ls0_title_pane_t1_ParamLimits

0xd478,	// (0x0003bedd) ls0_title_pane_t1

0xd4ae,	// (0x0003bf13) lc0_uni_indicator_pane_g1_ParamLimits

0xd4ae,	// (0x0003bf13) lc0_uni_indicator_pane_g1

0xe73f,	// (0x0003d1a4) lc0_stat_clock_pane_t1

0x4041,	// (0x00032aa6) main_ai5_pane

0xe74d,	// (0x0003d1b2) ai5_sk_pane_ParamLimits

0xe74d,	// (0x0003d1b2) ai5_sk_pane

0xd4c4,	// (0x0003bf29) cell_ai5_widget_pane_ParamLimits

0xd4c4,	// (0x0003bf29) cell_ai5_widget_pane

0xe75a,	// (0x0003d1bf) aid_size_cell_widget_grid

0xe770,	// (0x0003d1d5) bg_ai5_widget_pane_ParamLimits

0xe770,	// (0x0003d1d5) bg_ai5_widget_pane

0xe7da,	// (0x0003d23f) cell_ai5_widget_pane_g2

0xe7ea,	// (0x0003d24f) cell_ai5_widget_pane_g3

0xe809,	// (0x0003d26e) cell_ai5_widget_pane_g4

0xe815,	// (0x0003d27a) cell_ai5_widget_pane_g5

0xe821,	// (0x0003d286) cell_ai5_widget_pane_g6

0xe82d,	// (0x0003d292) cell_ai5_widget_pane_g7

0xe875,	// (0x0003d2da) cell_ai5_widget_pane_t1_ParamLimits

0xe875,	// (0x0003d2da) cell_ai5_widget_pane_t1

0xe892,	// (0x0003d2f7) cell_ai5_widget_pane_t2_ParamLimits

0xe892,	// (0x0003d2f7) cell_ai5_widget_pane_t2

0xe8aa,	// (0x0003d30f) cell_ai5_widget_pane_t3_ParamLimits

0xe8aa,	// (0x0003d30f) cell_ai5_widget_pane_t3

0xe8c2,	// (0x0003d327) cell_ai5_widget_pane_t4_ParamLimits

0xe8c2,	// (0x0003d327) cell_ai5_widget_pane_t4

0xe8dc,	// (0x0003d341) cell_ai5_widget_pane_t5_ParamLimits

0xe8dc,	// (0x0003d341) cell_ai5_widget_pane_t5

0xe8fb,	// (0x0003d360) cell_ai5_widget_pane_t6_ParamLimits

0xe8fb,	// (0x0003d360) cell_ai5_widget_pane_t6

0xe90d,	// (0x0003d372) cell_ai5_widget_pane_t7_ParamLimits

0xe90d,	// (0x0003d372) cell_ai5_widget_pane_t7

0xe926,	// (0x0003d38b) cell_ai5_widget_pane_t8_ParamLimits

0xe926,	// (0x0003d38b) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0003e8b6) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0003e8b6) cell_ai5_widget_pane_t

0xe972,	// (0x0003d3d7) grid_ai5_widget_pane

0x46a6,	// (0x0003310b) highlight_cell_ai5_widget_pane_ParamLimits

0x46a6,	// (0x0003310b) highlight_cell_ai5_widget_pane

0xd594,	// (0x0003bff9) ai5_sk_left_pane

0xd59e,	// (0x0003c003) ai5_sk_middle_pane

0xd5a8,	// (0x0003c00d) ai5_sk_right_pane

0xe986,	// (0x0003d3eb) bg_ai5_widget_pane_g1_ParamLimits

0xe986,	// (0x0003d3eb) bg_ai5_widget_pane_g1

0xe992,	// (0x0003d3f7) bg_ai5_widget_pane_g2_ParamLimits

0xe992,	// (0x0003d3f7) bg_ai5_widget_pane_g2

0xe99e,	// (0x0003d403) bg_ai5_widget_pane_g3_ParamLimits

0xe99e,	// (0x0003d403) bg_ai5_widget_pane_g3

0xe9aa,	// (0x0003d40f) bg_ai5_widget_pane_g4_ParamLimits

0xe9aa,	// (0x0003d40f) bg_ai5_widget_pane_g4

0xe9b6,	// (0x0003d41b) bg_ai5_widget_pane_g5_ParamLimits

0xe9b6,	// (0x0003d41b) bg_ai5_widget_pane_g5

0xe9c2,	// (0x0003d427) bg_ai5_widget_pane_g6_ParamLimits

0xe9c2,	// (0x0003d427) bg_ai5_widget_pane_g6

0xe9ce,	// (0x0003d433) bg_ai5_widget_pane_g7_ParamLimits

0xe9ce,	// (0x0003d433) bg_ai5_widget_pane_g7

0xe9da,	// (0x0003d43f) bg_ai5_widget_pane_g8_ParamLimits

0xe9da,	// (0x0003d43f) bg_ai5_widget_pane_g8

0xe9e6,	// (0x0003d44b) bg_ai5_widget_pane_g9_ParamLimits

0xe9e6,	// (0x0003d44b) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0003e8cb) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0003e8cb) bg_ai5_widget_pane_g

0xea19,	// (0x0003d47e) cell_shortcut_ai5_widget_pane_ParamLimits

0xea19,	// (0x0003d47e) cell_shortcut_ai5_widget_pane

0x509b,	// (0x00033b00) bg_cell_shortcut_ai5_widget_pane

0xea2a,	// (0x0003d48f) cell_grid_ai5_widget_pane_g1

0xea33,	// (0x0003d498) highlight_cell_shortcut_ai5_widget_pane

0x54ef,	// (0x00033f54) ai5_sk_left_pane_g1

0xea3b,	// (0x0003d4a0) ai5_sk_left_pane_g2

0xea43,	// (0x0003d4a8) ai5_sk_left_pane_g3

0xea4b,	// (0x0003d4b0) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0003e8de) ai5_sk_left_pane_g

0xea53,	// (0x0003d4b8) ai5_sk_left_pane_t1

0x54f7,	// (0x00033f5c) ai5_sk_right_pane_g1

0xea61,	// (0x0003d4c6) ai5_sk_right_pane_g2

0xea69,	// (0x0003d4ce) ai5_sk_right_pane_g3

0xea71,	// (0x0003d4d6) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0003e8e7) ai5_sk_right_pane_g

0xea79,	// (0x0003d4de) ai5_sk_right_pane_t1

0x54f7,	// (0x00033f5c) ai5_sk_middle_pane_g1

0x54ef,	// (0x00033f54) ai5_sk_middle_pane_g2

0x550f,	// (0x00033f74) ai5_sk_middle_pane_g3

0xea69,	// (0x0003d4ce) ai5_sk_middle_pane_g4

0xea43,	// (0x0003d4a8) ai5_sk_middle_pane_g5

0xea87,	// (0x0003d4ec) ai5_sk_middle_pane_g6

0xd5b2,	// (0x0003c017) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0003e8f0) ai5_sk_middle_pane_g

0xb111,	// (0x00039b76) aid_touch_area_size_lc0_ParamLimits

0xb111,	// (0x00039b76) aid_touch_area_size_lc0

0xc4e8,	// (0x0003af4d) cell_hwr_candidate_pane_t1_ParamLimits

0x5307,	// (0x00033d6c) aid_touch_navi_pane

0xb330,	// (0x00039d95) status_dt_navi_pane_ParamLimits

0xb330,	// (0x00039d95) status_dt_navi_pane

0xb33d,	// (0x00039da2) status_dt_sta_pane_ParamLimits

0xb33d,	// (0x00039da2) status_dt_sta_pane

0xd5ba,	// (0x0003c01f) dt_sta_controll_pane

0xd5c7,	// (0x0003c02c) dt_sta_indi_pane

0xd5d4,	// (0x0003c039) dt_sta_title_pane

0x41e4,	// (0x00032c49) bg_dt_sta_indi_pane_ParamLimits

0x41e4,	// (0x00032c49) bg_dt_sta_indi_pane

0xea8f,	// (0x0003d4f4) dt_sta_battery_pane

0xea97,	// (0x0003d4fc) dt_sta_indi_pane_g1

0xeaa0,	// (0x0003d505) dt_sta_indi_pane_g2

0xeaa9,	// (0x0003d50e) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0003e8ff) dt_sta_indi_pane_g

0xeab2,	// (0x0003d517) dt_sta_signal_pane

0x46a6,	// (0x0003310b) bg_dt_sta_title_pane_ParamLimits

0x46a6,	// (0x0003310b) bg_dt_sta_title_pane

0x6167,	// (0x00034bcc) dt_sta_title_pane_g1

0xeabb,	// (0x0003d520) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0003d520) dt_sta_title_pane_t1

0x4041,	// (0x00032aa6) bg_dt_sta_control_pane

0xead0,	// (0x0003d535) dt_sta_controll_pane_g1

0xead9,	// (0x0003d53e) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0003d547) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0003d550) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0003e906) bg_dt_sta_title_pane_g

0x738a,	// (0x00035def) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0003d559) dt_sta_signal_pane_g1

0xeafc,	// (0x0003d561) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0003e90d) dt_sta_signal_pane_g

0xeb04,	// (0x0003d569) dt_sta_battery_pane_g1

0xeb0d,	// (0x0003d572) dt_sta_battery_pane_t1

0x738a,	// (0x00035def) bg_dt_sta_control_pane_g1

0x4c8c,	// (0x000336f1) fep_china_uni_eep_pane

0x4c94,	// (0x000336f9) fep_china_uni_entry_pane_ParamLimits

0x4ca4,	// (0x00033709) popup_fep_china_uni_window_g1_ParamLimits

0x4cb4,	// (0x00033719) popup_fep_china_uni_window_g2_ParamLimits

0x4cb4,	// (0x00033719) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0003e18d) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0003e18d) popup_fep_china_uni_window_g

0xeb1c,	// (0x0003d581) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0003d589) fep_china_uni_eep_pane_t1

0xe70c,	// (0x0003d171) aid_touch_area_size_smil_player

0x53b8,	// (0x00033e1d) lc0_clock_pane

0x53f1,	// (0x00033e56) status_pane_g5_ParamLimits

0x53f1,	// (0x00033e56) status_pane_g5

0xacdb,	// (0x00039740) popup_keymap_window

0x53d1,	// (0x00033e36) status_icon_pane

0xe7ea,	// (0x0003d24f) cell_ai5_widget_pane_g3_ParamLimits

0xe809,	// (0x0003d26e) cell_ai5_widget_pane_g4_ParamLimits

0xe815,	// (0x0003d27a) cell_ai5_widget_pane_g5_ParamLimits

0xe839,	// (0x0003d29e) cell_ai5_widget_pane_g8_ParamLimits

0xe839,	// (0x0003d29e) cell_ai5_widget_pane_g8

0xe84d,	// (0x0003d2b2) cell_ai5_widget_pane_g9_ParamLimits

0xe84d,	// (0x0003d2b2) cell_ai5_widget_pane_g9

0xe861,	// (0x0003d2c6) cell_ai5_widget_pane_g10_ParamLimits

0xe861,	// (0x0003d2c6) cell_ai5_widget_pane_g10

0xeb33,	// (0x0003d598) status_icon_pane_g1

0x4041,	// (0x00032aa6) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0003d5a0) popup_keymap_window_t1

0xaa2c,	// (0x00039491) control_pane_g6_ParamLimits

0xaa2c,	// (0x00039491) control_pane_g6

0xaa39,	// (0x0003949e) control_pane_g7_ParamLimits

0xaa39,	// (0x0003949e) control_pane_g7

0xaa46,	// (0x000394ab) control_pane_g8_ParamLimits

0xaa46,	// (0x000394ab) control_pane_g8

0xd5ba,	// (0x0003c01f) dt_sta_controll_pane_ParamLimits

0xd5c7,	// (0x0003c02c) dt_sta_indi_pane_ParamLimits

0xd5d4,	// (0x0003c039) dt_sta_title_pane_ParamLimits

0x45e8,	// (0x0003304d) aid_size_touch_scroll_bar_cale

0x9c5c,	// (0x000386c1) popup_discreet_window_ParamLimits

0x9c5c,	// (0x000386c1) popup_discreet_window

0x9cd6,	// (0x0003873b) popup_sk_window

0x5abc,	// (0x00034521) bg_popup_sub_pane_cp28_ParamLimits

0x5abc,	// (0x00034521) bg_popup_sub_pane_cp28

0xeb49,	// (0x0003d5ae) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0003d5ae) popup_discreet_window_g1

0xeb69,	// (0x0003d5ce) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0003d5ce) popup_discreet_window_t1

0xeb87,	// (0x0003d5ec) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0003d5ec) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0003e912) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0003e912) popup_discreet_window_t

0xd5e5,	// (0x0003c04a) popup_sk_window_g1

0xd5ef,	// (0x0003c054) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0003e919) popup_sk_window_g

0xd5f9,	// (0x0003c05e) popup_sk_window_t1

0xd607,	// (0x0003c06c) popup_sk_window_t1_copy1

0xe7da,	// (0x0003d23f) cell_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x0003d39d) cell_ai5_widget_pane_t9_ParamLimits

0xe938,	// (0x0003d39d) cell_ai5_widget_pane_t9

0x4041,	// (0x00032aa6) main_fep_fshwr2_pane

0xd615,	// (0x0003c07a) aid_fshwr2_btn_pane

0xd621,	// (0x0003c086) aid_fshwr2_syb_pane

0xd632,	// (0x0003c097) aid_fshwr2_txt_pane

0xd63e,	// (0x0003c0a3) fshwr2_func_candi_pane

0xd653,	// (0x0003c0b8) fshwr2_hwr_syb_pane

0xd66a,	// (0x0003c0cf) fshwr2_icf_pane

0x4041,	// (0x00032aa6) fshwr2_icf_bg_pane

0xd693,	// (0x0003c0f8) fshwr2_icf_pane_t1_ParamLimits

0xd693,	// (0x0003c0f8) fshwr2_icf_pane_t1

0x738a,	// (0x00035def) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0003d63e) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0003d63e) fshwr2_func_candi_row_pane

0xd6aa,	// (0x0003c10f) cell_fshwr2_syb_pane_ParamLimits

0xd6aa,	// (0x0003c10f) cell_fshwr2_syb_pane

0x75f3,	// (0x00036058) fshwr2_hwr_syb_pane_g1_ParamLimits

0x75f3,	// (0x00036058) fshwr2_hwr_syb_pane_g1

0x4041,	// (0x00032aa6) bg_popup_call_pane_cp01

0xebea,	// (0x0003d64f) fshwr2_func_candi_cell_pane_ParamLimits

0xebea,	// (0x0003d64f) fshwr2_func_candi_cell_pane

0xec1b,	// (0x0003d680) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec1b,	// (0x0003d680) fshwr2_func_candi_cell_bg_pane

0xec35,	// (0x0003d69a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec35,	// (0x0003d69a) fshwr2_func_candi_cell_pane_g1

0xec55,	// (0x0003d6ba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec55,	// (0x0003d6ba) fshwr2_func_candi_cell_pane_t1

0x4041,	// (0x00032aa6) bg_button_pane_cp08

0x509b,	// (0x00033b00) cell_fshwr2_syb_bg_pane

0xd6c6,	// (0x0003c12b) cell_fshwr2_syb_bg_pane_g1

0xec68,	// (0x0003d6cd) cell_fshwr2_syb_bg_pane_t1

0x46a6,	// (0x0003310b) main_tmo_pane

0xb94a,	// (0x0003a3af) uni_indicator_pane_g1_ParamLimits

0xb95f,	// (0x0003a3c4) uni_indicator_pane_g2_ParamLimits

0x6445,	// (0x00034eaa) uni_indicator_pane_g3_ParamLimits

0x645b,	// (0x00034ec0) uni_indicator_pane_g4_ParamLimits

0x645b,	// (0x00034ec0) uni_indicator_pane_g4

0x646f,	// (0x00034ed4) uni_indicator_pane_g5_ParamLimits

0x646f,	// (0x00034ed4) uni_indicator_pane_g5

0x6483,	// (0x00034ee8) uni_indicator_pane_g6_ParamLimits

0x6483,	// (0x00034ee8) uni_indicator_pane_g6

0xf92c,	// (0x0003e391) uni_indicator_pane_g_ParamLimits

0xd93c,	// (0x0003c3a1) popup_tmo_note_window_ParamLimits

0xd93c,	// (0x0003c3a1) popup_tmo_note_window

0x46a6,	// (0x0003310b) fshwr2_bg_pane

0xec46,	// (0x0003d6ab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec46,	// (0x0003d6ab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0003e91e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0003e91e) fshwr2_func_candi_cell_pane_g

0x738a,	// (0x00035def) bg_popup_window_pane_cp01

0xec77,	// (0x0003d6dc) bg_popup_window_pane_g1_cp01

0xec80,	// (0x0003d6e5) bg_popup_window_pane_cp22_ParamLimits

0xec80,	// (0x0003d6e5) bg_popup_window_pane_cp22

0xec8e,	// (0x0003d6f3) listscroll_tmo_link_pane_ParamLimits

0xec8e,	// (0x0003d6f3) listscroll_tmo_link_pane

0xecce,	// (0x0003d733) popup_tmo_note_window_g1_ParamLimits

0xecce,	// (0x0003d733) popup_tmo_note_window_g1

0xecdb,	// (0x0003d740) tmo_note_info_pane_ParamLimits

0xecdb,	// (0x0003d740) tmo_note_info_pane

0xd6ce,	// (0x0003c133) list_tmo_note_info_pane_g1_ParamLimits

0xd6ce,	// (0x0003c133) list_tmo_note_info_pane_g1

0xecf5,	// (0x0003d75a) list_tmo_note_info_pane_g2_ParamLimits

0xecf5,	// (0x0003d75a) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0003e923) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0003e923) list_tmo_note_info_pane_g

0xed11,	// (0x0003d776) list_tmo_note_info_text_pane_ParamLimits

0xed11,	// (0x0003d776) list_tmo_note_info_text_pane

0xed53,	// (0x0003d7b8) list_tmo_link_pane

0xed60,	// (0x0003d7c5) scroll_pane_cp20

0xed6d,	// (0x0003d7d2) list_single_tmo_link_pane_ParamLimits

0xed6d,	// (0x0003d7d2) list_single_tmo_link_pane

0xed7d,	// (0x0003d7e2) list_single_tmo_link_pane_t1

0xed8b,	// (0x0003d7f0) list_tmo_note_info_text_pane_t1_ParamLimits

0xed8b,	// (0x0003d7f0) list_tmo_note_info_text_pane_t1

0xa1f4,	// (0x00038c59) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa1f4,	// (0x00038c59) aid_size_touch_scroll_bar_cp01

0x9110,	// (0x00037b75) aid_size_touch_slider_marker

0x9cbe,	// (0x00038723) popup_settings_window_ParamLimits

0x9cbe,	// (0x00038723) popup_settings_window

0x92b2,	// (0x00037d17) popup_candi_list_indi_window

0x5307,	// (0x00033d6c) aid_touch_navi_pane_ParamLimits

0xcbb3,	// (0x0003b618) rs_clock_indi_pane

0xcbbc,	// (0x0003b621) sctrl_sk_bottom_pane_ParamLimits

0xcbcd,	// (0x0003b632) sctrl_sk_top_pane_ParamLimits

0xcd81,	// (0x0003b7e6) popup_fep_tooltip_window

0xe75a,	// (0x0003d1bf) aid_size_cell_widget_grid_ParamLimits

0xe7ce,	// (0x0003d233) cell_ai5_widget_pane_g1_ParamLimits

0xe7ce,	// (0x0003d233) cell_ai5_widget_pane_g1

0xe821,	// (0x0003d286) cell_ai5_widget_pane_g6_ParamLimits

0xe82d,	// (0x0003d292) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0003e8a1) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0003e8a1) cell_ai5_widget_pane_g

0xe95c,	// (0x0003d3c1) cell_ai5_widget_pane_t10_ParamLimits

0xe95c,	// (0x0003d3c1) cell_ai5_widget_pane_t10

0xe972,	// (0x0003d3d7) grid_ai5_widget_pane_ParamLimits

0xe9f2,	// (0x0003d457) cell_contacts_ai5_widget_pane_ParamLimits

0xe9f2,	// (0x0003d457) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0003d601) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0003d601) popup_discreet_window_t3

0xd67f,	// (0x0003c0e4) popup_fshwr2_char_preview_window_ParamLimits

0xd67f,	// (0x0003c0e4) popup_fshwr2_char_preview_window

0xd6e5,	// (0x0003c14a) tmo_note_info_pane_t1

0xd6fa,	// (0x0003c15f) tmo_note_info_pane_t2

0xd713,	// (0x0003c178) tmo_note_info_pane_t3

0xed2f,	// (0x0003d794) tmo_note_info_pane_t4

0xed41,	// (0x0003d7a6) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0003e928) tmo_note_info_pane_t

0xed53,	// (0x0003d7b8) list_tmo_link_pane_ParamLimits

0xed60,	// (0x0003d7c5) scroll_pane_cp20_ParamLimits

0x4041,	// (0x00032aa6) bg_popup_fep_char_preview_window_cp01

0xeda4,	// (0x0003d809) popup_fshwr2_char_preview_window_t1

0xedb2,	// (0x0003d817) popup_candi_list_indi_window_g1

0xedbb,	// (0x0003d820) bg_cell_contacts_ai5_widget_pane

0xedc7,	// (0x0003d82c) cell_contacts_ai5_widget_pane_g1

0xedda,	// (0x0003d83f) cell_contacts_ai5_widget_pane_g2

0xede6,	// (0x0003d84b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0003e933) cell_contacts_ai5_widget_pane_g

0xedf8,	// (0x0003d85d) cell_contacts_ai5_widget_pane_t1

0x46a6,	// (0x0003310b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee72,	// (0x0003d8d7) settings_container_pane

0x509b,	// (0x00033b00) listscroll_set_pane_copy1

0x6cb5,	// (0x0003571a) scroll_pane_cp121_copy1

0xee7e,	// (0x0003d8e3) set_content_pane_copy1

0xee86,	// (0x0003d8eb) aid_height_set_list_copy1_ParamLimits

0xee86,	// (0x0003d8eb) aid_height_set_list_copy1

0x64d6,	// (0x00034f3b) aid_size_parent_copy1_ParamLimits

0x64d6,	// (0x00034f3b) aid_size_parent_copy1

0xee92,	// (0x0003d8f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee92,	// (0x0003d8f7) button_value_adjust_pane_cp6_copy1

0x4816,	// (0x0003327b) list_highlight_pane_cp2_copy1_ParamLimits

0x4816,	// (0x0003327b) list_highlight_pane_cp2_copy1

0xeea6,	// (0x0003d90b) list_set_pane_copy1_ParamLimits

0xeea6,	// (0x0003d90b) list_set_pane_copy1

0xee0d,	// (0x0003d872) main_pane_set_t1_copy1_ParamLimits

0xee0d,	// (0x0003d872) main_pane_set_t1_copy1

0xee47,	// (0x0003d8ac) main_pane_set_t2_copy1_ParamLimits

0xee47,	// (0x0003d8ac) main_pane_set_t2_copy1

0xef53,	// (0x0003d9b8) main_pane_set_t3_copy1

0xef61,	// (0x0003d9c6) main_pane_set_t4_copy1

0xee66,	// (0x0003d8cb) set_content_pane_g1_copy1_ParamLimits

0xee66,	// (0x0003d8cb) set_content_pane_g1_copy1

0xef6f,	// (0x0003d9d4) setting_code_pane_copy1

0xef77,	// (0x0003d9dc) setting_slider_graphic_pane_copy1

0xef77,	// (0x0003d9dc) setting_slider_pane_copy1

0xef77,	// (0x0003d9dc) setting_text_pane_copy1

0xef77,	// (0x0003d9dc) setting_volume_pane_copy1

0xef6f,	// (0x0003d9d4) settings_code_pane_cp2_copy1

0xef7f,	// (0x0003d9e4) settings_code_pane_cp_copy1_ParamLimits

0xef7f,	// (0x0003d9e4) settings_code_pane_cp_copy1

0xef93,	// (0x0003d9f8) volume_set_pane_copy1

0xef9b,	// (0x0003da00) volume_set_pane_g10_copy1

0xefa3,	// (0x0003da08) volume_set_pane_g1_copy1

0xefab,	// (0x0003da10) volume_set_pane_g2_copy1

0xefb3,	// (0x0003da18) volume_set_pane_g3_copy1

0xefbb,	// (0x0003da20) volume_set_pane_g4_copy1

0xefc3,	// (0x0003da28) volume_set_pane_g5_copy1

0xefcb,	// (0x0003da30) volume_set_pane_g6_copy1

0xefd3,	// (0x0003da38) volume_set_pane_g7_copy1

0xefdb,	// (0x0003da40) volume_set_pane_g8_copy1

0xefe3,	// (0x0003da48) volume_set_pane_g9_copy1

0x40b1,	// (0x00032b16) bg_set_opt_pane_cp_copy1_ParamLimits

0x40b1,	// (0x00032b16) bg_set_opt_pane_cp_copy1

0xefeb,	// (0x0003da50) setting_slider_pane_t1_copy1_ParamLimits

0xefeb,	// (0x0003da50) setting_slider_pane_t1_copy1

0xf009,	// (0x0003da6e) setting_slider_pane_t2_copy1_ParamLimits

0xf009,	// (0x0003da6e) setting_slider_pane_t2_copy1

0xf023,	// (0x0003da88) setting_slider_pane_t3_copy1_ParamLimits

0xf023,	// (0x0003da88) setting_slider_pane_t3_copy1

0xf03b,	// (0x0003daa0) slider_set_pane_copy1_ParamLimits

0xf03b,	// (0x0003daa0) slider_set_pane_copy1

0x470d,	// (0x00033172) set_opt_bg_pane_g1_copy2

0x4715,	// (0x0003317a) set_opt_bg_pane_g2_copy2

0xf051,	// (0x0003dab6) set_opt_bg_pane_g3_copy2

0x4725,	// (0x0003318a) set_opt_bg_pane_g4_copy2

0x472d,	// (0x00033192) set_opt_bg_pane_g5_copy2

0x4735,	// (0x0003319a) set_opt_bg_pane_g6_copy2

0xf05b,	// (0x0003dac0) set_opt_bg_pane_g7_copy2

0xf063,	// (0x0003dac8) set_opt_bg_pane_g8_copy2

0xf06d,	// (0x0003dad2) set_opt_bg_pane_g9_copy2

0xf077,	// (0x0003dadc) aid_size_touch_slider_mark_copy1_ParamLimits

0xf077,	// (0x0003dadc) aid_size_touch_slider_mark_copy1

0xf08b,	// (0x0003daf0) slider_set_pane_g1_copy1

0xf094,	// (0x0003daf9) slider_set_pane_g2_copy1

0x7145,	// (0x00035baa) slider_set_pane_g3_copy1_ParamLimits

0x7145,	// (0x00035baa) slider_set_pane_g3_copy1

0x7159,	// (0x00035bbe) slider_set_pane_g4_copy1_ParamLimits

0x7159,	// (0x00035bbe) slider_set_pane_g4_copy1

0x7171,	// (0x00035bd6) slider_set_pane_g5_copy1_ParamLimits

0x7171,	// (0x00035bd6) slider_set_pane_g5_copy1

0x7145,	// (0x00035baa) slider_set_pane_g6_copy1_ParamLimits

0x7145,	// (0x00035baa) slider_set_pane_g6_copy1

0xf09c,	// (0x0003db01) slider_set_pane_g7_copy1_ParamLimits

0xf09c,	// (0x0003db01) slider_set_pane_g7_copy1

0x4055,	// (0x00032aba) bg_set_opt_pane_cp2_copy1

0xf0b2,	// (0x0003db17) setting_slider_graphic_pane_g1_copy1

0xf0bb,	// (0x0003db20) setting_slider_graphic_pane_t1_copy1

0xf0cb,	// (0x0003db30) setting_slider_graphic_pane_t2_copy1

0xf0db,	// (0x0003db40) slider_set_pane_cp_copy1

0xf0eb,	// (0x0003db50) input_focus_pane_cp1_copy1

0xf0f4,	// (0x0003db59) list_set_text_pane_copy1

0xf0fc,	// (0x0003db61) setting_text_pane_g1_copy1

0x99b5,	// (0x0003841a) set_text_pane_t1_copy1

0xf0eb,	// (0x0003db50) input_focus_pane_cp2_copy1

0xf0fc,	// (0x0003db61) setting_code_pane_g1_copy1

0xf105,	// (0x0003db6a) setting_code_pane_t1_copy1

0x64c2,	// (0x00034f27) list_set_graphic_pane_copy1

0x4055,	// (0x00032aba) bg_set_opt_pane_cp4_copy1

0x4e1f,	// (0x00033884) list_set_graphic_pane_g1_copy1_ParamLimits

0x4e1f,	// (0x00033884) list_set_graphic_pane_g1_copy1

0xf113,	// (0x0003db78) list_set_graphic_pane_g2_copy1

0x4e37,	// (0x0003389c) list_set_graphic_pane_t1_copy1_ParamLimits

0x4e37,	// (0x0003389c) list_set_graphic_pane_t1_copy1

0x738a,	// (0x00035def) rs_clock_indi_pane_g1

0xf11b,	// (0x0003db80) rs_clock_indi_pane_t1

0xf129,	// (0x0003db8e) rs_indi_pane

0xf131,	// (0x0003db96) rs_indi_pane_g1

0xf13a,	// (0x0003db9f) rs_indi_pane_g2

0xf143,	// (0x0003dba8) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0003e93a) rs_indi_pane_g

0x509b,	// (0x00033b00) bg_popup_preview_window_pane_cp03

0xf14c,	// (0x0003dbb1) popup_fep_tooltip_window_t1

0x7d47,	// (0x000367ac) popup_note2_window_g2_ParamLimits

0x7d47,	// (0x000367ac) popup_note2_window_g2

0x0001,

0xfc75,	// (0x0003e6da) popup_note2_window_g_ParamLimits

0xfc75,	// (0x0003e6da) popup_note2_window_g

0xc88c,	// (0x0003b2f1) bg_popup_sub_pane_cp11_ParamLimits

0xc899,	// (0x0003b2fe) cell_ai3_links_pane_g1_ParamLimits

0xc8b0,	// (0x0003b315) cell_ai3_links_pane_t1

0x99b5,	// (0x0003841a) set_text_pane_t1_copy1_ParamLimits

0xa83f,	// (0x000392a4) cell_graphic_popup_pane_cp2_ParamLimits

0xa83f,	// (0x000392a4) cell_graphic_popup_pane_cp2

0xd728,	// (0x0003c18d) cell_graphic_popup_pane_g1_cp2

0x43fb,	// (0x00032e60) cell_graphic_popup_pane_g2_cp2

0xf15a,	// (0x0003dbbf) cell_graphic_popup_pane_g3_cp2

0xf162,	// (0x0003dbc7) cell_graphic_popup_pane_t2_cp2

0x440c,	// (0x00032e71) grid_highlight_pane_cp3_cp2

0x49c0,	// (0x00033425) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x46a6,	// (0x0003310b) main_tmo_pane_ParamLimits

0xd930,	// (0x0003c395) popup_tmo_big_image_note_window

0xe7be,	// (0x0003d223) cell_ai5_widget_list_pane

0xe7c6,	// (0x0003d22b) cell_ai5_widget_lrg_icon_pane

0xd6e5,	// (0x0003c14a) tmo_note_info_pane_t1_ParamLimits

0xd6fa,	// (0x0003c15f) tmo_note_info_pane_t2_ParamLimits

0xd713,	// (0x0003c178) tmo_note_info_pane_t3_ParamLimits

0xed2f,	// (0x0003d794) tmo_note_info_pane_t4_ParamLimits

0xed41,	// (0x0003d7a6) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0003e928) tmo_note_info_pane_t_ParamLimits

0xee72,	// (0x0003d8d7) settings_container_pane_ParamLimits

0xf0e3,	// (0x0003db48) indicator_popup_pane_cp5

0xf0e3,	// (0x0003db48) indicator_popup_pane_cp6

0x64c2,	// (0x00034f27) list_set_graphic_pane_copy1_ParamLimits

0x4041,	// (0x00032aa6) bg_popup_window_pane_cp23

0xf170,	// (0x0003dbd5) popup_tmo_big_image_note_window_g1

0xf17b,	// (0x0003dbe0) popup_tmo_big_image_note_window_t1

0xf18b,	// (0x0003dbf0) popup_tmo_big_image_note_window_t2

0xf19b,	// (0x0003dc00) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0003e941) popup_tmo_big_image_note_window_t

0xf1ab,	// (0x0003dc10) cell_ai5_widget_lrg_icon_pane_g1

0xf1b3,	// (0x0003dc18) cell_ai5_widget_lrg_icon_pane_t1

0xf1c1,	// (0x0003dc26) cell_ai5_widget_list_row_pane_ParamLimits

0xf1c1,	// (0x0003dc26) cell_ai5_widget_list_row_pane

0xf1da,	// (0x0003dc3f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1da,	// (0x0003dc3f) cell_ai5_widget_list_row_pane_g1

0xf1e7,	// (0x0003dc4c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1e7,	// (0x0003dc4c) cell_ai5_widget_list_row_pane_t1

0xf1ff,	// (0x0003dc64) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1ff,	// (0x0003dc64) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0003e948) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0003e948) cell_ai5_widget_list_row_pane_t

0x4041,	// (0x00032aa6) main_fep_vtchi_ss_pane

0xf236,	// (0x0003dc9b) popup_fep_char_pre_window

0xf23e,	// (0x0003dca3) popup_fep_ituss_window

0xf25f,	// (0x0003dcc4) popup_fep_vkbss_window

0xf27e,	// (0x0003dce3) grid_vkbss_keypad_pane_ParamLimits

0xf27e,	// (0x0003dce3) grid_vkbss_keypad_pane

0xf28e,	// (0x0003dcf3) ituss_keypad_pane

0xf2aa,	// (0x0003dd0f) aid_vkbss_key_offset_ParamLimits

0xf2aa,	// (0x0003dd0f) aid_vkbss_key_offset

0xf2b6,	// (0x0003dd1b) cell_vkbss_key_pane_ParamLimits

0xf2b6,	// (0x0003dd1b) cell_vkbss_key_pane

0x5419,	// (0x00033e7e) bg_cell_vkbss_key_g1_ParamLimits

0x5419,	// (0x00033e7e) bg_cell_vkbss_key_g1

0xf2cc,	// (0x0003dd31) cell_vkbss_key_3p_pane_ParamLimits

0xf2cc,	// (0x0003dd31) cell_vkbss_key_3p_pane

0xf2e6,	// (0x0003dd4b) cell_vkbss_key_g1_ParamLimits

0xf2e6,	// (0x0003dd4b) cell_vkbss_key_g1

0xf300,	// (0x0003dd65) cell_vkbss_key_t1_ParamLimits

0xf300,	// (0x0003dd65) cell_vkbss_key_t1

0xf32b,	// (0x0003dd90) cell_ituss_key_pane_ParamLimits

0xf32b,	// (0x0003dd90) cell_ituss_key_pane

0xf33c,	// (0x0003dda1) bg_cell_ituss_key_g1_ParamLimits

0xf33c,	// (0x0003dda1) bg_cell_ituss_key_g1

0xf348,	// (0x0003ddad) cell_ituss_key_pane_g1_ParamLimits

0xf348,	// (0x0003ddad) cell_ituss_key_pane_g1

0xf35c,	// (0x0003ddc1) cell_ituss_key_pane_g2_ParamLimits

0xf35c,	// (0x0003ddc1) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0003e94f) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0003e94f) cell_ituss_key_pane_g

0xf387,	// (0x0003ddec) cell_ituss_key_t1_ParamLimits

0xf387,	// (0x0003ddec) cell_ituss_key_t1

0xf3b5,	// (0x0003de1a) cell_ituss_key_t2_ParamLimits

0xf3b5,	// (0x0003de1a) cell_ituss_key_t2

0xf3e6,	// (0x0003de4b) cell_ituss_key_t3_ParamLimits

0xf3e6,	// (0x0003de4b) cell_ituss_key_t3

0xf417,	// (0x0003de7c) cell_ituss_key_t4_ParamLimits

0xf417,	// (0x0003de7c) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0003e954) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0003e954) cell_ituss_key_t

0xf448,	// (0x0003dead) cell_vkbss_key_3p_pane_g1

0xf450,	// (0x0003deb5) cell_vkbss_key_3p_pane_g2

0xf458,	// (0x0003debd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0003e95d) cell_vkbss_key_3p_pane_g

0x4041,	// (0x00032aa6) bg_popup_fep_char_preview_window_cp02

0xf460,	// (0x0003dec5) popup_fep_char_pre_window_t1

0xd58a,	// (0x0003bfef) main_ai5_sk_pane

0xedbb,	// (0x0003d820) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedc7,	// (0x0003d82c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedda,	// (0x0003d83f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xede6,	// (0x0003d84b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0003e933) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedf8,	// (0x0003d85d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x46a6,	// (0x0003310b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd730,	// (0x0003c195) main_ai5_sk_pane_g1

0x58fa,	// (0x0003435f) popup_query_code_window_g1

0xf254,	// (0x0003dcb9) popup_fep_vkb_icf_pane

0xf268,	// (0x0003dccd) popup_fep_vtchi_icf_pane

0x46a6,	// (0x0003310b) bg_icf_pane

0xf46f,	// (0x0003ded4) list_vkb_icf_pane

0x46a6,	// (0x0003310b) bg_icf_pane_cp01

0xf47b,	// (0x0003dee0) vtchi_icf_list_pane

0xf48c,	// (0x0003def1) list_vkb_icf_pane_t1_ParamLimits

0xf48c,	// (0x0003def1) list_vkb_icf_pane_t1

0xf4a6,	// (0x0003df0b) vtchi_icf_list_pane_t1_ParamLimits

0xf4a6,	// (0x0003df0b) vtchi_icf_list_pane_t1

0xf23e,	// (0x0003dca3) popup_fep_ituss_window_ParamLimits

0xf268,	// (0x0003dccd) popup_fep_vtchi_icf_pane_ParamLimits

0xf28e,	// (0x0003dcf3) ituss_keypad_pane_ParamLimits

0xf29e,	// (0x0003dd03) ituss_sks_pane

0x46a6,	// (0x0003310b) bg_icf_pane_ParamLimits

0xf227,	// (0x0003dc8c) icf_edit_indi_pane_ParamLimits

0xf227,	// (0x0003dc8c) icf_edit_indi_pane

0xf46f,	// (0x0003ded4) list_vkb_icf_pane_ParamLimits

0x46a6,	// (0x0003310b) bg_icf_pane_cp01_ParamLimits

0xf227,	// (0x0003dc8c) icf_edit_indi_pane_cp01_ParamLimits

0xf227,	// (0x0003dc8c) icf_edit_indi_pane_cp01

0xf483,	// (0x0003dee8) vtchi_query_pane

0x75f3,	// (0x00036058) icf_edit_indi_pane_g1_ParamLimits

0x75f3,	// (0x00036058) icf_edit_indi_pane_g1

0xf537,	// (0x0003df9c) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0003df9c) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0003e975) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0003e975) icf_edit_indi_pane_g

0xf546,	// (0x0003dfab) icf_edit_indi_pane_t1

0xf4cd,	// (0x0003df32) bg_input_focus_pane_cp042

0x45df,	// (0x00033044) vtchi_button_pane

0xf4d6,	// (0x0003df3b) vtchi_query_pane_t1

0xf4e4,	// (0x0003df49) vtchi_query_pane_t2

0xf4f2,	// (0x0003df57) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003e964) vtchi_query_pane_t

0x4041,	// (0x00032aa6) bg_button_pane_cp13

0xf500,	// (0x0003df65) vtchi_button_pane_g1

0xf508,	// (0x0003df6d) ituss_sks_pane_g1

0xf513,	// (0x0003df78) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003e96b) ituss_sks_pane_g

0xf51b,	// (0x0003df80) ituss_sks_pane_t1

0xf529,	// (0x0003df8e) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003e970) ituss_sks_pane_t

0x6ff8,	// (0x00035a5d) indicator_nsta_pane_cp_g1

0x7001,	// (0x00035a66) indicator_nsta_pane_cp_g2

0x7009,	// (0x00035a6e) indicator_nsta_pane_cp_g3

0x7011,	// (0x00035a76) indicator_nsta_pane_cp_g4

0x7019,	// (0x00035a7e) indicator_nsta_pane_cp_g5

0x7021,	// (0x00035a86) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x0003e524) indicator_nsta_pane_cp_g

0xe5e0,	// (0x0003d045) cell_graphic2_pane_t2_ParamLimits

0xe5e0,	// (0x0003d045) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0003e82a) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0003e82a) cell_graphic2_pane_t

0xe60d,	// (0x0003d072) cell_graphic2_control_pane_t1

0xa597,	// (0x00038ffc) signal_pane_g3_ParamLimits

0xa597,	// (0x00038ffc) signal_pane_g3

0xa5a9,	// (0x0003900e) signal_pane_g4_ParamLimits

0xa5a9,	// (0x0003900e) signal_pane_g4

0xf211,	// (0x0003dc76) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf211,	// (0x0003dc76) cell_ai5_widget_list_row_pane_t3

0xf375,	// (0x0003ddda) cell_ituss_key_pane_t1_ParamLimits

0xf375,	// (0x0003ddda) cell_ituss_key_pane_t1

0x563c,	// (0x000340a1) form_field_data_wide_pane_vc_t2_ParamLimits

0x563c,	// (0x000340a1) form_field_data_wide_pane_vc_t2

0x5650,	// (0x000340b5) form_field_data_wide_pane_vc_t3_ParamLimits

0x5650,	// (0x000340b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0003e279) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0003e279) form_field_data_wide_pane_vc_t

0x6d25,	// (0x0003578a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d25,	// (0x0003578a) form_field_slider_wide_pane_vc_t3

0x6dff,	// (0x00035864) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6dff,	// (0x00035864) form_field_popup_wide_pane_vc_t2

0x6e16,	// (0x0003587b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e16,	// (0x0003587b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x0003e513) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x0003e513) form_field_popup_wide_pane_vc_t

0xd615,	// (0x0003c07a) aid_fshwr2_btn_pane_ParamLimits

0xd621,	// (0x0003c086) aid_fshwr2_syb_pane_ParamLimits

0xd632,	// (0x0003c097) aid_fshwr2_txt_pane_ParamLimits

0x46a6,	// (0x0003310b) fshwr2_bg_pane_ParamLimits

0xd63e,	// (0x0003c0a3) fshwr2_func_candi_pane_ParamLimits

0xd653,	// (0x0003c0b8) fshwr2_hwr_syb_pane_ParamLimits

0xd66a,	// (0x0003c0cf) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

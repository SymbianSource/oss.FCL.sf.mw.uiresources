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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00013821 };

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
0xa5c0,	// (0x0001dde1) Screen

0xa5cc,	// (0x0001dded) application_window_ParamLimits

0xa5cc,	// (0x0001dded) application_window

0xc6f9,	// (0x0001ff1a) screen_g1

0x92e7,	// (0x0001cb08) area_bottom_pane_ParamLimits

0x92e7,	// (0x0001cb08) area_bottom_pane

0xdfb1,	// (0x000217d2) area_top_pane_ParamLimits

0xdfb1,	// (0x000217d2) area_top_pane

0xe04f,	// (0x00021870) main_pane_ParamLimits

0xe04f,	// (0x00021870) main_pane

0xc703,	// (0x0001ff24) misc_graphics

0xb3e5,	// (0x0001ec06) battery_pane_ParamLimits

0xb3e5,	// (0x0001ec06) battery_pane

0x2dc4,	// (0x000165e5) bg_status_flat_pane_g8

0x2dcc,	// (0x000165ed) bg_status_flat_pane_g9

0x20a9,	// (0x000158ca) context_pane_ParamLimits

0x20a9,	// (0x000158ca) context_pane

0xb55c,	// (0x0001ed7d) navi_pane_ParamLimits

0xb55c,	// (0x0001ed7d) navi_pane

0xb5e6,	// (0x0001ee07) signal_pane_ParamLimits

0xb5e6,	// (0x0001ee07) signal_pane

0x0008,

0xf84a,	// (0x0002306b) bg_status_flat_pane_g

0xb676,	// (0x0001ee97) status_pane_g1_ParamLimits

0xb676,	// (0x0001ee97) status_pane_g1

0xb68c,	// (0x0001eead) status_pane_g2_ParamLimits

0xb68c,	// (0x0001eead) status_pane_g2

0x22e2,	// (0x00015b03) status_pane_g3_ParamLimits

0x22e2,	// (0x00015b03) status_pane_g3

0x0004,

0xf776,	// (0x00022f97) status_pane_g_ParamLimits

0xf776,	// (0x00022f97) status_pane_g

0xb698,	// (0x0001eeb9) title_pane_ParamLimits

0xb698,	// (0x0001eeb9) title_pane

0xb701,	// (0x0001ef22) uni_indicator_pane_ParamLimits

0xb701,	// (0x0001ef22) uni_indicator_pane

0x1f03,	// (0x00015724) bg_list_pane_ParamLimits

0x1f03,	// (0x00015724) bg_list_pane

0xb356,	// (0x0001eb77) find_pane

0x25c9,	// (0x00015dea) listscroll_app_pane_ParamLimits

0x25c9,	// (0x00015dea) listscroll_app_pane

0x1f37,	// (0x00015758) listscroll_form_pane

0x95db,	// (0x0001cdfc) listscroll_gen_pane_ParamLimits

0x95db,	// (0x0001cdfc) listscroll_gen_pane

0xeb73,	// (0x00022394) listscroll_set_pane

0x3989,	// (0x000171aa) main_idle_act_pane

0x1bfc,	// (0x0001541d) main_idle_trad_pane

0x1bfc,	// (0x0001541d) main_list_empty_pane

0x1f2b,	// (0x0001574c) main_midp_pane

0x1f51,	// (0x00015772) main_pane_g1_ParamLimits

0x1f51,	// (0x00015772) main_pane_g1

0x95ef,	// (0x0001ce10) popup_ai_message_window_ParamLimits

0x95ef,	// (0x0001ce10) popup_ai_message_window

0x968f,	// (0x0001ceb0) popup_fep_china_uni_window_ParamLimits

0x968f,	// (0x0001ceb0) popup_fep_china_uni_window

0xebb5,	// (0x000223d6) popup_fep_japan_candidate_window_ParamLimits

0xebb5,	// (0x000223d6) popup_fep_japan_candidate_window

0xebdf,	// (0x00022400) popup_fep_japan_predictive_window_ParamLimits

0xebdf,	// (0x00022400) popup_fep_japan_predictive_window

0x96ef,	// (0x0001cf10) popup_find_window

0x970c,	// (0x0001cf2d) popup_grid_graphic_window_ParamLimits

0x970c,	// (0x0001cf2d) popup_grid_graphic_window

0xec15,	// (0x00022436) popup_large_graphic_colour_window

0x97b6,	// (0x0001cfd7) popup_menu_window_ParamLimits

0x97b6,	// (0x0001cfd7) popup_menu_window

0x99a6,	// (0x0001d1c7) popup_note_image_window

0x9966,	// (0x0001d187) popup_note_wait_window_ParamLimits

0x9966,	// (0x0001d187) popup_note_wait_window

0x99be,	// (0x0001d1df) popup_note_window_ParamLimits

0x99be,	// (0x0001d1df) popup_note_window

0x9a6c,	// (0x0001d28d) popup_query_code_window_ParamLimits

0x9a6c,	// (0x0001d28d) popup_query_code_window

0xec3b,	// (0x0002245c) popup_query_data_code_window_ParamLimits

0xec3b,	// (0x0002245c) popup_query_data_code_window

0x9aac,	// (0x0001d2cd) popup_query_data_window_ParamLimits

0x9aac,	// (0x0001d2cd) popup_query_data_window

0x9b40,	// (0x0001d361) popup_query_sat_info_window_ParamLimits

0x9b40,	// (0x0001d361) popup_query_sat_info_window

0x9beb,	// (0x0001d40c) popup_snote_single_graphic_window_ParamLimits

0x9beb,	// (0x0001d40c) popup_snote_single_graphic_window

0x9beb,	// (0x0001d40c) popup_snote_single_text_window_ParamLimits

0x9beb,	// (0x0001d40c) popup_snote_single_text_window

0xec5e,	// (0x0002247f) popup_sub_window_general

0xecb4,	// (0x000224d5) popup_window_general_ParamLimits

0xecb4,	// (0x000224d5) popup_window_general

0x1f67,	// (0x00015788) power_save_pane

0xeb07,	// (0x00022328) control_pane_g1_ParamLimits

0xeb07,	// (0x00022328) control_pane_g1

0xeb2a,	// (0x0002234b) control_pane_g2_ParamLimits

0xeb2a,	// (0x0002234b) control_pane_g2

0x1ec6,	// (0x000156e7) control_pane_g3_ParamLimits

0x1ec6,	// (0x000156e7) control_pane_g3

0x0007,

0xf75e,	// (0x00022f7f) control_pane_g_ParamLimits

0xf75e,	// (0x00022f7f) control_pane_g

0x94f2,	// (0x0001cd13) control_pane_t1_ParamLimits

0x94f2,	// (0x0001cd13) control_pane_t1

0x9542,	// (0x0001cd63) control_pane_t2_ParamLimits

0x9542,	// (0x0001cd63) control_pane_t2

0x0002,

0xf76f,	// (0x00022f90) control_pane_t_ParamLimits

0xf76f,	// (0x00022f90) control_pane_t

0x1deb,	// (0x0001560c) navi_navi_volume_pane_cp1

0x1df3,	// (0x00015614) status_small_icon_pane

0x1dfb,	// (0x0001561c) status_small_pane_g1_ParamLimits

0x1dfb,	// (0x0001561c) status_small_pane_g1

0x1e2f,	// (0x00015650) status_small_pane_g2_ParamLimits

0x1e2f,	// (0x00015650) status_small_pane_g2

0x1e3b,	// (0x0001565c) status_small_pane_g3_ParamLimits

0x1e3b,	// (0x0001565c) status_small_pane_g3

0xb31e,	// (0x0001eb3f) status_small_pane_g4_ParamLimits

0xb31e,	// (0x0001eb3f) status_small_pane_g4

0xb32c,	// (0x0001eb4d) status_small_pane_g5_ParamLimits

0xb32c,	// (0x0001eb4d) status_small_pane_g5

0x1e61,	// (0x00015682) status_small_pane_g6_ParamLimits

0x1e61,	// (0x00015682) status_small_pane_g6

0x0007,

0xf74d,	// (0x00022f6e) status_small_pane_g_ParamLimits

0xf74d,	// (0x00022f6e) status_small_pane_g

0x1e90,	// (0x000156b1) status_small_pane_t1

0xb342,	// (0x0001eb63) status_small_wait_pane_ParamLimits

0xb342,	// (0x0001eb63) status_small_wait_pane

0xb10a,	// (0x0001e92b) aid_levels_signal_ParamLimits

0xb10a,	// (0x0001e92b) aid_levels_signal

0xb122,	// (0x0001e943) signal_pane_g1_ParamLimits

0xb122,	// (0x0001e943) signal_pane_g1

0xb13d,	// (0x0001e95e) signal_pane_g2_ParamLimits

0xb13d,	// (0x0001e95e) signal_pane_g2

0x0003,

0xf6de,	// (0x00022eff) signal_pane_g_ParamLimits

0xf6de,	// (0x00022eff) signal_pane_g

0x1632,	// (0x00014e53) context_pane_g1

0xa5dc,	// (0x0001ddfd) title_pane_g1

0xa61f,	// (0x0001de40) title_pane_t1

0xc719,	// (0x0001ff3a) title_pane_t2

0xc73f,	// (0x0001ff60) title_pane_t3

0x0002,

0xf532,	// (0x00022d53) title_pane_t

0xb729,	// (0x0001ef4a) aid_levels_battery_ParamLimits

0xb729,	// (0x0001ef4a) aid_levels_battery

0xb745,	// (0x0001ef66) battery_pane_g1_ParamLimits

0xb745,	// (0x0001ef66) battery_pane_g1

0xb762,	// (0x0001ef83) battery_pane_g2_ParamLimits

0xb762,	// (0x0001ef83) battery_pane_g2

0x0001,

0xf781,	// (0x00022fa2) battery_pane_g_ParamLimits

0xf781,	// (0x00022fa2) battery_pane_g

0xb9b1,	// (0x0001f1d2) uni_indicator_pane_g1

0xb9c7,	// (0x0001f1e8) uni_indicator_pane_g2

0xb9dd,	// (0x0001f1fe) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x00023113) uni_indicator_pane_g

0x1a5f,	// (0x00015280) navi_icon_pane_ParamLimits

0x1a5f,	// (0x00015280) navi_icon_pane

0x19a6,	// (0x000151c7) navi_midp_pane

0x1a7b,	// (0x0001529c) navi_navi_pane

0x1a85,	// (0x000152a6) navi_text_pane_ParamLimits

0x1a85,	// (0x000152a6) navi_text_pane

0xc6f9,	// (0x0001ff1a) status_small_wait_pane_g1

0xca7a,	// (0x0002029b) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0002310e) status_small_wait_pane_g

0xb950,	// (0x0001f171) navi_navi_icon_text_pane

0xb958,	// (0x0001f179) navi_navi_pane_g1_ParamLimits

0xb958,	// (0x0001f179) navi_navi_pane_g1

0xb96a,	// (0x0001f18b) navi_navi_pane_g2_ParamLimits

0xb96a,	// (0x0001f18b) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x000230dc) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x000230dc) navi_navi_pane_g

0x344d,	// (0x00016c6e) navi_navi_tabs_pane

0xb97c,	// (0x0001f19d) navi_navi_text_pane

0xb950,	// (0x0001f171) navi_navi_volume_pane

0xb93e,	// (0x0001f15f) navi_text_pane_t1

0xb932,	// (0x0001f153) navi_icon_pane_g1

0x3344,	// (0x00016b65) navi_navi_text_pane_t1

0x9eca,	// (0x0001d6eb) navi_navi_volume_pane_g1

0x9ed2,	// (0x0001d6f3) volume_small_pane

0xb88e,	// (0x0001f0af) navi_navi_icon_text_pane_g1

0xb896,	// (0x0001f0b7) navi_navi_icon_text_pane_t1

0x1a7b,	// (0x0001529c) navi_tabs_2_long_pane

0x1a7b,	// (0x0001529c) navi_tabs_2_pane

0x1a7b,	// (0x0001529c) navi_tabs_3_long_pane

0x1a7b,	// (0x0001529c) navi_tabs_3_pane

0x1a7b,	// (0x0001529c) navi_tabs_4_pane

0x9eaa,	// (0x0001d6cb) tabs_2_active_pane_ParamLimits

0x9eaa,	// (0x0001d6cb) tabs_2_active_pane

0x9eba,	// (0x0001d6db) tabs_2_passive_pane_ParamLimits

0x9eba,	// (0x0001d6db) tabs_2_passive_pane

0x9e78,	// (0x0001d699) tabs_3_active_pane_ParamLimits

0x9e78,	// (0x0001d699) tabs_3_active_pane

0x9e88,	// (0x0001d6a9) tabs_3_passive_pane_ParamLimits

0x9e88,	// (0x0001d6a9) tabs_3_passive_pane

0x9e99,	// (0x0001d6ba) tabs_3_passive_pane_cp_ParamLimits

0x9e99,	// (0x0001d6ba) tabs_3_passive_pane_cp

0x9e34,	// (0x0001d655) tabs_4_active_pane_ParamLimits

0x9e34,	// (0x0001d655) tabs_4_active_pane

0x9e45,	// (0x0001d666) tabs_4_passive_pane_ParamLimits

0x9e45,	// (0x0001d666) tabs_4_passive_pane

0x9e56,	// (0x0001d677) tabs_4_passive_pane_cp_ParamLimits

0x9e56,	// (0x0001d677) tabs_4_passive_pane_cp

0x9e67,	// (0x0001d688) tabs_4_passive_pane_cp2_ParamLimits

0x9e67,	// (0x0001d688) tabs_4_passive_pane_cp2

0x9e10,	// (0x0001d631) tabs_2_long_active_pane_ParamLimits

0x9e10,	// (0x0001d631) tabs_2_long_active_pane

0x9e22,	// (0x0001d643) tabs_2_long_passive_pane_ParamLimits

0x9e22,	// (0x0001d643) tabs_2_long_passive_pane

0x9dd7,	// (0x0001d5f8) tabs_3_long_active_pane_ParamLimits

0x9dd7,	// (0x0001d5f8) tabs_3_long_active_pane

0x9dea,	// (0x0001d60b) tabs_3_long_passive_pane_ParamLimits

0x9dea,	// (0x0001d60b) tabs_3_long_passive_pane

0x9dfd,	// (0x0001d61e) tabs_3_long_passive_pane_cp_ParamLimits

0x9dfd,	// (0x0001d61e) tabs_3_long_passive_pane_cp

0xee12,	// (0x00022633) volume_small_pane_g1

0x9d86,	// (0x0001d5a7) volume_small_pane_g2

0x9d8f,	// (0x0001d5b0) volume_small_pane_g3

0x9d98,	// (0x0001d5b9) volume_small_pane_g4

0x9da1,	// (0x0001d5c2) volume_small_pane_g5

0x9daa,	// (0x0001d5cb) volume_small_pane_g6

0x9db3,	// (0x0001d5d4) volume_small_pane_g7

0x9dbc,	// (0x0001d5dd) volume_small_pane_g8

0x9dc5,	// (0x0001d5e6) volume_small_pane_g9

0x9dce,	// (0x0001d5ef) volume_small_pane_g10

0x0009,

0xf887,	// (0x000230a8) volume_small_pane_g

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp2_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp2

0xa6ab,	// (0x0001decc) tabs_3_active_pane_g1

0xa6b3,	// (0x0001ded4) tabs_3_active_pane_t1

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp2_ParamLimits

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp2

0xa6ab,	// (0x0001decc) tabs_3_passive_pane_g1

0xa6b3,	// (0x0001ded4) tabs_3_passive_pane_t1

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp3_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp3

0xa6c5,	// (0x0001dee6) tabs_4_active_pane_g1

0xa6cd,	// (0x0001deee) tabs_4_active_pane_t1

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp3_ParamLimits

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp3

0xa6c5,	// (0x0001dee6) tabs_4_1_passive_pane_g1

0xa6cd,	// (0x0001deee) tabs_4_1_passive_pane_t1

0x1f2b,	// (0x0001574c) list_highlight_pane_cp2

0xba70,	// (0x0001f291) list_set_pane_ParamLimits

0xba70,	// (0x0001f291) list_set_pane

0xbb32,	// (0x0001f353) main_pane_set_t1_ParamLimits

0xbb32,	// (0x0001f353) main_pane_set_t1

0xbb52,	// (0x0001f373) main_pane_set_t2_ParamLimits

0xbb52,	// (0x0001f373) main_pane_set_t2

0xbb66,	// (0x0001f387) main_pane_set_t3_ParamLimits

0xbb66,	// (0x0001f387) main_pane_set_t3

0xbb7a,	// (0x0001f39b) main_pane_set_t4_ParamLimits

0xbb7a,	// (0x0001f39b) main_pane_set_t4

0x0003,

0xf957,	// (0x00023178) main_pane_set_t_ParamLimits

0xf957,	// (0x00023178) main_pane_set_t

0xbb8e,	// (0x0001f3af) setting_code_pane

0x3ad7,	// (0x000172f8) setting_slider_graphic_pane

0x3ad7,	// (0x000172f8) setting_slider_pane

0x3ad7,	// (0x000172f8) setting_text_pane

0x3ad7,	// (0x000172f8) setting_volume_pane

0xe15e,	// (0x0002197f) volume_set_pane

0xc75f,	// (0x0001ff80) bg_set_opt_pane_cp

0xe168,	// (0x00021989) setting_slider_pane_t1

0xe181,	// (0x000219a2) setting_slider_pane_t2

0xe19b,	// (0x000219bc) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00022d5a) setting_slider_pane_t

0xe1b3,	// (0x000219d4) slider_set_pane

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp2

0xc76d,	// (0x0001ff8e) setting_slider_graphic_pane_g1

0xe1c9,	// (0x000219ea) setting_slider_graphic_pane_t1

0xe1d9,	// (0x000219fa) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00022d61) setting_slider_graphic_pane_t

0xe1e9,	// (0x00021a0a) slider_set_pane_cp

0xc703,	// (0x0001ff24) input_focus_pane_cp1

0x3970,	// (0x00017191) list_set_text_pane

0xc6f9,	// (0x0001ff1a) setting_text_pane_g1

0xc703,	// (0x0001ff24) input_focus_pane_cp2

0xc6f9,	// (0x0001ff1a) setting_code_pane_g1

0xc776,	// (0x0001ff97) setting_code_pane_t1

0xc784,	// (0x0001ffa5) set_text_pane_t1_ParamLimits

0xc784,	// (0x0001ffa5) set_text_pane_t1

0xe36b,	// (0x00021b8c) set_opt_bg_pane_g1

0xe373,	// (0x00021b94) set_opt_bg_pane_g2

0x3948,	// (0x00017169) set_opt_bg_pane_g3

0xe383,	// (0x00021ba4) set_opt_bg_pane_g4

0xe38b,	// (0x00021bac) set_opt_bg_pane_g5

0xe393,	// (0x00021bb4) set_opt_bg_pane_g6

0x3952,	// (0x00017173) set_opt_bg_pane_g7

0x395c,	// (0x0001717d) set_opt_bg_pane_g8

0x3966,	// (0x00017187) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x00023165) set_opt_bg_pane_g

0x393b,	// (0x0001715c) slider_set_pane_g1

0xeef2,	// (0x00022713) slider_set_pane_g2

0x0006,

0xf935,	// (0x00023156) slider_set_pane_g

0xee7a,	// (0x0002269b) volume_set_pane_g1

0xee84,	// (0x000226a5) volume_set_pane_g2

0xee8e,	// (0x000226af) volume_set_pane_g3

0xee98,	// (0x000226b9) volume_set_pane_g4

0xeea2,	// (0x000226c3) volume_set_pane_g5

0xeeac,	// (0x000226cd) volume_set_pane_g6

0xeeb6,	// (0x000226d7) volume_set_pane_g7

0xeec0,	// (0x000226e1) volume_set_pane_g8

0xeeca,	// (0x000226eb) volume_set_pane_g9

0xeed4,	// (0x000226f5) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0002312e) volume_set_pane_g

0xa6df,	// (0x0001df00) indicator_pane_ParamLimits

0xa6df,	// (0x0001df00) indicator_pane

0xa70b,	// (0x0001df2c) main_idle_pane_g2_ParamLimits

0xa70b,	// (0x0001df2c) main_idle_pane_g2

0xa743,	// (0x0001df64) main_pane_idle_g1_ParamLimits

0xa743,	// (0x0001df64) main_pane_idle_g1

0xc79e,	// (0x0001ffbf) popup_clock_digital_analogue_window_ParamLimits

0xc79e,	// (0x0001ffbf) popup_clock_digital_analogue_window

0xa76d,	// (0x0001df8e) soft_indicator_pane_ParamLimits

0xa76d,	// (0x0001df8e) soft_indicator_pane

0xa789,	// (0x0001dfaa) wallpaper_pane_ParamLimits

0xa789,	// (0x0001dfaa) wallpaper_pane

0xc6f9,	// (0x0001ff1a) wallpaper_pane_g1

0xa79b,	// (0x0001dfbc) indicator_pane_g1_ParamLimits

0xa79b,	// (0x0001dfbc) indicator_pane_g1

0x3e41,	// (0x00017662) navi_navi_icon_text_pane_srt_g1

0xc7cc,	// (0x0001ffed) soft_indicator_pane_t1

0xc7e6,	// (0x00020007) aid_ps_area_pane

0xa7b4,	// (0x0001dfd5) aid_ps_clock_pane

0xc7f7,	// (0x00020018) aid_ps_indicator_pane

0xc803,	// (0x00020024) indicator_ps_pane_ParamLimits

0xc803,	// (0x00020024) indicator_ps_pane

0xc812,	// (0x00020033) power_save_pane_g1_ParamLimits

0xc812,	// (0x00020033) power_save_pane_g1

0xc81e,	// (0x0002003f) power_save_pane_g2_ParamLimits

0xc81e,	// (0x0002003f) power_save_pane_g2

0xdf91,	// (0x000217b2) aid_navinavi_width_pane

0xc7e6,	// (0x00020007) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00022d66) power_save_pane_g_ParamLimits

0xf545,	// (0x00022d66) power_save_pane_g

0xc82c,	// (0x0002004d) power_save_pane_t1_ParamLimits

0xc82c,	// (0x0002004d) power_save_pane_t1

0xa7b4,	// (0x0001dfd5) aid_ps_clock_pane_ParamLimits

0xc7f7,	// (0x00020018) aid_ps_indicator_pane_ParamLimits

0xc83e,	// (0x0002005f) power_save_pane_t4_ParamLimits

0xc83e,	// (0x0002005f) power_save_pane_t4

0x0001,

0xf54a,	// (0x00022d6b) power_save_pane_t_ParamLimits

0xf54a,	// (0x00022d6b) power_save_pane_t

0xc868,	// (0x00020089) power_save_t3_ParamLimits

0xc868,	// (0x00020089) power_save_t3

0xc853,	// (0x00020074) power_save_t2_ParamLimits

0xc853,	// (0x00020074) power_save_t2

0xc87d,	// (0x0002009e) indicator_ps_pane_g1

0xa7c2,	// (0x0001dfe3) ai_gene_pane_ParamLimits

0xa7c2,	// (0x0001dfe3) ai_gene_pane

0xa7d9,	// (0x0001dffa) ai_links_pane_ParamLimits

0xa7d9,	// (0x0001dffa) ai_links_pane

0xa7f1,	// (0x0001e012) indicator_pane_cp1_ParamLimits

0xa7f1,	// (0x0001e012) indicator_pane_cp1

0xa800,	// (0x0001e021) main_pane_idle_g1_cp_ParamLimits

0xa800,	// (0x0001e021) main_pane_idle_g1_cp

0xc886,	// (0x000200a7) popup_ai_links_title_window

0xa818,	// (0x0001e039) soft_indicator_pane_cp1_ParamLimits

0xa818,	// (0x0001e039) soft_indicator_pane_cp1

0x36fc,	// (0x00016f1d) ai_links_pane_g1

0x3705,	// (0x00016f26) grid_ai_links_pane

0xb9a8,	// (0x0001f1c9) ai_gene_pane_1

0x36ea,	// (0x00016f0b) ai_gene_pane_2

0x36f3,	// (0x00016f14) list_highlight_pane_cp4

0xb984,	// (0x0001f1a5) cell_ai_link_pane_ParamLimits

0xb984,	// (0x0001f1a5) cell_ai_link_pane

0x36b9,	// (0x00016eda) cell_ai_link_pane_g1

0xca7a,	// (0x0002029b) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x00023109) cell_ai_link_pane_g

0xc703,	// (0x0001ff24) grid_highlight_cp2

0xc703,	// (0x0001ff24) bg_popup_sub_pane_cp1

0xc89d,	// (0x000200be) popup_ai_links_title_window_t1

0x3605,	// (0x00016e26) ai_gene_pane_1_g1_ParamLimits

0x3605,	// (0x00016e26) ai_gene_pane_1_g1

0x3611,	// (0x00016e32) ai_gene_pane_1_g2_ParamLimits

0x3611,	// (0x00016e32) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x000230ff) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x000230ff) ai_gene_pane_1_g

0x361e,	// (0x00016e3f) ai_gene_pane_1_t1_ParamLimits

0x361e,	// (0x00016e3f) ai_gene_pane_1_t1

0x3652,	// (0x00016e73) grid_ai_soft_ind_pane

0x35f0,	// (0x00016e11) ai_gene_pane_2_t1_ParamLimits

0x35f0,	// (0x00016e11) ai_gene_pane_2_t1

0xa82c,	// (0x0001e04d) main_pane_empty_t1_ParamLimits

0xa82c,	// (0x0001e04d) main_pane_empty_t1

0xa844,	// (0x0001e065) main_pane_empty_t2_ParamLimits

0xa844,	// (0x0001e065) main_pane_empty_t2

0xa859,	// (0x0001e07a) main_pane_empty_t3_ParamLimits

0xa859,	// (0x0001e07a) main_pane_empty_t3

0xa86b,	// (0x0001e08c) main_pane_empty_t4_ParamLimits

0xa86b,	// (0x0001e08c) main_pane_empty_t4

0xa87d,	// (0x0001e09e) main_pane_empty_t5_ParamLimits

0xa87d,	// (0x0001e09e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00022d70) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00022d70) main_pane_empty_t

0xe429,	// (0x00021c4a) bg_popup_window_pane_ParamLimits

0xe429,	// (0x00021c4a) bg_popup_window_pane

0x3352,	// (0x00016b73) find_popup_pane_cp2_ParamLimits

0x3352,	// (0x00016b73) find_popup_pane_cp2

0x335e,	// (0x00016b7f) heading_pane_ParamLimits

0x335e,	// (0x00016b7f) heading_pane

0xc703,	// (0x0001ff24) bg_popup_sub_pane

0xb8b3,	// (0x0001f0d4) bg_popup_window_pane_g1_ParamLimits

0xb8b3,	// (0x0001f0d4) bg_popup_window_pane_g1

0xb8c2,	// (0x0001f0e3) bg_popup_window_pane_g2_ParamLimits

0xb8c2,	// (0x0001f0e3) bg_popup_window_pane_g2

0xb8ce,	// (0x0001f0ef) bg_popup_window_pane_g3_ParamLimits

0xb8ce,	// (0x0001f0ef) bg_popup_window_pane_g3

0xb8da,	// (0x0001f0fb) bg_popup_window_pane_g4_ParamLimits

0xb8da,	// (0x0001f0fb) bg_popup_window_pane_g4

0xb8e9,	// (0x0001f10a) bg_popup_window_pane_g5_ParamLimits

0xb8e9,	// (0x0001f10a) bg_popup_window_pane_g5

0xb8f9,	// (0x0001f11a) bg_popup_window_pane_g6_ParamLimits

0xb8f9,	// (0x0001f11a) bg_popup_window_pane_g6

0xb905,	// (0x0001f126) bg_popup_window_pane_g7_ParamLimits

0xb905,	// (0x0001f126) bg_popup_window_pane_g7

0xb914,	// (0x0001f135) bg_popup_window_pane_g8_ParamLimits

0xb914,	// (0x0001f135) bg_popup_window_pane_g8

0xb923,	// (0x0001f144) bg_popup_window_pane_g9_ParamLimits

0xb923,	// (0x0001f144) bg_popup_window_pane_g9

0x3338,	// (0x00016b59) bg_popup_window_pane_g10_ParamLimits

0x3338,	// (0x00016b59) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x000230c7) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x000230c7) bg_popup_window_pane_g

0x3261,	// (0x00016a82) bg_popup_heading_pane_ParamLimits

0x3261,	// (0x00016a82) bg_popup_heading_pane

0xef7a,	// (0x0002279b) tabs_4_passive_pane_cp_srt_ParamLimits

0xef7a,	// (0x0002279b) tabs_4_passive_pane_cp_srt

0xef8c,	// (0x000227ad) tabs_4_passive_pane_srt_ParamLimits

0x3275,	// (0x00016a96) heading_pane_g2

0xef8c,	// (0x000227ad) tabs_4_passive_pane_srt

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp3_srt

0x327d,	// (0x00016a9e) heading_pane_t1_ParamLimits

0x327d,	// (0x00016a9e) heading_pane_t1

0x3294,	// (0x00016ab5) heading_pane_t2_ParamLimits

0x3294,	// (0x00016ab5) heading_pane_t2

0x0001,

0xf8a1,	// (0x000230c2) heading_pane_t_ParamLimits

0xf8a1,	// (0x000230c2) heading_pane_t

0x2d8c,	// (0x000165ad) bg_popup_heading_pane_g1

0x2e3b,	// (0x0001665c) bg_popup_heading_pane_g2

0x2e45,	// (0x00016666) bg_popup_heading_pane_g3

0x2e4f,	// (0x00016670) bg_popup_heading_pane_g4

0x2e59,	// (0x0001667a) bg_popup_heading_pane_g5

0x2e63,	// (0x00016684) bg_popup_heading_pane_g6

0x2e6b,	// (0x0001668c) bg_popup_heading_pane_g7

0x2e73,	// (0x00016694) bg_popup_heading_pane_g8

0x2e7d,	// (0x0001669e) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0002307e) bg_popup_heading_pane_g

0x24a5,	// (0x00015cc6) bg_popup_sub_pane_g1

0x24b5,	// (0x00015cd6) bg_popup_sub_pane_g2

0x24ad,	// (0x00015cce) bg_popup_sub_pane_g3

0x24c5,	// (0x00015ce6) bg_popup_sub_pane_g4

0x24bd,	// (0x00015cde) bg_popup_sub_pane_g5

0x24cd,	// (0x00015cee) bg_popup_sub_pane_g6

0x24d5,	// (0x00015cf6) bg_popup_sub_pane_g7

0x24e5,	// (0x00015d06) bg_popup_sub_pane_g8

0x24dd,	// (0x00015cfe) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x00023058) bg_popup_sub_pane_g

0xc751,	// (0x0001ff72) bg_popup_window_pane_cp5_ParamLimits

0xc751,	// (0x0001ff72) bg_popup_window_pane_cp5

0xc8ba,	// (0x000200db) popup_note_window_g1_ParamLimits

0xc8ba,	// (0x000200db) popup_note_window_g1

0xc8c6,	// (0x000200e7) popup_note_window_t1_ParamLimits

0xc8c6,	// (0x000200e7) popup_note_window_t1

0xc8dc,	// (0x000200fd) popup_note_window_t2_ParamLimits

0xc8dc,	// (0x000200fd) popup_note_window_t2

0xc8f2,	// (0x00020113) popup_note_window_t3_ParamLimits

0xc8f2,	// (0x00020113) popup_note_window_t3

0xc908,	// (0x00020129) popup_note_window_t4_ParamLimits

0xc908,	// (0x00020129) popup_note_window_t4

0xc930,	// (0x00020151) popup_note_window_t5_ParamLimits

0xc930,	// (0x00020151) popup_note_window_t5

0x0004,

0xf55a,	// (0x00022d7b) popup_note_window_t_ParamLimits

0xf55a,	// (0x00022d7b) popup_note_window_t

0xc97a,	// (0x0002019b) bg_popup_window_pane_cp6_ParamLimits

0xc97a,	// (0x0002019b) bg_popup_window_pane_cp6

0x2d08,	// (0x00016529) popup_note_image_window_g1_ParamLimits

0x2d08,	// (0x00016529) popup_note_image_window_g1

0x2d14,	// (0x00016535) popup_note_image_window_g2_ParamLimits

0x2d14,	// (0x00016535) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0002304c) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0002304c) popup_note_image_window_g

0x2d2d,	// (0x0001654e) popup_note_image_window_t1_ParamLimits

0x2d2d,	// (0x0001654e) popup_note_image_window_t1

0x2d46,	// (0x00016567) popup_note_image_window_t2_ParamLimits

0x2d46,	// (0x00016567) popup_note_image_window_t2

0x2d5f,	// (0x00016580) popup_note_image_window_t3_ParamLimits

0x2d5f,	// (0x00016580) popup_note_image_window_t3

0x0002,

0xf830,	// (0x00023051) popup_note_image_window_t_ParamLimits

0xf830,	// (0x00023051) popup_note_image_window_t

0x2bc8,	// (0x000163e9) bg_popup_window_pane_cp7_ParamLimits

0x2bc8,	// (0x000163e9) bg_popup_window_pane_cp7

0x2bf8,	// (0x00016419) popup_note_wait_window_g1_ParamLimits

0x2bf8,	// (0x00016419) popup_note_wait_window_g1

0x2c04,	// (0x00016425) popup_note_wait_window_g2_ParamLimits

0x2c04,	// (0x00016425) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0002303a) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0002303a) popup_note_wait_window_g

0x2c1c,	// (0x0001643d) popup_note_wait_window_t1_ParamLimits

0x2c1c,	// (0x0001643d) popup_note_wait_window_t1

0x2c43,	// (0x00016464) popup_note_wait_window_t2_ParamLimits

0x2c43,	// (0x00016464) popup_note_wait_window_t2

0x2c61,	// (0x00016482) popup_note_wait_window_t3_ParamLimits

0x2c61,	// (0x00016482) popup_note_wait_window_t3

0x2c74,	// (0x00016495) popup_note_wait_window_t4_ParamLimits

0x2c74,	// (0x00016495) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x00023041) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x00023041) popup_note_wait_window_t

0x2c99,	// (0x000164ba) wait_bar_pane_ParamLimits

0x2c99,	// (0x000164ba) wait_bar_pane

0xc703,	// (0x0001ff24) wait_anim_pane

0xc703,	// (0x0001ff24) wait_border_pane

0xc6f9,	// (0x0001ff1a) wait_anim_pane_g1

0xc6f9,	// (0x0001ff1a) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00022efa) wait_anim_pane_g

0x2b6c,	// (0x0001638d) wait_border_pane_g1

0x2b77,	// (0x00016398) wait_border_pane_g2

0x2b80,	// (0x000163a1) wait_border_pane_g3

0x0002,

0xf812,	// (0x00023033) wait_border_pane_g

0x29d6,	// (0x000161f7) bg_popup_window_pane_cp16_ParamLimits

0x29d6,	// (0x000161f7) bg_popup_window_pane_cp16

0x2ad6,	// (0x000162f7) indicator_popup_pane_cp4_ParamLimits

0x2ad6,	// (0x000162f7) indicator_popup_pane_cp4

0x2aea,	// (0x0001630b) popup_query_data_window_t1_ParamLimits

0x2aea,	// (0x0001630b) popup_query_data_window_t1

0x2afc,	// (0x0001631d) popup_query_data_window_t2_ParamLimits

0x2afc,	// (0x0001631d) popup_query_data_window_t2

0x2b15,	// (0x00016336) popup_query_data_window_t3_ParamLimits

0x2b15,	// (0x00016336) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0002302c) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0002302c) popup_query_data_window_t

0x2b2f,	// (0x00016350) query_popup_data_pane_ParamLimits

0x2b2f,	// (0x00016350) query_popup_data_pane

0x2b43,	// (0x00016364) query_popup_data_pane_cp1_ParamLimits

0x2b43,	// (0x00016364) query_popup_data_pane_cp1

0x29d6,	// (0x000161f7) bg_popup_window_pane_cp10_ParamLimits

0x29d6,	// (0x000161f7) bg_popup_window_pane_cp10

0x2a08,	// (0x00016229) indicator_popup_pane_ParamLimits

0x2a08,	// (0x00016229) indicator_popup_pane

0x2a2a,	// (0x0001624b) popup_query_code_window_t1_ParamLimits

0x2a2a,	// (0x0001624b) popup_query_code_window_t1

0x2a44,	// (0x00016265) popup_query_code_window_t2_ParamLimits

0x2a44,	// (0x00016265) popup_query_code_window_t2

0x2a8d,	// (0x000162ae) popup_query_code_window_t3_ParamLimits

0x2a8d,	// (0x000162ae) popup_query_code_window_t3

0x0002,

0xf804,	// (0x00023025) popup_query_code_window_t_ParamLimits

0xf804,	// (0x00023025) popup_query_code_window_t

0x2abc,	// (0x000162dd) query_popup_pane_ParamLimits

0x2abc,	// (0x000162dd) query_popup_pane

0xc97a,	// (0x0002019b) bg_popup_window_pane_cp15_ParamLimits

0xc97a,	// (0x0002019b) bg_popup_window_pane_cp15

0xc99a,	// (0x000201bb) indicator_popup_pane_cp1_ParamLimits

0xc99a,	// (0x000201bb) indicator_popup_pane_cp1

0xc9ad,	// (0x000201ce) indicator_popup_pane_cp2_ParamLimits

0xc9ad,	// (0x000201ce) indicator_popup_pane_cp2

0xc9c8,	// (0x000201e9) popup_query_data_code_window_g1_ParamLimits

0xc9c8,	// (0x000201e9) popup_query_data_code_window_g1

0xc9db,	// (0x000201fc) popup_query_data_code_window_t1_ParamLimits

0xc9db,	// (0x000201fc) popup_query_data_code_window_t1

0xc9ed,	// (0x0002020e) popup_query_data_code_window_t2_ParamLimits

0xc9ed,	// (0x0002020e) popup_query_data_code_window_t2

0xc9ff,	// (0x00020220) popup_query_data_code_window_t3_ParamLimits

0xc9ff,	// (0x00020220) popup_query_data_code_window_t3

0xca15,	// (0x00020236) popup_query_data_code_window_t4_ParamLimits

0xca15,	// (0x00020236) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00022d86) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00022d86) popup_query_data_code_window_t

0xed7d,	// (0x0002259e) list_single_midp_graphic_pane_g3

0xca2f,	// (0x00020250) query_popup_data_pane_cp2_ParamLimits

0xca42,	// (0x00020263) query_popup_pane_cp2_ParamLimits

0xca42,	// (0x00020263) query_popup_pane_cp2

0xc703,	// (0x0001ff24) bg_popup_window_pane_cp11

0x29ba,	// (0x000161db) heading_pane_cp5

0x29c2,	// (0x000161e3) listscroll_popup_info_pane

0xc703,	// (0x0001ff24) input_focus_pane_cp3

0xca5d,	// (0x0002027e) query_popup_pane_t1

0xca6b,	// (0x0002028c) list_popup_info_pane_ParamLimits

0xca6b,	// (0x0002028c) list_popup_info_pane

0xca7a,	// (0x0002029b) listscroll_popup_info_pane_g1

0xca82,	// (0x000202a3) scroll_pane_cp7

0xca8c,	// (0x000202ad) popup_info_list_pane_t1_ParamLimits

0xca8c,	// (0x000202ad) popup_info_list_pane_t1

0xcaa6,	// (0x000202c7) popup_info_list_pane_t2_ParamLimits

0xcaa6,	// (0x000202c7) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00022d8f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00022d8f) popup_info_list_pane_t

0xc703,	// (0x0001ff24) bg_popup_window_pane_cp12

0x3e5b,	// (0x0001767c) find_popup_pane

0xc75f,	// (0x0001ff80) bg_popup_window_pane_cp3

0xcac0,	// (0x000202e1) heading_pane_cp3

0xcacf,	// (0x000202f0) listscroll_popup_graphic_pane

0xc703,	// (0x0001ff24) bg_popup_window_pane_cp4

0xa8df,	// (0x0001e100) heading_pane_cp4

0xcadf,	// (0x00020300) listscroll_popup_colour_pane

0xa8e9,	// (0x0001e10a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa8e9,	// (0x0001e10a) cell_large_graphic_colour_none_popup_pane

0xa8fd,	// (0x0001e11e) grid_large_graphic_colour_popup_pane_ParamLimits

0xa8fd,	// (0x0001e11e) grid_large_graphic_colour_popup_pane

0xa925,	// (0x0001e146) listscroll_popup_colour_pane_g1_ParamLimits

0xa925,	// (0x0001e146) listscroll_popup_colour_pane_g1

0xa93c,	// (0x0001e15d) listscroll_popup_colour_pane_g2_ParamLimits

0xa93c,	// (0x0001e15d) listscroll_popup_colour_pane_g2

0xa953,	// (0x0001e174) listscroll_popup_colour_pane_g3_ParamLimits

0xa953,	// (0x0001e174) listscroll_popup_colour_pane_g3

0xa963,	// (0x0001e184) listscroll_popup_colour_pane_g4_ParamLimits

0xa963,	// (0x0001e184) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00022d94) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00022d94) listscroll_popup_colour_pane_g

0xcae7,	// (0x00020308) scroll_pane_cp6_ParamLimits

0xcae7,	// (0x00020308) scroll_pane_cp6

0xa973,	// (0x0001e194) cell_large_graphic_colour_popup_pane_ParamLimits

0xa973,	// (0x0001e194) cell_large_graphic_colour_popup_pane

0xcaf9,	// (0x0002031a) cell_large_graphic_colour_none_popup_pane_t1

0xc703,	// (0x0001ff24) grid_highlight_pane_cp5

0xcb08,	// (0x00020329) cell_large_graphic_colour_popup_pane_g1

0xcb10,	// (0x00020331) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00022d9d) cell_large_graphic_colour_popup_pane_g

0xcb18,	// (0x00020339) cell_large_graphic_colour_popup_pane_g2_copy1

0xcb21,	// (0x00020342) grid_highlight_pane_cp4

0xcb29,	// (0x0002034a) bg_popup_window_pane_cp8_ParamLimits

0xcb29,	// (0x0002034a) bg_popup_window_pane_cp8

0xcb44,	// (0x00020365) popup_snote_single_text_window_g1_ParamLimits

0xcb44,	// (0x00020365) popup_snote_single_text_window_g1

0xcb56,	// (0x00020377) popup_snote_single_text_window_t1_ParamLimits

0xcb56,	// (0x00020377) popup_snote_single_text_window_t1

0xcb69,	// (0x0002038a) popup_snote_single_text_window_t2_ParamLimits

0xcb69,	// (0x0002038a) popup_snote_single_text_window_t2

0xcb7c,	// (0x0002039d) popup_snote_single_text_window_t3_ParamLimits

0xcb7c,	// (0x0002039d) popup_snote_single_text_window_t3

0xcbb5,	// (0x000203d6) popup_snote_single_text_window_t4_ParamLimits

0xcbb5,	// (0x000203d6) popup_snote_single_text_window_t4

0xcbe9,	// (0x0002040a) popup_snote_single_text_window_t5_ParamLimits

0xcbe9,	// (0x0002040a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00022da2) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00022da2) popup_snote_single_text_window_t

0xcc18,	// (0x00020439) bg_popup_window_pane_cp9_ParamLimits

0xcc18,	// (0x00020439) bg_popup_window_pane_cp9

0xcb44,	// (0x00020365) popup_snote_single_graphic_window_g1_ParamLimits

0xcb44,	// (0x00020365) popup_snote_single_graphic_window_g1

0xcc26,	// (0x00020447) popup_snote_single_graphic_window_g2_ParamLimits

0xcc26,	// (0x00020447) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00022dad) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00022dad) popup_snote_single_graphic_window_g

0xcc32,	// (0x00020453) popup_snote_single_graphic_window_t1_ParamLimits

0xcc32,	// (0x00020453) popup_snote_single_graphic_window_t1

0xcc45,	// (0x00020466) popup_snote_single_graphic_window_t2_ParamLimits

0xcc45,	// (0x00020466) popup_snote_single_graphic_window_t2

0xcc58,	// (0x00020479) popup_snote_single_graphic_window_t3_ParamLimits

0xcc58,	// (0x00020479) popup_snote_single_graphic_window_t3

0xcc91,	// (0x000204b2) popup_snote_single_graphic_window_t4_ParamLimits

0xcc91,	// (0x000204b2) popup_snote_single_graphic_window_t4

0xccc5,	// (0x000204e6) popup_snote_single_graphic_window_t5_ParamLimits

0xccc5,	// (0x000204e6) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00022db2) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00022db2) popup_snote_single_graphic_window_t

0x3d99,	// (0x000175ba) grid_graphic_popup_pane_ParamLimits

0x3d99,	// (0x000175ba) grid_graphic_popup_pane

0x3dc7,	// (0x000175e8) listscroll_popup_graphic_pane_g1_ParamLimits

0x3dc7,	// (0x000175e8) listscroll_popup_graphic_pane_g1

0xbcdf,	// (0x0001f500) listscroll_popup_graphic_pane_g2_ParamLimits

0xbcdf,	// (0x0001f500) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x000231a2) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x000231a2) listscroll_popup_graphic_pane_g

0x3def,	// (0x00017610) scroll_pane_cp5

0xbc97,	// (0x0001f4b8) cell_graphic_popup_pane_ParamLimits

0xbc97,	// (0x0001f4b8) cell_graphic_popup_pane

0x3d12,	// (0x00017533) cell_graphic_popup_pane_g1

0x3d1a,	// (0x0001753b) cell_graphic_popup_pane_g2

0xcb18,	// (0x00020339) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0002319b) cell_graphic_popup_pane_g

0x3d23,	// (0x00017544) cell_graphic_popup_pane_t2

0xcb21,	// (0x00020342) grid_highlight_pane_cp3

0xcd06,	// (0x00020527) list_gen_pane_ParamLimits

0xcd06,	// (0x00020527) list_gen_pane

0xcd2e,	// (0x0002054f) scroll_pane

0xbc4e,	// (0x0001f46f) bg_list_pane_g1_ParamLimits

0xbc4e,	// (0x0001f46f) bg_list_pane_g1

0x3c87,	// (0x000174a8) bg_list_pane_g2_ParamLimits

0x3c87,	// (0x000174a8) bg_list_pane_g2

0x3c9c,	// (0x000174bd) bg_list_pane_g3_ParamLimits

0x3c9c,	// (0x000174bd) bg_list_pane_g3

0x3cb0,	// (0x000174d1) bg_list_pane_g4_ParamLimits

0x3cb0,	// (0x000174d1) bg_list_pane_g4

0xbc6b,	// (0x0001f48c) bg_list_pane_g5_ParamLimits

0xbc6b,	// (0x0001f48c) bg_list_pane_g5

0x0004,

0xf96f,	// (0x00023190) bg_list_pane_g_ParamLimits

0xf96f,	// (0x00023190) bg_list_pane_g

0xbbe8,	// (0x0001f409) list_double2_graphic_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double2_graphic_large_graphic_pane

0xbbe8,	// (0x0001f409) list_double2_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double2_graphic_pane

0xbbe8,	// (0x0001f409) list_double2_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double2_large_graphic_pane

0xbbe8,	// (0x0001f409) list_double2_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double2_pane

0xbbe8,	// (0x0001f409) list_double_graphic_heading_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_graphic_heading_pane

0xbbe8,	// (0x0001f409) list_double_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_graphic_pane

0xbbe8,	// (0x0001f409) list_double_heading_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_heading_pane

0xbbe8,	// (0x0001f409) list_double_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_large_graphic_pane

0xbbe8,	// (0x0001f409) list_double_number_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_number_pane

0xbbe8,	// (0x0001f409) list_double_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_pane

0xbbe8,	// (0x0001f409) list_double_time_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_double_time_pane

0xbbe8,	// (0x0001f409) list_setting_number_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_setting_number_pane

0xbbe8,	// (0x0001f409) list_setting_pane_ParamLimits

0xbbe8,	// (0x0001f409) list_setting_pane

0xbbfc,	// (0x0001f41d) list_single_2graphic_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_2graphic_pane

0xbbfc,	// (0x0001f41d) list_single_graphic_heading_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_graphic_heading_pane

0xbbfc,	// (0x0001f41d) list_single_graphic_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_graphic_pane

0xbbfc,	// (0x0001f41d) list_single_heading_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_heading_pane

0xbbfc,	// (0x0001f41d) list_single_large_graphic_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_large_graphic_pane

0xbbfc,	// (0x0001f41d) list_single_number_heading_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_number_heading_pane

0xbbfc,	// (0x0001f41d) list_single_number_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_number_pane

0xbbfc,	// (0x0001f41d) list_single_pane_ParamLimits

0xbbfc,	// (0x0001f41d) list_single_pane

0xc703,	// (0x0001ff24) list_highlight_pane_cp1

0x241b,	// (0x00015c3c) list_single_pane_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_pane_g1

0x2427,	// (0x00015c48) list_single_pane_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_pane_g

0x4488,	// (0x00017ca9) list_single_pane_t1_ParamLimits

0x4488,	// (0x00017ca9) list_single_pane_t1

0x241b,	// (0x00015c3c) list_single_number_pane_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_number_pane_g1

0x2427,	// (0x00015c48) list_single_number_pane_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_number_pane_g

0x2433,	// (0x00015c54) list_single_number_pane_t1_ParamLimits

0x2433,	// (0x00015c54) list_single_number_pane_t1

0x4581,	// (0x00017da2) list_single_number_pane_t2_ParamLimits

0x4581,	// (0x00017da2) list_single_number_pane_t2

0x0001,

0xf930,	// (0x00023151) list_single_number_pane_t_ParamLimits

0xf930,	// (0x00023151) list_single_number_pane_t

0xa99e,	// (0x0001e1bf) list_single_graphic_pane_g1_ParamLimits

0xa99e,	// (0x0001e1bf) list_single_graphic_pane_g1

0x241b,	// (0x00015c3c) list_single_graphic_pane_g2_ParamLimits

0x241b,	// (0x00015c3c) list_single_graphic_pane_g2

0x2427,	// (0x00015c48) list_single_graphic_pane_g3_ParamLimits

0x2427,	// (0x00015c48) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00022dbd) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00022dbd) list_single_graphic_pane_g

0xa9aa,	// (0x0001e1cb) list_single_graphic_pane_t1_ParamLimits

0xa9aa,	// (0x0001e1cb) list_single_graphic_pane_t1

0x241b,	// (0x00015c3c) list_single_heading_pane_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_heading_pane_g1

0x2427,	// (0x00015c48) list_single_heading_pane_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_heading_pane_g

0x4438,	// (0x00017c59) list_single_heading_pane_t1_ParamLimits

0x4438,	// (0x00017c59) list_single_heading_pane_t1

0xa9c0,	// (0x0001e1e1) list_single_heading_pane_t2_ParamLimits

0xa9c0,	// (0x0001e1e1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00022dc9) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00022dc9) list_single_heading_pane_t

0x241b,	// (0x00015c3c) list_single_number_heading_pane_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_number_heading_pane_g1

0x2427,	// (0x00015c48) list_single_number_heading_pane_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_number_heading_pane_g

0x4438,	// (0x00017c59) list_single_number_heading_pane_t1_ParamLimits

0x4438,	// (0x00017c59) list_single_number_heading_pane_t1

0xa9d2,	// (0x0001e1f3) list_single_number_heading_pane_t2_ParamLimits

0xa9d2,	// (0x0001e1f3) list_single_number_heading_pane_t2

0x4464,	// (0x00017c85) list_single_number_heading_pane_t3_ParamLimits

0x4464,	// (0x00017c85) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00022dce) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00022dce) list_single_number_heading_pane_t

0x240f,	// (0x00015c30) list_single_graphic_heading_pane_g1_ParamLimits

0x240f,	// (0x00015c30) list_single_graphic_heading_pane_g1

0xa9e4,	// (0x0001e205) list_single_graphic_heading_pane_g4_ParamLimits

0xa9e4,	// (0x0001e205) list_single_graphic_heading_pane_g4

0x2427,	// (0x00015c48) list_single_graphic_heading_pane_g5_ParamLimits

0x2427,	// (0x00015c48) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00022dd5) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00022dd5) list_single_graphic_heading_pane_g

0x4438,	// (0x00017c59) list_single_graphic_heading_pane_t1_ParamLimits

0x4438,	// (0x00017c59) list_single_graphic_heading_pane_t1

0xa9f5,	// (0x0001e216) list_single_graphic_heading_pane_t2_ParamLimits

0xa9f5,	// (0x0001e216) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00022ddc) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00022ddc) list_single_graphic_heading_pane_t

0x449e,	// (0x00017cbf) list_single_large_graphic_pane_g1_ParamLimits

0x449e,	// (0x00017cbf) list_single_large_graphic_pane_g1

0x241b,	// (0x00015c3c) list_single_large_graphic_pane_g2_ParamLimits

0x241b,	// (0x00015c3c) list_single_large_graphic_pane_g2

0x2427,	// (0x00015c48) list_single_large_graphic_pane_g3_ParamLimits

0x2427,	// (0x00015c48) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00022de1) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00022de1) list_single_large_graphic_pane_g

0x2b77,	// (0x00016398) wait_border_pane_g2_copy1

0xaa07,	// (0x0001e228) list_single_large_graphic_pane_g4_cp2

0x44aa,	// (0x00017ccb) list_single_large_graphic_pane_t1_ParamLimits

0x44aa,	// (0x00017ccb) list_single_large_graphic_pane_t1

0xaa0f,	// (0x0001e230) list_double_pane_g1_ParamLimits

0xaa0f,	// (0x0001e230) list_double_pane_g1

0xaa1b,	// (0x0001e23c) list_double_pane_g2_ParamLimits

0xaa1b,	// (0x0001e23c) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00022de8) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00022de8) list_double_pane_g

0xaa27,	// (0x0001e248) list_double_pane_t1_ParamLimits

0xaa27,	// (0x0001e248) list_double_pane_t1

0xaa3d,	// (0x0001e25e) list_double_pane_t2_ParamLimits

0xaa3d,	// (0x0001e25e) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00022ded) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00022ded) list_double_pane_t

0xaa4f,	// (0x0001e270) list_double2_pane_g1_ParamLimits

0xaa4f,	// (0x0001e270) list_double2_pane_g1

0xaa60,	// (0x0001e281) list_double2_pane_g2_ParamLimits

0xaa60,	// (0x0001e281) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00022df2) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00022df2) list_double2_pane_g

0xaa6c,	// (0x0001e28d) list_double2_pane_t1_ParamLimits

0xaa6c,	// (0x0001e28d) list_double2_pane_t1

0xaa82,	// (0x0001e2a3) list_double2_pane_t2_ParamLimits

0xaa82,	// (0x0001e2a3) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00022df7) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00022df7) list_double2_pane_t

0xaa0f,	// (0x0001e230) list_double_number_pane_g1_ParamLimits

0xaa0f,	// (0x0001e230) list_double_number_pane_g1

0xaa1b,	// (0x0001e23c) list_double_number_pane_g2_ParamLimits

0xaa1b,	// (0x0001e23c) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00022de8) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00022de8) list_double_number_pane_g

0xaa94,	// (0x0001e2b5) list_double_number_pane_t1_ParamLimits

0xaa94,	// (0x0001e2b5) list_double_number_pane_t1

0xaaa6,	// (0x0001e2c7) list_double_number_pane_t2_ParamLimits

0xaaa6,	// (0x0001e2c7) list_double_number_pane_t2

0xaabc,	// (0x0001e2dd) list_double_number_pane_t3_ParamLimits

0xaabc,	// (0x0001e2dd) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00022dfc) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00022dfc) list_double_number_pane_t

0xaace,	// (0x0001e2ef) list_double_graphic_pane_g1_ParamLimits

0xaace,	// (0x0001e2ef) list_double_graphic_pane_g1

0xaada,	// (0x0001e2fb) list_double_graphic_pane_g2_ParamLimits

0xaada,	// (0x0001e2fb) list_double_graphic_pane_g2

0x41d9,	// (0x000179fa) list_double_graphic_pane_g3_ParamLimits

0x41d9,	// (0x000179fa) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00022e03) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00022e03) list_double_graphic_pane_g

0xaaf5,	// (0x0001e316) list_double_graphic_pane_t1_ParamLimits

0xaaf5,	// (0x0001e316) list_double_graphic_pane_t1

0xab0b,	// (0x0001e32c) list_double_graphic_pane_t2_ParamLimits

0xab0b,	// (0x0001e32c) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00022e0c) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00022e0c) list_double_graphic_pane_t

0xcd62,	// (0x00020583) list_double2_graphic_pane_g1_ParamLimits

0xcd62,	// (0x00020583) list_double2_graphic_pane_g1

0xab1d,	// (0x0001e33e) list_double2_graphic_pane_g2_ParamLimits

0xab1d,	// (0x0001e33e) list_double2_graphic_pane_g2

0xaa60,	// (0x0001e281) list_double2_graphic_pane_g3_ParamLimits

0xaa60,	// (0x0001e281) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00022e11) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00022e11) list_double2_graphic_pane_g

0xab29,	// (0x0001e34a) list_double2_graphic_pane_t1_ParamLimits

0xab29,	// (0x0001e34a) list_double2_graphic_pane_t1

0xab3f,	// (0x0001e360) list_double2_graphic_pane_t2_ParamLimits

0xab3f,	// (0x0001e360) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00022e18) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00022e18) list_double2_graphic_pane_t

0xab51,	// (0x0001e372) list_double_large_graphic_pane_g1_ParamLimits

0xab51,	// (0x0001e372) list_double_large_graphic_pane_g1

0xab70,	// (0x0001e391) list_double_large_graphic_pane_g2_ParamLimits

0xab70,	// (0x0001e391) list_double_large_graphic_pane_g2

0xaa1b,	// (0x0001e23c) list_double_large_graphic_pane_g3_ParamLimits

0xaa1b,	// (0x0001e23c) list_double_large_graphic_pane_g3

0xab81,	// (0x0001e3a2) list_double_large_graphic_pane_g4_ParamLimits

0xab81,	// (0x0001e3a2) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00022e1d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00022e1d) list_double_large_graphic_pane_g

0xab94,	// (0x0001e3b5) list_double_large_graphic_pane_t1_ParamLimits

0xab94,	// (0x0001e3b5) list_double_large_graphic_pane_t1

0xabad,	// (0x0001e3ce) list_double_large_graphic_pane_t2_ParamLimits

0xabad,	// (0x0001e3ce) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00022e28) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00022e28) list_double_large_graphic_pane_t

0xabbf,	// (0x0001e3e0) list_double2_large_graphic_pane_g1_ParamLimits

0xabbf,	// (0x0001e3e0) list_double2_large_graphic_pane_g1

0xaa4f,	// (0x0001e270) list_double2_large_graphic_pane_g2_ParamLimits

0xaa4f,	// (0x0001e270) list_double2_large_graphic_pane_g2

0xaa60,	// (0x0001e281) list_double2_large_graphic_pane_g3_ParamLimits

0xaa60,	// (0x0001e281) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00022e2d) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00022e2d) list_double2_large_graphic_pane_g

0xabcb,	// (0x0001e3ec) list_double2_large_graphic_pane_t1_ParamLimits

0xabcb,	// (0x0001e3ec) list_double2_large_graphic_pane_t1

0xabe1,	// (0x0001e402) list_double2_large_graphic_pane_t2_ParamLimits

0xabe1,	// (0x0001e402) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00022e34) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00022e34) list_double2_large_graphic_pane_t

0xabf3,	// (0x0001e414) list_double_heading_pane_g1_ParamLimits

0xabf3,	// (0x0001e414) list_double_heading_pane_g1

0xac04,	// (0x0001e425) list_double_heading_pane_g2_ParamLimits

0xac04,	// (0x0001e425) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00022e39) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00022e39) list_double_heading_pane_g

0xac10,	// (0x0001e431) list_double_heading_pane_t1_ParamLimits

0xac10,	// (0x0001e431) list_double_heading_pane_t1

0xac26,	// (0x0001e447) list_double_heading_pane_t2_ParamLimits

0xac26,	// (0x0001e447) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00022e3e) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00022e3e) list_double_heading_pane_t

0xac38,	// (0x0001e459) list_double_graphic_heading_pane_g1_ParamLimits

0xac38,	// (0x0001e459) list_double_graphic_heading_pane_g1

0xabf3,	// (0x0001e414) list_double_graphic_heading_pane_g2_ParamLimits

0xabf3,	// (0x0001e414) list_double_graphic_heading_pane_g2

0xac04,	// (0x0001e425) list_double_graphic_heading_pane_g3_ParamLimits

0xac04,	// (0x0001e425) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00022e43) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00022e43) list_double_graphic_heading_pane_g

0xac44,	// (0x0001e465) list_double_graphic_heading_pane_t1_ParamLimits

0xac44,	// (0x0001e465) list_double_graphic_heading_pane_t1

0xac5a,	// (0x0001e47b) list_double_graphic_heading_pane_t2_ParamLimits

0xac5a,	// (0x0001e47b) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00022e4a) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00022e4a) list_double_graphic_heading_pane_t

0xab70,	// (0x0001e391) list_double_time_pane_g1_ParamLimits

0xab70,	// (0x0001e391) list_double_time_pane_g1

0xaa1b,	// (0x0001e23c) list_double_time_pane_g2_ParamLimits

0xaa1b,	// (0x0001e23c) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00022e4f) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00022e4f) list_double_time_pane_g

0xac6c,	// (0x0001e48d) list_double_time_pane_t1_ParamLimits

0xac6c,	// (0x0001e48d) list_double_time_pane_t1

0xac82,	// (0x0001e4a3) list_double_time_pane_t2_ParamLimits

0xac82,	// (0x0001e4a3) list_double_time_pane_t2

0xac94,	// (0x0001e4b5) list_double_time_pane_t3_ParamLimits

0xac94,	// (0x0001e4b5) list_double_time_pane_t3

0xaca6,	// (0x0001e4c7) list_double_time_pane_t4_ParamLimits

0xaca6,	// (0x0001e4c7) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00022e54) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00022e54) list_double_time_pane_t

0xab1d,	// (0x0001e33e) list_setting_pane_g1_ParamLimits

0xab1d,	// (0x0001e33e) list_setting_pane_g1

0xaa60,	// (0x0001e281) list_setting_pane_g2_ParamLimits

0xaa60,	// (0x0001e281) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00022e5d) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00022e5d) list_setting_pane_g

0xacb8,	// (0x0001e4d9) list_setting_pane_t1_ParamLimits

0xacb8,	// (0x0001e4d9) list_setting_pane_t1

0xaccf,	// (0x0001e4f0) list_setting_pane_t2_ParamLimits

0xaccf,	// (0x0001e4f0) list_setting_pane_t2

0x0002,

0xf641,	// (0x00022e62) list_setting_pane_t_ParamLimits

0xf641,	// (0x00022e62) list_setting_pane_t

0xad0e,	// (0x0001e52f) set_value_pane_cp_ParamLimits

0xad0e,	// (0x0001e52f) set_value_pane_cp

0xab1d,	// (0x0001e33e) list_setting_number_pane_g1_ParamLimits

0xab1d,	// (0x0001e33e) list_setting_number_pane_g1

0xaa60,	// (0x0001e281) list_setting_number_pane_g2_ParamLimits

0xaa60,	// (0x0001e281) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00022e5d) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00022e5d) list_setting_number_pane_g

0xad1c,	// (0x0001e53d) list_setting_number_pane_t1_ParamLimits

0xad1c,	// (0x0001e53d) list_setting_number_pane_t1

0xad30,	// (0x0001e551) list_setting_number_pane_t2_ParamLimits

0xad30,	// (0x0001e551) list_setting_number_pane_t2

0xad47,	// (0x0001e568) list_setting_number_pane_t3_ParamLimits

0xad47,	// (0x0001e568) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00022e69) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00022e69) list_setting_number_pane_t

0xad0e,	// (0x0001e52f) set_value_pane_ParamLimits

0xad0e,	// (0x0001e52f) set_value_pane

0xe1f1,	// (0x00021a12) bg_set_opt_pane_ParamLimits

0xe1f1,	// (0x00021a12) bg_set_opt_pane

0xe212,	// (0x00021a33) set_value_pane_t1

0xe220,	// (0x00021a41) slider_set_pane_cp3

0xe229,	// (0x00021a4a) volume_small_pane_cp

0xe232,	// (0x00021a53) list_form_gen_pane

0xe23b,	// (0x00021a5c) scroll_pane_cp8

0xad8a,	// (0x0001e5ab) form_field_data_pane_ParamLimits

0xad8a,	// (0x0001e5ab) form_field_data_pane

0xada5,	// (0x0001e5c6) form_field_data_wide_pane_ParamLimits

0xada5,	// (0x0001e5c6) form_field_data_wide_pane

0xe25c,	// (0x00021a7d) form_field_popup_pane_ParamLimits

0xe25c,	// (0x00021a7d) form_field_popup_pane

0xadc9,	// (0x0001e5ea) form_field_popup_wide_pane_ParamLimits

0xadc9,	// (0x0001e5ea) form_field_popup_wide_pane

0xe27e,	// (0x00021a9f) form_field_slider_pane_ParamLimits

0xe27e,	// (0x00021a9f) form_field_slider_pane

0xe291,	// (0x00021ab2) form_field_slider_wide_pane_ParamLimits

0xe291,	// (0x00021ab2) form_field_slider_wide_pane

0xe2a4,	// (0x00021ac5) data_form_pane

0xadf4,	// (0x0001e615) form_field_data_pane_t1

0xe2b0,	// (0x00021ad1) input_focus_pane

0xe2be,	// (0x00021adf) data_form_wide_pane

0xe2f6,	// (0x00021b17) form_field_data_wide_pane_t1

0xcb36,	// (0x00020357) input_focus_pane_cp6

0xae0e,	// (0x0001e62f) form_field_popup_pane_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_cp7

0xe315,	// (0x00021b36) list_form_pane

0xe329,	// (0x00021b4a) form_field_popup_wide_pane_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_cp8

0xe33b,	// (0x00021b5c) list_form_wide_pane

0xae30,	// (0x0001e651) form_field_slider_pane_t1_ParamLimits

0xae30,	// (0x0001e651) form_field_slider_pane_t1

0xae48,	// (0x0001e669) form_field_slider_pane_t2_ParamLimits

0xae48,	// (0x0001e669) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00022e79) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00022e79) form_field_slider_pane_t

0xc751,	// (0x0001ff72) input_focus_pane_cp9_ParamLimits

0xc751,	// (0x0001ff72) input_focus_pane_cp9

0xae5d,	// (0x0001e67e) slider_cont_pane_ParamLimits

0xae5d,	// (0x0001e67e) slider_cont_pane

0xe347,	// (0x00021b68) form_field_slider_wide_pane_t1_ParamLimits

0xe347,	// (0x00021b68) form_field_slider_wide_pane_t1

0xe359,	// (0x00021b7a) form_field_slider_wide_pane_t2_ParamLimits

0xe359,	// (0x00021b7a) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00022e7e) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00022e7e) form_field_slider_wide_pane_t

0xc751,	// (0x0001ff72) input_focus_pane_cp10_ParamLimits

0xc751,	// (0x0001ff72) input_focus_pane_cp10

0xae71,	// (0x0001e692) slider_cont_pane_cp1_ParamLimits

0xae71,	// (0x0001e692) slider_cont_pane_cp1

0xae85,	// (0x0001e6a6) slider_form_pane_cp

0xe36b,	// (0x00021b8c) input_focus_pane_g1

0xe373,	// (0x00021b94) input_focus_pane_g2

0xe37b,	// (0x00021b9c) input_focus_pane_g3

0xe383,	// (0x00021ba4) input_focus_pane_g4

0xe38b,	// (0x00021bac) input_focus_pane_g5

0xe393,	// (0x00021bb4) input_focus_pane_g6

0xe39b,	// (0x00021bbc) input_focus_pane_g7

0xe3a3,	// (0x00021bc4) input_focus_pane_g8

0xe3ab,	// (0x00021bcc) input_focus_pane_g9

0xc6f9,	// (0x0001ff1a) input_focus_pane_g10

0x0009,

0xf662,	// (0x00022e83) input_focus_pane_g

0x2b80,	// (0x000163a1) wait_border_pane_g3_copy1

0xae8d,	// (0x0001e6ae) data_form_pane_t1

0xc6f9,	// (0x0001ff1a) wait_anim_pane_g1_copy1

0xbbbd,	// (0x0001f3de) data_form_wide_pane_t1

0xe3b3,	// (0x00021bd4) list_form_graphic_pane_cp_ParamLimits

0xe3b3,	// (0x00021bd4) list_form_graphic_pane_cp

0x3aff,	// (0x00017320) slider_form_pane_g1

0x3b08,	// (0x00017329) slider_form_pane_g2

0x0006,

0xf960,	// (0x00023181) slider_form_pane_g

0xe3b3,	// (0x00021bd4) list_form_graphic_pane_ParamLimits

0xe3b3,	// (0x00021bd4) list_form_graphic_pane

0xe3c5,	// (0x00021be6) list_form_graphic_pane_g1

0xe3cd,	// (0x00021bee) list_form_graphic_pane_t1_ParamLimits

0xe3cd,	// (0x00021bee) list_form_graphic_pane_t1

0xc75f,	// (0x0001ff80) list_highlight_pane_cp5_ParamLimits

0xc75f,	// (0x0001ff80) list_highlight_pane_cp5

0xaea9,	// (0x0001e6ca) find_pane_g1

0xe3e2,	// (0x00021c03) input_find_pane

0xaeb2,	// (0x0001e6d3) input_find_pane_g1_ParamLimits

0xaeb2,	// (0x0001e6d3) input_find_pane_g1

0xaebe,	// (0x0001e6df) input_find_pane_t1_ParamLimits

0xaebe,	// (0x0001e6df) input_find_pane_t1

0xaed3,	// (0x0001e6f4) input_find_pane_t2_ParamLimits

0xaed3,	// (0x0001e6f4) input_find_pane_t2

0x0001,

0xf677,	// (0x00022e98) input_find_pane_t_ParamLimits

0xf677,	// (0x00022e98) input_find_pane_t

0xe3eb,	// (0x00021c0c) input_focus_pane_cp5_ParamLimits

0xe3eb,	// (0x00021c0c) input_focus_pane_cp5

0xe3fe,	// (0x00021c1f) bg_popup_window_pane_cp2_ParamLimits

0xe3fe,	// (0x00021c1f) bg_popup_window_pane_cp2

0xe40b,	// (0x00021c2c) listscroll_menu_pane_ParamLimits

0xe40b,	// (0x00021c2c) listscroll_menu_pane

0xaef4,	// (0x0001e715) popup_submenu_window_ParamLimits

0xaef4,	// (0x0001e715) popup_submenu_window

0xe417,	// (0x00021c38) find_popup_pane_g1

0xe41f,	// (0x00021c40) input_popup_find_pane_cp

0xe429,	// (0x00021c4a) input_focus_pane_cp4_ParamLimits

0xe429,	// (0x00021c4a) input_focus_pane_cp4

0xe437,	// (0x00021c58) input_popup_find_pane_t1_ParamLimits

0xe437,	// (0x00021c58) input_popup_find_pane_t1

0xc703,	// (0x0001ff24) bg_popup_sub_pane_cp

0xe465,	// (0x00021c86) listscroll_popup_sub_pane

0xe46d,	// (0x00021c8e) list_submenu_pane_ParamLimits

0xe46d,	// (0x00021c8e) list_submenu_pane

0xe47e,	// (0x00021c9f) scroll_pane_cp4

0xe486,	// (0x00021ca7) list_single_popup_submenu_pane_ParamLimits

0xe486,	// (0x00021ca7) list_single_popup_submenu_pane

0xe49b,	// (0x00021cbc) list_single_popup_submenu_pane_g1

0xe4a3,	// (0x00021cc4) list_single_popup_submenu_pane_t1_ParamLimits

0xe4a3,	// (0x00021cc4) list_single_popup_submenu_pane_t1

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp1_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp1

0xaf32,	// (0x0001e753) tabs_2_active_pane_g1

0xaf3a,	// (0x0001e75b) tabs_2_active_pane_t1

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp1_ParamLimits

0xc751,	// (0x0001ff72) bg_passive_tab_pane_cp1

0xaf32,	// (0x0001e753) tabs_2_passive_pane_g1

0xaf3a,	// (0x0001e75b) tabs_2_passive_pane_t1

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp4

0xaf4c,	// (0x0001e76d) tabs_2_long_active_pane_t1

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp4

0xed85,	// (0x000225a6) list_single_midp_graphic_pane_g4_ParamLimits

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp5

0xaf5f,	// (0x0001e780) tabs_3_long_active_pane_t1

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp5

0xed85,	// (0x000225a6) list_single_midp_graphic_pane_g4

0xc75f,	// (0x0001ff80) bg_popup_window_pane_cp13_ParamLimits

0xc75f,	// (0x0001ff80) bg_popup_window_pane_cp13

0xe4c1,	// (0x00021ce2) listscroll_popup_fast_pane_ParamLimits

0xe4c1,	// (0x00021ce2) listscroll_popup_fast_pane

0xe4d0,	// (0x00021cf1) grid_popup_fast_pane_ParamLimits

0xe4d0,	// (0x00021cf1) grid_popup_fast_pane

0xe4e2,	// (0x00021d03) scroll_pane_cp9_ParamLimits

0xe4e2,	// (0x00021d03) scroll_pane_cp9

0x5a6f,	// (0x00019290) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a6f,	// (0x00019290) list_single_graphic_hl_pane_t1_cp2

0xe506,	// (0x00021d27) input_focus_pane_cp20_ParamLimits

0xe506,	// (0x00021d27) input_focus_pane_cp20

0xe514,	// (0x00021d35) query_popup_data_pane_t1_ParamLimits

0xe514,	// (0x00021d35) query_popup_data_pane_t1

0xe527,	// (0x00021d48) query_popup_data_pane_t2_ParamLimits

0xe527,	// (0x00021d48) query_popup_data_pane_t2

0xe56d,	// (0x00021d8e) query_popup_data_pane_t3_ParamLimits

0xe56d,	// (0x00021d8e) query_popup_data_pane_t3

0xe5ae,	// (0x00021dcf) query_popup_data_pane_t4_ParamLimits

0xe5ae,	// (0x00021dcf) query_popup_data_pane_t4

0xe5ea,	// (0x00021e0b) query_popup_data_pane_t5_ParamLimits

0xe5ea,	// (0x00021e0b) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00022e9d) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00022e9d) query_popup_data_pane_t

0xe36b,	// (0x00021b8c) bg_set_opt_pane_g1

0xe373,	// (0x00021b94) bg_set_opt_pane_g2

0xe37b,	// (0x00021b9c) bg_set_opt_pane_g3

0xe383,	// (0x00021ba4) bg_set_opt_pane_g4

0xe38b,	// (0x00021bac) bg_set_opt_pane_g5

0xe393,	// (0x00021bb4) bg_set_opt_pane_g6

0xe39b,	// (0x00021bbc) bg_set_opt_pane_g7

0xe3a3,	// (0x00021bc4) bg_set_opt_pane_g8

0xe3ab,	// (0x00021bcc) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00022ea8) bg_set_opt_pane_g

0xe911,	// (0x00022132) control_top_pane_stacon_ParamLimits

0xe911,	// (0x00022132) control_top_pane_stacon

0xe964,	// (0x00022185) signal_pane_stacon_ParamLimits

0xe964,	// (0x00022185) signal_pane_stacon

0x1885,	// (0x000150a6) stacon_top_pane_g1_ParamLimits

0x1885,	// (0x000150a6) stacon_top_pane_g1

0xe989,	// (0x000221aa) title_pane_stacon_ParamLimits

0xe989,	// (0x000221aa) title_pane_stacon

0xe9b3,	// (0x000221d4) uni_indicator_pane_stacon_ParamLimits

0xe9b3,	// (0x000221d4) uni_indicator_pane_stacon

0xe9c8,	// (0x000221e9) battery_pane_stacon_ParamLimits

0xe9c8,	// (0x000221e9) battery_pane_stacon

0xea0c,	// (0x0002222d) control_bottom_pane_stacon_ParamLimits

0xea0c,	// (0x0002222d) control_bottom_pane_stacon

0xea2f,	// (0x00022250) navi_pane_stacon_ParamLimits

0xea2f,	// (0x00022250) navi_pane_stacon

0x18a7,	// (0x000150c8) stacon_bottom_pane_g1_ParamLimits

0x18a7,	// (0x000150c8) stacon_bottom_pane_g1

0xe621,	// (0x00021e42) aid_levels_signal_lsc_ParamLimits

0xe621,	// (0x00021e42) aid_levels_signal_lsc

0xe638,	// (0x00021e59) signal_pane_stacon_g1_ParamLimits

0xe638,	// (0x00021e59) signal_pane_stacon_g1

0xe64c,	// (0x00021e6d) signal_pane_stacon_g2_ParamLimits

0xe64c,	// (0x00021e6d) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00022ebb) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00022ebb) signal_pane_stacon_g

0xe68e,	// (0x00021eaf) title_pane_stacon_t1_ParamLimits

0xe68e,	// (0x00021eaf) title_pane_stacon_t1

0xe6b3,	// (0x00021ed4) uni_indicator_pane_stacon_g1

0xe6bd,	// (0x00021ede) uni_indicator_pane_stacon_g2

0xe6c7,	// (0x00021ee8) uni_indicator_pane_stacon_g3

0xe6d1,	// (0x00021ef2) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00022ec7) uni_indicator_pane_stacon_g

0xe6db,	// (0x00021efc) control_top_pane_stacon_g1

0xe6e3,	// (0x00021f04) control_top_pane_stacon_t1_ParamLimits

0xe6e3,	// (0x00021f04) control_top_pane_stacon_t1

0xe71a,	// (0x00021f3b) aid_levels_battery_lsc_ParamLimits

0xe71a,	// (0x00021f3b) aid_levels_battery_lsc

0xe732,	// (0x00021f53) battery_pane_stacon_g1_ParamLimits

0xe732,	// (0x00021f53) battery_pane_stacon_g1

0xe744,	// (0x00021f65) battery_pane_stacon_g2_ParamLimits

0xe744,	// (0x00021f65) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00022ed0) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00022ed0) battery_pane_stacon_g

0xe782,	// (0x00021fa3) navi_icon_pane_stacon

0xe796,	// (0x00021fb7) navi_navi_pane_stacon

0xe782,	// (0x00021fa3) navi_text_pane_stacon

0xe7ac,	// (0x00021fcd) control_bottom_pane_stacon_g1

0xe7b4,	// (0x00021fd5) control_bottom_pane_stacon_t1_ParamLimits

0xe7b4,	// (0x00021fd5) control_bottom_pane_stacon_t1

0xaf71,	// (0x0001e792) grid_app_pane_ParamLimits

0xaf71,	// (0x0001e792) grid_app_pane

0xafa9,	// (0x0001e7ca) scroll_pane_cp15_ParamLimits

0xafa9,	// (0x0001e7ca) scroll_pane_cp15

0xafbe,	// (0x0001e7df) cell_app_pane_ParamLimits

0xafbe,	// (0x0001e7df) cell_app_pane

0xb009,	// (0x0001e82a) cell_app_pane_g1_ParamLimits

0xb009,	// (0x0001e82a) cell_app_pane_g1

0x12fd,	// (0x00014b1e) cell_app_pane_g2_ParamLimits

0x12fd,	// (0x00014b1e) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00022ed5) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00022ed5) cell_app_pane_g

0xb02d,	// (0x0001e84e) cell_app_pane_t1_ParamLimits

0xb02d,	// (0x0001e84e) cell_app_pane_t1

0x133a,	// (0x00014b5b) grid_highlight_pane_ParamLimits

0x133a,	// (0x00014b5b) grid_highlight_pane

0xe36b,	// (0x00021b8c) cell_highlight_pane_g1

0xe373,	// (0x00021b94) cell_highlight_pane_g2

0xe37b,	// (0x00021b9c) cell_highlight_pane_g3

0xe383,	// (0x00021ba4) cell_highlight_pane_g4

0xe38b,	// (0x00021bac) cell_highlight_pane_g5

0xe393,	// (0x00021bb4) cell_highlight_pane_g6

0xe39b,	// (0x00021bbc) cell_highlight_pane_g7

0xe3a3,	// (0x00021bc4) cell_highlight_pane_g8

0xe3ab,	// (0x00021bcc) cell_highlight_pane_g9

0xc6f9,	// (0x0001ff1a) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00022e83) cell_highlight_pane_g

0x134b,	// (0x00014b6c) bg_scroll_pane

0xe80f,	// (0x00022030) scroll_handle_pane

0x1392,	// (0x00014bb3) scroll_bg_pane_g1

0x13a7,	// (0x00014bc8) scroll_bg_pane_g2

0x13bf,	// (0x00014be0) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00022eda) scroll_bg_pane_g

0x13d4,	// (0x00014bf5) scroll_handle_focus_pane_ParamLimits

0x13d4,	// (0x00014bf5) scroll_handle_focus_pane

0x1392,	// (0x00014bb3) scroll_handle_pane_g1

0x13e1,	// (0x00014c02) scroll_handle_pane_g2

0x13bf,	// (0x00014be0) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00022ee1) scroll_handle_pane_g

0xe429,	// (0x00021c4a) bg_popup_sub_pane_cp21_ParamLimits

0xe429,	// (0x00021c4a) bg_popup_sub_pane_cp21

0x13f5,	// (0x00014c16) popup_fep_japan_predictive_window_t1_ParamLimits

0x13f5,	// (0x00014c16) popup_fep_japan_predictive_window_t1

0x140c,	// (0x00014c2d) popup_fep_japan_predictive_window_t2_ParamLimits

0x140c,	// (0x00014c2d) popup_fep_japan_predictive_window_t2

0x143f,	// (0x00014c60) popup_fep_japan_predictive_window_t3_ParamLimits

0x143f,	// (0x00014c60) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00022ee8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00022ee8) popup_fep_japan_predictive_window_t

0xc703,	// (0x0001ff24) bg_popup_sub_pane_cp23

0x1476,	// (0x00014c97) listscroll_japin_cand_pane

0x147e,	// (0x00014c9f) popup_fep_japan_candidate_window_t1

0x148c,	// (0x00014cad) candidate_pane_ParamLimits

0x148c,	// (0x00014cad) candidate_pane

0x149e,	// (0x00014cbf) scroll_pane_cp30

0x14a8,	// (0x00014cc9) list_single_popup_jap_candidate_pane_ParamLimits

0x14a8,	// (0x00014cc9) list_single_popup_jap_candidate_pane

0xc703,	// (0x0001ff24) list_highlight_pane_cp30

0x14bc,	// (0x00014cdd) list_single_popup_jap_candidate_pane_t1

0xb05e,	// (0x0001e87f) level_1_signal

0xb070,	// (0x0001e891) level_2_signal

0xb083,	// (0x0001e8a4) level_3_signal

0xb096,	// (0x0001e8b7) level_4_signal

0xb0a9,	// (0x0001e8ca) level_5_signal

0xb0bc,	// (0x0001e8dd) level_6_signal

0xb0cf,	// (0x0001e8f0) level_7_signal

0xb05e,	// (0x0001e87f) level_1_battery

0xb070,	// (0x0001e891) level_2_battery

0xb083,	// (0x0001e8a4) level_3_battery

0xb096,	// (0x0001e8b7) level_4_battery

0xb0a9,	// (0x0001e8ca) level_5_battery

0xb0bc,	// (0x0001e8dd) level_6_battery

0xb0cf,	// (0x0001e8f0) level_7_battery

0x153e,	// (0x00014d5f) list_menu_pane_ParamLimits

0x153e,	// (0x00014d5f) list_menu_pane

0x1554,	// (0x00014d75) scroll_pane_cp25_ParamLimits

0x1554,	// (0x00014d75) scroll_pane_cp25

0x156d,	// (0x00014d8e) list_double2_graphic_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double2_graphic_pane_cp2

0x156d,	// (0x00014d8e) list_double2_large_graphic_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double2_large_graphic_pane_cp2

0x156d,	// (0x00014d8e) list_double2_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double2_pane_cp2

0x156d,	// (0x00014d8e) list_double_graphic_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double_graphic_pane_cp2

0x156d,	// (0x00014d8e) list_double_large_graphic_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double_large_graphic_pane_cp2

0x156d,	// (0x00014d8e) list_double_number_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double_number_pane_cp2

0x156d,	// (0x00014d8e) list_double_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double_pane_cp2

0xb0e2,	// (0x0001e903) list_single_2graphic_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_2graphic_pane_cp2

0xb0e2,	// (0x0001e903) list_single_graphic_heading_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_graphic_heading_pane_cp2

0xb0e2,	// (0x0001e903) list_single_graphic_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_graphic_pane_cp2

0xb0e2,	// (0x0001e903) list_single_heading_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_heading_pane_cp2

0x15b0,	// (0x00014dd1) list_single_large_graphic_pane_cp2_ParamLimits

0x15b0,	// (0x00014dd1) list_single_large_graphic_pane_cp2

0xb0e2,	// (0x0001e903) list_single_number_heading_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_number_heading_pane_cp2

0xb0e2,	// (0x0001e903) list_single_number_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_number_pane_cp2

0xb0f6,	// (0x0001e917) list_single_pane_cp2_ParamLimits

0xb0f6,	// (0x0001e917) list_single_pane_cp2

0x163b,	// (0x00014e5c) bg_popup_sub_pane_cp22

0xe8c1,	// (0x000220e2) popup_side_volume_key_window_g1

0xe8eb,	// (0x0002210c) popup_side_volume_key_window_t1

0xe909,	// (0x0002212a) volume_small_pane_cp1

0xc751,	// (0x0001ff72) bg_popup_sub_pane_cp24_ParamLimits

0xc751,	// (0x0001ff72) bg_popup_sub_pane_cp24

0x1651,	// (0x00014e72) fep_china_uni_candidate_pane_ParamLimits

0x1651,	// (0x00014e72) fep_china_uni_candidate_pane

0x1665,	// (0x00014e86) fep_china_uni_entry_pane

0x1675,	// (0x00014e96) popup_fep_china_uni_window_g1

0x1691,	// (0x00014eb2) fep_china_uni_entry_pane_g1

0x169b,	// (0x00014ebc) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00022f19) fep_china_uni_entry_pane_g

0x16a5,	// (0x00014ec6) fep_entry_item_pane

0x16af,	// (0x00014ed0) fep_candidate_item_pane

0x16b7,	// (0x00014ed8) fep_china_uni_candidate_pane_g1

0x16c1,	// (0x00014ee2) fep_china_uni_candidate_pane_g2

0x16c9,	// (0x00014eea) fep_china_uni_candidate_pane_g3

0x16d1,	// (0x00014ef2) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00022f1e) fep_china_uni_candidate_pane_g

0xc6f9,	// (0x0001ff1a) fep_entry_item_pane_g1

0x16db,	// (0x00014efc) fep_entry_item_pane_t1_ParamLimits

0x16db,	// (0x00014efc) fep_entry_item_pane_t1

0x16f1,	// (0x00014f12) fep_candidate_item_pane_t1_ParamLimits

0x16f1,	// (0x00014f12) fep_candidate_item_pane_t1

0x1706,	// (0x00014f27) fep_candidate_item_pane_t2_ParamLimits

0x1706,	// (0x00014f27) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00022f27) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00022f27) fep_candidate_item_pane_t

0xc75f,	// (0x0001ff80) list_highlight_pane_cp31_ParamLimits

0xc75f,	// (0x0001ff80) list_highlight_pane_cp31

0x1718,	// (0x00014f39) level_1_signal_lsc

0x1721,	// (0x00014f42) level_2_signal_lsc

0x172a,	// (0x00014f4b) level_3_signal_lsc

0x1733,	// (0x00014f54) level_4_signal_lsc

0x173c,	// (0x00014f5d) level_5_signal_lsc

0x1745,	// (0x00014f66) level_6_signal_lsc

0x174e,	// (0x00014f6f) level_7_signal_lsc

0x174e,	// (0x00014f6f) level_1_battery_lsc

0x1757,	// (0x00014f78) level_2_battery_lsc

0x1760,	// (0x00014f81) level_3_battery_lsc

0x1769,	// (0x00014f8a) level_4_battery_lsc

0x1772,	// (0x00014f93) level_5_battery_lsc

0x177b,	// (0x00014f9c) level_6_battery_lsc

0x1718,	// (0x00014f39) level_7_battery_lsc

0x1784,	// (0x00014fa5) scroll_handle_focus_pane_g1

0x178d,	// (0x00014fae) scroll_handle_focus_pane_g2

0x1796,	// (0x00014fb7) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00022f2c) scroll_handle_focus_pane_g

0xb185,	// (0x0001e9a6) list_single_2graphic_pane_g1_ParamLimits

0xb185,	// (0x0001e9a6) list_single_2graphic_pane_g1

0xa9e4,	// (0x0001e205) list_single_2graphic_pane_g2_ParamLimits

0xa9e4,	// (0x0001e205) list_single_2graphic_pane_g2

0x2427,	// (0x00015c48) list_single_2graphic_pane_g3_ParamLimits

0x2427,	// (0x00015c48) list_single_2graphic_pane_g3

0xb191,	// (0x0001e9b2) list_single_2graphic_pane_g4_ParamLimits

0xb191,	// (0x0001e9b2) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00022f33) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00022f33) list_single_2graphic_pane_g

0xb1a2,	// (0x0001e9c3) list_single_2graphic_pane_t1_ParamLimits

0xb1a2,	// (0x0001e9c3) list_single_2graphic_pane_t1

0xb1d0,	// (0x0001e9f1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb1d0,	// (0x0001e9f1) list_double2_graphic_large_graphic_pane_g1

0xaa4f,	// (0x0001e270) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaa4f,	// (0x0001e270) list_double2_graphic_large_graphic_pane_g2

0xaa60,	// (0x0001e281) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaa60,	// (0x0001e281) list_double2_graphic_large_graphic_pane_g3

0xb1e2,	// (0x0001ea03) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb1e2,	// (0x0001ea03) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00022f3c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00022f3c) list_double2_graphic_large_graphic_pane_g

0xb1ee,	// (0x0001ea0f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb1ee,	// (0x0001ea0f) list_double2_graphic_large_graphic_pane_t1

0xb204,	// (0x0001ea25) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb204,	// (0x0001ea25) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00022f45) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00022f45) list_double2_graphic_large_graphic_pane_t

0x196a,	// (0x0001518b) popup_fast_swap_window_ParamLimits

0x196a,	// (0x0001518b) popup_fast_swap_window

0x1988,	// (0x000151a9) popup_side_volume_key_window

0x19a6,	// (0x000151c7) stacon_top_pane

0x19b0,	// (0x000151d1) status_pane_ParamLimits

0x19b0,	// (0x000151d1) status_pane

0xc6ef,	// (0x0001ff10) status_small_pane

0xc703,	// (0x0001ff24) control_pane

0xc703,	// (0x0001ff24) stacon_bottom_pane

0xe23b,	// (0x00021a5c) scroll_pane_cp121

0xe232,	// (0x00021a53) set_content_pane

0xb216,	// (0x0001ea37) bg_active_tab_pane_g1_cp1

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp1

0xb21f,	// (0x0001ea40) bg_active_tab_pane_g3_cp1

0xb216,	// (0x0001ea37) bg_passive_tab_pane_g1_cp1

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp1

0xb21f,	// (0x0001ea40) bg_passive_tab_pane_g3_cp1

0xb228,	// (0x0001ea49) bg_active_tab_pane_g1_cp2

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp2

0xb231,	// (0x0001ea52) bg_active_tab_pane_g3_cp2

0xb228,	// (0x0001ea49) bg_passive_tab_pane_g1_cp2

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp2

0xb231,	// (0x0001ea52) bg_passive_tab_pane_g3_cp2

0xb23a,	// (0x0001ea5b) bg_active_tab_pane_g1_cp3

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp3

0xb243,	// (0x0001ea64) bg_active_tab_pane_g3_cp3

0xb23a,	// (0x0001ea5b) bg_passive_tab_pane_g1_cp3

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp3

0xb243,	// (0x0001ea64) bg_passive_tab_pane_g3_cp3

0xb24c,	// (0x0001ea6d) bg_active_tab_pane_g1_cp4

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp4

0xb255,	// (0x0001ea76) bg_active_tab_pane_g3_cp4

0xb24c,	// (0x0001ea6d) bg_passive_tab_pane_g1_cp4

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp4

0xb255,	// (0x0001ea76) bg_passive_tab_pane_g3_cp4

0x18c3,	// (0x000150e4) bg_active_tab_pane_g1_cp5

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp5

0x18cc,	// (0x000150ed) bg_active_tab_pane_g3_cp5

0x18c3,	// (0x000150e4) bg_passive_tab_pane_g1_cp5

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp5

0x18cc,	// (0x000150ed) bg_passive_tab_pane_g3_cp5

0x41fd,	// (0x00017a1e) list_set_graphic_pane_ParamLimits

0x41fd,	// (0x00017a1e) list_set_graphic_pane

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp4

0x18eb,	// (0x0001510c) list_set_graphic_pane_g1_ParamLimits

0x18eb,	// (0x0001510c) list_set_graphic_pane_g1

0x18f7,	// (0x00015118) list_set_graphic_pane_g2_ParamLimits

0x18f7,	// (0x00015118) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00022f4a) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00022f4a) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x000232d4) volume_small_pane_cp_g

0x191b,	// (0x0001513c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x191b,	// (0x0001513c) list_double2_large_graphic_pane_g1_cp2

0x1929,	// (0x0001514a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1929,	// (0x0001514a) list_double2_large_graphic_pane_g2_cp2

0x193a,	// (0x0001515b) list_double2_large_graphic_pane_g3_cp2

0x1942,	// (0x00015163) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1942,	// (0x00015163) list_double2_large_graphic_pane_t1_cp2

0x1958,	// (0x00015179) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1958,	// (0x00015179) list_double2_large_graphic_pane_t2_cp2

0x3664,	// (0x00016e85) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3664,	// (0x00016e85) list_double_large_graphic_pane_g1_cp2

0x3677,	// (0x00016e98) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3677,	// (0x00016e98) list_double_large_graphic_pane_g2_cp2

0x1ace,	// (0x000152ef) list_double_large_graphic_pane_g3_cp2

0x3688,	// (0x00016ea9) list_double_large_graphic_pane_g4_cp

0x3690,	// (0x00016eb1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3690,	// (0x00016eb1) list_double_large_graphic_pane_t1_cp2

0x36a7,	// (0x00016ec8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x36a7,	// (0x00016ec8) list_double_large_graphic_pane_t2_cp2

0x19be,	// (0x000151df) list_double2_graphic_pane_g1_cp2_ParamLimits

0x19be,	// (0x000151df) list_double2_graphic_pane_g1_cp2

0x19cc,	// (0x000151ed) list_double2_graphic_pane_g2_cp2_ParamLimits

0x19cc,	// (0x000151ed) list_double2_graphic_pane_g2_cp2

0x19dd,	// (0x000151fe) list_double2_graphic_pane_g3_cp2

0x19e7,	// (0x00015208) list_double2_graphic_pane_t1_cp2_ParamLimits

0x19e7,	// (0x00015208) list_double2_graphic_pane_t1_cp2

0x19fd,	// (0x0001521e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x19fd,	// (0x0001521e) list_double2_graphic_pane_t2_cp2

0x1a0f,	// (0x00015230) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1a0f,	// (0x00015230) list_single_number_heading_pane_g1_cp2

0x1a1b,	// (0x0001523c) list_single_number_heading_pane_g2_cp2

0x1a23,	// (0x00015244) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1a23,	// (0x00015244) list_single_number_heading_pane_t1_cp2

0x1a39,	// (0x0001525a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1a39,	// (0x0001525a) list_single_number_heading_pane_t2_cp2

0x1a4d,	// (0x0001526e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1a4d,	// (0x0001526e) list_single_number_heading_pane_t3_cp2

0x1a0f,	// (0x00015230) list_single_heading_pane_g1_cp2_ParamLimits

0x1a0f,	// (0x00015230) list_single_heading_pane_g1_cp2

0x1a1b,	// (0x0001523c) list_single_heading_pane_g2_cp2

0x1a23,	// (0x00015244) list_single_heading_pane_t1_cp2_ParamLimits

0x1a23,	// (0x00015244) list_single_heading_pane_t1_cp2

0x345e,	// (0x00016c7f) list_single_heading_pane_t2_cp2_ParamLimits

0x345e,	// (0x00016c7f) list_single_heading_pane_t2_cp2

0x33a6,	// (0x00016bc7) list_double_graphic_pane_g1_cp2_ParamLimits

0x33a6,	// (0x00016bc7) list_double_graphic_pane_g1_cp2

0x33b2,	// (0x00016bd3) list_double_graphic_pane_g2_cp2_ParamLimits

0x33b2,	// (0x00016bd3) list_double_graphic_pane_g2_cp2

0x33c1,	// (0x00016be2) list_double_graphic_pane_g3_cp2

0x33c9,	// (0x00016bea) list_double_graphic_pane_t1_cp2_ParamLimits

0x33c9,	// (0x00016bea) list_double_graphic_pane_t1_cp2

0x33df,	// (0x00016c00) list_double_graphic_pane_t2_cp2_ParamLimits

0x33df,	// (0x00016c00) list_double_graphic_pane_t2_cp2

0x1ac2,	// (0x000152e3) list_double_number_pane_g1_cp2_ParamLimits

0x1ac2,	// (0x000152e3) list_double_number_pane_g1_cp2

0x1ace,	// (0x000152ef) list_double_number_pane_g2_cp2

0x336a,	// (0x00016b8b) list_double_number_pane_t1_cp2_ParamLimits

0x336a,	// (0x00016b8b) list_double_number_pane_t1_cp2

0x337e,	// (0x00016b9f) list_double_number_pane_t2_cp2_ParamLimits

0x337e,	// (0x00016b9f) list_double_number_pane_t2_cp2

0x3394,	// (0x00016bb5) list_double_number_pane_t3_cp2_ParamLimits

0x3394,	// (0x00016bb5) list_double_number_pane_t3_cp2

0x3253,	// (0x00016a74) list_single_graphic_pane_g1_cp2_ParamLimits

0x3253,	// (0x00016a74) list_single_graphic_pane_g1_cp2

0x1b33,	// (0x00015354) list_single_graphic_pane_g2_cp2_ParamLimits

0x1b33,	// (0x00015354) list_single_graphic_pane_g2_cp2

0x1b3f,	// (0x00015360) list_single_graphic_pane_g3_cp2

0x3229,	// (0x00016a4a) list_single_graphic_pane_t1_cp2_ParamLimits

0x3229,	// (0x00016a4a) list_single_graphic_pane_t1_cp2

0x1b33,	// (0x00015354) list_single_number_pane_g1_cp2_ParamLimits

0x1b33,	// (0x00015354) list_single_number_pane_g1_cp2

0x1b3f,	// (0x00015360) list_single_number_pane_g2_cp2

0x3229,	// (0x00016a4a) list_single_number_pane_t1_cp2_ParamLimits

0x3229,	// (0x00016a4a) list_single_number_pane_t1_cp2

0x323f,	// (0x00016a60) list_single_number_pane_t2_cp2_ParamLimits

0x323f,	// (0x00016a60) list_single_number_pane_t2_cp2

0x1929,	// (0x0001514a) list_double2_pane_g1_cp2_ParamLimits

0x1929,	// (0x0001514a) list_double2_pane_g1_cp2

0x193a,	// (0x0001515b) list_double2_pane_g2_cp2

0x1a9a,	// (0x000152bb) list_double2_pane_t1_cp2_ParamLimits

0x1a9a,	// (0x000152bb) list_double2_pane_t1_cp2

0x1ab0,	// (0x000152d1) list_double2_pane_t2_cp2_ParamLimits

0x1ab0,	// (0x000152d1) list_double2_pane_t2_cp2

0x1ac2,	// (0x000152e3) list_double_pane_g1_cp2_ParamLimits

0x1ac2,	// (0x000152e3) list_double_pane_g1_cp2

0x1ace,	// (0x000152ef) list_double_pane_g2_cp2

0x1ad6,	// (0x000152f7) list_double_pane_t1_cp2_ParamLimits

0x1ad6,	// (0x000152f7) list_double_pane_t1_cp2

0x1aec,	// (0x0001530d) list_double_pane_t2_cp2_ParamLimits

0x1aec,	// (0x0001530d) list_double_pane_t2_cp2

0x1b23,	// (0x00015344) list_single_pane_cp2_g3

0x1b33,	// (0x00015354) list_single_pane_g1_cp2_ParamLimits

0x1b33,	// (0x00015354) list_single_pane_g1_cp2

0x1b3f,	// (0x00015360) list_single_pane_g2_cp2

0x1b47,	// (0x00015368) list_single_pane_t1_cp2_ParamLimits

0x1b47,	// (0x00015368) list_single_pane_t1_cp2

0x1b5f,	// (0x00015380) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1b5f,	// (0x00015380) list_single_large_graphic_pane_g1_cp2

0x1b6d,	// (0x0001538e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1b6d,	// (0x0001538e) list_single_large_graphic_pane_g2_cp2

0x1b79,	// (0x0001539a) list_single_large_graphic_pane_g3_cp2

0x1b81,	// (0x000153a2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1b81,	// (0x000153a2) list_single_large_graphic_pane_g4_cp1

0x1b9b,	// (0x000153bc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1b9b,	// (0x000153bc) list_single_large_graphic_pane_t1_cp2

0x31f3,	// (0x00016a14) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x31f3,	// (0x00016a14) list_single_graphic_heading_pane_g1_cp2

0x31c0,	// (0x000169e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x31c0,	// (0x000169e1) list_single_graphic_heading_pane_g4_cp2

0x1b3f,	// (0x00015360) list_single_graphic_heading_pane_g5_cp2

0x31ff,	// (0x00016a20) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x31ff,	// (0x00016a20) list_single_graphic_heading_pane_t1_cp2

0x3215,	// (0x00016a36) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3215,	// (0x00016a36) list_single_graphic_heading_pane_t2_cp2

0x31b4,	// (0x000169d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x31b4,	// (0x000169d5) list_single_2graphic_pane_g1_cp2

0x31c0,	// (0x000169e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x31c0,	// (0x000169e1) list_single_2graphic_pane_g2_cp2

0x1b3f,	// (0x00015360) list_single_2graphic_pane_g3_cp2

0x31d1,	// (0x000169f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x31d1,	// (0x000169f2) list_single_2graphic_pane_g4_cp2

0x31dd,	// (0x000169fe) list_single_2graphic_pane_t1_cp2_ParamLimits

0x31dd,	// (0x000169fe) list_single_2graphic_pane_t1_cp2

0xc6f9,	// (0x0001ff1a) list_highlight_pane_g10_cp1

0x2d8c,	// (0x000165ad) list_highlight_pane_g1_cp1

0x2d94,	// (0x000165b5) list_highlight_pane_g2_cp1

0x2d9c,	// (0x000165bd) list_highlight_pane_g3_cp1

0x2da4,	// (0x000165c5) list_highlight_pane_g4_cp1

0x2dac,	// (0x000165cd) list_highlight_pane_g5_cp1

0x2db4,	// (0x000165d5) list_highlight_pane_g6_cp1

0x2dbc,	// (0x000165dd) list_highlight_pane_g7_cp1

0x2dc4,	// (0x000165e5) list_highlight_pane_g8_cp1

0x2dcc,	// (0x000165ed) list_highlight_pane_g9_cp1

0xb854,	// (0x0001f075) form_field_slider_pane_t3

0xb862,	// (0x0001f083) form_field_slider_pane_t4

0x2cc8,	// (0x000164e9) slider_form_pane_ParamLimits

0x2cc8,	// (0x000164e9) slider_form_pane

0xc703,	// (0x0001ff24) control_abbreviations

0xc703,	// (0x0001ff24) control_conventions

0xc703,	// (0x0001ff24) control_definitions

0xc703,	// (0x0001ff24) format_table_attribute

0x34b4,	// (0x00016cd5) bg_popup_preview_window_pane_g9

0xc703,	// (0x0001ff24) format_table_data2

0xc703,	// (0x0001ff24) format_table_data3

0xc703,	// (0x0001ff24) format_table_data_example

0x0008,

0xc703,	// (0x0001ff24) intro_purpose

0xf8c0,	// (0x000230e1) bg_popup_preview_window_pane_g

0xc703,	// (0x0001ff24) texts_category

0xc703,	// (0x0001ff24) texts_graphics

0x1bb1,	// (0x000153d2) text_digital

0x1bc0,	// (0x000153e1) text_primary

0x1bcf,	// (0x000153f0) text_primary_small

0x1bde,	// (0x000153ff) text_secondary

0x1bed,	// (0x0001540e) text_title

0x3ce6,	// (0x00017507) bg_passive_tab_pane_g1_cp3_srt

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp3_srt

0x3cef,	// (0x00017510) bg_passive_tab_pane_g3_cp3_srt

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp3_srt_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp3_srt

0x3cf8,	// (0x00017519) tabs_4_active_pane_srt_g1

0xbc81,	// (0x0001f4a2) tabs_4_active_pane_srt_t1_ParamLimits

0xbc81,	// (0x0001f4a2) tabs_4_active_pane_srt_t1

0x3ce6,	// (0x00017507) bg_active_tab_pane_g1_cp3_copy1

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp3_copy1

0x3cef,	// (0x00017510) bg_active_tab_pane_g3_cp3_copy1

0xc75f,	// (0x0001ff80) tabs_2_long_active_pane_srt_ParamLimits

0xc75f,	// (0x0001ff80) tabs_2_long_active_pane_srt

0xc75f,	// (0x0001ff80) tabs_2_long_passive_pane_srt_ParamLimits

0xc75f,	// (0x0001ff80) tabs_2_long_passive_pane_srt

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp4_srt

0x3916,	// (0x00017137) bg_passive_tab_pane_g1_cp4_srt

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp4_srt

0x391f,	// (0x00017140) bg_passive_tab_pane_g3_cp4_srt

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp4_srt_ParamLimits

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp4_srt

0xba34,	// (0x0001f255) tabs_2_long_active_pane_srt_t1_ParamLimits

0xba34,	// (0x0001f255) tabs_2_long_active_pane_srt_t1

0x3916,	// (0x00017137) bg_active_tab_pane_g1_cp4_srt

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp4_srt

0x391f,	// (0x00017140) bg_active_tab_pane_g3_cp4_srt

0xc751,	// (0x0001ff72) tabs_3_long_active_pane_srt_ParamLimits

0xc751,	// (0x0001ff72) tabs_3_long_active_pane_srt

0xc751,	// (0x0001ff72) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc751,	// (0x0001ff72) tabs_3_long_passive_pane_cp_srt

0xc751,	// (0x0001ff72) tabs_3_long_passive_pane_srt_ParamLimits

0xc751,	// (0x0001ff72) tabs_3_long_passive_pane_srt

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp5_srt

0x18c3,	// (0x000150e4) bg_passive_tab_pane_g1_cp5_srt

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp5_srt

0x18cc,	// (0x000150ed) bg_passive_tab_pane_g3_cp5_srt

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp5_srt_ParamLimits

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp5_srt

0xba1e,	// (0x0001f23f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xba1e,	// (0x0001f23f) tabs_3_long_active_pane_srt_t1

0x18c3,	// (0x000150e4) bg_active_tab_pane_g1_cp5_srt

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp5_srt

0x18cc,	// (0x000150ed) bg_active_tab_pane_g3_cp5_srt

0x38f6,	// (0x00017117) navi_text_pane_srt_t1

0x38ee,	// (0x0001710f) navi_icon_pane_srt_g1

0x1dc5,	// (0x000155e6) midp_editing_number_pane_srt

0x1bfc,	// (0x0001541d) midp_ticker_pane_srt

0x1dcd,	// (0x000155ee) midp_ticker_pane_srt_g1

0x1dd5,	// (0x000155f6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00022f69) midp_ticker_pane_srt_g

0x1ddd,	// (0x000155fe) midp_ticker_pane_srt_t1

0x38df,	// (0x00017100) midp_editing_number_pane_t1_copy1

0xb25e,	// (0x0001ea7f) listscroll_midp_pane

0xb25e,	// (0x0001ea7f) midp_form_pane

0x1c73,	// (0x00015494) midp_info_popup_window_ParamLimits

0x1c73,	// (0x00015494) midp_info_popup_window

0xe429,	// (0x00021c4a) bg_popup_sub_pane_cp50_ParamLimits

0xe429,	// (0x00021c4a) bg_popup_sub_pane_cp50

0x29ae,	// (0x000161cf) listscroll_midp_info_pane_ParamLimits

0x29ae,	// (0x000161cf) listscroll_midp_info_pane

0x298e,	// (0x000161af) listscroll_form_midp_pane_ParamLimits

0x298e,	// (0x000161af) listscroll_form_midp_pane

0x299a,	// (0x000161bb) scroll_bar_cp050

0x298e,	// (0x000161af) list_midp_pane

0x4aa9,	// (0x000182ca) signal_pane_g2_cp

0x28a8,	// (0x000160c9) listscroll_midp_info_pane_t1_ParamLimits

0x28a8,	// (0x000160c9) listscroll_midp_info_pane_t1

0x28c0,	// (0x000160e1) listscroll_midp_info_pane_t2_ParamLimits

0x28c0,	// (0x000160e1) listscroll_midp_info_pane_t2

0x28fe,	// (0x0001611f) listscroll_midp_info_pane_t3_ParamLimits

0x28fe,	// (0x0001611f) listscroll_midp_info_pane_t3

0x2938,	// (0x00016159) listscroll_midp_info_pane_t4_ParamLimits

0x2938,	// (0x00016159) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0002301c) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0002301c) listscroll_midp_info_pane_t

0xe47e,	// (0x00021c9f) scroll_pane_cp21

0x2842,	// (0x00016063) form_midp_field_choice_group_pane

0x284b,	// (0x0001606c) form_midp_field_text_pane

0x288e,	// (0x000160af) form_midp_field_time_pane

0x2896,	// (0x000160b7) form_midp_gauge_slider_pane

0x289f,	// (0x000160c0) form_midp_gauge_wait_pane

0xc703,	// (0x0001ff24) form_midp_image_pane

0xb837,	// (0x0001f058) list_single_midp_pane_ParamLimits

0xb837,	// (0x0001f058) list_single_midp_pane

0xb812,	// (0x0001f033) form_midp_field_text_pane_t1

0x25c9,	// (0x00015dea) input_focus_pane_cp050

0x2811,	// (0x00016032) list_midp_form_text_pane

0x27b5,	// (0x00015fd6) form_midp_field_choice_group_pane_t1

0x27c3,	// (0x00015fe4) input_focus_pane_cp051

0x27d7,	// (0x00015ff8) list_midp_choice_pane

0xc703,	// (0x0001ff24) status_idle_pane

0x2799,	// (0x00015fba) form_midp_field_time_pane_t1

0xc6f9,	// (0x0001ff1a) wait_anim_pane_g2_copy1

0x27a7,	// (0x00015fc8) form_midp_field_time_pane_t2

0x0001,

0x1d23,	// (0x00015544) aid_navinavi_width_2_pane

0xf7f6,	// (0x00023017) form_midp_field_time_pane_t

0xc703,	// (0x0001ff24) input_focus_pane_cp052

0xc703,	// (0x0001ff24) bg_input_focus_pane_cp040

0x2759,	// (0x00015f7a) form_midp_gauge_slider_pane_t1

0x2767,	// (0x00015f88) form_midp_gauge_slider_pane_t2

0xb7f6,	// (0x0001f017) form_midp_gauge_slider_pane_t3

0xb804,	// (0x0001f025) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0002300e) form_midp_gauge_slider_pane_t

0x2791,	// (0x00015fb2) form_midp_slider_pane

0xc75f,	// (0x0001ff80) bg_input_focus_pane_cp041_ParamLimits

0xc75f,	// (0x0001ff80) bg_input_focus_pane_cp041

0x2726,	// (0x00015f47) form_midp_gauge_wait_pane_t1_ParamLimits

0x2726,	// (0x00015f47) form_midp_gauge_wait_pane_t1

0x2738,	// (0x00015f59) form_midp_gauge_wait_pane_t2_ParamLimits

0x2738,	// (0x00015f59) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x00023009) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x00023009) form_midp_gauge_wait_pane_t

0x274a,	// (0x00015f6b) form_midp_wait_pane_ParamLimits

0x274a,	// (0x00015f6b) form_midp_wait_pane

0x26ee,	// (0x00015f0f) form_midp_image_pane_g1

0x26f7,	// (0x00015f18) form_midp_image_pane_t1

0x2706,	// (0x00015f27) form_midp_image_pane_t2

0x2715,	// (0x00015f36) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x00023002) form_midp_image_pane_t

0x26d6,	// (0x00015ef7) list_single_midp_pane_g1

0x26df,	// (0x00015f00) list_single_midp_pane_t1

0xb7df,	// (0x0001f000) list_midp_form_item_pane_ParamLimits

0xb7df,	// (0x0001f000) list_midp_form_item_pane

0x1ccb,	// (0x000154ec) list_midp_form_item_pane_t1

0x1cda,	// (0x000154fb) midp_ticker_pane_g1

0x1ce6,	// (0x00015507) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00022f4f) midp_ticker_pane_g

0xb302,	// (0x0001eb23) midp_ticker_pane_t1

0xbbd9,	// (0x0001f3fa) midp_editing_number_pane_t1

0x3b5f,	// (0x00017380) midp_editing_number_pane

0x3b6e,	// (0x0001738f) midp_ticker_pane

0x38a7,	// (0x000170c8) ai_message_heading_pane

0xc703,	// (0x0001ff24) bg_popup_window_pane_cp14

0x38af,	// (0x000170d0) listscroll_ai_message_pane

0x382d,	// (0x0001704e) ai_message_heading_pane_g1_ParamLimits

0x382d,	// (0x0001704e) ai_message_heading_pane_g1

0x3839,	// (0x0001705a) ai_message_heading_pane_g2_ParamLimits

0x3839,	// (0x0001705a) ai_message_heading_pane_g2

0x3847,	// (0x00017068) ai_message_heading_pane_g3_ParamLimits

0x3847,	// (0x00017068) ai_message_heading_pane_g3

0x3853,	// (0x00017074) ai_message_heading_pane_g4_ParamLimits

0x3853,	// (0x00017074) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x00023143) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x00023143) ai_message_heading_pane_g

0x385f,	// (0x00017080) ai_message_heading_pane_t1_ParamLimits

0x385f,	// (0x00017080) ai_message_heading_pane_t1

0x3879,	// (0x0001709a) ai_message_heading_pane_t2_ParamLimits

0x3879,	// (0x0001709a) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0002314c) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0002314c) ai_message_heading_pane_t

0x388d,	// (0x000170ae) bg_popup_heading_pane_cp1_ParamLimits

0x388d,	// (0x000170ae) bg_popup_heading_pane_cp1

0x381b,	// (0x0001703c) list_ai_message_pane_ParamLimits

0x381b,	// (0x0001703c) list_ai_message_pane

0xe47e,	// (0x00021c9f) scroll_pane_cp10

0x37b7,	// (0x00016fd8) list_ai_message_pane_g1

0x37bf,	// (0x00016fe0) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x00023120) list_ai_message_pane_g

0x37c7,	// (0x00016fe8) list_ai_message_pane_t1_ParamLimits

0x37c7,	// (0x00016fe8) list_ai_message_pane_t1

0x37dc,	// (0x00016ffd) list_ai_message_pane_t2_ParamLimits

0x37dc,	// (0x00016ffd) list_ai_message_pane_t2

0x37f1,	// (0x00017012) list_ai_message_pane_t3_ParamLimits

0x37f1,	// (0x00017012) list_ai_message_pane_t3

0x3806,	// (0x00017027) list_ai_message_pane_t4_ParamLimits

0x3806,	// (0x00017027) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x00023125) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x00023125) list_ai_message_pane_t

0xba04,	// (0x0001f225) cell_ai_soft_ind_pane_ParamLimits

0xba04,	// (0x0001f225) cell_ai_soft_ind_pane

0x1d04,	// (0x00015525) cell_ai_soft_ind_pane_g1_ParamLimits

0x1d04,	// (0x00015525) cell_ai_soft_ind_pane_g1

0xc703,	// (0x0001ff24) grid_highlight_cp1

0x1d11,	// (0x00015532) text_secondary_cp56_ParamLimits

0x1d11,	// (0x00015532) text_secondary_cp56

0x3775,	// (0x00016f96) example_general_pane_ParamLimits

0x3775,	// (0x00016f96) example_general_pane

0x3781,	// (0x00016fa2) example_parent_pane_g1_ParamLimits

0x3781,	// (0x00016fa2) example_parent_pane_g1

0x378d,	// (0x00016fae) example_parent_pane_t1_ParamLimits

0x378d,	// (0x00016fae) example_parent_pane_t1

0x99f6,	// (0x0001d217) popup_preview_text_window_ParamLimits

0x99f6,	// (0x0001d217) popup_preview_text_window

0x1b2b,	// (0x0001534c) list_single_pane_cp2_g4

0xc97a,	// (0x0002019b) bg_popup_preview_window_pane_ParamLimits

0xc97a,	// (0x0002019b) bg_popup_preview_window_pane

0x34be,	// (0x00016cdf) popup_preview_text_window_t1_ParamLimits

0x34be,	// (0x00016cdf) popup_preview_text_window_t1

0x34dc,	// (0x00016cfd) popup_preview_text_window_t2_ParamLimits

0x34dc,	// (0x00016cfd) popup_preview_text_window_t2

0x3525,	// (0x00016d46) popup_preview_text_window_t3_ParamLimits

0x3525,	// (0x00016d46) popup_preview_text_window_t3

0x356a,	// (0x00016d8b) popup_preview_text_window_t4_ParamLimits

0x356a,	// (0x00016d8b) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x000230f4) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x000230f4) popup_preview_text_window_t

0x35e8,	// (0x00016e09) scroll_pane_cp11

0x24a5,	// (0x00015cc6) bg_popup_preview_window_pane_g1

0x3472,	// (0x00016c93) bg_popup_preview_window_pane_g2

0x347c,	// (0x00016c9d) bg_popup_preview_window_pane_g3

0x3486,	// (0x00016ca7) bg_popup_preview_window_pane_g4

0x3490,	// (0x00016cb1) bg_popup_preview_window_pane_g5

0x349a,	// (0x00016cbb) bg_popup_preview_window_pane_g6

0x34a2,	// (0x00016cc3) bg_popup_preview_window_pane_g7

0x34aa,	// (0x00016ccb) bg_popup_preview_window_pane_g8

0xdf9d,	// (0x000217be) aid_popup_width_pane

0x9966,	// (0x0001d187) popup_midp_note_alarm_window_ParamLimits

0x9966,	// (0x0001d187) popup_midp_note_alarm_window

0xe2a4,	// (0x00021ac5) data_form_pane_ParamLimits

0xadea,	// (0x0001e60b) form_field_data_pane_g1

0xadf4,	// (0x0001e615) form_field_data_pane_t1_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_ParamLimits

0xe2be,	// (0x00021adf) data_form_wide_pane_ParamLimits

0xe2ca,	// (0x00021aeb) form_field_data_wide_pane_g1

0xe2f6,	// (0x00021b17) form_field_data_wide_pane_t1_ParamLimits

0xcb36,	// (0x00020357) input_focus_pane_cp6_ParamLimits

0xaf24,	// (0x0001e745) input_popup_find_pane_g1_ParamLimits

0xaf24,	// (0x0001e745) input_popup_find_pane_g1

0xe755,	// (0x00021f76) aid_navi_side_left_pane

0xe76a,	// (0x00021f8b) aid_navi_side_right_pane

0x2e87,	// (0x000166a8) bg_popup_window_pane_cp30_ParamLimits

0x2e87,	// (0x000166a8) bg_popup_window_pane_cp30

0x2f01,	// (0x00016722) popup_midp_note_alarm_window_g1_ParamLimits

0x2f01,	// (0x00016722) popup_midp_note_alarm_window_g1

0x2f31,	// (0x00016752) popup_midp_note_alarm_window_t1_ParamLimits

0x2f31,	// (0x00016752) popup_midp_note_alarm_window_t1

0x2fd2,	// (0x000167f3) popup_midp_note_alarm_window_t2_ParamLimits

0x2fd2,	// (0x000167f3) popup_midp_note_alarm_window_t2

0x3080,	// (0x000168a1) popup_midp_note_alarm_window_t3_ParamLimits

0x3080,	// (0x000168a1) popup_midp_note_alarm_window_t3

0x30b2,	// (0x000168d3) popup_midp_note_alarm_window_t4_ParamLimits

0x30b2,	// (0x000168d3) popup_midp_note_alarm_window_t4

0x30d8,	// (0x000168f9) popup_midp_note_alarm_window_t5_ParamLimits

0x30d8,	// (0x000168f9) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x00023091) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x00023091) popup_midp_note_alarm_window_t

0x3184,	// (0x000169a5) wait_bar_pane_cp1_ParamLimits

0x3184,	// (0x000169a5) wait_bar_pane_cp1

0xc703,	// (0x0001ff24) wait_anim_pane_copy1

0xc703,	// (0x0001ff24) wait_border_pane_copy1

0x2b6c,	// (0x0001638d) wait_border_pane_g1_copy1

0xe30d,	// (0x00021b2e) form_field_popup_pane_g1

0xae0e,	// (0x0001e62f) form_field_popup_pane_t1_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_cp7_ParamLimits

0xe315,	// (0x00021b36) list_form_pane_ParamLimits

0xe321,	// (0x00021b42) form_field_popup_wide_pane_g1

0xe329,	// (0x00021b4a) form_field_popup_wide_pane_t1_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_cp8_ParamLimits

0xe33b,	// (0x00021b5c) list_form_wide_pane_ParamLimits

0x3d81,	// (0x000175a2) aid_size_cell_graphic_pane

0xae8d,	// (0x0001e6ae) data_form_pane_t1_ParamLimits

0xbbbd,	// (0x0001f3de) data_form_wide_pane_t1_ParamLimits

0xb444,	// (0x0001ec65) bg_status_flat_pane

0xa61f,	// (0x0001de40) title_pane_t1_ParamLimits

0xc719,	// (0x0001ff3a) title_pane_t2_ParamLimits

0xc73f,	// (0x0001ff60) title_pane_t3_ParamLimits

0xf532,	// (0x00022d53) title_pane_t_ParamLimits

0xb05e,	// (0x0001e87f) level_1_signal_ParamLimits

0xb070,	// (0x0001e891) level_2_signal_ParamLimits

0xb083,	// (0x0001e8a4) level_3_signal_ParamLimits

0xb096,	// (0x0001e8b7) level_4_signal_ParamLimits

0xb0a9,	// (0x0001e8ca) level_5_signal_ParamLimits

0xb0bc,	// (0x0001e8dd) level_6_signal_ParamLimits

0xb0cf,	// (0x0001e8f0) level_7_signal_ParamLimits

0xb05e,	// (0x0001e87f) level_1_battery_ParamLimits

0xb070,	// (0x0001e891) level_2_battery_ParamLimits

0xb083,	// (0x0001e8a4) level_3_battery_ParamLimits

0xb096,	// (0x0001e8b7) level_4_battery_ParamLimits

0xb0a9,	// (0x0001e8ca) level_5_battery_ParamLimits

0xb0bc,	// (0x0001e8dd) level_6_battery_ParamLimits

0xb0cf,	// (0x0001e8f0) level_7_battery_ParamLimits

0x2d8c,	// (0x000165ad) bg_status_flat_pane_g1

0x2d94,	// (0x000165b5) bg_status_flat_pane_g2

0x2d9c,	// (0x000165bd) bg_status_flat_pane_g3

0x2da4,	// (0x000165c5) bg_status_flat_pane_g4

0x2dac,	// (0x000165cd) bg_status_flat_pane_g5

0x2db4,	// (0x000165d5) bg_status_flat_pane_g6

0x2dbc,	// (0x000165dd) bg_status_flat_pane_g7

0xa6b3,	// (0x0001ded4) tabs_3_active_pane_t1_ParamLimits

0xa6b3,	// (0x0001ded4) tabs_3_passive_pane_t1_ParamLimits

0xa6cd,	// (0x0001deee) tabs_4_active_pane_t1_ParamLimits

0xa6cd,	// (0x0001deee) tabs_4_1_passive_pane_t1_ParamLimits

0xaf3a,	// (0x0001e75b) tabs_2_active_pane_t1_ParamLimits

0xaf3a,	// (0x0001e75b) tabs_2_passive_pane_t1_ParamLimits

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp4_ParamLimits

0xaf4c,	// (0x0001e76d) tabs_2_long_active_pane_t1_ParamLimits

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp4_ParamLimits

0xedb8,	// (0x000225d9) list_single_midp_graphic_pane_t1_ParamLimits

0xc75f,	// (0x0001ff80) bg_active_tab_pane_cp5_ParamLimits

0xaf5f,	// (0x0001e780) tabs_3_long_active_pane_t1_ParamLimits

0x1f2b,	// (0x0001574c) bg_passive_tab_pane_cp5_ParamLimits

0xedb8,	// (0x000225d9) list_single_midp_graphic_pane_t1

0xb444,	// (0x0001ec65) bg_status_flat_pane_ParamLimits

0x20ed,	// (0x0001590e) indicator_pane_cp2_ParamLimits

0x20ed,	// (0x0001590e) indicator_pane_cp2

0xb5da,	// (0x0001edfb) navi_pane_srt_ParamLimits

0xb5da,	// (0x0001edfb) navi_pane_srt

0x2254,	// (0x00015a75) popup_clock_digital_analogue_window_cp1

0xc7bd,	// (0x0001ffde) indicator_pane_t1

0x1bfc,	// (0x0001541d) copy_highlight_pane

0x1bfc,	// (0x0001541d) cursor_graphics_pane

0x1bfc,	// (0x0001541d) graphic_within_text_pane

0x1bfc,	// (0x0001541d) link_highlight_pane

0x35ab,	// (0x00016dcc) popup_preview_text_window_t5_ParamLimits

0x35ab,	// (0x00016dcc) popup_preview_text_window_t5

0x1d2d,	// (0x0001554e) cursor_digital_pane

0x1d2d,	// (0x0001554e) cursor_primary_pane

0x1d3e,	// (0x0001555f) cursor_primary_small_pane

0x1d46,	// (0x00015567) cursor_secondary_pane

0x1d4e,	// (0x0001556f) cursor_title_pane

0x1d2d,	// (0x0001554e) link_highlight_digital_pane

0x1d35,	// (0x00015556) link_highlight_primary_pane

0x1d3e,	// (0x0001555f) link_highlight_primary_small_pane

0x1d46,	// (0x00015567) link_highlight_secondary_pane

0x1d4e,	// (0x0001556f) link_highlight_title_pane

0x1d2d,	// (0x0001554e) copy_highlight_digital_pane

0x1d2d,	// (0x0001554e) copy_highlight_primary_pane

0x1d3e,	// (0x0001555f) copy_highlight_primary_small_pane

0x1d46,	// (0x00015567) copy_highlight_secondary_pane

0x1d4e,	// (0x0001556f) copy_highlight_title_pane

0x1d46,	// (0x00015567) graphic_text_digital_pane

0x2e2a,	// (0x0001664b) graphic_text_primary_pane

0x2e33,	// (0x00016654) graphic_text_primary_small_pane

0x1d3e,	// (0x0001555f) graphic_text_secondary_pane

0x1d2d,	// (0x0001554e) graphic_text_title_pane

0xb314,	// (0x0001eb35) cursor_primary_pane_g1

0x2e1c,	// (0x0001663d) cursor_text_primary_t1

0xb884,	// (0x0001f0a5) cursor_primary_small_pane_g1

0x2e0e,	// (0x0001662f) cursor_text_primary_small_t1

0xb87a,	// (0x0001f09b) cursor_primary_small_pane_g1_copy1

0x2df6,	// (0x00016617) cursor_text_primary_small_t1_copy1

0x2dd4,	// (0x000165f5) cursor_text_title_t1

0xb870,	// (0x0001f091) cursor_title_pane_g1

0xb314,	// (0x0001eb35) cursor_digital_pane_g1

0x1d60,	// (0x00015581) cursor_text_digital_t1

0x1d6e,	// (0x0001558f) link_highlight_primary_pane_g1

0x2d7d,	// (0x0001659e) link_highlight_primary_pane_t1

0x1d6e,	// (0x0001558f) link_highlight_primary_small_pane_g1

0x1d76,	// (0x00015597) link_highlight_primary_small_pane_t1

0x1d85,	// (0x000155a6) link_highlight_secondary_pane_g1

0x1d8d,	// (0x000155ae) link_highlight_secondary_pane_t1

0x2cf1,	// (0x00016512) link_highlight_title_pane_g1

0x2cf9,	// (0x0001651a) link_highlight_title_pane_t1

0x2cda,	// (0x000164fb) link_highlight_digital_pane_g1

0x2ce2,	// (0x00016503) link_highlight_digital_pane_t1

0x2ba2,	// (0x000163c3) copy_highlight_primary_pane_g1

0x2bb9,	// (0x000163da) copy_highlight_primary_pane_t1

0x2ba2,	// (0x000163c3) copy_highlight_primary_small_pane_g1

0x2baa,	// (0x000163cb) copy_highlight_primary_small_pane_t1

0x1d9c,	// (0x000155bd) copy_highlight_secondary_pane_g1

0x1da4,	// (0x000155c5) copy_highlight_secondary_pane_t1

0x2b8b,	// (0x000163ac) copy_highlight_title_pane_g1

0x2b93,	// (0x000163b4) copy_highlight_title_pane_t1

0x2ba2,	// (0x000163c3) copy_highlight_digital_pane_g1

0x3f53,	// (0x00017774) copy_highlight_digital_pane_t1

0x3ea7,	// (0x000176c8) graphic_text_primary_pane_g1

0x3f37,	// (0x00017758) graphic_text_primary_pane_t1

0x3f45,	// (0x00017766) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x000231c0) graphic_text_primary_pane_t

0x3f13,	// (0x00017734) graphic_text_primary_small_pane_g1

0x3f1b,	// (0x0001773c) graphic_text_primary_small_pane_t1

0x3f29,	// (0x0001774a) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x000231bb) graphic_text_primary_small_pane_t

0x3eef,	// (0x00017710) graphic_text_secondary_pane_g1

0x3ef7,	// (0x00017718) graphic_text_secondary_pane_t1

0x3f05,	// (0x00017726) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x000231b6) graphic_text_secondary_pane_t

0x3ecb,	// (0x000176ec) graphic_text_title_pane_g1

0x3ed3,	// (0x000176f4) graphic_text_title_pane_t1

0x3ee1,	// (0x00017702) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x000231b1) graphic_text_title_pane_t

0x3ea7,	// (0x000176c8) graphic_text_digital_pane_g1

0x3eaf,	// (0x000176d0) graphic_text_digital_pane_t1

0x3ebd,	// (0x000176de) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x000231ac) graphic_text_digital_pane_t

0xc75f,	// (0x0001ff80) navi_icon_pane_srt_ParamLimits

0xc75f,	// (0x0001ff80) navi_icon_pane_srt

0xc703,	// (0x0001ff24) navi_midp_pane_srt

0xc703,	// (0x0001ff24) navi_navi_pane_srt

0xc75f,	// (0x0001ff80) navi_text_pane_srt_ParamLimits

0xc75f,	// (0x0001ff80) navi_text_pane_srt

0x3e72,	// (0x00017693) navi_navi_icon_text_pane_srt

0x3e7a,	// (0x0001769b) navi_navi_pane_srt_g1_ParamLimits

0x3e7a,	// (0x0001769b) navi_navi_pane_srt_g1

0x3e8c,	// (0x000176ad) navi_navi_pane_srt_g2_ParamLimits

0x3e8c,	// (0x000176ad) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x000231a7) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x000231a7) navi_navi_pane_srt_g

0x3e9e,	// (0x000176bf) navi_navi_tabs_pane_srt

0x3e72,	// (0x00017693) navi_navi_text_pane_srt

0x3e72,	// (0x00017693) navi_navi_volume_pane_srt

0x3e63,	// (0x00017684) navi_navi_text_pane_srt_t1

0xeff1,	// (0x00022812) navi_navi_volume_pane_srt_g1

0xeff9,	// (0x0002281a) volume_small_pane_srt_ParamLimits

0xeff9,	// (0x0002281a) volume_small_pane_srt

0xea52,	// (0x00022273) volume_small_pane_srt_g1_ParamLimits

0xea52,	// (0x00022273) volume_small_pane_srt_g1

0xea62,	// (0x00022283) volume_small_pane_srt_g2_ParamLimits

0xea62,	// (0x00022283) volume_small_pane_srt_g2

0xea7f,	// (0x000222a0) volume_small_pane_srt_g3_ParamLimits

0xea7f,	// (0x000222a0) volume_small_pane_srt_g3

0xea90,	// (0x000222b1) volume_small_pane_srt_g4_ParamLimits

0xea90,	// (0x000222b1) volume_small_pane_srt_g4

0xeaa1,	// (0x000222c2) volume_small_pane_srt_g5_ParamLimits

0xeaa1,	// (0x000222c2) volume_small_pane_srt_g5

0xeab2,	// (0x000222d3) volume_small_pane_srt_g6_ParamLimits

0xeab2,	// (0x000222d3) volume_small_pane_srt_g6

0xeac3,	// (0x000222e4) volume_small_pane_srt_g7_ParamLimits

0xeac3,	// (0x000222e4) volume_small_pane_srt_g7

0xead4,	// (0x000222f5) volume_small_pane_srt_g8_ParamLimits

0xead4,	// (0x000222f5) volume_small_pane_srt_g8

0xeae5,	// (0x00022306) volume_small_pane_srt_g9_ParamLimits

0xeae5,	// (0x00022306) volume_small_pane_srt_g9

0xeaf6,	// (0x00022317) volume_small_pane_srt_g10_ParamLimits

0xeaf6,	// (0x00022317) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00022f54) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00022f54) volume_small_pane_srt_g

0xca2f,	// (0x00020250) query_popup_data_pane_cp2

0x3e49,	// (0x0001766a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e49,	// (0x0001766a) navi_navi_icon_text_pane_srt_t1

0x2e2a,	// (0x0001664b) navi_tabs_2_long_pane_srt

0x2e2a,	// (0x0001664b) navi_tabs_2_pane_srt

0x2e2a,	// (0x0001664b) navi_tabs_3_long_pane_srt

0x2e2a,	// (0x0001664b) navi_tabs_3_pane_srt

0x2e2a,	// (0x0001664b) navi_tabs_4_pane_srt

0xefd1,	// (0x000227f2) tabs_2_active_pane_srt_ParamLimits

0xefd1,	// (0x000227f2) tabs_2_active_pane_srt

0xefe1,	// (0x00022802) tabs_2_passive_pane_srt_ParamLimits

0xefe1,	// (0x00022802) tabs_2_passive_pane_srt

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp1_srt

0x3e15,	// (0x00017636) bg_passive_tab_pane_g1_cp1_srt

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp1_srt

0x3e1e,	// (0x0001763f) bg_passive_tab_pane_g3_cp1_srt

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp1_srt_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp1_srt

0x3e27,	// (0x00017648) tabs_2_active_pane_srt_g1

0xbd09,	// (0x0001f52a) tabs_2_active_pane_srt_t1_ParamLimits

0xbd09,	// (0x0001f52a) tabs_2_active_pane_srt_t1

0x3e15,	// (0x00017636) bg_active_tab_pane_g1_cp1_srt

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp1_srt

0x3e1e,	// (0x0001763f) bg_active_tab_pane_g3_cp1_srt

0xef9e,	// (0x000227bf) tabs_3_active_pane_srt_ParamLimits

0xef9e,	// (0x000227bf) tabs_3_active_pane_srt

0xefaf,	// (0x000227d0) tabs_3_passive_pane_cp_srt_ParamLimits

0xefaf,	// (0x000227d0) tabs_3_passive_pane_cp_srt

0xefc0,	// (0x000227e1) tabs_3_passive_pane_srt_ParamLimits

0xefc0,	// (0x000227e1) tabs_3_passive_pane_srt

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25c9,	// (0x00015dea) bg_passive_tab_pane_cp2_srt

0x1db3,	// (0x000155d4) bg_passive_tab_pane_g1_cp2_srt

0x1839,	// (0x0001505a) bg_passive_tab_pane_g2_cp2_srt

0x1dbc,	// (0x000155dd) bg_passive_tab_pane_g3_cp2_srt

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp2_srt_ParamLimits

0xc751,	// (0x0001ff72) bg_active_tab_pane_cp2_srt

0x3dfb,	// (0x0001761c) tabs_3_active_pane_srt_g1

0xbcf3,	// (0x0001f514) tabs_3_active_pane_srt_t1_ParamLimits

0xbcf3,	// (0x0001f514) tabs_3_active_pane_srt_t1

0x1db3,	// (0x000155d4) bg_active_tab_pane_g1_cp2_srt

0x1839,	// (0x0001505a) bg_active_tab_pane_g2_cp2_srt

0x1dbc,	// (0x000155dd) bg_active_tab_pane_g3_cp2_srt

0xef56,	// (0x00022777) tabs_4_active_pane_srt_ParamLimits

0xef56,	// (0x00022777) tabs_4_active_pane_srt

0xef68,	// (0x00022789) tabs_4_passive_pane_cp2_srt_ParamLimits

0xef68,	// (0x00022789) tabs_4_passive_pane_cp2_srt

0xeb5b,	// (0x0002237c) aid_size_cell_toolbar

0x3989,	// (0x000171aa) main_idle_act_pane_ParamLimits

0xec15,	// (0x00022436) popup_large_graphic_colour_window_ParamLimits

0x9cbc,	// (0x0001d4dd) popup_toolbar_window_ParamLimits

0x9cbc,	// (0x0001d4dd) popup_toolbar_window

0x3ba7,	// (0x000173c8) list_single_graphic_2heading_pane_ParamLimits

0x3ba7,	// (0x000173c8) list_single_graphic_2heading_pane

0xe7eb,	// (0x0002200c) aid_size_cell_apps_grid_lsc_pane

0xe7fd,	// (0x0002201e) aid_size_cell_apps_grid_prt_pane

0x1f2b,	// (0x0001574c) bg_wml_button_pane_cp1_ParamLimits

0x1f2b,	// (0x0001574c) bg_wml_button_pane_cp1

0xb812,	// (0x0001f033) form_midp_field_text_pane_t1_ParamLimits

0x25c9,	// (0x00015dea) input_focus_pane_cp050_ParamLimits

0x2811,	// (0x00016032) list_midp_form_text_pane_ParamLimits

0x27c3,	// (0x00015fe4) input_focus_pane_cp051_ParamLimits

0x27d7,	// (0x00015ff8) list_midp_choice_pane_ParamLimits

0xb7ab,	// (0x0001efcc) list_single_2graphic_pane_cp3_ParamLimits

0xb7ab,	// (0x0001efcc) list_single_2graphic_pane_cp3

0xb7be,	// (0x0001efdf) list_single_midp_graphic_pane_ParamLimits

0xb7be,	// (0x0001efdf) list_single_midp_graphic_pane

0xeccd,	// (0x000224ee) list_single_graphic_2heading_pane_g1_ParamLimits

0xeccd,	// (0x000224ee) list_single_graphic_2heading_pane_g1

0xecd9,	// (0x000224fa) list_single_graphic_2heading_pane_g4_ParamLimits

0xecd9,	// (0x000224fa) list_single_graphic_2heading_pane_g4

0xece5,	// (0x00022506) list_single_graphic_2heading_pane_g5_ParamLimits

0xece5,	// (0x00022506) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00022fa7) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00022fa7) list_single_graphic_2heading_pane_g

0xecf1,	// (0x00022512) list_single_graphic_2heading_pane_t1_ParamLimits

0xecf1,	// (0x00022512) list_single_graphic_2heading_pane_t1

0xed05,	// (0x00022526) list_single_graphic_2heading_pane_t2_ParamLimits

0xed05,	// (0x00022526) list_single_graphic_2heading_pane_t2

0xed21,	// (0x00022542) list_single_graphic_2heading_pane_t3_ParamLimits

0xed21,	// (0x00022542) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00022fae) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00022fae) list_single_graphic_2heading_pane_t

0x23a9,	// (0x00015bca) bg_popup_sub_pane_cp2

0x23d3,	// (0x00015bf4) grid_toobar_pane

0xed39,	// (0x0002255a) cell_toolbar_pane_ParamLimits

0xed39,	// (0x0002255a) cell_toolbar_pane

0x2449,	// (0x00015c6a) cell_toolbar_pane_g1_ParamLimits

0x2449,	// (0x00015c6a) cell_toolbar_pane_g1

0x245d,	// (0x00015c7e) cell_toolbar_pane_g2_ParamLimits

0x245d,	// (0x00015c7e) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00022fbc) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00022fbc) cell_toolbar_pane_g

0x247f,	// (0x00015ca0) grid_highlight_pane_cp2_ParamLimits

0x247f,	// (0x00015ca0) grid_highlight_pane_cp2

0x2499,	// (0x00015cba) toolbar_button_pane

0x24a5,	// (0x00015cc6) toolbar_button_pane_g1

0x24ad,	// (0x00015cce) toolbar_button_pane_g2

0x24b5,	// (0x00015cd6) toolbar_button_pane_g3

0x24bd,	// (0x00015cde) toolbar_button_pane_g4

0x24c5,	// (0x00015ce6) toolbar_button_pane_g5

0x24cd,	// (0x00015cee) toolbar_button_pane_g6

0x24d5,	// (0x00015cf6) toolbar_button_pane_g7

0x24dd,	// (0x00015cfe) toolbar_button_pane_g8

0x24e5,	// (0x00015d06) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00022fc1) toolbar_button_pane_g

0xed71,	// (0x00022592) list_single_2graphic_pane_g1_cp3_ParamLimits

0xed71,	// (0x00022592) list_single_2graphic_pane_g1_cp3

0x9d14,	// (0x0001d535) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9d14,	// (0x0001d535) list_single_2graphic_pane_g2_cp3

0xed7d,	// (0x0002259e) list_single_2graphic_pane_g3_cp3

0xed85,	// (0x000225a6) list_single_2graphic_pane_g4_cp3_ParamLimits

0xed85,	// (0x000225a6) list_single_2graphic_pane_g4_cp3

0xed91,	// (0x000225b2) list_single_2graphic_pane_t1_cp3_ParamLimits

0xed91,	// (0x000225b2) list_single_2graphic_pane_t1_cp3

0xedac,	// (0x000225cd) list_single_midp_graphic_pane_g2_ParamLimits

0xedac,	// (0x000225cd) list_single_midp_graphic_pane_g2

0xeb63,	// (0x00022384) aid_zoom_text_primary

0xeb6b,	// (0x0002238c) aid_zoom_text_secondary

0x1e6d,	// (0x0001568e) status_small_pane_g7_ParamLimits

0x1e6d,	// (0x0001568e) status_small_pane_g7

0x1e90,	// (0x000156b1) status_small_pane_t1_ParamLimits

0xa5ef,	// (0x0001de10) title_pane_g2

0x0003,

0xf529,	// (0x00022d4a) title_pane_g

0xa88f,	// (0x0001e0b0) aid_size_cell_colour_1_pane_ParamLimits

0xa88f,	// (0x0001e0b0) aid_size_cell_colour_1_pane

0xa8a3,	// (0x0001e0c4) aid_size_cell_colour_2_pane_ParamLimits

0xa8a3,	// (0x0001e0c4) aid_size_cell_colour_2_pane

0xa8b7,	// (0x0001e0d8) aid_size_cell_colour_3_pane_ParamLimits

0xa8b7,	// (0x0001e0d8) aid_size_cell_colour_3_pane

0xa8cb,	// (0x0001e0ec) aid_size_cell_colour_4_pane_ParamLimits

0xa8cb,	// (0x0001e0ec) aid_size_cell_colour_4_pane

0xe65d,	// (0x00021e7e) title_pane_stacon_g1_ParamLimits

0xe65d,	// (0x00021e7e) title_pane_stacon_g1

0x2c10,	// (0x00016431) popup_note_wait_window_g3_ParamLimits

0x2c10,	// (0x00016431) popup_note_wait_window_g3

0x2c87,	// (0x000164a8) popup_note_wait_window_t5_ParamLimits

0x2c87,	// (0x000164a8) popup_note_wait_window_t5

0xc703,	// (0x0001ff24) main_feb_china_hwr_fs_writing_pane

0x964d,	// (0x0001ce6e) popup_feb_china_hwr_fs_window_ParamLimits

0x964d,	// (0x0001ce6e) popup_feb_china_hwr_fs_window

0x9d25,	// (0x0001d546) aid_size_cell_hwr_fs_ParamLimits

0x9d25,	// (0x0001d546) aid_size_cell_hwr_fs

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp3_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp3

0x9d3a,	// (0x0001d55b) grid_hwr_fs_pane_ParamLimits

0x9d3a,	// (0x0001d55b) grid_hwr_fs_pane

0xedce,	// (0x000225ef) linegrid_hwr_fs_pane_ParamLimits

0xedce,	// (0x000225ef) linegrid_hwr_fs_pane

0x9d52,	// (0x0001d573) cell_hwr_fs_pane_ParamLimits

0x9d52,	// (0x0001d573) cell_hwr_fs_pane

0x25d5,	// (0x00015df6) linegrid_hwr_fs_pane_g1_ParamLimits

0x25d5,	// (0x00015df6) linegrid_hwr_fs_pane_g1

0xb77f,	// (0x0001efa0) linegrid_hwr_fs_pane_g2_ParamLimits

0xb77f,	// (0x0001efa0) linegrid_hwr_fs_pane_g2

0x25f3,	// (0x00015e14) linegrid_hwr_fs_pane_g3_ParamLimits

0x25f3,	// (0x00015e14) linegrid_hwr_fs_pane_g3

0xedde,	// (0x000225ff) linegrid_hwr_fs_pane_g4_ParamLimits

0xedde,	// (0x000225ff) linegrid_hwr_fs_pane_g4

0xedfc,	// (0x0002261d) linegrid_hwr_fs_pane_g5_ParamLimits

0xedfc,	// (0x0002261d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x00022fe7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x00022fe7) linegrid_hwr_fs_pane_g

0x25ff,	// (0x00015e20) cell_hwr_fs_pane_g1_ParamLimits

0x25ff,	// (0x00015e20) cell_hwr_fs_pane_g1

0x22e2,	// (0x00015b03) cell_hwr_fs_pane_g2_ParamLimits

0x22e2,	// (0x00015b03) cell_hwr_fs_pane_g2

0xb791,	// (0x0001efb2) cell_hwr_fs_pane_g3_ParamLimits

0xb791,	// (0x0001efb2) cell_hwr_fs_pane_g3

0xb79e,	// (0x0001efbf) cell_hwr_fs_pane_g4_ParamLimits

0xb79e,	// (0x0001efbf) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x00022ff2) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x00022ff2) cell_hwr_fs_pane_g

0x9d78,	// (0x0001d599) cell_hwr_fs_pane_t1

0xc703,	// (0x0001ff24) grid_highlight_pane_cp6

0xc703,	// (0x0001ff24) main_idle_act2_pane

0xe465,	// (0x00021c86) aid_inside_area_popup_secondary

0xb8a4,	// (0x0001f0c5) aid_inside_area_window_primary_ParamLimits

0xb8a4,	// (0x0001f0c5) aid_inside_area_window_primary

0x3f62,	// (0x00017783) ai2_news_ticker_pane

0x3f6a,	// (0x0001778b) aid_size_cell_ai1_link_ParamLimits

0x3f6a,	// (0x0001778b) aid_size_cell_ai1_link

0x3f84,	// (0x000177a5) popup_ai2_data_window_ParamLimits

0x3f84,	// (0x000177a5) popup_ai2_data_window

0x3fa2,	// (0x000177c3) popup_ai2_link_window_ParamLimits

0x3fa2,	// (0x000177c3) popup_ai2_link_window

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp4_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp4

0x3fb8,	// (0x000177d9) grid_ai2_link_pane_ParamLimits

0x3fb8,	// (0x000177d9) grid_ai2_link_pane

0x3fcf,	// (0x000177f0) popup_ai2_link_window_g1_ParamLimits

0x3fcf,	// (0x000177f0) popup_ai2_link_window_g1

0x3fdb,	// (0x000177fc) popup_ai2_link_window_g2_ParamLimits

0x3fdb,	// (0x000177fc) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x000231c5) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x000231c5) popup_ai2_link_window_g

0x3fec,	// (0x0001780d) ai2_mp_button_pane

0x3ff4,	// (0x00017815) ai2_mp_volume_pane

0x27c3,	// (0x00015fe4) bg_popup_sub_pane_cp5_ParamLimits

0x27c3,	// (0x00015fe4) bg_popup_sub_pane_cp5

0x3ffc,	// (0x0001781d) heading_ai2_gene_pane_ParamLimits

0x3ffc,	// (0x0001781d) heading_ai2_gene_pane

0x4008,	// (0x00017829) list_ai2_gene_pane_ParamLimits

0x4008,	// (0x00017829) list_ai2_gene_pane

0x4050,	// (0x00017871) cell_ai2_link_pane_ParamLimits

0x4050,	// (0x00017871) cell_ai2_link_pane

0x4066,	// (0x00017887) cell_ai2_link_pane_g1

0xc703,	// (0x0001ff24) grid_highlight_pane_cp7

0xf00e,	// (0x0002282f) ai2_mp_volume_pane_g1

0x4139,	// (0x0001795a) ai2_mp_volume_pane_g2

0x40ae,	// (0x000178cf) list_ai2_gene_pane_t1

0x4141,	// (0x00017962) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x000231de) ai2_mp_volume_pane_g

0xf016,	// (0x00022837) volume_small_pane_cp3

0x4149,	// (0x0001796a) aid_size_cell_ai2_button

0x4151,	// (0x00017972) grid_ai2_button_pane

0x415a,	// (0x0001797b) cell_ai2_button_pane_ParamLimits

0x415a,	// (0x0001797b) cell_ai2_button_pane

0xc6f9,	// (0x0001ff1a) cell_ai2_button_pane_g1

0xc703,	// (0x0001ff24) grid_highlight_pane_cp8

0x40f9,	// (0x0001791a) ai2_gene_pane_t1_ParamLimits

0x40f9,	// (0x0001791a) ai2_gene_pane_t1

0x95d1,	// (0x0001cdf2) aid_height_parent_landscape

0xba4b,	// (0x0001f26c) aid_height_set_list

0x3989,	// (0x000171aa) aid_size_parent

0x3d81,	// (0x000175a2) aid_size_cell_graphic_pane_ParamLimits

0x4018,	// (0x00017839) popup_ai2_data_window_g1_ParamLimits

0x4018,	// (0x00017839) popup_ai2_data_window_g1

0x4024,	// (0x00017845) ai2_news_ticker_pane_g1

0x402c,	// (0x0001784d) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x000231ca) ai2_news_ticker_pane_g

0x4034,	// (0x00017855) ai2_news_ticker_pane_t1

0x4042,	// (0x00017863) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x000231cf) ai2_news_ticker_pane_t

0x406f,	// (0x00017890) heading_ai2_gene_pane_g1

0x4077,	// (0x00017898) heading_ai2_gene_pane_t1_ParamLimits

0x4077,	// (0x00017898) heading_ai2_gene_pane_t1

0x408c,	// (0x000178ad) list_highlight_pane_cp6

0x4094,	// (0x000178b5) ai2_gene_pane_ParamLimits

0x4094,	// (0x000178b5) ai2_gene_pane

0x40bc,	// (0x000178dd) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x000231d4) list_ai2_gene_pane_t

0x40ca,	// (0x000178eb) list_highlight_pane_cp8_ParamLimits

0x40ca,	// (0x000178eb) list_highlight_pane_cp8

0x40db,	// (0x000178fc) ai2_gene_pane_g1_ParamLimits

0x40db,	// (0x000178fc) ai2_gene_pane_g1

0x40ed,	// (0x0001790e) ai2_gene_pane_g2_ParamLimits

0x40ed,	// (0x0001790e) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x000231d9) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x000231d9) ai2_gene_pane_g

0xcd51,	// (0x00020572) scroll_pane_cp12

0x9590,	// (0x0001cdb1) control_pane_t3_ParamLimits

0x9590,	// (0x0001cdb1) control_pane_t3

0x1e81,	// (0x000156a2) status_small_pane_g8_ParamLimits

0x1e81,	// (0x000156a2) status_small_pane_g8

0x96ef,	// (0x0001cf10) popup_find_window_ParamLimits

0x99a6,	// (0x0001d1c7) popup_note_image_window_ParamLimits

0x240f,	// (0x00015c30) list_double2_graphic_pane_vc_g1_ParamLimits

0x240f,	// (0x00015c30) list_double2_graphic_pane_vc_g1

0x241b,	// (0x00015c3c) list_double2_graphic_pane_vc_g2_ParamLimits

0x241b,	// (0x00015c3c) list_double2_graphic_pane_vc_g2

0x2427,	// (0x00015c48) list_double2_graphic_pane_vc_g3_ParamLimits

0x2427,	// (0x00015c48) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00022fb5) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00022fb5) list_double2_graphic_pane_vc_g

0x2433,	// (0x00015c54) list_double2_graphic_pane_vc_t1_ParamLimits

0x2433,	// (0x00015c54) list_double2_graphic_pane_vc_t1

0x241b,	// (0x00015c3c) list_single_heading_pane_vc_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_heading_pane_vc_g1

0x2427,	// (0x00015c48) list_single_heading_pane_vc_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_heading_pane_vc_g

0x24ed,	// (0x00015d0e) list_single_heading_pane_vc_t1_ParamLimits

0x24ed,	// (0x00015d0e) list_single_heading_pane_vc_t1

0x2503,	// (0x00015d24) list_single_heading_pane_vc_t2_ParamLimits

0x2503,	// (0x00015d24) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x00022fd6) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x00022fd6) list_single_heading_pane_vc_t

0x2515,	// (0x00015d36) list_setting_number_pane_vc_g1_ParamLimits

0x2515,	// (0x00015d36) list_setting_number_pane_vc_g1

0x2521,	// (0x00015d42) list_setting_number_pane_vc_g2_ParamLimits

0x2521,	// (0x00015d42) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022fdb) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022fdb) list_setting_number_pane_vc_g

0x252d,	// (0x00015d4e) list_setting_number_pane_vc_t1_ParamLimits

0x252d,	// (0x00015d4e) list_setting_number_pane_vc_t1

0x2541,	// (0x00015d62) list_setting_number_pane_vc_t2_ParamLimits

0x2541,	// (0x00015d62) list_setting_number_pane_vc_t2

0x255d,	// (0x00015d7e) list_setting_number_pane_vc_t3_ParamLimits

0x255d,	// (0x00015d7e) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x00022fe0) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x00022fe0) list_setting_number_pane_vc_t

0x258b,	// (0x00015dac) set_value_pane_vc_ParamLimits

0x258b,	// (0x00015dac) set_value_pane_vc

0x3ba7,	// (0x000173c8) list_double2_graphic_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double2_graphic_pane_vc

0x3ba7,	// (0x000173c8) list_double2_large_graphic_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double2_large_graphic_pane_vc

0x3ba7,	// (0x000173c8) list_double2_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double2_pane_vc

0x3ba7,	// (0x000173c8) list_double_graphic_heading_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_graphic_heading_pane_vc

0x3ba7,	// (0x000173c8) list_double_graphic_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_graphic_pane_vc

0x3ba7,	// (0x000173c8) list_double_heading_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_heading_pane_vc

0x3bbb,	// (0x000173dc) list_double_large_graphic_pane_vc_ParamLimits

0x3bbb,	// (0x000173dc) list_double_large_graphic_pane_vc

0x3ba7,	// (0x000173c8) list_double_number_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_number_pane_vc

0x3ba7,	// (0x000173c8) list_double_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_pane_vc

0x3ba7,	// (0x000173c8) list_double_time_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_double_time_pane_vc

0x3ba7,	// (0x000173c8) list_setting_number_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_setting_number_pane_vc

0x3ba7,	// (0x000173c8) list_setting_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_setting_pane_vc

0x3ba7,	// (0x000173c8) list_single_graphic_heading_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_single_graphic_heading_pane_vc

0x3ba7,	// (0x000173c8) list_single_heading_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_single_heading_pane_vc

0x3ba7,	// (0x000173c8) list_single_number_heading_pane_vc_ParamLimits

0x3ba7,	// (0x000173c8) list_single_number_heading_pane_vc

0x240f,	// (0x00015c30) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x240f,	// (0x00015c30) list_double_graphic_heading_pane_vc_g1

0x1b6d,	// (0x0001538e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1b6d,	// (0x0001538e) list_double_graphic_heading_pane_vc_g2

0x418d,	// (0x000179ae) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x418d,	// (0x000179ae) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x000231e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x000231e5) list_double_graphic_heading_pane_vc_g

0x4199,	// (0x000179ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4199,	// (0x000179ba) list_double_graphic_heading_pane_vc_t1

0x41af,	// (0x000179d0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x41af,	// (0x000179d0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x000231ec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x000231ec) list_double_graphic_heading_pane_vc_t

0x2515,	// (0x00015d36) list_setting_pane_vc_g1_ParamLimits

0x2515,	// (0x00015d36) list_setting_pane_vc_g1

0x2521,	// (0x00015d42) list_setting_pane_vc_g2_ParamLimits

0x2521,	// (0x00015d42) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022fdb) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022fdb) list_setting_pane_vc_g

0x4400,	// (0x00017c21) list_setting_pane_vc_t1_ParamLimits

0x4400,	// (0x00017c21) list_setting_pane_vc_t1

0x441c,	// (0x00017c3d) list_setting_pane_vc_t2_ParamLimits

0x441c,	// (0x00017c3d) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x0002322f) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x0002322f) list_setting_pane_vc_t

0x258b,	// (0x00015dac) set_value_pane_cp_vc_ParamLimits

0x258b,	// (0x00015dac) set_value_pane_cp_vc

0x241b,	// (0x00015c3c) list_single_number_heading_pane_vc_g1_ParamLimits

0x241b,	// (0x00015c3c) list_single_number_heading_pane_vc_g1

0x2427,	// (0x00015c48) list_single_number_heading_pane_vc_g2_ParamLimits

0x2427,	// (0x00015c48) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_single_number_heading_pane_vc_g

0x4438,	// (0x00017c59) list_single_number_heading_pane_vc_t1_ParamLimits

0x4438,	// (0x00017c59) list_single_number_heading_pane_vc_t1

0x444e,	// (0x00017c6f) list_single_number_heading_pane_vc_t2_ParamLimits

0x444e,	// (0x00017c6f) list_single_number_heading_pane_vc_t2

0x4464,	// (0x00017c85) list_single_number_heading_pane_vc_t3_ParamLimits

0x4464,	// (0x00017c85) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x00023234) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x00023234) list_single_number_heading_pane_vc_t

0x240f,	// (0x00015c30) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x240f,	// (0x00015c30) list_single_graphic_heading_pane_vc_g1

0x241b,	// (0x00015c3c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x241b,	// (0x00015c3c) list_single_graphic_heading_pane_vc_g4

0x2427,	// (0x00015c48) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2427,	// (0x00015c48) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00022fb5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00022fb5) list_single_graphic_heading_pane_vc_g

0x4438,	// (0x00017c59) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4438,	// (0x00017c59) list_single_graphic_heading_pane_vc_t1

0x4476,	// (0x00017c97) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4476,	// (0x00017c97) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002323b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002323b) list_single_graphic_heading_pane_vc_t

0x241b,	// (0x00015c3c) list_double2_pane_vc_g1_ParamLimits

0x241b,	// (0x00015c3c) list_double2_pane_vc_g1

0x2427,	// (0x00015c48) list_double2_pane_vc_g2_ParamLimits

0x2427,	// (0x00015c48) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_double2_pane_vc_g

0x4488,	// (0x00017ca9) list_double2_pane_vc_t1_ParamLimits

0x4488,	// (0x00017ca9) list_double2_pane_vc_t1

0x449e,	// (0x00017cbf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x449e,	// (0x00017cbf) list_double2_large_graphic_pane_vc_g1

0x241b,	// (0x00015c3c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x241b,	// (0x00015c3c) list_double2_large_graphic_pane_vc_g2

0x2427,	// (0x00015c48) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2427,	// (0x00015c48) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00022de1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00022de1) list_double2_large_graphic_pane_vc_g

0x44aa,	// (0x00017ccb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x44aa,	// (0x00017ccb) list_double2_large_graphic_pane_vc_t1

0x44c0,	// (0x00017ce1) list_double_time_pane_vc_g1_ParamLimits

0x44c0,	// (0x00017ce1) list_double_time_pane_vc_g1

0x44cc,	// (0x00017ced) list_double_time_pane_vc_g2_ParamLimits

0x44cc,	// (0x00017ced) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x00023240) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x00023240) list_double_time_pane_vc_g

0x44d8,	// (0x00017cf9) list_double_time_pane_vc_t1_ParamLimits

0x44d8,	// (0x00017cf9) list_double_time_pane_vc_t1

0x4508,	// (0x00017d29) list_double_time_pane_vc_t2_ParamLimits

0x4508,	// (0x00017d29) list_double_time_pane_vc_t2

0x4531,	// (0x00017d52) list_double_time_pane_vc_t3_ParamLimits

0x4531,	// (0x00017d52) list_double_time_pane_vc_t3

0x4543,	// (0x00017d64) list_double_time_pane_vc_t4_ParamLimits

0x4543,	// (0x00017d64) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x00023245) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x00023245) list_double_time_pane_vc_t

0x241b,	// (0x00015c3c) list_double_pane_vc_g1_ParamLimits

0x241b,	// (0x00015c3c) list_double_pane_vc_g1

0x2427,	// (0x00015c48) list_double_pane_vc_g2_ParamLimits

0x2427,	// (0x00015c48) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_double_pane_vc_g

0x4557,	// (0x00017d78) list_double_pane_vc_t1_ParamLimits

0x4557,	// (0x00017d78) list_double_pane_vc_t1

0x456b,	// (0x00017d8c) list_double_pane_vc_t2_ParamLimits

0x456b,	// (0x00017d8c) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x0002324e) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x0002324e) list_double_pane_vc_t

0x241b,	// (0x00015c3c) list_double_number_pane_vc_g1_ParamLimits

0x241b,	// (0x00015c3c) list_double_number_pane_vc_g1

0x2427,	// (0x00015c48) list_double_number_pane_vc_g2_ParamLimits

0x2427,	// (0x00015c48) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dc4) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dc4) list_double_number_pane_vc_g

0x4581,	// (0x00017da2) list_double_number_pane_vc_t1_ParamLimits

0x4581,	// (0x00017da2) list_double_number_pane_vc_t1

0x4593,	// (0x00017db4) list_double_number_pane_vc_t2_ParamLimits

0x4593,	// (0x00017db4) list_double_number_pane_vc_t2

0x456b,	// (0x00017d8c) list_double_number_pane_vc_t3_ParamLimits

0x456b,	// (0x00017d8c) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x00023253) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x00023253) list_double_number_pane_vc_t

0x45a7,	// (0x00017dc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x45a7,	// (0x00017dc8) list_double_large_graphic_pane_vc_g1

0x45c9,	// (0x00017dea) list_double_large_graphic_pane_vc_g2_ParamLimits

0x45c9,	// (0x00017dea) list_double_large_graphic_pane_vc_g2

0x45dd,	// (0x00017dfe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x45dd,	// (0x00017dfe) list_double_large_graphic_pane_vc_g3

0x45ec,	// (0x00017e0d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x45ec,	// (0x00017e0d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x0002325a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x0002325a) list_double_large_graphic_pane_vc_g

0x45f8,	// (0x00017e19) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45f8,	// (0x00017e19) list_double_large_graphic_pane_vc_t1

0x4614,	// (0x00017e35) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4614,	// (0x00017e35) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x00023263) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x00023263) list_double_large_graphic_pane_vc_t

0x1b6d,	// (0x0001538e) list_double_heading_pane_vc_g1_ParamLimits

0x1b6d,	// (0x0001538e) list_double_heading_pane_vc_g1

0x418d,	// (0x000179ae) list_double_heading_pane_vc_g2_ParamLimits

0x418d,	// (0x000179ae) list_double_heading_pane_vc_g2

0x0001,

0xfa47,	// (0x00023268) list_double_heading_pane_vc_g_ParamLimits

0xfa47,	// (0x00023268) list_double_heading_pane_vc_g

0x4634,	// (0x00017e55) list_double_heading_pane_vc_t1_ParamLimits

0x4634,	// (0x00017e55) list_double_heading_pane_vc_t1

0x4646,	// (0x00017e67) list_double_heading_pane_vc_t2_ParamLimits

0x4646,	// (0x00017e67) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x0002326d) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x0002326d) list_double_heading_pane_vc_t

0x465e,	// (0x00017e7f) list_double_graphic_pane_vc_g1_ParamLimits

0x465e,	// (0x00017e7f) list_double_graphic_pane_vc_g1

0x466a,	// (0x00017e8b) list_double_graphic_pane_vc_g2_ParamLimits

0x466a,	// (0x00017e8b) list_double_graphic_pane_vc_g2

0x241b,	// (0x00015c3c) list_double_graphic_pane_vc_g3_ParamLimits

0x241b,	// (0x00015c3c) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00023272) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00023272) list_double_graphic_pane_vc_g

0x4687,	// (0x00017ea8) list_double_graphic_pane_vc_t1_ParamLimits

0x4687,	// (0x00017ea8) list_double_graphic_pane_vc_t1

0x46b1,	// (0x00017ed2) list_double_graphic_pane_vc_t2_ParamLimits

0x46b1,	// (0x00017ed2) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002327b) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002327b) list_double_graphic_pane_vc_t

0xdfa9,	// (0x000217ca) aid_size_cell_fastswap

0x92bf,	// (0x0001cae0) aid_size_cell_touch_ParamLimits

0x92bf,	// (0x0001cae0) aid_size_cell_touch

0xe130,	// (0x00021951) popup_fast_swap_wide_window_ParamLimits

0xe130,	// (0x00021951) popup_fast_swap_wide_window

0x947d,	// (0x0001cc9e) touch_pane_ParamLimits

0x947d,	// (0x0001cc9e) touch_pane

0xe244,	// (0x00021a65) button_value_adjust_pane_cp2

0xe24c,	// (0x00021a6d) button_value_adjust_pane_cp4

0xe254,	// (0x00021a75) form_field_data_pane_cp2

0xadbf,	// (0x0001e5e0) form_field_data_wide_pane_cp2

0x134b,	// (0x00014b6c) bg_scroll_pane_ParamLimits

0xe80f,	// (0x00022030) scroll_handle_pane_ParamLimits

0xe823,	// (0x00022044) scroll_sc2_down_pane_ParamLimits

0xe823,	// (0x00022044) scroll_sc2_down_pane

0x137c,	// (0x00014b9d) scroll_sc2_up_pane_ParamLimits

0x137c,	// (0x00014b9d) scroll_sc2_up_pane

0xbe4b,	// (0x0001f66c) grid_wheel_folder_pane_g1_ParamLimits

0xbe4b,	// (0x0001f66c) grid_wheel_folder_pane_g1

0xe9ea,	// (0x0002220b) clock_nsta_pane_cp2_ParamLimits

0xe9ea,	// (0x0002220b) clock_nsta_pane_cp2

0xb25e,	// (0x0001ea7f) listscroll_midp_pane_ParamLimits

0xb26a,	// (0x0001ea8b) midp_canvas_pane

0x1efb,	// (0x0001571c) nsta_clock_indic_pane

0x1f37,	// (0x00015758) listscroll_form_pane_vc

0x1f3f,	// (0x00015760) listscroll_set_pane_vc_ParamLimits

0x1f3f,	// (0x00015760) listscroll_set_pane_vc

0xb46c,	// (0x0001ec8d) clock_nsta_pane

0xb496,	// (0x0001ecb7) indicator_nsta_pane

0x23a9,	// (0x00015bca) bg_popup_sub_pane_cp2_ParamLimits

0x23bd,	// (0x00015bde) find_pane_cp2_ParamLimits

0x23bd,	// (0x00015bde) find_pane_cp2

0x23d3,	// (0x00015bf4) grid_toobar_pane_ParamLimits

0x259d,	// (0x00015dbe) list_form_gen_pane_vc_ParamLimits

0x259d,	// (0x00015dbe) list_form_gen_pane_vc

0x25b3,	// (0x00015dd4) scroll_pane_cp8_vc_ParamLimits

0x25b3,	// (0x00015dd4) scroll_pane_cp8_vc

0x262f,	// (0x00015e50) data_form_wide_pane_vc_ParamLimits

0x262f,	// (0x00015e50) data_form_wide_pane_vc

0x263b,	// (0x00015e5c) form_field_data_wide_pane_vc_g1

0x2643,	// (0x00015e64) form_field_data_wide_pane_vc_t1_ParamLimits

0x2643,	// (0x00015e64) form_field_data_wide_pane_vc_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_cp6_vc_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_cp6_vc

0x298e,	// (0x000161af) list_midp_pane_ParamLimits

0x3def,	// (0x00017610) scroll_pane_cp16_ParamLimits

0x3def,	// (0x00017610) scroll_pane_cp16

0x29e4,	// (0x00016205) button_value_adjust_pane_ParamLimits

0x29e4,	// (0x00016205) button_value_adjust_pane

0xba5c,	// (0x0001f27d) button_value_adjust_pane_cp6_ParamLimits

0xba5c,	// (0x0001f27d) button_value_adjust_pane_cp6

0xbb98,	// (0x0001f3b9) settings_code_pane_cp_ParamLimits

0xbb98,	// (0x0001f3b9) settings_code_pane_cp

0xc6f9,	// (0x0001ff1a) cell_touch_pane_g1

0xc6f9,	// (0x0001ff1a) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00022efa) cell_touch_pane_g

0xbd1f,	// (0x0001f540) cell_touch_pane_cp_ParamLimits

0xbd1f,	// (0x0001f540) cell_touch_pane_cp

0xbd3b,	// (0x0001f55c) cell_touch_pane_ParamLimits

0xbd3b,	// (0x0001f55c) cell_touch_pane

0xc6f9,	// (0x0001ff1a) scroll_sc2_down_pane_g1

0xc6f9,	// (0x0001ff1a) scroll_sc2_up_pane_g1

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp4_vc

0x41cd,	// (0x000179ee) list_set_graphic_pane_vc_g1_ParamLimits

0x41cd,	// (0x000179ee) list_set_graphic_pane_vc_g1

0x41d9,	// (0x000179fa) list_set_graphic_pane_vc_g2_ParamLimits

0x41d9,	// (0x000179fa) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x000231f1) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x000231f1) list_set_graphic_pane_vc_g

0x41e5,	// (0x00017a06) text_primary_small_cp13_vc_ParamLimits

0x41e5,	// (0x00017a06) text_primary_small_cp13_vc

0x41fd,	// (0x00017a1e) list_set_graphic_pane_vc_ParamLimits

0x41fd,	// (0x00017a1e) list_set_graphic_pane_vc

0xc703,	// (0x0001ff24) input_focus_pane_cp2_vc

0xc6f9,	// (0x0001ff1a) setting_code_pane_vc_g1

0xc776,	// (0x0001ff97) setting_code_pane_vc_t1

0x4210,	// (0x00017a31) set_text_pane_vc_t1_ParamLimits

0x4210,	// (0x00017a31) set_text_pane_vc_t1

0xc703,	// (0x0001ff24) input_focus_pane_cp1_vc

0x4231,	// (0x00017a52) list_set_text_pane_vc

0xc6f9,	// (0x0001ff1a) setting_text_pane_vc_g1

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp2_vc

0xc76d,	// (0x0001ff8e) setting_slider_graphic_pane_vc_g1

0x423b,	// (0x00017a5c) setting_slider_graphic_pane_vc_t1

0x424d,	// (0x00017a6e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x000231f6) setting_slider_graphic_pane_vc_t

0x425f,	// (0x00017a80) slider_set_pane_cp_vc

0x4269,	// (0x00017a8a) slider_set_pane_vc_g1

0x4272,	// (0x00017a93) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x000231fb) slider_set_pane_vc_g

0xe36b,	// (0x00021b8c) set_opt_bg_pane_g1_copy1

0xe373,	// (0x00021b94) set_opt_bg_pane_g2_copy1

0x429e,	// (0x00017abf) set_opt_bg_pane_g3_copy1

0xe383,	// (0x00021ba4) set_opt_bg_pane_g4_copy1

0xe38b,	// (0x00021bac) set_opt_bg_pane_g5_copy1

0xe393,	// (0x00021bb4) set_opt_bg_pane_g6_copy1

0x42a8,	// (0x00017ac9) set_opt_bg_pane_g7_copy1

0x42b2,	// (0x00017ad3) set_opt_bg_pane_g8_copy1

0x42bc,	// (0x00017add) set_opt_bg_pane_g9_copy1

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp_vc

0x42c6,	// (0x00017ae7) setting_slider_pane_vc_t1

0x42d5,	// (0x00017af6) setting_slider_pane_vc_t2

0x42e7,	// (0x00017b08) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0002320a) setting_slider_pane_vc_t

0x42f9,	// (0x00017b1a) slider_set_pane_vc

0xee12,	// (0x00022633) volume_set_pane_vc_g1

0xee1b,	// (0x0002263c) volume_set_pane_vc_g2

0xee24,	// (0x00022645) volume_set_pane_vc_g3

0xee2d,	// (0x0002264e) volume_set_pane_vc_g4

0xee36,	// (0x00022657) volume_set_pane_vc_g5

0xee3f,	// (0x00022660) volume_set_pane_vc_g6

0xee48,	// (0x00022669) volume_set_pane_vc_g7

0xee51,	// (0x00022672) volume_set_pane_vc_g8

0xee5a,	// (0x0002267b) volume_set_pane_vc_g9

0xee63,	// (0x00022684) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x00023211) volume_set_pane_vc_g

0x4303,	// (0x00017b24) volume_set_pane_vc

0x430d,	// (0x00017b2e) button_value_adjust_pane_cp1_vc

0x4317,	// (0x00017b38) list_highlight_pane_cp2_vc

0x4320,	// (0x00017b41) list_set_pane_vc_ParamLimits

0x4320,	// (0x00017b41) list_set_pane_vc

0x438e,	// (0x00017baf) main_pane_set_vc_t1_ParamLimits

0x438e,	// (0x00017baf) main_pane_set_vc_t1

0x43a3,	// (0x00017bc4) main_pane_set_vc_t2_ParamLimits

0x43a3,	// (0x00017bc4) main_pane_set_vc_t2

0x43b5,	// (0x00017bd6) main_pane_set_vc_t3_ParamLimits

0x43b5,	// (0x00017bd6) main_pane_set_vc_t3

0x43c9,	// (0x00017bea) main_pane_set_vc_t4_ParamLimits

0x43c9,	// (0x00017bea) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x00023226) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x00023226) main_pane_set_vc_t

0x43dd,	// (0x00017bfe) setting_code_pane_vc_ParamLimits

0x43dd,	// (0x00017bfe) setting_code_pane_vc

0x43ee,	// (0x00017c0f) setting_slider_graphic_pane_vc

0x43ee,	// (0x00017c0f) setting_slider_pane_vc

0x43ee,	// (0x00017c0f) setting_text_pane_vc

0x43ee,	// (0x00017c0f) setting_volume_pane_vc

0x43f8,	// (0x00017c19) scroll_pane_cp121_vc

0xe232,	// (0x00021a53) set_content_pane_vc

0x46cf,	// (0x00017ef0) button_value_adjust_pane_g1

0x46d8,	// (0x00017ef9) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00023280) button_value_adjust_pane_g

0x46e1,	// (0x00017f02) form_field_slider_wide_pane_vc_t1_ParamLimits

0x46e1,	// (0x00017f02) form_field_slider_wide_pane_vc_t1

0x46f3,	// (0x00017f14) form_field_slider_wide_pane_vc_t2_ParamLimits

0x46f3,	// (0x00017f14) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00023285) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00023285) form_field_slider_wide_pane_vc_t

0xc751,	// (0x0001ff72) input_focus_pane_cp10_vc_ParamLimits

0xc751,	// (0x0001ff72) input_focus_pane_cp10_vc

0x471f,	// (0x00017f40) slider_cont_pane_cp1_vc_ParamLimits

0x471f,	// (0x00017f40) slider_cont_pane_cp1_vc

0x4731,	// (0x00017f52) slider_form_pane_g1_cp2

0x4272,	// (0x00017a93) slider_form_pane_g2_cp2

0x475e,	// (0x00017f7f) form_field_slider_pane_vc_t3

0x476c,	// (0x00017f8d) form_field_slider_pane_vc_t4

0x477a,	// (0x00017f9b) slider_form_pane_vc_ParamLimits

0x477a,	// (0x00017f9b) slider_form_pane_vc

0x4787,	// (0x00017fa8) form_field_slider_pane_vc_t1_ParamLimits

0x4787,	// (0x00017fa8) form_field_slider_pane_vc_t1

0x46f3,	// (0x00017f14) form_field_slider_pane_vc_t2_ParamLimits

0x46f3,	// (0x00017f14) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00023297) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00023297) form_field_slider_pane_vc_t

0xc751,	// (0x0001ff72) input_focus_pane_cp9_vc_ParamLimits

0xc751,	// (0x0001ff72) input_focus_pane_cp9_vc

0x479d,	// (0x00017fbe) slider_cont_pane_vc_ParamLimits

0x479d,	// (0x00017fbe) slider_cont_pane_vc

0x47b1,	// (0x00017fd2) list_form_graphic_pane_cp_vc_ParamLimits

0x47b1,	// (0x00017fd2) list_form_graphic_pane_cp_vc

0x263b,	// (0x00015e5c) form_field_popup_wide_pane_vc_g1

0x47c6,	// (0x00017fe7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x47c6,	// (0x00017fe7) form_field_popup_wide_pane_vc_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_cp8_vc_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_cp8_vc

0x480b,	// (0x0001802c) list_form_wide_pane_vc_ParamLimits

0x480b,	// (0x0001802c) list_form_wide_pane_vc

0x4817,	// (0x00018038) list_form_graphic_pane_vc_g1

0x481f,	// (0x00018040) list_form_graphic_pane_vc_t1_ParamLimits

0x481f,	// (0x00018040) list_form_graphic_pane_vc_t1

0xc75f,	// (0x0001ff80) list_highlight_pane_cp5_vc_ParamLimits

0xc75f,	// (0x0001ff80) list_highlight_pane_cp5_vc

0x483b,	// (0x0001805c) list_form_graphic_pane_vc_ParamLimits

0x483b,	// (0x0001805c) list_form_graphic_pane_vc

0x263b,	// (0x00015e5c) form_field_popup_pane_vc_g1

0x4851,	// (0x00018072) form_field_popup_pane_vc_t1_ParamLimits

0x4851,	// (0x00018072) form_field_popup_pane_vc_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_cp7_vc_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_cp7_vc

0x4868,	// (0x00018089) list_form_pane_vc_ParamLimits

0x4868,	// (0x00018089) list_form_pane_vc

0x4874,	// (0x00018095) data_form_pane_vc_t1_ParamLimits

0x4874,	// (0x00018095) data_form_pane_vc_t1

0xe36b,	// (0x00021b8c) input_focus_pane_vc_g1

0xe373,	// (0x00021b94) input_focus_pane_vc_g2

0xe37b,	// (0x00021b9c) input_focus_pane_vc_g3

0xe383,	// (0x00021ba4) input_focus_pane_vc_g4

0xe38b,	// (0x00021bac) input_focus_pane_vc_g5

0xe393,	// (0x00021bb4) input_focus_pane_vc_g6

0xe39b,	// (0x00021bbc) input_focus_pane_vc_g7

0xe3a3,	// (0x00021bc4) input_focus_pane_vc_g8

0xe3ab,	// (0x00021bcc) input_focus_pane_vc_g9

0xc6f9,	// (0x0001ff1a) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00022e83) input_focus_pane_vc_g

0x262f,	// (0x00015e50) data_form_pane_vc_ParamLimits

0x262f,	// (0x00015e50) data_form_pane_vc

0x263b,	// (0x00015e5c) form_field_data_pane_vc_g1

0x4891,	// (0x000180b2) form_field_data_pane_vc_t1_ParamLimits

0x4891,	// (0x000180b2) form_field_data_pane_vc_t1

0xe2b0,	// (0x00021ad1) input_focus_pane_vc_ParamLimits

0xe2b0,	// (0x00021ad1) input_focus_pane_vc

0x48ab,	// (0x000180cc) button_value_adjust_pane_cp3_vc

0x48b3,	// (0x000180d4) button_value_adjust_pane_cp5_vc

0x48bb,	// (0x000180dc) form_field_data_pane_vc_ParamLimits

0x48bb,	// (0x000180dc) form_field_data_pane_vc

0x48d6,	// (0x000180f7) form_field_data_pane_vc_cp2

0x48de,	// (0x000180ff) form_field_data_wide_pane_vc_ParamLimits

0x48de,	// (0x000180ff) form_field_data_wide_pane_vc

0x48f8,	// (0x00018119) form_field_data_wide_pane_vc_cp2

0x4900,	// (0x00018121) form_field_popup_pane_vc_ParamLimits

0x4900,	// (0x00018121) form_field_popup_pane_vc

0x491b,	// (0x0001813c) form_field_popup_wide_pane_vc_ParamLimits

0x491b,	// (0x0001813c) form_field_popup_wide_pane_vc

0x4935,	// (0x00018156) form_field_slider_pane_vc_ParamLimits

0x4935,	// (0x00018156) form_field_slider_pane_vc

0x4948,	// (0x00018169) form_field_slider_wide_pane_vc_ParamLimits

0x4948,	// (0x00018169) form_field_slider_wide_pane_vc

0xbd59,	// (0x0001f57a) grid_touch_1_pane_ParamLimits

0xbd59,	// (0x0001f57a) grid_touch_1_pane

0xbd6d,	// (0x0001f58e) grid_touch_2_pane_ParamLimits

0xbd6d,	// (0x0001f58e) grid_touch_2_pane

0x4a2e,	// (0x0001824f) touch_pane_g1_ParamLimits

0x4a2e,	// (0x0001824f) touch_pane_g1

0x4981,	// (0x000181a2) cell_app_pane_cp_wide_ParamLimits

0x4981,	// (0x000181a2) cell_app_pane_cp_wide

0x4992,	// (0x000181b3) grid_popup_fast_wide_pane_ParamLimits

0x4992,	// (0x000181b3) grid_popup_fast_wide_pane

0x49a6,	// (0x000181c7) scroll_pane_cp19_ParamLimits

0x49a6,	// (0x000181c7) scroll_pane_cp19

0xc703,	// (0x0001ff24) bg_popup_window_pane_cp20

0x49ba,	// (0x000181db) listscroll_popup_fast_wide_pane

0xbd99,	// (0x0001f5ba) grid_indicator_nsta_pane

0x49d4,	// (0x000181f5) clock_nsta_pane_g1

0x49dd,	// (0x000181fe) clock_nsta_pane_t1

0xbda5,	// (0x0001f5c6) cell_indicator_nsta_pane_ParamLimits

0xbda5,	// (0x0001f5c6) cell_indicator_nsta_pane

0x4a2e,	// (0x0001824f) cell_indicator_nsta_pane_g1

0xbdc0,	// (0x0001f5e1) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x000232a8) cell_indicator_nsta_pane_g

0x4a4f,	// (0x00018270) clock_nsta_pane_cp

0x4a58,	// (0x00018279) indicator_nsta_pane_cp

0x4a62,	// (0x00018283) nsta_clock_indic_pane_g1

0xc7b5,	// (0x0001ffd6) grid_indicator_pane

0x146e,	// (0x00014c8f) scroll_pane_cp29

0xe939,	// (0x0002215a) indicator_nsta_pane_cp2_ParamLimits

0xe939,	// (0x0002215a) indicator_nsta_pane_cp2

0xc75f,	// (0x0001ff80) main_apps_wheel_pane

0x284b,	// (0x0001606c) form_midp_field_text_pane_ParamLimits

0x299a,	// (0x000161bb) scroll_bar_cp050_ParamLimits

0x4abb,	// (0x000182dc) cell_indicator_pane_ParamLimits

0x4abb,	// (0x000182dc) cell_indicator_pane

0x4ad3,	// (0x000182f4) cell_indicator_pane_g1

0xbdcd,	// (0x0001f5ee) grid_wheel_folder_pane_ParamLimits

0xbdcd,	// (0x0001f5ee) grid_wheel_folder_pane

0xbddb,	// (0x0001f5fc) list_wheel_apps_pane_ParamLimits

0xbddb,	// (0x0001f5fc) list_wheel_apps_pane

0xbde9,	// (0x0001f60a) main_apps_wheel_pane_g1_ParamLimits

0xbde9,	// (0x0001f60a) main_apps_wheel_pane_g1

0xbdf9,	// (0x0001f61a) main_apps_wheel_pane_g2_ParamLimits

0xbdf9,	// (0x0001f61a) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x000232c4) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x000232c4) main_apps_wheel_pane_g

0xbe09,	// (0x0001f62a) main_apps_wheel_pane_t1_ParamLimits

0xbe09,	// (0x0001f62a) main_apps_wheel_pane_t1

0xbe21,	// (0x0001f642) list_wheel_apps_pane_g1

0xbe29,	// (0x0001f64a) list_wheel_apps_pane_g2

0xbe31,	// (0x0001f652) list_wheel_apps_pane_g3

0xbe39,	// (0x0001f65a) list_wheel_apps_pane_g4

0xbe41,	// (0x0001f662) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x000232c9) list_wheel_apps_pane_g

0x1a6d,	// (0x0001528e) navi_icon_text_pane

0xb35e,	// (0x0001eb7f) aid_fill_nsta

0xbe5c,	// (0x0001f67d) navi_icon_text_pane_g1

0xbe68,	// (0x0001f689) navi_icon_text_pane_t1

0x1903,	// (0x00015124) list_set_graphic_pane_t1_ParamLimits

0x1903,	// (0x00015124) list_set_graphic_pane_t1

0x3107,	// (0x00016928) popup_midp_note_alarm_window_t6_ParamLimits

0x3107,	// (0x00016928) popup_midp_note_alarm_window_t6

0x3119,	// (0x0001693a) popup_midp_note_alarm_window_t7_ParamLimits

0x3119,	// (0x0001693a) popup_midp_note_alarm_window_t7

0x312b,	// (0x0001694c) popup_midp_note_alarm_window_t8_ParamLimits

0x312b,	// (0x0001694c) popup_midp_note_alarm_window_t8

0x313d,	// (0x0001695e) popup_midp_note_alarm_window_t9_ParamLimits

0x313d,	// (0x0001695e) popup_midp_note_alarm_window_t9

0x314f,	// (0x00016970) popup_midp_note_alarm_window_t10_ParamLimits

0x314f,	// (0x00016970) popup_midp_note_alarm_window_t10

0x3161,	// (0x00016982) popup_midp_note_alarm_window_t11_ParamLimits

0x3161,	// (0x00016982) popup_midp_note_alarm_window_t11

0x3173,	// (0x00016994) scroll_pane_cp17_ParamLimits

0x3173,	// (0x00016994) scroll_pane_cp17

0xee12,	// (0x00022633) volume_small_pane_cp_g1

0xf01f,	// (0x00022840) volume_small_pane_cp_g2

0xf028,	// (0x00022849) volume_small_pane_cp_g3

0xf031,	// (0x00022852) volume_small_pane_cp_g4

0xf03a,	// (0x0002285b) volume_small_pane_cp_g5

0xf043,	// (0x00022864) volume_small_pane_cp_g6

0xf04c,	// (0x0002286d) volume_small_pane_cp_g7

0xf055,	// (0x00022876) volume_small_pane_cp_g8

0xf05e,	// (0x0002287f) volume_small_pane_cp_g9

0xf067,	// (0x00022888) volume_small_pane_cp_g10

0x1cda,	// (0x000154fb) midp_ticker_pane_g1_ParamLimits

0x1ce6,	// (0x00015507) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00022f4f) midp_ticker_pane_g_ParamLimits

0xb302,	// (0x0001eb23) midp_ticker_pane_t1_ParamLimits

0xb382,	// (0x0001eba3) aid_fill_nsta_2

0x2986,	// (0x000161a7) list_form2_midp_pane

0x3b5f,	// (0x00017380) midp_editing_number_pane_ParamLimits

0x3b6e,	// (0x0001738f) midp_ticker_pane_ParamLimits

0x4bc6,	// (0x000183e7) form2_midp_field_pane

0x4bea,	// (0x0001840b) scroll_pane_cp51

0x4c0a,	// (0x0001842b) form2_midp_button_pane_ParamLimits

0x4c0a,	// (0x0001842b) form2_midp_button_pane

0x4c1c,	// (0x0001843d) form2_midp_content_pane_ParamLimits

0x4c1c,	// (0x0001843d) form2_midp_content_pane

0x4c36,	// (0x00018457) form2_midp_field_choice_group_pane

0x4c3e,	// (0x0001845f) form2_midp_field_pane_g1

0x4c46,	// (0x00018467) form2_midp_field_pane_g2

0x4c4e,	// (0x0001846f) form2_midp_field_pane_g3

0x4c56,	// (0x00018477) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x000232ee) form2_midp_field_pane_g

0x4c5e,	// (0x0001847f) form2_midp_gauge_slider_pane

0x4c66,	// (0x00018487) form2_midp_gauge_wait_pane

0x4c6e,	// (0x0001848f) form2_midp_image_pane_ParamLimits

0x4c6e,	// (0x0001848f) form2_midp_image_pane

0x4c89,	// (0x000184aa) form2_midp_label_pane_ParamLimits

0x4c89,	// (0x000184aa) form2_midp_label_pane

0xbe96,	// (0x0001f6b7) form2_midp_label_pane_cp_ParamLimits

0xbe96,	// (0x0001f6b7) form2_midp_label_pane_cp

0x4cc9,	// (0x000184ea) form2_midp_string_pane_ParamLimits

0x4cc9,	// (0x000184ea) form2_midp_string_pane

0xbeb7,	// (0x0001f6d8) form2_midp_text_pane_ParamLimits

0xbeb7,	// (0x0001f6d8) form2_midp_text_pane

0x4cfc,	// (0x0001851d) form2_midp_time_pane

0x4d0c,	// (0x0001852d) input_focus_pane_cp51_ParamLimits

0x4d0c,	// (0x0001852d) input_focus_pane_cp51

0x4d24,	// (0x00018545) form2_midp_label_pane_t1_ParamLimits

0x4d24,	// (0x00018545) form2_midp_label_pane_t1

0xbed8,	// (0x0001f6f9) form2_mdip_text_pane_t1_ParamLimits

0xbed8,	// (0x0001f6f9) form2_mdip_text_pane_t1

0x4d89,	// (0x000185aa) form2_midp_time_pane_t1

0x4da4,	// (0x000185c5) form2_midp_gauge_slider_pane_t1

0xbef4,	// (0x0001f715) form2_midp_gauge_slider_pane_t2

0xbf06,	// (0x0001f727) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x000232f7) form2_midp_gauge_slider_pane_t

0x4dda,	// (0x000185fb) form2_midp_slider_pane

0x4de6,	// (0x00018607) form2_midp_gauge_wait_pane_t1

0x4df4,	// (0x00018615) form2_midp_wait_pane_ParamLimits

0x4df4,	// (0x00018615) form2_midp_wait_pane

0x2682,	// (0x00015ea3) list_single_2graphic_pane_cp4_ParamLimits

0x2682,	// (0x00015ea3) list_single_2graphic_pane_cp4

0xb7be,	// (0x0001efdf) list_single_midp_graphic_pane_cp_ParamLimits

0xb7be,	// (0x0001efdf) list_single_midp_graphic_pane_cp

0xc703,	// (0x0001ff24) list_highlight_pane_cp20

0x4e38,	// (0x00018659) list_single_2graphic_pane_g1_cp4

0x406f,	// (0x00017890) list_single_2graphic_pane_g2_cp4

0x4e40,	// (0x00018661) list_single_2graphic_pane_t1_cp4

0xc75f,	// (0x0001ff80) list_highlight_pane_cp21

0x4e4f,	// (0x00018670) list_single_midp_graphic_pane_g4_cp

0x4e5e,	// (0x0001867f) list_single_midp_graphic_pane_t1_cp

0xbf18,	// (0x0001f739) form2_mdip_string_pane_t1_ParamLimits

0xbf18,	// (0x0001f739) form2_mdip_string_pane_t1

0xc703,	// (0x0001ff24) bg_wml_button_pane_cp2

0xc6f9,	// (0x0001ff1a) form2_midp_image_pane_g1

0xcd6e,	// (0x0002058f) list_double_large_graphic_pane_g5_ParamLimits

0xcd6e,	// (0x0002058f) list_double_large_graphic_pane_g5

0xb25e,	// (0x0001ea7f) midp_form_pane_ParamLimits

0xc75f,	// (0x0001ff80) main_apps_wheel_pane_ParamLimits

0x9a2c,	// (0x0001d24d) popup_preview_window_ParamLimits

0x9a2c,	// (0x0001d24d) popup_preview_window

0xec66,	// (0x00022487) popup_touch_info_window_ParamLimits

0xec66,	// (0x00022487) popup_touch_info_window

0xec88,	// (0x000224a9) popup_touch_menu_window_ParamLimits

0xec88,	// (0x000224a9) popup_touch_menu_window

0xc6ef,	// (0x0001ff10) bg_popup_sub_pane_cp6

0x4f0f,	// (0x00018730) list_touch_menu_pane

0x4f17,	// (0x00018738) list_single_touch_menu_pane_ParamLimits

0x4f17,	// (0x00018738) list_single_touch_menu_pane

0x4f2f,	// (0x00018750) list_single_touch_menu_pane_t1

0xc75f,	// (0x0001ff80) bg_popup_sub_pane_cp7_ParamLimits

0xc75f,	// (0x0001ff80) bg_popup_sub_pane_cp7

0x4f3d,	// (0x0001875e) heading_sub_pane

0x4f45,	// (0x00018766) list_touch_info_pane_ParamLimits

0x4f45,	// (0x00018766) list_touch_info_pane

0x4f54,	// (0x00018775) list_single_touch_info_pane_ParamLimits

0x4f54,	// (0x00018775) list_single_touch_info_pane

0x4f66,	// (0x00018787) list_single_touch_info_pane_t1

0x4f74,	// (0x00018795) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00023305) list_single_touch_info_pane_t

0x1bfc,	// (0x0001541d) bg_popup_heading_pane_cp

0x4f82,	// (0x000187a3) heading_sub_pane_t1

0x25c9,	// (0x00015dea) bg_popup_preview_window_pane_cp_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_preview_window_pane_cp

0x4f3d,	// (0x0001875e) heading_preview_pane

0x4f45,	// (0x00018766) list_preview_pane_ParamLimits

0x4f45,	// (0x00018766) list_preview_pane

0x4f90,	// (0x000187b1) popup_preview_window_g1

0x4f54,	// (0x00018775) list_single_preview_pane_ParamLimits

0x4f54,	// (0x00018775) list_single_preview_pane

0x4f98,	// (0x000187b9) list_single_preview_pane_g1

0x4fa0,	// (0x000187c1) list_single_preview_pane_t1

0x4f66,	// (0x00018787) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x0002330a) list_single_preview_pane_t

0x4fae,	// (0x000187cf) bg_popup_heading_pane_cp2_ParamLimits

0x4fae,	// (0x000187cf) bg_popup_heading_pane_cp2

0x4fc4,	// (0x000187e5) heading_preview_pane_g1

0x4fcc,	// (0x000187ed) heading_preview_pane_t1_ParamLimits

0x4fcc,	// (0x000187ed) heading_preview_pane_t1

0xc7cc,	// (0x0001ffed) soft_indicator_pane_t1_ParamLimits

0xcd2e,	// (0x0002054f) scroll_pane_ParamLimits

0x136a,	// (0x00014b8b) scroll_sc2_left_pane

0x1373,	// (0x00014b94) scroll_sc2_right_pane

0x1392,	// (0x00014bb3) scroll_bg_pane_g1_ParamLimits

0x13a7,	// (0x00014bc8) scroll_bg_pane_g2_ParamLimits

0x13bf,	// (0x00014be0) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00022eda) scroll_bg_pane_g_ParamLimits

0x1392,	// (0x00014bb3) scroll_handle_pane_g1_ParamLimits

0x13e1,	// (0x00014c02) scroll_handle_pane_g2_ParamLimits

0x13bf,	// (0x00014be0) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00022ee1) scroll_handle_pane_g_ParamLimits

0xeb89,	// (0x000223aa) popup_choice_list_window_ParamLimits

0xeb89,	// (0x000223aa) popup_choice_list_window

0x23b5,	// (0x00015bd6) choice_list_pane

0x2471,	// (0x00015c92) cell_toolbar_pane_t1

0x2499,	// (0x00015cba) toolbar_button_pane_ParamLimits

0x363d,	// (0x00016e5e) ai_gene_pane_1_t2_ParamLimits

0x363d,	// (0x00016e5e) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x00023104) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x00023104) ai_gene_pane_1_t

0x4fe9,	// (0x0001880a) scroll_sc2_left_pane_g1

0x4fe9,	// (0x0001880a) scroll_sc2_right_pane_g1

0x1f2b,	// (0x0001574c) bg_popup_sub_pane_cp10

0x4ff3,	// (0x00018814) list_choice_list_pane

0x500c,	// (0x0001882d) list_single_choice_list_pane_ParamLimits

0x500c,	// (0x0001882d) list_single_choice_list_pane

0x5024,	// (0x00018845) list_single_choice_list_pane_g1

0xe4a3,	// (0x00021cc4) list_single_choice_list_pane_t1_ParamLimits

0xe4a3,	// (0x00021cc4) list_single_choice_list_pane_t1

0x502c,	// (0x0001884d) choice_list_pane_g1

0x5034,	// (0x00018855) choice_list_pane_t1

0xc6ef,	// (0x0001ff10) input_focus_pane_cp11

0xe671,	// (0x00021e92) title_pane_stacon_g2_ParamLimits

0xe671,	// (0x00021e92) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00022ec0) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00022ec0) title_pane_stacon_g

0x1bfc,	// (0x0001541d) cursor_press_pane

0x96a3,	// (0x0001cec4) popup_fep_hwr_window_ParamLimits

0x96a3,	// (0x0001cec4) popup_fep_hwr_window

0xebf3,	// (0x00022414) popup_fep_vkb_window_ParamLimits

0xebf3,	// (0x00022414) popup_fep_vkb_window

0x5042,	// (0x00018863) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00023333) fep_vkb_side_pane_g_ParamLimits

0xf09b,	// (0x000228bc) fep_hwr_candidate_pane_ParamLimits

0xf09b,	// (0x000228bc) fep_hwr_candidate_pane

0xf0c5,	// (0x000228e6) fep_hwr_side_pane_ParamLimits

0xf0c5,	// (0x000228e6) fep_hwr_side_pane

0xf0e7,	// (0x00022908) fep_hwr_top_pane_ParamLimits

0xf0e7,	// (0x00022908) fep_hwr_top_pane

0xf0ff,	// (0x00022920) fep_hwr_write_pane_ParamLimits

0xf0ff,	// (0x00022920) fep_hwr_write_pane

0xfb12,	// (0x00023333) fep_vkb_side_pane_g

0x504a,	// (0x0001886b) fep_hwr_top_pane_g1

0x505c,	// (0x0001887d) fep_hwr_top_pane_g2

0xf139,	// (0x0002295a) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x0002330f) fep_hwr_top_pane_g

0xf14e,	// (0x0002296f) fep_hwr_top_text_pane

0x1536,	// (0x00014d57) fep_hwr_top_text_pane_g1

0x5092,	// (0x000188b3) fep_hwr_top_text_pane_t1

0xf1dd,	// (0x000229fe) fep_hwr_candidate_pane_g1

0x52dd,	// (0x00018afe) fep_vkb_keypad_pane_g3_ParamLimits

0x52dd,	// (0x00018afe) fep_vkb_keypad_pane_g3

0x5309,	// (0x00018b2a) fep_vkb_keypad_pane_g4_ParamLimits

0x5309,	// (0x00018b2a) fep_vkb_keypad_pane_g4

0x5380,	// (0x00018ba1) fep_vkb_bottom_pane_g2_ParamLimits

0x5380,	// (0x00018ba1) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x0002333a) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x0002333a) fep_vkb_bottom_pane_g

0x4fe9,	// (0x0001880a) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00023344) cell_vkb_side_pane_g

0x540b,	// (0x00018c2c) cell_vkb_side_pane_t1

0x5419,	// (0x00018c3a) cell_vkb_side_pane_t1_copy1

0x4fe9,	// (0x0001880a) bg_fep_vkb_candidate_pane_g2

0x555d,	// (0x00018d7e) cell_vkb_candidate_pane_ParamLimits

0x50a0,	// (0x000188c1) aid_size_cell_vkb_ParamLimits

0x50a0,	// (0x000188c1) aid_size_cell_vkb

0x555d,	// (0x00018d7e) cell_vkb_candidate_pane

0xf204,	// (0x00022a25) bg_popup_fep_shadow_pane_g1

0xbfae,	// (0x0001f7cf) fep_vkb_bottom_pane_ParamLimits

0xbfae,	// (0x0001f7cf) fep_vkb_bottom_pane

0x516f,	// (0x00018990) fep_vkb_candidate_pane_ParamLimits

0x516f,	// (0x00018990) fep_vkb_candidate_pane

0xbfda,	// (0x0001f7fb) fep_vkb_keypad_pane_ParamLimits

0xbfda,	// (0x0001f7fb) fep_vkb_keypad_pane

0xc001,	// (0x0001f822) fep_vkb_side_pane_ParamLimits

0xc001,	// (0x0001f822) fep_vkb_side_pane

0xc03d,	// (0x0001f85e) fep_vkb_top_pane_ParamLimits

0xc03d,	// (0x0001f85e) fep_vkb_top_pane

0x5236,	// (0x00018a57) fep_vkb_top_pane_g1_ParamLimits

0x5236,	// (0x00018a57) fep_vkb_top_pane_g1

0x5245,	// (0x00018a66) fep_vkb_top_pane_g2_ParamLimits

0x5245,	// (0x00018a66) fep_vkb_top_pane_g2

0x5254,	// (0x00018a75) fep_vkb_top_pane_g3_ParamLimits

0x5254,	// (0x00018a75) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x0002332a) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x0002332a) fep_vkb_top_pane_g

0x5272,	// (0x00018a93) fep_vkb_top_text_pane_ParamLimits

0x5272,	// (0x00018a93) fep_vkb_top_text_pane

0xc079,	// (0x0001f89a) fep_vkb_side_pane_g1_ParamLimits

0xc079,	// (0x0001f89a) fep_vkb_side_pane_g1

0x52cc,	// (0x00018aed) grid_vkb_side_pane_ParamLimits

0x52cc,	// (0x00018aed) grid_vkb_side_pane

0xf20c,	// (0x00022a2d) bg_popup_fep_shadow_pane_g2

0xf215,	// (0x00022a36) bg_popup_fep_shadow_pane_g3

0xf21d,	// (0x00022a3e) bg_popup_fep_shadow_pane_g4

0xf226,	// (0x00022a47) bg_popup_fep_shadow_pane_g5

0xf230,	// (0x00022a51) bg_popup_fep_shadow_pane_g6

0xf238,	// (0x00022a59) bg_popup_fep_shadow_pane_g7

0xe383,	// (0x00021ba4) bg_popup_fep_shadow_pane_g8

0x532b,	// (0x00018b4c) grid_vkb_keypad_number_pane_ParamLimits

0x532b,	// (0x00018b4c) grid_vkb_keypad_number_pane

0x533f,	// (0x00018b60) grid_vkb_keypad_pane_ParamLimits

0x533f,	// (0x00018b60) grid_vkb_keypad_pane

0x5365,	// (0x00018b86) fep_vkb_bottom_pane_g1_ParamLimits

0x5365,	// (0x00018b86) fep_vkb_bottom_pane_g1

0x538e,	// (0x00018baf) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x538e,	// (0x00018baf) grid_vkb_keypad_bottom_left_pane

0x53a3,	// (0x00018bc4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x53a3,	// (0x00018bc4) grid_vkb_keypad_bottom_right_pane

0x53b8,	// (0x00018bd9) fep_vkb_top_text_pane_g1

0xc0c0,	// (0x0001f8e1) fep_vkb_top_text_pane_t1

0xc0d2,	// (0x0001f8f3) cell_vkb_side_pane_ParamLimits

0xc0d2,	// (0x0001f8f3) cell_vkb_side_pane

0x4fe9,	// (0x0001880a) cell_vkb_side_pane_g1

0x5427,	// (0x00018c48) cell_vkb_keypad_pane_ParamLimits

0x5427,	// (0x00018c48) cell_vkb_keypad_pane

0x54b4,	// (0x00018cd5) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00023357) bg_popup_fep_shadow_pane_g

0xf24a,	// (0x00022a6b) cell_hwr_side_pane_g1

0xf24a,	// (0x00022a6b) cell_hwr_side_pane_g2

0x54be,	// (0x00018cdf) cell_vkb_keypad_pane_t1

0xc0e8,	// (0x0001f909) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc0e8,	// (0x0001f909) cell_vkb_keypad_bottom_left_pane

0xc0fd,	// (0x0001f91e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc0fd,	// (0x0001f91e) cell_vkb_keypad_bottom_right_pane

0x4fe9,	// (0x0001880a) cell_vkb_keypad_bottom_left_pane_g1

0x4fe9,	// (0x0001880a) cell_vkb_keypad_bottom_right_pane_g1

0x5522,	// (0x00018d43) cell_vkb_keypad_number_pane_ParamLimits

0x5522,	// (0x00018d43) cell_vkb_keypad_number_pane

0x5541,	// (0x00018d62) cell_vkb_keypad_number_pane_g1

0x554b,	// (0x00018d6c) cell_vkb_keypad_number_pane_g2

0x5554,	// (0x00018d75) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00023349) cell_vkb_keypad_number_pane_g

0x54be,	// (0x00018cdf) cell_vkb_keypad_number_pane_t1

0x557e,	// (0x00018d9f) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x0002336a) cell_hwr_side_pane_g

0x5597,	// (0x00018db8) cell_hwr_side_pane_t1

0xf254,	// (0x00022a75) cell_hwr_side_pane_t1_copy1

0xf262,	// (0x00022a83) cell_hwr_candidate_pane_g1

0xf291,	// (0x00022ab2) cell_hwr_candidate_pane_t1

0x4fe9,	// (0x0001880a) cell_vkb_candidate_pane_g2

0x55db,	// (0x00018dfc) cell_vkb_candidate_pane_t1

0xee6c,	// (0x0002268d) bg_popup_fep_shadow_pane_ParamLimits

0xee6c,	// (0x0002268d) bg_popup_fep_shadow_pane

0xf119,	// (0x0002293a) bg_fep_hwr_top_pane_g4

0x506e,	// (0x0001888f) bg_hwr_side_pane_g1_ParamLimits

0x506e,	// (0x0001888f) bg_hwr_side_pane_g1

0x9ef3,	// (0x0001d714) cell_hwr_side_pane_ParamLimits

0x9ef3,	// (0x0001d714) cell_hwr_side_pane

0xf163,	// (0x00022984) fep_hwr_write_pane_g1_ParamLimits

0xf163,	// (0x00022984) fep_hwr_write_pane_g1

0xf170,	// (0x00022991) fep_hwr_write_pane_g2_ParamLimits

0xf170,	// (0x00022991) fep_hwr_write_pane_g2

0xf17d,	// (0x0002299e) fep_hwr_write_pane_g3_ParamLimits

0xf17d,	// (0x0002299e) fep_hwr_write_pane_g3

0x9f13,	// (0x0001d734) fep_hwr_write_pane_g4_ParamLimits

0x9f13,	// (0x0001d734) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00023316) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00023316) fep_hwr_write_pane_g

0xf119,	// (0x0002293a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf119,	// (0x0002293a) bg_fep_hwr_candidate_pane_g2

0xf18b,	// (0x000229ac) cell_hwr_candidate_pane_ParamLimits

0xf18b,	// (0x000229ac) cell_hwr_candidate_pane

0xf1dd,	// (0x000229fe) fep_hwr_candidate_pane_g1_ParamLimits

0x50ce,	// (0x000188ef) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x50ce,	// (0x000188ef) bg_popup_fep_shadow_pane_cp2

0x5264,	// (0x00018a85) fep_vkb_top_pane_g4_ParamLimits

0x5264,	// (0x00018a85) fep_vkb_top_pane_g4

0x52aa,	// (0x00018acb) fep_vkb_side_pane_g2_ParamLimits

0x52aa,	// (0x00018acb) fep_vkb_side_pane_g2

0xace3,	// (0x0001e504) list_setting_pane_t4_ParamLimits

0xace3,	// (0x0001e504) list_setting_pane_t4

0xad5f,	// (0x0001e580) list_setting_number_pane_t5_ParamLimits

0xad5f,	// (0x0001e580) list_setting_number_pane_t5

0x156d,	// (0x00014d8e) list_double_heading_pane_cp2_ParamLimits

0x156d,	// (0x00014d8e) list_double_heading_pane_cp2

0x55e9,	// (0x00018e0a) list_double_heading_pane_g1_cp2_ParamLimits

0x55e9,	// (0x00018e0a) list_double_heading_pane_g1_cp2

0x55f5,	// (0x00018e16) list_double_heading_pane_g2_cp2_ParamLimits

0x55f5,	// (0x00018e16) list_double_heading_pane_g2_cp2

0x5609,	// (0x00018e2a) list_double_heading_pane_t1_cp2_ParamLimits

0x5609,	// (0x00018e2a) list_double_heading_pane_t1_cp2

0x561f,	// (0x00018e40) list_double_heading_pane_t2_cp2_ParamLimits

0x561f,	// (0x00018e40) list_double_heading_pane_t2_cp2

0xc6e7,	// (0x0001ff08) aid_value_unit2

0xe154,	// (0x00021975) popup_preview_fixed_window

0xc8ac,	// (0x000200cd) bg_popup_preview_window_pane_cp02

0x5631,	// (0x00018e52) list_preview_fixed_pane

0x5677,	// (0x00018e98) list_empty_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_empty_pane_fp

0x5677,	// (0x00018e98) list_single_cale_day_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_cale_day_pane_fp

0x5677,	// (0x00018e98) list_single_graphic_heading_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_graphic_heading_pane_fp

0x5677,	// (0x00018e98) list_single_graphic_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_graphic_pane_fp

0x5677,	// (0x00018e98) list_single_heading_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_heading_pane_fp

0x5677,	// (0x00018e98) list_single_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_pane_fp

0x5690,	// (0x00018eb1) list_single_pane_fp_g1_ParamLimits

0x5690,	// (0x00018eb1) list_single_pane_fp_g1

0xea73,	// (0x00022294) list_single_pane_fp_g2_ParamLimits

0xea73,	// (0x00022294) list_single_pane_fp_g2

0x569c,	// (0x00018ebd) list_single_pane_fp_g3_ParamLimits

0x569c,	// (0x00018ebd) list_single_pane_fp_g3

0x56b0,	// (0x00018ed1) list_single_pane_fp_g4_ParamLimits

0x56b0,	// (0x00018ed1) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x0002337d) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x0002337d) list_single_pane_fp_g

0x56bc,	// (0x00018edd) list_single_pane_fp_t1_ParamLimits

0x56bc,	// (0x00018edd) list_single_pane_fp_t1

0x56d3,	// (0x00018ef4) list_single_graphic_pane_fp_g1_ParamLimits

0x56d3,	// (0x00018ef4) list_single_graphic_pane_fp_g1

0x5690,	// (0x00018eb1) list_single_graphic_pane_fp_g2_ParamLimits

0x5690,	// (0x00018eb1) list_single_graphic_pane_fp_g2

0xea73,	// (0x00022294) list_single_graphic_pane_fp_g3_ParamLimits

0xea73,	// (0x00022294) list_single_graphic_pane_fp_g3

0x569c,	// (0x00018ebd) list_single_graphic_pane_fp_g4_ParamLimits

0x569c,	// (0x00018ebd) list_single_graphic_pane_fp_g4

0x56b0,	// (0x00018ed1) list_single_graphic_pane_fp_g5_ParamLimits

0x56b0,	// (0x00018ed1) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00023386) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00023386) list_single_graphic_pane_fp_g

0x56df,	// (0x00018f00) list_single_graphic_pane_fp_t1_ParamLimits

0x56df,	// (0x00018f00) list_single_graphic_pane_fp_t1

0x56d3,	// (0x00018ef4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x56d3,	// (0x00018ef4) list_single_graphic_heading_pane_fp_g1

0x5690,	// (0x00018eb1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5690,	// (0x00018eb1) list_single_graphic_heading_pane_fp_g2

0xea73,	// (0x00022294) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xea73,	// (0x00022294) list_single_graphic_heading_pane_fp_g3

0x569c,	// (0x00018ebd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x569c,	// (0x00018ebd) list_single_graphic_heading_pane_fp_g4

0x56b0,	// (0x00018ed1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x56b0,	// (0x00018ed1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00023386) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00023386) list_single_graphic_heading_pane_fp_g

0x56f5,	// (0x00018f16) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x56f5,	// (0x00018f16) list_single_graphic_heading_pane_fp_t1

0x570b,	// (0x00018f2c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x570b,	// (0x00018f2c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00023391) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00023391) list_single_graphic_heading_pane_fp_t

0x571d,	// (0x00018f3e) list_single_cale_day_pane_fp_g1_ParamLimits

0x571d,	// (0x00018f3e) list_single_cale_day_pane_fp_g1

0x5755,	// (0x00018f76) list_single_cale_day_pane_fp_g2_ParamLimits

0x5755,	// (0x00018f76) list_single_cale_day_pane_fp_g2

0x5761,	// (0x00018f82) list_single_cale_day_pane_fp_g3_ParamLimits

0x5761,	// (0x00018f82) list_single_cale_day_pane_fp_g3

0x5789,	// (0x00018faa) list_single_cale_day_pane_fp_g4_ParamLimits

0x5789,	// (0x00018faa) list_single_cale_day_pane_fp_g4

0x57ad,	// (0x00018fce) list_single_cale_day_pane_fp_g5_ParamLimits

0x57ad,	// (0x00018fce) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x00023396) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x00023396) list_single_cale_day_pane_fp_g

0x57d1,	// (0x00018ff2) list_single_cale_day_pane_fp_t1_ParamLimits

0x57d1,	// (0x00018ff2) list_single_cale_day_pane_fp_t1

0x57f7,	// (0x00019018) list_single_cale_day_pane_fp_t2_ParamLimits

0x57f7,	// (0x00019018) list_single_cale_day_pane_fp_t2

0x5810,	// (0x00019031) list_single_cale_day_pane_fp_t3_ParamLimits

0x5810,	// (0x00019031) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x000233a1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x000233a1) list_single_cale_day_pane_fp_t

0x5690,	// (0x00018eb1) list_empty_pane_fp_g1_ParamLimits

0x5690,	// (0x00018eb1) list_empty_pane_fp_g1

0x5829,	// (0x0001904a) list_empty_pane_fp_t1

0x5837,	// (0x00019058) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000233a8) list_empty_pane_fp_t

0x5690,	// (0x00018eb1) list_single_heading_pane_fp_g1_ParamLimits

0x5690,	// (0x00018eb1) list_single_heading_pane_fp_g1

0xea73,	// (0x00022294) list_single_heading_pane_fp_g2_ParamLimits

0xea73,	// (0x00022294) list_single_heading_pane_fp_g2

0x569c,	// (0x00018ebd) list_single_heading_pane_fp_g3_ParamLimits

0x569c,	// (0x00018ebd) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000233ad) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000233ad) list_single_heading_pane_fp_g

0x5845,	// (0x00019066) list_single_heading_pane_fp_t1_ParamLimits

0x5845,	// (0x00019066) list_single_heading_pane_fp_t1

0x5857,	// (0x00019078) list_single_heading_pane_fp_t2_ParamLimits

0x5857,	// (0x00019078) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000233b4) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000233b4) list_single_heading_pane_fp_t

0xe4b8,	// (0x00021cd9) aid_size_cell_fast

0xc88f,	// (0x000200b0) soft_indicator_pane_cp1_t1

0xe4f5,	// (0x00021d16) cell_app_pane_cp2_ParamLimits

0xe4f5,	// (0x00021d16) cell_app_pane_cp2

0xf084,	// (0x000228a5) fep_hwr_candidate_drop_down_list_pane

0xf1f7,	// (0x00022a18) fep_hwr_candidate_pane_g3_ParamLimits

0xf1f7,	// (0x00022a18) fep_hwr_candidate_pane_g3

0xcd83,	// (0x000205a4) fep_hwr_candidate_pane_g4_ParamLimits

0xcd83,	// (0x000205a4) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00023323) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00023323) fep_hwr_candidate_pane_g

0x515e,	// (0x0001897f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x515e,	// (0x0001897f) fep_vkb_candidate_drop_down_list_pane

0x5586,	// (0x00018da7) fep_vkb_candidate_pane_g3

0x558e,	// (0x00018daf) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00023350) fep_vkb_candidate_pane_g

0xf262,	// (0x00022a83) cell_hwr_candidate_pane_g1_ParamLimits

0xf270,	// (0x00022a91) cell_hwr_candidate_pane_g3_ParamLimits

0xf270,	// (0x00022a91) cell_hwr_candidate_pane_g3

0x5db6,	// (0x000195d7) cell_hwr_candidate_pane_g4_ParamLimits

0x5db6,	// (0x000195d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0002336f) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x0002336f) cell_hwr_candidate_pane_g

0x55a5,	// (0x00018dc6) cell_vkb_candidate_pane_g3_ParamLimits

0x55a5,	// (0x00018dc6) cell_vkb_candidate_pane_g3

0x55c0,	// (0x00018de1) cell_vkb_candidate_pane_g4_ParamLimits

0x55c0,	// (0x00018de1) cell_vkb_candidate_pane_g4

0x586d,	// (0x0001908e) cell_app_pane_cp2_g1_ParamLimits

0x586d,	// (0x0001908e) cell_app_pane_cp2_g1

0x588b,	// (0x000190ac) cell_app_pane_cp2_g2_ParamLimits

0x588b,	// (0x000190ac) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000233b9) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000233b9) cell_app_pane_cp2_g

0x5897,	// (0x000190b8) cell_app_pane_cp2_t1_ParamLimits

0x5897,	// (0x000190b8) cell_app_pane_cp2_t1

0xe2b0,	// (0x00021ad1) grid_highlight_pane_cp1_ParamLimits

0xe2b0,	// (0x00021ad1) grid_highlight_pane_cp1

0xf2af,	// (0x00022ad0) cell_hwr_candidate_pane_cp1_ParamLimits

0xf2af,	// (0x00022ad0) cell_hwr_candidate_pane_cp1

0xf262,	// (0x00022a83) fep_hwr_candidate_drop_down_list_pane_g1

0xf2d3,	// (0x00022af4) fep_hwr_candidate_drop_down_list_pane_g2

0xf2e0,	// (0x00022b01) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000233be) fep_hwr_candidate_drop_down_list_pane_g

0xf2ed,	// (0x00022b0e) fep_hwr_candidate_drop_down_list_scroll_pane

0xf2f6,	// (0x00022b17) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf2f6,	// (0x00022b17) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xf303,	// (0x00022b24) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf303,	// (0x00022b24) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xf310,	// (0x00022b31) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf310,	// (0x00022b31) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf31d,	// (0x00022b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf31d,	// (0x00022b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf338,	// (0x00022b59) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf338,	// (0x00022b59) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf353,	// (0x00022b74) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf353,	// (0x00022b74) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf36e,	// (0x00022b8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf36e,	// (0x00022b8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf389,	// (0x00022baa) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf389,	// (0x00022baa) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000233c5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000233c5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x58a9,	// (0x000190ca) cell_vkb_candidate_pane_cp1_ParamLimits

0x58a9,	// (0x000190ca) cell_vkb_candidate_pane_cp1

0x5264,	// (0x00018a85) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5264,	// (0x00018a85) fep_vkb_candidate_drop_down_list_pane_g1

0x58cf,	// (0x000190f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x58cf,	// (0x000190f0) fep_vkb_candidate_drop_down_list_pane_g2

0x58dc,	// (0x000190fd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x58dc,	// (0x000190fd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000233d6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000233d6) fep_vkb_candidate_drop_down_list_pane_g

0x58e9,	// (0x0001910a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x58e9,	// (0x0001910a) fep_vkb_candidate_drop_down_list_scroll_pane

0x58f6,	// (0x00019117) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58f6,	// (0x00019117) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5903,	// (0x00019124) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5903,	// (0x00019124) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x590f,	// (0x00019130) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x590f,	// (0x00019130) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x591b,	// (0x0001913c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x591b,	// (0x0001913c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x593c,	// (0x0001915d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x593c,	// (0x0001915d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x595d,	// (0x0001917e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x595d,	// (0x0001917e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x597e,	// (0x0001919f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x597e,	// (0x0001919f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x599f,	// (0x000191c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x599f,	// (0x000191c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000233dd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000233dd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa5dc,	// (0x0001ddfd) title_pane_g1_ParamLimits

0xa5ef,	// (0x0001de10) title_pane_g2_ParamLimits

0xf529,	// (0x00022d4a) title_pane_g_ParamLimits

0x1526,	// (0x00014d47) aid_call2_pane

0x152e,	// (0x00014d4f) aid_call_pane

0x1536,	// (0x00014d57) popup_clock_analogue_window_g1

0x1536,	// (0x00014d57) popup_clock_analogue_window_g2

0xe838,	// (0x00022059) popup_clock_analogue_window_g3

0xe841,	// (0x00022062) popup_clock_analogue_window_g4

0xc6f9,	// (0x0001ff1a) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00022eef) popup_clock_analogue_window_g

0xe849,	// (0x0002206a) popup_clock_analogue_window_t1

0xe857,	// (0x00022078) clock_digital_number_pane_ParamLimits

0xe857,	// (0x00022078) clock_digital_number_pane

0xe863,	// (0x00022084) clock_digital_number_pane_cp02_ParamLimits

0xe863,	// (0x00022084) clock_digital_number_pane_cp02

0xe86f,	// (0x00022090) clock_digital_number_pane_cp03_ParamLimits

0xe86f,	// (0x00022090) clock_digital_number_pane_cp03

0xe87b,	// (0x0002209c) clock_digital_number_pane_cp04_ParamLimits

0xe87b,	// (0x0002209c) clock_digital_number_pane_cp04

0xe887,	// (0x000220a8) clock_digital_separator_pane_ParamLimits

0xe887,	// (0x000220a8) clock_digital_separator_pane

0xe893,	// (0x000220b4) popup_clock_digital_window_t1_ParamLimits

0xe893,	// (0x000220b4) popup_clock_digital_window_t1

0xc6f9,	// (0x0001ff1a) clock_digital_number_pane_g1

0xc6f9,	// (0x0001ff1a) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00022efa) clock_digital_number_pane_g

0xc6f9,	// (0x0001ff1a) clock_digital_separator_pane_g1

0xc6f9,	// (0x0001ff1a) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00022efa) clock_digital_separator_pane_g

0xb35e,	// (0x0001eb7f) aid_fill_nsta_ParamLimits

0xb496,	// (0x0001ecb7) indicator_nsta_pane_ParamLimits

0x224c,	// (0x00015a6d) popup_clock_analogue_window

0x224c,	// (0x00015a6d) popup_clock_digital_window

0xbd99,	// (0x0001f5ba) grid_indicator_nsta_pane_ParamLimits

0x49eb,	// (0x0001820c) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x000232a3) clock_nsta_pane_t

0xe805,	// (0x00022026) aid_size_max_handle

0x94d3,	// (0x0001ccf4) aid_size_min_handle

0x1bfc,	// (0x0001541d) editor_scroll_pane

0x59ba,	// (0x000191db) ex_editor_pane

0xe47e,	// (0x00021c9f) scroll_pane_cp13

0xcd5a,	// (0x0002057b) scroll_pane_cp14

0x1565,	// (0x00014d86) scroll_pane_cp36

0xb0e2,	// (0x0001e903) list_single_graphic_hl_pane_cp2_ParamLimits

0xb0e2,	// (0x0001e903) list_single_graphic_hl_pane_cp2

0xbc26,	// (0x0001f447) list_single_graphic_hl_pane_ParamLimits

0xbc26,	// (0x0001f447) list_single_graphic_hl_pane

0x59c2,	// (0x000191e3) aid_size_min_hl_cp1

0x59cb,	// (0x000191ec) list_highlight_pane_cp34_ParamLimits

0x59cb,	// (0x000191ec) list_highlight_pane_cp34

0x59dc,	// (0x000191fd) list_single_graphic_hl_pane_g1_ParamLimits

0x59dc,	// (0x000191fd) list_single_graphic_hl_pane_g1

0xc118,	// (0x0001f939) list_single_graphic_hl_pane_g2_ParamLimits

0xc118,	// (0x0001f939) list_single_graphic_hl_pane_g2

0xc118,	// (0x0001f939) list_single_graphic_hl_pane_g3_ParamLimits

0xc118,	// (0x0001f939) list_single_graphic_hl_pane_g3

0x1b33,	// (0x00015354) list_single_graphic_hl_pane_g4_ParamLimits

0x1b33,	// (0x00015354) list_single_graphic_hl_pane_g4

0xc124,	// (0x0001f945) list_single_graphic_hl_pane_g5_ParamLimits

0xc124,	// (0x0001f945) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x000233ee) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x000233ee) list_single_graphic_hl_pane_g

0x3229,	// (0x00016a4a) list_single_graphic_hl_pane_t1_ParamLimits

0x3229,	// (0x00016a4a) list_single_graphic_hl_pane_t1

0x5a1f,	// (0x00019240) aid_size_min_hl_cp2

0x5a28,	// (0x00019249) list_highlight_pane_cp34_cp2_ParamLimits

0x5a28,	// (0x00019249) list_highlight_pane_cp34_cp2

0x59dc,	// (0x000191fd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x59dc,	// (0x000191fd) list_single_graphic_hl_pane_g1_cp2

0x5a35,	// (0x00019256) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a35,	// (0x00019256) list_single_graphic_hl_pane_g2_cp2

0x5a41,	// (0x00019262) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5a41,	// (0x00019262) list_single_graphic_hl_pane_g3_cp2

0x5a4f,	// (0x00019270) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5a4f,	// (0x00019270) list_single_graphic_hl_pane_g4_cp2

0x5a5b,	// (0x0001927c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a5b,	// (0x0001927c) list_single_graphic_hl_pane_g5_cp2

0x94dc,	// (0x0001ccfd) control_pane_g4_ParamLimits

0x94dc,	// (0x0001ccfd) control_pane_g4

0x1f2b,	// (0x0001574c) bg_popup_sub_pane_cp10_ParamLimits

0x4ff3,	// (0x00018814) list_choice_list_pane_ParamLimits

0x5002,	// (0x00018823) scroll_pane_cp23

0xc8ac,	// (0x000200cd) bg_popup_preview_window_pane_cp02_ParamLimits

0x5631,	// (0x00018e52) list_preview_fixed_pane_ParamLimits

0x5647,	// (0x00018e68) list_preview_fixed_pane_cp_ParamLimits

0x5647,	// (0x00018e68) list_preview_fixed_pane_cp

0x5653,	// (0x00018e74) popup_preview_fixed_window_g1_ParamLimits

0x5653,	// (0x00018e74) popup_preview_fixed_window_g1

0x565f,	// (0x00018e80) popup_preview_fixed_window_g2_ParamLimits

0x565f,	// (0x00018e80) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00023376) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00023376) popup_preview_fixed_window_g

0xe755,	// (0x00021f76) aid_navi_side_left_pane_ParamLimits

0xe76a,	// (0x00021f8b) aid_navi_side_right_pane_ParamLimits

0xe782,	// (0x00021fa3) navi_icon_pane_stacon_ParamLimits

0xe796,	// (0x00021fb7) navi_navi_pane_stacon_ParamLimits

0xe782,	// (0x00021fa3) navi_text_pane_stacon_ParamLimits

0xe045,	// (0x00021866) main_text_info_pane

0x5a85,	// (0x000192a6) listscroll_text_info_pane

0x5a8d,	// (0x000192ae) list_text_info_pane_ParamLimits

0x5a8d,	// (0x000192ae) list_text_info_pane

0x5a9c,	// (0x000192bd) scroll_pane_cp24_ParamLimits

0x5a9c,	// (0x000192bd) scroll_pane_cp24

0xc138,	// (0x0001f959) list_text_info_pane_t1_ParamLimits

0xc138,	// (0x0001f959) list_text_info_pane_t1

0x9607,	// (0x0001ce28) popup_fast_swap2_window_ParamLimits

0x9607,	// (0x0001ce28) popup_fast_swap2_window

0x5adf,	// (0x00019300) aid_size_cell_fast2

0xc6ef,	// (0x0001ff10) bg_popup_window_pane_cp17

0x5ae9,	// (0x0001930a) heading_pane_cp2

0x5af1,	// (0x00019312) listscroll_fast2_pane

0x5af9,	// (0x0001931a) grid_fast2_pane

0x5b03,	// (0x00019324) listscroll_fast2_pane_g1

0x5b0d,	// (0x0001932e) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x000233f9) listscroll_fast2_pane_g

0xe47e,	// (0x00021c9f) scroll_pane_cp26

0x5b17,	// (0x00019338) cell_fast2_pane_ParamLimits

0x5b17,	// (0x00019338) cell_fast2_pane

0x5b2e,	// (0x0001934f) cell_fast2_pane_g1

0x5b37,	// (0x00019358) cell_fast2_pane_g2

0x5b40,	// (0x00019361) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x000233fe) cell_fast2_pane_g

0xcb21,	// (0x00020342) grid_highlight_pane_cp9

0xeb7b,	// (0x0002239c) main_eswt_pane_ParamLimits

0xeb7b,	// (0x0002239c) main_eswt_pane

0x5ab1,	// (0x000192d2) list_single_text_info_pane

0x5b48,	// (0x00019369) eswt_ctrl_button_pane

0x5b48,	// (0x00019369) eswt_ctrl_canvas_pane

0x5b50,	// (0x00019371) eswt_ctrl_combo_pane

0x5b48,	// (0x00019369) eswt_ctrl_default_pane

0x5b48,	// (0x00019369) eswt_ctrl_label_pane

0x5b58,	// (0x00019379) eswt_ctrl_wait_pane

0x5b60,	// (0x00019381) eswt_shell_pane

0xc6ef,	// (0x0001ff10) listscroll_eswt_app_pane

0x5b80,	// (0x000193a1) popup_eswt_tasktip_window_ParamLimits

0x5b80,	// (0x000193a1) popup_eswt_tasktip_window

0x25c9,	// (0x00015dea) bg_popup_window_pane_cp18

0x5b99,	// (0x000193ba) eswt_control_pane_g1_ParamLimits

0x5b99,	// (0x000193ba) eswt_control_pane_g1

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_ParamLimits

0x5ba6,	// (0x000193c7) eswt_control_pane_g2

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_ParamLimits

0x5bb3,	// (0x000193d4) eswt_control_pane_g3

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_ParamLimits

0x5bc0,	// (0x000193e1) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00023405) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00023405) eswt_control_pane_g

0xe2b0,	// (0x00021ad1) bg_button_pane_ParamLimits

0xe2b0,	// (0x00021ad1) bg_button_pane

0xcb36,	// (0x00020357) common_borders_pane_copy2_ParamLimits

0xcb36,	// (0x00020357) common_borders_pane_copy2

0x5bcd,	// (0x000193ee) control_button_pane_g1_ParamLimits

0x5bcd,	// (0x000193ee) control_button_pane_g1

0x5bd9,	// (0x000193fa) control_button_pane_g2_ParamLimits

0x5bd9,	// (0x000193fa) control_button_pane_g2

0x5be5,	// (0x00019406) control_button_pane_g3_ParamLimits

0x5be5,	// (0x00019406) control_button_pane_g3

0x0002,

0xfbed,	// (0x0002340e) control_button_pane_g_ParamLimits

0xfbed,	// (0x0002340e) control_button_pane_g

0x5bf9,	// (0x0001941a) control_button_pane_t1

0x5c07,	// (0x00019428) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00023415) control_button_pane_t

0x24a5,	// (0x00015cc6) bg_button_pane_g1

0x24b5,	// (0x00015cd6) bg_button_pane_g2

0x24ad,	// (0x00015cce) bg_button_pane_g3

0x24c5,	// (0x00015ce6) bg_button_pane_g4

0x24bd,	// (0x00015cde) bg_button_pane_g5

0x24cd,	// (0x00015cee) bg_button_pane_g6

0x24d5,	// (0x00015cf6) bg_button_pane_g7

0x24e5,	// (0x00015d06) bg_button_pane_g8

0x24dd,	// (0x00015cfe) bg_button_pane_g9

0x0008,

0xf837,	// (0x00023058) bg_button_pane_g

0x4fae,	// (0x000187cf) common_borders_pane_ParamLimits

0x4fae,	// (0x000187cf) common_borders_pane

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy1_ParamLimits

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy1

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy1_ParamLimits

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy1

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy1_ParamLimits

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy1

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy1_ParamLimits

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy1

0x4fe9,	// (0x0001880a) bg_eswt_ctrl_canvas_pane_g1

0x4fae,	// (0x000187cf) common_borders_pane_cp2_ParamLimits

0x4fae,	// (0x000187cf) common_borders_pane_cp2

0x4fae,	// (0x000187cf) common_borders_pane_cp3_ParamLimits

0x4fae,	// (0x000187cf) common_borders_pane_cp3

0x5c15,	// (0x00019436) separator_horizontal_pane

0x5c1d,	// (0x0001943e) separator_vertical_pane

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy2_ParamLimits

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy2

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy2_ParamLimits

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy2

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy2_ParamLimits

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy2

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy2_ParamLimits

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy2

0xc6ef,	// (0x0001ff10) common_borders_pane_cp4

0x5c26,	// (0x00019447) separator_horizontal_pane_g1

0x5c2f,	// (0x00019450) separator_horizontal_pane_g2

0x5c38,	// (0x00019459) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x0002341a) separator_horizontal_pane_g

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy3_ParamLimits

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy3

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy3_ParamLimits

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy3

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy3_ParamLimits

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy3

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy3_ParamLimits

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy3

0xc6ef,	// (0x0001ff10) common_borders_pane_cp5

0x5c41,	// (0x00019462) separator_vertical_pane_g1

0x5c4a,	// (0x0001946b) separator_vertical_pane_g2

0x5c53,	// (0x00019474) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00023421) separator_vertical_pane_g

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy4_ParamLimits

0x5b99,	// (0x000193ba) eswt_control_pane_g1_copy4

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy4_ParamLimits

0x5ba6,	// (0x000193c7) eswt_control_pane_g2_copy4

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy4_ParamLimits

0x5bb3,	// (0x000193d4) eswt_control_pane_g3_copy4

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy4_ParamLimits

0x5bc0,	// (0x000193e1) eswt_control_pane_g4_copy4

0xc15a,	// (0x0001f97b) eswt_ctrl_combo_button_pane

0xc162,	// (0x0001f983) eswt_ctrl_input_pane

0xc16a,	// (0x0001f98b) popup_choice_list_window_cp70

0xc172,	// (0x0001f993) eswt_ctrl_input_pane_t1

0xc6ef,	// (0x0001ff10) input_focus_pane_cp70

0x4fae,	// (0x000187cf) bg_button_pane_cp70_ParamLimits

0x4fae,	// (0x000187cf) bg_button_pane_cp70

0xc180,	// (0x0001f9a1) eswt_ctrl_combo_button_pane_g1

0x5c8a,	// (0x000194ab) wait_bar_pane_cp70

0x25c9,	// (0x00015dea) bg_popup_window_pane_cp70_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_window_pane_cp70

0x5c92,	// (0x000194b3) popup_eswt_tasktip_window_t1

0x5ca8,	// (0x000194c9) wait_bar_pane_cp71_ParamLimits

0x5ca8,	// (0x000194c9) wait_bar_pane_cp71

0x5cb4,	// (0x000194d5) grid_eswt_app_pane

0x136a,	// (0x00014b8b) scroll_pane_cp70

0xc188,	// (0x0001f9a9) cell_eswt_app_pane_ParamLimits

0xc188,	// (0x0001f9a9) cell_eswt_app_pane

0xc1ba,	// (0x0001f9db) cell_eswt_app_pane_g1_ParamLimits

0xc1ba,	// (0x0001f9db) cell_eswt_app_pane_g1

0xc1e9,	// (0x0001fa0a) cell_eswt_app_pane_g2_ParamLimits

0xc1e9,	// (0x0001fa0a) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00023428) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00023428) cell_eswt_app_pane_g

0xc212,	// (0x0001fa33) cell_eswt_app_pane_t1_ParamLimits

0xc212,	// (0x0001fa33) cell_eswt_app_pane_t1

0x5d79,	// (0x0001959a) grid_highlight_pane_cp70_ParamLimits

0x5d79,	// (0x0001959a) grid_highlight_pane_cp70

0x1ac2,	// (0x000152e3) set_content_pane_g1

0xb33a,	// (0x0001eb5b) status_small_volume_pane

0x9f28,	// (0x0001d749) status_small_volume_pane_g1

0x9f30,	// (0x0001d751) volume_small2_pane

0x9f39,	// (0x0001d75a) volume_small2_pane_g1

0x9f42,	// (0x0001d763) volume_small2_pane_g2

0x9f4b,	// (0x0001d76c) volume_small2_pane_g3

0x9f54,	// (0x0001d775) volume_small2_pane_g4

0x9f5d,	// (0x0001d77e) volume_small2_pane_g5

0x9f66,	// (0x0001d787) volume_small2_pane_g6

0x9f6f,	// (0x0001d790) volume_small2_pane_g7

0x9f78,	// (0x0001d799) volume_small2_pane_g8

0x9f81,	// (0x0001d7a2) volume_small2_pane_g9

0x9f8a,	// (0x0001d7ab) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x0002342d) volume_small2_pane_g

0x53b8,	// (0x00018bd9) fep_vkb_top_text_pane_g1_ParamLimits

0xc0c0,	// (0x0001f8e1) fep_vkb_top_text_pane_t1_ParamLimits

0x566b,	// (0x00018e8c) popup_preview_fixed_window_g3_ParamLimits

0x566b,	// (0x00018e8c) popup_preview_fixed_window_g3

0x9ca7,	// (0x0001d4c8) popup_toolbar_trans_pane

0xba4b,	// (0x0001f26c) aid_height_set_list_ParamLimits

0x3989,	// (0x000171aa) aid_size_parent_ParamLimits

0x1f2b,	// (0x0001574c) list_highlight_pane_cp2_ParamLimits

0x1ac2,	// (0x000152e3) set_content_pane_g1_ParamLimits

0xbc3a,	// (0x0001f45b) list_single_image_pane_ParamLimits

0xbc3a,	// (0x0001f45b) list_single_image_pane

0xc244,	// (0x0001fa65) aid_size_cell_image_ParamLimits

0xc244,	// (0x0001fa65) aid_size_cell_image

0xc251,	// (0x0001fa72) grid_single_image_pane_ParamLimits

0xc251,	// (0x0001fa72) grid_single_image_pane

0xe2d6,	// (0x00021af7) list_single_image_pane_g1_ParamLimits

0xe2d6,	// (0x00021af7) list_single_image_pane_g1

0xe2e2,	// (0x00021b03) list_single_image_pane_g2_ParamLimits

0xe2e2,	// (0x00021b03) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x00023442) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x00023442) list_single_image_pane_g

0x5da0,	// (0x000195c1) list_single_image_pane_t1_ParamLimits

0x5da0,	// (0x000195c1) list_single_image_pane_t1

0xc25f,	// (0x0001fa80) cell_image_list_pane_ParamLimits

0xc25f,	// (0x0001fa80) cell_image_list_pane

0xc275,	// (0x0001fa96) cell_image_list_pane_g1

0xc27e,	// (0x0001fa9f) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00023447) cell_image_list_pane_g

0x5e01,	// (0x00019622) aid_size_cell_tb_trans_pane

0xe2b0,	// (0x00021ad1) bg_tb_trans_pane

0x5e13,	// (0x00019634) grid_tb_trans_pane

0x24a5,	// (0x00015cc6) bg_tb_trans_pane_g1

0x24b5,	// (0x00015cd6) bg_tb_trans_pane_g2

0x24ad,	// (0x00015cce) bg_tb_trans_pane_g3

0x24c5,	// (0x00015ce6) bg_tb_trans_pane_g4

0x24bd,	// (0x00015cde) bg_tb_trans_pane_g5

0x24e5,	// (0x00015d06) bg_tb_trans_pane_g6

0x24dd,	// (0x00015cfe) bg_tb_trans_pane_g7

0x24cd,	// (0x00015cee) bg_tb_trans_pane_g8

0x24d5,	// (0x00015cf6) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x0002344c) bg_tb_trans_pane_g

0x5e27,	// (0x00019648) cell_toolbar_trans_pane_ParamLimits

0x5e27,	// (0x00019648) cell_toolbar_trans_pane

0x4fe9,	// (0x0001880a) cell_toolbar_trans_pane_g1

0xbe7a,	// (0x0001f69b) list_form2_midp_pane_t1

0xbe88,	// (0x0001f6a9) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x000232e9) list_form2_midp_pane_t

0x4bea,	// (0x0001840b) scroll_pane_cp51_ParamLimits

0x4e04,	// (0x00018625) form2_midp_wait_pane_g1

0x4e0d,	// (0x0001862e) form2_midp_wait_pane_g2

0x4e16,	// (0x00018637) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x000232fe) form2_midp_wait_pane_g

0xc75f,	// (0x0001ff80) list_highlight_pane_cp21_ParamLimits

0x4e4f,	// (0x00018670) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4e5e,	// (0x0001867f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3ba7,	// (0x000173c8) list_single_2graphic_im_pane_ParamLimits

0x3ba7,	// (0x000173c8) list_single_2graphic_im_pane

0xc287,	// (0x0001faa8) list_single_2graphic_im_pane_g1_ParamLimits

0xc287,	// (0x0001faa8) list_single_2graphic_im_pane_g1

0xc298,	// (0x0001fab9) list_single_2graphic_im_pane_g2_ParamLimits

0xc298,	// (0x0001fab9) list_single_2graphic_im_pane_g2

0xc2a4,	// (0x0001fac5) list_single_2graphic_im_pane_g3_ParamLimits

0xc2a4,	// (0x0001fac5) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x0002345f) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x0002345f) list_single_2graphic_im_pane_g

0xc2b8,	// (0x0001fad9) list_single_2graphic_im_pane_t1_ParamLimits

0xc2b8,	// (0x0001fad9) list_single_2graphic_im_pane_t1

0x5677,	// (0x00018e98) list_single_graphic_2heading_pane_fp_ParamLimits

0x5677,	// (0x00018e98) list_single_graphic_2heading_pane_fp

0x56d3,	// (0x00018ef4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x56d3,	// (0x00018ef4) list_single_graphic_2heading_pane_fp_g1

0x5690,	// (0x00018eb1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5690,	// (0x00018eb1) list_single_graphic_2heading_pane_fp_g2

0xea73,	// (0x00022294) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xea73,	// (0x00022294) list_single_graphic_2heading_pane_fp_g3

0x569c,	// (0x00018ebd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x569c,	// (0x00018ebd) list_single_graphic_2heading_pane_fp_g4

0x56b0,	// (0x00018ed1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x56b0,	// (0x00018ed1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00023386) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00023386) list_single_graphic_2heading_pane_fp_g

0x5ebb,	// (0x000196dc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5ebb,	// (0x000196dc) list_single_graphic_2heading_pane_fp_t1

0x570b,	// (0x00018f2c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x570b,	// (0x00018f2c) list_single_graphic_2heading_pane_fp_t2

0x5ed1,	// (0x000196f2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5ed1,	// (0x000196f2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00023468) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00023468) list_single_graphic_2heading_pane_fp_t

0x507a,	// (0x0001889b) fep_hwr_write_pane_g5_ParamLimits

0x507a,	// (0x0001889b) fep_hwr_write_pane_g5

0x5086,	// (0x000188a7) fep_hwr_write_pane_g6_ParamLimits

0x5086,	// (0x000188a7) fep_hwr_write_pane_g6

0x5b60,	// (0x00019381) eswt_shell_pane_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_window_pane_cp18_ParamLimits

0x5b91,	// (0x000193b2) heading_pane_cp70

0x5c92,	// (0x000194b3) popup_eswt_tasktip_window_t1_ParamLimits

0xb3bb,	// (0x0001ebdc) aid_touch_tab_arrow_left

0xb3d1,	// (0x0001ebf2) aid_touch_tab_arrow_right

0xa613,	// (0x0001de34) title_pane_g3_ParamLimits

0xa613,	// (0x0001de34) title_pane_g3

0xe209,	// (0x00021a2a) set_value_pane_g1

0x9ca7,	// (0x0001d4c8) popup_toolbar_trans_pane_ParamLimits

0x5e01,	// (0x00019622) aid_size_cell_tb_trans_pane_ParamLimits

0xe2b0,	// (0x00021ad1) bg_tb_trans_pane_ParamLimits

0x5e13,	// (0x00019634) grid_tb_trans_pane_ParamLimits

0xc8ac,	// (0x000200cd) cont_note_pane_ParamLimits

0xc8ac,	// (0x000200cd) cont_note_pane

0xcb36,	// (0x00020357) cont_snote2_single_text_pane_ParamLimits

0xcb36,	// (0x00020357) cont_snote2_single_text_pane

0xcb36,	// (0x00020357) cont_snote2_single_graphic_pane_ParamLimits

0xcb36,	// (0x00020357) cont_snote2_single_graphic_pane

0x2bea,	// (0x0001640b) cont_note_wait_pane_ParamLimits

0x2bea,	// (0x0001640b) cont_note_wait_pane

0x2bea,	// (0x0001640b) cont_note_image_pane_ParamLimits

0x2bea,	// (0x0001640b) cont_note_image_pane

0x5ee7,	// (0x00019708) popup_note2_window_g1_ParamLimits

0x5ee7,	// (0x00019708) popup_note2_window_g1

0x5f18,	// (0x00019739) popup_note2_window_t1_ParamLimits

0x5f18,	// (0x00019739) popup_note2_window_t1

0x5f5d,	// (0x0001977e) popup_note2_window_t2_ParamLimits

0x5f5d,	// (0x0001977e) popup_note2_window_t2

0x5fa2,	// (0x000197c3) popup_note2_window_t3_ParamLimits

0x5fa2,	// (0x000197c3) popup_note2_window_t3

0x5fe7,	// (0x00019808) popup_note2_window_t4_ParamLimits

0x5fe7,	// (0x00019808) popup_note2_window_t4

0xc930,	// (0x00020151) popup_note2_window_t5_ParamLimits

0xc930,	// (0x00020151) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00023474) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00023474) popup_note2_window_t

0x6016,	// (0x00019837) popup_note2_image_window_g1_ParamLimits

0x6016,	// (0x00019837) popup_note2_image_window_g1

0x6022,	// (0x00019843) popup_note2_image_window_g2_ParamLimits

0x6022,	// (0x00019843) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x0002347f) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x0002347f) popup_note2_image_window_g

0x6034,	// (0x00019855) popup_note2_image_window_t1_ParamLimits

0x6034,	// (0x00019855) popup_note2_image_window_t1

0x604c,	// (0x0001986d) popup_note2_image_window_t2_ParamLimits

0x604c,	// (0x0001986d) popup_note2_image_window_t2

0x6064,	// (0x00019885) popup_note2_image_window_t3_ParamLimits

0x6064,	// (0x00019885) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x00023484) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x00023484) popup_note2_image_window_t

0x2bf8,	// (0x00016419) popup_note2_wait_window_g1_ParamLimits

0x2bf8,	// (0x00016419) popup_note2_wait_window_g1

0x6080,	// (0x000198a1) popup_note2_wait_window_g2_ParamLimits

0x6080,	// (0x000198a1) popup_note2_wait_window_g2

0x2c10,	// (0x00016431) popup_note2_wait_window_g3_ParamLimits

0x2c10,	// (0x00016431) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x0002348b) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x0002348b) popup_note2_wait_window_g

0x608c,	// (0x000198ad) popup_note2_wait_window_t1_ParamLimits

0x608c,	// (0x000198ad) popup_note2_wait_window_t1

0x60aa,	// (0x000198cb) popup_note2_wait_window_t2_ParamLimits

0x60aa,	// (0x000198cb) popup_note2_wait_window_t2

0x60c8,	// (0x000198e9) popup_note2_wait_window_t3_ParamLimits

0x60c8,	// (0x000198e9) popup_note2_wait_window_t3

0x60da,	// (0x000198fb) popup_note2_wait_window_t4_ParamLimits

0x60da,	// (0x000198fb) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x00023492) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x00023492) popup_note2_wait_window_t

0x60ec,	// (0x0001990d) wait_bar2_pane_ParamLimits

0x60ec,	// (0x0001990d) wait_bar2_pane

0x6104,	// (0x00019925) popup_snote2_single_text_window_g1_ParamLimits

0x6104,	// (0x00019925) popup_snote2_single_text_window_g1

0x612c,	// (0x0001994d) popup_snote2_single_text_window_t1_ParamLimits

0x612c,	// (0x0001994d) popup_snote2_single_text_window_t1

0x6178,	// (0x00019999) popup_snote2_single_text_window_t2_ParamLimits

0x6178,	// (0x00019999) popup_snote2_single_text_window_t2

0x61c4,	// (0x000199e5) popup_snote2_single_text_window_t3_ParamLimits

0x61c4,	// (0x000199e5) popup_snote2_single_text_window_t3

0x6205,	// (0x00019a26) popup_snote2_single_text_window_t4_ParamLimits

0x6205,	// (0x00019a26) popup_snote2_single_text_window_t4

0x623b,	// (0x00019a5c) popup_snote2_single_text_window_t5_ParamLimits

0x623b,	// (0x00019a5c) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x0002349b) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x0002349b) popup_snote2_single_text_window_t

0x6266,	// (0x00019a87) popup_snote2_single_graphic_window_g1_ParamLimits

0x6266,	// (0x00019a87) popup_snote2_single_graphic_window_g1

0x628e,	// (0x00019aaf) popup_snote2_single_graphic_window_g2_ParamLimits

0x628e,	// (0x00019aaf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x000234a6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x000234a6) popup_snote2_single_graphic_window_g

0x62b6,	// (0x00019ad7) popup_snote2_single_graphic_window_t1_ParamLimits

0x62b6,	// (0x00019ad7) popup_snote2_single_graphic_window_t1

0x6302,	// (0x00019b23) popup_snote2_single_graphic_window_t2_ParamLimits

0x6302,	// (0x00019b23) popup_snote2_single_graphic_window_t2

0x61c4,	// (0x000199e5) popup_snote2_single_graphic_window_t3_ParamLimits

0x61c4,	// (0x000199e5) popup_snote2_single_graphic_window_t3

0x6205,	// (0x00019a26) popup_snote2_single_graphic_window_t4_ParamLimits

0x6205,	// (0x00019a26) popup_snote2_single_graphic_window_t4

0x623b,	// (0x00019a5c) popup_snote2_single_graphic_window_t5_ParamLimits

0x623b,	// (0x00019a5c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x000234ab) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x000234ab) popup_snote2_single_graphic_window_t

0x4a9a,	// (0x000182bb) clock_nsta_pane_cp2_t1

0x4a9a,	// (0x000182bb) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x000232bf) clock_nsta_pane_cp2_t

0xe2ca,	// (0x00021aeb) form_field_data_wide_pane_g1_ParamLimits

0xe2d6,	// (0x00021af7) form_field_data_wide_pane_g2_ParamLimits

0xe2d6,	// (0x00021af7) form_field_data_wide_pane_g2

0xe2e2,	// (0x00021b03) form_field_data_wide_pane_g3_ParamLimits

0xe2e2,	// (0x00021b03) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00022e72) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00022e72) form_field_data_wide_pane_g

0xbd83,	// (0x0001f5a4) grid_touch_3_pane_ParamLimits

0xbd83,	// (0x0001f5a4) grid_touch_3_pane

0xc2e9,	// (0x0001fb0a) cell_touch_3_pane_ParamLimits

0xc2e9,	// (0x0001fb0a) cell_touch_3_pane

0x4fe9,	// (0x0001880a) cell_touch_3_pane_g1

0x4fe9,	// (0x0001880a) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00023344) cell_touch_3_pane_g

0xc988,	// (0x000201a9) cont_query_data_pane

0xc990,	// (0x000201b1) cont_query_data_pane_cp1

0x6381,	// (0x00019ba2) button_value_adjust_pane_cp7

0x6389,	// (0x00019baa) query_popup_pane_cp3

0x163b,	// (0x00014e5c) bg_popup_sub_pane_cp22_ParamLimits

0xe8b2,	// (0x000220d3) navi_navi_volume_pane_cp2

0xe8cd,	// (0x000220ee) popup_side_volume_key_window_g2

0xe8dc,	// (0x000220fd) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00022f08) popup_side_volume_key_window_g

0xe8f9,	// (0x0002211a) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00022f0f) popup_side_volume_key_window_t

0x1988,	// (0x000151a9) popup_side_volume_key_window_ParamLimits

0xaae9,	// (0x0001e30a) list_double_graphic_pane_g4_ParamLimits

0xaae9,	// (0x0001e30a) list_double_graphic_pane_g4

0xbc11,	// (0x0001f432) list_single_2heading_msg_pane_ParamLimits

0xbc11,	// (0x0001f432) list_single_2heading_msg_pane

0xc335,	// (0x0001fb56) list_single_2heading_msg_pane_g1_ParamLimits

0xc335,	// (0x0001fb56) list_single_2heading_msg_pane_g1

0xc341,	// (0x0001fb62) list_single_2heading_msg_pane_g2_ParamLimits

0xc341,	// (0x0001fb62) list_single_2heading_msg_pane_g2

0xc354,	// (0x0001fb75) list_single_2heading_msg_pane_g3_ParamLimits

0xc354,	// (0x0001fb75) list_single_2heading_msg_pane_g3

0xc360,	// (0x0001fb81) list_single_2heading_msg_pane_g4_ParamLimits

0xc360,	// (0x0001fb81) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x000234b6) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x000234b6) list_single_2heading_msg_pane_g

0xc378,	// (0x0001fb99) list_single_2heading_msg_pane_t1_ParamLimits

0xc378,	// (0x0001fb99) list_single_2heading_msg_pane_t1

0xc3a0,	// (0x0001fbc1) list_single_2heading_msg_pane_t2_ParamLimits

0xc3a0,	// (0x0001fbc1) list_single_2heading_msg_pane_t2

0xc40b,	// (0x0001fc2c) list_single_2heading_msg_pane_t3_ParamLimits

0xc40b,	// (0x0001fc2c) list_single_2heading_msg_pane_t3

0x6486,	// (0x00019ca7) list_single_2heading_msg_pane_t4_ParamLimits

0x6486,	// (0x00019ca7) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x000234bf) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x000234bf) list_single_2heading_msg_pane_t

0xc70d,	// (0x0001ff2e) title_pane_g4_ParamLimits

0xc70d,	// (0x0001ff2e) title_pane_g4

0xe67e,	// (0x00021e9f) title_pane_stacon_g3_ParamLimits

0xe67e,	// (0x00021e9f) title_pane_stacon_g3

0x5e7e,	// (0x0001969f) list_single_2graphic_im_pane_g4_ParamLimits

0x5e7e,	// (0x0001969f) list_single_2graphic_im_pane_g4

0x365a,	// (0x00016e7b) popup_side_volume_key_window_cp

0x3f76,	// (0x00017797) main_idle_act2_pane_t1

0xed69,	// (0x0002258a) toolbar_button_pane_g10

0xa994,	// (0x0001e1b5) popup_toolbar_window_cp1

0x4a8b,	// (0x000182ac) clock_nsta_pane_cp_t1

0x4a8b,	// (0x000182ac) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x000232ba) clock_nsta_pane_cp_t

0xe8b2,	// (0x000220d3) navi_navi_volume_pane_cp2_ParamLimits

0xe8c1,	// (0x000220e2) popup_side_volume_key_window_g1_ParamLimits

0xe8cd,	// (0x000220ee) popup_side_volume_key_window_g2_ParamLimits

0xe8dc,	// (0x000220fd) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00022f08) popup_side_volume_key_window_g_ParamLimits

0xf070,	// (0x00022891) fep_hwr_aid_pane

0xf119,	// (0x0002293a) bg_fep_hwr_top_pane_g4_ParamLimits

0x504a,	// (0x0001886b) fep_hwr_top_pane_g1_ParamLimits

0x505c,	// (0x0001887d) fep_hwr_top_pane_g2_ParamLimits

0xf139,	// (0x0002295a) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x0002330f) fep_hwr_top_pane_g_ParamLimits

0xf14e,	// (0x0002296f) fep_hwr_top_text_pane_ParamLimits

0x340f,	// (0x00016c30) aid_touch_tab_arrow_arrow_2

0x3418,	// (0x00016c39) aid_touch_tab_arrow_left_2

0xf084,	// (0x000228a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xf0bb,	// (0x000228dc) fep_hwr_prediction_pane

0x51b2,	// (0x000189d3) fep_vkb_prediction_pane

0xc0a0,	// (0x0001f8c1) fep_vkb_side_pane_g3_ParamLimits

0xc0a0,	// (0x0001f8c1) fep_vkb_side_pane_g3

0xf262,	// (0x00022a83) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf2d3,	// (0x00022af4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf2e0,	// (0x00022b01) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000233be) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf3a4,	// (0x00022bc5) fep_hwr_prediction_pane_g1

0xf3ae,	// (0x00022bcf) fep_hwr_prediction_pane_g2

0xf3b6,	// (0x00022bd7) fep_hwr_prediction_pane_g3

0xf3be,	// (0x00022bdf) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x000234c8) fep_hwr_prediction_pane_g

0x64ab,	// (0x00019ccc) fep_vkb_prediction_pane_g1

0x64b5,	// (0x00019cd6) fep_vkb_prediction_pane_g2

0x64bd,	// (0x00019cde) fep_vkb_prediction_pane_g3

0x64c5,	// (0x00019ce6) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x000234d1) fep_vkb_prediction_pane_g

0xeefe,	// (0x0002271f) slider_set_pane_g3

0xef12,	// (0x00022733) slider_set_pane_g4

0xef2a,	// (0x0002274b) slider_set_pane_g5

0xeefe,	// (0x0002271f) slider_set_pane_g6

0xef40,	// (0x00022761) slider_set_pane_g7

0x3b08,	// (0x00017329) slider_form_pane_g3

0x3b11,	// (0x00017332) slider_form_pane_g4

0x3b19,	// (0x0001733a) slider_form_pane_g5

0x3b08,	// (0x00017329) slider_form_pane_g6

0xbbb4,	// (0x0001f3d5) slider_form_pane_g7

0x427a,	// (0x00017a9b) slider_set_pane_vc_g3

0x4283,	// (0x00017aa4) slider_set_pane_vc_g4

0x428c,	// (0x00017aad) slider_set_pane_vc_g5

0x427a,	// (0x00017a9b) slider_set_pane_vc_g6

0x4295,	// (0x00017ab6) slider_set_pane_vc_g7

0x473a,	// (0x00017f5b) slider_form_pane_vc_g1

0x4743,	// (0x00017f64) slider_form_pane_vc_g2

0x474c,	// (0x00017f6d) slider_form_pane_vc_g3

0x473a,	// (0x00017f5b) slider_form_pane_vc_g4

0x4755,	// (0x00017f76) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x0002328c) slider_form_pane_vc_g

0xe045,	// (0x00021866) main_idle_act3_pane

0x64cd,	// (0x00019cee) ai3_links_pane

0xc479,	// (0x0001fc9a) popup_ai3_data_window_ParamLimits

0xc479,	// (0x0001fc9a) popup_ai3_data_window

0xc6ef,	// (0x0001ff10) grid_ai3_links_pane

0xc497,	// (0x0001fcb8) cell_ai3_links_pane_ParamLimits

0xc497,	// (0x0001fcb8) cell_ai3_links_pane

0x650e,	// (0x00019d2f) bg_popup_sub_pane_cp11

0x651b,	// (0x00019d3c) cell_ai3_links_pane_g1

0xc6ef,	// (0x0001ff10) bg_popup_sub_pane_cp12

0x6540,	// (0x00019d61) heading_ai3_data_pane

0x6548,	// (0x00019d69) list_ai3_gene_pane

0x6554,	// (0x00019d75) popup_ai3_data_window_g1

0x655c,	// (0x00019d7d) heading_ai3_data_pane_g1

0x6564,	// (0x00019d85) heading_ai3_data_pane_t1

0x6572,	// (0x00019d93) list_double_ai3_gene_pane_ParamLimits

0x6572,	// (0x00019d93) list_double_ai3_gene_pane

0x657f,	// (0x00019da0) list_single_ai3_gene_pane_ParamLimits

0x657f,	// (0x00019da0) list_single_ai3_gene_pane

0x4fae,	// (0x000187cf) list_highlight_pane_cp7_ParamLimits

0x4fae,	// (0x000187cf) list_highlight_pane_cp7

0x658c,	// (0x00019dad) list_single_a13_gene_pane_t1_ParamLimits

0x658c,	// (0x00019dad) list_single_a13_gene_pane_t1

0x65a3,	// (0x00019dc4) list_single_ai3_gene_pane_g1

0x65ac,	// (0x00019dcd) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x000234da) list_single_ai3_gene_pane_g

0x65b4,	// (0x00019dd5) list_double_ai3_gene_pane_g1_ParamLimits

0x65b4,	// (0x00019dd5) list_double_ai3_gene_pane_g1

0x65c0,	// (0x00019de1) list_double_ai3_gene_pane_t1_ParamLimits

0x65c0,	// (0x00019de1) list_double_ai3_gene_pane_t1

0x65dc,	// (0x00019dfd) list_double_ai3_gene_pane_t2_ParamLimits

0x65dc,	// (0x00019dfd) list_double_ai3_gene_pane_t2

0x65f1,	// (0x00019e12) list_double_ai3_gene_pane_t3_ParamLimits

0x65f1,	// (0x00019e12) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x000234df) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x000234df) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x639a,	// (0x00019bbb) aid_size_min_col_2

0xc31f,	// (0x0001fb40) aid_size_min_msg_ParamLimits

0xc31f,	// (0x0001fb40) aid_size_min_msg

0xc0b4,	// (0x0001f8d5) fep_vkb_top_text_pane_g2_ParamLimits

0xc0b4,	// (0x0001f8d5) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x0002333f) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x0002333f) fep_vkb_top_text_pane_g

0xe045,	// (0x00021866) main_hc_apps_shell_pane

0x660e,	// (0x00019e2f) grid_hc_apps_pane_ParamLimits

0x660e,	// (0x00019e2f) grid_hc_apps_pane

0x6620,	// (0x00019e41) list_hc_apps_pane

0x6628,	// (0x00019e49) scroll_pane_cp37_ParamLimits

0x6628,	// (0x00019e49) scroll_pane_cp37

0xc4b1,	// (0x0001fcd2) cell_hc_apps_pane_ParamLimits

0xc4b1,	// (0x0001fcd2) cell_hc_apps_pane

0xc577,	// (0x0001fd98) cell_hc_apps_pane_g1_ParamLimits

0xc577,	// (0x0001fd98) cell_hc_apps_pane_g1

0x6714,	// (0x00019f35) cell_hc_apps_pane_g2_ParamLimits

0x6714,	// (0x00019f35) cell_hc_apps_pane_g2

0x6730,	// (0x00019f51) cell_hc_apps_pane_g3_ParamLimits

0x6730,	// (0x00019f51) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x000234e6) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x000234e6) cell_hc_apps_pane_g

0xc5a3,	// (0x0001fdc4) cell_hc_apps_pane_t1_ParamLimits

0xc5a3,	// (0x0001fdc4) cell_hc_apps_pane_t1

0xc8ac,	// (0x000200cd) grid_highlight_pane_cp10_ParamLimits

0xc8ac,	// (0x000200cd) grid_highlight_pane_cp10

0xc5e1,	// (0x0001fe02) list_single_hc_apps_pane_ParamLimits

0xc5e1,	// (0x0001fe02) list_single_hc_apps_pane

0xc614,	// (0x0001fe35) list_single_hc_apps_pane_g1

0xc62d,	// (0x0001fe4e) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x000234ed) list_single_hc_apps_pane_g

0xc646,	// (0x0001fe67) list_single_hc_apps_pane_g2_copy1

0xc662,	// (0x0001fe83) list_single_hc_apps_pane_t1

0xc75f,	// (0x0001ff80) bg_set_opt_pane_cp_ParamLimits

0xe168,	// (0x00021989) setting_slider_pane_t1_ParamLimits

0xe181,	// (0x000219a2) setting_slider_pane_t2_ParamLimits

0xe19b,	// (0x000219bc) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00022d5a) setting_slider_pane_t_ParamLimits

0xe1b3,	// (0x000219d4) slider_set_pane_ParamLimits

0xeb4c,	// (0x0002236d) control_pane_g5_ParamLimits

0xeb4c,	// (0x0002236d) control_pane_g5

0x393b,	// (0x0001715c) slider_set_pane_g1_ParamLimits

0xeef2,	// (0x00022713) slider_set_pane_g2_ParamLimits

0xeefe,	// (0x0002271f) slider_set_pane_g3_ParamLimits

0xef12,	// (0x00022733) slider_set_pane_g4_ParamLimits

0xef2a,	// (0x0002274b) slider_set_pane_g5_ParamLimits

0xeefe,	// (0x0002271f) slider_set_pane_g6_ParamLimits

0xef40,	// (0x00022761) slider_set_pane_g7_ParamLimits

0xf935,	// (0x00023156) slider_set_pane_g_ParamLimits

0x1a6d,	// (0x0001528e) navi_icon_text_pane_ParamLimits

0xb382,	// (0x0001eba3) aid_fill_nsta_2_ParamLimits

0xb3bb,	// (0x0001ebdc) aid_touch_tab_arrow_left_ParamLimits

0xb3d1,	// (0x0001ebf2) aid_touch_tab_arrow_right_ParamLimits

0xb46c,	// (0x0001ec8d) clock_nsta_pane_ParamLimits

0xb932,	// (0x0001f153) navi_icon_pane_g1_ParamLimits

0xb93e,	// (0x0001f15f) navi_text_pane_t1_ParamLimits

0xbe5c,	// (0x0001f67d) navi_icon_text_pane_g1_ParamLimits

0xbe68,	// (0x0001f689) navi_icon_text_pane_t1_ParamLimits

0xc614,	// (0x0001fe35) list_single_hc_apps_pane_g1_ParamLimits

0xc62d,	// (0x0001fe4e) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x000234ed) list_single_hc_apps_pane_g_ParamLimits

0xc646,	// (0x0001fe67) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc662,	// (0x0001fe83) list_single_hc_apps_pane_t1_ParamLimits

0x93f9,	// (0x0001cc1a) popup_toolbar2_fixed_window_ParamLimits

0x93f9,	// (0x0001cc1a) popup_toolbar2_fixed_window

0x9c9d,	// (0x0001d4be) popup_toolbar2_float_window

0xc6ef,	// (0x0001ff10) bg_popup_sub_pane_cp27

0x684d,	// (0x0001a06e) grid_toolbar2_float_pane

0xc6ef,	// (0x0001ff10) bg_popup_sub_pane_cp26

0x684d,	// (0x0001a06e) grid_toolbar2_fixed_pane

0xc690,	// (0x0001feb1) cell_toolbar2_fixed_pane_ParamLimits

0xc690,	// (0x0001feb1) cell_toolbar2_fixed_pane

0xc6aa,	// (0x0001fecb) cell_toolbar2_fixed_pane_g1

0x686e,	// (0x0001a08f) toolbar2_fixed_button_pane

0x24a5,	// (0x00015cc6) toolbar2_fixed_button_pane_g1

0x24b5,	// (0x00015cd6) toolbar2_fixed_button_pane_g2

0x24ad,	// (0x00015cce) toolbar2_fixed_button_pane_g3

0x24c5,	// (0x00015ce6) toolbar2_fixed_button_pane_g4

0x24bd,	// (0x00015cde) toolbar2_fixed_button_pane_g5

0x24cd,	// (0x00015cee) toolbar2_fixed_button_pane_g6

0x24d5,	// (0x00015cf6) toolbar2_fixed_button_pane_g7

0x24e5,	// (0x00015d06) toolbar2_fixed_button_pane_g8

0x24dd,	// (0x00015cfe) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x00023058) toolbar2_fixed_button_pane_g

0x6876,	// (0x0001a097) cell_toolbar2_float_pane_ParamLimits

0x6876,	// (0x0001a097) cell_toolbar2_float_pane

0x6887,	// (0x0001a0a8) cell_toolbar2_float_pane_g1

0x686e,	// (0x0001a08f) toolbar2_fixed_button_pane_cp

0xbf9c,	// (0x0001f7bd) fep_vkb_accented_list_pane_ParamLimits

0xbf9c,	// (0x0001f7bd) fep_vkb_accented_list_pane

0xf242,	// (0x00022a63) bg_popup_fep_shadow_pane_g9

0x1bfc,	// (0x0001541d) bg_popup_fep_shadow_pane_cp3

0xe465,	// (0x00021c86) list_accented_list_pane

0x6890,	// (0x0001a0b1) list_single_accented_list_pane_ParamLimits

0x6890,	// (0x0001a0b1) list_single_accented_list_pane

0x1bfc,	// (0x0001541d) list_highlight_pane_cp10

0x68a1,	// (0x0001a0c2) list_single_accented_list_pane_t1

0x9bb9,	// (0x0001d3da) popup_slider_window_ParamLimits

0x9bb9,	// (0x0001d3da) popup_slider_window

0x6391,	// (0x00019bb2) aid_indentation_list_msg

0xce7e,	// (0x0002069f) bg_popup_window_pane_cp19

0x69dd,	// (0x0001a1fe) popup_slider_window_g1

0x69f9,	// (0x0001a21a) popup_slider_window_g2

0x6a15,	// (0x0001a236) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x000234f2) popup_slider_window_g

0x6a7b,	// (0x0001a29c) popup_slider_window_t1

0x6aef,	// (0x0001a310) small_volume_slider_vertical_pane

0x4fe9,	// (0x0001880a) small_volume_slider_vertical_pane_g1

0x4fe9,	// (0x0001880a) small_volume_slider_vertical_pane_g2

0x6b0b,	// (0x0001a32c) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00023504) small_volume_slider_vertical_pane_g

0x9363,	// (0x0001cb84) area_side_right_pane_ParamLimits

0x9363,	// (0x0001cb84) area_side_right_pane

0x9f93,	// (0x0001d7b4) aid_size_side_button_ParamLimits

0x9f93,	// (0x0001d7b4) aid_size_side_button

0x9fac,	// (0x0001d7cd) grid_sctrl_middle_pane_ParamLimits

0x9fac,	// (0x0001d7cd) grid_sctrl_middle_pane

0xf3cf,	// (0x00022bf0) sctrl_sk_bottom_pane

0xf3e0,	// (0x00022c01) sctrl_sk_top_pane

0xf3f2,	// (0x00022c13) aid_touch_sctrl_top

0xf3ff,	// (0x00022c20) bg_sctrl_sk_pane_ParamLimits

0xf3ff,	// (0x00022c20) bg_sctrl_sk_pane

0xf40d,	// (0x00022c2e) sctrl_sk_top_pane_g1

0xf41a,	// (0x00022c3b) sctrl_sk_top_pane_t1

0xf3f2,	// (0x00022c13) aid_touch_sctrl_bottom

0xf3ff,	// (0x00022c20) bg_sctrl_sk_pane_cp_ParamLimits

0xf3ff,	// (0x00022c20) bg_sctrl_sk_pane_cp

0xf435,	// (0x00022c56) sctrl_sk_bottom_pane_g1

0xf41a,	// (0x00022c3b) sctrl_sk_bottom_pane_t1

0x9fc6,	// (0x0001d7e7) cell_sctrl_middle_pane_ParamLimits

0x9fc6,	// (0x0001d7e7) cell_sctrl_middle_pane

0x9fd9,	// (0x0001d7fa) aid_touch_sctrl_middle_ParamLimits

0x9fd9,	// (0x0001d7fa) aid_touch_sctrl_middle

0x9fe6,	// (0x0001d807) bg_sctrl_middle_pane_ParamLimits

0x9fe6,	// (0x0001d807) bg_sctrl_middle_pane

0x0313,	// (0x00013b34) cell_sctrl_middle_pane_g1_ParamLimits

0x0313,	// (0x00013b34) cell_sctrl_middle_pane_g1

0x9ff4,	// (0x0001d815) cell_sctrl_middle_pane_g2_ParamLimits

0x9ff4,	// (0x0001d815) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x00023510) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x00023510) cell_sctrl_middle_pane_g

0x24a5,	// (0x00015cc6) bg_sctrl_middle_pane_g1

0x24ad,	// (0x00015cce) bg_sctrl_middle_pane_g2

0x24b5,	// (0x00015cd6) bg_sctrl_middle_pane_g3

0x24bd,	// (0x00015cde) bg_sctrl_middle_pane_g4

0x24c5,	// (0x00015ce6) bg_sctrl_middle_pane_g5

0x24cd,	// (0x00015cee) bg_sctrl_middle_pane_g6

0x24d5,	// (0x00015cf6) bg_sctrl_middle_pane_g7

0x24dd,	// (0x00015cfe) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00023515) bg_sctrl_middle_pane_g

0x24e5,	// (0x00015d06) bg_sctrl_middle_pane_g8_copy1

0x24a5,	// (0x00015cc6) bg_sctrl_sk_pane_g1

0x24b5,	// (0x00015cd6) bg_sctrl_sk_pane_g2

0x24ad,	// (0x00015cce) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x00023058) bg_sctrl_sk_pane_g

0xccf4,	// (0x00020515) aid_size_touch_scroll_bar

0x24c5,	// (0x00015ce6) bg_sctrl_sk_pane_g4

0x24bd,	// (0x00015cde) bg_sctrl_sk_pane_g5

0x24cd,	// (0x00015cee) bg_sctrl_sk_pane_g6

0x24d5,	// (0x00015cf6) bg_sctrl_sk_pane_g7

0x24e5,	// (0x00015d06) bg_sctrl_sk_pane_g8

0x24dd,	// (0x00015cfe) bg_sctrl_sk_pane_g9

0xebab,	// (0x000223cc) popup_fep_china_hwr2_fs_candidate_window

0x966b,	// (0x0001ce8c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x966b,	// (0x0001ce8c) popup_fep_china_hwr2_fs_control_window

0xf262,	// (0x00022a83) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x0002350b) sctrl_sk_top_pane_g

0xcf36,	// (0x00020757) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf36,	// (0x00020757) aid_fep_china_hwr2_fs_cell

0xcf4c,	// (0x0002076d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf4c,	// (0x0002076d) bg_popup_fep_shadow_pane_cp4

0xcf63,	// (0x00020784) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf63,	// (0x00020784) bg_popup_fep_shadow_pane_cp5

0xcf75,	// (0x00020796) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf75,	// (0x00020796) popup_fep_china_hwr2_fs_control_bar_grid

0xcf89,	// (0x000207aa) popup_fep_china_hwr2_fs_control_funtion_grid

0x6b6a,	// (0x0001a38b) aid_fep_china_hwr2_fs_candi_cell

0xc6ef,	// (0x0001ff10) bg_popup_fep_shadow_pane_cp6

0x6b74,	// (0x0001a395) popup_fep_china_hwr2_fs_candidate_grid

0xcf91,	// (0x000207b2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf91,	// (0x000207b2) cell_fep_china_hwr2_fs_funtion_grid

0x4fe9,	// (0x0001880a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6b96,	// (0x0001a3b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6b96,	// (0x0001a3b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6ba4,	// (0x0001a3c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6ba4,	// (0x0001a3c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00023526) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00023526) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfa9,	// (0x000207ca) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfa9,	// (0x000207ca) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfbe,	// (0x000207df) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfbe,	// (0x000207df) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x0002352b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x0002352b) cell_fep_china_hwr2_fs_funtion_grid_t

0x6beb,	// (0x0001a40c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6bf3,	// (0x0001a414) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6bfb,	// (0x0001a41c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x00023530) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6c03,	// (0x0001a424) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6c03,	// (0x0001a424) cell_fep_china_hwr2_fs_candidate_grid

0x6c22,	// (0x0001a443) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6c2a,	// (0x0001a44b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4fe9,	// (0x0001880a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4fe9,	// (0x0001880a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00023344) cell_fep_china_hwr2_fs_candidate_grid_g

0x6c32,	// (0x0001a453) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2051,	// (0x00015872) clock_nsta_pane_cp_24_ParamLimits

0x2051,	// (0x00015872) clock_nsta_pane_cp_24

0x20d1,	// (0x000158f2) indicator_nsta_pane_cp_24_ParamLimits

0x20d1,	// (0x000158f2) indicator_nsta_pane_cp_24

0x326d,	// (0x00016a8e) heading_pane_g1

0x0001,

0xf89c,	// (0x000230bd) heading_pane_g

0x3dbd,	// (0x000175de) grid_sct_catagory_button_pane

0x3def,	// (0x00017610) scroll_pane_cp5_ParamLimits

0x4bf6,	// (0x00018417) button_value_adjust_pane_cp5_ParamLimits

0x4bf6,	// (0x00018417) button_value_adjust_pane_cp5

0x4cfc,	// (0x0001851d) form2_midp_time_pane_ParamLimits

0x6c40,	// (0x0001a461) cell_sct_catagory_button_pane_ParamLimits

0x6c40,	// (0x0001a461) cell_sct_catagory_button_pane

0x4fae,	// (0x000187cf) bg_button_pane_cp01_ParamLimits

0x4fae,	// (0x000187cf) bg_button_pane_cp01

0x4fe9,	// (0x0001880a) cell_sct_catagory_button_pane_g1

0x9c3a,	// (0x0001d45b) popup_tb_extension_window

0xcfda,	// (0x000207fb) aid_size_cell_ext_ParamLimits

0xcfda,	// (0x000207fb) aid_size_cell_ext

0xcb36,	// (0x00020357) bg_tb_trans_pane_cp1_ParamLimits

0xcb36,	// (0x00020357) bg_tb_trans_pane_cp1

0xd000,	// (0x00020821) grid_tb_ext_pane_ParamLimits

0xd000,	// (0x00020821) grid_tb_ext_pane

0xd03d,	// (0x0002085e) cell_tb_ext_pane_ParamLimits

0xd03d,	// (0x0002085e) cell_tb_ext_pane

0xd065,	// (0x00020886) cell_tb_ext_pane_g1_ParamLimits

0xd065,	// (0x00020886) cell_tb_ext_pane_g1

0x6cd4,	// (0x0001a4f5) cell_tb_ext_pane_t1

0xc8ac,	// (0x000200cd) list_highlight_pane_cp11_ParamLimits

0xc8ac,	// (0x000200cd) list_highlight_pane_cp11

0x940e,	// (0x0001cc2f) popup_uni_indicator_window_ParamLimits

0x940e,	// (0x0001cc2f) popup_uni_indicator_window

0xe2b0,	// (0x00021ad1) bg_popup_sub_pane_cp14

0x6cef,	// (0x0001a510) list_uniindi_pane

0x6cfb,	// (0x0001a51c) uniindi_top_pane

0xc8ac,	// (0x000200cd) bg_uniindi_top_pane

0x6d1c,	// (0x0001a53d) uniindi_top_pane_g1

0x6d32,	// (0x0001a553) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00023537) uniindi_top_pane_g

0x6d5c,	// (0x0001a57d) uniindi_top_pane_t1

0x6d88,	// (0x0001a5a9) list_single_uniindi_pane_ParamLimits

0x6d88,	// (0x0001a5a9) list_single_uniindi_pane

0x4fe9,	// (0x0001880a) bg_uniindi_top_pane_g1

0x6d9b,	// (0x0001a5bc) list_single_uniindi_pane_g1

0x6dae,	// (0x0001a5cf) list_single_uniindi_pane_t1

0xe045,	// (0x00021866) control_bg_pane

0x6dd3,	// (0x0001a5f4) bg_sctrl_sk_pane_cp1

0x6ddc,	// (0x0001a5fd) bg_sctrl_sk_pane_cp2

0x6de5,	// (0x0001a606) control_bg_pane_g1

0x6dee,	// (0x0001a60f) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x00023540) control_bg_pane_g

0x4a2e,	// (0x0001824f) cell_indicator_nsta_pane_g1_ParamLimits

0xbdc0,	// (0x0001f5e1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x000232a8) cell_indicator_nsta_pane_g_ParamLimits

0x4d89,	// (0x000185aa) form2_midp_time_pane_t1_ParamLimits

0xee6c,	// (0x0002268d) main_idle_act4_pane_ParamLimits

0xee6c,	// (0x0002268d) main_idle_act4_pane

0x9c3a,	// (0x0001d45b) popup_tb_extension_window_ParamLimits

0xd025,	// (0x00020846) tb_ext_find_pane_ParamLimits

0xd025,	// (0x00020846) tb_ext_find_pane

0x6df7,	// (0x0001a618) ai_gene_pane_1_cp1

0x1d46,	// (0x00015567) ai_gene_pane_2_cp1

0x6dff,	// (0x0001a620) list_single_idle_plugin_calendar_pane

0x6e08,	// (0x0001a629) list_single_idle_plugin_notification_pane

0x6e11,	// (0x0001a632) list_single_idle_plugin_player_pane

0xd082,	// (0x000208a3) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd082,	// (0x000208a3) list_single_idle_plugin_shortcut_pane

0xd0aa,	// (0x000208cb) main_idle_act4_pane_t1

0xd0c2,	// (0x000208e3) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00023545) main_idle_act4_pane_t

0xd0da,	// (0x000208fb) middle_sk_idle_act4_pane_ParamLimits

0xd0da,	// (0x000208fb) middle_sk_idle_act4_pane

0xd0f6,	// (0x00020917) popup_clock_digital_analogue_window_cp2

0xd11d,	// (0x0002093e) shortcut_wheel_idle_act4_pane_ParamLimits

0xd11d,	// (0x0002093e) shortcut_wheel_idle_act4_pane

0x4fe9,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g1

0x4fe9,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g2

0x4fe9,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g3

0x4fe9,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g4

0x4fe9,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g5

0x6ea4,	// (0x0001a6c5) shortcut_wheel_idle_act4_pane_g6

0x6eac,	// (0x0001a6cd) shortcut_wheel_idle_act4_pane_g7

0x6eb4,	// (0x0001a6d5) shortcut_wheel_idle_act4_pane_g8

0x6ebc,	// (0x0001a6dd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x0002354a) shortcut_wheel_idle_act4_pane_g

0xc6bf,	// (0x0001fee0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6bf,	// (0x0001fee0) middle_sk_idle_act4_pane_g1

0xd19a,	// (0x000209bb) middle_sk_idle_act4_pane_g2_ParamLimits

0xd19a,	// (0x000209bb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x0002356d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x0002356d) middle_sk_idle_act4_pane_g

0xd1b2,	// (0x000209d3) middle_sk_idle_act4_pane_t1_ParamLimits

0xd1b2,	// (0x000209d3) middle_sk_idle_act4_pane_t1

0xd1e1,	// (0x00020a02) grid_ai_shortcut_pane_ParamLimits

0xd1e1,	// (0x00020a02) grid_ai_shortcut_pane

0xd1fe,	// (0x00020a1f) list_highlight_pane_cp16_ParamLimits

0xd1fe,	// (0x00020a1f) list_highlight_pane_cp16

0xd20b,	// (0x00020a2c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd20b,	// (0x00020a2c) list_single_idle_plugin_shortcut_pane_g1

0xd217,	// (0x00020a38) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd217,	// (0x00020a38) list_single_idle_plugin_shortcut_pane_g2

0xd235,	// (0x00020a56) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd235,	// (0x00020a56) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x00023572) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x00023572) list_single_idle_plugin_shortcut_pane_g

0xd24a,	// (0x00020a6b) cell_ai_shortcut_pane_ParamLimits

0xd24a,	// (0x00020a6b) cell_ai_shortcut_pane

0xd260,	// (0x00020a81) cell_ai_shortcut_pane_g1_ParamLimits

0xd260,	// (0x00020a81) cell_ai_shortcut_pane_g1

0x6df7,	// (0x0001a618) ai_gene_pane_1_cp2

0x6fed,	// (0x0001a80e) ai_gene_pane_2_cp2

0x6ff5,	// (0x0001a816) list_highlight_pane_cp15

0x6ffe,	// (0x0001a81f) list_single_idle_plugin_calendar_pane_g1

0x6ff5,	// (0x0001a816) list_highlight_pane_cp17

0x7006,	// (0x0001a827) list_single_idle_plugin_calendar_pane_g1_copy1

0x700e,	// (0x0001a82f) list_single_idle_plugin_player_pane_g1

0x4024,	// (0x00017845) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00023579) list_single_idle_plugin_player_pane_g

0x7016,	// (0x0001a837) list_single_idle_plugin_player_pane_t1

0x7024,	// (0x0001a845) list_single_idle_plugin_player_pane_t2

0x7032,	// (0x0001a853) list_single_idle_plugin_player_pane_t3

0x7040,	// (0x0001a861) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x0002357e) list_single_idle_plugin_player_pane_t

0x704e,	// (0x0001a86f) wait_bar_pane_cp15

0x7056,	// (0x0001a877) grid_ai_notification_pane

0x4024,	// (0x00017845) list_single_idle_plugin_notification_pane_g1

0xd282,	// (0x00020aa3) cell_ai_notification_pane_ParamLimits

0xd282,	// (0x00020aa3) cell_ai_notification_pane

0x706c,	// (0x0001a88d) cell_ai_notification_pane_g1

0x7074,	// (0x0001a895) cell_ai_notification_pane_t1

0xd28f,	// (0x00020ab0) tb_ext_find_button_pane

0xd297,	// (0x00020ab8) tb_ext_find_pane_g1

0xd29f,	// (0x00020ac0) tb_ext_find_pane_t1

0x1536,	// (0x00014d57) tb_ext_find_button_pane_g1

0x70a0,	// (0x0001a8c1) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x00023587) tb_ext_find_button_pane_g

0xd0aa,	// (0x000208cb) main_idle_act4_pane_t1_ParamLimits

0xd0c2,	// (0x000208e3) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00023545) main_idle_act4_pane_t_ParamLimits

0xd0f6,	// (0x00020917) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd10d,	// (0x0002092e) sat_plugin_idle_act4_pane_ParamLimits

0xd10d,	// (0x0002092e) sat_plugin_idle_act4_pane

0xd2ad,	// (0x00020ace) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd2ad,	// (0x00020ace) sat_plugin_idle_act4_pane_t1

0xd2c5,	// (0x00020ae6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd2c5,	// (0x00020ae6) sat_plugin_idle_act4_pane_t2

0xd2dd,	// (0x00020afe) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd2dd,	// (0x00020afe) sat_plugin_idle_act4_pane_t3

0xd2f5,	// (0x00020b16) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd2f5,	// (0x00020b16) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x0002358c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x0002358c) sat_plugin_idle_act4_pane_t

0xe10a,	// (0x0002192b) popup_battery_window_ParamLimits

0xe10a,	// (0x0002192b) popup_battery_window

0xc8ac,	// (0x000200cd) bg_popup_sub_pane_cp25_ParamLimits

0xc8ac,	// (0x000200cd) bg_popup_sub_pane_cp25

0x70f5,	// (0x0001a916) popup_battery_window_g1_ParamLimits

0x70f5,	// (0x0001a916) popup_battery_window_g1

0x7101,	// (0x0001a922) popup_battery_window_t1_ParamLimits

0x7101,	// (0x0001a922) popup_battery_window_t1

0x7113,	// (0x0001a934) popup_battery_window_t2_ParamLimits

0x7113,	// (0x0001a934) popup_battery_window_t2

0x0001,

0xfd74,	// (0x00023595) popup_battery_window_t_ParamLimits

0xfd74,	// (0x00023595) popup_battery_window_t

0xb26a,	// (0x0001ea8b) midp_canvas_pane_ParamLimits

0xb2c6,	// (0x0001eae7) midp_keypad_pane_ParamLimits

0xb2c6,	// (0x0001eae7) midp_keypad_pane

0x1f2b,	// (0x0001574c) main_midp_pane_ParamLimits

0x4aa9,	// (0x000182ca) signal_pane_g2_cp_ParamLimits

0xd30d,	// (0x00020b2e) aid_size_cell_midp_keypad_ParamLimits

0xd30d,	// (0x00020b2e) aid_size_cell_midp_keypad

0xd32b,	// (0x00020b4c) midp_keyp_game_grid_pane_ParamLimits

0xd32b,	// (0x00020b4c) midp_keyp_game_grid_pane

0xd352,	// (0x00020b73) midp_keyp_rocker_pane_ParamLimits

0xd352,	// (0x00020b73) midp_keyp_rocker_pane

0xd3a1,	// (0x00020bc2) midp_keyp_sk_left_pane_ParamLimits

0xd3a1,	// (0x00020bc2) midp_keyp_sk_left_pane

0xd3f7,	// (0x00020c18) midp_keyp_sk_right_pane_ParamLimits

0xd3f7,	// (0x00020c18) midp_keyp_sk_right_pane

0xc6ef,	// (0x0001ff10) bg_button_pane_cp03

0xd44d,	// (0x00020c6e) midp_keyp_sk_left_pane_g1

0xc6ef,	// (0x0001ff10) bg_button_pane_cp04

0xd44d,	// (0x00020c6e) midp_keyp_sk_right_pane_g1

0x4fe9,	// (0x0001880a) midp_keyp_rocker_pane_g1

0xd455,	// (0x00020c76) keyp_game_cell_pane_ParamLimits

0xd455,	// (0x00020c76) keyp_game_cell_pane

0xc6ef,	// (0x0001ff10) bg_button_pane_cp02

0xd47b,	// (0x00020c9c) keyp_game_cell_pane_g1

0x93a5,	// (0x0001cbc6) popup_fep_vkb2_window_ParamLimits

0x93a5,	// (0x0001cbc6) popup_fep_vkb2_window

0xa000,	// (0x0001d821) aid_size_cell_vkb2_ParamLimits

0xa000,	// (0x0001d821) aid_size_cell_vkb2

0xa02c,	// (0x0001d84d) popup_fep_vkb2_window_g1_ParamLimits

0xa02c,	// (0x0001d84d) popup_fep_vkb2_window_g1

0xa07c,	// (0x0001d89d) vkb2_area_bottom_pane_ParamLimits

0xa07c,	// (0x0001d89d) vkb2_area_bottom_pane

0xa0d8,	// (0x0001d8f9) vkb2_area_keypad_pane_ParamLimits

0xa0d8,	// (0x0001d8f9) vkb2_area_keypad_pane

0xa126,	// (0x0001d947) vkb2_area_top_pane_ParamLimits

0xa126,	// (0x0001d947) vkb2_area_top_pane

0xa1b3,	// (0x0001d9d4) vkb2_top_entry_pane_ParamLimits

0xa1b3,	// (0x0001d9d4) vkb2_top_entry_pane

0xa1e0,	// (0x0001da01) vkb2_top_grid_left_pane_ParamLimits

0xa1e0,	// (0x0001da01) vkb2_top_grid_left_pane

0xa201,	// (0x0001da22) vkb2_top_grid_right_pane_ParamLimits

0xa201,	// (0x0001da22) vkb2_top_grid_right_pane

0xf47c,	// (0x00022c9d) vkb2_cell_keypad_pane_ParamLimits

0xf47c,	// (0x00022c9d) vkb2_cell_keypad_pane

0xa249,	// (0x0001da6a) vkb2_area_bottom_grid_pane_ParamLimits

0xa249,	// (0x0001da6a) vkb2_area_bottom_grid_pane

0xa273,	// (0x0001da94) vkb2_area_bottom_pane_g1_ParamLimits

0xa273,	// (0x0001da94) vkb2_area_bottom_pane_g1

0xa299,	// (0x0001daba) vkb2_area_bottom_pane_g2_ParamLimits

0xa299,	// (0x0001daba) vkb2_area_bottom_pane_g2

0xa2ca,	// (0x0001daeb) vkb2_area_bottom_pane_g3_ParamLimits

0xa2ca,	// (0x0001daeb) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x0002359a) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x0002359a) vkb2_area_bottom_pane_g

0x00b4,	// (0x000138d5) vkb2_top_cell_left_pane_ParamLimits

0x00b4,	// (0x000138d5) vkb2_top_cell_left_pane

0xd484,	// (0x00020ca5) vkb2_top_entry_pane_g1_ParamLimits

0xd484,	// (0x00020ca5) vkb2_top_entry_pane_g1

0xd492,	// (0x00020cb3) vkb2_top_entry_pane_t1_ParamLimits

0xd492,	// (0x00020cb3) vkb2_top_entry_pane_t1

0x72bd,	// (0x0001aade) vkb2_top_entry_pane_t2_ParamLimits

0x72bd,	// (0x0001aade) vkb2_top_entry_pane_t2

0x72ef,	// (0x0001ab10) vkb2_top_entry_pane_t3_ParamLimits

0x72ef,	// (0x0001ab10) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x000235a1) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x000235a1) vkb2_top_entry_pane_t

0xa334,	// (0x0001db55) vkb2_top_grid_right_pane_g1_ParamLimits

0xa334,	// (0x0001db55) vkb2_top_grid_right_pane_g1

0x0117,	// (0x00013938) vkb2_top_grid_right_pane_g2_ParamLimits

0x0117,	// (0x00013938) vkb2_top_grid_right_pane_g2

0x012f,	// (0x00013950) vkb2_top_grid_right_pane_g3_ParamLimits

0x012f,	// (0x00013950) vkb2_top_grid_right_pane_g3

0xa34a,	// (0x0001db6b) vkb2_top_grid_right_pane_g4_ParamLimits

0xa34a,	// (0x0001db6b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000235a8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000235a8) vkb2_top_grid_right_pane_g

0x015d,	// (0x0001397e) vkb2_top_cell_left_pane_g1

0x0174,	// (0x00013995) vkb2_cell_keypad_pane_g1_ParamLimits

0x0174,	// (0x00013995) vkb2_cell_keypad_pane_g1

0x7313,	// (0x0001ab34) vkb2_cell_keypad_pane_t1_ParamLimits

0x7313,	// (0x0001ab34) vkb2_cell_keypad_pane_t1

0x0182,	// (0x000139a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x0182,	// (0x000139a3) vkb2_cell_bottom_grid_pane

0x01bb,	// (0x000139dc) vkb2_cell_bottom_grid_pane_g1

0xd13e,	// (0x0002095f) aid_call2_pane_cp02

0xd146,	// (0x00020967) aid_call_pane_cp02

0xd14e,	// (0x0002096f) clock_digital_number_pane_cp10

0xd156,	// (0x00020977) clock_digital_number_pane_cp11

0xd15e,	// (0x0002097f) clock_digital_number_pane_cp12

0xd166,	// (0x00020987) clock_digital_number_pane_cp13

0xd16e,	// (0x0002098f) clock_digital_separator_pane_cp10

0x1536,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g1

0x1536,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g2

0xd176,	// (0x00020997) popup_clock_digital_analogue_window_cp2_g3

0x1536,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g4

0xd176,	// (0x00020997) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x0002355d) popup_clock_digital_analogue_window_cp2_g

0xd17e,	// (0x0002099f) popup_clock_digital_analogue_window_cp2_t1

0xd18c,	// (0x000209ad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00023568) popup_clock_digital_analogue_window_cp2_t

0x4fe9,	// (0x0001880a) clock_digital_number_pane_cp10_g1

0x4fe9,	// (0x0001880a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00023344) clock_digital_number_pane_cp10_g

0x4fe9,	// (0x0001880a) clock_digital_separator_pane_cp10_g1

0x4fe9,	// (0x0001880a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00023344) clock_digital_separator_pane_cp10_g

0x6d3e,	// (0x0001a55f) uniindi_top_pane_g3

0x6d4f,	// (0x0001a570) uniindi_top_pane_g4

0xf507,	// (0x00022d28) vkb2_row_keypad_pane_ParamLimits

0xf507,	// (0x00022d28) vkb2_row_keypad_pane

0x01d7,	// (0x000139f8) vkb2_cell_t_keypad_pane_ParamLimits

0x01d7,	// (0x000139f8) vkb2_cell_t_keypad_pane

0x01e7,	// (0x00013a08) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x01e7,	// (0x00013a08) vkb2_cell_t_keypad_pane_cp08

0x01fc,	// (0x00013a1d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x01fc,	// (0x00013a1d) vkb2_cell_t_keypad_pane_cp09

0x0210,	// (0x00013a31) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0210,	// (0x00013a31) vkb2_cell_t_keypad_pane_cp01

0x0221,	// (0x00013a42) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0221,	// (0x00013a42) vkb2_cell_t_keypad_pane_cp02

0x0232,	// (0x00013a53) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0232,	// (0x00013a53) vkb2_cell_t_keypad_pane_cp03

0x0243,	// (0x00013a64) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0243,	// (0x00013a64) vkb2_cell_t_keypad_pane_cp04

0x0254,	// (0x00013a75) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0254,	// (0x00013a75) vkb2_cell_t_keypad_pane_cp05

0x0265,	// (0x00013a86) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0265,	// (0x00013a86) vkb2_cell_t_keypad_pane_cp06

0x0278,	// (0x00013a99) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0278,	// (0x00013a99) vkb2_cell_t_keypad_pane_cp07

0x028d,	// (0x00013aae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x028d,	// (0x00013aae) vkb2_cell_t_keypad_pane_cp10

0xf262,	// (0x00022a83) vkb2_cell_t_keypad_pane_g1

0x732a,	// (0x0001ab4b) vkb2_cell_t_keypad_pane_t1

0xe045,	// (0x00021866) popup_grid_graphic2_window

0xd4cb,	// (0x00020cec) aid_size_cell_graphic2_ParamLimits

0xd4cb,	// (0x00020cec) aid_size_cell_graphic2

0xd509,	// (0x00020d2a) bg_popup_window_pane_cp21_ParamLimits

0xd509,	// (0x00020d2a) bg_popup_window_pane_cp21

0xd517,	// (0x00020d38) graphic2_pages_pane_ParamLimits

0xd517,	// (0x00020d38) graphic2_pages_pane

0xd56f,	// (0x00020d90) grid_graphic2_control_pane_ParamLimits

0xd56f,	// (0x00020d90) grid_graphic2_control_pane

0xd5b7,	// (0x00020dd8) grid_graphic2_pane_ParamLimits

0xd5b7,	// (0x00020dd8) grid_graphic2_pane

0xd642,	// (0x00020e63) cell_graphic2_pane

0xe045,	// (0x00021866) main_comp_mode_pane

0x6548,	// (0x00019d69) list_ai3_gene_pane_ParamLimits

0xce7e,	// (0x0002069f) bg_popup_window_pane_cp19_ParamLimits

0x697d,	// (0x0001a19e) bg_touch_area_indi_pane_ParamLimits

0x697d,	// (0x0001a19e) bg_touch_area_indi_pane

0x6993,	// (0x0001a1b4) bg_touch_area_indi_pane_cp01_ParamLimits

0x6993,	// (0x0001a1b4) bg_touch_area_indi_pane_cp01

0x69a9,	// (0x0001a1ca) bg_touch_area_indi_pane_cp02_ParamLimits

0x69a9,	// (0x0001a1ca) bg_touch_area_indi_pane_cp02

0x69c3,	// (0x0001a1e4) bg_touch_area_indi_pane_cp03_ParamLimits

0x69c3,	// (0x0001a1e4) bg_touch_area_indi_pane_cp03

0x69dd,	// (0x0001a1fe) popup_slider_window_g1_ParamLimits

0x69f9,	// (0x0001a21a) popup_slider_window_g2_ParamLimits

0x6a15,	// (0x0001a236) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x000234f2) popup_slider_window_g_ParamLimits

0x6a7b,	// (0x0001a29c) popup_slider_window_t1_ParamLimits

0x6aef,	// (0x0001a310) small_volume_slider_vertical_pane_ParamLimits

0xd642,	// (0x00020e63) cell_graphic2_pane_ParamLimits

0xd6a4,	// (0x00020ec5) bg_button_pane_cp10_ParamLimits

0xd6a4,	// (0x00020ec5) bg_button_pane_cp10

0xd6b7,	// (0x00020ed8) bg_button_pane_cp11_ParamLimits

0xd6b7,	// (0x00020ed8) bg_button_pane_cp11

0xd6ca,	// (0x00020eeb) graphic2_pages_pane_g1_ParamLimits

0xd6ca,	// (0x00020eeb) graphic2_pages_pane_g1

0xd6e5,	// (0x00020f06) graphic2_pages_pane_g2_ParamLimits

0xd6e5,	// (0x00020f06) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000235b6) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000235b6) graphic2_pages_pane_g

0xd6fd,	// (0x00020f1e) graphic2_pages_pane_t1_ParamLimits

0xd6fd,	// (0x00020f1e) graphic2_pages_pane_t1

0xd715,	// (0x00020f36) cell_graphic2_control_pane_ParamLimits

0xd715,	// (0x00020f36) cell_graphic2_control_pane

0xd749,	// (0x00020f6a) cell_graphic2_pane_g1_ParamLimits

0xd749,	// (0x00020f6a) cell_graphic2_pane_g1

0xc6cd,	// (0x0001feee) cell_graphic2_pane_g2_ParamLimits

0xc6cd,	// (0x0001feee) cell_graphic2_pane_g2

0xcd83,	// (0x000205a4) cell_graphic2_pane_g3_ParamLimits

0xcd83,	// (0x000205a4) cell_graphic2_pane_g3

0xc6da,	// (0x0001fefb) cell_graphic2_pane_g4_ParamLimits

0xc6da,	// (0x0001fefb) cell_graphic2_pane_g4

0xd756,	// (0x00020f77) cell_graphic2_pane_g5_ParamLimits

0xd756,	// (0x00020f77) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000235bb) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000235bb) cell_graphic2_pane_g

0xd772,	// (0x00020f93) cell_graphic2_pane_t1_ParamLimits

0xd772,	// (0x00020f93) cell_graphic2_pane_t1

0x3261,	// (0x00016a82) grid_highlight_pane_cp11_ParamLimits

0x3261,	// (0x00016a82) grid_highlight_pane_cp11

0xc8ac,	// (0x000200cd) bg_button_pane_cp05

0xd7bb,	// (0x00020fdc) cell_graphic2_control_pane_g1

0x4fe9,	// (0x0001880a) bg_touch_area_indi_pane_g1

0x760d,	// (0x0001ae2e) aid_cmod_rocker_key_size

0x7617,	// (0x0001ae38) aid_cmode_itu_key_size

0x7621,	// (0x0001ae42) main_cmode_video_pane

0x762b,	// (0x0001ae4c) main_comp_mode_itu_pane

0x7637,	// (0x0001ae58) main_comp_mode_rocker_pane

0x7643,	// (0x0001ae64) cell_cmode_rocker_pane_ParamLimits

0x7643,	// (0x0001ae64) cell_cmode_rocker_pane

0x7657,	// (0x0001ae78) cell_cmode_itu_pane_ParamLimits

0x7657,	// (0x0001ae78) cell_cmode_itu_pane

0xe2b0,	// (0x00021ad1) bg_button_pane_cp06_ParamLimits

0xe2b0,	// (0x00021ad1) bg_button_pane_cp06

0x5264,	// (0x00018a85) cell_cmode_rocker_pane_g1_ParamLimits

0x5264,	// (0x00018a85) cell_cmode_rocker_pane_g1

0x6b96,	// (0x0001a3b7) cell_cmode_rocker_pane_g2_ParamLimits

0x6b96,	// (0x0001a3b7) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x000235cb) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x000235cb) cell_cmode_rocker_pane_g

0xc6ef,	// (0x0001ff10) bg_button_pane_cp07

0x766e,	// (0x0001ae8f) cell_cmode_itu_pane_g1

0x7677,	// (0x0001ae98) cell_cmode_itu_pane_t1

0x7685,	// (0x0001aea6) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x000235d0) cell_cmode_itu_pane_t

0x6dc3,	// (0x0001a5e4) aid_touch_ctrl_left

0x6dcb,	// (0x0001a5ec) aid_touch_ctrl_right

0xc6ef,	// (0x0001ff10) compa_mode_pane

0xd7e3,	// (0x00021004) aid_cmod_rocker_key_size_cp

0xd7ed,	// (0x0002100e) aid_cmode_itu_key_size_cp

0x76a7,	// (0x0001aec8) compa_mode_pane_g1

0x76af,	// (0x0001aed0) compa_mode_pane_g2

0x76b7,	// (0x0001aed8) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x000235d5) compa_mode_pane_g

0xd7f7,	// (0x00021018) main_comp_mode_itu_pane_cp

0xd7ff,	// (0x00021020) main_comp_mode_rocker_pane_cp

0xd807,	// (0x00021028) cell_cmode_itu_pane_cp_ParamLimits

0xd807,	// (0x00021028) cell_cmode_itu_pane_cp

0xd81c,	// (0x0002103d) cell_cmode_rocker_pane_cp_ParamLimits

0xd81c,	// (0x0002103d) cell_cmode_rocker_pane_cp

0xe2b0,	// (0x00021ad1) bg_button_pane_cp06_cp_ParamLimits

0xe2b0,	// (0x00021ad1) bg_button_pane_cp06_cp

0x5264,	// (0x00018a85) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5264,	// (0x00018a85) cell_cmode_rocker_pane_g1_cp

0x4fe9,	// (0x0001880a) cell_cmode_rocker_pane_g2_cp

0xc6ef,	// (0x0001ff10) bg_button_pane_cp07_cp

0xd82e,	// (0x0002104f) cell_cmode_itu_pane_g1_cp

0xd837,	// (0x00021058) cell_cmode_itu_pane_t1_cp

0xd837,	// (0x00021058) cell_cmode_itu_pane_t2_cp

0xbbac,	// (0x0001f3cd) settings_code_pane_cp2

0xc75f,	// (0x0001ff80) bg_popup_window_pane_cp3_ParamLimits

0xcac0,	// (0x000202e1) heading_pane_cp3_ParamLimits

0xcacf,	// (0x000202f0) listscroll_popup_graphic_pane_ParamLimits

0xf070,	// (0x00022891) fep_hwr_aid_pane_ParamLimits

0xf3f2,	// (0x00022c13) aid_touch_sctrl_top_ParamLimits

0xf40d,	// (0x00022c2e) sctrl_sk_top_pane_g1_ParamLimits

0xf262,	// (0x00022a83) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x0002350b) sctrl_sk_top_pane_g_ParamLimits

0xf41a,	// (0x00022c3b) sctrl_sk_top_pane_t1_ParamLimits

0xf3f2,	// (0x00022c13) aid_touch_sctrl_bottom_ParamLimits

0xf41a,	// (0x00022c3b) sctrl_sk_bottom_pane_t1_ParamLimits

0x6d08,	// (0x0001a529) aid_area_touch_clock

0xa172,	// (0x0001d993) aid_vkb2_area_top_pane_cell_ParamLimits

0xa172,	// (0x0001d993) aid_vkb2_area_top_pane_cell

0xa222,	// (0x0001da43) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa222,	// (0x0001da43) aid_vkb2_area_bottom_pane_cell

0x7275,	// (0x0001aa96) popup_char_count_window

0x770d,	// (0x0001af2e) popup_char_count_window_g1

0x7716,	// (0x0001af37) popup_char_count_window_g2

0x771f,	// (0x0001af40) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x000235dc) popup_char_count_window_g

0x7728,	// (0x0001af49) popup_char_count_window_t1

0xf44c,	// (0x00022c6d) popup_fep_char_preview_window_ParamLimits

0xf44c,	// (0x00022c6d) popup_fep_char_preview_window

0xa192,	// (0x0001d9b3) vkb2_top_candi_pane_ParamLimits

0xa192,	// (0x0001d9b3) vkb2_top_candi_pane

0xd845,	// (0x00021066) cell_vkb2_top_candi_pane_ParamLimits

0xd845,	// (0x00021066) cell_vkb2_top_candi_pane

0x02a2,	// (0x00013ac3) bg_popup_fep_char_preview_window_ParamLimits

0x02a2,	// (0x00013ac3) bg_popup_fep_char_preview_window

0x02b0,	// (0x00013ad1) popup_fep_char_preview_window_t1_ParamLimits

0x02b0,	// (0x00013ad1) popup_fep_char_preview_window_t1

0x7784,	// (0x0001afa5) bg_popup_fep_char_preview_window_g1

0x778c,	// (0x0001afad) bg_popup_fep_char_preview_window_g2

0x7794,	// (0x0001afb5) bg_popup_fep_char_preview_window_g3

0x779c,	// (0x0001afbd) bg_popup_fep_char_preview_window_g4

0x77a4,	// (0x0001afc5) bg_popup_fep_char_preview_window_g5

0x77ac,	// (0x0001afcd) bg_popup_fep_char_preview_window_g6

0x77b4,	// (0x0001afd5) bg_popup_fep_char_preview_window_g7

0x77bc,	// (0x0001afdd) bg_popup_fep_char_preview_window_g8

0x77c4,	// (0x0001afe5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x000235e3) bg_popup_fep_char_preview_window_g

0xf262,	// (0x00022a83) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf262,	// (0x00022a83) cell_vkb2_top_candi_pane_g1

0xf270,	// (0x00022a91) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf270,	// (0x00022a91) cell_vkb2_top_candi_pane_g2

0x5db6,	// (0x000195d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5db6,	// (0x000195d7) cell_vkb2_top_candi_pane_g3

0x02f2,	// (0x00013b13) cell_vkb2_top_candi_pane_g4_ParamLimits

0x02f2,	// (0x00013b13) cell_vkb2_top_candi_pane_g4

0x593c,	// (0x0001915d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x593c,	// (0x0001915d) cell_vkb2_top_candi_pane_g5

0x0313,	// (0x00013b34) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0313,	// (0x00013b34) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x000235f8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x000235f8) cell_vkb2_top_candi_pane_g

0x0321,	// (0x00013b42) cell_vkb2_top_candi_pane_t1

0xeede,	// (0x000226ff) aid_size_touch_slider_mark_ParamLimits

0xeede,	// (0x000226ff) aid_size_touch_slider_mark

0xd553,	// (0x00020d74) grid_graphic2_catg_pane_ParamLimits

0xd553,	// (0x00020d74) grid_graphic2_catg_pane

0xd611,	// (0x00020e32) popup_grid_graphic2_window_t1_ParamLimits

0xd611,	// (0x00020e32) popup_grid_graphic2_window_t1

0xd627,	// (0x00020e48) popup_grid_graphic2_window_t2_ParamLimits

0xd627,	// (0x00020e48) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000235b1) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000235b1) popup_grid_graphic2_window_t

0xc8ac,	// (0x000200cd) bg_button_pane_cp05_ParamLimits

0xd7bb,	// (0x00020fdc) cell_graphic2_control_pane_g1_ParamLimits

0xd8a9,	// (0x000210ca) cell_graphic2_catg_pane_ParamLimits

0xd8a9,	// (0x000210ca) cell_graphic2_catg_pane

0xc6ef,	// (0x0001ff10) bg_button_pane_cp12

0xd8bb,	// (0x000210dc) cell_graphic2_catg_pane_g1

0x6cd4,	// (0x0001a4f5) cell_tb_ext_pane_t1_ParamLimits

0x00d4,	// (0x000138f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x00d4,	// (0x000138f5) vkb2_top_cell_right_narrow_pane

0x00ec,	// (0x0001390d) vkb2_top_cell_right_wide_pane_ParamLimits

0x00ec,	// (0x0001390d) vkb2_top_cell_right_wide_pane

0xee6c,	// (0x0002268d) bg_vkb2_func_pane_ParamLimits

0xee6c,	// (0x0002268d) bg_vkb2_func_pane

0x015d,	// (0x0001397e) vkb2_top_cell_left_pane_g1_ParamLimits

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp03_ParamLimits

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp03

0x01bb,	// (0x000139dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x24ad,	// (0x00015cce) bg_vkb2_func_pane_g1

0x24b5,	// (0x00015cd6) bg_vkb2_func_pane_g2

0x24c5,	// (0x00015ce6) bg_vkb2_func_pane_g3

0x24bd,	// (0x00015cde) bg_vkb2_func_pane_g4

0x24cd,	// (0x00015cee) bg_vkb2_func_pane_g5

0x24d5,	// (0x00015cf6) bg_vkb2_func_pane_g6

0x24dd,	// (0x00015cfe) bg_vkb2_func_pane_g7

0x24e5,	// (0x00015d06) bg_vkb2_func_pane_g8

0x24a5,	// (0x00015cc6) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00023605) bg_vkb2_func_pane_g

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp01_ParamLimits

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp01

0x015d,	// (0x0001397e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x015d,	// (0x0001397e) vkb2_top_cell_right_wide_pane_g1

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp02_ParamLimits

0xee6c,	// (0x0002268d) bg_vkb2_fuc_pane_cp02

0x033f,	// (0x00013b60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x033f,	// (0x00013b60) vkb2_top_cell_right_narrow_pane_g1

0xcdc0,	// (0x000205e1) aid_touch_area_decrease_ParamLimits

0xcdc0,	// (0x000205e1) aid_touch_area_decrease

0xcdfa,	// (0x0002061b) aid_touch_area_increase_ParamLimits

0xcdfa,	// (0x0002061b) aid_touch_area_increase

0xce22,	// (0x00020643) aid_touch_area_mute_ParamLimits

0xce22,	// (0x00020643) aid_touch_area_mute

0xce4a,	// (0x0002066b) aid_touch_area_slider_ParamLimits

0xce4a,	// (0x0002066b) aid_touch_area_slider

0xce8a,	// (0x000206ab) popup_slider_window_g4_ParamLimits

0xce8a,	// (0x000206ab) popup_slider_window_g4

0xceb2,	// (0x000206d3) popup_slider_window_g5_ParamLimits

0xceb2,	// (0x000206d3) popup_slider_window_g5

0xcee6,	// (0x00020707) popup_slider_window_g6_ParamLimits

0xcee6,	// (0x00020707) popup_slider_window_g6

0x6aa9,	// (0x0001a2ca) popup_slider_window_t2_ParamLimits

0x6aa9,	// (0x0001a2ca) popup_slider_window_t2

0x0001,

0xfcde,	// (0x000234ff) popup_slider_window_t_ParamLimits

0xfcde,	// (0x000234ff) popup_slider_window_t

0xcf02,	// (0x00020723) slider_pane_ParamLimits

0xcf02,	// (0x00020723) slider_pane

0x77e7,	// (0x0001b008) slider_pane_g1_ParamLimits

0x77e7,	// (0x0001b008) slider_pane_g1

0x77fb,	// (0x0001b01c) slider_pane_g2_ParamLimits

0x77fb,	// (0x0001b01c) slider_pane_g2

0x7811,	// (0x0001b032) slider_pane_g3_ParamLimits

0x7811,	// (0x0001b032) slider_pane_g3

0x0003,

0xfdf7,	// (0x00023618) slider_pane_g_ParamLimits

0xfdf7,	// (0x00023618) slider_pane_g

0x9c86,	// (0x0001d4a7) popup_tb_float_extension_window_ParamLimits

0x9c86,	// (0x0001d4a7) popup_tb_float_extension_window

0x783d,	// (0x0001b05e) aid_size_cell_tb_float_ext

0xc6ef,	// (0x0001ff10) bg_popup_sub_window_cp28

0x7849,	// (0x0001b06a) grid_tb_float_ext_pane

0x7855,	// (0x0001b076) cell_tb_float_ext_pane_ParamLimits

0x7855,	// (0x0001b076) cell_tb_float_ext_pane

0x7871,	// (0x0001b092) cell_tb_float_ext_pane_g1

0x787a,	// (0x0001b09b) grid_highlight_pane_cp12

0x9f06,	// (0x0001d727) cell_last_hwr_side_pane_ParamLimits

0x9f06,	// (0x0001d727) cell_last_hwr_side_pane

0x4fe9,	// (0x0001880a) cell_last_hwr_side_pane_g1

0x7883,	// (0x0001b0a4) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x00023621) cell_last_hwr_side_pane_g

0xa2ff,	// (0x0001db20) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa2ff,	// (0x0001db20) vkb2_area_bottom_space_btn_pane

0xf262,	// (0x00022a83) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x732a,	// (0x0001ab4b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0321,	// (0x00013b42) cell_vkb2_top_candi_pane_t1_ParamLimits

0x035b,	// (0x00013b7c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x035b,	// (0x00013b7c) vkb2_area_bottom_space_btn_pane_g1

0x0395,	// (0x00013bb6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0395,	// (0x00013bb6) vkb2_area_bottom_space_btn_pane_g2

0x03cb,	// (0x00013bec) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x03cb,	// (0x00013bec) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00023626) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00023626) vkb2_area_bottom_space_btn_pane_g

0xf127,	// (0x00022948) cel_fep_hwr_func_pane_ParamLimits

0xf127,	// (0x00022948) cel_fep_hwr_func_pane

0x9edb,	// (0x0001d6fc) cell_hwr_side_button_pane_ParamLimits

0x9edb,	// (0x0001d6fc) cell_hwr_side_button_pane

0x6d08,	// (0x0001a529) aid_area_touch_clock_ParamLimits

0xc8ac,	// (0x000200cd) bg_uniindi_top_pane_ParamLimits

0x6d1c,	// (0x0001a53d) uniindi_top_pane_g1_ParamLimits

0x6d32,	// (0x0001a553) uniindi_top_pane_g2_ParamLimits

0x6d3e,	// (0x0001a55f) uniindi_top_pane_g3_ParamLimits

0x6d4f,	// (0x0001a570) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00023537) uniindi_top_pane_g_ParamLimits

0x6d5c,	// (0x0001a57d) uniindi_top_pane_t1_ParamLimits

0xc8ac,	// (0x000200cd) bg_vkb2_func_pane_cp01_ParamLimits

0xc8ac,	// (0x000200cd) bg_vkb2_func_pane_cp01

0x788c,	// (0x0001b0ad) cel_fep_hwr_func_pane_g1_ParamLimits

0x788c,	// (0x0001b0ad) cel_fep_hwr_func_pane_g1

0xc8ac,	// (0x000200cd) bg_vkb2_func_pane_cp02_ParamLimits

0xc8ac,	// (0x000200cd) bg_vkb2_func_pane_cp02

0x788c,	// (0x0001b0ad) cell_hwr_side_button_pane_g1_ParamLimits

0x788c,	// (0x0001b0ad) cell_hwr_side_button_pane_g1

0x22ee,	// (0x00015b0f) status_pane_g4_ParamLimits

0x22ee,	// (0x00015b0f) status_pane_g4

0x2308,	// (0x00015b29) status_pane_t1

0x4d9c,	// (0x000185bd) form2_midp_gauge_slider_cont_pane

0x4da4,	// (0x000185c5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbef4,	// (0x0001f715) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf06,	// (0x0001f727) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x000232f7) form2_midp_gauge_slider_pane_t_ParamLimits

0x4dda,	// (0x000185fb) form2_midp_slider_pane_ParamLimits

0xf43e,	// (0x00022c5f) aid_size_cell_func_vkb2_ParamLimits

0xf43e,	// (0x00022c5f) aid_size_cell_func_vkb2

0x7829,	// (0x0001b04a) slider_pane_g4_ParamLimits

0x7829,	// (0x0001b04a) slider_pane_g4

0xa368,	// (0x0001db89) form2_midp_gauge_slider_pane_t2_cp01

0xa376,	// (0x0001db97) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa376,	// (0x0001db97) form2_midp_gauge_slider_pane_t3_cp01

0x0440,	// (0x00013c61) form2_midp_slider_pane_cp01

0xc6ef,	// (0x0001ff10) navi_smil_pane

0x78c5,	// (0x0001b0e6) navi_smil_pane_g1

0x78cd,	// (0x0001b0ee) navi_smil_pane_t1

0x789a,	// (0x0001b0bb) form2_midp_slider_pane_g1

0x78a3,	// (0x0001b0c4) form2_midp_slider_pane_g2

0x78ab,	// (0x0001b0cc) form2_midp_slider_pane_g3

0x789a,	// (0x0001b0bb) form2_midp_slider_pane_g4

0xd8c4,	// (0x000210e5) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0002362f) form2_midp_slider_pane_g

0x0405,	// (0x00013c26) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0405,	// (0x00013c26) vkb2_area_bottom_space_btn_pane_g4

0xb4b7,	// (0x0001ecd8) lc0_navi_pane_ParamLimits

0xb4b7,	// (0x0001ecd8) lc0_navi_pane

0xb527,	// (0x0001ed48) lc0_stat_indi_pane_ParamLimits

0xb527,	// (0x0001ed48) lc0_stat_indi_pane

0xb53c,	// (0x0001ed5d) ls0_title_pane_ParamLimits

0xb53c,	// (0x0001ed5d) ls0_title_pane

0xe2b0,	// (0x00021ad1) bg_popup_sub_pane_cp14_ParamLimits

0x6cef,	// (0x0001a510) list_uniindi_pane_ParamLimits

0x6cfb,	// (0x0001a51c) uniindi_top_pane_ParamLimits

0x6d9b,	// (0x0001a5bc) list_single_uniindi_pane_g1_ParamLimits

0x6dae,	// (0x0001a5cf) list_single_uniindi_pane_t1_ParamLimits

0xa393,	// (0x0001dbb4) lc0_stat_clock_pane_ParamLimits

0xa393,	// (0x0001dbb4) lc0_stat_clock_pane

0xd8cd,	// (0x000210ee) lc0_stat_indi_pane_g1_ParamLimits

0xd8cd,	// (0x000210ee) lc0_stat_indi_pane_g1

0xd8da,	// (0x000210fb) lc0_stat_indi_pane_g2_ParamLimits

0xd8da,	// (0x000210fb) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0002363a) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0002363a) lc0_stat_indi_pane_g

0xa3a0,	// (0x0001dbc1) lc0_uni_indicator_pane_ParamLimits

0xa3a0,	// (0x0001dbc1) lc0_uni_indicator_pane

0xd8e7,	// (0x00021108) ls0_title_pane_g1_ParamLimits

0xd8e7,	// (0x00021108) ls0_title_pane_g1

0xd8fb,	// (0x0002111c) ls0_title_pane_t1_ParamLimits

0xd8fb,	// (0x0002111c) ls0_title_pane_t1

0xa3ad,	// (0x0001dbce) lc0_uni_indicator_pane_g1_ParamLimits

0xa3ad,	// (0x0001dbce) lc0_uni_indicator_pane_g1

0x793f,	// (0x0001b160) lc0_stat_clock_pane_t1

0xe045,	// (0x00021866) main_ai5_pane

0x794d,	// (0x0001b16e) ai5_sk_pane_ParamLimits

0x794d,	// (0x0001b16e) ai5_sk_pane

0xd929,	// (0x0002114a) cell_ai5_widget_pane_ParamLimits

0xd929,	// (0x0002114a) cell_ai5_widget_pane

0xd9a8,	// (0x000211c9) aid_size_cell_widget_grid

0x7a07,	// (0x0001b228) bg_ai5_widget_pane_ParamLimits

0x7a07,	// (0x0001b228) bg_ai5_widget_pane

0xd9dc,	// (0x000211fd) cell_ai5_widget_pane_g2

0xd9f0,	// (0x00021211) cell_ai5_widget_pane_g3

0xda0a,	// (0x0002122b) cell_ai5_widget_pane_g4

0xda1a,	// (0x0002123b) cell_ai5_widget_pane_g5

0xda2a,	// (0x0002124b) cell_ai5_widget_pane_g6

0xda36,	// (0x00021257) cell_ai5_widget_pane_g7

0xdaa2,	// (0x000212c3) cell_ai5_widget_pane_t1_ParamLimits

0xdaa2,	// (0x000212c3) cell_ai5_widget_pane_t1

0xdabf,	// (0x000212e0) cell_ai5_widget_pane_t2_ParamLimits

0xdabf,	// (0x000212e0) cell_ai5_widget_pane_t2

0xdad7,	// (0x000212f8) cell_ai5_widget_pane_t3_ParamLimits

0xdad7,	// (0x000212f8) cell_ai5_widget_pane_t3

0xdaef,	// (0x00021310) cell_ai5_widget_pane_t4_ParamLimits

0xdaef,	// (0x00021310) cell_ai5_widget_pane_t4

0xdb15,	// (0x00021336) cell_ai5_widget_pane_t5_ParamLimits

0xdb15,	// (0x00021336) cell_ai5_widget_pane_t5

0x7bdc,	// (0x0001b3fd) cell_ai5_widget_pane_t6_ParamLimits

0x7bdc,	// (0x0001b3fd) cell_ai5_widget_pane_t6

0x7bee,	// (0x0001b40f) cell_ai5_widget_pane_t7_ParamLimits

0x7bee,	// (0x0001b40f) cell_ai5_widget_pane_t7

0xdb35,	// (0x00021356) cell_ai5_widget_pane_t8_ParamLimits

0xdb35,	// (0x00021356) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x0002365a) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x0002365a) cell_ai5_widget_pane_t

0xdbb9,	// (0x000213da) grid_ai5_widget_pane

0xe2b0,	// (0x00021ad1) highlight_cell_ai5_widget_pane_ParamLimits

0xe2b0,	// (0x00021ad1) highlight_cell_ai5_widget_pane

0xdbc7,	// (0x000213e8) ai5_sk_left_pane

0xdbd1,	// (0x000213f2) ai5_sk_middle_pane

0xdbdb,	// (0x000213fc) ai5_sk_right_pane

0x7cbd,	// (0x0001b4de) bg_ai5_widget_pane_g1_ParamLimits

0x7cbd,	// (0x0001b4de) bg_ai5_widget_pane_g1

0x7cc9,	// (0x0001b4ea) bg_ai5_widget_pane_g2_ParamLimits

0x7cc9,	// (0x0001b4ea) bg_ai5_widget_pane_g2

0x7cd5,	// (0x0001b4f6) bg_ai5_widget_pane_g3_ParamLimits

0x7cd5,	// (0x0001b4f6) bg_ai5_widget_pane_g3

0x7ce1,	// (0x0001b502) bg_ai5_widget_pane_g4_ParamLimits

0x7ce1,	// (0x0001b502) bg_ai5_widget_pane_g4

0x7ced,	// (0x0001b50e) bg_ai5_widget_pane_g5_ParamLimits

0x7ced,	// (0x0001b50e) bg_ai5_widget_pane_g5

0x7cf9,	// (0x0001b51a) bg_ai5_widget_pane_g6_ParamLimits

0x7cf9,	// (0x0001b51a) bg_ai5_widget_pane_g6

0x7d05,	// (0x0001b526) bg_ai5_widget_pane_g7_ParamLimits

0x7d05,	// (0x0001b526) bg_ai5_widget_pane_g7

0x7d11,	// (0x0001b532) bg_ai5_widget_pane_g8_ParamLimits

0x7d11,	// (0x0001b532) bg_ai5_widget_pane_g8

0x7d1d,	// (0x0001b53e) bg_ai5_widget_pane_g9_ParamLimits

0x7d1d,	// (0x0001b53e) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00023673) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00023673) bg_ai5_widget_pane_g

0xdc0f,	// (0x00021430) cell_shortcut_ai5_widget_pane_ParamLimits

0xdc0f,	// (0x00021430) cell_shortcut_ai5_widget_pane

0x1bfc,	// (0x0001541d) bg_cell_shortcut_ai5_widget_pane

0x7d68,	// (0x0001b589) cell_grid_ai5_widget_pane_g1

0x1bfc,	// (0x0001541d) highlight_cell_shortcut_ai5_widget_pane

0x24ad,	// (0x00015cce) ai5_sk_left_pane_g1

0x7d71,	// (0x0001b592) ai5_sk_left_pane_g2

0x7d79,	// (0x0001b59a) ai5_sk_left_pane_g3

0x7d81,	// (0x0001b5a2) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00023686) ai5_sk_left_pane_g

0x7d89,	// (0x0001b5aa) ai5_sk_left_pane_t1

0x24b5,	// (0x00015cd6) ai5_sk_right_pane_g1

0x7d97,	// (0x0001b5b8) ai5_sk_right_pane_g2

0x7d9f,	// (0x0001b5c0) ai5_sk_right_pane_g3

0x7da7,	// (0x0001b5c8) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0002368f) ai5_sk_right_pane_g

0x7daf,	// (0x0001b5d0) ai5_sk_right_pane_t1

0x24b5,	// (0x00015cd6) ai5_sk_middle_pane_g1

0x24ad,	// (0x00015cce) ai5_sk_middle_pane_g2

0x24cd,	// (0x00015cee) ai5_sk_middle_pane_g3

0x7d9f,	// (0x0001b5c0) ai5_sk_middle_pane_g4

0x7d79,	// (0x0001b59a) ai5_sk_middle_pane_g5

0x7dbd,	// (0x0001b5de) ai5_sk_middle_pane_g6

0xdc22,	// (0x00021443) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00023698) ai5_sk_middle_pane_g

0xb3a1,	// (0x0001ebc2) aid_touch_area_size_lc0_ParamLimits

0xb3a1,	// (0x0001ebc2) aid_touch_area_size_lc0

0xf291,	// (0x00022ab2) cell_hwr_candidate_pane_t1_ParamLimits

0x1fb1,	// (0x000157d2) aid_touch_navi_pane

0xb647,	// (0x0001ee68) status_dt_navi_pane_ParamLimits

0xb647,	// (0x0001ee68) status_dt_navi_pane

0xb65f,	// (0x0001ee80) status_dt_sta_pane_ParamLimits

0xb65f,	// (0x0001ee80) status_dt_sta_pane

0xdc2a,	// (0x0002144b) dt_sta_controll_pane

0xdc37,	// (0x00021458) dt_sta_indi_pane

0xdc44,	// (0x00021465) dt_sta_title_pane

0xc8ac,	// (0x000200cd) bg_dt_sta_indi_pane_ParamLimits

0xc8ac,	// (0x000200cd) bg_dt_sta_indi_pane

0xdc56,	// (0x00021477) dt_sta_battery_pane

0xdc5e,	// (0x0002147f) dt_sta_indi_pane_g1

0xdc67,	// (0x00021488) dt_sta_indi_pane_g2

0xdc70,	// (0x00021491) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x000236a7) dt_sta_indi_pane_g

0xdc79,	// (0x0002149a) dt_sta_signal_pane

0xe2b0,	// (0x00021ad1) bg_dt_sta_title_pane_ParamLimits

0xe2b0,	// (0x00021ad1) bg_dt_sta_title_pane

0xdc82,	// (0x000214a3) dt_sta_title_pane_g1

0xdc8a,	// (0x000214ab) dt_sta_title_pane_t1_ParamLimits

0xdc8a,	// (0x000214ab) dt_sta_title_pane_t1

0xc6ef,	// (0x0001ff10) bg_dt_sta_control_pane

0xdc9f,	// (0x000214c0) dt_sta_controll_pane_g1

0xdca8,	// (0x000214c9) bg_dt_sta_title_pane_g1

0xdcb1,	// (0x000214d2) bg_dt_sta_title_pane_g2

0xdcba,	// (0x000214db) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x000236ae) bg_dt_sta_title_pane_g

0x4fe9,	// (0x0001880a) bg_dt_sta_indi_pane_g1

0x7e6b,	// (0x0001b68c) dt_sta_signal_pane_g1

0x7e73,	// (0x0001b694) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x000236b5) dt_sta_signal_pane_g

0x7e7b,	// (0x0001b69c) dt_sta_battery_pane_g1

0x7e84,	// (0x0001b6a5) dt_sta_battery_pane_t1

0x4fe9,	// (0x0001880a) bg_dt_sta_control_pane_g1

0x165d,	// (0x00014e7e) fep_china_uni_eep_pane

0x1665,	// (0x00014e86) fep_china_uni_entry_pane_ParamLimits

0x1675,	// (0x00014e96) popup_fep_china_uni_window_g1_ParamLimits

0x1685,	// (0x00014ea6) popup_fep_china_uni_window_g2_ParamLimits

0x1685,	// (0x00014ea6) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00022f14) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00022f14) popup_fep_china_uni_window_g

0x7e93,	// (0x0001b6b4) fep_china_uni_eep_pane_g1

0x7e9b,	// (0x0001b6bc) fep_china_uni_eep_pane_t1

0x78bc,	// (0x0001b0dd) aid_touch_area_size_smil_player

0x2105,	// (0x00015926) lc0_clock_pane

0x22fc,	// (0x00015b1d) status_pane_g5_ParamLimits

0x22fc,	// (0x00015b1d) status_pane_g5

0x97ac,	// (0x0001cfcd) popup_keymap_window

0x22c2,	// (0x00015ae3) status_icon_pane

0xd9f0,	// (0x00021211) cell_ai5_widget_pane_g3_ParamLimits

0xda0a,	// (0x0002122b) cell_ai5_widget_pane_g4_ParamLimits

0xda1a,	// (0x0002123b) cell_ai5_widget_pane_g5_ParamLimits

0xda42,	// (0x00021263) cell_ai5_widget_pane_g8_ParamLimits

0xda42,	// (0x00021263) cell_ai5_widget_pane_g8

0xda56,	// (0x00021277) cell_ai5_widget_pane_g9_ParamLimits

0xda56,	// (0x00021277) cell_ai5_widget_pane_g9

0xda6a,	// (0x0002128b) cell_ai5_widget_pane_g10_ParamLimits

0xda6a,	// (0x0002128b) cell_ai5_widget_pane_g10

0x7eaa,	// (0x0001b6cb) status_icon_pane_g1

0xc6ef,	// (0x0001ff10) bg_popup_sub_pane_cp13

0x7eb2,	// (0x0001b6d3) popup_keymap_window_t1

0x1ed4,	// (0x000156f5) control_pane_g6_ParamLimits

0x1ed4,	// (0x000156f5) control_pane_g6

0x1ee1,	// (0x00015702) control_pane_g7_ParamLimits

0x1ee1,	// (0x00015702) control_pane_g7

0x1eee,	// (0x0001570f) control_pane_g8_ParamLimits

0x1eee,	// (0x0001570f) control_pane_g8

0xdc2a,	// (0x0002144b) dt_sta_controll_pane_ParamLimits

0xdc37,	// (0x00021458) dt_sta_indi_pane_ParamLimits

0xdc44,	// (0x00021465) dt_sta_title_pane_ParamLimits

0xccfd,	// (0x0002051e) aid_size_touch_scroll_bar_cale

0xe122,	// (0x00021943) popup_discreet_window_ParamLimits

0xe122,	// (0x00021943) popup_discreet_window

0x93ef,	// (0x0001cc10) popup_sk_window

0x2bea,	// (0x0001640b) bg_popup_sub_pane_cp28_ParamLimits

0x2bea,	// (0x0001640b) bg_popup_sub_pane_cp28

0x7ec0,	// (0x0001b6e1) popup_discreet_window_g1_ParamLimits

0x7ec0,	// (0x0001b6e1) popup_discreet_window_g1

0x7ee0,	// (0x0001b701) popup_discreet_window_t1_ParamLimits

0x7ee0,	// (0x0001b701) popup_discreet_window_t1

0x7efe,	// (0x0001b71f) popup_discreet_window_t2_ParamLimits

0x7efe,	// (0x0001b71f) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x000236ba) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x000236ba) popup_discreet_window_t

0x0476,	// (0x00013c97) popup_sk_window_g1

0x0480,	// (0x00013ca1) popup_sk_window_g2

0x0001,

0xfea0,	// (0x000236c1) popup_sk_window_g

0x0488,	// (0x00013ca9) popup_sk_window_t1

0x0496,	// (0x00013cb7) popup_sk_window_t1_copy1

0xd9dc,	// (0x000211fd) cell_ai5_widget_pane_g2_ParamLimits

0xdb47,	// (0x00021368) cell_ai5_widget_pane_t9_ParamLimits

0xdb47,	// (0x00021368) cell_ai5_widget_pane_t9

0xc6ef,	// (0x0001ff10) main_fep_fshwr2_pane

0xa3cc,	// (0x0001dbed) aid_fshwr2_btn_pane

0xa3e0,	// (0x0001dc01) aid_fshwr2_syb_pane

0xa3f4,	// (0x0001dc15) aid_fshwr2_txt_pane

0xa404,	// (0x0001dc25) fshwr2_func_candi_pane

0xa426,	// (0x0001dc47) fshwr2_hwr_syb_pane

0xa44a,	// (0x0001dc6b) fshwr2_icf_pane

0xe045,	// (0x00021866) fshwr2_icf_bg_pane

0x0542,	// (0x00013d63) fshwr2_icf_pane_t1_ParamLimits

0x0542,	// (0x00013d63) fshwr2_icf_pane_t1

0x1536,	// (0x00014d57) fshwr2_func_candi_pane_g1

0xdcc3,	// (0x000214e4) fshwr2_func_candi_row_pane_ParamLimits

0xdcc3,	// (0x000214e4) fshwr2_func_candi_row_pane

0xa47a,	// (0x0001dc9b) cell_fshwr2_syb_pane_ParamLimits

0xa47a,	// (0x0001dc9b) cell_fshwr2_syb_pane

0x057b,	// (0x00013d9c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x057b,	// (0x00013d9c) fshwr2_hwr_syb_pane_g1

0xe045,	// (0x00021866) bg_popup_call_pane_cp01

0xa4a2,	// (0x0001dcc3) fshwr2_func_candi_cell_pane_ParamLimits

0xa4a2,	// (0x0001dcc3) fshwr2_func_candi_cell_pane

0x29ca,	// (0x000161eb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x29ca,	// (0x000161eb) fshwr2_func_candi_cell_bg_pane

0xa4ed,	// (0x0001dd0e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa4ed,	// (0x0001dd0e) fshwr2_func_candi_cell_pane_g1

0xa524,	// (0x0001dd45) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa524,	// (0x0001dd45) fshwr2_func_candi_cell_pane_t1

0xe045,	// (0x00021866) bg_button_pane_cp08

0x1f2b,	// (0x0001574c) cell_fshwr2_syb_bg_pane

0xa53f,	// (0x0001dd60) cell_fshwr2_syb_bg_pane_g1

0xa553,	// (0x0001dd74) cell_fshwr2_syb_bg_pane_t1

0xe2b0,	// (0x00021ad1) main_tmo_pane

0xb9b1,	// (0x0001f1d2) uni_indicator_pane_g1_ParamLimits

0xb9c7,	// (0x0001f1e8) uni_indicator_pane_g2_ParamLimits

0xb9dd,	// (0x0001f1fe) uni_indicator_pane_g3_ParamLimits

0xb9f0,	// (0x0001f211) uni_indicator_pane_g4_ParamLimits

0xb9f0,	// (0x0001f211) uni_indicator_pane_g4

0x3761,	// (0x00016f82) uni_indicator_pane_g5_ParamLimits

0x3761,	// (0x00016f82) uni_indicator_pane_g5

0x3761,	// (0x00016f82) uni_indicator_pane_g6_ParamLimits

0x3761,	// (0x00016f82) uni_indicator_pane_g6

0xf8f2,	// (0x00023113) uni_indicator_pane_g_ParamLimits

0xcd90,	// (0x000205b1) popup_tmo_note_window_ParamLimits

0xcd90,	// (0x000205b1) popup_tmo_note_window

0xf46e,	// (0x00022c8f) fshwr2_bg_pane

0xa515,	// (0x0001dd36) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa515,	// (0x0001dd36) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x000236c6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x000236c6) fshwr2_func_candi_cell_pane_g

0xf24a,	// (0x00022a6b) bg_popup_window_pane_cp01

0x0642,	// (0x00013e63) bg_popup_window_pane_g1_cp01

0x7f73,	// (0x0001b794) bg_popup_window_pane_cp22_ParamLimits

0x7f73,	// (0x0001b794) bg_popup_window_pane_cp22

0x7f81,	// (0x0001b7a2) listscroll_tmo_link_pane_ParamLimits

0x7f81,	// (0x0001b7a2) listscroll_tmo_link_pane

0x7fc1,	// (0x0001b7e2) popup_tmo_note_window_g1_ParamLimits

0x7fc1,	// (0x0001b7e2) popup_tmo_note_window_g1

0x7fce,	// (0x0001b7ef) tmo_note_info_pane_ParamLimits

0x7fce,	// (0x0001b7ef) tmo_note_info_pane

0xdcea,	// (0x0002150b) list_tmo_note_info_pane_g1_ParamLimits

0xdcea,	// (0x0002150b) list_tmo_note_info_pane_g1

0x7fff,	// (0x0001b820) list_tmo_note_info_pane_g2_ParamLimits

0x7fff,	// (0x0001b820) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x000236cb) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x000236cb) list_tmo_note_info_pane_g

0x801b,	// (0x0001b83c) list_tmo_note_info_text_pane_ParamLimits

0x801b,	// (0x0001b83c) list_tmo_note_info_text_pane

0x80a0,	// (0x0001b8c1) list_tmo_link_pane

0x80ad,	// (0x0001b8ce) scroll_pane_cp20

0x80ba,	// (0x0001b8db) list_single_tmo_link_pane_ParamLimits

0x80ba,	// (0x0001b8db) list_single_tmo_link_pane

0x80ca,	// (0x0001b8eb) list_single_tmo_link_pane_t1

0x80d8,	// (0x0001b8f9) list_tmo_note_info_text_pane_t1_ParamLimits

0x80d8,	// (0x0001b8f9) list_tmo_note_info_text_pane_t1

0xaee8,	// (0x0001e709) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaee8,	// (0x0001e709) aid_size_touch_scroll_bar_cp01

0xae28,	// (0x0001e649) aid_size_touch_slider_marker

0x93df,	// (0x0001cc00) popup_settings_window_ParamLimits

0x93df,	// (0x0001cc00) popup_settings_window

0x1f5f,	// (0x00015780) popup_candi_list_indi_window

0x1fb1,	// (0x000157d2) aid_touch_navi_pane_ParamLimits

0xf3c6,	// (0x00022be7) rs_clock_indi_pane

0xf3cf,	// (0x00022bf0) sctrl_sk_bottom_pane_ParamLimits

0xf3e0,	// (0x00022c01) sctrl_sk_top_pane_ParamLimits

0xf466,	// (0x00022c87) popup_fep_tooltip_window

0xd9a8,	// (0x000211c9) aid_size_cell_widget_grid_ParamLimits

0xd9c7,	// (0x000211e8) cell_ai5_widget_pane_g1_ParamLimits

0xd9c7,	// (0x000211e8) cell_ai5_widget_pane_g1

0xda2a,	// (0x0002124b) cell_ai5_widget_pane_g6_ParamLimits

0xda36,	// (0x00021257) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x0002363f) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0002363f) cell_ai5_widget_pane_g

0xdb76,	// (0x00021397) cell_ai5_widget_pane_t10_ParamLimits

0xdb76,	// (0x00021397) cell_ai5_widget_pane_t10

0xdbb9,	// (0x000213da) grid_ai5_widget_pane_ParamLimits

0xdbe5,	// (0x00021406) cell_contacts_ai5_widget_pane_ParamLimits

0xdbe5,	// (0x00021406) cell_contacts_ai5_widget_pane

0x7f13,	// (0x0001b734) popup_discreet_window_t3_ParamLimits

0x7f13,	// (0x0001b734) popup_discreet_window_t3

0xa466,	// (0x0001dc87) popup_fshwr2_char_preview_window_ParamLimits

0xa466,	// (0x0001dc87) popup_fshwr2_char_preview_window

0xdd01,	// (0x00021522) tmo_note_info_pane_t1

0xdd16,	// (0x00021537) tmo_note_info_pane_t2

0xdd2f,	// (0x00021550) tmo_note_info_pane_t3

0x807c,	// (0x0001b89d) tmo_note_info_pane_t4

0x808e,	// (0x0001b8af) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x000236d0) tmo_note_info_pane_t

0x80a0,	// (0x0001b8c1) list_tmo_link_pane_ParamLimits

0x80ad,	// (0x0001b8ce) scroll_pane_cp20_ParamLimits

0xe045,	// (0x00021866) bg_popup_fep_char_preview_window_cp01

0x80f1,	// (0x0001b912) popup_fshwr2_char_preview_window_t1

0x80ff,	// (0x0001b920) popup_candi_list_indi_window_g1

0x8108,	// (0x0001b929) bg_cell_contacts_ai5_widget_pane

0xdd44,	// (0x00021565) cell_contacts_ai5_widget_pane_g1

0x8129,	// (0x0001b94a) cell_contacts_ai5_widget_pane_g2

0x8135,	// (0x0001b956) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x000236db) cell_contacts_ai5_widget_pane_g

0x8141,	// (0x0001b962) cell_contacts_ai5_widget_pane_t1

0xe2b0,	// (0x00021ad1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81b8,	// (0x0001b9d9) settings_container_pane

0x1bfc,	// (0x0001541d) listscroll_set_pane_copy1

0x43f8,	// (0x00017c19) scroll_pane_cp121_copy1

0x81c4,	// (0x0001b9e5) set_content_pane_copy1

0x81cc,	// (0x0001b9ed) aid_height_set_list_copy1_ParamLimits

0x81cc,	// (0x0001b9ed) aid_height_set_list_copy1

0x3989,	// (0x000171aa) aid_size_parent_copy1_ParamLimits

0x3989,	// (0x000171aa) aid_size_parent_copy1

0x81d8,	// (0x0001b9f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0x81d8,	// (0x0001b9f9) button_value_adjust_pane_cp6_copy1

0x1f2b,	// (0x0001574c) list_highlight_pane_cp2_copy1_ParamLimits

0x1f2b,	// (0x0001574c) list_highlight_pane_cp2_copy1

0x81ec,	// (0x0001ba0d) list_set_pane_copy1_ParamLimits

0x81ec,	// (0x0001ba0d) list_set_pane_copy1

0x8153,	// (0x0001b974) main_pane_set_t1_copy1_ParamLimits

0x8153,	// (0x0001b974) main_pane_set_t1_copy1

0x818d,	// (0x0001b9ae) main_pane_set_t2_copy1_ParamLimits

0x818d,	// (0x0001b9ae) main_pane_set_t2_copy1

0x82ad,	// (0x0001bace) main_pane_set_t3_copy1

0x82bb,	// (0x0001badc) main_pane_set_t4_copy1

0x81ac,	// (0x0001b9cd) set_content_pane_g1_copy1_ParamLimits

0x81ac,	// (0x0001b9cd) set_content_pane_g1_copy1

0x82c9,	// (0x0001baea) setting_code_pane_copy1

0x82d1,	// (0x0001baf2) setting_slider_graphic_pane_copy1

0x82d1,	// (0x0001baf2) setting_slider_pane_copy1

0x82d9,	// (0x0001bafa) setting_text_pane_copy1

0x82d9,	// (0x0001bafa) setting_volume_pane_copy1

0x82c9,	// (0x0001baea) settings_code_pane_cp2_copy1

0x82e1,	// (0x0001bb02) settings_code_pane_cp_copy1_ParamLimits

0x82e1,	// (0x0001bb02) settings_code_pane_cp_copy1

0x064b,	// (0x00013e6c) volume_set_pane_copy1

0x82f5,	// (0x0001bb16) volume_set_pane_g10_copy1

0x8301,	// (0x0001bb22) volume_set_pane_g1_copy1

0x830b,	// (0x0001bb2c) volume_set_pane_g2_copy1

0x8315,	// (0x0001bb36) volume_set_pane_g3_copy1

0x831f,	// (0x0001bb40) volume_set_pane_g4_copy1

0x8329,	// (0x0001bb4a) volume_set_pane_g5_copy1

0x8333,	// (0x0001bb54) volume_set_pane_g6_copy1

0x833d,	// (0x0001bb5e) volume_set_pane_g7_copy1

0x8347,	// (0x0001bb68) volume_set_pane_g8_copy1

0x8351,	// (0x0001bb72) volume_set_pane_g9_copy1

0xc75f,	// (0x0001ff80) bg_set_opt_pane_cp_copy1_ParamLimits

0xc75f,	// (0x0001ff80) bg_set_opt_pane_cp_copy1

0x0657,	// (0x00013e78) setting_slider_pane_t1_copy1_ParamLimits

0x0657,	// (0x00013e78) setting_slider_pane_t1_copy1

0x0676,	// (0x00013e97) setting_slider_pane_t2_copy1_ParamLimits

0x0676,	// (0x00013e97) setting_slider_pane_t2_copy1

0x0690,	// (0x00013eb1) setting_slider_pane_t3_copy1_ParamLimits

0x0690,	// (0x00013eb1) setting_slider_pane_t3_copy1

0x06a8,	// (0x00013ec9) slider_set_pane_copy1_ParamLimits

0x06a8,	// (0x00013ec9) slider_set_pane_copy1

0xe36b,	// (0x00021b8c) set_opt_bg_pane_g1_copy2

0xe373,	// (0x00021b94) set_opt_bg_pane_g2_copy2

0x835d,	// (0x0001bb7e) set_opt_bg_pane_g3_copy2

0xe383,	// (0x00021ba4) set_opt_bg_pane_g4_copy2

0xe38b,	// (0x00021bac) set_opt_bg_pane_g5_copy2

0xe393,	// (0x00021bb4) set_opt_bg_pane_g6_copy2

0x8367,	// (0x0001bb88) set_opt_bg_pane_g7_copy2

0x8371,	// (0x0001bb92) set_opt_bg_pane_g8_copy2

0x837b,	// (0x0001bb9c) set_opt_bg_pane_g9_copy2

0x06be,	// (0x00013edf) aid_size_touch_slider_mark_copy1_ParamLimits

0x06be,	// (0x00013edf) aid_size_touch_slider_mark_copy1

0x8385,	// (0x0001bba6) slider_set_pane_g1_copy1

0x06d2,	// (0x00013ef3) slider_set_pane_g2_copy1

0xeefe,	// (0x0002271f) slider_set_pane_g3_copy1_ParamLimits

0xeefe,	// (0x0002271f) slider_set_pane_g3_copy1

0xef12,	// (0x00022733) slider_set_pane_g4_copy1_ParamLimits

0xef12,	// (0x00022733) slider_set_pane_g4_copy1

0xef2a,	// (0x0002274b) slider_set_pane_g5_copy1_ParamLimits

0xef2a,	// (0x0002274b) slider_set_pane_g5_copy1

0xeefe,	// (0x0002271f) slider_set_pane_g6_copy1_ParamLimits

0xeefe,	// (0x0002271f) slider_set_pane_g6_copy1

0x06da,	// (0x00013efb) slider_set_pane_g7_copy1_ParamLimits

0x06da,	// (0x00013efb) slider_set_pane_g7_copy1

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp2_copy1

0x838e,	// (0x0001bbaf) setting_slider_graphic_pane_g1_copy1

0x8397,	// (0x0001bbb8) setting_slider_graphic_pane_t1_copy1

0x83a7,	// (0x0001bbc8) setting_slider_graphic_pane_t2_copy1

0x83b7,	// (0x0001bbd8) slider_set_pane_cp_copy1

0x83c7,	// (0x0001bbe8) input_focus_pane_cp1_copy1

0x83d0,	// (0x0001bbf1) list_set_text_pane_copy1

0x83d8,	// (0x0001bbf9) setting_text_pane_g1_copy1

0xc784,	// (0x0001ffa5) set_text_pane_t1_copy1

0x83c7,	// (0x0001bbe8) input_focus_pane_cp2_copy1

0x83d8,	// (0x0001bbf9) setting_code_pane_g1_copy1

0x83e1,	// (0x0001bc02) setting_code_pane_t1_copy1

0x41fd,	// (0x00017a1e) list_set_graphic_pane_copy1

0xc703,	// (0x0001ff24) bg_set_opt_pane_cp4_copy1

0x18eb,	// (0x0001510c) list_set_graphic_pane_g1_copy1_ParamLimits

0x18eb,	// (0x0001510c) list_set_graphic_pane_g1_copy1

0x83ef,	// (0x0001bc10) list_set_graphic_pane_g2_copy1

0x1903,	// (0x00015124) list_set_graphic_pane_t1_copy1_ParamLimits

0x1903,	// (0x00015124) list_set_graphic_pane_t1_copy1

0x4fe9,	// (0x0001880a) rs_clock_indi_pane_g1

0x83f7,	// (0x0001bc18) rs_clock_indi_pane_t1

0x8405,	// (0x0001bc26) rs_indi_pane

0x840d,	// (0x0001bc2e) rs_indi_pane_g1

0x8416,	// (0x0001bc37) rs_indi_pane_g2

0x80ff,	// (0x0001b920) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x000236e2) rs_indi_pane_g

0x1bfc,	// (0x0001541d) bg_popup_preview_window_pane_cp03

0x841f,	// (0x0001bc40) popup_fep_tooltip_window_t1

0x5f0b,	// (0x0001972c) popup_note2_window_g2_ParamLimits

0x5f0b,	// (0x0001972c) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x0002346f) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x0002346f) popup_note2_window_g

0x650e,	// (0x00019d2f) bg_popup_sub_pane_cp11_ParamLimits

0x651b,	// (0x00019d3c) cell_ai3_links_pane_g1_ParamLimits

0x6532,	// (0x00019d53) cell_ai3_links_pane_t1

0xc784,	// (0x0001ffa5) set_text_pane_t1_copy1_ParamLimits

0x1afe,	// (0x0001531f) cell_graphic_popup_pane_cp2_ParamLimits

0x1afe,	// (0x0001531f) cell_graphic_popup_pane_cp2

0x842d,	// (0x0001bc4e) cell_graphic_popup_pane_g1_cp2

0xcb10,	// (0x00020331) cell_graphic_popup_pane_g2_cp2

0x8435,	// (0x0001bc56) cell_graphic_popup_pane_g3_cp2

0x843d,	// (0x0001bc5e) cell_graphic_popup_pane_t2_cp2

0xcb21,	// (0x00020342) grid_highlight_pane_cp3_cp2

0xe7eb,	// (0x0002200c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe2b0,	// (0x00021ad1) main_tmo_pane_ParamLimits

0xc6b3,	// (0x0001fed4) popup_tmo_big_image_note_window

0xd9b6,	// (0x000211d7) cell_ai5_widget_list_pane

0xd9be,	// (0x000211df) cell_ai5_widget_lrg_icon_pane

0xdd01,	// (0x00021522) tmo_note_info_pane_t1_ParamLimits

0xdd16,	// (0x00021537) tmo_note_info_pane_t2_ParamLimits

0xdd2f,	// (0x00021550) tmo_note_info_pane_t3_ParamLimits

0x807c,	// (0x0001b89d) tmo_note_info_pane_t4_ParamLimits

0x808e,	// (0x0001b8af) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x000236d0) tmo_note_info_pane_t_ParamLimits

0x81b8,	// (0x0001b9d9) settings_container_pane_ParamLimits

0x83bf,	// (0x0001bbe0) indicator_popup_pane_cp5

0x83bf,	// (0x0001bbe0) indicator_popup_pane_cp6

0x41fd,	// (0x00017a1e) list_set_graphic_pane_copy1_ParamLimits

0xc6ef,	// (0x0001ff10) bg_popup_window_pane_cp23

0x844b,	// (0x0001bc6c) popup_tmo_big_image_note_window_g1

0x8457,	// (0x0001bc78) popup_tmo_big_image_note_window_t1

0x8467,	// (0x0001bc88) popup_tmo_big_image_note_window_t2

0x8477,	// (0x0001bc98) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x000236e9) popup_tmo_big_image_note_window_t

0x4fe9,	// (0x0001880a) cell_ai5_widget_lrg_icon_pane_g1

0xdd59,	// (0x0002157a) cell_ai5_widget_lrg_icon_pane_t1

0xdd67,	// (0x00021588) cell_ai5_widget_list_row_pane_ParamLimits

0xdd67,	// (0x00021588) cell_ai5_widget_list_row_pane

0xdd7f,	// (0x000215a0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdd7f,	// (0x000215a0) cell_ai5_widget_list_row_pane_g1

0xdd8c,	// (0x000215ad) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdd8c,	// (0x000215ad) cell_ai5_widget_list_row_pane_t1

0xddb7,	// (0x000215d8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xddb7,	// (0x000215d8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x000236f0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x000236f0) cell_ai5_widget_list_row_pane_t

0xe045,	// (0x00021866) main_fep_vtchi_ss_pane

0x8535,	// (0x0001bd56) popup_fep_char_pre_window

0x853d,	// (0x0001bd5e) popup_fep_ituss_window

0xde09,	// (0x0002162a) popup_fep_vkbss_window

0x1f2b,	// (0x0001574c) grid_vkbss_keypad_pane_ParamLimits

0x1f2b,	// (0x0001574c) grid_vkbss_keypad_pane

0x85ab,	// (0x0001bdcc) ituss_keypad_pane

0x06fa,	// (0x00013f1b) aid_vkbss_key_offset_ParamLimits

0x06fa,	// (0x00013f1b) aid_vkbss_key_offset

0xa569,	// (0x0001dd8a) cell_vkbss_key_pane_ParamLimits

0xa569,	// (0x0001dd8a) cell_vkbss_key_pane

0x85b7,	// (0x0001bdd8) bg_cell_vkbss_key_g1_ParamLimits

0x85b7,	// (0x0001bdd8) bg_cell_vkbss_key_g1

0xde18,	// (0x00021639) cell_vkbss_key_3p_pane_ParamLimits

0xde18,	// (0x00021639) cell_vkbss_key_3p_pane

0xde4e,	// (0x0002166f) cell_vkbss_key_g1_ParamLimits

0xde4e,	// (0x0002166f) cell_vkbss_key_g1

0xde84,	// (0x000216a5) cell_vkbss_key_t1_ParamLimits

0xde84,	// (0x000216a5) cell_vkbss_key_t1

0x0768,	// (0x00013f89) cell_ituss_key_pane_ParamLimits

0x0768,	// (0x00013f89) cell_ituss_key_pane

0x868b,	// (0x0001beac) bg_cell_ituss_key_g1_ParamLimits

0x868b,	// (0x0001beac) bg_cell_ituss_key_g1

0x8697,	// (0x0001beb8) cell_ituss_key_pane_g1_ParamLimits

0x8697,	// (0x0001beb8) cell_ituss_key_pane_g1

0x0779,	// (0x00013f9a) cell_ituss_key_pane_g2_ParamLimits

0x0779,	// (0x00013f9a) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x000236f7) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x000236f7) cell_ituss_key_pane_g

0x07fd,	// (0x0001401e) cell_ituss_key_t1_ParamLimits

0x07fd,	// (0x0001401e) cell_ituss_key_t1

0x0837,	// (0x00014058) cell_ituss_key_t2_ParamLimits

0x0837,	// (0x00014058) cell_ituss_key_t2

0x0869,	// (0x0001408a) cell_ituss_key_t3_ParamLimits

0x0869,	// (0x0001408a) cell_ituss_key_t3

0x089a,	// (0x000140bb) cell_ituss_key_t4_ParamLimits

0x089a,	// (0x000140bb) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00023704) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00023704) cell_ituss_key_t

0xdee0,	// (0x00021701) cell_vkbss_key_3p_pane_g1

0xdee8,	// (0x00021709) cell_vkbss_key_3p_pane_g2

0xdef0,	// (0x00021711) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0002370f) cell_vkbss_key_3p_pane_g

0x1bfc,	// (0x0001541d) bg_popup_fep_char_preview_window_cp02

0x86d5,	// (0x0001bef6) popup_fep_char_pre_window_t1

0xd995,	// (0x000211b6) main_ai5_sk_pane

0x8108,	// (0x0001b929) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xdd44,	// (0x00021565) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8129,	// (0x0001b94a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8135,	// (0x0001b956) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x000236db) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8141,	// (0x0001b962) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe2b0,	// (0x00021ad1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdef8,	// (0x00021719) main_ai5_sk_pane_g1

0x2a22,	// (0x00016243) popup_query_code_window_g1

0xddfa,	// (0x0002161b) popup_fep_vkb_icf_pane

0x8582,	// (0x0001bda3) popup_fep_vtchi_icf_pane

0x86ec,	// (0x0001bf0d) bg_icf_pane

0x86ec,	// (0x0001bf0d) list_vkb_icf_pane

0x86f8,	// (0x0001bf19) bg_icf_pane_cp01

0x870b,	// (0x0001bf2c) vtchi_icf_list_pane

0xdf4d,	// (0x0002176e) list_vkb_icf_pane_t1_ParamLimits

0xdf4d,	// (0x0002176e) list_vkb_icf_pane_t1

0x8784,	// (0x0001bfa5) vtchi_icf_list_pane_t1_ParamLimits

0x8784,	// (0x0001bfa5) vtchi_icf_list_pane_t1

0x853d,	// (0x0001bd5e) popup_fep_ituss_window_ParamLimits

0x8582,	// (0x0001bda3) popup_fep_vtchi_icf_pane_ParamLimits

0x85ab,	// (0x0001bdcc) ituss_keypad_pane_ParamLimits

0x06f0,	// (0x00013f11) ituss_sks_pane

0x86ec,	// (0x0001bf0d) bg_icf_pane_ParamLimits

0xdddf,	// (0x00021600) icf_edit_indi_pane_ParamLimits

0xdddf,	// (0x00021600) icf_edit_indi_pane

0x86ec,	// (0x0001bf0d) list_vkb_icf_pane_ParamLimits

0x86f8,	// (0x0001bf19) bg_icf_pane_cp01_ParamLimits

0x8528,	// (0x0001bd49) icf_edit_indi_pane_cp01_ParamLimits

0x8528,	// (0x0001bd49) icf_edit_indi_pane_cp01

0x870b,	// (0x0001bf2c) vtchi_query_pane

0x788c,	// (0x0001b0ad) icf_edit_indi_pane_g1_ParamLimits

0x788c,	// (0x0001b0ad) icf_edit_indi_pane_g1

0xdf64,	// (0x00021785) icf_edit_indi_pane_g2_ParamLimits

0xdf64,	// (0x00021785) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0002373a) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0002373a) icf_edit_indi_pane_g

0xdf78,	// (0x00021799) icf_edit_indi_pane_t1

0x879d,	// (0x0001bfbe) bg_input_focus_pane_cp042

0xccf4,	// (0x00020515) vtchi_button_pane

0x87a6,	// (0x0001bfc7) vtchi_query_pane_t1

0x87b4,	// (0x0001bfd5) vtchi_query_pane_t2

0x87c2,	// (0x0001bfe3) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00023729) vtchi_query_pane_t

0xe045,	// (0x00021866) bg_button_pane_cp13

0x87d0,	// (0x0001bff1) vtchi_button_pane_g1

0x08dd,	// (0x000140fe) ituss_sks_pane_g1

0x08e8,	// (0x00014109) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00023730) ituss_sks_pane_g

0x87d8,	// (0x0001bff9) ituss_sks_pane_t1

0x87e6,	// (0x0001c007) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00023735) ituss_sks_pane_t

0x4a6a,	// (0x0001828b) indicator_nsta_pane_cp_g1

0x4a73,	// (0x00018294) indicator_nsta_pane_cp_g2

0x4a7b,	// (0x0001829c) indicator_nsta_pane_cp_g3

0x4a83,	// (0x000182a4) indicator_nsta_pane_cp_g4

0x4a73,	// (0x00018294) indicator_nsta_pane_cp_g5

0x4a7b,	// (0x0001829c) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x000232ad) indicator_nsta_pane_cp_g

0xd79d,	// (0x00020fbe) cell_graphic2_pane_t2_ParamLimits

0xd79d,	// (0x00020fbe) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x000235c6) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x000235c6) cell_graphic2_pane_t

0xd7d5,	// (0x00020ff6) cell_graphic2_control_pane_t1

0xb159,	// (0x0001e97a) signal_pane_g3_ParamLimits

0xb159,	// (0x0001e97a) signal_pane_g3

0xb16d,	// (0x0001e98e) signal_pane_g4_ParamLimits

0xb16d,	// (0x0001e98e) signal_pane_g4

0xddc9,	// (0x000215ea) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xddc9,	// (0x000215ea) cell_ai5_widget_list_row_pane_t3

0x86ab,	// (0x0001becc) cell_ituss_key_pane_t1_ParamLimits

0x86ab,	// (0x0001becc) cell_ituss_key_pane_t1

0x265a,	// (0x00015e7b) form_field_data_wide_pane_vc_t2_ParamLimits

0x265a,	// (0x00015e7b) form_field_data_wide_pane_vc_t2

0x266e,	// (0x00015e8f) form_field_data_wide_pane_vc_t3_ParamLimits

0x266e,	// (0x00015e8f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x00022ffb) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x00022ffb) form_field_data_wide_pane_vc_t

0x4707,	// (0x00017f28) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4707,	// (0x00017f28) form_field_slider_wide_pane_vc_t3

0x47dd,	// (0x00017ffe) form_field_popup_wide_pane_vc_t2_ParamLimits

0x47dd,	// (0x00017ffe) form_field_popup_wide_pane_vc_t2

0x47f4,	// (0x00018015) form_field_popup_wide_pane_vc_t3_ParamLimits

0x47f4,	// (0x00018015) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x0002329c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002329c) form_field_popup_wide_pane_vc_t

0xa3cc,	// (0x0001dbed) aid_fshwr2_btn_pane_ParamLimits

0xa3e0,	// (0x0001dc01) aid_fshwr2_syb_pane_ParamLimits

0xa3f4,	// (0x0001dc15) aid_fshwr2_txt_pane_ParamLimits

0xf46e,	// (0x00022c8f) fshwr2_bg_pane_ParamLimits

0xa404,	// (0x0001dc25) fshwr2_func_candi_pane_ParamLimits

0xa426,	// (0x0001dc47) fshwr2_hwr_syb_pane_ParamLimits

0xa44a,	// (0x0001dc6b) fshwr2_icf_pane_ParamLimits

0x467b,	// (0x00017e9c) list_double_graphic_pane_vc_g4_ParamLimits

0x467b,	// (0x00017e9c) list_double_graphic_pane_vc_g4

0x0799,	// (0x00013fba) cell_ituss_key_pane_g3_ParamLimits

0x0799,	// (0x00013fba) cell_ituss_key_pane_g3

0x08cb,	// (0x000140ec) cell_ituss_key_t5_ParamLimits

0x08cb,	// (0x000140ec) cell_ituss_key_t5

0xde09,	// (0x0002162a) popup_fep_vkbss_window_ParamLimits

0xd99f,	// (0x000211c0) aid_cell_ai5_quarter

0xdf78,	// (0x00021799) icf_edit_indi_pane_t1_ParamLimits

0xc954,	// (0x00020175) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xc954,	// (0x00020175) aid_tch_indicator_popup_pane_cp2

0xc967,	// (0x00020188) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xc967,	// (0x00020188) aid_tch_query_popup_data_pane_cp2

0x29ca,	// (0x000161eb) aid_tch_query_popup_pane_ParamLimits

0x29ca,	// (0x000161eb) aid_tch_query_popup_pane

0x29ca,	// (0x000161eb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x29ca,	// (0x000161eb) aid_tch_query_popup_data_pane_cp1

0x1f2b,	// (0x0001574c) cell_fshwr2_syb_bg_pane_ParamLimits

0xa53f,	// (0x0001dd60) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa553,	// (0x0001dd74) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xddfa,	// (0x0002161b) popup_fep_vkb_icf_pane_ParamLimits

0xa360,	// (0x0001db81) bg_popup_fep_char_preview_window_g10

0xda7e,	// (0x0002129f) cell_ai5_widget_pane_g11_ParamLimits

0xda7e,	// (0x0002129f) cell_ai5_widget_pane_g11

0xda8a,	// (0x000212ab) cell_ai5_widget_pane_g12_ParamLimits

0xda8a,	// (0x000212ab) cell_ai5_widget_pane_g12

0xda96,	// (0x000212b7) cell_ai5_widget_pane_g13_ParamLimits

0xda96,	// (0x000212b7) cell_ai5_widget_pane_g13

0xdb95,	// (0x000213b6) cell_ai5_widget_pane_t11_ParamLimits

0xdb95,	// (0x000213b6) cell_ai5_widget_pane_t11

0xdba7,	// (0x000213c8) cell_ai5_widget_pane_t12_ParamLimits

0xdba7,	// (0x000213c8) cell_ai5_widget_pane_t12

0x07a5,	// (0x00013fc6) cell_ituss_key_pane_g4_ParamLimits

0x07a5,	// (0x00013fc6) cell_ituss_key_pane_g4

0x07c1,	// (0x00013fe2) cell_ituss_key_pane_g5_ParamLimits

0x07c1,	// (0x00013fe2) cell_ituss_key_pane_g5

0x07dd,	// (0x00013ffe) cell_ituss_key_pane_g6_ParamLimits

0x07dd,	// (0x00013ffe) cell_ituss_key_pane_g6

0x24a5,	// (0x00015cc6) bg_icf_pane_g1

0xdf01,	// (0x00021722) bg_icf_pane_g2

0xdf0b,	// (0x0002172c) bg_icf_pane_g3

0xdf13,	// (0x00021734) bg_icf_pane_g4

0xdf1d,	// (0x0002173e) bg_icf_pane_g5

0xdf27,	// (0x00021748) bg_icf_pane_g6

0xdf31,	// (0x00021752) bg_icf_pane_g7

0xdf39,	// (0x0002175a) bg_icf_pane_g8

0xdf43,	// (0x00021764) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00023716) bg_icf_pane_g

0x8598,	// (0x0001bdb9) popup_hyb_candi_window_ParamLimits

0x8598,	// (0x0001bdb9) popup_hyb_candi_window

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp01_ParamLimits

0x25c9,	// (0x00015dea) bg_popup_sub_pane_cp01

0x8821,	// (0x0001c042) entry_hyb_candi_pane_ParamLimits

0x8821,	// (0x0001c042) entry_hyb_candi_pane

0x8830,	// (0x0001c051) grid_hyb_candi_pane_ParamLimits

0x8830,	// (0x0001c051) grid_hyb_candi_pane

0x8845,	// (0x0001c066) grid_hyb_phrase_pane_ParamLimits

0x8845,	// (0x0001c066) grid_hyb_phrase_pane

0x8854,	// (0x0001c075) cell_hyb_candi_pane_ParamLimits

0x8854,	// (0x0001c075) cell_hyb_candi_pane

0xccfd,	// (0x0002051e) cell_hyb_candi_scroll_pane

0x1536,	// (0x00014d57) cell_hyb_candi_pane_g1

0x8870,	// (0x0001c091) cell_hyb_candi_pane_t1

0x887e,	// (0x0001c09f) cell_hyb_phrase_pane

0x1536,	// (0x00014d57) cell_hyb_phrase_pane_g1

0x8887,	// (0x0001c0a8) cell_hyb_phrase_pane_t1

0x8895,	// (0x0001c0b6) entry_hyb_candi_pane_t1

0x1bfc,	// (0x0001541d) input_focus_pane_cp06

0x88a3,	// (0x0001c0c4) cell_hyb_candi_scroll_pane_g1

0x88ab,	// (0x0001c0cc) cell_hyb_candi_scroll_pane_g1_aid

0x88b3,	// (0x0001c0d4) cell_hyb_candi_scroll_pane_g2

0x88bb,	// (0x0001c0dc) cell_hyb_candi_scroll_pane_g2_aid

0x88c3,	// (0x0001c0e4) cell_hyb_candi_scroll_pane_g3

0x88cb,	// (0x0001c0ec) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

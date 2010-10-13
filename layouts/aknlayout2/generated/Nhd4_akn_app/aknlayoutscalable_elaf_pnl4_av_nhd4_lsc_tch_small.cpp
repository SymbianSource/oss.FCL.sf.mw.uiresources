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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00027857 };

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
0x8d53,	// (0x000305aa) Screen

0x8d5f,	// (0x000305b6) application_window_ParamLimits

0x8d5f,	// (0x000305b6) application_window

0xc283,	// (0x00033ada) screen_g1

0x8d97,	// (0x000305ee) area_bottom_pane_ParamLimits

0x8d97,	// (0x000305ee) area_bottom_pane

0x8e55,	// (0x000306ac) area_top_pane_ParamLimits

0x8e55,	// (0x000306ac) area_top_pane

0x8ee9,	// (0x00030740) main_pane_ParamLimits

0x8ee9,	// (0x00030740) main_pane

0xc28d,	// (0x00033ae4) misc_graphics

0xa682,	// (0x00031ed9) battery_pane_ParamLimits

0xa682,	// (0x00031ed9) battery_pane

0x29a5,	// (0x0002a1fc) bg_status_flat_pane_g8

0x29ad,	// (0x0002a204) bg_status_flat_pane_g9

0x08ac,	// (0x00028103) context_pane_ParamLimits

0x08ac,	// (0x00028103) context_pane

0xa7ed,	// (0x00032044) navi_pane_ParamLimits

0xa7ed,	// (0x00032044) navi_pane

0xa86b,	// (0x000320c2) signal_pane_ParamLimits

0xa86b,	// (0x000320c2) signal_pane

0x0008,

0xf840,	// (0x00037097) bg_status_flat_pane_g

0xa8fb,	// (0x00032152) status_pane_g1_ParamLimits

0xa8fb,	// (0x00032152) status_pane_g1

0xa911,	// (0x00032168) status_pane_g2_ParamLimits

0xa911,	// (0x00032168) status_pane_g2

0x0ad3,	// (0x0002832a) status_pane_g3_ParamLimits

0x0ad3,	// (0x0002832a) status_pane_g3

0x0004,

0xf76c,	// (0x00036fc3) status_pane_g_ParamLimits

0xf76c,	// (0x00036fc3) status_pane_g

0xa91d,	// (0x00032174) title_pane_ParamLimits

0xa91d,	// (0x00032174) title_pane

0xa980,	// (0x000321d7) uni_indicator_pane_ParamLimits

0xa980,	// (0x000321d7) uni_indicator_pane

0xd0c7,	// (0x0003491e) bg_list_pane_ParamLimits

0xd0c7,	// (0x0003491e) bg_list_pane

0x9e70,	// (0x000316c7) find_pane

0x0d8f,	// (0x000285e6) listscroll_app_pane_ParamLimits

0x0d8f,	// (0x000285e6) listscroll_app_pane

0xd0e7,	// (0x0003493e) listscroll_form_pane

0x9e78,	// (0x000316cf) listscroll_gen_pane_ParamLimits

0x9e78,	// (0x000316cf) listscroll_gen_pane

0x01c5,	// (0x00027a1c) listscroll_set_pane

0x3509,	// (0x0002ad60) main_idle_act_pane

0xcf5b,	// (0x000347b2) main_idle_trad_pane

0xcf5b,	// (0x000347b2) main_list_empty_pane

0xc7e1,	// (0x00034038) main_midp_pane

0xd101,	// (0x00034958) main_pane_g1_ParamLimits

0xd101,	// (0x00034958) main_pane_g1

0x9e8c,	// (0x000316e3) popup_ai_message_window_ParamLimits

0x9e8c,	// (0x000316e3) popup_ai_message_window

0x9f3d,	// (0x00031794) popup_fep_china_uni_window_ParamLimits

0x9f3d,	// (0x00031794) popup_fep_china_uni_window

0x9f97,	// (0x000317ee) popup_fep_japan_candidate_window_ParamLimits

0x9f97,	// (0x000317ee) popup_fep_japan_candidate_window

0x9fb5,	// (0x0003180c) popup_fep_japan_predictive_window_ParamLimits

0x9fb5,	// (0x0003180c) popup_fep_japan_predictive_window

0x9fc7,	// (0x0003181e) popup_find_window

0x9fe4,	// (0x0003183b) popup_grid_graphic_window_ParamLimits

0x9fe4,	// (0x0003183b) popup_grid_graphic_window

0x0350,	// (0x00027ba7) popup_large_graphic_colour_window

0xa082,	// (0x000318d9) popup_menu_window_ParamLimits

0xa082,	// (0x000318d9) popup_menu_window

0xa254,	// (0x00031aab) popup_note_image_window

0xa21a,	// (0x00031a71) popup_note_wait_window_ParamLimits

0xa21a,	// (0x00031a71) popup_note_wait_window

0xa26c,	// (0x00031ac3) popup_note_window_ParamLimits

0xa26c,	// (0x00031ac3) popup_note_window

0xa31b,	// (0x00031b72) popup_query_code_window_ParamLimits

0xa31b,	// (0x00031b72) popup_query_code_window

0xa355,	// (0x00031bac) popup_query_data_code_window_ParamLimits

0xa355,	// (0x00031bac) popup_query_data_code_window

0xa372,	// (0x00031bc9) popup_query_data_window_ParamLimits

0xa372,	// (0x00031bc9) popup_query_data_window

0xa3f4,	// (0x00031c4b) popup_query_sat_info_window_ParamLimits

0xa3f4,	// (0x00031c4b) popup_query_sat_info_window

0xa48b,	// (0x00031ce2) popup_snote_single_graphic_window_ParamLimits

0xa48b,	// (0x00031ce2) popup_snote_single_graphic_window

0xa48b,	// (0x00031ce2) popup_snote_single_text_window_ParamLimits

0xa48b,	// (0x00031ce2) popup_snote_single_text_window

0x0623,	// (0x00027e7a) popup_sub_window_general

0xa5e8,	// (0x00031e3f) popup_window_general_ParamLimits

0xa5e8,	// (0x00031e3f) popup_window_general

0x0768,	// (0x00027fbf) power_save_pane

0x9cca,	// (0x00031521) control_pane_g1_ParamLimits

0x9cca,	// (0x00031521) control_pane_g1

0x9cf3,	// (0x0003154a) control_pane_g2_ParamLimits

0x9cf3,	// (0x0003154a) control_pane_g2

0xd0b1,	// (0x00034908) control_pane_g3_ParamLimits

0xd0b1,	// (0x00034908) control_pane_g3

0x0007,

0xf754,	// (0x00036fab) control_pane_g_ParamLimits

0xf754,	// (0x00036fab) control_pane_g

0x9d5b,	// (0x000315b2) control_pane_t1_ParamLimits

0x9d5b,	// (0x000315b2) control_pane_t1

0x9dc3,	// (0x0003161a) control_pane_t2_ParamLimits

0x9dc3,	// (0x0003161a) control_pane_t2

0x0002,

0xf765,	// (0x00036fbc) control_pane_t_ParamLimits

0xf765,	// (0x00036fbc) control_pane_t

0x9c41,	// (0x00031498) navi_navi_volume_pane_cp1

0x9c49,	// (0x000314a0) status_small_icon_pane

0xd05d,	// (0x000348b4) status_small_pane_g1_ParamLimits

0xd05d,	// (0x000348b4) status_small_pane_g1

0x9c51,	// (0x000314a8) status_small_pane_g2_ParamLimits

0x9c51,	// (0x000314a8) status_small_pane_g2

0xd091,	// (0x000348e8) status_small_pane_g3_ParamLimits

0xd091,	// (0x000348e8) status_small_pane_g3

0x9c5d,	// (0x000314b4) status_small_pane_g4_ParamLimits

0x9c5d,	// (0x000314b4) status_small_pane_g4

0x9c6b,	// (0x000314c2) status_small_pane_g5_ParamLimits

0x9c6b,	// (0x000314c2) status_small_pane_g5

0x9c79,	// (0x000314d0) status_small_pane_g6_ParamLimits

0x9c79,	// (0x000314d0) status_small_pane_g6

0x0007,

0xf743,	// (0x00036f9a) status_small_pane_g_ParamLimits

0xf743,	// (0x00036f9a) status_small_pane_g

0x9c94,	// (0x000314eb) status_small_pane_t1

0x9cb6,	// (0x0003150d) status_small_wait_pane_ParamLimits

0x9cb6,	// (0x0003150d) status_small_wait_pane

0x99b4,	// (0x0003120b) aid_levels_signal_ParamLimits

0x99b4,	// (0x0003120b) aid_levels_signal

0x99cc,	// (0x00031223) signal_pane_g1_ParamLimits

0x99cc,	// (0x00031223) signal_pane_g1

0x99e7,	// (0x0003123e) signal_pane_g2_ParamLimits

0x99e7,	// (0x0003123e) signal_pane_g2

0x0003,

0xf6d4,	// (0x00036f2b) signal_pane_g_ParamLimits

0xf6d4,	// (0x00036f2b) signal_pane_g

0xcb49,	// (0x000343a0) context_pane_g1

0x90e4,	// (0x0003093b) title_pane_g1

0x911b,	// (0x00030972) title_pane_t1

0xc2a3,	// (0x00033afa) title_pane_t2

0xc2c9,	// (0x00033b20) title_pane_t3

0x0002,

0xf532,	// (0x00036d89) title_pane_t

0xa9a8,	// (0x000321ff) aid_levels_battery_ParamLimits

0xa9a8,	// (0x000321ff) aid_levels_battery

0xa9c4,	// (0x0003221b) battery_pane_g1_ParamLimits

0xa9c4,	// (0x0003221b) battery_pane_g1

0xa9e1,	// (0x00032238) battery_pane_g2_ParamLimits

0xa9e1,	// (0x00032238) battery_pane_g2

0x0001,

0xf777,	// (0x00036fce) battery_pane_g_ParamLimits

0xf777,	// (0x00036fce) battery_pane_g

0xb057,	// (0x000328ae) uni_indicator_pane_g1

0xb06d,	// (0x000328c4) uni_indicator_pane_g2

0xb083,	// (0x000328da) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x0003713f) uni_indicator_pane_g

0xcdf2,	// (0x00034649) navi_icon_pane_ParamLimits

0xcdf2,	// (0x00034649) navi_icon_pane

0xcd3b,	// (0x00034592) navi_midp_pane

0xce0e,	// (0x00034665) navi_navi_pane

0xce18,	// (0x0003466f) navi_text_pane_ParamLimits

0xce18,	// (0x0003466f) navi_text_pane

0xc283,	// (0x00033ada) status_small_wait_pane_g1

0xc51a,	// (0x00033d71) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0003713a) status_small_wait_pane_g

0xafb0,	// (0x00032807) navi_navi_icon_text_pane

0x2ff8,	// (0x0002a84f) navi_navi_pane_g1_ParamLimits

0x2ff8,	// (0x0002a84f) navi_navi_pane_g1

0x300a,	// (0x0002a861) navi_navi_pane_g2_ParamLimits

0x300a,	// (0x0002a861) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00037108) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00037108) navi_navi_pane_g

0x301c,	// (0x0002a873) navi_navi_tabs_pane

0x3025,	// (0x0002a87c) navi_navi_text_pane

0xafb0,	// (0x00032807) navi_navi_volume_pane

0x2fcc,	// (0x0002a823) navi_text_pane_t1

0x2fc0,	// (0x0002a817) navi_icon_pane_g1

0x2f13,	// (0x0002a76a) navi_navi_text_pane_t1

0xaf9c,	// (0x000327f3) navi_navi_volume_pane_g1

0x16e5,	// (0x00028f3c) volume_small_pane

0x2e79,	// (0x0002a6d0) navi_navi_icon_text_pane_g1

0xaf00,	// (0x00032757) navi_navi_icon_text_pane_t1

0xce0e,	// (0x00034665) navi_tabs_2_long_pane

0xce0e,	// (0x00034665) navi_tabs_2_pane

0xce0e,	// (0x00034665) navi_tabs_3_long_pane

0xce0e,	// (0x00034665) navi_tabs_3_pane

0xce0e,	// (0x00034665) navi_tabs_4_pane

0x16bd,	// (0x00028f14) tabs_2_active_pane_ParamLimits

0x16bd,	// (0x00028f14) tabs_2_active_pane

0x16cd,	// (0x00028f24) tabs_2_passive_pane_ParamLimits

0x16cd,	// (0x00028f24) tabs_2_passive_pane

0x168b,	// (0x00028ee2) tabs_3_active_pane_ParamLimits

0x168b,	// (0x00028ee2) tabs_3_active_pane

0x169b,	// (0x00028ef2) tabs_3_passive_pane_ParamLimits

0x169b,	// (0x00028ef2) tabs_3_passive_pane

0x16ac,	// (0x00028f03) tabs_3_passive_pane_cp_ParamLimits

0x16ac,	// (0x00028f03) tabs_3_passive_pane_cp

0x1647,	// (0x00028e9e) tabs_4_active_pane_ParamLimits

0x1647,	// (0x00028e9e) tabs_4_active_pane

0x1658,	// (0x00028eaf) tabs_4_passive_pane_ParamLimits

0x1658,	// (0x00028eaf) tabs_4_passive_pane

0x1669,	// (0x00028ec0) tabs_4_passive_pane_cp_ParamLimits

0x1669,	// (0x00028ec0) tabs_4_passive_pane_cp

0x167a,	// (0x00028ed1) tabs_4_passive_pane_cp2_ParamLimits

0x167a,	// (0x00028ed1) tabs_4_passive_pane_cp2

0x1623,	// (0x00028e7a) tabs_2_long_active_pane_ParamLimits

0x1623,	// (0x00028e7a) tabs_2_long_active_pane

0x1635,	// (0x00028e8c) tabs_2_long_passive_pane_ParamLimits

0x1635,	// (0x00028e8c) tabs_2_long_passive_pane

0x15de,	// (0x00028e35) tabs_3_long_active_pane_ParamLimits

0x15de,	// (0x00028e35) tabs_3_long_active_pane

0x15f7,	// (0x00028e4e) tabs_3_long_passive_pane_ParamLimits

0x15f7,	// (0x00028e4e) tabs_3_long_passive_pane

0x160a,	// (0x00028e61) tabs_3_long_passive_pane_cp_ParamLimits

0x160a,	// (0x00028e61) tabs_3_long_passive_pane_cp

0x1584,	// (0x00028ddb) volume_small_pane_g1

0x158d,	// (0x00028de4) volume_small_pane_g2

0x1596,	// (0x00028ded) volume_small_pane_g3

0x159f,	// (0x00028df6) volume_small_pane_g4

0x15a8,	// (0x00028dff) volume_small_pane_g5

0x15b1,	// (0x00028e08) volume_small_pane_g6

0x15ba,	// (0x00028e11) volume_small_pane_g7

0x15c3,	// (0x00028e1a) volume_small_pane_g8

0x15cc,	// (0x00028e23) volume_small_pane_g9

0x15d5,	// (0x00028e2c) volume_small_pane_g10

0x0009,

0xf87d,	// (0x000370d4) volume_small_pane_g

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp2_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp2

0x91a7,	// (0x000309fe) tabs_3_active_pane_g1

0x91af,	// (0x00030a06) tabs_3_active_pane_t1

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp2_ParamLimits

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp2

0x91a7,	// (0x000309fe) tabs_3_passive_pane_g1

0x91af,	// (0x00030a06) tabs_3_passive_pane_t1

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp3_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp3

0x91c1,	// (0x00030a18) tabs_4_active_pane_g1

0x91c9,	// (0x00030a20) tabs_4_active_pane_t1

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp3_ParamLimits

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp3

0x91c1,	// (0x00030a18) tabs_4_1_passive_pane_g1

0x91c9,	// (0x00030a20) tabs_4_1_passive_pane_t1

0xc7e1,	// (0x00034038) list_highlight_pane_cp2

0xb24d,	// (0x00032aa4) list_set_pane_ParamLimits

0xb24d,	// (0x00032aa4) list_set_pane

0xb2e7,	// (0x00032b3e) main_pane_set_t1_ParamLimits

0xb2e7,	// (0x00032b3e) main_pane_set_t1

0xb307,	// (0x00032b5e) main_pane_set_t2_ParamLimits

0xb307,	// (0x00032b5e) main_pane_set_t2

0xb31b,	// (0x00032b72) main_pane_set_t3_ParamLimits

0xb31b,	// (0x00032b72) main_pane_set_t3

0xb32d,	// (0x00032b84) main_pane_set_t4_ParamLimits

0xb32d,	// (0x00032b84) main_pane_set_t4

0x0003,

0xf94d,	// (0x000371a4) main_pane_set_t_ParamLimits

0xf94d,	// (0x000371a4) main_pane_set_t

0xb33f,	// (0x00032b96) setting_code_pane

0xb349,	// (0x00032ba0) setting_slider_graphic_pane

0xb349,	// (0x00032ba0) setting_slider_pane

0xb349,	// (0x00032ba0) setting_text_pane

0xb349,	// (0x00032ba0) setting_volume_pane

0x91db,	// (0x00030a32) volume_set_pane

0xc2e9,	// (0x00033b40) bg_set_opt_pane_cp

0x91e3,	// (0x00030a3a) setting_slider_pane_t1

0x91fc,	// (0x00030a53) setting_slider_pane_t2

0x9216,	// (0x00030a6d) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00036d90) setting_slider_pane_t

0x922e,	// (0x00030a85) slider_set_pane

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp2

0xc2f7,	// (0x00033b4e) setting_slider_graphic_pane_g1

0x9244,	// (0x00030a9b) setting_slider_graphic_pane_t1

0x9254,	// (0x00030aab) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00036d97) setting_slider_graphic_pane_t

0x9264,	// (0x00030abb) slider_set_pane_cp

0xc28d,	// (0x00033ae4) input_focus_pane_cp1

0x34f0,	// (0x0002ad47) list_set_text_pane

0xc283,	// (0x00033ada) setting_text_pane_g1

0xc28d,	// (0x00033ae4) input_focus_pane_cp2

0xc283,	// (0x00033ada) setting_code_pane_g1

0xc300,	// (0x00033b57) setting_code_pane_t1

0xe807,	// (0x0003605e) set_text_pane_t1_ParamLimits

0xe807,	// (0x0003605e) set_text_pane_t1

0xc6f7,	// (0x00033f4e) set_opt_bg_pane_g1

0xc6ff,	// (0x00033f56) set_opt_bg_pane_g2

0xb202,	// (0x00032a59) set_opt_bg_pane_g3

0xc70f,	// (0x00033f66) set_opt_bg_pane_g4

0xc717,	// (0x00033f6e) set_opt_bg_pane_g5

0xc71f,	// (0x00033f76) set_opt_bg_pane_g6

0xb20c,	// (0x00032a63) set_opt_bg_pane_g7

0xb214,	// (0x00032a6b) set_opt_bg_pane_g8

0xb21e,	// (0x00032a75) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00037191) set_opt_bg_pane_g

0xb19d,	// (0x000329f4) slider_set_pane_g1

0x1752,	// (0x00028fa9) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00037182) slider_set_pane_g

0xb0c2,	// (0x00032919) volume_set_pane_g1

0xb0ca,	// (0x00032921) volume_set_pane_g2

0xb0d2,	// (0x00032929) volume_set_pane_g3

0xb0da,	// (0x00032931) volume_set_pane_g4

0xb0e2,	// (0x00032939) volume_set_pane_g5

0xb0ea,	// (0x00032941) volume_set_pane_g6

0xb0f2,	// (0x00032949) volume_set_pane_g7

0xb0fa,	// (0x00032951) volume_set_pane_g8

0xb102,	// (0x00032959) volume_set_pane_g9

0xb10a,	// (0x00032961) volume_set_pane_g10

0x0009,

0xf903,	// (0x0003715a) volume_set_pane_g

0x926c,	// (0x00030ac3) indicator_pane_ParamLimits

0x926c,	// (0x00030ac3) indicator_pane

0x9294,	// (0x00030aeb) main_idle_pane_g2_ParamLimits

0x9294,	// (0x00030aeb) main_idle_pane_g2

0x92cc,	// (0x00030b23) main_pane_idle_g1_ParamLimits

0x92cc,	// (0x00030b23) main_pane_idle_g1

0xc30e,	// (0x00033b65) popup_clock_digital_analogue_window_ParamLimits

0xc30e,	// (0x00033b65) popup_clock_digital_analogue_window

0x92f3,	// (0x00030b4a) soft_indicator_pane_ParamLimits

0x92f3,	// (0x00030b4a) soft_indicator_pane

0x9317,	// (0x00030b6e) wallpaper_pane_ParamLimits

0x9317,	// (0x00030b6e) wallpaper_pane

0xc283,	// (0x00033ada) wallpaper_pane_g1

0x9329,	// (0x00030b80) indicator_pane_g1_ParamLimits

0x9329,	// (0x00030b80) indicator_pane_g1

0x3903,	// (0x0002b15a) navi_navi_icon_text_pane_srt_g1

0xc33c,	// (0x00033b93) soft_indicator_pane_t1

0xc356,	// (0x00033bad) aid_ps_area_pane

0x933f,	// (0x00030b96) aid_ps_clock_pane

0xc367,	// (0x00033bbe) aid_ps_indicator_pane

0xc373,	// (0x00033bca) indicator_ps_pane_ParamLimits

0xc373,	// (0x00033bca) indicator_ps_pane

0xc382,	// (0x00033bd9) power_save_pane_g1_ParamLimits

0xc382,	// (0x00033bd9) power_save_pane_g1

0xc38e,	// (0x00033be5) power_save_pane_g2_ParamLimits

0xc38e,	// (0x00033be5) power_save_pane_g2

0xe7c7,	// (0x0003601e) aid_navinavi_width_pane

0xc356,	// (0x00033bad) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00036d9c) power_save_pane_g_ParamLimits

0xf545,	// (0x00036d9c) power_save_pane_g

0xc39c,	// (0x00033bf3) power_save_pane_t1_ParamLimits

0xc39c,	// (0x00033bf3) power_save_pane_t1

0x933f,	// (0x00030b96) aid_ps_clock_pane_ParamLimits

0xc367,	// (0x00033bbe) aid_ps_indicator_pane_ParamLimits

0xc3ae,	// (0x00033c05) power_save_pane_t4_ParamLimits

0xc3ae,	// (0x00033c05) power_save_pane_t4

0x0001,

0xf54a,	// (0x00036da1) power_save_pane_t_ParamLimits

0xf54a,	// (0x00036da1) power_save_pane_t

0xc3d8,	// (0x00033c2f) power_save_t3_ParamLimits

0xc3d8,	// (0x00033c2f) power_save_t3

0xc3c3,	// (0x00033c1a) power_save_t2_ParamLimits

0xc3c3,	// (0x00033c1a) power_save_t2

0xc3ed,	// (0x00033c44) indicator_ps_pane_g1

0x934d,	// (0x00030ba4) ai_gene_pane_ParamLimits

0x934d,	// (0x00030ba4) ai_gene_pane

0x9364,	// (0x00030bbb) ai_links_pane_ParamLimits

0x9364,	// (0x00030bbb) ai_links_pane

0x937c,	// (0x00030bd3) indicator_pane_cp1_ParamLimits

0x937c,	// (0x00030bd3) indicator_pane_cp1

0x938b,	// (0x00030be2) main_pane_idle_g1_cp_ParamLimits

0x938b,	// (0x00030be2) main_pane_idle_g1_cp

0x93a3,	// (0x00030bfa) popup_ai_links_title_window

0x93ac,	// (0x00030c03) soft_indicator_pane_cp1_ParamLimits

0x93ac,	// (0x00030c03) soft_indicator_pane_cp1

0x32b7,	// (0x0002ab0e) ai_links_pane_g1

0x32c0,	// (0x0002ab17) grid_ai_links_pane

0xb04e,	// (0x000328a5) ai_gene_pane_1

0x32a5,	// (0x0002aafc) ai_gene_pane_2

0x32ae,	// (0x0002ab05) list_highlight_pane_cp4

0xb02a,	// (0x00032881) cell_ai_link_pane_ParamLimits

0xb02a,	// (0x00032881) cell_ai_link_pane

0x3276,	// (0x0002aacd) cell_ai_link_pane_g1

0xc51a,	// (0x00033d71) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00037135) cell_ai_link_pane_g

0xc28d,	// (0x00033ae4) grid_highlight_cp2

0xc28d,	// (0x00033ae4) bg_popup_sub_pane_cp1

0xc404,	// (0x00033c5b) popup_ai_links_title_window_t1

0x31c6,	// (0x0002aa1d) ai_gene_pane_1_g1_ParamLimits

0x31c6,	// (0x0002aa1d) ai_gene_pane_1_g1

0x31d2,	// (0x0002aa29) ai_gene_pane_1_g2_ParamLimits

0x31d2,	// (0x0002aa29) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0003712b) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0003712b) ai_gene_pane_1_g

0x31df,	// (0x0002aa36) ai_gene_pane_1_t1_ParamLimits

0x31df,	// (0x0002aa36) ai_gene_pane_1_t1

0x3213,	// (0x0002aa6a) grid_ai_soft_ind_pane

0x31b1,	// (0x0002aa08) ai_gene_pane_2_t1_ParamLimits

0x31b1,	// (0x0002aa08) ai_gene_pane_2_t1

0x93c0,	// (0x00030c17) main_pane_empty_t1_ParamLimits

0x93c0,	// (0x00030c17) main_pane_empty_t1

0x93d8,	// (0x00030c2f) main_pane_empty_t2_ParamLimits

0x93d8,	// (0x00030c2f) main_pane_empty_t2

0x93ed,	// (0x00030c44) main_pane_empty_t3_ParamLimits

0x93ed,	// (0x00030c44) main_pane_empty_t3

0x93ff,	// (0x00030c56) main_pane_empty_t4_ParamLimits

0x93ff,	// (0x00030c56) main_pane_empty_t4

0x9411,	// (0x00030c68) main_pane_empty_t5_ParamLimits

0x9411,	// (0x00030c68) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00036da6) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00036da6) main_pane_empty_t

0xc77c,	// (0x00033fd3) bg_popup_window_pane_ParamLimits

0xc77c,	// (0x00033fd3) bg_popup_window_pane

0xafa4,	// (0x000327fb) find_popup_pane_cp2_ParamLimits

0xafa4,	// (0x000327fb) find_popup_pane_cp2

0x2f2d,	// (0x0002a784) heading_pane_ParamLimits

0x2f2d,	// (0x0002a784) heading_pane

0xc28d,	// (0x00033ae4) bg_popup_sub_pane

0xaf1d,	// (0x00032774) bg_popup_window_pane_g1_ParamLimits

0xaf1d,	// (0x00032774) bg_popup_window_pane_g1

0xaf2c,	// (0x00032783) bg_popup_window_pane_g2_ParamLimits

0xaf2c,	// (0x00032783) bg_popup_window_pane_g2

0xaf38,	// (0x0003278f) bg_popup_window_pane_g3_ParamLimits

0xaf38,	// (0x0003278f) bg_popup_window_pane_g3

0xaf44,	// (0x0003279b) bg_popup_window_pane_g4_ParamLimits

0xaf44,	// (0x0003279b) bg_popup_window_pane_g4

0xaf53,	// (0x000327aa) bg_popup_window_pane_g5_ParamLimits

0xaf53,	// (0x000327aa) bg_popup_window_pane_g5

0xaf63,	// (0x000327ba) bg_popup_window_pane_g6_ParamLimits

0xaf63,	// (0x000327ba) bg_popup_window_pane_g6

0xaf6f,	// (0x000327c6) bg_popup_window_pane_g7_ParamLimits

0xaf6f,	// (0x000327c6) bg_popup_window_pane_g7

0xaf7e,	// (0x000327d5) bg_popup_window_pane_g8_ParamLimits

0xaf7e,	// (0x000327d5) bg_popup_window_pane_g8

0xaf8d,	// (0x000327e4) bg_popup_window_pane_g9_ParamLimits

0xaf8d,	// (0x000327e4) bg_popup_window_pane_g9

0x2f07,	// (0x0002a75e) bg_popup_window_pane_g10_ParamLimits

0x2f07,	// (0x0002a75e) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x000370f3) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x000370f3) bg_popup_window_pane_g

0x2e30,	// (0x0002a687) bg_popup_heading_pane_ParamLimits

0x2e30,	// (0x0002a687) bg_popup_heading_pane

0x17da,	// (0x00029031) tabs_4_passive_pane_cp_srt_ParamLimits

0x17da,	// (0x00029031) tabs_4_passive_pane_cp_srt

0x17ec,	// (0x00029043) tabs_4_passive_pane_srt_ParamLimits

0x2e44,	// (0x0002a69b) heading_pane_g2

0x17ec,	// (0x00029043) tabs_4_passive_pane_srt

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp3_srt

0x2e4c,	// (0x0002a6a3) heading_pane_t1_ParamLimits

0x2e4c,	// (0x0002a6a3) heading_pane_t1

0x2e63,	// (0x0002a6ba) heading_pane_t2_ParamLimits

0x2e63,	// (0x0002a6ba) heading_pane_t2

0x0001,

0xf897,	// (0x000370ee) heading_pane_t_ParamLimits

0xf897,	// (0x000370ee) heading_pane_t

0x296d,	// (0x0002a1c4) bg_popup_heading_pane_g1

0x2a1c,	// (0x0002a273) bg_popup_heading_pane_g2

0x2a26,	// (0x0002a27d) bg_popup_heading_pane_g3

0x2a30,	// (0x0002a287) bg_popup_heading_pane_g4

0x2a3a,	// (0x0002a291) bg_popup_heading_pane_g5

0x2a44,	// (0x0002a29b) bg_popup_heading_pane_g6

0x2a4c,	// (0x0002a2a3) bg_popup_heading_pane_g7

0x2a54,	// (0x0002a2ab) bg_popup_heading_pane_g8

0x2a5e,	// (0x0002a2b5) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x000370aa) bg_popup_heading_pane_g

0x0c8b,	// (0x000284e2) bg_popup_sub_pane_g1

0x0c93,	// (0x000284ea) bg_popup_sub_pane_g2

0x0c9b,	// (0x000284f2) bg_popup_sub_pane_g3

0x0ca3,	// (0x000284fa) bg_popup_sub_pane_g4

0x0cab,	// (0x00028502) bg_popup_sub_pane_g5

0x0cb3,	// (0x0002850a) bg_popup_sub_pane_g6

0x0cbb,	// (0x00028512) bg_popup_sub_pane_g7

0x0cc3,	// (0x0002851a) bg_popup_sub_pane_g8

0x0ccb,	// (0x00028522) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00037084) bg_popup_sub_pane_g

0xc2db,	// (0x00033b32) bg_popup_window_pane_cp5_ParamLimits

0xc2db,	// (0x00033b32) bg_popup_window_pane_cp5

0xc421,	// (0x00033c78) popup_note_window_g1_ParamLimits

0xc421,	// (0x00033c78) popup_note_window_g1

0xc42d,	// (0x00033c84) popup_note_window_t1_ParamLimits

0xc42d,	// (0x00033c84) popup_note_window_t1

0xc443,	// (0x00033c9a) popup_note_window_t2_ParamLimits

0xc443,	// (0x00033c9a) popup_note_window_t2

0xc459,	// (0x00033cb0) popup_note_window_t3_ParamLimits

0xc459,	// (0x00033cb0) popup_note_window_t3

0xc46f,	// (0x00033cc6) popup_note_window_t4_ParamLimits

0xc46f,	// (0x00033cc6) popup_note_window_t4

0xc497,	// (0x00033cee) popup_note_window_t5_ParamLimits

0xc497,	// (0x00033cee) popup_note_window_t5

0x0004,

0xf55a,	// (0x00036db1) popup_note_window_t_ParamLimits

0xf55a,	// (0x00036db1) popup_note_window_t

0xc4bb,	// (0x00033d12) bg_popup_window_pane_cp6_ParamLimits

0xc4bb,	// (0x00033d12) bg_popup_window_pane_cp6

0x1546,	// (0x00028d9d) popup_note_image_window_g1_ParamLimits

0x1546,	// (0x00028d9d) popup_note_image_window_g1

0xadc2,	// (0x00032619) popup_note_image_window_g2_ParamLimits

0xadc2,	// (0x00032619) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00037078) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00037078) popup_note_image_window_g

0x156b,	// (0x00028dc2) popup_note_image_window_t1_ParamLimits

0x156b,	// (0x00028dc2) popup_note_image_window_t1

0x2927,	// (0x0002a17e) popup_note_image_window_t2_ParamLimits

0x2927,	// (0x0002a17e) popup_note_image_window_t2

0x2940,	// (0x0002a197) popup_note_image_window_t3_ParamLimits

0x2940,	// (0x0002a197) popup_note_image_window_t3

0x0002,

0xf826,	// (0x0003707d) popup_note_image_window_t_ParamLimits

0xf826,	// (0x0003707d) popup_note_image_window_t

0x140f,	// (0x00028c66) bg_popup_window_pane_cp7_ParamLimits

0x140f,	// (0x00028c66) bg_popup_window_pane_cp7

0x143f,	// (0x00028c96) popup_note_wait_window_g1_ParamLimits

0x143f,	// (0x00028c96) popup_note_wait_window_g1

0x144b,	// (0x00028ca2) popup_note_wait_window_g2_ParamLimits

0x144b,	// (0x00028ca2) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00037066) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00037066) popup_note_wait_window_g

0x1463,	// (0x00028cba) popup_note_wait_window_t1_ParamLimits

0x1463,	// (0x00028cba) popup_note_wait_window_t1

0xad63,	// (0x000325ba) popup_note_wait_window_t2_ParamLimits

0xad63,	// (0x000325ba) popup_note_wait_window_t2

0xad80,	// (0x000325d7) popup_note_wait_window_t3_ParamLimits

0xad80,	// (0x000325d7) popup_note_wait_window_t3

0xad93,	// (0x000325ea) popup_note_wait_window_t4_ParamLimits

0xad93,	// (0x000325ea) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x0003706d) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x0003706d) popup_note_wait_window_t

0x14df,	// (0x00028d36) wait_bar_pane_ParamLimits

0x14df,	// (0x00028d36) wait_bar_pane

0xc28d,	// (0x00033ae4) wait_anim_pane

0xc28d,	// (0x00033ae4) wait_border_pane

0xc283,	// (0x00033ada) wait_anim_pane_g1

0xc283,	// (0x00033ada) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00036f26) wait_anim_pane_g

0x13bb,	// (0x00028c12) wait_border_pane_g1

0x13c6,	// (0x00028c1d) wait_border_pane_g2

0x13cf,	// (0x00028c26) wait_border_pane_g3

0x0002,

0xf808,	// (0x0003705f) wait_border_pane_g

0x1226,	// (0x00028a7d) bg_popup_window_pane_cp16_ParamLimits

0x1226,	// (0x00028a7d) bg_popup_window_pane_cp16

0xad13,	// (0x0003256a) indicator_popup_pane_cp4_ParamLimits

0xad13,	// (0x0003256a) indicator_popup_pane_cp4

0x133a,	// (0x00028b91) popup_query_data_window_t1_ParamLimits

0x133a,	// (0x00028b91) popup_query_data_window_t1

0x134c,	// (0x00028ba3) popup_query_data_window_t2_ParamLimits

0x134c,	// (0x00028ba3) popup_query_data_window_t2

0x1365,	// (0x00028bbc) popup_query_data_window_t3_ParamLimits

0x1365,	// (0x00028bbc) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00037058) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00037058) popup_query_data_window_t

0xad27,	// (0x0003257e) query_popup_data_pane_ParamLimits

0xad27,	// (0x0003257e) query_popup_data_pane

0xad3b,	// (0x00032592) query_popup_data_pane_cp1_ParamLimits

0xad3b,	// (0x00032592) query_popup_data_pane_cp1

0x1226,	// (0x00028a7d) bg_popup_window_pane_cp10_ParamLimits

0x1226,	// (0x00028a7d) bg_popup_window_pane_cp10

0xac8e,	// (0x000324e5) indicator_popup_pane_ParamLimits

0xac8e,	// (0x000324e5) indicator_popup_pane

0xacb0,	// (0x00032507) popup_query_code_window_t1_ParamLimits

0xacb0,	// (0x00032507) popup_query_code_window_t1

0xacca,	// (0x00032521) popup_query_code_window_t2_ParamLimits

0xacca,	// (0x00032521) popup_query_code_window_t2

0x12dd,	// (0x00028b34) popup_query_code_window_t3_ParamLimits

0x12dd,	// (0x00028b34) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00037051) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00037051) popup_query_code_window_t

0x130c,	// (0x00028b63) query_popup_pane_ParamLimits

0x130c,	// (0x00028b63) query_popup_pane

0xc4bb,	// (0x00033d12) bg_popup_window_pane_cp15_ParamLimits

0xc4bb,	// (0x00033d12) bg_popup_window_pane_cp15

0x9449,	// (0x00030ca0) indicator_popup_pane_cp1_ParamLimits

0x9449,	// (0x00030ca0) indicator_popup_pane_cp1

0x945c,	// (0x00030cb3) indicator_popup_pane_cp2_ParamLimits

0x945c,	// (0x00030cb3) indicator_popup_pane_cp2

0x946f,	// (0x00030cc6) popup_query_data_code_window_g1_ParamLimits

0x946f,	// (0x00030cc6) popup_query_data_code_window_g1

0xc4d9,	// (0x00033d30) popup_query_data_code_window_t1_ParamLimits

0xc4d9,	// (0x00033d30) popup_query_data_code_window_t1

0xc4eb,	// (0x00033d42) popup_query_data_code_window_t2_ParamLimits

0xc4eb,	// (0x00033d42) popup_query_data_code_window_t2

0x9482,	// (0x00030cd9) popup_query_data_code_window_t3_ParamLimits

0x9482,	// (0x00030cd9) popup_query_data_code_window_t3

0x9498,	// (0x00030cef) popup_query_data_code_window_t4_ParamLimits

0x9498,	// (0x00030cef) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00036dbc) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00036dbc) popup_query_data_code_window_t

0xcdb0,	// (0x00034607) list_single_midp_graphic_pane_g3

0x94b0,	// (0x00030d07) query_popup_data_pane_cp2_ParamLimits

0x94c3,	// (0x00030d1a) query_popup_pane_cp2_ParamLimits

0x94c3,	// (0x00030d1a) query_popup_pane_cp2

0xc28d,	// (0x00033ae4) bg_popup_window_pane_cp11

0x120a,	// (0x00028a61) heading_pane_cp5

0x1212,	// (0x00028a69) listscroll_popup_info_pane

0xc28d,	// (0x00033ae4) input_focus_pane_cp3

0xc4fd,	// (0x00033d54) query_popup_pane_t1

0xc50b,	// (0x00033d62) list_popup_info_pane_ParamLimits

0xc50b,	// (0x00033d62) list_popup_info_pane

0xc51a,	// (0x00033d71) listscroll_popup_info_pane_g1

0xc522,	// (0x00033d79) scroll_pane_cp7

0x94d6,	// (0x00030d2d) popup_info_list_pane_t1_ParamLimits

0x94d6,	// (0x00030d2d) popup_info_list_pane_t1

0x94f0,	// (0x00030d47) popup_info_list_pane_t2_ParamLimits

0x94f0,	// (0x00030d47) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00036dc5) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00036dc5) popup_info_list_pane_t

0xc28d,	// (0x00033ae4) bg_popup_window_pane_cp12

0xb541,	// (0x00032d98) find_popup_pane

0xc2e9,	// (0x00033b40) bg_popup_window_pane_cp3

0xc52c,	// (0x00033d83) heading_pane_cp3

0xc53b,	// (0x00033d92) listscroll_popup_graphic_pane

0xc28d,	// (0x00033ae4) bg_popup_window_pane_cp4

0x955a,	// (0x00030db1) heading_pane_cp4

0xc54b,	// (0x00033da2) listscroll_popup_colour_pane

0x9564,	// (0x00030dbb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9564,	// (0x00030dbb) cell_large_graphic_colour_none_popup_pane

0x9578,	// (0x00030dcf) grid_large_graphic_colour_popup_pane_ParamLimits

0x9578,	// (0x00030dcf) grid_large_graphic_colour_popup_pane

0x959c,	// (0x00030df3) listscroll_popup_colour_pane_g1_ParamLimits

0x959c,	// (0x00030df3) listscroll_popup_colour_pane_g1

0x95b3,	// (0x00030e0a) listscroll_popup_colour_pane_g2_ParamLimits

0x95b3,	// (0x00030e0a) listscroll_popup_colour_pane_g2

0x95c7,	// (0x00030e1e) listscroll_popup_colour_pane_g3_ParamLimits

0x95c7,	// (0x00030e1e) listscroll_popup_colour_pane_g3

0x95d7,	// (0x00030e2e) listscroll_popup_colour_pane_g4_ParamLimits

0x95d7,	// (0x00030e2e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00036dca) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00036dca) listscroll_popup_colour_pane_g

0xc553,	// (0x00033daa) scroll_pane_cp6_ParamLimits

0xc553,	// (0x00033daa) scroll_pane_cp6

0x95e7,	// (0x00030e3e) cell_large_graphic_colour_popup_pane_ParamLimits

0x95e7,	// (0x00030e3e) cell_large_graphic_colour_popup_pane

0x9606,	// (0x00030e5d) cell_large_graphic_colour_none_popup_pane_t1

0xc28d,	// (0x00033ae4) grid_highlight_pane_cp5

0xc565,	// (0x00033dbc) cell_large_graphic_colour_popup_pane_g1

0xc56d,	// (0x00033dc4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00036dd3) cell_large_graphic_colour_popup_pane_g

0xc575,	// (0x00033dcc) cell_large_graphic_colour_popup_pane_g2_copy1

0xc57e,	// (0x00033dd5) grid_highlight_pane_cp4

0xc586,	// (0x00033ddd) bg_popup_window_pane_cp8_ParamLimits

0xc586,	// (0x00033ddd) bg_popup_window_pane_cp8

0x9615,	// (0x00030e6c) popup_snote_single_text_window_g1_ParamLimits

0x9615,	// (0x00030e6c) popup_snote_single_text_window_g1

0x9627,	// (0x00030e7e) popup_snote_single_text_window_t1_ParamLimits

0x9627,	// (0x00030e7e) popup_snote_single_text_window_t1

0x963a,	// (0x00030e91) popup_snote_single_text_window_t2_ParamLimits

0x963a,	// (0x00030e91) popup_snote_single_text_window_t2

0x964d,	// (0x00030ea4) popup_snote_single_text_window_t3_ParamLimits

0x964d,	// (0x00030ea4) popup_snote_single_text_window_t3

0x9686,	// (0x00030edd) popup_snote_single_text_window_t4_ParamLimits

0x9686,	// (0x00030edd) popup_snote_single_text_window_t4

0x96ba,	// (0x00030f11) popup_snote_single_text_window_t5_ParamLimits

0x96ba,	// (0x00030f11) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00036dd8) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00036dd8) popup_snote_single_text_window_t

0xc5a1,	// (0x00033df8) bg_popup_window_pane_cp9_ParamLimits

0xc5a1,	// (0x00033df8) bg_popup_window_pane_cp9

0x9615,	// (0x00030e6c) popup_snote_single_graphic_window_g1_ParamLimits

0x9615,	// (0x00030e6c) popup_snote_single_graphic_window_g1

0xc5af,	// (0x00033e06) popup_snote_single_graphic_window_g2_ParamLimits

0xc5af,	// (0x00033e06) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00036de3) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00036de3) popup_snote_single_graphic_window_g

0xc5bb,	// (0x00033e12) popup_snote_single_graphic_window_t1_ParamLimits

0xc5bb,	// (0x00033e12) popup_snote_single_graphic_window_t1

0xc5ce,	// (0x00033e25) popup_snote_single_graphic_window_t2_ParamLimits

0xc5ce,	// (0x00033e25) popup_snote_single_graphic_window_t2

0x964d,	// (0x00030ea4) popup_snote_single_graphic_window_t3_ParamLimits

0x964d,	// (0x00030ea4) popup_snote_single_graphic_window_t3

0x9686,	// (0x00030edd) popup_snote_single_graphic_window_t4_ParamLimits

0x9686,	// (0x00030edd) popup_snote_single_graphic_window_t4

0x96e9,	// (0x00030f40) popup_snote_single_graphic_window_t5_ParamLimits

0x96e9,	// (0x00030f40) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00036de8) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00036de8) popup_snote_single_graphic_window_t

0x385f,	// (0x0002b0b6) grid_graphic_popup_pane_ParamLimits

0x385f,	// (0x0002b0b6) grid_graphic_popup_pane

0x3889,	// (0x0002b0e0) listscroll_popup_graphic_pane_g1_ParamLimits

0x3889,	// (0x0002b0e0) listscroll_popup_graphic_pane_g1

0xb48c,	// (0x00032ce3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb48c,	// (0x00032ce3) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x000371ce) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x000371ce) listscroll_popup_graphic_pane_g

0x38b1,	// (0x0002b108) scroll_pane_cp5

0xb44b,	// (0x00032ca2) cell_graphic_popup_pane_ParamLimits

0xb44b,	// (0x00032ca2) cell_graphic_popup_pane

0x37d6,	// (0x0002b02d) cell_graphic_popup_pane_g1

0x37de,	// (0x0002b035) cell_graphic_popup_pane_g2

0xc575,	// (0x00033dcc) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x000371c7) cell_graphic_popup_pane_g

0x37e7,	// (0x0002b03e) cell_graphic_popup_pane_t2

0xc57e,	// (0x00033dd5) grid_highlight_pane_cp3

0xc5f3,	// (0x00033e4a) list_gen_pane_ParamLimits

0xc5f3,	// (0x00033e4a) list_gen_pane

0xc61b,	// (0x00033e72) scroll_pane

0xb3b5,	// (0x00032c0c) bg_list_pane_g1_ParamLimits

0xb3b5,	// (0x00032c0c) bg_list_pane_g1

0xb3d0,	// (0x00032c27) bg_list_pane_g2_ParamLimits

0xb3d0,	// (0x00032c27) bg_list_pane_g2

0xb3e3,	// (0x00032c3a) bg_list_pane_g3_ParamLimits

0xb3e3,	// (0x00032c3a) bg_list_pane_g3

0xb3f5,	// (0x00032c4c) bg_list_pane_g4_ParamLimits

0xb3f5,	// (0x00032c4c) bg_list_pane_g4

0xb407,	// (0x00032c5e) bg_list_pane_g5_ParamLimits

0xb407,	// (0x00032c5e) bg_list_pane_g5

0x0004,

0xf965,	// (0x000371bc) bg_list_pane_g_ParamLimits

0xf965,	// (0x000371bc) bg_list_pane_g

0xb37c,	// (0x00032bd3) list_double2_graphic_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double2_graphic_large_graphic_pane

0xb37c,	// (0x00032bd3) list_double2_graphic_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double2_graphic_pane

0xb37c,	// (0x00032bd3) list_double2_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double2_large_graphic_pane

0xb37c,	// (0x00032bd3) list_double2_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double2_pane

0xb37c,	// (0x00032bd3) list_double_graphic_heading_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_graphic_heading_pane

0xb37c,	// (0x00032bd3) list_double_graphic_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_graphic_pane

0xb37c,	// (0x00032bd3) list_double_heading_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_heading_pane

0xb37c,	// (0x00032bd3) list_double_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_large_graphic_pane

0xb37c,	// (0x00032bd3) list_double_number_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_number_pane

0xb37c,	// (0x00032bd3) list_double_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_pane

0xb37c,	// (0x00032bd3) list_double_time_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_double_time_pane

0xb37c,	// (0x00032bd3) list_setting_number_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_setting_number_pane

0xb37c,	// (0x00032bd3) list_setting_pane_ParamLimits

0xb37c,	// (0x00032bd3) list_setting_pane

0x9777,	// (0x00030fce) list_single_2graphic_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_2graphic_pane

0x9777,	// (0x00030fce) list_single_graphic_heading_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_graphic_heading_pane

0x9777,	// (0x00030fce) list_single_graphic_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_graphic_pane

0x9777,	// (0x00030fce) list_single_heading_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_heading_pane

0x9777,	// (0x00030fce) list_single_large_graphic_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_large_graphic_pane

0x9777,	// (0x00030fce) list_single_number_heading_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_number_heading_pane

0x9777,	// (0x00030fce) list_single_number_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_number_pane

0x9777,	// (0x00030fce) list_single_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_pane

0xc28d,	// (0x00033ae4) list_highlight_pane_cp1

0xe82e,	// (0x00036085) list_single_pane_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_pane_g1

0xe83a,	// (0x00036091) list_single_pane_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_pane_g

0x8b50,	// (0x000303a7) list_single_pane_t1_ParamLimits

0x8b50,	// (0x000303a7) list_single_pane_t1

0xe82e,	// (0x00036085) list_single_number_pane_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_number_pane_g1

0xe83a,	// (0x00036091) list_single_number_pane_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_number_pane_g

0xe846,	// (0x0003609d) list_single_number_pane_t1_ParamLimits

0xe846,	// (0x0003609d) list_single_number_pane_t1

0x8b12,	// (0x00030369) list_single_number_pane_t2_ParamLimits

0x8b12,	// (0x00030369) list_single_number_pane_t2

0x0001,

0xf926,	// (0x0003717d) list_single_number_pane_t_ParamLimits

0xf926,	// (0x0003717d) list_single_number_pane_t

0xe822,	// (0x00036079) list_single_graphic_pane_g1_ParamLimits

0xe822,	// (0x00036079) list_single_graphic_pane_g1

0xe82e,	// (0x00036085) list_single_graphic_pane_g2_ParamLimits

0xe82e,	// (0x00036085) list_single_graphic_pane_g2

0xe83a,	// (0x00036091) list_single_graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036091) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00036df3) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00036df3) list_single_graphic_pane_g

0xe846,	// (0x0003609d) list_single_graphic_pane_t1_ParamLimits

0xe846,	// (0x0003609d) list_single_graphic_pane_t1

0xe82e,	// (0x00036085) list_single_heading_pane_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_heading_pane_g1

0xe83a,	// (0x00036091) list_single_heading_pane_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_heading_pane_g

0xe85c,	// (0x000360b3) list_single_heading_pane_t1_ParamLimits

0xe85c,	// (0x000360b3) list_single_heading_pane_t1

0xe872,	// (0x000360c9) list_single_heading_pane_t2_ParamLimits

0xe872,	// (0x000360c9) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00036dff) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00036dff) list_single_heading_pane_t

0xe82e,	// (0x00036085) list_single_number_heading_pane_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_number_heading_pane_g1

0xe83a,	// (0x00036091) list_single_number_heading_pane_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_number_heading_pane_g

0xe85c,	// (0x000360b3) list_single_number_heading_pane_t1_ParamLimits

0xe85c,	// (0x000360b3) list_single_number_heading_pane_t1

0xe884,	// (0x000360db) list_single_number_heading_pane_t2_ParamLimits

0xe884,	// (0x000360db) list_single_number_heading_pane_t2

0xe896,	// (0x000360ed) list_single_number_heading_pane_t3_ParamLimits

0xe896,	// (0x000360ed) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00036e04) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00036e04) list_single_number_heading_pane_t

0xe8a8,	// (0x000360ff) list_single_graphic_heading_pane_g1_ParamLimits

0xe8a8,	// (0x000360ff) list_single_graphic_heading_pane_g1

0x864b,	// (0x0002fea2) list_single_graphic_heading_pane_g4_ParamLimits

0x864b,	// (0x0002fea2) list_single_graphic_heading_pane_g4

0xe83a,	// (0x00036091) list_single_graphic_heading_pane_g5_ParamLimits

0xe83a,	// (0x00036091) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00036e0b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00036e0b) list_single_graphic_heading_pane_g

0xe85c,	// (0x000360b3) list_single_graphic_heading_pane_t1_ParamLimits

0xe85c,	// (0x000360b3) list_single_graphic_heading_pane_t1

0x865c,	// (0x0002feb3) list_single_graphic_heading_pane_t2_ParamLimits

0x865c,	// (0x0002feb3) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00036e12) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00036e12) list_single_graphic_heading_pane_t

0xe8b4,	// (0x0003610b) list_single_large_graphic_pane_g1_ParamLimits

0xe8b4,	// (0x0003610b) list_single_large_graphic_pane_g1

0xe82e,	// (0x00036085) list_single_large_graphic_pane_g2_ParamLimits

0xe82e,	// (0x00036085) list_single_large_graphic_pane_g2

0xe83a,	// (0x00036091) list_single_large_graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036091) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00036e17) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00036e17) list_single_large_graphic_pane_g

0x13c6,	// (0x00028c1d) wait_border_pane_g2_copy1

0x866e,	// (0x0002fec5) list_single_large_graphic_pane_g4_cp2

0xe846,	// (0x0003609d) list_single_large_graphic_pane_t1_ParamLimits

0xe846,	// (0x0003609d) list_single_large_graphic_pane_t1

0xe8c0,	// (0x00036117) list_double_pane_g1_ParamLimits

0xe8c0,	// (0x00036117) list_double_pane_g1

0xe8cc,	// (0x00036123) list_double_pane_g2_ParamLimits

0xe8cc,	// (0x00036123) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00036e1e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00036e1e) list_double_pane_g

0x8676,	// (0x0002fecd) list_double_pane_t1_ParamLimits

0x8676,	// (0x0002fecd) list_double_pane_t1

0x868c,	// (0x0002fee3) list_double_pane_t2_ParamLimits

0x868c,	// (0x0002fee3) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00036e23) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00036e23) list_double_pane_t

0x869e,	// (0x0002fef5) list_double2_pane_g1_ParamLimits

0x869e,	// (0x0002fef5) list_double2_pane_g1

0xe8cc,	// (0x00036123) list_double2_pane_g2_ParamLimits

0xe8cc,	// (0x00036123) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00036e28) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00036e28) list_double2_pane_g

0x8676,	// (0x0002fecd) list_double2_pane_t1_ParamLimits

0x8676,	// (0x0002fecd) list_double2_pane_t1

0x86af,	// (0x0002ff06) list_double2_pane_t2_ParamLimits

0x86af,	// (0x0002ff06) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00036e2d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00036e2d) list_double2_pane_t

0xe8c0,	// (0x00036117) list_double_number_pane_g1_ParamLimits

0xe8c0,	// (0x00036117) list_double_number_pane_g1

0xe8cc,	// (0x00036123) list_double_number_pane_g2_ParamLimits

0xe8cc,	// (0x00036123) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00036e1e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00036e1e) list_double_number_pane_g

0x86c1,	// (0x0002ff18) list_double_number_pane_t1_ParamLimits

0x86c1,	// (0x0002ff18) list_double_number_pane_t1

0x86d3,	// (0x0002ff2a) list_double_number_pane_t2_ParamLimits

0x86d3,	// (0x0002ff2a) list_double_number_pane_t2

0x86e9,	// (0x0002ff40) list_double_number_pane_t3_ParamLimits

0x86e9,	// (0x0002ff40) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00036e32) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00036e32) list_double_number_pane_t

0x86fb,	// (0x0002ff52) list_double_graphic_pane_g1_ParamLimits

0x86fb,	// (0x0002ff52) list_double_graphic_pane_g1

0xe8d8,	// (0x0003612f) list_double_graphic_pane_g2_ParamLimits

0xe8d8,	// (0x0003612f) list_double_graphic_pane_g2

0xe8e7,	// (0x0003613e) list_double_graphic_pane_g3_ParamLimits

0xe8e7,	// (0x0003613e) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00036e39) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00036e39) list_double_graphic_pane_g

0x8713,	// (0x0002ff6a) list_double_graphic_pane_t1_ParamLimits

0x8713,	// (0x0002ff6a) list_double_graphic_pane_t1

0x8729,	// (0x0002ff80) list_double_graphic_pane_t2_ParamLimits

0x8729,	// (0x0002ff80) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00036e42) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00036e42) list_double_graphic_pane_t

0x873b,	// (0x0002ff92) list_double2_graphic_pane_g1_ParamLimits

0x873b,	// (0x0002ff92) list_double2_graphic_pane_g1

0xe8f3,	// (0x0003614a) list_double2_graphic_pane_g2_ParamLimits

0xe8f3,	// (0x0003614a) list_double2_graphic_pane_g2

0xe8ff,	// (0x00036156) list_double2_graphic_pane_g3_ParamLimits

0xe8ff,	// (0x00036156) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00036e47) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00036e47) list_double2_graphic_pane_g

0x86d3,	// (0x0002ff2a) list_double2_graphic_pane_t1_ParamLimits

0x86d3,	// (0x0002ff2a) list_double2_graphic_pane_t1

0x8747,	// (0x0002ff9e) list_double2_graphic_pane_t2_ParamLimits

0x8747,	// (0x0002ff9e) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036e4e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036e4e) list_double2_graphic_pane_t

0x8759,	// (0x0002ffb0) list_double_large_graphic_pane_g1_ParamLimits

0x8759,	// (0x0002ffb0) list_double_large_graphic_pane_g1

0x869e,	// (0x0002fef5) list_double_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fef5) list_double_large_graphic_pane_g2

0xe8cc,	// (0x00036123) list_double_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x00036123) list_double_large_graphic_pane_g3

0x876c,	// (0x0002ffc3) list_double_large_graphic_pane_g4_ParamLimits

0x876c,	// (0x0002ffc3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00036e53) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00036e53) list_double_large_graphic_pane_g

0x877e,	// (0x0002ffd5) list_double_large_graphic_pane_t1_ParamLimits

0x877e,	// (0x0002ffd5) list_double_large_graphic_pane_t1

0x8797,	// (0x0002ffee) list_double_large_graphic_pane_t2_ParamLimits

0x8797,	// (0x0002ffee) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00036e5e) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00036e5e) list_double_large_graphic_pane_t

0x87a9,	// (0x00030000) list_double2_large_graphic_pane_g1_ParamLimits

0x87a9,	// (0x00030000) list_double2_large_graphic_pane_g1

0x869e,	// (0x0002fef5) list_double2_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fef5) list_double2_large_graphic_pane_g2

0xe8cc,	// (0x00036123) list_double2_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x00036123) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00036e63) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00036e63) list_double2_large_graphic_pane_g

0x86d3,	// (0x0002ff2a) list_double2_large_graphic_pane_t1_ParamLimits

0x86d3,	// (0x0002ff2a) list_double2_large_graphic_pane_t1

0x8747,	// (0x0002ff9e) list_double2_large_graphic_pane_t2_ParamLimits

0x8747,	// (0x0002ff9e) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036e4e) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036e4e) list_double2_large_graphic_pane_t

0x87b5,	// (0x0003000c) list_double_heading_pane_g1_ParamLimits

0x87b5,	// (0x0003000c) list_double_heading_pane_g1

0xe920,	// (0x00036177) list_double_heading_pane_g2_ParamLimits

0xe920,	// (0x00036177) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00036e6a) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00036e6a) list_double_heading_pane_g

0x87c6,	// (0x0003001d) list_double_heading_pane_t1_ParamLimits

0x87c6,	// (0x0003001d) list_double_heading_pane_t1

0x8747,	// (0x0002ff9e) list_double_heading_pane_t2_ParamLimits

0x8747,	// (0x0002ff9e) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00036e6f) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00036e6f) list_double_heading_pane_t

0x87dc,	// (0x00030033) list_double_graphic_heading_pane_g1_ParamLimits

0x87dc,	// (0x00030033) list_double_graphic_heading_pane_g1

0x87b5,	// (0x0003000c) list_double_graphic_heading_pane_g2_ParamLimits

0x87b5,	// (0x0003000c) list_double_graphic_heading_pane_g2

0xe920,	// (0x00036177) list_double_graphic_heading_pane_g3_ParamLimits

0xe920,	// (0x00036177) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00036e74) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00036e74) list_double_graphic_heading_pane_g

0x87c6,	// (0x0003001d) list_double_graphic_heading_pane_t1_ParamLimits

0x87c6,	// (0x0003001d) list_double_graphic_heading_pane_t1

0x8747,	// (0x0002ff9e) list_double_graphic_heading_pane_t2_ParamLimits

0x8747,	// (0x0002ff9e) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00036e6f) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00036e6f) list_double_graphic_heading_pane_t

0x869e,	// (0x0002fef5) list_double_time_pane_g1_ParamLimits

0x869e,	// (0x0002fef5) list_double_time_pane_g1

0xe8cc,	// (0x00036123) list_double_time_pane_g2_ParamLimits

0xe8cc,	// (0x00036123) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00036e28) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00036e28) list_double_time_pane_g

0xe92c,	// (0x00036183) list_double_time_pane_t1_ParamLimits

0xe92c,	// (0x00036183) list_double_time_pane_t1

0xe942,	// (0x00036199) list_double_time_pane_t2_ParamLimits

0xe942,	// (0x00036199) list_double_time_pane_t2

0xe954,	// (0x000361ab) list_double_time_pane_t3_ParamLimits

0xe954,	// (0x000361ab) list_double_time_pane_t3

0xe966,	// (0x000361bd) list_double_time_pane_t4_ParamLimits

0xe966,	// (0x000361bd) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00036e7b) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00036e7b) list_double_time_pane_t

0xe978,	// (0x000361cf) list_setting_pane_g1_ParamLimits

0xe978,	// (0x000361cf) list_setting_pane_g1

0xe984,	// (0x000361db) list_setting_pane_g2_ParamLimits

0xe984,	// (0x000361db) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00036e84) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00036e84) list_setting_pane_g

0x87e8,	// (0x0003003f) list_setting_pane_t1_ParamLimits

0x87e8,	// (0x0003003f) list_setting_pane_t1

0x87ff,	// (0x00030056) list_setting_pane_t2_ParamLimits

0x87ff,	// (0x00030056) list_setting_pane_t2

0x0002,

0xf632,	// (0x00036e89) list_setting_pane_t_ParamLimits

0xf632,	// (0x00036e89) list_setting_pane_t

0x883e,	// (0x00030095) set_value_pane_cp_ParamLimits

0x883e,	// (0x00030095) set_value_pane_cp

0xe990,	// (0x000361e7) list_setting_number_pane_g1_ParamLimits

0xe990,	// (0x000361e7) list_setting_number_pane_g1

0xe99c,	// (0x000361f3) list_setting_number_pane_g2_ParamLimits

0xe99c,	// (0x000361f3) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00036e90) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00036e90) list_setting_number_pane_g

0x884a,	// (0x000300a1) list_setting_number_pane_t1_ParamLimits

0x884a,	// (0x000300a1) list_setting_number_pane_t1

0xe9a8,	// (0x000361ff) list_setting_number_pane_t2_ParamLimits

0xe9a8,	// (0x000361ff) list_setting_number_pane_t2

0x885e,	// (0x000300b5) list_setting_number_pane_t3_ParamLimits

0x885e,	// (0x000300b5) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00036e95) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00036e95) list_setting_number_pane_t

0x883e,	// (0x00030095) set_value_pane_ParamLimits

0x883e,	// (0x00030095) set_value_pane

0xc64f,	// (0x00033ea6) bg_set_opt_pane_ParamLimits

0xc64f,	// (0x00033ea6) bg_set_opt_pane

0x8876,	// (0x000300cd) set_value_pane_t1

0xc670,	// (0x00033ec7) slider_set_pane_cp3

0x9722,	// (0x00030f79) volume_small_pane_cp

0xc679,	// (0x00033ed0) list_form_gen_pane

0xc682,	// (0x00033ed9) scroll_pane_cp8

0x8884,	// (0x000300db) form_field_data_pane_ParamLimits

0x8884,	// (0x000300db) form_field_data_pane

0x889b,	// (0x000300f2) form_field_data_wide_pane_ParamLimits

0x889b,	// (0x000300f2) form_field_data_wide_pane

0x88bb,	// (0x00030112) form_field_popup_pane_ParamLimits

0x88bb,	// (0x00030112) form_field_popup_pane

0x88d3,	// (0x0003012a) form_field_popup_wide_pane_ParamLimits

0x88d3,	// (0x0003012a) form_field_popup_wide_pane

0xe9fa,	// (0x00036251) form_field_slider_pane_ParamLimits

0xe9fa,	// (0x00036251) form_field_slider_pane

0x88f0,	// (0x00030147) form_field_slider_wide_pane_ParamLimits

0x88f0,	// (0x00030147) form_field_slider_wide_pane

0xc693,	// (0x00033eea) data_form_pane

0x890d,	// (0x00030164) form_field_data_pane_t1

0xc69f,	// (0x00033ef6) input_focus_pane

0x8927,	// (0x0003017e) data_form_wide_pane

0x8944,	// (0x0003019b) form_field_data_wide_pane_t1

0xc593,	// (0x00033dea) input_focus_pane_cp6

0x8966,	// (0x000301bd) form_field_popup_pane_t1

0xc69f,	// (0x00033ef6) input_focus_pane_cp7

0xc6cd,	// (0x00033f24) list_form_pane

0x8988,	// (0x000301df) form_field_popup_wide_pane_t1

0xc69f,	// (0x00033ef6) input_focus_pane_cp8

0xc6d9,	// (0x00033f30) list_form_wide_pane

0x89a5,	// (0x000301fc) form_field_slider_pane_t1_ParamLimits

0x89a5,	// (0x000301fc) form_field_slider_pane_t1

0x89bd,	// (0x00030214) form_field_slider_pane_t2_ParamLimits

0x89bd,	// (0x00030214) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00036ea5) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00036ea5) form_field_slider_pane_t

0xc2db,	// (0x00033b32) input_focus_pane_cp9_ParamLimits

0xc2db,	// (0x00033b32) input_focus_pane_cp9

0x89d2,	// (0x00030229) slider_cont_pane_ParamLimits

0x89d2,	// (0x00030229) slider_cont_pane

0xc6e5,	// (0x00033f3c) form_field_slider_wide_pane_t1_ParamLimits

0xc6e5,	// (0x00033f3c) form_field_slider_wide_pane_t1

0x89e6,	// (0x0003023d) form_field_slider_wide_pane_t2_ParamLimits

0x89e6,	// (0x0003023d) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00036eaa) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00036eaa) form_field_slider_wide_pane_t

0xc2db,	// (0x00033b32) input_focus_pane_cp10_ParamLimits

0xc2db,	// (0x00033b32) input_focus_pane_cp10

0x89f8,	// (0x0003024f) slider_cont_pane_cp1_ParamLimits

0x89f8,	// (0x0003024f) slider_cont_pane_cp1

0x8a0c,	// (0x00030263) slider_form_pane_cp

0xc6f7,	// (0x00033f4e) input_focus_pane_g1

0xc6ff,	// (0x00033f56) input_focus_pane_g2

0xc707,	// (0x00033f5e) input_focus_pane_g3

0xc70f,	// (0x00033f66) input_focus_pane_g4

0xc717,	// (0x00033f6e) input_focus_pane_g5

0xc71f,	// (0x00033f76) input_focus_pane_g6

0xc727,	// (0x00033f7e) input_focus_pane_g7

0xc72f,	// (0x00033f86) input_focus_pane_g8

0xc737,	// (0x00033f8e) input_focus_pane_g9

0xc283,	// (0x00033ada) input_focus_pane_g10

0x0009,

0xf658,	// (0x00036eaf) input_focus_pane_g

0x13cf,	// (0x00028c26) wait_border_pane_g3_copy1

0x8a14,	// (0x0003026b) data_form_pane_t1

0xc283,	// (0x00033ada) wait_anim_pane_g1_copy1

0x8b24,	// (0x0003037b) data_form_wide_pane_t1

0x8a2e,	// (0x00030285) list_form_graphic_pane_cp_ParamLimits

0x8a2e,	// (0x00030285) list_form_graphic_pane_cp

0x3661,	// (0x0002aeb8) slider_form_pane_g1

0x366a,	// (0x0002aec1) slider_form_pane_g2

0x0006,

0xf956,	// (0x000371ad) slider_form_pane_g

0x8a2e,	// (0x00030285) list_form_graphic_pane_ParamLimits

0x8a2e,	// (0x00030285) list_form_graphic_pane

0x8a41,	// (0x00030298) list_form_graphic_pane_g1

0x8a49,	// (0x000302a0) list_form_graphic_pane_t1_ParamLimits

0x8a49,	// (0x000302a0) list_form_graphic_pane_t1

0xc2e9,	// (0x00033b40) list_highlight_pane_cp5_ParamLimits

0xc2e9,	// (0x00033b40) list_highlight_pane_cp5

0x8a5e,	// (0x000302b5) find_pane_g1

0xc73f,	// (0x00033f96) input_find_pane

0x8a67,	// (0x000302be) input_find_pane_g1_ParamLimits

0x8a67,	// (0x000302be) input_find_pane_g1

0x8a73,	// (0x000302ca) input_find_pane_t1_ParamLimits

0x8a73,	// (0x000302ca) input_find_pane_t1

0x8a88,	// (0x000302df) input_find_pane_t2_ParamLimits

0x8a88,	// (0x000302df) input_find_pane_t2

0x0001,

0xf66d,	// (0x00036ec4) input_find_pane_t_ParamLimits

0xf66d,	// (0x00036ec4) input_find_pane_t

0xc748,	// (0x00033f9f) input_focus_pane_cp5_ParamLimits

0xc748,	// (0x00033f9f) input_focus_pane_cp5

0xc75b,	// (0x00033fb2) bg_popup_window_pane_cp2_ParamLimits

0xc75b,	// (0x00033fb2) bg_popup_window_pane_cp2

0xc768,	// (0x00033fbf) listscroll_menu_pane_ParamLimits

0xc768,	// (0x00033fbf) listscroll_menu_pane

0x9737,	// (0x00030f8e) popup_submenu_window_ParamLimits

0x9737,	// (0x00030f8e) popup_submenu_window

0xc774,	// (0x00033fcb) find_popup_pane_g1

0x975f,	// (0x00030fb6) input_popup_find_pane_cp

0xc77c,	// (0x00033fd3) input_focus_pane_cp4_ParamLimits

0xc77c,	// (0x00033fd3) input_focus_pane_cp4

0xc78a,	// (0x00033fe1) input_popup_find_pane_t1_ParamLimits

0xc78a,	// (0x00033fe1) input_popup_find_pane_t1

0xc28d,	// (0x00033ae4) bg_popup_sub_pane_cp

0xc7b8,	// (0x0003400f) listscroll_popup_sub_pane

0xc7c0,	// (0x00034017) list_submenu_pane_ParamLimits

0xc7c0,	// (0x00034017) list_submenu_pane

0xc7d1,	// (0x00034028) scroll_pane_cp4

0x9777,	// (0x00030fce) list_single_popup_submenu_pane_ParamLimits

0x9777,	// (0x00030fce) list_single_popup_submenu_pane

0x978b,	// (0x00030fe2) list_single_popup_submenu_pane_g1

0x9793,	// (0x00030fea) list_single_popup_submenu_pane_t1_ParamLimits

0x9793,	// (0x00030fea) list_single_popup_submenu_pane_t1

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp1_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp1

0xc7d9,	// (0x00034030) tabs_2_active_pane_g1

0x97a8,	// (0x00030fff) tabs_2_active_pane_t1

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp1_ParamLimits

0xc2db,	// (0x00033b32) bg_passive_tab_pane_cp1

0xc7d9,	// (0x00034030) tabs_2_passive_pane_g1

0x97a8,	// (0x00030fff) tabs_2_passive_pane_t1

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp4

0x97ba,	// (0x00031011) tabs_2_long_active_pane_t1

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp4

0x0cf8,	// (0x0002854f) list_single_midp_graphic_pane_g4_ParamLimits

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp5

0x97cd,	// (0x00031024) tabs_3_long_active_pane_t1

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp5

0x0cf8,	// (0x0002854f) list_single_midp_graphic_pane_g4

0xc2e9,	// (0x00033b40) bg_popup_window_pane_cp13_ParamLimits

0xc2e9,	// (0x00033b40) bg_popup_window_pane_cp13

0xc7ed,	// (0x00034044) listscroll_popup_fast_pane_ParamLimits

0xc7ed,	// (0x00034044) listscroll_popup_fast_pane

0xc7f9,	// (0x00034050) grid_popup_fast_pane_ParamLimits

0xc7f9,	// (0x00034050) grid_popup_fast_pane

0xc80b,	// (0x00034062) scroll_pane_cp9_ParamLimits

0xc80b,	// (0x00034062) scroll_pane_cp9

0x4f9a,	// (0x0002c7f1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f9a,	// (0x0002c7f1) list_single_graphic_hl_pane_t1_cp2

0xc81e,	// (0x00034075) input_focus_pane_cp20_ParamLimits

0xc81e,	// (0x00034075) input_focus_pane_cp20

0xc82c,	// (0x00034083) query_popup_data_pane_t1_ParamLimits

0xc82c,	// (0x00034083) query_popup_data_pane_t1

0xc83f,	// (0x00034096) query_popup_data_pane_t2_ParamLimits

0xc83f,	// (0x00034096) query_popup_data_pane_t2

0xc885,	// (0x000340dc) query_popup_data_pane_t3_ParamLimits

0xc885,	// (0x000340dc) query_popup_data_pane_t3

0xc8c6,	// (0x0003411d) query_popup_data_pane_t4_ParamLimits

0xc8c6,	// (0x0003411d) query_popup_data_pane_t4

0xc902,	// (0x00034159) query_popup_data_pane_t5_ParamLimits

0xc902,	// (0x00034159) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00036ec9) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00036ec9) query_popup_data_pane_t

0xc6f7,	// (0x00033f4e) bg_set_opt_pane_g1

0xc6ff,	// (0x00033f56) bg_set_opt_pane_g2

0xc707,	// (0x00033f5e) bg_set_opt_pane_g3

0xc70f,	// (0x00033f66) bg_set_opt_pane_g4

0xc717,	// (0x00033f6e) bg_set_opt_pane_g5

0xc71f,	// (0x00033f76) bg_set_opt_pane_g6

0xc727,	// (0x00033f7e) bg_set_opt_pane_g7

0xc72f,	// (0x00033f86) bg_set_opt_pane_g8

0xc737,	// (0x00033f8e) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00036ed4) bg_set_opt_pane_g

0xf33f,	// (0x00036b96) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x00036b96) control_top_pane_stacon

0xf392,	// (0x00036be9) signal_pane_stacon_ParamLimits

0xf392,	// (0x00036be9) signal_pane_stacon

0xcc8e,	// (0x000344e5) stacon_top_pane_g1_ParamLimits

0xcc8e,	// (0x000344e5) stacon_top_pane_g1

0xf3b7,	// (0x00036c0e) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00036c0e) title_pane_stacon

0xf3e1,	// (0x00036c38) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00036c38) uni_indicator_pane_stacon

0xf3f6,	// (0x00036c4d) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00036c4d) battery_pane_stacon

0xf43a,	// (0x00036c91) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x00036c91) control_bottom_pane_stacon

0xf45d,	// (0x00036cb4) navi_pane_stacon_ParamLimits

0xf45d,	// (0x00036cb4) navi_pane_stacon

0xccb0,	// (0x00034507) stacon_bottom_pane_g1_ParamLimits

0xccb0,	// (0x00034507) stacon_bottom_pane_g1

0xf102,	// (0x00036959) aid_levels_signal_lsc_ParamLimits

0xf102,	// (0x00036959) aid_levels_signal_lsc

0xf118,	// (0x0003696f) signal_pane_stacon_g1_ParamLimits

0xf118,	// (0x0003696f) signal_pane_stacon_g1

0xf12c,	// (0x00036983) signal_pane_stacon_g2_ParamLimits

0xf12c,	// (0x00036983) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00036ee7) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00036ee7) signal_pane_stacon_g

0xf161,	// (0x000369b8) title_pane_stacon_t1_ParamLimits

0xf161,	// (0x000369b8) title_pane_stacon_t1

0xc946,	// (0x0003419d) uni_indicator_pane_stacon_g1

0xc950,	// (0x000341a7) uni_indicator_pane_stacon_g2

0xc95a,	// (0x000341b1) uni_indicator_pane_stacon_g3

0xc964,	// (0x000341bb) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00036ef3) uni_indicator_pane_stacon_g

0xf186,	// (0x000369dd) control_top_pane_stacon_g1

0xf18e,	// (0x000369e5) control_top_pane_stacon_t1_ParamLimits

0xf18e,	// (0x000369e5) control_top_pane_stacon_t1

0xf1c5,	// (0x00036a1c) aid_levels_battery_lsc_ParamLimits

0xf1c5,	// (0x00036a1c) aid_levels_battery_lsc

0xf1dc,	// (0x00036a33) battery_pane_stacon_g1_ParamLimits

0xf1dc,	// (0x00036a33) battery_pane_stacon_g1

0xf1ef,	// (0x00036a46) battery_pane_stacon_g2_ParamLimits

0xf1ef,	// (0x00036a46) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00036efc) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00036efc) battery_pane_stacon_g

0xf22d,	// (0x00036a84) navi_icon_pane_stacon

0xf241,	// (0x00036a98) navi_navi_pane_stacon

0xf22d,	// (0x00036a84) navi_text_pane_stacon

0xf186,	// (0x000369dd) control_bottom_pane_stacon_g1

0xf255,	// (0x00036aac) control_bottom_pane_stacon_t1_ParamLimits

0xf255,	// (0x00036aac) control_bottom_pane_stacon_t1

0x97f9,	// (0x00031050) grid_app_pane_ParamLimits

0x97f9,	// (0x00031050) grid_app_pane

0x9831,	// (0x00031088) scroll_pane_cp15_ParamLimits

0x9831,	// (0x00031088) scroll_pane_cp15

0x9846,	// (0x0003109d) cell_app_pane_ParamLimits

0x9846,	// (0x0003109d) cell_app_pane

0x988b,	// (0x000310e2) cell_app_pane_g1_ParamLimits

0x988b,	// (0x000310e2) cell_app_pane_g1

0xc988,	// (0x000341df) cell_app_pane_g2_ParamLimits

0xc988,	// (0x000341df) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00036f01) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00036f01) cell_app_pane_g

0x98af,	// (0x00031106) cell_app_pane_t1_ParamLimits

0x98af,	// (0x00031106) cell_app_pane_t1

0xc994,	// (0x000341eb) grid_highlight_pane_ParamLimits

0xc994,	// (0x000341eb) grid_highlight_pane

0xc6f7,	// (0x00033f4e) cell_highlight_pane_g1

0xc6ff,	// (0x00033f56) cell_highlight_pane_g2

0xc707,	// (0x00033f5e) cell_highlight_pane_g3

0xc70f,	// (0x00033f66) cell_highlight_pane_g4

0xc717,	// (0x00033f6e) cell_highlight_pane_g5

0xc71f,	// (0x00033f76) cell_highlight_pane_g6

0xc727,	// (0x00033f7e) cell_highlight_pane_g7

0xc72f,	// (0x00033f86) cell_highlight_pane_g8

0xc737,	// (0x00033f8e) cell_highlight_pane_g9

0xc283,	// (0x00033ada) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00036eaf) cell_highlight_pane_g

0xc9a5,	// (0x000341fc) bg_scroll_pane

0x98cf,	// (0x00031126) scroll_handle_pane

0xc9ec,	// (0x00034243) scroll_bg_pane_g1

0xca01,	// (0x00034258) scroll_bg_pane_g2

0xca19,	// (0x00034270) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00036f06) scroll_bg_pane_g

0x98e3,	// (0x0003113a) scroll_handle_focus_pane_ParamLimits

0x98e3,	// (0x0003113a) scroll_handle_focus_pane

0xc9ec,	// (0x00034243) scroll_handle_pane_g1

0xca2e,	// (0x00034285) scroll_handle_pane_g2

0xca19,	// (0x00034270) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00036f0d) scroll_handle_pane_g

0xc77c,	// (0x00033fd3) bg_popup_sub_pane_cp21_ParamLimits

0xc77c,	// (0x00033fd3) bg_popup_sub_pane_cp21

0x98f0,	// (0x00031147) popup_fep_japan_predictive_window_t1_ParamLimits

0x98f0,	// (0x00031147) popup_fep_japan_predictive_window_t1

0x9907,	// (0x0003115e) popup_fep_japan_predictive_window_t2_ParamLimits

0x9907,	// (0x0003115e) popup_fep_japan_predictive_window_t2

0x993a,	// (0x00031191) popup_fep_japan_predictive_window_t3_ParamLimits

0x993a,	// (0x00031191) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00036f14) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00036f14) popup_fep_japan_predictive_window_t

0xc28d,	// (0x00033ae4) bg_popup_sub_pane_cp23

0x9971,	// (0x000311c8) listscroll_japin_cand_pane

0xca42,	// (0x00034299) popup_fep_japan_candidate_window_t1

0xca50,	// (0x000342a7) candidate_pane_ParamLimits

0xca50,	// (0x000342a7) candidate_pane

0x9979,	// (0x000311d0) scroll_pane_cp30

0xca62,	// (0x000342b9) list_single_popup_jap_candidate_pane_ParamLimits

0xca62,	// (0x000342b9) list_single_popup_jap_candidate_pane

0xc28d,	// (0x00033ae4) list_highlight_pane_cp30

0xca77,	// (0x000342ce) list_single_popup_jap_candidate_pane_t1

0xca86,	// (0x000342dd) level_1_signal

0xca93,	// (0x000342ea) level_2_signal

0xcaa0,	// (0x000342f7) level_3_signal

0xcaad,	// (0x00034304) level_4_signal

0xcaba,	// (0x00034311) level_5_signal

0xcac7,	// (0x0003431e) level_6_signal

0xcad4,	// (0x0003432b) level_7_signal

0xca86,	// (0x000342dd) level_1_battery

0xca93,	// (0x000342ea) level_2_battery

0xcaa0,	// (0x000342f7) level_3_battery

0xcaad,	// (0x00034304) level_4_battery

0xcaba,	// (0x00034311) level_5_battery

0xcac7,	// (0x0003431e) level_6_battery

0xcad4,	// (0x0003432b) level_7_battery

0xcaf9,	// (0x00034350) list_menu_pane_ParamLimits

0xcaf9,	// (0x00034350) list_menu_pane

0xcb0f,	// (0x00034366) scroll_pane_cp25_ParamLimits

0xcb0f,	// (0x00034366) scroll_pane_cp25

0x9981,	// (0x000311d8) list_double2_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double2_graphic_pane_cp2

0x9981,	// (0x000311d8) list_double2_large_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double2_large_graphic_pane_cp2

0x9981,	// (0x000311d8) list_double2_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double2_pane_cp2

0x9981,	// (0x000311d8) list_double_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double_graphic_pane_cp2

0x9981,	// (0x000311d8) list_double_large_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double_large_graphic_pane_cp2

0x9981,	// (0x000311d8) list_double_number_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double_number_pane_cp2

0x9981,	// (0x000311d8) list_double_pane_cp2_ParamLimits

0x9981,	// (0x000311d8) list_double_pane_cp2

0x9990,	// (0x000311e7) list_single_2graphic_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_2graphic_pane_cp2

0x9990,	// (0x000311e7) list_single_graphic_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_graphic_heading_pane_cp2

0x9990,	// (0x000311e7) list_single_graphic_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_graphic_pane_cp2

0x9990,	// (0x000311e7) list_single_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_heading_pane_cp2

0xcb38,	// (0x0003438f) list_single_large_graphic_pane_cp2_ParamLimits

0xcb38,	// (0x0003438f) list_single_large_graphic_pane_cp2

0x9990,	// (0x000311e7) list_single_number_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_number_heading_pane_cp2

0x9990,	// (0x000311e7) list_single_number_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_number_pane_cp2

0x99a2,	// (0x000311f9) list_single_pane_cp2_ParamLimits

0x99a2,	// (0x000311f9) list_single_pane_cp2

0xcb52,	// (0x000343a9) bg_popup_sub_pane_cp22

0xf325,	// (0x00036b7c) popup_side_volume_key_window_g1

0xf331,	// (0x00036b88) popup_side_volume_key_window_t1

0x9a6a,	// (0x000312c1) volume_small_pane_cp1

0xc2db,	// (0x00033b32) bg_popup_sub_pane_cp24_ParamLimits

0xc2db,	// (0x00033b32) bg_popup_sub_pane_cp24

0xcb68,	// (0x000343bf) fep_china_uni_candidate_pane_ParamLimits

0xcb68,	// (0x000343bf) fep_china_uni_candidate_pane

0xcb7c,	// (0x000343d3) fep_china_uni_entry_pane

0xcb8c,	// (0x000343e3) popup_fep_china_uni_window_g1

0x9a72,	// (0x000312c9) fep_china_uni_entry_pane_g1

0x9a7a,	// (0x000312d1) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00036f45) fep_china_uni_entry_pane_g

0xcba8,	// (0x000343ff) fep_entry_item_pane

0xcbb2,	// (0x00034409) fep_candidate_item_pane

0x9a82,	// (0x000312d9) fep_china_uni_candidate_pane_g1

0xcbba,	// (0x00034411) fep_china_uni_candidate_pane_g2

0xcbc2,	// (0x00034419) fep_china_uni_candidate_pane_g3

0x9a8a,	// (0x000312e1) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00036f4a) fep_china_uni_candidate_pane_g

0xc283,	// (0x00033ada) fep_entry_item_pane_g1

0xcbca,	// (0x00034421) fep_entry_item_pane_t1_ParamLimits

0xcbca,	// (0x00034421) fep_entry_item_pane_t1

0xcbe0,	// (0x00034437) fep_candidate_item_pane_t1_ParamLimits

0xcbe0,	// (0x00034437) fep_candidate_item_pane_t1

0xcbf5,	// (0x0003444c) fep_candidate_item_pane_t2_ParamLimits

0xcbf5,	// (0x0003444c) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00036f53) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00036f53) fep_candidate_item_pane_t

0xc2e9,	// (0x00033b40) list_highlight_pane_cp31_ParamLimits

0xc2e9,	// (0x00033b40) list_highlight_pane_cp31

0xcc07,	// (0x0003445e) level_1_signal_lsc

0xcc10,	// (0x00034467) level_2_signal_lsc

0xcc19,	// (0x00034470) level_3_signal_lsc

0xcc22,	// (0x00034479) level_4_signal_lsc

0xcc2b,	// (0x00034482) level_5_signal_lsc

0xcc34,	// (0x0003448b) level_6_signal_lsc

0xcc3d,	// (0x00034494) level_7_signal_lsc

0xcc3d,	// (0x00034494) level_1_battery_lsc

0xcc46,	// (0x0003449d) level_2_battery_lsc

0xcc4f,	// (0x000344a6) level_3_battery_lsc

0xcc58,	// (0x000344af) level_4_battery_lsc

0xcc61,	// (0x000344b8) level_5_battery_lsc

0xcc6a,	// (0x000344c1) level_6_battery_lsc

0xcc07,	// (0x0003445e) level_7_battery_lsc

0xcc73,	// (0x000344ca) scroll_handle_focus_pane_g1

0xcc7c,	// (0x000344d3) scroll_handle_focus_pane_g2

0xcc85,	// (0x000344dc) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00036f58) scroll_handle_focus_pane_g

0x8a9d,	// (0x000302f4) list_single_2graphic_pane_g1_ParamLimits

0x8a9d,	// (0x000302f4) list_single_2graphic_pane_g1

0x864b,	// (0x0002fea2) list_single_2graphic_pane_g2_ParamLimits

0x864b,	// (0x0002fea2) list_single_2graphic_pane_g2

0xe83a,	// (0x00036091) list_single_2graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036091) list_single_2graphic_pane_g3

0x8aa9,	// (0x00030300) list_single_2graphic_pane_g4_ParamLimits

0x8aa9,	// (0x00030300) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00036f5f) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00036f5f) list_single_2graphic_pane_g

0x8aba,	// (0x00030311) list_single_2graphic_pane_t1_ParamLimits

0x8aba,	// (0x00030311) list_single_2graphic_pane_t1

0x8ae8,	// (0x0003033f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ae8,	// (0x0003033f) list_double2_graphic_large_graphic_pane_g1

0x869e,	// (0x0002fef5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fef5) list_double2_graphic_large_graphic_pane_g2

0xe8cc,	// (0x00036123) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x00036123) list_double2_graphic_large_graphic_pane_g3

0xea0d,	// (0x00036264) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xea0d,	// (0x00036264) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00036f68) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00036f68) list_double2_graphic_large_graphic_pane_g

0xea19,	// (0x00036270) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xea19,	// (0x00036270) list_double2_graphic_large_graphic_pane_t1

0xea2f,	// (0x00036286) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xea2f,	// (0x00036286) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00036f71) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00036f71) list_double2_graphic_large_graphic_pane_t

0x9b05,	// (0x0003135c) popup_fast_swap_window_ParamLimits

0x9b05,	// (0x0003135c) popup_fast_swap_window

0x9b21,	// (0x00031378) popup_side_volume_key_window

0xcd3b,	// (0x00034592) stacon_top_pane

0xcd45,	// (0x0003459c) status_pane_ParamLimits

0xcd45,	// (0x0003459c) status_pane

0xc279,	// (0x00033ad0) status_small_pane

0xc28d,	// (0x00033ae4) control_pane

0xc28d,	// (0x00033ae4) stacon_bottom_pane

0xc682,	// (0x00033ed9) scroll_pane_cp121

0xc679,	// (0x00033ed0) set_content_pane

0x9a92,	// (0x000312e9) bg_active_tab_pane_g1_cp1

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp1

0x9aa4,	// (0x000312fb) bg_active_tab_pane_g3_cp1

0x9a92,	// (0x000312e9) bg_passive_tab_pane_g1_cp1

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp1

0x9aa4,	// (0x000312fb) bg_passive_tab_pane_g3_cp1

0x9aad,	// (0x00031304) bg_active_tab_pane_g1_cp2

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp2

0x9ab6,	// (0x0003130d) bg_active_tab_pane_g3_cp2

0x9aad,	// (0x00031304) bg_passive_tab_pane_g1_cp2

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp2

0x9ab6,	// (0x0003130d) bg_passive_tab_pane_g3_cp2

0x9abf,	// (0x00031316) bg_active_tab_pane_g1_cp3

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp3

0x9ac8,	// (0x0003131f) bg_active_tab_pane_g3_cp3

0x9abf,	// (0x00031316) bg_passive_tab_pane_g1_cp3

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp3

0x9ac8,	// (0x0003131f) bg_passive_tab_pane_g3_cp3

0x9ad1,	// (0x00031328) bg_active_tab_pane_g1_cp4

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp4

0x9adc,	// (0x00031333) bg_active_tab_pane_g3_cp4

0x9ad1,	// (0x00031328) bg_passive_tab_pane_g1_cp4

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp4

0x9adc,	// (0x00031333) bg_passive_tab_pane_g3_cp4

0x9ae7,	// (0x0003133e) bg_active_tab_pane_g1_cp5

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp5

0x9af0,	// (0x00031347) bg_active_tab_pane_g3_cp5

0x9ae7,	// (0x0003133e) bg_passive_tab_pane_g1_cp5

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp5

0x9af0,	// (0x00031347) bg_passive_tab_pane_g3_cp5

0x3c71,	// (0x0002b4c8) list_set_graphic_pane_ParamLimits

0x3c71,	// (0x0002b4c8) list_set_graphic_pane

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp4

0xcccc,	// (0x00034523) list_set_graphic_pane_g1_ParamLimits

0xcccc,	// (0x00034523) list_set_graphic_pane_g1

0xccd8,	// (0x0003452f) list_set_graphic_pane_g2_ParamLimits

0xccd8,	// (0x0003452f) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00036f76) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00036f76) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x00037307) volume_small_pane_cp_g

0x9af9,	// (0x00031350) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9af9,	// (0x00031350) list_double2_large_graphic_pane_g1_cp2

0xccfa,	// (0x00034551) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xccfa,	// (0x00034551) list_double2_large_graphic_pane_g2_cp2

0xcd0b,	// (0x00034562) list_double2_large_graphic_pane_g3_cp2

0xcd13,	// (0x0003456a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcd13,	// (0x0003456a) list_double2_large_graphic_pane_t1_cp2

0xcd29,	// (0x00034580) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcd29,	// (0x00034580) list_double2_large_graphic_pane_t2_cp2

0xb019,	// (0x00032870) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb019,	// (0x00032870) list_double_large_graphic_pane_g1_cp2

0x3234,	// (0x0002aa8b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3234,	// (0x0002aa8b) list_double_large_graphic_pane_g2_cp2

0xce61,	// (0x000346b8) list_double_large_graphic_pane_g3_cp2

0x3245,	// (0x0002aa9c) list_double_large_graphic_pane_g4_cp

0x324d,	// (0x0002aaa4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x324d,	// (0x0002aaa4) list_double_large_graphic_pane_t1_cp2

0x3264,	// (0x0002aabb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3264,	// (0x0002aabb) list_double_large_graphic_pane_t2_cp2

0xcd53,	// (0x000345aa) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcd53,	// (0x000345aa) list_double2_graphic_pane_g1_cp2

0xcd61,	// (0x000345b8) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcd61,	// (0x000345b8) list_double2_graphic_pane_g2_cp2

0xcd72,	// (0x000345c9) list_double2_graphic_pane_g3_cp2

0xcd7c,	// (0x000345d3) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcd7c,	// (0x000345d3) list_double2_graphic_pane_t1_cp2

0xcd92,	// (0x000345e9) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcd92,	// (0x000345e9) list_double2_graphic_pane_t2_cp2

0xcda4,	// (0x000345fb) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcda4,	// (0x000345fb) list_single_number_heading_pane_g1_cp2

0xcdb0,	// (0x00034607) list_single_number_heading_pane_g2_cp2

0xcdb8,	// (0x0003460f) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcdb8,	// (0x0003460f) list_single_number_heading_pane_t1_cp2

0xcdce,	// (0x00034625) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcdce,	// (0x00034625) list_single_number_heading_pane_t2_cp2

0xcde0,	// (0x00034637) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcde0,	// (0x00034637) list_single_number_heading_pane_t3_cp2

0xcda4,	// (0x000345fb) list_single_heading_pane_g1_cp2_ParamLimits

0xcda4,	// (0x000345fb) list_single_heading_pane_g1_cp2

0xcdb0,	// (0x00034607) list_single_heading_pane_g2_cp2

0xcdb8,	// (0x0003460f) list_single_heading_pane_t1_cp2_ParamLimits

0xcdb8,	// (0x0003460f) list_single_heading_pane_t1_cp2

0x302d,	// (0x0002a884) list_single_heading_pane_t2_cp2_ParamLimits

0x302d,	// (0x0002a884) list_single_heading_pane_t2_cp2

0x2f75,	// (0x0002a7cc) list_double_graphic_pane_g1_cp2_ParamLimits

0x2f75,	// (0x0002a7cc) list_double_graphic_pane_g1_cp2

0x2f81,	// (0x0002a7d8) list_double_graphic_pane_g2_cp2_ParamLimits

0x2f81,	// (0x0002a7d8) list_double_graphic_pane_g2_cp2

0x2f90,	// (0x0002a7e7) list_double_graphic_pane_g3_cp2

0x2f98,	// (0x0002a7ef) list_double_graphic_pane_t1_cp2_ParamLimits

0x2f98,	// (0x0002a7ef) list_double_graphic_pane_t1_cp2

0x2fae,	// (0x0002a805) list_double_graphic_pane_t2_cp2_ParamLimits

0x2fae,	// (0x0002a805) list_double_graphic_pane_t2_cp2

0xce55,	// (0x000346ac) list_double_number_pane_g1_cp2_ParamLimits

0xce55,	// (0x000346ac) list_double_number_pane_g1_cp2

0xce61,	// (0x000346b8) list_double_number_pane_g2_cp2

0x2f39,	// (0x0002a790) list_double_number_pane_t1_cp2_ParamLimits

0x2f39,	// (0x0002a790) list_double_number_pane_t1_cp2

0x2f4d,	// (0x0002a7a4) list_double_number_pane_t2_cp2_ParamLimits

0x2f4d,	// (0x0002a7a4) list_double_number_pane_t2_cp2

0x2f63,	// (0x0002a7ba) list_double_number_pane_t3_cp2_ParamLimits

0x2f63,	// (0x0002a7ba) list_double_number_pane_t3_cp2

0x2e22,	// (0x0002a679) list_single_graphic_pane_g1_cp2_ParamLimits

0x2e22,	// (0x0002a679) list_single_graphic_pane_g1_cp2

0xceba,	// (0x00034711) list_single_graphic_pane_g2_cp2_ParamLimits

0xceba,	// (0x00034711) list_single_graphic_pane_g2_cp2

0xcec6,	// (0x0003471d) list_single_graphic_pane_g3_cp2

0x2df8,	// (0x0002a64f) list_single_graphic_pane_t1_cp2_ParamLimits

0x2df8,	// (0x0002a64f) list_single_graphic_pane_t1_cp2

0xceba,	// (0x00034711) list_single_number_pane_g1_cp2_ParamLimits

0xceba,	// (0x00034711) list_single_number_pane_g1_cp2

0xcec6,	// (0x0003471d) list_single_number_pane_g2_cp2

0x2df8,	// (0x0002a64f) list_single_number_pane_t1_cp2_ParamLimits

0x2df8,	// (0x0002a64f) list_single_number_pane_t1_cp2

0x2e0e,	// (0x0002a665) list_single_number_pane_t2_cp2_ParamLimits

0x2e0e,	// (0x0002a665) list_single_number_pane_t2_cp2

0xccfa,	// (0x00034551) list_double2_pane_g1_cp2_ParamLimits

0xccfa,	// (0x00034551) list_double2_pane_g1_cp2

0xcd0b,	// (0x00034562) list_double2_pane_g2_cp2

0xce2d,	// (0x00034684) list_double2_pane_t1_cp2_ParamLimits

0xce2d,	// (0x00034684) list_double2_pane_t1_cp2

0xce43,	// (0x0003469a) list_double2_pane_t2_cp2_ParamLimits

0xce43,	// (0x0003469a) list_double2_pane_t2_cp2

0xce55,	// (0x000346ac) list_double_pane_g1_cp2_ParamLimits

0xce55,	// (0x000346ac) list_double_pane_g1_cp2

0xce61,	// (0x000346b8) list_double_pane_g2_cp2

0xce69,	// (0x000346c0) list_double_pane_t1_cp2_ParamLimits

0xce69,	// (0x000346c0) list_double_pane_t1_cp2

0xce7f,	// (0x000346d6) list_double_pane_t2_cp2_ParamLimits

0xce7f,	// (0x000346d6) list_double_pane_t2_cp2

0x9b3b,	// (0x00031392) list_single_pane_cp2_g3

0xceba,	// (0x00034711) list_single_pane_g1_cp2_ParamLimits

0xceba,	// (0x00034711) list_single_pane_g1_cp2

0xcec6,	// (0x0003471d) list_single_pane_g2_cp2

0xcece,	// (0x00034725) list_single_pane_t1_cp2_ParamLimits

0xcece,	// (0x00034725) list_single_pane_t1_cp2

0x9b43,	// (0x0003139a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9b43,	// (0x0003139a) list_single_large_graphic_pane_g1_cp2

0xcee6,	// (0x0003473d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcee6,	// (0x0003473d) list_single_large_graphic_pane_g2_cp2

0xcef2,	// (0x00034749) list_single_large_graphic_pane_g3_cp2

0x9b4f,	// (0x000313a6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b4f,	// (0x000313a6) list_single_large_graphic_pane_g4_cp1

0xcefa,	// (0x00034751) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcefa,	// (0x00034751) list_single_large_graphic_pane_t1_cp2

0x2dc4,	// (0x0002a61b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2dc4,	// (0x0002a61b) list_single_graphic_heading_pane_g1_cp2

0x2d91,	// (0x0002a5e8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2d91,	// (0x0002a5e8) list_single_graphic_heading_pane_g4_cp2

0xcec6,	// (0x0003471d) list_single_graphic_heading_pane_g5_cp2

0x2dd0,	// (0x0002a627) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2dd0,	// (0x0002a627) list_single_graphic_heading_pane_t1_cp2

0x2de6,	// (0x0002a63d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2de6,	// (0x0002a63d) list_single_graphic_heading_pane_t2_cp2

0x2d85,	// (0x0002a5dc) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2d85,	// (0x0002a5dc) list_single_2graphic_pane_g1_cp2

0x2d91,	// (0x0002a5e8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2d91,	// (0x0002a5e8) list_single_2graphic_pane_g2_cp2

0xcec6,	// (0x0003471d) list_single_2graphic_pane_g3_cp2

0x2da2,	// (0x0002a5f9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2da2,	// (0x0002a5f9) list_single_2graphic_pane_g4_cp2

0x2dae,	// (0x0002a605) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2dae,	// (0x0002a605) list_single_2graphic_pane_t1_cp2

0xc283,	// (0x00033ada) list_highlight_pane_g10_cp1

0x296d,	// (0x0002a1c4) list_highlight_pane_g1_cp1

0x2975,	// (0x0002a1cc) list_highlight_pane_g2_cp1

0x297d,	// (0x0002a1d4) list_highlight_pane_g3_cp1

0x2985,	// (0x0002a1dc) list_highlight_pane_g4_cp1

0x298d,	// (0x0002a1e4) list_highlight_pane_g5_cp1

0x2995,	// (0x0002a1ec) list_highlight_pane_g6_cp1

0x299d,	// (0x0002a1f4) list_highlight_pane_g7_cp1

0x29a5,	// (0x0002a1fc) list_highlight_pane_g8_cp1

0x29ad,	// (0x0002a204) list_highlight_pane_g9_cp1

0xada6,	// (0x000325fd) form_field_slider_pane_t3

0xadb4,	// (0x0003260b) form_field_slider_pane_t4

0x150e,	// (0x00028d65) slider_form_pane_ParamLimits

0x150e,	// (0x00028d65) slider_form_pane

0xc28d,	// (0x00033ae4) control_abbreviations

0xc28d,	// (0x00033ae4) control_conventions

0xc28d,	// (0x00033ae4) control_definitions

0xc28d,	// (0x00033ae4) format_table_attribute

0xaff0,	// (0x00032847) bg_popup_preview_window_pane_g9

0xc28d,	// (0x00033ae4) format_table_data2

0xc28d,	// (0x00033ae4) format_table_data3

0xc28d,	// (0x00033ae4) format_table_data_example

0x0008,

0xc28d,	// (0x00033ae4) intro_purpose

0xf8b6,	// (0x0003710d) bg_popup_preview_window_pane_g

0xc28d,	// (0x00033ae4) texts_category

0xc28d,	// (0x00033ae4) texts_graphics

0xcf10,	// (0x00034767) text_digital

0xcf1f,	// (0x00034776) text_primary

0xcf2e,	// (0x00034785) text_primary_small

0xcf3d,	// (0x00034794) text_secondary

0xcf4c,	// (0x000347a3) text_title

0xb41b,	// (0x00032c72) bg_passive_tab_pane_g1_cp3_srt

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp3_srt

0xb424,	// (0x00032c7b) bg_passive_tab_pane_g3_cp3_srt

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp3_srt_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp3_srt

0xb42d,	// (0x00032c84) tabs_4_active_pane_srt_g1

0xb435,	// (0x00032c8c) tabs_4_active_pane_srt_t1_ParamLimits

0xb435,	// (0x00032c8c) tabs_4_active_pane_srt_t1

0xb41b,	// (0x00032c72) bg_active_tab_pane_g1_cp3_copy1

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp3_copy1

0xb424,	// (0x00032c7b) bg_active_tab_pane_g3_cp3_copy1

0xc2e9,	// (0x00033b40) tabs_2_long_active_pane_srt_ParamLimits

0xc2e9,	// (0x00033b40) tabs_2_long_active_pane_srt

0xc2e9,	// (0x00033b40) tabs_2_long_passive_pane_srt_ParamLimits

0xc2e9,	// (0x00033b40) tabs_2_long_passive_pane_srt

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp4_srt

0xb160,	// (0x000329b7) bg_passive_tab_pane_g1_cp4_srt

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp4_srt

0xb169,	// (0x000329c0) bg_passive_tab_pane_g3_cp4_srt

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp4_srt_ParamLimits

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp4_srt

0xb172,	// (0x000329c9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb172,	// (0x000329c9) tabs_2_long_active_pane_srt_t1

0xb160,	// (0x000329b7) bg_active_tab_pane_g1_cp4_srt

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp4_srt

0xb169,	// (0x000329c0) bg_active_tab_pane_g3_cp4_srt

0xc2db,	// (0x00033b32) tabs_3_long_active_pane_srt_ParamLimits

0xc2db,	// (0x00033b32) tabs_3_long_active_pane_srt

0xc2db,	// (0x00033b32) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc2db,	// (0x00033b32) tabs_3_long_passive_pane_cp_srt

0xc2db,	// (0x00033b32) tabs_3_long_passive_pane_srt_ParamLimits

0xc2db,	// (0x00033b32) tabs_3_long_passive_pane_srt

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp5_srt

0x9ae7,	// (0x0003133e) bg_passive_tab_pane_g1_cp5_srt

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp5_srt

0x9af0,	// (0x00031347) bg_passive_tab_pane_g3_cp5_srt

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp5_srt_ParamLimits

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp5_srt

0xb14a,	// (0x000329a1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb14a,	// (0x000329a1) tabs_3_long_active_pane_srt_t1

0x9ae7,	// (0x0003133e) bg_active_tab_pane_g1_cp5_srt

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp5_srt

0x9af0,	// (0x00031347) bg_active_tab_pane_g3_cp5_srt

0x3478,	// (0x0002accf) navi_text_pane_srt_t1

0x3470,	// (0x0002acc7) navi_icon_pane_srt_g1

0xd037,	// (0x0003488e) midp_editing_number_pane_srt

0xcf5b,	// (0x000347b2) midp_ticker_pane_srt

0xd03f,	// (0x00034896) midp_ticker_pane_srt_g1

0xd047,	// (0x0003489e) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00036f95) midp_ticker_pane_srt_g

0xd04f,	// (0x000348a6) midp_ticker_pane_srt_t1

0x3461,	// (0x0002acb8) midp_editing_number_pane_t1_copy1

0x9b69,	// (0x000313c0) listscroll_midp_pane

0x9b69,	// (0x000313c0) midp_form_pane

0x9bd4,	// (0x0003142b) midp_info_popup_window_ParamLimits

0x9bd4,	// (0x0003142b) midp_info_popup_window

0xc77c,	// (0x00033fd3) bg_popup_sub_pane_cp50_ParamLimits

0xc77c,	// (0x00033fd3) bg_popup_sub_pane_cp50

0x11fe,	// (0x00028a55) listscroll_midp_info_pane_ParamLimits

0x11fe,	// (0x00028a55) listscroll_midp_info_pane

0x11de,	// (0x00028a35) listscroll_form_midp_pane_ParamLimits

0x11de,	// (0x00028a35) listscroll_form_midp_pane

0x11ea,	// (0x00028a41) scroll_bar_cp050

0x11de,	// (0x00028a35) list_midp_pane

0xb61b,	// (0x00032e72) signal_pane_g2_cp

0x10f8,	// (0x0002894f) listscroll_midp_info_pane_t1_ParamLimits

0x10f8,	// (0x0002894f) listscroll_midp_info_pane_t1

0xabe0,	// (0x00032437) listscroll_midp_info_pane_t2_ParamLimits

0xabe0,	// (0x00032437) listscroll_midp_info_pane_t2

0xac1e,	// (0x00032475) listscroll_midp_info_pane_t3_ParamLimits

0xac1e,	// (0x00032475) listscroll_midp_info_pane_t3

0xac58,	// (0x000324af) listscroll_midp_info_pane_t4_ParamLimits

0xac58,	// (0x000324af) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00037048) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00037048) listscroll_midp_info_pane_t

0xc7d1,	// (0x00034028) scroll_pane_cp21

0x1098,	// (0x000288ef) form_midp_field_choice_group_pane

0xaba3,	// (0x000323fa) form_midp_field_text_pane

0x10de,	// (0x00028935) form_midp_field_time_pane

0x10e6,	// (0x0002893d) form_midp_gauge_slider_pane

0x10ef,	// (0x00028946) form_midp_gauge_wait_pane

0xc28d,	// (0x00033ae4) form_midp_image_pane

0x8afa,	// (0x00030351) list_single_midp_pane_ParamLimits

0x8afa,	// (0x00030351) list_single_midp_pane

0xab81,	// (0x000323d8) form_midp_field_text_pane_t1

0x0d8f,	// (0x000285e6) input_focus_pane_cp050

0x1087,	// (0x000288de) list_midp_form_text_pane

0x101c,	// (0x00028873) form_midp_field_choice_group_pane_t1

0x102a,	// (0x00028881) input_focus_pane_cp051

0x103e,	// (0x00028895) list_midp_choice_pane

0xc28d,	// (0x00033ae4) status_idle_pane

0x1000,	// (0x00028857) form_midp_field_time_pane_t1

0xc283,	// (0x00033ada) wait_anim_pane_g2_copy1

0x100e,	// (0x00028865) form_midp_field_time_pane_t2

0x0001,

0xcfbb,	// (0x00034812) aid_navinavi_width_2_pane

0xf7ec,	// (0x00037043) form_midp_field_time_pane_t

0xc28d,	// (0x00033ae4) input_focus_pane_cp052

0xc28d,	// (0x00033ae4) bg_input_focus_pane_cp040

0x0fc0,	// (0x00028817) form_midp_gauge_slider_pane_t1

0x0fce,	// (0x00028825) form_midp_gauge_slider_pane_t2

0xab65,	// (0x000323bc) form_midp_gauge_slider_pane_t3

0xab73,	// (0x000323ca) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0003703a) form_midp_gauge_slider_pane_t

0x0ff8,	// (0x0002884f) form_midp_slider_pane

0xc2e9,	// (0x00033b40) bg_input_focus_pane_cp041_ParamLimits

0xc2e9,	// (0x00033b40) bg_input_focus_pane_cp041

0x0f8d,	// (0x000287e4) form_midp_gauge_wait_pane_t1_ParamLimits

0x0f8d,	// (0x000287e4) form_midp_gauge_wait_pane_t1

0x0f9f,	// (0x000287f6) form_midp_gauge_wait_pane_t2_ParamLimits

0x0f9f,	// (0x000287f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00037035) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00037035) form_midp_gauge_wait_pane_t

0x0fb1,	// (0x00028808) form_midp_wait_pane_ParamLimits

0x0fb1,	// (0x00028808) form_midp_wait_pane

0xab2f,	// (0x00032386) form_midp_image_pane_g1

0xab38,	// (0x0003238f) form_midp_image_pane_t1

0xab47,	// (0x0003239e) form_midp_image_pane_t2

0xab56,	// (0x000323ad) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0003702e) form_midp_image_pane_t

0x0f4e,	// (0x000287a5) list_single_midp_pane_g1

0xeb4d,	// (0x000363a4) list_single_midp_pane_t1

0xab1a,	// (0x00032371) list_midp_form_item_pane_ParamLimits

0xab1a,	// (0x00032371) list_midp_form_item_pane

0xcf63,	// (0x000347ba) list_midp_form_item_pane_t1

0xcf72,	// (0x000347c9) midp_ticker_pane_g1

0xcf7e,	// (0x000347d5) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00036f7b) midp_ticker_pane_g

0xcf8a,	// (0x000347e1) midp_ticker_pane_t1

0x36ae,	// (0x0002af05) midp_editing_number_pane_t1

0x368c,	// (0x0002aee3) midp_editing_number_pane

0x369b,	// (0x0002aef2) midp_ticker_pane

0x3451,	// (0x0002aca8) ai_message_heading_pane

0xc28d,	// (0x00033ae4) bg_popup_window_pane_cp14

0x3459,	// (0x0002acb0) listscroll_ai_message_pane

0x33db,	// (0x0002ac32) ai_message_heading_pane_g1_ParamLimits

0x33db,	// (0x0002ac32) ai_message_heading_pane_g1

0xb112,	// (0x00032969) ai_message_heading_pane_g2_ParamLimits

0xb112,	// (0x00032969) ai_message_heading_pane_g2

0x33f3,	// (0x0002ac4a) ai_message_heading_pane_g3_ParamLimits

0x33f3,	// (0x0002ac4a) ai_message_heading_pane_g3

0x33ff,	// (0x0002ac56) ai_message_heading_pane_g4_ParamLimits

0x33ff,	// (0x0002ac56) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x0003716f) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x0003716f) ai_message_heading_pane_g

0xb11e,	// (0x00032975) ai_message_heading_pane_t1_ParamLimits

0xb11e,	// (0x00032975) ai_message_heading_pane_t1

0xb138,	// (0x0003298f) ai_message_heading_pane_t2_ParamLimits

0xb138,	// (0x0003298f) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00037178) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00037178) ai_message_heading_pane_t

0x3437,	// (0x0002ac8e) bg_popup_heading_pane_cp1_ParamLimits

0x3437,	// (0x0002ac8e) bg_popup_heading_pane_cp1

0x33c9,	// (0x0002ac20) list_ai_message_pane_ParamLimits

0x33c9,	// (0x0002ac20) list_ai_message_pane

0xc7d1,	// (0x00034028) scroll_pane_cp10

0xb0ba,	// (0x00032911) list_ai_message_pane_g1

0x336d,	// (0x0002abc4) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x0003714c) list_ai_message_pane_g

0x3375,	// (0x0002abcc) list_ai_message_pane_t1_ParamLimits

0x3375,	// (0x0002abcc) list_ai_message_pane_t1

0x338a,	// (0x0002abe1) list_ai_message_pane_t2_ParamLimits

0x338a,	// (0x0002abe1) list_ai_message_pane_t2

0x339f,	// (0x0002abf6) list_ai_message_pane_t3_ParamLimits

0x339f,	// (0x0002abf6) list_ai_message_pane_t3

0x33b4,	// (0x0002ac0b) list_ai_message_pane_t4_ParamLimits

0x33b4,	// (0x0002ac0b) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00037151) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00037151) list_ai_message_pane_t

0xb096,	// (0x000328ed) cell_ai_soft_ind_pane_ParamLimits

0xb096,	// (0x000328ed) cell_ai_soft_ind_pane

0xcf9c,	// (0x000347f3) cell_ai_soft_ind_pane_g1_ParamLimits

0xcf9c,	// (0x000347f3) cell_ai_soft_ind_pane_g1

0xc28d,	// (0x00033ae4) grid_highlight_cp1

0xcfa9,	// (0x00034800) text_secondary_cp56_ParamLimits

0xcfa9,	// (0x00034800) text_secondary_cp56

0x3325,	// (0x0002ab7c) example_general_pane_ParamLimits

0x3325,	// (0x0002ab7c) example_general_pane

0x3331,	// (0x0002ab88) example_parent_pane_g1_ParamLimits

0x3331,	// (0x0002ab88) example_parent_pane_g1

0x333d,	// (0x0002ab94) example_parent_pane_t1_ParamLimits

0x333d,	// (0x0002ab94) example_parent_pane_t1

0xa29e,	// (0x00031af5) popup_preview_text_window_ParamLimits

0xa29e,	// (0x00031af5) popup_preview_text_window

0xceb2,	// (0x00034709) list_single_pane_cp2_g4

0xc4bb,	// (0x00033d12) bg_popup_preview_window_pane_ParamLimits

0xc4bb,	// (0x00033d12) bg_popup_preview_window_pane

0xaff8,	// (0x0003284f) popup_preview_text_window_t1_ParamLimits

0xaff8,	// (0x0003284f) popup_preview_text_window_t1

0x309d,	// (0x0002a8f4) popup_preview_text_window_t2_ParamLimits

0x309d,	// (0x0002a8f4) popup_preview_text_window_t2

0x30e6,	// (0x0002a93d) popup_preview_text_window_t3_ParamLimits

0x30e6,	// (0x0002a93d) popup_preview_text_window_t3

0x312b,	// (0x0002a982) popup_preview_text_window_t4_ParamLimits

0x312b,	// (0x0002a982) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00037120) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00037120) popup_preview_text_window_t

0x31a9,	// (0x0002aa00) scroll_pane_cp11

0x0c8b,	// (0x000284e2) bg_popup_preview_window_pane_g1

0xafb8,	// (0x0003280f) bg_popup_preview_window_pane_g2

0xafc0,	// (0x00032817) bg_popup_preview_window_pane_g3

0xafc8,	// (0x0003281f) bg_popup_preview_window_pane_g4

0xafd0,	// (0x00032827) bg_popup_preview_window_pane_g5

0xafd8,	// (0x0003282f) bg_popup_preview_window_pane_g6

0xafe0,	// (0x00032837) bg_popup_preview_window_pane_g7

0xafe8,	// (0x0003283f) bg_popup_preview_window_pane_g8

0xe7d3,	// (0x0003602a) aid_popup_width_pane

0xa21a,	// (0x00031a71) popup_midp_note_alarm_window_ParamLimits

0xa21a,	// (0x00031a71) popup_midp_note_alarm_window

0xc693,	// (0x00033eea) data_form_pane_ParamLimits

0x8903,	// (0x0003015a) form_field_data_pane_g1

0x890d,	// (0x00030164) form_field_data_pane_t1_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_ParamLimits

0x8927,	// (0x0003017e) data_form_wide_pane_ParamLimits

0x8938,	// (0x0003018f) form_field_data_wide_pane_g1

0x8944,	// (0x0003019b) form_field_data_wide_pane_t1_ParamLimits

0xc593,	// (0x00033dea) input_focus_pane_cp6_ParamLimits

0x9769,	// (0x00030fc0) input_popup_find_pane_g1_ParamLimits

0x9769,	// (0x00030fc0) input_popup_find_pane_g1

0xf200,	// (0x00036a57) aid_navi_side_left_pane

0xf215,	// (0x00036a6c) aid_navi_side_right_pane

0x2a68,	// (0x0002a2bf) bg_popup_window_pane_cp30_ParamLimits

0x2a68,	// (0x0002a2bf) bg_popup_window_pane_cp30

0x2ae2,	// (0x0002a339) popup_midp_note_alarm_window_g1_ParamLimits

0x2ae2,	// (0x0002a339) popup_midp_note_alarm_window_g1

0x2b12,	// (0x0002a369) popup_midp_note_alarm_window_t1_ParamLimits

0x2b12,	// (0x0002a369) popup_midp_note_alarm_window_t1

0xadf9,	// (0x00032650) popup_midp_note_alarm_window_t2_ParamLimits

0xadf9,	// (0x00032650) popup_midp_note_alarm_window_t2

0xaea7,	// (0x000326fe) popup_midp_note_alarm_window_t3_ParamLimits

0xaea7,	// (0x000326fe) popup_midp_note_alarm_window_t3

0xaecf,	// (0x00032726) popup_midp_note_alarm_window_t4_ParamLimits

0xaecf,	// (0x00032726) popup_midp_note_alarm_window_t4

0x2ca9,	// (0x0002a500) popup_midp_note_alarm_window_t5_ParamLimits

0x2ca9,	// (0x0002a500) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x000370bd) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x000370bd) popup_midp_note_alarm_window_t

0x2d55,	// (0x0002a5ac) wait_bar_pane_cp1_ParamLimits

0x2d55,	// (0x0002a5ac) wait_bar_pane_cp1

0xc28d,	// (0x00033ae4) wait_anim_pane_copy1

0xc28d,	// (0x00033ae4) wait_border_pane_copy1

0x13bb,	// (0x00028c12) wait_border_pane_g1_copy1

0x895e,	// (0x000301b5) form_field_popup_pane_g1

0x8966,	// (0x000301bd) form_field_popup_pane_t1_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_cp7_ParamLimits

0xc6cd,	// (0x00033f24) list_form_pane_ParamLimits

0x8980,	// (0x000301d7) form_field_popup_wide_pane_g1

0x8988,	// (0x000301df) form_field_popup_wide_pane_t1_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_cp8_ParamLimits

0xc6d9,	// (0x00033f30) list_form_wide_pane_ParamLimits

0x3847,	// (0x0002b09e) aid_size_cell_graphic_pane

0x8a14,	// (0x0003026b) data_form_pane_t1_ParamLimits

0x8b24,	// (0x0003037b) data_form_wide_pane_t1_ParamLimits

0xa6e1,	// (0x00031f38) bg_status_flat_pane

0x911b,	// (0x00030972) title_pane_t1_ParamLimits

0xc2a3,	// (0x00033afa) title_pane_t2_ParamLimits

0xc2c9,	// (0x00033b20) title_pane_t3_ParamLimits

0xf532,	// (0x00036d89) title_pane_t_ParamLimits

0xca86,	// (0x000342dd) level_1_signal_ParamLimits

0xca93,	// (0x000342ea) level_2_signal_ParamLimits

0xcaa0,	// (0x000342f7) level_3_signal_ParamLimits

0xcaad,	// (0x00034304) level_4_signal_ParamLimits

0xcaba,	// (0x00034311) level_5_signal_ParamLimits

0xcac7,	// (0x0003431e) level_6_signal_ParamLimits

0xcad4,	// (0x0003432b) level_7_signal_ParamLimits

0xca86,	// (0x000342dd) level_1_battery_ParamLimits

0xca93,	// (0x000342ea) level_2_battery_ParamLimits

0xcaa0,	// (0x000342f7) level_3_battery_ParamLimits

0xcaad,	// (0x00034304) level_4_battery_ParamLimits

0xcaba,	// (0x00034311) level_5_battery_ParamLimits

0xcac7,	// (0x0003431e) level_6_battery_ParamLimits

0xcad4,	// (0x0003432b) level_7_battery_ParamLimits

0x296d,	// (0x0002a1c4) bg_status_flat_pane_g1

0x2975,	// (0x0002a1cc) bg_status_flat_pane_g2

0x297d,	// (0x0002a1d4) bg_status_flat_pane_g3

0x2985,	// (0x0002a1dc) bg_status_flat_pane_g4

0x298d,	// (0x0002a1e4) bg_status_flat_pane_g5

0x2995,	// (0x0002a1ec) bg_status_flat_pane_g6

0x299d,	// (0x0002a1f4) bg_status_flat_pane_g7

0x91af,	// (0x00030a06) tabs_3_active_pane_t1_ParamLimits

0x91af,	// (0x00030a06) tabs_3_passive_pane_t1_ParamLimits

0x91c9,	// (0x00030a20) tabs_4_active_pane_t1_ParamLimits

0x91c9,	// (0x00030a20) tabs_4_1_passive_pane_t1_ParamLimits

0x97a8,	// (0x00030fff) tabs_2_active_pane_t1_ParamLimits

0x97a8,	// (0x00030fff) tabs_2_passive_pane_t1_ParamLimits

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp4_ParamLimits

0x97ba,	// (0x00031011) tabs_2_long_active_pane_t1_ParamLimits

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp4_ParamLimits

0x0d20,	// (0x00028577) list_single_midp_graphic_pane_t1_ParamLimits

0xc2e9,	// (0x00033b40) bg_active_tab_pane_cp5_ParamLimits

0x97cd,	// (0x00031024) tabs_3_long_active_pane_t1_ParamLimits

0xc7e1,	// (0x00034038) bg_passive_tab_pane_cp5_ParamLimits

0x0d20,	// (0x00028577) list_single_midp_graphic_pane_t1

0xa6e1,	// (0x00031f38) bg_status_flat_pane_ParamLimits

0x08ee,	// (0x00028145) indicator_pane_cp2_ParamLimits

0x08ee,	// (0x00028145) indicator_pane_cp2

0xa85f,	// (0x000320b6) navi_pane_srt_ParamLimits

0xa85f,	// (0x000320b6) navi_pane_srt

0x0a3d,	// (0x00028294) popup_clock_digital_analogue_window_cp1

0xc32d,	// (0x00033b84) indicator_pane_t1

0xcf5b,	// (0x000347b2) copy_highlight_pane

0xcf5b,	// (0x000347b2) cursor_graphics_pane

0xcf5b,	// (0x000347b2) graphic_within_text_pane

0xcf5b,	// (0x000347b2) link_highlight_pane

0x316c,	// (0x0002a9c3) popup_preview_text_window_t5_ParamLimits

0x316c,	// (0x0002a9c3) popup_preview_text_window_t5

0xcfc3,	// (0x0003481a) cursor_digital_pane

0xcfc3,	// (0x0003481a) cursor_primary_pane

0xcfd4,	// (0x0003482b) cursor_primary_small_pane

0xcfdc,	// (0x00034833) cursor_secondary_pane

0xcfe4,	// (0x0003483b) cursor_title_pane

0xcfc3,	// (0x0003481a) link_highlight_digital_pane

0xcfcb,	// (0x00034822) link_highlight_primary_pane

0xcfd4,	// (0x0003482b) link_highlight_primary_small_pane

0xcfdc,	// (0x00034833) link_highlight_secondary_pane

0xcfe4,	// (0x0003483b) link_highlight_title_pane

0xcfc3,	// (0x0003481a) copy_highlight_digital_pane

0xcfc3,	// (0x0003481a) copy_highlight_primary_pane

0xcfd4,	// (0x0003482b) copy_highlight_primary_small_pane

0xcfdc,	// (0x00034833) copy_highlight_secondary_pane

0xcfe4,	// (0x0003483b) copy_highlight_title_pane

0xcfdc,	// (0x00034833) graphic_text_digital_pane

0x2a0b,	// (0x0002a262) graphic_text_primary_pane

0x2a14,	// (0x0002a26b) graphic_text_primary_small_pane

0xcfd4,	// (0x0003482b) graphic_text_secondary_pane

0xcfc3,	// (0x0003481a) graphic_text_title_pane

0x9c25,	// (0x0003147c) cursor_primary_pane_g1

0x29fd,	// (0x0002a254) cursor_text_primary_t1

0xadef,	// (0x00032646) cursor_primary_small_pane_g1

0x29ef,	// (0x0002a246) cursor_text_primary_small_t1

0xade5,	// (0x0003263c) cursor_primary_small_pane_g1_copy1

0x29d7,	// (0x0002a22e) cursor_text_primary_small_t1_copy1

0x29b5,	// (0x0002a20c) cursor_text_title_t1

0xaddb,	// (0x00032632) cursor_title_pane_g1

0x9c25,	// (0x0003147c) cursor_digital_pane_g1

0xcfec,	// (0x00034843) cursor_text_digital_t1

0xcffa,	// (0x00034851) link_highlight_primary_pane_g1

0x295e,	// (0x0002a1b5) link_highlight_primary_pane_t1

0xcffa,	// (0x00034851) link_highlight_primary_small_pane_g1

0xd002,	// (0x00034859) link_highlight_primary_small_pane_t1

0xcffa,	// (0x00034851) link_highlight_secondary_pane_g1

0xd011,	// (0x00034868) link_highlight_secondary_pane_t1

0x1520,	// (0x00028d77) link_highlight_title_pane_g1

0x1537,	// (0x00028d8e) link_highlight_title_pane_t1

0x1520,	// (0x00028d77) link_highlight_digital_pane_g1

0x1528,	// (0x00028d7f) link_highlight_digital_pane_t1

0x13da,	// (0x00028c31) copy_highlight_primary_pane_g1

0x1400,	// (0x00028c57) copy_highlight_primary_pane_t1

0x13da,	// (0x00028c31) copy_highlight_primary_small_pane_g1

0x13f1,	// (0x00028c48) copy_highlight_primary_small_pane_t1

0xd020,	// (0x00034877) copy_highlight_secondary_pane_g1

0xd028,	// (0x0003487f) copy_highlight_secondary_pane_t1

0x13da,	// (0x00028c31) copy_highlight_title_pane_g1

0x13e2,	// (0x00028c39) copy_highlight_title_pane_t1

0x13da,	// (0x00028c31) copy_highlight_digital_pane_g1

0x3a15,	// (0x0002b26c) copy_highlight_digital_pane_t1

0x3969,	// (0x0002b1c0) graphic_text_primary_pane_g1

0x39f9,	// (0x0002b250) graphic_text_primary_pane_t1

0x3a07,	// (0x0002b25e) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x000371ec) graphic_text_primary_pane_t

0x39d5,	// (0x0002b22c) graphic_text_primary_small_pane_g1

0x39dd,	// (0x0002b234) graphic_text_primary_small_pane_t1

0x39eb,	// (0x0002b242) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x000371e7) graphic_text_primary_small_pane_t

0x39b1,	// (0x0002b208) graphic_text_secondary_pane_g1

0x39b9,	// (0x0002b210) graphic_text_secondary_pane_t1

0x39c7,	// (0x0002b21e) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x000371e2) graphic_text_secondary_pane_t

0x398d,	// (0x0002b1e4) graphic_text_title_pane_g1

0x3995,	// (0x0002b1ec) graphic_text_title_pane_t1

0x39a3,	// (0x0002b1fa) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x000371dd) graphic_text_title_pane_t

0x3969,	// (0x0002b1c0) graphic_text_digital_pane_g1

0x3971,	// (0x0002b1c8) graphic_text_digital_pane_t1

0x397f,	// (0x0002b1d6) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x000371d8) graphic_text_digital_pane_t

0xc2e9,	// (0x00033b40) navi_icon_pane_srt_ParamLimits

0xc2e9,	// (0x00033b40) navi_icon_pane_srt

0xc28d,	// (0x00033ae4) navi_midp_pane_srt

0xc28d,	// (0x00033ae4) navi_navi_pane_srt

0xc2e9,	// (0x00033b40) navi_text_pane_srt_ParamLimits

0xc2e9,	// (0x00033b40) navi_text_pane_srt

0x3934,	// (0x0002b18b) navi_navi_icon_text_pane_srt

0x393c,	// (0x0002b193) navi_navi_pane_srt_g1_ParamLimits

0x393c,	// (0x0002b193) navi_navi_pane_srt_g1

0x394e,	// (0x0002b1a5) navi_navi_pane_srt_g2_ParamLimits

0x394e,	// (0x0002b1a5) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x000371d3) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x000371d3) navi_navi_pane_srt_g

0x3960,	// (0x0002b1b7) navi_navi_tabs_pane_srt

0x3934,	// (0x0002b18b) navi_navi_text_pane_srt

0x3934,	// (0x0002b18b) navi_navi_volume_pane_srt

0x3925,	// (0x0002b17c) navi_navi_text_pane_srt_t1

0x1851,	// (0x000290a8) navi_navi_volume_pane_srt_g1

0x1859,	// (0x000290b0) volume_small_pane_srt_ParamLimits

0x1859,	// (0x000290b0) volume_small_pane_srt

0xf480,	// (0x00036cd7) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00036cd7) volume_small_pane_srt_g1

0xf490,	// (0x00036ce7) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00036ce7) volume_small_pane_srt_g2

0xf4a1,	// (0x00036cf8) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00036cf8) volume_small_pane_srt_g3

0xf4b2,	// (0x00036d09) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00036d09) volume_small_pane_srt_g4

0xf4c3,	// (0x00036d1a) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00036d1a) volume_small_pane_srt_g5

0xf4d4,	// (0x00036d2b) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00036d2b) volume_small_pane_srt_g6

0xf4e5,	// (0x00036d3c) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00036d3c) volume_small_pane_srt_g7

0xf4f6,	// (0x00036d4d) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00036d4d) volume_small_pane_srt_g8

0xf507,	// (0x00036d5e) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00036d5e) volume_small_pane_srt_g9

0xf518,	// (0x00036d6f) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00036d6f) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00036f80) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00036f80) volume_small_pane_srt_g

0x94b0,	// (0x00030d07) query_popup_data_pane_cp2

0x390b,	// (0x0002b162) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x390b,	// (0x0002b162) navi_navi_icon_text_pane_srt_t1

0x2a0b,	// (0x0002a262) navi_tabs_2_long_pane_srt

0x2a0b,	// (0x0002a262) navi_tabs_2_pane_srt

0x2a0b,	// (0x0002a262) navi_tabs_3_long_pane_srt

0x2a0b,	// (0x0002a262) navi_tabs_3_pane_srt

0x2a0b,	// (0x0002a262) navi_tabs_4_pane_srt

0xb521,	// (0x00032d78) tabs_2_active_pane_srt_ParamLimits

0xb521,	// (0x00032d78) tabs_2_active_pane_srt

0xb531,	// (0x00032d88) tabs_2_passive_pane_srt_ParamLimits

0xb531,	// (0x00032d88) tabs_2_passive_pane_srt

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp1_srt

0xb4f1,	// (0x00032d48) bg_passive_tab_pane_g1_cp1_srt

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp1_srt

0xb4fa,	// (0x00032d51) bg_passive_tab_pane_g3_cp1_srt

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp1_srt_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp1_srt

0xb503,	// (0x00032d5a) tabs_2_active_pane_srt_g1

0xb50b,	// (0x00032d62) tabs_2_active_pane_srt_t1_ParamLimits

0xb50b,	// (0x00032d62) tabs_2_active_pane_srt_t1

0xb4f1,	// (0x00032d48) bg_active_tab_pane_g1_cp1_srt

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp1_srt

0xb4fa,	// (0x00032d51) bg_active_tab_pane_g3_cp1_srt

0xb4be,	// (0x00032d15) tabs_3_active_pane_srt_ParamLimits

0xb4be,	// (0x00032d15) tabs_3_active_pane_srt

0xb4cf,	// (0x00032d26) tabs_3_passive_pane_cp_srt_ParamLimits

0xb4cf,	// (0x00032d26) tabs_3_passive_pane_cp_srt

0xb4e0,	// (0x00032d37) tabs_3_passive_pane_srt_ParamLimits

0xb4e0,	// (0x00032d37) tabs_3_passive_pane_srt

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0d8f,	// (0x000285e6) bg_passive_tab_pane_cp2_srt

0x9c2f,	// (0x00031486) bg_passive_tab_pane_g1_cp2_srt

0x9a9b,	// (0x000312f2) bg_passive_tab_pane_g2_cp2_srt

0x9c38,	// (0x0003148f) bg_passive_tab_pane_g3_cp2_srt

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp2_srt_ParamLimits

0xc2db,	// (0x00033b32) bg_active_tab_pane_cp2_srt

0xb4a0,	// (0x00032cf7) tabs_3_active_pane_srt_g1

0xb4a8,	// (0x00032cff) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a8,	// (0x00032cff) tabs_3_active_pane_srt_t1

0x9c2f,	// (0x00031486) bg_active_tab_pane_g1_cp2_srt

0x9a9b,	// (0x000312f2) bg_active_tab_pane_g2_cp2_srt

0x9c38,	// (0x0003148f) bg_active_tab_pane_g3_cp2_srt

0x17b6,	// (0x0002900d) tabs_4_active_pane_srt_ParamLimits

0x17b6,	// (0x0002900d) tabs_4_active_pane_srt

0x17c8,	// (0x0002901f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17c8,	// (0x0002901f) tabs_4_passive_pane_cp2_srt

0x01b5,	// (0x00027a0c) aid_size_cell_toolbar

0x3509,	// (0x0002ad60) main_idle_act_pane_ParamLimits

0x0350,	// (0x00027ba7) popup_large_graphic_colour_window_ParamLimits

0xa550,	// (0x00031da7) popup_toolbar_window_ParamLimits

0xa550,	// (0x00031da7) popup_toolbar_window

0x36bd,	// (0x0002af14) list_single_graphic_2heading_pane_ParamLimits

0x36bd,	// (0x0002af14) list_single_graphic_2heading_pane

0xc96e,	// (0x000341c5) aid_size_cell_apps_grid_lsc_pane

0xc980,	// (0x000341d7) aid_size_cell_apps_grid_prt_pane

0xc7e1,	// (0x00034038) bg_wml_button_pane_cp1_ParamLimits

0xc7e1,	// (0x00034038) bg_wml_button_pane_cp1

0xab81,	// (0x000323d8) form_midp_field_text_pane_t1_ParamLimits

0x0d8f,	// (0x000285e6) input_focus_pane_cp050_ParamLimits

0x1087,	// (0x000288de) list_midp_form_text_pane_ParamLimits

0x102a,	// (0x00028881) input_focus_pane_cp051_ParamLimits

0x103e,	// (0x00028895) list_midp_choice_pane_ParamLimits

0xaae6,	// (0x0003233d) list_single_2graphic_pane_cp3_ParamLimits

0xaae6,	// (0x0003233d) list_single_2graphic_pane_cp3

0xaafa,	// (0x00032351) list_single_midp_graphic_pane_ParamLimits

0xaafa,	// (0x00032351) list_single_midp_graphic_pane

0xea51,	// (0x000362a8) list_single_graphic_2heading_pane_g1_ParamLimits

0xea51,	// (0x000362a8) list_single_graphic_2heading_pane_g1

0xe82e,	// (0x00036085) list_single_graphic_2heading_pane_g4_ParamLimits

0xe82e,	// (0x00036085) list_single_graphic_2heading_pane_g4

0xe83a,	// (0x00036091) list_single_graphic_2heading_pane_g5_ParamLimits

0xe83a,	// (0x00036091) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00036fd3) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00036fd3) list_single_graphic_2heading_pane_g

0xea5d,	// (0x000362b4) list_single_graphic_2heading_pane_t1_ParamLimits

0xea5d,	// (0x000362b4) list_single_graphic_2heading_pane_t1

0xea71,	// (0x000362c8) list_single_graphic_2heading_pane_t2_ParamLimits

0xea71,	// (0x000362c8) list_single_graphic_2heading_pane_t2

0xea8b,	// (0x000362e2) list_single_graphic_2heading_pane_t3_ParamLimits

0xea8b,	// (0x000362e2) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00036fda) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00036fda) list_single_graphic_2heading_pane_t

0x0b99,	// (0x000283f0) bg_popup_sub_pane_cp2

0x0bc3,	// (0x0002841a) grid_toobar_pane

0x0bff,	// (0x00028456) cell_toolbar_pane_ParamLimits

0x0bff,	// (0x00028456) cell_toolbar_pane

0x0c2f,	// (0x00028486) cell_toolbar_pane_g1_ParamLimits

0x0c2f,	// (0x00028486) cell_toolbar_pane_g1

0xa9fe,	// (0x00032255) cell_toolbar_pane_g2_ParamLimits

0xa9fe,	// (0x00032255) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00036fe8) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00036fe8) cell_toolbar_pane_g

0x0c65,	// (0x000284bc) grid_highlight_pane_cp2_ParamLimits

0x0c65,	// (0x000284bc) grid_highlight_pane_cp2

0x0c7f,	// (0x000284d6) toolbar_button_pane

0x0c8b,	// (0x000284e2) toolbar_button_pane_g1

0x0c93,	// (0x000284ea) toolbar_button_pane_g2

0x0c9b,	// (0x000284f2) toolbar_button_pane_g3

0x0ca3,	// (0x000284fa) toolbar_button_pane_g4

0x0cab,	// (0x00028502) toolbar_button_pane_g5

0x0cb3,	// (0x0002850a) toolbar_button_pane_g6

0x0cbb,	// (0x00028512) toolbar_button_pane_g7

0x0cc3,	// (0x0002851a) toolbar_button_pane_g8

0x0ccb,	// (0x00028522) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00036fed) toolbar_button_pane_g

0x0cdb,	// (0x00028532) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0cdb,	// (0x00028532) list_single_2graphic_pane_g1_cp3

0xaa12,	// (0x00032269) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaa12,	// (0x00032269) list_single_2graphic_pane_g2_cp3

0xcdb0,	// (0x00034607) list_single_2graphic_pane_g3_cp3

0x0cf8,	// (0x0002854f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0cf8,	// (0x0002854f) list_single_2graphic_pane_g4_cp3

0xaa23,	// (0x0003227a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaa23,	// (0x0003227a) list_single_2graphic_pane_t1_cp3

0xcda4,	// (0x000345fb) list_single_midp_graphic_pane_g2_ParamLimits

0xcda4,	// (0x000345fb) list_single_midp_graphic_pane_g2

0x01bd,	// (0x00027a14) aid_zoom_text_primary

0xea41,	// (0x00036298) aid_zoom_text_secondary

0xd09d,	// (0x000348f4) status_small_pane_g7_ParamLimits

0xd09d,	// (0x000348f4) status_small_pane_g7

0x9c94,	// (0x000314eb) status_small_pane_t1_ParamLimits

0x90f7,	// (0x0003094e) title_pane_g2

0x0003,

0xf529,	// (0x00036d80) title_pane_g

0x950a,	// (0x00030d61) aid_size_cell_colour_1_pane_ParamLimits

0x950a,	// (0x00030d61) aid_size_cell_colour_1_pane

0x951e,	// (0x00030d75) aid_size_cell_colour_2_pane_ParamLimits

0x951e,	// (0x00030d75) aid_size_cell_colour_2_pane

0x9532,	// (0x00030d89) aid_size_cell_colour_3_pane_ParamLimits

0x9532,	// (0x00030d89) aid_size_cell_colour_3_pane

0x9546,	// (0x00030d9d) aid_size_cell_colour_4_pane_ParamLimits

0x9546,	// (0x00030d9d) aid_size_cell_colour_4_pane

0xf13d,	// (0x00036994) title_pane_stacon_g1_ParamLimits

0xf13d,	// (0x00036994) title_pane_stacon_g1

0x1457,	// (0x00028cae) popup_note_wait_window_g3_ParamLimits

0x1457,	// (0x00028cae) popup_note_wait_window_g3

0x14cd,	// (0x00028d24) popup_note_wait_window_t5_ParamLimits

0x14cd,	// (0x00028d24) popup_note_wait_window_t5

0xc28d,	// (0x00033ae4) main_feb_china_hwr_fs_writing_pane

0x9f04,	// (0x0003175b) popup_feb_china_hwr_fs_window_ParamLimits

0x9f04,	// (0x0003175b) popup_feb_china_hwr_fs_window

0xaa3f,	// (0x00032296) aid_size_cell_hwr_fs_ParamLimits

0xaa3f,	// (0x00032296) aid_size_cell_hwr_fs

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp3_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp3

0xaa54,	// (0x000322ab) grid_hwr_fs_pane_ParamLimits

0xaa54,	// (0x000322ab) grid_hwr_fs_pane

0x0db3,	// (0x0002860a) linegrid_hwr_fs_pane_ParamLimits

0x0db3,	// (0x0002860a) linegrid_hwr_fs_pane

0xaa6c,	// (0x000322c3) cell_hwr_fs_pane_ParamLimits

0xaa6c,	// (0x000322c3) cell_hwr_fs_pane

0x0de5,	// (0x0002863c) linegrid_hwr_fs_pane_g1_ParamLimits

0x0de5,	// (0x0002863c) linegrid_hwr_fs_pane_g1

0xaa92,	// (0x000322e9) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa92,	// (0x000322e9) linegrid_hwr_fs_pane_g2

0x0e03,	// (0x0002865a) linegrid_hwr_fs_pane_g3_ParamLimits

0x0e03,	// (0x0002865a) linegrid_hwr_fs_pane_g3

0xaaa4,	// (0x000322fb) linegrid_hwr_fs_pane_g4_ParamLimits

0xaaa4,	// (0x000322fb) linegrid_hwr_fs_pane_g4

0x0e29,	// (0x00028680) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e29,	// (0x00028680) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00037013) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00037013) linegrid_hwr_fs_pane_g

0x0e3f,	// (0x00028696) cell_hwr_fs_pane_g1_ParamLimits

0x0e3f,	// (0x00028696) cell_hwr_fs_pane_g1

0x0ad3,	// (0x0002832a) cell_hwr_fs_pane_g2_ParamLimits

0x0ad3,	// (0x0002832a) cell_hwr_fs_pane_g2

0xaabe,	// (0x00032315) cell_hwr_fs_pane_g3_ParamLimits

0xaabe,	// (0x00032315) cell_hwr_fs_pane_g3

0xaacb,	// (0x00032322) cell_hwr_fs_pane_g4_ParamLimits

0xaacb,	// (0x00032322) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0003701e) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0003701e) cell_hwr_fs_pane_g

0xaad8,	// (0x0003232f) cell_hwr_fs_pane_t1

0xc28d,	// (0x00033ae4) grid_highlight_pane_cp6

0xc28d,	// (0x00033ae4) main_idle_act2_pane

0xc7b8,	// (0x0003400f) aid_inside_area_popup_secondary

0xaf0e,	// (0x00032765) aid_inside_area_window_primary_ParamLimits

0xaf0e,	// (0x00032765) aid_inside_area_window_primary

0xb549,	// (0x00032da0) ai2_news_ticker_pane

0x3a2c,	// (0x0002b283) aid_size_cell_ai1_link_ParamLimits

0x3a2c,	// (0x0002b283) aid_size_cell_ai1_link

0xb551,	// (0x00032da8) popup_ai2_data_window_ParamLimits

0xb551,	// (0x00032da8) popup_ai2_data_window

0x3a5c,	// (0x0002b2b3) popup_ai2_link_window_ParamLimits

0x3a5c,	// (0x0002b2b3) popup_ai2_link_window

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp4_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp4

0x3a70,	// (0x0002b2c7) grid_ai2_link_pane_ParamLimits

0x3a70,	// (0x0002b2c7) grid_ai2_link_pane

0x3a87,	// (0x0002b2de) popup_ai2_link_window_g1_ParamLimits

0x3a87,	// (0x0002b2de) popup_ai2_link_window_g1

0x3a93,	// (0x0002b2ea) popup_ai2_link_window_g2_ParamLimits

0x3a93,	// (0x0002b2ea) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x000371f1) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x000371f1) popup_ai2_link_window_g

0x3aa2,	// (0x0002b2f9) ai2_mp_button_pane

0x3aaa,	// (0x0002b301) ai2_mp_volume_pane

0x102a,	// (0x00028881) bg_popup_sub_pane_cp5_ParamLimits

0x102a,	// (0x00028881) bg_popup_sub_pane_cp5

0x3ab2,	// (0x0002b309) heading_ai2_gene_pane_ParamLimits

0x3ab2,	// (0x0002b309) heading_ai2_gene_pane

0x3abe,	// (0x0002b315) list_ai2_gene_pane_ParamLimits

0x3abe,	// (0x0002b315) list_ai2_gene_pane

0x3b06,	// (0x0002b35d) cell_ai2_link_pane_ParamLimits

0x3b06,	// (0x0002b35d) cell_ai2_link_pane

0x3b1c,	// (0x0002b373) cell_ai2_link_pane_g1

0xc28d,	// (0x00033ae4) grid_highlight_pane_cp7

0x186e,	// (0x000290c5) ai2_mp_volume_pane_g1

0x3bec,	// (0x0002b443) ai2_mp_volume_pane_g2

0x3b61,	// (0x0002b3b8) list_ai2_gene_pane_t1

0x3bf4,	// (0x0002b44b) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0003720a) ai2_mp_volume_pane_g

0xb567,	// (0x00032dbe) volume_small_pane_cp3

0x3bfc,	// (0x0002b453) aid_size_cell_ai2_button

0x3c04,	// (0x0002b45b) grid_ai2_button_pane

0x3c0d,	// (0x0002b464) cell_ai2_button_pane_ParamLimits

0x3c0d,	// (0x0002b464) cell_ai2_button_pane

0xc283,	// (0x00033ada) cell_ai2_button_pane_g1

0xc28d,	// (0x00033ae4) grid_highlight_pane_cp8

0x3bac,	// (0x0002b403) ai2_gene_pane_t1_ParamLimits

0x3bac,	// (0x0002b403) ai2_gene_pane_t1

0x9e66,	// (0x000316bd) aid_height_parent_landscape

0xb228,	// (0x00032a7f) aid_height_set_list

0x3509,	// (0x0002ad60) aid_size_parent

0x3847,	// (0x0002b09e) aid_size_cell_graphic_pane_ParamLimits

0x3ace,	// (0x0002b325) popup_ai2_data_window_g1_ParamLimits

0x3ace,	// (0x0002b325) popup_ai2_data_window_g1

0x3ada,	// (0x0002b331) ai2_news_ticker_pane_g1

0x3ae2,	// (0x0002b339) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x000371f6) ai2_news_ticker_pane_g

0x3aea,	// (0x0002b341) ai2_news_ticker_pane_t1

0x3af8,	// (0x0002b34f) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x000371fb) ai2_news_ticker_pane_t

0x3b25,	// (0x0002b37c) heading_ai2_gene_pane_g1

0x3b2d,	// (0x0002b384) heading_ai2_gene_pane_t1_ParamLimits

0x3b2d,	// (0x0002b384) heading_ai2_gene_pane_t1

0x3b42,	// (0x0002b399) list_highlight_pane_cp6

0x3b4a,	// (0x0002b3a1) ai2_gene_pane_ParamLimits

0x3b4a,	// (0x0002b3a1) ai2_gene_pane

0x3b6f,	// (0x0002b3c6) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00037200) list_ai2_gene_pane_t

0x3b7d,	// (0x0002b3d4) list_highlight_pane_cp8_ParamLimits

0x3b7d,	// (0x0002b3d4) list_highlight_pane_cp8

0x3b8e,	// (0x0002b3e5) ai2_gene_pane_g1_ParamLimits

0x3b8e,	// (0x0002b3e5) ai2_gene_pane_g1

0x3ba0,	// (0x0002b3f7) ai2_gene_pane_g2_ParamLimits

0x3ba0,	// (0x0002b3f7) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00037205) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00037205) ai2_gene_pane_g

0xc63e,	// (0x00033e95) scroll_pane_cp12

0x9e23,	// (0x0003167a) control_pane_t3_ParamLimits

0x9e23,	// (0x0003167a) control_pane_t3

0x9c85,	// (0x000314dc) status_small_pane_g8_ParamLimits

0x9c85,	// (0x000314dc) status_small_pane_g8

0x9fc7,	// (0x0003181e) popup_find_window_ParamLimits

0xa254,	// (0x00031aab) popup_note_image_window_ParamLimits

0xe822,	// (0x00036079) list_double2_graphic_pane_vc_g1_ParamLimits

0xe822,	// (0x00036079) list_double2_graphic_pane_vc_g1

0xeaa3,	// (0x000362fa) list_double2_graphic_pane_vc_g2_ParamLimits

0xeaa3,	// (0x000362fa) list_double2_graphic_pane_vc_g2

0xeaaf,	// (0x00036306) list_double2_graphic_pane_vc_g3_ParamLimits

0xeaaf,	// (0x00036306) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00036fe1) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00036fe1) list_double2_graphic_pane_vc_g

0xe846,	// (0x0003609d) list_double2_graphic_pane_vc_t1_ParamLimits

0xe846,	// (0x0003609d) list_double2_graphic_pane_vc_t1

0xe82e,	// (0x00036085) list_single_heading_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_heading_pane_vc_g1

0xe83a,	// (0x00036091) list_single_heading_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_heading_pane_vc_g

0xeabb,	// (0x00036312) list_single_heading_pane_vc_t1_ParamLimits

0xeabb,	// (0x00036312) list_single_heading_pane_vc_t1

0xead1,	// (0x00036328) list_single_heading_pane_vc_t2_ParamLimits

0xead1,	// (0x00036328) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00037002) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00037002) list_single_heading_pane_vc_t

0x0d36,	// (0x0002858d) list_setting_number_pane_vc_g1_ParamLimits

0x0d36,	// (0x0002858d) list_setting_number_pane_vc_g1

0x0d42,	// (0x00028599) list_setting_number_pane_vc_g2_ParamLimits

0x0d42,	// (0x00028599) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00037007) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00037007) list_setting_number_pane_vc_g

0xeae3,	// (0x0003633a) list_setting_number_pane_vc_t1_ParamLimits

0xeae3,	// (0x0003633a) list_setting_number_pane_vc_t1

0xeaf7,	// (0x0003634e) list_setting_number_pane_vc_t2_ParamLimits

0xeaf7,	// (0x0003634e) list_setting_number_pane_vc_t2

0xeb13,	// (0x0003636a) list_setting_number_pane_vc_t3_ParamLimits

0xeb13,	// (0x0003636a) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0003700c) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0003700c) list_setting_number_pane_vc_t

0xeb3d,	// (0x00036394) set_value_pane_vc_ParamLimits

0xeb3d,	// (0x00036394) set_value_pane_vc

0x36bd,	// (0x0002af14) list_double2_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double2_graphic_pane_vc

0x36bd,	// (0x0002af14) list_double2_large_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double2_large_graphic_pane_vc

0x36bd,	// (0x0002af14) list_double2_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double2_pane_vc

0x36bd,	// (0x0002af14) list_double_graphic_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_graphic_heading_pane_vc

0x36bd,	// (0x0002af14) list_double_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_graphic_pane_vc

0x36bd,	// (0x0002af14) list_double_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_heading_pane_vc

0xeb5c,	// (0x000363b3) list_double_large_graphic_pane_vc_ParamLimits

0xeb5c,	// (0x000363b3) list_double_large_graphic_pane_vc

0x36bd,	// (0x0002af14) list_double_number_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_number_pane_vc

0x36bd,	// (0x0002af14) list_double_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_pane_vc

0x36bd,	// (0x0002af14) list_double_time_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_double_time_pane_vc

0x36bd,	// (0x0002af14) list_setting_number_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_setting_number_pane_vc

0x36bd,	// (0x0002af14) list_setting_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_setting_pane_vc

0x36bd,	// (0x0002af14) list_single_graphic_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_single_graphic_heading_pane_vc

0x36bd,	// (0x0002af14) list_single_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_single_heading_pane_vc

0x36bd,	// (0x0002af14) list_single_number_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002af14) list_single_number_heading_pane_vc

0xe8a8,	// (0x000360ff) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe8a8,	// (0x000360ff) list_double_graphic_heading_pane_vc_g1

0xeaa3,	// (0x000362fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeaa3,	// (0x000362fa) list_double_graphic_heading_pane_vc_g2

0xeaaf,	// (0x00036306) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeaaf,	// (0x00036306) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00037211) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00037211) list_double_graphic_heading_pane_vc_g

0xeb7b,	// (0x000363d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb7b,	// (0x000363d2) list_double_graphic_heading_pane_vc_t1

0xeb8f,	// (0x000363e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb8f,	// (0x000363e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00037218) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00037218) list_double_graphic_heading_pane_vc_t

0x0d36,	// (0x0002858d) list_setting_pane_vc_g1_ParamLimits

0x0d36,	// (0x0002858d) list_setting_pane_vc_g1

0x0d42,	// (0x00028599) list_setting_pane_vc_g2_ParamLimits

0x0d42,	// (0x00028599) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00037007) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00037007) list_setting_pane_vc_g

0xeba7,	// (0x000363fe) list_setting_pane_vc_t1_ParamLimits

0xeba7,	// (0x000363fe) list_setting_pane_vc_t1

0xebc3,	// (0x0003641a) list_setting_pane_vc_t2_ParamLimits

0xebc3,	// (0x0003641a) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0003725b) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0003725b) list_setting_pane_vc_t

0xeb3d,	// (0x00036394) set_value_pane_cp_vc_ParamLimits

0xeb3d,	// (0x00036394) set_value_pane_cp_vc

0xe82e,	// (0x00036085) list_single_number_heading_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036085) list_single_number_heading_pane_vc_g1

0xe83a,	// (0x00036091) list_single_number_heading_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036091) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_single_number_heading_pane_vc_g

0xe85c,	// (0x000360b3) list_single_number_heading_pane_vc_t1_ParamLimits

0xe85c,	// (0x000360b3) list_single_number_heading_pane_vc_t1

0xebdd,	// (0x00036434) list_single_number_heading_pane_vc_t2_ParamLimits

0xebdd,	// (0x00036434) list_single_number_heading_pane_vc_t2

0xebf3,	// (0x0003644a) list_single_number_heading_pane_vc_t3_ParamLimits

0xebf3,	// (0x0003644a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00037260) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00037260) list_single_number_heading_pane_vc_t

0xec05,	// (0x0003645c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec05,	// (0x0003645c) list_single_graphic_heading_pane_vc_g1

0xe82e,	// (0x00036085) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe82e,	// (0x00036085) list_single_graphic_heading_pane_vc_g4

0xe83a,	// (0x00036091) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe83a,	// (0x00036091) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x00037267) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x00037267) list_single_graphic_heading_pane_vc_g

0xe85c,	// (0x000360b3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe85c,	// (0x000360b3) list_single_graphic_heading_pane_vc_t1

0xec11,	// (0x00036468) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec11,	// (0x00036468) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x0003726e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x0003726e) list_single_graphic_heading_pane_vc_t

0xe82e,	// (0x00036085) list_double2_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036085) list_double2_pane_vc_g1

0xe83a,	// (0x00036091) list_double2_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036091) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_double2_pane_vc_g

0xec23,	// (0x0003647a) list_double2_pane_vc_t1_ParamLimits

0xec23,	// (0x0003647a) list_double2_pane_vc_t1

0xe8b4,	// (0x0003610b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe8b4,	// (0x0003610b) list_double2_large_graphic_pane_vc_g1

0xe82e,	// (0x00036085) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe82e,	// (0x00036085) list_double2_large_graphic_pane_vc_g2

0xe83a,	// (0x00036091) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe83a,	// (0x00036091) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00036e17) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00036e17) list_double2_large_graphic_pane_vc_g

0xe846,	// (0x0003609d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe846,	// (0x0003609d) list_double2_large_graphic_pane_vc_t1

0xec3b,	// (0x00036492) list_double_time_pane_vc_g1_ParamLimits

0xec3b,	// (0x00036492) list_double_time_pane_vc_g1

0xec47,	// (0x0003649e) list_double_time_pane_vc_g2_ParamLimits

0xec47,	// (0x0003649e) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00037273) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00037273) list_double_time_pane_vc_g

0xec53,	// (0x000364aa) list_double_time_pane_vc_t1_ParamLimits

0xec53,	// (0x000364aa) list_double_time_pane_vc_t1

0xec77,	// (0x000364ce) list_double_time_pane_vc_t2_ParamLimits

0xec77,	// (0x000364ce) list_double_time_pane_vc_t2

0xecc6,	// (0x0003651d) list_double_time_pane_vc_t3_ParamLimits

0xecc6,	// (0x0003651d) list_double_time_pane_vc_t3

0xecd8,	// (0x0003652f) list_double_time_pane_vc_t4_ParamLimits

0xecd8,	// (0x0003652f) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x00037278) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x00037278) list_double_time_pane_vc_t

0xe82e,	// (0x00036085) list_double_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036085) list_double_pane_vc_g1

0xe83a,	// (0x00036091) list_double_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036091) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_double_pane_vc_g

0xecec,	// (0x00036543) list_double_pane_vc_t1_ParamLimits

0xecec,	// (0x00036543) list_double_pane_vc_t1

0xed00,	// (0x00036557) list_double_pane_vc_t2_ParamLimits

0xed00,	// (0x00036557) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00037281) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00037281) list_double_pane_vc_t

0xe82e,	// (0x00036085) list_double_number_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036085) list_double_number_pane_vc_g1

0xe83a,	// (0x00036091) list_double_number_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036091) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dfa) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dfa) list_double_number_pane_vc_g

0xed18,	// (0x0003656f) list_double_number_pane_vc_t1_ParamLimits

0xed18,	// (0x0003656f) list_double_number_pane_vc_t1

0xecec,	// (0x00036543) list_double_number_pane_vc_t2_ParamLimits

0xecec,	// (0x00036543) list_double_number_pane_vc_t2

0xed2a,	// (0x00036581) list_double_number_pane_vc_t3_ParamLimits

0xed2a,	// (0x00036581) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x00037286) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x00037286) list_double_number_pane_vc_t

0xed42,	// (0x00036599) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed42,	// (0x00036599) list_double_large_graphic_pane_vc_g1

0xed5e,	// (0x000365b5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed5e,	// (0x000365b5) list_double_large_graphic_pane_vc_g2

0xed72,	// (0x000365c9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed72,	// (0x000365c9) list_double_large_graphic_pane_vc_g3

0xed81,	// (0x000365d8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed81,	// (0x000365d8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x0003728d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0003728d) list_double_large_graphic_pane_vc_g

0xed8d,	// (0x000365e4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed8d,	// (0x000365e4) list_double_large_graphic_pane_vc_t1

0xeda9,	// (0x00036600) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeda9,	// (0x00036600) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x00037296) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x00037296) list_double_large_graphic_pane_vc_t

0xeaa3,	// (0x000362fa) list_double_heading_pane_vc_g1_ParamLimits

0xeaa3,	// (0x000362fa) list_double_heading_pane_vc_g1

0xeaaf,	// (0x00036306) list_double_heading_pane_vc_g2_ParamLimits

0xeaaf,	// (0x00036306) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x0003729b) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x0003729b) list_double_heading_pane_vc_g

0xedcb,	// (0x00036622) list_double_heading_pane_vc_t1_ParamLimits

0xedcb,	// (0x00036622) list_double_heading_pane_vc_t1

0xeddf,	// (0x00036636) list_double_heading_pane_vc_t2_ParamLimits

0xeddf,	// (0x00036636) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x000372a0) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x000372a0) list_double_heading_pane_vc_t

0xedf7,	// (0x0003664e) list_double_graphic_pane_vc_g1_ParamLimits

0xedf7,	// (0x0003664e) list_double_graphic_pane_vc_g1

0xee0a,	// (0x00036661) list_double_graphic_pane_vc_g2_ParamLimits

0xee0a,	// (0x00036661) list_double_graphic_pane_vc_g2

0xe82e,	// (0x00036085) list_double_graphic_pane_vc_g3_ParamLimits

0xe82e,	// (0x00036085) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x000372a5) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x000372a5) list_double_graphic_pane_vc_g

0xee27,	// (0x0003667e) list_double_graphic_pane_vc_t1_ParamLimits

0xee27,	// (0x0003667e) list_double_graphic_pane_vc_t1

0xee46,	// (0x0003669d) list_double_graphic_pane_vc_t2_ParamLimits

0xee46,	// (0x0003669d) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x000372ae) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x000372ae) list_double_graphic_pane_vc_t

0xe7df,	// (0x00036036) aid_size_cell_fastswap

0x8d6f,	// (0x000305c6) aid_size_cell_touch_ParamLimits

0x8d6f,	// (0x000305c6) aid_size_cell_touch

0xe7e7,	// (0x0003603e) popup_fast_swap_wide_window_ParamLimits

0xe7e7,	// (0x0003603e) popup_fast_swap_wide_window

0x908e,	// (0x000308e5) touch_pane_ParamLimits

0x908e,	// (0x000308e5) touch_pane

0xc68b,	// (0x00033ee2) button_value_adjust_pane_cp2

0xe9ea,	// (0x00036241) button_value_adjust_pane_cp4

0xe9f2,	// (0x00036249) form_field_data_pane_cp2

0x88b1,	// (0x00030108) form_field_data_wide_pane_cp2

0xc9a5,	// (0x000341fc) bg_scroll_pane_ParamLimits

0x98cf,	// (0x00031126) scroll_handle_pane_ParamLimits

0xf296,	// (0x00036aed) scroll_sc2_down_pane_ParamLimits

0xf296,	// (0x00036aed) scroll_sc2_down_pane

0xc9d6,	// (0x0003422d) scroll_sc2_up_pane_ParamLimits

0xc9d6,	// (0x0003422d) scroll_sc2_up_pane

0xb6a3,	// (0x00032efa) grid_wheel_folder_pane_g1_ParamLimits

0xb6a3,	// (0x00032efa) grid_wheel_folder_pane_g1

0xf418,	// (0x00036c6f) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00036c6f) clock_nsta_pane_cp2

0x9b69,	// (0x000313c0) listscroll_midp_pane_ParamLimits

0x9b75,	// (0x000313cc) midp_canvas_pane

0xd0bf,	// (0x00034916) nsta_clock_indic_pane

0xd0e7,	// (0x0003493e) listscroll_form_pane_vc

0xd0ef,	// (0x00034946) listscroll_set_pane_vc_ParamLimits

0xd0ef,	// (0x00034946) listscroll_set_pane_vc

0xa709,	// (0x00031f60) clock_nsta_pane

0xa733,	// (0x00031f8a) indicator_nsta_pane

0x0b99,	// (0x000283f0) bg_popup_sub_pane_cp2_ParamLimits

0x0bad,	// (0x00028404) find_pane_cp2_ParamLimits

0x0bad,	// (0x00028404) find_pane_cp2

0x0bc3,	// (0x0002841a) grid_toobar_pane_ParamLimits

0x0d4e,	// (0x000285a5) list_form_gen_pane_vc_ParamLimits

0x0d4e,	// (0x000285a5) list_form_gen_pane_vc

0x0d64,	// (0x000285bb) scroll_pane_cp8_vc_ParamLimits

0x0d64,	// (0x000285bb) scroll_pane_cp8_vc

0x0e7d,	// (0x000286d4) data_form_wide_pane_vc_ParamLimits

0x0e7d,	// (0x000286d4) data_form_wide_pane_vc

0x0e89,	// (0x000286e0) form_field_data_wide_pane_vc_g1

0x0e91,	// (0x000286e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x0e91,	// (0x000286e8) form_field_data_wide_pane_vc_t1

0xc69f,	// (0x00033ef6) input_focus_pane_cp6_vc_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_cp6_vc

0x11de,	// (0x00028a35) list_midp_pane_ParamLimits

0x38b1,	// (0x0002b108) scroll_pane_cp16_ParamLimits

0x38b1,	// (0x0002b108) scroll_pane_cp16

0x1234,	// (0x00028a8b) button_value_adjust_pane_ParamLimits

0x1234,	// (0x00028a8b) button_value_adjust_pane

0xb239,	// (0x00032a90) button_value_adjust_pane_cp6_ParamLimits

0xb239,	// (0x00032a90) button_value_adjust_pane_cp6

0xb353,	// (0x00032baa) settings_code_pane_cp_ParamLimits

0xb353,	// (0x00032baa) settings_code_pane_cp

0xc283,	// (0x00033ada) cell_touch_pane_g1

0xc283,	// (0x00033ada) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00036f26) cell_touch_pane_g

0xb570,	// (0x00032dc7) cell_touch_pane_cp_ParamLimits

0xb570,	// (0x00032dc7) cell_touch_pane_cp

0xb58c,	// (0x00032de3) cell_touch_pane_ParamLimits

0xb58c,	// (0x00032de3) cell_touch_pane

0xc283,	// (0x00033ada) scroll_sc2_down_pane_g1

0xc283,	// (0x00033ada) scroll_sc2_up_pane_g1

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp4_vc

0x3c41,	// (0x0002b498) list_set_graphic_pane_vc_g1_ParamLimits

0x3c41,	// (0x0002b498) list_set_graphic_pane_vc_g1

0x3c4d,	// (0x0002b4a4) list_set_graphic_pane_vc_g2_ParamLimits

0x3c4d,	// (0x0002b4a4) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0003721d) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0003721d) list_set_graphic_pane_vc_g

0x3c59,	// (0x0002b4b0) text_primary_small_cp13_vc_ParamLimits

0x3c59,	// (0x0002b4b0) text_primary_small_cp13_vc

0x3c71,	// (0x0002b4c8) list_set_graphic_pane_vc_ParamLimits

0x3c71,	// (0x0002b4c8) list_set_graphic_pane_vc

0xc28d,	// (0x00033ae4) input_focus_pane_cp2_vc

0xc283,	// (0x00033ada) setting_code_pane_vc_g1

0xc300,	// (0x00033b57) setting_code_pane_vc_t1

0x3c84,	// (0x0002b4db) set_text_pane_vc_t1_ParamLimits

0x3c84,	// (0x0002b4db) set_text_pane_vc_t1

0xc28d,	// (0x00033ae4) input_focus_pane_cp1_vc

0x3ca1,	// (0x0002b4f8) list_set_text_pane_vc

0xc283,	// (0x00033ada) setting_text_pane_vc_g1

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp2_vc

0xc2f7,	// (0x00033b4e) setting_slider_graphic_pane_vc_g1

0x3cab,	// (0x0002b502) setting_slider_graphic_pane_vc_t1

0x3cbb,	// (0x0002b512) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00037222) setting_slider_graphic_pane_vc_t

0x3ccb,	// (0x0002b522) slider_set_pane_cp_vc

0x3cd3,	// (0x0002b52a) slider_set_pane_vc_g1

0x3cdc,	// (0x0002b533) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00037227) slider_set_pane_vc_g

0xc6f7,	// (0x00033f4e) set_opt_bg_pane_g1_copy1

0xc6ff,	// (0x00033f56) set_opt_bg_pane_g2_copy1

0x3d08,	// (0x0002b55f) set_opt_bg_pane_g3_copy1

0xc70f,	// (0x00033f66) set_opt_bg_pane_g4_copy1

0xc717,	// (0x00033f6e) set_opt_bg_pane_g5_copy1

0xc71f,	// (0x00033f76) set_opt_bg_pane_g6_copy1

0x3d10,	// (0x0002b567) set_opt_bg_pane_g7_copy1

0x3d1a,	// (0x0002b571) set_opt_bg_pane_g8_copy1

0x3d22,	// (0x0002b579) set_opt_bg_pane_g9_copy1

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp_vc

0x3d2a,	// (0x0002b581) setting_slider_pane_vc_t1

0x3d39,	// (0x0002b590) setting_slider_pane_vc_t2

0x3d49,	// (0x0002b5a0) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00037236) setting_slider_pane_vc_t

0x3d59,	// (0x0002b5b0) slider_set_pane_vc

0x1584,	// (0x00028ddb) volume_set_pane_vc_g1

0x187f,	// (0x000290d6) volume_set_pane_vc_g2

0x1888,	// (0x000290df) volume_set_pane_vc_g3

0x1891,	// (0x000290e8) volume_set_pane_vc_g4

0x189a,	// (0x000290f1) volume_set_pane_vc_g5

0x18a3,	// (0x000290fa) volume_set_pane_vc_g6

0x18ac,	// (0x00029103) volume_set_pane_vc_g7

0x18b5,	// (0x0002910c) volume_set_pane_vc_g8

0x18be,	// (0x00029115) volume_set_pane_vc_g9

0x18c7,	// (0x0002911e) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0003723d) volume_set_pane_vc_g

0x3d61,	// (0x0002b5b8) volume_set_pane_vc

0x3d6b,	// (0x0002b5c2) button_value_adjust_pane_cp1_vc

0x3d75,	// (0x0002b5cc) list_highlight_pane_cp2_vc

0x3d7e,	// (0x0002b5d5) list_set_pane_vc_ParamLimits

0x3d7e,	// (0x0002b5d5) list_set_pane_vc

0x3ddc,	// (0x0002b633) main_pane_set_vc_t1_ParamLimits

0x3ddc,	// (0x0002b633) main_pane_set_vc_t1

0x3df1,	// (0x0002b648) main_pane_set_vc_t2_ParamLimits

0x3df1,	// (0x0002b648) main_pane_set_vc_t2

0x3e03,	// (0x0002b65a) main_pane_set_vc_t3_ParamLimits

0x3e03,	// (0x0002b65a) main_pane_set_vc_t3

0x3e15,	// (0x0002b66c) main_pane_set_vc_t4_ParamLimits

0x3e15,	// (0x0002b66c) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00037252) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00037252) main_pane_set_vc_t

0x3e27,	// (0x0002b67e) setting_code_pane_vc_ParamLimits

0x3e27,	// (0x0002b67e) setting_code_pane_vc

0x3e36,	// (0x0002b68d) setting_slider_graphic_pane_vc

0x3e36,	// (0x0002b68d) setting_slider_pane_vc

0x3e36,	// (0x0002b68d) setting_text_pane_vc

0x3e36,	// (0x0002b68d) setting_volume_pane_vc

0x3e3e,	// (0x0002b695) scroll_pane_cp121_vc

0xc679,	// (0x00033ed0) set_content_pane_vc

0x3e46,	// (0x0002b69d) button_value_adjust_pane_g1

0x3e4f,	// (0x0002b6a6) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x000372b3) button_value_adjust_pane_g

0x3e58,	// (0x0002b6af) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e58,	// (0x0002b6af) form_field_slider_wide_pane_vc_t1

0x3e6c,	// (0x0002b6c3) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e6c,	// (0x0002b6c3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x000372b8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x000372b8) form_field_slider_wide_pane_vc_t

0xc2db,	// (0x00033b32) input_focus_pane_cp10_vc_ParamLimits

0xc2db,	// (0x00033b32) input_focus_pane_cp10_vc

0x3e9a,	// (0x0002b6f1) slider_cont_pane_cp1_vc_ParamLimits

0x3e9a,	// (0x0002b6f1) slider_cont_pane_cp1_vc

0x3eac,	// (0x0002b703) slider_form_pane_g1_cp2

0x3cdc,	// (0x0002b533) slider_form_pane_g2_cp2

0x3ed9,	// (0x0002b730) form_field_slider_pane_vc_t3

0x3ee7,	// (0x0002b73e) form_field_slider_pane_vc_t4

0x3ef5,	// (0x0002b74c) slider_form_pane_vc_ParamLimits

0x3ef5,	// (0x0002b74c) slider_form_pane_vc

0x3f02,	// (0x0002b759) form_field_slider_pane_vc_t1_ParamLimits

0x3f02,	// (0x0002b759) form_field_slider_pane_vc_t1

0x3e6c,	// (0x0002b6c3) form_field_slider_pane_vc_t2_ParamLimits

0x3e6c,	// (0x0002b6c3) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x000372ca) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x000372ca) form_field_slider_pane_vc_t

0xc2db,	// (0x00033b32) input_focus_pane_cp9_vc_ParamLimits

0xc2db,	// (0x00033b32) input_focus_pane_cp9_vc

0x3f1e,	// (0x0002b775) slider_cont_pane_vc_ParamLimits

0x3f1e,	// (0x0002b775) slider_cont_pane_vc

0x3f32,	// (0x0002b789) list_form_graphic_pane_cp_vc_ParamLimits

0x3f32,	// (0x0002b789) list_form_graphic_pane_cp_vc

0x0e89,	// (0x000286e0) form_field_popup_wide_pane_vc_g1

0x3f47,	// (0x0002b79e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f47,	// (0x0002b79e) form_field_popup_wide_pane_vc_t1

0xc69f,	// (0x00033ef6) input_focus_pane_cp8_vc_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_cp8_vc

0x3f8c,	// (0x0002b7e3) list_form_wide_pane_vc_ParamLimits

0x3f8c,	// (0x0002b7e3) list_form_wide_pane_vc

0x3f98,	// (0x0002b7ef) list_form_graphic_pane_vc_g1

0x3fa0,	// (0x0002b7f7) list_form_graphic_pane_vc_t1_ParamLimits

0x3fa0,	// (0x0002b7f7) list_form_graphic_pane_vc_t1

0xc2e9,	// (0x00033b40) list_highlight_pane_cp5_vc_ParamLimits

0xc2e9,	// (0x00033b40) list_highlight_pane_cp5_vc

0x3fbc,	// (0x0002b813) list_form_graphic_pane_vc_ParamLimits

0x3fbc,	// (0x0002b813) list_form_graphic_pane_vc

0x0e89,	// (0x000286e0) form_field_popup_pane_vc_g1

0x3fd2,	// (0x0002b829) form_field_popup_pane_vc_t1_ParamLimits

0x3fd2,	// (0x0002b829) form_field_popup_pane_vc_t1

0xc69f,	// (0x00033ef6) input_focus_pane_cp7_vc_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_cp7_vc

0x3fe9,	// (0x0002b840) list_form_pane_vc_ParamLimits

0x3fe9,	// (0x0002b840) list_form_pane_vc

0x3ff5,	// (0x0002b84c) data_form_pane_vc_t1_ParamLimits

0x3ff5,	// (0x0002b84c) data_form_pane_vc_t1

0xc6f7,	// (0x00033f4e) input_focus_pane_vc_g1

0xc6ff,	// (0x00033f56) input_focus_pane_vc_g2

0xc707,	// (0x00033f5e) input_focus_pane_vc_g3

0xc70f,	// (0x00033f66) input_focus_pane_vc_g4

0xc717,	// (0x00033f6e) input_focus_pane_vc_g5

0xc71f,	// (0x00033f76) input_focus_pane_vc_g6

0xc727,	// (0x00033f7e) input_focus_pane_vc_g7

0xc72f,	// (0x00033f86) input_focus_pane_vc_g8

0xc737,	// (0x00033f8e) input_focus_pane_vc_g9

0xc283,	// (0x00033ada) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00036eaf) input_focus_pane_vc_g

0x0e7d,	// (0x000286d4) data_form_pane_vc_ParamLimits

0x0e7d,	// (0x000286d4) data_form_pane_vc

0x0e89,	// (0x000286e0) form_field_data_pane_vc_g1

0x4010,	// (0x0002b867) form_field_data_pane_vc_t1_ParamLimits

0x4010,	// (0x0002b867) form_field_data_pane_vc_t1

0xc69f,	// (0x00033ef6) input_focus_pane_vc_ParamLimits

0xc69f,	// (0x00033ef6) input_focus_pane_vc

0x402a,	// (0x0002b881) button_value_adjust_pane_cp3_vc

0x4032,	// (0x0002b889) button_value_adjust_pane_cp5_vc

0x403a,	// (0x0002b891) form_field_data_pane_vc_ParamLimits

0x403a,	// (0x0002b891) form_field_data_pane_vc

0x4051,	// (0x0002b8a8) form_field_data_pane_vc_cp2

0x4059,	// (0x0002b8b0) form_field_data_wide_pane_vc_ParamLimits

0x4059,	// (0x0002b8b0) form_field_data_wide_pane_vc

0x406f,	// (0x0002b8c6) form_field_data_wide_pane_vc_cp2

0x4077,	// (0x0002b8ce) form_field_popup_pane_vc_ParamLimits

0x4077,	// (0x0002b8ce) form_field_popup_pane_vc

0x408e,	// (0x0002b8e5) form_field_popup_wide_pane_vc_ParamLimits

0x408e,	// (0x0002b8e5) form_field_popup_wide_pane_vc

0x40a4,	// (0x0002b8fb) form_field_slider_pane_vc_ParamLimits

0x40a4,	// (0x0002b8fb) form_field_slider_pane_vc

0x40b7,	// (0x0002b90e) form_field_slider_wide_pane_vc_ParamLimits

0x40b7,	// (0x0002b90e) form_field_slider_wide_pane_vc

0xb5a9,	// (0x00032e00) grid_touch_1_pane_ParamLimits

0xb5a9,	// (0x00032e00) grid_touch_1_pane

0xb5bd,	// (0x00032e14) grid_touch_2_pane_ParamLimits

0xb5bd,	// (0x00032e14) grid_touch_2_pane

0x419b,	// (0x0002b9f2) touch_pane_g1_ParamLimits

0x419b,	// (0x0002b9f2) touch_pane_g1

0x40ee,	// (0x0002b945) cell_app_pane_cp_wide_ParamLimits

0x40ee,	// (0x0002b945) cell_app_pane_cp_wide

0x40ff,	// (0x0002b956) grid_popup_fast_wide_pane_ParamLimits

0x40ff,	// (0x0002b956) grid_popup_fast_wide_pane

0x4113,	// (0x0002b96a) scroll_pane_cp19_ParamLimits

0x4113,	// (0x0002b96a) scroll_pane_cp19

0xc28d,	// (0x00033ae4) bg_popup_window_pane_cp20

0x4127,	// (0x0002b97e) listscroll_popup_fast_wide_pane

0xb5e7,	// (0x00032e3e) grid_indicator_nsta_pane

0x4141,	// (0x0002b998) clock_nsta_pane_g1

0x414a,	// (0x0002b9a1) clock_nsta_pane_t1

0xb5f3,	// (0x00032e4a) cell_indicator_nsta_pane_ParamLimits

0xb5f3,	// (0x00032e4a) cell_indicator_nsta_pane

0x419b,	// (0x0002b9f2) cell_indicator_nsta_pane_g1

0xb60e,	// (0x00032e65) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x000372db) cell_indicator_nsta_pane_g

0x41bb,	// (0x0002ba12) clock_nsta_pane_cp

0x41c4,	// (0x0002ba1b) indicator_nsta_pane_cp

0x41ce,	// (0x0002ba25) nsta_clock_indic_pane_g1

0xc325,	// (0x00033b7c) grid_indicator_pane

0x9969,	// (0x000311c0) scroll_pane_cp29

0xf367,	// (0x00036bbe) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x00036bbe) indicator_nsta_pane_cp2

0xc2e9,	// (0x00033b40) main_apps_wheel_pane

0xaba3,	// (0x000323fa) form_midp_field_text_pane_ParamLimits

0x11ea,	// (0x00028a41) scroll_bar_cp050_ParamLimits

0x4227,	// (0x0002ba7e) cell_indicator_pane_ParamLimits

0x4227,	// (0x0002ba7e) cell_indicator_pane

0x4240,	// (0x0002ba97) cell_indicator_pane_g1

0xb62d,	// (0x00032e84) grid_wheel_folder_pane_ParamLimits

0xb62d,	// (0x00032e84) grid_wheel_folder_pane

0xb63b,	// (0x00032e92) list_wheel_apps_pane_ParamLimits

0xb63b,	// (0x00032e92) list_wheel_apps_pane

0xb649,	// (0x00032ea0) main_apps_wheel_pane_g1_ParamLimits

0xb649,	// (0x00032ea0) main_apps_wheel_pane_g1

0xb655,	// (0x00032eac) main_apps_wheel_pane_g2_ParamLimits

0xb655,	// (0x00032eac) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x000372f7) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x000372f7) main_apps_wheel_pane_g

0xb663,	// (0x00032eba) main_apps_wheel_pane_t1_ParamLimits

0xb663,	// (0x00032eba) main_apps_wheel_pane_t1

0xb677,	// (0x00032ece) list_wheel_apps_pane_g1

0xb67f,	// (0x00032ed6) list_wheel_apps_pane_g2

0xb687,	// (0x00032ede) list_wheel_apps_pane_g3

0xb68f,	// (0x00032ee6) list_wheel_apps_pane_g4

0xb699,	// (0x00032ef0) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x000372fc) list_wheel_apps_pane_g

0xce00,	// (0x00034657) navi_icon_text_pane

0xa5fd,	// (0x00031e54) aid_fill_nsta

0x4307,	// (0x0002bb5e) navi_icon_text_pane_g1

0x4313,	// (0x0002bb6a) navi_icon_text_pane_t1

0xcce4,	// (0x0003453b) list_set_graphic_pane_t1_ParamLimits

0xcce4,	// (0x0003453b) list_set_graphic_pane_t1

0x2cd8,	// (0x0002a52f) popup_midp_note_alarm_window_t6_ParamLimits

0x2cd8,	// (0x0002a52f) popup_midp_note_alarm_window_t6

0x2cea,	// (0x0002a541) popup_midp_note_alarm_window_t7_ParamLimits

0x2cea,	// (0x0002a541) popup_midp_note_alarm_window_t7

0x2cfc,	// (0x0002a553) popup_midp_note_alarm_window_t8_ParamLimits

0x2cfc,	// (0x0002a553) popup_midp_note_alarm_window_t8

0x2d0e,	// (0x0002a565) popup_midp_note_alarm_window_t9_ParamLimits

0x2d0e,	// (0x0002a565) popup_midp_note_alarm_window_t9

0x2d20,	// (0x0002a577) popup_midp_note_alarm_window_t10_ParamLimits

0x2d20,	// (0x0002a577) popup_midp_note_alarm_window_t10

0x2d32,	// (0x0002a589) popup_midp_note_alarm_window_t11_ParamLimits

0x2d32,	// (0x0002a589) popup_midp_note_alarm_window_t11

0xaeef,	// (0x00032746) scroll_pane_cp17_ParamLimits

0xaeef,	// (0x00032746) scroll_pane_cp17

0x1584,	// (0x00028ddb) volume_small_pane_cp_g1

0x18d0,	// (0x00029127) volume_small_pane_cp_g2

0x18d9,	// (0x00029130) volume_small_pane_cp_g3

0x18e2,	// (0x00029139) volume_small_pane_cp_g4

0x18eb,	// (0x00029142) volume_small_pane_cp_g5

0x189a,	// (0x000290f1) volume_small_pane_cp_g6

0x18f4,	// (0x0002914b) volume_small_pane_cp_g7

0x18fd,	// (0x00029154) volume_small_pane_cp_g8

0x1906,	// (0x0002915d) volume_small_pane_cp_g9

0x190f,	// (0x00029166) volume_small_pane_cp_g10

0xcf72,	// (0x000347c9) midp_ticker_pane_g1_ParamLimits

0xcf7e,	// (0x000347d5) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00036f7b) midp_ticker_pane_g_ParamLimits

0xcf8a,	// (0x000347e1) midp_ticker_pane_t1_ParamLimits

0xa621,	// (0x00031e78) aid_fill_nsta_2

0x11d6,	// (0x00028a2d) list_form2_midp_pane

0x368c,	// (0x0002aee3) midp_editing_number_pane_ParamLimits

0x369b,	// (0x0002aef2) midp_ticker_pane_ParamLimits

0x4325,	// (0x0002bb7c) form2_midp_field_pane

0x4349,	// (0x0002bba0) scroll_pane_cp51

0x4369,	// (0x0002bbc0) form2_midp_button_pane_ParamLimits

0x4369,	// (0x0002bbc0) form2_midp_button_pane

0x437b,	// (0x0002bbd2) form2_midp_content_pane_ParamLimits

0x437b,	// (0x0002bbd2) form2_midp_content_pane

0x4395,	// (0x0002bbec) form2_midp_field_choice_group_pane

0x439d,	// (0x0002bbf4) form2_midp_field_pane_g1

0x43a5,	// (0x0002bbfc) form2_midp_field_pane_g2

0x43ad,	// (0x0002bc04) form2_midp_field_pane_g3

0x43b5,	// (0x0002bc0c) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00037321) form2_midp_field_pane_g

0x43bd,	// (0x0002bc14) form2_midp_gauge_slider_pane

0x43c5,	// (0x0002bc1c) form2_midp_gauge_wait_pane

0x43cd,	// (0x0002bc24) form2_midp_image_pane_ParamLimits

0x43cd,	// (0x0002bc24) form2_midp_image_pane

0xb6cc,	// (0x00032f23) form2_midp_label_pane_ParamLimits

0xb6cc,	// (0x00032f23) form2_midp_label_pane

0xb6e5,	// (0x00032f3c) form2_midp_label_pane_cp_ParamLimits

0xb6e5,	// (0x00032f3c) form2_midp_label_pane_cp

0x4422,	// (0x0002bc79) form2_midp_string_pane_ParamLimits

0x4422,	// (0x0002bc79) form2_midp_string_pane

0xee70,	// (0x000366c7) form2_midp_text_pane_ParamLimits

0xee70,	// (0x000366c7) form2_midp_text_pane

0x4434,	// (0x0002bc8b) form2_midp_time_pane

0x4444,	// (0x0002bc9b) input_focus_pane_cp51_ParamLimits

0x4444,	// (0x0002bc9b) input_focus_pane_cp51

0xb704,	// (0x00032f5b) form2_midp_label_pane_t1_ParamLimits

0xb704,	// (0x00032f5b) form2_midp_label_pane_t1

0xee89,	// (0x000366e0) form2_mdip_text_pane_t1_ParamLimits

0xee89,	// (0x000366e0) form2_mdip_text_pane_t1

0xeea7,	// (0x000366fe) form2_midp_time_pane_t1

0x44a5,	// (0x0002bcfc) form2_midp_gauge_slider_pane_t1

0xb744,	// (0x00032f9b) form2_midp_gauge_slider_pane_t2

0xb756,	// (0x00032fad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x0003732a) form2_midp_gauge_slider_pane_t

0x44db,	// (0x0002bd32) form2_midp_slider_pane

0x44e7,	// (0x0002bd3e) form2_midp_gauge_wait_pane_t1

0x44f5,	// (0x0002bd4c) form2_midp_wait_pane_ParamLimits

0x44f5,	// (0x0002bd4c) form2_midp_wait_pane

0xb768,	// (0x00032fbf) list_single_2graphic_pane_cp4_ParamLimits

0xb768,	// (0x00032fbf) list_single_2graphic_pane_cp4

0xaafa,	// (0x00032351) list_single_midp_graphic_pane_cp_ParamLimits

0xaafa,	// (0x00032351) list_single_midp_graphic_pane_cp

0xc28d,	// (0x00033ae4) list_highlight_pane_cp20

0x4548,	// (0x0002bd9f) list_single_2graphic_pane_g1_cp4

0x3b25,	// (0x0002b37c) list_single_2graphic_pane_g2_cp4

0x4550,	// (0x0002bda7) list_single_2graphic_pane_t1_cp4

0xc2e9,	// (0x00033b40) list_highlight_pane_cp21

0x455f,	// (0x0002bdb6) list_single_midp_graphic_pane_g4_cp

0x456e,	// (0x0002bdc5) list_single_midp_graphic_pane_t1_cp

0xb77d,	// (0x00032fd4) form2_mdip_string_pane_t1_ParamLimits

0xb77d,	// (0x00032fd4) form2_mdip_string_pane_t1

0xc28d,	// (0x00033ae4) bg_wml_button_pane_cp2

0xc283,	// (0x00033ada) form2_midp_image_pane_g1

0xe90b,	// (0x00036162) list_double_large_graphic_pane_g5_ParamLimits

0xe90b,	// (0x00036162) list_double_large_graphic_pane_g5

0x9b69,	// (0x000313c0) midp_form_pane_ParamLimits

0xc2e9,	// (0x00033b40) main_apps_wheel_pane_ParamLimits

0xa2db,	// (0x00031b32) popup_preview_window_ParamLimits

0xa2db,	// (0x00031b32) popup_preview_window

0xa5a8,	// (0x00031dff) popup_touch_info_window_ParamLimits

0xa5a8,	// (0x00031dff) popup_touch_info_window

0xa5c6,	// (0x00031e1d) popup_touch_menu_window_ParamLimits

0xa5c6,	// (0x00031e1d) popup_touch_menu_window

0xc279,	// (0x00033ad0) bg_popup_sub_pane_cp6

0x468a,	// (0x0002bee1) list_touch_menu_pane

0xb7f3,	// (0x0003304a) list_single_touch_menu_pane_ParamLimits

0xb7f3,	// (0x0003304a) list_single_touch_menu_pane

0xb807,	// (0x0003305e) list_single_touch_menu_pane_t1

0xc2e9,	// (0x00033b40) bg_popup_sub_pane_cp7_ParamLimits

0xc2e9,	// (0x00033b40) bg_popup_sub_pane_cp7

0x46b6,	// (0x0002bf0d) heading_sub_pane

0x46be,	// (0x0002bf15) list_touch_info_pane_ParamLimits

0x46be,	// (0x0002bf15) list_touch_info_pane

0x46cd,	// (0x0002bf24) list_single_touch_info_pane_ParamLimits

0x46cd,	// (0x0002bf24) list_single_touch_info_pane

0x46df,	// (0x0002bf36) list_single_touch_info_pane_t1

0x46ed,	// (0x0002bf44) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x00037338) list_single_touch_info_pane_t

0xcf5b,	// (0x000347b2) bg_popup_heading_pane_cp

0x46fb,	// (0x0002bf52) heading_sub_pane_t1

0x0d8f,	// (0x000285e6) bg_popup_preview_window_pane_cp_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_preview_window_pane_cp

0x46b6,	// (0x0002bf0d) heading_preview_pane

0x46be,	// (0x0002bf15) list_preview_pane_ParamLimits

0x46be,	// (0x0002bf15) list_preview_pane

0x4709,	// (0x0002bf60) popup_preview_window_g1

0x46cd,	// (0x0002bf24) list_single_preview_pane_ParamLimits

0x46cd,	// (0x0002bf24) list_single_preview_pane

0x4711,	// (0x0002bf68) list_single_preview_pane_g1

0x4719,	// (0x0002bf70) list_single_preview_pane_t1

0x46df,	// (0x0002bf36) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x0003733d) list_single_preview_pane_t

0x4727,	// (0x0002bf7e) bg_popup_heading_pane_cp2_ParamLimits

0x4727,	// (0x0002bf7e) bg_popup_heading_pane_cp2

0x473d,	// (0x0002bf94) heading_preview_pane_g1

0x4745,	// (0x0002bf9c) heading_preview_pane_t1_ParamLimits

0x4745,	// (0x0002bf9c) heading_preview_pane_t1

0xc33c,	// (0x00033b93) soft_indicator_pane_t1_ParamLimits

0xc61b,	// (0x00033e72) scroll_pane_ParamLimits

0xc9c4,	// (0x0003421b) scroll_sc2_left_pane

0xc9cd,	// (0x00034224) scroll_sc2_right_pane

0xc9ec,	// (0x00034243) scroll_bg_pane_g1_ParamLimits

0xca01,	// (0x00034258) scroll_bg_pane_g2_ParamLimits

0xca19,	// (0x00034270) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00036f06) scroll_bg_pane_g_ParamLimits

0xc9ec,	// (0x00034243) scroll_handle_pane_g1_ParamLimits

0xca2e,	// (0x00034285) scroll_handle_pane_g2_ParamLimits

0xca19,	// (0x00034270) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00036f0d) scroll_handle_pane_g_ParamLimits

0x9ea8,	// (0x000316ff) popup_choice_list_window_ParamLimits

0x9ea8,	// (0x000316ff) popup_choice_list_window

0x0ba5,	// (0x000283fc) choice_list_pane

0x0c57,	// (0x000284ae) cell_toolbar_pane_t1

0x0c7f,	// (0x000284d6) toolbar_button_pane_ParamLimits

0x31fe,	// (0x0002aa55) ai_gene_pane_1_t2_ParamLimits

0x31fe,	// (0x0002aa55) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00037130) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00037130) ai_gene_pane_1_t

0x4762,	// (0x0002bfb9) scroll_sc2_left_pane_g1

0x4762,	// (0x0002bfb9) scroll_sc2_right_pane_g1

0xc7e1,	// (0x00034038) bg_popup_sub_pane_cp10

0x476c,	// (0x0002bfc3) list_choice_list_pane

0xb38f,	// (0x00032be6) list_single_choice_list_pane_ParamLimits

0xb38f,	// (0x00032be6) list_single_choice_list_pane

0xd10f,	// (0x00034966) list_single_choice_list_pane_g1

0x9793,	// (0x00030fea) list_single_choice_list_pane_t1_ParamLimits

0x9793,	// (0x00030fea) list_single_choice_list_pane_t1

0x47a0,	// (0x0002bff7) choice_list_pane_g1

0xb815,	// (0x0003306c) choice_list_pane_t1

0xc279,	// (0x00033ad0) input_focus_pane_cp11

0xc939,	// (0x00034190) title_pane_stacon_g2_ParamLimits

0xc939,	// (0x00034190) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00036eec) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00036eec) title_pane_stacon_g

0xcf5b,	// (0x000347b2) cursor_press_pane

0x9f4f,	// (0x000317a6) popup_fep_hwr_window_ParamLimits

0x9f4f,	// (0x000317a6) popup_fep_hwr_window

0x02fb,	// (0x00027b52) popup_fep_vkb_window_ParamLimits

0x02fb,	// (0x00027b52) popup_fep_vkb_window

0xb823,	// (0x0003307a) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x00037366) fep_vkb_side_pane_g_ParamLimits

0x1951,	// (0x000291a8) fep_hwr_candidate_pane_ParamLimits

0x1951,	// (0x000291a8) fep_hwr_candidate_pane

0x197b,	// (0x000291d2) fep_hwr_side_pane_ParamLimits

0x197b,	// (0x000291d2) fep_hwr_side_pane

0x199b,	// (0x000291f2) fep_hwr_top_pane_ParamLimits

0x199b,	// (0x000291f2) fep_hwr_top_pane

0x19b3,	// (0x0002920a) fep_hwr_write_pane_ParamLimits

0x19b3,	// (0x0002920a) fep_hwr_write_pane

0xfb0f,	// (0x00037366) fep_vkb_side_pane_g

0x47be,	// (0x0002c015) fep_hwr_top_pane_g1

0x47d0,	// (0x0002c027) fep_hwr_top_pane_g2

0x19df,	// (0x00029236) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00037342) fep_hwr_top_pane_g

0x19f4,	// (0x0002924b) fep_hwr_top_text_pane

0xcaf1,	// (0x00034348) fep_hwr_top_text_pane_g1

0x4806,	// (0x0002c05d) fep_hwr_top_text_pane_t1

0x1aea,	// (0x00029341) fep_hwr_candidate_pane_g1

0x4a4b,	// (0x0002c2a2) fep_vkb_keypad_pane_g3_ParamLimits

0x4a4b,	// (0x0002c2a2) fep_vkb_keypad_pane_g3

0x4a73,	// (0x0002c2ca) fep_vkb_keypad_pane_g4_ParamLimits

0x4a73,	// (0x0002c2ca) fep_vkb_keypad_pane_g4

0x4ae2,	// (0x0002c339) fep_vkb_bottom_pane_g2_ParamLimits

0x4ae2,	// (0x0002c339) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x0003736d) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x0003736d) fep_vkb_bottom_pane_g

0x4762,	// (0x0002bfb9) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x00037377) cell_vkb_side_pane_g

0x4b6d,	// (0x0002c3c4) cell_vkb_side_pane_t1

0x4b7b,	// (0x0002c3d2) cell_vkb_side_pane_t1_copy1

0x4762,	// (0x0002bfb9) bg_fep_vkb_candidate_pane_g2

0x4ca7,	// (0x0002c4fe) cell_vkb_candidate_pane_ParamLimits

0x4814,	// (0x0002c06b) aid_size_cell_vkb_ParamLimits

0x4814,	// (0x0002c06b) aid_size_cell_vkb

0x4ca7,	// (0x0002c4fe) cell_vkb_candidate_pane

0x1b04,	// (0x0002935b) bg_popup_fep_shadow_pane_g1

0xb88a,	// (0x000330e1) fep_vkb_bottom_pane_ParamLimits

0xb88a,	// (0x000330e1) fep_vkb_bottom_pane

0x48d8,	// (0x0002c12f) fep_vkb_candidate_pane_ParamLimits

0x48d8,	// (0x0002c12f) fep_vkb_candidate_pane

0xb8af,	// (0x00033106) fep_vkb_keypad_pane_ParamLimits

0xb8af,	// (0x00033106) fep_vkb_keypad_pane

0xb8e4,	// (0x0003313b) fep_vkb_side_pane_ParamLimits

0xb8e4,	// (0x0003313b) fep_vkb_side_pane

0xb920,	// (0x00033177) fep_vkb_top_pane_ParamLimits

0xb920,	// (0x00033177) fep_vkb_top_pane

0x49a4,	// (0x0002c1fb) fep_vkb_top_pane_g1_ParamLimits

0x49a4,	// (0x0002c1fb) fep_vkb_top_pane_g1

0x49b3,	// (0x0002c20a) fep_vkb_top_pane_g2_ParamLimits

0x49b3,	// (0x0002c20a) fep_vkb_top_pane_g2

0x49c2,	// (0x0002c219) fep_vkb_top_pane_g3_ParamLimits

0x49c2,	// (0x0002c219) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x0003735d) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x0003735d) fep_vkb_top_pane_g

0x49e0,	// (0x0002c237) fep_vkb_top_text_pane_ParamLimits

0x49e0,	// (0x0002c237) fep_vkb_top_text_pane

0xb955,	// (0x000331ac) fep_vkb_side_pane_g1_ParamLimits

0xb955,	// (0x000331ac) fep_vkb_side_pane_g1

0x4a3a,	// (0x0002c291) grid_vkb_side_pane_ParamLimits

0x4a3a,	// (0x0002c291) grid_vkb_side_pane

0x1b0c,	// (0x00029363) bg_popup_fep_shadow_pane_g2

0x1b15,	// (0x0002936c) bg_popup_fep_shadow_pane_g3

0x1b1d,	// (0x00029374) bg_popup_fep_shadow_pane_g4

0x1b26,	// (0x0002937d) bg_popup_fep_shadow_pane_g5

0x1b30,	// (0x00029387) bg_popup_fep_shadow_pane_g6

0x1b38,	// (0x0002938f) bg_popup_fep_shadow_pane_g7

0xc717,	// (0x00033f6e) bg_popup_fep_shadow_pane_g8

0x4a91,	// (0x0002c2e8) grid_vkb_keypad_number_pane_ParamLimits

0x4a91,	// (0x0002c2e8) grid_vkb_keypad_number_pane

0x4aa1,	// (0x0002c2f8) grid_vkb_keypad_pane_ParamLimits

0x4aa1,	// (0x0002c2f8) grid_vkb_keypad_pane

0x4ac7,	// (0x0002c31e) fep_vkb_bottom_pane_g1_ParamLimits

0x4ac7,	// (0x0002c31e) fep_vkb_bottom_pane_g1

0x4af0,	// (0x0002c347) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4af0,	// (0x0002c347) grid_vkb_keypad_bottom_left_pane

0x4b05,	// (0x0002c35c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b05,	// (0x0002c35c) grid_vkb_keypad_bottom_right_pane

0x4b1a,	// (0x0002c371) fep_vkb_top_text_pane_g1

0xb99c,	// (0x000331f3) fep_vkb_top_text_pane_t1

0xb9ae,	// (0x00033205) cell_vkb_side_pane_ParamLimits

0xb9ae,	// (0x00033205) cell_vkb_side_pane

0x4762,	// (0x0002bfb9) cell_vkb_side_pane_g1

0x4b89,	// (0x0002c3e0) cell_vkb_keypad_pane_ParamLimits

0x4b89,	// (0x0002c3e0) cell_vkb_keypad_pane

0x4bfe,	// (0x0002c455) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x0003738a) bg_popup_fep_shadow_pane_g

0x4762,	// (0x0002bfb9) cell_hwr_side_pane_g1

0x4762,	// (0x0002bfb9) cell_hwr_side_pane_g2

0x4c08,	// (0x0002c45f) cell_vkb_keypad_pane_t1

0xb9c4,	// (0x0003321b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb9c4,	// (0x0003321b) cell_vkb_keypad_bottom_left_pane

0xb9d9,	// (0x00033230) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb9d9,	// (0x00033230) cell_vkb_keypad_bottom_right_pane

0x4762,	// (0x0002bfb9) cell_vkb_keypad_bottom_left_pane_g1

0x4762,	// (0x0002bfb9) cell_vkb_keypad_bottom_right_pane_g1

0x4c6c,	// (0x0002c4c3) cell_vkb_keypad_number_pane_ParamLimits

0x4c6c,	// (0x0002c4c3) cell_vkb_keypad_number_pane

0x4c8b,	// (0x0002c4e2) cell_vkb_keypad_number_pane_g1

0x4c95,	// (0x0002c4ec) cell_vkb_keypad_number_pane_g2

0x4c9e,	// (0x0002c4f5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x0003737c) cell_vkb_keypad_number_pane_g

0x4c08,	// (0x0002c45f) cell_vkb_keypad_number_pane_t1

0x4cc2,	// (0x0002c519) fep_vkb_candidate_pane_g1

0x0001,

0xfb20,	// (0x00037377) cell_hwr_side_pane_g

0x4cdb,	// (0x0002c532) cell_hwr_side_pane_t1

0x1b4a,	// (0x000293a1) cell_hwr_side_pane_t1_copy1

0x49d2,	// (0x0002c229) cell_hwr_candidate_pane_g1

0x1b58,	// (0x000293af) cell_hwr_candidate_pane_t1

0x4762,	// (0x0002bfb9) cell_vkb_candidate_pane_g2

0x4d61,	// (0x0002c5b8) cell_vkb_candidate_pane_t1

0x1918,	// (0x0002916f) bg_popup_fep_shadow_pane_ParamLimits

0x1918,	// (0x0002916f) bg_popup_fep_shadow_pane

0xd117,	// (0x0003496e) bg_fep_hwr_top_pane_g4

0x47e2,	// (0x0002c039) bg_hwr_side_pane_g1_ParamLimits

0x47e2,	// (0x0002c039) bg_hwr_side_pane_g1

0xb843,	// (0x0003309a) cell_hwr_side_pane_ParamLimits

0xb843,	// (0x0003309a) cell_hwr_side_pane

0x1a6b,	// (0x000292c2) fep_hwr_write_pane_g1_ParamLimits

0x1a6b,	// (0x000292c2) fep_hwr_write_pane_g1

0x1a78,	// (0x000292cf) fep_hwr_write_pane_g2_ParamLimits

0x1a78,	// (0x000292cf) fep_hwr_write_pane_g2

0x1a85,	// (0x000292dc) fep_hwr_write_pane_g3_ParamLimits

0x1a85,	// (0x000292dc) fep_hwr_write_pane_g3

0xb863,	// (0x000330ba) fep_hwr_write_pane_g4_ParamLimits

0xb863,	// (0x000330ba) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x00037349) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x00037349) fep_hwr_write_pane_g

0xd117,	// (0x0003496e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd117,	// (0x0003496e) bg_fep_hwr_candidate_pane_g2

0x1aa8,	// (0x000292ff) cell_hwr_candidate_pane_ParamLimits

0x1aa8,	// (0x000292ff) cell_hwr_candidate_pane

0x1aea,	// (0x00029341) fep_hwr_candidate_pane_g1_ParamLimits

0x4842,	// (0x0002c099) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4842,	// (0x0002c099) bg_popup_fep_shadow_pane_cp2

0x49d2,	// (0x0002c229) fep_vkb_top_pane_g4_ParamLimits

0x49d2,	// (0x0002c229) fep_vkb_top_pane_g4

0x4a18,	// (0x0002c26f) fep_vkb_side_pane_g2_ParamLimits

0x4a18,	// (0x0002c26f) fep_vkb_side_pane_g2

0x8813,	// (0x0003006a) list_setting_pane_t4_ParamLimits

0x8813,	// (0x0003006a) list_setting_pane_t4

0xe9bf,	// (0x00036216) list_setting_number_pane_t5_ParamLimits

0xe9bf,	// (0x00036216) list_setting_number_pane_t5

0xcb28,	// (0x0003437f) list_double_heading_pane_cp2_ParamLimits

0xcb28,	// (0x0003437f) list_double_heading_pane_cp2

0xd13f,	// (0x00034996) list_double_heading_pane_g1_cp2_ParamLimits

0xd13f,	// (0x00034996) list_double_heading_pane_g1_cp2

0x4d6f,	// (0x0002c5c6) list_double_heading_pane_g2_cp2_ParamLimits

0x4d6f,	// (0x0002c5c6) list_double_heading_pane_g2_cp2

0x4d83,	// (0x0002c5da) list_double_heading_pane_t1_cp2_ParamLimits

0x4d83,	// (0x0002c5da) list_double_heading_pane_t1_cp2

0x4d99,	// (0x0002c5f0) list_double_heading_pane_t2_cp2_ParamLimits

0x4d99,	// (0x0002c5f0) list_double_heading_pane_t2_cp2

0xc271,	// (0x00033ac8) aid_value_unit2

0xe7fd,	// (0x00036054) popup_preview_fixed_window

0xc413,	// (0x00033c6a) bg_popup_preview_window_pane_cp02

0x4dab,	// (0x0002c602) list_preview_fixed_pane

0x4df1,	// (0x0002c648) list_empty_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_empty_pane_fp

0x4df1,	// (0x0002c648) list_single_cale_day_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_cale_day_pane_fp

0x4df1,	// (0x0002c648) list_single_graphic_heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_graphic_heading_pane_fp

0x4df1,	// (0x0002c648) list_single_graphic_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_graphic_pane_fp

0x4df1,	// (0x0002c648) list_single_heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_heading_pane_fp

0x4df1,	// (0x0002c648) list_single_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_pane_fp

0x4e07,	// (0x0002c65e) list_single_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c65e) list_single_pane_fp_g1

0xe8f3,	// (0x0003614a) list_single_pane_fp_g2_ParamLimits

0xe8f3,	// (0x0003614a) list_single_pane_fp_g2

0xeeba,	// (0x00036711) list_single_pane_fp_g3_ParamLimits

0xeeba,	// (0x00036711) list_single_pane_fp_g3

0x4e13,	// (0x0002c66a) list_single_pane_fp_g4_ParamLimits

0x4e13,	// (0x0002c66a) list_single_pane_fp_g4

0x0003,

0xfb54,	// (0x000373ab) list_single_pane_fp_g_ParamLimits

0xfb54,	// (0x000373ab) list_single_pane_fp_g

0xeece,	// (0x00036725) list_single_pane_fp_t1_ParamLimits

0xeece,	// (0x00036725) list_single_pane_fp_t1

0xeee5,	// (0x0003673c) list_single_graphic_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003673c) list_single_graphic_pane_fp_g1

0x4e07,	// (0x0002c65e) list_single_graphic_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c65e) list_single_graphic_pane_fp_g2

0xe8f3,	// (0x0003614a) list_single_graphic_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003614a) list_single_graphic_pane_fp_g3

0xeeba,	// (0x00036711) list_single_graphic_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036711) list_single_graphic_pane_fp_g4

0x4e13,	// (0x0002c66a) list_single_graphic_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c66a) list_single_graphic_pane_fp_g5

0x0004,

0xfb5d,	// (0x000373b4) list_single_graphic_pane_fp_g_ParamLimits

0xfb5d,	// (0x000373b4) list_single_graphic_pane_fp_g

0xeef1,	// (0x00036748) list_single_graphic_pane_fp_t1_ParamLimits

0xeef1,	// (0x00036748) list_single_graphic_pane_fp_t1

0xeee5,	// (0x0003673c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003673c) list_single_graphic_heading_pane_fp_g1

0x4e07,	// (0x0002c65e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c65e) list_single_graphic_heading_pane_fp_g2

0xe8f3,	// (0x0003614a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003614a) list_single_graphic_heading_pane_fp_g3

0xeeba,	// (0x00036711) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036711) list_single_graphic_heading_pane_fp_g4

0x4e13,	// (0x0002c66a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c66a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x000373b4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x000373b4) list_single_graphic_heading_pane_fp_g

0xef07,	// (0x0003675e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef07,	// (0x0003675e) list_single_graphic_heading_pane_fp_t1

0xef1d,	// (0x00036774) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x00036774) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb68,	// (0x000373bf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb68,	// (0x000373bf) list_single_graphic_heading_pane_fp_t

0xef2f,	// (0x00036786) list_single_cale_day_pane_fp_g1_ParamLimits

0xef2f,	// (0x00036786) list_single_cale_day_pane_fp_g1

0x4e1f,	// (0x0002c676) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e1f,	// (0x0002c676) list_single_cale_day_pane_fp_g2

0xef67,	// (0x000367be) list_single_cale_day_pane_fp_g3_ParamLimits

0xef67,	// (0x000367be) list_single_cale_day_pane_fp_g3

0xef8f,	// (0x000367e6) list_single_cale_day_pane_fp_g4_ParamLimits

0xef8f,	// (0x000367e6) list_single_cale_day_pane_fp_g4

0xefb3,	// (0x0003680a) list_single_cale_day_pane_fp_g5_ParamLimits

0xefb3,	// (0x0003680a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6d,	// (0x000373c4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6d,	// (0x000373c4) list_single_cale_day_pane_fp_g

0xefd7,	// (0x0003682e) list_single_cale_day_pane_fp_t1_ParamLimits

0xefd7,	// (0x0003682e) list_single_cale_day_pane_fp_t1

0xeffd,	// (0x00036854) list_single_cale_day_pane_fp_t2_ParamLimits

0xeffd,	// (0x00036854) list_single_cale_day_pane_fp_t2

0xf016,	// (0x0003686d) list_single_cale_day_pane_fp_t3_ParamLimits

0xf016,	// (0x0003686d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb78,	// (0x000373cf) list_single_cale_day_pane_fp_t_ParamLimits

0xfb78,	// (0x000373cf) list_single_cale_day_pane_fp_t

0x4e07,	// (0x0002c65e) list_empty_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c65e) list_empty_pane_fp_g1

0xf02f,	// (0x00036886) list_empty_pane_fp_t1

0xf03d,	// (0x00036894) list_empty_pane_fp_t2

0x0001,

0xfb7f,	// (0x000373d6) list_empty_pane_fp_t

0x4e07,	// (0x0002c65e) list_single_heading_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c65e) list_single_heading_pane_fp_g1

0xe8f3,	// (0x0003614a) list_single_heading_pane_fp_g2_ParamLimits

0xe8f3,	// (0x0003614a) list_single_heading_pane_fp_g2

0xeeba,	// (0x00036711) list_single_heading_pane_fp_g3_ParamLimits

0xeeba,	// (0x00036711) list_single_heading_pane_fp_g3

0x0002,

0xfb84,	// (0x000373db) list_single_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x000373db) list_single_heading_pane_fp_g

0xf04b,	// (0x000368a2) list_single_heading_pane_fp_t1_ParamLimits

0xf04b,	// (0x000368a2) list_single_heading_pane_fp_t1

0xf05d,	// (0x000368b4) list_single_heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x000368b4) list_single_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x000373e2) list_single_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x000373e2) list_single_heading_pane_fp_t

0x97df,	// (0x00031036) aid_size_cell_fast

0xc3f6,	// (0x00033c4d) soft_indicator_pane_cp1_t1

0x97e8,	// (0x0003103f) cell_app_pane_cp2_ParamLimits

0x97e8,	// (0x0003103f) cell_app_pane_cp2

0x193a,	// (0x00029191) fep_hwr_candidate_drop_down_list_pane

0xd125,	// (0x0003497c) fep_hwr_candidate_pane_g3_ParamLimits

0xd125,	// (0x0003497c) fep_hwr_candidate_pane_g3

0xd132,	// (0x00034989) fep_hwr_candidate_pane_g4_ParamLimits

0xd132,	// (0x00034989) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x00037356) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x00037356) fep_hwr_candidate_pane_g

0x48c7,	// (0x0002c11e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48c7,	// (0x0002c11e) fep_vkb_candidate_drop_down_list_pane

0x4cca,	// (0x0002c521) fep_vkb_candidate_pane_g3

0x4cd2,	// (0x0002c529) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00037383) fep_vkb_candidate_pane_g

0x49d2,	// (0x0002c229) cell_hwr_candidate_pane_g1_ParamLimits

0x4ce9,	// (0x0002c540) cell_hwr_candidate_pane_g3_ParamLimits

0x4ce9,	// (0x0002c540) cell_hwr_candidate_pane_g3

0x4d0a,	// (0x0002c561) cell_hwr_candidate_pane_g4_ParamLimits

0x4d0a,	// (0x0002c561) cell_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0003739d) cell_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0003739d) cell_hwr_candidate_pane_g

0x4d2b,	// (0x0002c582) cell_vkb_candidate_pane_g3_ParamLimits

0x4d2b,	// (0x0002c582) cell_vkb_candidate_pane_g3

0x4d46,	// (0x0002c59d) cell_vkb_candidate_pane_g4_ParamLimits

0x4d46,	// (0x0002c59d) cell_vkb_candidate_pane_g4

0xb9f4,	// (0x0003324b) cell_app_pane_cp2_g1_ParamLimits

0xb9f4,	// (0x0003324b) cell_app_pane_cp2_g1

0x4e49,	// (0x0002c6a0) cell_app_pane_cp2_g2_ParamLimits

0x4e49,	// (0x0002c6a0) cell_app_pane_cp2_g2

0x0001,

0xfb90,	// (0x000373e7) cell_app_pane_cp2_g_ParamLimits

0xfb90,	// (0x000373e7) cell_app_pane_cp2_g

0x4e55,	// (0x0002c6ac) cell_app_pane_cp2_t1_ParamLimits

0x4e55,	// (0x0002c6ac) cell_app_pane_cp2_t1

0xc69f,	// (0x00033ef6) grid_highlight_pane_cp1_ParamLimits

0xc69f,	// (0x00033ef6) grid_highlight_pane_cp1

0x1b76,	// (0x000293cd) cell_hwr_candidate_pane_cp1_ParamLimits

0x1b76,	// (0x000293cd) cell_hwr_candidate_pane_cp1

0x49d2,	// (0x0002c229) fep_hwr_candidate_drop_down_list_pane_g1

0x4e67,	// (0x0002c6be) fep_hwr_candidate_drop_down_list_pane_g2

0x4e74,	// (0x0002c6cb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000373ec) fep_hwr_candidate_drop_down_list_pane_g

0x1b95,	// (0x000293ec) fep_hwr_candidate_drop_down_list_scroll_pane

0x1b9e,	// (0x000293f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1b9e,	// (0x000293f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bab,	// (0x00029402) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bab,	// (0x00029402) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1bb8,	// (0x0002940f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1bb8,	// (0x0002940f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d2b,	// (0x0002c582) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d2b,	// (0x0002c582) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d46,	// (0x0002c59d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d46,	// (0x0002c59d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1bc5,	// (0x0002941c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1bc5,	// (0x0002941c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1be0,	// (0x00029437) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1be0,	// (0x00029437) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1bfb,	// (0x00029452) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1bfb,	// (0x00029452) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x000373f3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x000373f3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e81,	// (0x0002c6d8) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e81,	// (0x0002c6d8) cell_vkb_candidate_pane_cp1

0x49d2,	// (0x0002c229) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49d2,	// (0x0002c229) fep_vkb_candidate_drop_down_list_pane_g1

0x4e67,	// (0x0002c6be) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e67,	// (0x0002c6be) fep_vkb_candidate_drop_down_list_pane_g2

0x4e74,	// (0x0002c6cb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e74,	// (0x0002c6cb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000373ec) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb95,	// (0x000373ec) fep_vkb_candidate_drop_down_list_pane_g

0x4ea1,	// (0x0002c6f8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ea1,	// (0x0002c6f8) fep_vkb_candidate_drop_down_list_scroll_pane

0x4eae,	// (0x0002c705) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4eae,	// (0x0002c705) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4ebb,	// (0x0002c712) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4ebb,	// (0x0002c712) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ec7,	// (0x0002c71e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ec7,	// (0x0002c71e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ce9,	// (0x0002c540) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ce9,	// (0x0002c540) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d0a,	// (0x0002c561) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d0a,	// (0x0002c561) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ed3,	// (0x0002c72a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ed3,	// (0x0002c72a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ef4,	// (0x0002c74b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ef4,	// (0x0002c74b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f15,	// (0x0002c76c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f15,	// (0x0002c76c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00037404) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00037404) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90e4,	// (0x0003093b) title_pane_g1_ParamLimits

0x90f7,	// (0x0003094e) title_pane_g2_ParamLimits

0xf529,	// (0x00036d80) title_pane_g_ParamLimits

0xcae1,	// (0x00034338) aid_call2_pane

0xcae9,	// (0x00034340) aid_call_pane

0xcaf1,	// (0x00034348) popup_clock_analogue_window_g1

0xcaf1,	// (0x00034348) popup_clock_analogue_window_g2

0xf2ab,	// (0x00036b02) popup_clock_analogue_window_g3

0xf2b4,	// (0x00036b0b) popup_clock_analogue_window_g4

0xc283,	// (0x00033ada) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00036f1b) popup_clock_analogue_window_g

0xf2bc,	// (0x00036b13) popup_clock_analogue_window_t1

0xf2ca,	// (0x00036b21) clock_digital_number_pane_ParamLimits

0xf2ca,	// (0x00036b21) clock_digital_number_pane

0xf2d6,	// (0x00036b2d) clock_digital_number_pane_cp02_ParamLimits

0xf2d6,	// (0x00036b2d) clock_digital_number_pane_cp02

0xf2e2,	// (0x00036b39) clock_digital_number_pane_cp03_ParamLimits

0xf2e2,	// (0x00036b39) clock_digital_number_pane_cp03

0xf2ee,	// (0x00036b45) clock_digital_number_pane_cp04_ParamLimits

0xf2ee,	// (0x00036b45) clock_digital_number_pane_cp04

0xf2fa,	// (0x00036b51) clock_digital_separator_pane_ParamLimits

0xf2fa,	// (0x00036b51) clock_digital_separator_pane

0xf306,	// (0x00036b5d) popup_clock_digital_window_t1_ParamLimits

0xf306,	// (0x00036b5d) popup_clock_digital_window_t1

0xc283,	// (0x00033ada) clock_digital_number_pane_g1

0xc283,	// (0x00033ada) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00036f26) clock_digital_number_pane_g

0xc283,	// (0x00033ada) clock_digital_separator_pane_g1

0xc283,	// (0x00033ada) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00036f26) clock_digital_separator_pane_g

0xa5fd,	// (0x00031e54) aid_fill_nsta_ParamLimits

0xa733,	// (0x00031f8a) indicator_nsta_pane_ParamLimits

0x0a35,	// (0x0002828c) popup_clock_analogue_window

0x0a35,	// (0x0002828c) popup_clock_digital_window

0xb5e7,	// (0x00032e3e) grid_indicator_nsta_pane_ParamLimits

0x4158,	// (0x0002b9af) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x000372d6) clock_nsta_pane_t

0xf28c,	// (0x00036ae3) aid_size_max_handle

0x98c6,	// (0x0003111d) aid_size_min_handle

0xcf5b,	// (0x000347b2) editor_scroll_pane

0x4f30,	// (0x0002c787) ex_editor_pane

0xc7d1,	// (0x00034028) scroll_pane_cp13

0xc647,	// (0x00033e9e) scroll_pane_cp14

0xcb20,	// (0x00034377) scroll_pane_cp36

0x9990,	// (0x000311e7) list_single_graphic_hl_pane_cp2_ParamLimits

0x9990,	// (0x000311e7) list_single_graphic_hl_pane_cp2

0x8b66,	// (0x000303bd) list_single_graphic_hl_pane_ParamLimits

0x8b66,	// (0x000303bd) list_single_graphic_hl_pane

0x8b79,	// (0x000303d0) aid_size_min_hl_cp1

0x4f38,	// (0x0002c78f) list_highlight_pane_cp34_ParamLimits

0x4f38,	// (0x0002c78f) list_highlight_pane_cp34

0x4f49,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_ParamLimits

0x4f49,	// (0x0002c7a0) list_single_graphic_hl_pane_g1

0x8b82,	// (0x000303d9) list_single_graphic_hl_pane_g2_ParamLimits

0x8b82,	// (0x000303d9) list_single_graphic_hl_pane_g2

0x8b82,	// (0x000303d9) list_single_graphic_hl_pane_g3_ParamLimits

0x8b82,	// (0x000303d9) list_single_graphic_hl_pane_g3

0x8b8e,	// (0x000303e5) list_single_graphic_hl_pane_g4_ParamLimits

0x8b8e,	// (0x000303e5) list_single_graphic_hl_pane_g4

0x8b9a,	// (0x000303f1) list_single_graphic_hl_pane_g5_ParamLimits

0x8b9a,	// (0x000303f1) list_single_graphic_hl_pane_g5

0x0004,

0xfbbe,	// (0x00037415) list_single_graphic_hl_pane_g_ParamLimits

0xfbbe,	// (0x00037415) list_single_graphic_hl_pane_g

0x8bae,	// (0x00030405) list_single_graphic_hl_pane_t1_ParamLimits

0x8bae,	// (0x00030405) list_single_graphic_hl_pane_t1

0x4f56,	// (0x0002c7ad) aid_size_min_hl_cp2

0x4f5f,	// (0x0002c7b6) list_highlight_pane_cp34_cp2_ParamLimits

0x4f5f,	// (0x0002c7b6) list_highlight_pane_cp34_cp2

0x4f49,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f49,	// (0x0002c7a0) list_single_graphic_hl_pane_g1_cp2

0x4f6c,	// (0x0002c7c3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f6c,	// (0x0002c7c3) list_single_graphic_hl_pane_g2_cp2

0xba12,	// (0x00033269) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba12,	// (0x00033269) list_single_graphic_hl_pane_g3_cp2

0xceba,	// (0x00034711) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xceba,	// (0x00034711) list_single_graphic_hl_pane_g4_cp2

0x4f86,	// (0x0002c7dd) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f86,	// (0x0002c7dd) list_single_graphic_hl_pane_g5_cp2

0x9d1c,	// (0x00031573) control_pane_g4_ParamLimits

0x9d1c,	// (0x00031573) control_pane_g4

0xc7e1,	// (0x00034038) bg_popup_sub_pane_cp10_ParamLimits

0x476c,	// (0x0002bfc3) list_choice_list_pane_ParamLimits

0x477b,	// (0x0002bfd2) scroll_pane_cp23

0xc413,	// (0x00033c6a) bg_popup_preview_window_pane_cp02_ParamLimits

0x4dab,	// (0x0002c602) list_preview_fixed_pane_ParamLimits

0x4dc1,	// (0x0002c618) list_preview_fixed_pane_cp_ParamLimits

0x4dc1,	// (0x0002c618) list_preview_fixed_pane_cp

0x4dcd,	// (0x0002c624) popup_preview_fixed_window_g1_ParamLimits

0x4dcd,	// (0x0002c624) popup_preview_fixed_window_g1

0x4dd9,	// (0x0002c630) popup_preview_fixed_window_g2_ParamLimits

0x4dd9,	// (0x0002c630) popup_preview_fixed_window_g2

0x0002,

0xfb4d,	// (0x000373a4) popup_preview_fixed_window_g_ParamLimits

0xfb4d,	// (0x000373a4) popup_preview_fixed_window_g

0xf200,	// (0x00036a57) aid_navi_side_left_pane_ParamLimits

0xf215,	// (0x00036a6c) aid_navi_side_right_pane_ParamLimits

0xf22d,	// (0x00036a84) navi_icon_pane_stacon_ParamLimits

0xf241,	// (0x00036a98) navi_navi_pane_stacon_ParamLimits

0xf22d,	// (0x00036a84) navi_text_pane_stacon_ParamLimits

0xc279,	// (0x00033ad0) main_text_info_pane

0x4fb0,	// (0x0002c807) listscroll_text_info_pane

0x4fb8,	// (0x0002c80f) list_text_info_pane_ParamLimits

0x4fb8,	// (0x0002c80f) list_text_info_pane

0x4fc7,	// (0x0002c81e) scroll_pane_cp24_ParamLimits

0x4fc7,	// (0x0002c81e) scroll_pane_cp24

0xba20,	// (0x00033277) list_text_info_pane_t1_ParamLimits

0xba20,	// (0x00033277) list_text_info_pane_t1

0x9ec4,	// (0x0003171b) popup_fast_swap2_window_ParamLimits

0x9ec4,	// (0x0003171b) popup_fast_swap2_window

0x5019,	// (0x0002c870) aid_size_cell_fast2

0xc279,	// (0x00033ad0) bg_popup_window_pane_cp17

0x5023,	// (0x0002c87a) heading_pane_cp2

0x502b,	// (0x0002c882) listscroll_fast2_pane

0x5033,	// (0x0002c88a) grid_fast2_pane

0x503d,	// (0x0002c894) listscroll_fast2_pane_g1

0x5045,	// (0x0002c89c) listscroll_fast2_pane_g2

0x0001,

0xfbc9,	// (0x00037420) listscroll_fast2_pane_g

0xc7d1,	// (0x00034028) scroll_pane_cp26

0x504f,	// (0x0002c8a6) cell_fast2_pane_ParamLimits

0x504f,	// (0x0002c8a6) cell_fast2_pane

0x5064,	// (0x0002c8bb) cell_fast2_pane_g1

0x506d,	// (0x0002c8c4) cell_fast2_pane_g2

0x5076,	// (0x0002c8cd) cell_fast2_pane_g3

0x0002,

0xfbce,	// (0x00037425) cell_fast2_pane_g

0xc57e,	// (0x00033dd5) grid_highlight_pane_cp9

0xc593,	// (0x00033dea) main_eswt_pane_ParamLimits

0xc593,	// (0x00033dea) main_eswt_pane

0x4fdc,	// (0x0002c833) list_single_text_info_pane

0x507e,	// (0x0002c8d5) eswt_ctrl_button_pane

0x507e,	// (0x0002c8d5) eswt_ctrl_canvas_pane

0xba3c,	// (0x00033293) eswt_ctrl_combo_pane

0x507e,	// (0x0002c8d5) eswt_ctrl_default_pane

0x507e,	// (0x0002c8d5) eswt_ctrl_label_pane

0x508e,	// (0x0002c8e5) eswt_ctrl_wait_pane

0xba44,	// (0x0003329b) eswt_shell_pane

0xc279,	// (0x00033ad0) listscroll_eswt_app_pane

0x50b6,	// (0x0002c90d) popup_eswt_tasktip_window_ParamLimits

0x50b6,	// (0x0002c90d) popup_eswt_tasktip_window

0x0d8f,	// (0x000285e6) bg_popup_window_pane_cp18

0x50cf,	// (0x0002c926) eswt_control_pane_g1_ParamLimits

0x50cf,	// (0x0002c926) eswt_control_pane_g1

0x50dc,	// (0x0002c933) eswt_control_pane_g2_ParamLimits

0x50dc,	// (0x0002c933) eswt_control_pane_g2

0x50e9,	// (0x0002c940) eswt_control_pane_g3_ParamLimits

0x50e9,	// (0x0002c940) eswt_control_pane_g3

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_ParamLimits

0x50f6,	// (0x0002c94d) eswt_control_pane_g4

0x0003,

0xfbd5,	// (0x0003742c) eswt_control_pane_g_ParamLimits

0xfbd5,	// (0x0003742c) eswt_control_pane_g

0xc69f,	// (0x00033ef6) bg_button_pane_ParamLimits

0xc69f,	// (0x00033ef6) bg_button_pane

0xc593,	// (0x00033dea) common_borders_pane_copy2_ParamLimits

0xc593,	// (0x00033dea) common_borders_pane_copy2

0x5103,	// (0x0002c95a) control_button_pane_g1_ParamLimits

0x5103,	// (0x0002c95a) control_button_pane_g1

0x510f,	// (0x0002c966) control_button_pane_g2_ParamLimits

0x510f,	// (0x0002c966) control_button_pane_g2

0x511b,	// (0x0002c972) control_button_pane_g3_ParamLimits

0x511b,	// (0x0002c972) control_button_pane_g3

0x0002,

0xfbde,	// (0x00037435) control_button_pane_g_ParamLimits

0xfbde,	// (0x00037435) control_button_pane_g

0x512f,	// (0x0002c986) control_button_pane_t1

0x513d,	// (0x0002c994) control_button_pane_t2

0x0001,

0xfbe5,	// (0x0003743c) control_button_pane_t

0x0c8b,	// (0x000284e2) bg_button_pane_g1

0x0c93,	// (0x000284ea) bg_button_pane_g2

0x0c9b,	// (0x000284f2) bg_button_pane_g3

0x0ca3,	// (0x000284fa) bg_button_pane_g4

0x0cab,	// (0x00028502) bg_button_pane_g5

0x0cb3,	// (0x0002850a) bg_button_pane_g6

0x0cbb,	// (0x00028512) bg_button_pane_g7

0x0cc3,	// (0x0002851a) bg_button_pane_g8

0x0ccb,	// (0x00028522) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00037084) bg_button_pane_g

0x4727,	// (0x0002bf7e) common_borders_pane_ParamLimits

0x4727,	// (0x0002bf7e) common_borders_pane

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy1_ParamLimits

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy1

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy1_ParamLimits

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy1

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy1_ParamLimits

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy1

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy1_ParamLimits

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy1

0x4762,	// (0x0002bfb9) bg_eswt_ctrl_canvas_pane_g1

0x4727,	// (0x0002bf7e) common_borders_pane_cp2_ParamLimits

0x4727,	// (0x0002bf7e) common_borders_pane_cp2

0x4727,	// (0x0002bf7e) common_borders_pane_cp3_ParamLimits

0x4727,	// (0x0002bf7e) common_borders_pane_cp3

0x514b,	// (0x0002c9a2) separator_horizontal_pane

0x5153,	// (0x0002c9aa) separator_vertical_pane

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy2_ParamLimits

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy2

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy2_ParamLimits

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy2

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy2_ParamLimits

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy2

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy2_ParamLimits

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy2

0xc279,	// (0x00033ad0) common_borders_pane_cp4

0x515c,	// (0x0002c9b3) separator_horizontal_pane_g1

0x5165,	// (0x0002c9bc) separator_horizontal_pane_g2

0x516e,	// (0x0002c9c5) separator_horizontal_pane_g3

0x0002,

0xfbea,	// (0x00037441) separator_horizontal_pane_g

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy3_ParamLimits

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy3

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy3_ParamLimits

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy3

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy3_ParamLimits

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy3

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy3_ParamLimits

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy3

0xc279,	// (0x00033ad0) common_borders_pane_cp5

0x5177,	// (0x0002c9ce) separator_vertical_pane_g1

0x5180,	// (0x0002c9d7) separator_vertical_pane_g2

0x5189,	// (0x0002c9e0) separator_vertical_pane_g3

0x0002,

0xfbf1,	// (0x00037448) separator_vertical_pane_g

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy4_ParamLimits

0x50cf,	// (0x0002c926) eswt_control_pane_g1_copy4

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy4_ParamLimits

0x50dc,	// (0x0002c933) eswt_control_pane_g2_copy4

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy4_ParamLimits

0x50e9,	// (0x0002c940) eswt_control_pane_g3_copy4

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy4_ParamLimits

0x50f6,	// (0x0002c94d) eswt_control_pane_g4_copy4

0xba64,	// (0x000332bb) eswt_ctrl_combo_button_pane

0xba6c,	// (0x000332c3) eswt_ctrl_input_pane

0xba74,	// (0x000332cb) popup_choice_list_window_cp70

0xba7c,	// (0x000332d3) eswt_ctrl_input_pane_t1

0xc279,	// (0x00033ad0) input_focus_pane_cp70

0x4727,	// (0x0002bf7e) bg_button_pane_cp70_ParamLimits

0x4727,	// (0x0002bf7e) bg_button_pane_cp70

0xba8a,	// (0x000332e1) eswt_ctrl_combo_button_pane_g1

0x51c0,	// (0x0002ca17) wait_bar_pane_cp70

0x0d8f,	// (0x000285e6) bg_popup_window_pane_cp70_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_window_pane_cp70

0x51c8,	// (0x0002ca1f) popup_eswt_tasktip_window_t1

0x51de,	// (0x0002ca35) wait_bar_pane_cp71_ParamLimits

0x51de,	// (0x0002ca35) wait_bar_pane_cp71

0x51ea,	// (0x0002ca41) grid_eswt_app_pane

0xc9cd,	// (0x00034224) scroll_pane_cp70

0xba92,	// (0x000332e9) cell_eswt_app_pane_ParamLimits

0xba92,	// (0x000332e9) cell_eswt_app_pane

0xbabc,	// (0x00033313) cell_eswt_app_pane_g1_ParamLimits

0xbabc,	// (0x00033313) cell_eswt_app_pane_g1

0xbaeb,	// (0x00033342) cell_eswt_app_pane_g2_ParamLimits

0xbaeb,	// (0x00033342) cell_eswt_app_pane_g2

0x0001,

0xfbf8,	// (0x0003744f) cell_eswt_app_pane_g_ParamLimits

0xfbf8,	// (0x0003744f) cell_eswt_app_pane_g

0xd14b,	// (0x000349a2) cell_eswt_app_pane_t1_ParamLimits

0xd14b,	// (0x000349a2) cell_eswt_app_pane_t1

0x52a8,	// (0x0002caff) grid_highlight_pane_cp70_ParamLimits

0x52a8,	// (0x0002caff) grid_highlight_pane_cp70

0xce55,	// (0x000346ac) set_content_pane_g1

0x9cae,	// (0x00031505) status_small_volume_pane

0xbb0f,	// (0x00033366) status_small_volume_pane_g1

0xbb17,	// (0x0003336e) volume_small2_pane

0xbb20,	// (0x00033377) volume_small2_pane_g1

0xbb29,	// (0x00033380) volume_small2_pane_g2

0xbb32,	// (0x00033389) volume_small2_pane_g3

0xbb3b,	// (0x00033392) volume_small2_pane_g4

0xbb44,	// (0x0003339b) volume_small2_pane_g5

0xbb4d,	// (0x000333a4) volume_small2_pane_g6

0xbb56,	// (0x000333ad) volume_small2_pane_g7

0xbb5f,	// (0x000333b6) volume_small2_pane_g8

0xbb68,	// (0x000333bf) volume_small2_pane_g9

0xbb71,	// (0x000333c8) volume_small2_pane_g10

0x0009,

0xfbfd,	// (0x00037454) volume_small2_pane_g

0x4b1a,	// (0x0002c371) fep_vkb_top_text_pane_g1_ParamLimits

0xb99c,	// (0x000331f3) fep_vkb_top_text_pane_t1_ParamLimits

0x4de5,	// (0x0002c63c) popup_preview_fixed_window_g3_ParamLimits

0x4de5,	// (0x0002c63c) popup_preview_fixed_window_g3

0xa53b,	// (0x00031d92) popup_toolbar_trans_pane

0xb228,	// (0x00032a7f) aid_height_set_list_ParamLimits

0x3509,	// (0x0002ad60) aid_size_parent_ParamLimits

0xc7e1,	// (0x00034038) list_highlight_pane_cp2_ParamLimits

0xce55,	// (0x000346ac) set_content_pane_g1_ParamLimits

0xb3a3,	// (0x00032bfa) list_single_image_pane_ParamLimits

0xb3a3,	// (0x00032bfa) list_single_image_pane

0xd17d,	// (0x000349d4) aid_size_cell_image_ParamLimits

0xd17d,	// (0x000349d4) aid_size_cell_image

0xd18a,	// (0x000349e1) grid_single_image_pane_ParamLimits

0xd18a,	// (0x000349e1) grid_single_image_pane

0xd196,	// (0x000349ed) list_single_image_pane_g1_ParamLimits

0xd196,	// (0x000349ed) list_single_image_pane_g1

0x52cd,	// (0x0002cb24) list_single_image_pane_g2_ParamLimits

0x52cd,	// (0x0002cb24) list_single_image_pane_g2

0x0001,

0xfc12,	// (0x00037469) list_single_image_pane_g_ParamLimits

0xfc12,	// (0x00037469) list_single_image_pane_g

0x52e1,	// (0x0002cb38) list_single_image_pane_t1_ParamLimits

0x52e1,	// (0x0002cb38) list_single_image_pane_t1

0xd1a2,	// (0x000349f9) cell_image_list_pane_ParamLimits

0xd1a2,	// (0x000349f9) cell_image_list_pane

0xd1b6,	// (0x00034a0d) cell_image_list_pane_g1

0xd1bf,	// (0x00034a16) cell_image_list_pane_g2

0x0001,

0xfc17,	// (0x0003746e) cell_image_list_pane_g

0xd1c8,	// (0x00034a1f) aid_size_cell_tb_trans_pane

0xc69f,	// (0x00033ef6) bg_tb_trans_pane

0xd1da,	// (0x00034a31) grid_tb_trans_pane

0x0c8b,	// (0x000284e2) bg_tb_trans_pane_g1

0x0c93,	// (0x000284ea) bg_tb_trans_pane_g2

0x0c9b,	// (0x000284f2) bg_tb_trans_pane_g3

0x0ca3,	// (0x000284fa) bg_tb_trans_pane_g4

0x0cab,	// (0x00028502) bg_tb_trans_pane_g5

0x0cc3,	// (0x0002851a) bg_tb_trans_pane_g6

0x0ccb,	// (0x00028522) bg_tb_trans_pane_g7

0x0cb3,	// (0x0002850a) bg_tb_trans_pane_g8

0x0cbb,	// (0x00028512) bg_tb_trans_pane_g9

0x0008,

0xfc1c,	// (0x00037473) bg_tb_trans_pane_g

0xd1ee,	// (0x00034a45) cell_toolbar_trans_pane_ParamLimits

0xd1ee,	// (0x00034a45) cell_toolbar_trans_pane

0x4762,	// (0x0002bfb9) cell_toolbar_trans_pane_g1

0xb6b0,	// (0x00032f07) list_form2_midp_pane_t1

0xb6be,	// (0x00032f15) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x0003731c) list_form2_midp_pane_t

0x4349,	// (0x0002bba0) scroll_pane_cp51_ParamLimits

0x4505,	// (0x0002bd5c) form2_midp_wait_pane_g1

0x450e,	// (0x0002bd65) form2_midp_wait_pane_g2

0x4517,	// (0x0002bd6e) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00037331) form2_midp_wait_pane_g

0xc2e9,	// (0x00033b40) list_highlight_pane_cp21_ParamLimits

0x455f,	// (0x0002bdb6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x456e,	// (0x0002bdc5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x36bd,	// (0x0002af14) list_single_2graphic_im_pane_ParamLimits

0x36bd,	// (0x0002af14) list_single_2graphic_im_pane

0xd214,	// (0x00034a6b) list_single_2graphic_im_pane_g1_ParamLimits

0xd214,	// (0x00034a6b) list_single_2graphic_im_pane_g1

0xd225,	// (0x00034a7c) list_single_2graphic_im_pane_g2_ParamLimits

0xd225,	// (0x00034a7c) list_single_2graphic_im_pane_g2

0xd231,	// (0x00034a88) list_single_2graphic_im_pane_g3_ParamLimits

0xd231,	// (0x00034a88) list_single_2graphic_im_pane_g3

0x0003,

0xfc2f,	// (0x00037486) list_single_2graphic_im_pane_g_ParamLimits

0xfc2f,	// (0x00037486) list_single_2graphic_im_pane_g

0xd245,	// (0x00034a9c) list_single_2graphic_im_pane_t1_ParamLimits

0xd245,	// (0x00034a9c) list_single_2graphic_im_pane_t1

0x4df1,	// (0x0002c648) list_single_graphic_2heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c648) list_single_graphic_2heading_pane_fp

0xeee5,	// (0x0003673c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003673c) list_single_graphic_2heading_pane_fp_g1

0x4e07,	// (0x0002c65e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c65e) list_single_graphic_2heading_pane_fp_g2

0xe8f3,	// (0x0003614a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003614a) list_single_graphic_2heading_pane_fp_g3

0xeeba,	// (0x00036711) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036711) list_single_graphic_2heading_pane_fp_g4

0x4e13,	// (0x0002c66a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c66a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x000373b4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x000373b4) list_single_graphic_2heading_pane_fp_g

0xf073,	// (0x000368ca) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf073,	// (0x000368ca) list_single_graphic_2heading_pane_fp_t1

0xef1d,	// (0x00036774) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x00036774) list_single_graphic_2heading_pane_fp_t2

0xf089,	// (0x000368e0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf089,	// (0x000368e0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc38,	// (0x0003748f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc38,	// (0x0003748f) list_single_graphic_2heading_pane_fp_t

0x47ee,	// (0x0002c045) fep_hwr_write_pane_g5_ParamLimits

0x47ee,	// (0x0002c045) fep_hwr_write_pane_g5

0x47fa,	// (0x0002c051) fep_hwr_write_pane_g6_ParamLimits

0x47fa,	// (0x0002c051) fep_hwr_write_pane_g6

0xba44,	// (0x0003329b) eswt_shell_pane_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_window_pane_cp18_ParamLimits

0x50c7,	// (0x0002c91e) heading_pane_cp70

0x51c8,	// (0x0002ca1f) popup_eswt_tasktip_window_t1_ParamLimits

0xa658,	// (0x00031eaf) aid_touch_tab_arrow_left

0xa66e,	// (0x00031ec5) aid_touch_tab_arrow_right

0x910f,	// (0x00030966) title_pane_g3_ParamLimits

0x910f,	// (0x00030966) title_pane_g3

0xc667,	// (0x00033ebe) set_value_pane_g1

0xa53b,	// (0x00031d92) popup_toolbar_trans_pane_ParamLimits

0xd1c8,	// (0x00034a1f) aid_size_cell_tb_trans_pane_ParamLimits

0xc69f,	// (0x00033ef6) bg_tb_trans_pane_ParamLimits

0xd1da,	// (0x00034a31) grid_tb_trans_pane_ParamLimits

0xc413,	// (0x00033c6a) cont_note_pane_ParamLimits

0xc413,	// (0x00033c6a) cont_note_pane

0xc593,	// (0x00033dea) cont_snote2_single_text_pane_ParamLimits

0xc593,	// (0x00033dea) cont_snote2_single_text_pane

0xc593,	// (0x00033dea) cont_snote2_single_graphic_pane_ParamLimits

0xc593,	// (0x00033dea) cont_snote2_single_graphic_pane

0x1431,	// (0x00028c88) cont_note_wait_pane_ParamLimits

0x1431,	// (0x00028c88) cont_note_wait_pane

0x1431,	// (0x00028c88) cont_note_image_pane_ParamLimits

0x1431,	// (0x00028c88) cont_note_image_pane

0x53d7,	// (0x0002cc2e) popup_note2_window_g1_ParamLimits

0x53d7,	// (0x0002cc2e) popup_note2_window_g1

0xd283,	// (0x00034ada) popup_note2_window_t1_ParamLimits

0xd283,	// (0x00034ada) popup_note2_window_t1

0xd2c8,	// (0x00034b1f) popup_note2_window_t2_ParamLimits

0xd2c8,	// (0x00034b1f) popup_note2_window_t2

0xd30d,	// (0x00034b64) popup_note2_window_t3_ParamLimits

0xd30d,	// (0x00034b64) popup_note2_window_t3

0x54d7,	// (0x0002cd2e) popup_note2_window_t4_ParamLimits

0x54d7,	// (0x0002cd2e) popup_note2_window_t4

0xc497,	// (0x00033cee) popup_note2_window_t5_ParamLimits

0xc497,	// (0x00033cee) popup_note2_window_t5

0x0004,

0xfc44,	// (0x0003749b) popup_note2_window_t_ParamLimits

0xfc44,	// (0x0003749b) popup_note2_window_t

0x5506,	// (0x0002cd5d) popup_note2_image_window_g1_ParamLimits

0x5506,	// (0x0002cd5d) popup_note2_image_window_g1

0xd352,	// (0x00034ba9) popup_note2_image_window_g2_ParamLimits

0xd352,	// (0x00034ba9) popup_note2_image_window_g2

0x0001,

0xfc4f,	// (0x000374a6) popup_note2_image_window_g_ParamLimits

0xfc4f,	// (0x000374a6) popup_note2_image_window_g

0x5524,	// (0x0002cd7b) popup_note2_image_window_t1_ParamLimits

0x5524,	// (0x0002cd7b) popup_note2_image_window_t1

0x553c,	// (0x0002cd93) popup_note2_image_window_t2_ParamLimits

0x553c,	// (0x0002cd93) popup_note2_image_window_t2

0x5554,	// (0x0002cdab) popup_note2_image_window_t3_ParamLimits

0x5554,	// (0x0002cdab) popup_note2_image_window_t3

0x0002,

0xfc54,	// (0x000374ab) popup_note2_image_window_t_ParamLimits

0xfc54,	// (0x000374ab) popup_note2_image_window_t

0x143f,	// (0x00028c96) popup_note2_wait_window_g1_ParamLimits

0x143f,	// (0x00028c96) popup_note2_wait_window_g1

0x144b,	// (0x00028ca2) popup_note2_wait_window_g2_ParamLimits

0x144b,	// (0x00028ca2) popup_note2_wait_window_g2

0x1457,	// (0x00028cae) popup_note2_wait_window_g3_ParamLimits

0x1457,	// (0x00028cae) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00037066) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00037066) popup_note2_wait_window_g

0x5570,	// (0x0002cdc7) popup_note2_wait_window_t1_ParamLimits

0x5570,	// (0x0002cdc7) popup_note2_wait_window_t1

0x558e,	// (0x0002cde5) popup_note2_wait_window_t2_ParamLimits

0x558e,	// (0x0002cde5) popup_note2_wait_window_t2

0x55ac,	// (0x0002ce03) popup_note2_wait_window_t3_ParamLimits

0x55ac,	// (0x0002ce03) popup_note2_wait_window_t3

0x55be,	// (0x0002ce15) popup_note2_wait_window_t4_ParamLimits

0x55be,	// (0x0002ce15) popup_note2_wait_window_t4

0x0003,

0xfc5b,	// (0x000374b2) popup_note2_wait_window_t_ParamLimits

0xfc5b,	// (0x000374b2) popup_note2_wait_window_t

0x55d0,	// (0x0002ce27) wait_bar2_pane_ParamLimits

0x55d0,	// (0x0002ce27) wait_bar2_pane

0x55e8,	// (0x0002ce3f) popup_snote2_single_text_window_g1_ParamLimits

0x55e8,	// (0x0002ce3f) popup_snote2_single_text_window_g1

0x5610,	// (0x0002ce67) popup_snote2_single_text_window_t1_ParamLimits

0x5610,	// (0x0002ce67) popup_snote2_single_text_window_t1

0x565c,	// (0x0002ceb3) popup_snote2_single_text_window_t2_ParamLimits

0x565c,	// (0x0002ceb3) popup_snote2_single_text_window_t2

0x56a8,	// (0x0002ceff) popup_snote2_single_text_window_t3_ParamLimits

0x56a8,	// (0x0002ceff) popup_snote2_single_text_window_t3

0x56e9,	// (0x0002cf40) popup_snote2_single_text_window_t4_ParamLimits

0x56e9,	// (0x0002cf40) popup_snote2_single_text_window_t4

0x571f,	// (0x0002cf76) popup_snote2_single_text_window_t5_ParamLimits

0x571f,	// (0x0002cf76) popup_snote2_single_text_window_t5

0x0004,

0xfc64,	// (0x000374bb) popup_snote2_single_text_window_t_ParamLimits

0xfc64,	// (0x000374bb) popup_snote2_single_text_window_t

0xd364,	// (0x00034bbb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd364,	// (0x00034bbb) popup_snote2_single_graphic_window_g1

0x5772,	// (0x0002cfc9) popup_snote2_single_graphic_window_g2_ParamLimits

0x5772,	// (0x0002cfc9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6f,	// (0x000374c6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6f,	// (0x000374c6) popup_snote2_single_graphic_window_g

0x579a,	// (0x0002cff1) popup_snote2_single_graphic_window_t1_ParamLimits

0x579a,	// (0x0002cff1) popup_snote2_single_graphic_window_t1

0x57e6,	// (0x0002d03d) popup_snote2_single_graphic_window_t2_ParamLimits

0x57e6,	// (0x0002d03d) popup_snote2_single_graphic_window_t2

0x56a8,	// (0x0002ceff) popup_snote2_single_graphic_window_t3_ParamLimits

0x56a8,	// (0x0002ceff) popup_snote2_single_graphic_window_t3

0x56e9,	// (0x0002cf40) popup_snote2_single_graphic_window_t4_ParamLimits

0x56e9,	// (0x0002cf40) popup_snote2_single_graphic_window_t4

0x571f,	// (0x0002cf76) popup_snote2_single_graphic_window_t5_ParamLimits

0x571f,	// (0x0002cf76) popup_snote2_single_graphic_window_t5

0x0004,

0xfc74,	// (0x000374cb) popup_snote2_single_graphic_window_t_ParamLimits

0xfc74,	// (0x000374cb) popup_snote2_single_graphic_window_t

0x4206,	// (0x0002ba5d) clock_nsta_pane_cp2_t1

0x4206,	// (0x0002ba5d) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x000372f2) clock_nsta_pane_cp2_t

0x8938,	// (0x0003018f) form_field_data_wide_pane_g1_ParamLimits

0xc6ad,	// (0x00033f04) form_field_data_wide_pane_g2_ParamLimits

0xc6ad,	// (0x00033f04) form_field_data_wide_pane_g2

0xc6b9,	// (0x00033f10) form_field_data_wide_pane_g3_ParamLimits

0xc6b9,	// (0x00033f10) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00036e9e) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00036e9e) form_field_data_wide_pane_g

0xb5d1,	// (0x00032e28) grid_touch_3_pane_ParamLimits

0xb5d1,	// (0x00032e28) grid_touch_3_pane

0xd38c,	// (0x00034be3) cell_touch_3_pane_ParamLimits

0xd38c,	// (0x00034be3) cell_touch_3_pane

0x4762,	// (0x0002bfb9) cell_touch_3_pane_g1

0x4762,	// (0x0002bfb9) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x00037377) cell_touch_3_pane_g

0xc4c9,	// (0x00033d20) cont_query_data_pane

0xc4d1,	// (0x00033d28) cont_query_data_pane_cp1

0x5860,	// (0x0002d0b7) button_value_adjust_pane_cp7

0x5868,	// (0x0002d0bf) query_popup_pane_cp3

0xcb52,	// (0x000343a9) bg_popup_sub_pane_cp22_ParamLimits

0x9a2f,	// (0x00031286) navi_navi_volume_pane_cp2

0x9a3e,	// (0x00031295) popup_side_volume_key_window_g2

0x9a4d,	// (0x000312a4) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00036f34) popup_side_volume_key_window_g

0x9a5c,	// (0x000312b3) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00036f3b) popup_side_volume_key_window_t

0x9b21,	// (0x00031378) popup_side_volume_key_window_ParamLimits

0x8707,	// (0x0002ff5e) list_double_graphic_pane_g4_ParamLimits

0x8707,	// (0x0002ff5e) list_double_graphic_pane_g4

0xb38f,	// (0x00032be6) list_single_2heading_msg_pane_ParamLimits

0xb38f,	// (0x00032be6) list_single_2heading_msg_pane

0x8bc4,	// (0x0003041b) list_single_2heading_msg_pane_g1_ParamLimits

0x8bc4,	// (0x0003041b) list_single_2heading_msg_pane_g1

0x8bd0,	// (0x00030427) list_single_2heading_msg_pane_g2_ParamLimits

0x8bd0,	// (0x00030427) list_single_2heading_msg_pane_g2

0x8be3,	// (0x0003043a) list_single_2heading_msg_pane_g3_ParamLimits

0x8be3,	// (0x0003043a) list_single_2heading_msg_pane_g3

0xf0a9,	// (0x00036900) list_single_2heading_msg_pane_g4_ParamLimits

0xf0a9,	// (0x00036900) list_single_2heading_msg_pane_g4

0x0003,

0xfc7f,	// (0x000374d6) list_single_2heading_msg_pane_g_ParamLimits

0xfc7f,	// (0x000374d6) list_single_2heading_msg_pane_g

0x8bef,	// (0x00030446) list_single_2heading_msg_pane_t1_ParamLimits

0x8bef,	// (0x00030446) list_single_2heading_msg_pane_t1

0x8c17,	// (0x0003046e) list_single_2heading_msg_pane_t2_ParamLimits

0x8c17,	// (0x0003046e) list_single_2heading_msg_pane_t2

0x8c82,	// (0x000304d9) list_single_2heading_msg_pane_t3_ParamLimits

0x8c82,	// (0x000304d9) list_single_2heading_msg_pane_t3

0xf0c1,	// (0x00036918) list_single_2heading_msg_pane_t4_ParamLimits

0xf0c1,	// (0x00036918) list_single_2heading_msg_pane_t4

0x0003,

0xfc88,	// (0x000374df) list_single_2heading_msg_pane_t_ParamLimits

0xfc88,	// (0x000374df) list_single_2heading_msg_pane_t

0xc297,	// (0x00033aee) title_pane_g4_ParamLimits

0xc297,	// (0x00033aee) title_pane_g4

0xf151,	// (0x000369a8) title_pane_stacon_g3_ParamLimits

0xf151,	// (0x000369a8) title_pane_stacon_g3

0x539a,	// (0x0002cbf1) list_single_2graphic_im_pane_g4_ParamLimits

0x539a,	// (0x0002cbf1) list_single_2graphic_im_pane_g4

0xb011,	// (0x00032868) popup_side_volume_key_window_cp

0x3a38,	// (0x0002b28f) main_idle_act2_pane_t1

0x0cd3,	// (0x0002852a) toolbar_button_pane_g10

0x9718,	// (0x00030f6f) popup_toolbar_window_cp1

0x41f7,	// (0x0002ba4e) clock_nsta_pane_cp_t1

0x41f7,	// (0x0002ba4e) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x000372ed) clock_nsta_pane_cp_t

0x9a2f,	// (0x00031286) navi_navi_volume_pane_cp2_ParamLimits

0xf325,	// (0x00036b7c) popup_side_volume_key_window_g1_ParamLimits

0x9a3e,	// (0x00031295) popup_side_volume_key_window_g2_ParamLimits

0x9a4d,	// (0x000312a4) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00036f34) popup_side_volume_key_window_g_ParamLimits

0x1926,	// (0x0002917d) fep_hwr_aid_pane

0xd117,	// (0x0003496e) bg_fep_hwr_top_pane_g4_ParamLimits

0x47be,	// (0x0002c015) fep_hwr_top_pane_g1_ParamLimits

0x47d0,	// (0x0002c027) fep_hwr_top_pane_g2_ParamLimits

0x19df,	// (0x00029236) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00037342) fep_hwr_top_pane_g_ParamLimits

0x19f4,	// (0x0002924b) fep_hwr_top_text_pane_ParamLimits

0x2fde,	// (0x0002a835) aid_touch_tab_arrow_arrow_2

0x2fe7,	// (0x0002a83e) aid_touch_tab_arrow_left_2

0x193a,	// (0x00029191) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1971,	// (0x000291c8) fep_hwr_prediction_pane

0x4929,	// (0x0002c180) fep_vkb_prediction_pane

0xb97c,	// (0x000331d3) fep_vkb_side_pane_g3_ParamLimits

0xb97c,	// (0x000331d3) fep_vkb_side_pane_g3

0x49d2,	// (0x0002c229) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e67,	// (0x0002c6be) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e74,	// (0x0002c6cb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb95,	// (0x000373ec) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x588d,	// (0x0002d0e4) fep_hwr_prediction_pane_g1

0x1c81,	// (0x000294d8) fep_hwr_prediction_pane_g2

0x1c89,	// (0x000294e0) fep_hwr_prediction_pane_g3

0x1c91,	// (0x000294e8) fep_hwr_prediction_pane_g4

0x0003,

0xfc91,	// (0x000374e8) fep_hwr_prediction_pane_g

0x588d,	// (0x0002d0e4) fep_vkb_prediction_pane_g1

0x5897,	// (0x0002d0ee) fep_vkb_prediction_pane_g2

0x589f,	// (0x0002d0f6) fep_vkb_prediction_pane_g3

0x58a7,	// (0x0002d0fe) fep_vkb_prediction_pane_g4

0x0003,

0xfc9a,	// (0x000374f1) fep_vkb_prediction_pane_g

0xb1aa,	// (0x00032a01) slider_set_pane_g3

0xb1be,	// (0x00032a15) slider_set_pane_g4

0xb1d6,	// (0x00032a2d) slider_set_pane_g5

0xb1aa,	// (0x00032a01) slider_set_pane_g6

0xb1ec,	// (0x00032a43) slider_set_pane_g7

0x366a,	// (0x0002aec1) slider_form_pane_g3

0x3673,	// (0x0002aeca) slider_form_pane_g4

0x367b,	// (0x0002aed2) slider_form_pane_g5

0x366a,	// (0x0002aec1) slider_form_pane_g6

0xb373,	// (0x00032bca) slider_form_pane_g7

0x3ce4,	// (0x0002b53b) slider_set_pane_vc_g3

0x3ced,	// (0x0002b544) slider_set_pane_vc_g4

0x3cf6,	// (0x0002b54d) slider_set_pane_vc_g5

0x3ce4,	// (0x0002b53b) slider_set_pane_vc_g6

0x3cff,	// (0x0002b556) slider_set_pane_vc_g7

0x3eb5,	// (0x0002b70c) slider_form_pane_vc_g1

0x3ebe,	// (0x0002b715) slider_form_pane_vc_g2

0x3ec7,	// (0x0002b71e) slider_form_pane_vc_g3

0x3eb5,	// (0x0002b70c) slider_form_pane_vc_g4

0x3ed0,	// (0x0002b727) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x000372bf) slider_form_pane_vc_g

0xc279,	// (0x00033ad0) main_idle_act3_pane

0x58af,	// (0x0002d106) ai3_links_pane

0xd3d5,	// (0x00034c2c) popup_ai3_data_window_ParamLimits

0xd3d5,	// (0x00034c2c) popup_ai3_data_window

0xc279,	// (0x00033ad0) grid_ai3_links_pane

0xd3ed,	// (0x00034c44) cell_ai3_links_pane_ParamLimits

0xd3ed,	// (0x00034c44) cell_ai3_links_pane

0x58e8,	// (0x0002d13f) bg_popup_sub_pane_cp11

0x58f5,	// (0x0002d14c) cell_ai3_links_pane_g1

0xc279,	// (0x00033ad0) bg_popup_sub_pane_cp12

0x591a,	// (0x0002d171) heading_ai3_data_pane

0x5922,	// (0x0002d179) list_ai3_gene_pane

0x592e,	// (0x0002d185) popup_ai3_data_window_g1

0x5936,	// (0x0002d18d) heading_ai3_data_pane_g1

0x593e,	// (0x0002d195) heading_ai3_data_pane_t1

0xd407,	// (0x00034c5e) list_double_ai3_gene_pane_ParamLimits

0xd407,	// (0x00034c5e) list_double_ai3_gene_pane

0x5959,	// (0x0002d1b0) list_single_ai3_gene_pane_ParamLimits

0x5959,	// (0x0002d1b0) list_single_ai3_gene_pane

0x4727,	// (0x0002bf7e) list_highlight_pane_cp7_ParamLimits

0x4727,	// (0x0002bf7e) list_highlight_pane_cp7

0x5966,	// (0x0002d1bd) list_single_a13_gene_pane_t1_ParamLimits

0x5966,	// (0x0002d1bd) list_single_a13_gene_pane_t1

0x597d,	// (0x0002d1d4) list_single_ai3_gene_pane_g1

0x5986,	// (0x0002d1dd) list_single_ai3_gene_pane_g2

0x0001,

0xfca3,	// (0x000374fa) list_single_ai3_gene_pane_g

0x598e,	// (0x0002d1e5) list_double_ai3_gene_pane_g1_ParamLimits

0x598e,	// (0x0002d1e5) list_double_ai3_gene_pane_g1

0xd414,	// (0x00034c6b) list_double_ai3_gene_pane_t1_ParamLimits

0xd414,	// (0x00034c6b) list_double_ai3_gene_pane_t1

0x59b6,	// (0x0002d20d) list_double_ai3_gene_pane_t2_ParamLimits

0x59b6,	// (0x0002d20d) list_double_ai3_gene_pane_t2

0x59cb,	// (0x0002d222) list_double_ai3_gene_pane_t3_ParamLimits

0x59cb,	// (0x0002d222) list_double_ai3_gene_pane_t3

0x0002,

0xfca8,	// (0x000374ff) list_double_ai3_gene_pane_t_ParamLimits

0xfca8,	// (0x000374ff) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09f,	// (0x000368f6) aid_size_min_col_2

0xd3bf,	// (0x00034c16) aid_size_min_msg_ParamLimits

0xd3bf,	// (0x00034c16) aid_size_min_msg

0xb990,	// (0x000331e7) fep_vkb_top_text_pane_g2_ParamLimits

0xb990,	// (0x000331e7) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00037372) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00037372) fep_vkb_top_text_pane_g

0xc279,	// (0x00033ad0) main_hc_apps_shell_pane

0x59e8,	// (0x0002d23f) grid_hc_apps_pane_ParamLimits

0x59e8,	// (0x0002d23f) grid_hc_apps_pane

0x59fa,	// (0x0002d251) list_hc_apps_pane

0x5a02,	// (0x0002d259) scroll_pane_cp37_ParamLimits

0x5a02,	// (0x0002d259) scroll_pane_cp37

0xd430,	// (0x00034c87) cell_hc_apps_pane_ParamLimits

0xd430,	// (0x00034c87) cell_hc_apps_pane

0xd4ee,	// (0x00034d45) cell_hc_apps_pane_g1_ParamLimits

0xd4ee,	// (0x00034d45) cell_hc_apps_pane_g1

0x5aec,	// (0x0002d343) cell_hc_apps_pane_g2_ParamLimits

0x5aec,	// (0x0002d343) cell_hc_apps_pane_g2

0x5b08,	// (0x0002d35f) cell_hc_apps_pane_g3_ParamLimits

0x5b08,	// (0x0002d35f) cell_hc_apps_pane_g3

0x0002,

0xfcaf,	// (0x00037506) cell_hc_apps_pane_g_ParamLimits

0xfcaf,	// (0x00037506) cell_hc_apps_pane_g

0xd51a,	// (0x00034d71) cell_hc_apps_pane_t1_ParamLimits

0xd51a,	// (0x00034d71) cell_hc_apps_pane_t1

0xc413,	// (0x00033c6a) grid_highlight_pane_cp10_ParamLimits

0xc413,	// (0x00033c6a) grid_highlight_pane_cp10

0xd558,	// (0x00034daf) list_single_hc_apps_pane_ParamLimits

0xd558,	// (0x00034daf) list_single_hc_apps_pane

0xd588,	// (0x00034ddf) list_single_hc_apps_pane_g1

0x8cf0,	// (0x00030547) list_single_hc_apps_pane_g2

0x0001,

0xfcb6,	// (0x0003750d) list_single_hc_apps_pane_g

0x8d09,	// (0x00030560) list_single_hc_apps_pane_g2_copy1

0x8d25,	// (0x0003057c) list_single_hc_apps_pane_t1

0xc2e9,	// (0x00033b40) bg_set_opt_pane_cp_ParamLimits

0x91e3,	// (0x00030a3a) setting_slider_pane_t1_ParamLimits

0x91fc,	// (0x00030a53) setting_slider_pane_t2_ParamLimits

0x9216,	// (0x00030a6d) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00036d90) setting_slider_pane_t_ParamLimits

0x922e,	// (0x00030a85) slider_set_pane_ParamLimits

0x008e,	// (0x000278e5) control_pane_g5_ParamLimits

0x008e,	// (0x000278e5) control_pane_g5

0xb19d,	// (0x000329f4) slider_set_pane_g1_ParamLimits

0x1752,	// (0x00028fa9) slider_set_pane_g2_ParamLimits

0xb1aa,	// (0x00032a01) slider_set_pane_g3_ParamLimits

0xb1be,	// (0x00032a15) slider_set_pane_g4_ParamLimits

0xb1d6,	// (0x00032a2d) slider_set_pane_g5_ParamLimits

0xb1aa,	// (0x00032a01) slider_set_pane_g6_ParamLimits

0xb1ec,	// (0x00032a43) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00037182) slider_set_pane_g_ParamLimits

0xce00,	// (0x00034657) navi_icon_text_pane_ParamLimits

0xa621,	// (0x00031e78) aid_fill_nsta_2_ParamLimits

0xa658,	// (0x00031eaf) aid_touch_tab_arrow_left_ParamLimits

0xa66e,	// (0x00031ec5) aid_touch_tab_arrow_right_ParamLimits

0xa709,	// (0x00031f60) clock_nsta_pane_ParamLimits

0x2fc0,	// (0x0002a817) navi_icon_pane_g1_ParamLimits

0x2fcc,	// (0x0002a823) navi_text_pane_t1_ParamLimits

0x4307,	// (0x0002bb5e) navi_icon_text_pane_g1_ParamLimits

0x4313,	// (0x0002bb6a) navi_icon_text_pane_t1_ParamLimits

0xd588,	// (0x00034ddf) list_single_hc_apps_pane_g1_ParamLimits

0x8cf0,	// (0x00030547) list_single_hc_apps_pane_g2_ParamLimits

0xfcb6,	// (0x0003750d) list_single_hc_apps_pane_g_ParamLimits

0x8d09,	// (0x00030560) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8d25,	// (0x0003057c) list_single_hc_apps_pane_t1_ParamLimits

0x9014,	// (0x0003086b) popup_toolbar2_fixed_window_ParamLimits

0x9014,	// (0x0003086b) popup_toolbar2_fixed_window

0xa531,	// (0x00031d88) popup_toolbar2_float_window

0xc279,	// (0x00033ad0) bg_popup_sub_pane_cp27

0x5be6,	// (0x0002d43d) grid_toolbar2_float_pane

0xc279,	// (0x00033ad0) bg_popup_sub_pane_cp26

0x5be6,	// (0x0002d43d) grid_toolbar2_fixed_pane

0xd5a1,	// (0x00034df8) cell_toolbar2_fixed_pane_ParamLimits

0xd5a1,	// (0x00034df8) cell_toolbar2_fixed_pane

0xd5bb,	// (0x00034e12) cell_toolbar2_fixed_pane_g1

0x0bdb,	// (0x00028432) toolbar2_fixed_button_pane

0x0c8b,	// (0x000284e2) toolbar2_fixed_button_pane_g1

0x0c93,	// (0x000284ea) toolbar2_fixed_button_pane_g2

0x0c9b,	// (0x000284f2) toolbar2_fixed_button_pane_g3

0x0ca3,	// (0x000284fa) toolbar2_fixed_button_pane_g4

0x0cab,	// (0x00028502) toolbar2_fixed_button_pane_g5

0x0cb3,	// (0x0002850a) toolbar2_fixed_button_pane_g6

0x0cbb,	// (0x00028512) toolbar2_fixed_button_pane_g7

0x0cc3,	// (0x0002851a) toolbar2_fixed_button_pane_g8

0x0ccb,	// (0x00028522) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00037084) toolbar2_fixed_button_pane_g

0x5c07,	// (0x0002d45e) cell_toolbar2_float_pane_ParamLimits

0x5c07,	// (0x0002d45e) cell_toolbar2_float_pane

0x5c18,	// (0x0002d46f) cell_toolbar2_float_pane_g1

0x0bdb,	// (0x00028432) toolbar2_fixed_button_pane_cp

0xb878,	// (0x000330cf) fep_vkb_accented_list_pane_ParamLimits

0xb878,	// (0x000330cf) fep_vkb_accented_list_pane

0x1b42,	// (0x00029399) bg_popup_fep_shadow_pane_g9

0xcf5b,	// (0x000347b2) bg_popup_fep_shadow_pane_cp3

0xc7b8,	// (0x0003400f) list_accented_list_pane

0x5c21,	// (0x0002d478) list_single_accented_list_pane_ParamLimits

0x5c21,	// (0x0002d478) list_single_accented_list_pane

0xcf5b,	// (0x000347b2) list_highlight_pane_cp10

0x5c32,	// (0x0002d489) list_single_accented_list_pane_t1

0xa45b,	// (0x00031cb2) popup_slider_window_ParamLimits

0xa45b,	// (0x00031cb2) popup_slider_window

0x5870,	// (0x0002d0c7) aid_indentation_list_msg

0xd6ac,	// (0x00034f03) bg_popup_window_pane_cp19

0x5d58,	// (0x0002d5af) popup_slider_window_g1

0x5d74,	// (0x0002d5cb) popup_slider_window_g2

0x5d90,	// (0x0002d5e7) popup_slider_window_g3

0x0005,

0xfcbb,	// (0x00037512) popup_slider_window_g

0x5dff,	// (0x0002d656) popup_slider_window_t1

0x5e73,	// (0x0002d6ca) small_volume_slider_vertical_pane

0x4762,	// (0x0002bfb9) small_volume_slider_vertical_pane_g1

0x4762,	// (0x0002bfb9) small_volume_slider_vertical_pane_g2

0x5e8f,	// (0x0002d6e6) small_volume_slider_vertical_pane_g3

0x0002,

0xfccd,	// (0x00037524) small_volume_slider_vertical_pane_g

0x8e13,	// (0x0003066a) area_side_right_pane_ParamLimits

0x8e13,	// (0x0003066a) area_side_right_pane

0xbb7a,	// (0x000333d1) aid_size_side_button_ParamLimits

0xbb7a,	// (0x000333d1) aid_size_side_button

0xbb93,	// (0x000333ea) grid_sctrl_middle_pane_ParamLimits

0xbb93,	// (0x000333ea) grid_sctrl_middle_pane

0x1ccc,	// (0x00029523) sctrl_sk_bottom_pane

0x1cdd,	// (0x00029534) sctrl_sk_top_pane

0x1cef,	// (0x00029546) aid_touch_sctrl_top

0xc413,	// (0x00033c6a) bg_sctrl_sk_pane_ParamLimits

0xc413,	// (0x00033c6a) bg_sctrl_sk_pane

0x1cfc,	// (0x00029553) sctrl_sk_top_pane_g1

0x1d09,	// (0x00029560) sctrl_sk_top_pane_t1

0x1cef,	// (0x00029546) aid_touch_sctrl_bottom

0xc413,	// (0x00033c6a) bg_sctrl_sk_pane_cp_ParamLimits

0xc413,	// (0x00033c6a) bg_sctrl_sk_pane_cp

0x1d24,	// (0x0002957b) sctrl_sk_bottom_pane_g1

0x1d09,	// (0x00029560) sctrl_sk_bottom_pane_t1

0xbbad,	// (0x00033404) cell_sctrl_middle_pane_ParamLimits

0xbbad,	// (0x00033404) cell_sctrl_middle_pane

0xbbbe,	// (0x00033415) aid_touch_sctrl_middle_ParamLimits

0xbbbe,	// (0x00033415) aid_touch_sctrl_middle

0xbbcb,	// (0x00033422) bg_sctrl_middle_pane_ParamLimits

0xbbcb,	// (0x00033422) bg_sctrl_middle_pane

0x5f17,	// (0x0002d76e) cell_sctrl_middle_pane_g1_ParamLimits

0x5f17,	// (0x0002d76e) cell_sctrl_middle_pane_g1

0xbbd9,	// (0x00033430) cell_sctrl_middle_pane_g2_ParamLimits

0xbbd9,	// (0x00033430) cell_sctrl_middle_pane_g2

0x0001,

0xfcd9,	// (0x00037530) cell_sctrl_middle_pane_g_ParamLimits

0xfcd9,	// (0x00037530) cell_sctrl_middle_pane_g

0x0c8b,	// (0x000284e2) bg_sctrl_middle_pane_g1

0x0c93,	// (0x000284ea) bg_sctrl_middle_pane_g2

0x0c9b,	// (0x000284f2) bg_sctrl_middle_pane_g3

0x0ca3,	// (0x000284fa) bg_sctrl_middle_pane_g4

0x0cab,	// (0x00028502) bg_sctrl_middle_pane_g5

0x0cb3,	// (0x0002850a) bg_sctrl_middle_pane_g6

0x0cbb,	// (0x00028512) bg_sctrl_middle_pane_g7

0x0cc3,	// (0x0002851a) bg_sctrl_middle_pane_g8

0x0007,

0xfcde,	// (0x00037535) bg_sctrl_middle_pane_g

0x0ccb,	// (0x00028522) bg_sctrl_middle_pane_g8_copy1

0x0c8b,	// (0x000284e2) bg_sctrl_sk_pane_g1

0x0c93,	// (0x000284ea) bg_sctrl_sk_pane_g2

0x0c9b,	// (0x000284f2) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00037084) bg_sctrl_sk_pane_g

0xc5e1,	// (0x00033e38) aid_size_touch_scroll_bar

0x0ca3,	// (0x000284fa) bg_sctrl_sk_pane_g4

0x0cab,	// (0x00028502) bg_sctrl_sk_pane_g5

0x0cb3,	// (0x0002850a) bg_sctrl_sk_pane_g6

0x0cbb,	// (0x00028512) bg_sctrl_sk_pane_g7

0x0cc3,	// (0x0002851a) bg_sctrl_sk_pane_g8

0x0ccb,	// (0x00028522) bg_sctrl_sk_pane_g9

0x0255,	// (0x00027aac) popup_fep_china_hwr2_fs_candidate_window

0x9f21,	// (0x00031778) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9f21,	// (0x00031778) popup_fep_china_hwr2_fs_control_window

0x49d2,	// (0x0002c229) sctrl_sk_top_pane_g2

0x0001,

0xfcd4,	// (0x0003752b) sctrl_sk_top_pane_g

0xd742,	// (0x00034f99) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd742,	// (0x00034f99) aid_fep_china_hwr2_fs_cell

0xd756,	// (0x00034fad) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd756,	// (0x00034fad) bg_popup_fep_shadow_pane_cp4

0xd76d,	// (0x00034fc4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd76d,	// (0x00034fc4) bg_popup_fep_shadow_pane_cp5

0xd77f,	// (0x00034fd6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd77f,	// (0x00034fd6) popup_fep_china_hwr2_fs_control_bar_grid

0xd793,	// (0x00034fea) popup_fep_china_hwr2_fs_control_funtion_grid

0x5eeb,	// (0x0002d742) aid_fep_china_hwr2_fs_candi_cell

0xc279,	// (0x00033ad0) bg_popup_fep_shadow_pane_cp6

0x5ef5,	// (0x0002d74c) popup_fep_china_hwr2_fs_candidate_grid

0xd79b,	// (0x00034ff2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd79b,	// (0x00034ff2) cell_fep_china_hwr2_fs_funtion_grid

0x4762,	// (0x0002bfb9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f17,	// (0x0002d76e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f17,	// (0x0002d76e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f25,	// (0x0002d77c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f25,	// (0x0002d77c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcef,	// (0x00037546) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcef,	// (0x00037546) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7b3,	// (0x0003500a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7b3,	// (0x0003500a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7c8,	// (0x0003501f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7c8,	// (0x0003501f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf4,	// (0x0003754b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf4,	// (0x0003754b) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f6c,	// (0x0002d7c3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f74,	// (0x0002d7cb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f7c,	// (0x0002d7d3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf9,	// (0x00037550) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f84,	// (0x0002d7db) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f84,	// (0x0002d7db) cell_fep_china_hwr2_fs_candidate_grid

0x5f9d,	// (0x0002d7f4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fa5,	// (0x0002d7fc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4762,	// (0x0002bfb9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4762,	// (0x0002bfb9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x00037377) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fad,	// (0x0002d804) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0854,	// (0x000280ab) clock_nsta_pane_cp_24_ParamLimits

0x0854,	// (0x000280ab) clock_nsta_pane_cp_24

0x08d2,	// (0x00028129) indicator_nsta_pane_cp_24_ParamLimits

0x08d2,	// (0x00028129) indicator_nsta_pane_cp_24

0x2e3c,	// (0x0002a693) heading_pane_g1

0x0001,

0xf892,	// (0x000370e9) heading_pane_g

0x3881,	// (0x0002b0d8) grid_sct_catagory_button_pane

0x38b1,	// (0x0002b108) scroll_pane_cp5_ParamLimits

0x4355,	// (0x0002bbac) button_value_adjust_pane_cp5_ParamLimits

0x4355,	// (0x0002bbac) button_value_adjust_pane_cp5

0x4434,	// (0x0002bc8b) form2_midp_time_pane_ParamLimits

0x5fbb,	// (0x0002d812) cell_sct_catagory_button_pane_ParamLimits

0x5fbb,	// (0x0002d812) cell_sct_catagory_button_pane

0x4727,	// (0x0002bf7e) bg_button_pane_cp01_ParamLimits

0x4727,	// (0x0002bf7e) bg_button_pane_cp01

0x4762,	// (0x0002bfb9) cell_sct_catagory_button_pane_g1

0xa4d4,	// (0x00031d2b) popup_tb_extension_window

0xd7e4,	// (0x0003503b) aid_size_cell_ext_ParamLimits

0xd7e4,	// (0x0003503b) aid_size_cell_ext

0xc593,	// (0x00033dea) bg_tb_trans_pane_cp1_ParamLimits

0xc593,	// (0x00033dea) bg_tb_trans_pane_cp1

0xd80a,	// (0x00035061) grid_tb_ext_pane_ParamLimits

0xd80a,	// (0x00035061) grid_tb_ext_pane

0xd849,	// (0x000350a0) cell_tb_ext_pane_ParamLimits

0xd849,	// (0x000350a0) cell_tb_ext_pane

0xd871,	// (0x000350c8) cell_tb_ext_pane_g1_ParamLimits

0xd871,	// (0x000350c8) cell_tb_ext_pane_g1

0x6051,	// (0x0002d8a8) cell_tb_ext_pane_t1

0xc413,	// (0x00033c6a) list_highlight_pane_cp11_ParamLimits

0xc413,	// (0x00033c6a) list_highlight_pane_cp11

0x9029,	// (0x00030880) popup_uni_indicator_window_ParamLimits

0x9029,	// (0x00030880) popup_uni_indicator_window

0xc69f,	// (0x00033ef6) bg_popup_sub_pane_cp14

0xd88e,	// (0x000350e5) list_uniindi_pane

0xd89a,	// (0x000350f1) uniindi_top_pane

0xc413,	// (0x00033c6a) bg_uniindi_top_pane

0xd8b9,	// (0x00035110) uniindi_top_pane_g1

0xd8cf,	// (0x00035126) uniindi_top_pane_g2

0x0003,

0xfd00,	// (0x00037557) uniindi_top_pane_g

0xd8ec,	// (0x00035143) uniindi_top_pane_t1

0x6102,	// (0x0002d959) list_single_uniindi_pane_ParamLimits

0x6102,	// (0x0002d959) list_single_uniindi_pane

0x4762,	// (0x0002bfb9) bg_uniindi_top_pane_g1

0x6115,	// (0x0002d96c) list_single_uniindi_pane_g1

0x6128,	// (0x0002d97f) list_single_uniindi_pane_t1

0xc279,	// (0x00033ad0) control_bg_pane

0x614d,	// (0x0002d9a4) bg_sctrl_sk_pane_cp1

0x6156,	// (0x0002d9ad) bg_sctrl_sk_pane_cp2

0x615f,	// (0x0002d9b6) control_bg_pane_g1

0x6168,	// (0x0002d9bf) control_bg_pane_g2

0x0001,

0xfd09,	// (0x00037560) control_bg_pane_g

0x419b,	// (0x0002b9f2) cell_indicator_nsta_pane_g1_ParamLimits

0xb60e,	// (0x00032e65) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x000372db) cell_indicator_nsta_pane_g_ParamLimits

0xeea7,	// (0x000366fe) form2_midp_time_pane_t1_ParamLimits

0x1918,	// (0x0002916f) main_idle_act4_pane_ParamLimits

0x1918,	// (0x0002916f) main_idle_act4_pane

0xa4d4,	// (0x00031d2b) popup_tb_extension_window_ParamLimits

0xd82f,	// (0x00035086) tb_ext_find_pane_ParamLimits

0xd82f,	// (0x00035086) tb_ext_find_pane

0x6171,	// (0x0002d9c8) ai_gene_pane_1_cp1

0xcfdc,	// (0x00034833) ai_gene_pane_2_cp1

0xd916,	// (0x0003516d) list_single_idle_plugin_calendar_pane

0x6182,	// (0x0002d9d9) list_single_idle_plugin_notification_pane

0x618b,	// (0x0002d9e2) list_single_idle_plugin_player_pane

0xd91f,	// (0x00035176) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd91f,	// (0x00035176) list_single_idle_plugin_shortcut_pane

0xd947,	// (0x0003519e) main_idle_act4_pane_t1

0xd95e,	// (0x000351b5) main_idle_act4_pane_t2

0x0001,

0xfd0e,	// (0x00037565) main_idle_act4_pane_t

0xd975,	// (0x000351cc) middle_sk_idle_act4_pane_ParamLimits

0xd975,	// (0x000351cc) middle_sk_idle_act4_pane

0xd991,	// (0x000351e8) popup_clock_digital_analogue_window_cp2

0xd9bd,	// (0x00035214) shortcut_wheel_idle_act4_pane_ParamLimits

0xd9bd,	// (0x00035214) shortcut_wheel_idle_act4_pane

0x4762,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g1

0x4762,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g2

0x4762,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g3

0x4762,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g4

0x4762,	// (0x0002bfb9) shortcut_wheel_idle_act4_pane_g5

0x621e,	// (0x0002da75) shortcut_wheel_idle_act4_pane_g6

0x6226,	// (0x0002da7d) shortcut_wheel_idle_act4_pane_g7

0x622e,	// (0x0002da85) shortcut_wheel_idle_act4_pane_g8

0x6236,	// (0x0002da8d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd13,	// (0x0003756a) shortcut_wheel_idle_act4_pane_g

0xd117,	// (0x0003496e) middle_sk_idle_act4_pane_g1_ParamLimits

0xd117,	// (0x0003496e) middle_sk_idle_act4_pane_g1

0xda3a,	// (0x00035291) middle_sk_idle_act4_pane_g2_ParamLimits

0xda3a,	// (0x00035291) middle_sk_idle_act4_pane_g2

0x0001,

0xfd36,	// (0x0003758d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd36,	// (0x0003758d) middle_sk_idle_act4_pane_g

0xda52,	// (0x000352a9) middle_sk_idle_act4_pane_t1_ParamLimits

0xda52,	// (0x000352a9) middle_sk_idle_act4_pane_t1

0xda81,	// (0x000352d8) grid_ai_shortcut_pane_ParamLimits

0xda81,	// (0x000352d8) grid_ai_shortcut_pane

0xda9e,	// (0x000352f5) list_highlight_pane_cp16_ParamLimits

0xda9e,	// (0x000352f5) list_highlight_pane_cp16

0xdaab,	// (0x00035302) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdaab,	// (0x00035302) list_single_idle_plugin_shortcut_pane_g1

0xdab7,	// (0x0003530e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdab7,	// (0x0003530e) list_single_idle_plugin_shortcut_pane_g2

0xdad3,	// (0x0003532a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdad3,	// (0x0003532a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3b,	// (0x00037592) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3b,	// (0x00037592) list_single_idle_plugin_shortcut_pane_g

0xdae8,	// (0x0003533f) cell_ai_shortcut_pane_ParamLimits

0xdae8,	// (0x0003533f) cell_ai_shortcut_pane

0xdafe,	// (0x00035355) cell_ai_shortcut_pane_g1_ParamLimits

0xdafe,	// (0x00035355) cell_ai_shortcut_pane_g1

0x6171,	// (0x0002d9c8) ai_gene_pane_1_cp2

0x6366,	// (0x0002dbbd) ai_gene_pane_2_cp2

0x636e,	// (0x0002dbc5) list_highlight_pane_cp15

0xdb20,	// (0x00035377) list_single_idle_plugin_calendar_pane_g1

0x636e,	// (0x0002dbc5) list_highlight_pane_cp17

0x637f,	// (0x0002dbd6) list_single_idle_plugin_calendar_pane_g1_copy1

0x6387,	// (0x0002dbde) list_single_idle_plugin_player_pane_g1

0x3ada,	// (0x0002b331) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd42,	// (0x00037599) list_single_idle_plugin_player_pane_g

0x638f,	// (0x0002dbe6) list_single_idle_plugin_player_pane_t1

0x639d,	// (0x0002dbf4) list_single_idle_plugin_player_pane_t2

0x63ab,	// (0x0002dc02) list_single_idle_plugin_player_pane_t3

0x63b9,	// (0x0002dc10) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd47,	// (0x0003759e) list_single_idle_plugin_player_pane_t

0x63c7,	// (0x0002dc1e) wait_bar_pane_cp15

0x63cf,	// (0x0002dc26) grid_ai_notification_pane

0x3ada,	// (0x0002b331) list_single_idle_plugin_notification_pane_g1

0xdb28,	// (0x0003537f) cell_ai_notification_pane_ParamLimits

0xdb28,	// (0x0003537f) cell_ai_notification_pane

0x63e5,	// (0x0002dc3c) cell_ai_notification_pane_g1

0x63ed,	// (0x0002dc44) cell_ai_notification_pane_t1

0xdb35,	// (0x0003538c) tb_ext_find_button_pane

0xdb3d,	// (0x00035394) tb_ext_find_pane_g1

0xdb45,	// (0x0003539c) tb_ext_find_pane_t1

0xcaf1,	// (0x00034348) tb_ext_find_button_pane_g1

0xdb53,	// (0x000353aa) tb_ext_find_button_pane_g2

0x0001,

0xfd50,	// (0x000375a7) tb_ext_find_button_pane_g

0xd947,	// (0x0003519e) main_idle_act4_pane_t1_ParamLimits

0xd95e,	// (0x000351b5) main_idle_act4_pane_t2_ParamLimits

0xfd0e,	// (0x00037565) main_idle_act4_pane_t_ParamLimits

0xd991,	// (0x000351e8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9a9,	// (0x00035200) sat_plugin_idle_act4_pane_ParamLimits

0xd9a9,	// (0x00035200) sat_plugin_idle_act4_pane

0xdb5c,	// (0x000353b3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb5c,	// (0x000353b3) sat_plugin_idle_act4_pane_t1

0xdb74,	// (0x000353cb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb74,	// (0x000353cb) sat_plugin_idle_act4_pane_t2

0xdb8c,	// (0x000353e3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb8c,	// (0x000353e3) sat_plugin_idle_act4_pane_t3

0xdba4,	// (0x000353fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdba4,	// (0x000353fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd55,	// (0x000375ac) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd55,	// (0x000375ac) sat_plugin_idle_act4_pane_t

0x8fa4,	// (0x000307fb) popup_battery_window_ParamLimits

0x8fa4,	// (0x000307fb) popup_battery_window

0xc413,	// (0x00033c6a) bg_popup_sub_pane_cp25_ParamLimits

0xc413,	// (0x00033c6a) bg_popup_sub_pane_cp25

0x646e,	// (0x0002dcc5) popup_battery_window_g1_ParamLimits

0x646e,	// (0x0002dcc5) popup_battery_window_g1

0x647a,	// (0x0002dcd1) popup_battery_window_t1_ParamLimits

0x647a,	// (0x0002dcd1) popup_battery_window_t1

0x648c,	// (0x0002dce3) popup_battery_window_t2_ParamLimits

0x648c,	// (0x0002dce3) popup_battery_window_t2

0x0001,

0xfd5e,	// (0x000375b5) popup_battery_window_t_ParamLimits

0xfd5e,	// (0x000375b5) popup_battery_window_t

0x9b75,	// (0x000313cc) midp_canvas_pane_ParamLimits

0x9be7,	// (0x0003143e) midp_keypad_pane_ParamLimits

0x9be7,	// (0x0003143e) midp_keypad_pane

0xc7e1,	// (0x00034038) main_midp_pane_ParamLimits

0xb61b,	// (0x00032e72) signal_pane_g2_cp_ParamLimits

0xdbbc,	// (0x00035413) aid_size_cell_midp_keypad_ParamLimits

0xdbbc,	// (0x00035413) aid_size_cell_midp_keypad

0xdbda,	// (0x00035431) midp_keyp_game_grid_pane_ParamLimits

0xdbda,	// (0x00035431) midp_keyp_game_grid_pane

0xdc01,	// (0x00035458) midp_keyp_rocker_pane_ParamLimits

0xdc01,	// (0x00035458) midp_keyp_rocker_pane

0xdc52,	// (0x000354a9) midp_keyp_sk_left_pane_ParamLimits

0xdc52,	// (0x000354a9) midp_keyp_sk_left_pane

0xdca6,	// (0x000354fd) midp_keyp_sk_right_pane_ParamLimits

0xdca6,	// (0x000354fd) midp_keyp_sk_right_pane

0xc279,	// (0x00033ad0) bg_button_pane_cp03

0xdcfa,	// (0x00035551) midp_keyp_sk_left_pane_g1

0xc279,	// (0x00033ad0) bg_button_pane_cp04

0xdcfa,	// (0x00035551) midp_keyp_sk_right_pane_g1

0x4762,	// (0x0002bfb9) midp_keyp_rocker_pane_g1

0xdd03,	// (0x0003555a) keyp_game_cell_pane_ParamLimits

0xdd03,	// (0x0003555a) keyp_game_cell_pane

0xc279,	// (0x00033ad0) bg_button_pane_cp02

0xdd27,	// (0x0003557e) keyp_game_cell_pane_g1

0x8fc4,	// (0x0003081b) popup_fep_vkb2_window_ParamLimits

0x8fc4,	// (0x0003081b) popup_fep_vkb2_window

0xbbe5,	// (0x0003343c) aid_size_cell_vkb2_ParamLimits

0xbbe5,	// (0x0003343c) aid_size_cell_vkb2

0xbc19,	// (0x00033470) popup_fep_vkb2_window_g1_ParamLimits

0xbc19,	// (0x00033470) popup_fep_vkb2_window_g1

0xbc69,	// (0x000334c0) vkb2_area_bottom_pane_ParamLimits

0xbc69,	// (0x000334c0) vkb2_area_bottom_pane

0xbcbd,	// (0x00033514) vkb2_area_keypad_pane_ParamLimits

0xbcbd,	// (0x00033514) vkb2_area_keypad_pane

0xbd05,	// (0x0003355c) vkb2_area_top_pane_ParamLimits

0xbd05,	// (0x0003355c) vkb2_area_top_pane

0xbd91,	// (0x000335e8) vkb2_top_entry_pane_ParamLimits

0xbd91,	// (0x000335e8) vkb2_top_entry_pane

0xbdbe,	// (0x00033615) vkb2_top_grid_left_pane_ParamLimits

0xbdbe,	// (0x00033615) vkb2_top_grid_left_pane

0xbddf,	// (0x00033636) vkb2_top_grid_right_pane_ParamLimits

0xbddf,	// (0x00033636) vkb2_top_grid_right_pane

0x1f81,	// (0x000297d8) vkb2_cell_keypad_pane_ParamLimits

0x1f81,	// (0x000297d8) vkb2_cell_keypad_pane

0xbe27,	// (0x0003367e) vkb2_area_bottom_grid_pane_ParamLimits

0xbe27,	// (0x0003367e) vkb2_area_bottom_grid_pane

0xbe51,	// (0x000336a8) vkb2_area_bottom_pane_g1_ParamLimits

0xbe51,	// (0x000336a8) vkb2_area_bottom_pane_g1

0xbe77,	// (0x000336ce) vkb2_area_bottom_pane_g2_ParamLimits

0xbe77,	// (0x000336ce) vkb2_area_bottom_pane_g2

0xbea8,	// (0x000336ff) vkb2_area_bottom_pane_g3_ParamLimits

0xbea8,	// (0x000336ff) vkb2_area_bottom_pane_g3

0x0002,

0xfd63,	// (0x000375ba) vkb2_area_bottom_pane_g_ParamLimits

0xfd63,	// (0x000375ba) vkb2_area_bottom_pane_g

0x212b,	// (0x00029982) vkb2_top_cell_left_pane_ParamLimits

0x212b,	// (0x00029982) vkb2_top_cell_left_pane

0xdd30,	// (0x00035587) vkb2_top_entry_pane_g1_ParamLimits

0xdd30,	// (0x00035587) vkb2_top_entry_pane_g1

0xdd3e,	// (0x00035595) vkb2_top_entry_pane_t1_ParamLimits

0xdd3e,	// (0x00035595) vkb2_top_entry_pane_t1

0x663d,	// (0x0002de94) vkb2_top_entry_pane_t2_ParamLimits

0x663d,	// (0x0002de94) vkb2_top_entry_pane_t2

0x666f,	// (0x0002dec6) vkb2_top_entry_pane_t3_ParamLimits

0x666f,	// (0x0002dec6) vkb2_top_entry_pane_t3

0x0002,

0xfd6a,	// (0x000375c1) vkb2_top_entry_pane_t_ParamLimits

0xfd6a,	// (0x000375c1) vkb2_top_entry_pane_t

0xbf12,	// (0x00033769) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf12,	// (0x00033769) vkb2_top_grid_right_pane_g1

0x218e,	// (0x000299e5) vkb2_top_grid_right_pane_g2_ParamLimits

0x218e,	// (0x000299e5) vkb2_top_grid_right_pane_g2

0x21a6,	// (0x000299fd) vkb2_top_grid_right_pane_g3_ParamLimits

0x21a6,	// (0x000299fd) vkb2_top_grid_right_pane_g3

0xbf28,	// (0x0003377f) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf28,	// (0x0003377f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd71,	// (0x000375c8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd71,	// (0x000375c8) vkb2_top_grid_right_pane_g

0x21d4,	// (0x00029a2b) vkb2_top_cell_left_pane_g1

0x21f6,	// (0x00029a4d) vkb2_cell_keypad_pane_g1_ParamLimits

0x21f6,	// (0x00029a4d) vkb2_cell_keypad_pane_g1

0x6693,	// (0x0002deea) vkb2_cell_keypad_pane_t1_ParamLimits

0x6693,	// (0x0002deea) vkb2_cell_keypad_pane_t1

0x2204,	// (0x00029a5b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2204,	// (0x00029a5b) vkb2_cell_bottom_grid_pane

0x223d,	// (0x00029a94) vkb2_cell_bottom_grid_pane_g1

0xd9de,	// (0x00035235) aid_call2_pane_cp02

0xd9e6,	// (0x0003523d) aid_call_pane_cp02

0xd9ee,	// (0x00035245) clock_digital_number_pane_cp10

0xd9f6,	// (0x0003524d) clock_digital_number_pane_cp11

0xd9fe,	// (0x00035255) clock_digital_number_pane_cp12

0xda06,	// (0x0003525d) clock_digital_number_pane_cp13

0xda0e,	// (0x00035265) clock_digital_separator_pane_cp10

0xcaf1,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g1

0xcaf1,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g2

0xda16,	// (0x0003526d) popup_clock_digital_analogue_window_cp2_g3

0xcaf1,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g4

0xda16,	// (0x0003526d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd26,	// (0x0003757d) popup_clock_digital_analogue_window_cp2_g

0xda1e,	// (0x00035275) popup_clock_digital_analogue_window_cp2_t1

0xda2c,	// (0x00035283) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd31,	// (0x00037588) popup_clock_digital_analogue_window_cp2_t

0x4762,	// (0x0002bfb9) clock_digital_number_pane_cp10_g1

0x4762,	// (0x0002bfb9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x00037377) clock_digital_number_pane_cp10_g

0x4762,	// (0x0002bfb9) clock_digital_separator_pane_cp10_g1

0x4762,	// (0x0002bfb9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x00037377) clock_digital_separator_pane_cp10_g

0xd8db,	// (0x00035132) uniindi_top_pane_g3

0x60cb,	// (0x0002d922) uniindi_top_pane_g4

0x200c,	// (0x00029863) vkb2_row_keypad_pane_ParamLimits

0x200c,	// (0x00029863) vkb2_row_keypad_pane

0x225d,	// (0x00029ab4) vkb2_cell_t_keypad_pane_ParamLimits

0x225d,	// (0x00029ab4) vkb2_cell_t_keypad_pane

0x226d,	// (0x00029ac4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x226d,	// (0x00029ac4) vkb2_cell_t_keypad_pane_cp08

0x2280,	// (0x00029ad7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2280,	// (0x00029ad7) vkb2_cell_t_keypad_pane_cp09

0x2294,	// (0x00029aeb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2294,	// (0x00029aeb) vkb2_cell_t_keypad_pane_cp01

0x22a5,	// (0x00029afc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x22a5,	// (0x00029afc) vkb2_cell_t_keypad_pane_cp02

0x22b6,	// (0x00029b0d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x22b6,	// (0x00029b0d) vkb2_cell_t_keypad_pane_cp03

0x22c7,	// (0x00029b1e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x22c7,	// (0x00029b1e) vkb2_cell_t_keypad_pane_cp04

0x22d8,	// (0x00029b2f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x22d8,	// (0x00029b2f) vkb2_cell_t_keypad_pane_cp05

0x22e9,	// (0x00029b40) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x22e9,	// (0x00029b40) vkb2_cell_t_keypad_pane_cp06

0x22fa,	// (0x00029b51) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x22fa,	// (0x00029b51) vkb2_cell_t_keypad_pane_cp07

0x230b,	// (0x00029b62) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x230b,	// (0x00029b62) vkb2_cell_t_keypad_pane_cp10

0x49d2,	// (0x0002c229) vkb2_cell_t_keypad_pane_g1

0x66aa,	// (0x0002df01) vkb2_cell_t_keypad_pane_t1

0xc279,	// (0x00033ad0) popup_grid_graphic2_window

0xdd77,	// (0x000355ce) aid_size_cell_graphic2_ParamLimits

0xdd77,	// (0x000355ce) aid_size_cell_graphic2

0xddb5,	// (0x0003560c) bg_popup_window_pane_cp21_ParamLimits

0xddb5,	// (0x0003560c) bg_popup_window_pane_cp21

0xddc3,	// (0x0003561a) graphic2_pages_pane_ParamLimits

0xddc3,	// (0x0003561a) graphic2_pages_pane

0xde19,	// (0x00035670) grid_graphic2_control_pane_ParamLimits

0xde19,	// (0x00035670) grid_graphic2_control_pane

0xde61,	// (0x000356b8) grid_graphic2_pane_ParamLimits

0xde61,	// (0x000356b8) grid_graphic2_pane

0xdee8,	// (0x0003573f) cell_graphic2_pane

0xc279,	// (0x00033ad0) main_comp_mode_pane

0x5922,	// (0x0002d179) list_ai3_gene_pane_ParamLimits

0xd6ac,	// (0x00034f03) bg_popup_window_pane_cp19_ParamLimits

0x5cfc,	// (0x0002d553) bg_touch_area_indi_pane_ParamLimits

0x5cfc,	// (0x0002d553) bg_touch_area_indi_pane

0x5d12,	// (0x0002d569) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d12,	// (0x0002d569) bg_touch_area_indi_pane_cp01

0x5d28,	// (0x0002d57f) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d28,	// (0x0002d57f) bg_touch_area_indi_pane_cp02

0x5d3e,	// (0x0002d595) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d3e,	// (0x0002d595) bg_touch_area_indi_pane_cp03

0x5d58,	// (0x0002d5af) popup_slider_window_g1_ParamLimits

0x5d74,	// (0x0002d5cb) popup_slider_window_g2_ParamLimits

0x5d90,	// (0x0002d5e7) popup_slider_window_g3_ParamLimits

0xfcbb,	// (0x00037512) popup_slider_window_g_ParamLimits

0x5dff,	// (0x0002d656) popup_slider_window_t1_ParamLimits

0x5e73,	// (0x0002d6ca) small_volume_slider_vertical_pane_ParamLimits

0xdee8,	// (0x0003573f) cell_graphic2_pane_ParamLimits

0xdf43,	// (0x0003579a) bg_button_pane_cp10_ParamLimits

0xdf43,	// (0x0003579a) bg_button_pane_cp10

0xdf56,	// (0x000357ad) bg_button_pane_cp11_ParamLimits

0xdf56,	// (0x000357ad) bg_button_pane_cp11

0xdf69,	// (0x000357c0) graphic2_pages_pane_g1_ParamLimits

0xdf69,	// (0x000357c0) graphic2_pages_pane_g1

0xdf84,	// (0x000357db) graphic2_pages_pane_g2_ParamLimits

0xdf84,	// (0x000357db) graphic2_pages_pane_g2

0x0001,

0xfd7f,	// (0x000375d6) graphic2_pages_pane_g_ParamLimits

0xfd7f,	// (0x000375d6) graphic2_pages_pane_g

0xdf9c,	// (0x000357f3) graphic2_pages_pane_t1_ParamLimits

0xdf9c,	// (0x000357f3) graphic2_pages_pane_t1

0xdfb4,	// (0x0003580b) cell_graphic2_control_pane_ParamLimits

0xdfb4,	// (0x0003580b) cell_graphic2_control_pane

0xdfe6,	// (0x0003583d) cell_graphic2_pane_g1_ParamLimits

0xdfe6,	// (0x0003583d) cell_graphic2_pane_g1

0xd125,	// (0x0003497c) cell_graphic2_pane_g2_ParamLimits

0xd125,	// (0x0003497c) cell_graphic2_pane_g2

0xdff3,	// (0x0003584a) cell_graphic2_pane_g3_ParamLimits

0xdff3,	// (0x0003584a) cell_graphic2_pane_g3

0xd132,	// (0x00034989) cell_graphic2_pane_g4_ParamLimits

0xd132,	// (0x00034989) cell_graphic2_pane_g4

0xe000,	// (0x00035857) cell_graphic2_pane_g5_ParamLimits

0xe000,	// (0x00035857) cell_graphic2_pane_g5

0x0004,

0xfd84,	// (0x000375db) cell_graphic2_pane_g_ParamLimits

0xfd84,	// (0x000375db) cell_graphic2_pane_g

0xe01d,	// (0x00035874) cell_graphic2_pane_t1_ParamLimits

0xe01d,	// (0x00035874) cell_graphic2_pane_t1

0x2e30,	// (0x0002a687) grid_highlight_pane_cp11_ParamLimits

0x2e30,	// (0x0002a687) grid_highlight_pane_cp11

0xc413,	// (0x00033c6a) bg_button_pane_cp05

0xe067,	// (0x000358be) cell_graphic2_control_pane_g1

0x4762,	// (0x0002bfb9) bg_touch_area_indi_pane_g1

0x6983,	// (0x0002e1da) aid_cmod_rocker_key_size

0x698d,	// (0x0002e1e4) aid_cmode_itu_key_size

0x6997,	// (0x0002e1ee) main_cmode_video_pane

0x69a1,	// (0x0002e1f8) main_comp_mode_itu_pane

0x69ad,	// (0x0002e204) main_comp_mode_rocker_pane

0x69b9,	// (0x0002e210) cell_cmode_rocker_pane_ParamLimits

0x69b9,	// (0x0002e210) cell_cmode_rocker_pane

0x69cb,	// (0x0002e222) cell_cmode_itu_pane_ParamLimits

0x69cb,	// (0x0002e222) cell_cmode_itu_pane

0xc69f,	// (0x00033ef6) bg_button_pane_cp06_ParamLimits

0xc69f,	// (0x00033ef6) bg_button_pane_cp06

0x49d2,	// (0x0002c229) cell_cmode_rocker_pane_g1_ParamLimits

0x49d2,	// (0x0002c229) cell_cmode_rocker_pane_g1

0x5f17,	// (0x0002d76e) cell_cmode_rocker_pane_g2_ParamLimits

0x5f17,	// (0x0002d76e) cell_cmode_rocker_pane_g2

0x0001,

0xfd94,	// (0x000375eb) cell_cmode_rocker_pane_g_ParamLimits

0xfd94,	// (0x000375eb) cell_cmode_rocker_pane_g

0xc279,	// (0x00033ad0) bg_button_pane_cp07

0x69e0,	// (0x0002e237) cell_cmode_itu_pane_g1

0x69e9,	// (0x0002e240) cell_cmode_itu_pane_t1

0x69f7,	// (0x0002e24e) cell_cmode_itu_pane_t2

0x0001,

0xfd99,	// (0x000375f0) cell_cmode_itu_pane_t

0x613d,	// (0x0002d994) aid_touch_ctrl_left

0x6145,	// (0x0002d99c) aid_touch_ctrl_right

0xc279,	// (0x00033ad0) compa_mode_pane

0xe08d,	// (0x000358e4) aid_cmod_rocker_key_size_cp

0xe097,	// (0x000358ee) aid_cmode_itu_key_size_cp

0x6a19,	// (0x0002e270) compa_mode_pane_g1

0x6a21,	// (0x0002e278) compa_mode_pane_g2

0x6a29,	// (0x0002e280) compa_mode_pane_g3

0x0002,

0xfd9e,	// (0x000375f5) compa_mode_pane_g

0xe0a1,	// (0x000358f8) main_comp_mode_itu_pane_cp

0xe0a9,	// (0x00035900) main_comp_mode_rocker_pane_cp

0xe0b1,	// (0x00035908) cell_cmode_itu_pane_cp_ParamLimits

0xe0b1,	// (0x00035908) cell_cmode_itu_pane_cp

0xe0c6,	// (0x0003591d) cell_cmode_rocker_pane_cp_ParamLimits

0xe0c6,	// (0x0003591d) cell_cmode_rocker_pane_cp

0xc69f,	// (0x00033ef6) bg_button_pane_cp06_cp_ParamLimits

0xc69f,	// (0x00033ef6) bg_button_pane_cp06_cp

0x49d2,	// (0x0002c229) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49d2,	// (0x0002c229) cell_cmode_rocker_pane_g1_cp

0x4762,	// (0x0002bfb9) cell_cmode_rocker_pane_g2_cp

0xc279,	// (0x00033ad0) bg_button_pane_cp07_cp

0xe0d8,	// (0x0003592f) cell_cmode_itu_pane_g1_cp

0xe0e1,	// (0x00035938) cell_cmode_itu_pane_t1_cp

0xe0e1,	// (0x00035938) cell_cmode_itu_pane_t2_cp

0xb369,	// (0x00032bc0) settings_code_pane_cp2

0xc2e9,	// (0x00033b40) bg_popup_window_pane_cp3_ParamLimits

0xc52c,	// (0x00033d83) heading_pane_cp3_ParamLimits

0xc53b,	// (0x00033d92) listscroll_popup_graphic_pane_ParamLimits

0x1926,	// (0x0002917d) fep_hwr_aid_pane_ParamLimits

0x1cef,	// (0x00029546) aid_touch_sctrl_top_ParamLimits

0x1cfc,	// (0x00029553) sctrl_sk_top_pane_g1_ParamLimits

0x49d2,	// (0x0002c229) sctrl_sk_top_pane_g2_ParamLimits

0xfcd4,	// (0x0003752b) sctrl_sk_top_pane_g_ParamLimits

0x1d09,	// (0x00029560) sctrl_sk_top_pane_t1_ParamLimits

0x1cef,	// (0x00029546) aid_touch_sctrl_bottom_ParamLimits

0x1d09,	// (0x00029560) sctrl_sk_bottom_pane_t1_ParamLimits

0xd8a7,	// (0x000350fe) aid_area_touch_clock

0xbd51,	// (0x000335a8) aid_vkb2_area_top_pane_cell_ParamLimits

0xbd51,	// (0x000335a8) aid_vkb2_area_top_pane_cell

0xbe00,	// (0x00033657) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe00,	// (0x00033657) aid_vkb2_area_bottom_pane_cell

0x65f5,	// (0x0002de4c) popup_char_count_window

0x6a7f,	// (0x0002e2d6) popup_char_count_window_g1

0x6a88,	// (0x0002e2df) popup_char_count_window_g2

0x6a91,	// (0x0002e2e8) popup_char_count_window_g3

0x0002,

0xfda5,	// (0x000375fc) popup_char_count_window_g

0x6a9a,	// (0x0002e2f1) popup_char_count_window_t1

0x1da2,	// (0x000295f9) popup_fep_char_preview_window_ParamLimits

0x1da2,	// (0x000295f9) popup_fep_char_preview_window

0xbd71,	// (0x000335c8) vkb2_top_candi_pane_ParamLimits

0xbd71,	// (0x000335c8) vkb2_top_candi_pane

0xe0ef,	// (0x00035946) cell_vkb2_top_candi_pane_ParamLimits

0xe0ef,	// (0x00035946) cell_vkb2_top_candi_pane

0x1431,	// (0x00028c88) bg_popup_fep_char_preview_window_ParamLimits

0x1431,	// (0x00028c88) bg_popup_fep_char_preview_window

0x2320,	// (0x00029b77) popup_fep_char_preview_window_t1_ParamLimits

0x2320,	// (0x00029b77) popup_fep_char_preview_window_t1

0x6af2,	// (0x0002e349) bg_popup_fep_char_preview_window_g1

0x6afa,	// (0x0002e351) bg_popup_fep_char_preview_window_g2

0x6b02,	// (0x0002e359) bg_popup_fep_char_preview_window_g3

0x6b0a,	// (0x0002e361) bg_popup_fep_char_preview_window_g4

0x6b12,	// (0x0002e369) bg_popup_fep_char_preview_window_g5

0x6b1a,	// (0x0002e371) bg_popup_fep_char_preview_window_g6

0x6b22,	// (0x0002e379) bg_popup_fep_char_preview_window_g7

0x6b2a,	// (0x0002e381) bg_popup_fep_char_preview_window_g8

0x6b32,	// (0x0002e389) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdac,	// (0x00037603) bg_popup_fep_char_preview_window_g

0x49d2,	// (0x0002c229) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49d2,	// (0x0002c229) cell_vkb2_top_candi_pane_g1

0x4ce9,	// (0x0002c540) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4ce9,	// (0x0002c540) cell_vkb2_top_candi_pane_g2

0x4d0a,	// (0x0002c561) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d0a,	// (0x0002c561) cell_vkb2_top_candi_pane_g3

0x2362,	// (0x00029bb9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2362,	// (0x00029bb9) cell_vkb2_top_candi_pane_g4

0x6b3a,	// (0x0002e391) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b3a,	// (0x0002e391) cell_vkb2_top_candi_pane_g5

0x5f17,	// (0x0002d76e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f17,	// (0x0002d76e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x00037618) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x00037618) cell_vkb2_top_candi_pane_g

0x2383,	// (0x00029bda) cell_vkb2_top_candi_pane_t1

0xb189,	// (0x000329e0) aid_size_touch_slider_mark_ParamLimits

0xb189,	// (0x000329e0) aid_size_touch_slider_mark

0xddff,	// (0x00035656) grid_graphic2_catg_pane_ParamLimits

0xddff,	// (0x00035656) grid_graphic2_catg_pane

0xdebb,	// (0x00035712) popup_grid_graphic2_window_t1_ParamLimits

0xdebb,	// (0x00035712) popup_grid_graphic2_window_t1

0xded1,	// (0x00035728) popup_grid_graphic2_window_t2_ParamLimits

0xded1,	// (0x00035728) popup_grid_graphic2_window_t2

0x0001,

0xfd7a,	// (0x000375d1) popup_grid_graphic2_window_t_ParamLimits

0xfd7a,	// (0x000375d1) popup_grid_graphic2_window_t

0xc413,	// (0x00033c6a) bg_button_pane_cp05_ParamLimits

0xe067,	// (0x000358be) cell_graphic2_control_pane_g1_ParamLimits

0xe14f,	// (0x000359a6) cell_graphic2_catg_pane_ParamLimits

0xe14f,	// (0x000359a6) cell_graphic2_catg_pane

0xc279,	// (0x00033ad0) bg_button_pane_cp12

0xe161,	// (0x000359b8) cell_graphic2_catg_pane_g1

0x6051,	// (0x0002d8a8) cell_tb_ext_pane_t1_ParamLimits

0x214b,	// (0x000299a2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x214b,	// (0x000299a2) vkb2_top_cell_right_narrow_pane

0x2163,	// (0x000299ba) vkb2_top_cell_right_wide_pane_ParamLimits

0x2163,	// (0x000299ba) vkb2_top_cell_right_wide_pane

0x1918,	// (0x0002916f) bg_vkb2_func_pane_ParamLimits

0x1918,	// (0x0002916f) bg_vkb2_func_pane

0x21d4,	// (0x00029a2b) vkb2_top_cell_left_pane_g1_ParamLimits

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp03

0x223d,	// (0x00029a94) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0c93,	// (0x000284ea) bg_vkb2_func_pane_g1

0x0c9b,	// (0x000284f2) bg_vkb2_func_pane_g2

0x0cab,	// (0x00028502) bg_vkb2_func_pane_g3

0x0ca3,	// (0x000284fa) bg_vkb2_func_pane_g4

0x0cb3,	// (0x0002850a) bg_vkb2_func_pane_g5

0x0cbb,	// (0x00028512) bg_vkb2_func_pane_g6

0x0cc3,	// (0x0002851a) bg_vkb2_func_pane_g7

0x0ccb,	// (0x00028522) bg_vkb2_func_pane_g8

0x0c8b,	// (0x000284e2) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x00037625) bg_vkb2_func_pane_g

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp01

0x21d4,	// (0x00029a2b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x21d4,	// (0x00029a2b) vkb2_top_cell_right_wide_pane_g1

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1918,	// (0x0002916f) bg_vkb2_fuc_pane_cp02

0x23a2,	// (0x00029bf9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23a2,	// (0x00029bf9) vkb2_top_cell_right_narrow_pane_g1

0xd5ee,	// (0x00034e45) aid_touch_area_decrease_ParamLimits

0xd5ee,	// (0x00034e45) aid_touch_area_decrease

0xd628,	// (0x00034e7f) aid_touch_area_increase_ParamLimits

0xd628,	// (0x00034e7f) aid_touch_area_increase

0xd650,	// (0x00034ea7) aid_touch_area_mute_ParamLimits

0xd650,	// (0x00034ea7) aid_touch_area_mute

0xd678,	// (0x00034ecf) aid_touch_area_slider_ParamLimits

0xd678,	// (0x00034ecf) aid_touch_area_slider

0xd6b8,	// (0x00034f0f) popup_slider_window_g4_ParamLimits

0xd6b8,	// (0x00034f0f) popup_slider_window_g4

0xd6d2,	// (0x00034f29) popup_slider_window_g5_ParamLimits

0xd6d2,	// (0x00034f29) popup_slider_window_g5

0xd6f8,	// (0x00034f4f) popup_slider_window_g6_ParamLimits

0xd6f8,	// (0x00034f4f) popup_slider_window_g6

0x5e2d,	// (0x0002d684) popup_slider_window_t2_ParamLimits

0x5e2d,	// (0x0002d684) popup_slider_window_t2

0x0001,

0xfcc8,	// (0x0003751f) popup_slider_window_t_ParamLimits

0xfcc8,	// (0x0003751f) popup_slider_window_t

0xd70e,	// (0x00034f65) slider_pane_ParamLimits

0xd70e,	// (0x00034f65) slider_pane

0x6b76,	// (0x0002e3cd) slider_pane_g1_ParamLimits

0x6b76,	// (0x0002e3cd) slider_pane_g1

0x6b8a,	// (0x0002e3e1) slider_pane_g2_ParamLimits

0x6b8a,	// (0x0002e3e1) slider_pane_g2

0x6ba0,	// (0x0002e3f7) slider_pane_g3_ParamLimits

0x6ba0,	// (0x0002e3f7) slider_pane_g3

0x0003,

0xfde1,	// (0x00037638) slider_pane_g_ParamLimits

0xfde1,	// (0x00037638) slider_pane_g

0xa51c,	// (0x00031d73) popup_tb_float_extension_window_ParamLimits

0xa51c,	// (0x00031d73) popup_tb_float_extension_window

0x6bcc,	// (0x0002e423) aid_size_cell_tb_float_ext

0xc279,	// (0x00033ad0) bg_popup_sub_window_cp28

0xe16a,	// (0x000359c1) grid_tb_float_ext_pane

0xe174,	// (0x000359cb) cell_tb_float_ext_pane_ParamLimits

0xe174,	// (0x000359cb) cell_tb_float_ext_pane

0xe18e,	// (0x000359e5) cell_tb_float_ext_pane_g1

0xe197,	// (0x000359ee) grid_highlight_pane_cp12

0xb856,	// (0x000330ad) cell_last_hwr_side_pane_ParamLimits

0xb856,	// (0x000330ad) cell_last_hwr_side_pane

0x4762,	// (0x0002bfb9) cell_last_hwr_side_pane_g1

0x6c0e,	// (0x0002e465) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x00037641) cell_last_hwr_side_pane_g

0xbedd,	// (0x00033734) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbedd,	// (0x00033734) vkb2_area_bottom_space_btn_pane

0x49d2,	// (0x0002c229) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66aa,	// (0x0002df01) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2383,	// (0x00029bda) cell_vkb2_top_candi_pane_t1_ParamLimits

0x23c2,	// (0x00029c19) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x23c2,	// (0x00029c19) vkb2_area_bottom_space_btn_pane_g1

0x23fc,	// (0x00029c53) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x23fc,	// (0x00029c53) vkb2_area_bottom_space_btn_pane_g2

0x2432,	// (0x00029c89) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2432,	// (0x00029c89) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x00037646) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x00037646) vkb2_area_bottom_space_btn_pane_g

0x19cd,	// (0x00029224) cel_fep_hwr_func_pane_ParamLimits

0x19cd,	// (0x00029224) cel_fep_hwr_func_pane

0xb82b,	// (0x00033082) cell_hwr_side_button_pane_ParamLimits

0xb82b,	// (0x00033082) cell_hwr_side_button_pane

0xd8a7,	// (0x000350fe) aid_area_touch_clock_ParamLimits

0xc413,	// (0x00033c6a) bg_uniindi_top_pane_ParamLimits

0xd8b9,	// (0x00035110) uniindi_top_pane_g1_ParamLimits

0xd8cf,	// (0x00035126) uniindi_top_pane_g2_ParamLimits

0xd8db,	// (0x00035132) uniindi_top_pane_g3_ParamLimits

0x60cb,	// (0x0002d922) uniindi_top_pane_g4_ParamLimits

0xfd00,	// (0x00037557) uniindi_top_pane_g_ParamLimits

0xd8ec,	// (0x00035143) uniindi_top_pane_t1_ParamLimits

0xc413,	// (0x00033c6a) bg_vkb2_func_pane_cp01_ParamLimits

0xc413,	// (0x00033c6a) bg_vkb2_func_pane_cp01

0x6c17,	// (0x0002e46e) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c17,	// (0x0002e46e) cel_fep_hwr_func_pane_g1

0xc413,	// (0x00033c6a) bg_vkb2_func_pane_cp02_ParamLimits

0xc413,	// (0x00033c6a) bg_vkb2_func_pane_cp02

0x6c17,	// (0x0002e46e) cell_hwr_side_button_pane_g1_ParamLimits

0x6c17,	// (0x0002e46e) cell_hwr_side_button_pane_g1

0x0adf,	// (0x00028336) status_pane_g4_ParamLimits

0x0adf,	// (0x00028336) status_pane_g4

0x0af9,	// (0x00028350) status_pane_t1

0x449d,	// (0x0002bcf4) form2_midp_gauge_slider_cont_pane

0x44a5,	// (0x0002bcfc) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb744,	// (0x00032f9b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb756,	// (0x00032fad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x0003732a) form2_midp_gauge_slider_pane_t_ParamLimits

0x44db,	// (0x0002bd32) form2_midp_slider_pane_ParamLimits

0x1d6a,	// (0x000295c1) aid_size_cell_func_vkb2_ParamLimits

0x1d6a,	// (0x000295c1) aid_size_cell_func_vkb2

0x6bb8,	// (0x0002e40f) slider_pane_g4_ParamLimits

0x6bb8,	// (0x0002e40f) slider_pane_g4

0xbf46,	// (0x0003379d) form2_midp_gauge_slider_pane_t2_cp01

0xbf54,	// (0x000337ab) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf54,	// (0x000337ab) form2_midp_gauge_slider_pane_t3_cp01

0x24a7,	// (0x00029cfe) form2_midp_slider_pane_cp01

0xc279,	// (0x00033ad0) navi_smil_pane

0x6c50,	// (0x0002e4a7) navi_smil_pane_g1

0x6c58,	// (0x0002e4af) navi_smil_pane_t1

0x6c25,	// (0x0002e47c) form2_midp_slider_pane_g1

0x6c2e,	// (0x0002e485) form2_midp_slider_pane_g2

0x6c36,	// (0x0002e48d) form2_midp_slider_pane_g3

0x6c25,	// (0x0002e47c) form2_midp_slider_pane_g4

0xe1a0,	// (0x000359f7) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x0003764f) form2_midp_slider_pane_g

0x246c,	// (0x00029cc3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x246c,	// (0x00029cc3) vkb2_area_bottom_space_btn_pane_g4

0xa754,	// (0x00031fab) lc0_navi_pane_ParamLimits

0xa754,	// (0x00031fab) lc0_navi_pane

0xa7be,	// (0x00032015) lc0_stat_indi_pane_ParamLimits

0xa7be,	// (0x00032015) lc0_stat_indi_pane

0xa7d3,	// (0x0003202a) ls0_title_pane_ParamLimits

0xa7d3,	// (0x0003202a) ls0_title_pane

0xc69f,	// (0x00033ef6) bg_popup_sub_pane_cp14_ParamLimits

0xd88e,	// (0x000350e5) list_uniindi_pane_ParamLimits

0xd89a,	// (0x000350f1) uniindi_top_pane_ParamLimits

0x6115,	// (0x0002d96c) list_single_uniindi_pane_g1_ParamLimits

0x6128,	// (0x0002d97f) list_single_uniindi_pane_t1_ParamLimits

0xbf71,	// (0x000337c8) lc0_stat_clock_pane_ParamLimits

0xbf71,	// (0x000337c8) lc0_stat_clock_pane

0xe1ab,	// (0x00035a02) lc0_stat_indi_pane_g1_ParamLimits

0xe1ab,	// (0x00035a02) lc0_stat_indi_pane_g1

0xe1b8,	// (0x00035a0f) lc0_stat_indi_pane_g2_ParamLimits

0xe1b8,	// (0x00035a0f) lc0_stat_indi_pane_g2

0x0001,

0xfe03,	// (0x0003765a) lc0_stat_indi_pane_g_ParamLimits

0xfe03,	// (0x0003765a) lc0_stat_indi_pane_g

0xbf81,	// (0x000337d8) lc0_uni_indicator_pane_ParamLimits

0xbf81,	// (0x000337d8) lc0_uni_indicator_pane

0xe1c5,	// (0x00035a1c) ls0_title_pane_g1_ParamLimits

0xe1c5,	// (0x00035a1c) ls0_title_pane_g1

0xe1d9,	// (0x00035a30) ls0_title_pane_t1_ParamLimits

0xe1d9,	// (0x00035a30) ls0_title_pane_t1

0xbf91,	// (0x000337e8) lc0_uni_indicator_pane_g1_ParamLimits

0xbf91,	// (0x000337e8) lc0_uni_indicator_pane_g1

0x6cca,	// (0x0002e521) lc0_stat_clock_pane_t1

0xc279,	// (0x00033ad0) main_ai5_pane

0x6cd8,	// (0x0002e52f) ai5_sk_pane_ParamLimits

0x6cd8,	// (0x0002e52f) ai5_sk_pane

0xe207,	// (0x00035a5e) cell_ai5_widget_pane_ParamLimits

0xe207,	// (0x00035a5e) cell_ai5_widget_pane

0x6da5,	// (0x0002e5fc) aid_size_cell_widget_grid

0x6db3,	// (0x0002e60a) bg_ai5_widget_pane_ParamLimits

0x6db3,	// (0x0002e60a) bg_ai5_widget_pane

0x6e2f,	// (0x0002e686) cell_ai5_widget_pane_g2

0x6e43,	// (0x0002e69a) cell_ai5_widget_pane_g3

0x6e5d,	// (0x0002e6b4) cell_ai5_widget_pane_g4

0x6e6d,	// (0x0002e6c4) cell_ai5_widget_pane_g5

0x6e7d,	// (0x0002e6d4) cell_ai5_widget_pane_g6

0x6e89,	// (0x0002e6e0) cell_ai5_widget_pane_g7

0x6ef5,	// (0x0002e74c) cell_ai5_widget_pane_t1_ParamLimits

0x6ef5,	// (0x0002e74c) cell_ai5_widget_pane_t1

0x6f12,	// (0x0002e769) cell_ai5_widget_pane_t2_ParamLimits

0x6f12,	// (0x0002e769) cell_ai5_widget_pane_t2

0x6f2a,	// (0x0002e781) cell_ai5_widget_pane_t3_ParamLimits

0x6f2a,	// (0x0002e781) cell_ai5_widget_pane_t3

0x6f42,	// (0x0002e799) cell_ai5_widget_pane_t4_ParamLimits

0x6f42,	// (0x0002e799) cell_ai5_widget_pane_t4

0xe273,	// (0x00035aca) cell_ai5_widget_pane_t5_ParamLimits

0xe273,	// (0x00035aca) cell_ai5_widget_pane_t5

0x6f87,	// (0x0002e7de) cell_ai5_widget_pane_t6_ParamLimits

0x6f87,	// (0x0002e7de) cell_ai5_widget_pane_t6

0x6f99,	// (0x0002e7f0) cell_ai5_widget_pane_t7_ParamLimits

0x6f99,	// (0x0002e7f0) cell_ai5_widget_pane_t7

0x6fb8,	// (0x0002e80f) cell_ai5_widget_pane_t8_ParamLimits

0x6fb8,	// (0x0002e80f) cell_ai5_widget_pane_t8

0x000b,

0xfe23,	// (0x0003767a) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x0003767a) cell_ai5_widget_pane_t

0x703c,	// (0x0002e893) grid_ai5_widget_pane

0xc69f,	// (0x00033ef6) highlight_cell_ai5_widget_pane_ParamLimits

0xc69f,	// (0x00033ef6) highlight_cell_ai5_widget_pane

0xe293,	// (0x00035aea) ai5_sk_left_pane

0xe29d,	// (0x00035af4) ai5_sk_middle_pane

0xe2a7,	// (0x00035afe) ai5_sk_right_pane

0x7068,	// (0x0002e8bf) bg_ai5_widget_pane_g1_ParamLimits

0x7068,	// (0x0002e8bf) bg_ai5_widget_pane_g1

0x7074,	// (0x0002e8cb) bg_ai5_widget_pane_g2_ParamLimits

0x7074,	// (0x0002e8cb) bg_ai5_widget_pane_g2

0x7080,	// (0x0002e8d7) bg_ai5_widget_pane_g3_ParamLimits

0x7080,	// (0x0002e8d7) bg_ai5_widget_pane_g3

0x708c,	// (0x0002e8e3) bg_ai5_widget_pane_g4_ParamLimits

0x708c,	// (0x0002e8e3) bg_ai5_widget_pane_g4

0x7098,	// (0x0002e8ef) bg_ai5_widget_pane_g5_ParamLimits

0x7098,	// (0x0002e8ef) bg_ai5_widget_pane_g5

0x70a4,	// (0x0002e8fb) bg_ai5_widget_pane_g6_ParamLimits

0x70a4,	// (0x0002e8fb) bg_ai5_widget_pane_g6

0x70b0,	// (0x0002e907) bg_ai5_widget_pane_g7_ParamLimits

0x70b0,	// (0x0002e907) bg_ai5_widget_pane_g7

0x70bc,	// (0x0002e913) bg_ai5_widget_pane_g8_ParamLimits

0x70bc,	// (0x0002e913) bg_ai5_widget_pane_g8

0x70c8,	// (0x0002e91f) bg_ai5_widget_pane_g9_ParamLimits

0x70c8,	// (0x0002e91f) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x00037693) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00037693) bg_ai5_widget_pane_g

0x70fa,	// (0x0002e951) cell_shortcut_ai5_widget_pane_ParamLimits

0x70fa,	// (0x0002e951) cell_shortcut_ai5_widget_pane

0xcf5b,	// (0x000347b2) bg_cell_shortcut_ai5_widget_pane

0x710b,	// (0x0002e962) cell_grid_ai5_widget_pane_g1

0xcf5b,	// (0x000347b2) highlight_cell_shortcut_ai5_widget_pane

0x0c9b,	// (0x000284f2) ai5_sk_left_pane_g1

0x7114,	// (0x0002e96b) ai5_sk_left_pane_g2

0x711c,	// (0x0002e973) ai5_sk_left_pane_g3

0x7124,	// (0x0002e97b) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x000376a6) ai5_sk_left_pane_g

0x712c,	// (0x0002e983) ai5_sk_left_pane_t1

0x0c93,	// (0x000284ea) ai5_sk_right_pane_g1

0x713a,	// (0x0002e991) ai5_sk_right_pane_g2

0x7142,	// (0x0002e999) ai5_sk_right_pane_g3

0x714a,	// (0x0002e9a1) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x000376af) ai5_sk_right_pane_g

0x7152,	// (0x0002e9a9) ai5_sk_right_pane_t1

0x0c93,	// (0x000284ea) ai5_sk_middle_pane_g1

0x0c9b,	// (0x000284f2) ai5_sk_middle_pane_g2

0x0cb3,	// (0x0002850a) ai5_sk_middle_pane_g3

0x7142,	// (0x0002e999) ai5_sk_middle_pane_g4

0x711c,	// (0x0002e973) ai5_sk_middle_pane_g5

0x7160,	// (0x0002e9b7) ai5_sk_middle_pane_g6

0xe2b1,	// (0x00035b08) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x000376b8) ai5_sk_middle_pane_g

0xa640,	// (0x00031e97) aid_touch_area_size_lc0_ParamLimits

0xa640,	// (0x00031e97) aid_touch_area_size_lc0

0x1b58,	// (0x000293af) cell_hwr_candidate_pane_t1_ParamLimits

0x07b0,	// (0x00028007) aid_touch_navi_pane

0xa8cc,	// (0x00032123) status_dt_navi_pane_ParamLimits

0xa8cc,	// (0x00032123) status_dt_navi_pane

0xa8e4,	// (0x0003213b) status_dt_sta_pane_ParamLimits

0xa8e4,	// (0x0003213b) status_dt_sta_pane

0xe2b9,	// (0x00035b10) dt_sta_controll_pane

0xe2c6,	// (0x00035b1d) dt_sta_indi_pane

0xe2d3,	// (0x00035b2a) dt_sta_title_pane

0xc413,	// (0x00033c6a) bg_dt_sta_indi_pane_ParamLimits

0xc413,	// (0x00033c6a) bg_dt_sta_indi_pane

0xe2e5,	// (0x00035b3c) dt_sta_battery_pane

0xe2ed,	// (0x00035b44) dt_sta_indi_pane_g1

0x71b2,	// (0x0002ea09) dt_sta_indi_pane_g2

0x71bb,	// (0x0002ea12) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x000376c7) dt_sta_indi_pane_g

0x71c4,	// (0x0002ea1b) dt_sta_signal_pane

0xc69f,	// (0x00033ef6) bg_dt_sta_title_pane_ParamLimits

0xc69f,	// (0x00033ef6) bg_dt_sta_title_pane

0x2f90,	// (0x0002a7e7) dt_sta_title_pane_g1

0xe2f6,	// (0x00035b4d) dt_sta_title_pane_t1_ParamLimits

0xe2f6,	// (0x00035b4d) dt_sta_title_pane_t1

0xc279,	// (0x00033ad0) bg_dt_sta_control_pane

0xe30b,	// (0x00035b62) dt_sta_controll_pane_g1

0xe314,	// (0x00035b6b) bg_dt_sta_title_pane_g1

0xe31d,	// (0x00035b74) bg_dt_sta_title_pane_g2

0xe326,	// (0x00035b7d) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x000376ce) bg_dt_sta_title_pane_g

0x4762,	// (0x0002bfb9) bg_dt_sta_indi_pane_g1

0x7206,	// (0x0002ea5d) dt_sta_signal_pane_g1

0x720e,	// (0x0002ea65) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x000376d5) dt_sta_signal_pane_g

0x7216,	// (0x0002ea6d) dt_sta_battery_pane_g1

0x721f,	// (0x0002ea76) dt_sta_battery_pane_t1

0x4762,	// (0x0002bfb9) bg_dt_sta_control_pane_g1

0xcb74,	// (0x000343cb) fep_china_uni_eep_pane

0xcb7c,	// (0x000343d3) fep_china_uni_entry_pane_ParamLimits

0xcb8c,	// (0x000343e3) popup_fep_china_uni_window_g1_ParamLimits

0xcb9c,	// (0x000343f3) popup_fep_china_uni_window_g2_ParamLimits

0xcb9c,	// (0x000343f3) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00036f40) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00036f40) popup_fep_china_uni_window_g

0x722e,	// (0x0002ea85) fep_china_uni_eep_pane_g1

0x7236,	// (0x0002ea8d) fep_china_uni_eep_pane_t1

0x6c47,	// (0x0002e49e) aid_touch_area_size_smil_player

0x0906,	// (0x0002815d) lc0_clock_pane

0x0aed,	// (0x00028344) status_pane_g5_ParamLimits

0x0aed,	// (0x00028344) status_pane_g5

0xa078,	// (0x000318cf) popup_keymap_window

0x0aab,	// (0x00028302) status_icon_pane

0x6e43,	// (0x0002e69a) cell_ai5_widget_pane_g3_ParamLimits

0x6e5d,	// (0x0002e6b4) cell_ai5_widget_pane_g4_ParamLimits

0x6e6d,	// (0x0002e6c4) cell_ai5_widget_pane_g5_ParamLimits

0x6e95,	// (0x0002e6ec) cell_ai5_widget_pane_g8_ParamLimits

0x6e95,	// (0x0002e6ec) cell_ai5_widget_pane_g8

0x6ea9,	// (0x0002e700) cell_ai5_widget_pane_g9_ParamLimits

0x6ea9,	// (0x0002e700) cell_ai5_widget_pane_g9

0x6ebd,	// (0x0002e714) cell_ai5_widget_pane_g10_ParamLimits

0x6ebd,	// (0x0002e714) cell_ai5_widget_pane_g10

0x7245,	// (0x0002ea9c) status_icon_pane_g1

0xc279,	// (0x00033ad0) bg_popup_sub_pane_cp13

0x724d,	// (0x0002eaa4) popup_keymap_window_t1

0x9d34,	// (0x0003158b) control_pane_g6_ParamLimits

0x9d34,	// (0x0003158b) control_pane_g6

0x9d41,	// (0x00031598) control_pane_g7_ParamLimits

0x9d41,	// (0x00031598) control_pane_g7

0x9d4e,	// (0x000315a5) control_pane_g8_ParamLimits

0x9d4e,	// (0x000315a5) control_pane_g8

0xe2b9,	// (0x00035b10) dt_sta_controll_pane_ParamLimits

0xe2c6,	// (0x00035b1d) dt_sta_indi_pane_ParamLimits

0xe2d3,	// (0x00035b2a) dt_sta_title_pane_ParamLimits

0xc5ea,	// (0x00033e41) aid_size_touch_scroll_bar_cale

0x8fb8,	// (0x0003080f) popup_discreet_window_ParamLimits

0x8fb8,	// (0x0003080f) popup_discreet_window

0x900a,	// (0x00030861) popup_sk_window

0x1431,	// (0x00028c88) bg_popup_sub_pane_cp28_ParamLimits

0x1431,	// (0x00028c88) bg_popup_sub_pane_cp28

0x725b,	// (0x0002eab2) popup_discreet_window_g1_ParamLimits

0x725b,	// (0x0002eab2) popup_discreet_window_g1

0xe32f,	// (0x00035b86) popup_discreet_window_t1_ParamLimits

0xe32f,	// (0x00035b86) popup_discreet_window_t1

0x7299,	// (0x0002eaf0) popup_discreet_window_t2_ParamLimits

0x7299,	// (0x0002eaf0) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x000376da) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x000376da) popup_discreet_window_t

0x24de,	// (0x00029d35) popup_sk_window_g1

0x24e8,	// (0x00029d3f) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x000376e1) popup_sk_window_g

0xbfbc,	// (0x00033813) popup_sk_window_t1

0xbfca,	// (0x00033821) popup_sk_window_t1_copy1

0x6e2f,	// (0x0002e686) cell_ai5_widget_pane_g2_ParamLimits

0x6fca,	// (0x0002e821) cell_ai5_widget_pane_t9_ParamLimits

0x6fca,	// (0x0002e821) cell_ai5_widget_pane_t9

0xc279,	// (0x00033ad0) main_fep_fshwr2_pane

0xbfd8,	// (0x0003382f) aid_fshwr2_btn_pane

0xbfec,	// (0x00033843) aid_fshwr2_syb_pane

0xc000,	// (0x00033857) aid_fshwr2_txt_pane

0xc010,	// (0x00033867) fshwr2_func_candi_pane

0xc030,	// (0x00033887) fshwr2_hwr_syb_pane

0xc052,	// (0x000338a9) fshwr2_icf_pane

0xc279,	// (0x00033ad0) fshwr2_icf_bg_pane

0x25b0,	// (0x00029e07) fshwr2_icf_pane_t1_ParamLimits

0x25b0,	// (0x00029e07) fshwr2_icf_pane_t1

0xcaf1,	// (0x00034348) fshwr2_func_candi_pane_g1

0xe34d,	// (0x00035ba4) fshwr2_func_candi_row_pane_ParamLimits

0xe34d,	// (0x00035ba4) fshwr2_func_candi_row_pane

0xc082,	// (0x000338d9) cell_fshwr2_syb_pane_ParamLimits

0xc082,	// (0x000338d9) cell_fshwr2_syb_pane

0x6c17,	// (0x0002e46e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c17,	// (0x0002e46e) fshwr2_hwr_syb_pane_g1

0xc279,	// (0x00033ad0) bg_popup_call_pane_cp01

0xc0a8,	// (0x000338ff) fshwr2_func_candi_cell_pane_ParamLimits

0xc0a8,	// (0x000338ff) fshwr2_func_candi_cell_pane

0x121a,	// (0x00028a71) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x121a,	// (0x00028a71) fshwr2_func_candi_cell_bg_pane

0xc0f3,	// (0x0003394a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc0f3,	// (0x0003394a) fshwr2_func_candi_cell_pane_g1

0xc12a,	// (0x00033981) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc12a,	// (0x00033981) fshwr2_func_candi_cell_pane_t1

0xc279,	// (0x00033ad0) bg_button_pane_cp08

0xc7e1,	// (0x00034038) cell_fshwr2_syb_bg_pane

0xc145,	// (0x0003399c) cell_fshwr2_syb_bg_pane_g1

0xc158,	// (0x000339af) cell_fshwr2_syb_bg_pane_t1

0xc69f,	// (0x00033ef6) main_tmo_pane

0xb057,	// (0x000328ae) uni_indicator_pane_g1_ParamLimits

0xb06d,	// (0x000328c4) uni_indicator_pane_g2_ParamLimits

0xb083,	// (0x000328da) uni_indicator_pane_g3_ParamLimits

0x32fd,	// (0x0002ab54) uni_indicator_pane_g4_ParamLimits

0x32fd,	// (0x0002ab54) uni_indicator_pane_g4

0x3311,	// (0x0002ab68) uni_indicator_pane_g5_ParamLimits

0x3311,	// (0x0002ab68) uni_indicator_pane_g5

0x3311,	// (0x0002ab68) uni_indicator_pane_g6_ParamLimits

0x3311,	// (0x0002ab68) uni_indicator_pane_g6

0xf8e8,	// (0x0003713f) uni_indicator_pane_g_ParamLimits

0xd5d0,	// (0x00034e27) popup_tmo_note_window_ParamLimits

0xd5d0,	// (0x00034e27) popup_tmo_note_window

0xc69f,	// (0x00033ef6) fshwr2_bg_pane

0xc11b,	// (0x00033972) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc11b,	// (0x00033972) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x000376e6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x000376e6) fshwr2_func_candi_cell_pane_g

0x4762,	// (0x0002bfb9) bg_popup_window_pane_cp01

0x2694,	// (0x00029eeb) bg_popup_window_pane_g1_cp01

0x7312,	// (0x0002eb69) bg_popup_window_pane_cp22_ParamLimits

0x7312,	// (0x0002eb69) bg_popup_window_pane_cp22

0xe370,	// (0x00035bc7) listscroll_tmo_link_pane_ParamLimits

0xe370,	// (0x00035bc7) listscroll_tmo_link_pane

0x7360,	// (0x0002ebb7) popup_tmo_note_window_g1_ParamLimits

0x7360,	// (0x0002ebb7) popup_tmo_note_window_g1

0xe3b0,	// (0x00035c07) tmo_note_info_pane_ParamLimits

0xe3b0,	// (0x00035c07) tmo_note_info_pane

0xe3ca,	// (0x00035c21) list_tmo_note_info_pane_g1_ParamLimits

0xe3ca,	// (0x00035c21) list_tmo_note_info_pane_g1

0x739e,	// (0x0002ebf5) list_tmo_note_info_pane_g2_ParamLimits

0x739e,	// (0x0002ebf5) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x000376eb) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x000376eb) list_tmo_note_info_pane_g

0x73ba,	// (0x0002ec11) list_tmo_note_info_text_pane_ParamLimits

0x73ba,	// (0x0002ec11) list_tmo_note_info_text_pane

0x743b,	// (0x0002ec92) list_tmo_link_pane

0x7448,	// (0x0002ec9f) scroll_pane_cp20

0x7455,	// (0x0002ecac) list_single_tmo_link_pane_ParamLimits

0x7455,	// (0x0002ecac) list_single_tmo_link_pane

0x7465,	// (0x0002ecbc) list_single_tmo_link_pane_t1

0x7473,	// (0x0002ecca) list_tmo_note_info_text_pane_t1_ParamLimits

0x7473,	// (0x0002ecca) list_tmo_note_info_text_pane_t1

0x972b,	// (0x00030f82) aid_size_touch_scroll_bar_cp01_ParamLimits

0x972b,	// (0x00030f82) aid_size_touch_scroll_bar_cp01

0x899d,	// (0x000301f4) aid_size_touch_slider_marker

0x8ffa,	// (0x00030851) popup_settings_window_ParamLimits

0x8ffa,	// (0x00030851) popup_settings_window

0xea49,	// (0x000362a0) popup_candi_list_indi_window

0x07b0,	// (0x00028007) aid_touch_navi_pane_ParamLimits

0x1cc3,	// (0x0002951a) rs_clock_indi_pane

0x1ccc,	// (0x00029523) sctrl_sk_bottom_pane_ParamLimits

0x1cdd,	// (0x00029534) sctrl_sk_top_pane_ParamLimits

0xbc11,	// (0x00033468) popup_fep_tooltip_window

0x6da5,	// (0x0002e5fc) aid_size_cell_widget_grid_ParamLimits

0x6e1a,	// (0x0002e671) cell_ai5_widget_pane_g1_ParamLimits

0x6e1a,	// (0x0002e671) cell_ai5_widget_pane_g1

0x6e7d,	// (0x0002e6d4) cell_ai5_widget_pane_g6_ParamLimits

0x6e89,	// (0x0002e6e0) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe08,	// (0x0003765f) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x0003765f) cell_ai5_widget_pane_g

0x6ff9,	// (0x0002e850) cell_ai5_widget_pane_t10_ParamLimits

0x6ff9,	// (0x0002e850) cell_ai5_widget_pane_t10

0x703c,	// (0x0002e893) grid_ai5_widget_pane_ParamLimits

0x70d4,	// (0x0002e92b) cell_contacts_ai5_widget_pane_ParamLimits

0x70d4,	// (0x0002e92b) cell_contacts_ai5_widget_pane

0x72ae,	// (0x0002eb05) popup_discreet_window_t3_ParamLimits

0x72ae,	// (0x0002eb05) popup_discreet_window_t3

0xc06e,	// (0x000338c5) popup_fshwr2_char_preview_window_ParamLimits

0xc06e,	// (0x000338c5) popup_fshwr2_char_preview_window

0xe3e1,	// (0x00035c38) tmo_note_info_pane_t1

0xe3f6,	// (0x00035c4d) tmo_note_info_pane_t2

0xe40d,	// (0x00035c64) tmo_note_info_pane_t3

0x7417,	// (0x0002ec6e) tmo_note_info_pane_t4

0x7429,	// (0x0002ec80) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x000376f0) tmo_note_info_pane_t

0x743b,	// (0x0002ec92) list_tmo_link_pane_ParamLimits

0x7448,	// (0x0002ec9f) scroll_pane_cp20_ParamLimits

0xc279,	// (0x00033ad0) bg_popup_fep_char_preview_window_cp01

0xe422,	// (0x00035c79) popup_fshwr2_char_preview_window_t1

0x749a,	// (0x0002ecf1) popup_candi_list_indi_window_g1

0x74a3,	// (0x0002ecfa) bg_cell_contacts_ai5_widget_pane

0x74af,	// (0x0002ed06) cell_contacts_ai5_widget_pane_g1

0x4e49,	// (0x0002c6a0) cell_contacts_ai5_widget_pane_g2

0x74c4,	// (0x0002ed1b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x000376fb) cell_contacts_ai5_widget_pane_g

0x74d0,	// (0x0002ed27) cell_contacts_ai5_widget_pane_t1

0xc69f,	// (0x00033ef6) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7547,	// (0x0002ed9e) settings_container_pane

0xcf5b,	// (0x000347b2) listscroll_set_pane_copy1

0x3e3e,	// (0x0002b695) scroll_pane_cp121_copy1

0x11d6,	// (0x00028a2d) set_content_pane_copy1

0xe430,	// (0x00035c87) aid_height_set_list_copy1_ParamLimits

0xe430,	// (0x00035c87) aid_height_set_list_copy1

0x3509,	// (0x0002ad60) aid_size_parent_copy1_ParamLimits

0x3509,	// (0x0002ad60) aid_size_parent_copy1

0xe43c,	// (0x00035c93) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe43c,	// (0x00035c93) button_value_adjust_pane_cp6_copy1

0xc7e1,	// (0x00034038) list_highlight_pane_cp2_copy1_ParamLimits

0xc7e1,	// (0x00034038) list_highlight_pane_cp2_copy1

0xe450,	// (0x00035ca7) list_set_pane_copy1_ParamLimits

0xe450,	// (0x00035ca7) list_set_pane_copy1

0x74e2,	// (0x0002ed39) main_pane_set_t1_copy1_ParamLimits

0x74e2,	// (0x0002ed39) main_pane_set_t1_copy1

0x751c,	// (0x0002ed73) main_pane_set_t2_copy1_ParamLimits

0x751c,	// (0x0002ed73) main_pane_set_t2_copy1

0xe4fd,	// (0x00035d54) main_pane_set_t3_copy1

0xe50b,	// (0x00035d62) main_pane_set_t4_copy1

0x753b,	// (0x0002ed92) set_content_pane_g1_copy1_ParamLimits

0x753b,	// (0x0002ed92) set_content_pane_g1_copy1

0xe519,	// (0x00035d70) setting_code_pane_copy1

0x7644,	// (0x0002ee9b) setting_slider_graphic_pane_copy1

0x7644,	// (0x0002ee9b) setting_slider_pane_copy1

0x764c,	// (0x0002eea3) setting_text_pane_copy1

0x764c,	// (0x0002eea3) setting_volume_pane_copy1

0xe519,	// (0x00035d70) settings_code_pane_cp2_copy1

0xe521,	// (0x00035d78) settings_code_pane_cp_copy1_ParamLimits

0xe521,	// (0x00035d78) settings_code_pane_cp_copy1

0xc16e,	// (0x000339c5) volume_set_pane_copy1

0xe535,	// (0x00035d8c) volume_set_pane_g10_copy1

0xe53d,	// (0x00035d94) volume_set_pane_g1_copy1

0xe545,	// (0x00035d9c) volume_set_pane_g2_copy1

0xe54d,	// (0x00035da4) volume_set_pane_g3_copy1

0xe555,	// (0x00035dac) volume_set_pane_g4_copy1

0xe55d,	// (0x00035db4) volume_set_pane_g5_copy1

0xe565,	// (0x00035dbc) volume_set_pane_g6_copy1

0xe56d,	// (0x00035dc4) volume_set_pane_g7_copy1

0xe575,	// (0x00035dcc) volume_set_pane_g8_copy1

0xe57d,	// (0x00035dd4) volume_set_pane_g9_copy1

0xc2e9,	// (0x00033b40) bg_set_opt_pane_cp_copy1_ParamLimits

0xc2e9,	// (0x00033b40) bg_set_opt_pane_cp_copy1

0xc176,	// (0x000339cd) setting_slider_pane_t1_copy1_ParamLimits

0xc176,	// (0x000339cd) setting_slider_pane_t1_copy1

0xc195,	// (0x000339ec) setting_slider_pane_t2_copy1_ParamLimits

0xc195,	// (0x000339ec) setting_slider_pane_t2_copy1

0xc1af,	// (0x00033a06) setting_slider_pane_t3_copy1_ParamLimits

0xc1af,	// (0x00033a06) setting_slider_pane_t3_copy1

0xc1c7,	// (0x00033a1e) slider_set_pane_copy1_ParamLimits

0xc1c7,	// (0x00033a1e) slider_set_pane_copy1

0xc6f7,	// (0x00033f4e) set_opt_bg_pane_g1_copy2

0xc6ff,	// (0x00033f56) set_opt_bg_pane_g2_copy2

0x76b8,	// (0x0002ef0f) set_opt_bg_pane_g3_copy2

0xc70f,	// (0x00033f66) set_opt_bg_pane_g4_copy2

0xc717,	// (0x00033f6e) set_opt_bg_pane_g5_copy2

0xc71f,	// (0x00033f76) set_opt_bg_pane_g6_copy2

0xe585,	// (0x00035ddc) set_opt_bg_pane_g7_copy2

0x76ca,	// (0x0002ef21) set_opt_bg_pane_g8_copy2

0x76d4,	// (0x0002ef2b) set_opt_bg_pane_g9_copy2

0xc1dd,	// (0x00033a34) aid_size_touch_slider_mark_copy1_ParamLimits

0xc1dd,	// (0x00033a34) aid_size_touch_slider_mark_copy1

0xe58d,	// (0x00035de4) slider_set_pane_g1_copy1

0x2720,	// (0x00029f77) slider_set_pane_g2_copy1

0xb1aa,	// (0x00032a01) slider_set_pane_g3_copy1_ParamLimits

0xb1aa,	// (0x00032a01) slider_set_pane_g3_copy1

0xb1be,	// (0x00032a15) slider_set_pane_g4_copy1_ParamLimits

0xb1be,	// (0x00032a15) slider_set_pane_g4_copy1

0xb1d6,	// (0x00032a2d) slider_set_pane_g5_copy1_ParamLimits

0xb1d6,	// (0x00032a2d) slider_set_pane_g5_copy1

0xb1aa,	// (0x00032a01) slider_set_pane_g6_copy1_ParamLimits

0xb1aa,	// (0x00032a01) slider_set_pane_g6_copy1

0xc1f1,	// (0x00033a48) slider_set_pane_g7_copy1_ParamLimits

0xc1f1,	// (0x00033a48) slider_set_pane_g7_copy1

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp2_copy1

0xe596,	// (0x00035ded) setting_slider_graphic_pane_g1_copy1

0xe59f,	// (0x00035df6) setting_slider_graphic_pane_t1_copy1

0xe5af,	// (0x00035e06) setting_slider_graphic_pane_t2_copy1

0xe5bf,	// (0x00035e16) slider_set_pane_cp_copy1

0x7720,	// (0x0002ef77) input_focus_pane_cp1_copy1

0x7729,	// (0x0002ef80) list_set_text_pane_copy1

0x7731,	// (0x0002ef88) setting_text_pane_g1_copy1

0xf0e6,	// (0x0003693d) set_text_pane_t1_copy1

0x7720,	// (0x0002ef77) input_focus_pane_cp2_copy1

0x7731,	// (0x0002ef88) setting_code_pane_g1_copy1

0x773a,	// (0x0002ef91) setting_code_pane_t1_copy1

0x7748,	// (0x0002ef9f) list_set_graphic_pane_copy1

0xc28d,	// (0x00033ae4) bg_set_opt_pane_cp4_copy1

0xcccc,	// (0x00034523) list_set_graphic_pane_g1_copy1_ParamLimits

0xcccc,	// (0x00034523) list_set_graphic_pane_g1_copy1

0x775c,	// (0x0002efb3) list_set_graphic_pane_g2_copy1

0xcce4,	// (0x0003453b) list_set_graphic_pane_t1_copy1_ParamLimits

0xcce4,	// (0x0003453b) list_set_graphic_pane_t1_copy1

0x4762,	// (0x0002bfb9) rs_clock_indi_pane_g1

0x7764,	// (0x0002efbb) rs_clock_indi_pane_t1

0x7772,	// (0x0002efc9) rs_indi_pane

0x777a,	// (0x0002efd1) rs_indi_pane_g1

0x7783,	// (0x0002efda) rs_indi_pane_g2

0x749a,	// (0x0002ecf1) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x00037702) rs_indi_pane_g

0xcf5b,	// (0x000347b2) bg_popup_preview_window_pane_cp03

0x778c,	// (0x0002efe3) popup_fep_tooltip_window_t1

0xd276,	// (0x00034acd) popup_note2_window_g2_ParamLimits

0xd276,	// (0x00034acd) popup_note2_window_g2

0x0001,

0xfc3f,	// (0x00037496) popup_note2_window_g_ParamLimits

0xfc3f,	// (0x00037496) popup_note2_window_g

0x58e8,	// (0x0002d13f) bg_popup_sub_pane_cp11_ParamLimits

0x58f5,	// (0x0002d14c) cell_ai3_links_pane_g1_ParamLimits

0x590c,	// (0x0002d163) cell_ai3_links_pane_t1

0xf0e6,	// (0x0003693d) set_text_pane_t1_copy1_ParamLimits

0xce91,	// (0x000346e8) cell_graphic_popup_pane_cp2_ParamLimits

0xce91,	// (0x000346e8) cell_graphic_popup_pane_cp2

0xe5cf,	// (0x00035e26) cell_graphic_popup_pane_g1_cp2

0xc56d,	// (0x00033dc4) cell_graphic_popup_pane_g2_cp2

0x77a2,	// (0x0002eff9) cell_graphic_popup_pane_g3_cp2

0xe5d7,	// (0x00035e2e) cell_graphic_popup_pane_t2_cp2

0xc57e,	// (0x00033dd5) grid_highlight_pane_cp3_cp2

0xc96e,	// (0x000341c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc69f,	// (0x00033ef6) main_tmo_pane_ParamLimits

0xd5c4,	// (0x00034e1b) popup_tmo_big_image_note_window

0x6e09,	// (0x0002e660) cell_ai5_widget_list_pane

0x6e11,	// (0x0002e668) cell_ai5_widget_lrg_icon_pane

0xe3e1,	// (0x00035c38) tmo_note_info_pane_t1_ParamLimits

0xe3f6,	// (0x00035c4d) tmo_note_info_pane_t2_ParamLimits

0xe40d,	// (0x00035c64) tmo_note_info_pane_t3_ParamLimits

0x7417,	// (0x0002ec6e) tmo_note_info_pane_t4_ParamLimits

0x7429,	// (0x0002ec80) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x000376f0) tmo_note_info_pane_t_ParamLimits

0x7547,	// (0x0002ed9e) settings_container_pane_ParamLimits

0xe5c7,	// (0x00035e1e) indicator_popup_pane_cp5

0xe5c7,	// (0x00035e1e) indicator_popup_pane_cp6

0x7748,	// (0x0002ef9f) list_set_graphic_pane_copy1_ParamLimits

0xc279,	// (0x00033ad0) bg_popup_window_pane_cp23

0x77b8,	// (0x0002f00f) popup_tmo_big_image_note_window_g1

0x77c1,	// (0x0002f018) popup_tmo_big_image_note_window_t1

0x77d1,	// (0x0002f028) popup_tmo_big_image_note_window_t2

0x77e1,	// (0x0002f038) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x00037709) popup_tmo_big_image_note_window_t

0x4762,	// (0x0002bfb9) cell_ai5_widget_lrg_icon_pane_g1

0x77f1,	// (0x0002f048) cell_ai5_widget_lrg_icon_pane_t1

0x77ff,	// (0x0002f056) cell_ai5_widget_list_row_pane_ParamLimits

0x77ff,	// (0x0002f056) cell_ai5_widget_list_row_pane

0x7816,	// (0x0002f06d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7816,	// (0x0002f06d) cell_ai5_widget_list_row_pane_g1

0xe5e5,	// (0x00035e3c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe5e5,	// (0x00035e3c) cell_ai5_widget_list_row_pane_t1

0x784e,	// (0x0002f0a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x784e,	// (0x0002f0a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x00037710) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x00037710) cell_ai5_widget_list_row_pane_t

0xc279,	// (0x00033ad0) main_fep_vtchi_ss_pane

0x789e,	// (0x0002f0f5) popup_fep_char_pre_window

0x78a6,	// (0x0002f0fd) popup_fep_ituss_window

0xe640,	// (0x00035e97) popup_fep_vkbss_window

0xc7e1,	// (0x00034038) grid_vkbss_keypad_pane_ParamLimits

0xc7e1,	// (0x00034038) grid_vkbss_keypad_pane

0x7912,	// (0x0002f169) ituss_keypad_pane

0x2748,	// (0x00029f9f) aid_vkbss_key_offset_ParamLimits

0x2748,	// (0x00029f9f) aid_vkbss_key_offset

0xc207,	// (0x00033a5e) cell_vkbss_key_pane_ParamLimits

0xc207,	// (0x00033a5e) cell_vkbss_key_pane

0x7922,	// (0x0002f179) bg_cell_vkbss_key_g1_ParamLimits

0x7922,	// (0x0002f179) bg_cell_vkbss_key_g1

0xe64d,	// (0x00035ea4) cell_vkbss_key_3p_pane_ParamLimits

0xe64d,	// (0x00035ea4) cell_vkbss_key_3p_pane

0xe683,	// (0x00035eda) cell_vkbss_key_g1_ParamLimits

0xe683,	// (0x00035eda) cell_vkbss_key_g1

0xe6b9,	// (0x00035f10) cell_vkbss_key_t1_ParamLimits

0xe6b9,	// (0x00035f10) cell_vkbss_key_t1

0x279f,	// (0x00029ff6) cell_ituss_key_pane_ParamLimits

0x279f,	// (0x00029ff6) cell_ituss_key_pane

0x79f6,	// (0x0002f24d) bg_cell_ituss_key_g1_ParamLimits

0x79f6,	// (0x0002f24d) bg_cell_ituss_key_g1

0x7a02,	// (0x0002f259) cell_ituss_key_pane_g1_ParamLimits

0x7a02,	// (0x0002f259) cell_ituss_key_pane_g1

0x27b0,	// (0x0002a007) cell_ituss_key_pane_g2_ParamLimits

0x27b0,	// (0x0002a007) cell_ituss_key_pane_g2

0x0005,

0xfec0,	// (0x00037717) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x00037717) cell_ituss_key_pane_g

0x2834,	// (0x0002a08b) cell_ituss_key_t1_ParamLimits

0x2834,	// (0x0002a08b) cell_ituss_key_t1

0x286e,	// (0x0002a0c5) cell_ituss_key_t2_ParamLimits

0x286e,	// (0x0002a0c5) cell_ituss_key_t2

0x28a0,	// (0x0002a0f7) cell_ituss_key_t3_ParamLimits

0x28a0,	// (0x0002a0f7) cell_ituss_key_t3

0x28d1,	// (0x0002a128) cell_ituss_key_t4_ParamLimits

0x28d1,	// (0x0002a128) cell_ituss_key_t4

0x0004,

0xfecd,	// (0x00037724) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x00037724) cell_ituss_key_t

0xe715,	// (0x00035f6c) cell_vkbss_key_3p_pane_g1

0xe71d,	// (0x00035f74) cell_vkbss_key_3p_pane_g2

0xe725,	// (0x00035f7c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x0003772f) cell_vkbss_key_3p_pane_g

0xcf5b,	// (0x000347b2) bg_popup_fep_char_preview_window_cp02

0x7a40,	// (0x0002f297) popup_fep_char_pre_window_t1

0xe269,	// (0x00035ac0) main_ai5_sk_pane

0x74a3,	// (0x0002ecfa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74af,	// (0x0002ed06) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e49,	// (0x0002c6a0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74c4,	// (0x0002ed1b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x000376fb) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74d0,	// (0x0002ed27) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc69f,	// (0x00033ef6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe72d,	// (0x00035f84) main_ai5_sk_pane_g1

0xaca8,	// (0x000324ff) popup_query_code_window_g1

0xe631,	// (0x00035e88) popup_fep_vkb_icf_pane

0x78e9,	// (0x0002f140) popup_fep_vtchi_icf_pane

0x7a57,	// (0x0002f2ae) bg_icf_pane

0x7a57,	// (0x0002f2ae) list_vkb_icf_pane

0x7a63,	// (0x0002f2ba) bg_icf_pane_cp01

0x7a76,	// (0x0002f2cd) vtchi_icf_list_pane

0xe782,	// (0x00035fd9) list_vkb_icf_pane_t1_ParamLimits

0xe782,	// (0x00035fd9) list_vkb_icf_pane_t1

0x7afb,	// (0x0002f352) vtchi_icf_list_pane_t1_ParamLimits

0x7afb,	// (0x0002f352) vtchi_icf_list_pane_t1

0x78a6,	// (0x0002f0fd) popup_fep_ituss_window_ParamLimits

0x78e9,	// (0x0002f140) popup_fep_vtchi_icf_pane_ParamLimits

0x7912,	// (0x0002f169) ituss_keypad_pane_ParamLimits

0x273e,	// (0x00029f95) ituss_sks_pane

0x7a57,	// (0x0002f2ae) bg_icf_pane_ParamLimits

0xe616,	// (0x00035e6d) icf_edit_indi_pane_ParamLimits

0xe616,	// (0x00035e6d) icf_edit_indi_pane

0x7a57,	// (0x0002f2ae) list_vkb_icf_pane_ParamLimits

0x7a63,	// (0x0002f2ba) bg_icf_pane_cp01_ParamLimits

0x7891,	// (0x0002f0e8) icf_edit_indi_pane_cp01_ParamLimits

0x7891,	// (0x0002f0e8) icf_edit_indi_pane_cp01

0x7a76,	// (0x0002f2cd) vtchi_query_pane

0x6c17,	// (0x0002e46e) icf_edit_indi_pane_g1_ParamLimits

0x6c17,	// (0x0002e46e) icf_edit_indi_pane_g1

0xe79a,	// (0x00035ff1) icf_edit_indi_pane_g2_ParamLimits

0xe79a,	// (0x00035ff1) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0003775a) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0003775a) icf_edit_indi_pane_g

0xe7ae,	// (0x00036005) icf_edit_indi_pane_t1

0x7b1f,	// (0x0002f376) bg_input_focus_pane_cp042

0xc5e1,	// (0x00033e38) vtchi_button_pane

0x7b28,	// (0x0002f37f) vtchi_query_pane_t1

0x7b36,	// (0x0002f38d) vtchi_query_pane_t2

0x7b44,	// (0x0002f39b) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x00037749) vtchi_query_pane_t

0xc279,	// (0x00033ad0) bg_button_pane_cp13

0x7b52,	// (0x0002f3a9) vtchi_button_pane_g1

0x2914,	// (0x0002a16b) ituss_sks_pane_g1

0x291f,	// (0x0002a176) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00037750) ituss_sks_pane_g

0x7b5a,	// (0x0002f3b1) ituss_sks_pane_t1

0x7b68,	// (0x0002f3bf) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00037755) ituss_sks_pane_t

0x41d6,	// (0x0002ba2d) indicator_nsta_pane_cp_g1

0x41df,	// (0x0002ba36) indicator_nsta_pane_cp_g2

0x41e7,	// (0x0002ba3e) indicator_nsta_pane_cp_g3

0x41ef,	// (0x0002ba46) indicator_nsta_pane_cp_g4

0x41df,	// (0x0002ba36) indicator_nsta_pane_cp_g5

0x41e7,	// (0x0002ba3e) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x000372e0) indicator_nsta_pane_cp_g

0xe048,	// (0x0003589f) cell_graphic2_pane_t2_ParamLimits

0xe048,	// (0x0003589f) cell_graphic2_pane_t2

0x0001,

0xfd8f,	// (0x000375e6) cell_graphic2_pane_t_ParamLimits

0xfd8f,	// (0x000375e6) cell_graphic2_pane_t

0xe07f,	// (0x000358d6) cell_graphic2_control_pane_t1

0x9a03,	// (0x0003125a) signal_pane_g3_ParamLimits

0x9a03,	// (0x0003125a) signal_pane_g3

0x9a17,	// (0x0003126e) signal_pane_g4_ParamLimits

0x9a17,	// (0x0003126e) signal_pane_g4

0x7860,	// (0x0002f0b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7860,	// (0x0002f0b7) cell_ai5_widget_list_row_pane_t3

0x7a16,	// (0x0002f26d) cell_ituss_key_pane_t1_ParamLimits

0x7a16,	// (0x0002f26d) cell_ituss_key_pane_t1

0x0ea5,	// (0x000286fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x0ea5,	// (0x000286fc) form_field_data_wide_pane_vc_t2

0x0eb9,	// (0x00028710) form_field_data_wide_pane_vc_t3_ParamLimits

0x0eb9,	// (0x00028710) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00037027) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00037027) form_field_data_wide_pane_vc_t

0x3e80,	// (0x0002b6d7) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e80,	// (0x0002b6d7) form_field_slider_wide_pane_vc_t3

0x3f5e,	// (0x0002b7b5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f5e,	// (0x0002b7b5) form_field_popup_wide_pane_vc_t2

0x3f75,	// (0x0002b7cc) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f75,	// (0x0002b7cc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x000372cf) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x000372cf) form_field_popup_wide_pane_vc_t

0xbfd8,	// (0x0003382f) aid_fshwr2_btn_pane_ParamLimits

0xbfec,	// (0x00033843) aid_fshwr2_syb_pane_ParamLimits

0xc000,	// (0x00033857) aid_fshwr2_txt_pane_ParamLimits

0xc69f,	// (0x00033ef6) fshwr2_bg_pane_ParamLimits

0xc010,	// (0x00033867) fshwr2_func_candi_pane_ParamLimits

0xc030,	// (0x00033887) fshwr2_hwr_syb_pane_ParamLimits

0xc052,	// (0x000338a9) fshwr2_icf_pane_ParamLimits

0xee1b,	// (0x00036672) list_double_graphic_pane_vc_g4_ParamLimits

0xee1b,	// (0x00036672) list_double_graphic_pane_vc_g4

0x27d0,	// (0x0002a027) cell_ituss_key_pane_g3_ParamLimits

0x27d0,	// (0x0002a027) cell_ituss_key_pane_g3

0x2902,	// (0x0002a159) cell_ituss_key_t5_ParamLimits

0x2902,	// (0x0002a159) cell_ituss_key_t5

0xe640,	// (0x00035e97) popup_fep_vkbss_window_ParamLimits

0x5df6,	// (0x0002d64d) aid_cell_ai5_quarter

0xe7ae,	// (0x00036005) icf_edit_indi_pane_t1_ParamLimits

0x9423,	// (0x00030c7a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9423,	// (0x00030c7a) aid_tch_indicator_popup_pane_cp2

0x9436,	// (0x00030c8d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9436,	// (0x00030c8d) aid_tch_query_popup_data_pane_cp2

0x121a,	// (0x00028a71) aid_tch_query_popup_pane_ParamLimits

0x121a,	// (0x00028a71) aid_tch_query_popup_pane

0x121a,	// (0x00028a71) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x121a,	// (0x00028a71) aid_tch_query_popup_data_pane_cp1

0xc7e1,	// (0x00034038) cell_fshwr2_syb_bg_pane_ParamLimits

0xc145,	// (0x0003399c) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc158,	// (0x000339af) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe631,	// (0x00035e88) popup_fep_vkb_icf_pane_ParamLimits

0xbf3e,	// (0x00033795) bg_popup_fep_char_preview_window_g10

0x6ed1,	// (0x0002e728) cell_ai5_widget_pane_g11_ParamLimits

0x6ed1,	// (0x0002e728) cell_ai5_widget_pane_g11

0x6edd,	// (0x0002e734) cell_ai5_widget_pane_g12_ParamLimits

0x6edd,	// (0x0002e734) cell_ai5_widget_pane_g12

0x6ee9,	// (0x0002e740) cell_ai5_widget_pane_g13_ParamLimits

0x6ee9,	// (0x0002e740) cell_ai5_widget_pane_g13

0x7018,	// (0x0002e86f) cell_ai5_widget_pane_t11_ParamLimits

0x7018,	// (0x0002e86f) cell_ai5_widget_pane_t11

0x702a,	// (0x0002e881) cell_ai5_widget_pane_t12_ParamLimits

0x702a,	// (0x0002e881) cell_ai5_widget_pane_t12

0x27dc,	// (0x0002a033) cell_ituss_key_pane_g4_ParamLimits

0x27dc,	// (0x0002a033) cell_ituss_key_pane_g4

0x27f8,	// (0x0002a04f) cell_ituss_key_pane_g5_ParamLimits

0x27f8,	// (0x0002a04f) cell_ituss_key_pane_g5

0x2814,	// (0x0002a06b) cell_ituss_key_pane_g6_ParamLimits

0x2814,	// (0x0002a06b) cell_ituss_key_pane_g6

0x0c8b,	// (0x000284e2) bg_icf_pane_g1

0xe736,	// (0x00035f8d) bg_icf_pane_g2

0xe740,	// (0x00035f97) bg_icf_pane_g3

0xe748,	// (0x00035f9f) bg_icf_pane_g4

0xe752,	// (0x00035fa9) bg_icf_pane_g5

0xe75c,	// (0x00035fb3) bg_icf_pane_g6

0xe766,	// (0x00035fbd) bg_icf_pane_g7

0xe76e,	// (0x00035fc5) bg_icf_pane_g8

0xe778,	// (0x00035fcf) bg_icf_pane_g9

0x0008,

0xfedf,	// (0x00037736) bg_icf_pane_g

0x78ff,	// (0x0002f156) popup_hyb_candi_window_ParamLimits

0x78ff,	// (0x0002f156) popup_hyb_candi_window

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp01_ParamLimits

0x0d8f,	// (0x000285e6) bg_popup_sub_pane_cp01

0x7ba3,	// (0x0002f3fa) entry_hyb_candi_pane_ParamLimits

0x7ba3,	// (0x0002f3fa) entry_hyb_candi_pane

0x7bb2,	// (0x0002f409) grid_hyb_candi_pane_ParamLimits

0x7bb2,	// (0x0002f409) grid_hyb_candi_pane

0x7bc7,	// (0x0002f41e) grid_hyb_phrase_pane_ParamLimits

0x7bc7,	// (0x0002f41e) grid_hyb_phrase_pane

0x7bd6,	// (0x0002f42d) cell_hyb_candi_pane_ParamLimits

0x7bd6,	// (0x0002f42d) cell_hyb_candi_pane

0x7bf9,	// (0x0002f450) cell_hyb_candi_scroll_pane

0xcaf1,	// (0x00034348) cell_hyb_candi_pane_g1

0x7c02,	// (0x0002f459) cell_hyb_candi_pane_t1

0x7c10,	// (0x0002f467) cell_hyb_phrase_pane

0xcaf1,	// (0x00034348) cell_hyb_phrase_pane_g1

0x7c19,	// (0x0002f470) cell_hyb_phrase_pane_t1

0x7c27,	// (0x0002f47e) entry_hyb_candi_pane_t1

0xcf5b,	// (0x000347b2) input_focus_pane_cp06

0x7c35,	// (0x0002f48c) cell_hyb_candi_scroll_pane_g1

0x7c3d,	// (0x0002f494) cell_hyb_candi_scroll_pane_g1_aid

0x7c45,	// (0x0002f49c) cell_hyb_candi_scroll_pane_g2

0x7c4d,	// (0x0002f4a4) cell_hyb_candi_scroll_pane_g2_aid

0x7c55,	// (0x0002f4ac) cell_hyb_candi_scroll_pane_g3

0x7c5d,	// (0x0002f4b4) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

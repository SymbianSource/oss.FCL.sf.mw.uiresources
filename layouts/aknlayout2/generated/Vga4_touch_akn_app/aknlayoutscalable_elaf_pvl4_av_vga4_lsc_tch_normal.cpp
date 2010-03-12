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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001d52 };

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
0x9d86,	// (0x0000bad8) Screen

0x9d92,	// (0x0000bae4) application_window_ParamLimits

0x9d92,	// (0x0000bae4) application_window

0xe42a,	// (0x0001017c) screen_g1

0x9dca,	// (0x0000bb1c) area_bottom_pane_ParamLimits

0x9dca,	// (0x0000bb1c) area_bottom_pane

0xe454,	// (0x000101a6) area_top_pane_ParamLimits

0xe454,	// (0x000101a6) area_top_pane

0xe4e8,	// (0x0001023a) main_pane_ParamLimits

0xe4e8,	// (0x0001023a) main_pane

0xe5a3,	// (0x000102f5) misc_graphics

0xb650,	// (0x0000d3a2) battery_pane_ParamLimits

0xb650,	// (0x0000d3a2) battery_pane

0x245e,	// (0x000041b0) bg_status_flat_pane_g8

0x2466,	// (0x000041b8) bg_status_flat_pane_g9

0x15dc,	// (0x0000332e) context_pane_ParamLimits

0x15dc,	// (0x0000332e) context_pane

0xb7c7,	// (0x0000d519) navi_pane_ParamLimits

0xb7c7,	// (0x0000d519) navi_pane

0xb851,	// (0x0000d5a3) signal_pane_ParamLimits

0xb851,	// (0x0000d5a3) signal_pane

0x0008,

0xf86e,	// (0x000115c0) bg_status_flat_pane_g

0xb8e1,	// (0x0000d633) status_pane_g1_ParamLimits

0xb8e1,	// (0x0000d633) status_pane_g1

0xb8f7,	// (0x0000d649) status_pane_g2_ParamLimits

0xb8f7,	// (0x0000d649) status_pane_g2

0x181d,	// (0x0000356f) status_pane_g3_ParamLimits

0x181d,	// (0x0000356f) status_pane_g3

0x0004,

0xf7a1,	// (0x000114f3) status_pane_g_ParamLimits

0xf7a1,	// (0x000114f3) status_pane_g

0xb903,	// (0x0000d655) title_pane_ParamLimits

0xb903,	// (0x0000d655) title_pane

0xb966,	// (0x0000d6b8) uni_indicator_pane_ParamLimits

0xb966,	// (0x0000d6b8) uni_indicator_pane

0x0dfd,	// (0x00002b4f) bg_list_pane_ParamLimits

0x0dfd,	// (0x00002b4f) bg_list_pane

0xae84,	// (0x0000cbd6) find_pane

0xae8c,	// (0x0000cbde) listscroll_app_pane_ParamLimits

0xae8c,	// (0x0000cbde) listscroll_app_pane

0x0e31,	// (0x00002b83) listscroll_form_pane

0xae98,	// (0x0000cbea) listscroll_gen_pane_ParamLimits

0xae98,	// (0x0000cbea) listscroll_gen_pane

0x0e31,	// (0x00002b83) listscroll_set_pane

0x3287,	// (0x00004fd9) main_idle_act_pane

0x08ea,	// (0x0000263c) main_idle_trad_pane

0x08ea,	// (0x0000263c) main_list_empty_pane

0x0e5f,	// (0x00002bb1) main_midp_pane

0x0e6b,	// (0x00002bbd) main_pane_g1_ParamLimits

0x0e6b,	// (0x00002bbd) main_pane_g1

0xaeac,	// (0x0000cbfe) popup_ai_message_window_ParamLimits

0xaeac,	// (0x0000cbfe) popup_ai_message_window

0xaf4c,	// (0x0000cc9e) popup_fep_china_uni_window_ParamLimits

0xaf4c,	// (0x0000cc9e) popup_fep_china_uni_window

0x0f95,	// (0x00002ce7) popup_fep_japan_candidate_window_ParamLimits

0x0f95,	// (0x00002ce7) popup_fep_japan_candidate_window

0x0fbf,	// (0x00002d11) popup_fep_japan_predictive_window_ParamLimits

0x0fbf,	// (0x00002d11) popup_fep_japan_predictive_window

0xafac,	// (0x0000ccfe) popup_find_window

0xafc9,	// (0x0000cd1b) popup_grid_graphic_window_ParamLimits

0xafc9,	// (0x0000cd1b) popup_grid_graphic_window

0x1030,	// (0x00002d82) popup_large_graphic_colour_window

0xb06d,	// (0x0000cdbf) popup_menu_window_ParamLimits

0xb06d,	// (0x0000cdbf) popup_menu_window

0xb25d,	// (0x0000cfaf) popup_note_image_window

0xb21d,	// (0x0000cf6f) popup_note_wait_window_ParamLimits

0xb21d,	// (0x0000cf6f) popup_note_wait_window

0xb275,	// (0x0000cfc7) popup_note_window_ParamLimits

0xb275,	// (0x0000cfc7) popup_note_window

0xb323,	// (0x0000d075) popup_query_code_window_ParamLimits

0xb323,	// (0x0000d075) popup_query_code_window

0x129c,	// (0x00002fee) popup_query_data_code_window_ParamLimits

0x129c,	// (0x00002fee) popup_query_data_code_window

0xb363,	// (0x0000d0b5) popup_query_data_window_ParamLimits

0xb363,	// (0x0000d0b5) popup_query_data_window

0xb3f7,	// (0x0000d149) popup_query_sat_info_window_ParamLimits

0xb3f7,	// (0x0000d149) popup_query_sat_info_window

0xb4a2,	// (0x0000d1f4) popup_snote_single_graphic_window_ParamLimits

0xb4a2,	// (0x0000d1f4) popup_snote_single_graphic_window

0xb4a2,	// (0x0000d1f4) popup_snote_single_text_window_ParamLimits

0xb4a2,	// (0x0000d1f4) popup_snote_single_text_window

0x1337,	// (0x00003089) popup_sub_window_general

0x147d,	// (0x000031cf) popup_window_general_ParamLimits

0x147d,	// (0x000031cf) popup_window_general

0x1496,	// (0x000031e8) power_save_pane

0xacf2,	// (0x0000ca44) control_pane_g1_ParamLimits

0xacf2,	// (0x0000ca44) control_pane_g1

0xad1b,	// (0x0000ca6d) control_pane_g2_ParamLimits

0xad1b,	// (0x0000ca6d) control_pane_g2

0x0ca2,	// (0x000029f4) control_pane_g3_ParamLimits

0x0ca2,	// (0x000029f4) control_pane_g3

0x0007,

0xf789,	// (0x000114db) control_pane_g_ParamLimits

0xf789,	// (0x000114db) control_pane_g

0xad7d,	// (0x0000cacf) control_pane_t1_ParamLimits

0xad7d,	// (0x0000cacf) control_pane_t1

0xaddb,	// (0x0000cb2d) control_pane_t2_ParamLimits

0xaddb,	// (0x0000cb2d) control_pane_t2

0x0002,

0xf79a,	// (0x000114ec) control_pane_t_ParamLimits

0xf79a,	// (0x000114ec) control_pane_t

0x0b75,	// (0x000028c7) navi_navi_volume_pane_cp1

0x0b7e,	// (0x000028d0) status_small_icon_pane

0x0b86,	// (0x000028d8) status_small_pane_g1_ParamLimits

0x0b86,	// (0x000028d8) status_small_pane_g1

0x0bba,	// (0x0000290c) status_small_pane_g2_ParamLimits

0x0bba,	// (0x0000290c) status_small_pane_g2

0x0bc6,	// (0x00002918) status_small_pane_g3_ParamLimits

0x0bc6,	// (0x00002918) status_small_pane_g3

0x0bd2,	// (0x00002924) status_small_pane_g4_ParamLimits

0x0bd2,	// (0x00002924) status_small_pane_g4

0x0bde,	// (0x00002930) status_small_pane_g5_ParamLimits

0x0bde,	// (0x00002930) status_small_pane_g5

0x0bed,	// (0x0000293f) status_small_pane_g6_ParamLimits

0x0bed,	// (0x0000293f) status_small_pane_g6

0x0007,

0xf778,	// (0x000114ca) status_small_pane_g_ParamLimits

0xf778,	// (0x000114ca) status_small_pane_g

0x0c1d,	// (0x0000296f) status_small_pane_t1

0x0c40,	// (0x00002992) status_small_wait_pane_ParamLimits

0x0c40,	// (0x00002992) status_small_wait_pane

0xaa43,	// (0x0000c795) aid_levels_signal_ParamLimits

0xaa43,	// (0x0000c795) aid_levels_signal

0xaa5b,	// (0x0000c7ad) signal_pane_g1_ParamLimits

0xaa5b,	// (0x0000c7ad) signal_pane_g1

0xaa76,	// (0x0000c7c8) signal_pane_g2_ParamLimits

0xaa76,	// (0x0000c7c8) signal_pane_g2

0x0003,

0xf709,	// (0x0001145b) signal_pane_g_ParamLimits

0xf709,	// (0x0001145b) signal_pane_g

0x018e,	// (0x00001ee0) context_pane_g1

0x9f47,	// (0x0000bc99) title_pane_g1

0x9f7e,	// (0x0000bcd0) title_pane_t1

0xe67a,	// (0x000103cc) title_pane_t2

0xe6a0,	// (0x000103f2) title_pane_t3

0x0002,

0xf55d,	// (0x000112af) title_pane_t

0xb98e,	// (0x0000d6e0) aid_levels_battery_ParamLimits

0xb98e,	// (0x0000d6e0) aid_levels_battery

0xb9aa,	// (0x0000d6fc) battery_pane_g1_ParamLimits

0xb9aa,	// (0x0000d6fc) battery_pane_g1

0xb9c7,	// (0x0000d719) battery_pane_g2_ParamLimits

0xb9c7,	// (0x0000d719) battery_pane_g2

0x0001,

0xf7ac,	// (0x000114fe) battery_pane_g_ParamLimits

0xf7ac,	// (0x000114fe) battery_pane_g

0xbe73,	// (0x0000dbc5) uni_indicator_pane_g1

0xbe88,	// (0x0000dbda) uni_indicator_pane_g2

0xbe9d,	// (0x0000dbef) uni_indicator_pane_g3

0x0005,

0xf916,	// (0x00011668) uni_indicator_pane_g

0x0758,	// (0x000024aa) navi_icon_pane_ParamLimits

0x0758,	// (0x000024aa) navi_icon_pane

0x069f,	// (0x000023f1) navi_midp_pane

0x0774,	// (0x000024c6) navi_navi_pane

0x077e,	// (0x000024d0) navi_text_pane_ParamLimits

0x077e,	// (0x000024d0) navi_text_pane

0xe42a,	// (0x0001017c) status_small_wait_pane_g1

0xea48,	// (0x0001079a) status_small_wait_pane_g2

0x0001,

0xf911,	// (0x00011663) status_small_wait_pane_g

0xbdda,	// (0x0000db2c) navi_navi_icon_text_pane

0xbde2,	// (0x0000db34) navi_navi_pane_g1_ParamLimits

0xbde2,	// (0x0000db34) navi_navi_pane_g1

0xbdf4,	// (0x0000db46) navi_navi_pane_g2_ParamLimits

0xbdf4,	// (0x0000db46) navi_navi_pane_g2

0x0001,

0xf8df,	// (0x00011631) navi_navi_pane_g_ParamLimits

0xf8df,	// (0x00011631) navi_navi_pane_g

0x2c59,	// (0x000049ab) navi_navi_tabs_pane

0xbe06,	// (0x0000db58) navi_navi_text_pane

0xbdda,	// (0x0000db2c) navi_navi_volume_pane

0xbdc8,	// (0x0000db1a) navi_text_pane_t1

0xbdbc,	// (0x0000db0e) navi_icon_pane_g1

0x2b4a,	// (0x0000489c) navi_navi_text_pane_t1

0xbd97,	// (0x0000dae9) navi_navi_volume_pane_g1

0xbd9f,	// (0x0000daf1) volume_small_pane

0xbcf3,	// (0x0000da45) navi_navi_icon_text_pane_g1

0xbcfb,	// (0x0000da4d) navi_navi_icon_text_pane_t1

0x0774,	// (0x000024c6) navi_tabs_2_long_pane

0x0774,	// (0x000024c6) navi_tabs_2_pane

0x0774,	// (0x000024c6) navi_tabs_3_long_pane

0x0774,	// (0x000024c6) navi_tabs_3_pane

0x0774,	// (0x000024c6) navi_tabs_4_pane

0xbcb1,	// (0x0000da03) tabs_2_active_pane_ParamLimits

0xbcb1,	// (0x0000da03) tabs_2_active_pane

0xbcc1,	// (0x0000da13) tabs_2_passive_pane_ParamLimits

0xbcc1,	// (0x0000da13) tabs_2_passive_pane

0xbc7f,	// (0x0000d9d1) tabs_3_active_pane_ParamLimits

0xbc7f,	// (0x0000d9d1) tabs_3_active_pane

0xbc8f,	// (0x0000d9e1) tabs_3_passive_pane_ParamLimits

0xbc8f,	// (0x0000d9e1) tabs_3_passive_pane

0xbca0,	// (0x0000d9f2) tabs_3_passive_pane_cp_ParamLimits

0xbca0,	// (0x0000d9f2) tabs_3_passive_pane_cp

0xbc3b,	// (0x0000d98d) tabs_4_active_pane_ParamLimits

0xbc3b,	// (0x0000d98d) tabs_4_active_pane

0xbc4c,	// (0x0000d99e) tabs_4_passive_pane_ParamLimits

0xbc4c,	// (0x0000d99e) tabs_4_passive_pane

0xbc5d,	// (0x0000d9af) tabs_4_passive_pane_cp_ParamLimits

0xbc5d,	// (0x0000d9af) tabs_4_passive_pane_cp

0xbc6e,	// (0x0000d9c0) tabs_4_passive_pane_cp2_ParamLimits

0xbc6e,	// (0x0000d9c0) tabs_4_passive_pane_cp2

0xbc17,	// (0x0000d969) tabs_2_long_active_pane_ParamLimits

0xbc17,	// (0x0000d969) tabs_2_long_active_pane

0xbc29,	// (0x0000d97b) tabs_2_long_passive_pane_ParamLimits

0xbc29,	// (0x0000d97b) tabs_2_long_passive_pane

0xbbcc,	// (0x0000d91e) tabs_3_long_active_pane_ParamLimits

0xbbcc,	// (0x0000d91e) tabs_3_long_active_pane

0xbbe5,	// (0x0000d937) tabs_3_long_passive_pane_ParamLimits

0xbbe5,	// (0x0000d937) tabs_3_long_passive_pane

0xbbfe,	// (0x0000d950) tabs_3_long_passive_pane_cp_ParamLimits

0xbbfe,	// (0x0000d950) tabs_3_long_passive_pane_cp

0x28c3,	// (0x00004615) volume_small_pane_g1

0xbb7b,	// (0x0000d8cd) volume_small_pane_g2

0xbb84,	// (0x0000d8d6) volume_small_pane_g3

0xbb8d,	// (0x0000d8df) volume_small_pane_g4

0xbb96,	// (0x0000d8e8) volume_small_pane_g5

0xbb9f,	// (0x0000d8f1) volume_small_pane_g6

0xbba8,	// (0x0000d8fa) volume_small_pane_g7

0xbbb1,	// (0x0000d903) volume_small_pane_g8

0xbbba,	// (0x0000d90c) volume_small_pane_g9

0xbbc3,	// (0x0000d915) volume_small_pane_g10

0x0009,

0xf8ab,	// (0x000115fd) volume_small_pane_g

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp2_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp2

0xa00a,	// (0x0000bd5c) tabs_3_active_pane_g1

0xa012,	// (0x0000bd64) tabs_3_active_pane_t1

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp2_ParamLimits

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp2

0xa00a,	// (0x0000bd5c) tabs_3_passive_pane_g1

0xa012,	// (0x0000bd64) tabs_3_passive_pane_t1

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp3_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp3

0xa024,	// (0x0000bd76) tabs_4_active_pane_g1

0xa02c,	// (0x0000bd7e) tabs_4_active_pane_t1

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp3_ParamLimits

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp3

0xa024,	// (0x0000bd76) tabs_4_1_passive_pane_g1

0xa02c,	// (0x0000bd7e) tabs_4_1_passive_pane_t1

0x0e5f,	// (0x00002bb1) list_highlight_pane_cp2

0xbf6d,	// (0x0000dcbf) list_set_pane_ParamLimits

0xbf6d,	// (0x0000dcbf) list_set_pane

0xc035,	// (0x0000dd87) main_pane_set_t1_ParamLimits

0xc035,	// (0x0000dd87) main_pane_set_t1

0xc055,	// (0x0000dda7) main_pane_set_t2_ParamLimits

0xc055,	// (0x0000dda7) main_pane_set_t2

0xc069,	// (0x0000ddbb) main_pane_set_t3_ParamLimits

0xc069,	// (0x0000ddbb) main_pane_set_t3

0xc07d,	// (0x0000ddcf) main_pane_set_t4_ParamLimits

0xc07d,	// (0x0000ddcf) main_pane_set_t4

0x0003,

0xf97b,	// (0x000116cd) main_pane_set_t_ParamLimits

0xf97b,	// (0x000116cd) main_pane_set_t

0xc091,	// (0x0000dde3) setting_code_pane

0x33db,	// (0x0000512d) setting_slider_graphic_pane

0x33db,	// (0x0000512d) setting_slider_pane

0x33db,	// (0x0000512d) setting_text_pane

0x33db,	// (0x0000512d) setting_volume_pane

0xe6c0,	// (0x00010412) volume_set_pane

0xe6ca,	// (0x0001041c) bg_set_opt_pane_cp

0xe6d8,	// (0x0001042a) setting_slider_pane_t1

0xe6f1,	// (0x00010443) setting_slider_pane_t2

0xe70b,	// (0x0001045d) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000112b6) setting_slider_pane_t

0xe723,	// (0x00010475) slider_set_pane

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp2

0xe739,	// (0x0001048b) setting_slider_graphic_pane_g1

0xe742,	// (0x00010494) setting_slider_graphic_pane_t1

0xe752,	// (0x000104a4) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000112bd) setting_slider_graphic_pane_t

0xe762,	// (0x000104b4) slider_set_pane_cp

0xe5a3,	// (0x000102f5) input_focus_pane_cp1

0x326e,	// (0x00004fc0) list_set_text_pane

0xe42a,	// (0x0001017c) setting_text_pane_g1

0xe5a3,	// (0x000102f5) input_focus_pane_cp2

0xe42a,	// (0x0001017c) setting_code_pane_g1

0xe76a,	// (0x000104bc) setting_code_pane_t1

0xe778,	// (0x000104ca) set_text_pane_t1_ParamLimits

0xe778,	// (0x000104ca) set_text_pane_t1

0xeee4,	// (0x00010c36) set_opt_bg_pane_g1

0xeeec,	// (0x00010c3e) set_opt_bg_pane_g2

0x3246,	// (0x00004f98) set_opt_bg_pane_g3

0xeefc,	// (0x00010c4e) set_opt_bg_pane_g4

0xef04,	// (0x00010c56) set_opt_bg_pane_g5

0xef0c,	// (0x00010c5e) set_opt_bg_pane_g6

0x3250,	// (0x00004fa2) set_opt_bg_pane_g7

0x325a,	// (0x00004fac) set_opt_bg_pane_g8

0x3264,	// (0x00004fb6) set_opt_bg_pane_g9

0x0008,

0xf968,	// (0x000116ba) set_opt_bg_pane_g

0x31d5,	// (0x00004f27) slider_set_pane_g1

0x31e2,	// (0x00004f34) slider_set_pane_g2

0x0006,

0xf959,	// (0x000116ab) slider_set_pane_g

0x303d,	// (0x00004d8f) volume_set_pane_g1

0x3047,	// (0x00004d99) volume_set_pane_g2

0x3051,	// (0x00004da3) volume_set_pane_g3

0x305b,	// (0x00004dad) volume_set_pane_g4

0x3065,	// (0x00004db7) volume_set_pane_g5

0x306f,	// (0x00004dc1) volume_set_pane_g6

0x3079,	// (0x00004dcb) volume_set_pane_g7

0x3083,	// (0x00004dd5) volume_set_pane_g8

0x308d,	// (0x00004ddf) volume_set_pane_g9

0x3097,	// (0x00004de9) volume_set_pane_g10

0x0009,

0xf931,	// (0x00011683) volume_set_pane_g

0xa03e,	// (0x0000bd90) indicator_pane_ParamLimits

0xa03e,	// (0x0000bd90) indicator_pane

0xa06a,	// (0x0000bdbc) main_idle_pane_g2_ParamLimits

0xa06a,	// (0x0000bdbc) main_idle_pane_g2

0xa0a2,	// (0x0000bdf4) main_pane_idle_g1_ParamLimits

0xa0a2,	// (0x0000bdf4) main_pane_idle_g1

0xe792,	// (0x000104e4) popup_clock_digital_analogue_window_ParamLimits

0xe792,	// (0x000104e4) popup_clock_digital_analogue_window

0xa0d0,	// (0x0000be22) soft_indicator_pane_ParamLimits

0xa0d0,	// (0x0000be22) soft_indicator_pane

0xa0ec,	// (0x0000be3e) wallpaper_pane_ParamLimits

0xa0ec,	// (0x0000be3e) wallpaper_pane

0xe42a,	// (0x0001017c) wallpaper_pane_g1

0xa0fe,	// (0x0000be50) indicator_pane_g1_ParamLimits

0xa0fe,	// (0x0000be50) indicator_pane_g1

0x379b,	// (0x000054ed) navi_navi_icon_text_pane_srt_g1

0xe7c0,	// (0x00010512) soft_indicator_pane_t1

0xe7da,	// (0x0001052c) aid_ps_area_pane

0xa117,	// (0x0000be69) aid_ps_clock_pane

0xe7eb,	// (0x0001053d) aid_ps_indicator_pane

0xe7f7,	// (0x00010549) indicator_ps_pane_ParamLimits

0xe7f7,	// (0x00010549) indicator_ps_pane

0xe806,	// (0x00010558) power_save_pane_g1_ParamLimits

0xe806,	// (0x00010558) power_save_pane_g1

0xe812,	// (0x00010564) power_save_pane_g2_ParamLimits

0xe812,	// (0x00010564) power_save_pane_g2

0xe434,	// (0x00010186) aid_navinavi_width_pane

0xe7da,	// (0x0001052c) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000112c2) power_save_pane_g_ParamLimits

0xf570,	// (0x000112c2) power_save_pane_g

0xe820,	// (0x00010572) power_save_pane_t1_ParamLimits

0xe820,	// (0x00010572) power_save_pane_t1

0xa117,	// (0x0000be69) aid_ps_clock_pane_ParamLimits

0xe7eb,	// (0x0001053d) aid_ps_indicator_pane_ParamLimits

0xe832,	// (0x00010584) power_save_pane_t4_ParamLimits

0xe832,	// (0x00010584) power_save_pane_t4

0x0001,

0xf575,	// (0x000112c7) power_save_pane_t_ParamLimits

0xf575,	// (0x000112c7) power_save_pane_t

0xe85c,	// (0x000105ae) power_save_t3_ParamLimits

0xe85c,	// (0x000105ae) power_save_t3

0xe847,	// (0x00010599) power_save_t2_ParamLimits

0xe847,	// (0x00010599) power_save_t2

0xe871,	// (0x000105c3) indicator_ps_pane_g1

0xa125,	// (0x0000be77) ai_gene_pane_ParamLimits

0xa125,	// (0x0000be77) ai_gene_pane

0xa13c,	// (0x0000be8e) ai_links_pane_ParamLimits

0xa13c,	// (0x0000be8e) ai_links_pane

0xa154,	// (0x0000bea6) indicator_pane_cp1_ParamLimits

0xa154,	// (0x0000bea6) indicator_pane_cp1

0xa163,	// (0x0000beb5) main_pane_idle_g1_cp_ParamLimits

0xa163,	// (0x0000beb5) main_pane_idle_g1_cp

0xe87a,	// (0x000105cc) popup_ai_links_title_window

0xa17b,	// (0x0000becd) soft_indicator_pane_cp1_ParamLimits

0xa17b,	// (0x0000becd) soft_indicator_pane_cp1

0x2f08,	// (0x00004c5a) ai_links_pane_g1

0x2f11,	// (0x00004c63) grid_ai_links_pane

0xbe6a,	// (0x0000dbbc) ai_gene_pane_1

0x2ef6,	// (0x00004c48) ai_gene_pane_2

0x2eff,	// (0x00004c51) list_highlight_pane_cp4

0xbe46,	// (0x0000db98) cell_ai_link_pane_ParamLimits

0xbe46,	// (0x0000db98) cell_ai_link_pane

0x2ec5,	// (0x00004c17) cell_ai_link_pane_g1

0xea48,	// (0x0001079a) cell_ai_link_pane_g2

0x0001,

0xf90c,	// (0x0001165e) cell_ai_link_pane_g

0xe5a3,	// (0x000102f5) grid_highlight_cp2

0xe5a3,	// (0x000102f5) bg_popup_sub_pane_cp1

0xe891,	// (0x000105e3) popup_ai_links_title_window_t1

0x2e11,	// (0x00004b63) ai_gene_pane_1_g1_ParamLimits

0x2e11,	// (0x00004b63) ai_gene_pane_1_g1

0x2e1d,	// (0x00004b6f) ai_gene_pane_1_g2_ParamLimits

0x2e1d,	// (0x00004b6f) ai_gene_pane_1_g2

0x0001,

0xf902,	// (0x00011654) ai_gene_pane_1_g_ParamLimits

0xf902,	// (0x00011654) ai_gene_pane_1_g

0x2e2a,	// (0x00004b7c) ai_gene_pane_1_t1_ParamLimits

0x2e2a,	// (0x00004b7c) ai_gene_pane_1_t1

0x2e5e,	// (0x00004bb0) grid_ai_soft_ind_pane

0x2dfc,	// (0x00004b4e) ai_gene_pane_2_t1_ParamLimits

0x2dfc,	// (0x00004b4e) ai_gene_pane_2_t1

0xa18f,	// (0x0000bee1) main_pane_empty_t1_ParamLimits

0xa18f,	// (0x0000bee1) main_pane_empty_t1

0xa1a7,	// (0x0000bef9) main_pane_empty_t2_ParamLimits

0xa1a7,	// (0x0000bef9) main_pane_empty_t2

0xa1bc,	// (0x0000bf0e) main_pane_empty_t3_ParamLimits

0xa1bc,	// (0x0000bf0e) main_pane_empty_t3

0xa1ce,	// (0x0000bf20) main_pane_empty_t4_ParamLimits

0xa1ce,	// (0x0000bf20) main_pane_empty_t4

0xa1e0,	// (0x0000bf32) main_pane_empty_t5_ParamLimits

0xa1e0,	// (0x0000bf32) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000112cc) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000112cc) main_pane_empty_t

0xef64,	// (0x00010cb6) bg_popup_window_pane_ParamLimits

0xef64,	// (0x00010cb6) bg_popup_window_pane

0x2b58,	// (0x000048aa) find_popup_pane_cp2_ParamLimits

0x2b58,	// (0x000048aa) find_popup_pane_cp2

0x2b64,	// (0x000048b6) heading_pane_ParamLimits

0x2b64,	// (0x000048b6) heading_pane

0xe5a3,	// (0x000102f5) bg_popup_sub_pane

0xbd18,	// (0x0000da6a) bg_popup_window_pane_g1_ParamLimits

0xbd18,	// (0x0000da6a) bg_popup_window_pane_g1

0xbd27,	// (0x0000da79) bg_popup_window_pane_g2_ParamLimits

0xbd27,	// (0x0000da79) bg_popup_window_pane_g2

0xbd33,	// (0x0000da85) bg_popup_window_pane_g3_ParamLimits

0xbd33,	// (0x0000da85) bg_popup_window_pane_g3

0xbd3f,	// (0x0000da91) bg_popup_window_pane_g4_ParamLimits

0xbd3f,	// (0x0000da91) bg_popup_window_pane_g4

0xbd4e,	// (0x0000daa0) bg_popup_window_pane_g5_ParamLimits

0xbd4e,	// (0x0000daa0) bg_popup_window_pane_g5

0xbd5e,	// (0x0000dab0) bg_popup_window_pane_g6_ParamLimits

0xbd5e,	// (0x0000dab0) bg_popup_window_pane_g6

0xbd6a,	// (0x0000dabc) bg_popup_window_pane_g7_ParamLimits

0xbd6a,	// (0x0000dabc) bg_popup_window_pane_g7

0xbd79,	// (0x0000dacb) bg_popup_window_pane_g8_ParamLimits

0xbd79,	// (0x0000dacb) bg_popup_window_pane_g8

0xbd88,	// (0x0000dada) bg_popup_window_pane_g9_ParamLimits

0xbd88,	// (0x0000dada) bg_popup_window_pane_g9

0x2b2d,	// (0x0000487f) bg_popup_window_pane_g10_ParamLimits

0x2b2d,	// (0x0000487f) bg_popup_window_pane_g10

0x0009,

0xf8ca,	// (0x0001161c) bg_popup_window_pane_g_ParamLimits

0xf8ca,	// (0x0001161c) bg_popup_window_pane_g

0x2a56,	// (0x000047a8) bg_popup_heading_pane_ParamLimits

0x2a56,	// (0x000047a8) bg_popup_heading_pane

0x36de,	// (0x00005430) tabs_4_passive_pane_cp_srt_ParamLimits

0x36de,	// (0x00005430) tabs_4_passive_pane_cp_srt

0x36f0,	// (0x00005442) tabs_4_passive_pane_srt_ParamLimits

0x2a6a,	// (0x000047bc) heading_pane_g2

0x36f0,	// (0x00005442) tabs_4_passive_pane_srt

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp3_srt

0x2a72,	// (0x000047c4) heading_pane_t1_ParamLimits

0x2a72,	// (0x000047c4) heading_pane_t1

0x2a89,	// (0x000047db) heading_pane_t2_ParamLimits

0x2a89,	// (0x000047db) heading_pane_t2

0x0001,

0xf8c5,	// (0x00011617) heading_pane_t_ParamLimits

0xf8c5,	// (0x00011617) heading_pane_t

0x2426,	// (0x00004178) bg_popup_heading_pane_g1

0x24d5,	// (0x00004227) bg_popup_heading_pane_g2

0x24df,	// (0x00004231) bg_popup_heading_pane_g3

0x24e9,	// (0x0000423b) bg_popup_heading_pane_g4

0x24f3,	// (0x00004245) bg_popup_heading_pane_g5

0x24fd,	// (0x0000424f) bg_popup_heading_pane_g6

0x2505,	// (0x00004257) bg_popup_heading_pane_g7

0x250d,	// (0x0000425f) bg_popup_heading_pane_g8

0x2517,	// (0x00004269) bg_popup_heading_pane_g9

0x0008,

0xf881,	// (0x000115d3) bg_popup_heading_pane_g

0x1a4e,	// (0x000037a0) bg_popup_sub_pane_g1

0x1a56,	// (0x000037a8) bg_popup_sub_pane_g2

0x1a5e,	// (0x000037b0) bg_popup_sub_pane_g3

0x1a66,	// (0x000037b8) bg_popup_sub_pane_g4

0x1a6e,	// (0x000037c0) bg_popup_sub_pane_g5

0x1a76,	// (0x000037c8) bg_popup_sub_pane_g6

0x1a7e,	// (0x000037d0) bg_popup_sub_pane_g7

0x1a86,	// (0x000037d8) bg_popup_sub_pane_g8

0x1a8e,	// (0x000037e0) bg_popup_sub_pane_g9

0x0008,

0xf85b,	// (0x000115ad) bg_popup_sub_pane_g

0xe6b2,	// (0x00010404) bg_popup_window_pane_cp5_ParamLimits

0xe6b2,	// (0x00010404) bg_popup_window_pane_cp5

0xe8ae,	// (0x00010600) popup_note_window_g1_ParamLimits

0xe8ae,	// (0x00010600) popup_note_window_g1

0xe8ba,	// (0x0001060c) popup_note_window_t1_ParamLimits

0xe8ba,	// (0x0001060c) popup_note_window_t1

0xe8d0,	// (0x00010622) popup_note_window_t2_ParamLimits

0xe8d0,	// (0x00010622) popup_note_window_t2

0xe8e6,	// (0x00010638) popup_note_window_t3_ParamLimits

0xe8e6,	// (0x00010638) popup_note_window_t3

0xe8fc,	// (0x0001064e) popup_note_window_t4_ParamLimits

0xe8fc,	// (0x0001064e) popup_note_window_t4

0xe924,	// (0x00010676) popup_note_window_t5_ParamLimits

0xe924,	// (0x00010676) popup_note_window_t5

0x0004,

0xf585,	// (0x000112d7) popup_note_window_t_ParamLimits

0xf585,	// (0x000112d7) popup_note_window_t

0xe948,	// (0x0001069a) bg_popup_window_pane_cp6_ParamLimits

0xe948,	// (0x0001069a) bg_popup_window_pane_cp6

0x23a2,	// (0x000040f4) popup_note_image_window_g1_ParamLimits

0x23a2,	// (0x000040f4) popup_note_image_window_g1

0x23ae,	// (0x00004100) popup_note_image_window_g2_ParamLimits

0x23ae,	// (0x00004100) popup_note_image_window_g2

0x0001,

0xf84f,	// (0x000115a1) popup_note_image_window_g_ParamLimits

0xf84f,	// (0x000115a1) popup_note_image_window_g

0x23c7,	// (0x00004119) popup_note_image_window_t1_ParamLimits

0x23c7,	// (0x00004119) popup_note_image_window_t1

0x23e0,	// (0x00004132) popup_note_image_window_t2_ParamLimits

0x23e0,	// (0x00004132) popup_note_image_window_t2

0x23f9,	// (0x0000414b) popup_note_image_window_t3_ParamLimits

0x23f9,	// (0x0000414b) popup_note_image_window_t3

0x0002,

0xf854,	// (0x000115a6) popup_note_image_window_t_ParamLimits

0xf854,	// (0x000115a6) popup_note_image_window_t

0x2262,	// (0x00003fb4) bg_popup_window_pane_cp7_ParamLimits

0x2262,	// (0x00003fb4) bg_popup_window_pane_cp7

0x2292,	// (0x00003fe4) popup_note_wait_window_g1_ParamLimits

0x2292,	// (0x00003fe4) popup_note_wait_window_g1

0x229e,	// (0x00003ff0) popup_note_wait_window_g2_ParamLimits

0x229e,	// (0x00003ff0) popup_note_wait_window_g2

0x0002,

0xf83d,	// (0x0001158f) popup_note_wait_window_g_ParamLimits

0xf83d,	// (0x0001158f) popup_note_wait_window_g

0x22b6,	// (0x00004008) popup_note_wait_window_t1_ParamLimits

0x22b6,	// (0x00004008) popup_note_wait_window_t1

0x22dd,	// (0x0000402f) popup_note_wait_window_t2_ParamLimits

0x22dd,	// (0x0000402f) popup_note_wait_window_t2

0x22fb,	// (0x0000404d) popup_note_wait_window_t3_ParamLimits

0x22fb,	// (0x0000404d) popup_note_wait_window_t3

0x230e,	// (0x00004060) popup_note_wait_window_t4_ParamLimits

0x230e,	// (0x00004060) popup_note_wait_window_t4

0x0004,

0xf844,	// (0x00011596) popup_note_wait_window_t_ParamLimits

0xf844,	// (0x00011596) popup_note_wait_window_t

0x2333,	// (0x00004085) wait_bar_pane_ParamLimits

0x2333,	// (0x00004085) wait_bar_pane

0xe5a3,	// (0x000102f5) wait_anim_pane

0xe5a3,	// (0x000102f5) wait_border_pane

0xe42a,	// (0x0001017c) wait_anim_pane_g1

0xe42a,	// (0x0001017c) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00011456) wait_anim_pane_g

0x2206,	// (0x00003f58) wait_border_pane_g1

0x2211,	// (0x00003f63) wait_border_pane_g2

0x221a,	// (0x00003f6c) wait_border_pane_g3

0x0002,

0xf836,	// (0x00011588) wait_border_pane_g

0x2070,	// (0x00003dc2) bg_popup_window_pane_cp16_ParamLimits

0x2070,	// (0x00003dc2) bg_popup_window_pane_cp16

0x2170,	// (0x00003ec2) indicator_popup_pane_cp4_ParamLimits

0x2170,	// (0x00003ec2) indicator_popup_pane_cp4

0x2184,	// (0x00003ed6) popup_query_data_window_t1_ParamLimits

0x2184,	// (0x00003ed6) popup_query_data_window_t1

0x2196,	// (0x00003ee8) popup_query_data_window_t2_ParamLimits

0x2196,	// (0x00003ee8) popup_query_data_window_t2

0x21af,	// (0x00003f01) popup_query_data_window_t3_ParamLimits

0x21af,	// (0x00003f01) popup_query_data_window_t3

0x0002,

0xf82f,	// (0x00011581) popup_query_data_window_t_ParamLimits

0xf82f,	// (0x00011581) popup_query_data_window_t

0x21c9,	// (0x00003f1b) query_popup_data_pane_ParamLimits

0x21c9,	// (0x00003f1b) query_popup_data_pane

0x21dd,	// (0x00003f2f) query_popup_data_pane_cp1_ParamLimits

0x21dd,	// (0x00003f2f) query_popup_data_pane_cp1

0x2070,	// (0x00003dc2) bg_popup_window_pane_cp10_ParamLimits

0x2070,	// (0x00003dc2) bg_popup_window_pane_cp10

0x20a2,	// (0x00003df4) indicator_popup_pane_ParamLimits

0x20a2,	// (0x00003df4) indicator_popup_pane

0x20c4,	// (0x00003e16) popup_query_code_window_t1_ParamLimits

0x20c4,	// (0x00003e16) popup_query_code_window_t1

0x20de,	// (0x00003e30) popup_query_code_window_t2_ParamLimits

0x20de,	// (0x00003e30) popup_query_code_window_t2

0x2127,	// (0x00003e79) popup_query_code_window_t3_ParamLimits

0x2127,	// (0x00003e79) popup_query_code_window_t3

0x0002,

0xf828,	// (0x0001157a) popup_query_code_window_t_ParamLimits

0xf828,	// (0x0001157a) popup_query_code_window_t

0x2156,	// (0x00003ea8) query_popup_pane_ParamLimits

0x2156,	// (0x00003ea8) query_popup_pane

0xe948,	// (0x0001069a) bg_popup_window_pane_cp15_ParamLimits

0xe948,	// (0x0001069a) bg_popup_window_pane_cp15

0xe968,	// (0x000106ba) indicator_popup_pane_cp1_ParamLimits

0xe968,	// (0x000106ba) indicator_popup_pane_cp1

0xe97b,	// (0x000106cd) indicator_popup_pane_cp2_ParamLimits

0xe97b,	// (0x000106cd) indicator_popup_pane_cp2

0xe996,	// (0x000106e8) popup_query_data_code_window_g1_ParamLimits

0xe996,	// (0x000106e8) popup_query_data_code_window_g1

0xe9a9,	// (0x000106fb) popup_query_data_code_window_t1_ParamLimits

0xe9a9,	// (0x000106fb) popup_query_data_code_window_t1

0xe9bb,	// (0x0001070d) popup_query_data_code_window_t2_ParamLimits

0xe9bb,	// (0x0001070d) popup_query_data_code_window_t2

0xe9cd,	// (0x0001071f) popup_query_data_code_window_t3_ParamLimits

0xe9cd,	// (0x0001071f) popup_query_data_code_window_t3

0xe9e3,	// (0x00010735) popup_query_data_code_window_t4_ParamLimits

0xe9e3,	// (0x00010735) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000112e2) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000112e2) popup_query_data_code_window_t

0x0714,	// (0x00002466) list_single_midp_graphic_pane_g3

0xe9fd,	// (0x0001074f) query_popup_data_pane_cp2_ParamLimits

0xea10,	// (0x00010762) query_popup_pane_cp2_ParamLimits

0xea10,	// (0x00010762) query_popup_pane_cp2

0xe5a3,	// (0x000102f5) bg_popup_window_pane_cp11

0x2068,	// (0x00003dba) heading_pane_cp5

0xeaa6,	// (0x000107f8) listscroll_popup_info_pane

0xe5a3,	// (0x000102f5) input_focus_pane_cp3

0xea2b,	// (0x0001077d) query_popup_pane_t1

0xea39,	// (0x0001078b) list_popup_info_pane_ParamLimits

0xea39,	// (0x0001078b) list_popup_info_pane

0xea48,	// (0x0001079a) listscroll_popup_info_pane_g1

0xea50,	// (0x000107a2) scroll_pane_cp7

0xea5a,	// (0x000107ac) popup_info_list_pane_t1_ParamLimits

0xea5a,	// (0x000107ac) popup_info_list_pane_t1

0xea74,	// (0x000107c6) popup_info_list_pane_t2_ParamLimits

0xea74,	// (0x000107c6) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000112eb) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000112eb) popup_info_list_pane_t

0xe5a3,	// (0x000102f5) bg_popup_window_pane_cp12

0x37d2,	// (0x00005524) find_popup_pane

0xe6ca,	// (0x0001041c) bg_popup_window_pane_cp3

0xea8e,	// (0x000107e0) heading_pane_cp3

0xea9a,	// (0x000107ec) listscroll_popup_graphic_pane

0xe5a3,	// (0x000102f5) bg_popup_window_pane_cp4

0xa242,	// (0x0000bf94) heading_pane_cp4

0xeaa6,	// (0x000107f8) listscroll_popup_colour_pane

0xa24c,	// (0x0000bf9e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa24c,	// (0x0000bf9e) cell_large_graphic_colour_none_popup_pane

0xa260,	// (0x0000bfb2) grid_large_graphic_colour_popup_pane_ParamLimits

0xa260,	// (0x0000bfb2) grid_large_graphic_colour_popup_pane

0xa284,	// (0x0000bfd6) listscroll_popup_colour_pane_g1_ParamLimits

0xa284,	// (0x0000bfd6) listscroll_popup_colour_pane_g1

0xa29b,	// (0x0000bfed) listscroll_popup_colour_pane_g2_ParamLimits

0xa29b,	// (0x0000bfed) listscroll_popup_colour_pane_g2

0xa2b2,	// (0x0000c004) listscroll_popup_colour_pane_g3_ParamLimits

0xa2b2,	// (0x0000c004) listscroll_popup_colour_pane_g3

0xa2c2,	// (0x0000c014) listscroll_popup_colour_pane_g4_ParamLimits

0xa2c2,	// (0x0000c014) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000112f0) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000112f0) listscroll_popup_colour_pane_g

0xeaae,	// (0x00010800) scroll_pane_cp6_ParamLimits

0xeaae,	// (0x00010800) scroll_pane_cp6

0xa2d2,	// (0x0000c024) cell_large_graphic_colour_popup_pane_ParamLimits

0xa2d2,	// (0x0000c024) cell_large_graphic_colour_popup_pane

0xeac0,	// (0x00010812) cell_large_graphic_colour_none_popup_pane_t1

0xe5a3,	// (0x000102f5) grid_highlight_pane_cp5

0xeacf,	// (0x00010821) cell_large_graphic_colour_popup_pane_g1

0xead7,	// (0x00010829) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000112f9) cell_large_graphic_colour_popup_pane_g

0xeadf,	// (0x00010831) cell_large_graphic_colour_popup_pane_g2_copy1

0xeae8,	// (0x0001083a) grid_highlight_pane_cp4

0xeaf0,	// (0x00010842) bg_popup_window_pane_cp8_ParamLimits

0xeaf0,	// (0x00010842) bg_popup_window_pane_cp8

0xeb0b,	// (0x0001085d) popup_snote_single_text_window_g1_ParamLimits

0xeb0b,	// (0x0001085d) popup_snote_single_text_window_g1

0xeb1d,	// (0x0001086f) popup_snote_single_text_window_t1_ParamLimits

0xeb1d,	// (0x0001086f) popup_snote_single_text_window_t1

0xeb30,	// (0x00010882) popup_snote_single_text_window_t2_ParamLimits

0xeb30,	// (0x00010882) popup_snote_single_text_window_t2

0xeb43,	// (0x00010895) popup_snote_single_text_window_t3_ParamLimits

0xeb43,	// (0x00010895) popup_snote_single_text_window_t3

0xeb7c,	// (0x000108ce) popup_snote_single_text_window_t4_ParamLimits

0xeb7c,	// (0x000108ce) popup_snote_single_text_window_t4

0xebb0,	// (0x00010902) popup_snote_single_text_window_t5_ParamLimits

0xebb0,	// (0x00010902) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000112fe) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000112fe) popup_snote_single_text_window_t

0xebdf,	// (0x00010931) bg_popup_window_pane_cp9_ParamLimits

0xebdf,	// (0x00010931) bg_popup_window_pane_cp9

0xeb0b,	// (0x0001085d) popup_snote_single_graphic_window_g1_ParamLimits

0xeb0b,	// (0x0001085d) popup_snote_single_graphic_window_g1

0xebed,	// (0x0001093f) popup_snote_single_graphic_window_g2_ParamLimits

0xebed,	// (0x0001093f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00011309) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00011309) popup_snote_single_graphic_window_g

0xebf9,	// (0x0001094b) popup_snote_single_graphic_window_t1_ParamLimits

0xebf9,	// (0x0001094b) popup_snote_single_graphic_window_t1

0xec0c,	// (0x0001095e) popup_snote_single_graphic_window_t2_ParamLimits

0xec0c,	// (0x0001095e) popup_snote_single_graphic_window_t2

0xec1f,	// (0x00010971) popup_snote_single_graphic_window_t3_ParamLimits

0xec1f,	// (0x00010971) popup_snote_single_graphic_window_t3

0xec58,	// (0x000109aa) popup_snote_single_graphic_window_t4_ParamLimits

0xec58,	// (0x000109aa) popup_snote_single_graphic_window_t4

0xec8c,	// (0x000109de) popup_snote_single_graphic_window_t5_ParamLimits

0xec8c,	// (0x000109de) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001130e) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001130e) popup_snote_single_graphic_window_t

0x3658,	// (0x000053aa) grid_graphic_popup_pane_ParamLimits

0x3658,	// (0x000053aa) grid_graphic_popup_pane

0x3686,	// (0x000053d8) listscroll_popup_graphic_pane_g1_ParamLimits

0x3686,	// (0x000053d8) listscroll_popup_graphic_pane_g1

0xc1d7,	// (0x0000df29) listscroll_popup_graphic_pane_g2_ParamLimits

0xc1d7,	// (0x0000df29) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a5,	// (0x000116f7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a5,	// (0x000116f7) listscroll_popup_graphic_pane_g

0x36ae,	// (0x00005400) scroll_pane_cp5

0xc196,	// (0x0000dee8) cell_graphic_popup_pane_ParamLimits

0xc196,	// (0x0000dee8) cell_graphic_popup_pane

0x35e1,	// (0x00005333) cell_graphic_popup_pane_g1

0x35e9,	// (0x0000533b) cell_graphic_popup_pane_g2

0xeadf,	// (0x00010831) cell_graphic_popup_pane_g3

0x0002,

0xf99e,	// (0x000116f0) cell_graphic_popup_pane_g

0x35f2,	// (0x00005344) cell_graphic_popup_pane_t2

0xeae8,	// (0x0001083a) grid_highlight_pane_cp3

0xeccd,	// (0x00010a1f) list_gen_pane_ParamLimits

0xeccd,	// (0x00010a1f) list_gen_pane

0xecf5,	// (0x00010a47) scroll_pane

0xc151,	// (0x0000dea3) bg_list_pane_g1_ParamLimits

0xc151,	// (0x0000dea3) bg_list_pane_g1

0x355e,	// (0x000052b0) bg_list_pane_g2_ParamLimits

0x355e,	// (0x000052b0) bg_list_pane_g2

0x3571,	// (0x000052c3) bg_list_pane_g3_ParamLimits

0x3571,	// (0x000052c3) bg_list_pane_g3

0x3583,	// (0x000052d5) bg_list_pane_g4_ParamLimits

0x3583,	// (0x000052d5) bg_list_pane_g4

0xc16c,	// (0x0000debe) bg_list_pane_g5_ParamLimits

0xc16c,	// (0x0000debe) bg_list_pane_g5

0x0004,

0xf993,	// (0x000116e5) bg_list_pane_g_ParamLimits

0xf993,	// (0x000116e5) bg_list_pane_g

0xc0eb,	// (0x0000de3d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double2_graphic_large_graphic_pane

0xc0eb,	// (0x0000de3d) list_double2_graphic_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double2_graphic_pane

0xc0eb,	// (0x0000de3d) list_double2_large_graphic_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double2_large_graphic_pane

0xc0eb,	// (0x0000de3d) list_double2_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double2_pane

0xc0eb,	// (0x0000de3d) list_double_graphic_heading_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_graphic_heading_pane

0xc0eb,	// (0x0000de3d) list_double_graphic_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_graphic_pane

0xc0eb,	// (0x0000de3d) list_double_heading_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_heading_pane

0xc0eb,	// (0x0000de3d) list_double_large_graphic_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_large_graphic_pane

0xc0eb,	// (0x0000de3d) list_double_number_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_number_pane

0xc0eb,	// (0x0000de3d) list_double_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_pane

0xc0eb,	// (0x0000de3d) list_double_time_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_double_time_pane

0xc0eb,	// (0x0000de3d) list_setting_number_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_setting_number_pane

0xc0eb,	// (0x0000de3d) list_setting_pane_ParamLimits

0xc0eb,	// (0x0000de3d) list_setting_pane

0xc0ff,	// (0x0000de51) list_single_2graphic_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_2graphic_pane

0xc0ff,	// (0x0000de51) list_single_graphic_heading_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_graphic_heading_pane

0xc0ff,	// (0x0000de51) list_single_graphic_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_graphic_pane

0xc0ff,	// (0x0000de51) list_single_heading_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_heading_pane

0xc0ff,	// (0x0000de51) list_single_large_graphic_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_large_graphic_pane

0xc0ff,	// (0x0000de51) list_single_number_heading_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_number_heading_pane

0xc0ff,	// (0x0000de51) list_single_number_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_number_pane

0xc0ff,	// (0x0000de51) list_single_pane_ParamLimits

0xc0ff,	// (0x0000de51) list_single_pane

0xe5a3,	// (0x000102f5) list_highlight_pane_cp1

0x085b,	// (0x000025ad) list_single_pane_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_pane_g1

0x18f2,	// (0x00003644) list_single_pane_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_pane_g

0x3de1,	// (0x00005b33) list_single_pane_t1_ParamLimits

0x3de1,	// (0x00005b33) list_single_pane_t1

0x085b,	// (0x000025ad) list_single_number_pane_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_number_pane_g1

0x18f2,	// (0x00003644) list_single_number_pane_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_number_pane_g

0x19dc,	// (0x0000372e) list_single_number_pane_t1_ParamLimits

0x19dc,	// (0x0000372e) list_single_number_pane_t1

0xbf09,	// (0x0000dc5b) list_single_number_pane_t2_ParamLimits

0xbf09,	// (0x0000dc5b) list_single_number_pane_t2

0x0001,

0xf954,	// (0x000116a6) list_single_number_pane_t_ParamLimits

0xf954,	// (0x000116a6) list_single_number_pane_t

0x566d,	// (0x000073bf) list_single_graphic_pane_g1_ParamLimits

0x566d,	// (0x000073bf) list_single_graphic_pane_g1

0x085b,	// (0x000025ad) list_single_graphic_pane_g2_ParamLimits

0x085b,	// (0x000025ad) list_single_graphic_pane_g2

0x18f2,	// (0x00003644) list_single_graphic_pane_g3_ParamLimits

0x18f2,	// (0x00003644) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00011319) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00011319) list_single_graphic_pane_g

0xa2fd,	// (0x0000c04f) list_single_graphic_pane_t1_ParamLimits

0xa2fd,	// (0x0000c04f) list_single_graphic_pane_t1

0x085b,	// (0x000025ad) list_single_heading_pane_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_heading_pane_g1

0x18f2,	// (0x00003644) list_single_heading_pane_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_heading_pane_g

0x3e03,	// (0x00005b55) list_single_heading_pane_t1_ParamLimits

0x3e03,	// (0x00005b55) list_single_heading_pane_t1

0xa313,	// (0x0000c065) list_single_heading_pane_t2_ParamLimits

0xa313,	// (0x0000c065) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00011325) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00011325) list_single_heading_pane_t

0x085b,	// (0x000025ad) list_single_number_heading_pane_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_number_heading_pane_g1

0x18f2,	// (0x00003644) list_single_number_heading_pane_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_number_heading_pane_g

0x3e03,	// (0x00005b55) list_single_number_heading_pane_t1_ParamLimits

0x3e03,	// (0x00005b55) list_single_number_heading_pane_t1

0xa325,	// (0x0000c077) list_single_number_heading_pane_t2_ParamLimits

0xa325,	// (0x0000c077) list_single_number_heading_pane_t2

0x3dbd,	// (0x00005b0f) list_single_number_heading_pane_t3_ParamLimits

0x3dbd,	// (0x00005b0f) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001132a) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001132a) list_single_number_heading_pane_t

0x18e6,	// (0x00003638) list_single_graphic_heading_pane_g1_ParamLimits

0x18e6,	// (0x00003638) list_single_graphic_heading_pane_g1

0xa337,	// (0x0000c089) list_single_graphic_heading_pane_g4_ParamLimits

0xa337,	// (0x0000c089) list_single_graphic_heading_pane_g4

0x18f2,	// (0x00003644) list_single_graphic_heading_pane_g5_ParamLimits

0x18f2,	// (0x00003644) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00011331) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00011331) list_single_graphic_heading_pane_g

0x3e03,	// (0x00005b55) list_single_graphic_heading_pane_t1_ParamLimits

0x3e03,	// (0x00005b55) list_single_graphic_heading_pane_t1

0xa348,	// (0x0000c09a) list_single_graphic_heading_pane_t2_ParamLimits

0xa348,	// (0x0000c09a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00011338) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00011338) list_single_graphic_heading_pane_t

0x3df7,	// (0x00005b49) list_single_large_graphic_pane_g1_ParamLimits

0x3df7,	// (0x00005b49) list_single_large_graphic_pane_g1

0x085b,	// (0x000025ad) list_single_large_graphic_pane_g2_ParamLimits

0x085b,	// (0x000025ad) list_single_large_graphic_pane_g2

0x18f2,	// (0x00003644) list_single_large_graphic_pane_g3_ParamLimits

0x18f2,	// (0x00003644) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001133d) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001133d) list_single_large_graphic_pane_g

0x2211,	// (0x00003f63) wait_border_pane_g2_copy1

0xa35a,	// (0x0000c0ac) list_single_large_graphic_pane_g4_cp2

0x3e03,	// (0x00005b55) list_single_large_graphic_pane_t1_ParamLimits

0x3e03,	// (0x00005b55) list_single_large_graphic_pane_t1

0xa362,	// (0x0000c0b4) list_double_pane_g1_ParamLimits

0xa362,	// (0x0000c0b4) list_double_pane_g1

0xa36e,	// (0x0000c0c0) list_double_pane_g2_ParamLimits

0xa36e,	// (0x0000c0c0) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00011344) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00011344) list_double_pane_g

0xa37a,	// (0x0000c0cc) list_double_pane_t1_ParamLimits

0xa37a,	// (0x0000c0cc) list_double_pane_t1

0xa390,	// (0x0000c0e2) list_double_pane_t2_ParamLimits

0xa390,	// (0x0000c0e2) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00011349) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00011349) list_double_pane_t

0xa3a2,	// (0x0000c0f4) list_double2_pane_g1_ParamLimits

0xa3a2,	// (0x0000c0f4) list_double2_pane_g1

0xa3b3,	// (0x0000c105) list_double2_pane_g2_ParamLimits

0xa3b3,	// (0x0000c105) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001134e) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001134e) list_double2_pane_g

0xa3bf,	// (0x0000c111) list_double2_pane_t1_ParamLimits

0xa3bf,	// (0x0000c111) list_double2_pane_t1

0xa3d5,	// (0x0000c127) list_double2_pane_t2_ParamLimits

0xa3d5,	// (0x0000c127) list_double2_pane_t2

0x0001,

0xf601,	// (0x00011353) list_double2_pane_t_ParamLimits

0xf601,	// (0x00011353) list_double2_pane_t

0xa362,	// (0x0000c0b4) list_double_number_pane_g1_ParamLimits

0xa362,	// (0x0000c0b4) list_double_number_pane_g1

0xa36e,	// (0x0000c0c0) list_double_number_pane_g2_ParamLimits

0xa36e,	// (0x0000c0c0) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00011344) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00011344) list_double_number_pane_g

0xa3e7,	// (0x0000c139) list_double_number_pane_t1_ParamLimits

0xa3e7,	// (0x0000c139) list_double_number_pane_t1

0xa3f9,	// (0x0000c14b) list_double_number_pane_t2_ParamLimits

0xa3f9,	// (0x0000c14b) list_double_number_pane_t2

0xa40f,	// (0x0000c161) list_double_number_pane_t3_ParamLimits

0xa40f,	// (0x0000c161) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00011358) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00011358) list_double_number_pane_t

0xa421,	// (0x0000c173) list_double_graphic_pane_g1_ParamLimits

0xa421,	// (0x0000c173) list_double_graphic_pane_g1

0xa42d,	// (0x0000c17f) list_double_graphic_pane_g2_ParamLimits

0xa42d,	// (0x0000c17f) list_double_graphic_pane_g2

0xa43c,	// (0x0000c18e) list_double_graphic_pane_g3_ParamLimits

0xa43c,	// (0x0000c18e) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001135f) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001135f) list_double_graphic_pane_g

0xa454,	// (0x0000c1a6) list_double_graphic_pane_t1_ParamLimits

0xa454,	// (0x0000c1a6) list_double_graphic_pane_t1

0xa46a,	// (0x0000c1bc) list_double_graphic_pane_t2_ParamLimits

0xa46a,	// (0x0000c1bc) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00011368) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00011368) list_double_graphic_pane_t

0x288d,	// (0x000045df) list_double2_graphic_pane_g1_ParamLimits

0x288d,	// (0x000045df) list_double2_graphic_pane_g1

0x0708,	// (0x0000245a) list_double2_graphic_pane_g2_ParamLimits

0x0708,	// (0x0000245a) list_double2_graphic_pane_g2

0xa3b3,	// (0x0000c105) list_double2_graphic_pane_g3_ParamLimits

0xa3b3,	// (0x0000c105) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001136d) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001136d) list_double2_graphic_pane_g

0xa47c,	// (0x0000c1ce) list_double2_graphic_pane_t1_ParamLimits

0xa47c,	// (0x0000c1ce) list_double2_graphic_pane_t1

0xa492,	// (0x0000c1e4) list_double2_graphic_pane_t2_ParamLimits

0xa492,	// (0x0000c1e4) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00011374) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00011374) list_double2_graphic_pane_t

0xa4a4,	// (0x0000c1f6) list_double_large_graphic_pane_g1_ParamLimits

0xa4a4,	// (0x0000c1f6) list_double_large_graphic_pane_g1

0xa4cf,	// (0x0000c221) list_double_large_graphic_pane_g2_ParamLimits

0xa4cf,	// (0x0000c221) list_double_large_graphic_pane_g2

0xa36e,	// (0x0000c0c0) list_double_large_graphic_pane_g3_ParamLimits

0xa36e,	// (0x0000c0c0) list_double_large_graphic_pane_g3

0xa4e0,	// (0x0000c232) list_double_large_graphic_pane_g4_ParamLimits

0xa4e0,	// (0x0000c232) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00011379) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00011379) list_double_large_graphic_pane_g

0xa4f3,	// (0x0000c245) list_double_large_graphic_pane_t1_ParamLimits

0xa4f3,	// (0x0000c245) list_double_large_graphic_pane_t1

0xa50c,	// (0x0000c25e) list_double_large_graphic_pane_t2_ParamLimits

0xa50c,	// (0x0000c25e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00011384) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00011384) list_double_large_graphic_pane_t

0xa51e,	// (0x0000c270) list_double2_large_graphic_pane_g1_ParamLimits

0xa51e,	// (0x0000c270) list_double2_large_graphic_pane_g1

0xa3a2,	// (0x0000c0f4) list_double2_large_graphic_pane_g2_ParamLimits

0xa3a2,	// (0x0000c0f4) list_double2_large_graphic_pane_g2

0xa3b3,	// (0x0000c105) list_double2_large_graphic_pane_g3_ParamLimits

0xa3b3,	// (0x0000c105) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00011389) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00011389) list_double2_large_graphic_pane_g

0xa52a,	// (0x0000c27c) list_double2_large_graphic_pane_t1_ParamLimits

0xa52a,	// (0x0000c27c) list_double2_large_graphic_pane_t1

0xa540,	// (0x0000c292) list_double2_large_graphic_pane_t2_ParamLimits

0xa540,	// (0x0000c292) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00011390) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00011390) list_double2_large_graphic_pane_t

0xa552,	// (0x0000c2a4) list_double_heading_pane_g1_ParamLimits

0xa552,	// (0x0000c2a4) list_double_heading_pane_g1

0xa563,	// (0x0000c2b5) list_double_heading_pane_g2_ParamLimits

0xa563,	// (0x0000c2b5) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00011395) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00011395) list_double_heading_pane_g

0xa56f,	// (0x0000c2c1) list_double_heading_pane_t1_ParamLimits

0xa56f,	// (0x0000c2c1) list_double_heading_pane_t1

0xa585,	// (0x0000c2d7) list_double_heading_pane_t2_ParamLimits

0xa585,	// (0x0000c2d7) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001139a) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001139a) list_double_heading_pane_t

0xed3e,	// (0x00010a90) list_double_graphic_heading_pane_g1_ParamLimits

0xed3e,	// (0x00010a90) list_double_graphic_heading_pane_g1

0xa552,	// (0x0000c2a4) list_double_graphic_heading_pane_g2_ParamLimits

0xa552,	// (0x0000c2a4) list_double_graphic_heading_pane_g2

0xa563,	// (0x0000c2b5) list_double_graphic_heading_pane_g3_ParamLimits

0xa563,	// (0x0000c2b5) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001139f) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001139f) list_double_graphic_heading_pane_g

0xa597,	// (0x0000c2e9) list_double_graphic_heading_pane_t1_ParamLimits

0xa597,	// (0x0000c2e9) list_double_graphic_heading_pane_t1

0xa5ad,	// (0x0000c2ff) list_double_graphic_heading_pane_t2_ParamLimits

0xa5ad,	// (0x0000c2ff) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x000113a6) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x000113a6) list_double_graphic_heading_pane_t

0xa4cf,	// (0x0000c221) list_double_time_pane_g1_ParamLimits

0xa4cf,	// (0x0000c221) list_double_time_pane_g1

0xa36e,	// (0x0000c0c0) list_double_time_pane_g2_ParamLimits

0xa36e,	// (0x0000c0c0) list_double_time_pane_g2

0x0001,

0xf659,	// (0x000113ab) list_double_time_pane_g_ParamLimits

0xf659,	// (0x000113ab) list_double_time_pane_g

0xa5bf,	// (0x0000c311) list_double_time_pane_t1_ParamLimits

0xa5bf,	// (0x0000c311) list_double_time_pane_t1

0xa5d5,	// (0x0000c327) list_double_time_pane_t2_ParamLimits

0xa5d5,	// (0x0000c327) list_double_time_pane_t2

0xa5e7,	// (0x0000c339) list_double_time_pane_t3_ParamLimits

0xa5e7,	// (0x0000c339) list_double_time_pane_t3

0xa5f9,	// (0x0000c34b) list_double_time_pane_t4_ParamLimits

0xa5f9,	// (0x0000c34b) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000113b0) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000113b0) list_double_time_pane_t

0x0708,	// (0x0000245a) list_setting_pane_g1_ParamLimits

0x0708,	// (0x0000245a) list_setting_pane_g1

0xa3b3,	// (0x0000c105) list_setting_pane_g2_ParamLimits

0xa3b3,	// (0x0000c105) list_setting_pane_g2

0x0001,

0xf667,	// (0x000113b9) list_setting_pane_g_ParamLimits

0xf667,	// (0x000113b9) list_setting_pane_g

0xa60b,	// (0x0000c35d) list_setting_pane_t1_ParamLimits

0xa60b,	// (0x0000c35d) list_setting_pane_t1

0xa622,	// (0x0000c374) list_setting_pane_t2_ParamLimits

0xa622,	// (0x0000c374) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000113be) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000113be) list_setting_pane_t

0xa661,	// (0x0000c3b3) set_value_pane_cp_ParamLimits

0xa661,	// (0x0000c3b3) set_value_pane_cp

0x0708,	// (0x0000245a) list_setting_number_pane_g1_ParamLimits

0x0708,	// (0x0000245a) list_setting_number_pane_g1

0xa3b3,	// (0x0000c105) list_setting_number_pane_g2_ParamLimits

0xa3b3,	// (0x0000c105) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x000113b9) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x000113b9) list_setting_number_pane_g

0xa66f,	// (0x0000c3c1) list_setting_number_pane_t1_ParamLimits

0xa66f,	// (0x0000c3c1) list_setting_number_pane_t1

0xa683,	// (0x0000c3d5) list_setting_number_pane_t2_ParamLimits

0xa683,	// (0x0000c3d5) list_setting_number_pane_t2

0xa69a,	// (0x0000c3ec) list_setting_number_pane_t3_ParamLimits

0xa69a,	// (0x0000c3ec) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x000113c5) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x000113c5) list_setting_number_pane_t

0xa661,	// (0x0000c3b3) set_value_pane_ParamLimits

0xa661,	// (0x0000c3b3) set_value_pane

0xed4a,	// (0x00010a9c) bg_set_opt_pane_ParamLimits

0xed4a,	// (0x00010a9c) bg_set_opt_pane

0xed6b,	// (0x00010abd) set_value_pane_t1

0xed79,	// (0x00010acb) slider_set_pane_cp3

0xed82,	// (0x00010ad4) volume_small_pane_cp

0xed8b,	// (0x00010add) list_form_gen_pane

0xed94,	// (0x00010ae6) scroll_pane_cp8

0xa6dd,	// (0x0000c42f) form_field_data_pane_ParamLimits

0xa6dd,	// (0x0000c42f) form_field_data_pane

0xa6f8,	// (0x0000c44a) form_field_data_wide_pane_ParamLimits

0xa6f8,	// (0x0000c44a) form_field_data_wide_pane

0xa71c,	// (0x0000c46e) form_field_popup_pane_ParamLimits

0xa71c,	// (0x0000c46e) form_field_popup_pane

0xedb5,	// (0x00010b07) form_field_popup_wide_pane_ParamLimits

0xedb5,	// (0x00010b07) form_field_popup_wide_pane

0xedee,	// (0x00010b40) form_field_slider_pane_ParamLimits

0xedee,	// (0x00010b40) form_field_slider_pane

0xee01,	// (0x00010b53) form_field_slider_wide_pane_ParamLimits

0xee01,	// (0x00010b53) form_field_slider_wide_pane

0xee14,	// (0x00010b66) data_form_pane

0xa748,	// (0x0000c49a) form_field_data_pane_t1

0xee20,	// (0x00010b72) input_focus_pane

0xee2e,	// (0x00010b80) data_form_wide_pane

0xee66,	// (0x00010bb8) form_field_data_wide_pane_t1

0xeafd,	// (0x0001084f) input_focus_pane_cp6

0xa762,	// (0x0000c4b4) form_field_popup_pane_t1

0xee20,	// (0x00010b72) input_focus_pane_cp7

0xee88,	// (0x00010bda) list_form_pane

0xee9c,	// (0x00010bee) form_field_popup_wide_pane_t1

0xee20,	// (0x00010b72) input_focus_pane_cp8

0xeeb1,	// (0x00010c03) list_form_wide_pane

0xa784,	// (0x0000c4d6) form_field_slider_pane_t1_ParamLimits

0xa784,	// (0x0000c4d6) form_field_slider_pane_t1

0xa79c,	// (0x0000c4ee) form_field_slider_pane_t2_ParamLimits

0xa79c,	// (0x0000c4ee) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x000113d5) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x000113d5) form_field_slider_pane_t

0xe6b2,	// (0x00010404) input_focus_pane_cp9_ParamLimits

0xe6b2,	// (0x00010404) input_focus_pane_cp9

0xa7b1,	// (0x0000c503) slider_cont_pane_ParamLimits

0xa7b1,	// (0x0000c503) slider_cont_pane

0xeec0,	// (0x00010c12) form_field_slider_wide_pane_t1_ParamLimits

0xeec0,	// (0x00010c12) form_field_slider_wide_pane_t1

0xeed2,	// (0x00010c24) form_field_slider_wide_pane_t2_ParamLimits

0xeed2,	// (0x00010c24) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x000113da) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x000113da) form_field_slider_wide_pane_t

0xe6b2,	// (0x00010404) input_focus_pane_cp10_ParamLimits

0xe6b2,	// (0x00010404) input_focus_pane_cp10

0xa7c5,	// (0x0000c517) slider_cont_pane_cp1_ParamLimits

0xa7c5,	// (0x0000c517) slider_cont_pane_cp1

0xa7d9,	// (0x0000c52b) slider_form_pane_cp

0xeee4,	// (0x00010c36) input_focus_pane_g1

0xeeec,	// (0x00010c3e) input_focus_pane_g2

0xeef4,	// (0x00010c46) input_focus_pane_g3

0xeefc,	// (0x00010c4e) input_focus_pane_g4

0xef04,	// (0x00010c56) input_focus_pane_g5

0xef0c,	// (0x00010c5e) input_focus_pane_g6

0xef14,	// (0x00010c66) input_focus_pane_g7

0xef1c,	// (0x00010c6e) input_focus_pane_g8

0xef24,	// (0x00010c76) input_focus_pane_g9

0xe42a,	// (0x0001017c) input_focus_pane_g10

0x0009,

0xf68d,	// (0x000113df) input_focus_pane_g

0x221a,	// (0x00003f6c) wait_border_pane_g3_copy1

0xa7e1,	// (0x0000c533) data_form_pane_t1

0xe42a,	// (0x0001017c) wait_anim_pane_g1_copy1

0xc0c0,	// (0x0000de12) data_form_wide_pane_t1

0xef2c,	// (0x00010c7e) list_form_graphic_pane_cp_ParamLimits

0xef2c,	// (0x00010c7e) list_form_graphic_pane_cp

0x3403,	// (0x00005155) slider_form_pane_g1

0x340c,	// (0x0000515e) slider_form_pane_g2

0x0006,

0xf984,	// (0x000116d6) slider_form_pane_g

0xa7fd,	// (0x0000c54f) list_form_graphic_pane_ParamLimits

0xa7fd,	// (0x0000c54f) list_form_graphic_pane

0xef3e,	// (0x00010c90) list_form_graphic_pane_g1

0xef46,	// (0x00010c98) list_form_graphic_pane_t1_ParamLimits

0xef46,	// (0x00010c98) list_form_graphic_pane_t1

0xe6ca,	// (0x0001041c) list_highlight_pane_cp5_ParamLimits

0xe6ca,	// (0x0001041c) list_highlight_pane_cp5

0xa80e,	// (0x0000c560) find_pane_g1

0xef5b,	// (0x00010cad) input_find_pane

0xa817,	// (0x0000c569) input_find_pane_g1_ParamLimits

0xa817,	// (0x0000c569) input_find_pane_g1

0xa823,	// (0x0000c575) input_find_pane_t1_ParamLimits

0xa823,	// (0x0000c575) input_find_pane_t1

0xa838,	// (0x0000c58a) input_find_pane_t2_ParamLimits

0xa838,	// (0x0000c58a) input_find_pane_t2

0x0001,

0xf6a2,	// (0x000113f4) input_find_pane_t_ParamLimits

0xf6a2,	// (0x000113f4) input_find_pane_t

0xef64,	// (0x00010cb6) input_focus_pane_cp5_ParamLimits

0xef64,	// (0x00010cb6) input_focus_pane_cp5

0xef72,	// (0x00010cc4) bg_popup_window_pane_cp2_ParamLimits

0xef72,	// (0x00010cc4) bg_popup_window_pane_cp2

0xef7f,	// (0x00010cd1) listscroll_menu_pane_ParamLimits

0xef7f,	// (0x00010cd1) listscroll_menu_pane

0xa859,	// (0x0000c5ab) popup_submenu_window_ParamLimits

0xa859,	// (0x0000c5ab) popup_submenu_window

0xef8b,	// (0x00010cdd) find_popup_pane_g1

0xef93,	// (0x00010ce5) input_popup_find_pane_cp

0xef64,	// (0x00010cb6) input_focus_pane_cp4_ParamLimits

0xef64,	// (0x00010cb6) input_focus_pane_cp4

0xef9d,	// (0x00010cef) input_popup_find_pane_t1_ParamLimits

0xef9d,	// (0x00010cef) input_popup_find_pane_t1

0xe5a3,	// (0x000102f5) bg_popup_sub_pane_cp

0xefcb,	// (0x00010d1d) listscroll_popup_sub_pane

0xefd3,	// (0x00010d25) list_submenu_pane_ParamLimits

0xefd3,	// (0x00010d25) list_submenu_pane

0xefe4,	// (0x00010d36) scroll_pane_cp4

0xefec,	// (0x00010d3e) list_single_popup_submenu_pane_ParamLimits

0xefec,	// (0x00010d3e) list_single_popup_submenu_pane

0xf001,	// (0x00010d53) list_single_popup_submenu_pane_g1

0xf009,	// (0x00010d5b) list_single_popup_submenu_pane_t1_ParamLimits

0xf009,	// (0x00010d5b) list_single_popup_submenu_pane_t1

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp1_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp1

0xa897,	// (0x0000c5e9) tabs_2_active_pane_g1

0xa89f,	// (0x0000c5f1) tabs_2_active_pane_t1

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp1_ParamLimits

0xe6b2,	// (0x00010404) bg_passive_tab_pane_cp1

0xa897,	// (0x0000c5e9) tabs_2_passive_pane_g1

0xa89f,	// (0x0000c5f1) tabs_2_passive_pane_t1

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp4

0xa8b1,	// (0x0000c603) tabs_2_long_active_pane_t1

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp4

0x1abb,	// (0x0000380d) list_single_midp_graphic_pane_g4_ParamLimits

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp5

0xa8c4,	// (0x0000c616) tabs_3_long_active_pane_t1

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp5

0x1abb,	// (0x0000380d) list_single_midp_graphic_pane_g4

0xe6ca,	// (0x0001041c) bg_popup_window_pane_cp13_ParamLimits

0xe6ca,	// (0x0001041c) bg_popup_window_pane_cp13

0xf027,	// (0x00010d79) listscroll_popup_fast_pane_ParamLimits

0xf027,	// (0x00010d79) listscroll_popup_fast_pane

0xf044,	// (0x00010d96) grid_popup_fast_pane_ParamLimits

0xf044,	// (0x00010d96) grid_popup_fast_pane

0xf056,	// (0x00010da8) scroll_pane_cp9_ParamLimits

0xf056,	// (0x00010da8) scroll_pane_cp9

0x56e7,	// (0x00007439) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x56e7,	// (0x00007439) list_single_graphic_hl_pane_t1_cp2

0xf07a,	// (0x00010dcc) input_focus_pane_cp20_ParamLimits

0xf07a,	// (0x00010dcc) input_focus_pane_cp20

0xf088,	// (0x00010dda) query_popup_data_pane_t1_ParamLimits

0xf088,	// (0x00010dda) query_popup_data_pane_t1

0xf09b,	// (0x00010ded) query_popup_data_pane_t2_ParamLimits

0xf09b,	// (0x00010ded) query_popup_data_pane_t2

0xf0e1,	// (0x00010e33) query_popup_data_pane_t3_ParamLimits

0xf0e1,	// (0x00010e33) query_popup_data_pane_t3

0xf122,	// (0x00010e74) query_popup_data_pane_t4_ParamLimits

0xf122,	// (0x00010e74) query_popup_data_pane_t4

0xf15e,	// (0x00010eb0) query_popup_data_pane_t5_ParamLimits

0xf15e,	// (0x00010eb0) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x000113f9) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x000113f9) query_popup_data_pane_t

0xeee4,	// (0x00010c36) bg_set_opt_pane_g1

0xeeec,	// (0x00010c3e) bg_set_opt_pane_g2

0xeef4,	// (0x00010c46) bg_set_opt_pane_g3

0xeefc,	// (0x00010c4e) bg_set_opt_pane_g4

0xef04,	// (0x00010c56) bg_set_opt_pane_g5

0xef0c,	// (0x00010c5e) bg_set_opt_pane_g6

0xef14,	// (0x00010c66) bg_set_opt_pane_g7

0xef1c,	// (0x00010c6e) bg_set_opt_pane_g8

0xef24,	// (0x00010c76) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00011404) bg_set_opt_pane_g

0x043b,	// (0x0000218d) control_top_pane_stacon_ParamLimits

0x043b,	// (0x0000218d) control_top_pane_stacon

0x048e,	// (0x000021e0) signal_pane_stacon_ParamLimits

0x048e,	// (0x000021e0) signal_pane_stacon

0x04b3,	// (0x00002205) stacon_top_pane_g1_ParamLimits

0x04b3,	// (0x00002205) stacon_top_pane_g1

0x04d5,	// (0x00002227) title_pane_stacon_ParamLimits

0x04d5,	// (0x00002227) title_pane_stacon

0x04ff,	// (0x00002251) uni_indicator_pane_stacon_ParamLimits

0x04ff,	// (0x00002251) uni_indicator_pane_stacon

0x0517,	// (0x00002269) battery_pane_stacon_ParamLimits

0x0517,	// (0x00002269) battery_pane_stacon

0x055b,	// (0x000022ad) control_bottom_pane_stacon_ParamLimits

0x055b,	// (0x000022ad) control_bottom_pane_stacon

0x057e,	// (0x000022d0) navi_pane_stacon_ParamLimits

0x057e,	// (0x000022d0) navi_pane_stacon

0x05a1,	// (0x000022f3) stacon_bottom_pane_g1_ParamLimits

0x05a1,	// (0x000022f3) stacon_bottom_pane_g1

0xf195,	// (0x00010ee7) aid_levels_signal_lsc_ParamLimits

0xf195,	// (0x00010ee7) aid_levels_signal_lsc

0xf1ac,	// (0x00010efe) signal_pane_stacon_g1_ParamLimits

0xf1ac,	// (0x00010efe) signal_pane_stacon_g1

0xf1c0,	// (0x00010f12) signal_pane_stacon_g2_ParamLimits

0xf1c0,	// (0x00010f12) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00011417) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00011417) signal_pane_stacon_g

0xf202,	// (0x00010f54) title_pane_stacon_t1_ParamLimits

0xf202,	// (0x00010f54) title_pane_stacon_t1

0xf227,	// (0x00010f79) uni_indicator_pane_stacon_g1

0xf231,	// (0x00010f83) uni_indicator_pane_stacon_g2

0xf23b,	// (0x00010f8d) uni_indicator_pane_stacon_g3

0xf245,	// (0x00010f97) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00011423) uni_indicator_pane_stacon_g

0xf24f,	// (0x00010fa1) control_top_pane_stacon_g1

0xf257,	// (0x00010fa9) control_top_pane_stacon_t1_ParamLimits

0xf257,	// (0x00010fa9) control_top_pane_stacon_t1

0xf28e,	// (0x00010fe0) aid_levels_battery_lsc_ParamLimits

0xf28e,	// (0x00010fe0) aid_levels_battery_lsc

0xf2a6,	// (0x00010ff8) battery_pane_stacon_g1_ParamLimits

0xf2a6,	// (0x00010ff8) battery_pane_stacon_g1

0xf2b9,	// (0x0001100b) battery_pane_stacon_g2_ParamLimits

0xf2b9,	// (0x0001100b) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001142c) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001142c) battery_pane_stacon_g

0xf2f7,	// (0x00011049) navi_icon_pane_stacon

0xf30b,	// (0x0001105d) navi_navi_pane_stacon

0xf2f7,	// (0x00011049) navi_text_pane_stacon

0xf24f,	// (0x00010fa1) control_bottom_pane_stacon_g1

0xf321,	// (0x00011073) control_bottom_pane_stacon_t1_ParamLimits

0xf321,	// (0x00011073) control_bottom_pane_stacon_t1

0xa8d6,	// (0x0000c628) grid_app_pane_ParamLimits

0xa8d6,	// (0x0000c628) grid_app_pane

0xa90e,	// (0x0000c660) scroll_pane_cp15_ParamLimits

0xa90e,	// (0x0000c660) scroll_pane_cp15

0xa927,	// (0x0000c679) cell_app_pane_ParamLimits

0xa927,	// (0x0000c679) cell_app_pane

0xa968,	// (0x0000c6ba) cell_app_pane_g1_ParamLimits

0xa968,	// (0x0000c6ba) cell_app_pane_g1

0xf372,	// (0x000110c4) cell_app_pane_g2_ParamLimits

0xf372,	// (0x000110c4) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00011431) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00011431) cell_app_pane_g

0xf37e,	// (0x000110d0) cell_app_pane_t1_ParamLimits

0xf37e,	// (0x000110d0) cell_app_pane_t1

0xf390,	// (0x000110e2) grid_highlight_pane_ParamLimits

0xf390,	// (0x000110e2) grid_highlight_pane

0xeee4,	// (0x00010c36) cell_highlight_pane_g1

0xeeec,	// (0x00010c3e) cell_highlight_pane_g2

0xeef4,	// (0x00010c46) cell_highlight_pane_g3

0xeefc,	// (0x00010c4e) cell_highlight_pane_g4

0xef04,	// (0x00010c56) cell_highlight_pane_g5

0xef0c,	// (0x00010c5e) cell_highlight_pane_g6

0xef14,	// (0x00010c66) cell_highlight_pane_g7

0xef1c,	// (0x00010c6e) cell_highlight_pane_g8

0xef24,	// (0x00010c76) cell_highlight_pane_g9

0xe42a,	// (0x0001017c) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x000113df) cell_highlight_pane_g

0xf3ab,	// (0x000110fd) bg_scroll_pane

0xf3ca,	// (0x0001111c) scroll_handle_pane

0xf41b,	// (0x0001116d) scroll_bg_pane_g1

0xf430,	// (0x00011182) scroll_bg_pane_g2

0xf448,	// (0x0001119a) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00011436) scroll_bg_pane_g

0xf45d,	// (0x000111af) scroll_handle_focus_pane_ParamLimits

0xf45d,	// (0x000111af) scroll_handle_focus_pane

0xf41b,	// (0x0001116d) scroll_handle_pane_g1

0xf46a,	// (0x000111bc) scroll_handle_pane_g2

0xf448,	// (0x0001119a) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001143d) scroll_handle_pane_g

0xef64,	// (0x00010cb6) bg_popup_sub_pane_cp21_ParamLimits

0xef64,	// (0x00010cb6) bg_popup_sub_pane_cp21

0xf47e,	// (0x000111d0) popup_fep_japan_predictive_window_t1_ParamLimits

0xf47e,	// (0x000111d0) popup_fep_japan_predictive_window_t1

0xf495,	// (0x000111e7) popup_fep_japan_predictive_window_t2_ParamLimits

0xf495,	// (0x000111e7) popup_fep_japan_predictive_window_t2

0xf4c8,	// (0x0001121a) popup_fep_japan_predictive_window_t3_ParamLimits

0xf4c8,	// (0x0001121a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00011444) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00011444) popup_fep_japan_predictive_window_t

0xe5a3,	// (0x000102f5) bg_popup_sub_pane_cp23

0xf4ff,	// (0x00011251) listscroll_japin_cand_pane

0xf507,	// (0x00011259) popup_fep_japan_candidate_window_t1

0xf515,	// (0x00011267) candidate_pane_ParamLimits

0xf515,	// (0x00011267) candidate_pane

0xf527,	// (0x00011279) scroll_pane_cp30

0xf531,	// (0x00011283) list_single_popup_jap_candidate_pane_ParamLimits

0xf531,	// (0x00011283) list_single_popup_jap_candidate_pane

0xe5a3,	// (0x000102f5) list_highlight_pane_cp30

0xf545,	// (0x00011297) list_single_popup_jap_candidate_pane_t1

0xa995,	// (0x0000c6e7) level_1_signal

0xa9a7,	// (0x0000c6f9) level_2_signal

0xa9ba,	// (0x0000c70c) level_3_signal

0xa9cd,	// (0x0000c71f) level_4_signal

0xa9e0,	// (0x0000c732) level_5_signal

0xa9f3,	// (0x0000c745) level_6_signal

0xaa06,	// (0x0000c758) level_7_signal

0xa995,	// (0x0000c6e7) level_1_battery

0xa9a7,	// (0x0000c6f9) level_2_battery

0xa9ba,	// (0x0000c70c) level_3_battery

0xa9cd,	// (0x0000c71f) level_4_battery

0xa9e0,	// (0x0000c732) level_5_battery

0xa9f3,	// (0x0000c745) level_6_battery

0xaa06,	// (0x0000c758) level_7_battery

0x004f,	// (0x00001da1) list_menu_pane_ParamLimits

0x004f,	// (0x00001da1) list_menu_pane

0x0065,	// (0x00001db7) scroll_pane_cp25_ParamLimits

0x0065,	// (0x00001db7) scroll_pane_cp25

0x007e,	// (0x00001dd0) list_double2_graphic_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double2_graphic_pane_cp2

0x007e,	// (0x00001dd0) list_double2_large_graphic_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double2_large_graphic_pane_cp2

0x007e,	// (0x00001dd0) list_double2_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double2_pane_cp2

0x007e,	// (0x00001dd0) list_double_graphic_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double_graphic_pane_cp2

0x007e,	// (0x00001dd0) list_double_large_graphic_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double_large_graphic_pane_cp2

0x007e,	// (0x00001dd0) list_double_number_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double_number_pane_cp2

0x007e,	// (0x00001dd0) list_double_pane_cp2_ParamLimits

0x007e,	// (0x00001dd0) list_double_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_2graphic_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_2graphic_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_graphic_heading_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_graphic_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_graphic_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_heading_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_heading_pane_cp2

0x00c1,	// (0x00001e13) list_single_large_graphic_pane_cp2_ParamLimits

0x00c1,	// (0x00001e13) list_single_large_graphic_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_number_heading_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_number_heading_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_number_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_number_pane_cp2

0xaa2c,	// (0x0000c77e) list_single_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_pane_cp2

0x0197,	// (0x00001ee9) bg_popup_sub_pane_cp22

0x01bc,	// (0x00001f0e) popup_side_volume_key_window_g1

0x01e6,	// (0x00001f38) popup_side_volume_key_window_t1

0x0204,	// (0x00001f56) volume_small_pane_cp1

0xe6b2,	// (0x00010404) bg_popup_sub_pane_cp24_ParamLimits

0xe6b2,	// (0x00010404) bg_popup_sub_pane_cp24

0x020c,	// (0x00001f5e) fep_china_uni_candidate_pane_ParamLimits

0x020c,	// (0x00001f5e) fep_china_uni_candidate_pane

0x0220,	// (0x00001f72) fep_china_uni_entry_pane

0x0230,	// (0x00001f82) popup_fep_china_uni_window_g1

0x024c,	// (0x00001f9e) fep_china_uni_entry_pane_g1

0x0256,	// (0x00001fa8) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00011475) fep_china_uni_entry_pane_g

0x0260,	// (0x00001fb2) fep_entry_item_pane

0x026a,	// (0x00001fbc) fep_candidate_item_pane

0x0272,	// (0x00001fc4) fep_china_uni_candidate_pane_g1

0x027c,	// (0x00001fce) fep_china_uni_candidate_pane_g2

0x0284,	// (0x00001fd6) fep_china_uni_candidate_pane_g3

0x028c,	// (0x00001fde) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001147a) fep_china_uni_candidate_pane_g

0xe42a,	// (0x0001017c) fep_entry_item_pane_g1

0x0296,	// (0x00001fe8) fep_entry_item_pane_t1_ParamLimits

0x0296,	// (0x00001fe8) fep_entry_item_pane_t1

0x02ac,	// (0x00001ffe) fep_candidate_item_pane_t1_ParamLimits

0x02ac,	// (0x00001ffe) fep_candidate_item_pane_t1

0x02c1,	// (0x00002013) fep_candidate_item_pane_t2_ParamLimits

0x02c1,	// (0x00002013) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00011483) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00011483) fep_candidate_item_pane_t

0xe6ca,	// (0x0001041c) list_highlight_pane_cp31_ParamLimits

0xe6ca,	// (0x0001041c) list_highlight_pane_cp31

0x02d3,	// (0x00002025) level_1_signal_lsc

0x02dc,	// (0x0000202e) level_2_signal_lsc

0x02e5,	// (0x00002037) level_3_signal_lsc

0x02ee,	// (0x00002040) level_4_signal_lsc

0x02f7,	// (0x00002049) level_5_signal_lsc

0x0300,	// (0x00002052) level_6_signal_lsc

0x0309,	// (0x0000205b) level_7_signal_lsc

0x0309,	// (0x0000205b) level_1_battery_lsc

0x0312,	// (0x00002064) level_2_battery_lsc

0x031b,	// (0x0000206d) level_3_battery_lsc

0x0324,	// (0x00002076) level_4_battery_lsc

0x032d,	// (0x0000207f) level_5_battery_lsc

0x0336,	// (0x00002088) level_6_battery_lsc

0x02d3,	// (0x00002025) level_7_battery_lsc

0x033f,	// (0x00002091) scroll_handle_focus_pane_g1

0x0348,	// (0x0000209a) scroll_handle_focus_pane_g2

0x0351,	// (0x000020a3) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00011488) scroll_handle_focus_pane_g

0xaabe,	// (0x0000c810) list_single_2graphic_pane_g1_ParamLimits

0xaabe,	// (0x0000c810) list_single_2graphic_pane_g1

0xa337,	// (0x0000c089) list_single_2graphic_pane_g2_ParamLimits

0xa337,	// (0x0000c089) list_single_2graphic_pane_g2

0x18f2,	// (0x00003644) list_single_2graphic_pane_g3_ParamLimits

0x18f2,	// (0x00003644) list_single_2graphic_pane_g3

0xaaca,	// (0x0000c81c) list_single_2graphic_pane_g4_ParamLimits

0xaaca,	// (0x0000c81c) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001148f) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001148f) list_single_2graphic_pane_g

0xaadb,	// (0x0000c82d) list_single_2graphic_pane_t1_ParamLimits

0xaadb,	// (0x0000c82d) list_single_2graphic_pane_t1

0xab09,	// (0x0000c85b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab09,	// (0x0000c85b) list_double2_graphic_large_graphic_pane_g1

0xa3a2,	// (0x0000c0f4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa3a2,	// (0x0000c0f4) list_double2_graphic_large_graphic_pane_g2

0xa3b3,	// (0x0000c105) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa3b3,	// (0x0000c105) list_double2_graphic_large_graphic_pane_g3

0x1abb,	// (0x0000380d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1abb,	// (0x0000380d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00011498) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00011498) list_double2_graphic_large_graphic_pane_g

0xab1b,	// (0x0000c86d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab1b,	// (0x0000c86d) list_double2_graphic_large_graphic_pane_t1

0xab31,	// (0x0000c883) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab31,	// (0x0000c883) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x000114a1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x000114a1) list_double2_graphic_large_graphic_pane_t

0x0663,	// (0x000023b5) popup_fast_swap_window_ParamLimits

0x0663,	// (0x000023b5) popup_fast_swap_window

0x0681,	// (0x000023d3) popup_side_volume_key_window

0x069f,	// (0x000023f1) stacon_top_pane

0x06a9,	// (0x000023fb) status_pane_ParamLimits

0x06a9,	// (0x000023fb) status_pane

0x069f,	// (0x000023f1) status_small_pane

0xe5a3,	// (0x000102f5) control_pane

0xe5a3,	// (0x000102f5) stacon_bottom_pane

0xed94,	// (0x00010ae6) scroll_pane_cp121

0xed8b,	// (0x00010add) set_content_pane

0xab43,	// (0x0000c895) bg_active_tab_pane_g1_cp1

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp1

0xab4c,	// (0x0000c89e) bg_active_tab_pane_g3_cp1

0xab43,	// (0x0000c895) bg_passive_tab_pane_g1_cp1

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp1

0xab4c,	// (0x0000c89e) bg_passive_tab_pane_g3_cp1

0xab55,	// (0x0000c8a7) bg_active_tab_pane_g1_cp2

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp2

0xab5e,	// (0x0000c8b0) bg_active_tab_pane_g3_cp2

0xab55,	// (0x0000c8a7) bg_passive_tab_pane_g1_cp2

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp2

0xab5e,	// (0x0000c8b0) bg_passive_tab_pane_g3_cp2

0xab67,	// (0x0000c8b9) bg_active_tab_pane_g1_cp3

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp3

0xab70,	// (0x0000c8c2) bg_active_tab_pane_g3_cp3

0xab67,	// (0x0000c8b9) bg_passive_tab_pane_g1_cp3

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp3

0xab70,	// (0x0000c8c2) bg_passive_tab_pane_g3_cp3

0xab79,	// (0x0000c8cb) bg_active_tab_pane_g1_cp4

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp4

0xab82,	// (0x0000c8d4) bg_active_tab_pane_g3_cp4

0xab79,	// (0x0000c8cb) bg_passive_tab_pane_g1_cp4

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp4

0xab82,	// (0x0000c8d4) bg_passive_tab_pane_g3_cp4

0x05bd,	// (0x0000230f) bg_active_tab_pane_g1_cp5

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp5

0x05c6,	// (0x00002318) bg_active_tab_pane_g3_cp5

0x05bd,	// (0x0000230f) bg_passive_tab_pane_g1_cp5

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp5

0x05c6,	// (0x00002318) bg_passive_tab_pane_g3_cp5

0x3b6f,	// (0x000058c1) list_set_graphic_pane_ParamLimits

0x3b6f,	// (0x000058c1) list_set_graphic_pane

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp4

0xab8b,	// (0x0000c8dd) list_set_graphic_pane_g1_ParamLimits

0xab8b,	// (0x0000c8dd) list_set_graphic_pane_g1

0xab97,	// (0x0000c8e9) list_set_graphic_pane_g2_ParamLimits

0xab97,	// (0x0000c8e9) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x000114a6) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x000114a6) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00011827) volume_small_pane_cp_g

0xabbb,	// (0x0000c90d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x0000c90d) list_double2_large_graphic_pane_g1_cp2

0xabc9,	// (0x0000c91b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xabc9,	// (0x0000c91b) list_double2_large_graphic_pane_g2_cp2

0x0633,	// (0x00002385) list_double2_large_graphic_pane_g3_cp2

0x063b,	// (0x0000238d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x063b,	// (0x0000238d) list_double2_large_graphic_pane_t1_cp2

0x0651,	// (0x000023a3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0651,	// (0x000023a3) list_double2_large_graphic_pane_t2_cp2

0xbe22,	// (0x0000db74) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbe22,	// (0x0000db74) list_double_large_graphic_pane_g1_cp2

0xbe35,	// (0x0000db87) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbe35,	// (0x0000db87) list_double_large_graphic_pane_g2_cp2

0x07c7,	// (0x00002519) list_double_large_graphic_pane_g3_cp2

0x2e94,	// (0x00004be6) list_double_large_graphic_pane_g4_cp

0x2e9c,	// (0x00004bee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2e9c,	// (0x00004bee) list_double_large_graphic_pane_t1_cp2

0x2eb3,	// (0x00004c05) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2eb3,	// (0x00004c05) list_double_large_graphic_pane_t2_cp2

0xabda,	// (0x0000c92c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xabda,	// (0x0000c92c) list_double2_graphic_pane_g1_cp2

0xabe8,	// (0x0000c93a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xabe8,	// (0x0000c93a) list_double2_graphic_pane_g2_cp2

0xabf9,	// (0x0000c94b) list_double2_graphic_pane_g3_cp2

0x06e0,	// (0x00002432) list_double2_graphic_pane_t1_cp2_ParamLimits

0x06e0,	// (0x00002432) list_double2_graphic_pane_t1_cp2

0x06f6,	// (0x00002448) list_double2_graphic_pane_t2_cp2_ParamLimits

0x06f6,	// (0x00002448) list_double2_graphic_pane_t2_cp2

0x0708,	// (0x0000245a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0708,	// (0x0000245a) list_single_number_heading_pane_g1_cp2

0x0714,	// (0x00002466) list_single_number_heading_pane_g2_cp2

0x071c,	// (0x0000246e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x071c,	// (0x0000246e) list_single_number_heading_pane_t1_cp2

0xac03,	// (0x0000c955) list_single_number_heading_pane_t2_cp2_ParamLimits

0xac03,	// (0x0000c955) list_single_number_heading_pane_t2_cp2

0x0746,	// (0x00002498) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0746,	// (0x00002498) list_single_number_heading_pane_t3_cp2

0x0708,	// (0x0000245a) list_single_heading_pane_g1_cp2_ParamLimits

0x0708,	// (0x0000245a) list_single_heading_pane_g1_cp2

0x0714,	// (0x00002466) list_single_heading_pane_g2_cp2

0x071c,	// (0x0000246e) list_single_heading_pane_t1_cp2_ParamLimits

0x071c,	// (0x0000246e) list_single_heading_pane_t1_cp2

0xbe0e,	// (0x0000db60) list_single_heading_pane_t2_cp2_ParamLimits

0xbe0e,	// (0x0000db60) list_single_heading_pane_t2_cp2

0x2bac,	// (0x000048fe) list_double_graphic_pane_g1_cp2_ParamLimits

0x2bac,	// (0x000048fe) list_double_graphic_pane_g1_cp2

0x2bb8,	// (0x0000490a) list_double_graphic_pane_g2_cp2_ParamLimits

0x2bb8,	// (0x0000490a) list_double_graphic_pane_g2_cp2

0x2bc7,	// (0x00004919) list_double_graphic_pane_g3_cp2

0x2bcf,	// (0x00004921) list_double_graphic_pane_t1_cp2_ParamLimits

0x2bcf,	// (0x00004921) list_double_graphic_pane_t1_cp2

0x2be5,	// (0x00004937) list_double_graphic_pane_t2_cp2_ParamLimits

0x2be5,	// (0x00004937) list_double_graphic_pane_t2_cp2

0x07bb,	// (0x0000250d) list_double_number_pane_g1_cp2_ParamLimits

0x07bb,	// (0x0000250d) list_double_number_pane_g1_cp2

0x07c7,	// (0x00002519) list_double_number_pane_g2_cp2

0xbda8,	// (0x0000dafa) list_double_number_pane_t1_cp2_ParamLimits

0xbda8,	// (0x0000dafa) list_double_number_pane_t1_cp2

0x2b84,	// (0x000048d6) list_double_number_pane_t2_cp2_ParamLimits

0x2b84,	// (0x000048d6) list_double_number_pane_t2_cp2

0x2b9a,	// (0x000048ec) list_double_number_pane_t3_cp2_ParamLimits

0x2b9a,	// (0x000048ec) list_double_number_pane_t3_cp2

0xbce5,	// (0x0000da37) list_single_graphic_pane_g1_cp2_ParamLimits

0xbce5,	// (0x0000da37) list_single_graphic_pane_g1_cp2

0x0821,	// (0x00002573) list_single_graphic_pane_g2_cp2_ParamLimits

0x0821,	// (0x00002573) list_single_graphic_pane_g2_cp2

0x082d,	// (0x0000257f) list_single_graphic_pane_g3_cp2

0x2a1e,	// (0x00004770) list_single_graphic_pane_t1_cp2_ParamLimits

0x2a1e,	// (0x00004770) list_single_graphic_pane_t1_cp2

0x0821,	// (0x00002573) list_single_number_pane_g1_cp2_ParamLimits

0x0821,	// (0x00002573) list_single_number_pane_g1_cp2

0x082d,	// (0x0000257f) list_single_number_pane_g2_cp2

0x2a1e,	// (0x00004770) list_single_number_pane_t1_cp2_ParamLimits

0x2a1e,	// (0x00004770) list_single_number_pane_t1_cp2

0xbcd1,	// (0x0000da23) list_single_number_pane_t2_cp2_ParamLimits

0xbcd1,	// (0x0000da23) list_single_number_pane_t2_cp2

0xabc9,	// (0x0000c91b) list_double2_pane_g1_cp2_ParamLimits

0xabc9,	// (0x0000c91b) list_double2_pane_g1_cp2

0x0633,	// (0x00002385) list_double2_pane_g2_cp2

0x0793,	// (0x000024e5) list_double2_pane_t1_cp2_ParamLimits

0x0793,	// (0x000024e5) list_double2_pane_t1_cp2

0x07a9,	// (0x000024fb) list_double2_pane_t2_cp2_ParamLimits

0x07a9,	// (0x000024fb) list_double2_pane_t2_cp2

0x07bb,	// (0x0000250d) list_double_pane_g1_cp2_ParamLimits

0x07bb,	// (0x0000250d) list_double_pane_g1_cp2

0x07c7,	// (0x00002519) list_double_pane_g2_cp2

0x07cf,	// (0x00002521) list_double_pane_t1_cp2_ParamLimits

0x07cf,	// (0x00002521) list_double_pane_t1_cp2

0x07e5,	// (0x00002537) list_double_pane_t2_cp2_ParamLimits

0x07e5,	// (0x00002537) list_double_pane_t2_cp2

0x0811,	// (0x00002563) list_single_pane_cp2_g3

0x0821,	// (0x00002573) list_single_pane_g1_cp2_ParamLimits

0x0821,	// (0x00002573) list_single_pane_g1_cp2

0x082d,	// (0x0000257f) list_single_pane_g2_cp2

0x0835,	// (0x00002587) list_single_pane_t1_cp2_ParamLimits

0x0835,	// (0x00002587) list_single_pane_t1_cp2

0xac31,	// (0x0000c983) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xac31,	// (0x0000c983) list_single_large_graphic_pane_g1_cp2

0x085b,	// (0x000025ad) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x085b,	// (0x000025ad) list_single_large_graphic_pane_g2_cp2

0x0867,	// (0x000025b9) list_single_large_graphic_pane_g3_cp2

0x086f,	// (0x000025c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x086f,	// (0x000025c1) list_single_large_graphic_pane_g4_cp1

0x0889,	// (0x000025db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0889,	// (0x000025db) list_single_large_graphic_pane_t1_cp2

0x288d,	// (0x000045df) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x288d,	// (0x000045df) list_single_graphic_heading_pane_g1_cp2

0xbb56,	// (0x0000d8a8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbb56,	// (0x0000d8a8) list_single_graphic_heading_pane_g4_cp2

0x082d,	// (0x0000257f) list_single_graphic_heading_pane_g5_cp2

0x2899,	// (0x000045eb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2899,	// (0x000045eb) list_single_graphic_heading_pane_t1_cp2

0xbb67,	// (0x0000d8b9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbb67,	// (0x0000d8b9) list_single_graphic_heading_pane_t2_cp2

0x284e,	// (0x000045a0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x284e,	// (0x000045a0) list_single_2graphic_pane_g1_cp2

0xbb56,	// (0x0000d8a8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbb56,	// (0x0000d8a8) list_single_2graphic_pane_g2_cp2

0x082d,	// (0x0000257f) list_single_2graphic_pane_g3_cp2

0x286b,	// (0x000045bd) list_single_2graphic_pane_g4_cp2_ParamLimits

0x286b,	// (0x000045bd) list_single_2graphic_pane_g4_cp2

0x2877,	// (0x000045c9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2877,	// (0x000045c9) list_single_2graphic_pane_t1_cp2

0xe42a,	// (0x0001017c) list_highlight_pane_g10_cp1

0x2426,	// (0x00004178) list_highlight_pane_g1_cp1

0x242e,	// (0x00004180) list_highlight_pane_g2_cp1

0x2436,	// (0x00004188) list_highlight_pane_g3_cp1

0x243e,	// (0x00004190) list_highlight_pane_g4_cp1

0x2446,	// (0x00004198) list_highlight_pane_g5_cp1

0x244e,	// (0x000041a0) list_highlight_pane_g6_cp1

0x2456,	// (0x000041a8) list_highlight_pane_g7_cp1

0x245e,	// (0x000041b0) list_highlight_pane_g8_cp1

0x2466,	// (0x000041b8) list_highlight_pane_g9_cp1

0xbb1c,	// (0x0000d86e) form_field_slider_pane_t3

0xbb2a,	// (0x0000d87c) form_field_slider_pane_t4

0x2362,	// (0x000040b4) slider_form_pane_ParamLimits

0x2362,	// (0x000040b4) slider_form_pane

0xe5a3,	// (0x000102f5) control_abbreviations

0xe5a3,	// (0x000102f5) control_conventions

0xe5a3,	// (0x000102f5) control_definitions

0xe5a3,	// (0x000102f5) format_table_attribute

0x2cc0,	// (0x00004a12) bg_popup_preview_window_pane_g9

0xe5a3,	// (0x000102f5) format_table_data2

0xe5a3,	// (0x000102f5) format_table_data3

0xe5a3,	// (0x000102f5) format_table_data_example

0x0008,

0xe5a3,	// (0x000102f5) intro_purpose

0xf8e4,	// (0x00011636) bg_popup_preview_window_pane_g

0xe5a3,	// (0x000102f5) texts_category

0xe5a3,	// (0x000102f5) texts_graphics

0x089f,	// (0x000025f1) text_digital

0x08ae,	// (0x00002600) text_primary

0x08bd,	// (0x0000260f) text_primary_small

0x08cc,	// (0x0000261e) text_secondary

0x08db,	// (0x0000262d) text_title

0x35b5,	// (0x00005307) bg_passive_tab_pane_g1_cp3_srt

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp3_srt

0x35be,	// (0x00005310) bg_passive_tab_pane_g3_cp3_srt

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp3_srt_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp3_srt

0x35c7,	// (0x00005319) tabs_4_active_pane_srt_g1

0xc180,	// (0x0000ded2) tabs_4_active_pane_srt_t1_ParamLimits

0xc180,	// (0x0000ded2) tabs_4_active_pane_srt_t1

0x35b5,	// (0x00005307) bg_active_tab_pane_g1_cp3_copy1

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp3_copy1

0x35be,	// (0x00005310) bg_active_tab_pane_g3_cp3_copy1

0xe6ca,	// (0x0001041c) tabs_2_long_active_pane_srt_ParamLimits

0xe6ca,	// (0x0001041c) tabs_2_long_active_pane_srt

0xe6ca,	// (0x0001041c) tabs_2_long_passive_pane_srt_ParamLimits

0xe6ca,	// (0x0001041c) tabs_2_long_passive_pane_srt

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp4_srt

0x319c,	// (0x00004eee) bg_passive_tab_pane_g1_cp4_srt

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp4_srt

0x31a5,	// (0x00004ef7) bg_passive_tab_pane_g3_cp4_srt

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp4_srt_ParamLimits

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp4_srt

0xbf31,	// (0x0000dc83) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbf31,	// (0x0000dc83) tabs_2_long_active_pane_srt_t1

0x319c,	// (0x00004eee) bg_active_tab_pane_g1_cp4_srt

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp4_srt

0x31a5,	// (0x00004ef7) bg_active_tab_pane_g3_cp4_srt

0xe6b2,	// (0x00010404) tabs_3_long_active_pane_srt_ParamLimits

0xe6b2,	// (0x00010404) tabs_3_long_active_pane_srt

0xe6b2,	// (0x00010404) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe6b2,	// (0x00010404) tabs_3_long_passive_pane_cp_srt

0xe6b2,	// (0x00010404) tabs_3_long_passive_pane_srt_ParamLimits

0xe6b2,	// (0x00010404) tabs_3_long_passive_pane_srt

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp5_srt

0x05bd,	// (0x0000230f) bg_passive_tab_pane_g1_cp5_srt

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp5_srt

0x05c6,	// (0x00002318) bg_passive_tab_pane_g3_cp5_srt

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp5_srt_ParamLimits

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp5_srt

0xbf1b,	// (0x0000dc6d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbf1b,	// (0x0000dc6d) tabs_3_long_active_pane_srt_t1

0x05bd,	// (0x0000230f) bg_active_tab_pane_g1_cp5_srt

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp5_srt

0x05c6,	// (0x00002318) bg_active_tab_pane_g3_cp5_srt

0x317c,	// (0x00004ece) navi_text_pane_srt_t1

0x3174,	// (0x00004ec6) navi_icon_pane_srt_g1

0x0b4f,	// (0x000028a1) midp_editing_number_pane_srt

0x08ea,	// (0x0000263c) midp_ticker_pane_srt

0x0b57,	// (0x000028a9) midp_ticker_pane_srt_g1

0x0b5f,	// (0x000028b1) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x000114c5) midp_ticker_pane_srt_g

0x0b67,	// (0x000028b9) midp_ticker_pane_srt_t1

0x3165,	// (0x00004eb7) midp_editing_number_pane_t1_copy1

0x0e5f,	// (0x00002bb1) listscroll_midp_pane

0x0e5f,	// (0x00002bb1) midp_form_pane

0x0954,	// (0x000026a6) midp_info_popup_window_ParamLimits

0x0954,	// (0x000026a6) midp_info_popup_window

0xef64,	// (0x00010cb6) bg_popup_sub_pane_cp50_ParamLimits

0xef64,	// (0x00010cb6) bg_popup_sub_pane_cp50

0x205c,	// (0x00003dae) listscroll_midp_info_pane_ParamLimits

0x205c,	// (0x00003dae) listscroll_midp_info_pane

0x2044,	// (0x00003d96) listscroll_form_midp_pane_ParamLimits

0x2044,	// (0x00003d96) listscroll_form_midp_pane

0x2050,	// (0x00003da2) scroll_bar_cp050

0xbb10,	// (0x0000d862) list_midp_pane

0x4392,	// (0x000060e4) signal_pane_g2_cp

0x1f5e,	// (0x00003cb0) listscroll_midp_info_pane_t1_ParamLimits

0x1f5e,	// (0x00003cb0) listscroll_midp_info_pane_t1

0x1f76,	// (0x00003cc8) listscroll_midp_info_pane_t2_ParamLimits

0x1f76,	// (0x00003cc8) listscroll_midp_info_pane_t2

0x1fb4,	// (0x00003d06) listscroll_midp_info_pane_t3_ParamLimits

0x1fb4,	// (0x00003d06) listscroll_midp_info_pane_t3

0x1fee,	// (0x00003d40) listscroll_midp_info_pane_t4_ParamLimits

0x1fee,	// (0x00003d40) listscroll_midp_info_pane_t4

0x0003,

0xf81f,	// (0x00011571) listscroll_midp_info_pane_t_ParamLimits

0xf81f,	// (0x00011571) listscroll_midp_info_pane_t

0xefe4,	// (0x00010d36) scroll_pane_cp21

0x1ef8,	// (0x00003c4a) form_midp_field_choice_group_pane

0x1f01,	// (0x00003c53) form_midp_field_text_pane

0x1f44,	// (0x00003c96) form_midp_field_time_pane

0x1f4c,	// (0x00003c9e) form_midp_gauge_slider_pane

0x1f55,	// (0x00003ca7) form_midp_gauge_wait_pane

0xe5a3,	// (0x000102f5) form_midp_image_pane

0xbaf3,	// (0x0000d845) list_single_midp_pane_ParamLimits

0xbaf3,	// (0x0000d845) list_single_midp_pane

0xbacb,	// (0x0000d81d) form_midp_field_text_pane_t1

0x1beb,	// (0x0000393d) input_focus_pane_cp050

0x1ec7,	// (0x00003c19) list_midp_form_text_pane

0x1e6b,	// (0x00003bbd) form_midp_field_choice_group_pane_t1

0x1e79,	// (0x00003bcb) input_focus_pane_cp051

0x1e8d,	// (0x00003bdf) list_midp_choice_pane

0xe5a3,	// (0x000102f5) status_idle_pane

0x1e4f,	// (0x00003ba1) form_midp_field_time_pane_t1

0xe42a,	// (0x0001017c) wait_anim_pane_g2_copy1

0x1e5d,	// (0x00003baf) form_midp_field_time_pane_t2

0x0001,

0x0a04,	// (0x00002756) aid_navinavi_width_2_pane

0xf81a,	// (0x0001156c) form_midp_field_time_pane_t

0xe5a3,	// (0x000102f5) input_focus_pane_cp052

0xe5a3,	// (0x000102f5) bg_input_focus_pane_cp040

0x1e0f,	// (0x00003b61) form_midp_gauge_slider_pane_t1

0x1e1d,	// (0x00003b6f) form_midp_gauge_slider_pane_t2

0xbaaf,	// (0x0000d801) form_midp_gauge_slider_pane_t3

0xbabd,	// (0x0000d80f) form_midp_gauge_slider_pane_t4

0x0003,

0xf811,	// (0x00011563) form_midp_gauge_slider_pane_t

0x1e47,	// (0x00003b99) form_midp_slider_pane

0xe6ca,	// (0x0001041c) bg_input_focus_pane_cp041_ParamLimits

0xe6ca,	// (0x0001041c) bg_input_focus_pane_cp041

0x1ddc,	// (0x00003b2e) form_midp_gauge_wait_pane_t1_ParamLimits

0x1ddc,	// (0x00003b2e) form_midp_gauge_wait_pane_t1

0x1dee,	// (0x00003b40) form_midp_gauge_wait_pane_t2_ParamLimits

0x1dee,	// (0x00003b40) form_midp_gauge_wait_pane_t2

0x0001,

0xf80c,	// (0x0001155e) form_midp_gauge_wait_pane_t_ParamLimits

0xf80c,	// (0x0001155e) form_midp_gauge_wait_pane_t

0x1e00,	// (0x00003b52) form_midp_wait_pane_ParamLimits

0x1e00,	// (0x00003b52) form_midp_wait_pane

0x1da4,	// (0x00003af6) form_midp_image_pane_g1

0x1dad,	// (0x00003aff) form_midp_image_pane_t1

0x1dbc,	// (0x00003b0e) form_midp_image_pane_t2

0x1dcb,	// (0x00003b1d) form_midp_image_pane_t3

0x0002,

0xf805,	// (0x00011557) form_midp_image_pane_t

0x1d8c,	// (0x00003ade) list_single_midp_pane_g1

0x1d95,	// (0x00003ae7) list_single_midp_pane_t1

0xba98,	// (0x0000d7ea) list_midp_form_item_pane_ParamLimits

0xba98,	// (0x0000d7ea) list_midp_form_item_pane

0x09ac,	// (0x000026fe) list_midp_form_item_pane_t1

0x09bb,	// (0x0000270d) midp_ticker_pane_g1

0x09c7,	// (0x00002719) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x000114ab) midp_ticker_pane_g

0xacd6,	// (0x0000ca28) midp_ticker_pane_t1

0xc0dc,	// (0x0000de2e) midp_editing_number_pane_t1

0x3463,	// (0x000051b5) midp_editing_number_pane

0x3472,	// (0x000051c4) midp_ticker_pane

0x312d,	// (0x00004e7f) ai_message_heading_pane

0xe5a3,	// (0x000102f5) bg_popup_window_pane_cp14

0x3135,	// (0x00004e87) listscroll_ai_message_pane

0x30b3,	// (0x00004e05) ai_message_heading_pane_g1_ParamLimits

0x30b3,	// (0x00004e05) ai_message_heading_pane_g1

0x30bf,	// (0x00004e11) ai_message_heading_pane_g2_ParamLimits

0x30bf,	// (0x00004e11) ai_message_heading_pane_g2

0x30cd,	// (0x00004e1f) ai_message_heading_pane_g3_ParamLimits

0x30cd,	// (0x00004e1f) ai_message_heading_pane_g3

0x30d9,	// (0x00004e2b) ai_message_heading_pane_g4_ParamLimits

0x30d9,	// (0x00004e2b) ai_message_heading_pane_g4

0x0003,

0xf946,	// (0x00011698) ai_message_heading_pane_g_ParamLimits

0xf946,	// (0x00011698) ai_message_heading_pane_g

0x30e5,	// (0x00004e37) ai_message_heading_pane_t1_ParamLimits

0x30e5,	// (0x00004e37) ai_message_heading_pane_t1

0x30ff,	// (0x00004e51) ai_message_heading_pane_t2_ParamLimits

0x30ff,	// (0x00004e51) ai_message_heading_pane_t2

0x0001,

0xf94f,	// (0x000116a1) ai_message_heading_pane_t_ParamLimits

0xf94f,	// (0x000116a1) ai_message_heading_pane_t

0x3113,	// (0x00004e65) bg_popup_heading_pane_cp1_ParamLimits

0x3113,	// (0x00004e65) bg_popup_heading_pane_cp1

0x30a1,	// (0x00004df3) list_ai_message_pane_ParamLimits

0x30a1,	// (0x00004df3) list_ai_message_pane

0xefe4,	// (0x00010d36) scroll_pane_cp10

0x2fd9,	// (0x00004d2b) list_ai_message_pane_g1

0x2fe1,	// (0x00004d33) list_ai_message_pane_g2

0x0001,

0xf923,	// (0x00011675) list_ai_message_pane_g

0x2fe9,	// (0x00004d3b) list_ai_message_pane_t1_ParamLimits

0x2fe9,	// (0x00004d3b) list_ai_message_pane_t1

0x2ffe,	// (0x00004d50) list_ai_message_pane_t2_ParamLimits

0x2ffe,	// (0x00004d50) list_ai_message_pane_t2

0x3013,	// (0x00004d65) list_ai_message_pane_t3_ParamLimits

0x3013,	// (0x00004d65) list_ai_message_pane_t3

0x3028,	// (0x00004d7a) list_ai_message_pane_t4_ParamLimits

0x3028,	// (0x00004d7a) list_ai_message_pane_t4

0x0003,

0xf928,	// (0x0001167a) list_ai_message_pane_t_ParamLimits

0xf928,	// (0x0001167a) list_ai_message_pane_t

0xbeef,	// (0x0000dc41) cell_ai_soft_ind_pane_ParamLimits

0xbeef,	// (0x0000dc41) cell_ai_soft_ind_pane

0x09e5,	// (0x00002737) cell_ai_soft_ind_pane_g1_ParamLimits

0x09e5,	// (0x00002737) cell_ai_soft_ind_pane_g1

0xe5a3,	// (0x000102f5) grid_highlight_cp1

0x09f2,	// (0x00002744) text_secondary_cp56_ParamLimits

0x09f2,	// (0x00002744) text_secondary_cp56

0x2f97,	// (0x00004ce9) example_general_pane_ParamLimits

0x2f97,	// (0x00004ce9) example_general_pane

0x2fa3,	// (0x00004cf5) example_parent_pane_g1_ParamLimits

0x2fa3,	// (0x00004cf5) example_parent_pane_g1

0x2faf,	// (0x00004d01) example_parent_pane_t1_ParamLimits

0x2faf,	// (0x00004d01) example_parent_pane_t1

0xb2ad,	// (0x0000cfff) popup_preview_text_window_ParamLimits

0xb2ad,	// (0x0000cfff) popup_preview_text_window

0x0819,	// (0x0000256b) list_single_pane_cp2_g4

0xe948,	// (0x0001069a) bg_popup_preview_window_pane_ParamLimits

0xe948,	// (0x0001069a) bg_popup_preview_window_pane

0x2cca,	// (0x00004a1c) popup_preview_text_window_t1_ParamLimits

0x2cca,	// (0x00004a1c) popup_preview_text_window_t1

0x2ce8,	// (0x00004a3a) popup_preview_text_window_t2_ParamLimits

0x2ce8,	// (0x00004a3a) popup_preview_text_window_t2

0x2d31,	// (0x00004a83) popup_preview_text_window_t3_ParamLimits

0x2d31,	// (0x00004a83) popup_preview_text_window_t3

0x2d76,	// (0x00004ac8) popup_preview_text_window_t4_ParamLimits

0x2d76,	// (0x00004ac8) popup_preview_text_window_t4

0x0004,

0xf8f7,	// (0x00011649) popup_preview_text_window_t_ParamLimits

0xf8f7,	// (0x00011649) popup_preview_text_window_t

0x2df4,	// (0x00004b46) scroll_pane_cp11

0x1a4e,	// (0x000037a0) bg_popup_preview_window_pane_g1

0x2c7e,	// (0x000049d0) bg_popup_preview_window_pane_g2

0x2c88,	// (0x000049da) bg_popup_preview_window_pane_g3

0x2c92,	// (0x000049e4) bg_popup_preview_window_pane_g4

0x2c9c,	// (0x000049ee) bg_popup_preview_window_pane_g5

0x2ca6,	// (0x000049f8) bg_popup_preview_window_pane_g6

0x2cae,	// (0x00004a00) bg_popup_preview_window_pane_g7

0x2cb6,	// (0x00004a08) bg_popup_preview_window_pane_g8

0xe440,	// (0x00010192) aid_popup_width_pane

0xb21d,	// (0x0000cf6f) popup_midp_note_alarm_window_ParamLimits

0xb21d,	// (0x0000cf6f) popup_midp_note_alarm_window

0xee14,	// (0x00010b66) data_form_pane_ParamLimits

0xa73e,	// (0x0000c490) form_field_data_pane_g1

0xa748,	// (0x0000c49a) form_field_data_pane_t1_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_ParamLimits

0xee2e,	// (0x00010b80) data_form_wide_pane_ParamLimits

0xee3a,	// (0x00010b8c) form_field_data_wide_pane_g1

0xee66,	// (0x00010bb8) form_field_data_wide_pane_t1_ParamLimits

0xeafd,	// (0x0001084f) input_focus_pane_cp6_ParamLimits

0xa889,	// (0x0000c5db) input_popup_find_pane_g1_ParamLimits

0xa889,	// (0x0000c5db) input_popup_find_pane_g1

0xf2ca,	// (0x0001101c) aid_navi_side_left_pane

0xf2df,	// (0x00011031) aid_navi_side_right_pane

0x2521,	// (0x00004273) bg_popup_window_pane_cp30_ParamLimits

0x2521,	// (0x00004273) bg_popup_window_pane_cp30

0x259b,	// (0x000042ed) popup_midp_note_alarm_window_g1_ParamLimits

0x259b,	// (0x000042ed) popup_midp_note_alarm_window_g1

0x25cb,	// (0x0000431d) popup_midp_note_alarm_window_t1_ParamLimits

0x25cb,	// (0x0000431d) popup_midp_note_alarm_window_t1

0x266c,	// (0x000043be) popup_midp_note_alarm_window_t2_ParamLimits

0x266c,	// (0x000043be) popup_midp_note_alarm_window_t2

0x271a,	// (0x0000446c) popup_midp_note_alarm_window_t3_ParamLimits

0x271a,	// (0x0000446c) popup_midp_note_alarm_window_t3

0x274c,	// (0x0000449e) popup_midp_note_alarm_window_t4_ParamLimits

0x274c,	// (0x0000449e) popup_midp_note_alarm_window_t4

0x2772,	// (0x000044c4) popup_midp_note_alarm_window_t5_ParamLimits

0x2772,	// (0x000044c4) popup_midp_note_alarm_window_t5

0x000a,

0xf894,	// (0x000115e6) popup_midp_note_alarm_window_t_ParamLimits

0xf894,	// (0x000115e6) popup_midp_note_alarm_window_t

0x281e,	// (0x00004570) wait_bar_pane_cp1_ParamLimits

0x281e,	// (0x00004570) wait_bar_pane_cp1

0xe5a3,	// (0x000102f5) wait_anim_pane_copy1

0xe5a3,	// (0x000102f5) wait_border_pane_copy1

0x2206,	// (0x00003f58) wait_border_pane_g1_copy1

0xee80,	// (0x00010bd2) form_field_popup_pane_g1

0xa762,	// (0x0000c4b4) form_field_popup_pane_t1_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_cp7_ParamLimits

0xee88,	// (0x00010bda) list_form_pane_ParamLimits

0xee94,	// (0x00010be6) form_field_popup_wide_pane_g1

0xee9c,	// (0x00010bee) form_field_popup_wide_pane_t1_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_cp8_ParamLimits

0xeeb1,	// (0x00010c03) list_form_wide_pane_ParamLimits

0x3642,	// (0x00005394) aid_size_cell_graphic_pane

0xa7e1,	// (0x0000c533) data_form_pane_t1_ParamLimits

0xc0c0,	// (0x0000de12) data_form_wide_pane_t1_ParamLimits

0xb6af,	// (0x0000d401) bg_status_flat_pane

0x9f7e,	// (0x0000bcd0) title_pane_t1_ParamLimits

0xe67a,	// (0x000103cc) title_pane_t2_ParamLimits

0xe6a0,	// (0x000103f2) title_pane_t3_ParamLimits

0xf55d,	// (0x000112af) title_pane_t_ParamLimits

0xa995,	// (0x0000c6e7) level_1_signal_ParamLimits

0xa9a7,	// (0x0000c6f9) level_2_signal_ParamLimits

0xa9ba,	// (0x0000c70c) level_3_signal_ParamLimits

0xa9cd,	// (0x0000c71f) level_4_signal_ParamLimits

0xa9e0,	// (0x0000c732) level_5_signal_ParamLimits

0xa9f3,	// (0x0000c745) level_6_signal_ParamLimits

0xaa06,	// (0x0000c758) level_7_signal_ParamLimits

0xa995,	// (0x0000c6e7) level_1_battery_ParamLimits

0xa9a7,	// (0x0000c6f9) level_2_battery_ParamLimits

0xa9ba,	// (0x0000c70c) level_3_battery_ParamLimits

0xa9cd,	// (0x0000c71f) level_4_battery_ParamLimits

0xa9e0,	// (0x0000c732) level_5_battery_ParamLimits

0xa9f3,	// (0x0000c745) level_6_battery_ParamLimits

0xaa06,	// (0x0000c758) level_7_battery_ParamLimits

0x2426,	// (0x00004178) bg_status_flat_pane_g1

0x242e,	// (0x00004180) bg_status_flat_pane_g2

0x2436,	// (0x00004188) bg_status_flat_pane_g3

0x243e,	// (0x00004190) bg_status_flat_pane_g4

0x2446,	// (0x00004198) bg_status_flat_pane_g5

0x244e,	// (0x000041a0) bg_status_flat_pane_g6

0x2456,	// (0x000041a8) bg_status_flat_pane_g7

0xa012,	// (0x0000bd64) tabs_3_active_pane_t1_ParamLimits

0xa012,	// (0x0000bd64) tabs_3_passive_pane_t1_ParamLimits

0xa02c,	// (0x0000bd7e) tabs_4_active_pane_t1_ParamLimits

0xa02c,	// (0x0000bd7e) tabs_4_1_passive_pane_t1_ParamLimits

0xa89f,	// (0x0000c5f1) tabs_2_active_pane_t1_ParamLimits

0xa89f,	// (0x0000c5f1) tabs_2_passive_pane_t1_ParamLimits

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp4_ParamLimits

0xa8b1,	// (0x0000c603) tabs_2_long_active_pane_t1_ParamLimits

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp4_ParamLimits

0x1b0c,	// (0x0000385e) list_single_midp_graphic_pane_t1_ParamLimits

0xe6ca,	// (0x0001041c) bg_active_tab_pane_cp5_ParamLimits

0xa8c4,	// (0x0000c616) tabs_3_long_active_pane_t1_ParamLimits

0x0e5f,	// (0x00002bb1) bg_passive_tab_pane_cp5_ParamLimits

0x1b0c,	// (0x0000385e) list_single_midp_graphic_pane_t1

0xb6af,	// (0x0000d401) bg_status_flat_pane_ParamLimits

0x1620,	// (0x00003372) indicator_pane_cp2_ParamLimits

0x1620,	// (0x00003372) indicator_pane_cp2

0xb845,	// (0x0000d597) navi_pane_srt_ParamLimits

0xb845,	// (0x0000d597) navi_pane_srt

0x1787,	// (0x000034d9) popup_clock_digital_analogue_window_cp1

0xe7b1,	// (0x00010503) indicator_pane_t1

0x08ea,	// (0x0000263c) copy_highlight_pane

0x08ea,	// (0x0000263c) cursor_graphics_pane

0x08ea,	// (0x0000263c) graphic_within_text_pane

0x08ea,	// (0x0000263c) link_highlight_pane

0x2db7,	// (0x00004b09) popup_preview_text_window_t5_ParamLimits

0x2db7,	// (0x00004b09) popup_preview_text_window_t5

0x0a0e,	// (0x00002760) cursor_digital_pane

0x0a0e,	// (0x00002760) cursor_primary_pane

0x0a1f,	// (0x00002771) cursor_primary_small_pane

0x0a27,	// (0x00002779) cursor_secondary_pane

0x0a2f,	// (0x00002781) cursor_title_pane

0x0a0e,	// (0x00002760) link_highlight_digital_pane

0x0a16,	// (0x00002768) link_highlight_primary_pane

0x0a1f,	// (0x00002771) link_highlight_primary_small_pane

0x0a27,	// (0x00002779) link_highlight_secondary_pane

0x0a2f,	// (0x00002781) link_highlight_title_pane

0x0a0e,	// (0x00002760) copy_highlight_digital_pane

0x0a0e,	// (0x00002760) copy_highlight_primary_pane

0x0a1f,	// (0x00002771) copy_highlight_primary_small_pane

0x0a27,	// (0x00002779) copy_highlight_secondary_pane

0x0a2f,	// (0x00002781) copy_highlight_title_pane

0x0a27,	// (0x00002779) graphic_text_digital_pane

0x24c4,	// (0x00004216) graphic_text_primary_pane

0x24cd,	// (0x0000421f) graphic_text_primary_small_pane

0x0a1f,	// (0x00002771) graphic_text_secondary_pane

0x0a0e,	// (0x00002760) graphic_text_title_pane

0xace8,	// (0x0000ca3a) cursor_primary_pane_g1

0x24b6,	// (0x00004208) cursor_text_primary_t1

0xbb4c,	// (0x0000d89e) cursor_primary_small_pane_g1

0x24a8,	// (0x000041fa) cursor_text_primary_small_t1

0xbb42,	// (0x0000d894) cursor_primary_small_pane_g1_copy1

0x2490,	// (0x000041e2) cursor_text_primary_small_t1_copy1

0x246e,	// (0x000041c0) cursor_text_title_t1

0xbb38,	// (0x0000d88a) cursor_title_pane_g1

0xace8,	// (0x0000ca3a) cursor_digital_pane_g1

0x0a41,	// (0x00002793) cursor_text_digital_t1

0x0a4f,	// (0x000027a1) link_highlight_primary_pane_g1

0x2417,	// (0x00004169) link_highlight_primary_pane_t1

0x0a4f,	// (0x000027a1) link_highlight_primary_small_pane_g1

0x0a57,	// (0x000027a9) link_highlight_primary_small_pane_t1

0x0a66,	// (0x000027b8) link_highlight_secondary_pane_g1

0x0a6e,	// (0x000027c0) link_highlight_secondary_pane_t1

0x238b,	// (0x000040dd) link_highlight_title_pane_g1

0x2393,	// (0x000040e5) link_highlight_title_pane_t1

0x2374,	// (0x000040c6) link_highlight_digital_pane_g1

0x237c,	// (0x000040ce) link_highlight_digital_pane_t1

0x223c,	// (0x00003f8e) copy_highlight_primary_pane_g1

0x2253,	// (0x00003fa5) copy_highlight_primary_pane_t1

0x223c,	// (0x00003f8e) copy_highlight_primary_small_pane_g1

0x2244,	// (0x00003f96) copy_highlight_primary_small_pane_t1

0x0a7d,	// (0x000027cf) copy_highlight_secondary_pane_g1

0x0a85,	// (0x000027d7) copy_highlight_secondary_pane_t1

0x2225,	// (0x00003f77) copy_highlight_title_pane_g1

0x222d,	// (0x00003f7f) copy_highlight_title_pane_t1

0x223c,	// (0x00003f8e) copy_highlight_digital_pane_g1

0x38ca,	// (0x0000561c) copy_highlight_digital_pane_t1

0x381e,	// (0x00005570) graphic_text_primary_pane_g1

0x38ae,	// (0x00005600) graphic_text_primary_pane_t1

0x38bc,	// (0x0000560e) graphic_text_primary_pane_t2

0x0001,

0xf9c3,	// (0x00011715) graphic_text_primary_pane_t

0x388a,	// (0x000055dc) graphic_text_primary_small_pane_g1

0x3892,	// (0x000055e4) graphic_text_primary_small_pane_t1

0x38a0,	// (0x000055f2) graphic_text_primary_small_pane_t2

0x0001,

0xf9be,	// (0x00011710) graphic_text_primary_small_pane_t

0x3866,	// (0x000055b8) graphic_text_secondary_pane_g1

0x386e,	// (0x000055c0) graphic_text_secondary_pane_t1

0x387c,	// (0x000055ce) graphic_text_secondary_pane_t2

0x0001,

0xf9b9,	// (0x0001170b) graphic_text_secondary_pane_t

0x3842,	// (0x00005594) graphic_text_title_pane_g1

0x384a,	// (0x0000559c) graphic_text_title_pane_t1

0x3858,	// (0x000055aa) graphic_text_title_pane_t2

0x0001,

0xf9b4,	// (0x00011706) graphic_text_title_pane_t

0x381e,	// (0x00005570) graphic_text_digital_pane_g1

0x3826,	// (0x00005578) graphic_text_digital_pane_t1

0x3834,	// (0x00005586) graphic_text_digital_pane_t2

0x0001,

0xf9af,	// (0x00011701) graphic_text_digital_pane_t

0xe6ca,	// (0x0001041c) navi_icon_pane_srt_ParamLimits

0xe6ca,	// (0x0001041c) navi_icon_pane_srt

0xe5a3,	// (0x000102f5) navi_midp_pane_srt

0xe5a3,	// (0x000102f5) navi_navi_pane_srt

0xe6ca,	// (0x0001041c) navi_text_pane_srt_ParamLimits

0xe6ca,	// (0x0001041c) navi_text_pane_srt

0x37e9,	// (0x0000553b) navi_navi_icon_text_pane_srt

0x37f1,	// (0x00005543) navi_navi_pane_srt_g1_ParamLimits

0x37f1,	// (0x00005543) navi_navi_pane_srt_g1

0x3803,	// (0x00005555) navi_navi_pane_srt_g2_ParamLimits

0x3803,	// (0x00005555) navi_navi_pane_srt_g2

0x0001,

0xf9aa,	// (0x000116fc) navi_navi_pane_srt_g_ParamLimits

0xf9aa,	// (0x000116fc) navi_navi_pane_srt_g

0x3815,	// (0x00005567) navi_navi_tabs_pane_srt

0x37e9,	// (0x0000553b) navi_navi_text_pane_srt

0x37e9,	// (0x0000553b) navi_navi_volume_pane_srt

0x37da,	// (0x0000552c) navi_navi_text_pane_srt_t1

0x37b5,	// (0x00005507) navi_navi_volume_pane_srt_g1

0x37bd,	// (0x0000550f) volume_small_pane_srt_ParamLimits

0x37bd,	// (0x0000550f) volume_small_pane_srt

0x0a94,	// (0x000027e6) volume_small_pane_srt_g1_ParamLimits

0x0a94,	// (0x000027e6) volume_small_pane_srt_g1

0x0aa4,	// (0x000027f6) volume_small_pane_srt_g2_ParamLimits

0x0aa4,	// (0x000027f6) volume_small_pane_srt_g2

0x0ab5,	// (0x00002807) volume_small_pane_srt_g3_ParamLimits

0x0ab5,	// (0x00002807) volume_small_pane_srt_g3

0x0ac6,	// (0x00002818) volume_small_pane_srt_g4_ParamLimits

0x0ac6,	// (0x00002818) volume_small_pane_srt_g4

0x0ad7,	// (0x00002829) volume_small_pane_srt_g5_ParamLimits

0x0ad7,	// (0x00002829) volume_small_pane_srt_g5

0x0ae8,	// (0x0000283a) volume_small_pane_srt_g6_ParamLimits

0x0ae8,	// (0x0000283a) volume_small_pane_srt_g6

0x0af9,	// (0x0000284b) volume_small_pane_srt_g7_ParamLimits

0x0af9,	// (0x0000284b) volume_small_pane_srt_g7

0x0b0a,	// (0x0000285c) volume_small_pane_srt_g8_ParamLimits

0x0b0a,	// (0x0000285c) volume_small_pane_srt_g8

0x0b1b,	// (0x0000286d) volume_small_pane_srt_g9_ParamLimits

0x0b1b,	// (0x0000286d) volume_small_pane_srt_g9

0x0b2c,	// (0x0000287e) volume_small_pane_srt_g10_ParamLimits

0x0b2c,	// (0x0000287e) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x000114b0) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x000114b0) volume_small_pane_srt_g

0xe9fd,	// (0x0001074f) query_popup_data_pane_cp2

0x37a3,	// (0x000054f5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x37a3,	// (0x000054f5) navi_navi_icon_text_pane_srt_t1

0x24c4,	// (0x00004216) navi_tabs_2_long_pane_srt

0x24c4,	// (0x00004216) navi_tabs_2_pane_srt

0x24c4,	// (0x00004216) navi_tabs_3_long_pane_srt

0x24c4,	// (0x00004216) navi_tabs_3_pane_srt

0x24c4,	// (0x00004216) navi_tabs_4_pane_srt

0x377b,	// (0x000054cd) tabs_2_active_pane_srt_ParamLimits

0x377b,	// (0x000054cd) tabs_2_active_pane_srt

0x378b,	// (0x000054dd) tabs_2_passive_pane_srt_ParamLimits

0x378b,	// (0x000054dd) tabs_2_passive_pane_srt

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp1_srt

0x374f,	// (0x000054a1) bg_passive_tab_pane_g1_cp1_srt

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp1_srt

0x3758,	// (0x000054aa) bg_passive_tab_pane_g3_cp1_srt

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp1_srt_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp1_srt

0x3761,	// (0x000054b3) tabs_2_active_pane_srt_g1

0xc201,	// (0x0000df53) tabs_2_active_pane_srt_t1_ParamLimits

0xc201,	// (0x0000df53) tabs_2_active_pane_srt_t1

0x374f,	// (0x000054a1) bg_active_tab_pane_g1_cp1_srt

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp1_srt

0x3758,	// (0x000054aa) bg_active_tab_pane_g3_cp1_srt

0x371c,	// (0x0000546e) tabs_3_active_pane_srt_ParamLimits

0x371c,	// (0x0000546e) tabs_3_active_pane_srt

0x372d,	// (0x0000547f) tabs_3_passive_pane_cp_srt_ParamLimits

0x372d,	// (0x0000547f) tabs_3_passive_pane_cp_srt

0x373e,	// (0x00005490) tabs_3_passive_pane_srt_ParamLimits

0x373e,	// (0x00005490) tabs_3_passive_pane_srt

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1beb,	// (0x0000393d) bg_passive_tab_pane_cp2_srt

0x0b3d,	// (0x0000288f) bg_passive_tab_pane_g1_cp2_srt

0x03ef,	// (0x00002141) bg_passive_tab_pane_g2_cp2_srt

0x0b46,	// (0x00002898) bg_passive_tab_pane_g3_cp2_srt

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp2_srt_ParamLimits

0xe6b2,	// (0x00010404) bg_active_tab_pane_cp2_srt

0x3702,	// (0x00005454) tabs_3_active_pane_srt_g1

0xc1eb,	// (0x0000df3d) tabs_3_active_pane_srt_t1_ParamLimits

0xc1eb,	// (0x0000df3d) tabs_3_active_pane_srt_t1

0x0b3d,	// (0x0000288f) bg_active_tab_pane_g1_cp2_srt

0x03ef,	// (0x00002141) bg_active_tab_pane_g2_cp2_srt

0x0b46,	// (0x00002898) bg_active_tab_pane_g3_cp2_srt

0x36ba,	// (0x0000540c) tabs_4_active_pane_srt_ParamLimits

0x36ba,	// (0x0000540c) tabs_4_active_pane_srt

0x36cc,	// (0x0000541e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x36cc,	// (0x0000541e) tabs_4_passive_pane_cp2_srt

0x0de5,	// (0x00002b37) aid_size_cell_toolbar

0x3287,	// (0x00004fd9) main_idle_act_pane_ParamLimits

0x1030,	// (0x00002d82) popup_large_graphic_colour_window_ParamLimits

0xb573,	// (0x0000d2c5) popup_toolbar_window_ParamLimits

0xb573,	// (0x0000d2c5) popup_toolbar_window

0x34a8,	// (0x000051fa) list_single_graphic_2heading_pane_ParamLimits

0x34a8,	// (0x000051fa) list_single_graphic_2heading_pane

0xf358,	// (0x000110aa) aid_size_cell_apps_grid_lsc_pane

0xf36a,	// (0x000110bc) aid_size_cell_apps_grid_prt_pane

0x0e5f,	// (0x00002bb1) bg_wml_button_pane_cp1_ParamLimits

0x0e5f,	// (0x00002bb1) bg_wml_button_pane_cp1

0xbacb,	// (0x0000d81d) form_midp_field_text_pane_t1_ParamLimits

0x1beb,	// (0x0000393d) input_focus_pane_cp050_ParamLimits

0x1ec7,	// (0x00003c19) list_midp_form_text_pane_ParamLimits

0x1e79,	// (0x00003bcb) input_focus_pane_cp051_ParamLimits

0x1e8d,	// (0x00003bdf) list_midp_choice_pane_ParamLimits

0xba82,	// (0x0000d7d4) list_single_2graphic_pane_cp3_ParamLimits

0xba82,	// (0x0000d7d4) list_single_2graphic_pane_cp3

0x4762,	// (0x000064b4) list_single_midp_graphic_pane_ParamLimits

0x4762,	// (0x000064b4) list_single_midp_graphic_pane

0x18e6,	// (0x00003638) list_single_graphic_2heading_pane_g1_ParamLimits

0x18e6,	// (0x00003638) list_single_graphic_2heading_pane_g1

0x085b,	// (0x000025ad) list_single_graphic_2heading_pane_g4_ParamLimits

0x085b,	// (0x000025ad) list_single_graphic_2heading_pane_g4

0x18f2,	// (0x00003644) list_single_graphic_2heading_pane_g5_ParamLimits

0x18f2,	// (0x00003644) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00011503) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00011503) list_single_graphic_2heading_pane_g

0x18fe,	// (0x00003650) list_single_graphic_2heading_pane_t1_ParamLimits

0x18fe,	// (0x00003650) list_single_graphic_2heading_pane_t1

0x1912,	// (0x00003664) list_single_graphic_2heading_pane_t2_ParamLimits

0x1912,	// (0x00003664) list_single_graphic_2heading_pane_t2

0x192e,	// (0x00003680) list_single_graphic_2heading_pane_t3_ParamLimits

0x192e,	// (0x00003680) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001150a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001150a) list_single_graphic_2heading_pane_t

0x1946,	// (0x00003698) bg_popup_sub_pane_cp2

0x1970,	// (0x000036c2) grid_toobar_pane

0x19ac,	// (0x000036fe) cell_toolbar_pane_ParamLimits

0x19ac,	// (0x000036fe) cell_toolbar_pane

0x19f2,	// (0x00003744) cell_toolbar_pane_g1_ParamLimits

0x19f2,	// (0x00003744) cell_toolbar_pane_g1

0x1a06,	// (0x00003758) cell_toolbar_pane_g2_ParamLimits

0x1a06,	// (0x00003758) cell_toolbar_pane_g2

0x0001,

0xf7bf,	// (0x00011511) cell_toolbar_pane_g_ParamLimits

0xf7bf,	// (0x00011511) cell_toolbar_pane_g

0x1a28,	// (0x0000377a) grid_highlight_pane_cp2_ParamLimits

0x1a28,	// (0x0000377a) grid_highlight_pane_cp2

0x1a42,	// (0x00003794) toolbar_button_pane

0x1a4e,	// (0x000037a0) toolbar_button_pane_g1

0x1a56,	// (0x000037a8) toolbar_button_pane_g2

0x1a5e,	// (0x000037b0) toolbar_button_pane_g3

0x1a66,	// (0x000037b8) toolbar_button_pane_g4

0x1a6e,	// (0x000037c0) toolbar_button_pane_g5

0x1a76,	// (0x000037c8) toolbar_button_pane_g6

0x1a7e,	// (0x000037d0) toolbar_button_pane_g7

0x1a86,	// (0x000037d8) toolbar_button_pane_g8

0x1a8e,	// (0x000037e0) toolbar_button_pane_g9

0x0009,

0xf7c4,	// (0x00011516) toolbar_button_pane_g

0x1a9e,	// (0x000037f0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a9e,	// (0x000037f0) list_single_2graphic_pane_g1_cp3

0xb9e4,	// (0x0000d736) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb9e4,	// (0x0000d736) list_single_2graphic_pane_g2_cp3

0x0714,	// (0x00002466) list_single_2graphic_pane_g3_cp3

0x1abb,	// (0x0000380d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1abb,	// (0x0000380d) list_single_2graphic_pane_g4_cp3

0x1ac7,	// (0x00003819) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1ac7,	// (0x00003819) list_single_2graphic_pane_t1_cp3

0x0708,	// (0x0000245a) list_single_midp_graphic_pane_g2_ParamLimits

0x0708,	// (0x0000245a) list_single_midp_graphic_pane_g2

0x0ded,	// (0x00002b3f) aid_zoom_text_primary

0x0df5,	// (0x00002b47) aid_zoom_text_secondary

0x0bfa,	// (0x0000294c) status_small_pane_g7_ParamLimits

0x0bfa,	// (0x0000294c) status_small_pane_g7

0x0c1d,	// (0x0000296f) status_small_pane_t1_ParamLimits

0x9f5a,	// (0x0000bcac) title_pane_g2

0x0003,

0xf554,	// (0x000112a6) title_pane_g

0xa1f2,	// (0x0000bf44) aid_size_cell_colour_1_pane_ParamLimits

0xa1f2,	// (0x0000bf44) aid_size_cell_colour_1_pane

0xa206,	// (0x0000bf58) aid_size_cell_colour_2_pane_ParamLimits

0xa206,	// (0x0000bf58) aid_size_cell_colour_2_pane

0xa21a,	// (0x0000bf6c) aid_size_cell_colour_3_pane_ParamLimits

0xa21a,	// (0x0000bf6c) aid_size_cell_colour_3_pane

0xa22e,	// (0x0000bf80) aid_size_cell_colour_4_pane_ParamLimits

0xa22e,	// (0x0000bf80) aid_size_cell_colour_4_pane

0xf1d1,	// (0x00010f23) title_pane_stacon_g1_ParamLimits

0xf1d1,	// (0x00010f23) title_pane_stacon_g1

0x22aa,	// (0x00003ffc) popup_note_wait_window_g3_ParamLimits

0x22aa,	// (0x00003ffc) popup_note_wait_window_g3

0x2321,	// (0x00004073) popup_note_wait_window_t5_ParamLimits

0x2321,	// (0x00004073) popup_note_wait_window_t5

0xe5a3,	// (0x000102f5) main_feb_china_hwr_fs_writing_pane

0xaf0a,	// (0x0000cc5c) popup_feb_china_hwr_fs_window_ParamLimits

0xaf0a,	// (0x0000cc5c) popup_feb_china_hwr_fs_window

0xb9f5,	// (0x0000d747) aid_size_cell_hwr_fs_ParamLimits

0xb9f5,	// (0x0000d747) aid_size_cell_hwr_fs

0x1beb,	// (0x0000393d) bg_popup_sub_pane_cp3_ParamLimits

0x1beb,	// (0x0000393d) bg_popup_sub_pane_cp3

0xba0a,	// (0x0000d75c) grid_hwr_fs_pane_ParamLimits

0xba0a,	// (0x0000d75c) grid_hwr_fs_pane

0x1c0f,	// (0x00003961) linegrid_hwr_fs_pane_ParamLimits

0x1c0f,	// (0x00003961) linegrid_hwr_fs_pane

0xba22,	// (0x0000d774) cell_hwr_fs_pane_ParamLimits

0xba22,	// (0x0000d774) cell_hwr_fs_pane

0x1c43,	// (0x00003995) linegrid_hwr_fs_pane_g1_ParamLimits

0x1c43,	// (0x00003995) linegrid_hwr_fs_pane_g1

0xba48,	// (0x0000d79a) linegrid_hwr_fs_pane_g2_ParamLimits

0xba48,	// (0x0000d79a) linegrid_hwr_fs_pane_g2

0x1c61,	// (0x000039b3) linegrid_hwr_fs_pane_g3_ParamLimits

0x1c61,	// (0x000039b3) linegrid_hwr_fs_pane_g3

0x1c6d,	// (0x000039bf) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c6d,	// (0x000039bf) linegrid_hwr_fs_pane_g4

0x1c8b,	// (0x000039dd) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c8b,	// (0x000039dd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ea,	// (0x0001153c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x0001153c) linegrid_hwr_fs_pane_g

0x1ca1,	// (0x000039f3) cell_hwr_fs_pane_g1_ParamLimits

0x1ca1,	// (0x000039f3) cell_hwr_fs_pane_g1

0x181d,	// (0x0000356f) cell_hwr_fs_pane_g2_ParamLimits

0x181d,	// (0x0000356f) cell_hwr_fs_pane_g2

0xba5a,	// (0x0000d7ac) cell_hwr_fs_pane_g3_ParamLimits

0xba5a,	// (0x0000d7ac) cell_hwr_fs_pane_g3

0xba67,	// (0x0000d7b9) cell_hwr_fs_pane_g4_ParamLimits

0xba67,	// (0x0000d7b9) cell_hwr_fs_pane_g4

0x0003,

0xf7f5,	// (0x00011547) cell_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00011547) cell_hwr_fs_pane_g

0xba74,	// (0x0000d7c6) cell_hwr_fs_pane_t1

0xe5a3,	// (0x000102f5) grid_highlight_pane_cp6

0xe5a3,	// (0x000102f5) main_idle_act2_pane

0xefcb,	// (0x00010d1d) aid_inside_area_popup_secondary

0xbd09,	// (0x0000da5b) aid_inside_area_window_primary_ParamLimits

0xbd09,	// (0x0000da5b) aid_inside_area_window_primary

0x38d9,	// (0x0000562b) ai2_news_ticker_pane

0x38e1,	// (0x00005633) aid_size_cell_ai1_link_ParamLimits

0x38e1,	// (0x00005633) aid_size_cell_ai1_link

0x38fb,	// (0x0000564d) popup_ai2_data_window_ParamLimits

0x38fb,	// (0x0000564d) popup_ai2_data_window

0x3919,	// (0x0000566b) popup_ai2_link_window_ParamLimits

0x3919,	// (0x0000566b) popup_ai2_link_window

0x1beb,	// (0x0000393d) bg_popup_sub_pane_cp4_ParamLimits

0x1beb,	// (0x0000393d) bg_popup_sub_pane_cp4

0x392f,	// (0x00005681) grid_ai2_link_pane_ParamLimits

0x392f,	// (0x00005681) grid_ai2_link_pane

0x3946,	// (0x00005698) popup_ai2_link_window_g1_ParamLimits

0x3946,	// (0x00005698) popup_ai2_link_window_g1

0x3952,	// (0x000056a4) popup_ai2_link_window_g2_ParamLimits

0x3952,	// (0x000056a4) popup_ai2_link_window_g2

0x0001,

0xf9c8,	// (0x0001171a) popup_ai2_link_window_g_ParamLimits

0xf9c8,	// (0x0001171a) popup_ai2_link_window_g

0x3963,	// (0x000056b5) ai2_mp_button_pane

0x396b,	// (0x000056bd) ai2_mp_volume_pane

0x1e79,	// (0x00003bcb) bg_popup_sub_pane_cp5_ParamLimits

0x1e79,	// (0x00003bcb) bg_popup_sub_pane_cp5

0x3973,	// (0x000056c5) heading_ai2_gene_pane_ParamLimits

0x3973,	// (0x000056c5) heading_ai2_gene_pane

0x397f,	// (0x000056d1) list_ai2_gene_pane_ParamLimits

0x397f,	// (0x000056d1) list_ai2_gene_pane

0x39c7,	// (0x00005719) cell_ai2_link_pane_ParamLimits

0x39c7,	// (0x00005719) cell_ai2_link_pane

0x39dd,	// (0x0000572f) cell_ai2_link_pane_g1

0xe5a3,	// (0x000102f5) grid_highlight_pane_cp7

0x3ab0,	// (0x00005802) ai2_mp_volume_pane_g1

0x3ab8,	// (0x0000580a) ai2_mp_volume_pane_g2

0x3a25,	// (0x00005777) list_ai2_gene_pane_t1

0x3ac0,	// (0x00005812) ai2_mp_volume_pane_g3

0x0002,

0xf9e1,	// (0x00011733) ai2_mp_volume_pane_g

0x3ac8,	// (0x0000581a) volume_small_pane_cp3

0x3ad1,	// (0x00005823) aid_size_cell_ai2_button

0x3ad9,	// (0x0000582b) grid_ai2_button_pane

0x3ae2,	// (0x00005834) cell_ai2_button_pane_ParamLimits

0x3ae2,	// (0x00005834) cell_ai2_button_pane

0xe42a,	// (0x0001017c) cell_ai2_button_pane_g1

0xe5a3,	// (0x000102f5) grid_highlight_pane_cp8

0x3a70,	// (0x000057c2) ai2_gene_pane_t1_ParamLimits

0x3a70,	// (0x000057c2) ai2_gene_pane_t1

0xae7a,	// (0x0000cbcc) aid_height_parent_landscape

0xbf48,	// (0x0000dc9a) aid_height_set_list

0x3287,	// (0x00004fd9) aid_size_parent

0x3642,	// (0x00005394) aid_size_cell_graphic_pane_ParamLimits

0x398f,	// (0x000056e1) popup_ai2_data_window_g1_ParamLimits

0x398f,	// (0x000056e1) popup_ai2_data_window_g1

0x399b,	// (0x000056ed) ai2_news_ticker_pane_g1

0x39a3,	// (0x000056f5) ai2_news_ticker_pane_g2

0x0001,

0xf9cd,	// (0x0001171f) ai2_news_ticker_pane_g

0x39ab,	// (0x000056fd) ai2_news_ticker_pane_t1

0x39b9,	// (0x0000570b) ai2_news_ticker_pane_t2

0x0001,

0xf9d2,	// (0x00011724) ai2_news_ticker_pane_t

0x39e6,	// (0x00005738) heading_ai2_gene_pane_g1

0x39ee,	// (0x00005740) heading_ai2_gene_pane_t1_ParamLimits

0x39ee,	// (0x00005740) heading_ai2_gene_pane_t1

0x3a03,	// (0x00005755) list_highlight_pane_cp6

0x3a0b,	// (0x0000575d) ai2_gene_pane_ParamLimits

0x3a0b,	// (0x0000575d) ai2_gene_pane

0x3a33,	// (0x00005785) list_ai2_gene_pane_t2

0x0001,

0xf9d7,	// (0x00011729) list_ai2_gene_pane_t

0x3a41,	// (0x00005793) list_highlight_pane_cp8_ParamLimits

0x3a41,	// (0x00005793) list_highlight_pane_cp8

0x3a52,	// (0x000057a4) ai2_gene_pane_g1_ParamLimits

0x3a52,	// (0x000057a4) ai2_gene_pane_g1

0x3a64,	// (0x000057b6) ai2_gene_pane_g2_ParamLimits

0x3a64,	// (0x000057b6) ai2_gene_pane_g2

0x0001,

0xf9dc,	// (0x0001172e) ai2_gene_pane_g_ParamLimits

0xf9dc,	// (0x0001172e) ai2_gene_pane_g

0xed18,	// (0x00010a6a) scroll_pane_cp12

0xae39,	// (0x0000cb8b) control_pane_t3_ParamLimits

0xae39,	// (0x0000cb8b) control_pane_t3

0x0c0e,	// (0x00002960) status_small_pane_g8_ParamLimits

0x0c0e,	// (0x00002960) status_small_pane_g8

0xafac,	// (0x0000ccfe) popup_find_window_ParamLimits

0xb25d,	// (0x0000cfaf) popup_note_image_window_ParamLimits

0x18e6,	// (0x00003638) list_double2_graphic_pane_vc_g1_ParamLimits

0x18e6,	// (0x00003638) list_double2_graphic_pane_vc_g1

0x085b,	// (0x000025ad) list_double2_graphic_pane_vc_g2_ParamLimits

0x085b,	// (0x000025ad) list_double2_graphic_pane_vc_g2

0x18f2,	// (0x00003644) list_double2_graphic_pane_vc_g3_ParamLimits

0x18f2,	// (0x00003644) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b1,	// (0x00011503) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b1,	// (0x00011503) list_double2_graphic_pane_vc_g

0x19dc,	// (0x0000372e) list_double2_graphic_pane_vc_t1_ParamLimits

0x19dc,	// (0x0000372e) list_double2_graphic_pane_vc_t1

0x085b,	// (0x000025ad) list_single_heading_pane_vc_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_heading_pane_vc_g1

0x18f2,	// (0x00003644) list_single_heading_pane_vc_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_heading_pane_vc_g

0x1ae2,	// (0x00003834) list_single_heading_pane_vc_t1_ParamLimits

0x1ae2,	// (0x00003834) list_single_heading_pane_vc_t1

0x1afa,	// (0x0000384c) list_single_heading_pane_vc_t2_ParamLimits

0x1afa,	// (0x0000384c) list_single_heading_pane_vc_t2

0x0001,

0xf7d9,	// (0x0001152b) list_single_heading_pane_vc_t_ParamLimits

0xf7d9,	// (0x0001152b) list_single_heading_pane_vc_t

0x1b22,	// (0x00003874) list_setting_number_pane_vc_g1_ParamLimits

0x1b22,	// (0x00003874) list_setting_number_pane_vc_g1

0x1b2e,	// (0x00003880) list_setting_number_pane_vc_g2_ParamLimits

0x1b2e,	// (0x00003880) list_setting_number_pane_vc_g2

0x0001,

0xf7de,	// (0x00011530) list_setting_number_pane_vc_g_ParamLimits

0xf7de,	// (0x00011530) list_setting_number_pane_vc_g

0x1b3a,	// (0x0000388c) list_setting_number_pane_vc_t1_ParamLimits

0x1b3a,	// (0x0000388c) list_setting_number_pane_vc_t1

0x1b4e,	// (0x000038a0) list_setting_number_pane_vc_t2_ParamLimits

0x1b4e,	// (0x000038a0) list_setting_number_pane_vc_t2

0x1b6a,	// (0x000038bc) list_setting_number_pane_vc_t3_ParamLimits

0x1b6a,	// (0x000038bc) list_setting_number_pane_vc_t3

0x0002,

0xf7e3,	// (0x00011535) list_setting_number_pane_vc_t_ParamLimits

0xf7e3,	// (0x00011535) list_setting_number_pane_vc_t

0x1b98,	// (0x000038ea) set_value_pane_vc_ParamLimits

0x1b98,	// (0x000038ea) set_value_pane_vc

0x34a8,	// (0x000051fa) list_double2_graphic_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double2_graphic_pane_vc

0x34a8,	// (0x000051fa) list_double2_large_graphic_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double2_large_graphic_pane_vc

0x34a8,	// (0x000051fa) list_double2_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double2_pane_vc

0x34a8,	// (0x000051fa) list_double_graphic_heading_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_graphic_heading_pane_vc

0x34a8,	// (0x000051fa) list_double_graphic_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_graphic_pane_vc

0x34a8,	// (0x000051fa) list_double_heading_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_heading_pane_vc

0x34a8,	// (0x000051fa) list_double_large_graphic_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_large_graphic_pane_vc

0x34a8,	// (0x000051fa) list_double_number_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_number_pane_vc

0x34a8,	// (0x000051fa) list_double_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_pane_vc

0x34a8,	// (0x000051fa) list_double_time_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_double_time_pane_vc

0x34a8,	// (0x000051fa) list_setting_number_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_setting_number_pane_vc

0x34a8,	// (0x000051fa) list_setting_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_setting_pane_vc

0x34a8,	// (0x000051fa) list_single_graphic_heading_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_single_graphic_heading_pane_vc

0x34a8,	// (0x000051fa) list_single_heading_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_single_heading_pane_vc

0x34a8,	// (0x000051fa) list_single_number_heading_pane_vc_ParamLimits

0x34a8,	// (0x000051fa) list_single_number_heading_pane_vc

0x18e6,	// (0x00003638) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x18e6,	// (0x00003638) list_double_graphic_heading_pane_vc_g1

0x3b15,	// (0x00005867) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3b15,	// (0x00005867) list_double_graphic_heading_pane_vc_g2

0x3b21,	// (0x00005873) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3b21,	// (0x00005873) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e8,	// (0x0001173a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e8,	// (0x0001173a) list_double_graphic_heading_pane_vc_g

0x3b2d,	// (0x0000587f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3b2d,	// (0x0000587f) list_double_graphic_heading_pane_vc_t1

0x1ae2,	// (0x00003834) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1ae2,	// (0x00003834) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ef,	// (0x00011741) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ef,	// (0x00011741) list_double_graphic_heading_pane_vc_t

0x1b22,	// (0x00003874) list_setting_pane_vc_g1_ParamLimits

0x1b22,	// (0x00003874) list_setting_pane_vc_g1

0x1b2e,	// (0x00003880) list_setting_pane_vc_g2_ParamLimits

0x1b2e,	// (0x00003880) list_setting_pane_vc_g2

0x0001,

0xf7de,	// (0x00011530) list_setting_pane_vc_g_ParamLimits

0xf7de,	// (0x00011530) list_setting_pane_vc_g

0x3d73,	// (0x00005ac5) list_setting_pane_vc_t1_ParamLimits

0x3d73,	// (0x00005ac5) list_setting_pane_vc_t1

0x3d8f,	// (0x00005ae1) list_setting_pane_vc_t2_ParamLimits

0x3d8f,	// (0x00005ae1) list_setting_pane_vc_t2

0x0001,

0xfa32,	// (0x00011784) list_setting_pane_vc_t_ParamLimits

0xfa32,	// (0x00011784) list_setting_pane_vc_t

0x1b98,	// (0x000038ea) set_value_pane_cp_vc_ParamLimits

0x1b98,	// (0x000038ea) set_value_pane_cp_vc

0x085b,	// (0x000025ad) list_single_number_heading_pane_vc_g1_ParamLimits

0x085b,	// (0x000025ad) list_single_number_heading_pane_vc_g1

0x18f2,	// (0x00003644) list_single_number_heading_pane_vc_g2_ParamLimits

0x18f2,	// (0x00003644) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011320) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011320) list_single_number_heading_pane_vc_g

0x1ae2,	// (0x00003834) list_single_number_heading_pane_vc_t1_ParamLimits

0x1ae2,	// (0x00003834) list_single_number_heading_pane_vc_t1

0x3dab,	// (0x00005afd) list_single_number_heading_pane_vc_t2_ParamLimits

0x3dab,	// (0x00005afd) list_single_number_heading_pane_vc_t2

0x3dbd,	// (0x00005b0f) list_single_number_heading_pane_vc_t3_ParamLimits

0x3dbd,	// (0x00005b0f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa37,	// (0x00011789) list_single_number_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x00011789) list_single_number_heading_pane_vc_t

0x18e6,	// (0x00003638) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x18e6,	// (0x00003638) list_single_graphic_heading_pane_vc_g1

0x085b,	// (0x000025ad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x085b,	// (0x000025ad) list_single_graphic_heading_pane_vc_g4

0x18f2,	// (0x00003644) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x18f2,	// (0x00003644) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b1,	// (0x00011503) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b1,	// (0x00011503) list_single_graphic_heading_pane_vc_g

0x1ae2,	// (0x00003834) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1ae2,	// (0x00003834) list_single_graphic_heading_pane_vc_t1

0x3dcf,	// (0x00005b21) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3dcf,	// (0x00005b21) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00011790) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00011790) list_single_graphic_heading_pane_vc_t

0x085b,	// (0x000025ad) list_double2_pane_vc_g1_ParamLimits

0x085b,	// (0x000025ad) list_double2_pane_vc_g1

0x18f2,	// (0x00003644) list_double2_pane_vc_g2_ParamLimits

0x18f2,	// (0x00003644) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011320) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011320) list_double2_pane_vc_g

0x3de1,	// (0x00005b33) list_double2_pane_vc_t1_ParamLimits

0x3de1,	// (0x00005b33) list_double2_pane_vc_t1

0x3df7,	// (0x00005b49) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3df7,	// (0x00005b49) list_double2_large_graphic_pane_vc_g1

0x085b,	// (0x000025ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x085b,	// (0x000025ad) list_double2_large_graphic_pane_vc_g2

0x18f2,	// (0x00003644) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x18f2,	// (0x00003644) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001133d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001133d) list_double2_large_graphic_pane_vc_g

0x3e03,	// (0x00005b55) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3e03,	// (0x00005b55) list_double2_large_graphic_pane_vc_t1

0x3e19,	// (0x00005b6b) list_double_time_pane_vc_g1_ParamLimits

0x3e19,	// (0x00005b6b) list_double_time_pane_vc_g1

0x3e25,	// (0x00005b77) list_double_time_pane_vc_g2_ParamLimits

0x3e25,	// (0x00005b77) list_double_time_pane_vc_g2

0x0001,

0xfa43,	// (0x00011795) list_double_time_pane_vc_g_ParamLimits

0xfa43,	// (0x00011795) list_double_time_pane_vc_g

0x3e31,	// (0x00005b83) list_double_time_pane_vc_t1_ParamLimits

0x3e31,	// (0x00005b83) list_double_time_pane_vc_t1

0x3e61,	// (0x00005bb3) list_double_time_pane_vc_t2_ParamLimits

0x3e61,	// (0x00005bb3) list_double_time_pane_vc_t2

0x3e8a,	// (0x00005bdc) list_double_time_pane_vc_t3_ParamLimits

0x3e8a,	// (0x00005bdc) list_double_time_pane_vc_t3

0x3e9c,	// (0x00005bee) list_double_time_pane_vc_t4_ParamLimits

0x3e9c,	// (0x00005bee) list_double_time_pane_vc_t4

0x0003,

0xfa48,	// (0x0001179a) list_double_time_pane_vc_t_ParamLimits

0xfa48,	// (0x0001179a) list_double_time_pane_vc_t

0x085b,	// (0x000025ad) list_double_pane_vc_g1_ParamLimits

0x085b,	// (0x000025ad) list_double_pane_vc_g1

0x18f2,	// (0x00003644) list_double_pane_vc_g2_ParamLimits

0x18f2,	// (0x00003644) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011320) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011320) list_double_pane_vc_g

0x3ec1,	// (0x00005c13) list_double_pane_vc_t1_ParamLimits

0x3ec1,	// (0x00005c13) list_double_pane_vc_t1

0x3ed5,	// (0x00005c27) list_double_pane_vc_t2_ParamLimits

0x3ed5,	// (0x00005c27) list_double_pane_vc_t2

0x0001,

0xfa51,	// (0x000117a3) list_double_pane_vc_t_ParamLimits

0xfa51,	// (0x000117a3) list_double_pane_vc_t

0x085b,	// (0x000025ad) list_double_number_pane_vc_g1_ParamLimits

0x085b,	// (0x000025ad) list_double_number_pane_vc_g1

0x18f2,	// (0x00003644) list_double_number_pane_vc_g2_ParamLimits

0x18f2,	// (0x00003644) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011320) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011320) list_double_number_pane_vc_g

0x3eeb,	// (0x00005c3d) list_double_number_pane_vc_t1_ParamLimits

0x3eeb,	// (0x00005c3d) list_double_number_pane_vc_t1

0x3eff,	// (0x00005c51) list_double_number_pane_vc_t2_ParamLimits

0x3eff,	// (0x00005c51) list_double_number_pane_vc_t2

0x3ed5,	// (0x00005c27) list_double_number_pane_vc_t3_ParamLimits

0x3ed5,	// (0x00005c27) list_double_number_pane_vc_t3

0x0002,

0xfa56,	// (0x000117a8) list_double_number_pane_vc_t_ParamLimits

0xfa56,	// (0x000117a8) list_double_number_pane_vc_t

0x3f13,	// (0x00005c65) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3f13,	// (0x00005c65) list_double_large_graphic_pane_vc_g1

0x3f24,	// (0x00005c76) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3f24,	// (0x00005c76) list_double_large_graphic_pane_vc_g2

0x18f2,	// (0x00003644) list_double_large_graphic_pane_vc_g3_ParamLimits

0x18f2,	// (0x00003644) list_double_large_graphic_pane_vc_g3

0x3f33,	// (0x00005c85) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3f33,	// (0x00005c85) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5d,	// (0x000117af) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x000117af) list_double_large_graphic_pane_vc_g

0x3f3f,	// (0x00005c91) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3f3f,	// (0x00005c91) list_double_large_graphic_pane_vc_t1

0x3f58,	// (0x00005caa) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3f58,	// (0x00005caa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x000117b8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x000117b8) list_double_large_graphic_pane_vc_t

0x3b15,	// (0x00005867) list_double_heading_pane_vc_g1_ParamLimits

0x3b15,	// (0x00005867) list_double_heading_pane_vc_g1

0x3b21,	// (0x00005873) list_double_heading_pane_vc_g2_ParamLimits

0x3b21,	// (0x00005873) list_double_heading_pane_vc_g2

0x0001,

0xfa6b,	// (0x000117bd) list_double_heading_pane_vc_g_ParamLimits

0xfa6b,	// (0x000117bd) list_double_heading_pane_vc_g

0x3f6f,	// (0x00005cc1) list_double_heading_pane_vc_t1_ParamLimits

0x3f6f,	// (0x00005cc1) list_double_heading_pane_vc_t1

0x1ae2,	// (0x00003834) list_double_heading_pane_vc_t2_ParamLimits

0x1ae2,	// (0x00003834) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x000117c2) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x000117c2) list_double_heading_pane_vc_t

0x18e6,	// (0x00003638) list_double_graphic_pane_vc_g1_ParamLimits

0x18e6,	// (0x00003638) list_double_graphic_pane_vc_g1

0x3f81,	// (0x00005cd3) list_double_graphic_pane_vc_g2_ParamLimits

0x3f81,	// (0x00005cd3) list_double_graphic_pane_vc_g2

0x3f90,	// (0x00005ce2) list_double_graphic_pane_vc_g3_ParamLimits

0x3f90,	// (0x00005ce2) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x000117c7) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x000117c7) list_double_graphic_pane_vc_g

0x3f9c,	// (0x00005cee) list_double_graphic_pane_vc_t1_ParamLimits

0x3f9c,	// (0x00005cee) list_double_graphic_pane_vc_t1

0x3ed5,	// (0x00005c27) list_double_graphic_pane_vc_t2_ParamLimits

0x3ed5,	// (0x00005c27) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x000117ce) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x000117ce) list_double_graphic_pane_vc_t

0xe44c,	// (0x0001019e) aid_size_cell_fastswap

0x9da2,	// (0x0000baf4) aid_size_cell_touch_ParamLimits

0x9da2,	// (0x0000baf4) aid_size_cell_touch

0xe5d3,	// (0x00010325) popup_fast_swap_wide_window_ParamLimits

0xe5d3,	// (0x00010325) popup_fast_swap_wide_window

0x9ef1,	// (0x0000bc43) touch_pane_ParamLimits

0x9ef1,	// (0x0000bc43) touch_pane

0xed9d,	// (0x00010aef) button_value_adjust_pane_cp2

0xeda5,	// (0x00010af7) button_value_adjust_pane_cp4

0xedad,	// (0x00010aff) form_field_data_pane_cp2

0xa712,	// (0x0000c464) form_field_data_wide_pane_cp2

0xf3ab,	// (0x000110fd) bg_scroll_pane_ParamLimits

0xf3ca,	// (0x0001111c) scroll_handle_pane_ParamLimits

0xf3de,	// (0x00011130) scroll_sc2_down_pane_ParamLimits

0xf3de,	// (0x00011130) scroll_sc2_down_pane

0xf405,	// (0x00011157) scroll_sc2_up_pane_ParamLimits

0xf405,	// (0x00011157) scroll_sc2_up_pane

0xc342,	// (0x0000e094) grid_wheel_folder_pane_g1_ParamLimits

0xc342,	// (0x0000e094) grid_wheel_folder_pane_g1

0x0539,	// (0x0000228b) clock_nsta_pane_cp2_ParamLimits

0x0539,	// (0x0000228b) clock_nsta_pane_cp2

0x0e5f,	// (0x00002bb1) listscroll_midp_pane_ParamLimits

0xac3f,	// (0x0000c991) midp_canvas_pane

0x0dd3,	// (0x00002b25) nsta_clock_indic_pane

0x0e31,	// (0x00002b83) listscroll_form_pane_vc

0x0e4d,	// (0x00002b9f) listscroll_set_pane_vc_ParamLimits

0x0e4d,	// (0x00002b9f) listscroll_set_pane_vc

0xb6d7,	// (0x0000d429) clock_nsta_pane

0xb701,	// (0x0000d453) indicator_nsta_pane

0x1946,	// (0x00003698) bg_popup_sub_pane_cp2_ParamLimits

0x195a,	// (0x000036ac) find_pane_cp2_ParamLimits

0x195a,	// (0x000036ac) find_pane_cp2

0x1970,	// (0x000036c2) grid_toobar_pane_ParamLimits

0x1baa,	// (0x000038fc) list_form_gen_pane_vc_ParamLimits

0x1baa,	// (0x000038fc) list_form_gen_pane_vc

0x1bc0,	// (0x00003912) scroll_pane_cp8_vc_ParamLimits

0x1bc0,	// (0x00003912) scroll_pane_cp8_vc

0x1cdf,	// (0x00003a31) data_form_wide_pane_vc_ParamLimits

0x1cdf,	// (0x00003a31) data_form_wide_pane_vc

0x1ceb,	// (0x00003a3d) form_field_data_wide_pane_vc_g1

0x1cf3,	// (0x00003a45) form_field_data_wide_pane_vc_t1_ParamLimits

0x1cf3,	// (0x00003a45) form_field_data_wide_pane_vc_t1

0xee20,	// (0x00010b72) input_focus_pane_cp6_vc_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_cp6_vc

0xbb10,	// (0x0000d862) list_midp_pane_ParamLimits

0x36ae,	// (0x00005400) scroll_pane_cp16_ParamLimits

0x36ae,	// (0x00005400) scroll_pane_cp16

0x207e,	// (0x00003dd0) button_value_adjust_pane_ParamLimits

0x207e,	// (0x00003dd0) button_value_adjust_pane

0xbf59,	// (0x0000dcab) button_value_adjust_pane_cp6_ParamLimits

0xbf59,	// (0x0000dcab) button_value_adjust_pane_cp6

0xc09b,	// (0x0000dded) settings_code_pane_cp_ParamLimits

0xc09b,	// (0x0000dded) settings_code_pane_cp

0xe42a,	// (0x0001017c) cell_touch_pane_g1

0xe42a,	// (0x0001017c) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00011456) cell_touch_pane_g

0xc217,	// (0x0000df69) cell_touch_pane_cp_ParamLimits

0xc217,	// (0x0000df69) cell_touch_pane_cp

0xc233,	// (0x0000df85) cell_touch_pane_ParamLimits

0xc233,	// (0x0000df85) cell_touch_pane

0xe42a,	// (0x0001017c) scroll_sc2_down_pane_g1

0xe42a,	// (0x0001017c) scroll_sc2_up_pane_g1

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp4_vc

0x3b3f,	// (0x00005891) list_set_graphic_pane_vc_g1_ParamLimits

0x3b3f,	// (0x00005891) list_set_graphic_pane_vc_g1

0x3b4b,	// (0x0000589d) list_set_graphic_pane_vc_g2_ParamLimits

0x3b4b,	// (0x0000589d) list_set_graphic_pane_vc_g2

0x0001,

0xf9f4,	// (0x00011746) list_set_graphic_pane_vc_g_ParamLimits

0xf9f4,	// (0x00011746) list_set_graphic_pane_vc_g

0x3b57,	// (0x000058a9) text_primary_small_cp13_vc_ParamLimits

0x3b57,	// (0x000058a9) text_primary_small_cp13_vc

0x3b6f,	// (0x000058c1) list_set_graphic_pane_vc_ParamLimits

0x3b6f,	// (0x000058c1) list_set_graphic_pane_vc

0xe5a3,	// (0x000102f5) input_focus_pane_cp2_vc

0xe42a,	// (0x0001017c) setting_code_pane_vc_g1

0xe76a,	// (0x000104bc) setting_code_pane_vc_t1

0x3b84,	// (0x000058d6) set_text_pane_vc_t1_ParamLimits

0x3b84,	// (0x000058d6) set_text_pane_vc_t1

0xe5a3,	// (0x000102f5) input_focus_pane_cp1_vc

0x3ba2,	// (0x000058f4) list_set_text_pane_vc

0xe42a,	// (0x0001017c) setting_text_pane_vc_g1

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp2_vc

0xe739,	// (0x0001048b) setting_slider_graphic_pane_vc_g1

0x3bac,	// (0x000058fe) setting_slider_graphic_pane_vc_t1

0x3bbe,	// (0x00005910) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001174b) setting_slider_graphic_pane_vc_t

0x3bd0,	// (0x00005922) slider_set_pane_cp_vc

0x3bda,	// (0x0000592c) slider_set_pane_vc_g1

0x3be3,	// (0x00005935) slider_set_pane_vc_g2

0x0006,

0xf9fe,	// (0x00011750) slider_set_pane_vc_g

0xeee4,	// (0x00010c36) set_opt_bg_pane_g1_copy1

0xeeec,	// (0x00010c3e) set_opt_bg_pane_g2_copy1

0x3c0f,	// (0x00005961) set_opt_bg_pane_g3_copy1

0xeefc,	// (0x00010c4e) set_opt_bg_pane_g4_copy1

0xef04,	// (0x00010c56) set_opt_bg_pane_g5_copy1

0xef0c,	// (0x00010c5e) set_opt_bg_pane_g6_copy1

0x3c19,	// (0x0000596b) set_opt_bg_pane_g7_copy1

0x3c23,	// (0x00005975) set_opt_bg_pane_g8_copy1

0x3c2d,	// (0x0000597f) set_opt_bg_pane_g9_copy1

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp_vc

0x3c37,	// (0x00005989) setting_slider_pane_vc_t1

0x3c46,	// (0x00005998) setting_slider_pane_vc_t2

0x3c58,	// (0x000059aa) setting_slider_pane_vc_t3

0x0002,

0xfa0d,	// (0x0001175f) setting_slider_pane_vc_t

0x3c6a,	// (0x000059bc) slider_set_pane_vc

0x28c3,	// (0x00004615) volume_set_pane_vc_g1

0x28cc,	// (0x0000461e) volume_set_pane_vc_g2

0x28d5,	// (0x00004627) volume_set_pane_vc_g3

0x28de,	// (0x00004630) volume_set_pane_vc_g4

0x28e7,	// (0x00004639) volume_set_pane_vc_g5

0x28f0,	// (0x00004642) volume_set_pane_vc_g6

0x28f9,	// (0x0000464b) volume_set_pane_vc_g7

0x2902,	// (0x00004654) volume_set_pane_vc_g8

0x290b,	// (0x0000465d) volume_set_pane_vc_g9

0x2914,	// (0x00004666) volume_set_pane_vc_g10

0x0009,

0xfa14,	// (0x00011766) volume_set_pane_vc_g

0x3c74,	// (0x000059c6) volume_set_pane_vc

0x3c7e,	// (0x000059d0) button_value_adjust_pane_cp1_vc

0x3c88,	// (0x000059da) list_highlight_pane_cp2_vc

0x3c91,	// (0x000059e3) list_set_pane_vc_ParamLimits

0x3c91,	// (0x000059e3) list_set_pane_vc

0x3d01,	// (0x00005a53) main_pane_set_vc_t1_ParamLimits

0x3d01,	// (0x00005a53) main_pane_set_vc_t1

0x3d16,	// (0x00005a68) main_pane_set_vc_t2_ParamLimits

0x3d16,	// (0x00005a68) main_pane_set_vc_t2

0x3d28,	// (0x00005a7a) main_pane_set_vc_t3_ParamLimits

0x3d28,	// (0x00005a7a) main_pane_set_vc_t3

0x3d3c,	// (0x00005a8e) main_pane_set_vc_t4_ParamLimits

0x3d3c,	// (0x00005a8e) main_pane_set_vc_t4

0x0003,

0xfa29,	// (0x0001177b) main_pane_set_vc_t_ParamLimits

0xfa29,	// (0x0001177b) main_pane_set_vc_t

0x3d50,	// (0x00005aa2) setting_code_pane_vc_ParamLimits

0x3d50,	// (0x00005aa2) setting_code_pane_vc

0x3d61,	// (0x00005ab3) setting_slider_graphic_pane_vc

0x3d61,	// (0x00005ab3) setting_slider_pane_vc

0x3d61,	// (0x00005ab3) setting_text_pane_vc

0x3d61,	// (0x00005ab3) setting_volume_pane_vc

0x3d6b,	// (0x00005abd) scroll_pane_cp121_vc

0xed8b,	// (0x00010add) set_content_pane_vc

0x3fb0,	// (0x00005d02) button_value_adjust_pane_g1

0x3fb9,	// (0x00005d0b) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x000117d3) button_value_adjust_pane_g

0x3fc2,	// (0x00005d14) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3fc2,	// (0x00005d14) form_field_slider_wide_pane_vc_t1

0x3fd6,	// (0x00005d28) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3fd6,	// (0x00005d28) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x000117d8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x000117d8) form_field_slider_wide_pane_vc_t

0xe6b2,	// (0x00010404) input_focus_pane_cp10_vc_ParamLimits

0xe6b2,	// (0x00010404) input_focus_pane_cp10_vc

0x4004,	// (0x00005d56) slider_cont_pane_cp1_vc_ParamLimits

0x4004,	// (0x00005d56) slider_cont_pane_cp1_vc

0x4014,	// (0x00005d66) slider_form_pane_g1_cp2

0x3be3,	// (0x00005935) slider_form_pane_g2_cp2

0x4041,	// (0x00005d93) form_field_slider_pane_vc_t3

0x404f,	// (0x00005da1) form_field_slider_pane_vc_t4

0x405d,	// (0x00005daf) slider_form_pane_vc_ParamLimits

0x405d,	// (0x00005daf) slider_form_pane_vc

0x406a,	// (0x00005dbc) form_field_slider_pane_vc_t1_ParamLimits

0x406a,	// (0x00005dbc) form_field_slider_pane_vc_t1

0x3fd6,	// (0x00005d28) form_field_slider_pane_vc_t2_ParamLimits

0x3fd6,	// (0x00005d28) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x000117ea) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x000117ea) form_field_slider_pane_vc_t

0xe6b2,	// (0x00010404) input_focus_pane_cp9_vc_ParamLimits

0xe6b2,	// (0x00010404) input_focus_pane_cp9_vc

0x4086,	// (0x00005dd8) slider_cont_pane_vc_ParamLimits

0x4086,	// (0x00005dd8) slider_cont_pane_vc

0x4098,	// (0x00005dea) list_form_graphic_pane_cp_vc_ParamLimits

0x4098,	// (0x00005dea) list_form_graphic_pane_cp_vc

0x1ceb,	// (0x00003a3d) form_field_popup_wide_pane_vc_g1

0x40ad,	// (0x00005dff) form_field_popup_wide_pane_vc_t1_ParamLimits

0x40ad,	// (0x00005dff) form_field_popup_wide_pane_vc_t1

0xee20,	// (0x00010b72) input_focus_pane_cp8_vc_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_cp8_vc

0x40f2,	// (0x00005e44) list_form_wide_pane_vc_ParamLimits

0x40f2,	// (0x00005e44) list_form_wide_pane_vc

0x40fe,	// (0x00005e50) list_form_graphic_pane_vc_g1

0x4106,	// (0x00005e58) list_form_graphic_pane_vc_t1_ParamLimits

0x4106,	// (0x00005e58) list_form_graphic_pane_vc_t1

0xe6ca,	// (0x0001041c) list_highlight_pane_cp5_vc_ParamLimits

0xe6ca,	// (0x0001041c) list_highlight_pane_cp5_vc

0x4122,	// (0x00005e74) list_form_graphic_pane_vc_ParamLimits

0x4122,	// (0x00005e74) list_form_graphic_pane_vc

0x1ceb,	// (0x00003a3d) form_field_popup_pane_vc_g1

0x4138,	// (0x00005e8a) form_field_popup_pane_vc_t1_ParamLimits

0x4138,	// (0x00005e8a) form_field_popup_pane_vc_t1

0xee20,	// (0x00010b72) input_focus_pane_cp7_vc_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_cp7_vc

0x414f,	// (0x00005ea1) list_form_pane_vc_ParamLimits

0x414f,	// (0x00005ea1) list_form_pane_vc

0x415b,	// (0x00005ead) data_form_pane_vc_t1_ParamLimits

0x415b,	// (0x00005ead) data_form_pane_vc_t1

0xeee4,	// (0x00010c36) input_focus_pane_vc_g1

0xeeec,	// (0x00010c3e) input_focus_pane_vc_g2

0xeef4,	// (0x00010c46) input_focus_pane_vc_g3

0xeefc,	// (0x00010c4e) input_focus_pane_vc_g4

0xef04,	// (0x00010c56) input_focus_pane_vc_g5

0xef0c,	// (0x00010c5e) input_focus_pane_vc_g6

0xef14,	// (0x00010c66) input_focus_pane_vc_g7

0xef1c,	// (0x00010c6e) input_focus_pane_vc_g8

0xef24,	// (0x00010c76) input_focus_pane_vc_g9

0xe42a,	// (0x0001017c) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x000113df) input_focus_pane_vc_g

0x1cdf,	// (0x00003a31) data_form_pane_vc_ParamLimits

0x1cdf,	// (0x00003a31) data_form_pane_vc

0x1ceb,	// (0x00003a3d) form_field_data_pane_vc_g1

0x4178,	// (0x00005eca) form_field_data_pane_vc_t1_ParamLimits

0x4178,	// (0x00005eca) form_field_data_pane_vc_t1

0xee20,	// (0x00010b72) input_focus_pane_vc_ParamLimits

0xee20,	// (0x00010b72) input_focus_pane_vc

0x4192,	// (0x00005ee4) button_value_adjust_pane_cp3_vc

0x419a,	// (0x00005eec) button_value_adjust_pane_cp5_vc

0x41a2,	// (0x00005ef4) form_field_data_pane_vc_ParamLimits

0x41a2,	// (0x00005ef4) form_field_data_pane_vc

0x41bd,	// (0x00005f0f) form_field_data_pane_vc_cp2

0x41c5,	// (0x00005f17) form_field_data_wide_pane_vc_ParamLimits

0x41c5,	// (0x00005f17) form_field_data_wide_pane_vc

0x41df,	// (0x00005f31) form_field_data_wide_pane_vc_cp2

0x41e7,	// (0x00005f39) form_field_popup_pane_vc_ParamLimits

0x41e7,	// (0x00005f39) form_field_popup_pane_vc

0x4202,	// (0x00005f54) form_field_popup_wide_pane_vc_ParamLimits

0x4202,	// (0x00005f54) form_field_popup_wide_pane_vc

0x421c,	// (0x00005f6e) form_field_slider_pane_vc_ParamLimits

0x421c,	// (0x00005f6e) form_field_slider_pane_vc

0x422f,	// (0x00005f81) form_field_slider_wide_pane_vc_ParamLimits

0x422f,	// (0x00005f81) form_field_slider_wide_pane_vc

0xc251,	// (0x0000dfa3) grid_touch_1_pane_ParamLimits

0xc251,	// (0x0000dfa3) grid_touch_1_pane

0xc265,	// (0x0000dfb7) grid_touch_2_pane_ParamLimits

0xc265,	// (0x0000dfb7) grid_touch_2_pane

0x4306,	// (0x00006058) touch_pane_g1_ParamLimits

0x4306,	// (0x00006058) touch_pane_g1

0x4268,	// (0x00005fba) cell_app_pane_cp_wide_ParamLimits

0x4268,	// (0x00005fba) cell_app_pane_cp_wide

0x4279,	// (0x00005fcb) grid_popup_fast_wide_pane_ParamLimits

0x4279,	// (0x00005fcb) grid_popup_fast_wide_pane

0x428d,	// (0x00005fdf) scroll_pane_cp19_ParamLimits

0x428d,	// (0x00005fdf) scroll_pane_cp19

0xe5a3,	// (0x000102f5) bg_popup_window_pane_cp20

0x42a1,	// (0x00005ff3) listscroll_popup_fast_wide_pane

0xf036,	// (0x00010d88) grid_indicator_nsta_pane

0x42a9,	// (0x00005ffb) clock_nsta_pane_g1

0x42b2,	// (0x00006004) clock_nsta_pane_t1

0xc291,	// (0x0000dfe3) cell_indicator_nsta_pane_ParamLimits

0xc291,	// (0x0000dfe3) cell_indicator_nsta_pane

0x4306,	// (0x00006058) cell_indicator_nsta_pane_g1

0xc2ae,	// (0x0000e000) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x000117fb) cell_indicator_nsta_pane_g

0x432a,	// (0x0000607c) clock_nsta_pane_cp

0x4332,	// (0x00006084) indicator_nsta_pane_cp

0x433b,	// (0x0000608d) nsta_clock_indic_pane_g1

0xe7a9,	// (0x000104fb) grid_indicator_pane

0xf4f7,	// (0x00011249) scroll_pane_cp29

0x0463,	// (0x000021b5) indicator_nsta_pane_cp2_ParamLimits

0x0463,	// (0x000021b5) indicator_nsta_pane_cp2

0xe6ca,	// (0x0001041c) main_apps_wheel_pane

0x1f01,	// (0x00003c53) form_midp_field_text_pane_ParamLimits

0x2050,	// (0x00003da2) scroll_bar_cp050_ParamLimits

0x43a4,	// (0x000060f6) cell_indicator_pane_ParamLimits

0x43a4,	// (0x000060f6) cell_indicator_pane

0x43bc,	// (0x0000610e) cell_indicator_pane_g1

0xc2c4,	// (0x0000e016) grid_wheel_folder_pane_ParamLimits

0xc2c4,	// (0x0000e016) grid_wheel_folder_pane

0xc2d2,	// (0x0000e024) list_wheel_apps_pane_ParamLimits

0xc2d2,	// (0x0000e024) list_wheel_apps_pane

0xc2e0,	// (0x0000e032) main_apps_wheel_pane_g1_ParamLimits

0xc2e0,	// (0x0000e032) main_apps_wheel_pane_g1

0xc2f0,	// (0x0000e042) main_apps_wheel_pane_g2_ParamLimits

0xc2f0,	// (0x0000e042) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00011817) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00011817) main_apps_wheel_pane_g

0xc300,	// (0x0000e052) main_apps_wheel_pane_t1_ParamLimits

0xc300,	// (0x0000e052) main_apps_wheel_pane_t1

0xc318,	// (0x0000e06a) list_wheel_apps_pane_g1

0xc320,	// (0x0000e072) list_wheel_apps_pane_g2

0xc328,	// (0x0000e07a) list_wheel_apps_pane_g3

0xc330,	// (0x0000e082) list_wheel_apps_pane_g4

0xc338,	// (0x0000e08a) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0001181c) list_wheel_apps_pane_g

0x0766,	// (0x000024b8) navi_icon_text_pane

0xb5cb,	// (0x0000d31d) aid_fill_nsta

0xc355,	// (0x0000e0a7) navi_icon_text_pane_g1

0xc361,	// (0x0000e0b3) navi_icon_text_pane_t1

0xaba3,	// (0x0000c8f5) list_set_graphic_pane_t1_ParamLimits

0xaba3,	// (0x0000c8f5) list_set_graphic_pane_t1

0x27a1,	// (0x000044f3) popup_midp_note_alarm_window_t6_ParamLimits

0x27a1,	// (0x000044f3) popup_midp_note_alarm_window_t6

0x27b3,	// (0x00004505) popup_midp_note_alarm_window_t7_ParamLimits

0x27b3,	// (0x00004505) popup_midp_note_alarm_window_t7

0x27c5,	// (0x00004517) popup_midp_note_alarm_window_t8_ParamLimits

0x27c5,	// (0x00004517) popup_midp_note_alarm_window_t8

0x27d7,	// (0x00004529) popup_midp_note_alarm_window_t9_ParamLimits

0x27d7,	// (0x00004529) popup_midp_note_alarm_window_t9

0x27e9,	// (0x0000453b) popup_midp_note_alarm_window_t10_ParamLimits

0x27e9,	// (0x0000453b) popup_midp_note_alarm_window_t10

0x27fb,	// (0x0000454d) popup_midp_note_alarm_window_t11_ParamLimits

0x27fb,	// (0x0000454d) popup_midp_note_alarm_window_t11

0x280d,	// (0x0000455f) scroll_pane_cp17_ParamLimits

0x280d,	// (0x0000455f) scroll_pane_cp17

0x28c3,	// (0x00004615) volume_small_pane_cp_g1

0x44b5,	// (0x00006207) volume_small_pane_cp_g2

0x44be,	// (0x00006210) volume_small_pane_cp_g3

0x44c7,	// (0x00006219) volume_small_pane_cp_g4

0x44d0,	// (0x00006222) volume_small_pane_cp_g5

0x44d9,	// (0x0000622b) volume_small_pane_cp_g6

0x44e2,	// (0x00006234) volume_small_pane_cp_g7

0x44eb,	// (0x0000623d) volume_small_pane_cp_g8

0x44f4,	// (0x00006246) volume_small_pane_cp_g9

0x44fd,	// (0x0000624f) volume_small_pane_cp_g10

0x09bb,	// (0x0000270d) midp_ticker_pane_g1_ParamLimits

0x09c7,	// (0x00002719) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x000114ab) midp_ticker_pane_g_ParamLimits

0xacd6,	// (0x0000ca28) midp_ticker_pane_t1_ParamLimits

0xb5ef,	// (0x0000d341) aid_fill_nsta_2

0x203c,	// (0x00003d8e) list_form2_midp_pane

0x3463,	// (0x000051b5) midp_editing_number_pane_ParamLimits

0x3472,	// (0x000051c4) midp_ticker_pane_ParamLimits

0x4506,	// (0x00006258) form2_midp_field_pane

0x452a,	// (0x0000627c) scroll_pane_cp51

0x454a,	// (0x0000629c) form2_midp_button_pane_ParamLimits

0x454a,	// (0x0000629c) form2_midp_button_pane

0x455c,	// (0x000062ae) form2_midp_content_pane_ParamLimits

0x455c,	// (0x000062ae) form2_midp_content_pane

0x4576,	// (0x000062c8) form2_midp_field_choice_group_pane

0x457e,	// (0x000062d0) form2_midp_field_pane_g1

0x4586,	// (0x000062d8) form2_midp_field_pane_g2

0x458e,	// (0x000062e0) form2_midp_field_pane_g3

0x4596,	// (0x000062e8) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00011841) form2_midp_field_pane_g

0x459e,	// (0x000062f0) form2_midp_gauge_slider_pane

0x45a6,	// (0x000062f8) form2_midp_gauge_wait_pane

0x45ae,	// (0x00006300) form2_midp_image_pane_ParamLimits

0x45ae,	// (0x00006300) form2_midp_image_pane

0x45c9,	// (0x0000631b) form2_midp_label_pane_ParamLimits

0x45c9,	// (0x0000631b) form2_midp_label_pane

0xc38f,	// (0x0000e0e1) form2_midp_label_pane_cp_ParamLimits

0xc38f,	// (0x0000e0e1) form2_midp_label_pane_cp

0x4609,	// (0x0000635b) form2_midp_string_pane_ParamLimits

0x4609,	// (0x0000635b) form2_midp_string_pane

0xc3b0,	// (0x0000e102) form2_midp_text_pane_ParamLimits

0xc3b0,	// (0x0000e102) form2_midp_text_pane

0x463c,	// (0x0000638e) form2_midp_time_pane

0x464c,	// (0x0000639e) input_focus_pane_cp51_ParamLimits

0x464c,	// (0x0000639e) input_focus_pane_cp51

0x4664,	// (0x000063b6) form2_midp_label_pane_t1_ParamLimits

0x4664,	// (0x000063b6) form2_midp_label_pane_t1

0xc3d1,	// (0x0000e123) form2_mdip_text_pane_t1_ParamLimits

0xc3d1,	// (0x0000e123) form2_mdip_text_pane_t1

0x46cc,	// (0x0000641e) form2_midp_time_pane_t1

0x46e7,	// (0x00006439) form2_midp_gauge_slider_pane_t1

0xc3f0,	// (0x0000e142) form2_midp_gauge_slider_pane_t2

0xc402,	// (0x0000e154) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0001184a) form2_midp_gauge_slider_pane_t

0x471d,	// (0x0000646f) form2_midp_slider_pane

0x4729,	// (0x0000647b) form2_midp_gauge_wait_pane_t1

0x4737,	// (0x00006489) form2_midp_wait_pane_ParamLimits

0x4737,	// (0x00006489) form2_midp_wait_pane

0x1d32,	// (0x00003a84) list_single_2graphic_pane_cp4_ParamLimits

0x1d32,	// (0x00003a84) list_single_2graphic_pane_cp4

0x4762,	// (0x000064b4) list_single_midp_graphic_pane_cp_ParamLimits

0x4762,	// (0x000064b4) list_single_midp_graphic_pane_cp

0xe5a3,	// (0x000102f5) list_highlight_pane_cp20

0x4786,	// (0x000064d8) list_single_2graphic_pane_g1_cp4

0x39e6,	// (0x00005738) list_single_2graphic_pane_g2_cp4

0x478e,	// (0x000064e0) list_single_2graphic_pane_t1_cp4

0xe6ca,	// (0x0001041c) list_highlight_pane_cp21

0x479d,	// (0x000064ef) list_single_midp_graphic_pane_g4_cp

0x47ac,	// (0x000064fe) list_single_midp_graphic_pane_t1_cp

0xc414,	// (0x0000e166) form2_mdip_string_pane_t1_ParamLimits

0xc414,	// (0x0000e166) form2_mdip_string_pane_t1

0xe5a3,	// (0x000102f5) bg_wml_button_pane_cp2

0xe42a,	// (0x0001017c) form2_midp_image_pane_g1

0xed29,	// (0x00010a7b) list_double_large_graphic_pane_g5_ParamLimits

0xed29,	// (0x00010a7b) list_double_large_graphic_pane_g5

0x0e5f,	// (0x00002bb1) midp_form_pane_ParamLimits

0xe6ca,	// (0x0001041c) main_apps_wheel_pane_ParamLimits

0xb2e3,	// (0x0000d035) popup_preview_window_ParamLimits

0xb2e3,	// (0x0000d035) popup_preview_window

0x142f,	// (0x00003181) popup_touch_info_window_ParamLimits

0x142f,	// (0x00003181) popup_touch_info_window

0x1451,	// (0x000031a3) popup_touch_menu_window_ParamLimits

0x1451,	// (0x000031a3) popup_touch_menu_window

0xe420,	// (0x00010172) bg_popup_sub_pane_cp6

0x4866,	// (0x000065b8) list_touch_menu_pane

0x486e,	// (0x000065c0) list_single_touch_menu_pane_ParamLimits

0x486e,	// (0x000065c0) list_single_touch_menu_pane

0x4886,	// (0x000065d8) list_single_touch_menu_pane_t1

0xe6ca,	// (0x0001041c) bg_popup_sub_pane_cp7_ParamLimits

0xe6ca,	// (0x0001041c) bg_popup_sub_pane_cp7

0x4894,	// (0x000065e6) heading_sub_pane

0x489c,	// (0x000065ee) list_touch_info_pane_ParamLimits

0x489c,	// (0x000065ee) list_touch_info_pane

0x48ab,	// (0x000065fd) list_single_touch_info_pane_ParamLimits

0x48ab,	// (0x000065fd) list_single_touch_info_pane

0x48bd,	// (0x0000660f) list_single_touch_info_pane_t1

0x48cb,	// (0x0000661d) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00011858) list_single_touch_info_pane_t

0x08ea,	// (0x0000263c) bg_popup_heading_pane_cp

0x48d9,	// (0x0000662b) heading_sub_pane_t1

0x1beb,	// (0x0000393d) bg_popup_preview_window_pane_cp_ParamLimits

0x1beb,	// (0x0000393d) bg_popup_preview_window_pane_cp

0x4894,	// (0x000065e6) heading_preview_pane

0x489c,	// (0x000065ee) list_preview_pane_ParamLimits

0x489c,	// (0x000065ee) list_preview_pane

0x48e7,	// (0x00006639) popup_preview_window_g1

0x48ab,	// (0x000065fd) list_single_preview_pane_ParamLimits

0x48ab,	// (0x000065fd) list_single_preview_pane

0x48ef,	// (0x00006641) list_single_preview_pane_g1

0x48f7,	// (0x00006649) list_single_preview_pane_t1

0x48bd,	// (0x0000660f) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0001185d) list_single_preview_pane_t

0x4905,	// (0x00006657) bg_popup_heading_pane_cp2_ParamLimits

0x4905,	// (0x00006657) bg_popup_heading_pane_cp2

0x491b,	// (0x0000666d) heading_preview_pane_g1

0x4923,	// (0x00006675) heading_preview_pane_t1_ParamLimits

0x4923,	// (0x00006675) heading_preview_pane_t1

0xe7c0,	// (0x00010512) soft_indicator_pane_t1_ParamLimits

0xecf5,	// (0x00010a47) scroll_pane_ParamLimits

0xf3f3,	// (0x00011145) scroll_sc2_left_pane

0xf3fc,	// (0x0001114e) scroll_sc2_right_pane

0xf41b,	// (0x0001116d) scroll_bg_pane_g1_ParamLimits

0xf430,	// (0x00011182) scroll_bg_pane_g2_ParamLimits

0xf448,	// (0x0001119a) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00011436) scroll_bg_pane_g_ParamLimits

0xf41b,	// (0x0001116d) scroll_handle_pane_g1_ParamLimits

0xf46a,	// (0x000111bc) scroll_handle_pane_g2_ParamLimits

0xf448,	// (0x0001119a) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001143d) scroll_handle_pane_g_ParamLimits

0x0e8f,	// (0x00002be1) popup_choice_list_window_ParamLimits

0x0e8f,	// (0x00002be1) popup_choice_list_window

0x1952,	// (0x000036a4) choice_list_pane

0x1a1a,	// (0x0000376c) cell_toolbar_pane_t1

0x1a42,	// (0x00003794) toolbar_button_pane_ParamLimits

0x2e49,	// (0x00004b9b) ai_gene_pane_1_t2_ParamLimits

0x2e49,	// (0x00004b9b) ai_gene_pane_1_t2

0x0001,

0xf907,	// (0x00011659) ai_gene_pane_1_t_ParamLimits

0xf907,	// (0x00011659) ai_gene_pane_1_t

0x4940,	// (0x00006692) scroll_sc2_left_pane_g1

0x4940,	// (0x00006692) scroll_sc2_right_pane_g1

0x0e5f,	// (0x00002bb1) bg_popup_sub_pane_cp10

0x494a,	// (0x0000669c) list_choice_list_pane

0x4963,	// (0x000066b5) list_single_choice_list_pane_ParamLimits

0x4963,	// (0x000066b5) list_single_choice_list_pane

0x497b,	// (0x000066cd) list_single_choice_list_pane_g1

0xf009,	// (0x00010d5b) list_single_choice_list_pane_t1_ParamLimits

0xf009,	// (0x00010d5b) list_single_choice_list_pane_t1

0x4983,	// (0x000066d5) choice_list_pane_g1

0x498b,	// (0x000066dd) choice_list_pane_t1

0xe420,	// (0x00010172) input_focus_pane_cp11

0xf1e5,	// (0x00010f37) title_pane_stacon_g2_ParamLimits

0xf1e5,	// (0x00010f37) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001141c) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001141c) title_pane_stacon_g

0x08ea,	// (0x0000263c) cursor_press_pane

0xaf60,	// (0x0000ccb2) popup_fep_hwr_window_ParamLimits

0xaf60,	// (0x0000ccb2) popup_fep_hwr_window

0x0fd3,	// (0x00002d25) popup_fep_vkb_window_ParamLimits

0x0fd3,	// (0x00002d25) popup_fep_vkb_window

0x4999,	// (0x000066eb) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00011886) fep_vkb_side_pane_g_ParamLimits

0x49da,	// (0x0000672c) fep_hwr_candidate_pane_ParamLimits

0x49da,	// (0x0000672c) fep_hwr_candidate_pane

0x4a04,	// (0x00006756) fep_hwr_side_pane_ParamLimits

0x4a04,	// (0x00006756) fep_hwr_side_pane

0x4a26,	// (0x00006778) fep_hwr_top_pane_ParamLimits

0x4a26,	// (0x00006778) fep_hwr_top_pane

0x4a3e,	// (0x00006790) fep_hwr_write_pane_ParamLimits

0x4a3e,	// (0x00006790) fep_hwr_write_pane

0xfb34,	// (0x00011886) fep_vkb_side_pane_g

0x4a78,	// (0x000067ca) fep_hwr_top_pane_g1

0x4a8a,	// (0x000067dc) fep_hwr_top_pane_g2

0x4a9c,	// (0x000067ee) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00011862) fep_hwr_top_pane_g

0x4ab1,	// (0x00006803) fep_hwr_top_text_pane

0x0028,	// (0x00001d7a) fep_hwr_top_text_pane_g1

0x4b8d,	// (0x000068df) fep_hwr_top_text_pane_t1

0x4bed,	// (0x0000693f) fep_hwr_candidate_pane_g1

0x4e5e,	// (0x00006bb0) fep_vkb_keypad_pane_g3_ParamLimits

0x4e5e,	// (0x00006bb0) fep_vkb_keypad_pane_g3

0x4e8a,	// (0x00006bdc) fep_vkb_keypad_pane_g4_ParamLimits

0x4e8a,	// (0x00006bdc) fep_vkb_keypad_pane_g4

0x4f01,	// (0x00006c53) fep_vkb_bottom_pane_g2_ParamLimits

0x4f01,	// (0x00006c53) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0001188d) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0001188d) fep_vkb_bottom_pane_g

0x4940,	// (0x00006692) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00011897) cell_vkb_side_pane_g

0x4f8c,	// (0x00006cde) cell_vkb_side_pane_t1

0x4f9a,	// (0x00006cec) cell_vkb_side_pane_t1_copy1

0x4940,	// (0x00006692) bg_fep_vkb_candidate_pane_g2

0x50de,	// (0x00006e30) cell_vkb_candidate_pane_ParamLimits

0x4c21,	// (0x00006973) aid_size_cell_vkb_ParamLimits

0x4c21,	// (0x00006973) aid_size_cell_vkb

0x50de,	// (0x00006e30) cell_vkb_candidate_pane

0x5118,	// (0x00006e6a) bg_popup_fep_shadow_pane_g1

0xc509,	// (0x0000e25b) fep_vkb_bottom_pane_ParamLimits

0xc509,	// (0x0000e25b) fep_vkb_bottom_pane

0x4cf0,	// (0x00006a42) fep_vkb_candidate_pane_ParamLimits

0x4cf0,	// (0x00006a42) fep_vkb_candidate_pane

0xc535,	// (0x0000e287) fep_vkb_keypad_pane_ParamLimits

0xc535,	// (0x0000e287) fep_vkb_keypad_pane

0xc55c,	// (0x0000e2ae) fep_vkb_side_pane_ParamLimits

0xc55c,	// (0x0000e2ae) fep_vkb_side_pane

0xc598,	// (0x0000e2ea) fep_vkb_top_pane_ParamLimits

0xc598,	// (0x0000e2ea) fep_vkb_top_pane

0x4db7,	// (0x00006b09) fep_vkb_top_pane_g1_ParamLimits

0x4db7,	// (0x00006b09) fep_vkb_top_pane_g1

0x4dc6,	// (0x00006b18) fep_vkb_top_pane_g2_ParamLimits

0x4dc6,	// (0x00006b18) fep_vkb_top_pane_g2

0x4dd5,	// (0x00006b27) fep_vkb_top_pane_g3_ParamLimits

0x4dd5,	// (0x00006b27) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0001187d) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0001187d) fep_vkb_top_pane_g

0x4df3,	// (0x00006b45) fep_vkb_top_text_pane_ParamLimits

0x4df3,	// (0x00006b45) fep_vkb_top_text_pane

0xc5d4,	// (0x0000e326) fep_vkb_side_pane_g1_ParamLimits

0xc5d4,	// (0x0000e326) fep_vkb_side_pane_g1

0x4e4d,	// (0x00006b9f) grid_vkb_side_pane_ParamLimits

0x4e4d,	// (0x00006b9f) grid_vkb_side_pane

0x5120,	// (0x00006e72) bg_popup_fep_shadow_pane_g2

0x5129,	// (0x00006e7b) bg_popup_fep_shadow_pane_g3

0x5131,	// (0x00006e83) bg_popup_fep_shadow_pane_g4

0x513a,	// (0x00006e8c) bg_popup_fep_shadow_pane_g5

0x5144,	// (0x00006e96) bg_popup_fep_shadow_pane_g6

0x514c,	// (0x00006e9e) bg_popup_fep_shadow_pane_g7

0xef04,	// (0x00010c56) bg_popup_fep_shadow_pane_g8

0x4eac,	// (0x00006bfe) grid_vkb_keypad_number_pane_ParamLimits

0x4eac,	// (0x00006bfe) grid_vkb_keypad_number_pane

0x4ec0,	// (0x00006c12) grid_vkb_keypad_pane_ParamLimits

0x4ec0,	// (0x00006c12) grid_vkb_keypad_pane

0x4ee6,	// (0x00006c38) fep_vkb_bottom_pane_g1_ParamLimits

0x4ee6,	// (0x00006c38) fep_vkb_bottom_pane_g1

0x4f0f,	// (0x00006c61) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f0f,	// (0x00006c61) grid_vkb_keypad_bottom_left_pane

0x4f24,	// (0x00006c76) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f24,	// (0x00006c76) grid_vkb_keypad_bottom_right_pane

0x4f39,	// (0x00006c8b) fep_vkb_top_text_pane_g1

0xc61b,	// (0x0000e36d) fep_vkb_top_text_pane_t1

0xc62d,	// (0x0000e37f) cell_vkb_side_pane_ParamLimits

0xc62d,	// (0x0000e37f) cell_vkb_side_pane

0x4940,	// (0x00006692) cell_vkb_side_pane_g1

0x4fa8,	// (0x00006cfa) cell_vkb_keypad_pane_ParamLimits

0x4fa8,	// (0x00006cfa) cell_vkb_keypad_pane

0x5035,	// (0x00006d87) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x000118aa) bg_popup_fep_shadow_pane_g

0x4940,	// (0x00006692) cell_hwr_side_pane_g1

0x4940,	// (0x00006692) cell_hwr_side_pane_g2

0x503f,	// (0x00006d91) cell_vkb_keypad_pane_t1

0xc643,	// (0x0000e395) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc643,	// (0x0000e395) cell_vkb_keypad_bottom_left_pane

0xc658,	// (0x0000e3aa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc658,	// (0x0000e3aa) cell_vkb_keypad_bottom_right_pane

0x4940,	// (0x00006692) cell_vkb_keypad_bottom_left_pane_g1

0x4940,	// (0x00006692) cell_vkb_keypad_bottom_right_pane_g1

0x50a3,	// (0x00006df5) cell_vkb_keypad_number_pane_ParamLimits

0x50a3,	// (0x00006df5) cell_vkb_keypad_number_pane

0x50c2,	// (0x00006e14) cell_vkb_keypad_number_pane_g1

0x50cc,	// (0x00006e1e) cell_vkb_keypad_number_pane_g2

0x50d5,	// (0x00006e27) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0001189c) cell_vkb_keypad_number_pane_g

0x503f,	// (0x00006d91) cell_vkb_keypad_number_pane_t1

0x50ff,	// (0x00006e51) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00011897) cell_hwr_side_pane_g

0x515e,	// (0x00006eb0) cell_hwr_side_pane_t1

0x516c,	// (0x00006ebe) cell_hwr_side_pane_t1_copy1

0x4de5,	// (0x00006b37) cell_hwr_candidate_pane_g1

0x51bc,	// (0x00006f0e) cell_hwr_candidate_pane_t1

0x4940,	// (0x00006692) cell_vkb_candidate_pane_g2

0x5210,	// (0x00006f62) cell_vkb_candidate_pane_t1

0x49a1,	// (0x000066f3) bg_popup_fep_shadow_pane_ParamLimits

0x49a1,	// (0x000066f3) bg_popup_fep_shadow_pane

0x4a58,	// (0x000067aa) bg_fep_hwr_top_pane_g4

0x4ac6,	// (0x00006818) bg_hwr_side_pane_g1_ParamLimits

0x4ac6,	// (0x00006818) bg_hwr_side_pane_g1

0xc4c2,	// (0x0000e214) cell_hwr_side_pane_ParamLimits

0xc4c2,	// (0x0000e214) cell_hwr_side_pane

0x4b38,	// (0x0000688a) fep_hwr_write_pane_g1_ParamLimits

0x4b38,	// (0x0000688a) fep_hwr_write_pane_g1

0x4b45,	// (0x00006897) fep_hwr_write_pane_g2_ParamLimits

0x4b45,	// (0x00006897) fep_hwr_write_pane_g2

0x4b52,	// (0x000068a4) fep_hwr_write_pane_g3_ParamLimits

0x4b52,	// (0x000068a4) fep_hwr_write_pane_g3

0xc4e2,	// (0x0000e234) fep_hwr_write_pane_g4_ParamLimits

0xc4e2,	// (0x0000e234) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00011869) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00011869) fep_hwr_write_pane_g

0x4a58,	// (0x000067aa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4a58,	// (0x000067aa) bg_fep_hwr_candidate_pane_g2

0x4b9b,	// (0x000068ed) cell_hwr_candidate_pane_ParamLimits

0x4b9b,	// (0x000068ed) cell_hwr_candidate_pane

0x4bed,	// (0x0000693f) fep_hwr_candidate_pane_g1_ParamLimits

0x4c4f,	// (0x000069a1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c4f,	// (0x000069a1) bg_popup_fep_shadow_pane_cp2

0x4de5,	// (0x00006b37) fep_vkb_top_pane_g4_ParamLimits

0x4de5,	// (0x00006b37) fep_vkb_top_pane_g4

0x4e2b,	// (0x00006b7d) fep_vkb_side_pane_g2_ParamLimits

0x4e2b,	// (0x00006b7d) fep_vkb_side_pane_g2

0xa636,	// (0x0000c388) list_setting_pane_t4_ParamLimits

0xa636,	// (0x0000c388) list_setting_pane_t4

0xa6b2,	// (0x0000c404) list_setting_number_pane_t5_ParamLimits

0xa6b2,	// (0x0000c404) list_setting_number_pane_t5

0xaa19,	// (0x0000c76b) list_double_heading_pane_cp2_ParamLimits

0xaa19,	// (0x0000c76b) list_double_heading_pane_cp2

0xee46,	// (0x00010b98) list_double_heading_pane_g1_cp2_ParamLimits

0xee46,	// (0x00010b98) list_double_heading_pane_g1_cp2

0xee52,	// (0x00010ba4) list_double_heading_pane_g2_cp2_ParamLimits

0xee52,	// (0x00010ba4) list_double_heading_pane_g2_cp2

0x521e,	// (0x00006f70) list_double_heading_pane_t1_cp2_ParamLimits

0x521e,	// (0x00006f70) list_double_heading_pane_t1_cp2

0x5234,	// (0x00006f86) list_double_heading_pane_t2_cp2_ParamLimits

0x5234,	// (0x00006f86) list_double_heading_pane_t2_cp2

0xe418,	// (0x0001016a) aid_value_unit2

0xe5f7,	// (0x00010349) popup_preview_fixed_window

0xe8a0,	// (0x000105f2) bg_popup_preview_window_pane_cp02

0x5246,	// (0x00006f98) list_preview_fixed_pane

0x528c,	// (0x00006fde) list_empty_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_empty_pane_fp

0x528c,	// (0x00006fde) list_single_cale_day_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_cale_day_pane_fp

0x528c,	// (0x00006fde) list_single_graphic_heading_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_graphic_heading_pane_fp

0x528c,	// (0x00006fde) list_single_graphic_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_graphic_pane_fp

0x528c,	// (0x00006fde) list_single_heading_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_heading_pane_fp

0x528c,	// (0x00006fde) list_single_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_pane_fp

0x52a5,	// (0x00006ff7) list_single_pane_fp_g1_ParamLimits

0x52a5,	// (0x00006ff7) list_single_pane_fp_g1

0x52b1,	// (0x00007003) list_single_pane_fp_g2_ParamLimits

0x52b1,	// (0x00007003) list_single_pane_fp_g2

0x52bd,	// (0x0000700f) list_single_pane_fp_g3_ParamLimits

0x52bd,	// (0x0000700f) list_single_pane_fp_g3

0x52d1,	// (0x00007023) list_single_pane_fp_g4_ParamLimits

0x52d1,	// (0x00007023) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x000118cb) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x000118cb) list_single_pane_fp_g

0x52dd,	// (0x0000702f) list_single_pane_fp_t1_ParamLimits

0x52dd,	// (0x0000702f) list_single_pane_fp_t1

0x52f4,	// (0x00007046) list_single_graphic_pane_fp_g1_ParamLimits

0x52f4,	// (0x00007046) list_single_graphic_pane_fp_g1

0x52a5,	// (0x00006ff7) list_single_graphic_pane_fp_g2_ParamLimits

0x52a5,	// (0x00006ff7) list_single_graphic_pane_fp_g2

0x52b1,	// (0x00007003) list_single_graphic_pane_fp_g3_ParamLimits

0x52b1,	// (0x00007003) list_single_graphic_pane_fp_g3

0x52bd,	// (0x0000700f) list_single_graphic_pane_fp_g4_ParamLimits

0x52bd,	// (0x0000700f) list_single_graphic_pane_fp_g4

0x52d1,	// (0x00007023) list_single_graphic_pane_fp_g5_ParamLimits

0x52d1,	// (0x00007023) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x000118d4) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x000118d4) list_single_graphic_pane_fp_g

0x5300,	// (0x00007052) list_single_graphic_pane_fp_t1_ParamLimits

0x5300,	// (0x00007052) list_single_graphic_pane_fp_t1

0x52f4,	// (0x00007046) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x52f4,	// (0x00007046) list_single_graphic_heading_pane_fp_g1

0x52a5,	// (0x00006ff7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x52a5,	// (0x00006ff7) list_single_graphic_heading_pane_fp_g2

0x52b1,	// (0x00007003) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x52b1,	// (0x00007003) list_single_graphic_heading_pane_fp_g3

0x52bd,	// (0x0000700f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x52bd,	// (0x0000700f) list_single_graphic_heading_pane_fp_g4

0x52d1,	// (0x00007023) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x52d1,	// (0x00007023) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x000118d4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x000118d4) list_single_graphic_heading_pane_fp_g

0x5316,	// (0x00007068) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5316,	// (0x00007068) list_single_graphic_heading_pane_fp_t1

0x532c,	// (0x0000707e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x532c,	// (0x0000707e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x000118df) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x000118df) list_single_graphic_heading_pane_fp_t

0x533e,	// (0x00007090) list_single_cale_day_pane_fp_g1_ParamLimits

0x533e,	// (0x00007090) list_single_cale_day_pane_fp_g1

0x5376,	// (0x000070c8) list_single_cale_day_pane_fp_g2_ParamLimits

0x5376,	// (0x000070c8) list_single_cale_day_pane_fp_g2

0x5382,	// (0x000070d4) list_single_cale_day_pane_fp_g3_ParamLimits

0x5382,	// (0x000070d4) list_single_cale_day_pane_fp_g3

0x53aa,	// (0x000070fc) list_single_cale_day_pane_fp_g4_ParamLimits

0x53aa,	// (0x000070fc) list_single_cale_day_pane_fp_g4

0x53ce,	// (0x00007120) list_single_cale_day_pane_fp_g5_ParamLimits

0x53ce,	// (0x00007120) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x000118e4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x000118e4) list_single_cale_day_pane_fp_g

0x53f2,	// (0x00007144) list_single_cale_day_pane_fp_t1_ParamLimits

0x53f2,	// (0x00007144) list_single_cale_day_pane_fp_t1

0x5418,	// (0x0000716a) list_single_cale_day_pane_fp_t2_ParamLimits

0x5418,	// (0x0000716a) list_single_cale_day_pane_fp_t2

0x5431,	// (0x00007183) list_single_cale_day_pane_fp_t3_ParamLimits

0x5431,	// (0x00007183) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x000118ef) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x000118ef) list_single_cale_day_pane_fp_t

0x52a5,	// (0x00006ff7) list_empty_pane_fp_g1_ParamLimits

0x52a5,	// (0x00006ff7) list_empty_pane_fp_g1

0x544a,	// (0x0000719c) list_empty_pane_fp_t1

0x5458,	// (0x000071aa) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x000118f6) list_empty_pane_fp_t

0x52a5,	// (0x00006ff7) list_single_heading_pane_fp_g1_ParamLimits

0x52a5,	// (0x00006ff7) list_single_heading_pane_fp_g1

0x52b1,	// (0x00007003) list_single_heading_pane_fp_g2_ParamLimits

0x52b1,	// (0x00007003) list_single_heading_pane_fp_g2

0x52bd,	// (0x0000700f) list_single_heading_pane_fp_g3_ParamLimits

0x52bd,	// (0x0000700f) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x000118fb) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x000118fb) list_single_heading_pane_fp_g

0x5466,	// (0x000071b8) list_single_heading_pane_fp_t1_ParamLimits

0x5466,	// (0x000071b8) list_single_heading_pane_fp_t1

0x5478,	// (0x000071ca) list_single_heading_pane_fp_t2_ParamLimits

0x5478,	// (0x000071ca) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00011902) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00011902) list_single_heading_pane_fp_t

0xf01e,	// (0x00010d70) aid_size_cell_fast

0xe883,	// (0x000105d5) soft_indicator_pane_cp1_t1

0xf069,	// (0x00010dbb) cell_app_pane_cp2_ParamLimits

0xf069,	// (0x00010dbb) cell_app_pane_cp2

0x49c3,	// (0x00006715) fep_hwr_candidate_drop_down_list_pane

0x4c07,	// (0x00006959) fep_hwr_candidate_pane_g3_ParamLimits

0x4c07,	// (0x00006959) fep_hwr_candidate_pane_g3

0x4c14,	// (0x00006966) fep_hwr_candidate_pane_g4_ParamLimits

0x4c14,	// (0x00006966) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00011876) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00011876) fep_hwr_candidate_pane_g

0x4cdf,	// (0x00006a31) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4cdf,	// (0x00006a31) fep_vkb_candidate_drop_down_list_pane

0x5107,	// (0x00006e59) fep_vkb_candidate_pane_g3

0x510f,	// (0x00006e61) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x000118a3) fep_vkb_candidate_pane_g

0x4de5,	// (0x00006b37) cell_hwr_candidate_pane_g1_ParamLimits

0x517a,	// (0x00006ecc) cell_hwr_candidate_pane_g3_ParamLimits

0x517a,	// (0x00006ecc) cell_hwr_candidate_pane_g3

0x519b,	// (0x00006eed) cell_hwr_candidate_pane_g4_ParamLimits

0x519b,	// (0x00006eed) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x000118bd) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x000118bd) cell_hwr_candidate_pane_g

0x51da,	// (0x00006f2c) cell_vkb_candidate_pane_g3_ParamLimits

0x51da,	// (0x00006f2c) cell_vkb_candidate_pane_g3

0x51f5,	// (0x00006f47) cell_vkb_candidate_pane_g4_ParamLimits

0x51f5,	// (0x00006f47) cell_vkb_candidate_pane_g4

0x548e,	// (0x000071e0) cell_app_pane_cp2_g1_ParamLimits

0x548e,	// (0x000071e0) cell_app_pane_cp2_g1

0x54ac,	// (0x000071fe) cell_app_pane_cp2_g2_ParamLimits

0x54ac,	// (0x000071fe) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00011907) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00011907) cell_app_pane_cp2_g

0x54b8,	// (0x0000720a) cell_app_pane_cp2_t1_ParamLimits

0x54b8,	// (0x0000720a) cell_app_pane_cp2_t1

0xee20,	// (0x00010b72) grid_highlight_pane_cp1_ParamLimits

0xee20,	// (0x00010b72) grid_highlight_pane_cp1

0x54ca,	// (0x0000721c) cell_hwr_candidate_pane_cp1_ParamLimits

0x54ca,	// (0x0000721c) cell_hwr_candidate_pane_cp1

0x4de5,	// (0x00006b37) fep_hwr_candidate_drop_down_list_pane_g1

0x54ee,	// (0x00007240) fep_hwr_candidate_drop_down_list_pane_g2

0x54fb,	// (0x0000724d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0001190c) fep_hwr_candidate_drop_down_list_pane_g

0x5508,	// (0x0000725a) fep_hwr_candidate_drop_down_list_scroll_pane

0x5511,	// (0x00007263) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5511,	// (0x00007263) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x551e,	// (0x00007270) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x551e,	// (0x00007270) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x552b,	// (0x0000727d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x552b,	// (0x0000727d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x51da,	// (0x00006f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x51da,	// (0x00006f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x51f5,	// (0x00006f47) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x51f5,	// (0x00006f47) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5538,	// (0x0000728a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5538,	// (0x0000728a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5553,	// (0x000072a5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5553,	// (0x000072a5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x556e,	// (0x000072c0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x556e,	// (0x000072c0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00011913) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00011913) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5589,	// (0x000072db) cell_vkb_candidate_pane_cp1_ParamLimits

0x5589,	// (0x000072db) cell_vkb_candidate_pane_cp1

0x4de5,	// (0x00006b37) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) fep_vkb_candidate_drop_down_list_pane_g1

0x54ee,	// (0x00007240) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x54ee,	// (0x00007240) fep_vkb_candidate_drop_down_list_pane_g2

0x54fb,	// (0x0000724d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x54fb,	// (0x0000724d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0001190c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0001190c) fep_vkb_candidate_drop_down_list_pane_g

0x55af,	// (0x00007301) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x55af,	// (0x00007301) fep_vkb_candidate_drop_down_list_scroll_pane

0x55bc,	// (0x0000730e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x55bc,	// (0x0000730e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x55c9,	// (0x0000731b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x55c9,	// (0x0000731b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x55d5,	// (0x00007327) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x55d5,	// (0x00007327) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x517a,	// (0x00006ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x517a,	// (0x00006ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x519b,	// (0x00006eed) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x519b,	// (0x00006eed) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x55e1,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55e1,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5602,	// (0x00007354) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5602,	// (0x00007354) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5623,	// (0x00007375) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5623,	// (0x00007375) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00011924) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00011924) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9f47,	// (0x0000bc99) title_pane_g1_ParamLimits

0x9f5a,	// (0x0000bcac) title_pane_g2_ParamLimits

0xf554,	// (0x000112a6) title_pane_g_ParamLimits

0x0018,	// (0x00001d6a) aid_call2_pane

0x0020,	// (0x00001d72) aid_call_pane

0x0028,	// (0x00001d7a) popup_clock_analogue_window_g1

0x0028,	// (0x00001d7a) popup_clock_analogue_window_g2

0x0030,	// (0x00001d82) popup_clock_analogue_window_g3

0x0039,	// (0x00001d8b) popup_clock_analogue_window_g4

0xe42a,	// (0x0001017c) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001144b) popup_clock_analogue_window_g

0x0041,	// (0x00001d93) popup_clock_analogue_window_t1

0x00d1,	// (0x00001e23) clock_digital_number_pane_ParamLimits

0x00d1,	// (0x00001e23) clock_digital_number_pane

0x00dd,	// (0x00001e2f) clock_digital_number_pane_cp02_ParamLimits

0x00dd,	// (0x00001e2f) clock_digital_number_pane_cp02

0x00e9,	// (0x00001e3b) clock_digital_number_pane_cp03_ParamLimits

0x00e9,	// (0x00001e3b) clock_digital_number_pane_cp03

0x00f5,	// (0x00001e47) clock_digital_number_pane_cp04_ParamLimits

0x00f5,	// (0x00001e47) clock_digital_number_pane_cp04

0x0101,	// (0x00001e53) clock_digital_separator_pane_ParamLimits

0x0101,	// (0x00001e53) clock_digital_separator_pane

0x010d,	// (0x00001e5f) popup_clock_digital_window_t1_ParamLimits

0x010d,	// (0x00001e5f) popup_clock_digital_window_t1

0xe42a,	// (0x0001017c) clock_digital_number_pane_g1

0xe42a,	// (0x0001017c) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00011456) clock_digital_number_pane_g

0xe42a,	// (0x0001017c) clock_digital_separator_pane_g1

0xe42a,	// (0x0001017c) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00011456) clock_digital_separator_pane_g

0xb5cb,	// (0x0000d31d) aid_fill_nsta_ParamLimits

0xb701,	// (0x0000d453) indicator_nsta_pane_ParamLimits

0x177f,	// (0x000034d1) popup_clock_analogue_window

0x177f,	// (0x000034d1) popup_clock_digital_window

0xf036,	// (0x00010d88) grid_indicator_nsta_pane_ParamLimits

0x42c0,	// (0x00006012) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x000117f6) clock_nsta_pane_t

0xf3a1,	// (0x000110f3) aid_size_max_handle

0xa98c,	// (0x0000c6de) aid_size_min_handle

0x08ea,	// (0x0000263c) editor_scroll_pane

0x563e,	// (0x00007390) ex_editor_pane

0xefe4,	// (0x00010d36) scroll_pane_cp13

0xed21,	// (0x00010a73) scroll_pane_cp14

0x0076,	// (0x00001dc8) scroll_pane_cp36

0xaa2c,	// (0x0000c77e) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa2c,	// (0x0000c77e) list_single_graphic_hl_pane_cp2

0xc129,	// (0x0000de7b) list_single_graphic_hl_pane_ParamLimits

0xc129,	// (0x0000de7b) list_single_graphic_hl_pane

0x5646,	// (0x00007398) aid_size_min_hl_cp1

0x564f,	// (0x000073a1) list_highlight_pane_cp34_ParamLimits

0x564f,	// (0x000073a1) list_highlight_pane_cp34

0x5660,	// (0x000073b2) list_single_graphic_hl_pane_g1_ParamLimits

0x5660,	// (0x000073b2) list_single_graphic_hl_pane_g1

0xedd6,	// (0x00010b28) list_single_graphic_hl_pane_g2_ParamLimits

0xedd6,	// (0x00010b28) list_single_graphic_hl_pane_g2

0xedd6,	// (0x00010b28) list_single_graphic_hl_pane_g3_ParamLimits

0xedd6,	// (0x00010b28) list_single_graphic_hl_pane_g3

0xede2,	// (0x00010b34) list_single_graphic_hl_pane_g4_ParamLimits

0xede2,	// (0x00010b34) list_single_graphic_hl_pane_g4

0x56d3,	// (0x00007425) list_single_graphic_hl_pane_g5_ParamLimits

0x56d3,	// (0x00007425) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00011935) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00011935) list_single_graphic_hl_pane_g

0xc673,	// (0x0000e3c5) list_single_graphic_hl_pane_t1_ParamLimits

0xc673,	// (0x0000e3c5) list_single_graphic_hl_pane_t1

0x56a3,	// (0x000073f5) aid_size_min_hl_cp2

0x56ac,	// (0x000073fe) list_highlight_pane_cp34_cp2_ParamLimits

0x56ac,	// (0x000073fe) list_highlight_pane_cp34_cp2

0x5660,	// (0x000073b2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5660,	// (0x000073b2) list_single_graphic_hl_pane_g1_cp2

0x56b9,	// (0x0000740b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x56b9,	// (0x0000740b) list_single_graphic_hl_pane_g2_cp2

0xc689,	// (0x0000e3db) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc689,	// (0x0000e3db) list_single_graphic_hl_pane_g3_cp2

0xede2,	// (0x00010b34) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xede2,	// (0x00010b34) list_single_graphic_hl_pane_g4_cp2

0x56d3,	// (0x00007425) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x56d3,	// (0x00007425) list_single_graphic_hl_pane_g5_cp2

0xad40,	// (0x0000ca92) control_pane_g4_ParamLimits

0xad40,	// (0x0000ca92) control_pane_g4

0x0e5f,	// (0x00002bb1) bg_popup_sub_pane_cp10_ParamLimits

0x494a,	// (0x0000669c) list_choice_list_pane_ParamLimits

0x4959,	// (0x000066ab) scroll_pane_cp23

0xe8a0,	// (0x000105f2) bg_popup_preview_window_pane_cp02_ParamLimits

0x5246,	// (0x00006f98) list_preview_fixed_pane_ParamLimits

0x525c,	// (0x00006fae) list_preview_fixed_pane_cp_ParamLimits

0x525c,	// (0x00006fae) list_preview_fixed_pane_cp

0x5268,	// (0x00006fba) popup_preview_fixed_window_g1_ParamLimits

0x5268,	// (0x00006fba) popup_preview_fixed_window_g1

0x5274,	// (0x00006fc6) popup_preview_fixed_window_g2_ParamLimits

0x5274,	// (0x00006fc6) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x000118c4) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x000118c4) popup_preview_fixed_window_g

0xf2ca,	// (0x0001101c) aid_navi_side_left_pane_ParamLimits

0xf2df,	// (0x00011031) aid_navi_side_right_pane_ParamLimits

0xf2f7,	// (0x00011049) navi_icon_pane_stacon_ParamLimits

0xf30b,	// (0x0001105d) navi_navi_pane_stacon_ParamLimits

0xf2f7,	// (0x00011049) navi_text_pane_stacon_ParamLimits

0xe420,	// (0x00010172) main_text_info_pane

0x56fd,	// (0x0000744f) listscroll_text_info_pane

0x5705,	// (0x00007457) list_text_info_pane_ParamLimits

0x5705,	// (0x00007457) list_text_info_pane

0x5714,	// (0x00007466) scroll_pane_cp24_ParamLimits

0x5714,	// (0x00007466) scroll_pane_cp24

0xc697,	// (0x0000e3e9) list_text_info_pane_t1_ParamLimits

0xc697,	// (0x0000e3e9) list_text_info_pane_t1

0xaec4,	// (0x0000cc16) popup_fast_swap2_window_ParamLimits

0xaec4,	// (0x0000cc16) popup_fast_swap2_window

0x5757,	// (0x000074a9) aid_size_cell_fast2

0xe420,	// (0x00010172) bg_popup_window_pane_cp17

0x2068,	// (0x00003dba) heading_pane_cp2

0xeaa6,	// (0x000107f8) listscroll_fast2_pane

0x5761,	// (0x000074b3) grid_fast2_pane

0x576b,	// (0x000074bd) listscroll_fast2_pane_g1

0x5775,	// (0x000074c7) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00011940) listscroll_fast2_pane_g

0xefe4,	// (0x00010d36) scroll_pane_cp26

0x577f,	// (0x000074d1) cell_fast2_pane_ParamLimits

0x577f,	// (0x000074d1) cell_fast2_pane

0x5796,	// (0x000074e8) cell_fast2_pane_g1

0x579f,	// (0x000074f1) cell_fast2_pane_g2

0x57a8,	// (0x000074fa) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00011945) cell_fast2_pane_g

0xeae8,	// (0x0001083a) grid_highlight_pane_cp9

0xeafd,	// (0x0001084f) main_eswt_pane_ParamLimits

0xeafd,	// (0x0001084f) main_eswt_pane

0x5729,	// (0x0000747b) list_single_text_info_pane

0x57b0,	// (0x00007502) eswt_ctrl_button_pane

0x57b0,	// (0x00007502) eswt_ctrl_canvas_pane

0x57b8,	// (0x0000750a) eswt_ctrl_combo_pane

0x57b0,	// (0x00007502) eswt_ctrl_default_pane

0x57b0,	// (0x00007502) eswt_ctrl_label_pane

0x57c0,	// (0x00007512) eswt_ctrl_wait_pane

0x57c8,	// (0x0000751a) eswt_shell_pane

0xe420,	// (0x00010172) listscroll_eswt_app_pane

0x57e8,	// (0x0000753a) popup_eswt_tasktip_window_ParamLimits

0x57e8,	// (0x0000753a) popup_eswt_tasktip_window

0x1beb,	// (0x0000393d) bg_popup_window_pane_cp18

0x57f9,	// (0x0000754b) eswt_control_pane_g1_ParamLimits

0x57f9,	// (0x0000754b) eswt_control_pane_g1

0x5806,	// (0x00007558) eswt_control_pane_g2_ParamLimits

0x5806,	// (0x00007558) eswt_control_pane_g2

0x5813,	// (0x00007565) eswt_control_pane_g3_ParamLimits

0x5813,	// (0x00007565) eswt_control_pane_g3

0x5820,	// (0x00007572) eswt_control_pane_g4_ParamLimits

0x5820,	// (0x00007572) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0001194c) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0001194c) eswt_control_pane_g

0xee20,	// (0x00010b72) bg_button_pane_ParamLimits

0xee20,	// (0x00010b72) bg_button_pane

0xeafd,	// (0x0001084f) common_borders_pane_copy2_ParamLimits

0xeafd,	// (0x0001084f) common_borders_pane_copy2

0x582d,	// (0x0000757f) control_button_pane_g1_ParamLimits

0x582d,	// (0x0000757f) control_button_pane_g1

0x5839,	// (0x0000758b) control_button_pane_g2_ParamLimits

0x5839,	// (0x0000758b) control_button_pane_g2

0x5845,	// (0x00007597) control_button_pane_g3_ParamLimits

0x5845,	// (0x00007597) control_button_pane_g3

0x0002,

0xfc03,	// (0x00011955) control_button_pane_g_ParamLimits

0xfc03,	// (0x00011955) control_button_pane_g

0x5859,	// (0x000075ab) control_button_pane_t1

0x5867,	// (0x000075b9) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0001195c) control_button_pane_t

0x1a4e,	// (0x000037a0) bg_button_pane_g1

0x1a56,	// (0x000037a8) bg_button_pane_g2

0x1a5e,	// (0x000037b0) bg_button_pane_g3

0x1a66,	// (0x000037b8) bg_button_pane_g4

0x1a6e,	// (0x000037c0) bg_button_pane_g5

0x1a76,	// (0x000037c8) bg_button_pane_g6

0x1a7e,	// (0x000037d0) bg_button_pane_g7

0x1a86,	// (0x000037d8) bg_button_pane_g8

0x1a8e,	// (0x000037e0) bg_button_pane_g9

0x0008,

0xf85b,	// (0x000115ad) bg_button_pane_g

0x4905,	// (0x00006657) common_borders_pane_ParamLimits

0x4905,	// (0x00006657) common_borders_pane

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy1_ParamLimits

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy1

0x5806,	// (0x00007558) eswt_control_pane_g2_copy1_ParamLimits

0x5806,	// (0x00007558) eswt_control_pane_g2_copy1

0x5813,	// (0x00007565) eswt_control_pane_g3_copy1_ParamLimits

0x5813,	// (0x00007565) eswt_control_pane_g3_copy1

0x5820,	// (0x00007572) eswt_control_pane_g4_copy1_ParamLimits

0x5820,	// (0x00007572) eswt_control_pane_g4_copy1

0x4940,	// (0x00006692) bg_eswt_ctrl_canvas_pane_g1

0x4905,	// (0x00006657) common_borders_pane_cp2_ParamLimits

0x4905,	// (0x00006657) common_borders_pane_cp2

0x4905,	// (0x00006657) common_borders_pane_cp3_ParamLimits

0x4905,	// (0x00006657) common_borders_pane_cp3

0x5875,	// (0x000075c7) separator_horizontal_pane

0x587d,	// (0x000075cf) separator_vertical_pane

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy2_ParamLimits

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy2

0x5806,	// (0x00007558) eswt_control_pane_g2_copy2_ParamLimits

0x5806,	// (0x00007558) eswt_control_pane_g2_copy2

0x5813,	// (0x00007565) eswt_control_pane_g3_copy2_ParamLimits

0x5813,	// (0x00007565) eswt_control_pane_g3_copy2

0x5820,	// (0x00007572) eswt_control_pane_g4_copy2_ParamLimits

0x5820,	// (0x00007572) eswt_control_pane_g4_copy2

0xe420,	// (0x00010172) common_borders_pane_cp4

0x5886,	// (0x000075d8) separator_horizontal_pane_g1

0x588f,	// (0x000075e1) separator_horizontal_pane_g2

0x5898,	// (0x000075ea) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00011961) separator_horizontal_pane_g

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy3_ParamLimits

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy3

0x5806,	// (0x00007558) eswt_control_pane_g2_copy3_ParamLimits

0x5806,	// (0x00007558) eswt_control_pane_g2_copy3

0x5813,	// (0x00007565) eswt_control_pane_g3_copy3_ParamLimits

0x5813,	// (0x00007565) eswt_control_pane_g3_copy3

0x5820,	// (0x00007572) eswt_control_pane_g4_copy3_ParamLimits

0x5820,	// (0x00007572) eswt_control_pane_g4_copy3

0xe420,	// (0x00010172) common_borders_pane_cp5

0x58a1,	// (0x000075f3) separator_vertical_pane_g1

0x58aa,	// (0x000075fc) separator_vertical_pane_g2

0x58b3,	// (0x00007605) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00011968) separator_vertical_pane_g

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy4_ParamLimits

0x57f9,	// (0x0000754b) eswt_control_pane_g1_copy4

0x5806,	// (0x00007558) eswt_control_pane_g2_copy4_ParamLimits

0x5806,	// (0x00007558) eswt_control_pane_g2_copy4

0x5813,	// (0x00007565) eswt_control_pane_g3_copy4_ParamLimits

0x5813,	// (0x00007565) eswt_control_pane_g3_copy4

0x5820,	// (0x00007572) eswt_control_pane_g4_copy4_ParamLimits

0x5820,	// (0x00007572) eswt_control_pane_g4_copy4

0xc6b9,	// (0x0000e40b) eswt_ctrl_combo_button_pane

0xc6c1,	// (0x0000e413) eswt_ctrl_input_pane

0xc6c9,	// (0x0000e41b) popup_choice_list_window_cp70

0xc6d1,	// (0x0000e423) eswt_ctrl_input_pane_t1

0xe420,	// (0x00010172) input_focus_pane_cp70

0x4905,	// (0x00006657) bg_button_pane_cp70_ParamLimits

0x4905,	// (0x00006657) bg_button_pane_cp70

0xc6df,	// (0x0000e431) eswt_ctrl_combo_button_pane_g1

0x58ea,	// (0x0000763c) wait_bar_pane_cp70

0x1beb,	// (0x0000393d) bg_popup_window_pane_cp70_ParamLimits

0x1beb,	// (0x0000393d) bg_popup_window_pane_cp70

0x58f2,	// (0x00007644) popup_eswt_tasktip_window_t1

0x5908,	// (0x0000765a) wait_bar_pane_cp71_ParamLimits

0x5908,	// (0x0000765a) wait_bar_pane_cp71

0x5914,	// (0x00007666) grid_eswt_app_pane

0xf3fc,	// (0x0001114e) scroll_pane_cp70

0xc6e7,	// (0x0000e439) cell_eswt_app_pane_ParamLimits

0xc6e7,	// (0x0000e439) cell_eswt_app_pane

0xc719,	// (0x0000e46b) cell_eswt_app_pane_g1_ParamLimits

0xc719,	// (0x0000e46b) cell_eswt_app_pane_g1

0xc748,	// (0x0000e49a) cell_eswt_app_pane_g2_ParamLimits

0xc748,	// (0x0000e49a) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0001196f) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0001196f) cell_eswt_app_pane_g

0xc771,	// (0x0000e4c3) cell_eswt_app_pane_t1_ParamLimits

0xc771,	// (0x0000e4c3) cell_eswt_app_pane_t1

0x59d9,	// (0x0000772b) grid_highlight_pane_cp70_ParamLimits

0x59d9,	// (0x0000772b) grid_highlight_pane_cp70

0x07bb,	// (0x0000250d) set_content_pane_g1

0x0c37,	// (0x00002989) status_small_volume_pane

0x59e5,	// (0x00007737) status_small_volume_pane_g1

0x59ed,	// (0x0000773f) volume_small2_pane

0x59f6,	// (0x00007748) volume_small2_pane_g1

0x59ff,	// (0x00007751) volume_small2_pane_g2

0x5a08,	// (0x0000775a) volume_small2_pane_g3

0x5a11,	// (0x00007763) volume_small2_pane_g4

0x5a1a,	// (0x0000776c) volume_small2_pane_g5

0x5a23,	// (0x00007775) volume_small2_pane_g6

0x5a2c,	// (0x0000777e) volume_small2_pane_g7

0x5a35,	// (0x00007787) volume_small2_pane_g8

0x5a3e,	// (0x00007790) volume_small2_pane_g9

0x5a47,	// (0x00007799) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00011974) volume_small2_pane_g

0x4f39,	// (0x00006c8b) fep_vkb_top_text_pane_g1_ParamLimits

0xc61b,	// (0x0000e36d) fep_vkb_top_text_pane_t1_ParamLimits

0x5280,	// (0x00006fd2) popup_preview_fixed_window_g3_ParamLimits

0x5280,	// (0x00006fd2) popup_preview_fixed_window_g3

0xb55e,	// (0x0000d2b0) popup_toolbar_trans_pane

0xbf48,	// (0x0000dc9a) aid_height_set_list_ParamLimits

0x3287,	// (0x00004fd9) aid_size_parent_ParamLimits

0x0e5f,	// (0x00002bb1) list_highlight_pane_cp2_ParamLimits

0x07bb,	// (0x0000250d) set_content_pane_g1_ParamLimits

0xc13d,	// (0x0000de8f) list_single_image_pane_ParamLimits

0xc13d,	// (0x0000de8f) list_single_image_pane

0xc7a3,	// (0x0000e4f5) aid_size_cell_image_ParamLimits

0xc7a3,	// (0x0000e4f5) aid_size_cell_image

0xc7b0,	// (0x0000e502) grid_single_image_pane_ParamLimits

0xc7b0,	// (0x0000e502) grid_single_image_pane

0xee46,	// (0x00010b98) list_single_image_pane_g1_ParamLimits

0xee46,	// (0x00010b98) list_single_image_pane_g1

0xee52,	// (0x00010ba4) list_single_image_pane_g2_ParamLimits

0xee52,	// (0x00010ba4) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00011989) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00011989) list_single_image_pane_g

0x5a6b,	// (0x000077bd) list_single_image_pane_t1_ParamLimits

0x5a6b,	// (0x000077bd) list_single_image_pane_t1

0xc7be,	// (0x0000e510) cell_image_list_pane_ParamLimits

0xc7be,	// (0x0000e510) cell_image_list_pane

0xc7d2,	// (0x0000e524) cell_image_list_pane_g1

0xc7db,	// (0x0000e52d) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0001198e) cell_image_list_pane_g

0x5aa9,	// (0x000077fb) aid_size_cell_tb_trans_pane

0xee20,	// (0x00010b72) bg_tb_trans_pane

0x5abb,	// (0x0000780d) grid_tb_trans_pane

0x1a4e,	// (0x000037a0) bg_tb_trans_pane_g1

0x1a56,	// (0x000037a8) bg_tb_trans_pane_g2

0x1a5e,	// (0x000037b0) bg_tb_trans_pane_g3

0x1a66,	// (0x000037b8) bg_tb_trans_pane_g4

0x1a6e,	// (0x000037c0) bg_tb_trans_pane_g5

0x1a86,	// (0x000037d8) bg_tb_trans_pane_g6

0x1a8e,	// (0x000037e0) bg_tb_trans_pane_g7

0x1a76,	// (0x000037c8) bg_tb_trans_pane_g8

0x1a7e,	// (0x000037d0) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00011993) bg_tb_trans_pane_g

0x5acf,	// (0x00007821) cell_toolbar_trans_pane_ParamLimits

0x5acf,	// (0x00007821) cell_toolbar_trans_pane

0x4940,	// (0x00006692) cell_toolbar_trans_pane_g1

0xc373,	// (0x0000e0c5) list_form2_midp_pane_t1

0xc381,	// (0x0000e0d3) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0001183c) list_form2_midp_pane_t

0x452a,	// (0x0000627c) scroll_pane_cp51_ParamLimits

0x4747,	// (0x00006499) form2_midp_wait_pane_g1

0x4750,	// (0x000064a2) form2_midp_wait_pane_g2

0x4759,	// (0x000064ab) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00011851) form2_midp_wait_pane_g

0xe6ca,	// (0x0001041c) list_highlight_pane_cp21_ParamLimits

0x479d,	// (0x000064ef) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x47ac,	// (0x000064fe) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34a8,	// (0x000051fa) list_single_2graphic_im_pane_ParamLimits

0x34a8,	// (0x000051fa) list_single_2graphic_im_pane

0xc7e4,	// (0x0000e536) list_single_2graphic_im_pane_g1_ParamLimits

0xc7e4,	// (0x0000e536) list_single_2graphic_im_pane_g1

0xc7f5,	// (0x0000e547) list_single_2graphic_im_pane_g2_ParamLimits

0xc7f5,	// (0x0000e547) list_single_2graphic_im_pane_g2

0xc801,	// (0x0000e553) list_single_2graphic_im_pane_g3_ParamLimits

0xc801,	// (0x0000e553) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x000119a6) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x000119a6) list_single_2graphic_im_pane_g

0xc815,	// (0x0000e567) list_single_2graphic_im_pane_t1_ParamLimits

0xc815,	// (0x0000e567) list_single_2graphic_im_pane_t1

0x528c,	// (0x00006fde) list_single_graphic_2heading_pane_fp_ParamLimits

0x528c,	// (0x00006fde) list_single_graphic_2heading_pane_fp

0x52f4,	// (0x00007046) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x52f4,	// (0x00007046) list_single_graphic_2heading_pane_fp_g1

0x52a5,	// (0x00006ff7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x52a5,	// (0x00006ff7) list_single_graphic_2heading_pane_fp_g2

0x52b1,	// (0x00007003) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x52b1,	// (0x00007003) list_single_graphic_2heading_pane_fp_g3

0x52bd,	// (0x0000700f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x52bd,	// (0x0000700f) list_single_graphic_2heading_pane_fp_g4

0x52d1,	// (0x00007023) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x52d1,	// (0x00007023) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x000118d4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x000118d4) list_single_graphic_2heading_pane_fp_g

0x5b63,	// (0x000078b5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b63,	// (0x000078b5) list_single_graphic_2heading_pane_fp_t1

0x532c,	// (0x0000707e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x532c,	// (0x0000707e) list_single_graphic_2heading_pane_fp_t2

0x5b79,	// (0x000078cb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b79,	// (0x000078cb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x000119af) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x000119af) list_single_graphic_2heading_pane_fp_t

0x4b75,	// (0x000068c7) fep_hwr_write_pane_g5_ParamLimits

0x4b75,	// (0x000068c7) fep_hwr_write_pane_g5

0x4b81,	// (0x000068d3) fep_hwr_write_pane_g6_ParamLimits

0x4b81,	// (0x000068d3) fep_hwr_write_pane_g6

0x57c8,	// (0x0000751a) eswt_shell_pane_ParamLimits

0x1beb,	// (0x0000393d) bg_popup_window_pane_cp18_ParamLimits

0x312d,	// (0x00004e7f) heading_pane_cp70

0x58f2,	// (0x00007644) popup_eswt_tasktip_window_t1_ParamLimits

0xb628,	// (0x0000d37a) aid_touch_tab_arrow_left

0xb63c,	// (0x0000d38e) aid_touch_tab_arrow_right

0x9f72,	// (0x0000bcc4) title_pane_g3_ParamLimits

0x9f72,	// (0x0000bcc4) title_pane_g3

0xed62,	// (0x00010ab4) set_value_pane_g1

0xb55e,	// (0x0000d2b0) popup_toolbar_trans_pane_ParamLimits

0x5aa9,	// (0x000077fb) aid_size_cell_tb_trans_pane_ParamLimits

0xee20,	// (0x00010b72) bg_tb_trans_pane_ParamLimits

0x5abb,	// (0x0000780d) grid_tb_trans_pane_ParamLimits

0xe8a0,	// (0x000105f2) cont_note_pane_ParamLimits

0xe8a0,	// (0x000105f2) cont_note_pane

0xeafd,	// (0x0001084f) cont_snote2_single_text_pane_ParamLimits

0xeafd,	// (0x0001084f) cont_snote2_single_text_pane

0xeafd,	// (0x0001084f) cont_snote2_single_graphic_pane_ParamLimits

0xeafd,	// (0x0001084f) cont_snote2_single_graphic_pane

0x2284,	// (0x00003fd6) cont_note_wait_pane_ParamLimits

0x2284,	// (0x00003fd6) cont_note_wait_pane

0x2284,	// (0x00003fd6) cont_note_image_pane_ParamLimits

0x2284,	// (0x00003fd6) cont_note_image_pane

0x5b8f,	// (0x000078e1) popup_note2_window_g1_ParamLimits

0x5b8f,	// (0x000078e1) popup_note2_window_g1

0x5bc0,	// (0x00007912) popup_note2_window_t1_ParamLimits

0x5bc0,	// (0x00007912) popup_note2_window_t1

0x5c05,	// (0x00007957) popup_note2_window_t2_ParamLimits

0x5c05,	// (0x00007957) popup_note2_window_t2

0x5c4a,	// (0x0000799c) popup_note2_window_t3_ParamLimits

0x5c4a,	// (0x0000799c) popup_note2_window_t3

0x5c8f,	// (0x000079e1) popup_note2_window_t4_ParamLimits

0x5c8f,	// (0x000079e1) popup_note2_window_t4

0xe924,	// (0x00010676) popup_note2_window_t5_ParamLimits

0xe924,	// (0x00010676) popup_note2_window_t5

0x0004,

0xfc69,	// (0x000119bb) popup_note2_window_t_ParamLimits

0xfc69,	// (0x000119bb) popup_note2_window_t

0x5cbe,	// (0x00007a10) popup_note2_image_window_g1_ParamLimits

0x5cbe,	// (0x00007a10) popup_note2_image_window_g1

0x5cca,	// (0x00007a1c) popup_note2_image_window_g2_ParamLimits

0x5cca,	// (0x00007a1c) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x000119c6) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x000119c6) popup_note2_image_window_g

0x5cdc,	// (0x00007a2e) popup_note2_image_window_t1_ParamLimits

0x5cdc,	// (0x00007a2e) popup_note2_image_window_t1

0x5cf4,	// (0x00007a46) popup_note2_image_window_t2_ParamLimits

0x5cf4,	// (0x00007a46) popup_note2_image_window_t2

0x5d0c,	// (0x00007a5e) popup_note2_image_window_t3_ParamLimits

0x5d0c,	// (0x00007a5e) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x000119cb) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x000119cb) popup_note2_image_window_t

0x2292,	// (0x00003fe4) popup_note2_wait_window_g1_ParamLimits

0x2292,	// (0x00003fe4) popup_note2_wait_window_g1

0x5d28,	// (0x00007a7a) popup_note2_wait_window_g2_ParamLimits

0x5d28,	// (0x00007a7a) popup_note2_wait_window_g2

0x22aa,	// (0x00003ffc) popup_note2_wait_window_g3_ParamLimits

0x22aa,	// (0x00003ffc) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x000119d2) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x000119d2) popup_note2_wait_window_g

0x5d34,	// (0x00007a86) popup_note2_wait_window_t1_ParamLimits

0x5d34,	// (0x00007a86) popup_note2_wait_window_t1

0x5d52,	// (0x00007aa4) popup_note2_wait_window_t2_ParamLimits

0x5d52,	// (0x00007aa4) popup_note2_wait_window_t2

0x5d70,	// (0x00007ac2) popup_note2_wait_window_t3_ParamLimits

0x5d70,	// (0x00007ac2) popup_note2_wait_window_t3

0x5d82,	// (0x00007ad4) popup_note2_wait_window_t4_ParamLimits

0x5d82,	// (0x00007ad4) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x000119d9) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x000119d9) popup_note2_wait_window_t

0x5d94,	// (0x00007ae6) wait_bar2_pane_ParamLimits

0x5d94,	// (0x00007ae6) wait_bar2_pane

0x5dac,	// (0x00007afe) popup_snote2_single_text_window_g1_ParamLimits

0x5dac,	// (0x00007afe) popup_snote2_single_text_window_g1

0x5dd4,	// (0x00007b26) popup_snote2_single_text_window_t1_ParamLimits

0x5dd4,	// (0x00007b26) popup_snote2_single_text_window_t1

0x5e20,	// (0x00007b72) popup_snote2_single_text_window_t2_ParamLimits

0x5e20,	// (0x00007b72) popup_snote2_single_text_window_t2

0x5e6c,	// (0x00007bbe) popup_snote2_single_text_window_t3_ParamLimits

0x5e6c,	// (0x00007bbe) popup_snote2_single_text_window_t3

0x5ead,	// (0x00007bff) popup_snote2_single_text_window_t4_ParamLimits

0x5ead,	// (0x00007bff) popup_snote2_single_text_window_t4

0x5ee3,	// (0x00007c35) popup_snote2_single_text_window_t5_ParamLimits

0x5ee3,	// (0x00007c35) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x000119e2) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x000119e2) popup_snote2_single_text_window_t

0x5f0e,	// (0x00007c60) popup_snote2_single_graphic_window_g1_ParamLimits

0x5f0e,	// (0x00007c60) popup_snote2_single_graphic_window_g1

0x5f36,	// (0x00007c88) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f36,	// (0x00007c88) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x000119ed) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x000119ed) popup_snote2_single_graphic_window_g

0x5f5e,	// (0x00007cb0) popup_snote2_single_graphic_window_t1_ParamLimits

0x5f5e,	// (0x00007cb0) popup_snote2_single_graphic_window_t1

0x5faa,	// (0x00007cfc) popup_snote2_single_graphic_window_t2_ParamLimits

0x5faa,	// (0x00007cfc) popup_snote2_single_graphic_window_t2

0x5e6c,	// (0x00007bbe) popup_snote2_single_graphic_window_t3_ParamLimits

0x5e6c,	// (0x00007bbe) popup_snote2_single_graphic_window_t3

0x5ead,	// (0x00007bff) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ead,	// (0x00007bff) popup_snote2_single_graphic_window_t4

0x5ee3,	// (0x00007c35) popup_snote2_single_graphic_window_t5_ParamLimits

0x5ee3,	// (0x00007c35) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x000119f2) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x000119f2) popup_snote2_single_graphic_window_t

0x4383,	// (0x000060d5) clock_nsta_pane_cp2_t1

0x4383,	// (0x000060d5) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00011812) clock_nsta_pane_cp2_t

0xee3a,	// (0x00010b8c) form_field_data_wide_pane_g1_ParamLimits

0xee46,	// (0x00010b98) form_field_data_wide_pane_g2_ParamLimits

0xee46,	// (0x00010b98) form_field_data_wide_pane_g2

0xee52,	// (0x00010ba4) form_field_data_wide_pane_g3_ParamLimits

0xee52,	// (0x00010ba4) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x000113ce) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x000113ce) form_field_data_wide_pane_g

0xc27b,	// (0x0000dfcd) grid_touch_3_pane_ParamLimits

0xc27b,	// (0x0000dfcd) grid_touch_3_pane

0xc846,	// (0x0000e598) cell_touch_3_pane_ParamLimits

0xc846,	// (0x0000e598) cell_touch_3_pane

0x4940,	// (0x00006692) cell_touch_3_pane_g1

0x4940,	// (0x00006692) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00011897) cell_touch_3_pane_g

0xe956,	// (0x000106a8) cont_query_data_pane

0xe95e,	// (0x000106b0) cont_query_data_pane_cp1

0x6029,	// (0x00007d7b) button_value_adjust_pane_cp7

0x6031,	// (0x00007d83) query_popup_pane_cp3

0x0197,	// (0x00001ee9) bg_popup_sub_pane_cp22_ParamLimits

0x01ad,	// (0x00001eff) navi_navi_volume_pane_cp2

0x01c8,	// (0x00001f1a) popup_side_volume_key_window_g2

0x01d7,	// (0x00001f29) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00011464) popup_side_volume_key_window_g

0x01f4,	// (0x00001f46) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001146b) popup_side_volume_key_window_t

0x0681,	// (0x000023d3) popup_side_volume_key_window_ParamLimits

0xa448,	// (0x0000c19a) list_double_graphic_pane_g4_ParamLimits

0xa448,	// (0x0000c19a) list_double_graphic_pane_g4

0xc114,	// (0x0000de66) list_single_2heading_msg_pane_ParamLimits

0xc114,	// (0x0000de66) list_single_2heading_msg_pane

0xc890,	// (0x0000e5e2) list_single_2heading_msg_pane_g1_ParamLimits

0xc890,	// (0x0000e5e2) list_single_2heading_msg_pane_g1

0xc89c,	// (0x0000e5ee) list_single_2heading_msg_pane_g2_ParamLimits

0xc89c,	// (0x0000e5ee) list_single_2heading_msg_pane_g2

0xc8af,	// (0x0000e601) list_single_2heading_msg_pane_g3_ParamLimits

0xc8af,	// (0x0000e601) list_single_2heading_msg_pane_g3

0xc8bb,	// (0x0000e60d) list_single_2heading_msg_pane_g4_ParamLimits

0xc8bb,	// (0x0000e60d) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x000119fd) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x000119fd) list_single_2heading_msg_pane_g

0xc8d3,	// (0x0000e625) list_single_2heading_msg_pane_t1_ParamLimits

0xc8d3,	// (0x0000e625) list_single_2heading_msg_pane_t1

0xc8fb,	// (0x0000e64d) list_single_2heading_msg_pane_t2_ParamLimits

0xc8fb,	// (0x0000e64d) list_single_2heading_msg_pane_t2

0xc966,	// (0x0000e6b8) list_single_2heading_msg_pane_t3_ParamLimits

0xc966,	// (0x0000e6b8) list_single_2heading_msg_pane_t3

0x6122,	// (0x00007e74) list_single_2heading_msg_pane_t4_ParamLimits

0x6122,	// (0x00007e74) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00011a06) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00011a06) list_single_2heading_msg_pane_t

0xe66e,	// (0x000103c0) title_pane_g4_ParamLimits

0xe66e,	// (0x000103c0) title_pane_g4

0xf1f2,	// (0x00010f44) title_pane_stacon_g3_ParamLimits

0xf1f2,	// (0x00010f44) title_pane_stacon_g3

0x5b26,	// (0x00007878) list_single_2graphic_im_pane_g4_ParamLimits

0x5b26,	// (0x00007878) list_single_2graphic_im_pane_g4

0x2e66,	// (0x00004bb8) popup_side_volume_key_window_cp

0x38ed,	// (0x0000563f) main_idle_act2_pane_t1

0x1a96,	// (0x000037e8) toolbar_button_pane_g10

0xa2f3,	// (0x0000c045) popup_toolbar_window_cp1

0x4374,	// (0x000060c6) clock_nsta_pane_cp_t1

0x4374,	// (0x000060c6) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0001180d) clock_nsta_pane_cp_t

0x01ad,	// (0x00001eff) navi_navi_volume_pane_cp2_ParamLimits

0x01bc,	// (0x00001f0e) popup_side_volume_key_window_g1_ParamLimits

0x01c8,	// (0x00001f1a) popup_side_volume_key_window_g2_ParamLimits

0x01d7,	// (0x00001f29) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00011464) popup_side_volume_key_window_g_ParamLimits

0x49af,	// (0x00006701) fep_hwr_aid_pane

0x4a58,	// (0x000067aa) bg_fep_hwr_top_pane_g4_ParamLimits

0x4a78,	// (0x000067ca) fep_hwr_top_pane_g1_ParamLimits

0x4a8a,	// (0x000067dc) fep_hwr_top_pane_g2_ParamLimits

0x4a9c,	// (0x000067ee) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00011862) fep_hwr_top_pane_g_ParamLimits

0x4ab1,	// (0x00006803) fep_hwr_top_text_pane_ParamLimits

0x2c1b,	// (0x0000496d) aid_touch_tab_arrow_arrow_2

0x2c24,	// (0x00004976) aid_touch_tab_arrow_left_2

0x49c3,	// (0x00006715) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x49fa,	// (0x0000674c) fep_hwr_prediction_pane

0x4d33,	// (0x00006a85) fep_vkb_prediction_pane

0xc5fb,	// (0x0000e34d) fep_vkb_side_pane_g3_ParamLimits

0xc5fb,	// (0x0000e34d) fep_vkb_side_pane_g3

0x4de5,	// (0x00006b37) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x54ee,	// (0x00007240) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x54fb,	// (0x0000724d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0001190c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6147,	// (0x00007e99) fep_hwr_prediction_pane_g1

0x6151,	// (0x00007ea3) fep_hwr_prediction_pane_g2

0x6159,	// (0x00007eab) fep_hwr_prediction_pane_g3

0x6161,	// (0x00007eb3) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00011a0f) fep_hwr_prediction_pane_g

0x6147,	// (0x00007e99) fep_vkb_prediction_pane_g1

0x6169,	// (0x00007ebb) fep_vkb_prediction_pane_g2

0x6171,	// (0x00007ec3) fep_vkb_prediction_pane_g3

0x6179,	// (0x00007ecb) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00011a18) fep_vkb_prediction_pane_g

0x31ee,	// (0x00004f40) slider_set_pane_g3

0x3202,	// (0x00004f54) slider_set_pane_g4

0x321a,	// (0x00004f6c) slider_set_pane_g5

0x31ee,	// (0x00004f40) slider_set_pane_g6

0x3230,	// (0x00004f82) slider_set_pane_g7

0x340c,	// (0x0000515e) slider_form_pane_g3

0x3415,	// (0x00005167) slider_form_pane_g4

0x341d,	// (0x0000516f) slider_form_pane_g5

0x340c,	// (0x0000515e) slider_form_pane_g6

0xc0b7,	// (0x0000de09) slider_form_pane_g7

0x3beb,	// (0x0000593d) slider_set_pane_vc_g3

0x3bf4,	// (0x00005946) slider_set_pane_vc_g4

0x3bfd,	// (0x0000594f) slider_set_pane_vc_g5

0x3beb,	// (0x0000593d) slider_set_pane_vc_g6

0x3c06,	// (0x00005958) slider_set_pane_vc_g7

0x401d,	// (0x00005d6f) slider_form_pane_vc_g1

0x4026,	// (0x00005d78) slider_form_pane_vc_g2

0x402f,	// (0x00005d81) slider_form_pane_vc_g3

0x401d,	// (0x00005d6f) slider_form_pane_vc_g4

0x4038,	// (0x00005d8a) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x000117df) slider_form_pane_vc_g

0xe420,	// (0x00010172) main_idle_act3_pane

0x6181,	// (0x00007ed3) ai3_links_pane

0xc9d4,	// (0x0000e726) popup_ai3_data_window_ParamLimits

0xc9d4,	// (0x0000e726) popup_ai3_data_window

0xe420,	// (0x00010172) grid_ai3_links_pane

0xc9f2,	// (0x0000e744) cell_ai3_links_pane_ParamLimits

0xc9f2,	// (0x0000e744) cell_ai3_links_pane

0x61c2,	// (0x00007f14) bg_popup_sub_pane_cp11

0x61cf,	// (0x00007f21) cell_ai3_links_pane_g1

0xe420,	// (0x00010172) bg_popup_sub_pane_cp12

0x61f4,	// (0x00007f46) heading_ai3_data_pane

0x61fc,	// (0x00007f4e) list_ai3_gene_pane

0x6208,	// (0x00007f5a) popup_ai3_data_window_g1

0x6210,	// (0x00007f62) heading_ai3_data_pane_g1

0x6218,	// (0x00007f6a) heading_ai3_data_pane_t1

0x6226,	// (0x00007f78) list_double_ai3_gene_pane_ParamLimits

0x6226,	// (0x00007f78) list_double_ai3_gene_pane

0x6233,	// (0x00007f85) list_single_ai3_gene_pane_ParamLimits

0x6233,	// (0x00007f85) list_single_ai3_gene_pane

0x4905,	// (0x00006657) list_highlight_pane_cp7_ParamLimits

0x4905,	// (0x00006657) list_highlight_pane_cp7

0x6240,	// (0x00007f92) list_single_a13_gene_pane_t1_ParamLimits

0x6240,	// (0x00007f92) list_single_a13_gene_pane_t1

0x6257,	// (0x00007fa9) list_single_ai3_gene_pane_g1

0x6260,	// (0x00007fb2) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x00011a21) list_single_ai3_gene_pane_g

0x6268,	// (0x00007fba) list_double_ai3_gene_pane_g1_ParamLimits

0x6268,	// (0x00007fba) list_double_ai3_gene_pane_g1

0x6274,	// (0x00007fc6) list_double_ai3_gene_pane_t1_ParamLimits

0x6274,	// (0x00007fc6) list_double_ai3_gene_pane_t1

0x6290,	// (0x00007fe2) list_double_ai3_gene_pane_t2_ParamLimits

0x6290,	// (0x00007fe2) list_double_ai3_gene_pane_t2

0x62a5,	// (0x00007ff7) list_double_ai3_gene_pane_t3_ParamLimits

0x62a5,	// (0x00007ff7) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00011a26) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00011a26) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6042,	// (0x00007d94) aid_size_min_col_2

0xc87a,	// (0x0000e5cc) aid_size_min_msg_ParamLimits

0xc87a,	// (0x0000e5cc) aid_size_min_msg

0xc60f,	// (0x0000e361) fep_vkb_top_text_pane_g2_ParamLimits

0xc60f,	// (0x0000e361) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00011892) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00011892) fep_vkb_top_text_pane_g

0xe420,	// (0x00010172) main_hc_apps_shell_pane

0x62c2,	// (0x00008014) grid_hc_apps_pane_ParamLimits

0x62c2,	// (0x00008014) grid_hc_apps_pane

0x62d1,	// (0x00008023) list_hc_apps_pane

0x62d9,	// (0x0000802b) scroll_pane_cp37_ParamLimits

0x62d9,	// (0x0000802b) scroll_pane_cp37

0xca0c,	// (0x0000e75e) cell_hc_apps_pane_ParamLimits

0xca0c,	// (0x0000e75e) cell_hc_apps_pane

0xcad6,	// (0x0000e828) cell_hc_apps_pane_g1_ParamLimits

0xcad6,	// (0x0000e828) cell_hc_apps_pane_g1

0x63ce,	// (0x00008120) cell_hc_apps_pane_g2_ParamLimits

0x63ce,	// (0x00008120) cell_hc_apps_pane_g2

0x63ea,	// (0x0000813c) cell_hc_apps_pane_g3_ParamLimits

0x63ea,	// (0x0000813c) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00011a2d) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00011a2d) cell_hc_apps_pane_g

0xcb03,	// (0x0000e855) cell_hc_apps_pane_t1_ParamLimits

0xcb03,	// (0x0000e855) cell_hc_apps_pane_t1

0xe8a0,	// (0x000105f2) grid_highlight_pane_cp10_ParamLimits

0xe8a0,	// (0x000105f2) grid_highlight_pane_cp10

0xcb43,	// (0x0000e895) list_single_hc_apps_pane_ParamLimits

0xcb43,	// (0x0000e895) list_single_hc_apps_pane

0xcb7d,	// (0x0000e8cf) list_single_hc_apps_pane_g1

0xcb96,	// (0x0000e8e8) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00011a34) list_single_hc_apps_pane_g

0xcbaf,	// (0x0000e901) list_single_hc_apps_pane_g2_copy1

0xcbcb,	// (0x0000e91d) list_single_hc_apps_pane_t1

0xe6ca,	// (0x0001041c) bg_set_opt_pane_cp_ParamLimits

0xe6d8,	// (0x0001042a) setting_slider_pane_t1_ParamLimits

0xe6f1,	// (0x00010443) setting_slider_pane_t2_ParamLimits

0xe70b,	// (0x0001045d) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000112b6) setting_slider_pane_t_ParamLimits

0xe723,	// (0x00010475) slider_set_pane_ParamLimits

0x0cc4,	// (0x00002a16) control_pane_g5_ParamLimits

0x0cc4,	// (0x00002a16) control_pane_g5

0x31d5,	// (0x00004f27) slider_set_pane_g1_ParamLimits

0x31e2,	// (0x00004f34) slider_set_pane_g2_ParamLimits

0x31ee,	// (0x00004f40) slider_set_pane_g3_ParamLimits

0x3202,	// (0x00004f54) slider_set_pane_g4_ParamLimits

0x321a,	// (0x00004f6c) slider_set_pane_g5_ParamLimits

0x31ee,	// (0x00004f40) slider_set_pane_g6_ParamLimits

0x3230,	// (0x00004f82) slider_set_pane_g7_ParamLimits

0xf959,	// (0x000116ab) slider_set_pane_g_ParamLimits

0x0766,	// (0x000024b8) navi_icon_text_pane_ParamLimits

0xb5ef,	// (0x0000d341) aid_fill_nsta_2_ParamLimits

0xb628,	// (0x0000d37a) aid_touch_tab_arrow_left_ParamLimits

0xb63c,	// (0x0000d38e) aid_touch_tab_arrow_right_ParamLimits

0xb6d7,	// (0x0000d429) clock_nsta_pane_ParamLimits

0xbdbc,	// (0x0000db0e) navi_icon_pane_g1_ParamLimits

0xbdc8,	// (0x0000db1a) navi_text_pane_t1_ParamLimits

0xc355,	// (0x0000e0a7) navi_icon_text_pane_g1_ParamLimits

0xc361,	// (0x0000e0b3) navi_icon_text_pane_t1_ParamLimits

0xcb7d,	// (0x0000e8cf) list_single_hc_apps_pane_g1_ParamLimits

0xcb96,	// (0x0000e8e8) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00011a34) list_single_hc_apps_pane_g_ParamLimits

0xcbaf,	// (0x0000e901) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbcb,	// (0x0000e91d) list_single_hc_apps_pane_t1_ParamLimits

0x9edc,	// (0x0000bc2e) popup_toolbar2_fixed_window_ParamLimits

0x9edc,	// (0x0000bc2e) popup_toolbar2_fixed_window

0xb554,	// (0x0000d2a6) popup_toolbar2_float_window

0xe420,	// (0x00010172) bg_popup_sub_pane_cp27

0x6507,	// (0x00008259) grid_toolbar2_float_pane

0xe420,	// (0x00010172) bg_popup_sub_pane_cp26

0x6507,	// (0x00008259) grid_toolbar2_fixed_pane

0xcbf9,	// (0x0000e94b) cell_toolbar2_fixed_pane_ParamLimits

0xcbf9,	// (0x0000e94b) cell_toolbar2_fixed_pane

0xcc16,	// (0x0000e968) cell_toolbar2_fixed_pane_g1

0x6528,	// (0x0000827a) toolbar2_fixed_button_pane

0x1a4e,	// (0x000037a0) toolbar2_fixed_button_pane_g1

0x1a56,	// (0x000037a8) toolbar2_fixed_button_pane_g2

0x1a5e,	// (0x000037b0) toolbar2_fixed_button_pane_g3

0x1a66,	// (0x000037b8) toolbar2_fixed_button_pane_g4

0x1a6e,	// (0x000037c0) toolbar2_fixed_button_pane_g5

0x1a76,	// (0x000037c8) toolbar2_fixed_button_pane_g6

0x1a7e,	// (0x000037d0) toolbar2_fixed_button_pane_g7

0x1a86,	// (0x000037d8) toolbar2_fixed_button_pane_g8

0x1a8e,	// (0x000037e0) toolbar2_fixed_button_pane_g9

0x0008,

0xf85b,	// (0x000115ad) toolbar2_fixed_button_pane_g

0x6530,	// (0x00008282) cell_toolbar2_float_pane_ParamLimits

0x6530,	// (0x00008282) cell_toolbar2_float_pane

0x6541,	// (0x00008293) cell_toolbar2_float_pane_g1

0x6528,	// (0x0000827a) toolbar2_fixed_button_pane_cp

0xc4f7,	// (0x0000e249) fep_vkb_accented_list_pane_ParamLimits

0xc4f7,	// (0x0000e249) fep_vkb_accented_list_pane

0x5156,	// (0x00006ea8) bg_popup_fep_shadow_pane_g9

0x08ea,	// (0x0000263c) bg_popup_fep_shadow_pane_cp3

0xefcb,	// (0x00010d1d) list_accented_list_pane

0x654a,	// (0x0000829c) list_single_accented_list_pane_ParamLimits

0x654a,	// (0x0000829c) list_single_accented_list_pane

0x08ea,	// (0x0000263c) list_highlight_pane_cp10

0x655b,	// (0x000082ad) list_single_accented_list_pane_t1

0xb470,	// (0x0000d1c2) popup_slider_window_ParamLimits

0xb470,	// (0x0000d1c2) popup_slider_window

0x6039,	// (0x00007d8b) aid_indentation_list_msg

0xcd21,	// (0x0000ea73) bg_popup_window_pane_cp19

0x6695,	// (0x000083e7) popup_slider_window_g1

0x66b1,	// (0x00008403) popup_slider_window_g2

0x66cd,	// (0x0000841f) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00011a39) popup_slider_window_g

0x6729,	// (0x0000847b) popup_slider_window_t1

0x679d,	// (0x000084ef) small_volume_slider_vertical_pane

0x4940,	// (0x00006692) small_volume_slider_vertical_pane_g1

0x4940,	// (0x00006692) small_volume_slider_vertical_pane_g2

0x67b9,	// (0x0000850b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00011a4b) small_volume_slider_vertical_pane_g

0x9e46,	// (0x0000bb98) area_side_right_pane_ParamLimits

0x9e46,	// (0x0000bb98) area_side_right_pane

0xcdd9,	// (0x0000eb2b) aid_size_side_button_ParamLimits

0xcdd9,	// (0x0000eb2b) aid_size_side_button

0xcdf2,	// (0x0000eb44) grid_sctrl_middle_pane_ParamLimits

0xcdf2,	// (0x0000eb44) grid_sctrl_middle_pane

0x67f6,	// (0x00008548) sctrl_sk_bottom_pane

0x6807,	// (0x00008559) sctrl_sk_top_pane

0x6819,	// (0x0000856b) aid_touch_sctrl_top

0xe8a0,	// (0x000105f2) bg_sctrl_sk_pane_ParamLimits

0xe8a0,	// (0x000105f2) bg_sctrl_sk_pane

0x6826,	// (0x00008578) sctrl_sk_top_pane_g1

0x6833,	// (0x00008585) sctrl_sk_top_pane_t1

0x6819,	// (0x0000856b) aid_touch_sctrl_bottom

0xe8a0,	// (0x000105f2) bg_sctrl_sk_pane_cp_ParamLimits

0xe8a0,	// (0x000105f2) bg_sctrl_sk_pane_cp

0x684e,	// (0x000085a0) sctrl_sk_bottom_pane_g1

0x6833,	// (0x00008585) sctrl_sk_bottom_pane_t1

0xce0c,	// (0x0000eb5e) cell_sctrl_middle_pane_ParamLimits

0xce0c,	// (0x0000eb5e) cell_sctrl_middle_pane

0xce1f,	// (0x0000eb71) aid_touch_sctrl_middle_ParamLimits

0xce1f,	// (0x0000eb71) aid_touch_sctrl_middle

0xce2c,	// (0x0000eb7e) bg_sctrl_middle_pane_ParamLimits

0xce2c,	// (0x0000eb7e) bg_sctrl_middle_pane

0x6918,	// (0x0000866a) cell_sctrl_middle_pane_g1_ParamLimits

0x6918,	// (0x0000866a) cell_sctrl_middle_pane_g1

0xce3a,	// (0x0000eb8c) cell_sctrl_middle_pane_g2_ParamLimits

0xce3a,	// (0x0000eb8c) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x00011a57) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x00011a57) cell_sctrl_middle_pane_g

0x1a4e,	// (0x000037a0) bg_sctrl_middle_pane_g1

0x1a56,	// (0x000037a8) bg_sctrl_middle_pane_g2

0x1a5e,	// (0x000037b0) bg_sctrl_middle_pane_g3

0x1a66,	// (0x000037b8) bg_sctrl_middle_pane_g4

0x1a6e,	// (0x000037c0) bg_sctrl_middle_pane_g5

0x1a76,	// (0x000037c8) bg_sctrl_middle_pane_g6

0x1a7e,	// (0x000037d0) bg_sctrl_middle_pane_g7

0x1a86,	// (0x000037d8) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x00011a5c) bg_sctrl_middle_pane_g

0x1a8e,	// (0x000037e0) bg_sctrl_middle_pane_g8_copy1

0x1a4e,	// (0x000037a0) bg_sctrl_sk_pane_g1

0x1a56,	// (0x000037a8) bg_sctrl_sk_pane_g2

0x1a5e,	// (0x000037b0) bg_sctrl_sk_pane_g3

0x0008,

0xf85b,	// (0x000115ad) bg_sctrl_sk_pane_g

0xecbb,	// (0x00010a0d) aid_size_touch_scroll_bar

0x1a66,	// (0x000037b8) bg_sctrl_sk_pane_g4

0x1a6e,	// (0x000037c0) bg_sctrl_sk_pane_g5

0x1a76,	// (0x000037c8) bg_sctrl_sk_pane_g6

0x1a7e,	// (0x000037d0) bg_sctrl_sk_pane_g7

0x1a86,	// (0x000037d8) bg_sctrl_sk_pane_g8

0x1a8e,	// (0x000037e0) bg_sctrl_sk_pane_g9

0x0f15,	// (0x00002c67) popup_fep_china_hwr2_fs_candidate_window

0xaf28,	// (0x0000cc7a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf28,	// (0x0000cc7a) popup_fep_china_hwr2_fs_control_window

0x4de5,	// (0x00006b37) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x00011a52) sctrl_sk_top_pane_g

0xce46,	// (0x0000eb98) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce46,	// (0x0000eb98) aid_fep_china_hwr2_fs_cell

0xce5c,	// (0x0000ebae) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce5c,	// (0x0000ebae) bg_popup_fep_shadow_pane_cp4

0xce73,	// (0x0000ebc5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce73,	// (0x0000ebc5) bg_popup_fep_shadow_pane_cp5

0xce85,	// (0x0000ebd7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce85,	// (0x0000ebd7) popup_fep_china_hwr2_fs_control_bar_grid

0xce99,	// (0x0000ebeb) popup_fep_china_hwr2_fs_control_funtion_grid

0x68ec,	// (0x0000863e) aid_fep_china_hwr2_fs_candi_cell

0xe420,	// (0x00010172) bg_popup_fep_shadow_pane_cp6

0x68f6,	// (0x00008648) popup_fep_china_hwr2_fs_candidate_grid

0xcea1,	// (0x0000ebf3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcea1,	// (0x0000ebf3) cell_fep_china_hwr2_fs_funtion_grid

0x4940,	// (0x00006692) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6918,	// (0x0000866a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6918,	// (0x0000866a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6926,	// (0x00008678) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6926,	// (0x00008678) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x00011a6d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x00011a6d) cell_fep_china_hwr2_fs_funtion_grid_g

0xceb9,	// (0x0000ec0b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xceb9,	// (0x0000ec0b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcece,	// (0x0000ec20) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcece,	// (0x0000ec20) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x00011a72) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x00011a72) cell_fep_china_hwr2_fs_funtion_grid_t

0x696d,	// (0x000086bf) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6975,	// (0x000086c7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x697d,	// (0x000086cf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x00011a77) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6985,	// (0x000086d7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6985,	// (0x000086d7) cell_fep_china_hwr2_fs_candidate_grid

0x69a4,	// (0x000086f6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x69ac,	// (0x000086fe) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4940,	// (0x00006692) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4940,	// (0x00006692) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00011897) cell_fep_china_hwr2_fs_candidate_grid_g

0x69b4,	// (0x00008706) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1584,	// (0x000032d6) clock_nsta_pane_cp_24_ParamLimits

0x1584,	// (0x000032d6) clock_nsta_pane_cp_24

0x1604,	// (0x00003356) indicator_nsta_pane_cp_24_ParamLimits

0x1604,	// (0x00003356) indicator_nsta_pane_cp_24

0x2a62,	// (0x000047b4) heading_pane_g1

0x0001,

0xf8c0,	// (0x00011612) heading_pane_g

0x367c,	// (0x000053ce) grid_sct_catagory_button_pane

0x36ae,	// (0x00005400) scroll_pane_cp5_ParamLimits

0x4536,	// (0x00006288) button_value_adjust_pane_cp5_ParamLimits

0x4536,	// (0x00006288) button_value_adjust_pane_cp5

0x463c,	// (0x0000638e) form2_midp_time_pane_ParamLimits

0x69c2,	// (0x00008714) cell_sct_catagory_button_pane_ParamLimits

0x69c2,	// (0x00008714) cell_sct_catagory_button_pane

0x4905,	// (0x00006657) bg_button_pane_cp01_ParamLimits

0x4905,	// (0x00006657) bg_button_pane_cp01

0x4940,	// (0x00006692) cell_sct_catagory_button_pane_g1

0xb4f1,	// (0x0000d243) popup_tb_extension_window

0xceea,	// (0x0000ec3c) aid_size_cell_ext_ParamLimits

0xceea,	// (0x0000ec3c) aid_size_cell_ext

0xeafd,	// (0x0001084f) bg_tb_trans_pane_cp1_ParamLimits

0xeafd,	// (0x0001084f) bg_tb_trans_pane_cp1

0xcf10,	// (0x0000ec62) grid_tb_ext_pane_ParamLimits

0xcf10,	// (0x0000ec62) grid_tb_ext_pane

0xcf50,	// (0x0000eca2) cell_tb_ext_pane_ParamLimits

0xcf50,	// (0x0000eca2) cell_tb_ext_pane

0xcf78,	// (0x0000ecca) cell_tb_ext_pane_g1_ParamLimits

0xcf78,	// (0x0000ecca) cell_tb_ext_pane_g1

0x6a58,	// (0x000087aa) cell_tb_ext_pane_t1

0xe8a0,	// (0x000105f2) list_highlight_pane_cp11_ParamLimits

0xe8a0,	// (0x000105f2) list_highlight_pane_cp11

0xe601,	// (0x00010353) popup_uni_indicator_window_ParamLimits

0xe601,	// (0x00010353) popup_uni_indicator_window

0xee20,	// (0x00010b72) bg_popup_sub_pane_cp14

0x6a73,	// (0x000087c5) list_uniindi_pane

0x6a7f,	// (0x000087d1) uniindi_top_pane

0xe8a0,	// (0x000105f2) bg_uniindi_top_pane

0x6aa0,	// (0x000087f2) uniindi_top_pane_g1

0x6ab6,	// (0x00008808) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x00011a7e) uniindi_top_pane_g

0x6ae0,	// (0x00008832) uniindi_top_pane_t1

0x6b0c,	// (0x0000885e) list_single_uniindi_pane_ParamLimits

0x6b0c,	// (0x0000885e) list_single_uniindi_pane

0x4940,	// (0x00006692) bg_uniindi_top_pane_g1

0x6b1e,	// (0x00008870) list_single_uniindi_pane_g1

0x6b31,	// (0x00008883) list_single_uniindi_pane_t1

0xe420,	// (0x00010172) control_bg_pane

0x6b56,	// (0x000088a8) bg_sctrl_sk_pane_cp1

0x6b5f,	// (0x000088b1) bg_sctrl_sk_pane_cp2

0x6b68,	// (0x000088ba) control_bg_pane_g1

0x6b71,	// (0x000088c3) control_bg_pane_g2

0x0001,

0xfd35,	// (0x00011a87) control_bg_pane_g

0x4306,	// (0x00006058) cell_indicator_nsta_pane_g1_ParamLimits

0xc2ae,	// (0x0000e000) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x000117fb) cell_indicator_nsta_pane_g_ParamLimits

0x46cc,	// (0x0000641e) form2_midp_time_pane_t1_ParamLimits

0x49a1,	// (0x000066f3) main_idle_act4_pane_ParamLimits

0x49a1,	// (0x000066f3) main_idle_act4_pane

0xb4f1,	// (0x0000d243) popup_tb_extension_window_ParamLimits

0xcf38,	// (0x0000ec8a) tb_ext_find_pane_ParamLimits

0xcf38,	// (0x0000ec8a) tb_ext_find_pane

0x6b7a,	// (0x000088cc) ai_gene_pane_1_cp1

0x0a27,	// (0x00002779) ai_gene_pane_2_cp1

0x6b82,	// (0x000088d4) list_single_idle_plugin_calendar_pane

0x6b8b,	// (0x000088dd) list_single_idle_plugin_notification_pane

0x6b94,	// (0x000088e6) list_single_idle_plugin_player_pane

0xcf95,	// (0x0000ece7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcf95,	// (0x0000ece7) list_single_idle_plugin_shortcut_pane

0xcfbd,	// (0x0000ed0f) main_idle_act4_pane_t1

0xcfd5,	// (0x0000ed27) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x00011a8c) main_idle_act4_pane_t

0xcfed,	// (0x0000ed3f) middle_sk_idle_act4_pane_ParamLimits

0xcfed,	// (0x0000ed3f) middle_sk_idle_act4_pane

0xd009,	// (0x0000ed5b) popup_clock_digital_analogue_window_cp2

0xd030,	// (0x0000ed82) shortcut_wheel_idle_act4_pane_ParamLimits

0xd030,	// (0x0000ed82) shortcut_wheel_idle_act4_pane

0x4940,	// (0x00006692) shortcut_wheel_idle_act4_pane_g1

0x4940,	// (0x00006692) shortcut_wheel_idle_act4_pane_g2

0x4940,	// (0x00006692) shortcut_wheel_idle_act4_pane_g3

0x4940,	// (0x00006692) shortcut_wheel_idle_act4_pane_g4

0x4940,	// (0x00006692) shortcut_wheel_idle_act4_pane_g5

0x6c27,	// (0x00008979) shortcut_wheel_idle_act4_pane_g6

0x6c2f,	// (0x00008981) shortcut_wheel_idle_act4_pane_g7

0x6c37,	// (0x00008989) shortcut_wheel_idle_act4_pane_g8

0x6c3f,	// (0x00008991) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x00011a91) shortcut_wheel_idle_act4_pane_g

0x4a58,	// (0x000067aa) middle_sk_idle_act4_pane_g1_ParamLimits

0x4a58,	// (0x000067aa) middle_sk_idle_act4_pane_g1

0xd0ad,	// (0x0000edff) middle_sk_idle_act4_pane_g2_ParamLimits

0xd0ad,	// (0x0000edff) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x00011ab4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x00011ab4) middle_sk_idle_act4_pane_g

0xd0c5,	// (0x0000ee17) middle_sk_idle_act4_pane_t1_ParamLimits

0xd0c5,	// (0x0000ee17) middle_sk_idle_act4_pane_t1

0xd0f4,	// (0x0000ee46) grid_ai_shortcut_pane_ParamLimits

0xd0f4,	// (0x0000ee46) grid_ai_shortcut_pane

0xd111,	// (0x0000ee63) list_highlight_pane_cp16_ParamLimits

0xd111,	// (0x0000ee63) list_highlight_pane_cp16

0xd11e,	// (0x0000ee70) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd11e,	// (0x0000ee70) list_single_idle_plugin_shortcut_pane_g1

0xd12a,	// (0x0000ee7c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd12a,	// (0x0000ee7c) list_single_idle_plugin_shortcut_pane_g2

0xd148,	// (0x0000ee9a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd148,	// (0x0000ee9a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00011ab9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00011ab9) list_single_idle_plugin_shortcut_pane_g

0xd15d,	// (0x0000eeaf) cell_ai_shortcut_pane_ParamLimits

0xd15d,	// (0x0000eeaf) cell_ai_shortcut_pane

0xd173,	// (0x0000eec5) cell_ai_shortcut_pane_g1_ParamLimits

0xd173,	// (0x0000eec5) cell_ai_shortcut_pane_g1

0x6b7a,	// (0x000088cc) ai_gene_pane_1_cp2

0x6d70,	// (0x00008ac2) ai_gene_pane_2_cp2

0x6d78,	// (0x00008aca) list_highlight_pane_cp15

0x6d81,	// (0x00008ad3) list_single_idle_plugin_calendar_pane_g1

0x6d78,	// (0x00008aca) list_highlight_pane_cp17

0x6d89,	// (0x00008adb) list_single_idle_plugin_calendar_pane_g1_copy1

0x6d91,	// (0x00008ae3) list_single_idle_plugin_player_pane_g1

0x399b,	// (0x000056ed) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x00011ac0) list_single_idle_plugin_player_pane_g

0x6d99,	// (0x00008aeb) list_single_idle_plugin_player_pane_t1

0x6da7,	// (0x00008af9) list_single_idle_plugin_player_pane_t2

0x6db5,	// (0x00008b07) list_single_idle_plugin_player_pane_t3

0x6dc3,	// (0x00008b15) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00011ac5) list_single_idle_plugin_player_pane_t

0x6dd1,	// (0x00008b23) wait_bar_pane_cp15

0x6dd9,	// (0x00008b2b) grid_ai_notification_pane

0x399b,	// (0x000056ed) list_single_idle_plugin_notification_pane_g1

0xd195,	// (0x0000eee7) cell_ai_notification_pane_ParamLimits

0xd195,	// (0x0000eee7) cell_ai_notification_pane

0x6def,	// (0x00008b41) cell_ai_notification_pane_g1

0x6df7,	// (0x00008b49) cell_ai_notification_pane_t1

0xd1a2,	// (0x0000eef4) tb_ext_find_button_pane

0xd1aa,	// (0x0000eefc) tb_ext_find_pane_g1

0xd1b2,	// (0x0000ef04) tb_ext_find_pane_t1

0x0028,	// (0x00001d7a) tb_ext_find_button_pane_g1

0x6e23,	// (0x00008b75) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00011ace) tb_ext_find_button_pane_g

0xcfbd,	// (0x0000ed0f) main_idle_act4_pane_t1_ParamLimits

0xcfd5,	// (0x0000ed27) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x00011a8c) main_idle_act4_pane_t_ParamLimits

0xd009,	// (0x0000ed5b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd020,	// (0x0000ed72) sat_plugin_idle_act4_pane_ParamLimits

0xd020,	// (0x0000ed72) sat_plugin_idle_act4_pane

0xd1c0,	// (0x0000ef12) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1c0,	// (0x0000ef12) sat_plugin_idle_act4_pane_t1

0xd1d8,	// (0x0000ef2a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd1d8,	// (0x0000ef2a) sat_plugin_idle_act4_pane_t2

0xd1f0,	// (0x0000ef42) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd1f0,	// (0x0000ef42) sat_plugin_idle_act4_pane_t3

0xd208,	// (0x0000ef5a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd208,	// (0x0000ef5a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x00011ad3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x00011ad3) sat_plugin_idle_act4_pane_t

0xe5ad,	// (0x000102ff) popup_battery_window_ParamLimits

0xe5ad,	// (0x000102ff) popup_battery_window

0xe8a0,	// (0x000105f2) bg_popup_sub_pane_cp25_ParamLimits

0xe8a0,	// (0x000105f2) bg_popup_sub_pane_cp25

0x6e78,	// (0x00008bca) popup_battery_window_g1_ParamLimits

0x6e78,	// (0x00008bca) popup_battery_window_g1

0x6e84,	// (0x00008bd6) popup_battery_window_t1_ParamLimits

0x6e84,	// (0x00008bd6) popup_battery_window_t1

0x6e96,	// (0x00008be8) popup_battery_window_t2_ParamLimits

0x6e96,	// (0x00008be8) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00011adc) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00011adc) popup_battery_window_t

0xac3f,	// (0x0000c991) midp_canvas_pane_ParamLimits

0xac9a,	// (0x0000c9ec) midp_keypad_pane_ParamLimits

0xac9a,	// (0x0000c9ec) midp_keypad_pane

0x0e5f,	// (0x00002bb1) main_midp_pane_ParamLimits

0x4392,	// (0x000060e4) signal_pane_g2_cp_ParamLimits

0xd220,	// (0x0000ef72) aid_size_cell_midp_keypad_ParamLimits

0xd220,	// (0x0000ef72) aid_size_cell_midp_keypad

0xd23e,	// (0x0000ef90) midp_keyp_game_grid_pane_ParamLimits

0xd23e,	// (0x0000ef90) midp_keyp_game_grid_pane

0xd265,	// (0x0000efb7) midp_keyp_rocker_pane_ParamLimits

0xd265,	// (0x0000efb7) midp_keyp_rocker_pane

0xd2a4,	// (0x0000eff6) midp_keyp_sk_left_pane_ParamLimits

0xd2a4,	// (0x0000eff6) midp_keyp_sk_left_pane

0xd2f8,	// (0x0000f04a) midp_keyp_sk_right_pane_ParamLimits

0xd2f8,	// (0x0000f04a) midp_keyp_sk_right_pane

0xe420,	// (0x00010172) bg_button_pane_cp03

0xd34c,	// (0x0000f09e) midp_keyp_sk_left_pane_g1

0xe420,	// (0x00010172) bg_button_pane_cp04

0xd34c,	// (0x0000f09e) midp_keyp_sk_right_pane_g1

0x4940,	// (0x00006692) midp_keyp_rocker_pane_g1

0xd355,	// (0x0000f0a7) keyp_game_cell_pane_ParamLimits

0xd355,	// (0x0000f0a7) keyp_game_cell_pane

0xe420,	// (0x00010172) bg_button_pane_cp02

0xd37b,	// (0x0000f0cd) keyp_game_cell_pane_g1

0x9e88,	// (0x0000bbda) popup_fep_vkb2_window_ParamLimits

0x9e88,	// (0x0000bbda) popup_fep_vkb2_window

0xd384,	// (0x0000f0d6) aid_size_cell_vkb2_ParamLimits

0xd384,	// (0x0000f0d6) aid_size_cell_vkb2

0xd3ba,	// (0x0000f10c) popup_fep_vkb2_window_g1_ParamLimits

0xd3ba,	// (0x0000f10c) popup_fep_vkb2_window_g1

0xd40a,	// (0x0000f15c) vkb2_area_bottom_pane_ParamLimits

0xd40a,	// (0x0000f15c) vkb2_area_bottom_pane

0xd466,	// (0x0000f1b8) vkb2_area_keypad_pane_ParamLimits

0xd466,	// (0x0000f1b8) vkb2_area_keypad_pane

0xd4b4,	// (0x0000f206) vkb2_area_top_pane_ParamLimits

0xd4b4,	// (0x0000f206) vkb2_area_top_pane

0xd53a,	// (0x0000f28c) vkb2_top_entry_pane_ParamLimits

0xd53a,	// (0x0000f28c) vkb2_top_entry_pane

0xd567,	// (0x0000f2b9) vkb2_top_grid_left_pane_ParamLimits

0xd567,	// (0x0000f2b9) vkb2_top_grid_left_pane

0xd587,	// (0x0000f2d9) vkb2_top_grid_right_pane_ParamLimits

0xd587,	// (0x0000f2d9) vkb2_top_grid_right_pane

0x7215,	// (0x00008f67) vkb2_cell_keypad_pane_ParamLimits

0x7215,	// (0x00008f67) vkb2_cell_keypad_pane

0xd5cd,	// (0x0000f31f) vkb2_area_bottom_grid_pane_ParamLimits

0xd5cd,	// (0x0000f31f) vkb2_area_bottom_grid_pane

0xd5f7,	// (0x0000f349) vkb2_area_bottom_pane_g1_ParamLimits

0xd5f7,	// (0x0000f349) vkb2_area_bottom_pane_g1

0xd61d,	// (0x0000f36f) vkb2_area_bottom_pane_g2_ParamLimits

0xd61d,	// (0x0000f36f) vkb2_area_bottom_pane_g2

0xd64e,	// (0x0000f3a0) vkb2_area_bottom_pane_g3_ParamLimits

0xd64e,	// (0x0000f3a0) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x00011ae1) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x00011ae1) vkb2_area_bottom_pane_g

0x73bf,	// (0x00009111) vkb2_top_cell_left_pane_ParamLimits

0x73bf,	// (0x00009111) vkb2_top_cell_left_pane

0xd6b8,	// (0x0000f40a) vkb2_top_entry_pane_g1_ParamLimits

0xd6b8,	// (0x0000f40a) vkb2_top_entry_pane_g1

0xd6c6,	// (0x0000f418) vkb2_top_entry_pane_t1_ParamLimits

0xd6c6,	// (0x0000f418) vkb2_top_entry_pane_t1

0x7427,	// (0x00009179) vkb2_top_entry_pane_t2_ParamLimits

0x7427,	// (0x00009179) vkb2_top_entry_pane_t2

0x7459,	// (0x000091ab) vkb2_top_entry_pane_t3_ParamLimits

0x7459,	// (0x000091ab) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00011ae8) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00011ae8) vkb2_top_entry_pane_t

0xd6ff,	// (0x0000f451) vkb2_top_grid_right_pane_g1_ParamLimits

0xd6ff,	// (0x0000f451) vkb2_top_grid_right_pane_g1

0x74c0,	// (0x00009212) vkb2_top_grid_right_pane_g2_ParamLimits

0x74c0,	// (0x00009212) vkb2_top_grid_right_pane_g2

0x74d8,	// (0x0000922a) vkb2_top_grid_right_pane_g3_ParamLimits

0x74d8,	// (0x0000922a) vkb2_top_grid_right_pane_g3

0xd715,	// (0x0000f467) vkb2_top_grid_right_pane_g4_ParamLimits

0xd715,	// (0x0000f467) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x00011aef) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x00011aef) vkb2_top_grid_right_pane_g

0x7506,	// (0x00009258) vkb2_top_cell_left_pane_g1

0x751d,	// (0x0000926f) vkb2_cell_keypad_pane_g1_ParamLimits

0x751d,	// (0x0000926f) vkb2_cell_keypad_pane_g1

0x752b,	// (0x0000927d) vkb2_cell_keypad_pane_t1_ParamLimits

0x752b,	// (0x0000927d) vkb2_cell_keypad_pane_t1

0x7542,	// (0x00009294) vkb2_cell_bottom_grid_pane_ParamLimits

0x7542,	// (0x00009294) vkb2_cell_bottom_grid_pane

0x757b,	// (0x000092cd) vkb2_cell_bottom_grid_pane_g1

0xd051,	// (0x0000eda3) aid_call2_pane_cp02

0xd059,	// (0x0000edab) aid_call_pane_cp02

0xd061,	// (0x0000edb3) clock_digital_number_pane_cp10

0xd069,	// (0x0000edbb) clock_digital_number_pane_cp11

0xd071,	// (0x0000edc3) clock_digital_number_pane_cp12

0xd079,	// (0x0000edcb) clock_digital_number_pane_cp13

0xd081,	// (0x0000edd3) clock_digital_separator_pane_cp10

0x0028,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g1

0x0028,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g2

0xd089,	// (0x0000eddb) popup_clock_digital_analogue_window_cp2_g3

0x0028,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g4

0xd089,	// (0x0000eddb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x00011aa4) popup_clock_digital_analogue_window_cp2_g

0xd091,	// (0x0000ede3) popup_clock_digital_analogue_window_cp2_t1

0xd09f,	// (0x0000edf1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x00011aaf) popup_clock_digital_analogue_window_cp2_t

0x4940,	// (0x00006692) clock_digital_number_pane_cp10_g1

0x4940,	// (0x00006692) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011897) clock_digital_number_pane_cp10_g

0x4940,	// (0x00006692) clock_digital_separator_pane_cp10_g1

0x4940,	// (0x00006692) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011897) clock_digital_separator_pane_cp10_g

0x6ac2,	// (0x00008814) uniindi_top_pane_g3

0x6ad3,	// (0x00008825) uniindi_top_pane_g4

0x72a0,	// (0x00008ff2) vkb2_row_keypad_pane_ParamLimits

0x72a0,	// (0x00008ff2) vkb2_row_keypad_pane

0x7597,	// (0x000092e9) vkb2_cell_t_keypad_pane_ParamLimits

0x7597,	// (0x000092e9) vkb2_cell_t_keypad_pane

0x75a7,	// (0x000092f9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x75a7,	// (0x000092f9) vkb2_cell_t_keypad_pane_cp08

0x75bc,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x75bc,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp09

0x75d0,	// (0x00009322) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x75d0,	// (0x00009322) vkb2_cell_t_keypad_pane_cp01

0x75e1,	// (0x00009333) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x75e1,	// (0x00009333) vkb2_cell_t_keypad_pane_cp02

0x75f2,	// (0x00009344) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x75f2,	// (0x00009344) vkb2_cell_t_keypad_pane_cp03

0x7603,	// (0x00009355) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7603,	// (0x00009355) vkb2_cell_t_keypad_pane_cp04

0x7614,	// (0x00009366) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7614,	// (0x00009366) vkb2_cell_t_keypad_pane_cp05

0x7625,	// (0x00009377) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7625,	// (0x00009377) vkb2_cell_t_keypad_pane_cp06

0x7638,	// (0x0000938a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7638,	// (0x0000938a) vkb2_cell_t_keypad_pane_cp07

0x764d,	// (0x0000939f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x764d,	// (0x0000939f) vkb2_cell_t_keypad_pane_cp10

0x4de5,	// (0x00006b37) vkb2_cell_t_keypad_pane_g1

0x7662,	// (0x000093b4) vkb2_cell_t_keypad_pane_t1

0xe420,	// (0x00010172) popup_grid_graphic2_window

0xd72b,	// (0x0000f47d) aid_size_cell_graphic2_ParamLimits

0xd72b,	// (0x0000f47d) aid_size_cell_graphic2

0xd769,	// (0x0000f4bb) bg_popup_window_pane_cp21_ParamLimits

0xd769,	// (0x0000f4bb) bg_popup_window_pane_cp21

0xd777,	// (0x0000f4c9) graphic2_pages_pane_ParamLimits

0xd777,	// (0x0000f4c9) graphic2_pages_pane

0xd7cf,	// (0x0000f521) grid_graphic2_control_pane_ParamLimits

0xd7cf,	// (0x0000f521) grid_graphic2_control_pane

0xd817,	// (0x0000f569) grid_graphic2_pane_ParamLimits

0xd817,	// (0x0000f569) grid_graphic2_pane

0xd8a2,	// (0x0000f5f4) cell_graphic2_pane

0xe420,	// (0x00010172) main_comp_mode_pane

0x61fc,	// (0x00007f4e) list_ai3_gene_pane_ParamLimits

0xcd21,	// (0x0000ea73) bg_popup_window_pane_cp19_ParamLimits

0x6633,	// (0x00008385) bg_touch_area_indi_pane_ParamLimits

0x6633,	// (0x00008385) bg_touch_area_indi_pane

0x6649,	// (0x0000839b) bg_touch_area_indi_pane_cp01_ParamLimits

0x6649,	// (0x0000839b) bg_touch_area_indi_pane_cp01

0x6661,	// (0x000083b3) bg_touch_area_indi_pane_cp02_ParamLimits

0x6661,	// (0x000083b3) bg_touch_area_indi_pane_cp02

0x667b,	// (0x000083cd) bg_touch_area_indi_pane_cp03_ParamLimits

0x667b,	// (0x000083cd) bg_touch_area_indi_pane_cp03

0x6695,	// (0x000083e7) popup_slider_window_g1_ParamLimits

0x66b1,	// (0x00008403) popup_slider_window_g2_ParamLimits

0x66cd,	// (0x0000841f) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00011a39) popup_slider_window_g_ParamLimits

0x6729,	// (0x0000847b) popup_slider_window_t1_ParamLimits

0x679d,	// (0x000084ef) small_volume_slider_vertical_pane_ParamLimits

0xd8a2,	// (0x0000f5f4) cell_graphic2_pane_ParamLimits

0xd905,	// (0x0000f657) bg_button_pane_cp10_ParamLimits

0xd905,	// (0x0000f657) bg_button_pane_cp10

0xd918,	// (0x0000f66a) bg_button_pane_cp11_ParamLimits

0xd918,	// (0x0000f66a) bg_button_pane_cp11

0xd92b,	// (0x0000f67d) graphic2_pages_pane_g1_ParamLimits

0xd92b,	// (0x0000f67d) graphic2_pages_pane_g1

0xd946,	// (0x0000f698) graphic2_pages_pane_g2_ParamLimits

0xd946,	// (0x0000f698) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00011afd) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00011afd) graphic2_pages_pane_g

0xd95e,	// (0x0000f6b0) graphic2_pages_pane_t1_ParamLimits

0xd95e,	// (0x0000f6b0) graphic2_pages_pane_t1

0xd976,	// (0x0000f6c8) cell_graphic2_control_pane_ParamLimits

0xd976,	// (0x0000f6c8) cell_graphic2_control_pane

0xd9aa,	// (0x0000f6fc) cell_graphic2_pane_g1_ParamLimits

0xd9aa,	// (0x0000f6fc) cell_graphic2_pane_g1

0x4c07,	// (0x00006959) cell_graphic2_pane_g2_ParamLimits

0x4c07,	// (0x00006959) cell_graphic2_pane_g2

0xd9b7,	// (0x0000f709) cell_graphic2_pane_g3_ParamLimits

0xd9b7,	// (0x0000f709) cell_graphic2_pane_g3

0x4c14,	// (0x00006966) cell_graphic2_pane_g4_ParamLimits

0x4c14,	// (0x00006966) cell_graphic2_pane_g4

0xd9c4,	// (0x0000f716) cell_graphic2_pane_g5_ParamLimits

0xd9c4,	// (0x0000f716) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x00011b02) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x00011b02) cell_graphic2_pane_g

0xd9e4,	// (0x0000f736) cell_graphic2_pane_t1_ParamLimits

0xd9e4,	// (0x0000f736) cell_graphic2_pane_t1

0x2a56,	// (0x000047a8) grid_highlight_pane_cp11_ParamLimits

0x2a56,	// (0x000047a8) grid_highlight_pane_cp11

0xe8a0,	// (0x000105f2) bg_button_pane_cp05

0xda19,	// (0x0000f76b) cell_graphic2_control_pane_g1

0x4940,	// (0x00006692) bg_touch_area_indi_pane_g1

0x793c,	// (0x0000968e) aid_cmod_rocker_key_size

0x7946,	// (0x00009698) aid_cmode_itu_key_size

0x7950,	// (0x000096a2) main_cmode_video_pane

0x795a,	// (0x000096ac) main_comp_mode_itu_pane

0x7966,	// (0x000096b8) main_comp_mode_rocker_pane

0x7972,	// (0x000096c4) cell_cmode_rocker_pane_ParamLimits

0x7972,	// (0x000096c4) cell_cmode_rocker_pane

0x7986,	// (0x000096d8) cell_cmode_itu_pane_ParamLimits

0x7986,	// (0x000096d8) cell_cmode_itu_pane

0xee20,	// (0x00010b72) bg_button_pane_cp06_ParamLimits

0xee20,	// (0x00010b72) bg_button_pane_cp06

0x4de5,	// (0x00006b37) cell_cmode_rocker_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) cell_cmode_rocker_pane_g1

0x6918,	// (0x0000866a) cell_cmode_rocker_pane_g2_ParamLimits

0x6918,	// (0x0000866a) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x00011b12) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x00011b12) cell_cmode_rocker_pane_g

0xe420,	// (0x00010172) bg_button_pane_cp07

0x799d,	// (0x000096ef) cell_cmode_itu_pane_g1

0x79a6,	// (0x000096f8) cell_cmode_itu_pane_t1

0x79b4,	// (0x00009706) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00011b17) cell_cmode_itu_pane_t

0x6b46,	// (0x00008898) aid_touch_ctrl_left

0x6b4e,	// (0x000088a0) aid_touch_ctrl_right

0xe420,	// (0x00010172) compa_mode_pane

0xda3f,	// (0x0000f791) aid_cmod_rocker_key_size_cp

0xda49,	// (0x0000f79b) aid_cmode_itu_key_size_cp

0x79d6,	// (0x00009728) compa_mode_pane_g1

0x79de,	// (0x00009730) compa_mode_pane_g2

0x79e6,	// (0x00009738) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00011b1c) compa_mode_pane_g

0xda53,	// (0x0000f7a5) main_comp_mode_itu_pane_cp

0xda5b,	// (0x0000f7ad) main_comp_mode_rocker_pane_cp

0xda63,	// (0x0000f7b5) cell_cmode_itu_pane_cp_ParamLimits

0xda63,	// (0x0000f7b5) cell_cmode_itu_pane_cp

0xda78,	// (0x0000f7ca) cell_cmode_rocker_pane_cp_ParamLimits

0xda78,	// (0x0000f7ca) cell_cmode_rocker_pane_cp

0xee20,	// (0x00010b72) bg_button_pane_cp06_cp_ParamLimits

0xee20,	// (0x00010b72) bg_button_pane_cp06_cp

0x4de5,	// (0x00006b37) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4de5,	// (0x00006b37) cell_cmode_rocker_pane_g1_cp

0x4940,	// (0x00006692) cell_cmode_rocker_pane_g2_cp

0xe420,	// (0x00010172) bg_button_pane_cp07_cp

0xda8a,	// (0x0000f7dc) cell_cmode_itu_pane_g1_cp

0xda93,	// (0x0000f7e5) cell_cmode_itu_pane_t1_cp

0xda93,	// (0x0000f7e5) cell_cmode_itu_pane_t2_cp

0xc0af,	// (0x0000de01) settings_code_pane_cp2

0xe6ca,	// (0x0001041c) bg_popup_window_pane_cp3_ParamLimits

0xea8e,	// (0x000107e0) heading_pane_cp3_ParamLimits

0xea9a,	// (0x000107ec) listscroll_popup_graphic_pane_ParamLimits

0x49af,	// (0x00006701) fep_hwr_aid_pane_ParamLimits

0x6819,	// (0x0000856b) aid_touch_sctrl_top_ParamLimits

0x6826,	// (0x00008578) sctrl_sk_top_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x00011a52) sctrl_sk_top_pane_g_ParamLimits

0x6833,	// (0x00008585) sctrl_sk_top_pane_t1_ParamLimits

0x6819,	// (0x0000856b) aid_touch_sctrl_bottom_ParamLimits

0x6833,	// (0x00008585) sctrl_sk_bottom_pane_t1_ParamLimits

0x6a8c,	// (0x000087de) aid_area_touch_clock

0xd4fc,	// (0x0000f24e) aid_vkb2_area_top_pane_cell_ParamLimits

0xd4fc,	// (0x0000f24e) aid_vkb2_area_top_pane_cell

0xd5a7,	// (0x0000f2f9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd5a7,	// (0x0000f2f9) aid_vkb2_area_bottom_pane_cell

0x73df,	// (0x00009131) popup_char_count_window

0x7a3c,	// (0x0000978e) popup_char_count_window_g1

0x7a45,	// (0x00009797) popup_char_count_window_g2

0x7a4e,	// (0x000097a0) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x00011b23) popup_char_count_window_g

0x7a57,	// (0x000097a9) popup_char_count_window_t1

0x7031,	// (0x00008d83) popup_fep_char_preview_window_ParamLimits

0x7031,	// (0x00008d83) popup_fep_char_preview_window

0xd51c,	// (0x0000f26e) vkb2_top_candi_pane_ParamLimits

0xd51c,	// (0x0000f26e) vkb2_top_candi_pane

0xdaa1,	// (0x0000f7f3) cell_vkb2_top_candi_pane_ParamLimits

0xdaa1,	// (0x0000f7f3) cell_vkb2_top_candi_pane

0x2284,	// (0x00003fd6) bg_popup_fep_char_preview_window_ParamLimits

0x2284,	// (0x00003fd6) bg_popup_fep_char_preview_window

0x7ab6,	// (0x00009808) popup_fep_char_preview_window_t1_ParamLimits

0x7ab6,	// (0x00009808) popup_fep_char_preview_window_t1

0x7af0,	// (0x00009842) bg_popup_fep_char_preview_window_g1

0x7af8,	// (0x0000984a) bg_popup_fep_char_preview_window_g2

0x7b00,	// (0x00009852) bg_popup_fep_char_preview_window_g3

0x7b08,	// (0x0000985a) bg_popup_fep_char_preview_window_g4

0x7b10,	// (0x00009862) bg_popup_fep_char_preview_window_g5

0x7b18,	// (0x0000986a) bg_popup_fep_char_preview_window_g6

0x7b20,	// (0x00009872) bg_popup_fep_char_preview_window_g7

0x7b28,	// (0x0000987a) bg_popup_fep_char_preview_window_g8

0x7b30,	// (0x00009882) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00011b2a) bg_popup_fep_char_preview_window_g

0x4de5,	// (0x00006b37) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) cell_vkb2_top_candi_pane_g1

0x517a,	// (0x00006ecc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x517a,	// (0x00006ecc) cell_vkb2_top_candi_pane_g2

0x519b,	// (0x00006eed) cell_vkb2_top_candi_pane_g3_ParamLimits

0x519b,	// (0x00006eed) cell_vkb2_top_candi_pane_g3

0x7b38,	// (0x0000988a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7b38,	// (0x0000988a) cell_vkb2_top_candi_pane_g4

0x7b59,	// (0x000098ab) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b59,	// (0x000098ab) cell_vkb2_top_candi_pane_g5

0x6918,	// (0x0000866a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6918,	// (0x0000866a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00011b3d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00011b3d) cell_vkb2_top_candi_pane_g

0x7b7a,	// (0x000098cc) cell_vkb2_top_candi_pane_t1

0x31c1,	// (0x00004f13) aid_size_touch_slider_mark_ParamLimits

0x31c1,	// (0x00004f13) aid_size_touch_slider_mark

0xd7b3,	// (0x0000f505) grid_graphic2_catg_pane_ParamLimits

0xd7b3,	// (0x0000f505) grid_graphic2_catg_pane

0xd871,	// (0x0000f5c3) popup_grid_graphic2_window_t1_ParamLimits

0xd871,	// (0x0000f5c3) popup_grid_graphic2_window_t1

0xd887,	// (0x0000f5d9) popup_grid_graphic2_window_t2_ParamLimits

0xd887,	// (0x0000f5d9) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00011af8) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00011af8) popup_grid_graphic2_window_t

0xe8a0,	// (0x000105f2) bg_button_pane_cp05_ParamLimits

0xda19,	// (0x0000f76b) cell_graphic2_control_pane_g1_ParamLimits

0xdb0b,	// (0x0000f85d) cell_graphic2_catg_pane_ParamLimits

0xdb0b,	// (0x0000f85d) cell_graphic2_catg_pane

0xe420,	// (0x00010172) bg_button_pane_cp12

0xdb1d,	// (0x0000f86f) cell_graphic2_catg_pane_g1

0x6a58,	// (0x000087aa) cell_tb_ext_pane_t1_ParamLimits

0x747d,	// (0x000091cf) vkb2_top_cell_right_narrow_pane_ParamLimits

0x747d,	// (0x000091cf) vkb2_top_cell_right_narrow_pane

0x7495,	// (0x000091e7) vkb2_top_cell_right_wide_pane_ParamLimits

0x7495,	// (0x000091e7) vkb2_top_cell_right_wide_pane

0x49a1,	// (0x000066f3) bg_vkb2_func_pane_ParamLimits

0x49a1,	// (0x000066f3) bg_vkb2_func_pane

0x7506,	// (0x00009258) vkb2_top_cell_left_pane_g1_ParamLimits

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp03

0x757b,	// (0x000092cd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a56,	// (0x000037a8) bg_vkb2_func_pane_g1

0x1a5e,	// (0x000037b0) bg_vkb2_func_pane_g2

0x1a6e,	// (0x000037c0) bg_vkb2_func_pane_g3

0x1a66,	// (0x000037b8) bg_vkb2_func_pane_g4

0x1a76,	// (0x000037c8) bg_vkb2_func_pane_g5

0x1a7e,	// (0x000037d0) bg_vkb2_func_pane_g6

0x1a86,	// (0x000037d8) bg_vkb2_func_pane_g7

0x1a8e,	// (0x000037e0) bg_vkb2_func_pane_g8

0x1a4e,	// (0x000037a0) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00011b4a) bg_vkb2_func_pane_g

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp01

0x7506,	// (0x00009258) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7506,	// (0x00009258) vkb2_top_cell_right_wide_pane_g1

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x49a1,	// (0x000066f3) bg_vkb2_fuc_pane_cp02

0x757b,	// (0x000092cd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x757b,	// (0x000092cd) vkb2_top_cell_right_narrow_pane_g1

0xcc5b,	// (0x0000e9ad) aid_touch_area_decrease_ParamLimits

0xcc5b,	// (0x0000e9ad) aid_touch_area_decrease

0xcc95,	// (0x0000e9e7) aid_touch_area_increase_ParamLimits

0xcc95,	// (0x0000e9e7) aid_touch_area_increase

0xccbd,	// (0x0000ea0f) aid_touch_area_mute_ParamLimits

0xccbd,	// (0x0000ea0f) aid_touch_area_mute

0xcced,	// (0x0000ea3f) aid_touch_area_slider_ParamLimits

0xcced,	// (0x0000ea3f) aid_touch_area_slider

0xcd2d,	// (0x0000ea7f) popup_slider_window_g4_ParamLimits

0xcd2d,	// (0x0000ea7f) popup_slider_window_g4

0xcd55,	// (0x0000eaa7) popup_slider_window_g5_ParamLimits

0xcd55,	// (0x0000eaa7) popup_slider_window_g5

0xcd89,	// (0x0000eadb) popup_slider_window_g6_ParamLimits

0xcd89,	// (0x0000eadb) popup_slider_window_g6

0x6757,	// (0x000084a9) popup_slider_window_t2_ParamLimits

0x6757,	// (0x000084a9) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00011a46) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00011a46) popup_slider_window_t

0xcda5,	// (0x0000eaf7) slider_pane_ParamLimits

0xcda5,	// (0x0000eaf7) slider_pane

0x7bb3,	// (0x00009905) slider_pane_g1_ParamLimits

0x7bb3,	// (0x00009905) slider_pane_g1

0x7bc7,	// (0x00009919) slider_pane_g2_ParamLimits

0x7bc7,	// (0x00009919) slider_pane_g2

0x7bdd,	// (0x0000992f) slider_pane_g3_ParamLimits

0x7bdd,	// (0x0000992f) slider_pane_g3

0x0003,

0xfe0b,	// (0x00011b5d) slider_pane_g_ParamLimits

0xfe0b,	// (0x00011b5d) slider_pane_g

0xb53d,	// (0x0000d28f) popup_tb_float_extension_window_ParamLimits

0xb53d,	// (0x0000d28f) popup_tb_float_extension_window

0x7c09,	// (0x0000995b) aid_size_cell_tb_float_ext

0xe420,	// (0x00010172) bg_popup_sub_window_cp28

0x7c15,	// (0x00009967) grid_tb_float_ext_pane

0x7c21,	// (0x00009973) cell_tb_float_ext_pane_ParamLimits

0x7c21,	// (0x00009973) cell_tb_float_ext_pane

0x7c3d,	// (0x0000998f) cell_tb_float_ext_pane_g1

0x7c46,	// (0x00009998) grid_highlight_pane_cp12

0xc4d5,	// (0x0000e227) cell_last_hwr_side_pane_ParamLimits

0xc4d5,	// (0x0000e227) cell_last_hwr_side_pane

0x4940,	// (0x00006692) cell_last_hwr_side_pane_g1

0x7c4f,	// (0x000099a1) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x00011b66) cell_last_hwr_side_pane_g

0xd683,	// (0x0000f3d5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd683,	// (0x0000f3d5) vkb2_area_bottom_space_btn_pane

0x4de5,	// (0x00006b37) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7662,	// (0x000093b4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7b7a,	// (0x000098cc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7c58,	// (0x000099aa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7c58,	// (0x000099aa) vkb2_area_bottom_space_btn_pane_g1

0x7c92,	// (0x000099e4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7c92,	// (0x000099e4) vkb2_area_bottom_space_btn_pane_g2

0x7cc8,	// (0x00009a1a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7cc8,	// (0x00009a1a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x00011b6b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x00011b6b) vkb2_area_bottom_space_btn_pane_g

0x4a66,	// (0x000067b8) cel_fep_hwr_func_pane_ParamLimits

0x4a66,	// (0x000067b8) cel_fep_hwr_func_pane

0xc4aa,	// (0x0000e1fc) cell_hwr_side_button_pane_ParamLimits

0xc4aa,	// (0x0000e1fc) cell_hwr_side_button_pane

0x6a8c,	// (0x000087de) aid_area_touch_clock_ParamLimits

0xe8a0,	// (0x000105f2) bg_uniindi_top_pane_ParamLimits

0x6aa0,	// (0x000087f2) uniindi_top_pane_g1_ParamLimits

0x6ab6,	// (0x00008808) uniindi_top_pane_g2_ParamLimits

0x6ac2,	// (0x00008814) uniindi_top_pane_g3_ParamLimits

0x6ad3,	// (0x00008825) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x00011a7e) uniindi_top_pane_g_ParamLimits

0x6ae0,	// (0x00008832) uniindi_top_pane_t1_ParamLimits

0xe8a0,	// (0x000105f2) bg_vkb2_func_pane_cp01_ParamLimits

0xe8a0,	// (0x000105f2) bg_vkb2_func_pane_cp01

0x7d12,	// (0x00009a64) cel_fep_hwr_func_pane_g1_ParamLimits

0x7d12,	// (0x00009a64) cel_fep_hwr_func_pane_g1

0xe8a0,	// (0x000105f2) bg_vkb2_func_pane_cp02_ParamLimits

0xe8a0,	// (0x000105f2) bg_vkb2_func_pane_cp02

0x7d12,	// (0x00009a64) cell_hwr_side_button_pane_g1_ParamLimits

0x7d12,	// (0x00009a64) cell_hwr_side_button_pane_g1

0x1829,	// (0x0000357b) status_pane_g4_ParamLimits

0x1829,	// (0x0000357b) status_pane_g4

0x1843,	// (0x00003595) status_pane_t1

0x46df,	// (0x00006431) form2_midp_gauge_slider_cont_pane

0x46e7,	// (0x00006439) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc3f0,	// (0x0000e142) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc402,	// (0x0000e154) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0001184a) form2_midp_gauge_slider_pane_t_ParamLimits

0x471d,	// (0x0000646f) form2_midp_slider_pane_ParamLimits

0x6ff1,	// (0x00008d43) aid_size_cell_func_vkb2_ParamLimits

0x6ff1,	// (0x00008d43) aid_size_cell_func_vkb2

0x7bf5,	// (0x00009947) slider_pane_g4_ParamLimits

0x7bf5,	// (0x00009947) slider_pane_g4

0xdb26,	// (0x0000f878) form2_midp_gauge_slider_pane_t2_cp01

0xdb34,	// (0x0000f886) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdb34,	// (0x0000f886) form2_midp_gauge_slider_pane_t3_cp01

0x7d4b,	// (0x00009a9d) form2_midp_slider_pane_cp01

0xe420,	// (0x00010172) navi_smil_pane

0x7d7f,	// (0x00009ad1) navi_smil_pane_g1

0x7d87,	// (0x00009ad9) navi_smil_pane_t1

0x7d54,	// (0x00009aa6) form2_midp_slider_pane_g1

0x7d5d,	// (0x00009aaf) form2_midp_slider_pane_g2

0x7d65,	// (0x00009ab7) form2_midp_slider_pane_g3

0x7d54,	// (0x00009aa6) form2_midp_slider_pane_g4

0xdb51,	// (0x0000f8a3) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x00011b74) form2_midp_slider_pane_g

0x7d02,	// (0x00009a54) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d02,	// (0x00009a54) vkb2_area_bottom_space_btn_pane_g4

0xb722,	// (0x0000d474) lc0_navi_pane_ParamLimits

0xb722,	// (0x0000d474) lc0_navi_pane

0xb792,	// (0x0000d4e4) lc0_stat_indi_pane_ParamLimits

0xb792,	// (0x0000d4e4) lc0_stat_indi_pane

0xb7a7,	// (0x0000d4f9) ls0_title_pane_ParamLimits

0xb7a7,	// (0x0000d4f9) ls0_title_pane

0xee20,	// (0x00010b72) bg_popup_sub_pane_cp14_ParamLimits

0x6a73,	// (0x000087c5) list_uniindi_pane_ParamLimits

0x6a7f,	// (0x000087d1) uniindi_top_pane_ParamLimits

0x6b1e,	// (0x00008870) list_single_uniindi_pane_g1_ParamLimits

0x6b31,	// (0x00008883) list_single_uniindi_pane_t1_ParamLimits

0xdb5a,	// (0x0000f8ac) lc0_stat_clock_pane_ParamLimits

0xdb5a,	// (0x0000f8ac) lc0_stat_clock_pane

0xdb67,	// (0x0000f8b9) lc0_stat_indi_pane_g1_ParamLimits

0xdb67,	// (0x0000f8b9) lc0_stat_indi_pane_g1

0xdb74,	// (0x0000f8c6) lc0_stat_indi_pane_g2_ParamLimits

0xdb74,	// (0x0000f8c6) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x00011b7f) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x00011b7f) lc0_stat_indi_pane_g

0xdb81,	// (0x0000f8d3) lc0_uni_indicator_pane_ParamLimits

0xdb81,	// (0x0000f8d3) lc0_uni_indicator_pane

0xdb8e,	// (0x0000f8e0) ls0_title_pane_g1_ParamLimits

0xdb8e,	// (0x0000f8e0) ls0_title_pane_g1

0xdba2,	// (0x0000f8f4) ls0_title_pane_t1_ParamLimits

0xdba2,	// (0x0000f8f4) ls0_title_pane_t1

0xdbd0,	// (0x0000f922) lc0_uni_indicator_pane_g1_ParamLimits

0xdbd0,	// (0x0000f922) lc0_uni_indicator_pane_g1

0x7e26,	// (0x00009b78) lc0_stat_clock_pane_t1

0xe420,	// (0x00010172) main_ai5_pane

0x7e34,	// (0x00009b86) ai5_sk_pane_ParamLimits

0x7e34,	// (0x00009b86) ai5_sk_pane

0xdbef,	// (0x0000f941) cell_ai5_widget_pane_ParamLimits

0xdbef,	// (0x0000f941) cell_ai5_widget_pane

0x83dd,	// (0x0000a12f) aid_size_cell_widget_grid

0x83f3,	// (0x0000a145) bg_ai5_widget_pane_ParamLimits

0x83f3,	// (0x0000a145) bg_ai5_widget_pane

0x845d,	// (0x0000a1af) cell_ai5_widget_pane_g2

0x846d,	// (0x0000a1bf) cell_ai5_widget_pane_g3

0x848c,	// (0x0000a1de) cell_ai5_widget_pane_g4

0x8498,	// (0x0000a1ea) cell_ai5_widget_pane_g5

0xdf46,	// (0x0000fc98) cell_ai5_widget_pane_g6

0xdf52,	// (0x0000fca4) cell_ai5_widget_pane_g7

0x84f8,	// (0x0000a24a) cell_ai5_widget_pane_t1_ParamLimits

0x84f8,	// (0x0000a24a) cell_ai5_widget_pane_t1

0x8515,	// (0x0000a267) cell_ai5_widget_pane_t2_ParamLimits

0x8515,	// (0x0000a267) cell_ai5_widget_pane_t2

0x852d,	// (0x0000a27f) cell_ai5_widget_pane_t3_ParamLimits

0x852d,	// (0x0000a27f) cell_ai5_widget_pane_t3

0x8545,	// (0x0000a297) cell_ai5_widget_pane_t4_ParamLimits

0x8545,	// (0x0000a297) cell_ai5_widget_pane_t4

0x855f,	// (0x0000a2b1) cell_ai5_widget_pane_t5_ParamLimits

0x855f,	// (0x0000a2b1) cell_ai5_widget_pane_t5

0x857e,	// (0x0000a2d0) cell_ai5_widget_pane_t6_ParamLimits

0x857e,	// (0x0000a2d0) cell_ai5_widget_pane_t6

0x8590,	// (0x0000a2e2) cell_ai5_widget_pane_t7_ParamLimits

0x8590,	// (0x0000a2e2) cell_ai5_widget_pane_t7

0x85a9,	// (0x0000a2fb) cell_ai5_widget_pane_t8_ParamLimits

0x85a9,	// (0x0000a2fb) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x00011b99) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x00011b99) cell_ai5_widget_pane_t

0x85f5,	// (0x0000a347) grid_ai5_widget_pane

0xee20,	// (0x00010b72) highlight_cell_ai5_widget_pane_ParamLimits

0xee20,	// (0x00010b72) highlight_cell_ai5_widget_pane

0xdf5e,	// (0x0000fcb0) ai5_sk_left_pane

0xdf68,	// (0x0000fcba) ai5_sk_middle_pane

0xdf72,	// (0x0000fcc4) ai5_sk_right_pane

0x862b,	// (0x0000a37d) bg_ai5_widget_pane_g1_ParamLimits

0x862b,	// (0x0000a37d) bg_ai5_widget_pane_g1

0x8637,	// (0x0000a389) bg_ai5_widget_pane_g2_ParamLimits

0x8637,	// (0x0000a389) bg_ai5_widget_pane_g2

0x8643,	// (0x0000a395) bg_ai5_widget_pane_g3_ParamLimits

0x8643,	// (0x0000a395) bg_ai5_widget_pane_g3

0x864f,	// (0x0000a3a1) bg_ai5_widget_pane_g4_ParamLimits

0x864f,	// (0x0000a3a1) bg_ai5_widget_pane_g4

0x865b,	// (0x0000a3ad) bg_ai5_widget_pane_g5_ParamLimits

0x865b,	// (0x0000a3ad) bg_ai5_widget_pane_g5

0x8667,	// (0x0000a3b9) bg_ai5_widget_pane_g6_ParamLimits

0x8667,	// (0x0000a3b9) bg_ai5_widget_pane_g6

0x8673,	// (0x0000a3c5) bg_ai5_widget_pane_g7_ParamLimits

0x8673,	// (0x0000a3c5) bg_ai5_widget_pane_g7

0x867f,	// (0x0000a3d1) bg_ai5_widget_pane_g8_ParamLimits

0x867f,	// (0x0000a3d1) bg_ai5_widget_pane_g8

0x868b,	// (0x0000a3dd) bg_ai5_widget_pane_g9_ParamLimits

0x868b,	// (0x0000a3dd) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00011bae) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00011bae) bg_ai5_widget_pane_g

0x86b3,	// (0x0000a405) cell_shortcut_ai5_widget_pane_ParamLimits

0x86b3,	// (0x0000a405) cell_shortcut_ai5_widget_pane

0xe7a9,	// (0x000104fb) bg_cell_shortcut_ai5_widget_pane

0x86c6,	// (0x0000a418) cell_grid_ai5_widget_pane_g1

0x86cf,	// (0x0000a421) highlight_cell_shortcut_ai5_widget_pane

0x1a5e,	// (0x000037b0) ai5_sk_left_pane_g1

0x86d7,	// (0x0000a429) ai5_sk_left_pane_g2

0x86df,	// (0x0000a431) ai5_sk_left_pane_g3

0x86e7,	// (0x0000a439) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00011bc1) ai5_sk_left_pane_g

0x86ef,	// (0x0000a441) ai5_sk_left_pane_t1

0x1a56,	// (0x000037a8) ai5_sk_right_pane_g1

0x86fd,	// (0x0000a44f) ai5_sk_right_pane_g2

0x8705,	// (0x0000a457) ai5_sk_right_pane_g3

0x870d,	// (0x0000a45f) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00011bca) ai5_sk_right_pane_g

0x8715,	// (0x0000a467) ai5_sk_right_pane_t1

0x1a56,	// (0x000037a8) ai5_sk_middle_pane_g1

0x1a5e,	// (0x000037b0) ai5_sk_middle_pane_g2

0x1a76,	// (0x000037c8) ai5_sk_middle_pane_g3

0x8705,	// (0x0000a457) ai5_sk_middle_pane_g4

0x86df,	// (0x0000a431) ai5_sk_middle_pane_g5

0x8723,	// (0x0000a475) ai5_sk_middle_pane_g6

0xdf98,	// (0x0000fcea) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00011bd3) ai5_sk_middle_pane_g

0xb60e,	// (0x0000d360) aid_touch_area_size_lc0_ParamLimits

0xb60e,	// (0x0000d360) aid_touch_area_size_lc0

0x51bc,	// (0x00006f0e) cell_hwr_candidate_pane_t1_ParamLimits

0x14e0,	// (0x00003232) aid_touch_navi_pane

0xb8b2,	// (0x0000d604) status_dt_navi_pane_ParamLimits

0xb8b2,	// (0x0000d604) status_dt_navi_pane

0xb8ca,	// (0x0000d61c) status_dt_sta_pane_ParamLimits

0xb8ca,	// (0x0000d61c) status_dt_sta_pane

0xdfa0,	// (0x0000fcf2) dt_sta_controll_pane

0xdfad,	// (0x0000fcff) dt_sta_indi_pane

0xdfba,	// (0x0000fd0c) dt_sta_title_pane

0xe8a0,	// (0x000105f2) bg_dt_sta_indi_pane_ParamLimits

0xe8a0,	// (0x000105f2) bg_dt_sta_indi_pane

0xdfcc,	// (0x0000fd1e) dt_sta_battery_pane

0xdfd4,	// (0x0000fd26) dt_sta_indi_pane_g1

0xdfdd,	// (0x0000fd2f) dt_sta_indi_pane_g2

0xdfe6,	// (0x0000fd38) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00011be2) dt_sta_indi_pane_g

0xdfef,	// (0x0000fd41) dt_sta_signal_pane

0xee20,	// (0x00010b72) bg_dt_sta_title_pane_ParamLimits

0xee20,	// (0x00010b72) bg_dt_sta_title_pane

0xdff8,	// (0x0000fd4a) dt_sta_title_pane_g1

0xe000,	// (0x0000fd52) dt_sta_title_pane_t1_ParamLimits

0xe000,	// (0x0000fd52) dt_sta_title_pane_t1

0xe420,	// (0x00010172) bg_dt_sta_control_pane

0xe015,	// (0x0000fd67) dt_sta_controll_pane_g1

0xe01e,	// (0x0000fd70) bg_dt_sta_title_pane_g1

0xe027,	// (0x0000fd79) bg_dt_sta_title_pane_g2

0xe030,	// (0x0000fd82) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00011be9) bg_dt_sta_title_pane_g

0x4940,	// (0x00006692) bg_dt_sta_indi_pane_g1

0x87d1,	// (0x0000a523) dt_sta_signal_pane_g1

0x87d9,	// (0x0000a52b) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00011bf0) dt_sta_signal_pane_g

0x87e1,	// (0x0000a533) dt_sta_battery_pane_g1

0x87ea,	// (0x0000a53c) dt_sta_battery_pane_t1

0x4940,	// (0x00006692) bg_dt_sta_control_pane_g1

0x0218,	// (0x00001f6a) fep_china_uni_eep_pane

0x0220,	// (0x00001f72) fep_china_uni_entry_pane_ParamLimits

0x0230,	// (0x00001f82) popup_fep_china_uni_window_g1_ParamLimits

0x0240,	// (0x00001f92) popup_fep_china_uni_window_g2_ParamLimits

0x0240,	// (0x00001f92) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x00011470) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x00011470) popup_fep_china_uni_window_g

0x87f9,	// (0x0000a54b) fep_china_uni_eep_pane_g1

0x8801,	// (0x0000a553) fep_china_uni_eep_pane_t1

0x7d76,	// (0x00009ac8) aid_touch_area_size_smil_player

0x1638,	// (0x0000338a) lc0_clock_pane

0x1837,	// (0x00003589) status_pane_g5_ParamLimits

0x1837,	// (0x00003589) status_pane_g5

0xb063,	// (0x0000cdb5) popup_keymap_window

0x17f5,	// (0x00003547) status_icon_pane

0x846d,	// (0x0000a1bf) cell_ai5_widget_pane_g3_ParamLimits

0x848c,	// (0x0000a1de) cell_ai5_widget_pane_g4_ParamLimits

0x8498,	// (0x0000a1ea) cell_ai5_widget_pane_g5_ParamLimits

0x84bc,	// (0x0000a20e) cell_ai5_widget_pane_g8_ParamLimits

0x84bc,	// (0x0000a20e) cell_ai5_widget_pane_g8

0x84d0,	// (0x0000a222) cell_ai5_widget_pane_g9_ParamLimits

0x84d0,	// (0x0000a222) cell_ai5_widget_pane_g9

0x84e4,	// (0x0000a236) cell_ai5_widget_pane_g10_ParamLimits

0x84e4,	// (0x0000a236) cell_ai5_widget_pane_g10

0x8810,	// (0x0000a562) status_icon_pane_g1

0xe420,	// (0x00010172) bg_popup_sub_pane_cp13

0x8818,	// (0x0000a56a) popup_keymap_window_t1

0xad56,	// (0x0000caa8) control_pane_g6_ParamLimits

0xad56,	// (0x0000caa8) control_pane_g6

0xad63,	// (0x0000cab5) control_pane_g7_ParamLimits

0xad63,	// (0x0000cab5) control_pane_g7

0xad70,	// (0x0000cac2) control_pane_g8_ParamLimits

0xad70,	// (0x0000cac2) control_pane_g8

0xdfa0,	// (0x0000fcf2) dt_sta_controll_pane_ParamLimits

0xdfad,	// (0x0000fcff) dt_sta_indi_pane_ParamLimits

0xdfba,	// (0x0000fd0c) dt_sta_title_pane_ParamLimits

0xecc4,	// (0x00010a16) aid_size_touch_scroll_bar_cale

0xe5c5,	// (0x00010317) popup_discreet_window_ParamLimits

0xe5c5,	// (0x00010317) popup_discreet_window

0x9ed2,	// (0x0000bc24) popup_sk_window

0x2284,	// (0x00003fd6) bg_popup_sub_pane_cp28_ParamLimits

0x2284,	// (0x00003fd6) bg_popup_sub_pane_cp28

0x8826,	// (0x0000a578) popup_discreet_window_g1_ParamLimits

0x8826,	// (0x0000a578) popup_discreet_window_g1

0x8846,	// (0x0000a598) popup_discreet_window_t1_ParamLimits

0x8846,	// (0x0000a598) popup_discreet_window_t1

0x8864,	// (0x0000a5b6) popup_discreet_window_t2_ParamLimits

0x8864,	// (0x0000a5b6) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00011bf5) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00011bf5) popup_discreet_window_t

0x88b6,	// (0x0000a608) popup_sk_window_g1

0x88c0,	// (0x0000a612) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00011bfc) popup_sk_window_g

0x88ca,	// (0x0000a61c) popup_sk_window_t1

0x88da,	// (0x0000a62c) popup_sk_window_t1_copy1

0x845d,	// (0x0000a1af) cell_ai5_widget_pane_g2_ParamLimits

0x85bb,	// (0x0000a30d) cell_ai5_widget_pane_t9_ParamLimits

0x85bb,	// (0x0000a30d) cell_ai5_widget_pane_t9

0xe420,	// (0x00010172) main_fep_fshwr2_pane

0xe039,	// (0x0000fd8b) aid_fshwr2_btn_pane

0xe048,	// (0x0000fd9a) aid_fshwr2_syb_pane

0xe05a,	// (0x0000fdac) aid_fshwr2_txt_pane

0xe069,	// (0x0000fdbb) fshwr2_func_candi_pane

0xe07a,	// (0x0000fdcc) fshwr2_hwr_syb_pane

0xe095,	// (0x0000fde7) fshwr2_icf_pane

0xe420,	// (0x00010172) fshwr2_icf_bg_pane

0xe0ab,	// (0x0000fdfd) fshwr2_icf_pane_t1_ParamLimits

0xe0ab,	// (0x0000fdfd) fshwr2_icf_pane_t1

0x4940,	// (0x00006692) fshwr2_func_candi_pane_g1

0x8979,	// (0x0000a6cb) fshwr2_func_candi_row_pane_ParamLimits

0x8979,	// (0x0000a6cb) fshwr2_func_candi_row_pane

0xe0c3,	// (0x0000fe15) cell_fshwr2_syb_pane_ParamLimits

0xe0c3,	// (0x0000fe15) cell_fshwr2_syb_pane

0x4de5,	// (0x00006b37) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) fshwr2_hwr_syb_pane_g1

0xe420,	// (0x00010172) bg_popup_call_pane_cp01

0x89a4,	// (0x0000a6f6) fshwr2_func_candi_cell_pane_ParamLimits

0x89a4,	// (0x0000a6f6) fshwr2_func_candi_cell_pane

0x89d6,	// (0x0000a728) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x89d6,	// (0x0000a728) fshwr2_func_candi_cell_bg_pane

0x89f0,	// (0x0000a742) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x89f0,	// (0x0000a742) fshwr2_func_candi_cell_pane_g1

0x8a10,	// (0x0000a762) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8a10,	// (0x0000a762) fshwr2_func_candi_cell_pane_t1

0xe420,	// (0x00010172) bg_button_pane_cp08

0x08ea,	// (0x0000263c) cell_fshwr2_syb_bg_pane

0xe0dc,	// (0x0000fe2e) cell_fshwr2_syb_bg_pane_g1

0xe0e4,	// (0x0000fe36) cell_fshwr2_syb_bg_pane_t1

0xee20,	// (0x00010b72) main_tmo_pane

0xbe73,	// (0x0000dbc5) uni_indicator_pane_g1_ParamLimits

0xbe88,	// (0x0000dbda) uni_indicator_pane_g2_ParamLimits

0xbe9d,	// (0x0000dbef) uni_indicator_pane_g3_ParamLimits

0xbeb3,	// (0x0000dc05) uni_indicator_pane_g4_ParamLimits

0xbeb3,	// (0x0000dc05) uni_indicator_pane_g4

0xbec7,	// (0x0000dc19) uni_indicator_pane_g5_ParamLimits

0xbec7,	// (0x0000dc19) uni_indicator_pane_g5

0xbedb,	// (0x0000dc2d) uni_indicator_pane_g6_ParamLimits

0xbedb,	// (0x0000dc2d) uni_indicator_pane_g6

0xf916,	// (0x00011668) uni_indicator_pane_g_ParamLimits

0xcc2b,	// (0x0000e97d) popup_tmo_note_window_ParamLimits

0xcc2b,	// (0x0000e97d) popup_tmo_note_window

0xee20,	// (0x00010b72) fshwr2_bg_pane

0x8a01,	// (0x0000a753) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8a01,	// (0x0000a753) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00011c01) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00011c01) fshwr2_func_candi_cell_pane_g

0x4940,	// (0x00006692) bg_popup_window_pane_cp01

0x8a3a,	// (0x0000a78c) bg_popup_window_pane_g1_cp01

0x8a43,	// (0x0000a795) bg_popup_window_pane_cp22_ParamLimits

0x8a43,	// (0x0000a795) bg_popup_window_pane_cp22

0x8a51,	// (0x0000a7a3) listscroll_tmo_link_pane_ParamLimits

0x8a51,	// (0x0000a7a3) listscroll_tmo_link_pane

0x8a91,	// (0x0000a7e3) popup_tmo_note_window_g1_ParamLimits

0x8a91,	// (0x0000a7e3) popup_tmo_note_window_g1

0x8a9e,	// (0x0000a7f0) tmo_note_info_pane_ParamLimits

0x8a9e,	// (0x0000a7f0) tmo_note_info_pane

0xe0f3,	// (0x0000fe45) list_tmo_note_info_pane_g1_ParamLimits

0xe0f3,	// (0x0000fe45) list_tmo_note_info_pane_g1

0x8acf,	// (0x0000a821) list_tmo_note_info_pane_g2_ParamLimits

0x8acf,	// (0x0000a821) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00011c06) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00011c06) list_tmo_note_info_pane_g

0x8aeb,	// (0x0000a83d) list_tmo_note_info_text_pane_ParamLimits

0x8aeb,	// (0x0000a83d) list_tmo_note_info_text_pane

0x8b70,	// (0x0000a8c2) list_tmo_link_pane

0x8b7d,	// (0x0000a8cf) scroll_pane_cp20

0x8b8a,	// (0x0000a8dc) list_single_tmo_link_pane_ParamLimits

0x8b8a,	// (0x0000a8dc) list_single_tmo_link_pane

0x8b9a,	// (0x0000a8ec) list_single_tmo_link_pane_t1

0x8ba8,	// (0x0000a8fa) list_tmo_note_info_text_pane_t1_ParamLimits

0x8ba8,	// (0x0000a8fa) list_tmo_note_info_text_pane_t1

0xa84d,	// (0x0000c59f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa84d,	// (0x0000c59f) aid_size_touch_scroll_bar_cp01

0xa77c,	// (0x0000c4ce) aid_size_touch_slider_marker

0x9ec2,	// (0x0000bc14) popup_settings_window_ParamLimits

0x9ec2,	// (0x0000bc14) popup_settings_window

0x0e87,	// (0x00002bd9) popup_candi_list_indi_window

0x14e0,	// (0x00003232) aid_touch_navi_pane_ParamLimits

0x67ed,	// (0x0000853f) rs_clock_indi_pane

0x67f6,	// (0x00008548) sctrl_sk_bottom_pane_ParamLimits

0x6807,	// (0x00008559) sctrl_sk_top_pane_ParamLimits

0x704b,	// (0x00008d9d) popup_fep_tooltip_window

0x83dd,	// (0x0000a12f) aid_size_cell_widget_grid_ParamLimits

0x8451,	// (0x0000a1a3) cell_ai5_widget_pane_g1_ParamLimits

0x8451,	// (0x0000a1a3) cell_ai5_widget_pane_g1

0xdf46,	// (0x0000fc98) cell_ai5_widget_pane_g6_ParamLimits

0xdf52,	// (0x0000fca4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x00011b84) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x00011b84) cell_ai5_widget_pane_g

0x85df,	// (0x0000a331) cell_ai5_widget_pane_t10_ParamLimits

0x85df,	// (0x0000a331) cell_ai5_widget_pane_t10

0x85f5,	// (0x0000a347) grid_ai5_widget_pane_ParamLimits

0xdf7c,	// (0x0000fcce) cell_contacts_ai5_widget_pane_ParamLimits

0xdf7c,	// (0x0000fcce) cell_contacts_ai5_widget_pane

0x8879,	// (0x0000a5cb) popup_discreet_window_t3_ParamLimits

0x8879,	// (0x0000a5cb) popup_discreet_window_t3

0x894a,	// (0x0000a69c) popup_fshwr2_char_preview_window_ParamLimits

0x894a,	// (0x0000a69c) popup_fshwr2_char_preview_window

0xe10a,	// (0x0000fe5c) tmo_note_info_pane_t1

0xe11f,	// (0x0000fe71) tmo_note_info_pane_t2

0xe138,	// (0x0000fe8a) tmo_note_info_pane_t3

0x8b4c,	// (0x0000a89e) tmo_note_info_pane_t4

0x8b5e,	// (0x0000a8b0) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00011c0b) tmo_note_info_pane_t

0x8b70,	// (0x0000a8c2) list_tmo_link_pane_ParamLimits

0x8b7d,	// (0x0000a8cf) scroll_pane_cp20_ParamLimits

0xe420,	// (0x00010172) bg_popup_fep_char_preview_window_cp01

0x8bc1,	// (0x0000a913) popup_fshwr2_char_preview_window_t1

0x8bcf,	// (0x0000a921) popup_candi_list_indi_window_g1

0x8bd8,	// (0x0000a92a) bg_cell_contacts_ai5_widget_pane

0x8be4,	// (0x0000a936) cell_contacts_ai5_widget_pane_g1

0x8bf4,	// (0x0000a946) cell_contacts_ai5_widget_pane_g2

0x8c00,	// (0x0000a952) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00011c16) cell_contacts_ai5_widget_pane_g

0x8c0c,	// (0x0000a95e) cell_contacts_ai5_widget_pane_t1

0xee20,	// (0x00010b72) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe1b2,	// (0x0000ff04) settings_container_pane

0x08ea,	// (0x0000263c) listscroll_set_pane_copy1

0x3d6b,	// (0x00005abd) scroll_pane_cp121_copy1

0x8c92,	// (0x0000a9e4) set_content_pane_copy1

0xe1be,	// (0x0000ff10) aid_height_set_list_copy1_ParamLimits

0xe1be,	// (0x0000ff10) aid_height_set_list_copy1

0x3287,	// (0x00004fd9) aid_size_parent_copy1_ParamLimits

0x3287,	// (0x00004fd9) aid_size_parent_copy1

0xe1ca,	// (0x0000ff1c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe1ca,	// (0x0000ff1c) button_value_adjust_pane_cp6_copy1

0x0e5f,	// (0x00002bb1) list_highlight_pane_cp2_copy1_ParamLimits

0x0e5f,	// (0x00002bb1) list_highlight_pane_cp2_copy1

0xe1de,	// (0x0000ff30) list_set_pane_copy1_ParamLimits

0xe1de,	// (0x0000ff30) list_set_pane_copy1

0xe14d,	// (0x0000fe9f) main_pane_set_t1_copy1_ParamLimits

0xe14d,	// (0x0000fe9f) main_pane_set_t1_copy1

0xe187,	// (0x0000fed9) main_pane_set_t2_copy1_ParamLimits

0xe187,	// (0x0000fed9) main_pane_set_t2_copy1

0xe2a5,	// (0x0000fff7) main_pane_set_t3_copy1

0xe2b3,	// (0x00010005) main_pane_set_t4_copy1

0xe1a6,	// (0x0000fef8) set_content_pane_g1_copy1_ParamLimits

0xe1a6,	// (0x0000fef8) set_content_pane_g1_copy1

0xe2c1,	// (0x00010013) setting_code_pane_copy1

0x8da5,	// (0x0000aaf7) setting_slider_graphic_pane_copy1

0x8da5,	// (0x0000aaf7) setting_slider_pane_copy1

0x8da5,	// (0x0000aaf7) setting_text_pane_copy1

0x8da5,	// (0x0000aaf7) setting_volume_pane_copy1

0xe2c1,	// (0x00010013) settings_code_pane_cp2_copy1

0xe2c9,	// (0x0001001b) settings_code_pane_cp_copy1_ParamLimits

0xe2c9,	// (0x0001001b) settings_code_pane_cp_copy1

0xe2dd,	// (0x0001002f) volume_set_pane_copy1

0xe2e9,	// (0x0001003b) volume_set_pane_g10_copy1

0xe2f5,	// (0x00010047) volume_set_pane_g1_copy1

0xe2ff,	// (0x00010051) volume_set_pane_g2_copy1

0xe309,	// (0x0001005b) volume_set_pane_g3_copy1

0xe313,	// (0x00010065) volume_set_pane_g4_copy1

0xe31d,	// (0x0001006f) volume_set_pane_g5_copy1

0xe327,	// (0x00010079) volume_set_pane_g6_copy1

0xe331,	// (0x00010083) volume_set_pane_g7_copy1

0xe33b,	// (0x0001008d) volume_set_pane_g8_copy1

0xe345,	// (0x00010097) volume_set_pane_g9_copy1

0xe6ca,	// (0x0001041c) bg_set_opt_pane_cp_copy1_ParamLimits

0xe6ca,	// (0x0001041c) bg_set_opt_pane_cp_copy1

0x8e33,	// (0x0000ab85) setting_slider_pane_t1_copy1_ParamLimits

0x8e33,	// (0x0000ab85) setting_slider_pane_t1_copy1

0xe34f,	// (0x000100a1) setting_slider_pane_t2_copy1_ParamLimits

0xe34f,	// (0x000100a1) setting_slider_pane_t2_copy1

0xe369,	// (0x000100bb) setting_slider_pane_t3_copy1_ParamLimits

0xe369,	// (0x000100bb) setting_slider_pane_t3_copy1

0xe381,	// (0x000100d3) slider_set_pane_copy1_ParamLimits

0xe381,	// (0x000100d3) slider_set_pane_copy1

0xeee4,	// (0x00010c36) set_opt_bg_pane_g1_copy2

0xeeec,	// (0x00010c3e) set_opt_bg_pane_g2_copy2

0x8e99,	// (0x0000abeb) set_opt_bg_pane_g3_copy2

0xeefc,	// (0x00010c4e) set_opt_bg_pane_g4_copy2

0xef04,	// (0x00010c56) set_opt_bg_pane_g5_copy2

0xef0c,	// (0x00010c5e) set_opt_bg_pane_g6_copy2

0xe397,	// (0x000100e9) set_opt_bg_pane_g7_copy2

0x8ead,	// (0x0000abff) set_opt_bg_pane_g8_copy2

0x8eb7,	// (0x0000ac09) set_opt_bg_pane_g9_copy2

0x8ec1,	// (0x0000ac13) aid_size_touch_slider_mark_copy1_ParamLimits

0x8ec1,	// (0x0000ac13) aid_size_touch_slider_mark_copy1

0x8ed5,	// (0x0000ac27) slider_set_pane_g1_copy1

0x8ede,	// (0x0000ac30) slider_set_pane_g2_copy1

0x31ee,	// (0x00004f40) slider_set_pane_g3_copy1_ParamLimits

0x31ee,	// (0x00004f40) slider_set_pane_g3_copy1

0x3202,	// (0x00004f54) slider_set_pane_g4_copy1_ParamLimits

0x3202,	// (0x00004f54) slider_set_pane_g4_copy1

0x321a,	// (0x00004f6c) slider_set_pane_g5_copy1_ParamLimits

0x321a,	// (0x00004f6c) slider_set_pane_g5_copy1

0x31ee,	// (0x00004f40) slider_set_pane_g6_copy1_ParamLimits

0x31ee,	// (0x00004f40) slider_set_pane_g6_copy1

0xe3a1,	// (0x000100f3) slider_set_pane_g7_copy1_ParamLimits

0xe3a1,	// (0x000100f3) slider_set_pane_g7_copy1

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp2_copy1

0x8efc,	// (0x0000ac4e) setting_slider_graphic_pane_g1_copy1

0xe3b7,	// (0x00010109) setting_slider_graphic_pane_t1_copy1

0xe3c7,	// (0x00010119) setting_slider_graphic_pane_t2_copy1

0xe3d7,	// (0x00010129) slider_set_pane_cp_copy1

0x8f35,	// (0x0000ac87) input_focus_pane_cp1_copy1

0x8f3e,	// (0x0000ac90) list_set_text_pane_copy1

0x8f46,	// (0x0000ac98) setting_text_pane_g1_copy1

0xe778,	// (0x000104ca) set_text_pane_t1_copy1

0x8f35,	// (0x0000ac87) input_focus_pane_cp2_copy1

0x8f46,	// (0x0000ac98) setting_code_pane_g1_copy1

0xe3df,	// (0x00010131) setting_code_pane_t1_copy1

0xe3ed,	// (0x0001013f) list_set_graphic_pane_copy1

0xe5a3,	// (0x000102f5) bg_set_opt_pane_cp4_copy1

0xab8b,	// (0x0000c8dd) list_set_graphic_pane_g1_copy1_ParamLimits

0xab8b,	// (0x0000c8dd) list_set_graphic_pane_g1_copy1

0xe3ff,	// (0x00010151) list_set_graphic_pane_g2_copy1

0xaba3,	// (0x0000c8f5) list_set_graphic_pane_t1_copy1_ParamLimits

0xaba3,	// (0x0000c8f5) list_set_graphic_pane_t1_copy1

0x4940,	// (0x00006692) rs_clock_indi_pane_g1

0x8f90,	// (0x0000ace2) rs_clock_indi_pane_t1

0x8f9e,	// (0x0000acf0) rs_indi_pane

0x8fa6,	// (0x0000acf8) rs_indi_pane_g1

0x8faf,	// (0x0000ad01) rs_indi_pane_g2

0x8fb8,	// (0x0000ad0a) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00011c1d) rs_indi_pane_g

0x08ea,	// (0x0000263c) bg_popup_preview_window_pane_cp03

0x8fc1,	// (0x0000ad13) popup_fep_tooltip_window_t1

0x5bb3,	// (0x00007905) popup_note2_window_g2_ParamLimits

0x5bb3,	// (0x00007905) popup_note2_window_g2

0x0001,

0xfc64,	// (0x000119b6) popup_note2_window_g_ParamLimits

0xfc64,	// (0x000119b6) popup_note2_window_g

0x61c2,	// (0x00007f14) bg_popup_sub_pane_cp11_ParamLimits

0x61cf,	// (0x00007f21) cell_ai3_links_pane_g1_ParamLimits

0x61e6,	// (0x00007f38) cell_ai3_links_pane_t1

0xe778,	// (0x000104ca) set_text_pane_t1_copy1_ParamLimits

0xac17,	// (0x0000c969) cell_graphic_popup_pane_cp2_ParamLimits

0xac17,	// (0x0000c969) cell_graphic_popup_pane_cp2

0xe407,	// (0x00010159) cell_graphic_popup_pane_g1_cp2

0xead7,	// (0x00010829) cell_graphic_popup_pane_g2_cp2

0x8fd7,	// (0x0000ad29) cell_graphic_popup_pane_g3_cp2

0x8fdf,	// (0x0000ad31) cell_graphic_popup_pane_t2_cp2

0xeae8,	// (0x0001083a) grid_highlight_pane_cp3_cp2

0xf358,	// (0x000110aa) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xee20,	// (0x00010b72) main_tmo_pane_ParamLimits

0xcc1f,	// (0x0000e971) popup_tmo_big_image_note_window

0x8441,	// (0x0000a193) cell_ai5_widget_list_pane

0x8449,	// (0x0000a19b) cell_ai5_widget_lrg_icon_pane

0xe10a,	// (0x0000fe5c) tmo_note_info_pane_t1_ParamLimits

0xe11f,	// (0x0000fe71) tmo_note_info_pane_t2_ParamLimits

0xe138,	// (0x0000fe8a) tmo_note_info_pane_t3_ParamLimits

0x8b4c,	// (0x0000a89e) tmo_note_info_pane_t4_ParamLimits

0x8b5e,	// (0x0000a8b0) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00011c0b) tmo_note_info_pane_t_ParamLimits

0xe1b2,	// (0x0000ff04) settings_container_pane_ParamLimits

0x8f2d,	// (0x0000ac7f) indicator_popup_pane_cp5

0x8f2d,	// (0x0000ac7f) indicator_popup_pane_cp6

0xe3ed,	// (0x0001013f) list_set_graphic_pane_copy1_ParamLimits

0xe420,	// (0x00010172) bg_popup_window_pane_cp23

0x8fed,	// (0x0000ad3f) popup_tmo_big_image_note_window_g1

0x8ff9,	// (0x0000ad4b) popup_tmo_big_image_note_window_t1

0x9009,	// (0x0000ad5b) popup_tmo_big_image_note_window_t2

0x9019,	// (0x0000ad6b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00011c24) popup_tmo_big_image_note_window_t

0x9029,	// (0x0000ad7b) cell_ai5_widget_lrg_icon_pane_g1

0x9031,	// (0x0000ad83) cell_ai5_widget_lrg_icon_pane_t1

0x903f,	// (0x0000ad91) cell_ai5_widget_list_row_pane_ParamLimits

0x903f,	// (0x0000ad91) cell_ai5_widget_list_row_pane

0x9058,	// (0x0000adaa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x9058,	// (0x0000adaa) cell_ai5_widget_list_row_pane_g1

0x9065,	// (0x0000adb7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x9065,	// (0x0000adb7) cell_ai5_widget_list_row_pane_t1

0x907d,	// (0x0000adcf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x907d,	// (0x0000adcf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00011c2b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00011c2b) cell_ai5_widget_list_row_pane_t

0xe420,	// (0x00010172) main_fep_vtchi_ss_pane

0x90b4,	// (0x0000ae06) popup_fep_char_pre_window

0x90bc,	// (0x0000ae0e) popup_fep_ituss_window

0x90dd,	// (0x0000ae2f) popup_fep_vkbss_window

0x90fe,	// (0x0000ae50) grid_vkbss_keypad_pane_ParamLimits

0x90fe,	// (0x0000ae50) grid_vkbss_keypad_pane

0x910e,	// (0x0000ae60) ituss_keypad_pane

0x912a,	// (0x0000ae7c) aid_vkbss_key_offset_ParamLimits

0x912a,	// (0x0000ae7c) aid_vkbss_key_offset

0x9136,	// (0x0000ae88) cell_vkbss_key_pane_ParamLimits

0x9136,	// (0x0000ae88) cell_vkbss_key_pane

0x914c,	// (0x0000ae9e) bg_cell_vkbss_key_g1_ParamLimits

0x914c,	// (0x0000ae9e) bg_cell_vkbss_key_g1

0x9158,	// (0x0000aeaa) cell_vkbss_key_3p_pane_ParamLimits

0x9158,	// (0x0000aeaa) cell_vkbss_key_3p_pane

0x9172,	// (0x0000aec4) cell_vkbss_key_g1_ParamLimits

0x9172,	// (0x0000aec4) cell_vkbss_key_g1

0x918c,	// (0x0000aede) cell_vkbss_key_t1_ParamLimits

0x918c,	// (0x0000aede) cell_vkbss_key_t1

0x91b7,	// (0x0000af09) cell_ituss_key_pane_ParamLimits

0x91b7,	// (0x0000af09) cell_ituss_key_pane

0x91c8,	// (0x0000af1a) bg_cell_ituss_key_g1_ParamLimits

0x91c8,	// (0x0000af1a) bg_cell_ituss_key_g1

0x91d4,	// (0x0000af26) cell_ituss_key_pane_g1_ParamLimits

0x91d4,	// (0x0000af26) cell_ituss_key_pane_g1

0x91e8,	// (0x0000af3a) cell_ituss_key_pane_g2_ParamLimits

0x91e8,	// (0x0000af3a) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x00011c32) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00011c32) cell_ituss_key_pane_g

0x9213,	// (0x0000af65) cell_ituss_key_t1_ParamLimits

0x9213,	// (0x0000af65) cell_ituss_key_t1

0x9241,	// (0x0000af93) cell_ituss_key_t2_ParamLimits

0x9241,	// (0x0000af93) cell_ituss_key_t2

0x9272,	// (0x0000afc4) cell_ituss_key_t3_ParamLimits

0x9272,	// (0x0000afc4) cell_ituss_key_t3

0x92a3,	// (0x0000aff5) cell_ituss_key_t4_ParamLimits

0x92a3,	// (0x0000aff5) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00011c37) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00011c37) cell_ituss_key_t

0x92d4,	// (0x0000b026) cell_vkbss_key_3p_pane_g1

0x92dc,	// (0x0000b02e) cell_vkbss_key_3p_pane_g2

0x92e4,	// (0x0000b036) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00011c40) cell_vkbss_key_3p_pane_g

0xe420,	// (0x00010172) bg_popup_fep_char_preview_window_cp02

0x92ec,	// (0x0000b03e) popup_fep_char_pre_window_t1

0xdf3c,	// (0x0000fc8e) main_ai5_sk_pane

0x8bd8,	// (0x0000a92a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8be4,	// (0x0000a936) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8bf4,	// (0x0000a946) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8c00,	// (0x0000a952) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00011c16) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8c0c,	// (0x0000a95e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xee20,	// (0x00010b72) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe40f,	// (0x00010161) main_ai5_sk_pane_g1

0x20bc,	// (0x00003e0e) popup_query_code_window_g1

0x90d2,	// (0x0000ae24) popup_fep_vkb_icf_pane

0x90e8,	// (0x0000ae3a) popup_fep_vtchi_icf_pane

0xee20,	// (0x00010b72) bg_icf_pane

0x9304,	// (0x0000b056) list_vkb_icf_pane

0xee20,	// (0x00010b72) bg_icf_pane_cp01

0x9310,	// (0x0000b062) vtchi_icf_list_pane

0x9321,	// (0x0000b073) list_vkb_icf_pane_t1_ParamLimits

0x9321,	// (0x0000b073) list_vkb_icf_pane_t1

0x9338,	// (0x0000b08a) vtchi_icf_list_pane_t1_ParamLimits

0x9338,	// (0x0000b08a) vtchi_icf_list_pane_t1

0x90bc,	// (0x0000ae0e) popup_fep_ituss_window_ParamLimits

0x90e8,	// (0x0000ae3a) popup_fep_vtchi_icf_pane_ParamLimits

0x910e,	// (0x0000ae60) ituss_keypad_pane_ParamLimits

0x911e,	// (0x0000ae70) ituss_sks_pane

0xee20,	// (0x00010b72) bg_icf_pane_ParamLimits

0x90a5,	// (0x0000adf7) icf_edit_indi_pane_ParamLimits

0x90a5,	// (0x0000adf7) icf_edit_indi_pane

0x9304,	// (0x0000b056) list_vkb_icf_pane_ParamLimits

0xee20,	// (0x00010b72) bg_icf_pane_cp01_ParamLimits

0x90a5,	// (0x0000adf7) icf_edit_indi_pane_cp01_ParamLimits

0x90a5,	// (0x0000adf7) icf_edit_indi_pane_cp01

0x9318,	// (0x0000b06a) vtchi_query_pane

0x4de5,	// (0x00006b37) icf_edit_indi_pane_g1_ParamLimits

0x4de5,	// (0x00006b37) icf_edit_indi_pane_g1

0x93bb,	// (0x0000b10d) icf_edit_indi_pane_g2_ParamLimits

0x93bb,	// (0x0000b10d) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00011c58) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00011c58) icf_edit_indi_pane_g

0x93ca,	// (0x0000b11c) icf_edit_indi_pane_t1

0x9351,	// (0x0000b0a3) bg_input_focus_pane_cp042

0xecbb,	// (0x00010a0d) vtchi_button_pane

0x935a,	// (0x0000b0ac) vtchi_query_pane_t1

0x9368,	// (0x0000b0ba) vtchi_query_pane_t2

0x9376,	// (0x0000b0c8) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00011c47) vtchi_query_pane_t

0xe420,	// (0x00010172) bg_button_pane_cp13

0x9384,	// (0x0000b0d6) vtchi_button_pane_g1

0x938c,	// (0x0000b0de) ituss_sks_pane_g1

0x9397,	// (0x0000b0e9) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011c4e) ituss_sks_pane_g

0x939f,	// (0x0000b0f1) ituss_sks_pane_t1

0x93ad,	// (0x0000b0ff) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00011c53) ituss_sks_pane_t

0x4343,	// (0x00006095) indicator_nsta_pane_cp_g1

0x434c,	// (0x0000609e) indicator_nsta_pane_cp_g2

0x4354,	// (0x000060a6) indicator_nsta_pane_cp_g3

0x435c,	// (0x000060ae) indicator_nsta_pane_cp_g4

0x4364,	// (0x000060b6) indicator_nsta_pane_cp_g5

0x436c,	// (0x000060be) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00011800) indicator_nsta_pane_cp_g

0xd9fb,	// (0x0000f74d) cell_graphic2_pane_t2_ParamLimits

0xd9fb,	// (0x0000f74d) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00011b0d) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00011b0d) cell_graphic2_pane_t

0xda31,	// (0x0000f783) cell_graphic2_control_pane_t1

0xaa92,	// (0x0000c7e4) signal_pane_g3_ParamLimits

0xaa92,	// (0x0000c7e4) signal_pane_g3

0xaaa6,	// (0x0000c7f8) signal_pane_g4_ParamLimits

0xaaa6,	// (0x0000c7f8) signal_pane_g4

0x908f,	// (0x0000ade1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x908f,	// (0x0000ade1) cell_ai5_widget_list_row_pane_t3

0x9201,	// (0x0000af53) cell_ituss_key_pane_t1_ParamLimits

0x9201,	// (0x0000af53) cell_ituss_key_pane_t1

0x1d0a,	// (0x00003a5c) form_field_data_wide_pane_vc_t2_ParamLimits

0x1d0a,	// (0x00003a5c) form_field_data_wide_pane_vc_t2

0x1d1e,	// (0x00003a70) form_field_data_wide_pane_vc_t3_ParamLimits

0x1d1e,	// (0x00003a70) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fe,	// (0x00011550) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fe,	// (0x00011550) form_field_data_wide_pane_vc_t

0x3fe8,	// (0x00005d3a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3fe8,	// (0x00005d3a) form_field_slider_wide_pane_vc_t3

0x40c4,	// (0x00005e16) form_field_popup_wide_pane_vc_t2_ParamLimits

0x40c4,	// (0x00005e16) form_field_popup_wide_pane_vc_t2

0x40db,	// (0x00005e2d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x40db,	// (0x00005e2d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x000117ef) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x000117ef) form_field_popup_wide_pane_vc_t

0xe039,	// (0x0000fd8b) aid_fshwr2_btn_pane_ParamLimits

0xe048,	// (0x0000fd9a) aid_fshwr2_syb_pane_ParamLimits

0xe05a,	// (0x0000fdac) aid_fshwr2_txt_pane_ParamLimits

0xee20,	// (0x00010b72) fshwr2_bg_pane_ParamLimits

0xe069,	// (0x0000fdbb) fshwr2_func_candi_pane_ParamLimits

0xe07a,	// (0x0000fdcc) fshwr2_hwr_syb_pane_ParamLimits

0xe095,	// (0x0000fde7) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

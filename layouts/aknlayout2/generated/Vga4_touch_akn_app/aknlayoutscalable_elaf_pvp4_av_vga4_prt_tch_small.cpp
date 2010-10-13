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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001e9cd };

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
0x5eef,	// (0x000248bc) Screen

0x5efb,	// (0x000248c8) application_window_ParamLimits

0x5efb,	// (0x000248c8) application_window

0x154d,	// (0x0001ff1a) screen_g1

0x5f57,	// (0x00024924) area_bottom_pane_ParamLimits

0x5f57,	// (0x00024924) area_bottom_pane

0x6017,	// (0x000249e4) area_top_pane_ParamLimits

0x6017,	// (0x000249e4) area_top_pane

0x60ab,	// (0x00024a78) main_pane_ParamLimits

0x60ab,	// (0x00024a78) main_pane

0x1557,	// (0x0001ff24) misc_graphics

0x94ec,	// (0x00027eb9) battery_pane_ParamLimits

0x94ec,	// (0x00027eb9) battery_pane

0xa1b6,	// (0x00028b83) bg_status_flat_pane_g8

0xa1be,	// (0x00028b8b) bg_status_flat_pane_g9

0x95b4,	// (0x00027f81) context_pane_ParamLimits

0x95b4,	// (0x00027f81) context_pane

0x96d8,	// (0x000280a5) navi_pane_ParamLimits

0x96d8,	// (0x000280a5) navi_pane

0x9768,	// (0x00028135) signal_pane_ParamLimits

0x9768,	// (0x00028135) signal_pane

0x0008,

0xf854,	// (0x0002e221) bg_status_flat_pane_g

0x97d5,	// (0x000281a2) status_pane_g1_ParamLimits

0x97d5,	// (0x000281a2) status_pane_g1

0x97e1,	// (0x000281ae) status_pane_g2_ParamLimits

0x97e1,	// (0x000281ae) status_pane_g2

0x97ed,	// (0x000281ba) status_pane_g3_ParamLimits

0x97ed,	// (0x000281ba) status_pane_g3

0x0004,

0xf77b,	// (0x0002e148) status_pane_g_ParamLimits

0xf77b,	// (0x0002e148) status_pane_g

0x9821,	// (0x000281ee) title_pane_ParamLimits

0x9821,	// (0x000281ee) title_pane

0x9862,	// (0x0002822f) uni_indicator_pane_ParamLimits

0x9862,	// (0x0002822f) uni_indicator_pane

0x941e,	// (0x00027deb) bg_list_pane_ParamLimits

0x941e,	// (0x00027deb) bg_list_pane

0x553b,	// (0x00023f08) find_pane

0x943e,	// (0x00027e0b) listscroll_app_pane_ParamLimits

0x943e,	// (0x00027e0b) listscroll_app_pane

0x944a,	// (0x00027e17) listscroll_form_pane

0x5543,	// (0x00023f10) listscroll_gen_pane_ParamLimits

0x5543,	// (0x00023f10) listscroll_gen_pane

0x758f,	// (0x00025f5c) listscroll_set_pane

0x671c,	// (0x000250e9) main_idle_act_pane

0x9117,	// (0x00027ae4) main_idle_trad_pane

0x9117,	// (0x00027ae4) main_list_empty_pane

0x943e,	// (0x00027e0b) main_midp_pane

0x9464,	// (0x00027e31) main_pane_g1_ParamLimits

0x9464,	// (0x00027e31) main_pane_g1

0x7597,	// (0x00025f64) popup_ai_message_window_ParamLimits

0x7597,	// (0x00025f64) popup_ai_message_window

0x764b,	// (0x00026018) popup_fep_china_uni_window_ParamLimits

0x764b,	// (0x00026018) popup_fep_china_uni_window

0x76ab,	// (0x00026078) popup_fep_japan_candidate_window_ParamLimits

0x76ab,	// (0x00026078) popup_fep_japan_candidate_window

0x76d5,	// (0x000260a2) popup_fep_japan_predictive_window_ParamLimits

0x76d5,	// (0x000260a2) popup_fep_japan_predictive_window

0x770b,	// (0x000260d8) popup_find_window

0x7718,	// (0x000260e5) popup_grid_graphic_window_ParamLimits

0x7718,	// (0x000260e5) popup_grid_graphic_window

0x7748,	// (0x00026115) popup_large_graphic_colour_window

0x776e,	// (0x0002613b) popup_menu_window_ParamLimits

0x776e,	// (0x0002613b) popup_menu_window

0x7938,	// (0x00026305) popup_note_image_window

0x7922,	// (0x000262ef) popup_note_wait_window_ParamLimits

0x7922,	// (0x000262ef) popup_note_wait_window

0x7922,	// (0x000262ef) popup_note_window_ParamLimits

0x7922,	// (0x000262ef) popup_note_window

0x799e,	// (0x0002636b) popup_query_code_window_ParamLimits

0x799e,	// (0x0002636b) popup_query_code_window

0x79b4,	// (0x00026381) popup_query_data_code_window_ParamLimits

0x79b4,	// (0x00026381) popup_query_data_code_window

0x79d7,	// (0x000263a4) popup_query_data_window_ParamLimits

0x79d7,	// (0x000263a4) popup_query_data_window

0x79f9,	// (0x000263c6) popup_query_sat_info_window_ParamLimits

0x79f9,	// (0x000263c6) popup_query_sat_info_window

0x7a38,	// (0x00026405) popup_snote_single_graphic_window_ParamLimits

0x7a38,	// (0x00026405) popup_snote_single_graphic_window

0x7a38,	// (0x00026405) popup_snote_single_text_window_ParamLimits

0x7a38,	// (0x00026405) popup_snote_single_text_window

0x7a4f,	// (0x0002641c) popup_sub_window_general

0x7b95,	// (0x00026562) popup_window_general_ParamLimits

0x7b95,	// (0x00026562) popup_window_general

0x9472,	// (0x00027e3f) power_save_pane

0x743e,	// (0x00025e0b) control_pane_g1_ParamLimits

0x743e,	// (0x00025e0b) control_pane_g1

0x7461,	// (0x00025e2e) control_pane_g2_ParamLimits

0x7461,	// (0x00025e2e) control_pane_g2

0x93e1,	// (0x00027dae) control_pane_g3_ParamLimits

0x93e1,	// (0x00027dae) control_pane_g3

0x0007,

0xf763,	// (0x0002e130) control_pane_g_ParamLimits

0xf763,	// (0x0002e130) control_pane_g

0x74a6,	// (0x00025e73) control_pane_t1_ParamLimits

0x74a6,	// (0x00025e73) control_pane_t1

0x74ee,	// (0x00025ebb) control_pane_t2_ParamLimits

0x74ee,	// (0x00025ebb) control_pane_t2

0x0002,

0xf774,	// (0x0002e141) control_pane_t_ParamLimits

0xf774,	// (0x0002e141) control_pane_t

0x9306,	// (0x00027cd3) navi_navi_volume_pane_cp1

0x930e,	// (0x00027cdb) status_small_icon_pane

0x9316,	// (0x00027ce3) status_small_pane_g1_ParamLimits

0x9316,	// (0x00027ce3) status_small_pane_g1

0x934a,	// (0x00027d17) status_small_pane_g2_ParamLimits

0x934a,	// (0x00027d17) status_small_pane_g2

0x9356,	// (0x00027d23) status_small_pane_g3_ParamLimits

0x9356,	// (0x00027d23) status_small_pane_g3

0x9362,	// (0x00027d2f) status_small_pane_g4_ParamLimits

0x9362,	// (0x00027d2f) status_small_pane_g4

0x936e,	// (0x00027d3b) status_small_pane_g5_ParamLimits

0x936e,	// (0x00027d3b) status_small_pane_g5

0x937c,	// (0x00027d49) status_small_pane_g6_ParamLimits

0x937c,	// (0x00027d49) status_small_pane_g6

0x0007,

0xf752,	// (0x0002e11f) status_small_pane_g_ParamLimits

0xf752,	// (0x0002e11f) status_small_pane_g

0x93ab,	// (0x00027d78) status_small_pane_t1

0x93cd,	// (0x00027d9a) status_small_wait_pane_ParamLimits

0x93cd,	// (0x00027d9a) status_small_wait_pane

0x6cea,	// (0x000256b7) aid_levels_signal_ParamLimits

0x6cea,	// (0x000256b7) aid_levels_signal

0x6cf9,	// (0x000256c6) signal_pane_g1_ParamLimits

0x6cf9,	// (0x000256c6) signal_pane_g1

0x6d0e,	// (0x000256db) signal_pane_g2_ParamLimits

0x6d0e,	// (0x000256db) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002e0b0) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002e0b0) signal_pane_g

0x6d3f,	// (0x0002570c) context_pane_g1

0x630a,	// (0x00024cd7) title_pane_g1

0x633c,	// (0x00024d09) title_pane_t1

0x156d,	// (0x0001ff3a) title_pane_t2

0x1593,	// (0x0001ff60) title_pane_t3

0x0002,

0xf532,	// (0x0002deff) title_pane_t

0x987a,	// (0x00028247) aid_levels_battery_ParamLimits

0x987a,	// (0x00028247) aid_levels_battery

0x988b,	// (0x00028258) battery_pane_g1_ParamLimits

0x988b,	// (0x00028258) battery_pane_g1

0x98a1,	// (0x0002826e) battery_pane_g2_ParamLimits

0x98a1,	// (0x0002826e) battery_pane_g2

0x0001,

0xf786,	// (0x0002e153) battery_pane_g_ParamLimits

0xf786,	// (0x0002e153) battery_pane_g

0xab00,	// (0x000294cd) uni_indicator_pane_g1

0xab16,	// (0x000294e3) uni_indicator_pane_g2

0xab2c,	// (0x000294f9) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002e2c9) uni_indicator_pane_g

0x727b,	// (0x00025c48) navi_icon_pane_ParamLimits

0x727b,	// (0x00025c48) navi_icon_pane

0x71c2,	// (0x00025b8f) navi_midp_pane

0x7297,	// (0x00025c64) navi_navi_pane

0x72a1,	// (0x00025c6e) navi_text_pane_ParamLimits

0x72a1,	// (0x00025c6e) navi_text_pane

0x154d,	// (0x0001ff1a) status_small_wait_pane_g1

0x18ce,	// (0x0002029b) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002e2c4) status_small_wait_pane_g

0xa813,	// (0x000291e0) navi_navi_icon_text_pane

0xa81b,	// (0x000291e8) navi_navi_pane_g1_ParamLimits

0xa81b,	// (0x000291e8) navi_navi_pane_g1

0xa82d,	// (0x000291fa) navi_navi_pane_g2_ParamLimits

0xa82d,	// (0x000291fa) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002e292) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002e292) navi_navi_pane_g

0xa83f,	// (0x0002920c) navi_navi_tabs_pane

0xa848,	// (0x00029215) navi_navi_text_pane

0xa813,	// (0x000291e0) navi_navi_volume_pane

0xa7ef,	// (0x000291bc) navi_text_pane_t1

0xa7e3,	// (0x000291b0) navi_icon_pane_g1

0xa736,	// (0x00029103) navi_navi_text_pane_t1

0x7e3e,	// (0x0002680b) navi_navi_volume_pane_g1

0x7e46,	// (0x00026813) volume_small_pane

0xa69c,	// (0x00029069) navi_navi_icon_text_pane_g1

0xa6a4,	// (0x00029071) navi_navi_icon_text_pane_t1

0x7297,	// (0x00025c64) navi_tabs_2_long_pane

0x7297,	// (0x00025c64) navi_tabs_2_pane

0x7297,	// (0x00025c64) navi_tabs_3_long_pane

0x7297,	// (0x00025c64) navi_tabs_3_pane

0x7297,	// (0x00025c64) navi_tabs_4_pane

0x7e1e,	// (0x000267eb) tabs_2_active_pane_ParamLimits

0x7e1e,	// (0x000267eb) tabs_2_active_pane

0x7e2e,	// (0x000267fb) tabs_2_passive_pane_ParamLimits

0x7e2e,	// (0x000267fb) tabs_2_passive_pane

0x7dec,	// (0x000267b9) tabs_3_active_pane_ParamLimits

0x7dec,	// (0x000267b9) tabs_3_active_pane

0x7dfc,	// (0x000267c9) tabs_3_passive_pane_ParamLimits

0x7dfc,	// (0x000267c9) tabs_3_passive_pane

0x7e0d,	// (0x000267da) tabs_3_passive_pane_cp_ParamLimits

0x7e0d,	// (0x000267da) tabs_3_passive_pane_cp

0x7da0,	// (0x0002676d) tabs_4_active_pane_ParamLimits

0x7da0,	// (0x0002676d) tabs_4_active_pane

0x7db3,	// (0x00026780) tabs_4_passive_pane_ParamLimits

0x7db3,	// (0x00026780) tabs_4_passive_pane

0x7dc4,	// (0x00026791) tabs_4_passive_pane_cp_ParamLimits

0x7dc4,	// (0x00026791) tabs_4_passive_pane_cp

0x7dd5,	// (0x000267a2) tabs_4_passive_pane_cp2_ParamLimits

0x7dd5,	// (0x000267a2) tabs_4_passive_pane_cp2

0x7d7c,	// (0x00026749) tabs_2_long_active_pane_ParamLimits

0x7d7c,	// (0x00026749) tabs_2_long_active_pane

0x7d8e,	// (0x0002675b) tabs_2_long_passive_pane_ParamLimits

0x7d8e,	// (0x0002675b) tabs_2_long_passive_pane

0x7d3d,	// (0x0002670a) tabs_3_long_active_pane_ParamLimits

0x7d3d,	// (0x0002670a) tabs_3_long_active_pane

0x7d50,	// (0x0002671d) tabs_3_long_passive_pane_ParamLimits

0x7d50,	// (0x0002671d) tabs_3_long_passive_pane

0x7d69,	// (0x00026736) tabs_3_long_passive_pane_cp_ParamLimits

0x7d69,	// (0x00026736) tabs_3_long_passive_pane_cp

0x7ce3,	// (0x000266b0) volume_small_pane_g1

0x7cec,	// (0x000266b9) volume_small_pane_g2

0x7cf5,	// (0x000266c2) volume_small_pane_g3

0x7cfe,	// (0x000266cb) volume_small_pane_g4

0x7d07,	// (0x000266d4) volume_small_pane_g5

0x7d10,	// (0x000266dd) volume_small_pane_g6

0x7d19,	// (0x000266e6) volume_small_pane_g7

0x7d22,	// (0x000266ef) volume_small_pane_g8

0x7d2b,	// (0x000266f8) volume_small_pane_g9

0x7d34,	// (0x00026701) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002e25e) volume_small_pane_g

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp2_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp2

0x63a4,	// (0x00024d71) tabs_3_active_pane_g1

0x63ac,	// (0x00024d79) tabs_3_active_pane_t1

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp2_ParamLimits

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp2

0x63a4,	// (0x00024d71) tabs_3_passive_pane_g1

0x63ac,	// (0x00024d79) tabs_3_passive_pane_t1

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp3_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp3

0x63be,	// (0x00024d8b) tabs_4_active_pane_g1

0x63c6,	// (0x00024d93) tabs_4_active_pane_t1

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp3_ParamLimits

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp3

0x63be,	// (0x00024d8b) tabs_4_1_passive_pane_g1

0x63c6,	// (0x00024d93) tabs_4_1_passive_pane_t1

0x943e,	// (0x00027e0b) list_highlight_pane_cp2

0xad79,	// (0x00029746) list_set_pane_ParamLimits

0xad79,	// (0x00029746) list_set_pane

0xae3b,	// (0x00029808) main_pane_set_t1_ParamLimits

0xae3b,	// (0x00029808) main_pane_set_t1

0xae5b,	// (0x00029828) main_pane_set_t2_ParamLimits

0xae5b,	// (0x00029828) main_pane_set_t2

0xae6f,	// (0x0002983c) main_pane_set_t3_ParamLimits

0xae6f,	// (0x0002983c) main_pane_set_t3

0xae83,	// (0x00029850) main_pane_set_t4_ParamLimits

0xae83,	// (0x00029850) main_pane_set_t4

0x0003,

0xf961,	// (0x0002e32e) main_pane_set_t_ParamLimits

0xf961,	// (0x0002e32e) main_pane_set_t

0xae97,	// (0x00029864) setting_code_pane

0xaea1,	// (0x0002986e) setting_slider_graphic_pane

0xaea1,	// (0x0002986e) setting_slider_pane

0xaea1,	// (0x0002986e) setting_text_pane

0xaea1,	// (0x0002986e) setting_volume_pane

0x63d8,	// (0x00024da5) volume_set_pane

0x15b3,	// (0x0001ff80) bg_set_opt_pane_cp

0x63e2,	// (0x00024daf) setting_slider_pane_t1

0x63fb,	// (0x00024dc8) setting_slider_pane_t2

0x6415,	// (0x00024de2) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002df06) setting_slider_pane_t

0x642d,	// (0x00024dfa) slider_set_pane

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp2

0x15c1,	// (0x0001ff8e) setting_slider_graphic_pane_g1

0x6443,	// (0x00024e10) setting_slider_graphic_pane_t1

0x6453,	// (0x00024e20) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002df0d) setting_slider_graphic_pane_t

0x6463,	// (0x00024e30) slider_set_pane_cp

0x1557,	// (0x0001ff24) input_focus_pane_cp1

0xad3a,	// (0x00029707) list_set_text_pane

0x154d,	// (0x0001ff1a) setting_text_pane_g1

0x1557,	// (0x0001ff24) input_focus_pane_cp2

0x154d,	// (0x0001ff1a) setting_code_pane_g1

0x15ca,	// (0x0001ff97) setting_code_pane_t1

0x4d72,	// (0x0002373f) set_text_pane_t1_ParamLimits

0x4d72,	// (0x0002373f) set_text_pane_t1

0x31bf,	// (0x00021b8c) set_opt_bg_pane_g1

0x31c7,	// (0x00021b94) set_opt_bg_pane_g2

0xad12,	// (0x000296df) set_opt_bg_pane_g3

0x31d7,	// (0x00021ba4) set_opt_bg_pane_g4

0x31df,	// (0x00021bac) set_opt_bg_pane_g5

0x31e7,	// (0x00021bb4) set_opt_bg_pane_g6

0xad1c,	// (0x000296e9) set_opt_bg_pane_g7

0xad26,	// (0x000296f3) set_opt_bg_pane_g8

0xad30,	// (0x000296fd) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002e31b) set_opt_bg_pane_g

0xad05,	// (0x000296d2) slider_set_pane_g1

0x7ec7,	// (0x00026894) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002e30c) slider_set_pane_g

0x7e4f,	// (0x0002681c) volume_set_pane_g1

0x7e59,	// (0x00026826) volume_set_pane_g2

0x7e63,	// (0x00026830) volume_set_pane_g3

0x7e6d,	// (0x0002683a) volume_set_pane_g4

0x7e77,	// (0x00026844) volume_set_pane_g5

0x7e81,	// (0x0002684e) volume_set_pane_g6

0x7e8b,	// (0x00026858) volume_set_pane_g7

0x7e95,	// (0x00026862) volume_set_pane_g8

0x7e9f,	// (0x0002686c) volume_set_pane_g9

0x7ea9,	// (0x00026876) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002e2e4) volume_set_pane_g

0x646b,	// (0x00024e38) indicator_pane_ParamLimits

0x646b,	// (0x00024e38) indicator_pane

0x6477,	// (0x00024e44) main_idle_pane_g2_ParamLimits

0x6477,	// (0x00024e44) main_idle_pane_g2

0x649f,	// (0x00024e6c) main_pane_idle_g1_ParamLimits

0x649f,	// (0x00024e6c) main_pane_idle_g1

0x15f2,	// (0x0001ffbf) popup_clock_digital_analogue_window_ParamLimits

0x15f2,	// (0x0001ffbf) popup_clock_digital_analogue_window

0x64ad,	// (0x00024e7a) soft_indicator_pane_ParamLimits

0x64ad,	// (0x00024e7a) soft_indicator_pane

0x64bb,	// (0x00024e88) wallpaper_pane_ParamLimits

0x64bb,	// (0x00024e88) wallpaper_pane

0x154d,	// (0x0001ff1a) wallpaper_pane_g1

0x64c7,	// (0x00024e94) indicator_pane_g1_ParamLimits

0x64c7,	// (0x00024e94) indicator_pane_g1

0xb17b,	// (0x00029b48) navi_navi_icon_text_pane_srt_g1

0x1620,	// (0x0001ffed) soft_indicator_pane_t1

0x163a,	// (0x00020007) aid_ps_area_pane

0x64d3,	// (0x00024ea0) aid_ps_clock_pane

0x164b,	// (0x00020018) aid_ps_indicator_pane

0x1657,	// (0x00020024) indicator_ps_pane_ParamLimits

0x1657,	// (0x00020024) indicator_ps_pane

0x1666,	// (0x00020033) power_save_pane_g1_ParamLimits

0x1666,	// (0x00020033) power_save_pane_g1

0x1672,	// (0x0002003f) power_save_pane_g2_ParamLimits

0x1672,	// (0x0002003f) power_save_pane_g2

0x5f0b,	// (0x000248d8) aid_navinavi_width_pane

0x163a,	// (0x00020007) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002df12) power_save_pane_g_ParamLimits

0xf545,	// (0x0002df12) power_save_pane_g

0x1680,	// (0x0002004d) power_save_pane_t1_ParamLimits

0x1680,	// (0x0002004d) power_save_pane_t1

0x64d3,	// (0x00024ea0) aid_ps_clock_pane_ParamLimits

0x164b,	// (0x00020018) aid_ps_indicator_pane_ParamLimits

0x1692,	// (0x0002005f) power_save_pane_t4_ParamLimits

0x1692,	// (0x0002005f) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002df17) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002df17) power_save_pane_t

0x16bc,	// (0x00020089) power_save_t3_ParamLimits

0x16bc,	// (0x00020089) power_save_t3

0x16a7,	// (0x00020074) power_save_t2_ParamLimits

0x16a7,	// (0x00020074) power_save_t2

0x16d1,	// (0x0002009e) indicator_ps_pane_g1

0x64e1,	// (0x00024eae) ai_gene_pane_ParamLimits

0x64e1,	// (0x00024eae) ai_gene_pane

0x64ed,	// (0x00024eba) ai_links_pane_ParamLimits

0x64ed,	// (0x00024eba) ai_links_pane

0x64f9,	// (0x00024ec6) indicator_pane_cp1_ParamLimits

0x64f9,	// (0x00024ec6) indicator_pane_cp1

0x6505,	// (0x00024ed2) main_pane_idle_g1_cp_ParamLimits

0x6505,	// (0x00024ed2) main_pane_idle_g1_cp

0x16da,	// (0x000200a7) popup_ai_links_title_window

0x6511,	// (0x00024ede) soft_indicator_pane_cp1_ParamLimits

0x6511,	// (0x00024ede) soft_indicator_pane_cp1

0xaaee,	// (0x000294bb) ai_links_pane_g1

0xaaf7,	// (0x000294c4) grid_ai_links_pane

0xaad3,	// (0x000294a0) ai_gene_pane_1

0xaadc,	// (0x000294a9) ai_gene_pane_2

0xaae5,	// (0x000294b2) list_highlight_pane_cp4

0xaab3,	// (0x00029480) cell_ai_link_pane_ParamLimits

0xaab3,	// (0x00029480) cell_ai_link_pane

0xaaab,	// (0x00029478) cell_ai_link_pane_g1

0x18ce,	// (0x0002029b) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002e2bf) cell_ai_link_pane_g

0x1557,	// (0x0001ff24) grid_highlight_cp2

0x1557,	// (0x0001ff24) bg_popup_sub_pane_cp1

0x16f1,	// (0x000200be) popup_ai_links_title_window_t1

0xa9f7,	// (0x000293c4) ai_gene_pane_1_g1_ParamLimits

0xa9f7,	// (0x000293c4) ai_gene_pane_1_g1

0xaa03,	// (0x000293d0) ai_gene_pane_1_g2_ParamLimits

0xaa03,	// (0x000293d0) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002e2b5) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002e2b5) ai_gene_pane_1_g

0xaa10,	// (0x000293dd) ai_gene_pane_1_t1_ParamLimits

0xaa10,	// (0x000293dd) ai_gene_pane_1_t1

0xaa44,	// (0x00029411) grid_ai_soft_ind_pane

0xa9e2,	// (0x000293af) ai_gene_pane_2_t1_ParamLimits

0xa9e2,	// (0x000293af) ai_gene_pane_2_t1

0x651d,	// (0x00024eea) main_pane_empty_t1_ParamLimits

0x651d,	// (0x00024eea) main_pane_empty_t1

0x6535,	// (0x00024f02) main_pane_empty_t2_ParamLimits

0x6535,	// (0x00024f02) main_pane_empty_t2

0x654a,	// (0x00024f17) main_pane_empty_t3_ParamLimits

0x654a,	// (0x00024f17) main_pane_empty_t3

0x655c,	// (0x00024f29) main_pane_empty_t4_ParamLimits

0x655c,	// (0x00024f29) main_pane_empty_t4

0x656e,	// (0x00024f3b) main_pane_empty_t5_ParamLimits

0x656e,	// (0x00024f3b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002df1c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002df1c) main_pane_empty_t

0x327d,	// (0x00021c4a) bg_popup_window_pane_ParamLimits

0x327d,	// (0x00021c4a) bg_popup_window_pane

0xa744,	// (0x00029111) find_popup_pane_cp2_ParamLimits

0xa744,	// (0x00029111) find_popup_pane_cp2

0xa750,	// (0x0002911d) heading_pane_ParamLimits

0xa750,	// (0x0002911d) heading_pane

0x1557,	// (0x0001ff24) bg_popup_sub_pane

0xa6be,	// (0x0002908b) bg_popup_window_pane_g1_ParamLimits

0xa6be,	// (0x0002908b) bg_popup_window_pane_g1

0xa6ca,	// (0x00029097) bg_popup_window_pane_g2_ParamLimits

0xa6ca,	// (0x00029097) bg_popup_window_pane_g2

0xa6d6,	// (0x000290a3) bg_popup_window_pane_g3_ParamLimits

0xa6d6,	// (0x000290a3) bg_popup_window_pane_g3

0xa6e2,	// (0x000290af) bg_popup_window_pane_g4_ParamLimits

0xa6e2,	// (0x000290af) bg_popup_window_pane_g4

0xa6ee,	// (0x000290bb) bg_popup_window_pane_g5_ParamLimits

0xa6ee,	// (0x000290bb) bg_popup_window_pane_g5

0xa6fa,	// (0x000290c7) bg_popup_window_pane_g6_ParamLimits

0xa6fa,	// (0x000290c7) bg_popup_window_pane_g6

0xa706,	// (0x000290d3) bg_popup_window_pane_g7_ParamLimits

0xa706,	// (0x000290d3) bg_popup_window_pane_g7

0xa712,	// (0x000290df) bg_popup_window_pane_g8_ParamLimits

0xa712,	// (0x000290df) bg_popup_window_pane_g8

0xa71e,	// (0x000290eb) bg_popup_window_pane_g9_ParamLimits

0xa71e,	// (0x000290eb) bg_popup_window_pane_g9

0xa72a,	// (0x000290f7) bg_popup_window_pane_g10_ParamLimits

0xa72a,	// (0x000290f7) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002e27d) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002e27d) bg_popup_window_pane_g

0xa653,	// (0x00029020) bg_popup_heading_pane_ParamLimits

0xa653,	// (0x00029020) bg_popup_heading_pane

0x7f4f,	// (0x0002691c) tabs_4_passive_pane_cp_srt_ParamLimits

0x7f4f,	// (0x0002691c) tabs_4_passive_pane_cp_srt

0x7f61,	// (0x0002692e) tabs_4_passive_pane_srt_ParamLimits

0xa667,	// (0x00029034) heading_pane_g2

0x7f61,	// (0x0002692e) tabs_4_passive_pane_srt

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp3_srt

0xa66f,	// (0x0002903c) heading_pane_t1_ParamLimits

0xa66f,	// (0x0002903c) heading_pane_t1

0xa686,	// (0x00029053) heading_pane_t2_ParamLimits

0xa686,	// (0x00029053) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002e278) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002e278) heading_pane_t

0xa17e,	// (0x00028b4b) bg_popup_heading_pane_g1

0xa22d,	// (0x00028bfa) bg_popup_heading_pane_g2

0xa237,	// (0x00028c04) bg_popup_heading_pane_g3

0xa241,	// (0x00028c0e) bg_popup_heading_pane_g4

0xa24b,	// (0x00028c18) bg_popup_heading_pane_g5

0xa255,	// (0x00028c22) bg_popup_heading_pane_g6

0xa25d,	// (0x00028c2a) bg_popup_heading_pane_g7

0xa265,	// (0x00028c32) bg_popup_heading_pane_g8

0xa26f,	// (0x00028c3c) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002e234) bg_popup_heading_pane_g

0x9976,	// (0x00028343) bg_popup_sub_pane_g1

0x997e,	// (0x0002834b) bg_popup_sub_pane_g2

0x9986,	// (0x00028353) bg_popup_sub_pane_g3

0x998e,	// (0x0002835b) bg_popup_sub_pane_g4

0x9996,	// (0x00028363) bg_popup_sub_pane_g5

0x999e,	// (0x0002836b) bg_popup_sub_pane_g6

0x99a6,	// (0x00028373) bg_popup_sub_pane_g7

0x99ae,	// (0x0002837b) bg_popup_sub_pane_g8

0x99b6,	// (0x00028383) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002e20e) bg_popup_sub_pane_g

0x15a5,	// (0x0001ff72) bg_popup_window_pane_cp5_ParamLimits

0x15a5,	// (0x0001ff72) bg_popup_window_pane_cp5

0x170e,	// (0x000200db) popup_note_window_g1_ParamLimits

0x170e,	// (0x000200db) popup_note_window_g1

0x171a,	// (0x000200e7) popup_note_window_t1_ParamLimits

0x171a,	// (0x000200e7) popup_note_window_t1

0x1730,	// (0x000200fd) popup_note_window_t2_ParamLimits

0x1730,	// (0x000200fd) popup_note_window_t2

0x1746,	// (0x00020113) popup_note_window_t3_ParamLimits

0x1746,	// (0x00020113) popup_note_window_t3

0x175c,	// (0x00020129) popup_note_window_t4_ParamLimits

0x175c,	// (0x00020129) popup_note_window_t4

0x1784,	// (0x00020151) popup_note_window_t5_ParamLimits

0x1784,	// (0x00020151) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002df27) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002df27) popup_note_window_t

0x17ce,	// (0x0002019b) bg_popup_window_pane_cp6_ParamLimits

0x17ce,	// (0x0002019b) bg_popup_window_pane_cp6

0xa0fa,	// (0x00028ac7) popup_note_image_window_g1_ParamLimits

0xa0fa,	// (0x00028ac7) popup_note_image_window_g1

0xa106,	// (0x00028ad3) popup_note_image_window_g2_ParamLimits

0xa106,	// (0x00028ad3) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002e202) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002e202) popup_note_image_window_g

0xa11f,	// (0x00028aec) popup_note_image_window_t1_ParamLimits

0xa11f,	// (0x00028aec) popup_note_image_window_t1

0xa138,	// (0x00028b05) popup_note_image_window_t2_ParamLimits

0xa138,	// (0x00028b05) popup_note_image_window_t2

0xa151,	// (0x00028b1e) popup_note_image_window_t3_ParamLimits

0xa151,	// (0x00028b1e) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002e207) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002e207) popup_note_image_window_t

0x9fba,	// (0x00028987) bg_popup_window_pane_cp7_ParamLimits

0x9fba,	// (0x00028987) bg_popup_window_pane_cp7

0x9fea,	// (0x000289b7) popup_note_wait_window_g1_ParamLimits

0x9fea,	// (0x000289b7) popup_note_wait_window_g1

0x9ff6,	// (0x000289c3) popup_note_wait_window_g2_ParamLimits

0x9ff6,	// (0x000289c3) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002e1f0) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002e1f0) popup_note_wait_window_g

0xa00e,	// (0x000289db) popup_note_wait_window_t1_ParamLimits

0xa00e,	// (0x000289db) popup_note_wait_window_t1

0xa035,	// (0x00028a02) popup_note_wait_window_t2_ParamLimits

0xa035,	// (0x00028a02) popup_note_wait_window_t2

0xa053,	// (0x00028a20) popup_note_wait_window_t3_ParamLimits

0xa053,	// (0x00028a20) popup_note_wait_window_t3

0xa066,	// (0x00028a33) popup_note_wait_window_t4_ParamLimits

0xa066,	// (0x00028a33) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002e1f7) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002e1f7) popup_note_wait_window_t

0xa08b,	// (0x00028a58) wait_bar_pane_ParamLimits

0xa08b,	// (0x00028a58) wait_bar_pane

0x1557,	// (0x0001ff24) wait_anim_pane

0x1557,	// (0x0001ff24) wait_border_pane

0x154d,	// (0x0001ff1a) wait_anim_pane_g1

0x154d,	// (0x0001ff1a) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002e0ab) wait_anim_pane_g

0x9f5e,	// (0x0002892b) wait_border_pane_g1

0x9f69,	// (0x00028936) wait_border_pane_g2

0x9f72,	// (0x0002893f) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002e1e9) wait_border_pane_g

0x9dc8,	// (0x00028795) bg_popup_window_pane_cp16_ParamLimits

0x9dc8,	// (0x00028795) bg_popup_window_pane_cp16

0x9ec8,	// (0x00028895) indicator_popup_pane_cp4_ParamLimits

0x9ec8,	// (0x00028895) indicator_popup_pane_cp4

0x9edc,	// (0x000288a9) popup_query_data_window_t1_ParamLimits

0x9edc,	// (0x000288a9) popup_query_data_window_t1

0x9eee,	// (0x000288bb) popup_query_data_window_t2_ParamLimits

0x9eee,	// (0x000288bb) popup_query_data_window_t2

0x9f07,	// (0x000288d4) popup_query_data_window_t3_ParamLimits

0x9f07,	// (0x000288d4) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002e1e2) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002e1e2) popup_query_data_window_t

0x9f21,	// (0x000288ee) query_popup_data_pane_ParamLimits

0x9f21,	// (0x000288ee) query_popup_data_pane

0x9f35,	// (0x00028902) query_popup_data_pane_cp1_ParamLimits

0x9f35,	// (0x00028902) query_popup_data_pane_cp1

0x9dc8,	// (0x00028795) bg_popup_window_pane_cp10_ParamLimits

0x9dc8,	// (0x00028795) bg_popup_window_pane_cp10

0x9dfa,	// (0x000287c7) indicator_popup_pane_ParamLimits

0x9dfa,	// (0x000287c7) indicator_popup_pane

0x9e1c,	// (0x000287e9) popup_query_code_window_t1_ParamLimits

0x9e1c,	// (0x000287e9) popup_query_code_window_t1

0x9e36,	// (0x00028803) popup_query_code_window_t2_ParamLimits

0x9e36,	// (0x00028803) popup_query_code_window_t2

0x9e7f,	// (0x0002884c) popup_query_code_window_t3_ParamLimits

0x9e7f,	// (0x0002884c) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002e1db) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002e1db) popup_query_code_window_t

0x9eae,	// (0x0002887b) query_popup_pane_ParamLimits

0x9eae,	// (0x0002887b) query_popup_pane

0x17ce,	// (0x0002019b) bg_popup_window_pane_cp15_ParamLimits

0x17ce,	// (0x0002019b) bg_popup_window_pane_cp15

0x17ee,	// (0x000201bb) indicator_popup_pane_cp1_ParamLimits

0x17ee,	// (0x000201bb) indicator_popup_pane_cp1

0x1801,	// (0x000201ce) indicator_popup_pane_cp2_ParamLimits

0x1801,	// (0x000201ce) indicator_popup_pane_cp2

0x181c,	// (0x000201e9) popup_query_data_code_window_g1_ParamLimits

0x181c,	// (0x000201e9) popup_query_data_code_window_g1

0x182f,	// (0x000201fc) popup_query_data_code_window_t1_ParamLimits

0x182f,	// (0x000201fc) popup_query_data_code_window_t1

0x1841,	// (0x0002020e) popup_query_data_code_window_t2_ParamLimits

0x1841,	// (0x0002020e) popup_query_data_code_window_t2

0x1853,	// (0x00020220) popup_query_data_code_window_t3_ParamLimits

0x1853,	// (0x00020220) popup_query_data_code_window_t3

0x1869,	// (0x00020236) popup_query_data_code_window_t4_ParamLimits

0x1869,	// (0x00020236) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002df32) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002df32) popup_query_data_code_window_t

0x7237,	// (0x00025c04) list_single_midp_graphic_pane_g3

0x1883,	// (0x00020250) query_popup_data_pane_cp2_ParamLimits

0x1896,	// (0x00020263) query_popup_pane_cp2_ParamLimits

0x1896,	// (0x00020263) query_popup_pane_cp2

0x1557,	// (0x0001ff24) bg_popup_window_pane_cp11

0x9dac,	// (0x00028779) heading_pane_cp5

0x9db4,	// (0x00028781) listscroll_popup_info_pane

0x1557,	// (0x0001ff24) input_focus_pane_cp3

0x18b1,	// (0x0002027e) query_popup_pane_t1

0x18bf,	// (0x0002028c) list_popup_info_pane_ParamLimits

0x18bf,	// (0x0002028c) list_popup_info_pane

0x18ce,	// (0x0002029b) listscroll_popup_info_pane_g1

0x18d6,	// (0x000202a3) scroll_pane_cp7

0x18e0,	// (0x000202ad) popup_info_list_pane_t1_ParamLimits

0x18e0,	// (0x000202ad) popup_info_list_pane_t1

0x18fa,	// (0x000202c7) popup_info_list_pane_t2_ParamLimits

0x18fa,	// (0x000202c7) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002df3b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002df3b) popup_info_list_pane_t

0x1557,	// (0x0001ff24) bg_popup_window_pane_cp12

0xb195,	// (0x00029b62) find_popup_pane

0x15b3,	// (0x0001ff80) bg_popup_window_pane_cp3

0x1914,	// (0x000202e1) heading_pane_cp3

0x1923,	// (0x000202f0) listscroll_popup_graphic_pane

0x1557,	// (0x0001ff24) bg_popup_window_pane_cp4

0x65d0,	// (0x00024f9d) heading_pane_cp4

0x1933,	// (0x00020300) listscroll_popup_colour_pane

0x65da,	// (0x00024fa7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x65da,	// (0x00024fa7) cell_large_graphic_colour_none_popup_pane

0x65ee,	// (0x00024fbb) grid_large_graphic_colour_popup_pane_ParamLimits

0x65ee,	// (0x00024fbb) grid_large_graphic_colour_popup_pane

0x661a,	// (0x00024fe7) listscroll_popup_colour_pane_g1_ParamLimits

0x661a,	// (0x00024fe7) listscroll_popup_colour_pane_g1

0x6631,	// (0x00024ffe) listscroll_popup_colour_pane_g2_ParamLimits

0x6631,	// (0x00024ffe) listscroll_popup_colour_pane_g2

0x6648,	// (0x00025015) listscroll_popup_colour_pane_g3_ParamLimits

0x6648,	// (0x00025015) listscroll_popup_colour_pane_g3

0x6658,	// (0x00025025) listscroll_popup_colour_pane_g4_ParamLimits

0x6658,	// (0x00025025) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002df40) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002df40) listscroll_popup_colour_pane_g

0x193b,	// (0x00020308) scroll_pane_cp6_ParamLimits

0x193b,	// (0x00020308) scroll_pane_cp6

0x666c,	// (0x00025039) cell_large_graphic_colour_popup_pane_ParamLimits

0x666c,	// (0x00025039) cell_large_graphic_colour_popup_pane

0x194d,	// (0x0002031a) cell_large_graphic_colour_none_popup_pane_t1

0x1557,	// (0x0001ff24) grid_highlight_pane_cp5

0x195c,	// (0x00020329) cell_large_graphic_colour_popup_pane_g1

0x1964,	// (0x00020331) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002df49) cell_large_graphic_colour_popup_pane_g

0x196c,	// (0x00020339) cell_large_graphic_colour_popup_pane_g2_copy1

0x1975,	// (0x00020342) grid_highlight_pane_cp4

0x197d,	// (0x0002034a) bg_popup_window_pane_cp8_ParamLimits

0x197d,	// (0x0002034a) bg_popup_window_pane_cp8

0x1998,	// (0x00020365) popup_snote_single_text_window_g1_ParamLimits

0x1998,	// (0x00020365) popup_snote_single_text_window_g1

0x19aa,	// (0x00020377) popup_snote_single_text_window_t1_ParamLimits

0x19aa,	// (0x00020377) popup_snote_single_text_window_t1

0x19bd,	// (0x0002038a) popup_snote_single_text_window_t2_ParamLimits

0x19bd,	// (0x0002038a) popup_snote_single_text_window_t2

0x19d0,	// (0x0002039d) popup_snote_single_text_window_t3_ParamLimits

0x19d0,	// (0x0002039d) popup_snote_single_text_window_t3

0x1a09,	// (0x000203d6) popup_snote_single_text_window_t4_ParamLimits

0x1a09,	// (0x000203d6) popup_snote_single_text_window_t4

0x1a3d,	// (0x0002040a) popup_snote_single_text_window_t5_ParamLimits

0x1a3d,	// (0x0002040a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002df4e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002df4e) popup_snote_single_text_window_t

0x1a6c,	// (0x00020439) bg_popup_window_pane_cp9_ParamLimits

0x1a6c,	// (0x00020439) bg_popup_window_pane_cp9

0x1998,	// (0x00020365) popup_snote_single_graphic_window_g1_ParamLimits

0x1998,	// (0x00020365) popup_snote_single_graphic_window_g1

0x1a7a,	// (0x00020447) popup_snote_single_graphic_window_g2_ParamLimits

0x1a7a,	// (0x00020447) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002df59) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002df59) popup_snote_single_graphic_window_g

0x1a86,	// (0x00020453) popup_snote_single_graphic_window_t1_ParamLimits

0x1a86,	// (0x00020453) popup_snote_single_graphic_window_t1

0x1a99,	// (0x00020466) popup_snote_single_graphic_window_t2_ParamLimits

0x1a99,	// (0x00020466) popup_snote_single_graphic_window_t2

0x1aac,	// (0x00020479) popup_snote_single_graphic_window_t3_ParamLimits

0x1aac,	// (0x00020479) popup_snote_single_graphic_window_t3

0x1ae5,	// (0x000204b2) popup_snote_single_graphic_window_t4_ParamLimits

0x1ae5,	// (0x000204b2) popup_snote_single_graphic_window_t4

0x1b19,	// (0x000204e6) popup_snote_single_graphic_window_t5_ParamLimits

0x1b19,	// (0x000204e6) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002df5e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002df5e) popup_snote_single_graphic_window_t

0xb0d3,	// (0x00029aa0) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x00029aa0) grid_graphic_popup_pane

0xb101,	// (0x00029ace) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x00029ace) listscroll_popup_graphic_pane_g1

0xb115,	// (0x00029ae2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x00029ae2) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002e358) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002e358) listscroll_popup_graphic_pane_g

0xb129,	// (0x00029af6) scroll_pane_cp5

0xb06b,	// (0x00029a38) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x00029a38) cell_graphic_popup_pane

0xb04c,	// (0x00029a19) cell_graphic_popup_pane_g1

0xb054,	// (0x00029a21) cell_graphic_popup_pane_g2

0x196c,	// (0x00020339) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002e351) cell_graphic_popup_pane_g

0xb05d,	// (0x00029a2a) cell_graphic_popup_pane_t2

0x1975,	// (0x00020342) grid_highlight_pane_cp3

0x1b5a,	// (0x00020527) list_gen_pane_ParamLimits

0x1b5a,	// (0x00020527) list_gen_pane

0x1b82,	// (0x0002054f) scroll_pane

0xafa4,	// (0x00029971) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x00029971) bg_list_pane_g1

0xafc1,	// (0x0002998e) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x0002998e) bg_list_pane_g2

0xafd6,	// (0x000299a3) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x000299a3) bg_list_pane_g3

0xafea,	// (0x000299b7) bg_list_pane_g4_ParamLimits

0xafea,	// (0x000299b7) bg_list_pane_g4

0xaffe,	// (0x000299cb) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x000299cb) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002e346) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002e346) bg_list_pane_g

0xaf25,	// (0x000298f2) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double2_graphic_large_graphic_pane

0xaf25,	// (0x000298f2) list_double2_graphic_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double2_graphic_pane

0xaf25,	// (0x000298f2) list_double2_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double2_large_graphic_pane

0xaf25,	// (0x000298f2) list_double2_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double2_pane

0xaf25,	// (0x000298f2) list_double_graphic_heading_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_graphic_heading_pane

0xaf25,	// (0x000298f2) list_double_graphic_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_graphic_pane

0xaf25,	// (0x000298f2) list_double_heading_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_heading_pane

0xaf25,	// (0x000298f2) list_double_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_large_graphic_pane

0xaf25,	// (0x000298f2) list_double_number_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_number_pane

0xaf25,	// (0x000298f2) list_double_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_pane

0xaf25,	// (0x000298f2) list_double_time_pane_ParamLimits

0xaf25,	// (0x000298f2) list_double_time_pane

0xaf25,	// (0x000298f2) list_setting_number_pane_ParamLimits

0xaf25,	// (0x000298f2) list_setting_number_pane

0xaf25,	// (0x000298f2) list_setting_pane_ParamLimits

0xaf25,	// (0x000298f2) list_setting_pane

0x577f,	// (0x0002414c) list_single_2graphic_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_2graphic_pane

0x577f,	// (0x0002414c) list_single_graphic_heading_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_graphic_heading_pane

0x577f,	// (0x0002414c) list_single_graphic_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_graphic_pane

0x577f,	// (0x0002414c) list_single_heading_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_heading_pane

0xaf89,	// (0x00029956) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x00029956) list_single_large_graphic_pane

0x577f,	// (0x0002414c) list_single_number_heading_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_number_heading_pane

0x577f,	// (0x0002414c) list_single_number_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_number_pane

0x577f,	// (0x0002414c) list_single_pane_ParamLimits

0x577f,	// (0x0002414c) list_single_pane

0x1557,	// (0x0001ff24) list_highlight_pane_cp1

0x4d99,	// (0x00023766) list_single_pane_g1_ParamLimits

0x4d99,	// (0x00023766) list_single_pane_g1

0x4da5,	// (0x00023772) list_single_pane_g2_ParamLimits

0x4da5,	// (0x00023772) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002df70) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002df70) list_single_pane_g

0x573a,	// (0x00024107) list_single_pane_t1_ParamLimits

0x573a,	// (0x00024107) list_single_pane_t1

0x4d99,	// (0x00023766) list_single_number_pane_g1_ParamLimits

0x4d99,	// (0x00023766) list_single_number_pane_g1

0x4da5,	// (0x00023772) list_single_number_pane_g2_ParamLimits

0x4da5,	// (0x00023772) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002df70) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002df70) list_single_number_pane_g

0x56e4,	// (0x000240b1) list_single_number_pane_t1_ParamLimits

0x56e4,	// (0x000240b1) list_single_number_pane_t1

0x56fa,	// (0x000240c7) list_single_number_pane_t2_ParamLimits

0x56fa,	// (0x000240c7) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002e307) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002e307) list_single_number_pane_t

0x4d8d,	// (0x0002375a) list_single_graphic_pane_g1_ParamLimits

0x4d8d,	// (0x0002375a) list_single_graphic_pane_g1

0x4d99,	// (0x00023766) list_single_graphic_pane_g2_ParamLimits

0x4d99,	// (0x00023766) list_single_graphic_pane_g2

0x4da5,	// (0x00023772) list_single_graphic_pane_g3_ParamLimits

0x4da5,	// (0x00023772) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002df69) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002df69) list_single_graphic_pane_g

0x4db1,	// (0x0002377e) list_single_graphic_pane_t1_ParamLimits

0x4db1,	// (0x0002377e) list_single_graphic_pane_t1

0x4d99,	// (0x00023766) list_single_heading_pane_g1_ParamLimits

0x4d99,	// (0x00023766) list_single_heading_pane_g1

0x4da5,	// (0x00023772) list_single_heading_pane_g2_ParamLimits

0x4da5,	// (0x00023772) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002df70) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002df70) list_single_heading_pane_g

0x4dc7,	// (0x00023794) list_single_heading_pane_t1_ParamLimits

0x4dc7,	// (0x00023794) list_single_heading_pane_t1

0x4ddd,	// (0x000237aa) list_single_heading_pane_t2_ParamLimits

0x4ddd,	// (0x000237aa) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002df75) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002df75) list_single_heading_pane_t

0x4d99,	// (0x00023766) list_single_number_heading_pane_g1_ParamLimits

0x4d99,	// (0x00023766) list_single_number_heading_pane_g1

0x4da5,	// (0x00023772) list_single_number_heading_pane_g2_ParamLimits

0x4da5,	// (0x00023772) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002df70) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002df70) list_single_number_heading_pane_g

0x4dc7,	// (0x00023794) list_single_number_heading_pane_t1_ParamLimits

0x4dc7,	// (0x00023794) list_single_number_heading_pane_t1

0x4def,	// (0x000237bc) list_single_number_heading_pane_t2_ParamLimits

0x4def,	// (0x000237bc) list_single_number_heading_pane_t2

0x4e01,	// (0x000237ce) list_single_number_heading_pane_t3_ParamLimits

0x4e01,	// (0x000237ce) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002df7a) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002df7a) list_single_number_heading_pane_t

0x4e13,	// (0x000237e0) list_single_graphic_heading_pane_g1_ParamLimits

0x4e13,	// (0x000237e0) list_single_graphic_heading_pane_g1

0x4e1f,	// (0x000237ec) list_single_graphic_heading_pane_g4_ParamLimits

0x4e1f,	// (0x000237ec) list_single_graphic_heading_pane_g4

0x4da5,	// (0x00023772) list_single_graphic_heading_pane_g5_ParamLimits

0x4da5,	// (0x00023772) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002df81) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002df81) list_single_graphic_heading_pane_g

0x4dc7,	// (0x00023794) list_single_graphic_heading_pane_t1_ParamLimits

0x4dc7,	// (0x00023794) list_single_graphic_heading_pane_t1

0x4e30,	// (0x000237fd) list_single_graphic_heading_pane_t2_ParamLimits

0x4e30,	// (0x000237fd) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002df88) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002df88) list_single_graphic_heading_pane_t

0x4e42,	// (0x0002380f) list_single_large_graphic_pane_g1_ParamLimits

0x4e42,	// (0x0002380f) list_single_large_graphic_pane_g1

0x4e4e,	// (0x0002381b) list_single_large_graphic_pane_g2_ParamLimits

0x4e4e,	// (0x0002381b) list_single_large_graphic_pane_g2

0x4e5a,	// (0x00023827) list_single_large_graphic_pane_g3_ParamLimits

0x4e5a,	// (0x00023827) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002df8d) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002df8d) list_single_large_graphic_pane_g

0x9f69,	// (0x00028936) wait_border_pane_g2_copy1

0x4e66,	// (0x00023833) list_single_large_graphic_pane_g4_cp2

0x4e6e,	// (0x0002383b) list_single_large_graphic_pane_t1_ParamLimits

0x4e6e,	// (0x0002383b) list_single_large_graphic_pane_t1

0x4e84,	// (0x00023851) list_double_pane_g1_ParamLimits

0x4e84,	// (0x00023851) list_double_pane_g1

0x4e90,	// (0x0002385d) list_double_pane_g2_ParamLimits

0x4e90,	// (0x0002385d) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002df94) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002df94) list_double_pane_g

0x4e9c,	// (0x00023869) list_double_pane_t1_ParamLimits

0x4e9c,	// (0x00023869) list_double_pane_t1

0x4eb2,	// (0x0002387f) list_double_pane_t2_ParamLimits

0x4eb2,	// (0x0002387f) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002df99) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002df99) list_double_pane_t

0x4ec4,	// (0x00023891) list_double2_pane_g1_ParamLimits

0x4ec4,	// (0x00023891) list_double2_pane_g1

0x4ed5,	// (0x000238a2) list_double2_pane_g2_ParamLimits

0x4ed5,	// (0x000238a2) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002df9e) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002df9e) list_double2_pane_g

0x4ee1,	// (0x000238ae) list_double2_pane_t1_ParamLimits

0x4ee1,	// (0x000238ae) list_double2_pane_t1

0x4ef7,	// (0x000238c4) list_double2_pane_t2_ParamLimits

0x4ef7,	// (0x000238c4) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002dfa3) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002dfa3) list_double2_pane_t

0x4e84,	// (0x00023851) list_double_number_pane_g1_ParamLimits

0x4e84,	// (0x00023851) list_double_number_pane_g1

0x4e90,	// (0x0002385d) list_double_number_pane_g2_ParamLimits

0x4e90,	// (0x0002385d) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002df94) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002df94) list_double_number_pane_g

0x4f09,	// (0x000238d6) list_double_number_pane_t1_ParamLimits

0x4f09,	// (0x000238d6) list_double_number_pane_t1

0x4f1b,	// (0x000238e8) list_double_number_pane_t2_ParamLimits

0x4f1b,	// (0x000238e8) list_double_number_pane_t2

0x4f31,	// (0x000238fe) list_double_number_pane_t3_ParamLimits

0x4f31,	// (0x000238fe) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002dfa8) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002dfa8) list_double_number_pane_t

0x4f43,	// (0x00023910) list_double_graphic_pane_g1_ParamLimits

0x4f43,	// (0x00023910) list_double_graphic_pane_g1

0x4f4f,	// (0x0002391c) list_double_graphic_pane_g2_ParamLimits

0x4f4f,	// (0x0002391c) list_double_graphic_pane_g2

0x4f5e,	// (0x0002392b) list_double_graphic_pane_g3_ParamLimits

0x4f5e,	// (0x0002392b) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002dfaf) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002dfaf) list_double_graphic_pane_g

0x4f76,	// (0x00023943) list_double_graphic_pane_t1_ParamLimits

0x4f76,	// (0x00023943) list_double_graphic_pane_t1

0x4f8c,	// (0x00023959) list_double_graphic_pane_t2_ParamLimits

0x4f8c,	// (0x00023959) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002dfb8) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002dfb8) list_double_graphic_pane_t

0x4f9e,	// (0x0002396b) list_double2_graphic_pane_g1_ParamLimits

0x4f9e,	// (0x0002396b) list_double2_graphic_pane_g1

0x4faa,	// (0x00023977) list_double2_graphic_pane_g2_ParamLimits

0x4faa,	// (0x00023977) list_double2_graphic_pane_g2

0x4fb6,	// (0x00023983) list_double2_graphic_pane_g3_ParamLimits

0x4fb6,	// (0x00023983) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002dfbd) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002dfbd) list_double2_graphic_pane_g

0x4fc2,	// (0x0002398f) list_double2_graphic_pane_t1_ParamLimits

0x4fc2,	// (0x0002398f) list_double2_graphic_pane_t1

0x4fd8,	// (0x000239a5) list_double2_graphic_pane_t2_ParamLimits

0x4fd8,	// (0x000239a5) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002dfc4) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002dfc4) list_double2_graphic_pane_t

0x4fea,	// (0x000239b7) list_double_large_graphic_pane_g1_ParamLimits

0x4fea,	// (0x000239b7) list_double_large_graphic_pane_g1

0x5009,	// (0x000239d6) list_double_large_graphic_pane_g2_ParamLimits

0x5009,	// (0x000239d6) list_double_large_graphic_pane_g2

0x4e90,	// (0x0002385d) list_double_large_graphic_pane_g3_ParamLimits

0x4e90,	// (0x0002385d) list_double_large_graphic_pane_g3

0x501a,	// (0x000239e7) list_double_large_graphic_pane_g4_ParamLimits

0x501a,	// (0x000239e7) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002dfc9) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002dfc9) list_double_large_graphic_pane_g

0x5042,	// (0x00023a0f) list_double_large_graphic_pane_t1_ParamLimits

0x5042,	// (0x00023a0f) list_double_large_graphic_pane_t1

0x505b,	// (0x00023a28) list_double_large_graphic_pane_t2_ParamLimits

0x505b,	// (0x00023a28) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002dfd4) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002dfd4) list_double_large_graphic_pane_t

0x506d,	// (0x00023a3a) list_double2_large_graphic_pane_g1_ParamLimits

0x506d,	// (0x00023a3a) list_double2_large_graphic_pane_g1

0x4ec4,	// (0x00023891) list_double2_large_graphic_pane_g2_ParamLimits

0x4ec4,	// (0x00023891) list_double2_large_graphic_pane_g2

0x4ed5,	// (0x000238a2) list_double2_large_graphic_pane_g3_ParamLimits

0x4ed5,	// (0x000238a2) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002dfd9) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002dfd9) list_double2_large_graphic_pane_g

0x5079,	// (0x00023a46) list_double2_large_graphic_pane_t1_ParamLimits

0x5079,	// (0x00023a46) list_double2_large_graphic_pane_t1

0x508f,	// (0x00023a5c) list_double2_large_graphic_pane_t2_ParamLimits

0x508f,	// (0x00023a5c) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002dfe0) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002dfe0) list_double2_large_graphic_pane_t

0x50a1,	// (0x00023a6e) list_double_heading_pane_g1_ParamLimits

0x50a1,	// (0x00023a6e) list_double_heading_pane_g1

0x50b2,	// (0x00023a7f) list_double_heading_pane_g2_ParamLimits

0x50b2,	// (0x00023a7f) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002dfe5) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002dfe5) list_double_heading_pane_g

0x50be,	// (0x00023a8b) list_double_heading_pane_t1_ParamLimits

0x50be,	// (0x00023a8b) list_double_heading_pane_t1

0x4ef7,	// (0x000238c4) list_double_heading_pane_t2_ParamLimits

0x4ef7,	// (0x000238c4) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002dfea) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002dfea) list_double_heading_pane_t

0x4f9e,	// (0x0002396b) list_double_graphic_heading_pane_g1_ParamLimits

0x4f9e,	// (0x0002396b) list_double_graphic_heading_pane_g1

0x50a1,	// (0x00023a6e) list_double_graphic_heading_pane_g2_ParamLimits

0x50a1,	// (0x00023a6e) list_double_graphic_heading_pane_g2

0x50b2,	// (0x00023a7f) list_double_graphic_heading_pane_g3_ParamLimits

0x50b2,	// (0x00023a7f) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002dfef) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002dfef) list_double_graphic_heading_pane_g

0x50d4,	// (0x00023aa1) list_double_graphic_heading_pane_t1_ParamLimits

0x50d4,	// (0x00023aa1) list_double_graphic_heading_pane_t1

0x4fd8,	// (0x000239a5) list_double_graphic_heading_pane_t2_ParamLimits

0x4fd8,	// (0x000239a5) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002dff6) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002dff6) list_double_graphic_heading_pane_t

0x5009,	// (0x000239d6) list_double_time_pane_g1_ParamLimits

0x5009,	// (0x000239d6) list_double_time_pane_g1

0x4e90,	// (0x0002385d) list_double_time_pane_g2_ParamLimits

0x4e90,	// (0x0002385d) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002dffb) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002dffb) list_double_time_pane_g

0x50ea,	// (0x00023ab7) list_double_time_pane_t1_ParamLimits

0x50ea,	// (0x00023ab7) list_double_time_pane_t1

0x5100,	// (0x00023acd) list_double_time_pane_t2_ParamLimits

0x5100,	// (0x00023acd) list_double_time_pane_t2

0x5112,	// (0x00023adf) list_double_time_pane_t3_ParamLimits

0x5112,	// (0x00023adf) list_double_time_pane_t3

0x5124,	// (0x00023af1) list_double_time_pane_t4_ParamLimits

0x5124,	// (0x00023af1) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002e000) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002e000) list_double_time_pane_t

0x5136,	// (0x00023b03) list_setting_pane_g1_ParamLimits

0x5136,	// (0x00023b03) list_setting_pane_g1

0x50b2,	// (0x00023a7f) list_setting_pane_g2_ParamLimits

0x50b2,	// (0x00023a7f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002e009) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002e009) list_setting_pane_g

0x5142,	// (0x00023b0f) list_setting_pane_t1_ParamLimits

0x5142,	// (0x00023b0f) list_setting_pane_t1

0x5159,	// (0x00023b26) list_setting_pane_t2_ParamLimits

0x5159,	// (0x00023b26) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002e00e) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002e00e) list_setting_pane_t

0x5198,	// (0x00023b65) set_value_pane_cp_ParamLimits

0x5198,	// (0x00023b65) set_value_pane_cp

0x51a6,	// (0x00023b73) list_setting_number_pane_g1_ParamLimits

0x51a6,	// (0x00023b73) list_setting_number_pane_g1

0x51b2,	// (0x00023b7f) list_setting_number_pane_g2_ParamLimits

0x51b2,	// (0x00023b7f) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002e015) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002e015) list_setting_number_pane_g

0x51be,	// (0x00023b8b) list_setting_number_pane_t1_ParamLimits

0x51be,	// (0x00023b8b) list_setting_number_pane_t1

0x51d2,	// (0x00023b9f) list_setting_number_pane_t2_ParamLimits

0x51d2,	// (0x00023b9f) list_setting_number_pane_t2

0x51e9,	// (0x00023bb6) list_setting_number_pane_t3_ParamLimits

0x51e9,	// (0x00023bb6) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002e01a) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002e01a) list_setting_number_pane_t

0x5198,	// (0x00023b65) set_value_pane_ParamLimits

0x5198,	// (0x00023b65) set_value_pane

0x3045,	// (0x00021a12) bg_set_opt_pane_ParamLimits

0x3045,	// (0x00021a12) bg_set_opt_pane

0x522c,	// (0x00023bf9) set_value_pane_t1

0x3074,	// (0x00021a41) slider_set_pane_cp3

0x307d,	// (0x00021a4a) volume_small_pane_cp

0x3086,	// (0x00021a53) list_form_gen_pane

0x308f,	// (0x00021a5c) scroll_pane_cp8

0x5242,	// (0x00023c0f) form_field_data_pane_ParamLimits

0x5242,	// (0x00023c0f) form_field_data_pane

0x5268,	// (0x00023c35) form_field_data_wide_pane_ParamLimits

0x5268,	// (0x00023c35) form_field_data_wide_pane

0x528d,	// (0x00023c5a) form_field_popup_pane_ParamLimits

0x528d,	// (0x00023c5a) form_field_popup_pane

0x52af,	// (0x00023c7c) form_field_popup_wide_pane_ParamLimits

0x52af,	// (0x00023c7c) form_field_popup_wide_pane

0x52d0,	// (0x00023c9d) form_field_slider_pane_ParamLimits

0x52d0,	// (0x00023c9d) form_field_slider_pane

0x52e3,	// (0x00023cb0) form_field_slider_wide_pane_ParamLimits

0x52e3,	// (0x00023cb0) form_field_slider_wide_pane

0x30f8,	// (0x00021ac5) data_form_pane

0x5300,	// (0x00023ccd) form_field_data_pane_t1

0x3104,	// (0x00021ad1) input_focus_pane

0x531a,	// (0x00023ce7) data_form_wide_pane

0x5337,	// (0x00023d04) form_field_data_wide_pane_t1

0x198a,	// (0x00020357) input_focus_pane_cp6

0x5359,	// (0x00023d26) form_field_popup_pane_t1

0x3104,	// (0x00021ad1) input_focus_pane_cp7

0x3169,	// (0x00021b36) list_form_pane

0x537b,	// (0x00023d48) form_field_popup_wide_pane_t1

0x3104,	// (0x00021ad1) input_focus_pane_cp8

0x318f,	// (0x00021b5c) list_form_wide_pane

0x5398,	// (0x00023d65) form_field_slider_pane_t1_ParamLimits

0x5398,	// (0x00023d65) form_field_slider_pane_t1

0x53b0,	// (0x00023d7d) form_field_slider_pane_t2_ParamLimits

0x53b0,	// (0x00023d7d) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002e02a) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002e02a) form_field_slider_pane_t

0x15a5,	// (0x0001ff72) input_focus_pane_cp9_ParamLimits

0x15a5,	// (0x0001ff72) input_focus_pane_cp9

0x53c5,	// (0x00023d92) slider_cont_pane_ParamLimits

0x53c5,	// (0x00023d92) slider_cont_pane

0x319b,	// (0x00021b68) form_field_slider_wide_pane_t1_ParamLimits

0x319b,	// (0x00021b68) form_field_slider_wide_pane_t1

0x53d9,	// (0x00023da6) form_field_slider_wide_pane_t2_ParamLimits

0x53d9,	// (0x00023da6) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002e02f) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002e02f) form_field_slider_wide_pane_t

0x15a5,	// (0x0001ff72) input_focus_pane_cp10_ParamLimits

0x15a5,	// (0x0001ff72) input_focus_pane_cp10

0x53eb,	// (0x00023db8) slider_cont_pane_cp1_ParamLimits

0x53eb,	// (0x00023db8) slider_cont_pane_cp1

0x53ff,	// (0x00023dcc) slider_form_pane_cp

0x31bf,	// (0x00021b8c) input_focus_pane_g1

0x31c7,	// (0x00021b94) input_focus_pane_g2

0x31cf,	// (0x00021b9c) input_focus_pane_g3

0x31d7,	// (0x00021ba4) input_focus_pane_g4

0x31df,	// (0x00021bac) input_focus_pane_g5

0x31e7,	// (0x00021bb4) input_focus_pane_g6

0x31ef,	// (0x00021bbc) input_focus_pane_g7

0x31f7,	// (0x00021bc4) input_focus_pane_g8

0x31ff,	// (0x00021bcc) input_focus_pane_g9

0x154d,	// (0x0001ff1a) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002e034) input_focus_pane_g

0x9f72,	// (0x0002893f) wait_border_pane_g3_copy1

0x5407,	// (0x00023dd4) data_form_pane_t1

0x154d,	// (0x0001ff1a) wait_anim_pane_g1_copy1

0x570c,	// (0x000240d9) data_form_wide_pane_t1

0x5424,	// (0x00023df1) list_form_graphic_pane_cp_ParamLimits

0x5424,	// (0x00023df1) list_form_graphic_pane_cp

0xaec9,	// (0x00029896) slider_form_pane_g1

0xaed2,	// (0x0002989f) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002e337) slider_form_pane_g

0x5439,	// (0x00023e06) list_form_graphic_pane_ParamLimits

0x5439,	// (0x00023e06) list_form_graphic_pane

0x544b,	// (0x00023e18) list_form_graphic_pane_g1

0x5453,	// (0x00023e20) list_form_graphic_pane_t1_ParamLimits

0x5453,	// (0x00023e20) list_form_graphic_pane_t1

0x15b3,	// (0x0001ff80) list_highlight_pane_cp5_ParamLimits

0x15b3,	// (0x0001ff80) list_highlight_pane_cp5

0x5468,	// (0x00023e35) find_pane_g1

0x3236,	// (0x00021c03) input_find_pane

0x5471,	// (0x00023e3e) input_find_pane_g1_ParamLimits

0x5471,	// (0x00023e3e) input_find_pane_g1

0x547d,	// (0x00023e4a) input_find_pane_t1_ParamLimits

0x547d,	// (0x00023e4a) input_find_pane_t1

0x5492,	// (0x00023e5f) input_find_pane_t2_ParamLimits

0x5492,	// (0x00023e5f) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002e049) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002e049) input_find_pane_t

0x323f,	// (0x00021c0c) input_focus_pane_cp5_ParamLimits

0x323f,	// (0x00021c0c) input_focus_pane_cp5

0x3252,	// (0x00021c1f) bg_popup_window_pane_cp2_ParamLimits

0x3252,	// (0x00021c1f) bg_popup_window_pane_cp2

0x325f,	// (0x00021c2c) listscroll_menu_pane_ParamLimits

0x325f,	// (0x00021c2c) listscroll_menu_pane

0x66a3,	// (0x00025070) popup_submenu_window_ParamLimits

0x66a3,	// (0x00025070) popup_submenu_window

0x326b,	// (0x00021c38) find_popup_pane_g1

0x3273,	// (0x00021c40) input_popup_find_pane_cp

0x327d,	// (0x00021c4a) input_focus_pane_cp4_ParamLimits

0x327d,	// (0x00021c4a) input_focus_pane_cp4

0x328b,	// (0x00021c58) input_popup_find_pane_t1_ParamLimits

0x328b,	// (0x00021c58) input_popup_find_pane_t1

0x1557,	// (0x0001ff24) bg_popup_sub_pane_cp

0x32b9,	// (0x00021c86) listscroll_popup_sub_pane

0x32c1,	// (0x00021c8e) list_submenu_pane_ParamLimits

0x32c1,	// (0x00021c8e) list_submenu_pane

0x32d2,	// (0x00021c9f) scroll_pane_cp4

0x32da,	// (0x00021ca7) list_single_popup_submenu_pane_ParamLimits

0x32da,	// (0x00021ca7) list_single_popup_submenu_pane

0x32ef,	// (0x00021cbc) list_single_popup_submenu_pane_g1

0x32f7,	// (0x00021cc4) list_single_popup_submenu_pane_t1_ParamLimits

0x32f7,	// (0x00021cc4) list_single_popup_submenu_pane_t1

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp1_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp1

0x66e1,	// (0x000250ae) tabs_2_active_pane_g1

0x66e9,	// (0x000250b6) tabs_2_active_pane_t1

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp1_ParamLimits

0x15b3,	// (0x0001ff80) bg_passive_tab_pane_cp1

0x66e1,	// (0x000250ae) tabs_2_passive_pane_g1

0x66e9,	// (0x000250b6) tabs_2_passive_pane_t1

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp4

0x6709,	// (0x000250d6) tabs_2_long_active_pane_t1

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp4

0x7c03,	// (0x000265d0) list_single_midp_graphic_pane_g4_ParamLimits

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp5

0x6728,	// (0x000250f5) tabs_3_long_active_pane_t1

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp5

0x7c03,	// (0x000265d0) list_single_midp_graphic_pane_g4

0x15b3,	// (0x0001ff80) bg_popup_window_pane_cp13_ParamLimits

0x15b3,	// (0x0001ff80) bg_popup_window_pane_cp13

0x3315,	// (0x00021ce2) listscroll_popup_fast_pane_ParamLimits

0x3315,	// (0x00021ce2) listscroll_popup_fast_pane

0x3324,	// (0x00021cf1) grid_popup_fast_pane_ParamLimits

0x3324,	// (0x00021cf1) grid_popup_fast_pane

0x3336,	// (0x00021d03) scroll_pane_cp9_ParamLimits

0x3336,	// (0x00021d03) scroll_pane_cp9

0xc84f,	// (0x0002b21c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0002b21c) list_single_graphic_hl_pane_t1_cp2

0x335a,	// (0x00021d27) input_focus_pane_cp20_ParamLimits

0x335a,	// (0x00021d27) input_focus_pane_cp20

0x3368,	// (0x00021d35) query_popup_data_pane_t1_ParamLimits

0x3368,	// (0x00021d35) query_popup_data_pane_t1

0x337b,	// (0x00021d48) query_popup_data_pane_t2_ParamLimits

0x337b,	// (0x00021d48) query_popup_data_pane_t2

0x33c1,	// (0x00021d8e) query_popup_data_pane_t3_ParamLimits

0x33c1,	// (0x00021d8e) query_popup_data_pane_t3

0x3402,	// (0x00021dcf) query_popup_data_pane_t4_ParamLimits

0x3402,	// (0x00021dcf) query_popup_data_pane_t4

0x343e,	// (0x00021e0b) query_popup_data_pane_t5_ParamLimits

0x343e,	// (0x00021e0b) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002e04e) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002e04e) query_popup_data_pane_t

0x31bf,	// (0x00021b8c) bg_set_opt_pane_g1

0x31c7,	// (0x00021b94) bg_set_opt_pane_g2

0x31cf,	// (0x00021b9c) bg_set_opt_pane_g3

0x31d7,	// (0x00021ba4) bg_set_opt_pane_g4

0x31df,	// (0x00021bac) bg_set_opt_pane_g5

0x31e7,	// (0x00021bb4) bg_set_opt_pane_g6

0x31ef,	// (0x00021bbc) bg_set_opt_pane_g7

0x31f7,	// (0x00021bc4) bg_set_opt_pane_g8

0x31ff,	// (0x00021bcc) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002e059) bg_set_opt_pane_g

0x6f60,	// (0x0002592d) control_top_pane_stacon_ParamLimits

0x6f60,	// (0x0002592d) control_top_pane_stacon

0x6fb3,	// (0x00025980) signal_pane_stacon_ParamLimits

0x6fb3,	// (0x00025980) signal_pane_stacon

0x6fd8,	// (0x000259a5) stacon_top_pane_g1_ParamLimits

0x6fd8,	// (0x000259a5) stacon_top_pane_g1

0x6ffa,	// (0x000259c7) title_pane_stacon_ParamLimits

0x6ffa,	// (0x000259c7) title_pane_stacon

0x7024,	// (0x000259f1) uni_indicator_pane_stacon_ParamLimits

0x7024,	// (0x000259f1) uni_indicator_pane_stacon

0x7039,	// (0x00025a06) battery_pane_stacon_ParamLimits

0x7039,	// (0x00025a06) battery_pane_stacon

0x707d,	// (0x00025a4a) control_bottom_pane_stacon_ParamLimits

0x707d,	// (0x00025a4a) control_bottom_pane_stacon

0x70a0,	// (0x00025a6d) navi_pane_stacon_ParamLimits

0x70a0,	// (0x00025a6d) navi_pane_stacon

0x70c3,	// (0x00025a90) stacon_bottom_pane_g1_ParamLimits

0x70c3,	// (0x00025a90) stacon_bottom_pane_g1

0x673a,	// (0x00025107) aid_levels_signal_lsc_ParamLimits

0x673a,	// (0x00025107) aid_levels_signal_lsc

0x6751,	// (0x0002511e) signal_pane_stacon_g1_ParamLimits

0x6751,	// (0x0002511e) signal_pane_stacon_g1

0x6765,	// (0x00025132) signal_pane_stacon_g2_ParamLimits

0x6765,	// (0x00025132) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002e06c) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002e06c) signal_pane_stacon_g

0x679a,	// (0x00025167) title_pane_stacon_t1_ParamLimits

0x679a,	// (0x00025167) title_pane_stacon_t1

0x351b,	// (0x00021ee8) uni_indicator_pane_stacon_g1

0x3525,	// (0x00021ef2) uni_indicator_pane_stacon_g2

0x3507,	// (0x00021ed4) uni_indicator_pane_stacon_g3

0x3511,	// (0x00021ede) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002e078) uni_indicator_pane_stacon_g

0x67bf,	// (0x0002518c) control_top_pane_stacon_g1

0x67c7,	// (0x00025194) control_top_pane_stacon_t1_ParamLimits

0x67c7,	// (0x00025194) control_top_pane_stacon_t1

0x67fe,	// (0x000251cb) aid_levels_battery_lsc_ParamLimits

0x67fe,	// (0x000251cb) aid_levels_battery_lsc

0x6816,	// (0x000251e3) battery_pane_stacon_g1_ParamLimits

0x6816,	// (0x000251e3) battery_pane_stacon_g1

0x6828,	// (0x000251f5) battery_pane_stacon_g2_ParamLimits

0x6828,	// (0x000251f5) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002e081) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002e081) battery_pane_stacon_g

0x6866,	// (0x00025233) navi_icon_pane_stacon

0x687a,	// (0x00025247) navi_navi_pane_stacon

0x6866,	// (0x00025233) navi_text_pane_stacon

0x6890,	// (0x0002525d) control_bottom_pane_stacon_g1

0x6898,	// (0x00025265) control_bottom_pane_stacon_t1_ParamLimits

0x6898,	// (0x00025265) control_bottom_pane_stacon_t1

0x68cf,	// (0x0002529c) grid_app_pane_ParamLimits

0x68cf,	// (0x0002529c) grid_app_pane

0x68f1,	// (0x000252be) scroll_pane_cp15_ParamLimits

0x68f1,	// (0x000252be) scroll_pane_cp15

0x6904,	// (0x000252d1) cell_app_pane_ParamLimits

0x6904,	// (0x000252d1) cell_app_pane

0x6930,	// (0x000252fd) cell_app_pane_g1_ParamLimits

0x6930,	// (0x000252fd) cell_app_pane_g1

0x6954,	// (0x00025321) cell_app_pane_g2_ParamLimits

0x6954,	// (0x00025321) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002e086) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002e086) cell_app_pane_g

0x6960,	// (0x0002532d) cell_app_pane_t1_ParamLimits

0x6960,	// (0x0002532d) cell_app_pane_t1

0x6991,	// (0x0002535e) grid_highlight_pane_ParamLimits

0x6991,	// (0x0002535e) grid_highlight_pane

0x31bf,	// (0x00021b8c) cell_highlight_pane_g1

0x31c7,	// (0x00021b94) cell_highlight_pane_g2

0x31cf,	// (0x00021b9c) cell_highlight_pane_g3

0x31d7,	// (0x00021ba4) cell_highlight_pane_g4

0x31df,	// (0x00021bac) cell_highlight_pane_g5

0x31e7,	// (0x00021bb4) cell_highlight_pane_g6

0x31ef,	// (0x00021bbc) cell_highlight_pane_g7

0x31f7,	// (0x00021bc4) cell_highlight_pane_g8

0x31ff,	// (0x00021bcc) cell_highlight_pane_g9

0x154d,	// (0x0001ff1a) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002e034) cell_highlight_pane_g

0x69b5,	// (0x00025382) bg_scroll_pane

0x69d4,	// (0x000253a1) scroll_handle_pane

0x6a25,	// (0x000253f2) scroll_bg_pane_g1

0x6a3a,	// (0x00025407) scroll_bg_pane_g2

0x6a52,	// (0x0002541f) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002e08b) scroll_bg_pane_g

0x6a67,	// (0x00025434) scroll_handle_focus_pane_ParamLimits

0x6a67,	// (0x00025434) scroll_handle_focus_pane

0x6a25,	// (0x000253f2) scroll_handle_pane_g1

0x6a74,	// (0x00025441) scroll_handle_pane_g2

0x6a52,	// (0x0002541f) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002e092) scroll_handle_pane_g

0x327d,	// (0x00021c4a) bg_popup_sub_pane_cp21_ParamLimits

0x327d,	// (0x00021c4a) bg_popup_sub_pane_cp21

0x6a88,	// (0x00025455) popup_fep_japan_predictive_window_t1_ParamLimits

0x6a88,	// (0x00025455) popup_fep_japan_predictive_window_t1

0x6a9f,	// (0x0002546c) popup_fep_japan_predictive_window_t2_ParamLimits

0x6a9f,	// (0x0002546c) popup_fep_japan_predictive_window_t2

0x6ad2,	// (0x0002549f) popup_fep_japan_predictive_window_t3_ParamLimits

0x6ad2,	// (0x0002549f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002e099) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002e099) popup_fep_japan_predictive_window_t

0x1557,	// (0x0001ff24) bg_popup_sub_pane_cp23

0x6b09,	// (0x000254d6) listscroll_japin_cand_pane

0x6b11,	// (0x000254de) popup_fep_japan_candidate_window_t1

0x6b1f,	// (0x000254ec) candidate_pane_ParamLimits

0x6b1f,	// (0x000254ec) candidate_pane

0x6b31,	// (0x000254fe) scroll_pane_cp30

0x6b3b,	// (0x00025508) list_single_popup_jap_candidate_pane_ParamLimits

0x6b3b,	// (0x00025508) list_single_popup_jap_candidate_pane

0x1557,	// (0x0001ff24) list_highlight_pane_cp30

0x6b4f,	// (0x0002551c) list_single_popup_jap_candidate_pane_t1

0x6b5e,	// (0x0002552b) level_1_signal

0x6b6b,	// (0x00025538) level_2_signal

0x6b78,	// (0x00025545) level_3_signal

0x6b85,	// (0x00025552) level_4_signal

0x6b92,	// (0x0002555f) level_5_signal

0x6b9f,	// (0x0002556c) level_6_signal

0x6bac,	// (0x00025579) level_7_signal

0x6b5e,	// (0x0002552b) level_1_battery

0x6b6b,	// (0x00025538) level_2_battery

0x6b78,	// (0x00025545) level_3_battery

0x6b85,	// (0x00025552) level_4_battery

0x6b92,	// (0x0002555f) level_5_battery

0x6b9f,	// (0x0002556c) level_6_battery

0x6bac,	// (0x00025579) level_7_battery

0x6bf0,	// (0x000255bd) list_menu_pane_ParamLimits

0x6bf0,	// (0x000255bd) list_menu_pane

0x6c06,	// (0x000255d3) scroll_pane_cp25_ParamLimits

0x6c06,	// (0x000255d3) scroll_pane_cp25

0x6c1f,	// (0x000255ec) list_double2_graphic_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double2_graphic_pane_cp2

0x6c1f,	// (0x000255ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double2_large_graphic_pane_cp2

0x6c1f,	// (0x000255ec) list_double2_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double2_pane_cp2

0x6c1f,	// (0x000255ec) list_double_graphic_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double_graphic_pane_cp2

0x6c1f,	// (0x000255ec) list_double_large_graphic_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double_large_graphic_pane_cp2

0x6c1f,	// (0x000255ec) list_double_number_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double_number_pane_cp2

0x6c1f,	// (0x000255ec) list_double_pane_cp2_ParamLimits

0x6c1f,	// (0x000255ec) list_double_pane_cp2

0x6c45,	// (0x00025612) list_single_2graphic_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_2graphic_pane_cp2

0x6c45,	// (0x00025612) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_graphic_heading_pane_cp2

0x6c45,	// (0x00025612) list_single_graphic_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_graphic_pane_cp2

0x6c45,	// (0x00025612) list_single_heading_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_heading_pane_cp2

0x6c62,	// (0x0002562f) list_single_large_graphic_pane_cp2_ParamLimits

0x6c62,	// (0x0002562f) list_single_large_graphic_pane_cp2

0x6c45,	// (0x00025612) list_single_number_heading_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_number_heading_pane_cp2

0x6c45,	// (0x00025612) list_single_number_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_number_pane_cp2

0x6c72,	// (0x0002563f) list_single_pane_cp2_ParamLimits

0x6c72,	// (0x0002563f) list_single_pane_cp2

0x6d48,	// (0x00025715) bg_popup_sub_pane_cp22

0x6d6d,	// (0x0002573a) popup_side_volume_key_window_g1

0x6d97,	// (0x00025764) popup_side_volume_key_window_t1

0x6db5,	// (0x00025782) volume_small_pane_cp1

0x15a5,	// (0x0001ff72) bg_popup_sub_pane_cp24_ParamLimits

0x15a5,	// (0x0001ff72) bg_popup_sub_pane_cp24

0x6dbd,	// (0x0002578a) fep_china_uni_candidate_pane_ParamLimits

0x6dbd,	// (0x0002578a) fep_china_uni_candidate_pane

0x6dd1,	// (0x0002579e) fep_china_uni_entry_pane

0x6de1,	// (0x000257ae) popup_fep_china_uni_window_g1

0x6dfd,	// (0x000257ca) fep_china_uni_entry_pane_g1

0x6e07,	// (0x000257d4) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002e0ca) fep_china_uni_entry_pane_g

0x6e11,	// (0x000257de) fep_entry_item_pane

0x6e1b,	// (0x000257e8) fep_candidate_item_pane

0x6e23,	// (0x000257f0) fep_china_uni_candidate_pane_g1

0x6e2d,	// (0x000257fa) fep_china_uni_candidate_pane_g2

0x6e35,	// (0x00025802) fep_china_uni_candidate_pane_g3

0x6e3d,	// (0x0002580a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002e0cf) fep_china_uni_candidate_pane_g

0x154d,	// (0x0001ff1a) fep_entry_item_pane_g1

0x6e47,	// (0x00025814) fep_entry_item_pane_t1_ParamLimits

0x6e47,	// (0x00025814) fep_entry_item_pane_t1

0x6e5d,	// (0x0002582a) fep_candidate_item_pane_t1_ParamLimits

0x6e5d,	// (0x0002582a) fep_candidate_item_pane_t1

0x6e72,	// (0x0002583f) fep_candidate_item_pane_t2_ParamLimits

0x6e72,	// (0x0002583f) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002e0d8) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002e0d8) fep_candidate_item_pane_t

0x15b3,	// (0x0001ff80) list_highlight_pane_cp31_ParamLimits

0x15b3,	// (0x0001ff80) list_highlight_pane_cp31

0x6e84,	// (0x00025851) level_1_signal_lsc

0x6e8d,	// (0x0002585a) level_2_signal_lsc

0x6e96,	// (0x00025863) level_3_signal_lsc

0x6e9f,	// (0x0002586c) level_4_signal_lsc

0x6ea8,	// (0x00025875) level_5_signal_lsc

0x6eb1,	// (0x0002587e) level_6_signal_lsc

0x6eba,	// (0x00025887) level_7_signal_lsc

0x6eba,	// (0x00025887) level_1_battery_lsc

0x6ec3,	// (0x00025890) level_2_battery_lsc

0x6ecc,	// (0x00025899) level_3_battery_lsc

0x6ed5,	// (0x000258a2) level_4_battery_lsc

0x6ede,	// (0x000258ab) level_5_battery_lsc

0x6ee7,	// (0x000258b4) level_6_battery_lsc

0x6e84,	// (0x00025851) level_7_battery_lsc

0x6ef0,	// (0x000258bd) scroll_handle_focus_pane_g1

0x6ef9,	// (0x000258c6) scroll_handle_focus_pane_g2

0x6f02,	// (0x000258cf) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002e0dd) scroll_handle_focus_pane_g

0x54a7,	// (0x00023e74) list_single_2graphic_pane_g1_ParamLimits

0x54a7,	// (0x00023e74) list_single_2graphic_pane_g1

0x4e1f,	// (0x000237ec) list_single_2graphic_pane_g2_ParamLimits

0x4e1f,	// (0x000237ec) list_single_2graphic_pane_g2

0x4da5,	// (0x00023772) list_single_2graphic_pane_g3_ParamLimits

0x4da5,	// (0x00023772) list_single_2graphic_pane_g3

0x54b3,	// (0x00023e80) list_single_2graphic_pane_g4_ParamLimits

0x54b3,	// (0x00023e80) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002e0e4) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002e0e4) list_single_2graphic_pane_g

0x54bf,	// (0x00023e8c) list_single_2graphic_pane_t1_ParamLimits

0x54bf,	// (0x00023e8c) list_single_2graphic_pane_t1

0x54ed,	// (0x00023eba) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x54ed,	// (0x00023eba) list_double2_graphic_large_graphic_pane_g1

0x4ec4,	// (0x00023891) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ec4,	// (0x00023891) list_double2_graphic_large_graphic_pane_g2

0x4ed5,	// (0x000238a2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ed5,	// (0x000238a2) list_double2_graphic_large_graphic_pane_g3

0x54ff,	// (0x00023ecc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x54ff,	// (0x00023ecc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002e0ed) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002e0ed) list_double2_graphic_large_graphic_pane_g

0x550b,	// (0x00023ed8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x550b,	// (0x00023ed8) list_double2_graphic_large_graphic_pane_t1

0x5521,	// (0x00023eee) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5521,	// (0x00023eee) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002e0f6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002e0f6) list_double2_graphic_large_graphic_pane_t

0x7186,	// (0x00025b53) popup_fast_swap_window_ParamLimits

0x7186,	// (0x00025b53) popup_fast_swap_window

0x71a4,	// (0x00025b71) popup_side_volume_key_window

0x71c2,	// (0x00025b8f) stacon_top_pane

0x71cc,	// (0x00025b99) status_pane_ParamLimits

0x71cc,	// (0x00025b99) status_pane

0x1543,	// (0x0001ff10) status_small_pane

0x1557,	// (0x0001ff24) control_pane

0x1557,	// (0x0001ff24) stacon_bottom_pane

0x308f,	// (0x00021a5c) scroll_pane_cp121

0x3086,	// (0x00021a53) set_content_pane

0x6f0b,	// (0x000258d8) bg_active_tab_pane_g1_cp1

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp1

0x6f1d,	// (0x000258ea) bg_active_tab_pane_g3_cp1

0x6f0b,	// (0x000258d8) bg_passive_tab_pane_g1_cp1

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp1

0x6f1d,	// (0x000258ea) bg_passive_tab_pane_g3_cp1

0x6f26,	// (0x000258f3) bg_active_tab_pane_g1_cp2

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp2

0x6f2f,	// (0x000258fc) bg_active_tab_pane_g3_cp2

0x6f26,	// (0x000258f3) bg_passive_tab_pane_g1_cp2

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp2

0x6f2f,	// (0x000258fc) bg_passive_tab_pane_g3_cp2

0x6f38,	// (0x00025905) bg_active_tab_pane_g1_cp3

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp3

0x6f41,	// (0x0002590e) bg_active_tab_pane_g3_cp3

0x6f38,	// (0x00025905) bg_passive_tab_pane_g1_cp3

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp3

0x6f41,	// (0x0002590e) bg_passive_tab_pane_g3_cp3

0x6f4a,	// (0x00025917) bg_active_tab_pane_g1_cp4

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp4

0x6f55,	// (0x00025922) bg_active_tab_pane_g3_cp4

0x6f4a,	// (0x00025917) bg_passive_tab_pane_g1_cp4

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp4

0x6f55,	// (0x00025922) bg_passive_tab_pane_g3_cp4

0x70df,	// (0x00025aac) bg_active_tab_pane_g1_cp5

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp5

0x70e8,	// (0x00025ab5) bg_active_tab_pane_g3_cp5

0x70df,	// (0x00025aac) bg_passive_tab_pane_g1_cp5

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp5

0x70e8,	// (0x00025ab5) bg_passive_tab_pane_g3_cp5

0x70f1,	// (0x00025abe) list_set_graphic_pane_ParamLimits

0x70f1,	// (0x00025abe) list_set_graphic_pane

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp4

0x7107,	// (0x00025ad4) list_set_graphic_pane_g1_ParamLimits

0x7107,	// (0x00025ad4) list_set_graphic_pane_g1

0x7113,	// (0x00025ae0) list_set_graphic_pane_g2_ParamLimits

0x7113,	// (0x00025ae0) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002e0fb) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002e0fb) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002e477) volume_small_pane_cp_g

0x7137,	// (0x00025b04) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7137,	// (0x00025b04) list_double2_large_graphic_pane_g1_cp2

0x7145,	// (0x00025b12) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7145,	// (0x00025b12) list_double2_large_graphic_pane_g2_cp2

0x7156,	// (0x00025b23) list_double2_large_graphic_pane_g3_cp2

0x715e,	// (0x00025b2b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x715e,	// (0x00025b2b) list_double2_large_graphic_pane_t1_cp2

0x7174,	// (0x00025b41) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7174,	// (0x00025b41) list_double2_large_graphic_pane_t2_cp2

0xaa56,	// (0x00029423) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa56,	// (0x00029423) list_double_large_graphic_pane_g1_cp2

0xaa69,	// (0x00029436) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa69,	// (0x00029436) list_double_large_graphic_pane_g2_cp2

0x72ea,	// (0x00025cb7) list_double_large_graphic_pane_g3_cp2

0xaa7a,	// (0x00029447) list_double_large_graphic_pane_g4_cp

0xaa82,	// (0x0002944f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x0002944f) list_double_large_graphic_pane_t1_cp2

0xaa99,	// (0x00029466) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaa99,	// (0x00029466) list_double_large_graphic_pane_t2_cp2

0x71da,	// (0x00025ba7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x71da,	// (0x00025ba7) list_double2_graphic_pane_g1_cp2

0x71e8,	// (0x00025bb5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x71e8,	// (0x00025bb5) list_double2_graphic_pane_g2_cp2

0x71f9,	// (0x00025bc6) list_double2_graphic_pane_g3_cp2

0x7203,	// (0x00025bd0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7203,	// (0x00025bd0) list_double2_graphic_pane_t1_cp2

0x7219,	// (0x00025be6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7219,	// (0x00025be6) list_double2_graphic_pane_t2_cp2

0x722b,	// (0x00025bf8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x722b,	// (0x00025bf8) list_single_number_heading_pane_g1_cp2

0x7237,	// (0x00025c04) list_single_number_heading_pane_g2_cp2

0x723f,	// (0x00025c0c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x723f,	// (0x00025c0c) list_single_number_heading_pane_t1_cp2

0x7255,	// (0x00025c22) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7255,	// (0x00025c22) list_single_number_heading_pane_t2_cp2

0x7269,	// (0x00025c36) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7269,	// (0x00025c36) list_single_number_heading_pane_t3_cp2

0x722b,	// (0x00025bf8) list_single_heading_pane_g1_cp2_ParamLimits

0x722b,	// (0x00025bf8) list_single_heading_pane_g1_cp2

0x7237,	// (0x00025c04) list_single_heading_pane_g2_cp2

0x723f,	// (0x00025c0c) list_single_heading_pane_t1_cp2_ParamLimits

0x723f,	// (0x00025c0c) list_single_heading_pane_t1_cp2

0xa850,	// (0x0002921d) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x0002921d) list_single_heading_pane_t2_cp2

0xa798,	// (0x00029165) list_double_graphic_pane_g1_cp2_ParamLimits

0xa798,	// (0x00029165) list_double_graphic_pane_g1_cp2

0xa7a4,	// (0x00029171) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7a4,	// (0x00029171) list_double_graphic_pane_g2_cp2

0xa7b3,	// (0x00029180) list_double_graphic_pane_g3_cp2

0xa7bb,	// (0x00029188) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7bb,	// (0x00029188) list_double_graphic_pane_t1_cp2

0xa7d1,	// (0x0002919e) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7d1,	// (0x0002919e) list_double_graphic_pane_t2_cp2

0x72de,	// (0x00025cab) list_double_number_pane_g1_cp2_ParamLimits

0x72de,	// (0x00025cab) list_double_number_pane_g1_cp2

0x72ea,	// (0x00025cb7) list_double_number_pane_g2_cp2

0xa75c,	// (0x00029129) list_double_number_pane_t1_cp2_ParamLimits

0xa75c,	// (0x00029129) list_double_number_pane_t1_cp2

0xa770,	// (0x0002913d) list_double_number_pane_t2_cp2_ParamLimits

0xa770,	// (0x0002913d) list_double_number_pane_t2_cp2

0xa786,	// (0x00029153) list_double_number_pane_t3_cp2_ParamLimits

0xa786,	// (0x00029153) list_double_number_pane_t3_cp2

0xa645,	// (0x00029012) list_single_graphic_pane_g1_cp2_ParamLimits

0xa645,	// (0x00029012) list_single_graphic_pane_g1_cp2

0x734f,	// (0x00025d1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x734f,	// (0x00025d1c) list_single_graphic_pane_g2_cp2

0x735b,	// (0x00025d28) list_single_graphic_pane_g3_cp2

0xa61b,	// (0x00028fe8) list_single_graphic_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00028fe8) list_single_graphic_pane_t1_cp2

0x734f,	// (0x00025d1c) list_single_number_pane_g1_cp2_ParamLimits

0x734f,	// (0x00025d1c) list_single_number_pane_g1_cp2

0x735b,	// (0x00025d28) list_single_number_pane_g2_cp2

0xa61b,	// (0x00028fe8) list_single_number_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00028fe8) list_single_number_pane_t1_cp2

0xa631,	// (0x00028ffe) list_single_number_pane_t2_cp2_ParamLimits

0xa631,	// (0x00028ffe) list_single_number_pane_t2_cp2

0x7145,	// (0x00025b12) list_double2_pane_g1_cp2_ParamLimits

0x7145,	// (0x00025b12) list_double2_pane_g1_cp2

0x7156,	// (0x00025b23) list_double2_pane_g2_cp2

0x72b6,	// (0x00025c83) list_double2_pane_t1_cp2_ParamLimits

0x72b6,	// (0x00025c83) list_double2_pane_t1_cp2

0x72cc,	// (0x00025c99) list_double2_pane_t2_cp2_ParamLimits

0x72cc,	// (0x00025c99) list_double2_pane_t2_cp2

0x72de,	// (0x00025cab) list_double_pane_g1_cp2_ParamLimits

0x72de,	// (0x00025cab) list_double_pane_g1_cp2

0x72ea,	// (0x00025cb7) list_double_pane_g2_cp2

0x72f2,	// (0x00025cbf) list_double_pane_t1_cp2_ParamLimits

0x72f2,	// (0x00025cbf) list_double_pane_t1_cp2

0x7308,	// (0x00025cd5) list_double_pane_t2_cp2_ParamLimits

0x7308,	// (0x00025cd5) list_double_pane_t2_cp2

0x733f,	// (0x00025d0c) list_single_pane_cp2_g3

0x734f,	// (0x00025d1c) list_single_pane_g1_cp2_ParamLimits

0x734f,	// (0x00025d1c) list_single_pane_g1_cp2

0x735b,	// (0x00025d28) list_single_pane_g2_cp2

0x7363,	// (0x00025d30) list_single_pane_t1_cp2_ParamLimits

0x7363,	// (0x00025d30) list_single_pane_t1_cp2

0x737b,	// (0x00025d48) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x737b,	// (0x00025d48) list_single_large_graphic_pane_g1_cp2

0x7389,	// (0x00025d56) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7389,	// (0x00025d56) list_single_large_graphic_pane_g2_cp2

0x9094,	// (0x00027a61) list_single_large_graphic_pane_g3_cp2

0x909c,	// (0x00027a69) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x909c,	// (0x00027a69) list_single_large_graphic_pane_g4_cp1

0x90b6,	// (0x00027a83) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b6,	// (0x00027a83) list_single_large_graphic_pane_t1_cp2

0xa5e5,	// (0x00028fb2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5e5,	// (0x00028fb2) list_single_graphic_heading_pane_g1_cp2

0xa5b2,	// (0x00028f7f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5b2,	// (0x00028f7f) list_single_graphic_heading_pane_g4_cp2

0x735b,	// (0x00025d28) list_single_graphic_heading_pane_g5_cp2

0xa5f1,	// (0x00028fbe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa5f1,	// (0x00028fbe) list_single_graphic_heading_pane_t1_cp2

0xa607,	// (0x00028fd4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa607,	// (0x00028fd4) list_single_graphic_heading_pane_t2_cp2

0xa5a6,	// (0x00028f73) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5a6,	// (0x00028f73) list_single_2graphic_pane_g1_cp2

0xa5b2,	// (0x00028f7f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5b2,	// (0x00028f7f) list_single_2graphic_pane_g2_cp2

0x735b,	// (0x00025d28) list_single_2graphic_pane_g3_cp2

0xa5c3,	// (0x00028f90) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5c3,	// (0x00028f90) list_single_2graphic_pane_g4_cp2

0xa5cf,	// (0x00028f9c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5cf,	// (0x00028f9c) list_single_2graphic_pane_t1_cp2

0x154d,	// (0x0001ff1a) list_highlight_pane_g10_cp1

0xa17e,	// (0x00028b4b) list_highlight_pane_g1_cp1

0xa186,	// (0x00028b53) list_highlight_pane_g2_cp1

0xa18e,	// (0x00028b5b) list_highlight_pane_g3_cp1

0xa196,	// (0x00028b63) list_highlight_pane_g4_cp1

0xa19e,	// (0x00028b6b) list_highlight_pane_g5_cp1

0xa1a6,	// (0x00028b73) list_highlight_pane_g6_cp1

0xa1ae,	// (0x00028b7b) list_highlight_pane_g7_cp1

0xa1b6,	// (0x00028b83) list_highlight_pane_g8_cp1

0xa1be,	// (0x00028b8b) list_highlight_pane_g9_cp1

0xa09e,	// (0x00028a6b) form_field_slider_pane_t3

0xa0ac,	// (0x00028a79) form_field_slider_pane_t4

0xa0ba,	// (0x00028a87) slider_form_pane_ParamLimits

0xa0ba,	// (0x00028a87) slider_form_pane

0x1557,	// (0x0001ff24) control_abbreviations

0x1557,	// (0x0001ff24) control_conventions

0x1557,	// (0x0001ff24) control_definitions

0x1557,	// (0x0001ff24) format_table_attribute

0xa8a6,	// (0x00029273) bg_popup_preview_window_pane_g9

0x1557,	// (0x0001ff24) format_table_data2

0x1557,	// (0x0001ff24) format_table_data3

0x1557,	// (0x0001ff24) format_table_data_example

0x0008,

0x1557,	// (0x0001ff24) intro_purpose

0xf8ca,	// (0x0002e297) bg_popup_preview_window_pane_g

0x1557,	// (0x0001ff24) texts_category

0x1557,	// (0x0001ff24) texts_graphics

0x90cc,	// (0x00027a99) text_digital

0x90db,	// (0x00027aa8) text_primary

0x90ea,	// (0x00027ab7) text_primary_small

0x90f9,	// (0x00027ac6) text_secondary

0x9108,	// (0x00027ad5) text_title

0xb020,	// (0x000299ed) bg_passive_tab_pane_g1_cp3_srt

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x000299f6) bg_passive_tab_pane_g3_cp3_srt

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp3_srt_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp3_srt

0xb032,	// (0x000299ff) tabs_4_active_pane_srt_g1

0xb03a,	// (0x00029a07) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x00029a07) tabs_4_active_pane_srt_t1

0xb020,	// (0x000299ed) bg_active_tab_pane_g1_cp3_copy1

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x000299f6) bg_active_tab_pane_g3_cp3_copy1

0x15b3,	// (0x0001ff80) tabs_2_long_active_pane_srt_ParamLimits

0x15b3,	// (0x0001ff80) tabs_2_long_active_pane_srt

0x15b3,	// (0x0001ff80) tabs_2_long_passive_pane_srt_ParamLimits

0x15b3,	// (0x0001ff80) tabs_2_long_passive_pane_srt

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp4_srt

0xace0,	// (0x000296ad) bg_passive_tab_pane_g1_cp4_srt

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp4_srt

0xace9,	// (0x000296b6) bg_passive_tab_pane_g3_cp4_srt

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp4_srt_ParamLimits

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp4_srt

0xacf2,	// (0x000296bf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xacf2,	// (0x000296bf) tabs_2_long_active_pane_srt_t1

0xace0,	// (0x000296ad) bg_active_tab_pane_g1_cp4_srt

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp4_srt

0xace9,	// (0x000296b6) bg_active_tab_pane_g3_cp4_srt

0x15a5,	// (0x0001ff72) tabs_3_long_active_pane_srt_ParamLimits

0x15a5,	// (0x0001ff72) tabs_3_long_active_pane_srt

0x15a5,	// (0x0001ff72) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x15a5,	// (0x0001ff72) tabs_3_long_passive_pane_cp_srt

0x15a5,	// (0x0001ff72) tabs_3_long_passive_pane_srt_ParamLimits

0x15a5,	// (0x0001ff72) tabs_3_long_passive_pane_srt

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp5_srt

0x70df,	// (0x00025aac) bg_passive_tab_pane_g1_cp5_srt

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp5_srt

0x70e8,	// (0x00025ab5) bg_passive_tab_pane_g3_cp5_srt

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp5_srt_ParamLimits

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp5_srt

0xacce,	// (0x0002969b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xacce,	// (0x0002969b) tabs_3_long_active_pane_srt_t1

0x70df,	// (0x00025aac) bg_active_tab_pane_g1_cp5_srt

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp5_srt

0x70e8,	// (0x00025ab5) bg_active_tab_pane_g3_cp5_srt

0xacc0,	// (0x0002968d) navi_text_pane_srt_t1

0xacb8,	// (0x00029685) navi_icon_pane_srt_g1

0x92e0,	// (0x00027cad) midp_editing_number_pane_srt

0x9117,	// (0x00027ae4) midp_ticker_pane_srt

0x92e8,	// (0x00027cb5) midp_ticker_pane_srt_g1

0x92f0,	// (0x00027cbd) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002e11a) midp_ticker_pane_srt_g

0x92f8,	// (0x00027cc5) midp_ticker_pane_srt_t1

0xaca9,	// (0x00029676) midp_editing_number_pane_t1_copy1

0x911f,	// (0x00027aec) listscroll_midp_pane

0x911f,	// (0x00027aec) midp_form_pane

0x918e,	// (0x00027b5b) midp_info_popup_window_ParamLimits

0x918e,	// (0x00027b5b) midp_info_popup_window

0x327d,	// (0x00021c4a) bg_popup_sub_pane_cp50_ParamLimits

0x327d,	// (0x00021c4a) bg_popup_sub_pane_cp50

0x9da0,	// (0x0002876d) listscroll_midp_info_pane_ParamLimits

0x9da0,	// (0x0002876d) listscroll_midp_info_pane

0x9d80,	// (0x0002874d) listscroll_form_midp_pane_ParamLimits

0x9d80,	// (0x0002874d) listscroll_form_midp_pane

0x9d8c,	// (0x00028759) scroll_bar_cp050

0x9d60,	// (0x0002872d) list_midp_pane

0xbad4,	// (0x0002a4a1) signal_pane_g2_cp

0x9c9a,	// (0x00028667) listscroll_midp_info_pane_t1_ParamLimits

0x9c9a,	// (0x00028667) listscroll_midp_info_pane_t1

0x9cb2,	// (0x0002867f) listscroll_midp_info_pane_t2_ParamLimits

0x9cb2,	// (0x0002867f) listscroll_midp_info_pane_t2

0x9cf0,	// (0x000286bd) listscroll_midp_info_pane_t3_ParamLimits

0x9cf0,	// (0x000286bd) listscroll_midp_info_pane_t3

0x9d2a,	// (0x000286f7) listscroll_midp_info_pane_t4_ParamLimits

0x9d2a,	// (0x000286f7) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002e1d2) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002e1d2) listscroll_midp_info_pane_t

0x32d2,	// (0x00021c9f) scroll_pane_cp21

0x9c34,	// (0x00028601) form_midp_field_choice_group_pane

0x9c3d,	// (0x0002860a) form_midp_field_text_pane

0x9c80,	// (0x0002864d) form_midp_field_time_pane

0x9c88,	// (0x00028655) form_midp_gauge_slider_pane

0x9c91,	// (0x0002865e) form_midp_gauge_wait_pane

0x1557,	// (0x0001ff24) form_midp_image_pane

0x56c4,	// (0x00024091) list_single_midp_pane_ParamLimits

0x56c4,	// (0x00024091) list_single_midp_pane

0x9bf8,	// (0x000285c5) form_midp_field_text_pane_t1

0x99ea,	// (0x000283b7) input_focus_pane_cp050

0x9c23,	// (0x000285f0) list_midp_form_text_pane

0x9bc7,	// (0x00028594) form_midp_field_choice_group_pane_t1

0x9bd5,	// (0x000285a2) input_focus_pane_cp051

0x9be9,	// (0x000285b6) list_midp_choice_pane

0x1557,	// (0x0001ff24) status_idle_pane

0x9bab,	// (0x00028578) form_midp_field_time_pane_t1

0x154d,	// (0x0001ff1a) wait_anim_pane_g2_copy1

0x9bb9,	// (0x00028586) form_midp_field_time_pane_t2

0x0001,

0x923e,	// (0x00027c0b) aid_navinavi_width_2_pane

0xf800,	// (0x0002e1cd) form_midp_field_time_pane_t

0x1557,	// (0x0001ff24) input_focus_pane_cp052

0x1557,	// (0x0001ff24) bg_input_focus_pane_cp040

0x9b6b,	// (0x00028538) form_midp_gauge_slider_pane_t1

0x9b79,	// (0x00028546) form_midp_gauge_slider_pane_t2

0x9b87,	// (0x00028554) form_midp_gauge_slider_pane_t3

0x9b95,	// (0x00028562) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002e1c4) form_midp_gauge_slider_pane_t

0x9ba3,	// (0x00028570) form_midp_slider_pane

0x15b3,	// (0x0001ff80) bg_input_focus_pane_cp041_ParamLimits

0x15b3,	// (0x0001ff80) bg_input_focus_pane_cp041

0x9b38,	// (0x00028505) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b38,	// (0x00028505) form_midp_gauge_wait_pane_t1

0x9b4a,	// (0x00028517) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b4a,	// (0x00028517) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002e1bf) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002e1bf) form_midp_gauge_wait_pane_t

0x9b5c,	// (0x00028529) form_midp_wait_pane_ParamLimits

0x9b5c,	// (0x00028529) form_midp_wait_pane

0x9b00,	// (0x000284cd) form_midp_image_pane_g1

0x9b09,	// (0x000284d6) form_midp_image_pane_t1

0x9b18,	// (0x000284e5) form_midp_image_pane_t2

0x9b27,	// (0x000284f4) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002e1b8) form_midp_image_pane_t

0x9af7,	// (0x000284c4) list_single_midp_pane_g1

0x56b5,	// (0x00024082) list_single_midp_pane_t1

0x9add,	// (0x000284aa) list_midp_form_item_pane_ParamLimits

0x9add,	// (0x000284aa) list_midp_form_item_pane

0x91e6,	// (0x00027bb3) list_midp_form_item_pane_t1

0x91f5,	// (0x00027bc2) midp_ticker_pane_g1

0x9201,	// (0x00027bce) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002e100) midp_ticker_pane_g

0x920d,	// (0x00027bda) midp_ticker_pane_t1

0xaf16,	// (0x000298e3) midp_editing_number_pane_t1

0xaef4,	// (0x000298c1) midp_editing_number_pane

0xaf03,	// (0x000298d0) midp_ticker_pane

0xac99,	// (0x00029666) ai_message_heading_pane

0x1557,	// (0x0001ff24) bg_popup_window_pane_cp14

0xaca1,	// (0x0002966e) listscroll_ai_message_pane

0xac1f,	// (0x000295ec) ai_message_heading_pane_g1_ParamLimits

0xac1f,	// (0x000295ec) ai_message_heading_pane_g1

0xac2b,	// (0x000295f8) ai_message_heading_pane_g2_ParamLimits

0xac2b,	// (0x000295f8) ai_message_heading_pane_g2

0xac39,	// (0x00029606) ai_message_heading_pane_g3_ParamLimits

0xac39,	// (0x00029606) ai_message_heading_pane_g3

0xac45,	// (0x00029612) ai_message_heading_pane_g4_ParamLimits

0xac45,	// (0x00029612) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002e2f9) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002e2f9) ai_message_heading_pane_g

0xac51,	// (0x0002961e) ai_message_heading_pane_t1_ParamLimits

0xac51,	// (0x0002961e) ai_message_heading_pane_t1

0xac6b,	// (0x00029638) ai_message_heading_pane_t2_ParamLimits

0xac6b,	// (0x00029638) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002e302) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002e302) ai_message_heading_pane_t

0xac7f,	// (0x0002964c) bg_popup_heading_pane_cp1_ParamLimits

0xac7f,	// (0x0002964c) bg_popup_heading_pane_cp1

0xac0d,	// (0x000295da) list_ai_message_pane_ParamLimits

0xac0d,	// (0x000295da) list_ai_message_pane

0x32d2,	// (0x00021c9f) scroll_pane_cp10

0xaba9,	// (0x00029576) list_ai_message_pane_g1

0xabb1,	// (0x0002957e) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002e2d6) list_ai_message_pane_g

0xabb9,	// (0x00029586) list_ai_message_pane_t1_ParamLimits

0xabb9,	// (0x00029586) list_ai_message_pane_t1

0xabce,	// (0x0002959b) list_ai_message_pane_t2_ParamLimits

0xabce,	// (0x0002959b) list_ai_message_pane_t2

0xabe3,	// (0x000295b0) list_ai_message_pane_t3_ParamLimits

0xabe3,	// (0x000295b0) list_ai_message_pane_t3

0xabf8,	// (0x000295c5) list_ai_message_pane_t4_ParamLimits

0xabf8,	// (0x000295c5) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002e2db) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002e2db) list_ai_message_pane_t

0xab92,	// (0x0002955f) cell_ai_soft_ind_pane_ParamLimits

0xab92,	// (0x0002955f) cell_ai_soft_ind_pane

0x921f,	// (0x00027bec) cell_ai_soft_ind_pane_g1_ParamLimits

0x921f,	// (0x00027bec) cell_ai_soft_ind_pane_g1

0x1557,	// (0x0001ff24) grid_highlight_cp1

0x922c,	// (0x00027bf9) text_secondary_cp56_ParamLimits

0x922c,	// (0x00027bf9) text_secondary_cp56

0xab67,	// (0x00029534) example_general_pane_ParamLimits

0xab67,	// (0x00029534) example_general_pane

0xab73,	// (0x00029540) example_parent_pane_g1_ParamLimits

0xab73,	// (0x00029540) example_parent_pane_g1

0xab7f,	// (0x0002954c) example_parent_pane_t1_ParamLimits

0xab7f,	// (0x0002954c) example_parent_pane_t1

0x7946,	// (0x00026313) popup_preview_text_window_ParamLimits

0x7946,	// (0x00026313) popup_preview_text_window

0x7347,	// (0x00025d14) list_single_pane_cp2_g4

0x17ce,	// (0x0002019b) bg_popup_preview_window_pane_ParamLimits

0x17ce,	// (0x0002019b) bg_popup_preview_window_pane

0xa8b0,	// (0x0002927d) popup_preview_text_window_t1_ParamLimits

0xa8b0,	// (0x0002927d) popup_preview_text_window_t1

0xa8ce,	// (0x0002929b) popup_preview_text_window_t2_ParamLimits

0xa8ce,	// (0x0002929b) popup_preview_text_window_t2

0xa917,	// (0x000292e4) popup_preview_text_window_t3_ParamLimits

0xa917,	// (0x000292e4) popup_preview_text_window_t3

0xa95c,	// (0x00029329) popup_preview_text_window_t4_ParamLimits

0xa95c,	// (0x00029329) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002e2aa) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002e2aa) popup_preview_text_window_t

0xa9da,	// (0x000293a7) scroll_pane_cp11

0x9976,	// (0x00028343) bg_popup_preview_window_pane_g1

0xa864,	// (0x00029231) bg_popup_preview_window_pane_g2

0xa86e,	// (0x0002923b) bg_popup_preview_window_pane_g3

0xa878,	// (0x00029245) bg_popup_preview_window_pane_g4

0xa882,	// (0x0002924f) bg_popup_preview_window_pane_g5

0xa88c,	// (0x00029259) bg_popup_preview_window_pane_g6

0xa894,	// (0x00029261) bg_popup_preview_window_pane_g7

0xa89c,	// (0x00029269) bg_popup_preview_window_pane_g8

0x5f17,	// (0x000248e4) aid_popup_width_pane

0x7922,	// (0x000262ef) popup_midp_note_alarm_window_ParamLimits

0x7922,	// (0x000262ef) popup_midp_note_alarm_window

0x30f8,	// (0x00021ac5) data_form_pane_ParamLimits

0x52f6,	// (0x00023cc3) form_field_data_pane_g1

0x5300,	// (0x00023ccd) form_field_data_pane_t1_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_ParamLimits

0x531a,	// (0x00023ce7) data_form_wide_pane_ParamLimits

0x532b,	// (0x00023cf8) form_field_data_wide_pane_g1

0x5337,	// (0x00023d04) form_field_data_wide_pane_t1_ParamLimits

0x198a,	// (0x00020357) input_focus_pane_cp6_ParamLimits

0x66d3,	// (0x000250a0) input_popup_find_pane_g1_ParamLimits

0x66d3,	// (0x000250a0) input_popup_find_pane_g1

0x6839,	// (0x00025206) aid_navi_side_left_pane

0x684e,	// (0x0002521b) aid_navi_side_right_pane

0xa279,	// (0x00028c46) bg_popup_window_pane_cp30_ParamLimits

0xa279,	// (0x00028c46) bg_popup_window_pane_cp30

0xa2f3,	// (0x00028cc0) popup_midp_note_alarm_window_g1_ParamLimits

0xa2f3,	// (0x00028cc0) popup_midp_note_alarm_window_g1

0xa323,	// (0x00028cf0) popup_midp_note_alarm_window_t1_ParamLimits

0xa323,	// (0x00028cf0) popup_midp_note_alarm_window_t1

0xa3c4,	// (0x00028d91) popup_midp_note_alarm_window_t2_ParamLimits

0xa3c4,	// (0x00028d91) popup_midp_note_alarm_window_t2

0xa472,	// (0x00028e3f) popup_midp_note_alarm_window_t3_ParamLimits

0xa472,	// (0x00028e3f) popup_midp_note_alarm_window_t3

0xa4a4,	// (0x00028e71) popup_midp_note_alarm_window_t4_ParamLimits

0xa4a4,	// (0x00028e71) popup_midp_note_alarm_window_t4

0xa4ca,	// (0x00028e97) popup_midp_note_alarm_window_t5_ParamLimits

0xa4ca,	// (0x00028e97) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002e247) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002e247) popup_midp_note_alarm_window_t

0xa576,	// (0x00028f43) wait_bar_pane_cp1_ParamLimits

0xa576,	// (0x00028f43) wait_bar_pane_cp1

0x1557,	// (0x0001ff24) wait_anim_pane_copy1

0x1557,	// (0x0001ff24) wait_border_pane_copy1

0x9f5e,	// (0x0002892b) wait_border_pane_g1_copy1

0x5351,	// (0x00023d1e) form_field_popup_pane_g1

0x5359,	// (0x00023d26) form_field_popup_pane_t1_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_cp7_ParamLimits

0x3169,	// (0x00021b36) list_form_pane_ParamLimits

0x5373,	// (0x00023d40) form_field_popup_wide_pane_g1

0x537b,	// (0x00023d48) form_field_popup_wide_pane_t1_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_cp8_ParamLimits

0x318f,	// (0x00021b5c) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x00029a88) aid_size_cell_graphic_pane

0x5407,	// (0x00023dd4) data_form_pane_t1_ParamLimits

0x570c,	// (0x000240d9) data_form_wide_pane_t1_ParamLimits

0x952d,	// (0x00027efa) bg_status_flat_pane

0x633c,	// (0x00024d09) title_pane_t1_ParamLimits

0x156d,	// (0x0001ff3a) title_pane_t2_ParamLimits

0x1593,	// (0x0001ff60) title_pane_t3_ParamLimits

0xf532,	// (0x0002deff) title_pane_t_ParamLimits

0x6b5e,	// (0x0002552b) level_1_signal_ParamLimits

0x6b6b,	// (0x00025538) level_2_signal_ParamLimits

0x6b78,	// (0x00025545) level_3_signal_ParamLimits

0x6b85,	// (0x00025552) level_4_signal_ParamLimits

0x6b92,	// (0x0002555f) level_5_signal_ParamLimits

0x6b9f,	// (0x0002556c) level_6_signal_ParamLimits

0x6bac,	// (0x00025579) level_7_signal_ParamLimits

0x6b5e,	// (0x0002552b) level_1_battery_ParamLimits

0x6b6b,	// (0x00025538) level_2_battery_ParamLimits

0x6b78,	// (0x00025545) level_3_battery_ParamLimits

0x6b85,	// (0x00025552) level_4_battery_ParamLimits

0x6b92,	// (0x0002555f) level_5_battery_ParamLimits

0x6b9f,	// (0x0002556c) level_6_battery_ParamLimits

0x6bac,	// (0x00025579) level_7_battery_ParamLimits

0xa17e,	// (0x00028b4b) bg_status_flat_pane_g1

0xa186,	// (0x00028b53) bg_status_flat_pane_g2

0xa18e,	// (0x00028b5b) bg_status_flat_pane_g3

0xa196,	// (0x00028b63) bg_status_flat_pane_g4

0xa19e,	// (0x00028b6b) bg_status_flat_pane_g5

0xa1a6,	// (0x00028b73) bg_status_flat_pane_g6

0xa1ae,	// (0x00028b7b) bg_status_flat_pane_g7

0x63ac,	// (0x00024d79) tabs_3_active_pane_t1_ParamLimits

0x63ac,	// (0x00024d79) tabs_3_passive_pane_t1_ParamLimits

0x63c6,	// (0x00024d93) tabs_4_active_pane_t1_ParamLimits

0x63c6,	// (0x00024d93) tabs_4_1_passive_pane_t1_ParamLimits

0x66e9,	// (0x000250b6) tabs_2_active_pane_t1_ParamLimits

0x66e9,	// (0x000250b6) tabs_2_passive_pane_t1_ParamLimits

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp4_ParamLimits

0x6709,	// (0x000250d6) tabs_2_long_active_pane_t1_ParamLimits

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp4_ParamLimits

0x7c2a,	// (0x000265f7) list_single_midp_graphic_pane_t1_ParamLimits

0x66fb,	// (0x000250c8) bg_active_tab_pane_cp5_ParamLimits

0x6728,	// (0x000250f5) tabs_3_long_active_pane_t1_ParamLimits

0x671c,	// (0x000250e9) bg_passive_tab_pane_cp5_ParamLimits

0x7c2a,	// (0x000265f7) list_single_midp_graphic_pane_t1

0x952d,	// (0x00027efa) bg_status_flat_pane_ParamLimits

0x95f8,	// (0x00027fc5) indicator_pane_cp2_ParamLimits

0x95f8,	// (0x00027fc5) indicator_pane_cp2

0x973b,	// (0x00028108) navi_pane_srt_ParamLimits

0x973b,	// (0x00028108) navi_pane_srt

0x975f,	// (0x0002812c) popup_clock_digital_analogue_window_cp1

0x1611,	// (0x0001ffde) indicator_pane_t1

0x9117,	// (0x00027ae4) copy_highlight_pane

0x9117,	// (0x00027ae4) cursor_graphics_pane

0x9117,	// (0x00027ae4) graphic_within_text_pane

0x9117,	// (0x00027ae4) link_highlight_pane

0xa99d,	// (0x0002936a) popup_preview_text_window_t5_ParamLimits

0xa99d,	// (0x0002936a) popup_preview_text_window_t5

0x9248,	// (0x00027c15) cursor_digital_pane

0x9248,	// (0x00027c15) cursor_primary_pane

0x9259,	// (0x00027c26) cursor_primary_small_pane

0x9261,	// (0x00027c2e) cursor_secondary_pane

0x9269,	// (0x00027c36) cursor_title_pane

0x9248,	// (0x00027c15) link_highlight_digital_pane

0x9250,	// (0x00027c1d) link_highlight_primary_pane

0x9259,	// (0x00027c26) link_highlight_primary_small_pane

0x9261,	// (0x00027c2e) link_highlight_secondary_pane

0x9269,	// (0x00027c36) link_highlight_title_pane

0x9248,	// (0x00027c15) copy_highlight_digital_pane

0x9248,	// (0x00027c15) copy_highlight_primary_pane

0x9259,	// (0x00027c26) copy_highlight_primary_small_pane

0x9261,	// (0x00027c2e) copy_highlight_secondary_pane

0x9269,	// (0x00027c36) copy_highlight_title_pane

0x9261,	// (0x00027c2e) graphic_text_digital_pane

0xa21c,	// (0x00028be9) graphic_text_primary_pane

0xa225,	// (0x00028bf2) graphic_text_primary_small_pane

0x9259,	// (0x00027c26) graphic_text_secondary_pane

0x9248,	// (0x00027c15) graphic_text_title_pane

0x9271,	// (0x00027c3e) cursor_primary_pane_g1

0xa20e,	// (0x00028bdb) cursor_text_primary_t1

0xa1f6,	// (0x00028bc3) cursor_primary_small_pane_g1

0xa200,	// (0x00028bcd) cursor_text_primary_small_t1

0xa1de,	// (0x00028bab) cursor_primary_small_pane_g1_copy1

0xa1e8,	// (0x00028bb5) cursor_text_primary_small_t1_copy1

0xa1c6,	// (0x00028b93) cursor_text_title_t1

0xa1d4,	// (0x00028ba1) cursor_title_pane_g1

0x9271,	// (0x00027c3e) cursor_digital_pane_g1

0x927b,	// (0x00027c48) cursor_text_digital_t1

0x9289,	// (0x00027c56) link_highlight_primary_pane_g1

0xa16f,	// (0x00028b3c) link_highlight_primary_pane_t1

0x9289,	// (0x00027c56) link_highlight_primary_small_pane_g1

0x9291,	// (0x00027c5e) link_highlight_primary_small_pane_t1

0x92a0,	// (0x00027c6d) link_highlight_secondary_pane_g1

0x92a8,	// (0x00027c75) link_highlight_secondary_pane_t1

0xa0e3,	// (0x00028ab0) link_highlight_title_pane_g1

0xa0eb,	// (0x00028ab8) link_highlight_title_pane_t1

0xa0cc,	// (0x00028a99) link_highlight_digital_pane_g1

0xa0d4,	// (0x00028aa1) link_highlight_digital_pane_t1

0x9f94,	// (0x00028961) copy_highlight_primary_pane_g1

0x9fab,	// (0x00028978) copy_highlight_primary_pane_t1

0x9f94,	// (0x00028961) copy_highlight_primary_small_pane_g1

0x9f9c,	// (0x00028969) copy_highlight_primary_small_pane_t1

0x92b7,	// (0x00027c84) copy_highlight_secondary_pane_g1

0x92bf,	// (0x00027c8c) copy_highlight_secondary_pane_t1

0x9f7d,	// (0x0002894a) copy_highlight_title_pane_g1

0x9f85,	// (0x00028952) copy_highlight_title_pane_t1

0x9f94,	// (0x00028961) copy_highlight_digital_pane_g1

0xb28d,	// (0x00029c5a) copy_highlight_digital_pane_t1

0xb1e1,	// (0x00029bae) graphic_text_primary_pane_g1

0xb271,	// (0x00029c3e) graphic_text_primary_pane_t1

0xb27f,	// (0x00029c4c) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002e376) graphic_text_primary_pane_t

0xb24d,	// (0x00029c1a) graphic_text_primary_small_pane_g1

0xb255,	// (0x00029c22) graphic_text_primary_small_pane_t1

0xb263,	// (0x00029c30) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002e371) graphic_text_primary_small_pane_t

0xb229,	// (0x00029bf6) graphic_text_secondary_pane_g1

0xb231,	// (0x00029bfe) graphic_text_secondary_pane_t1

0xb23f,	// (0x00029c0c) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002e36c) graphic_text_secondary_pane_t

0xb205,	// (0x00029bd2) graphic_text_title_pane_g1

0xb20d,	// (0x00029bda) graphic_text_title_pane_t1

0xb21b,	// (0x00029be8) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002e367) graphic_text_title_pane_t

0xb1e1,	// (0x00029bae) graphic_text_digital_pane_g1

0xb1e9,	// (0x00029bb6) graphic_text_digital_pane_t1

0xb1f7,	// (0x00029bc4) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002e362) graphic_text_digital_pane_t

0x15b3,	// (0x0001ff80) navi_icon_pane_srt_ParamLimits

0x15b3,	// (0x0001ff80) navi_icon_pane_srt

0x1557,	// (0x0001ff24) navi_midp_pane_srt

0x1557,	// (0x0001ff24) navi_navi_pane_srt

0x15b3,	// (0x0001ff80) navi_text_pane_srt_ParamLimits

0x15b3,	// (0x0001ff80) navi_text_pane_srt

0xb1ac,	// (0x00029b79) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x00029b81) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x00029b81) navi_navi_pane_srt_g1

0xb1c6,	// (0x00029b93) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x00029b93) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002e35d) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002e35d) navi_navi_pane_srt_g

0xb1d8,	// (0x00029ba5) navi_navi_tabs_pane_srt

0xb1ac,	// (0x00029b79) navi_navi_text_pane_srt

0xb1ac,	// (0x00029b79) navi_navi_volume_pane_srt

0xb19d,	// (0x00029b6a) navi_navi_text_pane_srt_t1

0x7fc6,	// (0x00026993) navi_navi_volume_pane_srt_g1

0x7fce,	// (0x0002699b) volume_small_pane_srt_ParamLimits

0x7fce,	// (0x0002699b) volume_small_pane_srt

0x7395,	// (0x00025d62) volume_small_pane_srt_g1_ParamLimits

0x7395,	// (0x00025d62) volume_small_pane_srt_g1

0x73a5,	// (0x00025d72) volume_small_pane_srt_g2_ParamLimits

0x73a5,	// (0x00025d72) volume_small_pane_srt_g2

0x73b6,	// (0x00025d83) volume_small_pane_srt_g3_ParamLimits

0x73b6,	// (0x00025d83) volume_small_pane_srt_g3

0x73c7,	// (0x00025d94) volume_small_pane_srt_g4_ParamLimits

0x73c7,	// (0x00025d94) volume_small_pane_srt_g4

0x73d8,	// (0x00025da5) volume_small_pane_srt_g5_ParamLimits

0x73d8,	// (0x00025da5) volume_small_pane_srt_g5

0x73e9,	// (0x00025db6) volume_small_pane_srt_g6_ParamLimits

0x73e9,	// (0x00025db6) volume_small_pane_srt_g6

0x73fa,	// (0x00025dc7) volume_small_pane_srt_g7_ParamLimits

0x73fa,	// (0x00025dc7) volume_small_pane_srt_g7

0x740b,	// (0x00025dd8) volume_small_pane_srt_g8_ParamLimits

0x740b,	// (0x00025dd8) volume_small_pane_srt_g8

0x741c,	// (0x00025de9) volume_small_pane_srt_g9_ParamLimits

0x741c,	// (0x00025de9) volume_small_pane_srt_g9

0x742d,	// (0x00025dfa) volume_small_pane_srt_g10_ParamLimits

0x742d,	// (0x00025dfa) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002e105) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002e105) volume_small_pane_srt_g

0x1883,	// (0x00020250) query_popup_data_pane_cp2

0xb183,	// (0x00029b50) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x00029b50) navi_navi_icon_text_pane_srt_t1

0xa21c,	// (0x00028be9) navi_tabs_2_long_pane_srt

0xa21c,	// (0x00028be9) navi_tabs_2_pane_srt

0xa21c,	// (0x00028be9) navi_tabs_3_long_pane_srt

0xa21c,	// (0x00028be9) navi_tabs_3_pane_srt

0xa21c,	// (0x00028be9) navi_tabs_4_pane_srt

0x7fa6,	// (0x00026973) tabs_2_active_pane_srt_ParamLimits

0x7fa6,	// (0x00026973) tabs_2_active_pane_srt

0x7fb6,	// (0x00026983) tabs_2_passive_pane_srt_ParamLimits

0x7fb6,	// (0x00026983) tabs_2_passive_pane_srt

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x00029b1c) bg_passive_tab_pane_g1_cp1_srt

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x00029b25) bg_passive_tab_pane_g3_cp1_srt

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp1_srt_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp1_srt

0xb161,	// (0x00029b2e) tabs_2_active_pane_srt_g1

0xb169,	// (0x00029b36) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x00029b36) tabs_2_active_pane_srt_t1

0xb14f,	// (0x00029b1c) bg_active_tab_pane_g1_cp1_srt

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x00029b25) bg_active_tab_pane_g3_cp1_srt

0x7f73,	// (0x00026940) tabs_3_active_pane_srt_ParamLimits

0x7f73,	// (0x00026940) tabs_3_active_pane_srt

0x7f84,	// (0x00026951) tabs_3_passive_pane_cp_srt_ParamLimits

0x7f84,	// (0x00026951) tabs_3_passive_pane_cp_srt

0x7f95,	// (0x00026962) tabs_3_passive_pane_srt_ParamLimits

0x7f95,	// (0x00026962) tabs_3_passive_pane_srt

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x943e,	// (0x00027e0b) bg_passive_tab_pane_cp2_srt

0x92ce,	// (0x00027c9b) bg_passive_tab_pane_g1_cp2_srt

0x6f14,	// (0x000258e1) bg_passive_tab_pane_g2_cp2_srt

0x92d7,	// (0x00027ca4) bg_passive_tab_pane_g3_cp2_srt

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp2_srt_ParamLimits

0x15b3,	// (0x0001ff80) bg_active_tab_pane_cp2_srt

0xb135,	// (0x00029b02) tabs_3_active_pane_srt_g1

0xb13d,	// (0x00029b0a) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x00029b0a) tabs_3_active_pane_srt_t1

0x92ce,	// (0x00027c9b) bg_active_tab_pane_g1_cp2_srt

0x6f14,	// (0x000258e1) bg_active_tab_pane_g2_cp2_srt

0x92d7,	// (0x00027ca4) bg_active_tab_pane_g3_cp2_srt

0x7f2b,	// (0x000268f8) tabs_4_active_pane_srt_ParamLimits

0x7f2b,	// (0x000268f8) tabs_4_active_pane_srt

0x7f3d,	// (0x0002690a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7f3d,	// (0x0002690a) tabs_4_passive_pane_cp2_srt

0x757f,	// (0x00025f4c) aid_size_cell_toolbar

0x671c,	// (0x000250e9) main_idle_act_pane_ParamLimits

0x7748,	// (0x00026115) popup_large_graphic_colour_window_ParamLimits

0x7aef,	// (0x000264bc) popup_toolbar_window_ParamLimits

0x7aef,	// (0x000264bc) popup_toolbar_window

0x5750,	// (0x0002411d) list_single_graphic_2heading_pane_ParamLimits

0x5750,	// (0x0002411d) list_single_graphic_2heading_pane

0x363f,	// (0x0002200c) aid_size_cell_apps_grid_lsc_pane

0x3651,	// (0x0002201e) aid_size_cell_apps_grid_prt_pane

0x943e,	// (0x00027e0b) bg_wml_button_pane_cp1_ParamLimits

0x943e,	// (0x00027e0b) bg_wml_button_pane_cp1

0x9bf8,	// (0x000285c5) form_midp_field_text_pane_t1_ParamLimits

0x99ea,	// (0x000283b7) input_focus_pane_cp050_ParamLimits

0x9c23,	// (0x000285f0) list_midp_form_text_pane_ParamLimits

0x9bd5,	// (0x000285a2) input_focus_pane_cp051_ParamLimits

0x9be9,	// (0x000285b6) list_midp_choice_pane_ParamLimits

0x9aa3,	// (0x00028470) list_single_2graphic_pane_cp3_ParamLimits

0x9aa3,	// (0x00028470) list_single_2graphic_pane_cp3

0x9ab9,	// (0x00028486) list_single_midp_graphic_pane_ParamLimits

0x9ab9,	// (0x00028486) list_single_midp_graphic_pane

0x555f,	// (0x00023f2c) list_single_graphic_2heading_pane_g1_ParamLimits

0x555f,	// (0x00023f2c) list_single_graphic_2heading_pane_g1

0x556b,	// (0x00023f38) list_single_graphic_2heading_pane_g4_ParamLimits

0x556b,	// (0x00023f38) list_single_graphic_2heading_pane_g4

0x5577,	// (0x00023f44) list_single_graphic_2heading_pane_g5_ParamLimits

0x5577,	// (0x00023f44) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002e158) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002e158) list_single_graphic_2heading_pane_g

0x5583,	// (0x00023f50) list_single_graphic_2heading_pane_t1_ParamLimits

0x5583,	// (0x00023f50) list_single_graphic_2heading_pane_t1

0x5597,	// (0x00023f64) list_single_graphic_2heading_pane_t2_ParamLimits

0x5597,	// (0x00023f64) list_single_graphic_2heading_pane_t2

0x55b3,	// (0x00023f80) list_single_graphic_2heading_pane_t3_ParamLimits

0x55b3,	// (0x00023f80) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002e15f) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002e15f) list_single_graphic_2heading_pane_t

0x98b4,	// (0x00028281) bg_popup_sub_pane_cp2

0x98de,	// (0x000282ab) grid_toobar_pane

0x7bae,	// (0x0002657b) cell_toolbar_pane_ParamLimits

0x7bae,	// (0x0002657b) cell_toolbar_pane

0x991a,	// (0x000282e7) cell_toolbar_pane_g1_ParamLimits

0x991a,	// (0x000282e7) cell_toolbar_pane_g1

0x992e,	// (0x000282fb) cell_toolbar_pane_g2_ParamLimits

0x992e,	// (0x000282fb) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002e16d) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002e16d) cell_toolbar_pane_g

0x9950,	// (0x0002831d) grid_highlight_pane_cp2_ParamLimits

0x9950,	// (0x0002831d) grid_highlight_pane_cp2

0x996a,	// (0x00028337) toolbar_button_pane

0x9976,	// (0x00028343) toolbar_button_pane_g1

0x997e,	// (0x0002834b) toolbar_button_pane_g2

0x9986,	// (0x00028353) toolbar_button_pane_g3

0x998e,	// (0x0002835b) toolbar_button_pane_g4

0x9996,	// (0x00028363) toolbar_button_pane_g5

0x999e,	// (0x0002836b) toolbar_button_pane_g6

0x99a6,	// (0x00028373) toolbar_button_pane_g7

0x99ae,	// (0x0002837b) toolbar_button_pane_g8

0x99b6,	// (0x00028383) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002e172) toolbar_button_pane_g

0x7be6,	// (0x000265b3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7be6,	// (0x000265b3) list_single_2graphic_pane_g1_cp3

0x7bf2,	// (0x000265bf) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7bf2,	// (0x000265bf) list_single_2graphic_pane_g2_cp3

0x7237,	// (0x00025c04) list_single_2graphic_pane_g3_cp3

0x7c03,	// (0x000265d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7c03,	// (0x000265d0) list_single_2graphic_pane_g4_cp3

0x7c0f,	// (0x000265dc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7c0f,	// (0x000265dc) list_single_2graphic_pane_t1_cp3

0x722b,	// (0x00025bf8) list_single_midp_graphic_pane_g2_ParamLimits

0x722b,	// (0x00025bf8) list_single_midp_graphic_pane_g2

0x7587,	// (0x00025f54) aid_zoom_text_primary

0x5533,	// (0x00023f00) aid_zoom_text_secondary

0x9388,	// (0x00027d55) status_small_pane_g7_ParamLimits

0x9388,	// (0x00027d55) status_small_pane_g7

0x93ab,	// (0x00027d78) status_small_pane_t1_ParamLimits

0x6317,	// (0x00024ce4) title_pane_g2

0x0003,

0xf529,	// (0x0002def6) title_pane_g

0x6580,	// (0x00024f4d) aid_size_cell_colour_1_pane_ParamLimits

0x6580,	// (0x00024f4d) aid_size_cell_colour_1_pane

0x6594,	// (0x00024f61) aid_size_cell_colour_2_pane_ParamLimits

0x6594,	// (0x00024f61) aid_size_cell_colour_2_pane

0x65a8,	// (0x00024f75) aid_size_cell_colour_3_pane_ParamLimits

0x65a8,	// (0x00024f75) aid_size_cell_colour_3_pane

0x65bc,	// (0x00024f89) aid_size_cell_colour_4_pane_ParamLimits

0x65bc,	// (0x00024f89) aid_size_cell_colour_4_pane

0x6776,	// (0x00025143) title_pane_stacon_g1_ParamLimits

0x6776,	// (0x00025143) title_pane_stacon_g1

0xa002,	// (0x000289cf) popup_note_wait_window_g3_ParamLimits

0xa002,	// (0x000289cf) popup_note_wait_window_g3

0xa079,	// (0x00028a46) popup_note_wait_window_t5_ParamLimits

0xa079,	// (0x00028a46) popup_note_wait_window_t5

0x1557,	// (0x0001ff24) main_feb_china_hwr_fs_writing_pane

0x760d,	// (0x00025fda) popup_feb_china_hwr_fs_window_ParamLimits

0x760d,	// (0x00025fda) popup_feb_china_hwr_fs_window

0x7c40,	// (0x0002660d) aid_size_cell_hwr_fs_ParamLimits

0x7c40,	// (0x0002660d) aid_size_cell_hwr_fs

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp3_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp3

0x7c55,	// (0x00026622) grid_hwr_fs_pane_ParamLimits

0x7c55,	// (0x00026622) grid_hwr_fs_pane

0x7c6d,	// (0x0002663a) linegrid_hwr_fs_pane_ParamLimits

0x7c6d,	// (0x0002663a) linegrid_hwr_fs_pane

0x7c7d,	// (0x0002664a) cell_hwr_fs_pane_ParamLimits

0x7c7d,	// (0x0002664a) cell_hwr_fs_pane

0x99f6,	// (0x000283c3) linegrid_hwr_fs_pane_g1_ParamLimits

0x99f6,	// (0x000283c3) linegrid_hwr_fs_pane_g1

0x9a02,	// (0x000283cf) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a02,	// (0x000283cf) linegrid_hwr_fs_pane_g2

0x9a14,	// (0x000283e1) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a14,	// (0x000283e1) linegrid_hwr_fs_pane_g3

0x7ca1,	// (0x0002666e) linegrid_hwr_fs_pane_g4_ParamLimits

0x7ca1,	// (0x0002666e) linegrid_hwr_fs_pane_g4

0x7cbf,	// (0x0002668c) linegrid_hwr_fs_pane_g5_ParamLimits

0x7cbf,	// (0x0002668c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002e19d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002e19d) linegrid_hwr_fs_pane_g

0x9a20,	// (0x000283ed) cell_hwr_fs_pane_g1_ParamLimits

0x9a20,	// (0x000283ed) cell_hwr_fs_pane_g1

0x97ed,	// (0x000281ba) cell_hwr_fs_pane_g2_ParamLimits

0x97ed,	// (0x000281ba) cell_hwr_fs_pane_g2

0x9a36,	// (0x00028403) cell_hwr_fs_pane_g3_ParamLimits

0x9a36,	// (0x00028403) cell_hwr_fs_pane_g3

0x9a43,	// (0x00028410) cell_hwr_fs_pane_g4_ParamLimits

0x9a43,	// (0x00028410) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002e1a8) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002e1a8) cell_hwr_fs_pane_g

0x7cd5,	// (0x000266a2) cell_hwr_fs_pane_t1

0x1557,	// (0x0001ff24) grid_highlight_pane_cp6

0x1557,	// (0x0001ff24) main_idle_act2_pane

0x32b9,	// (0x00021c86) aid_inside_area_popup_secondary

0xa6b2,	// (0x0002907f) aid_inside_area_window_primary_ParamLimits

0xa6b2,	// (0x0002907f) aid_inside_area_window_primary

0xb29c,	// (0x00029c69) ai2_news_ticker_pane

0xb2a4,	// (0x00029c71) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x00029c71) aid_size_cell_ai1_link

0xb2be,	// (0x00029c8b) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x00029c8b) popup_ai2_data_window

0xb2dc,	// (0x00029ca9) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x00029ca9) popup_ai2_link_window

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp4_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp4

0xb2f2,	// (0x00029cbf) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x00029cbf) grid_ai2_link_pane

0xb309,	// (0x00029cd6) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x00029cd6) popup_ai2_link_window_g1

0xb315,	// (0x00029ce2) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x00029ce2) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002e37b) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002e37b) popup_ai2_link_window_g

0xb326,	// (0x00029cf3) ai2_mp_button_pane

0xb32e,	// (0x00029cfb) ai2_mp_volume_pane

0x9bd5,	// (0x000285a2) bg_popup_sub_pane_cp5_ParamLimits

0x9bd5,	// (0x000285a2) bg_popup_sub_pane_cp5

0xb336,	// (0x00029d03) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x00029d03) heading_ai2_gene_pane

0xb342,	// (0x00029d0f) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x00029d0f) list_ai2_gene_pane

0xb38a,	// (0x00029d57) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x00029d57) cell_ai2_link_pane

0xb3a0,	// (0x00029d6d) cell_ai2_link_pane_g1

0x1557,	// (0x0001ff24) grid_highlight_pane_cp7

0x7fe3,	// (0x000269b0) ai2_mp_volume_pane_g1

0xb473,	// (0x00029e40) ai2_mp_volume_pane_g2

0xb3e8,	// (0x00029db5) list_ai2_gene_pane_t1

0xb47b,	// (0x00029e48) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002e394) ai2_mp_volume_pane_g

0x7feb,	// (0x000269b8) volume_small_pane_cp3

0xb483,	// (0x00029e50) aid_size_cell_ai2_button

0xb48b,	// (0x00029e58) grid_ai2_button_pane

0xb494,	// (0x00029e61) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x00029e61) cell_ai2_button_pane

0x154d,	// (0x0001ff1a) cell_ai2_button_pane_g1

0x1557,	// (0x0001ff24) grid_highlight_pane_cp8

0xb433,	// (0x00029e00) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x00029e00) ai2_gene_pane_t1

0x7575,	// (0x00025f42) aid_height_parent_landscape

0xad42,	// (0x0002970f) aid_height_set_list

0xad53,	// (0x00029720) aid_size_parent

0xb0bb,	// (0x00029a88) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x00029d1f) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x00029d1f) popup_ai2_data_window_g1

0xb35e,	// (0x00029d2b) ai2_news_ticker_pane_g1

0xb366,	// (0x00029d33) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002e380) ai2_news_ticker_pane_g

0xb36e,	// (0x00029d3b) ai2_news_ticker_pane_t1

0xb37c,	// (0x00029d49) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002e385) ai2_news_ticker_pane_t

0xb3a9,	// (0x00029d76) heading_ai2_gene_pane_g1

0xb3b1,	// (0x00029d7e) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x00029d7e) heading_ai2_gene_pane_t1

0xb3c6,	// (0x00029d93) list_highlight_pane_cp6

0xb3ce,	// (0x00029d9b) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x00029d9b) ai2_gene_pane

0xb3f6,	// (0x00029dc3) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002e38a) list_ai2_gene_pane_t

0xb404,	// (0x00029dd1) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x00029dd1) list_highlight_pane_cp8

0xb415,	// (0x00029de2) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x00029de2) ai2_gene_pane_g1

0xb427,	// (0x00029df4) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x00029df4) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002e38f) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002e38f) ai2_gene_pane_g

0x1ba5,	// (0x00020572) scroll_pane_cp12

0x7534,	// (0x00025f01) control_pane_t3_ParamLimits

0x7534,	// (0x00025f01) control_pane_t3

0x939c,	// (0x00027d69) status_small_pane_g8_ParamLimits

0x939c,	// (0x00027d69) status_small_pane_g8

0x770b,	// (0x000260d8) popup_find_window_ParamLimits

0x7938,	// (0x00026305) popup_note_image_window_ParamLimits

0x55cb,	// (0x00023f98) list_double2_graphic_pane_vc_g1_ParamLimits

0x55cb,	// (0x00023f98) list_double2_graphic_pane_vc_g1

0x55d7,	// (0x00023fa4) list_double2_graphic_pane_vc_g2_ParamLimits

0x55d7,	// (0x00023fa4) list_double2_graphic_pane_vc_g2

0x55e3,	// (0x00023fb0) list_double2_graphic_pane_vc_g3_ParamLimits

0x55e3,	// (0x00023fb0) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002e166) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002e166) list_double2_graphic_pane_vc_g

0x55ef,	// (0x00023fbc) list_double2_graphic_pane_vc_t1_ParamLimits

0x55ef,	// (0x00023fbc) list_double2_graphic_pane_vc_t1

0x556b,	// (0x00023f38) list_single_heading_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_single_heading_pane_vc_g1

0x5577,	// (0x00023f44) list_single_heading_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_single_heading_pane_vc_g

0x5605,	// (0x00023fd2) list_single_heading_pane_vc_t1_ParamLimits

0x5605,	// (0x00023fd2) list_single_heading_pane_vc_t1

0x561b,	// (0x00023fe8) list_single_heading_pane_vc_t2_ParamLimits

0x561b,	// (0x00023fe8) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002e18c) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002e18c) list_single_heading_pane_vc_t

0x562d,	// (0x00023ffa) list_setting_number_pane_vc_g1_ParamLimits

0x562d,	// (0x00023ffa) list_setting_number_pane_vc_g1

0x5639,	// (0x00024006) list_setting_number_pane_vc_g2_ParamLimits

0x5639,	// (0x00024006) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002e191) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002e191) list_setting_number_pane_vc_g

0x5645,	// (0x00024012) list_setting_number_pane_vc_t1_ParamLimits

0x5645,	// (0x00024012) list_setting_number_pane_vc_t1

0x5659,	// (0x00024026) list_setting_number_pane_vc_t2_ParamLimits

0x5659,	// (0x00024026) list_setting_number_pane_vc_t2

0x5675,	// (0x00024042) list_setting_number_pane_vc_t3_ParamLimits

0x5675,	// (0x00024042) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002e196) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002e196) list_setting_number_pane_vc_t

0x56a3,	// (0x00024070) set_value_pane_vc_ParamLimits

0x56a3,	// (0x00024070) set_value_pane_vc

0x5750,	// (0x0002411d) list_double2_graphic_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double2_graphic_pane_vc

0xaf3c,	// (0x00029909) list_double2_large_graphic_pane_vc_ParamLimits

0xaf3c,	// (0x00029909) list_double2_large_graphic_pane_vc

0x5750,	// (0x0002411d) list_double2_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double2_pane_vc

0x5750,	// (0x0002411d) list_double_graphic_heading_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_graphic_heading_pane_vc

0x5750,	// (0x0002411d) list_double_graphic_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_graphic_pane_vc

0x5750,	// (0x0002411d) list_double_heading_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_heading_pane_vc

0xaf50,	// (0x0002991d) list_double_large_graphic_pane_vc_ParamLimits

0xaf50,	// (0x0002991d) list_double_large_graphic_pane_vc

0x5750,	// (0x0002411d) list_double_number_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_number_pane_vc

0x5750,	// (0x0002411d) list_double_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_pane_vc

0x5750,	// (0x0002411d) list_double_time_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_double_time_pane_vc

0x5750,	// (0x0002411d) list_setting_number_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_setting_number_pane_vc

0x5750,	// (0x0002411d) list_setting_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_setting_pane_vc

0x5750,	// (0x0002411d) list_single_graphic_heading_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_single_graphic_heading_pane_vc

0x5750,	// (0x0002411d) list_single_heading_pane_vc_ParamLimits

0x5750,	// (0x0002411d) list_single_heading_pane_vc

0x5767,	// (0x00024134) list_single_number_heading_pane_vc_ParamLimits

0x5767,	// (0x00024134) list_single_number_heading_pane_vc

0x55cb,	// (0x00023f98) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x55cb,	// (0x00023f98) list_double_graphic_heading_pane_vc_g1

0x556b,	// (0x00023f38) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x556b,	// (0x00023f38) list_double_graphic_heading_pane_vc_g2

0x5577,	// (0x00023f44) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5577,	// (0x00023f44) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002e39b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e39b) list_double_graphic_heading_pane_vc_g

0x57c6,	// (0x00024193) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57c6,	// (0x00024193) list_double_graphic_heading_pane_vc_t1

0x57dc,	// (0x000241a9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x57dc,	// (0x000241a9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002e3a2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002e3a2) list_double_graphic_heading_pane_vc_t

0x562d,	// (0x00023ffa) list_setting_pane_vc_g1_ParamLimits

0x562d,	// (0x00023ffa) list_setting_pane_vc_g1

0x5639,	// (0x00024006) list_setting_pane_vc_g2_ParamLimits

0x5639,	// (0x00024006) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002e191) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002e191) list_setting_pane_vc_g

0x57fa,	// (0x000241c7) list_setting_pane_vc_t1_ParamLimits

0x57fa,	// (0x000241c7) list_setting_pane_vc_t1

0x5816,	// (0x000241e3) list_setting_pane_vc_t2_ParamLimits

0x5816,	// (0x000241e3) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002e3d0) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002e3d0) list_setting_pane_vc_t

0x56a3,	// (0x00024070) set_value_pane_cp_vc_ParamLimits

0x56a3,	// (0x00024070) set_value_pane_cp_vc

0x556b,	// (0x00023f38) list_single_number_heading_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_single_number_heading_pane_vc_g1

0x5577,	// (0x00023f44) list_single_number_heading_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_single_number_heading_pane_vc_g

0x5832,	// (0x000241ff) list_single_number_heading_pane_vc_t1_ParamLimits

0x5832,	// (0x000241ff) list_single_number_heading_pane_vc_t1

0x5848,	// (0x00024215) list_single_number_heading_pane_vc_t2_ParamLimits

0x5848,	// (0x00024215) list_single_number_heading_pane_vc_t2

0x585e,	// (0x0002422b) list_single_number_heading_pane_vc_t3_ParamLimits

0x585e,	// (0x0002422b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002e3d5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002e3d5) list_single_number_heading_pane_vc_t

0x55cb,	// (0x00023f98) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x55cb,	// (0x00023f98) list_single_graphic_heading_pane_vc_g1

0x556b,	// (0x00023f38) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x556b,	// (0x00023f38) list_single_graphic_heading_pane_vc_g4

0x5577,	// (0x00023f44) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5577,	// (0x00023f44) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0002e39b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e39b) list_single_graphic_heading_pane_vc_g

0x5832,	// (0x000241ff) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5832,	// (0x000241ff) list_single_graphic_heading_pane_vc_t1

0x5870,	// (0x0002423d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5870,	// (0x0002423d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002e3dc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002e3dc) list_single_graphic_heading_pane_vc_t

0x556b,	// (0x00023f38) list_double2_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_double2_pane_vc_g1

0x5577,	// (0x00023f44) list_double2_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_double2_pane_vc_g

0x5882,	// (0x0002424f) list_double2_pane_vc_t1_ParamLimits

0x5882,	// (0x0002424f) list_double2_pane_vc_t1

0x5898,	// (0x00024265) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5898,	// (0x00024265) list_double2_large_graphic_pane_vc_g1

0x58a4,	// (0x00024271) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x58a4,	// (0x00024271) list_double2_large_graphic_pane_vc_g2

0x58b0,	// (0x0002427d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x58b0,	// (0x0002427d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002e3e1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002e3e1) list_double2_large_graphic_pane_vc_g

0x58bc,	// (0x00024289) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x58bc,	// (0x00024289) list_double2_large_graphic_pane_vc_t1

0x58d2,	// (0x0002429f) list_double_time_pane_vc_g1_ParamLimits

0x58d2,	// (0x0002429f) list_double_time_pane_vc_g1

0x58de,	// (0x000242ab) list_double_time_pane_vc_g2_ParamLimits

0x58de,	// (0x000242ab) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002e3e8) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002e3e8) list_double_time_pane_vc_g

0x58ea,	// (0x000242b7) list_double_time_pane_vc_t1_ParamLimits

0x58ea,	// (0x000242b7) list_double_time_pane_vc_t1

0x5914,	// (0x000242e1) list_double_time_pane_vc_t2_ParamLimits

0x5914,	// (0x000242e1) list_double_time_pane_vc_t2

0x595d,	// (0x0002432a) list_double_time_pane_vc_t3_ParamLimits

0x595d,	// (0x0002432a) list_double_time_pane_vc_t3

0x596f,	// (0x0002433c) list_double_time_pane_vc_t4_ParamLimits

0x596f,	// (0x0002433c) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002e3ed) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002e3ed) list_double_time_pane_vc_t

0x556b,	// (0x00023f38) list_double_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_double_pane_vc_g1

0x5577,	// (0x00023f44) list_double_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_double_pane_vc_g

0x5983,	// (0x00024350) list_double_pane_vc_t1_ParamLimits

0x5983,	// (0x00024350) list_double_pane_vc_t1

0x5997,	// (0x00024364) list_double_pane_vc_t2_ParamLimits

0x5997,	// (0x00024364) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002e3f6) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002e3f6) list_double_pane_vc_t

0x556b,	// (0x00023f38) list_double_number_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_double_number_pane_vc_g1

0x5577,	// (0x00023f44) list_double_number_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_double_number_pane_vc_g

0x59ad,	// (0x0002437a) list_double_number_pane_vc_t1_ParamLimits

0x59ad,	// (0x0002437a) list_double_number_pane_vc_t1

0x59bf,	// (0x0002438c) list_double_number_pane_vc_t2_ParamLimits

0x59bf,	// (0x0002438c) list_double_number_pane_vc_t2

0x5997,	// (0x00024364) list_double_number_pane_vc_t3_ParamLimits

0x5997,	// (0x00024364) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002e3fb) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e3fb) list_double_number_pane_vc_t

0x59d3,	// (0x000243a0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x59d3,	// (0x000243a0) list_double_large_graphic_pane_vc_g1

0x59f5,	// (0x000243c2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x59f5,	// (0x000243c2) list_double_large_graphic_pane_vc_g2

0x5a09,	// (0x000243d6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5a09,	// (0x000243d6) list_double_large_graphic_pane_vc_g3

0x5a18,	// (0x000243e5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a18,	// (0x000243e5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002e402) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002e402) list_double_large_graphic_pane_vc_g

0x5a24,	// (0x000243f1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a24,	// (0x000243f1) list_double_large_graphic_pane_vc_t1

0x5a40,	// (0x0002440d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5a40,	// (0x0002440d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002e40b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002e40b) list_double_large_graphic_pane_vc_t

0x556b,	// (0x00023f38) list_double_heading_pane_vc_g1_ParamLimits

0x556b,	// (0x00023f38) list_double_heading_pane_vc_g1

0x5577,	// (0x00023f44) list_double_heading_pane_vc_g2_ParamLimits

0x5577,	// (0x00023f44) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e187) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e187) list_double_heading_pane_vc_g

0x5a60,	// (0x0002442d) list_double_heading_pane_vc_t1_ParamLimits

0x5a60,	// (0x0002442d) list_double_heading_pane_vc_t1

0x5a72,	// (0x0002443f) list_double_heading_pane_vc_t2_ParamLimits

0x5a72,	// (0x0002443f) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002e410) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002e410) list_double_heading_pane_vc_t

0x5a8a,	// (0x00024457) list_double_graphic_pane_vc_g1_ParamLimits

0x5a8a,	// (0x00024457) list_double_graphic_pane_vc_g1

0x5a9d,	// (0x0002446a) list_double_graphic_pane_vc_g2_ParamLimits

0x5a9d,	// (0x0002446a) list_double_graphic_pane_vc_g2

0x556b,	// (0x00023f38) list_double_graphic_pane_vc_g3_ParamLimits

0x556b,	// (0x00023f38) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002e415) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002e415) list_double_graphic_pane_vc_g

0x5aba,	// (0x00024487) list_double_graphic_pane_vc_t1_ParamLimits

0x5aba,	// (0x00024487) list_double_graphic_pane_vc_t1

0x5ae4,	// (0x000244b1) list_double_graphic_pane_vc_t2_ParamLimits

0x5ae4,	// (0x000244b1) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002e41e) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002e41e) list_double_graphic_pane_vc_t

0x5f23,	// (0x000248f0) aid_size_cell_fastswap

0x5f2b,	// (0x000248f8) aid_size_cell_touch_ParamLimits

0x5f2b,	// (0x000248f8) aid_size_cell_touch

0x618c,	// (0x00024b59) popup_fast_swap_wide_window_ParamLimits

0x618c,	// (0x00024b59) popup_fast_swap_wide_window

0x62aa,	// (0x00024c77) touch_pane_ParamLimits

0x62aa,	// (0x00024c77) touch_pane

0x3098,	// (0x00021a65) button_value_adjust_pane_cp2

0x523a,	// (0x00023c07) button_value_adjust_pane_cp4

0x5260,	// (0x00023c2d) form_field_data_pane_cp2

0x5283,	// (0x00023c50) form_field_data_wide_pane_cp2

0x69b5,	// (0x00025382) bg_scroll_pane_ParamLimits

0x69d4,	// (0x000253a1) scroll_handle_pane_ParamLimits

0x69e8,	// (0x000253b5) scroll_sc2_down_pane_ParamLimits

0x69e8,	// (0x000253b5) scroll_sc2_down_pane

0x6a0f,	// (0x000253dc) scroll_sc2_up_pane_ParamLimits

0x6a0f,	// (0x000253dc) scroll_sc2_up_pane

0xbbbc,	// (0x0002a589) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0002a589) grid_wheel_folder_pane_g1

0x705b,	// (0x00025a28) clock_nsta_pane_cp2_ParamLimits

0x705b,	// (0x00025a28) clock_nsta_pane_cp2

0x911f,	// (0x00027aec) listscroll_midp_pane_ParamLimits

0x912b,	// (0x00027af8) midp_canvas_pane

0x9416,	// (0x00027de3) nsta_clock_indic_pane

0x944a,	// (0x00027e17) listscroll_form_pane_vc

0x9452,	// (0x00027e1f) listscroll_set_pane_vc_ParamLimits

0x9452,	// (0x00027e1f) listscroll_set_pane_vc

0x9549,	// (0x00027f16) clock_nsta_pane

0x95c6,	// (0x00027f93) indicator_nsta_pane

0x98b4,	// (0x00028281) bg_popup_sub_pane_cp2_ParamLimits

0x98c8,	// (0x00028295) find_pane_cp2_ParamLimits

0x98c8,	// (0x00028295) find_pane_cp2

0x98de,	// (0x000282ab) grid_toobar_pane_ParamLimits

0x99be,	// (0x0002838b) list_form_gen_pane_vc_ParamLimits

0x99be,	// (0x0002838b) list_form_gen_pane_vc

0x99d4,	// (0x000283a1) scroll_pane_cp8_vc_ParamLimits

0x99d4,	// (0x000283a1) scroll_pane_cp8_vc

0x9a50,	// (0x0002841d) data_form_wide_pane_vc_ParamLimits

0x9a50,	// (0x0002841d) data_form_wide_pane_vc

0x9a5c,	// (0x00028429) form_field_data_wide_pane_vc_g1

0x9a64,	// (0x00028431) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a64,	// (0x00028431) form_field_data_wide_pane_vc_t1

0x3104,	// (0x00021ad1) input_focus_pane_cp6_vc_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_cp6_vc

0x9d60,	// (0x0002872d) list_midp_pane_ParamLimits

0x9d6c,	// (0x00028739) scroll_pane_cp16_ParamLimits

0x9d6c,	// (0x00028739) scroll_pane_cp16

0x9dd6,	// (0x000287a3) button_value_adjust_pane_ParamLimits

0x9dd6,	// (0x000287a3) button_value_adjust_pane

0xad65,	// (0x00029732) button_value_adjust_pane_cp6_ParamLimits

0xad65,	// (0x00029732) button_value_adjust_pane_cp6

0xaead,	// (0x0002987a) settings_code_pane_cp_ParamLimits

0xaead,	// (0x0002987a) settings_code_pane_cp

0x154d,	// (0x0001ff1a) cell_touch_pane_g1

0x154d,	// (0x0001ff1a) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002e0ab) cell_touch_pane_g

0xb4a6,	// (0x00029e73) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x00029e73) cell_touch_pane_cp

0xb4b6,	// (0x00029e83) cell_touch_pane_ParamLimits

0xb4b6,	// (0x00029e83) cell_touch_pane

0x154d,	// (0x0001ff1a) scroll_sc2_down_pane_g1

0x154d,	// (0x0001ff1a) scroll_sc2_up_pane_g1

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x00029e94) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x00029e94) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x00029ea0) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x00029ea0) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002e3a7) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002e3a7) list_set_graphic_pane_vc_g

0xb4df,	// (0x00029eac) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x00029eac) text_primary_small_cp13_vc

0xb4f7,	// (0x00029ec4) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x00029ec4) list_set_graphic_pane_vc

0x1557,	// (0x0001ff24) input_focus_pane_cp2_vc

0x154d,	// (0x0001ff1a) setting_code_pane_vc_g1

0x15ca,	// (0x0001ff97) setting_code_pane_vc_t1

0xb50a,	// (0x00029ed7) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x00029ed7) set_text_pane_vc_t1

0x1557,	// (0x0001ff24) input_focus_pane_cp1_vc

0xb52b,	// (0x00029ef8) list_set_text_pane_vc

0x154d,	// (0x0001ff1a) setting_text_pane_vc_g1

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp2_vc

0x15c1,	// (0x0001ff8e) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x00029f02) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x00029f14) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002e3ac) setting_slider_graphic_pane_vc_t

0xb559,	// (0x00029f26) slider_set_pane_cp_vc

0xb563,	// (0x00029f30) slider_set_pane_vc_g1

0xb56c,	// (0x00029f39) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002e3b1) slider_set_pane_vc_g

0x31bf,	// (0x00021b8c) set_opt_bg_pane_g1_copy1

0x31c7,	// (0x00021b94) set_opt_bg_pane_g2_copy1

0xb598,	// (0x00029f65) set_opt_bg_pane_g3_copy1

0x31d7,	// (0x00021ba4) set_opt_bg_pane_g4_copy1

0x31df,	// (0x00021bac) set_opt_bg_pane_g5_copy1

0x31e7,	// (0x00021bb4) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x00029f6f) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x00029f79) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x00029f83) set_opt_bg_pane_g9_copy1

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x00029f8d) setting_slider_pane_vc_t1

0xb5cf,	// (0x00029f9c) setting_slider_pane_vc_t2

0xb5e1,	// (0x00029fae) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002e3c0) setting_slider_pane_vc_t

0xb5f3,	// (0x00029fc0) slider_set_pane_vc

0x7ce3,	// (0x000266b0) volume_set_pane_vc_g1

0x7cec,	// (0x000266b9) volume_set_pane_vc_g2

0x7cf5,	// (0x000266c2) volume_set_pane_vc_g3

0x7cfe,	// (0x000266cb) volume_set_pane_vc_g4

0x7d07,	// (0x000266d4) volume_set_pane_vc_g5

0x7d10,	// (0x000266dd) volume_set_pane_vc_g6

0x7d19,	// (0x000266e6) volume_set_pane_vc_g7

0x7d22,	// (0x000266ef) volume_set_pane_vc_g8

0x7d2b,	// (0x000266f8) volume_set_pane_vc_g9

0x7d34,	// (0x00026701) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002e25e) volume_set_pane_vc_g

0xb5fd,	// (0x00029fca) volume_set_pane_vc

0xb607,	// (0x00029fd4) button_value_adjust_pane_cp1_vc

0xb611,	// (0x00029fde) list_highlight_pane_cp2_vc

0xb61a,	// (0x00029fe7) list_set_pane_vc_ParamLimits

0xb61a,	// (0x00029fe7) list_set_pane_vc

0xb688,	// (0x0002a055) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0002a055) main_pane_set_vc_t1

0xb69d,	// (0x0002a06a) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0002a06a) main_pane_set_vc_t2

0xb6af,	// (0x0002a07c) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0002a07c) main_pane_set_vc_t3

0xb6c3,	// (0x0002a090) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0002a090) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002e3c7) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002e3c7) main_pane_set_vc_t

0xb6d7,	// (0x0002a0a4) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0002a0a4) setting_code_pane_vc

0xb6e8,	// (0x0002a0b5) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0002a0b5) setting_slider_pane_vc

0xb6e8,	// (0x0002a0b5) setting_text_pane_vc

0xb6e8,	// (0x0002a0b5) setting_volume_pane_vc

0xb6f2,	// (0x0002a0bf) scroll_pane_cp121_vc

0x3086,	// (0x00021a53) set_content_pane_vc

0xb6fa,	// (0x0002a0c7) button_value_adjust_pane_g1

0xb703,	// (0x0002a0d0) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002e423) button_value_adjust_pane_g

0xb70c,	// (0x0002a0d9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0002a0d9) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0002a0eb) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0002a0eb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002e428) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e428) form_field_slider_wide_pane_vc_t

0x15a5,	// (0x0001ff72) input_focus_pane_cp10_vc_ParamLimits

0x15a5,	// (0x0001ff72) input_focus_pane_cp10_vc

0xb74a,	// (0x0002a117) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0002a117) slider_cont_pane_cp1_vc

0xb75c,	// (0x0002a129) slider_form_pane_g1_cp2

0xb56c,	// (0x00029f39) slider_form_pane_g2_cp2

0xb789,	// (0x0002a156) form_field_slider_pane_vc_t3

0xb797,	// (0x0002a164) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0002a172) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0002a172) slider_form_pane_vc

0xb7b2,	// (0x0002a17f) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0002a17f) form_field_slider_pane_vc_t1

0xb71e,	// (0x0002a0eb) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0002a0eb) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002e43a) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002e43a) form_field_slider_pane_vc_t

0x15a5,	// (0x0001ff72) input_focus_pane_cp9_vc_ParamLimits

0x15a5,	// (0x0001ff72) input_focus_pane_cp9_vc

0xb7c8,	// (0x0002a195) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0002a195) slider_cont_pane_vc

0xb7dc,	// (0x0002a1a9) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0002a1a9) list_form_graphic_pane_cp_vc

0x9a5c,	// (0x00028429) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0002a1be) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0002a1be) form_field_popup_wide_pane_vc_t1

0x3104,	// (0x00021ad1) input_focus_pane_cp8_vc_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_cp8_vc

0xb836,	// (0x0002a203) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0002a203) list_form_wide_pane_vc

0xb842,	// (0x0002a20f) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0002a217) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0002a217) list_form_graphic_pane_vc_t1

0x15b3,	// (0x0001ff80) list_highlight_pane_cp5_vc_ParamLimits

0x15b3,	// (0x0001ff80) list_highlight_pane_cp5_vc

0xb866,	// (0x0002a233) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0002a233) list_form_graphic_pane_vc

0x9a5c,	// (0x00028429) form_field_popup_pane_vc_g1

0xb87c,	// (0x0002a249) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0002a249) form_field_popup_pane_vc_t1

0x3104,	// (0x00021ad1) input_focus_pane_cp7_vc_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_cp7_vc

0xb893,	// (0x0002a260) list_form_pane_vc_ParamLimits

0xb893,	// (0x0002a260) list_form_pane_vc

0xb89f,	// (0x0002a26c) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0002a26c) data_form_pane_vc_t1

0x31bf,	// (0x00021b8c) input_focus_pane_vc_g1

0x31c7,	// (0x00021b94) input_focus_pane_vc_g2

0x31cf,	// (0x00021b9c) input_focus_pane_vc_g3

0x31d7,	// (0x00021ba4) input_focus_pane_vc_g4

0x31df,	// (0x00021bac) input_focus_pane_vc_g5

0x31e7,	// (0x00021bb4) input_focus_pane_vc_g6

0x31ef,	// (0x00021bbc) input_focus_pane_vc_g7

0x31f7,	// (0x00021bc4) input_focus_pane_vc_g8

0x31ff,	// (0x00021bcc) input_focus_pane_vc_g9

0x154d,	// (0x0001ff1a) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002e034) input_focus_pane_vc_g

0x9a50,	// (0x0002841d) data_form_pane_vc_ParamLimits

0x9a50,	// (0x0002841d) data_form_pane_vc

0x9a5c,	// (0x00028429) form_field_data_pane_vc_g1

0xb8bc,	// (0x0002a289) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0002a289) form_field_data_pane_vc_t1

0x3104,	// (0x00021ad1) input_focus_pane_vc_ParamLimits

0x3104,	// (0x00021ad1) input_focus_pane_vc

0xb8d6,	// (0x0002a2a3) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0002a2ab) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0002a2b3) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0002a2b3) form_field_data_pane_vc

0xb901,	// (0x0002a2ce) form_field_data_pane_vc_cp2

0xb909,	// (0x0002a2d6) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0002a2d6) form_field_data_wide_pane_vc

0xb923,	// (0x0002a2f0) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0002a2f8) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0002a2f8) form_field_popup_pane_vc

0xb946,	// (0x0002a313) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0002a313) form_field_popup_wide_pane_vc

0xb960,	// (0x0002a32d) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0002a32d) form_field_slider_pane_vc

0xb973,	// (0x0002a340) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0002a340) form_field_slider_wide_pane_vc

0xb986,	// (0x0002a353) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0002a353) grid_touch_1_pane

0xb992,	// (0x0002a35f) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0002a35f) grid_touch_2_pane

0x93e1,	// (0x00027dae) touch_pane_g1_ParamLimits

0x93e1,	// (0x00027dae) touch_pane_g1

0xb9ac,	// (0x0002a379) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0002a379) cell_app_pane_cp_wide

0xb9bd,	// (0x0002a38a) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0002a38a) grid_popup_fast_wide_pane

0xb9d1,	// (0x0002a39e) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0002a39e) scroll_pane_cp19

0x1557,	// (0x0001ff24) bg_popup_window_pane_cp20

0xb9e5,	// (0x0002a3b2) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0002a3ba) grid_indicator_nsta_pane

0xb9ff,	// (0x0002a3cc) clock_nsta_pane_g1

0xba08,	// (0x0002a3d5) clock_nsta_pane_t1

0xba24,	// (0x0002a3f1) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0002a3f1) cell_indicator_nsta_pane

0xba59,	// (0x0002a426) cell_indicator_nsta_pane_g1

0xba67,	// (0x0002a434) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002e44b) cell_indicator_nsta_pane_g

0xba7a,	// (0x0002a447) clock_nsta_pane_cp

0xba83,	// (0x0002a450) indicator_nsta_pane_cp

0xba8d,	// (0x0002a45a) nsta_clock_indic_pane_g1

0x1609,	// (0x0001ffd6) grid_indicator_pane

0x6b01,	// (0x000254ce) scroll_pane_cp29

0x6f88,	// (0x00025955) indicator_nsta_pane_cp2_ParamLimits

0x6f88,	// (0x00025955) indicator_nsta_pane_cp2

0x15b3,	// (0x0001ff80) main_apps_wheel_pane

0x9c3d,	// (0x0002860a) form_midp_field_text_pane_ParamLimits

0x9d8c,	// (0x00028759) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0002a4b3) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0002a4b3) cell_indicator_pane

0xbafe,	// (0x0002a4cb) cell_indicator_pane_g1

0xbb08,	// (0x0002a4d5) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0002a4d5) grid_wheel_folder_pane

0xbb1c,	// (0x0002a4e9) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0002a4e9) list_wheel_apps_pane

0xbb2f,	// (0x0002a4fc) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0002a4fc) main_apps_wheel_pane_g1

0xbb4b,	// (0x0002a518) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0002a518) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002e467) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002e467) main_apps_wheel_pane_g

0xbb67,	// (0x0002a534) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0002a534) main_apps_wheel_pane_t1

0xbb90,	// (0x0002a55d) list_wheel_apps_pane_g1

0xbb98,	// (0x0002a565) list_wheel_apps_pane_g2

0xbba0,	// (0x0002a56d) list_wheel_apps_pane_g3

0xbba8,	// (0x0002a575) list_wheel_apps_pane_g4

0xbbb2,	// (0x0002a57f) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002e46c) list_wheel_apps_pane_g

0x7289,	// (0x00025c56) navi_icon_text_pane

0x947a,	// (0x00027e47) aid_fill_nsta

0xbbd3,	// (0x0002a5a0) navi_icon_text_pane_g1

0xbbdf,	// (0x0002a5ac) navi_icon_text_pane_t1

0x711f,	// (0x00025aec) list_set_graphic_pane_t1_ParamLimits

0x711f,	// (0x00025aec) list_set_graphic_pane_t1

0xa4f9,	// (0x00028ec6) popup_midp_note_alarm_window_t6_ParamLimits

0xa4f9,	// (0x00028ec6) popup_midp_note_alarm_window_t6

0xa50b,	// (0x00028ed8) popup_midp_note_alarm_window_t7_ParamLimits

0xa50b,	// (0x00028ed8) popup_midp_note_alarm_window_t7

0xa51d,	// (0x00028eea) popup_midp_note_alarm_window_t8_ParamLimits

0xa51d,	// (0x00028eea) popup_midp_note_alarm_window_t8

0xa52f,	// (0x00028efc) popup_midp_note_alarm_window_t9_ParamLimits

0xa52f,	// (0x00028efc) popup_midp_note_alarm_window_t9

0xa541,	// (0x00028f0e) popup_midp_note_alarm_window_t10_ParamLimits

0xa541,	// (0x00028f0e) popup_midp_note_alarm_window_t10

0xa553,	// (0x00028f20) popup_midp_note_alarm_window_t11_ParamLimits

0xa553,	// (0x00028f20) popup_midp_note_alarm_window_t11

0xa565,	// (0x00028f32) scroll_pane_cp17_ParamLimits

0xa565,	// (0x00028f32) scroll_pane_cp17

0x7ce3,	// (0x000266b0) volume_small_pane_cp_g1

0x7ff4,	// (0x000269c1) volume_small_pane_cp_g2

0x7ffd,	// (0x000269ca) volume_small_pane_cp_g3

0x8006,	// (0x000269d3) volume_small_pane_cp_g4

0x800f,	// (0x000269dc) volume_small_pane_cp_g5

0x8018,	// (0x000269e5) volume_small_pane_cp_g6

0x8021,	// (0x000269ee) volume_small_pane_cp_g7

0x802a,	// (0x000269f7) volume_small_pane_cp_g8

0x8033,	// (0x00026a00) volume_small_pane_cp_g9

0x803c,	// (0x00026a09) volume_small_pane_cp_g10

0x91f5,	// (0x00027bc2) midp_ticker_pane_g1_ParamLimits

0x9201,	// (0x00027bce) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002e100) midp_ticker_pane_g_ParamLimits

0x920d,	// (0x00027bda) midp_ticker_pane_t1_ParamLimits

0x9490,	// (0x00027e5d) aid_fill_nsta_2

0x9d78,	// (0x00028745) list_form2_midp_pane

0xaef4,	// (0x000298c1) midp_editing_number_pane_ParamLimits

0xaf03,	// (0x000298d0) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0002a5be) form2_midp_field_pane

0xbc15,	// (0x0002a5e2) scroll_pane_cp51

0xbc35,	// (0x0002a602) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0002a602) form2_midp_button_pane

0xbc47,	// (0x0002a614) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0002a614) form2_midp_content_pane

0xbc61,	// (0x0002a62e) form2_midp_field_choice_group_pane

0xbc69,	// (0x0002a636) form2_midp_field_pane_g1

0xbc71,	// (0x0002a63e) form2_midp_field_pane_g2

0xbc79,	// (0x0002a646) form2_midp_field_pane_g3

0xbc81,	// (0x0002a64e) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002e491) form2_midp_field_pane_g

0xbc89,	// (0x0002a656) form2_midp_gauge_slider_pane

0xbc91,	// (0x0002a65e) form2_midp_gauge_wait_pane

0xbc99,	// (0x0002a666) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0002a666) form2_midp_image_pane

0xbcb4,	// (0x0002a681) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0002a681) form2_midp_label_pane

0xbcd3,	// (0x0002a6a0) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0002a6a0) form2_midp_label_pane_cp

0xbcf4,	// (0x0002a6c1) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0002a6c1) form2_midp_string_pane

0x5b02,	// (0x000244cf) form2_midp_text_pane_ParamLimits

0x5b02,	// (0x000244cf) form2_midp_text_pane

0xbd06,	// (0x0002a6d3) form2_midp_time_pane

0xbd16,	// (0x0002a6e3) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0002a6e3) input_focus_pane_cp51

0xbd2e,	// (0x0002a6fb) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0002a6fb) form2_midp_label_pane_t1

0x5b23,	// (0x000244f0) form2_mdip_text_pane_t1_ParamLimits

0x5b23,	// (0x000244f0) form2_mdip_text_pane_t1

0x5b47,	// (0x00024514) form2_midp_time_pane_t1

0xbd7c,	// (0x0002a749) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0002a75b) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0002a76d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002e49a) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0002a77f) form2_midp_slider_pane

0xbdbe,	// (0x0002a78b) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0002a799) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0002a799) form2_midp_wait_pane

0xbdf7,	// (0x0002a7c4) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0002a7c4) list_single_2graphic_pane_cp4

0x9ab9,	// (0x00028486) list_single_midp_graphic_pane_cp_ParamLimits

0x9ab9,	// (0x00028486) list_single_midp_graphic_pane_cp

0x1557,	// (0x0001ff24) list_highlight_pane_cp20

0xbe10,	// (0x0002a7dd) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x00029d76) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0002a7e5) list_single_2graphic_pane_t1_cp4

0x15b3,	// (0x0001ff80) list_highlight_pane_cp21

0xbe27,	// (0x0002a7f4) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0002a803) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0002a818) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0002a818) form2_mdip_string_pane_t1

0x1557,	// (0x0001ff24) bg_wml_button_pane_cp2

0x154d,	// (0x0001ff1a) form2_midp_image_pane_g1

0x502d,	// (0x000239fa) list_double_large_graphic_pane_g5_ParamLimits

0x502d,	// (0x000239fa) list_double_large_graphic_pane_g5

0x911f,	// (0x00027aec) midp_form_pane_ParamLimits

0x15b3,	// (0x0001ff80) main_apps_wheel_pane_ParamLimits

0x7960,	// (0x0002632d) popup_preview_window_ParamLimits

0x7960,	// (0x0002632d) popup_preview_window

0x7b47,	// (0x00026514) popup_touch_info_window_ParamLimits

0x7b47,	// (0x00026514) popup_touch_info_window

0x7b69,	// (0x00026536) popup_touch_menu_window_ParamLimits

0x7b69,	// (0x00026536) popup_touch_menu_window

0x1543,	// (0x0001ff10) bg_popup_sub_pane_cp6

0xbee7,	// (0x0002a8b4) list_touch_menu_pane

0xbeef,	// (0x0002a8bc) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0002a8bc) list_single_touch_menu_pane

0xbf07,	// (0x0002a8d4) list_single_touch_menu_pane_t1

0x15b3,	// (0x0001ff80) bg_popup_sub_pane_cp7_ParamLimits

0x15b3,	// (0x0001ff80) bg_popup_sub_pane_cp7

0xbf15,	// (0x0002a8e2) heading_sub_pane

0xbf1d,	// (0x0002a8ea) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0002a8ea) list_touch_info_pane

0xbf2c,	// (0x0002a8f9) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0002a8f9) list_single_touch_info_pane

0xbf3e,	// (0x0002a90b) list_single_touch_info_pane_t1

0xbf4c,	// (0x0002a919) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002e4a8) list_single_touch_info_pane_t

0x9117,	// (0x00027ae4) bg_popup_heading_pane_cp

0xbf5a,	// (0x0002a927) heading_sub_pane_t1

0x99ea,	// (0x000283b7) bg_popup_preview_window_pane_cp_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0002a8e2) heading_preview_pane

0xbf1d,	// (0x0002a8ea) list_preview_pane_ParamLimits

0xbf1d,	// (0x0002a8ea) list_preview_pane

0xbf68,	// (0x0002a935) popup_preview_window_g1

0xbf2c,	// (0x0002a8f9) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0002a8f9) list_single_preview_pane

0xbf70,	// (0x0002a93d) list_single_preview_pane_g1

0xbf78,	// (0x0002a945) list_single_preview_pane_t1

0xbf3e,	// (0x0002a90b) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002e4ad) list_single_preview_pane_t

0xbf86,	// (0x0002a953) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0002a953) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0002a969) heading_preview_pane_g1

0xbfa4,	// (0x0002a971) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0002a971) heading_preview_pane_t1

0x1620,	// (0x0001ffed) soft_indicator_pane_t1_ParamLimits

0x1b82,	// (0x0002054f) scroll_pane_ParamLimits

0x69fd,	// (0x000253ca) scroll_sc2_left_pane

0x6a06,	// (0x000253d3) scroll_sc2_right_pane

0x6a25,	// (0x000253f2) scroll_bg_pane_g1_ParamLimits

0x6a3a,	// (0x00025407) scroll_bg_pane_g2_ParamLimits

0x6a52,	// (0x0002541f) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002e08b) scroll_bg_pane_g_ParamLimits

0x6a25,	// (0x000253f2) scroll_handle_pane_g1_ParamLimits

0x6a74,	// (0x00025441) scroll_handle_pane_g2_ParamLimits

0x6a52,	// (0x0002541f) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002e092) scroll_handle_pane_g_ParamLimits

0x75a5,	// (0x00025f72) popup_choice_list_window_ParamLimits

0x75a5,	// (0x00025f72) popup_choice_list_window

0x98c0,	// (0x0002828d) choice_list_pane

0x9942,	// (0x0002830f) cell_toolbar_pane_t1

0x996a,	// (0x00028337) toolbar_button_pane_ParamLimits

0xaa2f,	// (0x000293fc) ai_gene_pane_1_t2_ParamLimits

0xaa2f,	// (0x000293fc) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002e2ba) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002e2ba) ai_gene_pane_1_t

0xbfc1,	// (0x0002a98e) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0002a98e) scroll_sc2_right_pane_g1

0x943e,	// (0x00027e0b) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0002a998) list_choice_list_pane

0xbfe4,	// (0x0002a9b1) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0002a9b1) list_single_choice_list_pane

0xbffc,	// (0x0002a9c9) list_single_choice_list_pane_g1

0x32f7,	// (0x00021cc4) list_single_choice_list_pane_t1_ParamLimits

0x32f7,	// (0x00021cc4) list_single_choice_list_pane_t1

0xc004,	// (0x0002a9d1) choice_list_pane_g1

0xc00c,	// (0x0002a9d9) choice_list_pane_t1

0x1543,	// (0x0001ff10) input_focus_pane_cp11

0x34c5,	// (0x00021e92) title_pane_stacon_g2_ParamLimits

0x34c5,	// (0x00021e92) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002e071) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002e071) title_pane_stacon_g

0x9117,	// (0x00027ae4) cursor_press_pane

0x765f,	// (0x0002602c) popup_fep_hwr_window_ParamLimits

0x765f,	// (0x0002602c) popup_fep_hwr_window

0x76e9,	// (0x000260b6) popup_fep_vkb_window_ParamLimits

0x76e9,	// (0x000260b6) popup_fep_vkb_window

0xc01a,	// (0x0002a9e7) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002e4d6) fep_vkb_side_pane_g_ParamLimits

0x807e,	// (0x00026a4b) fep_hwr_candidate_pane_ParamLimits

0x807e,	// (0x00026a4b) fep_hwr_candidate_pane

0x80a8,	// (0x00026a75) fep_hwr_side_pane_ParamLimits

0x80a8,	// (0x00026a75) fep_hwr_side_pane

0x80ca,	// (0x00026a97) fep_hwr_top_pane_ParamLimits

0x80ca,	// (0x00026a97) fep_hwr_top_pane

0x80e2,	// (0x00026aaf) fep_hwr_write_pane_ParamLimits

0x80e2,	// (0x00026aaf) fep_hwr_write_pane

0xfb09,	// (0x0002e4d6) fep_vkb_side_pane_g

0xc022,	// (0x0002a9ef) fep_hwr_top_pane_g1

0xc034,	// (0x0002aa01) fep_hwr_top_pane_g2

0x810e,	// (0x00026adb) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002e4b2) fep_hwr_top_pane_g

0x8123,	// (0x00026af0) fep_hwr_top_text_pane

0x6bc9,	// (0x00025596) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0002aa37) fep_hwr_top_text_pane_t1

0x822d,	// (0x00026bfa) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0002ac82) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0002ac82) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0002acae) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0002acae) fep_vkb_keypad_pane_g4

0xc358,	// (0x0002ad25) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0002ad25) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002e4dd) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002e4dd) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0002a98e) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002e4e7) cell_vkb_side_pane_g

0xc3e3,	// (0x0002adb0) cell_vkb_side_pane_t1

0xc3f1,	// (0x0002adbe) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0002a98e) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0002af02) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0002aa45) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0002aa45) aid_size_cell_vkb

0xc535,	// (0x0002af02) cell_vkb_candidate_pane

0x8247,	// (0x00026c14) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0002aad7) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0002aad7) fep_vkb_bottom_pane

0xc147,	// (0x0002ab14) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0002ab14) fep_vkb_candidate_pane

0xc163,	// (0x0002ab30) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0002ab30) fep_vkb_keypad_pane

0xc196,	// (0x0002ab63) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0002ab63) fep_vkb_side_pane

0xc1d2,	// (0x0002ab9f) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0002ab9f) fep_vkb_top_pane

0xc20e,	// (0x0002abdb) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0002abdb) fep_vkb_top_pane_g1

0xc21d,	// (0x0002abea) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0002abea) fep_vkb_top_pane_g2

0xc22c,	// (0x0002abf9) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0002abf9) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002e4cd) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002e4cd) fep_vkb_top_pane_g

0xc24a,	// (0x0002ac17) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0002ac17) fep_vkb_top_text_pane

0xc25b,	// (0x0002ac28) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0002ac28) fep_vkb_side_pane_g1

0xc2a4,	// (0x0002ac71) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0002ac71) grid_vkb_side_pane

0x824f,	// (0x00026c1c) bg_popup_fep_shadow_pane_g2

0x8258,	// (0x00026c25) bg_popup_fep_shadow_pane_g3

0x8260,	// (0x00026c2d) bg_popup_fep_shadow_pane_g4

0x8269,	// (0x00026c36) bg_popup_fep_shadow_pane_g5

0x8273,	// (0x00026c40) bg_popup_fep_shadow_pane_g6

0x827b,	// (0x00026c48) bg_popup_fep_shadow_pane_g7

0x31df,	// (0x00021bac) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0002acd0) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0002acd0) grid_vkb_keypad_number_pane

0xc317,	// (0x0002ace4) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0002ace4) grid_vkb_keypad_pane

0xc33d,	// (0x0002ad0a) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0002ad0a) fep_vkb_bottom_pane_g1

0xc366,	// (0x0002ad33) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0002ad33) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0002ad48) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0002ad48) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0002ad5d) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0002ad78) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0002ad8d) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0002ad8d) cell_vkb_side_pane

0xbfc1,	// (0x0002a98e) cell_vkb_side_pane_g1

0xc3ff,	// (0x0002adcc) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0002adcc) cell_vkb_keypad_pane

0xc48c,	// (0x0002ae59) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002e4fa) bg_popup_fep_shadow_pane_g

0xbfc1,	// (0x0002a98e) cell_hwr_side_pane_g1

0xbfc1,	// (0x0002a98e) cell_hwr_side_pane_g2

0xc496,	// (0x0002ae63) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0002ae71) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0002ae71) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0002ae8e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0002ae8e) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0002a98e) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0002a98e) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0002aec7) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0002aec7) cell_vkb_keypad_number_pane

0xc519,	// (0x0002aee6) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0002aef0) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0002aef9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002e4ec) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0002ae63) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0002af23) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002e4e7) cell_hwr_side_pane_g

0xc56f,	// (0x0002af3c) cell_hwr_side_pane_t1

0x828d,	// (0x00026c5a) cell_hwr_side_pane_t1_copy1

0xc23c,	// (0x0002ac09) cell_hwr_candidate_pane_g1

0x829b,	// (0x00026c68) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0002a98e) cell_vkb_candidate_pane_g2

0xc5f5,	// (0x0002afc2) cell_vkb_candidate_pane_t1

0x8045,	// (0x00026a12) bg_popup_fep_shadow_pane_ParamLimits

0x8045,	// (0x00026a12) bg_popup_fep_shadow_pane

0x1513,	// (0x0001fee0) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0002aa13) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0002aa13) bg_hwr_side_pane_g1

0x8161,	// (0x00026b2e) cell_hwr_side_pane_ParamLimits

0x8161,	// (0x00026b2e) cell_hwr_side_pane

0x819e,	// (0x00026b6b) fep_hwr_write_pane_g1_ParamLimits

0x819e,	// (0x00026b6b) fep_hwr_write_pane_g1

0x81ab,	// (0x00026b78) fep_hwr_write_pane_g2_ParamLimits

0x81ab,	// (0x00026b78) fep_hwr_write_pane_g2

0x81b8,	// (0x00026b85) fep_hwr_write_pane_g3_ParamLimits

0x81b8,	// (0x00026b85) fep_hwr_write_pane_g3

0x81c6,	// (0x00026b93) fep_hwr_write_pane_g4_ParamLimits

0x81c6,	// (0x00026b93) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002e4b9) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002e4b9) fep_hwr_write_pane_g

0x1513,	// (0x0001fee0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1513,	// (0x0001fee0) bg_fep_hwr_candidate_pane_g2

0x81db,	// (0x00026ba8) cell_hwr_candidate_pane_ParamLimits

0x81db,	// (0x00026ba8) cell_hwr_candidate_pane

0x822d,	// (0x00026bfa) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0002aa73) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0002aa73) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0002ac09) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0002ac09) fep_vkb_top_pane_g4

0xc282,	// (0x0002ac4f) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0002ac4f) fep_vkb_side_pane_g2

0x516d,	// (0x00023b3a) list_setting_pane_t4_ParamLimits

0x516d,	// (0x00023b3a) list_setting_pane_t4

0x5201,	// (0x00023bce) list_setting_number_pane_t5_ParamLimits

0x5201,	// (0x00023bce) list_setting_number_pane_t5

0x6c2f,	// (0x000255fc) list_double_heading_pane_cp2_ParamLimits

0x6c2f,	// (0x000255fc) list_double_heading_pane_cp2

0xc603,	// (0x0002afd0) list_double_heading_pane_g1_cp2_ParamLimits

0xc603,	// (0x0002afd0) list_double_heading_pane_g1_cp2

0xc60f,	// (0x0002afdc) list_double_heading_pane_g2_cp2_ParamLimits

0xc60f,	// (0x0002afdc) list_double_heading_pane_g2_cp2

0xc623,	// (0x0002aff0) list_double_heading_pane_t1_cp2_ParamLimits

0xc623,	// (0x0002aff0) list_double_heading_pane_t1_cp2

0xc639,	// (0x0002b006) list_double_heading_pane_t2_cp2_ParamLimits

0xc639,	// (0x0002b006) list_double_heading_pane_t2_cp2

0x153b,	// (0x0001ff08) aid_value_unit2

0x61ea,	// (0x00024bb7) popup_preview_fixed_window

0x1700,	// (0x000200cd) bg_popup_preview_window_pane_cp02

0xc64b,	// (0x0002b018) list_preview_fixed_pane

0xc691,	// (0x0002b05e) list_empty_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_empty_pane_fp

0xc691,	// (0x0002b05e) list_single_cale_day_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_cale_day_pane_fp

0xc691,	// (0x0002b05e) list_single_graphic_heading_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_graphic_heading_pane_fp

0xc691,	// (0x0002b05e) list_single_graphic_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_graphic_pane_fp

0xc691,	// (0x0002b05e) list_single_heading_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_heading_pane_fp

0xc691,	// (0x0002b05e) list_single_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_pane_fp

0xc6aa,	// (0x0002b077) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b077) list_single_pane_fp_g1

0x4e84,	// (0x00023851) list_single_pane_fp_g2_ParamLimits

0x4e84,	// (0x00023851) list_single_pane_fp_g2

0x5b5a,	// (0x00024527) list_single_pane_fp_g3_ParamLimits

0x5b5a,	// (0x00024527) list_single_pane_fp_g3

0xc6b6,	// (0x0002b083) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0002b083) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002e51b) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002e51b) list_single_pane_fp_g

0x5b6e,	// (0x0002453b) list_single_pane_fp_t1_ParamLimits

0x5b6e,	// (0x0002453b) list_single_pane_fp_t1

0x5b85,	// (0x00024552) list_single_graphic_pane_fp_g1_ParamLimits

0x5b85,	// (0x00024552) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0002b077) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b077) list_single_graphic_pane_fp_g2

0x4e84,	// (0x00023851) list_single_graphic_pane_fp_g3_ParamLimits

0x4e84,	// (0x00023851) list_single_graphic_pane_fp_g3

0x5b5a,	// (0x00024527) list_single_graphic_pane_fp_g4_ParamLimits

0x5b5a,	// (0x00024527) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0002b083) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b083) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e524) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e524) list_single_graphic_pane_fp_g

0x5b91,	// (0x0002455e) list_single_graphic_pane_fp_t1_ParamLimits

0x5b91,	// (0x0002455e) list_single_graphic_pane_fp_t1

0x5b85,	// (0x00024552) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5b85,	// (0x00024552) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0002b077) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b077) list_single_graphic_heading_pane_fp_g2

0x4e84,	// (0x00023851) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e84,	// (0x00023851) list_single_graphic_heading_pane_fp_g3

0x5b5a,	// (0x00024527) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5b5a,	// (0x00024527) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0002b083) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b083) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e524) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e524) list_single_graphic_heading_pane_fp_g

0x5ba7,	// (0x00024574) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5ba7,	// (0x00024574) list_single_graphic_heading_pane_fp_t1

0x5bbd,	// (0x0002458a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5bbd,	// (0x0002458a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002e52f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002e52f) list_single_graphic_heading_pane_fp_t

0x5bcf,	// (0x0002459c) list_single_cale_day_pane_fp_g1_ParamLimits

0x5bcf,	// (0x0002459c) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0002b08f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0002b08f) list_single_cale_day_pane_fp_g2

0x5c07,	// (0x000245d4) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c07,	// (0x000245d4) list_single_cale_day_pane_fp_g3

0x5c2f,	// (0x000245fc) list_single_cale_day_pane_fp_g4_ParamLimits

0x5c2f,	// (0x000245fc) list_single_cale_day_pane_fp_g4

0x5c53,	// (0x00024620) list_single_cale_day_pane_fp_g5_ParamLimits

0x5c53,	// (0x00024620) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002e534) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002e534) list_single_cale_day_pane_fp_g

0x5c77,	// (0x00024644) list_single_cale_day_pane_fp_t1_ParamLimits

0x5c77,	// (0x00024644) list_single_cale_day_pane_fp_t1

0x5c9d,	// (0x0002466a) list_single_cale_day_pane_fp_t2_ParamLimits

0x5c9d,	// (0x0002466a) list_single_cale_day_pane_fp_t2

0x5cb6,	// (0x00024683) list_single_cale_day_pane_fp_t3_ParamLimits

0x5cb6,	// (0x00024683) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002e53f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002e53f) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0002b077) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b077) list_empty_pane_fp_g1

0x5ccf,	// (0x0002469c) list_empty_pane_fp_t1

0x5cdd,	// (0x000246aa) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002e546) list_empty_pane_fp_t

0xc6aa,	// (0x0002b077) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b077) list_single_heading_pane_fp_g1

0x4e84,	// (0x00023851) list_single_heading_pane_fp_g2_ParamLimits

0x4e84,	// (0x00023851) list_single_heading_pane_fp_g2

0x5b5a,	// (0x00024527) list_single_heading_pane_fp_g3_ParamLimits

0x5b5a,	// (0x00024527) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002e54b) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002e54b) list_single_heading_pane_fp_g

0x5ceb,	// (0x000246b8) list_single_heading_pane_fp_t1_ParamLimits

0x5ceb,	// (0x000246b8) list_single_heading_pane_fp_t1

0x5cfd,	// (0x000246ca) list_single_heading_pane_fp_t2_ParamLimits

0x5cfd,	// (0x000246ca) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002e552) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002e552) list_single_heading_pane_fp_t

0x330c,	// (0x00021cd9) aid_size_cell_fast

0x16e3,	// (0x000200b0) soft_indicator_pane_cp1_t1

0x3349,	// (0x00021d16) cell_app_pane_cp2_ParamLimits

0x3349,	// (0x00021d16) cell_app_pane_cp2

0x8067,	// (0x00026a34) fep_hwr_candidate_drop_down_list_pane

0x1521,	// (0x0001feee) fep_hwr_candidate_pane_g3_ParamLimits

0x1521,	// (0x0001feee) fep_hwr_candidate_pane_g3

0x152e,	// (0x0001fefb) fep_hwr_candidate_pane_g4_ParamLimits

0x152e,	// (0x0001fefb) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002e4c6) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002e4c6) fep_hwr_candidate_pane_g

0xc136,	// (0x0002ab03) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0002ab03) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0002af2b) fep_vkb_candidate_pane_g3

0xc566,	// (0x0002af33) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002e4f3) fep_vkb_candidate_pane_g

0xc23c,	// (0x0002ac09) cell_hwr_candidate_pane_g1_ParamLimits

0xc57d,	// (0x0002af4a) cell_hwr_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0002af4a) cell_hwr_candidate_pane_g3

0xc59e,	// (0x0002af6b) cell_hwr_candidate_pane_g4_ParamLimits

0xc59e,	// (0x0002af6b) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002e50d) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002e50d) cell_hwr_candidate_pane_g

0xc5bf,	// (0x0002af8c) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bf,	// (0x0002af8c) cell_vkb_candidate_pane_g3

0xc5da,	// (0x0002afa7) cell_vkb_candidate_pane_g4_ParamLimits

0xc5da,	// (0x0002afa7) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0002b09b) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0002b09b) cell_app_pane_cp2_g1

0xc6ec,	// (0x0002b0b9) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0002b0b9) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002e557) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002e557) cell_app_pane_cp2_g

0xc6f8,	// (0x0002b0c5) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0002b0c5) cell_app_pane_cp2_t1

0x3104,	// (0x00021ad1) grid_highlight_pane_cp1_ParamLimits

0x3104,	// (0x00021ad1) grid_highlight_pane_cp1

0x82b9,	// (0x00026c86) cell_hwr_candidate_pane_cp1_ParamLimits

0x82b9,	// (0x00026c86) cell_hwr_candidate_pane_cp1

0xc23c,	// (0x0002ac09) fep_hwr_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0002b0d7) fep_hwr_candidate_drop_down_list_pane_g2

0xc717,	// (0x0002b0e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e55c) fep_hwr_candidate_drop_down_list_pane_g

0x82dd,	// (0x00026caa) fep_hwr_candidate_drop_down_list_scroll_pane

0x82e6,	// (0x00026cb3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x82e6,	// (0x00026cb3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x82f3,	// (0x00026cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x82f3,	// (0x00026cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8300,	// (0x00026ccd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8300,	// (0x00026ccd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5bf,	// (0x0002af8c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bf,	// (0x0002af8c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5da,	// (0x0002afa7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5da,	// (0x0002afa7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x830d,	// (0x00026cda) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x830d,	// (0x00026cda) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8328,	// (0x00026cf5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8328,	// (0x00026cf5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8343,	// (0x00026d10) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8343,	// (0x00026d10) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002e563) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002e563) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc724,	// (0x0002b0f1) cell_vkb_candidate_pane_cp1_ParamLimits

0xc724,	// (0x0002b0f1) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0002ac09) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) fep_vkb_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0002b0d7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc70a,	// (0x0002b0d7) fep_vkb_candidate_drop_down_list_pane_g2

0xc717,	// (0x0002b0e4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc717,	// (0x0002b0e4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e55c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002e55c) fep_vkb_candidate_drop_down_list_pane_g

0xc74a,	// (0x0002b117) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc74a,	// (0x0002b117) fep_vkb_candidate_drop_down_list_scroll_pane

0xc757,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc757,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc764,	// (0x0002b131) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc764,	// (0x0002b131) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc770,	// (0x0002b13d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc770,	// (0x0002b13d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc57d,	// (0x0002af4a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc57d,	// (0x0002af4a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc59e,	// (0x0002af6b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc59e,	// (0x0002af6b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0002b149) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0002b149) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0002b16a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0002b16a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0002b18b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0002b18b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002e574) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002e574) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x630a,	// (0x00024cd7) title_pane_g1_ParamLimits

0x6317,	// (0x00024ce4) title_pane_g2_ParamLimits

0xf529,	// (0x0002def6) title_pane_g_ParamLimits

0x6bb9,	// (0x00025586) aid_call2_pane

0x6bc1,	// (0x0002558e) aid_call_pane

0x6bc9,	// (0x00025596) popup_clock_analogue_window_g1

0x6bc9,	// (0x00025596) popup_clock_analogue_window_g2

0x6bd1,	// (0x0002559e) popup_clock_analogue_window_g3

0x6bda,	// (0x000255a7) popup_clock_analogue_window_g4

0x154d,	// (0x0001ff1a) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002e0a0) popup_clock_analogue_window_g

0x6be2,	// (0x000255af) popup_clock_analogue_window_t1

0x6c8f,	// (0x0002565c) clock_digital_number_pane_ParamLimits

0x6c8f,	// (0x0002565c) clock_digital_number_pane

0x6c9b,	// (0x00025668) clock_digital_number_pane_cp02_ParamLimits

0x6c9b,	// (0x00025668) clock_digital_number_pane_cp02

0x6ca7,	// (0x00025674) clock_digital_number_pane_cp03_ParamLimits

0x6ca7,	// (0x00025674) clock_digital_number_pane_cp03

0x6cb3,	// (0x00025680) clock_digital_number_pane_cp04_ParamLimits

0x6cb3,	// (0x00025680) clock_digital_number_pane_cp04

0x6cbf,	// (0x0002568c) clock_digital_separator_pane_ParamLimits

0x6cbf,	// (0x0002568c) clock_digital_separator_pane

0x6ccb,	// (0x00025698) popup_clock_digital_window_t1_ParamLimits

0x6ccb,	// (0x00025698) popup_clock_digital_window_t1

0x154d,	// (0x0001ff1a) clock_digital_number_pane_g1

0x154d,	// (0x0001ff1a) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002e0ab) clock_digital_number_pane_g

0x154d,	// (0x0001ff1a) clock_digital_separator_pane_g1

0x154d,	// (0x0001ff1a) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002e0ab) clock_digital_separator_pane_g

0x947a,	// (0x00027e47) aid_fill_nsta_ParamLimits

0x95c6,	// (0x00027f93) indicator_nsta_pane_ParamLimits

0x9757,	// (0x00028124) popup_clock_analogue_window

0x9757,	// (0x00028124) popup_clock_digital_window

0xb9ed,	// (0x0002a3ba) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0002a3e3) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002e446) clock_nsta_pane_t

0x69a2,	// (0x0002536f) aid_size_max_handle

0x69ac,	// (0x00025379) aid_size_min_handle

0x9117,	// (0x00027ae4) editor_scroll_pane

0xc7d9,	// (0x0002b1a6) ex_editor_pane

0x32d2,	// (0x00021c9f) scroll_pane_cp13

0x1bae,	// (0x0002057b) scroll_pane_cp14

0x6c17,	// (0x000255e4) scroll_pane_cp36

0x6c45,	// (0x00025612) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c45,	// (0x00025612) list_single_graphic_hl_pane_cp2

0xaf72,	// (0x0002993f) list_single_graphic_hl_pane_ParamLimits

0xaf72,	// (0x0002993f) list_single_graphic_hl_pane

0x5d13,	// (0x000246e0) aid_size_min_hl_cp1

0xc7e1,	// (0x0002b1ae) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0002b1ae) list_highlight_pane_cp34

0xc7f2,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0002b1bf) list_single_graphic_hl_pane_g1

0x5d1c,	// (0x000246e9) list_single_graphic_hl_pane_g2_ParamLimits

0x5d1c,	// (0x000246e9) list_single_graphic_hl_pane_g2

0x5d1c,	// (0x000246e9) list_single_graphic_hl_pane_g3_ParamLimits

0x5d1c,	// (0x000246e9) list_single_graphic_hl_pane_g3

0x55d7,	// (0x00023fa4) list_single_graphic_hl_pane_g4_ParamLimits

0x55d7,	// (0x00023fa4) list_single_graphic_hl_pane_g4

0x5d28,	// (0x000246f5) list_single_graphic_hl_pane_g5_ParamLimits

0x5d28,	// (0x000246f5) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002e585) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002e585) list_single_graphic_hl_pane_g

0x5d3c,	// (0x00024709) list_single_graphic_hl_pane_t1_ParamLimits

0x5d3c,	// (0x00024709) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0002b1cc) aid_size_min_hl_cp2

0xc808,	// (0x0002b1d5) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0002b1d5) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0002b1e2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0002b1e2) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0002b1ee) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0002b1ee) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0002b1fc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0002b1fc) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0002b208) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0002b208) list_single_graphic_hl_pane_g5_cp2

0x7483,	// (0x00025e50) control_pane_g4_ParamLimits

0x7483,	// (0x00025e50) control_pane_g4

0x943e,	// (0x00027e0b) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0002a998) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0002a9a7) scroll_pane_cp23

0x1700,	// (0x000200cd) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64b,	// (0x0002b018) list_preview_fixed_pane_ParamLimits

0xc661,	// (0x0002b02e) list_preview_fixed_pane_cp_ParamLimits

0xc661,	// (0x0002b02e) list_preview_fixed_pane_cp

0xc66d,	// (0x0002b03a) popup_preview_fixed_window_g1_ParamLimits

0xc66d,	// (0x0002b03a) popup_preview_fixed_window_g1

0xc679,	// (0x0002b046) popup_preview_fixed_window_g2_ParamLimits

0xc679,	// (0x0002b046) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002e514) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002e514) popup_preview_fixed_window_g

0x6839,	// (0x00025206) aid_navi_side_left_pane_ParamLimits

0x684e,	// (0x0002521b) aid_navi_side_right_pane_ParamLimits

0x6866,	// (0x00025233) navi_icon_pane_stacon_ParamLimits

0x687a,	// (0x00025247) navi_navi_pane_stacon_ParamLimits

0x6866,	// (0x00025233) navi_text_pane_stacon_ParamLimits

0x1543,	// (0x0001ff10) main_text_info_pane

0xc865,	// (0x0002b232) listscroll_text_info_pane

0xc86d,	// (0x0002b23a) list_text_info_pane_ParamLimits

0xc86d,	// (0x0002b23a) list_text_info_pane

0xc87c,	// (0x0002b249) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0002b249) scroll_pane_cp24

0xc89a,	// (0x0002b267) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0002b267) list_text_info_pane_t1

0x75c7,	// (0x00025f94) popup_fast_swap2_window_ParamLimits

0x75c7,	// (0x00025f94) popup_fast_swap2_window

0xc8bf,	// (0x0002b28c) aid_size_cell_fast2

0x1543,	// (0x0001ff10) bg_popup_window_pane_cp17

0xc8c9,	// (0x0002b296) heading_pane_cp2

0xc8d1,	// (0x0002b29e) listscroll_fast2_pane

0xc8d9,	// (0x0002b2a6) grid_fast2_pane

0xc8e3,	// (0x0002b2b0) listscroll_fast2_pane_g1

0xc8ed,	// (0x0002b2ba) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002e590) listscroll_fast2_pane_g

0x32d2,	// (0x00021c9f) scroll_pane_cp26

0xc8f7,	// (0x0002b2c4) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0002b2c4) cell_fast2_pane

0xc90e,	// (0x0002b2db) cell_fast2_pane_g1

0xc917,	// (0x0002b2e4) cell_fast2_pane_g2

0xc920,	// (0x0002b2ed) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002e595) cell_fast2_pane_g

0x1975,	// (0x00020342) grid_highlight_pane_cp9

0x198a,	// (0x00020357) main_eswt_pane_ParamLimits

0x198a,	// (0x00020357) main_eswt_pane

0xc891,	// (0x0002b25e) list_single_text_info_pane

0xc928,	// (0x0002b2f5) eswt_ctrl_button_pane

0xc928,	// (0x0002b2f5) eswt_ctrl_canvas_pane

0xc930,	// (0x0002b2fd) eswt_ctrl_combo_pane

0xc928,	// (0x0002b2f5) eswt_ctrl_default_pane

0xc928,	// (0x0002b2f5) eswt_ctrl_label_pane

0xc938,	// (0x0002b305) eswt_ctrl_wait_pane

0xc940,	// (0x0002b30d) eswt_shell_pane

0x1543,	// (0x0001ff10) listscroll_eswt_app_pane

0xc960,	// (0x0002b32d) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0002b32d) popup_eswt_tasktip_window

0x99ea,	// (0x000283b7) bg_popup_window_pane_cp18

0xc979,	// (0x0002b346) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0002b346) eswt_control_pane_g1

0xc986,	// (0x0002b353) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0002b353) eswt_control_pane_g2

0xc993,	// (0x0002b360) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0002b360) eswt_control_pane_g3

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002e59c) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002e59c) eswt_control_pane_g

0x3104,	// (0x00021ad1) bg_button_pane_ParamLimits

0x3104,	// (0x00021ad1) bg_button_pane

0x198a,	// (0x00020357) common_borders_pane_copy2_ParamLimits

0x198a,	// (0x00020357) common_borders_pane_copy2

0xc9ad,	// (0x0002b37a) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0002b37a) control_button_pane_g1

0xc9b9,	// (0x0002b386) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0002b386) control_button_pane_g2

0xc9c5,	// (0x0002b392) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0002b392) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002e5a5) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002e5a5) control_button_pane_g

0xc9d9,	// (0x0002b3a6) control_button_pane_t1

0xc9e7,	// (0x0002b3b4) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002e5ac) control_button_pane_t

0x9976,	// (0x00028343) bg_button_pane_g1

0x997e,	// (0x0002834b) bg_button_pane_g2

0x9986,	// (0x00028353) bg_button_pane_g3

0x998e,	// (0x0002835b) bg_button_pane_g4

0x9996,	// (0x00028363) bg_button_pane_g5

0x999e,	// (0x0002836b) bg_button_pane_g6

0x99a6,	// (0x00028373) bg_button_pane_g7

0x99ae,	// (0x0002837b) bg_button_pane_g8

0x99b6,	// (0x00028383) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002e20e) bg_button_pane_g

0xbf86,	// (0x0002a953) common_borders_pane_ParamLimits

0xbf86,	// (0x0002a953) common_borders_pane

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy1

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy1

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0002a98e) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0002a953) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0002a953) common_borders_pane_cp2

0xbf86,	// (0x0002a953) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0002a953) common_borders_pane_cp3

0xc9f5,	// (0x0002b3c2) separator_horizontal_pane

0xc9fd,	// (0x0002b3ca) separator_vertical_pane

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy2

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy2

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy2

0x1543,	// (0x0001ff10) common_borders_pane_cp4

0xca06,	// (0x0002b3d3) separator_horizontal_pane_g1

0xca0f,	// (0x0002b3dc) separator_horizontal_pane_g2

0xca18,	// (0x0002b3e5) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002e5b1) separator_horizontal_pane_g

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy3

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy3

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy3

0x1543,	// (0x0001ff10) common_borders_pane_cp5

0xca21,	// (0x0002b3ee) separator_vertical_pane_g1

0xca2a,	// (0x0002b3f7) separator_vertical_pane_g2

0xca33,	// (0x0002b400) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002e5b8) separator_vertical_pane_g

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0002b346) eswt_control_pane_g1_copy4

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0002b353) eswt_control_pane_g2_copy4

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0002b360) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0002b36d) eswt_control_pane_g4_copy4

0xca3c,	// (0x0002b409) eswt_ctrl_combo_button_pane

0xca44,	// (0x0002b411) eswt_ctrl_input_pane

0xca4c,	// (0x0002b419) popup_choice_list_window_cp70

0xca54,	// (0x0002b421) eswt_ctrl_input_pane_t1

0x1543,	// (0x0001ff10) input_focus_pane_cp70

0xbf86,	// (0x0002a953) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0002a953) bg_button_pane_cp70

0xca62,	// (0x0002b42f) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0002b437) wait_bar_pane_cp70

0x99ea,	// (0x000283b7) bg_popup_window_pane_cp70_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_window_pane_cp70

0xca72,	// (0x0002b43f) popup_eswt_tasktip_window_t1

0xca88,	// (0x0002b455) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0002b455) wait_bar_pane_cp71

0xca94,	// (0x0002b461) grid_eswt_app_pane

0x6a06,	// (0x000253d3) scroll_pane_cp70

0xca9d,	// (0x0002b46a) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0002b46a) cell_eswt_app_pane

0xcacf,	// (0x0002b49c) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0002b49c) cell_eswt_app_pane_g1

0xcafe,	// (0x0002b4cb) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0002b4cb) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002e5bf) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002e5bf) cell_eswt_app_pane_g

0xcb27,	// (0x0002b4f4) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0002b4f4) cell_eswt_app_pane_t1

0xcb59,	// (0x0002b526) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0002b526) grid_highlight_pane_cp70

0x72de,	// (0x00025cab) set_content_pane_g1

0x93c5,	// (0x00027d92) status_small_volume_pane

0x835e,	// (0x00026d2b) status_small_volume_pane_g1

0x8366,	// (0x00026d33) volume_small2_pane

0x836f,	// (0x00026d3c) volume_small2_pane_g1

0x8378,	// (0x00026d45) volume_small2_pane_g2

0x8381,	// (0x00026d4e) volume_small2_pane_g3

0x838a,	// (0x00026d57) volume_small2_pane_g4

0x8393,	// (0x00026d60) volume_small2_pane_g5

0x839c,	// (0x00026d69) volume_small2_pane_g6

0x83a5,	// (0x00026d72) volume_small2_pane_g7

0x83ae,	// (0x00026d7b) volume_small2_pane_g8

0x83b7,	// (0x00026d84) volume_small2_pane_g9

0x83c0,	// (0x00026d8d) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002e5c4) volume_small2_pane_g

0xc390,	// (0x0002ad5d) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0002ad78) fep_vkb_top_text_pane_t1_ParamLimits

0xc685,	// (0x0002b052) popup_preview_fixed_window_g3_ParamLimits

0xc685,	// (0x0002b052) popup_preview_fixed_window_g3

0x7ada,	// (0x000264a7) popup_toolbar_trans_pane

0xad42,	// (0x0002970f) aid_height_set_list_ParamLimits

0xad53,	// (0x00029720) aid_size_parent_ParamLimits

0x943e,	// (0x00027e0b) list_highlight_pane_cp2_ParamLimits

0x72de,	// (0x00025cab) set_content_pane_g1_ParamLimits

0x57b1,	// (0x0002417e) list_single_image_pane_ParamLimits

0x57b1,	// (0x0002417e) list_single_image_pane

0xcb65,	// (0x0002b532) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0002b532) aid_size_cell_image

0xcb72,	// (0x0002b53f) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0002b53f) grid_single_image_pane

0x312a,	// (0x00021af7) list_single_image_pane_g1_ParamLimits

0x312a,	// (0x00021af7) list_single_image_pane_g1

0x3136,	// (0x00021b03) list_single_image_pane_g2_ParamLimits

0x3136,	// (0x00021b03) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002e5d9) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002e5d9) list_single_image_pane_g

0xcb80,	// (0x0002b54d) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0002b54d) list_single_image_pane_t1

0xcb96,	// (0x0002b563) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0002b563) cell_image_list_pane

0xcbae,	// (0x0002b57b) cell_image_list_pane_g1

0xcbb7,	// (0x0002b584) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002e5de) cell_image_list_pane_g

0xcbc0,	// (0x0002b58d) aid_size_cell_tb_trans_pane

0x3104,	// (0x00021ad1) bg_tb_trans_pane

0xcbd2,	// (0x0002b59f) grid_tb_trans_pane

0x9976,	// (0x00028343) bg_tb_trans_pane_g1

0x997e,	// (0x0002834b) bg_tb_trans_pane_g2

0x9986,	// (0x00028353) bg_tb_trans_pane_g3

0x998e,	// (0x0002835b) bg_tb_trans_pane_g4

0x9996,	// (0x00028363) bg_tb_trans_pane_g5

0x99ae,	// (0x0002837b) bg_tb_trans_pane_g6

0x99b6,	// (0x00028383) bg_tb_trans_pane_g7

0x999e,	// (0x0002836b) bg_tb_trans_pane_g8

0x99a6,	// (0x00028373) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002e5e3) bg_tb_trans_pane_g

0xcbe6,	// (0x0002b5b3) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0002b5b3) cell_toolbar_trans_pane

0xbfc1,	// (0x0002a98e) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0002a5c6) list_form2_midp_pane_t1

0xbc07,	// (0x0002a5d4) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002e48c) list_form2_midp_pane_t

0xbc15,	// (0x0002a5e2) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0002a7a9) form2_midp_wait_pane_g1

0xbde5,	// (0x0002a7b2) form2_midp_wait_pane_g2

0xbdee,	// (0x0002a7bb) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002e4a1) form2_midp_wait_pane_g

0x15b3,	// (0x0001ff80) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0002a7f4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0002a803) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5767,	// (0x00024134) list_single_2graphic_im_pane_ParamLimits

0x5767,	// (0x00024134) list_single_2graphic_im_pane

0xcc0c,	// (0x0002b5d9) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0002b5d9) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0002b5ea) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0002b5ea) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0002b5f6) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0002b5f6) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002e5f6) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002e5f6) list_single_2graphic_im_pane_g

0xcc49,	// (0x0002b616) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0002b616) list_single_2graphic_im_pane_t1

0xc691,	// (0x0002b05e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc691,	// (0x0002b05e) list_single_graphic_2heading_pane_fp

0x5b85,	// (0x00024552) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5b85,	// (0x00024552) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0002b077) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b077) list_single_graphic_2heading_pane_fp_g2

0x4e84,	// (0x00023851) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e84,	// (0x00023851) list_single_graphic_2heading_pane_fp_g3

0x5b5a,	// (0x00024527) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5b5a,	// (0x00024527) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0002b083) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b083) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e524) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e524) list_single_graphic_2heading_pane_fp_g

0x5d52,	// (0x0002471f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5d52,	// (0x0002471f) list_single_graphic_2heading_pane_fp_t1

0x5bbd,	// (0x0002458a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5bbd,	// (0x0002458a) list_single_graphic_2heading_pane_fp_t2

0x5d68,	// (0x00024735) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5d68,	// (0x00024735) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002e5ff) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002e5ff) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0002aa1f) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0002aa1f) fep_hwr_write_pane_g5

0xc05e,	// (0x0002aa2b) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0002aa2b) fep_hwr_write_pane_g6

0xc940,	// (0x0002b30d) eswt_shell_pane_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0002b33e) heading_pane_cp70

0xca72,	// (0x0002b43f) popup_eswt_tasktip_window_t1_ParamLimits

0x94d1,	// (0x00027e9e) aid_touch_tab_arrow_left

0x94dd,	// (0x00027eaa) aid_touch_tab_arrow_right

0x6330,	// (0x00024cfd) title_pane_g3_ParamLimits

0x6330,	// (0x00024cfd) title_pane_g3

0x305d,	// (0x00021a2a) set_value_pane_g1

0x7ada,	// (0x000264a7) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0002b58d) aid_size_cell_tb_trans_pane_ParamLimits

0x3104,	// (0x00021ad1) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0002b59f) grid_tb_trans_pane_ParamLimits

0x1700,	// (0x000200cd) cont_note_pane_ParamLimits

0x1700,	// (0x000200cd) cont_note_pane

0x198a,	// (0x00020357) cont_snote2_single_text_pane_ParamLimits

0x198a,	// (0x00020357) cont_snote2_single_text_pane

0x198a,	// (0x00020357) cont_snote2_single_graphic_pane_ParamLimits

0x198a,	// (0x00020357) cont_snote2_single_graphic_pane

0x9fdc,	// (0x000289a9) cont_note_wait_pane_ParamLimits

0x9fdc,	// (0x000289a9) cont_note_wait_pane

0x9fdc,	// (0x000289a9) cont_note_image_pane_ParamLimits

0x9fdc,	// (0x000289a9) cont_note_image_pane

0xcc7a,	// (0x0002b647) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0002b647) popup_note2_window_g1

0xccab,	// (0x0002b678) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0002b678) popup_note2_window_t1

0xccf0,	// (0x0002b6bd) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0002b6bd) popup_note2_window_t2

0xcd35,	// (0x0002b702) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0002b702) popup_note2_window_t3

0xcd7a,	// (0x0002b747) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0002b747) popup_note2_window_t4

0x1784,	// (0x00020151) popup_note2_window_t5_ParamLimits

0x1784,	// (0x00020151) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002e60b) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002e60b) popup_note2_window_t

0xcda9,	// (0x0002b776) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0002b776) popup_note2_image_window_g1

0xcdb5,	// (0x0002b782) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0002b782) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002e616) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002e616) popup_note2_image_window_g

0xcdc7,	// (0x0002b794) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0002b794) popup_note2_image_window_t1

0xcddf,	// (0x0002b7ac) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0002b7ac) popup_note2_image_window_t2

0xcdf7,	// (0x0002b7c4) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0002b7c4) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002e61b) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002e61b) popup_note2_image_window_t

0x9fea,	// (0x000289b7) popup_note2_wait_window_g1_ParamLimits

0x9fea,	// (0x000289b7) popup_note2_wait_window_g1

0xce13,	// (0x0002b7e0) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0002b7e0) popup_note2_wait_window_g2

0xa002,	// (0x000289cf) popup_note2_wait_window_g3_ParamLimits

0xa002,	// (0x000289cf) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002e622) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002e622) popup_note2_wait_window_g

0xce1f,	// (0x0002b7ec) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0002b7ec) popup_note2_wait_window_t1

0xce3d,	// (0x0002b80a) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0002b80a) popup_note2_wait_window_t2

0xce5b,	// (0x0002b828) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0002b828) popup_note2_wait_window_t3

0xce6d,	// (0x0002b83a) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0002b83a) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002e629) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002e629) popup_note2_wait_window_t

0xce7f,	// (0x0002b84c) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0002b84c) wait_bar2_pane

0xce97,	// (0x0002b864) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0002b864) popup_snote2_single_text_window_g1

0xcebf,	// (0x0002b88c) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0002b88c) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0002b8d8) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0002b8d8) popup_snote2_single_text_window_t2

0xcf57,	// (0x0002b924) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0002b924) popup_snote2_single_text_window_t3

0xcf98,	// (0x0002b965) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0002b965) popup_snote2_single_text_window_t4

0xcfce,	// (0x0002b99b) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0002b99b) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002e632) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002e632) popup_snote2_single_text_window_t

0xcff9,	// (0x0002b9c6) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0002b9c6) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0002b9ee) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0002b9ee) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002e63d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002e63d) popup_snote2_single_graphic_window_g

0xd049,	// (0x0002ba16) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0002ba16) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0002ba62) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0002ba62) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0002b924) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0002b924) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0002b965) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0002b965) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0002b99b) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0002b99b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002e642) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002e642) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0002a492) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0002a492) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002e462) clock_nsta_pane_cp2_t

0x532b,	// (0x00023cf8) form_field_data_wide_pane_g1_ParamLimits

0x312a,	// (0x00021af7) form_field_data_wide_pane_g2_ParamLimits

0x312a,	// (0x00021af7) form_field_data_wide_pane_g2

0x3136,	// (0x00021b03) form_field_data_wide_pane_g3_ParamLimits

0x3136,	// (0x00021b03) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002e023) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002e023) form_field_data_wide_pane_g

0xb9a0,	// (0x0002a36d) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0002a36d) grid_touch_3_pane

0xd0e1,	// (0x0002baae) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0002baae) cell_touch_3_pane

0xbfc1,	// (0x0002a98e) cell_touch_3_pane_g1

0xbfc1,	// (0x0002a98e) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002e4e7) cell_touch_3_pane_g

0x17dc,	// (0x000201a9) cont_query_data_pane

0x17e4,	// (0x000201b1) cont_query_data_pane_cp1

0xd114,	// (0x0002bae1) button_value_adjust_pane_cp7

0xd11c,	// (0x0002bae9) query_popup_pane_cp3

0x6d48,	// (0x00025715) bg_popup_sub_pane_cp22_ParamLimits

0x6d5e,	// (0x0002572b) navi_navi_volume_pane_cp2

0x6d79,	// (0x00025746) popup_side_volume_key_window_g2

0x6d88,	// (0x00025755) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002e0b9) popup_side_volume_key_window_g

0x6da5,	// (0x00025772) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002e0c0) popup_side_volume_key_window_t

0x71a4,	// (0x00025b71) popup_side_volume_key_window_ParamLimits

0x4f6a,	// (0x00023937) list_double_graphic_pane_g4_ParamLimits

0x4f6a,	// (0x00023937) list_double_graphic_pane_g4

0x5798,	// (0x00024165) list_single_2heading_msg_pane_ParamLimits

0x5798,	// (0x00024165) list_single_2heading_msg_pane

0x5d88,	// (0x00024755) list_single_2heading_msg_pane_g1_ParamLimits

0x5d88,	// (0x00024755) list_single_2heading_msg_pane_g1

0x4d99,	// (0x00023766) list_single_2heading_msg_pane_g2_ParamLimits

0x4d99,	// (0x00023766) list_single_2heading_msg_pane_g2

0x5d94,	// (0x00024761) list_single_2heading_msg_pane_g3_ParamLimits

0x5d94,	// (0x00024761) list_single_2heading_msg_pane_g3

0x5da0,	// (0x0002476d) list_single_2heading_msg_pane_g4_ParamLimits

0x5da0,	// (0x0002476d) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002e64d) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002e64d) list_single_2heading_msg_pane_g

0x5db8,	// (0x00024785) list_single_2heading_msg_pane_t1_ParamLimits

0x5db8,	// (0x00024785) list_single_2heading_msg_pane_t1

0x5de0,	// (0x000247ad) list_single_2heading_msg_pane_t2_ParamLimits

0x5de0,	// (0x000247ad) list_single_2heading_msg_pane_t2

0x5e14,	// (0x000247e1) list_single_2heading_msg_pane_t3_ParamLimits

0x5e14,	// (0x000247e1) list_single_2heading_msg_pane_t3

0x5e4d,	// (0x0002481a) list_single_2heading_msg_pane_t4_ParamLimits

0x5e4d,	// (0x0002481a) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002e656) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002e656) list_single_2heading_msg_pane_t

0x1561,	// (0x0001ff2e) title_pane_g4_ParamLimits

0x1561,	// (0x0001ff2e) title_pane_g4

0x678a,	// (0x00025157) title_pane_stacon_g3_ParamLimits

0x678a,	// (0x00025157) title_pane_stacon_g3

0xcc3d,	// (0x0002b60a) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0002b60a) list_single_2graphic_im_pane_g4

0xaa4c,	// (0x00029419) popup_side_volume_key_window_cp

0xb2b0,	// (0x00029c7d) main_idle_act2_pane_t1

0x7bde,	// (0x000265ab) toolbar_button_pane_g10

0x668d,	// (0x0002505a) popup_toolbar_window_cp1

0xbab6,	// (0x0002a483) clock_nsta_pane_cp_t1

0xbab6,	// (0x0002a483) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002e45d) clock_nsta_pane_cp_t

0x6d5e,	// (0x0002572b) navi_navi_volume_pane_cp2_ParamLimits

0x6d6d,	// (0x0002573a) popup_side_volume_key_window_g1_ParamLimits

0x6d79,	// (0x00025746) popup_side_volume_key_window_g2_ParamLimits

0x6d88,	// (0x00025755) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002e0b9) popup_side_volume_key_window_g_ParamLimits

0x8053,	// (0x00026a20) fep_hwr_aid_pane

0x1513,	// (0x0001fee0) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0002a9ef) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0002aa01) fep_hwr_top_pane_g2_ParamLimits

0x810e,	// (0x00026adb) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002e4b2) fep_hwr_top_pane_g_ParamLimits

0x8123,	// (0x00026af0) fep_hwr_top_text_pane_ParamLimits

0xa801,	// (0x000291ce) aid_touch_tab_arrow_arrow_2

0xa80a,	// (0x000291d7) aid_touch_tab_arrow_left_2

0x8067,	// (0x00026a34) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x809e,	// (0x00026a6b) fep_hwr_prediction_pane

0xc18a,	// (0x0002ab57) fep_vkb_prediction_pane

0xc290,	// (0x0002ac5d) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0002ac5d) fep_vkb_side_pane_g3

0xc23c,	// (0x0002ac09) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc70a,	// (0x0002b0d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x0002b0e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002e55c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd143,	// (0x0002bb10) fep_hwr_prediction_pane_g1

0x83c9,	// (0x00026d96) fep_hwr_prediction_pane_g2

0x83d1,	// (0x00026d9e) fep_hwr_prediction_pane_g3

0x83d9,	// (0x00026da6) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002e65f) fep_hwr_prediction_pane_g

0xd143,	// (0x0002bb10) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0002bb1a) fep_vkb_prediction_pane_g2

0xd155,	// (0x0002bb22) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0002bb2a) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002e668) fep_vkb_prediction_pane_g

0x7ed3,	// (0x000268a0) slider_set_pane_g3

0x7ee7,	// (0x000268b4) slider_set_pane_g4

0x7eff,	// (0x000268cc) slider_set_pane_g5

0x7ed3,	// (0x000268a0) slider_set_pane_g6

0x7f15,	// (0x000268e2) slider_set_pane_g7

0xaed2,	// (0x0002989f) slider_form_pane_g3

0xaedb,	// (0x000298a8) slider_form_pane_g4

0xaee3,	// (0x000298b0) slider_form_pane_g5

0xaed2,	// (0x0002989f) slider_form_pane_g6

0xaeeb,	// (0x000298b8) slider_form_pane_g7

0xb574,	// (0x00029f41) slider_set_pane_vc_g3

0xb57d,	// (0x00029f4a) slider_set_pane_vc_g4

0xb586,	// (0x00029f53) slider_set_pane_vc_g5

0xb574,	// (0x00029f41) slider_set_pane_vc_g6

0xb58f,	// (0x00029f5c) slider_set_pane_vc_g7

0xb765,	// (0x0002a132) slider_form_pane_vc_g1

0xb76e,	// (0x0002a13b) slider_form_pane_vc_g2

0xb777,	// (0x0002a144) slider_form_pane_vc_g3

0xb765,	// (0x0002a132) slider_form_pane_vc_g4

0xb780,	// (0x0002a14d) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002e42f) slider_form_pane_vc_g

0x1543,	// (0x0001ff10) main_idle_act3_pane

0xd165,	// (0x0002bb32) ai3_links_pane

0xd16e,	// (0x0002bb3b) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0002bb3b) popup_ai3_data_window

0x1543,	// (0x0001ff10) grid_ai3_links_pane

0xd18c,	// (0x0002bb59) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0002bb59) cell_ai3_links_pane

0xd1a6,	// (0x0002bb73) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0002bb80) cell_ai3_links_pane_g1

0x1543,	// (0x0001ff10) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0002bba5) heading_ai3_data_pane

0xd1e0,	// (0x0002bbad) list_ai3_gene_pane

0xd1ec,	// (0x0002bbb9) popup_ai3_data_window_g1

0xd1f4,	// (0x0002bbc1) heading_ai3_data_pane_g1

0xd1fc,	// (0x0002bbc9) heading_ai3_data_pane_t1

0xd20a,	// (0x0002bbd7) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0002bbd7) list_double_ai3_gene_pane

0xd217,	// (0x0002bbe4) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0002bbe4) list_single_ai3_gene_pane

0xbf86,	// (0x0002a953) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0002a953) list_highlight_pane_cp7

0xd224,	// (0x0002bbf1) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0002bbf1) list_single_a13_gene_pane_t1

0xd23b,	// (0x0002bc08) list_single_ai3_gene_pane_g1

0xd244,	// (0x0002bc11) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002e671) list_single_ai3_gene_pane_g

0xd24c,	// (0x0002bc19) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0002bc19) list_double_ai3_gene_pane_g1

0xd258,	// (0x0002bc25) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0002bc25) list_double_ai3_gene_pane_t1

0xd274,	// (0x0002bc41) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0002bc41) list_double_ai3_gene_pane_t2

0xd289,	// (0x0002bc56) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0002bc56) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002e676) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002e676) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d7e,	// (0x0002474b) aid_size_min_col_2

0xd12d,	// (0x0002bafa) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0002bafa) aid_size_min_msg

0xc39c,	// (0x0002ad69) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0002ad69) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002e4e2) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002e4e2) fep_vkb_top_text_pane_g

0x1543,	// (0x0001ff10) main_hc_apps_shell_pane

0xd2a6,	// (0x0002bc73) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0002bc73) grid_hc_apps_pane

0xd2b8,	// (0x0002bc85) list_hc_apps_pane

0xd2c0,	// (0x0002bc8d) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0002bc8d) scroll_pane_cp37

0xd2cc,	// (0x0002bc99) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0002bc99) cell_hc_apps_pane

0xd380,	// (0x0002bd4d) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0002bd4d) cell_hc_apps_pane_g1

0xd3ac,	// (0x0002bd79) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0002bd79) cell_hc_apps_pane_g2

0xd3c8,	// (0x0002bd95) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0002bd95) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002e67d) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002e67d) cell_hc_apps_pane_g

0xd3ea,	// (0x0002bdb7) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0002bdb7) cell_hc_apps_pane_t1

0x1700,	// (0x000200cd) grid_highlight_pane_cp10_ParamLimits

0x1700,	// (0x000200cd) grid_highlight_pane_cp10

0xd42a,	// (0x0002bdf7) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0002bdf7) list_single_hc_apps_pane

0xd469,	// (0x0002be36) list_single_hc_apps_pane_g1

0x5e72,	// (0x0002483f) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002e684) list_single_hc_apps_pane_g

0x5e8b,	// (0x00024858) list_single_hc_apps_pane_g2_copy1

0x5ea7,	// (0x00024874) list_single_hc_apps_pane_t1

0x15b3,	// (0x0001ff80) bg_set_opt_pane_cp_ParamLimits

0x63e2,	// (0x00024daf) setting_slider_pane_t1_ParamLimits

0x63fb,	// (0x00024dc8) setting_slider_pane_t2_ParamLimits

0x6415,	// (0x00024de2) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002df06) setting_slider_pane_t_ParamLimits

0x642d,	// (0x00024dfa) slider_set_pane_ParamLimits

0x7497,	// (0x00025e64) control_pane_g5_ParamLimits

0x7497,	// (0x00025e64) control_pane_g5

0xad05,	// (0x000296d2) slider_set_pane_g1_ParamLimits

0x7ec7,	// (0x00026894) slider_set_pane_g2_ParamLimits

0x7ed3,	// (0x000268a0) slider_set_pane_g3_ParamLimits

0x7ee7,	// (0x000268b4) slider_set_pane_g4_ParamLimits

0x7eff,	// (0x000268cc) slider_set_pane_g5_ParamLimits

0x7ed3,	// (0x000268a0) slider_set_pane_g6_ParamLimits

0x7f15,	// (0x000268e2) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002e30c) slider_set_pane_g_ParamLimits

0x7289,	// (0x00025c56) navi_icon_text_pane_ParamLimits

0x9490,	// (0x00027e5d) aid_fill_nsta_2_ParamLimits

0x94d1,	// (0x00027e9e) aid_touch_tab_arrow_left_ParamLimits

0x94dd,	// (0x00027eaa) aid_touch_tab_arrow_right_ParamLimits

0x9549,	// (0x00027f16) clock_nsta_pane_ParamLimits

0xa7e3,	// (0x000291b0) navi_icon_pane_g1_ParamLimits

0xa7ef,	// (0x000291bc) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0002a5a0) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0002a5ac) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0002be36) list_single_hc_apps_pane_g1_ParamLimits

0x5e72,	// (0x0002483f) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002e684) list_single_hc_apps_pane_g_ParamLimits

0x5e8b,	// (0x00024858) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ea7,	// (0x00024874) list_single_hc_apps_pane_t1_ParamLimits

0x6216,	// (0x00024be3) popup_toolbar2_fixed_window_ParamLimits

0x6216,	// (0x00024be3) popup_toolbar2_fixed_window

0x7ad0,	// (0x0002649d) popup_toolbar2_float_window

0x1543,	// (0x0001ff10) bg_popup_sub_pane_cp27

0xd482,	// (0x0002be4f) grid_toolbar2_float_pane

0x1543,	// (0x0001ff10) bg_popup_sub_pane_cp26

0xd482,	// (0x0002be4f) grid_toolbar2_fixed_pane

0xd48a,	// (0x0002be57) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0002be57) cell_toolbar2_fixed_pane

0xd49a,	// (0x0002be67) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0002be70) toolbar2_fixed_button_pane

0x9976,	// (0x00028343) toolbar2_fixed_button_pane_g1

0x997e,	// (0x0002834b) toolbar2_fixed_button_pane_g2

0x9986,	// (0x00028353) toolbar2_fixed_button_pane_g3

0x998e,	// (0x0002835b) toolbar2_fixed_button_pane_g4

0x9996,	// (0x00028363) toolbar2_fixed_button_pane_g5

0x999e,	// (0x0002836b) toolbar2_fixed_button_pane_g6

0x99a6,	// (0x00028373) toolbar2_fixed_button_pane_g7

0x99ae,	// (0x0002837b) toolbar2_fixed_button_pane_g8

0x99b6,	// (0x00028383) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002e20e) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0002be78) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0002be78) cell_toolbar2_float_pane

0xd4bc,	// (0x0002be89) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0002be70) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0002aac5) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0002aac5) fep_vkb_accented_list_pane

0x8285,	// (0x00026c52) bg_popup_fep_shadow_pane_g9

0x9117,	// (0x00027ae4) bg_popup_fep_shadow_pane_cp3

0x32b9,	// (0x00021c86) list_accented_list_pane

0xd4c5,	// (0x0002be92) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0002be92) list_single_accented_list_pane

0x9117,	// (0x00027ae4) list_highlight_pane_cp10

0xd4d6,	// (0x0002bea3) list_single_accented_list_pane_t1

0x7a16,	// (0x000263e3) popup_slider_window_ParamLimits

0x7a16,	// (0x000263e3) popup_slider_window

0xd124,	// (0x0002baf1) aid_indentation_list_msg

0xd5a6,	// (0x0002bf73) bg_popup_window_pane_cp19

0xd612,	// (0x0002bfdf) popup_slider_window_g1

0xd62e,	// (0x0002bffb) popup_slider_window_g2

0xd64a,	// (0x0002c017) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002e689) popup_slider_window_g

0xd6b0,	// (0x0002c07d) popup_slider_window_t1

0xd724,	// (0x0002c0f1) small_volume_slider_vertical_pane

0xbfc1,	// (0x0002a98e) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0002a98e) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0002c10d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002e69b) small_volume_slider_vertical_pane_g

0x5fce,	// (0x0002499b) area_side_right_pane_ParamLimits

0x5fce,	// (0x0002499b) area_side_right_pane

0x83e1,	// (0x00026dae) aid_size_side_button_ParamLimits

0x83e1,	// (0x00026dae) aid_size_side_button

0x83f5,	// (0x00026dc2) grid_sctrl_middle_pane_ParamLimits

0x83f5,	// (0x00026dc2) grid_sctrl_middle_pane

0x8414,	// (0x00026de1) sctrl_sk_bottom_pane

0x8425,	// (0x00026df2) sctrl_sk_top_pane

0x8437,	// (0x00026e04) aid_touch_sctrl_top

0x1700,	// (0x000200cd) bg_sctrl_sk_pane_ParamLimits

0x1700,	// (0x000200cd) bg_sctrl_sk_pane

0x8444,	// (0x00026e11) sctrl_sk_top_pane_g1

0x8451,	// (0x00026e1e) sctrl_sk_top_pane_t1

0x8437,	// (0x00026e04) aid_touch_sctrl_bottom

0x1700,	// (0x000200cd) bg_sctrl_sk_pane_cp_ParamLimits

0x1700,	// (0x000200cd) bg_sctrl_sk_pane_cp

0x846c,	// (0x00026e39) sctrl_sk_bottom_pane_g1

0x8451,	// (0x00026e1e) sctrl_sk_bottom_pane_t1

0x8475,	// (0x00026e42) cell_sctrl_middle_pane_ParamLimits

0x8475,	// (0x00026e42) cell_sctrl_middle_pane

0x8492,	// (0x00026e5f) aid_touch_sctrl_middle_ParamLimits

0x8492,	// (0x00026e5f) aid_touch_sctrl_middle

0x3104,	// (0x00021ad1) bg_sctrl_middle_pane_ParamLimits

0x3104,	// (0x00021ad1) bg_sctrl_middle_pane

0xc23c,	// (0x0002ac09) cell_sctrl_middle_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) cell_sctrl_middle_pane_g1

0x84a4,	// (0x00026e71) cell_sctrl_middle_pane_g2_ParamLimits

0x84a4,	// (0x00026e71) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002e6a7) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002e6a7) cell_sctrl_middle_pane_g

0x9976,	// (0x00028343) bg_sctrl_middle_pane_g1

0x997e,	// (0x0002834b) bg_sctrl_middle_pane_g2

0x9986,	// (0x00028353) bg_sctrl_middle_pane_g3

0x998e,	// (0x0002835b) bg_sctrl_middle_pane_g4

0x9996,	// (0x00028363) bg_sctrl_middle_pane_g5

0x999e,	// (0x0002836b) bg_sctrl_middle_pane_g6

0x99a6,	// (0x00028373) bg_sctrl_middle_pane_g7

0x99ae,	// (0x0002837b) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002e6ac) bg_sctrl_middle_pane_g

0x99b6,	// (0x00028383) bg_sctrl_middle_pane_g8_copy1

0x9976,	// (0x00028343) bg_sctrl_sk_pane_g1

0x997e,	// (0x0002834b) bg_sctrl_sk_pane_g2

0x9986,	// (0x00028353) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002e20e) bg_sctrl_sk_pane_g

0x1b48,	// (0x00020515) aid_size_touch_scroll_bar

0x998e,	// (0x0002835b) bg_sctrl_sk_pane_g4

0x9996,	// (0x00028363) bg_sctrl_sk_pane_g5

0x999e,	// (0x0002836b) bg_sctrl_sk_pane_g6

0x99a6,	// (0x00028373) bg_sctrl_sk_pane_g7

0x99ae,	// (0x0002837b) bg_sctrl_sk_pane_g8

0x99b6,	// (0x00028383) bg_sctrl_sk_pane_g9

0x762b,	// (0x00025ff8) popup_fep_china_hwr2_fs_candidate_window

0x7635,	// (0x00026002) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7635,	// (0x00026002) popup_fep_china_hwr2_fs_control_window

0xc23c,	// (0x0002ac09) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002e6a2) sctrl_sk_top_pane_g

0xd749,	// (0x0002c116) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0002c116) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0002c129) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0002c129) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0002c142) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0002c142) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0002c154) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0002c154) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0002c164) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0002c16c) aid_fep_china_hwr2_fs_candi_cell

0x1543,	// (0x0001ff10) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0002c176) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0002c180) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0002c180) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0002a98e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0002c198) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0002c198) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0002c1a6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0002c1a6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002e6bd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002e6bd) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0002c1bc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0002c1bc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0002c1d1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0002c1d1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002e6c2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002e6c2) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0002c1ed) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0002c1f5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0002c1fd) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002e6c7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0002c205) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0002c205) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0002c224) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0002c22c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0002a98e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0002a98e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002e4e7) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0002c234) cell_fep_china_hwr2_fs_candidate_grid_t1

0x955c,	// (0x00027f29) clock_nsta_pane_cp_24_ParamLimits

0x955c,	// (0x00027f29) clock_nsta_pane_cp_24

0x95dc,	// (0x00027fa9) indicator_nsta_pane_cp_24_ParamLimits

0x95dc,	// (0x00027fa9) indicator_nsta_pane_cp_24

0xa65f,	// (0x0002902c) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002e273) heading_pane_g

0xb0f7,	// (0x00029ac4) grid_sct_catagory_button_pane

0xb129,	// (0x00029af6) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0002a5ee) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0002a5ee) button_value_adjust_pane_cp5

0xbd06,	// (0x0002a6d3) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0002c242) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0002c242) cell_sct_catagory_button_pane

0xbf86,	// (0x0002a953) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0002a953) bg_button_pane_cp01

0xbfc1,	// (0x0002a98e) cell_sct_catagory_button_pane_g1

0x7a57,	// (0x00026424) popup_tb_extension_window

0xd887,	// (0x0002c254) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0002c254) aid_size_cell_ext

0x1700,	// (0x000200cd) bg_tb_trans_pane_cp1_ParamLimits

0x1700,	// (0x000200cd) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0002c274) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0002c274) grid_tb_ext_pane

0xd8d5,	// (0x0002c2a2) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0002c2a2) cell_tb_ext_pane

0xd8ec,	// (0x0002c2b9) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0002c2b9) cell_tb_ext_pane_g1

0xd909,	// (0x0002c2d6) cell_tb_ext_pane_t1

0x1700,	// (0x000200cd) list_highlight_pane_cp11_ParamLimits

0x1700,	// (0x000200cd) list_highlight_pane_cp11

0x6235,	// (0x00024c02) popup_uni_indicator_window_ParamLimits

0x6235,	// (0x00024c02) popup_uni_indicator_window

0x3104,	// (0x00021ad1) bg_popup_sub_pane_cp14

0xd924,	// (0x0002c2f1) list_uniindi_pane

0xd930,	// (0x0002c2fd) uniindi_top_pane

0x1700,	// (0x000200cd) bg_uniindi_top_pane

0xd951,	// (0x0002c31e) uniindi_top_pane_g1

0xd967,	// (0x0002c334) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002e6ce) uniindi_top_pane_g

0xd991,	// (0x0002c35e) uniindi_top_pane_t1

0xd9bd,	// (0x0002c38a) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0002c38a) list_single_uniindi_pane

0xbfc1,	// (0x0002a98e) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0002c39d) list_single_uniindi_pane_g1

0xd9e3,	// (0x0002c3b0) list_single_uniindi_pane_t1

0x1543,	// (0x0001ff10) control_bg_pane

0xda08,	// (0x0002c3d5) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0002c3de) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0002c3e7) control_bg_pane_g1

0xda23,	// (0x0002c3f0) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002e6d7) control_bg_pane_g

0xba59,	// (0x0002a426) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0002a434) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002e44b) cell_indicator_nsta_pane_g_ParamLimits

0x5b47,	// (0x00024514) form2_midp_time_pane_t1_ParamLimits

0x198a,	// (0x00020357) main_idle_act4_pane_ParamLimits

0x198a,	// (0x00020357) main_idle_act4_pane

0x7a57,	// (0x00026424) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0002c294) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0002c294) tb_ext_find_pane

0xda2c,	// (0x0002c3f9) ai_gene_pane_1_cp1

0x9261,	// (0x00027c2e) ai_gene_pane_2_cp1

0xda34,	// (0x0002c401) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0002c40a) list_single_idle_plugin_notification_pane

0xda46,	// (0x0002c413) list_single_idle_plugin_player_pane

0xda4f,	// (0x0002c41c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0002c41c) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0002c43e) main_idle_act4_pane_t1

0xda83,	// (0x0002c450) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002e6dc) main_idle_act4_pane_t

0xda95,	// (0x0002c462) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0002c462) middle_sk_idle_act4_pane

0xdaab,	// (0x0002c478) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0002c492) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0002c492) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0002c4a6) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0002c4ae) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0002c4b6) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0002c4be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002e6e1) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0002ac09) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0002c522) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0002c522) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002e704) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002e704) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0002c52e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0002c52e) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0002c54b) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0002c54b) grid_ai_shortcut_pane

0xdb97,	// (0x0002c564) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0002c564) list_highlight_pane_cp16

0xdba4,	// (0x0002c571) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0002c571) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0002c57d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0002c57d) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0002c597) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0002c597) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002e709) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002e709) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0002c5aa) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0002c5aa) cell_ai_shortcut_pane

0xdc00,	// (0x0002c5cd) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0002c5cd) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0002c3f9) ai_gene_pane_1_cp2

0xdc22,	// (0x0002c5ef) ai_gene_pane_2_cp2

0xdc2a,	// (0x0002c5f7) list_highlight_pane_cp15

0xdc33,	// (0x0002c600) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0002c5f7) list_highlight_pane_cp17

0xdc3b,	// (0x0002c608) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0002c610) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x00029d2b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002e710) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0002c618) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0002c626) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0002c634) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0002c642) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002e715) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0002c650) wait_bar_pane_cp15

0xdc8b,	// (0x0002c658) grid_ai_notification_pane

0xb35e,	// (0x00029d2b) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0002c661) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0002c661) cell_ai_notification_pane

0xdca1,	// (0x0002c66e) cell_ai_notification_pane_g1

0xdca9,	// (0x0002c676) cell_ai_notification_pane_t1

0xdcb7,	// (0x0002c684) tb_ext_find_button_pane

0xdcbf,	// (0x0002c68c) tb_ext_find_pane_g1

0xdcc7,	// (0x0002c694) tb_ext_find_pane_t1

0x6bc9,	// (0x00025596) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0002c6a2) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002e71e) tb_ext_find_button_pane_g

0xda71,	// (0x0002c43e) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0002c450) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002e6dc) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0002c478) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0002c486) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0002c486) sat_plugin_idle_act4_pane

0xdcde,	// (0x0002c6ab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0002c6ab) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0002c6be) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0002c6be) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0002c6d1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0002c6d1) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0002c6e4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0002c6e4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002e723) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002e723) sat_plugin_idle_act4_pane_t

0x6166,	// (0x00024b33) popup_battery_window_ParamLimits

0x6166,	// (0x00024b33) popup_battery_window

0x1700,	// (0x000200cd) bg_popup_sub_pane_cp25_ParamLimits

0x1700,	// (0x000200cd) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0002c6f7) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0002c6f7) popup_battery_window_g1

0xdd36,	// (0x0002c703) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0002c703) popup_battery_window_t1

0xdd48,	// (0x0002c715) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0002c715) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002e72c) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002e72c) popup_battery_window_t

0x912b,	// (0x00027af8) midp_canvas_pane_ParamLimits

0x91a3,	// (0x00027b70) midp_keypad_pane_ParamLimits

0x91a3,	// (0x00027b70) midp_keypad_pane

0x943e,	// (0x00027e0b) main_midp_pane_ParamLimits

0xbad4,	// (0x0002a4a1) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0002c732) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0002c732) aid_size_cell_midp_keypad

0xdd7f,	// (0x0002c74c) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0002c74c) midp_keyp_game_grid_pane

0xdd9f,	// (0x0002c76c) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0002c76c) midp_keyp_rocker_pane

0xddce,	// (0x0002c79b) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0002c79b) midp_keyp_sk_left_pane

0xde2a,	// (0x0002c7f7) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0002c7f7) midp_keyp_sk_right_pane

0x1543,	// (0x0001ff10) bg_button_pane_cp03

0xde86,	// (0x0002c853) midp_keyp_sk_left_pane_g1

0x1543,	// (0x0001ff10) bg_button_pane_cp04

0xde86,	// (0x0002c853) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0002a98e) midp_keyp_rocker_pane_g1

0xde8e,	// (0x0002c85b) keyp_game_cell_pane_ParamLimits

0xde8e,	// (0x0002c85b) keyp_game_cell_pane

0x1543,	// (0x0001ff10) bg_button_pane_cp02

0xdea1,	// (0x0002c86e) keyp_game_cell_pane_g1

0x61b0,	// (0x00024b7d) popup_fep_vkb2_window_ParamLimits

0x61b0,	// (0x00024b7d) popup_fep_vkb2_window

0x84c2,	// (0x00026e8f) aid_size_cell_vkb2_ParamLimits

0x84c2,	// (0x00026e8f) aid_size_cell_vkb2

0x850e,	// (0x00026edb) popup_fep_vkb2_window_g1_ParamLimits

0x850e,	// (0x00026edb) popup_fep_vkb2_window_g1

0x8556,	// (0x00026f23) vkb2_area_bottom_pane_ParamLimits

0x8556,	// (0x00026f23) vkb2_area_bottom_pane

0x85aa,	// (0x00026f77) vkb2_area_keypad_pane_ParamLimits

0x85aa,	// (0x00026f77) vkb2_area_keypad_pane

0x85f0,	// (0x00026fbd) vkb2_area_top_pane_ParamLimits

0x85f0,	// (0x00026fbd) vkb2_area_top_pane

0x8670,	// (0x0002703d) vkb2_top_entry_pane_ParamLimits

0x8670,	// (0x0002703d) vkb2_top_entry_pane

0x869a,	// (0x00027067) vkb2_top_grid_left_pane_ParamLimits

0x869a,	// (0x00027067) vkb2_top_grid_left_pane

0x86b9,	// (0x00027086) vkb2_top_grid_right_pane_ParamLimits

0x86b9,	// (0x00027086) vkb2_top_grid_right_pane

0x86d8,	// (0x000270a5) vkb2_cell_keypad_pane_ParamLimits

0x86d8,	// (0x000270a5) vkb2_cell_keypad_pane

0x87a9,	// (0x00027176) vkb2_area_bottom_grid_pane_ParamLimits

0x87a9,	// (0x00027176) vkb2_area_bottom_grid_pane

0x87cf,	// (0x0002719c) vkb2_area_bottom_pane_g1_ParamLimits

0x87cf,	// (0x0002719c) vkb2_area_bottom_pane_g1

0x87f3,	// (0x000271c0) vkb2_area_bottom_pane_g2_ParamLimits

0x87f3,	// (0x000271c0) vkb2_area_bottom_pane_g2

0x8821,	// (0x000271ee) vkb2_area_bottom_pane_g3_ParamLimits

0x8821,	// (0x000271ee) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002e731) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002e731) vkb2_area_bottom_pane_g

0x8882,	// (0x0002724f) vkb2_top_cell_left_pane_ParamLimits

0x8882,	// (0x0002724f) vkb2_top_cell_left_pane

0xdeb2,	// (0x0002c87f) vkb2_top_entry_pane_g1_ParamLimits

0xdeb2,	// (0x0002c87f) vkb2_top_entry_pane_g1

0xdec0,	// (0x0002c88d) vkb2_top_entry_pane_t1_ParamLimits

0xdec0,	// (0x0002c88d) vkb2_top_entry_pane_t1

0xdef2,	// (0x0002c8bf) vkb2_top_entry_pane_t2_ParamLimits

0xdef2,	// (0x0002c8bf) vkb2_top_entry_pane_t2

0xdf24,	// (0x0002c8f1) vkb2_top_entry_pane_t3_ParamLimits

0xdf24,	// (0x0002c8f1) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002e738) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002e738) vkb2_top_entry_pane_t

0x88cf,	// (0x0002729c) vkb2_top_grid_right_pane_g1_ParamLimits

0x88cf,	// (0x0002729c) vkb2_top_grid_right_pane_g1

0x88e5,	// (0x000272b2) vkb2_top_grid_right_pane_g2_ParamLimits

0x88e5,	// (0x000272b2) vkb2_top_grid_right_pane_g2

0x88fd,	// (0x000272ca) vkb2_top_grid_right_pane_g3_ParamLimits

0x88fd,	// (0x000272ca) vkb2_top_grid_right_pane_g3

0x8915,	// (0x000272e2) vkb2_top_grid_right_pane_g4_ParamLimits

0x8915,	// (0x000272e2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002e73f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002e73f) vkb2_top_grid_right_pane_g

0x892b,	// (0x000272f8) vkb2_top_cell_left_pane_g1

0x8942,	// (0x0002730f) vkb2_cell_keypad_pane_g1_ParamLimits

0x8942,	// (0x0002730f) vkb2_cell_keypad_pane_g1

0xdf48,	// (0x0002c915) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf48,	// (0x0002c915) vkb2_cell_keypad_pane_t1

0x8950,	// (0x0002731d) vkb2_cell_bottom_grid_pane_ParamLimits

0x8950,	// (0x0002731d) vkb2_cell_bottom_grid_pane

0x8989,	// (0x00027356) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0002c4c6) aid_call2_pane_cp02

0xdb01,	// (0x0002c4ce) aid_call_pane_cp02

0xdb09,	// (0x0002c4d6) clock_digital_number_pane_cp10

0xdb11,	// (0x0002c4de) clock_digital_number_pane_cp11

0xdb19,	// (0x0002c4e6) clock_digital_number_pane_cp12

0xdb21,	// (0x0002c4ee) clock_digital_number_pane_cp13

0xdb29,	// (0x0002c4f6) clock_digital_separator_pane_cp10

0x6bc9,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g1

0x6bc9,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0002c4fe) popup_clock_digital_analogue_window_cp2_g3

0x6bc9,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0002c4fe) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002e6f4) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0002c506) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0002c514) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002e6ff) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0002a98e) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0002a98e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e4e7) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0002a98e) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0002a98e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e4e7) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0002c340) uniindi_top_pane_g3

0xd984,	// (0x0002c351) uniindi_top_pane_g4

0x8763,	// (0x00027130) vkb2_row_keypad_pane_ParamLimits

0x8763,	// (0x00027130) vkb2_row_keypad_pane

0x89a5,	// (0x00027372) vkb2_cell_t_keypad_pane_ParamLimits

0x89a5,	// (0x00027372) vkb2_cell_t_keypad_pane

0x89b5,	// (0x00027382) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x89b5,	// (0x00027382) vkb2_cell_t_keypad_pane_cp08

0x89ca,	// (0x00027397) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x89ca,	// (0x00027397) vkb2_cell_t_keypad_pane_cp09

0x89de,	// (0x000273ab) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x89de,	// (0x000273ab) vkb2_cell_t_keypad_pane_cp01

0x89ef,	// (0x000273bc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x89ef,	// (0x000273bc) vkb2_cell_t_keypad_pane_cp02

0x8a00,	// (0x000273cd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8a00,	// (0x000273cd) vkb2_cell_t_keypad_pane_cp03

0x8a11,	// (0x000273de) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8a11,	// (0x000273de) vkb2_cell_t_keypad_pane_cp04

0x8a22,	// (0x000273ef) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8a22,	// (0x000273ef) vkb2_cell_t_keypad_pane_cp05

0x8a33,	// (0x00027400) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8a33,	// (0x00027400) vkb2_cell_t_keypad_pane_cp06

0x8a46,	// (0x00027413) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8a46,	// (0x00027413) vkb2_cell_t_keypad_pane_cp07

0x8a5b,	// (0x00027428) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8a5b,	// (0x00027428) vkb2_cell_t_keypad_pane_cp10

0xc23c,	// (0x0002ac09) vkb2_cell_t_keypad_pane_g1

0xdf5f,	// (0x0002c92c) vkb2_cell_t_keypad_pane_t1

0x1543,	// (0x0001ff10) popup_grid_graphic2_window

0xdf71,	// (0x0002c93e) aid_size_cell_graphic2_ParamLimits

0xdf71,	// (0x0002c93e) aid_size_cell_graphic2

0xdfa9,	// (0x0002c976) bg_popup_window_pane_cp21_ParamLimits

0xdfa9,	// (0x0002c976) bg_popup_window_pane_cp21

0xdfb7,	// (0x0002c984) graphic2_pages_pane_ParamLimits

0xdfb7,	// (0x0002c984) graphic2_pages_pane

0xdffd,	// (0x0002c9ca) grid_graphic2_control_pane_ParamLimits

0xdffd,	// (0x0002c9ca) grid_graphic2_control_pane

0xe03b,	// (0x0002ca08) grid_graphic2_pane_ParamLimits

0xe03b,	// (0x0002ca08) grid_graphic2_pane

0xe0b1,	// (0x0002ca7e) cell_graphic2_pane

0x1543,	// (0x0001ff10) main_comp_mode_pane

0xd1e0,	// (0x0002bbad) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0002bf73) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0002bf7f) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0002bf7f) bg_touch_area_indi_pane

0xd5c8,	// (0x0002bf95) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0002bf95) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0002bfab) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0002bfab) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0002bfc5) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0002bfc5) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0002bfdf) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0002bffb) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0002c017) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002e689) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0002c07d) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0002c0f1) small_volume_slider_vertical_pane_ParamLimits

0xe0b1,	// (0x0002ca7e) cell_graphic2_pane_ParamLimits

0xe105,	// (0x0002cad2) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x0002cad2) bg_button_pane_cp10

0xe11a,	// (0x0002cae7) bg_button_pane_cp11_ParamLimits

0xe11a,	// (0x0002cae7) bg_button_pane_cp11

0xe12f,	// (0x0002cafc) graphic2_pages_pane_g1_ParamLimits

0xe12f,	// (0x0002cafc) graphic2_pages_pane_g1

0xe14a,	// (0x0002cb17) graphic2_pages_pane_g2_ParamLimits

0xe14a,	// (0x0002cb17) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002e74d) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002e74d) graphic2_pages_pane_g

0xe162,	// (0x0002cb2f) graphic2_pages_pane_t1_ParamLimits

0xe162,	// (0x0002cb2f) graphic2_pages_pane_t1

0xe178,	// (0x0002cb45) cell_graphic2_control_pane_ParamLimits

0xe178,	// (0x0002cb45) cell_graphic2_control_pane

0xe198,	// (0x0002cb65) cell_graphic2_pane_g1_ParamLimits

0xe198,	// (0x0002cb65) cell_graphic2_pane_g1

0xe1a5,	// (0x0002cb72) cell_graphic2_pane_g2_ParamLimits

0xe1a5,	// (0x0002cb72) cell_graphic2_pane_g2

0xe1b2,	// (0x0002cb7f) cell_graphic2_pane_g3_ParamLimits

0xe1b2,	// (0x0002cb7f) cell_graphic2_pane_g3

0xe1bf,	// (0x0002cb8c) cell_graphic2_pane_g4_ParamLimits

0xe1bf,	// (0x0002cb8c) cell_graphic2_pane_g4

0xe1cc,	// (0x0002cb99) cell_graphic2_pane_g5_ParamLimits

0xe1cc,	// (0x0002cb99) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002e752) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002e752) cell_graphic2_pane_g

0xe1e4,	// (0x0002cbb1) cell_graphic2_pane_t1_ParamLimits

0xe1e4,	// (0x0002cbb1) cell_graphic2_pane_t1

0x99ea,	// (0x000283b7) grid_highlight_pane_cp11_ParamLimits

0x99ea,	// (0x000283b7) grid_highlight_pane_cp11

0x1700,	// (0x000200cd) bg_button_pane_cp05

0xe21a,	// (0x0002cbe7) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0002a98e) bg_touch_area_indi_pane_g1

0xe242,	// (0x0002cc0f) aid_cmod_rocker_key_size

0xe24c,	// (0x0002cc19) aid_cmode_itu_key_size

0xe256,	// (0x0002cc23) main_cmode_video_pane

0xe260,	// (0x0002cc2d) main_comp_mode_itu_pane

0xe26c,	// (0x0002cc39) main_comp_mode_rocker_pane

0xe278,	// (0x0002cc45) cell_cmode_rocker_pane_ParamLimits

0xe278,	// (0x0002cc45) cell_cmode_rocker_pane

0xe28c,	// (0x0002cc59) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0002cc59) cell_cmode_itu_pane

0x3104,	// (0x00021ad1) bg_button_pane_cp06_ParamLimits

0x3104,	// (0x00021ad1) bg_button_pane_cp06

0xc23c,	// (0x0002ac09) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0002c198) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0002c198) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002e762) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002e762) cell_cmode_rocker_pane_g

0x1543,	// (0x0001ff10) bg_button_pane_cp07

0xe2a3,	// (0x0002cc70) cell_cmode_itu_pane_g1

0xe2ac,	// (0x0002cc79) cell_cmode_itu_pane_t1

0xe2ba,	// (0x0002cc87) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002e767) cell_cmode_itu_pane_t

0xd9f8,	// (0x0002c3c5) aid_touch_ctrl_left

0xda00,	// (0x0002c3cd) aid_touch_ctrl_right

0x1543,	// (0x0001ff10) compa_mode_pane

0xe2c8,	// (0x0002cc95) aid_cmod_rocker_key_size_cp

0xe2d2,	// (0x0002cc9f) aid_cmode_itu_key_size_cp

0xe2dc,	// (0x0002cca9) compa_mode_pane_g1

0xe2e4,	// (0x0002ccb1) compa_mode_pane_g2

0xe2ec,	// (0x0002ccb9) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002e76c) compa_mode_pane_g

0xe2f4,	// (0x0002ccc1) main_comp_mode_itu_pane_cp

0xe2fc,	// (0x0002ccc9) main_comp_mode_rocker_pane_cp

0xe304,	// (0x0002ccd1) cell_cmode_itu_pane_cp_ParamLimits

0xe304,	// (0x0002ccd1) cell_cmode_itu_pane_cp

0xe319,	// (0x0002cce6) cell_cmode_rocker_pane_cp_ParamLimits

0xe319,	// (0x0002cce6) cell_cmode_rocker_pane_cp

0x3104,	// (0x00021ad1) bg_button_pane_cp06_cp_ParamLimits

0x3104,	// (0x00021ad1) bg_button_pane_cp06_cp

0xc23c,	// (0x0002ac09) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0002ac09) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0002a98e) cell_cmode_rocker_pane_g2_cp

0x1543,	// (0x0001ff10) bg_button_pane_cp07_cp

0xe32b,	// (0x0002ccf8) cell_cmode_itu_pane_g1_cp

0xe334,	// (0x0002cd01) cell_cmode_itu_pane_t1_cp

0xe334,	// (0x0002cd01) cell_cmode_itu_pane_t2_cp

0xaec1,	// (0x0002988e) settings_code_pane_cp2

0x15b3,	// (0x0001ff80) bg_popup_window_pane_cp3_ParamLimits

0x1914,	// (0x000202e1) heading_pane_cp3_ParamLimits

0x1923,	// (0x000202f0) listscroll_popup_graphic_pane_ParamLimits

0x8053,	// (0x00026a20) fep_hwr_aid_pane_ParamLimits

0x8437,	// (0x00026e04) aid_touch_sctrl_top_ParamLimits

0x8444,	// (0x00026e11) sctrl_sk_top_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002e6a2) sctrl_sk_top_pane_g_ParamLimits

0x8451,	// (0x00026e1e) sctrl_sk_top_pane_t1_ParamLimits

0x8437,	// (0x00026e04) aid_touch_sctrl_bottom_ParamLimits

0x8451,	// (0x00026e1e) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0002c30a) aid_area_touch_clock

0x8636,	// (0x00027003) aid_vkb2_area_top_pane_cell_ParamLimits

0x8636,	// (0x00027003) aid_vkb2_area_top_pane_cell

0x8785,	// (0x00027152) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8785,	// (0x00027152) aid_vkb2_area_bottom_pane_cell

0xdeaa,	// (0x0002c877) popup_char_count_window

0xe342,	// (0x0002cd0f) popup_char_count_window_g1

0xe34b,	// (0x0002cd18) popup_char_count_window_g2

0xe354,	// (0x0002cd21) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002e773) popup_char_count_window_g

0xe35d,	// (0x0002cd2a) popup_char_count_window_t1

0x84ec,	// (0x00026eb9) popup_fep_char_preview_window_ParamLimits

0x84ec,	// (0x00026eb9) popup_fep_char_preview_window

0x8654,	// (0x00027021) vkb2_top_candi_pane_ParamLimits

0x8654,	// (0x00027021) vkb2_top_candi_pane

0xe36b,	// (0x0002cd38) cell_vkb2_top_candi_pane_ParamLimits

0xe36b,	// (0x0002cd38) cell_vkb2_top_candi_pane

0x9fdc,	// (0x000289a9) bg_popup_fep_char_preview_window_ParamLimits

0x9fdc,	// (0x000289a9) bg_popup_fep_char_preview_window

0x8a70,	// (0x0002743d) popup_fep_char_preview_window_t1_ParamLimits

0x8a70,	// (0x0002743d) popup_fep_char_preview_window_t1

0xe3b9,	// (0x0002cd86) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0002cd8e) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x0002cd96) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0002cd9e) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x0002cda6) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0002cdae) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0002cdb6) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0002cdbe) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0002cdc6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002e77a) bg_popup_fep_char_preview_window_g

0xc23c,	// (0x0002ac09) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc23c,	// (0x0002ac09) cell_vkb2_top_candi_pane_g1

0xc57d,	// (0x0002af4a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc57d,	// (0x0002af4a) cell_vkb2_top_candi_pane_g2

0xc59e,	// (0x0002af6b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc59e,	// (0x0002af6b) cell_vkb2_top_candi_pane_g3

0x8ab2,	// (0x0002747f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8ab2,	// (0x0002747f) cell_vkb2_top_candi_pane_g4

0xe401,	// (0x0002cdce) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe401,	// (0x0002cdce) cell_vkb2_top_candi_pane_g5

0xd7cb,	// (0x0002c198) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7cb,	// (0x0002c198) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002e78f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002e78f) cell_vkb2_top_candi_pane_g

0x8ad3,	// (0x000274a0) cell_vkb2_top_candi_pane_t1

0x7eb3,	// (0x00026880) aid_size_touch_slider_mark_ParamLimits

0x7eb3,	// (0x00026880) aid_size_touch_slider_mark

0xdfed,	// (0x0002c9ba) grid_graphic2_catg_pane_ParamLimits

0xdfed,	// (0x0002c9ba) grid_graphic2_catg_pane

0xe08b,	// (0x0002ca58) popup_grid_graphic2_window_t1_ParamLimits

0xe08b,	// (0x0002ca58) popup_grid_graphic2_window_t1

0xe09d,	// (0x0002ca6a) popup_grid_graphic2_window_t2_ParamLimits

0xe09d,	// (0x0002ca6a) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002e748) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002e748) popup_grid_graphic2_window_t

0x1700,	// (0x000200cd) bg_button_pane_cp05_ParamLimits

0xe21a,	// (0x0002cbe7) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0002cdef) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0002cdef) cell_graphic2_catg_pane

0x1543,	// (0x0001ff10) bg_button_pane_cp12

0xe434,	// (0x0002ce01) cell_graphic2_catg_pane_g1

0xd909,	// (0x0002c2d6) cell_tb_ext_pane_t1_ParamLimits

0x88a2,	// (0x0002726f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x88a2,	// (0x0002726f) vkb2_top_cell_right_narrow_pane

0x88ba,	// (0x00027287) vkb2_top_cell_right_wide_pane_ParamLimits

0x88ba,	// (0x00027287) vkb2_top_cell_right_wide_pane

0x8045,	// (0x00026a12) bg_vkb2_func_pane_ParamLimits

0x8045,	// (0x00026a12) bg_vkb2_func_pane

0x892b,	// (0x000272f8) vkb2_top_cell_left_pane_g1_ParamLimits

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp03

0x8989,	// (0x00027356) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x997e,	// (0x0002834b) bg_vkb2_func_pane_g1

0x9986,	// (0x00028353) bg_vkb2_func_pane_g2

0x9996,	// (0x00028363) bg_vkb2_func_pane_g3

0x998e,	// (0x0002835b) bg_vkb2_func_pane_g4

0x999e,	// (0x0002836b) bg_vkb2_func_pane_g5

0x99a6,	// (0x00028373) bg_vkb2_func_pane_g6

0x99ae,	// (0x0002837b) bg_vkb2_func_pane_g7

0x99b6,	// (0x00028383) bg_vkb2_func_pane_g8

0x9976,	// (0x00028343) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002e79c) bg_vkb2_func_pane_g

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp01

0x892b,	// (0x000272f8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x892b,	// (0x000272f8) vkb2_top_cell_right_wide_pane_g1

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8045,	// (0x00026a12) bg_vkb2_fuc_pane_cp02

0x8af1,	// (0x000274be) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8af1,	// (0x000274be) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0002beed) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0002beed) aid_touch_area_decrease

0xd544,	// (0x0002bf11) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0002bf11) aid_touch_area_increase

0xd55c,	// (0x0002bf29) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0002bf29) aid_touch_area_mute

0xd578,	// (0x0002bf45) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0002bf45) aid_touch_area_slider

0xd666,	// (0x0002c033) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0002c033) popup_slider_window_g4

0xd67e,	// (0x0002c04b) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0002c04b) popup_slider_window_g5

0xd6a0,	// (0x0002c06d) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0002c06d) popup_slider_window_g6

0xd6de,	// (0x0002c0ab) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0002c0ab) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002e696) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002e696) popup_slider_window_t

0xd6f6,	// (0x0002c0c3) slider_pane_ParamLimits

0xd6f6,	// (0x0002c0c3) slider_pane

0xe43d,	// (0x0002ce0a) slider_pane_g1_ParamLimits

0xe43d,	// (0x0002ce0a) slider_pane_g1

0xe451,	// (0x0002ce1e) slider_pane_g2_ParamLimits

0xe451,	// (0x0002ce1e) slider_pane_g2

0xe467,	// (0x0002ce34) slider_pane_g3_ParamLimits

0xe467,	// (0x0002ce34) slider_pane_g3

0x0003,

0xfde2,	// (0x0002e7af) slider_pane_g_ParamLimits

0xfde2,	// (0x0002e7af) slider_pane_g

0x7ab9,	// (0x00026486) popup_tb_float_extension_window_ParamLimits

0x7ab9,	// (0x00026486) popup_tb_float_extension_window

0xe493,	// (0x0002ce60) aid_size_cell_tb_float_ext

0x1543,	// (0x0001ff10) bg_popup_sub_window_cp28

0xe49f,	// (0x0002ce6c) grid_tb_float_ext_pane

0xe4ab,	// (0x0002ce78) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0002ce78) cell_tb_float_ext_pane

0xe4c7,	// (0x0002ce94) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0002ce9d) grid_highlight_pane_cp12

0x818c,	// (0x00026b59) cell_last_hwr_side_pane_ParamLimits

0x818c,	// (0x00026b59) cell_last_hwr_side_pane

0xbfc1,	// (0x0002a98e) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0002cea6) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002e7b8) cell_last_hwr_side_pane_g

0x8851,	// (0x0002721e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8851,	// (0x0002721e) vkb2_area_bottom_space_btn_pane

0xc23c,	// (0x0002ac09) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf5f,	// (0x0002c92c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8ad3,	// (0x000274a0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8b0d,	// (0x000274da) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8b0d,	// (0x000274da) vkb2_area_bottom_space_btn_pane_g1

0x8b47,	// (0x00027514) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8b47,	// (0x00027514) vkb2_area_bottom_space_btn_pane_g2

0x8b7d,	// (0x0002754a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8b7d,	// (0x0002754a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002e7bd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002e7bd) vkb2_area_bottom_space_btn_pane_g

0x80fc,	// (0x00026ac9) cel_fep_hwr_func_pane_ParamLimits

0x80fc,	// (0x00026ac9) cel_fep_hwr_func_pane

0x8138,	// (0x00026b05) cell_hwr_side_button_pane_ParamLimits

0x8138,	// (0x00026b05) cell_hwr_side_button_pane

0xd93d,	// (0x0002c30a) aid_area_touch_clock_ParamLimits

0x1700,	// (0x000200cd) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0002c31e) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0002c334) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0002c340) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0002c351) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002e6ce) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0002c35e) uniindi_top_pane_t1_ParamLimits

0x1700,	// (0x000200cd) bg_vkb2_func_pane_cp01_ParamLimits

0x1700,	// (0x000200cd) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0002ceaf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0002ceaf) cel_fep_hwr_func_pane_g1

0x1700,	// (0x000200cd) bg_vkb2_func_pane_cp02_ParamLimits

0x1700,	// (0x000200cd) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0002ceaf) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0002ceaf) cell_hwr_side_button_pane_g1

0x97f9,	// (0x000281c6) status_pane_g4_ParamLimits

0x97f9,	// (0x000281c6) status_pane_g4

0x9813,	// (0x000281e0) status_pane_t1

0xbd74,	// (0x0002a741) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0002a749) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0002a75b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0002a76d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002e49a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0002a77f) form2_midp_slider_pane_ParamLimits

0x84b4,	// (0x00026e81) aid_size_cell_func_vkb2_ParamLimits

0x84b4,	// (0x00026e81) aid_size_cell_func_vkb2

0xe47f,	// (0x0002ce4c) slider_pane_g4_ParamLimits

0xe47f,	// (0x0002ce4c) slider_pane_g4

0x8bc7,	// (0x00027594) form2_midp_gauge_slider_pane_t2_cp01

0x8bd5,	// (0x000275a2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8bd5,	// (0x000275a2) form2_midp_gauge_slider_pane_t3_cp01

0x8bf2,	// (0x000275bf) form2_midp_slider_pane_cp01

0x1543,	// (0x0001ff10) navi_smil_pane

0xe51b,	// (0x0002cee8) navi_smil_pane_g1

0xe523,	// (0x0002cef0) navi_smil_pane_t1

0xe4f0,	// (0x0002cebd) form2_midp_slider_pane_g1

0xe4f9,	// (0x0002cec6) form2_midp_slider_pane_g2

0xe501,	// (0x0002cece) form2_midp_slider_pane_g3

0xe4f0,	// (0x0002cebd) form2_midp_slider_pane_g4

0xe509,	// (0x0002ced6) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002e7c6) form2_midp_slider_pane_g

0x8bb7,	// (0x00027584) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8bb7,	// (0x00027584) vkb2_area_bottom_space_btn_pane_g4

0x9618,	// (0x00027fe5) lc0_navi_pane_ParamLimits

0x9618,	// (0x00027fe5) lc0_navi_pane

0x9694,	// (0x00028061) lc0_stat_indi_pane_ParamLimits

0x9694,	// (0x00028061) lc0_stat_indi_pane

0x96ab,	// (0x00028078) ls0_title_pane_ParamLimits

0x96ab,	// (0x00028078) ls0_title_pane

0x3104,	// (0x00021ad1) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0002c2f1) list_uniindi_pane_ParamLimits

0xd930,	// (0x0002c2fd) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0002c39d) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0002c3b0) list_single_uniindi_pane_t1_ParamLimits

0x8bfb,	// (0x000275c8) lc0_stat_clock_pane_ParamLimits

0x8bfb,	// (0x000275c8) lc0_stat_clock_pane

0xe531,	// (0x0002cefe) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0002cefe) lc0_stat_indi_pane_g1

0xe53e,	// (0x0002cf0b) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0002cf0b) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002e7d1) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002e7d1) lc0_stat_indi_pane_g

0x8c08,	// (0x000275d5) lc0_uni_indicator_pane_ParamLimits

0x8c08,	// (0x000275d5) lc0_uni_indicator_pane

0xe54b,	// (0x0002cf18) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0002cf18) ls0_title_pane_g1

0xe55f,	// (0x0002cf2c) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0002cf2c) ls0_title_pane_t1

0x8c15,	// (0x000275e2) lc0_uni_indicator_pane_g1_ParamLimits

0x8c15,	// (0x000275e2) lc0_uni_indicator_pane_g1

0xe595,	// (0x0002cf62) lc0_stat_clock_pane_t1

0x1543,	// (0x0001ff10) main_ai5_pane

0xe5a3,	// (0x0002cf70) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0002cf70) ai5_sk_pane

0xe5b0,	// (0x0002cf7d) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0002cf7d) cell_ai5_widget_pane

0xe64f,	// (0x0002d01c) aid_size_cell_widget_grid

0xe65d,	// (0x0002d02a) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0002d02a) bg_ai5_widget_pane

0xe6d9,	// (0x0002d0a6) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0002d0ba) cell_ai5_widget_pane_g3

0xe707,	// (0x0002d0d4) cell_ai5_widget_pane_g4

0xe717,	// (0x0002d0e4) cell_ai5_widget_pane_g5

0xe727,	// (0x0002d0f4) cell_ai5_widget_pane_g6

0xe733,	// (0x0002d100) cell_ai5_widget_pane_g7

0xe79f,	// (0x0002d16c) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0002d16c) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0002d189) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0002d189) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0002d1a1) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0002d1a1) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0002d1b9) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0002d1b9) cell_ai5_widget_pane_t4

0xe812,	// (0x0002d1df) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0002d1df) cell_ai5_widget_pane_t5

0xe832,	// (0x0002d1ff) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0002d1ff) cell_ai5_widget_pane_t6

0xe844,	// (0x0002d211) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0002d211) cell_ai5_widget_pane_t7

0xe863,	// (0x0002d230) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0002d230) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002e7f1) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002e7f1) cell_ai5_widget_pane_t

0xe8e7,	// (0x0002d2b4) grid_ai5_widget_pane

0x3104,	// (0x00021ad1) highlight_cell_ai5_widget_pane_ParamLimits

0x3104,	// (0x00021ad1) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0002d2c2) ai5_sk_left_pane

0xe8ff,	// (0x0002d2cc) ai5_sk_middle_pane

0xe909,	// (0x0002d2d6) ai5_sk_right_pane

0xe913,	// (0x0002d2e0) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0002d2e0) bg_ai5_widget_pane_g1

0xe91f,	// (0x0002d2ec) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0002d2ec) bg_ai5_widget_pane_g2

0xe92b,	// (0x0002d2f8) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0002d2f8) bg_ai5_widget_pane_g3

0xe937,	// (0x0002d304) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0002d304) bg_ai5_widget_pane_g4

0xe943,	// (0x0002d310) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0002d310) bg_ai5_widget_pane_g5

0xe94f,	// (0x0002d31c) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0002d31c) bg_ai5_widget_pane_g6

0xe95b,	// (0x0002d328) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0002d328) bg_ai5_widget_pane_g7

0xe967,	// (0x0002d334) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0002d334) bg_ai5_widget_pane_g8

0xe973,	// (0x0002d340) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0002d340) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002e80a) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002e80a) bg_ai5_widget_pane_g

0xe9ab,	// (0x0002d378) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0002d378) cell_shortcut_ai5_widget_pane

0x9117,	// (0x00027ae4) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0002d38b) cell_grid_ai5_widget_pane_g1

0x9117,	// (0x00027ae4) highlight_cell_shortcut_ai5_widget_pane

0x9986,	// (0x00028353) ai5_sk_left_pane_g1

0xe9c7,	// (0x0002d394) ai5_sk_left_pane_g2

0xe9cf,	// (0x0002d39c) ai5_sk_left_pane_g3

0xe9d7,	// (0x0002d3a4) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002e81d) ai5_sk_left_pane_g

0xe9df,	// (0x0002d3ac) ai5_sk_left_pane_t1

0x997e,	// (0x0002834b) ai5_sk_right_pane_g1

0xe9ed,	// (0x0002d3ba) ai5_sk_right_pane_g2

0xe9f5,	// (0x0002d3c2) ai5_sk_right_pane_g3

0xe9fd,	// (0x0002d3ca) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002e826) ai5_sk_right_pane_g

0xea05,	// (0x0002d3d2) ai5_sk_right_pane_t1

0x997e,	// (0x0002834b) ai5_sk_middle_pane_g1

0x9986,	// (0x00028353) ai5_sk_middle_pane_g2

0x999e,	// (0x0002836b) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0002d3c2) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0002d39c) ai5_sk_middle_pane_g5

0xea13,	// (0x0002d3e0) ai5_sk_middle_pane_g6

0xea1b,	// (0x0002d3e8) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002e82f) ai5_sk_middle_pane_g

0x949e,	// (0x00027e6b) aid_touch_area_size_lc0_ParamLimits

0x949e,	// (0x00027e6b) aid_touch_area_size_lc0

0x829b,	// (0x00026c68) cell_hwr_candidate_pane_t1_ParamLimits

0x94bc,	// (0x00027e89) aid_touch_navi_pane

0x97ab,	// (0x00028178) status_dt_navi_pane_ParamLimits

0x97ab,	// (0x00028178) status_dt_navi_pane

0x97b8,	// (0x00028185) status_dt_sta_pane_ParamLimits

0x97b8,	// (0x00028185) status_dt_sta_pane

0xea23,	// (0x0002d3f0) dt_sta_controll_pane

0xea30,	// (0x0002d3fd) dt_sta_indi_pane

0xea41,	// (0x0002d40e) dt_sta_title_pane

0x1700,	// (0x000200cd) bg_dt_sta_indi_pane_ParamLimits

0x1700,	// (0x000200cd) bg_dt_sta_indi_pane

0xea54,	// (0x0002d421) dt_sta_battery_pane

0xea5c,	// (0x0002d429) dt_sta_indi_pane_g1

0xea65,	// (0x0002d432) dt_sta_indi_pane_g2

0xea6e,	// (0x0002d43b) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002e83e) dt_sta_indi_pane_g

0xea77,	// (0x0002d444) dt_sta_signal_pane

0x3104,	// (0x00021ad1) bg_dt_sta_title_pane_ParamLimits

0x3104,	// (0x00021ad1) bg_dt_sta_title_pane

0xea80,	// (0x0002d44d) dt_sta_title_pane_g1

0xea88,	// (0x0002d455) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0002d455) dt_sta_title_pane_t1

0x1543,	// (0x0001ff10) bg_dt_sta_control_pane

0xea9d,	// (0x0002d46a) dt_sta_controll_pane_g1

0xeaa6,	// (0x0002d473) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0002d47c) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0002d485) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002e845) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0002a98e) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0002d48e) dt_sta_signal_pane_g1

0xeac9,	// (0x0002d496) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002e84c) dt_sta_signal_pane_g

0xead1,	// (0x0002d49e) dt_sta_battery_pane_g1

0xeada,	// (0x0002d4a7) dt_sta_battery_pane_t1

0xbfc1,	// (0x0002a98e) bg_dt_sta_control_pane_g1

0x6dc9,	// (0x00025796) fep_china_uni_eep_pane

0x6dd1,	// (0x0002579e) fep_china_uni_entry_pane_ParamLimits

0x6de1,	// (0x000257ae) popup_fep_china_uni_window_g1_ParamLimits

0x6df1,	// (0x000257be) popup_fep_china_uni_window_g2_ParamLimits

0x6df1,	// (0x000257be) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002e0c5) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002e0c5) popup_fep_china_uni_window_g

0xeae9,	// (0x0002d4b6) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0002d4be) fep_china_uni_eep_pane_t1

0xe512,	// (0x0002cedf) aid_touch_area_size_smil_player

0x9610,	// (0x00027fdd) lc0_clock_pane

0x9807,	// (0x000281d4) status_pane_g5_ParamLimits

0x9807,	// (0x000281d4) status_pane_g5

0x773e,	// (0x0002610b) popup_keymap_window

0x97cd,	// (0x0002819a) status_icon_pane

0xe6ed,	// (0x0002d0ba) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0002d0d4) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0002d0e4) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0002d10c) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0002d10c) cell_ai5_widget_pane_g8

0xe753,	// (0x0002d120) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0002d120) cell_ai5_widget_pane_g9

0xe767,	// (0x0002d134) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0002d134) cell_ai5_widget_pane_g10

0xeb00,	// (0x0002d4cd) status_icon_pane_g1

0x1543,	// (0x0001ff10) bg_popup_sub_pane_cp13

0xeb08,	// (0x0002d4d5) popup_keymap_window_t1

0x93ef,	// (0x00027dbc) control_pane_g6_ParamLimits

0x93ef,	// (0x00027dbc) control_pane_g6

0x93fc,	// (0x00027dc9) control_pane_g7_ParamLimits

0x93fc,	// (0x00027dc9) control_pane_g7

0x9409,	// (0x00027dd6) control_pane_g8_ParamLimits

0x9409,	// (0x00027dd6) control_pane_g8

0xea23,	// (0x0002d3f0) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0002d3fd) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0002d40e) dt_sta_title_pane_ParamLimits

0x1b51,	// (0x0002051e) aid_size_touch_scroll_bar_cale

0x617e,	// (0x00024b4b) popup_discreet_window_ParamLimits

0x617e,	// (0x00024b4b) popup_discreet_window

0x620c,	// (0x00024bd9) popup_sk_window

0x9fdc,	// (0x000289a9) bg_popup_sub_pane_cp28_ParamLimits

0x9fdc,	// (0x000289a9) bg_popup_sub_pane_cp28

0xeb16,	// (0x0002d4e3) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0002d4e3) popup_discreet_window_g1

0xeb36,	// (0x0002d503) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0002d503) popup_discreet_window_t1

0xeb54,	// (0x0002d521) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0002d521) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002e851) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002e851) popup_discreet_window_t

0x8c28,	// (0x000275f5) popup_sk_window_g1

0x8c32,	// (0x000275ff) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002e858) popup_sk_window_g

0x8c3a,	// (0x00027607) popup_sk_window_t1

0x8c48,	// (0x00027615) popup_sk_window_t1_copy1

0xe6d9,	// (0x0002d0a6) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0002d242) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0002d242) cell_ai5_widget_pane_t9

0x1543,	// (0x0001ff10) main_fep_fshwr2_pane

0x8c56,	// (0x00027623) aid_fshwr2_btn_pane

0x8c66,	// (0x00027633) aid_fshwr2_syb_pane

0x8c7a,	// (0x00027647) aid_fshwr2_txt_pane

0x8c8a,	// (0x00027657) fshwr2_func_candi_pane

0x8caa,	// (0x00027677) fshwr2_hwr_syb_pane

0x8cc0,	// (0x0002768d) fshwr2_icf_pane

0x1543,	// (0x0001ff10) fshwr2_icf_bg_pane

0x8cf4,	// (0x000276c1) fshwr2_icf_pane_t1_ParamLimits

0x8cf4,	// (0x000276c1) fshwr2_icf_pane_t1

0x6bc9,	// (0x00025596) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0002d573) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0002d573) fshwr2_func_candi_row_pane

0x8d0c,	// (0x000276d9) cell_fshwr2_syb_pane_ParamLimits

0x8d0c,	// (0x000276d9) cell_fshwr2_syb_pane

0xe4e2,	// (0x0002ceaf) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e2,	// (0x0002ceaf) fshwr2_hwr_syb_pane_g1

0x1543,	// (0x0001ff10) bg_popup_call_pane_cp01

0x8d2d,	// (0x000276fa) fshwr2_func_candi_cell_pane_ParamLimits

0x8d2d,	// (0x000276fa) fshwr2_func_candi_cell_pane

0xa653,	// (0x00029020) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa653,	// (0x00029020) fshwr2_func_candi_cell_bg_pane

0x8d7e,	// (0x0002774b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8d7e,	// (0x0002774b) fshwr2_func_candi_cell_pane_g1

0x8da9,	// (0x00027776) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8da9,	// (0x00027776) fshwr2_func_candi_cell_pane_t1

0x1543,	// (0x0001ff10) bg_button_pane_cp08

0x943e,	// (0x00027e0b) cell_fshwr2_syb_bg_pane

0x8dbc,	// (0x00027789) cell_fshwr2_syb_bg_pane_g1

0x8dd0,	// (0x0002779d) cell_fshwr2_syb_bg_pane_t1

0x3104,	// (0x00021ad1) main_tmo_pane

0xab00,	// (0x000294cd) uni_indicator_pane_g1_ParamLimits

0xab16,	// (0x000294e3) uni_indicator_pane_g2_ParamLimits

0xab2c,	// (0x000294f9) uni_indicator_pane_g3_ParamLimits

0xab3f,	// (0x0002950c) uni_indicator_pane_g4_ParamLimits

0xab3f,	// (0x0002950c) uni_indicator_pane_g4

0xab53,	// (0x00029520) uni_indicator_pane_g5_ParamLimits

0xab53,	// (0x00029520) uni_indicator_pane_g5

0xab53,	// (0x00029520) uni_indicator_pane_g6_ParamLimits

0xab53,	// (0x00029520) uni_indicator_pane_g6

0xf8fc,	// (0x0002e2c9) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0002bebd) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0002bebd) popup_tmo_note_window

0x3104,	// (0x00021ad1) fshwr2_bg_pane

0x8d9a,	// (0x00027767) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8d9a,	// (0x00027767) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002e85d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002e85d) fshwr2_func_candi_cell_pane_g

0xbfc1,	// (0x0002a98e) bg_popup_window_pane_cp01

0x8de6,	// (0x000277b3) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0002d596) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0002d596) bg_popup_window_pane_cp22

0xebd7,	// (0x0002d5a4) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0002d5a4) listscroll_tmo_link_pane

0xec17,	// (0x0002d5e4) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0002d5e4) popup_tmo_note_window_g1

0xec24,	// (0x0002d5f1) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0002d5f1) tmo_note_info_pane

0xec3e,	// (0x0002d60b) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0002d60b) list_tmo_note_info_pane_g1

0xec55,	// (0x0002d622) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0002d622) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002e862) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002e862) list_tmo_note_info_pane_g

0xec71,	// (0x0002d63e) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0002d63e) list_tmo_note_info_text_pane

0xecf6,	// (0x0002d6c3) list_tmo_link_pane

0xed03,	// (0x0002d6d0) scroll_pane_cp20

0xed10,	// (0x0002d6dd) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0002d6dd) list_single_tmo_link_pane

0xed20,	// (0x0002d6ed) list_single_tmo_link_pane_t1

0xed2e,	// (0x0002d6fb) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0002d6fb) list_tmo_note_info_text_pane_t1

0x6697,	// (0x00025064) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6697,	// (0x00025064) aid_size_touch_scroll_bar_cp01

0x5390,	// (0x00023d5d) aid_size_touch_slider_marker

0x61f4,	// (0x00024bc1) popup_settings_window_ParamLimits

0x61f4,	// (0x00024bc1) popup_settings_window

0x5557,	// (0x00023f24) popup_candi_list_indi_window

0x94bc,	// (0x00027e89) aid_touch_navi_pane_ParamLimits

0x840b,	// (0x00026dd8) rs_clock_indi_pane

0x8414,	// (0x00026de1) sctrl_sk_bottom_pane_ParamLimits

0x8425,	// (0x00026df2) sctrl_sk_top_pane_ParamLimits

0x8506,	// (0x00026ed3) popup_fep_tooltip_window

0xe64f,	// (0x0002d01c) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0002d091) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0002d091) cell_ai5_widget_pane_g1

0xe727,	// (0x0002d0f4) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0002d100) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002e7d6) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002e7d6) cell_ai5_widget_pane_g

0xe8a4,	// (0x0002d271) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0002d271) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0002d2b4) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0002d34c) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0002d34c) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0002d536) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0002d536) popup_discreet_window_t3

0x8cdc,	// (0x000276a9) popup_fshwr2_char_preview_window_ParamLimits

0x8cdc,	// (0x000276a9) popup_fshwr2_char_preview_window

0xec8f,	// (0x0002d65c) tmo_note_info_pane_t1

0xeca4,	// (0x0002d671) tmo_note_info_pane_t2

0xecbd,	// (0x0002d68a) tmo_note_info_pane_t3

0xecd2,	// (0x0002d69f) tmo_note_info_pane_t4

0xece4,	// (0x0002d6b1) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002e867) tmo_note_info_pane_t

0xecf6,	// (0x0002d6c3) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0002d6d0) scroll_pane_cp20_ParamLimits

0x1543,	// (0x0001ff10) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0002d714) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0002d722) popup_candi_list_indi_window_g1

0xed5e,	// (0x0002d72b) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0002d737) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0002d74c) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0002d758) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002e872) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0002d764) cell_contacts_ai5_widget_pane_t1

0x3104,	// (0x00021ad1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0002d7db) settings_container_pane

0x9117,	// (0x00027ae4) listscroll_set_pane_copy1

0xb6f2,	// (0x0002a0bf) scroll_pane_cp121_copy1

0xee1a,	// (0x0002d7e7) set_content_pane_copy1

0xee22,	// (0x0002d7ef) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0002d7ef) aid_height_set_list_copy1

0xad53,	// (0x00029720) aid_size_parent_copy1_ParamLimits

0xad53,	// (0x00029720) aid_size_parent_copy1

0xee2e,	// (0x0002d7fb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0002d7fb) button_value_adjust_pane_cp6_copy1

0x943e,	// (0x00027e0b) list_highlight_pane_cp2_copy1_ParamLimits

0x943e,	// (0x00027e0b) list_highlight_pane_cp2_copy1

0xee42,	// (0x0002d80f) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0002d80f) list_set_pane_copy1

0xeda9,	// (0x0002d776) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0002d776) main_pane_set_t1_copy1

0xede3,	// (0x0002d7b0) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0002d7b0) main_pane_set_t2_copy1

0xef03,	// (0x0002d8d0) main_pane_set_t3_copy1

0xef11,	// (0x0002d8de) main_pane_set_t4_copy1

0xee02,	// (0x0002d7cf) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0002d7cf) set_content_pane_g1_copy1

0xef1f,	// (0x0002d8ec) setting_code_pane_copy1

0xef27,	// (0x0002d8f4) setting_slider_graphic_pane_copy1

0xef27,	// (0x0002d8f4) setting_slider_pane_copy1

0xef2f,	// (0x0002d8fc) setting_text_pane_copy1

0xef2f,	// (0x0002d8fc) setting_volume_pane_copy1

0xef1f,	// (0x0002d8ec) settings_code_pane_cp2_copy1

0xef37,	// (0x0002d904) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0002d904) settings_code_pane_cp_copy1

0x8def,	// (0x000277bc) volume_set_pane_copy1

0xef4b,	// (0x0002d918) volume_set_pane_g10_copy1

0xef57,	// (0x0002d924) volume_set_pane_g1_copy1

0xef61,	// (0x0002d92e) volume_set_pane_g2_copy1

0xef6b,	// (0x0002d938) volume_set_pane_g3_copy1

0xef75,	// (0x0002d942) volume_set_pane_g4_copy1

0xef7f,	// (0x0002d94c) volume_set_pane_g5_copy1

0xef89,	// (0x0002d956) volume_set_pane_g6_copy1

0xef93,	// (0x0002d960) volume_set_pane_g7_copy1

0xef9d,	// (0x0002d96a) volume_set_pane_g8_copy1

0xefa7,	// (0x0002d974) volume_set_pane_g9_copy1

0x15b3,	// (0x0001ff80) bg_set_opt_pane_cp_copy1_ParamLimits

0x15b3,	// (0x0001ff80) bg_set_opt_pane_cp_copy1

0x8dfb,	// (0x000277c8) setting_slider_pane_t1_copy1_ParamLimits

0x8dfb,	// (0x000277c8) setting_slider_pane_t1_copy1

0x8e1a,	// (0x000277e7) setting_slider_pane_t2_copy1_ParamLimits

0x8e1a,	// (0x000277e7) setting_slider_pane_t2_copy1

0x8e34,	// (0x00027801) setting_slider_pane_t3_copy1_ParamLimits

0x8e34,	// (0x00027801) setting_slider_pane_t3_copy1

0x8e4c,	// (0x00027819) slider_set_pane_copy1_ParamLimits

0x8e4c,	// (0x00027819) slider_set_pane_copy1

0x31bf,	// (0x00021b8c) set_opt_bg_pane_g1_copy2

0x31c7,	// (0x00021b94) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0002d980) set_opt_bg_pane_g3_copy2

0x31d7,	// (0x00021ba4) set_opt_bg_pane_g4_copy2

0x31df,	// (0x00021bac) set_opt_bg_pane_g5_copy2

0x31e7,	// (0x00021bb4) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0002d98a) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0002d994) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0002d99e) set_opt_bg_pane_g9_copy2

0x8e62,	// (0x0002782f) aid_size_touch_slider_mark_copy1_ParamLimits

0x8e62,	// (0x0002782f) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0002d9a8) slider_set_pane_g1_copy1

0x8e76,	// (0x00027843) slider_set_pane_g2_copy1

0x7ed3,	// (0x000268a0) slider_set_pane_g3_copy1_ParamLimits

0x7ed3,	// (0x000268a0) slider_set_pane_g3_copy1

0x7ee7,	// (0x000268b4) slider_set_pane_g4_copy1_ParamLimits

0x7ee7,	// (0x000268b4) slider_set_pane_g4_copy1

0x7eff,	// (0x000268cc) slider_set_pane_g5_copy1_ParamLimits

0x7eff,	// (0x000268cc) slider_set_pane_g5_copy1

0x7ed3,	// (0x000268a0) slider_set_pane_g6_copy1_ParamLimits

0x7ed3,	// (0x000268a0) slider_set_pane_g6_copy1

0x8e7e,	// (0x0002784b) slider_set_pane_g7_copy1_ParamLimits

0x8e7e,	// (0x0002784b) slider_set_pane_g7_copy1

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0002d9b1) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0002d9ba) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0002d9ca) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0002d9da) slider_set_pane_cp_copy1

0xf01d,	// (0x0002d9ea) input_focus_pane_cp1_copy1

0xf026,	// (0x0002d9f3) list_set_text_pane_copy1

0xf02e,	// (0x0002d9fb) setting_text_pane_g1_copy1

0x5ed5,	// (0x000248a2) set_text_pane_t1_copy1

0xf01d,	// (0x0002d9ea) input_focus_pane_cp2_copy1

0xf02e,	// (0x0002d9fb) setting_code_pane_g1_copy1

0xf037,	// (0x0002da04) setting_code_pane_t1_copy1

0xb4f7,	// (0x00029ec4) list_set_graphic_pane_copy1

0x1557,	// (0x0001ff24) bg_set_opt_pane_cp4_copy1

0x7107,	// (0x00025ad4) list_set_graphic_pane_g1_copy1_ParamLimits

0x7107,	// (0x00025ad4) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0002da12) list_set_graphic_pane_g2_copy1

0x711f,	// (0x00025aec) list_set_graphic_pane_t1_copy1_ParamLimits

0x711f,	// (0x00025aec) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0002a98e) rs_clock_indi_pane_g1

0xf04d,	// (0x0002da1a) rs_clock_indi_pane_t1

0xf05b,	// (0x0002da28) rs_indi_pane

0xf063,	// (0x0002da30) rs_indi_pane_g1

0xf06c,	// (0x0002da39) rs_indi_pane_g2

0xed55,	// (0x0002d722) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002e879) rs_indi_pane_g

0x9117,	// (0x00027ae4) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0002da42) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0002b66b) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0002b66b) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002e606) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002e606) popup_note2_window_g

0xd1a6,	// (0x0002bb73) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0002bb80) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0002bb97) cell_ai3_links_pane_t1

0x5ed5,	// (0x000248a2) set_text_pane_t1_copy1_ParamLimits

0x731a,	// (0x00025ce7) cell_graphic_popup_pane_cp2_ParamLimits

0x731a,	// (0x00025ce7) cell_graphic_popup_pane_cp2

0xf083,	// (0x0002da50) cell_graphic_popup_pane_g1_cp2

0x1964,	// (0x00020331) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0002da58) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0002da60) cell_graphic_popup_pane_t2_cp2

0x1975,	// (0x00020342) grid_highlight_pane_cp3_cp2

0x363f,	// (0x0002200c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3104,	// (0x00021ad1) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0002beb1) popup_tmo_big_image_note_window

0xe6b3,	// (0x0002d080) cell_ai5_widget_list_pane

0xe6bb,	// (0x0002d088) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0002d65c) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0002d671) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0002d68a) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0002d69f) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0002d6b1) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002e867) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0002d7db) settings_container_pane_ParamLimits

0xf015,	// (0x0002d9e2) indicator_popup_pane_cp5

0xf015,	// (0x0002d9e2) indicator_popup_pane_cp6

0xb4f7,	// (0x00029ec4) list_set_graphic_pane_copy1_ParamLimits

0x1543,	// (0x0001ff10) bg_popup_window_pane_cp23

0xf0a1,	// (0x0002da6e) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0002da7a) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0002da8a) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0002da9a) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002e880) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0002a98e) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0002daaa) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0002dab8) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0002dab8) cell_ai5_widget_list_row_pane

0xf103,	// (0x0002dad0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0002dad0) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0002dadd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0002dadd) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0002db08) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0002db08) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002e887) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002e887) cell_ai5_widget_list_row_pane_t

0x1543,	// (0x0001ff10) main_fep_vtchi_ss_pane

0xf18b,	// (0x0002db58) popup_fep_char_pre_window

0xf193,	// (0x0002db60) popup_fep_ituss_window

0xf1bf,	// (0x0002db8c) popup_fep_vkbss_window

0x943e,	// (0x00027e0b) grid_vkbss_keypad_pane_ParamLimits

0x943e,	// (0x00027e0b) grid_vkbss_keypad_pane

0xf201,	// (0x0002dbce) ituss_keypad_pane

0x8e9e,	// (0x0002786b) aid_vkbss_key_offset_ParamLimits

0x8e9e,	// (0x0002786b) aid_vkbss_key_offset

0x8eaa,	// (0x00027877) cell_vkbss_key_pane_ParamLimits

0x8eaa,	// (0x00027877) cell_vkbss_key_pane

0xf20d,	// (0x0002dbda) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0002dbda) bg_cell_vkbss_key_g1

0xf219,	// (0x0002dbe6) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0002dbe6) cell_vkbss_key_3p_pane

0xf24f,	// (0x0002dc1c) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0002dc1c) cell_vkbss_key_g1

0xf285,	// (0x0002dc52) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0002dc52) cell_vkbss_key_t1

0x8f0c,	// (0x000278d9) cell_ituss_key_pane_ParamLimits

0x8f0c,	// (0x000278d9) cell_ituss_key_pane

0xf2e1,	// (0x0002dcae) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0002dcae) bg_cell_ituss_key_g1

0xf2ed,	// (0x0002dcba) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0002dcba) cell_ituss_key_pane_g1

0x8f1d,	// (0x000278ea) cell_ituss_key_pane_g2_ParamLimits

0x8f1d,	// (0x000278ea) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002e88e) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002e88e) cell_ituss_key_pane_g

0x8fa1,	// (0x0002796e) cell_ituss_key_t1_ParamLimits

0x8fa1,	// (0x0002796e) cell_ituss_key_t1

0x8fdb,	// (0x000279a8) cell_ituss_key_t2_ParamLimits

0x8fdb,	// (0x000279a8) cell_ituss_key_t2

0x900d,	// (0x000279da) cell_ituss_key_t3_ParamLimits

0x900d,	// (0x000279da) cell_ituss_key_t3

0x903e,	// (0x00027a0b) cell_ituss_key_t4_ParamLimits

0x903e,	// (0x00027a0b) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002e89b) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002e89b) cell_ituss_key_t

0xf313,	// (0x0002dce0) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0002dce8) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0002dcf0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002e8a6) cell_vkbss_key_3p_pane_g

0x9117,	// (0x00027ae4) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0002dcf8) popup_fep_char_pre_window_t1

0xe63c,	// (0x0002d009) main_ai5_sk_pane

0xed5e,	// (0x0002d72b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0002d737) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0002d74c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0002d758) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002e872) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0002d764) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3104,	// (0x00021ad1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0002dd06) main_ai5_sk_pane_g1

0x9e14,	// (0x000287e1) popup_query_code_window_g1

0xf1a9,	// (0x0002db76) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0002dba5) popup_fep_vtchi_icf_pane

0xf342,	// (0x0002dd0f) bg_icf_pane

0xf342,	// (0x0002dd0f) list_vkb_icf_pane

0xf34e,	// (0x0002dd1b) bg_icf_pane_cp01

0xf361,	// (0x0002dd2e) vtchi_icf_list_pane

0xf3c1,	// (0x0002dd8e) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0002dd8e) list_vkb_icf_pane_t1

0xf3da,	// (0x0002dda7) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0002dda7) vtchi_icf_list_pane_t1

0xf193,	// (0x0002db60) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0002dba5) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0002dbce) ituss_keypad_pane_ParamLimits

0x8e94,	// (0x00027861) ituss_sks_pane

0xf342,	// (0x0002dd0f) bg_icf_pane_ParamLimits

0xf163,	// (0x0002db30) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0002db30) icf_edit_indi_pane

0xf342,	// (0x0002dd0f) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0002dd1b) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0002db4b) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0002db4b) icf_edit_indi_pane_cp01

0xf361,	// (0x0002dd2e) vtchi_query_pane

0xe4e2,	// (0x0002ceaf) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0002ceaf) icf_edit_indi_pane_g1

0xf44a,	// (0x0002de17) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0002de17) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002e8d1) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002e8d1) icf_edit_indi_pane_g

0xf45e,	// (0x0002de2b) icf_edit_indi_pane_t1

0xf3f3,	// (0x0002ddc0) bg_input_focus_pane_cp042

0x1b48,	// (0x00020515) vtchi_button_pane

0xf3fc,	// (0x0002ddc9) vtchi_query_pane_t1

0xf40a,	// (0x0002ddd7) vtchi_query_pane_t2

0xf418,	// (0x0002dde5) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002e8c0) vtchi_query_pane_t

0x1543,	// (0x0001ff10) bg_button_pane_cp13

0xf426,	// (0x0002ddf3) vtchi_button_pane_g1

0x9081,	// (0x00027a4e) ituss_sks_pane_g1

0x908c,	// (0x00027a59) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002e8c7) ituss_sks_pane_g

0xf42e,	// (0x0002ddfb) ituss_sks_pane_t1

0xf43c,	// (0x0002de09) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002e8cc) ituss_sks_pane_t

0xba95,	// (0x0002a462) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0002a46b) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0002a473) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0002a47b) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0002a46b) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0002a473) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002e450) indicator_nsta_pane_cp_g

0xe208,	// (0x0002cbd5) cell_graphic2_pane_t2_ParamLimits

0xe208,	// (0x0002cbd5) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002e75d) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002e75d) cell_graphic2_pane_t

0xe234,	// (0x0002cc01) cell_graphic2_control_pane_t1

0x6d20,	// (0x000256ed) signal_pane_g3_ParamLimits

0x6d20,	// (0x000256ed) signal_pane_g3

0x6d2f,	// (0x000256fc) signal_pane_g4_ParamLimits

0x6d2f,	// (0x000256fc) signal_pane_g4

0xf14d,	// (0x0002db1a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0002db1a) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0002dcce) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0002dcce) cell_ituss_key_pane_t1

0x9a7b,	// (0x00028448) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a7b,	// (0x00028448) form_field_data_wide_pane_vc_t2

0x9a8f,	// (0x0002845c) form_field_data_wide_pane_vc_t3_ParamLimits

0x9a8f,	// (0x0002845c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002e1b1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002e1b1) form_field_data_wide_pane_vc_t

0xb732,	// (0x0002a0ff) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0002a0ff) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0002a1d5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0002a1d5) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0002a1ec) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0002a1ec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002e43f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002e43f) form_field_popup_wide_pane_vc_t

0x8c56,	// (0x00027623) aid_fshwr2_btn_pane_ParamLimits

0x8c66,	// (0x00027633) aid_fshwr2_syb_pane_ParamLimits

0x8c7a,	// (0x00027647) aid_fshwr2_txt_pane_ParamLimits

0x3104,	// (0x00021ad1) fshwr2_bg_pane_ParamLimits

0x8c8a,	// (0x00027657) fshwr2_func_candi_pane_ParamLimits

0x8caa,	// (0x00027677) fshwr2_hwr_syb_pane_ParamLimits

0x8cc0,	// (0x0002768d) fshwr2_icf_pane_ParamLimits

0x5aae,	// (0x0002447b) list_double_graphic_pane_vc_g4_ParamLimits

0x5aae,	// (0x0002447b) list_double_graphic_pane_vc_g4

0x8f3d,	// (0x0002790a) cell_ituss_key_pane_g3_ParamLimits

0x8f3d,	// (0x0002790a) cell_ituss_key_pane_g3

0x906f,	// (0x00027a3c) cell_ituss_key_t5_ParamLimits

0x906f,	// (0x00027a3c) cell_ituss_key_t5

0xf1bf,	// (0x0002db8c) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0002d013) aid_cell_ai5_quarter

0xf45e,	// (0x0002de2b) icf_edit_indi_pane_t1_ParamLimits

0x17a8,	// (0x00020175) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x17a8,	// (0x00020175) aid_tch_indicator_popup_pane_cp2

0x17bb,	// (0x00020188) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x17bb,	// (0x00020188) aid_tch_query_popup_data_pane_cp2

0x9dbc,	// (0x00028789) aid_tch_query_popup_pane_ParamLimits

0x9dbc,	// (0x00028789) aid_tch_query_popup_pane

0x9dbc,	// (0x00028789) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dbc,	// (0x00028789) aid_tch_query_popup_data_pane_cp1

0x943e,	// (0x00027e0b) cell_fshwr2_syb_bg_pane_ParamLimits

0x8dbc,	// (0x00027789) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8dd0,	// (0x0002779d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0002db76) popup_fep_vkb_icf_pane_ParamLimits

0x8aaa,	// (0x00027477) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0002d148) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0002d148) cell_ai5_widget_pane_g11

0xe787,	// (0x0002d154) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0002d154) cell_ai5_widget_pane_g12

0xe793,	// (0x0002d160) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0002d160) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0002d290) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0002d290) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0002d2a2) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0002d2a2) cell_ai5_widget_pane_t12

0x8f49,	// (0x00027916) cell_ituss_key_pane_g4_ParamLimits

0x8f49,	// (0x00027916) cell_ituss_key_pane_g4

0x8f65,	// (0x00027932) cell_ituss_key_pane_g5_ParamLimits

0x8f65,	// (0x00027932) cell_ituss_key_pane_g5

0x8f81,	// (0x0002794e) cell_ituss_key_pane_g6_ParamLimits

0x8f81,	// (0x0002794e) cell_ituss_key_pane_g6

0x9976,	// (0x00028343) bg_icf_pane_g1

0xf369,	// (0x0002dd36) bg_icf_pane_g2

0xf375,	// (0x0002dd42) bg_icf_pane_g3

0xf37f,	// (0x0002dd4c) bg_icf_pane_g4

0xf38b,	// (0x0002dd58) bg_icf_pane_g5

0xf395,	// (0x0002dd62) bg_icf_pane_g6

0xf3a1,	// (0x0002dd6e) bg_icf_pane_g7

0xf3ab,	// (0x0002dd78) bg_icf_pane_g8

0xf3b7,	// (0x0002dd84) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002e8ad) bg_icf_pane_g

0xf1ee,	// (0x0002dbbb) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0002dbbb) popup_hyb_candi_window

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp01_ParamLimits

0x99ea,	// (0x000283b7) bg_popup_sub_pane_cp01

0xf477,	// (0x0002de44) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0002de44) entry_hyb_candi_pane

0xf486,	// (0x0002de53) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0002de53) grid_hyb_candi_pane

0xf49b,	// (0x0002de68) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0002de68) grid_hyb_phrase_pane

0xf4aa,	// (0x0002de77) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0002de77) cell_hyb_candi_pane

0x1b51,	// (0x0002051e) cell_hyb_candi_scroll_pane

0x6bc9,	// (0x00025596) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002de93) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002dea1) cell_hyb_phrase_pane

0x6bc9,	// (0x00025596) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002deaa) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002deb8) entry_hyb_candi_pane_t1

0x9117,	// (0x00027ae4) input_focus_pane_cp06

0xf4f9,	// (0x0002dec6) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002dece) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002ded6) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002dede) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002dee6) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002deee) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

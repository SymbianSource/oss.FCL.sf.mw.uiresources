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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002ede6 };

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
0xd0d0,	// (0x0003beb6) Screen

0xd0dc,	// (0x0003bec2) application_window_ParamLimits

0xd0dc,	// (0x0003bec2) application_window

0x371b,	// (0x00032501) screen_g1

0xb7bd,	// (0x0003a5a3) area_bottom_pane_ParamLimits

0xb7bd,	// (0x0003a5a3) area_bottom_pane

0x025b,	// (0x0002f041) area_top_pane_ParamLimits

0x025b,	// (0x0002f041) area_top_pane

0x02f9,	// (0x0002f0df) main_pane_ParamLimits

0x02f9,	// (0x0002f0df) main_pane

0x3725,	// (0x0003250b) misc_graphics

0xd818,	// (0x0003c5fe) battery_pane_ParamLimits

0xd818,	// (0x0003c5fe) battery_pane

0x5db8,	// (0x00034b9e) bg_status_flat_pane_g8

0x5dc0,	// (0x00034ba6) bg_status_flat_pane_g9

0x51b2,	// (0x00033f98) context_pane_ParamLimits

0x51b2,	// (0x00033f98) context_pane

0xd983,	// (0x0003c769) navi_pane_ParamLimits

0xd983,	// (0x0003c769) navi_pane

0xda01,	// (0x0003c7e7) signal_pane_ParamLimits

0xda01,	// (0x0003c7e7) signal_pane

0x0008,

0xf874,	// (0x0003e65a) bg_status_flat_pane_g

0xda91,	// (0x0003c877) status_pane_g1_ParamLimits

0xda91,	// (0x0003c877) status_pane_g1

0xdaa7,	// (0x0003c88d) status_pane_g2_ParamLimits

0xdaa7,	// (0x0003c88d) status_pane_g2

0x53d9,	// (0x000341bf) status_pane_g3_ParamLimits

0x53d9,	// (0x000341bf) status_pane_g3

0x0004,

0xf7a0,	// (0x0003e586) status_pane_g_ParamLimits

0xf7a0,	// (0x0003e586) status_pane_g

0xdab3,	// (0x0003c899) title_pane_ParamLimits

0xdab3,	// (0x0003c899) title_pane

0xdb16,	// (0x0003c8fc) uni_indicator_pane_ParamLimits

0xdb16,	// (0x0003c8fc) uni_indicator_pane

0x500f,	// (0x00033df5) bg_list_pane_ParamLimits

0x500f,	// (0x00033df5) bg_list_pane

0xd78b,	// (0x0003c571) find_pane

0xc10c,	// (0x0003aef2) listscroll_app_pane_ParamLimits

0xc10c,	// (0x0003aef2) listscroll_app_pane

0x5040,	// (0x00033e26) listscroll_form_pane

0xc120,	// (0x0003af06) listscroll_gen_pane_ParamLimits

0xc120,	// (0x0003af06) listscroll_gen_pane

0x12e9,	// (0x000300cf) listscroll_set_pane

0x6945,	// (0x0003572b) main_idle_act_pane

0x4d0b,	// (0x00033af1) main_idle_trad_pane

0x4d0b,	// (0x00033af1) main_list_empty_pane

0x505a,	// (0x00033e40) main_midp_pane

0x5066,	// (0x00033e4c) main_pane_g1_ParamLimits

0x5066,	// (0x00033e4c) main_pane_g1

0xc134,	// (0x0003af1a) popup_ai_message_window_ParamLimits

0xc134,	// (0x0003af1a) popup_ai_message_window

0xc1c5,	// (0x0003afab) popup_fep_china_uni_window_ParamLimits

0xc1c5,	// (0x0003afab) popup_fep_china_uni_window

0x1401,	// (0x000301e7) popup_fep_japan_candidate_window_ParamLimits

0x1401,	// (0x000301e7) popup_fep_japan_candidate_window

0x1421,	// (0x00030207) popup_fep_japan_predictive_window_ParamLimits

0x1421,	// (0x00030207) popup_fep_japan_predictive_window

0xc221,	// (0x0003b007) popup_find_window

0xc23e,	// (0x0003b024) popup_grid_graphic_window_ParamLimits

0xc23e,	// (0x0003b024) popup_grid_graphic_window

0x1488,	// (0x0003026e) popup_large_graphic_colour_window

0xc2dc,	// (0x0003b0c2) popup_menu_window_ParamLimits

0xc2dc,	// (0x0003b0c2) popup_menu_window

0xc4ae,	// (0x0003b294) popup_note_image_window

0xc474,	// (0x0003b25a) popup_note_wait_window_ParamLimits

0xc474,	// (0x0003b25a) popup_note_wait_window

0xc4c6,	// (0x0003b2ac) popup_note_window_ParamLimits

0xc4c6,	// (0x0003b2ac) popup_note_window

0xc56c,	// (0x0003b352) popup_query_code_window_ParamLimits

0xc56c,	// (0x0003b352) popup_query_code_window

0x16d0,	// (0x000304b6) popup_query_data_code_window_ParamLimits

0x16d0,	// (0x000304b6) popup_query_data_code_window

0xc5a6,	// (0x0003b38c) popup_query_data_window_ParamLimits

0xc5a6,	// (0x0003b38c) popup_query_data_window

0xc628,	// (0x0003b40e) popup_query_sat_info_window_ParamLimits

0xc628,	// (0x0003b40e) popup_query_sat_info_window

0xc6bf,	// (0x0003b4a5) popup_snote_single_graphic_window_ParamLimits

0xc6bf,	// (0x0003b4a5) popup_snote_single_graphic_window

0xc6bf,	// (0x0003b4a5) popup_snote_single_text_window_ParamLimits

0xc6bf,	// (0x0003b4a5) popup_snote_single_text_window

0x1757,	// (0x0003053d) popup_sub_window_general

0x1887,	// (0x0003066d) popup_window_general_ParamLimits

0x1887,	// (0x0003066d) popup_window_general

0x5074,	// (0x00033e5a) power_save_pane

0xbf91,	// (0x0003ad77) control_pane_g1_ParamLimits

0xbf91,	// (0x0003ad77) control_pane_g1

0xbfba,	// (0x0003ada0) control_pane_g2_ParamLimits

0xbfba,	// (0x0003ada0) control_pane_g2

0x4fd2,	// (0x00033db8) control_pane_g3_ParamLimits

0x4fd2,	// (0x00033db8) control_pane_g3

0x0007,

0xf788,	// (0x0003e56e) control_pane_g_ParamLimits

0xf788,	// (0x0003e56e) control_pane_g

0xbffb,	// (0x0003ade1) control_pane_t1_ParamLimits

0xbffb,	// (0x0003ade1) control_pane_t1

0xc061,	// (0x0003ae47) control_pane_t2_ParamLimits

0xc061,	// (0x0003ae47) control_pane_t2

0x0002,

0xf799,	// (0x0003e57f) control_pane_t_ParamLimits

0xf799,	// (0x0003e57f) control_pane_t

0xd6bd,	// (0x0003c4a3) navi_navi_volume_pane_cp1

0xd6c5,	// (0x0003c4ab) status_small_icon_pane

0x4f07,	// (0x00033ced) status_small_pane_g1_ParamLimits

0x4f07,	// (0x00033ced) status_small_pane_g1

0xd6cd,	// (0x0003c4b3) status_small_pane_g2_ParamLimits

0xd6cd,	// (0x0003c4b3) status_small_pane_g2

0xd6d9,	// (0x0003c4bf) status_small_pane_g3_ParamLimits

0xd6d9,	// (0x0003c4bf) status_small_pane_g3

0xd6e5,	// (0x0003c4cb) status_small_pane_g4_ParamLimits

0xd6e5,	// (0x0003c4cb) status_small_pane_g4

0xd6f1,	// (0x0003c4d7) status_small_pane_g5_ParamLimits

0xd6f1,	// (0x0003c4d7) status_small_pane_g5

0xd6ff,	// (0x0003c4e5) status_small_pane_g6_ParamLimits

0xd6ff,	// (0x0003c4e5) status_small_pane_g6

0x0007,

0xf777,	// (0x0003e55d) status_small_pane_g_ParamLimits

0xf777,	// (0x0003e55d) status_small_pane_g

0xd72e,	// (0x0003c514) status_small_pane_t1

0xd750,	// (0x0003c536) status_small_wait_pane_ParamLimits

0xd750,	// (0x0003c536) status_small_wait_pane

0xd588,	// (0x0003c36e) aid_levels_signal_ParamLimits

0xd588,	// (0x0003c36e) aid_levels_signal

0xd5a0,	// (0x0003c386) signal_pane_g1_ParamLimits

0xd5a0,	// (0x0003c386) signal_pane_g1

0xd5bb,	// (0x0003c3a1) signal_pane_g2_ParamLimits

0xd5bb,	// (0x0003c3a1) signal_pane_g2

0x0003,

0xf708,	// (0x0003e4ee) signal_pane_g_ParamLimits

0xf708,	// (0x0003e4ee) signal_pane_g

0x47df,	// (0x000335c5) context_pane_g1

0xd0ec,	// (0x0003bed2) title_pane_g1

0xd123,	// (0x0003bf09) title_pane_t1

0x37cd,	// (0x000325b3) title_pane_t2

0x37f3,	// (0x000325d9) title_pane_t3

0x0002,

0xf557,	// (0x0003e33d) title_pane_t

0xdb3e,	// (0x0003c924) aid_levels_battery_ParamLimits

0xdb3e,	// (0x0003c924) aid_levels_battery

0xdb5a,	// (0x0003c940) battery_pane_g1_ParamLimits

0xdb5a,	// (0x0003c940) battery_pane_g1

0xdb77,	// (0x0003c95d) battery_pane_g2_ParamLimits

0xdb77,	// (0x0003c95d) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003e591) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003e591) battery_pane_g

0xdd38,	// (0x0003cb1e) uni_indicator_pane_g1

0xdd4e,	// (0x0003cb34) uni_indicator_pane_g2

0xdd64,	// (0x0003cb4a) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003e702) uni_indicator_pane_g

0x4b7d,	// (0x00033963) navi_icon_pane_ParamLimits

0x4b7d,	// (0x00033963) navi_icon_pane

0x4abb,	// (0x000338a1) navi_midp_pane

0x4b99,	// (0x0003397f) navi_navi_pane

0x4ba3,	// (0x00033989) navi_text_pane_ParamLimits

0x4ba3,	// (0x00033989) navi_text_pane

0x371b,	// (0x00032501) status_small_wait_pane_g1

0x3c22,	// (0x00032a08) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003e6fd) status_small_wait_pane_g

0x641f,	// (0x00035205) navi_navi_icon_text_pane

0x6427,	// (0x0003520d) navi_navi_pane_g1_ParamLimits

0x6427,	// (0x0003520d) navi_navi_pane_g1

0x6439,	// (0x0003521f) navi_navi_pane_g2_ParamLimits

0x6439,	// (0x0003521f) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003e6cb) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003e6cb) navi_navi_pane_g

0x644b,	// (0x00035231) navi_navi_tabs_pane

0x6454,	// (0x0003523a) navi_navi_text_pane

0x641f,	// (0x00035205) navi_navi_volume_pane

0x63fb,	// (0x000351e1) navi_text_pane_t1

0x63ef,	// (0x000351d5) navi_icon_pane_g1

0x6342,	// (0x00035128) navi_navi_text_pane_t1

0x1b33,	// (0x00030919) navi_navi_volume_pane_g1

0x1b3b,	// (0x00030921) volume_small_pane

0x62a8,	// (0x0003508e) navi_navi_icon_text_pane_g1

0x62b0,	// (0x00035096) navi_navi_icon_text_pane_t1

0x4b99,	// (0x0003397f) navi_tabs_2_long_pane

0x4b99,	// (0x0003397f) navi_tabs_2_pane

0x4b99,	// (0x0003397f) navi_tabs_3_long_pane

0x4b99,	// (0x0003397f) navi_tabs_3_pane

0x4b99,	// (0x0003397f) navi_tabs_4_pane

0x1b13,	// (0x000308f9) tabs_2_active_pane_ParamLimits

0x1b13,	// (0x000308f9) tabs_2_active_pane

0x1b23,	// (0x00030909) tabs_2_passive_pane_ParamLimits

0x1b23,	// (0x00030909) tabs_2_passive_pane

0x1ae1,	// (0x000308c7) tabs_3_active_pane_ParamLimits

0x1ae1,	// (0x000308c7) tabs_3_active_pane

0x1af1,	// (0x000308d7) tabs_3_passive_pane_ParamLimits

0x1af1,	// (0x000308d7) tabs_3_passive_pane

0x1b02,	// (0x000308e8) tabs_3_passive_pane_cp_ParamLimits

0x1b02,	// (0x000308e8) tabs_3_passive_pane_cp

0x1a9d,	// (0x00030883) tabs_4_active_pane_ParamLimits

0x1a9d,	// (0x00030883) tabs_4_active_pane

0x1aae,	// (0x00030894) tabs_4_passive_pane_ParamLimits

0x1aae,	// (0x00030894) tabs_4_passive_pane

0x1abf,	// (0x000308a5) tabs_4_passive_pane_cp_ParamLimits

0x1abf,	// (0x000308a5) tabs_4_passive_pane_cp

0x1ad0,	// (0x000308b6) tabs_4_passive_pane_cp2_ParamLimits

0x1ad0,	// (0x000308b6) tabs_4_passive_pane_cp2

0x1a79,	// (0x0003085f) tabs_2_long_active_pane_ParamLimits

0x1a79,	// (0x0003085f) tabs_2_long_active_pane

0x1a8b,	// (0x00030871) tabs_2_long_passive_pane_ParamLimits

0x1a8b,	// (0x00030871) tabs_2_long_passive_pane

0x1a3a,	// (0x00030820) tabs_3_long_active_pane_ParamLimits

0x1a3a,	// (0x00030820) tabs_3_long_active_pane

0x1a4d,	// (0x00030833) tabs_3_long_passive_pane_ParamLimits

0x1a4d,	// (0x00030833) tabs_3_long_passive_pane

0x1a66,	// (0x0003084c) tabs_3_long_passive_pane_cp_ParamLimits

0x1a66,	// (0x0003084c) tabs_3_long_passive_pane_cp

0x19e0,	// (0x000307c6) volume_small_pane_g1

0x19e9,	// (0x000307cf) volume_small_pane_g2

0x19f2,	// (0x000307d8) volume_small_pane_g3

0x19fb,	// (0x000307e1) volume_small_pane_g4

0x1a04,	// (0x000307ea) volume_small_pane_g5

0x1a0d,	// (0x000307f3) volume_small_pane_g6

0x1a16,	// (0x000307fc) volume_small_pane_g7

0x1a1f,	// (0x00030805) volume_small_pane_g8

0x1a28,	// (0x0003080e) volume_small_pane_g9

0x1a31,	// (0x00030817) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003e697) volume_small_pane_g

0x3a80,	// (0x00032866) bg_active_tab_pane_cp2_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp2

0x3813,	// (0x000325f9) tabs_3_active_pane_g1

0xd1af,	// (0x0003bf95) tabs_3_active_pane_t1

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp2_ParamLimits

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp2

0x3813,	// (0x000325f9) tabs_3_passive_pane_g1

0xd1af,	// (0x0003bf95) tabs_3_passive_pane_t1

0x3a80,	// (0x00032866) bg_active_tab_pane_cp3_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp3

0x382d,	// (0x00032613) tabs_4_active_pane_g1

0xd1c1,	// (0x0003bfa7) tabs_4_active_pane_t1

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp3_ParamLimits

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp3

0x382d,	// (0x00032613) tabs_4_1_passive_pane_g1

0xd1c1,	// (0x0003bfa7) tabs_4_1_passive_pane_t1

0x505a,	// (0x00033e40) list_highlight_pane_cp2

0xddea,	// (0x0003cbd0) list_set_pane_ParamLimits

0xddea,	// (0x0003cbd0) list_set_pane

0xde84,	// (0x0003cc6a) main_pane_set_t1_ParamLimits

0xde84,	// (0x0003cc6a) main_pane_set_t1

0xdea4,	// (0x0003cc8a) main_pane_set_t2_ParamLimits

0xdea4,	// (0x0003cc8a) main_pane_set_t2

0xdeb8,	// (0x0003cc9e) main_pane_set_t3_ParamLimits

0xdeb8,	// (0x0003cc9e) main_pane_set_t3

0xdeca,	// (0x0003ccb0) main_pane_set_t4_ParamLimits

0xdeca,	// (0x0003ccb0) main_pane_set_t4

0x0003,

0xf981,	// (0x0003e767) main_pane_set_t_ParamLimits

0xf981,	// (0x0003e767) main_pane_set_t

0xdedc,	// (0x0003ccc2) setting_code_pane

0xdee6,	// (0x0003cccc) setting_slider_graphic_pane

0xdee6,	// (0x0003cccc) setting_slider_pane

0xdee6,	// (0x0003cccc) setting_text_pane

0xdee6,	// (0x0003cccc) setting_volume_pane

0x0548,	// (0x0002f32e) volume_set_pane

0x3805,	// (0x000325eb) bg_set_opt_pane_cp

0x0550,	// (0x0002f336) setting_slider_pane_t1

0x0569,	// (0x0002f34f) setting_slider_pane_t2

0x0583,	// (0x0002f369) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e344) setting_slider_pane_t

0x059b,	// (0x0002f381) slider_set_pane

0x3725,	// (0x0003250b) bg_set_opt_pane_cp2

0x3847,	// (0x0003262d) setting_slider_graphic_pane_g1

0x05b1,	// (0x0002f397) setting_slider_graphic_pane_t1

0x05c1,	// (0x0002f3a7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e34b) setting_slider_graphic_pane_t

0x05d1,	// (0x0002f3b7) slider_set_pane_cp

0x3725,	// (0x0003250b) input_focus_pane_cp1

0x692c,	// (0x00035712) list_set_text_pane

0x371b,	// (0x00032501) setting_text_pane_g1

0x3725,	// (0x0003250b) input_focus_pane_cp2

0x371b,	// (0x00032501) setting_code_pane_g1

0x3850,	// (0x00032636) setting_code_pane_t1

0x05d9,	// (0x0002f3bf) set_text_pane_t1_ParamLimits

0x05d9,	// (0x0002f3bf) set_text_pane_t1

0x40cc,	// (0x00032eb2) set_opt_bg_pane_g1

0x40d4,	// (0x00032eba) set_opt_bg_pane_g2

0x6906,	// (0x000356ec) set_opt_bg_pane_g3

0x40e4,	// (0x00032eca) set_opt_bg_pane_g4

0x40ec,	// (0x00032ed2) set_opt_bg_pane_g5

0x40f4,	// (0x00032eda) set_opt_bg_pane_g6

0x6910,	// (0x000356f6) set_opt_bg_pane_g7

0x6918,	// (0x000356fe) set_opt_bg_pane_g8

0x6922,	// (0x00035708) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003e754) set_opt_bg_pane_g

0x68f9,	// (0x000356df) slider_set_pane_g1

0x1ba8,	// (0x0003098e) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003e745) slider_set_pane_g

0x1b44,	// (0x0003092a) volume_set_pane_g1

0x1b4c,	// (0x00030932) volume_set_pane_g2

0x1b54,	// (0x0003093a) volume_set_pane_g3

0x1b5c,	// (0x00030942) volume_set_pane_g4

0x1b64,	// (0x0003094a) volume_set_pane_g5

0x1b6c,	// (0x00030952) volume_set_pane_g6

0x1b74,	// (0x0003095a) volume_set_pane_g7

0x1b7c,	// (0x00030962) volume_set_pane_g8

0x1b84,	// (0x0003096a) volume_set_pane_g9

0x1b8c,	// (0x00030972) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003e71d) volume_set_pane_g

0xd1d3,	// (0x0003bfb9) indicator_pane_ParamLimits

0xd1d3,	// (0x0003bfb9) indicator_pane

0xd1fb,	// (0x0003bfe1) main_idle_pane_g2_ParamLimits

0xd1fb,	// (0x0003bfe1) main_idle_pane_g2

0xd233,	// (0x0003c019) main_pane_idle_g1_ParamLimits

0xd233,	// (0x0003c019) main_pane_idle_g1

0x389f,	// (0x00032685) popup_clock_digital_analogue_window_ParamLimits

0x389f,	// (0x00032685) popup_clock_digital_analogue_window

0xd25a,	// (0x0003c040) soft_indicator_pane_ParamLimits

0xd25a,	// (0x0003c040) soft_indicator_pane

0xd274,	// (0x0003c05a) wallpaper_pane_ParamLimits

0xd274,	// (0x0003c05a) wallpaper_pane

0x371b,	// (0x00032501) wallpaper_pane_g1

0xd286,	// (0x0003c06c) indicator_pane_g1_ParamLimits

0xd286,	// (0x0003c06c) indicator_pane_g1

0x6d30,	// (0x00035b16) navi_navi_icon_text_pane_srt_g1

0x38f1,	// (0x000326d7) soft_indicator_pane_t1

0x390b,	// (0x000326f1) aid_ps_area_pane

0xd29c,	// (0x0003c082) aid_ps_clock_pane

0x392a,	// (0x00032710) aid_ps_indicator_pane

0x3936,	// (0x0003271c) indicator_ps_pane_ParamLimits

0x3936,	// (0x0003271c) indicator_ps_pane

0x3945,	// (0x0003272b) power_save_pane_g1_ParamLimits

0x3945,	// (0x0003272b) power_save_pane_g1

0x3951,	// (0x00032737) power_save_pane_g2_ParamLimits

0x3951,	// (0x00032737) power_save_pane_g2

0x014f,	// (0x0002ef35) aid_navinavi_width_pane

0x390b,	// (0x000326f1) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e350) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e350) power_save_pane_g

0x395f,	// (0x00032745) power_save_pane_t1_ParamLimits

0x395f,	// (0x00032745) power_save_pane_t1

0xd29c,	// (0x0003c082) aid_ps_clock_pane_ParamLimits

0x392a,	// (0x00032710) aid_ps_indicator_pane_ParamLimits

0x3971,	// (0x00032757) power_save_pane_t4_ParamLimits

0x3971,	// (0x00032757) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e355) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e355) power_save_pane_t

0x399b,	// (0x00032781) power_save_t3_ParamLimits

0x399b,	// (0x00032781) power_save_t3

0x3986,	// (0x0003276c) power_save_t2_ParamLimits

0x3986,	// (0x0003276c) power_save_t2

0x39b0,	// (0x00032796) indicator_ps_pane_g1

0xd2aa,	// (0x0003c090) ai_gene_pane_ParamLimits

0xd2aa,	// (0x0003c090) ai_gene_pane

0xd2c1,	// (0x0003c0a7) ai_links_pane_ParamLimits

0xd2c1,	// (0x0003c0a7) ai_links_pane

0xd2d9,	// (0x0003c0bf) indicator_pane_cp1_ParamLimits

0xd2d9,	// (0x0003c0bf) indicator_pane_cp1

0xd2e8,	// (0x0003c0ce) main_pane_idle_g1_cp_ParamLimits

0xd2e8,	// (0x0003c0ce) main_pane_idle_g1_cp

0x39e9,	// (0x000327cf) popup_ai_links_title_window

0xd300,	// (0x0003c0e6) soft_indicator_pane_cp1_ParamLimits

0xd300,	// (0x0003c0e6) soft_indicator_pane_cp1

0x66e8,	// (0x000354ce) ai_links_pane_g1

0x66f1,	// (0x000354d7) grid_ai_links_pane

0xdd2f,	// (0x0003cb15) ai_gene_pane_1

0x66d6,	// (0x000354bc) ai_gene_pane_2

0x66df,	// (0x000354c5) list_highlight_pane_cp4

0xdd0b,	// (0x0003caf1) cell_ai_link_pane_ParamLimits

0xdd0b,	// (0x0003caf1) cell_ai_link_pane

0x66a7,	// (0x0003548d) cell_ai_link_pane_g1

0x3c22,	// (0x00032a08) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003e6f8) cell_ai_link_pane_g

0x3725,	// (0x0003250b) grid_highlight_cp2

0x3725,	// (0x0003250b) bg_popup_sub_pane_cp1

0x3a0c,	// (0x000327f2) popup_ai_links_title_window_t1

0x65f5,	// (0x000353db) ai_gene_pane_1_g1_ParamLimits

0x65f5,	// (0x000353db) ai_gene_pane_1_g1

0x6601,	// (0x000353e7) ai_gene_pane_1_g2_ParamLimits

0x6601,	// (0x000353e7) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003e6ee) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003e6ee) ai_gene_pane_1_g

0x660e,	// (0x000353f4) ai_gene_pane_1_t1_ParamLimits

0x660e,	// (0x000353f4) ai_gene_pane_1_t1

0x6642,	// (0x00035428) grid_ai_soft_ind_pane

0x65e0,	// (0x000353c6) ai_gene_pane_2_t1_ParamLimits

0x65e0,	// (0x000353c6) ai_gene_pane_2_t1

0xd314,	// (0x0003c0fa) main_pane_empty_t1_ParamLimits

0xd314,	// (0x0003c0fa) main_pane_empty_t1

0xd32c,	// (0x0003c112) main_pane_empty_t2_ParamLimits

0xd32c,	// (0x0003c112) main_pane_empty_t2

0xd341,	// (0x0003c127) main_pane_empty_t3_ParamLimits

0xd341,	// (0x0003c127) main_pane_empty_t3

0xd353,	// (0x0003c139) main_pane_empty_t4_ParamLimits

0xd353,	// (0x0003c139) main_pane_empty_t4

0xd365,	// (0x0003c14b) main_pane_empty_t5_ParamLimits

0xd365,	// (0x0003c14b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e35a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e35a) main_pane_empty_t

0x411d,	// (0x00032f03) bg_popup_window_pane_ParamLimits

0x411d,	// (0x00032f03) bg_popup_window_pane

0x6350,	// (0x00035136) find_popup_pane_cp2_ParamLimits

0x6350,	// (0x00035136) find_popup_pane_cp2

0x635c,	// (0x00035142) heading_pane_ParamLimits

0x635c,	// (0x00035142) heading_pane

0x3725,	// (0x0003250b) bg_popup_sub_pane

0xdc8c,	// (0x0003ca72) bg_popup_window_pane_g1_ParamLimits

0xdc8c,	// (0x0003ca72) bg_popup_window_pane_g1

0xdc9b,	// (0x0003ca81) bg_popup_window_pane_g2_ParamLimits

0xdc9b,	// (0x0003ca81) bg_popup_window_pane_g2

0xdca7,	// (0x0003ca8d) bg_popup_window_pane_g3_ParamLimits

0xdca7,	// (0x0003ca8d) bg_popup_window_pane_g3

0xdcb3,	// (0x0003ca99) bg_popup_window_pane_g4_ParamLimits

0xdcb3,	// (0x0003ca99) bg_popup_window_pane_g4

0xdcc2,	// (0x0003caa8) bg_popup_window_pane_g5_ParamLimits

0xdcc2,	// (0x0003caa8) bg_popup_window_pane_g5

0xdcd2,	// (0x0003cab8) bg_popup_window_pane_g6_ParamLimits

0xdcd2,	// (0x0003cab8) bg_popup_window_pane_g6

0xdcde,	// (0x0003cac4) bg_popup_window_pane_g7_ParamLimits

0xdcde,	// (0x0003cac4) bg_popup_window_pane_g7

0xdced,	// (0x0003cad3) bg_popup_window_pane_g8_ParamLimits

0xdced,	// (0x0003cad3) bg_popup_window_pane_g8

0xdcfc,	// (0x0003cae2) bg_popup_window_pane_g9_ParamLimits

0xdcfc,	// (0x0003cae2) bg_popup_window_pane_g9

0x6336,	// (0x0003511c) bg_popup_window_pane_g10_ParamLimits

0x6336,	// (0x0003511c) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003e6b6) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003e6b6) bg_popup_window_pane_g

0x625f,	// (0x00035045) bg_popup_heading_pane_ParamLimits

0x625f,	// (0x00035045) bg_popup_heading_pane

0x1c30,	// (0x00030a16) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c30,	// (0x00030a16) tabs_4_passive_pane_cp_srt

0x1c42,	// (0x00030a28) tabs_4_passive_pane_srt_ParamLimits

0x6273,	// (0x00035059) heading_pane_g2

0x1c42,	// (0x00030a28) tabs_4_passive_pane_srt

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp3_srt

0x627b,	// (0x00035061) heading_pane_t1_ParamLimits

0x627b,	// (0x00035061) heading_pane_t1

0x6292,	// (0x00035078) heading_pane_t2_ParamLimits

0x6292,	// (0x00035078) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003e6b1) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003e6b1) heading_pane_t

0x5d80,	// (0x00034b66) bg_popup_heading_pane_g1

0x5e3b,	// (0x00034c21) bg_popup_heading_pane_g2

0x5e45,	// (0x00034c2b) bg_popup_heading_pane_g3

0x5e4f,	// (0x00034c35) bg_popup_heading_pane_g4

0x5e59,	// (0x00034c3f) bg_popup_heading_pane_g5

0x5e63,	// (0x00034c49) bg_popup_heading_pane_g6

0x5e6b,	// (0x00034c51) bg_popup_heading_pane_g7

0x5e73,	// (0x00034c59) bg_popup_heading_pane_g8

0x5e7d,	// (0x00034c63) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003e66d) bg_popup_heading_pane_g

0x5564,	// (0x0003434a) bg_popup_sub_pane_g1

0x5574,	// (0x0003435a) bg_popup_sub_pane_g2

0x556c,	// (0x00034352) bg_popup_sub_pane_g3

0x5584,	// (0x0003436a) bg_popup_sub_pane_g4

0x557c,	// (0x00034362) bg_popup_sub_pane_g5

0x558c,	// (0x00034372) bg_popup_sub_pane_g6

0x5594,	// (0x0003437a) bg_popup_sub_pane_g7

0x55a4,	// (0x0003438a) bg_popup_sub_pane_g8

0x559c,	// (0x00034382) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003e647) bg_popup_sub_pane_g

0x3a80,	// (0x00032866) bg_popup_window_pane_cp5_ParamLimits

0x3a80,	// (0x00032866) bg_popup_window_pane_cp5

0x3a9c,	// (0x00032882) popup_note_window_g1_ParamLimits

0x3a9c,	// (0x00032882) popup_note_window_g1

0x3aa8,	// (0x0003288e) popup_note_window_t1_ParamLimits

0x3aa8,	// (0x0003288e) popup_note_window_t1

0x3abe,	// (0x000328a4) popup_note_window_t2_ParamLimits

0x3abe,	// (0x000328a4) popup_note_window_t2

0x3ad4,	// (0x000328ba) popup_note_window_t3_ParamLimits

0x3ad4,	// (0x000328ba) popup_note_window_t3

0x3aea,	// (0x000328d0) popup_note_window_t4_ParamLimits

0x3aea,	// (0x000328d0) popup_note_window_t4

0x3b12,	// (0x000328f8) popup_note_window_t5_ParamLimits

0x3b12,	// (0x000328f8) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e365) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e365) popup_note_window_t

0x3b36,	// (0x0003291c) bg_popup_window_pane_cp6_ParamLimits

0x3b36,	// (0x0003291c) bg_popup_window_pane_cp6

0x5cfc,	// (0x00034ae2) popup_note_image_window_g1_ParamLimits

0x5cfc,	// (0x00034ae2) popup_note_image_window_g1

0x5d08,	// (0x00034aee) popup_note_image_window_g2_ParamLimits

0x5d08,	// (0x00034aee) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003e63b) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003e63b) popup_note_image_window_g

0x5d21,	// (0x00034b07) popup_note_image_window_t1_ParamLimits

0x5d21,	// (0x00034b07) popup_note_image_window_t1

0x5d3a,	// (0x00034b20) popup_note_image_window_t2_ParamLimits

0x5d3a,	// (0x00034b20) popup_note_image_window_t2

0x5d53,	// (0x00034b39) popup_note_image_window_t3_ParamLimits

0x5d53,	// (0x00034b39) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003e640) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003e640) popup_note_image_window_t

0x5bbd,	// (0x000349a3) bg_popup_window_pane_cp7_ParamLimits

0x5bbd,	// (0x000349a3) bg_popup_window_pane_cp7

0x5bed,	// (0x000349d3) popup_note_wait_window_g1_ParamLimits

0x5bed,	// (0x000349d3) popup_note_wait_window_g1

0x5bf9,	// (0x000349df) popup_note_wait_window_g2_ParamLimits

0x5bf9,	// (0x000349df) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003e629) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003e629) popup_note_wait_window_g

0x5c11,	// (0x000349f7) popup_note_wait_window_t1_ParamLimits

0x5c11,	// (0x000349f7) popup_note_wait_window_t1

0x5c38,	// (0x00034a1e) popup_note_wait_window_t2_ParamLimits

0x5c38,	// (0x00034a1e) popup_note_wait_window_t2

0x5c55,	// (0x00034a3b) popup_note_wait_window_t3_ParamLimits

0x5c55,	// (0x00034a3b) popup_note_wait_window_t3

0x5c68,	// (0x00034a4e) popup_note_wait_window_t4_ParamLimits

0x5c68,	// (0x00034a4e) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003e630) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003e630) popup_note_wait_window_t

0x5c8d,	// (0x00034a73) wait_bar_pane_ParamLimits

0x5c8d,	// (0x00034a73) wait_bar_pane

0x3725,	// (0x0003250b) wait_anim_pane

0x3725,	// (0x0003250b) wait_border_pane

0x371b,	// (0x00032501) wait_anim_pane_g1

0x371b,	// (0x00032501) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003e4e9) wait_anim_pane_g

0x5b61,	// (0x00034947) wait_border_pane_g1

0x5b6c,	// (0x00034952) wait_border_pane_g2

0x5b75,	// (0x0003495b) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003e622) wait_border_pane_g

0x59cc,	// (0x000347b2) bg_popup_window_pane_cp16_ParamLimits

0x59cc,	// (0x000347b2) bg_popup_window_pane_cp16

0x5acc,	// (0x000348b2) indicator_popup_pane_cp4_ParamLimits

0x5acc,	// (0x000348b2) indicator_popup_pane_cp4

0x5ae0,	// (0x000348c6) popup_query_data_window_t1_ParamLimits

0x5ae0,	// (0x000348c6) popup_query_data_window_t1

0x5af2,	// (0x000348d8) popup_query_data_window_t2_ParamLimits

0x5af2,	// (0x000348d8) popup_query_data_window_t2

0x5b0b,	// (0x000348f1) popup_query_data_window_t3_ParamLimits

0x5b0b,	// (0x000348f1) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003e61b) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003e61b) popup_query_data_window_t

0x5b25,	// (0x0003490b) query_popup_data_pane_ParamLimits

0x5b25,	// (0x0003490b) query_popup_data_pane

0x5b39,	// (0x0003491f) query_popup_data_pane_cp1_ParamLimits

0x5b39,	// (0x0003491f) query_popup_data_pane_cp1

0x59cc,	// (0x000347b2) bg_popup_window_pane_cp10_ParamLimits

0x59cc,	// (0x000347b2) bg_popup_window_pane_cp10

0x59fe,	// (0x000347e4) indicator_popup_pane_ParamLimits

0x59fe,	// (0x000347e4) indicator_popup_pane

0x5a20,	// (0x00034806) popup_query_code_window_t1_ParamLimits

0x5a20,	// (0x00034806) popup_query_code_window_t1

0x5a3a,	// (0x00034820) popup_query_code_window_t2_ParamLimits

0x5a3a,	// (0x00034820) popup_query_code_window_t2

0x5a83,	// (0x00034869) popup_query_code_window_t3_ParamLimits

0x5a83,	// (0x00034869) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003e614) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003e614) popup_query_code_window_t

0x5ab2,	// (0x00034898) query_popup_pane_ParamLimits

0x5ab2,	// (0x00034898) query_popup_pane

0x3b36,	// (0x0003291c) bg_popup_window_pane_cp15_ParamLimits

0x3b36,	// (0x0003291c) bg_popup_window_pane_cp15

0x3b54,	// (0x0003293a) indicator_popup_pane_cp1_ParamLimits

0x3b54,	// (0x0003293a) indicator_popup_pane_cp1

0x3b67,	// (0x0003294d) indicator_popup_pane_cp2_ParamLimits

0x3b67,	// (0x0003294d) indicator_popup_pane_cp2

0x3b7a,	// (0x00032960) popup_query_data_code_window_g1_ParamLimits

0x3b7a,	// (0x00032960) popup_query_data_code_window_g1

0x3b8d,	// (0x00032973) popup_query_data_code_window_t1_ParamLimits

0x3b8d,	// (0x00032973) popup_query_data_code_window_t1

0x3b9f,	// (0x00032985) popup_query_data_code_window_t2_ParamLimits

0x3b9f,	// (0x00032985) popup_query_data_code_window_t2

0x3bb1,	// (0x00032997) popup_query_data_code_window_t3_ParamLimits

0x3bb1,	// (0x00032997) popup_query_data_code_window_t3

0x3bc7,	// (0x000329ad) popup_query_data_code_window_t4_ParamLimits

0x3bc7,	// (0x000329ad) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e370) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e370) popup_query_data_code_window_t

0x18f1,	// (0x000306d7) list_single_midp_graphic_pane_g3

0x3bdf,	// (0x000329c5) query_popup_data_pane_cp2_ParamLimits

0x3bf2,	// (0x000329d8) query_popup_pane_cp2_ParamLimits

0x3bf2,	// (0x000329d8) query_popup_pane_cp2

0x3725,	// (0x0003250b) bg_popup_window_pane_cp11

0x59c4,	// (0x000347aa) heading_pane_cp5

0x3cdd,	// (0x00032ac3) listscroll_popup_info_pane

0x3725,	// (0x0003250b) input_focus_pane_cp3

0x3c05,	// (0x000329eb) query_popup_pane_t1

0x3c13,	// (0x000329f9) list_popup_info_pane_ParamLimits

0x3c13,	// (0x000329f9) list_popup_info_pane

0x3c22,	// (0x00032a08) listscroll_popup_info_pane_g1

0x3c2a,	// (0x00032a10) scroll_pane_cp7

0x3c34,	// (0x00032a1a) popup_info_list_pane_t1_ParamLimits

0x3c34,	// (0x00032a1a) popup_info_list_pane_t1

0x3c4e,	// (0x00032a34) popup_info_list_pane_t2_ParamLimits

0x3c4e,	// (0x00032a34) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e379) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e379) popup_info_list_pane_t

0x3725,	// (0x0003250b) bg_popup_window_pane_cp12

0x6d4a,	// (0x00035b30) find_popup_pane

0x3805,	// (0x000325eb) bg_popup_window_pane_cp3

0x3c68,	// (0x00032a4e) heading_pane_cp3

0x3c74,	// (0x00032a5a) listscroll_popup_graphic_pane

0x3725,	// (0x0003250b) bg_popup_window_pane_cp4

0xd3c7,	// (0x0003c1ad) heading_pane_cp4

0x3cdd,	// (0x00032ac3) listscroll_popup_colour_pane

0x3ce5,	// (0x00032acb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3ce5,	// (0x00032acb) cell_large_graphic_colour_none_popup_pane

0xd3cf,	// (0x0003c1b5) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3cf,	// (0x0003c1b5) grid_large_graphic_colour_popup_pane

0x3d25,	// (0x00032b0b) listscroll_popup_colour_pane_g1_ParamLimits

0x3d25,	// (0x00032b0b) listscroll_popup_colour_pane_g1

0x3d3c,	// (0x00032b22) listscroll_popup_colour_pane_g2_ParamLimits

0x3d3c,	// (0x00032b22) listscroll_popup_colour_pane_g2

0x3d53,	// (0x00032b39) listscroll_popup_colour_pane_g3_ParamLimits

0x3d53,	// (0x00032b39) listscroll_popup_colour_pane_g3

0xd3f3,	// (0x0003c1d9) listscroll_popup_colour_pane_g4_ParamLimits

0xd3f3,	// (0x0003c1d9) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e37e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e37e) listscroll_popup_colour_pane_g

0x3d77,	// (0x00032b5d) scroll_pane_cp6_ParamLimits

0x3d77,	// (0x00032b5d) scroll_pane_cp6

0xd403,	// (0x0003c1e9) cell_large_graphic_colour_popup_pane_ParamLimits

0xd403,	// (0x0003c1e9) cell_large_graphic_colour_popup_pane

0x3da8,	// (0x00032b8e) cell_large_graphic_colour_none_popup_pane_t1

0x3725,	// (0x0003250b) grid_highlight_pane_cp5

0x3db7,	// (0x00032b9d) cell_large_graphic_colour_popup_pane_g1

0x3dbf,	// (0x00032ba5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e387) cell_large_graphic_colour_popup_pane_g

0x3dc7,	// (0x00032bad) cell_large_graphic_colour_popup_pane_g2_copy1

0x3dd0,	// (0x00032bb6) grid_highlight_pane_cp4

0x3dd8,	// (0x00032bbe) bg_popup_window_pane_cp8_ParamLimits

0x3dd8,	// (0x00032bbe) bg_popup_window_pane_cp8

0x3df3,	// (0x00032bd9) popup_snote_single_text_window_g1_ParamLimits

0x3df3,	// (0x00032bd9) popup_snote_single_text_window_g1

0x3e05,	// (0x00032beb) popup_snote_single_text_window_t1_ParamLimits

0x3e05,	// (0x00032beb) popup_snote_single_text_window_t1

0x3e18,	// (0x00032bfe) popup_snote_single_text_window_t2_ParamLimits

0x3e18,	// (0x00032bfe) popup_snote_single_text_window_t2

0x3e2b,	// (0x00032c11) popup_snote_single_text_window_t3_ParamLimits

0x3e2b,	// (0x00032c11) popup_snote_single_text_window_t3

0x3e64,	// (0x00032c4a) popup_snote_single_text_window_t4_ParamLimits

0x3e64,	// (0x00032c4a) popup_snote_single_text_window_t4

0x3e98,	// (0x00032c7e) popup_snote_single_text_window_t5_ParamLimits

0x3e98,	// (0x00032c7e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e38c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e38c) popup_snote_single_text_window_t

0x3ec7,	// (0x00032cad) bg_popup_window_pane_cp9_ParamLimits

0x3ec7,	// (0x00032cad) bg_popup_window_pane_cp9

0x3df3,	// (0x00032bd9) popup_snote_single_graphic_window_g1_ParamLimits

0x3df3,	// (0x00032bd9) popup_snote_single_graphic_window_g1

0x3ed5,	// (0x00032cbb) popup_snote_single_graphic_window_g2_ParamLimits

0x3ed5,	// (0x00032cbb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e397) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e397) popup_snote_single_graphic_window_g

0x3ee1,	// (0x00032cc7) popup_snote_single_graphic_window_t1_ParamLimits

0x3ee1,	// (0x00032cc7) popup_snote_single_graphic_window_t1

0x3ef4,	// (0x00032cda) popup_snote_single_graphic_window_t2_ParamLimits

0x3ef4,	// (0x00032cda) popup_snote_single_graphic_window_t2

0x3f07,	// (0x00032ced) popup_snote_single_graphic_window_t3_ParamLimits

0x3f07,	// (0x00032ced) popup_snote_single_graphic_window_t3

0x3f40,	// (0x00032d26) popup_snote_single_graphic_window_t4_ParamLimits

0x3f40,	// (0x00032d26) popup_snote_single_graphic_window_t4

0x3f74,	// (0x00032d5a) popup_snote_single_graphic_window_t5_ParamLimits

0x3f74,	// (0x00032d5a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e39c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e39c) popup_snote_single_graphic_window_t

0x6c8c,	// (0x00035a72) grid_graphic_popup_pane_ParamLimits

0x6c8c,	// (0x00035a72) grid_graphic_popup_pane

0x6cb6,	// (0x00035a9c) listscroll_popup_graphic_pane_g1_ParamLimits

0x6cb6,	// (0x00035a9c) listscroll_popup_graphic_pane_g1

0xdff5,	// (0x0003cddb) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff5,	// (0x0003cddb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003e791) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003e791) listscroll_popup_graphic_pane_g

0x6cde,	// (0x00035ac4) scroll_pane_cp5

0xdf9a,	// (0x0003cd80) cell_graphic_popup_pane_ParamLimits

0xdf9a,	// (0x0003cd80) cell_graphic_popup_pane

0x6c0c,	// (0x000359f2) cell_graphic_popup_pane_g1

0x6c14,	// (0x000359fa) cell_graphic_popup_pane_g2

0x3dc7,	// (0x00032bad) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003e78a) cell_graphic_popup_pane_g

0x6c1d,	// (0x00035a03) cell_graphic_popup_pane_t2

0x3dd0,	// (0x00032bb6) grid_highlight_pane_cp3

0x3fb5,	// (0x00032d9b) list_gen_pane_ParamLimits

0x3fb5,	// (0x00032d9b) list_gen_pane

0x3fe7,	// (0x00032dcd) scroll_pane

0xdf51,	// (0x0003cd37) bg_list_pane_g1_ParamLimits

0xdf51,	// (0x0003cd37) bg_list_pane_g1

0x6b81,	// (0x00035967) bg_list_pane_g2_ParamLimits

0x6b81,	// (0x00035967) bg_list_pane_g2

0x6b96,	// (0x0003597c) bg_list_pane_g3_ParamLimits

0x6b96,	// (0x0003597c) bg_list_pane_g3

0x6baa,	// (0x00035990) bg_list_pane_g4_ParamLimits

0x6baa,	// (0x00035990) bg_list_pane_g4

0xdf6e,	// (0x0003cd54) bg_list_pane_g5_ParamLimits

0xdf6e,	// (0x0003cd54) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003e77f) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003e77f) bg_list_pane_g

0xdf19,	// (0x0003ccff) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double2_graphic_large_graphic_pane

0xdf19,	// (0x0003ccff) list_double2_graphic_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double2_graphic_pane

0xdf19,	// (0x0003ccff) list_double2_large_graphic_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double2_large_graphic_pane

0xdf19,	// (0x0003ccff) list_double2_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double2_pane

0xdf19,	// (0x0003ccff) list_double_graphic_heading_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_graphic_heading_pane

0xdf19,	// (0x0003ccff) list_double_graphic_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_graphic_pane

0xdf19,	// (0x0003ccff) list_double_heading_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_heading_pane

0xdf19,	// (0x0003ccff) list_double_large_graphic_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_large_graphic_pane

0xdf19,	// (0x0003ccff) list_double_number_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_number_pane

0xdf19,	// (0x0003ccff) list_double_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_pane

0xdf19,	// (0x0003ccff) list_double_time_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_double_time_pane

0xdf19,	// (0x0003ccff) list_setting_number_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_setting_number_pane

0xdf19,	// (0x0003ccff) list_setting_pane_ParamLimits

0xdf19,	// (0x0003ccff) list_setting_pane

0xdf2b,	// (0x0003cd11) list_single_2graphic_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_2graphic_pane

0xdf2b,	// (0x0003cd11) list_single_graphic_heading_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_graphic_heading_pane

0xdf2b,	// (0x0003cd11) list_single_graphic_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_graphic_pane

0xdf2b,	// (0x0003cd11) list_single_heading_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_heading_pane

0xdf2b,	// (0x0003cd11) list_single_large_graphic_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_large_graphic_pane

0xdf2b,	// (0x0003cd11) list_single_number_heading_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_number_heading_pane

0xdf2b,	// (0x0003cd11) list_single_number_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_number_pane

0xdf2b,	// (0x0003cd11) list_single_pane_ParamLimits

0xdf2b,	// (0x0003cd11) list_single_pane

0x3725,	// (0x0003250b) list_highlight_pane_cp1

0x2d99,	// (0x00031b7f) list_single_pane_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_pane_g1

0x2da5,	// (0x00031b8b) list_single_pane_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_pane_g

0x3083,	// (0x00031e69) list_single_pane_t1_ParamLimits

0x3083,	// (0x00031e69) list_single_pane_t1

0x2d99,	// (0x00031b7f) list_single_number_pane_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_number_pane_g1

0x2da5,	// (0x00031b8b) list_single_number_pane_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_number_pane_g

0x2db1,	// (0x00031b97) list_single_number_pane_t1_ParamLimits

0x2db1,	// (0x00031b97) list_single_number_pane_t1

0xc865,	// (0x0003b64b) list_single_number_pane_t2_ParamLimits

0xc865,	// (0x0003b64b) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003e740) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003e740) list_single_number_pane_t

0xb99b,	// (0x0003a781) list_single_graphic_pane_g1_ParamLimits

0xb99b,	// (0x0003a781) list_single_graphic_pane_g1

0x2d99,	// (0x00031b7f) list_single_graphic_pane_g2_ParamLimits

0x2d99,	// (0x00031b7f) list_single_graphic_pane_g2

0x2da5,	// (0x00031b8b) list_single_graphic_pane_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e3a7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e3a7) list_single_graphic_pane_g

0xb9a7,	// (0x0003a78d) list_single_graphic_pane_t1_ParamLimits

0xb9a7,	// (0x0003a78d) list_single_graphic_pane_t1

0x2d99,	// (0x00031b7f) list_single_heading_pane_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_heading_pane_g1

0x2da5,	// (0x00031b8b) list_single_heading_pane_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_heading_pane_g

0xb9bd,	// (0x0003a7a3) list_single_heading_pane_t1_ParamLimits

0xb9bd,	// (0x0003a7a3) list_single_heading_pane_t1

0xb9d3,	// (0x0003a7b9) list_single_heading_pane_t2_ParamLimits

0xb9d3,	// (0x0003a7b9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e3b3) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e3b3) list_single_heading_pane_t

0x2d99,	// (0x00031b7f) list_single_number_heading_pane_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_number_heading_pane_g1

0x2da5,	// (0x00031b8b) list_single_number_heading_pane_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_number_heading_pane_g

0xb9bd,	// (0x0003a7a3) list_single_number_heading_pane_t1_ParamLimits

0xb9bd,	// (0x0003a7a3) list_single_number_heading_pane_t1

0x3037,	// (0x00031e1d) list_single_number_heading_pane_t2_ParamLimits

0x3037,	// (0x00031e1d) list_single_number_heading_pane_t2

0x3049,	// (0x00031e2f) list_single_number_heading_pane_t3_ParamLimits

0x3049,	// (0x00031e2f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003e3b8) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003e3b8) list_single_number_heading_pane_t

0x2d8d,	// (0x00031b73) list_single_graphic_heading_pane_g1_ParamLimits

0x2d8d,	// (0x00031b73) list_single_graphic_heading_pane_g1

0xb9e5,	// (0x0003a7cb) list_single_graphic_heading_pane_g4_ParamLimits

0xb9e5,	// (0x0003a7cb) list_single_graphic_heading_pane_g4

0x2da5,	// (0x00031b8b) list_single_graphic_heading_pane_g5_ParamLimits

0x2da5,	// (0x00031b8b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003e3bf) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003e3bf) list_single_graphic_heading_pane_g

0xb9bd,	// (0x0003a7a3) list_single_graphic_heading_pane_t1_ParamLimits

0xb9bd,	// (0x0003a7a3) list_single_graphic_heading_pane_t1

0xb9f6,	// (0x0003a7dc) list_single_graphic_heading_pane_t2_ParamLimits

0xb9f6,	// (0x0003a7dc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003e3c6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003e3c6) list_single_graphic_heading_pane_t

0x3099,	// (0x00031e7f) list_single_large_graphic_pane_g1_ParamLimits

0x3099,	// (0x00031e7f) list_single_large_graphic_pane_g1

0x2d99,	// (0x00031b7f) list_single_large_graphic_pane_g2_ParamLimits

0x2d99,	// (0x00031b7f) list_single_large_graphic_pane_g2

0x2da5,	// (0x00031b8b) list_single_large_graphic_pane_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003e3cb) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003e3cb) list_single_large_graphic_pane_g

0x5b6c,	// (0x00034952) wait_border_pane_g2_copy1

0xba08,	// (0x0003a7ee) list_single_large_graphic_pane_g4_cp2

0x30a5,	// (0x00031e8b) list_single_large_graphic_pane_t1_ParamLimits

0x30a5,	// (0x00031e8b) list_single_large_graphic_pane_t1

0xba10,	// (0x0003a7f6) list_double_pane_g1_ParamLimits

0xba10,	// (0x0003a7f6) list_double_pane_g1

0xba1c,	// (0x0003a802) list_double_pane_g2_ParamLimits

0xba1c,	// (0x0003a802) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003e3d2) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003e3d2) list_double_pane_g

0xba28,	// (0x0003a80e) list_double_pane_t1_ParamLimits

0xba28,	// (0x0003a80e) list_double_pane_t1

0xba3e,	// (0x0003a824) list_double_pane_t2_ParamLimits

0xba3e,	// (0x0003a824) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003e3d7) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003e3d7) list_double_pane_t

0xba50,	// (0x0003a836) list_double2_pane_g1_ParamLimits

0xba50,	// (0x0003a836) list_double2_pane_g1

0xba61,	// (0x0003a847) list_double2_pane_g2_ParamLimits

0xba61,	// (0x0003a847) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003e3dc) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003e3dc) list_double2_pane_g

0xba6d,	// (0x0003a853) list_double2_pane_t1_ParamLimits

0xba6d,	// (0x0003a853) list_double2_pane_t1

0xba83,	// (0x0003a869) list_double2_pane_t2_ParamLimits

0xba83,	// (0x0003a869) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003e3e1) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003e3e1) list_double2_pane_t

0xba10,	// (0x0003a7f6) list_double_number_pane_g1_ParamLimits

0xba10,	// (0x0003a7f6) list_double_number_pane_g1

0xba1c,	// (0x0003a802) list_double_number_pane_g2_ParamLimits

0xba1c,	// (0x0003a802) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003e3d2) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003e3d2) list_double_number_pane_g

0xba95,	// (0x0003a87b) list_double_number_pane_t1_ParamLimits

0xba95,	// (0x0003a87b) list_double_number_pane_t1

0xbaa7,	// (0x0003a88d) list_double_number_pane_t2_ParamLimits

0xbaa7,	// (0x0003a88d) list_double_number_pane_t2

0xbabd,	// (0x0003a8a3) list_double_number_pane_t3_ParamLimits

0xbabd,	// (0x0003a8a3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003e3e6) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003e3e6) list_double_number_pane_t

0xbacf,	// (0x0003a8b5) list_double_graphic_pane_g1_ParamLimits

0xbacf,	// (0x0003a8b5) list_double_graphic_pane_g1

0xbadb,	// (0x0003a8c1) list_double_graphic_pane_g2_ParamLimits

0xbadb,	// (0x0003a8c1) list_double_graphic_pane_g2

0xbaea,	// (0x0003a8d0) list_double_graphic_pane_g3_ParamLimits

0xbaea,	// (0x0003a8d0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003e3ed) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003e3ed) list_double_graphic_pane_g

0xbb02,	// (0x0003a8e8) list_double_graphic_pane_t1_ParamLimits

0xbb02,	// (0x0003a8e8) list_double_graphic_pane_t1

0xbb18,	// (0x0003a8fe) list_double_graphic_pane_t2_ParamLimits

0xbb18,	// (0x0003a8fe) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003e3f6) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003e3f6) list_double_graphic_pane_t

0x0922,	// (0x0002f708) list_double2_graphic_pane_g1_ParamLimits

0x0922,	// (0x0002f708) list_double2_graphic_pane_g1

0x335a,	// (0x00032140) list_double2_graphic_pane_g2_ParamLimits

0x335a,	// (0x00032140) list_double2_graphic_pane_g2

0xba61,	// (0x0003a847) list_double2_graphic_pane_g3_ParamLimits

0xba61,	// (0x0003a847) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003e3fb) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003e3fb) list_double2_graphic_pane_g

0xbb2a,	// (0x0003a910) list_double2_graphic_pane_t1_ParamLimits

0xbb2a,	// (0x0003a910) list_double2_graphic_pane_t1

0xbb40,	// (0x0003a926) list_double2_graphic_pane_t2_ParamLimits

0xbb40,	// (0x0003a926) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003e402) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003e402) list_double2_graphic_pane_t

0xbb52,	// (0x0003a938) list_double_large_graphic_pane_g1_ParamLimits

0xbb52,	// (0x0003a938) list_double_large_graphic_pane_g1

0xbb71,	// (0x0003a957) list_double_large_graphic_pane_g2_ParamLimits

0xbb71,	// (0x0003a957) list_double_large_graphic_pane_g2

0xba1c,	// (0x0003a802) list_double_large_graphic_pane_g3_ParamLimits

0xba1c,	// (0x0003a802) list_double_large_graphic_pane_g3

0xbb82,	// (0x0003a968) list_double_large_graphic_pane_g4_ParamLimits

0xbb82,	// (0x0003a968) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003e407) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003e407) list_double_large_graphic_pane_g

0xbb95,	// (0x0003a97b) list_double_large_graphic_pane_t1_ParamLimits

0xbb95,	// (0x0003a97b) list_double_large_graphic_pane_t1

0xbbae,	// (0x0003a994) list_double_large_graphic_pane_t2_ParamLimits

0xbbae,	// (0x0003a994) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e412) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e412) list_double_large_graphic_pane_t

0xbbc0,	// (0x0003a9a6) list_double2_large_graphic_pane_g1_ParamLimits

0xbbc0,	// (0x0003a9a6) list_double2_large_graphic_pane_g1

0xba50,	// (0x0003a836) list_double2_large_graphic_pane_g2_ParamLimits

0xba50,	// (0x0003a836) list_double2_large_graphic_pane_g2

0xba61,	// (0x0003a847) list_double2_large_graphic_pane_g3_ParamLimits

0xba61,	// (0x0003a847) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e417) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e417) list_double2_large_graphic_pane_g

0xbbcc,	// (0x0003a9b2) list_double2_large_graphic_pane_t1_ParamLimits

0xbbcc,	// (0x0003a9b2) list_double2_large_graphic_pane_t1

0xbbe2,	// (0x0003a9c8) list_double2_large_graphic_pane_t2_ParamLimits

0xbbe2,	// (0x0003a9c8) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e41e) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e41e) list_double2_large_graphic_pane_t

0xbbf4,	// (0x0003a9da) list_double_heading_pane_g1_ParamLimits

0xbbf4,	// (0x0003a9da) list_double_heading_pane_g1

0x06f7,	// (0x0002f4dd) list_double_heading_pane_g2_ParamLimits

0x06f7,	// (0x0002f4dd) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003e423) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003e423) list_double_heading_pane_g

0xbc05,	// (0x0003a9eb) list_double_heading_pane_t1_ParamLimits

0xbc05,	// (0x0003a9eb) list_double_heading_pane_t1

0xba83,	// (0x0003a869) list_double_heading_pane_t2_ParamLimits

0xba83,	// (0x0003a869) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003e428) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003e428) list_double_heading_pane_t

0x0922,	// (0x0002f708) list_double_graphic_heading_pane_g1_ParamLimits

0x0922,	// (0x0002f708) list_double_graphic_heading_pane_g1

0xbbf4,	// (0x0003a9da) list_double_graphic_heading_pane_g2_ParamLimits

0xbbf4,	// (0x0003a9da) list_double_graphic_heading_pane_g2

0x06f7,	// (0x0002f4dd) list_double_graphic_heading_pane_g3_ParamLimits

0x06f7,	// (0x0002f4dd) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003e42d) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003e42d) list_double_graphic_heading_pane_g

0xbc1b,	// (0x0003aa01) list_double_graphic_heading_pane_t1_ParamLimits

0xbc1b,	// (0x0003aa01) list_double_graphic_heading_pane_t1

0xbb40,	// (0x0003a926) list_double_graphic_heading_pane_t2_ParamLimits

0xbb40,	// (0x0003a926) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003e434) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003e434) list_double_graphic_heading_pane_t

0xbb71,	// (0x0003a957) list_double_time_pane_g1_ParamLimits

0xbb71,	// (0x0003a957) list_double_time_pane_g1

0xba1c,	// (0x0003a802) list_double_time_pane_g2_ParamLimits

0xba1c,	// (0x0003a802) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003e439) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003e439) list_double_time_pane_g

0xbc31,	// (0x0003aa17) list_double_time_pane_t1_ParamLimits

0xbc31,	// (0x0003aa17) list_double_time_pane_t1

0xbc47,	// (0x0003aa2d) list_double_time_pane_t2_ParamLimits

0xbc47,	// (0x0003aa2d) list_double_time_pane_t2

0xbc59,	// (0x0003aa3f) list_double_time_pane_t3_ParamLimits

0xbc59,	// (0x0003aa3f) list_double_time_pane_t3

0xbc6b,	// (0x0003aa51) list_double_time_pane_t4_ParamLimits

0xbc6b,	// (0x0003aa51) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003e43e) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003e43e) list_double_time_pane_t

0xbc7d,	// (0x0003aa63) list_setting_pane_g1_ParamLimits

0xbc7d,	// (0x0003aa63) list_setting_pane_g1

0xbc89,	// (0x0003aa6f) list_setting_pane_g2_ParamLimits

0xbc89,	// (0x0003aa6f) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003e447) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003e447) list_setting_pane_g

0xbc95,	// (0x0003aa7b) list_setting_pane_t1_ParamLimits

0xbc95,	// (0x0003aa7b) list_setting_pane_t1

0xbcaf,	// (0x0003aa95) list_setting_pane_t2_ParamLimits

0xbcaf,	// (0x0003aa95) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003e44c) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003e44c) list_setting_pane_t

0xbcee,	// (0x0003aad4) set_value_pane_cp_ParamLimits

0xbcee,	// (0x0003aad4) set_value_pane_cp

0xbcfa,	// (0x0003aae0) list_setting_number_pane_g1_ParamLimits

0xbcfa,	// (0x0003aae0) list_setting_number_pane_g1

0xbd06,	// (0x0003aaec) list_setting_number_pane_g2_ParamLimits

0xbd06,	// (0x0003aaec) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003e453) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003e453) list_setting_number_pane_g

0xbd12,	// (0x0003aaf8) list_setting_number_pane_t1_ParamLimits

0xbd12,	// (0x0003aaf8) list_setting_number_pane_t1

0xbd2b,	// (0x0003ab11) list_setting_number_pane_t2_ParamLimits

0xbd2b,	// (0x0003ab11) list_setting_number_pane_t2

0xbd45,	// (0x0003ab2b) list_setting_number_pane_t3_ParamLimits

0xbd45,	// (0x0003ab2b) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003e458) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003e458) list_setting_number_pane_t

0xbcee,	// (0x0003aad4) set_value_pane_ParamLimits

0xbcee,	// (0x0003aad4) set_value_pane

0x401b,	// (0x00032e01) bg_set_opt_pane_ParamLimits

0x401b,	// (0x00032e01) bg_set_opt_pane

0x0a83,	// (0x0002f869) set_value_pane_t1

0x403c,	// (0x00032e22) slider_set_pane_cp3

0x4045,	// (0x00032e2b) volume_small_pane_cp

0x404e,	// (0x00032e34) list_form_gen_pane

0x4057,	// (0x00032e3d) scroll_pane_cp8

0xbd88,	// (0x0003ab6e) form_field_data_pane_ParamLimits

0xbd88,	// (0x0003ab6e) form_field_data_pane

0xbd9f,	// (0x0003ab85) form_field_data_wide_pane_ParamLimits

0xbd9f,	// (0x0003ab85) form_field_data_wide_pane

0xbdbf,	// (0x0003aba5) form_field_popup_pane_ParamLimits

0xbdbf,	// (0x0003aba5) form_field_popup_pane

0xbdd7,	// (0x0003abbd) form_field_popup_wide_pane_ParamLimits

0xbdd7,	// (0x0003abbd) form_field_popup_wide_pane

0x0b17,	// (0x0002f8fd) form_field_slider_pane_ParamLimits

0x0b17,	// (0x0002f8fd) form_field_slider_pane

0x0b2a,	// (0x0002f910) form_field_slider_wide_pane_ParamLimits

0x0b2a,	// (0x0002f910) form_field_slider_wide_pane

0x4068,	// (0x00032e4e) data_form_pane

0xbdf8,	// (0x0003abde) form_field_data_pane_t1

0x4074,	// (0x00032e5a) input_focus_pane

0x0b5f,	// (0x0002f945) data_form_wide_pane

0x0b7c,	// (0x0002f962) form_field_data_wide_pane_t1

0x3de5,	// (0x00032bcb) input_focus_pane_cp6

0xbe12,	// (0x0003abf8) form_field_popup_pane_t1

0x4074,	// (0x00032e5a) input_focus_pane_cp7

0x40a2,	// (0x00032e88) list_form_pane

0x0bbe,	// (0x0002f9a4) form_field_popup_wide_pane_t1

0x4074,	// (0x00032e5a) input_focus_pane_cp8

0x40ae,	// (0x00032e94) list_form_wide_pane

0xbe34,	// (0x0003ac1a) form_field_slider_pane_t1_ParamLimits

0xbe34,	// (0x0003ac1a) form_field_slider_pane_t1

0xbe4c,	// (0x0003ac32) form_field_slider_pane_t2_ParamLimits

0xbe4c,	// (0x0003ac32) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003e468) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003e468) form_field_slider_pane_t

0x3a80,	// (0x00032866) input_focus_pane_cp9_ParamLimits

0x3a80,	// (0x00032866) input_focus_pane_cp9

0xbe61,	// (0x0003ac47) slider_cont_pane_ParamLimits

0xbe61,	// (0x0003ac47) slider_cont_pane

0x40ba,	// (0x00032ea0) form_field_slider_wide_pane_t1_ParamLimits

0x40ba,	// (0x00032ea0) form_field_slider_wide_pane_t1

0x0c1a,	// (0x0002fa00) form_field_slider_wide_pane_t2_ParamLimits

0x0c1a,	// (0x0002fa00) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003e46d) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003e46d) form_field_slider_wide_pane_t

0x3a80,	// (0x00032866) input_focus_pane_cp10_ParamLimits

0x3a80,	// (0x00032866) input_focus_pane_cp10

0xbe75,	// (0x0003ac5b) slider_cont_pane_cp1_ParamLimits

0xbe75,	// (0x0003ac5b) slider_cont_pane_cp1

0xbe89,	// (0x0003ac6f) slider_form_pane_cp

0x40cc,	// (0x00032eb2) input_focus_pane_g1

0x40d4,	// (0x00032eba) input_focus_pane_g2

0x40dc,	// (0x00032ec2) input_focus_pane_g3

0x40e4,	// (0x00032eca) input_focus_pane_g4

0x40ec,	// (0x00032ed2) input_focus_pane_g5

0x40f4,	// (0x00032eda) input_focus_pane_g6

0x40fc,	// (0x00032ee2) input_focus_pane_g7

0x4104,	// (0x00032eea) input_focus_pane_g8

0x410c,	// (0x00032ef2) input_focus_pane_g9

0x371b,	// (0x00032501) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003e472) input_focus_pane_g

0x5b75,	// (0x0003495b) wait_border_pane_g3_copy1

0xbe91,	// (0x0003ac77) data_form_pane_t1

0x371b,	// (0x00032501) wait_anim_pane_g1_copy1

0xc877,	// (0x0003b65d) data_form_wide_pane_t1

0xbeab,	// (0x0003ac91) list_form_graphic_pane_cp_ParamLimits

0xbeab,	// (0x0003ac91) list_form_graphic_pane_cp

0x6aa1,	// (0x00035887) slider_form_pane_g1

0x6aaa,	// (0x00035890) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003e770) slider_form_pane_g

0xbeab,	// (0x0003ac91) list_form_graphic_pane_ParamLimits

0xbeab,	// (0x0003ac91) list_form_graphic_pane

0x0c98,	// (0x0002fa7e) list_form_graphic_pane_g1

0x0ca0,	// (0x0002fa86) list_form_graphic_pane_t1_ParamLimits

0x0ca0,	// (0x0002fa86) list_form_graphic_pane_t1

0x3805,	// (0x000325eb) list_highlight_pane_cp5_ParamLimits

0x3805,	// (0x000325eb) list_highlight_pane_cp5

0xbebd,	// (0x0003aca3) find_pane_g1

0x4114,	// (0x00032efa) input_find_pane

0xbec6,	// (0x0003acac) input_find_pane_g1_ParamLimits

0xbec6,	// (0x0003acac) input_find_pane_g1

0xbed2,	// (0x0003acb8) input_find_pane_t1_ParamLimits

0xbed2,	// (0x0003acb8) input_find_pane_t1

0xbee7,	// (0x0003accd) input_find_pane_t2_ParamLimits

0xbee7,	// (0x0003accd) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003e487) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003e487) input_find_pane_t

0x411d,	// (0x00032f03) input_focus_pane_cp5_ParamLimits

0x411d,	// (0x00032f03) input_focus_pane_cp5

0x4137,	// (0x00032f1d) bg_popup_window_pane_cp2_ParamLimits

0x4137,	// (0x00032f1d) bg_popup_window_pane_cp2

0x4144,	// (0x00032f2a) listscroll_menu_pane_ParamLimits

0x4144,	// (0x00032f2a) listscroll_menu_pane

0xd438,	// (0x0003c21e) popup_submenu_window_ParamLimits

0xd438,	// (0x0003c21e) popup_submenu_window

0x417c,	// (0x00032f62) find_popup_pane_g1

0x4184,	// (0x00032f6a) input_popup_find_pane_cp

0x411d,	// (0x00032f03) input_focus_pane_cp4_ParamLimits

0x411d,	// (0x00032f03) input_focus_pane_cp4

0x419a,	// (0x00032f80) input_popup_find_pane_t1_ParamLimits

0x419a,	// (0x00032f80) input_popup_find_pane_t1

0x3725,	// (0x0003250b) bg_popup_sub_pane_cp

0x41c8,	// (0x00032fae) listscroll_popup_sub_pane

0x41d0,	// (0x00032fb6) list_submenu_pane_ParamLimits

0x41d0,	// (0x00032fb6) list_submenu_pane

0x41e1,	// (0x00032fc7) scroll_pane_cp4

0x41e9,	// (0x00032fcf) list_single_popup_submenu_pane_ParamLimits

0x41e9,	// (0x00032fcf) list_single_popup_submenu_pane

0x41fd,	// (0x00032fe3) list_single_popup_submenu_pane_g1

0x4205,	// (0x00032feb) list_single_popup_submenu_pane_t1_ParamLimits

0x4205,	// (0x00032feb) list_single_popup_submenu_pane_t1

0x3a80,	// (0x00032866) bg_active_tab_pane_cp1_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp1

0x421a,	// (0x00033000) tabs_2_active_pane_g1

0xd472,	// (0x0003c258) tabs_2_active_pane_t1

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp1_ParamLimits

0x3a80,	// (0x00032866) bg_passive_tab_pane_cp1

0x421a,	// (0x00033000) tabs_2_passive_pane_g1

0xd472,	// (0x0003c258) tabs_2_passive_pane_t1

0x3805,	// (0x000325eb) bg_active_tab_pane_cp4

0xd484,	// (0x0003c26a) tabs_2_long_active_pane_t1

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp4

0x18f9,	// (0x000306df) list_single_midp_graphic_pane_g4_ParamLimits

0x3805,	// (0x000325eb) bg_active_tab_pane_cp5

0xd497,	// (0x0003c27d) tabs_3_long_active_pane_t1

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp5

0x18f9,	// (0x000306df) list_single_midp_graphic_pane_g4

0x3805,	// (0x000325eb) bg_popup_window_pane_cp13_ParamLimits

0x3805,	// (0x000325eb) bg_popup_window_pane_cp13

0x427c,	// (0x00033062) listscroll_popup_fast_pane_ParamLimits

0x427c,	// (0x00033062) listscroll_popup_fast_pane

0x428b,	// (0x00033071) grid_popup_fast_pane_ParamLimits

0x428b,	// (0x00033071) grid_popup_fast_pane

0x429d,	// (0x00033083) scroll_pane_cp9_ParamLimits

0x429d,	// (0x00033083) scroll_pane_cp9

0x839f,	// (0x00037185) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x839f,	// (0x00037185) list_single_graphic_hl_pane_t1_cp2

0x42c1,	// (0x000330a7) input_focus_pane_cp20_ParamLimits

0x42c1,	// (0x000330a7) input_focus_pane_cp20

0x42cf,	// (0x000330b5) query_popup_data_pane_t1_ParamLimits

0x42cf,	// (0x000330b5) query_popup_data_pane_t1

0x42e2,	// (0x000330c8) query_popup_data_pane_t2_ParamLimits

0x42e2,	// (0x000330c8) query_popup_data_pane_t2

0x4328,	// (0x0003310e) query_popup_data_pane_t3_ParamLimits

0x4328,	// (0x0003310e) query_popup_data_pane_t3

0x4369,	// (0x0003314f) query_popup_data_pane_t4_ParamLimits

0x4369,	// (0x0003314f) query_popup_data_pane_t4

0x43a5,	// (0x0003318b) query_popup_data_pane_t5_ParamLimits

0x43a5,	// (0x0003318b) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003e48c) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003e48c) query_popup_data_pane_t

0x40cc,	// (0x00032eb2) bg_set_opt_pane_g1

0x40d4,	// (0x00032eba) bg_set_opt_pane_g2

0x40dc,	// (0x00032ec2) bg_set_opt_pane_g3

0x40e4,	// (0x00032eca) bg_set_opt_pane_g4

0x40ec,	// (0x00032ed2) bg_set_opt_pane_g5

0x40f4,	// (0x00032eda) bg_set_opt_pane_g6

0x40fc,	// (0x00032ee2) bg_set_opt_pane_g7

0x4104,	// (0x00032eea) bg_set_opt_pane_g8

0x410c,	// (0x00032ef2) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003e497) bg_set_opt_pane_g

0x0f91,	// (0x0002fd77) control_top_pane_stacon_ParamLimits

0x0f91,	// (0x0002fd77) control_top_pane_stacon

0x0fe4,	// (0x0002fdca) signal_pane_stacon_ParamLimits

0x0fe4,	// (0x0002fdca) signal_pane_stacon

0x4999,	// (0x0003377f) stacon_top_pane_g1_ParamLimits

0x4999,	// (0x0003377f) stacon_top_pane_g1

0x1009,	// (0x0002fdef) title_pane_stacon_ParamLimits

0x1009,	// (0x0002fdef) title_pane_stacon

0x1033,	// (0x0002fe19) uni_indicator_pane_stacon_ParamLimits

0x1033,	// (0x0002fe19) uni_indicator_pane_stacon

0x1048,	// (0x0002fe2e) battery_pane_stacon_ParamLimits

0x1048,	// (0x0002fe2e) battery_pane_stacon

0x108c,	// (0x0002fe72) control_bottom_pane_stacon_ParamLimits

0x108c,	// (0x0002fe72) control_bottom_pane_stacon

0x10af,	// (0x0002fe95) navi_pane_stacon_ParamLimits

0x10af,	// (0x0002fe95) navi_pane_stacon

0x49bb,	// (0x000337a1) stacon_bottom_pane_g1_ParamLimits

0x49bb,	// (0x000337a1) stacon_bottom_pane_g1

0x0cf4,	// (0x0002fada) aid_levels_signal_lsc_ParamLimits

0x0cf4,	// (0x0002fada) aid_levels_signal_lsc

0x0d0a,	// (0x0002faf0) signal_pane_stacon_g1_ParamLimits

0x0d0a,	// (0x0002faf0) signal_pane_stacon_g1

0x0d1e,	// (0x0002fb04) signal_pane_stacon_g2_ParamLimits

0x0d1e,	// (0x0002fb04) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003e4aa) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003e4aa) signal_pane_stacon_g

0x0d53,	// (0x0002fb39) title_pane_stacon_t1_ParamLimits

0x0d53,	// (0x0002fb39) title_pane_stacon_t1

0x43e9,	// (0x000331cf) uni_indicator_pane_stacon_g1

0x43f3,	// (0x000331d9) uni_indicator_pane_stacon_g2

0x43fd,	// (0x000331e3) uni_indicator_pane_stacon_g3

0x4407,	// (0x000331ed) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003e4b6) uni_indicator_pane_stacon_g

0x0d78,	// (0x0002fb5e) control_top_pane_stacon_g1

0x0d80,	// (0x0002fb66) control_top_pane_stacon_t1_ParamLimits

0x0d80,	// (0x0002fb66) control_top_pane_stacon_t1

0x0db7,	// (0x0002fb9d) aid_levels_battery_lsc_ParamLimits

0x0db7,	// (0x0002fb9d) aid_levels_battery_lsc

0x0dce,	// (0x0002fbb4) battery_pane_stacon_g1_ParamLimits

0x0dce,	// (0x0002fbb4) battery_pane_stacon_g1

0x0de1,	// (0x0002fbc7) battery_pane_stacon_g2_ParamLimits

0x0de1,	// (0x0002fbc7) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003e4bf) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003e4bf) battery_pane_stacon_g

0x0e1f,	// (0x0002fc05) navi_icon_pane_stacon

0x0e33,	// (0x0002fc19) navi_navi_pane_stacon

0x0e1f,	// (0x0002fc05) navi_text_pane_stacon

0x0d78,	// (0x0002fb5e) control_bottom_pane_stacon_g1

0x0e47,	// (0x0002fc2d) control_bottom_pane_stacon_t1_ParamLimits

0x0e47,	// (0x0002fc2d) control_bottom_pane_stacon_t1

0xd4a9,	// (0x0003c28f) grid_app_pane_ParamLimits

0xd4a9,	// (0x0003c28f) grid_app_pane

0xd4e1,	// (0x0003c2c7) scroll_pane_cp15_ParamLimits

0xd4e1,	// (0x0003c2c7) scroll_pane_cp15

0xd4f6,	// (0x0003c2dc) cell_app_pane_ParamLimits

0xd4f6,	// (0x0003c2dc) cell_app_pane

0xd53b,	// (0x0003c321) cell_app_pane_g1_ParamLimits

0xd53b,	// (0x0003c321) cell_app_pane_g1

0x44ae,	// (0x00033294) cell_app_pane_g2_ParamLimits

0x44ae,	// (0x00033294) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003e4c4) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003e4c4) cell_app_pane_g

0xd55f,	// (0x0003c345) cell_app_pane_t1_ParamLimits

0xd55f,	// (0x0003c345) cell_app_pane_t1

0x44d1,	// (0x000332b7) grid_highlight_pane_ParamLimits

0x44d1,	// (0x000332b7) grid_highlight_pane

0x40cc,	// (0x00032eb2) cell_highlight_pane_g1

0x40d4,	// (0x00032eba) cell_highlight_pane_g2

0x40dc,	// (0x00032ec2) cell_highlight_pane_g3

0x40e4,	// (0x00032eca) cell_highlight_pane_g4

0x40ec,	// (0x00032ed2) cell_highlight_pane_g5

0x40f4,	// (0x00032eda) cell_highlight_pane_g6

0x40fc,	// (0x00032ee2) cell_highlight_pane_g7

0x4104,	// (0x00032eea) cell_highlight_pane_g8

0x410c,	// (0x00032ef2) cell_highlight_pane_g9

0x371b,	// (0x00032501) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003e472) cell_highlight_pane_g

0x44e2,	// (0x000332c8) bg_scroll_pane

0x0e91,	// (0x0002fc77) scroll_handle_pane

0x4529,	// (0x0003330f) scroll_bg_pane_g1

0x453e,	// (0x00033324) scroll_bg_pane_g2

0x4556,	// (0x0003333c) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003e4c9) scroll_bg_pane_g

0x456b,	// (0x00033351) scroll_handle_focus_pane_ParamLimits

0x456b,	// (0x00033351) scroll_handle_focus_pane

0x4529,	// (0x0003330f) scroll_handle_pane_g1

0x4578,	// (0x0003335e) scroll_handle_pane_g2

0x4556,	// (0x0003333c) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003e4d0) scroll_handle_pane_g

0x411d,	// (0x00032f03) bg_popup_sub_pane_cp21_ParamLimits

0x411d,	// (0x00032f03) bg_popup_sub_pane_cp21

0x458c,	// (0x00033372) popup_fep_japan_predictive_window_t1_ParamLimits

0x458c,	// (0x00033372) popup_fep_japan_predictive_window_t1

0x45a6,	// (0x0003338c) popup_fep_japan_predictive_window_t2_ParamLimits

0x45a6,	// (0x0003338c) popup_fep_japan_predictive_window_t2

0x45d9,	// (0x000333bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x45d9,	// (0x000333bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003e4d7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003e4d7) popup_fep_japan_predictive_window_t

0x3725,	// (0x0003250b) bg_popup_sub_pane_cp23

0x4610,	// (0x000333f6) listscroll_japin_cand_pane

0x4618,	// (0x000333fe) popup_fep_japan_candidate_window_t1

0x4626,	// (0x0003340c) candidate_pane_ParamLimits

0x4626,	// (0x0003340c) candidate_pane

0x4638,	// (0x0003341e) scroll_pane_cp30

0x4640,	// (0x00033426) list_single_popup_jap_candidate_pane_ParamLimits

0x4640,	// (0x00033426) list_single_popup_jap_candidate_pane

0x3725,	// (0x0003250b) list_highlight_pane_cp30

0x4655,	// (0x0003343b) list_single_popup_jap_candidate_pane_t1

0x4664,	// (0x0003344a) level_1_signal

0x4676,	// (0x0003345c) level_2_signal

0x4689,	// (0x0003346f) level_3_signal

0x469c,	// (0x00033482) level_4_signal

0x46af,	// (0x00033495) level_5_signal

0x46c2,	// (0x000334a8) level_6_signal

0x46d5,	// (0x000334bb) level_7_signal

0x4664,	// (0x0003344a) level_1_battery

0x4676,	// (0x0003345c) level_2_battery

0x4689,	// (0x0003346f) level_3_battery

0x469c,	// (0x00033482) level_4_battery

0x46af,	// (0x00033495) level_5_battery

0x46c2,	// (0x000334a8) level_6_battery

0x46d5,	// (0x000334bb) level_7_battery

0x4700,	// (0x000334e6) list_menu_pane_ParamLimits

0x4700,	// (0x000334e6) list_menu_pane

0x4716,	// (0x000334fc) scroll_pane_cp25_ParamLimits

0x4716,	// (0x000334fc) scroll_pane_cp25

0x472f,	// (0x00033515) list_double2_graphic_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double2_graphic_pane_cp2

0x472f,	// (0x00033515) list_double2_large_graphic_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double2_large_graphic_pane_cp2

0x472f,	// (0x00033515) list_double2_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double2_pane_cp2

0x472f,	// (0x00033515) list_double_graphic_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double_graphic_pane_cp2

0x472f,	// (0x00033515) list_double_large_graphic_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double_large_graphic_pane_cp2

0x472f,	// (0x00033515) list_double_number_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double_number_pane_cp2

0x472f,	// (0x00033515) list_double_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double_pane_cp2

0xd576,	// (0x0003c35c) list_single_2graphic_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_2graphic_pane_cp2

0xd576,	// (0x0003c35c) list_single_graphic_heading_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_graphic_heading_pane_cp2

0xd576,	// (0x0003c35c) list_single_graphic_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_graphic_pane_cp2

0xd576,	// (0x0003c35c) list_single_heading_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_heading_pane_cp2

0x476c,	// (0x00033552) list_single_large_graphic_pane_cp2_ParamLimits

0x476c,	// (0x00033552) list_single_large_graphic_pane_cp2

0xd576,	// (0x0003c35c) list_single_number_heading_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_number_heading_pane_cp2

0xd576,	// (0x0003c35c) list_single_number_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_number_pane_cp2

0xd576,	// (0x0003c35c) list_single_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_pane_cp2

0x47e8,	// (0x000335ce) bg_popup_sub_pane_cp22

0x0f43,	// (0x0002fd29) popup_side_volume_key_window_g1

0x0f6d,	// (0x0002fd53) popup_side_volume_key_window_t1

0x0f89,	// (0x0002fd6f) volume_small_pane_cp1

0x3a80,	// (0x00032866) bg_popup_sub_pane_cp24_ParamLimits

0x3a80,	// (0x00032866) bg_popup_sub_pane_cp24

0x47fe,	// (0x000335e4) fep_china_uni_candidate_pane_ParamLimits

0x47fe,	// (0x000335e4) fep_china_uni_candidate_pane

0x4812,	// (0x000335f8) fep_china_uni_entry_pane

0x4822,	// (0x00033608) popup_fep_china_uni_window_g1

0x483e,	// (0x00033624) fep_china_uni_entry_pane_g1

0x4846,	// (0x0003362c) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003e508) fep_china_uni_entry_pane_g

0x484e,	// (0x00033634) fep_entry_item_pane

0x4858,	// (0x0003363e) fep_candidate_item_pane

0x4860,	// (0x00033646) fep_china_uni_candidate_pane_g1

0x4868,	// (0x0003364e) fep_china_uni_candidate_pane_g2

0x4870,	// (0x00033656) fep_china_uni_candidate_pane_g3

0x4878,	// (0x0003365e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003e50d) fep_china_uni_candidate_pane_g

0x371b,	// (0x00032501) fep_entry_item_pane_g1

0x4880,	// (0x00033666) fep_entry_item_pane_t1_ParamLimits

0x4880,	// (0x00033666) fep_entry_item_pane_t1

0x4896,	// (0x0003367c) fep_candidate_item_pane_t1_ParamLimits

0x4896,	// (0x0003367c) fep_candidate_item_pane_t1

0x48ab,	// (0x00033691) fep_candidate_item_pane_t2_ParamLimits

0x48ab,	// (0x00033691) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003e516) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003e516) fep_candidate_item_pane_t

0x3805,	// (0x000325eb) list_highlight_pane_cp31_ParamLimits

0x3805,	// (0x000325eb) list_highlight_pane_cp31

0x48bd,	// (0x000336a3) level_1_signal_lsc

0x48c6,	// (0x000336ac) level_2_signal_lsc

0x48cf,	// (0x000336b5) level_3_signal_lsc

0x48d8,	// (0x000336be) level_4_signal_lsc

0x48e1,	// (0x000336c7) level_5_signal_lsc

0x48ea,	// (0x000336d0) level_6_signal_lsc

0x48f3,	// (0x000336d9) level_7_signal_lsc

0x48f3,	// (0x000336d9) level_1_battery_lsc

0x48fc,	// (0x000336e2) level_2_battery_lsc

0x4905,	// (0x000336eb) level_3_battery_lsc

0x490e,	// (0x000336f4) level_4_battery_lsc

0x4917,	// (0x000336fd) level_5_battery_lsc

0x4920,	// (0x00033706) level_6_battery_lsc

0x48bd,	// (0x000336a3) level_7_battery_lsc

0x4929,	// (0x0003370f) scroll_handle_focus_pane_g1

0x4932,	// (0x00033718) scroll_handle_focus_pane_g2

0x493b,	// (0x00033721) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003e51b) scroll_handle_focus_pane_g

0xbf05,	// (0x0003aceb) list_single_2graphic_pane_g1_ParamLimits

0xbf05,	// (0x0003aceb) list_single_2graphic_pane_g1

0xb9e5,	// (0x0003a7cb) list_single_2graphic_pane_g2_ParamLimits

0xb9e5,	// (0x0003a7cb) list_single_2graphic_pane_g2

0x2da5,	// (0x00031b8b) list_single_2graphic_pane_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_single_2graphic_pane_g3

0xbf11,	// (0x0003acf7) list_single_2graphic_pane_g4_ParamLimits

0xbf11,	// (0x0003acf7) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003e522) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003e522) list_single_2graphic_pane_g

0xbf1d,	// (0x0003ad03) list_single_2graphic_pane_t1_ParamLimits

0xbf1d,	// (0x0003ad03) list_single_2graphic_pane_t1

0xbf4b,	// (0x0003ad31) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf4b,	// (0x0003ad31) list_double2_graphic_large_graphic_pane_g1

0xba50,	// (0x0003a836) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba50,	// (0x0003a836) list_double2_graphic_large_graphic_pane_g2

0xba61,	// (0x0003a847) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba61,	// (0x0003a847) list_double2_graphic_large_graphic_pane_g3

0xbf5d,	// (0x0003ad43) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf5d,	// (0x0003ad43) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003e52b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003e52b) list_double2_graphic_large_graphic_pane_g

0xbf69,	// (0x0003ad4f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf69,	// (0x0003ad4f) list_double2_graphic_large_graphic_pane_t1

0xbf7f,	// (0x0003ad65) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf7f,	// (0x0003ad65) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003e534) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003e534) list_double2_graphic_large_graphic_pane_t

0x4a83,	// (0x00033869) popup_fast_swap_window_ParamLimits

0x4a83,	// (0x00033869) popup_fast_swap_window

0x4a9f,	// (0x00033885) popup_side_volume_key_window

0x4abb,	// (0x000338a1) stacon_top_pane

0x4ac5,	// (0x000338ab) status_pane_ParamLimits

0x4ac5,	// (0x000338ab) status_pane

0xd603,	// (0x0003c3e9) status_small_pane

0x3725,	// (0x0003250b) control_pane

0x3725,	// (0x0003250b) stacon_bottom_pane

0x4057,	// (0x00032e3d) scroll_pane_cp121

0x404e,	// (0x00032e34) set_content_pane

0x4944,	// (0x0003372a) bg_active_tab_pane_g1_cp1

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp1

0x4956,	// (0x0003373c) bg_active_tab_pane_g3_cp1

0x4944,	// (0x0003372a) bg_passive_tab_pane_g1_cp1

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp1

0x4956,	// (0x0003373c) bg_passive_tab_pane_g3_cp1

0x495f,	// (0x00033745) bg_active_tab_pane_g1_cp2

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp2

0x4968,	// (0x0003374e) bg_active_tab_pane_g3_cp2

0x495f,	// (0x00033745) bg_passive_tab_pane_g1_cp2

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp2

0x4968,	// (0x0003374e) bg_passive_tab_pane_g3_cp2

0x4971,	// (0x00033757) bg_active_tab_pane_g1_cp3

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp3

0x497a,	// (0x00033760) bg_active_tab_pane_g3_cp3

0x4971,	// (0x00033757) bg_passive_tab_pane_g1_cp3

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp3

0x497a,	// (0x00033760) bg_passive_tab_pane_g3_cp3

0x4983,	// (0x00033769) bg_active_tab_pane_g1_cp4

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp4

0x498e,	// (0x00033774) bg_active_tab_pane_g3_cp4

0x4983,	// (0x00033769) bg_passive_tab_pane_g1_cp4

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp4

0x498e,	// (0x00033774) bg_passive_tab_pane_g3_cp4

0x49d7,	// (0x000337bd) bg_active_tab_pane_g1_cp5

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp5

0x49e0,	// (0x000337c6) bg_active_tab_pane_g3_cp5

0x49d7,	// (0x000337bd) bg_passive_tab_pane_g1_cp5

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp5

0x49e0,	// (0x000337c6) bg_passive_tab_pane_g3_cp5

0x709e,	// (0x00035e84) list_set_graphic_pane_ParamLimits

0x709e,	// (0x00035e84) list_set_graphic_pane

0x3725,	// (0x0003250b) bg_set_opt_pane_cp4

0x4a06,	// (0x000337ec) list_set_graphic_pane_g1_ParamLimits

0x4a06,	// (0x000337ec) list_set_graphic_pane_g1

0x4a12,	// (0x000337f8) list_set_graphic_pane_g2_ParamLimits

0x4a12,	// (0x000337f8) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003e539) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003e539) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003e8a2) volume_small_pane_cp_g

0x4a36,	// (0x0003381c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a36,	// (0x0003381c) list_double2_large_graphic_pane_g1_cp2

0x4a42,	// (0x00033828) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a42,	// (0x00033828) list_double2_large_graphic_pane_g2_cp2

0x4a53,	// (0x00033839) list_double2_large_graphic_pane_g3_cp2

0x4a5b,	// (0x00033841) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a5b,	// (0x00033841) list_double2_large_graphic_pane_t1_cp2

0x4a71,	// (0x00033857) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a71,	// (0x00033857) list_double2_large_graphic_pane_t2_cp2

0x6654,	// (0x0003543a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6654,	// (0x0003543a) list_double_large_graphic_pane_g1_cp2

0x6665,	// (0x0003544b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6665,	// (0x0003544b) list_double_large_graphic_pane_g2_cp2

0x4bec,	// (0x000339d2) list_double_large_graphic_pane_g3_cp2

0x6676,	// (0x0003545c) list_double_large_graphic_pane_g4_cp

0x667e,	// (0x00035464) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x667e,	// (0x00035464) list_double_large_graphic_pane_t1_cp2

0x6695,	// (0x0003547b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6695,	// (0x0003547b) list_double_large_graphic_pane_t2_cp2

0x4ade,	// (0x000338c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ade,	// (0x000338c4) list_double2_graphic_pane_g1_cp2

0x4aec,	// (0x000338d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4aec,	// (0x000338d2) list_double2_graphic_pane_g2_cp2

0x4afd,	// (0x000338e3) list_double2_graphic_pane_g3_cp2

0x4b07,	// (0x000338ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4b07,	// (0x000338ed) list_double2_graphic_pane_t1_cp2

0x4b1d,	// (0x00033903) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b1d,	// (0x00033903) list_double2_graphic_pane_t2_cp2

0x4b2f,	// (0x00033915) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b2f,	// (0x00033915) list_single_number_heading_pane_g1_cp2

0x4b3b,	// (0x00033921) list_single_number_heading_pane_g2_cp2

0x4b43,	// (0x00033929) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b43,	// (0x00033929) list_single_number_heading_pane_t1_cp2

0x4b59,	// (0x0003393f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b59,	// (0x0003393f) list_single_number_heading_pane_t2_cp2

0x4b6b,	// (0x00033951) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b6b,	// (0x00033951) list_single_number_heading_pane_t3_cp2

0x4b2f,	// (0x00033915) list_single_heading_pane_g1_cp2_ParamLimits

0x4b2f,	// (0x00033915) list_single_heading_pane_g1_cp2

0x4b3b,	// (0x00033921) list_single_heading_pane_g2_cp2

0x4b43,	// (0x00033929) list_single_heading_pane_t1_cp2_ParamLimits

0x4b43,	// (0x00033929) list_single_heading_pane_t1_cp2

0x645c,	// (0x00035242) list_single_heading_pane_t2_cp2_ParamLimits

0x645c,	// (0x00035242) list_single_heading_pane_t2_cp2

0x63a4,	// (0x0003518a) list_double_graphic_pane_g1_cp2_ParamLimits

0x63a4,	// (0x0003518a) list_double_graphic_pane_g1_cp2

0x63b0,	// (0x00035196) list_double_graphic_pane_g2_cp2_ParamLimits

0x63b0,	// (0x00035196) list_double_graphic_pane_g2_cp2

0x63bf,	// (0x000351a5) list_double_graphic_pane_g3_cp2

0x63c7,	// (0x000351ad) list_double_graphic_pane_t1_cp2_ParamLimits

0x63c7,	// (0x000351ad) list_double_graphic_pane_t1_cp2

0x63dd,	// (0x000351c3) list_double_graphic_pane_t2_cp2_ParamLimits

0x63dd,	// (0x000351c3) list_double_graphic_pane_t2_cp2

0x4be0,	// (0x000339c6) list_double_number_pane_g1_cp2_ParamLimits

0x4be0,	// (0x000339c6) list_double_number_pane_g1_cp2

0x4bec,	// (0x000339d2) list_double_number_pane_g2_cp2

0x6368,	// (0x0003514e) list_double_number_pane_t1_cp2_ParamLimits

0x6368,	// (0x0003514e) list_double_number_pane_t1_cp2

0x637c,	// (0x00035162) list_double_number_pane_t2_cp2_ParamLimits

0x637c,	// (0x00035162) list_double_number_pane_t2_cp2

0x6392,	// (0x00035178) list_double_number_pane_t3_cp2_ParamLimits

0x6392,	// (0x00035178) list_double_number_pane_t3_cp2

0x6251,	// (0x00035037) list_single_graphic_pane_g1_cp2_ParamLimits

0x6251,	// (0x00035037) list_single_graphic_pane_g1_cp2

0x4c44,	// (0x00033a2a) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c44,	// (0x00033a2a) list_single_graphic_pane_g2_cp2

0x4c50,	// (0x00033a36) list_single_graphic_pane_g3_cp2

0x6227,	// (0x0003500d) list_single_graphic_pane_t1_cp2_ParamLimits

0x6227,	// (0x0003500d) list_single_graphic_pane_t1_cp2

0x4c44,	// (0x00033a2a) list_single_number_pane_g1_cp2_ParamLimits

0x4c44,	// (0x00033a2a) list_single_number_pane_g1_cp2

0x4c50,	// (0x00033a36) list_single_number_pane_g2_cp2

0x6227,	// (0x0003500d) list_single_number_pane_t1_cp2_ParamLimits

0x6227,	// (0x0003500d) list_single_number_pane_t1_cp2

0x623d,	// (0x00035023) list_single_number_pane_t2_cp2_ParamLimits

0x623d,	// (0x00035023) list_single_number_pane_t2_cp2

0x4a42,	// (0x00033828) list_double2_pane_g1_cp2_ParamLimits

0x4a42,	// (0x00033828) list_double2_pane_g1_cp2

0x4a53,	// (0x00033839) list_double2_pane_g2_cp2

0x4bb8,	// (0x0003399e) list_double2_pane_t1_cp2_ParamLimits

0x4bb8,	// (0x0003399e) list_double2_pane_t1_cp2

0x4bce,	// (0x000339b4) list_double2_pane_t2_cp2_ParamLimits

0x4bce,	// (0x000339b4) list_double2_pane_t2_cp2

0x4be0,	// (0x000339c6) list_double_pane_g1_cp2_ParamLimits

0x4be0,	// (0x000339c6) list_double_pane_g1_cp2

0x4bec,	// (0x000339d2) list_double_pane_g2_cp2

0x4bf4,	// (0x000339da) list_double_pane_t1_cp2_ParamLimits

0x4bf4,	// (0x000339da) list_double_pane_t1_cp2

0x4c0a,	// (0x000339f0) list_double_pane_t2_cp2_ParamLimits

0x4c0a,	// (0x000339f0) list_double_pane_t2_cp2

0x4c34,	// (0x00033a1a) list_single_pane_cp2_g3

0x4c44,	// (0x00033a2a) list_single_pane_g1_cp2_ParamLimits

0x4c44,	// (0x00033a2a) list_single_pane_g1_cp2

0x4c50,	// (0x00033a36) list_single_pane_g2_cp2

0x4c58,	// (0x00033a3e) list_single_pane_t1_cp2_ParamLimits

0x4c58,	// (0x00033a3e) list_single_pane_t1_cp2

0x4c70,	// (0x00033a56) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4c70,	// (0x00033a56) list_single_large_graphic_pane_g1_cp2

0x4c7c,	// (0x00033a62) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4c7c,	// (0x00033a62) list_single_large_graphic_pane_g2_cp2

0x4c88,	// (0x00033a6e) list_single_large_graphic_pane_g3_cp2

0x4c90,	// (0x00033a76) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c90,	// (0x00033a76) list_single_large_graphic_pane_g4_cp1

0x4caa,	// (0x00033a90) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4caa,	// (0x00033a90) list_single_large_graphic_pane_t1_cp2

0x61f3,	// (0x00034fd9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61f3,	// (0x00034fd9) list_single_graphic_heading_pane_g1_cp2

0x61c0,	// (0x00034fa6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61c0,	// (0x00034fa6) list_single_graphic_heading_pane_g4_cp2

0x4c50,	// (0x00033a36) list_single_graphic_heading_pane_g5_cp2

0x61ff,	// (0x00034fe5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x61ff,	// (0x00034fe5) list_single_graphic_heading_pane_t1_cp2

0x6215,	// (0x00034ffb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6215,	// (0x00034ffb) list_single_graphic_heading_pane_t2_cp2

0x61b4,	// (0x00034f9a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61b4,	// (0x00034f9a) list_single_2graphic_pane_g1_cp2

0x61c0,	// (0x00034fa6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61c0,	// (0x00034fa6) list_single_2graphic_pane_g2_cp2

0x4c50,	// (0x00033a36) list_single_2graphic_pane_g3_cp2

0x61d1,	// (0x00034fb7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x61d1,	// (0x00034fb7) list_single_2graphic_pane_g4_cp2

0x61dd,	// (0x00034fc3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61dd,	// (0x00034fc3) list_single_2graphic_pane_t1_cp2

0x371b,	// (0x00032501) list_highlight_pane_g10_cp1

0x5d80,	// (0x00034b66) list_highlight_pane_g1_cp1

0x5d88,	// (0x00034b6e) list_highlight_pane_g2_cp1

0x5d90,	// (0x00034b76) list_highlight_pane_g3_cp1

0x5d98,	// (0x00034b7e) list_highlight_pane_g4_cp1

0x5da0,	// (0x00034b86) list_highlight_pane_g5_cp1

0x5da8,	// (0x00034b8e) list_highlight_pane_g6_cp1

0x5db0,	// (0x00034b96) list_highlight_pane_g7_cp1

0x5db8,	// (0x00034b9e) list_highlight_pane_g8_cp1

0x5dc0,	// (0x00034ba6) list_highlight_pane_g9_cp1

0xdc43,	// (0x0003ca29) form_field_slider_pane_t3

0xdc51,	// (0x0003ca37) form_field_slider_pane_t4

0x5cbc,	// (0x00034aa2) slider_form_pane_ParamLimits

0x5cbc,	// (0x00034aa2) slider_form_pane

0x3725,	// (0x0003250b) control_abbreviations

0x3725,	// (0x0003250b) control_conventions

0x3725,	// (0x0003250b) control_definitions

0x3725,	// (0x0003250b) format_table_attribute

0x64a6,	// (0x0003528c) bg_popup_preview_window_pane_g9

0x3725,	// (0x0003250b) format_table_data2

0x3725,	// (0x0003250b) format_table_data3

0x3725,	// (0x0003250b) format_table_data_example

0x0008,

0x3725,	// (0x0003250b) intro_purpose

0xf8ea,	// (0x0003e6d0) bg_popup_preview_window_pane_g

0x3725,	// (0x0003250b) texts_category

0x3725,	// (0x0003250b) texts_graphics

0x4cc0,	// (0x00033aa6) text_digital

0x4ccf,	// (0x00033ab5) text_primary

0x4cde,	// (0x00033ac4) text_primary_small

0x4ced,	// (0x00033ad3) text_secondary

0x4cfc,	// (0x00033ae2) text_title

0x6be0,	// (0x000359c6) bg_passive_tab_pane_g1_cp3_srt

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp3_srt

0x6be9,	// (0x000359cf) bg_passive_tab_pane_g3_cp3_srt

0x3a80,	// (0x00032866) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp3_srt

0x6bf2,	// (0x000359d8) tabs_4_active_pane_srt_g1

0xdf84,	// (0x0003cd6a) tabs_4_active_pane_srt_t1_ParamLimits

0xdf84,	// (0x0003cd6a) tabs_4_active_pane_srt_t1

0x6be0,	// (0x000359c6) bg_active_tab_pane_g1_cp3_copy1

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp3_copy1

0x6be9,	// (0x000359cf) bg_active_tab_pane_g3_cp3_copy1

0x3805,	// (0x000325eb) tabs_2_long_active_pane_srt_ParamLimits

0x3805,	// (0x000325eb) tabs_2_long_active_pane_srt

0x3805,	// (0x000325eb) tabs_2_long_passive_pane_srt_ParamLimits

0x3805,	// (0x000325eb) tabs_2_long_passive_pane_srt

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp4_srt_ParamLimits

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp4_srt

0x68d4,	// (0x000356ba) bg_passive_tab_pane_g1_cp4_srt

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp4_srt

0x68dd,	// (0x000356c3) bg_passive_tab_pane_g3_cp4_srt

0x3805,	// (0x000325eb) bg_active_tab_pane_cp4_srt_ParamLimits

0x3805,	// (0x000325eb) bg_active_tab_pane_cp4_srt

0xddae,	// (0x0003cb94) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddae,	// (0x0003cb94) tabs_2_long_active_pane_srt_t1

0x68d4,	// (0x000356ba) bg_active_tab_pane_g1_cp4_srt

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp4_srt

0x68dd,	// (0x000356c3) bg_active_tab_pane_g3_cp4_srt

0x3a80,	// (0x00032866) tabs_3_long_active_pane_srt_ParamLimits

0x3a80,	// (0x00032866) tabs_3_long_active_pane_srt

0x3a80,	// (0x00032866) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a80,	// (0x00032866) tabs_3_long_passive_pane_cp_srt

0x3a80,	// (0x00032866) tabs_3_long_passive_pane_srt_ParamLimits

0x3a80,	// (0x00032866) tabs_3_long_passive_pane_srt

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp5_srt_ParamLimits

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp5_srt

0x49d7,	// (0x000337bd) bg_passive_tab_pane_g1_cp5_srt

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp5_srt

0x49e0,	// (0x000337c6) bg_passive_tab_pane_g3_cp5_srt

0x3805,	// (0x000325eb) bg_active_tab_pane_cp5_srt_ParamLimits

0x3805,	// (0x000325eb) bg_active_tab_pane_cp5_srt

0xdd98,	// (0x0003cb7e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd98,	// (0x0003cb7e) tabs_3_long_active_pane_srt_t1

0x49d7,	// (0x000337bd) bg_active_tab_pane_g1_cp5_srt

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp5_srt

0x49e0,	// (0x000337c6) bg_active_tab_pane_g3_cp5_srt

0x68b4,	// (0x0003569a) navi_text_pane_srt_t1

0x68ac,	// (0x00035692) navi_icon_pane_srt_g1

0x4ed1,	// (0x00033cb7) midp_editing_number_pane_srt

0x4d0b,	// (0x00033af1) midp_ticker_pane_srt

0x4ed9,	// (0x00033cbf) midp_ticker_pane_srt_g1

0x4ee1,	// (0x00033cc7) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003e558) midp_ticker_pane_srt_g

0x4ee9,	// (0x00033ccf) midp_ticker_pane_srt_t1

0x689d,	// (0x00035683) midp_editing_number_pane_t1_copy1

0xd60e,	// (0x0003c3f4) listscroll_midp_pane

0xd60e,	// (0x0003c3f4) midp_form_pane

0x4d83,	// (0x00033b69) midp_info_popup_window_ParamLimits

0x4d83,	// (0x00033b69) midp_info_popup_window

0x411d,	// (0x00032f03) bg_popup_sub_pane_cp50_ParamLimits

0x411d,	// (0x00032f03) bg_popup_sub_pane_cp50

0x59b8,	// (0x0003479e) listscroll_midp_info_pane_ParamLimits

0x59b8,	// (0x0003479e) listscroll_midp_info_pane

0x5998,	// (0x0003477e) listscroll_form_midp_pane_ParamLimits

0x5998,	// (0x0003477e) listscroll_form_midp_pane

0x59a4,	// (0x0003478a) scroll_bar_cp050

0x5998,	// (0x0003477e) list_midp_pane

0x762f,	// (0x00036415) signal_pane_g2_cp

0x58b2,	// (0x00034698) listscroll_midp_info_pane_t1_ParamLimits

0x58b2,	// (0x00034698) listscroll_midp_info_pane_t1

0x58ca,	// (0x000346b0) listscroll_midp_info_pane_t2_ParamLimits

0x58ca,	// (0x000346b0) listscroll_midp_info_pane_t2

0x5908,	// (0x000346ee) listscroll_midp_info_pane_t3_ParamLimits

0x5908,	// (0x000346ee) listscroll_midp_info_pane_t3

0x5942,	// (0x00034728) listscroll_midp_info_pane_t4_ParamLimits

0x5942,	// (0x00034728) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003e60b) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003e60b) listscroll_midp_info_pane_t

0x41e1,	// (0x00032fc7) scroll_pane_cp21

0x5850,	// (0x00034636) form_midp_field_choice_group_pane

0x5859,	// (0x0003463f) form_midp_field_text_pane

0x5898,	// (0x0003467e) form_midp_field_time_pane

0x58a0,	// (0x00034686) form_midp_gauge_slider_pane

0x58a9,	// (0x0003468f) form_midp_gauge_wait_pane

0x3725,	// (0x0003250b) form_midp_image_pane

0xc84e,	// (0x0003b634) list_single_midp_pane_ParamLimits

0xc84e,	// (0x0003b634) list_single_midp_pane

0xdc22,	// (0x0003ca08) form_midp_field_text_pane_t1

0x55d8,	// (0x000343be) input_focus_pane_cp050

0x583f,	// (0x00034625) list_midp_form_text_pane

0x57d7,	// (0x000345bd) form_midp_field_choice_group_pane_t1

0x57e5,	// (0x000345cb) input_focus_pane_cp051

0x57f9,	// (0x000345df) list_midp_choice_pane

0x3725,	// (0x0003250b) status_idle_pane

0x57bb,	// (0x000345a1) form_midp_field_time_pane_t1

0x371b,	// (0x00032501) wait_anim_pane_g2_copy1

0x57c9,	// (0x000345af) form_midp_field_time_pane_t2

0x0001,

0x4e31,	// (0x00033c17) aid_navinavi_width_2_pane

0xf820,	// (0x0003e606) form_midp_field_time_pane_t

0x3725,	// (0x0003250b) input_focus_pane_cp052

0x3725,	// (0x0003250b) bg_input_focus_pane_cp040

0x577b,	// (0x00034561) form_midp_gauge_slider_pane_t1

0x5789,	// (0x0003456f) form_midp_gauge_slider_pane_t2

0xdc06,	// (0x0003c9ec) form_midp_gauge_slider_pane_t3

0xdc14,	// (0x0003c9fa) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003e5fd) form_midp_gauge_slider_pane_t

0x57b3,	// (0x00034599) form_midp_slider_pane

0x3805,	// (0x000325eb) bg_input_focus_pane_cp041_ParamLimits

0x3805,	// (0x000325eb) bg_input_focus_pane_cp041

0x5748,	// (0x0003452e) form_midp_gauge_wait_pane_t1_ParamLimits

0x5748,	// (0x0003452e) form_midp_gauge_wait_pane_t1

0x575a,	// (0x00034540) form_midp_gauge_wait_pane_t2_ParamLimits

0x575a,	// (0x00034540) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003e5f8) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003e5f8) form_midp_gauge_wait_pane_t

0x576c,	// (0x00034552) form_midp_wait_pane_ParamLimits

0x576c,	// (0x00034552) form_midp_wait_pane

0x5712,	// (0x000344f8) form_midp_image_pane_g1

0x571b,	// (0x00034501) form_midp_image_pane_t1

0x572a,	// (0x00034510) form_midp_image_pane_t2

0x5739,	// (0x0003451f) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003e5f1) form_midp_image_pane_t

0x5709,	// (0x000344ef) list_single_midp_pane_g1

0x2e65,	// (0x00031c4b) list_single_midp_pane_t1

0xdbf2,	// (0x0003c9d8) list_midp_form_item_pane_ParamLimits

0xdbf2,	// (0x0003c9d8) list_midp_form_item_pane

0x4dd9,	// (0x00033bbf) list_midp_form_item_pane_t1

0x4de8,	// (0x00033bce) midp_ticker_pane_g1

0x4df4,	// (0x00033bda) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003e53e) midp_ticker_pane_g

0x4e00,	// (0x00033be6) midp_ticker_pane_t1

0x6aee,	// (0x000358d4) midp_editing_number_pane_t1

0x6acc,	// (0x000358b2) midp_editing_number_pane

0x6adb,	// (0x000358c1) midp_ticker_pane

0x688d,	// (0x00035673) ai_message_heading_pane

0x3725,	// (0x0003250b) bg_popup_window_pane_cp14

0x6895,	// (0x0003567b) listscroll_ai_message_pane

0x6817,	// (0x000355fd) ai_message_heading_pane_g1_ParamLimits

0x6817,	// (0x000355fd) ai_message_heading_pane_g1

0x6823,	// (0x00035609) ai_message_heading_pane_g2_ParamLimits

0x6823,	// (0x00035609) ai_message_heading_pane_g2

0x682f,	// (0x00035615) ai_message_heading_pane_g3_ParamLimits

0x682f,	// (0x00035615) ai_message_heading_pane_g3

0x683b,	// (0x00035621) ai_message_heading_pane_g4_ParamLimits

0x683b,	// (0x00035621) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003e732) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003e732) ai_message_heading_pane_g

0x6847,	// (0x0003562d) ai_message_heading_pane_t1_ParamLimits

0x6847,	// (0x0003562d) ai_message_heading_pane_t1

0x6861,	// (0x00035647) ai_message_heading_pane_t2_ParamLimits

0x6861,	// (0x00035647) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003e73b) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003e73b) ai_message_heading_pane_t

0x6873,	// (0x00035659) bg_popup_heading_pane_cp1_ParamLimits

0x6873,	// (0x00035659) bg_popup_heading_pane_cp1

0x6805,	// (0x000355eb) list_ai_message_pane_ParamLimits

0x6805,	// (0x000355eb) list_ai_message_pane

0x41e1,	// (0x00032fc7) scroll_pane_cp10

0x67a1,	// (0x00035587) list_ai_message_pane_g1

0x67a9,	// (0x0003558f) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003e70f) list_ai_message_pane_g

0x67b1,	// (0x00035597) list_ai_message_pane_t1_ParamLimits

0x67b1,	// (0x00035597) list_ai_message_pane_t1

0x67c6,	// (0x000355ac) list_ai_message_pane_t2_ParamLimits

0x67c6,	// (0x000355ac) list_ai_message_pane_t2

0x67db,	// (0x000355c1) list_ai_message_pane_t3_ParamLimits

0x67db,	// (0x000355c1) list_ai_message_pane_t3

0x67f0,	// (0x000355d6) list_ai_message_pane_t4_ParamLimits

0x67f0,	// (0x000355d6) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003e714) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003e714) list_ai_message_pane_t

0xdd77,	// (0x0003cb5d) cell_ai_soft_ind_pane_ParamLimits

0xdd77,	// (0x0003cb5d) cell_ai_soft_ind_pane

0x4e12,	// (0x00033bf8) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e12,	// (0x00033bf8) cell_ai_soft_ind_pane_g1

0x3725,	// (0x0003250b) grid_highlight_cp1

0x4e1f,	// (0x00033c05) text_secondary_cp56_ParamLimits

0x4e1f,	// (0x00033c05) text_secondary_cp56

0x6761,	// (0x00035547) example_general_pane_ParamLimits

0x6761,	// (0x00035547) example_general_pane

0x676d,	// (0x00035553) example_parent_pane_g1_ParamLimits

0x676d,	// (0x00035553) example_parent_pane_g1

0x6779,	// (0x0003555f) example_parent_pane_t1_ParamLimits

0x6779,	// (0x0003555f) example_parent_pane_t1

0xc4f8,	// (0x0003b2de) popup_preview_text_window_ParamLimits

0xc4f8,	// (0x0003b2de) popup_preview_text_window

0x4c3c,	// (0x00033a22) list_single_pane_cp2_g4

0x3b36,	// (0x0003291c) bg_popup_preview_window_pane_ParamLimits

0x3b36,	// (0x0003291c) bg_popup_preview_window_pane

0x64ae,	// (0x00035294) popup_preview_text_window_t1_ParamLimits

0x64ae,	// (0x00035294) popup_preview_text_window_t1

0x64cc,	// (0x000352b2) popup_preview_text_window_t2_ParamLimits

0x64cc,	// (0x000352b2) popup_preview_text_window_t2

0x6515,	// (0x000352fb) popup_preview_text_window_t3_ParamLimits

0x6515,	// (0x000352fb) popup_preview_text_window_t3

0x655a,	// (0x00035340) popup_preview_text_window_t4_ParamLimits

0x655a,	// (0x00035340) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003e6e3) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003e6e3) popup_preview_text_window_t

0x65d8,	// (0x000353be) scroll_pane_cp11

0x5564,	// (0x0003434a) bg_popup_preview_window_pane_g1

0x646e,	// (0x00035254) bg_popup_preview_window_pane_g2

0x6476,	// (0x0003525c) bg_popup_preview_window_pane_g3

0x647e,	// (0x00035264) bg_popup_preview_window_pane_g4

0x6486,	// (0x0003526c) bg_popup_preview_window_pane_g5

0x648e,	// (0x00035274) bg_popup_preview_window_pane_g6

0x6496,	// (0x0003527c) bg_popup_preview_window_pane_g7

0x649e,	// (0x00035284) bg_popup_preview_window_pane_g8

0x015b,	// (0x0002ef41) aid_popup_width_pane

0xc474,	// (0x0003b25a) popup_midp_note_alarm_window_ParamLimits

0xc474,	// (0x0003b25a) popup_midp_note_alarm_window

0x4068,	// (0x00032e4e) data_form_pane_ParamLimits

0xbdee,	// (0x0003abd4) form_field_data_pane_g1

0xbdf8,	// (0x0003abde) form_field_data_pane_t1_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_ParamLimits

0x0b5f,	// (0x0002f945) data_form_wide_pane_ParamLimits

0x0b70,	// (0x0002f956) form_field_data_wide_pane_g1

0x0b7c,	// (0x0002f962) form_field_data_wide_pane_t1_ParamLimits

0x3de5,	// (0x00032bcb) input_focus_pane_cp6_ParamLimits

0xd464,	// (0x0003c24a) input_popup_find_pane_g1_ParamLimits

0xd464,	// (0x0003c24a) input_popup_find_pane_g1

0x0df2,	// (0x0002fbd8) aid_navi_side_left_pane

0x0e07,	// (0x0002fbed) aid_navi_side_right_pane

0x5e87,	// (0x00034c6d) bg_popup_window_pane_cp30_ParamLimits

0x5e87,	// (0x00034c6d) bg_popup_window_pane_cp30

0x5f01,	// (0x00034ce7) popup_midp_note_alarm_window_g1_ParamLimits

0x5f01,	// (0x00034ce7) popup_midp_note_alarm_window_g1

0x5f31,	// (0x00034d17) popup_midp_note_alarm_window_t1_ParamLimits

0x5f31,	// (0x00034d17) popup_midp_note_alarm_window_t1

0x5fd2,	// (0x00034db8) popup_midp_note_alarm_window_t2_ParamLimits

0x5fd2,	// (0x00034db8) popup_midp_note_alarm_window_t2

0x6080,	// (0x00034e66) popup_midp_note_alarm_window_t3_ParamLimits

0x6080,	// (0x00034e66) popup_midp_note_alarm_window_t3

0x60b2,	// (0x00034e98) popup_midp_note_alarm_window_t4_ParamLimits

0x60b2,	// (0x00034e98) popup_midp_note_alarm_window_t4

0x60d8,	// (0x00034ebe) popup_midp_note_alarm_window_t5_ParamLimits

0x60d8,	// (0x00034ebe) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003e680) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003e680) popup_midp_note_alarm_window_t

0x6184,	// (0x00034f6a) wait_bar_pane_cp1_ParamLimits

0x6184,	// (0x00034f6a) wait_bar_pane_cp1

0x3725,	// (0x0003250b) wait_anim_pane_copy1

0x3725,	// (0x0003250b) wait_border_pane_copy1

0x5b61,	// (0x00034947) wait_border_pane_g1_copy1

0x0b96,	// (0x0002f97c) form_field_popup_pane_g1

0xbe12,	// (0x0003abf8) form_field_popup_pane_t1_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_cp7_ParamLimits

0x40a2,	// (0x00032e88) list_form_pane_ParamLimits

0x0bb6,	// (0x0002f99c) form_field_popup_wide_pane_g1

0x0bbe,	// (0x0002f9a4) form_field_popup_wide_pane_t1_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_cp8_ParamLimits

0x40ae,	// (0x00032e94) list_form_wide_pane_ParamLimits

0xdfdd,	// (0x0003cdc3) aid_size_cell_graphic_pane

0xbe91,	// (0x0003ac77) data_form_pane_t1_ParamLimits

0xc877,	// (0x0003b65d) data_form_wide_pane_t1_ParamLimits

0xd877,	// (0x0003c65d) bg_status_flat_pane

0xd123,	// (0x0003bf09) title_pane_t1_ParamLimits

0x37cd,	// (0x000325b3) title_pane_t2_ParamLimits

0x37f3,	// (0x000325d9) title_pane_t3_ParamLimits

0xf557,	// (0x0003e33d) title_pane_t_ParamLimits

0x4664,	// (0x0003344a) level_1_signal_ParamLimits

0x4676,	// (0x0003345c) level_2_signal_ParamLimits

0x4689,	// (0x0003346f) level_3_signal_ParamLimits

0x469c,	// (0x00033482) level_4_signal_ParamLimits

0x46af,	// (0x00033495) level_5_signal_ParamLimits

0x46c2,	// (0x000334a8) level_6_signal_ParamLimits

0x46d5,	// (0x000334bb) level_7_signal_ParamLimits

0x4664,	// (0x0003344a) level_1_battery_ParamLimits

0x4676,	// (0x0003345c) level_2_battery_ParamLimits

0x4689,	// (0x0003346f) level_3_battery_ParamLimits

0x469c,	// (0x00033482) level_4_battery_ParamLimits

0x46af,	// (0x00033495) level_5_battery_ParamLimits

0x46c2,	// (0x000334a8) level_6_battery_ParamLimits

0x46d5,	// (0x000334bb) level_7_battery_ParamLimits

0x5d80,	// (0x00034b66) bg_status_flat_pane_g1

0x5d88,	// (0x00034b6e) bg_status_flat_pane_g2

0x5d90,	// (0x00034b76) bg_status_flat_pane_g3

0x5d98,	// (0x00034b7e) bg_status_flat_pane_g4

0x5da0,	// (0x00034b86) bg_status_flat_pane_g5

0x5da8,	// (0x00034b8e) bg_status_flat_pane_g6

0x5db0,	// (0x00034b96) bg_status_flat_pane_g7

0xd1af,	// (0x0003bf95) tabs_3_active_pane_t1_ParamLimits

0xd1af,	// (0x0003bf95) tabs_3_passive_pane_t1_ParamLimits

0xd1c1,	// (0x0003bfa7) tabs_4_active_pane_t1_ParamLimits

0xd1c1,	// (0x0003bfa7) tabs_4_1_passive_pane_t1_ParamLimits

0xd472,	// (0x0003c258) tabs_2_active_pane_t1_ParamLimits

0xd472,	// (0x0003c258) tabs_2_passive_pane_t1_ParamLimits

0x3805,	// (0x000325eb) bg_active_tab_pane_cp4_ParamLimits

0xd484,	// (0x0003c26a) tabs_2_long_active_pane_t1_ParamLimits

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp4_ParamLimits

0x192d,	// (0x00030713) list_single_midp_graphic_pane_t1_ParamLimits

0x3805,	// (0x000325eb) bg_active_tab_pane_cp5_ParamLimits

0xd497,	// (0x0003c27d) tabs_3_long_active_pane_t1_ParamLimits

0x505a,	// (0x00033e40) bg_passive_tab_pane_cp5_ParamLimits

0x192d,	// (0x00030713) list_single_midp_graphic_pane_t1

0xd877,	// (0x0003c65d) bg_status_flat_pane_ParamLimits

0x51f4,	// (0x00033fda) indicator_pane_cp2_ParamLimits

0x51f4,	// (0x00033fda) indicator_pane_cp2

0xd9f5,	// (0x0003c7db) navi_pane_srt_ParamLimits

0xd9f5,	// (0x0003c7db) navi_pane_srt

0x5343,	// (0x00034129) popup_clock_digital_analogue_window_cp1

0x38e2,	// (0x000326c8) indicator_pane_t1

0x4d0b,	// (0x00033af1) copy_highlight_pane

0x4d0b,	// (0x00033af1) cursor_graphics_pane

0x4d0b,	// (0x00033af1) graphic_within_text_pane

0x4d0b,	// (0x00033af1) link_highlight_pane

0x659b,	// (0x00035381) popup_preview_text_window_t5_ParamLimits

0x659b,	// (0x00035381) popup_preview_text_window_t5

0x4e39,	// (0x00033c1f) cursor_digital_pane

0x4e39,	// (0x00033c1f) cursor_primary_pane

0x4e4a,	// (0x00033c30) cursor_primary_small_pane

0x4e52,	// (0x00033c38) cursor_secondary_pane

0x4e5a,	// (0x00033c40) cursor_title_pane

0x4e39,	// (0x00033c1f) link_highlight_digital_pane

0x4e41,	// (0x00033c27) link_highlight_primary_pane

0x4e4a,	// (0x00033c30) link_highlight_primary_small_pane

0x4e52,	// (0x00033c38) link_highlight_secondary_pane

0x4e5a,	// (0x00033c40) link_highlight_title_pane

0x4e39,	// (0x00033c1f) copy_highlight_digital_pane

0x4e39,	// (0x00033c1f) copy_highlight_primary_pane

0x4e4a,	// (0x00033c30) copy_highlight_primary_small_pane

0x4e52,	// (0x00033c38) copy_highlight_secondary_pane

0x4e5a,	// (0x00033c40) copy_highlight_title_pane

0x4e52,	// (0x00033c38) graphic_text_digital_pane

0x5e2a,	// (0x00034c10) graphic_text_primary_pane

0x5e33,	// (0x00034c19) graphic_text_primary_small_pane

0x4e4a,	// (0x00033c30) graphic_text_secondary_pane

0x4e39,	// (0x00033c1f) graphic_text_title_pane

0xd6b3,	// (0x0003c499) cursor_primary_pane_g1

0x5e1c,	// (0x00034c02) cursor_text_primary_t1

0xdc73,	// (0x0003ca59) cursor_primary_small_pane_g1

0x5e0e,	// (0x00034bf4) cursor_text_primary_small_t1

0xdc69,	// (0x0003ca4f) cursor_primary_small_pane_g1_copy1

0x5dea,	// (0x00034bd0) cursor_text_primary_small_t1_copy1

0x5dc8,	// (0x00034bae) cursor_text_title_t1

0xdc5f,	// (0x0003ca45) cursor_title_pane_g1

0xd6b3,	// (0x0003c499) cursor_digital_pane_g1

0x4e6c,	// (0x00033c52) cursor_text_digital_t1

0x4e91,	// (0x00033c77) link_highlight_primary_pane_g1

0x5d71,	// (0x00034b57) link_highlight_primary_pane_t1

0x4e7a,	// (0x00033c60) link_highlight_primary_small_pane_g1

0x4e82,	// (0x00033c68) link_highlight_primary_small_pane_t1

0x4e91,	// (0x00033c77) link_highlight_secondary_pane_g1

0x4e99,	// (0x00033c7f) link_highlight_secondary_pane_t1

0x5ce5,	// (0x00034acb) link_highlight_title_pane_g1

0x5ced,	// (0x00034ad3) link_highlight_title_pane_t1

0x5cce,	// (0x00034ab4) link_highlight_digital_pane_g1

0x5cd6,	// (0x00034abc) link_highlight_digital_pane_t1

0x5ba6,	// (0x0003498c) copy_highlight_primary_pane_g1

0x5bae,	// (0x00034994) copy_highlight_primary_pane_t1

0x5b80,	// (0x00034966) copy_highlight_primary_small_pane_g1

0x5b97,	// (0x0003497d) copy_highlight_primary_small_pane_t1

0x4ea8,	// (0x00033c8e) copy_highlight_secondary_pane_g1

0x4eb0,	// (0x00033c96) copy_highlight_secondary_pane_t1

0x5b80,	// (0x00034966) copy_highlight_title_pane_g1

0x5b88,	// (0x0003496e) copy_highlight_title_pane_t1

0x5ba6,	// (0x0003498c) copy_highlight_digital_pane_g1

0x6e42,	// (0x00035c28) copy_highlight_digital_pane_t1

0x6d96,	// (0x00035b7c) graphic_text_primary_pane_g1

0x6e26,	// (0x00035c0c) graphic_text_primary_pane_t1

0x6e34,	// (0x00035c1a) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003e7af) graphic_text_primary_pane_t

0x6e02,	// (0x00035be8) graphic_text_primary_small_pane_g1

0x6e0a,	// (0x00035bf0) graphic_text_primary_small_pane_t1

0x6e18,	// (0x00035bfe) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003e7aa) graphic_text_primary_small_pane_t

0x6dde,	// (0x00035bc4) graphic_text_secondary_pane_g1

0x6de6,	// (0x00035bcc) graphic_text_secondary_pane_t1

0x6df4,	// (0x00035bda) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003e7a5) graphic_text_secondary_pane_t

0x6dba,	// (0x00035ba0) graphic_text_title_pane_g1

0x6dc2,	// (0x00035ba8) graphic_text_title_pane_t1

0x6dd0,	// (0x00035bb6) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003e7a0) graphic_text_title_pane_t

0x6d96,	// (0x00035b7c) graphic_text_digital_pane_g1

0x6d9e,	// (0x00035b84) graphic_text_digital_pane_t1

0x6dac,	// (0x00035b92) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003e79b) graphic_text_digital_pane_t

0x3805,	// (0x000325eb) navi_icon_pane_srt_ParamLimits

0x3805,	// (0x000325eb) navi_icon_pane_srt

0x3725,	// (0x0003250b) navi_midp_pane_srt

0x3725,	// (0x0003250b) navi_navi_pane_srt

0x3805,	// (0x000325eb) navi_text_pane_srt_ParamLimits

0x3805,	// (0x000325eb) navi_text_pane_srt

0x6d61,	// (0x00035b47) navi_navi_icon_text_pane_srt

0x6d69,	// (0x00035b4f) navi_navi_pane_srt_g1_ParamLimits

0x6d69,	// (0x00035b4f) navi_navi_pane_srt_g1

0x6d7b,	// (0x00035b61) navi_navi_pane_srt_g2_ParamLimits

0x6d7b,	// (0x00035b61) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003e796) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003e796) navi_navi_pane_srt_g

0x6d8d,	// (0x00035b73) navi_navi_tabs_pane_srt

0x6d61,	// (0x00035b47) navi_navi_text_pane_srt

0x6d61,	// (0x00035b47) navi_navi_volume_pane_srt

0x6d52,	// (0x00035b38) navi_navi_text_pane_srt_t1

0x1ca7,	// (0x00030a8d) navi_navi_volume_pane_srt_g1

0x1caf,	// (0x00030a95) volume_small_pane_srt_ParamLimits

0x1caf,	// (0x00030a95) volume_small_pane_srt

0x10d2,	// (0x0002feb8) volume_small_pane_srt_g1_ParamLimits

0x10d2,	// (0x0002feb8) volume_small_pane_srt_g1

0x10e2,	// (0x0002fec8) volume_small_pane_srt_g2_ParamLimits

0x10e2,	// (0x0002fec8) volume_small_pane_srt_g2

0x10f3,	// (0x0002fed9) volume_small_pane_srt_g3_ParamLimits

0x10f3,	// (0x0002fed9) volume_small_pane_srt_g3

0x1104,	// (0x0002feea) volume_small_pane_srt_g4_ParamLimits

0x1104,	// (0x0002feea) volume_small_pane_srt_g4

0x1115,	// (0x0002fefb) volume_small_pane_srt_g5_ParamLimits

0x1115,	// (0x0002fefb) volume_small_pane_srt_g5

0x1126,	// (0x0002ff0c) volume_small_pane_srt_g6_ParamLimits

0x1126,	// (0x0002ff0c) volume_small_pane_srt_g6

0x1137,	// (0x0002ff1d) volume_small_pane_srt_g7_ParamLimits

0x1137,	// (0x0002ff1d) volume_small_pane_srt_g7

0x1148,	// (0x0002ff2e) volume_small_pane_srt_g8_ParamLimits

0x1148,	// (0x0002ff2e) volume_small_pane_srt_g8

0x1159,	// (0x0002ff3f) volume_small_pane_srt_g9_ParamLimits

0x1159,	// (0x0002ff3f) volume_small_pane_srt_g9

0x116a,	// (0x0002ff50) volume_small_pane_srt_g10_ParamLimits

0x116a,	// (0x0002ff50) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003e543) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003e543) volume_small_pane_srt_g

0x3bdf,	// (0x000329c5) query_popup_data_pane_cp2

0x6d38,	// (0x00035b1e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d38,	// (0x00035b1e) navi_navi_icon_text_pane_srt_t1

0x5e2a,	// (0x00034c10) navi_tabs_2_long_pane_srt

0x5e2a,	// (0x00034c10) navi_tabs_2_pane_srt

0x5e2a,	// (0x00034c10) navi_tabs_3_long_pane_srt

0x5e2a,	// (0x00034c10) navi_tabs_3_pane_srt

0x5e2a,	// (0x00034c10) navi_tabs_4_pane_srt

0x1c87,	// (0x00030a6d) tabs_2_active_pane_srt_ParamLimits

0x1c87,	// (0x00030a6d) tabs_2_active_pane_srt

0x1c97,	// (0x00030a7d) tabs_2_passive_pane_srt_ParamLimits

0x1c97,	// (0x00030a7d) tabs_2_passive_pane_srt

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp1_srt

0x6d04,	// (0x00035aea) bg_passive_tab_pane_g1_cp1_srt

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp1_srt

0x6d0d,	// (0x00035af3) bg_passive_tab_pane_g3_cp1_srt

0x3a80,	// (0x00032866) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp1_srt

0x6d16,	// (0x00035afc) tabs_2_active_pane_srt_g1

0xe01f,	// (0x0003ce05) tabs_2_active_pane_srt_t1_ParamLimits

0xe01f,	// (0x0003ce05) tabs_2_active_pane_srt_t1

0x6d04,	// (0x00035aea) bg_active_tab_pane_g1_cp1_srt

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp1_srt

0x6d0d,	// (0x00035af3) bg_active_tab_pane_g3_cp1_srt

0x1c54,	// (0x00030a3a) tabs_3_active_pane_srt_ParamLimits

0x1c54,	// (0x00030a3a) tabs_3_active_pane_srt

0x1c65,	// (0x00030a4b) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c65,	// (0x00030a4b) tabs_3_passive_pane_cp_srt

0x1c76,	// (0x00030a5c) tabs_3_passive_pane_srt_ParamLimits

0x1c76,	// (0x00030a5c) tabs_3_passive_pane_srt

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x55d8,	// (0x000343be) bg_passive_tab_pane_cp2_srt

0x4ebf,	// (0x00033ca5) bg_passive_tab_pane_g1_cp2_srt

0x494d,	// (0x00033733) bg_passive_tab_pane_g2_cp2_srt

0x4ec8,	// (0x00033cae) bg_passive_tab_pane_g3_cp2_srt

0x3a80,	// (0x00032866) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a80,	// (0x00032866) bg_active_tab_pane_cp2_srt

0x6cea,	// (0x00035ad0) tabs_3_active_pane_srt_g1

0xe009,	// (0x0003cdef) tabs_3_active_pane_srt_t1_ParamLimits

0xe009,	// (0x0003cdef) tabs_3_active_pane_srt_t1

0x4ebf,	// (0x00033ca5) bg_active_tab_pane_g1_cp2_srt

0x494d,	// (0x00033733) bg_active_tab_pane_g2_cp2_srt

0x4ec8,	// (0x00033cae) bg_active_tab_pane_g3_cp2_srt

0x1c0c,	// (0x000309f2) tabs_4_active_pane_srt_ParamLimits

0x1c0c,	// (0x000309f2) tabs_4_active_pane_srt

0x1c1e,	// (0x00030a04) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c1e,	// (0x00030a04) tabs_4_passive_pane_cp2_srt

0x12d9,	// (0x000300bf) aid_size_cell_toolbar

0x6945,	// (0x0003572b) main_idle_act_pane_ParamLimits

0x1488,	// (0x0003026e) popup_large_graphic_colour_window_ParamLimits

0xc784,	// (0x0003b56a) popup_toolbar_window_ParamLimits

0xc784,	// (0x0003b56a) popup_toolbar_window

0x6afd,	// (0x000358e3) list_single_graphic_2heading_pane_ParamLimits

0x6afd,	// (0x000358e3) list_single_graphic_2heading_pane

0x4411,	// (0x000331f7) aid_size_cell_apps_grid_lsc_pane

0x4423,	// (0x00033209) aid_size_cell_apps_grid_prt_pane

0x505a,	// (0x00033e40) bg_wml_button_pane_cp1_ParamLimits

0x505a,	// (0x00033e40) bg_wml_button_pane_cp1

0xdc22,	// (0x0003ca08) form_midp_field_text_pane_t1_ParamLimits

0x55d8,	// (0x000343be) input_focus_pane_cp050_ParamLimits

0x583f,	// (0x00034625) list_midp_form_text_pane_ParamLimits

0x57e5,	// (0x000345cb) input_focus_pane_cp051_ParamLimits

0x57f9,	// (0x000345df) list_midp_choice_pane_ParamLimits

0xdbc0,	// (0x0003c9a6) list_single_2graphic_pane_cp3_ParamLimits

0xdbc0,	// (0x0003c9a6) list_single_2graphic_pane_cp3

0xdbd3,	// (0x0003c9b9) list_single_midp_graphic_pane_ParamLimits

0xdbd3,	// (0x0003c9b9) list_single_midp_graphic_pane

0x00e5,	// (0x0002eecb) list_single_graphic_2heading_pane_g1_ParamLimits

0x00e5,	// (0x0002eecb) list_single_graphic_2heading_pane_g1

0x00f1,	// (0x0002eed7) list_single_graphic_2heading_pane_g4_ParamLimits

0x00f1,	// (0x0002eed7) list_single_graphic_2heading_pane_g4

0x00fd,	// (0x0002eee3) list_single_graphic_2heading_pane_g5_ParamLimits

0x00fd,	// (0x0002eee3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003e596) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003e596) list_single_graphic_2heading_pane_g

0x0109,	// (0x0002eeef) list_single_graphic_2heading_pane_t1_ParamLimits

0x0109,	// (0x0002eeef) list_single_graphic_2heading_pane_t1

0x011d,	// (0x0002ef03) list_single_graphic_2heading_pane_t2_ParamLimits

0x011d,	// (0x0002ef03) list_single_graphic_2heading_pane_t2

0x0137,	// (0x0002ef1d) list_single_graphic_2heading_pane_t3_ParamLimits

0x0137,	// (0x0002ef1d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003e59d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003e59d) list_single_graphic_2heading_pane_t

0x54a2,	// (0x00034288) bg_popup_sub_pane_cp2

0x54cc,	// (0x000342b2) grid_toobar_pane

0x189c,	// (0x00030682) cell_toolbar_pane_ParamLimits

0x189c,	// (0x00030682) cell_toolbar_pane

0x5508,	// (0x000342ee) cell_toolbar_pane_g1_ParamLimits

0x5508,	// (0x000342ee) cell_toolbar_pane_g1

0x551c,	// (0x00034302) cell_toolbar_pane_g2_ParamLimits

0x551c,	// (0x00034302) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003e5ab) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003e5ab) cell_toolbar_pane_g

0x553e,	// (0x00034324) grid_highlight_pane_cp2_ParamLimits

0x553e,	// (0x00034324) grid_highlight_pane_cp2

0x5558,	// (0x0003433e) toolbar_button_pane

0x5564,	// (0x0003434a) toolbar_button_pane_g1

0x556c,	// (0x00034352) toolbar_button_pane_g2

0x5574,	// (0x0003435a) toolbar_button_pane_g3

0x557c,	// (0x00034362) toolbar_button_pane_g4

0x5584,	// (0x0003436a) toolbar_button_pane_g5

0x558c,	// (0x00034372) toolbar_button_pane_g6

0x5594,	// (0x0003437a) toolbar_button_pane_g7

0x559c,	// (0x00034382) toolbar_button_pane_g8

0x55a4,	// (0x0003438a) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003e5b0) toolbar_button_pane_g

0x18d4,	// (0x000306ba) list_single_2graphic_pane_g1_cp3_ParamLimits

0x18d4,	// (0x000306ba) list_single_2graphic_pane_g1_cp3

0xc7dc,	// (0x0003b5c2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7dc,	// (0x0003b5c2) list_single_2graphic_pane_g2_cp3

0x18f1,	// (0x000306d7) list_single_2graphic_pane_g3_cp3

0x18f9,	// (0x000306df) list_single_2graphic_pane_g4_cp3_ParamLimits

0x18f9,	// (0x000306df) list_single_2graphic_pane_g4_cp3

0x1905,	// (0x000306eb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1905,	// (0x000306eb) list_single_2graphic_pane_t1_cp3

0x1921,	// (0x00030707) list_single_midp_graphic_pane_g2_ParamLimits

0x1921,	// (0x00030707) list_single_midp_graphic_pane_g2

0x12e1,	// (0x000300c7) aid_zoom_text_primary

0x00c9,	// (0x0002eeaf) aid_zoom_text_secondary

0xd70b,	// (0x0003c4f1) status_small_pane_g7_ParamLimits

0xd70b,	// (0x0003c4f1) status_small_pane_g7

0xd72e,	// (0x0003c514) status_small_pane_t1_ParamLimits

0xd0ff,	// (0x0003bee5) title_pane_g2

0x0003,

0xf54e,	// (0x0003e334) title_pane_g

0xd377,	// (0x0003c15d) aid_size_cell_colour_1_pane_ParamLimits

0xd377,	// (0x0003c15d) aid_size_cell_colour_1_pane

0xd38b,	// (0x0003c171) aid_size_cell_colour_2_pane_ParamLimits

0xd38b,	// (0x0003c171) aid_size_cell_colour_2_pane

0xd39f,	// (0x0003c185) aid_size_cell_colour_3_pane_ParamLimits

0xd39f,	// (0x0003c185) aid_size_cell_colour_3_pane

0xd3b3,	// (0x0003c199) aid_size_cell_colour_4_pane_ParamLimits

0xd3b3,	// (0x0003c199) aid_size_cell_colour_4_pane

0x0d2f,	// (0x0002fb15) title_pane_stacon_g1_ParamLimits

0x0d2f,	// (0x0002fb15) title_pane_stacon_g1

0x5c05,	// (0x000349eb) popup_note_wait_window_g3_ParamLimits

0x5c05,	// (0x000349eb) popup_note_wait_window_g3

0x5c7b,	// (0x00034a61) popup_note_wait_window_t5_ParamLimits

0x5c7b,	// (0x00034a61) popup_note_wait_window_t5

0x3725,	// (0x0003250b) main_feb_china_hwr_fs_writing_pane

0xc18c,	// (0x0003af72) popup_feb_china_hwr_fs_window_ParamLimits

0xc18c,	// (0x0003af72) popup_feb_china_hwr_fs_window

0xc7ed,	// (0x0003b5d3) aid_size_cell_hwr_fs_ParamLimits

0xc7ed,	// (0x0003b5d3) aid_size_cell_hwr_fs

0x55d8,	// (0x000343be) bg_popup_sub_pane_cp3_ParamLimits

0x55d8,	// (0x000343be) bg_popup_sub_pane_cp3

0xc802,	// (0x0003b5e8) grid_hwr_fs_pane_ParamLimits

0xc802,	// (0x0003b5e8) grid_hwr_fs_pane

0x1970,	// (0x00030756) linegrid_hwr_fs_pane_ParamLimits

0x1970,	// (0x00030756) linegrid_hwr_fs_pane

0xc81a,	// (0x0003b600) cell_hwr_fs_pane_ParamLimits

0xc81a,	// (0x0003b600) cell_hwr_fs_pane

0x55e4,	// (0x000343ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x55e4,	// (0x000343ca) linegrid_hwr_fs_pane_g1

0xdb94,	// (0x0003c97a) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb94,	// (0x0003c97a) linegrid_hwr_fs_pane_g2

0x5602,	// (0x000343e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x5602,	// (0x000343e8) linegrid_hwr_fs_pane_g3

0x19a2,	// (0x00030788) linegrid_hwr_fs_pane_g4_ParamLimits

0x19a2,	// (0x00030788) linegrid_hwr_fs_pane_g4

0x19bc,	// (0x000307a2) linegrid_hwr_fs_pane_g5_ParamLimits

0x19bc,	// (0x000307a2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003e5d6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003e5d6) linegrid_hwr_fs_pane_g

0x560e,	// (0x000343f4) cell_hwr_fs_pane_g1_ParamLimits

0x560e,	// (0x000343f4) cell_hwr_fs_pane_g1

0x53d9,	// (0x000341bf) cell_hwr_fs_pane_g2_ParamLimits

0x53d9,	// (0x000341bf) cell_hwr_fs_pane_g2

0xdba6,	// (0x0003c98c) cell_hwr_fs_pane_g3_ParamLimits

0xdba6,	// (0x0003c98c) cell_hwr_fs_pane_g3

0xdbb3,	// (0x0003c999) cell_hwr_fs_pane_g4_ParamLimits

0xdbb3,	// (0x0003c999) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003e5e1) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003e5e1) cell_hwr_fs_pane_g

0xc840,	// (0x0003b626) cell_hwr_fs_pane_t1

0x3725,	// (0x0003250b) grid_highlight_pane_cp6

0x3725,	// (0x0003250b) main_idle_act2_pane

0x41c8,	// (0x00032fae) aid_inside_area_popup_secondary

0xdc7d,	// (0x0003ca63) aid_inside_area_window_primary_ParamLimits

0xdc7d,	// (0x0003ca63) aid_inside_area_window_primary

0x6e51,	// (0x00035c37) ai2_news_ticker_pane

0x6e59,	// (0x00035c3f) aid_size_cell_ai1_link_ParamLimits

0x6e59,	// (0x00035c3f) aid_size_cell_ai1_link

0xe035,	// (0x0003ce1b) popup_ai2_data_window_ParamLimits

0xe035,	// (0x0003ce1b) popup_ai2_data_window

0x6e89,	// (0x00035c6f) popup_ai2_link_window_ParamLimits

0x6e89,	// (0x00035c6f) popup_ai2_link_window

0x55d8,	// (0x000343be) bg_popup_sub_pane_cp4_ParamLimits

0x55d8,	// (0x000343be) bg_popup_sub_pane_cp4

0x6e9d,	// (0x00035c83) grid_ai2_link_pane_ParamLimits

0x6e9d,	// (0x00035c83) grid_ai2_link_pane

0x6eb4,	// (0x00035c9a) popup_ai2_link_window_g1_ParamLimits

0x6eb4,	// (0x00035c9a) popup_ai2_link_window_g1

0x6ec0,	// (0x00035ca6) popup_ai2_link_window_g2_ParamLimits

0x6ec0,	// (0x00035ca6) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003e7b4) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003e7b4) popup_ai2_link_window_g

0x6ecf,	// (0x00035cb5) ai2_mp_button_pane

0x6ed7,	// (0x00035cbd) ai2_mp_volume_pane

0x57e5,	// (0x000345cb) bg_popup_sub_pane_cp5_ParamLimits

0x57e5,	// (0x000345cb) bg_popup_sub_pane_cp5

0x6edf,	// (0x00035cc5) heading_ai2_gene_pane_ParamLimits

0x6edf,	// (0x00035cc5) heading_ai2_gene_pane

0x6eeb,	// (0x00035cd1) list_ai2_gene_pane_ParamLimits

0x6eeb,	// (0x00035cd1) list_ai2_gene_pane

0x6f33,	// (0x00035d19) cell_ai2_link_pane_ParamLimits

0x6f33,	// (0x00035d19) cell_ai2_link_pane

0x6f49,	// (0x00035d2f) cell_ai2_link_pane_g1

0x3725,	// (0x0003250b) grid_highlight_pane_cp7

0x1cc4,	// (0x00030aaa) ai2_mp_volume_pane_g1

0x7019,	// (0x00035dff) ai2_mp_volume_pane_g2

0xe05f,	// (0x0003ce45) list_ai2_gene_pane_t1

0x7021,	// (0x00035e07) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003e7cd) ai2_mp_volume_pane_g

0x1ccc,	// (0x00030ab2) volume_small_pane_cp3

0x7029,	// (0x00035e0f) aid_size_cell_ai2_button

0x7031,	// (0x00035e17) grid_ai2_button_pane

0x703a,	// (0x00035e20) cell_ai2_button_pane_ParamLimits

0x703a,	// (0x00035e20) cell_ai2_button_pane

0x371b,	// (0x00032501) cell_ai2_button_pane_g1

0x3725,	// (0x0003250b) grid_highlight_pane_cp8

0x6fd9,	// (0x00035dbf) ai2_gene_pane_t1_ParamLimits

0x6fd9,	// (0x00035dbf) ai2_gene_pane_t1

0xc102,	// (0x0003aee8) aid_height_parent_landscape

0xddc5,	// (0x0003cbab) aid_height_set_list

0x6945,	// (0x0003572b) aid_size_parent

0xdfdd,	// (0x0003cdc3) aid_size_cell_graphic_pane_ParamLimits

0x6efb,	// (0x00035ce1) popup_ai2_data_window_g1_ParamLimits

0x6efb,	// (0x00035ce1) popup_ai2_data_window_g1

0x6f07,	// (0x00035ced) ai2_news_ticker_pane_g1

0x6f0f,	// (0x00035cf5) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003e7b9) ai2_news_ticker_pane_g

0x6f17,	// (0x00035cfd) ai2_news_ticker_pane_t1

0x6f25,	// (0x00035d0b) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003e7be) ai2_news_ticker_pane_t

0x6f52,	// (0x00035d38) heading_ai2_gene_pane_g1

0x6f5a,	// (0x00035d40) heading_ai2_gene_pane_t1_ParamLimits

0x6f5a,	// (0x00035d40) heading_ai2_gene_pane_t1

0x6f6f,	// (0x00035d55) list_highlight_pane_cp6

0xe049,	// (0x0003ce2f) ai2_gene_pane_ParamLimits

0xe049,	// (0x0003ce2f) ai2_gene_pane

0xe06d,	// (0x0003ce53) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003e7c3) list_ai2_gene_pane_t

0x6faa,	// (0x00035d90) list_highlight_pane_cp8_ParamLimits

0x6faa,	// (0x00035d90) list_highlight_pane_cp8

0x6fbb,	// (0x00035da1) ai2_gene_pane_g1_ParamLimits

0x6fbb,	// (0x00035da1) ai2_gene_pane_g1

0x6fcd,	// (0x00035db3) ai2_gene_pane_g2_ParamLimits

0x6fcd,	// (0x00035db3) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003e7c8) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003e7c8) ai2_gene_pane_g

0x400a,	// (0x00032df0) scroll_pane_cp12

0xc0bf,	// (0x0003aea5) control_pane_t3_ParamLimits

0xc0bf,	// (0x0003aea5) control_pane_t3

0xd71f,	// (0x0003c505) status_small_pane_g8_ParamLimits

0xd71f,	// (0x0003c505) status_small_pane_g8

0xc221,	// (0x0003b007) popup_find_window_ParamLimits

0xc4ae,	// (0x0003b294) popup_note_image_window_ParamLimits

0x2d8d,	// (0x00031b73) list_double2_graphic_pane_vc_g1_ParamLimits

0x2d8d,	// (0x00031b73) list_double2_graphic_pane_vc_g1

0x2d99,	// (0x00031b7f) list_double2_graphic_pane_vc_g2_ParamLimits

0x2d99,	// (0x00031b7f) list_double2_graphic_pane_vc_g2

0x2da5,	// (0x00031b8b) list_double2_graphic_pane_vc_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e5a4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e5a4) list_double2_graphic_pane_vc_g

0x2db1,	// (0x00031b97) list_double2_graphic_pane_vc_t1_ParamLimits

0x2db1,	// (0x00031b97) list_double2_graphic_pane_vc_t1

0x2d99,	// (0x00031b7f) list_single_heading_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_heading_pane_vc_g1

0x2da5,	// (0x00031b8b) list_single_heading_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_heading_pane_vc_g

0x2dc7,	// (0x00031bad) list_single_heading_pane_vc_t1_ParamLimits

0x2dc7,	// (0x00031bad) list_single_heading_pane_vc_t1

0x2ddd,	// (0x00031bc3) list_single_heading_pane_vc_t2_ParamLimits

0x2ddd,	// (0x00031bc3) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003e5c5) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003e5c5) list_single_heading_pane_vc_t

0x2def,	// (0x00031bd5) list_setting_number_pane_vc_g1_ParamLimits

0x2def,	// (0x00031bd5) list_setting_number_pane_vc_g1

0x2dfb,	// (0x00031be1) list_setting_number_pane_vc_g2_ParamLimits

0x2dfb,	// (0x00031be1) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e5ca) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e5ca) list_setting_number_pane_vc_g

0x2e07,	// (0x00031bed) list_setting_number_pane_vc_t1_ParamLimits

0x2e07,	// (0x00031bed) list_setting_number_pane_vc_t1

0x2e1b,	// (0x00031c01) list_setting_number_pane_vc_t2_ParamLimits

0x2e1b,	// (0x00031c01) list_setting_number_pane_vc_t2

0x2e37,	// (0x00031c1d) list_setting_number_pane_vc_t3_ParamLimits

0x2e37,	// (0x00031c1d) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003e5cf) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003e5cf) list_setting_number_pane_vc_t

0x2e55,	// (0x00031c3b) set_value_pane_vc_ParamLimits

0x2e55,	// (0x00031c3b) set_value_pane_vc

0x6afd,	// (0x000358e3) list_double2_graphic_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double2_graphic_pane_vc

0x6afd,	// (0x000358e3) list_double2_large_graphic_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double2_large_graphic_pane_vc

0x6afd,	// (0x000358e3) list_double2_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double2_pane_vc

0x6afd,	// (0x000358e3) list_double_graphic_heading_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_graphic_heading_pane_vc

0x6afd,	// (0x000358e3) list_double_graphic_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_graphic_pane_vc

0x6afd,	// (0x000358e3) list_double_heading_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_heading_pane_vc

0x6b0f,	// (0x000358f5) list_double_large_graphic_pane_vc_ParamLimits

0x6b0f,	// (0x000358f5) list_double_large_graphic_pane_vc

0x6afd,	// (0x000358e3) list_double_number_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_number_pane_vc

0x6afd,	// (0x000358e3) list_double_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_pane_vc

0x6afd,	// (0x000358e3) list_double_time_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_double_time_pane_vc

0x6afd,	// (0x000358e3) list_setting_number_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_setting_number_pane_vc

0x6afd,	// (0x000358e3) list_setting_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_setting_pane_vc

0x6afd,	// (0x000358e3) list_single_graphic_heading_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_single_graphic_heading_pane_vc

0x6afd,	// (0x000358e3) list_single_heading_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_single_heading_pane_vc

0x6afd,	// (0x000358e3) list_single_number_heading_pane_vc_ParamLimits

0x6afd,	// (0x000358e3) list_single_number_heading_pane_vc

0x2d8d,	// (0x00031b73) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2d8d,	// (0x00031b73) list_double_graphic_heading_pane_vc_g1

0x2d99,	// (0x00031b7f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2d99,	// (0x00031b7f) list_double_graphic_heading_pane_vc_g2

0x2da5,	// (0x00031b8b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e5a4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e5a4) list_double_graphic_heading_pane_vc_g

0x2faf,	// (0x00031d95) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2faf,	// (0x00031d95) list_double_graphic_heading_pane_vc_t1

0x2fcb,	// (0x00031db1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2fcb,	// (0x00031db1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003e7d4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003e7d4) list_double_graphic_heading_pane_vc_t

0x2def,	// (0x00031bd5) list_setting_pane_vc_g1_ParamLimits

0x2def,	// (0x00031bd5) list_setting_pane_vc_g1

0x2dfb,	// (0x00031be1) list_setting_pane_vc_g2_ParamLimits

0x2dfb,	// (0x00031be1) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e5ca) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e5ca) list_setting_pane_vc_g

0x2fe9,	// (0x00031dcf) list_setting_pane_vc_t1_ParamLimits

0x2fe9,	// (0x00031dcf) list_setting_pane_vc_t1

0x3005,	// (0x00031deb) list_setting_pane_vc_t2_ParamLimits

0x3005,	// (0x00031deb) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003e802) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003e802) list_setting_pane_vc_t

0x2e55,	// (0x00031c3b) set_value_pane_cp_vc_ParamLimits

0x2e55,	// (0x00031c3b) set_value_pane_cp_vc

0x2d99,	// (0x00031b7f) list_single_number_heading_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_single_number_heading_pane_vc_g1

0x2da5,	// (0x00031b8b) list_single_number_heading_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_single_number_heading_pane_vc_g

0x3021,	// (0x00031e07) list_single_number_heading_pane_vc_t1_ParamLimits

0x3021,	// (0x00031e07) list_single_number_heading_pane_vc_t1

0x3037,	// (0x00031e1d) list_single_number_heading_pane_vc_t2_ParamLimits

0x3037,	// (0x00031e1d) list_single_number_heading_pane_vc_t2

0x3049,	// (0x00031e2f) list_single_number_heading_pane_vc_t3_ParamLimits

0x3049,	// (0x00031e2f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003e807) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003e807) list_single_number_heading_pane_vc_t

0x2d8d,	// (0x00031b73) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2d8d,	// (0x00031b73) list_single_graphic_heading_pane_vc_g1

0x2d99,	// (0x00031b7f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2d99,	// (0x00031b7f) list_single_graphic_heading_pane_vc_g4

0x2da5,	// (0x00031b8b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2da5,	// (0x00031b8b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003e5a4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e5a4) list_single_graphic_heading_pane_vc_g

0x305b,	// (0x00031e41) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x305b,	// (0x00031e41) list_single_graphic_heading_pane_vc_t1

0x3071,	// (0x00031e57) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3071,	// (0x00031e57) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003e80e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003e80e) list_single_graphic_heading_pane_vc_t

0x2d99,	// (0x00031b7f) list_double2_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_double2_pane_vc_g1

0x2da5,	// (0x00031b8b) list_double2_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_double2_pane_vc_g

0x3083,	// (0x00031e69) list_double2_pane_vc_t1_ParamLimits

0x3083,	// (0x00031e69) list_double2_pane_vc_t1

0x3099,	// (0x00031e7f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3099,	// (0x00031e7f) list_double2_large_graphic_pane_vc_g1

0x2d99,	// (0x00031b7f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2d99,	// (0x00031b7f) list_double2_large_graphic_pane_vc_g2

0x2da5,	// (0x00031b8b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2da5,	// (0x00031b8b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003e3cb) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003e3cb) list_double2_large_graphic_pane_vc_g

0x30a5,	// (0x00031e8b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30a5,	// (0x00031e8b) list_double2_large_graphic_pane_vc_t1

0x30bb,	// (0x00031ea1) list_double_time_pane_vc_g1_ParamLimits

0x30bb,	// (0x00031ea1) list_double_time_pane_vc_g1

0x30c7,	// (0x00031ead) list_double_time_pane_vc_g2_ParamLimits

0x30c7,	// (0x00031ead) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003e813) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003e813) list_double_time_pane_vc_g

0x30d3,	// (0x00031eb9) list_double_time_pane_vc_t1_ParamLimits

0x30d3,	// (0x00031eb9) list_double_time_pane_vc_t1

0x30f7,	// (0x00031edd) list_double_time_pane_vc_t2_ParamLimits

0x30f7,	// (0x00031edd) list_double_time_pane_vc_t2

0x3146,	// (0x00031f2c) list_double_time_pane_vc_t3_ParamLimits

0x3146,	// (0x00031f2c) list_double_time_pane_vc_t3

0x3158,	// (0x00031f3e) list_double_time_pane_vc_t4_ParamLimits

0x3158,	// (0x00031f3e) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003e818) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003e818) list_double_time_pane_vc_t

0x2d99,	// (0x00031b7f) list_double_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_double_pane_vc_g1

0x2da5,	// (0x00031b8b) list_double_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_double_pane_vc_g

0x316c,	// (0x00031f52) list_double_pane_vc_t1_ParamLimits

0x316c,	// (0x00031f52) list_double_pane_vc_t1

0x3180,	// (0x00031f66) list_double_pane_vc_t2_ParamLimits

0x3180,	// (0x00031f66) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003e821) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003e821) list_double_pane_vc_t

0x2d99,	// (0x00031b7f) list_double_number_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_double_number_pane_vc_g1

0x2da5,	// (0x00031b8b) list_double_number_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_double_number_pane_vc_g

0x3198,	// (0x00031f7e) list_double_number_pane_vc_t1_ParamLimits

0x3198,	// (0x00031f7e) list_double_number_pane_vc_t1

0x31aa,	// (0x00031f90) list_double_number_pane_vc_t2_ParamLimits

0x31aa,	// (0x00031f90) list_double_number_pane_vc_t2

0x31be,	// (0x00031fa4) list_double_number_pane_vc_t3_ParamLimits

0x31be,	// (0x00031fa4) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003e826) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003e826) list_double_number_pane_vc_t

0x31d6,	// (0x00031fbc) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31d6,	// (0x00031fbc) list_double_large_graphic_pane_vc_g1

0x31f8,	// (0x00031fde) list_double_large_graphic_pane_vc_g2_ParamLimits

0x31f8,	// (0x00031fde) list_double_large_graphic_pane_vc_g2

0x320c,	// (0x00031ff2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x320c,	// (0x00031ff2) list_double_large_graphic_pane_vc_g3

0x321b,	// (0x00032001) list_double_large_graphic_pane_vc_g4_ParamLimits

0x321b,	// (0x00032001) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003e82d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003e82d) list_double_large_graphic_pane_vc_g

0x3227,	// (0x0003200d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3227,	// (0x0003200d) list_double_large_graphic_pane_vc_t1

0x3243,	// (0x00032029) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3243,	// (0x00032029) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003e836) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003e836) list_double_large_graphic_pane_vc_t

0x2d99,	// (0x00031b7f) list_double_heading_pane_vc_g1_ParamLimits

0x2d99,	// (0x00031b7f) list_double_heading_pane_vc_g1

0x2da5,	// (0x00031b8b) list_double_heading_pane_vc_g2_ParamLimits

0x2da5,	// (0x00031b8b) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e3ae) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e3ae) list_double_heading_pane_vc_g

0x3265,	// (0x0003204b) list_double_heading_pane_vc_t1_ParamLimits

0x3265,	// (0x0003204b) list_double_heading_pane_vc_t1

0x3279,	// (0x0003205f) list_double_heading_pane_vc_t2_ParamLimits

0x3279,	// (0x0003205f) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003e83b) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003e83b) list_double_heading_pane_vc_t

0x3291,	// (0x00032077) list_double_graphic_pane_vc_g1_ParamLimits

0x3291,	// (0x00032077) list_double_graphic_pane_vc_g1

0x329d,	// (0x00032083) list_double_graphic_pane_vc_g2_ParamLimits

0x329d,	// (0x00032083) list_double_graphic_pane_vc_g2

0x2d99,	// (0x00031b7f) list_double_graphic_pane_vc_g3_ParamLimits

0x2d99,	// (0x00031b7f) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003e840) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003e840) list_double_graphic_pane_vc_g

0x32ba,	// (0x000320a0) list_double_graphic_pane_vc_t1_ParamLimits

0x32ba,	// (0x000320a0) list_double_graphic_pane_vc_t1

0x32e4,	// (0x000320ca) list_double_graphic_pane_vc_t2_ParamLimits

0x32e4,	// (0x000320ca) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003e849) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003e849) list_double_graphic_pane_vc_t

0x0167,	// (0x0002ef4d) aid_size_cell_fastswap

0xb795,	// (0x0003a57b) aid_size_cell_touch_ParamLimits

0xb795,	// (0x0003a57b) aid_size_cell_touch

0x03d4,	// (0x0002f1ba) popup_fast_swap_wide_window_ParamLimits

0x03d4,	// (0x0002f1ba) popup_fast_swap_wide_window

0xb945,	// (0x0003a72b) touch_pane_ParamLimits

0xb945,	// (0x0003a72b) touch_pane

0x4060,	// (0x00032e46) button_value_adjust_pane_cp2

0x0a91,	// (0x0002f877) button_value_adjust_pane_cp4

0x0ab1,	// (0x0002f897) form_field_data_pane_cp2

0xbdb5,	// (0x0003ab9b) form_field_data_wide_pane_cp2

0x44e2,	// (0x000332c8) bg_scroll_pane_ParamLimits

0x0e91,	// (0x0002fc77) scroll_handle_pane_ParamLimits

0x0ea5,	// (0x0002fc8b) scroll_sc2_down_pane_ParamLimits

0x0ea5,	// (0x0002fc8b) scroll_sc2_down_pane

0x4513,	// (0x000332f9) scroll_sc2_up_pane_ParamLimits

0x4513,	// (0x000332f9) scroll_sc2_up_pane

0xe18d,	// (0x0003cf73) grid_wheel_folder_pane_g1_ParamLimits

0xe18d,	// (0x0003cf73) grid_wheel_folder_pane_g1

0x106a,	// (0x0002fe50) clock_nsta_pane_cp2_ParamLimits

0x106a,	// (0x0002fe50) clock_nsta_pane_cp2

0xd60e,	// (0x0003c3f4) listscroll_midp_pane_ParamLimits

0xd61a,	// (0x0003c400) midp_canvas_pane

0x5007,	// (0x00033ded) nsta_clock_indic_pane

0x5040,	// (0x00033e26) listscroll_form_pane_vc

0x5048,	// (0x00033e2e) listscroll_set_pane_vc_ParamLimits

0x5048,	// (0x00033e2e) listscroll_set_pane_vc

0xd89f,	// (0x0003c685) clock_nsta_pane

0xd8c9,	// (0x0003c6af) indicator_nsta_pane

0x54a2,	// (0x00034288) bg_popup_sub_pane_cp2_ParamLimits

0x54b6,	// (0x0003429c) find_pane_cp2_ParamLimits

0x54b6,	// (0x0003429c) find_pane_cp2

0x54cc,	// (0x000342b2) grid_toobar_pane_ParamLimits

0x55ac,	// (0x00034392) list_form_gen_pane_vc_ParamLimits

0x55ac,	// (0x00034392) list_form_gen_pane_vc

0x55c2,	// (0x000343a8) scroll_pane_cp8_vc_ParamLimits

0x55c2,	// (0x000343a8) scroll_pane_cp8_vc

0x563e,	// (0x00034424) data_form_wide_pane_vc_ParamLimits

0x563e,	// (0x00034424) data_form_wide_pane_vc

0x564a,	// (0x00034430) form_field_data_wide_pane_vc_g1

0x5652,	// (0x00034438) form_field_data_wide_pane_vc_t1_ParamLimits

0x5652,	// (0x00034438) form_field_data_wide_pane_vc_t1

0x4074,	// (0x00032e5a) input_focus_pane_cp6_vc_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_cp6_vc

0x5998,	// (0x0003477e) list_midp_pane_ParamLimits

0x6cde,	// (0x00035ac4) scroll_pane_cp16_ParamLimits

0x6cde,	// (0x00035ac4) scroll_pane_cp16

0x59da,	// (0x000347c0) button_value_adjust_pane_ParamLimits

0x59da,	// (0x000347c0) button_value_adjust_pane

0xddd6,	// (0x0003cbbc) button_value_adjust_pane_cp6_ParamLimits

0xddd6,	// (0x0003cbbc) button_value_adjust_pane_cp6

0xdef0,	// (0x0003ccd6) settings_code_pane_cp_ParamLimits

0xdef0,	// (0x0003ccd6) settings_code_pane_cp

0x371b,	// (0x00032501) cell_touch_pane_g1

0x371b,	// (0x00032501) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003e4e9) cell_touch_pane_g

0xe07b,	// (0x0003ce61) cell_touch_pane_cp_ParamLimits

0xe07b,	// (0x0003ce61) cell_touch_pane_cp

0xe097,	// (0x0003ce7d) cell_touch_pane_ParamLimits

0xe097,	// (0x0003ce7d) cell_touch_pane

0x371b,	// (0x00032501) scroll_sc2_down_pane_g1

0x371b,	// (0x00032501) scroll_sc2_up_pane_g1

0x3725,	// (0x0003250b) bg_set_opt_pane_cp4_vc

0x706e,	// (0x00035e54) list_set_graphic_pane_vc_g1_ParamLimits

0x706e,	// (0x00035e54) list_set_graphic_pane_vc_g1

0x707a,	// (0x00035e60) list_set_graphic_pane_vc_g2_ParamLimits

0x707a,	// (0x00035e60) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003e7d9) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003e7d9) list_set_graphic_pane_vc_g

0x7086,	// (0x00035e6c) text_primary_small_cp13_vc_ParamLimits

0x7086,	// (0x00035e6c) text_primary_small_cp13_vc

0x709e,	// (0x00035e84) list_set_graphic_pane_vc_ParamLimits

0x709e,	// (0x00035e84) list_set_graphic_pane_vc

0x3725,	// (0x0003250b) input_focus_pane_cp2_vc

0x371b,	// (0x00032501) setting_code_pane_vc_g1

0x3850,	// (0x00032636) setting_code_pane_vc_t1

0x70b0,	// (0x00035e96) set_text_pane_vc_t1_ParamLimits

0x70b0,	// (0x00035e96) set_text_pane_vc_t1

0x3725,	// (0x0003250b) input_focus_pane_cp1_vc

0x70cc,	// (0x00035eb2) list_set_text_pane_vc

0x371b,	// (0x00032501) setting_text_pane_vc_g1

0x3725,	// (0x0003250b) bg_set_opt_pane_cp2_vc

0x3847,	// (0x0003262d) setting_slider_graphic_pane_vc_g1

0x70d6,	// (0x00035ebc) setting_slider_graphic_pane_vc_t1

0x70e6,	// (0x00035ecc) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003e7de) setting_slider_graphic_pane_vc_t

0x70f6,	// (0x00035edc) slider_set_pane_cp_vc

0x70fe,	// (0x00035ee4) slider_set_pane_vc_g1

0x7107,	// (0x00035eed) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003e7e3) slider_set_pane_vc_g

0x40cc,	// (0x00032eb2) set_opt_bg_pane_g1_copy1

0x40d4,	// (0x00032eba) set_opt_bg_pane_g2_copy1

0x7133,	// (0x00035f19) set_opt_bg_pane_g3_copy1

0x40e4,	// (0x00032eca) set_opt_bg_pane_g4_copy1

0x40ec,	// (0x00032ed2) set_opt_bg_pane_g5_copy1

0x40f4,	// (0x00032eda) set_opt_bg_pane_g6_copy1

0x713d,	// (0x00035f23) set_opt_bg_pane_g7_copy1

0x7145,	// (0x00035f2b) set_opt_bg_pane_g8_copy1

0x714f,	// (0x00035f35) set_opt_bg_pane_g9_copy1

0x3725,	// (0x0003250b) bg_set_opt_pane_cp_vc

0x7159,	// (0x00035f3f) setting_slider_pane_vc_t1

0x7168,	// (0x00035f4e) setting_slider_pane_vc_t2

0x7178,	// (0x00035f5e) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003e7f2) setting_slider_pane_vc_t

0x7188,	// (0x00035f6e) slider_set_pane_vc

0x19e0,	// (0x000307c6) volume_set_pane_vc_g1

0x19e9,	// (0x000307cf) volume_set_pane_vc_g2

0x19f2,	// (0x000307d8) volume_set_pane_vc_g3

0x19fb,	// (0x000307e1) volume_set_pane_vc_g4

0x1a04,	// (0x000307ea) volume_set_pane_vc_g5

0x1a0d,	// (0x000307f3) volume_set_pane_vc_g6

0x1a16,	// (0x000307fc) volume_set_pane_vc_g7

0x1a1f,	// (0x00030805) volume_set_pane_vc_g8

0x1a28,	// (0x0003080e) volume_set_pane_vc_g9

0x1a31,	// (0x00030817) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003e697) volume_set_pane_vc_g

0x7190,	// (0x00035f76) volume_set_pane_vc

0x7198,	// (0x00035f7e) button_value_adjust_pane_cp1_vc

0x71a2,	// (0x00035f88) list_highlight_pane_cp2_vc

0x71ab,	// (0x00035f91) list_set_pane_vc_ParamLimits

0x71ab,	// (0x00035f91) list_set_pane_vc

0x7209,	// (0x00035fef) main_pane_set_vc_t1_ParamLimits

0x7209,	// (0x00035fef) main_pane_set_vc_t1

0x721e,	// (0x00036004) main_pane_set_vc_t2_ParamLimits

0x721e,	// (0x00036004) main_pane_set_vc_t2

0x7230,	// (0x00036016) main_pane_set_vc_t3_ParamLimits

0x7230,	// (0x00036016) main_pane_set_vc_t3

0x7244,	// (0x0003602a) main_pane_set_vc_t4_ParamLimits

0x7244,	// (0x0003602a) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003e7f9) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003e7f9) main_pane_set_vc_t

0x7258,	// (0x0003603e) setting_code_pane_vc_ParamLimits

0x7258,	// (0x0003603e) setting_code_pane_vc

0x7269,	// (0x0003604f) setting_slider_graphic_pane_vc

0x7269,	// (0x0003604f) setting_slider_pane_vc

0x7269,	// (0x0003604f) setting_text_pane_vc

0x7269,	// (0x0003604f) setting_volume_pane_vc

0x7273,	// (0x00036059) scroll_pane_cp121_vc

0x404e,	// (0x00032e34) set_content_pane_vc

0x727b,	// (0x00036061) button_value_adjust_pane_g1

0x7284,	// (0x0003606a) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003e84e) button_value_adjust_pane_g

0x728d,	// (0x00036073) form_field_slider_wide_pane_vc_t1_ParamLimits

0x728d,	// (0x00036073) form_field_slider_wide_pane_vc_t1

0x72a1,	// (0x00036087) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72a1,	// (0x00036087) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003e853) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003e853) form_field_slider_wide_pane_vc_t

0x3a80,	// (0x00032866) input_focus_pane_cp10_vc_ParamLimits

0x3a80,	// (0x00032866) input_focus_pane_cp10_vc

0x72cf,	// (0x000360b5) slider_cont_pane_cp1_vc_ParamLimits

0x72cf,	// (0x000360b5) slider_cont_pane_cp1_vc

0x72e1,	// (0x000360c7) slider_form_pane_g1_cp2

0x7107,	// (0x00035eed) slider_form_pane_g2_cp2

0x730e,	// (0x000360f4) form_field_slider_pane_vc_t3

0x731c,	// (0x00036102) form_field_slider_pane_vc_t4

0x732a,	// (0x00036110) slider_form_pane_vc_ParamLimits

0x732a,	// (0x00036110) slider_form_pane_vc

0x7337,	// (0x0003611d) form_field_slider_pane_vc_t1_ParamLimits

0x7337,	// (0x0003611d) form_field_slider_pane_vc_t1

0x72a1,	// (0x00036087) form_field_slider_pane_vc_t2_ParamLimits

0x72a1,	// (0x00036087) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003e865) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003e865) form_field_slider_pane_vc_t

0x3a80,	// (0x00032866) input_focus_pane_cp9_vc_ParamLimits

0x3a80,	// (0x00032866) input_focus_pane_cp9_vc

0x7353,	// (0x00036139) slider_cont_pane_vc_ParamLimits

0x7353,	// (0x00036139) slider_cont_pane_vc

0x7367,	// (0x0003614d) list_form_graphic_pane_cp_vc_ParamLimits

0x7367,	// (0x0003614d) list_form_graphic_pane_cp_vc

0x564a,	// (0x00034430) form_field_popup_wide_pane_vc_g1

0x737c,	// (0x00036162) form_field_popup_wide_pane_vc_t1_ParamLimits

0x737c,	// (0x00036162) form_field_popup_wide_pane_vc_t1

0x4074,	// (0x00032e5a) input_focus_pane_cp8_vc_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_cp8_vc

0x73c1,	// (0x000361a7) list_form_wide_pane_vc_ParamLimits

0x73c1,	// (0x000361a7) list_form_wide_pane_vc

0x73cd,	// (0x000361b3) list_form_graphic_pane_vc_g1

0x73d5,	// (0x000361bb) list_form_graphic_pane_vc_t1_ParamLimits

0x73d5,	// (0x000361bb) list_form_graphic_pane_vc_t1

0x3805,	// (0x000325eb) list_highlight_pane_cp5_vc_ParamLimits

0x3805,	// (0x000325eb) list_highlight_pane_cp5_vc

0x73f1,	// (0x000361d7) list_form_graphic_pane_vc_ParamLimits

0x73f1,	// (0x000361d7) list_form_graphic_pane_vc

0x564a,	// (0x00034430) form_field_popup_pane_vc_g1

0x7407,	// (0x000361ed) form_field_popup_pane_vc_t1_ParamLimits

0x7407,	// (0x000361ed) form_field_popup_pane_vc_t1

0x4074,	// (0x00032e5a) input_focus_pane_cp7_vc_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_cp7_vc

0x741e,	// (0x00036204) list_form_pane_vc_ParamLimits

0x741e,	// (0x00036204) list_form_pane_vc

0x742a,	// (0x00036210) data_form_pane_vc_t1_ParamLimits

0x742a,	// (0x00036210) data_form_pane_vc_t1

0x40cc,	// (0x00032eb2) input_focus_pane_vc_g1

0x40d4,	// (0x00032eba) input_focus_pane_vc_g2

0x40dc,	// (0x00032ec2) input_focus_pane_vc_g3

0x40e4,	// (0x00032eca) input_focus_pane_vc_g4

0x40ec,	// (0x00032ed2) input_focus_pane_vc_g5

0x40f4,	// (0x00032eda) input_focus_pane_vc_g6

0x40fc,	// (0x00032ee2) input_focus_pane_vc_g7

0x4104,	// (0x00032eea) input_focus_pane_vc_g8

0x410c,	// (0x00032ef2) input_focus_pane_vc_g9

0x371b,	// (0x00032501) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003e472) input_focus_pane_vc_g

0x563e,	// (0x00034424) data_form_pane_vc_ParamLimits

0x563e,	// (0x00034424) data_form_pane_vc

0x564a,	// (0x00034430) form_field_data_pane_vc_g1

0x7445,	// (0x0003622b) form_field_data_pane_vc_t1_ParamLimits

0x7445,	// (0x0003622b) form_field_data_pane_vc_t1

0x4074,	// (0x00032e5a) input_focus_pane_vc_ParamLimits

0x4074,	// (0x00032e5a) input_focus_pane_vc

0x745f,	// (0x00036245) button_value_adjust_pane_cp3_vc

0x7467,	// (0x0003624d) button_value_adjust_pane_cp5_vc

0x746f,	// (0x00036255) form_field_data_pane_vc_ParamLimits

0x746f,	// (0x00036255) form_field_data_pane_vc

0x7486,	// (0x0003626c) form_field_data_pane_vc_cp2

0x748e,	// (0x00036274) form_field_data_wide_pane_vc_ParamLimits

0x748e,	// (0x00036274) form_field_data_wide_pane_vc

0x74a4,	// (0x0003628a) form_field_data_wide_pane_vc_cp2

0x74ac,	// (0x00036292) form_field_popup_pane_vc_ParamLimits

0x74ac,	// (0x00036292) form_field_popup_pane_vc

0x74c3,	// (0x000362a9) form_field_popup_wide_pane_vc_ParamLimits

0x74c3,	// (0x000362a9) form_field_popup_wide_pane_vc

0x74d9,	// (0x000362bf) form_field_slider_pane_vc_ParamLimits

0x74d9,	// (0x000362bf) form_field_slider_pane_vc

0x74ec,	// (0x000362d2) form_field_slider_wide_pane_vc_ParamLimits

0x74ec,	// (0x000362d2) form_field_slider_wide_pane_vc

0xe0b5,	// (0x0003ce9b) grid_touch_1_pane_ParamLimits

0xe0b5,	// (0x0003ce9b) grid_touch_1_pane

0xe0c9,	// (0x0003ceaf) grid_touch_2_pane_ParamLimits

0xe0c9,	// (0x0003ceaf) grid_touch_2_pane

0x75c6,	// (0x000363ac) touch_pane_g1_ParamLimits

0x75c6,	// (0x000363ac) touch_pane_g1

0x7523,	// (0x00036309) cell_app_pane_cp_wide_ParamLimits

0x7523,	// (0x00036309) cell_app_pane_cp_wide

0x7534,	// (0x0003631a) grid_popup_fast_wide_pane_ParamLimits

0x7534,	// (0x0003631a) grid_popup_fast_wide_pane

0x7548,	// (0x0003632e) scroll_pane_cp19_ParamLimits

0x7548,	// (0x0003632e) scroll_pane_cp19

0x3725,	// (0x0003250b) bg_popup_window_pane_cp20

0x755c,	// (0x00036342) listscroll_popup_fast_wide_pane

0x4234,	// (0x0003301a) grid_indicator_nsta_pane

0x7564,	// (0x0003634a) clock_nsta_pane_g1

0x7579,	// (0x0003635f) clock_nsta_pane_t1

0xe0f3,	// (0x0003ced9) cell_indicator_nsta_pane_ParamLimits

0xe0f3,	// (0x0003ced9) cell_indicator_nsta_pane

0x75c6,	// (0x000363ac) cell_indicator_nsta_pane_g1

0xe10a,	// (0x0003cef0) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003e876) cell_indicator_nsta_pane_g

0x75e1,	// (0x000363c7) clock_nsta_pane_cp

0x75e9,	// (0x000363cf) indicator_nsta_pane_cp

0x75f1,	// (0x000363d7) nsta_clock_indic_pane_g1

0x38ce,	// (0x000326b4) grid_indicator_pane

0x4608,	// (0x000333ee) scroll_pane_cp29

0x0fb9,	// (0x0002fd9f) indicator_nsta_pane_cp2_ParamLimits

0x0fb9,	// (0x0002fd9f) indicator_nsta_pane_cp2

0x3805,	// (0x000325eb) main_apps_wheel_pane

0x5859,	// (0x0003463f) form_midp_field_text_pane_ParamLimits

0x59a4,	// (0x0003478a) scroll_bar_cp050_ParamLimits

0x7641,	// (0x00036427) cell_indicator_pane_ParamLimits

0x7641,	// (0x00036427) cell_indicator_pane

0x7658,	// (0x0003643e) cell_indicator_pane_g1

0xe117,	// (0x0003cefd) grid_wheel_folder_pane_ParamLimits

0xe117,	// (0x0003cefd) grid_wheel_folder_pane

0xe125,	// (0x0003cf0b) list_wheel_apps_pane_ParamLimits

0xe125,	// (0x0003cf0b) list_wheel_apps_pane

0xe133,	// (0x0003cf19) main_apps_wheel_pane_g1_ParamLimits

0xe133,	// (0x0003cf19) main_apps_wheel_pane_g1

0xe13f,	// (0x0003cf25) main_apps_wheel_pane_g2_ParamLimits

0xe13f,	// (0x0003cf25) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003e892) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003e892) main_apps_wheel_pane_g

0xe14d,	// (0x0003cf33) main_apps_wheel_pane_t1_ParamLimits

0xe14d,	// (0x0003cf33) main_apps_wheel_pane_t1

0xe161,	// (0x0003cf47) list_wheel_apps_pane_g1

0xe169,	// (0x0003cf4f) list_wheel_apps_pane_g2

0xe171,	// (0x0003cf57) list_wheel_apps_pane_g3

0xe179,	// (0x0003cf5f) list_wheel_apps_pane_g4

0xe183,	// (0x0003cf69) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003e897) list_wheel_apps_pane_g

0x4b8b,	// (0x00033971) navi_icon_text_pane

0xd793,	// (0x0003c579) aid_fill_nsta

0x771d,	// (0x00036503) navi_icon_text_pane_g1

0x7729,	// (0x0003650f) navi_icon_text_pane_t1

0x4a1e,	// (0x00033804) list_set_graphic_pane_t1_ParamLimits

0x4a1e,	// (0x00033804) list_set_graphic_pane_t1

0x6107,	// (0x00034eed) popup_midp_note_alarm_window_t6_ParamLimits

0x6107,	// (0x00034eed) popup_midp_note_alarm_window_t6

0x6119,	// (0x00034eff) popup_midp_note_alarm_window_t7_ParamLimits

0x6119,	// (0x00034eff) popup_midp_note_alarm_window_t7

0x612b,	// (0x00034f11) popup_midp_note_alarm_window_t8_ParamLimits

0x612b,	// (0x00034f11) popup_midp_note_alarm_window_t8

0x613d,	// (0x00034f23) popup_midp_note_alarm_window_t9_ParamLimits

0x613d,	// (0x00034f23) popup_midp_note_alarm_window_t9

0x614f,	// (0x00034f35) popup_midp_note_alarm_window_t10_ParamLimits

0x614f,	// (0x00034f35) popup_midp_note_alarm_window_t10

0x6161,	// (0x00034f47) popup_midp_note_alarm_window_t11_ParamLimits

0x6161,	// (0x00034f47) popup_midp_note_alarm_window_t11

0x6173,	// (0x00034f59) scroll_pane_cp17_ParamLimits

0x6173,	// (0x00034f59) scroll_pane_cp17

0x19e0,	// (0x000307c6) volume_small_pane_cp_g1

0x1cd5,	// (0x00030abb) volume_small_pane_cp_g2

0x1cde,	// (0x00030ac4) volume_small_pane_cp_g3

0x1ce7,	// (0x00030acd) volume_small_pane_cp_g4

0x1cf0,	// (0x00030ad6) volume_small_pane_cp_g5

0x1cf9,	// (0x00030adf) volume_small_pane_cp_g6

0x1d02,	// (0x00030ae8) volume_small_pane_cp_g7

0x1d0b,	// (0x00030af1) volume_small_pane_cp_g8

0x1d14,	// (0x00030afa) volume_small_pane_cp_g9

0x1d1d,	// (0x00030b03) volume_small_pane_cp_g10

0x4de8,	// (0x00033bce) midp_ticker_pane_g1_ParamLimits

0x4df4,	// (0x00033bda) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003e53e) midp_ticker_pane_g_ParamLimits

0x4e00,	// (0x00033be6) midp_ticker_pane_t1_ParamLimits

0xd7b7,	// (0x0003c59d) aid_fill_nsta_2

0x5990,	// (0x00034776) list_form2_midp_pane

0x6acc,	// (0x000358b2) midp_editing_number_pane_ParamLimits

0x6adb,	// (0x000358c1) midp_ticker_pane_ParamLimits

0x773b,	// (0x00036521) form2_midp_field_pane

0x775f,	// (0x00036545) scroll_pane_cp51

0x777f,	// (0x00036565) form2_midp_button_pane_ParamLimits

0x777f,	// (0x00036565) form2_midp_button_pane

0x7791,	// (0x00036577) form2_midp_content_pane_ParamLimits

0x7791,	// (0x00036577) form2_midp_content_pane

0x77ab,	// (0x00036591) form2_midp_field_choice_group_pane

0x77b3,	// (0x00036599) form2_midp_field_pane_g1

0x77bb,	// (0x000365a1) form2_midp_field_pane_g2

0x77c3,	// (0x000365a9) form2_midp_field_pane_g3

0x77cb,	// (0x000365b1) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003e8bc) form2_midp_field_pane_g

0x77d3,	// (0x000365b9) form2_midp_gauge_slider_pane

0x77db,	// (0x000365c1) form2_midp_gauge_wait_pane

0x77e3,	// (0x000365c9) form2_midp_image_pane_ParamLimits

0x77e3,	// (0x000365c9) form2_midp_image_pane

0x77fe,	// (0x000365e4) form2_midp_label_pane_ParamLimits

0x77fe,	// (0x000365e4) form2_midp_label_pane

0xe1b6,	// (0x0003cf9c) form2_midp_label_pane_cp_ParamLimits

0xe1b6,	// (0x0003cf9c) form2_midp_label_pane_cp

0x7838,	// (0x0003661e) form2_midp_string_pane_ParamLimits

0x7838,	// (0x0003661e) form2_midp_string_pane

0xc8c7,	// (0x0003b6ad) form2_midp_text_pane_ParamLimits

0xc8c7,	// (0x0003b6ad) form2_midp_text_pane

0x784a,	// (0x00036630) form2_midp_time_pane

0x785a,	// (0x00036640) input_focus_pane_cp51_ParamLimits

0x785a,	// (0x00036640) input_focus_pane_cp51

0x7872,	// (0x00036658) form2_midp_label_pane_t1_ParamLimits

0x7872,	// (0x00036658) form2_midp_label_pane_t1

0xc8e0,	// (0x0003b6c6) form2_mdip_text_pane_t1_ParamLimits

0xc8e0,	// (0x0003b6c6) form2_mdip_text_pane_t1

0x3347,	// (0x0003212d) form2_midp_time_pane_t1

0x78bb,	// (0x000366a1) form2_midp_gauge_slider_pane_t1

0xe1d5,	// (0x0003cfbb) form2_midp_gauge_slider_pane_t2

0xe1e7,	// (0x0003cfcd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003e8c5) form2_midp_gauge_slider_pane_t

0x78f1,	// (0x000366d7) form2_midp_slider_pane

0x78fd,	// (0x000366e3) form2_midp_gauge_wait_pane_t1

0x790b,	// (0x000366f1) form2_midp_wait_pane_ParamLimits

0x790b,	// (0x000366f1) form2_midp_wait_pane

0xe1f9,	// (0x0003cfdf) list_single_2graphic_pane_cp4_ParamLimits

0xe1f9,	// (0x0003cfdf) list_single_2graphic_pane_cp4

0xdbd3,	// (0x0003c9b9) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd3,	// (0x0003c9b9) list_single_midp_graphic_pane_cp

0x3725,	// (0x0003250b) list_highlight_pane_cp20

0x795a,	// (0x00036740) list_single_2graphic_pane_g1_cp4

0x7962,	// (0x00036748) list_single_2graphic_pane_g2_cp4

0x796a,	// (0x00036750) list_single_2graphic_pane_t1_cp4

0x3805,	// (0x000325eb) list_highlight_pane_cp21

0x7979,	// (0x0003675f) list_single_midp_graphic_pane_g4_cp

0x7988,	// (0x0003676e) list_single_midp_graphic_pane_t1_cp

0xe20d,	// (0x0003cff3) form2_mdip_string_pane_t1_ParamLimits

0xe20d,	// (0x0003cff3) form2_mdip_string_pane_t1

0x3725,	// (0x0003250b) bg_wml_button_pane_cp2

0x371b,	// (0x00032501) form2_midp_image_pane_g1

0x087b,	// (0x0002f661) list_double_large_graphic_pane_g5_ParamLimits

0x087b,	// (0x0002f661) list_double_large_graphic_pane_g5

0xd60e,	// (0x0003c3f4) midp_form_pane_ParamLimits

0x3805,	// (0x000325eb) main_apps_wheel_pane_ParamLimits

0xc52c,	// (0x0003b312) popup_preview_window_ParamLimits

0xc52c,	// (0x0003b312) popup_preview_window

0x1847,	// (0x0003062d) popup_touch_info_window_ParamLimits

0x1847,	// (0x0003062d) popup_touch_info_window

0x1865,	// (0x0003064b) popup_touch_menu_window_ParamLimits

0x1865,	// (0x0003064b) popup_touch_menu_window

0x3711,	// (0x000324f7) bg_popup_sub_pane_cp6

0x7a96,	// (0x0003687c) list_touch_menu_pane

0x7a9e,	// (0x00036884) list_single_touch_menu_pane_ParamLimits

0x7a9e,	// (0x00036884) list_single_touch_menu_pane

0x7ab4,	// (0x0003689a) list_single_touch_menu_pane_t1

0x3805,	// (0x000325eb) bg_popup_sub_pane_cp7_ParamLimits

0x3805,	// (0x000325eb) bg_popup_sub_pane_cp7

0x7ac2,	// (0x000368a8) heading_sub_pane

0x7aca,	// (0x000368b0) list_touch_info_pane_ParamLimits

0x7aca,	// (0x000368b0) list_touch_info_pane

0x7ad9,	// (0x000368bf) list_single_touch_info_pane_ParamLimits

0x7ad9,	// (0x000368bf) list_single_touch_info_pane

0x7aeb,	// (0x000368d1) list_single_touch_info_pane_t1

0x7af9,	// (0x000368df) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003e8d3) list_single_touch_info_pane_t

0x4d0b,	// (0x00033af1) bg_popup_heading_pane_cp

0x7b07,	// (0x000368ed) heading_sub_pane_t1

0x55d8,	// (0x000343be) bg_popup_preview_window_pane_cp_ParamLimits

0x55d8,	// (0x000343be) bg_popup_preview_window_pane_cp

0x7ac2,	// (0x000368a8) heading_preview_pane

0x7aca,	// (0x000368b0) list_preview_pane_ParamLimits

0x7aca,	// (0x000368b0) list_preview_pane

0x7b15,	// (0x000368fb) popup_preview_window_g1

0x7ad9,	// (0x000368bf) list_single_preview_pane_ParamLimits

0x7ad9,	// (0x000368bf) list_single_preview_pane

0x7b1d,	// (0x00036903) list_single_preview_pane_g1

0x7b25,	// (0x0003690b) list_single_preview_pane_t1

0x7aeb,	// (0x000368d1) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003e8d8) list_single_preview_pane_t

0x7b33,	// (0x00036919) bg_popup_heading_pane_cp2_ParamLimits

0x7b33,	// (0x00036919) bg_popup_heading_pane_cp2

0x7b49,	// (0x0003692f) heading_preview_pane_g1

0x7b51,	// (0x00036937) heading_preview_pane_t1_ParamLimits

0x7b51,	// (0x00036937) heading_preview_pane_t1

0x38f1,	// (0x000326d7) soft_indicator_pane_t1_ParamLimits

0x3fe7,	// (0x00032dcd) scroll_pane_ParamLimits

0x4501,	// (0x000332e7) scroll_sc2_left_pane

0x450a,	// (0x000332f0) scroll_sc2_right_pane

0x4529,	// (0x0003330f) scroll_bg_pane_g1_ParamLimits

0x453e,	// (0x00033324) scroll_bg_pane_g2_ParamLimits

0x4556,	// (0x0003333c) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003e4c9) scroll_bg_pane_g_ParamLimits

0x4529,	// (0x0003330f) scroll_handle_pane_g1_ParamLimits

0x4578,	// (0x0003335e) scroll_handle_pane_g2_ParamLimits

0x4556,	// (0x0003333c) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003e4d0) scroll_handle_pane_g_ParamLimits

0x130d,	// (0x000300f3) popup_choice_list_window_ParamLimits

0x130d,	// (0x000300f3) popup_choice_list_window

0x54ae,	// (0x00034294) choice_list_pane

0x5530,	// (0x00034316) cell_toolbar_pane_t1

0x5558,	// (0x0003433e) toolbar_button_pane_ParamLimits

0x662d,	// (0x00035413) ai_gene_pane_1_t2_ParamLimits

0x662d,	// (0x00035413) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003e6f3) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003e6f3) ai_gene_pane_1_t

0x7b6e,	// (0x00036954) scroll_sc2_left_pane_g1

0x7b6e,	// (0x00036954) scroll_sc2_right_pane_g1

0x505a,	// (0x00033e40) bg_popup_sub_pane_cp10

0x7b78,	// (0x0003695e) list_choice_list_pane

0x7b91,	// (0x00036977) list_single_choice_list_pane_ParamLimits

0x7b91,	// (0x00036977) list_single_choice_list_pane

0x7ba4,	// (0x0003698a) list_single_choice_list_pane_g1

0x4205,	// (0x00032feb) list_single_choice_list_pane_t1_ParamLimits

0x4205,	// (0x00032feb) list_single_choice_list_pane_t1

0x7bac,	// (0x00036992) choice_list_pane_g1

0x7bb4,	// (0x0003699a) choice_list_pane_t1

0x3711,	// (0x000324f7) input_focus_pane_cp11

0x43dc,	// (0x000331c2) title_pane_stacon_g2_ParamLimits

0x43dc,	// (0x000331c2) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003e4af) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e4af) title_pane_stacon_g

0x4d0b,	// (0x00033af1) cursor_press_pane

0xc1d9,	// (0x0003afbf) popup_fep_hwr_window_ParamLimits

0xc1d9,	// (0x0003afbf) popup_fep_hwr_window

0x1433,	// (0x00030219) popup_fep_vkb_window_ParamLimits

0x1433,	// (0x00030219) popup_fep_vkb_window

0x7bc2,	// (0x000369a8) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003e901) fep_vkb_side_pane_g_ParamLimits

0x1d5f,	// (0x00030b45) fep_hwr_candidate_pane_ParamLimits

0x1d5f,	// (0x00030b45) fep_hwr_candidate_pane

0x1d89,	// (0x00030b6f) fep_hwr_side_pane_ParamLimits

0x1d89,	// (0x00030b6f) fep_hwr_side_pane

0x1da9,	// (0x00030b8f) fep_hwr_top_pane_ParamLimits

0x1da9,	// (0x00030b8f) fep_hwr_top_pane

0x1dc1,	// (0x00030ba7) fep_hwr_write_pane_ParamLimits

0x1dc1,	// (0x00030ba7) fep_hwr_write_pane

0xfb1b,	// (0x0003e901) fep_vkb_side_pane_g

0x7bca,	// (0x000369b0) fep_hwr_top_pane_g1

0x7bdc,	// (0x000369c2) fep_hwr_top_pane_g2

0x1dfb,	// (0x00030be1) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003e8dd) fep_hwr_top_pane_g

0x1e10,	// (0x00030bf6) fep_hwr_top_text_pane

0x46f8,	// (0x000334de) fep_hwr_top_text_pane_g1

0x7c12,	// (0x000369f8) fep_hwr_top_text_pane_t1

0x1f06,	// (0x00030cec) fep_hwr_candidate_pane_g1

0x7e65,	// (0x00036c4b) fep_vkb_keypad_pane_g3_ParamLimits

0x7e65,	// (0x00036c4b) fep_vkb_keypad_pane_g3

0x7e8d,	// (0x00036c73) fep_vkb_keypad_pane_g4_ParamLimits

0x7e8d,	// (0x00036c73) fep_vkb_keypad_pane_g4

0x7efc,	// (0x00036ce2) fep_vkb_bottom_pane_g2_ParamLimits

0x7efc,	// (0x00036ce2) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003e908) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003e908) fep_vkb_bottom_pane_g

0x7b6e,	// (0x00036954) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003e912) cell_vkb_side_pane_g

0x7f87,	// (0x00036d6d) cell_vkb_side_pane_t1

0x7f95,	// (0x00036d7b) cell_vkb_side_pane_t1_copy1

0x7b6e,	// (0x00036954) bg_fep_vkb_candidate_pane_g2

0x80c1,	// (0x00036ea7) cell_vkb_candidate_pane_ParamLimits

0x7c20,	// (0x00036a06) aid_size_cell_vkb_ParamLimits

0x7c20,	// (0x00036a06) aid_size_cell_vkb

0x80c1,	// (0x00036ea7) cell_vkb_candidate_pane

0x1f2d,	// (0x00030d13) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0003d09d) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0003d09d) fep_vkb_bottom_pane

0x7ce4,	// (0x00036aca) fep_vkb_candidate_pane_ParamLimits

0x7ce4,	// (0x00036aca) fep_vkb_candidate_pane

0xe2dc,	// (0x0003d0c2) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0003d0c2) fep_vkb_keypad_pane

0xe318,	// (0x0003d0fe) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0003d0fe) fep_vkb_side_pane

0xe354,	// (0x0003d13a) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0003d13a) fep_vkb_top_pane

0x7dbe,	// (0x00036ba4) fep_vkb_top_pane_g1_ParamLimits

0x7dbe,	// (0x00036ba4) fep_vkb_top_pane_g1

0x7dcd,	// (0x00036bb3) fep_vkb_top_pane_g2_ParamLimits

0x7dcd,	// (0x00036bb3) fep_vkb_top_pane_g2

0x7ddc,	// (0x00036bc2) fep_vkb_top_pane_g3_ParamLimits

0x7ddc,	// (0x00036bc2) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003e8f8) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003e8f8) fep_vkb_top_pane_g

0x7dfa,	// (0x00036be0) fep_vkb_top_text_pane_ParamLimits

0x7dfa,	// (0x00036be0) fep_vkb_top_text_pane

0xe390,	// (0x0003d176) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0003d176) fep_vkb_side_pane_g1

0x7e54,	// (0x00036c3a) grid_vkb_side_pane_ParamLimits

0x7e54,	// (0x00036c3a) grid_vkb_side_pane

0x1f35,	// (0x00030d1b) bg_popup_fep_shadow_pane_g2

0x1f3e,	// (0x00030d24) bg_popup_fep_shadow_pane_g3

0x1f46,	// (0x00030d2c) bg_popup_fep_shadow_pane_g4

0x1f4f,	// (0x00030d35) bg_popup_fep_shadow_pane_g5

0x1f59,	// (0x00030d3f) bg_popup_fep_shadow_pane_g6

0x1f61,	// (0x00030d47) bg_popup_fep_shadow_pane_g7

0x40e4,	// (0x00032eca) bg_popup_fep_shadow_pane_g8

0x7eab,	// (0x00036c91) grid_vkb_keypad_number_pane_ParamLimits

0x7eab,	// (0x00036c91) grid_vkb_keypad_number_pane

0x7ebb,	// (0x00036ca1) grid_vkb_keypad_pane_ParamLimits

0x7ebb,	// (0x00036ca1) grid_vkb_keypad_pane

0x7ee1,	// (0x00036cc7) fep_vkb_bottom_pane_g1_ParamLimits

0x7ee1,	// (0x00036cc7) fep_vkb_bottom_pane_g1

0x7f0a,	// (0x00036cf0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7f0a,	// (0x00036cf0) grid_vkb_keypad_bottom_left_pane

0x7f1f,	// (0x00036d05) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7f1f,	// (0x00036d05) grid_vkb_keypad_bottom_right_pane

0x7f34,	// (0x00036d1a) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0003d1bd) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0003d1cf) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0003d1cf) cell_vkb_side_pane

0x7b6e,	// (0x00036954) cell_vkb_side_pane_g1

0x7fa3,	// (0x00036d89) cell_vkb_keypad_pane_ParamLimits

0x7fa3,	// (0x00036d89) cell_vkb_keypad_pane

0x8018,	// (0x00036dfe) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003e925) bg_popup_fep_shadow_pane_g

0x1f73,	// (0x00030d59) cell_hwr_side_pane_g1

0x1f73,	// (0x00030d59) cell_hwr_side_pane_g2

0x8022,	// (0x00036e08) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0003d1e5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0003d1e5) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0003d1fa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0003d1fa) cell_vkb_keypad_bottom_right_pane

0x7b6e,	// (0x00036954) cell_vkb_keypad_bottom_left_pane_g1

0x7b6e,	// (0x00036954) cell_vkb_keypad_bottom_right_pane_g1

0x8086,	// (0x00036e6c) cell_vkb_keypad_number_pane_ParamLimits

0x8086,	// (0x00036e6c) cell_vkb_keypad_number_pane

0x80a5,	// (0x00036e8b) cell_vkb_keypad_number_pane_g1

0x80af,	// (0x00036e95) cell_vkb_keypad_number_pane_g2

0x80b8,	// (0x00036e9e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003e917) cell_vkb_keypad_number_pane_g

0x8022,	// (0x00036e08) cell_vkb_keypad_number_pane_t1

0x80dc,	// (0x00036ec2) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003e938) cell_hwr_side_pane_g

0x80f5,	// (0x00036edb) cell_hwr_side_pane_t1

0x1f7d,	// (0x00030d63) cell_hwr_side_pane_t1_copy1

0x1f8b,	// (0x00030d71) cell_hwr_candidate_pane_g1

0x1fba,	// (0x00030da0) cell_hwr_candidate_pane_t1

0x7b6e,	// (0x00036954) cell_vkb_candidate_pane_g2

0x8139,	// (0x00036f1f) cell_vkb_candidate_pane_t1

0x1d26,	// (0x00030b0c) bg_popup_fep_shadow_pane_ParamLimits

0x1d26,	// (0x00030b0c) bg_popup_fep_shadow_pane

0x1ddb,	// (0x00030bc1) bg_fep_hwr_top_pane_g4

0x7bee,	// (0x000369d4) bg_hwr_side_pane_g1_ParamLimits

0x7bee,	// (0x000369d4) bg_hwr_side_pane_g1

0xc915,	// (0x0003b6fb) cell_hwr_side_pane_ParamLimits

0xc915,	// (0x0003b6fb) cell_hwr_side_pane

0x1e87,	// (0x00030c6d) fep_hwr_write_pane_g1_ParamLimits

0x1e87,	// (0x00030c6d) fep_hwr_write_pane_g1

0x1e94,	// (0x00030c7a) fep_hwr_write_pane_g2_ParamLimits

0x1e94,	// (0x00030c7a) fep_hwr_write_pane_g2

0x1ea1,	// (0x00030c87) fep_hwr_write_pane_g3_ParamLimits

0x1ea1,	// (0x00030c87) fep_hwr_write_pane_g3

0xc935,	// (0x0003b71b) fep_hwr_write_pane_g4_ParamLimits

0xc935,	// (0x0003b71b) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003e8e4) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003e8e4) fep_hwr_write_pane_g

0x1ddb,	// (0x00030bc1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1ddb,	// (0x00030bc1) bg_fep_hwr_candidate_pane_g2

0x1ec4,	// (0x00030caa) cell_hwr_candidate_pane_ParamLimits

0x1ec4,	// (0x00030caa) cell_hwr_candidate_pane

0x1f06,	// (0x00030cec) fep_hwr_candidate_pane_g1_ParamLimits

0x7c4e,	// (0x00036a34) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7c4e,	// (0x00036a34) bg_popup_fep_shadow_pane_cp2

0x7dec,	// (0x00036bd2) fep_vkb_top_pane_g4_ParamLimits

0x7dec,	// (0x00036bd2) fep_vkb_top_pane_g4

0x7e32,	// (0x00036c18) fep_vkb_side_pane_g2_ParamLimits

0x7e32,	// (0x00036c18) fep_vkb_side_pane_g2

0xbcc3,	// (0x0003aaa9) list_setting_pane_t4_ParamLimits

0xbcc3,	// (0x0003aaa9) list_setting_pane_t4

0xbd5d,	// (0x0003ab43) list_setting_number_pane_t5_ParamLimits

0xbd5d,	// (0x0003ab43) list_setting_number_pane_t5

0x472f,	// (0x00033515) list_double_heading_pane_cp2_ParamLimits

0x472f,	// (0x00033515) list_double_heading_pane_cp2

0x4082,	// (0x00032e68) list_double_heading_pane_g1_cp2_ParamLimits

0x4082,	// (0x00032e68) list_double_heading_pane_g1_cp2

0x408e,	// (0x00032e74) list_double_heading_pane_g2_cp2_ParamLimits

0x408e,	// (0x00032e74) list_double_heading_pane_g2_cp2

0x8147,	// (0x00036f2d) list_double_heading_pane_t1_cp2_ParamLimits

0x8147,	// (0x00036f2d) list_double_heading_pane_t1_cp2

0x815d,	// (0x00036f43) list_double_heading_pane_t2_cp2_ParamLimits

0x815d,	// (0x00036f43) list_double_heading_pane_t2_cp2

0x36f9,	// (0x000324df) aid_value_unit2

0x042e,	// (0x0002f214) popup_preview_fixed_window

0x3a8e,	// (0x00032874) bg_popup_preview_window_pane_cp02

0x816f,	// (0x00036f55) list_preview_fixed_pane

0x81b5,	// (0x00036f9b) list_empty_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_empty_pane_fp

0x81b5,	// (0x00036f9b) list_single_cale_day_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_cale_day_pane_fp

0x81b5,	// (0x00036f9b) list_single_graphic_heading_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_graphic_heading_pane_fp

0x81b5,	// (0x00036f9b) list_single_graphic_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_graphic_pane_fp

0x81b5,	// (0x00036f9b) list_single_heading_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_heading_pane_fp

0x81b5,	// (0x00036f9b) list_single_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_pane_fp

0x81ca,	// (0x00036fb0) list_single_pane_fp_g1_ParamLimits

0x81ca,	// (0x00036fb0) list_single_pane_fp_g1

0x335a,	// (0x00032140) list_single_pane_fp_g2_ParamLimits

0x335a,	// (0x00032140) list_single_pane_fp_g2

0x3366,	// (0x0003214c) list_single_pane_fp_g3_ParamLimits

0x3366,	// (0x0003214c) list_single_pane_fp_g3

0x81d6,	// (0x00036fbc) list_single_pane_fp_g4_ParamLimits

0x81d6,	// (0x00036fbc) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003e94b) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003e94b) list_single_pane_fp_g

0x337a,	// (0x00032160) list_single_pane_fp_t1_ParamLimits

0x337a,	// (0x00032160) list_single_pane_fp_t1

0x3391,	// (0x00032177) list_single_graphic_pane_fp_g1_ParamLimits

0x3391,	// (0x00032177) list_single_graphic_pane_fp_g1

0x81ca,	// (0x00036fb0) list_single_graphic_pane_fp_g2_ParamLimits

0x81ca,	// (0x00036fb0) list_single_graphic_pane_fp_g2

0x335a,	// (0x00032140) list_single_graphic_pane_fp_g3_ParamLimits

0x335a,	// (0x00032140) list_single_graphic_pane_fp_g3

0x3366,	// (0x0003214c) list_single_graphic_pane_fp_g4_ParamLimits

0x3366,	// (0x0003214c) list_single_graphic_pane_fp_g4

0x81d6,	// (0x00036fbc) list_single_graphic_pane_fp_g5_ParamLimits

0x81d6,	// (0x00036fbc) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e954) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e954) list_single_graphic_pane_fp_g

0x339d,	// (0x00032183) list_single_graphic_pane_fp_t1_ParamLimits

0x339d,	// (0x00032183) list_single_graphic_pane_fp_t1

0x3391,	// (0x00032177) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3391,	// (0x00032177) list_single_graphic_heading_pane_fp_g1

0x81ca,	// (0x00036fb0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x81ca,	// (0x00036fb0) list_single_graphic_heading_pane_fp_g2

0x335a,	// (0x00032140) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x335a,	// (0x00032140) list_single_graphic_heading_pane_fp_g3

0x3366,	// (0x0003214c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3366,	// (0x0003214c) list_single_graphic_heading_pane_fp_g4

0x81d6,	// (0x00036fbc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x81d6,	// (0x00036fbc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e954) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e954) list_single_graphic_heading_pane_fp_g

0x33b3,	// (0x00032199) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33b3,	// (0x00032199) list_single_graphic_heading_pane_fp_t1

0x33c9,	// (0x000321af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33c9,	// (0x000321af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003e95f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003e95f) list_single_graphic_heading_pane_fp_t

0x33db,	// (0x000321c1) list_single_cale_day_pane_fp_g1_ParamLimits

0x33db,	// (0x000321c1) list_single_cale_day_pane_fp_g1

0x81e2,	// (0x00036fc8) list_single_cale_day_pane_fp_g2_ParamLimits

0x81e2,	// (0x00036fc8) list_single_cale_day_pane_fp_g2

0x3413,	// (0x000321f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x3413,	// (0x000321f9) list_single_cale_day_pane_fp_g3

0x343b,	// (0x00032221) list_single_cale_day_pane_fp_g4_ParamLimits

0x343b,	// (0x00032221) list_single_cale_day_pane_fp_g4

0x345f,	// (0x00032245) list_single_cale_day_pane_fp_g5_ParamLimits

0x345f,	// (0x00032245) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003e964) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003e964) list_single_cale_day_pane_fp_g

0x3483,	// (0x00032269) list_single_cale_day_pane_fp_t1_ParamLimits

0x3483,	// (0x00032269) list_single_cale_day_pane_fp_t1

0x34a9,	// (0x0003228f) list_single_cale_day_pane_fp_t2_ParamLimits

0x34a9,	// (0x0003228f) list_single_cale_day_pane_fp_t2

0x34c2,	// (0x000322a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x34c2,	// (0x000322a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003e96f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003e96f) list_single_cale_day_pane_fp_t

0x81ca,	// (0x00036fb0) list_empty_pane_fp_g1_ParamLimits

0x81ca,	// (0x00036fb0) list_empty_pane_fp_g1

0x34db,	// (0x000322c1) list_empty_pane_fp_t1

0x34e9,	// (0x000322cf) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003e976) list_empty_pane_fp_t

0x81ca,	// (0x00036fb0) list_single_heading_pane_fp_g1_ParamLimits

0x81ca,	// (0x00036fb0) list_single_heading_pane_fp_g1

0x335a,	// (0x00032140) list_single_heading_pane_fp_g2_ParamLimits

0x335a,	// (0x00032140) list_single_heading_pane_fp_g2

0x3366,	// (0x0003214c) list_single_heading_pane_fp_g3_ParamLimits

0x3366,	// (0x0003214c) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003e97b) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003e97b) list_single_heading_pane_fp_g

0x34f7,	// (0x000322dd) list_single_heading_pane_fp_t1_ParamLimits

0x34f7,	// (0x000322dd) list_single_heading_pane_fp_t1

0x3509,	// (0x000322ef) list_single_heading_pane_fp_t2_ParamLimits

0x3509,	// (0x000322ef) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003e982) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003e982) list_single_heading_pane_fp_t

0x4273,	// (0x00033059) aid_size_cell_fast

0x39fe,	// (0x000327e4) soft_indicator_pane_cp1_t1

0x42b0,	// (0x00033096) cell_app_pane_cp2_ParamLimits

0x42b0,	// (0x00033096) cell_app_pane_cp2

0x1d48,	// (0x00030b2e) fep_hwr_candidate_drop_down_list_pane

0x1f20,	// (0x00030d06) fep_hwr_candidate_pane_g3_ParamLimits

0x1f20,	// (0x00030d06) fep_hwr_candidate_pane_g3

0xeb57,	// (0x0003d93d) fep_hwr_candidate_pane_g4_ParamLimits

0xeb57,	// (0x0003d93d) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003e8f1) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003e8f1) fep_hwr_candidate_pane_g

0x7cd3,	// (0x00036ab9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7cd3,	// (0x00036ab9) fep_vkb_candidate_drop_down_list_pane

0x80e4,	// (0x00036eca) fep_vkb_candidate_pane_g3

0x80ec,	// (0x00036ed2) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003e91e) fep_vkb_candidate_pane_g

0x1f8b,	// (0x00030d71) cell_hwr_candidate_pane_g1_ParamLimits

0x1f99,	// (0x00030d7f) cell_hwr_candidate_pane_g3_ParamLimits

0x1f99,	// (0x00030d7f) cell_hwr_candidate_pane_g3

0x9c9f,	// (0x00038a85) cell_hwr_candidate_pane_g4_ParamLimits

0x9c9f,	// (0x00038a85) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003e93d) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003e93d) cell_hwr_candidate_pane_g

0x8103,	// (0x00036ee9) cell_vkb_candidate_pane_g3_ParamLimits

0x8103,	// (0x00036ee9) cell_vkb_candidate_pane_g3

0x811e,	// (0x00036f04) cell_vkb_candidate_pane_g4_ParamLimits

0x811e,	// (0x00036f04) cell_vkb_candidate_pane_g4

0x81ee,	// (0x00036fd4) cell_app_pane_cp2_g1_ParamLimits

0x81ee,	// (0x00036fd4) cell_app_pane_cp2_g1

0x820c,	// (0x00036ff2) cell_app_pane_cp2_g2_ParamLimits

0x820c,	// (0x00036ff2) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003e987) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003e987) cell_app_pane_cp2_g

0x8218,	// (0x00036ffe) cell_app_pane_cp2_t1_ParamLimits

0x8218,	// (0x00036ffe) cell_app_pane_cp2_t1

0x4074,	// (0x00032e5a) grid_highlight_pane_cp1_ParamLimits

0x4074,	// (0x00032e5a) grid_highlight_pane_cp1

0x1fd8,	// (0x00030dbe) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fd8,	// (0x00030dbe) cell_hwr_candidate_pane_cp1

0x1f8b,	// (0x00030d71) fep_hwr_candidate_drop_down_list_pane_g1

0x1ff7,	// (0x00030ddd) fep_hwr_candidate_drop_down_list_pane_g2

0x2004,	// (0x00030dea) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003e98c) fep_hwr_candidate_drop_down_list_pane_g

0x2011,	// (0x00030df7) fep_hwr_candidate_drop_down_list_scroll_pane

0x201a,	// (0x00030e00) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x201a,	// (0x00030e00) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2027,	// (0x00030e0d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2027,	// (0x00030e0d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2034,	// (0x00030e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2034,	// (0x00030e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2041,	// (0x00030e27) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2041,	// (0x00030e27) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x205c,	// (0x00030e42) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x205c,	// (0x00030e42) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2077,	// (0x00030e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2077,	// (0x00030e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2092,	// (0x00030e78) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2092,	// (0x00030e78) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20ad,	// (0x00030e93) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20ad,	// (0x00030e93) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003e993) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003e993) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x822a,	// (0x00037010) cell_vkb_candidate_pane_cp1_ParamLimits

0x822a,	// (0x00037010) cell_vkb_candidate_pane_cp1

0x7dec,	// (0x00036bd2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7dec,	// (0x00036bd2) fep_vkb_candidate_drop_down_list_pane_g1

0x824a,	// (0x00037030) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x824a,	// (0x00037030) fep_vkb_candidate_drop_down_list_pane_g2

0x8257,	// (0x0003703d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8257,	// (0x0003703d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003e9a4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003e9a4) fep_vkb_candidate_drop_down_list_pane_g

0x8264,	// (0x0003704a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8264,	// (0x0003704a) fep_vkb_candidate_drop_down_list_scroll_pane

0x8271,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8271,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x827e,	// (0x00037064) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x827e,	// (0x00037064) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x828a,	// (0x00037070) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x828a,	// (0x00037070) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8296,	// (0x0003707c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8296,	// (0x0003707c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x82b7,	// (0x0003709d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x82b7,	// (0x0003709d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x82d8,	// (0x000370be) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x82d8,	// (0x000370be) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x82f9,	// (0x000370df) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x82f9,	// (0x000370df) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x831a,	// (0x00037100) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x831a,	// (0x00037100) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003e9ab) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003e9ab) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0ec,	// (0x0003bed2) title_pane_g1_ParamLimits

0xd0ff,	// (0x0003bee5) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e334) title_pane_g_ParamLimits

0x46e8,	// (0x000334ce) aid_call2_pane

0x46f0,	// (0x000334d6) aid_call_pane

0x46f8,	// (0x000334de) popup_clock_analogue_window_g1

0x46f8,	// (0x000334de) popup_clock_analogue_window_g2

0x0eba,	// (0x0002fca0) popup_clock_analogue_window_g3

0x0ec3,	// (0x0002fca9) popup_clock_analogue_window_g4

0x371b,	// (0x00032501) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003e4de) popup_clock_analogue_window_g

0x0ecb,	// (0x0002fcb1) popup_clock_analogue_window_t1

0x0ed9,	// (0x0002fcbf) clock_digital_number_pane_ParamLimits

0x0ed9,	// (0x0002fcbf) clock_digital_number_pane

0x0ee5,	// (0x0002fccb) clock_digital_number_pane_cp02_ParamLimits

0x0ee5,	// (0x0002fccb) clock_digital_number_pane_cp02

0x0ef1,	// (0x0002fcd7) clock_digital_number_pane_cp03_ParamLimits

0x0ef1,	// (0x0002fcd7) clock_digital_number_pane_cp03

0x0efd,	// (0x0002fce3) clock_digital_number_pane_cp04_ParamLimits

0x0efd,	// (0x0002fce3) clock_digital_number_pane_cp04

0x0f09,	// (0x0002fcef) clock_digital_separator_pane_ParamLimits

0x0f09,	// (0x0002fcef) clock_digital_separator_pane

0x0f15,	// (0x0002fcfb) popup_clock_digital_window_t1_ParamLimits

0x0f15,	// (0x0002fcfb) popup_clock_digital_window_t1

0x371b,	// (0x00032501) clock_digital_number_pane_g1

0x371b,	// (0x00032501) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003e4e9) clock_digital_number_pane_g

0x371b,	// (0x00032501) clock_digital_separator_pane_g1

0x371b,	// (0x00032501) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003e4e9) clock_digital_separator_pane_g

0xd793,	// (0x0003c579) aid_fill_nsta_ParamLimits

0xd8c9,	// (0x0003c6af) indicator_nsta_pane_ParamLimits

0x533b,	// (0x00034121) popup_clock_analogue_window

0x533b,	// (0x00034121) popup_clock_digital_window

0x4234,	// (0x0003301a) grid_indicator_nsta_pane_ParamLimits

0x7587,	// (0x0003636d) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003e871) clock_nsta_pane_t

0x0e7e,	// (0x0002fc64) aid_size_max_handle

0xbefc,	// (0x0003ace2) aid_size_min_handle

0x4d0b,	// (0x00033af1) editor_scroll_pane

0x8335,	// (0x0003711b) ex_editor_pane

0x41e1,	// (0x00032fc7) scroll_pane_cp13

0x4013,	// (0x00032df9) scroll_pane_cp14

0x4727,	// (0x0003350d) scroll_pane_cp36

0xd576,	// (0x0003c35c) list_single_graphic_hl_pane_cp2_ParamLimits

0xd576,	// (0x0003c35c) list_single_graphic_hl_pane_cp2

0xc8a3,	// (0x0003b689) list_single_graphic_hl_pane_ParamLimits

0xc8a3,	// (0x0003b689) list_single_graphic_hl_pane

0x351f,	// (0x00032305) aid_size_min_hl_cp1

0x833d,	// (0x00037123) list_highlight_pane_cp34_ParamLimits

0x833d,	// (0x00037123) list_highlight_pane_cp34

0x834e,	// (0x00037134) list_single_graphic_hl_pane_g1_ParamLimits

0x834e,	// (0x00037134) list_single_graphic_hl_pane_g1

0xc94a,	// (0x0003b730) list_single_graphic_hl_pane_g2_ParamLimits

0xc94a,	// (0x0003b730) list_single_graphic_hl_pane_g2

0xc94a,	// (0x0003b730) list_single_graphic_hl_pane_g3_ParamLimits

0xc94a,	// (0x0003b730) list_single_graphic_hl_pane_g3

0xc956,	// (0x0003b73c) list_single_graphic_hl_pane_g4_ParamLimits

0xc956,	// (0x0003b73c) list_single_graphic_hl_pane_g4

0xc962,	// (0x0003b748) list_single_graphic_hl_pane_g5_ParamLimits

0xc962,	// (0x0003b748) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003e9bc) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003e9bc) list_single_graphic_hl_pane_g

0xc976,	// (0x0003b75c) list_single_graphic_hl_pane_t1_ParamLimits

0xc976,	// (0x0003b75c) list_single_graphic_hl_pane_t1

0x835b,	// (0x00037141) aid_size_min_hl_cp2

0x8364,	// (0x0003714a) list_highlight_pane_cp34_cp2_ParamLimits

0x8364,	// (0x0003714a) list_highlight_pane_cp34_cp2

0x834e,	// (0x00037134) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x834e,	// (0x00037134) list_single_graphic_hl_pane_g1_cp2

0x8371,	// (0x00037157) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8371,	// (0x00037157) list_single_graphic_hl_pane_g2_cp2

0x837d,	// (0x00037163) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x837d,	// (0x00037163) list_single_graphic_hl_pane_g3_cp2

0x756d,	// (0x00036353) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x756d,	// (0x00036353) list_single_graphic_hl_pane_g4_cp2

0x838b,	// (0x00037171) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x838b,	// (0x00037171) list_single_graphic_hl_pane_g5_cp2

0xbfe3,	// (0x0003adc9) control_pane_g4_ParamLimits

0xbfe3,	// (0x0003adc9) control_pane_g4

0x505a,	// (0x00033e40) bg_popup_sub_pane_cp10_ParamLimits

0x7b78,	// (0x0003695e) list_choice_list_pane_ParamLimits

0x7b87,	// (0x0003696d) scroll_pane_cp23

0x3a8e,	// (0x00032874) bg_popup_preview_window_pane_cp02_ParamLimits

0x816f,	// (0x00036f55) list_preview_fixed_pane_ParamLimits

0x8185,	// (0x00036f6b) list_preview_fixed_pane_cp_ParamLimits

0x8185,	// (0x00036f6b) list_preview_fixed_pane_cp

0x8191,	// (0x00036f77) popup_preview_fixed_window_g1_ParamLimits

0x8191,	// (0x00036f77) popup_preview_fixed_window_g1

0x819d,	// (0x00036f83) popup_preview_fixed_window_g2_ParamLimits

0x819d,	// (0x00036f83) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003e944) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003e944) popup_preview_fixed_window_g

0x0df2,	// (0x0002fbd8) aid_navi_side_left_pane_ParamLimits

0x0e07,	// (0x0002fbed) aid_navi_side_right_pane_ParamLimits

0x0e1f,	// (0x0002fc05) navi_icon_pane_stacon_ParamLimits

0x0e33,	// (0x0002fc19) navi_navi_pane_stacon_ParamLimits

0x0e1f,	// (0x0002fc05) navi_text_pane_stacon_ParamLimits

0x02ef,	// (0x0002f0d5) main_text_info_pane

0x83b5,	// (0x0003719b) listscroll_text_info_pane

0x83bd,	// (0x000371a3) list_text_info_pane_ParamLimits

0x83bd,	// (0x000371a3) list_text_info_pane

0x83cc,	// (0x000371b2) scroll_pane_cp24_ParamLimits

0x83cc,	// (0x000371b2) scroll_pane_cp24

0xe42f,	// (0x0003d215) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0003d215) list_text_info_pane_t1

0xc14c,	// (0x0003af32) popup_fast_swap2_window_ParamLimits

0xc14c,	// (0x0003af32) popup_fast_swap2_window

0x841b,	// (0x00037201) aid_size_cell_fast2

0x3711,	// (0x000324f7) bg_popup_window_pane_cp17

0x59c4,	// (0x000347aa) heading_pane_cp2

0x3cdd,	// (0x00032ac3) listscroll_fast2_pane

0x8425,	// (0x0003720b) grid_fast2_pane

0x842f,	// (0x00037215) listscroll_fast2_pane_g1

0x8437,	// (0x0003721d) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003e9c7) listscroll_fast2_pane_g

0x41e1,	// (0x00032fc7) scroll_pane_cp26

0x8441,	// (0x00037227) cell_fast2_pane_ParamLimits

0x8441,	// (0x00037227) cell_fast2_pane

0x8456,	// (0x0003723c) cell_fast2_pane_g1

0x845f,	// (0x00037245) cell_fast2_pane_g2

0x8468,	// (0x0003724e) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003e9cc) cell_fast2_pane_g

0x3dd0,	// (0x00032bb6) grid_highlight_pane_cp9

0x12f1,	// (0x000300d7) main_eswt_pane_ParamLimits

0x12f1,	// (0x000300d7) main_eswt_pane

0x83e1,	// (0x000371c7) list_single_text_info_pane

0x8470,	// (0x00037256) eswt_ctrl_button_pane

0x8470,	// (0x00037256) eswt_ctrl_canvas_pane

0x8478,	// (0x0003725e) eswt_ctrl_combo_pane

0x8470,	// (0x00037256) eswt_ctrl_default_pane

0x8470,	// (0x00037256) eswt_ctrl_label_pane

0x8480,	// (0x00037266) eswt_ctrl_wait_pane

0x8488,	// (0x0003726e) eswt_shell_pane

0x3711,	// (0x000324f7) listscroll_eswt_app_pane

0x84a8,	// (0x0003728e) popup_eswt_tasktip_window_ParamLimits

0x84a8,	// (0x0003728e) popup_eswt_tasktip_window

0x55d8,	// (0x000343be) bg_popup_window_pane_cp18

0x84b9,	// (0x0003729f) eswt_control_pane_g1_ParamLimits

0x84b9,	// (0x0003729f) eswt_control_pane_g1

0x84c6,	// (0x000372ac) eswt_control_pane_g2_ParamLimits

0x84c6,	// (0x000372ac) eswt_control_pane_g2

0x84d3,	// (0x000372b9) eswt_control_pane_g3_ParamLimits

0x84d3,	// (0x000372b9) eswt_control_pane_g3

0x84e0,	// (0x000372c6) eswt_control_pane_g4_ParamLimits

0x84e0,	// (0x000372c6) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003e9d3) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003e9d3) eswt_control_pane_g

0x4074,	// (0x00032e5a) bg_button_pane_ParamLimits

0x4074,	// (0x00032e5a) bg_button_pane

0x3de5,	// (0x00032bcb) common_borders_pane_copy2_ParamLimits

0x3de5,	// (0x00032bcb) common_borders_pane_copy2

0x84ed,	// (0x000372d3) control_button_pane_g1_ParamLimits

0x84ed,	// (0x000372d3) control_button_pane_g1

0x84f9,	// (0x000372df) control_button_pane_g2_ParamLimits

0x84f9,	// (0x000372df) control_button_pane_g2

0x8505,	// (0x000372eb) control_button_pane_g3_ParamLimits

0x8505,	// (0x000372eb) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003e9dc) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003e9dc) control_button_pane_g

0x8519,	// (0x000372ff) control_button_pane_t1

0x8527,	// (0x0003730d) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003e9e3) control_button_pane_t

0x5564,	// (0x0003434a) bg_button_pane_g1

0x5574,	// (0x0003435a) bg_button_pane_g2

0x556c,	// (0x00034352) bg_button_pane_g3

0x5584,	// (0x0003436a) bg_button_pane_g4

0x557c,	// (0x00034362) bg_button_pane_g5

0x558c,	// (0x00034372) bg_button_pane_g6

0x5594,	// (0x0003437a) bg_button_pane_g7

0x55a4,	// (0x0003438a) bg_button_pane_g8

0x559c,	// (0x00034382) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003e647) bg_button_pane_g

0x7b33,	// (0x00036919) common_borders_pane_ParamLimits

0x7b33,	// (0x00036919) common_borders_pane

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy1_ParamLimits

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy1

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy1_ParamLimits

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy1

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy1_ParamLimits

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy1

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy1_ParamLimits

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy1

0x7b6e,	// (0x00036954) bg_eswt_ctrl_canvas_pane_g1

0x7b33,	// (0x00036919) common_borders_pane_cp2_ParamLimits

0x7b33,	// (0x00036919) common_borders_pane_cp2

0x7b33,	// (0x00036919) common_borders_pane_cp3_ParamLimits

0x7b33,	// (0x00036919) common_borders_pane_cp3

0x8535,	// (0x0003731b) separator_horizontal_pane

0x853d,	// (0x00037323) separator_vertical_pane

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy2_ParamLimits

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy2

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy2_ParamLimits

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy2

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy2_ParamLimits

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy2

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy2_ParamLimits

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy2

0x3711,	// (0x000324f7) common_borders_pane_cp4

0x8546,	// (0x0003732c) separator_horizontal_pane_g1

0x854f,	// (0x00037335) separator_horizontal_pane_g2

0x8558,	// (0x0003733e) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003e9e8) separator_horizontal_pane_g

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy3_ParamLimits

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy3

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy3_ParamLimits

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy3

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy3_ParamLimits

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy3

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy3_ParamLimits

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy3

0x3711,	// (0x000324f7) common_borders_pane_cp5

0x8561,	// (0x00037347) separator_vertical_pane_g1

0x856a,	// (0x00037350) separator_vertical_pane_g2

0x8573,	// (0x00037359) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003e9ef) separator_vertical_pane_g

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy4_ParamLimits

0x84b9,	// (0x0003729f) eswt_control_pane_g1_copy4

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy4_ParamLimits

0x84c6,	// (0x000372ac) eswt_control_pane_g2_copy4

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy4_ParamLimits

0x84d3,	// (0x000372b9) eswt_control_pane_g3_copy4

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy4_ParamLimits

0x84e0,	// (0x000372c6) eswt_control_pane_g4_copy4

0xe44a,	// (0x0003d230) eswt_ctrl_combo_button_pane

0xe452,	// (0x0003d238) eswt_ctrl_input_pane

0xe45a,	// (0x0003d240) popup_choice_list_window_cp70

0xe462,	// (0x0003d248) eswt_ctrl_input_pane_t1

0x3711,	// (0x000324f7) input_focus_pane_cp70

0x7b33,	// (0x00036919) bg_button_pane_cp70_ParamLimits

0x7b33,	// (0x00036919) bg_button_pane_cp70

0xe470,	// (0x0003d256) eswt_ctrl_combo_button_pane_g1

0x85aa,	// (0x00037390) wait_bar_pane_cp70

0x55d8,	// (0x000343be) bg_popup_window_pane_cp70_ParamLimits

0x55d8,	// (0x000343be) bg_popup_window_pane_cp70

0x85b2,	// (0x00037398) popup_eswt_tasktip_window_t1

0x85c8,	// (0x000373ae) wait_bar_pane_cp71_ParamLimits

0x85c8,	// (0x000373ae) wait_bar_pane_cp71

0x85d4,	// (0x000373ba) grid_eswt_app_pane

0x4501,	// (0x000332e7) scroll_pane_cp70

0xe478,	// (0x0003d25e) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0003d25e) cell_eswt_app_pane

0xe4a2,	// (0x0003d288) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0003d288) cell_eswt_app_pane_g1

0xe4d1,	// (0x0003d2b7) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0003d2b7) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003e9f6) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003e9f6) cell_eswt_app_pane_g

0xe4fa,	// (0x0003d2e0) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0003d2e0) cell_eswt_app_pane_t1

0x8697,	// (0x0003747d) grid_highlight_pane_cp70_ParamLimits

0x8697,	// (0x0003747d) grid_highlight_pane_cp70

0x4be0,	// (0x000339c6) set_content_pane_g1

0xd748,	// (0x0003c52e) status_small_volume_pane

0x20c8,	// (0x00030eae) status_small_volume_pane_g1

0x20d0,	// (0x00030eb6) volume_small2_pane

0x20d9,	// (0x00030ebf) volume_small2_pane_g1

0x20e2,	// (0x00030ec8) volume_small2_pane_g2

0x20eb,	// (0x00030ed1) volume_small2_pane_g3

0x20f4,	// (0x00030eda) volume_small2_pane_g4

0x20fd,	// (0x00030ee3) volume_small2_pane_g5

0x2106,	// (0x00030eec) volume_small2_pane_g6

0x210f,	// (0x00030ef5) volume_small2_pane_g7

0x2118,	// (0x00030efe) volume_small2_pane_g8

0x2121,	// (0x00030f07) volume_small2_pane_g9

0x212a,	// (0x00030f10) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003e9fb) volume_small2_pane_g

0x7f34,	// (0x00036d1a) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0003d1bd) fep_vkb_top_text_pane_t1_ParamLimits

0x81a9,	// (0x00036f8f) popup_preview_fixed_window_g3_ParamLimits

0x81a9,	// (0x00036f8f) popup_preview_fixed_window_g3

0xc76f,	// (0x0003b555) popup_toolbar_trans_pane

0xddc5,	// (0x0003cbab) aid_height_set_list_ParamLimits

0x6945,	// (0x0003572b) aid_size_parent_ParamLimits

0x505a,	// (0x00033e40) list_highlight_pane_cp2_ParamLimits

0x4be0,	// (0x000339c6) set_content_pane_g1_ParamLimits

0xc8b5,	// (0x0003b69b) list_single_image_pane_ParamLimits

0xc8b5,	// (0x0003b69b) list_single_image_pane

0xe52c,	// (0x0003d312) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0003d312) aid_size_cell_image

0xe539,	// (0x0003d31f) grid_single_image_pane_ParamLimits

0xe539,	// (0x0003d31f) grid_single_image_pane

0x5e02,	// (0x00034be8) list_single_image_pane_g1_ParamLimits

0x5e02,	// (0x00034be8) list_single_image_pane_g1

0x86bc,	// (0x000374a2) list_single_image_pane_g2_ParamLimits

0x86bc,	// (0x000374a2) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003ea10) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003ea10) list_single_image_pane_g

0x86d0,	// (0x000374b6) list_single_image_pane_t1_ParamLimits

0x86d0,	// (0x000374b6) list_single_image_pane_t1

0xe547,	// (0x0003d32d) cell_image_list_pane_ParamLimits

0xe547,	// (0x0003d32d) cell_image_list_pane

0xe55d,	// (0x0003d343) cell_image_list_pane_g1

0xe566,	// (0x0003d34c) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003ea15) cell_image_list_pane_g

0x870c,	// (0x000374f2) aid_size_cell_tb_trans_pane

0x4074,	// (0x00032e5a) bg_tb_trans_pane

0x871e,	// (0x00037504) grid_tb_trans_pane

0x5564,	// (0x0003434a) bg_tb_trans_pane_g1

0x5574,	// (0x0003435a) bg_tb_trans_pane_g2

0x556c,	// (0x00034352) bg_tb_trans_pane_g3

0x5584,	// (0x0003436a) bg_tb_trans_pane_g4

0x557c,	// (0x00034362) bg_tb_trans_pane_g5

0x55a4,	// (0x0003438a) bg_tb_trans_pane_g6

0x559c,	// (0x00034382) bg_tb_trans_pane_g7

0x558c,	// (0x00034372) bg_tb_trans_pane_g8

0x5594,	// (0x0003437a) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003ea1a) bg_tb_trans_pane_g

0x8732,	// (0x00037518) cell_toolbar_trans_pane_ParamLimits

0x8732,	// (0x00037518) cell_toolbar_trans_pane

0x7b6e,	// (0x00036954) cell_toolbar_trans_pane_g1

0xe19a,	// (0x0003cf80) list_form2_midp_pane_t1

0xe1a8,	// (0x0003cf8e) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003e8b7) list_form2_midp_pane_t

0x775f,	// (0x00036545) scroll_pane_cp51_ParamLimits

0x791b,	// (0x00036701) form2_midp_wait_pane_g1

0x7924,	// (0x0003670a) form2_midp_wait_pane_g2

0x792d,	// (0x00036713) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003e8cc) form2_midp_wait_pane_g

0x3805,	// (0x000325eb) list_highlight_pane_cp21_ParamLimits

0x7979,	// (0x0003675f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7988,	// (0x0003676e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6afd,	// (0x000358e3) list_single_2graphic_im_pane_ParamLimits

0x6afd,	// (0x000358e3) list_single_2graphic_im_pane

0xe56f,	// (0x0003d355) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0003d355) list_single_2graphic_im_pane_g1

0xe580,	// (0x0003d366) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0003d366) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0003d372) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0003d372) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003ea2d) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003ea2d) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0003d386) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0003d386) list_single_2graphic_im_pane_t1

0x81b5,	// (0x00036f9b) list_single_graphic_2heading_pane_fp_ParamLimits

0x81b5,	// (0x00036f9b) list_single_graphic_2heading_pane_fp

0x3391,	// (0x00032177) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3391,	// (0x00032177) list_single_graphic_2heading_pane_fp_g1

0x81ca,	// (0x00036fb0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x81ca,	// (0x00036fb0) list_single_graphic_2heading_pane_fp_g2

0x335a,	// (0x00032140) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x335a,	// (0x00032140) list_single_graphic_2heading_pane_fp_g3

0x3366,	// (0x0003214c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3366,	// (0x0003214c) list_single_graphic_2heading_pane_fp_g4

0x81d6,	// (0x00036fbc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x81d6,	// (0x00036fbc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e954) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e954) list_single_graphic_2heading_pane_fp_g

0x356a,	// (0x00032350) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x356a,	// (0x00032350) list_single_graphic_2heading_pane_fp_t1

0x33c9,	// (0x000321af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33c9,	// (0x000321af) list_single_graphic_2heading_pane_fp_t2

0x3580,	// (0x00032366) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3580,	// (0x00032366) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003ea36) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003ea36) list_single_graphic_2heading_pane_fp_t

0x7bfa,	// (0x000369e0) fep_hwr_write_pane_g5_ParamLimits

0x7bfa,	// (0x000369e0) fep_hwr_write_pane_g5

0x7c06,	// (0x000369ec) fep_hwr_write_pane_g6_ParamLimits

0x7c06,	// (0x000369ec) fep_hwr_write_pane_g6

0x8488,	// (0x0003726e) eswt_shell_pane_ParamLimits

0x55d8,	// (0x000343be) bg_popup_window_pane_cp18_ParamLimits

0x688d,	// (0x00035673) heading_pane_cp70

0x85b2,	// (0x00037398) popup_eswt_tasktip_window_t1_ParamLimits

0xd7ee,	// (0x0003c5d4) aid_touch_tab_arrow_left

0xd804,	// (0x0003c5ea) aid_touch_tab_arrow_right

0xd117,	// (0x0003befd) title_pane_g3_ParamLimits

0xd117,	// (0x0003befd) title_pane_g3

0x4033,	// (0x00032e19) set_value_pane_g1

0xc76f,	// (0x0003b555) popup_toolbar_trans_pane_ParamLimits

0x870c,	// (0x000374f2) aid_size_cell_tb_trans_pane_ParamLimits

0x4074,	// (0x00032e5a) bg_tb_trans_pane_ParamLimits

0x871e,	// (0x00037504) grid_tb_trans_pane_ParamLimits

0x3a8e,	// (0x00032874) cont_note_pane_ParamLimits

0x3a8e,	// (0x00032874) cont_note_pane

0x3de5,	// (0x00032bcb) cont_snote2_single_text_pane_ParamLimits

0x3de5,	// (0x00032bcb) cont_snote2_single_text_pane

0x3de5,	// (0x00032bcb) cont_snote2_single_graphic_pane_ParamLimits

0x3de5,	// (0x00032bcb) cont_snote2_single_graphic_pane

0x5bdf,	// (0x000349c5) cont_note_wait_pane_ParamLimits

0x5bdf,	// (0x000349c5) cont_note_wait_pane

0x5bdf,	// (0x000349c5) cont_note_image_pane_ParamLimits

0x5bdf,	// (0x000349c5) cont_note_image_pane

0x87c6,	// (0x000375ac) popup_note2_window_g1_ParamLimits

0x87c6,	// (0x000375ac) popup_note2_window_g1

0x87f7,	// (0x000375dd) popup_note2_window_t1_ParamLimits

0x87f7,	// (0x000375dd) popup_note2_window_t1

0x883c,	// (0x00037622) popup_note2_window_t2_ParamLimits

0x883c,	// (0x00037622) popup_note2_window_t2

0x8881,	// (0x00037667) popup_note2_window_t3_ParamLimits

0x8881,	// (0x00037667) popup_note2_window_t3

0x88c6,	// (0x000376ac) popup_note2_window_t4_ParamLimits

0x88c6,	// (0x000376ac) popup_note2_window_t4

0x3b12,	// (0x000328f8) popup_note2_window_t5_ParamLimits

0x3b12,	// (0x000328f8) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003ea42) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003ea42) popup_note2_window_t

0x88f5,	// (0x000376db) popup_note2_image_window_g1_ParamLimits

0x88f5,	// (0x000376db) popup_note2_image_window_g1

0x8901,	// (0x000376e7) popup_note2_image_window_g2_ParamLimits

0x8901,	// (0x000376e7) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003ea4d) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003ea4d) popup_note2_image_window_g

0x8913,	// (0x000376f9) popup_note2_image_window_t1_ParamLimits

0x8913,	// (0x000376f9) popup_note2_image_window_t1

0x892b,	// (0x00037711) popup_note2_image_window_t2_ParamLimits

0x892b,	// (0x00037711) popup_note2_image_window_t2

0x8943,	// (0x00037729) popup_note2_image_window_t3_ParamLimits

0x8943,	// (0x00037729) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003ea52) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003ea52) popup_note2_image_window_t

0x5bed,	// (0x000349d3) popup_note2_wait_window_g1_ParamLimits

0x5bed,	// (0x000349d3) popup_note2_wait_window_g1

0x895f,	// (0x00037745) popup_note2_wait_window_g2_ParamLimits

0x895f,	// (0x00037745) popup_note2_wait_window_g2

0x5c05,	// (0x000349eb) popup_note2_wait_window_g3_ParamLimits

0x5c05,	// (0x000349eb) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003ea59) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003ea59) popup_note2_wait_window_g

0x896b,	// (0x00037751) popup_note2_wait_window_t1_ParamLimits

0x896b,	// (0x00037751) popup_note2_wait_window_t1

0x8989,	// (0x0003776f) popup_note2_wait_window_t2_ParamLimits

0x8989,	// (0x0003776f) popup_note2_wait_window_t2

0x89a7,	// (0x0003778d) popup_note2_wait_window_t3_ParamLimits

0x89a7,	// (0x0003778d) popup_note2_wait_window_t3

0x89b9,	// (0x0003779f) popup_note2_wait_window_t4_ParamLimits

0x89b9,	// (0x0003779f) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003ea60) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003ea60) popup_note2_wait_window_t

0x89cb,	// (0x000377b1) wait_bar2_pane_ParamLimits

0x89cb,	// (0x000377b1) wait_bar2_pane

0x89e3,	// (0x000377c9) popup_snote2_single_text_window_g1_ParamLimits

0x89e3,	// (0x000377c9) popup_snote2_single_text_window_g1

0x8a0b,	// (0x000377f1) popup_snote2_single_text_window_t1_ParamLimits

0x8a0b,	// (0x000377f1) popup_snote2_single_text_window_t1

0x8a57,	// (0x0003783d) popup_snote2_single_text_window_t2_ParamLimits

0x8a57,	// (0x0003783d) popup_snote2_single_text_window_t2

0x8aa3,	// (0x00037889) popup_snote2_single_text_window_t3_ParamLimits

0x8aa3,	// (0x00037889) popup_snote2_single_text_window_t3

0x8ae4,	// (0x000378ca) popup_snote2_single_text_window_t4_ParamLimits

0x8ae4,	// (0x000378ca) popup_snote2_single_text_window_t4

0x8b1a,	// (0x00037900) popup_snote2_single_text_window_t5_ParamLimits

0x8b1a,	// (0x00037900) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003ea69) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003ea69) popup_snote2_single_text_window_t

0x8b45,	// (0x0003792b) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b45,	// (0x0003792b) popup_snote2_single_graphic_window_g1

0x8b6d,	// (0x00037953) popup_snote2_single_graphic_window_g2_ParamLimits

0x8b6d,	// (0x00037953) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003ea74) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003ea74) popup_snote2_single_graphic_window_g

0x8b95,	// (0x0003797b) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b95,	// (0x0003797b) popup_snote2_single_graphic_window_t1

0x8be1,	// (0x000379c7) popup_snote2_single_graphic_window_t2_ParamLimits

0x8be1,	// (0x000379c7) popup_snote2_single_graphic_window_t2

0x8aa3,	// (0x00037889) popup_snote2_single_graphic_window_t3_ParamLimits

0x8aa3,	// (0x00037889) popup_snote2_single_graphic_window_t3

0x8ae4,	// (0x000378ca) popup_snote2_single_graphic_window_t4_ParamLimits

0x8ae4,	// (0x000378ca) popup_snote2_single_graphic_window_t4

0x8b1a,	// (0x00037900) popup_snote2_single_graphic_window_t5_ParamLimits

0x8b1a,	// (0x00037900) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003ea79) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003ea79) popup_snote2_single_graphic_window_t

0x7620,	// (0x00036406) clock_nsta_pane_cp2_t1

0x7620,	// (0x00036406) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003e88d) clock_nsta_pane_cp2_t

0x0b70,	// (0x0002f956) form_field_data_wide_pane_g1_ParamLimits

0x4082,	// (0x00032e68) form_field_data_wide_pane_g2_ParamLimits

0x4082,	// (0x00032e68) form_field_data_wide_pane_g2

0x408e,	// (0x00032e74) form_field_data_wide_pane_g3_ParamLimits

0x408e,	// (0x00032e74) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003e461) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003e461) form_field_data_wide_pane_g

0xe0dd,	// (0x0003cec3) grid_touch_3_pane_ParamLimits

0xe0dd,	// (0x0003cec3) grid_touch_3_pane

0xe5d1,	// (0x0003d3b7) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0003d3b7) cell_touch_3_pane

0x7b6e,	// (0x00036954) cell_touch_3_pane_g1

0x7b6e,	// (0x00036954) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003e912) cell_touch_3_pane_g

0x3b44,	// (0x0003292a) cont_query_data_pane

0x3b4c,	// (0x00032932) cont_query_data_pane_cp1

0x8c5b,	// (0x00037a41) button_value_adjust_pane_cp7

0x8c63,	// (0x00037a49) query_popup_pane_cp3

0x47e8,	// (0x000335ce) bg_popup_sub_pane_cp22_ParamLimits

0x0f34,	// (0x0002fd1a) navi_navi_volume_pane_cp2

0x0f4f,	// (0x0002fd35) popup_side_volume_key_window_g2

0x0f5e,	// (0x0002fd44) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003e4f7) popup_side_volume_key_window_g

0x0f7b,	// (0x0002fd61) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003e4fe) popup_side_volume_key_window_t

0x4a9f,	// (0x00033885) popup_side_volume_key_window_ParamLimits

0xbaf6,	// (0x0003a8dc) list_double_graphic_pane_g4_ParamLimits

0xbaf6,	// (0x0003a8dc) list_double_graphic_pane_g4

0xdf3e,	// (0x0003cd24) list_single_2heading_msg_pane_ParamLimits

0xdf3e,	// (0x0003cd24) list_single_2heading_msg_pane

0xc98c,	// (0x0003b772) list_single_2heading_msg_pane_g1_ParamLimits

0xc98c,	// (0x0003b772) list_single_2heading_msg_pane_g1

0xc998,	// (0x0003b77e) list_single_2heading_msg_pane_g2_ParamLimits

0xc998,	// (0x0003b77e) list_single_2heading_msg_pane_g2

0xc9ab,	// (0x0003b791) list_single_2heading_msg_pane_g3_ParamLimits

0xc9ab,	// (0x0003b791) list_single_2heading_msg_pane_g3

0xc9b7,	// (0x0003b79d) list_single_2heading_msg_pane_g4_ParamLimits

0xc9b7,	// (0x0003b79d) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003ea84) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003ea84) list_single_2heading_msg_pane_g

0xc9cf,	// (0x0003b7b5) list_single_2heading_msg_pane_t1_ParamLimits

0xc9cf,	// (0x0003b7b5) list_single_2heading_msg_pane_t1

0xc9f7,	// (0x0003b7dd) list_single_2heading_msg_pane_t2_ParamLimits

0xc9f7,	// (0x0003b7dd) list_single_2heading_msg_pane_t2

0xca62,	// (0x0003b848) list_single_2heading_msg_pane_t3_ParamLimits

0xca62,	// (0x0003b848) list_single_2heading_msg_pane_t3

0x3665,	// (0x0003244b) list_single_2heading_msg_pane_t4_ParamLimits

0x3665,	// (0x0003244b) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003ea8d) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003ea8d) list_single_2heading_msg_pane_t

0x3759,	// (0x0003253f) title_pane_g4_ParamLimits

0x3759,	// (0x0003253f) title_pane_g4

0x0d43,	// (0x0002fb29) title_pane_stacon_g3_ParamLimits

0x0d43,	// (0x0002fb29) title_pane_stacon_g3

0x8789,	// (0x0003756f) list_single_2graphic_im_pane_g4_ParamLimits

0x8789,	// (0x0003756f) list_single_2graphic_im_pane_g4

0x664a,	// (0x00035430) popup_side_volume_key_window_cp

0x6e65,	// (0x00035c4b) main_idle_act2_pane_t1

0x18cc,	// (0x000306b2) toolbar_button_pane_g10

0xd422,	// (0x0003c208) popup_toolbar_window_cp1

0x7611,	// (0x000363f7) clock_nsta_pane_cp_t1

0x7611,	// (0x000363f7) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003e888) clock_nsta_pane_cp_t

0x0f34,	// (0x0002fd1a) navi_navi_volume_pane_cp2_ParamLimits

0x0f43,	// (0x0002fd29) popup_side_volume_key_window_g1_ParamLimits

0x0f4f,	// (0x0002fd35) popup_side_volume_key_window_g2_ParamLimits

0x0f5e,	// (0x0002fd44) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003e4f7) popup_side_volume_key_window_g_ParamLimits

0x1d34,	// (0x00030b1a) fep_hwr_aid_pane

0x1ddb,	// (0x00030bc1) bg_fep_hwr_top_pane_g4_ParamLimits

0x7bca,	// (0x000369b0) fep_hwr_top_pane_g1_ParamLimits

0x7bdc,	// (0x000369c2) fep_hwr_top_pane_g2_ParamLimits

0x1dfb,	// (0x00030be1) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003e8dd) fep_hwr_top_pane_g_ParamLimits

0x1e10,	// (0x00030bf6) fep_hwr_top_text_pane_ParamLimits

0x640d,	// (0x000351f3) aid_touch_tab_arrow_arrow_2

0x6416,	// (0x000351fc) aid_touch_tab_arrow_left_2

0x1d48,	// (0x00030b2e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d7f,	// (0x00030b65) fep_hwr_prediction_pane

0x7d3c,	// (0x00036b22) fep_vkb_prediction_pane

0xe3b7,	// (0x0003d19d) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0003d19d) fep_vkb_side_pane_g3

0x1f8b,	// (0x00030d71) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1ff7,	// (0x00030ddd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2004,	// (0x00030dea) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003e98c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2133,	// (0x00030f19) fep_hwr_prediction_pane_g1

0x213d,	// (0x00030f23) fep_hwr_prediction_pane_g2

0x2145,	// (0x00030f2b) fep_hwr_prediction_pane_g3

0x214d,	// (0x00030f33) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003ea96) fep_hwr_prediction_pane_g

0x8c88,	// (0x00037a6e) fep_vkb_prediction_pane_g1

0x8c92,	// (0x00037a78) fep_vkb_prediction_pane_g2

0x8c9a,	// (0x00037a80) fep_vkb_prediction_pane_g3

0x8ca2,	// (0x00037a88) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003ea9f) fep_vkb_prediction_pane_g

0x1bb4,	// (0x0003099a) slider_set_pane_g3

0x1bc8,	// (0x000309ae) slider_set_pane_g4

0x1be0,	// (0x000309c6) slider_set_pane_g5

0x1bb4,	// (0x0003099a) slider_set_pane_g6

0x1bf6,	// (0x000309dc) slider_set_pane_g7

0x6aaa,	// (0x00035890) slider_form_pane_g3

0x6ab3,	// (0x00035899) slider_form_pane_g4

0x6abb,	// (0x000358a1) slider_form_pane_g5

0x6aaa,	// (0x00035890) slider_form_pane_g6

0xdf10,	// (0x0003ccf6) slider_form_pane_g7

0x710f,	// (0x00035ef5) slider_set_pane_vc_g3

0x7118,	// (0x00035efe) slider_set_pane_vc_g4

0x7121,	// (0x00035f07) slider_set_pane_vc_g5

0x710f,	// (0x00035ef5) slider_set_pane_vc_g6

0x712a,	// (0x00035f10) slider_set_pane_vc_g7

0x72ea,	// (0x000360d0) slider_form_pane_vc_g1

0x72f3,	// (0x000360d9) slider_form_pane_vc_g2

0x72fc,	// (0x000360e2) slider_form_pane_vc_g3

0x72ea,	// (0x000360d0) slider_form_pane_vc_g4

0x7305,	// (0x000360eb) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003e85a) slider_form_pane_vc_g

0x02ef,	// (0x0002f0d5) main_idle_act3_pane

0x8caa,	// (0x00037a90) ai3_links_pane

0xe619,	// (0x0003d3ff) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0003d3ff) popup_ai3_data_window

0x3711,	// (0x000324f7) grid_ai3_links_pane

0xe633,	// (0x0003d419) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0003d419) cell_ai3_links_pane

0x8ce5,	// (0x00037acb) bg_popup_sub_pane_cp11

0x8cf2,	// (0x00037ad8) cell_ai3_links_pane_g1

0x3711,	// (0x000324f7) bg_popup_sub_pane_cp12

0x8d17,	// (0x00037afd) heading_ai3_data_pane

0x8d1f,	// (0x00037b05) list_ai3_gene_pane

0x8d2b,	// (0x00037b11) popup_ai3_data_window_g1

0x8d33,	// (0x00037b19) heading_ai3_data_pane_g1

0x8d3b,	// (0x00037b21) heading_ai3_data_pane_t1

0x8d49,	// (0x00037b2f) list_double_ai3_gene_pane_ParamLimits

0x8d49,	// (0x00037b2f) list_double_ai3_gene_pane

0x8d56,	// (0x00037b3c) list_single_ai3_gene_pane_ParamLimits

0x8d56,	// (0x00037b3c) list_single_ai3_gene_pane

0x7b33,	// (0x00036919) list_highlight_pane_cp7_ParamLimits

0x7b33,	// (0x00036919) list_highlight_pane_cp7

0x8d63,	// (0x00037b49) list_single_a13_gene_pane_t1_ParamLimits

0x8d63,	// (0x00037b49) list_single_a13_gene_pane_t1

0x8d7a,	// (0x00037b60) list_single_ai3_gene_pane_g1

0x8d83,	// (0x00037b69) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003eaa8) list_single_ai3_gene_pane_g

0x8d8b,	// (0x00037b71) list_double_ai3_gene_pane_g1_ParamLimits

0x8d8b,	// (0x00037b71) list_double_ai3_gene_pane_g1

0x8d97,	// (0x00037b7d) list_double_ai3_gene_pane_t1_ParamLimits

0x8d97,	// (0x00037b7d) list_double_ai3_gene_pane_t1

0x8db3,	// (0x00037b99) list_double_ai3_gene_pane_t2_ParamLimits

0x8db3,	// (0x00037b99) list_double_ai3_gene_pane_t2

0x8dc9,	// (0x00037baf) list_double_ai3_gene_pane_t3_ParamLimits

0x8dc9,	// (0x00037baf) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003eaad) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003eaad) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3596,	// (0x0003237c) aid_size_min_col_2

0xe603,	// (0x0003d3e9) aid_size_min_msg_ParamLimits

0xe603,	// (0x0003d3e9) aid_size_min_msg

0xe3cb,	// (0x0003d1b1) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0003d1b1) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003e90d) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003e90d) fep_vkb_top_text_pane_g

0x02ef,	// (0x0002f0d5) main_hc_apps_shell_pane

0x8de6,	// (0x00037bcc) grid_hc_apps_pane_ParamLimits

0x8de6,	// (0x00037bcc) grid_hc_apps_pane

0x8df5,	// (0x00037bdb) list_hc_apps_pane

0x8dfd,	// (0x00037be3) scroll_pane_cp37_ParamLimits

0x8dfd,	// (0x00037be3) scroll_pane_cp37

0xe64d,	// (0x0003d433) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0003d433) cell_hc_apps_pane

0xe70b,	// (0x0003d4f1) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0003d4f1) cell_hc_apps_pane_g1

0x8ee8,	// (0x00037cce) cell_hc_apps_pane_g2_ParamLimits

0x8ee8,	// (0x00037cce) cell_hc_apps_pane_g2

0x8f04,	// (0x00037cea) cell_hc_apps_pane_g3_ParamLimits

0x8f04,	// (0x00037cea) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003eab4) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003eab4) cell_hc_apps_pane_g

0xe738,	// (0x0003d51e) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0003d51e) cell_hc_apps_pane_t1

0x3a8e,	// (0x00032874) grid_highlight_pane_cp10_ParamLimits

0x3a8e,	// (0x00032874) grid_highlight_pane_cp10

0xe776,	// (0x0003d55c) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0003d55c) list_single_hc_apps_pane

0xe7a3,	// (0x0003d589) list_single_hc_apps_pane_g1

0xcad0,	// (0x0003b8b6) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003eabb) list_single_hc_apps_pane_g

0xcae9,	// (0x0003b8cf) list_single_hc_apps_pane_g2_copy1

0xcb05,	// (0x0003b8eb) list_single_hc_apps_pane_t1

0x3805,	// (0x000325eb) bg_set_opt_pane_cp_ParamLimits

0x0550,	// (0x0002f336) setting_slider_pane_t1_ParamLimits

0x0569,	// (0x0002f34f) setting_slider_pane_t2_ParamLimits

0x0583,	// (0x0002f369) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e344) setting_slider_pane_t_ParamLimits

0x059b,	// (0x0002f381) slider_set_pane_ParamLimits

0x11dd,	// (0x0002ffc3) control_pane_g5_ParamLimits

0x11dd,	// (0x0002ffc3) control_pane_g5

0x68f9,	// (0x000356df) slider_set_pane_g1_ParamLimits

0x1ba8,	// (0x0003098e) slider_set_pane_g2_ParamLimits

0x1bb4,	// (0x0003099a) slider_set_pane_g3_ParamLimits

0x1bc8,	// (0x000309ae) slider_set_pane_g4_ParamLimits

0x1be0,	// (0x000309c6) slider_set_pane_g5_ParamLimits

0x1bb4,	// (0x0003099a) slider_set_pane_g6_ParamLimits

0x1bf6,	// (0x000309dc) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003e745) slider_set_pane_g_ParamLimits

0x4b8b,	// (0x00033971) navi_icon_text_pane_ParamLimits

0xd7b7,	// (0x0003c59d) aid_fill_nsta_2_ParamLimits

0xd7ee,	// (0x0003c5d4) aid_touch_tab_arrow_left_ParamLimits

0xd804,	// (0x0003c5ea) aid_touch_tab_arrow_right_ParamLimits

0xd89f,	// (0x0003c685) clock_nsta_pane_ParamLimits

0x63ef,	// (0x000351d5) navi_icon_pane_g1_ParamLimits

0x63fb,	// (0x000351e1) navi_text_pane_t1_ParamLimits

0x771d,	// (0x00036503) navi_icon_text_pane_g1_ParamLimits

0x7729,	// (0x0003650f) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0003d589) list_single_hc_apps_pane_g1_ParamLimits

0xcad0,	// (0x0003b8b6) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003eabb) list_single_hc_apps_pane_g_ParamLimits

0xcae9,	// (0x0003b8cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcb05,	// (0x0003b8eb) list_single_hc_apps_pane_t1_ParamLimits

0xb8cb,	// (0x0003a6b1) popup_toolbar2_fixed_window_ParamLimits

0xb8cb,	// (0x0003a6b1) popup_toolbar2_fixed_window

0xc765,	// (0x0003b54b) popup_toolbar2_float_window

0x3711,	// (0x000324f7) bg_popup_sub_pane_cp27

0x8fdb,	// (0x00037dc1) grid_toolbar2_float_pane

0x3711,	// (0x000324f7) bg_popup_sub_pane_cp26

0x8fdb,	// (0x00037dc1) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0003d5a2) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0003d5a2) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0003d5bc) cell_toolbar2_fixed_pane_g1

0x8ffc,	// (0x00037de2) toolbar2_fixed_button_pane

0x5564,	// (0x0003434a) toolbar2_fixed_button_pane_g1

0x5574,	// (0x0003435a) toolbar2_fixed_button_pane_g2

0x556c,	// (0x00034352) toolbar2_fixed_button_pane_g3

0x5584,	// (0x0003436a) toolbar2_fixed_button_pane_g4

0x557c,	// (0x00034362) toolbar2_fixed_button_pane_g5

0x558c,	// (0x00034372) toolbar2_fixed_button_pane_g6

0x5594,	// (0x0003437a) toolbar2_fixed_button_pane_g7

0x55a4,	// (0x0003438a) toolbar2_fixed_button_pane_g8

0x559c,	// (0x00034382) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003e647) toolbar2_fixed_button_pane_g

0x9004,	// (0x00037dea) cell_toolbar2_float_pane_ParamLimits

0x9004,	// (0x00037dea) cell_toolbar2_float_pane

0x9015,	// (0x00037dfb) cell_toolbar2_float_pane_g1

0x8ffc,	// (0x00037de2) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0003d08b) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0003d08b) fep_vkb_accented_list_pane

0x1f6b,	// (0x00030d51) bg_popup_fep_shadow_pane_g9

0x4d0b,	// (0x00033af1) bg_popup_fep_shadow_pane_cp3

0x41c8,	// (0x00032fae) list_accented_list_pane

0x901e,	// (0x00037e04) list_single_accented_list_pane_ParamLimits

0x901e,	// (0x00037e04) list_single_accented_list_pane

0x4d0b,	// (0x00033af1) list_highlight_pane_cp10

0x902f,	// (0x00037e15) list_single_accented_list_pane_t1

0xc68f,	// (0x0003b475) popup_slider_window_ParamLimits

0xc68f,	// (0x0003b475) popup_slider_window

0x8c6b,	// (0x00037a51) aid_indentation_list_msg

0xe8cf,	// (0x0003d6b5) bg_popup_window_pane_cp19

0x9153,	// (0x00037f39) popup_slider_window_g1

0x916f,	// (0x00037f55) popup_slider_window_g2

0x918b,	// (0x00037f71) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003eac0) popup_slider_window_g

0x91e7,	// (0x00037fcd) popup_slider_window_t1

0x925b,	// (0x00038041) small_volume_slider_vertical_pane

0x7b6e,	// (0x00036954) small_volume_slider_vertical_pane_g1

0x7b6e,	// (0x00036954) small_volume_slider_vertical_pane_g2

0x9277,	// (0x0003805d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003ead2) small_volume_slider_vertical_pane_g

0xb839,	// (0x0003a61f) area_side_right_pane_ParamLimits

0xb839,	// (0x0003a61f) area_side_right_pane

0xcb33,	// (0x0003b919) aid_size_side_button_ParamLimits

0xcb33,	// (0x0003b919) aid_size_side_button

0xcb4c,	// (0x0003b932) grid_sctrl_middle_pane_ParamLimits

0xcb4c,	// (0x0003b932) grid_sctrl_middle_pane

0x2188,	// (0x00030f6e) sctrl_sk_bottom_pane

0x2199,	// (0x00030f7f) sctrl_sk_top_pane

0x21ab,	// (0x00030f91) aid_touch_sctrl_top

0x21b8,	// (0x00030f9e) bg_sctrl_sk_pane_ParamLimits

0x21b8,	// (0x00030f9e) bg_sctrl_sk_pane

0x21c6,	// (0x00030fac) sctrl_sk_top_pane_g1

0x21d3,	// (0x00030fb9) sctrl_sk_top_pane_t1

0x21ab,	// (0x00030f91) aid_touch_sctrl_bottom

0x21b8,	// (0x00030f9e) bg_sctrl_sk_pane_cp_ParamLimits

0x21b8,	// (0x00030f9e) bg_sctrl_sk_pane_cp

0x21ee,	// (0x00030fd4) sctrl_sk_bottom_pane_g1

0x21d3,	// (0x00030fb9) sctrl_sk_bottom_pane_t1

0xcb66,	// (0x0003b94c) cell_sctrl_middle_pane_ParamLimits

0xcb66,	// (0x0003b94c) cell_sctrl_middle_pane

0xcb77,	// (0x0003b95d) aid_touch_sctrl_middle_ParamLimits

0xcb77,	// (0x0003b95d) aid_touch_sctrl_middle

0xcb84,	// (0x0003b96a) bg_sctrl_middle_pane_ParamLimits

0xcb84,	// (0x0003b96a) bg_sctrl_middle_pane

0x285b,	// (0x00031641) cell_sctrl_middle_pane_g1_ParamLimits

0x285b,	// (0x00031641) cell_sctrl_middle_pane_g1

0xcb92,	// (0x0003b978) cell_sctrl_middle_pane_g2_ParamLimits

0xcb92,	// (0x0003b978) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003eade) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003eade) cell_sctrl_middle_pane_g

0x5564,	// (0x0003434a) bg_sctrl_middle_pane_g1

0x556c,	// (0x00034352) bg_sctrl_middle_pane_g2

0x5574,	// (0x0003435a) bg_sctrl_middle_pane_g3

0x557c,	// (0x00034362) bg_sctrl_middle_pane_g4

0x5584,	// (0x0003436a) bg_sctrl_middle_pane_g5

0x558c,	// (0x00034372) bg_sctrl_middle_pane_g6

0x5594,	// (0x0003437a) bg_sctrl_middle_pane_g7

0x559c,	// (0x00034382) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003eae3) bg_sctrl_middle_pane_g

0x55a4,	// (0x0003438a) bg_sctrl_middle_pane_g8_copy1

0x5564,	// (0x0003434a) bg_sctrl_sk_pane_g1

0x5574,	// (0x0003435a) bg_sctrl_sk_pane_g2

0x556c,	// (0x00034352) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003e647) bg_sctrl_sk_pane_g

0x3fa3,	// (0x00032d89) aid_size_touch_scroll_bar

0x5584,	// (0x0003436a) bg_sctrl_sk_pane_g4

0x557c,	// (0x00034362) bg_sctrl_sk_pane_g5

0x558c,	// (0x00034372) bg_sctrl_sk_pane_g6

0x5594,	// (0x0003437a) bg_sctrl_sk_pane_g7

0x55a4,	// (0x0003438a) bg_sctrl_sk_pane_g8

0x559c,	// (0x00034382) bg_sctrl_sk_pane_g9

0x1389,	// (0x0003016f) popup_fep_china_hwr2_fs_candidate_window

0xc1a9,	// (0x0003af8f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1a9,	// (0x0003af8f) popup_fep_china_hwr2_fs_control_window

0x1f8b,	// (0x00030d71) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003ead9) sctrl_sk_top_pane_g

0xe987,	// (0x0003d76d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0003d76d) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0003d781) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0003d781) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0003d798) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0003d798) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0003d7aa) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0003d7aa) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0003d7be) popup_fep_china_hwr2_fs_control_funtion_grid

0x92d3,	// (0x000380b9) aid_fep_china_hwr2_fs_candi_cell

0x3711,	// (0x000324f7) bg_popup_fep_shadow_pane_cp6

0x92dd,	// (0x000380c3) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0003d7c6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0003d7c6) cell_fep_china_hwr2_fs_funtion_grid

0x7b6e,	// (0x00036954) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x92ff,	// (0x000380e5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x92ff,	// (0x000380e5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x930d,	// (0x000380f3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x930d,	// (0x000380f3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003eaf4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003eaf4) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0003d7de) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0003d7de) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0003d7f3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0003d7f3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003eaf9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003eaf9) cell_fep_china_hwr2_fs_funtion_grid_t

0x9354,	// (0x0003813a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x935c,	// (0x00038142) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9364,	// (0x0003814a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003eafe) popup_fep_china_hwr2_fs_control_bar_grid_g

0x936c,	// (0x00038152) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x936c,	// (0x00038152) cell_fep_china_hwr2_fs_candidate_grid

0x9385,	// (0x0003816b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x938d,	// (0x00038173) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7b6e,	// (0x00036954) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7b6e,	// (0x00036954) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003e912) cell_fep_china_hwr2_fs_candidate_grid_g

0x9395,	// (0x0003817b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x515a,	// (0x00033f40) clock_nsta_pane_cp_24_ParamLimits

0x515a,	// (0x00033f40) clock_nsta_pane_cp_24

0x51d8,	// (0x00033fbe) indicator_nsta_pane_cp_24_ParamLimits

0x51d8,	// (0x00033fbe) indicator_nsta_pane_cp_24

0x626b,	// (0x00035051) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003e6ac) heading_pane_g

0x6cae,	// (0x00035a94) grid_sct_catagory_button_pane

0x6cde,	// (0x00035ac4) scroll_pane_cp5_ParamLimits

0x776b,	// (0x00036551) button_value_adjust_pane_cp5_ParamLimits

0x776b,	// (0x00036551) button_value_adjust_pane_cp5

0x784a,	// (0x00036630) form2_midp_time_pane_ParamLimits

0x93a3,	// (0x00038189) cell_sct_catagory_button_pane_ParamLimits

0x93a3,	// (0x00038189) cell_sct_catagory_button_pane

0x7b33,	// (0x00036919) bg_button_pane_cp01_ParamLimits

0x7b33,	// (0x00036919) bg_button_pane_cp01

0x7b6e,	// (0x00036954) cell_sct_catagory_button_pane_g1

0xc708,	// (0x0003b4ee) popup_tb_extension_window

0xea29,	// (0x0003d80f) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0003d80f) aid_size_cell_ext

0x3de5,	// (0x00032bcb) bg_tb_trans_pane_cp1_ParamLimits

0x3de5,	// (0x00032bcb) bg_tb_trans_pane_cp1

0xea4f,	// (0x0003d835) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0003d835) grid_tb_ext_pane

0xea8a,	// (0x0003d870) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0003d870) cell_tb_ext_pane

0xeab2,	// (0x0003d898) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0003d898) cell_tb_ext_pane_g1

0x9437,	// (0x0003821d) cell_tb_ext_pane_t1

0x3a8e,	// (0x00032874) list_highlight_pane_cp11_ParamLimits

0x3a8e,	// (0x00032874) list_highlight_pane_cp11

0xb8e0,	// (0x0003a6c6) popup_uni_indicator_window_ParamLimits

0xb8e0,	// (0x0003a6c6) popup_uni_indicator_window

0x4074,	// (0x00032e5a) bg_popup_sub_pane_cp14

0x9452,	// (0x00038238) list_uniindi_pane

0x945e,	// (0x00038244) uniindi_top_pane

0x3a8e,	// (0x00032874) bg_uniindi_top_pane

0x947d,	// (0x00038263) uniindi_top_pane_g1

0x9493,	// (0x00038279) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003eb05) uniindi_top_pane_g

0x94bd,	// (0x000382a3) uniindi_top_pane_t1

0x94e7,	// (0x000382cd) list_single_uniindi_pane_ParamLimits

0x94e7,	// (0x000382cd) list_single_uniindi_pane

0x7b6e,	// (0x00036954) bg_uniindi_top_pane_g1

0x94fa,	// (0x000382e0) list_single_uniindi_pane_g1

0x950d,	// (0x000382f3) list_single_uniindi_pane_t1

0x02ef,	// (0x0002f0d5) control_bg_pane

0x9532,	// (0x00038318) bg_sctrl_sk_pane_cp1

0x953b,	// (0x00038321) bg_sctrl_sk_pane_cp2

0x9544,	// (0x0003832a) control_bg_pane_g1

0x954d,	// (0x00038333) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003eb0e) control_bg_pane_g

0x75c6,	// (0x000363ac) cell_indicator_nsta_pane_g1_ParamLimits

0xe10a,	// (0x0003cef0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003e876) cell_indicator_nsta_pane_g_ParamLimits

0x3347,	// (0x0003212d) form2_midp_time_pane_t1_ParamLimits

0x1d26,	// (0x00030b0c) main_idle_act4_pane_ParamLimits

0x1d26,	// (0x00030b0c) main_idle_act4_pane

0xc708,	// (0x0003b4ee) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0003d857) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0003d857) tb_ext_find_pane

0x9556,	// (0x0003833c) ai_gene_pane_1_cp1

0x4e52,	// (0x00033c38) ai_gene_pane_2_cp1

0x955e,	// (0x00038344) list_single_idle_plugin_calendar_pane

0x9567,	// (0x0003834d) list_single_idle_plugin_notification_pane

0x9570,	// (0x00038356) list_single_idle_plugin_player_pane

0xeacf,	// (0x0003d8b5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0003d8b5) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0003d8dd) main_idle_act4_pane_t1

0xeb0d,	// (0x0003d8f3) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003eb13) main_idle_act4_pane_t

0xeb23,	// (0x0003d909) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0003d909) middle_sk_idle_act4_pane

0xeb3f,	// (0x0003d925) popup_clock_digital_analogue_window_cp2

0xeb74,	// (0x0003d95a) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb74,	// (0x0003d95a) shortcut_wheel_idle_act4_pane

0x7b6e,	// (0x00036954) shortcut_wheel_idle_act4_pane_g1

0x7b6e,	// (0x00036954) shortcut_wheel_idle_act4_pane_g2

0x7b6e,	// (0x00036954) shortcut_wheel_idle_act4_pane_g3

0x7b6e,	// (0x00036954) shortcut_wheel_idle_act4_pane_g4

0x7b6e,	// (0x00036954) shortcut_wheel_idle_act4_pane_g5

0x9603,	// (0x000383e9) shortcut_wheel_idle_act4_pane_g6

0x960b,	// (0x000383f1) shortcut_wheel_idle_act4_pane_g7

0x9613,	// (0x000383f9) shortcut_wheel_idle_act4_pane_g8

0x961b,	// (0x00038401) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003eb18) shortcut_wheel_idle_act4_pane_g

0xe27d,	// (0x0003d063) middle_sk_idle_act4_pane_g1_ParamLimits

0xe27d,	// (0x0003d063) middle_sk_idle_act4_pane_g1

0xebf1,	// (0x0003d9d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xebf1,	// (0x0003d9d7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003eb3b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003eb3b) middle_sk_idle_act4_pane_g

0xec09,	// (0x0003d9ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xec09,	// (0x0003d9ef) middle_sk_idle_act4_pane_t1

0xec38,	// (0x0003da1e) grid_ai_shortcut_pane_ParamLimits

0xec38,	// (0x0003da1e) grid_ai_shortcut_pane

0xec55,	// (0x0003da3b) list_highlight_pane_cp16_ParamLimits

0xec55,	// (0x0003da3b) list_highlight_pane_cp16

0xec62,	// (0x0003da48) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec62,	// (0x0003da48) list_single_idle_plugin_shortcut_pane_g1

0xec6e,	// (0x0003da54) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec6e,	// (0x0003da54) list_single_idle_plugin_shortcut_pane_g2

0xec8a,	// (0x0003da70) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec8a,	// (0x0003da70) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003eb40) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003eb40) list_single_idle_plugin_shortcut_pane_g

0xec9f,	// (0x0003da85) cell_ai_shortcut_pane_ParamLimits

0xec9f,	// (0x0003da85) cell_ai_shortcut_pane

0xecb5,	// (0x0003da9b) cell_ai_shortcut_pane_g1_ParamLimits

0xecb5,	// (0x0003da9b) cell_ai_shortcut_pane_g1

0x9556,	// (0x0003833c) ai_gene_pane_1_cp2

0x974b,	// (0x00038531) ai_gene_pane_2_cp2

0x9753,	// (0x00038539) list_highlight_pane_cp15

0x975c,	// (0x00038542) list_single_idle_plugin_calendar_pane_g1

0x9753,	// (0x00038539) list_highlight_pane_cp17

0x9764,	// (0x0003854a) list_single_idle_plugin_calendar_pane_g1_copy1

0x976c,	// (0x00038552) list_single_idle_plugin_player_pane_g1

0x6f07,	// (0x00035ced) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003eb47) list_single_idle_plugin_player_pane_g

0x9774,	// (0x0003855a) list_single_idle_plugin_player_pane_t1

0x9782,	// (0x00038568) list_single_idle_plugin_player_pane_t2

0x9790,	// (0x00038576) list_single_idle_plugin_player_pane_t3

0x979e,	// (0x00038584) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003eb4c) list_single_idle_plugin_player_pane_t

0x97ac,	// (0x00038592) wait_bar_pane_cp15

0x97b4,	// (0x0003859a) grid_ai_notification_pane

0x6f07,	// (0x00035ced) list_single_idle_plugin_notification_pane_g1

0xecd7,	// (0x0003dabd) cell_ai_notification_pane_ParamLimits

0xecd7,	// (0x0003dabd) cell_ai_notification_pane

0x97ca,	// (0x000385b0) cell_ai_notification_pane_g1

0x97d2,	// (0x000385b8) cell_ai_notification_pane_t1

0xece4,	// (0x0003daca) tb_ext_find_button_pane

0xecec,	// (0x0003dad2) tb_ext_find_pane_g1

0xecf4,	// (0x0003dada) tb_ext_find_pane_t1

0x46f8,	// (0x000334de) tb_ext_find_button_pane_g1

0x97fe,	// (0x000385e4) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003eb55) tb_ext_find_button_pane_g

0xeaf7,	// (0x0003d8dd) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0003d8f3) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003eb13) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0003d925) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb64,	// (0x0003d94a) sat_plugin_idle_act4_pane_ParamLimits

0xeb64,	// (0x0003d94a) sat_plugin_idle_act4_pane

0xed02,	// (0x0003dae8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed02,	// (0x0003dae8) sat_plugin_idle_act4_pane_t1

0xed1a,	// (0x0003db00) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed1a,	// (0x0003db00) sat_plugin_idle_act4_pane_t2

0xed32,	// (0x0003db18) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed32,	// (0x0003db18) sat_plugin_idle_act4_pane_t3

0xed4a,	// (0x0003db30) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed4a,	// (0x0003db30) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003eb5a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003eb5a) sat_plugin_idle_act4_pane_t

0x03b4,	// (0x0002f19a) popup_battery_window_ParamLimits

0x03b4,	// (0x0002f19a) popup_battery_window

0x3a8e,	// (0x00032874) bg_popup_sub_pane_cp25_ParamLimits

0x3a8e,	// (0x00032874) bg_popup_sub_pane_cp25

0x9853,	// (0x00038639) popup_battery_window_g1_ParamLimits

0x9853,	// (0x00038639) popup_battery_window_g1

0x985f,	// (0x00038645) popup_battery_window_t1_ParamLimits

0x985f,	// (0x00038645) popup_battery_window_t1

0x9871,	// (0x00038657) popup_battery_window_t2_ParamLimits

0x9871,	// (0x00038657) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003eb63) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003eb63) popup_battery_window_t

0xd61a,	// (0x0003c400) midp_canvas_pane_ParamLimits

0xd677,	// (0x0003c45d) midp_keypad_pane_ParamLimits

0xd677,	// (0x0003c45d) midp_keypad_pane

0x505a,	// (0x00033e40) main_midp_pane_ParamLimits

0x762f,	// (0x00036415) signal_pane_g2_cp_ParamLimits

0xed62,	// (0x0003db48) aid_size_cell_midp_keypad_ParamLimits

0xed62,	// (0x0003db48) aid_size_cell_midp_keypad

0xed80,	// (0x0003db66) midp_keyp_game_grid_pane_ParamLimits

0xed80,	// (0x0003db66) midp_keyp_game_grid_pane

0xeda7,	// (0x0003db8d) midp_keyp_rocker_pane_ParamLimits

0xeda7,	// (0x0003db8d) midp_keyp_rocker_pane

0xedf8,	// (0x0003dbde) midp_keyp_sk_left_pane_ParamLimits

0xedf8,	// (0x0003dbde) midp_keyp_sk_left_pane

0xee4c,	// (0x0003dc32) midp_keyp_sk_right_pane_ParamLimits

0xee4c,	// (0x0003dc32) midp_keyp_sk_right_pane

0x3711,	// (0x000324f7) bg_button_pane_cp03

0xeea0,	// (0x0003dc86) midp_keyp_sk_left_pane_g1

0x3711,	// (0x000324f7) bg_button_pane_cp04

0xeea0,	// (0x0003dc86) midp_keyp_sk_right_pane_g1

0x7b6e,	// (0x00036954) midp_keyp_rocker_pane_g1

0xeea9,	// (0x0003dc8f) keyp_game_cell_pane_ParamLimits

0xeea9,	// (0x0003dc8f) keyp_game_cell_pane

0x3711,	// (0x000324f7) bg_button_pane_cp02

0xeecd,	// (0x0003dcb3) keyp_game_cell_pane_g1

0xb87b,	// (0x0003a661) popup_fep_vkb2_window_ParamLimits

0xb87b,	// (0x0003a661) popup_fep_vkb2_window

0xcb9e,	// (0x0003b984) aid_size_cell_vkb2_ParamLimits

0xcb9e,	// (0x0003b984) aid_size_cell_vkb2

0xcbd4,	// (0x0003b9ba) popup_fep_vkb2_window_g1_ParamLimits

0xcbd4,	// (0x0003b9ba) popup_fep_vkb2_window_g1

0xcc24,	// (0x0003ba0a) vkb2_area_bottom_pane_ParamLimits

0xcc24,	// (0x0003ba0a) vkb2_area_bottom_pane

0xcc78,	// (0x0003ba5e) vkb2_area_keypad_pane_ParamLimits

0xcc78,	// (0x0003ba5e) vkb2_area_keypad_pane

0xccc0,	// (0x0003baa6) vkb2_area_top_pane_ParamLimits

0xccc0,	// (0x0003baa6) vkb2_area_top_pane

0xcd46,	// (0x0003bb2c) vkb2_top_entry_pane_ParamLimits

0xcd46,	// (0x0003bb2c) vkb2_top_entry_pane

0xcd73,	// (0x0003bb59) vkb2_top_grid_left_pane_ParamLimits

0xcd73,	// (0x0003bb59) vkb2_top_grid_left_pane

0xcd93,	// (0x0003bb79) vkb2_top_grid_right_pane_ParamLimits

0xcd93,	// (0x0003bb79) vkb2_top_grid_right_pane

0x245a,	// (0x00031240) vkb2_cell_keypad_pane_ParamLimits

0x245a,	// (0x00031240) vkb2_cell_keypad_pane

0xcdd9,	// (0x0003bbbf) vkb2_area_bottom_grid_pane_ParamLimits

0xcdd9,	// (0x0003bbbf) vkb2_area_bottom_grid_pane

0xce03,	// (0x0003bbe9) vkb2_area_bottom_pane_g1_ParamLimits

0xce03,	// (0x0003bbe9) vkb2_area_bottom_pane_g1

0xce29,	// (0x0003bc0f) vkb2_area_bottom_pane_g2_ParamLimits

0xce29,	// (0x0003bc0f) vkb2_area_bottom_pane_g2

0xce5a,	// (0x0003bc40) vkb2_area_bottom_pane_g3_ParamLimits

0xce5a,	// (0x0003bc40) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003eb68) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003eb68) vkb2_area_bottom_pane_g

0x2604,	// (0x000313ea) vkb2_top_cell_left_pane_ParamLimits

0x2604,	// (0x000313ea) vkb2_top_cell_left_pane

0xeed6,	// (0x0003dcbc) vkb2_top_entry_pane_g1_ParamLimits

0xeed6,	// (0x0003dcbc) vkb2_top_entry_pane_g1

0xeee4,	// (0x0003dcca) vkb2_top_entry_pane_t1_ParamLimits

0xeee4,	// (0x0003dcca) vkb2_top_entry_pane_t1

0x9a22,	// (0x00038808) vkb2_top_entry_pane_t2_ParamLimits

0x9a22,	// (0x00038808) vkb2_top_entry_pane_t2

0x9a54,	// (0x0003883a) vkb2_top_entry_pane_t3_ParamLimits

0x9a54,	// (0x0003883a) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003eb6f) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003eb6f) vkb2_top_entry_pane_t

0xcec4,	// (0x0003bcaa) vkb2_top_grid_right_pane_g1_ParamLimits

0xcec4,	// (0x0003bcaa) vkb2_top_grid_right_pane_g1

0x2667,	// (0x0003144d) vkb2_top_grid_right_pane_g2_ParamLimits

0x2667,	// (0x0003144d) vkb2_top_grid_right_pane_g2

0x267f,	// (0x00031465) vkb2_top_grid_right_pane_g3_ParamLimits

0x267f,	// (0x00031465) vkb2_top_grid_right_pane_g3

0xceda,	// (0x0003bcc0) vkb2_top_grid_right_pane_g4_ParamLimits

0xceda,	// (0x0003bcc0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003eb76) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003eb76) vkb2_top_grid_right_pane_g

0x26ad,	// (0x00031493) vkb2_top_cell_left_pane_g1

0x26c4,	// (0x000314aa) vkb2_cell_keypad_pane_g1_ParamLimits

0x26c4,	// (0x000314aa) vkb2_cell_keypad_pane_g1

0x9a78,	// (0x0003885e) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a78,	// (0x0003885e) vkb2_cell_keypad_pane_t1

0x26d2,	// (0x000314b8) vkb2_cell_bottom_grid_pane_ParamLimits

0x26d2,	// (0x000314b8) vkb2_cell_bottom_grid_pane

0x270b,	// (0x000314f1) vkb2_cell_bottom_grid_pane_g1

0xeb95,	// (0x0003d97b) aid_call2_pane_cp02

0xeb9d,	// (0x0003d983) aid_call_pane_cp02

0xeba5,	// (0x0003d98b) clock_digital_number_pane_cp10

0xebad,	// (0x0003d993) clock_digital_number_pane_cp11

0xebb5,	// (0x0003d99b) clock_digital_number_pane_cp12

0xebbd,	// (0x0003d9a3) clock_digital_number_pane_cp13

0xebc5,	// (0x0003d9ab) clock_digital_separator_pane_cp10

0x46f8,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g1

0x46f8,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g2

0xebcd,	// (0x0003d9b3) popup_clock_digital_analogue_window_cp2_g3

0x46f8,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g4

0xebcd,	// (0x0003d9b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003eb2b) popup_clock_digital_analogue_window_cp2_g

0xebd5,	// (0x0003d9bb) popup_clock_digital_analogue_window_cp2_t1

0xebe3,	// (0x0003d9c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003eb36) popup_clock_digital_analogue_window_cp2_t

0x7b6e,	// (0x00036954) clock_digital_number_pane_cp10_g1

0x7b6e,	// (0x00036954) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003e912) clock_digital_number_pane_cp10_g

0x7b6e,	// (0x00036954) clock_digital_separator_pane_cp10_g1

0x7b6e,	// (0x00036954) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003e912) clock_digital_separator_pane_cp10_g

0x949f,	// (0x00038285) uniindi_top_pane_g3

0x94b0,	// (0x00038296) uniindi_top_pane_g4

0x24e5,	// (0x000312cb) vkb2_row_keypad_pane_ParamLimits

0x24e5,	// (0x000312cb) vkb2_row_keypad_pane

0x2727,	// (0x0003150d) vkb2_cell_t_keypad_pane_ParamLimits

0x2727,	// (0x0003150d) vkb2_cell_t_keypad_pane

0x2737,	// (0x0003151d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2737,	// (0x0003151d) vkb2_cell_t_keypad_pane_cp08

0x274a,	// (0x00031530) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x274a,	// (0x00031530) vkb2_cell_t_keypad_pane_cp09

0x275e,	// (0x00031544) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x275e,	// (0x00031544) vkb2_cell_t_keypad_pane_cp01

0x276f,	// (0x00031555) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x276f,	// (0x00031555) vkb2_cell_t_keypad_pane_cp02

0x2780,	// (0x00031566) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2780,	// (0x00031566) vkb2_cell_t_keypad_pane_cp03

0x2791,	// (0x00031577) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2791,	// (0x00031577) vkb2_cell_t_keypad_pane_cp04

0x27a2,	// (0x00031588) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27a2,	// (0x00031588) vkb2_cell_t_keypad_pane_cp05

0x27b3,	// (0x00031599) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x27b3,	// (0x00031599) vkb2_cell_t_keypad_pane_cp06

0x27c4,	// (0x000315aa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27c4,	// (0x000315aa) vkb2_cell_t_keypad_pane_cp07

0x27d5,	// (0x000315bb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27d5,	// (0x000315bb) vkb2_cell_t_keypad_pane_cp10

0x1f8b,	// (0x00030d71) vkb2_cell_t_keypad_pane_g1

0x9a8f,	// (0x00038875) vkb2_cell_t_keypad_pane_t1

0x02ef,	// (0x0002f0d5) popup_grid_graphic2_window

0xef1d,	// (0x0003dd03) aid_size_cell_graphic2_ParamLimits

0xef1d,	// (0x0003dd03) aid_size_cell_graphic2

0xef5b,	// (0x0003dd41) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0003dd41) bg_popup_window_pane_cp21

0xef69,	// (0x0003dd4f) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0003dd4f) graphic2_pages_pane

0xefbf,	// (0x0003dda5) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0003dda5) grid_graphic2_control_pane

0xf007,	// (0x0003dded) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0003dded) grid_graphic2_pane

0xf08e,	// (0x0003de74) cell_graphic2_pane

0x02ef,	// (0x0002f0d5) main_comp_mode_pane

0x8d1f,	// (0x00037b05) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0003d6b5) bg_popup_window_pane_cp19_ParamLimits

0x90f5,	// (0x00037edb) bg_touch_area_indi_pane_ParamLimits

0x90f5,	// (0x00037edb) bg_touch_area_indi_pane

0x910b,	// (0x00037ef1) bg_touch_area_indi_pane_cp01_ParamLimits

0x910b,	// (0x00037ef1) bg_touch_area_indi_pane_cp01

0x9121,	// (0x00037f07) bg_touch_area_indi_pane_cp02_ParamLimits

0x9121,	// (0x00037f07) bg_touch_area_indi_pane_cp02

0x9139,	// (0x00037f1f) bg_touch_area_indi_pane_cp03_ParamLimits

0x9139,	// (0x00037f1f) bg_touch_area_indi_pane_cp03

0x9153,	// (0x00037f39) popup_slider_window_g1_ParamLimits

0x916f,	// (0x00037f55) popup_slider_window_g2_ParamLimits

0x918b,	// (0x00037f71) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003eac0) popup_slider_window_g_ParamLimits

0x91e7,	// (0x00037fcd) popup_slider_window_t1_ParamLimits

0x925b,	// (0x00038041) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0003de74) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0003decf) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0003decf) bg_button_pane_cp10

0xf0fc,	// (0x0003dee2) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0003dee2) bg_button_pane_cp11

0xf10f,	// (0x0003def5) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0003def5) graphic2_pages_pane_g1

0xf12a,	// (0x0003df10) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0003df10) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003eb84) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003eb84) graphic2_pages_pane_g

0xf142,	// (0x0003df28) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0003df28) graphic2_pages_pane_t1

0xf15a,	// (0x0003df40) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0003df40) cell_graphic2_control_pane

0xf18c,	// (0x0003df72) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0003df72) cell_graphic2_pane_g1

0xe28b,	// (0x0003d071) cell_graphic2_pane_g2_ParamLimits

0xe28b,	// (0x0003d071) cell_graphic2_pane_g2

0xeb57,	// (0x0003d93d) cell_graphic2_pane_g3_ParamLimits

0xeb57,	// (0x0003d93d) cell_graphic2_pane_g3

0xe298,	// (0x0003d07e) cell_graphic2_pane_g4_ParamLimits

0xe298,	// (0x0003d07e) cell_graphic2_pane_g4

0xf199,	// (0x0003df7f) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0003df7f) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003eb89) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003eb89) cell_graphic2_pane_g

0xf1b9,	// (0x0003df9f) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0003df9f) cell_graphic2_pane_t1

0x625f,	// (0x00035045) grid_highlight_pane_cp11_ParamLimits

0x625f,	// (0x00035045) grid_highlight_pane_cp11

0x3a8e,	// (0x00032874) bg_button_pane_cp05

0xf202,	// (0x0003dfe8) cell_graphic2_control_pane_g1

0x7b6e,	// (0x00036954) bg_touch_area_indi_pane_g1

0x9d8c,	// (0x00038b72) aid_cmod_rocker_key_size

0x9d96,	// (0x00038b7c) aid_cmode_itu_key_size

0x9da0,	// (0x00038b86) main_cmode_video_pane

0x9daa,	// (0x00038b90) main_comp_mode_itu_pane

0x9db6,	// (0x00038b9c) main_comp_mode_rocker_pane

0x9dc2,	// (0x00038ba8) cell_cmode_rocker_pane_ParamLimits

0x9dc2,	// (0x00038ba8) cell_cmode_rocker_pane

0x9dd4,	// (0x00038bba) cell_cmode_itu_pane_ParamLimits

0x9dd4,	// (0x00038bba) cell_cmode_itu_pane

0x4074,	// (0x00032e5a) bg_button_pane_cp06_ParamLimits

0x4074,	// (0x00032e5a) bg_button_pane_cp06

0x7dec,	// (0x00036bd2) cell_cmode_rocker_pane_g1_ParamLimits

0x7dec,	// (0x00036bd2) cell_cmode_rocker_pane_g1

0x92ff,	// (0x000380e5) cell_cmode_rocker_pane_g2_ParamLimits

0x92ff,	// (0x000380e5) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003eb99) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003eb99) cell_cmode_rocker_pane_g

0x3711,	// (0x000324f7) bg_button_pane_cp07

0x9de9,	// (0x00038bcf) cell_cmode_itu_pane_g1

0x9df2,	// (0x00038bd8) cell_cmode_itu_pane_t1

0x9e00,	// (0x00038be6) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003eb9e) cell_cmode_itu_pane_t

0x9522,	// (0x00038308) aid_touch_ctrl_left

0x952a,	// (0x00038310) aid_touch_ctrl_right

0x3711,	// (0x000324f7) compa_mode_pane

0xf226,	// (0x0003e00c) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0003e016) aid_cmode_itu_key_size_cp

0x9e22,	// (0x00038c08) compa_mode_pane_g1

0x9e2a,	// (0x00038c10) compa_mode_pane_g2

0x9e32,	// (0x00038c18) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003eba3) compa_mode_pane_g

0xf23a,	// (0x0003e020) main_comp_mode_itu_pane_cp

0xf242,	// (0x0003e028) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0003e030) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0003e030) cell_cmode_itu_pane_cp

0xf25f,	// (0x0003e045) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0003e045) cell_cmode_rocker_pane_cp

0x4074,	// (0x00032e5a) bg_button_pane_cp06_cp_ParamLimits

0x4074,	// (0x00032e5a) bg_button_pane_cp06_cp

0x7dec,	// (0x00036bd2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7dec,	// (0x00036bd2) cell_cmode_rocker_pane_g1_cp

0x7b6e,	// (0x00036954) cell_cmode_rocker_pane_g2_cp

0x3711,	// (0x000324f7) bg_button_pane_cp07_cp

0xf271,	// (0x0003e057) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0003e060) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0003e060) cell_cmode_itu_pane_t2_cp

0xdf06,	// (0x0003ccec) settings_code_pane_cp2

0x3805,	// (0x000325eb) bg_popup_window_pane_cp3_ParamLimits

0x3c68,	// (0x00032a4e) heading_pane_cp3_ParamLimits

0x3c74,	// (0x00032a5a) listscroll_popup_graphic_pane_ParamLimits

0x1d34,	// (0x00030b1a) fep_hwr_aid_pane_ParamLimits

0x21ab,	// (0x00030f91) aid_touch_sctrl_top_ParamLimits

0x21c6,	// (0x00030fac) sctrl_sk_top_pane_g1_ParamLimits

0x1f8b,	// (0x00030d71) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003ead9) sctrl_sk_top_pane_g_ParamLimits

0x21d3,	// (0x00030fb9) sctrl_sk_top_pane_t1_ParamLimits

0x21ab,	// (0x00030f91) aid_touch_sctrl_bottom_ParamLimits

0x21d3,	// (0x00030fb9) sctrl_sk_bottom_pane_t1_ParamLimits

0x946b,	// (0x00038251) aid_area_touch_clock

0xcd08,	// (0x0003baee) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd08,	// (0x0003baee) aid_vkb2_area_top_pane_cell

0xcdb3,	// (0x0003bb99) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcdb3,	// (0x0003bb99) aid_vkb2_area_bottom_pane_cell

0x99da,	// (0x000387c0) popup_char_count_window

0x9e7f,	// (0x00038c65) popup_char_count_window_g1

0x9e88,	// (0x00038c6e) popup_char_count_window_g2

0x9e91,	// (0x00038c77) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003ebaa) popup_char_count_window_g

0x9e9a,	// (0x00038c80) popup_char_count_window_t1

0x2282,	// (0x00031068) popup_fep_char_preview_window_ParamLimits

0x2282,	// (0x00031068) popup_fep_char_preview_window

0xcd28,	// (0x0003bb0e) vkb2_top_candi_pane_ParamLimits

0xcd28,	// (0x0003bb0e) vkb2_top_candi_pane

0xf288,	// (0x0003e06e) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0003e06e) cell_vkb2_top_candi_pane

0x27ea,	// (0x000315d0) bg_popup_fep_char_preview_window_ParamLimits

0x27ea,	// (0x000315d0) bg_popup_fep_char_preview_window

0x27f8,	// (0x000315de) popup_fep_char_preview_window_t1_ParamLimits

0x27f8,	// (0x000315de) popup_fep_char_preview_window_t1

0x9ef5,	// (0x00038cdb) bg_popup_fep_char_preview_window_g1

0x9efd,	// (0x00038ce3) bg_popup_fep_char_preview_window_g2

0x9f05,	// (0x00038ceb) bg_popup_fep_char_preview_window_g3

0x9f0d,	// (0x00038cf3) bg_popup_fep_char_preview_window_g4

0x9f15,	// (0x00038cfb) bg_popup_fep_char_preview_window_g5

0x2832,	// (0x00031618) bg_popup_fep_char_preview_window_g6

0x9f1d,	// (0x00038d03) bg_popup_fep_char_preview_window_g7

0x9f25,	// (0x00038d0b) bg_popup_fep_char_preview_window_g8

0x9f2d,	// (0x00038d13) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003ebb1) bg_popup_fep_char_preview_window_g

0x1f8b,	// (0x00030d71) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f8b,	// (0x00030d71) cell_vkb2_top_candi_pane_g1

0x1f99,	// (0x00030d7f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f99,	// (0x00030d7f) cell_vkb2_top_candi_pane_g2

0x9c9f,	// (0x00038a85) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9c9f,	// (0x00038a85) cell_vkb2_top_candi_pane_g3

0x283a,	// (0x00031620) cell_vkb2_top_candi_pane_g4_ParamLimits

0x283a,	// (0x00031620) cell_vkb2_top_candi_pane_g4

0x82b7,	// (0x0003709d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x82b7,	// (0x0003709d) cell_vkb2_top_candi_pane_g5

0x285b,	// (0x00031641) cell_vkb2_top_candi_pane_g6_ParamLimits

0x285b,	// (0x00031641) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003ebc4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003ebc4) cell_vkb2_top_candi_pane_g

0x2869,	// (0x0003164f) cell_vkb2_top_candi_pane_t1

0x1b94,	// (0x0003097a) aid_size_touch_slider_mark_ParamLimits

0x1b94,	// (0x0003097a) aid_size_touch_slider_mark

0xefa5,	// (0x0003dd8b) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0003dd8b) grid_graphic2_catg_pane

0xf061,	// (0x0003de47) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0003de47) popup_grid_graphic2_window_t1

0xf077,	// (0x0003de5d) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0003de5d) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003eb7f) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003eb7f) popup_grid_graphic2_window_t

0x3a8e,	// (0x00032874) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0003dfe8) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0003e0d4) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0003e0d4) cell_graphic2_catg_pane

0x3711,	// (0x000324f7) bg_button_pane_cp12

0xf300,	// (0x0003e0e6) cell_graphic2_catg_pane_g1

0x9437,	// (0x0003821d) cell_tb_ext_pane_t1_ParamLimits

0x2624,	// (0x0003140a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2624,	// (0x0003140a) vkb2_top_cell_right_narrow_pane

0x263c,	// (0x00031422) vkb2_top_cell_right_wide_pane_ParamLimits

0x263c,	// (0x00031422) vkb2_top_cell_right_wide_pane

0x1d26,	// (0x00030b0c) bg_vkb2_func_pane_ParamLimits

0x1d26,	// (0x00030b0c) bg_vkb2_func_pane

0x26ad,	// (0x00031493) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp03

0x270b,	// (0x000314f1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x556c,	// (0x00034352) bg_vkb2_func_pane_g1

0x5574,	// (0x0003435a) bg_vkb2_func_pane_g2

0x5584,	// (0x0003436a) bg_vkb2_func_pane_g3

0x557c,	// (0x00034362) bg_vkb2_func_pane_g4

0x558c,	// (0x00034372) bg_vkb2_func_pane_g5

0x5594,	// (0x0003437a) bg_vkb2_func_pane_g6

0x559c,	// (0x00034382) bg_vkb2_func_pane_g7

0x55a4,	// (0x0003438a) bg_vkb2_func_pane_g8

0x5564,	// (0x0003434a) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003ebd1) bg_vkb2_func_pane_g

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp01

0x26ad,	// (0x00031493) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26ad,	// (0x00031493) vkb2_top_cell_right_wide_pane_g1

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d26,	// (0x00030b0c) bg_vkb2_fuc_pane_cp02

0x270b,	// (0x000314f1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x270b,	// (0x000314f1) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0003d5f5) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0003d5f5) aid_touch_area_decrease

0xe843,	// (0x0003d629) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0003d629) aid_touch_area_increase

0xe86b,	// (0x0003d651) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0003d651) aid_touch_area_mute

0xe89b,	// (0x0003d681) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0003d681) aid_touch_area_slider

0xe8db,	// (0x0003d6c1) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0003d6c1) popup_slider_window_g4

0xe903,	// (0x0003d6e9) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0003d6e9) popup_slider_window_g5

0xe937,	// (0x0003d71d) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0003d71d) popup_slider_window_g6

0x9215,	// (0x00037ffb) popup_slider_window_t2_ParamLimits

0x9215,	// (0x00037ffb) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003eacd) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003eacd) popup_slider_window_t

0xe953,	// (0x0003d739) slider_pane_ParamLimits

0xe953,	// (0x0003d739) slider_pane

0x9f50,	// (0x00038d36) slider_pane_g1_ParamLimits

0x9f50,	// (0x00038d36) slider_pane_g1

0x9f64,	// (0x00038d4a) slider_pane_g2_ParamLimits

0x9f64,	// (0x00038d4a) slider_pane_g2

0x9f7a,	// (0x00038d60) slider_pane_g3_ParamLimits

0x9f7a,	// (0x00038d60) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003ebe4) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003ebe4) slider_pane_g

0xc750,	// (0x0003b536) popup_tb_float_extension_window_ParamLimits

0xc750,	// (0x0003b536) popup_tb_float_extension_window

0x9fa6,	// (0x00038d8c) aid_size_cell_tb_float_ext

0x3711,	// (0x000324f7) bg_popup_sub_window_cp28

0x9fb2,	// (0x00038d98) grid_tb_float_ext_pane

0x9fbc,	// (0x00038da2) cell_tb_float_ext_pane_ParamLimits

0x9fbc,	// (0x00038da2) cell_tb_float_ext_pane

0x9fd6,	// (0x00038dbc) cell_tb_float_ext_pane_g1

0x9fdf,	// (0x00038dc5) grid_highlight_pane_cp12

0xc928,	// (0x0003b70e) cell_last_hwr_side_pane_ParamLimits

0xc928,	// (0x0003b70e) cell_last_hwr_side_pane

0x7b6e,	// (0x00036954) cell_last_hwr_side_pane_g1

0x9fe8,	// (0x00038dce) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003ebed) cell_last_hwr_side_pane_g

0xce8f,	// (0x0003bc75) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce8f,	// (0x0003bc75) vkb2_area_bottom_space_btn_pane

0x1f8b,	// (0x00030d71) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a8f,	// (0x00038875) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2869,	// (0x0003164f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2888,	// (0x0003166e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2888,	// (0x0003166e) vkb2_area_bottom_space_btn_pane_g1

0x28c2,	// (0x000316a8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28c2,	// (0x000316a8) vkb2_area_bottom_space_btn_pane_g2

0x28f8,	// (0x000316de) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28f8,	// (0x000316de) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003ebf2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003ebf2) vkb2_area_bottom_space_btn_pane_g

0x1de9,	// (0x00030bcf) cel_fep_hwr_func_pane_ParamLimits

0x1de9,	// (0x00030bcf) cel_fep_hwr_func_pane

0xc8fd,	// (0x0003b6e3) cell_hwr_side_button_pane_ParamLimits

0xc8fd,	// (0x0003b6e3) cell_hwr_side_button_pane

0x946b,	// (0x00038251) aid_area_touch_clock_ParamLimits

0x3a8e,	// (0x00032874) bg_uniindi_top_pane_ParamLimits

0x947d,	// (0x00038263) uniindi_top_pane_g1_ParamLimits

0x9493,	// (0x00038279) uniindi_top_pane_g2_ParamLimits

0x949f,	// (0x00038285) uniindi_top_pane_g3_ParamLimits

0x94b0,	// (0x00038296) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003eb05) uniindi_top_pane_g_ParamLimits

0x94bd,	// (0x000382a3) uniindi_top_pane_t1_ParamLimits

0x3a8e,	// (0x00032874) bg_vkb2_func_pane_cp01_ParamLimits

0x3a8e,	// (0x00032874) bg_vkb2_func_pane_cp01

0x9ff1,	// (0x00038dd7) cel_fep_hwr_func_pane_g1_ParamLimits

0x9ff1,	// (0x00038dd7) cel_fep_hwr_func_pane_g1

0x3a8e,	// (0x00032874) bg_vkb2_func_pane_cp02_ParamLimits

0x3a8e,	// (0x00032874) bg_vkb2_func_pane_cp02

0x9ff1,	// (0x00038dd7) cell_hwr_side_button_pane_g1_ParamLimits

0x9ff1,	// (0x00038dd7) cell_hwr_side_button_pane_g1

0x53e5,	// (0x000341cb) status_pane_g4_ParamLimits

0x53e5,	// (0x000341cb) status_pane_g4

0x53ff,	// (0x000341e5) status_pane_t1

0x78b3,	// (0x00036699) form2_midp_gauge_slider_cont_pane

0x78bb,	// (0x000366a1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1d5,	// (0x0003cfbb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1e7,	// (0x0003cfcd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003e8c5) form2_midp_gauge_slider_pane_t_ParamLimits

0x78f1,	// (0x000366d7) form2_midp_slider_pane_ParamLimits

0x2242,	// (0x00031028) aid_size_cell_func_vkb2_ParamLimits

0x2242,	// (0x00031028) aid_size_cell_func_vkb2

0x9f92,	// (0x00038d78) slider_pane_g4_ParamLimits

0x9f92,	// (0x00038d78) slider_pane_g4

0xcef0,	// (0x0003bcd6) form2_midp_gauge_slider_pane_t2_cp01

0xcefe,	// (0x0003bce4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcefe,	// (0x0003bce4) form2_midp_gauge_slider_pane_t3_cp01

0x296d,	// (0x00031753) form2_midp_slider_pane_cp01

0x3711,	// (0x000324f7) navi_smil_pane

0xa02a,	// (0x00038e10) navi_smil_pane_g1

0xa032,	// (0x00038e18) navi_smil_pane_t1

0x9fff,	// (0x00038de5) form2_midp_slider_pane_g1

0xa008,	// (0x00038dee) form2_midp_slider_pane_g2

0xa010,	// (0x00038df6) form2_midp_slider_pane_g3

0x9fff,	// (0x00038de5) form2_midp_slider_pane_g4

0xf309,	// (0x0003e0ef) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003ebfb) form2_midp_slider_pane_g

0x2932,	// (0x00031718) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2932,	// (0x00031718) vkb2_area_bottom_space_btn_pane_g4

0xd8ea,	// (0x0003c6d0) lc0_navi_pane_ParamLimits

0xd8ea,	// (0x0003c6d0) lc0_navi_pane

0xd954,	// (0x0003c73a) lc0_stat_indi_pane_ParamLimits

0xd954,	// (0x0003c73a) lc0_stat_indi_pane

0xd969,	// (0x0003c74f) ls0_title_pane_ParamLimits

0xd969,	// (0x0003c74f) ls0_title_pane

0x4074,	// (0x00032e5a) bg_popup_sub_pane_cp14_ParamLimits

0x9452,	// (0x00038238) list_uniindi_pane_ParamLimits

0x945e,	// (0x00038244) uniindi_top_pane_ParamLimits

0x94fa,	// (0x000382e0) list_single_uniindi_pane_g1_ParamLimits

0x950d,	// (0x000382f3) list_single_uniindi_pane_t1_ParamLimits

0xcf1b,	// (0x0003bd01) lc0_stat_clock_pane_ParamLimits

0xcf1b,	// (0x0003bd01) lc0_stat_clock_pane

0xf314,	// (0x0003e0fa) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0003e0fa) lc0_stat_indi_pane_g1

0xf321,	// (0x0003e107) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0003e107) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003ec06) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003ec06) lc0_stat_indi_pane_g

0xcf28,	// (0x0003bd0e) lc0_uni_indicator_pane_ParamLimits

0xcf28,	// (0x0003bd0e) lc0_uni_indicator_pane

0xf32e,	// (0x0003e114) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0003e114) ls0_title_pane_g1

0xf342,	// (0x0003e128) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0003e128) ls0_title_pane_t1

0xcf35,	// (0x0003bd1b) lc0_uni_indicator_pane_g1_ParamLimits

0xcf35,	// (0x0003bd1b) lc0_uni_indicator_pane_g1

0xa0a4,	// (0x00038e8a) lc0_stat_clock_pane_t1

0x02ef,	// (0x0002f0d5) main_ai5_pane

0xa0b2,	// (0x00038e98) ai5_sk_pane_ParamLimits

0xa0b2,	// (0x00038e98) ai5_sk_pane

0xf370,	// (0x0003e156) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0003e156) cell_ai5_widget_pane

0xa171,	// (0x00038f57) aid_size_cell_widget_grid

0xa187,	// (0x00038f6d) bg_ai5_widget_pane_ParamLimits

0xa187,	// (0x00038f6d) bg_ai5_widget_pane

0xa1fb,	// (0x00038fe1) cell_ai5_widget_pane_g2

0xa20b,	// (0x00038ff1) cell_ai5_widget_pane_g3

0xa222,	// (0x00039008) cell_ai5_widget_pane_g4

0xa22e,	// (0x00039014) cell_ai5_widget_pane_g5

0xa23a,	// (0x00039020) cell_ai5_widget_pane_g6

0xa246,	// (0x0003902c) cell_ai5_widget_pane_g7

0xa28e,	// (0x00039074) cell_ai5_widget_pane_t1_ParamLimits

0xa28e,	// (0x00039074) cell_ai5_widget_pane_t1

0xa2ab,	// (0x00039091) cell_ai5_widget_pane_t2_ParamLimits

0xa2ab,	// (0x00039091) cell_ai5_widget_pane_t2

0xa2c3,	// (0x000390a9) cell_ai5_widget_pane_t3_ParamLimits

0xa2c3,	// (0x000390a9) cell_ai5_widget_pane_t3

0xa2db,	// (0x000390c1) cell_ai5_widget_pane_t4_ParamLimits

0xa2db,	// (0x000390c1) cell_ai5_widget_pane_t4

0xa2f8,	// (0x000390de) cell_ai5_widget_pane_t5_ParamLimits

0xa2f8,	// (0x000390de) cell_ai5_widget_pane_t5

0xa317,	// (0x000390fd) cell_ai5_widget_pane_t6_ParamLimits

0xa317,	// (0x000390fd) cell_ai5_widget_pane_t6

0xa329,	// (0x0003910f) cell_ai5_widget_pane_t7_ParamLimits

0xa329,	// (0x0003910f) cell_ai5_widget_pane_t7

0xa342,	// (0x00039128) cell_ai5_widget_pane_t8_ParamLimits

0xa342,	// (0x00039128) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003ec20) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003ec20) cell_ai5_widget_pane_t

0xa396,	// (0x0003917c) grid_ai5_widget_pane

0x4074,	// (0x00032e5a) highlight_cell_ai5_widget_pane_ParamLimits

0x4074,	// (0x00032e5a) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0003e1bc) ai5_sk_left_pane

0xf3e0,	// (0x0003e1c6) ai5_sk_middle_pane

0xf3ea,	// (0x0003e1d0) ai5_sk_right_pane

0xa3cb,	// (0x000391b1) bg_ai5_widget_pane_g1_ParamLimits

0xa3cb,	// (0x000391b1) bg_ai5_widget_pane_g1

0xa3d7,	// (0x000391bd) bg_ai5_widget_pane_g2_ParamLimits

0xa3d7,	// (0x000391bd) bg_ai5_widget_pane_g2

0xa3e3,	// (0x000391c9) bg_ai5_widget_pane_g3_ParamLimits

0xa3e3,	// (0x000391c9) bg_ai5_widget_pane_g3

0xa3ef,	// (0x000391d5) bg_ai5_widget_pane_g4_ParamLimits

0xa3ef,	// (0x000391d5) bg_ai5_widget_pane_g4

0xa3fb,	// (0x000391e1) bg_ai5_widget_pane_g5_ParamLimits

0xa3fb,	// (0x000391e1) bg_ai5_widget_pane_g5

0xa407,	// (0x000391ed) bg_ai5_widget_pane_g6_ParamLimits

0xa407,	// (0x000391ed) bg_ai5_widget_pane_g6

0xa413,	// (0x000391f9) bg_ai5_widget_pane_g7_ParamLimits

0xa413,	// (0x000391f9) bg_ai5_widget_pane_g7

0xa41f,	// (0x00039205) bg_ai5_widget_pane_g8_ParamLimits

0xa41f,	// (0x00039205) bg_ai5_widget_pane_g8

0xa42b,	// (0x00039211) bg_ai5_widget_pane_g9_ParamLimits

0xa42b,	// (0x00039211) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003ec35) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003ec35) bg_ai5_widget_pane_g

0xa45d,	// (0x00039243) cell_shortcut_ai5_widget_pane_ParamLimits

0xa45d,	// (0x00039243) cell_shortcut_ai5_widget_pane

0x4d0b,	// (0x00033af1) bg_cell_shortcut_ai5_widget_pane

0xa46e,	// (0x00039254) cell_grid_ai5_widget_pane_g1

0x4d0b,	// (0x00033af1) highlight_cell_shortcut_ai5_widget_pane

0x556c,	// (0x00034352) ai5_sk_left_pane_g1

0xa477,	// (0x0003925d) ai5_sk_left_pane_g2

0xa47f,	// (0x00039265) ai5_sk_left_pane_g3

0xa487,	// (0x0003926d) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003ec48) ai5_sk_left_pane_g

0xa48f,	// (0x00039275) ai5_sk_left_pane_t1

0x5574,	// (0x0003435a) ai5_sk_right_pane_g1

0xa49d,	// (0x00039283) ai5_sk_right_pane_g2

0xa4a5,	// (0x0003928b) ai5_sk_right_pane_g3

0xa4ad,	// (0x00039293) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003ec51) ai5_sk_right_pane_g

0xa4b5,	// (0x0003929b) ai5_sk_right_pane_t1

0x5574,	// (0x0003435a) ai5_sk_middle_pane_g1

0x556c,	// (0x00034352) ai5_sk_middle_pane_g2

0x558c,	// (0x00034372) ai5_sk_middle_pane_g3

0xa4a5,	// (0x0003928b) ai5_sk_middle_pane_g4

0xa47f,	// (0x00039265) ai5_sk_middle_pane_g5

0xa4c3,	// (0x000392a9) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0003e1da) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003ec5a) ai5_sk_middle_pane_g

0xd7d6,	// (0x0003c5bc) aid_touch_area_size_lc0_ParamLimits

0xd7d6,	// (0x0003c5bc) aid_touch_area_size_lc0

0x1fba,	// (0x00030da0) cell_hwr_candidate_pane_t1_ParamLimits

0x50bc,	// (0x00033ea2) aid_touch_navi_pane

0xda62,	// (0x0003c848) status_dt_navi_pane_ParamLimits

0xda62,	// (0x0003c848) status_dt_navi_pane

0xda7a,	// (0x0003c860) status_dt_sta_pane_ParamLimits

0xda7a,	// (0x0003c860) status_dt_sta_pane

0xf3fc,	// (0x0003e1e2) dt_sta_controll_pane

0xf409,	// (0x0003e1ef) dt_sta_indi_pane

0xf416,	// (0x0003e1fc) dt_sta_title_pane

0x3a8e,	// (0x00032874) bg_dt_sta_indi_pane_ParamLimits

0x3a8e,	// (0x00032874) bg_dt_sta_indi_pane

0xf428,	// (0x0003e20e) dt_sta_battery_pane

0xf430,	// (0x0003e216) dt_sta_indi_pane_g1

0xa515,	// (0x000392fb) dt_sta_indi_pane_g2

0xa51e,	// (0x00039304) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003ec69) dt_sta_indi_pane_g

0xa527,	// (0x0003930d) dt_sta_signal_pane

0x4074,	// (0x00032e5a) bg_dt_sta_title_pane_ParamLimits

0x4074,	// (0x00032e5a) bg_dt_sta_title_pane

0xa530,	// (0x00039316) dt_sta_title_pane_g1

0xa538,	// (0x0003931e) dt_sta_title_pane_t1_ParamLimits

0xa538,	// (0x0003931e) dt_sta_title_pane_t1

0x3711,	// (0x000324f7) bg_dt_sta_control_pane

0xf439,	// (0x0003e21f) dt_sta_controll_pane_g1

0xa556,	// (0x0003933c) bg_dt_sta_title_pane_g1

0xa55f,	// (0x00039345) bg_dt_sta_title_pane_g2

0xa568,	// (0x0003934e) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003ec70) bg_dt_sta_title_pane_g

0x7b6e,	// (0x00036954) bg_dt_sta_indi_pane_g1

0xa571,	// (0x00039357) dt_sta_signal_pane_g1

0xa579,	// (0x0003935f) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003ec77) dt_sta_signal_pane_g

0xa581,	// (0x00039367) dt_sta_battery_pane_g1

0xa58a,	// (0x00039370) dt_sta_battery_pane_t1

0x7b6e,	// (0x00036954) bg_dt_sta_control_pane_g1

0x480a,	// (0x000335f0) fep_china_uni_eep_pane

0x4812,	// (0x000335f8) fep_china_uni_entry_pane_ParamLimits

0x4822,	// (0x00033608) popup_fep_china_uni_window_g1_ParamLimits

0x4832,	// (0x00033618) popup_fep_china_uni_window_g2_ParamLimits

0x4832,	// (0x00033618) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003e503) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003e503) popup_fep_china_uni_window_g

0xa599,	// (0x0003937f) fep_china_uni_eep_pane_g1

0xa5a1,	// (0x00039387) fep_china_uni_eep_pane_t1

0xa021,	// (0x00038e07) aid_touch_area_size_smil_player

0x520c,	// (0x00033ff2) lc0_clock_pane

0x53f3,	// (0x000341d9) status_pane_g5_ParamLimits

0x53f3,	// (0x000341d9) status_pane_g5

0xc2d2,	// (0x0003b0b8) popup_keymap_window

0x53b1,	// (0x00034197) status_icon_pane

0xa20b,	// (0x00038ff1) cell_ai5_widget_pane_g3_ParamLimits

0xa222,	// (0x00039008) cell_ai5_widget_pane_g4_ParamLimits

0xa22e,	// (0x00039014) cell_ai5_widget_pane_g5_ParamLimits

0xa252,	// (0x00039038) cell_ai5_widget_pane_g8_ParamLimits

0xa252,	// (0x00039038) cell_ai5_widget_pane_g8

0xa266,	// (0x0003904c) cell_ai5_widget_pane_g9_ParamLimits

0xa266,	// (0x0003904c) cell_ai5_widget_pane_g9

0xa27a,	// (0x00039060) cell_ai5_widget_pane_g10_ParamLimits

0xa27a,	// (0x00039060) cell_ai5_widget_pane_g10

0xa5b0,	// (0x00039396) status_icon_pane_g1

0x3711,	// (0x000324f7) bg_popup_sub_pane_cp13

0xa5b8,	// (0x0003939e) popup_keymap_window_t1

0xd764,	// (0x0003c54a) control_pane_g6_ParamLimits

0xd764,	// (0x0003c54a) control_pane_g6

0xd771,	// (0x0003c557) control_pane_g7_ParamLimits

0xd771,	// (0x0003c557) control_pane_g7

0xd77e,	// (0x0003c564) control_pane_g8_ParamLimits

0xd77e,	// (0x0003c564) control_pane_g8

0xf3fc,	// (0x0003e1e2) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0003e1ef) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0003e1fc) dt_sta_title_pane_ParamLimits

0x3fac,	// (0x00032d92) aid_size_touch_scroll_bar_cale

0x03c8,	// (0x0002f1ae) popup_discreet_window_ParamLimits

0x03c8,	// (0x0002f1ae) popup_discreet_window

0xb8c1,	// (0x0003a6a7) popup_sk_window

0x5bdf,	// (0x000349c5) bg_popup_sub_pane_cp28_ParamLimits

0x5bdf,	// (0x000349c5) bg_popup_sub_pane_cp28

0xa5c6,	// (0x000393ac) popup_discreet_window_g1_ParamLimits

0xa5c6,	// (0x000393ac) popup_discreet_window_g1

0xa5e6,	// (0x000393cc) popup_discreet_window_t1_ParamLimits

0xa5e6,	// (0x000393cc) popup_discreet_window_t1

0xa604,	// (0x000393ea) popup_discreet_window_t2_ParamLimits

0xa604,	// (0x000393ea) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003ec7c) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003ec7c) popup_discreet_window_t

0x29a4,	// (0x0003178a) popup_sk_window_g1

0x29ae,	// (0x00031794) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003ec83) popup_sk_window_g

0x29b6,	// (0x0003179c) popup_sk_window_t1

0x29c4,	// (0x000317aa) popup_sk_window_t1_copy1

0xa1fb,	// (0x00038fe1) cell_ai5_widget_pane_g2_ParamLimits

0xa354,	// (0x0003913a) cell_ai5_widget_pane_t9_ParamLimits

0xa354,	// (0x0003913a) cell_ai5_widget_pane_t9

0x3711,	// (0x000324f7) main_fep_fshwr2_pane

0xcf5c,	// (0x0003bd42) aid_fshwr2_btn_pane

0xcf6d,	// (0x0003bd53) aid_fshwr2_syb_pane

0xcf7e,	// (0x0003bd64) aid_fshwr2_txt_pane

0xcf8a,	// (0x0003bd70) fshwr2_func_candi_pane

0xcfa9,	// (0x0003bd8f) fshwr2_hwr_syb_pane

0xcfc4,	// (0x0003bdaa) fshwr2_icf_pane

0x02ef,	// (0x0002f0d5) fshwr2_icf_bg_pane

0x2a44,	// (0x0003182a) fshwr2_icf_pane_t1_ParamLimits

0x2a44,	// (0x0003182a) fshwr2_icf_pane_t1

0x46f8,	// (0x000334de) fshwr2_func_candi_pane_g1

0xf442,	// (0x0003e228) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0003e228) fshwr2_func_candi_row_pane

0xcff0,	// (0x0003bdd6) cell_fshwr2_syb_pane_ParamLimits

0xcff0,	// (0x0003bdd6) cell_fshwr2_syb_pane

0x1f8b,	// (0x00030d71) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f8b,	// (0x00030d71) fshwr2_hwr_syb_pane_g1

0x02ef,	// (0x0002f0d5) bg_popup_call_pane_cp01

0xd006,	// (0x0003bdec) fshwr2_func_candi_cell_pane_ParamLimits

0xd006,	// (0x0003bdec) fshwr2_func_candi_cell_pane

0xf465,	// (0x0003e24b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0003e24b) fshwr2_func_candi_cell_bg_pane

0xd051,	// (0x0003be37) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd051,	// (0x0003be37) fshwr2_func_candi_cell_pane_g1

0xd088,	// (0x0003be6e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd088,	// (0x0003be6e) fshwr2_func_candi_cell_pane_t1

0x02ef,	// (0x0002f0d5) bg_button_pane_cp08

0xa672,	// (0x00039458) cell_fshwr2_syb_bg_pane

0xd0a3,	// (0x0003be89) cell_fshwr2_syb_bg_pane_g1

0xd0ab,	// (0x0003be91) cell_fshwr2_syb_bg_pane_t1

0x4074,	// (0x00032e5a) main_tmo_pane

0xdd38,	// (0x0003cb1e) uni_indicator_pane_g1_ParamLimits

0xdd4e,	// (0x0003cb34) uni_indicator_pane_g2_ParamLimits

0xdd64,	// (0x0003cb4a) uni_indicator_pane_g3_ParamLimits

0x6739,	// (0x0003551f) uni_indicator_pane_g4_ParamLimits

0x6739,	// (0x0003551f) uni_indicator_pane_g4

0x674d,	// (0x00035533) uni_indicator_pane_g5_ParamLimits

0x674d,	// (0x00035533) uni_indicator_pane_g5

0x674d,	// (0x00035533) uni_indicator_pane_g6_ParamLimits

0x674d,	// (0x00035533) uni_indicator_pane_g6

0xf91c,	// (0x0003e702) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0003d5d1) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0003d5d1) popup_tmo_note_window

0x2224,	// (0x0003100a) fshwr2_bg_pane

0xd079,	// (0x0003be5f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd079,	// (0x0003be5f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003ec88) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003ec88) fshwr2_func_candi_cell_pane_g

0x1f73,	// (0x00030d59) bg_popup_window_pane_cp01

0x2b0f,	// (0x000318f5) bg_popup_window_pane_g1_cp01

0xa67a,	// (0x00039460) bg_popup_window_pane_cp22_ParamLimits

0xa67a,	// (0x00039460) bg_popup_window_pane_cp22

0xa688,	// (0x0003946e) listscroll_tmo_link_pane_ParamLimits

0xa688,	// (0x0003946e) listscroll_tmo_link_pane

0xa6c8,	// (0x000394ae) popup_tmo_note_window_g1_ParamLimits

0xa6c8,	// (0x000394ae) popup_tmo_note_window_g1

0xa6d5,	// (0x000394bb) tmo_note_info_pane_ParamLimits

0xa6d5,	// (0x000394bb) tmo_note_info_pane

0xf471,	// (0x0003e257) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0003e257) list_tmo_note_info_pane_g1

0xa706,	// (0x000394ec) list_tmo_note_info_pane_g2_ParamLimits

0xa706,	// (0x000394ec) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003ec8d) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003ec8d) list_tmo_note_info_pane_g

0xa722,	// (0x00039508) list_tmo_note_info_text_pane_ParamLimits

0xa722,	// (0x00039508) list_tmo_note_info_text_pane

0xa7a3,	// (0x00039589) list_tmo_link_pane

0xa7b0,	// (0x00039596) scroll_pane_cp20

0xa7bd,	// (0x000395a3) list_single_tmo_link_pane_ParamLimits

0xa7bd,	// (0x000395a3) list_single_tmo_link_pane

0xa7cd,	// (0x000395b3) list_single_tmo_link_pane_t1

0xa7db,	// (0x000395c1) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7db,	// (0x000395c1) list_tmo_note_info_text_pane_t1

0xd42c,	// (0x0003c212) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd42c,	// (0x0003c212) aid_size_touch_scroll_bar_cp01

0xbe2c,	// (0x0003ac12) aid_size_touch_slider_marker

0xb8b1,	// (0x0003a697) popup_settings_window_ParamLimits

0xb8b1,	// (0x0003a697) popup_settings_window

0x2d85,	// (0x00031b6b) popup_candi_list_indi_window

0x50bc,	// (0x00033ea2) aid_touch_navi_pane_ParamLimits

0x217f,	// (0x00030f65) rs_clock_indi_pane

0x2188,	// (0x00030f6e) sctrl_sk_bottom_pane_ParamLimits

0x2199,	// (0x00030f7f) sctrl_sk_top_pane_ParamLimits

0x229c,	// (0x00031082) popup_fep_tooltip_window

0xa171,	// (0x00038f57) aid_size_cell_widget_grid_ParamLimits

0xa1e6,	// (0x00038fcc) cell_ai5_widget_pane_g1_ParamLimits

0xa1e6,	// (0x00038fcc) cell_ai5_widget_pane_g1

0xa23a,	// (0x00039020) cell_ai5_widget_pane_g6_ParamLimits

0xa246,	// (0x0003902c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003ec0b) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003ec0b) cell_ai5_widget_pane_g

0xa378,	// (0x0003915e) cell_ai5_widget_pane_t10_ParamLimits

0xa378,	// (0x0003915e) cell_ai5_widget_pane_t10

0xa396,	// (0x0003917c) grid_ai5_widget_pane_ParamLimits

0xa437,	// (0x0003921d) cell_contacts_ai5_widget_pane_ParamLimits

0xa437,	// (0x0003921d) cell_contacts_ai5_widget_pane

0xa619,	// (0x000393ff) popup_discreet_window_t3_ParamLimits

0xa619,	// (0x000393ff) popup_discreet_window_t3

0xcfdc,	// (0x0003bdc2) popup_fshwr2_char_preview_window_ParamLimits

0xcfdc,	// (0x0003bdc2) popup_fshwr2_char_preview_window

0xf488,	// (0x0003e26e) tmo_note_info_pane_t1

0xf49d,	// (0x0003e283) tmo_note_info_pane_t2

0xf4b4,	// (0x0003e29a) tmo_note_info_pane_t3

0xa77f,	// (0x00039565) tmo_note_info_pane_t4

0xa791,	// (0x00039577) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003ec92) tmo_note_info_pane_t

0xa7a3,	// (0x00039589) list_tmo_link_pane_ParamLimits

0xa7b0,	// (0x00039596) scroll_pane_cp20_ParamLimits

0x02ef,	// (0x0002f0d5) bg_popup_fep_char_preview_window_cp01

0xa7f4,	// (0x000395da) popup_fshwr2_char_preview_window_t1

0xa802,	// (0x000395e8) popup_candi_list_indi_window_g1

0xa80b,	// (0x000395f1) bg_cell_contacts_ai5_widget_pane

0xa817,	// (0x000395fd) cell_contacts_ai5_widget_pane_g1

0x820c,	// (0x00036ff2) cell_contacts_ai5_widget_pane_g2

0xa82c,	// (0x00039612) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003ec9d) cell_contacts_ai5_widget_pane_g

0xa838,	// (0x0003961e) cell_contacts_ai5_widget_pane_t1

0x4074,	// (0x00032e5a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8af,	// (0x00039695) settings_container_pane

0x4d0b,	// (0x00033af1) listscroll_set_pane_copy1

0x7273,	// (0x00036059) scroll_pane_cp121_copy1

0x5990,	// (0x00034776) set_content_pane_copy1

0xa8bb,	// (0x000396a1) aid_height_set_list_copy1_ParamLimits

0xa8bb,	// (0x000396a1) aid_height_set_list_copy1

0x6945,	// (0x0003572b) aid_size_parent_copy1_ParamLimits

0x6945,	// (0x0003572b) aid_size_parent_copy1

0xa8c7,	// (0x000396ad) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8c7,	// (0x000396ad) button_value_adjust_pane_cp6_copy1

0x505a,	// (0x00033e40) list_highlight_pane_cp2_copy1_ParamLimits

0x505a,	// (0x00033e40) list_highlight_pane_cp2_copy1

0xa8db,	// (0x000396c1) list_set_pane_copy1_ParamLimits

0xa8db,	// (0x000396c1) list_set_pane_copy1

0xa84a,	// (0x00039630) main_pane_set_t1_copy1_ParamLimits

0xa84a,	// (0x00039630) main_pane_set_t1_copy1

0xa884,	// (0x0003966a) main_pane_set_t2_copy1_ParamLimits

0xa884,	// (0x0003966a) main_pane_set_t2_copy1

0xa988,	// (0x0003976e) main_pane_set_t3_copy1

0xa996,	// (0x0003977c) main_pane_set_t4_copy1

0xa8a3,	// (0x00039689) set_content_pane_g1_copy1_ParamLimits

0xa8a3,	// (0x00039689) set_content_pane_g1_copy1

0xa9a4,	// (0x0003978a) setting_code_pane_copy1

0xa9ac,	// (0x00039792) setting_slider_graphic_pane_copy1

0xa9ac,	// (0x00039792) setting_slider_pane_copy1

0xa9ac,	// (0x00039792) setting_text_pane_copy1

0xa9ac,	// (0x00039792) setting_volume_pane_copy1

0xa9a4,	// (0x0003978a) settings_code_pane_cp2_copy1

0xa9b4,	// (0x0003979a) settings_code_pane_cp_copy1_ParamLimits

0xa9b4,	// (0x0003979a) settings_code_pane_cp_copy1

0x2b18,	// (0x000318fe) volume_set_pane_copy1

0xa9c8,	// (0x000397ae) volume_set_pane_g10_copy1

0xa9d0,	// (0x000397b6) volume_set_pane_g1_copy1

0xa9d8,	// (0x000397be) volume_set_pane_g2_copy1

0xa9e0,	// (0x000397c6) volume_set_pane_g3_copy1

0xa9e8,	// (0x000397ce) volume_set_pane_g4_copy1

0xa9f0,	// (0x000397d6) volume_set_pane_g5_copy1

0xa9f8,	// (0x000397de) volume_set_pane_g6_copy1

0xaa00,	// (0x000397e6) volume_set_pane_g7_copy1

0xaa08,	// (0x000397ee) volume_set_pane_g8_copy1

0xaa10,	// (0x000397f6) volume_set_pane_g9_copy1

0x3805,	// (0x000325eb) bg_set_opt_pane_cp_copy1_ParamLimits

0x3805,	// (0x000325eb) bg_set_opt_pane_cp_copy1

0x2b20,	// (0x00031906) setting_slider_pane_t1_copy1_ParamLimits

0x2b20,	// (0x00031906) setting_slider_pane_t1_copy1

0x2b3e,	// (0x00031924) setting_slider_pane_t2_copy1_ParamLimits

0x2b3e,	// (0x00031924) setting_slider_pane_t2_copy1

0x2b58,	// (0x0003193e) setting_slider_pane_t3_copy1_ParamLimits

0x2b58,	// (0x0003193e) setting_slider_pane_t3_copy1

0x2b70,	// (0x00031956) slider_set_pane_copy1_ParamLimits

0x2b70,	// (0x00031956) slider_set_pane_copy1

0x40cc,	// (0x00032eb2) set_opt_bg_pane_g1_copy2

0x40d4,	// (0x00032eba) set_opt_bg_pane_g2_copy2

0xaa18,	// (0x000397fe) set_opt_bg_pane_g3_copy2

0x40e4,	// (0x00032eca) set_opt_bg_pane_g4_copy2

0x40ec,	// (0x00032ed2) set_opt_bg_pane_g5_copy2

0x40f4,	// (0x00032eda) set_opt_bg_pane_g6_copy2

0xaa22,	// (0x00039808) set_opt_bg_pane_g7_copy2

0xaa2a,	// (0x00039810) set_opt_bg_pane_g8_copy2

0xaa34,	// (0x0003981a) set_opt_bg_pane_g9_copy2

0x2b86,	// (0x0003196c) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b86,	// (0x0003196c) aid_size_touch_slider_mark_copy1

0xaa3e,	// (0x00039824) slider_set_pane_g1_copy1

0x2b9a,	// (0x00031980) slider_set_pane_g2_copy1

0x1bb4,	// (0x0003099a) slider_set_pane_g3_copy1_ParamLimits

0x1bb4,	// (0x0003099a) slider_set_pane_g3_copy1

0x1bc8,	// (0x000309ae) slider_set_pane_g4_copy1_ParamLimits

0x1bc8,	// (0x000309ae) slider_set_pane_g4_copy1

0x1be0,	// (0x000309c6) slider_set_pane_g5_copy1_ParamLimits

0x1be0,	// (0x000309c6) slider_set_pane_g5_copy1

0x1bb4,	// (0x0003099a) slider_set_pane_g6_copy1_ParamLimits

0x1bb4,	// (0x0003099a) slider_set_pane_g6_copy1

0x2ba2,	// (0x00031988) slider_set_pane_g7_copy1_ParamLimits

0x2ba2,	// (0x00031988) slider_set_pane_g7_copy1

0x3725,	// (0x0003250b) bg_set_opt_pane_cp2_copy1

0xaa47,	// (0x0003982d) setting_slider_graphic_pane_g1_copy1

0xaa50,	// (0x00039836) setting_slider_graphic_pane_t1_copy1

0xaa60,	// (0x00039846) setting_slider_graphic_pane_t2_copy1

0xaa70,	// (0x00039856) slider_set_pane_cp_copy1

0xaa80,	// (0x00039866) input_focus_pane_cp1_copy1

0xaa89,	// (0x0003986f) list_set_text_pane_copy1

0xaa91,	// (0x00039877) setting_text_pane_g1_copy1

0x05d9,	// (0x0002f3bf) set_text_pane_t1_copy1

0xaa80,	// (0x00039866) input_focus_pane_cp2_copy1

0xaa91,	// (0x00039877) setting_code_pane_g1_copy1

0xaa9a,	// (0x00039880) setting_code_pane_t1_copy1

0xaaa8,	// (0x0003988e) list_set_graphic_pane_copy1

0x3725,	// (0x0003250b) bg_set_opt_pane_cp4_copy1

0x4a06,	// (0x000337ec) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a06,	// (0x000337ec) list_set_graphic_pane_g1_copy1

0xaabb,	// (0x000398a1) list_set_graphic_pane_g2_copy1

0x4a1e,	// (0x00033804) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a1e,	// (0x00033804) list_set_graphic_pane_t1_copy1

0x7b6e,	// (0x00036954) rs_clock_indi_pane_g1

0xaac3,	// (0x000398a9) rs_clock_indi_pane_t1

0xaad1,	// (0x000398b7) rs_indi_pane

0xaad9,	// (0x000398bf) rs_indi_pane_g1

0xaae2,	// (0x000398c8) rs_indi_pane_g2

0xaaeb,	// (0x000398d1) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003eca4) rs_indi_pane_g

0x4d0b,	// (0x00033af1) bg_popup_preview_window_pane_cp03

0xaaf4,	// (0x000398da) popup_fep_tooltip_window_t1

0x87ea,	// (0x000375d0) popup_note2_window_g2_ParamLimits

0x87ea,	// (0x000375d0) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003ea3d) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003ea3d) popup_note2_window_g

0x8ce5,	// (0x00037acb) bg_popup_sub_pane_cp11_ParamLimits

0x8cf2,	// (0x00037ad8) cell_ai3_links_pane_g1_ParamLimits

0x8d09,	// (0x00037aef) cell_ai3_links_pane_t1

0x05d9,	// (0x0002f3bf) set_text_pane_t1_copy1_ParamLimits

0x4c1c,	// (0x00033a02) cell_graphic_popup_pane_cp2_ParamLimits

0x4c1c,	// (0x00033a02) cell_graphic_popup_pane_cp2

0xab02,	// (0x000398e8) cell_graphic_popup_pane_g1_cp2

0x3dbf,	// (0x00032ba5) cell_graphic_popup_pane_g2_cp2

0xab0a,	// (0x000398f0) cell_graphic_popup_pane_g3_cp2

0xab12,	// (0x000398f8) cell_graphic_popup_pane_t2_cp2

0x3dd0,	// (0x00032bb6) grid_highlight_pane_cp3_cp2

0x4411,	// (0x000331f7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4074,	// (0x00032e5a) main_tmo_pane_ParamLimits

0xe7df,	// (0x0003d5c5) popup_tmo_big_image_note_window

0xa1d5,	// (0x00038fbb) cell_ai5_widget_list_pane

0xa1dd,	// (0x00038fc3) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0003e26e) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0003e283) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0003e29a) tmo_note_info_pane_t3_ParamLimits

0xa77f,	// (0x00039565) tmo_note_info_pane_t4_ParamLimits

0xa791,	// (0x00039577) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003ec92) tmo_note_info_pane_t_ParamLimits

0xa8af,	// (0x00039695) settings_container_pane_ParamLimits

0xaa78,	// (0x0003985e) indicator_popup_pane_cp5

0xaa78,	// (0x0003985e) indicator_popup_pane_cp6

0xaaa8,	// (0x0003988e) list_set_graphic_pane_copy1_ParamLimits

0x3711,	// (0x000324f7) bg_popup_window_pane_cp23

0xab20,	// (0x00039906) popup_tmo_big_image_note_window_g1

0xab2a,	// (0x00039910) popup_tmo_big_image_note_window_t1

0xab3a,	// (0x00039920) popup_tmo_big_image_note_window_t2

0xab4a,	// (0x00039930) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003ecab) popup_tmo_big_image_note_window_t

0x7b6e,	// (0x00036954) cell_ai5_widget_lrg_icon_pane_g1

0xab5a,	// (0x00039940) cell_ai5_widget_lrg_icon_pane_t1

0xab68,	// (0x0003994e) cell_ai5_widget_list_row_pane_ParamLimits

0xab68,	// (0x0003994e) cell_ai5_widget_list_row_pane

0xab7f,	// (0x00039965) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab7f,	// (0x00039965) cell_ai5_widget_list_row_pane_g1

0xab8c,	// (0x00039972) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab8c,	// (0x00039972) cell_ai5_widget_list_row_pane_t1

0xabbd,	// (0x000399a3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabbd,	// (0x000399a3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003ecb2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003ecb2) cell_ai5_widget_list_row_pane_t

0x02ef,	// (0x0002f0d5) main_fep_vtchi_ss_pane

0xac01,	// (0x000399e7) popup_fep_char_pre_window

0xac09,	// (0x000399ef) popup_fep_ituss_window

0xf4c9,	// (0x0003e2af) popup_fep_vkbss_window

0xf4d6,	// (0x0003e2bc) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0003e2bc) grid_vkbss_keypad_pane

0xac64,	// (0x00039a4a) ituss_keypad_pane

0x2bc4,	// (0x000319aa) aid_vkbss_key_offset_ParamLimits

0x2bc4,	// (0x000319aa) aid_vkbss_key_offset

0xd0ba,	// (0x0003bea0) cell_vkbss_key_pane_ParamLimits

0xd0ba,	// (0x0003bea0) cell_vkbss_key_pane

0xac73,	// (0x00039a59) bg_cell_vkbss_key_g1_ParamLimits

0xac73,	// (0x00039a59) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0003e2cc) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0003e2cc) cell_vkbss_key_3p_pane

0xf500,	// (0x0003e2e6) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0003e2e6) cell_vkbss_key_g1

0xf51a,	// (0x0003e300) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0003e300) cell_vkbss_key_t1

0x2be6,	// (0x000319cc) cell_ituss_key_pane_ParamLimits

0x2be6,	// (0x000319cc) cell_ituss_key_pane

0xacd2,	// (0x00039ab8) bg_cell_ituss_key_g1_ParamLimits

0xacd2,	// (0x00039ab8) bg_cell_ituss_key_g1

0xacde,	// (0x00039ac4) cell_ituss_key_pane_g1_ParamLimits

0xacde,	// (0x00039ac4) cell_ituss_key_pane_g1

0x2bf7,	// (0x000319dd) cell_ituss_key_pane_g2_ParamLimits

0x2bf7,	// (0x000319dd) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003ecb9) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003ecb9) cell_ituss_key_pane_g

0x2c23,	// (0x00031a09) cell_ituss_key_t1_ParamLimits

0x2c23,	// (0x00031a09) cell_ituss_key_t1

0x2c5d,	// (0x00031a43) cell_ituss_key_t2_ParamLimits

0x2c5d,	// (0x00031a43) cell_ituss_key_t2

0x2c8e,	// (0x00031a74) cell_ituss_key_t3_ParamLimits

0x2c8e,	// (0x00031a74) cell_ituss_key_t3

0x2c5d,	// (0x00031a43) cell_ituss_key_t4_ParamLimits

0x2c5d,	// (0x00031a43) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003ecc0) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003ecc0) cell_ituss_key_t

0xad0a,	// (0x00039af0) cell_vkbss_key_3p_pane_g1

0xad12,	// (0x00039af8) cell_vkbss_key_3p_pane_g2

0xad1a,	// (0x00039b00) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003eccb) cell_vkbss_key_3p_pane_g

0x02ef,	// (0x0002f0d5) bg_popup_fep_char_preview_window_cp02

0x2cd1,	// (0x00031ab7) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0003e1b2) main_ai5_sk_pane

0xa80b,	// (0x000395f1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa817,	// (0x000395fd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x820c,	// (0x00036ff2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa82c,	// (0x00039612) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003ec9d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa838,	// (0x0003961e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4074,	// (0x00032e5a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0003e32b) main_ai5_sk_pane_g1

0x5a18,	// (0x000347fe) popup_query_code_window_g1

0xac1f,	// (0x00039a05) popup_fep_vkb_icf_pane

0xac3e,	// (0x00039a24) popup_fep_vtchi_icf_pane

0xad2b,	// (0x00039b11) bg_icf_pane

0xad37,	// (0x00039b1d) list_vkb_icf_pane

0xad46,	// (0x00039b2c) bg_icf_pane_cp01

0xad59,	// (0x00039b3f) vtchi_icf_list_pane

0xad69,	// (0x00039b4f) list_vkb_icf_pane_t1_ParamLimits

0xad69,	// (0x00039b4f) list_vkb_icf_pane_t1

0xad7f,	// (0x00039b65) vtchi_icf_list_pane_t1_ParamLimits

0xad7f,	// (0x00039b65) vtchi_icf_list_pane_t1

0xac09,	// (0x000399ef) popup_fep_ituss_window_ParamLimits

0xac3e,	// (0x00039a24) popup_fep_vtchi_icf_pane_ParamLimits

0xac64,	// (0x00039a4a) ituss_keypad_pane_ParamLimits

0x2bb8,	// (0x0003199e) ituss_sks_pane

0xad2b,	// (0x00039b11) bg_icf_pane_ParamLimits

0xabe5,	// (0x000399cb) icf_edit_indi_pane_ParamLimits

0xabe5,	// (0x000399cb) icf_edit_indi_pane

0xad37,	// (0x00039b1d) list_vkb_icf_pane_ParamLimits

0xad46,	// (0x00039b2c) bg_icf_pane_cp01_ParamLimits

0xabf4,	// (0x000399da) icf_edit_indi_pane_cp01_ParamLimits

0xabf4,	// (0x000399da) icf_edit_indi_pane_cp01

0xad61,	// (0x00039b47) vtchi_query_pane

0x7dec,	// (0x00036bd2) icf_edit_indi_pane_g1_ParamLimits

0x7dec,	// (0x00036bd2) icf_edit_indi_pane_g1

0xadf0,	// (0x00039bd6) icf_edit_indi_pane_g2_ParamLimits

0xadf0,	// (0x00039bd6) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003ece3) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003ece3) icf_edit_indi_pane_g

0xadff,	// (0x00039be5) icf_edit_indi_pane_t1

0xad99,	// (0x00039b7f) bg_input_focus_pane_cp042

0x3fa3,	// (0x00032d89) vtchi_button_pane

0xada2,	// (0x00039b88) vtchi_query_pane_t1

0xadb0,	// (0x00039b96) vtchi_query_pane_t2

0xadbe,	// (0x00039ba4) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003ecd2) vtchi_query_pane_t

0x02ef,	// (0x0002f0d5) bg_button_pane_cp13

0xadcc,	// (0x00039bb2) vtchi_button_pane_g1

0x2ce0,	// (0x00031ac6) ituss_sks_pane_g1

0x2ceb,	// (0x00031ad1) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003ecd9) ituss_sks_pane_g

0xadd4,	// (0x00039bba) ituss_sks_pane_t1

0xade2,	// (0x00039bc8) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003ecde) ituss_sks_pane_t

0x75f9,	// (0x000363df) indicator_nsta_pane_cp_g1

0x7601,	// (0x000363e7) indicator_nsta_pane_cp_g2

0x7609,	// (0x000363ef) indicator_nsta_pane_cp_g3

0x75f9,	// (0x000363df) indicator_nsta_pane_cp_g4

0x7601,	// (0x000363e7) indicator_nsta_pane_cp_g5

0x7609,	// (0x000363ef) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003e87b) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0003dfca) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0003dfca) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003eb94) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003eb94) cell_graphic2_pane_t

0xf218,	// (0x0003dffe) cell_graphic2_control_pane_t1

0xd5d7,	// (0x0003c3bd) signal_pane_g3_ParamLimits

0xd5d7,	// (0x0003c3bd) signal_pane_g3

0xd5eb,	// (0x0003c3d1) signal_pane_g4_ParamLimits

0xd5eb,	// (0x0003c3d1) signal_pane_g4

0xabcf,	// (0x000399b5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabcf,	// (0x000399b5) cell_ai5_widget_list_row_pane_t3

0xacf8,	// (0x00039ade) cell_ituss_key_pane_t1_ParamLimits

0xacf8,	// (0x00039ade) cell_ituss_key_pane_t1

0x5669,	// (0x0003444f) form_field_data_wide_pane_vc_t2_ParamLimits

0x5669,	// (0x0003444f) form_field_data_wide_pane_vc_t2

0x567d,	// (0x00034463) form_field_data_wide_pane_vc_t3_ParamLimits

0x567d,	// (0x00034463) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003e5ea) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003e5ea) form_field_data_wide_pane_vc_t

0x72b5,	// (0x0003609b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x72b5,	// (0x0003609b) form_field_slider_wide_pane_vc_t3

0x7393,	// (0x00036179) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7393,	// (0x00036179) form_field_popup_wide_pane_vc_t2

0x73aa,	// (0x00036190) form_field_popup_wide_pane_vc_t3_ParamLimits

0x73aa,	// (0x00036190) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003e86a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003e86a) form_field_popup_wide_pane_vc_t

0xcf5c,	// (0x0003bd42) aid_fshwr2_btn_pane_ParamLimits

0xcf6d,	// (0x0003bd53) aid_fshwr2_syb_pane_ParamLimits

0xcf7e,	// (0x0003bd64) aid_fshwr2_txt_pane_ParamLimits

0x2224,	// (0x0003100a) fshwr2_bg_pane_ParamLimits

0xcf8a,	// (0x0003bd70) fshwr2_func_candi_pane_ParamLimits

0xcfa9,	// (0x0003bd8f) fshwr2_hwr_syb_pane_ParamLimits

0xcfc4,	// (0x0003bdaa) fshwr2_icf_pane_ParamLimits

0x32ae,	// (0x00032094) list_double_graphic_pane_vc_g4_ParamLimits

0x32ae,	// (0x00032094) list_double_graphic_pane_vc_g4

0x2c17,	// (0x000319fd) cell_ituss_key_pane_g3_ParamLimits

0x2c17,	// (0x000319fd) cell_ituss_key_pane_g3

0x2cbf,	// (0x00031aa5) cell_ituss_key_t5_ParamLimits

0x2cbf,	// (0x00031aa5) cell_ituss_key_t5

0xf4c9,	// (0x0003e2af) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
